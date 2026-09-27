// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x598030
namespace gamemd {
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
  MouseClass * v3;
  int64_t result; // rax
  int64_t v5; // [esp+8h] [ebp-18h]
  int64_t v6; // [esp+8h] [ebp-18h]
  double v7; // [esp+18h] [ebp-8h]

  v5 = (unsigned int)(aP1 - aP0 + 1);
  v3 = (gamemd::MouseClass *)((unsigned int)((double)v5));
  IDA_LODWORD(v5) = aP0; /*0x59804a*/
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    v6 = (unsigned int)Random::State(&g_Randomizer); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > aP1 ); /*0x598089*/
  return result; /*0x59808b*/
}
} // namespace gamemd
