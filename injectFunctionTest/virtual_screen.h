// virtual_screen.h -- Virtual screen buffer for headless rendering
// Tracks primary surface info + recent blit operations for automated testing.
#pragma once
#include <windows.h>

namespace virtual_screen {

struct SurfaceInfo {
    uint32_t addr;      // pixel buffer address
    int      width;
    int      height;
    int      pitch;     // bytes per row
    int      bpp;       // bytes per pixel (2=RGB565, 4=RGBA8888)
    bool     locked;
};

struct BlitRecord {
    uint32_t src_addr;
    int      src_x, src_y, src_w, src_h;
    int      dst_x, dst_y;
    uint32_t timestamp;  // frame counter
};

// Called from hooks to update primary surface info
void OnSurfaceLock(uint32_t addr, int width, int height, int pitch, int bpp);
void OnSurfaceUnlock();
void OnSurfaceBlit(uint32_t src_addr, int sx, int sy, int sw, int sh, int dx, int dy);

// Query current state
SurfaceInfo GetPrimarySurface();
int GetBlitCount();
BlitRecord GetBlitRecord(int index);

} // namespace virtual_screen
