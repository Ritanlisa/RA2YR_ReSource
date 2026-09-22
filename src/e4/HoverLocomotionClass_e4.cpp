// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x517070
int HoverLocomotionClass::ddtor(int a1, unsigned int * a2)
{
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291202;
    *((int*)(a2) + 1) = 298948665;
    *((int*)(a2) + 2) = -1610610249;
    *((int*)(a2) + 3) = -777003740;
    return 0;
}
}

// 0x5170B0
int HoverLocomotionClass::BeginMove(int a1, int * a2)
{
{
    int v2;
    v2 = SwizzleManager::SaveLoad((int *)a1, a2);
    if ( v2 >= 0 && a1 )
  {
    *(int *)a1 = (unsigned int)vt_LocomotionClass;
    *(int *)(a1 + 4) = &vt_LocomotionClass;
    FrameSnapshot::Init((short *)(a1 + 48));
    *(int *)a1 = (unsigned int)vt_HoverLocomotionClass;
    *(int *)(a1 + 4) = &vt_HoverLocomotionClass;
  }
    return v2;
}
}

// 0x5172B0
int HoverLocomotionClass::StubReturn120()
{
return 120;
}

// 0x5172C0
HoverLocomotionClass * HoverLocomotionClass::ProcessMove(char a2)
{
{
    *(void**)this = vt_HoverLocomotionClass;
    this->vtable2 = &vt_HoverLocomotionClass;
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HoverLocomotionClass *)this;
}
}
