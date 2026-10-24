#!/usr/bin/env python3
"""X117 -- join CSP `type_map.json` (SSA-keyed) to the declarations emitted in
the source tree, and (optionally) retype those declarations in place.

WHY
---
`tools/gen_e4_materialize.py` emits Hex-Rays-style locals (`int v5`,
`_DWORD *v1`) because its only type spelling map is a regex table.  The CSP
engine (`type_map.json`) resolved those same values to concrete class / scalar
types, but the two artifacts use different keys:

  CSP   : `0x00402F60::ecx_v0x4030A8`   (register value, def instruction)
          `0x00402F60::stack_+0x10`      (stack slot, esp-relative)
  tree  : `_DWORD *v7; // ecx` + `v7 = ...; /*0x4030a8*/`
          `int IsActive; // [esp+10h] [ebp-Ch]`

This tool reconstructs the join without guessing:

  * stack locals  -> the `[esp+XXh]` hint is the SSA stack offset.
  * register locals -> the first definition address in the emitted body
    (`/*0xADDR*/` on the initializer or the first assignment) is the SSA
    `v0xADDR` suffix.  IDA's `lvar.defea` points one byte inside the defining
    instruction; the item start is the same address the CSP extractor used
    (verified on 0x402F60: lvar v7 defea=0x4030a9 -> key ecx_v0x4030A8).
  * X119: `anchors/ida_lvars.json` (exported by
    `tools/csp_export/x119_export_lvars.py`) is now the DEFAULT and
    authoritative bridge for both slots: register lvars resolve via
    `{reg}_v0x{head}` probing `{reg}_v0x{defea}` as fallback, stack lvars via
    the authoritative `stkoff`; the emitted hints and def comments remain as
    textual fallbacks.  Pass `--ida-lvars ""` to disable.

Only size-preserving retypes are applied:
  pointer -> pointer-to-class (4 bytes on Win32) and int -> int (4 bytes).
  No cast insertion, no arity change, no by-value class retype, no invented
  types: the new spelling comes from type_map / the class authority only.

USAGE
  python tools/csp_export/x117_join_locals.py --report
  python tools/csp_export/x117_join_locals.py --report --ida-lvars .omo/x117_ida_lvars.json
  python tools/csp_export/x117_join_locals.py --apply [--dry-run] [--limit N]
  python tools/csp_export/x117_join_locals.py --verify-join   # sample match rates

The report is written to `anchors/x117_locals_join.json` (joined entries +
coverage table).  `--apply` rewrites declaration type tokens through libclang
AST byte offsets (never regex substitution); a source backup tag is expected
to exist (see the X117 worklog -- `x117-pre-1`).
"""
import argparse
import json
import re
import sys
import time
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / "src"
TYPE_MAP = ROOT / "type_map.json"
OUT = ROOT / "anchors" / "x117_locals_join.json"
# X119 durable artifact (Hex-Rays lvar dump: name -> defea/head/stkoff/reg).
# Passing an empty --ida-lvars disables it (pure textual fallback join).
IDA_LVARS = ROOT / "anchors" / "ida_lvars.json"

# ---------------------------------------------------------------- regexes
ANCHOR_RE = re.compile(r"^\s*//\s*(?:IDA\s+)?0[xX]([0-9A-Fa-f]{5,8})\s*$")
# Generic declaration forms we are allowed to retype.
#   group 1 = indent, 2 = base type, 3 = stars, 4 = name,
#   group 5 = initializer (without ';'), 6 = trailing comment
DECL_RE = re.compile(
    r"^(?P<indent>\s*)"
    r"(?P<base>(?:unsigned\s+)?(?:__int64|__int32|int|long|short|char|void|float|double|bool|"
    r"_DWORD|_BYTE|_WORD|_QWORD|DWORD|BYTE|WORD))"
    r"(?P<stars>\s*\*+)?"
    r"\s+(?P<name>[A-Za-z_]\w*)"
    r"\s*(?P<init>=(?!=)[^;]*)?"
    r";\s*(?://\s*(?P<hint>.*))?$"
)
REG_RE = re.compile(r"\b(eax|ebx|ecx|edx|esi|edi|ebp|esp)\b")
# IDA spells stack offsets as `[esp+10h]` (hex, h suffix) or `[esp+0x10]`.
# `10h` must be parsed as 0x10, not decimal 10.
STACK_RE = re.compile(
    r"\[\s*esp\s*\+\s*(?:(0[xX][0-9A-Fa-f]+)|([0-9A-Fa-f]+)h|(\d+))\s*\]")
DEFADDR_RE = re.compile(r"/\*\s*0[xX]([0-9A-Fa-f]{5,8})\s*\*/")
ASSIGN_RE = re.compile(r"\b([A-Za-z_]\w*)\s*(?:=(?!=)|\+=|-=|\*=|/=|\|=|&=|\^=|<<=|>>=|\+\+|--)")

