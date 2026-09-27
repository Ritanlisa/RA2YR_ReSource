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
int DSurface::BlitWhole(class Surface* src, bool option1, bool option2, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  return XSurface::BlitWhole(src, option1, option2); /*0x4c1aa4*/
}
// 0x4bb080
bool DSurface::BlitPart(
{
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  v7 = *this; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = this->GetRect(v12, a5, a3, v8); /*0x4bb0b9*/
  return this->vt_entry_68(v9); /*0x4bb0c2*/
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
  _BYTE *v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  int v15; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // esi
  int v29; // eax
  bool v30; // cc
  int v31; // ebx
  int v32; // eax
  int v33; // edx
  int *v34; // edi
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  int v43; // [esp+1Ch] [ebp-84h] BYREF
  int v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h]
  int v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h]
  int v52; // [esp+40h] [ebp-60h]
  _DWORD v56[2]; // [esp+50h] [ebp-50h] BYREF
  int v57; // [esp+58h] [ebp-48h]
  int v58; // [esp+5Ch] [ebp-44h]
  int v71[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a2[2]; /*0x4bb0e1*/
  if ( v9 <= 0 || a2[3] <= 0 || a5[2] <= 0 || a5[3] <= 0 || a3[2] <= 0 || a3[3] <= 0 || a6[2] <= 0 || a6[3] <= 0 ) /*0x4bb14e*/
    return 0; /*0x4bb14e*/
  v10 = a4; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 132))(a4) /*0x4bb19d*/
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a4 + 108))(a4) == 1
    || (_BYTE)a7 == 1
    || (v11 = (*(int (__thiscall **)(_DWORD *))(*a4 + 112))(a4),
        v12 = this->vt_slot_112() == v11,
        v10 = a4,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( this->q018 == 1 && g_DDraw_Initialized == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!this->q019
     || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v10 + 132))(v10) == 1 && !v10[25])
    && a6[2] == a3[2]
    && a6[3] == a3[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !g_DDraw_Initialized && !g_DDraw_Active ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->u32_1C; /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v14 + 96))(this->u32_1C) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->u32_1C + 108))(this->u32_1C) /*0x4bb240*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->u32_1C + 96))(this->u32_1C) )
    {
      return 0; /*0x4bb245*/
    }
    v47 = this->q00C; /*0x4bb250*/
    if ( v47 > 0 ) /*0x4bb254*/
    {
      v15 = *this; /*0x4bb256*/
      this->q00C = 0; /*0x4bb25d*/
      this->Lock(0, 0); /*0x4bb264*/
      ++this->q00C; /*0x4bb26d*/
      this->Unlock(); /*0x4bb273*/
      this->q00C = v47; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return XSurface::BlitPart(a3, v10, a6, a7, 1); /*0x4bb2a2*/
  v17 = a3[1]; /*0x4bb2a7*/
  v18 = a3[2]; /*0x4bb2aa*/
  v52 = *a3; /*0x4bb2ad*/
  v19 = a3[3]; /*0x4bb2b1*/
  v17 = v17; /*0x4bb2b4*/
  v20 = *a6; /*0x4bb2b8*/
  v19 = v19; /*0x4bb2ba*/
  v21 = a6[2]; /*0x4bb2be*/
  v18 = v18; /*0x4bb2c1*/
  v22 = a6[1]; /*0x4bb2c5*/
  v20 = v20; /*0x4bb2c8*/
  v23 = a6[3]; /*0x4bb2cc*/
  v21 = v21; /*0x4bb2cf*/
  v22 = v22; /*0x4bb2d3*/
  v24 = *(_DWORD *)v10; /*0x4bb2d7*/
  v23 = v23; /*0x4bb2dd*/
  v25 = (int *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(v24 + 120))(v10, v56); /*0x4bb2e4*/
  v26 = 0; /*0x4bb2eb*/
  v27 = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *v25; /*0x4bb2f3*/
  v44 = v25[1]; /*0x4bb2fa*/
  v45 = v25[2]; /*0x4bb301*/
  v46 = v25[3]; /*0x4bb30f*/
  v48 = a5[2]; /*0x4bb318*/
  if ( v48 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v49 = a5[3]; /*0x4bb327*/
  if ( v49 <= 0 || v25[2] <= 0 || v25[3] <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = *a5; /*0x4bb352*/
  v30 = v43 < *a5; /*0x4bb354*/
  v50 = *a5; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v45 += v43 - v29; /*0x4bb364*/
    v43 = v50; /*0x4bb36c*/
  }
  if ( v45 < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  v47 = a5[1]; /*0x4bb38b*/
  if ( v44 < v47 ) /*0x4bb38f*/
  {
    v46 += v44 - v47; /*0x4bb399*/
    v44 = v47; /*0x4bb3a1*/
  }
  if ( v46 < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( v43 + v45 > v48 + v50 ) /*0x4bb3be*/
    v45 = v48 + v50 - v43; /*0x4bb3cc*/
  if ( v45 < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  v31 = v46; /*0x4bb3e5*/
  if ( v46 + v44 > v49 + v47 ) /*0x4bb3ed*/
    v31 = v49 + v47 - v44; /*0x4bb3f3*/
  if ( v31 < 1 ) /*0x4bb3f8*/
  {
  LABEL_53:
    v32 = 0; /*0x4bb40a*/
  }
  else
  {
    v32 = v43; /*0x4bb3fa*/
    v26 = v44; /*0x4bb3fe*/
    v27 = v45; /*0x4bb402*/
    v28 = v31; /*0x4bb406*/
  }
  v26 = v26; /*0x4bb40c*/
  v32 = v32; /*0x4bb414*/
  v27 = v27; /*0x4bb418*/
  v33 = *this; /*0x4bb41c*/
  v28 = v28; /*0x4bb426*/
  v34 = (int *)this->GetRect(v71); /*0x4bb439*/
  Rect::Set(0, 0, 0, 0); /*0x4bb43b*/
  v35 = *v34; /*0x4bb449*/
  v36 = a2[2]; /*0x4bb44b*/
  v37 = v34[1]; /*0x4bb450*/
  v38 = v34[2]; /*0x4bb453*/
  v57 = v38; /*0x4bb456*/
  v39 = v34[3]; /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v48 = a2[3]; /*0x4bb468*/
  if ( v48 <= 0 || v34[2] <= 0 || v34[3] <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a2; /*0x4bb483*/
  if ( v35 < *a2 ) /*0x4bb488*/
  {
    v38 += v35 - v40; /*0x4bb48c*/
    v35 = *a2; /*0x4bb48e*/
    v57 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v49 = a2[1]; /*0x4bb49e*/
  if ( v37 < v49 ) /*0x4bb4a2*/
  {
    v39 += v37 - v49; /*0x4bb4a6*/
    v37 = v49; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = v35 + v38 <= v40 + v36 ? v57 : v36 + v40 - v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( v39 + v37 > v49 + v48 ) /*0x4bb4d8*/
    v39 = v49 + v48 - v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
  LABEL_71:
    v35 = v43; /*0x4bb4e3*/
    v37 = v44; /*0x4bb4e7*/
    v41 = v45; /*0x4bb4eb*/
    v39 = v46; /*0x4bb4ef*/
  }
  v37 = v37; /*0x4bb4f3*/
  v41 = v41; /*0x4bb4f7*/
  v35 = v35; /*0x4bb513*/
  v39 = v39; /*0x4bb51a*/
  if ( (unsigned __int8)IntersectSurfaceRects(&v20, &v32) ) /*0x4bb521*/
  {
    v56[0] = v35 + v52; /*0x4bb544*/
    v56[1] = v37 + v17; /*0x4bb552*/
    v58 = v17 + v37 + v19; /*0x4bb56e*/
    v57 = v52 + v35 + v18; /*0x4bb576*/
    v43 = v32 + v20; /*0x4bb57d*/
    v44 = v26 + v22; /*0x4bb588*/
    v46 = v22 + v26 + v23; /*0x4bb5a0*/
    v45 = v20 + v32 + v21; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, _DWORD *, _DWORD, int *, int, _DWORD))(*(_DWORD *)this->u32_1C + 20))( /*0x4bb5d5*/
             this->u32_1C,
             v56,
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
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // eax
  int *v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // esi
  _DWORD v17[4]; // [esp+30h] [ebp-A4h] BYREF
  _DWORD v18[4]; // [esp+40h] [ebp-94h] BYREF
  char v19[16]; // [esp+60h] [ebp-74h] BYREF
  _DWORD v20[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->u32_1C && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !g_DDraw_UseHWBlit /*0x4bb675*/
      || this->IsLocked()
      || (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)this->u32_1C + 52))(this->u32_1C, 1) )
    {
      return XSurface::FillRectEx(a2, a3, a4); /*0x4bb81d*/
    }
    if ( g_DDraw_Initialized || g_DDraw_Active ) /*0x4bb690*/
    {
      v5 = this->u32_1C; /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 96))(this->u32_1C) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->u32_1C + 108))(this->u32_1C) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)this->u32_1C + 96))(this->u32_1C) )
      {
        v6 = this->q00C; /*0x4bb6cc*/
        if ( v6 > 0 ) /*0x4bb6d1*/
        {
          v7 = *this; /*0x4bb6d3*/
          this->q00C = 0; /*0x4bb6db*/
          this->Lock(0, 0); /*0x4bb6de*/
          ++this->q00C; /*0x4bb6e7*/
          this->Unlock(); /*0x4bb6ec*/
          this->q00C = v6; /*0x4bb6ef*/
        }
  LABEL_15:
        v8 = this->GetRect(v19); /*0x4bb6f2*/
        v9 = (_DWORD *)ClipRectIntersection(v8, 0, 0); /*0x4bb710*/
        v18[0] = *v9; /*0x4bb719*/
        v18[1] = v9[1]; /*0x4bb722*/
        v18[2] = v9[2]; /*0x4bb729*/
        v18[3] = v9[3]; /*0x4bb737*/
        v10 = (int *)ClipRectIntersection(v18, 0, 0); /*0x4bb76b*/
        v11 = *v10; /*0x4bb76d*/
        v12 = v10[1]; /*0x4bb773*/
        v13 = v10[2]; /*0x4bb77a*/
        v14 = v10[3]; /*0x4bb781*/
        if ( v13 > 0 && v14 > 0 ) /*0x4bb792*/
        {
          v15 = this->u32_1C; /*0x4bb79c*/
          v17[0] = v11; /*0x4bb79f*/
          v17[2] = v11 + v13; /*0x4bb7a3*/
          v17[3] = v12 + v14; /*0x4bb7a7*/
          v17[1] = v12; /*0x4bb7b6*/
          memset(v20, 0, sizeof(v20)); /*0x4bb7ba*/
          v20[20] = a4; /*0x4bb7c8*/
          v20[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v15 + 20))( /*0x4bb7f9*/
                   v15,
                   v17,
                   0,
                   0,
                   16778240,
                   v20) == 0;
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
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = this->GetRect(v6); /*0x4bb609*/
  return DSurface::FillRectEx(this, v4, fill_rect, color); /*0x4bb614*/
}
// 0x4bb830
bool DSurface::FillRectWithFlags(
{
  int *v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edi
  int v15; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // edi
  unsigned __int16 *v23; // eax
  int v24; // eax
  __int16 v25; // bp
  int v26; // ebx
  int v27; // [esp+10h] [ebp-5Ch]
  __int16 v28; // [esp+14h] [ebp-58h]
  __int16 v29; // [esp+18h] [ebp-54h]
  unsigned __int16 v31; // [esp+20h] [ebp-4Ch]
  unsigned int v32; // [esp+24h] [ebp-48h]
  int v33; // [esp+28h] [ebp-44h]
  unsigned int v34; // [esp+2Ch] [ebp-40h]
  __int16 i; // [esp+38h] [ebp-34h]
  _BYTE v36[16]; // [esp+3Ch] [ebp-30h] BYREF
  int v37; // [esp+4Ch] [ebp-20h]
  int v38; // [esp+50h] [ebp-1Ch]
  int v39; // [esp+54h] [ebp-18h]
  int v40; // [esp+58h] [ebp-14h]
  int v41; // [esp+70h] [ebp+4h]
  _WORD *v42; // [esp+74h] [ebp+8h]
  unsigned int v43; // [esp+78h] [ebp+Ch]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 112))(a1) < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( *(int *)(a3 + 8) <= 0 || *(int *)(a3 + 12) <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 120))(a1, v36); /*0x4bb87a*/
  v7 = (int *)ClipRectIntersection(a3, 0, 0); /*0x4bb888*/
  v37 = *v7; /*0x4bb891*/
  v38 = v7[1]; /*0x4bb898*/
  v39 = v7[2]; /*0x4bb89f*/
  v8 = v7[3]; /*0x4bb8a3*/
  v40 = v8; /*0x4bb8a8*/
  if ( v39 <= 0 || v8 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v9 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
  v29 = v9; /*0x4bb8f1*/
  v10 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
  v28 = v10; /*0x4bb908*/
  v32 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
  v11 = (_DWORD *)CellStruct::Copy(v36); /*0x4bb91b*/
  v33 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, *v11, v11[1]); /*0x4bb938*/
  if ( !v33 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v12 = a5; /*0x4bb94a*/
  if ( a5 > 0x64 ) /*0x4bb951*/
    v12 = 100; /*0x4bb953*/
  v13 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v12)) >> 32; /*0x4bb967*/
  v14 = 255 * v12 / 0x64u; /*0x4bb970*/
  v31 = 255 - v14; /*0x4bb97b*/
  v43 = v14; /*0x4bb983*/
  v41 = 0; /*0x4bb987*/
  IDA_LOWORD(a2) = (unsigned __int8)(a4[2] >> g_BitMask_Red); /*0x4bb99a*/
  IDA_LOWORD(v13) = (unsigned __int8)(a4[1] >> g_BitMask_Blue); /*0x4bb9b1*/
  v15 = v13 << g_BitMask_Green; /*0x4bb9b5*/
  v16 = v15 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
  IDA_LOWORD(v15) = (unsigned __int8)(*a4 >> g_BitShift_Green_0); /*0x4bb9ca*/
  v17 = (v15 << g_BitShift_Red) | v16; /*0x4bb9d2*/
  for ( i = v17; v41 < v40; ++v41 ) /*0x4bb9da*/
  {
    v27 = 0; /*0x4bb9ed*/
    v18 = v41 * ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1) / 2); /*0x4bb9fa*/
    if ( v39 > 0 ) /*0x4bba01*/
    {
      v9 = (unsigned __int16)v9; /*0x4bba0f*/
      v19 = (unsigned __int16)v10; /*0x4bba15*/
      v20 = v14 * (v10 & (unsigned __int16)v17); /*0x4bba23*/
      v21 = v14 * (unsigned __int16)(v17 & v9); /*0x4bba26*/
      v22 = v43 * (unsigned __int16)(v17 & v32); /*0x4bba4b*/
      v23 = (unsigned __int16 *)(v33 + 2 * v18); /*0x4bba50*/
      v34 = (unsigned __int16)v9; /*0x4bba53*/
      v42 = v23; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v24 = *v23; /*0x4bba68*/
        v25 = v28 & ((v20 + v31 * (v24 & v19)) >> 8) | v29 & ((v21 + v31 * (v24 & v9)) >> 8); /*0x4bba8b*/
        v26 = (unsigned __int16)(v24 & v32); /*0x4bba91*/
        v23 = v42 + 1; /*0x4bba9c*/
        *v42++ = ((v22 + (unsigned int)v31 * v26) >> 8) | v25; /*0x4bbaa8*/
        if ( ++v27 >= v39 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v9 = v34; /*0x4bba5d*/
      }
      IDA_LOWORD(v10) = v28; /*0x4bbabd*/
      IDA_LOWORD(v17) = i; /*0x4bbac1*/
      IDA_LOWORD(v9) = v29; /*0x4bbac5*/
      v14 = v43; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x4bbae8*/
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
  int v5; // esi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // esi
  _DWORD v11[27]; // [esp+28h] [ebp-6Ch] BYREF

  if ( !g_DDraw_Initialized && !g_DDraw_Active ) /*0x4bad99*/
    return 0; /*0x4bad99*/
  v4 = *(this + 7); /*0x4bad9f*/
  if ( v4 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 96))(*(this + 7)) == -2005532222 ) /*0x4badb1*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 108))(*(this + 7)) /*0x4badca*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 96))(*(this + 7)) )
    {
      return 0; /*0x4badcf*/
    }
    v5 = *(this + 3); /*0x4badd5*/
    if ( v5 > 0 ) /*0x4badda*/
    {
      v6 = *this; /*0x4baddc*/
      *(this + 3) = 0; /*0x4bade0*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v6 + 92))(this, 0, 0); /*0x4bade7*/
      ++*(this + 3); /*0x4badf0*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4badf5*/
      *(this + 3) = v5; /*0x4badf8*/
    }
  }
  if ( x >= 0 && y >= 0 ) /*0x4bae13*/
  {
    if ( *(this + 3) ) /*0x4bae19*/
    {
  LABEL_14:
      ++*(this + 3); /*0x4bae7c*/
      v9 = y * (*(int (__thiscall **)(int *))(*this + 116))(this); /*0x4bae90*/
      return x * (*(int (__thiscall **)(int *))(*this + 112))(this) + v9 + *(this + 5); /*0x4baeac*/
    }
    memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
    v7 = *(this + 7); /*0x4bae2f*/
    v11[0] = 108; /*0x4bae38*/
    if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
    {
      qmemcpy((void *)*(this + 8), v11, 0x6Cu); /*0x4bae59*/
      v8 = (_DWORD *)*(this + 8); /*0x4bae5b*/
      *(this + 4) = (unsigned int)(v8[21] + 7) >> 3; /*0x4bae67*/
      *((_BYTE *)this + 25) = (v8[26] & 0x4000) != 0; /*0x4bae73*/
      *(this + 5) = v8[9]; /*0x4bae79*/
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
  int v3; // edi
  int v4; // edx
  int v5; // eax
  int v6; // eax

  if ( g_DDraw_Initialized || g_DDraw_Active ) /*0x4baf54*/
  {
    v2 = *(this + 7); /*0x4baf56*/
    if ( v2 ) /*0x4baf5b*/
    {
      if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 96))(*(this + 7)) == -2005532222 /*0x4baf7d*/
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 108))(*(this + 7))
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 96))(*(this + 7)) )
      {
        v3 = *(this + 3); /*0x4baf84*/
        if ( v3 > 0 ) /*0x4baf89*/
        {
          v4 = *this; /*0x4baf8b*/
          *(this + 3) = 0; /*0x4baf93*/
          (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v4 + 92))(this, 0, 0); /*0x4baf96*/
          ++*(this + 3); /*0x4baf9f*/
          (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bafa4*/
          *(this + 3) = v3; /*0x4bafa7*/
        }
      }
    }
  }
  v5 = *(this + 3); /*0x4bafaa*/
  if ( v5 <= 0 ) /*0x4bafaf*/
    return 0; /*0x4bafd6*/
  v6 = v5 - 1; /*0x4bafb1*/
  *(this + 3) = v6; /*0x4bafb4*/
  if ( !v6 ) /*0x4bafb7*/
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 7) + 128))(*(this + 7), *(this + 5)); /*0x4bafc3*/
    *(this + 5) = 0; /*0x4bafc9*/
  }
  return 1; /*0x4bafd0*/
}
// 0x4baec0
int DSurface::CanLock(uint32_t /*unk1*/, uint32_t /*unk2*/)
{
  int v4; // eax
  _DWORD v6[27]; // [esp+4h] [ebp-6Ch] BYREF

  if ( !*(this + 3) ) /*0x4baec6*/
  {
    memset(v6, 0, sizeof(v6)); /*0x4baed9*/
    v4 = *(this + 7); /*0x4baedb*/
    v6[0] = 108; /*0x4baee6*/
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v4 + 100))(v4, 0, v6, 0, 0) ) /*0x4baef4*/
      return 0; /*0x4baf02*/
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 7) + 128))(*(this + 7), v6[9]); /*0x4baf10*/
  }
  return 1; /*0x4baefe*/
}
// 0x4baf20
BOOL __thiscall DSurface::CheckBltStatus(_DWORD **this)
{
  return (*(int (__stdcall **)(_DWORD, int))(*this->u32_1C + 52))(this->u32_1C, 1) == 0; /*0x4baf30*/
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
  int v5; // edi
  int v6; // ebx

  v4 = *this; /*0x4115f8*/
  ++this->LockCount; /*0x4115fb*/
  v5 = this->Buffer; /*0x4115fe*/
  v6 = x * this->GetBytesPerPixel(); /*0x411608*/
  return v6 + v5 + y * this->GetPitch(); /*0x41161b*/
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
  _WORD *v4; // edi

  v4 = (_WORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->q0242))(this, *point, point[1]); /*0x7baec6*/
  if ( !v4 ) /*0x7baeca*/
    return 0; /*0x7baf03*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) == 2 ) /*0x7baed6*/
    *v4 = color; /*0x7baedf*/
  else
    *(_BYTE *)v4 = color; /*0x7baef2*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7baee4*/
  return 1; /*0x7baee7*/
}
// 0x7bae60
int XSurface::GetPixel(const Point2D& point)
{
  int v3; // ebx
  _WORD *v4; // edi

  v3 = 0; /*0x7bae74*/
  v4 = (_WORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->q0242))(this, *point, point[1]); /*0x7bae79*/
  if ( v4 ) /*0x7bae7d*/
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) == 2 ) /*0x7bae89*/
    {
      IDA_LOWORD(v3) = *v4; /*0x7bae8d*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7bae92*/
      return v3; /*0x7bae9a*/
    }
    v3 = *(unsigned __int8 *)v4; /*0x7baea1*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x7baea5*/
  }
  return v3; /*0x7bae95*/
}
// 0x7baf90
int XSurface::PutPixel(const Point2D& point, uint16_t color, const RectangleStruct& clip_rect)
{
  int v5; // ecx
  int v6; // edx
  _WORD *v7; // esi

  if ( *point < *clip_rect ) /*0x7bafa2*/
    return 0; /*0x7bafa2*/
  if ( *point >= *clip_rect + clip_rect[2] ) /*0x7bafad*/
    return 0; /*0x7bafad*/
  v5 = point[1]; /*0x7bafaf*/
  v6 = clip_rect[1]; /*0x7bafb2*/
  if ( v5 < v6 ) /*0x7bafb7*/
    return 0; /*0x7bafb7*/
  if ( v5 >= v6 + clip_rect[3] ) /*0x7bafc0*/
    return 0; /*0x7bafc0*/
  v7 = (_WORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 92))(this, *point, point[1]); /*0x7bafcf*/
  if ( !v7 ) /*0x7bafd3*/
    return 0; /*0x7bb00c*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) == 2 ) /*0x7bafdf*/
    *v7 = color; /*0x7bafe8*/
  else
    *(_BYTE *)v7 = color; /*0x7baffb*/
  (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7bafed*/
  return 1; /*0x7baff0*/
}
// 0x7baf10
int XSurface::GetPixelAtCoords(const Point2D& point, const RectangleStruct& clip_rect)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  _WORD *v7; // esi

  v4 = 0; /*0x7baf19*/
  if ( *point >= *clip_rect && *point < *clip_rect + clip_rect[2] ) /*0x7baf30*/
  {
    v5 = point[1]; /*0x7baf32*/
    v6 = clip_rect[1]; /*0x7baf35*/
    if ( v5 >= v6 && v5 < v6 + clip_rect[3] ) /*0x7baf43*/
    {
      v7 = (_WORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)&this->q0242))(this, *point, point[1]); /*0x7baf50*/
      if ( v7 ) /*0x7baf54*/
      {
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) == 2 ) /*0x7baf60*/
        {
          IDA_LOWORD(v4) = *v7; /*0x7baf64*/
          (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7baf69*/
          return v4; /*0x7baf71*/
        }
        v4 = *(unsigned __int8 *)v7; /*0x7baf78*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7baf7c*/
      }
    }
  }
  return v4; /*0x7baf6c*/
}
// 0x7ba5e0
int XSurface::DrawLine(const Point2D& start, const Point2D& end, uint32_t color)
{
  int v5; // eax
  _BYTE v7[16]; // [esp+4h] [ebp-10h] BYREF

  v5 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q0300))(this, v7); /*0x7ba5fe*/
  return XSurface::DrawLineEx(this, v5, start, end, color); /*0x7ba609*/
}
// 0x7bbab0
int XSurface::Fill(uint32_t color)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  _BYTE v7[20]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v8[12]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *this; /*0x7bbabf*/
  v4 = this->GetRect(v7, color); /*0x7bbac5*/
  v5 = this->GetRect(v8, v4); /*0x7bbad2*/
  return this->FillRectEx(v5); /*0x7bbadb*/
}
// 0x7badc0
bool XSurface::DrawRectEx(
{
  int v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD v9[2]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+30h] [ebp-10h] BYREF
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
  (*(void (__thiscall **)(void *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)&this->q0104))(this, a2, v9, v10, a4); /*0x7bae17*/
  (*(void (__thiscall **)(void *, int, _DWORD *, int *, int))(*(_DWORD *)&this->q0104))(this, a2, v9, &v12, a4); /*0x7bae2a*/
  (*(void (__thiscall **)(void *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)&this->q0104))(this, a2, v10, v11, a4); /*0x7bae3d*/
  (*(void (__thiscall **)(void *, int, int *, _DWORD *, int))(*(_DWORD *)&this->q0104))(this, a2, &v12, v11, a4); /*0x7bae50*/
  return 1; /*0x7bae53*/
}
// IDA: 0x7BAD90 -- XSurface::DrawRect (43B)
// vtable[22] 0x58 -- DrawRectEx wrapper with surface-level clip
// 0x7bad90
int XSurface::DrawRect(const RectangleStruct& draw_rect, uint32_t color)
{
  int v4; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q0300))(this, v6); /*0x7bada9*/
  return XSurface::DrawRectEx(this, v4, draw_rect, color); /*0x7badb4*/
}
// 0x7bb020
int XSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
  int *v4; // eax
  _BYTE v6[16]; // [esp+4h] [ebp-10h] BYREF

  v4 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 120))(this, v6); /*0x7bb032*/
  return XSurface::FillRectEx(this, fill_rect, v4, color); /*0x7bb042*/
}
// 0x7bb050
bool XSurface::FillRectEx(
{
  void *v4; // edi
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // edx
  char v20; // dl
  int v21; // eax
  unsigned int v22; // ecx
  _WORD *v24; // edi
  int i; // ecx
  int v26; // eax
  int v27; // ebx
  int v30; // edx
  char *v32; // edi
  _WORD *v33; // eax
  int v36; // edx
  _WORD *v39; // eax
  bool v40; // zf
  _DWORD v43[10]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v46; // [esp+64h] [ebp-14h] BYREF
  int v47; // [esp+68h] [ebp-10h]
  char *v48; // [esp+6Ch] [ebp-Ch]
  signed int v49; // [esp+70h] [ebp-8h]
  int v52; // [esp+80h] [ebp+8h]
  int v53; // [esp+84h] [ebp+Ch]
  int v54; // [esp+88h] [ebp+10h]
  int v55; // [esp+88h] [ebp+10h]

  v4 = this; /*0x7bb05c*/
  v5 = a3[2]; /*0x7bb05e*/
  if ( v5 <= 0 ) /*0x7bb066*/
    return 0; /*0x7bb066*/
  if ( a3[3] <= 0 ) /*0x7bb071*/
    return 0; /*0x7bb071*/
  v6 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->q0300))(this, v43); /*0x7bb07f*/
  v7 = (_DWORD *)ClipRectIntersection(v6, 0, 0); /*0x7bb08f*/
  v43[4] = *v7; /*0x7bb096*/
  v43[5] = v7[1]; /*0x7bb09c*/
  v8 = *a3; /*0x7bb09f*/
  v43[6] = v7[2]; /*0x7bb0a4*/
  v9 = a3[1]; /*0x7bb0a7*/
  v43[7] = v7[3]; /*0x7bb0ad*/
  v10 = a2[1]; /*0x7bb0b2*/
  v46 = v8 + *a2; /*0x7bb0b7*/
  v11 = v9 + v10; /*0x7bb0bd*/
  v12 = a3[2]; /*0x7bb0c0*/
  v47 = v11; /*0x7bb0c3*/
  v13 = (_DWORD *)Rect::Construct(&v46, v12, a3[3]); /*0x7bb0cf*/
  v43[0] = *v13; /*0x7bb0d8*/
  v43[1] = v13[1]; /*0x7bb0e0*/
  v43[2] = v13[2]; /*0x7bb0e6*/
  v43[3] = v13[3]; /*0x7bb0f2*/
  v14 = (_DWORD *)ClipRectIntersection(v43, 0, 0); /*0x7bb0f9*/
  v43[8] = *v14; /*0x7bb100*/
  v43[9] = v14[1]; /*0x7bb106*/
  v15 = v14[2]; /*0x7bb109*/
  v15 = v15; /*0x7bb10c*/
  v16 = v14[3]; /*0x7bb10f*/
  v16 = v16; /*0x7bb114*/
  if ( v15 <= 0 ) /*0x7bb117*/
    return 0; /*0x7bb117*/
  if ( v16 <= 0 ) /*0x7bb11f*/
    return 0; /*0x7bb11f*/
  v16 = v16; /*0x7bb125*/
  v53 = (*(int (__thiscall **)(void *))(v4->q074)(v4); /*0x7bb132*/
  v17 = (_DWORD *)CellStruct::Copy(&v46); /*0x7bb139*/
  v18 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(v4->__pad_05C)(v4, *v17, v17[1]); /*0x7bb154*/
  v48 = (char *)v18; /*0x7bb158*/
  if ( !v18 ) /*0x7bb15b*/
    return 0; /*0x7bb333*/
  if ( (*(int (__thiscall **)(void *))(v4->q070)(v4) == 1 ) /*0x7bb16b*/
  {
    v52 = 0; /*0x7bb170*/
    if ( v16 > 0 ) /*0x7bb179*/
    {
      do /*0x7bb1b2*/
      {
        IDA_LOBYTE(v15) = a4; /*0x7bb185*/
        v20 = v15; /*0x7bb187*/
        IDA_BYTE1(v15) = a4; /*0x7bb189*/
        v21 = v15 << 16; /*0x7bb18f*/
        IDA_LOWORD(v21) = v15; /*0x7bb192*/
        v22 = v15 >> 2; /*0x7bb195*/
        memset32((void *)v18, v21, v15 >> 2); /*0x7bb198*/
        memset((void *)(v18 + 4 * v22), a4, v20 & 3); /*0x7bb19f*/
        v18 += v53; /*0x7bb1aa*/
        ++v52; /*0x7bb1af*/
      }
      while ( v52 < v16 ); /*0x7bb1b2*/
  LABEL_9:
      (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x7bb1b4*/
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
        v27 = v27; /*0x7bb263*/
        v49 = v27 >> 1; /*0x7bb267*/
        a4 = a4; /*0x7bb26a*/
        v30 = v27 & 1; /*0x7bb26f*/
        v48 = (char *)(a4 | (a4 << 16)); /*0x7bb277*/
        v54 = v16; /*0x7bb285*/
        do /*0x7bb2b8*/
        {
          *(_WORD *)v18 = a4; /*0x7bb28b*/
          v4 = v4; /*0x7bb291*/
          v49 = v49; /*0x7bb292*/
          v32 = (char *)(v18 + 2); /*0x7bb295*/
          if ( v49 > 0 ) /*0x7bb29b*/
          {
            memset32(v32, (int)v48, v49); /*0x7bb2a0*/
            v32 += 4 * v49; /*0x7bb2a0*/
          }
          v33 = v32; /*0x7bb2a2*/
          v4 = v4; /*0x7bb2a4*/
          if ( v30 ) /*0x7bb2a7*/
            *v33 = a4; /*0x7bb2a9*/
          v18 += v53; /*0x7bb2b2*/
          --v54; /*0x7bb2b5*/
        }
        while ( v54 ); /*0x7bb2b8*/
        goto LABEL_9; /*0x7bb2b8*/
      }
      v26 = v16; /*0x7bb237*/
      do /*0x7bb24e*/
      {
        *(_WORD *)v18 = a4; /*0x7bb248*/
        v18 += v53; /*0x7bb24b*/
        --v26; /*0x7bb24d*/
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
        v24 = (_WORD *)(v18 + 4 * ((unsigned int)v15 >> 1)); /*0x7bb202*/
        for ( i = v15 & 1; i; --i ) /*0x7bb204*/
          *v24++ = a4; /*0x7bb206*/
        v4 = this; /*0x7bb209*/
        v18 += v53; /*0x7bb212*/
        --v16; /*0x7bb215*/
      }
      while ( v16 ); /*0x7bb218*/
    }
  }
  else
  {
    v15 = v15; /*0x7bb2cf*/
    v49 = v15 >> 1; /*0x7bb2d3*/
    a4 = a4; /*0x7bb2d6*/
    v36 = v15 & 1; /*0x7bb2db*/
    v47 = a4 | (a4 << 16); /*0x7bb2e3*/
    v55 = v16; /*0x7bb2ed*/
    do /*0x7bb31a*/
    {
      v4 = v4; /*0x7bb2f0*/
      v49 = v49; /*0x7bb2f1*/
      v48 = v48; /*0x7bb2f4*/
      if ( v49 > 0 ) /*0x7bb2fa*/
      {
        memset32(v48, v47, v49); /*0x7bb2ff*/
        v48 += 4 * v49; /*0x7bb2ff*/
      }
      v39 = v48; /*0x7bb301*/
      v4 = v4; /*0x7bb303*/
      if ( v36 ) /*0x7bb306*/
        *v39 = a4; /*0x7bb308*/
      v18 += v53; /*0x7bb311*/
      v40 = v55 == 1; /*0x7bb313*/
      v48 = (char *)v18; /*0x7bb314*/
      --v55; /*0x7bb317*/
    }
    while ( !v40 ); /*0x7bb31a*/
    v4 = this; /*0x7bb31c*/
  }
  (*(void (__thiscall **)(void *))(v4->q060)(v4); /*0x7bb21e*/
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
  int v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h] BYREF
  int v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+28h] [ebp-14h]
  _BYTE v20[16]; // [esp+2Ch] [ebp-10h] BYREF

  v5 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 120))(this, v20); /*0x7bbb01*/
  v16 = *v5; /*0x7bbb0a*/
  v17 = v5[1]; /*0x7bbb13*/
  v18 = v5[2]; /*0x7bbb1c*/
  v6 = *src; /*0x7bbb20*/
  v7 = v5[3]; /*0x7bbb22*/
  v16 = 0; /*0x7bbb25*/
  v19 = v7; /*0x7bbb29*/
  v17 = 0; /*0x7bbb32*/
  v8 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(v6 + 120))(src, v20); /*0x7bbb36*/
  v12 = *v8; /*0x7bbb3b*/
  v13 = v8[1]; /*0x7bbb42*/
  v14 = v8[2]; /*0x7bbb49*/
  v9 = v8[3]; /*0x7bbb51*/
  v10 = *this; /*0x7bbb54*/
  v9 = v9; /*0x7bbb56*/
  v12 = 0; /*0x7bbb6d*/
  v13 = 0; /*0x7bbb71*/
  return this->BlitPart(&v16, src, &v12, option1, option2); /*0x7bbb78*/
}
// 0x4bf750
bool DSurface::DrawGradientLine(
{
  void *v8; // ebp
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // ecx
  _WORD *v13; // ebx
  unsigned __int8 v16; // dl
  double v17; // st7
  char v19; // c0
  int v21; // eax
  int v22; // eax
  int v24; // eax
  unsigned __int8 v25; // dl
  double v26; // st7
  char v28; // c0
  bool v29; // zf
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  int v34; // ebp
  int v36; // eax
  unsigned __int8 v37; // dl
  double v38; // st7
  char v40; // c0
  int v41; // ebx
  int v43; // ebp
  int v44; // eax
  unsigned __int8 v45; // dl
  double v46; // st7
  char v48; // c0
  int v50; // [esp+10h] [ebp-48h]
  int v51; // [esp+14h] [ebp-44h]
  int v52; // [esp+18h] [ebp-40h]
  int v53; // [esp+1Ch] [ebp-3Ch]
  int v54; // [esp+20h] [ebp-38h]
  int v55; // [esp+24h] [ebp-34h]
  int v56; // [esp+28h] [ebp-30h] BYREF
  int v57; // [esp+2Ch] [ebp-2Ch]
  int v58; // [esp+30h] [ebp-28h]
  int v59; // [esp+34h] [ebp-24h]
  _BYTE v60[16]; // [esp+38h] [ebp-20h] BYREF
  _WORD *v61; // [esp+5Ch] [ebp+4h]
  int i; // [esp+5Ch] [ebp+4h]
  int v64; // [esp+60h] [ebp+8h]
  int v65; // [esp+64h] [ebp+Ch]
  int v66; // [esp+64h] [ebp+Ch]
  __int16 v67; // [esp+74h] [ebp+1Ch]
  __int16 v68; // [esp+74h] [ebp+1Ch]
  __int16 v69; // [esp+74h] [ebp+1Ch]
  __int16 v70; // [esp+74h] [ebp+1Ch]

  v9 = (*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)&this->q0300))(this, v60); /*0x4bf766*/
  v10 = (int *)ClipRectIntersection(v9, 0, 0); /*0x4bf776*/
  v56 = *v10; /*0x4bf77d*/
  v57 = v10[1]; /*0x4bf784*/
  v58 = v10[2]; /*0x4bf78b*/
  v59 = v10[3]; /*0x4bf796*/
  v52 = v56 + *a3; /*0x4bf7a3*/
  v53 = v57 + a3[1]; /*0x4bf7a7*/
  v55 = v57 + a4[1]; /*0x4bf7b8*/
  v54 = v56 + *a4; /*0x4bf7c9*/
  if ( (unsigned __int8)ClipLine(&v56) ) /*0x4bf7cd*/
  {
    v52 = v52; /*0x4bf7da*/
    if ( v52 > v54 ) /*0x4bf7e4*/
    {
      v53 = v53; /*0x4bf7e6*/
      v52 = v54; /*0x4bf7ea*/
      v54 = v52; /*0x4bf7f2*/
      v53 = v55; /*0x4bf7f6*/
      v55 = v53; /*0x4bf7fa*/
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) == 2 ) /*0x4bf809*/
    {
      v13 = (_WORD *)(*(int (__thiscall **)(void *, int, int))(*(_DWORD *)&this->q0242))(this, v52, v53); /*0x4bf821*/
      v61 = v13; /*0x4bf825*/
      if ( v13 ) /*0x4bf829*/
      {
        if ( v53 == v55 ) /*0x4bf83a*/
        {
          for ( i = 0; i <= v54 - v52; ++i ) /*0x4bf852*/
          {
            v15 = Color::Lerp2(a5, a6, *a8); /*0x4bf874*/
            v67 = *(_WORD *)v15; /*0x4bf87f*/
            v16 = *(_BYTE *)(v15 + 2) >> g_BitMask_Red; /*0x4bf895*/
            IDA_LOWORD(v15) = (unsigned __int8)((unsigned __int8)IDA_HIBYTE(*(_WORD *)v15) >> g_BitMask_Blue); /*0x4bf8ab*/
            *v13 = ((unsigned __int8)((unsigned __int8)v67 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                 | (v15 << g_BitMask_Green)
                 | (v16 << g_BitShift_Blue);
            v17 = *a7 + *a8; /*0x4bf8d2*/
            *a8 = v17; /*0x4bf8da*/
            if ( v19 && *a7 < 0.0 ) /*0x4bf8f0*/
            {
              *a8 = 0.0; /*0x4bf8f4*/
            }
            else
            {
              if ( v17 <= 1.0 || *a7 <= 0.0 ) /*0x4bf916*/
                goto LABEL_15; /*0x4bf916*/
              *a8 = 1.0; /*0x4bf918*/
            }
            *a7 = -*a7; /*0x4bf922*/
  LABEL_15:
            ++v13; /*0x4bf924*/
          }
  LABEL_16:
          (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v52 == v54 ) /*0x4bf960*/
        {
          if ( v53 <= v55 ) /*0x4bf968*/
            v21 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4bf97b*/
          else
            v21 = -(*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4bf972*/
          v21 = v21; /*0x4bf982*/
          v22 = abs32(v55 - v53); /*0x4bf98f*/
          if ( v22 < 0 ) /*0x4bf991*/
            goto LABEL_16; /*0x4bf991*/
          v65 = v22 + 1; /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v24 = Color::Lerp2(a5, a6, *a8); /*0x4bf9b8*/
            v68 = *(_WORD *)v24; /*0x4bf9c3*/
            v25 = *(_BYTE *)(v24 + 2) >> g_BitMask_Red; /*0x4bf9d9*/
            IDA_LOWORD(v24) = (unsigned __int8)((unsigned __int8)IDA_HIBYTE(*(_WORD *)v24) >> g_BitMask_Blue); /*0x4bf9ef*/
            *v61 = ((unsigned __int8)((unsigned __int8)v68 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                 | (v24 << g_BitMask_Green)
                 | (v25 << g_BitShift_Blue);
            v26 = *a7 + *a8; /*0x4bfa1a*/
            *a8 = v26; /*0x4bfa22*/
            if ( v28 && *a7 < 0.0 ) /*0x4bfa38*/
            {
              *a8 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v26 <= 1.0 || *a7 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_30; /*0x4bfa5e*/
              *a8 = 1.0; /*0x4bfa60*/
            }
            *a7 = -*a7; /*0x4bfa6a*/
  LABEL_30:
            v29 = v65 == 1; /*0x4bfa6c*/
            v61 = (_WORD *)((char *)v61 + v21); /*0x4bfa7b*/
            --v65; /*0x4bfa7f*/
            if ( v29 ) /*0x4bfa83*/
              goto LABEL_16; /*0x4bfa83*/
          }
        }
        v30 = v54 - v52; /*0x4bfaa6*/
        v31 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4bfaae*/
        v64 = v31; /*0x4bfab3*/
        if ( v55 - v53 < 0 ) /*0x4bfab7*/
          v64 = -v31; /*0x4bfabb*/
        v50 = 2 * v30; /*0x4bfac7*/
        v32 = abs32(v55 - v53); /*0x4bfacb*/
        v66 = 2 * v32; /*0x4bfad2*/
        if ( v30 > v32 ) /*0x4bfad6*/
        {
          v33 = 0; /*0x4bfade*/
          v34 = 2 * v32 - v30; /*0x4bfae0*/
          if ( v30 < 0 ) /*0x4bfae4*/
          {
  LABEL_59:
            goto LABEL_16; /*0x4bfd08*/
          }
          while ( 1 ) /*0x4bfb06*/
          {
            v36 = Color::Lerp2(a5, a6, *a8); /*0x4bfb06*/
            v69 = *(_WORD *)v36; /*0x4bfb11*/
            v37 = *(_BYTE *)(v36 + 2) >> g_BitMask_Red; /*0x4bfb27*/
            IDA_LOWORD(v36) = (unsigned __int8)((unsigned __int8)IDA_HIBYTE(*(_WORD *)v36) >> g_BitMask_Blue); /*0x4bfb3d*/
            v61[v33] = ((unsigned __int8)((unsigned __int8)v69 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                     | (v36 << g_BitMask_Green)
                     | (v37 << g_BitShift_Blue);
            v38 = *a7 + *a8; /*0x4bfb69*/
            *a8 = v38; /*0x4bfb71*/
            if ( v40 && *a7 < 0.0 ) /*0x4bfb87*/
            {
              *a8 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v38 <= 1.0 || *a7 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_43; /*0x4bfbad*/
              *a8 = 1.0; /*0x4bfbaf*/
            }
            *a7 = -*a7; /*0x4bfbb9*/
  LABEL_43:
            if ( v34 > 0 ) /*0x4bfbbd*/
            {
              v34 -= v50; /*0x4bfbc9*/
              v61 = (_WORD *)((char *)v61 + v64); /*0x4bfbcb*/
            }
            v34 += v66; /*0x4bfbd7*/
            if ( ++v33 > v54 - v52 ) /*0x4bfbdc*/
            {
              (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v41 = 2 * v30 - v32; /*0x4bfbfa*/
        if ( v32 < 0 ) /*0x4bfbfe*/
          goto LABEL_16; /*0x4bfbfe*/
        v43 = 0; /*0x4bfc0c*/
        v51 = v32 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v44 = Color::Lerp2(a5, a6, *a8); /*0x4bfc27*/
          v70 = *(_WORD *)v44; /*0x4bfc32*/
          v45 = *(_BYTE *)(v44 + 2) >> g_BitMask_Red; /*0x4bfc48*/
          IDA_LOWORD(v44) = (unsigned __int8)((unsigned __int8)IDA_HIBYTE(*(_WORD *)v44) >> g_BitMask_Blue); /*0x4bfc5e*/
          v61[v43] = ((unsigned __int8)((unsigned __int8)v70 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                   | (v44 << g_BitMask_Green)
                   | (v45 << g_BitShift_Blue);
          v46 = *a7 + *a8; /*0x4bfc8a*/
          *a8 = v46; /*0x4bfc92*/
          if ( v48 && *a7 < 0.0 ) /*0x4bfca8*/
          {
            *a8 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v46 <= 1.0 || *a7 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_56; /*0x4bfcce*/
            *a8 = 1.0; /*0x4bfcd0*/
          }
          *a7 = -*a7; /*0x4bfcda*/
  LABEL_56:
          if ( v41 > 0 ) /*0x4bfcde*/
          {
            ++v43; /*0x4bfce4*/
            v41 -= v66; /*0x4bfce7*/
          }
          v41 += v50; /*0x4bfcf1*/
          v29 = v51 == 1; /*0x4bfcf9*/
          v61 = (_WORD *)((char *)v61 + v64); /*0x4bfcfa*/
          --v51; /*0x4bfcfe*/
          if ( v29 ) /*0x4bfd02*/
            goto LABEL_59; /*0x4bfd02*/
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
  int v9; // ecx
  int v10; // esi
  _WORD *v13; // esi
  int v14; // edx
  _WORD *v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  _WORD *v19; // ebp
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // edi
  int v31; // edx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  _WORD *v36; // ecx
  _DWORD *v37; // eax
  int v38; // ecx
  int v39; // eax
  _WORD *v40; // ebp
  int v41; // edx
  _DWORD *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  _DWORD *v50; // eax
  int v53; // edx
  _DWORD *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v59; // [esp+10h] [ebp-38h]
  _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h]
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h]
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  int v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)&this->q0300))(this, v62); /*0x4c0e55*/
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
  if ( !(unsigned __int8)ClipLine(&v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( v63 <= v65 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v64 = v64; /*0x4c0ec3*/
    v63 = v63; /*0x4c0ec7*/
    v9 = v65; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = v65; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    v65 = v63; /*0x4c0ed7*/
    v66 = v64; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (_WORD *)StreamClass::ReadAndSeek(v9, v12 - *((_DWORD *)g_VisibleSurfaceDescriptor + 1)); /*0x4c0f01*/
  v71 = *((_DWORD *)g_VisibleSurfaceDescriptor + 10); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*((_DWORD *)g_VisibleSurfaceDescriptor + 10); /*0x4c0f18*/
  v72 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)&this->q0242))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = (_WORD *)v72; /*0x4c0f61*/
        v16 = g_VisibleSurfaceDescriptor; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = g_VisibleSurfaceDescriptor; /*0x4c0f7b*/
          }
          if ( v71 <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
              v13 = (_WORD *)((char *)v13 + v16[8]); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
          {
            v13 = (_WORD *)((char *)v13 - v16[8]); /*0x4c0f8e*/
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
        v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0fef*/
      else
        v17 = -(*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = (_WORD *)v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = g_VisibleSurfaceDescriptor; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = g_VisibleSurfaceDescriptor; /*0x4c1024*/
          }
          v13 += v71; /*0x4c102b*/
          if ( v71 <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
              v13 = (_WORD *)((char *)v13 + v21[8]); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
          {
            v13 = (_WORD *)((char *)v13 - v21[8]); /*0x4c1035*/
          }
          v19 = (_WORD *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c1069*/
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
          v32 = g_VisibleSurfaceDescriptor; /*0x4c1130*/
          v25 = v25; /*0x4c113a*/
          v72 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              *(_WORD *)(v34 + v72) = a4; /*0x4c1155*/
              v32 = g_VisibleSurfaceDescriptor; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              v34 += 2; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v72 += v73; /*0x4c1182*/
            if ( v71 <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                v13 = (_WORD *)((char *)v13 + v32[8]); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
            {
              v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c118d*/
            }
            if ( !--v25 ) /*0x4c11a3*/
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
          v29 = g_VisibleSurfaceDescriptor; /*0x4c10a5*/
          v72 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              *(_WORD *)(v72 + 2 * v27) = a4; /*0x4c10b9*/
              v29 = g_VisibleSurfaceDescriptor; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v72 += v73; /*0x4c10ca*/
              v13 += v71; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( v71 <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                v13 = (_WORD *)((char *)v13 + v29[8]); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
            {
              v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10f4*/
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
      v36 = (_WORD *)v72; /*0x4c11d0*/
      v37 = g_VisibleSurfaceDescriptor; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = g_VisibleSurfaceDescriptor; /*0x4c11ea*/
        }
        if ( v71 <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
            v13 = (_WORD *)((char *)v13 + v37[8]); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
        {
          v13 = (_WORD *)((char *)v13 - v37[8]); /*0x4c11fd*/
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
      v38 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c125e*/
    else
      v38 = -(*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = (_WORD *)v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = g_VisibleSurfaceDescriptor; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = g_VisibleSurfaceDescriptor; /*0x4c1293*/
        }
        v13 += v71; /*0x4c129a*/
        if ( v71 <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
            v13 = (_WORD *)((char *)v13 + v42[8]); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
        {
          v13 = (_WORD *)((char *)v13 - v42[8]); /*0x4c12a4*/
        }
        v40 = (_WORD *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c12d9*/
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
        v54 = g_VisibleSurfaceDescriptor; /*0x4c139b*/
        v47 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            *(_WORD *)(v55 + v72) = a4; /*0x4c13b5*/
            v54 = g_VisibleSurfaceDescriptor; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            v55 += 2; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 += v46; /*0x4c13e5*/
          v13 += v71; /*0x4c13ef*/
          if ( v71 <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
              v13 = (_WORD *)((char *)v13 + v54[8]); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
          {
            v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13f9*/
          }
          --v47; /*0x4c140b*/
        }
        while ( v47 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = g_VisibleSurfaceDescriptor; /*0x4c1315*/
        v72 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            *(_WORD *)(v72 + 2 * v49) = a4; /*0x4c1329*/
            v50 = g_VisibleSurfaceDescriptor; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v72 += v59; /*0x4c133a*/
            v13 += v71; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
              v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( v71 <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
              v13 = (_WORD *)((char *)v13 + v50[8]); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
          {
            v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c1363*/
          }
          v48 += v74; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x4c1386*/
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
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  _WORD *v18; // esi
  _DWORD *v19; // edx
  int v20; // ecx
  _WORD *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  _WORD *v28; // edi
  _WORD *v29; // eax
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // esi
  _DWORD *v37; // ecx
  int v38; // edx
  _WORD *v39; // eax
  int v40; // edx
  int v41; // esi
  _DWORD *v42; // edx
  int v43; // ebx
  _WORD *v44; // ecx
  int v45; // eax
  int v46; // ebx
  int v47; // ebx
  _WORD *v48; // esi
  _DWORD *v49; // edx
  int v50; // ecx
  _WORD *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  _DWORD *v56; // edx
  int v57; // ecx
  _WORD *v58; // edi
  _WORD *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  int v65; // edi
  int v66; // esi
  _DWORD *v67; // ecx
  int v68; // edx
  _WORD *v69; // eax
  int v70; // edx
  int v71; // esi
  _DWORD *v72; // edx
  _WORD *v73; // ecx
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  _WORD *v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int v88; // [esp+38h] [ebp+8h]
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
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C2))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( v7 > v9 ) /*0x4c078d*/
  {
    v7 = v7; /*0x4c078f*/
    v8 = v8; /*0x4c0791*/
    v7 = v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v8; /*0x4c079b*/
    v9 = v9; /*0x4c079d*/
    v9 = v7; /*0x4c079f*/
    v15 = abs32(v9 - v7); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = -1; /*0x4c07d3*/
  }
  v77 = (_WORD *)StreamClass::ReadAndSeek(v7, v8 - *((_DWORD *)g_VisibleSurfaceDescriptor + 1)); /*0x4c07f3*/
  v87 = *((_DWORD *)g_VisibleSurfaceDescriptor + 10); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*((_DWORD *)g_VisibleSurfaceDescriptor + 10); /*0x4c080b*/
  v88 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)&this->q0242))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = (_WORD *)v88; /*0x4c0842*/
          v19 = g_VisibleSurfaceDescriptor; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = g_VisibleSurfaceDescriptor; /*0x4c0882*/
            }
            if ( v87 <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                v21 = (_WORD *)((char *)v21 + v19[8]); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
            {
              v21 = (_WORD *)((char *)v21 - v19[8]); /*0x4c089a*/
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
          v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c08dd*/
        else
          v24 = -(*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = g_VisibleSurfaceDescriptor; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = (_WORD *)v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = g_VisibleSurfaceDescriptor; /*0x4c0930*/
            }
            v28 = (_WORD *)((char *)v28 + v24); /*0x4c0936*/
            v29 += v87; /*0x4c0938*/
            if ( v87 <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                v29 = (_WORD *)((char *)v29 + v26[8]); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
            {
              v29 = (_WORD *)((char *)v29 - v26[8]); /*0x4c0944*/
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
      v33 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0975*/
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
          v37 = g_VisibleSurfaceDescriptor; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *(_WORD *)(v88 + 2 * v35) = a4; /*0x4c09eb*/
              v37 = g_VisibleSurfaceDescriptor; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 += v79; /*0x4c0a08*/
              v39 += v87; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = v90; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( v87 <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                v39 = (_WORD *)((char *)v39 + v37[8]); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
            {
              v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a3a*/
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
        v42 = g_VisibleSurfaceDescriptor; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = v77; /*0x4c0a7c*/
        v34 = v34; /*0x4c0a84*/
        v88 = v88; /*0x4c0a88*/
        v91 = 0; /*0x4c0a8c*/
        do
        {
          v46 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(_BYTE *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(_WORD *)(v88 + v91) = a4; /*0x4c0abc*/
            v42 = g_VisibleSurfaceDescriptor; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            v91 += 2; /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
              v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += v87; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v88 += v79; /*0x4c0af3*/
          if ( v87 <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
              v44 = (_WORD *)((char *)v44 + v42[8]); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
          {
            v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0afe*/
          }
          v43 = v76 + v46; /*0x4c0b0f*/
          --v34; /*0x4c0b16*/
        }
        while ( v34 );
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
          v48 = (_WORD *)v88; /*0x4c0b35*/
          v49 = g_VisibleSurfaceDescriptor; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = g_VisibleSurfaceDescriptor; /*0x4c0b75*/
            }
            if ( v87 <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                v51 = (_WORD *)((char *)v51 + v49[8]); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
            {
              v51 = (_WORD *)((char *)v51 - v49[8]); /*0x4c0b8d*/
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
          v54 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0bd0*/
        else
          v54 = -(*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = g_VisibleSurfaceDescriptor; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = (_WORD *)v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = g_VisibleSurfaceDescriptor; /*0x4c0c23*/
            }
            v58 = (_WORD *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += v87; /*0x4c0c2b*/
            if ( v87 <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                v59 = (_WORD *)((char *)v59 + v56[8]); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
            {
              v59 = (_WORD *)((char *)v59 - v56[8]); /*0x4c0c37*/
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
      v63 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q02C6))(this); /*0x4c0c68*/
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
          v67 = g_VisibleSurfaceDescriptor; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *(_WORD *)(v88 + 2 * v65) = a4; /*0x4c0cde*/
              v67 = g_VisibleSurfaceDescriptor; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 += v80; /*0x4c0cfb*/
              v69 += v87; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = v93; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( v87 <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                v69 = (_WORD *)((char *)v69 + v67[8]); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
            {
              v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d2d*/
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
        v72 = g_VisibleSurfaceDescriptor; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = v77; /*0x4c0d6f*/
        v64 = v64; /*0x4c0d77*/
        v88 = v88; /*0x4c0d7b*/
        v94 = 0; /*0x4c0d7f*/
        do
        {
          v75 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(_BYTE *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(_WORD *)(v88 + v94) = a4; /*0x4c0daf*/
            v72 = g_VisibleSurfaceDescriptor; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            v94 += 2; /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
              v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += v87; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v88 += v80; /*0x4c0de6*/
          if ( v87 <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
              v73 = (_WORD *)((char *)v73 + v72[8]); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
          {
            v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0df1*/
          }
          v43 = v76 + v75; /*0x4c0e02*/
          --v64; /*0x4c0e09*/
        }
        while ( v64 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
  LABEL_155:
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->q0246))(this); /*0x4c0e17*/
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
  int v9; // eax
  int *v10; // eax
  int v11; // esi
  int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // ebp
  unsigned int v18; // esi
  int v19; // edi
  int v20; // esi
  unsigned int v21; // ebp
  double v22; // st7
  double v23; // st7
  int v24; // eax
  unsigned int v25; // eax
  double v26; // st7
  int v27; // eax
  double v28; // st6
  double v29; // st7
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ebp
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // ebx
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ebp
  _DWORD *v46; // edx
  _DWORD *v47; // ebp
  int v48; // eax
  int v49; // edx
  int v50; // eax
  _WORD *v51; // eax
  _WORD *v52; // eax
  int v54; // ebx
  _DWORD *v55; // edx
  _DWORD *v56; // ebp
  int v57; // eax
  int v58; // edx
  _WORD *v59; // eax
  _WORD *v60; // eax
  int v61; // eax
  int v62; // ebp
  _DWORD *v63; // edx
  _DWORD *v64; // ecx
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  _WORD *v68; // eax
  _WORD *v69; // eax
  int v70; // [esp+1Ch] [ebp-64h]
  int v71; // [esp+20h] [ebp-60h]
  int v72; // [esp+20h] [ebp-60h]
  int v73; // [esp+20h] [ebp-60h]
  int v74; // [esp+24h] [ebp-5Ch]
  int v75; // [esp+28h] [ebp-58h]
  int v76; // [esp+2Ch] [ebp-54h]
  int v77; // [esp+30h] [ebp-50h]
  int v78; // [esp+30h] [ebp-50h]
  int v79; // [esp+34h] [ebp-4Ch]
  int v80; // [esp+38h] [ebp-48h]
  double v81; // [esp+3Ch] [ebp-44h]
  int v82; // [esp+3Ch] [ebp-44h]
  int v83; // [esp+3Ch] [ebp-44h]
  _DWORD v84[5]; // [esp+4Ch] [ebp-34h] BYREF
  unsigned __int64 v85; // [esp+60h] [ebp-20h]
  unsigned __int64 v86; // [esp+68h] [ebp-18h]
  int v87; // [esp+70h] [ebp-10h] BYREF
  int v88; // [esp+74h] [ebp-Ch]
  int v89; // [esp+78h] [ebp-8h]
  int v90; // [esp+7Ch] [ebp-4h]
  int v91; // [esp+84h] [ebp+4h]
  int v92; // [esp+88h] [ebp+8h]
  int v93; // [esp+88h] [ebp+8h]
  int v94; // [esp+8Ch] [ebp+Ch]
  int v95; // [esp+8Ch] [ebp+Ch]
  int v96; // [esp+8Ch] [ebp+Ch]
  int v97; // [esp+94h] [ebp+14h]
  int v98; // [esp+98h] [ebp+18h]
  int v99; // [esp+98h] [ebp+18h]

  v84[0] = a1; /*0x4bfd3e*/
  v9 = (*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a1 + 120))(&v84[1]); /*0x4bfd42*/
  v10 = (int *)ClipRectIntersection(v9, 0, 0); /*0x4bfd52*/
  v11 = *v10; /*0x4bfd59*/
  v87 = *v10; /*0x4bfd5b*/
  v12 = v10[1]; /*0x4bfd5f*/
  v88 = v12; /*0x4bfd62*/
  v89 = v10[2]; /*0x4bfd69*/
  v13 = v10[3]; /*0x4bfd6d*/
  v90 = v13; /*0x4bfd72*/
  if ( !v89 && !v13 ) /*0x4bfd7a*/
    return 0; /*0x4bfd7a*/
  IDA_LODWORD(v16) = v11 + *a4; /*0x4bfd92*/
  v14 = v11 + *a5; /*0x4bfd94*/
  v15 = a7; /*0x4bfd99*/
  IDA_HIDWORD(v16) = v12 + a4[1]; /*0x4bfda0*/
  v17 = v16; /*0x4bfda2*/
  v18 = v12 + a5[1]; /*0x4bfda4*/
  v19 = a8; /*0x4bfda6*/
  v85 = v16; /*0x4bfdaf*/
  v86 = IDA___PAIR64__(v18, v14); /*0x4bfdb7*/
  if ( (int)v16 > v14 ) /*0x4bfdbf*/
  {
    v17 = v14; /*0x4bfdc1*/
    v15 = a8; /*0x4bfdc3*/
    v19 = a7; /*0x4bfdc5*/
    v85 = IDA___PAIR64__(v18, v14); /*0x4bfdcc*/
    v86 = v16; /*0x4bfdd4*/
  }
  *(_QWORD *)&v84[1] = v86; /*0x4bfde8*/
  v20 = v17; /*0x4bfded*/
  v21 = IDA_HIDWORD(v85); /*0x4bfdef*/
  if ( !(unsigned __int8)ClipLine(&v87) ) /*0x4bfdff*/
    return 0; /*0x4bfe06*/
  v92 = v19; /*0x4bfe1a*/
  v98 = v15; /*0x4bfe1e*/
  if ( v86 != *(_QWORD *)&v84[1] ) /*0x4bfe25*/
  {
    v22 = Math::Sqrt( /*0x4bfe5d*/
            (double)(int)(v21 - IDA_HIDWORD(v86)) * (double)(int)(v21 - IDA_HIDWORD(v86))
          + (double)(v20 - (int)v86) * (double)(v20 - (int)v86));
    v81 = (double)(int)Math::RoundToInt(v22); /*0x4bfe95*/
    v23 = Math::Sqrt((double)(int)(v21 - v84[2]) * (double)(int)(v21 - v84[2]) + (double)(v20 - v84[1]) /*0x4bfeaa*/
                                                                               * (double)(v20 - v84[1]));
    v24 = Math::RoundToInt(v23); /*0x4bfeb2*/
    v25 = abs32(Math::RoundToInt(v81 / (double)v24 * (double)(v15 - v19))); /*0x4bfee5*/
    if ( v15 >= v19 ) /*0x4bfee9*/
      v92 = v15 - v25; /*0x4bfef7*/
    else
      v92 = v15 + v25; /*0x4bfeed*/
  }
  if ( v85 == IDA___PAIR64__(v21, v20) ) /*0x4bff05*/
    goto LABEL_14; /*0x4bff05*/
  v26 = Math::Sqrt( /*0x4bff3f*/
          (double)(IDA_HIDWORD(v85) - v84[2]) * (double)(IDA_HIDWORD(v85) - v84[2])
        + (double)((int)v85 - v84[1]) * (double)((int)v85 - v84[1]));
  v27 = Math::RoundToInt(v26); /*0x4bff44*/
  v82 = v20 - v84[1]; /*0x4bff56*/
  v28 = (double)(int)(v21 - v84[2]); /*0x4bff68*/
  *(double *)&v84[1] = (double)v27; /*0x4bff73*/
  v29 = Math::Sqrt(v28 * v28 + (double)v82 * (double)v82); /*0x4bff88*/
  v30 = Math::RoundToInt(v29); /*0x4bff90*/
  v31 = abs32(Math::RoundToInt(*(double *)&v84[1] / (double)v30 * (double)(v15 - v19))); /*0x4bffc3*/
  if ( v19 <= v15 ) /*0x4bffc7*/
  {
    v98 = v19 + v31; /*0x4bffd1*/
  LABEL_14:
    v32 = v98; /*0x4bffd8*/
    goto LABEL_15; /*0x4bffd8*/
  }
  v32 = v19 - v31; /*0x4bffcb*/
  LABEL_15:
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 112))(v84[0]); /*0x4bffdf*/
  v33 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v84[0] + 92))(v84[0], v85, IDA_HIDWORD(v85)); /*0x4c0001*/
  v97 = v33; /*0x4c0005*/
  if ( !g_ZBufferDescriptor ) /*0x4c000c*/
    return 0; /*0x4c000c*/
  v34 = *((_DWORD *)g_ZBufferDescriptor + 1); /*0x4c0016*/
  v84[2] = IDA_HIDWORD(v85); /*0x4c001d*/
  v35 = (_WORD *)Audio::GetSamplePosition(v85, IDA_HIDWORD(v85) - v34); /*0x4c0034*/
  v36 = *((_DWORD *)g_VisibleSurfaceDescriptor + 1); /*0x4c003a*/
  v84[2] = IDA_HIDWORD(v85); /*0x4c003d*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v85, IDA_HIDWORD(v85) - v36); /*0x4c004e*/
  v76 = -1; /*0x4c0055*/
  IDA_LOWORD(v38) = *((_WORD *)g_ZBufferDescriptor + 2) + *((_WORD *)g_ZBufferDescriptor + 18); /*0x4c0061*/
  v91 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x4c0068*/
  v99 = v32 + v38 - IDA_HIDWORD(v85) - v88; /*0x4c0076*/
  if ( !v33 ) /*0x4c007d*/
    return 0; /*0x4c073e*/
  IDA_LOBYTE(v84[1]) = (unsigned __int8)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
  IDA_BYTE1(v84[1]) = (unsigned __int8)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
  v39 = IDA_HIDWORD(v86) - IDA_HIDWORD(v85); /*0x4c00ce*/
  IDA_BYTE2(v84[1]) = (unsigned __int8)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
  v79 = IDA_LOBYTE(v84[1]); /*0x4c00e3*/
  v80 = IDA_BYTE1(v84[1]); /*0x4c00f0*/
  v83 = IDA_BYTE2(v84[1]); /*0x4c00fd*/
  v94 = v86 - v85; /*0x4c010b*/
  v40 = v92 - v32; /*0x4c011a*/
  v41 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 116))(v84[0]); /*0x4c011c*/
  v75 = v41; /*0x4c0121*/
  if ( v39 < 0 ) /*0x4c0125*/
  {
    v75 = -v41; /*0x4c0129*/
    v91 = -v91; /*0x4c0133*/
    v76 = 1; /*0x4c0137*/
  }
  v74 = 1; /*0x4c0141*/
  v42 = abs32(v39); /*0x4c014e*/
  if ( v40 < 0 ) /*0x4c0152*/
    v74 = -1; /*0x4c0154*/
  v93 = 2 * v42; /*0x4c0164*/
  v43 = abs32(v40); /*0x4c0168*/
  v44 = 2 * v94; /*0x4c0173*/
  v77 = 2 * v94; /*0x4c0179*/
  v70 = 2 * v43; /*0x4c017d*/
  if ( v43 <= v94 || v43 <= v42 ) /*0x4c0189*/
  {
    if ( v94 <= v42 ) /*0x4c0375*/
    {
      v62 = v44 - v42; /*0x4c0559*/
      v84[1] = 2 * v43 - v42; /*0x4c055f*/
      if ( v42 > 0 ) /*0x4c0563*/
      {
        v63 = g_VisibleSurfaceDescriptor; /*0x4c0569*/
        v73 = v42; /*0x4c056f*/
        v64 = g_ZBufferDescriptor; /*0x4c0573*/
        v96 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v65 = v99; /*0x4c0584*/
          v66 = (unsigned __int16)*v37; /*0x4c0590*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c058b*/
          {
            if ( v66 == 127 ) /*0x4c05a4*/
            {
              *(_WORD *)(v96 + v97) = a6; /*0x4c0627*/
            }
            else
            {
              v65 = v99; /*0x4c05f2*/
              *(_WORD *)(v96 + v97) = ((v83 * v66) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                    | ((v80 * v66) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                    | ((v79 * v66) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            }
            if ( a9 ) /*0x4c0634*/
              *v35 = v65; /*0x4c0636*/
            v64 = g_ZBufferDescriptor; /*0x4c0639*/
            v63 = g_VisibleSurfaceDescriptor; /*0x4c063f*/
          }
          if ( v62 > 0 ) /*0x4c0647*/
          {
            ++v35; /*0x4c0650*/
            v96 += 2; /*0x4c0656*/
            if ( (unsigned int)v35 >= v64[7] ) /*0x4c0662*/
              v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c0664*/
            if ( (unsigned int)++v37 >= v63[7] ) /*0x4c066f*/
              v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0671*/
            v62 -= v93; /*0x4c0674*/
          }
          v67 = v84[1]; /*0x4c0678*/
          if ( v84[1] > 0 ) /*0x4c067e*/
          {
            v99 = v74 + v65; /*0x4c0684*/
            v67 = v84[1] - v93; /*0x4c068f*/
          }
          v62 += v77; /*0x4c0695*/
          v84[1] = v70 + v67; /*0x4c06a4*/
          v97 += v75; /*0x4c06ae*/
          v35 += v91; /*0x4c06bc*/
          if ( v91 <= 0 ) /*0x4c06c0*/
          {
            v68 = v35; /*0x4c06cf*/
            if ( (unsigned int)v35 < v64[6] ) /*0x4c06d3*/
              v68 = (_WORD *)((char *)v35 + v64[8]); /*0x4c06d8*/
            v35 = v68; /*0x4c06da*/
          }
          else if ( (unsigned int)v35 >= v64[7] ) /*0x4c06c5*/
          {
            v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c06c7*/
          }
          v99 += v76; /*0x4c06e9*/
          v37 += v91; /*0x4c06f7*/
          if ( v91 <= 0 ) /*0x4c06fb*/
          {
            v69 = v37; /*0x4c070a*/
            if ( (unsigned int)v37 < v63[6] ) /*0x4c070e*/
              v69 = (_WORD *)((char *)v37 + v63[8]); /*0x4c0713*/
            v37 = v69; /*0x4c0715*/
          }
          else if ( (unsigned int)v37 >= v63[7] ) /*0x4c0700*/
          {
            v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0702*/
          }
          --v73; /*0x4c071c*/
        }
        while ( v73 ); /*0x4c0720*/
      }
    }
    else
    {
      v54 = v93 - v94; /*0x4c038a*/
      v72 = 0; /*0x4c038e*/
      v78 = v70 - v94; /*0x4c0398*/
      if ( v94 > 0 ) /*0x4c039c*/
      {
        v55 = g_ZBufferDescriptor; /*0x4c03a2*/
        v56 = g_VisibleSurfaceDescriptor; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v57 = (unsigned __int16)*v37; /*0x4c03bb*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c03b6*/
          {
            if ( v57 == 127 ) /*0x4c03cf*/
              IDA_LOWORD(v58) = a6; /*0x4c0423*/
            else
              v58 = ((v83 * v57) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                  | ((v80 * v57) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v79 * v57) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(_WORD *)(v97 + 2 * v72) = v58; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *v35 = v99; /*0x4c044d*/
            v55 = g_ZBufferDescriptor; /*0x4c0450*/
            v56 = g_VisibleSurfaceDescriptor; /*0x4c0456*/
          }
          if ( v54 > 0 ) /*0x4c045e*/
          {
            v97 += v75; /*0x4c046d*/
            v54 -= 2 * v94; /*0x4c047e*/
            v35 += v91; /*0x4c0487*/
            if ( v91 <= 0 ) /*0x4c048b*/
            {
              v59 = v35; /*0x4c049a*/
              if ( (unsigned int)v35 < v55[6] ) /*0x4c049c*/
                v59 = (_WORD *)((char *)v35 + v55[8]); /*0x4c04a1*/
              v35 = v59; /*0x4c04a3*/
            }
            else if ( (unsigned int)v35 >= v55[7] ) /*0x4c0490*/
            {
              v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c0492*/
            }
            v37 += v91; /*0x4c04a9*/
            v99 += v76; /*0x4c04ab*/
            if ( v91 <= 0 ) /*0x4c04b8*/
            {
              v60 = v37; /*0x4c04c7*/
              if ( (unsigned int)v37 < v56[6] ) /*0x4c04cb*/
                v60 = (_WORD *)((char *)v37 + v56[8]); /*0x4c04d0*/
              v37 = v60; /*0x4c04d2*/
            }
            else if ( (unsigned int)v37 >= v56[7] ) /*0x4c04bd*/
            {
              v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c04bf*/
            }
          }
          v61 = v78; /*0x4c04d4*/
          if ( v78 > 0 ) /*0x4c04da*/
          {
            v99 += v74; /*0x4c04e9*/
            v61 = v78 - 2 * v94; /*0x4c04fe*/
          }
          ++v35; /*0x4c0504*/
          v54 += v93; /*0x4c0507*/
          v78 = v70 + v61; /*0x4c050f*/
          if ( (unsigned int)v35 >= v55[7] ) /*0x4c0518*/
            v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c051a*/
          if ( (unsigned int)++v37 >= v56[7] ) /*0x4c0525*/
            v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c0527*/
          ++v72; /*0x4c0538*/
        }
        while ( v72 < v94 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v45 = v93 - v43; /*0x4c0195*/
    v71 = v44 - v43; /*0x4c019b*/
    if ( v43 > 0 ) /*0x4c019f*/
    {
      v46 = g_ZBufferDescriptor; /*0x4c01a5*/
      v47 = g_VisibleSurfaceDescriptor; /*0x4c01ab*/
      v95 = 0; /*0x4c01b1*/
      v84[1] = v43; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v48 = (unsigned __int16)*v37; /*0x4c01cd*/
        if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c01c8*/
        {
          if ( v48 == 127 ) /*0x4c01e1*/
            IDA_LOWORD(v49) = a6; /*0x4c0235*/
          else
            v49 = ((v83 * v48) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                | ((v80 * v48) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                | ((v79 * v48) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
          *(_WORD *)(v95 + v97) = v49; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *v35 = v99; /*0x4c0262*/
          v46 = g_ZBufferDescriptor; /*0x4c0265*/
          v47 = g_VisibleSurfaceDescriptor; /*0x4c026b*/
        }
        if ( v45 > 0 ) /*0x4c0273*/
        {
          v45 -= v70; /*0x4c0286*/
          v50 = v91; /*0x4c0288*/
          v97 += v75; /*0x4c028c*/
          v35 += v91; /*0x4c0296*/
          if ( v91 <= 0 ) /*0x4c029a*/
          {
            v51 = v35; /*0x4c02a9*/
            if ( (unsigned int)v35 < v46[6] ) /*0x4c02ab*/
              v51 = (_WORD *)((char *)v35 + v46[8]); /*0x4c02b0*/
            v35 = v51; /*0x4c02b2*/
            v50 = v91; /*0x4c02b4*/
          }
          else if ( (unsigned int)v35 >= v46[7] ) /*0x4c029f*/
          {
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c02a1*/
          }
          v37 += v91; /*0x4c02b8*/
          if ( v50 <= 0 ) /*0x4c02bc*/
          {
            v52 = v37; /*0x4c02cb*/
            if ( (unsigned int)v37 < v47[6] ) /*0x4c02cf*/
              v52 = (_WORD *)((char *)v37 + v47[8]); /*0x4c02d4*/
            v37 = v52; /*0x4c02d6*/
          }
          else if ( (unsigned int)v37 >= v47[7] ) /*0x4c02c1*/
          {
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c02c3*/
          }
          v99 += v76; /*0x4c02e5*/
        }
        if ( v71 > 0 ) /*0x4c02f2*/
        {
          ++v35; /*0x4c02fb*/
          v95 += 2; /*0x4c0301*/
          if ( (unsigned int)v35 >= v46[7] ) /*0x4c030d*/
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c030f*/
          if ( (unsigned int)++v37 >= v47[7] ) /*0x4c031a*/
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c031c*/
          v71 -= v70; /*0x4c0323*/
        }
        v99 += v74; /*0x4c0338*/
        v71 += v77; /*0x4c0349*/
        v45 += v93; /*0x4c0351*/
        --v84[1]; /*0x4c0354*/
      }
      while ( v84[1] ); /*0x4c0358*/
    }
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 96))(v84[0]); /*0x4c0364*/
  return 1; /*0x4c0367*/
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
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  int v22; // eax
  unsigned int v23; // eax
  double v24; // st7
  int v25; // eax
  double v26; // st6
  double v27; // st7
  int v28; // eax
  unsigned int v29; // eax
  int v30; // ebx
  int v31; // esi
  int v32; // ebp
  int v33; // ecx
  int v34; // ebp
  int v35; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  int v42; // edx
  int v43; // ebp
  _DWORD *v44; // esi
  unsigned __int16 v45; // ax
  int v46; // edx
  int v47; // eax
  int v48; // esi
  int v49; // edi
  _WORD *v50; // eax
  int v51; // edx
  _WORD *v52; // ecx
  int v53; // ecx
  _WORD *v54; // eax
  bool v55; // zf
  _DWORD *v57; // edx
  unsigned __int16 v58; // ax
  int v59; // edx
  int v60; // eax
  int v61; // esi
  int v62; // esi
  _WORD *v63; // eax
  _WORD *v64; // ecx
  int v65; // ecx
  _WORD *v66; // eax
  _DWORD *v67; // esi
  unsigned __int16 v68; // ax
  int v69; // edx
  int v70; // eax
  int v71; // esi
  int v72; // edx
  _WORD *v73; // eax
  int v74; // ecx
  int v75; // edi
  _WORD *v76; // eax
  _WORD *v77; // ecx
  int v78; // [esp+1Ch] [ebp-68h]
  int v79; // [esp+20h] [ebp-64h]
  int v80; // [esp+24h] [ebp-60h]
  int v81; // [esp+28h] [ebp-5Ch]
  int v82; // [esp+2Ch] [ebp-58h]
  int v83; // [esp+30h] [ebp-54h]
  int v84; // [esp+34h] [ebp-50h]
  int v85; // [esp+34h] [ebp-50h]
  int v86; // [esp+34h] [ebp-50h]
  _DWORD v87[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v88; // [esp+40h] [ebp-44h] BYREF
  int v89; // [esp+44h] [ebp-40h]
  _DWORD v90[5]; // [esp+50h] [ebp-34h] BYREF
  __int64 v91; // [esp+64h] [ebp-20h]
  __int64 v92; // [esp+6Ch] [ebp-18h]
  int v93; // [esp+74h] [ebp-10h] BYREF
  int v94; // [esp+78h] [ebp-Ch]
  int v95; // [esp+7Ch] [ebp-8h]
  int v96; // [esp+80h] [ebp-4h]
  int v97; // [esp+88h] [ebp+4h]
  int v98; // [esp+88h] [ebp+4h]
  int v99; // [esp+8Ch] [ebp+8h]
  int v100; // [esp+90h] [ebp+Ch]
  int v101; // [esp+90h] [ebp+Ch]
  int v102; // [esp+90h] [ebp+Ch]
  int v103; // [esp+90h] [ebp+Ch]
  int v104; // [esp+98h] [ebp+14h]
  int v105; // [esp+98h] [ebp+14h]
  _WORD *v106; // [esp+9Ch] [ebp+18h]

  v9 = *a1; /*0x4bbca3*/
  v90[0] = a1; /*0x4bbcae*/
  v10 = (*(int (__stdcall **)(_DWORD *))(v9 + 120))(&v90[1]); /*0x4bbcb2*/
  v11 = (int *)ClipRectIntersection(v10, 0, 0); /*0x4bbcc2*/
  v12 = *v11; /*0x4bbcc9*/
  v93 = *v11; /*0x4bbccb*/
  v13 = v11[1]; /*0x4bbccf*/
  v94 = v13; /*0x4bbcd2*/
  v95 = v11[2]; /*0x4bbcd9*/
  v14 = v11[3]; /*0x4bbcdd*/
  v96 = v14; /*0x4bbce2*/
  if ( v95 || v14 ) /*0x4bbcea*/
  {
    IDA_LODWORD(v16) = v12 + *a4; /*0x4bbd08*/
    IDA_LODWORD(v18) = v12 + *a5; /*0x4bbd0a*/
    v15 = a8; /*0x4bbd0c*/
    IDA_HIDWORD(v16) = v13 + a4[1]; /*0x4bbd13*/
    v17 = v16; /*0x4bbd15*/
    IDA_HIDWORD(v18) = v13 + a5[1]; /*0x4bbd17*/
    v19 = a7; /*0x4bbd19*/
    v91 = v16; /*0x4bbd22*/
    v92 = v18; /*0x4bbd2a*/
    if ( (int)v16 > (int)v18 ) /*0x4bbd32*/
    {
      v17 = v18; /*0x4bbd34*/
      v19 = a8; /*0x4bbd36*/
      v15 = a7; /*0x4bbd38*/
      v91 = v18; /*0x4bbd3f*/
      v92 = v16; /*0x4bbd47*/
    }
    *(_QWORD *)&v90[1] = v92; /*0x4bbd5b*/
    v20 = v17; /*0x4bbd60*/
    v21 = IDA_HIDWORD(v91); /*0x4bbd62*/
    if ( (unsigned __int8)ClipLine(&v93) ) /*0x4bbd72*/
    {
      v100 = v15; /*0x4bbd8d*/
      v104 = v19; /*0x4bbd94*/
      if ( v92 != *(_QWORD *)&v90[1] ) /*0x4bbd9b*/
      {
        v87[0] = v20 - v92; /*0x4bbdb3*/
        v87[1] = v21 - IDA_HIDWORD(v92); /*0x4bbdb7*/
        v88 = v20 - v90[1]; /*0x4bbdc7*/
        v89 = v21 - v90[2]; /*0x4bbdcb*/
        v97 = Vector::2DMagnitudeMath(&v88); /*0x4bbddc*/
        v22 = Vector::2DMagnitudeMath(v87); /*0x4bbde0*/
        v23 = abs32(Math::RoundToInt((double)v22 / (double)v97 * (double)(v19 - v15))); /*0x4bbe13*/
        if ( v19 >= v15 ) /*0x4bbe17*/
          v100 = v19 - v23; /*0x4bbe28*/
        else
          v100 = v19 + v23; /*0x4bbe1b*/
      }
      if ( v91 != IDA___PAIR64__(v21, v20) ) /*0x4bbe39*/
      {
        v88 = v91 - v90[1]; /*0x4bbe52*/
        v89 = IDA_HIDWORD(v91) - v90[2]; /*0x4bbe56*/
        v24 = Math::Sqrt( /*0x4bbe73*/
                (double)((int)v91 - v90[1]) * (double)((int)v91 - v90[1])
              + (double)(IDA_HIDWORD(v91) - v90[2]) * (double)(IDA_HIDWORD(v91) - v90[2]));
        v25 = Math::RoundToInt(v24); /*0x4bbe78*/
        v88 = v20 - v90[1]; /*0x4bbe90*/
        v89 = v21 - v90[2]; /*0x4bbe94*/
        v26 = (double)(int)(v20 - v90[1]); /*0x4bbe9c*/
        *(double *)&v90[1] = (double)v25; /*0x4bbea7*/
        v27 = Math::Sqrt(v26 * v26 + (double)v89 * (double)v89); /*0x4bbebc*/
        v28 = Math::RoundToInt(v27); /*0x4bbec4*/
        v29 = abs32(Math::RoundToInt(*(double *)&v90[1] / (double)v28 * (double)(v19 - v15))); /*0x4bbef7*/
        if ( v15 <= v19 ) /*0x4bbefb*/
          v104 = v15 + v29; /*0x4bbf0a*/
        else
          v104 = v15 - v29; /*0x4bbeff*/
      }
      v30 = v90[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 112))(v90[0]); /*0x4bbf19*/
      v31 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v30 + 92))(v30, v91, IDA_HIDWORD(v91)); /*0x4bbf33*/
      v98 = v31; /*0x4bbf37*/
      if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
      {
        v32 = *((_DWORD *)g_ZBufferDescriptor + 1); /*0x4bbf45*/
        v90[2] = IDA_HIDWORD(v91); /*0x4bbf4c*/
        v106 = (_WORD *)Audio::GetSamplePosition(v91, IDA_HIDWORD(v91) - v32); /*0x4bbf5d*/
        v83 = -1; /*0x4bbf6d*/
        IDA_LOWORD(v33) = *((_WORD *)g_ZBufferDescriptor + 2) + *((_WORD *)g_ZBufferDescriptor + 18); /*0x4bbf79*/
        v99 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x4bbf80*/
        v34 = v104; /*0x4bbf8b*/
        v105 = v104 + v33 - IDA_HIDWORD(v91) - v94; /*0x4bbf96*/
        if ( v31 ) /*0x4bbf9d*/
        {
          v35 = IDA_HIDWORD(v92) - IDA_HIDWORD(v91); /*0x4bbfb6*/
          v36 = v92 - v91; /*0x4bbfba*/
          v84 = v92 - v91; /*0x4bbfc0*/
          v37 = v100 - v34; /*0x4bbfc4*/
          v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 116))(v30); /*0x4bbfc6*/
          v82 = v38; /*0x4bbfcb*/
          if ( v35 < 0 ) /*0x4bbfcf*/
          {
            v82 = -v38; /*0x4bbfd3*/
            v99 = -v99; /*0x4bbfe0*/
            v83 = 1; /*0x4bbfe7*/
          }
          v78 = 1; /*0x4bbff6*/
          v39 = abs32(v35); /*0x4bc000*/
          if ( v37 < 0 ) /*0x4bc004*/
            v78 = -1; /*0x4bc006*/
          v40 = 2 * v39; /*0x4bc010*/
          v79 = 2 * v39; /*0x4bc016*/
          v41 = abs32(v37); /*0x4bc01a*/
          v42 = 2 * v36; /*0x4bc01c*/
          v80 = 2 * v36; /*0x4bc021*/
          v43 = 2 * v41; /*0x4bc025*/
          v81 = 2 * v41; /*0x4bc028*/
          if ( v41 > v36 && v41 > v39 ) /*0x4bc034*/
          {
            v87[0] = v40 - v41; /*0x4bc03e*/
            v85 = v42 - v41; /*0x4bc048*/
            if ( v41 > 0 ) /*0x4bc04c*/
            {
              v44 = g_ZBufferDescriptor; /*0x4bc052*/
              v101 = 0; /*0x4bc058*/
              v88 = v41; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc075*/
                {
                  v45 = *(_WORD *)(v101 + v98); /*0x4bc092*/
                  IDA_LOBYTE(v90[1]) = (unsigned __int8)(v45 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                  IDA_BYTE1(v90[1]) = (unsigned __int8)(v45 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                  IDA_BYTE2(v90[1]) = (unsigned __int8)(v45 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                  v46 = ((a6 * IDA_LOBYTE(v90[1])) >> 8) + IDA_LOBYTE(v90[1]); /*0x4bc0f7*/
                  v47 = ((a6 * IDA_BYTE2(v90[1])) >> 8) + IDA_BYTE2(v90[1]); /*0x4bc11e*/
                  if ( v47 > 255 ) /*0x4bc125*/
                    v47 = 255; /*0x4bc127*/
                  v48 = 255; /*0x4bc132*/
                  if ( ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]) <= 255 ) /*0x4bc137*/
                    v48 = ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]); /*0x4bc139*/
                  if ( v46 > 255 ) /*0x4bc141*/
                    v46 = 255; /*0x4bc143*/
                  *(_WORD *)(v101 + v98) = (v47 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                         | (v48 >> g_BitMask_Blue << g_BitMask_Green)
                                         | (v46 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc188*/
                    *v106 = v105; /*0x4bc199*/
                  v44 = g_ZBufferDescriptor; /*0x4bc19c*/
                }
                v49 = v87[0]; /*0x4bc1a2*/
                if ( v87[0] <= 0 ) /*0x4bc1a8*/
                {
                  v51 = v105; /*0x4bc213*/
                }
                else
                {
                  v49 = v87[0] - v81; /*0x4bc1c6*/
                  v98 += v82; /*0x4bc1c8*/
                  v50 = &v106[v99]; /*0x4bc1ce*/
                  if ( v99 <= 0 ) /*0x4bc1d1*/
                  {
                    v52 = &v106[v99]; /*0x4bc1f2*/
                    if ( (unsigned int)v50 < v44[6] ) /*0x4bc1f6*/
                      v52 = (_WORD *)((char *)v50 + v44[8]); /*0x4bc1fb*/
                    v106 = v52; /*0x4bc208*/
                    v51 = v83 + v105; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v50 >= v44[7] ) /*0x4bc1d6*/
                      v50 = (_WORD *)((char *)v50 - v44[8]); /*0x4bc1d8*/
                    v106 = v50; /*0x4bc1e2*/
                    v51 = v83 + v105; /*0x4bc1e9*/
                  }
                }
                v53 = v85; /*0x4bc21a*/
                if ( v85 > 0 ) /*0x4bc220*/
                {
                  v54 = v106 + 1; /*0x4bc233*/
                  v101 += 2; /*0x4bc23b*/
                  if ( (unsigned int)(v106 + 1) >= v44[7] ) /*0x4bc242*/
                    v54 = (_WORD *)((char *)v54 - v44[8]); /*0x4bc244*/
                  v106 = v54; /*0x4bc247*/
                  v53 = v85 - v81; /*0x4bc252*/
                }
                v105 = v78 + v51; /*0x4bc25e*/
                v85 = v80 + v53; /*0x4bc26b*/
                v55 = v88 == 1; /*0x4bc275*/
                v87[0] = v79 + v49; /*0x4bc276*/
                --v88; /*0x4bc27a*/
              }
              while ( !v55 ); /*0x4bc27e*/
            }
            goto LABEL_48; /*0x4bc27e*/
          }
          if ( v36 <= v39 ) /*0x4bc29b*/
          {
            v88 = v42 - v39; /*0x4bc501*/
            v87[0] = v43 - v39; /*0x4bc50b*/
            if ( v39 > 0 ) /*0x4bc50f*/
            {
              v67 = g_ZBufferDescriptor; /*0x4bc515*/
              v103 = 0; /*0x4bc51b*/
              v86 = v39; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc538*/
                {
                  v68 = *(_WORD *)(v103 + v98); /*0x4bc555*/
                  IDA_LOBYTE(v90[1]) = (unsigned __int8)(v68 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                  IDA_BYTE1(v90[1]) = (unsigned __int8)(v68 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                  IDA_BYTE2(v90[1]) = (unsigned __int8)(v68 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                  v69 = ((a6 * IDA_LOBYTE(v90[1])) >> 8) + IDA_LOBYTE(v90[1]); /*0x4bc5ba*/
                  v70 = ((a6 * IDA_BYTE2(v90[1])) >> 8) + IDA_BYTE2(v90[1]); /*0x4bc5e1*/
                  if ( v70 > 255 ) /*0x4bc5e8*/
                    v70 = 255; /*0x4bc5ea*/
                  v71 = 255; /*0x4bc5f5*/
                  if ( ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]) <= 255 ) /*0x4bc5fa*/
                    v71 = ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]); /*0x4bc5fc*/
                  if ( v69 > 255 ) /*0x4bc604*/
                    v69 = 255; /*0x4bc606*/
                  *(_WORD *)(v103 + v98) = (v70 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                         | (v71 >> g_BitMask_Blue << g_BitMask_Green)
                                         | (v69 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc64b*/
                    *v106 = v105; /*0x4bc65c*/
                  v67 = g_ZBufferDescriptor; /*0x4bc65f*/
                }
                v72 = v88; /*0x4bc665*/
                if ( v88 <= 0 ) /*0x4bc66b*/
                {
                  v73 = v106; /*0x4bc698*/
                }
                else
                {
                  v73 = v106 + 1; /*0x4bc67e*/
                  v103 += 2; /*0x4bc686*/
                  if ( (unsigned int)(v106 + 1) >= v67[7] ) /*0x4bc68d*/
                    v73 = (_WORD *)((char *)v73 - v67[8]); /*0x4bc68f*/
                  v72 = v88 - v79; /*0x4bc692*/
                }
                v74 = v87[0]; /*0x4bc69f*/
                v75 = v105; /*0x4bc6a3*/
                if ( v87[0] > 0 ) /*0x4bc6ac*/
                {
                  v75 = v78 + v105; /*0x4bc6b6*/
                  v74 = v87[0] - v79; /*0x4bc6b8*/
                }
                v88 = v80 + v72; /*0x4bc6c4*/
                v87[0] = v81 + v74; /*0x4bc6d5*/
                v76 = &v73[v99]; /*0x4bc6e2*/
                v98 += v82; /*0x4bc6e4*/
                if ( v99 <= 0 ) /*0x4bc6ea*/
                {
                  v77 = v76; /*0x4bc700*/
                  if ( (unsigned int)v76 < v67[6] ) /*0x4bc704*/
                    v77 = (_WORD *)((char *)v76 + v67[8]); /*0x4bc709*/
                  v106 = v77; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v76 >= v67[7] ) /*0x4bc6ef*/
                    v76 = (_WORD *)((char *)v76 - v67[8]); /*0x4bc6f1*/
                  v106 = v76; /*0x4bc6f4*/
                }
                v55 = v86 == 1; /*0x4bc71c*/
                v105 = v83 + v75; /*0x4bc71d*/
                --v86; /*0x4bc724*/
              }
              while ( !v55 ); /*0x4bc728*/
            }
            goto LABEL_48; /*0x4bc728*/
          }
          v102 = 0; /*0x4bc2a3*/
          v88 = v40 - v36; /*0x4bc2ac*/
          v87[0] = v43 - v36; /*0x4bc2b6*/
          if ( v36 <= 0 ) /*0x4bc2ba*/
          {
  LABEL_48:
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 96))(v90[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v57 = g_ZBufferDescriptor; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (unsigned __int16)v105 < *v106 ) /*0x4bc2d8*/
            {
              v58 = *(_WORD *)(v98 + 2 * v102); /*0x4bc2f5*/
              IDA_LOBYTE(v90[1]) = (unsigned __int8)(v58 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
              IDA_BYTE1(v90[1]) = (unsigned __int8)(v58 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
              IDA_BYTE2(v90[1]) = (unsigned __int8)(v58 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
              v59 = ((a6 * IDA_LOBYTE(v90[1])) >> 8) + IDA_LOBYTE(v90[1]); /*0x4bc35a*/
              v60 = ((a6 * IDA_BYTE2(v90[1])) >> 8) + IDA_BYTE2(v90[1]); /*0x4bc381*/
              if ( v60 > 255 ) /*0x4bc388*/
                v60 = 255; /*0x4bc38a*/
              v61 = 255; /*0x4bc395*/
              if ( ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]) <= 255 ) /*0x4bc39a*/
                v61 = ((a6 * IDA_BYTE1(v90[1])) >> 8) + IDA_BYTE1(v90[1]); /*0x4bc39c*/
              if ( v59 > 255 ) /*0x4bc3a4*/
                v59 = 255; /*0x4bc3a6*/
              *(_WORD *)(v98 + 2 * v102) = (v60 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                         | (v61 >> g_BitMask_Blue << g_BitMask_Green)
                                         | (v59 >> g_BitShift_Green_0 << g_BitShift_Red);
              if ( a9 ) /*0x4bc3eb*/
                *v106 = v105; /*0x4bc3fc*/
              v57 = g_ZBufferDescriptor; /*0x4bc3ff*/
            }
            v62 = v88; /*0x4bc405*/
            if ( v88 <= 0 ) /*0x4bc40b*/
            {
              v63 = v106; /*0x4bc47c*/
              goto LABEL_71; /*0x4bc47c*/
            }
            v62 = v88 - v80; /*0x4bc429*/
            v98 += v82; /*0x4bc42b*/
            v63 = &v106[v99]; /*0x4bc431*/
            if ( v99 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v63 < v57[7] ) /*0x4bc439*/
              goto LABEL_69; /*0x4bc439*/
            v63 = (_WORD *)((char *)v63 - v57[8]); /*0x4bc445*/
            v105 += v83; /*0x4bc44d*/
  LABEL_71:
            v65 = v87[0]; /*0x4bc483*/
            if ( v87[0] > 0 ) /*0x4bc489*/
            {
              v105 += v78; /*0x4bc49c*/
              v65 = v87[0] - v80; /*0x4bc4a3*/
            }
            v66 = v63 + 1; /*0x4bc4a9*/
            v88 = v79 + v62; /*0x4bc4ae*/
            v87[0] = v81 + v65; /*0x4bc4b8*/
            if ( (unsigned int)v66 >= v57[7] ) /*0x4bc4c1*/
              v66 = (_WORD *)((char *)v66 - v57[8]); /*0x4bc4c3*/
            v106 = v66; /*0x4bc4ca*/
            if ( ++v102 >= v84 ) /*0x4bc4e2*/
              goto LABEL_48; /*0x4bc4e2*/
          }
          v64 = &v106[v99]; /*0x4bc459*/
          if ( (unsigned int)v63 < v57[6] ) /*0x4bc45d*/
            v64 = (_WORD *)((char *)v63 + v57[8]); /*0x4bc462*/
          v63 = v64; /*0x4bc464*/
  LABEL_69:
          v105 += v83; /*0x4bc466*/
          goto LABEL_71; /*0x4bc47a*/
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
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // esi
  int v21; // edi
  int v22; // esi
  unsigned int v23; // ebx
  double v24; // st7
  double v25; // st7
  int v26; // eax
  unsigned int v27; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // ebp
  int v38; // edi
  int v39; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edi
  int v44; // ecx
  _DWORD *v45; // ebx
  int v46; // edx
  __int16 v47; // ax
  _WORD *v48; // eax
  _WORD *v49; // eax
  bool v50; // zf
  int v52; // edi
  _DWORD *v53; // ebx
  int v54; // edx
  _WORD *v55; // eax
  _WORD *v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // ebx
  _DWORD *v60; // ecx
  int v61; // edx
  _WORD *v62; // eax
  _WORD *v63; // eax
  int v64; // [esp+1Ch] [ebp-6Ch]
  int v65; // [esp+20h] [ebp-68h]
  int v66; // [esp+24h] [ebp-64h]
  int v67; // [esp+24h] [ebp-64h]
  int v68; // [esp+24h] [ebp-64h]
  int v69; // [esp+28h] [ebp-60h]
  int v70; // [esp+2Ch] [ebp-5Ch]
  int v71; // [esp+30h] [ebp-58h]
  int v72; // [esp+30h] [ebp-58h]
  int v73; // [esp+30h] [ebp-58h]
  int v74; // [esp+34h] [ebp-54h]
  int v75; // [esp+38h] [ebp-50h]
  int v76; // [esp+3Ch] [ebp-4Ch]
  unsigned __int64 v78; // [esp+44h] [ebp-44h]
  int v79; // [esp+44h] [ebp-44h]
  int v80; // [esp+44h] [ebp-44h]
  double v81; // [esp+48h] [ebp-40h]
  int v82; // [esp+48h] [ebp-40h]
  int v83; // [esp+48h] [ebp-40h]
  int v84; // [esp+48h] [ebp-40h]
  int v85; // [esp+4Ch] [ebp-3Ch]
  _DWORD v86[5]; // [esp+54h] [ebp-34h] BYREF
  unsigned __int64 v87; // [esp+68h] [ebp-20h]
  unsigned __int64 v88; // [esp+70h] [ebp-18h]
  int v89; // [esp+78h] [ebp-10h] BYREF
  int v90; // [esp+7Ch] [ebp-Ch]
  int v91; // [esp+80h] [ebp-8h]
  int v92; // [esp+84h] [ebp-4h]
  int v93; // [esp+8Ch] [ebp+4h]
  int v94; // [esp+90h] [ebp+8h]
  int v95; // [esp+94h] [ebp+Ch]
  int v96; // [esp+98h] [ebp+10h]
  int v97; // [esp+9Ch] [ebp+14h]
  int v98; // [esp+A0h] [ebp+18h]
  int v99; // [esp+A4h] [ebp+1Ch]

  v76 = Math::RoundToInt((double)*a5 * a6); /*0x4bdf39*/
  v9 = Math::RoundToInt((double)a5[1] * a6); /*0x4bdf59*/
  v75 = v9; /*0x4bdf5e*/
  v10 = Math::RoundToInt((double)a5[2] * a6); /*0x4bdf77*/
  v74 = v10; /*0x4bdf7f*/
  if ( v76 < 8 && v9 < 8 && v10 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v11 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 120))(this, &v86[1]); /*0x4bdf9c*/
  v12 = (int *)ClipRectIntersection(v11, 0, 0); /*0x4bdfaf*/
  v13 = *v12; /*0x4bdfb6*/
  v89 = *v12; /*0x4bdfb8*/
  v14 = v12[1]; /*0x4bdfbc*/
  v90 = v14; /*0x4bdfbf*/
  v91 = v12[2]; /*0x4bdfc6*/
  v15 = v12[3]; /*0x4bdfca*/
  v92 = v15; /*0x4bdfcf*/
  if ( !v91 && !v15 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  IDA_LODWORD(v18) = v13 + *a3; /*0x4bdff3*/
  v16 = v13 + *a4; /*0x4bdff5*/
  v17 = a7; /*0x4bdffa*/
  IDA_HIDWORD(v18) = v14 + a3[1]; /*0x4be001*/
  v19 = v18; /*0x4be003*/
  v20 = v14 + a4[1]; /*0x4be005*/
  v21 = a8; /*0x4be007*/
  v87 = v18; /*0x4be010*/
  v88 = IDA___PAIR64__(v20, v16); /*0x4be018*/
  if ( (int)v18 > v16 ) /*0x4be020*/
  {
    v19 = v16; /*0x4be022*/
    v17 = a8; /*0x4be024*/
    v21 = a7; /*0x4be026*/
    v87 = IDA___PAIR64__(v20, v16); /*0x4be02d*/
    v88 = v18; /*0x4be035*/
  }
  v22 = v19; /*0x4be04e*/
  v23 = IDA_HIDWORD(v87); /*0x4be050*/
  *(_QWORD *)&v86[1] = v88; /*0x4be05c*/
  if ( !(unsigned __int8)ClipLine(&v89) ) /*0x4be060*/
    return 0; /*0x4be060*/
  v98 = v21; /*0x4be07b*/
  v97 = v17; /*0x4be082*/
  if ( v88 != *(_QWORD *)&v86[1] ) /*0x4be089*/
  {
    v24 = Math::Sqrt( /*0x4be0c1*/
            (double)(int)(v23 - IDA_HIDWORD(v88)) * (double)(int)(v23 - IDA_HIDWORD(v88))
          + (double)(v22 - (int)v88) * (double)(v22 - (int)v88));
    v81 = (double)(int)Math::RoundToInt(v24); /*0x4be0f9*/
    v25 = Math::Sqrt((double)(int)(v23 - v86[2]) * (double)(int)(v23 - v86[2]) + (double)(v22 - v86[1]) /*0x4be10e*/
                                                                               * (double)(v22 - v86[1]));
    v26 = Math::RoundToInt(v25); /*0x4be116*/
    v27 = abs32(Math::RoundToInt(v81 / (double)v26 * (double)(v17 - v21))); /*0x4be149*/
    if ( v17 >= v21 ) /*0x4be14d*/
      v98 = v17 - v27; /*0x4be15e*/
    else
      v98 = v17 + v27; /*0x4be151*/
  }
  if ( v87 != IDA___PAIR64__(v23, v22) ) /*0x4be16f*/
  {
    v28 = Math::Sqrt( /*0x4be1a9*/
            (double)(IDA_HIDWORD(v87) - v86[2]) * (double)(IDA_HIDWORD(v87) - v86[2])
          + (double)((int)v87 - v86[1]) * (double)((int)v87 - v86[1]));
    v29 = Math::RoundToInt(v28); /*0x4be1ae*/
    v82 = v22 - v86[1]; /*0x4be1c0*/
    v85 = v23 - v86[2]; /*0x4be1ce*/
    *(double *)&v86[1] = (double)v29; /*0x4be1dd*/
    v30 = Math::Sqrt((double)v85 * (double)v85 + (double)v82 * (double)v82); /*0x4be1f2*/
    v31 = Math::RoundToInt(v30); /*0x4be1fa*/
    v32 = abs32(Math::RoundToInt(*(double *)&v86[1] / (double)v31 * (double)(v17 - v21))); /*0x4be22d*/
    if ( v21 <= v17 ) /*0x4be231*/
      v97 = v21 + v32; /*0x4be240*/
    else
      v97 = v21 - v32; /*0x4be235*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 112))(this); /*0x4be24f*/
  v33 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 92))(this, v87, IDA_HIDWORD(v87)); /*0x4be269*/
  v96 = v33; /*0x4be26d*/
  if ( !g_ZBufferDescriptor ) /*0x4be274*/
    return 0; /*0x4be274*/
  v34 = *((_DWORD *)g_ZBufferDescriptor + 1); /*0x4be27e*/
  v86[2] = IDA_HIDWORD(v87); /*0x4be285*/
  v35 = (_WORD *)Audio::GetSamplePosition(v87, IDA_HIDWORD(v87) - v34); /*0x4be29c*/
  v36 = *((_DWORD *)g_VisibleSurfaceDescriptor + 1); /*0x4be2a2*/
  v86[2] = IDA_HIDWORD(v87); /*0x4be2a5*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v87, IDA_HIDWORD(v87) - v36); /*0x4be2b6*/
  v70 = -1; /*0x4be2c1*/
  IDA_LOWORD(v36) = *((_WORD *)g_ZBufferDescriptor + 2) + *((_WORD *)g_ZBufferDescriptor + 18); /*0x4be2cd*/
  v93 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x4be2d4*/
  v99 = v97 + v36 - IDA_HIDWORD(v87) - v90; /*0x4be2ea*/
  if ( !v33 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v71 = v88 - v87; /*0x4be305*/
  v38 = IDA_HIDWORD(v88) - IDA_HIDWORD(v87); /*0x4be310*/
  v39 = v98 - v97; /*0x4be31a*/
  v40 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4be31c*/
  v65 = v40; /*0x4be321*/
  if ( v38 < 0 ) /*0x4be325*/
  {
    v70 = 1; /*0x4be32e*/
    v65 = -v40; /*0x4be33a*/
    v93 = -v93; /*0x4be33e*/
  }
  v69 = 1; /*0x4be347*/
  v41 = abs32(v38); /*0x4be354*/
  if ( v39 < 0 ) /*0x4be358*/
    v69 = -1; /*0x4be35a*/
  v42 = abs32(v39); /*0x4be377*/
  v95 = 2 * v71; /*0x4be38a*/
  v94 = 2 * v41; /*0x4be394*/
  v64 = 2 * v42; /*0x4be39e*/
  if ( v42 <= v71 || v42 <= v41 ) /*0x4be3aa*/
  {
    if ( v71 <= v41 ) /*0x4be5aa*/
    {
      v58 = v95 - v41; /*0x4be7b5*/
      v59 = v64 - v41; /*0x4be7b7*/
      v84 = v95 - v41; /*0x4be7bb*/
      v80 = v64 - v41; /*0x4be7bf*/
      if ( v41 > 0 ) /*0x4be7c3*/
      {
        v86[1] = v41; /*0x4be7d0*/
        v60 = g_ZBufferDescriptor; /*0x4be7d4*/
        v68 = 0; /*0x4be7da*/
        v73 = 2 * v93; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          IDA_HIWORD(v61) = 0; /*0x4be7f1*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be7fa*/
          {
            v58 = v84; /*0x4be89e*/
            IDA_LOWORD(v61) = *v37; /*0x4be7f6*/
            *(_WORD *)(v68 + v96) = BlendColorPack((v75 * v61) >> 7, (v74 * v61) >> 7); /*0x4be8a2*/
            v60 = g_ZBufferDescriptor; /*0x4be8a6*/
            v59 = v80; /*0x4be8ac*/
          }
          if ( v58 > 0 ) /*0x4be8b2*/
          {
            ++v35; /*0x4be8bb*/
            v68 += 2; /*0x4be8c3*/
            if ( (unsigned int)v35 >= v60[7] ) /*0x4be8c7*/
              v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be8c9*/
            v58 -= v94; /*0x4be8cc*/
          }
          if ( v59 > 0 ) /*0x4be8d5*/
          {
            v99 += v69; /*0x4be8eb*/
            v59 -= v94; /*0x4be8f2*/
          }
          v58 += v95; /*0x4be8ff*/
          v59 += v64; /*0x4be908*/
          v96 += v65; /*0x4be914*/
          v35 = (_WORD *)((char *)v35 + v73); /*0x4be922*/
          v84 = v58; /*0x4be924*/
          v80 = v59; /*0x4be92a*/
          if ( v93 <= 0 ) /*0x4be92e*/
          {
            v62 = v35; /*0x4be93d*/
            if ( (unsigned int)v35 < v60[6] ) /*0x4be941*/
              v62 = (_WORD *)((char *)v35 + v60[8]); /*0x4be946*/
            v35 = v62; /*0x4be948*/
          }
          else if ( (unsigned int)v35 >= v60[7] ) /*0x4be933*/
          {
            v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be935*/
          }
          v37 = (_WORD *)((char *)v37 + v73); /*0x4be955*/
          if ( v93 <= 0 ) /*0x4be959*/
          {
            v63 = v37; /*0x4be970*/
            if ( (unsigned int)v37 < *((_DWORD *)g_VisibleSurfaceDescriptor + 6) ) /*0x4be975*/
              v63 = (_WORD *)((char *)v37 + *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be97a*/
            v37 = v63; /*0x4be97c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x4be963*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be965*/
          }
          v50 = v86[1] == 1; /*0x4be98f*/
          v99 += v70; /*0x4be990*/
          --v86[1]; /*0x4be997*/
        }
        while ( !v50 ); /*0x4be99b*/
      }
    }
    else
    {
      v52 = v94 - v71; /*0x4be5bf*/
      v83 = v94 - v71; /*0x4be5c3*/
      v79 = v64 - v71; /*0x4be5c9*/
      v67 = 0; /*0x4be5cd*/
      if ( v71 > 0 ) /*0x4be5d5*/
      {
        v53 = g_ZBufferDescriptor; /*0x4be5db*/
        do /*0x4be78f*/
        {
          IDA_HIWORD(v54) = 0; /*0x4be5e9*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be5f2*/
          {
            v52 = v83; /*0x4be696*/
            IDA_LOWORD(v54) = *v37; /*0x4be5ee*/
            *(_WORD *)(v96 + 2 * v67) = BlendColorPack((v75 * v54) >> 7, (v74 * v54) >> 7); /*0x4be69a*/
            v53 = g_ZBufferDescriptor; /*0x4be69e*/
          }
          if ( v52 > 0 ) /*0x4be6a6*/
          {
            v52 -= v95; /*0x4be6c0*/
            v96 += v65; /*0x4be6c9*/
            v35 += v93; /*0x4be6d3*/
            if ( v93 <= 0 ) /*0x4be6d7*/
            {
              v55 = v35; /*0x4be6e6*/
              if ( (unsigned int)v35 < v53[6] ) /*0x4be6ea*/
                v55 = (_WORD *)((char *)v35 + v53[8]); /*0x4be6ef*/
              v35 = v55; /*0x4be6f1*/
            }
            else if ( (unsigned int)v35 >= v53[7] ) /*0x4be6dc*/
            {
              v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be6de*/
            }
            v37 += v93; /*0x4be6fa*/
            if ( v93 <= 0 ) /*0x4be6fe*/
            {
              v56 = v37; /*0x4be715*/
              if ( (unsigned int)v37 < *((_DWORD *)g_VisibleSurfaceDescriptor + 6) ) /*0x4be71a*/
                v56 = (_WORD *)((char *)v37 + *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be71f*/
              v37 = v56; /*0x4be721*/
            }
            else if ( (unsigned int)v37 >= *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x4be708*/
            {
              v37 = (_WORD *)((char *)v37 - *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be70a*/
            }
            v99 += v70; /*0x4be730*/
          }
          v57 = v79; /*0x4be737*/
          if ( v79 > 0 ) /*0x4be73d*/
          {
            v99 += v69; /*0x4be74c*/
            v57 = v79 - v95; /*0x4be75a*/
          }
          ++v35; /*0x4be769*/
          v79 = v64 + v57; /*0x4be76c*/
          v52 += v94; /*0x4be773*/
          v83 = v52; /*0x4be777*/
          if ( (unsigned int)v35 >= v53[7] ) /*0x4be77b*/
            v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be77d*/
          ++v67; /*0x4be78b*/
        }
        while ( v67 < v71 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v43 = v94 - v42; /*0x4be3be*/
    v44 = v95 - v42; /*0x4be3c0*/
    IDA_LODWORD(v78) = v94 - v42; /*0x4be3c4*/
    v72 = v95 - v42; /*0x4be3c8*/
    if ( v42 > 0 ) /*0x4be3cc*/
    {
      v45 = g_ZBufferDescriptor; /*0x4be3d2*/
      v66 = 0; /*0x4be3d8*/
      IDA_HIDWORD(v78) = v42; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        IDA_HIWORD(v46) = 0; /*0x4be3ec*/
        if ( (unsigned __int16)v99 < *v35 ) /*0x4be3f5*/
        {
          IDA_LOWORD(v46) = *v37; /*0x4be3f1*/
          v47 = BlendColorPack((v75 * v46) >> 7, (v74 * v46) >> 7); /*0x4be490*/
          v43 = v78; /*0x4be499*/
          v44 = v72; /*0x4be49d*/
          *(_WORD *)(v66 + v96) = v47; /*0x4be4a1*/
          v45 = g_ZBufferDescriptor; /*0x4be4a5*/
        }
        if ( v43 > 0 ) /*0x4be4ad*/
        {
          v96 += v65; /*0x4be4c4*/
          v43 -= v64; /*0x4be4d2*/
          v35 += v93; /*0x4be4d7*/
          if ( v93 <= 0 ) /*0x4be4db*/
          {
            v48 = v35; /*0x4be4ea*/
            if ( (unsigned int)v35 < v45[6] ) /*0x4be4ec*/
              v48 = (_WORD *)((char *)v35 + v45[8]); /*0x4be4f1*/
            v35 = v48; /*0x4be4f3*/
          }
          else if ( (unsigned int)v35 >= v45[7] ) /*0x4be4e0*/
          {
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be4e2*/
          }
          v37 += v93; /*0x4be4f5*/
          if ( v93 <= 0 ) /*0x4be4f9*/
          {
            v49 = v37; /*0x4be510*/
            if ( (unsigned int)v37 < *((_DWORD *)g_VisibleSurfaceDescriptor + 6) ) /*0x4be515*/
              v49 = (_WORD *)((char *)v37 + *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be51a*/
            v37 = v49; /*0x4be51c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)g_VisibleSurfaceDescriptor + 7) ) /*0x4be503*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)g_VisibleSurfaceDescriptor + 8)); /*0x4be505*/
          }
          v44 = v72; /*0x4be52b*/
          v99 += v70; /*0x4be52f*/
        }
        if ( v44 > 0 ) /*0x4be538*/
        {
          ++v35; /*0x4be541*/
          v66 += 2; /*0x4be549*/
          if ( (unsigned int)v35 >= v45[7] ) /*0x4be54d*/
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be54f*/
          v44 -= v64; /*0x4be552*/
        }
        v99 += v69; /*0x4be56a*/
        v44 += v95; /*0x4be578*/
        v43 += v94; /*0x4be57e*/
        v50 = IDA_HIDWORD(v78) == 1; /*0x4be580*/
        v72 = v44; /*0x4be581*/
        v78 = IDA___PAIR64__(IDA_HIDWORD(v78), v43) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v50 ); /*0x4be58d*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x4be599*/
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
}
