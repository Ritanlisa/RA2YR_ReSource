// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x65B1E0
namespace gamemd {
unsigned int * RadSiteClass::RadSiteClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_65B1E0(_DWORD *this)
{
  wchar_t *v2; // edx
  int v3; // eax

  AbstractClass::Constructor((int)this); /*0x65b1e3*/
  this->LightSource = 0; /*0x65b1ea*/
  this->RadLevelTimer = MEMORY[0xA8ED84]; /*0x65b1f3*/
  this->q030 = 0; /*0x65b1f6*/
  v2 = MEMORY[0xA8ED84]; /*0x65b1f9*/
  this->q03C = 0; /*0x65b1ff*/
  this->RadLightTimer = v2; /*0x65b202*/
  this->q080 = 0; /*0x65b205*/
  this->alignmentPadding = 0; /*0x65b209*/
  this->Spread = 0; /*0x65b20d*/
  this->SpreadInLeptons = 0; /*0x65b210*/
  this->RadLevel = 0; /*0x65b213*/
  this->LevelSteps = 0; /*0x65b216*/
  this->Intensity = 0; /*0x65b219*/
  this->q064 = 0; /*0x65b21c*/
  this->q068 = 0; /*0x65b21f*/
  this->RadDuration = 0; /*0x65b222*/
  this->RadTimeLeft = 0; /*0x65b225*/
  *this = &RadSiteClass::`vftable'; /*0x65b228*/
  this->vtable2 = &RadSiteClass::`vftable'; /*0x65b22e*/
  this->vtable3 = &RadSiteClass::`vftable'; /*0x65b235*/
  this->vtable4 = &vt_RadSiteClass; /*0x65b23c*/
  if ( dword_B04BE0 < dword_B04BD8 /*0x65b277*/
    || (byte_B04BDD || !dword_B04BD8)
    && dword_B04BE4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(RadSiteClass_Array + 8))(
         &RadSiteClass_Array,
         dword_B04BD8 + dword_B04BE4,
         0) )
  {
    v3 = dword_B04BE0++; /*0x65b284*/
    *((_DWORD *)dword_B04BD4 + v3) = this; /*0x65b293*/
  }
  return this; /*0x65b298*/
}
}
} // namespace gamemd

// 0x65B3A0
namespace gamemd {
int RadSiteClass::StubReturn116()
{
return 116;
}
} // namespace gamemd

// 0x65B3C0
namespace gamemd {
int RadSiteClass::StubReturn69()
{
return 69;
}
} // namespace gamemd

// 0x65B3D0
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    IUnknown *v3;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
    *(int *)&aP0[1].__pad_0[12] = 0;
    *(int *)&aP0[1].__pad_0[4] = v3;
    aP0[1].uniqueId = *(int *)&HouseClass_Player.__pad_5568[23248];
    aP0[1].nextArrayIndex = 0;
    *(int *)aP0->__pad_0 = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_RadSiteClass;
    *(int *)&aP0->__pad_0[12] = &vt_RadSiteClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
  }
    return (int)Prefix_0->__pad_0;
}
}
} // namespace gamemd

// 0x65B450
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace gamemd

// 0x65B470
namespace gamemd {
int RadSiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1090836288;
  a2[1] = 299095303;
  a2[2] = -1610598260;
  a2[3] = 1153315785;
  return 0;
}
} // namespace gamemd
