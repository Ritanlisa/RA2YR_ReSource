#!/usr/bin/env python3
"""OO translation quality gate: catches IDA pseudocode artifacts in e4 bodies.

Simple per-line scan between // 0xADDR annotations for:
  1. _DWORD/_WORD/_BYTE/_QWORD/_UNKNOWN as types
  2. vftable direct references
  3. RA2_OPNEW / operator new in bodies
  4. this + N pointer arithmetic
  5. __intN MSVC intrinsics in bodies
  6. .vftable member access

Exit 0 = pass, exit 1 = violations.
"""
import re, sys, os
from pathlib import Path
from collections import Counter

ROOT = Path(__file__).resolve().parents[1]
E4 = ROOT / 'src' / 'e4'
ADDR = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')

CHECKS = [
    ('IDA_TYPE',    re.compile(r'\b(_DWORD|_WORD|_BYTE|_QWORD|_UNKNOWN)\b')),
    ('VFTABLE',     re.compile(r'\w+_vftable|`vftable\x27|\.vftable')),
    ('OPNEW',       re.compile(r'\bRA2_OPNEW\b|\boperator new\s*\(')),
    ('THIS_ARITH',  re.compile(r'\bthis\s*\+\s*\d+')),
    ('MSVC_INTN',   re.compile(r'\b__int(?:8|16|32|64)\b')),
    ('LABEL_REF',   re.compile(r'\bLABEL_\d+\b')),
    ('RAW_DWORD',   re.compile(r'\*\(\s*_DWORD\s*\*\s*\)|\(_DWORD\s*\*\)')),
]


def main():
    show = int(os.environ.get('GATE_SHOW', '3'))
    all_v = []
    for p in sorted(E4.glob('*.cpp')):
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        cur_fn = ''
        for i, ln in enumerate(lines):
            am = ADDR.match(ln.strip())
            if am:
                cur_fn = f'0x{int(am.group(1),16):X}'
                continue
            for cat, pat in CHECKS:
                if pat.search(ln):
                    all_v.append((p.name, i+1, cur_fn or '?', cat, ln.strip()[:100]))

    by_cat = Counter(v[3] for v in all_v)
    total = sum(by_cat.values())
    n_files = len(set(v[0] for v in all_v))

    print(f'OO translation gate: {total} violations in {n_files} files')
    for cat, n in by_cat.most_common():
        print(f'  {cat:12s}: {n:5d}')
        shown = 0
        for f, ln, fn, c, d in all_v:
            if c == cat and shown < show:
                print(f'    {f}:{ln} ({fn}): {d}')
                shown += 1

    sys.exit(1 if total else 0)


if __name__ == '__main__':
    main()
