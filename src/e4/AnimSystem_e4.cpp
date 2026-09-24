// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x75A790
char AnimSystem::Init()
{
  int i; // edx
  int v1; // eax
  char v2; // cl
  char result; // al

  for ( i = 0; i < 18; ++i ) /*0x75a791*/
  {
    v1 = i >> 3; /*0x75a79e*/
    v2 = ~(1 << (i & 7)) & byte_B45BA8[i >> 3]; /*0x75a7a9*/
    byte_B45BA8[v1] = v2; /*0x75a7af*/
  }
  result = byte_B45BA8[0] | 0x40; /*0x75a7bd*/
  byte_B45BA8[0] |= 0x40u; /*0x75a7bf*/
  return result; /*0x75a7bc*/
}