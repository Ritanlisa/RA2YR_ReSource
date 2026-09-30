#!/usr/bin/env python3
"""Re-materialize DAMAGED corpus def bodies from ida_cache (whole-def).

Damage being repaired: the G41 line-restorer injected complete single-line
statements into multi-line statements (orphaned continuations, duplicated
anchors) and applied a hard x4 dword scale to bare `this + N` arithmetic
regardless of the function's actual this-type (`_BYTE *this` is x1).

Repair is whole-def and deterministic:
  * def head (corpus signature) is KEPT as-is -- compile state unchanged;
  * the body is rebuilt from the cache's OWN multi-line decompilation
    (self-consistent structure, anchors inline);
  * cache param names are mapped positionally onto the corpus head's
    param names (the body references stay consistent with the head);
  * bare `this + N` / `*(this + N)` arithmetic is scaled by the cache
    signature's OWN this-type (byte-scale for `_BYTE *this`/`char *this`,
    dword otherwise) and rewritten as
        `*(ELEM *)((char *)this + N*scale)`  /  `((char *)this + N*scale)`
    so the corpus member-def's typed `this` observes the same address.

Targets: defs whose anchor multiset has EXTRAS vs the cache (the
duplication marker). Optional --all-defs for every def in scope files.

Usage: python tools/csp_export/rematerialize_defs.py [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
ALL_DEFS = '--all-defs' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
DEF_HEAD = re.compile(r'^[^/]*?\b([A-Za-z_]\w*)::\s*~?\w+\s*\(([^)]*)\)')

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


def cache_params(sig_head):
    m = re.search(r'\(([^)]*)\)', sig_head)
    if not m:
        return []
    out = []
    for tok in m.group(1).split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        out.append(pm.group(1) if pm else None)
    return out


def this_scale(sig_head):
    """(factor, elem_type) from the cache signature's first param type."""
    m = re.search(r'\(([^)]*)\)', sig_head)
    first = (m.group(1).split(',')[0] if m else '').strip()
    if re.search(r'_BYTE|unsigned\s+char|char\s*\*', first):
        return 1, 'unsigned char'
    return 4, 'unsigned int'


def scale_body(body, factor, elem):
    # cast-INLINE form: `*((ELEM *)this + N)` -- N scales by sizeof(ELEM)
    # implicitly (= the IDA `this + N` element scale), compiler-legal on a
    # typed corpus `this`, and extractor-native (G39/G40.3 vocabulary).
    body = re.sub(
        r'\*\s*\(\s*this\s*\+\s*(\d+)\s*\)',
        lambda m: '*((%s *)this + %d)' % (elem, int(m.group(1))),
        body)
    body = re.sub(
        r'(?<!\*\))\bthis\s*\+\s*(\d+)\b',
        lambda m: '(%s *)this + %d' % (elem, int(m.group(1))),
        body)
    return body


def normalize_double_cast(text):
    """`*(T *)((char *)this + N)` -> `*((T *)this + N/sizeof(T))` -- the
    double-cast walks BYTES via (char*); the folded form scales N by
    sizeof(T) itself, so N must divide back. Non-divisible N (sub-element
    access) keeps the double-cast form (extractor inner-match handles it)."""
    sizes = {'unsigned char': 1, 'char': 1, 'unsigned short': 2, 'short': 2,
             'unsigned int': 4, 'int': 4, 'long long': 8,
             'unsigned long long': 8}

    def _fold(m):
        t, n = m.group(1), int(m.group(2))
        sz = sizes.get(t, 4)
        if n % sz:
            return m.group(0)
        return '*((%s *)this + %d)' % (t, n // sz)

    return re.sub(
        r'\*\s*\(\s*(unsigned char|unsigned int|unsigned short|'
        r'unsigned long long|int|char|short|long long)\s*\*\s*\)\s*'
        r'\(\s*\(char \*\)this \+ (\d+)\s*\)',
        _fold, text)


def param_rename(body, cache_names, corpus_names, cache_is_member):
    pairs = []
    cn = list(corpus_names)
    src = cache_names[1:] if cache_is_member else cache_names
    for k, c in enumerate(src):
        if k < len(cn) and c and cn[k] and c != cn[k]:
            pairs.append((c, cn[k]))
    for old, new in pairs:
        body = re.sub(r'\b%s\b' % re.escape(old), new, body)
    return body


def corpus_params(head_params):
    out = []
    for tok in head_params.split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        out.append(pm.group(1) if pm else None)
    return out


stats = Counter()
files_changed = 0
files = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
         + glob.glob('src/system/gap2*.cpp'))
