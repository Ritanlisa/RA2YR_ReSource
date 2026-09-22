// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7A0DD0_e4.hpp"
#include "e4/classes/E4Recv_7A2830_e4.hpp"
#include "e4/classes/E4Recv_7AC9D0_e4.hpp"
#include "e4/classes/E4Recv_7ACBD0_e4.hpp"
#include "e4/classes/E4Recv_7AF3D0_e4.hpp"
#include "e4/classes/E4Recv_7AF640_e4.hpp"
#include "e4/classes/CComObject_CChatEventSink___ATL_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x7A0430
namespace gamemd {
void int CollectWOLConnectionTokens()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  signed int result; // eax
  char **v12; // ecx

  _BYTE v17[108]; // [esp+18h] [ebp-6Ch] BYREF
  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_State; /*0x7a0452*/
  signed int v1 = 0; /*0x7a045a*/
  signed int v15 = 0; /*0x7a045e*/
  if ( (int)g_WOL_State > 0 ) /*0x7a0462*/
  {
    int v2 = 0; /*0x7a0469*/
    int v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v2 >= 0 && v1 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_ConnectionFlags + v2, sizeof(v17)); /*0x7a048a*/
  char *v3; // eax
      if ( (v17[0] & 1) != 0 || (v3 = String::GetOrEmpty((char **)&g_WebBrowser), !_strcmpi(&v17[36], v3)) ) /*0x7a04ba*/
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
  void *v14; // [esp+Ch] [ebp-78h] BYREF
        String::Assign((char **)&v14, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty((char **)&v14); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        int v4 = g_WOL_ConnectionToken; /*0x7a04ff*/
        int v5 = g_WOL_ConnectionToken; /*0x7a0507*/
        int v13 = g_WOL_ConnectionToken; /*0x7a050b*/
        int v6 = dword_B76AD4; /*0x7a0515*/
        if ( g_WOL_ConnectionToken >= dword_B76AD4 ) /*0x7a051d*/
        {
          v6 = 2 * g_WOL_ConnectionToken; /*0x7a0527*/
          if ( 2 * g_WOL_ConnectionToken < 10 ) /*0x7a052d*/
            v6 = 10; /*0x7a052f*/
          void * v7 = __2_YAPAXI_Z(4 * v6); /*0x7a0543*/
          memset(v7, 0, 4 * ((unsigned int)(4 * v6) >> 2)); /*0x7a0551*/
          void * v8 = g_WOL_ObjectState; /*0x7a055a*/
          if ( g_WOL_ObjectState ) /*0x7a0561*/
          {
            qmemcpy(v7, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a056d*/
            v8 = g_WOL_ObjectState; /*0x7a056f*/
            v5 = v13; /*0x7a0574*/
          }
          __3_YAXPAX_Z(v8); /*0x7a0579*/
          v4 = g_WOL_ConnectionToken; /*0x7a057e*/
          g_WOL_ObjectState = v7; /*0x7a0586*/
          dword_B76AD4 = v6; /*0x7a058c*/
        }
        if ( v4 >= v6 ) /*0x7a0594*/
        {
          int v9 = 2 * v4; /*0x7a0596*/
          if ( 2 * v4 < 10 ) /*0x7a059c*/
            v9 = 10; /*0x7a059e*/
          void * v10 = __2_YAPAXI_Z(4 * v9); /*0x7a05b2*/
          memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x7a05c0*/
          void * v11 = g_WOL_ObjectState; /*0x7a05c9*/
          if ( g_WOL_ObjectState ) /*0x7a05d0*/
          {
            qmemcpy(v10, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a05dc*/
            v11 = g_WOL_ObjectState; /*0x7a05de*/
            v5 = v13; /*0x7a05e3*/
          }
          __3_YAXPAX_Z(v11); /*0x7a05e8*/
          v4 = g_WOL_ConnectionToken; /*0x7a05ed*/
          g_WOL_ObjectState = v10; /*0x7a05f5*/
          dword_B76AD4 = v9; /*0x7a05fb*/
        }
        if ( v5 < v4 ) /*0x7a0603*/
        {
          memcpy((char *)g_WOL_ObjectState + 4 * v5 + 4, (char *)g_WOL_ObjectState + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x7a0620*/
          v4 = g_WOL_ConnectionToken; /*0x7a0625*/
        }
        v12 = (char **)((char *)g_WOL_ObjectState + 4 * v5); /*0x7a0633*/
        if ( v12 ) /*0x7a0638*/
        {
          String::AssignFromPtr(v12, (const char **)&v14); /*0x7a063f*/
          v4 = g_WOL_ConnectionToken; /*0x7a0644*/
        }
        g_WOL_ConnectionToken = v4 + 1; /*0x7a064e*/
        DeleteAndZero(&v14); /*0x7a0653*/
        v2 = v16; /*0x7a0658*/
        v1 = v15; /*0x7a065c*/
      }
      result = g_WOL_State; /*0x7a0660*/
      ++v1; /*0x7a0665*/
      v2 += 108; /*0x7a0666*/
      v15 = v1; /*0x7a066b*/
      v16 = v2; /*0x7a066f*/
    }
    while ( v1 < (int)g_WOL_State ); /*0x7a0673*/
  }
  return result; /*0x7a067b*/
}
}
} // namespace gamemd

