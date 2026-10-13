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
namespace gamemd {  // G42.18 ns repair
int ObjectVector::Construct(int aP1, int aP2)
{

  this->q004 = 0; /*0x4d044b*/
  this->q008 = aP1; /*0x4d044e*/
  LOBYTE(this->q00C) = 1; /*0x4d0451*/
  BYTE1(this->q00C) = 0; /*0x4d0455*/
  *(unsigned int *)this->__pad_000 = &VectorClass<ObjectClass *>::`vftable'; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      this->ObjectVector_field_0x04 = aP2; /*0x4d0468*/
      return this->__pad_0; /*0x4d046e*/
    }
    this->ObjectVector_field_0x04 = __2_YAPAXI_Z(4 * aP1); /*0x4d047d*/
    BYTE1(this->ObjectVector_field_0x0C) = 1; /*0x4d0480*/
  }
  return this->__pad_0; /*0x4d046d*/

}
} // namespace gamemd