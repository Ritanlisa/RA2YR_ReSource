// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClassVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"

// 0x4E0440
namespace gamemd {  // G42.18 ns repair
int AbstractClassVector::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(*(unsigned int *)&a2_2->q00C))) ) /*0x4e0440*/
    return 0; /*0x4e0448*/
  m_8 = *(unsigned int *)&a2_2->q008; /*0x4e044e*/
  result = 0; /*0x4e0451*/
  if ( m_8 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = *(unsigned int **)&a2_2->q004; *(unsigned int)(i) != *(unsigned int *)(a2_2); ++i ) /*0x4e045b*/
  {
    if ( ++result >= m_8 ) /*0x4e046a*/
      return -1; /*0x4e046a*/
  }
  return result; /*0x4e044a*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x4E0480
namespace gamemd {
unsigned int AbstractClassVector::Write(int a2)
{
  if ( (*((unsigned char *)&(*&this->m_C))) ) /*0x4e0480*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x4e0495*/
  else
    return 0; /*0x4e0487*/
}
} // namespace gamemd
// 0x4E0E80
namespace gamemd {
int AbstractClassVector::Construct(int aP1, int aP2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  this->q004 = 0; /*0x4e0e8b*/
  this->q008 = aP1; /*0x4e0e8e*/
  LOBYTE(this->m_C) = 1; /*0x4e0e91*/
  BYTE1(this->m_C) = 0; /*0x4e0e95*/
  *(unsigned int *)this->__pad_000 = (unsigned int)(&vt_VectorClass); /*0x4e0e98*/
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
      this->AbstractClassVector_field_0x04 = aP2; /*0x4e0ea8*/
      return this->__pad_0; /*0x4e0eae*/
    }
    this->AbstractClassVector_field_0x04 = __2_YAPAXI_Z(4 * aP1); /*0x4e0ebd*/
    BYTE1(this->AbstractClassVector_field_0x0C) = 1; /*0x4e0ec0*/
  }
  return this->__pad_0; /*0x4e0ead*/

}
} // namespace gamemd