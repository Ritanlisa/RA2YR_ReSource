#include "gamemd/render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/reverse_marker.hpp"

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
void* g_VisibleSurfaceDescriptor = g_VisibleSurfaceDescStub;

namespace gamemd
{

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
        if (x < static_cast<double>(clip_x))    code |= 1;
        if (x > static_cast<double>(clip_r - 1)) code |= 2;
        if (y > static_cast<double>(clip_b - 1)) code |= 4;
        if (y < static_cast<double>(clip_y))     code |= 8;
        return code;
    };

    double x0 = static_cast<double>(start[0]);
    double y0 = static_cast<double>(start[1]);
    double x1 = static_cast<double>(end[0]);
    double y1 = static_cast<double>(end[1]);

    int c0 = outcode(x0, y0);
    int c1 = outcode(x1, y1);

    for (;;)
    {
        if (!c0 && !c1)
        {
            start[0] = static_cast<int>(x0);
            start[1] = static_cast<int>(y0);
            end[0]   = static_cast<int>(x1);
            end[1]   = static_cast<int>(y1);
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
            nx = (static_cast<double>(clip_y) - y0) * dxdy + x0;
            ny = static_cast<double>(clip_y);
        }
        else if (c & 4)
        {
            ny = static_cast<double>(clip_b - 1);
            nx = (ny - y0) * dxdy + x0;
        }
        else if (c & 2)
        {
            nx = static_cast<double>(clip_r - 1);
            ny = (nx - x0) * dydx + y0;
        }
        else
        {
            ny = (static_cast<double>(clip_x) - x0) * dydx + y0;
            nx = static_cast<double>(clip_x);
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

    g_BitShift_Red   = rShift;
    g_BitShift_Green = gShift;
    g_BitShift_Blue  = bShift;

    // Count bits set (= mask width)
    DWORD rT = rM, gT = gM, bT = bM;
    while (rWidth < 8 && (rT & 0x80)) { rT <<= 1; ++rWidth; }
    while (gWidth < 8 && (gT & 0x80)) { gT <<= 1; ++gWidth; }
    while (bWidth < 8 && (bT & 0x80)) { bT <<= 1; ++bWidth; }

    g_BitMask_Red   = rWidth;
    g_BitMask_Green = gWidth;
    g_BitMask_Blue  = bWidth;

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
bool DSurface::BlitWhole(class Surface* src, bool option1, bool option2)
{
    RectangleStruct zero = {};
    return Blit(zero, zero, src, zero, zero, option1, option2);
}

// IDA: 0x4BB080 — DSurface::BlitPart (75B)
// If HW blit possible (both surfaces exist, BPP/pitch match) → Blit
// Otherwise fallback to XSurface::BlitPart (software path)
REVERSE(0x4BB080, "DSurface::BlitPart: HW/SW blit with coordinate clipping", "None")
bool DSurface::BlitPart(
    const RectangleStruct& dest_rect, class Surface* src,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    if (!Surface || !src)
        return false;

    auto* src_dsurf = dynamic_cast<DSurface*>(src);
    if (!src_dsurf || !src_dsurf->Surface
        || src->GetBytesPerPixel() != GetBytesPerPixel()
        || src_dsurf->GetPitch() != GetPitch())
    {
        return XSurface::BlitPart(dest_rect, src, src_rect, option1, option2);
    }

    RectangleStruct zero = {};
    return Blit(zero, zero, src, dest_rect, src_rect, option1, option2);
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

    auto* dst = reinterpret_cast<DSurface*>(self);
    auto* src = reinterpret_cast<class Surface*>(a4);
    auto* src_dsurf = dynamic_cast<DSurface*>(src);

    // --- Determine hardware vs software blit path ---
    // v42 == true → software (XSurface::BlitPart), false → hardware (DDraw Blt)
    bool v42 = false;

    if (!src->IsDSurface()
     || src->IsLocked()
     || static_cast<char>(a7) == 1
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
         || dst->Surface->IsLost() == DDERR_SURFACELOST)
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
    src->GetRect(reinterpret_cast<RectangleStruct*>(src_srf));
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

        int v29 = a5[0], v50 = v29;
        if (v43 < v29)
        {
            v45 += v43 - v29;
            v43 = v50;
        }
        if (v45 < 1) goto hw_check;

        int v47 = a5[1];
        if (v44 < v47)
        {
            v46 += v44 - v47;
            v44 = v47;
        }
        if (v46 < 1) goto hw_check;

        if (v43 + v45 > v48 + v50)
            v45 = v48 + v50 - v43;
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
    int* v71_ptr = reinterpret_cast<int*>(&dst_srf_storage);

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

bool DSurface::Blit(
    const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
    class Surface* src, const RectangleStruct& dest_rect,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    int a2[4] = { clip_rect.X,  clip_rect.Y,  clip_rect.Width,  clip_rect.Height  };
    int a3[4] = { dest_rect.X,  dest_rect.Y,  dest_rect.Width,  dest_rect.Height  };
    int a5[4] = { clip_rect2.X, clip_rect2.Y, clip_rect2.Width, clip_rect2.Height };
    int a6[4] = { src_rect.X,   src_rect.Y,   src_rect.Width,   src_rect.Height   };

    return BlitCore(
        reinterpret_cast<int*>(this),
        a2, a3, src, a5, a6,
        static_cast<int>(option1),
        static_cast<char>(option2)) != 0;
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
            reinterpret_cast<uint32_t>(src_surface),
            src_rect[0], src_rect[1], src_rect[2], src_rect[3],
            dst_rect[0], dst_rect[1],
            static_cast<uint32_t>(flags));
    }
    return BlitCore(self, dst_rect, src_rect, src_surface, clip_dst, clip_src, flags, option2);
}

// ============================================================
// DSurface::FillRectEx — IDA: 0x4BB620 (526B)
// Hardware/software color fill with coordinate clipping.
// ============================================================
REVERSE(0x4BB620, "DSurface::FillRectEx: Hardware/software color fill with clipping", "None")
bool DSurface::FillRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& fill_rect, uint32_t color)
{
    // IDA: early exit — Surface must exist and fill_rect must have positive dims
    if (!Surface || fill_rect.Width <= 0 || fill_rect.Height <= 0)
        return false;

    // IDA: Check if software blit is needed
    if (!g_DDraw_UseHWBlit
     || IsLocked()
     || FAILED(Surface->GetBltStatus(DDGBS_ISBLTDONE)))
    {
        return XSurface::FillRectEx(clip_rect, fill_rect, color);
    }

    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return false;

    // --- Lost surface recovery ---
    if (Surface->IsLost() == DDERR_SURFACELOST)
    {
        if (FAILED(Surface->Restore())
         || Surface->IsLost() == DDERR_SURFACELOST)
            return false;

        int saved_locks = LockCount;
        if (saved_locks > 0)
        {
            LockCount = 0;
            Lock(0, 0);           // vtable[23]
            ++LockCount;
            Unlock();             // vtable[24]
            LockCount = saved_locks;
        }
    }

    // --- Get destination surface rect and clip fill_rect ---
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    // IDA: two-stage ClipRectIntersection
    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &surf_rect, &surf_rect, nullptr, nullptr);

    int fa[4] = { fill_rect.X, fill_rect.Y, fill_rect.Width, fill_rect.Height };
    int ca[4] = { clipped.X, clipped.Y, clipped.Width, clipped.Height };

    RectangleStruct final_rect;
    RectangleStruct clip_r = { ca[0], ca[1], ca[2], ca[3] };
    RectangleStruct fill_r = { fa[0], fa[1], fa[2], fa[3] };
    ClipRectIntersection(&final_rect, &clip_r, &fill_r, nullptr, nullptr);

    if (final_rect.Width <= 0 || final_rect.Height <= 0)
        return false;

    // --- DDraw color fill ---
    RECT r;
    r.left   = final_rect.X;
    r.top    = final_rect.Y;
    r.right  = final_rect.X + final_rect.Width;
    r.bottom = final_rect.Y + final_rect.Height;

    DDBLTFX fx = {};
    fx.dwSize      = sizeof(fx);  // IDA: = 100
    fx.dwFillColor = color;

    // IDA: 0x1000600 = DDBLT_WAIT (0x1000000) | DDBLT_COLORFILL (0x400) | 0x200
    constexpr DWORD blt_flags = 0x01000600;
    HRESULT hr = Surface->Blt(&r, nullptr, nullptr, blt_flags, &fx);
    return SUCCEEDED(hr);
}

