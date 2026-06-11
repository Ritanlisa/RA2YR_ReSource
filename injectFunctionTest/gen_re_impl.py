#!/usr/bin/env python3
"""Auto-generate RE_* wrapper functions for hook DLL shadow comparison.

Templates define the body logic with NAMED params (this_, point_ptr, color, etc.).
The function header is dynamically extended to match the actual parameter count
from the function signature (via CallRE dispatch order). Extra params are (void)-suppressed.
"""

import os

SCRIPT = os.path.dirname(os.path.abspath(__file__))
OUT_IMPL = os.path.join(SCRIPT, "gen", "re_impl.cpp")

CATEGORY_MAP = {
    "0x421b60": "global", "0x7bc2b0": "global",
    "0x7baeb0": "pixel_write", "0x7bae60": "pixel_read",
    "0x7baf90": "pixel_write", "0x7baf10": "pixel_read",
    "0x7bab90": "callback_line", "0x7ba610": "bresenham_line",
    "0x7ba5e0": "thin_wrapper", "0x7ba8c0": "dashed_line",
    "0x7bad90": "thin_wrapper", "0x7badc0": "rectangle",
    "0x7bbab0": "fill", "0x7bb350": "ellipse",
    "0x4f4780": "frame_present",
    "0x480110": "calc_draw_pos",
}

VT_LOCK=0x5C; VT_UNLOCK=0x60; VT_GETBPP=0x70; VT_GETPITCH=0x74
VT_GETRECT=0x78; VT_DRAWLINE_EX=0x2C; VT_FILLRECT_EX=0x10

def F(name, addr, param_names):
    params = ', '.join(f'DWORD {p}' for p in param_names) if param_names else ''
    return [f'// {name} @ {addr}', f'extern "C" DWORD RE_{name}({params}) {{']

def L(*args): return list(args)

PREAMBLE = [
    'DWORD vt = *(DWORD*)this_;',
    'typedef void* (__thiscall *LockFn)(void*,int,int);',
    'typedef bool (__thiscall *UnlockFn)(void*);',
    'typedef int (__thiscall *BppFn)(void*);',
    'typedef int (__thiscall *PitchFn)(void*);',
]

TEMPLATES = {}

# ---- pixel_write (thiscall) ----
TEMPLATES['pixel_write'] = L(
    *F('{name}', '{addr}', ['this_', 'point_ptr', 'color']),
    *PREAMBLE,
    'if (!point_ptr) return 0;',
    'int x = *(int*)(point_ptr + 0);',
    'int y = *(int*)(point_ptr + 4);',
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)this_, x, y);' % VT_LOCK,
    'if (!buf) return 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)this_);' % VT_GETBPP,
    'if (bpp == 2) *(unsigned short*)buf = (unsigned short)color;',
    'else *(unsigned char*)buf = (unsigned char)color;',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)this_);' % VT_UNLOCK,
    'return 1;',
    '}',
)

# ---- pixel_read (thiscall) ----
TEMPLATES['pixel_read'] = L(
    *F('{name}', '{addr}', ['this_', 'point_ptr']),
    *PREAMBLE,
    'if (!point_ptr) return 0;',
    'int x = *(int*)(point_ptr + 0);',
    'int y = *(int*)(point_ptr + 4);',
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)this_, x, y);' % VT_LOCK,
    'if (!buf) return 0;',
    'DWORD result = 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)this_);' % VT_GETBPP,
    'if (bpp == 2) result = *(unsigned short*)buf;',
    'else result = *(unsigned char*)buf;',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)this_);' % VT_UNLOCK,
    'return result;',
    '}',
)

# ---- bresenham_line (thiscall) ----
TEMPLATES['bresenham_line'] = L(
    *F('{name}', '{addr}', ['this_', 'p1', 'p2', 'p3', 'p4']),
    '(void)this_; (void)p1; (void)p2; (void)p3; (void)p4;',
    'return 0; // TODO: update for DrawLineEx RE',
    '}',
)

# ---- fill (thiscall) ----
TEMPLATES['fill'] = L(
    *F('{name}', '{addr}', ['this_', 'color']),
    'DWORD vt = *(DWORD*)this_;',
    'struct Rct { int x,y,w,h; } r;',
    'typedef struct Rct* (__thiscall *GrFn)(void*,struct Rct*);',
    '((GrFn)(*(DWORD*)(vt+0x%X)))((void*)this_, &r);' % VT_GETRECT,
    'typedef bool (__thiscall *FrFn)(void*,struct Rct*,struct Rct*,DWORD);',
    'return ((FrFn)(*(DWORD*)(vt+0x%X)))((void*)this_, &r, &r, color);' % VT_FILLRECT_EX,
    '}',
)

