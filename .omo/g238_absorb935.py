#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.53 mass absorption of the 935 fully-clean dual classes:
e4 flat struct -> `using X = ::ra2::game::X;` alias; e4 method decls
forwarded into the tree class (default-param padded).  One exe, one truth.
Idempotent: skips classes whose alias already present."""
import io
import glob
import re
import os
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')


def e4_block(cls, t):
    return re.search(r'struct %s \{(.*?)\n\};' % re.escape(cls), t, re.S)


def tree_target(cls):
    for tp in glob.glob(str(ROOT / 'src/**/*.hpp'), recursive=True):
        if '/e4/' in tp or 'csp_canon' in tp or '_generated' in tp:
            continue
        tt = io.open(tp, encoding='utf-8', errors='replace').read()
        bm = re.search(r'\b(?:class|struct)\s+' + cls + r'\b[^;{]*\{', tt)
        if bm:
            return tp, tt, bm
    return None


stats = Counter()
for p in sorted(glob.glob(str(ROOT / 'src/e4/classes/*_e4.hpp'))):
    cls = os.path.basename(p)[:-7]
    t = io.open(p, encoding='utf-8', errors='replace').read()
    sm = e4_block(cls, t)
    if not sm:
        stats['no-struct'] += 1
        continue
    if 'using %s = ::ra2::game::%s;' % (cls, cls) in t:
        stats['already'] += 1
        continue
    body = sm.group(1)
    members = dict((mm.group(1), int(mm.group(2), 16)) for mm in
                   re.finditer(r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?;'
                               r'\s*//\s*0x([0-9A-Fa-f]+)', body, re.M))
    if not members:
        stats['no-members'] += 1
        continue
    tt_ = tree_target(cls)
    if tt_ is None:
        stats['no-tree'] += 1
        continue
    tp, tt, bm = tt_
    tnames = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;',
                            tt[bm.end():tt.find('\n};', bm.end())]))
    has_generic = any(GEN.match(n) or n.startswith(cls + '_')
                      for n in members)
    bad = [n for n in members if not (GEN.match(n) or
                                      n.startswith(cls + '_'))
           and n not in tnames]
    if has_generic or bad:
        stats['not-clean'] += 1
        continue
    # method decls in e4 struct -> forward to tree class
    meths = re.findall(r'^\s*((?:static\s+)?[\w\* ]+?\b\w+\s*\([^;{]*\))'
                       r'\s*;', body, re.M)
    add = []
    for md in meths:
        md = md.strip()
        md = re.sub(r'\b_DWORD\b', 'unsigned int', md)
        md = re.sub(r'\b_BYTE\b', 'unsigned char', md)
        md = re.sub(r'\b_WORD\b', 'unsigned short', md)
        # default-pad params to absorb call-shape variance
        mm = re.match(r'^(.*?)\((.*)\)$', md)
        if not mm:
            continue
        head, params = mm.group(1).strip(), mm.group(2).strip()
        if head.endswith(cls):
            continue                      # ctor: tree has its own
        pl = [x.strip() for x in params.split(',')] if params else []
        padded = []
        i = 0
        for x in pl:
            if x == '...' or '=' in x:
                padded.append(x)
                continue
            i += 1
            padded.append(x + ' = 0' if not x.startswith(('void',)) or
                          x == 'void' and False else x)
        sig = head + '(' + ', '.join(padded) + ')'
        mname = re.search(r'(\w+)\s*\($', head + '(')
        if mname and not re.search(r'\b' + mname.group(1) + r'\s*\(',
                                   tt[bm.end():bm.end() + 200000]):
            add.append('    ' + sig + ';  // G42.53 absorbed from e4')
    alias = ('// G42.53 absorbed: e4 flat struct removed -- single truth '
             'is ::ra2::game::%s\nnamespace gamemd { using %s = '
             '::ra2::game::%s; }\n' % (cls, cls, cls))
    if APPLY:
        t = t[:sm.start()] + alias + t[sm.end():]
        io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                newline='').write(t)
        if add:
            close = tt.find('\n};', bm.end())
            tt = tt[:close] + '\n'.join(add) + '\n' + tt[close:]
            io.open(tp, 'w', encoding='utf-8', errors='surrogateescape',
                    newline='').write(tt)
        stats['absorbed'] += 1
        stats['methods-forwarded'] += len(add)
    else:
        stats['would-absorb'] += 1
print(dict(stats), '(APPLY)' if APPLY else '(DRYRUN)')
