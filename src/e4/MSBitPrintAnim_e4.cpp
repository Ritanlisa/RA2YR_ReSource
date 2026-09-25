// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSBitPrintAnim_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5CED10
namespace gamemd {
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(char a2)
{
  *(void **)this = (void*)&MSBitPrintAnim_vftable; /*0x5ced16*/
  this->DeleteAndZero_7.Alt(); /*0x5ced1c*/
  *(void **)this = (void*)&MSAnim_vftable; /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    RA2_OPDEL(); /*0x5ced30*/
  return this; /*0x5ced3a*/
}
} // namespace gamemd