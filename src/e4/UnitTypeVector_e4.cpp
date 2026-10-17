// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/UnitTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x513940
namespace gamemd {  // G42.18 ns repair
unsigned int * UnitTypeVector::ConstructUnitTypeVectorClass(int a2, int a3)
{
  
  this->ptr_4 = 0; /*0x51394b*/
  this->__pad_008 = a2; /*0x51394e*/
  (this->q00C) = ((this->q00C) & ~0xFF) | ((1) & 0xFF); /*0x513951*/
  (this->q00C) = ((this->q00C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x513955*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_VectorClass); /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x513968*/
      return this->__pad_0; /*0x51396e*/
    }
    this->UnitTypeVector_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x51397d*/
    (this->UnitTypeVector_field_0x0C) = ((this->UnitTypeVector_field_0x0C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x513980*/
  }
  return this->__pad_0; /*0x51396d*/
  
}
} // namespace gamemd
// 0x5D8950
namespace gamemd {
unsigned int * UnitTypeVector::Construct2(int a2, int a3, void *a3_2)
{
  a3_2->ptr_4 = 0; /*0x5d895b*/
  a3_2->UnitTypeVector_field_0x08 = a3_2; /*0x5d895e*/
  (*((unsigned char *)&(a3_2->UnitTypeVector_field_0x0C))) = 1; /*0x5d8961*/
  (((unsigned char *)&(a3_2->UnitTypeVector_field_0x0C))[1]) = 0; /*0x5d8965*/
  *(unsigned int *)a3_2->__pad_0 = &vt_VectorClass; /*0x5d8968*/
  if ( a3_2 ) /*0x5d896e*/
  {
    if ( a3_2 ) /*0x5d8976*/
    {
      a3_2->ptr_4 = a3_2; /*0x5d8978*/
      return a3_2->__pad_0; /*0x5d897e*/
    }
    a3_2->ptr_4 = operator new(4 * a3_2); /*0x5d898d*/
    (((unsigned char *)&(a3_2->UnitTypeVector_field_0x0C))[1]) = 1; /*0x5d8990*/
  }
  return a3_2->__pad_0; /*0x5d897d*/
}
} // namespace gamemd