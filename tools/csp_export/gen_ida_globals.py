#!/usr/bin/env python3
"""Declare+define bare IDA data labels referenced by landed bodies.

Bodies reference `dword_8A1B2C` / `byte_...` / `dbl_...` / `stru_...` style
labels plus named singleton globals (`g_RulesClass_Instance`,
`MapClass_Instance`). Those already declared in any src header are skipped
(same-type redeclaration is legal, different-type is C2371).

Emits:
  src/core/ida_globals.h    — extern decls (pulled in by ida_compat.h)
  src/core/ida_globals.cpp  — zero-initialized definitions

INTERIM FIDELITY NOTE: zero-filled placeholders; real .data images are a
later pipeline stage.

Usage: python tools/csp_export/gen_ida_globals.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv

LABEL = re.compile(
    r'\b((?:dword|word|byte|qword|float|double|dbl|off|unk|stru)'
    r'_[0-9A-Fa-f]{5,8}'
    r'|g_[A-Za-z]\w*_Instance'
    r'|[A-Z]\w*_Instance)\b')
TYPE = {'dword': 'unsigned int', 'word': 'unsigned short',
        'byte': 'unsigned char', 'qword': 'unsigned long long',
        'float': 'float', 'double': 'double', 'dbl': 'double', 'off': 'void*',
        'unk': 'unsigned char', 'stru': 'unsigned char'}


def gtype(name):
    m = re.match(r'^(\w+)_', name)
    if m and m.group(1) in TYPE:
        return TYPE[m.group(1)]
    return 'void*'   # g_*_Instance / *_Instance singletons


DECL = re.compile(
    r'\b((?:dword|word|byte|qword|float|double|dbl|off|unk|stru)'
    r'_[0-9A-Fa-f]{5,8}'
    r'|g_[A-Za-z]\w*_Instance'
    r'|[A-Z]\w*_Instance)\b')

declared = set()
for pat in ('*.hpp', '*.h'):
    for p in sorted(SRC.rglob(pat)):
        if '_generated' in str(p) or 'csp_canon' in str(p):
            continue
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        declared |= set(DECL.findall(txt))

used = set()
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p):
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    used |= set(LABEL.findall(txt))

# same-address alias coverage: a body may use word_87F5D8 while only
# dword_87F5D8 was declared — same address, different spelling. Each used
# spelling is declared on its own (different names, so no redecl conflict).
new = sorted(used - declared)
hdr = ['// GENERATED bare-global externs (gen_ida_globals.py).',
       '// Interim: zero-filled definitions, see ida_globals.cpp.',
       '#pragma once', '', 'namespace gamemd {', '']
cpp = ['// GENERATED bare-global definitions (gen_ida_globals.py).',
       '// INTERIM FIDELITY GAP: zero images; real .data contents are a',
       '// later pipeline stage.',
       '#include "ida_globals.h"', '', 'namespace gamemd {', '']
for n in new:
    ty = gtype(n)
    hdr.append('extern %s %s;' % (ty, n))
    cpp.append('%s %s = 0;' % (ty, n))
hdr += ['', '} // namespace gamemd', '']
cpp += ['', '} // namespace gamemd', '']
if APPLY:
    (SRC / 'core' / 'ida_globals.h').write_text('\n'.join(hdr),
                                                encoding='utf-8')
    (SRC / 'core' / 'ida_globals.cpp').write_text('\n'.join(cpp),
                                                  encoding='utf-8')
print(f'bare globals: {len(new)} new (of {len(used)} referenced)')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
