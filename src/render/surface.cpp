#include "gamemd/render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/core/reverse_marker.hpp"

namespace gamemd
{

namespace {

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

// IDA: 0x7BC2B0 -- ClipLine (717B)
// Cohen-Sutherland line clipping against clip_rect.
// Modifies start/end in-place, returns true if visible portion exists.
REVERSE(0x7bc2b0, "ClipLine: Cohen-Sutherland line clip", "Capture")
bool ClipLine(int* start, int* end, int* clip_rect)
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

} // anonymous namespace

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

bool DSurface::BlitWhole(class Surface* src, bool option1, bool option2)
{
    if (!Surface || !src) return false;
    auto* dsurf = dynamic_cast<DSurface*>(src);
    if (!dsurf || !dsurf->Surface) return false;

    // IDA: DSurface::Blit -- primary surface coordinate adjustment
    // When blit-ing to the primary surface in windowed mode,
    // destination coordinates must be offset by the window position
    RECT dr = { 0, 0, Width, Height };
    if (Surface == g_DDraw_PrimarySurface) {
        RECT client_rect;
        HWND hwnd = GetActiveWindow();
        if (hwnd) {
            GetClientRect(hwnd, &client_rect);
            POINT pt = { client_rect.left, client_rect.top };
            ClientToScreen(hwnd, &pt);
            OffsetRect(&dr, pt.x, pt.y);
        }
    }

    RECT sr = { 0, 0, dsurf->Width, dsurf->Height };

    DWORD flags = DDBLT_WAIT;
    if (!option1 && !option2) flags |= DDBLT_KEYSRC;

    HRESULT hr = Surface->Blt(&dr, dsurf->Surface, &sr, flags, nullptr);
    if (SUCCEEDED(hr)) return true;

    // Fallback: manual Lock/memcpy for cnc-ddraw or software surfaces
    DDSURFACEDESC2 sd = {}, dd = {};
    sd.dwSize = sizeof(sd); dd.dwSize = sizeof(dd);
    if (FAILED(dsurf->Surface->Lock(nullptr, &sd, DDLOCK_WAIT, nullptr)))
        return false;
    if (FAILED(Surface->Lock(nullptr, &dd, DDLOCK_WAIT, nullptr))) {
        dsurf->Surface->Unlock(nullptr);
        return false;
    }

    auto* s = static_cast<uint8_t*>(sd.lpSurface);
    auto* d = static_cast<uint8_t*>(dd.lpSurface);
    int h = (dsurf->Height < Height) ? dsurf->Height : Height;
    int wbytes = (dsurf->Width < Width) ? dsurf->Width * 2 : Width * 2;
    for (int y = 0; y < h; y++)
        memcpy(d + y * dd.lPitch, s + y * sd.lPitch, wbytes);

    Surface->Unlock(nullptr);
    dsurf->Surface->Unlock(nullptr);
    return true;
}

bool DSurface::BlitPart(
    const RectangleStruct& dest_rect, class Surface* src,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    if (!Surface || !src) return false;
    auto* dsurf = dynamic_cast<DSurface*>(src);
    if (!dsurf || !dsurf->Surface) return false;

    RECT dr = { dest_rect.X, dest_rect.Y,
                dest_rect.X + dest_rect.Width, dest_rect.Y + dest_rect.Height };
    RECT sr = { src_rect.X, src_rect.Y,
                src_rect.X + src_rect.Width, src_rect.Y + src_rect.Height };

    DWORD flags = DDBLT_WAIT;
    if (!option1 && !option2) flags |= DDBLT_KEYSRC;

    HRESULT hr = Surface->Blt(&dr, dsurf->Surface, &sr, flags, nullptr);
    return SUCCEEDED(hr);
}

bool DSurface::Blit(
    const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
    class Surface* src, const RectangleStruct& dest_rect,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    if (!Surface || !src) return false;
    auto* dsurf = dynamic_cast<DSurface*>(src);
    if (!dsurf || !dsurf->Surface) return false;

    RECT dr = { dest_rect.X, dest_rect.Y,
                dest_rect.X + dest_rect.Width, dest_rect.Y + dest_rect.Height };
    RECT sr = { src_rect.X, src_rect.Y,
                src_rect.X + src_rect.Width, src_rect.Y + src_rect.Height };

    (void)clip_rect;
    (void)clip_rect2;

    DWORD flags = DDBLT_WAIT;
    if (!option1 && !option2) flags |= DDBLT_KEYSRC;

    HRESULT hr = Surface->Blt(&dr, dsurf->Surface, &sr, flags, nullptr);
    return SUCCEEDED(hr);
}

bool DSurface::FillRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& fill_rect, uint32_t color)
{
    if (!Surface) return false;

    (void)clip_rect;

    DDBLTFX fx = {};
    fx.dwSize      = sizeof(fx);
    fx.dwFillColor = color;

    RECT r = { fill_rect.X, fill_rect.Y,
               fill_rect.X + fill_rect.Width, fill_rect.Y + fill_rect.Height };

    HRESULT hr = Surface->Blt(&r, nullptr, nullptr, DDBLT_COLORFILL | DDBLT_WAIT, &fx);
    if (SUCCEEDED(hr)) return true;

    // cnc-ddraw fallback: manual pixel write via Lock/Unlock
    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);
    if (FAILED(Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr)))
        return false;

    uint16_t* buf = static_cast<uint16_t*>(desc.lpSurface);
    int pitch = desc.lPitch / 2;

    int x0 = fill_rect.X, y0 = fill_rect.Y;
    int x1 = fill_rect.X + fill_rect.Width;
    int y1 = fill_rect.Y + fill_rect.Height;
    if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0;
    if (x1 > Width) x1 = Width; if (y1 > Height) y1 = Height;

    for (int y = y0; y < y1; y++)
        for (int x = x0; x < x1; x++)
            buf[y * pitch + x] = static_cast<uint16_t>(color);

    Surface->Unlock(nullptr);
    return true;
}

