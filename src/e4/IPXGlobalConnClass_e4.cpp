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

  IPXGlobalConnClass *v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  int Ticks; // edx
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // edx

  v2 = this; /*0x540113*/
  ((gamemd::Debug *)this)->Log(); /*0x540132*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x540137*/
  for ( i = 0; i < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38; ++i ) /*0x540144*/
  {
    TileType = ((Terrain *)(IPXGlobalConnClass_field_0x04))->GetTileType(i); /*0x540158*/
    ((gamemd::Debug *)this)->Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x540170*/
      v6 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x540175*/
      v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x540186*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x540188*/
      {
        Ticks = ((gamemd::Timer *)this)->GetTicks(); /*0x54019a*/
        v6 = *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x54019c*/
        v7 += Ticks - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5401a3*/
      }
      if ( a2 + *(unsigned int *)(TileType + 4) >= v7 ) /*0x5401b0*/
      {
        if ( v6 != -1 ) /*0x54023d*/
          ((gamemd::Timer *)this)->GetTicks(); /*0x540244*/
        ((gamemd::Debug *)this)->Log(); /*0x54026f*/
      }
      else
      {
        if ( v6 != -1 ) /*0x5401b9*/
          ((gamemd::Timer *)this)->GetTicks(); /*0x5401c0*/
        ((gamemd::Debug *)this)->Log(); /*0x5401eb*/
        v9 = 0; /*0x5401fa*/
        v10 = *((unsigned int *)this + 53); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = (unsigned int *)*((unsigned int *)this + 52); /*0x54020f*/
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
        ((PacketQueue *)((PacketQueue *)this->IPXGlobalConnClass_field_0x04))->ReleaseEntry(0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = this; /*0x540277*/
    }
    IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x54027b*/
  }
  ((gamemd::Debug *)this)->Log(); /*0x540296*/

}
} // namespace gamemd
// 0x5403F0
namespace gamemd {
HashTable_flat * * IPXGlobalConnClass::SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5403F0)
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
      if ( (*(unsigned char *)((Terrain *)(IPXGlobalConnClass_field_0x04))->GetTileType(v2) & 2) != 0 ) /*0x5400e9*/
        ((PacketQueue *)((PacketQueue *)this->IPXGlobalConnClass_field_0x04))->ReleaseEntry(0, 0, v2--, 0, 0); /*0x5400f7*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5402D0)
}
} // namespace gamemd
// 0x540340
namespace gamemd {
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x540340)
}
} // namespace gamemd
// 0x540610
namespace gamemd {
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x540610)
}
} // namespace gamemd
// 0x540630
namespace gamemd {
int IPXGlobalConnClass::ddtor(int a2, int a3)
{

  return ((ConnectionClass *)((ConnectionClass *)this))->receivePacket(a2, a3); /*0x54063f*/

}
} // namespace gamemd
// 0x540650
namespace gamemd {
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{

  return ((ConnectionClass *)((ConnectionClass *)this))->processTileUpdate(a2, a3); /*0x54065f*/

}
} // namespace gamemd
// 0x540670
namespace gamemd {
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x540670)
}
} // namespace gamemd