// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4105E0
namespace ra2 {
namespace game {
int IRTTITypeInfo::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall IRTTITypeInfo_QueryInterface(int a1, const void *a2, _DWORD *a3)
{
  return AbstractClass::QueryInterface(a1 - 4, a2, a3);
}
}
} // namespace game
} // namespace ra2

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
unsigned int * IRTTITypeInfo::loc_74F6A0(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall IRTTITypeInfo::loc_74F6A0(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x74f6a3*/
  *Block = &VectorClass<VeinholeMonsterClass *>::`vftable'; /*0x74f6a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x74f6b0*/
  {
    __3_YAXPAX_Z(v3); /*0x74f6b8*/
    *(Block + 1) = 0; /*0x74f6c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x74f6cb*/
  *(Block + 2) = 0; /*0x74f6d1*/
  if ( (a2 & 1) != 0 ) /*0x74f6d8*/
    __3_YAXPAX_Z(Block); /*0x74f6db*/
  return Block; /*0x74f6e5*/
}
}
} // namespace game
} // namespace ra2
