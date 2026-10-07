#include "render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "core/ddraw_init.hpp"
#include "core/reverse_marker.hpp"
#include "app/cmdline.hpp"
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Rect_Set(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int XSurface_BlitPart(...);   // g57b5 W5: raw 词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----

// gC supply: extern declarations from src/e4/e4_globals_decls.hpp
extern unsigned int stru_A8EB00;

// g_ZBufferDescriptor (IDA: 0x887644) — Z-buffer descriptor pointer
// Null in standalone build (no DDraw Z-buffer available)

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
// ECX (this) passes through untouched; (src, option1, option2) forwarded verbatim
// to XSurface::BlitWhole via direct (non-virtual) call.
REVERSE(0x4C1A90, "DSurface::BlitWhole: Thin wrapper around Blit", "None")
// 0x4c1a90
// NOTE: parameter type must be spelled `class Surface*` here - inside the
// scope of DSurface:: the plain name `Surface` resolves to the data member
// DSurface::Surface (LPDIRECTDRAWSURFACE7).
bool DSurface::BlitWhole(class Surface* src, bool option1, bool option2)
{
    return XSurface::BlitWhole(src, option1, option2);
}
// IDA: 0x4BB080 — DSurface::BlitPart (80B) thin wrapper
// GetRect(src) -> v11 (src surface bounds), GetRect(this) -> v12 (dest surface
// bounds), then virtual Blit slot [3]: Blit(dest_bounds, dest_rect, src,
// src_bounds, src_rect, option1, option2). Extra stack words in the binary are
// MSVC6 thiscall argument-reuse noise.
// 0x4bb080
bool DSurface::BlitPart(
    const RectangleStruct& dest_rect, class Surface* src,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    RectangleStruct src_bounds;
    RectangleStruct dest_bounds;
    src->GetRect(&src_bounds);
    ::gamemd::Surface::GetRect(&dest_bounds);
    return Blit((int*)&dest_bounds, (int*)&dest_rect, (unsigned int*)src, (int*)&src_bounds, (int*)&src_rect, (int)option1, (char)option2);  // g57c5 W5g2: raw 真形调用适配
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
        return dst->BlitPart(
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

        int v29 = a5[0];
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
    // (qualified base-class call: XSurface::GetRect(int,...) hides the virtual)
    RectangleStruct dst_srf_storage;
    dst->Surface::GetRect(&dst_srf_storage);
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

// IDA: 0x4BB0D0 - DSurface::Blit virtual entry (1303B).
// The full hardware/software blit implementation is translated above as
// DSurface::BlitCore (same body, raw-int ABI shared with the REPLACE hook);
// the virtual forwards its typed rectangle arguments positionally.
// 0x4bb0d0
bool DSurface::Blit(int *a2, int *a3, unsigned int *a4, int *a5, int *a6, int a7, char a8)  // g57c5 W5g2: raw 0x4BB0D0 真形同步 (a2..a8 即 7 参本体)  // g57b5 W4: raw 真值补参 (a2,a3,a4,a5,a6,a7,a8)
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
    if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(*a4 + 132))(a4) /*0x4bb19d*/
      || (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a4 + 108))(a4) == 1
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
       || (*((unsigned __int8 (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((unsigned char *)v10 + 25))
      && a6[2] == a3[2]
      && a6[3] == a3[3] )
    {
      v42 = 1; /*0x4bb1fa*/
    }
    if ( !g_DDraw_Initialized && !*(unsigned int *)((char *)&stru_A8EB00 + 412) ) /*0x4bb20f*/
      return 0; /*0x4bb20f*/
    v14 = this->DSurface_field_0x1C[0]; /*0x4bb215*/
    if ( v14 && (*(int (__stdcall **)(int))(*(unsigned int *)v14 + 96))( (int)(this->DSurface_field_0x1C[0]) ) == -2005532222 ) /*0x4bb227*/
    {
      if ( (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))( (int)(this->DSurface_field_0x1C[0]) ) /*0x4bb240*/
        || (*(int (__stdcall **)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))( (int)(this->DSurface_field_0x1C[0]) ) )
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
    Rect_Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
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
    if ( (unsigned __int8)IntersectSurfaceRects(&v49,(int *)((int)&v64), &v56,(int *)((int)&v60)) ) /*0x4bb521*/
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
    const RectangleStruct& clip_rect,
    const RectangleStruct& fill_rect, uint32_t color)
{
    if (!Surface || fill_rect.Width <= 0 || fill_rect.Height <= 0)
        return false;

    // Software path when hardware fill is disabled (byte flag @0x820320),
    // the surface is locked, or the blitter is still busy.
    if (stru_820320 == 0
     || IsLocked()
     || Surface->GetBltStatus(1) != 0)
    {
        return XSurface::FillRectEx(clip_rect, fill_rect, color);
    }

    if (g_DDraw_Initialized || g_DDraw_Active)
    {
        // Lost-surface recovery (re-lock cycle after Restore).
        if (Surface && Surface->IsLost() == DDERR_SURFACELOST)
        {
            if (FAILED(Surface->Restore())
             || Surface->IsLost() == DDERR_SURFACELOST)
                return false;
            if (LockCount > 0)
            {
                int saved_locks = LockCount;
                LockCount = 0;
                Lock(0, 0);
                ++LockCount;
                Unlock();
                LockCount = saved_locks;
            }
        }

        RectangleStruct bounds;
        ::gamemd::Surface::GetRect(&bounds);
        RectangleStruct clipped_clip;
        ClipRectIntersection(&clipped_clip, &clip_rect, &bounds, nullptr, nullptr);

        RectangleStruct fill_origin = {
            fill_rect.X + clip_rect.X, fill_rect.Y + clip_rect.Y,
            fill_rect.Width, fill_rect.Height };
        RectangleStruct clipped_fill;
        ClipRectIntersection(&clipped_fill, &fill_origin, &clipped_clip, nullptr, nullptr);

        if (clipped_fill.Width > 0 && clipped_fill.Height > 0)
        {
            RECT fill = {
                clipped_fill.X, clipped_fill.Y,
                clipped_fill.X + clipped_fill.Width,
                clipped_fill.Y + clipped_fill.Height };
            DDBLTFX fx;
            memset(&fx, 0, sizeof(fx));
            fx.dwSize = sizeof(fx);
            fx.dwFillColor = color;
            return Surface->Blt(&fill, nullptr, nullptr,
                                DDBLT_WAIT | DDBLT_COLORFILL, &fx) == DD_OK;
        }
    }
    return false;
}
// IDA: 0x4BB5F0 — DSurface::FillRect (43B) thin wrapper
// GetRect() → FillRectEx(clip, fill_rect, color)
REVERSE(0x4BB5F0, "DSurface::FillRect: Fill rectangle with color", "None")
// 0x4bb5f0
bool DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return FillRectEx(clip, fill_rect, color);
}
// 0x4bb830
bool DSurface::FillRectWithFlags(
    const RectangleStruct& clip_rect,
    const ColorStruct& color,
    int opacity_percent)
{
    if (GetBytesPerPixel() < 2)
        return false;
    if (clip_rect.Width <= 0 || clip_rect.Height <= 0)
        return false;

    RectangleStruct bounds;
    ::gamemd::Surface::GetRect(&bounds);
    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &bounds, &clip_rect, nullptr, nullptr);
    if (clipped.Width <= 0 || clipped.Height <= 0)
        return false;

    // 565-style channel masks built from the detected pixel format shifts.
    unsigned int red_mask   = (0xFFu >> g_BitShift_Green) << g_BitShift_Red;
    unsigned int green_mask = (0xFFu >> g_BitMask_Blue) << g_BitMask_Green;
    unsigned int blue_mask  = (0xFFu >> g_BitMask_Red) << g_BitShift_Blue;

    uint16_t* pixels = (uint16_t*)(Lock(clipped.X, clipped.Y));
    if (!pixels)
        return false;

    int opacity = opacity_percent;
    if ((unsigned int)(opacity) > 0x64)
        opacity = 100;
    int alpha = 255 * opacity / 100;
    int inv_alpha = 255 - alpha;

    uint16_t fill16 = (uint16_t)(
        ((((unsigned int)(color.R) >> g_BitShift_Green) << g_BitShift_Red)
       | (((unsigned int)(color.G) >> g_BitMask_Blue) << g_BitMask_Green)
       | (((unsigned int)(color.B) >> g_BitMask_Red) << g_BitShift_Blue)));

    for (int row = 0; row < clipped.Height; ++row)
    {
        uint16_t* rowptr = (uint16_t*)((char*)(pixels)
                          + row * (GetPitch() / 2) * 2);
        for (int col = 0; col < clipped.Width; ++col)
        {
            unsigned int pix = rowptr[col];
            unsigned int blended =
                  (green_mask & ((alpha * (fill16 & green_mask)
                                + inv_alpha * (pix & green_mask)) >> 8))
                | (red_mask   & ((alpha * (fill16 & red_mask)
                                + inv_alpha * (pix & red_mask)) >> 8))
                | ((alpha * (fill16 & blue_mask)
                  + inv_alpha * (pix & blue_mask)) >> 8);
            rowptr[col] = (uint16_t)blended;
        }
    }
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
// 0x4bad80
void* DSurface::Lock(int x, int y)
{
    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return nullptr;

    if (Surface && Surface->IsLost() == DDERR_SURFACELOST)
    {
        if (FAILED(Surface->Restore())
         || Surface->IsLost() == DDERR_SURFACELOST)
            return nullptr;

        if (LockCount > 0)
        {
            int saved_locks = LockCount;
            LockCount = 0;
            Lock(0, 0);
            ++LockCount;
            Unlock();
            LockCount = saved_locks;
        }
    }

    if (x >= 0 && y >= 0)
    {
        if (!LockCount)
        {
            DDSURFACEDESC2 desc;
            memset(&desc, 0, sizeof(desc));
            desc.dwSize = sizeof(desc);
            if (Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr) != DD_OK)
                return nullptr;

            *SurfaceDesc = desc;
            BytesPerPixel = (desc.ddpfPixelFormat.dwRGBBitCount + 7) >> 3;
            VRAMmed = (desc.ddsCaps.dwCaps & DDSCAPS_VIDEOMEMORY) != 0;
            LockedSurface = desc.lpSurface;
        }
        ++LockCount;
        return (char*)(LockedSurface)
             + x * GetBytesPerPixel()
             + y * GetPitch();
    }
    return nullptr;
}
// IDA: 0x4BAF40 -- DSurface::Unlock (154B)
// vtable[24] — Decrements lock count; on last unlock releases DDraw surface.
// Also handles lost-surface recovery on unlock (re-lock cycle after Restore).
REVERSE(0x4BAF40, "DSurface::Unlock: Release DDraw surface lock", "None")
// 0x4baf40
bool DSurface::Unlock()
{
    if (g_DDraw_Initialized || g_DDraw_Active)
    {
        if (Surface)
        {
            if (Surface->IsLost() == DDERR_SURFACELOST
             && SUCCEEDED(Surface->Restore())
             && Surface->IsLost() != DDERR_SURFACELOST)
            {
                if (LockCount > 0)
                {
                    int saved_locks = LockCount;
                    LockCount = 0;
                    Lock(0, 0);
                    ++LockCount;
                    Unlock();
                    LockCount = saved_locks;
                }
            }
        }
    }

    if (LockCount <= 0)
        return false;

    --LockCount;
    if (!LockCount)
    {
        Surface->Unlock((RECT*)(LockedSurface));
        LockedSurface = nullptr;
    }
    return true;
}
// 0x4baec0
bool DSurface::CanLock(uint32_t /*unk1*/, uint32_t /*unk2*/)
{
    if (LockCount)
        return true;

    DDSURFACEDESC2 desc;
    memset(&desc, 0, sizeof(desc));
    desc.dwSize = sizeof(desc);
    if (Surface->Lock(nullptr, &desc, 0, nullptr) != DD_OK)
        return false;
    Surface->Unlock((RECT*)(desc.lpSurface));
    return true;
}
// 0x4baf20
bool DSurface::CheckBltStatus()
{
    // ASM: GetBltStatus(1) via the DDraw surface vtable; neg/sbb/inc turns
    // the HRESULT into (result == 0).
    return Surface->GetBltStatus(1) == 0;
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
    ++LockCount;
    char* buffer = (char*)(Buffer);
    int offset = x * GetBytesPerPixel() + y * GetPitch();
    return buffer + offset;
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
bool XSurface::SetPixel(const Point2D& point, uint32_t color)
{
    uint16_t* pixel = (uint16_t*)(Lock(point.X, point.Y));
    if (!pixel)
        return false;
    if (GetBytesPerPixel() == 2)
        *pixel = (uint16_t)(color);
    else
        *(uint8_t*)(pixel) = (uint8_t)(color);
    Unlock();
    return true;
}
// 0x7bae60
uint32_t XSurface::GetPixel(const Point2D& point)
{
    uint32_t result = 0;
    uint16_t* pixel = (uint16_t*)(Lock(point.X, point.Y));
    if (pixel)
    {
        if (GetBytesPerPixel() == 2)
        {
            result = *pixel;
            Unlock();
            return result;
        }
        result = *(uint8_t*)(pixel);
        Unlock();
    }
    return result;
}
// 0x7baf90
bool XSurface::PutPixel(
    const Point2D& point, uint16_t color, const RectangleStruct& clip_rect)
{
    if (point.X >= clip_rect.X
     && point.X < clip_rect.X + clip_rect.Width
     && point.Y >= clip_rect.Y
     && point.Y < clip_rect.Y + clip_rect.Height)
    {
        uint16_t* pixel = (uint16_t*)(Lock(point.X, point.Y));
        if (pixel)
        {
            if (GetBytesPerPixel() == 2)
                *pixel = color;
            else
                *(uint8_t*)(pixel) = (uint8_t)(color);
            Unlock();
            return true;
        }
    }
    return false;
}
// 0x7baf10
uint16_t XSurface::GetPixelAtCoords(
    const Point2D& point, const RectangleStruct& clip_rect)
{
    uint16_t result = 0;
    if (point.X >= clip_rect.X
     && point.X < clip_rect.X + clip_rect.Width
     && point.Y >= clip_rect.Y
     && point.Y < clip_rect.Y + clip_rect.Height)
    {
        uint16_t* pixel = (uint16_t*)(Lock(point.X, point.Y));
        if (pixel)
        {
            if (GetBytesPerPixel() == 2)
            {
                result = *pixel;
                Unlock();
                return result;
            }
            result = (uint16_t)(*(uint8_t*)(pixel));
            Unlock();
        }
    }
    return result;
}
// 0x7ba5e0
bool XSurface::DrawLine(const Point2D& start, const Point2D& end, uint32_t color)
{
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawLineEx(clip, start, end, color);
}
// 0x7bbab0
bool XSurface::Fill(uint32_t color)
{
    RectangleStruct clip;
    RectangleStruct fill;
    ::gamemd::Surface::GetRect(&clip);
    ::gamemd::Surface::GetRect(&fill);
    return FillRectEx(clip, fill, color);
}
// 0x7badc0
bool XSurface::DrawRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& draw_rect, uint32_t color)
{
    Point2D top_left     = Point2D(draw_rect.X, draw_rect.Y);
    Point2D top_right    = Point2D(draw_rect.X + draw_rect.Width - 1, draw_rect.Y);
    Point2D bottom_right = Point2D(draw_rect.X + draw_rect.Width - 1,
                                   draw_rect.Y + draw_rect.Height - 1);
    Point2D bottom_left  = Point2D(draw_rect.X, draw_rect.Y + draw_rect.Height - 1);
    DrawLineEx(clip_rect, top_left, top_right, color);
    DrawLineEx(clip_rect, top_left, bottom_left, color);
    DrawLineEx(clip_rect, top_right, bottom_right, color);
    DrawLineEx(clip_rect, bottom_left, bottom_right, color);
    return true;
}
// IDA: 0x7BAD90 -- XSurface::DrawRect (43B)
// vtable[22] 0x58 -- DrawRectEx wrapper with surface-level clip
// 0x7bad90
bool XSurface::DrawRect(const RectangleStruct& draw_rect, uint32_t color)
{
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawRectEx(clip, draw_rect, color);
}
// 0x7bb020
bool XSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    // NOTE (0x7BB020 disasm): forwards (fill_rect, surface bounds, color) -
    // the intersection math in FillRectEx makes this equivalent to filling
    // fill_rect clipped to the surface.
    RectangleStruct bounds;
    ::gamemd::Surface::GetRect(&bounds);
    return FillRectEx(fill_rect, bounds, color);
}
// 0x7bb050
bool XSurface::FillRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& fill_rect, uint32_t color)
{
    if (fill_rect.Width <= 0)
        return false;
    if (fill_rect.Height <= 0)
        return false;

    RectangleStruct bounds;
    ::gamemd::Surface::GetRect(&bounds);
    RectangleStruct clipped_clip;
    ClipRectIntersection(&clipped_clip, &clip_rect, &bounds, nullptr, nullptr);

    RectangleStruct fill_origin = {
        fill_rect.X + clip_rect.X, fill_rect.Y + clip_rect.Y,
        fill_rect.Width, fill_rect.Height };
    RectangleStruct clipped_fill;
    ClipRectIntersection(&clipped_fill, &fill_origin, &clipped_clip, nullptr, nullptr);
    if (clipped_fill.Width <= 0 || clipped_fill.Height <= 0)
        return false;

    int pitch = GetPitch();
    uint8_t* dest = (uint8_t*)(Lock(clipped_fill.X, clipped_fill.Y));
    if (!dest)
        return false;

    if (GetBytesPerPixel() == 1)
    {
        for (int row = 0; row < clipped_fill.Height; ++row)
        {
            uint8_t* rowptr = dest + row * pitch;
            for (int col = 0; col < clipped_fill.Width; ++col)
                rowptr[col] = (uint8_t)(color);
        }
    }
    else
    {
        for (int row = 0; row < clipped_fill.Height; ++row)
        {
            uint16_t* rowptr = (uint16_t*)(dest + row * pitch);
            for (int col = 0; col < clipped_fill.Width; ++col)
                rowptr[col] = (uint16_t)(color);
        }
    }
    Unlock();
    return true;
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
bool XSurface::BlitWhole(Surface* src, bool option1, bool option2)
{
    RectangleStruct dest_rect;
    RectangleStruct src_rect;
    ::gamemd::Surface::GetRect(&dest_rect);
    dest_rect.X = 0;
    dest_rect.Y = 0;
    src->GetRect(&src_rect);
    src_rect.X = 0;
    src_rect.Y = 0;
    return BlitPart(dest_rect, src, src_rect, option1, option2);
}
// G42.41b: Surface 6-param slot - never overridden (truth arity = 7 @0x4BF750);
// de-pured so DSurface instantiates. No callers; compile-glue body.
bool Surface::DrawGradientLine(
    const Point2D& start, const Point2D& end,
    int palette_idx, int fade_val,
    float* gradient_start, float* gradient_step)
{
    (void)start; (void)end; (void)palette_idx; (void)fade_val;
    (void)gradient_start; (void)gradient_step;
    return false;
}

// 0x4bf750
bool DSurface::DrawGradientLine(
    const RectangleStruct& clip_rect,
    const Point2D& start, const Point2D& end,
    const uint8_t* color_from, const uint8_t* color_to,
    float* gradient_start, float* gradient_step)
{
    RectangleStruct bounds;
    ::gamemd::Surface::GetRect(&bounds);
    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &clip_rect, &bounds, nullptr, nullptr);

    int p0[2] = { clipped.X + start.X, clipped.Y + start.Y };
    int p1[2] = { clipped.X + end.X,   clipped.Y + end.Y };
    if (!ClipLine(p0, p1, (int*)(&clipped)))
        return false;

    if (p0[0] > p1[0])
    {
        int t = p0[0]; p0[0] = p1[0]; p1[0] = t;
        t = p0[1]; p0[1] = p1[1]; p1[1] = t;
    }

    if (GetBytesPerPixel() != 2)
        return false;

    uint16_t* base = (uint16_t*)(Lock(p0[0], p0[1]));
    if (!base)
        return false;

    // Per-pixel gradient: t ping-pongs inside [0,1]; channels lerp
    // between color_from and color_to (Color::Lerp2 @0x661020 math),
    // then repack into the surface's 565-style layout.
    int pitch = GetPitch();
    if (p0[1] == p1[1])
    {
        // Horizontal
        for (int i = 0; i <= p1[0] - p0[0]; ++i)
        {
            float t = *gradient_start;
            float inv = 1.0f - t;
            uint8_t c0 = (uint8_t)(inv * color_from[0] + t * color_to[0] + 0.5f);
            uint8_t c1 = (uint8_t)(inv * color_from[1] + t * color_to[1] + 0.5f);
            uint8_t c2 = (uint8_t)(inv * color_from[2] + t * color_to[2] + 0.5f);
            base[i] = (uint16_t)(
                ((uint32_t)(c0 >> g_BitShift_Green) << g_BitShift_Red)
              | ((uint32_t)(c1 >> g_BitMask_Blue) << g_BitMask_Green)
              | ((uint32_t)(c2 >> g_BitMask_Red) << g_BitShift_Blue));
            float next = *gradient_start + *gradient_step;
            *gradient_start = next;
            bool bounced = false;
            if (*gradient_start < 0.0f)
            {
                *gradient_start = 0.0f;
                bounced = true;
            }
            else if (*gradient_start > 1.0f && *gradient_step > 0.0f)
            {
                *gradient_start = 1.0f;
                bounced = true;
            }
            if (bounced)
                *gradient_step = -*gradient_step;
        }
    }
    else if (p0[0] == p1[0])
    {
        // Vertical
        int rowstep = (p0[1] <= p1[1]) ? pitch : -pitch;
        int count = p0[1] < p1[1] ? p1[1] - p0[1] : p0[1] - p1[1];
        uint16_t* pixel = base;
        for (int i = 0; i <= count; ++i)
        {
            float t = *gradient_start;
            float inv = 1.0f - t;
            uint8_t c0 = (uint8_t)(inv * color_from[0] + t * color_to[0] + 0.5f);
            uint8_t c1 = (uint8_t)(inv * color_from[1] + t * color_to[1] + 0.5f);
            uint8_t c2 = (uint8_t)(inv * color_from[2] + t * color_to[2] + 0.5f);
            *pixel = (uint16_t)(
                ((uint32_t)(c0 >> g_BitShift_Green) << g_BitShift_Red)
              | ((uint32_t)(c1 >> g_BitMask_Blue) << g_BitMask_Green)
              | ((uint32_t)(c2 >> g_BitMask_Red) << g_BitShift_Blue));
            float next = *gradient_start + *gradient_step;
            *gradient_start = next;
            bool bounced = false;
            if (*gradient_start < 0.0f)
            {
                *gradient_start = 0.0f;
                bounced = true;
            }
            else if (*gradient_start > 1.0f && *gradient_step > 0.0f)
            {
                *gradient_start = 1.0f;
                bounced = true;
            }
            if (bounced)
                *gradient_step = -*gradient_step;
            pixel = (uint16_t*)((char*)(pixel) + rowstep);
        }
    }
    else
    {
        // General Bresenham (p0[0] <= p1[0] guaranteed by the swap)
        int dx = p1[0] - p0[0];
        int dy = p1[1] - p0[1];
        int rowstep = (dy < 0) ? -pitch : pitch;
        int ady = (dy < 0) ? -dy : dy;
        int twice_dx = 2 * dx;
        int twice_ady = 2 * ady;
        if (dx > ady)
        {
            int err = twice_ady - dx;
            uint16_t* pixel = base;
            for (int i = 0; i <= dx; ++i)
            {
                float t = *gradient_start;
                float inv = 1.0f - t;
                uint8_t c0 = (uint8_t)(inv * color_from[0] + t * color_to[0] + 0.5f);
                uint8_t c1 = (uint8_t)(inv * color_from[1] + t * color_to[1] + 0.5f);
                uint8_t c2 = (uint8_t)(inv * color_from[2] + t * color_to[2] + 0.5f);
                *pixel = (uint16_t)(
                    ((uint32_t)(c0 >> g_BitShift_Green) << g_BitShift_Red)
                  | ((uint32_t)(c1 >> g_BitMask_Blue) << g_BitMask_Green)
                  | ((uint32_t)(c2 >> g_BitMask_Red) << g_BitShift_Blue));
                float next = *gradient_start + *gradient_step;
                *gradient_start = next;
                bool bounced = false;
                if (*gradient_start < 0.0f)
                {
                    *gradient_start = 0.0f;
                    bounced = true;
                }
                else if (*gradient_start > 1.0f && *gradient_step > 0.0f)
                {
                    *gradient_start = 1.0f;
                    bounced = true;
                }
                if (bounced)
                    *gradient_step = -*gradient_step;
                if (err > 0)
                {
                    pixel = (uint16_t*)((char*)(pixel) + rowstep);
                    err -= twice_dx;
                }
                err += twice_ady;
                ++pixel;
            }
        }
        else
        {
            int err = twice_dx - ady;
            uint16_t* pixel = base;
            int xoff = 0;
            int count = ady + 1;
            do
            {
                float t = *gradient_start;
                float inv = 1.0f - t;
                uint8_t c0 = (uint8_t)(inv * color_from[0] + t * color_to[0] + 0.5f);
                uint8_t c1 = (uint8_t)(inv * color_from[1] + t * color_to[1] + 0.5f);
                uint8_t c2 = (uint8_t)(inv * color_from[2] + t * color_to[2] + 0.5f);
                pixel[xoff] = (uint16_t)(
                    ((uint32_t)(c0 >> g_BitShift_Green) << g_BitShift_Red)
                  | ((uint32_t)(c1 >> g_BitMask_Blue) << g_BitMask_Green)
                  | ((uint32_t)(c2 >> g_BitMask_Red) << g_BitShift_Blue));
                float next = *gradient_start + *gradient_step;
                *gradient_start = next;
                bool bounced = false;
                if (*gradient_start < 0.0f)
                {
                    *gradient_start = 0.0f;
                    bounced = true;
                }
                else if (*gradient_start > 1.0f && *gradient_step > 0.0f)
                {
                    *gradient_start = 1.0f;
                    bounced = true;
                }
                if (bounced)
                    *gradient_step = -*gradient_step;
                if (err > 0)
                {
                    ++xoff;
                    err -= twice_ady;
                }
                err += twice_dx;
                pixel = (uint16_t*)((char*)(pixel) + rowstep);
            }
            while (--count);
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
// 0x4c0e30
bool DSurface::DrawStippledRect(
    const Point2D& top_left, const Point2D& bottom_right,
    uint16_t color, bool fill_interior)
{
    if (GetBytesPerPixel() != 2)
        return false;

    RectangleStruct bounds;
    ::gamemd::Surface::GetRect(&bounds);
    int p0[2] = { bounds.X + top_left.X, bounds.Y + top_left.Y };
    int p1[2] = { bounds.X + bottom_right.X, bounds.Y + bottom_right.Y };
    if (!ClipLine(p0, p1, (int*)(&bounds)))
        return false;

    if (p0[0] > p1[0])
    {
        int t = p0[0]; p0[0] = p1[0]; p1[0] = t;
        t = p0[1]; p0[1] = p1[1]; p1[1] = t;
    }

    // Z/stipple walk through the visible-surface descriptor
    // (fields: [1]=origin_Y, [6]=wrap_lo, [7]=wrap_hi, [8]=wrap_stride,
    //  [10]=word_pitch - see g_VisibleSurfaceDescriptor at file top).
    unsigned int* desc = (unsigned int*)(g_VisibleSurfaceDescriptor);
    uint16_t* zbuf = (uint16_t*)StreamClass_ReadAndSeek(
                        p0[0], p0[1] - (int)(desc[1]));
    int zrow = (int)(desc[10]);
    if (p0[1] > p1[1])
        zrow = -zrow;

    uint16_t* base = (uint16_t*)(Lock(p0[0], p0[1]));
    if (!base)
        return false;

    // Gate: fill_interior draws where the z word is zero, otherwise
    // where it is non-zero.
    if (p0[1] == p1[1])
    {
        // Horizontal
        uint16_t* pixel = base;
        for (int i = 0; i <= p1[0] - p0[0]; ++i)
        {
            if (fill_interior ? (*zbuf == 0) : (*zbuf != 0))
                *pixel = color;
            ++zbuf;
            if (zrow <= 0)
            {
                if ((unsigned int)(zbuf) < desc[6])
                    zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
            }
            else if ((unsigned int)(zbuf) >= desc[7])
            {
                zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
            }
            ++pixel;
        }
    }
    else if (p0[0] == p1[0])
    {
        // Vertical
        int rowstep = (p0[1] <= p1[1]) ? GetPitch() : -GetPitch();
        int count = (p0[1] < p1[1]) ? (p1[1] - p0[1]) : (p0[1] - p1[1]);
        uint16_t* pixel = base;
        for (int i = 0; i <= count; ++i)
        {
            if (fill_interior ? (*zbuf == 0) : (*zbuf != 0))
                *pixel = color;
            zbuf += zrow;
            if (zrow <= 0)
            {
                if ((unsigned int)(zbuf) < desc[6])
                    zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
            }
            else if ((unsigned int)(zbuf) >= desc[7])
            {
                zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
            }
            pixel = (uint16_t*)((char*)(pixel) + rowstep);
        }
    }
    else
    {
        // General Bresenham
        int dx = p1[0] - p0[0];
        int dy = p1[1] - p0[1];
        int pitch = GetPitch();
        int rowstep = (dy < 0) ? -pitch : pitch;
        int ady = (dy < 0) ? -dy : dy;
        int twice_dx = 2 * dx;
        int twice_ady = 2 * ady;
        if (dx > ady)
        {
            // X-major
            int err = twice_ady - dx;
            uint16_t* pixel = base;
            for (int i = 0; i < dx; ++i)
            {
                if (fill_interior ? (*zbuf == 0) : (*zbuf != 0))
                    *pixel = color;
                if (err > 0)
                {
                    pixel = (uint16_t*)((char*)(pixel) + rowstep);
                    zbuf += zrow;
                    if ((unsigned int)(zbuf) >= desc[7])
                        zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                    err -= twice_dx;
                }
                ++zbuf;
                if (zrow <= 0)
                {
                    if ((unsigned int)(zbuf) < desc[6])
                        zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
                }
                else if ((unsigned int)(zbuf) >= desc[7])
                {
                    zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                }
                err += twice_ady;
                ++pixel;
            }
        }
        else
        {
            // Y-major
            int err = twice_dx - ady;
            uint16_t* pixel = base;
            int xoff = 0;
            int count = ady;
            do
            {
                if (fill_interior ? (*zbuf == 0) : (*zbuf != 0))
                    pixel[xoff] = color;
                if (err > 0)
                {
                    err -= twice_ady;
                    ++zbuf;
                    ++xoff;
                    if ((unsigned int)(zbuf) >= desc[7])
                        zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                }
                err += twice_dx;
                pixel = (uint16_t*)((char*)(pixel) + rowstep);
                zbuf += zrow;
                if (zrow <= 0)
                {
                    if ((unsigned int)(zbuf) < desc[6])
                        zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
                }
                else if ((unsigned int)(zbuf) >= desc[7])
                {
                    zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                }
            }
            while (--count);
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
// 0x4c0750
bool DSurface::DrawDashedLineStipple(
    const Point2D& start, const Point2D& end,
    uint16_t color, const uint8_t stipple[16],
    int dash_offset, bool update_z)
{
    int p0[2] = { start.X, start.Y };
    int p1[2] = { end.X, end.Y };
    int dir = 1;
    if (GetBytesPerPixel() != 2)
        return false;

    if (p0[0] > p1[0])
    {
        int t = p0[0]; p0[0] = p1[0]; p1[0] = t;
        t = p0[1]; p0[1] = p1[1]; p1[1] = t;
        int adx = p1[0] - p0[0];
        int ady = (p0[1] < p1[1]) ? (p1[1] - p0[1]) : (p0[1] - p1[1]);
        int span = adx;
        if (span < ady + 1)
            span = ady + 1;
        dash_offset = (span + dash_offset) % 16;
        dir = -1;
    }

    unsigned int* desc = (unsigned int*)(g_VisibleSurfaceDescriptor);
    uint16_t* zbuf = (uint16_t*)StreamClass_ReadAndSeek(
                        p0[0], p0[1] - (int)(desc[1]));
    int zrow = (int)(desc[10]);
    if (p0[1] > p1[1])
        zrow = -zrow;

    uint16_t* base = (uint16_t*)(Lock(p0[0], p0[1]));
    if (!base)
        return false;

    int idx = dash_offset;
    // Draw where stipple[idx] is set and the z word satisfies the gate:
    // update_z -> z==0, otherwise -> z!=0.
    if (p0[1] == p1[1])
    {
        // Horizontal
        uint16_t* pixel = base;
        for (int i = 0; i <= p1[0] - p0[0]; ++i)
        {
            int nidx = idx + (idx < 0 ? 16 : 0);
            if (nidx >= 16)
                nidx -= 16;
            if (stipple[nidx] && (update_z ? (*zbuf == 0) : (*zbuf != 0)))
                *pixel = color;
            ++zbuf;
            if (zrow <= 0)
            {
                if ((unsigned int)(zbuf) < desc[6])
                    zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
            }
            else if ((unsigned int)(zbuf) >= desc[7])
            {
                zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
            }
            ++pixel;
            idx = dir + nidx;
        }
    }
    else if (p0[0] == p1[0])
    {
        // Vertical
        int rowstep = (p0[1] <= p1[1]) ? GetPitch() : -GetPitch();
        int count = (p0[1] < p1[1]) ? (p1[1] - p0[1]) : (p0[1] - p1[1]);
        uint16_t* pixel = base;
        for (int i = 0; i <= count; ++i)
        {
            int nidx = idx + (idx < 0 ? 16 : 0);
            if (nidx >= 16)
                nidx -= 16;
            if (stipple[nidx] && (update_z ? (*zbuf == 0) : (*zbuf != 0)))
                *pixel = color;
            pixel = (uint16_t*)((char*)(pixel) + rowstep);
            zbuf += zrow;
            if (zrow <= 0)
            {
                if ((unsigned int)(zbuf) < desc[6])
                    zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
            }
            else if ((unsigned int)(zbuf) >= desc[7])
            {
                zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
            }
            idx = dir + nidx;
        }
    }
    else
    {
        // General Bresenham
        int dx = p1[0] - p0[0];
        int dy = p1[1] - p0[1];
        int pitch = GetPitch();
        int rowstep = (dy < 0) ? -pitch : pitch;
        int ady = (dy < 0) ? -dy : dy;
        int twice_dx = 2 * dx;
        int twice_ady = 2 * ady;
        if (dx > ady)
        {
            // X-major
            int err = twice_ady - dx;
            uint16_t* pixel = base;
            for (int i = 0; i < dx; ++i)
            {
                int nidx = idx + (idx < 0 ? 16 : 0);
                if (nidx >= 16)
                    nidx -= 16;
                if (stipple[nidx] && (update_z ? (*zbuf == 0) : (*zbuf != 0)))
                    *pixel = color;
                if (err > 0)
                {
                    pixel = (uint16_t*)((char*)(pixel) + rowstep);
                    zbuf += zrow;
                    if ((unsigned int)(zbuf) >= desc[7])
                        zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                    err -= twice_dx;
                }
                ++zbuf;
                if (zrow <= 0)
                {
                    if ((unsigned int)(zbuf) < desc[6])
                        zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
                }
                else if ((unsigned int)(zbuf) >= desc[7])
                {
                    zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                }
                err += twice_ady;
                ++pixel;
                idx = dir + nidx;
            }
        }
        else
        {
            // Y-major
            int err = twice_dx - ady;
            uint16_t* pixel = base;
            int xoff = 0;
            int count = ady + 1;
            do
            {
                int nidx = idx + (idx < 0 ? 16 : 0);
                if (nidx >= 16)
                    nidx -= 16;
                if (stipple[nidx] && (update_z ? (*zbuf == 0) : (*zbuf != 0)))
                    pixel[xoff] = color;
                if (err > 0)
                {
                    ++zbuf;
                    xoff += 2;
                    if ((unsigned int)(zbuf) >= desc[7])
                        zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                    err -= twice_ady;
                }
                err += twice_dx;
                pixel = (uint16_t*)((char*)(pixel) + rowstep);
                zbuf += zrow;
                if (zrow <= 0)
                {
                    if ((unsigned int)(zbuf) < desc[6])
                        zbuf = (uint16_t*)((char*)(zbuf) + desc[8]);
                }
                else if ((unsigned int)(zbuf) >= desc[7])
                {
                    zbuf = (uint16_t*)((char*)(zbuf) - desc[8]);
                }
                idx = dir + nidx;
            }
            while (--count);
        }
    }
    Unlock();
    return true;
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
    const Point2D& start, const Point2D& end,
    uint16_t color, int fade_start, int fade_end,
    bool update_z_buffer)
{
    // PENDING full translation (0x4BFD30, 2615B): Bresenham line with
    // Z-buffer depth test and per-channel fade blending. Requires the
    // g_ZBufferDescriptor Stream layout (Audio::GetSamplePosition walk)
    // and Math::Sqrt/RoundToInt declarations, not yet in the hand tree.
    // Raw body retained in src/e4/DSurface_e4.cpp. Fallback: plain line.
    (void)fade_start; (void)fade_end; (void)update_z_buffer;
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawLineEx(clip, start, end, color);
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
    const Point2D& start, const Point2D& end,
    int mod_strength, int fade_start, int fade_end,
    bool update_z_buffer)
{
    // PENDING full translation (0x4BBCA0, 2735B): read-modify-write
    // Bresenham line with channel modulation and Z gating. Same missing
    // dependencies as DrawLineZBuf. Raw body in src/e4/DSurface_e4.cpp.
    // Fallback: plain line.
    (void)mod_strength; (void)fade_start; (void)fade_end;
    (void)update_z_buffer;
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawLineEx(clip, start, end, 0);
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
    const Point2D& start, const Point2D& end,
    const uint8_t src_rgb[3], float brightness,
    int fade_start, int fade_end)
{
    // PENDING full translation (0x4BDF00, 2754B): Z-buffer line with RGB
    // color scaled by brightness. Same missing dependencies as
    // DrawLineZBuf. Raw body in src/e4/DSurface_e4.cpp. Fallback: plain
    // line packed from src_rgb.
    (void)brightness; (void)fade_start; (void)fade_end;
    uint16_t color = (uint16_t)(
        ((uint32_t)(src_rgb[0] >> g_BitShift_Green) << g_BitShift_Red)
      | ((uint32_t)(src_rgb[1] >> g_BitMask_Blue) << g_BitMask_Green)
      | ((uint32_t)(src_rgb[2] >> g_BitMask_Red) << g_BitShift_Blue));
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawLineEx(clip, start, end, color);
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
    const Point2D& start, const Point2D& end,
    const uint8_t* stipple_pattern,
    int fade_start, int fade_end,
    bool z_buffer, float gradient_start,
    float gradient_step, bool flip_dir)
{
    // PENDING full translation (0x4BC750, 6064B): the most complex line
    // pipeline (stipple + fade tables + gradient + Z test). The raw body
    // lives in src/e4/DSurface_e4.cpp; this TU only ever carried a
    // truncated L-fix fragment. Fallback: plain line.
    (void)stipple_pattern; (void)fade_start; (void)fade_end;
    (void)z_buffer; (void)gradient_start; (void)gradient_step;
    (void)flip_dir;
    RectangleStruct clip;
    ::gamemd::Surface::GetRect(&clip);
    return DrawLineEx(clip, start, end, 0);

} // namespace gamemd
}
