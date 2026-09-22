// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4C6140
void Menu::Reset()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *(_DWORD *)(this + 52) = 0; /*0x4c614c*/
  *(_DWORD *)(this + 56) = 0; /*0x4c614f*/
  *(_DWORD *)(this + 60) = 1; /*0x4c6152*/
  *(_WORD *)(this + 64) = 0; /*0x4c6159*/
  memset((void *)this, 0, 0x30u); /*0x4c615d*/
  *(_WORD *)(this + 48) = 0; /*0x4c615f*/
  return this; /*0x4c6163*/
}
}
