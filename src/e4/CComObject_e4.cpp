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

// 0x7937B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchConnectionPairs()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t **v3; // esi
  int i; // [esp+14h] [ebp-2Ch]

  _DWORD v26[8]; // [esp+20h] [ebp-20h] BYREF
  memset(v26, 0, sizeof(v26)); /*0x7937c6*/
  int v1 = 0; /*0x7937c8*/
  _DWORD * v2 = v26; /*0x7937ca*/
  v3 = (wchar_t **)&g_NetworkPlayerName; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&g_PlayerNameListEnd ); /*0x7937ed*/
  int v4 = Game_PlayerCount; /*0x7937ef*/
  for ( i = 0; i < v4; ++i ) /*0x7937fe*/
  {
    int v19 = 0; /*0x793803*/
    if ( v4 - 1 > 0 ) /*0x79380d*/
    {
      int * v5 = &v26[1]; /*0x79380f*/
      do /*0x793865*/
      {
        int v6 = *v5; /*0x793813*/
        int v7 = *(v5 - 1); /*0x793815*/
        int v8 = DataGlobal_A8DC2C[v7]; /*0x793824*/
        int v23 = Network_Connect(DataGlobal_A8DC2C[*v5]); /*0x793839*/
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
  int v9 = 0; /*0x79389c*/
  int v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  int v10 = Game_PlayerCount; /*0x7938ac*/
  if ( Game_PlayerCount > 0 ) /*0x7938b6*/
  {
    int v11 = 1; /*0x7938b8*/
    _DWORD * v12 = v26; /*0x7938bd*/
    int v22 = 1; /*0x7938c1*/
    _DWORD * v24 = v26; /*0x7938c5*/
    do /*0x793923*/
    {
      if ( v11 < v10 ) /*0x7938cb*/
      {
  int v17; // edx
        int v13 = *v12; /*0x7938d1*/
        int * v14 = v12 + 1; /*0x7938d3*/
        char * v15 = this + 8 * v9; /*0x7938d6*/
        do /*0x793906*/
        {
          int v16 = *v14; /*0x7938d9*/
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
} // namespace gamemd

// 0x7A4EC0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_32(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t v14; // ecx
  --dword_B77DDC; /*0x7a4ed2*/
  int v4 = 0; /*0x7a4ed9*/
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
  signed int v5 = g_WOL_State; /*0x7a4f3e*/
  signed int v6 = 0; /*0x7a4f44*/
  signed int v19 = 0; /*0x7a4f48*/
  if ( (int)g_WOL_State > 0 ) /*0x7a4f4c*/
  {
  _DWORD v23[27]; // [esp+2Ch] [ebp-D8h] BYREF
  char v15; // dl
    int v21 = 0; /*0x7a4f53*/
    while ( 1 ) /*0x7a4f57*/
    {
      char * v7 = 0; /*0x7a4f57*/
      if ( v4 >= 0 && v6 < v5 ) /*0x7a4f5f*/
        v7 = (char *)g_WOL_ConnectionFlags + v4; /*0x7a4f66*/
      if ( *((_DWORD *)v7 + 5) != a3 ) /*0x7a4f75*/
        goto LABEL_38; /*0x7a4f75*/
      char * v22 = v7 + 87; /*0x7a4f90*/
      strcpy(v7 + 87, (const char *)(a4 + 401)); /*0x7a4fa8*/
      strcpy(v7 + 46, (const char *)(a4 + 360)); /*0x7a4fcb*/
  _BYTE v24[108]; // [esp+98h] [ebp-6Ch] BYREF
      memset(v24, 0, sizeof(v24)); /*0x7a4ff0*/
      if ( v4 >= 0 && v19 < (int)g_WOL_State ) /*0x7a4ff8*/
        qmemcpy(v24, (char *)g_WOL_ConnectionFlags + v4, sizeof(v24)); /*0x7a5009*/
      signed int v8 = v19; /*0x7a500b*/
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
          int v9 = g_WOL_StateFlags / 2; /*0x7a5088*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7a508d*/
            v9 = 10; /*0x7a508f*/
          if ( v9 < g_WOL_StateFlags ) /*0x7a5096*/
          {
            char * v10 = (char *)__2_YAPAXI_Z(108 * v9); /*0x7a50a2*/
            char * v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50a7*/
            void * v12 = v10; /*0x7a50b2*/
            if ( g_WOL_ConnectionFlags ) /*0x7a50b4*/
            {
              char v13 = 108 * g_WOL_State; /*0x7a50c6*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7a50c8*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7a50cb*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7a50d2*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7a50d4*/
            }
            __3_YAXPAX_Z(v11); /*0x7a50db*/
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
      bool v16 = ++v19 < (int)g_WOL_State; /*0x7a5162*/
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
  void *v20; // [esp+20h] [ebp-E4h] BYREF
  String::Assign((char **)&v20, (const char *)(a4 + 401)); /*0x7a5173*/
  String::ToLower((const char **)&v20); /*0x7a518e*/
  int v17 = *((_DWORD *)g_WOL_ListParser + (dword_B768D8(&v20) & ((1 << dword_B768CC) - 1))); /*0x7a51b2*/
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
      &unk_802100,
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
} // namespace gamemd

// 0x7A5290
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetTypeInfo(int a1, int a2, const char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  wchar_t *v4; // eax
  char *i; // eax
  char Buffer[64]; // [esp+34h] [ebp-40h] BYREF

  dword_B77DF8 = a2; /*0x7a5299*/
  if ( a2 < 0 ) /*0x7a529e*/
    byte_B77DC0 = 1; /*0x7a52a0*/
  if ( a2 <= -2147221387 ) /*0x7a52ac*/
  {
    if ( a2 == -2147221387 ) /*0x7a52b2*/
    {
      StringCSF = GetStringCSF((wchar_t *)DataGlobal_84AC78, 0, g_Str_File_wonline_cpp, 5758); /*0x7a5383*/
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
          StringCSF = GetStringCSF((wchar_t *)DataGlobal_84AC78, 0, g_Str_File_wonline_cpp, 5747); /*0x7a5357*/
          break; /*0x7a5357*/
        case -2147221388: /*0x7a52ce*/
          StringCSF = GetStringCSF((wchar_t *)DataGlobal_84AC68, 0, g_Str_File_wonline_cpp, 5753); /*0x7a536d*/
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
      v4 = GetStringCSF(DataGlobal_84AC2C, 0, g_Str_File_wonline_cpp, 5773); /*0x7a53d6*/
      wcscpy(&word_B77AD0, v4); /*0x7a53e1*/
      SetEvent(Handles); /*0x7a53ef*/
      return 0; /*0x7a53fa*/
    }
    if ( a2 == -2147221386 ) /*0x7a5393*/
      StringCSF = GetStringCSF((wchar_t *)DataGlobal_84AC44, 0, g_Str_File_wonline_cpp, 5763); /*0x7a53c0*/
    else
      StringCSF = GetStringCSF((wchar_t *)DataGlobal_84AC54, 0, g_Str_File_wonline_cpp, 5768); /*0x7a53ad*/
    goto LABEL_20; /*0x7a53ad*/
  }
  if ( a2 ) /*0x7a53ff*/
  {
LABEL_19:
    StringCSF = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 5779); /*0x7a5401*/
LABEL_20:
    wcscpy(&word_B77AD0, StringCSF); /*0x7a5417*/
    SetEvent(Handles); /*0x7a542c*/
    return 0; /*0x7a5437*/
  }
  if ( !dword_B77EA4 ) /*0x7a5442*/
  {
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 132))(ppv, &a2); /*0x7a5457*/
    char * v6 = (char *)__2_YAPAXI_Z(strlen((const char *)a2) + 32); /*0x7a5477*/
    strcpy(v6, (const char *)a2); /*0x7a5493*/
    strcat(v6, DataGlobal_84AC20); /*0x7a54bb*/
    for ( i = strtok(v6, Delimiter); i; i = strtok(0, Delimiter) ) /*0x7a54ce*/
    {
      int v8 = atol(i); /*0x7a54dd*/
      (*(void (__stdcall **)(LPVOID, int, int, int *, int *, _BYTE *, _BYTE *))(*(_DWORD *)ppv + 92))( /*0x7a54ff*/
        ppv,
        v8,
        dword_84A1C0,
  int v10; // [esp+28h] [ebp-4Ch] BYREF
        &v10,
  int v9; // [esp+24h] [ebp-50h] BYREF
        &v9,
  _BYTE v12[4]; // [esp+30h] [ebp-44h] BYREF
        v12,
  _BYTE v11[4]; // [esp+2Ch] [ebp-48h] BYREF
        v11);
      sprintf(Buffer, DataGlobal_84AC14, v8); /*0x7a550d*/
      ChatEvent::ProcessStrings((int)g_DialogHashTable, Buffer, v10, v9, 2); /*0x7a552b*/
    }
    __3_YAXPAX_Z(v6); /*0x7a5544*/
    dword_B77EA4 = 1; /*0x7a554c*/
  }
  if ( byte_84A1B8 ) /*0x7a555f*/
    String::Assign_Alt(&DataGlobal_B73AE0, a3); /*0x7a556b*/
  else
    DeleteAndZero::Alt2(&DataGlobal_B73AE0); /*0x7a5577*/
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x7a558e*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x7a559a*/
  byte_B77DC2 = 0; /*0x7a559d*/
  g_WOL_ChannelState = 0; /*0x7a55a4*/
  SetEvent(dword_B7368C); /*0x7a55ae*/
  QueryNATPortWOL((unsigned __int16 *)DataGlobal_A8DBC0); /*0x7a55b9*/
  return 0; /*0x7a5308*/
}
}
} // namespace gamemd

// 0x7A5690
namespace gamemd {
int CComObject_CChatEventSink___ATL::FireEvent(int a1, int a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  wchar_t *String; // eax
  HWND v11; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char Buffer[80]; // [esp+0h] [ebp-50h] BYREF

  if ( a2 >= 0 ) /*0x7a5699*/
  {
    if ( *(_DWORD *)a3 ) /*0x7a572c*/
    {
      memset(DataGlobal_B76E40, 0, 0x940u); /*0x7a576f*/
      char * v9 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a577b*/
      int v10 = g_CommandExecState; /*0x7a5788*/
      strcpy(DataGlobal_B76E40, v9); /*0x7a5799*/
      DataGlobal_B76E58[0] = v10; /*0x7a57a8*/
      DataGlobal_B76E5C = 0; /*0x7a57ad*/
      DataGlobal_B76E54[0] = g_TauntCommandState; /*0x7a57b7*/
      DataGlobal_B76E60[0] = 1; /*0x7a57bd*/
    }
    else
    {
      char * v14 = CharToWideString(a3 + 52); /*0x7a573a*/
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
} // namespace gamemd

// 0x7A7B60
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_23(int a1, int a2, int a3, int a4, wchar_t * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v10; // eax
  HWND v11; // eax
  size_t v21; // [esp+18h] [ebp-7Ch]
  int v5 = g_WOL_State; /*0x7a7b67*/
  char v16 = 1; /*0x7a7b71*/
  v21 = g_WOL_State; /*0x7a7b76*/
  int v20 = 0; /*0x7a7b7a*/
  dword_B76478 = Timer::GetTicks(); /*0x7a7b87*/
  int v22; // [esp+20h] [ebp-74h]
  dword_B7647C = v22; /*0x7a7b90*/
  dword_B76480 = 0; /*0x7a7b9e*/
  if ( byte_B77E27 ) /*0x7a7ba4*/
    return 0; /*0x7a7ba6*/
  dword_B77DCC = 1; /*0x7a7bbe*/
  int v19 = a4; /*0x7a7bc8*/
  if ( a4 ) /*0x7a7bcc*/
  {
  void *v18; // [esp+Ch] [ebp-88h] BYREF
    while ( 1 ) /*0x7a7be3*/
    {
  void *v17; // [esp+8h] [ebp-8Ch] BYREF
      ++v20; /*0x7a7be3*/
      String::Assign((char **)&v18, (const char *)(v19 + 36)); /*0x7a7be7*/
      String::ToLower((const char **)&v18); /*0x7a7bf0*/
      signed int v7 = 0; /*0x7a7bf5*/
      if ( v5 <= 0 ) /*0x7a7bf9*/
        break; /*0x7a7bf9*/
      int v8 = 0; /*0x7a7bff*/
      while ( 1 ) /*0x7a7c01*/
      {
  char v23[108]; // [esp+28h] [ebp-6Ch] BYREF
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
      int v9 = v19; /*0x7a7c72*/
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
    char * v12 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a7d59*/
    int v13 = g_WOL_State; /*0x7a7d66*/
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
    int v14 = 0; /*0x7a7e1d*/
    if ( (int)g_WOL_State > 0 ) /*0x7a7e21*/
    {
      char * v15 = (char *)g_WOL_ConnectionFlags; /*0x7a7e23*/
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
        BulkCharToWide(DataGlobal_A8E258, byte_B777D4, -1); /*0x7a7e67*/
    }
LABEL_41:
    DataGlobal_A8E2AC = -1; /*0x7a7e6c*/
    DataGlobal_A8E04C = CComObject_CChatEventSink___ATL::DispatchConnectionPairs(&DataGlobal_A8DC4C); /*0x7a7e82*/
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
} // namespace gamemd

// 0x7A7EA0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_22(int a1, int a2, int a3, int a4, char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *Flagged; // esi
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  HWND Current; // ebp
  HWND DlgItem; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  int Buffer[16]; // [esp+14h] [ebp-ACh] BYREF

  if ( (byte_B78600 & 1) == 0 ) /*0x7a7ead*/
  {
    byte_B78600 |= 1u; /*0x7a7eb9*/
    dword_B78608 = Timer::GetTicks(); /*0x7a7ec9*/
    atexit(nullsub_265); /*0x7a7ece*/
  }
  if ( a2 < 0 ) /*0x7a7ee3*/
    return 0; /*0x7a7ee3*/
  char * v5 = _strdup(Source); /*0x7a7ef6*/
  bool v6 = SetupNetworkLobbyDialog(v5, (void *)(a4 + 36)); /*0x7a7f0d*/
  free(v5); /*0x7a7f0f*/
  if ( g_NetworkLobby_Init ) /*0x7a7f1e*/
    return 0; /*0x7a7f1e*/
  if ( g_NetworkLobbyState ) /*0x7a7f2b*/
    return 0; /*0x7a7f2b*/
  if ( *Source == 90 ) /*0x7a7f35*/
    return 0; /*0x7a7f35*/
  if ( *Source == 87 ) /*0x7a7f3d*/
    return 0; /*0x7a7f3d*/
  char v21 = 0; /*0x7a7f43*/
  Flagged = GameSettings::FindFlagged(); /*0x7a7f4d*/
  if ( Flagged ) /*0x7a7f51*/
  {
    char * v8 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7a7f58*/
    if ( !_strcmpi(Flagged + 36, v8) ) /*0x7a7f62*/
      return 0; /*0x7a7f6c*/
  }
  if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7a7f84*/
  {
  void *v22; // [esp+8h] [ebp-B8h] BYREF
    CharStringToWide((wchar_t **)&v22, (const char **)&g_WebBrowser); /*0x7a7f93*/
    v9 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x7a7f9c*/
    v10 = Player::FindByName(v9); /*0x7a7fa3*/
    int v11 = (int)v10; /*0x7a7fa8*/
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
  int v23; // [esp+Ch] [ebp-B4h]
    if ( v6 ) /*0x7a802d*/
    {
      v21 = 1; /*0x7a8033*/
      dword_B78608 = Timer::GetTicks(); /*0x7a8046*/
      dword_B7860C = v23; /*0x7a804b*/
      Debug::Log(); /*0x7a8051*/
    }
    if ( (int)(Timer::GetTicks() - dword_B78608) > 900 ) /*0x7a806e*/
    {
      void * v14 = g_UIControlState; /*0x7a8070*/
      if ( (!g_UIControlState || !*(_DWORD *)g_UIControlState) && !byte_B77E2C ) /*0x7a8085*/
      {
        if ( !Destination /*0x7a80a8*/
          || (LOBYTE(v14) = g_MultiplayerSetupState,
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
  int v15; // edx
      LOBYTE(v15) = g_MultiplayerSetupState; /*0x7a80ef*/
      if ( !FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v15, 0) /*0x7a813d*/
        || (RawFileClass::Construct(Buffer, (int)&Destination),
  bool v16; // bl
            v16 = FileClass::Open(Buffer, 0) != 0,
            RawFileClass::Dtor(Buffer),
            v16) )
      {
        if ( g_GameMode_Current[0] == 4 ) /*0x7a814c*/
        {
  char v24; // [esp+13h] [ebp-ADh]
          if ( dword_B76B24 || (v24 = BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) ) /*0x7a8165*/
          {
            if ( *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 119) ) /*0x7a816f*/
            {
              *(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 119) = 0; /*0x7a817b*/
              Network::SendOptionsGame(DataGlobal_8317F4); /*0x7a8182*/
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
      sprintf((char *const)Buffer, DataGlobal_84AE48, &Destination); /*0x7a81cf*/
      if ( (int)g_WOL_State > 0 ) /*0x7a81de*/
  _BYTE v26[108]; // [esp+54h] [ebp-6Ch] BYREF
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
} // namespace gamemd

// 0x7A8DA0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_16(int a1, int a2, int a3, const char * a4, char * String1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
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
  bool v8; // bl
      const char * v6 = String1; /*0x7a8dee*/
      String::Assign(&String1, String1); /*0x7a8df8*/
      const char * v7 = a4; /*0x7a8dfd*/
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
        int v9 = 61680; /*0x7a8e7b*/
        if ( (*v7 & 1) != 0 ) /*0x7a8e83*/
          v9 = 16776960; /*0x7a8e85*/
        const void * v10 = v7 + 36; /*0x7a8e8b*/
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
} // namespace gamemd

// 0x7A8ED0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_40(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v11; // eax
  if ( g_NetworkLobby_Init ) /*0x7a8ed8*/
    return 0; /*0x7a8eda*/
  if ( a2 < 0 ) /*0x7a8ee6*/
    return 0; /*0x7a8ee8*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a8ef7*/
  const char * v6 = a4; /*0x7a8efc*/
  if ( a4 ) /*0x7a8f02*/
  {
    if ( (*a4 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a8f1c*/
      goto LABEL_21; /*0x7a8f1c*/
    bool v7 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a8f2e*/
    int v8 = dword_B779C0; /*0x7a8f30*/
    if ( v7 ) /*0x7a8f35*/
      v8 = dword_B779DC; /*0x7a8f37*/
    if ( v8 ) /*0x7a8f43*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v6) ) /*0x7a8f56*/
      {
        int v9 = 61680; /*0x7a8f71*/
        if ( (*v6 & 1) != 0 ) /*0x7a8f79*/
          v9 = 16776960; /*0x7a8f7b*/
        const void * v10 = v6 + 36; /*0x7a8f81*/
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
} // namespace gamemd

// 0x7A8FC0
namespace gamemd {
void CComObject_CChatEventSink___ATL_DispatchStub_17()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x7A9110
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_41(int a1, int a2, const char * a3, wchar_t * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v10; // eax
  if ( g_NetworkLobby_Init ) /*0x7a9118*/
    return 0; /*0x7a911a*/
  if ( a2 < 0 ) /*0x7a9126*/
    return 0; /*0x7a9128*/
  WideString::Assign((wchar_t **)&a2, String); /*0x7a9137*/
  const char * v5 = a3; /*0x7a913c*/
  if ( a3 ) /*0x7a9142*/
  {
    if ( (*a3 & 1) != 0 || Dialog::FindByHandle((void *)0xC2) || Dialog::FindByHandle((void *)0xC9) ) /*0x7a915c*/
      goto LABEL_21; /*0x7a915c*/
    bool v6 = WideString::IsASCII((const wchar_t **)&a2) == 0; /*0x7a916e*/
    int v7 = dword_B779C0; /*0x7a9170*/
    if ( v6 ) /*0x7a9175*/
      v7 = dword_B779DC; /*0x7a9177*/
    if ( v7 ) /*0x7a9183*/
    {
LABEL_21:
      if ( IsBuddyOrIgnoreWOL(v5) ) /*0x7a9196*/
      {
        int v8 = 16744576; /*0x7a91b1*/
        if ( (*v5 & 1) != 0 ) /*0x7a91b9*/
          v8 = 16776960; /*0x7a91bb*/
        const void * v9 = v5 + 36; /*0x7a91c1*/
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
} // namespace gamemd

// 0x7A9200
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_28(int a1, int a2, const char * a3, const char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v8; // eax
  int Type; // esi
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
  wchar_t *v23; // eax
  wchar_t Buffer[256]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a920d*/
    return 0; /*0x7a920f*/
  void *v26[4]; // [esp+10h] [ebp-210h] BYREF
  String::Assign((char **)v26, a4); /*0x7a9227*/
  void *v25; // [esp+Ch] [ebp-214h] BYREF
  CharStringToWide((wchar_t **)&v25, (const char **)v26); /*0x7a9234*/
  DeleteAndZero(v26); /*0x7a923d*/
  if ( !a3 ) /*0x7a924b*/
    goto LABEL_12; /*0x7a924b*/
  if ( (*a3 & 1) == 0 && !Dialog::FindByHandle((void *)0xC2) && !Dialog::FindByHandle((void *)0xC9) ) /*0x7a9266*/
  {
    bool v5 = WideString::IsASCII((const wchar_t **)&v25) == 0; /*0x7a9278*/
    int v6 = dword_B779C0; /*0x7a927a*/
    if ( v5 ) /*0x7a927f*/
      v6 = dword_B779DC; /*0x7a9281*/
    if ( !v6 ) /*0x7a928d*/
      goto LABEL_12; /*0x7a928d*/
  }
  if ( IsBuddyOrIgnoreWOL(a3) ) /*0x7a92a6*/
  {
    char v7 = g_NetworkLobby_Init; /*0x7a92d7*/
    strcpy(byte_B77E30, a3 + 36); /*0x7a92e8*/
    if ( v7 ) /*0x7a92f3*/
    {
      v8 = WideString::GetOrEmpty((wchar_t **)&v25); /*0x7a92fd*/
      swprintf(Buffer, (const size_t)g_Str_Trace___hs_, (const wchar_t *const)a3 + 18, v8); /*0x7a930e*/
      Type = BuildingAnim::GetType(); /*0x7a9321*/
      int v10 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].__pad_A0 * 900.0); /*0x7a9331*/
      MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0); /*0x7a9348*/
      int v24 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].__pad_A0 * 900.0); /*0x7a9365*/
      StringCSF = GetStringCSF(aTxtHowToReply, 0, g_Str_File_wonline_cpp, 8066); /*0x7a937a*/
      MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, Type, 22, v24, 0); /*0x7a9389*/
      MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0); /*0x7a9395*/
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
      char * v21 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a94d0*/
      SendMessageA(v20, 0x4B4u, 0, (LPARAM)v21); /*0x7a94de*/
      DeleteAndZero(v26); /*0x7a94e8*/
    }
    if ( byte_B77E40 ) /*0x7a94f4*/
    {
      int v22 = *(_DWORD *)ppv; /*0x7a9500*/
      v23 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a9502*/
      (*(void (__stdcall **)(LPVOID, const char *, wchar_t *))(v22 + 236))(ppv, a3, v23); /*0x7a9510*/
    }
    PlayVocClass(g_RulesClass_Instance->MovieOn, 0x2000, 1.0, 0); /*0x7a952d*/
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
} // namespace gamemd

// 0x7A9550
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_44(int a1, int a2, int a3, wchar_t * String)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool v6; // bl
  int Type; // ebx
  HWND Current; // esi
  HWND DlgItem; // eax
  char **ChatCommand; // ebx
  HWND v14; // esi
  wchar_t *v17; // eax
  void *v18; // [esp+Ch] [ebp-204h] BYREF
  wchar_t Buffer[256]; // [esp+10h] [ebp-200h] BYREF

  if ( a2 < 0 ) /*0x7a955f*/
    return 0; /*0x7a9563*/
  WideString::Assign((wchar_t **)&v18, String); /*0x7a957b*/
  int v5 = a3; /*0x7a9580*/
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
      bool v7 = WideString::IsASCII((const wchar_t **)&v18) == 0; /*0x7a95c5*/
      int v8 = dword_B779C0; /*0x7a95c7*/
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
    int v10 = Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].__pad_A0 * 900.0); /*0x7a9648*/
    MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, Buffer, Type, 22, v10, 0); /*0x7a965f*/
    MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0); /*0x7a966b*/
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
    char * v15 = String::GetOrEmpty_Alt(ChatCommand); /*0x7a9778*/
    SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x7a9786*/
    DeleteAndZero(&v18); /*0x7a9790*/
    v5 = a3; /*0x7a9795*/
  }
  if ( byte_B77E40 ) /*0x7a97a3*/
  {
    int v16 = *(_DWORD *)ppv; /*0x7a97ab*/
    v17 = WideString::GetOrEmpty((wchar_t **)&dword_B76230); /*0x7a97b2*/
    (*(void (__stdcall **)(LPVOID, int, wchar_t *))(v16 + 236))(ppv, v5, v17); /*0x7a97c0*/
  }
  PlayVocClass(g_RulesClass_Instance->MovieOn, 0x2000, 1.0, 0); /*0x7a97dd*/
  return 0; /*0x7a9561*/
}
}
} // namespace gamemd

// 0x7A9800
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_27(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  HWND Current; // eax
  HWND v5; // esi
  int Type; // esi
  wchar_t *v8; // [esp-4h] [ebp-10Ch]
  wchar_t *v9; // [esp-4h] [ebp-10Ch]
  ObjectClass v10; // [esp+0h] [ebp-108h] BYREF
  if ( !a2 ) /*0x7a980e*/
  {
    StringCSF = GetStringCSF(aTxtPagesent, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8189); /*0x7a9821*/
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, *(CampaignScore **)v10[0]); /*0x7a982d*/
    return 0; /*0x7a983f*/
  }
  if ( a2 == 262452 ) /*0x7a9847*/
  {
    v8 = GetStringCSF(aTxtPagedisable, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8193); /*0x7a9863*/
    swprintf( /*0x7a9865*/
      (wchar_t *const)&v10[8],
      (const size_t)v8,
      *(const wchar_t *const *)v10[0],
      *(CampaignScore **)&v10[4]);
  }
  else
  {
    if ( a2 == 262451 ) /*0x7a986c*/
      v9 = GetStringCSF(aTxtPageusergon, 0, (CampaignScore *)g_Str_File_wonline_cpp, 8195); /*0x7a9888*/
    else
      v9 = GetStringCSF( /*0x7a98a2*/
             (wchar_t *)&g_Str_Trace___hs_.CampaignScore_field_0x14,
             0,
             (CampaignScore *)g_Str_File_wonline_cpp,
             8197);
    swprintf( /*0x7a988a*/
      (wchar_t *const)&v10[8],
      (const size_t)v9,
      *(const wchar_t *const *)v10[0],
      *(CampaignScore **)&v10[4]);
  }
  Current = Dialog::GetCurrent(); /*0x7a98b0*/
  v5 = Current; /*0x7a98b5*/
  if ( !Current ) /*0x7a98b9*/
    goto LABEL_19; /*0x7a98b9*/
  if ( GetDlgItem(Current, 1343) ) /*0x7a98c7*/
  {
    Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10[8], v10); /*0x7a98d9*/
    return 0; /*0x7a98eb*/
  }
  if ( GetDlgItem(v5, 1461) ) /*0x7a98f4*/
  {
    Dialog::ShowStatusText((SessionClass *)0xFFFFFFFF, (CampaignScore *)&v10[8], *(CampaignScore **)v10[0]); /*0x7a9906*/
    return 0; /*0x7a990e*/
  }
  else
  {
LABEL_19:
    if ( SessionClass::GetGameSpeed(&HouseClass_Player[29932]) ) /*0x7a9920*/
    {
      Type = BuildingAnim::GetType(); /*0x7a9934*/
      int v7 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374[44652] + 5312) * 900.0); /*0x7a9944*/
      MessageListClass::AddMessage( /*0x7a995b*/
        &HouseClass_Player[32532],
        0,
        0,
        (CellStruct *)&v10[8],
        Type,
        (IUnknown *)0x16,
        v7,
        0);
    }
    return 0; /*0x7a9961*/
  }
}
}
} // namespace gamemd

// 0x7AA6D0
namespace gamemd {
void CComObject_CChatEventSink___ATL_DispatchStub_19()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  CampaignScore *Type; // esi
  wchar_t *v8; // eax
  wchar_t Buffer[256]; // [esp+0h] [ebp-200h] BYREF

  if ( byte_B77DC0 ) /*0x7aa6dd*/
  {
    SetEvent(dword_B736A8); /*0x7aa6e5*/
    dword_B77DE8 = a4; /*0x7aa6f4*/
    return 0; /*0x7aa700*/
  }
  if ( a4 == 262447 ) /*0x7aa710*/
  {
    if ( g_NetworkLobby_Init ) /*0x7aa71d*/
    {
      if ( !byte_B77DC2 ) /*0x7aa72a*/
      {
        Buffer[0] = 0; /*0x7aa742*/
        StringCSF = GetStringCSF( /*0x7aa749*/
                      (wchar_t *)&stru_84B120.estimatedHealth,
                      0,
                      (CampaignScore *)g_Str_File_wonline_cpp,
                      8460);
        swprintf(Buffer, (const size_t)StringCSF, a1, a2); /*0x7aa754*/
        Type = (CampaignScore *)BuildingAnim::GetType(); /*0x7aa761*/
        int v7 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374[44652] + 5312) * 900.0); /*0x7aa776*/
        MessageListClass::AddMessage( /*0x7aa78d*/
          &HouseClass_Player[32532],
          0,
          0,
          (CellStruct *)Buffer,
          (int)Type,
          (IUnknown *)0x16,
          v7,
          0);
        MapClass::MarkForRedraw(&stru_87C374[13428], 0); /*0x7aa799*/
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
        v8 = GetStringCSF( /*0x7aa809*/
               (wchar_t *)stru_84B120.ambientSoundController,
               0,
               (CampaignScore *)g_Str_File_wonline_cpp,
               8478);
        ShowDialogConfirm((CampaignScore *)v8, 0, (unsigned __int8 (*)())GameLoop::Thunk, 0); /*0x7aa812*/
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
} // namespace gamemd

// 0x7AB440
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_30(int a1, int a2, void * a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t v8; // eax
  size_t v14; // ecx
  if ( a2 ) /*0x7ab44c*/
    return 0; /*0x7ab65d*/
  signed int v5 = g_WOL_State; /*0x7ab452*/
  signed int v6 = 0; /*0x7ab458*/
  signed int v18 = 0; /*0x7ab45c*/
  if ( (int)g_WOL_State > 0 ) /*0x7ab460*/
  {
  _DWORD v19[27]; // [esp+8h] [ebp-D8h] BYREF
  char v15; // dl
    int v7 = 0; /*0x7ab467*/
    int v17 = 0; /*0x7ab46b*/
    while ( 1 ) /*0x7ab46f*/
    {
      if ( v7 < 0 ) /*0x7ab471*/
        goto LABEL_30; /*0x7ab471*/
      if ( v6 >= v5 ) /*0x7ab479*/
        goto LABEL_30; /*0x7ab479*/
  _DWORD v20[27]; // [esp+74h] [ebp-6Ch] BYREF
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
          int v9 = g_WOL_StateFlags / 2; /*0x7ab542*/
          if ( g_WOL_StateFlags / 2 < 10 ) /*0x7ab547*/
            v9 = 10; /*0x7ab549*/
          if ( v9 < g_WOL_StateFlags ) /*0x7ab550*/
          {
            char * v10 = (char *)__2_YAPAXI_Z(108 * v9); /*0x7ab55c*/
            char * v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab561*/
            void * v12 = v10; /*0x7ab56c*/
            if ( g_WOL_ConnectionFlags ) /*0x7ab56e*/
            {
              char v13 = 108 * g_WOL_State; /*0x7ab580*/
              v14 = (108 * g_WOL_State) >> 2; /*0x7ab582*/
              qmemcpy(v10, g_WOL_ConnectionFlags, 4 * v14); /*0x7ab585*/
              qmemcpy(&v10[4 * v14], &v11[4 * v14], v13 & 3); /*0x7ab58c*/
              v11 = (char *)g_WOL_ConnectionFlags; /*0x7ab58e*/
            }
            __3_YAXPAX_Z(v11); /*0x7ab595*/
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
} // namespace gamemd

// 0x7AB670
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_24(int a1, int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v18; // [esp-10h] [ebp-814h]
  HWND DlgItem; // [esp-10h] [ebp-814h]
  wchar_t Buffer[1024]; // [esp+4h] [ebp-800h] BYREF

  if ( g_NetworkLobby_Init ) /*0x7ab67d*/
    return 0; /*0x7ab67f*/
  if ( a2 < 0 ) /*0x7ab693*/
    return 0; /*0x7ab695*/
  memset(byte_B785C0, 0, sizeof(byte_B785C0)); /*0x7ab6af*/
  char * v6 = (char *)(a3 + 52); /*0x7ab6c5*/
  if ( !_strnicmp((const char *)(a3 + 52), g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x7ab6cf*/
  {
    int v7 = atol((const char *)(strlen(g_Str_Lob_41_) + a3 + 52)); /*0x7ab6f2*/
    int v8 = v7 / 8; /*0x7ab6fd*/
    int v9 = v7 % 8; /*0x7ab70c*/
    if ( v8 ) /*0x7ab70f*/
      sprintf(byte_B785C0, stru_84B120, (const char *)(&dword_B73E1C)[v9], v8 + 1); /*0x7ab72f*/
    else
      sprintf(byte_B785C0, g_Str_Fmt_PctS, (const char *)(&dword_B73E1C)[v9]); /*0x7ab719*/
  }
  else
  {
    sprintf(byte_B785C0, g_Str_Fmt_PctS, v6); /*0x7ab744*/
  }
  if ( (BYTE1(*(_DWORD *)a4) & 0x80u) == 0 ) /*0x7ab758*/
  {
    if ( !NetworkLobby::CheckMinPlayers() ) /*0x7ab860*/
    {
      char * v21 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab878*/
      char * v17 = CharToWideString(v6); /*0x7ab880*/
      char * v15 = CharToWideString((_BYTE *)(a4 + 36)); /*0x7ab889*/
      StringCSF = GetStringCSF(aTxtUserKicked, 0, g_Str_File_wonline_cpp, 8940); /*0x7ab89b*/
      Dialog::ShowMessage(-1, (size_t)StringCSF, v15, v17, v21); /*0x7ab8a8*/
    }
  }
  else
  {
  void *v22; // [esp+0h] [ebp-804h] BYREF
    unknown_libname_74(&v22); /*0x7ab762*/
    if ( g_WOL_ProcessIdle && Event_Helper() ) /*0x7ab770*/
    {
      v18 = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 8912); /*0x7ab78f*/
      WideString::Assign_Alt(&v22, v18); /*0x7ab790*/
    }
    else
    {
      memset(Buffer, 0, sizeof(Buffer)); /*0x7ab79d*/
      char * v19 = CharToWideString((_BYTE *)(a5 + 36)); /*0x7ab7ae*/
      char * v16 = CharToWideString(v6); /*0x7ab7b6*/
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
} // namespace gamemd

// 0x7AB8E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_33(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v6; // eax
  char **v7; // esi
  _DWORD *PlayerProfile; // eax
  void **v14; // [esp+Ch] [ebp-28h] BYREF

  char v12 = 0; /*0x7ab8ec*/
  if ( a2 >= 0 ) /*0x7ab8f0*/
  {
    int v4 = a3; /*0x7ab909*/
    if ( a3 ) /*0x7ab90f*/
    {
      do /*0x7abac8*/
      {
        unknown_libname_73(&a2); /*0x7ab91b*/
        String::Assign_Bool((void **)&a2, (const char *)(v4 + 36)); /*0x7ab928*/
        String::ToLower((const char **)&a2); /*0x7ab931*/
  int v13; // [esp+8h] [ebp-2Ch] BYREF
        HashTable::Lookup(&g_WOL_ConnectionPool, (const char **)&a2, &v13); /*0x7ab945*/
        char * v5 = *(char **)(v4 + 100); /*0x7ab94a*/
        v6 = (char **)__2_YAPAXI_Z(0xCu); /*0x7ab94f*/
        v7 = v6; /*0x7ab954*/
        if ( v6 ) /*0x7ab95b*/
          unknown_libname_73(v6); /*0x7ab95f*/
        else
          v7 = 0; /*0x7ab966*/
        String::Reassign(v7, (const char **)&a2); /*0x7ab96f*/
        v7[1] = v5; /*0x7ab978*/
        v7[2] = 0; /*0x7ab981*/
        int v8 = CComObject_CChatEventSink___ATL::Check((int)&g_WOL_ConnectionPool, (int)&a2); /*0x7ab984*/
        char * v9 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v8); /*0x7ab98f*/
        *((_DWORD *)g_WOL_ConnectionPool + v8) = v7; /*0x7ab992*/
        if ( v9 ) /*0x7ab997*/
          v7[2] = v9; /*0x7ab999*/
        int v19 = dword_B76538; /*0x7ab9b0*/
        int v20 = 0; /*0x7ab9b8*/
        __int64 v18 = (unsigned int)++dword_B76534; /*0x7ab9ac*/
        if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7ab9d0*/
          HashTable::Grow(&g_WOL_ConnectionPool); /*0x7ab9d7*/
        char * v10 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7ab9e1*/
        if ( !_strcmpi((const void *)(a3 + 36), v10) ) /*0x7ab9ef*/
        {
          int v16 = 0; /*0x7aba03*/
          char v17 = 0; /*0x7aba07*/
          ReadRegistryOptionsWOL(&v16); /*0x7aba0b*/
          ComPtr::Constructor(&v14); /*0x7aba14*/
          v14 = &vt_rc_ptr_PlayerProfile; /*0x7aba22*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba26*/
          {
  _DWORD v21[2]; // [esp+2Ch] [ebp-8h] BYREF
            PlayerProfile = LoadPlayerProfile(v21, (const char **)&g_WebBrowser); /*0x7aba38*/
            ComPtr::Set(&v14, PlayerProfile[1]); /*0x7aba45*/
            v21[0] = &vt_rc_ptr_PlayerProfile; /*0x7aba4e*/
            ComPtr::Release(v21); /*0x7aba52*/
          }
          else
          {
            ComPtr::Set(&v14, dword_B75E4C); /*0x7aba64*/
          }
  int v15; // [esp+10h] [ebp-24h]
          GadgetClass::TrackState(v15, *(_DWORD *)(a3 + 100), 2); /*0x7aba77*/
          if ( Flag::IsNot2(&v16) ) /*0x7aba80*/
            SaveProfileWOL(v15, (const char **)&g_WebBrowser); /*0x7aba92*/
          Debug::Log(); /*0x7abaa0*/
          v12 = 1; /*0x7abaac*/
          v14 = &vt_rc_ptr_PlayerProfile; /*0x7abab1*/
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
} // namespace gamemd

// 0x7ABAF0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_35(int a1, int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v10; // eax
  char **v11; // esi
  __int64 v16; // [esp+4h] [ebp-48h]
  char v17[64]; // [esp+Ch] [ebp-40h] BYREF

  void *v15; // [esp+0h] [ebp-4Ch] BYREF
  unknown_libname_73(&v15); /*0x7abafa*/
  strcpy(v17, g_GameSetupBuffer); /*0x7abb1c*/
  String::Assign_Bool(&v15, v17); /*0x7abb2e*/
  String::ToLower((const char **)&v15); /*0x7abb37*/
  int v3 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v15) & ((1 << dword_B7653C) - 1))); /*0x7abb5d*/
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
      int v4 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abbcc*/
      int v5 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbd3*/
      if ( v5 ) /*0x7abbd8*/
      {
        if ( String::Compare((const char **)v5, (const char **)&v15) ) /*0x7abbe5*/
        {
          int v6 = *((_DWORD *)g_WOL_ConnectionPool + v4); /*0x7abbf4*/
          int v7 = *(_DWORD *)(v6 + 8); /*0x7abbf9*/
          if ( v6 ) /*0x7abbfc*/
            ScalarDtor::DeleteAndZero((void **)v6, 1); /*0x7abc00*/
          double v8 = *(float *)&v16; /*0x7abc0a*/
          *((_DWORD *)g_WOL_ConnectionPool + v4) = v7; /*0x7abc0e*/
          --dword_B76534; /*0x7abc1d*/
          if ( v8 <= dbl_B76550 ) /*0x7abc27*/
LABEL_18:
            HashMap::Shrink(&g_WOL_ConnectionPool); /*0x7abc7e*/
        }
        else
        {
          int v9 = *(_DWORD *)(v5 + 8); /*0x7abc2b*/
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
  v10 = (char **)__2_YAPAXI_Z(0xCu); /*0x7abc88*/
  v11 = v10; /*0x7abc8f*/
  if ( v10 ) /*0x7abc96*/
    unknown_libname_73(v10); /*0x7abc9a*/
  else
    v11 = 0; /*0x7abca1*/
  String::Reassign(v11, (const char **)&v15); /*0x7abcaa*/
  v11[2] = 0; /*0x7abcaf*/
  v11[1] = a3; /*0x7abcb6*/
  int v12 = dword_B76548(&v15) & ((1 << dword_B7653C) - 1); /*0x7abcd7*/
  char * v13 = (char *)*((_DWORD *)g_WOL_ConnectionPool + v12); /*0x7abcd9*/
  *((_DWORD *)g_WOL_ConnectionPool + v12) = v11; /*0x7abcdc*/
  if ( v13 ) /*0x7abce1*/
    v11[2] = v13; /*0x7abce3*/
  v16 = (unsigned int)++dword_B76534; /*0x7abcf6*/
  LODWORD(v16) = dword_B76538; /*0x7abd03*/
  if ( (double)(unsigned int)dword_B76534 / (double)dword_B76538 >= dbl_B76558 ) /*0x7abd1d*/
    HashTable::Grow(&g_WOL_ConnectionPool); /*0x7abd24*/
  DeleteAndZero(&v15); /*0x7abd2d*/
  return 0; /*0x7abd34*/
}
}
} // namespace gamemd

// 0x7ABD40
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_34(int a1, int a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v13; // eax
  char **v14; // esi

  if ( a2 < 0 ) /*0x7abd4c*/
  {
    Debug::Log(); /*0x7abf8e*/
    return 0; /*0x7abf96*/
  }
  else
  {
    float v3 = a3; /*0x7abd54*/
    float v4 = a3; /*0x7abd5c*/
    unknown_libname_73(&a2); /*0x7abd5e*/
    if ( v3 != 0.0 ) /*0x7abd65*/
    {
      do /*0x7abd74*/
      {
        String::Assign_Bool((void **)&a2, (const char *)(LODWORD(v4) + 36)); /*0x7abd74*/
        int v5 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a2) & ((1 << dword_B7668C) - 1))); /*0x7abd98*/
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
        int v6 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abe07*/
        int v7 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe0e*/
        if ( !v7 ) /*0x7abe13*/
          goto LABEL_21; /*0x7abe13*/
        if ( String::Compare((const char **)v7, (const char **)&a2) ) /*0x7abe20*/
        {
          int v8 = *((_DWORD *)g_WOL_MessageQueue + v6); /*0x7abe2f*/
          int v9 = *(_DWORD *)(v8 + 8); /*0x7abe34*/
          if ( v8 ) /*0x7abe37*/
            ScalarDtor::DeleteAndZero((void **)v8, 1); /*0x7abe3b*/
          double v10 = a3; /*0x7abe45*/
          *((_DWORD *)g_WOL_MessageQueue + v6) = v9; /*0x7abe49*/
          --g_WOL_MessageConfig; /*0x7abe58*/
          if ( v10 > dbl_B766A0 ) /*0x7abe62*/
            goto LABEL_21; /*0x7abe62*/
        }
        else
        {
          int v11 = *(_DWORD *)(v7 + 8); /*0x7abe66*/
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
        char * v12 = *(char **)(LODWORD(v4) + 104); /*0x7abec3*/
        v13 = (char **)__2_YAPAXI_Z(0xCu); /*0x7abec8*/
        v14 = v13; /*0x7abecd*/
        if ( v13 ) /*0x7abed4*/
          unknown_libname_73(v13); /*0x7abed8*/
        else
          v14 = 0; /*0x7abedf*/
        String::Reassign(v14, (const char **)&a2); /*0x7abee8*/
        v14[1] = v12; /*0x7abef1*/
        v14[2] = 0; /*0x7abef4*/
        int v15 = dword_B76698(&a2) & ((1 << dword_B7668C) - 1); /*0x7abf11*/
        char * v16 = (char *)*((_DWORD *)g_WOL_MessageQueue + v15); /*0x7abf13*/
        *((_DWORD *)g_WOL_MessageQueue + v15) = v14; /*0x7abf16*/
        if ( v16 ) /*0x7abf1b*/
          v14[2] = v16; /*0x7abf1d*/
        if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7abf54*/
          HashTable::Grow(&g_WOL_MessageQueue); /*0x7abf5b*/
        v4 = *(float *)(LODWORD(v4) + 32); /*0x7abf60*/
      }
      while ( v4 != 0.0 ); /*0x7abd74*/
    }
    DisplayRankingsWOL(0); /*0x7abf6c*/
    DeleteAndZero((void **)&a2); /*0x7abf79*/
    return 0; /*0x7abf80*/
  }
}
}
} // namespace gamemd

// 0x7ABFA0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_36(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v10; // eax
  char **v11; // esi

  if ( a2 ) /*0x7abfac*/
  {
    Debug::Log(); /*0x7ac208*/
    return 0; /*0x7ac210*/
  }
  int v3 = a3; /*0x7abfb3*/
  g_CommandExecState = a3; /*0x7abfbd*/
  unknown_libname_73(&a3); /*0x7abfc3*/
  char v15[64]; // [esp+Ch] [ebp-40h] BYREF
  strcpy(v15, g_GameSetupBuffer); /*0x7abfe5*/
  String::Assign_Bool((void **)&a3, v15); /*0x7abff7*/
  String::ToLower((const char **)&a3); /*0x7ac000*/
  int v4 = *((_DWORD *)g_WOL_MessageQueue + (dword_B76698(&a3) & ((1 << dword_B7668C) - 1))); /*0x7ac024*/
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
      float v16 = (double)(unsigned int)(g_WOL_MessageConfig - 1) / (double)g_WOL_MsgPool; /*0x7ac07b*/
      int v5 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac093*/
      int v6 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac09a*/
      if ( v6 ) /*0x7ac09f*/
      {
        if ( String::Compare((const char **)v6, (const char **)&a3) ) /*0x7ac0ac*/
        {
          int v7 = *((_DWORD *)g_WOL_MessageQueue + v5); /*0x7ac0bb*/
          int v8 = *(_DWORD *)(v7 + 8); /*0x7ac0c0*/
          if ( v7 ) /*0x7ac0c3*/
            ScalarDtor::DeleteAndZero((void **)v7, 1); /*0x7ac0c7*/
          *((_DWORD *)g_WOL_MessageQueue + v5) = v8; /*0x7ac0d5*/
          --g_WOL_MessageConfig; /*0x7ac0e4*/
          if ( v16 > dbl_B766A0 ) /*0x7ac0ee*/
            goto LABEL_20; /*0x7ac0ee*/
        }
        else
        {
          int v9 = *(_DWORD *)(v6 + 8); /*0x7ac0f2*/
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
  v10 = (char **)__2_YAPAXI_Z(0xCu); /*0x7ac14f*/
  v11 = v10; /*0x7ac156*/
  if ( v10 ) /*0x7ac15d*/
    unknown_libname_73(v10); /*0x7ac161*/
  else
    v11 = 0; /*0x7ac168*/
  String::Reassign(v11, (const char **)&a3); /*0x7ac171*/
  v11[1] = (char *)v3; /*0x7ac17a*/
  v11[2] = 0; /*0x7ac17d*/
  int v12 = dword_B76698(&a3) & ((1 << dword_B7668C) - 1); /*0x7ac19a*/
  char * v13 = (char *)*((_DWORD *)g_WOL_MessageQueue + v12); /*0x7ac19c*/
  *((_DWORD *)g_WOL_MessageQueue + v12) = v11; /*0x7ac19f*/
  if ( v13 ) /*0x7ac1a4*/
    v11[2] = v13; /*0x7ac1a6*/
  if ( (double)(unsigned int)++g_WOL_MessageConfig / (double)g_WOL_MsgPool >= dbl_B766A8 ) /*0x7ac1e0*/
    HashTable::Grow(&g_WOL_MessageQueue); /*0x7ac1e7*/
  DeleteAndZero((void **)&a3); /*0x7ac1f0*/
  return 0; /*0x7ac1f7*/
}
}
} // namespace gamemd

// 0x7AC220
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_37(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v6; // ecx
  HWND v7; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  HWND v10; // eax
  HWND v11; // esi
  HWND v12; // eax
  if ( a2 >= 0 ) /*0x7ac22b*/
  {
    int v3 = a3; /*0x7ac23b*/
    if ( a3 ) /*0x7ac23d*/
    {
      while ( 1 ) /*0x7ac24e*/
      {
        String::Assign((char **)&a3, (const char *)(v3 + 36)); /*0x7ac24e*/
        if ( MapSeed::CheckName((const char **)&a3) ) /*0x7ac25a*/
          break; /*0x7ac25a*/
LABEL_20:
        DeleteAndZero((void **)&a3); /*0x7ac3f9*/
        v3 = *(_DWORD *)(v3 + 32); /*0x7ac405*/
        if ( !v3 ) /*0x7ac40a*/
          goto LABEL_21; /*0x7ac40a*/
      }
      String::AssignFromPtr((char **)&a2, (const char **)&a3); /*0x7ac276*/
      StringVector::Insert(&g_WindowManager, (const char **)&a2, g_WindowManager); /*0x7ac28f*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&a2, g_WOL_RequestManager); /*0x7ac2a8*/
      int v4 = g_WOL_BuddyList; /*0x7ac2ad*/
      int v5 = g_WOL_BuddyList; /*0x7ac2b2*/
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
      if ( v5 < v4 ) /*0x7ac2e8*/
      {
        memcpy((char *)g_WOL_ChannelMgr + 4 * v5 + 4, (char *)g_WOL_ChannelMgr + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x7ac305*/
        v4 = g_WOL_BuddyList; /*0x7ac30a*/
      }
      v6 = (char **)((char *)g_WOL_ChannelMgr + 4 * v5); /*0x7ac318*/
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
  char v14[108]; // [esp+8h] [ebp-6Ch] BYREF
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
    v11 = v10; /*0x7ac469*/
    if ( v10 ) /*0x7ac46d*/
    {
      FillBuddyListWOL(v10); /*0x7ac471*/
      KillTimer(v11, 0x704u); /*0x7ac47c*/
      v12 = GetDlgItem(v11, 1796); /*0x7ac48a*/
      EnableWindow(v12, 1); /*0x7ac48d*/
    }
  }
  return 0; /*0x7ac493*/
}
}
} // namespace gamemd

// 0x7AC6B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Release()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LONG v1; // ebx
  char *Block; // [esp+14h] [ebp+4h]

  v1 = InterlockedDecrement((volatile LONG *)Block + 1); /*0x7ac6c4*/
  if ( !v1 && Block ) /*0x7ac6cc*/
  {
    *(_DWORD *)Block = &vt_ATL_CComObject_CChatEventSink; /*0x7ac6d3*/
    *((_DWORD *)Block + 1) = 1; /*0x7ac6d9*/
    InterlockedDecrement(&Addend); /*0x7ac6df*/
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 8)); /*0x7ac6e5*/
    __3_YAXPAX_Z(Block); /*0x7ac6ec*/
  }
  return v1; /*0x7ac6f4*/
}
}
} // namespace gamemd

