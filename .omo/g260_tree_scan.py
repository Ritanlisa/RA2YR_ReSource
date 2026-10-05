#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G260: scan tree class definitions for offset-commented data members."""
import io, re, json
from pathlib import Path
from collections import Counter

ROOT = Path(r'D:\RA2YR_ReSource')
IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
DUAL = json.load(open(ROOT / '.omo/g243_true_dual.json', encoding='utf-8'))
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')


def cut(t, start):
    o = t.index('{', start)
    d = 0
    i = o
    while i < len(t):
        if t[i] == '{':
            d += 1
        elif t[i] == '}':
            d -= 1
            if d == 0:
                j = i + 1
                while j < len(t) and t[j] in ' \t':
                    j += 1
                if j < len(t) and t[j] == ';':
                    j += 1
                return j
        i += 1
    return -1


MEMBER_RE = re.compile(
    r'^\s*[\w\* ]+?\b(\w+)\s*(?:\[[^\]]*\])?\s*;\s*//\s*0x([0-9A-Fa-f]+)', re.M)

tree_data = {}   # cls -> {offset: name}
tree_allnames = {}
for cls in DUAL:
    ent = IDX.get(cls)
    if not ent:
        continue
    rel = ent[0]
    tt = io.open(ROOT / 'src' / rel, encoding='utf-8', errors='replace').read()
    tree_allnames[cls] = set(
        re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', tt))
    m = re.search(r'\b(?:class|struct)\s+' + re.escape(cls) + r'\b[^;{=]*\{', tt)
    if not m:
        continue
    end = cut(tt, m.start())
    if end < 0:
        continue
    body = tt[m.start():end]
    md = {}
    for mm in MEMBER_RE.finditer(body):
        # exclude method decls: check the matched text has no '('
        if '(' in mm.group(0):
            continue
        md[int(mm.group(2), 16)] = mm.group(1)
    tree_data[cls] = md

n_with = sum(1 for v in tree_data.values() if v)
print('dual classes with offset data members in tree file:', n_with, '/', len(DUAL))
tot = sum(len(v) for v in tree_data.values())
sem = sum(1 for v in tree_data.values() for n in v.values() if not GEN.match(n))
print('total offset data members:', tot, 'semantic:', sem)
c = Counter()
for cls, md in tree_data.items():
    if md:
        c['>=1'] += 1
        if len(md) >= 3:
            c['>=3'] += 1
print(c)
ex = [(cls, sorted(md.items())[:4]) for cls, md in tree_data.items() if len(md) >= 3][:6]
for e in ex:
    print(e)
json.dump({k: {str(o): n for o, n in v.items()} for k, v in tree_data.items()},
          open(ROOT / '.omo/g260_tree_members.json', 'w'))
