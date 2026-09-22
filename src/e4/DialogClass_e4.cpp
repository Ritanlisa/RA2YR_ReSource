// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5D6350
namespace gamemd {
char DialogClass::GetFlag()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DialogClass_GetFlag(_BYTE *this)
{
  return this->q034; /*0x5d6353*/
}
}
} // namespace gamemd

// 0x775BC0
namespace gamemd {
BOOL DialogClass::Reposition(SkirmishDialog * aP0, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall DialogClass::Reposition(SkirmishDialog *aP0, LPARAM a2)
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

  GetWindowRect((HWND)aP0, &Rect); /*0x775bdd*/
  GetClassNameA((HWND)aP0, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, &stru_830620.__pad_14B0[7228]) ) /*0x775c01*/
    SendMessageA((HWND)aP0, 0x152u, 0, (LPARAM)&Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    WindowLongA = (HWND)GetWindowLongA((HWND)aP0, -8); /*0x775c4b*/
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
    DialogParamA = CreateDialogParamA((HINSTANCE)g_hInstance, (LPCSTR)0xC6, 0, sub_775B40, 0); /*0x775cac*/
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
  MoveWindow((HWND)aP0, Rect.left, Rect.top, v7, v8, 1); /*0x775d4c*/
  return 1; /*0x775d52*/
}
}
} // namespace gamemd

// 0x60D450
namespace gamemd {
ATOM DialogClass::RegisterWinClasses()
{
{
    ATOM result;
    WNDCLASSA WndClass;
    result = 1;
    if ( DataGlobal_AC48CC != 1 )
  {
    DataGlobal_AC48CC = 1;
    WndClass.hInstance = g_hInstance;
    WndClass.style = 3;
    WndClass.lpfnWndProc = GameScreen::DlgProc;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    memset(&WndClass.hIcon, 0, 12);
    WndClass.lpszMenuName = DataGlobal_8357A0;
    WndClass.lpszClassName = DataGlobal_8357A0;
    RegisterClassA(&WndClass);
    WndClass.style = 131;
    WndClass.lpfnWndProc = sub_60D520;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = g_hInstance;
    memset(&WndClass.hIcon, 0, 16);
    WndClass.lpszClassName = g_INI_Key_NewEdit;
    return RegisterClassA(&WndClass);
  }
    return result;
}
}
} // namespace gamemd
