#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G42.53d absorption v5: balanced-cut struct deletion + method forwarding
into the tree class (default-param padded, same-name skip)."""
import io
import glob
import re
import os
import json
from collections import Counter

IDX = json.load(io.open('.omo/g240_tree_index.json', encoding='utf-8'))
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')
METH_RE = re.compile(r'^\s*((?:static\s+)?[\w\* ]+?\b\w+\s*\([^;{]*\))\s*;$',
                     re.M)


def cut_struct(t, start):
    o = t.index('{', start)
    depth = 0
    i = o
    while i < len(t):
        if t[i] == '{':
            depth += 1
        elif t[i] == '}':
            depth -= 1
            if depth == 0:
                j = i + 1
                while j < len(t) and t[j] in ' \t':
                    j += 1
                if j < len(t) and t[j] == ';':
                    j += 1
                return j
        i += 1
    return -1


stats = Counter()
for p in sorted(glob.glob('src/e4/classes/*_e4.hpp')):
    t = io.open(p, encoding='utf-8', errors='replace').read()
    sm = re.search(r'\bstruct\s+(\w+)\s*\{', t)
    if not sm:
        stats['no-struct'] += 1
        continue
    cls = sm.group(1)
    ent = IDX.get(cls)
    if not ent:
        stats['no-tree'] += 1
        continue
    rel, ns = ent
    end = cut_struct(t, sm.start())
    if end < 0:
        stats['cut-fail'] += 1
        continue
    body = t[sm.start():end]
    members = dict((mm.group(1), int(mm.group(2), 16)) for mm in
                   re.finditer(r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?;'
                               r'\s*//\s*0x([0-9A-Fa-f]+)', body, re.M))
    if not members:
        stats['no-members'] += 1
        continue
    tt = io.open('src/' + rel, encoding='utf-8', errors='replace').read()
    # ---- method forwarding ----
    add = []
    for md in METH_RE.findall(body):
        md = md.strip()
        for k, v in (('_DWORD', 'unsigned int'), ('_BYTE', 'unsigned char'),
                     ('_WORD', 'unsigned short')):
            md = md.replace(k, v)
        mm2 = re.match(r'^(.*?)\((.*)\)$', md)
        if not mm2:
            continue
        head, params = mm2.group(1).strip(), mm2.group(2).strip()
        if head.split()[-1] == cls:
            continue
        mn = re.search(r'(\w+)\s*$', head)
        if not mn:
            continue
        mname = mn.group(1)
        if re.search(r'\b' + re.escape(mname) + r'\s*\(', tt):
            continue
        pl = [x.strip() for x in params.split(',')] if params else []
        pl2 = [x if (x in ('...', '') or '=' in x) else x + ' = 0'
               for x in pl]
        add.append('    %s(%s);  // G42.53d fwd from e4'
                   % (head, ', '.join(pl2)))
    tnames = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', tt))
    if any(GEN.match(n) or n.startswith(cls + '_') for n in members):
        stats['not-clean'] += 1
        continue
    if any(n not in tnames for n in members):
        stats['name-miss'] += 1
        continue
    inc = '#include "%s"  // G42.53d tree truth' % rel
    if inc not in t:
        lines = t.split('\n')
        k = 0
        for i, l in enumerate(lines[:60]):
            if l.startswith('#include'):
                k = i + 1
        lines.insert(k, inc)
        t = '\n'.join(lines)
    note = ('// G42.53d absorbed: single truth is %s%s%s\n'
            % (ns + '::' if ns else '', cls,
               ' (same-ns direct)' if ns == 'gamemd' else ''))
    t = t[:sm.start()] + note + t[end:]
    io.open(p, 'w', encoding='utf-8', errors='surrogateescape',
            newline='').write(t)
    if add:
        bm2 = re.search(r'\b(?:class|struct)\s+' + re.escape(cls) +
                        r'\b[^;{]*\{', tt)
        if bm2:
            close = tt.find('\n};', bm2.end())
            tt = tt[:close] + '\n'.join(add) + '\n' + tt[close:]
            io.open('src/' + rel, 'w', encoding='utf-8',
                    errors='surrogateescape', newline='').write(tt)
    stats['absorbed'] += 1
    stats['meths-fwd'] += len(add)
print(dict(stats))