// 0x7A0690
namespace gamemd {
void WOL_RequestMatch()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v0; // eax
  int i; // esi
  char **v10; // eax
  wchar_t *String; // eax
  char **v12; // eax
  char **v13; // eax
  char **v17; // eax
  char **v19; // eax
  char **v20; // eax
  char **v22; // eax
  char **v23; // eax
  char **v24; // eax
  void **v31; // [esp+20h] [ebp-104h] BYREF
  void **v33; // [esp+28h] [ebp-FCh] BYREF
  __int16 v38; // [esp+3Eh] [ebp-E6h] BYREF
  DeleteAndZero::Alt2((void **)&dword_B76AC4); /*0x7a069f*/
  v0 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a06a9*/
  if ( v0 ) /*0x7a06b2*/
    CloseDialog(v0, 0); /*0x7a06b8*/
  g_NetworkLobbyState = 0; /*0x7a06bd*/
  Network::Init(); /*0x7a06c3*/
  if ( (int)g_WOL_State < 2 ) /*0x7a06cf*/
    goto LABEL_17; /*0x7a06cf*/
  for ( i = 0; i < g_WOL_ConnectionToken; ++i ) /*0x7a06de*/
    DeleteAndZero((void **)g_WOL_ObjectState + i); /*0x7a06e8*/
  int v2 = 0; /*0x7a06fc*/
  for ( g_WOL_ConnectionToken = 0; v2 < g_WOL_LoginPool; ++v2 ) /*0x7a0706*/
    DeleteAndZero((void **)dword_B76978 + v2); /*0x7a0711*/
  g_WOL_LoginPool = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(); /*0x7a072c*/
  _BYTE v42[108]; // [esp+B8h] [ebp-6Ch] BYREF
  memset(v42, 0, sizeof(v42)); /*0x7a074b*/
  int v3 = -1; /*0x7a074d*/
  Debug::Log(); /*0x7a0750*/
  int v4 = 0; /*0x7a075e*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  char * v5 = (char *)g_WOL_ConnectionFlags; /*0x7a0764*/
  do /*0x7a0794*/
  {
    if ( v4 >= 0 && v4 < (int)g_WOL_State ) /*0x7a0770*/
      qmemcpy(v42, v5, sizeof(v42)); /*0x7a0780*/
    if ( (v42[0] & 1) != 0 ) /*0x7a078a*/
      v3 = v4; /*0x7a078c*/
    ++v4; /*0x7a078e*/
    v5 += 108; /*0x7a078f*/
  }
  while ( v4 < (int)g_WOL_State ); /*0x7a0794*/
  if ( v3 == -1 ) /*0x7a0799*/
  {
LABEL_17:
    g_WOL_GameListState = 1; /*0x7a079e*/
    g_WOL_IdleHandler = 0; /*0x7a07a8*/
    g_WOL_GameProcessState = -1; /*0x7a07ae*/
    g_WOL_GameListPool = time(0); /*0x7a07c0*/
    return 0; /*0x7a07d1*/
  }
  _DWORD v41[27]; // [esp+4Ch] [ebp-D8h] BYREF
  memset(v41, 0, sizeof(v41)); /*0x7a07e1*/
  if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x7a07e7*/
    qmemcpy(v41, (char *)g_WOL_ConnectionFlags + 108 * v3, sizeof(v41)); /*0x7a0802*/
  v41[8] = 0; /*0x7a0808*/
  int v36 = 0; /*0x7a080c*/
  char v37 = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL(&v36); /*0x7a0815*/
  ComPtr::Constructor(&v33); /*0x7a081e*/
  v33 = &vt_rc_ptr_PlayerProfile; /*0x7a082c*/
  if ( Flag::IsNot2(&v36) ) /*0x7a0830*/
  {
    _DWORD * v7 = LoadPlayerProfile(&v31, (const char **)&g_WebBrowser); /*0x7a0842*/
    ComPtr::Set(&v33, v7[1]); /*0x7a084f*/
    v31 = &vt_rc_ptr_PlayerProfile; /*0x7a0858*/
    ComPtr::Release(&v31); /*0x7a085c*/
  }
  else
  {
    ComPtr::Set(&v33, dword_B75E4C); /*0x7a086d*/
  }
  int v34; // [esp+2Ch] [ebp-F8h]
  int v8 = *(_DWORD *)(v34 + 28); /*0x7a087b*/
  void *v35; // [esp+30h] [ebp-F4h] BYREF
  String::Assign((char **)&v35, unk_84D1F0); /*0x7a0882*/
  void *v29; // [esp+18h] [ebp-10Ch] BYREF
  unknown_libname_73(&v29); /*0x7a088b*/
  if ( g_GameOptionsFlags != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt(&v35, unk_84D1E4); /*0x7a08a6*/
  int v9 = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ComPtr::Constructor(&v31); /*0x7a08b6*/
  v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a08c4*/
  ComPtr::Set(&v31, *(_DWORD *)(v9 + 4)); /*0x7a08cc*/
  int v32; // [esp+24h] [ebp-100h]
  if ( v32 ) /*0x7a08d7*/
  {
    if ( *(_DWORD *)(v32 + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt(&v29, unk_84D1DC); /*0x7a097a*/
      if ( v8 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(_DWORD *)(v32 + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = 0; /*0x7a08f8*/
        g_WOL_IdleHandler = 0; /*0x7a08fe*/
        g_WOL_GameProcessState = -1; /*0x7a0904*/
        g_WOL_GameListPool = time(0); /*0x7a091a*/
        v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a091f*/
        ComPtr::Release(&v31); /*0x7a0923*/
        DeleteAndZero(&v29); /*0x7a092c*/
        DeleteAndZero(&v35); /*0x7a0935*/
        v33 = &vt_rc_ptr_PlayerProfile; /*0x7a093e*/
        ComPtr::Release(&v33); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt(&v29, unk_84D1D4); /*0x7a0961*/
      if ( (unsigned int)v8 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v8 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt(&v29, unk_84D1DC); /*0x7a08e2*/
LABEL_34:
  String::Append((const char **)&v29, unk_84D1CC); /*0x7a0987*/
  void * v28 = FromStringInt((char **)&v28, *(int *)g_GameDifficulty); /*0x7a099f*/
  String::Append2((const char **)&v29, v10); /*0x7a09a9*/
  DeleteAndZero(&v28); /*0x7a09b2*/
  v31 = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7a09bb*/
  ComPtr::Release(&v31); /*0x7a09bf*/
LABEL_35:
  String = GetStringCSF(DataGlobal_84D1B8, 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)String); /*0x7a09e6*/
  void *v27; // [esp+10h] [ebp-114h] BYREF
  String::AssignFromPtr((char **)&v27, (const char **)&v35); /*0x7a09f7*/
  String::Append((const char **)&v27, DataGlobal_84D1B0); /*0x7a0a05*/
  v12 = FromStringInt((char **)&v28, v8); /*0x7a0a10*/
  String::Append2((const char **)&v27, v12); /*0x7a0a1a*/
  DeleteAndZero(&v28); /*0x7a0a23*/
  String::Append((const char **)&v27, DataGlobal_84D1A8); /*0x7a0a31*/
  v13 = FromStringInt((char **)&v28, *(_DWORD *)(v34 + 32)); /*0x7a0a41*/
  String::Append2((const char **)&v27, v13); /*0x7a0a4b*/
  DeleteAndZero(&v28); /*0x7a0a54*/
  String::Append((const char **)&v27, DataGlobal_84D1A0); /*0x7a0a62*/
  if ( *(_BYTE *)(v34 + 56) ) /*0x7a0a6b*/
    String::Append((const char **)&v27, DataGlobal_831898); /*0x7a0a77*/
  else
    String::Append((const char **)&v27, DataGlobal_82BFAC); /*0x7a0a82*/
  void *v30; // [esp+1Ch] [ebp-108h] BYREF
  String::AssignFromPtr((char **)&v30, (const char **)&g_WebBrowser); /*0x7a0a90*/
  String::ToLower((const char **)&v30); /*0x7a0a99*/
  int v14 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0abd*/
  if ( v14 ) /*0x7a0ac2*/
  {
    while ( !String::Compare((const char **)v14, (const char **)&v30) ) /*0x7a0ad6*/
    {
      v14 = *(_DWORD *)(v14 + 8); /*0x7a0ad8*/
      if ( !v14 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    int v15 = 0; /*0x7a0ae9*/
    if ( dword_B76534 ) /*0x7a0aed*/
    {
      int v16 = *((_DWORD *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0b0e*/
      if ( v16 ) /*0x7a0b13*/
      {
        while ( !String::Compare((const char **)v16, (const char **)&v30) ) /*0x7a0b23*/
        {
          v16 = *(_DWORD *)(v16 + 8); /*0x7a0b25*/
          if ( !v16 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v16 != -4 ) /*0x7a0b37*/
          v15 = *(_DWORD *)(v16 + 4); /*0x7a0b39*/
      }
    }
LABEL_49:
    String::Append((const char **)&v27, DataGlobal_84D198); /*0x7a0b3b*/
    v17 = FromStringInt((char **)&v28, v15); /*0x7a0b4f*/
    String::Append2((const char **)&v27, v17); /*0x7a0b59*/
    DeleteAndZero(&v28); /*0x7a0b62*/
  }
LABEL_50:
  String::Append((const char **)&v27, DataGlobal_84D190); /*0x7a0b67*/
  int v18 = Performance::Profile(); /*0x7a0b75*/
  v19 = FromStringInt((char **)&v28, v18); /*0x7a0b80*/
  String::Append2((const char **)&v27, v19); /*0x7a0b8a*/
  DeleteAndZero(&v28); /*0x7a0b93*/
  String::Append((const char **)&v27, DataGlobal_84D188); /*0x7a0ba1*/
  v20 = FromStringInt((char **)&v28, g_CommandLineFlags); /*0x7a0bb0*/
  String::Append2((const char **)&v27, v20); /*0x7a0bba*/
  DeleteAndZero(&v28); /*0x7a0bc3*/
  int v39; // [esp+40h] [ebp-E4h] BYREF
  int v40; // [esp+48h] [ebp-DCh] BYREF
  Network::GetAddress(DataGlobal_A8DBC0, &v40, (int)&v39, &v38); /*0x7a0bdc*/
  int v21 = v39; /*0x7a0be1*/
  String::Append((const char **)&v27, DataGlobal_84D180); /*0x7a0bee*/
  v22 = FromStringInt((char **)&v28, v21); /*0x7a0bf9*/
  String::Append2((const char **)&v27, v22); /*0x7a0c03*/
  DeleteAndZero(&v28); /*0x7a0c0c*/
  String::Append((const char **)&v27, DataGlobal_84D178); /*0x7a0c1a*/
  v23 = FromStringInt((char **)&v28, (unsigned __int16)DataGlobal_ABFEC8); /*0x7a0c2f*/
  String::Append2((const char **)&v27, v23); /*0x7a0c39*/
  DeleteAndZero(&v28); /*0x7a0c42*/
  String::Append((const char **)&v27, stru_84D170); /*0x7a0c50*/
  v24 = FromStringInt((char **)&v28, DataGlobal_A8E228); /*0x7a0c5f*/
  String::Append2((const char **)&v27, v24); /*0x7a0c69*/
  DeleteAndZero(&v28); /*0x7a0c72*/
  String::Append2((const char **)&v27, (char **)&v29); /*0x7a0c80*/
  int v25 = *(_DWORD *)ppv; /*0x7a0c8e*/
  char * v26 = String::GetOrEmpty((char **)&v27); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, _DWORD *, char *))(v25 + 48))(ppv, v41, v26); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(); /*0x7a0ccd*/
  DeleteAndZero(&v30); /*0x7a0cd6*/
  DeleteAndZero(&v27); /*0x7a0cdf*/
  DeleteAndZero(&v29); /*0x7a0ce8*/
  DeleteAndZero(&v35); /*0x7a0cf1*/
  v33 = &vt_rc_ptr_PlayerProfile; /*0x7a0cfa*/
  ComPtr::Release(&v33); /*0x7a0cfe*/
  return 1; /*0x7a07c7*/
}
}
} // namespace gamemd

// 0x7A0DD0
namespace gamemd {
void E4Recv_7A0DD0::sub_7A0DD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    int v2 = 0; /*0x7a0dda*/
    v3 = (char **)&g_NetworkPlayerName; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), this + 36) ) /*0x7a0e1a*/
    {
      ++v3; /*0x7a0e1c*/
      ++v2; /*0x7a0e1f*/
      if ( (int)v3 >= (int)&g_PlayerNameListEnd ) /*0x7a0e26*/
        return; /*0x7a0e26*/
    }
    GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0e2d*/
    if ( GameUI ) /*0x7a0e34*/
      UpdateLobbyGraphicsWOL(GameUI, v2, -1); /*0x7a0e3c*/
  }
}
}
} // namespace gamemd

