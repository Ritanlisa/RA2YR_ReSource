#!/usr/bin/env python3
"""G41.32: per-TU missing-type supply -- for legacy cpps whose C2065/
C2143/C4430 names are types known elsewhere in the tree, prepend
`struct NAME;` fwd decls (pointer/cast usages compile against fwd).

Only CAPITALIZED identifiers that exist as struct/class somewhere in
src/ are supplied; unknown names are reported, not invented.

Usage: python tools/csp_export/fix_tu_missing_types.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

Q = chr(0x201C) + chr(0x201D)
QT = '["' + Q + ']'
LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+),\d+[)]: error (C2065|C2143|C4430|C2653)')
NAME = re.compile(r'error C\d+: ' + QT + r'([^"' + Q + r']+)' + QT)

# type universe
types = {}
for p in ROOT.glob('src/**/*.h*'):
    if 'build' in p.parts:
        continue
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    for m in re.finditer(r'\b(?:struct|class)\s+([A-Za-z_]\w*)', txt):
        types.setdefault(m.group(1), 'struct')

need = {}
unknown = set()
for ln in Path(LOG).read_text(encoding='utf-8', errors='replace').splitlines():
    m = LN.match(ln.replace('\\', '/'))
    if not m:
        continue
    nm = NAME.search(ln)
    if not nm:
        continue
    ident = nm.group(1).split('::')[-1].split()[0]
    if not ident or not ident[0].isupper():
        continue
    if ident in types:
        need.setdefault(m.group(1).replace('/', '\\'), set()).add(ident)
    else:
        unknown.add(ident)
print('TUs needing supply:', len(need), '| unknown names:', len(unknown),
      sorted(unknown)[:10])

n = 0
for fp, names in need.items():
    p = ROOT / fp
    if not p.exists():
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    have = set(re.findall(r'\b(?:struct|class)\s+([A-Za-z_]\w*)', txt))
    add = sorted(names - have)
    if not add or not add[0][0].isupper():
        continue
    lines = txt.split('\n')
    ins = 0
    for i, l in enumerate(lines[:30]):
        if l.startswith('#include'):
            ins = i + 1
    for nm in add:
        lines.insert(ins, 'struct %s;  // fix_tu_missing_types' % nm)
        ins += 1
        n += 1
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
print('fwd decls inserted:', n, '(written)' if APPLY else '(DRY)')
