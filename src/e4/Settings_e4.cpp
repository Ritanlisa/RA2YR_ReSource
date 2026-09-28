// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5E8760
namespace gamemd {
BOOL Settings::CheckString()
{
  char *v0; // eax

  v0 = (char *)(CharToWideString(g_GameSetupBuffer));
  return wcscmp((const wchar_t *)v0, g_CurrentPlayerName) == 0; /*0x5e877d*/
}
} // namespace gamemd