// 0x7A1060
namespace gamemd {
void WOL_ProcessPingRequests()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  ULONG S_addr; // ebx
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  char v11 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
    Debug::Log(); /*0x7a1098*/
    result = g_WOL_ConnectionToken; /*0x7a109d*/
    if ( g_WOL_ConnectionToken ) /*0x7a10a7*/
    {
  void *v12; // [esp+14h] [ebp-78h] BYREF
      S_addr = v15[6].S_un.S_addr; /*0x7a10ad*/
      while ( 1 ) /*0x7a10b1*/
      {
        if ( g_WOL_LoginPool >= 10 ) /*0x7a10b8*/
          return result; /*0x7a10b8*/
        result = v11; /*0x7a10be*/
        if ( v11 ) /*0x7a10c4*/
          return result; /*0x7a10c4*/
        unknown_libname_73(&v12); /*0x7a10ce*/
        if ( g_WOL_ConnectionToken > 0 ) /*0x7a10da*/
          String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a10e7*/
        String::GetOrEmpty((char **)&v12); /*0x7a10f0*/
        Debug::Log(); /*0x7a10fb*/
        char * v2 = String::GetOrEmpty((char **)&v12); /*0x7a1107*/
  void *v13; // [esp+18h] [ebp-74h] BYREF
        String::Assign((char **)&v13, v2); /*0x7a1111*/
        signed int v3 = g_WOL_State; /*0x7a1116*/
        char * v4 = 0; /*0x7a111b*/
        int v5 = 0; /*0x7a111d*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a1121*/
        {
LABEL_15:
          v5 = -1; /*0x7a115c*/
        }
        else
        {
          int v6 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a112b*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1132*/
            char * v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a113d*/
            if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1143*/
              break; /*0x7a1143*/
            v3 = g_WOL_State; /*0x7a114f*/
            ++v5; /*0x7a1154*/
            v6 += 108; /*0x7a1155*/
            if ( v5 >= (int)g_WOL_State ) /*0x7a115a*/
              goto LABEL_15; /*0x7a115a*/
          }
        }
        DeleteAndZero(&v13); /*0x7a1163*/
        if ( v5 == -1 ) /*0x7a116b*/
        {
          if ( g_WOL_ConnectionToken > 0 ) /*0x7a127f*/
          {
            String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a128c*/
            int v10 = 0; /*0x7a1296*/
            if ( g_WOL_ConnectionToken ) /*0x7a129a*/
            {
              if ( g_WOL_ConnectionToken <= 0 ) /*0x7a129c*/
                v10 = g_WOL_ConnectionToken - 1; /*0x7a129e*/
              DeleteAndZero((void **)g_WOL_ObjectState + v10); /*0x7a12a9*/
              memcpy( /*0x7a12d2*/
                (char *)g_WOL_ObjectState + 4 * v10,
                (char *)g_WOL_ObjectState + 4 * v10 + 4,
                4 * (g_WOL_ConnectionToken + 0x3FFFFFFF * (v10 + 1)));
              --g_WOL_ConnectionToken; /*0x7a12e0*/
              if ( 3 * g_WOL_ConnectionToken <= dword_B76AD4 ) /*0x7a12ef*/
                VectorClass::Shrink(&g_WOL_ConnectionToken); /*0x7a12f6*/
            }
          }
          goto LABEL_36; /*0x7a12f6*/
        }
        if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a117b*/
        {
          qmemcpy(v15, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v15)); /*0x7a1194*/
          S_addr = v15[6].S_un.S_addr; /*0x7a1196*/
        }
        if ( !S_addr ) /*0x7a119c*/
          break; /*0x7a119c*/
        String::GetOrEmpty((char **)&v12); /*0x7a11a6*/
        Debug::Log(); /*0x7a11b1*/
        int v8 = *(_DWORD *)g_UIPointerTable; /*0x7a11c3*/
        char * v9 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
  int v14; // [esp+1Ch] [ebp-70h] BYREF
        if ( !(*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v9, 1000, &v14) && v14 >= 0 ) /*0x7a11e5*/
        {
          StringVector::Insert(&g_WOL_LoginPool, (const char **)&v12, g_WOL_LoginPool); /*0x7a11f8*/
          if ( g_WOL_ConnectionToken > 0 ) /*0x7a1204*/
          {
            String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a1210*/
            DynamicArray::Remove(&g_WOL_ConnectionToken, 0); /*0x7a121c*/
          }
LABEL_36:
          String::GetOrEmpty((char **)&v12); /*0x7a12fb*/
          Debug::Log(); /*0x7a130a*/
          goto LABEL_37; /*0x7a130a*/
        }
        v11 = 1; /*0x7a1235*/
LABEL_37:
        DeleteAndZero(&v12); /*0x7a1312*/
        result = g_WOL_ConnectionToken; /*0x7a131b*/
        if ( !g_WOL_ConnectionToken ) /*0x7a1322*/
          return result; /*0x7a1322*/
      }
      if ( g_WOL_ConnectionToken > 0 ) /*0x7a1246*/
      {
        String::Reassign((char **)&v12, (const char **)g_WOL_ObjectState); /*0x7a1253*/
        DynamicArray::Remove(&g_WOL_ConnectionToken, 0); /*0x7a125f*/
      }
      goto LABEL_36; /*0x7a125f*/
    }
  }
  return result; /*0x7a1328*/
}
}
} // namespace gamemd

// 0x7A1330
namespace gamemd {
void UpdateWOLLobbyPings()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char **v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  char **v16; // [esp-8h] [ebp-B4h]
  char **v17; // [esp+0h] [ebp-ACh]

  _DWORD v29[27]; // [esp+40h] [ebp-6Ch] BYREF
  memset(v29, 0, sizeof(v29)); /*0x7a1342*/
  int v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
  void *v19; // [esp+18h] [ebp-94h] BYREF
    String::Assign((char **)&v19, aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( g_WOL_LoginPool ) /*0x7a1383*/
    {
      int v0 = v29[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
  void *v18; // [esp+14h] [ebp-98h] BYREF
        unknown_libname_73(&v18); /*0x7a1392*/
        int v1 = g_WOL_LoginPool - 1; /*0x7a139c*/
        if ( g_WOL_LoginPool - 1 >= 0 && v1 < g_WOL_LoginPool ) /*0x7a13a9*/
        {
          String::Reassign((char **)&v18, (const char **)dword_B76978 + v1); /*0x7a13b9*/
          if ( g_WOL_LoginPool ) /*0x7a13c5*/
          {
            if ( v1 >= g_WOL_LoginPool ) /*0x7a13c9*/
              v1 = g_WOL_LoginPool - 1; /*0x7a13cb*/
            Object::DtorWithDelete((void **)dword_B76978 + v1, 0); /*0x7a13d8*/
            memcpy( /*0x7a1401*/
              (char *)dword_B76978 + 4 * v1,
              (char *)dword_B76978 + 4 * v1 + 4,
              4 * (g_WOL_LoginPool + 0x3FFFFFFF * (v1 + 1)));
            --g_WOL_LoginPool; /*0x7a140f*/
            if ( 3 * g_WOL_LoginPool <= dword_B76974 ) /*0x7a141e*/
              VectorClass::Shrink(&g_WOL_LoginPool); /*0x7a1425*/
          }
        }
        String::GetOrEmpty((char **)&v18); /*0x7a142e*/
        Debug::Log(); /*0x7a1439*/
        char * v2 = String::GetOrEmpty((char **)&v18); /*0x7a1445*/
  void *v22; // [esp+24h] [ebp-88h] BYREF
        String::Assign((char **)&v22, v2); /*0x7a144f*/
        signed int v3 = g_WOL_State; /*0x7a1454*/
        char * v4 = 0; /*0x7a1459*/
        int v5 = 0; /*0x7a145b*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a145f*/
        {
LABEL_18:
          v5 = -1; /*0x7a149b*/
        }
        else
        {
          int v6 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a1469*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1471*/
            char * v7 = String::GetOrEmpty_Alt((char **)&v22); /*0x7a147c*/
            if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1482*/
              break; /*0x7a1482*/
            v3 = g_WOL_State; /*0x7a148e*/
            ++v5; /*0x7a1493*/
            v6 += 108; /*0x7a1494*/
            if ( v5 >= (int)g_WOL_State ) /*0x7a1499*/
              goto LABEL_18; /*0x7a1499*/
          }
        }
        DeleteAndZero(&v22); /*0x7a14a2*/
        if ( v5 == -1 ) /*0x7a14aa*/
          goto LABEL_27; /*0x7a14aa*/
        if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a14ca*/
        {
          qmemcpy(v29, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v29)); /*0x7a14e4*/
          v0 = v29[6]; /*0x7a14e6*/
        }
        if ( !v0 /*0x7a1522*/
  int v20; // [esp+1Ch] [ebp-90h] BYREF
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v0, &v20),
              v20 == -1) )
        {
LABEL_27:
          String::GetOrEmpty((char **)&v18); /*0x7a15dc*/
          Debug::Log(); /*0x7a15e7*/
        }
        else
        {
          String::GetOrEmpty((char **)&v18); /*0x7a152d*/
          Debug::Log(); /*0x7a1538*/
          void * v27 = String::Assign((char **)&v27, Control); /*0x7a1556*/
          void * v25 = FromStringInt((char **)&v25, v20); /*0x7a1565*/
          void * v24 = String::Assign((char **)&v24, Delimiter); /*0x7a1570*/
          void * v26 = String::Concat((const char **)&v18, (char **)&v26, v8); /*0x7a157f*/
          void * v28 = String::Concat((const char **)v9, (char **)&v28, v16); /*0x7a1586*/
          void * v23 = String::Concat((const char **)v10, (char **)&v23, v17); /*0x7a158d*/
          String::Append2((const char **)&v19, v11); /*0x7a1597*/
          DeleteAndZero(&v23); /*0x7a15a0*/
          DeleteAndZero(&v28); /*0x7a15a9*/
          DeleteAndZero(&v26); /*0x7a15b2*/
          DeleteAndZero(&v24); /*0x7a15bb*/
          DeleteAndZero(&v25); /*0x7a15c4*/
          DeleteAndZero(&v27); /*0x7a15cd*/
          ++v21; /*0x7a15d2*/
        }
        DeleteAndZero(&v18); /*0x7a15f3*/
      }
      while ( g_WOL_LoginPool ); /*0x7a15ff*/
    }
    int v12 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && (int)g_WOL_State > 0 ) /*0x7a161d*/
    {
      char * v13 = (char *)g_WOL_ConnectionFlags; /*0x7a161f*/
      while ( 1 ) /*0x7a1625*/
      {
        if ( v12 >= 0 && v12 < (int)g_WOL_State ) /*0x7a162b*/
          qmemcpy(&g_IsMultiplayerSession, v13, 0x6Cu); /*0x7a1639*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7a1642*/
          break; /*0x7a1642*/
        ++v12; /*0x7a1644*/
        v13 += 108; /*0x7a1645*/
        if ( v12 >= (int)g_WOL_State ) /*0x7a164a*/
          goto LABEL_40; /*0x7a164a*/
      }
      if ( &g_IsMultiplayerSession ) /*0x7a1655*/
      {
        int v14 = *(_DWORD *)ppv; /*0x7a165d*/
        char * v15 = String::GetOrEmpty((char **)&v19); /*0x7a1663*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(v14 + 48))(ppv, &g_IsMultiplayerSession, v15); /*0x7a1675*/
        String::GetOrEmpty((char **)&v19); /*0x7a167c*/
        Debug::Log(); /*0x7a1687*/
      }
    }
