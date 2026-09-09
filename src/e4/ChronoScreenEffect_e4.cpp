// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x753580
namespace gamemd {
int ChronoScreenEffect::DecrementCounter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ChronoScreenEffect::DecrementCounter()
{
  int result; // eax

  result = MEMORY[0xB1D3D8]; /*0x753580*/
  if ( MEMORY[0xB1D3D8] ) /*0x753587*/
  {
    result = --MEMORY[0xB1D3D8]; /*0x75358e*/
    if ( MEMORY[0xB1D3D8] < 0 ) /*0x753594*/
      MEMORY[0xB1D3D8] = 0; /*0x753596*/
  }
  return result; /*0x7535a0*/
}
}
} // namespace gamemd
