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
  this->ptr_4 = 0; /*0x51394b*/
  this->q008 = a2; /*0x51394e*/
  this->q00C = 1; /*0x513951*/
  this->u8_D = 0; /*0x513955*/
  *(void **)this = (void*)&VectorClass_UnitTypeClass_const___vftable; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->ptr_4 = a3; /*0x513968*/
      return this; /*0x51396e*/
    }
    this->ptr_4 = RA2_OPNEW(4 * a2); /*0x51397d*/
    this->u8_D = 1; /*0x513980*/
  }
  return this; /*0x51396d*/
}
} // namespace gamemd
// 0x5D8950
namespace gamemd {
unsigned int * UnitTypeVector::Construct2(int a2, int a3)
{
  this->ptr_4 = 0; /*0x5d895b*/
  this->q008 = a2; /*0x5d895e*/
  this->q00C = 1; /*0x5d8961*/
  this->u8_D = 0; /*0x5d8965*/
  *(void **)this = (void*)&VectorClass_UnitTypeClass___vftable; /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      this->ptr_4 = a3; /*0x5d8978*/
      return this; /*0x5d897e*/
    }
    this->ptr_4 = RA2_OPNEW(4 * a2); /*0x5d898d*/
    this->u8_D = 1; /*0x5d8990*/
  }
  return this; /*0x5d897d*/
}
} // namespace gamemd