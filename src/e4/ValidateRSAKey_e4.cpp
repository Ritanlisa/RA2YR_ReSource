// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5C8DD0
namespace gamemd {  // G42.18 ns repair
char sub_5C8DD0(unsigned int * a1, int a2, int a3, int a4)
{

  int v5 = a3; // ebp /*0x5c8dd9*/
  if ( a3 >= 32 * a4 ) /*0x5c8dea*/
    v5 = 32 * a4; /*0x5c8dec*/
  memset(a1, 0, 4 * a4); /*0x5c8dfc*/
  *a1 = 0; /*0x5c8e02*/
  (*(void (**)(int, unsigned int *, int))(*(unsigned int *)a2 + 8))(a2, a1, v5 / 8 + 1); /*0x5c8e0c*/
  char result; // al
  result = ~(-1 << (v5 % 8)) & *((unsigned char *)a1 + v5 / 8); /*0x5c8e2a*/
  *((unsigned char *)a1 + v5 / 8) = result; /*0x5c8e2c*/
  return result; /*0x5c8e27*/
}  // G42.18 ns repair
} // namespace gamemd
