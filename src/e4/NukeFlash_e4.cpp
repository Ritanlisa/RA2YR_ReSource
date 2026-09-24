// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53A110
namespace gamemd {
BOOL NukeFlash::IsActive()
{
  return NukeFlash_Status == 1; /*0x53a11e*/
}
} // namespace gamemd

// 0x53A120
namespace gamemd {
BOOL NukeFlash::ProcessEffect()
{
  return NukeFlash_Status == 2; /*0x53a12e*/
}
} // namespace gamemd
