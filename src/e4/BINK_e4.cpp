// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BINK_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x52B9B0
namespace gamemd {  // G42.18 ns repair
HWND BINK::Background_Setup(HWND hDlg)
{


  int result; // eax
  result = (int)GetDlgItem((HWND)hDlg, 1818); /*0x52b9b8*/
  HWND v2; // esi
  v2 = (HWND)result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    int v3; // ecx
    if ( (int)g_DisplayWidth > 800 ) /*0x52b9d2*/
      v3 = (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    int v4; // eax
    if ( (int)*(&g_DisplayWidth + 1) > 600 ) /*0x52b9ee*/
      v4 = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( g_DisplayWidth == 640 ) /*0x52ba2b*/
      return (HWND)(SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS)); /*0x52ba3a*/
    else
      return (HWND)(SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL)); /*0x52ba4c*/
  }
  return (HWND)(result); /*0x52ba3c*/

}
} // namespace gamemd