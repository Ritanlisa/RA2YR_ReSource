// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x614190
unsigned int ListBox::EditSubclassProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t * lParam)
{
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT (__stdcall **v6)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND *v7; // eax
  LONG WindowLongA; // eax
  LONG v11; // ebx
  UINT v12; // ebp
  WPARAM v13; // esi
  HWND Parent; // eax
  LONG v15; // ebx
  AbstractClass *v16; // esi
  unsigned __int16 v18; // ax
  HWND v19; // eax
  HWND v20; // esi
  HWND v21; // eax
  HWND NextDlgTabItem; // eax
  HWND v24; // eax
  LONG left; // ecx
  LONG top; // eax
  HWND v29; // eax
  HWND v30; // eax
  const WCHAR *v31; // edi
  DropListClass *v32; // edi
  const wchar_t *v33; // esi
  WPARAM v35; // [esp-8h] [ebp-1884h]
  HWND v36; // [esp-4h] [ebp-1880h]
  LRESULT (__stdcall *lpPrevWndFunc)(HWND, UINT, WPARAM, LPARAM); // [esp+10h] [ebp-186Ch]
  struct tagRECT v39; // [esp+14h] [ebp-1868h] BYREF
  HWND v40; // [esp+24h] [ebp-1858h] BYREF
  struct tagRECT v42; // [esp+2Ch] [ebp-1850h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-1840h] BYREF
  struct tagRECT v44; // [esp+4Ch] [ebp-1830h] BYREF
  CHAR ClassName[32]; // [esp+5Ch] [ebp-1820h] BYREF
  CHAR MultiByteStr[2048]; // [esp+7Ch] [ebp-1800h] BYREF
  wchar_t String[2048]; // [esp+87Ch] [ebp-1000h] BYREF

  v4 = 0; /*0x6141a2*/
  lpPrevWndFunc = 0; /*0x6141a7*/
  if ( g_DialogHashMap_Grow ) /*0x6141ab*/
  {
    int v5 = *((_DWORD *)g_DialogHashMap_Entries + (g_DialogHashMap_Insert(&hWnd) & ((1 << g_DialogHashMap_Insert) - 1))); /*0x6141cf*/
    if ( v5 ) /*0x6141d4*/
    {
      while ( *(HWND *)v5 != hWnd ) /*0x6141df*/
      {
        v5 = *(_DWORD *)(v5 + 8); /*0x6141e1*/
        if ( !v5 ) /*0x6141e6*/
          goto LABEL_8; /*0x6141e6*/
      }
      v6 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x6141ee*/
      if ( v6 ) /*0x6141f3*/
      {
        v4 = *v6; /*0x6141f5*/
        lpPrevWndFunc = *v6; /*0x6141f7*/
      }
    }
  }
LABEL_8:
  v40 = hWnd; /*0x6141fb*/
  if ( !g_DialogHashMap_Count ) /*0x61420d*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x61420d*/
  v7 = (HWND *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v40) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x61422e*/
  if ( !v7 ) /*0x614233*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614233*/
  while ( *v7 != v40 ) /*0x61423b*/
  {
    v7 = (HWND *)v7[129]; /*0x61423d*/
    if ( !v7 ) /*0x614245*/
      return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614245*/
  }
  _DWORD * v8 = v7 + 1; /*0x61424d*/
  if ( v7 == (HWND *)-4 ) /*0x614252*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614285*/
  if ( GetFocus() == hWnd && !v8[61] ) /*0x614297*/
  {
    v8[60] = 1; /*0x6142a1*/
    SetFocus(g_hWnd); /*0x6142b2*/
  }
  WindowLongA = GetWindowLongA(hWnd, -16); /*0x6142c2*/
  v11 = WindowLongA; /*0x6142c8*/
  v12 = Msg; /*0x6142ca*/
  v13 = wParam; /*0x6142d1*/
  if ( (Msg == 257 || Msg == 256) && wParam == 9 ) /*0x6142eb*/
    return 0; /*0x6142eb*/
  if ( Msg == 1175 ) /*0x6142f7*/
  {
    GetWindowRect(hWnd, &Rect); /*0x614310*/
    GetClientRect(hWnd, &v44); /*0x61431f*/
    Parent = GetParent(hWnd); /*0x614332*/
    GetWindowRect(Parent, &v39); /*0x614339*/
    MoveWindow(hWnd, Rect.left - v39.left + 1, Rect.top - v39.top + 1, v44.right - 2, v44.bottom - 2, 0); /*0x61436d*/
    if ( GetFocus() == hWnd ) /*0x614380*/
    {
      v8[60] = 1; /*0x614382*/
      SetFocus(g_hWnd); /*0x614392*/
    }
    if ( (v11 & 0x10000) == 0 ) /*0x61439e*/
      return 0; /*0x61439e*/
    v8[62] = 1; /*0x6143a4*/
    v15 = v11 & 0xFFFEFFFF; /*0x6143ae*/
LABEL_47:
    SetWindowLongA(hWnd, -16, v15); /*0x61459c*/
    return 0; /*0x6145b9*/
  }
  if ( Msg == 7 ) /*0x6143bc*/
  {
    SendMessageA(hWnd, 0xB1u, 0xFFFFFFFF, -1); /*0x6143cf*/
    if ( !v8[61] ) /*0x6143d5*/
      PostMessageA(hWnd, 0x4B0u, 0, 0); /*0x6143f4*/
LABEL_70:
    v29 = GetParent(hWnd); /*0x6147ee*/
    GetClassNameA(v29, ClassName, 32); /*0x614806*/
    if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x61481d*/
    {
      v30 = GetParent(hWnd); /*0x614858*/
      InvalidateRect(v30, 0, 0); /*0x61485b*/
    }
    InvalidateRect(hWnd, 0, 0); /*0x614869*/
    v13 = wParam; /*0x61486b*/
    return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x61486b*/
  }
  if ( Msg == 1205 || Msg == 1203 || Msg == 14 ) /*0x61441a*/
  {
    String[0] = 0; /*0x614904*/
    Memory_Helper_6149B0(hWnd, 2048, 0); /*0x61490e*/
    if ( v12 == 14 ) /*0x614916*/
    {
      return wcslen(String); /*0x614920*/
    }
    else if ( v12 == 1203 ) /*0x61493b*/
    {
      v32 = wParam; /*0x61493d*/
      v33 = lParam; /*0x614944*/
      wcsncpy(lParam, String, wParam); /*0x614955*/
      v33[v32 - 1] = 0; /*0x61495b*/
      return wcslen(v33); /*0x614962*/
    }
    else
    {
      const char * v34 = (const char *)lParam; /*0x614977*/
      CopyWideToChar(lParam, (char *)String, v13); /*0x614988*/
      v34[v13 - 1] = 0; /*0x614992*/
      return strlen(v34); /*0x61499f*/
    }
  }
  else if ( Msg == 1204 || Msg == 1202 ) /*0x614432*/
  {
    MultiByteStr[0] = 0; /*0x61489c*/
    v31 = (const WCHAR *)v8[10]; /*0x6148a1*/
    if ( v31 ) /*0x6148a6*/
      WideCharToMultiByte(0, 0, v31, -1, MultiByteStr, 2048, 0, 0); /*0x6148c0*/
    return CallWindowProcA(lpPrevWndFunc, hWnd, 0xCu, 0, (LPARAM)MultiByteStr); /*0x6148dc*/
  }
  else
  {
    if ( Msg != 258 ) /*0x61443e*/
    {
      if ( Msg == 1199 ) /*0x61455e*/
      {
        int v23 = v8[60]; /*0x614560*/
        v8[61] = 1; /*0x614566*/
        if ( v23 ) /*0x614572*/
        {
          SetFocus(hWnd); /*0x61457c*/
          v8[60] = 0; /*0x614582*/
        }
        if ( !v8[62] ) /*0x614594*/
          return 0; /*0x614594*/
        v15 = v11 | 0x10000; /*0x614596*/
        goto LABEL_47; /*0x614596*/
      }
      if ( Msg == 15 || Msg == 20 ) /*0x6145c4*/
      {
        ScreenDialogToClient(hWnd, &v42); /*0x6145d5*/
        v24 = GetParent(hWnd); /*0x6145e9*/
        GetClassNameA(v24, ClassName, 16); /*0x6145f0*/
        bool v25 = strcmp(ClassName, g_INI_Key_ComboBox) == 0; /*0x61462e*/
        if ( v12 == 15 && GetUpdateRect(hWnd, &v39, 0) ) /*0x614645*/
        {
          left = v42.left; /*0x61464f*/
          v39.right += v42.left; /*0x614663*/
          top = v42.top; /*0x614667*/
          v39.left += v42.left; /*0x61466b*/
          v39.top += v42.top; /*0x614677*/
          v39.bottom += v42.top; /*0x61467b*/
        }
        else
        {
          top = v42.top; /*0x614681*/
          left = v42.left; /*0x614685*/
        }
        Rect.left = left; /*0x61468d*/
        Rect.right = v42.right - left + 1; /*0x61469a*/
        int v37 = v8[50]; /*0x6146a5*/
        Rect.bottom = v42.bottom - top + 1; /*0x6146ad*/
        Rect.top = top; /*0x6146b5*/
        SetupDialogRenderBuffer(&Rect.left, hWnd, v37); /*0x6146b9*/
        if ( !v25 ) /*0x6146c0*/
          DrawDialogGradient((int *)DSurface_Alternate, &Rect.left, 2, -1); /*0x6146d0*/
        int v41 = 0; /*0x6146eb*/
        Memory_Helper_6149B0(hWnd, 5120, (int)&v41); /*0x6146f3*/
        v44.left = v42.left; /*0x614706*/
        v44.top = v42.top; /*0x614710*/
        v44.right = v42.right - v42.left + 1; /*0x614720*/
        v44.bottom = v42.bottom - v42.top + 1; /*0x614724*/
        unsigned int v28 = GetWindowLongA(hWnd, -16); /*0x614728*/
        DrawTextRendererMultiline( /*0x614760*/
          (_DWORD *)DSurface_Alternate,
          &v44.left,
          &DataGlobal_AC1E04,
          v41,
          (_DWORD *)v8[25],
          yTop,
          v8 + 17,
          v8[14],
          (v28 >> 5) & 1,
          0,
          0);
        ValidateRect(hWnd, 0); /*0x61476f*/
        v13 = wParam; /*0x614775*/
      }
      if ( v12 == 123 ) /*0x61477f*/
        return 1; /*0x614790*/
      if ( v12 == 512 ) /*0x614799*/
        return 1; /*0x6147aa*/
      if ( v12 != 256 && v12 != 257 && v12 != 260 && v12 != 261 && v12 != 262 && v12 != 263 && v12 != 8 && v12 != 513 ) /*0x6147e8*/
        return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x6147e8*/
      goto LABEL_70; /*0x6147e8*/
    }
    if ( wParam == 13 ) /*0x614447*/
    {
      if ( (WindowLongA & 4) != 0 ) /*0x614450*/
      {
        v16 = CallWindowProcA(lpPrevWndFunc, hWnd, 0xEu, 0, 0) + 3; /*0x614473*/
        char * v17 = (char *)__2_YAPAXI_Z(v16); /*0x614486*/
        CallWindowProcA(lpPrevWndFunc, hWnd, 0xDu, v16, (LPARAM)v17); /*0x61448e*/
        strcat(v17, String2); /*0x6144b3*/
        CallWindowProcA(lpPrevWndFunc, hWnd, 0xCu, 0, (LPARAM)v17); /*0x6144cb*/
        __3_YAXPAX_Z(v17); /*0x6144ce*/
        v18 = GetWindowLongA(hWnd, -12); /*0x6144e0*/
        v36 = hWnd; /*0x6144f7*/
        v35 = v18 | 0x5010000; /*0x6144f8*/
        v19 = GetParent(hWnd); /*0x6144ff*/
        SendMessageA(v19, 0x111u, v35, (LPARAM)v36); /*0x614506*/
        return 0; /*0x614518*/
      }
      return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x614450*/
    }
    if ( wParam != 9 ) /*0x61451e*/
      return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x614899*/
    v20 = hWnd; /*0x614524*/
    v21 = GetParent(hWnd); /*0x61452c*/
    NextDlgTabItem = GetNextDlgTabItem(v21, v20, 0); /*0x614536*/
    if ( NextDlgTabItem ) /*0x61453e*/
      v20 = NextDlgTabItem; /*0x614540*/
    SetFocus(v20); /*0x614543*/
    return 0; /*0x61454c*/
  }
}
}
