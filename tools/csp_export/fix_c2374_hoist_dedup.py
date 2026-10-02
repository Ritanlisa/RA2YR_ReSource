#!/usr/bin/env python3
"""G42.29a: dedupe G37-hoist lines (C2374 family, 310 errors).

fix_body_syntax_v2.py inserted `unsigned int vN = 0;  /* G37 hoist */`
once per census-run at the function head without an idempotence check --
gap2_defs_2.cpp accumulated 29 copies of `v2`. C2374 = multiple
initialization. Corpus repair: within a contiguous run of hoist lines of
the same name, keep only the first. (Emitter idempotence patched
separately in fix_body_syntax_v2.py.)

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
SRC = ROOT / 'src'

HOIST = re.compile(r'^(\s*)(unsigned int\s+(\w+)\s*=\s*0;\s*)(/\* G37 hoist \*/)\s*$')

n_files = n_dups = 0
for p in SRC.rglob('*.cpp'):
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    out = []
    last_name = None     # name of previous hoist line (if it was one)
    dropped = 0
    for ln in lines:
        m = HOIST.match(ln.rstrip('\r'))
        if m and m.group(3) == last_name:
            # byte-identical (modulo indent) duplicate directly under a
            # hoist of the same name -> the non-idempotent re-insert
            dropped += 1
            continue
        last_name = m.group(3) if m else None
        out.append(ln)
    if dropped:
        n_files += 1
        n_dups += dropped
        print('%-70s -%d' % (str(p.relative_to(ROOT)), dropped))
        if APPLY:
            p.write_text('\n'.join(out), encoding='utf-8')

print('files: %d, duplicate hoist lines removed: %d%s'
      % (n_files, n_dups, '' if APPLY else '  (DRY)'))
