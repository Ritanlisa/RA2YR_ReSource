#!/usr/bin/env python3
"""G41.27: repair `this-((unsigned int *)(>m_1))[3]` arrow-split corruption.

A prior fixer split `this->m_1` into `this-` + `((unsigned int *)(>m_1))`
(the arrow's `>` captured into the wrapped group). 1,085 sites, uniform
indexed form. The repair is information-lossless: `(>NAME)` encodes
`->NAME` unambiguously, restoring the ida_cache original text
(`*(_DWORD **)&this->m_1[3]` family).

Usage: python tools/csp_export/fix_arrow_corruption.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

PAT = re.compile(
    r'-\s*\(\s*\(\s*unsigned\s+(?:int|char|short|long|long\s+long)\s*\*\s*\)'
    r'\s*\(\s*>\s*([A-Za-z_]\w*)\s*\)\s*\)\s*(\[[^\]\[]*\])?')


def main():
    n = 0
    files = 0
    for p in sorted(ROOT.glob('src/**/*.cpp')):
        if 'build' in p.parts or not p.is_file():
            continue
        try:
            txt = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        if '(>' not in txt:
            continue
        new, k = PAT.subn(lambda m: '->%s%s' % (m.group(1), m.group(2) or ''), txt)
        if k:
            n += k
            files += 1
            if APPLY:
                p.write_text(new, encoding='utf-8')
    print('repaired %d sites in %d files %s' %
          (n, files, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
