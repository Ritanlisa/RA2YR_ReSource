// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWPipe_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"

// 0x552060
namespace gamemd {  // G42.18 ns repair
int LCWPipe::Dtor()
{
  
  
  void *v2; // eax
  v2 = (void *)this->u32_14; /*0x552063*/
  /* X11: ptr_0 install elided (implicit via LCWPipe virtuals 0x552066) */
  __3_YAXPAX_Z(v2); /*0x55206d*/
  void *v3; // ecx
  v3 = (void *)this->u32_18; /*0x552072*/
  this->u32_14 = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  this->u32_18 = 0; /*0x552087*/
  return ((Pipe *)this)->Dtor(); /*0x552093*/
  
}
} // namespace gamemd
