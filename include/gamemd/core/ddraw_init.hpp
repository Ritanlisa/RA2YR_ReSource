#pragma once

#include <windows.h>
#include <ddraw.h>

namespace gamemd {

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

bool DDraw_Init(HWND hwnd, int width, int height, bool windowed);
void DDraw_Shutdown();
DDrawContext* DDraw_GetContext();
void DDraw_Flip();

} // namespace gamemd
