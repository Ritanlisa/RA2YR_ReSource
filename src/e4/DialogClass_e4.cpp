// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"

// 0x5D6350
namespace gamemd {
int DialogClass::GetFlag(void *a1 = 0)
{

  return *((unsigned char *)this + 52); /*0x5d6353*/

}
}
// 0x775BC0
namespace gamemd {
int DialogClass::Reposition(SkirmishDialog * aP0, LPARAM a2)
{

  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v7; // [esp-Ch] [ebp-BCh]
  int v8; // [esp-8h] [ebp-B8h]
  int Rect; // [esp+10h] [ebp-A0h] BYREF
  int Rect_4; // [esp+14h] [ebp-9Ch]
  int Rect_8; // [esp+18h] [ebp-98h]
  int Rect_12; // [esp+1Ch] [ebp-94h]
  int v13; // [esp+20h] [ebp-90h] BYREF
  int v14; // [esp+24h] [ebp-8Ch]
  __int64 v15; // [esp+28h] [ebp-88h]
  char ClassName[128]; // [esp+30h] [ebp-80h] BYREF

  ((void (*)(int, int *))GetWindowRect)(aP0, &Rect); /*0x775bdd*/
  ((void (*)(int, char *, int))GetClassNameA)(aP0, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    ((void (*)(int, int, unsigned int, int *))SendMessageA)(aP0, 338, 0, &Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    v2 = ((int (*)(int, int))GetWindowLongA)(aP0, -8); /*0x775c4b*/
    ((void (*)(int, int *))GetWindowRect)(v2, &v13); /*0x775c57*/
    Rect -= v13; /*0x775c79*/
    Rect_8 -= v13; /*0x775c7d*/
    Rect_4 -= v14; /*0x775c81*/
    Rect_12 -= v14; /*0x775c85*/
  }
  v3 = dword_A8ED54[233600]; /*0x775c89*/
  if ( dword_A8ED54[233600] ) /*0x775c91*/
  {
    v5 = dword_A8ED54[233601]; /*0x775cd7*/
  }
  else
  {
    v4 = ((int (*)(int, int, unsigned int, int (*)(int, int, int, int), unsigned int))CreateDialogParamA)( /*0x775cac*/
           dword_A8ED54[233831],
           198,
           0,
           sub_775B40,
           0);
    ((void (*)(int, int *))GetClientRect)(v4, &v13); /*0x775cb4*/
    ((void (*)(int))DestroyWindow)(v4); /*0x775cbb*/
    v5 = HIDWORD(v15); /*0x775cc5*/
    v3 = v15; /*0x775cc5*/
    *(unsigned long long *)&dword_A8ED54[233600] = v15; /*0x775cc9*/
  }
  v8 = dword_849DE4 * (Rect_12 - Rect_4 + 1) / v5; /*0x775d19*/
  v7 = dword_849DE0 * (Rect_8 - Rect + 1) / v3; /*0x775d1a*/
  Rect = Rect * dword_849DE0 / v3; /*0x775d2e*/
  Rect_8 = v7 + Rect - 1; /*0x775d32*/
  Rect_4 = Rect_4 * dword_849DE4 / v5; /*0x775d36*/
  Rect_12 = v8 + Rect_4 - 1; /*0x775d48*/
  ((void (*)(int, int, int, int, int, int))MoveWindow)(aP0, Rect, Rect_4, v7, v8, 1); /*0x775d4c*/
  return 1; /*0x775d52*/

}
}
// 0x60D450
namespace gamemd {
ATOM DialogClass::RegisterWinClasses()
{

  ATOM result; // ax
  WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

  result = 1; /*0x60d456*/
  if ( MEMORY[0xAC48CC] != 1 ) /*0x60d460*/
  {
    MEMORY[0xAC48CC] = 1; /*0x60d469*/
    WndClass.hInstance = g_hInstance; /*0x60d48a*/
    WndClass.style = 3; /*0x60d496*/
    WndClass.lpfnWndProc = GameScreen::DlgProc; /*0x60d49e*/
    WndClass.cbClsExtra = 0; /*0x60d4a6*/
    WndClass.cbWndExtra = 0; /*0x60d4aa*/
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = MEMORY[0x8357A0]; /*0x60d4ba*/
    WndClass.lpszClassName = MEMORY[0x8357A0]; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = g_hInstance; /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = MEMORY[0x833720]; /*0x60d508*/
    return RegisterClassA(&WndClass); /*0x60d510*/
  }
  return result; /*0x60d515*/

}
} // namespace gamemd
