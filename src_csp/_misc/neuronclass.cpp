#include "neuronclass.hpp"

int  NeuronClass::NeuronClass(int this)
{
    int v2; // eax
    int v3; // eax
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 36) = 0;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = CurrentFrame;
    *(uint32_t *)this = &NeuronClass::`vftable';
    *(uint32_t *)(this + 4) = &NeuronClass::`vftable';
    *(uint32_t *)(this + 8) = &NeuronClass::`vftable';
    *(uint32_t *)(this + 12) = &NeuronClass::`vftable';
    if ( dword_B0F5E8 < dword_B0F5E0
    || (byte_B0F5E5 || !dword_B0F5E0)
    && dword_B0F5EC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_B0F5D8 + 8))(
    &dword_B0F5D8,
    dword_B0F5E0 + dword_B0F5EC,
    0) )
    v2 = dword_B0F5E8++;
    *((uint32_t *)dword_B0F5DC + v2) = this;
    if ( g_AnimManager < g_AnimTypePool
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_AnimPoolManager + 8))(
    &g_AnimPoolManager,
    g_AnimTypePool + g_AnimManagerConfig,
    0) )
    v3 = g_AnimManager++;
    *((uint32_t *)g_AnimPoolCount + v3) = this;
    return this;
}

int __stdcall NeuronClass::_vt05(int *a1, int a2)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&NeuronClass::`vftable';
    a1[1] = (int)&NeuronClass::`vftable';
    a1[2] = (int)&NeuronClass::`vftable';
    a1[3] = (int)&NeuronClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 11);
    return 0;
    return result;
}

int __stdcall NeuronClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int NeuronClass::_vt11()
{
    return 60;
}

int NeuronClass::_vt12()
{
    return 56;
}

uint32_t * NeuronClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // eax
    uint32_t *v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &NeuronClass::`vftable';
    *(Block + 1) = &NeuronClass::`vftable';
    *(Block + 2) = &NeuronClass::`vftable';
    *(Block + 3) = &NeuronClass::`vftable';
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v6);
    if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager )
    do
    ++v3;
    *((uint32_t *)g_AnimPoolCount + v3 - 1) = *((uint32_t *)g_AnimPoolCount + v3);
    while ( v3 < g_AnimManager );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, uint32_t **))(dword_B0F5D8 + 16))(&dword_B0F5D8, &v6);
    if ( v4 != -1 && v4 < dword_B0F5E8 && v4 < --dword_B0F5E8 )
    do
    ++v4;
    *((uint32_t *)dword_B0F5DC + v4 - 1) = *((uint32_t *)dword_B0F5DC + v4);
    while ( v4 < dword_B0F5E8 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

