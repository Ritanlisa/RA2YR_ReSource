#include "temporalclass.hpp"

int  TemporalClass::_vt13(#378 *this, int a2)
{
    return AbstractClass::ProcessPower(this);
}

int __stdcall TemporalClass::_vt05(int *a1, int a2)
{
    int Prefix_0; // edi
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = (int)&TemporalClass::`vftable';
    a1[1] = (int)&TemporalClass::`vftable';
    a1[2] = (int)&TemporalClass::`vftable';
    a1[3] = (int)&TemporalClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 16);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 17);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 14);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 15);
    return Prefix_0;
}

int __stdcall TemporalClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int __stdcall TemporalClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -1810815964;
    a2[1] = 299099139;
    a2[2] = 1342205582;
    a2[3] = -72177148;
    return 0;
}

void ** TemporalClass::_vt23(int *this)
{
    uint32_t *v2; // ecx
    void **result; // eax
    int v4; // eax
    uint32_t *v5; // edi
    uint32_t *v6; // eax
    int v7; // ebp
    int v8; // ecx
    int v9; // edx
    int v10; // eax
    int v11; // eax
    double v12; // st7
    int **v13; // ecx
    int WarpPerStep; // ebp
    int *v15; // ecx
    int v16; // edi
    int v17; // eax
    int v18; // eax
    int v19; // ecx
    int v20; // eax
    int v21; // ecx
    int *v22; // ecx
    int v23; // edi
    int v24; // ebp
    int v25; // eax
    int v26; // eax
    uint32_t *v27; // ebp
    int v28; // eax
    int v29; // ecx
    uint32_t *v30; // edi
    uint32_t *v31; // eax
    uint32_t *v32; // ecx
    int v33; // edx
    int v34; // edi
    int *v35; // eax
    uint32_t *v36; // ecx
    int v37; // ecx
    int v38; // ecx
    int v39; // [esp+Ch] [ebp-38h]
    int v40; // [esp+20h] [ebp-24h] BYREF
    int v41; // [esp+24h] [ebp-20h]
    int v42; // [esp+28h] [ebp-1Ch]
    uint8_t v43[12]; // [esp+2Ch] [ebp-18h] BYREF
    uint8_t v44[12]; // [esp+38h] [ebp-Ch] BYREF
    v2 = (uint32_t *)*(this + 10);
    if ( v2 && (int *)v2[158] == this && *(this + 16) )
    v2[158] = 0;
    *(uint8_t *)(*(this + 10) + 624) = 0;
    return (void **)TagClass::Unlink(this);
    else
    v4 = *(this + 9);
    if ( !v4 )
    goto LABEL_10;
    if ( !*(uint8_t *)(v4 + 130) )
    goto LABEL_10;
    if ( !v2 )
    goto LABEL_10;
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v2 + 72))(v2, v43);
    v6 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)*(this + 9) + 72))(*(this + 9), v44);
    v7 = v5[1];
    v8 = *v6 - *v5;
    v9 = v6[1];
    v10 = v6[2];
    v40 = v8;
    v11 = v10 - v5[2];
    v41 = v9 - v7;
    v42 = v11;
    v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v11 * (double)v11 + (double)(v9 - v7) * (double)(v9 - v7));
    if ( (int)Math::RoundToInt(v12) > RulesClass_Instance->FireSupress << 8 )
    return (void **)FactoryClass::CompleteItem(this);
    else
    LABEL_10:
    v13 = (int **)*(this + 17);
    WarpPerStep = 0;
    if ( v13 )
    WarpPerStep = TemporalClass::GetWarpPerStep(v13, 1);
    v15 = (int *)*(this + 9);
    v16 = *v15;
    v17 = (*(int (__thiscall **)(int *, uint32_t))(*v15 + 740))(v15, 0);
    v18 = (*(int (__thiscall **)(uint32_t, int))(v16 + 1016))(*(this + 9), v17);
    v19 = *(this + 18);
    v20 = *(uint32_t *)(*(uint32_t *)v18 + 164);
    *(this + 19) = v20;
    result = (void **)(v19 - (WarpPerStep + v20));
    *(this + 18) = (int)result;
    if ( (int)result <= 0 )
    if ( *(this + 10) )
    result = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( result )
    v22 = (int *)(*(this + 10) + 156);
    v40 = *v22;
    v41 = v22[1];
    v42 = v22[2];
    result = AnimClass::ctor(
    result,
    (void *)RulesClass_Instance->PrerequisiteTech[1],
    &v40,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v21 = *(this + 9);
    *(this + 10) = 0;
    *(this + 17) = 0;
    *(this + 16) = 0;
    *(this + 15) = 0;
    *(this + 14) = 0;
    if ( v21 )
    result = (void **)(*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v21 + 1156))(v21, 0, 1);
    if ( *(this + 10) )
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 9) + 132))(*(this + 9)) + 3214) )
    v23 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 10) + 132))(*(this + 10));
    v24 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 9) + 132))(*(this + 9));
    v39 = *(uint32_t *)(*(this + 10) + 540);
    v25 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 132))(v23);
    v26 = (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v24 + 132))(
    v24,
    *(uint32_t *)(*(this + 9) + 540),
    v25);
    HouseClass::AccumulateScore((float *)(*(this + 9) + 336), v26, v39);
    if ( (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 10) + 44))(*(this + 10)) == 6 )
    v27 = (uint32_t *)*(this + 10);
    if ( v27 )
    if ( (*(int (__thiscall **)(uint32_t))(*v27 + 1032))(*(this + 10)) > 0 )
    BuildingClass::AnimateUnloadUnits(v27, 0);
    if ( !IKnowWhatImDoing && v27[70] )
    do
    v28 = LinkedList::Pop(v27 + 69);
    if ( v28 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v28 + 32))(v28, 1);
    while ( v27[70] );
    v29 = *(this + 15);
    if ( v29 )
    SuperClass::SetOnHold(v29, 0);
    *(this + 15) = 0;
    v30 = (uint32_t *)*(this + 10);
    if ( v30[185] )
    if ( v30 )
    v31 = (*(int (__thiscall **)(uint32_t))(*v30 + 44))(*(this + 10)) == 6 ? v30 : 0;
    else
    v31 = 0;
    BuildingClass::RemoveLimpet(v31);
    v32 = *(uint32_t **)(*(this + 10) + 728);
    if ( v32 )
    TechnoClass::MutateAll(v32, *(this + 9), 0);
    (*(void (__thiscall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 10) + 952))(*(this + 10), *(this + 9));
    (*(void (__thiscall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 10) + 224))(*(this + 10), *(this + 9));
    result = (void **)(*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 10) + 248))(*(this + 10));
    *(uint8_t *)(v27[135] + 508) = 1;
    else
    v33 = *(this + 10);
    v34 = *(uint32_t *)(v33 + 740);
    if ( v34 )
    v35 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v34 + 44))(*(uint32_t *)(v33 + 740)) == 6 ? (int *)v34 : 0;
    BuildingClass::UpdateDamageAnim(v35);
    v36 = *(uint32_t **)(*(this + 10) + 728);
    if ( v36 )
    TechnoClass::MutateAll(v36, *(this + 9), 0);
    (*(void (__thiscall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 10) + 952))(*(this + 10), *(this + 9));
    (*(void (__thiscall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 10) + 224))(*(this + 10), *(this + 9));
    result = (void **)(*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 10) + 248))(*(this + 10));
    v37 = *(this + 9);
    if ( v37 )
    result = (void **)(*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v37 + 1156))(v37, 0, 1);
    v38 = *(this + 9);
    *(this + 10) = 0;
    *(this + 17) = 0;
    *(this + 16) = 0;
    *(this + 15) = 0;
    *(this + 14) = 0;
    if ( v38 )
    return (void **)(*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v38 + 1156))(v38, 0, 1);
    return result;
}

// 0x0071AB10
int  TemporalClass::GetWarpPerStep(int **this, int a2)
{
    int WarpPerStep; // ebx
    int *v4; // ecx
    int v5; // edi
    int v6; // eax
    int *v7; // eax
    WarpPerStep = 0;
    if ( *(this + 17) && a2 <= 50 )
    WarpPerStep = TemporalClass::GetWarpPerStep(a2 + 1);
    v4 = *(this + 9);
    v5 = *v4;
    v6 = (*(int (__thiscall **)(int *, uint32_t))(*v4 + 740))(v4, 0);
    v7 = *(int **)(*(uint32_t *)(*(int (__thiscall **)(uint32_t, int))(v5 + 1016))(*(this + 9), v6) + 164);
    *(this + 19) = v7;
    return (int)v7 + WarpPerStep;
}

// 0x0071AE50
char __stdcall TemporalClass::CanWarpTarget(uint32_t *a1)
{
    int Member; // eax
    uint32_t *v3; // edi
    uint32_t *v4; // eax
    uint32_t v5[3]; // [esp+8h] [ebp-Ch] BYREF
    if ( !a1 )
    return 0;
    if ( !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a1 + 132))(a1) + 3386) )
    return 0;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*a1 + 352))(a1) )
    return 0;
    if ( (*(int (__thiscall **)(uint32_t *))(*a1 + 44))(a1) == 1 )
    Member = Team::GetMember(a1, 0);
    v3 = (uint32_t *)Member;
    if ( Member )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)Member + 44))(Member) == 6 )
    if ( *(uint8_t *)(v3[328] + 5821) )
    v5[0] = a1[39];
    v5[1] = a1[40];
    v5[2] = a1[41];
    v4 = Coord::To_Cell(&MapClass_Instance, v5);
    if ( Cell::IsBridge(v4) == v3 )
    return 0;
    return 1;
}

int TemporalClass::_vt12()
{
    return 80;
}

int TemporalClass::_vt11()
{
    return 70;
}

uint32_t * TemporalClass::_vt08(uint32_t *Block, char a2)
{
    int v3; // eax
    uint32_t *v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &TemporalClass::`vftable';
    *(Block + 1) = &TemporalClass::`vftable';
    *(Block + 2) = &TemporalClass::`vftable';
    *(Block + 3) = &TemporalClass::`vftable';
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_B0EC60 + 16))(&dword_B0EC60, &v5);
    if ( v3 != -1 && v3 < dword_B0EC70 && v3 < --dword_B0EC70 )
    do
    ++v3;
    *((uint32_t *)dword_B0EC64 + v3 - 1) = *((uint32_t *)dword_B0EC64 + v3);
    while ( v3 < dword_B0EC70 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

