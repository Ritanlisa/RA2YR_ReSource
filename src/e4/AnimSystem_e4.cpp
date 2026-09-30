// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AnimSystem_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x75A790
namespace gamemd {
void AnimSystem::Init()
{

  int i; // edx
  int v1; // eax
  char v2; // cl
  char result; // al

  for ( i = 0; i < 18; ++i ) /*0x75a791*/
  {
    v1 = i >> 3; /*0x75a79e*/
    v2 = ~(1 << (i & 7)) & MEMORY[0xB45BA8][i >> 3]; /*0x75a7a9*/
    MEMORY[0xB45BA8][v1] = v2; /*0x75a7af*/
  }
  result = MEMORY[0xB45BA8][0] | 0x40; /*0x75a7bd*/
  MEMORY[0xB45BA8][0] |= 0x40u; /*0x75a7bf*/
  return result; /*0x75a7bc*/

}
} // namespace gamemd