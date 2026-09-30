#!/usr/bin/env python3
"""Sync corpus DEF heads (and their header decls) to ida_cache signatures.

Root cause family (C2065 param-name / C2511 / C2671 / C2086 / C2352):
corpus def heads drifted from the cache signature across epochs —
param names renamed (a1 vs aP1), arity extended by max-arity fixers on the
DECL side only, or cache-verbatim qualified calls left in remat bodies.

Repair, per def:
  * cache signature -> param list (types TOKEN_MAPped, this-param dropped
    for member defs when the corpus head has one fewer param);
  * corpus def head rewritten to those params (keep corpus return type and
    Cls::Name spelling — only the parameter block changes);
  * the header decl in the TU's own flat header (src/e4/classes/X_e4.hpp)
    rewritten to the same parameter block.

Only defs whose CURRENT head differs from the cache-derived expectation
are touched. Corpus scope: src/e4, src/_gap2, src/system/gap2*, src/misc.

Usage: python tools/csp_export/fix_def_heads_from_cache.py [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
DEF_HEAD = re.compile(r'^([^/]*?)\b([A-Za-z_]\w*)::\s*(~?\w+)\s*\(([^)]*)\)')

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b__stdcall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]

s = json.load(open('signals.json', encoding='utf-8'))
STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                if isinstance(sym, dict) and sym.get('kind') == 'function')
_cache = {}


def enc_cache(a):
    i = bisect.bisect_right(STARTS, a) - 1
    st = STARTS[i] if i >= 0 else a
    if st in _cache:
        return _cache[st]
    try:
        dec = json.load(open('.omo/ida_cache/func_0x%X.json' % st,
                             encoding='utf-8')).get('decompiled', '')
    except OSError:
        dec = ''
    _cache[st] = dec
    return dec


def cache_params_sig(sig_head):
    m = re.search(r'\(([^)]*)\)', sig_head)
    if not m:
        return None, None
    inner = m.group(1)
    params = []
    for tok in inner.split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        if not pm:
            return None, None
        name = pm.group(1)
        ptype = tok[:tok.rfind(name)].strip()
        for tm, rep in TOKEN_MAP:
            ptype = tm.sub(rep, ptype)
        if not ptype or ptype == name:
            ptype = 'int'
        params.append((ptype, name))
    return params, ('__thiscall' in sig_head)


def split_head_params(params_str):
    out = []
    for tok in params_str.split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(=\s*[^,]*)?$', tok)
        out.append(tok if pm else None)
    return out


stats = {}
files_changed = 0
shown = [0]
files = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
         + glob.glob('src/system/gap2*.cpp') + ['src/misc/misc_ext.cpp'])
files = [f for f in files if 'e4_static_stubs' not in f]
for p in files:
    if not os.path.exists(p):
        continue
    raw = open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    out = list(lines)
    touched = False
    header_decls = {}   # (cls, mth) -> new decl (lazy-applied to flat hpp)
    for i, ln in enumerate(lines):
        hm = DEF_HEAD.search(ln)
        if not hm or '{' not in ln:
            continue
        cls, mth = hm.group(2), hm.group(3)
        addr = None
        for k in (i - 1, i - 2):
            if 0 <= k < len(lines):
                am = re.search(r'//\s*0x([0-9a-fA-F]+)', lines[k])
                if am:
                    addr = int(am.group(1), 16)
                    break
        if addr is None:
            continue
        dec = enc_cache(addr)
        if not dec:
            continue
        sig_head = dec[:dec.find('{')]
        if not sig_head:
            continue
        params, is_thiscall = cache_params_sig(sig_head)
        if params is None:
            continue
        cur = [x for x in split_head_params(hm.group(4)) if x is not None]
        cur_n = [re.search(r'([A-Za-z_]\w*)\s*(?:\[|\s*=|$)', t).group(1)
                 for t in cur]
        src = params
        # drop the cache's leading param when it IS the this keyword AND the
        # corpus head has one fewer param (member def, implicit this).
        # A NAMED alias param (Block) with equal counts is a legit demoted
        # form and is kept positionally.
        if (is_thiscall and params and params[0][1] == 'this'
                and len(cur_n) == len(params) - 1):
            src = params[1:]
        if [x[1] for x in src] == cur_n and len(src) == len(cur_n):
            continue                   # already in sync
        # body param rename: old head names -> cache names (word-boundary,
        # within this def's brace-matched span)
        new_param_str = ', '.join('%s %s' % (t, n) for t, n in src)
        new_head = ln[:hm.start(4)] + new_param_str + ln[hm.end(4):]
        out[i] = new_head
        touched = True
        stats['def-head'] = stats.get('def-head', 0) + 1
        # rename map over the body span
        d = 0
        j = i
        while j < len(out) and j < i + 4000:
            d += out[j].count('{') - out[j].count('}')
            if j > i and d <= 0:
                break
            j += 1
        pairs = [(o, n[1]) for o, n in zip(cur_n, src) if o != n[1]]
        for old, new in pairs:
            for k in range(i + 1, j):
                if re.search(r'\b%s\b' % re.escape(old), out[k]):
                    out[k] = re.sub(r'\b%s\b' % re.escape(old), new, out[k])
                    stats['body-rename'] = stats.get('body-rename', 0) + 1
        header_decls[(cls, mth.lstrip('~'))] = '%s %s(%s);' % (
            ln[:hm.start(1)].strip(), mth, new_param_str)
        if SAMPLE and shown[0] < 8:
            shown[0] += 1
            print('--- %s:%d' % (p, i + 1))
            print('OLD: ' + ln.strip()[:120])
            print('NEW: ' + new_head.strip()[:120])
    # sync header decls in the TU's own flat headers
    if header_decls:
        for ln2 in lines[:60]:
            im = re.search(r'#include\s+"e4/classes/(\w+)_e4\.hpp"', ln2)
            if not im:
                continue
            hpp = 'src/e4/classes/%s_e4.hpp' % im.group(1)
            if not os.path.exists(hpp):
                continue
            htxt = open(hpp, encoding='utf-8', errors='replace').read()
            hlines = htxt.split('\n')
            hchanged = False
            for hi, hl in enumerate(hlines):
                dm = re.search(r'[\w\s\*&]+\b(~?\w+)\s*\(', hl)
                if not dm or 'class' in hl or 'struct' in hl:
                    continue
                key = None
                for (cls, mth) in header_decls:
                    if dm.group(1) == mth:
                        key = (cls, mth)
                        break
                if not key:
                    continue
                ret = hl[:dm.start(1)].rstrip()
                # keep the address comment tail if present
                tail = ''
                ci = hl.find('//')
                if ci >= 0:
                    tail = '  ' + hl[ci:].strip()
                hlines[hi] = '%s %s' % (ret.rstrip(), header_decls[key].split(' ', 1)[1]) + tail
                hchanged = True
                stats['hdr-decl'] = stats.get('hdr-decl', 0) + 1
            if hchanged and APPLY:
                open(hpp, 'w', encoding='utf-8',
                     newline='').write('\n'.join(hlines))
            break
    if touched:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(out))
print('files changed:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
