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
    r'\b((?:dword|word|byte|qword|float|double|dbl|off|unk|stru|xmmword)'
    r'_[0-9A-Fa-f]{5,8}'
    r'|g_[A-Za-z]\w*'
    r'|[A-Z]\w*_Instance'
    r'|[A-Z]\w*_Vtable'
    r'|CCINIClass_INI_[A-Za-z]+)\b')
TYPE = {'dword': 'unsigned int', 'word': 'unsigned short',
        'byte': 'unsigned char', 'qword': 'unsigned long long',
        'float': 'float', 'double': 'double', 'dbl': 'double', 'off': 'void*',
        'unk': 'unsigned char', 'stru': 'unsigned char',
        'xmmword': 'xmmword_t'}


def gtype(name):
    m = re.match(r'^(\w+)_', name)
    if m and m.group(1) in TYPE:
        return TYPE[m.group(1)]
    return 'void*'   # g_*_Instance / *_Instance singletons


DECL = re.compile(
    r'\b((?:dword|word|byte|qword|float|double|dbl|off|unk|stru|xmmword)'
    r'_[0-9A-Fa-f]{5,8}'
    r'|g_[A-Za-z]\w*'
    r'|[A-Z]\w*_Instance'
    r'|[A-Z]\w*_Vtable'
    r'|CCINIClass_INI_[A-Za-z]+)\b')

declared = set()
for pat in ('*.hpp', '*.h'):
    for p in sorted(SRC.rglob(pat)):
        if '_generated' in str(p) or 'csp_canon' in str(p):
            continue
        # own outputs are not "declarations seen elsewhere" — counting them
        # makes the rewrite non-idempotent (a name emitted by run N is
        # treated as already-declared by run N+1 and silently dropped)
        if p.name in ('ida_globals.h', 'ida_globals.cpp'):
            continue
        try:
            txt = p.read_text(encoding='latin-1', errors='replace')
        except OSError:
            continue
        # strip comments: a name mentioned only in a comment (e.g. a vtable
        # address note) is NOT a declaration — declaring it again is legal.
        txt = re.sub(r'//[^\n]*', ' ', txt)
        txt = re.sub(r'/\*.*?\*/', ' ', txt, flags=re.S)
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
# A name DEFINED in any cpp (real definition, e.g. core/globals.cpp) must be
# skipped entirely — declaring it here is fine (extern), but defining it in
# ida_globals.cpp would be LNK2005.
defined = set()
def_types = {}   # name -> concrete type from a real cpp definition
_CXX_KW = {
    'return', 'else', 'if', 'while', 'for', 'switch', 'case', 'break',
    'continue', 'goto', 'delete', 'sizeof', 'new', 'throw', 'using',
    'namespace', 'typedef', 'do', 'else', 'try', 'catch', 'return',
}


def _type_ok(ty):
    return ty.split()[0] not in _CXX_KW


DEFINITION = re.compile(
    r'^\s*((?:unsigned\s+)?\w+(?:\s*\*+)*)\s+(\w+)\s*=\s*[^;]', re.M)
# file-local statics are also definitions (default-initialized, no `=`);
# their concrete type is authoritative over gtype()'s void* default --
# an `extern void* g_running` colliding with `static bool g_running`
# in the app TUs is a C2040 face (game_loop.cpp, G41.40).
STATIC_DEF = re.compile(
    r'^\s*static\s+((?:unsigned\s+)?\w+(?:\s*\*+)*)\s+(\w+)\s*[;\[=]', re.M)
for p in sorted(SRC.rglob('*.cpp')):
    if '_generated' in str(p) or 'csp_canon' in str(p) \
            or p.name == 'ida_globals.cpp':
        continue
    try:
        txt = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    txt = re.sub(r'//[^\n]*', ' ', txt)
    txt = re.sub(r'/\*.*?\*/', ' ', txt, flags=re.S)
    for m in DEFINITION.finditer(txt):
        defined.add(m.group(2))
        if _type_ok(m.group(1)):
            def_types.setdefault(m.group(2), m.group(1).strip())
    for m in STATIC_DEF.finditer(txt):
        defined.add(m.group(2))
        if _type_ok(m.group(1)):
            def_types.setdefault(m.group(2), m.group(1).strip())

