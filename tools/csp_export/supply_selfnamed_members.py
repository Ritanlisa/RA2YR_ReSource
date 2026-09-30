#!/usr/bin/env python3
"""Supply SELF-NAMED pad members to e4 flat headers (C2039 family).

The remat-aligned corpus references pad members whose offsets are encoded
in their own names: `__pad_5` (hex offset 5), `q2B4` (0x2B4),
`MapSeed_field_0x10` (0x10). No table lookup needed — declare
`unsigned char <name>;  // 0x<off>` in the class's flat header.

Log-driven (C2039 pairs), idempotent, scope-guarded to src/e4/classes/.
Non-pad names (methods, cross-type members) are NOT touched here.

Usage: python tools/csp_export/supply_selfnamed_members.py <log> [--apply]
"""
import glob
import json
import os
import re
import sys
from collections import defaultdict

APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

# offset-bearing name forms (all hex)
NAME_OFF = [
    (re.compile(r'^__pad_([0-9A-Fa-f]+)$'), 1),
    (re.compile(r'^q([0-9A-Fa-f]{2,3})$'), 1),
    (re.compile(r'^_field_0x([0-9A-Fa-f]+)$'), 1),
    (re.compile(r'^\w+_field_0x([0-9A-Fa-f]+)$'), 1),
]


def name_offset(nm):
    for pat, _k in NAME_OFF:
        m = pat.match(nm)
        if m:
            return int(m.group(1), 16)
    return None


Q = '"'
ERR = re.compile(r'C2039: "' + r'(\w+)": .*?"(?:gamemd::)?(\w+)"')
TXT = open(LOG, encoding='utf-8', errors='replace').read() if LOG else ''
pairs = set()
for m in ERR.finditer(TXT):
    off = name_offset(m.group(1))
    if off is not None:
        pairs.add((m.group(2), m.group(1), off))
print('self-named pairs:', len(pairs))

by_cls = defaultdict(list)
for cls, nm, off in pairs:
    by_cls[cls].append((off, nm))

# offset -> type: pads may be multi-byte; declare the LARGEST unsigned that
# fits before the next known member? keep it simple: one byte each (no
# alignment pressure in flat parallel classes)
stats = {'supplied': 0, 'files': 0, 'no-hpp': 0, 'already': 0}
for cls, items in sorted(by_cls.items()):
    hp = 'src/e4/classes/%s_e4.hpp' % cls
    if not os.path.exists(hp):
        stats['no-hpp'] += 1
        continue
    txt = open(hp, encoding='utf-8', errors='replace').read()
    add = []
    for off, nm in sorted(set(items)):
        if re.search(r'\b%s\s*;' % re.escape(nm), txt):
            stats['already'] += 1
            continue
        add.append('    unsigned char %s;  // 0x%X' % (nm, off))
    if not add:
        continue
    ins = '\n'.join(add) + '\n'
    anchor = '// --- flat members (END) ---'
    if anchor in txt:
        txt = txt.replace(anchor, ins + anchor, 1)
    else:
        m = re.search(r'(\n\};)', txt)
        if not m:
            stats['no-hpp'] += 1
            continue
        txt = txt[:m.start()] + ins + txt[m.start():]
    stats['supplied'] += len(add)
    stats['files'] += 1
    if APPLY:
        open(hp, 'w', encoding='utf-8', newline='').write(txt)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
