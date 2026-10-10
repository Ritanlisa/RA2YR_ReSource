#!/usr/bin/env python3
"""Restore this-demoted-to-param bodies (QueryInterface family).

Shape: member def `RET Cls::Name(T1 *P0, T2 a2, ...)` where the ORIGINAL
binary function is __thiscall -- the materializer kept the this as an
EXPLICIT first param while also qualifying the def as a member. Body then
uses P0 as the receiver (`*(P0 + 1)`), producing ZERO member events on the
C++ side while IDA renders the same access as READ/WRITE(member, off).

Repair (per function, brace-matched span):
  - verify IDA original at the def's // 0xADDR anchor is __thiscall and its
    pseudocode first arg is the this (name `this` or matching position)
  - drop the first param from the def signature
  - rewrite word-boundary `P0` -> `this` inside the body span
  - IDA-faithful access forms survive: `*(this + 1)` extracts via the
    this-key channel exactly like `*((_DWORD*)this + 1)`

Usage: python tools/csp_export/fix_demoted_this.py [--apply]
"""
import glob
import json
import re
import sys
from collections import Counter



def _pcount(s):
    s = s.strip()
    if not s:
        return 0
    d = 0
    c = 1
    for ch in s:
        if ch in '(<[':
            d += 1
        elif ch in ')>]':
            d -= 1
        elif ch == ',' and d == 0:
            c += 1
    return c

APPLY = '--apply' in sys.argv
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]+)\*/')


def load_pseudo(addr):
    try:
        return json.load(open('.omo/ida_cache/func_0x%X.json' % addr,
                              encoding='utf-8', errors='replace')).get('decompiled', '')
    except OSError:
        return ''


def func_start_for(addr):
    s = json.load(open('signals.json', encoding='utf-8', errors='replace'))
    import bisect
    starts = sorted(int(a, 16) for a, sym in s['symbols'].items()
                    if isinstance(sym, dict) and sym.get('kind') == 'function')
    i = bisect.bisect_right(starts, addr) - 1
    return starts[i] if i >= 0 else addr


DEF = re.compile(
    r'^([A-Za-z_][\w\s\*:<>,&]*?)\b([A-Za-z_]\w*)::([A-Za-z_~]\w*)\s*'
    r'\(\s*([A-Za-z_][\w\s\*:]*)\*\s*(\w+)\s*(?:,\s*([^)]*))?\)\s*\{?\s*$')

stats = Counter()
files = 0
for p in glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp'):
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    changed = False
    n = len(lines)
    for i, line in enumerate(lines):
        m = DEF.match(line.rstrip('\r\n'))
        if not m:
            continue
        ret_t, cls, mth, ptype, pname, rest = m.groups()
        # anchor within 4 lines above
        addr = None
        for j in range(i - 1, max(0, i - 5), -1):
            am = ANCHOR.search(lines[j])
            if am:
                addr = int(am.group(1), 16)
                break
        if addr is None:
            continue
        pseudo = load_pseudo(func_start_for(addr))
        head = pseudo.split('\n', 1)[0]
        if '__thiscall' not in head:
            continue  # only thiscall originals demote this
        # G40 guard (AnimTypeCopy lesson): demote ONLY when the corpus def
        # still carries the this as first param. C == T (original total incl.
        # this) -> safe; C == T-1 -> already dropped, first param is REAL.
        hm = re.search(r"\((.*)\)", head)
        pm = re.search(r"\(([^)]*)\)\s*\{?\s*$", line.rstrip('\r\n'))
        if hm and pm:
            T = _pcount(hm.group(1))
            C = _pcount(pm.group(1))
            if C != T:
                continue
        # body span via brace matching from this line
        d = 0
        end = None
        for j in range(i, min(n, i + 4000)):
            d += lines[j].count('{') - lines[j].count('}')
            if d <= 0 and j > i:
                end = j
                break
        if end is None:
            continue
        # param must actually be used as receiver in the body
        body = '\n'.join(lines[i + 1:end])
        if not re.search(r'\b%s\b' % re.escape(pname), body):
            continue
        stats['fixed'] += 1
        new_sig = '%s%s %s::%s(%s)' % (
            '',  # ret_t already has trailing space? reconstruct:
            '', mth and '', '', '')
        new_sig = '%s %s::%s(%s)' % (ret_t, cls, mth, rest or '')
        lines[i] = new_sig + (' {' if line.rstrip('\r\n').endswith('{') else '')
        for j in range(i + 1, end + 1):
            lines[j] = re.sub(r'\b%s\b' % re.escape(pname), 'this', lines[j])
        changed = True
    if changed:
        files += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', errors='replace', newline='').write('\n'.join(lines))
print('files:', files, dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
