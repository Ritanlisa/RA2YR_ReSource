#!/usr/bin/env python3
"""gen_symbol_anchors.py — Add `// 0xADDR` annotations for unannotated real-IDA functions.

Adds member declarations (with `// 0xADDR -- Class::Method` suffix to lock audit name)
to canonical class hpp bodies, plus global free-function declarations to
src/_generated/named_free_decls.hpp.

Idempotent: strips prior SYMBOL-ANCHOR blocks before re-inserting.
Declaration-only (NO function bodies). Signatures type-collapsed to safe primitives.

Inputs:
  .omo/symanchor_plan.json        (safe/abbrev member classification)
  .omo/symanchor_categories.json  (global/sub)
  .omo/symanchor_hpp_map.json     (class_defs)
  injectFunctionTest/functions.json (signatures)

Usage:
  python tools/gen_symbol_anchors.py --apply     # apply edits
  python tools/gen_symbol_anchors.py --strip      # only strip prior blocks
  python tools/gen_symbol_anchors.py             # dry-run report
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(r"D:\RA2YR_ReSource")
SRC = ROOT / "src"

BEGIN = "// === SYMBOL-ANCHOR (BEGIN) ==="
END = "// === SYMBOL-ANCHOR (END) ==="

def normaddr(a):
    return "0X" + str(a).upper().replace("0X", "").zfill(8)

def fmt_addr(a):
    """Force lowercase 0x prefix (audit regex matches literal lowercase 0x)."""
    h = str(a).lower().replace("0x", "")
    return "0x" + h

def load():
    plan = json.load(open(ROOT/".omo"/"symanchor_plan.json"))
    cats = json.load(open(ROOT/".omo"/"symanchor_categories.json"))
    hpp = json.load(open(ROOT/".omo"/"symanchor_hpp_map.json"))
    fj = json.load(open(ROOT/"injectFunctionTest"/"functions.json"))
    fm = {normaddr(e["address"]): e for e in fj["functions"]}
    return plan, cats, hpp, fm

IDENT = re.compile(r'^[A-Za-z_][A-Za-z0-9_]*$')

def mtype(cls, method):
    if method in ('Constructor', 'Construct') or method == cls:
        return 'ctor'
    if method.startswith('~') or method in ('Destructor', 'Destruct', 'Destroy'):
        return 'dtor'
    if 'vt[' in method or re.search(r'vt\d+', method) or method.startswith('Destru_') or method.startswith('Constru_'):
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
    return 'int'  # all integers / unknown / #NNN / _DWORD etc.

def make_sig(entry, name, ida_qual_name):
    """Build a single-line declaration string ending with the // 0xADDR -- name comment."""
    call = entry.get("call", {})
    rt = safe_type(call.get("return_type", "int"))
    nparams = len(call.get("params", []))
    params = ", ".join(f"int a{i+1}" for i in range(nparams))
    addr = fmt_addr(entry["address"])
    return f"    {rt} {name}({params});  // {addr} -- {ida_qual_name}"

# ---------- strip phase ----------

def strip_blocks(text):
    """Remove all SYMBOL-ANCHOR blocks (BEGIN..END inclusive, plus a leading public: line we add)."""
    lines = text.splitlines(keepends=False)
    out = []
    i = 0
    while i < len(lines):
        if BEGIN in lines[i]:
            # also drop the preceding 'public:' line if it's our marker companion
            if out and out[-1].strip() == 'public:  // symbol-anchor':
                out.pop()
            # skip until END
            while i < len(lines) and END not in lines[i]:
                i += 1
            i += 1  # skip END line
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

# ---------- build insertion plan ----------

def canonical_def(class_defs, cname):
    """Pick the canonical (non-template, largest-body) class def: (file, start, end)."""
    defs = class_defs.get(cname)
    if not defs:
        return None
    cands = [d for d in defs if not d[3]]  # non-template
    if not cands:
        return None
    cands.sort(key=lambda d: (d[2] or 0) - (d[1] or 0), reverse=True)
    return cands[0]

