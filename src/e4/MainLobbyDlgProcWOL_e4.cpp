// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_77A760_e4.hpp"
#include "e4/classes/E4Recv_77A780_e4.hpp"
#include "e4/classes/E4Recv_77A7A0_e4.hpp"
#include "e4/classes/E4Recv_798F50_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MainMenu_e4.hpp"
#include "e4/classes/MSVQAnim_e4.hpp"
#include "e4/classes/MovieContext_e4.hpp"
#include "e4/classes/SafeDelete_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/Main_e4.hpp"

// 0x624020
namespace gamemd {
LRESULT MainLobbyDlgProcWOL_Assign(HWND hWnd, WPARAM wParam, void ** a3)
{
  LRESULT v5; // esi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x149u, wParam, 0); /*0x624039*/
  if ( v5 <= 0 ) /*0x62403d*/
    ((SafeDelete *)(a3))->Ptr(); /*0x624043*/
  v6 = (wchar_t *)RA2_OPNEW(2 * v5 + 4); /*0x624055*/
  v7 = SendMessageA(hWnd, 0x4C3u, wParam, (LPARAM)v6); /*0x624061*/
  ((WideString *)(a3))->Assign_Alt(v6); /*0x624068*/
  RA2_OPDEL(v6); /*0x62406e*/
  return v7; /*0x624078*/
}
} // namespace gamemd

// 0x77A8D0
namespace gamemd {
void MainLobbyDlgProcWOL_Get(HWND hDlg, char a2)
{
  HWND DlgItem; // ebp
  wchar_t * v4;
  wchar_t *StringCSF; // eax
  HWND v6; // ebp
  wchar_t *v7; // eax
  HWND v8; // ebp
  wchar_t *v9; // eax
  HWND v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // ebp
  wchar_t *v13; // eax
  HWND v14; // esi
  wchar_t *v15; // eax
  void *v16; // [esp+10h] [ebp-4h] BYREF

  if ( a2 ) /*0x77a8e5*/
  {
    DlgItem = GetDlgItem(hDlg, 1576); /*0x77a8ef*/
    SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x77a8fe*/
    InvalidateRect(DlgItem, 0, 0); /*0x77a905*/
  }
  v4 = (wchar_t *)((HWND)((wchar_t *)(GetDlgItem(hDlg, 1775))));
  SendMessageA((HWND)(v4), 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x77a920*/
  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_GUI_UnknownStats), 0,(const char *)(g_Str_File_WOLPersonaInformation_cpp), 892)); /*0x77a933*/
  ((WideString *)((wchar_t **)&v16))->Assign(StringCSF); /*0x77a93d*/
  v6 = GetDlgItem(hDlg, 1776); /*0x77a94e*/
  v7 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a950*/
  SendMessageA(v6, 0x4B2u, 0, (LPARAM)v7); /*0x77a95e*/
  v8 = GetDlgItem(hDlg, 1777); /*0x77a96c*/
  v9 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a96e*/
  SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x77a97c*/
  v10 = GetDlgItem(hDlg, 1793); /*0x77a98a*/
  v11 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a98c*/
  SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x77a99a*/
  v12 = GetDlgItem(hDlg, 1780); /*0x77a9a8*/
  v13 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a9aa*/
  SendMessageA(v12, 0x4B2u, 0, (LPARAM)v13); /*0x77a9b8*/
  v14 = GetDlgItem(hDlg, 1781); /*0x77a9c6*/
  v15 = (wchar_t *)(((WideString*)(wchar_t **)&v16)->GetOrEmpty_Alt()); /*0x77a9c8*/
  SendMessageA(v14, 0x4B2u, 0, (LPARAM)v15); /*0x77a9d6*/
  DeleteAndZero::Alt(&v16); /*0x77a9dc*/
}
} // namespace gamemd
