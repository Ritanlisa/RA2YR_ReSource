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

// 0x540110
namespace gamemd {
void IPXGlobalConnClass::ReceivePacket(int a2)
{

  IPXGlobalConnClass * v2;
  unsigned int *v3; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  DWORD Ticks; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // edx

  v2 = (gamemd::IPXGlobalConnClass *)((int)(this));
  this->Debug::Log(); /*0x540132*/
  v3 = *(unsigned int **)(v2 + 4); /*0x540137*/
  for ( i = 0; i < v3[14]; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(v3, i); /*0x540158*/
    this->Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      this->Debug::Log(); /*0x540170*/
      v6 = MEMORY[0x887338]; /*0x540175*/
      v7 = MEMORY[0x887340]; /*0x540186*/
      if ( MEMORY[0x887338] != -1 ) /*0x540188*/
      {
        Ticks = this->Timer::GetTicks(); /*0x54019a*/
        v6 = MEMORY[0x887338]; /*0x54019c*/
        v7 += Ticks - MEMORY[0x887338]; /*0x5401a3*/
      }
      if ( a2 + *(unsigned int *)(TileType + 4) >= v7 ) /*0x5401b0*/
      {
        if ( v6 != -1 ) /*0x54023d*/
          this->Timer::GetTicks(); /*0x540244*/
        this->Debug::Log(); /*0x54026f*/
      }
      else
      {
        if ( v6 != -1 ) /*0x5401b9*/
          this->Timer::GetTicks(); /*0x5401c0*/
        this->Debug::Log(); /*0x5401eb*/
        v9 = 0; /*0x5401fa*/
        v10 = *((unsigned int *)this + 53); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = *(unsigned int **)((char *)this + 208); /*0x54020f*/
          while ( *v11 != *(unsigned int *)(*(unsigned int *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(unsigned int *)(*((unsigned int *)this + 52) + 4 * v9) = -1; /*0x54021f*/
        }
LABEL_14:
        PacketQueue::ReleaseEntry(*(unsigned int **)((char *)this + 4), 0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = (gamemd::IPXGlobalConnClass *)((int)(this));
    }
    v3 = *(unsigned int **)(v2 + 4); /*0x54027b*/
  }
  this->Debug::Log(); /*0x540296*/

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
  IPXManagerClass *v15; // [esp+Ch] [ebp-28h] BYREF
  unsigned char *aP1_4; // [esp+10h] [ebp-24h]
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  IPXManagerClass v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  IPXManagerClass v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v7 = (unsigned char *)(this);
  aP1_4 = (unsigned char *)(this);
  Waypoint::InitInvalid(&v18); /*0x540400*/
  v18.Socket = *a3; /*0x540413*/
  *(unsigned int *)&v18.Initialized = a3[1]; /*0x54041a*/
  v19 = a3[2]; /*0x540421*/
  if ( aP4 ) /*0x540425*/
  {
    Network::CopyAddress(a3, &v15, (int)v17); /*0x540431*/
    v15 = *(IPXManagerClass **)aP4->__pad_0; /*0x540442*/
    NetworkID::Assign(&v18, (IPXManagerClass *)&v15, (int)v17, 0); /*0x54044c*/
  }
  if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x540477*/
    && !(unsigned char)a6
    && HouseClass_Player.__pad_5568[18668]
    && v7[200] )
  {
    v8 = a2; /*0x540485*/
    if ( !*(unsigned char *)(a2 + 3) ) /*0x540489*/
    {
      v20 = v18; /*0x5404a0*/
      v21 = v19; /*0x5404b6*/
      Network::CopyAddress(&v20, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(&v20, (IPXManagerClass *)&v15, (int)v17, (IPXManagerClass *)aP3); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5404e3*/
      {
        while ( !GUID::Compare( /*0x5404fd*/
                   (char *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v10) + 40),
                   (int)&v20) )
        {
          if ( ++v10 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * v10) + 111); /*0x540514*/
      }
LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex((int *)&g_NetworkEventQueue, (DynamicVector *)v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = aP1_4; /*0x540528*/
      *(unsigned char *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = *(IPXManagerClass *)&HouseClass_Player.__pad_5568[18672]; /*0x540540*/
    v12 = *(unsigned int *)&stru_830620.__pad_579C[49536]; /*0x54054a*/
    v19 = *(unsigned int *)&HouseClass_Player.__pad_5568[18680]; /*0x540554*/
    if ( GUID::Compare(&HouseClass_Player.__pad_5568[18684], **(unsigned int **)&HouseClass_Player.__pad_5568[18372] + 40) /*0x54057b*/
      && NetworkID::Compare((int)&v18, **(unsigned int **)&HouseClass_Player.__pad_5568[18372] + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(unsigned short *)(a2 + 12) = 0; /*0x540587*/
      *(unsigned int *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = *(unsigned int *)&HouseClass_Player.__pad_5568[18696]; /*0x54059b*/
      *(unsigned short *)(a2 + 12) = *(unsigned short *)&stru_830620.__pad_579C[49536]; /*0x5405a4*/
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
  if ( *(unsigned int *)&stru_87C374.__pad_579C[23320] ) /*0x5405cf*/
  {
    LOBYTE(v13) = v7[200] == 0; /*0x5405da*/
    (*(void (**)(unsigned int, int, int, IPXManagerClass *, int, int, int, int))(**(unsigned int **)&stru_87C374.__pad_579C[23320] /*0x5405f2*/
                                                                                    + 12))(
      *(unsigned int *)&stru_87C374.__pad_579C[23320],
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
  unsigned int *v3; // ecx

  v2 = 0; /*0x5400d4*/
  v3 = (unsigned int *)*((unsigned int *)this + 1); /*0x5400d6*/
  if ( (int)v3[14] > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(unsigned char *)Terrain::GetTileType(v3, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((unsigned int *)*((unsigned int *)this + 1), 0, 0, v2--, 0, 0); /*0x5400f7*/
      v3 = (unsigned int *)*((unsigned int *)this + 1); /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < v3[14] ); /*0x540104*/
  }
  return 1; /*0x540106*/

}
} // namespace gamemd
// 0x5402D0
namespace gamemd {
void IPXGlobalConnClass::Send()
{

  int v2; // ebx
  int v3; // esi
  unsigned int *v4; // ecx
  int v5; // eax
  unsigned int *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  unsigned char v10[12]; // [esp+14h] [ebp-40Ch] BYREF
  unsigned char v11[1024]; // [esp+20h] [ebp-400h] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  v4 = (unsigned int *)*((unsigned int *)this + 1); /*0x5402df*/
  if ( (int)v4[10] > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(unsigned int *)Terrain::GetTileIndex(v4, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(v10); /*0x5402fd*/
        v6 = (unsigned int *)*((unsigned int *)this + 1); /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      v4 = (unsigned int *)*((unsigned int *)this + 1); /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < v4[10] ); /*0x540332*/
  }
  return v2; /*0x540334*/

}
} // namespace gamemd
// 0x540340
namespace gamemd {
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{

  unsigned int *v4; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  unsigned int *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  unsigned char v13[12]; // [esp+14h] [ebp-40Ch] BYREF
  unsigned char v14[1024]; // [esp+20h] [ebp-400h] BYREF

  v4 = (unsigned int *)*((unsigned int *)this + 1); /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( (int)v4[10] <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex(v4, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(unsigned char *)TileIndex & 2) == 0 /*0x540392*/
      && *(unsigned int *)(TileIndex + 24)
      && NetworkID::Compare(*(unsigned int *)(TileIndex + 28), a2)
      && *(unsigned short *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(v13); /*0x540398*/
      v9 = (unsigned int *)*((unsigned int *)this + 1); /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    v4 = (unsigned int *)*((unsigned int *)this + 1); /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < v4[10] ); /*0x5403cd*/
  return v5; /*0x5403d2*/

}
} // namespace gamemd
// 0x540610
namespace gamemd {
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{

  return ConnectionClass::sendAck((int)this, (AnimClass *)a1, aP2, (AnimClass *)aP3, (AnimClass *)aP4); /*0x540629*/

}
} // namespace gamemd
// 0x540630
namespace gamemd {
int IPXGlobalConnClass::ddtor(int a2, int a3)
{

  return ConnectionClass::receivePacket(this, a2, a3); /*0x54063f*/

}
} // namespace gamemd
// 0x540650
namespace gamemd {
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{

  return ConnectionClass::processTileUpdate(this, a2, a3); /*0x54065f*/

}
} // namespace gamemd
// 0x540670
namespace gamemd {
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 52)));
  *Block = (unsigned int)(&vt_IPXGlobalConnClass);
  if ( v3 ) /*0x540681*/
  {
    __3_YAXPAX_Z(v3); /*0x540684*/
    *(Block + 52) = 0; /*0x54068c*/
  }
  if ( *(Block + 51) ) /*0x540696*/
  {
    __3_YAXPAX_Z((void *)*(Block + 51)); /*0x5406a1*/
    *(Block + 51) = 0; /*0x5406a9*/
  }
  *Block = (unsigned int)(&vt_IPXConnClass);
  ConnectionClass::dtor(Block); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    __3_YAXPAX_Z(Block); /*0x5406c8*/
  return (IPXGlobalConnClass *)Block; /*0x5406d2*/

}
} // namespace gamemd