// IDA: 0x4BB5F0 — DSurface::FillRect (43B) thin wrapper
// GetRect() → FillRectEx(clip, fill_rect, color)
REVERSE(0x4BB5F0, "DSurface::FillRect: Fill rectangle with color", "None")
bool DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return FillRectEx(clip, fill_rect, color);
}

// IDA: 0x4BB830 — DSurface::FillRectWithFlags (711B)
// CPU software pixel fill with per-pixel alpha blending.
// Only works on 16bpp+ surfaces. Converts RGB888 source color
// to the surface's native 16-bit format using the global DDraw
// bit-shift/mask constants, then blends each pixel:
//   result = (src_alpha * src_ch + dst_alpha * dst_ch) >> 8
// Opacity 0-100 clamped to 100, scaled to 0-255.
REVERSE(0x4BB830, "DSurface::FillRectWithFlags: CPU pixel fill with alpha blending", "None")
bool DSurface::FillRectWithFlags(
    const RectangleStruct& clip_rect,
    const ColorStruct& color,
    int opacity_percent)
{
    // IDA: 0x4BB845 — GetBytesPerPixel() < 2 → bail (only 16bpp+)
    if (GetBytesPerPixel() < 2)
        return false;

    // IDA: 0x4BB863 — empty fill rect → bail
    if (clip_rect.Width <= 0 || clip_rect.Height <= 0)
        return false;

    // IDA: 0x4BB87A — GetRect() → surface rectangle
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    // IDA: 0x4BB888 — ClipRectIntersection(fill_rect, surf_rect) → clipped rect
    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &surf_rect, &clip_rect, nullptr, nullptr);
    if (clipped.Width <= 0 || clipped.Height <= 0)
        return false;

    // IDA: 0x4BB8BE-0x4BB917 — Compute per-channel masks from DDraw format globals
    //   red_mask   = (0xFF >> g_BitShift_Green) << g_BitShift_Red
    //   green_mask = (0xFF >> g_BitMask_Blue)  << g_BitMask_Green
    //   blue_mask  = (0xFF >> g_BitMask_Red)   << g_BitShift_Blue
    // All globals are word-sized (16-bit) in the binary.
    const auto red_mask   = static_cast<uint16_t>((0xFFu >> g_BitShift_Green) << g_BitShift_Red);
    const auto green_mask = static_cast<uint16_t>((0xFFu >> g_BitMask_Blue)  << g_BitMask_Green);
    const auto blue_mask  = static_cast<uint16_t>((0xFFu >> g_BitMask_Red)   << g_BitShift_Blue);

    // IDA: 0x4BB91B-0x4BB938 — Lock at clipped origin
    // CellStruct::Copy stores clipped rect as a local CellStruct copy;
    // Lock is then called with (clipped.X, clipped.Y) to get a pointer
    // to the top-left pixel of the fill region.
    void* buf = Lock(clipped.X, clipped.Y);
    if (!buf)
        return false;

    // IDA: 0x4BB94A-0x4BB970 — Opacity scaling: 0–100 clamped, then *255/100
    const int opacity_clamped = (opacity_percent > 100) ? 100 : opacity_percent;
    const auto src_alpha = static_cast<uint16_t>(255 * opacity_clamped / 100);
    const uint16_t dst_alpha = 255 - src_alpha;

    // IDA: 0x4BB98F-0x4BB9D2 — Convert RGB888 source color to native 16-bit
    //   blue  = (B >> g_BitMask_Red)   << g_BitShift_Blue
    //   green = (G >> g_BitMask_Blue)  << g_BitMask_Green
    //   red   = (R >> g_BitShift_Green) << g_BitShift_Red
    const auto src_blue  = static_cast<uint16_t>((color.B >> g_BitMask_Red)   << g_BitShift_Blue);
    const auto src_green = static_cast<uint16_t>((color.G >> g_BitMask_Blue)  << g_BitMask_Green);
    const auto src_red   = static_cast<uint16_t>((color.R >> g_BitShift_Green) << g_BitShift_Red);
    const uint16_t src_color = src_blue | src_green | src_red;

    // IDA: 0x4BB9E6 — GetPitch() for row stride calculation
    const int pitch = GetPitch();

    // IDA: 0x4BB9DA-0x4BBADC — Row loop: v41 from 0 to clipped.Height-1
    for (int row = 0; row < clipped.Height; ++row)
    {
        // IDA: 0x4BBA01 — skip row if clipped.Width <= 0
        if (clipped.Width <= 0)
            continue;

        // IDA: 0x4BBA1B-0x4BBA4B — Precompute per-channel src×alpha terms
        //   src_red_blend   = src_alpha * (src_color & red_mask)
        //   src_green_blend = src_alpha * (src_color & green_mask)
        //   src_blue_blend  = src_alpha * (src_color & blue_mask)
        const uint32_t src_red_blend   = src_alpha * (src_color & red_mask);
        const uint32_t src_green_blend = src_alpha * (src_color & green_mask);
        const uint32_t src_blue_blend  = src_alpha * (src_color & blue_mask);

        // IDA: 0x4BBA50 — Row pointer: buf + row * pitch → pixel at (clipped.X, clipped.Y+row)
        auto* pixel_row = reinterpret_cast<uint16_t*>(
            static_cast<uint8_t*>(buf) + row * pitch);

        // IDA: 0x4BBA68-0x4BBABB — Column loop: blend each pixel left to right
        for (int col = 0; col < clipped.Width; ++col)
        {
            const uint16_t dst = pixel_row[col];

            // Blend red channel:   (src_red_blend   + dst_alpha * (dst & red_mask))   >> 8
            // Blend green channel: (src_green_blend + dst_alpha * (dst & green_mask)) >> 8
            // Blend blue channel:  (src_blue_blend  + dst_alpha * (dst & blue_mask))  >> 8
            const uint32_t new_red   = (src_red_blend   + dst_alpha * (dst & red_mask))   >> 8;
            const uint32_t new_green = (src_green_blend + dst_alpha * (dst & green_mask)) >> 8;
            const uint32_t new_blue  = (src_blue_blend  + dst_alpha * (dst & blue_mask))  >> 8;

            // IDA: 0x4BBAA8 — Assemble: mask each channel result and OR together
            // Red/green are masked; blue result fits naturally (LSB field, no mask needed)
            pixel_row[col] = static_cast<uint16_t>(
                (new_green & green_mask) | (new_red & red_mask) | new_blue);
        }
    }

    // IDA: 0x4BBAE8 — Unlock surface
    Unlock();
    return true;
}