// 0x7AC700
namespace gamemd {
int CComObject_CChatEventSink___ATL::QueryInterface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _UNKNOWN **v1; // esi
  int result; // eax
  BOOL v4; // ebp
  int (__stdcall *v5)(char *, _DWORD *, char **, void *); // eax
  char *v7; // esi
  char *v8; // [esp+14h] [ebp+4h]
  _DWORD *v9; // [esp+18h] [ebp+8h]
  char **v10; // [esp+1Ch] [ebp+Ch]

  v1 = &off_7F7698; /*0x7ac70a*/
  if ( !v10 ) /*0x7ac70f*/
    return -2147467261; /*0x7ac71a*/
  *v10 = 0; /*0x7ac721*/
  if ( !*v9 && !v9[1] && v9[2] == 192 && v9[3] == 1174405120 ) /*0x7ac743*/
  {
    (*(void (__stdcall **)(char *))(*(_DWORD *)v8 + 4))(v8); /*0x7ac756*/
    *v10 = v8; /*0x7ac759*/
    return 0; /*0x7ac761*/
  }
  while ( 1 ) /*0x7ac76d*/
  {
    _DWORD * v3 = *v1; /*0x7ac76d*/
    v4 = *v1 == 0; /*0x7ac776*/
    if ( !*v1 || *v3 == *v9 && v3[1] == v9[1] && v3[2] == v9[2] && v3[3] == v9[3] ) /*0x7ac7a0*/
      break; /*0x7ac7a0*/
LABEL_17:
    void * v6 = v1[5]; /*0x7ac7c3*/
    v1 += 3; /*0x7ac7c6*/
    if ( !v6 ) /*0x7ac7cb*/
      return -2147467262; /*0x7ac7cd*/
  }
  v5 = (int (__stdcall *)(char *, _DWORD *, char **, void *))v1[2]; /*0x7ac7a2*/
  if ( v5 != (int (__stdcall *)(char *, _DWORD *, char **, void *))1 ) /*0x7ac7a8*/
  {
    result = v5(v8, v9, v10, v1[1]); /*0x7ac7b5*/
    if ( !result || !v4 && result < 0 ) /*0x7ac7c1*/
      return result; /*0x7ac7c1*/
    goto LABEL_17; /*0x7ac7c1*/
  }
  v7 = (char *)v1[1] + (_DWORD)v8; /*0x7ac7e0*/
  (*(void (__stdcall **)(char *))(*(_DWORD *)v7 + 4))(v7); /*0x7ac7e5*/
  *v10 = v7; /*0x7ac7e8*/
  return 0; /*0x7ac711*/
}
}
} // namespace gamemd

