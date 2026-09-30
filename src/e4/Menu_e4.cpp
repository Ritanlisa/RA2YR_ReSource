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
    *((unsigned int *)this + 208) = 0;
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 240) = 1;
    *((unsigned short *)this + 256) = 0;
  memset(0, 0x30u); /*0x4c615d*/
    *((unsigned short *)this + 192) = 0;
  return (int)this; /*0x4c6163*/
}
} // namespace gamemd