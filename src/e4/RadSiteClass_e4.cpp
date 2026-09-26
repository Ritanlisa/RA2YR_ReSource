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

// 0x65B1E0
namespace gamemd {
RadSiteClass::RadSiteClass()
{
  RadSiteClass * v3;

  AbstractClass::Constructor(); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  *(&this->vtable20) = g_CurrentFrame; /*0x65b1f3*/
  *(&this->vtable22) = 0; /*0x65b1f6*/
  g_CurrentFrame = g_CurrentFrame; /*0x65b1f9*/
  *(&this->vtable25) = 0; /*0x65b1ff*/
  *(&this->vtable23) = g_CurrentFrame; /*0x65b202*/
  this->BaseCell = 0; /*0x65b205*/
  this->ptr_42 = 0; /*0x65b209*/
  *(&this->vtable27) = 0; /*0x65b20d*/
  *(&this->vtable28) = 0; /*0x65b210*/
  *(&this->vtable29) = 0; /*0x65b213*/
  *(&this->vtable30) = 0; /*0x65b216*/
  *(&this->vtable31) = 0; /*0x65b219*/
  *(&this->vtable35) = 0; /*0x65b21c*/
  *(&this->vtable36) = 0; /*0x65b21f*/
  *(&this->vtable37) = 0; /*0x65b222*/
  *(&this->vtable38) = 0; /*0x65b225*/
  if ( dword_B04BE0 < dword_B04BD8 /*0x65b277*/
    || (byte_B04BDD || !dword_B04BD8)
    && dword_B04BE4 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(RadSiteClass_Array + 8))(
         &RadSiteClass_Array,
         dword_B04BD8 + dword_B04BE4,
         0) )
  {
    v3 = dword_B04BE0++; /*0x65b284*/
    *((unsigned int *)dword_B04BD4 + v3) = this; /*0x65b293*/
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
  unsigned int v3;

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x65b3e1*/
  if ( Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x65b3f2*/
      v3 = g_CurrentFrame; /*0x65b3f7*/
      aP0[12] = 0; /*0x65b3fd*/
      aP0[10] = v3; /*0x65b404*/
      aP0[13] = g_CurrentFrame; /*0x65b40c*/
      aP0[15] = 0; /*0x65b40f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x65b43a*/
  }
  return Prefix_0; /*0x65b441*/
}
} // namespace gamemd

// 0x65B450
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x65b464*/
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
