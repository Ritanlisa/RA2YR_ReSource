#!/usr/bin/env python3
"""X36 lever A8B230 — Scenario singleton object array retype (x35 L5c deferred item).

Binary ground truth (Q1) measured this session (IDA online, site-exact):
  - stride 36B EXACT (L338 two-point solve, carried from x35 L5c)
  - til `AbstractClass` (IDA ordinal til) = 36B with EXACTLY the body vocab:
      0x0 vfptr | 0x4 vfptr1 | 0x8 vfptr2 | 0xC vfptr3   (int x4)
      0x10 uniqueId | 0x14 abstractFlags | 0x18 nextArrayIndex
      0x1C referenceCount | 0x20 NeedsSaveOrLink
  - independent two-point solves (off = disp - 36*idx) from instruction
    displacements, all consistent with the til map:
      uniqueId@0x10   (idx 43: 0x61C-0x60C, 122: 0x1138-0x1128, 381: 0x35A4-0x3594)
      abstractFlags@0x14 (idx 122: 0x113C-0x1128 signed-testable dword)
      nextArrayIndex@0x18 (idx 14 copy pair 0x20C->0x210 at 0x4ac627/0x4ac638)
      referenceCount@0x1C (idx 43: 0x628-0x60C, 380: 0x358C-0x3570, 381: 0x35B0-0x3594)
      NeedsSaveOrLink@0x20 (idx 43: 0x62C-0x60C, 374: 0x34B8-0x3498, 380: 0x3590-0x3570)
  - **L5c "abstractFlags/nextArrayIndex SWAPPED" hypothesis FALSIFIED**: the til
    map (0x14/0x18 unswapped) is confirmed by 3+ independent sites. The x35
    misread took the 0x4ac638 copy-pair target as an abstractFlags store; the
    instruction pair is a read@0x14 -> write@0x18 member copy.

Lever mechanism:
  - `dword_A8B230` decl is `unsigned int` (scalar) while bodies (e4 61 files +
    tree latent behind error caps) already use `dword_A8B230[N].member` /
    `->member` vocabulary -> C2109 x233 + C2664/C2440/C2059 collateral = 325
    live error rows (measured from x35_build_L7r.out.txt at 20,236).
  - Fix: declare the binary-verified elem struct (union vocab: body sites spell
    the 4 head slots BOTH as vfptr/vfptr1-3 (til) and vtable0-3) and retype the
    decl+def to `AbstractElem dword_A8B230[435]` (bound = next object at
    0xA8E960: (0xA8E960-0xA8B230)/36 = 435.1 -> 435; max observed idx 389).
  - Two body sites assign to the scalar name (`= 0` at addr6B_e4.cpp:4378,
    self-assign at misc_ext.cpp:10331) — binary shows both are dword
    load/stores of elem0.vfptr (mov dword_A8B230, ebx / mov edx, dword_A8B230):
    same-bytes rewrite to `[0].vfptr` member form.

Expected: falls ~250-300 of the 325-row pool (kill line 97 = 30%) + latent
tree-side rows at parse-deepening TUs. Rises: ~0 (both assign sites rewritten).

Idempotent: 2nd run = 0 writes. Usage: python x36_a8b230.py [--apply]
"""
import io
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv

STRUCT_BLOCK = '''// [X36-A8B230] binary-verified 36B elem struct (IDA til AbstractClass,
// stride two-point solve L338; offsets confirmed by 9 independent
// disp-36*idx solves 2026-10-16). Union vocab: bodies spell the head slots
// both vfptr/vfptr1-3 (til) and vtable0-3 (corpus).
struct AbstractElem {
    union { unsigned int vfptr; unsigned int vtable0; };  // 0x0
    union { unsigned int vfptr1; unsigned int vtable1; };  // 0x4
    union { unsigned int vfptr2; unsigned int vtable2; };  // 0x8
    union { unsigned int vfptr3; unsigned int vtable3; };  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
};
static_assert(sizeof(AbstractElem) == 36, "A8B230 elem stride must be 36B");
'''

