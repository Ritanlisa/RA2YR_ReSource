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
unsigned int * CoordStruct::Set2(void* aP1,  AbstractClass * aP2)
{

  int v4; // edx

  v4 = (unsigned int *)(IDA_SLOWORD(aP1->field_0) << 8);
  *((unsigned int *)this + 1) = (IDA_SHIWORD(aP1->field_0) << 8) + 128; /*0x642759*/
  *((unsigned int *)this + 2) = aP2; /*0x642766*/
  *this = v4 + 128; /*0x642769*/
  return this; /*0x64276b*/

}
}