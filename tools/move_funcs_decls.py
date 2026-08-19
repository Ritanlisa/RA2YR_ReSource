#!/usr/bin/env python3
r"""move_funcs_decls.py — Relocate declarations out of the 7 `src/<mod>/_funcs.hpp`
gap-filler files into their proper homes:

  * ClassName::Method  -> inserted into the class body (before its closing `};`)
                          inside the canonical hpp that defines that class.
  * global / sub_*     -> moved to src/_generated/global_funcs.hpp (self-contained).

Authoritative source of truth for (class, method, return_type, param-count) is
signals.json (keyed by address). This guarantees the reconstructed
`ClassName::Method` name equals signals.json's canonical name => audit stays 0/0.

Safety / build invariants:
  * Return types are collapsed to compile-safe primitives (safe_type).
  * Method names are skipped when ctor/dtor/vtable/invalid (mtype != normal),
    when they collide with an existing member name OR member-variable in the
    class, or when they collide with a known type name.
  * Insertion is idempotent: prior FUNCS-MOVE blocks are stripped before re-insert.
  * A manual skip list (.omo/funcs_move_skips.json) lets the build-fix loop
    exclude any declaration that triggers a Cxxxx compile error.
  * Originals are backed up to .omo/funcs_move_backup/ before any write.

Usage:
  python tools/move_funcs_decls.py            # dry-run report
  python tools/move_funcs_decls.py --apply     # apply edits
  python tools/move_funcs_decls.py --strip      # only strip prior FUNCS-MOVE blocks
"""
import json, re, sys, shutil
from pathlib import Path
from collections import defaultdict

ROOT = Path(r"D:\RA2YR_ReSource")
SRC = ROOT / "src"
MODULES = ["core", "entity", "misc", "object", "render", "structure", "system"]
FUNCS_FILES = {m: SRC / m / "_funcs.hpp" for m in MODULES}
GLOBAL_OUT = SRC / "_generated" / "global_funcs.hpp"
BACKUP = ROOT / ".omo" / "funcs_move_backup"
SKIP_PATH = ROOT / ".omo" / "funcs_move_skips.json"
MANIFEST = ROOT / ".omo" / "funcs_move_manifest.json"

BEGIN = "// === FUNCS-MOVE (BEGIN) ==="
END = "// === FUNCS-MOVE (END) ==="

IDENT = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')

# ---- declaration line parser -------------------------------------------------
# Captures: return type, qualified name (allows :: and [NN] vt forms), params.
DECL_RE = re.compile(
    r'^(?P<rt>[A-Za-z_][\w\s\*&<>]*?[\w\*&>])\s+'      # return type
    r'(?:(?:__\w+|WINAPI|CALLBACK)\s+)?'               # optional calling-convention keyword
    r'(?P<qname>~?[A-Za-z_]\w*(?:::~?[\w\[\]]+)*)'      # qualified name
    r'\s*\((?P<params>[^)]*)\)'                         # (params)
    r'\s*(?:const\b\s*)?(?:noexcept\b\s*)?;'            # optional const/noexcept then ;
)
ADDR_RE = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{4,8})')


def to_int(addr):
    try:
        return int(str(addr), 16)
    except Exception:
        return None


def fmt_addr(a):
    """Force lowercase 0x prefix (audit regex matches literal 0x)."""
    h = str(a).lower().replace("0x", "")
    return "0x" + h


def mtype(cls, method):
    """Classify a member name. Only 'normal' is safe to insert as a method decl."""
    if method in ('Constructor', 'Construct') or method == cls:
        return 'ctor'
    if method.startswith('~') or method in ('Destructor', 'Destruct', 'Destroy'):
        return 'dtor'
    if 'vt[' in method or re.search(r'vt\d+', method) \
            or method.startswith('Destru_') or method.startswith('Constru_'):
        return 'vt'
    if not IDENT.match(method):
        return 'invalid'
    return 'normal'


def safe_type(t):
    """Collapse an IDA/C return type to a compile-safe primitive."""
    t = (t or "int").strip()
    if t == 'void':
        return 'void'
    if '*' in t:
        return 'void*'
    if t == 'bool':
        return 'bool'
    if t in ('float', 'double'):
        return t
    return 'int'  # all integers / unknown / #NNN / _DWORD / BOOL / HRESULT etc.


