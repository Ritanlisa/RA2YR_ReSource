#!/usr/bin/env python3
"""X4: wire the global free-function supply library with COMPLETE prototypes.

`src/_generated/global_funcs.hpp` holds 6,221 free-function declarations
with ZERO includers anywhere -- the C3861 bare-name mass (C+D+F buckets)
resolves through it.  Its signatures are collapsed primitives (`int f();`)
while corpus calls pass real args.

G42.16 historically papered over this by deriving a variadic variant
(`RET NAME(...);` -- "absorbs any call arity").  X4 (禁 `...`; Q4) removes
that fallback: this stage now derives `global_funcs_decls.hpp` where every
declaration is COMPLETE -- parameter list resolved through
`signature_authority.py` (signals.json authority first; typed-snapshot
decompile fill for the authority's empty-params gap; Q4 ledger for the
residual).  No `...` emission path exists any more.

Output: src/_generated/global_funcs_decls.hpp (regenerated; wired into
e4_globals.hpp).  The stale variadic output is removed on apply.

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
sys.path.insert(0, str(Path(__file__).resolve().parent))
from signature_authority import Authority  # noqa: E402

APPLY = "--apply" in sys.argv
SRC = ROOT / "src/_generated/global_funcs.hpp"
DST = ROOT / "src/_generated/global_funcs_decls.hpp"
OLD = ROOT / "src/_generated/global_funcs_variad.hpp"
WIRE = ROOT / "src/e4/e4_globals.hpp"
REPORT = ROOT / ".omo" / "unresolved_reports" / "x4_gf_wire.unresolved.json"

DECL = re.compile(r'^([\w:\s\*<&>]+?)\b([A-Za-z_]\w*)\s*\([^;()]*\)\s*;'
                  r'\s*(?://\s*(0x[0-9A-Fa-f]+).*)?$')

decls = []
# MSVC treats these CRT-intrinsic spellings specially -- an ellipsis
# declaration C2059s and poisons every includer (g135 diagnosis); they are
# also skipped here for the same reason (no declaration possible at all).
INTRINSIC_BAD = {"_toupper", "_tolower"}
for ln in SRC.read_text(encoding="utf-8", errors="replace").split("\n"):
    s = ln.strip()
    if not s or s.startswith("//") or s.startswith("#"):
        continue
    m = DECL.match(s)
    if not m:
        continue
    ret, name = m.group(1).strip(), m.group(2)
    addr = m.group(3)
    if ret in ("#pragma",) or name in INTRINSIC_BAD:
        continue
    decls.append((ret, name, addr))
print("declarations parsed:", len(decls))

au = Authority(ROOT)
out_lines = []
report = {"resolved_signals": 0, "resolved_ida": 0, "resolved_empty": 0,
          "unresolved": {}, "source": str(SRC.relative_to(ROOT))}
for ret, name, addr in decls:
    r = au.resolve(name=name, addr=addr)
    if r is None or r.params is None:
        report["unresolved"]["%s|%s" % (name, addr or "")] = {
            "name": name, "addr": addr,
            "reason": "no signals entry and no ida_cache decompile"}
        continue
    prov = r.provenance
    report["resolved_%s" % ("signals" if prov == "signals" else
                            "ida" if prov == "ida" else "empty")] += 1
    ann = ("  // %s" % (addr if addr is not None else r.addr or "")
           ) if (addr or r.addr) else ""
    sig = "sig=%s" % prov
    out_lines.append("%s %s(%s);%s %s" % (ret or "int", name, r.params,
                                          ann, sig))

n_unres = len(report["unresolved"])
print("resolved: signals=%d ida=%d empty=%d; unresolved=%d"
      % (report["resolved_signals"], report["resolved_ida"],
         report["resolved_empty"], n_unres))
if n_unres:
    print("!! [x4] %d declaration(s) unresolvable — Q4 ledger required:" % n_unres)
    for k in sorted(report["unresolved"])[:10]:
        print("    |", k)

if APPLY:
    with open(DST, "w", encoding="utf-8", errors="replace", newline="\n") as f:
        f.write("// X4: COMPLETE free-function prototypes derived from\n")
        f.write("// global_funcs.hpp via tools/csp_export/_absorbed/step4_bodies/"
                "fix_gf_wire.py\n")
        f.write("// (signature authority: signals.json -> ida_cache fill).\n")
        f.write("// Variadic emission path removed per plan X4 (禁 `...`; Q4).\n")
        f.write("#pragma once\n\n")
        for l in out_lines:
            f.write(l + "\n")
    print("written:", DST)
    if OLD.exists():
        OLD.unlink()
        print("removed stale:", OLD)

    cur = WIRE.read_text(encoding="utf-8", errors="replace")
    tag = 'global_funcs_decls.hpp'
    old_tag = 'global_funcs_variad.hpp'
    if old_tag in cur:
        cur = cur.replace(old_tag, tag)
        WIRE.write_text(cur, encoding="utf-8", errors="replace")
        print("include updated in e4_globals.hpp (variad -> decls)")
    elif tag not in cur:
        with open(WIRE, "a", encoding="utf-8", errors="replace", newline="\n") as f:
            f.write("\n// X4: complete global-func supply wiring (was G42.16 "
                    "variadic)\n")
            f.write('#include "_generated/global_funcs_decls.hpp"\n')
        print("wired into e4_globals.hpp")
    else:
        print("already wired")

    REPORT.parent.mkdir(parents=True, exist_ok=True)
    REPORT.write_text(json.dumps(report, indent=1, ensure_ascii=False,
                                 sort_keys=True), encoding="utf-8")
else:
    print("(dry run)")
