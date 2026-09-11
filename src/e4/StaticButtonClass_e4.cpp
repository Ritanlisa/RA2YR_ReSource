// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C6880
StaticButtonClass * StaticButtonClass::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
StaticButtonClass *__thiscall StaticButtonClass::QueryInterface(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 12); /*0x6c6883*/
  *this = &StaticButtonClass::`vftable'; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  Vector::Clear((int)(this + 9)); /*0x6c689c*/
  GadgetClass::Dtor(this); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(this); /*0x6c68b0*/
  return (StaticButtonClass *)this; /*0x6c68ba*/
}
}
