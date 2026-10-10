#!/usr/bin/env python3
"""G41.31: collapse `&(void*)(void*)&X` / `&(void*)&X` to `(void*)&X`.

The G41.25 vftable rewriter left address-of-cast forms; `&(void*)` is
address-of-rvalue (C2102) and decays wrongly even where it compiles.
`(void*)&X` keeps the intended pointer-to-void conversion.

Usage: python tools/csp_export/fix_voidcast_addr.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

PAT = re.compile(r'&\s*\(\s*void\s*\*\s*\)\s*(?:\(\s*void\s*\*\s*\)\s*&)?')


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
        if '&(void' not in txt and '& (void' not in txt:
            continue
        new, k = PAT.subn('(void *)&', txt)
        if k:
            n += k
            files += 1
            if APPLY:
                p.write_text(new, encoding='utf-8')
    print('voidcast-addr collapsed: %d in %d files %s'
          % (n, files, '(written)' if APPLY else '(DRY)'))


if __name__ == '__main__':
    main()
