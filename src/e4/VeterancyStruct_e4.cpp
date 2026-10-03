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

  return *(float *)this >= 1.0 && *(float *)this < 2.0; /*0x74ffb3*/

}
} // namespace gamemd

// 0x750010
namespace gamemd {
bool VeterancyStruct::IsElite()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x750010)
}
} // namespace gamemd
