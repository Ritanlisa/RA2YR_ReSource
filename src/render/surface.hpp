#pragma once

#include <windows.h>
#include <ddraw.h>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

struct SHPStruct;
class ConvertClass;  // full definition in system/convert_class.hpp

// Surface — abstract render-target base class.
// IDA evidence: vtable 0x7E2198 (32 entries; 25 slots share the
// `xor eax,eax` default stub 0x4C9150, i.e. never called through base).
// Width@+0x04 / Height@+0x08 proven by Surface::GetWidth (0x411540:
// mov eax,[ecx+4]) / Surface::GetHeight (0x411550: mov eax,[ecx+8]).
class Surface
{
public:
    // vtable [0]: scalar deleting destructor
    virtual ~Surface() = 0
; // abstract base — deleting dtor defined in surface.cpp

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) = 0;
    virtual bool BlitPart(
        const RectangleStruct& dest_rect, Surface* src,
        const RectangleStruct& src_rect, bool option1, bool option2) = 0;
    virtual bool Blit(
        const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
        Surface* src, const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect, bool option1, bool option2) = 0;
    virtual bool FillRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect, uint32_t color) = 0;
    virtual bool FillRect(const RectangleStruct& fill_rect, uint32_t color) = 0;
    virtual bool Fill(uint32_t color) = 0;
    virtual bool FillRectWithFlags(
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) = 0;
    virtual bool DrawEllipseOutline(
        const Point2D& center,
        int radius_w, int radius_h,
        const RectangleStruct& clip_rect,
        uint16_t color) = 0;
    virtual bool SetPixel(const Point2D& point, uint32_t color) = 0;
    virtual uint32_t GetPixel(const Point2D& point) = 0;
    virtual bool DrawLineEx(
        const RectangleStruct& clip_rect, const Point2D& start,
        const Point2D& end, uint32_t color) = 0;
    virtual bool DrawLine(const Point2D& start, const Point2D& end, uint32_t color) = 0;
    virtual bool DrawLineZBuf(
        const Point2D& start, const Point2D& end,
        uint16_t color, int fade_start, int fade_end,
        bool update_z_buffer) = 0;
    virtual bool DrawLineModulated(
        const Point2D& start, const Point2D& end,
        int mod_strength, int fade_start, int fade_end,
        bool update_z_buffer) = 0;
    virtual bool DrawLineFaded(
        const Point2D& start, const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start, int fade_end,
        bool z_buffer, float gradient_start,
        float gradient_step, bool flip_dir) = 0;
    virtual bool DrawLineZBufColored(
        const Point2D& start, const Point2D& end,
        const uint8_t src_rgb[3], float brightness,
        int fade_start, int fade_end) = 0;
    virtual bool WalkLine(
        const Point2D& start, const Point2D& end,
        void (*callback)(const Point2D&)) = 0;
    virtual bool DrawDashedLine(
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset) = 0;
    virtual bool DrawDashedLineStipple(
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset, bool update_z) = 0;
    virtual bool DrawStippledRect(
        const Point2D& top_left, const Point2D& bottom_right,
        uint16_t color, bool fill_interior) = 0;
    virtual bool DrawRectEx(
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect, uint32_t color) = 0;
    virtual bool DrawRect(const RectangleStruct& draw_rect, uint32_t color) = 0;
    virtual void* Lock(int x, int y) = 0;
    virtual bool Unlock() = 0;
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) = 0;
    virtual bool IsLocked() const = 0;  // 0x411580
    // XSurface vtable slots [28]/[29] hold the shared `xor eax,eax` stub —
    // base default returns 0; BSurface/DSurface override.
    virtual int GetBytesPerPixel() const;  // default impl in surface.cpp
    virtual int GetPitch() const;          // default impl in surface.cpp
    virtual RectangleStruct* GetRect(RectangleStruct* out_rect);  // 0x411510: fills {0, 0, Width, Height}, returns out_rect
    virtual int GetWidth() const;   // 0x411540: mov eax,[ecx+4]
    virtual int GetHeight() const;  // 0x411550: mov eax,[ecx+8]
    // XSurface vtable [33] = StubReturnFalse (0x411590) — base default false.
    virtual bool IsDSurface() const;  // default impl in surface.cpp
    virtual bool PutPixel(
        const Point2D& point,
        uint16_t color,
        const RectangleStruct& clip_rect) = 0;
    virtual uint16_t GetPixelAtCoords(
        const Point2D& point,
        const RectangleStruct& clip_rect) = 0;
    virtual bool DrawGradientLine(
        const Point2D& start, const Point2D& end,
        int palette_idx, int fade_val,
        float* gradient_start, float* gradient_step) = 0;
    virtual bool CheckBltStatus() = 0;

    // SHP sprite blit + text draw (overloads; definitions in surface.cpp)
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
    Point2D* DrawText(
        Point2D* out,
        const wchar_t* text,
        Surface* surface,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3,
        uint32_t flags,
        uint32_t unknown9);
    Point2D DrawText(
        const wchar_t* text,
        Surface* surface,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3,
        uint32_t flags,
        uint32_t unknown9);
    Point2D DrawText(
        const wchar_t* text,
        const RectangleStruct& bounds,
        const Point2D& location,
        uint16_t color,
        uint32_t option3,
        uint32_t flags);
    Point2D DrawText(
        const wchar_t* text,
        const Point2D& location,
        uint16_t color,
        uint32_t option3,
        uint32_t flags);

    int Width;   // +0x04
    int Height;  // +0x08

