// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWPipe_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LinkClass_e4.hpp"

// 0x552060
namespace gamemd {
int LCWPipe::Dtor()
{
  void *v2; // eax
  void *v3; // ecx
v2 = (void *)((unsigned int)((void *)this->u32_14));
  *(unsigned int *)this->__pad_0 = (void*)&LCWPipe_vftable; /*0x552066*/
  RA2_OPDEL(v2); /*0x55206d*/
  v3 = (void *)this->u32_18; /*0x552072*/
  this->u32_14 = 0; /*0x552075*/
  RA2_OPDEL(v3); /*0x55207d*/
  this->u32_18 = 0; /*0x552087*/
  return Pipe::Dtor(); /*0x552093*/
}
} // namespace gamemd