// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"

// 0x7281A0
namespace gamemd {
int TubeClass::LoadState(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::Constructor(aP0);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TubeClass;
    *(int *)&aP0->__pad_0[12] = &vt_TubeClass;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x7281E0
namespace gamemd {
int TubeClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
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
