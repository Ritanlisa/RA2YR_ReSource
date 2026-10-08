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
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x5CED10
namespace gamemd {
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(void ** Block, char a2)
{

  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_MSBitPrintAnim; /*0x5ced16*/
  ((DeleteAndZero*)(DeleteAndZero *)((char *)this + 28))->Alt(); /*0x5ced1c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_MSAnim;
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    __3_YAXPAX_Z(this); /*0x5ced30*/
  return (gamemd::MSBitPrintAnim *)((void **)this); /*0x5ced3a*/

}
} // namespace gamemd