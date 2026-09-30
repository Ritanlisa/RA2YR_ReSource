#include "render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "core/ddraw_init.hpp"
#include "core/reverse_marker.hpp"
#include "app/cmdline.hpp"

// g_ZBufferDescriptor (IDA: 0x887644) — Z-buffer descriptor pointer
// Null in standalone build (no DDraw Z-buffer available)
extern void* g_ZBufferDescriptor;  // data: 0x887644

// StreamClass::ReadAndSeek (IDA: 0x4114B0)
// Returns WORD* buffer into visible surface stipple/Z space at (x, y).
// Stub for standalone build — real implementation is in the original binary.
static WORD g_StippleBufferStub[4096] = {};
extern "C" void* StreamClass_ReadAndSeek(int x, int y)
{
    (void)x; (void)y;
    return g_StippleBufferStub;
}
#define ReadAndSeek StreamClass_ReadAndSeek

// Visible surface descriptor (IDA: 0x87E8A4)
// Fields (DWORD*): [1]=origin_Y, [6]=wrap_lo, [7]=wrap_hi, [8]=wrap_stride, [10]=word_pitch
// Stub for standalone build — real values come from the original binary's .data section.
static DWORD g_VisibleSurfaceDescStub[16] = {
    0, 0, 0, 0, 0, 0,
    (DWORD)(uintptr_t)g_StippleBufferStub,                  // [6] wrap_lo
    (DWORD)(uintptr_t)(g_StippleBufferStub + 4096),          // [7] wrap_hi
    (DWORD)(sizeof(g_StippleBufferStub)),                    // [8] wrap_stride (bytes)
    0,
    0,                                                        // [10] word_pitch (set at runtime)
    0, 0, 0, 0, 0
};
void* g_VisibleSurfaceDescriptor = g_VisibleSurfaceDescStub;  // data: 0x87e8a4

