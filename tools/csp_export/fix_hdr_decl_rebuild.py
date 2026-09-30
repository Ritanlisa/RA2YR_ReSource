#!/usr/bin/env python3
"""Rebuild corrupted flat-header DECL parameter lists from ida_cache truth.

Damage forms repaired (src/e4/classes/*.hpp decl lines with // 0xADDR):
  * literal `this` as a parameter (`char F(void * this, unsigned int * a2);`)
  * fused return type (`HWNDReleaseCapture(unsigned char * this);`)
  * line-splice residue (`char RemoveAt(int a2);nt a2, unsigned int * a3);`)

Repair policy (def/header consistency first):
  * the line's OWN return type is KEPT (a ret swap would mismatch the cpp
    def -> C2560); fusion is repaired by splitting known type-words;
  * the PARAM LIST is rebuilt from the cache signature (this-keyword
    dropped, class-typed params downgraded by _safe_type -- identical to
    the def-head sync, so decl/def param types always agree);
  * no parseable cache sig -> line untouched (fail-closed);
  * second+ anchored decls of the same name in one file -> commented out.

Scope guard: src/e4/classes/*.hpp only. Idempotent.

Usage: python tools/csp_export/fix_hdr_decl_rebuild.py [--apply]
       SAMPLE=1 prints up to 12 before/after pairs.
"""
import glob
import json
import bisect
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
ANCHOR_RE = re.compile(r'//\s*0x([0-9A-Fa-f]+)')
DECL_RE = re.compile(
    r'^(\s*)((?:[A-Za-z_][\w:<>,\s\*&]*?)?)\b([A-Za-z_][\w]*)\s*'
    r'\(([^;()]*)\)\s*;(.*)$')

TOKEN_MAP = [
    (re.compile(r'\b__thiscall\s+'), ''),
    (re.compile(r'\b__stdcall\s+'), ''),
    (re.compile(r'\b__cdecl\s+'), ''),
    (re.compile(r'\b_DWORD\b'), 'unsigned int'),
    (re.compile(r'\b_BYTE\b'), 'unsigned char'),
    (re.compile(r'\b_WORD\b'), 'unsigned short'),
    (re.compile(r'\b_QWORD\b'), 'unsigned long long'),
]

_SCALARS = ('int', 'char', 'void', 'bool', 'float', 'double', 'long',
            'short', 'unsigned', 'signed', '__int8', '__int16', '__int32',
            '__int64', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
            'int8_t', 'int16_t', 'int32_t', 'int64_t', 'HWND', 'BOOL',
            'DWORD', 'UINT', 'BYTE', 'WORD', 'HANDLE', 'LONG', 'LPVOID',
            'CRITICAL_SECTION', 'SIZE_T', 'time_t', 'SOCKET')
_TYPE_WORDS = ('HWND', 'BOOL', 'DWORD', 'UINT', 'BYTE', 'WORD', 'HANDLE',
               'LONG', 'LPVOID', 'ULONG', 'LRESULT', 'HRESULT', 'ATOM',
               'WPARAM', 'LPARAM', 'int', 'char', 'void', 'bool', 'double',
               'float', 'long', 'short')

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


def _safe_type(ptype):
    base = ptype.replace('*', ' ').strip()
    words = base.split()
    if words and all(w in _SCALARS for w in words):
        return ptype
    return 'void *' if '*' in ptype else 'int'


