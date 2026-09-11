// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5C61A0
MultiplayerManBattle * MultiplayerManBattle::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
MultiplayerManBattle *__thiscall MultiplayerManBattle::QueryInterface(_DWORD *this, char a2)
{
  *this = &MultiplayerManBattle::`vftable'; /*0x5c61a3*/
  MultiplayerGameMode::Dtor(this); /*0x5c61a9*/
  if ( (a2 & 1) != 0 ) /*0x5c61b3*/
    __3_YAXPAX_Z(this); /*0x5c61b6*/
  return (MultiplayerManBattle *)this; /*0x5c61c0*/
}
}
