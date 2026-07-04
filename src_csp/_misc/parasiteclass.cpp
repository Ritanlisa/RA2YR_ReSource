#include "parasiteclass.hpp"

int  ParasiteClass::ParasiteClass(int this, int a2)
{
    wchar_t *v3; // ecx
    int v4; // eax
    int v6; // [esp+8h] [ebp-8h]
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 44) = CurrentFrame;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 56) = CurrentFrame;
    *(uint32_t *)(this + 64) = 0;
    *(uint32_t *)this = &ParasiteClass::`vftable';
    *(uint32_t *)(this + 4) = &ParasiteClass::`vftable';
    *(uint32_t *)(this + 8) = &ParasiteClass::`vftable';
    *(uint32_t *)(this + 12) = &ParasiteClass::`vftable';
    *(uint32_t *)(this + 36) = a2;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 56) = CurrentFrame;
    *(uint32_t *)(this + 60) = v6;
    *(uint32_t *)(this + 64) = 0;
    v3 = CurrentFrame;
    *(uint8_t *)(this + 84) = 0;
    *(uint32_t *)(this + 44) = v3;
    *(uint32_t *)(this + 48) = v6;
    *(uint32_t *)(this + 52) = 0;
    *(uint32_t *)(this + 76) = 0;
    *(uint32_t *)(this + 80) = 0;
    *(uint32_t *)(this + 68) = 0;
    *(uint32_t *)(this + 72) = 0;
    if ( dword_AC4920 < dword_AC4918
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_AC4910 + 8))(
    &dword_AC4910,
    dword_AC4918 + dword_AC4924,
    0) )
    v4 = dword_AC4920++;
    *((uint32_t *)dword_AC4914 + v4) = this;
    return this;
}

int  ParasiteClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // edx
    AbstractClass::ProcessPower((void*378 *)this);
    v3 = *(uint32_t *)(this + 68);
    if ( v3 )
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
    Power::TimerProcess(*(uint32_t *)(this + 72));
    Power::TimerProcess(*(uint32_t *)(this + 76));
    Power::TimerProcess(*(uint32_t *)(this + 80));
    LOBYTE(v5) = *(uint8_t *)(this + 84);
    return Power::FlagProcess(a2, v5);
}

int __stdcall ParasiteClass::vt_05_(int *a1, int a2)
{
    int result; // eax
    int v3; // ebp
    wchar_t *v4; // edx
    int v5; // eax
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    v3 = result;
    if ( result >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    v4 = CurrentFrame;
    a1[13] = 0;
    a1[11] = (int)v4;
    a1[14] = (int)CurrentFrame;
    a1[16] = 0;
    *a1 = (int)&ParasiteClass::`vftable';
    a1[1] = (int)&ParasiteClass::`vftable';
    a1[2] = (int)&ParasiteClass::`vftable';
    a1[3] = (int)&ParasiteClass::`vftable';
    if ( a1[17]
    && (g_BuildingTypeInstanceCount < dword_B0F5C0
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_BuildingInstanceCount + 8))(
    &g_BuildingInstanceCount,
    dword_B0F5C0 + dword_B0F5CC,
    0)) )
    v5 = g_BuildingTypeInstanceCount++;
    *((uint32_t *)g_BuildingClassPoolManager + v5) = a1;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 10);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 17);
    return v3;
    return result;
}

int __stdcall ParasiteClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int __stdcall ParasiteClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 486632321;
    a2[1] = 299086411;
    a2[2] = 268441278;
    a2[3] = 1822515787;
    return 0;
}