GENERIC_BASES = {
    "int", "unsigned int", "_DWORD", "void", "char", "unsigned char",
    "_BYTE", "DWORD", "unsigned __int32", "unsigned __int64", "__int64",
}
# A type string from CSP is a pointer-to-class when it is a bare identifier
# that is not a primitive / sentinel.  (`char*` stays a char pointer.)
PRIM_TYPES = {
    "int", "unsigned int", "signed int", "long", "unsigned long", "short",
    "unsigned short", "char", "signed char", "unsigned char", "bool", "float",
    "double", "void", "VOID_PTR", "TOP", "_DWORD", "_BYTE", "_WORD", "_QWORD",
    "DWORD", "BYTE", "WORD", "__int16", "__int32", "__int64", "__int8",
    "unsigned __int16", "unsigned __int32", "unsigned __int64",
}
INT_TARGETS = {
    "int", "unsigned int", "signed int", "long", "unsigned long", "_DWORD",
    "DWORD", "__int32", "unsigned __int32",
}
# byte widths on Win32 -- retyping must not change the slot width
WIDTH = {
    "int": 4, "unsigned int": 4, "signed int": 4, "long": 4,
    "unsigned long": 4, "_DWORD": 4, "DWORD": 4, "__int32": 4,
    "unsigned __int32": 4, "float": 4, "void*": 4, "char*": 4,
    "char": 1, "unsigned char": 1, "signed char": 1, "_BYTE": 1,
    "BYTE": 1, "bool": 1, "short": 2, "unsigned short": 2, "_WORD": 2,
    "WORD": 2, "__int64": 8, "unsigned __int64": 8, "_QWORD": 8,
    "QWORD": 8, "double": 8,
}


# ---------------------------------------------------------------- text mask
def mask_code(text: str) -> bytearray:
    """1 for code bytes, 0 inside comments / string / char literals.

    The mask preserves length and newlines so offsets / line numbers line up.
    """
    n = len(text)
    m = bytearray(b"\x01") * n
    i = 0
    st = 0  # 0 code, 1 line comment, 2 block comment, 3 string, 4 char
    while i < n:
        c = text[i]
        if st == 0:
            if c == "/" and i + 1 < n and text[i + 1] == "/":
                st = 1
                m[i] = m[i + 1] = 0
                i += 2
                continue
            if c == "/" and i + 1 < n and text[i + 1] == "*":
                st = 2
                m[i] = m[i + 1] = 0
                i += 2
                continue
            if c == '"':
                st = 3
                m[i] = 0
            elif c == "'":
                st = 4
                m[i] = 0
        elif st == 1:
            if c == "\n":
                st = 0
                # keep the newline as code so line offsets stay visible
            else:
                m[i] = 0
        elif st == 2:
            if c == "*" and i + 1 < n and text[i + 1] == "/":
                m[i] = m[i + 1] = 0
                st = 0
                i += 2
                continue
            if c != "\n":
                m[i] = 0
        elif st == 3 or st == 4:
            if c == "\\":
                m[i] = 0
                if i + 1 < n:
                    m[i + 1] = 0
                i += 2
                continue
            if (st == 3 and c == '"') or (st == 4 and c == "'"):
                m[i] = 0
                st = 0
            elif c != "\n":
                m[i] = 0
        i += 1
    return m


def line_starts(text: str):
    starts = [0]
    for i, c in enumerate(text):
        if c == "\n":
            starts.append(i + 1)
    return starts


def line_of(offset: int, starts):
    import bisect
    return bisect.bisect_right(starts, offset) - 1


