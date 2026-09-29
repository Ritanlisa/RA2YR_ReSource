#!/usr/bin/env python3
"""Extend e4 member declarations to the corpus's maximum observed call arity.

C2660 residual root cause: CSP-derived signatures carry fewer parameters
than the materialized bodies pass (sret/noise arity bias, G36.4 evidence).
For each callee with C2660 sites:

  - collect observed call arities K_i from the messages
  - locate the declaration in src/e4/classes/*_e4.hpp
  - if declared arity N < max(K_i), append `void *aN+1 = 0, ...` params
    (defaults keep lower-arity sites compiling)

Definitions are NOT touched here -- align_tree_decls.py reconciles def
signatures from declarations next battery round.

Skips CRT/Win32 names and cascade co-sites. Idempotent.

Usage: python tools/csp_export/fix_c2660_max_arity.py <log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
Q = chr(0x201C) + chr(0x201D)
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
if not LOG:
    print('usage: fix_c2660_max_arity.py <log> [--apply]')
    sys.exit(1)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')

ERR = re.compile(
    r'^(?:\d+>)?(?:[A-Za-z]:[\\/](?:RA2YR_ReSource[\\/])?)?'
    r'([^\s(]+?)\((\d+),(\d+)\): error (C\d+): (.*)$', re.M)

CRT = re.compile(r'^(memcpy|memset|strcpy|strlen|sprintf|SendMessageA?|'
                 r'GetWindowLongA?|GetProcAddress|wide|qmemcpy|'
                 r'unknown_libname_\d+|sub_[0-9A-Fa-f]+|nullsub_\d*)$')

# callee -> max observed arity (qualified gamemd::Cls::Mth and free names)
need = defaultdict(int)
nsites = defaultdict(int)
for f, ln, col, code, msg in ERR.findall(TXT):
    if code != 'C2660':
        continue
    mm = re.search(r'[' + Q + r'](.+?)[' + Q + r']:', msg)
    ma = re.search(r'不接受 (\d+) 个参数', msg)
    if not mm or not ma:
        continue
    callee = mm.group(1).replace('gamemd::', '')
    if CRT.match(callee.split('::')[-1]):
        continue
    k = int(ma.group(1))
    if k > need[callee]:
        need[callee] = k
    nsites[callee] += 1


def split_args(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '([':
            depth += 1
        elif ch in ')]':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out


def arity_of(params):
    if not params:
        return 0
    return len(params)


n_edit = 0
STATS = defaultdict(int)
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    orig = txt
    # candidate decl lines: `RET Mth(params...);` (member or free in e4 hdr)
    for mth, kmax in need.items():
        short = mth.split('::')[-1] if '::' in mth else mth
        # decls always use the short name inside the class body
        for dm in re.finditer(
                r'^([ \t]*(?:static\s+|virtual\s+)*[\w\s\*:<>,&]+?)'
                r'(\b' + re.escape(short) + r'\s*)\(([^()]*)\)\s*(const)?\s*;',
                txt, re.M):
            params_txt = dm.group(3)
            params = split_args(params_txt) if params_txt.strip() else []
            n = arity_of(params)
            if n >= kmax or '...' in params_txt:
                continue
            # new names must not collide with existing param names
            used = set(re.findall(r'\b([A-Za-z_]\w*)\b', params_txt))
            nexts = [i for i in range(1, 60) if ('a%d' % i) not in used]
            add = ', '.join('void *a%d = 0' % nexts[i]
                            for i in range(kmax - n))
            new_params = (params_txt.strip() + ', ' + add) if params_txt.strip() else add
            new_decl = '%s%s(%s)%s;' % (dm.group(1), dm.group(2), new_params,
                                        dm.group(4) or '')
            txt = txt[:dm.start()] + new_decl + txt[dm.end():]
            STATS['extended'] += 1
            break  # one decl per header per method
    if txt != orig:
        n_edit += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')

print('headers changed:', n_edit)
for k, v in sorted(STATS.items()):
    print('  %-10s %d' % (k, v))
if not APPLY:
    print('(dry run -- pass --apply)')
