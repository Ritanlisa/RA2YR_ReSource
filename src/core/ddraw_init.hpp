#pragma once

#include <cstdint>
#include <windows.h>
#include <ddraw.h>

namespace gamemd {

// IDA: DDraw globals
// 0x8A0094: g_lpDirectDraw7 -- main DDraw7 object
extern LPDIRECTDRAW7 g_lpDirectDraw7;
// 0x89F978: g_DDraw_Initialized -- window mode flag (-WIN)
extern int  g_DDraw_Initialized;
// 0xA8ED80: g_DDraw_Active -- DDraw activity flag
extern bool g_DDraw_Active;
// 0x8A00A4/A8/AC: g_DisplayWidth/Height/BPP
extern int  g_DisplayWidth;
extern int  g_DisplayHeight;
extern int  g_DisplayBPP;
// 0x8205D4: g_DDraw_UseHWBlit -- hardware blit available
extern bool g_DDraw_UseHWBlit;
// 0x8A0DEE: g_DDraw_AllowStretchBlits
extern bool g_DDraw_AllowStretchBlits;
// 0x8A0958/5C/60: RGB pixel format masks
extern DWORD g_DDraw_RedMask;
extern DWORD g_DDraw_GreenMask;
extern DWORD g_DDraw_BlueMask;
// 0x8A0DD0/D4/D8: RGB bit shifts
extern int g_BitShift_Red;
extern int g_BitShift_Green;
extern int g_BitShift_Blue;
// 0x8A0DDC/E0/E4: RGB bit mask widths
extern int g_BitMask_Red;
extern int g_BitMask_Green;
extern int g_BitMask_Blue;
// 0x8205D0: pixel format enum (0=RGB565, 1=RGB555, 2=RGB444, -1=unknown)
extern int g_DDraw_PixelFormat;
// 0x8A0DE8: gray127 color (16-bit)
extern uint16_t g_DDraw_Gray127;
// 0x8A009C: g_DDraw_PrimarySurface
extern LPDIRECTDRAWSURFACE7 g_DDraw_PrimarySurface;
// 0x8A0DCC: g_DDraw_Clipper
extern LPDIRECTDRAWCLIPPER g_DDraw_Clipper;

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

// IDA: DDrawInitialize @ 0x4A42F0
int DDrawInitialize(int a1, DWORD width, DWORD height, DWORD bpp);
bool DDrawInit(HWND hwnd, int width, int height, bool windowed);
void DDrawShutdown();
void DDrawFlip();
DDrawContext* DDrawGetContext();

extern bool CmdLine_NoCD;  // 0x89E410

} // namespace gamemd
