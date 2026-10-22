#!/usr/bin/env python3
"""X112 W2: write rebuilt-layout members into tools/member_lookup.json.

member_lookup is the single naming authority for headers and bodies.  For every
sidecar class member that has no entry at its offset, add
`{name, size, type, src: "x112-binary-layout"}`.  Existing entries are never
modified (they already won the name-authority vote in the layout builder).

Usage: python tools/csp_export/x112_sync_member_lookup.py [--apply]
"""
import json, sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SIDE = json.load(open(ROOT / 'anchors/class_layouts_rebuilt.json', encoding='utf-8'))
ML_PATH = ROOT / 'tools/member_lookup.json'
ML = json.load(open(ML_PATH, encoding='utf-8'))
APPLY = '--apply' in sys.argv

added = 0
classes = 0
for cls, e in SIDE['classes'].items():
    ent = ML.setdefault(cls, {})
    touched = False
    for m in e.get('members') or []:
        key = str(int(m['off']))
        if key in ent:
            continue
        ent[key] = {
            'name': m['name'],
            'type': m['type'],
            'size': int(m['width']),
            'src': 'x112-binary-layout',
        }
        added += 1
        touched = True
    if touched:
        classes += 1

print(('APPLIED' if APPLY else 'DRY RUN') + ': %d classes, %d new member entries' % (classes, added))
if APPLY:
    ML_PATH.write_text(json.dumps(ML, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')
    print('wrote', ML_PATH)
