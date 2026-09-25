// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/PowerClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x63F7B0
namespace gamemd {
void PowerClass_Stub()
{
  return RadarClass::Destru_vt05();
}
}
// 0x63F7E0
void PowerClass::checkLowPower()
{
  RadarClass::Destru_vt50(); /*0x63f7e0*/
  if ( byte_AC4E78 ) /*0x63f7ec*/
  {
    RA2_OPDEL(dword_AC4E74); /*0x63f7f4*/
    byte_AC4E78 = 0; /*0x63f7fc*/
  }
}