void  ParasiteClass::_vt23(unsigned int this)
{
    int v2; // eax
    int *v3; // ecx
    uint32_t *v4; // edi
    int v5; // ebp
    int v6; // eax
    int v7; // edx
    int v8; // eax
    int v9; // edx
    uint32_t *v10; // ecx
    uint32_t *v11; // ecx
    void *v12; // eax
    unsigned int v13; // ebx
    void *v14; // ebp
    void **v15; // eax
    int v16; // eax
    int v17; // ebx
    double v18; // st7
    double v19; // st7
    int v20; // ecx
    int v21; // eax
    uint32_t v22[3]; // [esp+10h] [ebp-3Ch] BYREF
    int v23; // [esp+1Ch] [ebp-30h] BYREF
    int v24; // [esp+20h] [ebp-2Ch]
    double v25; // [esp+24h] [ebp-28h]
    double v26; // [esp+2Ch] [ebp-20h]
    int v27; // [esp+34h] [ebp-18h] BYREF
    int v28; // [esp+38h] [ebp-14h]
    int v29; // [esp+3Ch] [ebp-10h]
    int v30; // [esp+40h] [ebp-Ch] BYREF
    int v31; // [esp+44h] [ebp-8h]
    int v32; // [esp+48h] [ebp-4h]
    if ( !*(uint32_t *)(this + 40) )
    return;
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 36) + 132))(*(uint32_t *)(this + 36)) + 3278)
    && *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 36) + 132))(*(uint32_t *)(this + 36)) + 3479) )
    ParasiteClass::DeploySquad(this);
    return;
    v2 = (*(int (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 36) + 1016))(*(uint32_t *)(this + 36), 0);
    v3 = *(int **)(this + 40);
    v4 = *(uint32_t **)v2;
    v5 = *(uint32_t *)(*(uint32_t *)v2 + 172);
    v24 = v5;
    v27 = v3[39];
    v28 = v3[40];
    v6 = *(uint32_t *)(this + 64);
    v29 = v3[41];
    v7 = *(uint32_t *)(this + 56);
    if ( v7 == -1 )
    goto LABEL_8;
    if ( (int)CurrentFrame - v7 < v6 )
    v6 -= (int)CurrentFrame - v7;
    LABEL_8:
    if ( v6 )
    return;
    v8 = v4[44];
    *(uint32_t *)(this + 56) = CurrentFrame;
    *(uint32_t *)(this + 60) = v31;
    *(uint32_t *)(this + 64) = v8;
    v9 = *(uint32_t *)(v5 + 368);
    v10 = v3 + 424;
    *v10 = CurrentFrame;
    v10[1] = v31;
    v10[2] = v9;
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 44))(*(uint32_t *)(this + 40)) == 15 )
    v11 = *(uint32_t **)(this + 40);
    v22[0] = v11[27];
    (*(void (__stdcall **)(uint32_t *, uint32_t, int, uint32_t, int, int, uint32_t))(*v11 + 364))(
    v22,
    0,
    v5,
    *(uint32_t *)(this + 36),
    1,
    1,
    0);
    else
    v12 = __2_YAPAXI_Z(0x100u);
    if ( v12 )
    ParticleSystemClass::Constructor((int)v12, RulesClass_Instance->AIPlayers, &v27, 0, 0, &dword_AC4948, 0);
    v13 = *ProgressTimer::GetValue((_WORD *)(*(uint32_t *)(this + 40) + 904), &v23);
    if ( v4[65] )
    v14 = *(void **)(v4[62] + 4 * ((((v13 >> 12) + 1) >> 1) & 7));
    if ( v14 )
    v15 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v15 )
    AnimClass::ctor(v15, v14, &v27, 0, 1, (void *)0x600, 0, 0);
    v16 = -(Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 1) != 0);
    v22[1] = (__int16)(v13 - 0x3FFF) - 0x3FFF;
    LOBYTE(v16) = v16 & 0xFC;
    v17 = v29;
    v23 = v16 + 2;
    *(double *)&v22[1] = (double)v22[1] * -0.00009587672516830327;
    v26 = (double)v28;
    v25 = (double)(v16 + 2);
    v18 = Math::SinCos(*(double *)&v22[1]);
    v23 = Math::RoundToInt(v26 - v18 * v25);
    v19 = Math::ArcTan2(*(double *)&v22[1]);
    v30 = Math::RoundToInt(v19 * v25 + (double)v27);
    v31 = v23;
    v20 = *(uint32_t *)(this + 40);
    v32 = v17;
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)v20 + 984))(v20, &v30, 1069547520, 0);
    v21 = *(uint32_t *)(this + 36);
    v22[0] = v4[41];
    (*(void (__stdcall **)(uint32_t *, uint32_t, int, int, uint32_t, int, uint32_t))(**(uint32_t **)(this + 40) + 364))(
    v22,
    0,
    v24,
    v21,
    0,
    1,
    0);
}

