#include "droppodlocomotionclass.hpp"

int __stdcall DropPodLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291205;
    a2[1] = 298948665;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int __stdcall DropPodLocomotionClass::_vt00(int a1, const void *a2, int *a3)
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

int DropPodLocomotionClass::_vt09()
{
    return 48;
}

uint32_t * DropPodLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    *Block = &DropPodLocomotionClass::`vftable';
    *(Block + 1) = &DropPodLocomotionClass::`vftable';
    *(Block + 6) = &DropPodLocomotionClass::`vftable';
    v3 = *(Block + 11);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v3 + 8))(v3);
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

