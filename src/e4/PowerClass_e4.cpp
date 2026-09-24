// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x63F7B0
namespace gamemd {
void PowerClass_Stub()
{
  return RadarClass::Destru_vt05(this);
}
}
// 0x63F7E0
void PowerClass::checkLowPower()
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( byte_AC4E78 ) /*0x63f7ec*/
  {
    __3_YAXPAX_Z(dword_AC4E74); /*0x63f7f4*/
    byte_AC4E78 = 0; /*0x63f7fc*/
  }
}