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
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"

// 0x5C61A0
namespace gamemd {  // G42.18 ns repair
MultiplayerManBattle * MultiplayerManBattle::QueryInterface(unsigned int * Block, char a2)
{
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7EE50C) */  /*0x5c61a3*/
  ((MultiplayerGameMode *)Block)->Dtor(); /*0x5c61a9*/
  if ( (a2 & 1) != 0 ) /*0x5c61b3*/
    operator delete((Block)); /*0x5c61b6*/
  return &Block->MultiplayerManBattle_field_00; /*0x5c61c0*/
}  // G42.18 ns repair
} // namespace gamemd