LABEL_40:
    DeleteAndZero(&v19); /*0x7a168f*/
  }
}
}
} // namespace gamemd

// 0x7A16B0
namespace gamemd {
void HandleWOLMatchMessage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x7A1BB0
namespace gamemd {
void WOL_MatchGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *String; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t *v11; // eax
  char **v12; // eax
  wchar_t *v13; // eax
  HANDLE *v14; // esi
  signed int v15; // eax
  int v16; // ebx
  char *v17; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  char **v23; // [esp-4h] [ebp-230h]
  char *v24; // [esp-4h] [ebp-230h]
  void *v25; // [esp+10h] [ebp-21Ch] BYREF
  int v26; // [esp+14h] [ebp-218h] BYREF
  int v27; // [esp+18h] [ebp-214h] BYREF
  char *v28; // [esp+1Ch] [ebp-210h]
  char v29[268]; // [esp+20h] [ebp-20Ch] BYREF
  char Destination[256]; // [esp+12Ch] [ebp-100h] BYREF

  int v0 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, ::Destination, 0x100u); /*0x7a1bd9*/
  strtok(Destination, DataGlobal_8318B8); /*0x7a1beb*/
  char * v1 = strtok(0, Delimiter); /*0x7a1bfb*/
  v28 = v1; /*0x7a1c03*/
  strtok(0, Delimiter); /*0x7a1c07*/
  strtok(0, Delimiter); /*0x7a1c12*/
  strtok(0, Delimiter); /*0x7a1c1d*/
  strtok(0, Delimiter); /*0x7a1c28*/
  strtok(0, Delimiter); /*0x7a1c33*/
  strtok(0, Delimiter); /*0x7a1c41*/
  strtok(0, Delimiter); /*0x7a1c4c*/
  char * v2 = strtok(0, Delimiter); /*0x7a1c57*/
  char * v3 = v2; /*0x7a1c61*/
  if ( !v1 || !v2 ) /*0x7a1c6b*/
  {
    String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  char * v4 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c76*/
  if ( _strcmpi(v1, v4) ) /*0x7a1c7d*/
  {
    char * v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c8e*/
    if ( _strcmpi(v3, v5) ) /*0x7a1c95*/
    {
      String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28857); /*0x7a1ca6*/
LABEL_35:
      Dialog::ShowMessage(2146559, (size_t)String); /*0x7a20c5*/
      g_WOL_GameListState = 0; /*0x7a20d0*/
      g_WOL_IdleHandler = 3; /*0x7a20d6*/
      g_WOL_GameProcessState = 20; /*0x7a20e0*/
LABEL_36:
      g_WOL_GameListPool = time(0); /*0x7a20ea*/
      return 0; /*0x7a20f8*/
    }
  }
  char * v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1cb0*/
  if ( !_strcmpi(v1, v7) ) /*0x7a1cb7*/
  {
    String::Assign_Alt((void **)&dword_B76AC4, v3); /*0x7a1ccd*/
    MatchGameWOL_Delete(); /*0x7a1cd2*/
    v8 = GetStringCSF(aWolMatchcreati, 0, g_Str_File_wonline_cpp, 28867); /*0x7a1ce8*/
    Dialog::ShowMessage(-1, (size_t)v8); /*0x7a1cf5*/
    byte_B77DEC = 0; /*0x7a1d00*/
    g_WOL_GameListState = 0; /*0x7a1d07*/
    g_WOL_IdleHandler = 6; /*0x7a1d0d*/
    g_WOL_GameProcessState = 30; /*0x7a1d17*/
    g_WOL_GameListPool = time(0); /*0x7a1d25*/
    if ( CreateGameWOL(30, (int)v3) ) /*0x7a1d2a*/
    {
      v9 = GetStringCSF(aWolMatchwaitin, 0, g_Str_File_wonline_cpp, 28871); /*0x7a1d45*/
      Dialog::ShowMessage(-1, (size_t)v9, v3); /*0x7a1d51*/
      return 1; /*0x7a1d65*/
    }
    v11 = GetStringCSF(aWolMatcherrorc, 0, g_Str_File_wonline_cpp, 28878); /*0x7a1d77*/
    Dialog::ShowMessage(2146559, (size_t)v11); /*0x7a1d82*/
    g_WOL_GameListState = 0; /*0x7a1d87*/
    g_WOL_IdleHandler = 2; /*0x7a1d8d*/
    g_WOL_GameProcessState = 30; /*0x7a1d97*/
    goto LABEL_36; /*0x7a1d9d*/
  }
  String::Assign_Alt((void **)&dword_B76AC4, v1); /*0x7a1da8*/
  MatchGameWOL_Delete(); /*0x7a1dad*/
  v23 = String::Assign((char **)&v27, aSGame); /*0x7a1dc4*/
  v12 = String::Assign((char **)&v26, v1); /*0x7a1dcb*/
  String::Concat((const char **)v12, (char **)&v25, v23); /*0x7a1dd2*/
  DeleteAndZero((void **)&v26); /*0x7a1ddb*/
  DeleteAndZero((void **)&v27); /*0x7a1de4*/
  v13 = GetStringCSF(aWolMatchattemp, 0, g_Str_File_wonline_cpp, 28885); /*0x7a1dfb*/
  Dialog::ShowMessage(-1, (size_t)v13, v1); /*0x7a1e08*/
  g_WOL_GameListState = 0; /*0x7a1e0e*/
  g_WOL_IdleHandler = 7; /*0x7a1e14*/
  g_WOL_GameProcessState = 30; /*0x7a1e1e*/
  g_WOL_GameListPool = time(0); /*0x7a1e30*/
  v26 = 1; /*0x7a1e35*/
  while ( 1 ) /*0x7a1e3d*/
  {
    if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x7a1e4c*/
      goto LABEL_28; /*0x7a1e4c*/
    v14 = &Handles; /*0x7a1e52*/
    do /*0x7a1e69*/
      ResetEvent(*v14++); /*0x7a1e5a*/
    while ( (int)v14 < (int)g_WOL_RequestObject ); /*0x7a1e69*/
    v27 = 41; /*0x7a1e73*/
    Debug::Log(); /*0x7a1e7b*/
    if ( (*(int (__stdcall **)(LPVOID, int, _DWORD))(*(_DWORD *)ppv + 24))(ppv, v27, 0) ) /*0x7a1e91*/
    {
      SetEvent(Handles); /*0x7a1f54*/
LABEL_28:
      v19 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28889); /*0x7a1f5a*/
      Dialog::ShowMessage(2146559, (size_t)v19, v1); /*0x7a1f77*/
      g_WOL_GameListState = 0; /*0x7a1f7c*/
      g_WOL_IdleHandler = 3; /*0x7a1f82*/
      g_WOL_GameProcessState = 20; /*0x7a1f8c*/
LABEL_29:
      g_WOL_GameListPool = time(0); /*0x7a1f96*/
      DeleteAndZero(&v25); /*0x7a1fa8*/
      return 0; /*0x7a1fb9*/
    }
    Network_Helper_7ADB00(&v27, g_WOL_RequestState); /*0x7a1eac*/
    if ( !RequestChannelListWOL() ) /*0x7a1eb8*/
      goto LABEL_28; /*0x7a1eb8*/
    memset(v29, 0, sizeof(v29)); /*0x7a1ec9*/
    v15 = g_WOL_ChatState; /*0x7a1ecb*/
    if ( (int)g_WOL_ChatState > 0 ) /*0x7a1ed2*/
      break; /*0x7a1ed2*/
LABEL_25:
    Game::ProcessIdle(); /*0x7a1f27*/
    Sleep(0x64u); /*0x7a1f2e*/
    if ( v26++ >= 30 ) /*0x7a1f3b*/
    {
      v22 = GetStringCSF(aWolMatchgamech, 0, g_Str_File_wonline_cpp, 28915); /*0x7a2080*/
      Dialog::ShowMessage(2146559, (size_t)v22, v1); /*0x7a208b*/
      g_WOL_GameListState = 0; /*0x7a2090*/
      g_WOL_IdleHandler = 2; /*0x7a2096*/
      g_WOL_GameProcessState = 30; /*0x7a20a0*/
      goto LABEL_29; /*0x7a20aa*/
    }
  }
  v16 = 0; /*0x7a1ed4*/
  while ( 1 ) /*0x7a1ed6*/
  {
    if ( v16 >= 0 && v0 < v15 ) /*0x7a1edc*/
      qmemcpy(v29, (char *)g_WOL_ConnectionHandler + v16, sizeof(v29)); /*0x7a1ef0*/
    v17 = String::GetOrEmpty((char **)&v25); /*0x7a1ef6*/
    if ( !_strcmpi(&v29[52], v17) ) /*0x7a1f01*/
      break; /*0x7a1f01*/
    v15 = g_WOL_ChatState; /*0x7a1f11*/
    ++v0; /*0x7a1f16*/
    v16 += 268; /*0x7a1f17*/
    if ( v0 >= (int)g_WOL_ChatState ) /*0x7a1f1f*/
    {
      v1 = v28; /*0x7a1f21*/
      v0 = 0; /*0x7a1f25*/
      goto LABEL_25; /*0x7a1f25*/
    }
  }
  if ( ValidateJoinWOL(0, (int)v29, v16, v0) ) /*0x7a1fc0*/
  {
    v24 = v28; /*0x7a1fcf*/
    v20 = GetStringCSF(aWolMatchjoined, 0, g_Str_File_wonline_cpp, 28899); /*0x7a1fdf*/
    Dialog::ShowMessage(-1, (size_t)v20, v24); /*0x7a1fec*/
    g_WOL_GameListState = 0; /*0x7a1ff3*/
    g_WOL_IdleHandler = 9; /*0x7a1ffd*/
    g_WOL_GameProcessState = 90; /*0x7a2007*/
    g_WOL_GameListPool = time(0); /*0x7a201d*/
    DeleteAndZero(&v25); /*0x7a2022*/
    return 1; /*0x7a2027*/
  }
  else
  {
    v21 = GetStringCSF(aWolMatcherrorj, 0, g_Str_File_wonline_cpp, 28907); /*0x7a2045*/
    Dialog::ShowMessage(2146559, (size_t)v21); /*0x7a2050*/
    DeleteAndZero(&v25); /*0x7a205c*/
    return 0; /*0x7a2061*/
  }
}
}
} // namespace gamemd

