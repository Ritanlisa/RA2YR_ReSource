#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G261 expansion wave A: delete provably-unused flat members/method decls
from g260-skip dual classes (the deletes g260 --apply never ran because
those classes were整体 skip).

Safety gates:
  - token must have ZERO non-declaration usage anywhere in src/e4
    (g260_usage_cache/g261_usage_cache vocabulary, recomputed on miss)
  - class-level sizeof guard: if `sizeof(Cls)` appears in src/e4, the flat
    carrier is layout-sensitive -> class skipped entirely
  - methods: same zero-usage rule (conservative: any `name(` anywhere
    counts as used, so in practice only genuinely dead ones go)

Idempotent. --apply to write. Report -> .omo/g261_expand_report.json
"""
import io
import re
import json
import glob
import os
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
DUAL = json.load(open(ROOT / '.omo/g243_true_dual.json', encoding='utf-8'))
MAP = json.load(open(ROOT / '.omo/g260_map.json', encoding='utf-8'))
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')

E4_FILES = None
_USAGE_CACHE = {}
for cp in ('.omo/g261_usage_cache.json', '.omo/g260_usage_cache.json'):
    p = ROOT / cp
    if p.exists():
        _USAGE_CACHE.update(json.load(open(p, encoding='utf-8')))
        break


def e4_files():
    global E4_FILES
    if E4_FILES is None:
        E4_FILES = []
        for p in glob.glob(str(ROOT / 'src/e4/**/*'), recursive=True):
            if p.endswith(('.cpp', '.hpp', '.h', '.inl')):
                E4_FILES.append((p, io.open(p, encoding='utf-8',
                                            errors='replace').read()))
    return E4_FILES


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


def parse_struct(t, cls):
    sm = re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t)
    if not sm:
        return None
    end = cut(t, sm.start())
    if end < 0:
        return None
    body = t[sm.start():end]
    members, methods = [], []
    for line_m in re.finditer(r'^[^\n]*;', body, re.M):
        seg = line_m.group(0)
        if '(' in seg.split('//')[0]:
            mm = re.search(r'\b(\w+)\s*\(', seg)
            if mm:
                methods.append((mm.group(1), line_m.start(), line_m.end()))
            continue
        dm = re.match(r'\s*[\w\* ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;', seg)
        if dm:
            members.append((dm.group(1), line_m.start(), line_m.end()))
    return sm.start(), end, members, methods


def find_flat(cls):
    hp = ROOT / ('src/e4/classes/%s_e4.hpp' % cls)
    if hp.exists():
        t = hp.read_text(encoding='utf-8', errors='replace')
        if re.search(r'\bstruct\s+' + re.escape(cls) + r'\s*\{', t):
            return hp, t
    pat = re.compile(r'\bstruct\s+' + re.escape(cls) + r'\s*\{')
    for p, t in e4_files():
        if '/classes/' in p.replace(os.sep, '/') and pat.search(t):
            return Path(p), t
    return None


def token_usage(tok):
    if tok in _USAGE_CACHE:
        return _USAGE_CACHE[tok]
    word = re.compile(r'\b' + re.escape(tok) + r'\b')
    decl_l = re.compile(r'^\s*[\w\*\s]+?\b' + re.escape(tok) +
                        r'\s*(\[[^\]]*\])?\s*;')
    call_l = re.compile(r'\b' + re.escape(tok) + r'\s*\(')
    decl, used = 0, 0
    for p, t in e4_files():
        if tok not in t:
            continue
        for l in t.split('\n'):
            if not word.search(l):
                continue
            if decl_l.match(l):
                decl += 1
            elif call_l.search(l.split('//')[0]):
                used += 2
            else:
                used += 1
    r = {'decl_count': decl, 'used_count': used}
    _USAGE_CACHE[tok] = r
    return r


def main():
    files = e4_files()
    # sizeof-sensitive classes
    sizeof_re = re.compile(r'\bsizeof\s*\(\s*([A-Za-z_]\w*)\s*\)')
    sizeof_classes = set()
    for p, t in files:
        for m in sizeof_re.finditer(t):
            sizeof_classes.add(m.group(1))
    report = {}
    n_del_members = n_del_methods = 0
    n_classes_touched = 0
    edits = {}          # path -> [(line_start_abs, line_end_abs)] spans to kill
    for cls in DUAL:
        rec = MAP.get(cls)
        if not rec or rec.get('action') != 'skip':
            continue
        if cls in sizeof_classes:
            report[cls] = {'skipped': 'sizeof-sensitive'}
            continue
        r = find_flat(cls)
        if not r:
            continue
        hp, t = r
        ps = parse_struct(t, cls)
        if not ps:
            continue
        s, e, members, methods = ps
        kill = []
        for name, ls, le in [(m[0], m[1], m[2]) for m in members] + \
                            [(m[0], m[1], m[2]) for m in methods]:
            u = token_usage(name)
            if u['used_count'] == 0:
                kill.append((name, ls, le))
        if not kill:
            continue
        n_classes_touched += 1
        n_del_members += sum(1 for k in kill
                             if (k[1], k[2]) in [(m[1], m[2]) for m in members])
        n_del_methods += sum(1 for k in kill
                             if (k[1], k[2]) in [(m[1], m[2]) for m in methods])
        report[cls] = {'deleted': [k[0] for k in kill]}
        edits.setdefault(str(hp), []).extend((s + k[1], s + k[2]) for k in kill)
    if APPLY:
        for path, spans in edits.items():
            t = io.open(path, encoding='utf-8', errors='replace').read()
            for a, b in sorted(spans, reverse=True):
                la = t.rfind('\n', 0, a) + 1
                lb = t.find('\n', b)
                lb = len(t) if lb < 0 else lb + 1
                t = t[:la] + t[lb:]
            io.open(path, 'w', encoding='utf-8', errors='surrogateescape',
                    newline='').write(t)
    json.dump(_USAGE_CACHE, open(ROOT / '.omo/g261_usage_cache.json', 'w'))
    json.dump(report, open(ROOT / '.omo/g261_expand_report.json', 'w'),
              indent=1)
    print('classes touched:', n_classes_touched,
          ' member decls to delete:', n_del_members,
          ' method decls to delete:', n_del_methods)
    print('sizeof-guarded skips:', sum(1 for v in report.values()
                                       if 'skipped' in v))
    print('APPLY' if APPLY else 'DRYRUN',
          '- report .omo/g261_expand_report.json')


if __name__ == '__main__':
    main()
