// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AnimSystem_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x75A790
namespace gamemd {  // G42.18 ns repair
char AnimSystem::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int i; // edx
  for ( i = 0; i < 18; ++i ) /*0x75a791*/
  {
    int v1 = i >> 3; // eax /*0x75a79e*/
    char v2; // cl
    v2 = ~(1 << (i & 7)) & byte_B45BA8[i >> 3]; /*0x75a7a9*/
    ((unsigned int *)(byte_B45BA8))[v1] = v2; /*0x75a7af*/
  }
  char result; // al
  result = ((unsigned int *)(byte_B45BA8))[0] | 0x40; /*0x75a7bd*/
  ((unsigned int *)(byte_B45BA8))[0] |= 0x40u; /*0x75a7bf*/
  return result; /*0x75a7bc*/
}  // G42.18 ns repair
} // namespace gamemd