# ---- signals.json ------------------------------------------------------------

def load_signals():
    data = json.load(open(ROOT / "signals.json", encoding="utf-8"))
    by_addr = {}      # int(addr) -> sym
    by_name = {}      # name -> int(addr)
    for k, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict) or sym.get("kind") != "function":
            continue
        ai = to_int(sym.get("address", k))
        if ai is None:
            continue
        by_addr[ai] = sym
        nm = sym.get("name")
        if nm and nm not in by_name:
            by_name[nm] = ai
    return by_addr, by_name


# ---- class map ---------------------------------------------------------------

def compute_depth(lines):
    depth = [0] * (len(lines) + 1)
    d = 0
    for i in range(len(lines)):
        depth[i] = d
        d += lines[i].count('{') - lines[i].count('}')
    depth[len(lines)] = d
    return depth


CLASS_OPEN = re.compile(r'^\s*(?:class|struct)\s+(\w+)\b')
FUNC_NAME = re.compile(r'(~?\b[A-Za-z_]\w*)\s*\(')
MEMBER_VAR = re.compile(r'\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:=|;)')


sys.path.insert(0, str(ROOT / "tools"))
from audit_consistency import normalize_name, normalize_name_bidirectional  # noqa: E402


def names_equiv(a, b):
    """Name equivalence EXACTLY as the audit decides it (so we only treat an
    address as a real conflict when the audit would actually flag a mismatch).
    Mirrors audit_consistency's two passes: raw-normalized case-insensitive
    compare, then convention-tolerant bidirectional compare."""
    if normalize_name(a).lower() == normalize_name(b).lower():
        return True
    _, _, eq, _ = normalize_name_bidirectional(a, b)
    return eq


def build_class_map():
    """Return (cmap, addr_names):
      cmap: {cname: dict(file, end, names:set, addrs:set, size)} (largest body wins)
      addr_names: {addr_int: set("Class::method")} for every annotated class-body decl.
    Skips forward decls + templates."""
    cmap = {}
    addr_names = defaultdict(set)
    for hpp in sorted(SRC.rglob("*.hpp")):
        if hpp.name == "_funcs.hpp":
            continue
        if hpp == GLOBAL_OUT:
            continue
        try:
            lines = hpp.read_text(encoding="utf-8", errors="replace").splitlines()
        except Exception:
            continue
        depth = compute_depth(lines)
        rel = str(hpp.relative_to(ROOT)).replace("\\", "/")
        for j, line in enumerate(lines):
            mm = CLASS_OPEN.match(line)
            if not mm:
                continue
            # Strip trailing line comment before structural checks so that
            # `class Foo;   // note` is correctly seen as a forward declaration.
            code = re.sub(r'//.*$', '', line).rstrip()
            if code.endswith(';'):
                continue  # forward declaration
            if 'template' in code[:mm.start(1)]:
                continue
            if j > 0 and 'template' in re.sub(r'//.*$', '', lines[j - 1]):
                continue
            cname = mm.group(1)
            D = depth[j]
            end = None
            for m in range(j + 1, len(lines)):
                if depth[m + 1] <= D and '}' in lines[m]:
                    end = m
                    break
            if end is None:
                continue
            body = lines[j:end + 1]
            names = set()
            addrs = set()
            for bl in body:
                fns = FUNC_NAME.findall(bl)
                for fn in fns:
                    names.add(fn.lstrip('~').lower())
                for mv in MEMBER_VAR.findall(bl):
                    names.add(mv.lower())
                am = ADDR_RE.search(bl)
                if am:
                    ai = to_int(am.group(1))
                    if ai is not None:
                        addrs.add(ai)
                        for fn in fns:
                            addr_names[ai].add(f"{cname}::{fn.lstrip('~')}")
            size = end - j
            rec = {"file": rel, "end": end, "names": names, "addrs": addrs, "size": size}
            prev = cmap.get(cname)
            if prev is None or size > prev["size"]:
                cmap[cname] = rec
    return cmap, addr_names


# ---- _funcs.hpp parsing ------------------------------------------------------

