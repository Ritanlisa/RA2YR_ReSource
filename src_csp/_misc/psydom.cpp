#include "psydom.hpp"

void PsyDom::Update()
{
    int v0; // esi
    int v1; // esi
    int v2; // [esp+4h] [ebp-4h]
    switch ( PsyDom_Status )
    case 1:
    PsyDom_Status = 2;
    break;
    case 2:
    v2 = *(uint32_t *)(PsyDom_Anim + 172);
    if ( (double)RulesClass_Instance->PrerequisitePower[2] * 0.01 <= (double)v2
    / (double)*(__int16 *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(PsyDom_Anim + 200) + 156))(*(uint32_t *)(PsyDom_Anim + 200))
    + 6) )
    PsyDom_Status = 3;
    PsyDom::Fire();
    break;
    case 3:
    v0 = *(uint32_t *)(PsyDom_Anim + 172);
    if ( *(__int16 *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(PsyDom_Anim + 200) + 156))(*(uint32_t *)(PsyDom_Anim + 200))
    + 6)
    - v0 <= 10 )
    PsyDom_Status = 4;
    break;
    case 4:
    v1 = *(uint32_t *)(PsyDom_Anim + 172);
    if ( *(__int16 *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(PsyDom_Anim + 200) + 156))(*(uint32_t *)(PsyDom_Anim + 200))
    + 6)
    - v1 <= 1 )
    PsyDom_Status = 5;
    PsyDom_Coords = dword_A9F9F8;
    PsyDom_Anim = 0;
    ScenarioClass::UpdateLighting();
    break;
    case 5:
    if ( *((uint32_t *)ScenarioClass_Instance + 3404) == *((uint32_t *)ScenarioClass_Instance + 3403) )
    PsyDom_Status = 0;
    break;
    default:
    return;
}

// 0x0053B080
void PsyDom::Fire()
{
    uint32_t *v0; // esi
    void *v1; // eax
    int *v2; // eax
    uint32_t *v3; // eax
    void *v4; // esi
    void *v5; // eax
    int *v6; // eax
    void **v7; // eax
    int v8; // eax
    int v9; // esi
    int *v10; // ebp
    int v11; // eax
    uint32_t *v12; // eax
    int i; // esi
    int v14; // eax
    int v15; // edx
    int v16; // edi
    int *v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    void **v21; // eax
    void **v22; // eax
    int v23; // eax
    int v24; // esi
    int j; // esi
    int v26; // [esp+4h] [ebp-60h]
    uint32_t *v27; // [esp+8h] [ebp-5Ch]
    int v28; // [esp+14h] [ebp-50h]
    int v29; // [esp+18h] [ebp-4Ch]
    int v30; // [esp+1Ch] [ebp-48h] BYREF
    uint32_t v31[2]; // [esp+20h] [ebp-44h] BYREF
    int v32[3]; // [esp+28h] [ebp-3Ch] BYREF
    int v33[3]; // [esp+34h] [ebp-30h] BYREF
    char v34[12]; // [esp+40h] [ebp-24h] BYREF
    void **v35; // [esp+4Ch] [ebp-18h] BYREF
    void *Block; // [esp+50h] [ebp-14h]
    int v37; // [esp+54h] [ebp-10h]
    int v38; // [esp+58h] [ebp-Ch]
    int v39; // [esp+5Ch] [ebp-8h]
    int v40; // [esp+60h] [ebp-4h]
    v0 = __2_YAPAXI_Z(0x14u);
    if ( v0 )
    v1 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&PsyDom_Coords);
    v2 = (int *)(*(int (__thiscall **)(void *, int *))(*(uint32_t *)v1 + 72))(v1, v33);
    v3 = ActionQueue::PushEntry(v0, *v2, v2[1], v2[2]);
    else
    v3 = 0;
    v3[4] = 1;
    v4 = (void *)RulesClass_Instance->PrerequisitePower[1];
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&PsyDom_Coords);
    v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(uint32_t *)v5 + 72))(v5, v33);
    v32[0] = *v6;
    v32[1] = v6[1];
    v32[2] = v6[2];
    v7 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v7 )
    PsyDom_Anim = (int)AnimClass::ctor(v7, v4, v32, 0, 1, (void *)0x600, 0, 0);
    else
    PsyDom_Anim = 0;
    PlaySoundEffectAt(
    v32,
    RulesClass_Instance->PrerequisiteFactory[0],
    0,
    RulesClass_Instance->AtmosphereEntry,
    1,
    (int)LightningStorm_Owner);
    v8 = RulesClass_Instance->PrerequisitePower[3];
    if ( v8 >= 10 )
    v8 = 10;
    v9 = dword_7ED3D0[v8];
    EventClass::resetEvent(&v35, 0, 0);
    v35 = &DynamicVectorClass<TechnoClass *>::`vftable';
    v40 = 10;
    v39 = 0;
    if ( v9 > 0 )
    v10 = dword_ABD490;
    v29 = v9;
    do
    v11 = *v10;
    HIWORD(v30) = HIWORD(*v10);
    HIWORD(v28) = HIWORD(PsyDom_Coords) + HIWORD(v30);
    LOWORD(v28) = PsyDom_Coords + v11;
    v30 = v28;
    v31[0] = 0;
    v31[1] = 0;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v30);
    for ( i = Object::FindClosestObjectCell(v12, v31, 0, 0); i; i = (*(uint8_t *)(v24 + 20) & 1) != 0 ? v24 : 0 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)i + 44))(i) != 6
    && !*(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)i + 132))(i) + 3381)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)i + 352))(i)
    && !*(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)i + 132))(i) + 3434)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)i + 84))(i) )
    v14 = *(uint32_t *)(i + 704);
    if ( v14 )
    CaptureManagerClass::FreeUnit(*(uint32_t **)(v14 + 700), 0, (int)v10, (uint32_t *)i, v26, v27);
    (*(void (__thiscall **)(int, void*375 *, int))(*(uint32_t *)i + 980))(i, PsyDom_Owner, 1);
    v15 = *(uint32_t *)i;
    *(uint8_t *)(i + 708) = 1;
    v16 = *(uint32_t *)((*(int (__thiscall **)(int))(v15 + 132))(i) + 1548);
    v17 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)i + 72))(i, v34);
    v18 = *v17;
    v19 = v17[1];
    v20 = v17[2];
    v33[0] = v18;
    v33[1] = v19;
    v33[2] = v16 + v20;
    v21 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v21 )
    v22 = AnimClass::ctor(
    v21,
    (void *)RulesClass_Instance->PrerequisiteBarracks[2],
    v33,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v22 = 0;
    *(uint32_t *)(i + 712) = v22;
    if ( v22 )
    BuildingClass::AimTurret(v22, (uint8_t *)i);
    if ( v39 < v37
    || (BYTE1(v38) || !v37)
    && v40 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v35[2])(&v35, v40 + v37, 0) )
    v23 = v39++;
    *((uint32_t *)Block + v23) = i;
    v24 = *(uint32_t *)(i + 48);
    if ( !v24 )
    break;
    ++v10;
    --v29;
    while ( v29 );
    if ( !(unsigned __int8)House::IsCurrentPlayer(PsyDom_Owner) )
    for ( j = v39 - 1; j >= 0; --j )
    (*(void (__thiscall **)(uint32_t, int, uint32_t))(**((uint32_t **)Block + j) + 488))(*((uint32_t *)Block + j), 15, 0);
    v35 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block )
    if ( BYTE1(v38) )
    __3_YAXPAX_Z(Block);
}

