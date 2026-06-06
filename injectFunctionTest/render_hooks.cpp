// render_hooks.cpp — Render function tracking with full comparisonResult.log output
#include <windows.h>
#include <cstdio>
#include "Syringe.h"
#include "element_tracker.h"

const char* Caller(DWORD v);

namespace render_hooks {

static FILE* g_log = nullptr;

struct HookEntry {
    DWORD addr;
    const char* name;
    bool has_this;   // __thiscall: ECX = this pointer
    int bpp;          // GetBytesPerPixel result (from ECX's vtable)
};
static HookEntry g_entries[] = {
    {0x7BAEB0, "SetPixel",       true,  0},
    {0x7BA610, "DrawLineEx",     true,  0},
    {0x7BADC0, "DrawRectEx",     true,  0},
    {0x4BB620, "FillRectEx",     true,  0},
    {0x4F4780, "FramePresent",   false, 0},
    {0x4BB0D0, "Blit",           true,  0},
};
static int g_counts[6] = {};

static void hk_log(DWORD addr, DWORD ecx, DWORD ret_addr) {
    if (!g_log) {
        g_log = fopen("comparisonResult.log", "a");
        if (!g_log) return;
    }
    HookEntry* he = nullptr;
    for (int i = 0; i < 6; ++i) {
        if (g_entries[i].addr == addr) { he = &g_entries[i]; break; }
    }
    if (!he) return;

    int n = ++g_counts[he - g_entries];
    DWORD call_site = ret_addr - 5;

    if (n == 1)
        fprintf(g_log, "\n[%s-0x%08X]\n", he->name, he->addr);

    // Try to resolve caller by checking if ret-5 calls the hook addr
    // Simple heuristic: read the call instruction bytes at ret-5
    unsigned char* pc = (unsigned char*)call_site;
    const char* caller = "?";
    if (pc[0] == 0xE8) {
        // Relative call: E8 xx xx xx xx
        DWORD target = call_site + 5 + *(DWORD*)(pc + 1);
        if (target == addr) {
            // It's a call to our function. Get the caller via the global function table.
            // We can't easily resolve caller names without the MAP data.
            // Use reverse_hooks.cpp's Caller function.
            caller = Caller(call_site);
        }
    }

    fprintf(g_log, "Call %d: %s()<-0x%08X\n", n, caller ? caller : "?", call_site);

    if (he->has_this) {
        // Read BPP from ECX's vtable: vtable[28] = GetBytesPerPixel at offset 0x70
        DWORD vt = *(DWORD*)ecx;
        if (vt) {
            typedef int (__thiscall *GetBPP_t)(void*);
            GetBPP_t getBPP = (GetBPP_t)(*(DWORD*)(vt + 0x70));
            if (getBPP) {
                int bpp = getBPP((void*)ecx);
                fprintf(g_log, "  Input:  this=0x%08X  BPP=%d\n", ecx, bpp);
            } else {
                fprintf(g_log, "  Input:  this=0x%08X\n", ecx);
            }
        } else {
            fprintf(g_log, "  Input:  this=0x%08X\n", ecx);
        }
    } else {
        fprintf(g_log, "  Input:  ECX=0x%08X\n", ecx);
    }

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
        elements::RecordBlit(src_surface,
            src_rect[0], src_rect[1], src_rect[2], src_rect[3],
            dst_rect[0], dst_rect[1], flags);
    }
    hk_log(0x4BB0D0, R->ECX(), R->Stack<DWORD>(0));
    return 0;
}

DEFINE_HOOK(7BAEB0, Hk_SetPixel, 6)
{ hk_log(0x7BAEB0, R->ECX(), R->Stack<DWORD>(0)); return 0; }

DEFINE_HOOK(7BA610, Hk_DrawLineEx, 6)
{ hk_log(0x7BA610, R->ECX(), R->Stack<DWORD>(0)); return 0; }

DEFINE_HOOK(7BADC0, Hk_DrawRectEx, 6)
{ hk_log(0x7BADC0, R->ECX(), R->Stack<DWORD>(0)); return 0; }

DEFINE_HOOK(4BB620, Hk_FillRectEx, 6)
{ hk_log(0x4BB620, R->ECX(), R->Stack<DWORD>(0)); return 0; }

DEFINE_HOOK(4F4780, Hk_FramePresent, 6)
{ hk_log(0x4F4780, R->ECX(), R->Stack<DWORD>(0)); return 0; }

void Install() {}
void Remove() {}

} // namespace render_hooks
