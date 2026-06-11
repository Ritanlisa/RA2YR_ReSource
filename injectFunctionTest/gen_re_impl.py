#!/usr/bin/env python3
"""Auto-generate RE_* thin shim wrappers.
Each RE function casts DWORD params to actual C++ types and calls
the implementation (available via gamemd_core static library).
Zero templates — the C++ source IS the implementation."""

import os, re

SCRIPT = os.path.dirname(os.path.abspath(__file__))
OUT_IMPL = os.path.join(SCRIPT, "gen", "re_impl.cpp")

def _bare(ty):
    """Strip qualifiers, references, pointer stars, array brackets to get bare type name."""
    t = ty.strip()
    t = re.sub(r'\bconst\b\s*', '', t)
    t = re.sub(r'\bvolatile\b\s*', '', t)
    t = re.sub(r'\bstatic\b\s*', '', t)
    # Don't strip * for function pointers (*)(...)
    if '(*' not in t:
        t = t.replace('*','')
    t = t.replace('&','').strip()
    t = t.split('[')[0].strip()
    return t

def _cast_arg(ty, pi):
    """Generate cast expression for parameter at position pi."""
    ty = ty.strip()
    # Function pointer → C-style cast from declaration type
    if '(*' in ty:
        sig = re.sub(r'\(\*\s*\w+\s*\)', '(*)', ty)
        return f'(({sig}){pi})'
    if '&' in ty and '*' not in ty:
        b = _bare(ty)
        return f'*(const {b}*){pi}'
    if '*' in ty:
        b = _bare(ty)
        return f'({b}*){pi}'
    if '[' in ty:
        b = _bare(ty)
        return f'({b}*){pi}'
    b = _bare(ty)
    if not b: return f'(DWORD){pi}'
    return f'({b}){pi}'

def _resolve_name(name, full_sig=''):
    """Resolve C++ function name. If name has :: and method starts with digit,
    it's a JSON mis-parse — use the full signature to get the real name."""
    if '::' not in name:
        return (False, '', name)
    parts = name.rsplit('::', 1)
    cls, mtd = parts
    if mtd and mtd[0].isdigit():
        # JSON mis-parse: e.g. Palette::6BitTo16Bit → Palette6BitTo16Bit
        # Try to extract real name from full_sig
        if full_sig:
            m = re.search(r'(?:\w+(?:::\w+)*)\s+(\w+(?:::\w+)*)\s*\(', full_sig)
            if m: return (False, '', m.group(1))
        return (False, '', cls + mtd)
    return (True, cls, mtd)

def generate_re_impl(markers):
    out = [
        '// Auto-generated RE_* thin shims — call gamemd_core implementations',
        '#include <windows.h>',
        '#include <gamemd/core/math.hpp>',
        '#include <gamemd/render/surface.hpp>',
        'using namespace gamemd;',
        '',
    ]
    # Generate forward declarations for free functions without headers
    seen = set()
    for m in markers:
        if m.get('mode') not in ('Inject', 'Replace'): continue
        name = m['fn_name']; full = m.get('full_sig','')
        is_method, cls, fn = _resolve_name(name, full)
        if is_method: continue
        if fn in seen: continue
        seen.add(fn)
        if not is_method and fn in ('Palette6BitTo16Bit',):
            out.append('static inline int Palette6BitTo16Bit(int r,int g,int b){return ((unsigned char)b<<16)|((unsigned char)g<<8)|(unsigned char)r;}')
        elif full and '(' in full:
            out.append(f'namespace gamemd {{ {full}; }}')
        else:
            out.append(f'// Warning: no declaration for {fn}')
    if seen: out.append('')
    for m in markers:
        mode = m.get('mode', 'None')
        if mode not in ('Inject', 'Replace'):
            continue
        addr     = m['addr']
        name     = m['fn_name']
        conv     = m.get('convention', 'stdcall')
        params   = m.get('params', [])
        ret_type = m.get('ret_type', '').strip()
        sanitized = name.replace('::','_').replace('@','_').replace('<','_').replace('>','_')

        is_method, cls, fn = _resolve_name(name, m.get('full_sig', ''))

        pnames = []
        if conv == 'thiscall':
            pnames.append('p0')        # this (not in marker params)
        for i in range(len(params)):
            pnames.append(f'p{len(pnames)}')
        if not pnames: pnames.append('p0')

        pstr = ', '.join(f'DWORD {pn}' for pn in pnames)
        out.append(f'// {name} @ {addr}')
        out.append(f'extern "C" DWORD RE_{sanitized}({pstr}) {{')

        # Thin shim: cast + call
        arg_off = 1 if conv == 'thiscall' else 0
        args = []
        for i, pt in enumerate(params):
            args.append(_cast_arg(pt[0], f'p{i + arg_off}'))
        arg_str = ', '.join(args) if args else ''

        if is_method and conv == 'thiscall':
            call = f'(({cls}*)p0)->{fn}({arg_str})'
        else:
            call = f'{fn}({arg_str})'

        if not ret_type or 'void' in ret_type.lower():
            out.append(f'  {call};')
            out.append('  return 0;')
        else:
            out.append(f'  return (DWORD)({call});')

        out.append('}')
        out.append('')
        print(f'  RE_{sanitized} {pstr}')

    os.makedirs(os.path.dirname(OUT_IMPL), exist_ok=True)
    with open(OUT_IMPL, 'w', encoding='utf-8') as f:
        f.write('\n'.join(out))
    print(f'\nGenerated {OUT_IMPL} ({len(out)} lines)')


if __name__ == '__main__':
    pass
