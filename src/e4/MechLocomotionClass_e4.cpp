// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MechLocomotionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Menu_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"

// 0x5B1960
namespace gamemd {
int MechLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x5b1966*/
    return -2147467261; /*0x5b1968*/
  *(IID *)a2 = g_CLSID_TunnelLocomotion; /*0x5b1976*/
  a2[3] = unk_7E9AAC; /*0x5b1990*/
  return 0; /*0x5b196d*/

}
} // namespace gamemd
// 0x5B19A0
namespace gamemd {
int MechLocomotionClass::BeginMove(int * a1, int * a2)
{

  int result; // eax

  result = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, a2); /*0x5b19ab*/
  if ( result >= 0 ) /*0x5b19b2*/
  {
    if ( a1 ) /*0x5b19b6*/
    {
      *(unsigned int *)a1->LocomotionClass = &vt_MechLocomotionClass; /*0x5b19b8*/
      *(unsigned int *)&a1->LocomotionClass[4] = &vt_MechLocomotionClass; /*0x5b19be*/
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
MechLocomotionClass * MechLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{

  *(unsigned int *)Block->LocomotionClass = &vt_MechLocomotionClass; /*0x5b1b53*/
  *(unsigned int *)&Block->LocomotionClass[4] = &vt_MechLocomotionClass; /*0x5b1b59*/
  ((LocomotionClass*)(gamemd::LocomotionClass *)Block)->Construct(); /*0x5b1b60*/
  if ( (a2 & 1) != 0 ) /*0x5b1b6a*/
    __3_YAXPAX_Z(Block); /*0x5b1b6d*/
  return Block->LocomotionClass; /*0x5b1b77*/

}
} // namespace gamemd