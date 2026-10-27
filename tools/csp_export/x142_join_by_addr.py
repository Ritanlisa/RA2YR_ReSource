#!/usr/bin/env python3
"""X142 -- variable-identity join **by address**, not by name.

WHY (root fix demanded by the coverage complaint)
-------------------------------------------------
X117 resolved a C++ declaration to its Hex-Rays lvar **by name**
(``lv = fn_ida.get(name)``) and only fell back to address heuristics as a
last resort.  That misses every variable whose C++ spelling drifted and all
13,508 lvars that carry an *empty* name in the IDA dump.  Yet the identity
information was never missing:

  * every e4 body line carries a per-line address anchor ``/*0x4011da*/``,
  * every lvar in ``anchors/ida_lvars.json`` carries ``head`` (the SSA
    version address) and ``defea`` (defining instruction, sometimes head+1).

Verified triple (0x4011C0 LoadAudioFile):
  C++ ``char *v3; // ebp``          lvar v3   reg=ebp head=0x4011DA
  line ``v3 = operator new(...)``   anchor            0x4011DA  -> EXACT
  C++ ``int v19[22]; // [esp+20h]`` lvar v19  stkoff=48  head=0x401262
  line ``CCFileClass::Construct(v19, ..)`` anchor      0x401262  -> EXACT
  C++ ``int v18; // [esp+1Ch]``     lvar v18  stkoff=44  head=0x40132F
  line ``v3->ptr_2 = v18;``         anchor            0x40132F  -> EXACT

So the join is: for each C++ declaration, take the anchor of the first
line that assigns (or reads) the variable, and match that address against
lvar ``head`` / ``defea``.  Name matching is a fallback only.

CASE-SENSITIVITY LESSON: ``ida_lvars.json`` keys are lowercase hex
(``0x004010c0``), ``x117_locals_join.json`` keys uppercase (``0x004010C0``).
Any string-keyed lookup across these artifacts silently misses.  Every
address in this tool is normalized to ``int(addr, 16)`` before comparison.

CSP key construction (after the lvar is identified):
  register lvar -> probe ``{reg}_v0x{head:x}`` then ``{reg}_v0x{defea:x}``
  stack lvar    -> probe ``stack_+0x{esp-hint}`` (G31 display convention),
                   then raw ``stack_+0x{stkoff}``, then ``stkoff-0x10``
                   (ida frame base -> esp-at-entry).  Type_map stack keys
                   are heterogeneous; probe order is deterministic.

Output ``anchors/x142_locals_join.json``: same schema as x117 plus
``match_method`` (addr-head / addr-defea / name / none), ``match_tier``
(exact-assign / exact-any / near / name) and ``lvar_type``.  Retype
candidates are restricted to int->class* where the class is a *specific*
class (AbstractClass / ObjectClass / IUnknown are generic bases and are
reported separately, never counted as actionable retypes).

USAGE
  python tools/csp_export/x142_join_by_addr.py            # full report
  python tools/csp_export/x142_join_by_addr.py --out ...   # alt artifact path
"""
import argparse
import json
import re
import sys
import time
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools" / "csp_export"))

# Reuse the proven X117 scanner/mask/regex infrastructure (read-only import).
import x117_join_locals as x117  # noqa: E402

IDA_LVARS = ROOT / "anchors" / "ida_lvars.json"
TYPE_MAP = ROOT / "type_map.json"
OUT = ROOT / "anchors" / "x142_locals_join.json"

