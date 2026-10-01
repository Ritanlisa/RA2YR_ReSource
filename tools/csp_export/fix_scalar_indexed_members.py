#!/usr/bin/env python3
"""G41.27: generated-name members indexed as arrays in corpus get pointer
declarations (layout-preserving: 4B scalar -> 4B pointer).

The typed export renders `this->m_1[3]` / `X->__pad_C[i]` when the IDA-side
member is an array/pointer, but the flat-header generator emitted a scalar
`unsigned int m_1;` -> C2109 (subscript requires array or pointer).

Only GENERATED member names are rewritten (m_N, __pad_*, *_field_0x*,
qNNN): semantic names (PhoneNumber, radioLinks, ...) stay scalar pending
per-name adjudication.

Usage: python tools/csp_export/fix_scalar_indexed_members.py <buildlog> [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)

LN = re.compile(r'D:[^:]*RA2YR_ReSource[\\/](src[\\/][^(]+)[\\/]?[(](\d+),\d+[)]: error C2109')
GEN_NAME = re.compile(r'^(m_\d+|__pad_[0-9A-Fa-f]+|[A-Za-z]\w*_field_0x[0-9A-Fa-f]+|q[0-9A-F]{3})$')
USE = re.compile(r'(?:->|\.)\s*([A-Za-z_]\w*)\s*\[')
GEN_PAT = r'(m_\d+|__pad_[0-9A-Fa-f]+|[A-Za-z]\w*_field_0x[0-9A-Fa-f]+|q[0-9A-F]{3})'
DECL = re.compile(r'^(\s*(?:unsigned |signed |const )*(?:int|char|short|long|bool|unsigned|__int64)\s+)'
                  + GEN_PAT + r'(\s*(?:=[^;]*)?;.*)$')

# 1. collect indexed member names from C2109 error lines
names = set()
for ln in Path(LOG).read_text(errors='replace').splitlines():
    m = LN.match(ln.replace('\\', '/'))
    if not m:
        continue
    fp, line = m.group(1).replace('/', '\\'), int(m.group(2))
    p = ROOT / fp
    if not p.exists():
        continue
    try:
        ls = p.read_text(errors='replace').splitlines()
    except OSError:
        continue
    if line <= len(ls):
        for um in USE.finditer(ls[line - 1]):
            if GEN_NAME.match(um.group(1)):
                names.add(um.group(1))
print('indexed generated members:', len(names), sorted(names)[:12])

# 2. rewrite scalar decls to pointer decls across headers
n = 0
files = 0
for p in sorted(ROOT.glob('src/**/*.hp*')):
    if 'build' in p.parts or not p.is_file():
        continue
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    if not any(('%s;' % nm) in txt or ('%s ;' % nm) in txt for nm in names):
        continue
    out = []
    hit = False
    for l in txt.split('\n'):
        dm = DECL.match(l)
        if dm and dm.group(2) in names:
            out.append('%s*%s%s' % (dm.group(1), dm.group(2), dm.group(3)))
            hit = True
            n += 1
        else:
            out.append(l)
    if hit:
        files += 1
        if APPLY:
            p.write_text('\n'.join(out), encoding='utf-8')
print('decls rewritten: %d in %d files %s' % (n, files, '(written)' if APPLY else '(DRY)'))
