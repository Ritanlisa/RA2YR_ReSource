// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x755C60
namespace gamemd {  // G42.18 ns repair
char * sub_755C60(char * a1, int a2)
{

  char *result = a1; // eax /*0x755c63*/
  if ( a2 >= 4 ) /*0x755c65*/
    a2 -= 4; /*0x755c67*/
  memcpy(a1, (char *)&stru_B450B8 + 48 * a2, 0x30u); /*0x755c7f*/
  return result; /*0x755c83*/
}  // G42.18 ns repair
} // namespace gamemd
