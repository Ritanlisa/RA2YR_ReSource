#include "render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "core/ddraw_init.hpp"
#include "core/reverse_marker.hpp"
#include "app/cmdline.hpp"
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Rect_Set(int p0, int p1, int p2, int p3);  // x4:signals@0x42e410
int XSurface_BlitPart(void** p0, void** p1, void** p2, void** p3, int p4);  // x4:signals@0x7bbb90
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

// ==== Surface abstract base (q000 0x7E2198) — IDA-verified defaults ====
// Pure-virtual dtor definition (required at link time even for abstract class).
Surface::~Surface() = default;

Surface::Surface()
    : Width(0), Height(0)
{
}

// q000 [28]/[29] in XSurface hold the shared `xor eax,eax` stub 0x4C9150.
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

// XSurface q000 [33] = 0x411590 StubReturnFalse
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

    // Count bits set (mask width)
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
{
  XSurface *v3; // ecx

  return XSurface::BlitWhole(v3, (int *)this, a2, a3); /*0x4c1aa4*/
}
// IDA: 0x4BB080 — DSurface::BlitPart (80B) thin wrapper
// GetRect(src) -> v11 (src surface bounds), GetRect(this) -> v12 (dest surface
// bounds), then virtual Blit slot [3]: Blit(dest_bounds, dest_rect, src,
// src_bounds, src_rect, option1, option2). Extra stack words in the binary are
// MSVC6 thiscall argument-reuse noise.
// 0x4bb080
bool DSurface::BlitPart(
{
  int (__thiscall **DSurface_field_0x0)(DSurface *, int); // ebx
  int v8; // eax
  int v9; // eax
  unsigned char v11[28]; // [esp+Ch] [ebp-20h] BYREF
  unsigned char v12[4]; // [esp+28h] [ebp-4h] BYREF

  DSurface_field_0x0 = (int (__thiscall **)(DSurface *, int))this->vtable1; /*0x4bb098*/
  v8 = (*(int (__thiscall **)(int, unsigned char *, int, int, int))(*(unsigned int *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*((int (__thiscall **)(DSurface *, unsigned char *, int, int, int))this->vtable1 + 30))( /*0x4bb0b9*/
         this,
         v12,
         a5,
         a3,
         v8);
  return DSurface_field_0x0[3](this, v9); /*0x4bb0c2*/
}
} // namespace gamemd