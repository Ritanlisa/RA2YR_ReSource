#!/usr/bin/env python3
"""Undo pre-TYK param-dedupe damage: type tokens suffixed `_N`.

The first run of fix_dup_param_names2.py predates the TYK keyword
exclusion and renamed anonymous type-only parameters (`(int32_t, int32_t)`
-> `(int32_t, int32_t_2)`), producing unknown types (C2061). The undo pass
at the time grepped for `int_2`-shaped names and missed typedef-shaped
ones (`int32_t_2`). This restores every `<typetoken>_<digits>` back to the
bare type token -- a parameter named `int32_t_2` is never legitimate.

Idempotent by construction. Dry run by default; --apply to write.

Usage: python tools/csp_export/fix_typedef_mangle_undo.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

TYPES = (r'int|char|bool|short|long|float|double|unsigned|signed|wchar_t|'
         r'__int64|int8_t|int16_t|int32_t|int64_t|uint8_t|uint16_t|'
         r'uint32_t|uint64_t|size_t|BOOL|DWORD|WORD|BYTE|LONG|UINT|'
         r'HRESULT|HANDLE')
PAT = re.compile(r'\b(' + TYPES + r')_([0-9]+)\b')

# order matters: int32_t before int (alternation is first-match), and the
# compound tokens must precede their prefixes -- ensured by listing the
# longer forms first inside TYPES.

n = 0
files = 0
for p in sorted(ROOT.glob('src/**/*.?*')):
    if p.suffix not in ('.hpp', '.cpp', '.h', '.c') or not p.is_file():
        continue
    if 'build' in p.parts:
        continue
    try:
        text = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    new, k = PAT.subn(r'\1', text)
    if k:
        n += k
        files += 1
        print('  %-56s %d site(s)' % (p.relative_to(ROOT), k))
        if APPLY:
            p.write_text(new, encoding='utf-8')
print('%s: %d mangled type token(s) restored across %d file(s)'
      % ('APPLIED' if APPLY else 'DRYRUN', n, files))
