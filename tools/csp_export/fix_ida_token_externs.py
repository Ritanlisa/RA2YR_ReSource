#!/usr/bin/env python3
"""Token-level supply for IDA-pseudocode remnants in the corpus.

  * CRT operator new/delete mangled names -> project macros:
        __2_YAPAXI_Z(   -> RA2_OPNEW(     (operator new(size))
        __3_YAXPAX_Z(   -> RA2_OPDEL(     (operator delete(p))
    (RA2_OPNEW/RA2_OPDEL are declared in the compat headers the corpus
    already uses; the mangled CRT names resolve on neither side.)
  * bare IDA lane macros -> the IDA_-prefixed family the corpus declares:
        LODWORD(x) -> IDA_LODWORD(x), BYTE1 -> IDA_BYTE1, ... (call sites
        only -- a bare macro not followed by `(` is left alone).

Usage: python tools/csp_export/fix_ida_token_externs.py [--apply]
"""
import glob
import re
import sys

APPLY = '--apply' in sys.argv

CRT_MAP = [
    (re.compile(r'\b__2_YAPAXI_Z\s*\('), 'RA2_OPNEW('),
    (re.compile(r'\b__3_YAXPAX_Z\s*\('), 'RA2_OPDEL('),
    (re.compile(r'\b__3_YAXPAX_Z@(?![\w])'), 'RA2_OPDEL'),
]
LANE = re.compile(
    r'\b(LODWORD|HIDWORD|SLODWORD|SHIDWORD|LOWORD|HIWORD|SHIWORD|SLOWORD|'
    r'BYTE1|BYTE2|BYTE3|BYTE4|HIBYTE|LOBYTE|WORD1|WORD2)\s*\(')

stats = {}
files_changed = 0
files = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
         + glob.glob('src/system/gap2*.cpp') + ['src/misc/misc_ext.cpp'])
for p in files:
    if not __import__('os').path.exists(p):
        continue
    raw = open(p, encoding='utf-8', errors='replace').read()
    new = raw
    for pat, rep in CRT_MAP:
        n = len(pat.findall(new))
        if n:
            new = pat.sub(rep, new)
            stats['crt'] = stats.get('crt', 0) + n
    n2 = len(LANE.findall(new))
    if n2:
        new = LANE.sub(lambda m: 'IDA_' + m.group(1) + '(', new)
        stats['lane'] = stats.get('lane', 0) + n2
    if new != raw:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write(new)
print('files changed:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
