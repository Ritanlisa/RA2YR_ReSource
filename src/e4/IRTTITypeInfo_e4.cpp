// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/IRTTITypeInfo_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x71D150
namespace gamemd {
unsigned int IRTTITypeInfo::GetOffset()
{

  return *((unsigned int *)this + 50); /*0x71d156*/

}
} // namespace ra2

// 0x4105E0
namespace gamemd {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{

  return AbstractClass::QueryInterface(a1 - 4, a2, a3);

}
} // namespace gamemd

// 0x74F6A0
namespace gamemd {
unsigned int * IRTTITypeInfo::loc_74F6A0(char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74f653*/
  *Block = &vt_VectorClass_VeinholeMonsterClass; /*0x74f656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x74f660*/
  {
    __3_YAXPAX_Z(v3); /*0x74f668*/
    *(Block + 1) = 0; /*0x74f670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x74f67b*/
  *(Block + 2) = 0; /*0x74f681*/
  if ( (a2 & 1) != 0 ) /*0x74f688*/
    __3_YAXPAX_Z(Block); /*0x74f68b*/
  return (VectorClass *)Block; /*0x74f695*/

}
} // namespace gamemd
