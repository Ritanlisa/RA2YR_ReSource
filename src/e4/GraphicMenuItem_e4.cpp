// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4F3A70
void GraphicMenuItem::Dtor()
{
  void **v1; // esi

  v1 = *(this + 3); /*0x4f3a71*/
  *this = &GraphicMenuItem::`vftable'; /*0x4f3a76*/
  if ( v1 ) /*0x4f3a7c*/
  {
    j_DeleteAndZero(v1); /*0x4f3a80*/
    __3_YAXPAX_Z(v1); /*0x4f3a86*/
  }
}