# ---------------------------------------------------------------- decl forms
# Extended declaration regex: X117's shape PLUS arrays and __intN bases.
#   int v4; // edx
#   int v19[22]; // [esp+20h] [ebp-2B0h] BYREF
#   unsigned __int8 **v9; // eax
#   __int16 v12; // [esp+74h] [ebp-4h]
DECL_X142_RE = re.compile(
    r"^(?P<indent>\s*)"
    r"(?P<base>(?:unsigned\s+)?(?:__int64|__int32|__int16|__int8|"
    r"int|long|short|char|void|float|double|bool|"
    r"_DWORD|_BYTE|_WORD|_QWORD|DWORD|BYTE|WORD))"
    r"(?P<stars>\s*\*+)?"
    r"\s*(?P<name>[A-Za-z_]\w*)"   # `char *v3` has no space after the star
    r"\s*(?P<arr>\[\s*\d*\s*\])?"
    r"\s*(?P<init>=(?!=)[^;]*)?"
    r";\s*(?://\s*(?P<hint>.*))?$"
)
EBP_RE = re.compile(r"\[\s*ebp\s*([+-])\s*(?:(0[xX][0-9A-Fa-f]+)|([0-9A-Fa-f]+)h|(\d+))\s*\]")
# X142 stack hint: `[esp+XXh]` AND `[esp-XXh]` (arg-passing slots below esp,
# e.g. `char v31; // [esp-4h] [ebp-24h]`).  X117's STACK_RE is plus-only,
# which let the `ebp` word hijack the register classification.
STACK_X142_RE = re.compile(
    r"\[\s*esp\s*(\+|-)\s*(?:(0[xX][0-9A-Fa-f]+)|([0-9A-Fa-f]+)h|(\d+))\s*\]")
WORD_RE = re.compile(r"\b[A-Za-z_]\w*\b")
# statement keywords that must never count as a variable mention
STOPWORDS = {
    "if", "else", "for", "while", "return", "goto", "sizeof", "switch",
    "case", "break", "continue", "do", "default", "NULL", "nullptr", "true",
    "false", "unsigned", "signed", "const", "struct", "class", "union",
    "enum", "void", "int", "char", "short", "long", "float", "double",
    "bool", "_DWORD", "_BYTE", "_WORD", "_QWORD", "DWORD", "BYTE", "WORD",
    "__int64", "__int32", "__int16", "__int8", "BYREF", "this",
}
GENERIC_BASES_X142 = set(x117.GENERIC_BASES) | {
    "__int8", "__int16", "__int32",
}
WIDTH_X142 = dict(x117.WIDTH)
WIDTH_X142.update({"__int8": 1, "__int16": 2, "__int32": 4})

# Generic-base classes: never counted as actionable int->class* retypes.
GENERIC_BASE_CLASSES = {"AbstractClass", "ObjectClass", "IUnknown"}
# Window (bytes) for the nearest-preceding-anchor fallback.
NEAR_WINDOW_DEFAULT = 64


def to_int(v):
    """Normalize any address spelling (str hex any case / int) to int."""
    if v is None:
        return None
    if isinstance(v, int):
        return v
    s = str(v).strip()
    if s.lower().startswith("0x"):
        return int(s, 16)
    return int(s)


# ---------------------------------------------------------------- lvar dump
def load_ida_lvars(path=IDA_LVARS):
    """{int_func_addr: {"lvars": {name: lv}, "this_type": ...}} with int keys."""
    data = json.load(open(path, encoding="utf-8"))
    funcs = data.get("functions", data)
    out = {}
    for fa, rec in funcs.items():
        ia = to_int(fa)
        if ia is None:
            continue
        lvs = rec.get("lvars", {}) if isinstance(rec, dict) else {}
        out[ia] = {"lvars": lvs, "this_type": rec.get("this_type"),
                   "fail": rec.get("fail")}
    return out


def load_type_map(path=TYPE_MAP):
    """{(int_func_addr, var_key_lower): entry} with int-normalized keys."""
    t0 = time.time()
    data = json.load(open(path, encoding="utf-8"))["type_map"]
    per_func = {}
    for k, v in data.items():
        if "::" not in k:
            continue
        fa, var = k.split("::", 1)
        ia = to_int(fa)
        if ia is None:
            continue
        per_func[(ia, var.strip().lower())] = v
    print(f"[type_map] {len(data)} entries, {len(per_func)} function-scoped, "
          f"{time.time() - t0:.1f}s", file=sys.stderr)
    return per_func


