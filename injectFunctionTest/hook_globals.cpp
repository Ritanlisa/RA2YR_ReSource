// hook_globals.cpp — stub global variable definitions for hook DLL build.
// All in gamemd namespace to match ddraw_init.hpp declarations.
#include <windows.h>
#include <ddraw.h>

namespace gamemd {

LPDIRECTDRAW7        g_lpDirectDraw7 = 0;
int                  g_DDraw_Initialized = 0;
bool                 g_DDraw_Active = false;
int                  g_DisplayWidth = 800;
int                  g_DisplayHeight = 600;
int                  g_DisplayBPP = 16;
bool                 g_DDraw_UseHWBlit = false;
bool                 g_DDraw_AllowStretchBlits = false;
DWORD                g_DDraw_RedMask = 0;
DWORD                g_DDraw_GreenMask = 0;
DWORD                g_DDraw_BlueMask = 0;
int                  g_BitShift_Red = 0;
int                  g_BitShift_Green = 0;
int                  g_BitShift_Blue = 0;
int                  g_BitMask_Red = 0;
int                  g_BitMask_Green = 0;
int                  g_BitMask_Blue = 0;
int                  g_DDraw_PixelFormat = 0;
unsigned short       g_DDraw_Gray127 = 0;
LPDIRECTDRAWSURFACE7 g_DDraw_PrimarySurface = 0;
LPDIRECTDRAWCLIPPER  g_DDraw_Clipper = 0;
bool                 CmdLine_NoCD = false;

struct DDrawContext* DDrawGetContext() { return 0; }

} // namespace gamemd