bool DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    RectangleStruct clip = {};
    return FillRectEx(clip, fill_rect, color);
}

bool DSurface::FillRectWithFlags(
    const RectangleStruct& clip_rect,
    const ColorStruct& color,
    int opacity_percent)
{
    (void)clip_rect;
    (void)color;
    (void)opacity_percent;
    return XSurface::FillRectWithFlags(clip_rect, color, opacity_percent);
}

// IDA: 0x4BAD80 -- DSurface::Lock (315B)
// Returns byte offset into locked surface buffer, or 0 on failure.
// Handles lost surface restoration and re-locking.
void* DSurface::Lock(int x, int y)
{
    // IDA: if (!g_DDraw_Initialized && !g_DDraw_Active) return 0
    if (!g_DDraw_Initialized && !g_DDraw_Active)
        return nullptr;

    // IDA: v4 = this+7 (=Surface), check IsLost via vtable[24] (0x60)
    if (Surface) {
        if (Surface->IsLost() == DDERR_SURFACELOST) {
            // IDA: if Restore(vtable[27]) fails or still lost
            if (FAILED(Surface->Restore()) || Surface->IsLost() == DDERR_SURFACELOST)
                return nullptr;

            // IDA: save LockCount, unlock all, then increment
            int saved = LockCount;
            if (saved > 0) {
                LockCount = 0;
                (void)Unlock();          // vtable[23] = Unlock
                LockCount = 1;
                (void)Unlock();          // vtable[24] = Unlock (2nd one?)
                LockCount = saved;
            }
        }
    }

    if (x < 0 || y < 0)
        return nullptr;

    // IDA: if LockCount > 0 -> nested lock (just increment and return offset)
    if (LockCount > 0) {
        ++LockCount;
        // IDA: return x * BytesPerPixel + y * Pitch + LockedBuffer
        int pitch = GetPitch();
        int bpp = GetBytesPerPixel();
        return static_cast<uint8_t*>(LockedSurface) + x * bpp + y * pitch;
    }

    // IDA: First lock -- get surface descriptor via IDDS7::Lock (vtable[25] = 0x64)
    if (!Surface) return nullptr;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    // IDA: Lock(surface, 0, &desc, DDLOCK_WAIT, 0)
    HRESULT hr = Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr);
    if (FAILED(hr))
        return nullptr;

    // IDA: memcpy SurfaceDesc from the DDSURFACEDESC2
    BytesPerPixel = (desc.ddpfPixelFormat.dwRGBBitCount + 7) >> 3;
    VRAMmed       = (desc.ddsCaps.dwCaps & DDSCAPS_VIDEOMEMORY) != 0;
    LockedSurface = desc.lpSurface;

    ++LockCount;
    return static_cast<uint8_t*>(LockedSurface) + x * BytesPerPixel + y * static_cast<int>(desc.lPitch);
}

