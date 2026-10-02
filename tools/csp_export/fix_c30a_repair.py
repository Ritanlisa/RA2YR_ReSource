#!/usr/bin/env python3
"""G42.30b: repair 30a @<reg> params + strip backtick vftable/RTTI garbage.

1. fix_c2511_align wrote cache-truth params verbatim -- IDA register
   annotations (`a1@<edi>`) and duplicated names reached decls (C2018
   `@` storm). Strip `@<...>` everywhere in aligned signatures.
2. IDA pseudo garbage ``&Cls::`vftable'`` / `` `RTTI Type Descriptor'``
   (F99 residue, unmasked by parse progress) -> 0.

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

REG = re.compile(r'@<[^>]*>')          # a1@<edi> -> a1
VTFT = re.compile(r'&?[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*::`vftable\'')
RTTI = re.compile(r'&[A-Za-z_]\w*\s*`RTTI Type Descriptor\'')
DUPNAME = re.compile(r'\b([A-Za-z_]\w*)\s+\1\b(?=\s*[,)])')

n_reg = n_vt = n_rtti = n_dup = 0
SRC = ROOT / 'src'
for p in list(SRC.rglob('*.cpp')) + list(SRC.rglob('*.hpp')) + \
        list(SRC.rglob('*.h')):
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    if '@<' not in txt and '`' not in txt:
        continue
    orig = txt
    txt, k = REG.subn('', txt)
    n_reg += k
    txt, k = VTFT.subn('0', txt)
    n_vt += k
    txt, k = RTTI.subn('0', txt)
    n_rtti += k
    txt, k = DUPNAME.subn(r'\1', txt)
    n_dup += k
    if txt != orig and APPLY:
        p.write_text(txt, encoding='utf-8')

print('reg-anno stripped: %d, `vftable\' zeroed: %d, RTTI zeroed: %d, '
      'dup-names merged: %d %s' % (n_reg, n_vt, n_rtti, n_dup,
                                   '(written)' if APPLY else '(DRY)'))
