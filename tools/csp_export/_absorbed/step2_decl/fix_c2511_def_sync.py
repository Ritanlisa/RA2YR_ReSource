#!/usr/bin/env python3
"""C2511 def/decl signature sync (kills the C2671 fallout family).

C2511 "no overloaded member function found" fires when the corpus def
signature differs from the class declaration (param TYPE mismatches like
int* vs void*, arity, return). MSVC then treats the out-of-class def as a
NEW static member -> every `this` use in the body becomes C2671.

For each C2511: parse the def signature from the message, locate the
class's decl line by method name, rewrite the DEF's return type + params
to the decl's. Decl is authoritative (CSP-typed).

Usage: python tools/csp_export/fix_c2511_def_sync.py <log> [--apply]
"""
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
Q = chr(0x201C) + chr(0x201D)
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
if not LOG:
    print('usage: fix_c2511_def_sync.py <log> [--apply]')
    sys.exit(1)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace')

ERR = re.compile(
    r'^(?:\d+>)?(?:[A-Za-z]:[\\/](?:RA2YR_ReSource[\\/])?)?'
    r'([^\s(]+?)\((\d+),(\d+)\): error C2511: (.*)$', re.M)
# message: “RET gamemd::Cls::Mth(params)”:“gamemd::Cls”中没有找到...
MSG = re.compile(r'[' + Q + r']([^' + Q + '\n]+)[' + Q + r']:["' + Q +
                 r']*gamemd::(\w+)[' + Q + r'"].*')

sites = []  # (file, line, cls, mth)
for f, ln, col, msg in ERR.findall(TXT):
    m = re.search(r'gamemd::(\w+)::(\w+)\s*\(', msg)
    if not m:
        continue
    mm = re.search(r'src/(.*)$', f.replace('\\', '/'))
    if not mm:
        continue
    sites.append(('src/' + mm.group(1), int(ln), m.group(1), m.group(2)))

STATS = defaultdict(int)
HDR_CACHE = {}


def find_decl(cls, mth):
    if cls in HDR_CACHE:
        return HDR_CACHE[cls]
    r = None
    for p in (ROOT / 'src').rglob('*.hpp'):
        try:
            txt = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        m = re.search(r'(?:class|struct)\s+' + re.escape(cls) + r'\b[^;]*\{',
                      txt)
        if not m:
            continue
        seg = txt[m.end():m.end() + 60000]
        end = seg.find('\n};')
        seg = seg[:end if end > 0 else len(seg)]
        dm = re.search(r'^[ \t]*(?:static\s+|virtual\s+)*'
                       r'([\w\s\*:<>,&]+?)\b' + re.escape(mth) +
                       r'\s*\(([^()]*)\)', seg, re.M)
        if dm:
            r = (dm.group(1).strip(), dm.group(2).strip())
            break
    HDR_CACHE[cls] = r
    return r


n_files = 0
by_file = defaultdict(list)
for f, ln, cls, mth in sites:
    by_file[f].append((ln, cls, mth))
for rel, lst in sorted(by_file.items()):
    p = ROOT / rel
    if not p.exists() or p.suffix != '.cpp':
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    changed = False
    for ln, cls, mth in lst:
        if ln - 1 >= len(lines):
            continue
        line = lines[ln - 1].rstrip('\r\n')
        dm = re.match(r'^([\w\s\*:<>,&]+?)\b' + re.escape(mth) +
                      r'\s*\(([^()]*)\)(.*)$', line)
        if not dm:
            STATS['def-shape-miss'] += 1
            continue
        decl = find_decl(cls, mth)
        if not decl:
            STATS['decl-not-found'] += 1
            continue
        dret, dparams = decl
        if 'static' in dret:
            dret = dret.replace('static', '').strip()
        new = '%s %s::%s(%s)%s' % (dret, cls, mth, dparams, dm.group(3))
        if new != line:
            lines[ln - 1] = new
            STATS['synced'] += 1
            changed = True
    if changed:
        n_files += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8')

print('files:', n_files)
for k, v in sorted(STATS.items()):
    print('  %-14s %d' % (k, v))
if not APPLY:
    print('(dry run -- pass --apply)')
