#!/usr/bin/env python3
"""Upgrade pending classes that HAVE body instance-references.

A body reference (`Cls *x` / `Cls::f`) is instance evidence: the class
enters the type universe with usage. Type-keyword names that polluted the
canon universe (uint8_t etc.) are reclassified as junk.

Usage: python tools/csp_export/upgrade_instance_evidence.py [--apply]
"""
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

part = json.loads((ROOT / '.omo/class_participation.json')
                  .read_text(encoding='utf-8'))
pending = {c for c, v in part.items()
           if v.get('status') == 'no-evidence-pending'}

TYPEK = {'int', 'char', 'void', 'bool', 'short', 'long', 'float', 'double',
         'unsigned', 'signed', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
         'int8_t', 'int16_t', 'int32_t', 'int64_t', 'size_t', 'wchar_t'}

# body reference census (same as the audit)
body_ref = collections.Counter()
pats = {c: re.compile(r'\b' + re.escape(c) + r'\s*(\*|::)') for c in pending}
for p in sorted((ROOT / 'src').rglob('*.cpp')):
    s = str(p)
    if '_generated' in s or 'csp_canon' in s:
        continue
    try:
        t = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for c, rx in pats.items():
        if rx.search(t):
            body_ref[c] += 1

upgraded = junk = 0
for c in pending:
    if c in TYPEK:
        part[c]['status'] = 'junk-name (type keyword)'
        junk += 1
    elif body_ref.get(c, 0) > 0:
        part[c]['status'] = 'instance-referenced'
        part[c]['body_references'] = body_ref[c]
        upgraded += 1

still = sum(1 for v in part.values()
            if v.get('status') == 'no-evidence-pending')
print(f'upgraded to instance-referenced: {upgraded}')
print(f'reclassified junk (type keywords): {junk}')
print(f'truly no-evidence remaining: {still}')

if APPLY:
    Path(ROOT / '.omo/class_participation.json').write_text(
        json.dumps(part, indent=1, ensure_ascii=False), encoding='utf-8')
    print('ledger written')
else:
    print('DRY RUN (use --apply)')