protected:
    Surface();  // abstract — construct via XSurface/BSurface/DSurface only
};

class XSurface : public Surface
{
    int GetRect(int, ...); // vtable slot +120
public:
    XSurface(int width, int height) noexcept;

    // design: virtual function, no binary implementation matched in IDA
    virtual ~XSurface() override;

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) override; // 0x7BBAF0
    virtual bool BlitPart( // 0x7BBB90
        const RectangleStruct& dest_rect, Surface* src,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool Blit( // 0x7BBCF0
        const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
        Surface* src, const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool FillRectEx( // 0x7BB050
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect, uint32_t color) override;
    virtual bool FillRect(const RectangleStruct& fill_rect, uint32_t color) override; // 0x7BB020
    virtual bool Fill(uint32_t color) override;  // 0x7BBAB0
    virtual bool FillRectWithFlags(  // 0x4bb830
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) override;
    virtual bool DrawEllipseOutline( // 0x7BB350
        const Point2D& center,
        int radius_w, int radius_h,
        const RectangleStruct& clip_rect,
        uint16_t color) override;
    virtual bool SetPixel(const Point2D& point, uint32_t color) override;  // 0x7BAEB0
    virtual uint32_t GetPixel(const Point2D& point) override;  // 0x7BAE60
    virtual bool DrawLineEx( // 0x7BA610
        const RectangleStruct& clip_rect, const Point2D& start,
        const Point2D& end, uint32_t color) override;
    virtual bool DrawLine( // 0x7BA5E0
        const Point2D& start, const Point2D& end, uint32_t color) override;
    virtual bool DrawLineZBuf(  // 0x4bfd30
        const Point2D& start, const Point2D& end,
        uint16_t color, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineModulated(  // 0x4bbca0
        const Point2D& start, const Point2D& end,
        int mod_strength, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineFaded(  // 0x4bc750
        const Point2D& start, const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start, int fade_end,
        bool z_buffer, float gradient_start,
        float gradient_step, bool flip_dir) override;
    virtual bool DrawLineZBufColored(  // 0x4bdf00
        const Point2D& start, const Point2D& end,
        const uint8_t src_rgb[3], float brightness,
        int fade_start, int fade_end) override;
    virtual bool WalkLine( // 0x7BAB90
        const Point2D& start, const Point2D& end,
        void (*callback)(const Point2D&)) override;
    virtual bool DrawDashedLine( // 0x7BA8C0
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset) override;
    virtual bool DrawDashedLineStipple(  // 0x4c0750
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset, bool update_z) override;
    virtual bool DrawStippledRect(  // 0x4c0e30
        const Point2D& top_left, const Point2D& bottom_right,
        uint16_t color, bool fill_interior) override;
    virtual bool DrawRectEx( // 0x7BADC0
        const RectangleStruct& clip_rect,
        const RectangleStruct& draw_rect, uint32_t color) override;
    virtual bool DrawRect(const RectangleStruct& draw_rect, uint32_t color) override;  // 0x7BAD90

    virtual void* Lock(int x, int y) override; // 0x411560
    virtual bool Unlock() override; // 0x411570
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) override;  // 0x4BAEC0
    virtual bool IsLocked() const override final;  // 0x411580

    virtual bool PutPixel( // 0x7BAF90
        const Point2D& point,
        uint16_t color,
        const RectangleStruct& clip_rect) override;

    virtual uint16_t GetPixelAtCoords( // 0x7BAF10
        const Point2D& point,
        const RectangleStruct& clip_rect) override;

    // XSurface vtable ends at [35] GetPixelAtCoords — these two introduce
    // new virtuals here (DSurface vtable [36]/[37]); not overrides.
    virtual bool DrawGradientLine(  // 0x4bf750
        const Point2D& start, const Point2D& end,
        int palette_idx, int fade_val,
        float* gradient_start, float* gradient_step);

    virtual bool CheckBltStatus();  // impl at DSurface 0x4BAF20 (declared here, annotated there)

    virtual bool IsDSurface() const override;  // 0x4C1AB0

    int LockCount;

protected:
    explicit XSurface(noinit_t) noexcept
; // unmatched: no callgraph reference and no git history record
};

// CSP: BSurface matched via T3
class BSurface : public XSurface
{
public:
    int GetWidth(int, ...); // vtable slot +124
    BSurface(int width, int height, int bytes_per_pixel) noexcept;

    // design: virtual function, no binary implementation matched in IDA
    virtual ~BSurface() override;

    virtual void* Lock(int x, int y) override; // 0x4115F0
    virtual int GetBytesPerPixel() const override; // 0x411630
    virtual int GetPitch() const override; // 0x411640
    virtual bool IsDSurface() const override final;  // 0x4C1AB0

    int BytesPerPixel;
    byte* Buffer;  // data: 0x8a3a08

protected:
    explicit BSurface(noinit_t) noexcept
; // unmatched: no callgraph reference and no git history record
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool CreateTripleBuffer();  // 0x7b8c60 -- BSurface::CreateTripleBuffer
    void* ConstructEx(int a1, int a2, int a3, int a4);  // 0x7bc970 -- BSurface::ConstructEx
    // === SYMBOL-ANCHOR (END) ===
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

    // design: virtual function, no binary implementation matched in IDA
    virtual ~DSurface() override;

    virtual bool BlitWhole(Surface* src, bool option1, bool option2) override;  // 0x4C1A90
    virtual bool BlitPart( // 0x4BB080
        const RectangleStruct& dest_rect, Surface* src,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool Blit( // 0x4BB0D0
        const RectangleStruct& clip_rect, const RectangleStruct& clip_rect2,
        Surface* src, const RectangleStruct& dest_rect,
        const RectangleStruct& src_rect, bool option1, bool option2) override;
    virtual bool FillRectEx( // 0x4BB620
        const RectangleStruct& clip_rect,
        const RectangleStruct& fill_rect, uint32_t color) override;
    virtual bool FillRect(const RectangleStruct& fill_rect, uint32_t color) override;  // 0x4BB5F0
    virtual bool FillRectWithFlags( // 0x4BB830
        const RectangleStruct& clip_rect,
        const ColorStruct& color,
        int opacity_percent) override;
    virtual bool DrawLineZBuf(  // 0x4bfd30
        const Point2D& start, const Point2D& end,
        uint16_t color, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineModulated(  // 0x4bbca0
        const Point2D& start, const Point2D& end,
        int mod_strength, int fade_start, int fade_end,
        bool update_z_buffer) override;
    virtual bool DrawLineFaded(  // 0x4bc750
        const Point2D& start, const Point2D& end,
        const uint8_t* stipple_pattern,
        int fade_start, int fade_end,
        bool z_buffer, float gradient_start,
        float gradient_step, bool flip_dir) override;
    virtual bool DrawLineZBufColored( // 0x4BDF00
        const Point2D& start, const Point2D& end,
        const uint8_t src_rgb[3], float brightness,
        int fade_start, int fade_end) override;
    virtual bool DrawDashedLineStipple( // 0x4C0750
        const Point2D& start, const Point2D& end,
        uint16_t color, const uint8_t stipple[16],
        int dash_offset, bool update_z) override;
    virtual bool DrawStippledRect( // 0x4C0E30
        const Point2D& top_left, const Point2D& bottom_right,
        uint16_t color, bool fill_interior) override;
    virtual void* Lock(int x, int y) override;  // 0x4BAD80
    virtual bool Unlock() override;  // 0x4BAF40
    virtual bool CanLock(uint32_t unk1, uint32_t unk2) override;  // 0x4BAEC0
    virtual int GetBytesPerPixel() const override;  // 0x4BAD60
    virtual int GetPitch() const override; // 0x4BAD70
    virtual bool DrawGradientLine( // 0x4BF750
        const Point2D& start, const Point2D& end,
        int palette_idx, int fade_val,
        float* gradient_start, float* gradient_step) override;
    virtual bool CheckBltStatus() override;  // 0x4BAF20
    virtual bool IsDSurface() const override final;  // 0x4C1AB0

    // IDA: DSurface::CreatePrimary pixel format detection (0x4BA770 bit-shift logic)
    // unmatched: no callgraph reference and no git history record
    static void DetectPixelFormat(const DDPIXELFORMAT& pf);

    // 0x4BB0D0 — DSurface::Blit full hardware/software implementation
    // Used by REPLACE hook — bypasses Syringe trampoline entirely.
    // Takes raw int* parameters matching binary calling convention.
    static char BlitTracker(
        int* self,
        int* dst_rect,
        int* src_rect,
        void* src_surface,
        int* clip_dst,
        int* clip_src,
        int flags,
        char option2);

    int BytesPerPixel;
    void* LockedSurface;
    bool Allocated;
    bool VRAMmed;
    uint8_t align_1A[2];
    LPDIRECTDRAWSURFACE7 Surface;
    DDSURFACEDESC2* SurfaceDesc;

protected:
    explicit DSurface(noinit_t) noexcept
; // unmatched: no callgraph reference and no git history record

private:
    // Core Blit logic shared by Blit() and BlitTracker()
    // Takes raw int* parameters matching binary ABI (thiscall + stack args)
    static char BlitCore(
        int* self,
        int* dst_rect,
        int* src_rect,
        void* src_surface,
        int* clip_dst,
        int* clip_src,
        int flags,
        char option2);
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* CreatePrimary();  // 0x4ba770 -- DSurface::CreatePrimary
    void* CreateBackBuffer(int a1);  // 0x4bac60 -- DSurface::CreateBackBuffer
    int RestoreIfLost();  // 0x4bb000 -- DSurface::RestoreIfLost
    int DrawMarker(int a1, int a2);  // 0x63d400 -- DSurface::DrawMarker
    int FlipIfNeeded();  // 0x759e60 -- DSurface::FlipIfNeeded
    int LockAndPrepareRect();  // 0x7bd210 -- DSurface::LockAndPrepareRect
    int CommitBuffers();  // 0x7bdf80 -- DSurface::CommitBuffers
    int Flip();  // 0x7c2c60 -- DSurface::Flip
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd

