// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x46DC90
namespace gamemd {  // G42.18 ns repair
int Compare::Field96(const void * a1, const void * a2)
{

  int v2; // eax
  v2 = *(unsigned int *)(*(unsigned int *)a1 + 96); /*0x46dc9c*/
  int v3; // ecx
  v3 = *(unsigned int *)(*(unsigned int *)a2 + 96); /*0x46dc9f*/
  if ( v2 == v3 )
    return 0; /*0x46dca6*/
  else
    return v2 <= v3 ? 1 : -1;
}  // G42.18 ns repair
} // namespace gamemd