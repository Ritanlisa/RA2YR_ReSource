#!/usr/bin/env python3
"""X112 W2: propagate the rebuilt layouts into tools/class_layouts.json.

The sidecar stays the evidence artifact; class_layouts (the downstream layout
authority consumed by audits/tools) gets the same size + offset table so the
sizeof invariant reflects the rebuilt geometry instead of the stub til.

Usage: python tools/csp_export/x112_sync_class_layouts.py [--apply]
"""
import json, sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SIDE = json.load(open(ROOT / 'anchors/class_layouts_rebuilt.json', encoding='utf-8'))
P = ROOT / 'tools/class_layouts.json'
CL = json.load(open(P, encoding='utf-8'))
APPLY = '--apply' in sys.argv

changed = 0
for cls, e in SIDE['classes'].items():
    ent = CL.get(cls)
    if ent is None:
        continue
    size = int(e['computed_size'])
    offsets = {}
    by_name = {}
    for m in e.get('members') or []:
        off = int(m['off'])
        offsets[str(off)] = {'ida_name': m['name'], 'size': int(m['width']),
                             'type': m.get('type') or ''}
        by_name[m['name']] = off
    new = dict(ent)
    new['size'] = size
    new['offsets'] = offsets
    new['_member_by_name'] = by_name
    new['source'] = 'x112-binary-layout'
    new['warnings'] = []
    if new != ent:
        CL[cls] = new
        changed += 1

print(('APPLIED' if APPLY else 'DRY RUN') + ': %d class_layouts entries updated' % changed)
if APPLY:
    P.write_text(json.dumps(CL, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print('wrote', P)
