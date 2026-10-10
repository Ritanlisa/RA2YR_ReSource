#!/usr/bin/env python3
"""G41.31: supply `struct X;` forward declarations for pointer-typed
method signatures in e4 class headers whose type names are not declared
anywhere in the TU's include closure (C2143/C4430 family).

Known-type universe: every struct defined or fwd-declared across src/
plus canon. A name absent from the header's own file AND unknown
anywhere gets `struct NAME;` prepended (redundant fwd decls are legal,
so over-supply is safe).

Usage: python tools/csp_export/fix_fwd_type_supply.py [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

KEYWORDS = {
    'void', 'int', 'char', 'bool', 'short', 'long', 'float', 'double',
    'unsigned', 'signed', 'const', 'struct', 'class', 'static', 'inline',
    'wchar_t', 'int8_t', 'int16_t', 'int32_t', 'int64_t', 'uint8_t',
    'uint16_t', 'uint32_t', 'uint64_t', 'size_t', 'FILE', 'HWND', 'HDC',
    'HRESULT', 'DWORD', 'WORD', 'BYTE', 'BOOL', 'LONG', 'UINT', 'LPSTR',
    'LPCSTR', 'HANDLE', 'HINSTANCE', 'LPARAM', 'WPARAM', 'RECT', 'POINT',
    'va_list', 'uintptr_t', 'intptr_t', '__int64',
}

# 1. typedef-name universe (fwd-declaring a typedef name = C2371)
typedefs = set()
for p in ROOT.glob('src/**/*.h*'):
    if 'build' in p.parts:
        continue
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    typedefs |= set(re.findall(r'\btypedef\s+[^;]*?\b([A-Za-z_]\w*)\s*;', txt))
print('typedef names:', len(typedefs))

PTR_TYPE = re.compile(r'\b([A-Za-z_]\w*)\s*\*+\s*\*?\s*([A-Za-z_]\w*)\s*[(;]')

n = 0
files = 0
for p in sorted((ROOT / 'src' / 'e4' / 'classes').glob('*_e4.hpp')):
    if p.name.startswith('_'):
        continue
    try:
        lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        continue
    local = set(re.findall(r'\bstruct\s+([A-Za-z_]\w*)', '\n'.join(lines)))
    need = []
    for l in lines:
        for m in PTR_TYPE.finditer(l):
            ty = m.group(1)
            if (ty in KEYWORDS or ty in typedefs or ty in local
                    or not re.match(r'^[A-Z]', ty)):
                continue
            need.append(ty)
            local.add(ty)
    if not need:
        continue
    # insert after the last #include line (or after the flat-members marker)
    ins = 0
    for i, l in enumerate(lines[:40]):
        if l.startswith('#include') or l.strip().startswith('//'):
            ins = i + 1
    for ty in need:
        lines.insert(ins, 'struct %s;  // fix_fwd_type_supply' % ty)
        ins += 1
        n += 1
    files += 1
    if APPLY:
        p.write_text('\n'.join(lines), encoding='utf-8')
print('fwd decls supplied: %d in %d files %s'
      % (n, files, '(written)' if APPLY else '(DRY)'))
