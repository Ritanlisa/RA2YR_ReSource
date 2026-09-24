// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C9690
float Float::Accumulate(float value, int index)
{
  double result; // st7

  result = value + *(this + index); /*0x6c9698*/
  *(this + index) = result; /*0x6c969b*/
  return result; /*0x6c969e*/
}
// 0x6C96B0
double Float::SubtractClamped(BuildingTypeClass * aP1, IUnknown * aP2)
{
  double result; // st7
  double v4; // st6

  if ( *(this + aP2) >= (double)aP1 ) /*0x6c96c0*/
  {
    result = aP1; /*0x6c96d0*/
    v4 = *(this + aP2) - aP1; /*0x6c96d7*/
  }
  else
  {
    result = *(this + aP2); /*0x6c96c2*/
    v4 = result - result; /*0x6c96c8*/
  }
  *(this + aP2) = v4; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}