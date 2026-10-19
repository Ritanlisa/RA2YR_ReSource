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
namespace gamemd {  // G42.18 ns repair
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(void ** Block, char a2)
{
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EE9D8) */  /*0x5ced16*/
  ((DeleteAndZero *)((char *)Block + 28))->Alt(); /*0x5ced1c*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EE8E8) */  /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    operator delete((Block)); /*0x5ced30*/
  return (gamemd::MSBitPrintAnim *)(Block); /*0x5ced3a*/
}  // G42.18 ns repair
} // namespace gamemd