DECL_RE = re.compile(r'^extern unsigned int dword_A8B230;\s*$')
DEF_RE = re.compile(r'^unsigned int dword_A8B230 = 0;\s*$', re.M)

# same-bytes body rewrites (binary: mov dword_A8B230, ebx / mov edx, dword_A8B230)
BODY_REWRITES = [
    ('src/e4/addr6B_e4.cpp', 'dword_A8B230 = 0; /*0x6beb7d*/',
     'dword_A8B230[0].vfptr = 0; /*0x6beb7d [X36-A8B230 same-bytes: mov dword_A8B230,ebx]*/'),
    ('src/misc/misc_ext.cpp', 'dword_A8B230 = dword_A8B230; /*0x68e55d*/',
     'dword_A8B230[0].vfptr = dword_A8B230[0].vfptr; /*0x68e55d [X36-A8B230 same-bytes: mov edx,dword_A8B230]*/'),
]

report = []
n_writes = 0

# ---- 1) ida_globals.h: struct block + extern retype
gh = ROOT / 'src/core/ida_globals.h'
txt = gh.read_text(encoding='utf-8', errors='replace')
if 'struct AbstractElem' in txt:
    report.append('ida_globals.h: AbstractElem already present (skip insert)')
else:
    lines = txt.split('\n')
    idx = next((i for i, ln in enumerate(lines) if DECL_RE.match(ln)), None)
    if idx is None:
        print('FATAL: dword_A8B230 extern not found in ida_globals.h')
        sys.exit(2)
    newln = 'extern AbstractElem dword_A8B230[435];  // [X36-A8B230] was unsigned int; array of 36B elems, bound=next obj 0xA8E960'
    report.append('ida_globals.h:%d: extern retype + struct insert' % (idx + 1))
    if APPLY:
        lines[idx] = newln
        lines[idx:idx] = STRUCT_BLOCK.split('\n')
        gh.write_text('\n'.join(lines), encoding='utf-8', newline='\n')
    n_writes += 1

# ---- 2) ida_globals.cpp: def retype
gc = ROOT / 'src/core/ida_globals.cpp'
txt = gc.read_text(encoding='utf-8', errors='replace')
m = DEF_RE.search(txt)
if 'dword_A8B230[435]' in txt:
    report.append('ida_globals.cpp: array def already present (skip)')
elif not m:
    print('FATAL: dword_A8B230 def not found in ida_globals.cpp')
    sys.exit(2)
else:
    report.append('ida_globals.cpp: def retype to AbstractElem[435]')
    if APPLY:
        txt = txt[:m.start()] + 'AbstractElem dword_A8B230[435] = {};  // [X36-A8B230] was unsigned int = 0' + txt[m.end():]
        gc.write_text(txt, encoding='utf-8', newline='\n')
    n_writes += 1

# ---- 3) body same-bytes rewrites
for rel, old, new in BODY_REWRITES:
    p = ROOT / rel
    txt = p.read_text(encoding='utf-8', errors='replace')
    if new in txt:
        report.append('%s: rewrite already applied (skip)' % rel)
        continue
    cnt = txt.count(old)
    if cnt != 1:
        print('FATAL: %s: expected exactly 1 occurrence of %r, found %d' % (rel, old, cnt))
        sys.exit(2)
    report.append('%s: same-bytes rewrite %r' % (rel, old[:40]))
    if APPLY:
        p.write_text(txt.replace(old, new), encoding='utf-8', newline='\n')
    n_writes += 1

# ---- 4) safety: collision check for the new type name (must be unique in tree)
hits = []
for p in list((ROOT / 'src').rglob('*.h')) + list((ROOT / 'src').rglob('*.hpp')):
    t = p.read_text(encoding='utf-8', errors='replace')
    if re.search(r'\b(?:class|struct)\s+AbstractElem\b', t) and p != gh:
        hits.append(str(p))
if hits:
    print('FATAL: AbstractElem name collision: %s' % hits)
    sys.exit(2)

