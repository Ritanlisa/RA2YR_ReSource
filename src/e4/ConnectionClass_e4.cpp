// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConnectionPointClass_9_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/ConnectionPointClass_e4.hpp"
#include "e4/classes/PacketQueue_e4.hpp"

// 0x48B750
namespace gamemd {
int ConnectionClass::allocPacketSlot(const void *a2, signed int a3, const void *a4, signed int a5, int aP1, int aP2, int aP3, int aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48B750)
}
} // namespace gamemd
// 0x48BA10
namespace gamemd {
int ConnectionClass::initQueue(unsigned int a2)
{

  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = *((unsigned int *)this + 6); /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - *((unsigned int *)this + 7) + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((uint8_t)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    *((unsigned int *)this + 6) = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  *((unsigned int *)this + 7) = v4; /*0x48ba60*/
  result = *((unsigned int *)this + 8); /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    *((unsigned int *)this + 8) = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/

}
} // namespace gamemd
// 0x48BEE0
namespace gamemd {
void ConnectionClass::dtor()
{

  void *v2; // eax
  void (***PlayerIndex)(unsigned int, int); // ecx

  v2 = (void *)*((unsigned int *)this + 8); /*0x48bee3*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_ConnectionClass); /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  PlayerIndex = (void (***)(unsigned int, int))this->PlayerIndex; /*0x48bef2*/
  if ( PlayerIndex ) /*0x48befb*/
    (**PlayerIndex)((unsigned int)PlayerIndex, 1); /*0x48bf01*/

}
} // namespace gamemd
// 0x48BF40
namespace gamemd {
AbstractClass * * ConnectionClass::sendAck(AnimClass * aP1, AnimClass * aP2, AnimClass * aP3, AnimClass * aP4, void *a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48BF40)
}
} // namespace gamemd
// 0x48C040
namespace gamemd {
int ConnectionClass::receivePacket(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48C040)
}
} // namespace gamemd
// 0x48C320
namespace gamemd {
int ConnectionClass::processTileUpdate(void *a2, signed int *a3)
{

  int v4; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c328*/
  if ( PlayerIndex->Terrain_field_0x38 <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = ((Terrain *)(PlayerIndex))->GetTileType(v4); /*0x48c333*/
    if ( !TileType || (*(unsigned char *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(unsigned int *)(TileType + 12); /*0x48c341*/
    v8 = *(unsigned char *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(unsigned int *)(v7 + 4) == (&this->PhoneNumber)[12] + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= PlayerIndex->Terrain_field_0x38 ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  (&this->PhoneNumber)[12] = *(unsigned int *)(v7 + 4); /*0x48c370*/
LABEL_10:
  v10 = *(unsigned int *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(unsigned int *)(TileType + 8) == 14; /*0x48c37e*/
  *(unsigned int *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(unsigned int *)(TileType + 12) + 14), v10); /*0x48c395*/
  *a3 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/

}
} // namespace gamemd
// 0x48C3E0
namespace gamemd {
int ConnectionClass::serviceSendQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48C3E0)
}
} // namespace gamemd
// 0x48C590
namespace gamemd {
int ConnectionClass::StubReturnFalse()
{

  return 0; /*0x48c592*/

}
} // namespace gamemd