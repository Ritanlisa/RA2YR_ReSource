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
float Float::SubtractClamped(BuildingTypeClass * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6C96B0)
}
} // namespace gamemd