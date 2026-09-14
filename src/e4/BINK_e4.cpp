// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x52B9B0
HWND BINK::Background_Setup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall BINK::Background_Setup(HWND this)
{
  HWND result; // eax
  HWND v2; // esi
  int v3; // ecx
  int v4; // eax

  result = GetDlgItem(this, 1818); /*0x52b9b8*/
  v2 = result; /*0x52b9be*/
  if ( result ) /*0x52b9c2*/
  {
    if ( MEMORY[0x8A00A4] > 800 ) /*0x52b9d2*/
      v3 = (MEMORY[0x8A00A4] - 800) / 2; /*0x52b9e2*/
    else
      v3 = 0; /*0x52b9d4*/
    if ( *(&MEMORY[0x8A00A4] + 1) > 600 ) /*0x52b9ee*/
      v4 = (*(&MEMORY[0x8A00A4] + 1) - 600) / 2; /*0x52b9fc*/
    else
      v4 = 0; /*0x52b9f0*/
    SetWindowPos(v2, 0, v3, v4, -1, -1, 0xDu); /*0x52ba09*/
    SendMessageA(v2, 0x4E3u, 1u, 0); /*0x52ba1f*/
    if ( MEMORY[0x8A00A4] == 640 ) /*0x52ba2b*/
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsS); /*0x52ba3a*/
    else
      return (HWND)SendMessageA(v2, 0x4E4u, 0, (LPARAM)aRa2tsL); /*0x52ba4c*/
  }
  return result; /*0x52ba3c*/
}
}
