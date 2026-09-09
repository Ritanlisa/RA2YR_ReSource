// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4BBC30
namespace gamemd {
int GetBitShift_Red()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int GetBitShift_Red()
{
  return MEMORY[0x8A0DD0]; /*0x4bbc35*/
}
}
} // namespace gamemd

// 0x4BBC40
namespace gamemd {
int GetBitShift_Green()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int GetBitShift_Green()
{
  return MEMORY[0x8A0DD4]; /*0x4bbc45*/
}
}
} // namespace gamemd

// 0x4BBC70
namespace gamemd {
XSurface * GetBitShift_Blue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
XSurface *GetBitShift_Blue()
{
  return *(XSurface **)&stru_89E138.__pad_14B0[6128]; /*0x4bbc75*/
}
}
} // namespace gamemd
