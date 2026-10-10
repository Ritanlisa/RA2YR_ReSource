#!/usr/bin/env python3
"""Substitute CSP pseudo-type placeholders `#NNN` with compilable types.

The typed CSP export rendered unresolved type anchors as `#NNN` tokens
(`(#373 *)this`, `(#377 *, int, unsigned int)` fn-ptr signatures). These
are illegal in C++ (C2014 preprocessor / C2059 / cascading C2671 on every
function whose body or signature carries one).

Substitution (event-neutral — these casts/types carry no extractor
events):
  * `#NNN *` / `#NNN **`  -> `void *` / `void **`   (pointer contexts)
  * bare `#NNN`           -> `int`                  (value contexts)

Corpus scope: e4, _gap2, system/gap2*, misc_ext. Idempotent.

Usage: python tools/csp_export/fix_hash_type_tokens.py [--apply]
"""
import glob
import os
import re
import sys

APPLY = '--apply' in sys.argv
HASH = re.compile(r'#(\d+)\b\s*(\*+)?')

stats = {'ptr': 0, 'val': 0}
files_changed = 0
for p in (glob.glob('src/e4/*.cpp') + glob.glob('src/e4/classes/*.hpp')
          + glob.glob('src/_gap2/*.cpp') + glob.glob('src/_gap2/*.hpp')
          + glob.glob('src/system/gap2*.cpp')):
    raw = open(p, encoding='utf-8', errors='replace').read()
    def _rep(m):
        if m.group(2):
            stats['ptr'] += 1
            return 'void ' + m.group(2)
        if m.end() < len(raw) and raw[m.end()] == '*':
            stats['ptr'] += 1
            return 'void *'
        stats['val'] += 1
        return 'int'
    new = HASH.sub(_rep, raw)
    if new != raw:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', errors='replace', newline='').write(new)
print('files changed:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
