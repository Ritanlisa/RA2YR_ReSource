#pragma once

#include <windows.h>
#include <ddraw.h>

namespace gamemd {

// IDA: DDraw globals
// 0x8A0094: g_lpDirectDraw7 — main DDraw7 object
// 0x89F978: g_DDraw_Initialized — window mode flag (-WIN)
// 0xA8ED80: g_DDraw_Active — DDraw activity flag
extern bool g_DDraw_Active;
// 0x8A00B0: g_DDraw_ErrorCallback — error callback function pointer
// 0x89FC90: g_DDraw_Palette — 8bpp palette object
// 0x89FC94: g_DDraw_PaletteEntries — 256 COLORENTRY palette data
// 0x8205D4: g_DDraw_UseHWBlit — hardware blit available

struct DDrawContext {
    LPDIRECTDRAW7        dd;
    LPDIRECTDRAWSURFACE7 primary;
    LPDIRECTDRAWSURFACE7 back_buffer;
    LPDIRECTDRAWCLIPPER  clipper;
    HWND                 hwnd;
    int                  width;
    int                  height;
    bool                 windowed;
};

// IDA: DDraw_Initialize @ 0x4A42F0
// Called 3 times from WinMain. On first call creates the DDraw7 object.
// Returns 1 on success, 0 on failure.
int DDraw_Initialize(int a1, DWORD width, DWORD height, DWORD bpp);

// Simplified wrapper for game_loop.cpp compatibility
bool DDraw_Init(HWND hwnd, int width, int height, bool windowed);
void DDraw_Shutdown();
DDrawContext* DDraw_GetContext();
void DDraw_Flip();

} // namespace gamemd
