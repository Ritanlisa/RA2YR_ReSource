// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x598030
namespace gamemd {
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __fastcall Range_RandomInt(MouseClass *aP0, MapClass *aP1)
{
  double v3; // st7
  __int64 result; // rax
  __int64 v5; // [esp+8h] [ebp-18h]
  __int64 v6; // [esp+8h] [ebp-18h]
  double v7; // [esp+18h] [ebp-8h]

  v5 = (unsigned int)((char *)aP1 - (char *)aP0 + 1); /*0x59803e*/
  v3 = (double)v5; /*0x598046*/
  LODWORD(v5) = aP0; /*0x59804a*/
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    v6 = (unsigned int)Random::State(&g_Randomizer); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > (unsigned int)aP1 ); /*0x598089*/
  return result; /*0x59808b*/
}
}
} // namespace gamemd
