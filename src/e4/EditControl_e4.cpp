// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7781B0
namespace gamemd {
int sub_7781B0(short a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_7781B0(__int16 a1)
{
  CHAR MultiByteStr; // [esp+0h] [ebp-8h] BYREF
  char v4; // [esp+1h] [ebp-7h]
  char v5; // [esp+2h] [ebp-6h]
  WCHAR WideCharStr[2]; // [esp+4h] [ebp-4h] BYREF

  if ( HIBYTE(a1) ) /*0x7781b6*/
  {
    MultiByteStr = HIBYTE(a1); /*0x7781c1*/
    v4 = a1; /*0x7781c1*/
    v5 = 0; /*0x7781c5*/
  }
  else
  {
    MultiByteStr = a1; /*0x7781cc*/
    v4 = 0; /*0x7781d0*/
  }
  int v1 = MultiByteToWideChar(0, 0, &MultiByteStr, strlen(&MultiByteStr), WideCharStr, 1); /*0x7781f3*/
  return v1 == 1 ? *(_DWORD *)WideCharStr : 0;
}
}
} // namespace gamemd
