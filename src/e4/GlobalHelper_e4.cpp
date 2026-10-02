// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x758670
namespace gamemd {  // G42.18 ns repair
char sub_758670(float * a1, int a2)
{
  int v2; // ebp
  int v3; // esi
  float *v5; // edi
  double v6; // st7

  v2 = ((unsigned int *)(dword_8469F4))[a2]; /*0x758679*/
  v3 = 0; /*0x758681*/
  if ( v2 > 0 ) /*0x758687*/
  {
    v5 = (float *)(((unsigned int *)(dword_8469E0))[a2] + 4); /*0x75868a*/
    do /*0x7586d0*/
    {
      v6 = *(v5 - 1) * *a1 + v5[1] * a1[2] + a1[1] * *v5; /*0x75869f*/
      if ( v6 >= 0.0 ) /*0x7586ac*/
        ((unsigned int *)(g_VoxelShadeTable))[v3] = Math::RoundToInt(v6 * 16.0); /*0x7586c4*/
      else
        ((unsigned int *)(g_VoxelShadeTable))[v3] = 0; /*0x7586b0*/
      ++v3; /*0x7586ca*/
      v5 += 3; /*0x7586cb*/
    }
    while ( v3 < v2 ); /*0x7586d0*/
  }
  byte_B45A8F = 16; /*0x7586d7*/
  byte_B45A8E = 16; /*0x7586dc*/
  byte_B45A8D = 16; /*0x7586e1*/
  return 16; /*0x7586d5*/
}
}  // G42.18 ns repair
} // namespace gamemd