# ---------------------------------------------------------------- body facts
class FunctionBody:
    """Anchored-line facts for one function body."""

    __slots__ = ("addr", "path", "fn_name", "bstart", "bend", "text", "mask",
                 "starts", "lines", "line_anchor", "assign_anchors",
                 "mention_anchors", "line_gap")

    def __init__(self, addr, path, fn_name, bstart, bend, text, mask, starts):
        self.addr = addr
        self.path = path
        self.fn_name = fn_name
        self.bstart = bstart
        self.bend = bend
        self.text = text
        self.mask = mask
        self.starts = starts
        self.lines = text[bstart:bend].split("\n")
        # per line index -> anchor addr (first anchor on that line)
        self.line_anchor = {}
        # unanchored line index -> (prev_anchor, next_anchor) for gap match
        self.line_gap = {}
        # var -> sorted list of (addr, line_idx, is_assign)
        self.assign_anchors = defaultdict(list)
        self.mention_anchors = defaultdict(list)
        self._collect()

    def _collect(self):
        import bisect
        # pass 1: line anchors + gap bounds
        pos = self.bstart
        for li, ln in enumerate(self.lines):
            am = x117.DEFADDR_RE.search(ln)
            if am:
                self.line_anchor[li] = int(am.group(1), 16)
        anchored = sorted(self.line_anchor.items())
        a_lines = [li for li, _ in anchored]
        a_addrs = [a for _, a in anchored]
        prev = None
        for li in range(len(self.lines)):
            if li in self.line_anchor:
                prev = self.line_anchor[li]
                continue
            k = bisect.bisect_left(a_lines, li)
            nxt = a_addrs[k] if k < len(a_addrs) else None
            if prev is not None and nxt is not None:
                self.line_gap[li] = (prev, nxt)
        # pass 2: variable facts (assignments + mentions), single offset sweep
        pos = self.bstart
        for li, ln in enumerate(self.lines):
            line_start = pos
            pos += len(ln) + 1
            anchored_here = li in self.line_anchor
            for mm in x117.ASSIGN_RE.finditer(ln):
                i = line_start + mm.start()
                if i < len(self.mask) and not self.mask[i]:
                    continue
                n = mm.group(1)
                if n in STOPWORDS:
                    continue
                if anchored_here:
                    self.assign_anchors[n].append((self.line_anchor[li], li))
                else:
                    self.mention_anchors[n].append((None, li))
            for mm in WORD_RE.finditer(ln):
                i = line_start + mm.start()
                if i < len(self.mask) and not self.mask[i]:
                    continue
                n = mm.group(0)
                if n in STOPWORDS:
                    continue
                self.mention_anchors[n].append(
                    (self.line_anchor[li] if anchored_here else None, li))
        for d in (self.assign_anchors, self.mention_anchors):
            for n in d:
                d[n].sort(key=lambda t: (t[0] is not None, t[0] or 0, t[1]))

    def var_facts(self, name):
        """(assign_list, mention_list); entries with addr=None sit on
        unanchored lines (line_idx still valid for gap lookup)."""
        a = self.assign_anchors.get(name, [])
        m = self.mention_anchors.get(name, [])
        return a, m


def scan_decls_x142(body: FunctionBody):
    """Extended declaration scan (arrays + __intN), depth-guarded like X117.

    Yields dict: line / name / base / stars / is_array / arr_len / hint.
    """
    text, mask, starts = body.text, body.mask, body.starts
    lines = body.lines
    depth = 1
    pos = body.bstart
    for li, ln in enumerate(lines):
        line_start = pos
        pos += len(ln) + 1
        code = mask[line_start:line_start + len(ln)]
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
        m = DECL_X142_RE.match(ln.rstrip("\r"))
        if not m:
            continue
        base = re.sub(r"\s+", " ", m.group("base")).strip()
        if base not in GENERIC_BASES_X142:
            continue
        stars = (m.group("stars") or "").count("*")
        arr = m.group("arr") is not None
        if arr:
            # only fixed-size arrays; `[0]`/`[]` are pointers in disguise
            alen = re.search(r"\d+", m.group("arr"))
            arr_len = int(alen.group(0)) if alen else 0
            if arr_len == 0:
                continue
        else:
            arr_len = None
            # scalar forms must not have stray brackets (fn-ptr etc.)
            if "[" in ln.split("//")[0]:
                continue
        if (not arr) and m.group("init"):
            # initialized decls (`int v5 = 0;`) are fine -- X117 allowed them
            pass
        yield {
            "line": x117.line_of(line_start, starts) + 1,
            "li": li,
            "name": m.group("name"),
            "base": base,
            "stars": stars,
            "is_array": arr,
            "arr_len": arr_len,
            "hint": (m.group("hint") or "").strip(),
        }


