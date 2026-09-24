// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x74FF90
namespace ra2 {
namespace game {
BOOL VeterancyStruct::IsVeteran()
{
  return *this >= 1.0 && *this < 2.0; /*0x74ffb3*/
}
} // namespace game
} // namespace ra2

// 0x750010
namespace ra2 {
namespace game {
BOOL VeterancyStruct::IsElite()
{
  return *this >= 2.0; /*0x750024*/
}
} // namespace game
} // namespace ra2
