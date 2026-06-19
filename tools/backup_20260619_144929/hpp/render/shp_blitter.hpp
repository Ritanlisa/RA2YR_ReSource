#pragma once

#include <cstdint>
#include <cstring>
#include "core/math.hpp"
#include "core/enums.hpp"
#include "render/surface.hpp"

namespace gamemd
{

// External globals used by the blitter (defined by IDA analysis)
extern void* g_ZBufferDescriptor;
extern void* g_VisibleSurfaceDescriptor;

// Forward declares
struct SHPStruct;

// Pixel blit callback types -- these map to the vtable methods on the
// RLEBlit/BlitTrans template classes found in IDA (50+ variants).
// The specific variant is selected at runtime based on BlitterFlags.

struct BlitRowFuncs
{
    // vtable[0]: per-row blit (translucent/alpha modes)
    void (__thiscall *BlitRowT)(void* _this, int dest, int* src_pixels,
                                int count, int stride, unsigned int zbuf,
                                unsigned int vsurf, int param, int flags, int tint);

    // vtable[1]: direct per-row blit
    void (__thiscall *BlitRow)(void* _this, int dest, int* src_pixels,
                               int count, int stride, unsigned int zbuf,
                               unsigned int vsurf, int param, int flags);

    // vtable[2]: per-row blit with tint color
    void (__stdcall *BlitRowTint)(int dest, int* src_pixels, int count,
                                  int param1, int param2, int param3, int tint);

    // vtable[3]: simplest per-row copy
    void (__stdcall *BlitRowDirect)(int dest, int* src_pixels, int count,
                                    int param1, int param2, int param3,
                                    int param4, int param5);
};

//
// SHP_Blitter_Copy (IDA: 0x4373B0)
// Simple direct pixel copy path for non-building SHP rendering.
// Used when the SHP frame format byte is 0x00 (raw data, not RLE).
//
bool SHPBlitterCopy(
    DSurface* dst,
    int dst_x, int dst_y,
    const DSurface* src,
    int src_x, int src_y,
    int w, int h,
    BlitterFlags flags);

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
    int zs_y);

} // namespace gamemd
