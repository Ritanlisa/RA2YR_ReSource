// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x758670
namespace gamemd {
char sub_758670(float * a1, int a2)
{
{
    int v2;
    int v3;
    float *v5;
    double v6;
    v2 = DataGlobal_8469F4[a2];
    v3 = 0;
    if ( v2 > 0 )
  {
    v5 = (float *)(DataGlobal_8469E0[a2] + 4);
    do
    {
    v6 = *(v5 - 1) * *a1 + v5[1] * *((int*)(a1) + 2) + *((int*)(a1) + 1) * *v5;
    if ( v6 >= 0.0 )
    g_VoxelShadeTable[v3] = Math::RoundToInt(v6 * 16.0);
    else
    g_VoxelShadeTable[v3] = 0;
    ++v3;
    v5 += 3;
    }
    while ( v3 < v2 );
  }
    DataGlobal_B45A8F = 16;
    DataGlobal_B45A8E = 16;
    DataGlobal_B45A8D = 16;
    return 16;
}
}
} // namespace gamemd
