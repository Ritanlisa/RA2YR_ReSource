// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B19A0
int MechLocomotionClass::BeginMove(int * a1, int * a2)
{
{
    int result;
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    *a1 = (int)(unsigned int)vt_MechLocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_MechLocomotionClass;
    }
  }
    return result;
}
}

// 0x5B1960
int MechLocomotionClass::ddtor(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1439777208;
    *((int*)(a2) + 1) = 298965908;
    *((int*)(a2) + 2) = 1610651820;
    *((int*)(a2) + 3) = -1252326136;
    return 0;
}
}

// 0x5B1B40
int MechLocomotionClass::StubReturn52()
{
return 52;
}

// 0x5B1B50
MechLocomotionClass * MechLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_MechLocomotionClass;
    *(this + 1) = &vt_MechLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MechLocomotionClass *)this;
}
}
