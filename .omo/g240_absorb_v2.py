#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.53c absorption v2 (unified, atomic per class):
clean dual class -> delete e4 struct + emit alias WITH the tree-hpp
include + verified namespace qualification (ra2::game or fallback to the
tree class's real namespace).  Unclean or unqualifiable -> left untouched.
Runs dry by default; --apply writes."""
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


def ns_at(tt, pos):
    """innermost namespace at pos (tracking closes)."""
    depth = 0
    stack = []
    for m in re.finditer(r'namespace\s+([\w:]+)\s*\{|\}', tt[:pos]):
        if m.group(1):
            stack.append(m.group(1))
        else:
            if stack:
                stack.pop()
    return stack[-1] if stack else ''


def tree_site(cls):
    for tp in sorted(glob.glob(str(ROOT / 'src/**/*.hpp'), recursive=True)):
        if '/e4/' in tp or 'csp_canon' in tp or '_generated' in tp:
            continue
        tt = io.open(tp, encoding='utf-8', errors='replace').read()
        bm = re.search(r'\b(?:class|struct)\s+' + cls + r'\b[^;{]*\{', tt)
        if bm and tt.find('};', bm.end()) != -1:
            rel = os.path.relpath(tp, str(ROOT / 'src')).replace(os.sep, '/')
            return rel, ns_at(tt, bm.end())
    return None, None


stats = Counter()
for p in sorted(glob.glob(str(ROOT / 'src/e4/classes/*_e4.hpp'))):
    cls = os.path.basename(p)[:-7]
    t = io.open(p, encoding='utf-8', errors='replace').read()
    sm = re.search(r'struct %s \{(.*?)\n\};' % re.escape(cls), t, re.S)
    if not sm:
        stats['no-struct'] += 1
        continue
    body = sm.group(1)
    members = dict((mm.group(1), int(mm.group(2), 16)) for mm in
                   re.finditer(r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?;'
                               r'\s*//\s*0x([0-9A-Fa-f]+)', body, re.M))
    if not members:
        stats['no-members'] += 1
        continue
    rel, ns = tree_site(cls)
    if not rel:
        stats['no-tree'] += 1
        continue
    tt = io.open(ROOT / 'src' / rel, encoding='utf-8',
                 errors='replace').read()
    tnames = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', tt))
    has_generic = any(GEN.match(n) or n.startswith(cls + '_')
                      for n in members)
    bad = [n for n in members
           if not (GEN.match(n) or n.startswith(cls + '_'))
           and n not in tnames]
    if has_generic or bad:
        stats['not-clean'] += 1
        continue
    qual = ns if ns else ''
    alias_ns = ('::' + qual if qual else '')
    if not qual:
        stats['no-ns'] += 1
        continue
    alias = ('// G42.53c absorbed: single truth is %s%s\n'
             'namespace gamemd { using %s = %s::%s; }\n'
             % (alias_ns, cls, cls, alias_ns, cls))
    if APPLY:
        inc = '#include "%s"  // G42.53c tree truth\n' % rel
        if inc.strip() not in t:
            lines = t.split('\n')
            idx = 0
            for i, l in enumerate(lines[:60]):
                if l.startswith('#include'):
                    idx = i + 1
            lines.insert(idx, inc.rstrip('\n'))
            t = '\n'.join(lines)
        t = t[:sm.start()] + alias + t[sm.end():]
        io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
                newline='').write(t)
    stats['absorbed' if APPLY else 'would-absorb'] += 1
print(dict(stats), '(APPLY)' if APPLY else '(DRYRUN)')
