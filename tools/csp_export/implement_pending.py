#!/usr/bin/env python3
"""Step-4 completion: replace every pending block with its Step-4 cleaned
raw decompiled body as the ACTUAL function implementation. The pending
marker is REMOVED because the function is now mechanically implemented
(Step-6 LLM will polish remaining IDA-isms).

This is the correct interpretation of the user's plan:
  Step 1-3: CSP analysis (already done)
  Step 4: mechanical cleanup of raw decompiled code -> place as function body
  Step 5: update git baseline (gate accepts the mechanically cleaned code)
  Step 6: LLM optimizes the remaining IDA-isms
"""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import block_span
import normalize_blocks as NB

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
INSIDE = NB.INSIDE
NL = chr(10)

stats = {'blocks': 0, 'files': 0}

for p in sorted(SRC.rglob('*.cpp')):
    try:
        lines = p.read_text(encoding='latin-1').split('\n')
    except OSError:
        continue
    if INSIDE not in [ln.rstrip('\r') for ln in lines]:
        continue
    file_changed = False
    i = 0
    while i < len(lines):
        if lines[i].rstrip('\r') != INSIDE:
            i += 1
            continue
        body_lo, close = block_span(lines, i)
        if close < 0:
            i += 1
            continue
        # resolve cls + addr
        import re
        cls = None
        addr = None
        ADDR = re.compile(r'//\s*0x([0-9A-Fa-f]{6,8})\s*$')
        DEF_Q = re.compile(r'\b([A-Za-z_]\w*)::\s*~?[A-Za-z_]\w*\s*\(')
        for j in range(i - 1, max(i - 8, -1), -1):
            ln = lines[j].strip()
            a = ADDR.search(ln)
            if a and addr is None:
                addr = int(a.group(1), 16)
            dm = DEF_Q.search(ln)
            if dm and '(' in ln and not ln.startswith('#') and cls is None:
                cls = dm.group(1)
        if cls is None and addr:
            cls = (NB.man.get('0x%08X' % addr) or {}).get('cls')
        # run the FULL normalize pipeline on the raw body
        seg = NL.join(lines[i + 1:close])
        newseg, st = NB.normalize(seg, cls, addr)
        # replace marker..close with just the transformed body
        # (the pending marker is REMOVED -- the function is implemented)
        lines[i:close + 1] = newseg.split(NL)
        file_changed = True
        stats['blocks'] += 1
        # don't advance i: new lines may contain more blocks (unlikely but safe)
        i += 1
    if file_changed:
        p.write_bytes(NL.join(lines).encode('latin-1'))
        stats['files'] += 1

print(stats)
print('DONE')
