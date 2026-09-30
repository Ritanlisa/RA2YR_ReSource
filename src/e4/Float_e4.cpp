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

  double v3; // st7

  v3 = value + *(this + index); /*0x6c9698*/
  *(this + index) = v3; /*0x6c969b*/
  return v3; /*0x6c969e*/

}
} // namespace gamemd
// 0x6C96B0
namespace gamemd {
float Float::SubtractClamped(float a, float b, float min)
{

  double result; // st7
  double v4; // st6

  if ( *(a + (unsigned int)min) >= (double)*(float *)&b ) /*0x6c96c0*/
  {
    result = *(float *)&b; /*0x6c96d0*/
    v4 = *(a + (unsigned int)min) - *(float *)&b; /*0x6c96d7*/
  }
  else
  {
    result = *(a + (unsigned int)min); /*0x6c96c2*/
    v4 = result - result; /*0x6c96c8*/
  }
  *(a + (unsigned int)min) = v4; /*0x6c96ca*/
  return result; /*0x6c96cd*/

}
} // namespace gamemd