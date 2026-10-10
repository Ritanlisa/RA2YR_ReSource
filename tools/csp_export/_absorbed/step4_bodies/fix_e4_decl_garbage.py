#!/usr/bin/env python3
"""Fix garbage method declarations (headers + signature lines tree-wide).

Generated decls/defs carry IDA proto pollution that breaks compilation:
  - `void*this@<ecx> a1`   register-annotated this param  -> `void *a1`
  - `void*this a1`         glued this param (stripped ann)-> `void *a1`
  - `int f(... a4);`       named variadic placeholder     -> `int f(...);`
  - `int *a2 a2`           ghost duplicated param name    -> `int *a2`
  - duplicate decls with identical normalized signature (C2535) -> keep first

Line-scoped: only signature-shaped lines carrying the pollution markers are
touched; body code is never rewritten.

Usage: python tools/csp_export/fix_e4_decl_garbage.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

REG_ANN = re.compile(r'@<[A-Za-z][A-Za-z0-9:]*(?::[A-Za-z]+)*>')
THIS_PARAM = re.compile(
    r'([A-Za-z_][\w:<>,\s\*]*?)\s*\bthis(?:@[A-Za-z]*<[^>]*>)?'
    r'(?::[A-Za-z]+)*\s*(?=[A-Za-z_]\w*\s*[,)])')
NAMED_VARARG = re.compile(r'\.\.\.\s+[A-Za-z_]\w*\s*(?=[,)])')
GHOST_DUP = re.compile(
    r'([A-Za-z_][\w:<>,\s\*]*?)\s*([A-Za-z_]\w+)\s+\2(?=\s*[,)])')
# `int int` / `char char` doubles (NOT `long long`, which is a legal type)
TYPE_DUP = re.compile(
    r'\b(int|char|short|unsigned|signed|float|double)\s+\1\b')
# `int unsigned int` / `int signed int` triples
TYPE_TRIPLE = re.compile(
    r'\bint\s+(unsigned|signed)\s+int\b')
SIG_LINE = re.compile(r'^\s*[^=;]*\b\w+\s*\([^;]*$')


def fix_line(ln):
    orig = ln
    if '@<' in ln:
        ln = THIS_PARAM.sub(
            lambda m: re.sub(r'[\s\*]+$', '', m.group(1)) + ' *', ln)
        ln = REG_ANN.sub('', ln)
    if re.search(r'\.\.\.\s+[A-Za-z_]\w*', ln):
        ln = NAMED_VARARG.sub('...', ln)
    if '(' in ln and re.search(r'\b([A-Za-z_]\w*)\s+\1\b', ln):
        ln = GHOST_DUP.sub(
            lambda m: '%s %s' % (m.group(1).rstrip(), m.group(2)), ln)
    if '(' in ln:
        ln = TYPE_TRIPLE.sub(r'\1 int', ln)
        ln = TYPE_DUP.sub(r'\1', ln)
    return ln if ln != orig else None


tot_f = tot_l = 0
for p in sorted(ROOT.joinpath('src').rglob('*')):
    if p.suffix not in ('.cpp', '.hpp', '.h') or not p.is_file():
        continue
    if '_fwd_e4' in p.name or p.name.startswith('_tree'):
        pass  # still fine: signature-line scoping keeps them safe
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    lines = txt.split('\n')
    n = 0
    for i, ln in enumerate(lines):
        if ('@<' not in ln and '(' not in ln):
            continue
        if not SIG_LINE.match(ln):
            continue
        new = fix_line(ln)
        if new is not None:
            lines[i] = new
            n += 1
    if n:
        tot_f += 1
        tot_l += n
        print('%4d  %s' % (n, p.relative_to(ROOT)))
        if APPLY:
            p.write_bytes('\n'.join(lines).encode('latin-1',
                                                  errors='replace'))

print('files: %d, lines: %d' % (tot_f, tot_l))
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
