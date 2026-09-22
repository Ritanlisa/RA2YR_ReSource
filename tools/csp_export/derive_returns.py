#!/usr/bin/env python3
"""Step-1 CSP data fix: derive function return types from the eax register
channel of type_map (the return-value register). For every csp_functions
entry whose return_type is void/empty, the class-typed values recorded under
`0xADDR::eax_v*` / `0xADDR:eax*` keys are the CSP-solved types of returned
values -- the majority class becomes return_type `Cls *` (evidence field
records the derivation). Deterministic; re-runnable."""
import json
import re
from pathlib import Path
from collections import Counter

ROOT = Path(__file__).resolve().parents[2]

tmap = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
cfp = ROOT / 'tools/csp/full_report/csp_functions.json'
cf = json.loads(cfp.read_text(encoding='utf-8'))
fns = cf['functions']

PRIM = {'int', 'void', 'unsigned int', 'char', 'unsigned char', 'short',
        'unsigned short', 'long', 'unsigned long', 'float', 'double', 'bool',
        'BOOL', '_DWORD', '_BYTE', '_WORD', '_QWORD', 'VOID_PTR', 'unknown',
        'void*', 'size_t'}

# gather eax-channel keys per function address
per_fn = {}
for k, v in tmap.items():
    m = re.match(r'^0x([0-9A-Fa-f]{8})::e?ax', k)
    if not m:
        continue
    t = v.get('type')
    if not t or t in PRIM or t in ('TOP', 'VOID_PTR'):
        continue
    if not re.match(r'^[A-Za-z_]\w*$', t):
        continue
    per_fn.setdefault(m.group(1).upper(), []).append(t)

patched = []
for a, rec in fns.items():
    cur = (rec.get('return_type') or '').strip()
    if cur not in ('', 'void', 'void *', 'void*'):
        continue
    addr = a[2:] if a.lower().startswith('0x') else a
    types = per_fn.get(addr.upper())
    if not types:
        continue
    cnt = Counter(types)
    top, n = cnt.most_common(1)[0]
    total = len(types)
    if n < 2 or n * 2 < total:
        continue  # need a clear majority
    rec['return_type'] = top + ' *'
    rec['return_evidence'] = ('eax-register majority %d/%d (G29.13 derive_returns)'
                              % (n, total))
    patched.append((a, rec.get('name', ''), top, n, total))

cfp.write_text(json.dumps(cf, ensure_ascii=False, indent=1),
               encoding='utf-8')
print('return types derived:', len(patched))
for row in patched[:15]:
    print('  ', row)
print('DONE')