def parse_funcs_file(path):
    """Yield dict(raw_line, lineno, commented, rt, qname, addr) for each decl line."""
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    out = []
    for i, line in enumerate(lines):
        s = line.strip()
        if not s:
            continue
        commented = False
        cand = s
        if s.startswith('//'):
            commented = True
            cand = s[2:].lstrip()
        if '(' not in cand or ');' not in cand and ') ' not in cand and ')' not in cand:
            pass
        m = DECL_RE.match(cand)
        if not m:
            continue
        am = ADDR_RE.search(line)
        addr = am.group(1) if am else None
        out.append({
            "raw": line, "lineno": i, "commented": commented,
            "rt": m.group("rt").strip(),
            "qname": m.group("qname").strip(),
            "addr": addr,
        })
    return lines, out


# ---- strip prior FUNCS-MOVE blocks ------------------------------------------

def strip_blocks(text):
    lines = text.splitlines()
    out = []
    i = 0
    while i < len(lines):
        if BEGIN in lines[i]:
            if out and out[-1].strip() == 'public:  // funcs-move':
                out.pop()
            while i < len(lines) and END not in lines[i]:
                i += 1
            i += 1  # skip END
            continue
        out.append(lines[i])
        i += 1
    return "\n".join(out) + ("\n" if text.endswith("\n") else "")


def strip_all():
    n = 0
    for hpp in SRC.rglob("*.hpp"):
        t = hpp.read_text(encoding="utf-8", errors="replace")
        if BEGIN in t:
            hpp.write_text(strip_blocks(t), encoding="utf-8")
            n += 1
    return n


# ---- main --------------------------------------------------------------------

