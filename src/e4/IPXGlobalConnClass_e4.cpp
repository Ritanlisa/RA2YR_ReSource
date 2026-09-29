// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/IPXGlobalConnClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"

// 0x540110
namespace gamemd {
void IPXGlobalConnClass::ReceivePacket(int a2)
{
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  int Ticks; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // edx

  Debug::Log(); /*0x540132*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x540137*/
  for ( i = 0; i < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(IPXGlobalConnClass_field_0x04, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x540175*/
      v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x540186*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x54019c*/
        v7 += Ticks - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5401a3*/
      }
      if ( a2 + *(unsigned int *)(TileType + 4) >= v7 ) /*0x5401b0*/
      {
        if ( v6 != -1 ) /*0x54023d*/
          Timer::GetTicks(); /*0x540244*/
        Debug::Log(); /*0x54026f*/
      }
      else
      {
        if ( v6 != -1 ) /*0x5401b9*/
          Timer::GetTicks(); /*0x5401c0*/
        Debug::Log(); /*0x5401eb*/
        v9 = 0; /*0x5401fa*/
        v10 = this->u32_D4; /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = (unsigned int *)this->q034; /*0x54020f*/
          while ( *v11 != *(unsigned int *)(*(unsigned int *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(unsigned int *)(this->q034 + 4 * v9) = -1; /*0x54021f*/
        }
  LABEL_14:
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, i--, 0, 0); /*0x540226*/
      }
    }
    IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}
} // namespace gamemd
// 0x5403F0
namespace gamemd {
HashTable_flat * * IPXGlobalConnClass::SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3)
{
  unsigned char *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  int v15; // [esp+Ch] [ebp-28h] BYREF
  unsigned char *v16; // [esp+10h] [ebp-24h]
  unsigned char v17[8]; // [esp+14h] [ebp-20h] BYREF
  int v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  unsigned int v21[3]; // [esp+28h] [ebp-Ch] BYREF

  v7 = (unsigned char *)(this);
  v16 = (unsigned char *)(this);
  Waypoint::InitInvalid(&v18); /*0x540400*/
  v18 = *a3; /*0x540413*/
  v19 = a3[1]; /*0x54041a*/
  v20 = a3[2]; /*0x540421*/
  if ( aP4 ) /*0x540425*/
  {
    Network::CopyAddress(a3, &v15, (int)v17); /*0x540431*/
    v15 = *aP4; /*0x540442*/
    NetworkID::Assign(&v18, &v15, (int)v17, 0); /*0x54044c*/
  }
  if ( g_GameMode_Current[0] == 4 && !(unsigned char)a6 && g_Network_IsHosting && v7->q320 ) /*0x540477*/
  {
    v8 = a2; /*0x540485*/
    if ( !*(unsigned char *)(a2 + 3) ) /*0x540489*/
    {
      v21[0] = v18; /*0x5404a0*/
      v21[1] = v19; /*0x5404a4*/
      v21[2] = v20; /*0x5404b6*/
      Network::CopyAddress(v21, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(v21, &v15, (int)v17, aP3); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( Game_PlayerCount > 0 ) /*0x5404e3*/
      {
        while ( !GUID::Compare((char *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v10) + 40), (int)v21) ) /*0x5404fd*/
        {
          if ( ++v10 >= Game_PlayerCount ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(unsigned int *)(*(unsigned int *)(Game_PlayerInfoArray + 4 * v10) + 111); /*0x540514*/
      }
  LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex(&g_NetworkEventQueue, v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = v16; /*0x540528*/
      *(unsigned char *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = dword_A8DBA4; /*0x540540*/
    v12 = *(unsigned int *)&dword_841F3C; /*0x54054a*/
    v19 = dword_A8DBA8; /*0x540550*/
    v20 = dword_A8DBAC; /*0x540554*/
    if ( GUID::Compare((char *)&dword_A8DBB0, *(unsigned int *)Game_PlayerInfoArray + 40) /*0x54057b*/
      && NetworkID::Compare((int)&v18, *(unsigned int *)Game_PlayerInfoArray + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(unsigned short *)(a2 + 12) = 0; /*0x540587*/
      *(unsigned int *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = dword_A8DBBC; /*0x54059b*/
      *(unsigned short *)(a2 + 12) = dword_841F3C; /*0x5405a4*/
      *(unsigned int *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = aP3; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(unsigned short *)(a2 + 12) = 0; /*0x5405bb*/
    *(unsigned int *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( g_NetworkInterface ) /*0x5405cf*/
  {
    IDA_LOBYTE(v13) = v7->q320 == 0; /*0x5405da*/
    (*(void (__thiscall **)(int, int, int, int *, int, int, int, int))(*(unsigned int *)g_NetworkInterface + 12))( /*0x5405f2*/
      g_NetworkInterface,
      v8,
      arg4,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return (gamemd::HashTable_flat **)(1);
}
} // namespace gamemd
// 0x5400D0
namespace gamemd {
int IPXGlobalConnClass::CheckStatus()
{
  int v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx

  v2 = 0; /*0x5400d4*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400d6*/
  if ( (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(unsigned char *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, v2--, 0, 0); /*0x5400f7*/
      IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ); /*0x540104*/
  }
  return 1; /*0x540106*/
}
} // namespace gamemd
// 0x5402D0
namespace gamemd {
int IPXGlobalConnClass::Send()
{
  int v2; // ebx
  int v3; // esi
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // eax
  PacketQueue *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  Waypoint v10; // [esp+14h] [ebp-40Ch] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5402df*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(unsigned int *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(&v10); /*0x5402fd*/
        v6 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, &v10.__pad_0[12], &v9, v3--, &v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < *(unsigned int *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x540332*/
  }
  return v2; /*0x540334*/
}
} // namespace gamemd
// 0x540340
namespace gamemd {
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  PacketQueue *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  Waypoint v13; // [esp+14h] [ebp-40Ch] BYREF

  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(unsigned char *)TileIndex & 2) == 0 /*0x540392*/
      && *(unsigned int *)(TileIndex + 24)
      && (uint8_t)NetworkID::Compare(*(bool **)(TileIndex + 28), a2)
      && *(unsigned short *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(&v13); /*0x540398*/
      v9 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, &v13.__pad_0[12], &v12, v6--, &v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < *(unsigned int *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x5403cd*/
  return v5; /*0x5403d2*/
}
} // namespace gamemd
// 0x540610
namespace gamemd {
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{
  return ConnectionClass::sendAck(a1, aP2, aP3, aP4); /*0x540629*/
}
} // namespace gamemd
// 0x540630
namespace gamemd {
int IPXGlobalConnClass::ddtor(int a2, int a3)
{
  return ConnectionClass::receivePacket(a2, a3); /*0x54063f*/
}
} // namespace gamemd
// 0x540650
namespace gamemd {
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{
  return ConnectionClass::processTileUpdate(a2, a3); /*0x54065f*/
}
} // namespace gamemd
// 0x540670
namespace gamemd {
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->u32_D0; /*0x540673*/
  if ( v3 ) /*0x540681*/
  {
    RA2_OPDEL(v3); /*0x540684*/
    this->u32_D0 = 0; /*0x54068c*/
  }
  if ( this->u32_CC ) /*0x540696*/
  {
    RA2_OPDEL((void *)this->u32_CC); /*0x5406a1*/
    this->u32_CC = 0; /*0x5406a9*/
  }
  ConnectionClass::dtor(); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    RA2_OPDEL(); /*0x5406c8*/
  return this; /*0x5406d2*/
}
} // namespace gamemd