bool  ParasiteClass::CanInfect(uint32_t *this, uint32_t *a2)
{
    int v3; // ecx
    int *v4; // eax
    bool result; // al
    result = 0;
    if ( a2 )
    if ( !*((uint8_t *)a2 + 129) )
    if ( *((uint8_t *)a2 + 144) )
    if ( a2[27] )
    if ( !a2[421] )
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2) + 3384) )
    if ( !a2[185] )
    v3 = *(this + 9);
    if ( !v3 )
    return 1;
    if ( !*(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 3278) )
    return 1;
    if ( !(*(int (__thiscall **)(uint32_t *))(*a2 + 444))(a2) )
    return 1;
    v4 = (int *)(*(int (__thiscall **)(uint32_t *))(*a2 + 444))(a2);
    if ( Cell::IsValidHeight(v4) )
    return 1;
    return result;
}

int  ParasiteClass::TryInfect(int this, uint32_t *a2)
{
    int v3; // ecx
    int v4; // eax
    void *v5; // eax
    int v6; // ebx
    int v7; // eax
    char v8; // al
    int v9; // ecx
    int result; // eax
    uint32_t *v11; // eax
    uint32_t *v12; // edi
    int v13; // ebx
    int v14; // [esp+1Ch] [ebp-10h] BYREF
    int v15; // [esp+20h] [ebp-Ch] BYREF
    int v16; // [esp+24h] [ebp-8h]
    int v17; // [esp+28h] [ebp-4h]
    v3 = *(uint32_t *)(this + 68);
    *(uint32_t *)(this + 76) = 0;
    *(uint32_t *)(this + 80) = 0;
    *(uint32_t *)(this + 72) = 0;
    if ( v3 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v3 + 248))(v3);
    *(uint32_t *)(this + 68) = 0;
    if ( *(uint8_t *)(this + 84) )
    v14 = this;
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v14);
    if ( v4 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v4);
    *(uint8_t *)(this + 84) = 0;
    *(uint32_t *)(this + 56) = CurrentFrame;
    *(uint32_t *)(this + 60) = v16;
    *(uint32_t *)(this + 64) = 0;
    if ( ParasiteClass::CanInfect((uint32_t *)this, a2) )
    v12 = (uint32_t *)(*(uint32_t *)(this + 36) + 1652);
    v13 = a2[39];
    v16 = a2[40];
    v17 = a2[41];
    if ( !*v12 )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(uint32_t, int, int, int, int))(*(uint32_t *)*v12 + 112))(*v12, -1, v13, v16, v17);
    a2[421] = *(uint32_t *)(this + 36);
    *(uint32_t *)(this + 40) = a2;
    else
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*(uint32_t *)(this + 36) + 1372));
    v6 = **(uint32_t **)(this + 36);
    v7 = (*(int (__thiscall **)(void *, int *, uint32_t))(*(uint32_t *)v5 + 72))(v5, &v15, 0);
    v8 = (*(int (__thiscall **)(uint32_t, int))(v6 + 216))(*(uint32_t *)(this + 36), v7);
    v9 = *(uint32_t *)(this + 36);
    if ( v8 )
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v9 + 1164))(v9, 0, 0, 0, 0);
    v11 = *(uint32_t **)(this + 36);
    v15 = v11[39];
    v16 = v11[40];
    v17 = v11[41];
    MapClass::RevealArea2(&MapClass_Instance, &v15, v11[152] - 3, v11[152] + 2, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t))(**(uint32_t **)(this + 36) + 1196))(*(uint32_t *)(this + 36)) )
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 36) + 968))(*(uint32_t *)(this + 36), 0);
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 36) + 1152))(*(uint32_t *)(this + 36), 0, 1);
    return (*(int (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 36) + 1156))(
    *(uint32_t *)(this + 36),
    0,
    1);
    else
    return (*(int (__thiscall **)(int))(*(uint32_t *)v9 + 248))(v9);
    return result;
}