# ---------------------------------------------------------------- scanning
def scan_functions():
    """Yield (addr, path, text, mask, fn_name, body_start, body_end).

    Anchor forms in the tree: a standalone `// 0xADDR` line followed (within a
    few lines) by a definition.  The opening brace is found after the
    signature's parameter list, so a `namespace gamemd {` wrapper does not get
    mistaken for the body.
    """
    files = sorted(p for p in SRC.rglob("*.cpp"))
    dbg = bool(__import__("os").environ.get("X117_DEBUG"))
    for fi, path in enumerate(files):
        if dbg and fi % 25 == 0:
            print(f"[scan] {fi}/{len(files)} {path.name}", file=sys.stderr, flush=True)
        raw = path.read_bytes()
        text = raw.decode("latin-1")
        mask = mask_code(text)
        starts = line_starts(text)
        lines = text.split("\n")
        for li, ln in enumerate(lines):
            am = ANCHOR_RE.match(ln)
            if not am:
                continue
            addr = int(am.group(1), 16)
            if not (0x401000 <= addr <= 0x7E0FFF):
                continue
            base_off = starts[li]
            # find the signature's first '(' after the anchor (skip comments)
            win_end = min(len(text), base_off + len(ln) + 800)
            p = text.find("(", base_off + len(ln), win_end)
            if p < 0:
                continue
            # any statement terminator before the paren means this is not a def
            semi = text.find(";", base_off + len(ln), p)
            if semi >= 0:
                continue
            # find matching ')'
            depth = 0
            q = p
            while q < len(text):
                if mask[q]:
                    if text[q] == "(":
                        depth += 1
                    elif text[q] == ")":
                        depth -= 1
                        if depth == 0:
                            break
                q += 1
            if q >= len(text):
                continue
            # find the opening body brace
            b = text.find("{", q + 1, min(len(text), q + 401))
            if b < 0:
                continue
            # a ';' between ')' and '{' means a declaration, not a body
            if text.find(";", q + 1, b) >= 0:
                continue
            depth = 0
            e = b
            while e < len(text):
                if mask[e]:
                    if text[e] == "{":
                        depth += 1
                    elif text[e] == "}":
                        depth -= 1
                        if depth == 0:
                            break
                e += 1
            if e >= len(text):
                continue
            # function name: between the last '::'/space and '('
            head = text[base_off + len(ln):p].strip().split("\n")[-1].strip()
            fn_name = re.sub(r"\s+", " ", head)[-160:]
            yield addr, path, text, mask, starts, fn_name, b + 1, e


def split_params(sig_text: str):
    """Split a parameter list at top-level commas (templates/pointers safe)."""
    out, cur, depth = [], [], 0
    for c in sig_text:
        if c in "(<[":
            depth += 1
        elif c in ")>]":
            depth -= 1
        if c == "," and depth == 0:
            out.append("".join(cur))
            cur = []
        else:
            cur.append(c)
    if "".join(cur).strip():
        out.append("".join(cur))
    return [x.strip() for x in out]


def param_name_type(p: str):
    p = re.sub(r"\s*=\s*.*$", "", p).strip()
    m = re.match(r"^(.*?)([A-Za-z_]\w*)\s*$", p)
    if not m:
        return None
    pre = m.group(1).strip()
    name = m.group(2)
    if not pre or pre in ("const", "struct", "class"):
        return None
    stars = pre.count("*")
    base = pre.replace("*", " ").replace("&", " ").strip()
    base = re.sub(r"\b(const|volatile|struct|class)\b", "", base).strip()
    base = re.sub(r"\s+", " ", base)
    return name, base, stars


def scan_decls(text, mask, starts, body_start, body_end):
    """Yield local declarations inside a function body.

    Depth is tracked from the body brace so global/namespace lines cannot
    match.  Only line-leading declarations are considered (the emitter writes
    one declaration per line).
    """
    lines = text[body_start:body_end].split("\n")
    depth = 1
    pos = body_start
    for ln in lines:
        line_start = pos
        pos += len(ln) + 1
        # depth at the start of this line
        code = mask[line_start:line_start + len(ln)]
        # count braces on this line for the *next* line
        d = depth
        for k, ch in enumerate(ln):
            if k < len(code) and code[k]:
                if ch == "{":
                    d += 1
                elif ch == "}":
                    d -= 1
        decl_depth = depth
        depth = max(depth, d) if d < depth else d
        if decl_depth < 1:
            continue
        m = DECL_RE.match(ln.rstrip("\r"))
        if not m:
            continue
        base = re.sub(r"\s+", " ", m.group("base")).strip()
        stars = (m.group("stars") or "").count("*")
        if base not in GENERIC_BASES:
            continue
        # arrays / pointers-to-functions / multiple declarators do not match
        if "[" in ln.split("//")[0]:
            continue
        yield {
            "line": line_of(line_start, starts) + 1,
            "offset": line_start,
            "name": m.group("name"),
            "base": base,
            "stars": stars,
            "init": (m.group("init") or "").strip(),
            "hint": (m.group("hint") or "").strip(),
        }


# ---------------------------------------------------------------- join
def load_type_map():
    t0 = time.time()
    data = json.load(open(TYPE_MAP, encoding="utf-8"))["type_map"]
    per_func = defaultdict(dict)
    for k, v in data.items():
        if "::" not in k:
            continue
        fa, var = k.split("::", 1)
        per_func[fa.lower()][var.lower()] = v
    print(f"[type_map] {len(data)} entries, {len(per_func)} functions, "
          f"{time.time() - t0:.1f}s", file=sys.stderr)
    return per_func


