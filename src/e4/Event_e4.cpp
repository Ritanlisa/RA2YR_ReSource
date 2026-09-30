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
#include "e4/classes/Explosion_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x48D080
namespace gamemd {
int Event::Dispatch(void* a1, void* a2, void* a3)
{

  int v0; // eax
  unsigned char v2[4]; // [esp+10h] [ebp-100h] BYREF
  unsigned int v3[6]; // [esp+14h] [ebp-FCh] BYREF
  unsigned char v4[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( dword_A8ED54[187269] > 0 && *(unsigned int *)dword_A8ED54[187266] ) /*0x48d09f*/
    (*(void (**)(unsigned int))(**(unsigned int **)dword_A8ED54[187266] + 8))(*(unsigned int *)dword_A8ED54[187266]); /*0x48d0a7*/
  v0 = MEMORY[0x87F7E8][536212]; /*0x48d0aa*/
  if ( MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    v0 = MEMORY[0x87F7E8][536212]; /*0x48d0be*/
  }
  if ( v0 == 1 ) /*0x48d0c6*/
  {
    if ( (MEMORY[0x87F7E8][538804] & 1) == 0 ) /*0x48d0da*/
      return v0; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( v0 == 2 ) /*0x48d0cb*/
  {
LABEL_11:
    Stream::ReadPacket((int)&MEMORY[0x87F7E8][539810]); /*0x48d0e0*/
    if ( *(unsigned char *)(MEMORY[0x87F7E8][536210] + 13720) /*0x48d10f*/
      && ObjectTypeClass::CreateInstance((int)&MEMORY[0x87F7E8][539810], (int)v3, (int)v2) > 0 )
    {
      do /*0x48d15f*/
      {
        if ( v3[0] == 108 && v4[0] != MEMORY[0x87F7E8][538834] ) /*0x48d129*/
          Network::UpdateLatencyDisplay((int)&dword_A8ED54[55425], 1, (double)*(int *)&v4[1], NAN); /*0x48d144*/
      }
      while ( ObjectTypeClass::CreateInstance((int)&MEMORY[0x87F7E8][539810], (int)v3, (int)v2) > 0 ); /*0x48d15f*/
    }
    v0 = MEMORY[0x87F7E8][536212]; /*0x48d161*/
  }
  if ( v0 == 4 ) /*0x48d169*/
  {
    LOBYTE(v0) = BYTE2(dword_A8ED54[238619]); /*0x48d16b*/
    if ( !BYTE2(dword_A8ED54[238619]) ) /*0x48d172*/
    {
      v0 = time(0); /*0x48d176*/
      if ( v0 != MEMORY[0x87F7E8][31858] ) /*0x48d186*/
      {
        if ( dword_A8ED54[51462] && !dword_A8ED54[238622] ) /*0x48d199*/
          (*(void (**)(int))(*(unsigned int *)dword_A8ED54[51462] + 12))(dword_A8ED54[51462]); /*0x48d19e*/
        if ( dword_A8ED54[51463] ) /*0x48d1a8*/
          (*(void (**)(int))(*(unsigned int *)dword_A8ED54[51463] + 28))(dword_A8ED54[51463]); /*0x48d1ad*/
        v0 = time(0); /*0x48d1b2*/
        MEMORY[0x87F7E8][31858] = v0; /*0x48d1ba*/
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
  int result; // eax
  HWND Current; // esi

    result = Dialog::GetCurrentType();
  if ( result == 107 ) /*0x5e2faa*/
  {
        Current = Dialog::GetCurrent();
    result = SendDlgItemMessageA(Current, 1771, 0x188u, 0, 0); /*0x5e2fc8*/
    if ( result != -1 ) /*0x5e2fcd*/
    {
      result = SendDlgItemMessageA(Current, 1771, 0x199u, result, 0); /*0x5e2fdd*/
      if ( result ) /*0x5e2fe1*/
        return (*(int (**)(int))(*(unsigned int *)result + 148))(result); /*0x5e2fe7*/
    }
  }
  else if ( dword_A8B23C ) /*0x5e2ff8*/
  {
    return (*((int (**)(ObjectClass *))dword_A8B23C->AbstractClass + 37))(dword_A8B23C); /*0x5e2ffc*/
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

  v5 = (unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((unsigned int)((LPARAM *)((int)((LPARAM *)(dword_A8B548))))))))))))))))));
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
        && (wchar_t *)v2 != (wchar_t *)(g_Lobby_PlayerReady)
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
    Debug::Log();
  return 1; /*0x5e9689*/
}
}
// 0x796960
namespace gamemd {
void sub_796960()
{
  Network *v1; // edi
  int owningHouseIndex; // eax
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  ObjectClass *nextObject; // edx
  char *v7; // eax
  Waypoint v9[2]; // [esp+8h] [ebp-240h] BYREF
  int v10[113]; // [esp+80h] [ebp-1C8h] BYREF
  int16_t v11; // [esp+244h] [ebp-4h]
  char v12; // [esp+246h] [ebp-2h]

  IDA_LOBYTE(owningHouseIndex) = dword_A8B238; /*0x796960*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x796970*/
    return owningHouseIndex; /*0x796970*/
  Waypoint::InitInvalid(v9); /*0x79697a*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79697f*/
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x796987*/
    return owningHouseIndex; /*0x796987*/
  v3 = 0; /*0x79698d*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v3); /*0x7969a3*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969b0*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( &g_WebBrowserConfig == (int *)((ObjectClass *))-36 /*0x7969df*/
    || (v4 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
        (owningHouseIndex = _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4)) != 0) )
  {
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969e5*/
  LABEL_10:
    if ( !g_NetworkLobbyState && stru_B76AC4.ambientSoundController[4] ) /*0x796a00*/
    {
      if ( owningHouseIndex > 0 ) /*0x796a0a*/
        qmemcpy(&v9[((unsigned int *)(0].__pad_0))[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796a1b*/
      *(unsigned int *)&v9[((unsigned int *)(0].__pad_0))[44] = 0; /*0x796a21*/
      Network::SyncPlayerList(v1); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress(&stru_A8BB1C, 0); /*0x796a4e*/
            Debug::Log();
      memset(v10, 0, sizeof(v10)); /*0x796a6f*/
      v11 = 0; /*0x796a79*/
      v12 = 0; /*0x796a7b*/
      v10[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v10[1], (char *)*(unsigned int *)(dword_A8DA78), -1); /*0x796a90*/
      v5 = 0; /*0x796a9b*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796a9f*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x796aad*/
            qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x796abb*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v5; /*0x796ac5*/
          nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x796ac6*/
          if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_WebBrowserConfig != (int *)((ObjectClass *))-36 ) /*0x796ae4*/
        {
          v7 = CharToWideString(&g_WebBrowserConfig.ambientSoundController[3]); /*0x796aeb*/
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v10, 455, 1, (wchar_t *)v7); /*0x796b04*/
        }
      }
  LABEL_24:
      IDA_LOBYTE(owningHouseIndex) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return owningHouseIndex; /*0x796ad4*/
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

  v10 = dword_B77900; /*0x7a0f58*/
  memset(v11, 0, sizeof(v11)); /*0x7a0f5c*/
  Source[0] = 80; /*0x7a0f60*/
  Source[2] = 0; /*0x7a0f67*/
  Source[1] = dword_B77900 + 48; /*0x7a0f6c*/
  result = g_NetworkLobbyState; /*0x7a0f70*/
  if ( !g_NetworkLobbyState ) /*0x7a0f77*/
  {
    v1 = 0; /*0x7a0f7e*/
    if ( (int)dword_B77900 > 0 ) /*0x7a0f82*/
    {
      v2 = 0; /*0x7a0f8a*/
      do /*0x7a102a*/
      {
        if ( v2 >= 0 && v1 < (int)dword_B77900 ) /*0x7a0f96*/
          qmemcpy(v11, (char *)dword_B77908 + v2, sizeof(v11)); /*0x7a0faa*/
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
        Debug::Log();
// 0x5e3720
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
    Debug::Log();
  (*(void (__stdcall **)(LPVOID, char *, int, int))(*(unsigned int *)g_UIPointerTable + 44))( /*0x786371*/
    g_UIPointerTable,
    &g_WindowManager.__pad_70[28],
    stru_B76AC4.ambientSoundController[3],
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
      *(unsigned int *)&((unsigned int *)(Source))[4] = _EDX; /*0x7c5f89*/
      *(unsigned int *)&((unsigned int *)(Source))[8] = _ECX; /*0x7c5f8f*/
      *(unsigned int *)&((unsigned int *)(Source))[12] = 32; /*0x7c5f95*/
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