bool  ParasiteClass::CanExistOnVictimCell(int this)
{
    int v2; // ecx
    int v4; // ecx
    uint32_t *v5; // eax
    int v6; // eax
    bool v7; // bl
    int v8; // eax
    uint32_t *v9; // eax
    v2 = *(uint32_t *)(this + 40);
    if ( !v2 )
    return 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v2 + 84))(v2) )
    return 0;
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 36) + 132))(*(uint32_t *)(this + 36)) + 3278) )
    goto LABEL_20;
    v4 = *(uint32_t *)(this + 36);
    if ( v4 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 1 )
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 444))(*(uint32_t *)(this + 40));
    if ( CellClass::FindInfantry(v5, 0) )
    return 0;
    v6 = *(uint32_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 444))(*(uint32_t *)(this + 40)) + 236);
    if ( v6 == 2 || v6 == 6 || v6 == 3 )
    v7 = (*(uint32_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 444))(*(uint32_t *)(this + 40)) + 320)
    & 0x100) == 0;
    v8 = *(uint32_t *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 444))(*(uint32_t *)(this + 40)) + 68);
    if ( v8 >= 74 && v8 <= 99 )
    v7 = 0;
    if ( (v8 < 205 || v8 > 230) && v7 )
    return 0;
    LABEL_20:
    v9 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 40) + 444))(*(uint32_t *)(this + 40));
    return Cell::IsBridge(v9) == 0;
}

int ParasiteClass::_vt12()
{
    return 88;
}

int ParasiteClass::_vt11()
{
    return 67;
}

uint32_t * ParasiteClass::vt_08_(uint32_t *Block, char a2)
{
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    uint32_t *v7; // [esp+8h] [ebp-4h] BYREF
    v3 = *(Block + 17);
    *Block = &ParasiteClass::`vftable';
    *(Block + 1) = &ParasiteClass::`vftable';
    *(Block + 2) = &ParasiteClass::`vftable';
    *(Block + 3) = &ParasiteClass::`vftable';
    *(Block + 19) = 0;
    *(Block + 20) = 0;
    *(Block + 18) = 0;
    if ( v3 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v3 + 248))(v3);
    *(Block + 17) = 0;
    if ( *((uint8_t *)Block + 84) )
    v7 = Block;
    v4 = (*(int (__thiscall **)(int *, uint32_t **))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v7);
    if ( v4 != -1 && v4 < g_BuildingTypeInstanceCount && v4 < --g_BuildingTypeInstanceCount )
    do
    ++v4;
    *((uint32_t *)g_BuildingClassPoolManager + v4 - 1) = *((uint32_t *)g_BuildingClassPoolManager + v4);
    while ( v4 < g_BuildingTypeInstanceCount );
    *((uint8_t *)Block + 84) = 0;
    v7 = Block;
    v5 = (*(int (__thiscall **)(int *, uint32_t **))(dword_AC4910 + 16))(&dword_AC4910, &v7);
    if ( v5 != -1 && v5 < dword_AC4920 && v5 < --dword_AC4920 )
    do
    ++v5;
    *((uint32_t *)dword_AC4914 + v5 - 1) = *((uint32_t *)dword_AC4914 + v5);
    while ( v5 < dword_AC4920 );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