def load_ida_lvars(path):
    if not path or not Path(path).exists():
        return {}
    data = json.load(open(path, encoding="utf-8"))
    # X119 artifact: {"_meta": .., "manifest": .., "functions": {fa: {...}}}.
    # Legacy flat dumps: {fa: {name: info}} directly at the top level.
    funcs = data.get("functions", data) if isinstance(data, dict) else data
    out = {}
    for fa, rec in funcs.items():
        if not fa.lower().startswith("0x"):
            continue  # _meta / manifest / functions wrapper keys
        fk = fa.lower()
        if not fk.startswith("0x"):
            fk = "0x%08x" % int(fa, 16)
        # X119 nests the lvars under "lvars" (with a "this_type" sibling);
        # legacy flat dumps are name -> info directly.
        lvs = rec.get("lvars") if isinstance(rec, dict) and "lvars" in rec \
            else rec
        out[fk] = lvs
    return out


def first_assign_addrs(text, mask, starts, body_start, body_end, names):
    """name -> smallest `/*0xADDR*/` of a statement that assigns it."""
    res = {}
    lines = text[body_start:body_end].split("\n")
    pos = body_start
    for ln in lines:
        line_start = pos
        pos += len(ln) + 1
        am = DEFADDR_RE.search(ln)
        if not am:
            continue
        addr = int(am.group(1), 16)
        for nm in ASSIGN_RE.finditer(ln):
            if line_start + nm.start() < len(mask) and not mask[line_start + nm.start()]:
                continue  # assignment text inside a comment
            n = nm.group(1)
            if n in names:
                cur = res.get(n)
                if cur is None or addr < cur:
                    res[n] = addr
    return res


BYVALUE_HINTS = {
    "Coord", "CellStruct", "ColorStruct", "RectangleStruct", "Point2D",
    "Vector3D", "Matrix3x3", "Int64", "TimerStruct", "StreamClass", "Array",
}


def int_ptr_use_stats_many(body, bmask, names):
    """Conservative textual gate for `int slot -> class pointer` retypes.

    One pass over the function body for all candidate names (the naive
    per-name pass was O(candidates * body) and made the full-tree report take
    minutes).  The emitted body must already treat the value as a pointer:
    every use is a `->` access, a truth/0 comparison, or an assignment from an
    expression that itself carries a pointer form (`->`, a `(Class *)` cast,
    NULL).  Any arithmetic, subscript, dot access, `(int)name` cast, increment
    or ambiguous argument/return use makes the retype unsafe.
    """
    cats = {n: Counter() for n in names}
    rhs = {n: [] for n in names}
    for mm in re.finditer(r"\b[A-Za-z_]\w*\b", body):
        name = mm.group(0)
        if name not in names:
            continue
        i = mm.start()
        if i < len(bmask) and not bmask[i]:
            continue
        line_start = body.rfind("\n", 0, i) + 1
        line_end = body.find("\n", i)
        line = body[line_start:line_end]
        if re.match(r"^\s*(?:unsigned\s+)?(?:int|_DWORD|DWORD)\s+"
                    + re.escape(name) + r"\s*;", line):
            continue
        after = body[i + len(name):i + len(name) + 3]
        before = body[max(0, i - 3):i]
        c = cats[name]
        if after.startswith("->"):
            c["arrow"] += 1
        elif after.startswith("."):
            c["dot"] += 1
        elif after.startswith("["):
            c["subscript"] += 1
        elif re.match(r"\s*=(?!=)", after):
            semi = body.find(";", i)
            rhs[name].append(body[i + len(name):semi + 1 if semi >= 0 else i + 120])
            c["assign"] += 1
        elif re.match(r"\s*(?:==|!=|<=|>=|<|>)", after):
            c["compare"] += 1
        elif re.match(r"\s*[-+*/&|^]", after):
            c["arith"] += 1
        elif after.startswith("++") or after.startswith("--") \
                or before.endswith("++") or before.endswith("--"):
            c["incdec"] += 1
        elif re.search(r"\(\s*(?:int|unsigned int|_DWORD|DWORD)\s*\)\s*$", before):
            c["cast-int"] += 1
        elif re.search(r"!\s*$", before):
            c["truth"] += 1
        else:
            c["other"] += 1
    out = {}
    for name in names:
        c = cats[name]
        bad = sum(c[k] for k in
                  ("dot", "subscript", "arith", "incdec", "cast-int", "other"))
        rhs_bad = sum(1 for r in rhs[name] if not re.search(
            r"\((?:[A-Za-z_]\w*(?:::\w+)?\s*\*)\)|->|\bNULL\b|\bnullptr\b|=\s*0\s*;", r))
        out[name] = (bad == 0 and rhs_bad == 0 and c["arrow"] > 0, dict(c))
    return out


