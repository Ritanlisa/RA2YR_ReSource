// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4D0440
unsigned int * ObjectVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->q004 = 0; /*0x4d044b*/
  this->q008 = aP1; /*0x4d044e*/
  this->q00C = 1; /*0x4d0451*/
  this->IsAllocated = 0; /*0x4d0455*/
  *this = &vt_VectorClass_ObjectClass; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->q004 = aP2; /*0x4d0468*/
      return this; /*0x4d046e*/
    }
    this->q004 = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x4d047d*/
    this->IsAllocated = 1; /*0x4d0480*/
  }
  return this; /*0x4d046d*/
}
}