# ---- rectangle (thiscall) ----
TEMPLATES['rectangle'] = L(
    *F('{name}', '{addr}', ['this_', 'clip_ptr', 'draw_ptr', 'color']),
    'if (!this_ || !clip_ptr || !draw_ptr) return 0;',
    'int* clip=(int*)clip_ptr;',
    'int* draw=(int*)draw_ptr;',
    'int cx=clip[0], cy=clip[1], cr=cx+clip[2], cb=cy+clip[3];',
    'int x0=draw[0], y0=draw[1], x1=x0+draw[2]-1, y1=y0+draw[3]-1;',
    'if(x0>x1||y0>y1) return 0;',
    'DWORD vt=*(DWORD*)this_;',
    'typedef void*(__thiscall*Lk)(void*,int,int);',
    'typedef bool(__thiscall*Uk)(void*);',
    'typedef int(__thiscall*Bp)(void*);',
    'Lk Lock=(Lk)(*(DWORD*)(vt+0x%X));' % VT_LOCK,
    'Uk Unlock=(Uk)(*(DWORD*)(vt+0x%X));' % VT_UNLOCK,
    'Bp Bpp=(Bp)(*(DWORD*)(vt+0x%X));' % VT_GETBPP,
    'int bpp=Bpp((void*)this_);',
    'auto put=[&](int x,int y){',
    '  if(x<cx||x>=cr||y<cy||y>=cb) return;',
    '  void*b=Lock((void*)this_,x,y); if(!b) return;',
    '  if(bpp==2)*(unsigned short*)b=(unsigned short)color;',
    '  else *(unsigned char*)b=(unsigned char)color;',
    '  Unlock((void*)this_);',
    '};',
    'for(int x=x0;x<=x1;x++) put(x,y0);',
    'for(int x=x0;x<=x1;x++) put(x,y1);',
    'for(int y=y0+1;y<y1;y++) put(x0,y);',
    'for(int y=y0+1;y<y1;y++) put(x1,y);',
    'return 1;',
    '}',
)

# ---- ellipse (thiscall) ----
TEMPLATES['ellipse'] = L(
    *F('{name}', '{addr}', ['this_', 'p1', 'p2', 'p3', 'p4', 'p5']),
    '(void)this_; (void)p1; (void)p2; (void)p3; (void)p4; (void)p5;',
    'return 0; // TODO: update for DrawEllipseOutline RE',
    '}',
)

# ---- global (ClipLine — fastcall) ----
TEMPLATES['global'] = L(
    *F('{name}', '{addr}', ['start_ptr', 'end_ptr', 'clip_ptr']),
    'if (!start_ptr || !end_ptr || !clip_ptr) return 0;',
    'int* clip=(int*)clip_ptr;',
    'int clip_x=clip[0], clip_y=clip[1];',
    'double clip_r=(double)(clip_x+clip[2]);',
    'double clip_b=(double)(clip_y+clip[3]);',
    'double clip_xd=(double)clip_x;',
    'double clip_yd=(double)clip_y;',
    '',
    'int* start=(int*)start_ptr;',
    'int* end_=(int*)end_ptr;',
    'double x0=(double)start[0], y0=(double)start[1];',
    'double x1=(double)end_[0], y1=(double)end_[1];',
    '',
    'double dx=x1-x0, dy=y1-y0;',
    'double dxdy=(dy>=-0.0001&&dy<=0.0001)?0.0:dx/dy;',
    'double dydx=(dx>=-0.0001&&dx<=0.0001)?0.0:dy/dx;',
    '',
    'auto outcode=[&](double x, double y)->int{',
    '  int code;',
    '  if(x<clip_r) code=(x<clip_xd)?1:0;',
    '  else code=2;',
    '  if(y<clip_b){if(y<clip_yd) code|=8;}',
    '  else code|=4;',
    '  return code;',
    '};',
    '',
    'int c0=outcode(x0,y0);',
    'int c1=outcode(x1,y1);',
    '',
    'for(;;){',
    '  if(!c0&&!c1){',
    '    start[0]=(int)(x0>=0?x0+0.5:x0-0.5);',
    '    start[1]=(int)(y0>=0?y0+0.5:y0-0.5);',
    '    end_[0]=(int)(x1>=0?x1+0.5:x1-0.5);',
    '    end_[1]=(int)(y1>=0?y1+0.5:y1-0.5);',
    '    return 1;',
    '  }',
    '  if(c0&c1) return 0;',
    '  int c=c0?c0:c1;',
    '  double nx=0,ny=0;',
    '  if(c&8){',
    '    nx=(clip_yd-y0)*dxdy+x0; ny=clip_yd;',
    '  }else if(c&4){',
    '    ny=clip_b-1.0; nx=(ny-y0)*dxdy+x0;',
    '  }else if(c&2){',
    '    nx=clip_r-1.0; ny=(nx-x0)*dydx+y0;',
    '  }else{',
    '    ny=(clip_xd-x0)*dydx+y0; nx=clip_xd;',
    '  }',
    '  if(c==c0){x0=nx;y0=ny;c0=outcode(x0,y0);}',
    '  else{x1=nx;y1=ny;c1=outcode(x1,y1);}',
    '}',
    '}',
)

