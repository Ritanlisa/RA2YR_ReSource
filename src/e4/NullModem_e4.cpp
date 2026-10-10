// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/NukeFlash_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x5F03B0
namespace gamemd {  // G42.18 ns repair
char NullModem_TestConnection(void * a1)
{
  char v1; // bl
  wchar_t *StringCSF; // esi
  wchar_t *v3; // eax
  void * MessageBox;
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int Ticks; // ecx
  int v10; // esi
  int v11; // esi
  int v12; // edi
  int v13; // esi
  int v14; // esi
  int *v15; // eax
  wchar_t *v17; // [esp-18h] [ebp-228h]
  char v19; // [esp+Bh] [ebp-205h]
  int v20; // [esp+Ch] [ebp-204h]
  HWND hWnd; // [esp+10h] [ebp-200h]
  unsigned char v22[4]; // [esp+14h] [ebp-1FCh] BYREF
  int v23[62]; // [esp+18h] [ebp-1F8h] BYREF
  int16_t v24; // [esp+110h] [ebp-100h]
  unsigned int v25[6]; // [esp+114h] [ebp-FCh] BYREF
  int v26; // [esp+12Ch] [ebp-E4h]

  v1 = (HWND)(0);
  v19 = 1; /*0x5f03d0*/
  g_NetworkTestFlag = 0; /*0x5f03d5*/
  StringCSF = GetStringCSF((wchar_t *)(g_Str_TXT_CANCEL), 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f1*/
  v3 = GetStringCSF((wchar_t *)(aTxtNullConnerr), 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f3*/
  MessageBox = (HWND)(CreateMessageBox((LPARAM)v3, (LPARAM)StringCSF, (LONG)&g_NetworkTestFlag)); /*0x5f03fc*/
  hWnd = MessageBox; /*0x5f0403*/
  if ( !MessageBox ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  ((Dialog *)(MessageBox))->Show(); /*0x5f040f*/
  v5 = dword_887340; /*0x5f0419*/
  if ( dword_887338 != -1 ) /*0x5f0422*/
    v5 += TimerGetTicks() - dword_887338; /*0x5f0434*/
  v20 = v5; /*0x5f0438*/
  v6 = v5; /*0x5f043c*/
  while ( (uint8_t)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5f045d*/
    v7 = dword_887338; /*0x5f0462*/
    v8 = dword_887340; /*0x5f0467*/
    if ( dword_887338 != -1 ) /*0x5f0470*/
    {
      Ticks = TimerGetTicks(); /*0x5f047c*/
      v7 = dword_887338; /*0x5f047e*/
      v8 += Ticks - dword_887338; /*0x5f0485*/
    }
    if ( (unsigned int)(v8 - v6) > 0x1E ) /*0x5f048c*/
    {
      v10 = dword_887340; /*0x5f048e*/
      if ( v7 != -1 ) /*0x5f0497*/
        v10 += TimerGetTicks() - dword_887338; /*0x5f04a9*/
      memset(v23, 0, sizeof(v23)); /*0x5f04bc*/
      v24 = 0; /*0x5f04be*/
      v6 = v10; /*0x5f04d1*/
      v23[0] = 100; /*0x5f04d3*/
      (*((unsigned char *)&(v23[6]))) = dword_A8B394; /*0x5f04db*/
      Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 0); /*0x5f04df*/
    }
    if ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v25, (int)v22) > 0 ) /*0x5f04fd*/
    {
      v11 = dword_887340; /*0x5f0508*/
      if ( dword_887338 != -1 ) /*0x5f0511*/
        v11 += TimerGetTicks() - dword_887338; /*0x5f0523*/
      v20 = v11; /*0x5f052c*/
      if ( v25[0] == 100 ) /*0x5f0533*/
      {
        if ( (uint8_t)v26 == dword_A8B394 ) /*0x5f054d*/
        {
          v17 = GetStringCSF((wchar_t *)(g_Str_TXT_OK), 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f064a*/
          v15 = (int *)GetStringCSF((wchar_t *)(aTxtSystemNotRe), 0, g_Str_File_NullDlg_CPP, 6530); /*0x5f0655*/
          Dialog::ShowMessageBox(v15, v17, 0, 0, 0, a1); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(v23, 0, sizeof(v23)); /*0x5f0560*/
        v24 = 0; /*0x5f0571*/
        v23[0] = 100; /*0x5f0573*/
        (*((unsigned char *)&(v23[6]))) = dword_A8B394; /*0x5f057b*/
        Stream::WriteBlock(&unk_A8EA70, (int)v23, 250, 1); /*0x5f057f*/
        v12 = dword_887340; /*0x5f0589*/
        if ( dword_887338 != -1 ) /*0x5f0594*/
          v12 += TimerGetTicks() - dword_887338; /*0x5f05a6*/
        v6 = v12; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          v13 = dword_887340; /*0x5f05af*/
          if ( dword_887338 != -1 ) /*0x5f05b7*/
            v13 += TimerGetTicks() - dword_887338; /*0x5f05c9*/
          if ( (unsigned int)(v13 - v12) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5f05d7*/
        }
        v1 = 1; /*0x5f05de*/
        v19 = 0; /*0x5f05e0*/
      }
    }
    v14 = dword_887340; /*0x5f05ea*/
    if ( dword_887338 != -1 ) /*0x5f05f3*/
      v14 += TimerGetTicks() - dword_887338; /*0x5f0605*/
    if ( (unsigned int)(v14 - v20) > 0x384 ) /*0x5f0611*/
      break; /*0x5f0611*/
    if ( v19 != 1 ) /*0x5f0618*/
      goto LABEL_33; /*0x5f0618*/
  }
  v1 = 0; /*0x5f0664*/
  LABEL_33:
  ((Dialog *)(hWnd))->Destroy(); /*0x5f0666*/
  return v1; /*0x5f0673*/
}
}  // G42.18 ns repair