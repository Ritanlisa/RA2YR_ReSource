#!/usr/bin/env python3
"""X112 one-shot repair for a known generator scar:
`this->q002[2]2[2]` / `this->u32_11B[1]B[1]` -- an array-expression replacement
was applied to a token prefix and the old numeric tail survived.  Keep the
correct first array expression, drop the duplicated tail.
Idempotent by construction (the second run finds no pattern).
"""
import re, sys
from pathlib import Path
ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
PAT = re.compile(r'(->[A-Za-z_]\w*\[\d+\])(?:[0-9A-Fa-f]+\[\d+\])')
n = 0
files = 0
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    try:
        txt = p.read_text(encoding='utf-8')
        codec = 'utf-8'
    except UnicodeDecodeError:
        txt = p.read_text(encoding='latin-1')
        codec = 'latin-1'
    lines = txt.split('\n')
    changed = False
    for i, line in enumerate(lines):
        if '/*0x' not in line and '//' not in line:
            continue
        new = PAT.sub(r'\1', line)
        if new != line:
            n += 1
            changed = True
            lines[i] = new
    if changed:
        files += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode(codec))
print(('APPLIED' if APPLY else 'DRY RUN') + ': %d lines in %d files' % (n, files))
