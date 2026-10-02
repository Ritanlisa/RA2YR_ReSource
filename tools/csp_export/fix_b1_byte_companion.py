#!/usr/bin/env python3
"""G42.30k: B1 void*-target companion -- BYTE-lane rewrites.

The 30i type-clean pass skipped void* targets (q00C-style) because the
sites use BYTE1/IDA_BYTE1/LOBYTE lane macros on them: `BYTE1(this->m_C)`
against `void* q00C` won't compile. Rewrite the lane macros to explicit
byte-pointer indexing on the target:

    BYTE1(x->name)      ->  ((unsigned char*)&x->target)[1]
    IDA_BYTE1(x->name)  ->  ((unsigned char*)&x->target)[1]
    LOBYTE(x->name)     ->  ((unsigned char*)&x->target)[0]

Plain `->name` sites without a lane macro go straight to `->target`
(void* assignment is compatible).

Usage: [--apply]
"""
import json
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
E4C = ROOT / 'src/e4/classes'
DATA = json.load(open(ROOT / '.omo/g140_b1_exec.json'))

DECL = re.compile(r'^\s*([\w:\s\*&]+?)\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;'
                  r'\s*(?://\s*0x[0-9A-Fa-f]+)?')
LANE = {'LOBYTE': 0, 'BYTE1': 1, 'BYTE2': 2, 'BYTE3': 3,
        'IDA_LOBYTE': 0, 'IDA_BYTE1': 1, 'IDA_BYTE2': 2, 'IDA_BYTE3': 3}

stats = Counter()
by_file = {}
for ent in DATA:
    if not isinstance(ent, list) or len(ent) != 2 or not isinstance(ent[1], list):
        continue
    bucket, name, cls, cnt, form, off, target, vis = ent[0][:8]
    sites = ent[1]
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        continue
    ty = None
    for ln in hp.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = DECL.match(ln)
        if m and m.group(2) == target:
            ty = m.group(1).strip()
            break
    if ty is None or ('void' not in ty and '*' not in ty):
        continue  # integral: 30i already handled
    for f, li, scls in sites:
        if scls == cls:
            by_file.setdefault(f, []).append((li, name, target))

print('void*-target sites:', sum(len(v) for v in by_file.values()))
for f, items in by_file.items():
    p = Path(f)
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    ch = False
    for li, name, target in items:
        if li - 1 >= len(lines):
            continue
        ln = lines[li - 1]
        if re.search(r'\b%s\s*\[' % re.escape(name), ln):
            stats['skip-subscript'] += 1
            continue
        done = False
        for mac, lane in LANE.items():
            pat = re.compile(r'\b%s\s*\(\s*([->.\w\[\]]*?\b)%s\s*\)'
                             % (mac, re.escape(name)))
            new, k = pat.subn(
                r'((unsigned char*)&\g<1>' + target + r')[%d]' % lane, ln)
            if k:
                ln = new
                stats['lane-rewritten'] += k
                done = True
        if not done:
            new, k = re.subn(r'([->.])\b%s\b' % re.escape(name),
                             r'\g<1>' + target, ln)
            if k:
                ln = new
                stats['plain-rewritten'] += k
                done = True
        if done:
            lines[li - 1] = ln
            ch = True
    if ch and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')

print('stats:', dict(stats.most_common()),
      '(written)' if APPLY else '(DRY)')
