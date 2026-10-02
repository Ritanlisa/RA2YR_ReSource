#!/usr/bin/env python3
"""G42.16: wire the orphan global_funcs supply library (round-3 agent P0).

`src/_generated/global_funcs.hpp` holds 6,221 free-function declarations
with ZERO includers anywhere -- the C3861 bare-name mass (C+D+F buckets,
~380-500 errors) resolves through it.  But its signatures are collapsed
primitives (`int f();`) while corpus calls pass real args -- wiring it
verbatim would swap C3861 for C2660 arity errors.

Surgery: derive `global_funcs_variad.hpp` (every decl variadic-ized:
`RET NAME(...);` -- absorbs any call arity/type, compile-phase truth stays
binary-level) and wire THAT into e4_globals.hpp (the e4 data/decl hub).
The source library is a generated file and is NOT modified.

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv
SRC = ROOT / "src/_generated/global_funcs.hpp"
DST = ROOT / "src/_generated/global_funcs_variad.hpp"
WIRE = ROOT / "src/e4/e4_globals.hpp"

DECL = re.compile(r'^([\w:\s\*<&>]+?)\b([A-Za-z_]\w*)\s*\([^;()]*\)\s*;'
                  r'\s*(//\s*0x[0-9A-Fa-f]+.*)?\r?\n?$')

decls = []
# MSVC treats these CRT-intrinsic spellings specially -- an ellipsis
# declaration C2059s and poisons every includer (g135 diagnosis)
INTRINSIC_BAD = {"_toupper", "_tolower"}
for ln in SRC.read_text(encoding="utf-8", errors="replace").split("\n"):
    s = ln.strip()
    if not s or s.startswith("//") or s.startswith("#"):
        continue
    m = DECL.match(s)
    if not m:
        continue
    ret, name, ann = m.group(1).strip(), m.group(2), (m.group(3) or "").strip()
    if ret in ("#pragma",) or name in INTRINSIC_BAD:
        continue
    decls.append((ret, name, ann))
print("declarations parsed:", len(decls))

if APPLY:
    with open(DST, "w", encoding="utf-8", newline="\n") as f:
        f.write("// G42.16: variadic supply variant of global_funcs.hpp\n")
        f.write("// (derived by tools/csp_export/fix_gf_wire.py -- source\n")
        f.write("//  library untouched; variadic absorbs corpus call arity)\n")
        f.write("#pragma once\n\n")
        for ret, name, ann in decls:
            f.write("%s %s(...);  %s\n" % (ret or "int", name, ann))
        # NB: _toupper/_tolower cannot be declared AT ALL on MSVC (intrinsic
        # parsing rejects user declarations, ellipsis or typed alike) --
        # their few corpus calls stay C3861 until a rename pass
    print("written:", DST)

    cur = WIRE.read_text(encoding="utf-8", errors="replace")
    tag = "global_funcs_variad.hpp"
    if tag not in cur:
        with open(WIRE, "a", encoding="utf-8", newline="\n") as f:
            f.write("\n// G42.16: orphan global-func supply wiring (C3861 bare names)\n"
                    '#include "_generated/global_funcs_variad.hpp"\n')
        print("wired into e4_globals.hpp")
    else:
        print("already wired")
else:
    print("(dry run)")
