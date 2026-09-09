// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53ECE0
unsigned int * NetworkAddress::Assign(unsigned int * a1, IUnknown * aP2, short a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall NetworkAddress::Assign(_DWORD *this, _DWORD *a1, IUnknown *aP2, __int16 a4)
{
  _DWORD *result; // eax
  int *v5; // ecx

  result = this; /*0x53ece4*/
  v5 = this + 1; /*0x53ece9*/
  *v5 = aP2->field_0; /*0x53ecec*/
  *((_WORD *)v5 + 2) = aP2->field_4; /*0x53ecf4*/
  if ( dword_828140 == 1 ) /*0x53ed01*/
  {
    *result = *a1; /*0x53ed09*/
  }
  else
  {
    *result = 0; /*0x53ed13*/
    *(_WORD *)result = a4; /*0x53ed19*/
  }
  return result; /*0x53ecf3*/
}
}