def cache_params(dec):
    if not dec or '{' not in dec:
        return None
    head = dec[:dec.find('{')].strip()
    m = re.search(r'\(([^)]*)\)', head)
    if not m:
        return None
    params = []
    for tok in m.group(1).split(','):
        tok = tok.strip()
        if not tok:
            continue
        pm = re.search(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', tok)
        if not pm:
            return None
        name = pm.group(1)
        if name == 'this':
            continue
        ptype = tok[:tok.rfind(name)].strip()
        for tm, rep in TOKEN_MAP:
            ptype = tm.sub(rep, ptype)
        params.append('%s %s' % (_safe_type(ptype or 'int'), name))
    return params


def split_fused_ret(name):
    """`HWNDReleaseCapture` / `SHORTGetKeyState` -> type + method name
    (ALL-CAPS type prefix + CamelCase remainder). Names with `_` are
    NEVER split (COMStub_5 / decompile-suffixed cache names are real)."""
    if '_' in name:
        return None
    m = re.match(r'^([A-Z][A-Z0-9_]{2,})([A-Z][a-z]\w*)$', name)
    if m:
        return m.group(1), m.group(2)
    return None


stats = Counter()
files_changed = 0
shown = [0]
for hp in sorted(glob.glob('src/e4/classes/*.hpp')):
    raw = open(hp, encoding='utf-8', errors='replace').read()
    lines = raw.split('\n')
    out = list(lines)
    changed = False
    # member-vs-method collision: an anchored METHOD decl outranks a same-
    # named DATA MEMBER (the method carries the binary address; the member
    # is a census artifact). Comment the member out.
    method_names = set()
    for ln in lines:
        dm = DECL_RE.match(ln)
        if dm and ANCHOR_RE.search(ln):
            method_names.add(dm.group(3))
    MEMBER_RE = re.compile(r'^(\s*)([\w\s\*&:<>,]+?)\b([A-Za-z_]\w*)\s*;')
    for i, ln in enumerate(out):
        if ANCHOR_RE.search(ln):
            continue          # members carry no anchor
        mm = MEMBER_RE.match(ln)
        if not mm:
            continue
        s = ln.strip()
        if '(' in s or s.startswith('//') or s.startswith('#') or \
                s.startswith('}'):
            continue
        if mm.group(3) in method_names:
            out[i] = mm.group(1) + '// dup-member: ' + s
            changed = True
            stats['member-yield'] += 1
    # dup pass first: second+ anchored decls of same name -> comment out
    seen = set()
    for i, ln in enumerate(out):
        dm = DECL_RE.match(ln)
        if not dm or not ANCHOR_RE.search(ln):
            continue
        nm = dm.group(3)
        if nm in seen:
            out[i] = dm.group(1) + '// dup: ' + ln.strip()
            changed = True
            stats['dup-comment'] += 1
        seen.add(nm)
    for i, ln in enumerate(out):
        dm = DECL_RE.match(ln)
        if not dm:
            continue
        # --- cache-free pre-repairs (anchor-less corrupt lines) ---------
        # P1: drop an illegal literal-`this` parameter from any decl line
        if re.search(r'\([^()]*\bthis\b[^()]*\)', ln):
            new_ln = re.sub(r',?\s*\b[\w\s\*&]*\bthis\b(?=\s*[,)])', '', ln)
            new_ln = re.sub(r'\(\s*,', '(', new_ln)
            if new_ln != ln:
                out[i] = new_ln
                changed = True
                stats['this-param'] += 1
                ln = new_ln
                dm = DECL_RE.match(ln)
                if not dm:
                    continue
        # P2: splice residue — statement-ender followed by non-comment
        # junk that itself contains parens (`char F(int a);nt a2, x);`)
        m2 = re.match(r'^([^/]*\)\s*;)([^/].*\).*)$', ln)
        if m2:
            out[i] = m2.group(1)
            changed = True
            stats['splice-cut'] += 1
            ln = m2.group(1)
            dm = DECL_RE.match(ln)
            if not dm:
                continue
        # P3: duplicated decl text on one line (`...aP1);unsigned int * Copy...aP1);`)
        if ln.count(';') >= 2 and '//' not in ln.split(';')[0]:
            first = ln.find(';')
            out[i] = ln[:first + 1]
            changed = True
            stats['dup-line-cut'] += 1
            ln = out[i]
            dm = DECL_RE.match(ln)
            if not dm:
                continue
        # P4: fused-type garbage in the decl head (`void Desvoidvoid
        # Destroy();`) — an ident embedding a doubled type keyword is
        # unresolvable garbage; the line yields (commented out).
        gm = re.search(r'\b[A-Za-z_]\w*(?:void|char|int|bool|long|short)'
                       r'(?:void|char|int|bool|long|short)\w*'
                       r'\s+[A-Za-z_]\w*\s*\(', ln)
        if gm:
            out[i] = dm.group(1) + '// fused-garbage: ' + ln.strip()
            changed = True
            stats['garbage-yield'] += 1
            continue
        am = ANCHOR_RE.search(ln)
        if not am:
            continue
        name = dm.group(3)
        # fusion repair on the ret+name head
        fused = split_fused_ret(name)
        if fused and '(' in ln:
            new_ln = '%s%s %s(%s);' % (dm.group(1), fused[0], fused[1],
                                       dm.group(4))
            tail_i = ln.find('//')
            if tail_i >= 0:
                new_ln += '  ' + ln[tail_i:].strip()
            out[i] = new_ln
            changed = True
            stats['fused-split'] += 1
            continue
        params = cache_params(enc_cache(int(am.group(1), 16)))
        if not params:
            stats['no-sig'] += 1
            continue
        pstr = ', '.join(params)
        ret_head = dm.group(2).strip()
        new = '%s%s %s(%s);  %s' % (
            dm.group(1), (ret_head + ' ') if ret_head else '',
            name, pstr, am.group(0))
        if new.rstrip() != ln.rstrip():
            out[i] = new
            changed = True
            stats['rebuilt'] += 1
            if SAMPLE and shown[0] < 12:
                shown[0] += 1
                print('--- %s:%d' % (hp, i + 1))
                print('OLD: ' + ln.strip()[:120])
                print('NEW: ' + new.strip()[:120])
    if changed:
        files_changed += 1
        if APPLY:
            open(hp, 'w', encoding='utf-8', newline='').write('\n'.join(out))

# ---- P5 (TU-level): declaring-header include supply into e4_globals ----
# Headers only ever compile inside a TU, and every e4 TU includes
# e4/e4_globals.hpp FIRST — so one include there makes an infra type
# (CellStruct via core/math.hpp) visible everywhere without touching 143
# class headers (header-level includes collide dual-context: C2523).
TYPE_TOKEN = re.compile(r'\b([A-Z][A-Za-z0-9_]*)\s*\*')
DECLARING = {}
for _hp in glob.glob('src/**/*.h*', recursive=True):
    if 'build' in _hp.split(os.sep):
        continue
    try:
        _t = open(_hp, encoding='utf-8', errors='replace').read()
    except OSError:
        continue
    for m in re.finditer(r'\b(?:class|struct)\s+([A-Za-z_]\w*)\s*(?:;|\{)|'
                         r'\busing\s+([A-Za-z_]\w*)\s*=', _t):
        nm = m.group(1) or m.group(2)
        DECLARING.setdefault(nm, _hp.replace(chr(92), '/'))
GH = 'src/e4/e4_globals.hpp'
# OFF by default: infra headers included into e4 TUs collide dual-universe
# (C2011). Only run with TU_INC_SUPPLY=1 after a dedicated adjudication.
if os.environ.get('TU_INC_SUPPLY') and os.path.exists(GH):
    gtxt = open(GH, encoding='utf-8', errors='replace').read()
    used = set()
    for hp in glob.glob('src/e4/classes/*.hpp'):
        for tm in TYPE_TOKEN.finditer(open(hp, encoding='utf-8',
                                           errors='replace').read()):
            t = tm.group(1)
            if t in _SCALARS:
                continue
            dh = DECLARING.get(t)
            if dh and ('core/' in dh or 'system/' in dh):
                used.add(dh)
    have_inc = set(re.findall(r'#include\s+"([^"]+)"', gtxt))
    add = []
    for dh in sorted(used):
        rel = dh[len('src/'):] if dh.startswith('src/') else dh
        if rel not in have_inc:
            add.append('#include "%s"' % rel)
    if add:
        anchor_ln = '#include <cstdint>'
        gtxt = gtxt.replace(anchor_ln, anchor_ln + '\n' + '\n'.join(add),
                            1)
        if APPLY:
            open(GH, 'w', encoding='utf-8', newline='').write(gtxt)
    stats['tu-inc-supplied'] = len(add)
print('files changed:', files_changed)
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
