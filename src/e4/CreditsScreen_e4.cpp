// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"

// 0x531A00
void CreditsScreen::DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // esi
  wchar_t *String; // eax
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  char Buffer[256]; // [esp+14h] [ebp-280h] BYREF
  char Destination[128]; // [esp+214h] [ebp-80h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x531a28*/
  if ( result ) /*0x531a2f*/
    return result; /*0x531a2f*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x531a38*/
  if ( a2 == 273 ) /*0x531a44*/
  {
    if ( (_WORD)a3 && (unsigned __int16)a3 <= 2u ) /*0x531c19*/
      *WindowLongA = (unsigned __int16)a3; /*0x531c1b*/
    return 0; /*0x531c1b*/
  }
  if ( a2 != 1175 ) /*0x531a50*/
    return 0; /*0x531c1d*/
  DlgItem = GetDlgItem(hWnd, 1461); /*0x531a73*/
  String = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Init_CPP, 5680); /*0x531a75*/
  SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x531a89*/
  ModuleVersion = GetModuleVersion(); /*0x531a8b*/
  sprintf(Buffer, DataGlobal_826954, ModuleVersion); /*0x531a9b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531ab0*/
  ModuleInternalVersion = GetModuleInternalVersion((int)&g_CoordScatterManager); /*0x531ab7*/
  sprintf(Buffer, DataGlobal_826940, ModuleInternalVersion); /*0x531ac7*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531adc*/
  char v16[128]; // [esp+114h] [ebp-180h] BYREF
  v16[0] = 0; /*0x531aea*/
  Time::FormatDate(v16); /*0x531af2*/
  const char * v12 = (const char *)String::CopyConstant(Destination); /*0x531b10*/
  char v17[128]; // [esp+194h] [ebp-100h] BYREF
  const char * v10 = (const char *)String::FormatDword(v17); /*0x531b1d*/
  sprintf(Buffer, DataGlobal_826920, v10, v12, v16); /*0x531b2d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531b42*/
  int v14 = 5; /*0x531b51*/
  char v13 = 0; /*0x531b59*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&DataGlobal_A8F314); /*0x531b5e*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&DataGlobal_A8F4A0); /*0x531b6d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&DataGlobal_A8F420); /*0x531b7c*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&DataGlobal_A8F520); /*0x531b8b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&DataGlobal_A8F394); /*0x531b9a*/
  GetVersionString(&v14, &v13, 0, 0); /*0x531ba8*/
  const char * v11 = (const char *)&stru_821F08; /*0x531bb3*/
  if ( !v13 ) /*0x531bb8*/
    v11 = g_INI_Key_No; /*0x531bba*/
  sprintf(Buffer, stru_82690C, v11, Source); /*0x531bcf*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531be4*/
  CreditsScreen::Init(Buffer); /*0x531bea*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531bfc*/
  return 0; /*0x531bfe*/
}
}

// 0x4A3C00
void CreditsScreen::Init()
{
{
    *(void**)this = 0;
}
}
