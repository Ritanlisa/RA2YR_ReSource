// blit_tracker.cpp — DSurface::BlitTracker for hook DLL (REPLACE hook target)
// Full Blit implementation + element tracking.
// Compiled only into hook_dll.dll, NOT gamemd.exe.
//
// Uses self-contained rect clipping to avoid depending on surface.cpp.
// Accesses game globals directly by address (hook DLL shares process with game).
#include <windows.h>
#include <ddraw.h>
#include "gamemd/render/surface.hpp"
#include "element_tracker.h"

// Game globals accessed by address (IDA: 0x89F978, 0xA8ED80)
// These are in gamemd.exe's .data section, shared with injected DLL.
namespace {
    inline int&  Game_DDraw_Init()  { return *reinterpret_cast<int*>(0x89F978); }
    inline bool& Game_DDraw_Active() { return *reinterpret_cast<bool*>(0xA8ED80); }
}

namespace gamemd {
namespace {

// Inline rect clipping — equivalent to ClipRectIntersection
// Clips `src` against `clip` into `out`. Returns false if result is empty.
inline bool ClipRect(RectangleStruct& out, const RectangleStruct& clip, const RectangleStruct& src)
{
    int x = src.X, y = src.Y, w = src.Width, h = src.Height;
    if (clip.Width <= 0 || clip.Height <= 0 || w <= 0 || h <= 0) return false;
    if (x < clip.X) { w -= clip.X - x; x = clip.X; }
    if (w < 1) return false;
    if (y < clip.Y) { h -= clip.Y - y; y = clip.Y; }
    if (h < 1) return false;
    if (x + w > clip.X + clip.Width)  w = clip.X + clip.Width  - x;
    if (w < 1) return false;
    if (y + h > clip.Y + clip.Height) h = clip.Y + clip.Height - y;
    if (h < 1) return false;
    out.X = x; out.Y = y; out.Width = w; out.Height = h;
    return true;
}

} // anonymous namespace

// ============================================================
// Core Blit logic — faithful translation of DSurface::Blit @ 0x4BB0D0
// Takes raw int* parameters matching binary ABI.
// ============================================================
static char BlitCoreImpl(
    int* self, int* a2, int* a3, void* a4, int* a5, int* a6, int a7, char a8)
{
    // --- Early exit: any rect has non-positive dimensions ---
    if (a2[2] <= 0 || a2[3] <= 0 || a5[2] <= 0 || a5[3] <= 0
        || a3[2] <= 0 || a3[3] <= 0 || a6[2] <= 0 || a6[3] <= 0)
        return 0;

    auto* dst   = reinterpret_cast<DSurface*>(self);
    auto* src   = reinterpret_cast<Surface*>(a4);
    auto* dsurf = dynamic_cast<DSurface*>(src);

    // --- Determine hardware vs software blit path (v42) ---
    char v42 = 0;
    if (!src->IsDSurface() || src->IsLocked() || static_cast<char>(a7) == 1
        || src->GetBytesPerPixel() != dst->GetBytesPerPixel())
        v42 = 1;

    char v13 = (dst->Allocated && Game_DDraw_Init() == 1) ? char(0) : a8;

    if (!v42 && v13 == 1
        && (!dst->VRAMmed || (dsurf && dsurf->IsDSurface() && !dsurf->VRAMmed))
        && a6[2] == a3[2] && a6[3] == a3[3])
        v42 = 1;

    if (!Game_DDraw_Init() && !Game_DDraw_Active())
        return 0;

    // --- Surface lost handling ---
    if (dst->Surface && dst->Surface->IsLost() == DDERR_SURFACELOST)
    {
        if (FAILED(dst->Surface->Restore()) || dst->Surface->IsLost() != DD_OK)
            return 0;
        int saved_locks = dst->LockCount;
        if (saved_locks > 0)
        {
            dst->LockCount = 0;
            dst->Lock(0, 0);
            dst->LockCount = 1;
            dst->Unlock();
            dst->LockCount = saved_locks;
        }
    }

    // --- Software path ---
    if (v42 == 1)
    {
        RectangleStruct dest_r = { a3[0], a3[1], a3[2], a3[3] };
        RectangleStruct src_r  = { a6[0], a6[1], a6[2], a6[3] };
        return dst->XSurface::BlitPart(dest_r, const_cast<Surface*>(src), src_r, a7 != 0, true) ? 1 : 0;
    }

    // ============================================================
    // Hardware path: DDraw Blt with coordinate clipping
    // ============================================================
    RectangleStruct src_srf, dst_srf;
    src->GetRect(&src_srf);
    dst->GetRect(&dst_srf);

    RectangleStruct src_clip_r = { a5[0], a5[1], a5[2], a5[3] };
    RectangleStruct dst_clip_r = { a2[0], a2[1], a2[2], a2[3] };
    RectangleStruct src_r      = { a6[0], a6[1], a6[2], a6[3] };
    RectangleStruct dst_r      = { a3[0], a3[1], a3[2], a3[3] };

    RectangleStruct src_clipped, dst_clipped, src_blit, dst_blit;
    if (!ClipRect(src_clipped, src_clip_r, src_srf)) return 0;
    if (!ClipRect(dst_clipped, dst_clip_r, dst_srf)) return 0;
    if (!ClipRect(src_blit, src_clipped, src_r))     return 0;
    if (!ClipRect(dst_blit, dst_clipped, dst_r))     return 0;

    int blit_w = (src_blit.Width  < dst_blit.Width)  ? src_blit.Width  : dst_blit.Width;
    int blit_h = (src_blit.Height < dst_blit.Height) ? src_blit.Height : dst_blit.Height;

    RECT sr = { src_blit.X + a6[0], src_blit.Y + a6[1],
                src_blit.X + a6[0] + blit_w, src_blit.Y + a6[1] + blit_h };
    RECT dr = { dst_blit.X + a3[0], dst_blit.Y + a3[1],
                dst_blit.X + a3[0] + blit_w, dst_blit.Y + a3[1] + blit_h };

    HRESULT hr = dst->Surface->Blt(&dr, dsurf->Surface, &sr, DDBLT_WAIT, nullptr);
    return (hr == DD_OK) ? 1 : 0;
}

// ============================================================
// DSurface::BlitTracker — full Blit + element tracking
// Used by REPLACE hook to completely replace the original function.
// ============================================================
char DSurface::BlitTracker(
    int* self, int* dst_rect, int* src_rect, void* src_surface,
    int* clip_dst, int* clip_src, int flags, char option2)
{
    if (src_surface && src_rect && dst_rect)
    {
        elements::RecordBlit(
            reinterpret_cast<uint32_t>(src_surface),
            src_rect[0], src_rect[1], src_rect[2], src_rect[3],
            dst_rect[0], dst_rect[1],
            static_cast<uint32_t>(flags));
    }
    return BlitCoreImpl(self, dst_rect, src_rect, src_surface, clip_dst, clip_src, flags, option2);
}

} // namespace gamemd
