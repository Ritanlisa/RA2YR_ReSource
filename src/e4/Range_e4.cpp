// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Random_e4.hpp"

// 0x598030
namespace gamemd {  // G42.18 ns repair
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
  int64_t result; // rax

  int64_t v5; // [esp+8h] [ebp-18h]
  v5 = (gamemd::MapClass *)((unsigned int)(aP1 - aP0 + 1));
  double v3; // st7
  v3 = (double)v5; /*0x598046*/
  (*((unsigned int *)&(v5))) = (unsigned int)(aP0); /*0x59804a*/
  double v7; // [esp+18h] [ebp-8h]
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    int64_t v6; // [esp+8h] [ebp-18h]
    v6 = (unsigned int)Random::State(&unk_ABE890); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > (unsigned int)(aP1) ); /*0x598089*/
  return result; /*0x59808b*/
}  // G42.18 ns repair
} // namespace gamemd