def classify(decl, csp_entry, source, allow_int_ptr=True):
    """Decide the action for one joined declaration.

    Returns (action, new_type, reason).  `action` is one of:
      retype | noop (already the same spelling) | skip
    """
    t = (csp_entry or {}).get("type", "")
    t = t.strip()
    is_ptr = decl["stars"] > 0
    if not t or t in ("TOP",):
        return "skip", None, "csp-empty"
    src_width = 4 if is_ptr else WIDTH.get(decl["base"])
    if is_ptr:
        # pointer slot: only a pointer-to-class target is size-preserving
        if t.endswith("*"):
            base = t.rstrip("*").strip()
            if base in ("char", "unsigned char", "_BYTE", "BYTE", "void"):
                # already a generic pointer spelling; keep it unless the
                # declaration base differs only in spelling
                if decl["base"] == "char" and base == "char":
                    return "noop", None, "already-char*"
                return "skip", None, "csp-prim-pointer"
            return "skip", None, "csp-prim-pointer"
        if t in PRIM_TYPES:
            return "skip", None, "csp-prim"
        # by-value struct types are not pointers: size change, refuse
        if t in ("Coord", "CellStruct", "ColorStruct", "Cell") or " " in t:
            return "skip", None, "csp-by-value"
        new = t + " *"
        return "retype", new, "ptr->class"
    else:
        # integer slot: only an integer-family target is size-preserving
        if t in PRIM_TYPES:
            if t in INT_TARGETS:
                if WIDTH.get(t) != src_width:
                    return "skip", None, "width-mismatch"
                if t == decl["base"]:
                    return "noop", None, "same-int"
                return "retype", t, "int->int"
            return "skip", None, "csp-nonint-scalar"
        # A class name in an integer slot means the slot really holds a class
        # pointer (Hex-Rays printed pointer values as int when the type was
        # unknown).  This is the C2440/C2227 driver.  It is byte-size
        # preserving on Win32 and is the X117 sample form; it is reported
        # separately because the emitted expression forms may still be
        # integer-shaped (see the worklog).
        if not allow_int_ptr:
            return "skip", None, "csp-class-in-int-slot"
        if t in BYVALUE_HINTS or " " in t:
            return "skip", None, "csp-by-value"
        if src_width != 4:
            return "skip", None, "width-mismatch"
        return "retype", t + " *", "int->class*"


