#!/usr/bin/env python3
"""Supply missing SAME-UNIVERSE class-header includes for C3861 bare calls.

A corpus TU calling `ReadBool_Overwrite(...)` bare inside an INIClass
member fn compiles only when the TU includes the e4 flat header that
declares the method. Log-driven: for each C3861 identifier, find the
src/e4/classes/*.hpp that declares it as a member and add the include to
failing TUs that lack it.

Scope guard: e4-OWN class headers ONLY (never core/infra/csp_canon —
dual-universe collisions). Idempotent.

Usage: python tools/csp_export/fix_c3861_member_include.py <log> [--apply]
"""
import glob
import json
import os
import re
import sys
from collections import defaultdict

APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
Q = chr(0x201C) + chr(0x201D)
ERR = re.compile(r'error C3861: [' + Q + r'](\w+)[' + Q + r']')

TXT = open(LOG, encoding='utf-8', errors='replace').read() if LOG else ''
pairs = set()
for m in ERR.finditer(TXT):
    # the TU file is on the same line
    fm = re.search(r'([A-Za-z0-9_]+\.cpp)\(', TXT[max(0, m.start() - 300):m.start()])
    if fm:
        pairs.add((fm.group(1), m.group(1)))
print('C3861 (file, name) pairs:', len(pairs))

# index: member name -> set of e4 class headers declaring it
decl_in = defaultdict(set)
for hp in glob.glob('src/e4/classes/*.hpp'):
    txt = open(hp, encoding='utf-8', errors='replace').read()
    for m in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', txt):
        decl_in[m.group(1)].add(os.path.basename(hp))

# TU file -> full path (corpus dirs)
TU_PATHS = {}
for pat in ('src/e4/*.cpp', 'src/_gap2/*.cpp', 'src/system/gap2*.cpp'):
    for p in glob.glob(pat):
        TU_PATHS[os.path.basename(p)] = p

stats = {'supplied': 0, 'files': 0, 'no-decl': 0, 'already': 0}
files_changed = 0
by_file = defaultdict(set)
for f, name in pairs:
    hdrs = decl_in.get(name)
    if not hdrs:
        stats['no-decl'] += 1
        continue
    p = TU_PATHS.get(f)
    if not p:
        continue
    by_file[p].update(hdrs)

for p, hdrs in sorted(by_file.items()):
    # anti-deluge: common method names (Find/Construct) live in dozens of
    # headers — supply only SPECIFIC members (declared in <=4 headers),
    # capped per TU; anything else stays a logged C3861 for triage
    hdrs = {h for h in hdrs
            if sum(1 for hs in decl_in.values() if h in hs) <= 10**9}
    specific = sorted(
        h for h in hdrs
        if len([n for n, hs in decl_in.items() if h in hs]) > 0)
    # per-name specificity: keep only names whose header set is small
    keep = set()
    for f2, name in pairs:
        if TU_PATHS.get(f2) != p:
            continue
        hs = decl_in.get(name, set())
        if hs and len(hs) <= 4:
            keep |= hs
    keep &= hdrs
    txt = open(p, encoding='utf-8', errors='replace').read()
    add = []
    for h in sorted(keep)[:8]:
        inc = '#include "e4/classes/%s"' % h
        if inc in txt:
            stats['already'] += 1
            continue
        add.append(inc)
    if not add:
        continue
    lines = txt.split('\n')
    last_inc = max((i for i, l in enumerate(lines)
                    if l.startswith('#include')), default=-1)
    lines[last_inc + 1:last_inc + 1] = add
    txt = '\n'.join(lines)
    files_changed += 1
    stats['supplied'] += len(add)
    stats['files'] += 1
    if APPLY:
        open(p, 'w', encoding='utf-8', newline='').write(txt)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
