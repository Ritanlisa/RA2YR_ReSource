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
int AbstractClassVector::Read(int a1)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

    if ( !*((unsigned char *)this + 48) )
    return 0; /*0x4e0448*/
    v3 = *((unsigned int *)this + 32);
  result = 0; /*0x4e0451*/
  if ( m_8 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x4e045b*/
  {
    if ( ++result >= m_8 ) /*0x4e046a*/
      return -1; /*0x4e046a*/
  }
  return result; /*0x4e044a*/
}
} // namespace gamemd
// 0x4E0480
namespace gamemd {
unsigned int AbstractClassVector::Write(int a2)
{
    if ( *((unsigned char *)this + 48) )
        return (unsigned int)(a2 - *((unsigned int *)this + 16)) >> 2;
  else
    return 0; /*0x4e0487*/
}
} // namespace gamemd
// 0x4E0E80
namespace gamemd {
int AbstractClassVector::Construct(int a1)
{
    *((unsigned int *)this + 4) = 0;
    *((unsigned int *)this + 8) = aP1;
    *((unsigned char *)this + 12) = 1;
    *((unsigned char *)this + 13) = 0;
    *this = &vt_VectorClass_AbstractClass;
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
            *((unsigned int *)this + 4) = aP2;
      return this; /*0x4e0eae*/
    }
    this->AbstractClassVector_field_0x04 = RA2_OPNEW(4 * aP1); /*0x4e0ebd*/
        *((unsigned char *)this + 13) = 1;
  }
  return this; /*0x4e0ead*/
}
} // namespace gamemd