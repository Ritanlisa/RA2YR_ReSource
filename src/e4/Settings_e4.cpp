// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5E8760
BOOL Settings::CheckString()
{
  char *v0; // eax

  v0 = CharToWideString(g_GameSetupBuffer); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0, &g_CurrentPlayerName) == 0; /*0x5e877d*/
}