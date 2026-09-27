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

// 0x5F03B0
namespace gamemd {
char NullModem_TestConnection()
{
  wchar_t * v0;
  wchar_t *String; // esi
  wchar_t *v2; // eax
  HWND v3; // eax
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // esi
  DWORD Ticks; // ecx
  int v9; // esi
  int v10; // esi
  int v11; // edi
  int v12; // esi
  int v13; // esi
  wchar_t *v14; // eax
  wchar_t *v16; // [esp-18h] [ebp-228h]
  wchar_t * v17;
  int v18; // [esp+Ch] [ebp-204h]
  HWND hWnd; // [esp+10h] [ebp-200h]
  unsigned char v20[4]; // [esp+14h] [ebp-1FCh] BYREF
  unsigned int v21[62]; // [esp+18h] [ebp-1F8h] BYREF
  int16_t v22; // [esp+110h] [ebp-100h]
  unsigned int v23[6]; // [esp+114h] [ebp-FCh] BYREF
  int v24; // [esp+12Ch] [ebp-E4h]

  v0 = (wchar_t *)((char)((wchar_t *)(0)));
  v17 = (wchar_t *)((char)((wchar_t *)(1)));
  g_NetworkTestFlag = (int)((wchar_t *)(0));
  String = (wchar_t *)(GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6489));
  v2 = GetStringCSF(aTxtNullConnerr, 0, g_Str_File_NullDlg_CPP, 6489); /*0x5f03f3*/
  v3 = CreateMessageBox((LPARAM)v2, (LPARAM)String, (LONG)&g_NetworkTestFlag); /*0x5f03fc*/
  hWnd = v3; /*0x5f0403*/
  if ( !v3 ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  Dialog::Show(v3); /*0x5f040f*/
  v4 = g_PerformanceTickOffset; /*0x5f0419*/
  if ( g_LastPerformanceTick != -1 ) /*0x5f0422*/
    v4 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f0434*/
  v18 = v4; /*0x5f0438*/
  v5 = v4; /*0x5f043c*/
  while ( Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&g_EventManager); /*0x5f045d*/
    v6 = g_LastPerformanceTick; /*0x5f0462*/
    v7 = g_PerformanceTickOffset; /*0x5f0467*/
    if ( g_LastPerformanceTick != -1 ) /*0x5f0470*/
    {
      Ticks = Timer::GetTicks(); /*0x5f047c*/
      v6 = g_LastPerformanceTick; /*0x5f047e*/
      v7 += Ticks - g_LastPerformanceTick; /*0x5f0485*/
    }
    if ( (unsigned int)(v7 - v5) > 0x1E ) /*0x5f048c*/
    {
      v9 = g_PerformanceTickOffset; /*0x5f048e*/
      if ( v6 != -1 ) /*0x5f0497*/
        v9 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f04a9*/
      memset(v21, 0, sizeof(v21)); /*0x5f04bc*/
      v22 = 0; /*0x5f04be*/
      v5 = v9; /*0x5f04d1*/
      v21[0] = 100; /*0x5f04d3*/
      IDA_LOBYTE(v21[6]) = g_TauntCommandState; /*0x5f04db*/
      Stream::WriteBlock((int)&g_EventManager, (int)v21, 250, 0); /*0x5f04df*/
    }
    if ( ObjectTypeClass::CreateInstance((int)&g_EventManager, (int)v23, (int)v20) > 0 ) /*0x5f04fd*/
    {
      v10 = g_PerformanceTickOffset; /*0x5f0508*/
      if ( g_LastPerformanceTick != -1 ) /*0x5f0511*/
        v10 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f0523*/
      v18 = v10; /*0x5f052c*/
      if ( v23[0] == 100 ) /*0x5f0533*/
      {
        if ( (uint8_t)v24 == g_TauntCommandState ) /*0x5f054d*/
        {
          v16 = (wchar_t *)(GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6530));
          v14 = (wchar_t *)(GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, g_Str_File_NullDlg_CPP, 6530));
          Dialog::ShowMessageBox(v5, v14, v16, 0, 0, 0); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(v21, 0, sizeof(v21)); /*0x5f0560*/
        v22 = 0; /*0x5f0571*/
        v21[0] = 100; /*0x5f0573*/
        IDA_LOBYTE(v21[6]) = g_TauntCommandState; /*0x5f057b*/
        Stream::WriteBlock((int)&g_EventManager, (int)v21, 250, 1); /*0x5f057f*/
        v11 = g_PerformanceTickOffset; /*0x5f0589*/
        if ( g_LastPerformanceTick != -1 ) /*0x5f0594*/
          v11 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f05a6*/
        v5 = v11; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          v12 = g_PerformanceTickOffset; /*0x5f05af*/
          if ( g_LastPerformanceTick != -1 ) /*0x5f05b7*/
            v12 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f05c9*/
          if ( (unsigned int)(v12 - v11) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&g_EventManager); /*0x5f05d7*/
        }
        v0 = (wchar_t *)(1);
        v17 = 0; /*0x5f05e0*/
      }
    }
    v13 = g_PerformanceTickOffset; /*0x5f05ea*/
    if ( g_LastPerformanceTick != -1 ) /*0x5f05f3*/
      v13 += Timer::GetTicks() - g_LastPerformanceTick; /*0x5f0605*/
    if ( (unsigned int)(v13 - v18) > 0x384 ) /*0x5f0611*/
      break; /*0x5f0611*/
    if ( v17 != 1 ) /*0x5f0618*/
      goto LABEL_33; /*0x5f0618*/
  }
  v0 = (wchar_t *)((char)(0));
  LABEL_33:
  Dialog::Destroy(hWnd); /*0x5f0666*/
  return v0; /*0x5f0673*/
}
}