// IDA: 0x4BAD80 -- DSurface::Lock (315B)
// thiscall: ECX=this, stack=[x, y]
// Returns pointer to locked surface pixel at (x,y), or nullptr on failure.
// vtable[23] — Lost-surface recovery: re-locks after Restore via Lock(0,0)+Unlock() cycle.
// First lock path calls IDirectDrawSurface7::Lock(vtable[25]) and caches desc in SurfaceDesc.
// Nested lock path just increments LockCount and computes byte offset.
REVERSE(0x4BAD80, "DSurface::Lock: Lock surface for CPU access", "None")
void* DSurface::Lock(int x, int y)
{
    // IDA: if (!g_DDraw_Initialized && !g_DDraw_Active) return 0
    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return nullptr;

// IDA: 0x4BB000 — DSurface::RestoreIfLost (116B)
// Detects lost DDraw surface and restores it via Lock/Unlock cycle.
REVERSE(0x4BB000, "DSurface::RestoreIfLost: lost surface detection + recovery", "None")
bool DSurface::RestoreIfLost()
{
    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return false;

    if (!Surface)
        return true;

    // IDA: check if surface is lost
    if (Surface->IsLost() != DDERR_SURFACELOST)
        return true;

    // IDA: attempt restore
    if (FAILED(Surface->Restore()) || Surface->IsLost() != DD_OK)
        return false;

    // IDA: save LockCount, cycle Lock(0,0)+Unlock to re-acquire, restore count
    int saved = LockCount;
    if (saved > 0) {
        LockCount = 0;
        Lock(0, 0);
        ++LockCount;
        Unlock();
        LockCount = saved;
    }
    return true;
}



    // IDA: validate coordinates
    if (x < 0 || y < 0)
        return nullptr;

    // IDA: nested lock — already locked, just increment and compute offset
    if (LockCount > 0)
    {
        ++LockCount;
        int pitch = GetPitch();
        return static_cast<uint8_t*>(LockedSurface)
             + x * GetBytesPerPixel() + y * pitch;
    }

    // IDA: first lock — acquire via IDirectDrawSurface7::Lock(vtable[25]=0x64, flags=DDLOCK_WAIT)
    if (!Surface)
        return nullptr;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    HRESULT hr = Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr);
    if (FAILED(hr))
        return nullptr;

    // IDA: qmemcpy DDSURFACEDESC2 to this->SurfaceDesc (this+8)
    if (SurfaceDesc)
        std::memcpy(SurfaceDesc, &desc, sizeof(desc));

    // IDA: extract pixel format from descriptor
    // v8[21] = ddpfPixelFormat.dwRGBBitCount at offset 84
    BytesPerPixel = (desc.ddpfPixelFormat.dwRGBBitCount + 7) >> 3;
    // v8[26] = ddsCaps.dwCaps at offset 104, 0x4000 = DDSCAPS_VIDEOMEMORY
    VRAMmed = (desc.ddsCaps.dwCaps & DDSCAPS_VIDEOMEMORY) != 0;
    // v8[9] = lpSurface (locked data pointer at offset 36)
    LockedSurface = desc.lpSurface;

    // LABEL_14: common tail — increment count, compute byte offset
    ++LockCount;
    return static_cast<uint8_t*>(LockedSurface)
         + x * BytesPerPixel + y * static_cast<int>(desc.lPitch);
}

// IDA: 0x4BAF40 -- DSurface::Unlock (154B)
// vtable[24] — Decrements lock count; on last unlock releases DDraw surface.
// Also handles lost-surface recovery on unlock (re-lock cycle after Restore).
REVERSE(0x4BAF40, "DSurface::Unlock: Release DDraw surface lock", "None")
bool DSurface::Unlock()
{
    // IDA: check DDraw state (OR: proceed if either initialized or active)
    if (g_DDraw_Initialized || g_DDraw_Active)
    {
        // IDA: Lost surface detection on unlock
        if (Surface && Surface->IsLost() == DDERR_SURFACELOST)
        {
            // IDA: if Restore succeeds AND surface no longer lost
            if (SUCCEEDED(Surface->Restore()) && Surface->IsLost() == DD_OK)
            {
                // IDA: save LockCount, set 0, cycle Lock(0,0)+Unlock(), restore
                int saved = LockCount;
                if (saved > 0)
                {
                    LockCount = 0;
                    Lock(0, 0);          // vtable[23]: re-acquire DDraw after Restore
                    ++LockCount;
                    Unlock();            // vtable[24]: recursive — decrements, doesn't release DDraw
                    LockCount = saved;
                }
            }
        }
    }

    // IDA: decrement lock count
    if (LockCount <= 0)
        return false;

    int new_count = LockCount - 1;
    LockCount = new_count;

    // IDA: last unlock → release DDraw surface via IDDS7::Unlock(vtable[32]=0x80)
    if (new_count == 0)
    {
        if (Surface)
            Surface->Unlock(nullptr);
        LockedSurface = nullptr;
    }

    return true;
}

// IDA: 0x4BAEC0 -- DSurface::CanLock (95B)
// vtable[25] — Probes whether the surface can be locked via test-lock-then-unlock.
REVERSE(0x4BAEC0, "DSurface::CanLock: Test if surface can be locked", "None")
bool DSurface::CanLock(uint32_t /*unk1*/, uint32_t /*unk2*/)
{
    // IDA: already locked — can always lock again (nested)
    if (LockCount > 0)
        return true;

    if (!Surface)
        return false;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    // IDA: Lock with flags=0 (no DDLOCK_WAIT) — non-blocking test probe
    HRESULT hr = Surface->Lock(nullptr, &desc, 0, nullptr);
    if (FAILED(hr))
        return false;

    // IDA: immediately unlock after successful probe
    // vtable[32]=0x80: IDirectDrawSurface7::Unlock
    Surface->Unlock(nullptr);
    return true;
}

int DSurface::GetPitch() const
{
    if (!Surface) return Width * BytesPerPixel;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);
    if (SUCCEEDED(Surface->GetSurfaceDesc(&desc))) {
        return desc.lPitch;
    }
    return Width * BytesPerPixel;
}

// IDA: 0x4BAF20 — DSurface::CheckBltStatus (17B)
// Calls IDirectDrawSurface7::GetBltStatus(DDGBS_CANBLT=1)
// Returns true if surface is ready for blit (DD_OK)
bool DSurface::CheckBltStatus()
{
    // IDA: (*(*(this+7) + 52))(*(this+7), 1) == 0
    // vtable offset 52/4 = 13 = GetBltStatus, param=1=DDGBS_CANBLT
    if (!Surface)
        return true;
    return SUCCEEDED(Surface->GetBltStatus(DDGBS_CANBLT));
}

