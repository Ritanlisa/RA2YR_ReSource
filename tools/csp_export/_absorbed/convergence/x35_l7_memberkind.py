#!/usr/bin/env python3
"""X35 L7 — C carrier member-kind fixes (census B §3.2 / C-lever10).

Union-consume of `anchors/member_types.json` (CSP ANCHORED member kinds)
into the e4 class carriers (src/e4/classes/*_e4.hpp + _tree_full_e4.hpp).

Gates (all measured, L6 lessons applied):
  G0 enclosing-class block parsing (files may hold several class blocks;
     _tree_full_e4.hpp holds 90).
  G1 vtable/vfptr slots never touched.
  G2 target width model: pointers=4, char/bool/uint8=1, short=2,
     int/uint/long/float=4, i64/double=8; struct-object targets are SKIPPED
     this round (width table = residual, documented).
  G3 width(current) == width(target): byte footprint preserved -> sequential
     layout of the flat carrier cannot shift (L259 layout-invariant).
  G4 visibility: fundamental targets always OK; named-class pointer targets
     require a REAL `class|struct NAME` declaration (def or fwd) in the
     header text — substring presence self-matches (L6b C4430 lesson).
  G5 skip twin classes: a class block declared in more than one scanned file
     is skipped entirely (twin lockstep out of scope; measured 4).

Idempotent: detector requires current type != normalized target type.

Usage: python x35_l7_memberkind.py [--apply]
"""
import io
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
MT = json.load(io.open(ROOT / 'anchors/member_types.json', encoding='utf-8'))

IDA_NORM = {'unsigned __int8': 'unsigned char', 'unsigned __int16': 'unsigned short',
            'unsigned __int32': 'unsigned int', 'unsigned __int64': 'unsigned long long',
            '__int8': 'char', '__int16': 'short', '__int32': 'int', '__int64': 'long long',
            'int32_t': 'int', 'uint32_t': 'unsigned int', 'int16_t': 'short',
            'uint16_t': 'unsigned short', 'int8_t': 'char', 'uint8_t': 'unsigned char',
            'int64_t': 'long long', 'uint64_t': 'unsigned long long'}


def n(t):
    t = ' '.join(t.strip().split())
    if t.endswith('*'):
        return n(t[:-1]) + '*'
    t = t.replace(' *', '*').replace('* ', '*')
    return IDA_NORM.get(t, t)


W1 = {'char', 'unsigned char', 'bool'}
W2 = {'short', 'unsigned short'}
W4 = {'int', 'unsigned int', 'long', 'unsigned long', 'float'}
W8 = {'long long', 'unsigned long long', 'double'}


def width(base, star, arr):
    if arr:
        m = re.match(r'\[(\d*)\]\s*$' if False else r'\[(\d*)\]', arr)
        if not m:
            return None
        if not m.group(1):
            return None
        elem = width(base, star, '')
        return None if elem is None else elem * int(m.group(1))
    if star:
        return 4
    b = n(base)
    if b in W1:
        return 1
    if b in W2:
        return 2
    if b in W4:
        return 4
    if b in W8:
        return 8
    return None


MEM = re.compile(r'^(\s*)([\w:][\w\s:<>,*&]*?)\s*(\**)\s*\b(\w+)\s*(\[[^\]]*\])?\s*;\s*//\s*0x([0-9A-Fa-f]+)(.*)$')
CLS = re.compile(r'^\s*(?:class|struct)\s+(\w+)')

files = sorted((ROOT / 'src/e4/classes').glob('*_e4.hpp'))
# G5: twin detection (same class name declared in 2+ files)
cls_files = defaultdict(list)
for p in files:
    txt = p.read_text(encoding='utf-8', errors='replace')
    for m in CLS.finditer(txt):
        cls_files[m.group(1)].append(p.name)
twins = {c for c, fs in cls_files.items() if len(fs) > 1}

report = []
gates = Counter()
n_files = 0
n_lines = 0
for p in files:
    txt = p.read_text(encoding='utf-8', errors='replace')
    lines = txt.split('\n')
    cur_cls = None
    # class names declared in this file (for the visibility regex we just use
    # the whole-file text)
    wrote = 0
    for i, ln in enumerate(lines):
        mc = CLS.match(ln)
        if mc:
            cur_cls = mc.group(1)
            continue
        if cur_cls is None or cur_cls in twins:
            continue
        m = MEM.match(ln.strip())
        if not m:
            continue
        key = '%s+0x%x' % (cur_cls, int(m.group(6), 16))
        ent = MT.get(key)
        if not ent or ent.get('confidence') != 'ANCHORED':
            continue
        name = m.group(4)
        if name.startswith(('vtable', 'vfptr')):
            gates['G1-vtable-slot'] += 1
            continue
        cur_ty = n(m.group(2) + m.group(3))
        tgt_raw = ' '.join(ent['type'].split())
        tgt = n(tgt_raw)
        if cur_ty == tgt:
            continue
        star = '*' if tgt_raw.endswith('*') else ''
        base = n(tgt_raw[:-1].strip() if star else tgt_raw)
        tw = width(base, star, '')
        cw = width(m.group(2), m.group(3), m.group(5) or '')
        if tw is None:
            gates['G2-target-width-unknown:' + tgt_raw] += 1
            continue
        if cw is None:
            gates['G2-current-width-unknown'] += 1
            continue
        if tw != cw:
            gates['G3-width-mismatch'] += 1
            continue
        if star == '' and base not in (W1 | W2 | W4 | W8):
            gates['G2-nonfund-obj-target'] += 1
            continue
        baseword = base.split(' ')[-1]
        FUND = (W1 | W2 | W4 | W8 | {'void'})
        if baseword not in FUND:
            if not re.search(r'\b(?:class|struct)\s+%s\b' % re.escape(baseword), txt):
                gates['G4-named-class-undeclared:' + baseword] += 1
                continue
        # CSP kind describes the WHOLE member storage: the old array suffix is
        # dropped (char[4] + int32_t -> `int X;` = same 4 bytes; keeping `[4]`
        # would emit `int X[4]` = 16 bytes = layout shift).
        newln = '%s%s%s %s;  // 0x%s [X35-L7 kind=%s]' % (
            m.group(1), base, star, name, m.group(6), tgt)
        report.append('%s %s(%s):%d %s %s%s -> %s%s' % (
            'PLAN' if not APPLY else 'WROTE', p.name, cur_cls, i + 1,
            m.group(2) + m.group(3), name, m.group(5) or '', base + star, ''))
        if APPLY:
            lines[i] = newln
        wrote += 1
    if wrote:
        n_files += 1
        n_lines += wrote
        if APPLY:
            io.open(p, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines))

print('L7 member-kind: %d lines across %d files %s' % (n_lines, n_files, '(DRY)' if not APPLY else '(APPLIED)'))
print('gates:', dict(gates.most_common(20)))
for r in report[:25]:
    print(' ', r[:150])
if len(report) > 25:
    print('  ... (+%d more)' % (len(report) - 25))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
