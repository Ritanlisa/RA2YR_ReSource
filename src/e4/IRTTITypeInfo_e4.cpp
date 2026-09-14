// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x71D150
namespace ra2 {
namespace game {
unsigned int IRTTITypeInfo::GetOffset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall IRTTITypeInfo::GetOffset(Concurrency::details::SchedulerBase *this)
{
  return *((_DWORD *)this + 50); /*0x71d156*/
}
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
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_VeinholeMonsterClass;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace game
} // namespace ra2

// 0x4105E0
namespace ra2 {
namespace game {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    return AbstractClass::QueryInterface(a1 - 4, a2, a3);
}
}
} // namespace game
} // namespace ra2
