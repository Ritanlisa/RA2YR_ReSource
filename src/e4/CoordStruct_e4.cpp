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
namespace gamemd {  // G42.18 ns repair
unsigned int * CoordStruct::Set2(void* aP1, AbstractClass * aP2, void *a3, void *a4, void *a5)
{
  
  int v4; // edx
  v4 = *(unsigned int *)(aP1) << 8; /*0x642756*/
  this->Y = (aP1[(unsigned int)(1])<< 8) + 128; /*0x642759*/
  this->Z = (int)(aP2); /*0x642766*/
  this->vfptr = (void *)(v4 + 128); /*0x642769*/
  return (unsigned int *)(&this->vfptr); /*0x64276b*/
}
}  // G42.18 ns repair