def main():
    apply = "--apply" in sys.argv
    strip_only = "--strip" in sys.argv

    stripped = strip_all()
    print(f"Stripped SYMBOL-ANCHOR blocks from {stripped} files")
    if strip_only:
        return

    plan, cats, hpp, fm = load()
    class_defs = hpp["class_defs"]
    declared = {k: set(v) for k, v in hpp.get("declared", {}).items()}
    # names that collide with a type would shadow it inside the class body -> unsafe as a method name
    type_names = set(hpp.get("real_classes", [])) | set(hpp.get("template_classes", []))

    # manual skip list: "Class::method" entries that break the build (populated iteratively)
    msk_path = ROOT / ".omo" / "symanchor_manual_skips.json"
    manual_skips = set(json.load(open(msk_path))) if msk_path.exists() else set()

    # Collect member decls per (file, class) -> list of (end_line, decl_str)
    by_class = defaultdict(list)   # (file, class, end_line) -> [decl_str]
    skips = defaultdict(list)
    handled = 0

    manifest = []

    def add_member(rec, target_class, json_name):
        nonlocal handled
        cls = rec["class"]; method = rec["method"]
        mt = mtype(cls, method)
        if mt != 'normal':
            skips[f"member_{mt}"].append(rec["addr"] + " " + json_name)
            return
        tgt_key = f"{target_class}::{method}"
        if tgt_key in manual_skips or json_name in manual_skips:
            skips["manual_skip"].append(tgt_key); return
        if method in type_names:
            skips["method_is_typename"].append(tgt_key); return
        entry = fm.get(rec["addr"])
        if not entry:
            skips["no_fjentry"].append(rec["addr"]); return
        if method.lower() in declared.get(target_class, set()):
            skips["already_declared"].append(rec["addr"] + " " + target_class + "::" + method); return
        cd = canonical_def(class_defs, target_class)
        if not cd:
            skips["no_canonical_def"].append(rec["addr"] + " " + target_class); return
        f, start, end, _ = cd
        decl = make_sig(entry, method, json_name)
        by_class[(f, target_class, end)].append(decl)
        manifest.append({"file": f, "class": target_class, "method": method,
                         "json_name": json_name, "addr": rec["addr"]})
        handled += 1

    # safe: target == class (exact), json_name == class::method
    for rec in plan["safe"]:
        add_member(rec, rec["class"], rec["json_name"])
    # abbrev: target == class+"Class", json_name keeps abbreviated form
    for rec in plan["abbrev"]:
        add_member(rec, rec["target_class"], rec["json_name"])

    print(f"Member decls to insert: {handled} across {len(by_class)} (file,class) groups")
    print("Member skips:", {k: len(v) for k, v in skips.items()})

    # ----- globals + sub -----
    SPECIAL = {"WinMain"}  # reserved Win32 name -> comment anchor only
    global_decls = []      # for named_free_decls.hpp
    global_anchors = []    # comment-only anchors
    for grp in ("global", "sub"):
        for rec in cats.get(grp, []):
            name = rec["json_name"]
            entry = fm.get(normaddr(rec["addr"]))
            if not entry:
                skips["g_no_fjentry"].append(rec["addr"]); continue
            addr = fmt_addr(entry["address"])
            if name in SPECIAL or not IDENT.match(name):
                global_anchors.append(f"// {addr} -- {name}")
                continue
            call = entry.get("call", {})
            rt = safe_type(call.get("return_type", "int"))
            nparams = len(call.get("params", []))
            params = ", ".join(f"int a{i+1}" for i in range(nparams)) or "void"
            global_decls.append(f"{rt} {name}({params}); // {addr}")
    print(f"Global decls: {len(global_decls)}, global anchors: {len(global_anchors)}")

    json.dump(manifest, open(ROOT/".omo"/"symanchor_inserted.json", "w"), indent=2)

    if not apply:
        print("\n(dry-run; pass --apply to write)")
        json.dump({k: v for k, v in skips.items()},
                  open(ROOT/".omo"/"symanchor_skips.json", "w"), indent=2)
        return

    # ----- apply member insertions (bottom-up per file) -----
    edits_by_file = defaultdict(list)  # file -> [(end_line, [decls])]
    for (f, cname, end), decls in by_class.items():
        edits_by_file[f].append((end, cname, decls))

    files_edited = 0
    for f, edits in edits_by_file.items():
        path = ROOT / f
        lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
        # apply descending by end_line so earlier indices stay valid
        for end, cname, decls in sorted(edits, key=lambda x: -x[0]):
            ins_idx = end - 1  # 0-indexed position of closing '}' line; insert before it
            block = ["    public:  // symbol-anchor",
                     "    " + BEGIN] + decls + ["    " + END]
            lines[ins_idx:ins_idx] = block
        path.write_text("\n".join(lines) + "\n", encoding="utf-8")
        files_edited += 1
    print(f"Edited {files_edited} hpp files with member decls")

    # ----- apply globals to named_free_decls.hpp -----
    gpath = ROOT / "src" / "_generated" / "named_free_decls.hpp"
    gtext = strip_blocks(gpath.read_text(encoding="utf-8", errors="replace"))
    glines = gtext.rstrip("\n").splitlines()
    block = ["", BEGIN,
             f"// {len(global_decls)} global + {len(global_anchors)} anchor symbol-anchor entries"]
    block += global_decls
    block += global_anchors
    block += [END, ""]
    glines += block
    gpath.write_text("\n".join(glines) + "\n", encoding="utf-8")
    print(f"Appended {len(global_decls)} global decls + {len(global_anchors)} anchors to named_free_decls.hpp")

    json.dump({k: v for k, v in skips.items()},
              open(ROOT/".omo"/"symanchor_skips.json", "w"), indent=2)
    print(f"Total handled members: {handled}")

if __name__ == "__main__":
    main()
