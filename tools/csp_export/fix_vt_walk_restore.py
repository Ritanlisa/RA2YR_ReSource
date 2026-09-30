#!/usr/bin/env python3
"""Restore vintage `*(unsigned int **)this + N` vtable-walk lines from
ida_cache truth (targeted, anchor-keyed — NOT a whole-def rematerialize).

Two historical passes wrote this form with contradictory N semantics
(element vs pre-baked byte); the cache-verbatim form (`this->vtable0 + N`
or a byte walk) is the only unambiguous truth. Line-scoped, idempotent.

Scope: e4, _gap2, system/gap2* corpora.
Usage: python tools/csp_export/fix_vt_walk_restore.py [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys

APPLY = '--apply' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
VT_WALK = re.compile(
    r'\(\s*\*\s*\(\s*unsigned int\s*\*+\s*\)\s*this\s*\+\s*\d+\s*\)')

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]

s = json.load(open('signals.json', encoding='utf-8'))
STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                if isinstance(sym, dict) and sym.get('kind') == 'function')
_cache = {}


def enc(a):
    i = bisect.bisect_right(STARTS, a) - 1
    st = STARTS[i] if i >= 0 else a
    if st in _cache:
        return _cache[st]
    try:
        d = json.load(open('.omo/ida_cache/func_0x%08X.json' % st,
                           encoding='utf-8')).get('decompiled', '')
    except OSError:
        try:
            d = json.load(open('.omo/ida_cache/func_0x%X.json' % st,
                               encoding='utf-8')).get('decompiled', '')
        except OSError:
            d = ''
    _cache[st] = d
    return d


def orig_line(pseudo, anchor_hex):
    if not pseudo:
        return None
    i = pseudo.lower().find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    # statement start: walk BACKWARD from the anchor until an '(' takes
    # the paren depth negative (the statement's outermost opener)
    depth = 0
    start = 0
    for k in range(i - 1, 0, -1):
        ch = pseudo[k]
        if ch == ')':
            depth += 1
        elif ch == '(':
            if depth == 0:
                start = k
                break
            depth -= 1
    # preserve a control keyword prefix (`if (`, `while (`, `return (`)
    kw = re.search(r'\b(if|while|for|switch|return)\s*$', pseudo[:start])
    if kw:
        ls = pseudo.rfind('\n', 0, kw.start()) + 1
        start = ls
    # statement end: forward from start until parens re-balance
    depth = 0
    end = start
    seen = False
    while end < len(pseudo):
        ch = pseudo[end]
        if ch == '(':
            depth += 1
            seen = True
        elif ch == ')':
            depth -= 1
            if seen and depth == 0:
                end += 1
                break
        elif ch == ';' and depth <= 0 and seen:
            end += 1
            break
        elif ch == '\n' and not seen:
            start = end + 1
        end += 1
    ln = pseudo[start:end]
    ln = re.sub(r'/\*0x[0-9a-fA-F]+\*/', '', ln)
    ln = re.sub(r'\s+', ' ', ln).strip()
    if not ln.endswith(';') and not ln.endswith('}') \
            and not ln.endswith(')'):
        ln += ';'
    return ln or None


stats = {'restored': 0, 'no-orig': 0}
files_changed = 0
for p in (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
          + glob.glob('src/system/gap2*.cpp')):
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    changed = False
    for i, ln in enumerate(lines):
        if not VT_WALK.search(ln):
            continue
        am = ANCHOR.search(ln)
        if not am:
            continue
        orig = orig_line(enc(int(am.group(1), 16)), am.group(1))
        if orig is None:
            stats['no-orig'] += 1
            continue
        cand = orig
        for tm, rep in TOKEN_MAP:
            cand = tm.sub(rep, cand)
        # rescale ONLY raw this-arithmetic forms; member forms
        # (`this->vtable0 + N`) stay verbatim (offset-0 member, bytes N)
        sig_head = enc(int(am.group(1), 16)).split('{')[0]
        m2 = re.search(r'\(([^)]*)\)', sig_head)
        first = (m2.group(1).split(',')[0] if m2 else '').strip()
        factor = 1 if re.search(r'\b(int|unsigned int|long)\b(?!.*\*)',
                                first) else 4
        cand = re.sub(r'\*\s*this\s*\+\s*(\d+)\b',
                      lambda m: '*(unsigned int *)this + %d'
                      % (int(m.group(1)) * factor), cand)
        cand = re.sub(r'(?<!\*)(?<!\*\))\bthis\s*\+\s*(\d+)\b',
                      lambda m: '(unsigned int *)this + %d'
                      % (int(m.group(1)) * factor), cand)
        indent = ln[:len(ln) - len(ln.lstrip())]
        tail = ''
        ti = ln.find('//', am.end())
        if ti >= 0:
            tail = ' ' + ln[ti:].strip()
        new = indent + cand + tail
        if new != ln:
            lines[i] = new
            changed = True
            stats['restored'] += 1
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
print('files:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
