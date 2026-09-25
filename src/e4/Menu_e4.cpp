// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Menu_e4.hpp"
#include "e4/e4_protos.h"

// 0x4C6140
namespace gamemd {
int Menu::Reset()
{
  this->u32_34 = 0; /*0x4c614c*/
  this->u32_38 = 0; /*0x4c614f*/
  this->u32_3C = 1; /*0x4c6152*/
  this->u16_40 = 0; /*0x4c6159*/
  memset(0, 0x30u); /*0x4c615d*/
  this->u16_30 = 0; /*0x4c615f*/
  return this; /*0x4c6163*/
}
} // namespace gamemd