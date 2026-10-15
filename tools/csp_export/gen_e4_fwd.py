#!/usr/bin/env python3
"""Regenerate e4/classes/_fwd_e4.hpp (+_fwd_tree_e4.hpp stub).

_fwd_e4.hpp fwd-declares every class name the e4 universe references.
It is included ONLY from e4-universe TUs. Since the C2027 include bridges
(supply_tree_includes.py) pull TREE headers into e4 TUs, tree-owned
enum/using-alias/template names must NOT be fwd-declared as structs here
(C2011/C3431 collision with their real declarations).

_fwd_tree_e4.hpp: intentionally empty legacy stub (kept for the
e4_globals.hpp include line).

Usage: python tools/csp_export/gen_e4_fwd.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
E4C = ROOT / 'src' / 'e4' / 'classes'
APPLY = '--apply' in sys.argv

RESERVED = {'int', 'char', 'void', 'float', 'double', 'bool', 'short', 'long',
            'signed', 'unsigned', 'wchar_t', '__int8', '__int16', '__int32',
            '__int64', '__wchar_t', 'size_t',
            'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
            'int8_t', 'int16_t', 'int32_t', 'int64_t'}

# Windows/CRT types provided by the includes at the top of the header;
# a namespace-scope `struct X;` would shadow them and explode on member use
WINDOWS_TYPES = {'IN', 'OUT', 'OPTIONAL', 'PURE', 'CALLBACK', 'WINAPIV',
                 'TRUE', 'FALSE', 'NULL', 'MAX_PATH', 'HANDLE',
                 'IUnknown', 'IClassFactory', 'IMalloc', 'ISMalloc',
                 'IStream', 'ISequentialStream', 'IPersist', 'IPersistStream',
                 'IClassFactory2', 'IEnumUnknown', 'IMarshal',
                 'GUID', '_GUID', 'LARGE_INTEGER', 'ULARGE_INTEGER',
                 'VARIANT', 'BSTR', 'va_list', 'FILE', 'HRESULT',
                 'POINT', 'RECT', 'SIZE', 'POINTL', 'RECTL'}

ENUM_RE = re.compile(r'^[ \t]*enum(?:\s+class)?\s+([A-Za-z_]\w*)', re.M)
ALIAS_RE = re.compile(r'^[ \t]*using\s+([A-Za-z_]\w*)\s*=', re.M)
TMPL_RE = re.compile(
    r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)
# function templates: `template<...> void GameDelete(T* ptr)` — identifiers
# declared at template scope are not fwd-declarable as structs
FTMPL_RE = re.compile(r'^template[^\n]*\n[ \t]*[A-Za-z_][\w\s\*<>,:&]*?'
                      r'\b([A-Za-z_]\w*)\s*\(', re.M)
CLS_RE = re.compile(r'^[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)
FTCLS_RE = re.compile(
    r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)', re.M)


def _decl_ok(n):
    return (not n.startswith('_')
            and n not in RESERVED and n not in WINDOWS_TYPES)


# tree-owned names that cannot be struct-fwd-declared
tree_special = set()
for p in sorted(ROOT.joinpath('src').rglob('*.hpp')):
    s = str(p)
    if 'e4' in s or 'csp_canon' in s or '_generated' in s:
        continue
    try:
        t2 = p.read_text(encoding='latin-1', errors='replace')
    except OSError:
        continue
    if 'namespace ra2' in t2 or 'namespace gamemd' not in t2:
        continue
    tree_special |= set(ENUM_RE.findall(t2))
    tree_special |= set(ALIAS_RE.findall(t2))
    tree_special |= set(TMPL_RE.findall(t2))
    tree_special |= {n for n in FTMPL_RE.findall(t2) if not n.isupper()}

names = set()
for p in sorted(E4C.glob('*_e4.hpp')):
    txt = p.read_text(encoding='utf-8', errors='replace')
    names |= {n for n in
              re.findall(r'^[ \t]*struct\s+([A-Za-z_]\w*)\s*[^;]', txt, re.M)
              if _decl_ok(n)}
    names |= {n for n in re.findall(r'\b([A-Z]\w*)\s*[*&]', txt)
              if _decl_ok(n)}
try:
    mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                      .read_text(encoding='utf-8'))
except OSError:
    mtab = {}
# math.hpp defines aliases (CellStruct etc.) and templates (Vector2D etc.)
# in namespace gamemd — fwd-declaring them as structs would clash
MATH_HPP_NAMES = set()
try:
    for _mln in (ROOT / 'src' / 'core' / 'math.hpp').read_text(
            encoding='utf-8', errors='replace').splitlines():
        _mm = re.match(
            r'^\s*(?:struct|class|using|enum(?:\s+class)?)\s+([A-Za-z_]\w*)',
            _mln)
        if _mm:
            MATH_HPP_NAMES.add(_mm.group(1))
        _mm = re.match(
            r'^template[^\n]*\n[ \t]*(?:class|struct)\s+([A-Za-z_]\w*)',
            _mln + '\n')
        if _mm:
            MATH_HPP_NAMES.add(_mm.group(1))
except OSError:
    pass

names |= {n for n in mtab
          if re.match(r'^[A-Za-z_]\w*$', n) and _decl_ok(n)
          and n not in MATH_HPP_NAMES
          and n not in ('gamemd', 'ra2')}  # G42.57ax: namespace-name keys
# name-hide the namespace once emitted as `struct gamemd;` -- refuse here
# too so a data-side regression cannot reintroduce the C2027 cascade

# final filter: all-caps = Windows typedefs; tree enum/using-alias/template/
# function-template names cannot be struct-fwd-declared even in e4 TUs —
# their real declarations may co-enter via bridged tree headers (C3431/
# C2904). Tree PLAIN classes stay: e4 member decls reference them, and
# fwd-then-full is legal (_tree_full defines them; tree TUs no longer see
# _fwd since the e4_protos/_tree_full /FI unhooks — r47 verified).
# G41.8: e4's OWN flat struct definitions override tree alias exclusions —
# e4 TUs never include core/math.hpp, so a math `using X =` alias must not
# suppress the fwd of e4's struct X (CoordStruct: 1,142 C2065).
e4_own_structs = set()
for p in sorted(E4C.glob('*_e4.hpp')):
    e4_own_structs |= set(re.findall(
        r'^[ \t]*struct\s+([A-Za-z_]\w*)\s*\{',
        p.read_text(encoding='utf-8', errors='replace'), re.M))
names = {n for n in names
         if not n.isupper()
         and (n not in tree_special or n in e4_own_structs)}

lines = ['// GENERATED fwd declarations for the e4 universe (gen_e4_fwd.py).',
         '// Included ONLY from e4-universe TUs (never via the /FI chain).',
         '#pragma once', '', '#include <windows.h>', '#include <mmsystem.h>',
         '#include <dsound.h>', '#include <ddraw.h>', '#include <unknwn.h>',
         '#include <ios>', '#include <string>', '#include <cstdint>', '',
         'namespace gamemd {', '',
         '// winsock/BSD shorthand the raw corpus references; identical',
         '// typedef redeclaration is legal C++ if <winsock.h> defines them',
         'typedef unsigned short u_short;',
         'typedef unsigned long u_long;', '']
# X26: the four vector-family names are TEMPLATES in the tree universe
# (core/vector.hpp VectorClass<T>/DynamicVectorClass<T>/TypeList<T>;
# system/mix_file.hpp LinkedList<T>).  In TUs that pull the tree templates
# (GAMEMD_E4_VECTOR_TREE_TRUTH bridge, or tree TUs that leak _fwd via
# bridges), a non-template `struct X;` here poisons the template declaration
# (C2989/C2990/C3856 -> vector.inl parse cascade).  Mirror the
# _tree_full_e4.hpp guard exactly.
TEMPLATE_NAMES = {'VectorClass', 'DynamicVectorClass', 'TypeList',
                  'LinkedList'}
# X27: names that core/math.hpp declares as using-aliases (CellStruct =
# Vector2D<short>, CoordStruct = Vector3D<int>).  A namespace-scope
# `struct X;` here C2371-clashes with the alias in every TU that sees both
# (tree TUs, GAMEMD_E4_MATH_ALIASES e4 TUs, any TU where math.hpp lands
# first -> GAMEMD_MATH_ALIAS_ACTIVE marker).  Suppress the fwd in all three
# regimes; the alias (complete type) takes over there.
MATH_ALIAS_NAMES = {'CellStruct', 'CoordStruct'}
guarded = sorted(n for n in names if n in TEMPLATE_NAMES)
math_guarded = sorted(n for n in names
                      if n in MATH_ALIAS_NAMES and n not in TEMPLATE_NAMES)
plain = sorted(n for n in names
               if n not in TEMPLATE_NAMES and n not in MATH_ALIAS_NAMES)
lines += ['#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)']
lines += ['struct %s;' % n for n in guarded]
lines += ['#endif  // X26: tree-template names yield to core/vector.hpp']
lines += ['#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_MATH_ALIASES) && !defined(GAMEMD_MATH_ALIAS_ACTIVE)']
lines += ['struct %s;' % n for n in math_guarded]
lines += ['#endif  // X27: math.hpp aliases own CellStruct/CoordStruct']
lines += ['struct %s;' % n for n in plain]
lines += ['', '} // namespace gamemd', '']

lines_t = ['// INTENTIONALLY EMPTY (gen_e4_fwd.py): tree-owned enum/alias/',
           '// template names must never be fwd-declared here as structs',
           '// (C2011/C3431 poisoned tree TUs, r10/r11). Kept for the',
           '// e4_globals.hpp include line.',
           '#pragma once', '']

if APPLY:
    (E4C / '_fwd_e4.hpp').write_text('\n'.join(lines), encoding='utf-8')
    (E4C / '_fwd_tree_e4.hpp').write_text('\n'.join(lines_t),
                                          encoding='utf-8')
print(f'fwd: {len(names)} universe (excluded: {len(tree_special)} '
      f'tree enum/alias/tmpl + windows/builtins)')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