def main():
    apply = "--apply" in sys.argv
    strip_only = "--strip" in sys.argv

    stripped = strip_all()
    print(f"Stripped FUNCS-MOVE blocks from {stripped} files")
    if strip_only:
        return

    sig_addr, sig_name = load_signals()
    print(f"signals: {len(sig_addr)} function addrs, {len(sig_name)} names")

    cmap, addr_names = build_class_map()
    print(f"class map: {len(cmap)} classes")

    manual_skips = set(json.load(open(SKIP_PATH))) if SKIP_PATH.exists() else set()
    type_names = set(cmap.keys())

    # Re-read each _funcs.hpp from backup if present (so re-runs are deterministic),
    # else from current file and back it up now.
    BACKUP.mkdir(parents=True, exist_ok=True)
    src_lines = {}
    src_decls = {}
    for mod, path in FUNCS_FILES.items():
        bpath = BACKUP / f"{mod}_funcs.hpp"
        if bpath.exists():
            text = bpath.read_text(encoding="utf-8", errors="replace")
            path_for_parse = bpath
        else:
            text = path.read_text(encoding="utf-8", errors="replace")
            bpath.write_text(text, encoding="utf-8")
            path_for_parse = path
        lines, decls = parse_funcs_file(path_for_parse)
        src_lines[mod] = lines
        src_decls[mod] = decls

    # Resolve each declaration via signals (authoritative).
    members = []   # dict(mod, lineno, cls, method, rt, nparams, addr)
    globals_ = []  # dict(mod, lineno, name, rt, nparams, addr)
    skips = defaultdict(list)
    residual_lines = defaultdict(set)  # mod -> set of linenos to KEEP in _funcs

    for mod, decls in src_decls.items():
        for d in decls:
            addr = d["addr"]
            ai = to_int(addr) if addr else None
            sym = sig_addr.get(ai) if ai is not None else None
            # fall back: look up by parsed name in signals
            if sym is None:
                nm = d["qname"]
                if nm in sig_name:
                    ai = sig_name[nm]
                    sym = sig_addr.get(ai)
            if sym is not None:
                name = sym.get("name", d["qname"])
                rt = sym.get("return_type", d["rt"])
                nparams = len(sym.get("params", []) or [])
                ai = to_int(sym.get("address")) if to_int(sym.get("address")) is not None else ai
            else:
                name = d["qname"]
                rt = d["rt"]
                nparams = 0

            addr_out = fmt_addr(hex(ai)) if ai is not None else None

            if '::' in name:
                head, method = name.rsplit('::', 1)
                cls = head.split('::')[-1]   # collapse double prefix A::B::m -> class B
                rec = {"mod": mod, "lineno": d["lineno"], "cls": cls, "method": method,
                       "rt": rt, "nparams": nparams, "addr": addr_out, "ai": ai}
                members.append(rec)
            else:
                rec = {"mod": mod, "lineno": d["lineno"], "name": name,
                       "rt": rt, "nparams": nparams, "addr": addr_out, "ai": ai}
                globals_.append(rec)

    # ---- classify members ----
    by_class_ins = defaultdict(list)   # (file, cls, end) -> [decl_str]
    placed_member_lines = defaultdict(set)
    handled_members = 0
    manifest = []

    for rec in members:
        cls, method, mod = rec["cls"], rec["method"], rec["mod"]
        key = f"{cls}::{method}"
        mt = mtype(cls, method)
        if mt != 'normal':
            skips[f"member_{mt}"].append(f"{rec['addr']} {key}")
            residual_lines[mod].add(rec["lineno"]); continue
        if key in manual_skips or (rec["addr"] and rec["addr"] in manual_skips):
            skips["manual_skip"].append(key)
            residual_lines[mod].add(rec["lineno"]); continue
        if method in type_names:
            skips["method_is_typename"].append(key)
            residual_lines[mod].add(rec["lineno"]); continue
        cd = cmap.get(cls)
        if cd is None:
            skips["no_class"].append(f"{rec['addr']} {key}")
            residual_lines[mod].add(rec["lineno"]); continue
        # Conflict guard: if this address ALREADY carries a class-body annotation
        # under a DIFFERENT (non-equivalent) name, then inserting a competing
        # decl or dropping the matching _funcs entry would surface a latent name
        # mismatch (the audit resolves one name per address by scan order). Keep
        # the matching _funcs line as a residual so the audit stays consistent.
        sig_full = f"{cls}::{method}"
        existing = addr_names.get(rec["ai"]) if rec["ai"] is not None else None
        if existing and not any(names_equiv(en, sig_full) for en in existing):
            # No existing class-body annotation at this address matches signals;
            # the only correct name lives in _funcs. Keep it as a residual so the
            # audit keeps resolving the matching name (don't drop / don't compete).
            skips["addr_conflict"].append(f"{rec['addr']} {key} <> {sorted(existing)}")
            residual_lines[mod].add(rec["lineno"]); continue
        if rec["ai"] is not None and rec["ai"] in cd["addrs"]:
            # already placed in the class at this address (same name) -> drop from _funcs
            skips["already_placed"].append(f"{rec['addr']} {key}")
            placed_member_lines[mod].add(rec["lineno"]); continue
        if method.lower() in cd["names"]:
            skips["name_collision"].append(f"{rec['addr']} {key}")
            residual_lines[mod].add(rec["lineno"]); continue
        # OK to insert
        rt = safe_type(rec["rt"])
        params = ", ".join(f"int a{i+1}" for i in range(rec["nparams"]))
        addr_c = f"  // {rec['addr']}" if rec["addr"] else ""
        decl = f"    {rt} {method}({params});{addr_c}"
        by_class_ins[(cd["file"], cls, cd["end"])].append(decl)
        # update in-memory dedup so two _funcs entries for same name don't double-insert
        cd["names"].add(method.lower())
        if rec["ai"] is not None:
            cd["addrs"].add(rec["ai"])
        placed_member_lines[mod].add(rec["lineno"])
        manifest.append({"file": cd["file"], "class": cls, "method": method, "addr": rec["addr"]})
        handled_members += 1

    print(f"\nMembers to insert: {handled_members} across {len(by_class_ins)} (file,class) groups")
    print("Member skips:", {k: len(v) for k, v in skips.items() if k.startswith('member_') or k in
                            ('no_class', 'name_collision', 'method_is_typename', 'already_placed', 'manual_skip')})

    # ---- globals ----
    global_decls = []
    global_anchors = []
    placed_global_lines = defaultdict(set)
    seen_global = set()      # (name, addr) already emitted
    for rec in globals_:
        name, mod = rec["name"], rec["mod"]
        gkey = (name, rec["addr"])
        if gkey in seen_global:
            placed_global_lines[mod].add(rec["lineno"]); continue  # exact dup, drop
        seen_global.add(gkey)
        rt = safe_type(rec["rt"])
        params = ", ".join(f"int a{i+1}" for i in range(rec["nparams"]))
        addr_c = f"  // {rec['addr']}" if rec["addr"] else ""
        if not IDENT.match(name):
            if rec["addr"]:
                global_anchors.append(f"// {rec['addr']} -- {name}")
            placed_global_lines[mod].add(rec["lineno"]); continue
        global_decls.append(f"{rt} {name}({params});{addr_c}")
        placed_global_lines[mod].add(rec["lineno"])
    print(f"Globals -> global_funcs.hpp: {len(global_decls)} decls, {len(global_anchors)} comment anchors")

    json.dump(manifest, open(MANIFEST, "w"), indent=1)
    json.dump({k: v for k, v in skips.items()},
              open(ROOT / ".omo" / "funcs_move_skips_report.json", "w"), indent=1)

    if not apply:
        print("\n(dry-run; pass --apply to write)")
        return

    # ---- apply member insertions (bottom-up per file) ----
    edits_by_file = defaultdict(list)
    for (f, cls, end), decls in by_class_ins.items():
        edits_by_file[f].append((end, cls, decls))
    for f, edits in edits_by_file.items():
        p = ROOT / f
        lines = p.read_text(encoding="utf-8", errors="replace").splitlines()
        for end, cls, decls in sorted(edits, key=lambda x: -x[0]):
            block = ["    public:  // funcs-move", "    " + BEGIN] + decls + ["    " + END]
            lines[end:end] = block
        p.write_text("\n".join(lines) + "\n", encoding="utf-8")
    print(f"Edited {len(edits_by_file)} hpp files with member decls")

    # ---- write global_funcs.hpp ----
    write_global_header(global_decls, global_anchors)

    # ---- rewrite _funcs.hpp keeping only residuals ----
    for mod, path in FUNCS_FILES.items():
        all_dl = {d["lineno"] for d in src_decls[mod]}
        rewrite_funcs(path, src_lines[mod], residual_lines[mod], all_dl)
    print("Done.")


