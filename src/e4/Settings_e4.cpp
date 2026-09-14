// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E8760
BOOL Settings::CheckString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL Settings_CheckString()
{
  char *v0; // eax

  v0 = CharToWideString(MEMORY[0xA8B380]); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0, &MEMORY[0xA8D610]) == 0; /*0x5e877d*/
}
}
