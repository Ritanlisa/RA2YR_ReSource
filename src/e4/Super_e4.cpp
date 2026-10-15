// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6CC260
namespace gamemd {  // G42.18 ns repair
int Super::GetDefaultTimer(void *a1)
{

  int result; // eax

  result = (int)this->field_24; /*0x6cc260*/
  if ( result == -1 ) /*0x6cc266*/
    return *((unsigned int *)this->field_28 + 44); /*0x6cc26b*/
  return result; /*0x6cc271*/

}
}  // G42.18 ns repair