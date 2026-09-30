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

// 0x65B1E0
namespace gamemd {
RadSiteClass::RadSiteClass()
{
    unsigned int v2 = 0;  /* G37 hoist */

  void *v2; // edx
  RadSiteClass * v3;

  ((AbstractClass *)((int)this))->Constructor(); /*0x65b1e3*/
  *((unsigned int *)this + 9) = 0; /*0x65b1ea*/
  *((unsigned int *)this + 10) = g_abs_A8ED84; /*0x65b1f3*/
  *((unsigned int *)this + 12) = 0; /*0x65b1f6*/
  v2 = g_abs_A8ED84; /*0x65b1f9*/
  *((unsigned int *)this + 15) = 0; /*0x65b1ff*/
  *((unsigned int *)this + 13) = v2; /*0x65b202*/
  *((unsigned short *)this + 32) = 0; /*0x65b205*/
  *((unsigned short *)this + 33) = 0; /*0x65b209*/
  *((unsigned int *)this + 17) = 0; /*0x65b20d*/
  *((unsigned int *)this + 18) = 0; /*0x65b210*/
  *((unsigned int *)this + 19) = 0; /*0x65b213*/
  *((unsigned int *)this + 20) = 0; /*0x65b216*/
  *((unsigned int *)this + 21) = 0; /*0x65b219*/
  *((unsigned int *)this + 25) = 0; /*0x65b21c*/
  *((unsigned int *)this + 26) = 0; /*0x65b21f*/
  *((unsigned int *)this + 27) = 0; /*0x65b222*/
  *((unsigned int *)this + 28) = 0; /*0x65b225*/
  *this = &vt_RadSiteClass; /*0x65b228*/
  *((unsigned int *)this + 1) = &vt_RadSiteClass; /*0x65b22e*/
  *((unsigned int *)this + 2) = &vt_RadSiteClass; /*0x65b235*/
  *((unsigned int *)this + 3) = &vt_RadSiteClass; /*0x65b23c*/
  if ( g_abs_B04BE0 < g_abs_B04BD8 /*0x65b277*/
    || (g_abs_B04BDD || !g_abs_B04BD8)
    && g_abs_B04BE4 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_B04BD0 + 8))(
         &g_abs_B04BD0,
         (unsigned int)(g_abs_B04BD8)+ g_abs_B04BE4,
         0) )
  {
    v3 = (gamemd::RadSiteClass *)((int)((unsigned int)(g_abs_B04BE0++)));
    *((unsigned int *)(unsigned int)(g_abs_B04BD4)+ v3) = this; /*0x65b293*/
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

  AbstractClass *Prefix_0; // edi
  IUnknown *v3; // edx

  Prefix_0 = (AbstractClass *)((AbstractClass *)(aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x65b3e1*/
  if ( (int)Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x65b3f2*/
      v3 = *(IUnknown **)&((unsigned int *)(HouseClass_Player.__pad_5568))[23248]; /*0x65b3f7*/
      *(unsigned int *)&aP0[((unsigned int *)(1].__pad_0))[12] = 0; /*0x65b3fd*/
      *(unsigned int *)&aP0[((unsigned int *)(1].__pad_0))[4] = v3; /*0x65b404*/
      aP0[1].uniqueId = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x65b40c*/
      aP0[1].nextArrayIndex = 0; /*0x65b40f*/
      *(unsigned int *)aP0->__pad_0 = &vt_RadSiteClass; /*0x65b416*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_RadSiteClass; /*0x65b41c*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_RadSiteClass; /*0x65b423*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_RadSiteClass; /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x65b43a*/
  }
  return (int)Prefix_0->__pad_0; /*0x65b441*/

}
} // namespace gamemd

// 0x65B450
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return ((AbstractClass *)((ObjectTypeClass *)aP0))->SaveLoad_Prefix((ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x65b464*/

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
  a2[3] = 1153315785; /*0x65b4a0*/
  return 0; /*0x65b47d*/

}
} // namespace gamemd
