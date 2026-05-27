#pragma once

#include <windows.h>
#include <ddraw.h>

#include "..\core\math.hpp"
#include "..\core\enums.hpp"
#include "..\fundamentals.hpp"

namespace gamemd
{

struct SHPStruct;
class ConvertClass;

class Surface
{
public:
    Surface(int width, int height) noexcept
        : Width(width), Height(height)
    {
    }

    virtual ~Surface() = default;

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) = 0;

    virtual bool BlitPart(
        const RectangleStruct& dest_rect,
        Surface* src,
        const RectangleStruct& src_rect,
        bool option1,
        bool option2) = 0;

    virtual bool Blit(
        const RectangleStruct& clip_rect,
        const RectangleStruct& clip_rect2,
        Surface* src,
        const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect,
        bool option1,
        bool option2) = 0;

    virtual bool FillRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect,
        uint32_t color) = 0;

    virtual bool FillRect(
        const RectangleStruct& fill_rect,
        uint32_t color) = 0;

    virtual bool Fill(uint32_t color) = 0;

    virtual bool SetPixel(
        const Point2D& point,
        uint32_t color) = 0;

    virtual uint32_t GetPixel(const Point2D& point) = 0;

    virtual bool DrawLineEx(
        const RectangleStruct& clip_rect,
        const Point2D& start,
        const Point2D& end,
        uint32_t color) = 0;

    virtual bool DrawLine(
        const Point2D& start,
        const Point2D& end,
        uint32_t color) = 0;

    virtual bool DrawRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect,
        uint32_t color) = 0;

    virtual bool DrawRect(
        const RectangleStruct& draw_rect,
        uint32_t color) = 0;

    virtual void* Lock(int x, int y) = 0;

    virtual bool Unlock() = 0;

    virtual bool CanLock(uint32_t unk1, uint32_t unk2) { return false; }

    virtual bool IsLocked() const = 0;

    virtual int GetBytesPerPixel() const = 0;

    virtual int GetPitch() const = 0;

    virtual RectangleStruct* GetRect(RectangleStruct* out) const
    {
        out->X = 0;
        out->Y = 0;
        out->Width = Width;
        out->Height = Height;
        return out;
    }

    virtual int GetWidth() const final
    {
        return Width;
    }

    virtual int GetHeight() const final
    {
        return Height;
    }

    virtual bool IsDSurface() const
    {
        return false;
    }

    RectangleStruct GetRect() const
    {
        RectangleStruct buf;
        GetRect(&buf);
        return buf;
    }

    void DrawSHP(
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
        int zs_y);

    void DrawSHP(
        ConvertClass* palette,
        SHPStruct* shp,
        int frame_index,
        const Point2D& location);

    static Point2D* DrawText(
        Point2D* out,
        const wchar_t* text,
        Surface* surface,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3,
        uint32_t flags,
        uint32_t unknown9);

    static Point2D DrawText(
        const wchar_t* text,
        Surface* surface,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3 = 0,
        uint32_t flags = 0x16,
        uint32_t unknown9 = 1);

    Point2D DrawText(
        const wchar_t* text,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3 = 0,
        uint32_t flags = 0x16);

    Point2D DrawText(
        const wchar_t* text,
        const Point2D& location,
        uint16_t color,
        uint32_t option3 = 0,
        uint32_t flags = 0x16);

    int Width;
    int Height;

protected:
    explicit Surface(noinit_t) noexcept {}
};

class XSurface : public Surface
{
public:
    XSurface(int width, int height) noexcept
        : Surface(width, height)
        , LockCount(0)
    {
    }

    virtual ~XSurface() override = default;

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) override { return false; }
    virtual bool BlitPart(
        const RectangleStruct& dest_rect, Surface* src,
        const RectangleStruct& src_rect, bool option1, bool option2) override { return false; }
    virtual bool Blit(
        const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
        Surface* src, const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect, bool option1, bool option2) override { return false; }
    virtual bool FillRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect, uint32_t color) override { return false; }
    virtual bool FillRect(const RectangleStruct& fill_rect, uint32_t color) override { return false; }
    virtual bool Fill(uint32_t color) override { return false; }
    virtual bool SetPixel(const Point2D& point, uint32_t color) override { return false; }
    virtual uint32_t GetPixel(const Point2D& point) override { return 0; }
    virtual bool DrawLineEx(
        const RectangleStruct& clip_rect, const Point2D& start,
        const Point2D& end, uint32_t color) override { return false; }
    virtual bool DrawLine(
        const Point2D& start, const Point2D& end, uint32_t color) override { return false; }
    virtual bool DrawRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect, uint32_t color) override { return false; }
    virtual bool DrawRect(const RectangleStruct& draw_rect, uint32_t color) override { return false; }

    virtual void* Lock(int x, int y) override { return nullptr; }
    virtual bool Unlock() override { return false; }
    virtual bool IsLocked() const override final { return LockCount > 0; }

    virtual bool IsDSurface() const override { return false; }

    int LockCount;

protected:
    explicit XSurface(noinit_t) noexcept
        : Surface(noinit_t{})
    {
    }
};

class BSurface : public XSurface
{
public:
    BSurface(int width, int height, int bytes_per_pixel) noexcept
        : XSurface(width, height)
        , BytesPerPixel(bytes_per_pixel)
        , Buffer(nullptr)
    {
    }

    virtual ~BSurface() override = default;

    virtual void* Lock(int x, int y) override;
    virtual int GetBytesPerPixel() const override { return BytesPerPixel; }
    virtual int GetPitch() const override { return Width * BytesPerPixel; }
    virtual bool IsDSurface() const override final { return false; }

    int BytesPerPixel;
    byte* Buffer;

protected:
    explicit BSurface(noinit_t) noexcept
        : XSurface(noinit_t{})
    {
    }
};

class DSurface : public XSurface
{
public:
    DSurface(int width, int height, bool back_buffer, bool force_3d) noexcept;

    virtual ~DSurface() override = default;

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) override;
    virtual bool BlitPart(
        const RectangleStruct& dest_rect, Surface* src,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool Blit(
        const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
        Surface* src, const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool FillRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect, uint32_t color) override;
    virtual bool FillRect(const RectangleStruct& fill_rect, uint32_t color) override;
    virtual void* Lock(int x, int y) override;
    virtual bool Unlock() override;
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) override;
    virtual int GetBytesPerPixel() const override { return BytesPerPixel; }
    virtual int GetPitch() const override;
    virtual bool IsDSurface() const override final { return true; }

    int BytesPerPixel;
    void* LockedSurface;
    bool Allocated;
    bool VRAMmed;
    uint8_t align_1A[2];
    IDirectDrawSurface* Surface;
    DDSURFACEDESC2* SurfaceDesc;

protected:
    explicit DSurface(noinit_t) noexcept
        : XSurface(noinit_t{})
    {
    }
};

} // namespace gamemd
