// render_hooks.cpp — Render element tracking via DSurface::Blit hook
// + test hooks for Batch A-E rendering functions
#include <windows.h>
#include <cstdio>
#include "Syringe.h"
#include "element_tracker.h"

namespace render_hooks {

// DSurface::Blit @ 0x4BB0D0 (1303B)
DEFINE_HOOK(4BB0D0, Blit_Tracker, 6)
{
    uint32_t src_surface = (uint32_t)R->Stack<DWORD>(12);
    int* dst_rect = (int*)R->Stack<DWORD>(4);
    int* src_rect = (int*)R->Stack<DWORD>(8);
    uint32_t flags = (uint32_t)R->Stack<DWORD>(24);

    if (src_surface && src_rect && dst_rect) {
        elements::RecordBlit(
            src_surface,
            src_rect[0], src_rect[1],
            src_rect[2], src_rect[3],
            dst_rect[0], dst_rect[1],
            flags);
    }

    return 0;
}

// XSurface::SetPixel @ 0x7BAEB0 (89B) — Batch A test hook
DEFINE_HOOK(7BAEB0, Hk_SetPixel, 6)
{
    return 0;
}

// XSurface::DrawLineEx @ 0x7BA610 (685B) — Batch B test hook
DEFINE_HOOK(7BA610, Hk_DrawLineEx, 6)
{
    return 0;
}

// XSurface::DrawRectEx @ 0x7BADC0 (158B) — Batch C test hook
DEFINE_HOOK(7BADC0, Hk_DrawRectEx, 6)
{
    return 0;
}

// DSurface::FillRectEx @ 0x4BB620 (526B) — Batch C test hook
DEFINE_HOOK(4BB620, Hk_FillRectEx, 6)
{
    return 0;
}

// FramePresent @ 0x4F4780 (~3000B) — Batch E test hook
DEFINE_HOOK(4F4780, Hk_FramePresent, 6)
{
    return 0;
}

void Install() {}
void Remove() {}

} // namespace render_hooks