namespace gamemd
{

// ==== Surface abstract base (vtable 0x7E2198) — IDA-verified defaults ====
// Pure-virtual dtor definition (required at link time even for abstract class).
Surface::~Surface() = default;

Surface::Surface()
    : Width(0), Height(0)
{
}

// vtable [28]/[29] in XSurface hold the shared `xor eax,eax` stub 0x4C9150.
int Surface::GetBytesPerPixel() const { return 0; }
int Surface::GetPitch() const { return 0; }

// 0x411510 Surface::GetRect — {0, 0, Width, Height} via out-param
RectangleStruct* Surface::GetRect(RectangleStruct* out_rect)
{
    out_rect->X = 0;
    out_rect->Y = 0;
    out_rect->Width = Width;
    out_rect->Height = Height;
    return out_rect;
}

// 0x411540: mov eax,[ecx+4]
int Surface::GetWidth() const { return Width; }

// 0x411550: mov eax,[ecx+8]
int Surface::GetHeight() const { return Height; }

// XSurface vtable [33] = 0x411590 StubReturnFalse
bool Surface::IsDSurface() const { return false; }

REVERSE(0x421B60, "ClipRectIntersection: rect intersection", "None")
RectangleStruct* ClipRectIntersection(
    RectangleStruct* result,
    const RectangleStruct* clip_rect,
    const RectangleStruct* src_rect,
    int* x_off,
    int* y_off)
{
    if (clip_rect->Width <= 0 || clip_rect->Height <= 0
        || src_rect->Width <= 0 || src_rect->Height <= 0)
    {
        *result = {};
        return result;
    }

    int x = src_rect->X;
    int y = src_rect->Y;
    int w = src_rect->Width;
    int h = src_rect->Height;

    if (x < clip_rect->X)
    {
        w = x - clip_rect->X + w;
        x = clip_rect->X;
    }
    if (w < 1)
    {
        *result = {};
        return result;
    }

    if (y < clip_rect->Y)
    {
        h = y - clip_rect->Y + h;
        y = clip_rect->Y;
    }
    if (h < 1)
    {
        *result = {};
        return result;
    }

    if (x + w > clip_rect->X + clip_rect->Width)
        w = clip_rect->X + clip_rect->Width - x;
    if (w < 1)
    {
        *result = {};
        return result;
    }

    if (y + h > clip_rect->Y + clip_rect->Height)
        h = clip_rect->Y + clip_rect->Height - y;
    if (h < 1)
    {
        *result = {};
        return result;
    }

    if (x_off)
        *x_off += src_rect->X - x;
    if (y_off)
        *y_off += src_rect->Y - y;

    result->X = x;
    result->Y = y;
    result->Width = w;
    result->Height = h;
    return result;
}

// IDA: 0x7BC2B0 -- ClipLine (717B) — Cohen-Sutherland line clipping
// fastcall: ECX=start(double[2]), EDX=end(double[2]), [ESP+4]=clip_rect(int[4])
// NOTE: start/end are double[2] in the binary (IDA uses fld, not fild).
// clip_rect is int[4] (IDA uses fild). Source uses int* for compat.
REVERSE(0x7bc2b0, "ClipLine: Cohen-Sutherland line clip", "None")
bool ClipLine(int start[2], int end[2], int clip_rect[4])
{
    int clip_x  = clip_rect[0];
    int clip_y  = clip_rect[1];
    int clip_w  = clip_rect[2];
    int clip_h  = clip_rect[3];
    int clip_r  = clip_x + clip_w;
    int clip_b  = clip_y + clip_h;

    auto outcode = [clip_x, clip_y, clip_r, clip_b](double x, double y) -> int {
        int code = 0;
        if (x < (double)(clip_x))    code |= 1;
        if (x > (double)(clip_r - 1)) code |= 2;
        if (y > (double)(clip_b - 1)) code |= 4;
        if (y < (double)(clip_y))     code |= 8;
        return code;
    };

    double x0 = (double)(start[0]);
    double y0 = (double)(start[1]);
    double x1 = (double)(end[0]);
    double y1 = (double)(end[1]);

    int c0 = outcode(x0, y0);
    int c1 = outcode(x1, y1);

    for (;;)
    {
        if (!c0 && !c1)
        {
            start[0] = (int)(x0);
            start[1] = (int)(y0);
            end[0]   = (int)(x1);
            end[1]   = (int)(y1);
            return true;
        }

        if (c0 & c1)
            return false;

        int c = c0 ? c0 : c1;

        double dx   = x1 - x0;
        double dy   = y1 - y0;
        double dxdy = (dy >= -0.0001 && dy <= 0.0001) ? 0.0 : dx / dy;
        double dydx = (dx >= -0.0001 && dx <= 0.0001) ? 0.0 : dy / dx;

        double nx = 0, ny = 0;

        if (c & 8)
        {
            nx = ((double)(clip_y) - y0) * dxdy + x0;
            ny = (double)(clip_y);
        }
        else if (c & 4)
        {
            ny = (double)(clip_b - 1);
            nx = (ny - y0) * dxdy + x0;
        }
        else if (c & 2)
        {
            nx = (double)(clip_r - 1);
            ny = (nx - x0) * dydx + y0;
        }
        else
        {
            ny = ((double)(clip_x) - x0) * dydx + y0;
            nx = (double)(clip_x);
        }

        if (c == c0)
        {
            x0 = nx;
            y0 = ny;
            c0 = outcode(x0, y0);
        }
        else
        {
            x1 = nx;
            y1 = ny;
            c1 = outcode(x1, y1);
        }
    }
}

// IDA: 0x4BA770 -- DSurface::CreatePrimary pixel format detection logic
// Computes bit shifts/masks from the surface's RGB masks, then determines
// the pixel format enum: 0=RGB565, 1=RGB555, 2=RGB444, -1=unknown
void DSurface::DetectPixelFormat(const DDPIXELFORMAT& pf)
{
    g_DDraw_RedMask   = pf.dwRBitMask;
    g_DDraw_GreenMask = pf.dwGBitMask;
    g_DDraw_BlueMask  = pf.dwBBitMask;

    DWORD rM = pf.dwRBitMask;
    DWORD gM = pf.dwGBitMask;
    DWORD bM = pf.dwBBitMask;

    int rShift = 0, gShift = 0, bShift = 0;
    int rWidth = 0, gWidth = 0, bWidth = 0;

    // Count trailing zeros for shift
    while (rShift < 16 && (rM & 1) == 0) { rM >>= 1; ++rShift; }
    while (gShift < 16 && (gM & 1) == 0) { gM >>= 1; ++gShift; }
    while (bShift < 16 && (bM & 1) == 0) { bM >>= 1; ++bShift; }

    g_BitShift_Red   = rShift;  // data: 0x8a0dd0
    g_BitShift_Green = gShift;
    g_BitShift_Blue  = bShift;  // data: 0x8a0dd8

    // Count bits set (= mask width)
    DWORD rT = rM, gT = gM, bT = bM;
    while (rWidth < 8 && (rT & 0x80)) { rT <<= 1; ++rWidth; }
    while (gWidth < 8 && (gT & 0x80)) { gT <<= 1; ++gWidth; }
    while (bWidth < 8 && (bT & 0x80)) { bT <<= 1; ++bWidth; }

    g_BitMask_Red   = rWidth;  // data: 0x8a0ddc
    g_BitMask_Green = gWidth;  // data: 0x8a0de0
    g_BitMask_Blue  = bWidth;  // data: 0x8a0de4

    // IDA: determine pixel format enum
    g_DDraw_PixelFormat = -1; // unknown

    if (bShift == 0) {
        if (rWidth == 3 && gWidth == 5 && bWidth == 3) {
            if (rShift == 10 && gShift == 3)
                g_DDraw_PixelFormat = 0; // RGB555 (R:5@10, G:5@5, B:5@0)
            else if (rShift == 11 && gShift == 2)
                g_DDraw_PixelFormat = 1; // RGB555 variant
        }
        if (rWidth == 2 && gWidth == 6 && bWidth == 3 && rShift == 11 && gShift == 3)
            g_DDraw_PixelFormat = 2; // RGB444
    }
}

DSurface::DSurface(int width, int height, bool back_buffer, bool force_3d) noexcept
    : XSurface(width, height)
    , BytesPerPixel(2)
    , LockedSurface(nullptr)
    , Allocated(false)
    , VRAMmed(false)
    , Surface(nullptr)
    , SurfaceDesc(nullptr)
{
    (void)back_buffer;
    (void)force_3d;
    std::memset(&align_1A, 0, sizeof(align_1A));

    auto* ctx = DDrawGetContext();
    if (!ctx || !ctx->dd) return;

    DDSURFACEDESC2 desc = {};
    desc.dwSize         = sizeof(desc);
    desc.dwFlags        = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS;
    desc.dwWidth        = width;
    desc.dwHeight       = height;
    desc.ddsCaps.dwCaps = DDSCAPS_OFFSCREENPLAIN | DDSCAPS_SYSTEMMEMORY;

    HRESULT hr = ctx->dd->CreateSurface(&desc, &Surface, nullptr);
    if (SUCCEEDED(hr)) {
        Allocated = true;
    }
}

DSurface::~DSurface()
{
    if (Allocated && Surface) {
        Surface->Release();
        Surface = nullptr;
    }
    LockedSurface = nullptr;
}

// IDA: 0x4C1A90 — DSurface::BlitWhole (23B) thin wrapper
// Rect::Set(0,0,0,0) → Blit(zero, zero, src, zero, zero, option1, option2)
REVERSE(0x4C1A90, "DSurface::BlitWhole: Thin wrapper around Blit", "None")
// 0x4c1a90
AbstractClass * * DSurface::BlitWhole(void* aP1, int * a2, void * a1, void * a3)
{
  XSurface *v3; // ecx

  return ((XSurface *)(v3))->BlitWhole((int *)this, a2, a3); /*0x4c1aa4*/
}
// 0x4bb080
bool DSurface::BlitPart(
{
  int (__thiscall **DSurface_field_0x0)(DSurface *, int); // ebx
  int v8; // eax
  int v9; // eax
  unsigned char v11[28]; // [esp+Ch] [ebp-20h] BYREF
  unsigned char v12[4]; // [esp+28h] [ebp-4h] BYREF

  DSurface_field_0x0 = (int (__thiscall **)(DSurface *, int))this->DSurface_field_0x0; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, unsigned char *, int, int, int))(*(unsigned int *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*((int (__thiscall **)(DSurface *, unsigned char *, int, int, int))this->DSurface_field_0x0 + 30))( /*0x4bb0b9*/
         this,
         v12,
         a5,
         a3,
         v8);
  return DSurface_field_0x0[3](this, v9); /*0x4bb0c2*/
}
// ============================================================
// IntersectSurfaceRects — IDA: 0x7BBE20 (463B)
// fastcall: ECX=dest_rect, EDX=dest_bounds, [ESP+4]=src_rect, [ESP+8]=src_bounds
// All four are int[4]: { X, Y, Width, Height }
//
// When dest_rect.W == src_rect.W && dest_rect.H == src_rect.H:
//   Mutual in-place clipping: adjusts both rect pairs against each other's bounds.
// Otherwise:
//   ClipRectIntersection each rect against its bounds independently.
// Returns: true if all resulting Width/Height > 0.
// ============================================================
static bool IntersectSurfaceRects(int* dest_rect, int* dest_bounds,
                                   int* src_rect, int* src_bounds)
{
    if (dest_rect[2] == src_rect[2] && dest_rect[3] == src_rect[3])
    {
        // --- Inline mutual clipping (W/H match path) ---

        // Clip dest_rect left edge if negative → shifts src_rect too
        if (dest_rect[0] < 0)
        {
            src_rect[0] -= dest_rect[0];
            src_rect[2] += dest_rect[0];
            dest_rect[2] += dest_rect[0];
            dest_rect[0] = 0;
        }
        // Clip dest_rect top edge if negative
        if (dest_rect[1] < 0)
        {
            src_rect[1] -= dest_rect[1];
            src_rect[3] += dest_rect[1];
            dest_rect[3] += dest_rect[1];
            dest_rect[1] = 0;
        }

        // Clip right edge against dest_bounds
        int overflow = dest_rect[0] + dest_rect[2] - dest_bounds[2];
        if (overflow > 0)
        {
            src_rect[2]  -= overflow;
            dest_rect[2] -= overflow;
        }

        // Clip bottom edge against dest_bounds
        overflow = dest_rect[1] + dest_rect[3] - dest_bounds[3];
        if (overflow > 0)
        {
            src_rect[3]  -= overflow;
            dest_rect[3] -= overflow;
        }

        // Clip src_rect left edge if negative → shifts dest_rect too
        if (src_rect[0] < 0)
        {
            dest_rect[0] -= src_rect[0];
            src_rect[2]  += src_rect[0];
            dest_rect[2] += src_rect[0];
            src_rect[0] = 0;
        }
        // Clip src_rect top edge if negative
        if (src_rect[1] < 0)
        {
            dest_rect[1] -= src_rect[1];
            src_rect[3]  += src_rect[1];
            dest_rect[3] += src_rect[1];
            src_rect[1] = 0;
        }

        // Clip right edge against src_bounds
        overflow = src_rect[0] + src_rect[2] - src_bounds[2];
        if (overflow > 0)
        {
            src_rect[2]  -= overflow;
            dest_rect[2] -= overflow;
        }

        // Clip bottom edge against src_bounds
        overflow = src_rect[1] + src_rect[3] - src_bounds[3];
        if (overflow > 0)
        {
            src_rect[3]  -= overflow;
            dest_rect[3] -= overflow;
        }
    }
    else
    {
        // --- W/H mismatch: clip each rect against its own bounds ---
        RectangleStruct tmp;
        RectangleStruct db = { dest_bounds[0], dest_bounds[1], dest_bounds[2], dest_bounds[3] };
        RectangleStruct dr = { dest_rect[0],   dest_rect[1],   dest_rect[2],   dest_rect[3]   };
        ClipRectIntersection(&tmp, &db, &dr, nullptr, nullptr);
        dest_rect[0] = tmp.X; dest_rect[1] = tmp.Y;
        dest_rect[2] = tmp.Width; dest_rect[3] = tmp.Height;

        RectangleStruct sb = { src_bounds[0], src_bounds[1], src_bounds[2], src_bounds[3] };
        RectangleStruct sr = { src_rect[0],   src_rect[1],   src_rect[2],   src_rect[3]   };
        ClipRectIntersection(&tmp, &sb, &sr, nullptr, nullptr);
        src_rect[0] = tmp.X; src_rect[1] = tmp.Y;
        src_rect[2] = tmp.Width; src_rect[3] = tmp.Height;
    }

    return dest_rect[2] > 0 && dest_rect[3] > 0
        && src_rect[2] > 0 && src_rect[3] > 0;
}

// ============================================================
// DSurface::Blit — IDA: 0x4BB0D0 (1303B)
// Hardware/software blit with coordinate clipping.
// Parameters (binary order, raw int*):
//   self  = destination DSurface*
//   a2    = dest_clip_rect [X,Y,W,H] — clip region on dest surface
//   a3    = dest_rect [X,Y,W,H] — where to paint on dest surface
//   a4    = source Surface*
//   a5    = src_clip_rect [X,Y,W,H] — clip region on src surface
//   a6    = src_rect [X,Y,W,H] — what part of source to blit
//   a7    = flags / option1 (low byte used)
//   a8    = option2
// ============================================================

// Forward-declare: no-op stub for EXE build (hook DLL has real version)
namespace elements {
    static void RecordBlit(uint32_t, int, int, int, int, int, int, uint32_t) {}
}

char DSurface::BlitCore(
    int* self, int* a2, int* a3, void* a4, int* a5, int* a6, int a7, char a8)
{
    // --- Early exit: any rect has non-positive dimensions ---
    if (a2[2] <= 0 || a2[3] <= 0
     || a5[2] <= 0 || a5[3] <= 0
     || a3[2] <= 0 || a3[3] <= 0
     || a6[2] <= 0 || a6[3] <= 0)
        return 0;

    auto* dst = (DSurface*)(self);
    auto* src = (class Surface*)(a4);
    auto* src_dsurf = (DSurface*)(src);

    // --- Determine hardware vs software blit path ---
    // v42 == true → software (XSurface::BlitPart), false → hardware (DDraw Blt)
    bool v42 = false;

    if (!src->IsDSurface()
     || src->IsLocked()
     || (char)(a7) == 1
     || src->GetBytesPerPixel() != dst->GetBytesPerPixel())
    {
        v42 = true;
    }

    // Windowed mode (Allocated && DDraw initialized) → suppress option2
    char v13;
    if (dst->Allocated && g_DDraw_Initialized == 1)
        v13 = 0;
    else
        v13 = a8;

    // VRAM check: if either surface is in system memory, force software
    if (!v42 && v13 == 1
     && (!dst->VRAMmed
         || (src_dsurf && src_dsurf->IsDSurface() && !src_dsurf->VRAMmed))
     && a6[2] == a3[2] && a6[3] == a3[3])
    {
        v42 = true;
    }

    // --- DDraw not active → bail ---
    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return 0;

    // --- Surface lost handling (destination surface) ---
    if (dst->Surface
     && dst->Surface->IsLost() == DDERR_SURFACELOST)
    {
        if (FAILED(dst->Surface->Restore())
         || dst->Surface->IsLost(void * a1, void * a2) == DDERR_SURFACELOST)
            return 0;

        int saved_locks = dst->LockCount;
        if (saved_locks > 0)
        {
            dst->LockCount = 0;
            dst->Lock(0, 0);           // vtable[23]
            ++dst->LockCount;
            dst->Unlock();             // vtable[24]
            dst->LockCount = saved_locks;
        }
    }

    // --- Software path: delegate to XSurface::BlitPart ---
    if (v42)
    {
        RectangleStruct dest_r = { a3[0], a3[1], a3[2], a3[3] };
        RectangleStruct src_r  = { a6[0], a6[1], a6[2], a6[3] };
        return dst->XSurface::BlitPart(
                    dest_r, const_cast<class Surface*>(src),
                    src_r, a7 != 0, true) ? 1 : 0;
    }

    // ============================================================
    // Hardware path: DDraw Blt with coordinate clipping
    // ============================================================

    // Load dest_rect values (a3)
    int v52 = a3[0], v53 = a3[1], v54 = a3[2], v55 = a3[3];

    // Load src_rect values (a6) — used as "clip_src" by the binary
    int v59 = a6[0], v60 = a6[1], v61 = a6[2], v62 = a6[3];

    // --- Get source surface rect ---
    int src_srf[4];
    src->GetRect((RectangleStruct*)(src_srf));
    int v43 = src_srf[0], v44 = src_srf[1];
    int v45 = src_srf[2], v46 = src_srf[3];

    // Declare clipped values upfront (avoids goto-over-init errors)
    int v63 = 0, v64 = 0, v65 = 0, v66 = 0;
    int v67 = 0, v68 = 0, v69 = 0, v70 = 0;
    bool src_clip_ok = false;

    // --- Clip source surface against src_clip (a5) ---
    {
        int v48 = a5[2], v49 = a5[3];
        if (v48 <= 0 || v49 <= 0 || v45 <= 0 || v46 <= 0) goto hw_check;

        int v29 = a5[0], v29 = v29;
        if (v43 < v29)
        {
            v45 += v43 - v29;
            v43 = v29;
        }
        if (v45 < 1) goto hw_check;

        int v47 = a5[1];
        if (v44 < v47)
        {
            v46 += v44 - v47;
            v44 = v47;
        }
        if (v46 < 1) goto hw_check;

        if (v43 + v45 > v48 + v29)
            v45 = v48 + v29 - v43;
        if (v45 < 1) goto hw_check;

        if (v46 + v44 > v49 + v47)
            v46 = v49 + v47 - v44;
        if (v46 < 1) goto hw_check;

        v63 = v43; v64 = v44; v65 = v45; v66 = v46;
        src_clip_ok = true;
    }

hw_check:
    if (!src_clip_ok) return 0;

    // --- Get destination surface rect ---
    RectangleStruct dst_srf_storage;
    dst->GetRect(&dst_srf_storage);
    int* v71_ptr = (int*)(&dst_srf_storage);

    int v35 = v71_ptr[0], v37 = v71_ptr[1];
    int v38 = v71_ptr[2], v39 = v71_ptr[3];
    int v36 = a2[2];
    int v57 = v38;  // original dst_surf.W
    bool dst_clip_ok = false;

    // --- Clip destination surface against dest_clip (a2) ---
    {
        if (v36 <= 0) goto hw_fail_dst;
        int v48 = a2[3];
        if (v48 <= 0 || v38 <= 0 || v39 <= 0) goto hw_fail_dst;

        int v40 = a2[0];
        if (v35 < v40)
        {
            v38 += v35 - v40;
            v35 = v40;
            v57 = v38;
        }
        if (v38 < 1) goto hw_fail_dst;

        int v49 = a2[1];
        if (v37 < v49)
        {
            v39 += v37 - v49;
            v37 = v49;
        }
        if (v39 < 1) goto hw_fail_dst;

        int v41 = (v35 + v38 <= v40 + v36) ? v57 : (v36 + v40 - v35);
        if (v41 < 1) goto hw_fail_dst;

        if (v39 + v37 > v49 + v48)
            v39 = v49 + v48 - v37;
        if (v39 < 1) goto hw_fail_dst;

        v67 = v35; v68 = v37; v69 = v57; v70 = v39;
        dst_clip_ok = true;
    }

hw_fail_dst:
    if (!dst_clip_ok)
    {
        v67 = v43; v68 = v44; v69 = v45; v70 = v46;
    }

    // --- Intersect the clipped rects ---
    if (!IntersectSurfaceRects(&v52, &v67, &v59, &v63))
        return 0;

    // --- Build Blt RECTs from intersected values ---
    RECT dr;
    dr.left   = v67 + v52;
    dr.top    = v68 + v53;
    dr.right  = v67 + v52 + v54;
    dr.bottom = v68 + v53 + v55;

    RECT sr;
    sr.left   = v63 + v59;
    sr.top    = v64 + v60;
    sr.right  = v63 + v59 + v61;
    sr.bottom = v64 + v60 + v62;

    if (!(src_dsurf && src_dsurf->Surface))
        return 0;

    // IDirectDrawSurface7::Blt — vtable[5] offset 0x14
    // flags = 0x01000000 (DDBLT_WAIT), lpDDBltFx = nullptr
    HRESULT hr = dst->Surface->Blt(
                    &dr, src_dsurf->Surface, &sr,
                    0x1000000, nullptr);
    return (hr == DD_OK) ? 1 : 0;
}

// 0x4bb0d0
bool DSurface::Blit(
{
  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  void *DSurface_field_0x0; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int (__thiscall **v24)(void **, unsigned int *); // edx
  Rect *v25; // eax
  int Y; // ecx
  int Width; // edx
  int v28; // esi
  int v29; // eax
  bool v30; // cc
  int Height; // ebx
  int X; // eax
  int (__thiscall **v33)(DSurface *, int *); // edx
  int *v34; // edi
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  Rect v43; // [esp+1Ch] [ebp-84h] BYREF
  void *DSurface_field_0xC; // [esp+2Ch] [ebp-74h]
  int v45; // [esp+30h] [ebp-70h]
  int v46; // [esp+34h] [ebp-6Ch]
  int v47; // [esp+38h] [ebp-68h]
  DSurface *v48; // [esp+3Ch] [ebp-64h]
  int v49; // [esp+40h] [ebp-60h] BYREF
  int v50; // [esp+44h] [ebp-5Ch]
  int v51; // [esp+48h] [ebp-58h]
  int v52; // [esp+4Ch] [ebp-54h]
  unsigned int v53[2]; // [esp+50h] [ebp-50h] BYREF
  int v54; // [esp+58h] [ebp-48h]
  int v55; // [esp+5Ch] [ebp-44h]
  int v56; // [esp+60h] [ebp-40h] BYREF
  int v57; // [esp+64h] [ebp-3Ch]
  int v58; // [esp+68h] [ebp-38h]
  int v59; // [esp+6Ch] [ebp-34h]
  int v60; // [esp+70h] [ebp-30h] BYREF
  int v61; // [esp+74h] [ebp-2Ch]
  int v62; // [esp+78h] [ebp-28h]
  int v63; // [esp+7Ch] [ebp-24h]
  int v64; // [esp+80h] [ebp-20h] BYREF
  int v65; // [esp+84h] [ebp-1Ch]
  int v66; // [esp+88h] [ebp-18h]
  int v67; // [esp+8Ch] [ebp-14h]
  int v68[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a2[2]; /*0x4bb0e1*/
  v48 = this; /*0x4bb0e8*/
  if ( v9 <= 0 || a2[3] <= 0 || a5[2] <= 0 || a5[3] <= 0 || a3[2] <= 0 || a3[3] <= 0 || a6[2] <= 0 || a6[3] <= 0 ) /*0x4bb14e*/
    return 0; /*0x4bb14e*/
  v10 = (void **)a4; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(uint8_t (__thiscall **)(unsigned int *))(*a4 + 132))(a4) /*0x4bb19d*/
    || (*(uint8_t (__thiscall **)(unsigned int *))(*a4 + 108))(a4) == 1
    || (unsigned char)a7 == 1
    || (v11 = (*(int (__thiscall **)(unsigned int *))(*a4 + 112))(a4),
        v12 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) == v11,
        v10 = (void **)a4,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( IDA_LOBYTE(this->DSurface_field_0x18) == 1 && g_DDraw_Initialized == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!IDA_BYTE1(this->DSurface_field_0x18)
     || (*((uint8_t (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((unsigned char *)v10 + 25))
    && a6[2] == a3[2]
    && a6[3] == a3[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->DSurface_field_0x1C[0]; /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(int))(*(unsigned int *)v14 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb240*/
      || (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb245*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb250*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb254*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb256*/
      this->DSurface_field_0xC = 0; /*0x4bb25d*/
      (*((void (__thiscall **)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb264*/
      ++this->DSurface_field_0xC; /*0x4bb26d*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb273*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
// 0x7bbb90
    return XSurface::BlitPart((XSurface *)this, (void **)a3, v10, (void **)a6, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a3[1]; /*0x4bb2a7*/
  v18 = a3[2]; /*0x4bb2aa*/
  v49 = *a3; /*0x4bb2ad*/
  v19 = a3[3]; /*0x4bb2b1*/
  v50 = v17; /*0x4bb2b4*/
  v20 = *a6; /*0x4bb2b8*/
  v52 = v19; /*0x4bb2ba*/
  v21 = a6[2]; /*0x4bb2be*/
  v51 = v18; /*0x4bb2c1*/
  v22 = a6[1]; /*0x4bb2c5*/
  v56 = v20; /*0x4bb2c8*/
  v23 = a6[3]; /*0x4bb2cc*/
  v58 = v21; /*0x4bb2cf*/
  v57 = v22; /*0x4bb2d3*/
  v24 = (int (__thiscall **)(void **, unsigned int *))*v10; /*0x4bb2d7*/
  v59 = v23; /*0x4bb2dd*/
  v25 = (Rect *)v24[30](v10, v53); /*0x4bb2e4*/
  Y = 0; /*0x4bb2eb*/
  Width = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *v25; /*0x4bb2f3*/
  v45 = a5[2]; /*0x4bb318*/
  if ( v45 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v46 = a5[3]; /*0x4bb327*/
  if ( v46 <= 0 || v25->Width <= 0 || v25->Height <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = *a5; /*0x4bb352*/
  v30 = v43.X < *a5; /*0x4bb354*/
  v47 = *a5; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v43.Width += v43.X - v29; /*0x4bb364*/
    v43.X = v47; /*0x4bb36c*/
  }
  if ( v43.Width < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  DSurface_field_0xC = (void *)a5[1]; /*0x4bb38b*/
  if ( v43.Y < (int)DSurface_field_0xC ) /*0x4bb38f*/
  {
    v43.Height += v43.Y - (unsigned int)DSurface_field_0xC; /*0x4bb399*/
    v43.Y = (int)DSurface_field_0xC; /*0x4bb3a1*/
  }
  if ( v43.Height < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( v43.X + v43.Width > v45 + v47 ) /*0x4bb3be*/
    v43.Width = v45 + v47 - v43.X; /*0x4bb3cc*/
  if ( v43.Width < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  Height = v43.Height; /*0x4bb3e5*/
  if ( v43.Height + v43.Y > (int)DSurface_field_0xC + v46 ) /*0x4bb3ed*/
    Height = (int)DSurface_field_0xC + v46 - v43.Y; /*0x4bb3f3*/
  if ( Height < 1 ) /*0x4bb3f8*/
  {
  LABEL_53:
    X = 0; /*0x4bb40a*/
  }
  else
  {
    X = v43.X; /*0x4bb3fa*/
    Y = v43.Y; /*0x4bb3fe*/
    Width = v43.Width; /*0x4bb402*/
    v28 = Height; /*0x4bb406*/
  }
  v61 = Y; /*0x4bb40c*/
  v60 = X; /*0x4bb414*/
  v62 = Width; /*0x4bb418*/
  v33 = (int (__thiscall **)(DSurface *, int *))v48->DSurface_field_0x0; /*0x4bb41c*/
  v63 = v28; /*0x4bb426*/
  v34 = (int *)v33[30](v48, v68); /*0x4bb439*/
  Rect::Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
  v35 = *v34; /*0x4bb449*/
  v36 = a2[2]; /*0x4bb44b*/
  v37 = v34[1]; /*0x4bb450*/
  v38 = v34[2]; /*0x4bb453*/
  v54 = v38; /*0x4bb456*/
  v39 = v34[3]; /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v45 = a2[3]; /*0x4bb468*/
  if ( v45 <= 0 || v34[2] <= 0 || v34[3] <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a2; /*0x4bb483*/
  if ( v35 < *a2 ) /*0x4bb488*/
  {
    v38 += v35 - v40; /*0x4bb48c*/
    v35 = *a2; /*0x4bb48e*/
    v54 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v46 = a2[1]; /*0x4bb49e*/
  if ( v37 < v46 ) /*0x4bb4a2*/
  {
    v39 += v37 - v46; /*0x4bb4a6*/
    v37 = v46; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = v35 + v38 <= v40 + v36 ? v54 : v36 + v40 - v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( v39 + v37 > v46 + v45 ) /*0x4bb4d8*/
    v39 = v46 + v45 - v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
  LABEL_71:
    v35 = v43.X; /*0x4bb4e3*/
    v37 = v43.Y; /*0x4bb4e7*/
    v41 = v43.Width; /*0x4bb4eb*/
    v39 = v43.Height; /*0x4bb4ef*/
  }
  v65 = v37; /*0x4bb4f3*/
  v66 = v41; /*0x4bb4f7*/
  v64 = v35; /*0x4bb513*/
  v67 = v39; /*0x4bb51a*/
  if ( (uint8_t)IntersectSurfaceRects(&v49, (int)&v64, &v56, (int)&v60) ) /*0x4bb521*/
  {
    v53[0] = v64 + v49; /*0x4bb544*/
    v53[1] = v65 + v50; /*0x4bb552*/
    v55 = v50 + v65 + v52; /*0x4bb56e*/
    v54 = v49 + v64 + v51; /*0x4bb576*/
    v43.X = v60 + v56; /*0x4bb57d*/
    v43.Y = v61 + v57; /*0x4bb588*/
    v43.Height = v57 + v61 + v59; /*0x4bb5a0*/
    v43.Width = v56 + v60 + v58; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, unsigned int *, unsigned int, Rect *, int, unsigned int))(*(unsigned int *)v48->DSurface_field_0x1C[0] + 20))( /*0x4bb5d5*/
             v48->DSurface_field_0x1C[0],
             v53,
             a4[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/
}
// BlitTracker — same as Blit but records element info for headless tracking.
// In the EXE build, RecordBlit is a no-op stub (element_tracker.cpp is hook DLL only).
// In the hook DLL, render_hooks.cpp provides the real definition with elements::RecordBlit.
char DSurface::BlitTracker(
    int* self, int* dst_rect, int* src_rect, void* src_surface,
    int* clip_dst, int* clip_src, int flags, char option2)
{
    if (src_surface && src_rect && dst_rect)
    {
        elements::RecordBlit(
            (uint32_t)(src_surface),
            src_rect[0], src_rect[1], src_rect[2], src_rect[3],
            dst_rect[0], dst_rect[1],
            (uint32_t)(flags));
    }
    return BlitCore(self, dst_rect, src_rect, src_surface, clip_dst, clip_src, flags, option2);
}

// ============================================================
// DSurface::FillRectEx — IDA: 0x4BB620 (526B)
// Hardware/software color fill with coordinate clipping.
// ============================================================
REVERSE(0x4BB620, "DSurface::FillRectEx: Hardware/software color fill with clipping", "None")
// 0x4bb620
bool DSurface::FillRectEx(
{
  int v5; // eax
  void *DSurface_field_0xC; // ebx
  void *DSurface_field_0x0; // edx
  int *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  int *v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v25; // [esp+20h] [ebp-B4h] BYREF
  int v26; // [esp+24h] [ebp-B0h]
  int v27; // [esp+28h] [ebp-ACh]
  int v28; // [esp+2Ch] [ebp-A8h]
  unsigned int v29[4]; // [esp+30h] [ebp-A4h] BYREF
  int v30[4]; // [esp+40h] [ebp-94h] BYREF
  unsigned int v31[4]; // [esp+50h] [ebp-84h] BYREF
  char v32[16]; // [esp+60h] [ebp-74h] BYREF
  unsigned int v33[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->DSurface_field_0x1C[0] && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !IDA_LOBYTE(stru_820320.Start) /*0x4bb675*/
      || (*((uint8_t (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 27))(this)
      || (*(int (__stdcall **)(int, int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 52))(
           this->DSurface_field_0x1C[0],
           1) )
    {
// 0x7bb050
      return XSurface::FillRectEx((XSurface *)this, (unsigned int *)a2, (int *)a3, a4); /*0x4bb81d*/
    }
    if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4bb690*/
    {
      v5 = this->DSurface_field_0x1C[0]; /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(int))(*(unsigned int *)v5 + 96))(this->DSurface_field_0x1C[0]) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4bb6cc*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4bb6d1*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4bb6d3*/
          this->DSurface_field_0xC = 0; /*0x4bb6db*/
          (*((void (__thiscall **)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb6de*/
          ++this->DSurface_field_0xC; /*0x4bb6e7*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb6ec*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bb6ef*/
        }
  LABEL_15:
        v8 = (int *)(*((int (__thiscall **)(DSurface *, char *))this->DSurface_field_0x0 + 30))(this, v32); /*0x4bb6f2*/
        v9 = ClipRectIntersection(v31, (int *)a2, v8, 0, 0); /*0x4bb710*/
        v30[0] = *v9; /*0x4bb719*/
        v30[1] = v9[1]; /*0x4bb722*/
        v30[2] = v9[2]; /*0x4bb729*/
        v10 = *(unsigned int *)a3; /*0x4bb72d*/
        v11 = v9[3]; /*0x4bb72f*/
        v12 = *(unsigned int *)a2; /*0x4bb732*/
        v13 = *(unsigned int *)(a2 + 4); /*0x4bb734*/
        v30[3] = v11; /*0x4bb737*/
        v14 = *(unsigned int *)(a3 + 4); /*0x4bb73b*/
        v25 = v10 + v12; /*0x4bb740*/
        v15 = v13 + v14; /*0x4bb748*/
        v16 = *(unsigned int *)(a3 + 8); /*0x4bb74b*/
        v17 = *(unsigned int *)(a3 + 12); /*0x4bb74e*/
        v26 = v15; /*0x4bb751*/
        v27 = v16; /*0x4bb755*/
        v28 = v17; /*0x4bb762*/
        v18 = ClipRectIntersection(v31, &v25, v30, 0, 0); /*0x4bb76b*/
        v19 = *v18; /*0x4bb76d*/
        v25 = *v18; /*0x4bb76f*/
        v20 = v18[1]; /*0x4bb773*/
        v26 = v20; /*0x4bb776*/
        v21 = v18[2]; /*0x4bb77a*/
        v27 = v21; /*0x4bb77d*/
        v22 = v18[3]; /*0x4bb781*/
        v28 = v22; /*0x4bb786*/
        if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
        {
          v23 = this->DSurface_field_0x1C[0]; /*0x4bb79c*/
          v29[0] = v19; /*0x4bb79f*/
          v29[2] = v19 + v21; /*0x4bb7a3*/
          v29[3] = v20 + v22; /*0x4bb7a7*/
          v29[1] = v20; /*0x4bb7b6*/
          memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
          v33[20] = a4; /*0x4bb7c8*/
          v33[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, unsigned int *, unsigned int, unsigned int, int, unsigned int *))(*(unsigned int *)v23 + 20))( /*0x4bb7f9*/
                   v23,
                   v29,
                   0,
                   0,
                   16778240,
                   v33) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/
}
// IDA: 0x4BB5F0 — DSurface::FillRect (43B) thin wrapper
// GetRect() → FillRectEx(clip, fill_rect, color)
REVERSE(0x4BB5F0, "DSurface::FillRect: Fill rectangle with color", "None")
// 0x4bb5f0
int DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
  int v4; // eax
  int result; // eax
  unsigned char v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*((int (__thiscall **)(DSurface *, unsigned char *))this->DSurface_field_0x0 + 30))(this, v6); /*0x4bb609*/
  IDA_LOBYTE(result) = DSurface::FillRectEx(this, v4, fill_rect, color); /*0x4bb60f*/
  return result; /*0x4bb614*/
}
// 0x4bb830
bool DSurface::FillRectWithFlags(
{
  int v5; // ecx
  int v6; // edi
  int *v8; // eax
  unsigned int *v9; // eax
  int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  unsigned int *v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // edi
  uint16_t *v25; // eax
  int v26; // eax
  int16_t v27; // bp
  int v28; // ebx
  int v29; // [esp+10h] [ebp-5Ch]
  int16_t v30; // [esp+14h] [ebp-58h]
  int16_t v31; // [esp+18h] [ebp-54h]
  int v32; // [esp+1Ch] [ebp-50h]
  uint16_t v33; // [esp+20h] [ebp-4Ch]
  unsigned int v34; // [esp+24h] [ebp-48h]
  int v35; // [esp+28h] [ebp-44h]
  unsigned int v36; // [esp+2Ch] [ebp-40h]
  int16_t i; // [esp+38h] [ebp-34h]
  unsigned int v38[4]; // [esp+3Ch] [ebp-30h] BYREF
  unsigned int v39[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v40; // [esp+54h] [ebp-18h]
  int v41; // [esp+58h] [ebp-14h]
  unsigned int v42[4]; // [esp+5Ch] [ebp-10h] BYREF
  DSurface *thisa; // [esp+70h] [ebp+4h]
  unsigned short *v44; // [esp+74h] [ebp+8h]
  unsigned int v45; // [esp+78h] [ebp+Ch]

  v6 = v5; /*0x4bb837*/
  v32 = v5; /*0x4bb839*/
  if ( (*(int (**)(void))(*(unsigned int *)v5 + 112))() < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( (int)this->DSurface_field_0x8 <= 0 || (int)this->DSurface_field_0xC <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  v8 = (int *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v6 + 120))(v6, v38); /*0x4bb87a*/
  v9 = ClipRectIntersection(v42, v8, (int *)this, 0, 0); /*0x4bb888*/
  v39[0] = *v9; /*0x4bb891*/
  v39[1] = v9[1]; /*0x4bb898*/
  v40 = v9[2]; /*0x4bb89f*/
  v10 = v9[3]; /*0x4bb8a3*/
  v41 = v10; /*0x4bb8a8*/
  if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
  v31 = v11; /*0x4bb8f1*/
  v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
  v30 = v12; /*0x4bb908*/
  v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
  v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
  v35 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)v6 + 92))(v6, *v13, v13[1]); /*0x4bb938*/
  if ( !v35 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v14 = (int)a4; /*0x4bb94a*/
  if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
    v14 = 100; /*0x4bb953*/
  v15 = (1374389535 * (uint64_t)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
  v16 = 255 * v14 / 0x64u; /*0x4bb970*/
  v33 = 255 - v16; /*0x4bb97b*/
  v45 = v16; /*0x4bb983*/
  thisa = 0; /*0x4bb987*/
  IDA_LOWORD(a2) = (uint8_t)(*(unsigned char *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
  IDA_LOWORD(v15) = (uint8_t)(*(unsigned char *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
  v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
  v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
  IDA_LOWORD(v17) = (uint8_t)(*(unsigned char *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
  v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
  for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
  {
    v29 = 0; /*0x4bb9ed*/
    v20 = (unsigned int)thisa * ((*(int (__thiscall **)(int))(*(unsigned int *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
    if ( v40 > 0 ) /*0x4bba01*/
    {
      v11 = (uint16_t)v11; /*0x4bba0f*/
      v21 = (uint16_t)v12; /*0x4bba15*/
      v22 = v16 * (v12 & (uint16_t)v19); /*0x4bba23*/
      v23 = v16 * (uint16_t)(v19 & v11); /*0x4bba26*/
      v24 = v45 * (uint16_t)(v19 & v34); /*0x4bba4b*/
      v25 = (uint16_t *)(v35 + 2 * v20); /*0x4bba50*/
      v36 = (uint16_t)v11; /*0x4bba53*/
      v44 = v25; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v26 = *v25; /*0x4bba68*/
        v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
        v28 = (uint16_t)(v26 & v34); /*0x4bba91*/
        v25 = v44 + 1; /*0x4bba9c*/
        *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
        if ( ++v29 >= v40 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v11 = v36; /*0x4bba5d*/
      }
      IDA_LOWORD(v12) = v30; /*0x4bbabd*/
      IDA_LOWORD(v19) = i; /*0x4bbac1*/
      IDA_LOWORD(v11) = v31; /*0x4bbac5*/
      v16 = v45; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(unsigned int *)v32 + 96))(v32); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}
// IDA: 0x4BAD80 -- DSurface::Lock (315B)
// thiscall: ECX=this, stack=[x, y]
// Returns pointer to locked surface pixel at (x,y), or nullptr on failure.
// vtable[23] — Lost-surface recovery: re-locks after Restore via Lock(0,0)+Unlock() cycle.
// First lock path calls IDirectDrawSurface7::Lock(vtable[25]) and caches desc in SurfaceDesc.
// Nested lock path just increments LockCount and computes byte offset.
REVERSE(0x4BAD80, "DSurface::Lock: Lock surface for CPU access", "None")
// 0x4bad80
void* DSurface::Lock(int x, int y)
{
  int v4; // eax
  void *DSurface_field_0xC; // esi
  void *DSurface_field_0x0; // edx
  int v7; // eax
  void *DSurface_field_0x20; // eax
  int v9; // esi
  unsigned int v11[27]; // [esp+28h] [ebp-6Ch] BYREF

  if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bad99*/
    return 0; /*0x4bad99*/
  v4 = this->DSurface_field_0x1C[0]; /*0x4bad9f*/
  if ( v4 && (*(int (__stdcall **)(int))(*(unsigned int *)v4 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4badb1*/
  {
    if ( (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4badca*/
      || (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4badcf*/
    }
    DSurface_field_0xC = this->DSurface_field_0xC; /*0x4badd5*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4badda*/
    {
      DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baddc*/
      this->DSurface_field_0xC = 0; /*0x4bade0*/
      (*((void (__thiscall **)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bade7*/
      ++this->DSurface_field_0xC; /*0x4badf0*/
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4badf5*/
      this->DSurface_field_0xC = DSurface_field_0xC; /*0x4badf8*/
    }
  }
  if ( x >= 0 && y >= 0 ) /*0x4bae13*/
  {
    if ( this->DSurface_field_0xC ) /*0x4bae19*/
    {
  LABEL_14:
      ++this->DSurface_field_0xC; /*0x4bae7c*/
      v9 = y * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4bae90*/
      return (char *)this->DSurface_field_0x14 /*0x4baeac*/
           + x * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this)
           + v9;
    }
    memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
    v7 = this->DSurface_field_0x1C[0]; /*0x4bae2f*/
    v11[0] = 108; /*0x4bae38*/
    if ( !(*(int (__stdcall **)(int, unsigned int, unsigned int *, int, unsigned int))(*(unsigned int *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
    {
      qmemcpy(this->DSurface_field_0x20, v11, 0x6Cu); /*0x4bae59*/
      DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bae5b*/
      this->DSurface_field_0x10 = (void *)((unsigned int)(*((unsigned int *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bae67*/
      IDA_BYTE1(this->DSurface_field_0x18) = (*((unsigned int *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bae73*/
      this->DSurface_field_0x14 = (void *)*((unsigned int *)DSurface_field_0x20 + 9); /*0x4bae79*/
      goto LABEL_14; /*0x4bae79*/
    }
  }
  return 0; /*0x4baea5*/
}
// IDA: 0x4BAF40 -- DSurface::Unlock (154B)
// vtable[24] — Decrements lock count; on last unlock releases DDraw surface.
// Also handles lost-surface recovery on unlock (re-lock cycle after Restore).
REVERSE(0x4BAF40, "DSurface::Unlock: Release DDraw surface lock", "None")
// 0x4baf40
int DSurface::Unlock()
{
  int v2; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx
  int result; // eax

  if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4baf54*/
  {
    v2 = this->DSurface_field_0x1C[0]; /*0x4baf56*/
    if ( v2 ) /*0x4baf5b*/
    {
      if ( (*(int (__stdcall **)(int))(*(unsigned int *)v2 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 /*0x4baf7d*/
        && !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0])
        && !(*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = this->DSurface_field_0xC; /*0x4baf84*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4baf89*/
        {
          DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baf8b*/
          this->DSurface_field_0xC = 0; /*0x4baf93*/
          (*((void (__thiscall **)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4baf96*/
          ++this->DSurface_field_0xC; /*0x4baf9f*/
          (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bafa4*/
          this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bafa7*/
        }
      }
    }
  }
  result = (int)this->DSurface_field_0xC; /*0x4bafaa*/
  if ( result <= 0 ) /*0x4bafaf*/
  {
    IDA_LOBYTE(result) = 0; /*0x4bafd6*/
  }
  else
  {
    this->DSurface_field_0xC = (void *)--result; /*0x4bafb4*/
    if ( !result ) /*0x4bafb7*/
    {
      result = (*(int (__stdcall **)(int, void *))(*(unsigned int *)this->DSurface_field_0x1C[0] + 128))( /*0x4bafc3*/
                 this->DSurface_field_0x1C[0],
                 this->DSurface_field_0x14);
      this->DSurface_field_0x14 = 0; /*0x4bafc9*/
    }
    IDA_LOBYTE(result) = 1; /*0x4bafd1*/
  }
  return result; /*0x4bafd0*/
}
// 0x4baec0
int DSurface::CanLock(uint32_t /*unk1*/, uint32_t /*unk2*/)
{
  int result; // eax
  int v5; // eax
  unsigned int v6[27]; // [esp+4h] [ebp-6Ch] BYREF

  result = (int)this->DSurface_field_0xC; /*0x4baec6*/
  if ( !result ) /*0x4baecb*/
  {
    memset(v6, 0, sizeof(v6)); /*0x4baed9*/
    v5 = this->DSurface_field_0x1C[0]; /*0x4baedb*/
    v6[0] = 108; /*0x4baee6*/
    result = (*(int (__stdcall **)(int, unsigned int, unsigned int *, unsigned int, unsigned int))(*(unsigned int *)v5 + 100))(v5, 0, v6, 0, 0); /*0x4baef4*/
    if ( result ) /*0x4baefa*/
    {
      IDA_LOBYTE(result) = 0; /*0x4baefc*/
      return result; /*0x4baf02*/
    }
    result = (*(int (__stdcall **)(int, unsigned int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 128))( /*0x4baf10*/
               this->DSurface_field_0x1C[0],
               v6[9]);
  }
  IDA_LOBYTE(result) = 1; /*0x4baf16*/
  return result; /*0x4baefe*/
}
// 0x4baf20
BOOL __thiscall DSurface::CheckBltStatus(unsigned int **this)
{
  return (*(int (__stdcall **)(int, int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 52))( /*0x4baf30*/
           this->DSurface_field_0x1C[0],
           1) == 0;
}
/* ASM:
mov     eax, [ecx+1Ch]
push    1
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+34h]
neg     eax
sbb     eax, eax
inc     eax
retn
*/

// 0x4115f0
void* BSurface::Lock(int x, int y)
{
  int v4; // eax
  char *Buffer; // edi
  int v6; // ebx

  v4 = *(unsigned int *)this->XSurface; /*0x4115f8*/
  ++this->?; /*0x4115fb*/
  Buffer = (char *)this->Buffer; /*0x4115fe*/
  v6 = x * (*(int (__thiscall **)(BSurface *))(v4 + 112))(this); /*0x411608*/
  return &Buffer[v6 + y * (*(int (__thiscall **)(BSurface *))(*(unsigned int *)this->XSurface + 116))(this)]; /*0x41161b*/
}
void Surface::DrawSHP(
    ConvertClass* palette,
    SHPStruct* shp,
    int frame_index,
    const Point2D& pos,
    const RectangleStruct& bounds,
    BlitterFlags flags,
    uint32_t arg7,
    int arg8,
    uint32_t arg9,
    uint32_t argA,
    int tint_color,
    SHPStruct* buildingz_sha,
    uint32_t argD,
    int zs_x,
    int zs_y)
{
    (void)palette;
    (void)shp;
    (void)frame_index;
    (void)pos;
    (void)bounds;
    (void)flags;
    (void)arg7;
    (void)arg8;
    (void)arg9;
    (void)argA;
    (void)tint_color;
    (void)buildingz_sha;
    (void)argD;
    (void)zs_x;
    (void)zs_y;
}

void Surface::DrawSHP(
    ConvertClass* palette,
    SHPStruct* shp,
    int frame_index,
    const Point2D& location)
{
    RectangleStruct bounds = {};
    DrawSHP(palette, shp, frame_index, location, bounds, BlitterFlags::None, 0, 0, 0, 0, 0, nullptr, 0, 0, 0);
}

Point2D* Surface::DrawText(
    Point2D* out,
    const wchar_t* text,
    Surface* surface,
    const RectangleStruct& bounds,
    const Point2D& location,
    uint16_t color,
    uint32_t option3,
    uint32_t flags,
    uint32_t unknown9)
{
    (void)text;
    (void)surface;
    (void)bounds;
    (void)location;
    (void)color;
    (void)option3;
    (void)flags;
    (void)unknown9;
    if (out)
        *out = {};
    return out;
}

Point2D Surface::DrawText(
    const wchar_t* text,
    Surface* surface,
    const RectangleStruct& bounds,
    const Point2D& location,
    uint16_t color,
    uint32_t option3,
    uint32_t flags,
    uint32_t unknown9)
{
    Point2D out;
    DrawText(&out, text, surface, bounds, location, color, option3, flags, unknown9);
    return out;
}

Point2D Surface::DrawText(
    const wchar_t* text,
    const RectangleStruct& bounds,
    const Point2D& location,
    uint16_t color,
    uint32_t option3,
    uint32_t flags)
{
    return DrawText(text, this, bounds, location, color, option3, flags, 1);
}

Point2D Surface::DrawText(
    const wchar_t* text,
    const Point2D& location,
    uint16_t color,
    uint32_t option3,
    uint32_t flags)
{
    RectangleStruct bounds = {};
    return DrawText(text, bounds, location, color, option3, flags);
}

// --- XSurface pixel operations (Batch A) ---

// IDA: 0x7BAEB0 -- XSurface::SetPixel (89B)
// vtable[9]  0x24 -- Lock(point) -> check BPP -> write pixel -> Unlock
REVERSE(0x7baeb0, "XSurface::SetPixel: pixel write", "None")
// 0x7baeb0
int XSurface::SetPixel(const Point2D& point, uint32_t color)
{
  int result; // eax
  int16_t *v5; // edi

  result = (*(int (__thiscall **)(XSurface *, unsigned int, unsigned int))(*(unsigned int *)this->Surface + 92))(this, *point, point[1]); /*0x7baec3*/
  v5 = (int16_t *)result; /*0x7baec6*/
  if ( result ) /*0x7baeca*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this) == 2 ) /*0x7baed6*/
      *v5 = color; /*0x7baedf*/
    else
      *(unsigned char *)v5 = color; /*0x7baef2*/
    result = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7baee4*/
    IDA_LOBYTE(result) = 1; /*0x7baee8*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x7baf03*/
  }
  return result; /*0x7baee7*/
}
// 0x7bae60
int XSurface::GetPixel(const Point2D& point)
{
  int v3; // ebx
  unsigned short *v4; // edi

  v3 = 0; /*0x7bae74*/
  v4 = (unsigned short *)(*(int (__thiscall **)(XSurface *, unsigned int, unsigned int))(*(unsigned int *)this->Surface + 92))(this, *point, point[1]); /*0x7bae79*/
  if ( v4 ) /*0x7bae7d*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this) == 2 ) /*0x7bae89*/
    {
      IDA_LOWORD(v3) = *v4; /*0x7bae8d*/
      (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7bae92*/
      return v3; /*0x7bae9a*/
    }
    v3 = *(uint8_t *)v4; /*0x7baea1*/
    (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7baea5*/
  }
  return v3; /*0x7bae95*/
}
// 0x7baf90
int XSurface::PutPixel(const Point2D& point, uint16_t color, const RectangleStruct& clip_rect)
{
  int result; // eax
  int v6; // ecx
  int v7; // edx
  int16_t *v8; // esi

  result = (int)clip_rect; /*0x7baf90*/
  if ( *point >= *clip_rect /*0x7bafd3*/
    && *point < *clip_rect + clip_rect[2]
    && (v6 = point[1], v7 = clip_rect[1], v6 >= v7)
    && (result = v7 + clip_rect[3], v6 < result)
    && (result = (*(int (__thiscall **)(XSurface *, unsigned int, unsigned int))(*(unsigned int *)this->Surface + 92))(this, *point, point[1]),
        (v8 = (int16_t *)result) != 0) )
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this) == 2 ) /*0x7bafdf*/
      *v8 = color; /*0x7bafe8*/
    else
      *(unsigned char *)v8 = color; /*0x7baffb*/
    result = (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7bafed*/
    IDA_LOBYTE(result) = 1; /*0x7baff1*/
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x7bb00c*/
  }
  return result; /*0x7baff0*/
}
// 0x7baf10
int XSurface::GetPixelAtCoords(const Point2D& point, const RectangleStruct& clip_rect)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  unsigned short *v7; // esi

  v4 = 0; /*0x7baf19*/
  if ( *point >= *clip_rect && *point < *clip_rect + clip_rect[2] ) /*0x7baf30*/
  {
    v5 = point[1]; /*0x7baf32*/
    v6 = clip_rect[1]; /*0x7baf35*/
    if ( v5 >= v6 && v5 < v6 + clip_rect[3] ) /*0x7baf43*/
    {
      v7 = (unsigned short *)(*(int (__thiscall **)(XSurface *, unsigned int, unsigned int))(*(unsigned int *)this->Surface + 92))( /*0x7baf50*/
                      this,
                      *point,
                      point[1]);
      if ( v7 ) /*0x7baf54*/
      {
        if ( (*(int (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 112))(this) == 2 ) /*0x7baf60*/
        {
          IDA_LOWORD(v4) = *v7; /*0x7baf64*/
          (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7baf69*/
          return v4; /*0x7baf71*/
        }
        v4 = *(uint8_t *)v7; /*0x7baf78*/
        (*(void (__thiscall **)(XSurface *))(*(unsigned int *)this->Surface + 96))(this); /*0x7baf7c*/
      }
    }
  }
  return v4; /*0x7baf6c*/
}
// 0x7ba5e0
int XSurface::DrawLine(const Point2D& start, const Point2D& end, uint32_t color)
{
  int v5; // eax
  int result; // eax
  unsigned char v7[16]; // [esp+4h] [ebp-10h] BYREF

  v5 = (*(int (__thiscall **)(XSurface *, unsigned char *))(*(unsigned int *)this->Surface + 120))(this, v7); /*0x7ba5fe*/
  IDA_LOBYTE(result) = XSurface::DrawLineEx(this, v5, start, end, color); /*0x7ba604*/
  return result; /*0x7ba609*/
}
// 0x7bbab0
int XSurface::Fill(uint32_t color)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  unsigned char v7[20]; // [esp+8h] [ebp-20h] BYREF
  unsigned char v8[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(unsigned int *)this->Surface; /*0x7bbabf*/
  v4 = (*(int (__thiscall **)(XSurface *, unsigned char *, int))(*(unsigned int *)this->Surface + 120))(this, v7, color); /*0x7bbac5*/
  v5 = (*(int (__thiscall **)(XSurface *, unsigned char *, int))(*(unsigned int *)this->Surface + 120))(this, v8, v4); /*0x7bbad2*/
  return (*(int (__thiscall **)(XSurface *, int))(v3 + 16))(this, v5); /*0x7bbadb*/
}
// 0x7badc0
bool XSurface::DrawRectEx(
{
  int v5; // edx
  int v6; // eax
  int v7; // edi
  unsigned int v9[2]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v10[2]; // [esp+28h] [ebp-18h] BYREF
  unsigned int v11[2]; // [esp+30h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-8h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]

  v5 = a3[1]; /*0x7badcd*/
  v6 = a3[3]; /*0x7badd4*/
  v7 = a3[2] + *a3 - 1; /*0x7baddb*/
  v9[0] = *a3; /*0x7baddf*/
  v10[0] = v7; /*0x7bade7*/
  v11[0] = v7; /*0x7badeb*/
  v13 = v6 + v5 - 1; /*0x7badf3*/
  v11[1] = v13; /*0x7badf7*/
  v12 = v9[0]; /*0x7badfb*/
  v9[1] = v5; /*0x7bae08*/
  v10[1] = v5; /*0x7bae0c*/
  (*(void (__thiscall **)(XSurface *, int, unsigned int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae17*/
    this,
    a2,
    v9,
    v10,
    a4);
  (*(void (__thiscall **)(XSurface *, int, unsigned int *, int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae2a*/
    this,
    a2,
    v9,
    &v12,
    a4);
  (*(void (__thiscall **)(XSurface *, int, unsigned int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae3d*/
    this,
    a2,
    v10,
    v11,
    a4);
  (*(void (__thiscall **)(XSurface *, int, int *, unsigned int *, int))(*(unsigned int *)this->Surface + 44))( /*0x7bae50*/
    this,
    a2,
    &v12,
    v11,
    a4);
  return 1; /*0x7bae53*/
}
// IDA: 0x7BAD90 -- XSurface::DrawRect (43B)
// vtable[22] 0x58 -- DrawRectEx wrapper with surface-level clip
// 0x7bad90
int XSurface::DrawRect(const RectangleStruct& draw_rect, uint32_t color)
{
  int v4; // eax
  int result; // eax
  unsigned char v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*(int (__thiscall **)(XSurface *, unsigned char *))(*(unsigned int *)this->Surface + 120))(this, v6); /*0x7bada9*/
  IDA_LOBYTE(result) = XSurface::DrawRectEx(this, v4, draw_rect, color); /*0x7badaf*/
  return result; /*0x7badb4*/
}
// 0x7bb020
int XSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
  int *v4; // eax
  int result; // eax
  unsigned char v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (int *)(*(int (__thiscall **)(XSurface *, unsigned char *))(*(unsigned int *)this->Surface + 120))(this, v6); /*0x7bb032*/
  IDA_LOBYTE(result) = XSurface::FillRectEx(this, fill_rect, v4, color); /*0x7bb03d*/
  return result; /*0x7bb042*/
}
// 0x7bb050
bool XSurface::FillRectEx(
{
  XSurface *v4; // edi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int *v13; // eax
  unsigned int *v14; // eax
  int v15; // ebx
  int v16; // eax
  unsigned int *v17; // eax
  int v18; // esi
  int v19; // edx
  char v20; // dl
  int v21; // eax
  unsigned int v22; // ecx
  unsigned short *v24; // edi
  int i; // ecx
  unsigned int *v26; // eax
  int v27; // ebx
  char v28; // dl
  int16_t v29; // bx
  int v30; // edx
  signed int v31; // ecx
  char *v32; // edi
  unsigned short *v33; // eax
  char v34; // dl
  int16_t v35; // bx
  int v36; // edx
  signed int v37; // ecx
  char *v38; // edi
  unsigned short *v39; // eax
  bool v40; // zf
  XSurface *v41; // [esp-4h] [ebp-7Ch]
  XSurface *v42; // [esp-4h] [ebp-7Ch]
  int v43[4]; // [esp+Ch] [ebp-6Ch] BYREF
  Rect v44; // [esp+1Ch] [ebp-5Ch] BYREF
  int v45[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v46[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  unsigned int v47[2]; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v48; // [esp+54h] [ebp-24h]
  int v49; // [esp+58h] [ebp-20h]
  int v50; // [esp+5Ch] [ebp-1Ch] BYREF
  int v51; // [esp+64h] [ebp-14h] BYREF
  int v52; // [esp+68h] [ebp-10h]
  char *v53; // [esp+6Ch] [ebp-Ch]
  signed int v54; // [esp+70h] [ebp-8h]
  XSurface *v55; // [esp+74h] [ebp-4h]
  unsigned int *v56; // [esp+80h] [ebp+8h]
  unsigned int *v57; // [esp+80h] [ebp+8h]
  int *v58; // [esp+84h] [ebp+Ch]
  int v59; // [esp+88h] [ebp+10h]
  int v60; // [esp+88h] [ebp+10h]

  v4 = this; /*0x7bb05c*/
  v5 = a3[2]; /*0x7bb05e*/
  v55 = this; /*0x7bb061*/
  if ( v5 <= 0 ) /*0x7bb066*/
    return 0; /*0x7bb066*/
  if ( a3[3] <= 0 ) /*0x7bb071*/
    return 0; /*0x7bb071*/
  v6 = (int *)(*(int (__thiscall **)(XSurface *, int *))(*(unsigned int *)this->Surface + 120))(this, v45); /*0x7bb07f*/
  v7 = ClipRectIntersection(&v50, a2, v6, 0, 0); /*0x7bb08f*/
  v46[0] = *v7; /*0x7bb096*/
  v46[1] = v7[1]; /*0x7bb09c*/
  v8 = *a3; /*0x7bb09f*/
  v46[2] = v7[2]; /*0x7bb0a4*/
  v9 = a3[1]; /*0x7bb0a7*/
  v46[3] = v7[3]; /*0x7bb0ad*/
  v10 = a2[1]; /*0x7bb0b2*/
  v51 = v8 + *a2; /*0x7bb0b7*/
  v11 = v9 + v10; /*0x7bb0bd*/
  v12 = a3[2]; /*0x7bb0c0*/
  v52 = v11; /*0x7bb0c3*/
  v13 = Rect::Construct(&v44, &v51, v12, a3[3]); /*0x7bb0cf*/
  v45[0] = *v13; /*0x7bb0d8*/
  v45[1] = v13[1]; /*0x7bb0e0*/
  v45[2] = v13[2]; /*0x7bb0e6*/
  v45[3] = v13[3]; /*0x7bb0f2*/
  v14 = ClipRectIntersection(v43, v46, v45, 0, 0); /*0x7bb0f9*/
  v47[0] = *v14; /*0x7bb100*/
  v47[1] = v14[1]; /*0x7bb106*/
  v15 = v14[2]; /*0x7bb109*/
  v48 = v15; /*0x7bb10c*/
  v16 = v14[3]; /*0x7bb10f*/
  v49 = v16; /*0x7bb114*/
  if ( v15 <= 0 ) /*0x7bb117*/
    return 0; /*0x7bb117*/
  if ( v16 <= 0 ) /*0x7bb11f*/
    return 0; /*0x7bb11f*/
  v56 = (unsigned int *)v16; /*0x7bb125*/
  v58 = (int *)(*(int (__thiscall **)(XSurface *))(*(unsigned int *)v4->Surface + 116))(v4); /*0x7bb132*/
  v17 = CellStruct::Copy((CellStruct *)v47, &v51); /*0x7bb139*/
  v18 = (*(int (__thiscall **)(XSurface *, unsigned int, unsigned int))(*(unsigned int *)v4->Surface + 92))(v4, *v17, v17[1]); /*0x7bb154*/
  v53 = (char *)v18; /*0x7bb158*/
  if ( !v18 ) /*0x7bb15b*/
    return 0; /*0x7bb333*/
  if ( (*(int (__thiscall **)(XSurface *))(*(unsigned int *)v4->Surface + 112))(v4) == 1 ) /*0x7bb16b*/
  {
    v57 = 0; /*0x7bb170*/
    if ( v49 > 0 ) /*0x7bb179*/
    {
      do /*0x7bb1b2*/
      {
        IDA_LOBYTE(v15) = a4; /*0x7bb185*/
        v20 = v48; /*0x7bb187*/
        IDA_BYTE1(v15) = a4; /*0x7bb189*/
        v21 = v15 << 16; /*0x7bb18f*/
        IDA_LOWORD(v21) = v15; /*0x7bb192*/
        v22 = v48 >> 2; /*0x7bb195*/
        memset32((void *)v18, v21, v48 >> 2); /*0x7bb198*/
        memset((void *)(v18 + 4 * v22), a4, v20 & 3); /*0x7bb19f*/
        v18 += (int)v58; /*0x7bb1aa*/
        v57 = (unsigned int *)((char *)v57 + 1); /*0x7bb1af*/
      }
      while ( (int)v57 < v49 ); /*0x7bb1b2*/
  LABEL_9:
      (*(void (__thiscall **)(XSurface *))(*(unsigned int *)v55->Surface + 96))(v55); /*0x7bb1b4*/
      return 1; /*0x7bb1c6*/
    }
  }
  else if ( (v18 & 3) != 0 ) /*0x7bb1d1*/
  {
    if ( (v18 & 3) == 2 ) /*0x7bb1da*/
    {
      if ( v15 > 1 ) /*0x7bb22f*/
      {
        v27 = v15 - 1; /*0x7bb262*/
        v28 = v27; /*0x7bb263*/
        v54 = v27 >> 1; /*0x7bb267*/
        v29 = a4; /*0x7bb26a*/
        v30 = v28 & 1; /*0x7bb26f*/
        v53 = (char *)(a4 | (a4 << 16)); /*0x7bb277*/
        v59 = (int)v56; /*0x7bb285*/
        do /*0x7bb2b8*/
        {
          *(unsigned short *)v18 = v29; /*0x7bb28b*/
          v41 = v4; /*0x7bb291*/
          v31 = v54; /*0x7bb292*/
          v32 = (char *)(v18 + 2); /*0x7bb295*/
          if ( v54 > 0 ) /*0x7bb29b*/
          {
            memset32(v32, (int)v53, v54); /*0x7bb2a0*/
            v32 += 4 * v31; /*0x7bb2a0*/
          }
          v33 = v32; /*0x7bb2a2*/
          v4 = v41; /*0x7bb2a4*/
          if ( v30 ) /*0x7bb2a7*/
            *v33 = v29; /*0x7bb2a9*/
          v18 += (int)v58; /*0x7bb2b2*/
          --v59; /*0x7bb2b5*/
        }
        while ( v59 ); /*0x7bb2b8*/
        goto LABEL_9; /*0x7bb2b8*/
      }
      v26 = v56; /*0x7bb237*/
      do /*0x7bb24e*/
      {
        *(unsigned short *)v18 = a4; /*0x7bb248*/
        v18 += (int)v58; /*0x7bb24b*/
        v26 = (unsigned int *)((char *)v26 - 1); /*0x7bb24d*/
      }
      while ( v26 ); /*0x7bb24e*/
    }
    else
    {
      do /*0x7bb218*/
      {
        IDA_LOWORD(v19) = a4; /*0x7bb1f3*/
        v19 <<= 16; /*0x7bb1f8*/
        IDA_LOWORD(v19) = a4; /*0x7bb1fb*/
        memset32((void *)v18, v19, (unsigned int)v15 >> 1); /*0x7bb202*/
        v24 = (unsigned short *)(v18 + 4 * ((unsigned int)v15 >> 1)); /*0x7bb202*/
        for ( i = v15 & 1; i; --i ) /*0x7bb204*/
          *v24++ = a4; /*0x7bb206*/
        v4 = v55; /*0x7bb209*/
        v18 += (int)v58; /*0x7bb212*/
        v56 = (unsigned int *)((char *)v56 - 1); /*0x7bb215*/
      }
      while ( v56 ); /*0x7bb218*/
    }
  }
  else
  {
    v34 = v15; /*0x7bb2cf*/
    v54 = v15 >> 1; /*0x7bb2d3*/
    v35 = a4; /*0x7bb2d6*/
    v36 = v34 & 1; /*0x7bb2db*/
    v52 = a4 | (a4 << 16); /*0x7bb2e3*/
    v60 = (int)v56; /*0x7bb2ed*/
    do /*0x7bb31a*/
    {
      v42 = v4; /*0x7bb2f0*/
      v37 = v54; /*0x7bb2f1*/
      v38 = v53; /*0x7bb2f4*/
      if ( v54 > 0 ) /*0x7bb2fa*/
      {
        memset32(v53, v52, v54); /*0x7bb2ff*/
        v38 += 4 * v37; /*0x7bb2ff*/
      }
      v39 = v38; /*0x7bb301*/
      v4 = v42; /*0x7bb303*/
      if ( v36 ) /*0x7bb306*/
        *v39 = v35; /*0x7bb308*/
      v18 += (int)v58; /*0x7bb311*/
      v40 = v60 == 1; /*0x7bb313*/
      v53 = (char *)v18; /*0x7bb314*/
      --v60; /*0x7bb317*/
    }
    while ( !v40 ); /*0x7bb31a*/
    v4 = v55; /*0x7bb31c*/
  }
  (*(void (__thiscall **)(XSurface *))(*(unsigned int *)v4->Surface + 96))(v4); /*0x7bb21e*/
  return 1; /*0x7bb1c0*/
}
// Forward-declare BlitterCopySimpleSHP (defined in shp rendering module)
// IDA: 0x437350 — copies pixels from source to dest surface using a blitter vtable
extern "C" bool BlitterCopySimpleSHP(
    void* src_surface, void* rects, void** blitter_vtable,
    int zero1, int arg3, int arg1000, int zero2);

// IDA: 0x7BBAF0 -- XSurface::BlitWhole (145B)
// vtable[1] 0x04 -- GetRect both surfaces → Blit with zero origins
REVERSE(0x7BBAF0, "XSurface::BlitWhole: Blit wrapper with zero origins", "None")
// 0x7bbaf0
int XSurface::BlitWhole(Surface* src, bool option1, bool option2)
{
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-30h] BYREF
  int v13; // [esp+10h] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-28h]
  int v16; // [esp+1Ch] [ebp-20h] BYREF
  int v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+24h] [ebp-18h]
  unsigned char v20[16]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = (int *)(*(int (__thiscall **)(XSurface *, unsigned char *))(*(unsigned int *)this->Surface + 120))(this, v20); /*0x7bbb01*/
  v16 = *v5; /*0x7bbb0a*/
  v17 = v5[1]; /*0x7bbb13*/
  v18 = v5[2]; /*0x7bbb1c*/
  v6 = *src; /*0x7bbb20*/
  v7 = v5[3]; /*0x7bbb22*/
  v16 = 0; /*0x7bbb25*/
  v7 = v7; /*0x7bbb29*/
  v17 = 0; /*0x7bbb32*/
  v8 = (int *)src->GetRect(v20); /*0x7bbb36*/
  v12 = *v8; /*0x7bbb3b*/
  v13 = v8[1]; /*0x7bbb42*/
  v14 = v8[2]; /*0x7bbb49*/
  v9 = v8[3]; /*0x7bbb51*/
  v10 = *(unsigned int *)this->Surface; /*0x7bbb54*/
  v9 = v9; /*0x7bbb56*/
  v12 = 0; /*0x7bbb6d*/
  v13 = 0; /*0x7bbb71*/
  return (*(int (__thiscall **)(XSurface *, int *, int *, int *, int, int))(v10 + 8))(this, &v16, src, &v12, option1, option2); /*0x7bbb78*/
}
// 0x4bf750
bool DSurface::DrawGradientLine(
{
  DSurface *v8; // ebp
  int *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned short *v15; // ebx
  float *v16; // esi
  float *v17; // edi
  unsigned char *v18; // eax
  uint8_t v19; // dl
  double v20; // st7
  char v22; // c0
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  float *v27; // edi
  unsigned char *v28; // eax
  uint8_t v29; // dl
  double v30; // st7
  char v32; // c0
  bool v33; // zf
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebp
  float *v40; // esi
  float *v41; // edi
  unsigned char *v42; // eax
  uint8_t v43; // dl
  double v44; // st7
  char v46; // c0
  int v47; // ebx
  float *v48; // esi
  float *v49; // edi
  int v50; // ebp
  unsigned char *v51; // eax
  uint8_t v52; // dl
  double v53; // st7
  char v55; // c0
  int v57; // [esp+10h] [ebp-48h]
  int v58; // [esp+14h] [ebp-44h]
  int v59; // [esp+14h] [ebp-44h]
  int v60; // [esp+18h] [ebp-40h] BYREF
  int v61; // [esp+1Ch] [ebp-3Ch]
  int v62; // [esp+20h] [ebp-38h] BYREF
  int v63; // [esp+24h] [ebp-34h]
  int v64; // [esp+28h] [ebp-30h] BYREF
  int v65; // [esp+2Ch] [ebp-2Ch]
  int v66; // [esp+30h] [ebp-28h]
  int v67; // [esp+34h] [ebp-24h]
  unsigned char v68[16]; // [esp+38h] [ebp-20h] BYREF
  int v69[4]; // [esp+48h] [ebp-10h] BYREF
  unsigned short *v70; // [esp+5Ch] [ebp+4h]
  int v71; // [esp+5Ch] [ebp+4h]
  unsigned int *v72; // [esp+60h] [ebp+8h]
  int v73; // [esp+60h] [ebp+8h]
  unsigned int *v74; // [esp+64h] [ebp+Ch]
  int v75; // [esp+64h] [ebp+Ch]

  v8 = this; /*0x4bf755*/
  v9 = (int *)(*((int (__thiscall **)(DSurface *, unsigned char *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
  v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
  v64 = *v10; /*0x4bf77d*/
  v65 = v10[1]; /*0x4bf784*/
  v66 = v10[2]; /*0x4bf78b*/
  v67 = v10[3]; /*0x4bf796*/
  v11 = v65 + a3[1]; /*0x4bf7a1*/
  v60 = v64 + *a3; /*0x4bf7a3*/
  v61 = v11; /*0x4bf7a7*/
  v12 = v64 + *a4; /*0x4bf7b6*/
  v63 = v65 + a4[1]; /*0x4bf7b8*/
  v62 = v12; /*0x4bf7c9*/
  if ( (uint8_t)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
  {
    v13 = v60; /*0x4bf7da*/
    if ( v60 > v62 ) /*0x4bf7e4*/
    {
      v14 = v61; /*0x4bf7e6*/
      v60 = v62; /*0x4bf7ea*/
      v62 = v13; /*0x4bf7f2*/
      v61 = v63; /*0x4bf7f6*/
      v63 = v14; /*0x4bf7fa*/
    }
    if ( (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
    {
      v15 = (unsigned short *)(*((int (__thiscall **)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
      v70 = v15; /*0x4bf825*/
      if ( v15 ) /*0x4bf829*/
      {
        if ( v61 == v63 ) /*0x4bf83a*/
        {
          v71 = 0; /*0x4bf84a*/
          if ( v62 - v60 >= 0 ) /*0x4bf852*/
          {
            v16 = a8; /*0x4bf858*/
            v17 = a7; /*0x4bf85c*/
            do /*0x4bf874*/
            {
              v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
              IDA_LOWORD(a8) = *(unsigned short *)v18; /*0x4bf87f*/
              v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
              IDA_LOWORD(v18) = (uint8_t)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
              *v15 = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                   | ((unsigned int)v18 << g_BitMask_Green)
                   | (v19 << g_BitShift_Blue);
              v20 = *v17 + *v16; /*0x4bf8d2*/
              *v16 = v20; /*0x4bf8da*/
              if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
              {
                *v16 = 0.0; /*0x4bf8f4*/
              }
              else
              {
                if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                  goto LABEL_16; /*0x4bf916*/
                *v16 = 1.0; /*0x4bf918*/
              }
              *v17 = -*v17; /*0x4bf922*/
  LABEL_16:
              ++v15; /*0x4bf924*/
              ++v71; /*0x4bf938*/
            }
            while ( v71 <= v62 - v60 ); /*0x4bf874*/
          }
  LABEL_17:
          (*((void (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v60 == v62 ) /*0x4bf960*/
        {
          if ( v61 <= v63 ) /*0x4bf968*/
            v24 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
          else
            v24 = -(*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
          v72 = (unsigned int *)v24; /*0x4bf982*/
          v25 = abs32(v63 - v61); /*0x4bf98f*/
          if ( v25 < 0 ) /*0x4bf991*/
            goto LABEL_17; /*0x4bf991*/
          v26 = a8; /*0x4bf997*/
          v27 = a7; /*0x4bf99b*/
          v74 = (unsigned int *)(v25 + 1); /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
            IDA_LOWORD(a8) = *(unsigned short *)v28; /*0x4bf9c3*/
            v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
            IDA_LOWORD(v28) = (uint8_t)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
            *v70 = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                 | ((unsigned int)v28 << g_BitMask_Green)
                 | (v29 << g_BitShift_Blue);
            v30 = *v27 + *v26; /*0x4bfa1a*/
            *v26 = v30; /*0x4bfa22*/
            if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
            {
              *v26 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_31; /*0x4bfa5e*/
              *v26 = 1.0; /*0x4bfa60*/
            }
            *v27 = -*v27; /*0x4bfa6a*/
  LABEL_31:
            v33 = v74 == (unsigned int *)1; /*0x4bfa6c*/
            v70 = (unsigned short *)((char *)v70 + (unsigned int)v72); /*0x4bfa7b*/
            v74 = (unsigned int *)((char *)v74 - 1); /*0x4bfa7f*/
            if ( v33 ) /*0x4bfa83*/
              goto LABEL_17; /*0x4bfa83*/
          }
        }
        v34 = v63 - v61; /*0x4bfaa1*/
        v35 = v62 - v60; /*0x4bfaa6*/
        v58 = v62 - v60; /*0x4bfaaa*/
        v36 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
        v73 = v36; /*0x4bfab3*/
        if ( v34 < 0 ) /*0x4bfab7*/
          v73 = -v36; /*0x4bfabb*/
        v57 = 2 * v35; /*0x4bfac7*/
        v37 = abs32(v34); /*0x4bfacb*/
        v75 = 2 * v37; /*0x4bfad2*/
        if ( v35 > v37 ) /*0x4bfad6*/
        {
          v38 = 0; /*0x4bfade*/
          v39 = 2 * v37 - v35; /*0x4bfae0*/
          if ( v35 < 0 ) /*0x4bfae4*/
          {
  LABEL_61:
            v8 = this; /*0x4bfd08*/
            goto LABEL_17; /*0x4bfd08*/
          }
          v40 = a8; /*0x4bfaea*/
          v41 = a7; /*0x4bfaee*/
          while ( 1 ) /*0x4bfb06*/
          {
            v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
            IDA_LOWORD(a8) = *(unsigned short *)v42; /*0x4bfb11*/
            v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
            IDA_LOWORD(v42) = (uint8_t)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
            v70[v38] = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                     | ((unsigned int)v42 << g_BitMask_Green)
                     | (v43 << g_BitShift_Blue);
            v44 = *v41 + *v40; /*0x4bfb69*/
            *v40 = v44; /*0x4bfb71*/
            if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
            {
              *v40 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_45; /*0x4bfbad*/
              *v40 = 1.0; /*0x4bfbaf*/
            }
            *v41 = -*v41; /*0x4bfbb9*/
  LABEL_45:
            if ( v39 > 0 ) /*0x4bfbbd*/
            {
              v39 -= v57; /*0x4bfbc9*/
              v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfbcb*/
            }
            v39 += v75; /*0x4bfbd7*/
            if ( ++v38 > v58 ) /*0x4bfbdc*/
            {
              (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v47 = 2 * v35 - v37; /*0x4bfbfa*/
        if ( v37 < 0 ) /*0x4bfbfe*/
          goto LABEL_17; /*0x4bfbfe*/
        v48 = a8; /*0x4bfc04*/
        v49 = a7; /*0x4bfc08*/
        v50 = 0; /*0x4bfc0c*/
        v59 = v37 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
          IDA_LOWORD(a8) = *(unsigned short *)v51; /*0x4bfc32*/
          v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
          IDA_LOWORD(v51) = (uint8_t)(IDA_BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
          v70[v50] = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                   | ((unsigned int)v51 << g_BitMask_Green)
                   | (v52 << g_BitShift_Blue);
          v53 = *v49 + *v48; /*0x4bfc8a*/
          *v48 = v53; /*0x4bfc92*/
          if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
          {
            *v48 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_58; /*0x4bfcce*/
            *v48 = 1.0; /*0x4bfcd0*/
          }
          *v49 = -*v49; /*0x4bfcda*/
  LABEL_58:
          if ( v47 > 0 ) /*0x4bfcde*/
          {
            ++v50; /*0x4bfce4*/
            v47 -= v75; /*0x4bfce7*/
          }
          v47 += v57; /*0x4bfcf1*/
          v33 = v59 == 1; /*0x4bfcf9*/
          v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfcfa*/
          --v59; /*0x4bfcfe*/
          if ( v33 ) /*0x4bfd02*/
            goto LABEL_61; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/
}
// ============================================================
// IDA: 0x4C0E30 -- DSurface::DrawStippledRect (1537B)
// vtable[20] 0x50 — stippled rectangle: draws a Bresenham line
// from top_left to bottom_right, gated by the stipple/Z-buffer.
// fill_interior=true  → draw where zbuf==0
// fill_interior=false → draw where zbuf!=0
// ============================================================
REVERSE(0x4C0E30, "DSurface::DrawStippledRect: Stippled rectangle with Z-buffer gating", "None")
// 0x4c0e30
bool DSurface::DrawStippledRect(
{
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned short *v13; // esi
  int v14; // edx
  int16_t *v15; // ecx
  unsigned int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int16_t *v19; // ebp
  int v20; // edx
  unsigned int *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  unsigned int *v29; // eax
  int16_t *v30; // edi
  int v31; // edx
  unsigned int *v32; // ecx
  int16_t *v33; // eax
  int v34; // edi
  int v35; // edx
  int16_t *v36; // ecx
  unsigned int *v37; // eax
  int v38; // ecx
  int v39; // eax
  int16_t *v40; // ebp
  int v41; // edx
  unsigned int *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  unsigned int *v50; // eax
  int16_t *v51; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  unsigned int v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h] BYREF
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h] BYREF
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  int16_t *v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*((int (__thiscall **)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
  v67 = *v6; /*0x4c0e5a*/
  v68 = v6[1]; /*0x4c0e61*/
  v69 = v6[2]; /*0x4c0e68*/
  v70 = v6[3]; /*0x4c0e73*/
  v7 = v68 + a2[1]; /*0x4c0e7e*/
  v63 = v67 + *a2; /*0x4c0e80*/
  v64 = v7; /*0x4c0e84*/
  v8 = v67 + *a3; /*0x4c0e93*/
  v66 = v68 + a3[1]; /*0x4c0e95*/
  v65 = v8; /*0x4c0ea6*/
  if ( !(uint8_t)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( v63 <= v65 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v10 = v64; /*0x4c0ec3*/
    v11 = v63; /*0x4c0ec7*/
    v9 = v65; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = v65; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    v65 = v11; /*0x4c0ed7*/
    v66 = v10; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (unsigned short *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                   *(int **)&stru_87E790.__pad_D8[60],
                   v9,
                   v12 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4));
  v71 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
  v72 = (int16_t *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = v72; /*0x4c0f61*/
        v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
          }
          if ( v71 <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
              v13 = (unsigned short *)((char *)v13 + v16[8]); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
          {
            v13 = (unsigned short *)((char *)v13 - v16[8]); /*0x4c0f8e*/
          }
          ++v14; /*0x4c0fa4*/
          ++v15; /*0x4c0fa9*/
        }
        while ( v14 <= v65 - v63 ); /*0x4c0fae*/
      }
    }
    else if ( v63 == v65 ) /*0x4c0fcf*/
    {
      if ( v64 <= v66 ) /*0x4c0fd7*/
        v17 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
      else
        v17 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
          }
          v13 += v71; /*0x4c102b*/
          if ( v71 <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
              v13 = (unsigned short *)((char *)v13 + v21[8]); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
          {
            v13 = (unsigned short *)((char *)v13 - v21[8]); /*0x4c1035*/
          }
          v19 = (int16_t *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
      v73 = v24; /*0x4c106e*/
      if ( v23 < 0 ) /*0x4c1072*/
        v73 = -v24; /*0x4c1076*/
      v25 = abs32(v23); /*0x4c107f*/
      v62[0] = 2 * v22; /*0x4c1086*/
      v26 = 2 * v25; /*0x4c108a*/
      v56 = 2 * v25; /*0x4c108d*/
      if ( v22 <= v25 ) /*0x4c1091*/
      {
        v31 = 2 * v22 - v25; /*0x4c1126*/
        if ( v25 > 0 ) /*0x4c112a*/
        {
          v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              v33[v34] = a4; /*0x4c1155*/
              v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              ++v34; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 = (int16_t *)((char *)v33 + v73); /*0x4c1182*/
            if ( v71 <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                v13 = (unsigned short *)((char *)v13 + v32[8]); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
            {
              v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c118d*/
            }
            if ( !--v58 ) /*0x4c11a3*/
              break; /*0x4c11a3*/
            v26 = v56; /*0x4c1146*/
          }
        }
      }
      else
      {
        v27 = 0; /*0x4c1099*/
        v28 = v26 - v22; /*0x4c109b*/
        if ( v22 > 0 ) /*0x4c109f*/
        {
          v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
          v30 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              v30[v27] = a4; /*0x4c10b9*/
              v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 = (int16_t *)((char *)v30 + v73); /*0x4c10ca*/
              v13 += v71; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( v71 <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                v13 = (unsigned short *)((char *)v13 + v29[8]); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
            {
              v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10f4*/
            }
            v28 += v56; /*0x4c110a*/
            ++v27; /*0x4c110c*/
          }
          while ( v27 < v22 ); /*0x4c110f*/
        }
      }
    }
  }
  else if ( v64 == v66 ) /*0x4c11bc*/
  {
    v35 = 0; /*0x4c11c6*/
    if ( v65 - v63 >= 0 ) /*0x4c11ca*/
    {
      v36 = v72; /*0x4c11d0*/
      v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
        }
        if ( v71 <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
            v13 = (unsigned short *)((char *)v13 + v37[8]); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
        {
          v13 = (unsigned short *)((char *)v13 - v37[8]); /*0x4c11fd*/
        }
        ++v35; /*0x4c1213*/
        ++v36; /*0x4c1218*/
      }
      while ( v35 <= v65 - v63 ); /*0x4c121d*/
    }
  }
  else if ( v63 == v65 ) /*0x4c123e*/
  {
    if ( v64 <= v66 ) /*0x4c1246*/
      v38 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
    else
      v38 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
        }
        v13 += v71; /*0x4c129a*/
        if ( v71 <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
            v13 = (unsigned short *)((char *)v13 + v42[8]); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
        {
          v13 = (unsigned short *)((char *)v13 - v42[8]); /*0x4c12a4*/
        }
        v40 = (int16_t *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
    v46 = v45; /*0x4c12dc*/
    v59 = v45; /*0x4c12e0*/
    if ( v44 < 0 ) /*0x4c12e4*/
    {
      v46 = -v45; /*0x4c12e6*/
      v59 = -v45; /*0x4c12e8*/
    }
    v47 = abs32(v44); /*0x4c12f1*/
    v57 = 2 * v43; /*0x4c12f8*/
    v74 = 2 * v47; /*0x4c12ff*/
    if ( v43 <= v47 ) /*0x4c1303*/
    {
      v53 = 2 * v43 - v47; /*0x4c1395*/
      if ( v47 > 0 ) /*0x4c1399*/
      {
        v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            v72[v55] = a4; /*0x4c13b5*/
            v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            ++v55; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 = (int16_t *)((char *)v72 + v46); /*0x4c13e5*/
          v13 += v71; /*0x4c13ef*/
          if ( v71 <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
              v13 = (unsigned short *)((char *)v13 + v54[8]); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
          {
            v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13f9*/
          }
          --v60; /*0x4c140b*/
        }
        while ( v60 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
        v51 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            v51[v49] = a4; /*0x4c1329*/
            v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 = (int16_t *)((char *)v51 + v59); /*0x4c133a*/
            v13 += v71; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
              v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( v71 <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
              v13 = (unsigned short *)((char *)v13 + v50[8]); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
          {
            v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c1363*/
          }
          v48 += v74; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/
}
// ============================================================
// IDA: 0x4C0750 -- DSurface::DrawDashedLineStipple (1758B)
// vtable[19] 0x4C — dashed line with Z-buffer stipple gating.
//
// update_z=true  → draw where stipple[idx] && zbuf==0
// update_z=false → draw where stipple[idx] && zbuf!=0
//
// Returns bool (success).  The binary also returns the updated
// dash_offset in EAX but the C++ interface discards it.
// ============================================================
REVERSE(0x4C0750, "DSurface::DrawDashedLineStipple: Dashed line with Z-buffer stipple gating", "None")
// 0x4c0750
bool DSurface::DrawDashedLineStipple(
{
  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  unsigned short *v18; // esi
  unsigned int *v19; // edx
  int v20; // ecx
  unsigned short *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  unsigned int *v26; // edx
  int v27; // ecx
  unsigned short *v28; // edi
  unsigned short *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // esi
  unsigned int *v37; // ecx
  int v38; // edx
  unsigned short *v39; // eax
  int v40; // edx
  int v41; // esi
  unsigned int *v42; // edx
  int v43; // ebx
  unsigned short *v44; // ecx
  int *v45; // eax
  int v46; // ebx
  int v47; // ebx
  unsigned short *v48; // esi
  unsigned int *v49; // edx
  int v50; // ecx
  unsigned short *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  unsigned int *v56; // edx
  int v57; // ecx
  unsigned short *v58; // edi
  unsigned short *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  int v65; // edi
  int v66; // esi
  unsigned int *v67; // ecx
  int v68; // edx
  unsigned short *v69; // eax
  int v70; // edx
  int v71; // esi
  unsigned int *v72; // edx
  unsigned short *v73; // ecx
  int *v74; // eax
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  int v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int *v88; // [esp+38h] [ebp+8h]
  int v89; // [esp+48h] [ebp+18h]
  int v90; // [esp+48h] [ebp+18h]
  int v91; // [esp+48h] [ebp+18h]
  int v92; // [esp+48h] [ebp+18h]
  int v93; // [esp+48h] [ebp+18h]
  int v94; // [esp+48h] [ebp+18h]

  v7 = *a2; /*0x4c075a*/
  v8 = a2[1]; /*0x4c075d*/
  v76 = 1; /*0x4c0768*/
  v9 = *a3; /*0x4c0770*/
  v10 = a3[1]; /*0x4c0772*/
  if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( v7 > v9 ) /*0x4c078d*/
  {
    v12 = v7; /*0x4c078f*/
    v13 = v8; /*0x4c0791*/
    v7 = v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v13; /*0x4c079b*/
    v14 = v9; /*0x4c079d*/
    v9 = v12; /*0x4c079f*/
    v15 = abs32(v14 - v12); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = -1; /*0x4c07d3*/
  }
  v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
          *(int **)&stru_87E790.__pad_D8[60],
          v7,
          v8 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4));
  v87 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c080b*/
  v88 = (int *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = v88; /*0x4c0842*/
          v19 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = (unsigned short *)v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(unsigned char *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0882*/
            }
            if ( v87 <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                v21 = (unsigned short *)((char *)v21 + v19[8]); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
            {
              v21 = (unsigned short *)((char *)v21 - v19[8]); /*0x4c089a*/
            }
            ++v18; /*0x4c08ac*/
            v20 = v76 + v23; /*0x4c08af*/
            --v22; /*0x4c08b1*/
          }
          while ( v22 );
          a6 = v20; /*0x4c08b4*/
        }
        goto LABEL_155; /*0x4c08b8*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c08cb*/
          v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08dd*/
        else
          v24 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = (unsigned short *)v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(unsigned char *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0930*/
            }
            v28 = (unsigned short *)((char *)v28 + v24); /*0x4c0936*/
            v29 += v87; /*0x4c0938*/
            if ( v87 <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                v29 = (unsigned short *)((char *)v29 + v26[8]); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
            {
              v29 = (unsigned short *)((char *)v29 - v26[8]); /*0x4c0944*/
            }
            v27 = v76 + v30; /*0x4c0955*/
            --v89; /*0x4c095c*/
          }
          while ( v89 );
          a6 = v27; /*0x4c0962*/
        }
        goto LABEL_155; /*0x4c0966*/
      }
      v31 = v9 - v7; /*0x4c096f*/
      v32 = v10 - v8; /*0x4c0971*/
      v33 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0975*/
      v79 = v33; /*0x4c097a*/
      if ( v32 < 0 ) /*0x4c097e*/
        v79 = -v33; /*0x4c0982*/
      v85 = 2 * v31; /*0x4c098e*/
      v34 = abs32(v32); /*0x4c0992*/
      v81 = 2 * v34; /*0x4c0999*/
      if ( v31 > v34 )
      {
        v35 = 0; /*0x4c09a5*/
        v36 = 2 * v34 - v31; /*0x4c09a7*/
        v90 = 0; /*0x4c09a9*/
        if ( v31 > 0 )
        {
          v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = (unsigned short *)v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(unsigned char *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *((unsigned short *)v88 + v35) = a4; /*0x4c09eb*/
              v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 = (int *)((char *)v88 + v79); /*0x4c0a08*/
              v39 += v87; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                v39 = (unsigned short *)((char *)v39 - v37[8]); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = v90; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( v87 <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                v39 = (unsigned short *)((char *)v39 + v37[8]); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
            {
              v39 = (unsigned short *)((char *)v39 - v37[8]); /*0x4c0a3a*/
            }
            ++v35; /*0x4c0a50*/
            v38 = v76 + v40; /*0x4c0a51*/
            v90 = v35; /*0x4c0a55*/
          }
          while ( v35 < v31 );
          a6 = v38; /*0x4c0a5f*/
        }
        goto LABEL_155; /*0x4c0a63*/
      }
      v41 = 2 * v31 - v34; /*0x4c0a68*/
      if ( v34 > 0 )
      {
        v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = (unsigned short *)v77; /*0x4c0a7c*/
        v83 = v34; /*0x4c0a84*/
        v45 = v88; /*0x4c0a88*/
        v91 = 0; /*0x4c0a8c*/
        do
        {
          v46 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(unsigned char *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(unsigned short *)((char *)v45 + v91) = a4; /*0x4c0abc*/
            v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            v91 += 2; /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
              v44 = (unsigned short *)((char *)v44 - v42[8]); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += v87; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
          if ( v87 <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
              v44 = (unsigned short *)((char *)v44 + v42[8]); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
          {
            v44 = (unsigned short *)((char *)v44 - v42[8]); /*0x4c0afe*/
          }
          v43 = v76 + v46; /*0x4c0b0f*/
          --v83; /*0x4c0b16*/
        }
        while ( v83 );
  LABEL_154:
        a6 = v43; /*0x4c0e13*/
      }
    }
    else
    {
      if ( v8 == v10 )
      {
        v47 = v9 - v7; /*0x4c0b2d*/
        if ( v47 >= 0 )
        {
          v48 = v88; /*0x4c0b35*/
          v49 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = (unsigned short *)v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(unsigned char *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0b75*/
            }
            if ( v87 <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                v51 = (unsigned short *)((char *)v51 + v49[8]); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
            {
              v51 = (unsigned short *)((char *)v51 - v49[8]); /*0x4c0b8d*/
            }
            ++v48; /*0x4c0b9f*/
            v50 = v76 + v53; /*0x4c0ba2*/
            --v52; /*0x4c0ba4*/
          }
          while ( v52 );
          a6 = v50; /*0x4c0ba7*/
        }
        goto LABEL_155; /*0x4c0bab*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c0bbe*/
          v54 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bd0*/
        else
          v54 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = (unsigned short *)v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(unsigned char *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0c23*/
            }
            v58 = (unsigned short *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += v87; /*0x4c0c2b*/
            if ( v87 <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                v59 = (unsigned short *)((char *)v59 + v56[8]); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
            {
              v59 = (unsigned short *)((char *)v59 - v56[8]); /*0x4c0c37*/
            }
            v57 = v76 + v60; /*0x4c0c48*/
            --v92; /*0x4c0c4f*/
          }
          while ( v92 );
          a6 = v57; /*0x4c0c55*/
        }
        goto LABEL_155; /*0x4c0c59*/
      }
      v61 = v9 - v7; /*0x4c0c62*/
      v62 = v10 - v8; /*0x4c0c64*/
      v63 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0c68*/
      v80 = v63; /*0x4c0c6d*/
      if ( v62 < 0 ) /*0x4c0c71*/
        v80 = -v63; /*0x4c0c75*/
      v86 = 2 * v61; /*0x4c0c81*/
      v64 = abs32(v62); /*0x4c0c85*/
      v84 = 2 * v64; /*0x4c0c8c*/
      if ( v61 > v64 )
      {
        v65 = 0; /*0x4c0c98*/
        v66 = 2 * v64 - v61; /*0x4c0c9a*/
        v93 = 0; /*0x4c0c9c*/
        if ( v61 > 0 )
        {
          v67 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = (unsigned short *)v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(unsigned char *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *((unsigned short *)v88 + v65) = a4; /*0x4c0cde*/
              v67 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 = (int *)((char *)v88 + v80); /*0x4c0cfb*/
              v69 += v87; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                v69 = (unsigned short *)((char *)v69 - v67[8]); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = v93; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( v87 <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                v69 = (unsigned short *)((char *)v69 + v67[8]); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
            {
              v69 = (unsigned short *)((char *)v69 - v67[8]); /*0x4c0d2d*/
            }
            ++v65; /*0x4c0d43*/
            v68 = v76 + v70; /*0x4c0d44*/
            v93 = v65; /*0x4c0d48*/
          }
          while ( v65 < v61 );
          a6 = v68; /*0x4c0d52*/
        }
        goto LABEL_155; /*0x4c0d56*/
      }
      v71 = 2 * v61 - v64; /*0x4c0d5b*/
      if ( v64 > 0 )
      {
        v72 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = (unsigned short *)v77; /*0x4c0d6f*/
        v82 = v64; /*0x4c0d77*/
        v74 = v88; /*0x4c0d7b*/
        v94 = 0; /*0x4c0d7f*/
        do
        {
          v75 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(unsigned char *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(unsigned short *)((char *)v74 + v94) = a4; /*0x4c0daf*/
            v72 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            v94 += 2; /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
              v73 = (unsigned short *)((char *)v73 - v72[8]); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += v87; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
          if ( v87 <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
              v73 = (unsigned short *)((char *)v73 + v72[8]); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
          {
            v73 = (unsigned short *)((char *)v73 - v72[8]); /*0x4c0df1*/
          }
          v43 = v76 + v75; /*0x4c0e02*/
          --v82; /*0x4c0e09*/
        }
        while ( v82 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
  LABEL_155:
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/
}
// ============================================================
// DSurface::DrawLineZBuf — IDA: 0x4BFD30 (2615B)
// vtable[13] 0x34 — Bresenham line with Z-buffer depth check.
// At each pixel: reads Z value from g_ZBufferDescriptor,
// if Z value passes depth test, blends pixel color by Z and writes.
// Fade values provide gradient along the line.
// For standalone build (no Z-buffer), delegates to DrawLineEx.
// ============================================================
REVERSE(0x4BFD30, "DSurface::DrawLineZBuf: Z-buffer line with depth test", "None")
// 0x4bfd30
bool DSurface::DrawLineZBuf(
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(unsigned int *); // eax
  int *v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v14; // edi
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ebp
  int v22; // esi
  int v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ebp
  int v35; // esi
  int v36; // ebx
  int Stream_field_04; // edi
  unsigned short *SamplePosition; // esi
  int v39; // edi
  unsigned short *v40; // edi
  int v41; // ecx
  int v42; // ebx
  int v43; // ebp
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ebp
  int v48; // ebx
  Stream *v49; // edx
  unsigned int *v50; // ebp
  int v51; // eax
  int v52; // edx
  int v53; // eax
  unsigned short *v54; // eax
  unsigned short *v55; // eax
  int v56; // ebx
  Stream *v57; // edx
  unsigned int *v58; // ebp
  int v59; // eax
  int v60; // edx
  unsigned short *v61; // eax
  unsigned short *v62; // eax
  int v63; // eax
  int v64; // ebp
  unsigned int *v65; // edx
  Stream *v66; // ecx
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  unsigned short *v70; // eax
  unsigned short *v71; // eax
  double v72; // [esp+4h] [ebp-7Ch]
  double v73; // [esp+4h] [ebp-7Ch]
  double v74; // [esp+4h] [ebp-7Ch]
  double v75; // [esp+4h] [ebp-7Ch]
  int v76; // [esp+1Ch] [ebp-64h]
  int v77; // [esp+20h] [ebp-60h]
  int v78; // [esp+20h] [ebp-60h]
  int v79; // [esp+20h] [ebp-60h]
  int v80; // [esp+24h] [ebp-5Ch]
  int v81; // [esp+28h] [ebp-58h]
  int v82; // [esp+2Ch] [ebp-54h]
  int v83; // [esp+30h] [ebp-50h]
  int v84; // [esp+30h] [ebp-50h]
  int v85; // [esp+34h] [ebp-4Ch]
  int v86; // [esp+38h] [ebp-48h]
  double v87; // [esp+3Ch] [ebp-44h] BYREF
  unsigned int v88[5]; // [esp+4Ch] [ebp-34h] BYREF
  int v89; // [esp+60h] [ebp-20h] BYREF
  int v90; // [esp+64h] [ebp-1Ch]
  int v91[2]; // [esp+68h] [ebp-18h] BYREF
  int v92; // [esp+70h] [ebp-10h] BYREF
  int v93; // [esp+74h] [ebp-Ch]
  int v94; // [esp+78h] [ebp-8h]
  int v95; // [esp+7Ch] [ebp-4h]
  int v96; // [esp+84h] [ebp+4h]
  unsigned int *v97; // [esp+88h] [ebp+8h]
  int v98; // [esp+88h] [ebp+8h]
  int v99; // [esp+8Ch] [ebp+Ch]
  unsigned int *v100; // [esp+8Ch] [ebp+Ch]
  unsigned int *v101; // [esp+8Ch] [ebp+Ch]
  int v102; // [esp+94h] [ebp+14h]
  int v103; // [esp+94h] [ebp+14h]
  int v104; // [esp+94h] [ebp+14h]
  int v105; // [esp+94h] [ebp+14h]
  int v106; // [esp+98h] [ebp+18h]
  int v107; // [esp+98h] [ebp+18h]
  int v108; // [esp+98h] [ebp+18h]
  int v109; // [esp+98h] [ebp+18h]
  int v110; // [esp+98h] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(unsigned int *))this->DSurface_field_0x0; /*0x4bfd33*/
  v88[0] = this; /*0x4bfd3e*/
  v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
  v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
  v13 = *v12; /*0x4bfd59*/
  v92 = *v12; /*0x4bfd5b*/
  v14 = v12[1]; /*0x4bfd5f*/
  v93 = v14; /*0x4bfd62*/
  result = v12[2]; /*0x4bfd66*/
  v94 = result; /*0x4bfd69*/
  v16 = v12[3]; /*0x4bfd6d*/
  v95 = v16; /*0x4bfd72*/
  if ( !result && !v16 ) /*0x4bfd7a*/
    goto LABEL_121; /*0x4bfd7a*/
  v17 = v13 + *a4; /*0x4bfd92*/
  v18 = v13 + *a5; /*0x4bfd94*/
  v19 = a7; /*0x4bfd99*/
  v20 = v14 + a4[1]; /*0x4bfda0*/
  v21 = v17; /*0x4bfda2*/
  v22 = v14 + a5[1]; /*0x4bfda4*/
  v23 = a8; /*0x4bfda6*/
  v89 = v17; /*0x4bfdaf*/
  v90 = v20; /*0x4bfdb3*/
  v91[0] = v18; /*0x4bfdb7*/
  v91[1] = v22; /*0x4bfdbb*/
  if ( v17 > v18 ) /*0x4bfdbf*/
  {
    v21 = v18; /*0x4bfdc1*/
    v19 = a8; /*0x4bfdc3*/
    v23 = a7; /*0x4bfdc5*/
    v89 = v18; /*0x4bfdcc*/
    v90 = v22; /*0x4bfdd0*/
    v91[0] = v17; /*0x4bfdd4*/
    v91[1] = v20; /*0x4bfdd8*/
  }
  v88[1] = v91[0]; /*0x4bfde8*/
  v24 = v21; /*0x4bfded*/
  v25 = v90; /*0x4bfdef*/
  v88[2] = v91[1]; /*0x4bfdfb*/
  result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
  if ( !(unsigned char)result ) /*0x4bfe06*/
    goto LABEL_121; /*0x4bfe06*/
  v97 = (unsigned int *)v23; /*0x4bfe1a*/
  v106 = v19; /*0x4bfe1e*/
  if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
  {
    IDA_LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
    IDA_HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
    __asm /*0x4bfe48*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v72); /*0x4bfe5d*/
    IDA_LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
    v102 = v26; /*0x4bfe6d*/
    IDA_LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
    IDA_HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
    __asm /*0x4bfe8a*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_10]
      fstp [esp+7Ch+var_48+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v73); /*0x4bfeaa*/
    IDA_LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
    v103 = v27; /*0x4bfeb7*/
    __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
    v104 = v19 - v23; /*0x4bfec9*/
    __asm /*0x4bfed0*/
    {
      fdivr [esp+74h+var_48+4]
      fild [esp+74h+arg_10]
      fmulp st(1), st
    }
    IDA_LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
    v29 = abs32(v28); /*0x4bfee5*/
    if ( v19 >= v23 ) /*0x4bfee9*/
      v97 = (unsigned int *)(v19 - v29); /*0x4bfef7*/
    else
      v97 = (unsigned int *)(v19 + v29); /*0x4bfeed*/
  }
  if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
    goto LABEL_16; /*0x4bff09*/
  IDA_LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
  IDA_HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
  __asm /*0x4bff2a*/
  {
    fild [esp+7Ch+var_40]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v74); /*0x4bff3f*/
  IDA_LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
  v107 = v30; /*0x4bff49*/
  IDA_LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
  IDA_HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
  __asm /*0x4bff68*/
  {
    fild [esp+7Ch+var_40]
    fild [esp+7Ch+arg_14]
    fstp qword ptr [esp+7Ch+var_34+4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v75); /*0x4bff88*/
  IDA_LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
  v108 = v31; /*0x4bff95*/
  __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
  v109 = v19 - v23; /*0x4bffa7*/
  __asm /*0x4bffae*/
  {
    fdivr qword ptr [esp+74h+var_34+4]
    fild [esp+74h+arg_14]
    fmulp st(1), st
  }
  IDA_LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
  v33 = abs32(v32); /*0x4bffc3*/
  if ( v23 <= v19 ) /*0x4bffc7*/
  {
    v106 = v23 + v33; /*0x4bffd1*/
  LABEL_16:
    v34 = v106; /*0x4bffd8*/
    goto LABEL_17; /*0x4bffd8*/
  }
  v34 = v23 - v33; /*0x4bffcb*/
  LABEL_17:
  v35 = v88[0]; /*0x4bffdf*/
  (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
  result = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
  v36 = result; /*0x4c0001*/
  v105 = result; /*0x4c0005*/
  if ( !g_ZBufferDescriptor ) /*0x4c000c*/
    goto LABEL_121; /*0x4c000c*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
  v88[2] = v90; /*0x4c001d*/
  SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v89, v90 - Stream_field_04); /*0x4c0034*/
  v39 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
  v88[2] = v90; /*0x4c003d*/
  v40 = (unsigned short *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v89, v90 - v39); /*0x4c004e*/
  v82 = -1; /*0x4c0055*/
  IDA_LOWORD(v41) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
  result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
  v96 = result; /*0x4c0068*/
  v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
  if ( !v36 ) /*0x4c007d*/
  {
  LABEL_121:
    IDA_LOBYTE(result) = 0; /*0x4c073b*/
    return result; /*0x4c073e*/
  }
  IDA_LOBYTE(v88[1]) = (uint8_t)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
  IDA_BYTE1(v88[1]) = (uint8_t)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
  v42 = v91[1] - v90; /*0x4c00ce*/
  IDA_BYTE2(v88[1]) = (uint8_t)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
  v85 = IDA_LOBYTE(v88[1]); /*0x4c00e3*/
  v86 = IDA_BYTE1(v88[1]); /*0x4c00f0*/
  IDA_LODWORD(v87) = IDA_BYTE2(v88[1]); /*0x4c00fd*/
  v99 = v91[0] - v89; /*0x4c010b*/
  v43 = (int)v97 - v34; /*0x4c011a*/
  v44 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 116))(v88[0]); /*0x4c011c*/
  v81 = v44; /*0x4c0121*/
  if ( v42 < 0 ) /*0x4c0125*/
  {
    v81 = -v44; /*0x4c0129*/
    v96 = -v96; /*0x4c0133*/
    v82 = 1; /*0x4c0137*/
  }
  v80 = 1; /*0x4c0141*/
  v45 = abs32(v42); /*0x4c014e*/
  if ( v43 < 0 ) /*0x4c0152*/
    v80 = -1; /*0x4c0154*/
  v98 = 2 * v45; /*0x4c0164*/
  v46 = abs32(v43); /*0x4c0168*/
  v47 = 2 * v99; /*0x4c0173*/
  v83 = 2 * v99; /*0x4c0179*/
  v76 = 2 * v46; /*0x4c017d*/
  if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
  {
    if ( v99 <= v45 ) /*0x4c0375*/
    {
      v64 = v47 - v45; /*0x4c0559*/
      v88[1] = 2 * v46 - v45; /*0x4c055f*/
      if ( v45 > 0 ) /*0x4c0563*/
      {
        v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
        v79 = v45; /*0x4c056f*/
        v66 = g_ZBufferDescriptor; /*0x4c0573*/
        v101 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v67 = v110; /*0x4c0584*/
          v68 = (uint16_t)*v40; /*0x4c0590*/
          if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
          {
            if ( v68 == 127 ) /*0x4c05a4*/
            {
              *(unsigned short *)((char *)v101 + v105) = a6; /*0x4c0627*/
            }
            else
            {
              v67 = v110; /*0x4c05f2*/
              *(unsigned short *)((char *)v101 + v105) = ((IDA_LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                              | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                              | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            }
            if ( a9 ) /*0x4c0634*/
              *SamplePosition = v67; /*0x4c0636*/
            v66 = g_ZBufferDescriptor; /*0x4c0639*/
            v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
          }
          if ( v64 > 0 ) /*0x4c0647*/
          {
            ++SamplePosition; /*0x4c0650*/
            v101 = (unsigned int *)((char *)v101 + 2); /*0x4c0656*/
            if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
            if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
              v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0671*/
            v64 -= v98; /*0x4c0674*/
          }
          v69 = v88[1]; /*0x4c0678*/
          if ( v88[1] > 0 ) /*0x4c067e*/
          {
            v110 = v80 + v67; /*0x4c0684*/
            v69 = v88[1] - v98; /*0x4c068f*/
          }
          v64 += v83; /*0x4c0695*/
          v88[1] = v76 + v69; /*0x4c06a4*/
          v105 += v81; /*0x4c06ae*/
          SamplePosition += v96; /*0x4c06bc*/
          if ( v96 <= 0 ) /*0x4c06c0*/
          {
            v70 = SamplePosition; /*0x4c06cf*/
            if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
              v70 = (unsigned short *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
            SamplePosition = v70; /*0x4c06da*/
          }
          else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
          }
          v110 += v82; /*0x4c06e9*/
          v40 += v96; /*0x4c06f7*/
          if ( v96 <= 0 ) /*0x4c06fb*/
          {
            v71 = v40; /*0x4c070a*/
            if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
              v71 = (unsigned short *)((char *)v40 + v65[8]); /*0x4c0713*/
            v40 = v71; /*0x4c0715*/
          }
          else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
          {
            v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0702*/
          }
          --v79; /*0x4c071c*/
        }
        while ( v79 ); /*0x4c0720*/
      }
    }
    else
    {
      v56 = v98 - v99; /*0x4c038a*/
      v78 = 0; /*0x4c038e*/
      v84 = v76 - v99; /*0x4c0398*/
      if ( v99 > 0 ) /*0x4c039c*/
      {
        v57 = g_ZBufferDescriptor; /*0x4c03a2*/
        v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v59 = (uint16_t)*v40; /*0x4c03bb*/
          if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
          {
            if ( v59 == 127 ) /*0x4c03cf*/
              IDA_LOWORD(v60) = a6; /*0x4c0423*/
            else
              v60 = ((IDA_LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                  | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(unsigned short *)(v105 + 2 * v78) = v60; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *SamplePosition = v110; /*0x4c044d*/
            v57 = g_ZBufferDescriptor; /*0x4c0450*/
            v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
          }
          if ( v56 > 0 ) /*0x4c045e*/
          {
            v105 += v81; /*0x4c046d*/
            v56 -= 2 * v99; /*0x4c047e*/
            SamplePosition += v96; /*0x4c0487*/
            if ( v96 <= 0 ) /*0x4c048b*/
            {
              v61 = SamplePosition; /*0x4c049a*/
              if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                v61 = (unsigned short *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
              SamplePosition = v61; /*0x4c04a3*/
            }
            else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
            }
            v40 += v96; /*0x4c04a9*/
            v110 += v82; /*0x4c04ab*/
            if ( v96 <= 0 ) /*0x4c04b8*/
            {
              v62 = v40; /*0x4c04c7*/
              if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                v62 = (unsigned short *)((char *)v40 + v58[8]); /*0x4c04d0*/
              v40 = v62; /*0x4c04d2*/
            }
            else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
            {
              v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c04bf*/
            }
          }
          v63 = v84; /*0x4c04d4*/
          if ( v84 > 0 ) /*0x4c04da*/
          {
            v110 += v80; /*0x4c04e9*/
            v63 = v84 - 2 * v99; /*0x4c04fe*/
          }
          ++SamplePosition; /*0x4c0504*/
          v56 += v98; /*0x4c0507*/
          v84 = v76 + v63; /*0x4c050f*/
          if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
          if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
            v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c0527*/
          ++v78; /*0x4c0538*/
        }
        while ( v78 < v99 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v48 = v98 - v46; /*0x4c0195*/
    v77 = v47 - v46; /*0x4c019b*/
    if ( v46 > 0 ) /*0x4c019f*/
    {
      v49 = g_ZBufferDescriptor; /*0x4c01a5*/
      v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
      v100 = 0; /*0x4c01b1*/
      v88[1] = v46; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v51 = (uint16_t)*v40; /*0x4c01cd*/
        if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
        {
          if ( v51 == 127 ) /*0x4c01e1*/
            IDA_LOWORD(v52) = a6; /*0x4c0235*/
          else
            v52 = ((IDA_LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
          *(unsigned short *)((char *)v100 + v105) = v52; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *SamplePosition = v110; /*0x4c0262*/
          v49 = g_ZBufferDescriptor; /*0x4c0265*/
          v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
        }
        if ( v48 > 0 ) /*0x4c0273*/
        {
          v48 -= v76; /*0x4c0286*/
          v53 = v96; /*0x4c0288*/
          v105 += v81; /*0x4c028c*/
          SamplePosition += v96; /*0x4c0296*/
          if ( v96 <= 0 ) /*0x4c029a*/
          {
            v54 = SamplePosition; /*0x4c02a9*/
            if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
              v54 = (unsigned short *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
            SamplePosition = v54; /*0x4c02b2*/
            v53 = v96; /*0x4c02b4*/
          }
          else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
          }
          v40 += v96; /*0x4c02b8*/
          if ( v53 <= 0 ) /*0x4c02bc*/
          {
            v55 = v40; /*0x4c02cb*/
            if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
              v55 = (unsigned short *)((char *)v40 + v50[8]); /*0x4c02d4*/
            v40 = v55; /*0x4c02d6*/
          }
          else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
          {
            v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c02c3*/
          }
          v110 += v82; /*0x4c02e5*/
        }
        if ( v77 > 0 ) /*0x4c02f2*/
        {
          ++SamplePosition; /*0x4c02fb*/
          v100 = (unsigned int *)((char *)v100 + 2); /*0x4c0301*/
          if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
          if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
            v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c031c*/
          v77 -= v76; /*0x4c0323*/
        }
        v110 += v80; /*0x4c0338*/
        v77 += v83; /*0x4c0349*/
        v48 += v98; /*0x4c0351*/
        --v88[1]; /*0x4c0354*/
      }
      while ( v88[1] ); /*0x4c0358*/
    }
  }
  result = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v88[0] + 96))(v88[0]); /*0x4c0364*/
  IDA_LOBYTE(result) = 1; /*0x4c036a*/
  return result; /*0x4c0367*/
}
// ============================================================
// DSurface::DrawLineModulated — IDA: 0x4BBCA0 (2735B)
// vtable[14] 0x38 — Read-modify-write Bresenham line.
// At each pixel: reads dest pixel, decomposes into RGB channels,
// applies modulation (blend toward brighter color), clamps to 255,
// repacks and writes back. Has Z-buffer depth test.
// For standalone build (no Z-buffer), delegates to DrawLineEx.
// ============================================================
REVERSE(0x4BBCA0, "DSurface::DrawLineModulated: Read-modify-write line with modulation", "None")
// 0x4bbca0
bool DSurface::DrawLineModulated(
{
  double v9; // st7
  int (__stdcall **DSurface_field_0x0)(unsigned int *); // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int Stream_field_04; // ebp
  int v36; // ecx
  int v37; // ebp
  int v38; // esi
  int v39; // edi
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // edx
  int v46; // ebp
  Stream *v47; // esi
  uint16_t v48; // ax
  int v49; // edx
  int v50; // eax
  int v51; // esi
  int v52; // edi
  unsigned short *v53; // eax
  int v54; // edx
  unsigned short *v55; // ecx
  int v56; // ecx
  unsigned short *v57; // eax
  bool v58; // zf
  Stream *v60; // edx
  uint16_t v61; // ax
  int v62; // edx
  int v63; // eax
  int v64; // esi
  int v65; // esi
  unsigned short *v66; // eax
  unsigned short *v67; // ecx
  int v68; // ecx
  unsigned short *v69; // eax
  Stream *v70; // esi
  uint16_t v71; // ax
  int v72; // edx
  int v73; // eax
  int v74; // esi
  int v75; // edx
  unsigned short *v76; // eax
  int v77; // ecx
  int v78; // edi
  unsigned short *v79; // eax
  unsigned short *v80; // ecx
  double v81; // [esp+4h] [ebp-80h]
  double v82; // [esp+4h] [ebp-80h]
  int v83; // [esp+1Ch] [ebp-68h]
  int v84; // [esp+20h] [ebp-64h]
  int v85; // [esp+24h] [ebp-60h]
  int v86; // [esp+28h] [ebp-5Ch]
  int v87; // [esp+2Ch] [ebp-58h]
  int v88; // [esp+30h] [ebp-54h]
  int v89; // [esp+34h] [ebp-50h]
  int v90; // [esp+34h] [ebp-50h]
  int v91; // [esp+34h] [ebp-50h]
  int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v93; // [esp+40h] [ebp-44h] BYREF
  int v94; // [esp+44h] [ebp-40h]
  unsigned int v95[5]; // [esp+50h] [ebp-34h] BYREF
  int v96; // [esp+64h] [ebp-20h] BYREF
  int v97; // [esp+68h] [ebp-1Ch]
  int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v99; // [esp+74h] [ebp-10h] BYREF
  int v100; // [esp+78h] [ebp-Ch]
  int v101; // [esp+7Ch] [ebp-8h]
  int v102; // [esp+80h] [ebp-4h]
  int v103; // [esp+88h] [ebp+4h]
  int v104; // [esp+88h] [ebp+4h]
  int pad_0; // [esp+8Ch] [ebp+8h]
  unsigned int *v106; // [esp+90h] [ebp+Ch]
  unsigned int *v107; // [esp+90h] [ebp+Ch]
  int v108; // [esp+90h] [ebp+Ch]
  unsigned int *v109; // [esp+90h] [ebp+Ch]
  int v110; // [esp+98h] [ebp+14h]
  int v111; // [esp+98h] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+18h]
  int v113; // [esp+9Ch] [ebp+18h]
  int v114; // [esp+9Ch] [ebp+18h]
  int v115; // [esp+9Ch] [ebp+18h]
  int v116; // [esp+9Ch] [ebp+18h]
  unsigned short *SamplePosition; // [esp+9Ch] [ebp+18h]

  DSurface_field_0x0 = (int (__stdcall **)(unsigned int *))this->DSurface_field_0x0; /*0x4bbca3*/
  v95[0] = this; /*0x4bbcae*/
  v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
  v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
  v13 = *v12; /*0x4bbcc9*/
  v99 = *v12; /*0x4bbccb*/
  v14 = v12[1]; /*0x4bbccf*/
  v100 = v14; /*0x4bbcd2*/
  v101 = v12[2]; /*0x4bbcd9*/
  v15 = v12[3]; /*0x4bbcdd*/
  v102 = v15; /*0x4bbce2*/
  if ( v101 || v15 ) /*0x4bbcea*/
  {
    v16 = v13 + *a4; /*0x4bbd08*/
    v17 = v13 + *a5; /*0x4bbd0a*/
    v18 = a8; /*0x4bbd0c*/
    v19 = v14 + a4[1]; /*0x4bbd13*/
    v20 = v16; /*0x4bbd15*/
    v21 = v14 + a5[1]; /*0x4bbd17*/
    v22 = a7; /*0x4bbd19*/
    v96 = v16; /*0x4bbd22*/
    v97 = v19; /*0x4bbd26*/
    v98[0] = v17; /*0x4bbd2a*/
    v98[1] = v21; /*0x4bbd2e*/
    if ( v16 > v17 ) /*0x4bbd32*/
    {
      v20 = v17; /*0x4bbd34*/
      v22 = a8; /*0x4bbd36*/
      v18 = a7; /*0x4bbd38*/
      v96 = v17; /*0x4bbd3f*/
      v97 = v21; /*0x4bbd43*/
      v98[0] = v16; /*0x4bbd47*/
      v98[1] = v19; /*0x4bbd4b*/
    }
    v95[1] = v98[0]; /*0x4bbd5b*/
    v23 = v20; /*0x4bbd60*/
    v24 = v97; /*0x4bbd62*/
    v95[2] = v98[1]; /*0x4bbd6e*/
    if ( (uint8_t)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
    {
      v106 = (unsigned int *)v18; /*0x4bbd8d*/
      v110 = v22; /*0x4bbd94*/
      if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
      {
        v92[0] = v23 - v98[0]; /*0x4bbdb3*/
        v92[1] = v24 - v98[1]; /*0x4bbdb7*/
        v93 = v23 - v95[1]; /*0x4bbdc7*/
        v94 = v24 - v95[2]; /*0x4bbdcb*/
        Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
        v103 = v25; /*0x4bbddc*/
        v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
        v112 = v26; /*0x4bbde5*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
        v113 = v22 - v18; /*0x4bbdf7*/
        __asm /*0x4bbdfe*/
        {
          fidiv [esp+78h+arg_0]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        IDA_LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
        v28 = abs32(v27); /*0x4bbe13*/
        if ( v22 >= v18 ) /*0x4bbe17*/
          v106 = (unsigned int *)(v22 - v28); /*0x4bbe28*/
        else
          v106 = (unsigned int *)(v22 + v28); /*0x4bbe1b*/
      }
      if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
      {
        v93 = v96 - v95[1]; /*0x4bbe52*/
        v94 = v97 - v95[2]; /*0x4bbe56*/
        __asm /*0x4bbe5a*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v81); /*0x4bbe73*/
        IDA_LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
        v114 = v29; /*0x4bbe81*/
        v93 = v23 - v95[1]; /*0x4bbe90*/
        v94 = v24 - v95[2]; /*0x4bbe94*/
        __asm /*0x4bbe98*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fild [esp+80h+arg_14]
          fstp qword ptr [esp+50h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v82); /*0x4bbebc*/
        IDA_LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
        v115 = v30; /*0x4bbec9*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
        v116 = v22 - v18; /*0x4bbedb*/
        __asm /*0x4bbee2*/
        {
          fdivr qword ptr [esp+48h]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        IDA_LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
        v32 = abs32(v31); /*0x4bbef7*/
        if ( v18 <= v22 ) /*0x4bbefb*/
          v110 = v18 + v32; /*0x4bbf0a*/
        else
          v110 = v18 - v32; /*0x4bbeff*/
      }
      v33 = v95[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
      v34 = (*(int (__thiscall **)(int, int, int))(*(unsigned int *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
      v104 = v34; /*0x4bbf37*/
      if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
      {
        Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
        v95[2] = v97; /*0x4bbf4c*/
        SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v96, v97 - Stream_field_04); /*0x4bbf5d*/
        v88 = -1; /*0x4bbf6d*/
        IDA_LOWORD(v36) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
        v37 = v110; /*0x4bbf8b*/
        v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
        if ( v34 ) /*0x4bbf9d*/
        {
          v38 = v98[1] - v97; /*0x4bbfb6*/
          v39 = v98[0] - v96; /*0x4bbfba*/
          v89 = v98[0] - v96; /*0x4bbfc0*/
          v40 = (int)v106 - v37; /*0x4bbfc4*/
          v41 = (*(int (__thiscall **)(int))(*(unsigned int *)v33 + 116))(v33); /*0x4bbfc6*/
          v87 = v41; /*0x4bbfcb*/
          if ( v38 < 0 ) /*0x4bbfcf*/
          {
            v87 = -v41; /*0x4bbfd3*/
            pad_0 = -pad_0; /*0x4bbfe0*/
            v88 = 1; /*0x4bbfe7*/
          }
          v83 = 1; /*0x4bbff6*/
          v42 = abs32(v38); /*0x4bc000*/
          if ( v40 < 0 ) /*0x4bc004*/
            v83 = -1; /*0x4bc006*/
          v43 = 2 * v42; /*0x4bc010*/
          v84 = 2 * v42; /*0x4bc016*/
          v44 = abs32(v40); /*0x4bc01a*/
          v45 = 2 * v39; /*0x4bc01c*/
          v85 = 2 * v39; /*0x4bc021*/
          v46 = 2 * v44; /*0x4bc025*/
          v86 = 2 * v44; /*0x4bc028*/
          if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
          {
            v92[0] = v43 - v44; /*0x4bc03e*/
            v90 = v45 - v44; /*0x4bc048*/
            if ( v44 > 0 ) /*0x4bc04c*/
            {
              v47 = g_ZBufferDescriptor; /*0x4bc052*/
              v107 = 0; /*0x4bc058*/
              v93 = v44; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc075*/
                {
                  v48 = *(unsigned short *)((char *)v107 + v104); /*0x4bc092*/
                  IDA_LOBYTE(v95[1]) = (uint8_t)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                  IDA_BYTE1(v95[1]) = (uint8_t)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                  IDA_BYTE2(v95[1]) = (uint8_t)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                  v49 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc0f7*/
                  v50 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc11e*/
                  if ( v50 > 255 ) /*0x4bc125*/
                    v50 = 255; /*0x4bc127*/
                  v51 = 255; /*0x4bc132*/
                  if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                    v51 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc139*/
                  if ( v49 > 255 ) /*0x4bc141*/
                    v49 = 255; /*0x4bc143*/
                  *(unsigned short *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                  | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc188*/
                    *SamplePosition = v111; /*0x4bc199*/
                  v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                }
                v52 = v92[0]; /*0x4bc1a2*/
                if ( v92[0] <= 0 ) /*0x4bc1a8*/
                {
                  v54 = v111; /*0x4bc213*/
                }
                else
                {
                  v52 = v92[0] - v86; /*0x4bc1c6*/
                  v104 += v87; /*0x4bc1c8*/
                  v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                  if ( pad_0 <= 0 ) /*0x4bc1d1*/
                  {
                    v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                    if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                      v55 = (unsigned short *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                    SamplePosition = v55; /*0x4bc208*/
                    v54 = v88 + v111; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                      v53 = (unsigned short *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                    SamplePosition = v53; /*0x4bc1e2*/
                    v54 = v88 + v111; /*0x4bc1e9*/
                  }
                }
                v56 = v90; /*0x4bc21a*/
                if ( v90 > 0 ) /*0x4bc220*/
                {
                  v57 = SamplePosition + 1; /*0x4bc233*/
                  v107 = (unsigned int *)((char *)v107 + 2); /*0x4bc23b*/
                  if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                    v57 = (unsigned short *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                  SamplePosition = v57; /*0x4bc247*/
                  v56 = v90 - v86; /*0x4bc252*/
                }
                v111 = v83 + v54; /*0x4bc25e*/
                v90 = v85 + v56; /*0x4bc26b*/
                v58 = v93 == 1; /*0x4bc275*/
                v92[0] = v84 + v52; /*0x4bc276*/
                --v93; /*0x4bc27a*/
              }
              while ( !v58 ); /*0x4bc27e*/
            }
            goto LABEL_50; /*0x4bc27e*/
          }
          if ( v39 <= v42 ) /*0x4bc29b*/
          {
            v93 = v45 - v42; /*0x4bc501*/
            v92[0] = v46 - v42; /*0x4bc50b*/
            if ( v42 > 0 ) /*0x4bc50f*/
            {
              v70 = g_ZBufferDescriptor; /*0x4bc515*/
              v109 = 0; /*0x4bc51b*/
              v91 = v42; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc538*/
                {
                  v71 = *(unsigned short *)((char *)v109 + v104); /*0x4bc555*/
                  IDA_LOBYTE(v95[1]) = (uint8_t)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                  IDA_BYTE1(v95[1]) = (uint8_t)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                  IDA_BYTE2(v95[1]) = (uint8_t)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                  v72 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc5ba*/
                  v73 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc5e1*/
                  if ( v73 > 255 ) /*0x4bc5e8*/
                    v73 = 255; /*0x4bc5ea*/
                  v74 = 255; /*0x4bc5f5*/
                  if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                    v74 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc5fc*/
                  if ( v72 > 255 ) /*0x4bc604*/
                    v72 = 255; /*0x4bc606*/
                  *(unsigned short *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                  | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc64b*/
                    *SamplePosition = v111; /*0x4bc65c*/
                  v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                }
                v75 = v93; /*0x4bc665*/
                if ( v93 <= 0 ) /*0x4bc66b*/
                {
                  v76 = SamplePosition; /*0x4bc698*/
                }
                else
                {
                  v76 = SamplePosition + 1; /*0x4bc67e*/
                  v109 = (unsigned int *)((char *)v109 + 2); /*0x4bc686*/
                  if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                    v76 = (unsigned short *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                  v75 = v93 - v84; /*0x4bc692*/
                }
                v77 = v92[0]; /*0x4bc69f*/
                v78 = v111; /*0x4bc6a3*/
                if ( v92[0] > 0 ) /*0x4bc6ac*/
                {
                  v78 = v83 + v111; /*0x4bc6b6*/
                  v77 = v92[0] - v84; /*0x4bc6b8*/
                }
                v93 = v85 + v75; /*0x4bc6c4*/
                v92[0] = v86 + v77; /*0x4bc6d5*/
                v79 = &v76[pad_0]; /*0x4bc6e2*/
                v104 += v87; /*0x4bc6e4*/
                if ( pad_0 <= 0 ) /*0x4bc6ea*/
                {
                  v80 = v79; /*0x4bc700*/
                  if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                    v80 = (unsigned short *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                  SamplePosition = v80; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                    v79 = (unsigned short *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                  SamplePosition = v79; /*0x4bc6f4*/
                }
                v58 = v91 == 1; /*0x4bc71c*/
                v111 = v88 + v78; /*0x4bc71d*/
                --v91; /*0x4bc724*/
              }
              while ( !v58 ); /*0x4bc728*/
            }
            goto LABEL_50; /*0x4bc728*/
          }
          v108 = 0; /*0x4bc2a3*/
          v93 = v43 - v39; /*0x4bc2ac*/
          v92[0] = v46 - v39; /*0x4bc2b6*/
          if ( v39 <= 0 ) /*0x4bc2ba*/
          {
  LABEL_50:
            (*(void (__thiscall **)(unsigned int))(*(unsigned int *)v95[0] + 96))(v95[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc2d8*/
            {
              v61 = *(unsigned short *)(v104 + 2 * v108); /*0x4bc2f5*/
              IDA_LOBYTE(v95[1]) = (uint8_t)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
              IDA_BYTE1(v95[1]) = (uint8_t)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
              IDA_BYTE2(v95[1]) = (uint8_t)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
              v62 = ((a6 * IDA_LOBYTE(v95[1])) >> 8) + IDA_LOBYTE(v95[1]); /*0x4bc35a*/
              v63 = ((a6 * IDA_BYTE2(v95[1])) >> 8) + IDA_BYTE2(v95[1]); /*0x4bc381*/
              if ( v63 > 255 ) /*0x4bc388*/
                v63 = 255; /*0x4bc38a*/
              v64 = 255; /*0x4bc395*/
              if ( ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                v64 = ((a6 * IDA_BYTE1(v95[1])) >> 8) + IDA_BYTE1(v95[1]); /*0x4bc39c*/
              if ( v62 > 255 ) /*0x4bc3a4*/
                v62 = 255; /*0x4bc3a6*/
              *(unsigned short *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                          | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                          | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
              if ( a9 ) /*0x4bc3eb*/
                *SamplePosition = v111; /*0x4bc3fc*/
              v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
            }
            v65 = v93; /*0x4bc405*/
            if ( v93 <= 0 ) /*0x4bc40b*/
            {
              v66 = SamplePosition; /*0x4bc47c*/
              goto LABEL_73; /*0x4bc47c*/
            }
            v65 = v93 - v85; /*0x4bc429*/
            v104 += v87; /*0x4bc42b*/
            v66 = &SamplePosition[pad_0]; /*0x4bc431*/
            if ( pad_0 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
              goto LABEL_71; /*0x4bc439*/
            v66 = (unsigned short *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
            v111 += v88; /*0x4bc44d*/
  LABEL_73:
            v68 = v92[0]; /*0x4bc483*/
            if ( v92[0] > 0 ) /*0x4bc489*/
            {
              v111 += v83; /*0x4bc49c*/
              v68 = v92[0] - v85; /*0x4bc4a3*/
            }
            v69 = v66 + 1; /*0x4bc4a9*/
            v93 = v84 + v65; /*0x4bc4ae*/
            v92[0] = v86 + v68; /*0x4bc4b8*/
            if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
              v69 = (unsigned short *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
            SamplePosition = v69; /*0x4bc4ca*/
            if ( ++v108 >= v89 ) /*0x4bc4e2*/
              goto LABEL_50; /*0x4bc4e2*/
          }
          v67 = &SamplePosition[pad_0]; /*0x4bc459*/
          if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
            v67 = (unsigned short *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
          v66 = v67; /*0x4bc464*/
  LABEL_71:
          v111 += v88; /*0x4bc466*/
          goto LABEL_73; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/
}
// ============================================================
// DSurface::DrawLineZBufColored — IDA: 0x4BDF00 (2754B)
// vtable[16] 0x40 — Z-buffer line with RGB source color scaled
// by float brightness parameter, blended per pixel by Z value.
// For standalone build (no Z-buffer), delegates to DrawLineEx.
// ============================================================
REVERSE(0x4BDF00, "DSurface::DrawLineZBufColored: Z-buffer line with RGB color + brightness", "None")
// 0x4bdf00
bool DSurface::DrawLineZBufColored(
{
  double v8; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ebx
  int Stream_field_04; // edi
  unsigned short *SamplePosition; // esi
  int v41; // edi
  uint16_t *v42; // ebp
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ecx
  Stream *v50; // ebx
  int v51; // edx
  uint16_t v52; // di
  int16_t v53; // ax
  unsigned short *v54; // eax
  uint16_t *v55; // eax
  bool v56; // zf
  int v58; // edi
  Stream *v59; // ebx
  int v60; // edx
  uint16_t v61; // di
  int16_t v62; // ax
  unsigned short *v63; // eax
  uint16_t *v64; // eax
  int v65; // eax
  unsigned int Stream_field_08; // eax
  int v67; // edi
  int v68; // ebx
  Stream *v69; // ecx
  int v70; // edx
  uint16_t v71; // di
  int16_t v72; // ax
  unsigned short *v73; // eax
  uint16_t *v74; // eax
  double v75; // [esp+4h] [ebp-84h]
  double v76; // [esp+4h] [ebp-84h]
  double v77; // [esp+4h] [ebp-84h]
  double v78; // [esp+4h] [ebp-84h]
  int v79; // [esp+1Ch] [ebp-6Ch]
  int v80; // [esp+20h] [ebp-68h]
  int v81; // [esp+24h] [ebp-64h]
  int v82; // [esp+24h] [ebp-64h]
  int v83; // [esp+24h] [ebp-64h]
  int v84; // [esp+28h] [ebp-60h]
  int v85; // [esp+2Ch] [ebp-5Ch]
  int v86; // [esp+30h] [ebp-58h]
  int v87; // [esp+30h] [ebp-58h]
  int v88; // [esp+30h] [ebp-58h]
  int v89; // [esp+34h] [ebp-54h]
  int v90; // [esp+38h] [ebp-50h]
  int v91; // [esp+3Ch] [ebp-4Ch]
  unsigned char v93[12]; // [esp+44h] [ebp-44h] BYREF
  unsigned int v94[5]; // [esp+54h] [ebp-34h] BYREF
  int v95; // [esp+68h] [ebp-20h] BYREF
  int v96; // [esp+6Ch] [ebp-1Ch]
  int v97[2]; // [esp+70h] [ebp-18h] BYREF
  int v98; // [esp+78h] [ebp-10h] BYREF
  int v99; // [esp+7Ch] [ebp-Ch]
  int v100; // [esp+80h] [ebp-8h]
  int v101; // [esp+84h] [ebp-4h]
  int pad_0; // [esp+8Ch] [ebp+4h]
  int v103; // [esp+90h] [ebp+8h]
  int v104; // [esp+94h] [ebp+Ch]
  uint8_t *v105; // [esp+98h] [ebp+10h]
  uint8_t *v106; // [esp+98h] [ebp+10h]
  uint8_t *v107; // [esp+98h] [ebp+10h]
  uint8_t *v108; // [esp+98h] [ebp+10h]
  int v109; // [esp+9Ch] [ebp+14h]
  int v110; // [esp+9Ch] [ebp+14h]
  int v111; // [esp+9Ch] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+14h]
  int16_t v113; // [esp+9Ch] [ebp+14h]
  int16_t v114; // [esp+9Ch] [ebp+14h]
  int16_t v115; // [esp+9Ch] [ebp+14h]

  v105 = (uint8_t *)*a5; /*0x4bdf18*/
  __asm /*0x4bdf1f*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  IDA_LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
  v12 = v11; /*0x4bdf34*/
  v91 = v11; /*0x4bdf39*/
  v106 = (uint8_t *)a5[1]; /*0x4bdf3d*/
  __asm /*0x4bdf44*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  IDA_LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
  v14 = v13; /*0x4bdf59*/
  v90 = v13; /*0x4bdf5e*/
  v107 = (uint8_t *)a5[2]; /*0x4bdf62*/
  __asm /*0x4bdf69*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  IDA_LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
  v89 = v15; /*0x4bdf7f*/
  if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v16 = (int *)(*((int (__thiscall **)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
  v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
  v18 = *v17; /*0x4bdfb6*/
  v98 = *v17; /*0x4bdfb8*/
  v19 = v17[1]; /*0x4bdfbc*/
  v99 = v19; /*0x4bdfbf*/
  v100 = v17[2]; /*0x4bdfc6*/
  v20 = v17[3]; /*0x4bdfca*/
  v101 = v20; /*0x4bdfcf*/
  if ( !v100 && !v20 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  v21 = v18 + *a3; /*0x4bdff3*/
  v22 = v18 + *a4; /*0x4bdff5*/
  v23 = a7; /*0x4bdffa*/
  v24 = v19 + a3[1]; /*0x4be001*/
  v25 = v21; /*0x4be003*/
  v26 = v19 + a4[1]; /*0x4be005*/
  v27 = a8; /*0x4be007*/
  v95 = v21; /*0x4be010*/
  v96 = v24; /*0x4be014*/
  v97[0] = v22; /*0x4be018*/
  v97[1] = v26; /*0x4be01c*/
  if ( v21 > v22 ) /*0x4be020*/
  {
    v25 = v22; /*0x4be022*/
    v23 = a8; /*0x4be024*/
    v27 = a7; /*0x4be026*/
    v95 = v22; /*0x4be02d*/
    v96 = v26; /*0x4be031*/
    v97[0] = v21; /*0x4be035*/
    v97[1] = v24; /*0x4be039*/
  }
  v94[2] = v97[1]; /*0x4be049*/
  v28 = v25; /*0x4be04e*/
  v29 = v96; /*0x4be050*/
  v94[1] = v97[0]; /*0x4be05c*/
  if ( !(uint8_t)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
    return 0; /*0x4be060*/
  a7 = v27; /*0x4be07b*/
  v109 = v23; /*0x4be082*/
  if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
  {
    *(unsigned int *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
    *(unsigned int *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
    __asm /*0x4be0ac*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4be0c1*/
    IDA_LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
    a8 = v30; /*0x4be0d1*/
    *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
    *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
    __asm /*0x4be0ee*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_18]
      fstp [esp+84h+var_44+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v76); /*0x4be10e*/
    IDA_LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
    a8 = v31; /*0x4be11b*/
    __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
    a8 = v23 - v27; /*0x4be12d*/
    __asm /*0x4be134*/
    {
      fdivr [esp+7Ch+var_44+4]
      fild [esp+7Ch+arg_18]
      fmulp st(1), st
    }
    IDA_LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
    v33 = abs32(v32); /*0x4be149*/
    if ( v23 >= v27 ) /*0x4be14d*/
      a7 = v23 - v33; /*0x4be15e*/
    else
      a7 = v23 + v33; /*0x4be151*/
  }
  if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
  {
    *(unsigned int *)&v93[4] = v95 - v94[1]; /*0x4be182*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
    *(unsigned int *)&v93[8] = v96 - v94[2]; /*0x4be190*/
    __asm /*0x4be194*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v77); /*0x4be1a9*/
    IDA_LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
    v110 = v34; /*0x4be1b3*/
    *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
    *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
    __asm /*0x4be1d2*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_10]
      fstp qword ptr [esp+84h+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v78); /*0x4be1f2*/
    IDA_LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
    v111 = v35; /*0x4be1ff*/
    __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
    v112 = v23 - v27; /*0x4be211*/
    __asm /*0x4be218*/
    {
      fdivr qword ptr [esp+7Ch+var_34+4]
      fild [esp+7Ch+arg_10]
      fmulp st(1), st
    }
    IDA_LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
    v37 = abs32(v36); /*0x4be22d*/
    if ( v27 <= v23 ) /*0x4be231*/
      v109 = v27 + v37; /*0x4be240*/
    else
      v109 = v27 - v37; /*0x4be235*/
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
  v38 = (*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
  v108 = (uint8_t *)v38; /*0x4be26d*/
  if ( !g_ZBufferDescriptor ) /*0x4be274*/
    return 0; /*0x4be274*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
  v94[2] = v96; /*0x4be285*/
  SamplePosition = (unsigned short *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v95, v96 - Stream_field_04); /*0x4be29c*/
  v41 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
  v94[2] = v96; /*0x4be2a5*/
  v42 = (uint16_t *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v95, v96 - v41); /*0x4be2b6*/
  v85 = -1; /*0x4be2c1*/
  IDA_LOWORD(v41) = IDA_LOWORD(g_ZBufferDescriptor->Stream_field_04) + IDA_LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
  a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
  if ( !v38 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v86 = v97[0] - v95; /*0x4be305*/
  v43 = v97[1] - v96; /*0x4be310*/
  v44 = a7 - v109; /*0x4be31a*/
  v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
  v80 = v45; /*0x4be321*/
  if ( v43 < 0 ) /*0x4be325*/
  {
    v85 = 1; /*0x4be32e*/
    v80 = -v45; /*0x4be33a*/
    pad_0 = -pad_0; /*0x4be33e*/
  }
  v84 = 1; /*0x4be347*/
  v46 = abs32(v43); /*0x4be354*/
  if ( v44 < 0 ) /*0x4be358*/
    v84 = -1; /*0x4be35a*/
  IDA_LOWORD(a7) = 0; /*0x4be364*/
  v47 = abs32(v44); /*0x4be377*/
  IDA_BYTE2(a7) = 0; /*0x4be37f*/
  v104 = 2 * v86; /*0x4be38a*/
  v103 = 2 * v46; /*0x4be394*/
  v79 = 2 * v47; /*0x4be39e*/
  if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
  {
    if ( v86 <= v46 ) /*0x4be5aa*/
    {
      v67 = v104 - v46; /*0x4be7b5*/
      v68 = v79 - v46; /*0x4be7b7*/
      *(unsigned int *)&v93[4] = v104 - v46; /*0x4be7bb*/
      *(unsigned int *)v93 = v79 - v46; /*0x4be7bf*/
      if ( v46 > 0 ) /*0x4be7c3*/
      {
        v94[1] = v46; /*0x4be7d0*/
        v69 = g_ZBufferDescriptor; /*0x4be7d4*/
        v83 = 0; /*0x4be7da*/
        v88 = 2 * pad_0; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          v70 = *v42; /*0x4be7f6*/
          if ( (uint16_t)a8 < *SamplePosition ) /*0x4be7fa*/
          {
            v71 = *(unsigned short *)&v108[v83]; /*0x4be80b*/
            IDA_LOBYTE(v115) = (uint8_t)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
            IDA_HIBYTE(v115) = (uint8_t)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
            IDA_LOWORD(a7) = v115; /*0x4be861*/
            IDA_BYTE2(a7) = (uint8_t)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
            v72 = BlendColorPack((uint8_t *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
            v67 = *(unsigned int *)&v93[4]; /*0x4be89e*/
            *(unsigned short *)&v108[v83] = v72; /*0x4be8a2*/
            v69 = g_ZBufferDescriptor; /*0x4be8a6*/
            v68 = *(unsigned int *)v93; /*0x4be8ac*/
          }
          if ( v67 > 0 ) /*0x4be8b2*/
          {
            ++SamplePosition; /*0x4be8bb*/
            v83 += 2; /*0x4be8c3*/
            if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
            v67 -= v103; /*0x4be8cc*/
          }
          if ( v68 > 0 ) /*0x4be8d5*/
          {
            a8 += v84; /*0x4be8eb*/
            v68 -= v103; /*0x4be8f2*/
          }
          v67 += v104; /*0x4be8ff*/
          v68 += v79; /*0x4be908*/
          v108 += v80; /*0x4be914*/
          SamplePosition = (unsigned short *)((char *)SamplePosition + v88); /*0x4be922*/
          *(unsigned int *)&v93[4] = v67; /*0x4be924*/
          *(unsigned int *)v93 = v68; /*0x4be92a*/
          if ( pad_0 <= 0 ) /*0x4be92e*/
          {
            v73 = SamplePosition; /*0x4be93d*/
            if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
              v73 = (unsigned short *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
            SamplePosition = v73; /*0x4be948*/
          }
          else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
          }
          v42 = (uint16_t *)((char *)v42 + v88); /*0x4be955*/
          if ( pad_0 <= 0 ) /*0x4be959*/
          {
            v74 = v42; /*0x4be970*/
            if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
              v74 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
            v42 = v74; /*0x4be97c*/
          }
          else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
          {
            v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
          }
          v56 = v94[1] == 1; /*0x4be98f*/
          a8 += v85; /*0x4be990*/
          --v94[1]; /*0x4be997*/
        }
        while ( !v56 ); /*0x4be99b*/
      }
    }
    else
    {
      v58 = v103 - v86; /*0x4be5bf*/
      *(unsigned int *)&v93[4] = v103 - v86; /*0x4be5c3*/
      *(unsigned int *)v93 = v79 - v86; /*0x4be5c9*/
      v82 = 0; /*0x4be5cd*/
      if ( v86 > 0 ) /*0x4be5d5*/
      {
        v59 = g_ZBufferDescriptor; /*0x4be5db*/
        do /*0x4be78f*/
        {
          v60 = *v42; /*0x4be5ee*/
          if ( (uint16_t)a8 < *SamplePosition ) /*0x4be5f2*/
          {
            v61 = *(unsigned short *)&v108[2 * v82]; /*0x4be603*/
            IDA_LOBYTE(v114) = (uint8_t)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
            IDA_HIBYTE(v114) = (uint8_t)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
            IDA_LOWORD(a7) = v114; /*0x4be659*/
            IDA_BYTE2(a7) = (uint8_t)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
            v62 = BlendColorPack((uint8_t *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
            v58 = *(unsigned int *)&v93[4]; /*0x4be696*/
            *(unsigned short *)&v108[2 * v82] = v62; /*0x4be69a*/
            v59 = g_ZBufferDescriptor; /*0x4be69e*/
          }
          if ( v58 > 0 ) /*0x4be6a6*/
          {
            v58 -= v104; /*0x4be6c0*/
            v108 += v80; /*0x4be6c9*/
            SamplePosition += pad_0; /*0x4be6d3*/
            if ( pad_0 <= 0 ) /*0x4be6d7*/
            {
              v63 = SamplePosition; /*0x4be6e6*/
              if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                v63 = (unsigned short *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
              SamplePosition = v63; /*0x4be6f1*/
            }
            else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
            }
            v42 += pad_0; /*0x4be6fa*/
            if ( pad_0 <= 0 ) /*0x4be6fe*/
            {
              v64 = v42; /*0x4be715*/
              if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                v64 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
              v42 = v64; /*0x4be721*/
            }
            else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
            {
              v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
            }
            a8 += v85; /*0x4be730*/
          }
          v65 = *(unsigned int *)v93; /*0x4be737*/
          if ( *(int *)v93 > 0 ) /*0x4be73d*/
          {
            a8 += v84; /*0x4be74c*/
            v65 = *(unsigned int *)v93 - v104; /*0x4be75a*/
          }
          ++SamplePosition; /*0x4be769*/
          *(unsigned int *)v93 = v79 + v65; /*0x4be76c*/
          Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
          v58 += v103; /*0x4be773*/
          *(unsigned int *)&v93[4] = v58; /*0x4be777*/
          if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
          ++v82; /*0x4be78b*/
        }
        while ( v82 < v86 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v48 = v103 - v47; /*0x4be3be*/
    v49 = v104 - v47; /*0x4be3c0*/
    *(unsigned int *)v93 = v103 - v47; /*0x4be3c4*/
    v87 = v104 - v47; /*0x4be3c8*/
    if ( v47 > 0 ) /*0x4be3cc*/
    {
      v50 = g_ZBufferDescriptor; /*0x4be3d2*/
      v81 = 0; /*0x4be3d8*/
      *(unsigned int *)&v93[4] = v47; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        v51 = *v42; /*0x4be3f1*/
        if ( (uint16_t)a8 < *SamplePosition ) /*0x4be3f5*/
        {
          v52 = *(unsigned short *)&v108[v81]; /*0x4be406*/
          IDA_LOBYTE(v113) = (uint8_t)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
          IDA_HIBYTE(v113) = (uint8_t)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
          IDA_LOWORD(a7) = v113; /*0x4be45c*/
          IDA_BYTE2(a7) = (uint8_t)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
          v53 = BlendColorPack((uint8_t *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
          v48 = *(unsigned int *)v93; /*0x4be499*/
          v49 = v87; /*0x4be49d*/
          *(unsigned short *)&v108[v81] = v53; /*0x4be4a1*/
          v50 = g_ZBufferDescriptor; /*0x4be4a5*/
        }
        if ( v48 > 0 ) /*0x4be4ad*/
        {
          v108 += v80; /*0x4be4c4*/
          v48 -= v79; /*0x4be4d2*/
          SamplePosition += pad_0; /*0x4be4d7*/
          if ( pad_0 <= 0 ) /*0x4be4db*/
          {
            v54 = SamplePosition; /*0x4be4ea*/
            if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
              v54 = (unsigned short *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
            SamplePosition = v54; /*0x4be4f3*/
          }
          else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
          }
          v42 += pad_0; /*0x4be4f5*/
          if ( pad_0 <= 0 ) /*0x4be4f9*/
          {
            v55 = v42; /*0x4be510*/
            if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
              v55 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
            v42 = v55; /*0x4be51c*/
          }
          else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
          {
            v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
          }
          v49 = v87; /*0x4be52b*/
          a8 += v85; /*0x4be52f*/
        }
        if ( v49 > 0 ) /*0x4be538*/
        {
          ++SamplePosition; /*0x4be541*/
          v81 += 2; /*0x4be549*/
          if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
          v49 -= v79; /*0x4be552*/
        }
        a8 += v84; /*0x4be56a*/
        v49 += v104; /*0x4be578*/
        v48 += v103; /*0x4be57e*/
        v56 = *(unsigned int *)&v93[4] == 1; /*0x4be580*/
        v87 = v49; /*0x4be581*/
        *(unsigned long long *)v93 = IDA___PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v56 ); /*0x4be58d*/
    }
  }
  (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
  return 1; /*0x4be59c*/
}
// ============================================================
// DSurface::DrawLineFaded — IDA: 0x4BC750 (6064B)
// vtable[15] 0x3C — Bresenham line with stipple pattern,
// per-channel fade via lookup tables, gradient interpolation,
// and Z-buffer depth test. The most complex line drawing function.
// For standalone build (no Z-buffer), delegates to DrawLineEx.
// ============================================================
REVERSE(0x4BC750, "DSurface::DrawLineFaded: Complex gradient line with stipple/Z-buffer", "None")
// 0x4bc750
bool DSurface::DrawLineFaded(
// 0x7ba610
        return XSurface::DrawLineEx(
