#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G261 blocker census for the 332 g260-skip dual classes.

For every skip class, classify WHY each used_bad member / missing method
blocked absorption, and decide the compliant expansion action:

  member reasons:
    renamable-now   -> tree class has semantic member at same offset,
                       token unique in src/e4 (g260 gates all pass);
                       (these were already applied by g260 --apply for
                       clean classes; here they are leftovers g260 could
                       not do because the CLASS had other blockers)
    no-offset       -> flat member has no // 0xNN comment
    no-tree-member  -> tree class models nothing at that offset
    tree-member-gen -> tree member at offset is itself generic-named
    mlk-only        -> member_lookup.json has semantic name at offset but
                       that name is not in the tree file text (tree edit
                       needed -> not compliant, blocked)
    token-not-unique-> member token declared in >1 place in src/e4
    target-collision-> semantic target name already used in same struct
  method reasons:
    unused          -> token has zero non-declaration usage in src/e4
                       (delete declaration -> unblocks guard)
    used            -> real usage; needs in-class declaration in tree
                       file (non-e4 write, forbidden) -> blocked

Output: .omo/g261_blockers.json  (+ console summary)
Read-only analysis; the acting script is g261_expand.py.
"""
import io
import re
import json
import glob
import os
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
DUAL = json.load(open(ROOT / '.omo/g243_true_dual.json', encoding='utf-8'))
MAP = json.load(open(ROOT / '.omo/g260_map.json', encoding='utf-8'))
try:
    MLOOK = json.load(open(ROOT / 'tools/member_lookup.json', encoding='utf-8'))
except Exception:
    MLOOK = {}
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')
MAX_SEMANTIC_OFFSET = 0x10000

_TREE_NAMES_CACHE = {}
_TREE_OFF_CACHE = {}
_USAGE_CACHE = json.load(open(ROOT / '.omo/g260_usage_cache.json',
                              encoding='utf-8'))
E4_FILES = None


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


def tree_text(rel):
    return io.open(ROOT / 'src' / rel, encoding='utf-8',
                   errors='replace').read()


def tree_names(rel):
    if rel not in _TREE_NAMES_CACHE:
        t = tree_text(rel)
        names = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', t))
        names |= set(re.findall(r'\b(\w+)\s*\(', t))
        _TREE_NAMES_CACHE[rel] = names
    return _TREE_NAMES_CACHE[rel]


def tree_offset_members(cls):
    if cls in _TREE_OFF_CACHE:
        return _TREE_OFF_CACHE[cls]
    ent = IDX.get(cls)
    out = {}
    if ent:
        tt = tree_text(ent[0])
        m = re.search(r'\b(?:class|struct)\s+' + re.escape(cls) +
                      r'\b[^;{=]*\{', tt)
        if m:
            end = cut(tt, m.start())
            if end < 0:
                end = len(tt)
            for line_m in re.finditer(r'^[^\n]*;', tt[m.start():end], re.M):
                seg = line_m.group(0)
                if '(' in seg.split('//')[0]:
                    continue
                dm = re.match(r'\s*[\w\* ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;', seg)
                om = re.search(r'//\s*0x([0-9A-Fa-f]+)', seg)
                if dm and om:
                    out[int(om.group(1), 16)] = dm.group(1)
    _TREE_OFF_CACHE[cls] = out
    return out


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
            om = re.search(r'//.*?0x([0-9A-Fa-f]+)', seg)
            off = int(om.group(1), 16) if om else None
            members.append((dm.group(1), line_m.start(), line_m.end(), off))
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


def bad_name(name, cls, tn):
    return bool(GEN.match(name) or name.startswith(cls + '_')
                or name not in tn)


def main():
    report = {}
    reason_stats = {}
    for cls in DUAL:
        rec = MAP.get(cls)
        if not rec or rec.get('action') != 'skip':
            continue
        r = find_flat(cls)
        if not r:
            report[cls] = {'block': ['no-flat-struct']}
            continue
        hp, t = r
        ent = IDX.get(cls)
        rel = ent[0] if ent else None
        tn = tree_names(rel) if rel else set()
        ps = parse_struct(t, cls)
        if not ps:
            report[cls] = {'block': ['no-flat-parse']}
            continue
        s, e, members, methods = ps
        toff = tree_offset_members(cls)
        mlk = MLOOK.get(cls, {})
        member_names = set(m[0] for m in members)
        blocks = []
        member_detail = {}
        for name, ls, le, off in members:
            if not bad_name(name, cls, tn):
                continue
            u = token_usage(name)
            own = [m for m in members if m[0] == name]
            if u['used_count'] == 0:
                member_detail[name] = 'unused-deletable'
                continue
            if off is None:
                member_detail[name] = 'no-offset'
            elif off in toff and toff[off] != name:
                cand = toff[off]
                if GEN.match(cand) or cand.startswith(cls + '_'):
                    member_detail[name] = 'tree-member-gen'
                elif u['decl_count'] != len(own):
                    member_detail[name] = 'token-not-unique'
                elif cand in member_names:
                    member_detail[name] = 'target-collision'
                else:
                    member_detail[name] = 'renamable-now'
            elif off in toff and toff[off] == name:
                # same name at offset but still bad -> name is generic and
                # tree keeps it generic too
                member_detail[name] = 'tree-member-gen'
            else:
                m2 = mlk.get(str(off))
                n2 = m2.get('name') if m2 else None
                if (n2 and off < MAX_SEMANTIC_OFFSET
                        and not GEN.match(n2)
                        and not n2.startswith(cls + '_')):
                    member_detail[name] = 'mlk-only'
                else:
                    member_detail[name] = 'no-tree-member'
        method_detail = {}
        for meth, ls, le in methods:
            if meth in tn:
                continue
            u = token_usage(meth)
            method_detail[meth] = 'unused-deletable' \
                if u['used_count'] == 0 else 'used'
        for v in member_detail.values():
            reason_stats[v] = reason_stats.get(v, 0) + 1
        for v in method_detail.values():
            reason_stats[v] = reason_stats.get(v, 0) + 1
        hard = [k for k, v in list(member_detail.items()) + list(method_detail.items())
                if v not in ('unused-deletable', 'renamable-now')]
        report[cls] = {
            'members': member_detail,
            'methods': method_detail,
            'hard_blockers': sorted(set(hard)),
        }
    # summary
    n_hard = sum(1 for v in report.values() if v.get('hard_blockers'))
    n_soft = len(report) - n_hard
    print('skip classes analysed:', len(report))
    print('  unlockable by pure-e4 action (delete unused + rename):', n_soft)
    print('  hard-blocked:', n_hard)
    print('reason histogram:', json.dumps(reason_stats, indent=0))
    hb = Counter = {}
    for v in report.values():
        for h in v.get('hard_blockers', []):
            hb[h] = hb.get(h, 0) + 1
    print('classes per hard-blocker:', json.dumps(dict(sorted(
        hb.items(), key=lambda x: -x[1])), indent=0))
    json.dump(report, open(ROOT / '.omo/g261_blockers.json', 'w'), indent=1)
    json.dump(_USAGE_CACHE, open(ROOT / '.omo/g261_usage_cache.json', 'w'))


if __name__ == '__main__':
    main()
