// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x4E0440
namespace gamemd {
int AbstractClassVector::Read(unsigned int * a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !this->q00C ) /*0x4e0440*/
    return 0; /*0x4e0448*/
  v3 = this->q008; /*0x4e044e*/
  result = 0; /*0x4e0451*/
  if ( v3 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = this->q004; *i != *a2; ++i ) /*0x4e045b*/
  {
    if ( ++result >= v3 ) /*0x4e046a*/
      return -1; /*0x4e046a*/
  }
  return result; /*0x4e044a*/
}
} // namespace gamemd
// 0x4E0480
namespace gamemd {
unsigned int AbstractClassVector::Write(int a2)
{
  if ( this->q00C ) /*0x4e0480*/
    return (unsigned int)(a2 - this->q004) >> 2; /*0x4e0495*/
  else
    return 0; /*0x4e0487*/
}
} // namespace gamemd
// 0x4E0E80
namespace gamemd {
unsigned int * AbstractClassVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
  this->q004 = 0; /*0x4e0e8b*/
  this->q008 = aP1; /*0x4e0e8e*/
  this->q00C = 1; /*0x4e0e91*/
  this->IsAllocated = 0; /*0x4e0e95*/
  *(void ** *)this = (void*)&VectorClass_AbstractClass___vftable; /*0x4e0e98*/
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
      this->q004 = aP2; /*0x4e0ea8*/
      return this; /*0x4e0eae*/
    }
    this->q004 = RA2_OPNEW(4 * aP1); /*0x4e0ebd*/
    this->IsAllocated = 1; /*0x4e0ec0*/
  }
  return this; /*0x4e0ead*/
}
} // namespace gamemd