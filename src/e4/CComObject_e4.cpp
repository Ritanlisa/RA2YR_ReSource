// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CChatEventSink_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x7937B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchConnectionPairs()
{
  int v1; // edi
  wchar_t **v3; // esi
  int v4; // eax
  int *v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebx
  int *v14; // edi
  char *v15; // esi
  int v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h]
  int v20; // [esp+10h] [ebp-30h]
  int i; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+14h] [ebp-2Ch]
  int v23; // [esp+18h] [ebp-28h]
  _DWORD *v24; // [esp+18h] [ebp-28h]
  _DWORD v26[8]; // [esp+20h] [ebp-20h] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7937c6*/
  v1 = 0; /*0x7937c8*/
  v26 = v26; /*0x7937ca*/
  v3 = (wchar_t **)&g_NetworkPlayerName; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v26++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&g_PlayerNameListEnd ); /*0x7937ed*/
  v4 = Game_PlayerCount; /*0x7937ef*/
  for ( i = 0; i < v4; ++i ) /*0x7937fe*/
  {
    v19 = 0; /*0x793803*/
    if ( v4 - 1 > 0 ) /*0x79380d*/
    {
      v5 = &v26[1]; /*0x79380f*/
      do /*0x793865*/
      {
        v6 = *v5; /*0x793813*/
        v7 = *(v5 - 1); /*0x793815*/
        v8 = dword_A8DC2C[v7]; /*0x793824*/
        v23 = Network_Connect(dword_A8DC2C[*v5]); /*0x793839*/
        if ( Network_Connect(v8) < v23 ) /*0x793848*/
        {
          *(v5 - 1) = v6; /*0x79384a*/
          *v5 = v7; /*0x79384d*/
        }
        v4 = Game_PlayerCount; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < Game_PlayerCount - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  v9 = 0; /*0x79389c*/
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  v10 = Game_PlayerCount; /*0x7938ac*/
  if ( Game_PlayerCount > 0 ) /*0x7938b6*/
  {
    v11 = 1; /*0x7938b8*/
    v12 = v26; /*0x7938bd*/
    v22 = 1; /*0x7938c1*/
    v24 = v26; /*0x7938c5*/
    do /*0x793923*/
    {
      if ( v11 < v10 ) /*0x7938cb*/
      {
        v13 = *v12; /*0x7938d1*/
        v14 = v12 + 1; /*0x7938d3*/
        v15 = &this->q020 * v9; /*0x7938d6*/
        do /*0x793906*/
        {
          v16 = *v14; /*0x7938d9*/
          *(_DWORD *)v15 = v13; /*0x7938db*/
          *((_DWORD *)v15 + 1) = v16; /*0x7938e4*/
          Debug::Log(); /*0x7938e7*/
          v10 = Game_PlayerCount; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < Game_PlayerCount ); /*0x793906*/
        v12 = v24; /*0x793908*/
        v11 = v22; /*0x79390c*/
        v9 = v17; /*0x793910*/
      }
      ++v11; /*0x793912*/
      ++v12; /*0x793913*/
      v22 = v11; /*0x793916*/
      v24 = v12; /*0x79391a*/
    }
    while ( v11 - 1 < v10 ); /*0x793923*/
  }
  return v9; /*0x793927*/
}
}
// 0x7A4EC0
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_32(int a1, int a2, int a3, int a4)
{
  int v4; // ebp
  signed int v5; // ecx
  signed int v6; // eax
  char *v7; // edx
  signed int v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // esi
  void *v12; // ebp
  char v13; // dl
  size_t v14; // ecx
  char v15; // dl
  bool v16; // cc
  int v17; // esi
  signed int v19; // [esp+1Ch] [ebp-E8h]
  void *v20; // [esp+20h] [ebp-E4h] BYREF
  int v21; // [esp+24h] [ebp-E0h]
  char *v22; // [esp+28h] [ebp-DCh]
  _DWORD v23[27]; // [esp+2Ch] [ebp-D8h] BYREF
  _BYTE v24[108]; // [esp+98h] [ebp-6Ch] BYREF

  --dword_B77DDC; /*0x7a4ed2*/
  v4 = 0; /*0x7a4ed9*/
  if ( dword_B77DE0 ) /*0x7a4edf*/
  {
    dword_B77DE0 = 0; /*0x7a4ee8*/
    dword_B77DE4 = a3; /*0x7a4eee*/
    if ( a2 ) /*0x7a4efc*/
      return 0; /*0x7a4efc*/
    strcpy(byte_B77A94, (const char *)(a4 + 401)); /*0x7a4f26*/
  }
  else if ( a2 ) /*0x7a4f38*/
  {
    return 0; /*0x7a4f38*/
  }
  v5 = g_WOL_State; /*0x7a4f3e*/
  v6 = 0; /*0x7a4f44*/
  v19 = 0; /*0x7a4f48*/
  if ( (int)g_WOL_State > 0 ) /*0x7a4f4c*/
  {
    v21 = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < v5 ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_ConnectionFlags + v4; /*0x7a4f66*/
      if ( *((_DWORD *)v7 + 5) != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      v22 = v7 + 87; /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
      memset(v24, 0, sizeof(v24)); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < (int)g_WOL_State ) /*0x7a4ff8*/
        qmemcpy(v24, (char *)g_WOL_ConnectionFlags + v4, sizeof(v24)); /*0x7a5009*/
      v8 = v19; /*0x7a500b*/
      qmemcpy(v23, v24, sizeof(v23)); /*0x7a501f*/
      v23[8] = 0; /*0x7a5023*/
      if ( g_WOL_State ) /*0x7a502b*/
      {
        if ( v4 < 0 ) /*0x7a5033*/
          v8 = 0; /*0x7a5035*/
        if ( v8 >= (int)g_WOL_State ) /*0x7a5039*/
          v8 = g_WOL_State - 1; /*0x7a503b*/
        memcpy( /*0x7a5061*/
          (char *)g_WOL_ConnectionFlags + 108 * v8,
          (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
          108 * g_WOL_State - 36 * (3 * v8 + 3));
        --g_WOL_State; /*0x7a5075*/
        if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x7a507f*/
        {
          v9 = g_WOL_StateFlags / 2; /*0x7a5088*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_StateFlags ) /*0x7a5096*/
          {
            v10 = (char *)RA2_OPNEW(108 * v9); /*0x7a50a2*/
            v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50a7*/
            v12 = v10; /*0x7a50b2*/
            if ( g_WOL_ConnectionFlags ) /*0x7a50b4*/
            {
              v13 = 108 * g_WOL_State; /*0x7a50c6*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7a50c8*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7a50cb*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7a50d2*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50d4*/
            }
            RA2_OPDEL(v11); /*0x7a50db*/
            g_WOL_ConnectionFlags = v12; /*0x7a50e0*/
            v4 = v21; /*0x7a50e6*/
            g_WOL_StateFlags = v9; /*0x7a50ed*/
          }
        }
      }
      if ( dword_B77E48 == 1 ) /*0x7a50fb*/
        break; /*0x7a50fb*/
      switch ( dword_B77E48 ) /*0x7a5104*/
      {
        case 2: /*0x7a5104*/
          InsertBuddyList((const char *)v23, 1); /*0x7a510c*/
          break;
        case 3: /*0x7a5104*/
          InsertBuddyList((const char *)v23, 0); /*0x7a511e*/
          break;
        case 4: /*0x7a5104*/
          FindBuddyList((int)v23, 1); /*0x7a5130*/
          break;
        case 5: /*0x7a5104*/
          FindBuddyList((int)v23, 0); /*0x7a5142*/
          break;
        default:
          v15 = 1; /*0x7a5149*/
          goto LABEL_37; /*0x7a5149*/
      }
  LABEL_38:
      v5 = g_WOL_State; /*0x7a5154*/
      v6 = v19 + 1; /*0x7a515e*/
      v4 += 108; /*0x7a515f*/
      v16 = ++v19 < (int)g_WOL_State; /*0x7a5162*/
      v21 = v4; /*0x7a5168*/
      if ( !v16 ) /*0x7a516c*/
        goto LABEL_39; /*0x7a516c*/
    }
    v15 = 0; /*0x7a50fd*/
  LABEL_37:
    InsertGameSettings(v23, v15); /*0x7a514b*/
    goto LABEL_38; /*0x7a514f*/
  }
  LABEL_39:
  String::Assign((char **)&v20, (const char *)(a4 + 401)); /*0x7a5173*/
  String::ToLower((const char **)&v20); /*0x7a518e*/
  v17 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v20) & ((1 << dword_B768CC) - 1))); /*0x7a51b2*/
  if ( v17 ) /*0x7a51b7*/
  {
    while ( !String::Compare((const char **)v17, (const char **)&v20) ) /*0x7a51c7*/
    {
      v17 = *(_DWORD *)(v17 + 112); /*0x7a51c9*/
      if ( !v17 ) /*0x7a51ce*/
        goto LABEL_42; /*0x7a51ce*/
    }
  }
  else
  {
  LABEL_42:
    (*(void (__stdcall **)(LPVOID, char *, int, int, int **, int, _DWORD, _DWORD))(*(_DWORD *)g_UIPointerTable + 20))( /*0x7a51d0*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      a4 + 401,
      &off_802100,
      -1,
      0,
      0);
  }
  if ( !dword_B77DDC ) /*0x7a51fa*/
    DisplayRankingsWOL(0); /*0x7a5200*/
  DeleteAndZero(&v20); /*0x7a5209*/
  return 0; /*0x7a520e*/
}
}
// 0x7A5290
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::GetTypeInfo(int a1, int a2, const char * a3)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *v6; // ebp
  char *i; // eax
  int v8; // esi
  int v9; // [esp+24h] [ebp-50h] BYREF
  int v10; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v11[4]; // [esp+2Ch] [ebp-48h] BYREF
  _BYTE v12[4]; // [esp+30h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    byte_B77DC0 = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
    }
    else
    {
      switch ( a2 ) /*0x7a52ce*/
      {
        case -2147221404: /*0x7a52ce*/
          StringCSF = GetStringCSF(aTxtLoginUsed, 0, g_Str_File_wonline_cpp, 5737); /*0x7a52e6*/
          break; /*0x7a52e6*/
        case -2147221403: /*0x7a52ce*/
          StringCSF = GetStringCSF(g_Str_TXT_BADPASS, 0, g_Str_File_wonline_cpp, 5742); /*0x7a531f*/
          break; /*0x7a532a*/
        case -2147221390: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtBanned, 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)aTxtDisabled, 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
          break; /*0x7a536d*/
        default:
          goto LABEL_19;
      }
    }
    goto LABEL_20; /*0x7a536d*/
  }
  if ( a2 <= -2147221384 ) /*0x7a538a*/
  {
    if ( a2 == -2147221384 ) /*0x7a538c*/
    {
      v4 = GetStringCSF(aTxtSkuserialmi, 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy(&word_B77AD0, v4); /*0x7a53e1*/
      SetEvent(Handles); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialdup, 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)aTxtSerialunkno, 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
    goto LABEL_20; /*0x7a53ad*/
  }
  if ( a2 ) /*0x7a53ff*/
  {
  LABEL_19:
    StringCSF = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 5779); /*0x7a5401*/
  LABEL_20:
    wcscpy(&word_B77AD0, StringCSF); /*0x7a5417*/
    SetEvent(Handles, unsigned int a1018); /*0x7a542c*/
    return 0; /*0x7a5437*/
  }
  if ( !dword_B77EA4 ) /*0x7a5442*/
  {
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 132))(ppv, &a2); /*0x7a5457*/
    v6 = (char *)RA2_OPNEW(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6, a1018); /*0x7a54bb*/
    for ( i = strtok(v6, Delimiter); i; i = strtok(0, Delimiter) ) /*0x7a54ce*/
    {
      v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, _BYTE *, _BYTE *))(*(_DWORD *)ppv + 92))( /*0x7a54ff*/
        ppv,
        v8,
        dword_84A1C0,
        &v10,
        &v9,
        v12,
        v11);
      sprintf(Buffer, "gt%d.bmp", v8); /*0x7a550d*/
      ChatEvent::ProcessStrings((int)g_DialogHashTable, Buffer, v10, v9, 2); /*0x7a552b*/
    }
    RA2_OPDEL(v6); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    String::Assign_Alt(&dword_B73AE0, a3); /*0x7a556b*/
  else
    DeleteAndZero::Alt2(&dword_B73AE0); /*0x7a5577*/
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7a558e*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x7a559a*/
  byte_B77DC2 = 0; /*0x7a559d*/
  g_WOL_ChannelState = 0; /*0x7a55a4*/
  SetEvent(dword_B7368C); /*0x7a55ae*/
  QueryNATPortWOL((unsigned __int16 *)dword_A8DBC0); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}
}
// 0x7A5690
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::FireEvent(int a1, int a2, unsigned char * a3)
{
  wchar_t *v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  wchar_t *String; // eax
  char *v9; // edi
  int v10; // eax
  HWND v11; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char *v14; // [esp-10h] [ebp-60h]
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a572c*/
    {
      memset(byte_B76E40, 0, 0x940u); /*0x7a576f*/
      v9 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a577b*/
      v10 = g_CommandExecState; /*0x7a5788*/
      strcpy(byte_B76E40, v9); /*0x7a5799*/
      dword_B76E58[0] = v10; /*0x7a57a8*/
      dword_B76E5C = 0; /*0x7a57ad*/
      dword_B76E54[0] = g_TauntCommandState; /*0x7a57b7*/
      dword_B76E60[0] = 1; /*0x7a57bd*/
    }
    else
    {
      v14 = CharToWideString(a3 + 52); /*0x7a573a*/
      String = GetStringCSF(aTxtCreatedChan, 0, g_Str_File_wonline_cpp, 5835); /*0x7a574c*/
      Dialog::ShowMessage(-1, (size_t)String, v14); /*0x7a5759*/
    }
    qmemcpy(&g_WOL_ProcessIdle, a3, 0x10Cu); /*0x7a57d8*/
    dword_B77E4C = 1; /*0x7a57e0*/
    ++g_WOL_ChannelState; /*0x7a57eb*/
    Debug::Log(); /*0x7a57f1*/
    if ( ppv && *(_DWORD *)a3 ) /*0x7a5802*/
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7a5813*/
      GameConfig::BuildChecksum(Buffer); /*0x7a5819*/
      Buffer[40] = 0; /*0x7a5827*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 168))(ppv, Buffer); /*0x7a5830*/
    }
    v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a583b*/
    if ( v11 ) /*0x7a5845*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a5850*/
      if ( !g_WOL_ChannelList ) /*0x7a5856*/
        CloseDialog(v11, 0); /*0x7a585c*/
    }
    Current = Dialog::GetCurrent(); /*0x7a5861*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7a586c*/
    if ( DlgItem ) /*0x7a5874*/
      SetFocus(DlgItem); /*0x7a5877*/
  }
  else
  {
    v3 = GetStringCSF(aTxtChancreateF, 0, g_Str_File_wonline_cpp, 5825); /*0x7a56b0*/
    Dialog::ShowMessage(-1, (size_t)v3); /*0x7a56bc*/
    dword_B77E4C = 0; /*0x7a56c9*/
    g_WOL_IdleFlag[0] = 0; /*0x7a56d3*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a56da*/
    if ( v4 ) /*0x7a56e1*/
    {
      g_WOL_ChannelList &= ~4u; /*0x7a56ec*/
      if ( !g_WOL_ChannelList ) /*0x7a56f2*/
        CloseDialog(v4, 0); /*0x7a56f8*/
    }
    v5 = Dialog::GetCurrent(); /*0x7a56fd*/
    v6 = GetDlgItem(v5, 1344); /*0x7a5708*/
    if ( v6 ) /*0x7a5710*/
    {
      SetFocus(v6); /*0x7a5717*/
      return 0; /*0x7a5722*/
    }
  }
  return 0; /*0x7a571f*/
}
}
// 0x7A7B60
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_23(int a1, int a2, int a3, int a4, wchar_t * a5)
{
  int v5; // esi
  signed int v7; // ebp
  int v8; // ebx
  int v9; // edi
  HWND v10; // eax
  HWND v11; // eax
  char *v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // edx
  char v16; // [esp+7h] [ebp-8Dh]
  void *v17; // [esp+8h] [ebp-8Ch] BYREF
  void *v18; // [esp+Ch] [ebp-88h] BYREF
  int v19; // [esp+10h] [ebp-84h]
  int v20; // [esp+14h] [ebp-80h]
  size_t v21; // [esp+18h] [ebp-7Ch]
  int v22; // [esp+20h] [ebp-74h]
  char v23[108]; // [esp+28h] [ebp-6Ch] BYREF

  v5 = g_WOL_State; /*0x7a7b67*/
  v16 = 1; /*0x7a7b71*/
  v21 = g_WOL_State; /*0x7a7b76*/
  v20 = 0; /*0x7a7b7a*/
  dword_B76478 = Timer::GetTicks(); /*0x7a7b87*/
  dword_B7647C = v22; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  dword_B77DCC = 1; /*0x7a7bbe*/
  v19 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
    while ( 1 ) /*0x7a7be3*/
    {
      ++v20; /*0x7a7be3*/
      String::Assign((char **)&v18, (const char *)(v19 + 36)); /*0x7a7be7*/
      String::ToLower((const char **)&v18); /*0x7a7bf0*/
      v7 = 0; /*0x7a7bf5*/
      if ( v5 <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      v8 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
        if ( v8 >= 0 && v7 < (int)g_WOL_State ) /*0x7a7c0b*/
        {
          qmemcpy(v23, (char *)g_WOL_ConnectionFlags + v8, sizeof(v23)); /*0x7a7c1f*/
          v5 = v21; /*0x7a7c21*/
        }
        String::Assign((char **)&v17, &v23[36]); /*0x7a7c2e*/
        String::ToLower((const char **)&v17); /*0x7a7c37*/
        if ( String::Compare((const char **)&v18, (const char **)&v17) ) /*0x7a7c45*/
          break; /*0x7a7c45*/
        DeleteAndZero(&v17); /*0x7a7c52*/
        ++v7; /*0x7a7c57*/
        v8 += 108; /*0x7a7c58*/
        if ( v7 >= v5 ) /*0x7a7c5d*/
          goto LABEL_15; /*0x7a7c5d*/
      }
      DeleteAndZero(&v17); /*0x7a7c61*/
      if ( v7 >= v5 ) /*0x7a7c68*/
        break; /*0x7a7c68*/
      v19 = *(_DWORD *)(v19 + 32); /*0x7a7c75*/
      v9 = v19; /*0x7a7c72*/
      DeleteAndZero(&v18); /*0x7a7c79*/
      if ( !v9 ) /*0x7a7c80*/
        goto LABEL_16; /*0x7a7c80*/
    }
  LABEL_15:
    v16 = 0; /*0x7a7c87*/
    DeleteAndZero(&v18); /*0x7a7c90*/
  }
  LABEL_16:
  if ( v20 == v5 && v16 ) /*0x7a7ca1*/
  {
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7a7cd9*/
    {
      v10 = (HWND)Dialog::FindByHandle((void *)0x117); /*0x7a7ce0*/
      CloseDialog(v10, 0); /*0x7a7ce9*/
    }
    v11 = (HWND)Dialog::FindByHandle((void *)0xCF); /*0x7a7cf3*/
    CloseDialog(v11, 0); /*0x7a7cfc*/
    dword_B779D4 = a5; /*0x7a7d14*/
    *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7a7d1e*/
    dword_B73814 = 8960; /*0x7a7d27*/
    *(_DWORD *)dword_B779C4 = dword_B76B24; /*0x7a7d31*/
    if ( g_GameMode_Current[0] == 4 && (dword_B76B30 & 0x100) != 0 ) /*0x7a7d47*/
      *(_DWORD *)dword_B779C4 = 2; /*0x7a7d49*/
    v12 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a7d59*/
    v13 = g_WOL_State; /*0x7a7d66*/
    strcpy(byte_B77830, v12); /*0x7a7d77*/
    if ( v13 > 0 && g_WOL_ConnectionFlags ) /*0x7a7d8b*/
      strcpy(byte_B779E0, (const char *)g_WOL_ConnectionFlags + 36); /*0x7a7da7*/
    *(_DWORD *)dword_B77788 = time(0); /*0x7a7dbc*/
    Debug::Log(); /*0x7a7dc1*/
    if ( a3 ) /*0x7a7dd2*/
      dword_B77DD4 = (unsigned __int8)*(_DWORD *)(a3 + 32); /*0x7a7ddd*/
    byte_B77E26 = 0; /*0x7a7dea*/
    byte_B77E27 = 1; /*0x7a7df1*/
    Network::SyncPlayerList(); /*0x7a7df8*/
    g_NetworkLobbyState = 2; /*0x7a7e03*/
    Debug::Log(); /*0x7a7e0f*/
    v14 = 0; /*0x7a7e1d*/
    if ( (int)g_WOL_State > 0 ) /*0x7a7e21*/
    {
      v15 = (char *)g_WOL_ConnectionFlags; /*0x7a7e23*/
      while ( 1 ) /*0x7a7e29*/
      {
        if ( v14 >= 0 && v14 < (int)g_WOL_State ) /*0x7a7e2f*/
          qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu); /*0x7a7e3d*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a7e46*/
          break; /*0x7a7e46*/
        ++v14; /*0x7a7e48*/
        v15 += 108; /*0x7a7e49*/
        if ( v14 >= (int)g_WOL_State ) /*0x7a7e4e*/
          goto LABEL_41; /*0x7a7e4e*/
      }
      if ( &g_IsMultiplayerSession ) /*0x7a7e59*/
        BulkCharToWide(word_A8E258, byte_B777D4, -1); /*0x7a7e67*/
    }
  LABEL_41:
    dword_A8E2AC = -1; /*0x7a7e6c*/
    dword_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&unk_A8DC4C); /*0x7a7e82*/
    return 0; /*0x7a7e88*/
  }
  else
  {
    byte_B77DEC = 0; /*0x7a7ca6*/
    g_NetworkLobbyState = 0; /*0x7a7cad*/
    return 0; /*0x7a7cb7*/
  }
}
}
// 0x7A7EA0
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_22(int a1, int a2, int a3, int a4, char * Source)
{
  char *v5; // esi
  bool v6; // bl
  char *Flagged; // esi
  char *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  int v11; // esi
  HWND Current; // ebp
  void *v14; // eax
  int v15; // edx
  bool v16; // bl
  HWND DlgItem; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  char v21; // [esp+7h] [ebp-B9h]
  void *v22; // [esp+8h] [ebp-B8h] BYREF
  int v23; // [esp+Ch] [ebp-B4h]
  char v24; // [esp+13h] [ebp-ADh]
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF
  _BYTE v26[108]; // [esp+54h] [ebp-6Ch] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  v5 = _strdup(Source); /*0x7a7ef6*/
  v6 = SetupNetworkLobbyDialog(v5, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v5); /*0x7a7f0f*/
  if ( g_NetworkLobby_Init ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  v21 = 0; /*0x7a7f43*/
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
    v8 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v8) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7a7f84*/
  {
    CharStringToWide((wchar_t **)&v22, (const char **)&g_WebBrowser); /*0x7a7f93*/
    v9 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7a7f9c*/
    v10 = Player::FindByName(v9); /*0x7a7fa3*/
    v11 = (int)v10; /*0x7a7fa8*/
    if ( v10 /*0x7a7fed*/
      && SessionClass::GetPlayerSide((int)v10) >= 0
      && SessionClass::GetPlayerColor(v11) >= 0
      && *Source >= 48
      && *Source <= 57
      && g_WOL_State == 2 )
    {
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, g_INI_Key_A1); /*0x7a7ffc*/
    }
    DeleteAndZero::Alt(&v22); /*0x7a8003*/
    return 0; /*0x7a8014*/
  }
  Current = Dialog::GetCurrent(); /*0x7a801c*/
  if ( !g_UIControlState ) /*0x7a8025*/
  {
    if ( v6 ) /*0x7a802d*/
    {
      v21 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( (int)(Timer::GetTicks() - dword_B78608) > 900 ) /*0x7a806e*/
    {
      v14 = g_UIControlState; /*0x7a8070*/
      if ( (!g_UIControlState || !*(_DWORD *)g_UIControlState) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !Destination /*0x7a80a8*/
          || (IDA_LOBYTE(v14) = g_MultiplayerSetupState,
              FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, (int)v14, 0)) )
        {
          dword_B78608 = Timer::GetTicks(); /*0x7a80d2*/
          dword_B7860C = v23; /*0x7a80d7*/
        }
        else
        {
          v21 = 1; /*0x7a80b6*/
          Debug::Log(); /*0x7a80bb*/
        }
      }
    }
    if ( !IsRandMap::Sed2((int)g_GameMode_Current) ) /*0x7a80e2*/
    {
      IDA_LOBYTE(v15) = g_MultiplayerSetupState; /*0x7a80ef*/
      if ( !FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v15, 0) /*0x7a813d*/
        || (RawFileClass::Construct(Buffer, (int)&Destination),
            v16 = FileClass::Open(Buffer, 0) != 0,
            RawFileClass::Dtor(Buffer),
            v16) )
      {
        if ( g_GameMode_Current[0] == 4 ) /*0x7a814c*/
        {
          if ( dword_B76B24 || (v24 = IDA_BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) ) /*0x7a8165*/
          {
            if ( *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 119) ) /*0x7a816f*/
            {
              *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(aA0); /*0x7a8182*/
              DlgItem = GetDlgItem(Current, 1439); /*0x7a818f*/
              EnableWindow(DlgItem, 0); /*0x7a8196*/
            }
          }
        }
      }
      else
      {
        v21 = 0; /*0x7a813f*/
      }
      if ( Dialog::GetCurrentType() == 201 ) /*0x7a81a6*/
      {
        v18 = Dialog::GetCurrent(); /*0x7a81ac*/
        InvalidateRect(v18, 0, 0); /*0x7a81b2*/
      }
    }
    if ( v21 ) /*0x7a81be*/
    {
      sprintf((char *const)Buffer, "P%s", &Destination); /*0x7a81cf*/
      if ( (int)g_WOL_State > 0 ) /*0x7a81de*/
        qmemcpy(v26, g_WOL_ConnectionFlags, sizeof(v26)); /*0x7a81ef*/
      (*(void (__stdcall **)(LPVOID, _BYTE *, int *))(*(_DWORD *)ppv + 56))(ppv, v26, Buffer); /*0x7a8203*/
      Debug::Log(); /*0x7a820b*/
      Event_Play(); /*0x7a8213*/
    }
    return 0; /*0x7a8224*/
  }
  v19 = GetDlgItem(Current, 1823); /*0x7a8233*/
  if ( v19 ) /*0x7a823d*/
    ShowWindow(v19, 0); /*0x7a8242*/
  v20 = GetDlgItem(Current, 1128); /*0x7a824c*/
  ShowWindow(v20, 1); /*0x7a824f*/
  return 0; /*0x7a7fbd*/
}
}
// 0x7A8DA0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_16(int a1, int a2, int a3, const char * a4, char * String1)
{
  const char *v6; // edi
  const char *v7; // esi
  bool v8; // bl
  int v9; // edi
  const void *v10; // esi
  wchar_t *v11; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7a8db5*/
  {
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7a8dcd*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7a8dd6*/
      {
        HandleWOLMatchMessage(String1, 0); /*0x7a8de2*/
        return 0; /*0x7a8deb*/
      }
    }
    else
    {
      v6 = String1; /*0x7a8dee*/
      String::Assign(&String1, String1); /*0x7a8df8*/
      v7 = a4; /*0x7a8dfd*/
      if ( a4 ) /*0x7a8e03*/
      {
        if ( (*a4 & 1) != 0 ) /*0x7a8e0c*/
        {
          v8 = 1; /*0x7a8e0e*/
        }
        else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7a8e17*/
        {
          v8 = 1; /*0x7a8e20*/
        }
        else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7a8e29*/
        {
          v8 = 1; /*0x7a8e32*/
        }
        else
        {
          v8 = dword_B779C0 != 0; /*0x7a8e3d*/
        }
      }
      else
      {
        v8 = 0; /*0x7a8e05*/
      }
      DeleteAndZero((void **)&String1); /*0x7a8e44*/
      if ( v8 && IsBuddyOrIgnoreWOL(v7) ) /*0x7a8e50*/
      {
        String::Assign(&String1, v6); /*0x7a8e5e*/
        CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a8e6b*/
        DeleteAndZero((void **)&String1); /*0x7a8e74*/
        v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
        v10 = v7 + 36; /*0x7a8e8b*/
        if ( _strcmpi(g_GameSetupBuffer, v10) ) /*0x7a8e94*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8ea4*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8eb1*/
        }
        DeleteAndZero::Alt((void **)&a2); /*0x7a8ebd*/
      }
    }
  }
  return 0; /*0x7a8de7*/
}
}
// 0x7A8ED0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_40(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
  const char *v6; // esi
  bool v7; // zf
  int v8; // eax
  int v9; // edi
  const void *v10; // esi
  wchar_t *v11; // eax

  if ( g_NetworkLobby_Init ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a8ef7*/
  v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a8f2e*/
    v8 = dword_B779C0; /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      v8 = dword_B779DC; /*0x7a8f37*/
    if ( v8 ) /*0x7a8f43*/
    {
  LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        v10 = v6 + 36; /*0x7a8f81*/
        if ( _strcmpi(g_GameSetupBuffer, v10) ) /*0x7a8f8a*/
        {
          v11 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a8f9a*/
          Dialog::ShowMessage(v9, (size_t)aHsS_1, v10, v11); /*0x7a8fa7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((void **)&a2); /*0x7a8fb3*/
  return 0; /*0x7a8edc*/
}
}
// 0x7A8FC0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL_DispatchStub_17()
{
  const char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  int v8; // edi
  const void *v9; // esi
  wchar_t *v10; // eax

  if ( g_NetworkLobby_Init || a2 < 0 ) /*0x7a8fd5*/
    return 0; /*0x7a90fc*/
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x7a8fed*/
  {
    v5 = String1; /*0x7a9027*/
    String::Assign(&String1, String1); /*0x7a9031*/
    v6 = a3; /*0x7a9036*/
    if ( a3 ) /*0x7a903c*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7a9045*/
      {
        v7 = 1; /*0x7a9047*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7a9050*/
      {
        v7 = 1; /*0x7a9059*/
      }
      else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7a9062*/
      {
        v7 = 1; /*0x7a906b*/
      }
      else
      {
        v7 = dword_B779C0 != 0; /*0x7a9076*/
      }
    }
    else
    {
      v7 = 0; /*0x7a903e*/
    }
    DeleteAndZero((void **)&String1); /*0x7a907d*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7a9089*/
    {
      String::Assign(&String1, v5); /*0x7a9097*/
      CharStringToWide((wchar_t **)&a2, (const char **)&String1); /*0x7a90a4*/
      DeleteAndZero((void **)&String1); /*0x7a90ad*/
      v8 = 16744576; /*0x7a90b4*/
      if ( (*v6 & 1) != 0 ) /*0x7a90bc*/
        v8 = 16776960; /*0x7a90be*/
      v9 = v6 + 36; /*0x7a90c4*/
      if ( _strcmpi(g_GameSetupBuffer, v9) ) /*0x7a90cd*/
      {
        v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a90dd*/
        Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a90ea*/
      }
      DeleteAndZero::Alt((void **)&a2); /*0x7a90f6*/
    }
    return 0; /*0x7a90f6*/
  }
  if ( (*a3 & 1) != 0 ) /*0x7a8ff6*/
    HandleWOLMatchMessage(String1, 1); /*0x7a8ffe*/
  else
    Debug::Log(); /*0x7a9018*/
  return 0; /*0x7a9003*/
}
}
// 0x7A9110
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_41(int a1, int a2, const char * a3, wchar_t * String)
{
  const char *v5; // esi
  bool v6; // zf
  int v7; // eax
  int v8; // edi
  const void *v9; // esi
  wchar_t *v10; // eax

  if ( g_NetworkLobby_Init ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    v6 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    v7 = dword_B779C0; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      v7 = dword_B779DC; /*0x7a9177*/
    if ( v7 ) /*0x7a9183*/
    {
  LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        v9 = v5 + 36; /*0x7a91c1*/
        if ( _strcmpi(g_GameSetupBuffer, v9) ) /*0x7a91ca*/
        {
          v10 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x7a91da*/
          Dialog::ShowMessage(v8, (size_t)aHsS_2, v9, v10); /*0x7a91e7*/
        }
      }
    }
  }
  DeleteAndZero::Alt((void **)&a2); /*0x7a91f3*/
  return 0; /*0x7a911c*/
}
}
// 0x7A9200
namespace gamemd {
CampaignScore * * CComObject_CChatEventSink___ATL::DispatchStub_28(int a1, int a2, const char * a3, const char * a4)
{
  bool v5; // zf
  int v6; // eax
  char v7; // al
  wchar_t *v8; // eax
  int Type; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  HWND Current; // esi
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  HWND Dialog; // eax
  wchar_t *v17; // eax
  HWND DlgItem; // eax
  char **ChatCommand; // ebx
  HWND v20; // esi
  char *v21; // eax
  int v22; // esi
  wchar_t *v23; // eax
  int v24; // [esp-Ch] [ebp-22Ch]
  void *v25; // [esp+Ch] [ebp-214h] BYREF
  void *v26[4]; // [esp+10h] [ebp-210h] BYREF
  wchar_t Buffer[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  String::Assign((char **)v26, a4); /*0x7a9227*/
  CharStringToWide((wchar_t **)&v25, (const char **)v26); /*0x7a9234*/
  DeleteAndZero(v26); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((void *)0xC2) && !Dialog::FindByHandle((void *)0xC9) ) /*0x7a9266*/
  {
    v5 = WideString::IsASCII((const wchar_t **)&v25) == 0; /*0x7a9278*/
    v6 = dword_B779C0; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      v6 = dword_B779DC; /*0x7a9281*/
    if ( !v6 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    v7 = g_NetworkLobby_Init; /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a92fd*/
      swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      v10 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0); /*0x7a9348*/
      v24 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, Type, 22, v24, 0); /*0x7a9389*/
      MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x7a9395*/
      v12 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a939e*/
      Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v12); /*0x7a93b1*/
      dword_B76478 = Timer::GetTicks(); /*0x7a93cb*/
      dword_B7647C = (int)v26[2]; /*0x7a93d0*/
      dword_B76480 = 300; /*0x7a93d6*/
    }
    else
    {
      Current = Dialog::GetCurrent(); /*0x7a93ec*/
      if ( Current ) /*0x7a93f0*/
      {
        while ( !GetDlgItem(Current, 1343) ) /*0x7a93fc*/
        {
          if ( GetDlgItem(Current, 1461) ) /*0x7a9404*/
          {
            v14 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a940e*/
            Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v14); /*0x7a9420*/
          }
          Current = (HWND)Dialog::FindByPtr(Current); /*0x7a942f*/
          if ( !Current ) /*0x7a9433*/
            goto LABEL_22; /*0x7a9433*/
        }
        v15 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a943b*/
        Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v15); /*0x7a944e*/
      }
      else
      {
  LABEL_22:
        ReleaseCapture(); /*0x7a945a*/
        Screen::Capture(1, 0, (int)(a3 + 36), (int)a3); /*0x7a9464*/
        Dialog = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9475*/
        Current = Dialog; /*0x7a947a*/
        if ( Dialog ) /*0x7a947e*/
        {
          SetFocus(Dialog); /*0x7a9481*/
          v17 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a948b*/
          Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, v17); /*0x7a949e*/
          ShowWindow(Current, 1); /*0x7a94a9*/
        }
      }
      DlgItem = GetDlgItem(Current, 1343); /*0x7a94b5*/
      ChatCommand = ExtractChatCommand((char **)v26, DlgItem); /*0x7a94c8*/
      v20 = GetDlgItem(Current, 1816); /*0x7a94ce*/
      v21 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a94d0*/
      SendMessageA(v20, 0x4B4u, 0, (LPARAM)v21); /*0x7a94de*/
      DeleteAndZero(v26); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      v22 = *(_DWORD *)ppv; /*0x7a9500*/
      v23 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v22 + 236))(ppv, a3, v23); /*0x7a9510*/
    }
    PlayVocClass(g_RulesClass_Instance->SpotlightLocationRadius, 0x2000, 1.0, 0); /*0x7a952d*/
    DeleteAndZero::Alt(&v25); /*0x7a9536*/
    return 0; /*0x7a953e*/
  }
  else
  {
  LABEL_12:
    DeleteAndZero::Alt(&v25); /*0x7a92b3*/
    return 0; /*0x7a92b8*/
  }
}
}
// 0x7A9550
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_44(int a1, int a2, int a3, wchar_t * String)
{
  int v5; // edi
  bool v6; // bl
  bool v7; // zf
  int v8; // eax
  int Type; // ebx
  int v10; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  char **ChatCommand; // ebx
  HWND v14; // esi
  char *v15; // eax
  int v16; // esi
  wchar_t *v17; // eax
  void *v18; // [esp+Ch] [ebp-204h] BYREF
  wchar_t Buffer[256]; // [esp+10h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  WideString::Assign((wchar_t **)&v18, String); /*0x7a957b*/
  v5 = a3; /*0x7a9580*/
  if ( a3 ) /*0x7a9589*/
  {
    if ( (*(_BYTE *)a3 & 1) != 0 ) /*0x7a9592*/
    {
      v6 = 1; /*0x7a9594*/
    }
    else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7a959d*/
    {
      v6 = 1; /*0x7a95a6*/
    }
    else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7a95af*/
    {
      v6 = 1; /*0x7a95b8*/
    }
    else
    {
      v7 = WideString::IsASCII((const wchar_t **)&v18) == 0; /*0x7a95c5*/
      v8 = dword_B779C0; /*0x7a95c7*/
      if ( v7 ) /*0x7a95cc*/
        v8 = dword_B779DC; /*0x7a95ce*/
      v6 = v8 != 0; /*0x7a95d5*/
    }
  }
  else
  {
    v6 = 0; /*0x7a958b*/
  }
  DeleteAndZero::Alt(&v18); /*0x7a95dc*/
  if ( !v6 ) /*0x7a95e3*/
    return 0; /*0x7a95e7*/
  if ( !IsBuddyOrIgnoreWOL((const char *)a3) ) /*0x7a95f5*/
    return 0; /*0x7a9600*/
  if ( g_NetworkLobby_Init ) /*0x7a9614*/
  {
    swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)(a3 + 36), String); /*0x7a9625*/
    Type = BuildingAnim::GetType(); /*0x7a9638*/
    v10 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0); /*0x7a965f*/
    MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x7a966b*/
    Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a967d*/
  }
  else
  {
    Current = Dialog::GetCurrent(); /*0x7a9695*/
    if ( Current ) /*0x7a9699*/
    {
      while ( !GetDlgItem(Current, 1343) ) /*0x7a96a5*/
      {
        if ( GetDlgItem(Current, 1461) ) /*0x7a96ad*/
          Dialog::ShowStatusText(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96cb*/
        Current = (HWND)Dialog::FindByPtr(Current); /*0x7a96da*/
        if ( !Current ) /*0x7a96de*/
          goto LABEL_27; /*0x7a96de*/
      }
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a96fa*/
    }
    else
    {
  LABEL_27:
      ReleaseCapture(); /*0x7a9706*/
      Screen::Capture(1, 0, v6, (int)String); /*0x7a9710*/
      Current = (HWND)CreateDialog(0x11Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))ChatDialog::DlgProc, 0); /*0x7a9726*/
      SetFocus(Current); /*0x7a9729*/
      Dialog::ShowMessage(0xFFFFFF, (size_t)g_Str_Trace___hs_, a3 + 36, String); /*0x7a9746*/
      ShowWindow(Current, 1); /*0x7a9751*/
    }
    DlgItem = GetDlgItem(Current, 1343); /*0x7a975d*/
    ChatCommand = ExtractChatCommand((char **)&v18, DlgItem); /*0x7a9770*/
    v14 = GetDlgItem(Current, 1816); /*0x7a9776*/
    v15 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(&v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    v16 = *(_DWORD *)ppv; /*0x7a97ab*/
    v17 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(g_RulesClass_Instance->SpotlightLocationRadius, 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}
}
// 0x7A9800
namespace gamemd {
ObjectClass * * CComObject_CChatEventSink___ATL::DispatchStub_27(int a1, int a2)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  int v7; // eax
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  const wchar_t *v10; // [esp+0h] [ebp-108h]
  wchar_t Buffer[128]; // [esp+8h] [ebp-100h] BYREF

  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText(-1, (size_t)StringCSF); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf(Buffer, (const size_t)v8, v10); /*0x7a9865*/
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF(aTxtPagefailed, 0, g_Str_File_wonline_cpp, 8197); /*0x7a98a2*/
    swprintf(Buffer, (const size_t)v9, v10); /*0x7a988a*/
  }
  Current = Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText(-1, (size_t)Buffer); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
  LABEL_19:
    if ( SessionClass::GetGameSpeed(g_GameMode_Current) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      v7 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v7, 0); /*0x7a995b*/
    }
    return 0; /*0x7a9961*/
  }
}
}
// 0x7AA6D0
namespace gamemd {
void CComObject_CChatEventSink___ATL_DispatchStub_19()
{
  wchar_t *StringCSF; // eax
  int Type; // esi
  int v6; // eax
  wchar_t *v7; // eax
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF

  if ( byte_B77DC0 ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a3; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a3 == 262447 ) /*0x7aa710*/
  {
    if ( g_NetworkLobby_Init ) /*0x7aa71d*/
    {
      if ( !byte_B77DC2 ) /*0x7aa72a*/
      {
        Buffer[0] = 0; /*0x7aa742*/
        StringCSF = GetStringCSF(aTxtWolConnlost, 0, g_Str_File_wonline_cpp, 8460); /*0x7aa749*/
        swprintf(Buffer, (const size_t)StringCSF, a1); /*0x7aa754*/
        Type = BuildingAnim::GetType(); /*0x7aa761*/
        v6 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].InfantryVirus * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v6, 0); /*0x7aa78d*/
        MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x7aa799*/
        memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7aa7af*/
        memset(&dword_B73BE8, 0, 0x10Cu); /*0x7aa7bb*/
        byte_B77DC2 = 1; /*0x7aa7bd*/
        g_WOL_ChannelState = 0; /*0x7aa7c4*/
        Debug::Log(); /*0x7aa7ce*/
        return 0; /*0x7aa7e0*/
      }
    }
    else
    {
      if ( Dialog::FindByHandle((void *)0x113) ) /*0x7aa7e8*/
      {
        v7 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 8478); /*0x7aa809*/
        ShowDialogConfirm(v7, 0, (int)GameLoop::Thunk, 0); /*0x7aa812*/
      }
      byte_B77DC0 = 1; /*0x7aa820*/
      byte_B77DC2 = 1; /*0x7aa825*/
      SetEvent(Handles); /*0x7aa82a*/
      memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7aa841*/
      memset(&dword_B73BE8, 0, 0x10Cu); /*0x7aa84d*/
      g_WOL_ChannelState = 0; /*0x7aa84f*/
      Debug::Log(); /*0x7aa859*/
    }
  }
  return 0; /*0x7aa6fa*/
}
}
// 0x7AB440
namespace gamemd {
Coord * * CComObject_CChatEventSink___ATL::DispatchStub_30(int a1, int a2, void * a3, int a4, int a5)
{
  signed int v5; // eax
  signed int v6; // ebp
  int v7; // ebx
  size_t v8; // eax
  int v9; // ebx
  char *v10; // eax
  char *v11; // esi
  void *v12; // ebp
  char v13; // dl
  size_t v14; // ecx
  char v15; // dl
  int v17; // [esp+0h] [ebp-E0h]
  signed int v18; // [esp+4h] [ebp-DCh]
  _DWORD v19[27]; // [esp+8h] [ebp-D8h] BYREF
  _DWORD v20[27]; // [esp+74h] [ebp-6Ch] BYREF

  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  v5 = g_WOL_State; /*0x7ab452*/
  v6 = 0; /*0x7ab458*/
  v18 = 0; /*0x7ab45c*/
  if ( (int)g_WOL_State > 0 ) /*0x7ab460*/
  {
    v7 = 0; /*0x7ab467*/
    v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= v5 ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
      qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v7, sizeof(v20)); /*0x7ab49a*/
      if ( _strcmpi(&v20[9], a3) ) /*0x7ab4a5*/
        goto LABEL_30; /*0x7ab4af*/
      v20[0] = a4 | a5 & v20[0]; /*0x7ab4d4*/
      v8 = v6; /*0x7ab4db*/
      if ( g_WOL_State ) /*0x7ab4df*/
      {
        if ( v6 >= (int)g_WOL_State ) /*0x7ab4ed*/
          v8 = g_WOL_State - 1; /*0x7ab4ef*/
        memcpy( /*0x7ab51b*/
          (char *)g_WOL_ConnectionFlags + 108 * v8,
          (char *)g_WOL_ConnectionFlags + 108 * v8 + 108,
          108 * g_WOL_State - 36 * (3 * v8 + 3));
        --g_WOL_State; /*0x7ab52f*/
        if ( (int)(3 * g_WOL_State) <= g_WOL_StateFlags ) /*0x7ab539*/
        {
          v9 = g_WOL_StateFlags / 2; /*0x7ab542*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_StateFlags ) /*0x7ab550*/
          {
            v10 = (char *)RA2_OPNEW(108 * v9); /*0x7ab55c*/
            v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab561*/
            v12 = v10; /*0x7ab56c*/
            if ( g_WOL_ConnectionFlags ) /*0x7ab56e*/
            {
              v13 = 108 * g_WOL_State; /*0x7ab580*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7ab582*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7ab585*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7ab58c*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab58e*/
            }
            RA2_OPDEL(v11); /*0x7ab595*/
            g_WOL_ConnectionFlags = v12; /*0x7ab59a*/
            v6 = v18; /*0x7ab5a0*/
            g_WOL_StateFlags = v9; /*0x7ab5a7*/
          }
          v7 = v17; /*0x7ab5ad*/
        }
      }
      qmemcpy(v19, v20, sizeof(v19)); /*0x7ab5c6*/
      v19[8] = 0; /*0x7ab5cb*/
      if ( dword_B77E48 == 1 ) /*0x7ab5d3*/
        break; /*0x7ab5d3*/
      switch ( dword_B77E48 ) /*0x7ab5dc*/
      {
        case 2: /*0x7ab5dc*/
          InsertBuddyList((const char *)v19, 1); /*0x7ab5e4*/
          break;
        case 3: /*0x7ab5dc*/
          InsertBuddyList((const char *)v19, 0); /*0x7ab5f6*/
          break;
        case 4: /*0x7ab5dc*/
          FindBuddyList((int)v19, 1); /*0x7ab608*/
          break;
        case 5: /*0x7ab5dc*/
          FindBuddyList((int)v19, 0); /*0x7ab61a*/
          break;
        default:
          v15 = 1; /*0x7ab621*/
          goto LABEL_29; /*0x7ab621*/
      }
  LABEL_30:
      v5 = g_WOL_State; /*0x7ab62c*/
      ++v6; /*0x7ab631*/
      v7 += 108; /*0x7ab632*/
      v18 = v6; /*0x7ab637*/
      v17 = v7; /*0x7ab63b*/
      if ( v6 >= (int)g_WOL_State ) /*0x7ab63f*/
        goto LABEL_31; /*0x7ab63f*/
    }
    v15 = 0; /*0x7ab5d5*/
  LABEL_29:
    InsertGameSettings(v19, v15); /*0x7ab623*/
    goto LABEL_30; /*0x7ab627*/
  }
  LABEL_31:
  DisplayRankingsWOL(0); /*0x7ab648*/
  return 0; /*0x7ab654*/
}
}
// 0x7AB670
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_24(int a1, int a2, int a3, int a4, int a5)
{
  char *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  char *v15; // [esp-18h] [ebp-81Ch]
  char *v16; // [esp-14h] [ebp-818h]
  char *v17; // [esp-14h] [ebp-818h]
  wchar_t *v18; // [esp-10h] [ebp-814h]
  char *v19; // [esp-10h] [ebp-814h]
  HWND DlgItem; // [esp-10h] [ebp-814h]
  char *v21; // [esp-10h] [ebp-814h]
  void *v22; // [esp+0h] [ebp-804h] BYREF
  wchar_t Buffer[1024]; // [esp+4h] [ebp-800h] BYREF

  if ( g_NetworkLobby_Init ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  v6 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
    v7 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
    v8 = v7 / 8; /*0x7ab6fd*/
    v9 = v7 % 8; /*0x7ab70c*/
    if ( v8 ) /*0x7ab70f*/
      sprintf(byte_B785C0, "%s %d", (const char *)(&dword_B73E1C)[v9], v8 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, "%s", (const char *)(&dword_B73E1C)[v9]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, "%s", v6); /*0x7ab744*/
  }
  if ( (IDA_BYTE1(*(_DWORD *)a4) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers() ) /*0x7ab860*/
    {
      v21 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab878*/
      v17 = CharToWideString(v6); /*0x7ab880*/
      v15 = CharToWideString((_BYTE *)(a4 + 36)); /*0x7ab889*/
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v15, v17, v21); /*0x7ab8a8*/
    }
  }
  else
  {
    unknown_libname_74(&v22); /*0x7ab762*/
    if ( g_WOL_ProcessIdle && Event_Helper() ) /*0x7ab770*/
    {
      v18 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt(&v22, v18); /*0x7ab790*/
    }
    else
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7ab79d*/
      v19 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab7ae*/
      v16 = CharToWideString(v6); /*0x7ab7b6*/
      v10 = GetStringCSF(aTxtYoureKicked, 0, g_Str_File_wonline_cpp, 8916); /*0x7ab7c8*/
      swprintf(Buffer, (const size_t)v10, (const wchar_t *const)v16, v19); /*0x7ab7d3*/
      WideString::Assign_Alt(&v22, Buffer); /*0x7ab7e4*/
    }
    if ( g_WOL_ProcessIdle ) /*0x7ab7f0*/
    {
      v12 = (HWND)Dialog::FindByHandle((void *)0x113); /*0x7ab829*/
      if ( v12 ) /*0x7ab830*/
      {
        DlgItem = GetDlgItem(v12, 1343); /*0x7ab83e*/
        v13 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7ab843*/
        DrawDialogText(-1, v13, DlgItem); /*0x7ab850*/
      }
      DeleteAndZero::Alt(&v22); /*0x7ab859*/
    }
    else
    {
      v11 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7ab7fd*/
      ShowDialogConfirm(v11, 0, (int)GameLoop::Thunk, 0); /*0x7ab806*/
      ++dword_B77DD4; /*0x7ab815*/
      DeleteAndZero::Alt(&v22); /*0x7ab81a*/
    }
  }
  LeaveChannelWOL((const char *)a4); /*0x7ab8b2*/
  DisplayRankingsWOL(0); /*0x7ab8bb*/
  GameListRenderWOL(); /*0x7ab8c0*/
  return 0; /*0x7ab681*/
}
}
// 0x7AB8E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_33(int a1, int a2, int a3)
{
  int v4; // ebp
  char *v5; // edi
  char **v6; // eax
  char **v7; // esi
  int v8; // eax
  char *v9; // ecx
  char *v10; // eax
  _DWORD *PlayerProfile; // eax
  char v12; // [esp+7h] [ebp-2Dh]
  int v13; // [esp+8h] [ebp-2Ch] BYREF
  void **v14; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+14h] [ebp-20h] BYREF
  char v17; // [esp+18h] [ebp-1Ch]
  __int64 v18; // [esp+1Ch] [ebp-18h]
  int v19; // [esp+24h] [ebp-10h]
  int v20; // [esp+28h] [ebp-Ch]
  _DWORD v21[2]; // [esp+2Ch] [ebp-8h] BYREF

  v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
    v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((void **)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        String::ToLower((const char **)&a2); /*0x7ab931*/
        HashTable::Lookup(&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
        v5 = *(char **)(v4 + 100); /*0x7ab94a*/
        v6 = (char **)RA2_OPNEW(0xCu); /*0x7ab94f*/
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        String::Reassign(v7, (const char **)&a2); /*0x7ab96f*/
        v7[1] = v5; /*0x7ab978*/
        v7[2] = 0; /*0x7ab981*/
        v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
        v9 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v8); /*0x7ab98f*/
        *((_DWORD *)g_WOL_ConnectionPool + v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          v7[2] = v9; /*0x7ab999*/
        v19 = dword_B76538; /*0x7ab9b0*/
        v20 = 0; /*0x7ab9b8*/
        v18 = (unsigned int)++dword_B76534; /*0x7ab9ac*/
        if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7ab9d0*/
          HashTable::Grow(&g_WOL_ConnectionPool); /*0x7ab9d7*/
        v10 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7ab9e1*/
        if ( !_strcmpi((const void *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          v16 = 0; /*0x7aba03*/
          v17 = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL(&v16); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          v14 = &(void*)(void*)&rc_ptr_PlayerProfile_vftable; /*0x7aba22*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba26*/
          {
            PlayerProfile = LoadPlayerProfile(v21, (const char **)&g_WebBrowser); /*0x7aba38*/
            ComPtr::Set(&v14, PlayerProfile[1]); /*0x7aba45*/
            v21[0] = &(void*)(void*)&rc_ptr_PlayerProfile_vftable; /*0x7aba4e*/
            ComPtr::Release(v21); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, dword_B75E4C); /*0x7aba64*/
          }
          GadgetClass::TrackState(v15, *(_DWORD *)(a3 + 100), 2); /*0x7aba77*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba80*/
            SaveProfileWOL(v15, (const char **)&g_WebBrowser); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          v14 = &(void*)(void*)&rc_ptr_PlayerProfile_vftable; /*0x7abab1*/
          ComPtr::Release(&v14); /*0x7abab5*/
        }
        v4 = *(_DWORD *)(v4 + 32); /*0x7ababa*/
        DeleteAndZero((void **)&a2); /*0x7abac1*/
      }
      while ( v4 ); /*0x7abac8*/
      if ( v12 ) /*0x7abad6*/
        SetEvent(dword_B736BC); /*0x7abadf*/
    }
    return 0; /*0x7abae6*/
  }
  else
  {
    Debug::Log(); /*0x7ab8f7*/
    return 0; /*0x7ab8ff*/
  }
}
}
// 0x7ABAF0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_35(int a1, int a2, char * a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  double v8; // st7
  int v9; // esi
  char **v10; // eax
  char **v11; // esi
  int v12; // edx
  char *v13; // eax
  void *v15; // [esp+0h] [ebp-4Ch] BYREF
  __int64 v16; // [esp+4h] [ebp-48h]
  char v17[64]; // [esp+Ch] [ebp-40h] BYREF

  unknown_libname_73(&v15); /*0x7abafa*/
  strcpy(v17, g_GameSetupBuffer); /*0x7abb1c*/
  String::Assign_Bool(&v15, v17); /*0x7abb2e*/
  String::ToLower((const char **)&v15); /*0x7abb37*/
  v3 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v15) & ((1 << dword_B7653C) - 1))); /*0x7abb5d*/
  if ( v3 ) /*0x7abb62*/
  {
    while ( !String::Compare((const char **)v3, (const char **)&v15) ) /*0x7abb76*/
    {
      v3 = *(_DWORD *)(v3 + 8); /*0x7abb78*/
      if ( !v3 ) /*0x7abb7d*/
        goto LABEL_19; /*0x7abb7d*/
    }
    if ( dword_B76534 ) /*0x7abb8b*/
    {
      v16 = (unsigned int)(dword_B76534 - 1); /*0x7abb98*/
      *(float *)&v16 = (double)v16 / (double)dword_B76538; /*0x7abbb4*/
      v4 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abbcc*/
      v5 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( String::Compare((const char **)v5, (const char **)&v15) ) /*0x7abbe5*/
        {
          v6 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbf4*/
          v7 = *(_DWORD *)(v6 + 8); /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero((void **)v6, 1); /*0x7abc00*/
          v8 = *(float *)&v16; /*0x7abc0a*/
          *((_DWORD *)g_WOL_ConnectionPool + v4) = v7; /*0x7abc0e*/
          --dword_B76534; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
  LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          v9 = *(_DWORD *)(v5 + 8); /*0x7abc2b*/
          if ( v9 ) /*0x7abc30*/
          {
            while ( !String::Compare((const char **)v9, (const char **)&v15) ) /*0x7abc40*/
            {
              v5 = v9; /*0x7abc42*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7abc44*/
              if ( !v9 ) /*0x7abc49*/
                goto LABEL_17; /*0x7abc49*/
            }
            *(_DWORD *)(v5 + 8) = *(_DWORD *)(v9 + 8); /*0x7abc50*/
            --dword_B76534; /*0x7abc5c*/
            ScalarDtor::DeleteAndZero((void **)v9, 1); /*0x7abc68*/
          }
  LABEL_17:
          if ( *(float *)&v16 <= dbl_B76550 ) /*0x7abc7c*/
            goto LABEL_18; /*0x7abc7c*/
        }
      }
    }
  }
  LABEL_19:
  v10 = (char **)RA2_OPNEW(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  String::Reassign(v11, (const char **)&v15); /*0x7abcaa*/
  v11[2] = 0; /*0x7abcaf*/
  v11[1] = a3; /*0x7abcb6*/
  v12 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abcd7*/
  v13 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v12); /*0x7abcd9*/
  *((_DWORD *)g_WOL_ConnectionPool + v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    v11[2] = v13; /*0x7abce3*/
  v16 = (unsigned int)++dword_B76534; /*0x7abcf6*/
  IDA_LODWORD(v16) = dword_B76538; /*0x7abd03*/
  if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow(&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero(&v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}
}
// 0x7ABD40
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_34(int a1, int a2, float a3)
{
  float v3; // esi
  float v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // edi
  double v10; // st7
  int v11; // esi
  char *v12; // edi
  char **v13; // eax
  char **v14; // esi
  int v15; // edx
  char *v16; // eax

  if ( a2 < 0 ) /*0x7abd4c*/
  {
    Debug::Log(); /*0x7abf8e*/
    return 0; /*0x7abf96*/
  }
  else
  {
    v3 = a3; /*0x7abd54*/
    v4 = a3; /*0x7abd5c*/
    unknown_libname_73(&a2); /*0x7abd5e*/
    if ( v3 != 0.0 ) /*0x7abd65*/
    {
      do /*0x7abd74*/
      {
        String::Assign_Bool((void **)&a2, (const char *)(IDA_LODWORD(v4) + 36)); /*0x7abd74*/
        v5 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a2) & ((1 << dword_B7668C) - 1))); /*0x7abd98*/
        if ( !v5 ) /*0x7abd9d*/
          goto LABEL_21; /*0x7abd9d*/
        while ( !String::Compare((const char **)v5, (const char **)&a2) ) /*0x7abdb1*/
        {
          v5 = *(_DWORD *)(v5 + 8); /*0x7abdb3*/
          if ( !v5 ) /*0x7abdb8*/
            goto LABEL_21; /*0x7abdb8*/
        }
        if ( !g_WOL_MessageConfig ) /*0x7abdc6*/
          goto LABEL_21; /*0x7abdc6*/
        a3 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool; /*0x7abdef*/
        v6 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abe07*/
        v7 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( String::Compare((const char **)v7, (const char **)&a2) ) /*0x7abe20*/
        {
          v8 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe2f*/
          v9 = *(_DWORD *)(v8 + 8); /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero((void **)v8, 1); /*0x7abe3b*/
          v10 = a3; /*0x7abe45*/
          *((_DWORD *)g_WOL_MessageQueue + v6) = v9; /*0x7abe49*/
          --g_WOL_MessageConfig; /*0x7abe58*/
          if ( v10 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          v11 = *(_DWORD *)(v7 + 8); /*0x7abe66*/
          if ( v11 ) /*0x7abe6b*/
          {
            while ( !String::Compare((const char **)v11, (const char **)&a2) ) /*0x7abe7b*/
            {
              v7 = v11; /*0x7abe7d*/
              v11 = *(_DWORD *)(v11 + 8); /*0x7abe7f*/
              if ( !v11 ) /*0x7abe84*/
                goto LABEL_19; /*0x7abe84*/
            }
            *(_DWORD *)(v7 + 8) = *(_DWORD *)(v11 + 8); /*0x7abe8b*/
            --g_WOL_MessageConfig; /*0x7abe97*/
            ScalarDtor::DeleteAndZero((void **)v11, 1); /*0x7abea3*/
          }
  LABEL_19:
          if ( a3 > dbl_B766A0 ) /*0x7abeb7*/
            goto LABEL_21; /*0x7abeb7*/
        }
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x7abebe*/
  LABEL_21:
        v12 = *(char **)(IDA_LODWORD(v4) + 104); /*0x7abec3*/
        v13 = (char **)RA2_OPNEW(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        String::Reassign(v14, (const char **)&a2); /*0x7abee8*/
        v14[1] = v12; /*0x7abef1*/
        v14[2] = 0; /*0x7abef4*/
        v15 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abf11*/
        v16 = (char *)*((_DWORD *)g_WOL_MessageQueue + v15); /*0x7abf13*/
        *((_DWORD *)g_WOL_MessageQueue + v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          v14[2] = v16; /*0x7abf1d*/
        if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow(&g_WOL_MessageQueue); /*0x7abf5b*/
        v4 = *(float *)(IDA_LODWORD(v4) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((void **)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}
}
// 0x7ABFA0
namespace gamemd {
AbstractClass * * CComObject_CChatEventSink___ATL::DispatchStub_36(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  char **v10; // eax
  char **v11; // esi
  int v12; // edx
  char *v13; // eax
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  float v16; // [esp+54h] [ebp+8h]

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  v3 = a3; /*0x7abfb3*/
  g_CommandExecState = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  strcpy(v15, g_GameSetupBuffer); /*0x7abfe5*/
  String::Assign_Bool((void **)&a3, v15); /*0x7abff7*/
  String::ToLower((const char **)&a3); /*0x7ac000*/
  v4 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a3) & ((1 << dword_B7668C) - 1))); /*0x7ac024*/
  if ( v4 ) /*0x7ac029*/
  {
    while ( !String::Compare((const char **)v4, (const char **)&a3) ) /*0x7ac03d*/
    {
      v4 = *(_DWORD *)(v4 + 8); /*0x7ac03f*/
      if ( !v4 ) /*0x7ac044*/
        goto LABEL_20; /*0x7ac044*/
    }
    if ( g_WOL_MessageConfig ) /*0x7ac052*/
    {
      v16 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool; /*0x7ac07b*/
      v5 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac093*/
      v6 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( String::Compare((const char **)v6, (const char **)&a3) ) /*0x7ac0ac*/
        {
          v7 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac0bb*/
          v8 = *(_DWORD *)(v7 + 8); /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero((void **)v7, 1); /*0x7ac0c7*/
          *((_DWORD *)g_WOL_MessageQueue + v5) = v8; /*0x7ac0d5*/
          --g_WOL_MessageConfig; /*0x7ac0e4*/
          if ( v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          v9 = *(_DWORD *)(v6 + 8); /*0x7ac0f2*/
          if ( v9 ) /*0x7ac0f7*/
          {
            while ( !String::Compare((const char **)v9, (const char **)&a3) ) /*0x7ac107*/
            {
              v6 = v9; /*0x7ac109*/
              v9 = *(_DWORD *)(v9 + 8); /*0x7ac10b*/
              if ( !v9 ) /*0x7ac110*/
                goto LABEL_18; /*0x7ac110*/
            }
            *(_DWORD *)(v6 + 8) = *(_DWORD *)(v9 + 8); /*0x7ac117*/
            --g_WOL_MessageConfig; /*0x7ac123*/
            ScalarDtor::DeleteAndZero((void **)v9, 1); /*0x7ac12f*/
          }
  LABEL_18:
          if ( v16 > dbl_B766A0 ) /*0x7ac143*/
            goto LABEL_20; /*0x7ac143*/
        }
        HashMap::Shrink(&g_WOL_MessageQueue); /*0x7ac14a*/
      }
    }
  }
  LABEL_20:
  v10 = (char **)RA2_OPNEW(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  String::Reassign(v11, (const char **)&a3); /*0x7ac171*/
  v11[1] = (char *)v3; /*0x7ac17a*/
  v11[2] = 0; /*0x7ac17d*/
  v12 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac19a*/
  v13 = (char *)*((_DWORD *)g_WOL_MessageQueue + v12); /*0x7ac19c*/
  *((_DWORD *)g_WOL_MessageQueue + v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    v11[2] = v13; /*0x7ac1a6*/
  if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow(&g_WOL_MessageQueue); /*0x7ac1e7*/
  DeleteAndZero((void **)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}
}
// 0x7AC220
namespace gamemd {
ObjectClass * * CComObject_CChatEventSink___ATL::DispatchStub_37(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  char **v6; // ecx
  HWND v7; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v10; // eax
  HWND v12; // eax
  char v14[108]; // [esp+8h] [ebp-6Ch] BYREF

  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    v3 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        String::Assign((char **)&a3, (const char *)(v3 + 36)); /*0x7ac24e*/
        if ( MapSeed::CheckName((const char **)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
  LABEL_20:
        DeleteAndZero((void **)&a3); /*0x7ac3f9*/
        v3 = v3->needsSave; /*0x7ac405*/
        if ( !v3 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((char **)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert(&g_WindowManager, (const char **)&a2, g_WindowManager); /*0x7ac28f*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&a2, g_WOL_RequestManager); /*0x7ac2a8*/
      v4 = g_WOL_BuddyList; /*0x7ac2ad*/
      g_WOL_BuddyList = g_WOL_BuddyList; /*0x7ac2b2*/
      if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x7ac2be*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2c5*/
        v4 = g_WOL_BuddyList; /*0x7ac2ca*/
      }
      if ( v4 >= dword_B779B4 ) /*0x7ac2d5*/
      {
        DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7ac2dc*/
        v4 = g_WOL_BuddyList; /*0x7ac2e1*/
      }
      if ( g_WOL_BuddyList < v4 ) /*0x7ac2e8*/
      {
        memcpy((char *)g_WOL_ChannelMgr + 4 * g_WOL_BuddyList + 4, (char *)g_WOL_ChannelMgr + 4 * g_WOL_BuddyList, 4 * (v4 + 0x3FFFFFFF * g_WOL_BuddyList)); /*0x7ac305*/
        v4 = g_WOL_BuddyList; /*0x7ac30a*/
      }
      v6 = (char **)((char *)g_WOL_ChannelMgr + 4 * g_WOL_BuddyList); /*0x7ac318*/
      if ( v6 ) /*0x7ac31d*/
      {
        String::AssignFromPtr(v6, (const char **)&a2); /*0x7ac327*/
        v4 = g_WOL_BuddyList; /*0x7ac32c*/
      }
      g_WOL_BuddyList = v4 + 1; /*0x7ac337*/
      if ( String::Length(&g_WOL_AuthObject) ) /*0x7ac33c*/
      {
        if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x7ac35a*/
        {
  LABEL_19:
          DeleteAndZero((void **)&a2); /*0x7ac3ed*/
          goto LABEL_20; /*0x7ac3f4*/
        }
        DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x7ac365*/
      }
      if ( g_WOL_RequestManager ) /*0x7ac371*/
      {
        if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x7ac37f*/
          DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x7ac38f*/
        g_WOL_ParseState = time(0); /*0x7ac39b*/
        memset(v14, 0, sizeof(v14)); /*0x7ac3ab*/
        strcpy(&v14[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x7ac3d8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v14); /*0x7ac3ea*/
      }
      goto LABEL_19; /*0x7ac3ea*/
    }
  LABEL_21:
    SendGameListWOL(); /*0x7ac410*/
    v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7ac41a*/
    if ( v7 ) /*0x7ac422*/
    {
      g_WOL_ChannelList &= ~0x200u; /*0x7ac430*/
      if ( !g_WOL_ChannelList ) /*0x7ac436*/
        CloseDialog(v7, 0); /*0x7ac43c*/
    }
    Current = Dialog::GetCurrent(); /*0x7ac441*/
    DlgItem = GetDlgItem(Current, 1344); /*0x7ac452*/
    if ( DlgItem ) /*0x7ac456*/
      SetFocus(DlgItem); /*0x7ac459*/
    v10 = (HWND)Dialog::FindByHandle((void *)0x116); /*0x7ac464*/
    v10 = v10; /*0x7ac469*/
    if ( v10 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v10); /*0x7ac471*/
      KillTimer(v10, 0x704u); /*0x7ac47c*/
      v12 = GetDlgItem(v10, 1796); /*0x7ac48a*/
      EnableWindow(v12, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}
}
// 0x7AC6B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Release()
{
  LONG v1; // ebx

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(_DWORD *)Block = &(void*)(void*)&ATL_CComObject_CChatEventSink_vftable; /*0x7ac6d3*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    RA2_OPDEL(Block); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}
}
// 0x7AC700
namespace gamemd {
int CComObject_CChatEventSink___ATL::QueryInterface()
{
  _UNKNOWN **v3; // esi
  int result; // eax
  _DWORD *v5; // eax
  BOOL v6; // ebp
  int (__stdcall *v7)(char *, _DWORD *, char **, void *); // eax
  void *v8; // eax
  char *v9; // esi

  v3 = &off_7F7698; /*0x7ac70a*/
  if ( !a3 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *a3 = 0; /*0x7ac721*/
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)a1 + 4))(a1); /*0x7ac756*/
    *a3 = a1; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    v5 = *v3; /*0x7ac76d*/
    v6 = *v3 == 0; /*0x7ac776*/
    if ( !*v3 || *v5 == *a2 && v5[1] == a2[1] && v5[2] == a2[2] && v5[3] == a2[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
  LABEL_17:
    v8 = v3[5]; /*0x7ac7c3*/
    v3 += 3; /*0x7ac7c6*/
    if ( !v8 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v7 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v3[2]; /*0x7ac7a2*/
  if ( v7 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ac7a8*/
  {
    result = v7(a1, a2, a3, v3[1]); /*0x7ac7b5*/
    if ( !result || !v6 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v9 = (char *)v3[1] + (_DWORD)a1; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v9 + 4))(v9); /*0x7ac7e5*/
  *a3 = v9; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}
}
// 0x7AE5B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Check(TechnoTypeClass * aP1)
{
  return (*(int (__thiscall **)(int))(this + 24))(aP1) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae5c4*/
}
}
// 0x7A5220
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_20(int a1, int a2, const char * a3)
{
  if ( a2 >= 0 ) /*0x7a5226*/
    LeaveChannelWOL(a3); /*0x7a522c*/
  return 0; /*0x7a5233*/
}
} // namespace gamemd

// 0x7A5240
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetTypeInfoCount(int a1, int a2, int a3)
{
  wchar_t *StringCSF; // eax
  wchar_t Buffer[512]; // [esp+0h] [ebp-400h] BYREF

  if ( !g_NetworkLobby_Init ) /*0x7a524d*/
  {
    StringCSF = GetStringCSF(aTxtServerError, 0, g_Str_File_wonline_cpp, 5655); /*0x7a5260*/
    swprintf(Buffer, (const size_t)&off_8240B4, StringCSF); /*0x7a5270*/
    Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7a527c*/
  }
  return 0; /*0x7a5286*/
}
} // namespace gamemd

// 0x7A55F0
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetIDsOfNames(int a1, int a2, char * Source)
{
  char *v4; // esi
  unsigned __int8 *i; // eax
  _WORD v6[1024]; // [esp+0h] [ebp-800h] BYREF

  if ( a2 < 0 ) /*0x7a55fc*/
    return 0; /*0x7a55fe*/
  v4 = _strdup(Source); /*0x7a5617*/
  for ( i = (unsigned __int8 *)strtok(v4, asc_83F328); i; i = (unsigned __int8 *)strtok(0, asc_83F328) ) /*0x7a5629*/
  {
    BulkCharToWide(v6, i, -1); /*0x7a5633*/
    Dialog::ShowMessage(-1, (size_t)v6); /*0x7a5644*/
  }
  free(v4); /*0x7a565d*/
  Dialog::ShowMessage(-1, (size_t)asc_830174); /*0x7a566d*/
  return 0; /*0x7a5600*/
}
} // namespace gamemd

// 0x7A70E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Disconnect(int a1, int a2, int a3, const char * a4)
{
  if ( a2 >= 0 ) /*0x7a70e6*/
    LeaveChannelWOL(a4); /*0x7a70fe*/
  else
    Debug::Log(); /*0x7a70ed*/
  return 0; /*0x7a70f7*/
}
} // namespace gamemd

// 0x7AA6A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_18(int a1, int a2, int a3)
{
  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7aa6af*/
    Dialog::ShowMessage(-1, (size_t)aHs_2, a3); /*0x7aa6c2*/
  return 0; /*0x7aa6cc*/
}
} // namespace gamemd

// 0x7AAFB0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Unadvise(int a1, int a2, const char * a3, const char * a4)
{
  const char *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  const void *v7; // esi
  wchar_t *v8; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7aafc5*/
  {
    v4 = a4; /*0x7aafcb*/
    String::Assign((char **)&a2, a4); /*0x7aafd5*/
    v5 = a3; /*0x7aafda*/
    if ( a3 ) /*0x7aafe0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7aafe9*/
      {
        v6 = 1; /*0x7aafeb*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7aaff4*/
      {
        v6 = 1; /*0x7aaffd*/
      }
      else
      {
        v6 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0; /*0x7ab00d*/
      }
    }
    else
    {
      v6 = 0; /*0x7aafe2*/
    }
    DeleteAndZero((void **)&a2); /*0x7ab021*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab02d*/
    {
      String::Assign((char **)&a2, v4); /*0x7ab03b*/
      CharStringToWide((wchar_t **)&a4, (const char **)&a2); /*0x7ab048*/
      DeleteAndZero((void **)&a2); /*0x7ab051*/
      v7 = v5 + 36; /*0x7ab056*/
      if ( _strcmpi(g_GameSetupBuffer, v7) ) /*0x7ab05f*/
      {
        v8 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x7ab06f*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8); /*0x7ab081*/
      }
      DeleteAndZero::Alt((void **)&a4); /*0x7ab08d*/
    }
  }
  return 0; /*0x7ab092*/
}
} // namespace gamemd

// 0x7AB0A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_42(int a1, int a2, const char * a3, wchar_t * String)
{
  wchar_t *v4; // edi
  const char *v5; // esi
  bool v6; // bl
  bool v7; // zf
  int v8; // eax
  const void *v9; // esi

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab0b5*/
  {
    v4 = String; /*0x7ab0bb*/
    WideString::Assign((wchar_t **)&a2, String); /*0x7ab0c5*/
    v5 = a3; /*0x7ab0ca*/
    if ( a3 ) /*0x7ab0d0*/
    {
      if ( (*a3 & 1) != 0 ) /*0x7ab0d9*/
      {
        v6 = 1; /*0x7ab0db*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab0e4*/
      {
        v6 = 1; /*0x7ab0ed*/
      }
      else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7ab0f6*/
      {
        v6 = 1; /*0x7ab0ff*/
      }
      else
      {
        v7 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab10c*/
        v8 = dword_B779C0; /*0x7ab10e*/
        if ( v7 ) /*0x7ab113*/
          v8 = dword_B779DC; /*0x7ab115*/
        v6 = v8 != 0; /*0x7ab11c*/
      }
    }
    else
    {
      v6 = 0; /*0x7ab0d2*/
    }
    DeleteAndZero::Alt((void **)&a2); /*0x7ab123*/
    if ( v6 && IsBuddyOrIgnoreWOL(v5) ) /*0x7ab12f*/
    {
      v9 = v5 + 36; /*0x7ab138*/
      if ( _strcmpi(g_GameSetupBuffer, v9) ) /*0x7ab141*/
        Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4); /*0x7ab15a*/
    }
  }
  return 0; /*0x7ab162*/
}
} // namespace gamemd

// 0x7AB170
namespace gamemd {
int CComObject_CChatEventSink___ATL::EnumDependents(int a1, int a2, int a3, const char * a4, const char * a5)
{
  const char *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  const void *v8; // esi
  wchar_t *v9; // eax

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab185*/
  {
    v5 = a5; /*0x7ab18b*/
    String::Assign((char **)&a2, a5); /*0x7ab195*/
    v6 = a4; /*0x7ab19a*/
    if ( a4 ) /*0x7ab1a0*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab1a9*/
      {
        v7 = 1; /*0x7ab1ab*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab1b4*/
      {
        v7 = 1; /*0x7ab1bd*/
      }
      else
      {
        v7 = Dialog::FindByHandle((void *)0xC9) || dword_B779C0 != 0; /*0x7ab1cd*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab1a2*/
    }
    DeleteAndZero((void **)&a2); /*0x7ab1e1*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab1ed*/
    {
      String::Assign((char **)&a2, v5); /*0x7ab1fb*/
      CharStringToWide((wchar_t **)&a5, (const char **)&a2); /*0x7ab208*/
      DeleteAndZero((void **)&a2); /*0x7ab211*/
      v8 = v6 + 36; /*0x7ab216*/
      if ( _strcmpi(g_GameSetupBuffer, v8) ) /*0x7ab21f*/
      {
        v9 = WideString::GetOrEmpty((wchar_t **)&a5); /*0x7ab22f*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9); /*0x7ab241*/
      }
      DeleteAndZero::Alt((void **)&a5); /*0x7ab24d*/
    }
  }
  return 0; /*0x7ab252*/
}
} // namespace gamemd

// 0x7AB260
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_43(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
  wchar_t *v5; // edi
  const char *v6; // esi
  bool v7; // bl
  bool v8; // zf
  int v9; // eax
  const void *v10; // esi

  if ( !g_NetworkLobby_Init && a2 >= 0 ) /*0x7ab275*/
  {
    v5 = String; /*0x7ab27b*/
    WideString::Assign((wchar_t **)&a2, String); /*0x7ab285*/
    v6 = a4; /*0x7ab28a*/
    if ( a4 ) /*0x7ab290*/
    {
      if ( (*a4 & 1) != 0 ) /*0x7ab299*/
      {
        v7 = 1; /*0x7ab29b*/
      }
      else if ( Dialog::FindByHandle((void *)0xC2) ) /*0x7ab2a4*/
      {
        v7 = 1; /*0x7ab2ad*/
      }
      else if ( Dialog::FindByHandle((void *)0xC9) ) /*0x7ab2b6*/
      {
        v7 = 1; /*0x7ab2bf*/
      }
      else
      {
        v8 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7ab2cc*/
        v9 = dword_B779C0; /*0x7ab2ce*/
        if ( v8 ) /*0x7ab2d3*/
          v9 = dword_B779DC; /*0x7ab2d5*/
        v7 = v9 != 0; /*0x7ab2dc*/
      }
    }
    else
    {
      v7 = 0; /*0x7ab292*/
    }
    DeleteAndZero::Alt((void **)&a2); /*0x7ab2e3*/
    if ( v7 && IsBuddyOrIgnoreWOL(v6) ) /*0x7ab2ef*/
    {
      v10 = v6 + 36; /*0x7ab2f8*/
      if ( _strcmpi(g_GameSetupBuffer, v10) ) /*0x7ab301*/
        Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5); /*0x7ab31a*/
    }
  }
  return 0; /*0x7ab322*/
}
} // namespace gamemd

