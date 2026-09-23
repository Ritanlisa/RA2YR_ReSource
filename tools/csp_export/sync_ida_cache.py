#!/usr/bin/env python3
"""Sync .omo/ida_cache per-function snapshots from the fresh full_export.

The verifier's IDA side reads .omo/ida_cache/func_0xADDR.json; after a
Step-3 re-export + Step-4 wholesale body regen the cached snapshots are
stale — C++ and IDA sides then parse DIFFERENT texts and every CFG
mismatches. This script rewrites each cache entry's `decompiled` from the
fresh export block so both sides parse byte-identical pseudocode.

Usage: python tools/csp_export/sync_ida_cache.py [--apply]
"""
import json
import re
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXPORT = ROOT / 'decompile-results' / 'full_export' / 'src'
CACHE = ROOT / '.omo' / 'ida_cache'
APPLY = '--apply' in sys.argv

BLOCK_HEAD = re.compile(r'^// =+$')

blocks = {}
for p in sorted(EXPORT.glob('*.cpp')):
    t = p.read_text(encoding='utf-8', errors='replace')
    cur_addr = None
    in_hr = False
    hr = []
    name = ''
    for ln in t.split('\n'):
        if BLOCK_HEAD.match(ln):
            if cur_addr and hr:
                blocks[cur_addr] = ('\n'.join(hr).strip('\n'), name)
            cur_addr = None
            in_hr = False
            hr = []
            continue
        if cur_addr is None and not in_hr:
            if not name and re.match(r'^// [A-Za-z_~?]', ln):
                name = ln[3:].strip()
            m = re.search(r'addr=0x([0-9A-Fa-f]{6,8})', ln)
            if m:
                cur_addr = int(m.group(1), 16)
            continue
        if ln.strip() == '// ---- Hex-Rays ----':
            in_hr = True
            continue
        if in_hr:
            hr.append(ln)
    if cur_addr and hr:
        blocks[cur_addr] = ('\n'.join(hr).strip('\n'), name)

print('fresh blocks:', len(blocks))
CACHE.mkdir(exist_ok=True)
updated = kept = 0
for addr, (code, name) in blocks.items():
    cf = CACHE / ('func_0x%08X.json' % addr)
    code_n = code + '\n'
    if cf.exists():
        try:
            old = json.loads(cf.read_text(encoding='utf-8'))
        except Exception:
            old = {}
        if (old.get('decompiled') or '').strip() == code.strip():
            kept += 1
            continue
        rec = {'addr': old.get('addr', '0x%08X' % addr),
               'decompiled': code_n,
               'name': old.get('name') or name,
               'timestamp': old.get('timestamp', time.strftime('%Y-%m-%d')),
               'src': 'full_export sync (step3 redo)'}
    else:
        rec = {'addr': '0x%08X' % addr, 'decompiled': code_n,
               'name': name, 'timestamp': time.strftime('%Y-%m-%d'),
               'src': 'full_export sync (step3 redo)'}
    updated += 1
    if APPLY:
        cf.write_text(json.dumps(rec, ensure_ascii=False, indent=1),
                      encoding='utf-8')

print(f'cache updated: {updated}, identical kept: {kept}')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
