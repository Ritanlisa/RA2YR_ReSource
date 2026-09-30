// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6CC260
namespace gamemd {
int Super::GetDefaultTimer()
{
  int result; // eax

    result = *((unsigned int *)this + 36);
  if ( result == -1 ) /*0x6cc266*/
        return *(unsigned int *)(*((unsigned int *)this + 40) + 176);
  return result; /*0x6cc271*/
}
}