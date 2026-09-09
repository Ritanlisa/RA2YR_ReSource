// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7535D0
namespace gamemd {
int sub_7535D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_7535D0()
{
  int result; // eax

  if ( MEMORY[0xB1D4C4] ) /*0x7535d7*/
  {
    *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x7535d9*/
    MEMORY[0xB1D4C4] = 0; /*0x7535e0*/
  }
  if ( MEMORY[0xB1D4CC] ) /*0x7535f2*/
    Audio::Release(MEMORY[0xB1D4CC]); /*0x7535f4*/
  result = ThemeClass::ClearQueues(); /*0x7535f9*/
  MEMORY[0xB1D428] = 0; /*0x7535fe*/
  MEMORY[0xB1D3D8] = 0; /*0x753608*/
  return result; /*0x753612*/
}
}
} // namespace gamemd
