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

// 0x5CED10
namespace gamemd {
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(void ** Block, char a2)
{

  *Block = &vt_MSBitPrintAnim; /*0x5ced16*/
  DeleteAndZero::Alt(Block + 7); /*0x5ced1c*/
  *Block = &vt_MSAnim; /*0x5ced25*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x5ced2d*/
    RA2_OPDEL(Block); /*0x5ced30*/
  return (MSBitPrintAnim *)Block; /*0x5ced3a*/

}
} // namespace gamemd