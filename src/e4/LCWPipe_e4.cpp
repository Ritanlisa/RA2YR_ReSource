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
namespace gamemd {
int LCWPipe::Dtor()
{

  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((unsigned int *)this + 5); /*0x552063*/
  *(unsigned int *)this->__pad_0 = &LCWPipe::`vftable'; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  v3 = (void *)*((unsigned int *)this + 6); /*0x552072*/
  *((unsigned int *)this + 5) = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  *((unsigned int *)this + 6) = 0; /*0x552087*/
  return Pipe::Dtor((Pipe *)this); /*0x552093*/

}
} // namespace gamemd