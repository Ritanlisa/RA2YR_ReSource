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
{
    double result;
    double v4;
    if ( *(this + (int)aP2) >= (double)*(float *)&aP1 )
  {
    result = *(float *)&aP1;
    v4 = *(this + (int)aP2) - *(float *)&aP1;
  }
    else
  {
    result = *(this + (int)aP2);
    v4 = result - result;
  }
    *(this + (int)aP2) = v4;
    return result;
}
}
