#!/usr/bin/env python3
"""Auto-generate RE_* wrapper functions for hook DLL shadow comparison.

Templates define algorithm logic using POSITIONAL params (p0, p1, p2...).
The function header is generated dynamically from the ACTUAL function
definition right below the REVERSE marker (parsed from C++ source).

No hardcoded param names. No (void) dummy params.
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
    "0x6c8c40": "stub", "0x4355b0": "stub", "0x4a38d0": "stub",
    "0x48d080": "stub", "0x5b40b0": "stub", "0x52ba60": "stub",
    "0x55d360": "stub", "0x55cfd0": "stub", "0x48c8b0": "stub",
    "0x52d9a0": "stub", "0x48ccc0": "stub", "0x530000": "stub",
    "0x410260": "stub", "0x473c50": "stub", "0x4a3890": "stub",
    "0x473ce0": "stub", "0x535aa0": "stub", "0x535b30": "stub",
    "0x4741f0": "stub", "0x5301a0": "stub",
}

VT_LOCK=0x5C; VT_UNLOCK=0x60; VT_GETBPP=0x70; VT_GETPITCH=0x74
VT_GETRECT=0x78; VT_DRAWLINE_EX=0x2C; VT_FILLRECT_EX=0x10

def L(*args): return list(args)

# ============================================================
# Templates 鈥?positional params: p0, p1, p2, ...
# For thiscall: p0=this, p1=first stack arg, p2=second, ...
# For fastcall: p0=ecx, p1=edx, p2=first stack, ...
# For stdcall:  p0=first stack, p1=second, ...
# ============================================================

TEMPLATES = {}

# ---- pixel_write: writes one pixel via Lock/Unlock ----
# p0=this, p1=point_ptr, p2=color, [p3=clip_ptr for clipped variants]
TEMPLATES['pixel_write'] = [
    'if (!p1) return 0;',
    'int x = *(int*)(p1 + 0);',
    'int y = *(int*)(p1 + 4);',
    '',
    '// Clip check (p3 present for PutPixel)',
    '@p3_if',
    'int* cr=(int*)p3;',
    'if(x<cr[0]||y<cr[1]||x>=cr[0]+cr[2]||y>=cr[1]+cr[3]) return 0;',
    '@p3_endif',
    '',
    'DWORD vt = *(DWORD*)p0;',
    'typedef void* (__thiscall *Lk)(void*,int,int);',
    'typedef bool (__thiscall *Uk)(void*);',
    'typedef int (__thiscall *Bp)(void*);',
    'void* buf = ((Lk)(*(DWORD*)(vt+0x%X)))((void*)p0, x, y);' % VT_LOCK,
    'if (!buf) return 0;',
    'int bpp = ((Bp)(*(DWORD*)(vt+0x%X)))((void*)p0);' % VT_GETBPP,
    'if (bpp == 2) *(unsigned short*)buf = (unsigned short)p2;',
    'else *(unsigned char*)buf = (unsigned char)p2;',
    '((Uk)(*(DWORD*)(vt+0x%X)))((void*)p0);' % VT_UNLOCK,
    'return 1;',
]

# ---- pixel_read: reads one pixel via Lock/Unlock ----
# p0=this, p1=point_ptr, [p2=clip_ptr for clipped variants]
TEMPLATES['pixel_read'] = [
    'if (!p1) return 0;',
    'int x = *(int*)(p1 + 0);',
    'int y = *(int*)(p1 + 4);',
    '',
    '// Clip check (p2 may be clip_ptr for GetPixelAtCoords)',
    '@p2_if',
    'int* cr=(int*)p2;',
    'if(x<cr[0]||y<cr[1]||x>=cr[0]+cr[2]||y>=cr[1]+cr[3]) return 0;',
    '@p2_endif',
    '',
    'DWORD vt = *(DWORD*)p0;',
    'typedef void* (__thiscall *Lk)(void*,int,int);',
    'typedef bool (__thiscall *Uk)(void*);',
    'typedef int (__thiscall *Bp)(void*);',
    'void* buf = ((Lk)(*(DWORD*)(vt+0x%X)))((void*)p0, x, y);' % VT_LOCK,
    'if (!buf) return 0;',
    'DWORD result = 0;',
    'int bpp = ((Bp)(*(DWORD*)(vt+0x%X)))((void*)p0);' % VT_GETBPP,
    'if (bpp == 2) result = *(unsigned short*)buf;',
    'else result = *(unsigned char*)buf;',
    '((Uk)(*(DWORD*)(vt+0x%X)))((void*)p0);' % VT_UNLOCK,
    'return result;',
]

# ---- fill: fills a rectangle via GetRect + FillRectEx ----
# p0=this, p1=color
TEMPLATES['fill'] = [
    'DWORD vt = *(DWORD*)p0;',
    'struct Rct { int x,y,w,h; } r;',
    'typedef struct Rct* (__thiscall *Gr)(void*,struct Rct*);',
    '((Gr)(*(DWORD*)(vt+0x%X)))((void*)p0, &r);' % VT_GETRECT,
    'typedef bool (__thiscall *Fr)(void*,struct Rct*,struct Rct*,DWORD);',
    'return ((Fr)(*(DWORD*)(vt+0x%X)))((void*)p0, &r, &r, p1);' % VT_FILLRECT_EX,
]

# ---- rectangle: draws 4 edges via Lock/Unlock pixel writes ----
# p0=this, p1=clip_ptr, p2=draw_ptr, p3=color
TEMPLATES['rectangle'] = [
    'if (!p0 || !p1 || !p2) return 0;',
    'int* clip=(int*)p1;',
    'int* draw=(int*)p2;',
    'int cx=clip[0], cy=clip[1], cr=cx+clip[2], cb=cy+clip[3];',
    'int x0=draw[0], y0=draw[1], x1=x0+draw[2]-1, y1=y0+draw[3]-1;',
    'if(x0>x1||y0>y1) return 0;',
    'DWORD vt=*(DWORD*)p0;',
    'typedef void*(__thiscall*Lk)(void*,int,int);',
    'typedef bool(__thiscall*Uk)(void*);',
    'typedef int(__thiscall*Bp)(void*);',
    'void* buf; int bpp;',
    'Lk Lock=(Lk)(*(DWORD*)(vt+0x%X));' % VT_LOCK,
    'Uk Unlock=(Uk)(*(DWORD*)(vt+0x%X));' % VT_UNLOCK,
    'Bp BppFn=(Bp)(*(DWORD*)(vt+0x%X));' % VT_GETBPP,
    'bpp=BppFn((void*)p0);',
    'auto put=[&](int x,int y){',
    '  if(x<cx||x>=cr||y<cy||y>=cb) return;',
    '  buf=Lock((void*)p0,x,y); if(!buf) return;',
    '  if(bpp==2)*(unsigned short*)buf=(unsigned short)p3;',
    '  else *(unsigned char*)buf=(unsigned char)p3;',
    '  Unlock((void*)p0);',
    '};',
    'for(int x=x0;x<=x1;x++) put(x,y0);',
    'for(int x=x0;x<=x1;x++) put(x,y1);',
    'for(int y=y0+1;y<y1;y++) put(x0,y);',
    'for(int y=y0+1;y<y1;y++) put(x1,y);',
    'return 1;',
]

# ---- global: free-function Cohen-Sutherland line clipping ----
# p0=start_ptr, p1=end_ptr, p2=clip_ptr (fastcall: p0=ecx, p1=edx, p2=[esp+4])
TEMPLATES['global'] = [
    'if (!p0 || !p1 || !p2) return 0;',
    'int* clip=(int*)p2;',
    'int clip_x=clip[0], clip_y=clip[1];',
    'double clip_r=(double)(clip_x+clip[2]);',
    'double clip_b=(double)(clip_y+clip[3]);',
    'double clip_xd=(double)clip_x;',
    'double clip_yd=(double)clip_y;',
    'int* start=(int*)p0;',
    'int* end_=(int*)p1;',
    'double x0=(double)start[0], y0=(double)start[1];',
    'double x1=(double)end_[0], y1=(double)end_[1];',
    'double dx=x1-x0, dy=y1-y0;',
    'double dxdy=(dy>=-0.0001&&dy<=0.0001)?0.0:dx/dy;',
    'double dydx=(dx>=-0.0001&&dx<=0.0001)?0.0:dy/dx;',
    'auto outcode=[&](double x, double y)->int{',
    '  int code;',
    '  if(x<clip_r) code=(x<clip_xd)?1:0;',
    '  else code=2;',
    '  if(y<clip_b){if(y<clip_yd) code|=8;}',
    '  else code|=4;',
    '  return code;',
    '};',
    'int c0=outcode(x0,y0); int c1=outcode(x1,y1);',
    'for(;;){',
    '  if(!c0&&!c1){',
    '    start[0]=(int)(x0>=0?x0+0.5:x0-0.5);',
    '    start[1]=(int)(y0>=0?y0+0.5:y0-0.5);',
    '    end_[0]=(int)(x1>=0?x1+0.5:x1-0.5);',
    '    end_[1]=(int)(y1>=0?y1+0.5:y1-0.5);',
    '    return 1;',
    '  }',
    '  if(c0&c1) return 0;',
    '  int c=c0?c0:c1; double nx=0,ny=0;',
    '  if(c&8){nx=(clip_yd-y0)*dxdy+x0; ny=clip_yd;}',
    '  else if(c&4){ny=clip_b-1.0; nx=(ny-y0)*dxdy+x0;}',
    '  else if(c&2){nx=clip_r-1.0; ny=(nx-x0)*dydx+y0;}',
    '  else{ny=(clip_xd-x0)*dydx+y0; nx=clip_xd;}',
    '  if(c==c0){x0=nx;y0=ny;c0=outcode(x0,y0);}',
    '  else{x1=nx;y1=ny;c1=outcode(x1,y1);}',
    '}',
]

# ---- stubs (generated dynamically from param count) ----
STUB_CATS = {'bresenham_line','callback_line','thin_wrapper','dashed_line',
             'ellipse','frame_present','calc_draw_pos','stub'}

# ============================================================
# Generator 鈥?header from actual function params, body from template
# ============================================================

def build_param_decl(conv, params_stk):
    """Build ordered parameter list matching CallRE dispatch.
    Returns: list of param names (p0, p1, p2...)
    
    conv = 'thiscall'/'fastcall'/'stdcall'/'cdecl'
    params_stk = count of stack args (after this for thiscall)
    """
    idx = 0
    names = []
    if conv == 'thiscall':
        names.append(f'p{idx}'); idx += 1  # this
    elif conv == 'fastcall':
        names.append(f'p{idx}'); idx += 1  # ecx
        names.append(f'p{idx}'); idx += 1  # edx
    # remaining are stack params
    for i in range(params_stk):
        names.append(f'p{idx}')
        idx += 1
    return names


def expand_template(tmpl, param_count):
    """Process @pN_if/@pN_endif conditional blocks based on param count."""
    import re
    result = []
    skip = False
    for line in tmpl:
        # Check for conditional open: @pN_if
        m_if = re.match(r'@p(\d+)_if', line)
        if m_if:
            n = int(m_if.group(1))
            skip = n >= param_count  # skip if param doesn't exist
            continue
        # Check for conditional close: @pN_endif
        m_endif = re.match(r'@p(\d+)_endif', line)
        if m_endif:
            skip = False
            continue
        if not skip:
            result.append(line)
    return result


def generate_re_impl(markers):
    out = ['// Auto-generated RE_* functions for hook DLL',
           '// Generated by gen_re_impl.py 鈥?params from actual function signature',
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

        sanitized = name.replace('::','_').replace('@','_').replace('<','_').replace('>','_')
        conv = m.get('convention', 'stdcall')
        stk_count = len(m.get('params', []))

        # Build param list matching CallRE order
        param_names = build_param_decl(conv, stk_count)
        param_count = len(param_names)

        # Function header
        param_str = ', '.join(f'DWORD {pn}' for pn in param_names)
        out.append(f'// {name} @ {addr}')
        out.append(f'extern "C" DWORD RE_{sanitized}({param_str}) {{')

        if cat in STUB_CATS:
            # Stub: suppress all params, return 0
            for pn in param_names:
                out.append(f'(void){pn};')
            out.append('return 1;')
        else:
            tmpl = TEMPLATES.get(cat)
            if tmpl is None:
                print(f'  WARNING: {addr} no template for category {cat}')
                out.append('return 0; // TODO')
            else:
                body = expand_template(tmpl, param_count)
                for line in body:
                    out.append(line)

        out.append('}')
        out.append('')
        print(f'  RE_{sanitized} ({cat}) {param_count} params')

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
