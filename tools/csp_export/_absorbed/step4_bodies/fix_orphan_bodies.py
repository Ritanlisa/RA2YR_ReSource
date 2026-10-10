#!/usr/bin/env python3
"""Remove orphan body junk between function boundaries.

History: earlier pipeline passes left functions whose def line self-closed
(`void Cls::M() {}`) while the OLD body survived as floating statements at
namespace scope below it. Floating statements are never valid — they make
`this` illegal (C2355) and corrupt the next regen's span detection.

For every `// 0xADDR` annotation with a def line whose brace balance closes
ON the def line itself, everything up to the next annotation (or EOF) that
is not blank / a lone closer is orphan junk and is deleted.

Usage: python tools/csp_export/fix_orphan_bodies.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
ADDR = re.compile(r'^//\s*0x[0-9A-Fa-f]{6,8}\s*$')

tot_files = tot_orphans = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    orig = list(lines)
    i = 0
    while i < len(lines):
        if not ADDR.match(lines[i].strip()):
            i += 1
            continue
        # def line = next line containing '('
        j = i + 1
        while j < len(lines) and '(' not in lines[j]:
            j += 1
        if j >= len(lines):
            break
        # does the def line self-close? Only `... () {}` one-liners qualify;
        # K&R defs (`void F()` / `{` on the next line) are real bodies.
        opens = lines[j].count('{')
        closes = lines[j].count('}')
        if opens == 0:
            nxt = lines[j + 1].strip() if j + 1 < len(lines) else ''
            if nxt.startswith('{'):
                i = j + 1
                continue               # K&R real body: regen's domain
        elif not closes:
            i = j + 1
            continue                   # opens a real body: regen's domain
        # orphan zone: (j, next annotation)
        k = j + 1
        end = len(lines)
        while k < end:
            if ADDR.match(lines[k].strip()):
                end = k
                break
            k += 1
        # namespace wrappers of FOLLOWING functions are not junk
        def _is_junk(ln):
            s = ln.strip()
            if not s:
                return True
            if s == '}':
                return True
            if re.match(r'^(namespace\s|\}\s*//\s*namespace)', s):
                return False
            return True
        del_idx = [i2 for i2 in range(j + 1, end) if _is_junk(lines[i2])]
        kept = [lines[i2] for i2 in range(j + 1, end)
                if i2 not in del_idx]
        if del_idx and kept:
            for i2 in sorted(del_idx, reverse=True):
                del lines[i2]
            tot_orphans += 1
            i = j + 1
            continue
        i = end if end < len(lines) else j + 1
    if lines != orig:
        tot_files += 1
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1',
                                                  errors='replace'))

print(f'orphan bodies removed: {tot_orphans} in {tot_files} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
