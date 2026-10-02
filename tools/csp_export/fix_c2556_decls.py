#!/usr/bin/env python3
"""G42.30e: sync ALL src/ member decls to return-flipped defs (C2556).

29e flipped def-head returns to cache truth but synced decls only in
src/e4/classes + e4_protos.h -- member decls elsewhere (core/misc/system
hpp trees) still say void -> C2556/C2371 overload clashes.
Usage: [--apply]
"""
import re
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv

KW = {'return', 'else', 'goto', 'case', 'delete', 'new', 'throw',
      'sizeof', 'typedef', 'extern', 'virtual', 'static', 'inline'}
DEF_RET = {}
for sub in ('src/e4', 'src/_gap2', 'src/core', 'src/misc', 'src/system',
            'src/structure', 'src/object', 'src/team', 'src/house',
            'src/type', 'src/entity', 'src/ui', 'src/render'):
    d = ROOT / sub
    if not d.exists():
        continue
    for p in d.rglob('*.cpp'):
        try:
            txt = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        for ln in txt.split('\n'):
            if '{' in ln or ';' in ln:
                pass
            m = re.match(r'^\s*(unsigned \w+|signed \w+|[\w:]+(?:\s*\*+)?)\s+'
                         r'~?([A-Za-z_]\w*)\s*\(', ln)
            if m and m.group(1).strip() not in KW and '{' not in ln:
                DEF_RET.setdefault(m.group(2), m.group(1).strip())

stats = Counter()
for p in (ROOT / 'src').rglob('*.hpp'):
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    ch = False
    for i, ln in enumerate(lines):
        m = re.match(r'^(\s*)(?:virtual\s+)?void\s+(~?([A-Za-z_]\w*))\s*\(', ln)
        if not m or ln.rstrip().endswith('{'):
            continue
        ret = DEF_RET.get(m.group(3))
        if not ret or ret == 'void':
            continue
        if '`' in ln or '@<' in ln:
            continue
        lines[i] = re.sub(r'^(\s*)(?:virtual\s+)?void(\s+~?' +
                          re.escape(m.group(3)) + r'\s*\()',
                          r'\g<1>' + ret + r'\g<2>', ln, count=1)
        stats['decl-flipped'] += 1
        ch = True
    if ch and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')

print('stats:', dict(stats), '(written)' if APPLY else '(DRY)')
