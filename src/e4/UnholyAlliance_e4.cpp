// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5CB440
namespace gamemd {
AbstractClass * * UnholyAlliance_GetResult()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x5CB540
UnholyAlliance * UnholyAlliance::QueryInterface(char a2)
{
{
  *this = &vt_UnholyAlliance; /*0x5cb543*/
  MultiplayerGameMode::Dtor(this); /*0x5cb549*/
  if ( (a2 & 1) != 0 ) /*0x5cb553*/
    __3_YAXPAX_Z(this); /*0x5cb556*/
  return (UnholyAlliance *)this; /*0x5cb560*/
}
}

// 0x5CB3F0
char UnholyAlliance::Read()
{
{
    Bases = 1;
    return 1;
}
}

// 0x5CB400
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
{
    return HouseClass_Player[29964] && ScenarioClass::MissionStubReturnZero2(aP0);
}
}

// 0x5CB430
char UnholyAlliance::Seek()
{
{
    Bases = 1;
    return 1;
}
}
