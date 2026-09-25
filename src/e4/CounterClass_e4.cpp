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
  void *v3; // eax

  v3 = (void *)this->count; /*0x49fce3*/
  *(void **)this = (void*)&VectorClass_int_vftable; /*0x49fce6*/
  if ( v3 && this->q00D ) /*0x49fcf0*/
  {
    RA2_OPDEL(v3); /*0x49fcf8*/
    this->count = 0; /*0x49fd00*/
  }
  this->q00D = 0; /*0x49fd0b*/
  this->Capacity = 0; /*0x49fd11*/
  if ( (a2 & 1) != 0 ) /*0x49fd18*/
    RA2_OPDEL(); /*0x49fd1b*/
  return this; /*0x49fd25*/
}
} // namespace gamemd
