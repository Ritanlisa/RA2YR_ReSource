// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4BBC30
namespace gamemd {  // G42.18 ns repair
int GetBitShift_Red()
{
  return g_BitShift_Red; /*0x4bbc35*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x4BBC40
namespace gamemd {
int GetBitShift_Green()
{
  return g_BitShift_Green_0; /*0x4bbc45*/
}
} // namespace gamemd

// 0x4BBC70
namespace gamemd {
XSurface * GetBitShift_Blue()
{
  return (gamemd::XSurface *)(g_BitShift_Blue);
}
} // namespace gamemd
