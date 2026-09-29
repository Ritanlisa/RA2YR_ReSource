#!/usr/bin/env python3
"""Clean the G37 r1/r2 malformed-cast artifact `((void *))`.

The pre-hardening C2100 rewrite produced `(TYPE *)((void *))(X)` and
`*(void *)((void *))(X)` forms. Rewrite them to safe equivalents:

  ((void *))(X)        -> (X)
  *(void *)((void *))(X) -> *(unsigned int *)(X)

Idempotent. Usage: python tools/csp_export/fix_voidcast_artifact.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

PAT_VOIDCAST = re.compile(r'\(\(void \*\)\)\(')
PAT_DEREF = re.compile(r'\*\(void \*\)\(\(void \*\)\)\(')
STATS = {'deref': 0, 'plain': 0}

n = 0
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    if '((void *))' not in txt:
        continue
    orig = txt
    txt = PAT_DEREF.sub(lambda m: (STATS.__setitem__('deref', STATS['deref'] + 1)
                                   or '*(unsigned int *)('), txt)
    txt = PAT_VOIDCAST.sub(lambda m: (STATS.__setitem__('plain', STATS['plain'] + 1)
                                      or ''), txt)
    if txt != orig:
        n += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')
print('files changed:', n, STATS)
if not APPLY:
    print('(dry run -- pass --apply)')
