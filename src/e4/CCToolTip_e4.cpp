// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCToolTip_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SHA1_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Camera_e4.hpp"
#include "e4/classes/ToolTipClass_e4.hpp"

// 0x7784A0
namespace gamemd {  // G42.18 ns repair
CCToolTip * CCToolTip::QueryInterface(unsigned int * Block, char a2)
{

  *(unsigned int *)Block->__pad_0 = &vt_CCToolTip; /*0x7784a3*/
  ((ToolTipClass *)((ToolTipClass *)Block))->updateString(); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    __3_YAXPAX_Z(Block); /*0x7784b6*/
  return Block->__pad_0; /*0x7784c0*/

}
}  // G42.18 ns repair
} // namespace gamemd