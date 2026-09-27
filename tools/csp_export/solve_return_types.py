#!/usr/bin/env python3
"""Solve return types for void-return functions from CSP eax votes.

Evidence: type_map keys `0xCALLER::eax_v0xSITE` hold the solved type of the
caller's EAX at each call site. Joining SITE -> callee (from the exported
asm `call` lines) yields per-callee return-value type votes.

Adjudication (deterministic, G29.13 precedent): filter VOID_PTR sentinels,
require >=3 votes and >=80% majority for one coherent type; never overwrite
an existing non-void CSP vote. Result is written back into
csp_functions.json return_type — the CSP layer becomes the single source
that downstream (def lines, headers, bodies) consumes.

Usage: python tools/csp_export/solve_return_types.py [--apply]
"""
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

print('loading type_map...', flush=True)
tm = json.loads((ROOT / 'type_map.json').read_text(encoding='utf-8'))['type_map']
cf = json.loads((ROOT / 'tools/csp/full_report/csp_functions.json')
                .read_text(encoding='utf-8'))['functions']

# ---- callsite -> callee, from exported asm ----
# line: `//   41e54b: call Name__x  ; -> Cls::Mth`
CALL = re.compile(
    r'^//\s+([0-9A-Fa-f]+):\s+call\s+\S+\s*;\s*->\s*(.+?)\s*$', re.M)
name2addr = {}
for a, f in cf.items():
    try:
        n = '%08X' % int(a, 16)
    except ValueError:
        continue
    nm = f.get('name') or f.get('original_name')
    if nm and nm not in name2addr:
        name2addr[nm] = a
    # export callee text uses mangled-ish `Cls__Mth` too — map stripped form
    short = nm.split('::')[-1]
    if short and short not in name2addr:
        name2addr[short] = a

site2callee = {}
export_dir = ROOT / 'decompile-results' / 'full_export' / 'src'
n_asm = 0
for p in sorted(export_dir.glob('*.cpp')):
    try:
        t = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    for m in CALL.finditer(t, re.M):
        site = int(m.group(1), 16)
        callee_name = m.group(2)
        callee = name2addr.get(callee_name) or \
            name2addr.get(callee_name.split('::')[-1])
        if callee:
            site2callee['%08X' % site] = callee
            n_asm += 1
print('callsites resolved to callees:', len(site2callee), '(asm lines)', n_asm)

# ---- votes per callee ----
EAX = re.compile(r'^(0x[0-9A-Fa-f]+)::eax_v(0x[0-9A-Fa-f]+)$')
votes = collections.defaultdict(collections.Counter)   # callee -> Counter(type)
for k, v in tm.items():
    m = EAX.match(k)
    if not m:
        continue
    site = '%08X' % int(m.group(2), 16)
    callee = site2callee.get(site)
    if not callee:
        continue
    t = v.get('type') if isinstance(v, dict) else None
    if t:
        votes[callee][t] += 1
print('callees with eax votes:', len(votes),
      'total votes:', sum(sum(c.values()) for c in votes.values()))

# ---- adjudicate ----
BAD = {'VOID_PTR'}
SCALAR = {'int', 'unsigned int', 'long', 'unsigned long', 'char',
          'unsigned char', 'short', 'unsigned short', 'bool'}
solved = {}
for callee, ctr in votes.items():
    f = cf.get(callee)
    if not f or (f.get('return_type') or 'void') != 'void':
        continue   # never overwrite an existing vote
    real = {t: n for t, n in ctr.items() if t not in BAD
            and re.match(r'^[A-Za-z_][\w\s\*:<>,&]*$', t or '')}
    if not real:
        continue
    total = sum(real.values())
    if total < 3:
        continue
    t, n = max(real.items(), key=lambda kv: kv[1])
    if n / total < 0.8:
        continue
    solved[callee] = t

print('return types solved:', len(solved))
byty = collections.Counter(solved.values())
for t, n in byty.most_common(10):
    print('  %6d %s' % (n, t))

if APPLY:
    for callee, t in solved.items():
        cf[callee]['return_type'] = t
        cf[callee]['return_evidence'] = 'eax callsite votes (solve_return_types G34)'
    tmp = ROOT / 'tools/csp/full_report/csp_functions.json.tmp'
    tmp.write_text(json.dumps({'functions': cf}, indent=1,
                              ensure_ascii=False), encoding='utf-8')
    import os
    os.replace(tmp, ROOT / 'tools/csp/full_report/csp_functions.json')
    print('APPLIED -> csp_functions.json')
else:
    print('DRY RUN (use --apply)')
