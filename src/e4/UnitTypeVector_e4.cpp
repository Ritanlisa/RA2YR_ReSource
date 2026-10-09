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
  IDA_LOBYTE(this->UnitTypeVector_field_0x0C) = 1; /*0x513951*/
  IDA_BYTE1(this->UnitTypeVector_field_0x0C) = 0; /*0x513955*/
  *(_DWORD *)this->__pad_0 = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x513958*/
  if ( a2 ) /*0x51395e*/
  {
    if ( a3 ) /*0x513966*/
    {
      this->UnitTypeVector_field_0x04 = a3; /*0x513968*/
      return this->__pad_0; /*0x51396e*/
    }
    this->UnitTypeVector_field_0x04 = RA2_OPNEW(4 * a2); /*0x51397d*/
    IDA_BYTE1(this->UnitTypeVector_field_0x0C) = 1; /*0x513980*/
  }
  return this->__pad_0; /*0x51396d*/
}
} // namespace gamemd
// 0x5D8950
namespace gamemd {
unsigned int * UnitTypeVector::Construct2(int a2, int a3, void *a3_2)
{
  a3_2->UnitTypeVector_field_0x04 = 0; /*0x5d895b*/
  a3_2->UnitTypeVector_field_0x08 = a3_2; /*0x5d895e*/
  IDA_LOBYTE(a3_2->UnitTypeVector_field_0x0C) = 1; /*0x5d8961*/
  IDA_BYTE1(a3_2->UnitTypeVector_field_0x0C) = 0; /*0x5d8965*/
  *(_DWORD *)a3_2->__pad_0 = &(void*)(void*)&VectorClass_UnitTypeClass___vftable; /*0x5d8968*/
  if ( a3_2 ) /*0x5d896e*/
  {
    if ( a3_2 ) /*0x5d8976*/
    {
      a3_2->UnitTypeVector_field_0x04 = a3_2; /*0x5d8978*/
      return a3_2->__pad_0; /*0x5d897e*/
    }
    a3_2->UnitTypeVector_field_0x04 = RA2_OPNEW(4 * a3_2); /*0x5d898d*/
    IDA_BYTE1(a3_2->UnitTypeVector_field_0x0C) = 1; /*0x5d8990*/
  }
  return a3_2->__pad_0; /*0x5d897d*/
}
} // namespace gamemd