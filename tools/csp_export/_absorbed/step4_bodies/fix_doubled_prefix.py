# -*- coding: utf-8 -*-
"""G41.48: corpus-wide doubled-prefix line repair.

Old generator line-merge corruption: a line begins with an orphan token
followed by >=2 spaces and then text starting with that same token
(`Vector      Vector::RemoveAt(...)`, `v10  v10 = ...`). The orphan prefix
is dropped. Truth-preserving: the surviving text is the full statement.
Dry-run default; --apply writes.
"""
import re, os, sys

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
PAT = re.compile(r'^(\s*)(\S+?)(\s{2,})(\2\S*.*)$')

n = 0
files = 0
for fn in os.listdir(os.path.join(ROOT, 'src', 'e4')):
    if not fn.endswith('_e4.cpp'):
        continue
    p = os.path.join(ROOT, 'src', 'e4', fn)
    lines = open(p, encoding='utf-8', errors='replace').read().split('\n')
    touched = False
    for i, ln in enumerate(lines):
        m = PAT.match(ln)
        if m and m.group(4).startswith(m.group(2)):
            lines[i] = m.group(1) + m.group(4)
            n += 1
            touched = True
    if touched:
        files += 1
        if APPLY:
            open(p, 'w', encoding='utf-8', errors='replace', newline='\n').write('\n'.join(lines))
print('doubled-prefix lines repaired:', n, ' files:', files,
      ('(written)' if APPLY else '(DRY)'))
