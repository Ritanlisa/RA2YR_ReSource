// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5D5A20
namespace gamemd {
long long Display::CalculateDefaultSize()
{

  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * g_abs_ABFDD0) + 0.5); /*0x5d5a3b*/
  g_abs_ABFDC4 = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/

}
} // namespace gamemd

// 0x72AD20
namespace gamemd {
int Display::GetViewport()
{

  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)(this);
  v2 = 0; /*0x72ad44*/
  if ( !MEMORY[0xA8EB7C] && !MEMORY[0xA8ED6B] ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = MEMORY[0x886FB8] - 168; /*0x72ad67*/
  v4 = MEMORY[0x886FBC] - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return result; /*0x72ad75*/

}
} // namespace gamemd
