#!/usr/bin/env python3
"""Reconcile CSP void returns with the def-line prototypes.

The materialized def lines carry the IDA-prototype return type (a real
evidence channel). Where CSP has no vote (return_type == 'void') and the
def line has a coherent return type, adopt it into csp_functions with
provenance. CSP stays the single authority; this only fills no-vote slots.

Usage: python tools/csp_export/reconcile_returns_from_defs.py [--apply]
"""
import json
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

cf = json.loads((ROOT / 'tools/csp/full_report/csp_functions.json')
                .read_text(encoding='utf-8'))['functions']

# addr -> csp name (from manifest names inside csp_functions itself)
addr_by_name = {}
for a, f in cf.items():
    nm = f.get('name') or f.get('original_name') or ''
    if '::' in nm:
        addr_by_name.setdefault(nm, a)
    else:
        addr_by_name.setdefault(nm.split('::')[-1], a)

ANN = re.compile(r'^//\s*(?:IDA[:\s]\s*)?0x([0-9A-Fa-f]{6,8})\s*$')
DEF = re.compile(
    r'^[ \t]*(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?)\s+'
    r'(?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*\s*\(([^)]*)\)\s*(?:const\s*)?$')
VALID_RET = re.compile(r'^[A-Za-z_][\w\s\*<>,:&]*$')

reconciled = already = badtype = 0
byty = collections.Counter()
updates = {}
for p in sorted(list(SRC.rglob('*.cpp'))):
    s = str(p)
    if '_generated' in s or 'csp_canon' in s:
        continue
    try:
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    i = 0
    while i < len(lines):
        m = ANN.match(lines[i].strip())
        if not m:
            i += 1
            continue
        addr = '%08X' % int(m.group(1), 16)
        f = cf.get('0x' + addr)
        if not f or (f.get('return_type') or 'void') != 'void':
            i += 1
            continue
        # def line = next line with '(' before the body
        j = i + 1
        while j < len(lines) and j <= i + 3:
            dl = lines[j].strip()
            if dl and not dl.startswith('//') and '(' in dl:
                dm = DEF.match(dl)
                if dm:
                    ret = ' '.join(dm.group('ret').split())
                    if VALID_RET.match(ret) and ret not in (
                            'void', 'return', 'else', 'if', 'while', 'for',
                            'switch', 'case'):
                        key = ret
                        if key in ('int', 'unsigned int', 'bool', 'char',
                                   'short', 'long', 'float', 'double') \
                                or ret.endswith('*'):
                            already += 1
                            updates[addr] = ret
                            byty[ret] += 1
            break
        i += 1

print('def-line reconciled returns:', len(updates))
for t, n in byty.most_common(8):
    print('  %6d %s' % (n, t))

if APPLY:
    for addr, ret in updates.items():
        cf['0x' + addr]['return_type'] = ret
        cf['0x' + addr]['return_evidence'] = \
            'def-line reconcile (IDA prototype channel, G34)'
    tmp = ROOT / 'tools/csp/full_report/csp_functions.json.tmp'
    tmp.write_text(json.dumps({'functions': cf}, indent=1,
                              ensure_ascii=False), encoding='utf-8')
    import os
    os.replace(tmp, ROOT / 'tools/csp/full_report/csp_functions.json')
    print('APPLIED -> csp_functions.json')
else:
    print('DRY RUN (use --apply)')