// 0x7AE5B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Check(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(int (__thiscall **)(TechnoTypeClass *))(this + 24))(aP1) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x7ae5c4*/
}
}
} // namespace gamemd

// 0x7A5220
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_20(int a1, int a2, const char * a3)
{
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a3);
    return 0;
}
}
} // namespace gamemd

// 0x7A5240
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetTypeInfoCount(int a1, int a2, int a3)
{
{
    wchar_t *StringCSF;
    wchar_t Buffer[512];
    if ( !g_NetworkLobby_Init )
  {
    StringCSF = GetStringCSF(DataGlobal_84AC00, 0, g_Str_File_wonline_cpp, 5655);
    swprintf(Buffer, (const size_t)&DataGlobal_8240B4, StringCSF);
    Dialog::ShowMessage(-1, (size_t)Buffer);
  }
    return 0;
}
}
} // namespace gamemd

// 0x7A55F0
namespace gamemd {
int CComObject_CChatEventSink___ATL::GetIDsOfNames(int a1, int a2, char * Source)
{
{
    char *v4;
    unsigned char *i;
    short v6[1024];
    if ( a2 < 0 )
    return 0;
    v4 = _strdup(Source);
    for ( i = (unsigned char *)strtok(v4, DataGlobal_83F328); i; i = (unsigned char *)strtok(0, DataGlobal_83F328) )
  {
    BulkCharToWide(v6, i, -1);
    Dialog::ShowMessage(-1, (size_t)v6);
  }
    free(v4);
    Dialog::ShowMessage(-1, (size_t)asc_830174);
    return 0;
}
}
} // namespace gamemd

