#!/usr/bin/env python3
"""Tree-TU include supply: C2065 undeclared GLOBALS in tree cpps.

complements supply_includes_from_errors (which covers src/e4 cpps and
class headers only). For every C2065 name in a NON-e4 cpp, find the header
that declares it (`extern ... <name>;`) anywhere in src and insert that
include. Names declared in several headers with differing types (type
wars) are skipped here — they need unification first.

Usage: python tools/csp_export/supply_includes_tree.py <log> [--apply]
"""
import re
import sys
import collections
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LQ, RQ = chr(0x201C), chr(0x201D)
TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''

ERR = re.compile(
    re.escape('src') + r'[\\/]([A-Za-z0-9_\\/.]+\.cpp)\(\d+,\d*\): error '
    r'C2065: [' + LQ + RQ + r'](\w+)[' + LQ + RQ + r']')

need = collections.defaultdict(set)   # cpp relpath -> {names}
for m in ERR.finditer(TXT):
    need[m.group(1).replace('\\', '/')].add(m.group(2))

# ---- name -> declaring-header index (extern declarations only) ----
EXT = re.compile(r'^\s*extern\s+.+?\b(\w+)\s*;', re.M)
declared_in = collections.defaultdict(set)   # name -> {header relpaths}
for p in sorted(SRC.rglob('*')):
    if p.suffix not in ('.hpp', '.h'):
        continue
    rel = p.relative_to(SRC).as_posix()
    if '_generated' in rel or 'csp_canon' in rel:
        continue
    if rel.startswith('core/ida_globals'):
        continue   # /FI — visible everywhere already
    try:
        t = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    t = re.sub(r'//[^\n]*', ' ', t)
    t = re.sub(r'/\*.*?\*/', ' ', t, flags=re.S)
    for m in EXT.finditer(t):
        declared_in[m.group(1)].add(rel)

inserted = 0
files = 0
no_home = collections.Counter()
for f, names in sorted(need.items()):
    p = SRC / f
    if not p.exists():
        continue
    txt = p.read_text(encoding='latin-1', errors='replace')
    adds = []
    for n in sorted(names):
        homes = declared_in.get(n)
        if not homes:
            no_home[n] += 1
            continue
        # prefer a header in the same module; else the first alphabetically
        module = f.split('/')[0].split('\\')[0]
        same = sorted(h for h in homes if h.startswith(module + '/'))
        home = (same or sorted(homes))[0]
        inc = '#include "%s"' % home
        if inc in txt or home.endswith(('.cpp',)):
            continue
        adds.append(inc)
    if not adds:
        continue
    lines = txt.split('\n')
    at = 0
    for i, ln in enumerate(lines):
        if ln.startswith('#include'):
            at = i + 1
    lines[at:at] = adds
    inserted += len(adds)
    files += 1
    if APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print(f'includes inserted: {inserted} in {files} tree cpps')
top_no_home = no_home.most_common(8)
if top_no_home:
    print('no declaring header (need ida_globals or member pipeline):')
    for n, c in top_no_home:
        print('   %d %s' % (c, n))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
