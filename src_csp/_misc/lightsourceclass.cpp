#include "lightsourceclass.hpp"

int  LightSourceClass::_vt13(#378 *this, int a2)
{
    return AbstractClass::ProcessPower(this);
}

int __stdcall LightSourceClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1872513264;
    a2[1] = 298979847;
    a2[2] = 1610642561;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall LightSourceClass::_vt05(uint32_t *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = &LightSourceClass::`vftable';
    a1[1] = &LightSourceClass::`vftable';
    a1[2] = &LightSourceClass::`vftable';
    a1[3] = &LightSourceClass::`vftable';
    return 0;
    return result;
}

int __stdcall LightSourceClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int LightSourceClass::_vt12()
{
    return 76;
}

int LightSourceClass::_vt11()
{
    return 54;
}

void ** LightSourceClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &LightSourceClass::`vftable';
    *(Block + 1) = &LightSourceClass::`vftable';
    *(Block + 2) = &LightSourceClass::`vftable';
    *(Block + 3) = &LightSourceClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_ABCA10 + 16))(&dword_ABCA10, &v5);
    if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool )
    do
    ++v3;
    *((uint32_t *)dword_ABCA14 + v3 - 1) = *((uint32_t *)dword_ABCA14 + v3);
    while ( v3 < g_BridgeCellPool );
    if ( *((uint8_t *)Block + 72) )
    *((uint8_t *)Block + 72) = 0;
    TacticalClass::ScrollView(Block, 0);
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

