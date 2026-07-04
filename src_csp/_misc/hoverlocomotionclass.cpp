#include "hoverlocomotionclass.hpp"

int __stdcall HoverLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291202;
    a2[1] = 298948665;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int __stdcall HoverLocomotionClass::_vt05(int a1, int *a2)
{
    int v2; // edi
    v2 = SwizzleManager::SaveLoad((int *)a1, a2);
    if ( v2 >= 0 && a1 )
    *(uint32_t *)a1 = &LocomotionClass::`vftable';
    *(uint32_t *)(a1 + 4) = &LocomotionClass::`vftable';
    FrameSnapshot::Init((_WORD *)(a1 + 48));
    *(uint32_t *)a1 = &HoverLocomotionClass::`vftable';
    *(uint32_t *)(a1 + 4) = &HoverLocomotionClass::`vftable';
    return v2;
}

int HoverLocomotionClass::_vt09()
{
    return 120;
}

uint32_t * HoverLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    *Block = &HoverLocomotionClass::`vftable';
    *(Block + 1) = &HoverLocomotionClass::`vftable';
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

