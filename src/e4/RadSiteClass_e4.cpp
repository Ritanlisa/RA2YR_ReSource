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
  *(this + 9) = 0; /*0x65b1ea*/
  *(this + 10) = MEMORY[0xA8ED84]; /*0x65b1f3*/
  *(this + 12) = 0; /*0x65b1f6*/
  v2 = MEMORY[0xA8ED84]; /*0x65b1f9*/
  *(this + 15) = 0; /*0x65b1ff*/
  *(this + 13) = v2; /*0x65b202*/
  *((_WORD *)this + 32) = 0; /*0x65b205*/
  *((_WORD *)this + 33) = 0; /*0x65b209*/
  *(this + 17) = 0; /*0x65b20d*/
  *(this + 18) = 0; /*0x65b210*/
  *(this + 19) = 0; /*0x65b213*/
  *(this + 20) = 0; /*0x65b216*/
  *(this + 21) = 0; /*0x65b219*/
  *(this + 25) = 0; /*0x65b21c*/
  *(this + 26) = 0; /*0x65b21f*/
  *(this + 27) = 0; /*0x65b222*/
  *(this + 28) = 0; /*0x65b225*/
  *this = &RadSiteClass::`vftable'; /*0x65b228*/
  *(this + 1) = &RadSiteClass::`vftable'; /*0x65b22e*/
  *(this + 2) = &RadSiteClass::`vftable'; /*0x65b235*/
  *(this + 3) = &RadSiteClass::`vftable'; /*0x65b23c*/
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

// 0x65B3D0
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall RadSiteClass::SaveLoad_Prefix(AbstractClass *aP0, int aP1)
{
  AbstractClass *Prefix_0; // edi
  IUnknown *v3; // edx

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x65b3e1*/
  if ( (int)Prefix_0 >= 0 ) /*0x65b3e5*/
  {
    if ( aP0 ) /*0x65b3e9*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x65b3f2*/
      v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x65b3f7*/
      *(_DWORD *)&aP0[1].__pad_0[12] = 0; /*0x65b3fd*/
      *(_DWORD *)&aP0[1].__pad_0[4] = v3; /*0x65b404*/
      aP0[1].uniqueId = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x65b40c*/
      aP0[1].nextArrayIndex = 0; /*0x65b40f*/
      *(_DWORD *)aP0->__pad_0 = &RadSiteClass::`vftable'; /*0x65b416*/
      *(_DWORD *)&aP0->__pad_0[4] = &RadSiteClass::`vftable'; /*0x65b41c*/
      *(_DWORD *)&aP0->__pad_0[8] = &RadSiteClass::`vftable'; /*0x65b423*/
      *(_DWORD *)&aP0->__pad_0[12] = &RadSiteClass::`vftable'; /*0x65b42a*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x65b43a*/
  }
  return (int)Prefix_0->__pad_0; /*0x65b441*/
}
}
} // namespace gamemd

// 0x65B450
namespace gamemd {
int RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall RadSiteClass::SaveLoad_Prefix_0(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x65b464*/
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
