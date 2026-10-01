// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FootClass_e4.hpp"

// 0x4D0440
namespace gamemd {
int ObjectVector::Construct(int aP1, int aP2)
{

  this->ObjectVector_field_0x04 = (unsigned int)(0);
  this->ObjectVector_field_0x08 = (unsigned int)(aP1);
  LOBYTE(this->ObjectVector_field_0x0C) = 1; /*0x4d0451*/
  BYTE1(this->ObjectVector_field_0x0C) = 0; /*0x4d0455*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->ObjectVector_field_0x04 = (unsigned int)(aP2);
      return this->__pad_0; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = __2_YAPAXI_Z(4 * aP1); /*0x4d047d*/
    BYTE1(this->ObjectVector_field_0x0C) = 1; /*0x4d0480*/
  }
  return this->__pad_0; /*0x4d046d*/

}
} // namespace gamemd