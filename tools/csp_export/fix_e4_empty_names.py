#!/usr/bin/env python3
"""Fix empty-name members in e4 class headers.

Generated headers occasionally contain `TYPE ;  // 0xNNN` (member name
lost in generation). `TYPE ;` is invalid C++ and cascades C2059 into every
includer. Rename to the offset-canonical filler `qNNN` (qE10 @ 0xE10),
matching the surrounding q-prefixed filler style.

Idempotent; --apply to write.

Usage: python tools/csp_export/fix_e4_empty_names.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

# `TYPE ;  // 0xNNN` — type words then `;` then offset comment
EMPTY = re.compile(
    r'^(\s*)((?:unsigned|signed)\s+)?(void|int|char|short|long|float|double|bool)'
    r'((?:\s*\*)*)\s*;\s*(//\s*0x([0-9A-Fa-f]+))?\s*$')

tot_files = tot_fixed = 0
for hp in sorted((ROOT / 'src').rglob('*_e4.hpp')):
    try:
        txt = hp.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    lines = txt.split('\n')
    changed = 0
    out = []
    for ln in lines:
        m = EMPTY.match(ln)
        if m:
            indent, sg, ty, stars, cm, off = m.groups()
            nm = ('q%X' % int(off, 16)) if off else None
            if not nm:
                out.append(ln)
                continue
            # avoid duplicate names within the file
            if re.search(r'\b%s\b' % nm, txt):
                nm = nm + '_a'
            stars = (stars or '').replace(' ', '')
            new = '%s%s%s %s;  %s' % (indent, sg or '', ty, ('*' + nm) if stars else nm, cm or '')
            if new != ln:
                ln = new
                changed += 1
        out.append(ln)
    if changed:
        tot_files += 1
        tot_fixed += changed
        print('%4d  %s' % (changed, hp.relative_to(ROOT)))
        if APPLY:
            hp.write_text('\n'.join(out), encoding='utf-8')

print('files: %d, members fixed: %d' % (tot_files, tot_fixed))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