# ---------------------------------------------------------------- identity
def hint_stack_off(hint):
    """signed esp-relative offset from a decl hint ([esp+XXh] / [esp-XXh])."""
    sm = STACK_X142_RE.search(hint)
    if not sm:
        return None
    if sm.group(2):
        off = int(sm.group(2), 16)
    elif sm.group(3):
        off = int(sm.group(3), 16)
    else:
        off = int(sm.group(4), 10)
    return -off if sm.group(1) == "-" else off


def hint_reg(hint):
    if STACK_X142_RE.search(hint):
        return None
    rm = x117.REG_RE.search(hint)
    return rm.group(1) if rm else None


def lv_defea(lv):
    v = lv.get("defea")
    if v is None:
        return None
    return to_int(v)


def lv_head(lv):
    v = lv.get("head")
    if v is None:
        return None
    return to_int(v)


def index_lvar_addrs(ida_lvs):
    """(head_idx, defea_idx): addr -> [lvar names], built once per function."""
    heads = defaultdict(list)
    defeas = defaultdict(list)
    for ln_, lv in ida_lvs.items():
        h, d = lv_head(lv), lv_defea(lv)
        if h is not None:
            heads[h].append(ln_)
        if d is not None and d != h:
            defeas[d].append(ln_)
    return heads, defeas


def pick_best(cands, decl, ida_lvs):
    """Deterministic candidate choice when several lvars share an address.

    Score: name equality +4, reg hint match +2, stack offset match +2,
    non-arg +1.  Ties break on stable name order.
    """
    if len(cands) == 1:
        return cands[0]
    hreg = hint_reg(decl["hint"])
    hso = hint_stack_off(decl["hint"])
    best, best_key = None, None
    for cn in sorted(cands):
        lv = ida_lvs.get(cn) or {}
        score = 0
        if cn == decl["name"]:
            score += 4
        if hreg and lv.get("reg") == hreg:
            score += 2
        so = lv.get("stkoff")
        if hso is not None and so is not None:
            # ida stkoff is frame-based: display esp offset = stkoff - (4 +
            # saved regs) -- delta family (calibrated: 0x4011C0 delta=0x10,
            # 0x765380 delta=4).  Exact-hint match stays authoritative.
            so = int(so)
            if any(so - d == hso for d in (0, 4, 8, 0xC, 0x10, 0x14)):
                score += 2
        if not lv.get("arg"):
            score += 1
        key = (-score, cn)
        if best_key is None or key < best_key:
            best, best_key = cn, key
    return best


def _arbiter(addr_lvar, decl, ida_lvs, tier, method, extra):
    """Decl-side consistency arbiter between two identity signals.

    Address remains the primary identity.  When the address match and the
    same-name lvar disagree AND the declaration carries its own hint comment
    (`// eax` / `// [esp+XXh]`), the hint arbitrates: the candidate whose
    reg / stack offset matches the declaration's own evidence wins.  This
    fixes the lvar-renumbering class in both directions (measured X142:
    183 rescues kept, 101 regressions flipped; undetermined ties keep the
    address match).  Flips are labeled match_tier="hint-arbiter".
    """
    name = decl["name"]
    if addr_lvar == name or name not in ida_lvs:
        return addr_lvar, method, tier, extra
    hreg = hint_reg(decl["hint"])
    if hreg:
        ra = (ida_lvs.get(addr_lvar) or {}).get("reg")
        rn = (ida_lvs.get(name) or {}).get("reg")
        if rn == hreg and ra != hreg:
            return name, "name", "hint-arbiter", extra
        return addr_lvar, method, tier, extra
    hso = hint_stack_off(decl["hint"])
    if hso is not None:
        sa = (ida_lvs.get(addr_lvar) or {}).get("stkoff")
        sn = (ida_lvs.get(name) or {}).get("stkoff")

        def _match(so):
            return so is not None and any(
                int(so) - d == hso for d in (0, 4, 8, 0xC, 0x10, 0x14))

        if _match(sn) and not _match(sa):
            return name, "name", "hint-arbiter", extra
    return addr_lvar, method, tier, extra


