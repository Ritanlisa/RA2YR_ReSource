#!/usr/bin/env python3
"""Restore stale-epoch corpus body lines from ida_cache truth. (v2)

Detection — ALL must hold for a line to be restored:
  1. the line carries a /*0xADDR*/ anchor;
  2. it references a VALUE member access `RECV->Name` (NOT a method call —
     `Name(` excluded) through a this-like receiver: `this`, or the def's
     first param WHEN that param name equals the ida_cache signature's own
     first param (the Hex-Rays this-alias that the corpus copied verbatim);
  3. that member Name is not declared by any e4 flat header the TU includes.

Repair: replace the line with the cache original (token-mapped), then
scale-normalise bare `this + N` arithmetic for MEMBER defs (corpus `this` is
a typed struct pointer, IDA's `this` is dword-scaled):
     `*(this + N)`        -> `*(unsigned int *)((char *)this + 4N)`
     `(this + N)` (bare)  -> `((char *)this + 4N)`
Lines whose cache original still contains an unmapped CRT mangled name
(`__2_YAPAXI_Z` style) are SKIPPED (keep the corpus macro form).

Usage: python tools/csp_export/fix_restore_stale_bodies.py [--apply]
"""
import glob
import json
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')
DEF_HEAD = re.compile(r'^[^/]*?\b([A-Za-z_]\w*)::\s*~?\w+\s*\(([^)]*)\)')
VALUE_MEMBER = re.compile(r'\b(?:this|([A-Za-z_]\w*))\s*->\s*'
                          r'([A-Za-z_]\w+)(?!\w)(?!\s*\()')

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]
CRT_MANGLED = re.compile(r'\b__\w+_[YZAH]X?\w*(_Z|_K|_Q)?\s*\(')

INC_RE = re.compile(r'#include\s+"e4/classes/(\w+)_e4\.hpp"')
STRUCT_RE = re.compile(r'(?:class|struct)\s+(\w+)\s*\{(.*?)\n\};', re.S)
MEMBER_RE = re.compile(r'^\s*[#A-Za-z_].*?[\s\*](\w+)\s*(?:\[[^\]]*\])?\s*;'
                       r'(?:\s*\(|\s*//|$)', re.M)

_FUNC_STARTS = None
_CACHE = {}


def func_starts():
    global _FUNC_STARTS
    if _FUNC_STARTS is None:
        import bisect
        s = json.load(open('signals.json', encoding='utf-8'))
        _FUNC_STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                              if isinstance(sym, dict)
                              and sym.get('kind') == 'function')
    return _FUNC_STARTS


def enclosing_cache(addr_int):
    import bisect
    starts = func_starts()
    i = bisect.bisect_right(starts, addr_int) - 1
    start = starts[i] if i >= 0 else addr_int
    if start in _CACHE:
        return _CACHE[start]
    try:
        dec = json.load(open('.omo/ida_cache/func_0x%X.json' % start,
                             encoding='utf-8')).get('decompiled', '')
    except OSError:
        dec = ''
    _CACHE[start] = dec
    return dec


def orig_line_at(pseudo, anchor_hex):
    if not pseudo:
        return None
    low = pseudo.lower()
    i = low.find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    line = pseudo[pseudo.rfind('\n', 0, i) + 1:pseudo.find('\n', i)]
    line = line.split('/*')[0].rstrip()
    return line or None


def cache_first_param(pseudo):
    if not pseudo:
        return None
    head = pseudo.split('{', 1)[0]
    m = re.search(r'\(([^)]*)\)', head)
    if not m:
        return None
    pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$',
                   m.group(1).split(',')[0].strip())
    return pm.group(1) if pm else None


def declared_for_class(cls):
    """Members declared by the def's OWN flat header (per-class, NOT the
    TU union). Returns None when the class has no flat header at all —
    then detection is skipped (restore-all would be too aggressive)."""
    if cls in _CLS_DECL:
        return _CLS_DECL[cls]
    names = set()
    hpp = 'src/e4/classes/%s_e4.hpp' % cls
    if not os.path.exists(hpp):
        _CLS_DECL[cls] = None
        return None
    txt = open(hpp, encoding='utf-8', errors='replace').read()
    for sm in STRUCT_RE.finditer(txt):
        for mm in MEMBER_RE.finditer(sm.group(2)):
            names.add(mm.group(1))
        for wm in re.finditer(r'\b(\w+)\s*\(', sm.group(2)):
            names.add(wm.group(1))
    _CLS_DECL[cls] = names
    return names


_CLS_DECL = {}


def first_param(params):
    if not params or not params.strip():
        return None
    m = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$',
                  params.split(',')[0].strip())
    return m.group(1) if m else None


_BARE_THIS_DEREF = re.compile(r'\*\s*\(\s*this\s*\+\s*(\d+)\s*\)')
_VT_THIS_WALK = re.compile(r'\*\s*this\s*\+\s*(\d+)\b')
_BARE_THIS_PLUS = re.compile(r'(?<!\*)(?<!\*\))\bthis\s*\+\s*(\d+)\b')
# element type of the enclosing def's this (byte-typed this = x1 scale,
# dword = x4). The extractor reads the SAME scale from the cast, so the
# cast-inline form `*((ELEM *)this + N)` is event-exact for either.


