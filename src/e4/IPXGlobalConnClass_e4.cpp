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
#include "e4/classes/ConnectionClass_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/PacketQueue_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply

// 0x540110
namespace gamemd {
void IPXGlobalConnClass::ReceivePacket(int a2)
{
  Terrain *q004; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  int Ticks; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx

  Debug::Log(); /*0x540132*/
  q004 = (Terrain *)this->q004; /*0x540137*/
  for ( i = 0; i < (int)q004->q038; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(q004, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x540175*/
      v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x540186*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x54019c*/
        v7 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5401a3*/
      }
      if ( a2 + *(_DWORD *)(TileType + 4) >= v7 ) /*0x5401b0*/
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
          v11 = (_DWORD *)this->q034; /*0x54020f*/
          while ( *v11 != *(_DWORD *)(*(_DWORD *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(_DWORD *)(this->q034 + 4 * v9) = -1; /*0x54021f*/
        }
  LABEL_14:
        PacketQueue::ReleaseEntry((PacketQueue *)this->q004, 0, 0, i--, 0, 0); /*0x540226*/
      }
    }
    q004 = (Terrain *)this->q004; /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}
} // namespace gamemd
// 0x5403F0
namespace gamemd {
HashTable_flat * * IPXGlobalConnClass::SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3)
{
  IPXGlobalConnClass *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  int v15; // [esp+Ch] [ebp-28h] BYREF
  IPXGlobalConnClass *v16; // [esp+10h] [ebp-24h]
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  NetworkID v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  NetworkID v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v7 = this; /*0x5403f4*/
  v16 = this; /*0x5403fc*/
  Waypoint::InitInvalid((Waypoint *)&v18); /*0x540400*/
  *(_DWORD *)v18.q000 = *a3; /*0x540413*/
  v18.q004 = a3[1]; /*0x54041a*/
  v19 = a3[2]; /*0x540421*/
  if ( aP4 ) /*0x540425*/
  {
    Network::CopyAddress((Network *)a3, &v15, (int)v17); /*0x540431*/
    v15 = *aP4; /*0x540442*/
    NetworkID::Assign(&v18, &v15, (int)v17, 0); /*0x54044c*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 && !(_BYTE)a6 && byte_A8DBA0 && IDA_LOBYTE(v7[3].q020) ) /*0x540477*/
  {
    v8 = a2; /*0x540485*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x540489*/
    {
      v20 = v18; /*0x5404a0*/
      v21 = v19; /*0x5404b6*/
      Network::CopyAddress((Network *)&v20, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(&v20, &v15, (int)v17, aP3); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( dword_A8DA84 > 0 ) /*0x5404e3*/
      {
        while ( !(unsigned __int8)GUID::Compare((char *)(dword_A8DA78[v10] + 40), (int)&v20) ) /*0x5404fd*/
        {
          if ( ++v10 >= dword_A8DA84 ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(_DWORD *)(dword_A8DA78[v10] + 111); /*0x540514*/
      }
  LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.q000[16], v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = v16; /*0x540528*/
      *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = qword_A8DBA4; /*0x540540*/
    v12 = *(_DWORD *)&dword_841F3C; /*0x54054a*/
    v19 = dword_A8DBAC; /*0x540554*/
    if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.q000, *dword_A8DA78 + 40) /*0x54057b*/
      && (unsigned __int8)NetworkID::Compare((bool *)v18.q000, *dword_A8DA78 + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(_WORD *)(a2 + 12) = 0; /*0x540587*/
      *(_DWORD *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = *(_DWORD *)&dword_A8DBBC; /*0x54059b*/
      *(_WORD *)(a2 + 12) = dword_841F3C; /*0x5405a4*/
      *(_DWORD *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = aP3; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(_WORD *)(a2 + 12) = 0; /*0x5405bb*/
    *(_DWORD *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5405cf*/
  {
    IDA_LOBYTE(v13) = IDA_LOBYTE(v7[3].q020) == 0; /*0x5405da*/
    (*(void (__thiscall **)(_DWORD, int, int, NetworkID *, int, int, int, int))(**(_DWORD **)&stru_887598.isAliveFlag /*0x5405f2*/
                                                                              + 12))(
      *(_DWORD *)&stru_887598.isAliveFlag,
      v8,
      arg4,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return 1; /*0x5405f5*/
}
} // namespace gamemd
// 0x5400D0
namespace gamemd {
int IPXGlobalConnClass::CheckStatus()
{
  int v2; // esi
  Terrain *q004; // ecx

  v2 = 0; /*0x5400d4*/
  q004 = (Terrain *)this->q004; /*0x5400d6*/
  if ( (int)q004->q038 > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(_BYTE *)Terrain::GetTileType(q004, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((PacketQueue *)this->q004, 0, 0, v2--, 0, 0); /*0x5400f7*/
      q004 = (Terrain *)this->q004; /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < (int)q004->q038 ); /*0x540104*/
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
  int q004; // ecx
  int v5; // eax
  PacketQueue *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  Waypoint v10; // [esp+14h] [ebp-40Ch] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  q004 = this->q004; /*0x5402df*/
  if ( *(int *)(q004 + 40) > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(_DWORD *)Terrain::GetTileIndex((Terrain *)q004, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(&v10); /*0x5402fd*/
        v6 = (PacketQueue *)this->q004; /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, &v10.q000[12], &v9, v3--, &v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      q004 = this->q004; /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < *(_DWORD *)(q004 + 40) ); /*0x540332*/
  }
  return v2; /*0x540334*/
}
} // namespace gamemd
// 0x540340
namespace gamemd {
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
  int q004; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  PacketQueue *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  Waypoint v13; // [esp+14h] [ebp-40Ch] BYREF

  q004 = this->q004; /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( *(int *)(q004 + 40) <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)q004, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(_BYTE *)TileIndex & 2) == 0 /*0x540392*/
      && *(_DWORD *)(TileIndex + 24)
      && (unsigned __int8)NetworkID::Compare(*(bool **)(TileIndex + 28), a2)
      && *(_WORD *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(&v13); /*0x540398*/
      v9 = (PacketQueue *)this->q004; /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, &v13.q000[12], &v12, v6--, &v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    q004 = this->q004; /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < *(_DWORD *)(q004 + 40) ); /*0x5403cd*/
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

  v3 = (void *)this->q034; /*0x540673*/
  *(_DWORD *)this->q000 = &(void*)(void*)&IPXGlobalConnClass_vftable; /*0x540679*/
  if ( v3 ) /*0x540681*/
  {
    RA2_OPDEL(v3); /*0x540684*/
    this->q034 = 0; /*0x54068c*/
  }
  if ( this->u32_CC ) /*0x540696*/
  {
    RA2_OPDEL(*((void **)&this->u32_141)); /*0x5406a1*/
    this->u32_CC = 0; /*0x5406a9*/
  }
  *(_DWORD *)this->q000 = &(void*)(void*)&IPXConnClass_vftable; /*0x5406b5*/
  ConnectionClass::dtor(); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    RA2_OPDEL(); /*0x5406c8*/
  return this->q000; /*0x5406d2*/
}
} // namespace gamemd