// IDA: 0x4BAF40 -- DSurface::Unlock (154B)
// Decrements lock count, unlocks when it reaches 0.
// Also handles lost surface restoration pattern.
bool DSurface::Unlock()
{
    // IDA: check DDraw active
    if (g_DDraw_Initialized || g_DDraw_Active) {
        if (Surface && Surface->IsLost() == DDERR_SURFACELOST) {
            // IDA: if Restore succeeds and not lost
            if (SUCCEEDED(Surface->Restore()) && Surface->IsLost() != DDERR_SURFACELOST) {
                int saved = LockCount;
                if (saved > 0) {
                    LockCount = 0;
                    Surface->Unlock(nullptr);    // vtable[23]
                    ++LockCount;
                    Surface->Unlock(nullptr);    // vtable[24]
                    LockCount = saved;
                }
            }
        }
    }

    // IDA: if LockCount <= 0, return false
    if (LockCount <= 0)
        return false;

    // IDA: decrement LockCount
    int v6 = LockCount - 1;
    LockCount = v6;

    // IDA: if count reaches 0, call Unlock (vtable[32] = 0x80)
    if (v6 == 0) {
        Surface->Unlock(nullptr);
        LockedSurface = nullptr;
    }
    return true;
}

// IDA: 0x4BAEC0 -- DSurface::CanLock (95B)
// Probes whether the surface can be locked without actually locking.
bool DSurface::CanLock(uint32_t unk1, uint32_t unk2)
{
    (void)unk1;
    (void)unk2;

    // IDA: if LockCount > 0, already locked -- can lock again
    if (LockCount > 0)
        return true;

    if (!Surface)
        return false;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    // IDA: Lock with DDLOCK_TESTONLY flag -> probe without actually locking
    HRESULT hr = Surface->Lock(nullptr, &desc, DDLOCK_WAIT, nullptr);
    if (FAILED(hr))
        return false;

    // IDA: immediately Unlock after probe
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

// IDA: 0x4BAF20 -- DSurface::CheckBltStatus (17B)
// Calls IDirectDrawSurface7::GetBltStatus(DDGBS_ISBLTDONE)
// Returns true if blit is complete (DD_OK)
bool DSurface::CheckBltStatus()
{
    // IDA: (*(*(this+7) + 52))(*(this+7), 1) == 0
    // vtable offset 52/4 = 13 = GetBltStatus
    if (!Surface)
        return true;
    return SUCCEEDED(Surface->GetBltStatus(DDGBS_ISBLTDONE));
}

void* BSurface::Lock(int x, int y)
{
    (void)x;
    (void)y;
    if (!Buffer) {
        Buffer = new byte[Width * Height * BytesPerPixel];
        std::memset(Buffer, 0, Width * Height * BytesPerPixel);
    }
    return Buffer;
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
REVERSE(0x7baeb0, "XSurface::SetPixel: pixel write", "Capture")
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
REVERSE(0x7bae60, "XSurface::GetPixel: pixel read", "Capture")
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
REVERSE(0x7baf90, "XSurface::PutPixel: pixel write + bounds", "Capture")
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
REVERSE(0x7baf10, "XSurface::GetPixelAtCoords: pixel read + bounds", "Capture")
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
REVERSE(0x7bab90, "XSurface::WalkLine: Bresenham walker", "Capture")
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
REVERSE(0x7ba610, "XSurface::DrawLineEx: clipped line", "Capture")
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
REVERSE(0x7ba5e0, "XSurface::DrawLine: no-clip wrapper", "Capture")
bool XSurface::DrawLine(const Point2D& start, const Point2D& end, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return DrawLineEx(clip, start, end, color);
}

// IDA: 0x7BA8C0 -- XSurface::DrawDashedLine (621B)
// vtable[18] 0x48 -- Bresenham dashed line with 16-byte stipple pattern
REVERSE(0x7ba8c0, "XSurface::DrawDashedLine: stipple line", "Capture")
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
REVERSE(0x7bbab0, "XSurface::Fill: fill surface", "Capture")
bool XSurface::Fill(uint32_t color)
{
    RectangleStruct rect;
    GetRect(&rect);
    return FillRectEx(rect, rect, color);
}

// IDA: 0x7BADC0 -- XSurface::DrawRectEx (158B)
// vtable[21] 0x54 -- rectangle outline drawing 4 edges via DrawLineEx
REVERSE(0x7badc0, "XSurface::DrawRectEx: rect outline", "Capture")
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
REVERSE(0x7bad90, "XSurface::DrawRect: no-clip rect", "Capture")
bool XSurface::DrawRect(const RectangleStruct& draw_rect, uint32_t color)
{
    RectangleStruct clip;
    GetRect(&clip);
    return DrawRectEx(clip, draw_rect, color);
}

// IDA: 0x7BB350 -- XSurface::DrawEllipseOutline (1478B)
// vtable[8] 0x20 -- midpoint ellipse algorithm
REVERSE(0x7bb350, "XSurface::DrawEllipseOutline: ellipse", "Capture")
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

// --- DSurface line drawing (Batch D) ---

// IDA: 0x4BF750 -- DSurface::DrawGradientLine (1499B)
// vtable[36] 0x90 -- line with palette gradient interpolation
bool DSurface::DrawGradientLine(
    const Point2D& start, const Point2D& end,
    int palette_idx, int fade_val,
    float* gradient_start, float* gradient_step)
{
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    RectangleStruct clipped;
    ClipRectIntersection(&clipped, &surf_rect, &surf_rect, nullptr, nullptr);

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
    int dx = x2 - x1;
    int ady = (y2 >= y1) ? (y2 - y1) : (y1 - y2);

    int bpp = GetBytesPerPixel();
    void* buf = Lock(x1, y1);
    if (!buf)
        return false;

    int pitch = GetPitch();
    float grad = gradient_start ? *gradient_start : 0.0f;
    float step = gradient_step ? *gradient_step : 0.0f;

    if (y1 == y2)
    {
        int count = dx + 1;
        if (bpp == 1)
        {
            auto* p = static_cast<uint8_t*>(buf);
            for (int i = 0; i < count; ++i, grad += step)
                p[i] = static_cast<uint8_t>(palette_idx);
        }
        else
        {
            auto* p = static_cast<uint16_t*>(buf);
            for (int i = 0; i < count; ++i, grad += step)
                p[i] = static_cast<uint16_t>(palette_idx);
        }
        Unlock();
        if (gradient_start) *gradient_start = grad;
        return true;
    }

    if (x1 == x2)
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_count = (y1 <= y2) ? (y2 - y1) : (y1 - y2);
        int y_step = (y2 >= y1) ? pitch : -pitch;

        if (bpp == 1)
        {
            auto* p = static_cast<uint8_t*>(buf);
            for (int i = 0; i <= y_count; ++i, grad += step)
            {
                *p = static_cast<uint8_t>(palette_idx);
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_step);
            }
        }
        else
        {
            auto* p = static_cast<uint16_t*>(buf);
            int row_off = y_step / 2;
            for (int i = 0; i <= y_count; ++i, grad += step)
            {
                *p = static_cast<uint16_t>(palette_idx);
                p += row_off;
            }
        }
        Unlock();
        if (gradient_start) *gradient_start = grad;
        return true;
    }

    if (dx >= ady)
    {
        int y_step = (y2 >= y1) ? 1 : -1;
        int d = 2 * ady - dx;
        int cy = y1;

        if (bpp == 1)
        {
            auto* p = static_cast<uint8_t*>(buf);
            for (int x = 0; x <= dx; ++x, grad += step)
            {
                p[x] = static_cast<uint8_t>(palette_idx);
                if (d > 0) { cy += y_step; p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_step * pitch); d -= 2 * dx; }
                d += 2 * ady;
            }
        }
        else
        {
            auto* p = static_cast<uint16_t*>(buf);
            int row_step = y_step * (pitch / 2);
            for (int x = 0; x <= dx; ++x, grad += step)
            {
                p[x] = static_cast<uint16_t>(palette_idx);
                if (d > 0) { cy += y_step; p += row_step; d -= 2 * dx; }
                d += 2 * ady;
            }
        }
    }
    else
    {
        int y_start = (y1 <= y2) ? y1 : y2;
        int y_end   = (y1 <= y2) ? y2 : y1;
        int d = 2 * dx - ady;
        int cx = 0;
        int y_dir = (y2 >= y1) ? pitch : -pitch;

        if (bpp == 1)
        {
            auto* p = static_cast<uint8_t*>(buf);
            for (int y = y_start; y <= y_end; ++y, grad += step)
            {
                p[cx] = static_cast<uint8_t>(palette_idx);
                if (d > 0) { ++cx; d -= 2 * ady; }
                d += 2 * dx;
                p = reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(p) + y_dir);
            }
        }
        else
        {
            auto* p = static_cast<uint16_t*>(buf);
            int row_off = y_dir / 2;
            for (int y = y_start; y <= y_end; ++y, grad += step)
            {
                p[cx] = static_cast<uint16_t>(palette_idx);
                if (d > 0) { ++cx; d -= 2 * ady; }
                d += 2 * dx;
                p += row_off;
            }
        }
    }

    Unlock();
    if (gradient_start) *gradient_start = grad;
    return true;
}

