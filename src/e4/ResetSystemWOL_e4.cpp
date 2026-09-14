// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7AD2F0
void ** SessionClass::ResetSystemWOL_Reset(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void **__thiscall ResetSystemWOL_Reset(SessionClass *this, char a2)
{
  DeleteAndZero((void **)this); /*0x7ad2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ad2fd*/
    __3_YAXPAX_Z(this); /*0x7ad300*/
  return (void **)this; /*0x7ad30a*/
}
}
