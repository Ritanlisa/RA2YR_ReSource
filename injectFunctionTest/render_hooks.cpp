// render_hooks.cpp — Render function tracking with comparisonResult.log output
#include <windows.h>
#include <cstdio>
#include "Syringe.h"
#include "element_tracker.h"

namespace render_hooks {

static FILE* g_log = nullptr;

struct HookCounter {
    const char* name;
    DWORD addr;
    int count;
};
static HookCounter g_hooks[] = {
    {"SetPixel",      0x7BAEB0, 0},
    {"DrawLineEx",    0x7BA610, 0},
    {"DrawRectEx",    0x7BADC0, 0},
    {"FillRectEx",    0x4BB620, 0},
    {"FramePresent",  0x4F4780, 0},
    {"Blit",          0x4BB0D0, 0},
};
static const int g_hook_count = sizeof(g_hooks) / sizeof(g_hooks[0]);

static HookCounter* find_hook(DWORD addr) {
    for (int i = 0; i < g_hook_count; ++i)
        if (g_hooks[i].addr == addr) return &g_hooks[i];
    return nullptr;
}

static void log_call(DWORD addr) {
    if (!g_log) {
        g_log = fopen("comparisonResult.log", "a");
        if (!g_log) return;
    }
    auto* h = find_hook(addr);
    if (!h) return;
    ++h->count;
    if (h->count == 1)
        fprintf(g_log, "\n[%s-0x%08X]\n", h->name, h->addr);
    fprintf(g_log, "Call %d\n", h->count);
    fflush(g_log);
}

// DSurface::Blit @ 0x4BB0D0
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
    log_call(0x4BB0D0);
    return 0;
}

DEFINE_HOOK(7BAEB0, Hk_SetPixel, 6)
{ log_call(0x7BAEB0); return 0; }

DEFINE_HOOK(7BA610, Hk_DrawLineEx, 6)
{ log_call(0x7BA610); return 0; }

DEFINE_HOOK(7BADC0, Hk_DrawRectEx, 6)
{ log_call(0x7BADC0); return 0; }

DEFINE_HOOK(4BB620, Hk_FillRectEx, 6)
{ log_call(0x4BB620); return 0; }

DEFINE_HOOK(4F4780, Hk_FramePresent, 6)
{ log_call(0x4F4780); return 0; }

void Install() {}
void Remove() {}

} // namespace render_hooks