// IDA: 0x4115F0 — BSurface::Lock (49B)
// Increments LockCount, computes byte offset: Buffer + x*BPP + y*Pitch
void* BSurface::Lock(int x, int y)
{
    ++LockCount;
    int bpp = GetBytesPerPixel();
    int pitch = GetPitch();
    return static_cast<uint8_t*>(Buffer) + x * bpp + y * pitch;
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
bool XSurface::SetPixel(const Point2D& point, uint32_t color)
{
    void* buf = Lock(point.X, point.Y);
    if (!buf)
        return false;

    if (GetBytesPerPixel() == 2)
        *static_cast<uint16_t*>(buf) = static_cast<uint16_t>(color);
    else
        *static_cast<uint8_t*>(buf) = static_cast<uint8_t>(color);

    Unlock();
    return true;
}

// IDA: 0x7BAE60 -- XSurface::GetPixel (80B)
// vtable[10] 0x28 -- Lock(point) -> check BPP -> read pixel -> Unlock
REVERSE(0x7bae60, "XSurface::GetPixel: pixel read", "None")
uint32_t XSurface::GetPixel(const Point2D& point)
{
    uint32_t result = 0;

    void* buf = Lock(point.X, point.Y);
    if (!buf)
        return result;

    if (GetBytesPerPixel() == 2)
        result = *static_cast<uint16_t*>(buf);
    else
        result = *static_cast<uint8_t*>(buf);

    Unlock();
    return result;
}

// IDA: 0x7BAF90 -- XSurface::PutPixel (130B)
// vtable[34] 0x88 -- bounds check -> Lock -> check BPP -> write -> Unlock
REVERSE(0x7baf90, "XSurface::PutPixel: pixel write + bounds", "Inject")
bool XSurface::PutPixel(const Point2D& point, uint16_t color, const RectangleStruct& clip_rect)
{
    if (point.X < clip_rect.X)
        return false;
    if (point.X >= clip_rect.X + clip_rect.Width)
        return false;
    if (point.Y < clip_rect.Y)
        return false;
    if (point.Y >= clip_rect.Y + clip_rect.Height)
        return false;

    void* buf = Lock(point.X, point.Y);
    if (!buf)
        return false;

    if (GetBytesPerPixel() == 2)
        *static_cast<uint16_t*>(buf) = color;
    else
        *static_cast<uint8_t*>(buf) = static_cast<uint8_t>(color);

    Unlock();
    return true;
}

// IDA: 0x7BAF10 -- XSurface::GetPixelAtCoords (119B)
// vtable[35] 0x8C -- bounds check -> Lock -> check BPP -> read -> Unlock
REVERSE(0x7baf10, "XSurface::GetPixelAtCoords: pixel read + bounds", "Inject")
uint16_t XSurface::GetPixelAtCoords(const Point2D& point, const RectangleStruct& clip_rect)
{
    uint16_t result = 0;

    if (point.X < clip_rect.X)
        return result;
    if (point.X >= clip_rect.X + clip_rect.Width)
        return result;
    if (point.Y < clip_rect.Y)
        return result;
    if (point.Y >= clip_rect.Y + clip_rect.Height)
        return result;

    void* buf = Lock(point.X, point.Y);
    if (!buf)
        return result;

    if (GetBytesPerPixel() == 2)
        result = *static_cast<uint16_t*>(buf);
    else
        result = *static_cast<uint8_t*>(buf);

    Unlock();
    return result;
}

// --- XSurface line drawing (Batch B) ---

// IDA: 0x7BAB90 -- XSurface::WalkLine (511B)
// vtable[17] 0x44 -- Bresenham walker with callback
bool XSurface::WalkLine(
    const Point2D& start, const Point2D& end,
    void (*callback)(const Point2D&))
{
    RectangleStruct clip;
    GetRect(&clip);

    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &clip, &clip, nullptr, nullptr);

    int sx = start.X + clip.X;
    int sy = start.Y + clip.Y;
    int ex = end.X + clip.X;
    int ey = end.Y + clip.Y;

    int p1[2] = { sx, sy };
    int p2[2] = { ex, ey };
    if (!ClipLine(p1, p2, reinterpret_cast<int*>(&clipped)))
        return false;

    if (p1[0] > p2[0])
    {
        int tx = p1[0], ty = p1[1];
        p1[0] = p2[0]; p1[1] = p2[1];
        p2[0] = tx;     p2[1] = ty;
    }

    int x1 = p1[0], y1 = p1[1];
    int x2 = p2[0], y2 = p2[1];

    int dx = x2 - x1;
    int dy = y2 - y1;
    int step_y = 1;
    if (dy < 0) { dy = -dy; step_y = -1; }

    if (dy == 0)
    {
        for (int x = x1; x <= x2; ++x)
            callback(Point2D(x, y1));
    }
    else if (dx == 0)
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_count = dy >= 0 ? dy : -dy;
        for (int i = 0; i <= y_count; ++i)
            callback(Point2D(x1, y_start + i));
    }
    else if (dx >= dy)
    {
        int d = 2 * dy - dx;
        int y = y1;
        for (int x = x1; x <= x2; ++x)
        {
            callback(Point2D(x, y));
            if (d > 0) { y += step_y; d -= 2 * dx; }
            d += 2 * dy;
        }
    }
    else
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_end   = (y1 <= y2) ? y2 : y1;
        int d = 2 * dx - dy;
        int x = (y1 <= y2) ? x1 : x2;
        int x_step = (x1 <= x2) ? 1 : -1;
        for (int y = y_start; y <= y_end; ++y)
        {
            callback(Point2D(x, y));
            if (d > 0) { x += x_step; d -= 2 * dy; }
            d += 2 * dx;
        }
    }

    Unlock();
    return true;
}

// IDA: 0x7BA610 -- XSurface::DrawLineEx (685B)
// vtable[11] 0x2C -- clipped line with inline Bresenham pixel write
bool XSurface::DrawLineEx(
    const RectangleStruct& clip_rect,
    const Point2D& start, const Point2D& end,
    uint32_t color)
{
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &clip_rect, &surf_rect, nullptr, nullptr);

    int sx = start.X + clipped.X;
    int sy = start.Y + clipped.Y;
    int ex = end.X + clipped.X;
    int ey = end.Y + clipped.Y;

    int p1[2] = { sx, sy };
    int p2[2] = { ex, ey };
    if (!ClipLine(p1, p2, reinterpret_cast<int*>(&clipped)))
        return false;

    if (p1[0] > p2[0])
    {
        int tx = p1[0], ty = p1[1];
        p1[0] = p2[0]; p1[1] = p2[1];
        p2[0] = tx;     p2[1] = ty;
    }

    int x1 = p1[0], y1 = p1[1];
    int x2 = p2[0], y2 = p2[1];
    int bpp = GetBytesPerPixel();

    void* buf = Lock(x1, y1);
    if (!buf)
        return false;

    int pitch = GetPitch();

    if (y1 == y2)
    {
        if (bpp == 1)
        {
            auto* p = static_cast<uint8_t*>(buf);
            for (int x = x1; x <= x2; ++x)
                p[x - x1] = static_cast<uint8_t>(color);
        }
        else
        {
            auto* p = static_cast<uint16_t*>(buf);
            for (int x = x1; x <= x2; ++x)
                p[x - x1] = static_cast<uint16_t>(color);
        }
        Unlock();
        return true;
    }

    if (x1 == x2)
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_count = (y1 <= y2) ? (y2 - y1) : (y1 - y2);
        bool y_down = y2 >= y1;

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            for (int i = 0; i <= y_count; ++i)
            {
                *p = static_cast<uint8_t>(color);
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + (y_down ? pitch : -pitch));
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            for (int i = 0; i <= y_count; ++i)
            {
                *p = static_cast<uint16_t>(color);
                uint8_t* bp = reinterpret_cast<uint8_t*>(p);
                bp += (y_down ? pitch : -pitch);
                p = reinterpret_cast<uint16_t*>(bp);
            }
        }
        Unlock();
        return true;
    }

    int dx = x2 - x1;
    int dy = y2 - y1;
    int step_y = 1;
    int abs_dy = dy;
    if (dy < 0) { abs_dy = -dy; step_y = -1; }

    if (dx >= abs_dy)
    {
        int d = 2 * abs_dy - dx;
        int cur_y = y1;

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            uint8_t  bc = static_cast<uint8_t>(color);
            int row_offset = step_y * pitch;

            for (int x = 0; x <= dx; ++x)
            {
                p[x] = bc;
                if (d > 0) { p += row_offset; cur_y += step_y; d -= 2 * dx; }
                d += 2 * abs_dy;
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            uint16_t  wc = static_cast<uint16_t>(color);
            int row_offset = step_y * (pitch / 2);

            for (int x = 0; x <= dx; ++x)
            {
                p[x] = wc;
                if (d > 0) { p += row_offset; cur_y += step_y; d -= 2 * dx; }
                d += 2 * abs_dy;
            }
        }
    }
    else
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_end   = (y1 <= y2) ? y2 : y1;
        int d = 2 * dx - abs_dy;
        int cur_x = 0;

        bool y_down = y2 >= y1;

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            uint8_t  bc = static_cast<uint8_t>(color);
            int row_offset = (y_down ? pitch : -pitch);

            for (int y = y_start; y <= y_end; ++y)
            {
                p[cur_x] = bc;
                if (d > 0) { ++cur_x; d -= 2 * abs_dy; }
                d += 2 * dx;
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + row_offset);
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            uint16_t  wc = static_cast<uint16_t>(color);
            int row_offset = y_down ? (pitch / 2) : -(pitch / 2);

            for (int y = y_start; y <= y_end; ++y)
            {
                p[cur_x] = wc;
                if (d > 0) { ++cur_x; d -= 2 * abs_dy; }
                d += 2 * dx;
                p += row_offset;
            }
        }
    }

    Unlock();
    return true;
}

// IDA: 0x7BA5E0 -- XSurface::DrawLine (48B)
// vtable[12] 0x30 -- DrawLineEx wrapper with surface-level clip
bool XSurface::DrawLine(const Point2D& start, const Point2D& end, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return DrawLineEx(clip, start, end, color);
}

