// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x65B1E0
namespace gamemd {
unsigned int * RadSiteClass::RadSiteClass()
{
  wchar_t *v2; // edx
  int v3; // eax

  AbstractClass::Constructor((int)this); /*0x65b1e3*/
  *(this + 9) = 0; /*0x65b1ea*/
  *(this + 10) = g_CurrentFrame; /*0x65b1f3*/
  *(this + 12) = 0; /*0x65b1f6*/
  v2 = g_CurrentFrame; /*0x65b1f9*/
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
  wchar_t *v3; // edx

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
      *aP0 = &RadSiteClass::`vftable'; /*0x65b416*/
      aP0[1] = &RadSiteClass::`vftable'; /*0x65b41c*/
      aP0[2] = &RadSiteClass::`vftable'; /*0x65b423*/
      aP0[3] = &RadSiteClass::`vftable'; /*0x65b42a*/
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
