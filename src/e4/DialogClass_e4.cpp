// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/Dial8Class_48_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"

// 0x5D6350
namespace gamemd {
int DialogClass::GetFlag()
{
  return *(&this->u32_142); /*0x5d6353*/
}
}
// 0x775BC0
namespace gamemd {
int DialogClass::Reposition(SkirmishDialog * aP0, LPARAM a2)
{
  HWND WindowLongA; // eax
  LONG right; // edi
  HWND DialogParamA; // esi
  LONG bottom; // ebx
  int v7; // [esp-Ch] [ebp-BCh]
  int v8; // [esp-8h] [ebp-B8h]
  struct tagRECT Rect; // [esp+10h] [ebp-A0h] BYREF
  struct tagRECT v10; // [esp+20h] [ebp-90h] BYREF
  CHAR ClassName[128]; // [esp+30h] [ebp-80h] BYREF

  GetWindowRect(aP0, &Rect); /*0x775bdd*/
  GetClassNameA(aP0, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    SendMessageA(aP0, 0x152u, 0, (LPARAM)&Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    WindowLongA = (HWND)GetWindowLongA(aP0, -8); /*0x775c4b*/
    GetWindowRect(WindowLongA, &v10); /*0x775c57*/
    Rect.left -= v10.left; /*0x775c79*/
    Rect.right -= v10.left; /*0x775c7d*/
    Rect.top -= v10.top; /*0x775c81*/
    Rect.bottom -= v10.top; /*0x775c85*/
  }
  right = (LONG)dwInitParam; /*0x775c89*/
  if ( dwInitParam ) /*0x775c91*/
  {
    bottom = dword_B72F58; /*0x775cd7*/
  }
  else
  {
    DialogParamA = (int)(CreateDialogParamA(g_hInstance, (LPCSTR)0xC6, 0, sub_775B40, 0));
    GetClientRect(DialogParamA, &v10); /*0x775cb4*/
    DestroyWindow(DialogParamA); /*0x775cbb*/
    right = v10.right; /*0x775cc1*/
    bottom = v10.bottom; /*0x775cc5*/
    dwInitParam = (HWND)v10.right; /*0x775cc9*/
    dword_B72F58 = v10.bottom; /*0x775ccf*/
  }
  v8 = dword_849DE4 * (Rect.bottom - Rect.top + 1) / bottom; /*0x775d19*/
  v7 = dword_849DE0 * (Rect.right - Rect.left + 1) / right; /*0x775d1a*/
  Rect.left = Rect.left * dword_849DE0 / right; /*0x775d2e*/
  Rect.right = v7 + Rect.left - 1; /*0x775d32*/
  Rect.top = Rect.top * dword_849DE4 / bottom; /*0x775d36*/
  Rect.bottom = v8 + Rect.top - 1; /*0x775d48*/
  MoveWindow(aP0, Rect.left, Rect.top, v7, v8, 1); /*0x775d4c*/
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
  if ( dword_AC48CC != 1 ) /*0x60d460*/
  {
    dword_AC48CC = (unsigned int)((LPCSTR)(1));
    WndClass.hInstance = (HINSTANCE)((LPCSTR)(g_hInstance));
    WndClass.style = (UINT)((LPCSTR)(3));
    WndClass.lpfnWndProc = (LPCSTR)(GameScreen::DlgProc);
    WndClass.cbClsExtra = (LPCSTR)(0);
    WndClass.cbWndExtra = (LPCSTR)(0);
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = aCombodropwin; /*0x60d4ba*/
    WndClass.lpszClassName = aCombodropwin; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = g_hInstance; /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = g_INI_Key_NewEdit; /*0x60d508*/
    return RegisterClassA(&WndClass); /*0x60d510*/
  }
  return result; /*0x60d515*/
}
} // namespace gamemd
