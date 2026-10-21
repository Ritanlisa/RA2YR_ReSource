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
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x5EE1B0
namespace gamemd {  // G42.18 ns repair
void Config::SaveObserverMode()
{
  
  int v0[9]; // [esp+0h] [ebp-24h] BYREF
  ((RawFileClass *)v0)->Construct((int)aRa2mdIni); /*0x5ee1bc*/
  INIClass::SetInt((gamemd::INIClass *)((char *)&dword_8870C0), (uint8_t *)aMultiplayer, aObservermode, g_MenuStateFlags, 0); /*0x5ee1d8*/
  INIClass::WriteDigest((gamemd::INIClass *)(&dword_8870C0), (int)v0, 0); /*0x5ee1e9*/
  ((RawFileClass *)(v0))->Dtor(); /*0x5ee1f2*/
}  // G42.18 ns repair
} // namespace gamemd