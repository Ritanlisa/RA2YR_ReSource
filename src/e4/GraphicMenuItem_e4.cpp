// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4F3A70
void GraphicMenuItem::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v1; // esi

  v1 = this->q00C; /*0x4f3a71*/
  *this = &vt_GraphicMenuItem; /*0x4f3a76*/
  if ( v1 ) /*0x4f3a7c*/
  {
    j_DeleteAndZero(v1); /*0x4f3a80*/
    __3_YAXPAX_Z(v1); /*0x4f3a86*/
  }
}
}
