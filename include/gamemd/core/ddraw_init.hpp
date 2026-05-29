#pragma once

#include <windows.h>

namespace gamemd {

struct DDrawContext;

bool DDraw_Init(HWND hwnd, int width, int height, bool windowed);
void DDraw_Shutdown();
DDrawContext* DDraw_GetContext();
void DDraw_Flip();

} // namespace gamemd
