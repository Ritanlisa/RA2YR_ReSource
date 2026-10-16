#!/usr/bin/env python3
"""X43 batch-2 fixer: D-form safe subset (5 rows).
Skips: addr68 (dword_A8B230 +134 = L337 dual-vocab fragmented atom),
addr77 (MSG* vs LPMSG alias false-positive).
Same mechanism/guards as x43_fix_casts.py.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
OUT = ROOT / '.omo/evidence/optimization/x43'
APPLY = '--apply' in sys.argv

ROWS = [
    {'file': 'src/e4/CaptureManagerClass_e4.cpp', 'line': 232,
     'old': 'int', 'new': 'BuildingClass *'},
    {'file': 'src/e4/addr57_e4.cpp', 'line': 940,
     'old': 'int', 'new': 'CellLand *'},
    {'file': 'src/e4/addr6B_e4.cpp', 'line': 936,
     'old': 'int', 'new': 'CellClass *'},
    {'file': 'src/e4/addr47_e4.cpp', 'line': 1240,
     'old': 'char **', 'new': 'MixFileClass *'},
    {'file': 'src/e4/TerrainClass_e4.cpp', 'line': 750,
     'old': 'IUnknown *', 'new': 'int'},
]

by_file = {}
for r in ROWS:
    by_file.setdefault(r['file'], []).append(r)

plan = []
skipped = []
for fp, rows in by_file.items():
    path = ROOT / fp
    lines = path.read_text(encoding='latin-1', errors='replace').split('\n')
    for r in sorted(rows, key=lambda x: -x['line']):
        ln = lines[r['line'] - 1]
        pat = re.compile(r'\(\s*%s\s*\)' % re.escape(r['old']))
        hits = list(pat.finditer(ln))
        if len(hits) != 1:
            skipped.append((fp, r['line'], 'cast-count-%d' % len(hits)))
            continue
        m = hits[0]
        newln = ln[:m.start()] + '(%s)' % r['new'] + ln[m.end():]
        if newln.count('(') != ln.count('(') or newln.count(')') != ln.count(')'):
            skipped.append((fp, r['line'], 'paren-delta'))
            continue
        plan.append((fp, r['line'], ln, newln))

print('plan: %d edits (skipped: %s)' % (len(plan), skipped))
if APPLY:
    for fp in by_file:
        path = ROOT / fp
        lines = path.read_text(encoding='latin-1', errors='replace').split('\n')
        n = 0
        for fl, lineno, old, new in plan:
            if fl == fp:
                lines[lineno - 1] = new
                n += 1
        path.write_bytes('\n'.join(lines).encode('latin-1'))
        print('applied %s: %d lines' % (fp, n))
else:
    for fp, lineno, old, new in plan:
        print('  %s:%d' % (fp.split('/')[-1], lineno))
        print('    - %s' % old.strip()[:110])
        print('    + %s' % new.strip()[:110])
