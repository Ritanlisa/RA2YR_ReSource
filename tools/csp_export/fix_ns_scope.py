#!/usr/bin/env python3
"""Re-wrap e4 member defs that drifted to global scope.

Earlier passes deleted `namespace gamemd {` wrappers as junk, leaving
`Cls::Mth(...)` definitions at global scope (C2653/C2065/C2888 cascades).
This walks each src/e4/*.cpp with a namespace-depth tracker and wraps any
def group found at depth 0 in `namespace gamemd { ... }`.

Usage: python tools/csp_export/fix_ns_scope.py [--apply]
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import brace_delta

ROOT = Path(__file__).resolve().parents[2]
E4 = ROOT / 'src' / 'e4'
APPLY = '--apply' in sys.argv

ADDR = re.compile(r'^//\s*0x[0-9A-Fa-f]{6,8}\s*$')
DEF = re.compile(
    r'^[A-Za-z_][\w\s\*<>,:&]*?\b\w+::~?\w+\s*\([^;{]*$')
NS_OPEN = re.compile(r'^namespace\s+[\w:]+\s*\{')
NS_CLOSE = re.compile(r'^\}\s*//\s*namespace')

tot_defs = tot_files = 0
for p in sorted(E4.glob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    depth = 0
    i = 0
    while i < len(lines):
        ln = lines[i]
        if NS_OPEN.match(ln.strip()):
            depth += 1
            i += 1
            continue
        if NS_CLOSE.match(ln.strip()):
            depth = max(0, depth - 1)
            i += 1
            continue
        if depth == 0 and ADDR.match(ln.strip()):
            # find the def line within the next 3 lines
            j = i + 1
            while j < len(lines) and not lines[j].strip():
                j += 1
            if j < len(lines) and DEF.match(lines[j]):
                # find body close (balanced braces from def)
                k = j
                d = 0
                started = False
                while k < len(lines):
                    d += brace_delta(lines[k])
                    if brace_delta(lines[k]) > 0:
                        started = True
                    if started and d <= 0:
                        break
                    k += 1
                if started and k < len(lines):
                    lines.insert(j, 'namespace gamemd {')
                    lines.insert(k + 2, '} // namespace gamemd')
                    tot_defs += 1
                    i = k + 3
                    continue
        d = brace_delta(ln)
        depth = max(0, depth + (1 if d > 0 and 'namespace' not in ln else 0))
        i += 1
    if lines != orig:
        tot_files += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1',
                                                  errors='replace'))
print(f'global-scope defs wrapped: {tot_defs} in {tot_files} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
