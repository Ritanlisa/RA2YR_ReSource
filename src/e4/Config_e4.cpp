// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Config_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5EE1B0
namespace gamemd {
void Config::SaveObserverMode()
{

  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)MEMORY[0x826444]); /*0x5ee1bc*/
  INIClass::SetInt( /*0x5ee1d8*/
    (char *)&MEMORY[0x8870C0],
    (unsigned __int8 *)MEMORY[0x82642C],
    MEMORY[0x831DA4],
    MEMORY[0xAC10C8],
    0);
  INIClass::WriteDigest(&MEMORY[0x8870C0], (int)v0, 0); /*0x5ee1e9*/
  RawFileClass::Dtor(v0); /*0x5ee1f2*/

}
} // namespace gamemd