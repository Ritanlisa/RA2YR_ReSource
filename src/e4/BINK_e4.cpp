// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BINK_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x52B9B0
namespace gamemd {
HWND BINK::Background_Setup(HWND hDlg)
{

  HWND result; // eax
  HWND v2; // esi
  int v3; // ecx
  int v4; // eax

  result = GetDlgItem(hDlg, 1818); /*0x52b9b8*/
  v2 = result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    if ( g_abs_8A00A4 > 800 ) /*0x52b9d2*/
      v3 = (g_abs_8A00A4 - 800) / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    if ( *(&g_abs_8A00A4 + 1) > 600 ) /*0x52b9ee*/
      v4 = (*(&g_abs_8A00A4 + 1) - 600) / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( g_abs_8A00A4 == 640 ) /*0x52ba2b*/
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x52ba3a*/
    else
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x52ba4c*/
  }
  return result; /*0x52ba3c*/

}
} // namespace gamemd