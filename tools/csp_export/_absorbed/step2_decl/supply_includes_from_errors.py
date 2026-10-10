#!/usr/bin/env python3
"""Error-driven include supply for e4 TUs.

Consumes an MSBuild error log; for every C2027 (undefined type) / C2653
(not a class) / C2039 (not a member) raised inside a src/e4/*.cpp, inserts
`#include "e4/classes/<Cls>_e4.hpp"` when that header exists. Rerun per
build round until the surface is clean (completeness of a class pulls in
its members, which may surface the next missing class).

Usage: python tools/csp_export/supply_includes_from_errors.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('gbk', errors='replace') if LOG else ''
ERR = re.compile(
    r'([A-Za-z0-9_]+\.cpp)\((\d+),?\d*\): error C(2027|2653|2039|2065|3861)')

# class-name candidates in a message: gamemd::X, “X”, or bare CamelCase words
NAME_RE = [re.compile(r'gamemd::([A-Z]\w*)'),
           re.compile(u'“([A-Z]\\w*)”'),
           re.compile(r'\b([A-Z][a-z]\w*)\b')]

need = {}   # cpp -> set(class names)
for m in ERR.finditer(TXT):
    f, code = m.group(1), m.group(3)
    seg = TXT[m.end():m.end() + 220]
    names = set()
    for rx in NAME_RE:
        names |= set(rx.findall(seg))
    need.setdefault(f, set()).update(names)

inserted = 0
files = 0
for f, names in sorted(need.items()):
    p = ROOT / 'src' / 'e4' / f
    if not p.exists():
        continue
    txt = p.read_text(encoding='latin-1', errors='replace')
    adds = []
    for n in sorted(names):
        if not (E4C / ('%s_e4.hpp' % n)).exists():
            continue
        inc = '#include "e4/classes/%s_e4.hpp"' % n
        if inc in txt:
            continue
        adds.append(inc)
    if not adds:
        continue
    lines = txt.split('\n')
    at = 0
    for i, ln in enumerate(lines):
        if ln.startswith('#include'):
            at = i + 1
    lines[at:at] = adds
    inserted += len(adds)
    files += 1
    if APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print(f'includes inserted: {inserted} in {files} cpps')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
