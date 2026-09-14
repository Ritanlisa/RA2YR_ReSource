// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x691630
namespace gamemd {
int ScriptClass::LoadState(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_ScriptClass;
    *(int *)&aP0->__pad_0[12] = &vt_ScriptClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6915F0
namespace gamemd {
int ScriptClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1123264070;
  a2[1] = 298977161;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x691690
namespace gamemd {
int ScriptClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
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

// 0x691EC0
namespace gamemd {
int ScriptClass::StubReturn26()
{
return 26;
}
} // namespace gamemd

// 0x691ED0
namespace gamemd {
int ScriptClass::StubReturn48()
{
return 48;
}
} // namespace gamemd