def resolve_identity(body: FunctionBody, decl, ida_lvs, near_window,
                     head_idx=None, defea_idx=None):
    """Match one declared variable to a Hex-Rays lvar by address.

    Returns (lvar_name, match_method, match_tier, extra) where extra is the
    byte distance for tier "near" (else None), or (None, "none", None, None).

    Tiers, in order (address before name, always):
      1 exact-assign : a variable *assignment* anchor == lvar head
      2 exact-assign : ... == lvar defea
      3 exact-any    : any mention anchor == head -- kind-gated (a stack-hint
                       decl only matches stack lvars, a reg-hint decl only
                       its own register, a hintless decl only the same-name
                       lvar).  Covers BYREF first-use reads (verified:
                       Construct(v19..) 0x401262 == v19 head) and prevents
                       argument-mention steals (Str@0x401215 vs v4 head).
      4 exact-any    : ... == defea
      5 near         : nearest assignment anchor <= head within `near_window`
                       (anchor = statement start, head may sit a few bytes
                       inside the statement)
      6 name         : C++ name == lvar name (fallback only)
    Arg lvars (head == function start) never match by address -- only by name.
    """
    name = decl["name"]
    hreg = hint_reg(decl["hint"])
    hso = hint_stack_off(decl["hint"])
    assigns, mentions = body.var_facts(name)
    a_addrs = [a for a, _ in assigns]
    if head_idx is None or defea_idx is None:
        head_idx, defea_idx = index_lvar_addrs(ida_lvs)

    def addr_cands(table, addr):
        cands = [c for c in table.get(addr, [])
                 if not (ida_lvs.get(c) or {}).get("arg")]
        if not cands:
            return []
        # kind gate: stack decl <-> stack lvar, reg decl <-> same reg,
        # no hint -> only the same-name lvar
        if hso is not None:
            cands = [c for c in cands
                     if (ida_lvs.get(c) or {}).get("stkoff") is not None]
        elif hreg:
            cands = [c for c in cands
                     if (ida_lvs.get(c) or {}).get("reg") == hreg]
        else:
            cands = [c for c in cands if c == name]
        return cands

    # tier 1/2: exact on assignment anchors
    for tier, table, method in (("exact-assign", head_idx, "addr-head"),
                                ("exact-assign-d", defea_idx, "addr-defea")):
        for a in a_addrs:
            cands = addr_cands(table, a)
            if cands:
                return _arbiter(pick_best(cands, decl, ida_lvs), decl,
                                ida_lvs, tier, method, None)
    # tier 3/4: exact on any mention anchor (kind-gated)
    m_addrs = [a for a, _ in mentions if a is not None]
    for tier, table, method in (("exact-any", head_idx, "addr-head"),
                                ("exact-any-d", defea_idx, "addr-defea")):
        for a in m_addrs:
            cands = addr_cands(table, a)
            if cands:
                return _arbiter(pick_best(cands, decl, ida_lvs), decl,
                                ida_lvs, tier, method, None)
    # tier 4b gap: the var's defining line has no anchor (ternary/if-else
    # lines -- emitter artifact), but its head falls strictly inside the
    # (prev_anchor, next_anchor) gap of that line.  Still address identity.
    for a, li in mentions:
        if a is not None:
            continue
        gap = body.line_gap.get(li)
        if not gap:
            continue
        cands = [cn for cn, lv in ida_lvs.items()
                 if not lv.get("arg")
                 and gap[0] < (lv_head(lv) or -1) < gap[1]]
        if hso is not None:
            cands = [c for c in cands
                     if (ida_lvs.get(c) or {}).get("stkoff") is not None]
        elif hreg:
            cands = [c for c in cands
                     if (ida_lvs.get(c) or {}).get("reg") == hreg]
        else:
            cands = [c for c in cands if c == name]
        if cands:
            return _arbiter(pick_best(cands, decl, ida_lvs), decl, ida_lvs,
                            "gap", "addr-head", None)
    # tier 5: nearest preceding assignment anchor (anchor = statement start,
    # head may sit a few bytes inside the statement).  Kind-gated the same way.
    best = None
    for ln_, lv in ida_lvs.items():
        if lv.get("arg"):
            continue
        if hso is not None and lv.get("stkoff") is None:
            continue
        if hreg and lv.get("stkoff") is None and lv.get("reg") != hreg:
            continue
        if hso is None and not hreg and ln_ != name:
            continue
        h = lv_head(lv)
        if h is None:
            continue
        prev = None
        for a in a_addrs:
            if a <= h:
                prev = a
            else:
                break
        if prev is not None and h - prev <= near_window:
            dist = h - prev
            reg_bonus = 1 if (hreg and lv.get("reg") == hreg) else 0
            so_bonus = 0
            so = lv.get("stkoff")
            if hso is not None and so is not None and any(
                    int(so) - d == hso for d in (0, 4, 8, 0xC, 0x10, 0x14)):
                so_bonus = 1
            key = (dist, -(reg_bonus + so_bonus + (2 if ln_ == name else 0)), ln_)
            if best is None or key < best[0]:
                best = (key, ln_)
    if best is not None:
        return _arbiter(best[1], decl, ida_lvs, "near", "addr-head",
                        best[0][0])
    # tier 6: name fallback
    if name in ida_lvs:
        return name, "name", "name", None
    return None, "none", None, None


