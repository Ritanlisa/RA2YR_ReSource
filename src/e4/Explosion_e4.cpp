// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Explosion_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Event_e4.hpp"

// 0x53DDA0
namespace gamemd {
void Explosion::RemoveItem()
{
  int v2; // edx
  int v4; // edx

  v2 = this->u32_10; /*0x53dda0*/
  a2 = a2; /*0x53dda3*/
  if ( a2 >= v2 ) /*0x53dda9*/
    return 0; /*0x53ddcc*/
  v4 = v2 - 1; /*0x53ddab*/
  this->u32_10 = v4; /*0x53ddae*/
  if ( a2 < v4 ) /*0x53ddb1*/
  {
    do /*0x53ddc4*/
    {
      ++a2; /*0x53ddb7*/
      *(unsigned int *)(this->u32_4 + 4 * a2 - 4) = *(unsigned int *)(this->u32_4 + 4 * a2); /*0x53ddbb*/
    }
    while ( a2 < this->u32_10 ); /*0x53ddc4*/
  }
  return 1; /*0x53ddc9*/
}
} // namespace gamemd