_PRIMITIVE_TYPES = {
    'bool', 'int', 'unsigned int', 'char', 'unsigned char', 'short',
    'unsigned short', 'long', 'unsigned long', 'long long',
    'unsigned long long', 'float', 'double', 'void', 'wchar_t',
    'unsigned', 'signed int', 'signed char',
}


def _is_primitive(ty):
    base = ty.replace('*', '').strip()
    return base in _PRIMITIVE_TYPES


# names referenced by the e4/_gap2 corpus need cross-universe visibility
_e4_used = set()
for _p in list((SRC / 'e4').rglob('*.cpp')) + list((SRC / '_gap2').rglob('*.cpp')):
    try:
        _e4_used |= set(LABEL.findall(
            _p.read_text(encoding='latin-1', errors='replace')))
    except OSError:
        continue


def _needs_sys_include(ty):
    """Map a def type to a system include ida_globals.h must carry."""
    t = ty.replace('*', '').strip()
    if t.startswith(('LPDIRECTDRAW', 'DIRECTDRAW', 'DDSCAPS', 'DDPIXEL',
                     'DDSURFACE', 'LPDDS', 'DDCOLORKEY')):
        return '<ddraw.h>'
    return None


new = sorted(used - declared)
# names already DEFINED in a cpp (e.g. core/globals.cpp) still need the
# extern declaration for OTHER TUs — but must not get a second definition
# here (LNK2005). Split: declare all `new`; define only the cpp-undefined.
# non-primitive def types split by cross-universe need:
#   - primitive            -> emit extern with the def type
#   - non-primitive + e4   -> emit extern with the def type + sys include
#   - non-primitive, no e4 -> drop (its host cpp/header owns it)
sys_includes = set()
drop = set()
for n in new:
    ty = def_types.get(n)
    if ty is None or _is_primitive(ty):
        continue
    if n in _e4_used:
        inc = _needs_sys_include(ty)
        if inc:
            sys_includes.add(inc)
        else:
            drop.add(n)   # type not satisfiable here; host owns it
    else:
        drop.add(n)
new = [n for n in new if n not in drop]
defined_new = sorted(n for n in new if n in defined)
undef_new = sorted(n for n in new if n not in defined)
hdr = ['// GENERATED bare-global externs (gen_ida_globals.py).',
       '// Interim: zero-filled definitions, see ida_globals.cpp.',
       '#pragma once', '',
       '#ifndef GAMEMD_XMMWORD_T', '#define GAMEMD_XMMWORD_T',
       'typedef unsigned char xmmword_t[16];', '#endif', '']
for inc in sorted(sys_includes):
    hdr.append('#include %s' % inc)
if sys_includes:
    hdr.append('')
hdr += ['namespace gamemd {', '']
cpp = ['// GENERATED bare-global definitions (gen_ida_globals.py).',
       '// INTERIM FIDELITY GAP: zero images; real .data contents are a',
       '// later pipeline stage.',
       '#include "ida_globals.h"', '', 'namespace gamemd {', '']
for n in new:
    ty = def_types.get(n) or gtype(n)
    hdr.append('extern %s %s;' % (ty, n))
for n in undef_new:
    ty = gtype(n)
    cpp.append('%s %s = 0;' % (ty, n))
hdr += ['', '} // namespace gamemd', '']
cpp += ['', '} // namespace gamemd', '']
if APPLY:
    (SRC / 'core' / 'ida_globals.h').write_text('\n'.join(hdr),
                                                encoding='utf-8')
    (SRC / 'core' / 'ida_globals.cpp').write_text('\n'.join(cpp),
                                                  encoding='utf-8')
print(f'bare globals: {len(new)} declared '
      f'({len(defined_new)} cpp-defined: extern only), '
      f'{len(undef_new)} defined here (of {len(used)} referenced)')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
