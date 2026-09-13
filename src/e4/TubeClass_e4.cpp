// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7281A0
namespace gamemd {
int TubeClass::LoadState(AbstractClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TubeClass::LoadState(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( aP0 ) /*0x7281b6*/
    {
      AbstractClass::Constructor(aP0); /*0x7281ba*/
      *(_DWORD *)aP0->__pad_0 = &TubeClass::`vftable'; /*0x7281bf*/
      *(_DWORD *)&aP0->__pad_0[4] = &TubeClass::`vftable'; /*0x7281c5*/
      *(_DWORD *)&aP0->__pad_0[8] = &TubeClass::`vftable'; /*0x7281cc*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_TubeClass; /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/
}
}
} // namespace gamemd

// 0x7281E0
namespace gamemd {
int TubeClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TubeClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7281ef*/
  if ( result >= 0 ) /*0x7281f6*/
    return 0; /*0x7281f8*/
  return result; /*0x7281fa*/
}
}
} // namespace gamemd

// 0x7286B0
namespace gamemd {
int TubeClass::StubReturn452()
{
return 452;
}
} // namespace gamemd

// 0x7286C0
namespace gamemd {
int TubeClass::StubReturn53()
{
return 53;
}
} // namespace gamemd

// 0x7286D0
namespace gamemd {
int TubeClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 189572124;
  a2[1] = 298955687;
  a2[2] = 1610635188;
  a2[3] = 2041169559;
  return 0;
}
} // namespace gamemd
