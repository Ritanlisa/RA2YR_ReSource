// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C9690
float Float::Accumulate(float value, int index)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float __thiscall Float::Accumulate(float *this, float value, int index)
{
  double v3; // st7

  v3 = value + *(this + index); /*0x6c9698*/
  *(this + index) = v3; /*0x6c969b*/
  return v3; /*0x6c969e*/
}
}

// 0x6C96B0
double Float::SubtractClamped(BuildingTypeClass * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Float::SubtractClamped(float *this, BuildingTypeClass *aP1, IUnknown *aP2)
{
  double result; // st7
  double v4; // st6

  if ( *(this + (_DWORD)aP2) >= (double)*(float *)&aP1 ) /*0x6c96c0*/
  {
    result = *(float *)&aP1; /*0x6c96d0*/
    v4 = *(this + (_DWORD)aP2) - *(float *)&aP1; /*0x6c96d7*/
  }
  else
  {
    result = *(this + (_DWORD)aP2); /*0x6c96c2*/
    v4 = result - result; /*0x6c96c8*/
  }
  *(this + (_DWORD)aP2) = v4; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}
}