def this_elem_of(pseudo):
    """element type for bare `this + N` scaling: byte for `_BYTE *` /
    `char *` / INT-typed this (address-by-value), dword otherwise."""
    if not pseudo:
        return 'unsigned int'
    head = pseudo.split('{', 1)[0]
    m = re.search(r'\(([^)]*)\)', head)
    first = (m.group(1).split(',')[0] if m else '').strip()
    m2 = re.search(r'([A-Za-z_][\w ]*?)\s*\*?\s*([A-Za-z_]\w*)\s*$', first)
    ptype = (m2.group(1).strip() if m2 else first)
    if not ptype.endswith('*') and re.match(
            r'^(int|unsigned int|long|unsigned long|__int32)$', ptype):
        return 'char'
    if re.search(r'_BYTE|unsigned\s+char|char\s*\*', first):
        return 'unsigned char'
    return 'unsigned int'


def scale_this_arith(stmt, elem='unsigned int'):
    stmt = _VT_THIS_WALK.sub(
        lambda m: '*(unsigned int **)this + %d' % int(m.group(1)), stmt)
    stmt = _BARE_THIS_DEREF.sub(
        lambda m: '*((%s *)this + %d)' % (elem, int(m.group(1))), stmt)
    stmt = _BARE_THIS_PLUS.sub(
        lambda m: '(%s *)this + %d' % (elem, int(m.group(1))), stmt)
    return stmt


_ARITH_CACHE = re.compile(
    r'\*\s*\(\s*(?:\([A-Za-z_][\w ]*\s*\*\s*\)\s*)?'
    r'(this|[A-Za-z_]\w*)\s*\+\s*\d+')


def cache_renders_arith(orig, fp_candidates):
    """True when the cache line renders the access as RAW POINTER
    ARITHMETIC on a this-like ident (`*(this + 25)`, `*(Block + 3)`) --
    i.e. the member is UNNAMED in the typed export, so a corpus member
    NAME here belongs to a stale epoch with unreliable offsets."""
    if not orig:
        return False
    for am in _ARITH_CACHE.finditer(orig):
        if am.group(1) in fp_candidates:
            return True
    return False


stats = Counter()
files_changed = 0
shown = [0]
targets = sorted(glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
                 + glob.glob('src/system/gap2*.cpp'))
for p in targets:
    is_e4 = p.replace(chr(92), '/').startswith('src/e4/')
    raw = open(p, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    cls = None
    fpar = None
    cfpar = None
    elem = 'unsigned int'
    out = []
    changed = False
    for i, ln in enumerate(lines):
        hm = DEF_HEAD.search(ln)
        if hm:
            cls = hm.group(1)
            fpar = first_param(hm.group(2))
            cfpar = None
            elem = 'unsigned int'
            for j in (i - 1, i - 2):
                if 0 <= j < len(lines):
                    am2 = re.search(r'//\s*0x([0-9a-fA-F]+)', lines[j])
                    if am2:
                        _dec = enclosing_cache(int(am2.group(1), 16))
                        cfpar = cache_first_param(_dec)
                        elem = this_elem_of(_dec)
                        break
        new = ln
        am = ANCHOR.search(ln)
        if am and cls:
            names = declared_for_class(cls) if is_e4 else None
            bad = False
            if names is not None:
                for rm in VALUE_MEMBER.finditer(ln):
                    recv, mem = rm.group(1), rm.group(2)
                    if mem in names:
                        continue
                    if recv is None or recv == 'this':
                        bad = True
                        break
                    if recv == fpar and fpar is not None and fpar == cfpar:
                        bad = True
                        break
            if not bad:
                # gap2 (or header-less e4 class): the cache's own rendering
                # decides -- raw pointer arithmetic on a this-like ident
                # means the member is UNNAMED in truth; a corpus member
                # NAME here is a stale epoch with unreliable offsets.
                if VALUE_MEMBER.search(ln):
                    orig_peek = orig_line_at(
                        enclosing_cache(int(am.group(1), 16)), am.group(1))
                    cands = {'this'}
                    for c in (fpar, cfpar):
                        if c:
                            cands.add(c)
                    if cache_renders_arith(orig_peek, cands):
                        bad = True
                        stats['arith-detect'] += 1
            if bad:
                orig = orig_line_at(enclosing_cache(int(am.group(1), 16)),
                                    am.group(1))
                if orig is None:
                    stats['no-orig'] += 1
                elif CRT_MANGLED.search(orig):
                    stats['crt-skip'] += 1
                else:
                    cand = orig
                    for tm, rep in TOKEN_MAP:
                        cand = tm.sub(rep, cand)
                    cand = scale_this_arith(cand, elem)
                    indent = ln[:len(ln) - len(ln.lstrip())]
                    tail = ''
                    ti = ln.find('//', am.end())
                    if ti >= 0:
                        tail = ' ' + ln[ti:].strip()
                    new = indent + cand + tail
                    if new != ln:
                        changed = True
                        stats['restored'] += 1
                        if SAMPLE and shown[0] < 10:
                            shown[0] += 1
                            print('--- %s' % p)
                            print('OLD: ' + ln.strip()[:140])
                            print('NEW: ' + new.strip()[:140])
                    else:
                        stats['already'] += 1
        out.append(new)
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(out))
print('files changed:', files_changed)
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
