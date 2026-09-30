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

  *(a1 + 1) = 0; /*0x4d044b*/
  *(a1 + 2) = a2; /*0x4d044e*/
  *((unsigned char *)a1 + 12) = 1; /*0x4d0451*/
  *((unsigned char *)a1 + 13) = 0; /*0x4d0455*/
  *a1 = &vt_VectorClass_ObjectClass; /*0x4d0458*/
  if ( a2 ) /*0x4d045e*/
  {
    if ( a3 ) /*0x4d0466*/
    {
      *(a1 + 1) = a3; /*0x4d0468*/
      return a1; /*0x4d046e*/
    }
    *(a1 + 1) = __2_YAPAXI_Z(4 * (unsigned int)a2); /*0x4d047d*/
    *((unsigned char *)a1 + 13) = 1; /*0x4d0480*/
  }
  return a1; /*0x4d046d*/

}
} // namespace gamemd