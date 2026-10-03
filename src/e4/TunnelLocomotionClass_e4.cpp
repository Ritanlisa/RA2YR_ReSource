// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TunnelLocomotionClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"

// 0x728C00
namespace gamemd {
void TunnelLocomotionClass::ProcessFormationPosition(unsigned int * a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x728C00)
}
} // namespace gamemd
// 0x72A110
namespace gamemd {
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = unk_7E9A5C; /*0x72a140*/
  return 0; /*0x72a11d*/

}
} // namespace gamemd
// 0x72A150
namespace gamemd {
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{

  int result; // eax
  int v3; // edx

  result = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x72a15b*/
  if ( result >= 0 ) /*0x72a164*/
  {
    if ( a1 ) /*0x72a168*/
    {
      *(unsigned int *)a1->LocomotionClass = &vt_LocomotionClass; /*0x72a16a*/
      *(unsigned int *)&a1->LocomotionClass[4] = &vt_LocomotionClass; /*0x72a170*/
      v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x72a177*/
      a1->CurrentState[6] = 0; /*0x72a17d*/
      a1->CurrentState[4] = v3; /*0x72a180*/
      a1->CurrentState[7] = 0; /*0x72a183*/
      *(unsigned int *)a1->LocomotionClass = &vt_TunnelLocomotionClass; /*0x72a186*/
      *(unsigned int *)&a1->LocomotionClass[4] = &vt_TunnelLocomotionClass; /*0x72a18c*/
    }
  }
  return result; /*0x72a193*/

}
} // namespace gamemd
// 0x72A200
namespace gamemd {
int TunnelLocomotionClass::StubReturn60()
{

  return 60; /*0x72a205*/

}
} // namespace gamemd
// 0x72A210
namespace gamemd {
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  LocomotionClass::Construct((LocomotionClass *)Block); /*0x72a213*/
  if ( (a2 & 1) != 0 ) /*0x72a21d*/
    __3_YAXPAX_Z(Block); /*0x72a220*/
  return Block->LocomotionClass; /*0x72a22a*/

}
} // namespace gamemd