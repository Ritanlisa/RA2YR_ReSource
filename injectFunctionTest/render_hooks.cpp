// render_hooks.cpp — Render element tracking via DSurface::Blit REPLACE hook
//
// DSurface::Blit @ 0x4BB0D0 (1303B)
// First 6 bytes: sub esp, 0x88 — safe for relocation.
//
// REPLACE hook: completely replaces the original function.
// - Calls gamemd::DSurface::BlitTracker (full Blit logic + element tracking)
// - Sets EAX result and returns directly to caller via Syringe's non-zero return
// - Original function body is NEVER executed (no trampoline, no stack hijack)
//
// Why REPLACE: Syringe's trampoline on this function causes stack corruption
// when combined with active Inject hooks. By implementing the FULL Blit logic
// and returning directly, we avoid the trampoline entirely.
#include <windows.h>
#include "Syringe.h"
#include "gamemd/render/surface.hpp"
#include "element_tracker.h"

// ============================================================
// REPLACE hook: intercept DSurface::Blit, run tracker, skip original
// ============================================================
#if 0
// Blit_Tracker REPLACE hook disabled — crashes at startup
// (Syringe trampoline on 0x4BB0D0 overwrites sub esp, 0x88)
DEFINE_HOOK(0x4BB0D0, Blit_Tracker, 0x6)
{
    // Read parameters from Syringe saved register state
    int* self      = reinterpret_cast<int*>(R->ECX());
    int* dst_rect  = reinterpret_cast<int*>(R->Stack<DWORD>(4));
    int* src_rect  = reinterpret_cast<int*>(R->Stack<DWORD>(8));
    void* src_surf = reinterpret_cast<void*>(R->Stack<DWORD>(12));
    int* clip_dst  = reinterpret_cast<int*>(R->Stack<DWORD>(16));
    int* clip_src  = reinterpret_cast<int*>(R->Stack<DWORD>(20));
    int  flags     = static_cast<int>(R->Stack<DWORD>(24));
    char option2   = static_cast<char>(R->Stack<DWORD>(28));

    // Run the full Blit with element tracking
    char result = gamemd::DSurface::BlitTracker(
        self, dst_rect, src_rect, src_surf, clip_dst, clip_src, flags, option2);

    // Set EAX for Syringe's POPAD restoration
    R->EAX(static_cast<DWORD>(result));

    // REPLACE path: return non-zero = JMP to this address (return to caller)
    // This bypasses the original function entirely — no trampoline executed.
    return R->Stack<DWORD>(0);
}
#endif

namespace render_hooks {
    void Install() {}
    void Remove()  {}
} // namespace render_hooks