# ---- 5) singleton-view arrow sites -> array member form (same bytes).
# Round-1 build evidence: 48 fresh C2039 rows at `dword_A8B230->member` —
# the decompiler rendered the SAME region through the til ScenarioClass
# (14,140B singleton view) with members at ABSOLUTE disps. Decode:
# disp = til offset (or address-encoded name), idx = disp//36, off = disp%36;
# rewrite only when off is a 4-byte-aligned abstract member (width-preserving).
# Width-mismatch members are LEFT (unknown630 word@0x630, fileName char[260]@
# 0x125C, ambientTimer 12B@0x1248, stage word@0x3564, ScenarioClass_field_35A2
# word@0x35A2, u8_81 byte@0x81) — documented residual.
ARROW_TABLE = {
    'vfptr': (0, 'vfptr'),
    'vtable0': (0, 'vtable0'),
    'vtable1': (0, 'vtable1'),
    'vtable2': (0, 'vtable2'),
    'vtable3': (0, 'vtable3'),
    'ScenarioClass_field_34A0': (374, 'vfptr2'),
    'ScenarioClass_field_62C': (43, 'NeedsSaveOrLink'),
    '__pad_628': (43, 'referenceCount'),
    'action': (144, 'vfptr1'),
    'allowableMaximumsCount': (376, 'vfptr'),
    'allowableUnitMaximums': (375, 'NeedsSaveOrLink'),
    'allowableUnits': (375, 'nextArrayIndex'),
    'allowableUnitsCount': (375, 'referenceCount'),
    'altHomeCell': (14, 'abstractFlags'),
    'ambientCurrent': (376, 'uniqueId'),
    'ambientOriginal': (376, 'vfptr3'),
    'ambientTarget': (376, 'abstractFlags'),
    'blue': (376, 'NeedsSaveOrLink'),
    'brief': (143, 'referenceCount'),
    'campaignIndex': (375, 'uniqueId'),
    'carryOverCap': (202, 'nextArrayIndex'),
    'difficulty1': (42, 'NeedsSaveOrLink'),
    'difficulty2': (43, 'vfptr'),
    'dominatorAmbient': (378, 'nextArrayIndex'),
    'dominatorAmbientChangeRate': (379, 'vfptr3'),
    'dominatorBlue': (379, 'vfptr'),
    'dominatorGreen': (378, 'NeedsSaveOrLink'),
    'dominatorGround': (379, 'vfptr1'),
    'dominatorLevel': (379, 'vfptr2'),
    'dominatorRed': (378, 'referenceCount'),
    'dropshipCountsCount': (376, 'vfptr2'),
    'dropshipUnitCounts': (376, 'vfptr1'),
    'green': (376, 'referenceCount'),
    'ground': (377, 'vfptr'),
    'height': (122, 'uniqueId'),
    'homeCell': (14, 'uniqueId'),
    'humanPlayerHouseTypeIndex': (202, 'vfptr3'),
    'initTime': (379, 'abstractFlags'),
    'intro': (143, 'nextArrayIndex'),
    'ionAmbient': (377, 'vfptr2'),
    'ionBlue': (377, 'abstractFlags'),
    'ionGreen': (377, 'uniqueId'),
    'ionGround': (377, 'nextArrayIndex'),
    'ionLevel': (377, 'referenceCount'),
    'ionRed': (377, 'vfptr3'),
    'level': (377, 'vfptr1'),
    'lose': (144, 'vfptr'),
    'ls640BriefLocX': (387, 'vfptr'),
    'ls640BriefLocY': (387, 'vfptr1'),
    'ls800BriefLocX': (387, 'vfptr2'),
    'ls800BriefLocY': (387, 'vfptr3'),
    'missionTimer_text_csf': (127, 'nextArrayIndex'),
    'nukeAmbient': (377, 'NeedsSaveOrLink'),
    'nukeAmbientChangeRate': (378, 'abstractFlags'),
    'nukeBlue': (378, 'vfptr2'),
    'nukeGreen': (378, 'vfptr1'),
    'nukeGround': (378, 'vfptr3'),
    'nukeLevel': (378, 'uniqueId'),
    'nukeRed': (378, 'vfptr'),
    'numCoopHumanStartSpots': (127, 'vfptr2'),
    'numberStartingPoints': (122, 'abstractFlags'),
    'parTimeDifficult': (381, 'nextArrayIndex'),
    'parTimeEasy': (381, 'uniqueId'),
    'parTimeMedium': (381, 'abstractFlags'),
    'percent': (202, 'referenceCount'),
    'playerSideIndex': (374, 'NeedsSaveOrLink'),
    'postScore': (144, 'vfptr2'),
    'preMapSelect': (144, 'vfptr3'),
    'q010': (0, 'uniqueId'),
    'q038': (1, 'abstractFlags'),
    'q3568': (379, 'referenceCount'),
    'q356C': (379, 'NeedsSaveOrLink'),
    'red': (376, 'nextArrayIndex'),
    'startX': (122, 'vfptr1'),
    'startY': (122, 'vfptr2'),
    'startingDropships': (375, 'abstractFlags'),
    'techLevel': (130, 'vfptr3'),
    'theater': (130, 'uniqueId'),
    'themeIndex': (202, 'vfptr2'),
    'u32_218': (14, 'NeedsSaveOrLink'),
    'u32_357C': (382, 'vfptr1'),
    'u32_3580': (382, 'vfptr2'),
    'u32_3584': (382, 'vfptr3'),
    'u32_3588': (382, 'uniqueId'),
    'u32_5E4': (41, 'NeedsSaveOrLink'),
    'u32_5E8': (42, 'vfptr'),
    'u32_5EC': (42, 'vfptr1'),
    'u32_614': (43, 'vfptr2'),
    'u32_620': (43, 'abstractFlags'),
    'u32_80': (3, 'abstractFlags'),
    'uniqueId': (14, 'nextArrayIndex'),
    'unknown3598': (379, 'uniqueId'),
    'view1': (373, 'referenceCount'),
    'view2': (373, 'NeedsSaveOrLink'),
    'view3': (374, 'vfptr'),
    'view4': (374, 'vfptr1'),
    'width': (122, 'vfptr3'),
    'win': (143, 'NeedsSaveOrLink'),
}
ARROW_RE = re.compile(r'(?<![.\w])dword_A8B230\s*->\s*(\w+)')
DEREF_RE = re.compile(r'\(\*dword_A8B230\)\.(\w+)')
n_arrow = 0
arrow_left = Counter()
scan_paths = sorted((ROOT / 'src/e4').glob('*_e4.cpp')) + \
    [p for p in (ROOT / 'src').rglob('*.cpp') if '.omo' not in str(p)]
