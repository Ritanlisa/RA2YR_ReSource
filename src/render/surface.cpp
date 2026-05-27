#include "gamemd/render/surface.hpp"

#include <cstring>

namespace gamemd
{

// --- DSurface ---

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
}

bool DSurface::BlitWhole(Surface* src, bool option1, bool option2)
{
    (void)src;
    (void)option1;
    (void)option2;
    return false;
}

bool DSurface::BlitPart(
    const RectangleStruct& dest_rect, Surface* src,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    (void)dest_rect;
    (void)src;
    (void)src_rect;
    (void)option1;
    (void)option2;
    return false;
}

bool DSurface::Blit(
    const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
    Surface* src, const RectangleStruct& dest_rect,
    const RectangleStruct& src_rect, bool option1, bool option2)
{
    (void)clip_rect;
    (void)clip_rect2;
    (void)src;
    (void)dest_rect;
    (void)src_rect;
    (void)option1;
    (void)option2;
    return false;
}

bool DSurface::FillRectEx(
    const RectangleStruct& clip_rect,
    const RectangleStruct& fill_rect, uint32_t color)
{
    (void)clip_rect;
    (void)fill_rect;
    (void)color;
    return false;
}

bool DSurface::FillRect(const RectangleStruct& fill_rect, uint32_t color)
{
    (void)fill_rect;
    (void)color;
    return false;
}

void* DSurface::Lock(int x, int y)
{
    (void)x;
    (void)y;
    return nullptr;
}

bool DSurface::Unlock()
{
    return false;
}

bool DSurface::CanLock(uint32_t unk1, uint32_t unk2)
{
    (void)unk1;
    (void)unk2;
    return false;
}

int DSurface::GetPitch() const
{
    return Width * BytesPerPixel;
}

// --- BSurface ---

void* BSurface::Lock(int x, int y)
{
    (void)x;
    (void)y;
    return Buffer;
}

// --- Surface ---

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

// TODO: complete Surface and DSurface implementations

} // namespace gamemd
