// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Settings_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"

// 0x5E8760
namespace gamemd {  // G42.18 ns repair
BOOL Settings::CheckString()
{

  char *v0; // eax
  v0 = CharToWideString((unsigned char *)(unk_A8B380)); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0,(const wchar_t *)(word_A8D610)) == 0; /*0x5e877d*/
}  // G42.18 ns repair
} // namespace gamemd