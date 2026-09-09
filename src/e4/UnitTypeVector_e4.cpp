// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x513940
unsigned int * UnitTypeVector::ConstructUnitTypeVectorClass(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall VectorClass_Constructor_UnitType(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x51394b*/
  *(this + 2) = a2; /*0x51394e*/
  *((_BYTE *)this + 12) = 1; /*0x513951*/
  *((_BYTE *)this + 13) = 0; /*0x513955*/
  *this = &VectorClass<UnitTypeClass const *>::`vftable'; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      *(this + 1) = a3; /*0x513968*/
      return this; /*0x51396e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x51397d*/
    *((_BYTE *)this + 13) = 1; /*0x513980*/
  }
  return this; /*0x51396d*/
}
}

// 0x5D8950
unsigned int * UnitTypeVector::Construct2(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5D8950(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x5d895b*/
  *(this + 2) = a2; /*0x5d895e*/
  *((_BYTE *)this + 12) = 1; /*0x5d8961*/
  *((_BYTE *)this + 13) = 0; /*0x5d8965*/
  *this = &VectorClass<UnitTypeClass *>::`vftable'; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      *(this + 1) = a3; /*0x5d8978*/
      return this; /*0x5d897e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x5d898d*/
    *((_BYTE *)this + 13) = 1; /*0x5d8990*/
  }
  return this; /*0x5d897d*/
}
}
