// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x642740
namespace gamemd {
unsigned int * CoordStruct::Set2(void* aP1, AbstractClass * aP2)
{

  int v4; // edx

  v4 = (unsigned int)(*(unsigned int *)(aP1) << 8);
  *((unsigned int *)this + 1) = (aP1[(unsigned int)(1])<< 8) + 128; /*0x642759*/
  *((unsigned int *)this + 2) = (unsigned int)(aP2); /*0x642766*/
  this->vfptr = (void *)(v4 + 128); /*0x642769*/
  return &this->vfptr; /*0x64276b*/

}
}