// IDA: 0x7BA8C0 -- XSurface::DrawDashedLine (621B)
// vtable[18] 0x48 -- Bresenham dashed line with 16-byte stipple pattern
bool XSurface::DrawDashedLine(
    const Point2D& start, const Point2D& end,
    uint16_t color, const uint8_t stipple[16],
    int dash_offset)
{
    int x1 = start.X;
    int y1 = start.Y;
    int x2 = end.X;
    int y2 = end.Y;
    int step = 1;

    if (x1 > x2)
    {
        x1 = end.X; y1 = end.Y;
        x2 = start.X; y2 = start.Y;
        int d = x2 - x1;
        int dy = y2 - y1;
        int ady = (dy >= 0) ? dy : -dy;
        int larger = (d >= ady) ? d : ady;
        dash_offset = (dash_offset + larger) % 16;
        step = -1;
    }

    int bpp = GetBytesPerPixel();
    void* buf = Lock(x1, y1);
    if (!buf)
        return false;

    int pitch = GetPitch();

    if (y1 == y2)
    {
        if (x2 >= x1)
        {
            if (bpp == 1)
            {
                uint8_t* p = static_cast<uint8_t*>(buf);
                for (int x = 0; x <= x2 - x1; ++x)
                {
                    int idx = dash_offset + x;
                    while (idx < 0) idx += 16;
                    idx %= 16;
                    if (stipple[idx])
                        p[x] = static_cast<uint8_t>(color);
                }
            }
            else
            {
                uint16_t* p = static_cast<uint16_t*>(buf);
                for (int x = 0; x <= x2 - x1; ++x)
                {
                    int idx = dash_offset + x;
                    while (idx < 0) idx += 16;
                    idx %= 16;
                    if (stipple[idx])
                        p[x] = color;
                }
            }
        }
    }
    else if (x1 == x2)
    {
        int y_step = (y2 >= y1) ? pitch : -pitch;
        int y_count = (y2 >= y1) ? (y2 - y1) : (y1 - y2);

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            for (int i = 0; i <= y_count; ++i)
            {
                int idx = dash_offset + i;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    *p = static_cast<uint8_t>(color);
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_step);
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            int y_off = y_step / 2;
            for (int i = 0; i <= y_count; ++i)
            {
                int idx = dash_offset + i;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    *p = color;
                p += y_off;
            }
        }
    }
    else if (x2 - x1 >= (y2 - y1 >= 0 ? y2 - y1 : y1 - y2))
    {
        int dx = x2 - x1;
        int ady = (y2 - y1 >= 0) ? (y2 - y1) : (y1 - y2);
        int y_step = (y2 >= y1) ? 1 : -1;
        int d = 2 * ady - dx;
        int cur_y = y1;

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            for (int x = 0; x < dx; ++x)
            {
                int idx = dash_offset + x;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    p[x] = static_cast<uint8_t>(color);
                if (d > 0) { cur_y += y_step; p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_step * pitch); d -= 2 * dx; }
                d += 2 * ady;
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            int row_step = y_step * (pitch / 2);
            for (int x = 0; x < dx; ++x)
            {
                int idx = dash_offset + x;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    p[x] = color;
                if (d > 0) { cur_y += y_step; p += row_step; d -= 2 * dx; }
                d += 2 * ady;
            }
        }
    }
    else
    {
        int dy = (y2 - y1 >= 0) ? (y2 - y1) : (y1 - y2);
        int adx = x2 - x1;
        int y_step = (y2 >= y1) ? pitch : -pitch;
        int d = 2 * adx - dy;
        int cur_x = 0;
        int y_count = dy;

        if (bpp == 1)
        {
            uint8_t* p = static_cast<uint8_t*>(buf);
            for (int i = 0; i <= y_count; ++i)
            {
                int idx = dash_offset + i;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    p[cur_x] = static_cast<uint8_t>(color);
                if (d > 0) { ++cur_x; d -= 2 * dy; }
                d += 2 * adx;
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_step);
            }
        }
        else
        {
            uint16_t* p = static_cast<uint16_t*>(buf);
            int row_step = y_step / 2;
            for (int i = 0; i <= y_count; ++i)
            {
                int idx = dash_offset + i;
                while (idx < 0) idx += 16;
                idx %= 16;
                if (stipple[idx])
                    p[cur_x] = color;
                if (d > 0) { ++cur_x; d -= 2 * dy; }
                d += 2 * adx;
                p += row_step;
            }
        }
    }

    Unlock();
    return true;
}

// --- XSurface rectangle / shape drawing (Batch C) ---

// IDA: 0x7BBAB0 -- XSurface::Fill (51B)
// vtable[6] 0x18 -- fill entire surface with single color
REVERSE(0x7bbab0, "XSurface::Fill: fill surface", "None")
bool XSurface::Fill(uint32_t color)
{
    RectangleStruct rect;
    GetRect(&rect);
    return FillRectEx(rect, rect, color);
}

// IDA: 0x7BADC0 -- XSurface::DrawRectEx (158B)
// vtable[21] 0x54 -- rectangle outline drawing 4 edges via DrawLineEx
REVERSE(0x7badc0, "XSurface::DrawRectEx: rect outline", "None")
bool XSurface::DrawRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& draw_rect,
    uint32_t color)
{
    Point2D tl(draw_rect.X, draw_rect.Y);
    Point2D tr(draw_rect.X + draw_rect.Width - 1, draw_rect.Y);
    Point2D br(draw_rect.X + draw_rect.Width - 1, draw_rect.Y + draw_rect.Height - 1);
    Point2D bl(draw_rect.X, draw_rect.Y + draw_rect.Height - 1);

    DrawLineEx(clip_rect, tl, tr, color);
    DrawLineEx(clip_rect, tl, bl, color);
    DrawLineEx(clip_rect, tr, br, color);
    DrawLineEx(clip_rect, bl, br, color);
    return true;
}

// IDA: 0x7BAD90 -- XSurface::DrawRect (43B)
// vtable[22] 0x58 -- DrawRectEx wrapper with surface-level clip
bool XSurface::DrawRect(const RectangleStruct& draw_rect, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return DrawRectEx(clip, draw_rect, color);
}

// IDA: 0x7BB350 -- XSurface::DrawEllipseOutline (1478B)
// vtable[8] 0x20 -- midpoint ellipse algorithm
bool XSurface::DrawEllipseOutline(
    const Point2D& center,
    int radius_w, int radius_h,
    const RectangleStruct& clip_rect,
    uint16_t color)
{
    int cx = center.X;
    int cy = center.Y;
    int a2 = radius_w * radius_w;
    int b2 = radius_h * radius_h;

    SetPixel(Point2D(cx, cy + radius_h), color);
    SetPixel(Point2D(cx, cy - radius_h), color);

    int y = radius_h;
    int x = 0;
    int d1 = b2 - a2 * radius_h + a2 / 4;
    int b2x2 = 0;

    while (2 * b2 * (x + 1) < 2 * a2 * (y - 1))
    {
        if (d1 < 0)
        {
            d1 += 2 * b2x2 + 3 * b2;
            ++x;
        }
        else
        {
            d1 += 2 * b2x2 - 2 * a2 * y + 3 * b2 + 2 * a2;
            ++x;
            --y;
        }
        b2x2 = 2 * b2 * x;

        SetPixel(Point2D(cx + x, cy + y), color);
        SetPixel(Point2D(cx - x, cy + y), color);
        SetPixel(Point2D(cx + x, cy - y), color);
        SetPixel(Point2D(cx - x, cy - y), color);
    }

    int a2y2 = 2 * a2 * y;
    int d2 = b2 * (x + 1) * (x + 1) + a2 * (y - 1) * (y - 1) - a2 * b2;

    while (y > 0)
    {
        if (d2 < 0)
        {
            d2 += 2 * b2 * (x + 1) - a2y2 + a2;
            ++x;
            --y;
        }
        else
        {
            d2 += a2 - a2y2;
            --y;
        }
        a2y2 = 2 * a2 * y;

        SetPixel(Point2D(cx + x, cy + y), color);
        SetPixel(Point2D(cx - x, cy + y), color);
        SetPixel(Point2D(cx + x, cy - y), color);
        SetPixel(Point2D(cx - x, cy - y), color);
    }

    SetPixel(Point2D(cx + radius_w, cy), color);
    SetPixel(Point2D(cx - radius_w, cy), color);

    Unlock();
    return true;
}

