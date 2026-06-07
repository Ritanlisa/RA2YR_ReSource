#!/usr/bin/env python3
"""Auto-generate RE_* wrapper functions for hook DLL shadow comparison."""

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
}

VT_LOCK=0x5C; VT_UNLOCK=0x60; VT_GETBPP=0x70; VT_GETPITCH=0x74
VT_GETRECT=0x78; VT_DRAWLINE_EX=0x2C; VT_FILLRECT_EX=0x10

def F(name, addr):
    """Return lines for a RE function header and vtable preamble."""
    return ['// %s @ %s' % (name, addr), 'extern "C" DWORD RE_%s(DWORD ecx, DWORD edx, DWORD a, DWORD b) {' % name]

def L(*args): return list(args)

PREAMBLE = [
    'DWORD vt = *(DWORD*)ecx;',
    'typedef void* (__thiscall *LockFn)(void*,int,int);',
    'typedef bool (__thiscall *UnlockFn)(void*);',
    'typedef int (__thiscall *BppFn)(void*);',
    'typedef int (__thiscall *PitchFn)(void*);',
]

TEMPLATES = {}

# ---- pixel_write ----
TEMPLATES['pixel_write'] = L(
    *F('{name}', '{addr}'),
    *PREAMBLE,
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, edx, a);' % VT_LOCK,
    'if (!buf) return 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETBPP,
    'if (bpp == 2) *(unsigned short*)buf = (unsigned short)b;',
    'else *(unsigned char*)buf = (unsigned char)b;',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_UNLOCK,
    'return 1;',
    '}',
)

# ---- pixel_read ----
TEMPLATES['pixel_read'] = L(
    *F('{name}', '{addr}'),
    *PREAMBLE,
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, edx, a);' % VT_LOCK,
    'if (!buf) return 0;',
    'DWORD result = 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETBPP,
    'if (bpp == 2) result = *(unsigned short*)buf;',
    'else result = *(unsigned char*)buf;',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_UNLOCK,
    'return result;',
    '}',
)

# ---- bresenham_line ----
TEMPLATES['bresenham_line'] = L(
    *F('{name}', '{addr}'),
    *PREAMBLE,
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, edx, a);' % VT_LOCK,
    'if (!buf) return 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETBPP,
    'int pitch = ((PitchFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETPITCH,
    'int x1=edx, y1=a, x2=*(int*)(&b), y2=*((int*)(&b)+1);',
    'int dx=abs(x2-x1), dy=abs(y2-y1);',
    'int sx=x1<x2?1:-1, sy=y1<y2?1:-1;',
    '  if (bpp==1) {',
    '    unsigned char* p=(unsigned char*)buf; int rp=pitch;',
    '    if(dx>=dy){int d=2*dy-dx,c=dx;',
    '      while(c-->=0){*p=(unsigned char)b;if(d>0){p=(unsigned char*)((char*)p+sy*rp);d-=2*dx;}d+=2*dy;p++;}}',
    '    else{int d=2*dx-dy,c=dy;',
    '      while(c-->=0){*p=(unsigned char)b;if(d>0){p++;d-=2*dy;}d+=2*dx;p=(unsigned char*)((char*)p+sy*rp);}}',
    '  } else {',
    '    unsigned short* p=(unsigned short*)buf; int rp=pitch/2;',
    '    if(dx>=dy){int d=2*dy-dx,c=dx;',
    '      while(c-->=0){*p=(unsigned short)b;if(d>0){p+=sy*rp;d-=2*dx;}d+=2*dy;p++;}}',
    '    else{int d=2*dx-dy,c=dy;',
    '      while(c-->=0){*p=(unsigned short)b;if(d>0){p++;d-=2*dy;}d+=2*dx;p+=sy*rp;}}',
    '  }',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_UNLOCK,
    'return 1;',
    '}',
)

# ---- fill ----
TEMPLATES['fill'] = L(
    *F('{name}', '{addr}'),
    'DWORD vt = *(DWORD*)ecx;',
    'struct Rct { int x,y,w,h; } r;',
    'typedef struct Rct* (__thiscall *GrFn)(void*,struct Rct*);',
    '((GrFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, &r);' % VT_GETRECT,
    'typedef bool (__thiscall *FrFn)(void*,struct Rct*,struct Rct*,DWORD);',
    'return ((FrFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, &r, &r, edx);' % VT_FILLRECT_EX,
    '}',
)

# ---- rectangle ----
TEMPLATES['rectangle'] = L(
    *F('{name}', '{addr}'),
    'DWORD vt = *(DWORD*)ecx;',
    'typedef bool (__thiscall *LnFn)(void*,void*,void*,void*,void*,DWORD);',
    'LnFn dl = (LnFn)(*(DWORD*)(vt+0x%X));' % VT_DRAWLINE_EX,
    'int x=edx, y=a, w=*(int*)(&b), h=*((int*)(&b)+1);',
    'int rx=x+w-1, by=y+h-1;',
    'int c0[4]={x,y,rx,y}, c1[4]={x,y,x,by}, c2[4]={rx,y,rx,by}, c3[4]={x,by,rx,by};',
    'dl((void*)ecx,0,c0,c0+2,c0,0);',
    'dl((void*)ecx,0,c1,c1+2,c1,0);',
    'dl((void*)ecx,0,c2,c2+2,c2,0);',
    'dl((void*)ecx,0,c3,c3+2,c3,0);',
    'return 1;',
    '}',
)

