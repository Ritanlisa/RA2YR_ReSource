#!/usr/bin/env python3
"""G41.32: (a) dedupe re-declared global names within e4_globals*.hpp
(keep FIRST declaration -- the appended vt_ supply block re-declared
names the file already carried, C2372); (b) legalize the remaining
`(void**)this` trailing-param def heads (load_options Check form).

Usage: python tools/csp_export/fix_gdecl_dupes.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

DECL = re.compile(r'^extern\s+[^;]+?\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://.*)?$')
THIS_TAIL = re.compile(r'\(([^()]*?)\(\s*void\s*\*\s*\*\s*\)\s*this\s*\)\s*$')

n_dedupe = 0
for name in ('e4_globals_decls.hpp', 'e4_globals.hpp'):
    p = ROOT / 'src' / 'e4' / name
    if not p.exists():
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    seen = set()
    out = []
    for l in lines:
        m = DECL.match(l.strip())
        if m and m.group(1) in seen:
            n_dedupe += 1
            continue
        if m:
            seen.add(m.group(1))
        out.append(l)
    if APPLY and n_dedupe:
        p.write_text('\n'.join(out), encoding='utf-8')
print('global decl dupes dropped:', n_dedupe, '(written)' if APPLY else '(DRY)')

n_this = 0
for p in sorted(ROOT.glob('src/**/*.cpp')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    changed = False
    for i, l in enumerate(lines):
        s = l.strip()
        if '(void' not in s or 'this' not in s:
            continue
        if '::' not in s.split('(')[0]:
            continue
        new = THIS_TAIL.sub(lambda m: '(%sa1)' % (m.group(1) or 'void *'), s)
        if new != s:
            lines[i] = l[:len(l) - len(s)] + new
            n_this += 1
            changed = True
    if changed and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
print('this-tail heads legalized:', n_this, '(written)' if APPLY else '(DRY)')
