// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C6880
StaticButtonClass * StaticButtonClass::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
StaticButtonClass *__thiscall StaticButtonClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 12); /*0x6c6883*/
  *Block = &StaticButtonClass::`vftable'; /*0x6c6886*/
  if ( v3 ) /*0x6c688e*/
    __3_YAXPAX_Z(v3); /*0x6c6891*/
  Vector::Clear((int)(Block + 9)); /*0x6c689c*/
  GadgetClass::Dtor(Block); /*0x6c68a3*/
  if ( (a2 & 1) != 0 ) /*0x6c68ad*/
    __3_YAXPAX_Z(Block); /*0x6c68b0*/
  return (StaticButtonClass *)Block; /*0x6c68ba*/
}
}
