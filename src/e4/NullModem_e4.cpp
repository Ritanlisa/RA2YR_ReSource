// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x5F03B0
namespace gamemd {
char NullModem_TestConnection()
{
{
  ObjectClass *String; // esi
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  DWORD Ticks; // ecx
  wchar_t *v15; // eax
  wchar_t *v17; // [esp-18h] [ebp-228h]
  SkirmishDialog *hWnd; // [esp+10h] [ebp-200h]
  CampaignScore aP2[7]; // [esp+14h] [ebp-1FCh] BYREF
  __int16 v23; // [esp+110h] [ebp-100h]
  CampaignScore aP1; // [esp+114h] [ebp-FCh] BYREF

  char v1 = 0; /*0x5f03bd*/
  char v19 = 1; /*0x5f03d0*/
  *((_BYTE *)&g_MatrixTransformState + 9524) = 0; /*0x5f03d5*/
  String = (ObjectClass *)GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_830620[6244], 6489); /*0x5f03f1*/
  StringCSF = GetStringCSF((wchar_t *)&stru_830620[6292], 0, &stru_830620[6244], 6489); /*0x5f03f3*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, (LPARAM)String, (LONG)(&g_MatrixTransformState + 2381)); /*0x5f03fc*/
  hWnd = (SkirmishDialog *)MessageBox; /*0x5f0403*/
  if ( !MessageBox ) /*0x5f0407*/
    return 0; /*0x5f067c*/
  Dialog::Show(MessageBox); /*0x5f040f*/
  int v5 = *(_DWORD *)&stru_87C374[45004]; /*0x5f0419*/
  if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f0422*/
    v5 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f0434*/
  int v20 = v5; /*0x5f0438*/
  int v6 = v5; /*0x5f043c*/
  while ( Dialog::PumpMessages() != 1 && !*((_BYTE *)&g_MatrixTransformState + 9524) ) /*0x5f0452*/
  {
    Stream::ReadPacket((int)&HouseClass_Player[44324]); /*0x5f045d*/
    int v7 = *(_DWORD *)&stru_87C374[44996]; /*0x5f0462*/
    int v8 = *(_DWORD *)&stru_87C374[45004]; /*0x5f0467*/
    if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f0470*/
    {
      Ticks = Timer::GetTicks(); /*0x5f047c*/
      v7 = *(_DWORD *)&stru_87C374[44996]; /*0x5f047e*/
      v8 += Ticks - *(_DWORD *)&stru_87C374[44996]; /*0x5f0485*/
    }
    if ( (unsigned int)(v8 - v6) > 0x1E ) /*0x5f048c*/
    {
      int v10 = *(_DWORD *)&stru_87C374[45004]; /*0x5f048e*/
      if ( v7 != -1 ) /*0x5f0497*/
        v10 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f04a9*/
      memset(&aP2[0].CampaignScore_field_0x04, 0, 0xF8u); /*0x5f04bc*/
      v23 = 0; /*0x5f04be*/
      v6 = v10; /*0x5f04d1*/
      aP2[0].CampaignScore_field_0x04 = 100; /*0x5f04d3*/
      LOBYTE(aP2[0].CampaignScore_field_0x1C) = HouseClass_Player[30280]; /*0x5f04db*/
      Stream::WriteBlock( /*0x5f04df*/
        (int)&HouseClass_Player[44324],
        (CellStruct *)&aP2[0].CampaignScore_field_0x04,
        250,
        0);
    }
    if ( ObjectTypeClass::CreateInstance((int)&HouseClass_Player[44324], &aP1, aP2) > 0 ) /*0x5f04fd*/
    {
      int v11 = *(_DWORD *)&stru_87C374[45004]; /*0x5f0508*/
      if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f0511*/
        v11 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f0523*/
      v20 = v11; /*0x5f052c*/
      if ( *(_DWORD *)aP1[0] == 100 ) /*0x5f0533*/
      {
        if ( LOBYTE(aP1.CampaignScore_field_0x18) == *(_DWORD *)&HouseClass_Player[30280] ) /*0x5f054d*/
        {
          v17 = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620[6244], 6530); /*0x5f064a*/
          v15 = GetStringCSF(g_Str_TXT_SYSTEM_NOT_RESPONDING, 0, &stru_830620[6244], 6530); /*0x5f0655*/
          Dialog::ShowMessageBox((int)v15, v17, 0, 0, 0, a1); /*0x5f065f*/
          break; /*0x5f065f*/
        }
        memset(&aP2[0].CampaignScore_field_0x04, 0, 0xF8u); /*0x5f0560*/
        v23 = 0; /*0x5f0571*/
        aP2[0].CampaignScore_field_0x04 = 100; /*0x5f0573*/
        LOBYTE(aP2[0].CampaignScore_field_0x1C) = HouseClass_Player[30280]; /*0x5f057b*/
        Stream::WriteBlock( /*0x5f057f*/
          (int)&HouseClass_Player[44324],
          (CellStruct *)&aP2[0].CampaignScore_field_0x04,
          250,
          1);
        int v12 = *(_DWORD *)&stru_87C374[45004]; /*0x5f0589*/
        if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f0594*/
          v12 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f05a6*/
        v6 = v12; /*0x5f05a8*/
        while ( 1 ) /*0x5f05af*/
        {
          int v13 = *(_DWORD *)&stru_87C374[45004]; /*0x5f05af*/
          if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f05b7*/
            v13 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f05c9*/
          if ( (unsigned int)(v13 - v12) >= 0x3C ) /*0x5f05d0*/
            break; /*0x5f05d0*/
          Stream::ReadPacket((int)&HouseClass_Player[44324]); /*0x5f05d7*/
        }
        v1 = 1; /*0x5f05de*/
        v19 = 0; /*0x5f05e0*/
      }
    }
    int v14 = *(_DWORD *)&stru_87C374[45004]; /*0x5f05ea*/
    if ( *(_DWORD *)&stru_87C374[44996] != -1 ) /*0x5f05f3*/
      v14 += Timer::GetTicks() - *(_DWORD *)&stru_87C374[44996]; /*0x5f0605*/
    if ( (unsigned int)(v14 - v20) > 0x384 ) /*0x5f0611*/
      break; /*0x5f0611*/
    if ( v19 != 1 ) /*0x5f0618*/
      goto LABEL_33; /*0x5f0618*/
  }
  v1 = 0; /*0x5f0664*/
LABEL_33:
  Dialog::Destroy(hWnd); /*0x5f0666*/
  return v1; /*0x5f0673*/
}
} // namespace gamemd
