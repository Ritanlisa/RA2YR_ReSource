// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_76AAF0_e4.hpp"
#include "e4/classes/E4Recv_76B790_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BombClass_e4.hpp"

// 0x76AAF0
namespace gamemd {
unsigned int * E4Recv_76AAF0::sub_76AAF0()
{

  this->? = 0; /*0x76aaf7*/
  this->AbstractClass = &off_7F7220; /*0x76aafa*/
  this->? = 0; /*0x76ab00*/
  BYTE2(this->?) = 10; /*0x76ab03*/
  HIBYTE(this->?) = 10; /*0x76ab06*/
  LOWORD(this->?) = 10000; /*0x76ab09*/
  LOWORD(this->?) = 0; /*0x76ab0f*/
  BYTE1(this->?) = 0; /*0x76ab13*/
  BYTE2(this->?) = 0; /*0x76ab16*/
  HIBYTE(this->?) = 0; /*0x76ab19*/
  BYTE2(this->?) = 0; /*0x76ab1e*/
  BYTE1(this->occupant) = 0; /*0x76ab21*/
  LOBYTE(this->owningHouseIndex) = 0; /*0x76ab24*/
  BYTE2(this->fallRate) = 0; /*0x76ab27*/
  BYTE1(this->nextObject) = 0; /*0x76ab2a*/
  LOBYTE(this->attachedTag) = 0; /*0x76ab2d*/
  LOBYTE(this->?) = 100; /*0x76ab35*/
  HIBYTE(this->?) = 100; /*0x76ab38*/
  BYTE2(this->occupant) = 100; /*0x76ab3b*/
  BYTE1(this->owningHouseIndex) = 100; /*0x76ab3e*/
  LOBYTE(this->fallRate) = 100; /*0x76ab41*/
  HIBYTE(this->fallRate) = 100; /*0x76ab44*/
  BYTE2(this->nextObject) = 100; /*0x76ab47*/
  BYTE1(this->attachedTag) = 100; /*0x76ab4a*/
  BYTE2(this->?) = 1; /*0x76ab4d*/
  HIBYTE(this->?) = 1; /*0x76ab51*/
  LOBYTE(this->?) = 2; /*0x76ab55*/
  LOBYTE(this->?) = 1; /*0x76ab59*/
  BYTE1(this->?) = 50; /*0x76ab5d*/
  LOBYTE(this->occupant) = 50; /*0x76ab60*/
  HIBYTE(this->occupant) = 50; /*0x76ab63*/
  BYTE2(this->owningHouseIndex) = 50; /*0x76ab66*/
  HIBYTE(this->owningHouseIndex) = 1; /*0x76ab69*/
  BYTE1(this->fallRate) = 50; /*0x76ab6d*/
  LOBYTE(this->nextObject) = 50; /*0x76ab70*/
  HIBYTE(this->nextObject) = 50; /*0x76ab73*/
  BYTE2(this->attachedTag) = 50; /*0x76ab76*/
  this->attachedBomb = (BombClass *)-1; /*0x76ab79*/
  this-((unsigned int *)(>ambientSoundController))[0] = -1; /*0x76ab7c*/
  return &this->AbstractClass; /*0x76ab7f*/

}
} // namespace gamemd
