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
int ObjectVector::Construct( IUnknown * aP1, IUnknown * aP2)
{

  *(this + 1) = 0; /*0x4d044b*/
  *(this + 2) = aP1; /*0x4d044e*/
  *((unsigned char *)this + 12) = 1; /*0x4d0451*/
  *((unsigned char *)this + 13) = 0; /*0x4d0455*/
  *this = &vt_VectorClass_ObjectClass; /*0x4d0458*/
  if ( aP1 ) /*0x4d045e*/
  {
    if ( aP2 ) /*0x4d0466*/
    {
      *(this + 1) = aP2; /*0x4d0468*/
      return this; /*0x4d046e*/
    }
    *(this + 1) = RA2_OPNEW(4 * (unsigned int)aP1); /*0x4d047d*/
    *((unsigned char *)this + 13) = 1; /*0x4d0480*/
  }
  return this; /*0x4d046d*/

}
} // namespace gamemd