# ---- calc_draw_pos (thiscall) ----
# BuildingClass::CalcDrawPos — drawing position calculation
TEMPLATES['calc_draw_pos'] = L(
    *F('{name}', '{addr}', ['this_', 'p1']),
    '(void)this_; (void)p1;',
    'return 0; // TODO: implement CalcDrawPos RE',
    '}',
)

# ---- dashed_line, callback_line, thin_wrapper, frame_present ----
for cat in ('dashed_line','callback_line','thin_wrapper','frame_present'):
    TEMPLATES[cat] = L(
        *F('{name}', '{addr}', ['p0','p1','p2','p3']),
        '(void)p0; (void)p1; (void)p2; (void)p3;',
        'return 0; // TODO',
        '}',
    )

# ============================================================
# Generator — adapts template header to actual function signature
# ============================================================

def count_template_params(tmpl):
    """Count DWORD params in template's function header line (after '(')."""
    for line in tmpl:
        if line.startswith('extern "C"'):
            paren = line.find('(')
            if paren < 0:
                return 0
            return line[paren:].count('DWORD')
    return 0


def compute_expected_params(marker):
    """Compute how many DWORD params the RE function needs.
    Matches the CallRE dispatch order in gen_reverse_hooks.py."""
    conv = marker.get('convention', 'stdcall')
    num_p = len(marker.get('params', []))  # args after this (from C++ decl)

    if conv == 'thiscall':
        return 1 + num_p  # this + args
    elif conv == 'fastcall':
        # ECX=arg0, EDX=arg1, rest on stack
        if num_p <= 2:
            return num_p
        else:
            return num_p  # all params map to function args
    else:  # stdcall, cdecl
        return num_p


def generate_re_impl(markers):
    out = ['// Auto-generated RE_* functions for hook DLL',
           '// Generated by gen_re_impl.py',
           '#include <windows.h>', '']

    for m in markers:
        addr = m['addr']
        name = m['fn_name']
        mode = m.get('mode', 'None')
        if mode not in ('Inject', 'Replace'):
            continue

        cat = CATEGORY_MAP.get(addr)
        if cat is None:
            print(f'  WARNING: {addr} ({name}) no category in CATEGORY_MAP')
            continue

        tmpl = TEMPLATES.get(cat)
        if tmpl is None:
            print(f'  WARNING: {addr} no template for category {cat}')
            continue

        sanitized = name.replace('::','_').replace('@','_').replace('<','_').replace('>','_')

        # How many params the template expects
        tpl_count = count_template_params(tmpl)
        # How many params the actual function signature needs
        expected = compute_expected_params(m)

        # Extra params to append
        extra_count = max(0, expected - tpl_count)

        for line in tmpl:
            rendered = line.replace('{name}', sanitized).replace('{addr}', addr)

            # Extend function header with extra params
            if rendered.startswith('extern "C"'):
                if extra_count > 0:
                    extra = ', '.join(f'DWORD _p{i}' for i in range(tpl_count, expected))
                    rendered = rendered.replace(') {', f', {extra}) {{')

            out.append(rendered)

            # After opening brace, add (void) for extra params
            if rendered.rstrip().endswith('{'):
                for i in range(tpl_count, expected):
                    out.append(f'(void)_p{i};')

        out.append('')
        print(f'  RE_{sanitized} ({cat}) template={tpl_count} expected={expected} extra={extra_count}')

    os.makedirs(os.path.dirname(OUT_IMPL), exist_ok=True)
    with open(OUT_IMPL, 'w') as f:
        f.write('\n'.join(out))
    print(f'\nGenerated {OUT_IMPL} ({len(out)} lines)')


if __name__ == '__main__':
    test = [
        dict(addr='0x7baf10', fn_name='XSurface::GetPixelAtCoords', mode='Inject',
             convention='thiscall', params=[('ty','point',0),('ty','clip_rect',0)]),
        dict(addr='0x7baf90', fn_name='XSurface::PutPixel', mode='Inject',
             convention='thiscall', params=[('ty','point',0),('ty','color',0),('ty','clip_rect',0)]),
    ]
    generate_re_impl(test)