# ---- ellipse ----
TEMPLATES['ellipse'] = L(
    *F('{name}', '{addr}'),
    *PREAMBLE,
    'int cx=edx, cy=a, rw=b, rh=*(int*)(&b)+1;',
    'void* buf = ((LockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx, cx, cy);' % VT_LOCK,
    'if (!buf) return 0;',
    'int bpp = ((BppFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETBPP,
    'int pitch = ((PitchFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_GETPITCH,
    'int a2=rw*rw, b2=rh*rh, x=0, y=rh;',
    'int d1=b2-a2*rh+a2/4;',
    'if(bpp==2){',
    '  unsigned short* p=(unsigned short*)buf; int hp=pitch/2;',
    '  p[cx+rh*hp]=(unsigned short)b; p[cx-rh*hp]=(unsigned short)b;',
    '  while(2*b2*(x+1)<2*a2*(y-1)){',
    '    if(d1<0){d1+=2*b2*x+3*b2;x++;}',
    '    else{d1+=2*b2*x-2*a2*y+3*b2+2*a2;x++;y--;}',
    '    p[cx+x+y*hp]=(unsigned short)b; p[cx-x+y*hp]=(unsigned short)b;',
    '    p[cx+x-y*hp]=(unsigned short)b; p[cx-x-y*hp]=(unsigned short)b;}',
    '  int d2=b2*(x+1)*(x+1)+a2*(y-1)*(y-1)-a2*b2;',
    '  while(y>0){',
    '    if(d2<0){d2+=2*b2*(x+1)-2*a2*y+a2;x++;y--;}',
    '    else{d2+=a2-2*a2*y;y--;}',
    '    p[cx+x+y*hp]=(unsigned short)b; p[cx-x+y*hp]=(unsigned short)b;',
    '    p[cx+x-y*hp]=(unsigned short)b; p[cx-x-y*hp]=(unsigned short)b;}',
    '  p[cx+rw]=(unsigned short)b; p[cx-rw]=(unsigned short)b;}',
    '((UnlockFn)(*(DWORD*)(vt+0x%X)))((void*)ecx);' % VT_UNLOCK,
    'return 1;',
    '}',
)

# ---- dashed_line, callback_line, thin_wrapper, global, frame_present ----
for cat in ('dashed_line','callback_line','thin_wrapper','global','frame_present'):
    TEMPLATES[cat] = L(
        *F('{name}', '{addr}'),
        '(void)ecx; (void)edx; (void)a; (void)b;',
        'return 0; // TODO',
        '}',
    )

def generate_re_impl(markers):
    out = ['// Auto-generated RE_* functions for hook DLL','// Generated by gen_re_impl.py','#include <windows.h>','']
    for m in markers:
        addr = m['addr']; name = m['fn_name']; mode = m.get('mode','None')
        if mode not in ('Inject','Replace'): continue
        cat = CATEGORY_MAP.get(addr)
        if cat is None:
            print('  WARNING: %s no category' % addr); continue
        sanitized = name.replace('::','_').replace('@','_').replace('<','_').replace('>','_')
        tmpl = TEMPLATES.get(cat)
        if tmpl is None:
            print('  WARNING: %s no template for %s' % (addr, cat)); continue
        for line in tmpl:
            out.append(line.replace('{name}', sanitized).replace('{addr}', addr))
        out.append('')
        print('  RE_%s (%s)' % (sanitized, cat))
    os.makedirs(os.path.dirname(OUT_IMPL), exist_ok=True)
    with open(OUT_IMPL, 'w') as f:
        f.write('\n'.join(out))
    print('\nGenerated %s (%d lines)' % (OUT_IMPL, len(out)))

if __name__ == '__main__':
    test = [
        dict(addr='0x7baeb0', fn_name='XSurface::SetPixel', mode='Inject'),
        dict(addr='0x7bae60', fn_name='XSurface::GetPixel', mode='Inject'),
        dict(addr='0x7baf90', fn_name='XSurface::PutPixel', mode='Inject'),
        dict(addr='0x7baf10', fn_name='XSurface::GetPixelAtCoords', mode='Inject'),
        dict(addr='0x7ba610', fn_name='XSurface::DrawLineEx', mode='Inject'),
        dict(addr='0x7badc0', fn_name='XSurface::DrawRectEx', mode='Inject'),
        dict(addr='0x7bbab0', fn_name='XSurface::Fill', mode='Inject'),
        dict(addr='0x7bb350', fn_name='XSurface::DrawEllipseOutline', mode='Inject'),
    ]
    generate_re_impl(test)
