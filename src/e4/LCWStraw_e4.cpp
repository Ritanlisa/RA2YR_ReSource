// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x552450
int LCWStraw::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LCWStraw_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x552453*/
  *this = (int)&LCWStraw::`vftable'; /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  v3 = (void *)*(this + 6); /*0x552462*/
  *(this + 5) = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  *(this + 6) = 0; /*0x552477*/
  return Straw::Dtor(this); /*0x552483*/
}
}
