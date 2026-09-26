#!/usr/bin/env python3
"""Append ghost parameters (aN used by a body but absent from the def line).

IDA call sites pass more stack args than the CSP signature captured; the
regenerated body references `a1..aN` while the def declares fewer. This
appends the missing parameters (type `unsigned int`, IDA order) to the
def line so the body compiles; align_tree_decls --force then syncs decls.

Usage: python tools/csp_export/fix_ghost_params.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _blockspan import brace_delta

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

TXT = Path(LOG).read_bytes().decode('utf-8', errors='replace') if LOG else ''
MISS = re.compile(r'([A-Za-z0-9_]+\.cpp)\((\d+),\d+\): error C2065: ["\u201c]'
                  r'(a\d+)["\u201d]')

need = {}
for m in MISS.finditer(TXT):
    need.setdefault((m.group(1), int(m.group(2))), set()).add(m.group(3))

tot = tot_files = 0
for (f, ln_no), names in sorted(need.items()):
    p = SRC / 'e4' / f
    if not p.exists():
        p = SRC / f
    if not p.exists():
        p = SRC / 'core' / f
    if not p.exists():
        p = SRC / 'entity' / f
    if not p.exists():
        p = SRC / 'house' / f
    if not p.exists():
        p = SRC / 'misc' / f
    if not p.exists():
        p = SRC / 'object' / f
    if not p.exists():
        p = SRC / 'structure' / f
    if not p.exists():
        p = SRC / 'system' / f
    if not p.exists():
        p = SRC / 'ui' / f
    if not p.exists():
        continue
    try:
        lines = p.read_text(encoding='latin-1', errors='replace').split('\n')
    except OSError:
        continue
    # def line: walk back from the use site to the enclosing def
    i = min(ln_no, len(lines)) - 1
    depth = 0
    while i >= 0:
        d = brace_delta(lines[i])
        if depth == 0 and d < 0:
            depth -= 1
        elif depth < 0:
            depth += d if d < 0 else 0
        if depth <= -1 and '(' in lines[i] and ')' in lines[i]:
            break
        if d > 0 and depth <= -1:
            break
        i -= 1
    if i < 0:
        continue
    defline = lines[i]
    m2 = re.search(r'\(([^()]*)\)', defline)
    if not m2:
        continue
    have = set(re.findall(r'\b(a\d+)\b', m2.group(1)))
    missing = sorted((names - have),
                     key=lambda s: int(s[1:]))
    if not missing:
        continue
    inner = m2.group(1).strip()
    add = ', '.join('unsigned int %s' % n for n in missing)
    new_inner = (inner + ', ' + add) if inner else add
    lines[i] = defline[:m2.start(1)] + new_inner + defline[m2.end(1):]
    tot += len(missing)
    tot_files += 1
    if APPLY:
        p.write_bytes('\n'.join(lines).encode('latin-1', errors='replace'))
print(f'ghost params appended: {tot} in {tot_files} files')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
