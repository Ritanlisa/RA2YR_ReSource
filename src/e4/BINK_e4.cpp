// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x52B9B0
HWND BINK::Background_Setup()
{
{
    HWND result;
    HWND v2;
    int v3;
    int v4;
    result = GetDlgItem(this, 1818);
    v2 = result;
    if ( result )
  {
    if ( g_DisplayWidth > 800 )
    v3 = (g_DisplayWidth - 800) / 2;
    else
    v3 = 0;
    if ( *(&g_DisplayWidth + 1) > 600 )
    v4 = (*(&g_DisplayWidth + 1) - 600) / 2;
    else
    v4 = 0;
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu);
    SendMessageA(v2, 0x4E3u, 1u, 0);
    if ( g_DisplayWidth == 640 )
    return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS);
    else
    return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL);
  }
    return result;
}
}
