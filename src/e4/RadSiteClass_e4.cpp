// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RadarHashVector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"

// 0x65B1E0
namespace gamemd {
RadSiteClass::RadSiteClass()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x65B1E0)
}
}
// 0x65B3A0
namespace gamemd {
int RadSiteClass::StubReturn116()
{

  return 116; /*0x65b3a5*/

}
} // namespace gamemd

// 0x65B3C0
namespace gamemd {
int RadSiteClass::StubReturn69()
{

  return 69; /*0x65b3c5*/

}
} // namespace gamemd

// 0x65B3D0
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi
  int v3; // edx

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x65b3f2*/
      v3 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b3f7*/
      (&aP0->RadLevelTimer)[2] = 0; /*0x65b3fd*/
      (&aP0->RadLevelTimer)[0] = v3; /*0x65b404*/
      (&aP0->RadLightTimer)[0] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b40c*/
      (&aP0->RadLightTimer)[2] = 0; /*0x65b40f*/
      aP0->vtable1 = &vt_RadSiteClass; /*0x65b416*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b41c*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b423*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->LightSource); /*0x65b43a*/
  }
  return Prefix_0; /*0x65b441*/

}
} // namespace gamemd

// 0x65B450
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x65b464*/

}
} // namespace gamemd

// 0x65B470
namespace gamemd {
int RadSiteClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x65b476*/
    return -2147467261; /*0x65b478*/
  *a2 = 1090836288; /*0x65b486*/
  a2[1] = 299095303; /*0x65b48e*/
  a2[2] = -1610598260; /*0x65b497*/
  a2[3] = unk_7E98CC; /*0x65b4a0*/
  return 0; /*0x65b47d*/

}
} // namespace gamemd
