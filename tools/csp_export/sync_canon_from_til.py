#!/usr/bin/env python3
"""Sync canon member tables from the flattened-til dump (G42.57ax).

The regenerated bodies carry til member names (Hex-Rays renders til names
verbatim); the canon tables (csp_canon_members / member_lookup) still carry
pre-flattening evidence names (u32_N / pads). The til is the naming
authority (AGENTS.md). For every class present in both:

  - til member at an offset -> canonical NAME (and type/size) at that offset
  - canon-only offsets stay (real offset-access evidence, additive)
  - function-typed til members are skipped (methods live in the sig channel)

Updates: anchors/csp_canon_members.json + tools/member_lookup.json.
Run gen_cpp_canon.py afterwards to re-render classes.hpp.

Usage: python tools/csp_export/sync_canon_from_til.py [--apply]
"""
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
TIL = json.loads((ROOT / '.omo' / 'til_members.json').read_text(encoding='utf-8'))
CC_PATH = ROOT / 'anchors' / 'csp_canon_members.json'
ML_PATH = ROOT / 'tools' / 'member_lookup.json'

cc = json.loads(CC_PATH.read_text(encoding='utf-8'))
ml = json.loads(ML_PATH.read_text(encoding='utf-8'))

renamed = added = 0
touched = set()
for cls, body in cc.items():
    if not isinstance(body, dict):
        continue
    t = TIL.get(cls)
    if not t or not isinstance(t.get('members'), dict):
        continue
    members = body.setdefault('members', {})
    for off, m in t['members'].items():
        nm = m.get('name')
        if not nm or '(' in (m.get('type') or ''):
            continue
        off = str(int(off, 16))  # canon/ml tables key offsets in decimal
        cur = members.get(off)
        if cur is None:
            members[off] = {'name': nm,
                            'type': m.get('type') or 'unsigned int',
                            'size': m.get('size') or 4}
            added += 1
            touched.add(cls)
        elif isinstance(cur, dict) and cur.get('name') != nm:
            cur['name'] = nm
            renamed += 1
            touched.add(cls)
        # member_lookup mirror
        mle = ml.setdefault(cls, {})
        mo = mle.get(off)
        if mo is None or (isinstance(mo, dict) and mo.get('name') != nm):
            mle[off] = {'name': nm,
                        'type': m.get('type') or 'unsigned int',
                        'size': m.get('size') or 4,
                        'src': 'til-sync G42.57ax'}
            touched.add(cls)

print(f"classes touched: {len(touched)} | names renamed->til: {renamed} "
      f"| offsets added: {added}")
if APPLY:
    for p, d in ((CC_PATH, cc), (ML_PATH, ml)):
        tmp = str(p) + '.tmp'
        with open(tmp, 'w', encoding='utf-8') as f:
            json.dump(d, f, ensure_ascii=False)
        Path(tmp).replace(p)
    print('APPLIED')
else:
    print('DRY RUN (use --apply)')
