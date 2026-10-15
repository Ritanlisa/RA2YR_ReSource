// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x7781B0
namespace gamemd {  // G42.18 ns repair
int sub_7781B0(short a1)
{
  CHAR MultiByteStr; // [esp+0h] [ebp-8h] BYREF
  char v4; // [esp+1h] [ebp-7h]

  if ( (*(((unsigned char *)&(a1)) + (sizeof(a1) - 1))) ) /*0x7781b6*/
  {
    MultiByteStr = (*(((unsigned char *)&(a1)) + (sizeof(a1) - 1))); /*0x7781c1*/
    v4 = a1; /*0x7781c1*/
  char v5; // [esp+2h] [ebp-6h]
    v5 = 0; /*0x7781c5*/
  }
  else
  {
    MultiByteStr = a1; /*0x7781cc*/
    v4 = 0; /*0x7781d0*/
  }
  int v1; // eax
  WCHAR WideCharStr[2]; // [esp+4h] [ebp-4h] BYREF
  v1 = MultiByteToWideChar(0, 0, &MultiByteStr, strlen(&MultiByteStr), WideCharStr, 1); /*0x7781f3*/
  return v1 == 1 ? *(unsigned int *)WideCharStr : 0;
}
}  // G42.18 ns repair