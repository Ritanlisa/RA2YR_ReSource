#!/usr/bin/env python3
"""G41.31: drop `static` from e4 class decls whose corpus DEF uses `this`.

C2671 residue: minimal-flat headers declare methods `static` (an artifact
of the header generator's member/static classification) while the
materialized def body dereferences `this` -- the def is the compiled
truth, so the decl loses `static`.

Usage: python tools/csp_export/fix_c2671_static_decls.py <log> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
Q = chr(0x201C) + chr(0x201D)

targets = set()
for ln in Path(LOG).read_text(errors='replace').splitlines():
    m = re.search(r'error C2671: [' + Q + r']([^' + Q + r']+)::(\w+|~\w+|\{ctor\})[' + Q + r']', ln)
    if m and m.group(1).startswith('gamemd::'):
        cls = m.group(1).split('::', 1)[1]
        targets.add((cls, m.group(2)))
print('static-mismatch pairs:', len(targets))

n = 0
for p in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    cls = None
    changed = False
    for i, l in enumerate(lines):
        sm = re.match(r'\s*struct\s+(\w+)\s*\{', l)
        if sm:
            cls = sm.group(1)
            continue
        dm = re.match(r'(\s*)static\s+([A-Za-z_][\w:<>,\s\*&]*?[\s\*])'
                      r'(~?[A-Za-z_]\w*)\(', l)
        if not dm:
            continue
        # ctor form {ctor} matches the plain class-name ctor decls
        nm = dm.group(3)
        if (cls, nm) in targets or (cls, '{ctor}') in targets and nm == cls:
            lines[i] = '%s%s%s(' % (dm.group(1), dm.group(2), nm)
            n += 1
            changed = True
    if changed and APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
print('static qualifiers dropped: %d %s' % (n, '(written)' if APPLY else '(DRY)'))
