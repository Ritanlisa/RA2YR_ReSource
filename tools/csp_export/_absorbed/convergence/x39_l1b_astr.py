#!/usr/bin/env python3
"""X39 L1b: a*-string atom decl unification (char[N], binary-true).

Q1 binary evidence: 822/830 a*-atoms verified ANSI char strings in .data
(astr_verify.json; 8 excluded = 6 wrong-addr decls + aP5/aP6 non-string).

Scope (L337 dual-vocab discipline):
  - 689 atoms whose decls are ARRAY-form (uchar[N] / const char[] / char[N]).
  - EXCLUDED: 133 scalar-only-decl atoms (byte-value vocabulary), 18
    wchar_t[] (wide class unverified), 17 char* decls, non-ANSI 8.

Rewrite: every extern decl line of an in-scope atom ->
  `extern char NAME[slen+1];`  (const dropped: .data is writable; bound =
  binary string length incl NUL). Comments/anchors preserved verbatim.
Idempotent: skip lines already equal to target. Byte-safe I/O.

Usage: python x39_l1b_astr.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
while not (ROOT / 'src' / 'core' / 'globals_core.hpp').exists() and ROOT != ROOT.parent:
    ROOT = ROOT.parent
EV = Path(r'D:\RA2YR_ReSource') / '.omo' / 'evidence' / 'optimization' / 'x39'  # X47 path-normalization: original derived EV from __file__ (evidence dir); absorbed copy points at the evidence dir explicitly
APPLY = '--apply' in sys.argv

data = json.load((EV / 'astr_decls.json').open(encoding='utf-8'))
verify = json.load((EV / 'astr_verify.json').open(encoding='utf-8'))
ansi = set(data['ansi'])

decls = data['decls']
# array-decl, ANSI-verified atoms only
scope = {}
for name, ds in decls.items():
    if name not in ansi or name not in verify:
        continue
    if any(d['arr'] for d in ds):
        scope[name] = verify[name]['slen'] + 1

DECL_RE = re.compile(
    r'^(?P<indent>\s*)extern\s+(?P<ty>(?:const\s+)?(?:unsigned\s+)?(?:char|wchar_t|int))\s*(?P<ptr>\*)?\s*'
    r'(?P<name>a[A-Z][A-Za-z0-9_]*)\s*(?P<arr>\[[^\];]*\])?\s*;'
    r'(?P<tail>.*)$')

n_decl = 0
files_touched = {}
decl_files = sorted({d['file'].replace('/', '\\') for v in decls.values() for d in v})
for f in decl_files:
    if f.endswith('.c'):
        continue
    p = ROOT / f
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    lines = txt.split('\n')
    out = []
    n = 0
    for ln in lines:
        m = DECL_RE.match(ln)
        if m and m.group('name') in scope and not m.group('ptr'):
            nm = m.group('name')
            target = '%sextern char %s[%d];%s' % (m.group('indent'), nm, scope[nm], m.group('tail'))
            if ln != target:
                ln = target
                n += 1
        out.append(ln)
    if n:
        n_decl += n
        files_touched[f] = n
        if APPLY:
            p.write_bytes('\n'.join(out).encode('latin-1'))

print('L1b scope atoms: %d' % len(scope))
print('decl rewrites: %d across %d files' % (n_decl, len(files_touched)))
for k, v in sorted(files_touched.items()):
    print('   %4d %s' % (v, k))
if not APPLY:
    print('DRY RUN (pass --apply)')
