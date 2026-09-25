#!/usr/bin/env python3
"""One-shot: rewrite IDA bitfield macros in landed bodies to IDA_* forms.

regen_bodies_from_export.py does this at emission time (generator fix); this
pass covers bodies already in the tree between regen runs.

Usage: python tools/csp_export/rewrite_ida_vocab.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

IDA_VOCAB_RE = re.compile(
    r'\b(BYTE[0-8]|WORD[0-7]|LOWORD|HIWORD|LOBYTE|HIBYTE|LODWORD|HIDWORD|SHIWORD|SLOBYTE|SHLOBYTE'
    r'|__PAIR16__|__PAIR32__|__PAIR64__)\(')
# earlier rewrite passes ate the callee of some tail calls -> `return ();`
TYPE_ID = re.compile(r'([ \s(\*&<>,]|^)#(\d+)')

def type_ids(code):
    # IDA internal type ids (#375 etc.) rendered as pointer bases: make opaque
    return TYPE_ID.sub(lambda m: m.group(1) + 'void', code)


DEC_NEWDEL = re.compile(r'\b__(2_YAPAXI_Z|3_YAXPAX_Z)\s*\(')

def dec_newdel(code):
    return DEC_NEWDEL.sub(
        lambda m: ('RA2_OPNEW(' if m.group(1).startswith('2_')
                   else 'RA2_OPDEL('), code)


EMPTY_RET = 'return ();'

tot_files = tot_hits = 0
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1')
    except OSError:
        continue
    new, n = IDA_VOCAB_RE.subn(lambda m: 'IDA_' + m.group(1) + '(', txt)
    n4 = len(TYPE_ID.findall(new))
    if n4:
        new = type_ids(new)
    n3 = len(DEC_NEWDEL.findall(new))
    if n3:
        new = dec_newdel(new)
    n2 = new.count(EMPTY_RET)
    if n2:
        new = new.replace(EMPTY_RET, 'return 0;')
    if n or n2 or n3 or n4:
        tot_files += 1
        tot_hits += n + n2 + n3 + n4
        if APPLY:
            p.write_bytes(new.encode('latin-1', errors='replace'))

print(f'vocab rewrites: {tot_hits} in {tot_files} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
