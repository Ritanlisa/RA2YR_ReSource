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
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { INT_PTR sub_775B40(HWND a1, UINT, WPARAM, LPARAM); }  // w18j2 raw 0x00775B40
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char aCombodropwin[13];  // data: 0x8357a0 truth(IDA G42.57w9)


// 0x5D6350
namespace gamemd {  // G42.18 ns repair
int DialogClass::GetFlag(void *a1)
{
  return *((unsigned char *)a1 + 52); /*0x5d6353*/
}
}  // G42.18 ns repair
// 0x775BC0
namespace gamemd {
int DialogClass::Reposition(HWND hWnd, int a2)
{
  LONG bottom; // ebx
  struct tagRECT Rect; // [esp+10h] [ebp-A0h] BYREF
  struct tagRECT v10; // [esp+20h] [ebp-90h] BYREF

  GetWindowRect(hWnd, &Rect); /*0x775bdd*/
  CHAR ClassName[128]; // [esp+30h] [ebp-80h] BYREF
  GetClassNameA(hWnd, ClassName, 128); /*0x775bea*/
  if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x775c01*/
    SendMessageA(hWnd, 0x152u, 0, (LPARAM)&Rect); /*0x775c37*/
  if ( a2 ) /*0x775c46*/
  {
    HWND WindowLongA; // eax
    WindowLongA = (HWND)GetWindowLongA(hWnd, -8); /*0x775c4b*/
    GetWindowRect(WindowLongA, &v10); /*0x775c57*/
    Rect.left -= v10.left; /*0x775c79*/
    Rect.right -= v10.left; /*0x775c7d*/
    Rect.top -= v10.top; /*0x775c81*/
    Rect.bottom -= v10.top; /*0x775c85*/
  }
  LONG right; // edi
  right = (LONG)dwInitParam; /*0x775c89*/
  if ( dwInitParam ) /*0x775c91*/
  {
    bottom = dword_B72F58; /*0x775cd7*/
  }
  else
  {
    HWND DialogParamA; // esi
    DialogParamA = CreateDialogParamA(g_hInstance, (LPCSTR)0xC6, 0, sub_775B40, 0); /*0x775cac*/
    GetClientRect(DialogParamA, &v10); /*0x775cb4*/
    DestroyWindow(DialogParamA); /*0x775cbb*/
    right = v10.right; /*0x775cc1*/
    bottom = v10.bottom; /*0x775cc5*/
    dwInitParam = (int)((HWND)v10.right); /*0x775cc9*/
    dword_B72F58 = v10.bottom; /*0x775ccf*/
  }
  int v8; // [esp-8h] [ebp-B8h]
  v8 = dword_849DE4 * (Rect.bottom - Rect.top + 1) / bottom; /*0x775d19*/
  int v7; // [esp-Ch] [ebp-BCh]
  v7 = dword_849DE0 * (Rect.right - Rect.left + 1) / right; /*0x775d1a*/
  Rect.left = Rect.left * dword_849DE0 / right; /*0x775d2e*/
  Rect.right = v7 + Rect.left - 1; /*0x775d32*/
  Rect.top = Rect.top * dword_849DE4 / bottom; /*0x775d36*/
  Rect.bottom = v8 + Rect.top - 1; /*0x775d48*/
  MoveWindow(hWnd, Rect.left, Rect.top, v7, v8, 1); /*0x775d4c*/
  return 1; /*0x775d52*/
}
}
// 0x60D450
namespace gamemd {
ATOM DialogClass::RegisterWinClasses()
{

  WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

  int result = 1; // eax /*0x60d456*/
  if ( dword_AC48CC != 1 ) /*0x60d460*/
  {
    dword_AC48CC = 1; /*0x60d469*/
    WndClass.hInstance = (HINSTANCE)(g_hInstance); /*0x60d48a*/
    WndClass.style = 3; /*0x60d496*/
    WndClass.lpfnWndProc = (WNDPROC)GameScreen::DlgProc; /*0x60d49e*/
    WndClass.cbClsExtra = 0; /*0x60d4a6*/
    WndClass.cbWndExtra = 0; /*0x60d4aa*/
    memset(&WndClass.hIcon, 0, 12); /*0x60d4ae*/
    WndClass.lpszMenuName = aCombodropwin; /*0x60d4ba*/
    WndClass.lpszClassName = aCombodropwin; /*0x60d4be*/
    RegisterClassA(&WndClass); /*0x60d4c2*/
    WndClass.style = 131; /*0x60d4db*/
    WndClass.lpfnWndProc = sub_60D520; /*0x60d4e4*/
    WndClass.cbClsExtra = 0; /*0x60d4ec*/
    WndClass.cbWndExtra = 0; /*0x60d4f0*/
    WndClass.hInstance = (HINSTANCE)(g_hInstance); /*0x60d4f4*/
    memset(&WndClass.hIcon, 0, 16); /*0x60d4f8*/
    WndClass.lpszClassName = (LPCSTR)(g_INI_Key_NewEdit); /*0x60d508*/
    (result) = ((result) & ~0xFFFF) | ((RegisterClassA(&WndClass)) & 0xFFFF); /*0x60d510*/
  }
  return result; /*0x60d515*/

}
} // namespace gamemd