# ---------------------------------------------------------------- CSP probe
def _stack_key(off):
    return ("stack_+0x%x" % off) if off >= 0 else ("stack_-0x%x" % -off)


def stack_probe_keys(decl, lv):
    """Deterministic stack key probe order.

    G31 built the type_map stack keys from the Hex-Rays ``[esp+Xh]`` *display*
    value, so the decl hint (same source) is probe #1.  For hintless decls the
    ida ``stkoff`` is frame-based: display = stkoff - (4 + saved_regs), so
    probe the delta family stkoff-{4,8,C,10,14} (0-4 pushed regs), then raw
    stkoff (older extractor convention) last.
    """
    out = []
    ho = hint_stack_off(decl["hint"])
    if ho is not None:
        out.append(_stack_key(ho))
    so = lv.get("stkoff")
    if so is not None:
        so = int(so)
        for d in (4, 8, 0xC, 0x10, 0x14):
            if so - d >= 0:
                out.append(_stack_key(so - d))
        out.append(_stack_key(so))
    seen, res = set(), []
    for k in out:
        if k not in seen:
            seen.add(k)
            res.append(k)
    return res


def csp_probe_keys(decl, lv):
    """CSP type_map key candidates for an identified lvar."""
    if lv.get("stkoff") is not None:
        return stack_probe_keys(decl, lv)
    reg = lv.get("reg")
    if not reg:
        return []
    out = []
    h, d = lv_head(lv), lv_defea(lv)
    if h is not None:
        out.append("%s_v0x%x" % (reg, h))
    if d is not None:
        out.append("%s_v0x%x" % (reg, d))
    return out


# ---------------------------------------------------------------- classify
def classify_x142(decl, csp_entry):
    """Action decision.  Same spirit as X117 classify() but:

    * arrays: identity may be recorded, retype refused (unknown sizeof),
    * int->class* is split into specific-class (actionable) and
      generic-base (reported only).
    Returns (action, new_type, reason, is_specific_retype).
    """
    t = (csp_entry or {}).get("type", "")
    t = t.strip() if t else ""
    is_ptr = decl["stars"] > 0
    if decl["is_array"]:
        return "skip", None, "array-decl", False
    if not t or t == "TOP":
        return "skip", None, "csp-empty", False
    src_width = 4 if is_ptr else WIDTH_X142.get(decl["base"])
    if is_ptr:
        if t.endswith("*"):
            return "skip", None, "csp-prim-pointer", False
        if t in x117.PRIM_TYPES:
            return "skip", None, "csp-prim", False
        if t in ("Coord", "CellStruct", "ColorStruct", "Cell") or " " in t:
            return "skip", None, "csp-by-value", False
        return "retype", t + " *", "ptr->class", True
    if t in x117.PRIM_TYPES:
        if t in x117.INT_TARGETS:
            if WIDTH_X142.get(t) != src_width:
                return "skip", None, "width-mismatch", False
            if t == decl["base"]:
                return "noop", None, "same-int", False
            return "retype", t, "int->int", False
        return "skip", None, "csp-nonint-scalar", False
    if t in x117.BYVALUE_HINTS or " " in t:
        return "skip", None, "csp-by-value", False
    if src_width != 4:
        return "skip", None, "width-mismatch", False
    specific = t not in GENERIC_BASE_CLASSES
    return "retype", t + " *", "int->class*", specific


