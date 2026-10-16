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
namespace gamemd {  // G42.18 ns repair
long long Display::CalculateDefaultSize()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFDD0) + 0.5); /*0x5d5a3b*/
  dword_ABFDC4 = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x72AD20
namespace gamemd {
int Display::GetViewport()
{

  int *result; // eax
  result = (int *)this; /*0x72ad29*/
  int v2 = 0; // ecx /*0x72ad44*/
  if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  int v3 = dword_886FB8 - 168; // edx /*0x72ad67*/
  int v4 = dword_886FBC - 32; // esi /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return (int)(result); /*0x72ad75*/
}
} // namespace gamemd
