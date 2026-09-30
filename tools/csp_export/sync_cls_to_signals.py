#!/usr/bin/env python3
"""A2: sync manifest owner classes into signals.json symbols.

signals.json is THE authoritative function metadata source but carries no
`cls` field -- downstream generators cannot consume CSP ownership. Add
`cls` to every symbol whose manifest entry has one (13,970 / 19,082).

Idempotent. Atomic write (tmp + replace) per the #149 concurrency lesson.
Usage: python tools/csp_export/sync_cls_to_signals.py [--apply]
"""
import json
import os
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

manifest = json.load(open(ROOT / 'anchors' / 'csp_canon_manifest.json'))
cls_by_addr = {}
name_by_addr = {}
for addr, v in manifest.items():
    if v.get('cls'):
        try:
            cls_by_addr[int(addr, 16)] = v['cls']
            name_by_addr[int(addr, 16)] = v.get('name')
        except ValueError:
            pass

sp = ROOT / 'signals.json'
s = json.load(open(sp))
syms = s['symbols']
added = 0
mismatch = 0
for addr, sym in syms.items():
    if not isinstance(sym, dict):
        continue
    try:
        a = int(addr, 16)
    except ValueError:
        continue
    cls = cls_by_addr.get(a)
    if not cls or sym.get('kind') != 'function':
        continue
    if sym.get('cls'):
        continue
    # sanity: symbol name should match manifest short name
    mname = (name_by_addr.get(a) or '')
    short = mname.split('::')[-1] if mname else ''
    if short and sym.get('name') and sym['name'] != short and \
       short not in sym['name'] and sym['name'] not in mname:
        mismatch += 1
        continue
    sym['cls'] = cls
    added += 1

print('cls added:', added, '| name-mismatch skipped:', mismatch)
if APPLY:
    tmp = sp.with_suffix('.json.tmp')
    tmp.write_text(json.dumps(s, ensure_ascii=False, indent=1),
                   encoding='utf-8')
    os.replace(tmp, sp)
    print('signals.json updated atomically')
else:
    print('(dry run -- pass --apply)')
