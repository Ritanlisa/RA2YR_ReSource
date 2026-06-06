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

    // [1] 0x04 BlitWhole
    virtual bool BlitWhole(Surface* src, bool option1, bool option2) = 0;

    // [2] 0x08 BlitPart
    virtual bool BlitPart(
        const RectangleStruct& dest_rect,
        Surface* src,
        const RectangleStruct& src_rect,
        bool option1,
        bool option2) = 0;

    // [3] 0x0C Blit
    virtual bool Blit(
        const RectangleStruct& clip_rect,
        const RectangleStruct& clip_rect2,
        Surface* src,
        const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect,
        bool option1,
        bool option2) = 0;

    // [4] 0x10 FillRectEx
    virtual bool FillRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect,
        uint32_t color) = 0;

    // [5] 0x14 FillRect
    virtual bool FillRect(
        const RectangleStruct& fill_rect,
        uint32_t color) = 0;

    // [6] 0x18 Fill
    virtual bool Fill(uint32_t color) = 0;

    // [7] 0x1C FillRectWithFlags — CPU像素写入，16bpp RGB565，支持alpha混合
    virtual bool FillRectWithFlags(
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) = 0;

    // [8] 0x20 DrawEllipseOutline — 中点椭圆算法轮廓
    virtual bool DrawEllipseOutline(
        const Point2D& center,
        int radius_w,
        int radius_h,
        const RectangleStruct& clip_rect,
        uint16_t color) = 0;

    // [9] 0x24 SetPixel
    virtual bool SetPixel(
        const Point2D& point,
        uint32_t color) = 0;

    // [10] 0x28 GetPixel
    virtual uint32_t GetPixel(const Point2D& point) = 0;

    // [11] 0x2C DrawLineEx
    virtual bool DrawLineEx(
        const RectangleStruct& clip_rect,
        const Point2D& start,
        const Point2D& end,
        uint32_t color) = 0;

    // [12] 0x30 DrawLine
    virtual bool DrawLine(
        const Point2D& start,
        const Point2D& end,
        uint32_t color) = 0;

    // [13] 0x34 DrawLineZBuf — Z-Buffer直线，写像素+写ZBuffer
    virtual bool DrawLineZBuf(
        const Point2D& start,
        const Point2D& end,
        uint16_t color,
        int fade_start,
        int fade_end,
        bool update_z_buffer) = 0;

    // [14] 0x38 DrawLineModulated — 读取目标像素，调色混合后写回
    virtual bool DrawLineModulated(
        const Point2D& start,
        const Point2D& end,
        int mod_strength,
        int fade_start,
        int fade_end,
        bool update_z_buffer) = 0;

    // [15] 0x3C DrawLineFaded — 渐变直线，浮点渐隐参数
    virtual bool DrawLineFaded(
        const Point2D& start,
        const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start,
        int fade_end,
        bool z_buffer,
        float gradient_start,
        float gradient_step,
        bool flip_dir) = 0;

    // [16] 0x40 DrawLineZBufColored — Z-Buffer着色直线，float亮度缩放
    virtual bool DrawLineZBufColored(
        const Point2D& start,
        const Point2D& end,
        const uint8_t src_rgb[3],
        float brightness,
        int fade_start,
        int fade_end) = 0;

    // [17] 0x44 WalkLine — Bresenham像素遍历，回调模式
    virtual bool WalkLine(
        const Point2D& start,
        const Point2D& end,
        void (*callback)(const Point2D&)) = 0;

    // [18] 0x48 DrawDashedLine — 虚线(模板模式, 16B数组)
    virtual bool DrawDashedLine(
        const Point2D& start,
        const Point2D& end,
        uint16_t color,
        const uint8_t stipple[16],
        int dash_offset) = 0;

    // [19] 0x4C DrawDashedLineStipple — DSurface版虚线，含Z-Buffer
    virtual bool DrawDashedLineStipple(
        const Point2D& start,
        const Point2D& end,
        uint16_t color,
        const uint8_t stipple[16],
        int dash_offset,
        bool update_z) = 0;

    // [20] 0x50 DrawStippledRect — 模板矩形
    virtual bool DrawStippledRect(
        const Point2D& top_left,
        const Point2D& bottom_right,
        uint16_t color,
        bool fill_interior) = 0;

    // [21] 0x54 DrawRectEx
    virtual bool DrawRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect,
        uint32_t color) = 0;

    // [22] 0x58 DrawRect
    virtual bool DrawRect(
        const RectangleStruct& draw_rect,
        uint32_t color) = 0;

    // [23] 0x5C Lock
    virtual void* Lock(int x, int y) = 0;

    // [24] 0x60 Unlock
    virtual bool Unlock() = 0;

    // [25] 0x64 CanLock
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) = 0;

    // [26] 0x68 vt_entry_68 — returns true (final in XSurface/BSurface)
    virtual bool vt_entry_68(uint32_t unk1, uint32_t unk2)
    {
        return true;
    }

    // [27] 0x6C IsLocked
    virtual bool IsLocked() const = 0;

    // [28] 0x70 GetBytesPerPixel
    virtual int GetBytesPerPixel() const = 0;

    // [29] 0x74 GetPitch
    virtual int GetPitch() const = 0;

    // [30] 0x78 GetRect
    virtual RectangleStruct* GetRect(RectangleStruct* out) const
    {
        out->X = 0;
        out->Y = 0;
        out->Width = Width;
        out->Height = Height;
        return out;
    }

    // [31] 0x7C GetWidth
    virtual int GetWidth() const final
    {
        return Width;
    }

    // [32] 0x80 GetHeight
    virtual int GetHeight() const final
    {
        return Height;
    }

    // [33] 0x84 IsDSurface
    virtual bool IsDSurface() const
    {
        return false;
    }

    // [34] 0x88 PutPixel — 单像素写入，边界检查
    virtual bool PutPixel(
        const Point2D& point,
        uint16_t color,
        const RectangleStruct& clip_rect) = 0;

    // [35] 0x8C GetPixelAtCoords — 单像素读取，边界检查
    virtual uint16_t GetPixelAtCoords(
        const Point2D& point,
        const RectangleStruct& clip_rect) = 0;

    // [36] 0x90 DrawGradientLine — 渐变颜色线
    virtual bool DrawGradientLine(
        const Point2D& start,
        const Point2D& end,
        int palette_idx,
        int fade_val,
        float* gradient_start,
        float* gradient_step) = 0;

    // [37] 0x94 CheckBltStatus — IDirectDrawSurface7::GetBltStatus
    virtual bool CheckBltStatus() = 0;

    // --- 辅助方法 (非虚函数) ---

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
    virtual bool Fill(uint32_t color) override;
    virtual bool FillRectWithFlags(
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) override { return false; }
    virtual bool DrawEllipseOutline(
        const Point2D& center,
        int radius_w, int radius_h,
        const RectangleStruct& clip_rect,
        uint16_t color) override;
    virtual bool SetPixel(const Point2D& point, uint32_t color) override;
    virtual uint32_t GetPixel(const Point2D& point) override;
    virtual bool DrawLineEx(
        const RectangleStruct& clip_rect, const Point2D& start,
        const Point2D& end, uint32_t color) override;
    virtual bool DrawLine(
        const Point2D& start, const Point2D& end, uint32_t color) override;
    virtual bool DrawLineZBuf(
        const Point2D& start, const Point2D& end,
        uint16_t color, int fade_start, int fade_end,
        bool update_z_buffer) override { return false; }
    virtual bool DrawLineModulated(
        const Point2D& start, const Point2D& end,
        int mod_strength, int fade_start, int fade_end,
        bool update_z_buffer) override { return false; }
    virtual bool DrawLineFaded(
        const Point2D& start, const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start, int fade_end,
        bool z_buffer, float gradient_start,
        float gradient_step, bool flip_dir) override { return false; }
    virtual bool DrawLineZBufColored(
        const Point2D& start, const Point2D& end,
        const uint8_t src_rgb[3], float brightness,
        int fade_start, int fade_end) override { return false; }
    virtual bool WalkLine(
        const Point2D& start, const Point2D& end,
        void (*callback)(const Point2D&)) override;
    virtual bool DrawDashedLine(
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset) override;
    virtual bool DrawDashedLineStipple(
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset, bool update_z) override { return false; }
    virtual bool DrawStippledRect(
        const Point2D& top_left, const Point2D& bottom_right,
        uint16_t color, bool fill_interior) override { return false; }
    virtual bool DrawRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect, uint32_t color) override;
    virtual bool DrawRect(const RectangleStruct& draw_rect, uint32_t color) override;

    virtual void* Lock(int x, int y) override { return nullptr; }
    virtual bool Unlock() override { return false; }
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) override { return false; }
    virtual bool IsLocked() const override final { return LockCount > 0; }

    virtual bool PutPixel(
        const Point2D& point,
        uint16_t color,
        const RectangleStruct& clip_rect) override;

    virtual uint16_t GetPixelAtCoords(
        const Point2D& point,
        const RectangleStruct& clip_rect) override;

    virtual bool DrawGradientLine(
        const Point2D& start, const Point2D& end,
        int palette_idx, int fade_val,
        float* gradient_start, float* gradient_step) override { return false; }

    virtual bool CheckBltStatus() override { return false; }

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
    static constexpr auto Tile       = 0x8872FC;
    static constexpr auto Sidebar    = 0x887300;
    static constexpr auto Primary    = 0x887308;
    static constexpr auto Hidden     = 0x88730C;
    static constexpr auto Alternate  = 0x887310;
    static constexpr auto Hidden_2   = 0x887314;
    static constexpr auto Composite  = 0x88731C;

    DSurface(int width, int height, bool back_buffer, bool force_3d) noexcept;

    virtual ~DSurface() override;

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
    virtual bool FillRectWithFlags(
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) override;
    virtual bool DrawLineZBuf(
        const Point2D& start, const Point2D& end,
        uint16_t color, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineModulated(
        const Point2D& start, const Point2D& end,
        int mod_strength, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineFaded(
        const Point2D& start, const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start, int fade_end,
        bool z_buffer, float gradient_start,
        float gradient_step, bool flip_dir) override;
    virtual bool DrawLineZBufColored(
        const Point2D& start, const Point2D& end,
        const uint8_t src_rgb[3], float brightness,
        int fade_start, int fade_end) override;
    virtual bool DrawDashedLineStipple(
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset, bool update_z) override;
    virtual bool DrawStippledRect(
        const Point2D& top_left, const Point2D& bottom_right,
        uint16_t color, bool fill_interior) override;
    virtual void* Lock(int x, int y) override;
    virtual bool Unlock() override;
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) override;
    virtual int GetBytesPerPixel() const override { return BytesPerPixel; }
    virtual int GetPitch() const override;
    virtual bool DrawGradientLine(
        const Point2D& start, const Point2D& end,
        int palette_idx, int fade_val,
        float* gradient_start, float* gradient_step) override;
    virtual bool CheckBltStatus() override;
    virtual bool IsDSurface() const override final { return true; }

    // IDA: DSurface::CreatePrimary pixel format detection (0x4BA770 bit-shift logic)
    static void DetectPixelFormat(const DDPIXELFORMAT& pf);

    int BytesPerPixel;
    void* LockedSurface;
    bool Allocated;
    bool VRAMmed;
    uint8_t align_1A[2];
    LPDIRECTDRAWSURFACE7 Surface;
    DDSURFACEDESC2* SurfaceDesc;

protected:
    explicit DSurface(noinit_t) noexcept
        : XSurface(noinit_t{})
    {
    }
};

} // namespace gamemd