// 0x7A2830
namespace gamemd {
int E4Recv_7A2830::sub_7A2830()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = g_WOL_State; /*0x7a2833*/
  int v2 = 0; /*0x7a283a*/
  signed int v3 = 0; /*0x7a283c*/
  _DWORD v6[27]; // [esp+14h] [ebp-6Ch] BYREF
  v6[0] = 0; /*0x7a2846*/
  if ( (int)g_WOL_State > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_ConnectionFlags + v2, sizeof(v6)); /*0x7a2865*/
      char * v4 = String::GetOrEmpty_Alt(this); /*0x7a2870*/
      if ( !_strcmpi(v4, &v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_State; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= (int)g_WOL_State ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (__stdcall **)(LPVOID, _DWORD *))(*(_DWORD *)ppv + 84))(ppv, v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/
}
}
} // namespace gamemd

// 0x7A29E0
namespace gamemd {
void BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  wchar_t *StringCSF; // eax
  HWND DlgItem; // eax
  INIClass *v7; // ecx
  INIClass *v8; // ecx
  char **v12; // ecx
  BlowStraw *v14; // esi
  char **v15; // ecx
  BlowStraw *v17; // esi
  char **v18; // ecx
  CampaignScore *v20; // [esp+0h] [ebp-1F0h]
  LONG WindowLongA; // [esp+14h] [ebp-1DCh]
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7a2a12*/
  result = BaseDialogProc((SkirmishDialog *)hWnd, a2, a3, a4); /*0x7a2a25*/
  if ( !result ) /*0x7a2a2c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x7a2a3e*/
    if ( a2 <= 0x2B ) /*0x7a2a42*/
    {
      switch ( a2 ) /*0x7a2a44*/
      {
        case 0x2Bu: /*0x7a2a44*/
          Dialog::Resize((char *)a4); /*0x7a2a91*/
          return 1; /*0x7a2aa5*/
        case 0xFu: /*0x7a2a44*/
          Dialog::DrawBackground(hWnd); /*0x7a2a68*/
          Dialog::StopBink(hWnd); /*0x7a2a6f*/
          ValidateRect(hWnd, 0); /*0x7a2a77*/
          return 1; /*0x7a2a8c*/
        case 0x14u: /*0x7a2a44*/
          return 1; /*0x7a2a63*/
      }
      return 0; /*0x7a2a4e*/
    }
    if ( a2 != 273 ) /*0x7a2aae*/
    {
      if ( a2 == 1175 ) /*0x7a2ab6*/
      {
        char * v19 = String::GetOrEmpty(&dword_B76AC4); /*0x7a2ac6*/
        StringCSF = GetStringCSF((wchar_t *)&stru_84D68C[8], 0, (CampaignScore *)g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)StringCSF, (const wchar_t *const)v19, v20); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x7a2b0a*/
        return 0; /*0x7a2b1c*/
      }
      return 0; /*0x7a2ab6*/
    }
    if ( (unsigned __int16)a3 != 1 ) /*0x7a2b26*/
    {
      if ( (unsigned __int16)a3 == 2 ) /*0x7a2b29*/
      {
        LOBYTE(v7) = IsDlgButtonChecked(hWnd, 1785) != 1; /*0x7a2b43*/
        ReadWOLLobbyOption(v7); /*0x7a2b46*/
        (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    LOBYTE(v8) = IsDlgButtonChecked(hWnd, 1785) != 1; /*0x7a2b7a*/
    ReadWOLLobbyOption(v8); /*0x7a2b7d*/
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2b8e*/
    {
LABEL_53:
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
  char v23[108]; // [esp+18h] [ebp-1D8h] BYREF
    memset(v23, 0, sizeof(v23)); /*0x7a2ba1*/
    char * v9 = String::GetOrEmpty_Alt(&dword_B76AC4); /*0x7a2ba8*/
    strncpy(&v23[36], v9, (IUnknown *)9); /*0x7a2bb3*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 224))( /*0x7a2bc8*/
      *(&g_MatrixTransformState + 2263),
      v23);
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2bda*/
    {
LABEL_52:
      SendGameListWOL(); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
  int v21; // [esp+10h] [ebp-1E0h] BYREF
    String::AssignFromPtr((char **)&v21, (const char **)&dword_B76AC4); /*0x7a2be9*/
    int v10 = g_WindowManager; /*0x7a2bee*/
    int v11 = g_WindowManager; /*0x7a2bf3*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x7a2bff*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x7a2c06*/
      v10 = g_WindowManager; /*0x7a2c0b*/
    }
    if ( v10 >= dword_B73AAC ) /*0x7a2c16*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x7a2c1d*/
      v10 = g_WindowManager; /*0x7a2c22*/
    }
    if ( v11 < v10 ) /*0x7a2c29*/
    {
      memcpy( /*0x7a2c46*/
        &g_WOL_LoginQueue->__pad_0[4 * v11 + 4],
        (AbstractClass *)((char *)g_WOL_LoginQueue + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = g_WindowManager; /*0x7a2c4b*/
    }
    v12 = (char **)((char *)g_WOL_LoginQueue + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)&v21); /*0x7a2c65*/
      v10 = g_WindowManager; /*0x7a2c6a*/
    }
    g_WindowManager = v10 + 1; /*0x7a2c70*/
    int v13 = g_WOL_RequestManager; /*0x7a2c75*/
    v14 = (BlowStraw *)g_WOL_RequestManager; /*0x7a2c7a*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x7a2c86*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x7a2c8d*/
      v13 = g_WOL_RequestManager; /*0x7a2c92*/
    }
    if ( v13 >= dword_B76984 ) /*0x7a2c9d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x7a2ca4*/
      v13 = g_WOL_RequestManager; /*0x7a2ca9*/
    }
    if ( (int)v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy( /*0x7a2ccd*/
        &g_WOL_SessionID->__pad_0[4 * (_DWORD)v14 + 4],
        (AbstractClass *)((char *)g_WOL_SessionID + 4 * (_DWORD)v14),
        4 * (v13 + 0x3FFFFFFF * (_DWORD)v14));
      v13 = g_WOL_RequestManager; /*0x7a2cd2*/
    }
    v15 = (char **)((char *)g_WOL_SessionID + 4 * (_DWORD)v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)&v21); /*0x7a2cec*/
      v13 = g_WOL_RequestManager; /*0x7a2cf1*/
    }
    g_WOL_RequestManager = v13 + 1; /*0x7a2cf7*/
    int v16 = g_WOL_BuddyList; /*0x7a2cfc*/
    v17 = (BlowStraw *)g_WOL_BuddyList; /*0x7a2d01*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x7a2d0d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d14*/
      v16 = g_WOL_BuddyList; /*0x7a2d19*/
    }
    if ( v16 >= dword_B779B4 ) /*0x7a2d24*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x7a2d2b*/
      v16 = g_WOL_BuddyList; /*0x7a2d30*/
    }
    if ( (int)v17 < v16 ) /*0x7a2d37*/
    {
      memcpy( /*0x7a2d54*/
        &g_WOL_ChannelMgr->__pad_0[4 * (_DWORD)v17 + 4],
        (AbstractClass *)((char *)g_WOL_ChannelMgr + 4 * (_DWORD)v17),
        4 * (v16 + 0x3FFFFFFF * (_DWORD)v17));
      v16 = g_WOL_BuddyList; /*0x7a2d59*/
    }
    v18 = (char **)((char *)g_WOL_ChannelMgr + 4 * (_DWORD)v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)&v21); /*0x7a2d73*/
      v16 = g_WOL_BuddyList; /*0x7a2d78*/
    }
    g_WOL_BuddyList = v16 + 1; /*0x7a2d83*/
    if ( String::Length((const char **)&g_WOL_AuthObject) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - (_DWORD)g_WOL_ParseState) < 5 ) /*0x7a2da6*/
      {
LABEL_51:
        DeleteAndZero((int)&v21); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x7a2db1*/
    }
    if ( g_WOL_RequestManager ) /*0x7a2dbd*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, &g_WOL_AuthObject, 0) ) /*0x7a2dcf*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x7a2ddf*/
      g_WOL_ParseState = (AbstractClass *)time(0); /*0x7a2deb*/
  char v24[108]; // [esp+84h] [ebp-16Ch] BYREF
      memset(v24, 0, sizeof(v24)); /*0x7a2dfe*/
      strcpy(&v24[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x7a2e31*/
      (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 96))( /*0x7a2e43*/
        *(&g_MatrixTransformState + 2263),
        v24);
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
}
}
} // namespace gamemd

