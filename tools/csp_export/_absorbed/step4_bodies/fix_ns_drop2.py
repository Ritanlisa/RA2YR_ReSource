#!/usr/bin/env python3
"""G42.18c (redo): namespace drop-block repair, correct criterion.

Wave-18 lesson applied: the peek loop must NOT skip an existing
`namespace gamemd {` line -- a genuinely-dropped block is one where the
next non-blank line after the marker is a DEF HEAD directly (no namespace
opener), while namespace depth == 0.

Negative validation gate: the diagnosis must report ZERO candidates on
known-good TUs (g131 zero-error files) before any write.

Usage: [--apply] [--validate-only]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv
VAL_ONLY = "--validate-only" in sys.argv

MARKER = re.compile(r'^//\s*0x[0-9A-Fa-f]{5,8}\s*$')
NS_OPEN = re.compile(r'^namespace\s+gamemd\s*\{')
DEF = re.compile(r'^[A-Za-z_][\w:,<>\s\*&]*\(')


def find_candidates(text):
    """[(marker_idx, head_idx)] for genuinely-dropped blocks."""
    lines = text.split("\n")
    depth = 0
    out = []
    for i, ln in enumerate(lines):
        if MARKER.match(ln.strip()):
            j = i + 1
            while j < len(lines) and lines[j].strip() == "":
                j += 1
            if (j < len(lines) and depth == 0
                    and DEF.match(lines[j]) and '{' not in lines[j]
                    and not lines[j].rstrip().endswith(';')
                    and not NS_OPEN.match(lines[j].strip())):
                out.append((i, j))
        depth += ln.count('{') - ln.count('}')
    return lines, out


# ---- negative validation on g131-clean TUs (absent from census = 0 errors) ----
g131 = json.load(open(ROOT / ".omo/tu_errors_g131.json", encoding="utf-8", errors='replace'))
g131set = {k.replace("\\", "/").lower() for k in g131}
zero = [str(p) for p in (ROOT / "src/e4").glob("*.cpp")
        if str(p).replace("\\", "/").lower() not in g131set]
print(f"g131-clean (census-absent) e4 TUs: {len(zero)}")
bad = 0
for k in zero[:40]:
    p = Path(k)
    if not p.exists():
        continue
    _lines, cands = find_candidates(p.read_text(encoding="utf-8",
                                                errors="replace"))
    if cands:
        bad += 1
        print(f"  NEGATIVE FAIL {p.name}: {len(cands)} candidates")
if bad:
    print("NEGATIVE VALIDATION FAILED -- aborting, no writes")
    sys.exit(1)
print("negative validation: PASS (0 candidates on 40 known-good TUs)")
if VAL_ONLY:
    sys.exit(0)

# ---- real run ----
stats = {'wrapped': 0, 'files': 0, 'unbalanced': 0}
edits = {}
for p in sorted((ROOT / "src/e4").glob("*.cpp")):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        txt = f.read()
    lines, cands = find_candidates(txt)
    if not cands:
        continue
    # process bottom-up so indices stay valid
    for mi, hj in reversed(cands):
        # brace-balanced close starting at head
        d = 0
        k = hj
        closed = False
        while k < len(lines):
            d += lines[k].count('{') - lines[k].count('}')
            if d == 0 and k > hj:
                closed = True
                break
            if d < 0:
                break
            k += 1
        if not closed or k + 1 >= len(lines):
            stats['unbalanced'] += 1
            continue
        lines.insert(k + 1, '}  // G42.18c ns repair')
        lines.insert(hj, 'namespace gamemd {  // G42.18c ns repair')
        stats['wrapped'] += 1
    edits[str(p)] = "\n".join(lines)
    stats['files'] += 1

print("stats:", stats)
if APPLY:
    for path, txt in edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write(txt)
    print("written:", len(edits), "files")
else:
    print("(dry run)")