// 0x7A70E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Disconnect(int a1, int a2, int a3, const char * a4)
{
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a4);
    else
    Debug::Log();
    return 0;
}
}
} // namespace gamemd

// 0x7AA6A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_18(int a1, int a2, int a3)
{
{
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    Dialog::ShowMessage(-1, (size_t)DataGlobal_84B128, a3);
    return 0;
}
}
} // namespace gamemd

// 0x7AAFB0
namespace gamemd {
int CComObject_CChatEventSink___ATL::Unadvise(int a1, int a2, const char * a3, const char * a4)
{
{
    const char *v4;
    const char *v5;
    bool v6;
    const void *v7;
    wchar_t *v8;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v4 = a4;
    String::Assign((char **)&a2, a4);
    v5 = a3;
    if ( a3 )
    {
    if ( (*a3 & 1) != 0 )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v6 = 1;
      }
    else
      {
    v6 = Dialog::FindByHandle((void *)0xC9) || DataGlobal_B779C0 != 0;
      }
    }
    else
    {
    v6 = 0;
    }
    DeleteAndZero((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    {
    String::Assign((char **)&a2, v4);
    CharStringToWide((wchar_t **)&a4, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v7 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v7) )
      {
    v8 = WideString::GetOrEmpty((wchar_t **)&a4);
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8);
      }
    DeleteAndZero::Alt((void **)&a4);
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AB0A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_42(int a1, int a2, const char * a3, wchar_t * String)
{
{
    wchar_t *v4;
    const char *v5;
    bool v6;
    bool v7;
    int v8;
    const void *v9;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v4 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v5 = a3;
    if ( a3 )
    {
    if ( (*a3 & 1) != 0 )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC9) )
      {
    v6 = 1;
      }
    else
      {
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v8 = DataGlobal_B779C0;
    if ( v7 )
    v8 = DataGlobal_B779DC;
    v6 = v8 != 0;
      }
    }
    else
    {
    v6 = 0;
    }
    DeleteAndZero::Alt((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    {
    v9 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v9) )
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4);
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AB170
namespace gamemd {
int CComObject_CChatEventSink___ATL::EnumDependents(int a1, int a2, int a3, const char * a4, const char * a5)
{
{
    const char *v5;
    const char *v6;
    bool v7;
    const void *v8;
    wchar_t *v9;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v5 = a5;
    String::Assign((char **)&a2, a5);
    v6 = a4;
    if ( a4 )
    {
    if ( (*a4 & 1) != 0 )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v7 = 1;
      }
    else
      {
    v7 = Dialog::FindByHandle((void *)0xC9) || DataGlobal_B779C0 != 0;
      }
    }
    else
    {
    v7 = 0;
    }
    DeleteAndZero((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    {
    String::Assign((char **)&a2, v5);
    CharStringToWide((wchar_t **)&a5, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v8 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v8) )
      {
    v9 = WideString::GetOrEmpty((wchar_t **)&a5);
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9);
      }
    DeleteAndZero::Alt((void **)&a5);
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AB260
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_43(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
{
    wchar_t *v5;
    const char *v6;
    bool v7;
    bool v8;
    int v9;
    const void *v10;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v5 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v6 = a4;
    if ( a4 )
    {
    if ( (*a4 & 1) != 0 )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC9) )
      {
    v7 = 1;
      }
    else
      {
    v8 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v9 = DataGlobal_B779C0;
    if ( v8 )
    v9 = DataGlobal_B779DC;
    v7 = v9 != 0;
      }
    }
    else
    {
    v7 = 0;
    }
    DeleteAndZero::Alt((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    {
    v10 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v10) )
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5);
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AB330
namespace gamemd {
int CComObject_CChatEventSink___ATL::COMStub_Return0(int a1, int a2, int a3, int a4)
{
return 0;
}
} // namespace gamemd

// 0x7AB340
namespace gamemd {
int CComObject_CChatEventSink___ATL::StubReturnFalse(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AB350
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_29(int a1, int a2, __time32_t Time)
{
{
    wchar_t *StringCSF;
    const wchar_t *v5;
    wchar_t Buffer[200];
    if ( !g_NetworkLobby_Init && !a2 )
  {
    v5 = (const wchar_t *)unknown_libname_75(&Time);
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809);
    swprintf(Buffer, (const size_t)StringCSF, v5);
    ShowDialogConfirm(Buffer, 0, (int)GameLoop::Thunk, 0);
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AB3C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_31(int a1, int a2, unsigned char * a3, int a4)
{
{
    wchar_t *StringCSF;
    wchar_t *v6;
    char *v7;
    char *v8;
    if ( !g_NetworkLobby_Init )
  {
    if ( a4 )
    {
    v7 = CharToWideString(a3);
    StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822);
    Dialog::ShowMessage(-1, (size_t)StringCSF, v7);
    return 0;
    }
    v8 = CharToWideString(a3);
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825);
    Dialog::ShowMessage(-1, (size_t)v6, v8);
  }
    return 0;
}
}
} // namespace gamemd

// 0x7AC4A0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_38(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AC4B0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_39(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AC4C0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_45(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AC4D0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_46(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AC4E0
namespace gamemd {
int CComObject_CChatEventSink___ATL::DispatchStub_47(int a1, int a2, int a3)
{
return 0;
}
} // namespace gamemd

// 0x7AC690
namespace gamemd {
LONG CComObject_CChatEventSink___ATL::AddRef()
{
{
    int v2;
    return InterlockedIncrement((volatile LONG *)(v2 + 4));
}
}
} // namespace gamemd
