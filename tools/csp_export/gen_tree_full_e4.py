#!/usr/bin/env python3
"""CSP-driven: generate full flat definitions for ALL tree-owned classes.

csp_canon_members.json already has the complete member layout for every
class in the binary. This generator emits those layouts as plain structs
in namespace gamemd so e4 TUs can access members on tree-owned classes.

Target set = every mtab class NOT already fully defined in
e4/classes/*_e4.hpp. No other exclusions — the e4 universe is
namespace-isolated and never sees tree headers.

Usage: python tools/csp_export/gen_tree_full_e4.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
E4C = SRC / 'e4' / 'classes'
OUT = E4C / '_tree_full_e4.hpp'
APPLY = '--apply' in sys.argv

mtab = json.loads((ROOT / 'anchors' / 'csp_canon_members.json')
                  .read_text(encoding='utf-8'))

# ---- names already fully defined in e4 classes ----
have = set()
for p in sorted(E4C.glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    txt = p.read_text(encoding='utf-8', errors='replace')
    have |= set(re.findall(r'^[ \t]*struct\s+(\w+)\s*\{', txt, re.M))
# also count fwd declarations (those classes already have a home)
fwd_txt = (E4C / '_fwd_e4.hpp').read_text(encoding='utf-8', errors='replace')
fwd_all = set(re.findall(r'struct\s+(\w+)\s*;', fwd_txt))

# ---- fixed-layout alias types (math.hpp semantics, not in mtab layout) ----
ALIAS_DEFS = {
    'CellStruct': [('short', 'x'), ('short', 'y')],
    'CoordStruct': [('int', 'x'), ('int', 'y'), ('int', 'z')],
    'Point2D': [('int', 'x'), ('int', 'y')],
}

PRIM = {'unsigned int', 'int', 'unsigned short', 'short', 'unsigned char',
        'signed char', 'char', 'bool', 'float', 'double', 'unsigned long',
        'long', 'unsigned long long', 'long long', 'void',
        'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t',
        'int8_t', 'int16_t', 'int32_t', 'int64_t'}
WINDOWS = {'DWORD', 'WORD', 'BYTE', 'HWND', 'HDC', 'HINSTANCE', 'HANDLE',
           'HRESULT', 'LONG', 'BOOL', 'UINT', 'LPVOID', 'LPCVOID', 'LPSTR',
           'LPCSTR', 'LPWSTR', 'LPCWSTR', 'WPARAM', 'LPARAM', 'LRESULT',
           'COLORREF', 'ATOM', 'HGLOBAL', 'HRSRC', 'HMENU', 'HACCEL',
           'HGDIOBJ', 'HBITMAP', 'HICON', 'HCURSOR', 'HFONT', 'HBRUSH',
           'HPEN', 'HRGN', 'HPALETTE', 'HKL', 'SIZE_T', 'ULONG', 'ULONG_PTR'}

RESERVED = PRIM | WINDOWS | {'void', 'wchar_t', 'va_list', 'FILE'}


def cpptype(t, size):
    """Map a mtab type string to compilable C++ for the e4 universe.
    All mtab names are safe as pointer bases (e4 TUs never see tree headers,
    so no template/alias clash). Only degrade to void* for truly unknown."""
    t = (t or '').strip()
    if not t:
        return 'unsigned int' if size >= 4 else 'unsigned char'
    m = re.match(r'^(.*?)\s*\*+$', t)
    if m:
        base = m.group(1).strip()
        if base in PRIM or not base[0].isupper():
            return t
        # any CamelCase name: safe as pointer (fwd-declared in _fwd)
        return t
    if t in PRIM:
        return t
    # value member of unknown class type → size-faithful char array
    return 'ARRAY:%d' % max(1, size or 1)


# ---- collect targets: every mtab class not already defined in e4 ----
targets = sorted(n for n in mtab
                 if re.match(r'^[A-Za-z_]\w*$', n)
                 and not n.startswith('__')
                 and not n.isupper()
                 and n not in RESERVED
                 and n not in have
                 and n not in ALIAS_DEFS)

# ---- emit ----
lines = ['// CSP-driven full flat definitions for ALL tree-owned classes.',
         '// (gen_tree_full_e4.py — no exclusions, csp_canon_members only.)',
         '#pragma once', '', '#include <cstdint>',
         '#include "e4/classes/_fwd_e4.hpp"', '',
         'namespace gamemd {', '']

# fwd-decl all targets first (members may point at later classes)
lines += ['struct %s;' % n for n in targets]
lines.append('')

n_cls = n_mem = 0
for cls in targets:
    ent = mtab.get(cls) or {}
    mems = ent.get('members') or {}
    own = {(mm.get('name') or '') for mm in mems.values()}
    used = set()
    body = ['    void* vfptr;']
    used.add('vfptr')
    for off in sorted(mems, key=int):
        mm = mems[off]
        nm = mm.get('name') or ('q%03X' % int(off))
        if nm in used or nm.startswith('__pad'):
            continue
        used.add(nm)
        o = int(off, 0)
        ty = cpptype(mm.get('type'), mm.get('size') or 4)
        if ty.startswith('ARRAY:'):
            body.append('    char %s[%s];  // 0x%X' % (nm, ty[6:], o))
        else:
            body.append('    %s %s;  // 0x%X' % (ty, nm, o))
        n_mem += 1
    lines.append('struct %s {' % cls)
    lines += body
    lines.append('};')
    lines.append('')
    n_cls += 1

lines += ['', '} // namespace gamemd', '']

if APPLY:
    OUT.write_text('\n'.join(lines), encoding='utf-8')
    # explicit includes in e4 cpps (not e4_globals — gap2 TUs include
    # math.hpp and would clash with our struct versions of aliases)
    n_inc = 0
    for p in sorted((SRC / 'e4').glob('*.cpp')):
        txt = p.read_text(encoding='latin-1', errors='replace')
        if '_tree_full_e4.hpp' in txt:
            continue
        lns = txt.split('\n')
        at = max(i for i, l in enumerate(lns) if l.startswith('#include'))
        lns.insert(at, '#include "e4/classes/_tree_full_e4.hpp"')
        p.write_bytes('\n'.join(lns).encode('latin-1', errors='replace'))
        n_inc += 1
    print(f'_tree_full includes added: {n_inc}')

print(f'tree full: {n_cls} classes, {n_mem} members '
      f'(mtab: {len(mtab)}, have: {len(have)}, targets: {len(targets)})')
print('APPLIED' if APPLY else 'DRY RUN (use --apply)')
