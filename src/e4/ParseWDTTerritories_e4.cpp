// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_76AAF0_e4.hpp"
#include "e4/classes/E4Recv_76B790_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x76AAF0
namespace gamemd {
unsigned int * E4Recv_76AAF0::sub_76AAF0()
{
  this->vtable1 = (unsigned int)(0);
  this->vtable0 = (unsigned int)(&off_7F7220);
  this->vtable2 = 0; /*0x76ab00*/
  IDA_BYTE2(this->vtable3) = 10; /*0x76ab03*/
  IDA_HIBYTE(this->vtable3) = 10; /*0x76ab06*/
  IDA_LOWORD(this->uniqueId) = 10000; /*0x76ab09*/
  IDA_LOWORD(this->vtable3) = 0; /*0x76ab0f*/
  IDA_BYTE1(this->referenceCount) = 0; /*0x76ab13*/
  IDA_BYTE2(this->referenceCount) = 0; /*0x76ab16*/
  IDA_HIBYTE(this->referenceCount) = 0; /*0x76ab19*/
  IDA_BYTE2(this->NeedsSaveOrLink) = 0; /*0x76ab1e*/
  IDA_BYTE1(this->occupant) = 0; /*0x76ab21*/
  IDA_LOBYTE(this->owningHouseIndex) = 0; /*0x76ab24*/
  IDA_BYTE2(this->fallRate) = 0; /*0x76ab27*/
  IDA_BYTE1(this->nextObject) = 0; /*0x76ab2a*/
  IDA_LOBYTE(this->attachedTag) = 0; /*0x76ab2d*/
  IDA_LOBYTE(this->NeedsSaveOrLink) = 100; /*0x76ab35*/
  IDA_HIBYTE(this->NeedsSaveOrLink) = 100; /*0x76ab38*/
  IDA_BYTE2(this->occupant) = 100; /*0x76ab3b*/
  IDA_BYTE1(this->owningHouseIndex) = 100; /*0x76ab3e*/
  IDA_LOBYTE(this->fallRate) = 100; /*0x76ab41*/
  IDA_HIBYTE(this->fallRate) = 100; /*0x76ab44*/
  IDA_BYTE2(this->nextObject) = 100; /*0x76ab47*/
  IDA_BYTE1(this->attachedTag) = 100; /*0x76ab4a*/
  IDA_BYTE2(this->uniqueId) = 1; /*0x76ab4d*/
  IDA_HIBYTE(this->uniqueId) = 1; /*0x76ab51*/
  IDA_LOBYTE(this->abstractFlags) = 2; /*0x76ab55*/
  IDA_LOBYTE(this->referenceCount) = 1; /*0x76ab59*/
  IDA_BYTE1(this->NeedsSaveOrLink) = 50; /*0x76ab5d*/
  IDA_LOBYTE(this->occupant) = 50; /*0x76ab60*/
  IDA_HIBYTE(this->occupant) = 50; /*0x76ab63*/
  IDA_BYTE2(this->owningHouseIndex) = 50; /*0x76ab66*/
  IDA_HIBYTE(this->owningHouseIndex) = 1; /*0x76ab69*/
  IDA_BYTE1(this->fallRate) = 50; /*0x76ab6d*/
  IDA_LOBYTE(this->nextObject) = 50; /*0x76ab70*/
  IDA_HIBYTE(this->nextObject) = 50; /*0x76ab73*/
  IDA_BYTE2(this->attachedTag) = 50; /*0x76ab76*/
  this->attachedBomb = (BombClass *)-1; /*0x76ab79*/
  this->ambientSoundController[0] = -1; /*0x76ab7c*/
  return &this->vtable0; /*0x76ab7f*/
}
} // namespace gamemd