// 0x7A4C10
namespace gamemd {
void CComObject_CChatEventSink___ATL__vt_04_(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v6; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v9; // eax
  const wchar_t *v10; // ebp
  wchar_t *v11; // eax
  HWND v12; // edi
  HWND v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // eax
  CHAR Buffer[260]; // [esp+30h] [ebp-49Ch] BYREF
  wchar_t String[200]; // [esp+33Ch] [ebp-190h] BYREF

  int v3 = 0; /*0x7a4c1a*/
  if ( a2 < 0 ) /*0x7a4c22*/
    goto LABEL_16; /*0x7a4c22*/
  int v4 = a3; /*0x7a4c28*/
  if ( !a3 ) /*0x7a4c31*/
    goto LABEL_16; /*0x7a4c31*/
  dword_B77DCC = 1; /*0x7a4c37*/
  int v5 = a3; /*0x7a4c41*/
  do /*0x7a4c49*/
  {
    v5 = *(_DWORD *)(v5 + 12); /*0x7a4c43*/
    ++v3; /*0x7a4c46*/
  }
  while ( v5 ); /*0x7a4c49*/
  int v19 = v3; /*0x7a4c4b*/
  v6 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a4c54*/
  if ( v6 ) /*0x7a4c5b*/
  {
    g_WOL_ChannelList &= ~0x10u; /*0x7a4c66*/
    if ( !g_WOL_ChannelList ) /*0x7a4c6c*/
      CloseDialog(v6, 0); /*0x7a4c72*/
  }
  Current = Dialog::GetCurrent(); /*0x7a4c77*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7a4c82*/
  if ( DlgItem ) /*0x7a4c8a*/
    SetFocus(DlgItem); /*0x7a4c8d*/
  v9 = GetStringCSF(DataGlobal_84ABEC, 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
  if ( ShowDialogConfirm(v9, 4, (int)GameLoop::Thunk, 0) == 7 ) /*0x7a4cbf*/
  {
LABEL_16:
    SetEvent(Handles); /*0x7a4ea4*/
    return 0; /*0x7a4ead*/
  }
  else
  {
  _DWORD v20[3]; // [esp+24h] [ebp-4A8h] BYREF
  void *v18; // [esp+1Ch] [ebp-4B0h] BYREF
    GetCurrentDirectoryA(0x100u, Buffer); /*0x7a4ccf*/
    v10 = 0; /*0x7a4cd5*/
    while ( 1 ) /*0x7a4cef*/
    {
  char v22[260]; // [esp+134h] [ebp-398h] BYREF
      sprintf(v22, stru_84ABE4, (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
  char v23[260]; // [esp+238h] [ebp-294h] BYREF
      sprintf(v23, g_Str_Trace__s__s, (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(_DWORD *)DataGlobal_AC1174 + 12))( /*0x7a4d49*/
        DataGlobal_AC1174,
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
      v10 = (const wchar_t *)((char *)v10 + 1); /*0x7a4d4c*/
      int v17 = v19; /*0x7a4d56*/
      v11 = GetStringCSF(aTxtDownloading, 0, g_Str_File_wonline_cpp, 5526); /*0x7a4d64*/
      swprintf(String, (const size_t)v11, v10, v17); /*0x7a4d72*/
      WideString::Assign((wchar_t **)&v18, String); /*0x7a4d86*/
      SimpleDialogControl::Constructor(v20); /*0x7a4d8f*/
      v20[0] = &off_7F7624; /*0x7a4da0*/
      v12 = (HWND)CreateDialog(0xD3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_78DA30, 0); /*0x7a4dad*/
      v13 = GetDlgItem(v12, 1479); /*0x7a4dbf*/
      v14 = WideString::GetOrEmpty_Alt((wchar_t **)&v18); /*0x7a4dc1*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)v14); /*0x7a4dcf*/
      if ( MessageDialogLoopAlt(v12, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 1) == 2 ) /*0x7a4dea*/
        break; /*0x7a4dea*/
      v4 = *(_DWORD *)(v4 + 12); /*0x7a4dec*/
      v20[0] = &off_7F7624; /*0x7a4df3*/
      OwnerDrawControl::InitVtable(v20); /*0x7a4dfb*/
      DeleteAndZero::Alt(&v18); /*0x7a4e04*/
      if ( !v4 ) /*0x7a4e0b*/
      {
        v15 = GetStringCSF(aTxtGameRestart, 0, g_Str_File_wonline_cpp, 5558); /*0x7a4e28*/
        ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, 0); /*0x7a4e31*/
        SetEvent(dword_B736A4); /*0x7a4e3d*/
        SetCurrentDirectoryA(Buffer); /*0x7a4e48*/
        return 0; /*0x7a4e5a*/
      }
    }
    SetEvent(Handles); /*0x7a4e64*/
    SetCurrentDirectoryA(Buffer); /*0x7a4e6f*/
    v20[0] = &off_7F7624; /*0x7a4e79*/
    OwnerDrawControl::InitVtable(v20); /*0x7a4e81*/
    DeleteAndZero::Alt(&v18); /*0x7a4e8a*/
    return 0; /*0x7a4e92*/
  }
}
}
} // namespace gamemd

// 0x7AF640
namespace gamemd {
int E4Recv_7AF640::sub_7AF640(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = DSurface_Alternate; /*0x7af640*/
  if ( DSurface_Alternate ) /*0x7af64d*/
  {
    int v4 = *(this + 7); /*0x7af64f*/
    if ( v4 ) /*0x7af654*/
    {
  _BYTE v7[16]; // [esp+1Ch] [ebp-10h] BYREF
      _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 120))(v4, v7); /*0x7af65d*/
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)DSurface_Alternate + 20))(DSurface_Alternate, v6, 0); /*0x7af68a*/
      return (*(int (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x7af6a7*/
               DSurface_Alternate,
               v6,
               *(this + 7),
               v6,
               0,
               1);
    }
  }
  return result; /*0x7af6aa*/
}
}
} // namespace gamemd

// 0x7AF6C0
namespace gamemd {
void WorldDominationFactionDlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  wchar_t *StringCSF; // eax

  unsigned int v4 = a4; /*0x7af6c9*/
  if ( a2 == 272 && a4 ) /*0x7af6dd*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7af6e6*/
  result = BaseDialogProc(hWnd, a2, a3, v4); /*0x7af6f6*/
  if ( !result ) /*0x7af6fd*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x7af706*/
    _DWORD * v7 = WindowLongA; /*0x7af712*/
    if ( a2 > 0x111 ) /*0x7af714*/
    {
      if ( a2 == 514 ) /*0x7af82f*/
      {
        if ( WindowLongA[3] ) /*0x7af8c6*/
          (*(void (__thiscall **)(_DWORD *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7af8d4*/
      }
      else if ( a2 == 1257 && *(HWND *)v4 == hWnd ) /*0x7af84d*/
      {
        if ( WindowLongA[3] == 2 ) /*0x7af859*/
        {
          StringCSF = GetStringCSF(aWdtFactionsele_1, 0, g_Str_File_WorldDom_cpp, 176); /*0x7af895*/
        }
        else if ( WindowLongA[3] == 3 ) /*0x7af85c*/
        {
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele_0, 0, g_Str_File_WorldDom_cpp, 179); /*0x7af882*/
        }
        else
        {
          StringCSF = GetStringCSF((wchar_t *)DataGlobal_833CEC, 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
        }
        WideString::Assign((wchar_t **)&a3, StringCSF); /*0x7af89f*/
        WideString::Reassign_Alt((void **)(v4 + 8), (const wchar_t **)&a3); /*0x7af8ac*/
        DeleteAndZero::Alt((void **)&a3); /*0x7af8b5*/
        return 0; /*0x7af8c3*/
      }
    }
    else
    {
      if ( a2 != 273 ) /*0x7af71a*/
      {
        switch ( a2 ) /*0x7af734*/
        {
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-20h] BYREF
          case 0xFu: /*0x7af734*/
            Dialog::DrawBackground(hWnd); /*0x7af77e*/
            if ( DSurface_Alternate ) /*0x7af78a*/
            {
              int v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
  _BYTE v15[16]; // [esp+20h] [ebp-10h] BYREF
                int * v9 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                int v13 = v9[2]; /*0x7af7af*/
                int v14 = v9[3]; /*0x7af7bc*/
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)DSurface_Alternate + 20))( /*0x7af7c7*/
                  DSurface_Alternate,
                  &v11,
                  0);
                (*(void (__thiscall **)(int, int *, _DWORD, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x7af7e4*/
                  DSurface_Alternate,
                  &v11,
                  v7[7],
                  &v11,
                  0,
                  1);
              }
            }
            Dialog::StopBink(hWnd); /*0x7af7e9*/
            ValidateRect(hWnd, 0); /*0x7af7f1*/
            goto LABEL_14; /*0x7af7f1*/
          case 0x14u: /*0x7af734*/
LABEL_14:
            result = 1; /*0x7af7f7*/
            break; /*0x7af803*/
          case 0x2Bu: /*0x7af734*/
            Dialog::Resize((char *)v4); /*0x7af768*/
            result = 1; /*0x7af770*/
            break; /*0x7af779*/
          case 0x84u: /*0x7af734*/
            v11 = (unsigned __int16)v4; /*0x7af74d*/
            v12 = HIWORD(v4); /*0x7af751*/
            WorldDominationFactionDlgProc_Helper(hWnd, (int)&v11); /*0x7af755*/
            result = 0; /*0x7af75d*/
            break; /*0x7af763*/
          default:
            return 0;
        }
        return result; /*0x7af763*/
      }
      if ( (_WORD)a3 == 1670 ) /*0x7af80d*/
      {
        (*(void (__thiscall **)(_DWORD *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, -1); /*0x7af81a*/
        return 0; /*0x7af826*/
      }
    }
    return 0; /*0x7af8d7*/
  }
  return result; /*0x7af75a*/
}
}
} // namespace gamemd

// 0x7AF970
namespace gamemd {
void sub_7AF970()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void (__thiscall ***v8)(_DWORD, int); // [esp+20h] [ebp-78h]

