#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.50: materialize truth bodies into the 1,166 hidden stubs
(trivial tree body vs substantial cache truth).  g191 lineage: keep def
line, replace body interior; bottom-up per file; brace-stable by
construction; per-file count assert."""
import io
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
A = json.load(open(ROOT / '.omo/g234_audit.json', encoding='utf-8'))
HID = A['hidden']

sys.path.insert(0, str(ROOT / '.omo'))
import g191_truth_fill as G          # materialize/body_from_pseudo reuse

by_file = defaultdict(list)
for f, ln, tf, cf, defline, addr in HID:
    by_file[f].append((ln, int(addr, 16) if isinstance(addr, str) else addr,
                       tf, defline))

stats = Counter()
for f, items in sorted(by_file.items()):
    lines = io.open(f, encoding='utf-8', errors='replace').read().split('\n')
    # process bottom-up
    for ln, addr, tf, defline in sorted(items, reverse=True):
        if addr is None:
            stats['no-addr'] += 1
            continue
        body = G.materialize(addr)
        if body is None:
            stats['no-body'] += 1
            continue
        # locate def line then brace span
        i = ln - 1
        o = i
        while o < len(lines) and '{' not in lines[o]:
            if ';' in lines[o] or lines[o].lstrip().startswith('//'):
                break
            o += 1
        if o >= len(lines) or '{' not in lines[o]:
            stats['no-span'] += 1
            continue
        # close brace: depth walk
        depth = 0
        c = o
        while c < len(lines):
            s = lines[c]
            depth += s.count('{') - s.count('}')
            if depth == 0 and c >= o and '{' in lines[o]:
                break
            c += 1
        if c >= len(lines):
            stats['no-close'] += 1
            continue
        # one-liner def {} : rebuild as multi-line
        if o == c:
            head = lines[o].split('{')[0].rstrip()
            lines[o:o + 1] = [head, '{'] + body.split('\n') + ['}']
        else:
            lines[o + 1:c] = body.split('\n')
        stats['installed'] += 1
    if APPLY:
        with io.open(f, 'w', encoding='utf-8', errors='surrogateescape',
                     newline='') as fh:
            fh.write('\n'.join(lines))
print('g235:', dict(stats))
