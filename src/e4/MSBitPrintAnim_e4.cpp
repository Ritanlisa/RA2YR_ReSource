// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSBitPrintAnim_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/GameLoop_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"

// 0x5CED10
namespace gamemd {
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&MSBitPrintAnim_vftable; /*0x5ced16*/
  DeleteAndZero::Alt((DeleteAndZero *)((char *)&this->q0088)); /*0x5ced1c*/
  *(unsigned int *)this->__pad_0 = (void*)&MSAnim_vftable; /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    RA2_OPDEL(); /*0x5ced30*/
  return (void **)this; /*0x5ced3a*/
}
} // namespace gamemd