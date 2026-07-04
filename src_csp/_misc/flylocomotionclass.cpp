#include "flylocomotionclass.hpp"

int  FlyLocomotionClass::LocomotionClass(int this)
{
    int v2; // edx
    LocomotionClass::Init((uint32_t *)this);
    *(uint8_t *)(this + 24) = 0;
    *(uint32_t *)(this + 28) = dword_8B3C78;
    *(uint32_t *)(this + 32) = dword_8B3C7C;
    *(uint32_t *)(this + 36) = dword_8B3C80;
    *(uint32_t *)(this + 40) = dword_8B3C78;
    *(uint32_t *)(this + 44) = dword_8B3C7C;
    v2 = dword_8B3C80;
    *(uint32_t *)(this + 64) = 0;
    *(uint32_t *)(this + 72) = 0;
    *(uint8_t *)(this + 52) = 0;
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 68) = 0;
    *(uint32_t *)(this + 76) = 0;
    *(uint8_t *)(this + 80) = 0;
    *(uint8_t *)(this + 81) = 0;
    *(uint8_t *)(this + 82) = 0;
    *(uint8_t *)(this + 83) = 0;
    *(uint32_t *)(this + 84) = 0;
    *(uint32_t *)(this + 88) = 0;
    *(uint8_t *)(this + 92) = 0;
    *(uint32_t *)this = &FlyLocomotionClass::`vftable';
    *(uint32_t *)(this + 4) = &FlyLocomotionClass::`vftable';
    *(uint32_t *)(this + 48) = v2;
    return this;
}

int __stdcall FlyLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291206;
    a2[1] = 298948665;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int __stdcall FlyLocomotionClass::_vt05(int *a1, int *a2)
{
    int result; // eax
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    *a1 = (int)&FlyLocomotionClass::`vftable';
    a1[1] = (int)&FlyLocomotionClass::`vftable';
    return result;
}

// 0x004CFE80
void __stdcall FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(int a1)
{
    int v2; // ecx
    int i; // edi
    int v4; // esi
    int v5; // eax
    uint32_t *v6; // ecx
    int v7; // eax
    uint32_t *v8; // esi
    int v9; // edx
    void **v10; // [esp+Ch] [ebp-30h] BYREF
    void *Block; // [esp+10h] [ebp-2Ch]
    int v12; // [esp+14h] [ebp-28h]
    char v13; // [esp+19h] [ebp-23h]
    int v14; // [esp+1Ch] [ebp-20h]
    int v15; // [esp+20h] [ebp-1Ch]
    void **v16; // [esp+24h] [ebp-18h] BYREF
    void *v17; // [esp+28h] [ebp-14h]
    int v18; // [esp+2Ch] [ebp-10h]
    char v19; // [esp+31h] [ebp-Bh]
    int v20; // [esp+34h] [ebp-8h]
    int v21; // [esp+38h] [ebp-4h]
    char v22; // [esp+40h] [ebp+4h]
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 8) + 692) )
    return;
    ObjectVector::Construct(&v16, 0, 0);
    v16 = &DynamicVectorClass<ObjectClass *>::`vftable';
    v21 = 10;
    v20 = 0;
    ObjectVector::Construct(&v10, 0, 0);
    v10 = &DynamicVectorClass<ObjectClass *>::`vftable';
    v15 = 10;
    v14 = 0;
    if ( !GameMode_Current[0]
    || (v2 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 540), *(uint32_t *)(v2 + 22016) == -1)
    || (v22 = 1, (unsigned __int8)House::IsCurrentPlayer((void*375 *)v2)) )
    v22 = 0;
    for ( i = g_SidebarState - 1; i >= 0; --i )
    v4 = *((uint32_t *)g_TechnoClass_Count + i);
    if ( v22 )
    if ( *(uint32_t *)(v4 + 540) != *(uint32_t *)&HouseClass_Array->gap0[4
    * *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 540)
    + 22016)] )
    continue;
    else if ( (unsigned __int8)House::IsAlliedWith(*(void*375 **)(*(uint32_t *)(a1 + 8) + 540), *(void*375 **)(v4 + 540)) )
    continue;
    if ( *(int *)(v4 + 108) > 0
    && !*(uint8_t *)(v4 + 129)
    && *(uint8_t *)(v4 + 144)
    && !*(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v4 + 132))(v4) + 3226)
    && *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v4 + 132))(v4) + 561)
    && ((*(uint32_t *)ScenarioClass_Instance & 0x800) == 0
    || (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) != 1
    || !*(uint8_t *)(*(uint32_t *)(v4 + 1732) + 3598)) )
    if ( GameMode_Current[0]
    && (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(*(uint32_t *)(a1 + 8) + 540))
    && !*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(v4 + 540) + 52) + 422)
    && ((*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 1
    || (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 6
    || (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 15
    || (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 2) )
    if ( v14 >= v12
    && (!v13 && v12
    || v15 <= 0
    || !((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v10[2])(&v10, v15 + v12, 0)) )
    continue;
    v5 = v14++;
    v6 = Block;
    else
    if ( v20 >= v18
    && (!v19 && v18
    || v21 <= 0
    || !((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v16[2])(&v16, v21 + v18, 0)) )
    continue;
    v5 = v20++;
    v6 = v17;
    v6[v5] = v4;
    if ( v14 <= 0 )
    if ( v20 <= 0 )
    goto LABEL_45;
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v20 - 1);
    v8 = v17;
    v9 = **(uint32_t **)(a1 + 8);
    else
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v14 - 1);
    v8 = Block;
    v9 = **(uint32_t **)(a1 + 8);
    (*(void (__stdcall **)(uint32_t))(v9 + 968))(v8[v7]);
    LABEL_45:
    v10 = &VectorClass<ObjectClass *>::`vftable';
    if ( Block && v13 )
    __3_YAXPAX_Z(Block);
    Block = 0;
    v16 = &VectorClass<ObjectClass *>::`vftable';
    v13 = 0;
    v12 = 0;
    if ( v17 )
    if ( v19 )
    __3_YAXPAX_Z(v17);
}

int FlyLocomotionClass::_vt09()
{
    return 96;
}

uint32_t * FlyLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    *Block = &FlyLocomotionClass::`vftable';
    *(Block + 1) = &FlyLocomotionClass::`vftable';
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

