#!/usr/bin/env python3
"""G42.30i: B1 receiver-sensitive MECH->EXISTING rewrite (type-clean first).

Dataset: .omo/g140_b1_exec.json (agent-gated: target in visible decl,
not subscripted, def-head receiver resolved == error class). This pass
takes the TYPE-CLEAN subset only -- target declared integral; void*
targets (q00C-style) collide with BYTE1()/IDA_BYTE1() shapes and need
the cast companion (next pass).

Rewrite is per-site (file, line):  ->name / .name  ->  ->target,
word-boundary, only when the token is member-positioned.

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


def target_type(cls, name):
    hp = E4C / ('%s_e4.hpp' % cls)
    if not hp.exists():
        return None
    for ln in hp.read_text(encoding='utf-8', errors='replace').split('\n'):
        m = DECL.match(ln)
        if m and m.group(2) == name:
            return m.group(1).strip()
    return None


stats = Counter()
by_file = {}
for ent in DATA:
    if not isinstance(ent, list) or len(ent) != 2 or not isinstance(ent[1], list):
        continue
    bucket, name, cls, cnt, form, off, target, vis = ent[0][:8]
    sites = ent[1]
    ty = target_type(cls, target)
    if ty is None:
        stats['skip-no-target-decl'] += len(sites)
        continue
    if 'void' in ty or '*' in ty:
        stats['skip-nonintegral'] += len(sites)  # BYTE1() clash companion
        continue
    for f, li, scls in sites:
        if scls != cls:
            stats['skip-recv-mismatch'] += 1
            continue
        by_file.setdefault(f, []).append((li, name, target))

print('type-clean sites:', sum(len(v) for v in by_file.values()))
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
        new, k = re.subn(r'([->.])\b%s\b' % re.escape(name),
                         r'\g<1>' + target, ln)
        if k:
            lines[li - 1] = new
            stats['rewritten'] += k
            ch = True
    if ch and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')

print('stats:', dict(stats.most_common()),
      '(written)' if APPLY else '(DRY)')