// IDA: 0x4C0E30 -- DSurface::DrawStippledRect (1537B)
// vtable[20] 0x50 -- filled rectangle with stipple pattern
bool DSurface::DrawStippledRect(
    const Point2D& top_left, const Point2D& bottom_right,
    uint16_t color, bool fill_interior)
{
    RectangleStruct surf_rect;
    GetRect(&surf_rect);

    int x0 = top_left.X;
    int y0 = top_left.Y;
    int x1 = bottom_right.X;
    int y1 = bottom_right.Y;

    if (x0 < 0) x0 = 0;
    if (y0 < 0) y0 = 0;
    if (x1 >= surf_rect.Width)  x1 = surf_rect.Width - 1;
    if (y1 >= surf_rect.Height) y1 = surf_rect.Height - 1;

    if (x0 > x1 || y0 > y1)
        return false;

    int bpp = GetBytesPerPixel();
    int w = x1 - x0 + 1;

    if (fill_interior)
    {
        for (int y = y0; y <= y1; ++y)
        {
            void* buf = Lock(x0, y);
            if (!buf) continue;

            if (bpp == 1)
            {
                auto* p = static_cast<uint8_t*>(buf);
                for (int x = 0; x < w; ++x)
                    p[x] = static_cast<uint8_t>(color);
            }
            else
            {
                auto* p = static_cast<uint16_t*>(buf);
                for (int x = 0; x < w; ++x)
                    p[x] = color;
            }
            Unlock();
        }
    }
    else
    {
        DrawLineEx(surf_rect, Point2D(x0, y0), Point2D(x1, y0), color);
        DrawLineEx(surf_rect, Point2D(x0, y1), Point2D(x1, y1), color);
        DrawLineEx(surf_rect, Point2D(x0, y0), Point2D(x0, y1), color);
        DrawLineEx(surf_rect, Point2D(x1, y0), Point2D(x1, y1), color);
    }
    return true;
}

// IDA: 0x4C0750 -- DSurface::DrawDashedLineStipple (1758B)
// vtable[19] 0x4C -- dashed line with Z-buffer stipple pattern
bool DSurface::DrawDashedLineStipple(
    const Point2D& start, const Point2D& end,
    uint16_t color, const uint8_t stipple[16],
    int dash_offset, bool update_z)
{
    (void)update_z;
    return XSurface::DrawDashedLine(start, end, color, stipple, dash_offset);
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
