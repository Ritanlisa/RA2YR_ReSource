#!/usr/bin/env python3
"""Supply missing METHOD declarations to e4 flat headers (C2039 family).

For each C2039 (cls, name) pair whose `cls::name` exists in signals, look
up the cache signature at that address and declare
`<ret> <name>(<params>);` inside the class's flat header (safe-typed
params, this-keyword dropped — same rules as fix_hdr_from_def).
Special case: `vftable` -> `static void *vftable;`.

Log-driven, idempotent, scope-guarded to src/e4/classes/.
Pairs without a signals entry stay logged (triage).

Usage: python tools/csp_export/fix_c2039_methods.py <log> [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys
from collections import defaultdict

APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

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
            'DWORD', 'UINT', 'BYTE', 'WORD', 'HANDLE', 'LONG', 'LPVOID')

Q = '"'
ERR = re.compile(r'C2039: "' + r'(\w+)": .*?"(?:gamemd::)?(\w+)"')
TXT = open(LOG, encoding='utf-8', errors='replace').read() if LOG else ''
pairs = set()
for m in ERR.finditer(TXT):
    if m.group(1) == 'vftable' or m.group(1).startswith('__pad_') or \
            re.match(r'^q[0-9A-Fa-f]{2,3}$', m.group(1)):
        continue                      # other families
    pairs.add((m.group(2), m.group(1)))
print('method pairs:', len(pairs))

s = json.load(open('signals.json', encoding='utf-8'))
bn = s.get('_by_name', {})
STARTS = sorted(int(a, 16) for a, sym in s['symbols'].items()
                if isinstance(sym, dict) and sym.get('kind') == 'function')
_cache = {}


def enc(a):
    i = bisect.bisect_right(STARTS, a) - 1
    st = STARTS[i] if i >= 0 else a
    if st in _cache:
        return _cache[st]
    d = ''
    for cand in ('.omo/ida_cache/func_0x%08X.json' % st,
                 '.omo/ida_cache/func_0x%X.json' % st):
        if os.path.exists(cand):
            d = json.load(open(cand, encoding='utf-8')).get('decompiled', '')
            break
    _cache[st] = d
    return d


def _safe_type(ptype):
    base = ptype.replace('*', ' ').strip()
    words = base.split()
    if words and all(w in _SCALARS for w in words):
        return ptype
    return 'void *' if '*' in ptype else 'int'


def cache_sig_parts(dec):
    if not dec or '{' not in dec:
        return None
    head = dec[:dec.find('{')].strip()
    m = re.search(r'\(([^)]*)\)', head)
    if not m:
        return None
    before = re.sub(r'__(?:thiscall|stdcall|cdecl|pascal)\s*$', '',
                    head[:m.start()].strip())
    nm = re.search(r'([A-Za-z_][\w:<>,\s\*&]*?)\b[A-Za-z_]\w*\s*$', before)
    ret = nm.group(1).strip() if nm else ''
    for tm, rep in TOKEN_MAP:
        ret = tm.sub(rep, ret)
    if not ret:
        ret = 'int'
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
    return ret, params


stats = {'declared': 0, 'no-signals': 0, 'no-hpp': 0, 'already': 0,
         'no-sig': 0}
by_cls = defaultdict(set)
for cls, nm in pairs:
    if nm == 'vftable':
        by_cls[cls].add(('__vftable__', None))
        continue
    ent = bn.get('%s::%s' % (cls, nm))
    addr = None
    if isinstance(ent, dict):
        if ent.get('addr'):
            addr = ent['addr']
        elif isinstance(ent.get('symbols'), dict) and ent['symbols']:
            for cand in sorted(ent['symbols']):
                if re.match(r'^0x[0-9A-Fa-f]+$', cand):
                    addr = cand
                    break
    if not addr:
        stats['no-signals'] += 1
        continue
    sig = cache_sig_parts(enc(int(str(addr), 16)))
    if not sig:
        stats['no-sig'] += 1
        continue
    by_cls[cls].add((nm, (sig[0], ', '.join(sig[1]))))

for cls, items in sorted(by_cls.items()):
    hp = 'src/e4/classes/%s_e4.hpp' % cls
    if not os.path.exists(hp):
        # G41.22: create a minimal flat header for pseudo-classes that the
        # corpus names but no header declares (WinAPI shell classes etc.)
        decls = []
        bad = False
        for nm, sig in sorted(items):
            if nm == '__vftable__':
                decls.append('    static void *vftable;  // vftable symbol')
                continue
            if not re.match(r'^[A-Za-z_]\w*$', nm) or not re.match(
                    r'^[A-Za-z_]\w*$', cls):
                bad = True
                break
            ret, pstr = sig
            decls.append('    %s %s(%s);' % (ret, nm, pstr))
        if bad or not decls:
            stats['no-hpp'] += 1
            continue
        body = ('// GENERATED minimal flat class (fix_c2039_methods)\n'
                '#pragma once\n\nnamespace gamemd {\n\nstruct %s {\n%s'
                '};\n\n} // namespace gamemd\n'
                % (cls, '\n'.join(decls) + '\n'))
        if APPLY:
            open(hp, 'w', encoding='utf-8', newline='').write(body)
        stats['declared'] += len(decls)
        stats.setdefault('hpp-created', 0)
        stats['hpp-created'] += 1
        continue
    txt = open(hp, encoding='utf-8', errors='replace').read()
    add = []
    for nm, sig in sorted(items):
        if nm == '__vftable__':
            if re.search(r'\bvftable\b', txt):
                stats['already'] += 1
                continue
            add.append('    static void *vftable;  // vftable symbol')
            continue
        ret, pstr = sig
        if re.search(r'\b%s\s*\(' % re.escape(nm), txt):
            stats['already'] += 1
            continue
        add.append('    %s %s(%s);' % (ret, nm, pstr))
    if not add:
        continue
    ins = '\n'.join(add) + '\n'
    m = re.search(r'(\n\};)', txt)
    if not m:
        stats['no-hpp'] += 1
        continue
    txt = txt[:m.start()] + ins + txt[m.start():]
    stats['declared'] += len(add)
    if APPLY:
        open(hp, 'w', encoding='utf-8', newline='').write(txt)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
    sys.exit(0)

# ---- TU include supply for C2039 class headers (created or existing) ----
# The failing TU must include <cls>_e4.hpp or the C2039 stands.
TU_PATHS = {}
for pat in ('src/e4/*.cpp', 'src/_gap2/*.cpp', 'src/system/gap2*.cpp',
            'src/misc/misc_ext.cpp'):
    for p in glob.glob(pat):
        TU_PATHS[os.path.basename(p)] = p
by_tu = defaultdict(set)
for m in ERR.finditer(TXT):
    nm, cls = m.group(1), m.group(2)
    hp = 'src/e4/classes/%s_e4.hpp' % cls
    if not os.path.exists(hp):
        continue
    fm = None
    seg = TXT[max(0, m.start() - 300):m.start()]
    fm = re.search(r'([A-Za-z0-9_]+\.cpp)\(', seg)
    if not fm:
        continue
    p = TU_PATHS.get(fm.group(1))
    if p:
        by_tu[p].add(os.path.basename(hp))
inc_files = 0
for p, hdrs in sorted(by_tu.items()):
    txt = open(p, encoding='utf-8', errors='replace').read()
    add = ['#include "e4/classes/%s"' % h for h in sorted(hdrs)
           if '#include "e4/classes/%s"' % h not in txt]
    if not add:
        continue
    lines = txt.split('\n')
    last_inc = max((i for i, l in enumerate(lines)
                    if l.startswith('#include')), default=-1)
    lines[last_inc + 1:last_inc + 1] = add
    open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
    inc_files += 1
    stats['inc-supplied'] = stats.get('inc-supplied', 0) + len(add)
print('tu-include files:', inc_files)
