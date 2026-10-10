#!/usr/bin/env python3
"""Restore self-named pad lines in LEGACY corpus TUs from ida_cache truth.

Legacy classes (LoadOptions, AircraftClass, ...) have REAL layouts — a pad
member cannot be appended at a named offset, so the C2039s must be
repaired on the USE side: a body line referencing `__pad_N` / `qXXX`
(self-named pads an old fixer invented from byte offsets) is restored to
the cache-verbatim raw-arithmetic form (`*(this + N)`), which the
extractor handles symmetrically on both sides.

Line-scoped, anchor-keyed, statement-balanced (G41.11 algorithm).
Scope: legacy corpus dirs (everything except e4/_gap2/gap2 hand-list).
Usage: python tools/csp_export/fix_legacy_pad_restore.py [--apply]
"""
import glob
import json
import bisect
import os
import re
import sys

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
PAD = re.compile(r'\b__pad_[0-9A-Fa-f]+\b|\bq[0-9A-Fa-f]{2,3}\b(?!\w)|'
                 r'\b\w+_field_0x[0-9A-Fa-f]+\b')
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')

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
    d = ''
    for cand in ('.omo/ida_cache/func_0x%08X.json' % st,
                 '.omo/ida_cache/func_0x%X.json' % st):
        if os.path.exists(cand):
            d = json.load(open(cand, encoding='utf-8')).get('decompiled', '')
            break
    _cache[st] = d
    return d


def orig_stmt(pseudo, anchor_hex):
    """Statement containing the anchor: backward to the nearest statement
    boundary (`;` `{` `}` at paren-depth 0 relative to the anchor), then
    forward paren-balance to the statement end."""
    if not pseudo:
        return None
    i = pseudo.lower().find('/*0x' + anchor_hex.lower() + '*/')
    if i <= 0:
        return None
    depth = 0
    start = 0
    k = i
    while k > 0:
        ch = pseudo[k]
        if ch == ')':
            depth += 1
        elif ch == '(':
            depth -= 1
        elif depth <= 0 and ch in ';{}':
            start = k + 1
            break
        k -= 1
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
        elif ch == ';' and depth <= 0:
            end += 1
            break
        elif ch == '\n' and not seen:
            start = end + 1
        end += 1
    ln = pseudo[start:end]
    ln = re.sub(r'/\*0x[0-9a-fA-F]+\*/', '', ln)
    ln = re.sub(r'\s+', ' ', ln).strip()
    if ln and not ln.endswith((';', '}', ')')):
        ln += ';'
    return ln or None


stats = {'restored': 0, 'no-orig': 0}
files_changed = 0
shown = [0]
DIRS = ['src/core', 'src/structure', 'src/object', 'src/ui', 'src/misc',
        'src/entity', 'src/house', 'src/network', 'src/team', 'src/render',
        'src/type', 'src/app']
files = []
for d in DIRS:
    files += glob.glob(d + '/**/*.cpp', recursive=True)
for p in sorted(files):
    if 'gap2' in p:
        continue
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    changed = False
    for i, ln in enumerate(lines):
        if not PAD.search(ln) or '//' in ln.split(PAD.pattern)[0][-3:]:
            pass
        if not PAD.search(ln):
            continue
        # find anchor on this line or next 2 (statement tail)
        anchor = None
        for k in (i, i + 1, i + 2):
            if k < len(lines):
                am = ANCHOR.search(lines[k])
                if am:
                    anchor = am
                    break
        if not anchor:
            continue
        orig = orig_stmt(enc(int(anchor.group(1), 16)), anchor.group(1))
        if not orig or PAD.search(orig):
            stats['no-orig'] += 1      # cache itself uses pads: unfixable
            continue
        dec = enc(int(anchor.group(1), 16))
        m2 = re.search(r'\(([^)]*)\)', dec.split('{')[0])
        first = (m2.group(1).split(',')[0] if m2 else '').strip()
        factor = 1 if re.search(r'\b(int|unsigned int|long)\b(?!.*\*)',
                                first) else 4
        cand = orig
        for tm, rep in TOKEN_MAP:
            cand = tm.sub(rep, cand)
        cand = re.sub(r'\*\s*this\s*\+\s*(\d+)\b',
                      lambda m: '*(unsigned int *)this + %d'
                      % (int(m.group(1)) * factor), cand)
        cand = re.sub(r'(?<!\*)(?<!\*\))\bthis\s*\+\s*(\d+)\b',
                      lambda m: '(unsigned int *)this + %d'
                      % (int(m.group(1)) * factor), cand)
        indent = ln[:len(ln) - len(ln.lstrip())]
        tail = ''
        ti = ln.find('//', anchor.end())
        if ti >= 0:
            tail = ' ' + ln[ti:].strip()
        new = indent + cand + tail
        if new != ln:
            lines[i] = new
            changed = True
            stats['restored'] += 1
            if SAMPLE and shown[0] < 8:
                shown[0] += 1
                print('--- %s:%d' % (p, i + 1))
                print('OLD: ' + ln.strip()[:120])
                print('NEW: ' + new.strip()[:120])
    if changed:
        files_changed += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
print('files:', files_changed)
print(stats)
if not APPLY:
    print('(dry run -- pass --apply)')
