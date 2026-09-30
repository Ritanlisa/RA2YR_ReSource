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
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x4e0440*/
    return 0; /*0x4e0448*/
  v3 = *((unsigned int *)this + 2); /*0x4e044e*/
  result = 0; /*0x4e0451*/
  if ( v3 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x4e045b*/
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

  if ( *((unsigned char *)this + 12) ) /*0x4e0480*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x4e0495*/
  else
    return 0; /*0x4e0487*/

}
} // namespace gamemd
// 0x4E0E80
namespace gamemd {
int AbstractClassVector::Construct( IUnknown * aP1, IUnknown * aP2)
{

  *((unsigned int *)this + 1) = 0; /*0x4e0e8b*/
  *((unsigned int *)this + 2) = aP1; /*0x4e0e8e*/
  *((unsigned char *)this + 12) = 1; /*0x4e0e91*/
  *((unsigned char *)this + 13) = 0; /*0x4e0e95*/
  *this = &vt_VectorClass_AbstractClass; /*0x4e0e98*/
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
      *((unsigned int *)this + 1) = aP2; /*0x4e0ea8*/
      return this; /*0x4e0eae*/
    }
    *((unsigned int *)this + 1) = __2_YAPAXI_Z(4 * (unsigned int)aP1); /*0x4e0ebd*/
    *((unsigned char *)this + 13) = 1; /*0x4e0ec0*/
  }
  return (int)(this);

}
} // namespace gamemd