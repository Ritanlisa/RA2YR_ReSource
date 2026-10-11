#!/usr/bin/env python3
"""G42.18 (round-4 pass-0): namespace drop-block repair.

Round-3 agent-3 discovery: 50% of C2065 (787/1,571 error lines at g134)
sit OUTSIDE any `namespace gamemd {}` in e4 files -- the materializer
missed or early-closed the per-function wrapper, so the def head parses
at global scope and every gamemd:: symbol in the body goes C2065.

e4 corpus is regular: `// 0xADDR` -> `namespace gamemd {` -> def -> body
-> `}` -> `}`.  Repair: for marker-anchored def heads at namespace depth
0, insert `namespace gamemd {` between marker and def, and `}` after the
function's brace-balanced close (plus `using`-safe trailing newline).

Strict validation: def must brace-balance within the file; a block that
cannot close is recorded, never half-written.

T14/B4 root-cause fix (I74): the peek loop used to SKIP existing
`namespace gamemd {` openers, so every healthy marker/namespace/def
block looked like a dropped candidate and got re-wrapped around the
function-only span (brace balance stops at the fn close) while the
block's real ns close survived below -> systematic double ns close
(depth -1 per block: 588 wraps / 576 files on the HEAD tree), which
fix_leaks_general then "repaired" by eating bare fn closers (587
removals / 463 files) and left variable residual violations behind
(s4af forensic patch; brace HARD GATE rc=10).  Wave-18 lesson, same
criterion as fix_ns_drop2: a genuinely-dropped block has the def head
DIRECTLY after the marker -- the peek loop must never skip an ns
opener.  This makes the fixer idempotent on healthy and already-wrapped
blocks (the ns opener between marker and def disqualifies them).

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = "--apply" in sys.argv

MARKER = re.compile(r'^//\s*0x[0-9A-Fa-f]{5,8}\s*$')
DEF = re.compile(r'^[A-Za-z_][\w:,<>\s\*&]*\(')

stats = {'wrapped': 0, 'skip-def-unbalanced': 0, 'files': 0, 'skip-non-e4': 0}
edits = {}
for p in sorted((ROOT / "src/e4").glob("*.cpp")):
    with open(p, "r", encoding="utf-8", errors="replace", newline="") as f:
        lines = f.read().splitlines(keepends=True)
    depth = 0
    out = []
    i = 0
    changed = False
    while i < len(lines):
        ln = lines[i]
        if MARKER.match(ln.rstrip("\r\n")):
            # peek: skip blanks only -- never skip an existing
            # `namespace gamemd {` opener (I74: skipping it classified
            # every healthy block as dropped and double-wrapped it)
            j = i + 1
            while j < len(lines) and lines[j].strip() == '':
                j += 1
            if (j < len(lines) and depth == 0 and DEF.match(lines[j])
                    and '{' not in lines[j]):
                # candidate dropped block: def head at ns depth 0
                # find brace-balanced end starting from the head
                d = 0
                k = j
                closed = False
                while k < len(lines):
                    d += lines[k].count('{') - lines[k].count('}')
                    if d == 0 and k > j and '}' in lines[k]:
                        closed = True
                        break
                    if d < 0:
                        break
                    k += 1
                if closed:
                    out.append(ln)
                    out.append('namespace gamemd {  // G42.18 ns repair\n')
                    for x in range(j, k + 1):
                        # guard: a trailing line without a newline would
                        # glue the inserted closer onto it (`}}`) -- I74
                        out.append(lines[x] if lines[x].endswith('\n')
                                   else lines[x] + '\n')
                    out.append('}  // G42.18 ns repair\n')
                    i = k + 1
                    stats['wrapped'] += 1
                    changed = True
                    continue
                stats['skip-def-unbalanced'] += 1
        out.append(ln)
        depth += ln.count('{') - ln.count('}')
        i += 1
    if changed:
        edits[str(p)] = out
        stats['files'] += 1

print("stats:", stats)
if APPLY:
    for path, out in edits.items():
        with open(path, "w", encoding="utf-8", errors='replace', newline="") as f:
            f.write("".join(out))
    print("written:", len(edits), "files")
else:
    print("(dry run)")
