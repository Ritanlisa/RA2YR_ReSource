// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/LCWPipe_e4.hpp"
#include "e4/e4_protos.h"

// 0x552060
namespace gamemd {
int LCWPipe::Dtor()
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)this->q014; /*0x552063*/
  *this = (int)&(void*)(void*)&LCWPipe_vftable; /*0x552066*/
  RA2_OPDEL(v2); /*0x55206d*/
  v3 = (void *)this->q018; /*0x552072*/
  this->q014 = 0; /*0x552075*/
  RA2_OPDEL(v3); /*0x55207d*/
  this->q018 = 0; /*0x552087*/
  return Pipe::Dtor(); /*0x552093*/
}
} // namespace gamemd