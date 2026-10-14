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
#include "e4/classes/E4Recv_7ACB90_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int StartGameWOL_Start_7ACB90(void* p0, int p1);  // x4:signals@0x7acb90
} // namespace gamemd

// 0x48D080
namespace gamemd {  // G42.18 ns repair
int Event::Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1)
{
  int result; // eax
  unsigned char v1[4]; // [esp+10h] [ebp-100h] BYREF
  unsigned int v2[6]; // [esp+14h] [ebp-FCh] BYREF
  unsigned char v3[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( g_AsyncIOState > 0 && *(unsigned int *)AsyncIO_Instance ) /*0x48d09f*/
    (*(void (**)(unsigned int))(**(unsigned int **)AsyncIO_Instance + 8))(*(unsigned int *)AsyncIO_Instance); /*0x48d0a7*/
  result = ((unsigned int *)(dword_A8B238))[0]; /*0x48d0aa*/
  if ( ((unsigned int *)(dword_A8B238))[0] == 3 || dword_A8B238[0] == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    result = ((unsigned int *)(dword_A8B238))[0]; /*0x48d0be*/
  }
  if ( result == 1 ) /*0x48d0c6*/
  {
    if ( (dword_A8DAB8 & 1) == 0 ) /*0x48d0da*/
      return result; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( result == 2 ) /*0x48d0cb*/
  {
  LABEL_11:
    Stream::ReadPacket((int)&unk_A8EA70); /*0x48d0e0*/
    if ( ((unsigned int *)(dword_A8B230))[13720] && ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ) /*0x48d10f*/
    {
      do /*0x48d15f*/
      {
        if ( v2[0] == 108 && v3[0] != dword_A8DB30 ) /*0x48d129*/
          Network::UpdateLatencyDisplay((int)dword_AC4F58, 1, (double)*(int *)&v3[1], NAN); /*0x48d144*/
      }
      while ( ObjectTypeClass::CreateInstance((int)&unk_A8EA70, (int)v2, (int)v1) > 0 ); /*0x48d15f*/
    }
    result = ((unsigned int *)(dword_A8B238))[0]; /*0x48d161*/
  }
  if ( result == 4 ) /*0x48d169*/
  {
    (*((unsigned char *)&(result))) = byte_B77DC2; /*0x48d16b*/
    if ( !byte_B77DC2 ) /*0x48d172*/
    {
      result = time(0); /*0x48d176*/
      if ( result != dword_89E9B0 ) /*0x48d186*/
      {
        if ( ppv && !dword_B77DCC ) /*0x48d199*/
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 12))(ppv); /*0x48d19e*/
        if ( g_UIPointerTable ) /*0x48d1a8*/
          (*(void (__stdcall **)(LPVOID))(*(unsigned int *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x48d1ad*/
        result = time(0); /*0x48d1b2*/
        dword_89E9B0 = result; /*0x48d1ba*/
      }
    }
  }
  return result; /*0x48d1bf*/
}
}  // G42.18 ns repair
// 0x5E2FA0
namespace gamemd {
int sub_5E2FA0()
{
  int result; // eax
  HWND Current; // esi

  result = Dialog::GetCurrentType(); /*0x5e2fa2*/
  if ( result == 107 ) /*0x5e2faa*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2fb7*/
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
    return (*((int (**)(ObjectClass *))dword_A8B23C->vfptr + 37))(dword_A8B23C); /*0x5e2ffc*/
  }
  return result; /*0x5e2fed*/
}
}
// 0x5E95E0
namespace gamemd {
int sub_5E95E0()
{
  ObjectClass *v1; // edx
  LPARAM *v2; // ecx
  LPARAM v3; // eax
  uint8_t v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  v6 = (int)((LPARAM *)(dword_A8B548));
  if ( dword_A8B548 >= dword_A8BB0C ) /*0x5e95f4*/
    v6 = dword_A8BB0C; /*0x5e95f6*/
  v1 = 0; /*0x5e9618*/
  v2 = (LPARAM *)(dword_A8DA90); /*0x5e961a*/
  while ( 1 ) /*0x5e961f*/
  {
    v3 = *v2; /*0x5e961f*/
    if ( *v2 ) /*0x5e961f*/
    {
      if ( v3 != g_HouseClass_ObserverFlags /*0x5e9645*/
        && v3 != g_Lobby_PlayerCount
        && v3 != g_Lobby_MaxPlayers
        && (wchar_t *)v3 != (wchar_t *)(g_Lobby_PlayerReady)
        && v1 == (gamemd::ObjectClass *)(g_MPCooperativeState)
        && v3->u32_6B == -1 )
      {
        break; /*0x5e9645*/
      }
    }
    ++v2; /*0x5e9647*/
    v1 = &v1->AbstractClass_1; /*0x5e964a*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9651*/
    {
      v5 = 0; /*0x5e9653*/
      goto LABEL_13; /*0x5e9653*/
    }
  }
  v5 = 1; /*0x5e968d*/
  LABEL_13:
  if ( dword_A8DA84 - v5 <= v6 ) /*0x5e9671*/
    return 0; /*0x5e9694*/
  Debug::Log(); /*0x5e967f*/
  return 1; /*0x5e9689*/
}
}
// 0x796960
namespace gamemd {
int sub_796960()
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

  (*((unsigned char *)&(owningHouseIndex))) = dword_A8B238; /*0x796960*/
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
    || (v4 = ((String *)((String *)&g_WebBrowser))->GetOrEmpty_Alt(),
        (owningHouseIndex = _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4)) != 0) )
  {
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969e5*/
  LABEL_10:
    if ( !g_NetworkLobbyState && stru_B76AC4.ambientSoundController[4] ) /*0x796a00*/
    {
      if ( owningHouseIndex > 0 ) /*0x796a0a*/
        memcpy(&v9[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796a1b*/
      *(unsigned int *)&v9[0].__pad_0[44] = 0; /*0x796a21*/
      Network::SyncPlayerList(v1); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress(&stru_A8BB1C, 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v10, 0, sizeof(v10)); /*0x796a6f*/
      v11 = 0; /*0x796a79*/
      v12 = 0; /*0x796a7b*/
      v10[0] = 13; /*0x796a7c*/
      CopyWideToChar((unsigned char *)(&v10[1]), (char *)*dword_A8DA78, -1); /*0x796a90*/
      v5 = 0; /*0x796a9b*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796a9f*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x796aad*/
            memcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x796abb*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v5; /*0x796ac5*/
          nextObject = (gamemd::ObjectClass *)(&nextObject->health); /*0x796ac6*/
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
      (*((unsigned char *)&(owningHouseIndex))) = Event::Dispatch(); /*0x796b09*/
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
          memcpy(v11, (char *)dword_B77908 + v2, sizeof(v11)); /*0x7a0faa*/
        (*(void (__stdcall **)(LPVOID, unsigned int, int *))(*(unsigned int *)g_UIPointerTable + 32))(g_UIPointerTable, v11[6], &v9); /*0x7a0fbe*/
        sprintf(Buffer, ",%s,%d", (const char *)&v11[9], v9); /*0x7a0fd8*/
        v3 = strlen(Buffer) + 1; /*0x7a0ffd*/
        v4 = &Source[strlen(Source)]; /*0x7a1006*/
        memcpy(v4, Buffer, 4 * (v3 >> 2)); /*0x7a100a*/
        v6 = &Buffer[4 * (v3 >> 2)]; /*0x7a100a*/
        v5 = &v4[4 * (v3 >> 2)]; /*0x7a100a*/
        v7 = v3; /*0x7a100c*/
        v8 = v9; /*0x7a100e*/
        memcpy(v5, v6, v7 & 3); /*0x7a1015*/
        SetGameOptionsPing((const char *)&v11[9], v8); /*0x7a101b*/
        ++v1; /*0x7a1024*/
        v2 += 108; /*0x7a1025*/
      }
      while ( v1 < v10 ); /*0x7a102a*/
    }
    Debug::Log(); /*0x7a103c*/
    return ((Network *)(Source))->SendOptionsGame(); /*0x7a1048*/
  }
  return result; /*0x7a104e*/
}
}
// 0x786270
namespace gamemd {
int sub_786270()
{
  HKEY phkResult; // [esp+4h] [ebp-110h] BYREF
  BYTE Data[4]; // [esp+8h] [ebp-10Ch] BYREF
  DWORD cbData; // [esp+Ch] [ebp-108h] BYREF
  DWORD Type; // [esp+10h] [ebp-104h] BYREF
  CHAR SubKey[256]; // [esp+14h] [ebp-100h] BYREF

  *(unsigned int *)Data = 0; /*0x78627e*/
  if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven ) /*0x786286*/
  {
    if ( strlen((const char *)(g_Str_SOFTWARE_Westwood_Yuri_s_Reven)) ) /*0x78628e*/
    {
      strcpy((char *)(SubKey), g_Str_SOFTWARE_Westwood_Yuri_s_Reven); /*0x7862b6*/
      if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE,(LPCSTR)(SubKey), 0, 0x20019u, &phkResult) ) /*0x7862d5*/
      {
        cbData = 4; /*0x7862fb*/
        RegQueryValueExA(phkResult,(LPCSTR)(off_84A940), 0, &Type, Data, &cbData); /*0x786303*/
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
    &DataGlobal_B73B34,
    stru_B76AC4.ambientSoundController[3],
    3);
  return 1; /*0x78631f*/
}
}
// 0x7C5F3D
namespace gamemd {
int sub_7C5F3D()
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
      _EAX = (unsigned int)(0);
      __asm { cpuid } /*0x7c5f81*/
      *(unsigned int *)Source = (unsigned int)(_EBX); /*0x7c5f83*/
      *(unsigned int *)&((unsigned int *)(Source))[4] = (unsigned int)(_EDX); /*0x7c5f89*/
      *(unsigned int *)&((unsigned int *)(Source))[8] = (unsigned int)(_ECX); /*0x7c5f8f*/
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
  if ( ((unsigned int)0 & _EDX) != 0 ) /*0x7c5fde*/
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
namespace gamemd {  // G42.18c ns repair
char Event_Dispatch::Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}
}  // G42.18c ns repair
// 0x601360
namespace gamemd {
bool Event::IsValidActionType()
{
  int result; // eax

  (*((unsigned char *)&(result))) = this == 268 /*0x6015d5*/
                || this == 148
                || this == 182
                || this == 163
                || this == 115
                || this == 216
                || this == 3003
                || this == 245
                || this == 261
                || this == 226
                || this == 213
                || this == 693
                || this == 183
                || this == 692
                || this == 257
                || this == 297
                || this == 3015
                || this == 3014
                || this == 215
                || this == 264
                || this == 188
                || this == 189
                || this == 187
                || this == 181
                || this == 3002
                || this == 255
                || this == 234
                || this == 107
                || this == 256
                || this == 258
                || this == 184
                || this == 214
                || this == 259
                || this == 287
                || this == 293
                || this == 277
                || this == 290
                || this == 274
                || this == 231
                || this == 278
                || this == 194
                || this == 201
                || this == 285
                || this == 284
                || this == 275
                || this == 254
                || this == 265
                || this == 271
                || this == 279
                || this == 276
                || this == 195
                || this == 292
                || this == 230
                || this == 243
                || this == 244
                || this == 700
                || this == 283
                || this == 270;
  return result; /*0x6015d4*/
}
} // namespace gamemd
