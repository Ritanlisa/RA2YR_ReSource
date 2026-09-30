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
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_ObjectClass___vftable; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
            *((unsigned int *)this + 4) = aP2;
      return this; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = RA2_OPNEW(4 * aP1); /*0x4d047d*/
        *((unsigned char *)this + 13) = 1;
  }
  return this; /*0x4d046d*/
}
} // namespace gamemd