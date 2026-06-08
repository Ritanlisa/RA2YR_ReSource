// render_hooks.cpp -- Render element tracking via DSurface::Blit hook
#include <windows.h>
#include "Syringe.h"
#include "element_tracker.h"

namespace render_hooks {

// DSurface::Blit @ 0x4BB0D0 (1303B)
// First 6 bytes: sub esp, 0x88 -- safe for relocation (no ESP-relative addressing in prologue)
// Parameters (thiscall):
//   ECX = this (DSurface* dst)
//   [ESP+4]  = dstRect (int*)
//   [ESP+8]  = srcRect (int*)
//   [ESP+12] = srcSurface (DWORD*)
//   [ESP+16] = clipRect (int*)
//   [ESP+20] = another (int*)
//   [ESP+24] = flags (int)
//   [ESP+28] = a8 (char)
// Record: source surface addr, source rect -> frame info, dst rect -> screen position
DEFINE_HOOK(4BB0D0, Blit_Tracker, 6)
{
    // Extract: src surface + src rect + dst rect
    uint32_t src_surface = (uint32_t)R->Stack<DWORD>(12);
    int* dst_rect = (int*)R->Stack<DWORD>(4);
    int* src_rect = (int*)R->Stack<DWORD>(8);
    uint32_t flags = (uint32_t)R->Stack<DWORD>(24);

    if (src_surface && src_rect && dst_rect) {
        elements::RecordBlit(
            src_surface,
            src_rect[0], src_rect[1],  // source x, y
            src_rect[2], src_rect[3],  // source w, h
            dst_rect[0], dst_rect[1],  // dest x, y
            flags);
    }

    return 0; // let original Blit run
}

void Install() {}    // hooks auto-installed via DEFINE_HOOK
void Remove() {}     // no cleanup needed

} // namespace render_hooks