// IDA: 0x7BB020 — XSurface::FillRect (41B)
REVERSE(0x7BB020, "XSurface::FillRect: GetRect + FillRectEx wrapper", "None")
bool XSurface::FillRect(const RectangleStruct& draw_rect, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return FillRectEx(clip, draw_rect, color);
}

// --- DSurface line drawing (Batch D) ---

// ============================================================
// Static helpers for DrawGradientLine — 16-bit color packing
// ============================================================

// Pack RGB888 to 16-bit using DDraw pixel format globals.
// Shifts 8-bit channels down to surface bit depth, then to bit positions.
static uint16_t PackColor(uint8_t r, uint8_t g, uint8_t b)
{
    int mr = g_BitMask_Red,   mg = g_BitMask_Green,   mb = g_BitMask_Blue;
    int sr = g_BitShift_Red,  sg = g_BitShift_Green,  sb = g_BitShift_Blue;

    uint16_t rv = mr > 0 ? static_cast<uint16_t>((r >> (8 - mr)) << sr) : 0;
    uint16_t gv = mg > 0 ? static_cast<uint16_t>((g >> (8 - mg)) << sg) : 0;
    uint16_t bv = mb > 0 ? static_cast<uint16_t>((b >> (8 - mb)) << sb) : 0;
    return rv | gv | bv;
}

// Interpolate between two 16-bit packed colors by unpacking to RGB888,
// linearly interpolating per channel, and repacking.
// t is clamped to [0,1] range.
static uint16_t LerpColor(uint16_t a, uint16_t b, float t)
{
    int mr = g_BitMask_Red,   mg = g_BitMask_Green,   mb = g_BitMask_Blue;
    int sr = g_BitShift_Red,  sg = g_BitShift_Green,  sb = g_BitShift_Blue;

    // Extract a single channel from a 16-bit packed color, expand to 8-bit
    auto extract = [](uint16_t c, int shift, int bits) -> uint8_t {
        if (bits <= 0) return 0;
        int val = (c >> shift) & ((1 << bits) - 1);
        // Bit-replicate: 5-bit→8-bit: (v<<3)|(v>>2); 6-bit→8-bit: (v<<2)|(v>>4)
        return static_cast<uint8_t>((val << (8 - bits)) | (val >> (2 * bits - 8)));
    };

    uint8_t ar = extract(a, sr, mr);
    uint8_t ag = extract(a, sg, mg);
    uint8_t ab = extract(a, sb, mb);
    uint8_t br = extract(b, sr, mr);
    uint8_t bg = extract(b, sg, mg);
    uint8_t bb = extract(b, sb, mb);

    float inv = 1.0f - t;
    uint8_t lr = static_cast<uint8_t>(ar * inv + br * t + 0.5f);
    uint8_t lg = static_cast<uint8_t>(ag * inv + bg * t + 0.5f);
    uint8_t lb = static_cast<uint8_t>(ab * inv + bb * t + 0.5f);

    return PackColor(lr, lg, lb);
}

// IDA: 0x4BF750 -- DSurface::DrawGradientLine (1499B)
// vtable[36] 0x90 -- line with palette gradient interpolation
REVERSE(0x4BF750, "DSurface::DrawGradientLine: Line with palette gradient interpolation", "None")
bool DSurface::DrawGradientLine(
    const Point2D& start, const Point2D& end,
    int palette_idx, int fade_val,
    float* gradient_start, float* gradient_step)
{
    // --- Only 16bpp surfaces are supported ---
    if (GetBytesPerPixel() != 2)
        return false;

    // --- Get surface rect and clip it to itself ---
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &surf_rect, &surf_rect, nullptr, nullptr);

    // --- Adjust coordinates relative to clipped surface origin ---
    int sx = start.X + clipped.X;
    int sy = start.Y + clipped.Y;
    int ex = end.X + clipped.X;
    int ey = end.Y + clipped.Y;

    // --- Cohen-Sutherland line clipping ---
    int p1[2] = { sx, sy };
    int p2[2] = { ex, ey };
    if (!ClipLine(p1, p2, reinterpret_cast<int*>(&clipped)))
        return false;

    // --- Ensure start is left of end ---
    if (p1[0] > p2[0])
    {
        int tx = p1[0], ty = p1[1];
        p1[0] = p2[0]; p1[1] = p2[1];
        p2[0] = tx;     p2[1] = ty;
    }

    int x1 = p1[0], y1 = p1[1];
    int x2 = p2[0], y2 = p2[1];

    // --- Cast input colors to 16-bit ---
    uint16_t clr_start = static_cast<uint16_t>(palette_idx);
    uint16_t clr_end   = static_cast<uint16_t>(fade_val);

    // --- Lock surface at start pixel ---
    void* buf = Lock(x1, y1);
    if (!buf)
        return false;

    int  pitch  = GetPitch();
    auto* pixels = static_cast<uint16_t*>(buf);

    // --- Horizontal line ---
    if (y1 == y2)
    {
        int count = x2 - x1 + 1;
        for (int i = 0; i < count; ++i)
        {
            uint16_t pix = LerpColor(clr_start, clr_end, *gradient_step);
            pixels[i] = pix;

            // Bounce oscillator: advance t, cap to [0,1], flip direction
            float t = *gradient_start + *gradient_step;
            *gradient_step = t;
            if (t > 1.0f) { *gradient_step = 1.0f; *gradient_start = -*gradient_start; }
            if (t < 0.0f) { *gradient_step = 0.0f; *gradient_start = -*gradient_start; }
        }
        Unlock();
        return true;
    }

    // --- Vertical line ---
    if (x1 == x2)
    {
        int y_count = (y2 >= y1) ? (y2 - y1) : (y1 - y2);
        int y_step  = (y2 >= y1) ? pitch : -pitch;

        auto* p = pixels;
        for (int i = 0; i <= y_count; ++i)
        {
            *p = LerpColor(clr_start, clr_end, *gradient_step);

            // Bounce oscillator
            float t = *gradient_start + *gradient_step;
            *gradient_step = t;
            if (t > 1.0f) { *gradient_step = 1.0f; *gradient_start = -*gradient_start; }
            if (t < 0.0f) { *gradient_step = 0.0f; *gradient_start = -*gradient_start; }

            p = reinterpret_cast<uint16_t*>(reinterpret_cast<char*>(p) + y_step);
        }
        Unlock();
        return true;
    }

    // --- Bresenham angled line ---
    int dx    = x2 - x1;
    int dy    = y2 - y1;
    int step_y = 1;
    int abs_dy = dy;
    if (dy < 0) { abs_dy = -dy; step_y = -1; }

    if (dx >= abs_dy)
    {
        // x-major
        int d     = 2 * abs_dy - dx;
        int cur_x = 0;
        int row_step = step_y * (pitch / 2);

        auto* p = pixels;
        for (int j = 0; j <= dx; ++j)
        {
            p[cur_x] = LerpColor(clr_start, clr_end, *gradient_step);

            // Bounce oscillator
            float t = *gradient_start + *gradient_step;
            *gradient_step = t;
            if (t > 1.0f) { *gradient_step = 1.0f; *gradient_start = -*gradient_start; }
            if (t < 0.0f) { *gradient_step = 0.0f; *gradient_start = -*gradient_start; }

            if (d > 0)
            {
                d -= 2 * dx;
                p += row_step;
            }
            d += 2 * abs_dy;
            ++cur_x;
        }
    }
    else
    {
        // y-major
        int d       = 2 * dx - abs_dy;
        int cur_x   = 0;
        int y_step  = (y2 >= y1) ? pitch : -pitch;
        int count   = abs_dy + 1;

        auto* p = pixels;
        for (; count > 0; --count)
        {
            p[cur_x] = LerpColor(clr_start, clr_end, *gradient_step);

            // Bounce oscillator
            float t = *gradient_start + *gradient_step;
            *gradient_step = t;
            if (t > 1.0f) { *gradient_step = 1.0f; *gradient_start = -*gradient_start; }
            if (t < 0.0f) { *gradient_step = 0.0f; *gradient_start = -*gradient_start; }

            if (d > 0)
            {
                ++cur_x;
                d -= 2 * abs_dy;
            }
            d += 2 * dx;
            p = reinterpret_cast<uint16_t*>(reinterpret_cast<char*>(p) + y_step);
        }
    }

    Unlock();
    return true;
}

