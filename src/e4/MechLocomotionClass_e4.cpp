// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MechLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x5B1960
namespace gamemd {
int MechLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x5b1966*/
    return -2147467261; /*0x5b1968*/
  *a2 = 1439777208; /*0x5b1976*/
  a2[1] = 298965908; /*0x5b197e*/
  a2[2] = 1610651820; /*0x5b1987*/
  a2[3] = -1252326136; /*0x5b1990*/
  return 0; /*0x5b196d*/
}
} // namespace gamemd
// 0x5B19A0
namespace gamemd {
int MechLocomotionClass::BeginMove(int * a1, int * a2)
{
  int result; // eax

  result = SwizzleManager::SaveLoad(a1, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( a1 ) /*0x5b19b6*/
    {
      *a1 = (int)&MechLocomotionClass_vftable; /*0x5b19b8*/
      a1[1] = (int)&MechLocomotionClass_vftable; /*0x5b19be*/
    }
  }
  return result; /*0x5b19c5*/
}
} // namespace gamemd
// 0x5B1B40
namespace gamemd {
int MechLocomotionClass::StubReturn52()
{
  return 52; /*0x5b1b45*/
}
} // namespace gamemd
// 0x5B1B50
namespace gamemd {
MechLocomotionClass * MechLocomotionClass::ProcessMove(char a2)
{
  LocomotionClass::Construct(); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    RA2_OPDEL(); /*0x5b1b6d*/
  return this; /*0x5b1b77*/
}
} // namespace gamemd