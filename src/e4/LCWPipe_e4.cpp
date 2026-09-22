// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x552060
int LCWPipe::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass *v2 = (void *)this->q005; /*0x552063*/
  *this = (int)&vt_LCWPipe; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  AbstractClass *v3 = (void *)this->q006; /*0x552072*/
  this->q005 = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  this->q006 = 0; /*0x552087*/
  return Pipe::Dtor(this); /*0x552093*/
}
}
