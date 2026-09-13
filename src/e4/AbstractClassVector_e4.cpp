// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E0440
int AbstractClassVector::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AbstractClassVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->AbstractClassVector_field_0x0C ) /*0x4e0440*/
    return 0; /*0x4e0448*/
  v3 = this->AbstractClassVector_field_0x08; /*0x4e044e*/
  result = 0; /*0x4e0451*/
  if ( v3 <= 0 ) /*0x4e0455*/
    return -1; /*0x4e046c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x4e045b*/
  {
    if ( ++result >= v3 ) /*0x4e046a*/
      return -1; /*0x4e046a*/
  }
  return result; /*0x4e044a*/
}
}

// 0x4E0480
unsigned int AbstractClassVector::Write(int a2)
{
{
    if ( (unsigned char)this->AbstractClassVector_field_0x0C )
    return (unsigned int)(a2 - this->AbstractClassVector_field_0x04) >> 2;
    else
    return 0;
}
}

// 0x4E0E80
unsigned int * AbstractClassVector::Construct(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall AbstractClassVector::Construct(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  *(this + 1) = 0; /*0x4e0e8b*/
  *(this + 2) = aP1; /*0x4e0e8e*/
  *((_BYTE *)this + 12) = 1; /*0x4e0e91*/
  *((_BYTE *)this + 13) = 0; /*0x4e0e95*/
  *this = &vt_VectorClass_AbstractClass; /*0x4e0e98*/
  if ( aP1 ) /*0x4e0e9e*/
  {
    if ( aP2 ) /*0x4e0ea6*/
    {
      *(this + 1) = aP2; /*0x4e0ea8*/
      return this; /*0x4e0eae*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x4e0ebd*/
    *((_BYTE *)this + 13) = 1; /*0x4e0ec0*/
  }
  return this; /*0x4e0ead*/
}
}
