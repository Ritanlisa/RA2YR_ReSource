// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x513940
namespace gamemd {
unsigned int * UnitTypeVector::ConstructUnitTypeVectorClass(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x51394b*/
  *((unsigned int *)this + 2) = a2; /*0x51394e*/
  *((unsigned char *)this + 12) = 1; /*0x513951*/
  *((unsigned char *)this + 13) = 0; /*0x513955*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      *((unsigned int *)this + 1) = a3; /*0x513968*/
      return this; /*0x51396e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x51397d*/
    *((unsigned char *)this + 13) = 1; /*0x513980*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd
// 0x5D8950
namespace gamemd {
unsigned int * UnitTypeVector::Construct2(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x5d895b*/
  *((unsigned int *)this + 2) = a2; /*0x5d895e*/
  *((unsigned char *)this + 12) = 1; /*0x5d8961*/
  *((unsigned char *)this + 13) = 0; /*0x5d8965*/
  *this = &vt_VectorClass_UnitTypeClass; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      *((unsigned int *)this + 1) = a3; /*0x5d8978*/
      return this; /*0x5d897e*/
    }
    *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x5d898d*/
    *((unsigned char *)this + 13) = 1; /*0x5d8990*/
  }
  return (unsigned int *)(this);

}
} // namespace gamemd