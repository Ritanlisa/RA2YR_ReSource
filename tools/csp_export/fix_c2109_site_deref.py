#!/usr/bin/env python3
"""G42.14 (revised): C2109 site-level fix -- `NAME[N]` -> `(&NAME)[N]`.

Research revision: every top C2109 symbol has BOTH subscript and scalar
uses in the corpus (dword_A8B230: 645 sub / 401 scalar; dword_A8B238: 69
sub / 571 scalar).  Array-izing the extern would silently break the scalar
sites (decay semantics change VALUES, not just types).  Instead rewrite
only the C2109 error-line subscripts of scalar-declared globals:

    NAME[N]  ->  (&NAME)[N]

For `extern unsigned int NAME;` this reads the dword at NAME + N*4 -- the
exact array interpretation, value-identical to the open-array extern, with
zero impact on the symbol's scalar uses.  Multi-level `X[a][b]` inner
subscripts stay for the next round (element-typed debt).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = "--apply" in sys.argv
CEN = ROOT / ".omo/tu_errors_g133.json"
HOMES = [ROOT / "src/e4/e4_globals.hpp",
         ROOT / "src/e4/e4_globals_decls.hpp",
         ROOT / "src/core/ida_globals.h"]

# scalar-declared globals (int-family) eligible for (&X) rewriting
INT_TYPE = re.compile(r'^extern\s+(?:unsigned\s+)?(?:int|long|short|char)\s+'
                      r'([A-Za-z_]\w*)\s*;')
scal = set()
for home in HOMES:
    if not home.exists():
        continue
    for ln in home.read_text(encoding="utf-8", errors="replace").split("\n"):
        m = INT_TYPE.match(ln.strip())
        if m:
            scal.add(m.group(1))
print("scalar int-family globals indexed:", len(scal))

census = json.load(open(CEN, encoding="utf-8"))
sites = {}   # (file, line) -> set(names)
for tu, el in census.items():
    for e in el:
        if "error C2109" not in e:
            continue
        sm = re.match(r"^(.+?)\((\d+)\):", e)
        if not sm:
            continue
        p = sm.group(1)
        try:
            li = int(sm.group(2)) - 1
            lines = open(p, encoding="utf-8", errors="replace").read().split("\n")
        except OSError:
            continue
        if li >= len(lines):
            continue
        hits = {m.group(1) for m in
                re.finditer(r"\b([A-Za-z_]\w*)\s*\[", lines[li])}
        hits &= scal
        if hits:
            sites.setdefault((p, li), set()).update(hits)
print("C2109 site-lines with scalar-global bases:", len(sites))

n = 0
by_file = {}
for (p, li), names in sites.items():
    by_file.setdefault(p, []).append((li, names))
for p, items in by_file.items():
    try:
        with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
            lines = f.read().splitlines(keepends=True)
    except OSError:
        continue
    touched = False
    for li, names in items:
        for name in names:
            pat = re.compile(r"\b%s\s*\[" % re.escape(name))
            new, k = pat.subn("(&%s)[" % name, lines[li])
            if k:
                lines[li] = new
                n += k
                touched = True
    if touched and APPLY:
        with open(p, "w", encoding="utf-8", newline="") as f:
            f.write("".join(lines))
print(f"subscripts rewritten: {n} on {len(sites)} lines "
      f"{'(written)' if APPLY else '(DRY)'}")
