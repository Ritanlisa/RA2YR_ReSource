#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""G260 member-mapping pre-wave: unlock not-clean dual classes for gated
absorption (g247).

Per remaining dual class (flat struct in src/e4) with tree truth file:
  - data members that are 'bad' (generic name q_*/u32_*/u8_*/field_*,
    <Cls>_ prefix, or name absent from the tree file text) are:
      * DELETED from the flat struct if the token has zero usages in
        src/e4/** beyond its declaration lines (layout carrier only);
      * RENAMED (declaration + all src/e4 usages, word-boundary) to the
        semantic member name at the same offset, from (a) the tree class
        definition, (b) tools/member_lookup.json — only when the token is
        globally unique in src/e4 (all occurrences attributable to this
        one class) and the target name is present in the tree file text;
      * otherwise the class is SKIPPED (recorded).
Idempotent; dry-run by default, --apply to write. Report -> .omo/g260_map.json
"""
import io
import re
import os
import json
import glob
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
APPLY = '--apply' in sys.argv
IDX = json.load(open(ROOT / '.omo/g240_tree_index.json', encoding='utf-8'))
DUAL = json.load(open(ROOT / '.omo/g243_true_dual.json', encoding='utf-8'))
try:
    MLOOK = json.load(open(ROOT / 'tools/member_lookup.json', encoding='utf-8'))
except Exception:
    MLOOK = {}
GEN = re.compile(r'^(u\d+_|u32_|u8_|q_|field_)')
MAX_SEMANTIC_OFFSET = 0x10000

E4_FILES = None
_TREE_NAMES_CACHE = {}
_USAGE_CACHE = {}
_USAGE_CACHE_PATH = ROOT / '.omo/g260_usage_cache.json'
if _USAGE_CACHE_PATH.exists():
    _USAGE_CACHE.update(json.load(open(_USAGE_CACHE_PATH,
                                       encoding='utf-8')))


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


def tree_names(rel):
    if rel not in _TREE_NAMES_CACHE:
        t = io.open(ROOT / 'src' / rel, encoding='utf-8',
                    errors='replace').read()
        names = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])?\s*;', t))
        names |= set(re.findall(r'\b(\w+)\s*\(', t))
        _TREE_NAMES_CACHE[rel] = names
    return _TREE_NAMES_CACHE[rel]


def find_flat(cls):
    """-> (path, text) of the e4 hpp hosting `struct cls {`, else None."""
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


def parse_struct(t, cls):
    """-> (span_start, span_end, members, methods)
    members: list of (name, line_start, line_end, offset_or_None)"""
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
                methods.append(mm.group(1))
            continue
        dm = re.match(r'\s*[\w\* ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;', seg)
        if dm:
            om = re.search(r'//.*?0x([0-9A-Fa-f]+)', seg)
            off = int(om.group(1), 16) if om else None
            members.append((dm.group(1), line_m.start(), line_m.end(), off))
    return sm.start(), end, members, methods


def tree_offset_members(cls):
    """-> {offset_decimal: name} from the tree class body (offset-commented
    semantic data members only)."""
    ent = IDX.get(cls)
    if not ent:
        return {}
    tt = io.open(ROOT / 'src' / ent[0], encoding='utf-8',
                 errors='replace').read()
    m = re.search(r'\b(?:class|struct)\s+' + re.escape(cls) + r'\b[^;{=]*\{', tt)
    if not m:
        return {}
    end = cut(tt, m.start())
    if end < 0:
        return {}
    out = {}
    for line_m in re.finditer(r'^[^\n]*;', tt[m.start():end], re.M):
        seg = line_m.group(0)
        if '(' in seg.split('//')[0]:
            continue
        dm = re.match(r'\s*[\w\* ]+?\b(\w+)\s*(\[[^\]]*\])?\s*;', seg)
        om = re.search(r'//\s*0x([0-9A-Fa-f]+)', seg)
        if dm and om:
            out[int(om.group(1), 16)] = dm.group(1)
    return out


def token_usage(tok):
    """-> dict(files=[(path, [occ lines])], decl_count, used_count)
    used_count counts word-boundary occurrences NOT on a declaration line."""
    if tok in _USAGE_CACHE:
        return _USAGE_CACHE[tok]
    word = re.compile(r'\b' + re.escape(tok) + r'\b')
    decl_l = re.compile(r'^\s*[\w\*\s]+?\b' + re.escape(tok) +
                        r'\s*(\[[^\]]*\])?\s*;')
    call_l = re.compile(r'\b' + re.escape(tok) + r'\s*\(')
    files, decl, used = [], 0, 0
    for p, t in e4_files():
        if tok not in t:
            continue
        lines = []
        for i, l in enumerate(t.split('\n')):
            if not word.search(l):
                continue
            if decl_l.match(l):
                decl += 1
            elif call_l.search(l.split('//')[0]):
                used += 2  # token used as callee -> ambiguous, treat used
                lines.append(i)
            else:
                used += 1
                lines.append(i)
        if lines:
            files.append((p, lines))
    r = {'files': files, 'decl_count': decl, 'used_count': used}
    _USAGE_CACHE[tok] = r
    return r


def bad_name(name, cls, tn):
    return bool(GEN.match(name) or name.startswith(cls + '_')
                or name not in tn)


def main():
    report = {}
    # pass 1: analysis (no edits)
    plans = []
    for cls in DUAL:
        r = find_flat(cls)
        if not r:
            report[cls] = {'action': 'no-flat-struct'}
            continue
        hp, t = r
        if 'G42.55 absorbed' in t:
            report[cls] = {'action': 'already-absorbed'}
            continue
        ent = IDX.get(cls)
        if not ent:
            report[cls] = {'action': 'skip', 'reason': 'no-tree-idx'}
            continue
        tn = tree_names(ent[0])
        ps = parse_struct(t, cls)
        if not ps:
            report[cls] = {'action': 'no-flat-struct'}
            continue
        s, e, members, methods = ps
        deletes, renames, used_bad, bad_methods = [], {}, [], []
        toff = tree_offset_members(cls)
        mlk = MLOOK.get(cls, {})
        for name, ls, le, off in members:
            if not bad_name(name, cls, tn):
                continue
            u = token_usage(name)
            if u['used_count'] == 0:
                deletes.append(name)
                continue
            # rename attempt: target by offset
            target = None
            if off is not None:
                cand = toff.get(off)
                if cand and not GEN.match(cand) and \
                        not cand.startswith(cls + '_') and cand in tn and \
                        cand != name:
                    target = cand
                if target is None:
                    m2 = mlk.get(str(off))
                    if m2:
                        n2 = m2.get('name')
                        if n2 and not GEN.match(n2) and \
                                not n2.startswith(cls + '_') and n2 in tn and \
                                n2 != name and off < MAX_SEMANTIC_OFFSET:
                            target = n2
            if target is None:
                used_bad.append(name)
                continue
            # uniqueness: exactly one decl in src/e4 and it is this class's
            own = [m for m in members if m[0] == name]
            if u['decl_count'] != len(own):
                used_bad.append(name)  # declared elsewhere too
                continue
            if any(m[0] == target for m in members):
                used_bad.append(name)  # target name collision in struct
                continue
            renames[name] = target
        for meth in methods:
            if meth not in tn:
                bad_methods.append(meth)
        if used_bad or bad_methods:
            report[cls] = {'action': 'skip',
                           'used_bad_members': used_bad,
                           'methods_not_in_tree': bad_methods}
        else:
            plans.append((cls, hp, deletes, renames))
            report[cls] = {'action': 'clean',
                           'delete': deletes, 'rename': renames}
    # pass 2: apply (deletes within struct span; renames src/e4-wide)
    if APPLY:
        # renames first (word-boundary, whole src/e4)
        all_renames = {}
        for cls, hp, deletes, renames in plans:
            for old, new in renames.items():
                all_renames.setdefault(old, set()).add(new)
        conflict_renames = [o for o, n in all_renames.items() if len(n) > 1]
        n_ren_lines = 0
        for p, t0 in list(e4_files()):
            t = t0
            changed = False
            for old, news in all_renames.items():
                if len(news) > 1:
                    continue
                new = next(iter(news))
                if re.search(r'\b' + re.escape(old) + r'\b', t):
                    t2 = re.sub(r'\b' + re.escape(old) + r'\b', new, t)
                    n_ren_lines += 1
                    t = t2
                    changed = True
            if changed:
                io.open(p, 'w', encoding='utf-8',
                        errors='surrogateescape', newline='').write(t)
        for o in conflict_renames:
            for rec in report.values():
                if rec.get('action') == 'clean' and o in rec.get('rename', {}):
                    rec['action'] = 'skip'
                    rec['reason'] = 'rename-target-conflict'
        # deletes per struct span (re-read files, spans shift after renames)
        for cls, hp, deletes, renames in plans:
            if not deletes:
                continue
            if report[cls]['action'] != 'clean':
                continue
            t = hp.read_text(encoding='utf-8', errors='replace')
            ps = parse_struct(t, cls)
            if not ps:
                continue
            s, e, members, methods = ps
            drop = set(deletes)
            kill = sorted(((ls, le) for name, ls, le, off in members
                           if name in drop), reverse=True)
            for ls, le in kill:
                # extend to whole line(s)
                a = t.rfind('\n', 0, s + ls) + 1
                b = t.find('\n', s + le)
                b = len(t) if b < 0 else b + 1
                t = t[:a] + t[b:]
            hp.write_text(t, encoding='utf-8', errors='surrogateescape',
                          newline='')
            report[cls]['deleted_applied'] = len(kill)
    # summary
    from collections import Counter
    c = Counter(r.get('action') for r in report.values())
    json.dump(_USAGE_CACHE, open(_USAGE_CACHE_PATH, 'w', encoding='utf-8'))
    n_del = sum(len(r.get('delete', [])) for r in report.values())
    n_ren = sum(len(r.get('rename', {})) for r in report.values())
    json.dump(report, open(ROOT / '.omo/g260_map.json', 'w'), indent=1)
    print('classes:', len(report), dict(c))
    print('member deletions planned:', n_del, ' renames planned:', n_ren)
    skipped = [(k, v.get('used_bad_members', [])[:3],
                v.get('methods_not_in_tree', [])[:3])
               for k, v in report.items() if v.get('action') == 'skip']
    print('skipped classes:', len(skipped))
    for k, ub, mt in skipped[:25]:
        print('  SKIP %-38s used_bad=%s methods_missing=%s' % (k, ub, mt))
    print('APPLY' if APPLY else 'DRYRUN', '- report in .omo/g260_map.json')


if __name__ == '__main__':
    main()
