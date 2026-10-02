#!/usr/bin/env python3
"""G42.29a: strip address-of before cast-chain rvalues (C2102, 569 lines).

fix_body_syntax_v2.py fix_qmember emitted `&(unsigned int*)((char*)&X + N)`
for `&NAME[N]` sites -- the byte-offset expression already IS the element
address, so the `&` takes the address of an rvalue (C2102). Strip the
leading `&` wherever it directly precedes a `(T*)(...(U*)&...)` cast chain
on a C2102 error line. Value-identical: the expression's value is the
address; `&` on it was never compilable.

Emitter patched in fix_body_syntax_v2.py (G42.29a). Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g138.json'

# `&` immediately before a C cast whose operand is itself an
# address-valued cast chain:  &(T*)((U*)&base + N). T may be multi-word
# (unsigned int ...); the inner cast carries its own parens ((char *)&).
AMP = re.compile(
    r'&(\s*\(\s*[\w:]+(?:\s+[\w:]+)*\s*\*+\s*\)\s*\(\s*\(\s*(?:char|'
    r'unsigned char|unsigned int|int|short|long|__int64)\s*\*\s*\)'
    r'\s*&)')

# doubled-call splice: `FUNC(&(  FUNC((real args), ...` -- strip the
# garbage `&(  FUNC(` head, keeping the intact second call.
DOUBLED = re.compile(r'^(\s*)(\w+)\(&\(\s+\2\(')

census = json.load(open(CEN, encoding='utf-8'))
sites = set()
for tu, errs in census.items():
    for e in errs:
        if 'C2102' not in e:
            continue
        m = re.match(r'([^(]+)\((\d+)\):', e)
        if m:
            sites.add((m.group(1), int(m.group(2))))

by_file = {}
for f, ln in sites:
    by_file.setdefault(f, set()).add(ln)

n_hit = n_files = n_doubled = 0
for f, lns in sorted(by_file.items()):
    p = Path(f)
    if not p.exists():
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    changed = False
    for ln in lns:
        if ln - 1 >= len(lines):
            continue
        old = lines[ln - 1]
        dm = DOUBLED.match(old)
        if dm:
            lines[ln - 1] = dm.group(1) + dm.group(2) + '(' + old[dm.end():]
            n_hit += 1
            n_doubled += 1
            changed = True
            continue
        new, k = AMP.subn(r'\1', lines[ln - 1], count=1)
        if k:
            lines[ln - 1] = new
            n_hit += 1
            changed = True
    if changed:
        n_files += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')

print('C2102 sites: %d, amp-stripped: %d (doubled-call: %d) in %d files%s'
      % (len(sites), n_hit, n_doubled, n_files, '' if APPLY else '  (DRY)'))
