#!/usr/bin/env python3
"""Align flat-header DECLs to the cpp DEFS for the C2671 family.

Root cause: a def `Ret Cls::Mth(params)` that matches NO member decl makes
MSVC resolve the member as static -> C2671 (and friends C2511/C2560). The
header may carry a stale max-arity extension or a `(...)` vararg interim
stub; the DEF is the compile-visible truth for this family.

Repair, log-driven:
  1. parse C2671 pairs (cls, mth) from the build log;
  2. index cpp DEFS `Ret Cls::Mth(` across the corpus (e4, _gap2,
     system/gap2*, misc_ext);
  3. for each pair, locate the decl inside `struct|class <cls>` in
     src/e4/classes/<cls>_e4.hpp and rewrite it to the DEF's exact
     signature (indent + anchor comment preserved, trailing
     default-args dropped -- defaults are decl-only and were the poison);
  4. defs not found -> skipped (counted, fail-closed).

Usage: python tools/csp_export/fix_hdr_from_def.py <log> [--apply]
       SAMPLE=1 prints up to 10 before/after pairs.
"""
import glob
import json
import os
import re
import sys
from collections import Counter

APPLY = '--apply' in sys.argv
SAMPLE = os.environ.get('SAMPLE')
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
Q = chr(0x201C) + chr(0x201D)

ERR = re.compile(r'error C2671: [' + Q + r']gamemd::(\w+)::(~?\w+)')
DEF_RE = re.compile(
    r'^([A-Za-z_][\w:<>,\s\*&]*?)\b(\w+)::(~?\w+)\s*\(([^;{)]*)\)\s*'
    r'(?:const\s*)?\{?\s*$')
ANCHOR_RE = re.compile(r'//\s*0x[0-9A-Fa-f]+')

TXT = open(LOG, encoding='utf-8', errors='replace').read() if LOG else ''
pairs = set(ERR.findall(TXT))
print('C2671 pairs:', len(pairs))

CORPUS = (glob.glob('src/e4/*.cpp') + glob.glob('src/_gap2/*.cpp')
          + glob.glob('src/system/gap2*.cpp') + ['src/misc/misc_ext.cpp'])

# def index: (cls, mth) -> (ret, params_str, file, line_no)
defs = {}
for p in CORPUS:
    if not os.path.exists(p):
        continue
    for i, ln in enumerate(open(p, encoding='utf-8', errors='replace')):
        m = DEF_RE.match(ln)
        if not m or ln.rstrip().endswith(';'):
            continue
        ret = m.group(1).strip()
        if not ret or ret in ('return', 'else', 'if'):
            continue
        key = (m.group(2), m.group(3))
        # first def wins; multi-def (overloads) keep a list
        defs.setdefault(key, []).append(
            (ret, ' '.join(m.group(4).split()), p, i + 1))

stats = Counter()
shown = [0]
hp_cache = {}
for cls, mth in sorted(pairs):
    dl = defs.get((cls, mth))
    if not dl:
        stats['no-def'] += 1
        continue
    ret, pstr, df, dl_no = dl[0]
    hp = 'src/e4/classes/%s_e4.hpp' % cls
    if not os.path.exists(hp):
        stats['no-hpp'] += 1
        continue
    if hp not in hp_cache:
        hp_cache[hp] = open(hp, encoding='utf-8',
                            errors='replace').read().split('\n')
    hlines = hp_cache[hp]
    # find the decl inside `struct|class <cls>` scope, matching method name
    in_cls = False
    done = False
    # distinct overload signatures (def-index order)
    sigs = []
    for ret2, ps2, _f, _n in dl:
        sig = (ret2, ps2)
        if sig not in sigs:
            sigs.append(sig)
    # rewrite the i-th EXISTING decl with the i-th signature; extras
    # beyond len(sigs) get commented out (C2535 duplicates)
    decl_idx = 0
    for i, hl in enumerate(hlines):
        cm = re.match(r'^\s*(?:class|struct)\s+([\w:]+)', hl)
        if cm:
            in_cls = cm.group(1) == cls
            continue
        if not in_cls or hl.strip().startswith('//') or \
                hl.strip().startswith('#'):
            continue
        dm = re.match(r'^(\s*)([\w:<>,\s\*&]*?)\b%s\s*\(([^;{)]*)\)' %
                      re.escape(mth), hl)
        if not dm:
            continue
        sig_i = decl_idx
        decl_idx += 1
        tail = ''
        am = ANCHOR_RE.search(hl)
        if am:
            tail = '  ' + hl[am.start():].strip()
        if sig_i >= len(sigs):
            new = '%s// dup: %s' % (dm.group(1), hl.strip())
            if new != hl:
                hlines[i] = new
                stats['dup-comment'] += 1
            continue
        ret, pstr = sigs[sig_i]
        new = '%s%s %s(%s);%s' % (dm.group(1), ret, mth, pstr, tail)
        if new.rstrip() != hl.rstrip():
            hlines[i] = new
            stats['redeclared'] += 1
            if SAMPLE and shown[0] < 10:
                shown[0] += 1
                print('--- %s:%d (def %s:%d)' % (hp, i + 1, df, dl_no))
                print('OLD: ' + hl.strip()[:110])
                print('NEW: ' + new.strip()[:110])
        else:
            stats['already'] += 1
        done = True  # at least one decl seen (loop continues for extras)
        continue
    if not done:
        stats['no-decl-line'] += 1

if APPLY:
    for hp, hlines in hp_cache.items():
        open(hp, 'w', encoding='utf-8', newline='').write('\n'.join(hlines))
print('files touched:', len(hp_cache))
print(dict(stats))
if not APPLY:
    print('(dry run -- pass --apply)')
