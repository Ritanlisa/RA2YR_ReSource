// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x552450
int LCWStraw::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass *v2 = (void *)this->q014; /*0x552453*/
  *this = (int)&vt_LCWStraw; /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  AbstractClass *v3 = (void *)this->q018; /*0x552462*/
  this->q014 = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  this->q018 = 0; /*0x552477*/
  return Straw::Dtor(this); /*0x552483*/
}
}
