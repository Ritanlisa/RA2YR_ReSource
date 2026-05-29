#include "gamemd/render/surface.hpp"

#include <windows.h>
#include <ddraw.h>
#include <cstring>

#include "gamemd/core/ddraw_init.hpp"

namespace gamemd
{

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
    if (Surface) {
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

    RECT dr = { 0, 0, Width, Height };
    RECT sr = { 0, 0, dsurf->Width, dsurf->Height };

    DWORD flags = DDBLT_WAIT;
    if (!option1 && !option2) flags |= DDBLT_KEYSRC;

    HRESULT hr = Surface->Blt(&dr, dsurf->Surface, &sr, flags, nullptr);
    return SUCCEEDED(hr);
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
    return SUCCEEDED(hr);
}

bool DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    RectangleStruct clip = {};
    return FillRectEx(clip, fill_rect, color);
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
