// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CB3F0
char UnholyAlliance::Read()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char UnholyAlliance::_vt04()
{
  MEMORY[0xA8B258] = 1; /*0x5cb3f2*/
  return 1; /*0x5cb3f7*/
}
}

// 0x5CB400
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall UnholyAlliance::Write(MPCooperative *aP0)
{
  return HouseClass_Player.__pad_5568[8100] && ScenarioClass::MissionStubReturnZero2(aP0); /*0x5cb41c*/
}
}

// 0x5CB430
char UnholyAlliance::Seek()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char UnholyAlliance::_vt06()
{
  MEMORY[0xA8B258] = 1; /*0x5cb432*/
  return 1; /*0x5cb437*/
}
}

// 0x5CB440
namespace gamemd {
int UnholyAlliance_GetResult()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x5CB540
UnholyAlliance * UnholyAlliance::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
UnholyAlliance *__thiscall UnholyAlliance::QueryInterface(_DWORD *this, char a2)
{
  *this = &UnholyAlliance::`vftable'; /*0x5cb543*/
  MultiplayerGameMode::Dtor(this); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    __3_YAXPAX_Z(this); /*0x5cb556*/
  return (UnholyAlliance *)this; /*0x5cb560*/
}
}
