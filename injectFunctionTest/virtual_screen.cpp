// virtual_screen.cpp — Tracks primary surface for headless frame capture
#include "virtual_screen.h"

namespace virtual_screen {

static SurfaceInfo g_primary = {};
static BlitRecord  g_blits[64];
static int         g_blit_count = 0;

void OnSurfaceLock(uint32_t addr, int width, int height, int pitch, int bpp)
{
    g_primary.addr   = addr;
    g_primary.width  = width;
    g_primary.height = height;
    g_primary.pitch  = pitch;
    g_primary.bpp    = bpp;
    g_primary.locked = true;
}

void OnSurfaceUnlock()
{
    g_primary.locked = false;
}

void OnSurfaceBlit(uint32_t src_addr, int sx, int sy, int sw, int sh, int dx, int dy)
{
    if (g_blit_count < 64) {
        g_blits[g_blit_count] = { src_addr, sx, sy, sw, sh, dx, dy, GetTickCount() };
        ++g_blit_count;
    }
}

SurfaceInfo GetPrimarySurface() { return g_primary; }

int GetBlitCount() { return g_blit_count; }

BlitRecord GetBlitRecord(int index)
{
    if (index < 0 || index >= g_blit_count) return {};
    return g_blits[index];
}

} // namespace virtual_screen
