// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Menu_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4C6140
namespace gamemd {
int Menu::Reset()
{

  *((unsigned int *)this + 13) = 0; /*0x4c614c*/
  *((unsigned int *)this + 14) = 0; /*0x4c614f*/
  *((unsigned int *)this + 15) = 1; /*0x4c6152*/
  *((unsigned short *)this + 32) = 0; /*0x4c6159*/
  memset(this, 0, 0x30u); /*0x4c615d*/
  *((unsigned short *)this + 24) = 0; /*0x4c615f*/
  return (int)this; /*0x4c6163*/

}
} // namespace gamemd