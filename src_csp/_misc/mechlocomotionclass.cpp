#include "mechlocomotionclass.hpp"

int __stdcall MechLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1439777208;
    a2[1] = 298965908;
    a2[2] = 1610651820;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall MechLocomotionClass::_vt05(int *a1, int *a2)
{
    int result; // eax
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    *a1 = (int)&MechLocomotionClass::`vftable';
    a1[1] = (int)&MechLocomotionClass::`vftable';
    return result;
}

int MechLocomotionClass::_vt09()
{
    return 52;
}

uint32_t * MechLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    *Block = &MechLocomotionClass::`vftable';
    *(Block + 1) = &MechLocomotionClass::`vftable';
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