# ---------------------------------------------------------------- main pass
def build(out_path=OUT, near_window=NEAR_WINDOW_DEFAULT, quiet=False):
    ida = load_ida_lvars()
    tm = load_type_map()
    stats = Counter()
    mm_dist = Counter()          # match_method distribution
    tier_dist = Counter()
    residual = Counter()         # per-cause residual table
    resid_samples = defaultdict(list)
    joined = {}
    lvar_owner = {}              # (func_addr, lvar_name) -> decl name taken
    conflict_count = 0
    retype_conf = Counter()      # confidence of specific-class retypes
    retype_generic_conf = Counter()
    near_dist_bins = Counter()   # byte distance of near-tier matches
    fn_joined = set()            # addrs that produced >=1 entry

    for addr, path, text, mask, starts, fn_name, bstart, bend in x117.scan_functions():
        stats["functions_scanned"] += 1
        rec = ida.get(addr)
        ida_lvs = rec["lvars"] if rec else {}
        head_idx, defea_idx = index_lvar_addrs(ida_lvs)
        body = FunctionBody(addr, path, fn_name, bstart, bend, text, mask, starts)
        decls = list(scan_decls_x142(body))
        stats["decls"] += len(decls)
        if not ida_lvs:
            stats["func-no-lvars"] += 1
        func_entry = None
        for d in decls:
            name = d["name"]
            # ---- identity: address first, name fallback
            lv_name, mm, tier, mextra = resolve_identity(
                body, d, ida_lvs, near_window, head_idx, defea_idx)
            mm_dist[mm] += 1
            if tier:
                tier_dist[tier] += 1
            if tier == "near" and mextra is not None:
                near_dist_bins[
                    "<=4" if mextra <= 4 else "<=8" if mextra <= 8
                    else "<=16" if mextra <= 16 else "<=32" if mextra <= 32
                    else "<=64"] += 1
            if lv_name is None:
                residual["identity-none"] += 1
                if len(resid_samples["identity-none"]) < 12:
                    resid_samples["identity-none"].append(
                        [hex(addr), name, d["base"] + "*" * d["stars"],
                         d["hint"][:40]])
                continue
            owner = (addr, lv_name)
            if owner in lvar_owner and lvar_owner[owner] != name:
                conflict_count += 1
                stats["lvar-conflict"] += 1
                continue
            lvar_owner[owner] = name
            lv = ida_lvs[lv_name]
            # ---- CSP type probes (deterministic order)
            ent = None
            for key in csp_probe_keys(d, lv):
                e = tm.get((addr, key.lower()))
                if e is not None:
                    ent = e
                    break
            if ent is None:
                residual["csp-key-miss"] += 1
                if len(resid_samples["csp-key-miss"]) < 12:
                    resid_samples["csp-key-miss"].append(
                        [hex(addr), name, lv_name,
                         csp_probe_keys(d, lv)[:2],
                         (lv.get("type") or "")[:30]])
                entry = {
                    "match_method": mm,
                    "match_tier": tier,
                    "near_dist": mextra if tier == "near" else None,
                    "lvar_name": lv_name,
                    "lvar_type": lv.get("type"),
                    "decl_type": d["base"] + "*" * d["stars"],
                    "line": d["line"],
                    "action": "skip",
                    "new_type": None,
                    "reason": "csp-key-miss",
                    "confidence": None,
                }
            else:
                stats["csp-hits"] += 1
                action, new_type, why, specific = classify_x142(d, ent)
                entry = {
                    "match_method": mm,
                    "match_tier": tier,
                    "near_dist": mextra if tier == "near" else None,
                    "lvar_name": lv_name,
                    "lvar_type": lv.get("type"),
                    "csp_type": ent.get("type"),
                    "confidence": ent.get("confidence"),
                    "decl_type": d["base"] + "*" * d["stars"],
                    "new_type": new_type if action == "retype" else None,
                    "line": d["line"],
                    "action": action,
                    "reason": why,
                }
                if action == "retype" and why == "int->class*":
                    entry["retype_class_specific"] = specific
                    (retype_conf if specific else retype_generic_conf)[
                        ent.get("confidence")] += 1
                if action == "noop":
                    stats["noop"] += 1
                elif action == "retype":
                    stats["retype"] += 1
                    stats["retype-" + why] += 1
                else:
                    stats["skip"] += 1
                residual["joined:" + why if action != "skip" else "joined-skip:" + why] += 1
            if func_entry is None:
                func_entry = {
                    "name": fn_name,
                    "file": str(path.relative_to(ROOT)).replace("\\", "/"),
                    "lvars": {},
                }
            func_entry["lvars"][name] = entry
        if func_entry is not None:
            joined["0x%08X" % addr] = func_entry
            fn_joined.add(addr)

    # ---- coverage rollup
    joined_lvars = sum(len(f["lvars"]) for f in joined.values())
    coverage = {
        "functions_scanned": stats["functions_scanned"],
        "functions_joined": len(joined),
        "func_no_lvars_in_ida": stats["func-no-lvars"],
        "decls_scanned": stats["decls"],
        "csp_hits": stats["csp-hits"],
        "noop": stats["noop"],
        "skip": stats["skip"],
        "retype_total": stats["retype"],
        "retype_specific_class": sum(retype_conf.values()),
        "retype_generic_base": sum(retype_generic_conf.values()),
        "retype_int_to_int": stats["retype-int->int"],
        "retype_ptr_to_class": stats["retype-ptr->class"],
        "lvar_conflicts": conflict_count,
        "match_method": dict(mm_dist.most_common()),
        "match_tier": dict(tier_dist.most_common()),
        "near_dist_bins": dict(near_dist_bins.most_common()),
        "residual": dict(residual.most_common()),
        "retype_specific_by_confidence": dict(retype_conf.most_common()),
        "retype_generic_by_confidence": dict(retype_generic_conf.most_common()),
    }
    artifact = {
        "_meta": {
            "tool": "tools/csp_export/x142_join_by_addr.py",
            "generated": time.strftime("%Y-%m-%dT%H:%M:%S"),
            "ida_lvars": "anchors/ida_lvars.json",
            "type_map": "type_map.json",
            "near_window_bytes": near_window,
            "source_note": (
                "Address-identity join: decl var -> first anchored line "
                "(assign or read) -> lvar head/defea. Name matching is "
                "fallback only. All addresses int-normalized (case bug fix)."),
        },
        "coverage": coverage,
        "functions": joined,
        "residual_samples": dict(resid_samples),
    }
    out_path.write_text(json.dumps(artifact, indent=1, sort_keys=True),
                        encoding="utf-8")
    return artifact, resid_samples


