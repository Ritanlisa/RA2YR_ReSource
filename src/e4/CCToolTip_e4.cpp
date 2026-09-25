// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CCToolTip_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimTypeClass_e4.hpp"

// 0x7784A0
namespace gamemd {
CCToolTip * CCToolTip::QueryInterface(char a2)
{
  *this = &(void*)(void*)&CCToolTip_vftable; /*0x7784a3*/
  ToolTipClass::updateString(); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    RA2_OPDEL(); /*0x7784b6*/
  return this; /*0x7784c0*/
}
} // namespace gamemd