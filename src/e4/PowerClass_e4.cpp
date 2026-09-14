// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x63F7B0
namespace gamemd {
int PowerClass_Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
int __thiscall PowerClass::Stub(int *this)
{
  return RadarClass::Destru_vt05(this);
}
}
} // namespace gamemd

// 0x63F7E0
void PowerClass::checkLowPower()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void PowerClass::_vt50()
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( MEMORY[0xAC4E78] ) /*0x63f7ec*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4E74]); /*0x63f7f4*/
    MEMORY[0xAC4E78] = 0; /*0x63f7fc*/
  }
}
}
