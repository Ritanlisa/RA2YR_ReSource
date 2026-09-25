// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ChronoScreenEffect_e4.hpp"
#include "e4/e4_protos.h"

// 0x753580
namespace gamemd {
int ChronoScreenEffect::DecrementCounter()
{
  int result; // eax

  result = dword_B1D3D8; /*0x753580*/
  if ( dword_B1D3D8 ) /*0x753587*/
  {
    result = --dword_B1D3D8; /*0x75358e*/
    if ( dword_B1D3D8 < 0 ) /*0x753594*/
      dword_B1D3D8 = 0; /*0x753596*/
  }
  return result; /*0x7535a0*/
}
} // namespace gamemd
