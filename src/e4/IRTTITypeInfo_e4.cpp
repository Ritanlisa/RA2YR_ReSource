// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x71D150
namespace ra2 {
namespace game {
unsigned int IRTTITypeInfo::GetOffset()
{
  return *((_DWORD *)this + 50); /*0x71d156*/
}
} // namespace ra2
}

// 0x4105E0
namespace ra2 {
namespace game {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
  return AbstractClass::QueryInterface(a1 - 4, a2, a3);
}
} // namespace game
} // namespace ra2

// 0x74F6A0
namespace ra2 {
namespace game {
unsigned int * IRTTITypeInfo::loc_74F6A0(char a2)
{
{
    void *v3;
    v3 = (void *)this->q004;
    *(void**)this = &vt_VectorClass_VeinholeMonsterClass;
    if ( v3 && this->q00D )
  {
    __3_YAXPAX_Z(v3);
    this->q004 = 0;
  }
    this->q00D = 0;
    this->q008 = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace game
} // namespace ra2
