// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Float_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6C9690
namespace gamemd {
float Float::Accumulate(float value, int index)
{
  *((float *)this + index) = value + *((float *)this + index); /*0x6c969b*/
  return index; /*0x6c969e*/
}
} // namespace gamemd
// 0x6C96B0
namespace gamemd {
double Float::SubtractClamped(BuildingTypeClass * aP1, IUnknown * aP2)
{
  __int16 v3; // fps
  double v4; // st7
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  int result; // eax
  double v9; // st6

  v4 = *((float *)this + aP2); /*0x6c96b4*/
  v5 = v4 < aP1; /*0x6c96b7*/
  v6 = 0; /*0x6c96b7*/
  v7 = v4 == aP1; /*0x6c96b7*/
  IDA_LOWORD(result) = v3; /*0x6c96bb*/
  if ( v4 >= aP1 ) /*0x6c96c0*/
    v9 = *((float *)this + aP2) - aP1; /*0x6c96d7*/
  else
    v9 = *((float *)this + aP2) - *((float *)this + aP2); /*0x6c96c8*/
  *((float *)this + aP2) = v9; /*0x6c96ca*/
  return result; /*0x6c96cd*/
}
} // namespace gamemd