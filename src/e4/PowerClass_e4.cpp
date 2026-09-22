// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x63F7B0
namespace gamemd {
void PowerClass_Stub()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return RadarClass::Destru_vt05(this);
}
}
} // namespace gamemd

// 0x63F7E0
void PowerClass::checkLowPower()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( DataGlobal_AC4E78 ) /*0x63f7ec*/
  {
    __3_YAXPAX_Z(DataGlobal_AC4E74); /*0x63f7f4*/
    DataGlobal_AC4E78 = 0; /*0x63f7fc*/
  }
}
}
