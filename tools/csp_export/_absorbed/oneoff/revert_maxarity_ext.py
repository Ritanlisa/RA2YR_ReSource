#!/usr/bin/env python3
"""Revert every max-arity default-arg extension: `, void *aN = 0` appended
inside e4 header declarations. Precise inverse of the r11 apply.

Usage: python tools/csp_export/revert_maxarity_ext.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

PAT = re.compile(r',\s*void \*a\d+ = 0(?=\))')
n = 0
tot = 0
for p in sorted(E4C.glob('*_e4.hpp')):
    txt = p.read_text(encoding='utf-8', errors='replace')
    if 'void *a' not in txt:
        continue
    orig = txt
    txt, k = PAT.subn('', txt)
    if k:
        tot += k
        n += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')
print('headers:', n, 'extensions removed:', tot)
if not APPLY:
    print('(dry run -- pass --apply)')
