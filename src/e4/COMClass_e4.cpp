// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7669F0
VectorCursor * COMClass::disconnectPoint(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorCursor *__thiscall COMClass::disconnectPoint(_DWORD *Block, char a2)
{
  *Block = &VectorCursor<rc_ptr<WorldDominationTour::GameOption>,DynamicVectorClass<rc_ptr<WorldDominationTour::GameOption>>>::`vftable'; /*0x7669f9*/
  if ( (a2 & 1) != 0 ) /*0x7669ff*/
    __3_YAXPAX_Z(Block); /*0x766a02*/
  return (VectorCursor *)Block; /*0x766a0c*/
}
}

// 0x767010
rc_ptr_base * COMClass::lockServer(rc_ptr_base * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
rc_ptr_base *__thiscall COMClass::lockServer(rc_ptr_base *Block, char a2)
{
  int v3; // eax
  rc_ptr_base *v4; // ebp
  rc_ptr_base *v5; // esi
  int v6; // eax
  int v7; // edi

  if ( (a2 & 2) != 0 ) /*0x76701b*/
  {
    v3 = *((_DWORD *)Block - 1); /*0x76701d*/
    v4 = Block - 1; /*0x767021*/
    v5 = Block + 2 * v3; /*0x767024*/
    v6 = v3 - 1; /*0x767027*/
    if ( v6 >= 0 ) /*0x767028*/
    {
      v7 = v6 + 1; /*0x76702b*/
      do /*0x76703f*/
      {
        v5 -= 2; /*0x76702e*/
        v5->vfptr = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x767033*/
        ComPtr::Release(v5); /*0x767039*/
        --v7; /*0x76703e*/
      }
      while ( v7 ); /*0x76703f*/
    }
    if ( (a2 & 1) != 0 ) /*0x767045*/
      __3_YAXPAX_Z(v4); /*0x767048*/
    return v4; /*0x767050*/
  }
  else
  {
    Block->vfptr = &rc_ptr<WorldDominationTour::GameOption>::`vftable'; /*0x76705a*/
    ComPtr::Release(Block); /*0x767060*/
    if ( (a2 & 1) != 0 ) /*0x767068*/
      __3_YAXPAX_Z(Block); /*0x76706b*/
    return Block; /*0x767073*/
  }
}
}
