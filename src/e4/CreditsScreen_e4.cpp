// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/CreditsScreen_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/E4Recv_6C0AD0_e4.hpp"
#include "e4/classes/E4Recv_6C0650_e4.hpp"
#include "e4/classes/E4Recv_6C0C50_e4.hpp"
#include "e4/classes/E4Recv_6C3C50_e4.hpp"
#include "e4/classes/E4Recv_6C3DD0_e4.hpp"
#include "e4/classes/E4Recv_6C3650_e4.hpp"
#include "e4/classes/E4Recv_6C1250_e4.hpp"
#include "e4/classes/E4Recv_6C16D0_e4.hpp"
#include "e4/classes/E4Recv_6C19D0_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Time_e4.hpp"

// 0x531A00
namespace gamemd {  // G42.18 ns repair
INIClass * * CreditsScreen::DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{

  INIClass ** result;
  unsigned int *WindowLongA; // eax
  HWND DlgItem; // esi
  wchar_t *String; // eax
  char *ModuleVersion; // eax
  char *ModuleInternalVersion; // eax
  const char *v10; // eax
  const unsigned int v11;
  const char *v12; // [esp-8h] [ebp-29Ch]
  char v13; // [esp+Fh] [ebp-285h] BYREF
  int v14; // [esp+10h] [ebp-284h] BYREF
  char Buffer[256]; // [esp+14h] [ebp-280h] BYREF
  char v16[128]; // [esp+114h] [ebp-180h] BYREF
  char v17[128]; // [esp+194h] [ebp-100h] BYREF
  char Destination[128]; // [esp+214h] [ebp-80h] BYREF

  result = (gamemd::INIClass **)((int)((gamemd::INIClass **)(BaseDialogProc((gamemd::SkirmishDialog *)(hWnd), a2, a3, a4))));
  if ( result ) /*0x531a2f*/
    return result; /*0x531a2f*/
  WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x531a38*/
  if ( a2 == 273 ) /*0x531a44*/
  {
    if ( (unsigned short)a3 && (uint16_t)a3 <= 2u ) /*0x531c19*/
      *WindowLongA = (uint16_t)a3; /*0x531c1b*/
    return 0; /*0x531c1b*/
  }
  if ( a2 != 1175 ) /*0x531a50*/
    return 0; /*0x531c1d*/
  DlgItem = GetDlgItem(hWnd, 1461); /*0x531a73*/
  String = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_TXT_SHORT_TITLE), 0,(const char *)(g_Str_File_Init_CPP), 5680)); /*0x531a75*/
  SendMessageA(DlgItem, 0x4CDu, 0, (LPARAM)String); /*0x531a89*/
  ModuleVersion = GetModuleVersion(); /*0x531a8b*/
  sprintf(Buffer, "Version %s", ModuleVersion); /*0x531a9b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531ab0*/
  ModuleInternalVersion = (char *)(GetModuleInternalVersion((void *)((int)&dword_A8ECE0))); /*0x531ab7*/
  sprintf(Buffer, "Internal Version %s", ModuleInternalVersion); /*0x531ac7*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531adc*/
  v16[0] = 0; /*0x531aea*/
  ((Time *)(v16))->FormatDate(); /*0x531af2*/
  v12 = (const char *)((String *)(Destination))->CopyConstant(); /*0x531b10*/
  v10 = (const char *)((String *)(v17))->FormatDword(); /*0x531b1d*/
  sprintf(Buffer, "Release Build: %s by %s - %s", v10, v12, v16);
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531b42*/
  v14 = 5; /*0x531b51*/
  v13 = 0; /*0x531b59*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F314); /*0x531b5e*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F4A0); /*0x531b6d*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F420); /*0x531b7c*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F520); /*0x531b8b*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)&byte_A8F394); /*0x531b9a*/
  GetVersionString((unsigned int *)(&v14),(unsigned char *)(&v13), 0, 0); /*0x531ba8*/
  v11 = (const unsigned int)((const char *)&off_821F08); /*0x531bb3*/
  if ( !v13 ) /*0x531bb8*/
    v11 = g_INI_Key_No; /*0x531bba*/
  sprintf(Buffer, "MMX %s, Vendor: %s", v11, Source);
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531be4*/
  CreditsScreen::Init(Buffer); /*0x531bea*/
  SendMessageA(DlgItem, 0x4C8u, 0, (LPARAM)Buffer); /*0x531bfc*/
  return 0; /*0x531bfe*/

}
}  // G42.18 ns repair
} // namespace gamemd
// 0x4A3C00
namespace gamemd {
void CreditsScreen::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  *(unsigned int *)this = 0; /*0x4a3c00*/

}
} // namespace gamemd