seen_paths = set(scan_paths)
for p in scan_paths:
    txt = p.read_text(encoding='utf-8', errors='replace')
    out = []
    changed = False
    for ln in txt.split('\n'):
        newln = ln
        def _sub(m):
            global n_arrow
            nm = m.group(1)
            ent = ARROW_TABLE.get(nm)
            if ent is None:
                arrow_left[nm] += 1
                return m.group(0)
            n_arrow += 1
            return 'dword_A8B230[%d].%s' % (ent[0], ent[1])
        newln = ARROW_RE.sub(_sub, newln)
        newln = DEREF_RE.sub(lambda m: 'dword_A8B230[0].%s' % m.group(1)
                             if m.group(1) in ARROW_TABLE else m.group(0), newln)
        if newln != ln:
            changed = True
            out.append(newln)
        else:
            out.append(ln)
    if changed and APPLY:
        p.write_text('\n'.join(out), encoding='utf-8', newline='\n')
        n_writes += 1
        report.append('%s: arrow rewrites applied' % p.name)
    elif changed:
        n_arrow_count = sum(1 for a, b in zip(txt.split('\n'), out) if a != b)
        report.append('%s: %d lines would change' % (p.name, n_arrow_count))

print('arrow decode table hits: %d, left (width-mismatch): %s' % (n_arrow, dict(arrow_left)))

print('X36-A8B230: %d planned writes %s' % (n_writes, '(APPLIED)' if APPLY else '(DRY)'))
for r in report:
    print('  ', r)
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