def build_report(ida_lvars_path=None, allow_int_ptr=True):
    tm = load_type_map()
    ida = load_ida_lvars(ida_lvars_path)
    stats = Counter()
    shape_decls = Counter()
    shape_hits = Counter()
    shape_actions = Counter()
    reasons = Counter()
    reasons_samples = defaultdict(list)
    joined = {}
    funcs_seen = set()
    key_hits = 0
    key_tries = 0
    join_sources = Counter()

    for addr, path, text, mask, starts, fn_name, bstart, bend in scan_functions():
        fa = "0x%08X" % addr
        fl = fa.lower()
        if fl in funcs_seen:
            stats["dup-anchor"] += 1
            continue
        funcs_seen.add(fl)
        keys = tm.get(fl, {})
        stats["functions"] += 1
        if not keys:
            stats["no-csp-func"] += 1
        decls = list(scan_decls(text, mask, starts, bstart, bend))
        stats["generic-decls"] += len(decls)
        names = {d["name"] for d in decls}
        defmap = None
        fn_ida = ida.get(fl, {})
        for d in decls:
            stats["decls"] += 1
            shape = d["base"] + ("*" * d["stars"])
            shape_decls[shape] += 1
            name = d["name"]

            def stack_key(off):
                return ("stack_+0x%x" % off) if off >= 0 \
                    else ("stack_-0x%x" % -off)

            def defea_of(rec):
                v = rec.get("defea")
                if v is None:
                    return None
                return int(v, 16) if isinstance(v, str) else int(v)

            # ---- candidate SSA keys in deterministic priority order.
            # X119: the Hex-Rays lvar is authoritative for both the slot kind
            # (stack offset / register) and the def address (probe the
            # containing instruction head first, raw defea as fallback --
            # exactly the two-probe order of the historical t14 bridge).
            cands = []
            sm = STACK_RE.search(d["hint"])
            rm = None if sm else REG_RE.search(d["hint"])
            hint_reg = rm.group(1) if rm else None
            if sm:
                if sm.group(1):
                    off = int(sm.group(1), 16)
                elif sm.group(2):
                    off = int(sm.group(2), 16)
                else:
                    off = int(sm.group(3), 10)
                cands.append(("stack_+0x%x" % off, "stack-hint"))
            lv = fn_ida.get(name)
            if lv is not None:
                if lv.get("stkoff") is not None:
                    cands.append((stack_key(lv["stkoff"]), "ida-stkoff"))
                reg = lv.get("reg") or ""
                if reg:
                    for base, src in ((lv.get("head"), "ida-lvar-head"),
                                      (defea_of(lv), "ida-lvar-defea")):
                        if base is not None:
                            cands.append(("%s_v0x%X" % (reg, base), src))
                elif hint_reg:
                    for base, src in ((lv.get("head"), "ida-hint-head"),
                                      (defea_of(lv), "ida-hint-defea")):
                        if base is not None:
                            cands.append(
                                ("%s_v0x%X" % (hint_reg, base), src))
            if not cands and hint_reg:
                dm = DEFADDR_RE.search(d["hint"])
                if dm:
                    cands.append(("%s_v0x%X" % (hint_reg, int(dm.group(1), 16)),
                                  "decl-defaddr"))
                else:
                    if defmap is None:
                        defmap = first_assign_addrs(
                            text, mask, starts, bstart, bend, names)
                    defea = defmap.get(name)
                    if defea is not None:
                        cands.append(("%s_v0x%X" % (hint_reg, defea),
                                      "decl-defmap"))
            if not cands:
                reasons["no-hint" if not sm and not hint_reg
                        else "no-defaddr"] += 1
                continue
            key_tries += 1
            ent = None
            for key, source in cands:
                ent = keys.get(key.lower())
                if ent is not None:
                    break
                key = source = None
            if ent is None:
                reasons["key-miss"] += 1
                if len(reasons_samples["key-miss"]) < 12:
                    reasons_samples["key-miss"].append(
                        [fl, name, cands[0][0],
                         d["base"] + " *" * d["stars"]])
                continue
            key_hits += 1
            join_sources[source] += 1
            shape_hits[shape] += 1
            action, new_type, why = classify(d, ent, source, allow_int_ptr)
            shape_actions[shape + " -> " + str(ent.get("type")) + " [" + why + "]"] += 1
            entry = {
                "ssa_key": "0x%08X::%s" % (addr, key),
                "csp_type": ent.get("type"),
                "confidence": ent.get("confidence"),
                "source": source,
                "decl_type": d["base"] + " *" * d["stars"],
                "new_type": new_type,
                "line": d["line"],
                "action": action,
                "reason": why,
            }
            funcs = joined.setdefault(fa, {
                "name": fn_name,
                "file": str(path.relative_to(ROOT)).replace("\\", "/"),
                "lvars": {}})
            funcs["lvars"][name] = entry
            if action == "skip":
                reasons[why] += 1
                if len(reasons_samples[why]) < 8:
                    reasons_samples[why].append(
                        [fl, name, key, ent.get("type"), d["base"] + " *" * d["stars"]])
                continue
            if action == "noop":
                stats["noop"] += 1
                stats["noop-" + ("ptr" if d["stars"] else "int")] += 1
                continue
            stats["retype"] += 1
            stats["retype-" + why] += 1
        # one body pass for every int->class* candidate of this function
        fnobj = joined.get(fa)
        if fnobj:
            ip = [n for n, inf in fnobj["lvars"].items()
                  if inf.get("reason") == "int->class*"]
            if ip:
                batched = int_ptr_use_stats_many(
                    text[bstart:bend], mask[bstart:bend], ip)
                for n, (safe, ustats) in batched.items():
                    fnobj["lvars"][n]["use_safe"] = safe
                    fnobj["lvars"][n]["use_stats"] = ustats
                    stats["int-ptr-safe" if safe else "int-ptr-unsafe"] += 1

    coverage = {
        "functions_scanned": stats["functions"],
        "functions_without_csp_keys": stats["no-csp-func"],
        "generic_decls": stats["generic-decls"],
        "join_attempts": key_tries,
        "join_hits": key_hits,
        "join_hit_rate": round(key_hits / key_tries, 4) if key_tries else 0.0,
        "join_sources": dict(join_sources.most_common()),
        "retype_candidates": stats["retype"],
        "noop": stats["noop"],
        "unjoinable": dict(reasons),
        "retype_by_kind": {k[7:]: v for k, v in stats.items() if k.startswith("retype-")},
        "noop_by_kind": {k[5:]: v for k, v in stats.items() if k.startswith("noop-")},
        "int_ptr_safe": stats["int-ptr-safe"],
        "int_ptr_unsafe": stats["int-ptr-unsafe"],
        "decl_shapes": dict(shape_decls.most_common()),
        "joined_shapes": dict(shape_hits.most_common()),
        "actions": dict(shape_actions.most_common(40)),
    }
    artifact = {
        "_meta": {
            "tool": "tools/csp_export/x117_join_locals.py",
            "generated": time.strftime("%Y-%m-%dT%H:%M:%S"),
            "type_map": str(TYPE_MAP.relative_to(ROOT)).replace("\\", "/"),
            "ida_lvars": str(ida_lvars_path) if ida_lvars_path else None,
            "source_note": (
                "reg keys derived from emitted /*0xADDR*/ def comments"
                if not ida_lvars_path else
                "SSA keys resolved via IDA lvar defea/head + stkoff "
                "(X119 anchors/ida_lvars.json), textual fallbacks after"
            ),
            "allow_int_ptr": allow_int_ptr,
        },
        "coverage": coverage,
        "functions": joined,
    }
    OUT.write_text(json.dumps(artifact, indent=1, sort_keys=True), encoding="utf-8")
    return artifact, reasons_samples


