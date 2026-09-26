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
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7A0430
namespace gamemd {
Coord * * int CollectWOLConnectionTokens()
{
  signed int result; // eax
  signed int v1; // ebx
  int v2; // ebp
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void *v7; // ebp
  void *v8; // eax
  int v9; // ebx
  void *v10; // ebp
  void *v11; // eax
  char **v12; // ecx
  int v13; // [esp+8h] [ebp-7Ch]
  void *v14; // [esp+Ch] [ebp-78h] BYREF
  signed int v15; // [esp+10h] [ebp-74h]
  int v16; // [esp+14h] [ebp-70h]
  unsigned char v17[108]; // [esp+18h] [ebp-6Ch] BYREF

  memset(v17, 0, sizeof(v17)); /*0x7a0440*/
  Debug::Log(); /*0x7a044d*/
  result = g_WOL_State; /*0x7a0452*/
  v1 = 0; /*0x7a045a*/
  v15 = 0; /*0x7a045e*/
  if ( (int)g_WOL_State > 0 ) /*0x7a0462*/
  {
    v2 = 0; /*0x7a0469*/
    v16 = 0; /*0x7a046c*/
    do /*0x7a0673*/
    {
      if ( v2 >= 0 && v1 < result ) /*0x7a0476*/
        qmemcpy(v17, (char *)g_WOL_ConnectionFlags + v2, sizeof(v17)); /*0x7a048a*/
      if ( (v17[0] & 1) != 0 || (v3 = String::GetOrEmpty((char **)&g_WebBrowser), !_strcmpi(&v17[36], v3)) ) /*0x7a04ba*/
      {
        Debug::Log(); /*0x7a049d*/
      }
      else
      {
        String::Assign((char **)&v14, &v17[36]); /*0x7a04e6*/
        String::GetOrEmpty((char **)&v14); /*0x7a04ef*/
        Debug::Log(); /*0x7a04fa*/
        v4 = g_WOL_ConnectionToken; /*0x7a04ff*/
        v5 = g_WOL_ConnectionToken; /*0x7a0507*/
        v13 = g_WOL_ConnectionToken; /*0x7a050b*/
        v6 = dword_B76AD4; /*0x7a0515*/
        if ( g_WOL_ConnectionToken >= dword_B76AD4 ) /*0x7a051d*/
        {
          v6 = 2 * g_WOL_ConnectionToken; /*0x7a0527*/
          if ( 2 * g_WOL_ConnectionToken < 10 ) /*0x7a052d*/
            v6 = 10; /*0x7a052f*/
          v7 = operator new(4 * v6); /*0x7a0543*/
          memset(v7, 0, 4 * ((unsigned int)(4 * v6) >> 2)); /*0x7a0551*/
          v8 = g_WOL_ObjectState; /*0x7a055a*/
          if ( g_WOL_ObjectState ) /*0x7a0561*/
          {
            qmemcpy(v7, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a056d*/
            v8 = g_WOL_ObjectState; /*0x7a056f*/
            v5 = v13; /*0x7a0574*/
          }
          RA2_OPDEL(v8); /*0x7a0579*/
          v4 = g_WOL_ConnectionToken; /*0x7a057e*/
          g_WOL_ObjectState = v7; /*0x7a0586*/
          dword_B76AD4 = v6; /*0x7a058c*/
        }
        if ( v4 >= v6 ) /*0x7a0594*/
        {
          v9 = 2 * v4; /*0x7a0596*/
          if ( 2 * v4 < 10 ) /*0x7a059c*/
            v9 = 10; /*0x7a059e*/
          v10 = operator new(4 * v9); /*0x7a05b2*/
          memset(v10, 0, 4 * ((unsigned int)(4 * v9) >> 2)); /*0x7a05c0*/
          v11 = g_WOL_ObjectState; /*0x7a05c9*/
          if ( g_WOL_ObjectState ) /*0x7a05d0*/
          {
            qmemcpy(v10, g_WOL_ObjectState, 4 * g_WOL_ConnectionToken); /*0x7a05dc*/
            v11 = g_WOL_ObjectState; /*0x7a05de*/
            v5 = v13; /*0x7a05e3*/
          }
          RA2_OPDEL(v11); /*0x7a05e8*/
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
// 0x7A0690
namespace gamemd {
void WOL_RequestMatch()
{
  HWND v0; // eax
  int i; // esi
  int v2; // esi
  int v3; // ebp
  int v4; // eax
  char *v5; // ebx
  unsigned int *v7; // eax
  int v8; // esi
  int v9; // edi
  char **v10; // eax
  wchar_t *String; // eax
  char **v12; // eax
  char **v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // esi
  char **v17; // eax
  int v18; // eax
  char **v19; // eax
  char **v20; // eax
  char **v22; // eax
  char **v23; // eax
  char **v24; // eax
  int v25; // esi
  char *v26; // eax
  void *v27; // [esp+10h] [ebp-114h] BYREF
  void *v28; // [esp+14h] [ebp-110h] BYREF
  void *v29; // [esp+18h] [ebp-10Ch] BYREF
  void *v30; // [esp+1Ch] [ebp-108h] BYREF
  void* v31;
  int v32; // [esp+24h] [ebp-100h]
  void* v33;
  int v34; // [esp+2Ch] [ebp-F8h]
  void *v35; // [esp+30h] [ebp-F4h] BYREF
  int v36; // [esp+34h] [ebp-F0h] BYREF
  char v37; // [esp+38h] [ebp-ECh]
  int16_t v38; // [esp+3Eh] [ebp-E6h] BYREF
  int v39; // [esp+40h] [ebp-E4h] BYREF
  int v40; // [esp+48h] [ebp-DCh] BYREF
  unsigned int v41[27]; // [esp+4Ch] [ebp-D8h] BYREF
  unsigned char v42[108]; // [esp+B8h] [ebp-6Ch] BYREF

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
  v2 = 0; /*0x7a06fc*/
  for ( g_WOL_ConnectionToken = 0; v2 < g_WOL_LoginPool; ++v2 ) /*0x7a0706*/
    DeleteAndZero((void **)dword_B76978 + v2); /*0x7a0711*/
  g_WOL_LoginPool = 0; /*0x7a0720*/
  dword_B736F4 = 0; /*0x7a0726*/
  CollectWOLConnectionTokens(); /*0x7a072c*/
  memset(v42, 0, sizeof(v42)); /*0x7a074b*/
  v3 = -1; /*0x7a074d*/
  Debug::Log(); /*0x7a0750*/
  v4 = 0; /*0x7a075e*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a0762*/
    goto LABEL_17; /*0x7a0762*/
  v5 = (char *)g_WOL_ConnectionFlags; /*0x7a0764*/
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
  memset(v41, 0, sizeof(v41)); /*0x7a07e1*/
  if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x7a07e7*/
    qmemcpy(v41, (char *)g_WOL_ConnectionFlags + 108 * v3, sizeof(v41)); /*0x7a0802*/
  v41[8] = 0; /*0x7a0808*/
  v36 = 0; /*0x7a080c*/
  v37 = 0; /*0x7a0810*/
  ReadRegistryOptionsWOL(&v36); /*0x7a0815*/
  ComPtr::Constructor(&v33); /*0x7a081e*/
  if ( Flag::IsNot2(&v36) ) /*0x7a0830*/
  {
    v7 = LoadPlayerProfile(&v31, (const char **)&g_WebBrowser); /*0x7a0842*/
    ComPtr::Set(&v33, v7[1]); /*0x7a084f*/
    ComPtr::Release(&v31); /*0x7a085c*/
  }
  else
  {
    ComPtr::Set(&v33, dword_B75E4C); /*0x7a086d*/
  }
  v8 = *(unsigned int *)(v34 + 28); /*0x7a087b*/
  String::Assign((char **)&v35, aMatch); /*0x7a0882*/
  unknown_libname_73(&v29); /*0x7a088b*/
  if ( g_GameOptionsFlags != 3 ) /*0x7a0897*/
    goto LABEL_35; /*0x7a0897*/
  String::Assign_Alt(&v35, aMatchwdt); /*0x7a08a6*/
  v9 = RequestMatchWOL_Helper(); /*0x7a08b4*/
  ComPtr::Constructor(&v31); /*0x7a08b6*/
  ComPtr::Set(&v31, v9->q010); /*0x7a08cc*/
  if ( v32 ) /*0x7a08d7*/
  {
    if ( *(unsigned int *)(v32 + 68) == 2 ) /*0x7a08f2*/
    {
      String::Assign_Alt(&v29, aWds0); /*0x7a097a*/
      if ( v8 <= 4 ) /*0x7a0982*/
        goto LABEL_34; /*0x7a0982*/
    }
    else
    {
      if ( *(unsigned int *)(v32 + 68) != 3 ) /*0x7a08f5*/
      {
        g_WOL_GameListState = 0; /*0x7a08f8*/
        g_WOL_IdleHandler = 0; /*0x7a08fe*/
        g_WOL_GameProcessState = -1; /*0x7a0904*/
        g_WOL_GameListPool = time(0); /*0x7a091a*/
        ComPtr::Release(&v31); /*0x7a0923*/
        DeleteAndZero(&v29); /*0x7a092c*/
        DeleteAndZero(&v35); /*0x7a0935*/
        ComPtr::Release(&v33); /*0x7a0946*/
        return 0; /*0x7a0957*/
      }
      String::Assign_Alt(&v29, aWds1); /*0x7a0961*/
      if ( (unsigned int, unsigned int a1, unsigned int a0)v8 > 4 ) /*0x7a0968*/
        goto LABEL_34; /*0x7a0968*/
    }
    v8 = -1; /*0x7a0984*/
    goto LABEL_34; /*0x7a0984*/
  }
  String::Assign_Alt(&v29, aWds0); /*0x7a08e2*/
  LABEL_34:
  String::Append((const char **)&v29, aWdt); /*0x7a0987*/
  v10 = FromStringInt((char **)&v28, *(int *)g_GameDifficulty); /*0x7a099f*/
  String::Append2((const char **)&v29, v10); /*0x7a09a9*/
  DeleteAndZero(&v28); /*0x7a09b2*/
  ComPtr::Release(&v31); /*0x7a09bf*/
  LABEL_35:
  String = GetStringCSF(aWolRequestingm, 0, g_Str_File_wonline_cpp, 28395); /*0x7a09c9*/
  Dialog::ShowMessage(16744576, (size_t)String); /*0x7a09e6*/
  String::AssignFromPtr((char **)&v27, (const char **)&v35); /*0x7a09f7*/
  String::Append((const char **)&v27, aCou); /*0x7a0a05*/
  v12 = FromStringInt((char **)&v28, v8); /*0x7a0a10*/
  String::Append2((const char **)&v27, v12); /*0x7a0a1a*/
  DeleteAndZero(&v28); /*0x7a0a23*/
  String::Append((const char **)&v27, aCol); /*0x7a0a31*/
  v13 = FromStringInt((char **)&v28, *(unsigned int *)(v34 + 32)); /*0x7a0a41*/
  String::Append2((const char **)&v27, v13); /*0x7a0a4b*/
  DeleteAndZero(&v28); /*0x7a0a54*/
  String::Append((const char **)&v27, aMbr); /*0x7a0a62*/
  if ( *(unsigned char *)(v34 + 56) ) /*0x7a0a6b*/
    String::Append((const char **)&v27, a1); /*0x7a0a77*/
  else
    String::Append((const char **)&v27, a0); /*0x7a0a82*/
  String::AssignFromPtr((char **)&v30, (const char **)&g_WebBrowser); /*0x7a0a90*/
  String::ToLower((const char **)&v30); /*0x7a0a99*/
  v14 = *((unsigned int *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0abd*/
  if ( v14 ) /*0x7a0ac2*/
  {
    while ( !String::Compare((const char **)v14, (const char **)&v30) ) /*0x7a0ad6*/
    {
      v14 = *(unsigned int *)(v14 + 8); /*0x7a0ad8*/
      if ( !v14 ) /*0x7a0add*/
        goto LABEL_50; /*0x7a0add*/
    }
    v15 = 0; /*0x7a0ae9*/
    if ( dword_B76534 ) /*0x7a0aed*/
    {
      v16 = *((unsigned int *)g_WOL_ConnectionPool + (dword_B76548(&v30) & ((1 << dword_B7653C) - 1))); /*0x7a0b0e*/
      if ( v16 ) /*0x7a0b13*/
      {
        while ( !String::Compare((const char **)v16, (const char **)&v30) ) /*0x7a0b23*/
        {
          v16 = *(unsigned int *)(v16 + 8); /*0x7a0b25*/
          if ( !v16 ) /*0x7a0b2a*/
            goto LABEL_49; /*0x7a0b2a*/
        }
        if ( v16 != -4 ) /*0x7a0b37*/
          v15 = *(unsigned int *)(v16 + 4); /*0x7a0b39*/
      }
    }
  LABEL_49:
    String::Append((const char **)&v27, aLoc); /*0x7a0b3b*/
    v17 = FromStringInt((char **)&v28, v15); /*0x7a0b4f*/
    String::Append2((const char **)&v27, v17); /*0x7a0b59*/
    DeleteAndZero(&v28); /*0x7a0b62*/
  }
  LABEL_50:
  String::Append((const char **)&v27, aRat); /*0x7a0b67*/
  v18 = Performance::Profile(); /*0x7a0b75*/
  v19 = FromStringInt((char **)&v28, v18); /*0x7a0b80*/
  String::Append2((const char **)&v27, v19); /*0x7a0b8a*/
  DeleteAndZero(&v28); /*0x7a0b93*/
  String::Append((const char **)&v27, aRes); /*0x7a0ba1*/
  v20 = FromStringInt((char **)&v28, g_CommandLineFlags); /*0x7a0bb0*/
  String::Append2((const char **)&v27, v20); /*0x7a0bba*/
  DeleteAndZero(&v28); /*0x7a0bc3*/
  Network::GetAddress(dword_A8DBC0, &v40, (int)&v39, &v38); /*0x7a0bdc*/
  v39 = v39; /*0x7a0be1*/
  String::Append((const char **)&v27, aAdr); /*0x7a0bee*/
  v22 = FromStringInt((char **)&v28, v39); /*0x7a0bf9*/
  String::Append2((const char **)&v27, v22); /*0x7a0c03*/
  DeleteAndZero(&v28); /*0x7a0c0c*/
  String::Append((const char **)&v27, aNat); /*0x7a0c1a*/
  v23 = FromStringInt((char **)&v28, (uint16_t)dword_ABFEC8); /*0x7a0c2f*/
  String::Append2((const char **)&v27, v23); /*0x7a0c39*/
  DeleteAndZero(&v28); /*0x7a0c42*/
  String::Append((const char **)&v27, aPrt); /*0x7a0c50*/
  v24 = FromStringInt((char **)&v28, dword_A8E228); /*0x7a0c5f*/
  String::Append2((const char **)&v27, v24); /*0x7a0c69*/
  DeleteAndZero(&v28); /*0x7a0c72*/
  String::Append2((const char **)&v27, (char **)&v29); /*0x7a0c80*/
  v25 = *(unsigned int *)ppv; /*0x7a0c8e*/
  v26 = String::GetOrEmpty((char **)&v27); /*0x7a0c90*/
  (*(void (__stdcall **)(LPVOID, unsigned int *, char *))(v25 + 48))(ppv, v41, v26); /*0x7a0ca2*/
  g_WOL_GameListState = 0; /*0x7a0ca5*/
  g_WOL_IdleHandler = 4; /*0x7a0cac*/
  g_WOL_GameProcessState = 180; /*0x7a0cb6*/
  g_WOL_GameListPool = time(0); /*0x7a0cc8*/
  ProcessPingRequestsWOL(); /*0x7a0ccd*/
  DeleteAndZero(&v30); /*0x7a0cd6*/
  DeleteAndZero(&v27); /*0x7a0cdf*/
  DeleteAndZero(&v29); /*0x7a0ce8*/
  DeleteAndZero(&v35); /*0x7a0cf1*/
  ComPtr::Release(&v33); /*0x7a0cfe*/
  return 1; /*0x7a07c7*/
}
}
// 0x7A0DD0
namespace gamemd {
void E4Recv_7A0DD0::sub_7A0DD0()
{
  int v2; // ebp
  char **v3; // edi
  HWND GameUI; // eax

  if ( this ) /*0x7a0dd8*/
  {
    v2 = 0; /*0x7a0dda*/
    v3 = (char **)&g_NetworkPlayerName; /*0x7a0ddc*/
    while ( !*v3 || strcmp(ToWideStringChar(*v3), &this->vtable46) ) /*0x7a0e1a*/
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
// 0x7A1060
namespace gamemd {
Coord * * WOL_ProcessPingRequests()
{
  char result; // al
  ULONG S_addr; // ebx
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebp
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // esi
  char v11; // [esp+13h] [ebp-79h]
  void *v12; // [esp+14h] [ebp-78h] BYREF
  void *v13; // [esp+18h] [ebp-74h] BYREF
  int v14; // [esp+1Ch] [ebp-70h] BYREF
  struct in_addr v15[27]; // [esp+20h] [ebp-6Ch] BYREF

  v11 = 0; /*0x7a1072*/
  memset(v15, 0, sizeof(v15)); /*0x7a1077*/
  result = g_NetworkLobbyState; /*0x7a1079*/
  if ( !g_NetworkLobbyState ) /*0x7a1080*/
  {
    Debug::Log(); /*0x7a1098*/
    result = g_WOL_ConnectionToken; /*0x7a109d*/
    if ( g_WOL_ConnectionToken ) /*0x7a10a7*/
    {
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
        v2 = String::GetOrEmpty((char **)&v12); /*0x7a1107*/
        String::Assign((char **)&v13, v2); /*0x7a1111*/
        v3 = g_WOL_State; /*0x7a1116*/
        v4 = 0; /*0x7a111b*/
        v5 = 0; /*0x7a111d*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a1121*/
        {
  LABEL_15:
          v5 = -1; /*0x7a115c*/
        }
        else
        {
          v6 = 0; /*0x7a1123*/
          while ( 1 ) /*0x7a1125*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a112b*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1132*/
            v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a113d*/
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
            v10 = 0; /*0x7a1296*/
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
        v8 = *(unsigned int *)g_UIPointerTable; /*0x7a11c3*/
        v9 = ntoainet((struct in_addr)S_addr); /*0x7a11cc*/
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
// 0x7A1330
namespace gamemd {
Coord * * UpdateWOLLobbyPings()
{
  int v0; // ebp
  int v1; // esi
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebx
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  char **v8; // eax
  char **v9; // eax
  char **v10; // eax
  char **v11; // eax
  int v12; // eax
  char *v13; // edx
  int v14; // esi
  char *v15; // eax
  char **v16; // [esp-8h] [ebp-B4h]
  char **v17; // [esp+0h] [ebp-ACh]
  void *v18; // [esp+14h] [ebp-98h] BYREF
  void *v19; // [esp+18h] [ebp-94h] BYREF
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  void *v22; // [esp+24h] [ebp-88h] BYREF
  void *v23; // [esp+28h] [ebp-84h] BYREF
  void *v24; // [esp+2Ch] [ebp-80h] BYREF
  void *v25; // [esp+30h] [ebp-7Ch] BYREF
  void *v26; // [esp+34h] [ebp-78h] BYREF
  void *v27; // [esp+38h] [ebp-74h] BYREF
  void *v28; // [esp+3Ch] [ebp-70h] BYREF
  unsigned int v29[27]; // [esp+40h] [ebp-6Ch] BYREF

  memset(v29, 0, sizeof(v29)); /*0x7a1342*/
  v21 = 0; /*0x7a1349*/
  if ( !g_NetworkLobbyState ) /*0x7a1353*/
  {
    String::Assign((char **)&v19, aPings); /*0x7a1364*/
    Debug::Log(); /*0x7a1374*/
    if ( g_WOL_LoginPool ) /*0x7a1383*/
    {
      v0 = v29[6]; /*0x7a138a*/
      do /*0x7a15ff*/
      {
        unknown_libname_73(&v18); /*0x7a1392*/
        v1 = g_WOL_LoginPool - 1; /*0x7a139c*/
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
        v2 = String::GetOrEmpty((char **)&v18); /*0x7a1445*/
        String::Assign((char **)&v22, v2); /*0x7a144f*/
        v3 = g_WOL_State; /*0x7a1454*/
        v4 = 0; /*0x7a1459*/
        v5 = 0; /*0x7a145b*/
        if ( (int)g_WOL_State <= 0 ) /*0x7a145f*/
        {
  LABEL_18:
          v5 = -1; /*0x7a149b*/
        }
        else
        {
          v6 = 0; /*0x7a1461*/
          while ( 1 ) /*0x7a1463*/
          {
            if ( v6 >= 0 && v5 < v3 ) /*0x7a1469*/
              v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1471*/
            v7 = String::GetOrEmpty_Alt((char **)&v22); /*0x7a147c*/
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
          || (v20 = -1,
              (*(void (__stdcall **)(LPVOID, int, int *))(*(unsigned int *)g_UIPointerTable + 32))(g_UIPointerTable, v0, &v20),
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
          v17 = String::Assign((char **)&v27, asc_81C8FC); /*0x7a1556*/
          v16 = FromStringInt((char **)&v25, v20); /*0x7a1565*/
          v8 = String::Assign((char **)&v24, Delimiter); /*0x7a1570*/
          v9 = String::Concat((const char **)&v18, (char **)&v26, v8); /*0x7a157f*/
          v10 = String::Concat((const char **)v9, (char **)&v28, v16); /*0x7a1586*/
          v11 = String::Concat((const char **)v10, (char **)&v23, v17); /*0x7a158d*/
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
    v12 = 0; /*0x7a160a*/
    dword_B736F4 = 0; /*0x7a160e*/
    if ( v21 > 0 && (int)g_WOL_State > 0 ) /*0x7a161d*/
    {
      v13 = (char *)g_WOL_ConnectionFlags; /*0x7a161f*/
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
        v14 = *(unsigned int *)ppv; /*0x7a165d*/
        v15 = String::GetOrEmpty((char **)&v19); /*0x7a1663*/
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
// 0x7A16B0
namespace gamemd {
ObjectClass * * HandleWOLMatchMessage()
{
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  char *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax

  if ( a2 ) /*0x7a16b8*/
  {
    if ( !_strnicmp(String1, aFail, 4u) ) /*0x7a16c6*/
    {
      StringCSF = GetStringCSF((wchar_t *)aWolMatchfail, 0, g_Str_File_wonline_cpp, 28671); /*0x7a16e3*/
  LABEL_10:
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)StringCSF); /*0x7a17a2*/
      SetEvent(dword_B736C8); /*0x7a17b6*/
      return; /*0x7a17be*/
    }
    if ( !_strnicmp(String1, aPingfail, 8u) ) /*0x7a16f0*/
    {
      v5 = GetStringCSF(aWolMatchfailpi, 0, g_Str_File_wonline_cpp, 28677); /*0x7a170d*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v5); /*0x7a1718*/
      SetEvent(dword_B736C8); /*0x7a1727*/
      return; /*0x7a172f*/
    }
    if ( !_strnicmp(String1, aRankfail, 8u) ) /*0x7a1738*/
    {
      v6 = GetStringCSF(aWolMatchfailra, 0, g_Str_File_wonline_cpp, 28683); /*0x7a1755*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v6); /*0x7a1760*/
      SetEvent(dword_B736C8); /*0x7a176f*/
      return; /*0x7a1777*/
    }
    if ( !_strnicmp(String1, aWdtsidefail, 0xBu) ) /*0x7a1780*/
    {
      StringCSF = GetStringCSF(aWolMatchfailwd, 0, g_Str_File_wonline_cpp, 28689); /*0x7a179d*/
      goto LABEL_10; /*0x7a179d*/
    }
  }
  if ( !_strnicmp(String1, aExit_0, 4u) ) /*0x7a17c7*/
  {
    v7 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28695); /*0x7a17e4*/
    Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v7); /*0x7a17ef*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 36))(ppv); /*0x7a17ff*/
    v8 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28698); /*0x7a181a*/
    ShowDialogConfirm(v8, 0, (int)GameLoop::Thunk, 0); /*0x7a1823*/
    SetEvent(Handles); /*0x7a182f*/
  }
  else if ( !_strnicmp(String1, aWorking, 7u) ) /*0x7a1840*/
  {
    if ( g_WOL_IdleHandler == 4 ) /*0x7a1853*/
    {
      g_WOL_GameListState = 0; /*0x7a1857*/
      g_WOL_IdleHandler = 5; /*0x7a1861*/
      g_WOL_GameProcessState = 180; /*0x7a186b*/
      g_WOL_GameListPool = time(0); /*0x7a187d*/
    }
    v9 = GetStringCSF(aGuiMatchingpro, 0, g_Str_File_wonline_cpp, 28710); /*0x7a1893*/
    Dialog::ShowMessage(-1, (size_t)v9); /*0x7a189f*/
  }
  else if ( !_strnicmp(String1, aInfo, 5u) ) /*0x7a18b2*/
  {
    v10 = CharToWideString(String1 + 5); /*0x7a18c1*/
    Dialog::ShowMessage(16744576, (size_t)v10); /*0x7a18cc*/
  }
  else if ( !_strnicmp(String1, aPool, 5u) ) /*0x7a18df*/
  {
    v11 = GetStringCSF(aWolMatchingpla, 0, g_Str_File_wonline_cpp, 28720); /*0x7a1900*/
    Dialog::ShowMessage(16744576, (size_t)v11, String1 + 5); /*0x7a190b*/
  }
  else if ( a2 && !_strnicmp(String1, aStart_0, 6u) ) /*0x7a1922*/
  {
    strncpy(byte_B73714, String1 + 6, 0xFFu); /*0x7a193c*/
    Debug::Log(); /*0x7a194b*/
    SetEvent(dword_B736C4); /*0x7a195a*/
  }
  else if ( _strcmpi(String1, aAck) && _strcmpi(String1, aNack_0) ) /*0x7a197b*/
  {
    if ( !_strnicmp(String1, aNeed, 5u) ) /*0x7a198f*/
    {
      Debug::Log(); /*0x7a19a1*/
    }
    else if ( a2 ) /*0x7a19ae*/
    {
      v12 = GetStringCSF(aWolMatchunknow, 0, g_Str_File_wonline_cpp, 28753); /*0x7a19c1*/
      Dialog::ShowMessage((int)Math::InitDegToRad, (size_t)v12); /*0x7a19cc*/
    }
  }
}
}
// 0x7A1BB0
namespace gamemd {
AbstractClass * * WOL_MatchGame()
{
  int v0; // ebp
  char *v1; // ebx
  char *v2; // eax
  char *v3; // esi
  char *v4; // eax
  char *v5; // eax
  wchar_t *String; // eax
  char *v7; // eax
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

  v0 = 0; /*0x7a1bb9*/
  g_NetworkLobbyState = 0; /*0x7a1bbc*/
  Network::Init(); /*0x7a1bc2*/
  strncpy(Destination, byte_B73714, 0x100u); /*0x7a1bd9*/
  strtok(Destination, asc_8318B8); /*0x7a1beb*/
  v1 = strtok(0, Delimiter); /*0x7a1bfb*/
  v28 = v1; /*0x7a1c03*/
  strtok(0, Delimiter); /*0x7a1c07*/
  strtok(0, Delimiter); /*0x7a1c12*/
  strtok(0, Delimiter); /*0x7a1c1d*/
  strtok(0, Delimiter); /*0x7a1c28*/
  strtok(0, Delimiter); /*0x7a1c33*/
  strtok(0, Delimiter); /*0x7a1c41*/
  strtok(0, Delimiter); /*0x7a1c4c*/
  v2 = strtok(0, Delimiter); /*0x7a1c57*/
  v3 = v2; /*0x7a1c61*/
  if ( !v1 || !v2 ) /*0x7a1c6b*/
  {
    String = GetStringCSF(aWolMatchbadpar, 0, g_Str_File_wonline_cpp, 28847); /*0x7a20c0*/
    goto LABEL_35; /*0x7a20c0*/
  }
  v4 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c76*/
  if ( _strcmpi(v1, v4) ) /*0x7a1c7d*/
  {
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1c8e*/
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
  v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7a1cb0*/
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
    if ( (*(int (__stdcall **)(LPVOID, int, unsigned int))(*(unsigned int *)ppv + 24))(ppv, v27, 0) ) /*0x7a1e91*/
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
// 0x7A2830
namespace gamemd {
Coord * * E4Recv_7A2830::sub_7A2830()
{
  int result; // eax
  int v2; // ebp
  signed int v3; // ebx
  char *v4; // eax
  unsigned int v6[27]; // [esp+14h] [ebp-6Ch] BYREF

  result = g_WOL_State; /*0x7a2833*/
  v2 = 0; /*0x7a283a*/
  v3 = 0; /*0x7a283c*/
  v6[0] = 0; /*0x7a2846*/
  if ( (int)g_WOL_State > 0 ) /*0x7a284a*/
  {
    while ( 1 ) /*0x7a284c*/
    {
      if ( v2 >= 0 && v3 < result ) /*0x7a2852*/
        qmemcpy(v6, (char *)g_WOL_ConnectionFlags + v2, sizeof(v6)); /*0x7a2865*/
      v4 = String::GetOrEmpty_Alt(this); /*0x7a2870*/
      if ( !_strcmpi(v4, &v6[9]) ) /*0x7a2876*/
        break; /*0x7a2876*/
      result = g_WOL_State; /*0x7a2882*/
      ++v3; /*0x7a2887*/
      v2 += 108; /*0x7a2888*/
      if ( v3 >= (int)g_WOL_State ) /*0x7a288d*/
        return result; /*0x7a288d*/
    }
    return (*(int (__stdcall **)(LPVOID, unsigned int *))(*(unsigned int *)ppv + 84))(ppv, v6); /*0x7a28a4*/
  }
  return result; /*0x7a288f*/
}
}
// 0x7A29E0
namespace gamemd {
void BuddyDlgProcWOL(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  wchar_t *String; // eax
  HWND DlgItem; // eax
  UINT v7; // eax
  UINT v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // esi
  char **v12; // ecx
  int v13; // eax
  int v14; // esi
  char **v15; // ecx
  int v16; // eax
  int v17; // esi
  char **v18; // ecx
  char *v19; // [esp-4h] [ebp-1F4h]
  void *v20; // [esp+10h] [ebp-1E0h] BYREF
  LONG WindowLongA; // [esp+14h] [ebp-1DCh]
  char v22[108]; // [esp+18h] [ebp-1D8h] BYREF
  char v23[108]; // [esp+84h] [ebp-16Ch] BYREF
  wchar_t lParam[128]; // [esp+F0h] [ebp-100h] BYREF

  if ( a2 == 272 && a4 ) /*0x7a2a09*/
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7a2a12*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x7a2a25*/
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
        v19 = String::GetOrEmpty((char **)&dword_B76AC4); /*0x7a2ac6*/
        String = GetStringCSF(aWolAddbuddyque, 0, g_Str_File_wonline_cpp, 29291); /*0x7a2ad8*/
        swprintf(lParam, (const size_t)String, (const wchar_t *const)v19); /*0x7a2ae6*/
        DlgItem = GetDlgItem(hWnd, 1819); /*0x7a2af4*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)lParam); /*0x7a2b0a*/
        return 0; /*0x7a2b1c*/
      }
      return 0; /*0x7a2ab6*/
    }
    if ( (uint16_t)a3 != 1 ) /*0x7a2b26*/
    {
      if ( (uint16_t)a3 == 2 ) /*0x7a2b29*/
      {
        v7 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b35*/
        ReadWOLLobbyOption(v7 != 1); /*0x7a2b46*/
        (*(void (__thiscall **)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x7a2b54*/
        return 0; /*0x7a2b63*/
      }
      return 0; /*0x7a2b29*/
    }
    v8 = IsDlgButtonChecked(hWnd, 1785); /*0x7a2b6c*/
    ReadWOLLobbyOption(v8 != 1); /*0x7a2b7d*/
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2b8e*/
    {
  LABEL_53:
      (*(void (__thiscall **)(LONG, HWND, int))(*(unsigned int *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7a2e54*/
      return 0; /*0x7a2e60*/
    }
    memset(v22, 0, sizeof(v22)); /*0x7a2ba1*/
    v9 = String::GetOrEmpty_Alt((char **)&dword_B76AC4); /*0x7a2ba8*/
    strncpy(&v22[36], v9, 9u); /*0x7a2bb3*/
    (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 224))(ppv, v22); /*0x7a2bc8*/
    if ( !MapSeed::CheckName((const char **)&dword_B76AC4) ) /*0x7a2bda*/
    {
  LABEL_52:
      SendGameListWOL(); /*0x7a2e4f*/
      goto LABEL_53; /*0x7a2e4f*/
    }
    String::AssignFromPtr((char **)&v20, (const char **)&dword_B76AC4); /*0x7a2be9*/
    v10 = g_WindowManager; /*0x7a2bee*/
    v11 = g_WindowManager; /*0x7a2bf3*/
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
      memcpy((char *)g_WOL_LoginQueue + 4 * v11 + 4, (char *)g_WOL_LoginQueue + 4 * v11, 4 * (v10 + 0x3FFFFFFF * v11)); /*0x7a2c46*/
      v10 = g_WindowManager; /*0x7a2c4b*/
    }
    v12 = (char **)((char *)g_WOL_LoginQueue + 4 * v11); /*0x7a2c59*/
    if ( v12 ) /*0x7a2c5e*/
    {
      String::AssignFromPtr(v12, (const char **)&v20); /*0x7a2c65*/
      v10 = g_WindowManager; /*0x7a2c6a*/
    }
    g_WindowManager = v10 + 1; /*0x7a2c70*/
    v13 = g_WOL_RequestManager; /*0x7a2c75*/
    v14 = g_WOL_RequestManager; /*0x7a2c7a*/
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
    if ( v14 < v13 ) /*0x7a2cb0*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v14 + 4, (char *)g_WOL_SessionID + 4 * v14, 4 * (v13 + 0x3FFFFFFF * v14)); /*0x7a2ccd*/
      v13 = g_WOL_RequestManager; /*0x7a2cd2*/
    }
    v15 = (char **)((char *)g_WOL_SessionID + 4 * v14); /*0x7a2ce0*/
    if ( v15 ) /*0x7a2ce5*/
    {
      String::AssignFromPtr(v15, (const char **)&v20); /*0x7a2cec*/
      v13 = g_WOL_RequestManager; /*0x7a2cf1*/
    }
    g_WOL_RequestManager = v13 + 1; /*0x7a2cf7*/
    v16 = g_WOL_BuddyList; /*0x7a2cfc*/
    v17 = g_WOL_BuddyList; /*0x7a2d01*/
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
    if ( v17 < v16 ) /*0x7a2d37*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v17 + 4, (char *)g_WOL_ChannelMgr + 4 * v17, 4 * (v16 + 0x3FFFFFFF * v17)); /*0x7a2d54*/
      v16 = g_WOL_BuddyList; /*0x7a2d59*/
    }
    v18 = (char **)((char *)g_WOL_ChannelMgr + 4 * v17); /*0x7a2d67*/
    if ( v18 ) /*0x7a2d6c*/
    {
      String::AssignFromPtr(v18, (const char **)&v20); /*0x7a2d73*/
      v16 = g_WOL_BuddyList; /*0x7a2d78*/
    }
    g_WOL_BuddyList = v16 + 1; /*0x7a2d83*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x7a2d88*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x7a2da6*/
      {
  LABEL_51:
        DeleteAndZero(&v20); /*0x7a2e46*/
        goto LABEL_52; /*0x7a2e4a*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x7a2db1*/
    }
    if ( g_WOL_RequestManager ) /*0x7a2dbd*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x7a2dcf*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x7a2ddf*/
      g_WOL_ParseState = time(0); /*0x7a2deb*/
      memset(v23, 0, sizeof(v23)); /*0x7a2dfe*/
      strcpy(&v23[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x7a2e31*/
      (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 96))(ppv, v23); /*0x7a2e43*/
    }
    goto LABEL_51; /*0x7a2e43*/
  }
  return result; /*0x7a2a54*/
}
}
// 0x7A4C10
namespace gamemd {
CampaignScore * * CComObject_CChatEventSink___ATL__vt_04_(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
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
  int v17; // [esp+8h] [ebp-4C4h]
  void *v18; // [esp+1Ch] [ebp-4B0h] BYREF
  unsigned int v20[3]; // [esp+24h] [ebp-4A8h] BYREF
  CHAR Buffer[260]; // [esp+30h] [ebp-49Ch] BYREF
  char v22[260]; // [esp+134h] [ebp-398h] BYREF
  char v23[260]; // [esp+238h] [ebp-294h] BYREF
  wchar_t String[200]; // [esp+33Ch] [ebp-190h] BYREF

  v3 = 0; /*0x7a4c1a*/
  if ( a2 < 0 ) /*0x7a4c22*/
    goto LABEL_16; /*0x7a4c22*/
  v4 = a3; /*0x7a4c28*/
  if ( !a3 ) /*0x7a4c31*/
    goto LABEL_16; /*0x7a4c31*/
  dword_B77DCC = 1; /*0x7a4c37*/
  v5 = a3; /*0x7a4c41*/
  do /*0x7a4c49*/
  {
    v5 = v5->vtable4; /*0x7a4c43*/
    ++v3; /*0x7a4c46*/
  }
  while ( v5 ); /*0x7a4c49*/
  v3 = v3; /*0x7a4c4b*/
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
  v9 = GetStringCSF(aTxtUpgraderequ, 0, g_Str_File_wonline_cpp, 5504); /*0x7a4cab*/
  if ( ShowDialogConfirm(v9, 4, (int)GameLoop::Thunk, 0) == 7 ) /*0x7a4cbf*/
  {
  LABEL_16:
    SetEvent(Handles); /*0x7a4ea4*/
    return 0; /*0x7a4ead*/
  }
  else
  {
    GetCurrentDirectoryA(0x100u, Buffer); /*0x7a4ccf*/
    v10 = 0; /*0x7a4cd5*/
    while ( 1 ) /*0x7a4cef*/
    {
      sprintf(v22, "%s/%s", (const char *)(v4 + 81), (const char *)(v4 + 337)); /*0x7a4cef*/
      sprintf(v23, "%s\\%s", (const char *)(v4 + 468), (const char *)(v4 + 337)); /*0x7a4d09*/
      CreateDirectoryA((LPCSTR)(v4 + 468), 0); /*0x7a4d14*/
      (*(void (__stdcall **)(LPVOID, int, int, int, char *, char *, char *))(*(unsigned int *)dword_AC1174 + 12))( /*0x7a4d49*/
        dword_AC1174,
        v4 + 16,
        v4 + 370,
        v4 + 403,
        v22,
        v23,
        g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
      v10 = (const wchar_t *)((char *)v10 + 1); /*0x7a4d4c*/
      v17 = v3; /*0x7a4d56*/
      v11 = GetStringCSF(aTxtDownloading, 0, g_Str_File_wonline_cpp, 5526); /*0x7a4d64*/
      swprintf(String, (const size_t)v11, v10, v17); /*0x7a4d72*/
      WideString::Assign((wchar_t **)&v18, String); /*0x7a4d86*/
      SimpleDialogControl::Constructor(v20); /*0x7a4d8f*/
      v20[0] = &off_7F7624; /*0x7a4da0*/
      v12 = (HWND)CreateDialog(0xD3u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_78DA30, 0); /*0x7a4dad*/
      v13 = GetDlgItem(v12, 1479); /*0x7a4dbf*/
      v14 = WideString::GetOrEmpty_Alt((wchar_t **)&v18); /*0x7a4dc1*/
      SendMessageA(v13, 0x4B2u, 0, (LPARAM)v14); /*0x7a4dcf*/
      if ( MessageDialogLoopAlt(v12, (uint8_t (*)(void))GameLoop::Thunk, 0, 1, 1) == 2 ) /*0x7a4dea*/
        break; /*0x7a4dea*/
      v4 = *(unsigned int *)(v4 + 12); /*0x7a4dec*/
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
// 0x7AF640
namespace gamemd {
AbstractClass * * E4Recv_7AF640::sub_7AF640(int a2)
{
  int result; // eax
  int v4; // ecx
  unsigned int *v5; // eax
  unsigned int v6[4]; // [esp+Ch] [ebp-20h] BYREF
  unsigned char v7[16]; // [esp+1Ch] [ebp-10h] BYREF

  result = DSurface_Alternate; /*0x7af640*/
  if ( DSurface_Alternate ) /*0x7af64d*/
  {
    v4 = this->referenceCount; /*0x7af64f*/
    if ( v4 ) /*0x7af654*/
    {
      v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v4 + 120))(v4, v7); /*0x7af65d*/
      v6[0] = *v5; /*0x7af664*/
      v6[1] = v5[1]; /*0x7af66b*/
      v6[2] = v5[2]; /*0x7af672*/
      v6[3] = v5[3]; /*0x7af67f*/
      (*(void (__thiscall **)(int, unsigned int *, unsigned int))(*(unsigned int *)DSurface_Alternate + 20))(DSurface_Alternate, v6, 0); /*0x7af68a*/
      return (*(int (__thiscall **)(int, unsigned int *, unsigned int, unsigned int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x7af6a7*/
               DSurface_Alternate,
               v6,
               this->referenceCount,
               v6,
               0,
               1);
    }
  }
  return result; /*0x7af6aa*/
}
}
// 0x7AF6C0
namespace gamemd {
void WorldDominationFactionDlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int result; // eax
  unsigned int *WindowLongA; // eax
  unsigned int *v7; // esi
  int v8; // ecx
  int *v9; // eax
  wchar_t *StringCSF; // eax
  int v11; // [esp+10h] [ebp-20h] BYREF
  unsigned int v12; // [esp+14h] [ebp-1Ch]
  int v13; // [esp+18h] [ebp-18h]
  int v14; // [esp+1Ch] [ebp-14h]
  unsigned char v15[16]; // [esp+20h] [ebp-10h] BYREF

  v4 = a4; /*0x7af6c9*/
  if ( a2 == 272 && a4 ) /*0x7af6dd*/
    SetWindowLongA(hWnd, 8, *(unsigned int *)(a4 + 4)); /*0x7af6e6*/
  result = BaseDialogProc(hWnd, a2, a3, v4); /*0x7af6f6*/
  if ( !result ) /*0x7af6fd*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x7af706*/
    v7 = WindowLongA; /*0x7af712*/
    if ( a2 > 0x111 ) /*0x7af714*/
    {
      if ( a2 == 514 ) /*0x7af82f*/
      {
        if ( WindowLongA[3] ) /*0x7af8c6*/
          (*(void (__thiscall **)(unsigned int *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x7af8d4*/
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
          StringCSF = GetStringCSF((wchar_t *)aWdtFactionsele, 0, g_Str_File_WorldDom_cpp, 182); /*0x7af86f*/
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
          case 0xFu: /*0x7af734*/
            Dialog::DrawBackground(hWnd); /*0x7af77e*/
            if ( DSurface_Alternate ) /*0x7af78a*/
            {
              v8 = v7[7]; /*0x7af78c*/
              if ( v8 ) /*0x7af791*/
              {
                v9 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v8 + 120))(v8, v15); /*0x7af79a*/
                v11 = *v9; /*0x7af7a1*/
                v12 = v9[1]; /*0x7af7a8*/
                v13 = v9[2]; /*0x7af7af*/
                v14 = v9[3]; /*0x7af7bc*/
                (*(void (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)DSurface_Alternate + 20))( /*0x7af7c7*/
                  DSurface_Alternate,
                  &v11,
                  0);
                (*(void (__thiscall **)(int, int *, unsigned int, int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x7af7e4*/
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
            v11 = (uint16_t)v4; /*0x7af74d*/
            v12 = IDA_HIWORD(v4); /*0x7af751*/
            WorldDominationFactionDlgProc_Helper(hWnd, (int)&v11); /*0x7af755*/
            result = 0; /*0x7af75d*/
            break; /*0x7af763*/
          default:
            return 0;
        }
        return result; /*0x7af763*/
      }
      if ( (unsigned short)a3 == 1670 ) /*0x7af80d*/
      {
        (*(void (__thiscall **)(unsigned int *, HWND, int))(*WindowLongA + 4))(WindowLongA, hWnd, -1); /*0x7af81a*/
        return 0; /*0x7af826*/
      }
    }
    return 0; /*0x7af8d7*/
  }
  return result; /*0x7af75a*/
}
}
// 0x7AF970
namespace gamemd {
AbstractClass * * sub_7AF970()
{
  unsigned int *v2; // eax
  int v3; // edi
  unsigned int v5[3]; // [esp+Ch] [ebp-8Ch] BYREF
  int v6; // [esp+18h] [ebp-80h]
  unsigned int *v7; // [esp+1Ch] [ebp-7Ch]
  void (__thiscall ***v8)(unsigned int, int); // [esp+20h] [ebp-78h]
  unsigned int *v9; // [esp+24h] [ebp-74h]
  unsigned int *v10; // [esp+28h] [ebp-70h]
  unsigned int v11[22]; // [esp+2Ch] [ebp-6Ch] BYREF
  unsigned char v12[12]; // [esp+84h] [ebp-14h] BYREF
  int v13; // [esp+90h] [ebp-8h]

  Screen::Capture(1, 0, a1, a2); /*0x7af97c*/
  SimpleDialogControl::Constructor(v5); /*0x7af985*/
  v6 = 0; /*0x7af995*/
  v7 = 0; /*0x7af999*/
  v8 = 0; /*0x7af99d*/
  v9 = 0; /*0x7af9a1*/
  CCFileClass::Construct(v11, aWdtfsbsmPcx); /*0x7af9ad*/
  v7 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7af9cb*/
  v13 = 0; /*0x7af9d3*/
  Vector::Clear((int)v12); /*0x7af9da*/
  v11[0] = &off_7E1668; /*0x7af9e3*/
  BufferIOFileClass::Dtor(v11); /*0x7af9eb*/
  if ( !v8 ) /*0x7af9f4*/
  {
    CCFileClass::Construct(v11, aWdtfsasmPcx); /*0x7af9ff*/
    v2 = DecodeFrameSHP((int)v11, 0, 0, 0); /*0x7afa0c*/
    v8 = (void (__thiscall ***)(unsigned int, int))v2; /*0x7afa1c*/
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
  v10 = v7; /*0x7afa76*/
  RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v5); /*0x7afa7a*/
  v3 = v6; /*0x7afa7f*/
  if ( v7 ) /*0x7afa91*/
    (*(void (__thiscall **)(unsigned int *, int))*v7)(v7, 1); /*0x7afa97*/
  if ( v8 ) /*0x7afa9f*/
    (**v8)(v8, 1); /*0x7afaa5*/
  if ( v9 ) /*0x7afaad*/
    (*(void (__thiscall **)(unsigned int *, int))*v9)(v9, 1); /*0x7afab3*/
  OwnerDrawControl::InitVtable(v5); /*0x7afab9*/
  return v3; /*0x7afac0*/
}
}
// 0x7AFB90
namespace gamemd {
int StartWDTCampaign()
{
  wchar_t *String; // eax
  wchar_t *v2; // eax
  void (__thiscall ***v4)(void *, int); // ebp
  unsigned int *v5; // eax
  char v6; // bl
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  char v9; // bl
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  char v12; // bl
  unsigned int *v13; // eax
  int v14; // esi
  int v15; // esi
  void (__thiscall ***v16)(void *, int); // [esp+10h] [ebp-12Ch] BYREF
  char v17; // [esp+17h] [ebp-125h]
  void **v18; // [esp+18h] [ebp-124h] BYREF
  int v19; // [esp+1Ch] [ebp-120h]
  unsigned int *v20; // [esp+20h] [ebp-11Ch]
  void (__stdcall ***v21)(int); // [esp+24h] [ebp-118h]
  void **v22; // [esp+28h] [ebp-114h] BYREF
  int v23; // [esp+2Ch] [ebp-110h]
  unsigned int v24[22]; // [esp+30h] [ebp-10Ch] BYREF
  unsigned int v25[3]; // [esp+88h] [ebp-B4h] BYREF
  int v26; // [esp+94h] [ebp-A8h]
  unsigned int v27[8]; // [esp+9Ch] [ebp-A0h] BYREF

  v17 = a1; /*0x7afba6*/
  if ( g_DisplayWidth > 640 ) /*0x7afbaa*/
  {
    String = GetStringCSF(aWolWdtresoluti, 0, g_Str_File_WorldDom_cpp, 385); /*0x7afbc1*/
    WideString::Assign((wchar_t **)&v16, String); /*0x7afbcb*/
    v2 = WideString::GetOrEmpty((wchar_t **)&v16); /*0x7afbdb*/
    if ( ShowDialogConfirm(v2, 4, (int)Game::ProcessIdle, 1) != 6 || !(uint8_t)Team_Start(640, 480) ) /*0x7afc0e*/
    {
      DeleteAndZero::Alt((void **)&v16); /*0x7afbf5*/
      return 0; /*0x7afc06*/
    }
    g_CommandLineFlags = 640; /*0x7afc32*/
    g_CommandLineParam = 480; /*0x7afc38*/
    ScenarioClass::SaveGameOptions((int)g_GameModeOptions); /*0x7afc42*/
    DeleteAndZero::Alt((void **)&v16); /*0x7afc4b*/
  }
  v4 = 0; /*0x7afc52*/
  v21 = 0; /*0x7afc5d*/
  v20 = 0; /*0x7afc61*/
  v16 = 0; /*0x7afc65*/
  v5 = CCFileClass::Construct(v24, g_Str_File_WDT_MIX); /*0x7afc69*/
  v6 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v5 + 20))(v5, 0); /*0x7afc82*/
  v26 = 0; /*0x7afc88*/
  Vector::Clear((int)v25); /*0x7afc8f*/
  v24[0] = &off_7E1668; /*0x7afc98*/
  BufferIOFileClass::Dtor(v24); /*0x7afca0*/
  if ( v6 ) /*0x7afca7*/
  {
    v7 = operator new(0x28u); /*0x7afcab*/
    if ( v7 ) /*0x7afcb5*/
      v21 = (void (__stdcall ***)(int))MixFileClass::FromFile(v7, g_Str_File_WDT_MIX, (int)&dword_886980); /*0x7afcc8*/
    else
      v21 = 0; /*0x7afcce*/
  }
  v8 = CCFileClass::Construct(v24, aWdtvoxMix); /*0x7afcdb*/
  v9 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v8 + 20))(v8, 0); /*0x7afcef*/
  v26 = 0; /*0x7afcf5*/
  Vector::Clear((int)v25); /*0x7afcfc*/
  v24[0] = &off_7E1668; /*0x7afd05*/
  BufferIOFileClass::Dtor(v24); /*0x7afd0d*/
  if ( v9 ) /*0x7afd14*/
  {
    v10 = operator new(0x28u); /*0x7afd18*/
    if ( v10 ) /*0x7afd22*/
      v20 = MixFileClass::FromFile(v10, aWdtvoxMix, (int)&dword_886980); /*0x7afd35*/
    else
      v20 = 0; /*0x7afd3b*/
  }
  v11 = CCFileClass::Construct(v24, aLocalMix_1); /*0x7afd48*/
  v12 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v11 + 20))(v11, 0); /*0x7afd5c*/
  v26 = 0; /*0x7afd62*/
  Vector::Clear((int)v25); /*0x7afd69*/
  v24[0] = &off_7E1668; /*0x7afd72*/
  BufferIOFileClass::Dtor(v24); /*0x7afd7a*/
  if ( v12 ) /*0x7afd81*/
  {
    v13 = operator new(0x28u); /*0x7afd85*/
    if ( v13 ) /*0x7afd8f*/
      v16 = (void (__thiscall ***)(void *, int))MixFileClass::FromFile(v13, aLocalMix_1, (int)&dword_886980); /*0x7afda2*/
    else
      v16 = 0; /*0x7afda8*/
    v4 = v16; /*0x7afdac*/
  }
  if ( !v21 ) /*0x7afdb6*/
    goto LABEL_46; /*0x7afdb6*/
  if ( !v4 ) /*0x7afdbe*/
  {
    (**v21)(1); /*0x7b004a*/
  LABEL_46:
    if ( v4 ) /*0x7b004e*/
      (**v4)(v4, 1); /*0x7b0057*/
    if ( v20 ) /*0x7b005f*/
      (*(void (__thiscall **)(unsigned int *, int))*v20)(v20, 1); /*0x7b0065*/
    return 0; /*0x7b006a*/
  }
  v14 = v17 != 0 ? 4 : 1;
  if ( (v17 != 0 ? 3 : 0) == 0xFFFFFFFF )
    goto LABEL_41; /*0x7afdd2*/
  while ( 2 )
  {
    if ( v14 == 6 ) /*0x7afde0*/
      goto LABEL_40; /*0x7afde0*/
    switch ( v14 )
    {
      case 1:
        Screen::Capture(1, 0, v12, (int)&rc_ptr_WorldDominationTour_Campaign_vftable); /*0x7afdf9*/
        Team_Start_7B0490(v27); /*0x7afe05*/
        RunDialog(0x125u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))WorldDominationFactionDlgProc, (LPARAM)v27); /*0x7afe1c*/
        v15 = v27[3]; /*0x7afe21*/
        Team_Start_7AF500(v27); /*0x7afe2f*/
        dword_B77F94 = v15; /*0x7afe34*/
        v14 = v15 != 0 ? 4 : 0;
        goto LABEL_25; /*0x7afe3e*/
      case 4:
        if ( (uint8_t)FetchWOLData() ) /*0x7afeef*/
        {
          ComPtr::Constructor(&v18); /*0x7aff00*/
          ComPtr::Set(&v18, dword_B77F6C); /*0x7aff13*/
          if ( !v19 ) /*0x7aff1e*/
          {
            ComPtr::Release(&v18); /*0x7b0034*/
            return 0; /*0x7b0045*/
          }
          Team_Start_765410(dword_B77F94); /*0x7aff2b*/
          if ( (uint8_t)Team_Start_764FA0(v19) ) /*0x7aff34*/
          {
            ComPtr::Constructor(&v22); /*0x7aff41*/
            ComPtr::Set(&v22, dword_B77F7C); /*0x7aff54*/
            if ( v23 && !(uint8_t)Team_Start_764FA0(v23) ) /*0x7aff61*/
              Team_Start_76ECD0(&v22, dword_B77F98); /*0x7aff74*/
            ComPtr::Release(&v22); /*0x7aff81*/
          }
          g_CommandExecState = dword_B77F94 == 3; /*0x7aff9a*/
          if ( (uint8_t)Team_Start_76ED10(&v18, dword_B77F98) ) /*0x7affa4*/
          {
            dword_B77DC4 = 0; /*0x7affb2*/
            Team_Start_597430(dword_ABDFD8); /*0x7affb8*/
            v14 = 5; /*0x7affbd*/
          }
          else
          {
            v14 = 1; /*0x7affc4*/
          }
          ComPtr::Release(&v18); /*0x7affd1*/
  LABEL_25:
          if ( !v14 ) /*0x7afe43*/
            goto LABEL_40; /*0x7afe43*/
          continue; /*0x7afe43*/
        }
        v14 = 0; /*0x7afff2*/
  LABEL_40:
        v4 = v16; /*0x7afff4*/
  LABEL_41:
        ((void (__thiscall *)(void (__stdcall ***)(int), int))**v21)(v21, 1); /*0x7afff8*/
        (**v4)(v4, 1); /*0x7b0009*/
        if ( v20 ) /*0x7b0011*/
          (*(void (__thiscall **)(unsigned int *, int))*v20)(v20, 1); /*0x7b0017*/
        return v14 == 6;
      case 5:
        v14 = JoinLobbyWOL() != 1 ? 4 : 6;
        continue; /*0x7affed*/
    }
  }
}
}
// 0x7A0D10
namespace gamemd {
int sub_7A0D10()
{
  int result; // eax
  int v1; // ebp
  signed int v2; // ebx
  signed int v3; // edi
  ULONG S_addr; // esi
  char *v5; // eax
  size_t v6; // [esp+Ch] [ebp-78h]
  int v7; // [esp+10h] [ebp-74h] BYREF
  int v8; // [esp+14h] [ebp-70h]
  struct in_addr v9[27]; // [esp+18h] [ebp-6Ch] BYREF

  result = g_NetworkLobbyState; /*0x7a0d10*/
  v1 = 0; /*0x7a0d1a*/
  if ( !g_NetworkLobbyState ) /*0x7a0d1f*/
  {
    result = 0; /*0x7a0d2a*/
    v2 = 0; /*0x7a0d30*/
    memset(v9, 0, sizeof(v9)); /*0x7a0d32*/
    v3 = g_WOL_State; /*0x7a0d34*/
    v7 = 0; /*0x7a0d3a*/
    v6 = g_WOL_State; /*0x7a0d40*/
    if ( (int)g_WOL_State > 0 ) /*0x7a0d44*/
    {
      do /*0x7a0dba*/
      {
        if ( v1 >= 0 && v2 < (int)g_WOL_State ) /*0x7a0d51*/
        {
          qmemcpy(v9, (char *)g_WOL_ConnectionFlags + v1, sizeof(v9)); /*0x7a0d64*/
          v3 = v6; /*0x7a0d66*/
        }
        S_addr = v9[6].S_un.S_addr; /*0x7a0d6f*/
        ntoainet(v9[6]); /*0x7a0d71*/
        Debug::Log(); /*0x7a0d81*/
        v8 = *(unsigned int *)g_UIPointerTable; /*0x7a0d9c*/
        v5 = ntoainet((struct in_addr)S_addr); /*0x7a0da0*/
        result = (*(int (__stdcall **)(LPVOID, char *, int, int *))(v8 + 24))(g_UIPointerTable, v5, 1000, &v7); /*0x7a0db1*/
        ++v2; /*0x7a0db4*/
        v1 += 108; /*0x7a0db5*/
      }
      while ( v2 < v3 ); /*0x7a0dba*/
    }
  }
  return result; /*0x7a0dbd*/
}
} // namespace gamemd

// 0x7A0EA0
namespace gamemd {
void INIClass::SetGameOptionsPing()
{
  int i; // edi
  char *v5; // ecx
  HWND GameUI; // ecx

  Debug::Log(); /*0x7a0eaf*/
  for ( i = 0; i < 8; ++i ) /*0x7a0eb7*/
  {
    v5 = (char *)*(&g_NetworkPlayerName + i); /*0x7a0eb9*/
    if ( v5 ) /*0x7a0ec2*/
    {
      if ( !strcmp(ToWideStringChar(v5), a1) ) /*0x7a0ed1*/
      {
        dword_B76440[i] = a2; /*0x7a0ef8*/
        GameUI = (HWND)Dialog::FindGameUI(); /*0x7a0f04*/
        if ( GameUI ) /*0x7a0f08*/
        {
          if ( a2 >= 0 ) /*0x7a0f0c*/
          {
            if ( a2 >= 300 ) /*0x7a0f18*/
            {
              if ( a2 >= 500 ) /*0x7a0f24*/
                UpdateLobbyGraphicsWOL(GameUI, 2); /*0x7a0f2e*/
              else
                UpdateLobbyGraphicsWOL(GameUI, 1); /*0x7a0f28*/
            }
            else
            {
              UpdateLobbyGraphicsWOL(GameUI, 0); /*0x7a0f1c*/
            }
          }
          else
          {
            UpdateLobbyGraphicsWOL(GameUI, -1); /*0x7a0f10*/
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
  if ( a2 > 0x2B ) /*0x7a2117*/
  {
    switch ( a2 ) /*0x7a2183*/
    {
      case 0x111u: /*0x7a2183*/
        switch ( (uint16_t)a3 ) /*0x7a21ce*/
        {
          case 0x5C0u: /*0x7a21ce*/
            if ( g_WOL_IdleHandler == 11 ) /*0x7a220b*/
            {
              CloseDialog(hWnd, 0); /*0x7a2213*/
              return 0; /*0x7a221a*/
            }
            SetEvent(Handles); /*0x7a2224*/
            break;
          case 0x708u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 44))(ppv, aStart443900100_0); /*0x7a21fc*/
            return 0; /*0x7a2201*/
          case 0x709u: /*0x7a21ce*/
            (*(void (__stdcall **)(LPVOID, char *))(*(unsigned int *)ppv + 44))(ppv, aStart443900100); /*0x7a21e7*/
            return 0; /*0x7a21ec*/
        }
        break;
      case 0x113u: /*0x7a2183*/
        if ( !a3 ) /*0x7a21b4*/
        {
          sub_5E2AC0(); /*0x7a21b6*/
          return 0; /*0x7a21bd*/
        }
        break;
      case 0x497u: /*0x7a2183*/
        SetTimer(hWnd, 0, 0x7D0u, 0); /*0x7a21a3*/
        return 0; /*0x7a21ab*/
    }
  }
  else
  {
    switch ( a2 ) /*0x7a2119*/
    {
      case 0x2Bu: /*0x7a2119*/
        Dialog::Resize(a4); /*0x7a2171*/
        return 1; /*0x7a217b*/
      case 2u: /*0x7a2119*/
        KillTimer(hWnd, 0); /*0x7a2162*/
        return 0; /*0x7a216a*/
      case 0xFu: /*0x7a2119*/
        Dialog::DrawBackground(hWnd); /*0x7a213d*/
        Dialog::StopBink(hWnd); /*0x7a2144*/
        ValidateRect(hWnd, 0); /*0x7a214c*/
        return 1; /*0x7a2158*/
      case 0x14u: /*0x7a2119*/
        return 1; /*0x7a2133*/
    }
  }
  return 0; /*0x7a2133*/
}
} // namespace gamemd

// 0x7A2600
namespace gamemd {
int sub_7A2600(HWND hWnd, unsigned int a2, int a3, char * a4)
{
  int result; // eax
  unsigned int *v5; // ecx
  void *v6; // esi

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x7a261a*/
  if ( !result ) /*0x7a2621*/
  {
    if ( a2 > 0x2B ) /*0x7a262a*/
    {
      if ( a2 == 273 && (unsigned short)a3 == 1472 ) /*0x7a270c*/
      {
        SetEvent(Handles); /*0x7a2714*/
        CloseDialog(hWnd, 1472); /*0x7a2721*/
      }
      return 0; /*0x7a2726*/
    }
    if ( a2 == 43 ) /*0x7a2630*/
    {
      Dialog::Resize(a4); /*0x7a26ee*/
      return 1; /*0x7a26fc*/
    }
    if ( a2 == 2 ) /*0x7a2639*/
    {
      v6 = g_UIControlState; /*0x7a26bf*/
      if ( g_UIControlState ) /*0x7a26c7*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x7a26cb*/
        RA2_OPDEL(v6); /*0x7a26d1*/
        g_UIControlState = 0; /*0x7a26d9*/
        return 0; /*0x7a26e9*/
      }
      return 0; /*0x7a26c7*/
    }
    if ( a2 != 15 ) /*0x7a2642*/
      return a2 == 20; /*0x7a2647*/
    Dialog::DrawBackground(hWnd); /*0x7a265b*/
    Dialog::StopBink(hWnd); /*0x7a2662*/
    v5 = g_UIControlState; /*0x7a2667*/
    if ( g_UIControlState || g_GameRulesOptions == -1 && (v5 = g_Map_TiberiumConfig) != 0 ) /*0x7a2682*/
      Skirmish::RenderPreview(v5, hWnd); /*0x7a2685*/
    if ( LoadScreen::IsActive(g_UIManager) ) /*0x7a268f*/
      LoadScreen::Render((int)g_UIManager, a3, (int)a4, NAN); /*0x7a26a5*/
    ValidateRect(hWnd, 0); /*0x7a26ad*/
    return 1; /*0x7a26b6*/
  }
  return result; /*0x7a264d*/
}
} // namespace gamemd

// 0x7AC4F0
namespace gamemd {
void nullsub_265()
{
  ; /*0x7ac4f0*/
}
} // namespace gamemd

// 0x7ACBD0
namespace gamemd {
void E4Recv_7ACBD0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_1()
{
  *(unsigned int *)this = 0; /*0x7acbd0*/
}
} // namespace gamemd

// 0x7AF090
namespace gamemd {
int sub_7AF090()
{
  dword_B77ED0 = 0; /*0x7af092*/
  dword_B77ED4 = 0; /*0x7af097*/
  dword_B77ED8 = 0; /*0x7af09c*/
  dword_B77EDC = 0; /*0x7af0a1*/
  return 0; /*0x7af0a6*/
}
} // namespace gamemd

// 0x7AF0B0
namespace gamemd {
void sub_7AF0B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x7af0bc*/
  dbl_B77EE8 = Math::Sqrt(v0 + v0); /*0x7af0ce*/
}
} // namespace gamemd

// 0x7AF0E0
namespace gamemd {
void sub_7AF0E0()
{
  dbl_B77F88 = dbl_B77EE8 / 60.0; /*0x7af0ec*/
}
} // namespace gamemd

// 0x7AF100
namespace gamemd {
void sub_7AF100()
{
  dbl_B77F40 = 1.0 / dbl_B77F88; /*0x7af10c*/
}
} // namespace gamemd

// 0x7AF120
namespace gamemd {
void sub_7AF120()
{
  dbl_B77F38 = 0.0174532925199433 * 45.0; /*0x7af12c*/
}
} // namespace gamemd

// 0x7AF140
namespace gamemd {
void sub_7AF140()
{
  dbl_B77EF8 = 0.0174532925199433 * 60.0; /*0x7af14c*/
}
} // namespace gamemd

// 0x7AF160
namespace gamemd {
void sub_7AF160()
{
  dbl_B77EB8 = 0.0174532925199433 * 90.0; /*0x7af16c*/
}
} // namespace gamemd

// 0x7AF180
namespace gamemd {
long long sub_7AF180()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B77EB8 - dbl_B77EF8); /*0x7af192*/
  result = Math::RoundToInt(v0 * dbl_B77EE8 * 0.5); /*0x7af1a6*/
  dword_B77F90 = result; /*0x7af1ab*/
  return result; /*0x7af1b0*/
}
} // namespace gamemd

// 0x7AF1C0
namespace gamemd {
void sub_7AF1C0()
{
  dbl_B77F00 = Math::ArcTan((double)dword_B77F90 * 0.00390625); /*0x7af1d7*/
}
} // namespace gamemd

// 0x7AF1F0
namespace gamemd {
void sub_7AF1F0()
{
  dbl_B77F28 = Math::ArcTan((double)(2 * dword_B77F90) / dbl_B77EE8); /*0x7af212*/
}
} // namespace gamemd

// 0x7AF220
namespace gamemd {
long long sub_7AF220()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B77F90) + 0.5); /*0x7af23b*/
  dword_B77F80 = result; /*0x7af240*/
  return result; /*0x7af246*/
}
} // namespace gamemd

// 0x7AF250
namespace gamemd {
int sub_7AF250()
{
  word_B77EE0 = 0; /*0x7af252*/
  word_B77EE2 = 0; /*0x7af258*/
  return 0; /*0x7af25e*/
}
} // namespace gamemd

// 0x7AF260
namespace gamemd {
int sub_7AF260()
{
  dword_B77F10 = 0; /*0x7af262*/
  dword_B77F14 = 0; /*0x7af267*/
  dword_B77F18 = 0; /*0x7af26c*/
  return 0; /*0x7af271*/
}
} // namespace gamemd

// 0x7AF280
namespace gamemd {
int sub_7AF280()
{
  dword_B77F50 = 0; /*0x7af285*/
  dword_B77F48 = 128; /*0x7af28f*/
  dword_B77F4C = 128; /*0x7af294*/
  return 128; /*0x7af299*/
}
} // namespace gamemd

// 0x7AF390
namespace gamemd {
int unknown_libname_61()
{
  DeleteAndZero((void **)&unk_B77EF0); /*0x7af395*/
}
} // namespace gamemd

// 0x7AF3A0
namespace gamemd {
int unknown_libname_62()
{
  DeleteAndZero((void **)&unk_B77F30); /*0x7af3a5*/
}
} // namespace gamemd

// 0x7AF3B0
namespace gamemd {
int unknown_libname_63()
{
  DeleteAndZero((void **)&dword_B77F08); /*0x7af3b5*/
}
} // namespace gamemd

// 0x7AF3C0
namespace gamemd {
int unknown_libname_64()
{
  DeleteAndZero((void **)&unk_B77F20); /*0x7af3c5*/
}
} // namespace gamemd

// 0x7AF4C0
namespace gamemd {
int unknown_libname_65()
{
  DeleteAndZero((void **)&unk_B77EB0); /*0x7af4c5*/
}
} // namespace gamemd

// 0x7AF4D0
namespace gamemd {
int unknown_libname_66()
{
  DeleteAndZero((void **)&dword_B77F1C); /*0x7af4d5*/
}
} // namespace gamemd

// 0x7AF4E0
namespace gamemd {
int unknown_libname_67()
{
  DeleteAndZero((void **)&unk_B77EC8); /*0x7af4e5*/
}
} // namespace gamemd

// 0x7AF4F0
namespace gamemd {
int unknown_libname_68()
{
  DeleteAndZero((void **)&dword_B77EC0); /*0x7af4f5*/
}
} // namespace gamemd
