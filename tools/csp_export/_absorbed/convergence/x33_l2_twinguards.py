#!/usr/bin/env python3
"""X33 L2 — twin-guard repair (D-A3 + D-A4). One-shot, idempotence-guarded.

A3: delete the flat MPGameModeClass twin from _w14_nocarrier_e4.hpp
    (full def in multiplayer.hpp is a member-superset with virtuals; zero
    body usage of the flat members anywhere in src/; only addr55/addr54 see
    both headers and their 47-override MPBattleClass group dies when the
    flat twin wins GAMEMD_G2_MPGameModeClass_DEF).

A4: tree-first bridge in the 3 C3668 victim TUs (addr40/addr5B/addr76):
    include "system/cc_file.hpp" BEFORE the flat file-family carriers so the
    TREE FileClass/RawFileClass/BufferIOFileClass/CDFileClass/CCFileClass
    (complete, with virtuals) win the shared GAMEMD_G2_* guards; the flat
    twins then skip. Evidence: flat BufferIO twin (no virtuals) wins in these
    TUs today -> tree RawFileClass 14 overrides + ~CDFileClass override fail;
    single-TU cl /showIncludes traced the tree family entering via
    object.hpp->ini_class.hpp->cc_file.hpp AFTER the flat carriers.

Usage: python x33_l2_twinguards.py [--apply]
Idempotence: A3 = block-present check; A4 = include-present check.
"""
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
report = []

# ---- A3: delete flat MPGameModeClass twin ----
p = ROOT / 'src/e4/classes/_w14_nocarrier_e4.hpp'
lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
try:
    start = next(i for i, ln in enumerate(lines)
                 if 'GAMEMD_G2_MPGameModeClass_DEF' in ln and ln.strip().startswith('#ifndef'))
    end = next(i for i, ln in enumerate(lines)
               if i > start and 'GAMEMD_G2_MPGameModeClass_DEF' in ln and ln.strip().startswith('#endif'))
except StopIteration:
    start = end = None
if start is None:
    report.append('NOOP _w14_nocarrier_e4.hpp (MPGameModeClass twin absent)')
elif not APPLY:
    report.append(f'PLAN delete _w14_nocarrier_e4.hpp lines {start+1}..{end+1} '
                  f'({end-start+1} lines, MPGameModeClass flat twin)')
else:
    del lines[start:end + 1]
    p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
    report.append(f'WROTE _w14_nocarrier_e4.hpp (deleted {end-start+1} lines)')

# ---- A4: cc_file.hpp tree-first bridge ----
BRIDGE = '#include "system/cc_file.hpp"  // X33-L2: G57a2-style tree-first bridge (C3668 twin-guard)'
for rel, anchor in [
    ('src/e4/addr40_e4.cpp', '#include "e4/classes/Buffer_e4.hpp"'),
    ('src/e4/addr5B_e4.cpp', '#include "e4/classes/BufferIOFileClass_e4.hpp"'),
    ('src/e4/addr76_e4.cpp', '#include "e4/classes/BufferIOFileClass_e4.hpp"'),
]:
    p = ROOT / rel
    txt = p.read_text(encoding='utf-8', errors='replace')
    if 'system/cc_file.hpp' in txt:
        report.append(f'NOOP {rel} (bridge present)')
        continue
    lines = txt.split('\n')
    idx = next((i for i, ln in enumerate(lines) if anchor in ln), None)
    if idx is None:
        report.append(f'SKIP {rel}: anchor not found')
        continue
    lines.insert(idx, BRIDGE)
    report.append(f'PLAN insert {rel}:{idx+1} cc_file.hpp bridge')
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        report[-1] = f'WROTE {rel} cc_file.hpp bridge'

print('\n'.join(report))
print('DRY RUN (use --apply)' if not APPLY else 'APPLIED')
