#include "gamemd/render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "gamemd/core/ddraw_init.hpp"

namespace gamemd
{

// IDA: 0x4BA770 — DSurface::CreatePrimary pixel format detection logic
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

    auto* ctx = DDraw_GetContext();
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

    // IDA: DSurface::Blit — primary surface coordinate adjustment
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

bool DSurface::DrawLineZBuf(
    const Point2D& start, const Point2D& end,
    uint16_t color, int fade_start, int fade_end,
    bool update_z_buffer)
{
    (void)start; (void)end; (void)color;
    (void)fade_start; (void)fade_end; (void)update_z_buffer;
    return false;
}

bool DSurface::DrawLineModulated(
    const Point2D& start, const Point2D& end,
    int mod_strength, int fade_start, int fade_end,
    bool update_z_buffer)
{
    (void)start; (void)end; (void)mod_strength;
    (void)fade_start; (void)fade_end; (void)update_z_buffer;
    return false;
}

bool DSurface::DrawLineFaded(
    const Point2D& start, const Point2D& end,
    const uint8_t* stipple_pattern,
    int fade_start, int fade_end,
    bool z_buffer, float gradient_start,
    float gradient_step, bool flip_dir)
{
    (void)start; (void)end; (void)stipple_pattern;
    (void)fade_start; (void)fade_end; (void)z_buffer;
    (void)gradient_start; (void)gradient_step; (void)flip_dir;
    return false;
}

bool DSurface::DrawLineZBufColored(
    const Point2D& start, const Point2D& end,
    const uint8_t src_rgb[3], float brightness,
    int fade_start, int fade_end)
{
    (void)start; (void)end; (void)src_rgb; (void)brightness;
    (void)fade_start; (void)fade_end;
    return false;
}

bool DSurface::DrawDashedLineStipple(
    const Point2D& start, const Point2D& end,
    uint16_t color, const uint8_t stipple[16],
    int dash_offset, bool update_z)
{
    (void)start; (void)end; (void)color; (void)stipple;
    (void)dash_offset; (void)update_z;
    return false;
}

bool DSurface::DrawStippledRect(
    const Point2D& top_left, const Point2D& bottom_right,
    uint16_t color, bool fill_interior)
{
    (void)top_left; (void)bottom_right; (void)color; (void)fill_interior;
    return false;
}

void* DSurface::Lock(int x, int y)
{
    if (!Surface) return nullptr;

    DDSURFACEDESC2 desc = {};
    desc.dwSize = sizeof(desc);

    RECT r = { x, y, x + 1, y + 1 };
    HRESULT hr = Surface->Lock(&r, &desc, DDLOCK_WAIT, nullptr);
    if (FAILED(hr)) return nullptr;

    LockedSurface = desc.lpSurface;
    return LockedSurface;
}

bool DSurface::Unlock()
{
    if (!Surface) return false;
    HRESULT hr = Surface->Unlock(nullptr);
    LockedSurface = nullptr;
    return SUCCEEDED(hr);
}

bool DSurface::CanLock(uint32_t unk1, uint32_t unk2)
{
    (void)unk1;
    (void)unk2;
    return Surface != nullptr;
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

bool DSurface::DrawGradientLine(
    const Point2D& start, const Point2D& end,
    int palette_idx, int fade_val,
    float* gradient_start, float* gradient_step)
{
    (void)start; (void)end; (void)palette_idx; (void)fade_val;
    (void)gradient_start; (void)gradient_step;
    return false;
}

bool DSurface::CheckBltStatus()
{
    return Surface != nullptr
        && SUCCEEDED(Surface->GetBltStatus(DDGBS_CANBLT));
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

} // namespace gamemd
