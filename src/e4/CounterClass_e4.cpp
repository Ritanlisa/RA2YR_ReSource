// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CounterClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x49FCE0
namespace gamemd {
CounterClass * CounterClass::QueryInterface(char a2)
{
  void *count; // eax

  count = (void *)((unsigned int)((void *)this->count));
  this->items = (unsigned int)((void*)&VectorClass_int_vftable);
  if ( count && this->u32_D ) /*0x49fcf0*/
  {
    RA2_OPDEL(count); /*0x49fcf8*/
    this->count = 0; /*0x49fd00*/
  }
  this->u32_D = (unsigned int)((gamemd::CounterClass *)(0));
  this->u32_8 = (unsigned int)((gamemd::CounterClass *)(0));
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    RA2_OPDEL(); /*0x49fd1b*/
  return &this->items; /*0x49fd25*/
}
} // namespace gamemd
