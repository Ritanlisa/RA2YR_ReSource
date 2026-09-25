// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x74FF90
namespace gamemd {
BOOL VeterancyStruct::IsVeteran()
{
  return *this >= 1.0 && *this < 2.0; /*0x74ffb3*/
}
} // namespace gamemd

// 0x750010
namespace gamemd {
BOOL VeterancyStruct::IsElite()
{
  return *this >= 2.0; /*0x750024*/
}
} // namespace gamemd