# ---------------------------------------------------------------- report
def print_report(art, samples):
    c = art["coverage"]
    print("=" * 72)
    print("X117 CSP <-> declaration join report")
    print("=" * 72)
    print(f"functions with a body anchor : {c['functions_scanned']}")
    print(f"generic declarations found   : {c['generic_decls']}")
    print(f"join attempts                : {c['join_attempts']}")
    print(f"join hits                    : {c['join_hits']} "
          f"({c['join_hit_rate'] * 100:.1f}%)")
    print(f"retype candidates            : {c['retype_candidates']}")
    print(f"  by kind                    : {c['retype_by_kind']}")
    print(f"noop (already same)          : {c['noop']}")
    print("unjoinable / skipped:")
    for k, v in sorted(c["unjoinable"].items(), key=lambda x: -x[1]):
        print(f"  {k:32s} {v}")
    print(f"artifact                     : {OUT}")
    for k, rows in samples.items():
        if rows:
            print(f"-- samples: {k}")
            for r in rows[:6]:
                print("   ", r)


# ---------------------------------------------------------------- apply
def _retype_one(task):
    """Parse one TU and rewrite the requested VarDecl type tokens.

    Runs in a worker process: libclang is not thread-safe, and parsing 188
    TUs sequentially took ~10 min (each large TU has a ~2.5 s AST walk).

    X117B: an edit value may be `{"new": "Foo *", "vis": "complete"| \
    "declared"}`.  `vis` makes the retype conditional on the target class
    being visible in this TU (a definition for `complete`, any declaration
    for `declared`); without it the retype could introduce an `unknown type
    name` / `incomplete type` diagnostic in a TU whose include closure does
    not carry the class.
    """
    if len(task) == 4:
        path, edits, dry_run, check_visibility = task
    else:
        path, edits, dry_run, check_visibility = task[0], task[1], task[2], False
    sys.path.insert(0, str(ROOT / "tools"))
    import clang.cindex as ci
    from clang_ast_checker import _find_libclang, _get_default_compile_args

    try:
        _find_libclang()
    except Exception:  # noqa: BLE001 -- already configured in this process
        pass
    index = ci.Index.create()
    p = Path(path)
    raw = p.read_bytes()
    text = raw.decode("latin-1")
    tu = index.parse(str(p), args=_get_default_compile_args(),
                     options=ci.TranslationUnit.PARSE_INCOMPLETE)
    found = {}
    declared = set()
    complete = set()
    for cur in tu.cursor.walk_preorder():
        if check_visibility:
            if cur.kind in (ci.CursorKind.STRUCT_DECL, ci.CursorKind.CLASS_DECL,
                            ci.CursorKind.UNION_DECL):
                declared.add(cur.spelling)
                if cur.is_definition():
                    complete.add(cur.spelling)
            elif cur.kind in (ci.CursorKind.TYPEDEF_DECL,
                              ci.CursorKind.TYPE_ALIAS_DECL,
                              ci.CursorKind.ENUM_DECL):
                declared.add(cur.spelling)
        if cur.kind != ci.CursorKind.VAR_DECL:
            continue
        loc = cur.location
        if not loc.file or Path(str(loc.file)).resolve() != p.resolve():
            continue
        k = (loc.line, cur.spelling)
        if k in edits:
            found[k] = cur
    repls = []  # (start, end, replacement, key)
    missed = []
    for k, spec in edits.items():
        if isinstance(spec, dict):
            new_type = spec["new"]
            vis = spec.get("vis")
        else:
            new_type = spec
            vis = None
        if vis:
            base = new_type[:-1].strip() if new_type.endswith("*") else new_type.strip()
            base = re.sub(r"\b(const|struct|class)\b", "", base).strip()
            if vis == "complete" and base not in complete:
                missed.append([str(p), k[0], k[1],
                               "type-incomplete:" + base])
                continue
            if vis == "declared" and base not in declared:
                missed.append([str(p), k[0], k[1],
                               "type-undeclared:" + base])
                continue
        cur = found.get(k)
        if cur is None:
            missed.append([str(p), k[0], k[1], "ast-miss"])
            continue
        toks = list(cur.get_tokens())
        name_tok = None
        for t in toks:
            if t.spelling == cur.spelling:
                name_tok = t
                break
        if name_tok is None:
            missed.append([str(p), k[0], k[1], "no-name-token"])
            continue
        start = cur.extent.start.offset
        end = name_tok.extent.start.offset
        old = text[start:end]
        if "(" in old or ")" in old or ";" in old:
            missed.append([str(p), k[0], k[1], "unexpected-type-span"])
            continue
        repl = new_type if new_type.endswith("*") else new_type + " "
        repls.append((start, end, repl, k))
    if not repls:
        return path, 0, missed, []
    if dry_run:
        return path, len(repls), missed, [
            (r[3][0], r[3][1], r[2].strip(), text[r[0]:r[1]]) for r in repls[:5]]
    # byte edits, descending offset
    buf = bytearray(raw)
    for start, end, repl, k in sorted(repls, key=lambda x: -x[0]):
        rb = repl.encode("latin-1")
        buf[start:end] = rb
    p.write_bytes(bytes(buf))
    return path, len(repls), missed, []


