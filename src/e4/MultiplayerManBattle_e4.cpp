// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MultiplayerManBattle_e4.hpp"
#include "e4/classes/PlayerClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MultiplayerGameMode_e4.hpp"

// 0x5C61A0
namespace gamemd {
MultiplayerManBattle * MultiplayerManBattle::QueryInterface(char a2)
{
  this->MultiplayerManBattle_field_00 = (gamemd::MultiplayerManBattle *)((int)&MultiplayerManBattle_vftable);
  MultiplayerGameMode::Dtor(); /*0x5c61a9*/
  if ( (a2 & 1) != 0 ) /*0x5c61b3*/
    RA2_OPDEL(); /*0x5c61b6*/
  return &this->MultiplayerManBattle_field_00; /*0x5c61c0*/
}
} // namespace gamemd