def write_global_header(decls, anchors):
    hdr = [
        "#pragma once",
        "",
        "// Auto-generated by tools/move_funcs_decls.py",
        "// Global / sub_* free-function declarations relocated out of the per-module",
        "// _funcs.hpp gap-filler files. Self-contained (compiles standalone).",
        "// Declaration-only; signatures collapsed to compile-safe primitives.",
        "",
        "#include <cstdint>",
        "",
        f"// {len(decls)} declarations + {len(anchors)} comment anchors",
        "",
    ]
    body = list(decls)
    if anchors:
        body += ["", "// --- non-identifier names (comment anchors) ---"] + anchors
    GLOBAL_OUT.parent.mkdir(parents=True, exist_ok=True)
    GLOBAL_OUT.write_text("\n".join(hdr + body) + "\n", encoding="utf-8")
    print(f"Wrote {GLOBAL_OUT.relative_to(ROOT)} ({len(decls)} decls)")


def rewrite_funcs(path, orig_lines, keep_linenos, all_decl_linenos):
    """Reduce a _funcs.hpp to: original header (everything before the first decl),
    a moved-note, any residual decl lines that could not be relocated, then the
    original trailer (everything after the last decl — namespace closers etc.).

    Using the original header+trailer verbatim keeps namespace bracketing balanced
    and never duplicates closers."""
    if all_decl_linenos:
        first = min(all_decl_linenos)
        last = max(all_decl_linenos)
    else:
        first = len(orig_lines)
        last = len(orig_lines) - 1
    header = orig_lines[:first]
    while header and not header[-1].strip():
        header.pop()
    trailer = orig_lines[last + 1:]
    residuals = [orig_lines[i] for i in sorted(keep_linenos)]

    out = list(header)
    out += ["", "// All relocatable declarations were moved to class bodies / "
            "src/_generated/global_funcs.hpp by tools/move_funcs_decls.py."]
    if residuals:
        out += ["// Residual declarations below could not be relocated "
                "(invalid name / no class / collision):", ""]
        out += residuals
    out += [""]
    out += trailer
    path.write_text("\n".join(out) + "\n", encoding="utf-8")


if __name__ == "__main__":
    main()
