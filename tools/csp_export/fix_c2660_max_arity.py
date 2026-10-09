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
E4 = ROOT / 'src' / 'e4'
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


# defs that already carry default args (C2572: defaults may live in the
# decl OR the def, never both) -- one pass over the e4 cpps
def_has_default = set()
DEF_DEFAULT_RE = re.compile(r'\b([A-Za-z_]\w*)\s*\(([^()]*)\)[^;{]*\{', re.M)
for _p in sorted(E4.glob('*_e4.cpp')):
    try:
        _t = _p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    for _m in DEF_DEFAULT_RE.finditer(_t):
        if '=' in (_m.group(2) or ''):
            def_has_default.add(_m.group(1))

n_edit = 0
STATS = defaultdict(int)
need_short = {}
for mth, kmax in need.items():
    short = mth.split('::')[-1] if '::' in mth else mth
    need_short[short] = max(need_short.get(short, 0), kmax)
NEED_RE = re.compile(
    r'^([ \t]*(?:static\s+|virtual\s+)*[\w\s\*:<>,&]+?)'
    r'\b(' + '|'.join(re.escape(s) for s in sorted(need_short, key=len,
                                                   reverse=True)) +
    r'\s*)\(([^()]*)\)\s*(const)?\s*;', re.M)
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    orig = txt
    # single pass per file: one alternation regex over all wanted names,
    # then per-match arity check; collect edits, splice in reverse so the
    # offsets stay valid (one decl per header per method)
    # G42.57ay guards (wave-2 lessons): static-form decls are supply shims
    # -- extending them makes the static overload viable at member call
    # sites (C2671) or pairs it with the member form (C2686). Decl lines
    # that already carry defaults are left alone (C2572 vs the def).
    edits = []
    seen_m = set()
    for dm in NEED_RE.finditer(txt):
        prefix = dm.group(1)
        if 'static' in prefix:
            continue
        short = dm.group(2).strip()
        kmax = need_short.get(short)
        if not kmax or short in seen_m:
            continue
        params_txt = dm.group(3)
        if '=' in params_txt:
            continue
        params = split_args(params_txt) if params_txt.strip() else []
        n = arity_of(params)
        if n >= kmax or '...' in params_txt:
            continue
        # def-side default check: C2572 forbids defaults in both decl and
        # def -- find the class's member def in the e4 cpps
        if short in def_has_default:
            continue
        # static twin of the same name anywhere in this class body?
        cls_body = txt
        twin = re.search(r'\bstatic\b[^;{]*\b%s\s*\(' % re.escape(short),
                         cls_body)
        if twin and 'static' not in prefix:
            continue
        # new names must not collide with existing param names
        used = set(re.findall(r'\b([A-Za-z_]\w*)\b', params_txt))
        nexts = [i for i in range(1, 60) if ('a%d' % i) not in used]
        add = ', '.join('void *a%d = 0' % nexts[i]
                        for i in range(kmax - n))
        new_params = (params_txt.strip() + ', ' + add) if params_txt.strip() else add
        new_decl = '%s%s(%s)%s;' % (dm.group(1), dm.group(2), new_params,
                                    dm.group(4) or '')
        edits.append((dm.start(), dm.end(), new_decl, short))
        seen_m.add(short)
    if edits:
        STATS['extended'] += len(edits)
        for st, en, nd, _s in reversed(edits):
            txt = txt[:st] + nd + txt[en:]
    if txt != orig:
        n_edit += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')

print('headers changed:', n_edit)
for k, v in sorted(STATS.items()):
    print('  %-10s %d' % (k, v))
if not APPLY:
    print('(dry run -- pass --apply)')
