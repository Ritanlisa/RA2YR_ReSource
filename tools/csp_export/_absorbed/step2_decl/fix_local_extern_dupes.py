#!/usr/bin/env python3
"""G41.31: drop cpp-LOCAL `extern T NAME;` lines whose NAME is already
declared by the /FI'd global headers (ida_globals.h et al.) -- the local
redeclaration with a drifting type is the C2040/C2371/C2372 family.

A local extern for a name the global headers do NOT carry is kept.

Usage: python tools/csp_export/fix_local_extern_dupes.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

# authoritative declared names + types from the FI chain's global headers
AUTH = {}
for hp in [ROOT / 'src' / 'core' / 'ida_globals.h',
           ROOT / 'src' / 'render' / 'globals_render.hpp',
           ROOT / 'src' / 'csp_canon' / 'globals.hpp']:
    if not hp.exists():
        continue
    for l in hp.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = re.match(r'^\s*extern\s+([^;]+?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://.*)?$', l)
        if m:
            AUTH[m.group(2)] = (m.group(1), bool(m.group(3)))
print('authoritative globals:', len(AUTH))

LOCAL = re.compile(r'^extern\s+([^;]+?)\s+([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;\s*(?://.*)?$')
n = 0
files = 0
for p in sorted(ROOT.glob('src/**/*.cpp')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    hit = False
    for i, l in enumerate(lines):
        m = LOCAL.match(l)
        if not m:
            continue
        if m.group(2) in AUTH:
            lines[i] = None  # drop: header already declares it
            n += 1
            hit = True
    if hit:
        files += 1
        if APPLY:
            p.write_text('\n'.join(x for x in lines if x is not None),
                         encoding='utf-8')
print('local externs dropped: %d in %d files %s'
      % (n, files, '(written)' if APPLY else '(DRY)'))
