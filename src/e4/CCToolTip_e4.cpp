// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7784A0
CCToolTip * CCToolTip::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCToolTip *__thiscall CCToolTip::QueryInterface(_DWORD *Block, char a2)
{
  *Block = &CCToolTip::`vftable'; /*0x7784a3*/
  ToolTipClass::updateString(Block); /*0x7784a9*/
  if ( (a2 & 1) != 0 ) /*0x7784b3*/
    __3_YAXPAX_Z(Block); /*0x7784b6*/
  return (CCToolTip *)Block; /*0x7784c0*/
}
}
