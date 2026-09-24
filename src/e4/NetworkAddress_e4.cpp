// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x53ECE0
unsigned int * NetworkAddress::Assign(unsigned int * a1, IUnknown * aP2, short a4)
{
  _DWORD *result; // eax
  char *v5; // ecx

  result = this; /*0x53ece4*/
  v5 = (char *)(this + 1); /*0x53ece9*/
  *(_DWORD *)v5 = *(_DWORD *)aP2; /*0x53ecec*/
  *((_WORD *)v5 + 2) = *(_WORD *)(aP2 + 4); /*0x53ecf4*/
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