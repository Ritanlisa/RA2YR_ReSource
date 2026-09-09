// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Display_e4.hpp"

// 0x5D5A20
namespace gamemd {
long long Display::CalculateDefaultSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_5D5A20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xABFDD0]) + 0.5); /*0x5d5a3b*/
  MEMORY[0xABFDC4] = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}
}
} // namespace gamemd

// 0x72AD20
namespace gamemd {
int * Display::GetViewport()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall Display_GetViewport(int *this)
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = this; /*0x72ad29*/
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
}
} // namespace gamemd
