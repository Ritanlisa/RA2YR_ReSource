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

  this->UnitTypeVector_field_0x04 = 0; /*0x51394b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x51394e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x513951*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x513955*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->UnitTypeVector_field_0x04 = (unsigned int)((unsigned int *)(a3));
      return (unsigned int *)(this->__pad_0);
    }
    this->UnitTypeVector_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x51397d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x513980*/
  }
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd
// 0x5D8950
namespace gamemd {
unsigned int * UnitTypeVector::Construct2(int a2, int a3)
{

  this->UnitTypeVector_field_0x04 = 0; /*0x5d895b*/
  this->UnitTypeVector_field_0x08 = a2; /*0x5d895e*/
  LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8961*/
  BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x5d8965*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_VectorClass); /*0x5d8968*/
  if ( a2 ) /*0x5d896e*/
  {
    if ( a3 ) /*0x5d8976*/
    {
      this->UnitTypeVector_field_0x04 = (unsigned int)((unsigned int *)(a3));
      return (unsigned int *)(this->__pad_0);
    }
    this->UnitTypeVector_field_0x04 = (unsigned int)(__2_YAPAXI_Z(4 * a2)); /*0x5d898d*/
    BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x5d8990*/
  }
  return (unsigned int *)(this->__pad_0);

}
} // namespace gamemd