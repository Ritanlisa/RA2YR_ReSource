#!/usr/bin/env python3
"""C2027 include bridge: e4 TUs that MEMBER-ACCESS tree classes need the
tree headers that fully define them.

Mines the build log for C2027 "undefined type gamemd::X" raised inside
src/e4/*.cpp, locates X's defining header in the tree universe (non-e4,
non-csp_canon), and inserts that include into the failing e4 cpp — AFTER
the e4 includes (tree headers are self-contained and define gamemd::X
fully; fwd-then-full ordering inside the e4 TU is legal).

Guard: skipped when the tree header would re-define a name the e4 TU
already gets fully from e4/classes (name in both universes -> skip; the
correct fix for those is per-case).

Usage: python tools/csp_export/supply_tree_includes.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
ERR = re.compile(
    r'NEVER_MATCH__retired\_\_')
# RETIRED (r40): tree headers pulled into e4 TUs caused 126K redefinition
# errors (misc_ext.hpp alone). The C2027 fix is full e4-universe definitions
# from csp_canon_members (gen_tree_full_e4.py), NOT tree-header includes.

# tree header ownership map: name -> defining header (first match wins,
# deterministically by sorted scan). Definition = class/struct line with
# either `{` on the same line or a `{` within the next 3 lines (multi-line
# base-clause). Pure fwd decls (line ends with `;`) never match.
owner = {}
for p in sorted(SRC.rglob('*.hpp')):
    s = str(p)
    if 'e4' in s or 'csp_canon' in s or '_generated' in s:
        continue
    try:
        t = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    lines = t.split('\n')
    for i, ln in enumerate(lines):
        m = re.match(
            r'^[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)\b[^;]*$', ln)
        if not m:
            continue
        if ln.rstrip().endswith(';'):
            continue
        window = '\n'.join(lines[i:i + 4])
        if '{' not in window:
            continue
        owner.setdefault(m.group(1), p)

# names the e4 universe FULLY defines itself (never bridge those)
e4_full = set()
clsdir = SRC / 'e4' / 'classes'
if clsdir.exists():
    for p in sorted(clsdir.glob('*_e4.hpp')):
        txt = p.read_text(encoding='utf-8', errors='replace')
        e4_full |= set(re.findall(r'^[ \t]*struct\s+(\w+)\s*[^;]', txt, re.M))

need = {}
for m in ERR.finditer(TXT):
    f, cls = m.group(1), m.group(2)
    if cls in e4_full:
        continue
    hp = owner.get(cls)
    if hp is None:
        continue
    need.setdefault(f, set()).add((cls, hp))

inserted = 0
files = 0
for f, pairs in sorted(need.items()):
    p = SRC / 'e4' / f
    if not p.exists():
        continue
    txt = p.read_text(encoding='latin-1', errors='replace')
    adds = []
    for cls, hp in sorted(pairs):
        rel = hp.relative_to(SRC).as_posix()
        inc = f'#include "{rel}"'
        if inc in txt:
            continue
        adds.append(inc)
    if not adds:
        continue
    lines = txt.split('\n')
    at = 0
    for i, ln in enumerate(lines):
        if ln.startswith('#include'):
            at = i + 1
    lines[at:at] = ['// C2027 bridge: full definitions from the tree universe'] + adds
    inserted += len(adds)
    files += 1
    if APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))

print(f'tree include bridges: {inserted} in {files} cpps')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
