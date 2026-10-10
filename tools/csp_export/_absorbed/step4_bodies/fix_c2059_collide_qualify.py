#!/usr/bin/env python3
"""G42.29c: qualify collide-cast receivers (C2059 F1 family, 363 sites).

Mechanical flat members named like types (`unsigned int Debug; Timer;` in
WinModemClass_e4.hpp) shadow the type name inside member functions, so the
generated receiver-cast `((Debug *)this)->Log()` fails to parse (C2059 at
the closing paren). Explicit qualification beats member shadowing:

    ((NAME *)  ->  ((gamemd::NAME *)

Applied on C2059 error lines whose text carries `((NAME *)` for a NAME in
the collide set (member name AND full e4-universe type). Already-qualified
sites are skipped.

Usage: [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
CEN = ROOT / '.omo/tu_errors_g138.json'

collide = json.load(open(ROOT / '.omo/g139_research/collide_set.json'))
PAT = re.compile(r'\(\(\s*(%s)\s*\*\s*\)' % '|'.join(sorted(collide, key=len, reverse=True)))
QUALIFIED = re.compile(r'gamemd::(%s)\s*\*' % '|'.join(sorted(collide, key=len, reverse=True)))

census = json.load(open(CEN, encoding='utf-8', errors='replace'))
sites = set()
for tu, errs in census.items():
    for e in errs:
        if 'C2059' not in e:
            continue
        m = re.match(r'([^(]+)\((\d+)\):', e)
        if m:
            sites.add((m.group(1), int(m.group(2))))

by_file = {}
for f, ln in sites:
    by_file.setdefault(f, set()).add(ln)

n_hit = n_files = 0
for f, lns in sorted(by_file.items()):
    p = Path(f)
    if not p.exists() or '/e4/' not in f.replace('\\', '/') and '\\_gap2' not in f and '/_gap2' not in f:
        continue
    lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    changed = False
    for ln in lns:
        if ln - 1 >= len(lines):
            continue
        s = lines[ln - 1]
        if QUALIFIED.search(s):
            continue
        new, k = PAT.subn(lambda m: '((gamemd::%s *)' % m.group(1), s, count=1)
        if k:
            lines[ln - 1] = new
            n_hit += 1
            changed = True
    if changed:
        n_files += 1
        if APPLY:
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')

print('C2059 sites: %d, qualified: %d in %d files%s'
      % (len(sites), n_hit, n_files, '' if APPLY else '  (DRY)'))