for p in files:
    raw = open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    out = list(lines)
    touched = False
    i = 0
    while i < len(lines):
        hm = DEF_HEAD.search(lines[i])
        if not hm or '{' not in lines[i]:
            i += 1
            continue
        d = 0
        j = i
        closed = False
        while j < len(lines) and j < i + 4000:
            d += lines[j].count('{') - lines[j].count('}')
            if j > i and d <= 0:
                closed = True
                break
            j += 1
        if not closed:
            i += 1
            continue
        block = lines[i:j + 1]
        addr = None
        for k in (i - 1, i - 2):
            if 0 <= k < len(lines):
                am = re.search(r'//\s*0x([0-9a-fA-F]+)', lines[k])
                if am:
                    addr = int(am.group(1), 16)
                    break
        if addr is not None:
            dec = enc_cache(addr)
            want = Counter(a.lower() for a in ANCHOR.findall(dec)) if dec else None
            got = Counter(a.lower() for a in ANCHOR.findall('\n'.join(block)))
            # extras = duplicated anchors (statement-interleave damage);
            # missing (with a non-empty body -- stubs carry none by design)
            # = anchorless v6-restored lines / prior-epoch anchor loss.
            damaged = bool(want and got and want != got)
            if dec and (ALL_DEFS or damaged):
                sig_end = dec.find('{')
                if sig_end > 0:
                    sig_head = dec[:sig_end]
                    body = dec[sig_end + 1:dec.rfind('}')]
                    for tm, rep in TOKEN_MAP:
                        body = tm.sub(rep, body)
                    cparams = cache_params(sig_head)
                    cparams_n = [x for x in cparams if x]
                    corpus_p = corpus_params(hm.group(2))
                    corpus_n = [x for x in corpus_p if x]
                    # member def (implicit this): corpus has one FEWER param
                    # than the cache signature -> skip the cache's this-param.
                    # demoted-this def: counts EQUAL -> map all positionally.
                    skip_this = ('__thiscall' in sig_head
                                 and len(corpus_n) == len(cparams_n) - 1)
                    src = cparams[1:] if skip_this else cparams
                    factor, elem = this_scale(sig_head)
                    body = param_rename(body, src, corpus_p, False)
                    if skip_this or '__thiscall' not in sig_head:
                        if skip_this:
                            factor, elem = this_scale(sig_head)
                            body = scale_body(body, factor, elem)
                    body = normalize_double_cast(body)
                    # re-indent: normalize trailing spaces, keep cache indents
                    new_block = [lines[i]] + body.split('\n')
                    # ensure the closing brace line
                    if new_block[-1].strip():
                        new_block.append('}')
                    else:
                        new_block[-1] = '}'
                    for k2 in range(i, j + 1):
                        out[k2] = None
                    out[i] = '\n'.join([lines[i]] + body.split('\n')) + '\n}'
                    touched = True
                    stats['remat' if damaged else 'remat-all'] += 1
        i = j + 1
    if touched or True:
        final = [x for x in out if x is not None]
        text2 = normalize_double_cast('\n'.join(final))
        if text2 != raw or touched:
            files_changed += 1
            if APPLY:
                open(p, 'w', encoding='utf-8', newline='').write(text2)
print('files changed:', files_changed)
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
