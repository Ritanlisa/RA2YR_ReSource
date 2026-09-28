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
  return *(_DWORD *)&this->__pad_C0[8]; /*0x71d156*/
}
} // namespace ra2

// 0x4105E0
namespace gamemd {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  AbstractClass *v3; // ecx

  return AbstractClass::QueryInterface(v3);
}
} // namespace gamemd

// 0x74F6A0
namespace gamemd {
unsigned int * IRTTITypeInfo::loc_74F6A0(char a2)
{
    void *v3;
    v3 = (void *)this->q004;
    *(void**)this = &vt_VectorClass_VeinholeMonsterClass;
    if ( v3 && this->q00D )
  {
    RA2_OPDEL(v3);
    this->q004 = 0;
  }
    this->q00D = 0;
    this->q008 = 0;
    if ( (a2 & 1) != 0 )
    RA2_OPDEL();
    return 0;
}
} // namespace gamemd
