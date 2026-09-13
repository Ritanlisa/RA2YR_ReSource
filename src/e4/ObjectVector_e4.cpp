// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4D0440
unsigned int * ObjectVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ObjectVector::Construct(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  *(this + 1) = 0; /*0x4d044b*/
  *(this + 2) = aP1; /*0x4d044e*/
  *((_BYTE *)this + 12) = 1; /*0x4d0451*/
  *((_BYTE *)this + 13) = 0; /*0x4d0455*/
  *this = &vt_VectorClass_ObjectClass; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      *(this + 1) = aP2; /*0x4d0468*/
      return this; /*0x4d046e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x4d047d*/
    *((_BYTE *)this + 13) = 1; /*0x4d0480*/
  }
  return this; /*0x4d046d*/
}
}
