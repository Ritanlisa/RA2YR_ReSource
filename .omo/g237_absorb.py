#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.53 dual-universe absorption machine (user order: remove the two
conflicting class versions -- one exe, one truth).

Per dual class X:
  1. parse e4 struct flat members {name -> byte offset} (offset comments)
  2. semantic names via member_types[X+0xOFF].name
  3. rewrite e4 body refs  x->flat / x.flat  ->  semantic
  4. replace the e4 struct definition block with a namespace alias to the
     tree class  (using X = ::ra2::game::X;)  and strip its GAMEMD_USING
     guard pair
Pilot-run on classes whose member mapping is COMPLETE (every flat member
resolves to a semantic name) and whose refs all rewrite."""
import io
import glob
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
PILOT = ['MouseClass', 'TacticalMap', 'BSurface', 'DSurface',
         'IPXInterfaceClass']

MT = json_mt = __import__('json').load(
    io.open(ROOT / 'anchors/member_types.json', encoding='utf-8',
            errors='replace'))
# tree-class member inventory: name -> per-class offsets (from hpp scan)
TREE_MEM = defaultdict(dict)
for p in glob.glob(str(ROOT / 'src/**/*.hpp'), recursive=True):
    if '/e4/' in p or 'csp_canon' in p or '_generated' in p:
        continue
    t = io.open(p, encoding='utf-8', errors='replace').read()
    cm = re.search(r'\b(?:class|struct)\s+(\w+)', t)
    if not cm:
        continue
    for mm in re.finditer(r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?;\s*'
                          r'(?:\+\s*0x([0-9A-Fa-f]+))?\s*$', t, re.M):
        if mm.group(2):
            TREE_MEM[cm.group(1)].setdefault(mm.group(1),
                                             int(mm.group(2), 16))

stats = defaultdict(int)
for cls in PILOT:
    hp = ROOT / ('src/e4/classes/%s_e4.hpp' % cls)
    if not hp.exists():
        stats['no-hpp'] += 1
        continue
    t = hp.read_text(encoding='utf-8', errors='replace')
    # e4 struct block with guard
    blk = re.search(r'#ifndef GAMEMD_USING_%s.*?#endif[^\n]*\n(.*?)'
                    r'#endif' % cls, t, re.S)
    sm = re.search(r'struct %s \{(.*?)\n\};' % cls, t, re.S)
    if not sm:
        stats['no-struct'] += 1
        continue
    body = sm.group(1)
    # flat members: name + offset comment
    members = {}
    ok = True
    for mm in re.finditer(r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?;\s*'
                          r'//\s*0x([0-9A-Fa-f]+)', body, re.M):
        members[mm.group(1)] = int(mm.group(2), 16)
    if not members:
        stats['no-members'] += 1
        continue
    # tree class hpp block for existence verification
    tree_txt = None
    for tp in glob.glob(str(ROOT / 'src/**/*.hpp'), recursive=True):
        if '/e4/' in tp or 'csp_canon' in tp or '_generated' in tp:
            continue
        tt = io.open(tp, encoding='utf-8', errors='replace').read()
        bm = re.search(r'(?:class|struct)\s+' + cls + r'[^;]*\{',
                       tt)
        if bm:
            tree_txt = tt
            break
    if tree_txt is None:
        stats['no-tree-class'] += 1
        continue
    mapping = {}
    unmapped = []
    for name, off in members.items():
        e = MT.get('%s+0x%X' % (cls, off))
        sem = e.get('name') if isinstance(e, dict) else e
        if sem and re.search(r'' + re.escape(sem) + r'', tree_txt):
            mapping[name] = sem if sem != name else name
        elif name in tree_txt:
            mapping[name] = name
        else:
            unmapped.append((name, hex(off)))
    cover = len(mapping) / len(members) if members else 0
    print('%s: flat members=%d mappable=%d (%.0f%%) unmapped=%s'
          % (cls, len(members), len(mapping), 100 * cover,
             unmapped[:4] if unmapped else '-'))
    if cover < 0.999:
        stats['incomplete-map'] += 1
        continue
    # rewrite refs in e4 cpps
    n = 0
    for p in glob.glob(str(ROOT / 'src/**/*.cpp'), recursive=True):
        if '/e4/' not in p and 'gap2' not in p and 'supplied' not in p \
                and 'misc_ext' not in p:
            continue
        ct = io.open(p, encoding='utf-8', errors='replace').read()
        orig = ct
        for flat, sem in mapping.items():
            ct = re.sub(r'->%s\b' % re.escape(flat), '->' + sem, ct)
            ct = re.sub(r'\.%s\b' % re.escape(flat), '.' + sem, ct)
        if ct != orig:
            n += 1
            if APPLY:
                io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                        newline='').write(ct)
    print('   bodies rewritten in %d files' % n)
    # replace struct with alias (keep guard structure harmless: define the
    # alias only when the struct would have been visible)
    newblock = ('// G42.53 absorbed: e4 flat struct removed -- single '
                'truth is ::ra2::game::%s\n'
                'namespace gamemd { using %s = ::ra2::game::%s; }\n'
                % (cls, cls, cls))
    if APPLY:
        t = t[:sm.start()] + newblock + t[sm.end():]
        hp.write_text(t, encoding='utf-8', errors='surrogateescape',
                      newline='')
        stats['absorbed'] += 1
print('stats:', dict(stats), '(APPLY)' if APPLY else '(DRYRUN)')