  Screen::Capture(1, 0, a1, a2); /*0x7af97c*/
  _DWORD v5[3]; // [esp+Ch] [ebp-8Ch] BYREF
  SimpleDialogControl::Constructor(v5); /*0x7af985*/
  int v6 = 0; /*0x7af995*/
  _DWORD * v7 = 0; /*0x7af999*/
  v8 = 0; /*0x7af99d*/
  _DWORD * v9 = 0; /*0x7af9a1*/
  v5[0] = &vt_WorldDominationTour_FactionSelectDialogControl; /*0x7af9a5*/
  _DWORD v11[22]; // [esp+2Ch] [ebp-6Ch] BYREF
  CCFileClass::Construct(v11, aWdtfsbsmPcx); /*0x7af9ad*/
  v7 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7af9cb*/
  v11[0] = &vt_CCFileClass; /*0x7af9cf*/
  int v13 = 0; /*0x7af9d3*/
  _BYTE v12[12]; // [esp+84h] [ebp-14h] BYREF
  Vector::Clear((int)v12); /*0x7af9da*/
  v11[0] = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor(v11); /*0x7af9eb*/
  if ( !v8 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(v11, aWdtfsasmPcx); /*0x7af9ff*/
    _DWORD * v2 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7afa0c*/
    v11[0] = &vt_CCFileClass; /*0x7afa18*/
    v8 = (void (__thiscall ***)(_DWORD, int))v2; /*0x7afa1c*/
    v13 = 0; /*0x7afa20*/
    Vector::Clear((int)v12); /*0x7afa27*/
    BufferIOFileClass::Destruct(v11); /*0x7afa30*/
  }
  if ( !v9 ) /*0x7afa39*/
  {
    CCFileClass::Construct(v11, aWdtfsssmPcx); /*0x7afa44*/
    v9 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7afa5a*/
    CCFileClass::Destruct(v11); /*0x7afa5e*/
  }
  _DWORD * v10 = v7; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v5); /*0x7afa7a*/
  int v3 = v6; /*0x7afa7f*/
  v5[0] = &vt_WorldDominationTour_FactionSelectDialogControl; /*0x7afa83*/
  if ( v7 ) /*0x7afa91*/
    (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x7afa97*/
  if ( v8 ) /*0x7afa9f*/
    (**v8)(v8, 1); /*0x7afaa5*/
  if ( v9 ) /*0x7afaad*/
    (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(v5); /*0x7afab9*/
  return v3; /*0x7afac0*/
}
}
} // namespace gamemd

// 0x7AFB90
namespace gamemd {
int StartWDTCampaign()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *StringCSF; // eax
  CampaignScore *v2; // eax
  wchar_t *v6; // ebp
  CCFileClass *v7; // eax
  CCFileClass *v10; // eax
  CCFileClass *v13; // eax
  INIClass *v17; // esi
  wchar_t *v18; // [esp+10h] [ebp-12Ch] BYREF
  rc_ptr_base v20; // [esp+18h] [ebp-124h] BYREF
  void (__stdcall ***v23)(int); // [esp+24h] [ebp-118h]
  rc_ptr_base v24; // [esp+28h] [ebp-114h] BYREF
  FactionSelectDialogControl_WorldDominationTour v29; // [esp+9Ch] [ebp-A0h] BYREF
  INIClass *v30; // [esp+A8h] [ebp-94h]

