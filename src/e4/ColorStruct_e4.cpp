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
int ColorStruct::SetRGB(uint8_t a2, uint8_t a3, uint8_t a4)
{

  void *v4; // eax

  v4 = (void *)(a4 | ((a3 | ((a2 | 0xFFFFFF00) << 8)) << 8)); /*0x4a35c5*/
  this->field_50 = v4; /*0x4a35c7*/
  this->field_30 = v4; /*0x4a35ca*/
  this->field_10 = v4; /*0x4a35cd*/
  this->field_54 = (void *)-16777216; /*0x4a35d5*/
  this->field_34 = (void *)-16777216; /*0x4a35d8*/
  this->field_14 = (void *)-16777216; /*0x4a35db*/
  return -16777216; /*0x4a35de*/

}
} // namespace gamemd