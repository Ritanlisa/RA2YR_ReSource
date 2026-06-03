#include "gamemd/render/shp_blitter.hpp"

#include <cstring>
#include "gamemd/core/logging.hpp"

namespace gamemd
{

// External globals (will be defined in their respective init files)
extern void* g_ZBufferDescriptor;
extern void* g_VisibleSurfaceDescriptor;

static inline int ClampLines(int src_h, int dst_h)
{
    return src_h < dst_h ? src_h : dst_h;
}

//
// SHPBlitterCopy
//
// Reverse-engineered from gamemd.exe at 0x4373B0.
// Simple direct pixel copy path — used when the SHP data is NOT RLE-compressed
// (i.e. the frame format byte is 0x00 for raw data).
//
// The blitter_vtable is a function pointer table that handles the actual
// per-row/per-pixel copy with color processing (translucent, alpha, remap, etc.).
//
// Algorithm: Clip → compute Z-buffer offset → row-by-row iterate → call blitter
//
bool SHPBlitterCopy(
    Surface* dest_surface,
    const RectangleStruct& dest_clip,
    const RectangleStruct& src_rect,
    void* blitter_vtable,
    const RectangleStruct& paint_bounds,
    int stride_param,
    int z_param,
    int flags,
    int tint_color,
    int opacity)
{
    if (!dest_surface || !blitter_vtable) return false;

    // --- 1. Clamp source rect against destination surface bounds ---
    RectangleStruct clip_rect;
    dest_surface->GetRect(&clip_rect);

    RectangleStruct clamped_in = src_rect;
    RectangleStruct clamped_out = dest_clip;

    // Intersect source with clip rect
    if (clamped_in.X < clamped_out.X) {
        clamped_in.Width  -= (clamped_out.X - clamped_in.X);
        clamped_in.X = clamped_out.X;
    }
    if (clamped_in.Y < clamped_out.Y) {
        clamped_in.Height -= (clamped_out.Y - clamped_in.Y);
        clamped_in.Y = clamped_out.Y;
    }
    if (clamped_in.X + clamped_in.Width > clamped_out.X + clamped_out.Width) {
        clamped_in.Width = clamped_out.X + clamped_out.Width - clamped_in.X;
    }
    if (clamped_in.Y + clamped_in.Height > clamped_out.Y + clamped_out.Height) {
        clamped_in.Height = clamped_out.Y + clamped_out.Height - clamped_in.Y;
    }

    if (clamped_in.Width <= 0 || clamped_in.Height <= 0)
        return false;

    // --- 2. Resolve blitter function pointers ---
    // vtable layout varies based on the blitter type
    // We use a simple struct with direct vtable offsets
    using BlitFn = void (__stdcall *)(int, int*, int, int, int, int, int, int);
    using BlitFnTint = void (__stdcall *)(int, int*, int, int, int, int, int);

    BlitFn blit_row = nullptr;
    BlitFnTint blit_row_tint = nullptr;

    // Select correct function based on the blitter vtable at runtime
    // The specific vtable varies by template instantiation
    auto* vt = static_cast<void**>(blitter_vtable);
    if (opacity != 0) {
        blit_row_tint = reinterpret_cast<BlitFnTint>(vt[3]);  // vtable[12/4]
    } else {
        blit_row = reinterpret_cast<BlitFn>(vt[1]);           // vtable[4/4]
    }

    // --- 3. Lock destination surface ---
    void* dest_lock = dest_surface->Lock(0, 0);
    if (!dest_lock) return false;

    int dest_stride = dest_surface->GetPitch() / dest_surface->GetBytesPerPixel();

    // --- 4. Row-by-row copy ---
    int line_count = clamped_in.Height;
    int src_x = clamped_in.X;
    int src_y = clamped_in.Y;

    for (int ln = 0; ln < line_count; ++ln) {
        int srcy = src_y + ln;
        int srcx = src_x;

        int dest_offset = srcy * dest_stride + srcx;
        int* src_pixels = reinterpret_cast<int*>(
            static_cast<uint8_t*>(dest_lock) + dest_offset * dest_surface->GetBytesPerPixel());

        if (blit_row) {
            blit_row(dest_offset, src_pixels,
                     clamped_in.Width, stride_param,
                     0, 0, flags, tint_color);
        } else if (blit_row_tint) {
            blit_row_tint(dest_offset, src_pixels,
                          clamped_in.Width,
                          stride_param, 0, flags, tint_color);
        }
    }

    // --- 5. Unlock ---
    dest_surface->Unlock();

    LOG_TRACE("SHPBlitterCopy: %dx%d pixels copied", clamped_in.Width, line_count);
    return true;
}

//
// SHPBlitterRLEBlit (stub — complex 300B RLE decompression + blit)
//
bool SHPBlitterRLEBlit(
    Surface* dest_surface,
    Surface* src_surface,
    Surface* z_surface,
    void* blitter_vtable,
    const RectangleStruct& clip_rect,
    int* src_rect,
    int stride_param,
    int flags,
    int tint_color,
    int opacity,
    SHPStruct* building_shadow,
    int zs_x,
    int zs_y)
{
    (void)dest_surface;
    (void)src_surface;
    (void)z_surface;
    (void)blitter_vtable;
    (void)clip_rect;
    (void)src_rect;
    (void)stride_param;
    (void)flags;
    (void)tint_color;
    (void)opacity;
    (void)building_shadow;
    (void)zs_x;
    (void)zs_y;

    LOG_TRACE("SHPBlitterRLEBlit: not yet implemented (RLE path)");
    return false;
}

} // namespace gamemd