// 0x7AB330
namespace gamemd {
int CComObject_CChatEventSink___ATL::COMStub_Return0(int a1, int a2, int a3, int a4)
{
  return 0; /*0x7ab332*/
}
} // namespace gamemd

// 0x7AB340
namespace gamemd {
int CComObject_CChatEventSink___ATL::StubReturnFalse(int a1, int a2, int a3)
{
  return 0; /*0x7ab342*/
}
} // namespace gamemd

// 0x7AB350
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_29(int a1, int a2, __time32_t Time)
{
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // [esp-4h] [ebp-194h]
  wchar_t Buffer[200]; // [esp+0h] [ebp-190h] BYREF

  if ( !g_NetworkLobby_Init && !a2 ) /*0x7ab368*/
  {
    v5 = (const wchar_t *)unknown_libname_75(&Time); /*0x7ab381*/
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809); /*0x7ab38c*/
    swprintf(Buffer, (const size_t)StringCSF, v5); /*0x7ab397*/
    ShowDialogConfirm(Buffer, 0, (int)GameLoop::Thunk, 0); /*0x7ab3ac*/
  }
  return 0; /*0x7ab3b3*/
}
} // namespace gamemd

// 0x7AB3C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_31(int a1, int a2, unsigned char * a3, int a4)
{
  wchar_t *StringCSF; // eax
  wchar_t *v6; // eax
  char *v7; // [esp-4h] [ebp-4h]
  char *v8; // [esp-4h] [ebp-4h]

  if ( !g_NetworkLobby_Init ) /*0x7ab3c7*/
  {
    if ( a4 ) /*0x7ab3d3*/
    {
      v7 = CharToWideString(a3); /*0x7ab3da*/
      StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822); /*0x7ab3ec*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v7); /*0x7ab3f8*/
      return 0; /*0x7ab402*/
    }
    v8 = CharToWideString(a3); /*0x7ab40a*/
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825); /*0x7ab41c*/
    Dialog::ShowMessage(-1, (size_t)v6, v8); /*0x7ab429*/
  }
  return 0; /*0x7ab402*/
}
} // namespace gamemd

// 0x7AC4A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_38(int a1, int a2, int a3)
{
  return 0; /*0x7ac4a2*/
}
} // namespace gamemd

// 0x7AC4B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_39(int a1, int a2, int a3)
{
  return 0; /*0x7ac4b2*/
}
} // namespace gamemd

// 0x7AC4C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_45(int a1, int a2, int a3)
{
  return 0; /*0x7ac4c2*/
}
} // namespace gamemd

// 0x7AC4D0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_46(int a1, int a2, int a3)
{
  return 0; /*0x7ac4d2*/
}
} // namespace gamemd

// 0x7AC4E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_47(int a1, int a2, int a3)
{
  return 0; /*0x7ac4e2*/
}
} // namespace gamemd

// 0x7AC690
namespace gamemd {
LONG CComObject_CChatEventSink___ATL::AddRef()
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x7ac69e*/
}
} // namespace gamemd