def print_report(art, samples):
    c = art["coverage"]
    print("=" * 72)
    print("X142 address-identity join report")
    print("=" * 72)
    print(f"functions scanned        : {c['functions_scanned']}")
    print(f"functions joined         : {c['functions_joined']}")
    print(f"  (func with no IDA lvars: {c['func_no_lvars_in_ida']})")
    print(f"declarations scanned     : {c['decls_scanned']}")
    print(f"CSP hits (joined lvars)  : {c['csp_hits']}")
    print(f"  noop                   : {c['noop']}")
    print(f"  skip                   : {c['skip']}")
    print(f"  retype total           : {c['retype_total']}")
    print(f"    int->class* specific : {c['retype_specific_class']}")
    print(f"    int->class* generic  : {c['retype_generic_base']} "
          f"(AbstractClass/ObjectClass/IUnknown -- reported only)")
    print(f"    int->int             : {c['retype_int_to_int']}")
    print(f"    ptr->class           : {c['retype_ptr_to_class']}")
    print("match_method:")
    for k, v in c["match_method"].items():
        print(f"  {k:12s} {v}")
    print("match_tier:")
    for k, v in c["match_tier"].items():
        print(f"  {k:16s} {v}")
    print("near_dist_bins:", c.get("near_dist_bins"))
    print("retype specific by confidence:")
    for k, v in c["retype_specific_by_confidence"].items():
        print(f"  {k:12s} {v}")
    print("residual:")
    for k, v in sorted(c["residual"].items(), key=lambda x: -x[1]):
        print(f"  {k:28s} {v}")
    print(f"artifact: {OUT}")
    for k, rows in samples.items():
        if rows:
            print(f"-- samples: {k}")
            for r in rows[:6]:
                print("   ", r)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=str(OUT))
    ap.add_argument("--near-window", type=int, default=NEAR_WINDOW_DEFAULT)
    args = ap.parse_args()
    art, samples = build(Path(args.out), near_window=args.near_window)
    print_report(art, samples)


if __name__ == "__main__":
    main()
