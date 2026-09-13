// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x552060
int LCWPipe::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LCWPipe_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x552063*/
  *this = (int)&vt_LCWPipe; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  v3 = (void *)*(this + 6); /*0x552072*/
  *(this + 5) = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  *(this + 6) = 0; /*0x552087*/
  return Pipe::Dtor(this); /*0x552093*/
}
}
