// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CED10
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(void ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MSBitPrintAnim *__thiscall MSBitPrintAnim::QueryInterface(void **Block, char a2)
{
  *Block = &MSBitPrintAnim::`vftable'; /*0x5ced16*/
  DeleteAndZero::Alt(Block + 7); /*0x5ced1c*/
  *Block = &MSAnim::`vftable'; /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    __3_YAXPAX_Z(Block); /*0x5ced30*/
  return (MSBitPrintAnim *)Block; /*0x5ced3a*/
}
}
