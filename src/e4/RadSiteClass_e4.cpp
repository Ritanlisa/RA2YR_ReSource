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

  int v2; // edx
  int v3; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  this->RadLevelTimer[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b1f3*/
  this->RadLevelTimer[2] = 0; /*0x65b1f6*/
  v2 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b1f9*/
  this->RadLightTimer[2] = 0; /*0x65b1ff*/
  this->RadLightTimer[0] = v2; /*0x65b202*/
  LOWORD(this->BaseCell[0]) = 0; /*0x65b205*/
  HIWORD(this->BaseCell[0]) = 0; /*0x65b209*/
  this->Spread = 0; /*0x65b20d*/
  this->SpreadInLeptons = 0; /*0x65b210*/
  this->RadLevel = 0; /*0x65b213*/
  this->LevelSteps = 0; /*0x65b216*/
  this->Intensity = 0; /*0x65b219*/
  this->IntensitySteps = 0; /*0x65b21c*/
  this->IntensityDecrement = 0; /*0x65b21f*/
  this->RadDuration = 0; /*0x65b222*/
  this->RadTimeLeft = 0; /*0x65b225*/
  this->vtable1 = &vt_RadSiteClass; /*0x65b228*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b22e*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b235*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_RadSiteClass); /*0x65b23c*/
  if ( dword_B04BE0 < dword_B04BD8 /*0x65b277*/
    || (byte_B04BDD || !dword_B04BD8)
    && dword_B04BE4 > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(RadSiteClass_Array + 8))( (int *)(&RadSiteClass_Array), dword_B04BD8 + dword_B04BE4, 0) )



  {
    v3 = (unsigned int)(dword_B04BE0++);
    *((unsigned int *)dword_B04BD4 + v3) = (unsigned int)(this); /*0x65b293*/
  }
  return this; /*0x65b298*/

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

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0( (AbstractClass *)(aP0), (gamemd::AbstractClass *)(aP1)); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables(((AbstractClass *)aP0), (int)&aP1); /*0x65b3f2*/
      v3 = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b3f7*/
      (&aP0->RadLevelTimer)[2] = 0; /*0x65b3fd*/
      (&aP0->RadLevelTimer)[0] = v3; /*0x65b404*/
      (&aP0->RadLightTimer)[0] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b40c*/
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
