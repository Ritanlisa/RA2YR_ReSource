// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CED10
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(char a2)
{
  *this = &MSBitPrintAnim::`vftable'; /*0x5ced16*/
  DeleteAndZero::Alt(this + 7); /*0x5ced1c*/
  *this = &MSAnim::`vftable'; /*0x5ced25*/
  if ( (a2 & 1) != 0 ) /*0x5ced2d*/
    __3_YAXPAX_Z(this); /*0x5ced30*/
  return this; /*0x5ced3a*/
}