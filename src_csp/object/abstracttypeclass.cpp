#include "abstracttypeclass.hpp"

uint32_t * AbstractTypeClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &AbstractTypeClass::`vftable';
    *(Block + 1) = &AbstractTypeClass::`vftable';
    *(Block + 2) = &AbstractTypeClass::`vftable';
    *(Block + 3) = &AbstractTypeClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_A8E968 + 16))(&dword_A8E968, &v5);
    if ( v3 != -1 && v3 < g_AbstractTypePool && v3 < --g_AbstractTypePool )
    do
    ++v3;
    *((uint32_t *)dword_A8E96C + v3 - 1) = *((uint32_t *)dword_A8E96C + v3);
    while ( v3 < g_AbstractTypePool );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int __stdcall AbstractTypeClass::_vt33(int a1)
{
    return 0;
}