// ============================================================
// IDA: 0x4C0E30 -- DSurface::DrawStippledRect (1537B)
// vtable[20] 0x50 — stippled rectangle: draws a Bresenham line
// from top_left to bottom_right, gated by the stipple/Z-buffer.
// fill_interior=true  → draw where zbuf==0
// fill_interior=false → draw where zbuf!=0
// ============================================================
REVERSE(0x4C0E30, "DSurface::DrawStippledRect: Stippled rectangle with Z-buffer gating", "None")
bool DSurface::DrawStippledRect(
    const Point2D& top_left, const Point2D& bottom_right,
    uint16_t color, bool fill_interior)
{
    // 16bpp only
    if (GetBytesPerPixel() != 2)
        return false;

    // --- Get surface rect ---
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    // --- Adjust coordinates relative to surface origin ---
    int x1 = surf_rect.X + top_left.X;
    int y1 = surf_rect.Y + top_left.Y;
    int x2 = surf_rect.X + bottom_right.X;
    int y2 = surf_rect.Y + bottom_right.Y;

    // --- Clip line against surface rect ---
    int p1[2] = { x1, y1 };
    int p2[2] = { x2, y2 };
    int clip[4] = { surf_rect.X, surf_rect.Y, surf_rect.Width, surf_rect.Height };
    if (!ClipLine(p1, p2, clip))
        return false;

    x1 = p1[0]; y1 = p1[1];
    x2 = p2[0]; y2 = p2[1];

    // --- Ensure x1 <= x2 (swap if needed) ---
    if (x1 > x2)
    {
        int tx = x1, ty = y1;
        x1 = x2; y1 = y2;
        x2 = tx; y2 = ty;
    }

    // --- Access stipple/Z-buffer via StreamClass::ReadAndSeek ---
    DWORD* desc = (DWORD*)g_VisibleSurfaceDescriptor;
    WORD*  zbuf = (WORD*)ReadAndSeek(x1, y1 - (int)desc[1]);

    // --- Word pitch from descriptor; negate if going upward ---
    int wpitch = (int)desc[10];
    if (y1 > y2)
        wpitch = -wpitch;

    // --- Lock surface at start pixel ---
    void* locked = Lock(x1, y1);
    if (!locked)
        return false;

    WORD* pixels = (WORD*)locked;

    // --- Stipple buffer ring-wrap boundaries ---
    uintptr_t wrap_lo = (uintptr_t)desc[6];
    uintptr_t wrap_hi = (uintptr_t)desc[7];
    ptrdiff_t wrap_sz = (ptrdiff_t)desc[8];

    // --- Horizontal-line draw predicate ---
    // a5==true  → draw where zbuf==0
    // a5==false → draw where zbuf!=0
    auto draw_if = [fill_interior](WORD z) -> bool {
        return fill_interior ? (z == 0) : (z != 0);
    };

    // ================================================================
    // Branch on line orientation: horizontal / vertical / x-major / y-major
    // ================================================================

    if (y1 == y2)
    {
        // --- Horizontal line ---
        int count = x2 - x1;
        if (count < 0) { Unlock(); return false; }

        WORD* pix = pixels;
        WORD* zptr = zbuf;

        for (int i = 0; i <= count; ++i)
        {
            if (draw_if(*zptr))
                *pix = color;

            // Advance zbuf horizontally with ring-wrap
            ++zptr;
            uintptr_t za = (uintptr_t)zptr;
            if (wpitch <= 0)
            {
                if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
            }
            else
            {
                if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
            }
            ++pix;
        }
    }
    else if (x1 == x2)
    {
        // --- Vertical line ---
        int byte_pitch = GetPitch();
        int row_step   = (y2 >= y1) ? byte_pitch : -byte_pitch;
        int count      = (y2 >= y1) ? (y2 - y1) : (y1 - y2);

        WORD* pix  = pixels;
        WORD* zptr = zbuf;

        for (int i = 0; i <= count; ++i)
        {
            if (draw_if(*zptr))
                *pix = color;

            // Advance pixel by one row
            pix = (WORD*)((char*)pix + row_step);

            // Advance zbuf by one row with wrap
            zptr += wpitch;
            uintptr_t za = (uintptr_t)zptr;
            if (wpitch <= 0)
            {
                if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
            }
            else
            {
                if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
            }
        }
    }
    else
    {
        // --- Angled line: Bresenham ---
        int dx    = x2 - x1;
        int dy    = y2 - y1;
        int ady   = (dy >= 0) ? dy : -dy;
        int byte_pitch = GetPitch();

        if (dx >= ady)
        {
            // --- x-major ---
            int row_pitch = (dy >= 0) ? byte_pitch : -byte_pitch;
            int d         = 2 * ady - dx;
            int cur_col   = 0;
            WORD* pix     = pixels;
            WORD* zptr    = zbuf;

            for (int i = 0; i < dx; ++i)
            {
                if (draw_if(*zptr))
                    pix[cur_col] = color;

                if (d > 0)
                {
                    // Move to next row
                    pix   = (WORD*)((char*)pix + row_pitch);
                    zptr += wpitch;
                    if ((uintptr_t)zptr >= wrap_hi)
                        zptr = (WORD*)((char*)zptr - wrap_sz);
                    d    -= 2 * dx;
                    cur_col = 0;
                }
                d += 2 * ady;

                // Horizontal advance with wrap
                ++zptr;
                uintptr_t za = (uintptr_t)zptr;
                if (wpitch <= 0)
                {
                    if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
                }
                else
                {
                    if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
                }
                ++cur_col;
            }
        }
        else
        {
            // --- y-major ---
            int row_pitch = (dy >= 0) ? byte_pitch : -byte_pitch;
            int d         = 2 * dx - ady;
            int cur_col   = 0;
            WORD* pix     = pixels;
            WORD* zptr    = zbuf;

            for (int i = 0; i < ady; ++i)
            {
                if (draw_if(*zptr))
                    pix[cur_col] = color;

                if (d > 0)
                {
                    ++zptr;
                    cur_col += 2;
                    if ((uintptr_t)zptr >= wrap_hi)
                        zptr = (WORD*)((char*)zptr - wrap_sz);
                    d -= 2 * ady;
                }
                // Vertical advance with wrap
                zptr += wpitch;
                d    += 2 * dx;
                pix   = (WORD*)((char*)pix + row_pitch);

                uintptr_t za = (uintptr_t)zptr;
                if (wpitch <= 0)
                {
                    if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
                }
                else
                {
                    if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
                }
            }
        }
    }

    Unlock();
    return true;
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
bool DSurface::DrawDashedLineStipple(
    const Point2D& start, const Point2D& end,
    uint16_t color, const uint8_t stipple[16],
    int dash_offset, bool update_z)
{
    // 16bpp only
    if (GetBytesPerPixel() != 2)
        return false;

    // --- Read and optionally swap endpoints ---
    int x1 = start.X;
    int y1 = start.Y;
    int x2 = end.X;
    int y2 = end.Y;
    int step = 1;

    if (x1 > x2)
    {
        // Swap
        int tx = x1; x1 = x2; x2 = tx;
        int ty = y1; y1 = y2; y2 = ty;

        // Update dash_offset: advance by max(|dx|, |dy|+1) pixels
        int adx = x2 - x1;
        int ady = (y2 >= y1) ? (y2 - y1) : (y1 - y2);
        int larger = (adx > ady + 1) ? adx : (ady + 1);
        dash_offset = (larger + dash_offset) % 16;
        step = -1;
    }

    // --- Access stipple/Z-buffer ---
    DWORD* desc = (DWORD*)g_VisibleSurfaceDescriptor;
    WORD*  zbuf = (WORD*)ReadAndSeek(x1, y1 - (int)desc[1]);

    // --- Word pitch; negate if going upward ---
    int wpitch = (int)desc[10];
    if (y1 > y2)
        wpitch = -wpitch;

    // --- Lock surface ---
    void* locked = Lock(x1, y1);
    if (!locked)
        return false;

    WORD* pixels = (WORD*)locked;

    // --- Stipple ring-wrap boundaries ---
    uintptr_t wrap_lo = (uintptr_t)desc[6];
    uintptr_t wrap_hi = (uintptr_t)desc[7];
    ptrdiff_t wrap_sz = (ptrdiff_t)desc[8];

    // --- Running dash offset (int, tracked per pixel) ---
    int d_off = dash_offset;

    // --- Combined draw predicate ---
    // Normalize dash index to 0..15, combine with zbuf gate.
    auto should_draw = [&](int idx_raw, WORD zval) -> bool {
        // Normalize: ((idx % 16) + 16) % 16
        int i = idx_raw;
        if (i < 0)  i += 16;
        if (i >= 16) i -= 16;
        if (!stipple[i])
            return false;
        return update_z ? (zval == 0) : (zval != 0);
    };

    // ================================================================
    // Branch on line orientation
    // ================================================================

    if (y1 == y2)
    {
        // --- Horizontal ---
        int count = x2 - x1;
        if (count >= 0)
        {
            WORD* pix  = pixels;
            WORD* zptr = zbuf;

            for (int i = 0; i <= count; ++i)
            {
                if (should_draw(d_off, *zptr))
                    *pix = color;

                // Advance zbuf with wrap
                ++zptr;
                uintptr_t za = (uintptr_t)zptr;
                if (wpitch <= 0)
                {
                    if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
                }
                else
                {
                    if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
                }
                ++pix;
                d_off += step;
            }
        }
    }
    else if (x1 == x2)
    {
        // --- Vertical ---
        int byte_pitch = GetPitch();
        int row_step   = (y2 >= y1) ? byte_pitch : -byte_pitch;
        int count      = (y2 >= y1) ? (y2 - y1) : (y1 - y2);

        WORD* pix  = pixels;
        WORD* zptr = zbuf;

        for (int i = 0; i <= count; ++i)
        {
            if (should_draw(d_off, *zptr))
                *pix = color;

            // Advance pixel by one row
            pix = (WORD*)((char*)pix + row_step);

            // Advance zbuf by one row with wrap
            zptr += wpitch;
            uintptr_t za = (uintptr_t)zptr;
            if (wpitch <= 0)
            {
                if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
            }
            else
            {
                if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
            }
            d_off += step;
        }
    }
    else
    {
        // --- Bresenham angled line ---
        int dx    = x2 - x1;
        int dy    = y2 - y1;
        int ady   = (dy >= 0) ? dy : -dy;
        int byte_pitch = GetPitch();

        if (dx >= ady)
        {
            // --- x-major ---
            int row_pitch = (dy >= 0) ? byte_pitch : -byte_pitch;
            int d         = 2 * ady - dx;
            int cur_col   = 0;
            WORD* pix     = pixels;
            WORD* zptr    = zbuf;

            for (int i = 0; i < dx; ++i)
            {
                if (should_draw(d_off, *zptr))
                    pix[cur_col] = color;

                if (d > 0)
                {
                    // Move to next row
                    pix   = (WORD*)((char*)pix + row_pitch);
                    zptr += wpitch;
                    if ((uintptr_t)zptr >= wrap_hi)
                        zptr = (WORD*)((char*)zptr - wrap_sz);
                    d    -= 2 * dx;
                    cur_col = 0;
                }
                d += 2 * ady;

                // Horizontal advance with wrap
                ++zptr;
                uintptr_t za = (uintptr_t)zptr;
                if (wpitch <= 0)
                {
                    if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
                }
                else
                {
                    if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
                }
                ++cur_col;
                d_off += step;
            }
        }
        else
        {
            // --- y-major ---
            int row_pitch = (dy >= 0) ? byte_pitch : -byte_pitch;
            int d         = 2 * dx - ady;
            int cur_col   = 0;
            WORD* pix     = pixels;
            WORD* zptr    = zbuf;

            for (int i = 0; i < ady; ++i)
            {
                if (should_draw(d_off, *zptr))
                    pix[cur_col] = color;

                if (d > 0)
                {
                    ++zptr;
                    cur_col += 2;
                    if ((uintptr_t)zptr >= wrap_hi)
                        zptr = (WORD*)((char*)zptr - wrap_sz);
                    d -= 2 * ady;
                }
                // Vertical advance with wrap
                zptr += wpitch;
                d    += 2 * dx;
                pix   = (WORD*)((char*)pix + row_pitch);

                uintptr_t za = (uintptr_t)zptr;
                if (wpitch <= 0)
                {
                    if (za < wrap_lo) zptr = (WORD*)((char*)zptr + wrap_sz);
                }
                else
                {
                    if (za >= wrap_hi) zptr = (WORD*)((char*)zptr - wrap_sz);
                }
                d_off += step;
            }
        }
    }

    Unlock();
    return true;
}

// IDA: 0x4BFD30 -- DSurface::DrawLineZBuf (2583B)
// vtable[13] 0x34 -- line with Z-buffer check per pixel
bool DSurface::DrawLineZBuf(
    const Point2D& start, const Point2D& end,
    uint16_t color, int fade_start, int fade_end,
    bool update_z_buffer)
{
    (void)update_z_buffer;
    return XSurface::DrawLineEx(
        RectangleStruct{0, 0, Width, Height},
        start, end, color);
}

// IDA: 0x4BBCA0 -- DSurface::DrawLineModulated (2735B)
// vtable[14] 0x38 -- read-modify-write line per pixel
bool DSurface::DrawLineModulated(
    const Point2D& start, const Point2D& end,
    int mod_strength, int fade_start, int fade_end,
    bool update_z_buffer)
{
    (void)mod_strength; (void)fade_start; (void)fade_end; (void)update_z_buffer;
    return XSurface::DrawLineEx(
        RectangleStruct{0, 0, Width, Height},
        start, end, 0);
}

// IDA: 0x4BDF00 -- DSurface::DrawLineZBufColored (2754B)
// vtable[16] 0x40 -- Z-buffer line with RGB color + float brightness
bool DSurface::DrawLineZBufColored(
    const Point2D& start, const Point2D& end,
    const uint8_t src_rgb[3], float brightness,
    int fade_start, int fade_end)
{
    (void)src_rgb; (void)brightness; (void)fade_start; (void)fade_end;
    return XSurface::DrawLineEx(
        RectangleStruct{0, 0, Width, Height},
        start, end, 0);
}

// IDA: 0x4BC750 -- DSurface::DrawLineFaded (6064B)
// vtable[15] 0x3C -- line with fade gradient from start to end
bool DSurface::DrawLineFaded(
    const Point2D& start, const Point2D& end,
    const uint8_t* stipple_pattern,
    int fade_start, int fade_end,
    bool z_buffer, float gradient_start,
    float gradient_step, bool flip_dir)
{
    (void)stipple_pattern; (void)fade_start; (void)fade_end;
    (void)z_buffer; (void)gradient_start; (void)gradient_step; (void)flip_dir;
    return XSurface::DrawLineEx(
        RectangleStruct{0, 0, Width, Height},
        start, end, 0);
}

} // namespace gamemd
