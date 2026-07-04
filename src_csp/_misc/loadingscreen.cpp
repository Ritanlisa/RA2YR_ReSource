#include "loadingscreen.hpp"

// 0x00554150
int * LoadingScreen::CalcProgressBarRect(int *this)
{
    int v1; // esi
    int v2; // edi
    if ( g_DisplayWidth == 640 )
    v1 = 16;
    v2 = 235;
    else
    v1 = 20;
    v2 = 300;
    if ( g_DisplayWidth >= 800 )
    v1 += (g_DisplayWidth - 800) / 2;
    v2 += (MEMORY[0x8A00A8] - 600) / 2;
    *this = v1;
    *(this + 1) = v2;
    *(this + 2) = 200;
    *(this + 3) = 20;
    return this;
}