  char v19 = a1; /*0x7afba6*/
  if ( *(int *)&stru_89E138[8044] > 640 ) /*0x7afbaa*/
  {
    StringCSF = GetStringCSF( /*0x7afbc1*/
                  (wchar_t *)&stru_84D874.ambientSoundController[1],
                  0,
                  (CampaignScore *)g_Str_File_WorldDom_cpp,
                  385);
    WideString::Assign(&v18, (CampaignScore *)StringCSF); /*0x7afbcb*/
    v2 = WideString::GetOrEmpty(&v18); /*0x7afbdb*/
    if ( ShowDialogConfirm(v2, 4, (unsigned __int8 (*)())Game::ProcessIdle, 1) != 6 || !Team_Start(640, 480, a2, a3) ) /*0x7afc0e*/
    {
      DeleteAndZero::Alt((void **)&v18); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    *(_DWORD *)&HouseClass_Player[44600] = 640; /*0x7afc32*/
    *(_DWORD *)&HouseClass_Player[44604] = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((int)&HouseClass_Player[44564]); /*0x7afc42*/
    DeleteAndZero::Alt((void **)&v18); /*0x7afc4b*/
  }
  v6 = 0; /*0x7afc52*/
  v23 = 0; /*0x7afc5d*/
  _DWORD * v22 = 0; /*0x7afc61*/
  v18 = 0; /*0x7afc65*/
  _DWORD v26[22]; // [esp+30h] [ebp-10Ch] BYREF
  v7 = CCFileClass::Construct(v26, &stru_84B608.needsSave_flag); /*0x7afc69*/
  char v8 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v7->__pad_0 + 20))(v7, 0); /*0x7afc82*/
  v26[0] = &vt_CCFileClass; /*0x7afc84*/
  int v28 = 0; /*0x7afc88*/
  _DWORD v27[3]; // [esp+88h] [ebp-B4h] BYREF
  Vector::Clear((int)v27); /*0x7afc8f*/
  v26[0] = &off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor(v26); /*0x7afca0*/
  if ( v8 ) /*0x7afca7*/
  {
    _DWORD * v9 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afcab*/
    if ( v9 ) /*0x7afcb5*/
      v23 = (void (__stdcall ***)(int))MixFileClass::FromFile( /*0x7afcc8*/
                                         v9,
                                         (MixFileClass *)&stru_84B608.needsSave_flag,
                                         (int)&stru_87C374[42508]);
    else
      v23 = 0; /*0x7afcce*/
  }
  v10 = CCFileClass::Construct(v26, (char *)&stru_84D874.attachedTag); /*0x7afcdb*/
  char v11 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v10->__pad_0 + 20))(v10, 0); /*0x7afcef*/
  v26[0] = &vt_CCFileClass; /*0x7afcf1*/
  v28 = 0; /*0x7afcf5*/
  Vector::Clear((int)v27); /*0x7afcfc*/
  v26[0] = &off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor(v26); /*0x7afd0d*/
  if ( v11 ) /*0x7afd14*/
  {
    _DWORD * v12 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afd18*/
    if ( v12 ) /*0x7afd22*/
      v22 = MixFileClass::FromFile(v12, (MixFileClass *)&stru_84D874.attachedTag, (int)&stru_87C374[42508]); /*0x7afd35*/
    else
      v22 = 0; /*0x7afd3b*/
  }
  v13 = CCFileClass::Construct(v26, (char *)&stru_84D874.owningHouseIndex); /*0x7afd48*/
  char v14 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v13->__pad_0 + 20))(v13, 0); /*0x7afd5c*/
  v26[0] = &vt_CCFileClass; /*0x7afd5e*/
  v28 = 0; /*0x7afd62*/
  Vector::Clear((int)v27); /*0x7afd69*/
  v26[0] = &off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor(v26); /*0x7afd7a*/
  if ( v14 ) /*0x7afd81*/
  {
    _DWORD * v15 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x7afd85*/
    if ( v15 ) /*0x7afd8f*/
      v18 = (wchar_t *)MixFileClass::FromFile( /*0x7afda2*/
                         v15,
                         (MixFileClass *)&stru_84D874.owningHouseIndex,
                         (int)&stru_87C374[42508]);
    else
      v18 = 0; /*0x7afda8*/
    v6 = v18; /*0x7afdac*/
  }
  if ( !v23 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v6 ) /*0x7afdbe*/
  {
    (**v23)(1); /*0x7b004a*/
LABEL_46:
    if ( v6 ) /*0x7b004e*/
      (**(void (__thiscall ***)(wchar_t *, int))v6)(v6, 1); /*0x7b0057*/
    if ( v22 ) /*0x7b005f*/
      (*(void (__thiscall **)(_DWORD *, int))*v22)(v22, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  int v16 = v19 != 0 ? 4 : 1;
  if ( (v19 != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v16 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v16 )
    {
      case 1:
        Screen::Capture(1, 0, v14, (int)&vt_rc_ptr_WorldDominationTour_Campaign); /*0x7afdf9*/
        Team_Start_7B0490(&v29); /*0x7afe05*/
        RunDialog( /*0x7afe1c*/
          0x125u,
          (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc,
          (LPARAM)&v29);
        v17 = v30; /*0x7afe21*/
        Team_Start_7AF500(&v29); /*0x7afe2f*/
        dword_B77F94 = v17; /*0x7afe34*/
        v16 = v17 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( FetchWOLData() ) /*0x7afeef*/
        {
          ComPtr::Constructor(&v20); /*0x7aff00*/
          v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff0f*/
          ComPtr::Set(&v20, (int)dword_B77F6C); /*0x7aff13*/
  int v21; // [esp+1Ch] [ebp-120h]
          if ( !v21 ) /*0x7aff1e*/
          {
            v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7b0030*/
            ComPtr::Release(&v20); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410(v21, dword_B77F94); /*0x7aff2b*/
          if ( Team_Start_764FA0(v21) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v24); /*0x7aff41*/
            v24.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff50*/
            ComPtr::Set(&v24, (int)dword_B77F7C); /*0x7aff54*/
  int v25; // [esp+2Ch] [ebp-110h]
            if ( v25 && !Team_Start_764FA0(v25) ) /*0x7aff61*/
              Team_Start_76ECD0((int)&v24, (ScoreScreen *)dword_B77F98); /*0x7aff74*/
            v24.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7aff7d*/
            ComPtr::Release(&v24); /*0x7aff81*/
          }
          *(_DWORD *)&HouseClass_Player[30304] = dword_B77F94 == (INIClass *)3; /*0x7aff9a*/
          if ( Team_Start_76ED10((int)&v20, dword_B77F98, v14) ) /*0x7affa4*/
          {
            dword_B77DC4 = 0; /*0x7affb2*/
            Team_Start_597430(dword_ABDFD8); /*0x7affb8*/
            v16 = 5; /*0x7affbd*/
          }
          else
          {
            v16 = 1; /*0x7affc4*/
          }
          v20.vfptr = &vt_rc_ptr_WorldDominationTour_Campaign; /*0x7affcd*/
          ComPtr::Release(&v20); /*0x7affd1*/
LABEL_25:
          if ( !v16 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v16 = 0; /*0x7afff2*/
LABEL_40:
        v6 = v18; /*0x7afff4*/
LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v23)(v23, 1); /*0x7afff8*/
        (**(void (__thiscall ***)(wchar_t *, int))v6)(v6, 1); /*0x7b0009*/
        if ( v22 ) /*0x7b0011*/
          (*(void (__thiscall **)(_DWORD *, int))*v22)(v22, 1); /*0x7b0017*/
        return v16 == 6;
      case 5:
        v16 = JoinLobbyWOL() != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}
}
} // namespace gamemd

// 0x7A0D10
namespace gamemd {
int sub_7A0D10()
{
{
    int result;
    int v1;
    signed int v2;
    signed int v3;
    ULONG S_addr;
    char *v5;
    size_t v6;
    int v7;
    int v8;
    struct in_addr v9[27];
    result = g_NetworkLobbyState;
    v1 = 0;
    if ( !g_NetworkLobbyState )
  {
    result = 0;
    v2 = 0;
    memset(v9, 0, sizeof(v9));
    v3 = g_WOL_State;
    v7 = 0;
    v6 = g_WOL_State;
    if ( (int)g_WOL_State > 0 )
    {
    do
      {
    if ( v1 >= 0 && v2 < (int)g_WOL_State )
        {
    qmemcpy(v9, (char *)(g_WOL_ConnectionFlags) + v1, sizeof(v9));
    v3 = v6;
        }
    S_addr = v9[6].S_un.S_addr;
    ntoainet(v9[6]);
    Debug::Log();
    v8 = *(int *)g_UIPointerTable;
    v5 = ntoainet((struct in_addr)S_addr);
    result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v5, 1000, &v7);
    ++v2;
    v1 += 108;
      }
    while ( v2 < v3 );
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x7A0EA0
namespace gamemd {
void INIClass::SetGameOptionsPing()
{
{
    int v1;
    int v2;
    int i;
    char *v5;
    HWND GameUI;
    v2 = v1;
    Debug::Log();
    for ( i = 0; i < 8; ++i )
  {
    v5 = (char *)*(&g_NetworkPlayerName + i);
    if ( v5 )
    {
    if ( !strcmp(ToWideStringChar(v5), this->__pad_0) )
      {
    DataGlobal_B76440[i] = v2;
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI )
        {
    if ( v2 >= 0 )
          {
    if ( v2 >= 300 )
            {
    if ( v2 >= 500 )
    UpdateLobbyGraphicsWOL(GameUI, i, 2);
    else
    UpdateLobbyGraphicsWOL(GameUI, i, 1);
            }
    else
            {
    UpdateLobbyGraphicsWOL(GameUI, i, 0);
            }
          }
    else
          {
    UpdateLobbyGraphicsWOL(GameUI, i, -1);
          }
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x7A2110
namespace gamemd {
INT_PTR sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
{
    if ( a2 > 0x2B )
  {
    switch ( a2 )
    {
    case 0x111u: switch ( (unsigned short)a3 )
        {
    case 0x5C0u: if ( g_WOL_IdleHandler == 11 )
            {
    CloseDialog(hWnd, 0);
    return 0;
            }
    SetEvent(Handles);
    break;
    case 0x708u: (*(void (__stdcall **)(int, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( *(&g_MatrixTransformState + 2263), aStart443900100_0);
    return 0;
    case 0x709u: (*(void (__stdcall **)(int, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( *(&g_MatrixTransformState + 2263), aStart443900100);
    return 0;
        }
    break;
    case 0x113u: if ( !a3 )
        {
    sub_5E2AC0();
    return 0;
        }
    break;
    case 0x497u: SetTimer(hWnd, 0, 0x7D0u, 0);
    return 0;
    }
  }
    else
  {
    switch ( a2 )
    {
    case 0x2Bu: Dialog::Resize(a4);
    return 1;
    case 2u: KillTimer(hWnd, 0);
    return 0;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x7A2600
namespace gamemd {
int sub_7A2600(HWND hWnd, unsigned int a2, int a3, char * a4)
{
{
    int result;
    int *v5;
    void *v6;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x2B )
    {
    if ( a2 == 273 && (short)a3 == 1472 )
      {
    SetEvent(Handles);
    CloseDialog(hWnd, 1472);
      }
    return 0;
    }
    if ( a2 == 43 )
    {
    Dialog::Resize(a4);
    return 1;
    }
    if ( a2 == 2 )
    {
    v6 = g_UIControlState;
    if ( g_UIControlState )
      {
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v6);
    g_UIControlState = 0;
    return 0;
      }
    return 0;
    }
    if ( a2 != 15 )
    return a2 == 20;
    Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    v5 = g_UIControlState;
    if ( g_UIControlState || g_GameRulesOptions == -1 && (v5 = g_Map_TiberiumConfig) != 0 )
    Skirmish::RenderPreview(v5, hWnd);
    if ( LoadScreen::IsActive(g_UIManager) )
    LoadScreen::Render((int)g_UIManager, a3, (int)a4, NAN);
    ValidateRect(hWnd, 0);
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x7AC4F0
namespace gamemd {
void nullsub_265()
{
  ;
}
} // namespace gamemd

// 0x7ACBD0
namespace gamemd {
void E4Recv_7ACBD0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_1()
{
{
    *(int *)this = 0;
}
}
} // namespace gamemd

// 0x7AF090
namespace gamemd {
int sub_7AF090()
{
{
    DataGlobal_B77ED0 = 0;
    DataGlobal_B77ED4 = 0;
    DataGlobal_B77ED8 = 0;
    DataGlobal_B77EDC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7AF0B0
namespace gamemd {
void sub_7AF0B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B77EE8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x7AF0E0
namespace gamemd {
void sub_7AF0E0()
{
{
    DataGlobal_B77F88 = DataGlobal_B77EE8 / 60.0;
}
}
} // namespace gamemd

// 0x7AF100
namespace gamemd {
void sub_7AF100()
{
{
    DataGlobal_B77F40 = 1.0 / DataGlobal_B77F88;
}
}
} // namespace gamemd

// 0x7AF120
namespace gamemd {
void sub_7AF120()
{
{
    DataGlobal_B77F38 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7AF140
namespace gamemd {
void sub_7AF140()
{
{
    DataGlobal_B77EF8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7AF160
namespace gamemd {
void sub_7AF160()
{
{
    DataGlobal_B77EB8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7AF180
namespace gamemd {
long long sub_7AF180()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B77EB8 - DataGlobal_B77EF8);
    result = Math::RoundToInt(v0 * DataGlobal_B77EE8 * 0.5);
    DataGlobal_B77F90 = result;
    return result;
}
}
} // namespace gamemd

// 0x7AF1C0
namespace gamemd {
void sub_7AF1C0()
{
{
    DataGlobal_B77F00 = Math::ArcTan((double)DataGlobal_B77F90 * 0.00390625);
}
}
} // namespace gamemd

// 0x7AF1F0
namespace gamemd {
void sub_7AF1F0()
{
{
    DataGlobal_B77F28 = Math::ArcTan((double)(2 * DataGlobal_B77F90) / DataGlobal_B77EE8);
}
}
} // namespace gamemd

// 0x7AF220
namespace gamemd {
long long sub_7AF220()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B77F90) + 0.5);
    DataGlobal_B77F80 = result;
    return result;
}
}
} // namespace gamemd

// 0x7AF250
namespace gamemd {
int sub_7AF250()
{
{
    DataGlobal_B77EE0 = 0;
    DataGlobal_B77EE2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7AF260
namespace gamemd {
int sub_7AF260()
{
{
    DataGlobal_B77F10 = 0;
    DataGlobal_B77F14 = 0;
    DataGlobal_B77F18 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7AF280
namespace gamemd {
int sub_7AF280()
{
{
    DataGlobal_B77F50 = 0;
    DataGlobal_B77F48 = 128;
    DataGlobal_B77F4C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x7AF390
namespace gamemd {
int unknown_libname_61()
{
    void __cdecl unknown_libname_61()
{
    DeleteAndZero((void **)&DataGlobal_B77EF0);
}
}
} // namespace gamemd

// 0x7AF3A0
namespace gamemd {
int unknown_libname_62()
{
    void __cdecl unknown_libname_62()
{
    DeleteAndZero((void **)&DataGlobal_B77F30);
}
}
} // namespace gamemd

// 0x7AF3B0
namespace gamemd {
int unknown_libname_63()
{
    void __cdecl unknown_libname_63()
{
    DeleteAndZero((void **)&DataGlobal_B77F08);
}
}
} // namespace gamemd

// 0x7AF3C0
namespace gamemd {
int unknown_libname_64()
{
    void __cdecl unknown_libname_64()
{
    DeleteAndZero((void **)&DataGlobal_B77F20);
}
}
} // namespace gamemd

// 0x7AF4C0
namespace gamemd {
int unknown_libname_65()
{
    void __cdecl unknown_libname_65()
{
    DeleteAndZero((void **)&DataGlobal_B77EB0);
}
}
} // namespace gamemd

// 0x7AF4D0
namespace gamemd {
int unknown_libname_66()
{
    void __cdecl unknown_libname_66()
{
    DeleteAndZero((void **)&DataGlobal_B77F1C);
}
}
} // namespace gamemd

// 0x7AF4E0
namespace gamemd {
int unknown_libname_67()
{
    void __cdecl unknown_libname_67()
{
    DeleteAndZero((void **)&DataGlobal_B77EC8);
}
}
} // namespace gamemd

// 0x7AF4F0
namespace gamemd {
int unknown_libname_68()
{
    void __cdecl unknown_libname_68()
{
    DeleteAndZero((void **)&DataGlobal_B77EC0);
}
}
} // namespace gamemd
