// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4D0440
namespace gamemd {
int ObjectVector::Construct(void* a1, void* a2, void* a3)
{
  this->ObjectVector_field_0x04 = 0; /*0x4d044b*/
  this->ObjectVector_field_0x08 = aP1; /*0x4d044e*/
  IDA_LOBYTE(this->ObjectVector_field_0x0C) = 1; /*0x4d0451*/
  IDA_BYTE1(this->ObjectVector_field_0x0C) = 0; /*0x4d0455*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ObjectClass___vftable; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->ObjectVector_field_0x04 = aP2; /*0x4d0468*/
      return this; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = RA2_OPNEW(4 * aP1); /*0x4d047d*/
    IDA_BYTE1(this->ObjectVector_field_0x0C) = 1; /*0x4d0480*/
  }
  return this; /*0x4d046d*/
}
} // namespace gamemd