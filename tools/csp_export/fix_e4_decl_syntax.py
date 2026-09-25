#!/usr/bin/env python3
"""Fix mechanical mangling patterns in e4 class decls.

a) function-pointer params with doubled names:
   `int (__thiscall *a4)(int) a4` -> `int (__thiscall *a4)(int)`
b) dangling name after ellipsis: `... a4)` -> `...)`
c) constructor decls with a return type: `unsigned int * INIClass();`
   -> `INIClass();` (C2533)

Usage: python tools/csp_export/fix_e4_decl_syntax.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

FPTR_DUP = re.compile(r'(\*\s*\w+)\s*\)(\s*\([^()]*(?:\([^()]*\)[^()]*)*\))'
                      r'\s+(\w+)\s*([,)])')
ELLIPSIS = re.compile(r'\.\.\.\s+[A-Za-z_]\w*\s*([,)])')

tot = tot_files = 0
for p in sorted(E4C.glob('*_e4.hpp')):
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    m = re.search(r'struct\s+(\w+)\s*[^;{]*\{', txt)
    if not m:
        continue
    cls = m.group(1)
    orig = txt
    txt = FPTR_DUP.sub(lambda mm: mm.group(1) + ')' + mm.group(2) + mm.group(4),
                       txt)
    txt = ELLIPSIS.sub(r'...\1', txt)
    # ctor-shaped decl with a return type: `RET Cls(...);` -> `Cls(...);`
    def _ctordrop(mm):
        return '    %s%s' % (cls, mm.group(2))
    txt = re.sub(r'^(\s*)[A-Za-z_][\w\s\*<>,:&:]*?(\b%s\s*\([^)]*\)\s*;)'
                 % re.escape(cls), lambda mm: mm.group(1) + mm.group(2),
                 txt, flags=re.M)
    if txt != orig:
        n = (len(FPTR_DUP.findall(orig)) + len(ELLIPSIS.findall(orig)))
        tot += n
        tot_files += 1
        if APPLY:
            p.write_text(txt, encoding='utf-8')

print(f'decl syntax fixes: {tot} in {tot_files} headers')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')


# ---- cpp def lines: constructor defs with a return type ----
CTOR_DEF = re.compile(
    r'^(?P<ret>[A-Za-z_][\w\s\*<>,:&]*?\s)\s*'
    r'(?P<cls>[A-Za-z_]\w*)::(?P=cls)\s*\((?P<rest>.*)$')

tot_cpp = tot_cppf = 0
for p in sorted((ROOT / 'src' / 'e4').glob('*.cpp')):
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    orig = txt
    out = []
    for ln in txt.split('\n'):
        m = CTOR_DEF.match(ln)
        if m:
            ln = '%s::%s(%s' % (m.group('cls'), m.group('cls'), m.group('rest'))
            tot_cpp += 1
        out.append(ln)
    txt = '\n'.join(out)
    if txt != orig:
        tot_cppf += 1
        if APPLY:
            p.write_bytes(txt.encode('latin-1', errors='replace'))
print(f'ctor defs fixed: {tot_cpp} in {tot_cppf} cpps')