def ast_retype(edits_by_file, dry_run=False, jobs=8, check_visibility=False):
    """edits_by_file: path -> {(line, name): new_type | {new, vis}}."""
    from concurrent.futures import ProcessPoolExecutor
    tasks = [(str(path), edits, dry_run, check_visibility)
             for path, edits in sorted(edits_by_file.items())]
    applied = 0
    missed = []
    if jobs <= 1:
        results = map(_retype_one, tasks)
        for path, n, miss, dry in results:
            applied += n
            missed.extend(miss)
            for d in dry:
                print(f"[dry] {Path(path).name}:{d[0]} {d[1]} -> {d[2]} ({d[3]!r})")
        return applied, missed
    with ProcessPoolExecutor(max_workers=jobs) as ex:
        for path, n, miss, dry in ex.map(_retype_one, tasks):
            applied += n
            missed.extend(miss)
            for d in dry:
                print(f"[dry] {Path(path).name}:{d[0]} {d[1]} -> {d[2]} ({d[3]!r})")
    return applied, missed


def apply_join(art, dry_run=False, limit=0, safe_int_ptr=False,
               only_int_ptr=False, select=None, jobs=8):
    edits_by_file = defaultdict(dict)
    seen_funcs = 0
    sel = set()
    for item in (select or []):
        a, _, v = item.partition(":")
        sel.add((int(a, 16), v))
    for fa in sorted(art["functions"]):
        if limit and seen_funcs >= limit:
            break
        fn = art["functions"][fa]
        p = ROOT / fn["file"]
        n_before = len(edits_by_file[p])
        for name, info in fn["lvars"].items():
            if sel and (int(fa, 16), name) not in sel:
                continue
            if info.get("action") != "retype":
                continue
            if only_int_ptr and info.get("reason") != "int->class*":
                continue
            if safe_int_ptr and info.get("reason") == "int->class*" \
                    and not info.get("use_safe"):
                continue
            edits_by_file[p][(info["line"], name)] = info["new_type"]
        if len(edits_by_file[p]) != n_before:
            seen_funcs += 1
    edits_by_file = {p: e for p, e in edits_by_file.items() if e}
    total = sum(len(v) for v in edits_by_file.values())
    print(f"[apply] candidate edits: {total} in {len(edits_by_file)} files")
    applied, missed = ast_retype(edits_by_file, dry_run=dry_run, jobs=jobs)
    print(f"[apply] edits applied: {applied}, missed: {len(missed)}")
    for m in missed[:20]:
        print("  missed:", m)
    return applied, missed


# ---------------------------------------------------------------- main
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--safe-int-ptr", action="store_true",
                    help="only apply int->class* entries that pass the use gate")
    ap.add_argument("--only-int-ptr", action="store_true",
                    help="apply only int->class* entries (sample/wave isolation)")
    ap.add_argument("--select", action="append", default=None,
                    help="apply only FUNC:VAR (repeatable)")
    ap.add_argument("--jobs", type=int, default=8,
                    help="libclang worker processes for --apply (default 8)")
    ap.add_argument("--ida-lvars", default=str(IDA_LVARS),
                    help="X119 lvar dump path (default anchors/ida_lvars.json; "
                         "empty string disables)")
    ap.add_argument("--no-int-ptr", action="store_true",
                    help="strict policy: never retype an int slot to a class pointer")
    args = ap.parse_args()
    if not (args.report or args.apply):
        args.report = True
    ida_path = args.ida_lvars or None
    art, samples = build_report(ida_path, allow_int_ptr=not args.no_int_ptr)
    if args.report:
        print_report(art, samples)
    if args.apply:
        apply_join(art, dry_run=args.dry_run, limit=args.limit,
                   safe_int_ptr=args.safe_int_ptr,
                   only_int_ptr=args.only_int_ptr,
                   select=args.select, jobs=args.jobs)


if __name__ == "__main__":
    main()
