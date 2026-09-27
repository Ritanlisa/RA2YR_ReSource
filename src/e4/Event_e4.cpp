// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_625C00_e4.hpp"
#include "e4/classes/E4Recv_6B0490_e4.hpp"
#include "e4/classes/E4Recv_746D90_e4.hpp"
#include "e4/classes/E4Recv_77A870_e4.hpp"
#include "e4/classes/E4Recv_77A890_e4.hpp"
#include "e4/classes/E4Recv_77A8B0_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/Event_Dispatch_e4.hpp"
#include "e4/classes/E4Recv_633AC0_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"

// 0x48D080
namespace gamemd {
int Event::Dispatch()
{
  __time32_t v0; // eax
  unsigned char v2[4]; // [esp+10h] [ebp-100h] BYREF
  unsigned int v3[6]; // [esp+14h] [ebp-FCh] BYREF
  unsigned char v4[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( g_AsyncIOState > 0 && *(unsigned int *)AsyncIO_Instance ) /*0x48d09f*/
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)AsyncIO_Instance + 8))(*(unsigned int *)AsyncIO_Instance); /*0x48d0a7*/
  v0 = g_GameMode_Current; /*0x48d0aa*/
  if ( g_GameMode_Current == 3 || g_GameMode_Current == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    v0 = g_GameMode_Current; /*0x48d0be*/
  }
  if ( v0 == 1 ) /*0x48d0c6*/
  {
    if ( (GameFlags_Campaign & 1) == 0 ) /*0x48d0da*/
      return v0; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( v0 == 2 ) /*0x48d0cb*/
  {
  LABEL_11:
    Stream::ReadPacket(&g_EventManager); /*0x48d0e0*/
    if ( *((unsigned char *)g_ScenarioClass_Instance + 13720) && (int)ObjectTypeClass::CreateInstance(v3, v2) > 0 ) /*0x48d10f*/
    {
      do /*0x48d15f*/
      {
        if ( v3[0] == 108 && v4[0] != g_EventDispatchState ) /*0x48d129*/
          Network::UpdateLatencyDisplay(1, (double)*(int *)&v4[1], NAN); /*0x48d144*/
      }
      while ( (int)ObjectTypeClass::CreateInstance(v3, v2) > 0 ); /*0x48d15f*/
    }
    v0 = g_GameMode_Current; /*0x48d161*/
  }
  if ( v0 == 4 ) /*0x48d169*/
  {
    IDA_LOBYTE(v0) = byte_B77DC2; /*0x48d16b*/
    if ( !byte_B77DC2 ) /*0x48d172*/
    {
      v0 = time(0); /*0x48d176*/
      if ( v0 != dword_89E9B0 ) /*0x48d186*/
      {
        if ( ppv && !dword_B77DCC ) /*0x48d199*/
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 12))(ppv); /*0x48d19e*/
        if ( g_UIPointerTable ) /*0x48d1a8*/
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x48d1ad*/
        v0 = time(0); /*0x48d1b2*/
        dword_89E9B0 = v0; /*0x48d1ba*/
      }
    }
  }
  return v0; /*0x48d1bf*/
}
}
// 0x5E2FA0
namespace gamemd {
void sub_5E2FA0()
{
  WPARAM result; // eax
  HWND Current; // esi

  result = Dialog::GetCurrentType(); /*0x5e2fa2*/
  if ( result == 107 ) /*0x5e2faa*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2fb7*/
    result = SendDlgItemMessageA(Current, 1771, 0x188u, 0, 0); /*0x5e2fc8*/
    if ( result != -1 ) /*0x5e2fcd*/
    {
      result = SendDlgItemMessageA(Current, 1771, 0x199u, result, 0); /*0x5e2fdd*/
      if ( result ) /*0x5e2fe1*/
        return (*(int (__thiscall **)(WPARAM))(*(unsigned int *)result + 148))(result); /*0x5e2fe7*/
    }
  }
  else if ( g_GameStateFlags ) /*0x5e2ff8*/
  {
    return (*(int (__thiscall **)(int))(*(unsigned int *)g_GameStateFlags + 148))(g_GameStateFlags); /*0x5e2ffc*/
  }
  return result; /*0x5e2fed*/
}
}
// 0x5E95E0
namespace gamemd {
void sub_5E95E0()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax
  uint8_t v4; // [esp+0h] [ebp-Ch]
  unsigned int v5;

