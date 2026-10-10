#!/usr/bin/env python3
"""G41.32: relocate fix_fwd_type_supply's `struct X;` lines that landed
INSIDE a class body (nested-type damage, C2027) out to namespace scope --
just after the enclosing `namespace gamemd {`.

Usage: python tools/csp_export/fix_fwd_scope_relocate.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
MARK = '// fix_fwd_type_supply'

n = 0
files = 0
for p in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    moved = [l for l in lines if MARK in l and l.strip().startswith('struct ')]
    if not moved:
        continue
    keep = [l for l in lines if not (MARK in l and l.strip().startswith('struct '))]
    # find the namespace-open line (first `namespace ... {`)
    ins = 0
    for i, l in enumerate(keep[:60]):
        if re.match(r'^\s*namespace\s+\w+\s*\{', l):
            ins = i + 1
            break
    keep[ins:ins] = moved
    n += len(moved)
    files += 1
    if APPLY:
        p.write_text('\n'.join(keep), encoding='utf-8')
print('fwd decls relocated to namespace scope: %d in %d files %s'
      % (n, files, '(written)' if APPLY else '(DRY)'))
