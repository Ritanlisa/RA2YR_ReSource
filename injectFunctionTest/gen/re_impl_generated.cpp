// Auto-generated from IDA Pro decompilation
// Source: gamemd.exe, IDA @ 127.0.0.1:13337
// Functions: ClipLine, SetPixel, GetPixel, PutPixel, GetPixelAtCoords, Fill, DrawRectEx
// Generated: 2026-06-11

#include <windows.h>
#include <cstdint>
#include <cmath>

namespace gamemd {
namespace re_impl {

// ============================================================
// ClipLine @ 0x7BC2B0 — Cohen-Sutherland line clipping
// fastcall: ECX=start(int[2]), EDX=end(int[2]), [ESP+4]=clip_rect(int[4])
// ============================================================
extern "C" DWORD RE_ClipLine(DWORD p0, DWORD p1, DWORD p2) {
    // IDA pseudocode translated to C++
    int* a1 = (int*)p0;   // start
    int* a2 = (int*)p1;   // end
    int* a3 = (int*)p2;   // clip_rect

    double clip_x   = (double)a3[0];
    double clip_y   = (double)a3[1];
    double clip_r   = (double)(a3[0] + a3[2]);
    double clip_b   = (double)(a3[1] + a3[3]);

    double x0 = (double)a1[0];
    double y0 = (double)a1[1];
    double x1 = (double)a2[0];
    double y1 = (double)a2[1];

    double dx = x1 - x0;
    double dy = y1 - y0;
    double dxdy = (dy >= -0.0001 && dy <= 0.0001) ? 0.0 : dx / dy;
    double dydx = (dx >= -0.0001 && dx <= 0.0001) ? 0.0 : dy / dx;

    auto outcode = [&](double px, double py) -> int {
        int code = (px < clip_x) ? 1 : (px >= clip_r ? 2 : 0);
        if (py < clip_y) code |= 8;
        else if (py >= clip_b) code |= 4;
        return code;
    };

    int c0 = outcode(x0, y0);
    int c1 = outcode(x1, y1);

    for (;;) {
        if (!c0 && !c1) {
            a1[0] = (int)(x0 >= 0.0 ? x0 + 0.5 : x0 - 0.5);
            a1[1] = (int)(y0 >= 0.0 ? y0 + 0.5 : y0 - 0.5);
            a2[0] = (int)(x1 >= 0.0 ? x1 + 0.5 : x1 - 0.5);
            a2[1] = (int)(y1 >= 0.0 ? y1 + 0.5 : y1 - 0.5);
            return 1;
        }
        if (c0 & c1) return 0;

        int c = c0 ? c0 : c1;
        double nx = 0.0, ny = 0.0;

        if (c & 8) { nx = (clip_y - y0) * dxdy + x0; ny = clip_y; }
        else if (c & 4) { ny = clip_b - 1.0; nx = (ny - y0) * dxdy + x0; }
        else if (c & 2) { nx = clip_r - 1.0; ny = (nx - x0) * dydx + y0; }
        else { ny = (clip_x - x0) * dydx + y0; nx = clip_x; }

        if (c == c0) { x0 = nx; y0 = ny; c0 = outcode(x0, y0); }
        else { x1 = nx; y1 = ny; c1 = outcode(x1, y1); }
    }
}

// ============================================================
// XSurface::SetPixel @ 0x7BAEB0
// thiscall: ECX=this, [ESP+4]=point_ptr(const Point2D*), [ESP+8]=color(uint16_t)
// ============================================================
extern "C" DWORD RE_XSurface_SetPixel(DWORD p0, DWORD p1, DWORD p2) {
    void* self = (void*)p0;
    DWORD* pt = (DWORD*)p1;
    short color = (short)p2;
    DWORD vtable = *(DWORD*)self;

    typedef void* (__thiscall *LockFn)(void*, int, int);
    typedef void (__thiscall *UnlockFn)(void*);
    typedef int (__thiscall *GetBPPFn)(void*);

    void* buf = ((LockFn)(*(DWORD*)(vtable + 0x5C)))(self, pt[0], pt[1]);
    if (!buf) return 0;

    if (((GetBPPFn)(*(DWORD*)(vtable + 0x70)))(self) == 2)
        *(unsigned short*)buf = (unsigned short)color;
    else
        *(unsigned char*)buf = (unsigned char)color;

    ((UnlockFn)(*(DWORD*)(vtable + 0x60)))(self);
    return 1;
}

// ============================================================
// XSurface::GetPixel @ 0x7BAE60
// thiscall: ECX=this, [ESP+4]=point_ptr(const Point2D*)
// ============================================================
extern "C" DWORD RE_XSurface_GetPixel(DWORD p0, DWORD p1) {
    void* self = (void*)p0;
    DWORD* pt = (DWORD*)p1;
    DWORD vtable = *(DWORD*)self;

    typedef void* (__thiscall *LockFn)(void*, int, int);
    typedef void (__thiscall *UnlockFn)(void*);
    typedef int (__thiscall *GetBPPFn)(void*);

    int result = 0;
    void* buf = ((LockFn)(*(DWORD*)(vtable + 0x5C)))(self, pt[0], pt[1]);
    if (buf) {
        if (((GetBPPFn)(*(DWORD*)(vtable + 0x70)))(self) == 2)
            result = *(unsigned short*)buf;
        else
            result = *(unsigned char*)buf;
        ((UnlockFn)(*(DWORD*)(vtable + 0x60)))(self);
    }
    return result;
}

// ============================================================
// XSurface::PutPixel @ 0x7BAF90
// thiscall: ECX=this, [ESP+4]=point_ptr, [ESP+8]=color(uint16_t), [ESP+C]=clip_rect_ptr
// ============================================================
extern "C" DWORD RE_XSurface_PutPixel(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
    void* self = (void*)p0;
    DWORD* pt = (DWORD*)p1;
    short color = (short)p2;
    int* clip = (int*)p3;
    DWORD vtable = *(DWORD*)self;

    if (pt[0] < clip[0]) return 0;
    if (pt[0] >= clip[0] + clip[2]) return 0;
    if (pt[1] < clip[1]) return 0;
    if (pt[1] >= clip[1] + clip[3]) return 0;

    typedef void* (__thiscall *LockFn)(void*, int, int);
    typedef void (__thiscall *UnlockFn)(void*);
    typedef int (__thiscall *GetBPPFn)(void*);

    void* buf = ((LockFn)(*(DWORD*)(vtable + 0x5C)))(self, pt[0], pt[1]);
    if (!buf) return 0;

    if (((GetBPPFn)(*(DWORD*)(vtable + 0x70)))(self) == 2)
        *(unsigned short*)buf = (unsigned short)color;
    else
        *(unsigned char*)buf = (unsigned char)color;

    ((UnlockFn)(*(DWORD*)(vtable + 0x60)))(self);
    return 1;
}

// ============================================================
// XSurface::GetPixelAtCoords @ 0x7BAF10
// thiscall: ECX=this, [ESP+4]=point_ptr, [ESP+8]=clip_rect_ptr
// ============================================================
extern "C" DWORD RE_XSurface_GetPixelAtCoords(DWORD p0, DWORD p1, DWORD p2) {
    void* self = (void*)p0;
    DWORD* pt = (DWORD*)p1;
    int* clip = (int*)p2;
    DWORD vtable = *(DWORD*)self;

    int result = 0;
    if (pt[0] >= clip[0] && pt[0] < clip[0] + clip[2] &&
        pt[1] >= clip[1] && pt[1] < clip[1] + clip[3])
    {
        typedef void* (__thiscall *LockFn)(void*, int, int);
        typedef void (__thiscall *UnlockFn)(void*);
        typedef int (__thiscall *GetBPPFn)(void*);

        void* buf = ((LockFn)(*(DWORD*)(vtable + 0x5C)))(self, pt[0], pt[1]);
        if (buf) {
            if (((GetBPPFn)(*(DWORD*)(vtable + 0x70)))(self) == 2)
                result = *(unsigned short*)buf;
            else
                result = *(unsigned char*)buf;
            ((UnlockFn)(*(DWORD*)(vtable + 0x60)))(self);
        }
    }
    return result;
}

// ============================================================
// XSurface::Fill @ 0x7BBAB0
// thiscall: ECX=this, [ESP+4]=color(uint32_t)
// ============================================================
extern "C" DWORD RE_XSurface_Fill(DWORD p0, DWORD p1) {
    void* self = (void*)p0;
    int color = (int)p1;
    DWORD vtable = *(DWORD*)self;

    typedef void (__thiscall *GetRectFn)(void*, void*);
    typedef int (__thiscall *FillRectExFn)(void*, void*, void*, int);

    struct { int x, y, w, h; } r;
    ((GetRectFn)(*(DWORD*)(vtable + 0x78)))(self, &r);
    return (DWORD)((FillRectExFn)(*(DWORD*)(vtable + 0x10)))(self, &r, &r, color);
}

// ============================================================
// XSurface::DrawRectEx @ 0x7BADC0
// thiscall: ECX=this, [ESP+4]=clip_rect(int), [ESP+8]=draw_rect_ptr, [ESP+C]=color(uint32_t)
// ============================================================
extern "C" DWORD RE_XSurface_DrawRectEx(DWORD p0, DWORD p1, DWORD p2, DWORD p3) {
    void* self = (void*)p0;
    int clip = (int)p1;
    int* draw = (int*)p2;
    int color = (int)p3;
    DWORD vtable = *(DWORD*)self;

    typedef void (__thiscall *DrawLineExFn)(void*, int, void*, void*, int);

    int x0 = draw[0];
    int y0 = draw[1];
    int x1 = x0 + draw[2] - 1;
    int y1 = y0 + draw[3] - 1;

    struct { int x, y; } tl = { x0, y0 };
    struct { int x, y; } tr = { x1, y0 };
    struct { int x, y; } br = { x1, y1 };
    struct { int x, y; } bl = { x0, y1 };

    DrawLineExFn fn = (DrawLineExFn)(*(DWORD*)(vtable + 0x2C));
    fn(self, clip, &tl, &tr, color);
    fn(self, clip, &tl, &bl, color);
    fn(self, clip, &tr, &br, color);
    fn(self, clip, &bl, &br, color);

    return 1;
}

} // namespace re_impl
} // namespace gamemd
