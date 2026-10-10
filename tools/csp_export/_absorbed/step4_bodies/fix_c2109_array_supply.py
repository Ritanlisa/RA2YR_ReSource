#!/usr/bin/env python3
"""G42.14: C2109 array supply -- scalar externs -> open arrays.

Research (agent 5 round-2): 1,139 C2109 sites; the dominant DECL-SCALAR
bucket declares data globals as scalars while the corpus subscripts them
(`dword_A8B230[14]` x297, `HouseClass_Player[29924]`, ...).  Open-array
`extern T NAME[];` is a legal incomplete-array extern: every subscript
compiles without adjudicating dimensions.

Scope this wave: GLOBAL data symbols only (class-member subscript debt
needs the e4 class-header generator, recorded for round 3).  Element type
conservatively keeps the existing declared type.

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g133.json"
HOMES = [ROOT / "src/e4/e4_globals.hpp",
         ROOT / "src/e4/e4_globals_decls.hpp",
         ROOT / "src/core/ida_globals.h"]

census = json.load(open(CEN, encoding="utf-8", errors='replace'))
# C2109 message: “X”: 下标要求数组或指针类型 -- site line has the subscript
syms = Counter()
for tu, el in census.items():
    for e in el:
        if "error C2109" not in e:
            continue
        sm = re.match(r"^(.+?)\((\d+)\):", e)
        if not sm:
            continue
        p = sm.group(1)
        if not p.startswith(("D:", "d:")) and "RA2YR" not in p:
            continue
        try:
            li = int(sm.group(2)) - 1
            lines = open(p, encoding="utf-8", errors="replace").read().split("\n")
        except OSError:
            continue
        if li >= len(lines):
            continue
        # base being subscripted: NAME[ on the error line
        for m in re.finditer(r"\b([A-Za-z_][\w]*)\s*\[", lines[li]):
            syms[m.group(1)] += 1
        # also `&NAME[` and `.NAME[` forms are covered by the same pattern

print("C2109 subscript bases:", len(syms), "mentions:", sum(syms.values()))

DECL = re.compile(r'^(extern\s+[\w:\s\*]+?)\b([A-Za-z_]\w*)\s*;\s*(?://.*)?\r?\n?$')
edits = {}
n = 0
for name, cnt in syms.most_common(200):
    done = False
    for home in HOMES:
        if not home.exists() or done:
            continue
        with open(home, "r", encoding="utf-8", errors="replace", newline="") as f:
            lines = f.read().splitlines(keepends=True)
        for i, ln in enumerate(lines):
            dm = DECL.match(ln.rstrip("\r\n"))
            if dm and dm.group(2) == name and "[" not in ln:
                lines[i] = ln.replace(
                    "%s;" % name, "%s[];" % name, 1)
                edits[str(home)] = lines
                n += 1
                print(f"  {home.name}:{i+1} {name} -> []  [{cnt}]")
                done = True
                break
print(f"decls array-ized: {n} in {len(edits)} files")
if APPLY and edits:
    for path, lines in edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write("".join(lines))
    print("written")
elif not APPLY:
    print("(dry run)")