  v5 = (LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((int)((LPARAM *)(dword_A8B548)))))))))))));
  if ( dword_A8B548 >= dword_A8BB0C ) /*0x5e95f4*/
    v5 = dword_A8BB0C; /*0x5e95f6*/
  v0 = 0; /*0x5e9618*/
  v1 = &g_NetworkPlayerName; /*0x5e961a*/
  while ( 1 ) /*0x5e961f*/
  {
    v2 = *v1; /*0x5e961f*/
    if ( *v1 ) /*0x5e961f*/
    {
      if ( v2 != g_HouseClass_ObserverFlags /*0x5e9645*/
        && v2 != g_Lobby_PlayerCount
        && v2 != g_Lobby_MaxPlayers
        && (wchar_t *)v2 != g_Lobby_PlayerReady
        && v0 == g_MPCooperativeState
        && v2->q1AC == -1 )
      {
        break; /*0x5e9645*/
      }
    }
    ++v1; /*0x5e9647*/
    ++v0; /*0x5e964a*/
    if ( (int)v1 >= (int)&g_PlayerNameListEnd ) /*0x5e9651*/
    {
      v4 = 0; /*0x5e9653*/
      goto LABEL_13; /*0x5e9653*/
    }
  }
  v4 = 1; /*0x5e968d*/
  LABEL_13:
  if ( Game_PlayerCount - v4 <= v5 ) /*0x5e9671*/
    return 0; /*0x5e9694*/
  Debug::Log(); /*0x5e967f*/
  return 1; /*0x5e9689*/
}
}
// 0x796960
namespace gamemd {
void sub_796960()
{
  int v0; // eax
  int v1; // esi
  char *v2; // eax
  int v3; // eax
  char *v4; // edx
  char *v5; // eax
  unsigned char v7[12]; // [esp+8h] [ebp-240h] BYREF
  unsigned int v8[27]; // [esp+14h] [ebp-234h] BYREF
  int v9[113]; // [esp+80h] [ebp-1C8h] BYREF
  int16_t v10; // [esp+244h] [ebp-4h]
  char v11; // [esp+246h] [ebp-2h]

  IDA_LOBYTE(v0) = g_GameMode_Current[0]; /*0x796960*/
  if ( g_GameMode_Current[0] == 4 ) /*0x796970*/
    return v0; /*0x796970*/
  Waypoint::InitInvalid(v7); /*0x79697a*/
  v0 = g_WOL_State; /*0x79697f*/
  if ( (int)g_WOL_State < 2 ) /*0x796987*/
    return v0; /*0x796987*/
  v1 = 0; /*0x79698d*/
  if ( (int)g_WOL_State <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((int *)&g_WOL_State, &g_IsMultiplayerSession, v1); /*0x7969a3*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    v0 = g_WOL_State; /*0x7969b0*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( !&g_IsMultiplayerSession /*0x7969df*/
    || (v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), (v0 = _strcmpi(byte_B777D4, v2)) != 0) )
  {
    v0 = g_WOL_State; /*0x7969e5*/
  LABEL_10:
    if ( !g_NetworkLobbyState && g_WOL_ProcessIdle ) /*0x796a00*/
    {
      if ( v0 > 0 ) /*0x796a0a*/
        qmemcpy(v8, g_WOL_ConnectionFlags, sizeof(v8)); /*0x796a1b*/
      v8[8] = 0; /*0x796a21*/
      Network::SyncPlayerList(); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress((uint16_t *)&g_NetworkRematchObject, 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v9, 0, sizeof(v9)); /*0x796a6f*/
      v10 = 0; /*0x796a79*/
      v11 = 0; /*0x796a7b*/
      v9[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v9[1], *(char **)Game_PlayerInfoArray, -1); /*0x796a90*/
      v3 = 0; /*0x796a9b*/
      if ( (int)g_WOL_State > 0 ) /*0x796a9f*/
      {
        v4 = (char *)g_WOL_ConnectionFlags; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x796aad*/
            qmemcpy(&g_IsMultiplayerSession, v4, 0x6Cu); /*0x796abb*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v3; /*0x796ac5*/
          v4 += 108; /*0x796ac6*/
          if ( v3 >= (int)g_WOL_State ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796ae4*/
        {
          v5 = (char *)(CharToWideString(byte_B777D4));
          Network::SendToPlayer((int)g_NetworkManager, (int)v9, 455, 1, (wchar_t *)v5); /*0x796b04*/
        }
      }
  LABEL_24:
      IDA_LOBYTE(v0) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return v0; /*0x796ad4*/
}
}
// 0x7A0F40
namespace gamemd {
int sub_7A0F40()
{
  int result; // eax
  signed int v1; // ebp
  int v2; // ebx
  unsigned int v3; // edx
  char *v4; // edi
  char *v5; // edi
  char *v6; // esi
  char v7; // cl
  int v8; // edx
  int v9; // [esp+Ch] [ebp-1F4h] BYREF
  signed int v10; // [esp+10h] [ebp-1F0h]
  unsigned int v11[27]; // [esp+14h] [ebp-1ECh] BYREF
  char Source[256]; // [esp+80h] [ebp-180h] BYREF
  char Buffer[128]; // [esp+180h] [ebp-80h] BYREF

  v10 = g_WOL_State; /*0x7a0f58*/
  memset(v11, 0, sizeof(v11)); /*0x7a0f5c*/
  Source[0] = 80; /*0x7a0f60*/
  Source[2] = 0; /*0x7a0f67*/
  Source[1] = g_WOL_State + 48; /*0x7a0f6c*/
  result = g_NetworkLobbyState; /*0x7a0f70*/
  if ( !g_NetworkLobbyState ) /*0x7a0f77*/
  {
    v1 = 0; /*0x7a0f7e*/
    if ( (int)g_WOL_State > 0 ) /*0x7a0f82*/
    {
      v2 = 0; /*0x7a0f8a*/
      do /*0x7a102a*/
      {
        if ( v2 >= 0 && v1 < (int)g_WOL_State ) /*0x7a0f96*/
          qmemcpy(v11, (char *)g_WOL_ConnectionFlags + v2, sizeof(v11)); /*0x7a0faa*/
        (*(void (__stdcall **)(LPVOID, unsigned int, int *))(*(unsigned int *)g_UIPointerTable + 32))(g_UIPointerTable, v11[6], &v9); /*0x7a0fbe*/
        sprintf(Buffer, ",%s,%d", (const char *)&v11[9], v9); /*0x7a0fd8*/
        v3 = strlen(Buffer) + 1; /*0x7a0ffd*/
        v4 = &Source[strlen(Source)]; /*0x7a1006*/
        qmemcpy(v4, Buffer, 4 * (v3 >> 2)); /*0x7a100a*/
        v6 = &Buffer[4 * (v3 >> 2)]; /*0x7a100a*/
        v5 = &v4[4 * (v3 >> 2)]; /*0x7a100a*/
        v7 = v3; /*0x7a100c*/
        v8 = v9; /*0x7a100e*/
        qmemcpy(v5, v6, v7 & 3); /*0x7a1015*/
        SetGameOptionsPing((const char *)&v11[9], v8); /*0x7a101b*/
        ++v1; /*0x7a1024*/
        v2 += 108; /*0x7a1025*/
      }
      while ( v1 < v10 ); /*0x7a102a*/
    }
    Debug::Log(); /*0x7a103c*/
    return Network::SendOptionsGame(Source); /*0x7a1048*/
  }
  return result; /*0x7a104e*/
}
}
// 0x786270
namespace gamemd {
void sub_786270()
{
  HKEY phkResult; // [esp+4h] [ebp-110h] BYREF
  BYTE Data[4]; // [esp+8h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+14h] [ebp-100h] BYREF

  *(unsigned int *)Data = 0; /*0x78627e*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x786286*/
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) ) /*0x78628e*/
    {
      strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x7862b6*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) ) /*0x7862d5*/
      {
        cbData = 4; /*0x7862fb*/
        RegQueryValueExA(phkResult, off_84A940, 0, &Type, Data, &cbData); /*0x786303*/
        RegCloseKey(phkResult); /*0x78630e*/
      }
    }
  }
  dword_B77E50 = Data[0]; /*0x786328*/
  if ( ppv ) /*0x78632e*/
    (*(void (__stdcall **)(LPVOID, unsigned int))(*(unsigned int *)ppv + 140))(ppv, *(unsigned int *)Data); /*0x786334*/
  if ( !g_UIPointerTable ) /*0x786341*/
    return 0; /*0x78637d*/
  Debug::Log(); /*0x786353*/
  (*(void (__stdcall **)(LPVOID, char *, int, int))(*(unsigned int *)g_UIPointerTable + 44))( /*0x786371*/
    g_UIPointerTable,
    byte_B73B34,
    dword_B76B0C,
    3);
  return 1; /*0x78631f*/
}
}
// 0x7C5F3D
namespace gamemd {
void sub_7C5F3D()
{
  unsigned int v0; // kr00_4
  unsigned int v1; // kr04_4
  unsigned int v2; // kr08_4
  char v19; // [esp+6h] [ebp-2h]

  byte_84E864 = 0; /*0x7c5f46*/
  v0 = __readeflags(); /*0x7c5f51*/
  __writeeflags(v0 ^ 0x40000); /*0x7c5f5b*/
  v1 = __readeflags(); /*0x7c5f5c*/
  v19 = 3; /*0x7c5f60*/
  if ( v0 != v1 ) /*0x7c5f5e*/
  {
    __writeeflags(v0); /*0x7c5f67*/
    v19 = 4; /*0x7c5f68*/
    __writeeflags(v0 ^ 0x200000); /*0x7c5f74*/
    v2 = __readeflags(); /*0x7c5f75*/
    if ( v0 != v2 ) /*0x7c5f77*/
    {
      _EAX = 0; /*0x7c5f7f*/
      __asm { cpuid } /*0x7c5f81*/
      *(unsigned int *)Source = _EBX; /*0x7c5f83*/
      *(unsigned int *)&Source[4] = _EDX; /*0x7c5f89*/
      *(unsigned int *)&Source[8] = _ECX; /*0x7c5f8f*/
      *(unsigned int *)&Source[12] = 32; /*0x7c5f95*/
      if ( _EAX >= 1 ) /*0x7c5fa2*/
      {
        _EAX = 1; /*0x7c5fa6*/
        __asm { cpuid } /*0x7c5fa7*/
        byte_84E864 = (uint8_t)(_EAX & 0xF0) >> 4; /*0x7c5fb4*/
        v19 = (uint16_t)(_EAX & 0xF00) >> 8; /*0x7c5fc2*/
      }
    }
  }
  byte_84E863 = v19; /*0x7c5fc8*/
  if ( (uint8_t)v19 < 5u ) /*0x7c5fcf*/
    goto LABEL_8; /*0x7c5fcf*/
  _EAX = 1; /*0x7c5fd1*/
  __asm { cpuid } /*0x7c5fd6*/
  if ( ((unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor' & _EDX) != 0 ) /*0x7c5fde*/
  {
    byte_84E862 = 1; /*0x7c5fe5*/
    return 1; /*0x7c5fe0*/
  }
  else
  {
  LABEL_8:
    byte_84E862 = 0; /*0x7c5ff3*/
    return 0; /*0x7c5ff1*/
  }
}
}
// 0x7C5FFF
namespace gamemd {
int sub_7C5FFF()
{
  if ( (uint8_t)byte_84E863 < 5u ) /*0x7c6008*/
    goto LABEL_4; /*0x7c6008*/
  _EAX = 1; /*0x7c600a*/
  __asm { cpuid } /*0x7c600f*/
  if ( (_EDX & 0x8000) != 0 ) /*0x7c6017*/
  {
    byte_84E860 = (uint8_t)byte_84E863 > 5u; /*0x7c6020*/
    byte_84E861 = 1; /*0x7c6029*/
    return 1; /*0x7c6030*/
  }
  else
  {
  LABEL_4:
    byte_84E860 = 0; /*0x7c604e*/
    byte_84E861 = 0; /*0x7c6055*/
    return 0; /*0x7c605c*/
  }
}
}
// 0x48D1D0
char Event_Dispatch::Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}
// 0x601360
namespace gamemd {
bool Event::IsValidActionType()
{
  return this == (void *)268 /*0x6015d4*/
      || this == (void *)148
      || this == (void *)182
      || this == (void *)163
      || this == (void *)115
      || this == (void *)216
      || this == (void *)3003
      || this == (void *)245
      || this == (void *)261
      || this == (void *)226
      || this == (void *)213
      || this == (void *)693
      || this == (void *)183
      || this == (void *)692
      || this == (void *)257
      || this == (void *)297
      || this == (void *)3015
      || this == (void *)3014
      || this == (void *)215
      || this == (void *)264
      || this == (void *)188
      || this == (void *)189
      || this == (void *)187
      || this == (void *)181
      || this == (void *)3002
      || this == (void *)255
      || this == (void *)234
      || this == (void *)107
      || this == (void *)256
      || this == (void *)258
      || this == (void *)184
      || this == (void *)214
      || this == (void *)259
      || this == (void *)287
      || this == (void *)293
      || this == (void *)277
      || this == (void *)290
      || this == (void *)274
      || this == (void *)231
      || this == (void *)278
      || this == (void *)194
      || this == (void *)201
      || this == (void *)285
      || this == (void *)284
      || this == (void *)275
      || this == (void *)254
      || this == (void *)265
      || this == (void *)271
      || this == (void *)279
      || this == (void *)276
      || this == (void *)195
      || this == (void *)292
      || this == (void *)230
      || this == (void *)243
      || this == (void *)244
      || this == (void *)700
      || this == (void *)283
      || this == (void *)270;
}
} // namespace gamemd
