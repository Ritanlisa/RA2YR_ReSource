#include "shiplocomotionclass.hpp"

int __stdcall ShipLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
    int result; // eax
    int v4; // eax
    result = LocomotionClass::QueryInterface(a1, a2, a3);
    if ( result == -2147467262 )
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) )
    if ( a1 )
    v4 = a1 + 24;
    else
    v4 = 0;
    *a3 = v4;
    if ( *a3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
    else
    return -2147467262;
    return result;
}

int __stdcall ShipLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 736785633;
    a2[1] = 299072714;
    a2[2] = 268440766;
    a2[3] = 1822515787;
    return 0;
}

int ShipLocomotionClass::_vt09()
{
    return 112;
}

uint32_t * ShipLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    *Block = &ShipLocomotionClass::`vftable';
    *(Block + 1) = &ShipLocomotionClass::`vftable';
    *(Block + 6) = &off_7F2D68;
    v3 = *(Block + 26);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v3 + 8))(v3);
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

