#!/usr/bin/env python3
"""Prune stale link stubs whose symbols now have real definitions.

src/_generated/link_stubs.cpp was generated from an old linker run
(.omo/missing_syms.txt). The translation campaign has since materialized
real bodies for many of those symbols, so the stubs are now DUPLICATE
definitions (C2382 redefinition families) or signature-drifted ghosts
(C2556/C2371/C2039) against the current headers.

This script, for every `// link stub` block in link_stubs.cpp:
  1. extracts the qualified name (A::B or free A),
  2. scans the rest of src/ for a real definition (def head with the same
     qualified name, not ending in `;`, outside link_stubs.cpp itself),
  3. if one exists -> comment the stub out (`//PRUNED has real def`),
  4. else keep it (still genuinely missing) untouched.

Idempotent: pruned stubs are inside comments and never re-matched.
Dry run by default; --apply writes.

Usage: python tools/csp_export/fix_link_stubs_prune.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
TARGET = ROOT / 'src' / '_generated' / 'link_stubs.cpp'

MARK = '// link stub (no binary body yet)'

# ---- collect real definitions across src (excluding link_stubs itself) ----
DEF_RE = re.compile(r'^[^\n]*?\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\(')

def scan_real_defs():
    defs = set()
    for p in ROOT.glob('src/**/*.c*'):
        if p == TARGET or 'build' in p.parts:
            continue
        try:
            for ln in p.read_text(encoding='utf-8', errors='replace').split('\n'):
                s = ln.strip()
                if not s or s.endswith(';') or s.startswith('//'):
                    continue
                for m in DEF_RE.finditer(ln):
                    defs.add(m.group(1))
        except OSError:
            continue
    return defs

real_defs = scan_real_defs()
print('real qualified defs found:', len(real_defs))

lines = TARGET.read_text(encoding='utf-8', errors='replace').split('\n')

# ---- locate stub blocks: comment line then the def line ----
pruned = kept = 0
out = []
i = 0
while i < len(lines):
    ln = lines[i]
    if MARK in ln and i + 1 < len(lines):
        defln = lines[i + 1]
        m = re.match(r'\s*([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\(', defln)
        if m and m.group(1) in real_defs:
            out.append('//PRUNED has real def: ' + defln.strip())
            pruned += 1
            i += 2
            continue
        kept += 1
    out.append(ln)
    i += 1

print('pruned (duplicate):', pruned, ' kept (still missing):', kept)
if APPLY:
    TARGET.write_text('\n'.join(out), encoding='utf-8', errors='replace')
    print('written.')
else:
    print('DRYRUN -- pass --apply')
