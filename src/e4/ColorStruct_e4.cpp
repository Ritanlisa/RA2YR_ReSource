// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Color_e4.hpp"

// 0x4A35A0
namespace gamemd {
int ColorStruct::SetRGB(unsigned char a2, unsigned char a3, unsigned char a4)
{

  unsigned int v4; // eax

  v4 = a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8); /*0x4a35c5*/
  *((unsigned int *)this + 20) = v4; /*0x4a35c7*/
  *((unsigned int *)this + 12) = v4; /*0x4a35ca*/
  *((unsigned int *)this + 4) = v4; /*0x4a35cd*/
  *((unsigned int *)this + 21) = -16777216; /*0x4a35d5*/
  *((unsigned int *)this + 13) = -16777216; /*0x4a35d8*/
  *((unsigned int *)this + 5) = -16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/

}
} // namespace gamemd