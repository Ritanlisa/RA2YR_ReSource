// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x598030
namespace gamemd {
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
{
    double v3;
    __int64 result;
    __int64 v5;
    __int64 v6;
    double v7;
    v5 = (unsigned int)((char *)aP1 - (char *)(aP0) + 1);
    v3 = (double)v5;
    LODWORD(v5) = aP0;
    v7 = (double)v5;
    do
  {
    v6 = (unsigned int)Random::State(&g_Randomizer);
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7);
  }
    while ( (unsigned int)result > (unsigned int)aP1 );
    return result;
}
}
} // namespace gamemd
