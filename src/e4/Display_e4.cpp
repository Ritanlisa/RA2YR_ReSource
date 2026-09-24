// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x5D5A20
namespace gamemd {
long long Display::CalculateDefaultSize()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABFDD0) + 0.5); /*0x5d5a3b*/
  dword_ABFDC4 = result; /*0x5d5a40*/
  return result; /*0x5d5a46*/
}
} // namespace gamemd

// 0x72AD20
namespace gamemd {
int * Display::GetViewport()
{
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = this; /*0x72ad29*/
  v2 = 0; /*0x72ad44*/
  if ( !byte_A8EB7C && !g_ArmageddonMode ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = g_CreditsScreenBounds - 168; /*0x72ad67*/
  v4 = g_CreditsScreenConfig - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return result; /*0x72ad75*/
}
} // namespace gamemd
