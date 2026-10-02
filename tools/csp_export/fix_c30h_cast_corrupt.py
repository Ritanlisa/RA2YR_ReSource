#!/usr/bin/env python3
"""G42.30h: C-series cast corruption + F1 merged lines (syntax agent P3/F1).

P3a typed-this fnptr double-cast (116 sites, G41.48 double-cast
harvester):  `((Cls *)(**))(Cls *)` -> `(**)`  (operand-less second cast).
P3b empty cast chain (10): `(T *)((U *))X` -> `(T *)X`.
P3c double this (7): `this->this->` -> `this->`.
F1 merged lines (34, G41.20/36/48 remat): `X = frag  X = full...`
-> keep the second statement.

Usage: [--apply]
"""
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

# ((Cls *)(**))(Cls *)   ->   (**)          [also gamemd::-qualified]
TYPEDTHIS = re.compile(
    r'\(\((?:gamemd::)?[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*\s*\*\)\(\*\*\)\)'
    r'\((?:gamemd::)?[\w:&<>,\s]*\*?\)')
# (T *)((U *))op  ->  (T *)op
EMPTYCAST = re.compile(
    r'(\(\s*(?:gamemd::)?[\w:]+\s*\*\s*\))\(\s*(?:gamemd::)?[\w:]+\s*\*\s*\)\)')
DOUBLETHIS = re.compile(r'\bthis->this->')
# F1: `lhs = frag   lhs = rest` -> keep 2nd (frag <= 6 visible chars)
MERGED_EQ = re.compile(r'^(\s*)([A-Za-z_][\w]*(?:\([^()]*\))?)\s*=\s*'
                       r'.{1,6}?\s+\2\s*=\s*')

stats = Counter()
for p in (ROOT / 'src').rglob('*.cpp'):
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    ch = False
    for i, ln in enumerate(lines):
        if '`' in ln:
            continue
        new, k = TYPEDTHIS.subn('(**)', ln)
        if k:
            stats['p3a-typed-this'] += k
            ln = new
        new, k = EMPTYCAST.subn(r'\1', ln)
        if k:
            stats['p3b-empty-cast'] += k
            ln = new
        new, k = DOUBLETHIS.subn('this->', ln)
        if k:
            stats['p3c-double-this'] += k
            ln = new
        m = MERGED_EQ.match(ln)
        if m:
            ln = m.group(1) + m.group(2) + ' = ' + ln[m.end():]
            stats['f1-merged'] += 1
        if ln != lines[i]:
            lines[i] = ln
            ch = True
    if ch and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')

print('stats:', dict(stats.most_common()),
      '(written)' if APPLY else '(DRY)')
