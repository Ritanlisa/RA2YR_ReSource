#include "buildingclass.hpp"

// 0x0041C060
char BuildingClass::vt_entry_4E4()
{
    return 0;
}

int  BuildingClass::Dtor(void **this)
{
    void **v2; // edi
    int v3; // edx
    int v4; // ecx
    int v5; // ecx
    int v6; // eax
    int v7; // eax
    void **v8; // edi
    int v9; // ebx
    int v10; // eax
    char v11; // cl
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // eax
    uint32_t *v16; // ecx
    int v17; // ecx
    int v18; // eax
    int v19; // eax
    size_t v20; // eax
    int v21; // eax
    signed int v22; // ecx
    size_t i; // eax
    uint32_t *v24; // eax
    int v25; // edi
    int v26; // ebx
    void *v27; // eax
    void *v28; // eax
    void **Vtable3; // [esp+18h] [ebp-4h] BYREF
    v2 = this + 429;
    *this = &BuildingClass_Vtable;
    *(this + 1) = &BuildingClass_Vtable2;
    *(this + 2) = &BuildingClass_Vtable3;
    *(this + 3) = &BuildingClass_Vtable4;
    Mixer::ReleaseChannel((int **)this + 429);
    Mixer::ReleaseChannel((int **)this + 424);
    AudioFileClass::Release(v2);
    AudioFileClass::Release(this + 424);
    v4 = (int)*(this + 389);
    if ( v4 )
    MapClass::ScrollOnce(v4, 0);
    v5 = (int)*(this + 389);
    if ( v5 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v5 + 32))(v5, 1);
    *(this + 389) = 0;
    LOBYTE(v3) = 1;
    AbstractClass::AnnounceExpiredPointer(this, v3);
    BuildingClass::Sell((void*377 *)this);
    Vtable3 = this;
    v6 = (*(int (__thiscall **)(int *, void ***))(BuildingClass_Array + 16))(&BuildingClass_Array, &Vtable3);
    if ( v6 != -1 )
    Vector::RemoveAt(&BuildingClass_Array, v6);
    Vtable3 = this;
    v7 = (*(int (__thiscall **)(int *, void ***))(dword_8B41E0 + 16))(&dword_8B41E0, &Vtable3);
    if ( v7 != -1 )
    Vector::RemoveAt(&dword_8B41E0, v7);
    BuildingClass::ClearAnims((int *)this, -2);
    BuildingTypeClass::IsPowered((int)*(this + 328));
    v8 = this + 370;
    v9 = 8;
    do
    if ( *v8 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)*v8 + 248))(*v8);
    *v8 = 0;
    ++v8;
    --v9;
    while ( v9 );
    if ( WTFMode )
    v10 = (int)*(this + 328);
    if ( v10 )
    if ( *(uint8_t *)(v10 + 5831) )
    v11 = *((uint8_t *)this + 1772);
    *((uint8_t *)this + 1771) = -1;
    if ( !v11 )
    *((uint8_t *)this + 1772) = *(uint8_t *)(v10 + 5895);
    *((uint8_t *)this + 128) = 1;
    *((uint8_t *)this + 1772) = 1;
    BuildingClass::CleanupOccupation((void*377 *)this);
    v12 = *((uint32_t *)*(this + 328) + 1468);
    if ( (v12 == -1
    || (v13 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v12) + 40) + 200)) == 0
    || DynamicVector::GetOrGrow((uint32_t *)*(this + 135) + 5460, *(uint32_t *)(v13 + 3576)))
    && *((uint32_t *)*(this + 328) + 1468) != -1
    || ((v14 = *((uint32_t *)*(this + 328) + 1469), v14 == -1)
    || (v15 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v14) + 40) + 200)) == 0
    || DynamicVector::GetOrGrow((uint32_t *)*(this + 135) + 5460, *(uint32_t *)(v15 + 3576)))
    && *((uint32_t *)*(this + 328) + 1469) != -1 )
    SuperWeapon::UpdateSuperWeaponsOwnedHouseClass((int)*(this + 135));
    if ( WTFMode )
    if ( *(this + 27) != *(this + 337) )
    *((uint8_t *)*(this + 135) + 22392) = 1;
    if ( WTFMode && *(this + 328) )
    v16 = *(this + 135);
    if ( v16 )
    HouseClass::DecrementUnitCount(v16, this);
    BuildingClass::Sell((void*377 *)this);
    v17 = (int)*(this + 329);
    if ( v17 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v17 + 32))(v17, 1);
    *(this + 329) = 0;
    Vtable3 = this;
    v18 = (*(int (__thiscall **)(int *, void ***))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &Vtable3);
    if ( v18 != -1 )
    DynamicVector::Remove(&g_BuildingInstanceCount, v18);
    Vtable3 = this;
    v19 = (*(int (__thiscall **)(int *, void ***))(dword_B0F640 + 16))(&dword_B0F640, &Vtable3);
    if ( v19 != -1 )
    DynamicVector::Remove(&dword_B0F640, v19);
    Vtable3 = (void **)AbstractClass::GetVtable3((int)(this + 1));
    v20 = BuildingTypeClass::Dequeue((char **)&BuildingLoadQueue_Array, (int *)&Vtable3);
    if ( v20 )
    v21 = (int)(v20 - (uint32_t)BuildingLoadQueue_Array) >> 3;
    if ( v21 != -1 )
    v22 = v21 + 1;
    for ( i = BuildingLoadQueue_Count; v22 < (int)BuildingLoadQueue_Count; i = BuildingLoadQueue_Count )
    v24 = (uint32_t *)((char *)BuildingLoadQueue_Array + 8 * v22++);
    *(v24 - 2) = *v24;
    *(v24 - 1) = v24[1];
    BuildingLoadQueue_Count = i - 1;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = 0;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = 0;
    BuildingLoadQueue_Active = 0;
    *(this + 328) = 0;
    *((uint8_t *)this + 144) = 0;
    v25 = (int)*(this + 413);
    (*((void (__thiscall **)(void **))*(this + 411) + 3))(this + 411);
    (*((void (__thiscall **)(void **, int, uint32_t))*(this + 411) + 2))(this + 411, v25, 0);
    v26 = (int)*(this + 419);
    (*((void (__thiscall **)(void **))*(this + 417) + 3))(this + 417);
    (*((void (__thiscall **)(void **, int, uint32_t))*(this + 417) + 2))(this + 417, v26, 0);
    v27 = *(this + 418);
    *(this + 417) = &VectorClass<InfantryClass *>::`vftable';
    if ( v27 && *((uint8_t *)this + 1681) )
    __3_YAXPAX_Z(v27);
    *(this + 418) = 0;
    *((uint8_t *)this + 1681) = 0;
    *(this + 419) = 0;
    v28 = *(this + 412);
    *(this + 411) = &VectorClass<InfantryClass *>::`vftable';
    if ( v28 && *((uint8_t *)this + 1657) )
    __3_YAXPAX_Z(v28);
    *(this + 412) = 0;
    *((uint8_t *)this + 1657) = 0;
    *(this + 413) = 0;
    return TechnoClass::DTOR((int)this);
}

int  BuildingClass::MissionController(#377 *this)
{
    int v1; // ebp
    int result; // eax
    int v4; // eax
    int v5; // ebx
    int v6; // ebx
    int v7; // eax
    int v8; // eax
    uint8_t *v9; // eax
    int v10; // eax
    int v11; // eax
    uint32_t *v12; // ebx
    uint8_t *v13; // edi
    int v14; // eax
    int v15; // eax
    unsigned int v16; // ebp
    uint32_t *v17; // eax
    void *v18; // eax
    void *v19; // ebp
    int v20; // eax
    int MemberTeam; // eax
    uint32_t *v22; // ebp
    uint32_t *v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // eax
    int v27; // ecx
    double v28; // st7
    uint8_t *v29; // eax
    _WORD *v30; // eax
    int i; // ebp
    int v32; // ebx
    uint8_t *v33; // esi
    int v34; // ecx
    uint8_t *v35; // eax
    int v36; // eax
    uint32_t *v37; // edi
    uint32_t *v38; // eax
    int v39; // ecx
    int v40; // edx
    int v41; // eax
    int v42; // ecx
    double v43; // st7
    uint8_t *v44; // esi
    int v45; // [esp+30h] [ebp-40h] BYREF
    int v46; // [esp+34h] [ebp-3Ch]
    int v47; // [esp+38h] [ebp-38h]
    int v48; // [esp+3Ch] [ebp-34h]
    uint32_t v49[3]; // [esp+40h] [ebp-30h] BYREF
    char v50[12]; // [esp+4Ch] [ebp-24h] BYREF
    uint8_t v51[12]; // [esp+58h] [ebp-18h] BYREF
    uint8_t v52[12]; // [esp+64h] [ebp-Ch] BYREF
    uint32_t *v53; // [esp+74h] [ebp+4h]
    char v54; // [esp+74h] [ebp+4h]
    int v55; // [esp+74h] [ebp+4h]
    int v56; // [esp+78h] [ebp+8h] BYREF
    uint32_t *v57; // [esp+7Ch] [ebp+Ch]
    v1 = v56;
    switch ( v56 )
    case 3:
    BuildingClass::StartProduction((int *)this, 1);
    TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
    return 1;
    case 8:
    v36 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v36 + 5801) && !*(uint8_t *)(v36 + 5803) )
    goto LABEL_151;
    v37 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v53 + 72))(v53, v52);
    v38 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v51);
    v39 = *v38 - *v37;
    v40 = v38[1];
    v41 = v38[2];
    v46 = v39;
    v42 = v37[2];
    v47 = v40 - v37[1];
    v48 = v41 - v42;
    v43 = Math::Sqrt((double)v46 * (double)v46 + (double)(v41 - v42) * (double)(v41 - v42) + (double)v47 * (double)v47);
    if ( (int)Math::RoundToInt(v43) < 384 )
    return 1;
    LABEL_151:
    TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
    v44 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v44[5821] || v44[5801] || v44[5803] )
    return 23;
    else
    return 1;
    case 11:
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 20, 0);
    goto LABEL_144;
    case 12:
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 19 )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5817) )
    BuildingClass::ClearAnims((int *)this, 7);
    BuildingClass::ClearAnims((int *)this, 18);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v34 = 0;
    v35 = (uint8_t *)(*((uint32_t *)this + 328) + 4460);
    else
    v34 = 1;
    v35 = (uint8_t *)(*((uint32_t *)this + 328) + 4476);
    if ( v35 && *v35 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v35, 8, v34, 0, 0);
    LABEL_144:
    TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
    return 1;
    case 13:
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 5821) )
    return TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
    return 1;
    case 14:
    v12 = v57;
    v13 = v53;
    TechnoClass::Mission_RepairDispatch((int *)this, v56, (int)v53, v56, v57);
    if ( !*((uint8_t *)this + 1632) )
    return 10;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5801) )
    if ( Array::Contains((int *)this, (int)v53) )
    result = (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 34, v53);
    if ( result == 10 )
    return result;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5803)
    && Array::Contains((int *)this, (int)v53)
    && !(unsigned __int8)TechnoClass::CanSelfRepair(v53) )
    return 10;
    v14 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v14 + 5825) && !*(uint8_t *)(v14 + 5826) )
    if ( !Array::Contains((int *)this, (int)v53) && Array::ContainsValue((int *)this, (int)v53) )
    (*(void (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 2, v53);
    Array::Contains((int *)this, (int)v53);
    v54 = 0;
    if ( Array::Contains((int *)this, (int)v13) )
    v15 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v15 + 5811) || *(uint8_t *)(v15 + 5820) )
    v16 = v13 ? ((v13[20] & 4) != 0 ? (unsigned int)v13 : 0) : 0;
    v17 = (uint32_t *)(*(int (__thiscall **)(void*377 *, char *, unsigned int))(*(uint32_t *)this + 168))(
    this,
    v50,
    v16);
    v18 = Coord::To_Cell(&MapClass_Instance, v17);
    v19 = *(void **)(v16 + 1444);
    if ( v19 )
    if ( v18 != v19 )
    v54 = 1;
    if ( Team::GetMember(this, 0) )
    v20 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v20 + 5801) || *(uint8_t *)(v20 + 5803) )
    MemberTeam = Team::GetMember(this, 0);
    v22 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)MemberTeam + 72))(MemberTeam, v51);
    v23 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v52);
    v24 = *v23 - *v22;
    v25 = v23[1];
    v26 = v23[2];
    v46 = v24;
    v27 = v22[2];
    v47 = v25 - v22[1];
    v48 = v26 - v27;
    v28 = Math::Sqrt((double)v46 * (double)v46 + (double)(v26 - v27) * (double)(v26 - v27) + (double)v47 * (double)v47);
    if ( (int)Math::RoundToInt(v28) > 128 )
    v54 = 1;
    if ( (*(int (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 19, v13) == 1 || v54 )
    *v12 = this;
    v29 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v29[5811] || v29[5820] )
    v30 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v45);
    LOWORD(v55) = *v30 + 3;
    HIWORD(v55) = v30[1] + 1;
    v56 = v55;
    *v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v56);
    if ( (*(int (__thiscall **)(void*377 *, int, uint32_t *, uint8_t *))(*(uint32_t *)this + 636))(this, 18, v12, v13) == 20 )
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 24, v13);
    if ( (*(int (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 22, v13) != 1 )
    (*(void (__thiscall **)(uint8_t *, int *, int, int))(*(uint32_t *)v13 + 372))(
    v13,
    &g_BuildingClassPool,
    1,
    1);
    return 1;
    else if ( v29[5835] )
    *v12 = this;
    if ( (*(int (__thiscall **)(void*377 *, int, uint32_t *, uint8_t *))(*(uint32_t *)this + 636))(this, 18, v12, v13) == 20 )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 24);
    return 1;
    return 1;
    if ( Array::ContainsValue((int *)this, (int)v53) )
    v49[0] = *((uint32_t *)this + 39);
    v49[1] = *((uint32_t *)this + 40);
    v49[2] = *((uint32_t *)this + 41);
    *v12 = Coord::To_Cell(&MapClass_Instance, v49);
    (*(void (__thiscall **)(void*377 *, int, uint32_t *, uint32_t *))(*(uint32_t *)this + 636))(this, 18, v12, v53);
    return 1;
    for ( i = 0; i < *((uint32_t *)this + 58); ++i )
    v32 = Team::GetMember(this, i);
    if ( (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 34, v32) == 10 )
    (*(void (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 23, v32);
    if ( !Array::ContainsValue((int *)this, (int)v53) )
    return 10;
    return 1;
    case 15:
    TechnoClass::Mission_RepairDispatch((int *)this, v56, (int)v53, v56, v57);
    if ( !Object::IsAlliedWithObjectHouse(*((uint32_t **)this + 135), (int)v53) )
    return 0;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 18 )
    return 10;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19 )
    return 10;
    if ( !*((uint32_t *)this + 333) )
    return 10;
    if ( !IKnowWhatImDoing && !Array::ContainsValue((int *)this, (int)v53) )
    v4 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v4 + 5806) && !*(uint8_t *)(v4 + 5807) )
    return 10;
    if ( *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v53 + 132))(v53) + 1460) != 5
    && (*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3278)
    && !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v53 + 132))(v53) + 3278)
    || !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3278)
    && *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v53 + 132))(v53) + 3278)) )
    return 10;
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v53 + 132))(v53) + 3434) )
    return 10;
    if ( !*((uint8_t *)this + 1632) )
    return 10;
    v5 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v5 + 5806) && !*(uint8_t *)(v5 + 5807) )
    goto LABEL_33;
    if ( (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) == 1 && !*(uint8_t *)(*((uint32_t *)this + 328) + 5806)
    || (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) == 15 && !*(uint8_t *)(*((uint32_t *)this + 328) + 5807) )
    return 10;
    if ( v53[175] && (unsigned __int8)CellClass::HasContent() )
    return 10;
    v5 = *((uint32_t *)this + 328);
    if ( *((uint32_t *)this + 69) + 1 <= *(uint32_t *)(v5 + 1504)
    && *(double *)((*(int (__thiscall **)(uint32_t *))(*v53 + 132))(v53) + 896) <= *(double *)(v5 + 904) )
    return 1;
    LABEL_33:
    if ( *(uint8_t *)(v5 + 5805) )
    return 1;
    if ( *(uint8_t *)(v5 + 5803) )
    if ( (unsigned __int8)TechnoClass::CanSelfRepair(v53)
    && (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 35, v53) != 1 )
    return 1;
    return 10;
    if ( *(uint8_t *)(v5 + 5801) )
    if ( ((*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) == 1
    || (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) == 2)
    && (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 35, v53) != 1 )
    return 1;
    return 10;
    if ( !*(uint8_t *)(v5 + 5826) && !*(uint8_t *)(v5 + 5825) || (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) != 15 )
    v8 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v8 + 5835) )
    return (*(int (__stdcall **)(uint32_t *))(v53[1] + 12))(v53 + 1) != 2 ? 10 : 1;
    if ( !*(uint8_t *)(v8 + 5811)
    || (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) != 1
    || !*(uint8_t *)(v53[433] + 3598)
    || !IKnowWhatImDoing && *((uint32_t *)this + 70) )
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 5820)
    || (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) != 1
    || !*(uint8_t *)(v53[433] + 3599) )
    return 0;
    if ( !IKnowWhatImDoing )
    return !*((uint32_t *)this + 70);
    return 1;
    if ( v53 )
    v6 = (*(int (__thiscall **)(uint32_t *))(*v53 + 44))(v53) == 15 ? (unsigned int)v53 : 0;
    else
    v6 = 0;
    if ( *(uint32_t *)(v6 + 700) && (unsigned __int8)CellClass::HasContent() )
    return 10;
    if ( BuildingClass::IsBeingRepairedOrCaptured(v6) )
    return 10;
    v7 = -(*((uint32_t *)this + 191) != 0);
    LOBYTE(v7) = v7 & 0xF7;
    return v7 + 10;
    case 16:
    if ( *((uint32_t *)this + 70)
    || !Array::ContainsValue((int *)this, (int)v53)
    || *((uint8_t *)this + 129)
    || *((uint32_t *)this + 135) != (*(int (__thiscall **)(uint32_t *))(*v53 + 60))(v53) )
    return 10;
    v33 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v33[5819] || v33[5801] )
    return 1;
    if ( !v33[5820] )
    return 10;
    return 1;
    case 21:
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19 )
    return 10;
    v9 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v9[5806] || v9[5807] )
    return 1;
    if ( v9[5801] || v9[5802] || v9[5825] || v9[5826] )
    v11 = *(uint32_t *)this;
    *((uint8_t *)this + 1757) = 1;
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(v11 + 488))(this, 20, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, uint32_t))(*v53 + 488))(v53, 0, 0);
    return 1;
    else if ( v9[5803] )
    v10 = *(uint32_t *)this;
    *((uint8_t *)this + 1757) = 1;
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(v10 + 488))(this, 20, 0);
    return 1;
    else if ( v9[5811] )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v53 + 488))(v53, 16, 0);
    return 1;
    else
    return TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
    default:
    return TechnoClass::Mission_RepairDispatch((int *)this, v1, (int)v53, v1, v57);
}

// 0x0043CEA0
int  BuildingClass::DrawFactoryProduction(#377 *this)
{
    int result; // eax
    int *v3; // eax
    int v4; // ebx
    int v5; // ebp
    uint32_t *v6; // eax
    int v7; // edx
    int v8; // ecx
    int v9; // ebx
    int v10; // ebp
    int v11; // ebx
    uint32_t *v12; // eax
    int v13; // ecx
    int v14; // [esp+10h] [ebp-18h] BYREF
    int v15; // [esp+14h] [ebp-14h]
    uint32_t v16[4]; // [esp+18h] [ebp-10h] BYREF
    int *v17; // [esp+2Ch] [ebp+4h]
    char v18; // [esp+30h] [ebp+8h]
    char v19; // [esp+34h] [ebp+Ch]
    if ( !ArmageddonMode )
    result = (int)g_hWnd;
    if ( g_hWnd )
    if ( !v18 && !*((uint8_t *)this + 128) || !*((uint8_t *)this + 116) || *((uint8_t *)this + 129) )
    goto LABEL_20;
    *((uint8_t *)this + 128) = 0;
    v3 = ClipRectIntersection(v16, v17, &DSurface_ViewBounds, 0, 0);
    *v17 = *v3;
    v17[1] = v3[1];
    v17[2] = v3[2];
    v17[3] = v3[3];
    v4 = DSurface_ViewBounds;
    v5 = Map_VisibleRect;
    v6 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 300))(this, v16);
    v7 = v6[1];
    v8 = v4 + *v6;
    v9 = v6[2];
    result = v6[3];
    v10 = v7 + v5;
    if ( *v17 >= v8 + v9 )
    goto LABEL_20;
    v11 = v17[1];
    result += v10;
    if ( v11 < result && (result = *v17 + v17[2], result > v8) && v11 + v17[3] > v10 )
    v12 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 172))(this, v16);
    Coord::To_Screen(TacticalClass_Instance, v12, &v14);
    if ( *v17 > DSurface_ViewBounds )
    v14 += DSurface_ViewBounds - *v17;
    v13 = v17[1];
    result = Map_VisibleRect;
    if ( v13 > Map_VisibleRect )
    result = Map_VisibleRect - v13;
    v15 += Map_VisibleRect - v13;
    if ( v19 )
    if ( !*((uint8_t *)this + 1767) )
    result = (*(int (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)this + 1252))(this, &v14, v17);
    LOBYTE(result) = 1;
    return result;
    else
    result = (*(int (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)this + 276))(this, &v14, v17);
    LOBYTE(result) = 1;
    else
    LABEL_20:
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::DisplayProductionFrame(#377 *this)
{
    int v2; // edx
    int v3; // eax
    int result; // eax
    int v5; // ebp
    int Type; // eax
    int *v7; // ebx
    int v8; // ecx
    int v9; // edi
    int v10; // eax
    __int16 *v11; // eax
    int v12; // eax
    int ProductionFrame; // eax
    int v14; // eax
    int v15; // ecx
    int v16; // ebp
    int v17; // ebp
    int v18; // edx
    __int16 *v19; // eax
    int v20; // eax
    int v21; // eax
    int v22; // [esp+30h] [ebp-3Ch]
    int v23; // [esp+38h] [ebp-34h]
    int v24; // [esp+44h] [ebp-28h] BYREF
    uint32_t v25[2]; // [esp+48h] [ebp-24h] BYREF
    int v26; // [esp+50h] [ebp-1Ch]
    int v27; // [esp+54h] [ebp-18h]
    int v28; // [esp+58h] [ebp-14h]
    int v29; // [esp+5Ch] [ebp-10h]
    int v30; // [esp+60h] [ebp-Ch]
    int v31; // [esp+64h] [ebp-8h]
    uint32_t *v32; // [esp+68h] [ebp-4h]
    int v33; // [esp+70h] [ebp+4h] BYREF
    int *v34; // [esp+74h] [ebp+8h]
    uint8_t v35[8]; // [esp+78h] [ebp+Ch] BYREF
    char v36; // [esp+80h] [ebp+14h] BYREF
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v24);
    v3 = *(uint32_t *)this;
    v25[0] = v2;
    result = (*(int (__thiscall **)(void*377 *))(v3 + 108))(this);
    v5 = result;
    v24 = result;
    if ( result )
    LOBYTE(result) = *(uint8_t *)(*((uint32_t *)this + 328) + 5889);
    if ( !(uint8_t)result )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 24
    || (LOBYTE(result) = Flag::CheckNone((uint8_t *)this + 848), (uint8_t)result) )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 16
    && *(uint32_t *)(*((uint32_t *)this + 328) + 5348) )
    Type = AbstractClass::GetType(*((uint32_t **)this + 329));
    if ( Type && *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)Type + 132))(Type) + 3476) )
    v5 = *(uint32_t *)(*((uint32_t *)this + 328) + 5372);
    else
    v5 = *(uint32_t *)(*((uint32_t *)this + 328) + 5348);
    v24 = v5;
    v7 = v34;
    v8 = *(uint32_t *)(v33 + 4);
    v27 = *(uint32_t *)v33;
    v28 = v8;
    v33 = *(__int16 *)(v5 + 4);
    v9 = v8 - v33 / 2;
    v29 = *v34;
    v30 = v34[1];
    v31 = v34[2];
    v32 = (uint32_t *)v34[3];
    v10 = (int)v32;
    if ( (int)v32 > v9 )
    v10 = v8 - v33 / 2;
    v32 = (uint32_t *)v10;
    if ( v10 > 0 )
    v11 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v25);
    v12 = (*(int (__thiscall **)(void*377 *, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    2,
    0,
    v11[133],
    0,
    0,
    0,
    0,
    0,
    0);
    v22 = -2 - ZCoordToScreenY(v12);
    ProductionFrame = BuildingClass::GetProductionFrame((int *)this);
    ((void (__thiscall *)(void*377 *, int, int, uint8_t *, char *, uint32_t, int, int))loc_705E00)(
    this,
    v5,
    ProductionFrame,
    v35,
    &v36,
    0,
    256,
    v22);
    v8 = v28;
    v26 = v8;
    v14 = *v7;
    v26 = v8 - v9;
    v29 = v14;
    v15 = v7[1];
    result = v9 + v15;
    v16 = v7[2];
    v30 = v9 + v15;
    v31 = v16;
    v17 = v33;
    v32 = (uint32_t *)v7[3];
    v25[1] = v27;
    v18 = v15 + v7[3];
    v32 = (uint32_t *)v33;
    if ( v9 + v15 + v33 > v18 )
    v17 = v18 - result;
    v32 = (uint32_t *)(v18 - result);
    if ( result < v15 )
    result = v9;
    v30 = v15;
    v17 += v9;
    v32 = (uint32_t *)v17;
    v26 += v9;
    if ( v17 > 0 )
    v19 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v25);
    v20 = (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    0,
    0,
    v19[133],
    0,
    0,
    0,
    0,
    0,
    0);
    v23 = -(int)ZCoordToScreenY(v20);
    v21 = BuildingClass::GetProductionFrame((int *)this);
    return ((int (__thiscall *)(void*377 *, uint32_t *, int, int *, char *, uint32_t, int, int))loc_705E00)(
    this,
    v32,
    v21,
    &v33,
    &v36,
    0,
    256,
    v23);
    return result;
}

int  BuildingClass::Draw(#377 *this)
{
    int v2; // edx
    int (__thiscall **vfptr0)(void*377 *); // eax
    int result; // eax
    char *v5; // ecx
    int v6; // edx
    int (__thiscall **v7)(void*377 *); // edx
    int v8; // edi
    int v9; // edi
    int v10; // eax
    char *v11; // edx
    unsigned __int8 v12; // bl
    int v13; // eax
    int v14; // edx
    int v15; // ecx
    int v16; // eax
    char *v17; // edx
    unsigned __int8 v18; // bl
    int v19; // eax
    int v20; // edx
    int v21; // ecx
    uint32_t *v22; // eax
    uint32_t *v23; // eax
    double v24; // st7
    int v25; // ebx
    int v26; // eax
    int v27; // ebp
    __int16 *v28; // eax
    int v29; // eax
    int v30; // eax
    int v31; // ecx
    int v32; // edx
    int v33; // eax
    int v34; // eax
    int v35; // ebp
    uint32_t *v36; // eax
    uint32_t *v37; // ecx
    int v38; // ebx
    int v39; // kr08_4
    __int16 *v40; // eax
    int v41; // eax
    __int64 v42; // rax
    __int16 *v43; // eax
    int v44; // eax
    int ProductionFrame; // eax
    __int16 *v46; // eax
    int v47; // eax
    __int16 *v48; // eax
    int v49; // eax
    void *v50; // [esp+62h] [ebp-5Ch]
    int v51; // [esp+6Ah] [ebp-54h]
    int v52; // [esp+6Eh] [ebp-50h]
    int v53; // [esp+72h] [ebp-4Ch]
    int v54; // [esp+72h] [ebp-4Ch]
    int v55; // [esp+72h] [ebp-4Ch]
    unsigned __int8 v56; // [esp+87h] [ebp-37h]
    unsigned __int8 v57; // [esp+87h] [ebp-37h]
    unsigned __int8 v58; // [esp+88h] [ebp-36h]
    unsigned __int8 v59; // [esp+88h] [ebp-36h]
    char v60; // [esp+89h] [ebp-35h]
    int v61; // [esp+8Ah] [ebp-34h]
    int v62; // [esp+8Eh] [ebp-30h] BYREF
    int v63; // [esp+92h] [ebp-2Ch]
    void *v64; // [esp+96h] [ebp-28h]
    __int16 v65[4]; // [esp+9Ah] [ebp-24h] BYREF
    int v66; // [esp+A2h] [ebp-1Ch]
    int v67; // [esp+A6h] [ebp-18h]
    int v68; // [esp+AAh] [ebp-14h] BYREF
    int v69; // [esp+AEh] [ebp-10h]
    uint8_t v70[4]; // [esp+B2h] [ebp-Ch] BYREF
    int v71; // [esp+B6h] [ebp-8h]
    void *retaddr; // [esp+BEh] [ebp+0h]
    int v73; // [esp+C2h] [ebp+4h]
    int v74; // [esp+C6h] [ebp+8h]
    int v75; // [esp+E6h] [ebp+28h]
    int v76; // [esp+EAh] [ebp+2Ch]
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, __int16 *))(*(uint32_t *)this + 440))(this, v65);
    vfptr0 = *(int (__thiscall ***)(void*377 *))this;
    v62 = v2;
    result = vfptr0[27](this);
    v61 = result;
    if ( result )
    if ( this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    && !*((uint32_t *)this + 333)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19 )
    v5 = (char *)this + 1372;
    v6 = 21;
    do
    if ( *(uint32_t *)v5 )
    *(uint8_t *)(*(uint32_t *)v5 + 413) = 1;
    v5 += 4;
    --v6;
    while ( v6 );
    result = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(result + 5889) )
    v7 = *(int (__thiscall ***)(void*377 *))this;
    v63 = *(uint32_t *)(result + 5408);
    v66 = 198;
    v67 = 446;
    v60 = 0;
    if ( v7[97](this) == 16 )
    v8 = Array::Get(this, 0);
    if ( v8 )
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v8 + 132))(v8) + 3476)
    || *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v8 + 132))(v8) + 3434) )
    v60 = 1;
    v9 = 0;
    if ( !*((uint32_t *)this + 165) )
    LABEL_22:
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 352))(this) || *((uint32_t *)this + 113) != 1 )
    goto LABEL_29;
    v16 = RulesClass_Instance[1].CMisl[13];
    v17 = (char *)RulesClass_Instance + 2 * v16;
    v18 = v17[v16 + 6261];
    v59 = v17[v16 + 6260];
    v57 = v17[v16 + 6262];
    v19 = DDraw::GetStatus() - 1;
    if ( v19 )
    if ( --v19 )
    LABEL_28:
    LOWORD(v20) = v59;
    LOWORD(v19) = v57;
    LOWORD(v21) = v18 >> 1;
    v9 |= v19 | (32 * ((32 * v20) | v21));
    LABEL_29:
    v22 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v70);
    LOWORD(v64) = *v22 / 256;
    HIWORD(v64) = v22[1] / 256;
    *(uint32_t *)v65 = v64;
    v23 = CellCoord::To_CellObj(&MapClass_Instance, v65);
    if ( CellClass::QuickPassable(v23) )
    v9 = 0;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 24
    && (Window::IsVisible((uint8_t *)this + 848)
    || BuildingClass::CheckFlag24((uint8_t *)this + 848)
    || BuildingClass::CheckPowerFlags((uint8_t *)this + 848)) )
    v24 = Animation::GetProgress((char *)this + 848);
    v25 = Math::RoundToInt(v24 * (double)*(int *)(*((uint32_t *)this + 328) + 5880));
    if ( BuildingClass::CheckFlag24((uint8_t *)this + 848) )
    v25 = *(uint32_t *)(*((uint32_t *)this + 328) + 5880) - v25;
    if ( Flag::CheckNone((uint8_t *)this + 848) )
    v25 = 0;
    if ( BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    v25 = *(uint32_t *)(*((uint32_t *)this + 328) + 5880) - 1;
    v26 = *(uint32_t *)(*((uint32_t *)this + 328) + 5880);
    if ( v25 >= v26 )
    v25 = v26 - 1;
    if ( v25 < 0 )
    v25 = 0;
    *(uint32_t *)v65 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 108))(this);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v27 = 0;
    else
    v27 = *(uint32_t *)(*((uint32_t *)this + 328) + 5880) + 1;
    v28 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    v29 = (*(int (__thiscall **)(void*377 *, int, int, uint32_t, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    2,
    1,
    v28[133],
    v9,
    0,
    0,
    0,
    0,
    0);
    v30 = ZCoordToScreenY(v29);
    return ((int (__thiscall *)(void*377 *, void *, int, int, int, uint32_t, int, int))loc_705E00)(
    this,
    retaddr,
    v25 + v27,
    v75,
    v76,
    0,
    256,
    v71 - v30);
    else
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 16 )
    if ( v60 )
    v31 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v31 + 5372) )
    v61 = *(uint32_t *)(v31 + 5372);
    v63 = -40;
    else
    v32 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v32 + 5348) )
    v61 = *(uint32_t *)(v32 + 5348);
    v63 = -20;
    v33 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( v33 != 18 && v33 != 19 )
    v34 = *(uint32_t *)(*((uint32_t *)this + 328) + 5428);
    v66 = *(uint32_t *)(*((uint32_t *)this + 328) + 5424) + 198;
    v67 = v34 + 446;
    v35 = (BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) << 8) - 256;
    v68 = (BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) << 8) - 256;
    v69 = v35;
    v36 = (uint32_t *)TacticalClass::AdjustForZShapeMove((int)v65, (int)&v68);
    v37 = (uint32_t *)*((uint32_t *)this + 328);
    v38 = v67 - v36[1];
    v66 -= *v36;
    v67 = v38;
    v64 = dword_89DDBC;
    if ( BuildingTypeClass::GetFoundationWidth(v37) >= 8 )
    v64 = 0;
    if ( *(int *)(v74 + 12) > 0 )
    v39 = *(__int16 *)(v61 + 6);
    if ( BuildingClass::GetProductionFrame((int *)this) < v39 / 2 )
    BuildingClass::GetProductionFrame((int *)this);
    v52 = v67;
    v51 = v66;
    v50 = v64;
    v40 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    v41 = (*(int (__thiscall **)(void*377 *, int, int, int, int, void *, uint32_t, int, int, uint32_t))(*(uint32_t *)this + 464))(
    this,
    2,
    1,
    *(__int16 *)(*((uint32_t *)this + 328) + 5448) + v40[133],
    v9,
    v50,
    0,
    v51,
    v52,
    0);
    v42 = ZCoordToScreenY(v41);
    ((void (__fastcall *)(void*377 *, uint32_t, int, int, int, int, uint32_t, int, uint32_t))loc_705E00)(
    this,
    HIDWORD(v42),
    v69,
    v76,
    v73,
    v74,
    0,
    256,
    v71 - v42);
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 5400) && *((uint32_t *)this + 333) )
    v43 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    v44 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    0,
    1,
    *(__int16 *)(*((uint32_t *)this + 328) + 5448) + v43[133],
    v9,
    0,
    0,
    0,
    0,
    0);
    v53 = -1 - ZCoordToScreenY(v44);
    ProductionFrame = BuildingClass::GetProductionFrame((int *)this);
    ((void (__thiscall *)(void*377 *, uint32_t, int, int, int, uint32_t, int, int))loc_705E00)(
    this,
    *(uint32_t *)(*((uint32_t *)this + 328) + 5400),
    ProductionFrame,
    v73,
    v74,
    0,
    256,
    v53);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result == 16 )
    if ( v60 )
    result = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(result + 5380) )
    BuildingClass::GetHealthRatio((int *)this);
    v48 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    v49 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    0,
    1,
    *(__int16 *)(*((uint32_t *)this + 328) + 5448) + v48[133],
    v9,
    0,
    0,
    0,
    0,
    0);
    v55 = -(int)ZCoordToScreenY(v49);
    return ((int (__thiscall *)(void*377 *, uint32_t, int, int, int, uint32_t, int, int))loc_705E00)(
    this,
    *(uint32_t *)(*((uint32_t *)this + 328) + 5380),
    v76,
    v73,
    v74,
    0,
    256,
    v55);
    else
    result = *(uint32_t *)(*((uint32_t *)this + 328) + 5356);
    if ( result )
    BuildingClass::GetHealthRatio((int *)this);
    v46 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    v47 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 464))(
    this,
    0,
    1,
    *(__int16 *)(*((uint32_t *)this + 328) + 5448) + v46[133],
    v9,
    0,
    0,
    0,
    0,
    0);
    v54 = -(int)ZCoordToScreenY(v47);
    return ((int (__thiscall *)(void*377 *, uint32_t, int, int, int, uint32_t, int, int))loc_705E00)(
    this,
    *(uint32_t *)(*((uint32_t *)this + 328) + 5356),
    v76,
    v73,
    v74,
    0,
    256,
    v54);
    return result;
    LOWORD(v20) = v57;
    LOWORD(v21) = v18;
    v19 = v20 | (32 * (v21 | (v59 << 6)));
    v9 |= v19;
    LOWORD(v20) = v59;
    LOWORD(v21) = v18 >> 1;
    LOWORD(v19) = v57;
    v20 *= 32;
    v21 = v19 | ((v20 | v21) << 6);
    v9 |= v21;
    goto LABEL_28;
    v10 = RulesClass_Instance[1].CMisl[10];
    v11 = (char *)RulesClass_Instance + 2 * v10;
    v12 = v11[v10 + 6261];
    v56 = v11[v10 + 6260];
    v58 = v11[v10 + 6262];
    v13 = DDraw::GetStatus() - 1;
    if ( v13 )
    if ( --v13 )
    LABEL_21:
    LOWORD(v15) = v56;
    LOWORD(v14) = v58;
    LOWORD(v13) = v12 >> 1;
    v9 |= v14 | (32 * ((32 * v15) | v13));
    goto LABEL_22;
    LOWORD(v9) = v56;
    LOWORD(v15) = v58;
    v9 = v15 | (32 * (v12 | (v9 << 6)));
    LOWORD(v15) = v56;
    LOWORD(v13) = v12 >> 1;
    LOWORD(v14) = v58;
    v15 *= 32;
    v13 = v14 | ((v15 | v13) << 6);
    v9 |= v13;
    goto LABEL_21;
    return result;
}

int  BuildingClass::DrawPlacementPreview(#377 *this)
{
    int v2; // edx
    int (__thiscall **vfptr0)(void*377 *); // eax
    int i; // edi
    float *v5; // eax
    float *v6; // esi
    float *v7; // eax
    float v8; // ecx
    float v9; // edx
    uint32_t *v10; // eax
    int v11; // eax
    int v12; // esi
    int v13; // eax
    char *v14; // edx
    unsigned __int8 v15; // bl
    int v16; // eax
    int v17; // edx
    int v18; // ecx
    int v19; // eax
    char *v20; // edx
    unsigned __int8 v21; // bl
    int v22; // eax
    int v23; // edx
    int v24; // ecx
    uint32_t *v25; // eax
    uint32_t *v26; // eax
    int result; // eax
    double v28; // st7
    int v29; // edi
    int v30; // eax
    int v31; // eax
    int v32; // eax
    int v33; // esi
    int v34; // ecx
    int v35; // ecx
    char v36; // dl
    unsigned int v37; // ebx
    unsigned int v38; // edi
    int v39; // eax
    int v40; // esi
    int v41; // ecx
    int v42; // ecx
    int v43; // ebx
    int v44; // edi
    int v45; // ecx
    int v46; // eax
    int v47; // esi
    int (__thiscall **v48)(void*377 *); // edi
    float *inited; // eax
    float *v50; // eax
    int v51; // esi
    int (__thiscall **v52)(void*377 *); // edi
    float *v53; // eax
    float *v54; // eax
    int v55; // esi
    int (__thiscall **v56)(void*377 *); // edi
    float *v57; // eax
    float *v58; // eax
    int v59; // ecx
    int v60; // eax
    int v61; // edx
    int v62; // esi
    int v63; // ecx
    int (__thiscall **v64)(void*377 *); // ebx
    float *v65; // eax
    float *v66; // eax
    char v67; // dl
    int v68; // eax
    uint8_t *v69; // edi
    int v70; // ecx
    int v71; // esi
    int v72; // eax
    int v73; // edx
    int v74; // ecx
    int (__thiscall **v75)(void*377 *); // ebx
    float *v76; // eax
    float *v77; // eax
    int v78; // [esp+8Eh] [ebp-138h]
    int v79; // [esp+8Eh] [ebp-138h]
    int v80; // [esp+8Eh] [ebp-138h]
    int v81; // [esp+8Eh] [ebp-138h]
    int v82; // [esp+8Eh] [ebp-138h]
    int v83; // [esp+92h] [ebp-134h]
    int v84; // [esp+92h] [ebp-134h]
    int v85; // [esp+92h] [ebp-134h]
    int v86; // [esp+92h] [ebp-134h]
    int v87; // [esp+92h] [ebp-134h]
    float v88; // [esp+96h] [ebp-130h]
    float v89; // [esp+96h] [ebp-130h]
    float v90; // [esp+96h] [ebp-130h]
    float v91; // [esp+96h] [ebp-130h]
    float v92; // [esp+96h] [ebp-130h]
    float v93; // [esp+96h] [ebp-130h]
    float v94; // [esp+96h] [ebp-130h]
    int *v95; // [esp+9Ah] [ebp-12Ch]
    unsigned __int8 v96; // [esp+ACh] [ebp-11Ah]
    unsigned __int8 v97; // [esp+ACh] [ebp-11Ah]
    char v98; // [esp+ACh] [ebp-11Ah]
    bool v99; // [esp+ACh] [ebp-11Ah]
    unsigned __int8 v100; // [esp+ADh] [ebp-119h]
    unsigned __int8 v101; // [esp+ADh] [ebp-119h]
    int v102; // [esp+AEh] [ebp-118h] BYREF
    int v103; // [esp+B2h] [ebp-114h]
    int v104; // [esp+B6h] [ebp-110h]
    float v105; // [esp+BAh] [ebp-10Ch] BYREF
    float v106; // [esp+BEh] [ebp-108h]
    float v107; // [esp+C2h] [ebp-104h]
    int v108; // [esp+C6h] [ebp-100h] BYREF
    int v109; // [esp+CAh] [ebp-FCh] BYREF
    int v110; // [esp+CEh] [ebp-F8h] BYREF
    int v111; // [esp+D2h] [ebp-F4h] BYREF
    float v112; // [esp+D6h] [ebp-F0h] BYREF
    float v113; // [esp+DAh] [ebp-ECh]
    float v114; // [esp+DEh] [ebp-E8h]
    float v115; // [esp+E2h] [ebp-E4h] BYREF
    float v116; // [esp+E6h] [ebp-E0h]
    float v117; // [esp+EAh] [ebp-DCh]
    float v118; // [esp+EEh] [ebp-D8h] BYREF
    float v119; // [esp+F2h] [ebp-D4h]
    float v120; // [esp+F6h] [ebp-D0h]
    float v121[12]; // [esp+FAh] [ebp-CCh] BYREF
    float v122[12]; // [esp+12Ah] [ebp-9Ch] BYREF
    uint8_t v123[12]; // [esp+15Ah] [ebp-6Ch] BYREF
    float v124[12]; // [esp+166h] [ebp-60h] BYREF
    float v125[12]; // [esp+196h] [ebp-30h] BYREF
    uint32_t *v126; // [esp+1CAh] [ebp+4h]
    int *v127; // [esp+1CEh] [ebp+8h]
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v102);
    vfptr0 = *(int (__thiscall ***)(void*377 *))this;
    v108 = v2;
    if ( vfptr0[97](this) == 16
    && (Window::IsVisible((uint8_t *)this + 848)
    || BuildingClass::CheckPowerFlags((uint8_t *)this + 848)
    || Flag::CheckNone((uint8_t *)this + 848)
    || BuildingClass::CheckFlag24((uint8_t *)this + 848)) )
    if ( *((uint8_t *)this + 1048) )
    for ( i = 0; i < *((uint32_t *)this + 58); ++i )
    v5 = (float *)Array::Get(this, i);
    v6 = v5;
    if ( v5 )
    if ( !*((uint8_t *)v5 + 129) && (*(int (__thiscall **)(float *))(*(uint32_t *)v5 + 44))(v5) != 6 )
    v7 = (float *)(*(int (__thiscall **)(float *, float *, uint32_t))(*(uint32_t *)v6 + 76))(v6, &v115, 0);
    v112 = *v7;
    v113 = v7[1];
    v114 = v7[2];
    v118 = v6[39];
    v119 = v6[40];
    v114 = v6[41];
    if ( !g_hWnd
    || ArmageddonMode
    || (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || (v8 = v6[40], v105 = v6[39], v9 = v6[41], v106 = v8, v107 = v9, !Game::Stub3((int)&v105))
    && !Game::Stub3((int)&v112) )
    v10 = (uint32_t *)(*(int (__thiscall **)(float *, uint8_t *, int *))(*(uint32_t *)v6 + 172))(v6, v123, &v109);
    Coord::To_Screen(TacticalClass_Instance, v10, v95);
    v95 = v127;
    (*(void (__thiscall **)(float *, int *))(*(uint32_t *)v6 + 276))(v6, &v110);
    v11 = *((uint32_t *)this + 165);
    v12 = 0;
    v104 = 0;
    if ( v11 )
    v13 = RulesClass_Instance[1].CMisl[10];
    v14 = (char *)RulesClass_Instance + 2 * v13;
    v15 = v14[v13 + 6261];
    v100 = v14[v13 + 6260];
    v96 = v14[v13 + 6262];
    v16 = DDraw::GetStatus() - 1;
    if ( v16 )
    if ( --v16 )
    LABEL_23:
    LOWORD(v18) = v100;
    LOWORD(v17) = v96;
    LOWORD(v16) = v15 >> 1;
    v12 |= v17 | (32 * ((32 * v18) | v16));
    v104 = v12;
    goto LABEL_24;
    LOWORD(v12) = v100;
    LOWORD(v18) = v96;
    v12 = v18 | (32 * (v15 | (v12 << 6)));
    LOWORD(v18) = v100;
    LOWORD(v16) = v15 >> 1;
    LOWORD(v17) = v96;
    v18 *= 32;
    v16 = v17 | ((v18 | v16) << 6);
    v12 |= v16;
    goto LABEL_23;
    LABEL_24:
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 352))(this) && *((uint32_t *)this + 113) == 1 )
    v19 = RulesClass_Instance[1].CMisl[13];
    v20 = (char *)RulesClass_Instance + 2 * v19;
    v21 = v20[v19 + 6261];
    v97 = v20[v19 + 6260];
    v101 = v20[v19 + 6262];
    v22 = DDraw::GetStatus() - 1;
    if ( v22 )
    if ( --v22 )
    LABEL_30:
    LOWORD(v23) = v97;
    LOWORD(v22) = v101;
    LOWORD(v24) = v21 >> 1;
    v104 = v22 | (32 * ((32 * v23) | v24)) | v12;
    goto LABEL_31;
    LOWORD(v23) = v101;
    LOWORD(v24) = v21;
    v22 = v23 | (32 * (v24 | (v97 << 6)));
    v12 |= v22;
    LOWORD(v23) = v97;
    LOWORD(v24) = v21 >> 1;
    LOWORD(v22) = v101;
    v23 *= 32;
    v24 = v22 | ((v23 | v24) << 6);
    v12 |= v24;
    goto LABEL_30;
    LABEL_31:
    v25 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v123);
    LOWORD(v103) = *v25 / 256;
    HIWORD(v103) = v25[1] / 256;
    v102 = v103;
    v26 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v102);
    if ( CellClass::QuickPassable(v26) )
    v104 = 0;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result == 16 )
    result = *(uint32_t *)(*((uint32_t *)this + 328) + 5388);
    if ( result )
    if ( Flag::CheckNone((uint8_t *)this + 848)
    || Window::IsVisible((uint8_t *)this + 848)
    || BuildingClass::CheckFlag24((uint8_t *)this + 848)
    || BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    v28 = Animation::GetProgress((int)this + 848);
    v29 = Math::RoundToInt(v28 * (double)*(int *)(*((uint32_t *)this + 328) + 3840));
    if ( BuildingClass::CheckFlag24((uint8_t *)this + 848) )
    v29 = *(uint32_t *)(*((uint32_t *)this + 328) + 3840) - v29;
    if ( Flag::CheckNone((uint8_t *)this + 848) )
    v29 = 0;
    v30 = *(uint32_t *)(*((uint32_t *)this + 328) + 3840);
    if ( v29 >= v30 )
    v29 = v30 - 1;
    if ( v29 < 0 )
    v29 = 0;
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut )
    v31 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v31 + 5888) )
    v29 += *(uint32_t *)(v31 + 3840);
    v32 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 464))(this);
    v33 = -5 - ZCoordToScreenY(v32);
    v34 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    ((void (__thiscall *)(void*377 *, uint32_t, int, uint32_t *, int *, uint32_t, int, int, uint32_t, uint32_t, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))loc_705E00)(
    this,
    *(uint32_t *)(*((uint32_t *)this + 328) + 5388),
    v29,
    v126,
    v127,
    0,
    256,
    v33,
    0,
    0,
    v34,
    0,
    0,
    0,
    0,
    0,
    0);
    if ( BuildingClass::CheckFlag24((uint8_t *)this + 848) && !v29 )
    *((uint8_t *)this + 128) = 1;
    v35 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v35 + 5829) )
    result = *((uint32_t *)this + 43);
    v36 = 0;
    if ( (result == 18 || *((uint32_t *)this + 45) == 18)
    && *((uint32_t *)this + 62) < *(uint32_t *)(v35 + 3848) + *(uint32_t *)(v35 + 3844) - 1 )
    v36 = 1;
    if ( (result != 19 || (result = *((uint32_t *)this + 62), result <= 0)) && !v36
    || (LOBYTE(result) = *(uint8_t *)(v35 + 5834), (uint8_t)result) )
    if ( byte_887418 )
    v37 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v102) >> 10) + 1) >> 1) & 0x1F;
    v38 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v102) >> 10) + 1) >> 1) & 0x1F;
    else
    v37 = -1;
    v38 = -1;
    v39 = *((uint32_t *)this + 328);
    LOBYTE(v40) = 0;
    v103 = 0;
    v102 = 0;
    v41 = *(uint32_t *)(v39 + 188);
    if ( v41 )
    v103 = *((uint32_t *)this + 82) % *(uint32_t *)(v41 + 8);
    v42 = *(uint32_t *)(*((uint32_t *)this + 328) + 196);
    if ( v42 )
    v40 = *((uint32_t *)this + 82) % *(uint32_t *)(v42 + 8);
    v102 = v40;
    v43 = ((unsigned __int8)v103 << 16) | v37;
    v44 = ((unsigned __int8)v40 << 16) | v38;
    Matrix3x4::Identity(v121);
    result = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(result + 184) )
    v102 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v111) >> 10) + 1) >> 1) & 0x1F) - 8;
    v88 = (double)v102 * -0.1963495408493621;
    Matrix2D::Rotate(v121, v88);
    v102 = *(uint32_t *)(*((uint32_t *)this + 328) + 1824) / 8;
    v89 = (float)v102;
    Matrix3x4::Translate(v121, v89);
    v112 = -v121[3];
    v115 = v121[3];
    v117 = v121[11];
    v113 = -v121[7];
    qmemcpy(v122, v121, sizeof(v122));
    v105 = v112;
    v116 = v121[7];
    v114 = -v121[11];
    v106 = v113;
    v107 = v114;
    Matrix3x3::Multiply(v122, &v105);
    if ( *((uint32_t *)this + 252) )
    v90 = -*((float *)this + 251);
    Matrix3x4::Translate(v121, v90);
    v43 = -1;
    if ( *((uint32_t *)this + 260) )
    v91 = -*((float *)this + 259);
    Matrix3x4::Translate(v122, v91);
    v43 = -1;
    v102 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 440, &v111) >> 10) + 1) >> 1) & 0x1F) - 8;
    v92 = -((double)v102 * -0.1963495408493621);
    Matrix3D::RotateZ(v122, v92);
    Matrix3x3::Multiply(v122, &v115);
    v45 = *((uint32_t *)this + 328);
    v46 = *v126 + *(uint32_t *)(v45 + 4576);
    v110 = *(uint32_t *)(v45 + 4580) + v126[1];
    v109 = v46;
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v111) >> 13) + 1) >> 1) & 3) == 0
    || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v102) >> 13) + 1) >> 1) & 3) == 3 )
    v98 = 0;
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 192) && *(uint32_t *)(*((uint32_t *)this + 328) + 196) )
    v47 = *((uint32_t *)this + 328);
    v48 = *(int (__thiscall ***)(void*377 *))this;
    v83 = v104;
    v78 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    inited = (float *)AudioConfig::InitDefault(v125);
    v50 = MultiplyMatrix3x4(v124, inited, v122);
    ((void (__thiscall *)(void*377 *, int, uint32_t, int, int, int *, int *, float *, int, int, uint32_t))v48[273])(
    this,
    v47 + 192,
    0,
    v43,
    v47 + 640,
    v127,
    &v109,
    v50,
    v78,
    v83,
    0);
    else
    v98 = 1;
    v51 = *((uint32_t *)this + 328);
    v52 = *(int (__thiscall ***)(void*377 *))this;
    v84 = v104;
    v79 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    v53 = (float *)AudioConfig::InitDefault(v124);
    v54 = MultiplyMatrix3x4(v125, v53, v121);
    result = ((int (__thiscall *)(void*377 *, int, int, int, int, int *, int *, float *, int, int, uint32_t))v52[273])(
    this,
    v51 + 184,
    v103,
    v43,
    v51 + 600,
    v127,
    &v109,
    v54,
    v79,
    v84,
    0);
    LOBYTE(result) = v98;
    if ( v98 )
    result = *((uint32_t *)this + 328) + 192;
    if ( *(uint32_t *)result )
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 196) )
    v55 = *((uint32_t *)this + 328);
    v56 = *(int (__thiscall ***)(void*377 *))this;
    v85 = v104;
    v80 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    v57 = (float *)AudioConfig::InitDefault(v124);
    v58 = MultiplyMatrix3x4(v125, v57, v122);
    return ((int (__thiscall *)(void*377 *, int, uint32_t, int, int, int *, int *, float *, int, int, uint32_t))v56[273])(
    this,
    v55 + 192,
    0,
    v43,
    v55 + 640,
    v127,
    &v109,
    v58,
    v80,
    v85,
    0);
    else if ( *(uint32_t *)(result + 192) && *(uint32_t *)(result + 196) )
    v105 = v121[3];
    v106 = v121[7];
    v107 = v121[11];
    v112 = -v121[3];
    v118 = v121[3];
    v119 = v121[7];
    v113 = -v121[7];
    v115 = v112;
    v114 = -v121[11];
    v120 = v121[11];
    v116 = v113;
    v117 = v114;
    Matrix3x3::Multiply(v121, &v115);
    v103 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v111) >> 10) + 1) >> 1) & 0x1F) - 8;
    v93 = (double)v103 * -0.1963495408493621;
    Matrix2D::Rotate(v121, v93);
    v103 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 440, &v111) >> 10) + 1) >> 1) & 0x1F) - 8;
    v94 = -((double)v103 * -0.1963495408493621);
    Matrix3D::RotateZ(v121, v94);
    Matrix3x3::Multiply(v121, &v118);
    v59 = *((uint32_t *)this + 328);
    v60 = *(uint32_t *)(v59 + 4576);
    v61 = *(uint32_t *)(v59 + 4580);
    v62 = v59;
    v63 = v126[1];
    v64 = *(int (__thiscall ***)(void*377 *))this;
    v109 = *v126 + v60;
    v110 = v61 + v63;
    v86 = v104;
    v81 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    v65 = (float *)AudioConfig::InitDefault(v124);
    v66 = MultiplyMatrix3x4(v125, v65, v121);
    return ((int (__thiscall *)(void*377 *, int, int, int, int, int *, int *, float *, int, int, uint32_t))v64[273])(
    this,
    v62 + 192,
    v102,
    v44,
    v62 + 640,
    v127,
    &v109,
    v66,
    v81,
    v86,
    0);
    else
    LOBYTE(result) = *(uint8_t *)(v35 + 5830);
    if ( (uint8_t)result )
    result = *((uint32_t *)this + 43);
    v67 = 0;
    if ( (result == 18 || *((uint32_t *)this + 45) == 18)
    && *((uint32_t *)this + 62) < *(uint32_t *)(v35 + 3848) + *(uint32_t *)(v35 + 3844) - 1 )
    v67 = 1;
    if ( result != 19 || (result = *((uint32_t *)this + 62), result <= 0) )
    if ( !v67 )
    qmemcpy(
    v122,
    (const void *)((const void *(__stdcall *)(float *))BuildingClass::BuildTurretTransform)(v124),
    sizeof(v122));
    v68 = (int)(dword_818CB0
    + (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v111) >> 10) + 1) >> 1) & 0x1F))
    % 32;
    v69 = (uint8_t *)*((uint32_t *)this + 352);
    v99 = v68 <= 16;
    if ( v68 <= 16 && v69 )
    if ( byte_818CB4 )
    v69[413] = 0;
    (*(void (__thiscall **)(uint8_t *, int *, int, uint32_t))(*(uint32_t *)v69 + 260))(
    v69,
    &DSurface_ViewBounds,
    1,
    0);
    v69[413] = 1;
    v70 = *((uint32_t *)this + 328);
    v71 = v70;
    v72 = *(uint32_t *)(v70 + 4576);
    v73 = *(uint32_t *)(v70 + 4580);
    v74 = v126[1];
    v75 = *(int (__thiscall ***)(void*377 *))this;
    v109 = *v126 + v72;
    v110 = v73 + v74;
    v87 = v104;
    v82 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108) + 133);
    v76 = (float *)AudioConfig::InitDefault(v124);
    v77 = MultiplyMatrix3x4(v125, v76, v122);
    result = ((int (__thiscall *)(void*377 *, int, uint32_t, int, int, int *, int *, float *, int, int, uint32_t))v75[273])(
    this,
    v71 + 192,
    0,
    -1,
    v71 + 580,
    v127,
    &v109,
    v77,
    v82,
    v87,
    0);
    LOBYTE(result) = v99;
    if ( !v99 && v69 )
    if ( byte_818CB4 )
    v69[413] = 0;
    result = (*(int (__thiscall **)(uint8_t *, int *, int, uint32_t))(*(uint32_t *)v69 + 260))(
    v69,
    &DSurface_ViewBounds,
    1,
    0);
    v69[413] = 1;
    return result;
}

void  BuildingClass::DrawVisible(void *this, int *a2, int *a3)
{
    int v4; // eax
    uint32_t *BuildLimit; // eax
    int Type; // eax
    int v7; // eax
    int v8; // eax
    uint32_t v9[2]; // [esp+Ch] [ebp-8h] BYREF
    (*(void (__thiscall **)(void *, uint32_t *))(*(uint32_t *)this + 440))(this, v9);
    if ( *((uint8_t *)this + 131)
    && ((unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    || ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & *((uint32_t *)this + 132)) != 0) )
    v4 = *a2 - 10;
    v9[1] = a2[1] + 10;
    v9[0] = v4;
    (*(void (__thiscall **)(void *, uint32_t *, int *, int *))(*(uint32_t *)this + 1112))(this, v9, a2, a3);
    if ( ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & *((uint32_t *)this + 132)) != 0
    && *((uint8_t *)this + 131) )
    if ( (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    BuildLimit = (uint32_t *)HouseClass::GetBuildLimit(
    *((uint32_t **)this + 135),
    *(uint32_t *)(*((uint32_t *)this + 328) + 3768),
    *(uint8_t *)(*((uint32_t *)this + 328) + 3278),
    0);
    else
    BuildLimit = (uint32_t *)*((uint32_t *)this + 329);
    if ( BuildLimit )
    Type = AbstractClass::GetType(BuildLimit);
    if ( Type )
    v7 = (*(int (__thiscall **)(int))(*(uint32_t *)Type + 132))(Type);
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)v7 + 152))(v7);
    DrawToSurfaceSHP(DSurface_Hidden_2, FileSystem_THEATER_PAL, v8, 0, a2, a3, 3584, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
}

// 0x0043E900
int  BuildingClass::GetZDrawOffset(#377 *this)
{
    int v2; // eax
    int v3; // eax
    int v4; // esi
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 464))(this);
    v3 = ZCoordToScreenY(v2);
    v4 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v4 + 5829) )
    return *(uint32_t *)(v4 + 4584) - v3;
    else
    return -v3;
}

int  BuildingClass::ComputeTargetAngle(#377 *this)
{
    int v1; // ebx
    int v2; // edi
    int *TargetCoords; // eax
    int v5; // edi
    int (__thiscall **vfptr0)(void*377 *, uint32_t); // edx
    int v7; // ebx
    int v8; // eax
    int (__thiscall **v9)(void*377 *, double *); // edx
    int *v10; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // eax
    int v14; // esi
    unsigned int v15; // ecx
    unsigned int v16; // eax
    uint32_t *v17; // eax
    int v18; // edi
    int v19; // ebx
    int v20; // esi
    int result; // eax
    double v22; // st7
    double v23; // st7
    uint32_t *v24; // eax
    int *v25; // eax
    int v26; // edx
    int *v27; // eax
    void *v28; // eax
    int v29; // ebx
    int *v30; // eax
    int v31; // edx
    uint32_t *v32; // eax
    int v33; // edi
    double v34; // st7
    char IsCloseEnoughToBuilding; // al
    double v36; // st7
    char v37; // al
    int v38; // [esp+24h] [ebp-64h]
    int v39; // [esp+24h] [ebp-64h]
    double v40; // [esp+2Ch] [ebp-5Ch]
    double v41; // [esp+2Ch] [ebp-5Ch]
    double v42; // [esp+30h] [ebp-58h]
    int v43; // [esp+38h] [ebp-50h]
    int v44[3]; // [esp+44h] [ebp-44h] BYREF
    double v45[2]; // [esp+50h] [ebp-38h] BYREF
    int v46; // [esp+64h] [ebp-24h]
    int v47; // [esp+68h] [ebp-20h]
    int v48; // [esp+6Ch] [ebp-1Ch]
    int v49; // [esp+70h] [ebp-18h] BYREF
    int v50; // [esp+74h] [ebp-14h]
    int v51; // [esp+78h] [ebp-10h]
    int v52[2]; // [esp+7Ch] [ebp-Ch] BYREF
    int v53; // [esp+84h] [ebp-4h]
    int savedregs; // [esp+88h] [ebp+0h] BYREF
    _WORD *v55; // [esp+90h] [ebp+8h]
    int v56; // [esp+94h] [ebp+Ch]
    if ( *(uint8_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) + 329) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( v56 )
    TargetCoords = TechnoClass::GetTargetCoords((int *)this, v52);
    v5 = *TargetCoords;
    vfptr0 = *(int (__thiscall ***)(void*377 *, uint32_t))this;
    v7 = TargetCoords[1];
    v53 = TargetCoords[2];
    v8 = vfptr0[254](this, 0);
    v9 = *(int (__thiscall ***)(void*377 *, double *))this;
    v51 = *(uint32_t *)(v8 + 12);
    v10 = (int *)v9[43](this, v45);
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = *((uint32_t *)this + 328);
    v50 = v12;
    v15 = *(uint32_t *)(v14 + 4576);
    v46 = v11;
    v51 += v13;
    v16 = *(uint32_t *)(v14 + 4580);
    v49 = v11;
    *(_QWORD *)&v45[0] = __PAIR64__(v16, v15);
    v17 = World::ToScreen((float *)TacticalClass_Instance, &v44[1], (int *)v45);
    v18 = v5 - (v46 + *v17);
    v19 = v7 - (v17[1] + v50);
    v46 = v18;
    v20 = v53 - v51;
    v47 = v19;
    v48 = v53 - v51;
    if ( v53 == v51 )
    *v55 = 0x4000;
    return (int)v55;
    else
    v44[1] = v18 * v18 + v19 * v19;
    v45[0] = Math::Sqrt((double)v44[1]);
    v22 = Math::Sqrt((double)v46 * (double)v46 + (double)v48 * (double)v48 + (double)v47 * (double)v47);
    v44[1] = Math::RoundToInt(v22);
    v45[0] = v45[0] / (double)v44[1];
    if ( v45[0] > 1.0 )
    v45[0] = 1.0;
    v23 = BuildingLight::CalcIntensity(v45[0]);
    LOWORD(v44[1]) = Math::RoundToInt(v23 * 16384.0 * 0.6366197723675814);
    result = (int)v55;
    if ( v20 < 0 )
    LOWORD(v44[1]) = 0x8000 - LOWORD(v44[1]);
    *(uint32_t *)v55 = v44[1];
    else
    *(uint32_t *)v55 = *ProgressTimer::GetValue((_WORD *)this + 440, v45);
    return (int)v55;
    else if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5827) )
    v24 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v56 + 72))(v56, v52);
    Cell::GetGroundHeight(v24);
    v25 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v56 + 72))(v56, &v49);
    v26 = v25[1];
    v46 = *v25;
    v47 = v26;
    v27 = (int *)(*(int (__thiscall **)(void*377 *, int *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    v52,
    0,
    0,
    0,
    0);
    v49 = *v27;
    v50 = v27[1];
    v51 = v27[2];
    Math::CalcAngle((double)v50 - (double)v47, (double)v46 - (double)v49);
    v42 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v28 = (void *)ObjectClass::DistanceTo(this, v56);
    v29 = TechnoClass::ComputeScanRange(v28, v42);
    v30 = (int *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 768))(this, v52, 0);
    v46 = *v30;
    v47 = v30[1];
    v31 = *(uint32_t *)v56;
    v48 = v30[2];
    v32 = (uint32_t *)(*(int (__thiscall **)(int, int *))(v31 + 72))(v56, v52);
    v33 = v32[2] - v48;
    LODWORD(v45[0]) = (*v32 - v46) * (*v32 - v46) + (v32[1] - v47) * (v32[1] - v47);
    v45[0] = (double)SLODWORD(v45[0]);
    v40 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v34 = Math::Sqrt(v45[0]);
    v38 = Math::RoundToInt(v34);
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0);
    if ( !ComputeMathFacingAngle(IsCloseEnoughToBuilding, v29, v38, v33, v40, &v44[1]) )
    v41 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v36 = Math::Sqrt(v45[0]);
    v39 = Math::RoundToInt(v36);
    v37 = TechnoClass::IsCloseEnoughToBuilding(this, 0);
    ComputeMathFacingAngle(v37, 10 * v29 / 8, v39, v33, v41, &v44[1]);
    *(uint32_t *)v55 = v44[1];
    return (int)v55;
    else
    *(uint32_t *)v55 = *TechnoClass::GetFiringAngle((int *)this, v1, (int)&savedregs, v2, (int *)v45, v56, v43);
    return (int)v55;
    return result;
}

int  BuildingClass::GetTurretAngle(#377 *this)
{
    int v2; // esi
    int *v3; // ecx
    int v4; // edi
    int *v5; // eax
    int v6; // eax
    uint32_t *v7; // eax
    int v8; // edx
    int *v9; // eax
    double v10; // st7
    int v12[3]; // [esp+24h] [ebp-18h] BYREF
    int v13; // [esp+30h] [ebp-Ch] BYREF
    int v14; // [esp+34h] [ebp-8h]
    int v15; // [esp+38h] [ebp-4h]
    int *v16; // [esp+40h] [ebp+4h]
    int v17; // [esp+44h] [ebp+8h]
    int v18; // [esp+44h] [ebp+8h]
    v15 = dword_89C850;
    v2 = g_BuildingClassPool;
    v3 = (int *)*((uint32_t *)this + 328);
    v4 = dword_89C84C;
    if ( v3[913] != 0xFFFF || v3[914] != 0xFFFF )
    v5 = World::ToScreen((float *)TacticalClass_Instance, v12, v3 + 913);
    LABEL_7:
    v2 = *v5;
    v4 = v5[1];
    v15 = 0;
    goto LABEL_8;
    v6 = v3[1145];
    v12[0] = v3[1144];
    v12[1] = v6;
    if ( v12[0] || v6 )
    v5 = World::ToScreen((float *)TacticalClass_Instance, &v13, v12);
    goto LABEL_7;
    LABEL_8:
    v7 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, v12);
    v8 = v7[1];
    v13 = v2 + *v7;
    v14 = v4 + v8;
    v9 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v17 + 72))(v17, v12);
    v18 = *v9;
    v10 = Math::CalcAngle((double)v14 - (double)v9[1], (double)*v9 - (double)v13);
    LOWORD(v18) = Math::RoundToInt((v10 - 1.570796326794897) * -10430.06004058427);
    *v16 = v18;
    return (int)v16;
}

int  BuildingClass::ProductionDisplayUpdate(#377 *this)
{
    void*377 *v1; // edi
    int result; // eax
    int v3; // eax
    int v4; // ebx
    int v5; // esi
    void *v6; // eax
    int FoundationWidth; // eax
    int v8; // ecx
    int FoundationHeight; // eax
    int v10; // ebp
    int v11; // esi
    int v12; // ecx
    int v13; // eax
    void *v14; // eax
    uint32_t *v15; // eax
    int v16; // ecx
    int v17; // ebp
    int v18; // ecx
    __int16 v19; // bx
    __int16 v20; // ax
    int v21; // edx
    int v22; // eax
    int v23; // esi
    __int16 v24; // bx
    __int16 v25; // di
    void *v26; // eax
    int v27; // edx
    int v28; // eax
    int v29; // eax
    int v30; // ebp
    int v31; // esi
    __int16 v32; // bx
    void *v33; // eax
    uint32_t *v34; // eax
    int v35; // esi
    void *v36; // eax
    int v37; // ecx
    int v38; // esi
    int v39; // eax
    int *v40; // eax
    int **v41; // ebp
    int *v42; // esi
    uint32_t *v43; // eax
    uint32_t *v44; // eax
    int v45; // edx
    int v46; // eax
    int v47; // eax
    int v48; // ecx
    int v49; // eax
    int v50; // ebx
    uint32_t *v51; // eax
    int v52; // ecx
    int v53; // ebp
    int v54; // ecx
    __int16 v55; // di
    __int16 v56; // ax
    int v57; // esi
    __int16 v58; // bx
    __int16 v59; // di
    void *v60; // eax
    int v61; // edx
    int v62; // ebp
    int v63; // edi
    int v64; // esi
    void *v65; // eax
    int v66; // eax
    int v67; // esi
    void*377 *v68; // eax
    uint32_t *v69; // eax
    int v70; // ecx
    int v71; // edx
    int v72; // ebx
    char *v73; // ecx
    int v74; // ebp
    bool v75; // zf
    int v76; // ebx
    int *v77; // ecx
    int v78; // esi
    int v79; // [esp+10h] [ebp-CCh]
    int v80; // [esp+14h] [ebp-C8h]
    int v81; // [esp+18h] [ebp-C4h]
    int v82; // [esp+2Ch] [ebp-B0h]
    void*377 *v83; // [esp+2Ch] [ebp-B0h]
    void*377 *v84; // [esp+2Ch] [ebp-B0h]
    void*377 *v85; // [esp+2Ch] [ebp-B0h]
    int v86; // [esp+2Ch] [ebp-B0h]
    int v87; // [esp+30h] [ebp-ACh] BYREF
    uint32_t *v88; // [esp+34h] [ebp-A8h]
    int j; // [esp+38h] [ebp-A4h]
    char v90; // [esp+3Fh] [ebp-9Dh]
    int i; // [esp+40h] [ebp-9Ch]
    __int16 v92[4]; // [esp+44h] [ebp-98h] BYREF
    void*377 *v93; // [esp+4Ch] [ebp-90h] BYREF
    int v94; // [esp+50h] [ebp-8Ch]
    int v95; // [esp+54h] [ebp-88h]
    int v96; // [esp+58h] [ebp-84h]
    int k; // [esp+5Ch] [ebp-80h]
    int v98; // [esp+60h] [ebp-7Ch]
    int v99; // [esp+64h] [ebp-78h]
    int v100; // [esp+68h] [ebp-74h]
    int v101; // [esp+6Ch] [ebp-70h] BYREF
    int v102; // [esp+70h] [ebp-6Ch] BYREF
    int v103; // [esp+74h] [ebp-68h] BYREF
    int v104; // [esp+78h] [ebp-64h] BYREF
    uint32_t v105[3]; // [esp+7Ch] [ebp-60h] BYREF
    uint32_t v106[3]; // [esp+88h] [ebp-54h] BYREF
    uint32_t v107[3]; // [esp+94h] [ebp-48h] BYREF
    uint32_t v108[3]; // [esp+A0h] [ebp-3Ch] BYREF
    uint32_t v109[3]; // [esp+ACh] [ebp-30h] BYREF
    char v110[12]; // [esp+B8h] [ebp-24h] BYREF
    char v111[12]; // [esp+C4h] [ebp-18h] BYREF
    int v112[3]; // [esp+D0h] [ebp-Ch] BYREF
    int v113; // [esp+E0h] [ebp+4h]
    v1 = this;
    v93 = this;
    if ( TechnoClass::UpdateProdWithSound(this, v113) )
    result = (*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)v1 + 440))(v1, &v101);
    *(uint32_t *)v92 = *(uint32_t *)result;
    switch ( v113 )
    case 0:
    MapClass::ApplyOverlayReveal(&MapClass_Instance, v92, (char *)v1);
    LOBYTE(result) = 1;
    break;
    case 1:
    case 3:
    v3 = *((uint32_t *)v1 + 328);
    v4 = 0;
    if ( *(uint32_t *)(v3 + 3672) )
    v5 = *(uint32_t *)v1;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, v92);
    if ( (*(int (__thiscall **)(void*377 *, void *, int, int, uint32_t, int))(v5 + 428))(v1, v6, -1, -1, 0, 1) )
    goto LABEL_33;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)v1 + 328));
    v8 = *((uint32_t *)v1 + 328);
    v88 = (uint32_t *)FoundationWidth;
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0);
    v10 = 0;
    v82 = FoundationHeight;
    v90 = 0;
    for ( i = 0; v10 < v82; i = v10 )
    v11 = 0;
    for ( j = 0; v11 < (int)v88; j = v11 )
    HIWORD(v100) = v10 + v92[1];
    v12 = *((uint32_t *)v1 + 135);
    LOWORD(v100) = v11 + v92[0];
    v13 = *((uint32_t *)v1 + 328);
    v87 = v100;
    v81 = v12;
    v80 = v13;
    v79 = *(uint32_t *)(v13 + 1660);
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87);
    if ( CellClass::IsPassable((int)v14, v79, v80, v81)
    && *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87) + 14) != *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 328) + 3672) + 660)
    && *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87) + 59) != 1 )
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87);
    v16 = v15[18];
    if ( v16 != -1 )
    v17 = *((uint32_t *)FactoryClass_Array + v16);
    v94 = v15[9];
    v18 = *(uint32_t *)(v17 + 664);
    v19 = *((unsigned __int8 *)v15 + 287) % v18;
    v20 = *((unsigned __int8 *)v15 + 287) / v18;
    v21 = *(uint32_t *)(v17 + 668);
    LOWORD(v94) = v94 - v19;
    HIWORD(v94) -= v20;
    v22 = 0;
    v99 = 0;
    if ( v21 > 0 )
    do
    v23 = 0;
    if ( v18 > 0 )
    v24 = HIWORD(v94) + v22;
    HIWORD(k) = HIWORD(v94) + v22;
    do
    HIWORD(v98) = v24;
    v25 = v23 + v94;
    LOWORD(v98) = v23 + v94;
    v103 = v98;
    *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v103) + 18) = -1;
    LOWORD(k) = v25;
    v102 = k;
    v26 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v102);
    BuildingClass::CreateDestructionCrater(v26);
    v18 = *(uint32_t *)(v17 + 664);
    ++v23;
    while ( v23 < v18 );
    v22 = v99;
    v1 = v93;
    v27 = *(uint32_t *)(v17 + 668);
    v99 = ++v22;
    while ( v22 < v27 );
    v10 = i;
    v11 = j;
    v28 = (*(int (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(*((uint32_t *)v1 + 328) + 3672) + 140))(
    *(uint32_t *)(*((uint32_t *)v1 + 328) + 3672),
    *((uint32_t *)v1 + 135));
    v107[2] = 0;
    v107[0] = ((__int16)v87 << 8) + 128;
    v107[1] = (SHIWORD(v87) << 8) + 128;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t))(*(uint32_t *)v28 + 216))(v28, v107, 0);
    if ( *((void*375 **)v1 + 135) == HouseClass_Player )
    v106[0] = ((__int16)v87 << 8) + 128;
    v106[1] = (SHIWORD(v87) << 8) + 128;
    v106[2] = 0;
    MapClass::RevealArea1(v106, 1, HouseClass_Player, 0, 0, 0, 1, 0);
    v109[0] = ((__int16)v87 << 8) + 128;
    v109[1] = (SHIWORD(v87) << 8) + 128;
    v109[2] = 0;
    MapClass::RevealArea1(v109, 1, HouseClass_Player, 0, 0, 0, 1, 1);
    v90 = 1;
    ++v11;
    FoundationHeight = v82;
    ++v10;
    i = 0;
    j = FoundationHeight + 2;
    if ( FoundationHeight + 2 > 0 )
    v29 = 0;
    v30 = (int)v88 + 2;
    do
    v31 = 0;
    if ( v30 > 0 )
    HIWORD(v94) = v29 - 1;
    v32 = v29 - 1;
    do
    LOWORD(v94) = v31 - 1;
    LOWORD(v83) = v92[0] + v31 - 1;
    HIWORD(v83) = v32 + v92[1];
    v93 = v83;
    v33 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93);
    BuildingClass::CreatePlacementCrater(v33);
    ++v31;
    while ( v31 < v30 );
    v29 = i;
    i = ++v29;
    while ( v29 < j );
    if ( !v90 )
    LABEL_33:
    TechnoClass::UpdateProdWithSound(v1, 0);
    goto LABEL_34;
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)v1 + 640))(v1, 3);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 248))(v1);
    LOBYTE(result) = 1;
    else if ( *(uint8_t *)(v3 + 5489) )
    v34 = __2_YAPAXI_Z(0xB0u);
    if ( v34 )
    Object::SpawnAtCell(
    v34,
    *(uint32_t *)(*((uint32_t *)v1 + 328) + 3668),
    v92,
    *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v1 + 135) + 52) + 184));
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)v1 + 640))(v1, 3);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 248))(v1);
    LOBYTE(result) = 1;
    else
    if ( v113 != 3 )
    v35 = *(uint32_t *)v1;
    v36 = CellCoord::To_CellObj(&MapClass_Instance, v92);
    result = (*(int (__thiscall **)(void*377 *, void *, int, int, uint32_t, int))(v35 + 428))(v1, v36, -1, -1, 0, 1);
    if ( result )
    goto LABEL_34;
    MapClass::FillRevealBuffer(&MapClass_Instance, v92, v1);
    v37 = *((uint32_t *)v1 + 328);
    v38 = *(uint32_t *)v1;
    v108[2] = 0;
    v108[1] = (v92[1] << 8) + 128;
    v108[0] = (v92[0] << 8) + 128;
    v39 = (*(int (__thiscall **)(int, char *, uint32_t *))(*(uint32_t *)v37 + 108))(v37, v110, v108);
    (*(void (__thiscall **)(void*377 *, int))(v38 + 436))(v1, v39);
    v40 = (int *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)v1 + 172))(v1, v105);
    v41 = (int **)((char *)v1 + 1372);
    v94 = *v40;
    v95 = v40[1];
    v96 = v40[2];
    do
    v42 = *v41;
    if ( *v41 )
    v43 = Matrix3x4::TransformCell(
    (float *)TacticalClass_Instance,
    v111,
    (int *)(v4 + *((uint32_t *)v1 + 328) + 3964));
    v44 = Coord::Subtract(v112, *v43 + v94, v95 + v43[1], v96 + v43[2]);
    v105[0] = *v44;
    v105[1] = v44[1];
    v45 = v44[2];
    v46 = *v42;
    v105[2] = v45;
    (*(void (__thiscall **)(int *, uint32_t *))(v46 + 436))(v42, v105);
    v4 += 68;
    ++v41;
    while ( v4 < 1428 );
    v47 = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)v1 + 328));
    v48 = *((uint32_t *)v1 + 328);
    v87 = v47;
    v49 = BuildingTypeClass::GetFoundationHeight(v48, 0);
    v98 = v49;
    i = 0;
    if ( v49 > 0 )
    do
    v50 = 0;
    for ( k = 0; v50 < v87; k = v50 )
    LOWORD(v84) = v50 + v92[0];
    HIWORD(v84) = i + v92[1];
    v93 = v84;
    v51 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93);
    v52 = v51[18];
    if ( v52 != -1 )
    v88 = 0;
    v53 = *((uint32_t *)FactoryClass_Array + v52);
    v94 = v51[9];
    v54 = *(uint32_t *)(v53 + 664);
    v55 = *((unsigned __int8 *)v51 + 287) % v54;
    v56 = *((unsigned __int8 *)v51 + 287) / v54;
    LOWORD(v94) = v94 - v55;
    HIWORD(v94) -= v56;
    if ( *(int *)(v53 + 668) > 0 )
    do
    v57 = 0;
    if ( v54 > 0 )
    v58 = HIWORD(v94) + (_WORD)v88;
    HIWORD(v99) = HIWORD(v94) + (_WORD)v88;
    do
    HIWORD(j) = v58;
    v59 = v57 + v94;
    LOWORD(j) = v57 + v94;
    v104 = j;
    *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v104) + 18) = -1;
    LOWORD(v99) = v59;
    v101 = v99;
    v60 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v101);
    BuildingClass::CreateDestructionCrater(v60);
    v54 = *(uint32_t *)(v53 + 664);
    ++v57;
    while ( v57 < v54 );
    v61 = *(uint32_t *)(v53 + 668);
    v88 = (uint32_t *)((char *)v88 + 1);
    while ( (int)v88 < v61 );
    v50 = k;
    ++v50;
    ++i;
    while ( i < v98 );
    v49 = v98;
    result = v49 + 2;
    v62 = 0;
    j = result;
    if ( result <= 0 )
    goto LABEL_92;
    v63 = v87 + 2;
    do
    v64 = 0;
    if ( v63 > 0 )
    HIWORD(v94) = v62 - 1;
    do
    LOWORD(v94) = v64 - 1;
    LOWORD(v85) = v92[0] + v64 - 1;
    HIWORD(v85) = v62 - 1 + v92[1];
    v93 = v85;
    v65 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v93);
    BuildingClass::CreatePlacementCrater(v65);
    ++v64;
    while ( v64 < v63 );
    result = j;
    ++v62;
    while ( v62 < result );
    LOBYTE(result) = 1;
    break;
    case 2:
    v93 = (void*377 *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 484))(v1);
    v66 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 444))(v1);
    v67 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)v1 + 1124))(v1, *(__int16 *)(v66 + 266));
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 352))(v1)
    || *((uint32_t *)v1 + 165)
    && (v1 ? (v68 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 44))(v1) == 6 ? v1 : 0) : (v68 = 0),
    *(void*377 **)(*((uint32_t *)v1 + 165) + 80) == v68) )
    LOWORD(v67) = Techno::StartInvulnerability(v67);
    *((_WORD *)v1 + 896) = v67;
    j = (unsigned __int16)v67;
    v88 = (uint32_t *)((char *)v1 + 1372);
    v86 = 21;
    do
    v69 = (uint32_t *)*v88;
    if ( *v88 )
    v70 = v69[50];
    if ( v70 && *(uint8_t *)(v70 + 860) )
    v71 = j;
    v69[53] = v93;
    v69[63] = v71;
    v72 = *((char *)v1 + 1773);
    if ( v72 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)v1 + 104))(v1, 0, 0) == 5 )
    LOBYTE(v72) = 16;
    v73 = (char *)v1 + 1372;
    v74 = 21;
    do
    if ( *(uint32_t *)v73 )
    *(uint8_t *)(*(uint32_t *)v73 + 376) = v72;
    v73 += 4;
    --v74;
    while ( v74 );
    v75 = v86 == 1;
    ++v88;
    --v86;
    while ( !v75 );
    v76 = *((char *)v1 + 1773);
    if ( v76 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)v1 + 104))(v1, 0, 0) == 5 )
    LOBYTE(v76) = 16;
    v77 = (int *)((char *)v1 + 1372);
    v78 = 21;
    do
    result = *v77;
    if ( *v77 )
    *(uint8_t *)(result + 376) = v76;
    ++v77;
    --v78;
    while ( v78 );
    goto LABEL_92;
    default:
    LABEL_92:
    LOBYTE(result) = 1;
    break;
    else
    LABEL_34:
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::ProcessSpreadEffect(#377 *this)
{
    char v2; // bl
    int v3; // eax
    char *v4; // eax
    int v5; // eax
    char v6; // bl
    char *v7; // edi
    int v8; // ebp
    int v9; // ecx
    int v10; // edi
    int v11; // ecx
    char *v12; // eax
    char *v13; // edi
    int v14; // edx
    int v15; // eax
    int v16; // eax
    int v17; // ecx
    int result; // eax
    int v19; // eax
    int Member81; // ebx
    int v21; // edi
    int v22; // eax
    unsigned int v23; // eax
    int v24; // edx
    uint32_t *v25; // edi
    char *ProductionTimeMult; // eax
    int v27; // eax
    char *v28; // edi
    int v29; // ebx
    int v30; // edx
    int i; // edx
    int v32; // eax
    int v33; // ecx
    int v34; // eax
    int v35; // edi
    int v36; // edx
    int v37; // eax
    int v38; // ecx
    int v39; // ebx
    int v40; // ebp
    _WORD *v41; // eax
    int v42; // edi
    _WORD *v43; // eax
    int v44; // eax
    __int16 *v45; // eax
    int v46; // ecx
    int v47; // eax
    int v48; // ebx
    int v49; // edi
    int *v50; // eax
    char *v51; // ecx
    int v52; // edx
    int (__thiscall **vfptr0)(void*377 *, uint8_t *); // eax
    uint32_t *v54; // eax
    int v55; // ecx
    int v56; // edx
    int v57; // eax
    void **v58; // eax
    void **v59; // eax
    void **v60; // eax
    char v61; // [esp+13h] [ebp-39h]
    int v62; // [esp+14h] [ebp-38h]
    int v63; // [esp+18h] [ebp-34h]
    int v64; // [esp+1Ch] [ebp-30h] BYREF
    int v65; // [esp+20h] [ebp-2Ch] BYREF
    int v66; // [esp+24h] [ebp-28h] BYREF
    char v67[4]; // [esp+28h] [ebp-24h] BYREF
    int v68[2]; // [esp+2Ch] [ebp-20h] BYREF
    int v69; // [esp+34h] [ebp-18h] BYREF
    char *Parachute; // [esp+38h] [ebp-14h]
    int v71; // [esp+3Ch] [ebp-10h]
    char v72[12]; // [esp+40h] [ebp-Ch] BYREF
    v2 = (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 18
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 19;
    v3 = *((uint32_t *)this + 328);
    if ( v2 == *((uint8_t *)this + 1736) )
    if ( *(uint32_t *)(v3 + 3712) != -1 || *(uint32_t *)(v3 + 3716) != -1 )
    v69 = *((uint32_t *)this + 39);
    Parachute = (char *)*((uint32_t *)this + 40);
    v71 = *((uint32_t *)this + 41);
    StartAudioController((int)&v69, (int)this + 1716);
    else
    if ( *(uint32_t *)(v3 + 3712) != -1 || *(uint32_t *)(v3 + 3716) != -1 )
    AudioFile::Stop((uint32_t *)this + 429);
    v4 = (char *)*((uint32_t *)this + 40);
    v69 = *((uint32_t *)this + 39);
    Parachute = v4;
    v5 = *((uint32_t *)this + 328);
    v71 = *((uint32_t *)this + 41);
    if ( v2 )
    StartAudioControllerAt(*(uint32_t *)(v5 + 3712), (int)&v69, (int)this + 1716);
    else
    StartAudioControllerAt(*(uint32_t *)(v5 + 3716), (int)&v69, (int)this + 1716);
    Animation::UpdateBuildingAnimations((int)this);
    *((uint8_t *)this + 1736) = v2;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5499) )
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].ChronoSparkle1 )
    v6 = 1;
    goto LABEL_22;
    else if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut )
    v6 = 1;
    goto LABEL_22;
    v6 = 0;
    LABEL_22:
    if ( v6 != *((uint8_t *)this + 1512) )
    if ( v6 )
    CreateDominatorDestructionEffects(this);
    else
    v7 = (char *)this + 1480;
    v8 = 8;
    do
    if ( *(uint32_t *)v7 )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)v7 + 248))(*(uint32_t *)v7);
    *(uint32_t *)v7 = 0;
    v7 += 4;
    --v8;
    while ( v8 );
    *((uint8_t *)this + 1512) = v6;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3233) )
    *((uint32_t *)this + 296) = TimerClass::Active((int)this + 904);
    else
    *((uint32_t *)this + 296) = 0;
    v9 = *((uint32_t *)this + 158);
    if ( v9 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v9 + 92))(v9);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 468))(this)
    || (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 472))(this) )
    v46 = *((uint32_t *)this + 328);
    v47 = *(uint32_t *)(v46 + 5504);
    if ( v47 && RulesClass_Instance->PrerequisiteTech[2] )
    v48 = 0;
    if ( v47 > 0 )
    v49 = 5512;
    do
    if ( !(((int)CurrentFrame + v48) % 24) && RulesClass_Instance->PrerequisiteTech[2] )
    v50 = World::ToScreen((float *)TacticalClass_Instance, v68, (int *)(v49 + v46));
    v51 = (char *)v50[1];
    v52 = *v50;
    vfptr0 = *(int (__thiscall ***)(void*377 *, uint8_t *))this;
    Parachute = v51;
    v69 = v52;
    v71 = 0;
    v54 = (uint32_t *)vfptr0[43](this, v72);
    v55 = v69 + *v54;
    v56 = v54[1];
    v57 = v71 + v54[2];
    v69 = v55;
    Parachute += v56;
    v71 = v57;
    v58 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v58 )
    v59 = AnimClass::ctor(
    v58,
    (void *)RulesClass_Instance->PrerequisiteTech[2],
    &v69,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v59 = 0;
    v59[64] = (void *)-200;
    v46 = *((uint32_t *)this + 328);
    ++v48;
    v49 += 8;
    while ( v48 < *(uint32_t *)(v46 + 5504) );
    else if ( !((int)CurrentFrame % 24) )
    if ( RulesClass_Instance->PrerequisiteTech[2] )
    v60 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v60 )
    v69 = *((uint32_t *)this + 39);
    Parachute = (char *)*((uint32_t *)this + 40);
    v71 = *((uint32_t *)this + 41);
    AnimClass::ctor(v60, (void *)RulesClass_Instance->PrerequisiteTech[2], &v69, 0, 1, (void *)0x600, 0, 0);
    result = *((uint32_t *)this + 173);
    if ( result )
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return result;
    v10 = *((uint32_t *)this + 436);
    v11 = *((uint32_t *)this + 438);
    v12 = (char *)this + 1744;
    if ( v10 != -1 )
    if ( (int)CurrentFrame - v10 >= v11 )
    goto LABEL_46;
    v11 -= (int)CurrentFrame - v10;
    if ( v11 == 1 )
    v13 = Parachute;
    *(uint32_t *)v12 = CurrentFrame;
    *((uint32_t *)this + 437) = v13;
    *((uint32_t *)this + 438) = 0;
    v14 = *(uint32_t *)(*((uint32_t *)this + 328) + 5472);
    *(uint32_t *)v12 = CurrentFrame;
    *((uint32_t *)this + 437) = Parachute;
    *((uint32_t *)this + 438) = v14;
    if ( !*(uint8_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 52) + 422) )
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    v15 = *(uint32_t *)(*((uint32_t *)this + 328) + 5468);
    if ( v15 <= 0 )
    HouseClass::ProcessPowerDrain(*((uint32_t *)this + 135), -v15);
    else
    HouseClass::AddPower(*((uint32_t **)this + 135), *(uint32_t *)(*((uint32_t *)this + 328) + 5468));
    LABEL_46:
    v16 = *((uint32_t *)this + 165);
    if ( v16 && *(void*377 **)(v16 + 80) == this )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 292))(this, 2);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5816) )
    v17 = *((uint32_t *)this + 173);
    if ( v17 )
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v17 + 84))(v17) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    BuildingClass::UpdateAnimFrames((int)this);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 512))(this)
    && *((uint32_t *)this + 333)
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this) )
    *((uint8_t *)this + 1757) = 0;
    MovementAI::Begin((int *)this);
    LOBYTE(result) = *((uint8_t *)this + 144);
    if ( !(uint8_t)result )
    return result;
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285)
    && TechnoClass::GetMember81(this) > 0 )
    ++*((uint32_t *)this + 82);
    if ( !*((uint32_t *)this + 191) )
    v19 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v19 + 5825) && !*(uint8_t *)(v19 + 5826) )
    *((uint32_t *)this + 191) = *(uint32_t *)(v19 + 1668);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 1 )
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    if ( (int)CurrentFrame - *((uint32_t *)this + 72) > RulesClass_Instance->AIIonCannonEngineerValue[0] + 5 )
    ((void (__stdcall *)(uint32_t))TechnoClass::GattlingValueRateDown_GattlingRateDownDelay)(*(uint32_t *)(*((uint32_t *)this + 328) + 3344));
    Member81 = TechnoClass::GetMember81(this);
    v21 = BuildingClass::checkPlacement(this);
    if ( v21 > 0 )
    v22 = Audio::IsLoud((float *)this + 84)
    ? *(uint32_t *)(*((uint32_t *)this + 328) + 4 * v21 + 3312)
    : *(uint32_t *)(*((uint32_t *)this + 328) + 4 * v21 + 3288);
    if ( Member81 < v22 )
    TechnoClass::SetSpread(this, v21 - 1);
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285)
    && TechnoClass::GetMember81(this) > 0 )
    ++*((uint32_t *)this + 82);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 512))(this)
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this) )
    *((uint8_t *)this + 1757) = 0;
    v23 = *((uint32_t *)this + 334);
    if ( v23 != -1 )
    if ( *((uint32_t *)this + 333) != v23 )
    v24 = *((uint32_t *)this + 328);
    *((uint32_t *)this + 333) = v23;
    v25 = (uint32_t *)(v24 + 12 * v23 + 3844);
    if ( v23 < 2 )
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, *(uint32_t *)(v24 + 12 * v23 + 3852));
    else
    ProductionTimeMult = *(char **)(v24 + 12 * v23 + 3852);
    *((uint32_t *)this + 64) = CurrentFrame;
    *((uint32_t *)this + 65) = Parachute;
    *((uint32_t *)this + 66) = ProductionTimeMult;
    *((uint32_t *)this + 67) = ProductionTimeMult;
    *((uint32_t *)this + 62) = *v25;
    *((uint32_t *)this + 334) = -1;
    v27 = *((uint32_t *)this + 27);
    if ( v27 != *((uint32_t *)this + 337) )
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    v27 = *((uint32_t *)this + 27);
    *((uint32_t *)this + 337) = v27;
    if ( !v27 )
    v28 = (char *)this + 1480;
    v29 = 8;
    do
    if ( *(uint32_t *)v28 )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)v28 + 248))(*(uint32_t *)v28);
    *(uint32_t *)v28 = 0;
    v28 += 4;
    --v29;
    while ( v29 );
    v30 = *((uint32_t *)this + 330);
    result = *((uint32_t *)this + 332);
    if ( v30 != -1 )
    if ( (int)CurrentFrame - v30 >= result )
    LABEL_98:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 212))(this);
    ((void (__stdcall *)(uint32_t))BuildingClass::EjectCrew)(*((uint32_t *)this + 336));
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    return ((int (__thiscall *)(void*377 *))BuildingClass::AfterDestruction)(this);
    result -= (int)CurrentFrame - v30;
    if ( result )
    return result;
    goto LABEL_98;
    BuildingClass::UpdatePrism((int *)this);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5493) )
    for ( i = *((uint32_t *)this + 415) - 1; i >= 0; --i )
    if ( *(void*377 **)(*(uint32_t *)(*((uint32_t *)this + 412) + 4 * i) + 692) != this )
    v32 = *((uint32_t *)this + 415);
    if ( i < v32 )
    v33 = v32 - 1;
    v34 = i;
    for ( *((uint32_t *)this + 415) = v33;
    v34 < *((uint32_t *)this + 415);
    *(uint32_t *)(*((uint32_t *)this + 412) + 4 * v34 - 4) = *(uint32_t *)(*((uint32_t *)this + 412) + 4 * v34) )
    ++v34;
    v35 = *((uint32_t *)this + 415);
    *((uint8_t *)this + 1633) = v35 >= 3
    || HouseClass::GetPowerRatio((int *)*((uint32_t *)this + 135)) == 1.0
    && *((uint8_t *)this + 1632)
    && v35 >= 1;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5499) )
    BuildingClass::ProcessStructureAbandoned((int)this);
    BuildingClass::ProcessActiveAnimation(this);
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    ProcessAutoProduction(this);
    if ( !*((uint8_t *)this + 1759) )
    goto LABEL_138;
    v36 = *((uint32_t *)this + 330);
    v37 = *((uint32_t *)this + 332);
    if ( v36 != -1 )
    if ( (int)CurrentFrame - v36 >= v37 )
    LABEL_121:
    v38 = *((uint32_t *)this + 328);
    v66 = *((uint32_t *)this + 27);
    if ( *(uint8_t *)(v38 + 5814) )
    v61 = 0;
    v39 = -2;
    do
    v40 = -2;
    do
    v41 = (_WORD *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 440))(this, v67);
    HIWORD(v62) = v39 + v41[1];
    LOWORD(v62) = *v41 + v40;
    v64 = v62;
    v42 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v64) + 14);
    v43 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, v68);
    HIWORD(v63) = v39 + v43[1];
    LOWORD(v63) = *v43 + v40;
    v65 = v63;
    v44 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v65) + 17);
    if ( v42 >= g_TerrainBridgeIndex && v42 < g_TerrainBridgeIndex + 16 || v44 >= 74 && v44 <= 101 )
    v61 = 1;
    ++v40;
    while ( v40 < 3 );
    ++v39;
    while ( v39 < 3 );
    v45 = (__int16 *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, v68);
    if ( v61 )
    MapClass::ApplyTerrainDamage(&MapClass_Instance, v45);
    else
    result = ((int (__stdcall *)(__int16 *))TerrainClass::ProcessSlope)(v45);
    *((uint8_t *)this + 1759) = 0;
    *((uint32_t *)this + 336) = 0;
    else
    result = (*(int (__thiscall **)(void*377 *, int *, uint32_t, int, uint32_t, int, uint32_t, uint32_t))(*(uint32_t *)this + 364))(
    this,
    &v66,
    0,
    RulesClass_Instance->SilverCrate[5],
    *((uint32_t *)this + 336),
    1,
    0,
    0);
    LOBYTE(result) = *((uint8_t *)this + 144);
    if ( !(uint8_t)result )
    return result;
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 292))(this, 2);
    goto LABEL_138;
    v37 -= (int)CurrentFrame - v36;
    if ( !v37 )
    goto LABEL_121;
    LABEL_138:
    result = *((uint32_t *)this + 173);
    if ( result )
    result = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 940))(this, *((uint32_t *)this + 173));
    if ( !(uint8_t)result )
    if ( (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 173) + 44))(*((uint32_t *)this + 173)) != 2 )
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    result = (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 173) + 80))(*((uint32_t *)this + 173));
    if ( (uint8_t)result )
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return result;
}

int  BuildingClass::Unlimbo_UnitDeliveryFix(#377 *this)
{
    int *v1; // ebp
    int v3; // edi
    void *v4; // eax
    int v5; // eax
    int v6; // ebx
    int v7; // ecx
    void *v8; // eax
    int v9; // ecx
    void*375 *v10; // edx
    void*375 *v11; // ecx
    int v12; // edx
    bool v13; // zf
    int v14; // ecx
    void*375 *v15; // edx
    _WORD *i; // ebx
    __int16 v17; // dx
    __int16 *v18; // edi
    void*375 *v19; // edx
    int v20; // eax
    void*375 *v21; // ecx
    int v22; // eax
    uint32_t *v23; // eax
    int v24; // ebp
    uint8_t *v25; // eax
    int v26; // edi
    void *v27; // eax
    int result; // eax
    int v29; // edi
    int v30; // eax
    int v31; // edi
    int v32; // ebx
    int v33; // eax
    int v34; // ebx
    char *v35; // ebp
    int v36; // edx
    __int16 v37; // cx
    uint32_t *v38; // eax
    uint32_t *v39; // eax
    uint32_t *v40; // edi
    _WORD *j; // edi
    int v42; // eax
    int FoundationWidth; // ebx
    int v44; // ecx
    int v45; // kr18_4
    int v46; // eax
    int v47; // ebx
    int v48; // edi
    __int16 v49; // bp
    uint8_t *v50; // eax
    char v51; // al
    uint32_t *v52; // edi
    uint32_t *v53; // eax
    int *v54; // eax
    uint32_t *v55; // eax
    int v56; // eax
    int *v57; // eax
    int v58; // ebx
    void *v59; // ebp
    int v60; // edx
    int v61; // edi
    int v62; // edx
    int v63; // eax
    void *v64; // eax
    int v65; // eax
    RulesClass *v66; // eax
    int v67; // edi
    void **v68; // eax
    void **v69; // eax
    void **v70; // eax
    void **v71; // eax
    int v72; // ecx
    int v73; // edi
    void **v74; // eax
    void **v75; // eax
    int v76; // ecx
    int v77; // edi
    void **v78; // eax
    void **v79; // eax
    int *v80; // eax
    int *v81; // eax
    int v82; // edx
    int v83; // eax
    int v84; // edx
    uint32_t *v85; // ecx
    uint32_t *v86; // edi
    int v87; // ecx
    int v88; // eax
    int v89; // eax
    int v90; // edx
    uint32_t *v91; // edi
    int v92; // ecx
    int v93; // eax
    int v94; // eax
    int v95; // edx
    uint32_t *v96; // edi
    int v97; // ecx
    int v98; // eax
    int v99; // eax
    int v100; // edx
    int v101; // eax
    uint32_t *v102; // edi
    int v103; // ecx
    int v104; // eax
    int v105; // eax
    int v106; // edx
    uint32_t *v107; // edi
    int v108; // ecx
    int v109; // eax
    int v110; // eax
    int v111; // edx
    int v112; // eax
    uint32_t *v113; // edi
    int v114; // ecx
    int v115; // eax
    int v116; // eax
    int v117; // edx
    uint32_t *v118; // edi
    int v119; // ecx
    int v120; // eax
    int v121; // eax
    int v122; // edx
    uint32_t *v123; // edi
    int v124; // ecx
    int v125; // eax
    int v126; // eax
    int v127; // edx
    uint32_t *v128; // edi
    int v129; // ecx
    int v130; // eax
    int v131; // eax
    int v132; // edx
    uint32_t *v133; // edi
    int v134; // ecx
    int v135; // eax
    int v136; // eax
    int v137; // edx
    uint32_t *v138; // edi
    int v139; // ecx
    int v140; // eax
    int v141; // eax
    int v142; // edx
    int v143; // ecx
    int v144; // [esp-8h] [ebp-58h]
    int v145; // [esp-4h] [ebp-54h]
    int v146; // [esp+0h] [ebp-50h]
    int v147; // [esp+4h] [ebp-4Ch]
    int v148; // [esp+8h] [ebp-48h]
    __int16 v149; // [esp+Ch] [ebp-44h]
    bool v150; // [esp+1Fh] [ebp-31h]
    int v151; // [esp+20h] [ebp-30h] BYREF
    unsigned int v152; // [esp+24h] [ebp-2Ch] BYREF
    unsigned int v153; // [esp+28h] [ebp-28h] BYREF
    uint32_t v154[3]; // [esp+2Ch] [ebp-24h] BYREF
    int v155; // [esp+38h] [ebp-18h] BYREF
    int v156; // [esp+3Ch] [ebp-14h]
    int v157; // [esp+40h] [ebp-10h]
    int v158[3]; // [esp+44h] [ebp-Ch] BYREF
    int *v159; // [esp+54h] [ebp+4h] BYREF
    int v160; // [esp+58h] [ebp+8h] BYREF
    v1 = v159;
    v3 = *(uint32_t *)this;
    v4 = Coord::To_Cell(&MapClass_Instance, v159);
    v5 = (*(int (__thiscall **)(void*377 *, void *, int, int, uint32_t, int))(v3 + 428))(this, v4, -1, -1, 0, 1);
    LOBYTE(v6) = v5 == 0;
    v150 = v5 == 0;
    if ( !v5 )
    v7 = *((uint32_t *)this + 328);
    if ( v7 == RulesClass_Instance->NSGates[1] )
    v8 = Coord::To_Cell(&MapClass_Instance, v1);
    v9 = *((uint32_t *)v8 + 20);
    v10 = 0;
    if ( v9 >= 0 )
    v10 = *(void*375 **)&HouseClass_Array->gap0[4 * v9];
    v11 = (void*375 *)*((uint32_t *)this + 135);
    if ( v10 == v11 )
    v12 = *((uint32_t *)v8 + 17);
    if ( v12 == 2 )
    LABEL_14:
    BuildingClass::Capture(v11, (__int16 *)v8 + 18, 1);
    goto LABEL_33;
    v13 = v12 == 0;
    LABEL_13:
    if ( !v13 )
    goto LABEL_33;
    goto LABEL_14;
    else if ( *(uint32_t *)(v7 + 3668) )
    v8 = Coord::To_Cell(&MapClass_Instance, v1);
    v14 = *((uint32_t *)v8 + 20);
    v15 = 0;
    if ( v14 >= 0 )
    v15 = *(void*375 **)&HouseClass_Array->gap0[4 * v14];
    v11 = (void*375 *)*((uint32_t *)this + 135);
    if ( v15 == v11 )
    v13 = *((uint32_t *)v8 + 17) == *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 328) + 3668) + 660);
    goto LABEL_13;
    else if ( *(uint8_t *)(v7 + 5815) )
    LOWORD(v151) = *v1 / 256;
    HIWORD(v151) = v1[1] / 256;
    for ( i = (_WORD *)(*(int (__thiscall **)(int, int))(*(uint32_t *)v7 + 144))(v7, 1);
    *i != 0x7FFF || i[1] != 0x7FFF;
    i += 2 )
    v17 = HIWORD(v151) + i[1];
    LOWORD(v152) = v151 + *i;
    HIWORD(v152) = v17;
    v153 = v152;
    v18 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v153);
    v19 = 0;
    v20 = *((uint32_t *)v18 + 20);
    if ( v20 >= 0 )
    v19 = *(void*375 **)&HouseClass_Array->gap0[4 * v20];
    v21 = (void*375 *)*((uint32_t *)this + 135);
    if ( v19 == v21 )
    v22 = *((uint32_t *)v18 + 17);
    if ( v22 == 2 || !v22 || v22 == 26 )
    BuildingClass::Capture(v21, v18 + 18, 1);
    v23 = Cell::IsBridge(v18);
    if ( v23 && *(uint8_t *)(v23[328] + 5823) )
    v24 = (*(int (__thiscall **)(uint32_t *))(*v23 + 56))(v23);
    if ( v24 == (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this) )
    v153 = *((uint32_t *)v18 + 9);
    BuildingClass::TraverseBridgeSegments((__int16 *)&v153);
    v1 = v159;
    LOBYTE(v6) = v150;
    LABEL_33:
    v25 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v25[5489] )
    v26 = *(uint32_t *)this;
    v27 = Coord::To_Cell(&MapClass_Instance, v1);
    result = (*(int (__thiscall **)(void*377 *, void *, int, int, uint32_t, int))(v26 + 428))(this, v27, -1, -1, 0, 1);
    if ( !result )
    result = (*(int (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(*((uint32_t *)this + 328) + 3668) + 140))(
    *(uint32_t *)(*((uint32_t *)this + 328) + 3668),
    *((uint32_t *)this + 135));
    if ( result )
    result = (*(int (__thiscall **)(int, int *, uint32_t))(*(uint32_t *)result + 216))(result, v1, 0);
    if ( (uint8_t)result )
    v29 = *((uint32_t *)this + 135);
    *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v1) + 20) = *(uint32_t *)(v29 + 48);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    v1,
    *(uint32_t *)(*((uint32_t *)this + 328) + 1512),
    *((void*375 **)this + 135),
    0,
    0,
    0,
    1,
    0);
    MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    v1,
    *(uint32_t *)(*((uint32_t *)this + 328) + 1512),
    *((void*375 **)this + 135),
    0,
    0,
    0,
    1,
    1);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    LOBYTE(result) = 1;
    return result;
    goto LABEL_46;
    if ( v25[3720] )
    v30 = *v1;
    v155 = 0;
    v156 = 0;
    LOWORD(v159) = v30 / 256;
    HIWORD(v159) = v1[1] / 256;
    result = BuildingClass::updateSellBack(&MapClass_Instance, (__int16 *)&v159, &v155);
    v31 = result;
    if ( !result )
    goto LABEL_46;
    result = (*(int (__thiscall **)(int))(*(uint32_t *)result + 44))(result);
    if ( result != 6 )
    goto LABEL_46;
    result = *((uint32_t *)this + 135);
    v32 = *((uint32_t *)this + 328);
    if ( result != *(uint32_t *)(v31 + 540) )
    goto LABEL_46;
    result = _strcmpi((const void *)(v32 + 3720), (const void *)(*(uint32_t *)(v31 + 1312) + 36));
    if ( result )
    goto LABEL_46;
    result = *(uint32_t *)(v32 + 5884);
    if ( result == -1 )
    result = *(uint32_t *)(v31 + 1312);
    if ( *(char *)(v31 + 1794) < *(uint32_t *)(result + 5344) )
    LABEL_49:
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    v33 = *((uint32_t *)this + 328);
    v34 = *(uint32_t *)(v33 + 5884);
    if ( v34 == -1 )
    v34 = 1;
    v35 = (char *)(*(uint32_t *)(v31 + 1312) + 68 * *(char *)(v31 + 1794) + 3916);
    if ( _strcmpi(v35, (const void *)(v33 + 504)) )
    strncpy(v35, (const char *)(*((uint32_t *)this + 328) + 504), 0x10u);
    for ( ; v34; --v34 )
    UpdateBuildingActiveAnim(v31, v36);
    *(uint32_t *)(v31 + 4 * *(char *)(v31 + 1794) + 1512) = *((uint32_t *)this + 328);
    SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(*((void*375 **)this + 135));
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5987) )
    HouseClass::AcquiredThreatNode(*((uint8_t **)this + 135));
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    LOBYTE(result) = 1;
    return result;
    else if ( result <= 0 || result > 3 )
    goto LABEL_46;
    if ( *(uint8_t *)(v31 + 1794) )
    LABEL_46:
    LOBYTE(result) = 0;
    return result;
    goto LABEL_49;
    if ( v25[5823] )
    LOBYTE(v37) = 0;
    HIBYTE(v37) = v160;
    LOWORD(v153) = v37;
    if ( (((unsigned __int8)(v153 >> 12) + 1) & 6) == 4 )
    *((uint32_t *)this + 390) = 8;
    else
    *((uint32_t *)this + 390) = 12;
    if ( (uint8_t)v6 )
    if ( v25[5822] )
    *((uint32_t *)this + 390) = 0;
    LOWORD(v152) = *v1 / 256;
    HIWORD(v152) = v1[1] / 256;
    v153 = v152;
    v38 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v153);
    v39 = Cell::IsBridge(v38);
    v40 = v39;
    if ( v39 )
    if ( *(uint8_t *)(v39[328] + 5823) )
    v6 = (*(int (__thiscall **)(uint32_t *))(*v39 + 56))(v39);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this) == v6 )
    (*(void (__thiscall **)(uint32_t *))(*v40 + 248))(v40);
    if ( !TechnoClass::FinishDeploy((int *)this, (unsigned __int8)v6, v1, v160, v149) )
    goto LABEL_46;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5831) )
    result = *((uint32_t *)this + 135);
    *(uint8_t *)(result + 22264) = 1;
    if ( *((uint8_t *)this + 144) )
    if ( GameMode_Current[0]
    && !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && !*(uint8_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 52) + 422) )
    *((uint8_t *)this + 1739) = 1;
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0 )
    v160 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, unsigned int *))(*(uint32_t *)this + 440))(this, &v152);
    for ( j = (_WORD *)(*(int (__thiscall **)(uint32_t, uint32_t))(**((uint32_t **)this + 328) + 144))(
    *((uint32_t *)this + 328),
    0); *j != 0x7FFF || j[1] != 0x7FFF; j += 2 )
    v153 = *CellStruct::Add(j, &v151, &v160);
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v153) + 80) & 0x400000) == 0 )
    goto LABEL_84;
    BuildingClass::CreateFoggedObjects((int *)this, 0, 0, 0);
    LABEL_84:
    v42 = *((uint32_t *)this + 328);
    if ( (!*(uint32_t *)(v42 + 1032) || !*(uint8_t *)(v42 + 1516))
    && !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this) )
    MarkBuildingFoundationCells((int *)this, 0);
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328));
    v44 = BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) + 2;
    v45 = *v1;
    v151 = v44;
    LOWORD(v154[0]) = v45 / 256;
    HIWORD(v154[0]) = v1[1] / 256;
    v46 = 0;
    v152 = 0;
    if ( v44 > 0 )
    v47 = FoundationWidth + 2;
    do
    v48 = 0;
    if ( v47 > 0 )
    LOWORD(v155) = LOWORD(v154[0]) - 1;
    HIWORD(v155) = HIWORD(v154[0]) - 1;
    v49 = LOWORD(v154[0]) - 1;
    HIWORD(v160) = v46 + HIWORD(v154[0]) - 1;
    do
    LOWORD(v160) = v48 + v49;
    v153 = v160;
    v50 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v153);
    ++v48;
    ++v50[290];
    while ( v48 < v47 );
    v1 = v159;
    v44 = v151;
    v46 = v152;
    v152 = ++v46;
    while ( v46 < v44 );
    BuildingClass::CalcExitCoords(*((int **)this + 135));
    BuildingClass::IncrementOccupantTypeCounter(*((uint32_t **)this + 135), this);
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    v51 = *((uint8_t *)this + 1051);
    *((uint32_t *)this + 337) = 0;
    if ( !v51 && (*((uint8_t *)Coord::To_Cell(&MapClass_Instance, v1) + 300) & 0x10) != 0 || GameMode_Current[0] )
    (*(void (__thiscall **)(void*377 *, void*375 *))(*(uint32_t *)this + 408))(this, HouseClass_Player);
    else if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3636) )
    if ( !*((uint32_t *)this + 389) )
    v52 = __2_YAPAXI_Z(0x4Cu);
    if ( v52 )
    v53 = (uint32_t *)*((uint32_t *)this + 328);
    v148 = v53[912];
    v147 = v53[911];
    v146 = v53[910];
    v145 = v53[909];
    v144 = v53[908];
    v54 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, v158);
    v55 = LightSourceClass::Construct(v52, *v54, v54[1], v54[2], v144, v145, v146, v147, v148);
    else
    v55 = 0;
    *((uint32_t *)this + 389) = v55;
    Trigger::EnableOnce(*((uint8_t **)this + 389), 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822)
    && !IKnowWhatImDoing
    && *((uint8_t *)this + 144)
    && !*((uint8_t *)this + 129) )
    BuildingClass::DemolishBridge(this);
    BuildingClass::DemolishBridge(this);
    BuildingClass::DemolishBridge(this);
    BuildingClass::DemolishBridge(this);
    BuildingClass::RepairPlacement(this, 1);
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 408))(this, *((uint32_t *)this + 135));
    if ( *((uint8_t *)this + 1050) )
    byte_880CF4 = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    v56 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v56 + 1892) && !*((uint32_t *)this + 195) )
    v57 = (int *)(v56 + 1896);
    v58 = *v57;
    v156 = v57[1];
    v157 = v57[2];
    v59 = __2_YAPAXI_Z(0x100u);
    if ( v59 )
    v60 = *((uint32_t *)this + 40);
    v158[0] = v58 + *((uint32_t *)this + 39);
    v61 = *((uint32_t *)this + 41);
    v154[0] = *((uint32_t *)this + 39);
    v158[1] = v156 + v60;
    v62 = *((uint32_t *)this + 40);
    v63 = *((uint32_t *)this + 41);
    v158[2] = v157 + v61;
    v154[1] = v62;
    v154[2] = v63;
    v64 = Coord::To_Cell(&MapClass_Instance, v154);
    v65 = ParticleSystemClass::Constructor(
    (int)v59,
    *(uint32_t *)(*((uint32_t *)this + 328) + 1892),
    v158,
    (int)v64,
    0,
    &g_BuildingClassPool,
    0);
    else
    v65 = 0;
    v1 = v159;
    *((uint32_t *)this + 195) = v65;
    v66 = RulesClass_Instance;
    if ( *((uint32_t *)this + 328) == RulesClass_Instance->NSGates[1] )
    v67 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v159) + 9);
    v155 = v67;
    HIWORD(v160) = HIWORD(v67);
    LOWORD(v160) = v67 + 1;
    v68 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v160);
    BuildingClass::ValidatePlacement(v68, 0);
    HIWORD(v160) = HIWORD(v67);
    LOWORD(v160) = v67 - 1;
    v69 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v160);
    BuildingClass::ValidatePlacement(v69, 0);
    v160 = v67 + 0x10000;
    v70 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v160);
    BuildingClass::ValidatePlacement(v70, 0);
    v160 = v67 - 0x10000;
    v71 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v160);
    BuildingClass::ValidatePlacement(v71, 0);
    v66 = RulesClass_Instance;
    v1 = v159;
    v72 = *((uint32_t *)this + 328);
    if ( v72 == v66->ConcreteWalls[1] || v72 == v66->ConcreteWalls[3] )
    v73 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v1) + 9);
    v160 = v73;
    HIWORD(v159) = HIWORD(v73);
    LOWORD(v159) = v73 - 1;
    v74 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v159);
    BuildingClass::ValidatePlacement(v74, 0);
    LOWORD(v159) = v73 + 3;
    HIWORD(v159) = HIWORD(v73);
    v75 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v159);
    BuildingClass::ValidatePlacement(v75, 0);
    v66 = RulesClass_Instance;
    v76 = *((uint32_t *)this + 328);
    if ( v76 == v66->ConcreteWalls[2] || v76 == v66->NSGates[0] )
    v77 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v1) + 9);
    v155 = v77;
    v159 = (int *)(v77 - 0x10000);
    v78 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v159);
    BuildingClass::ValidatePlacement(v78, 0);
    v159 = (int *)(v77 + 196608);
    v79 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v159);
    BuildingClass::ValidatePlacement(v79, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5451) )
    v80 = (int *)__2_YAPAXI_Z(0xE8u);
    if ( v80 )
    v81 = BuildingLightClass::CTOR(v80, (int)this);
    else
    v81 = 0;
    *((uint32_t *)this + 384) = v81;
    v82 = *((uint32_t *)this + 328);
    *((uint8_t *)this + 979) = 0;
    if ( *(uint32_t *)(v82 + 3768) )
    AnimClass::updateAnimation((int)this, 0);
    v83 = 0;
    v84 = RulesClass_Instance->NeutralTechBuildings[1];
    if ( v84 > 0 )
    v85 = (uint32_t *)RulesClass_Instance->BuildDummy[2];
    while ( *v85 != *((uint32_t *)this + 328) )
    ++v83;
    ++v85;
    if ( v83 >= v84 )
    goto LABEL_147;
    v86 = (uint32_t *)(*((uint32_t *)this + 135) + 80);
    v87 = *(uint32_t *)(*((uint32_t *)this + 135) + 88);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 96) < v87
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 93) || !v87)
    && (v88 = *(uint32_t *)(*((uint32_t *)this + 135) + 100), v88 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v86 + 8))(v86, v88 + v87, 0) )
    v89 = v86[4];
    v90 = v86[1];
    v86[4] = v89 + 1;
    *(uint32_t *)(v90 + 4 * v89) = this;
    LABEL_147:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5801) )
    v91 = (uint32_t *)(*((uint32_t *)this + 135) + 128);
    v92 = *(uint32_t *)(*((uint32_t *)this + 135) + 136);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 144) < v92
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 141) || !v92)
    && (v93 = *(uint32_t *)(*((uint32_t *)this + 135) + 148), v93 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v91 + 8))(v91, v93 + v92, 0) )
    v94 = v91[4];
    v95 = v91[1];
    v91[4] = v94 + 1;
    *(uint32_t *)(v95 + 4 * v94) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5805) )
    v96 = (uint32_t *)(*((uint32_t *)this + 135) + 152);
    v97 = *(uint32_t *)(*((uint32_t *)this + 135) + 160);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 168) < v97
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 165) || !v97)
    && (v98 = *(uint32_t *)(*((uint32_t *)this + 135) + 172), v98 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v96 + 8))(v96, v98 + v97, 0) )
    v99 = v96[4];
    v100 = v96[1];
    v96[4] = v99 + 1;
    *(uint32_t *)(v100 + 4 * v99) = this;
    v101 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v101 + 5806) || *(uint8_t *)(v101 + 5807) )
    v102 = (uint32_t *)(*((uint32_t *)this + 135) + 176);
    v103 = *(uint32_t *)(*((uint32_t *)this + 135) + 184);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 192) < v103
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 189) || !v103)
    && (v104 = *(uint32_t *)(*((uint32_t *)this + 135) + 196), v104 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v102 + 8))(v102, v104 + v103, 0) )
    v105 = v102[4];
    v106 = v102[1];
    v102[4] = v105 + 1;
    *(uint32_t *)(v106 + 4 * v105) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5803) )
    v107 = (uint32_t *)(*((uint32_t *)this + 135) + 200);
    v108 = *(uint32_t *)(*((uint32_t *)this + 135) + 208);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 216) < v108
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 213) || !v108)
    && (v109 = *(uint32_t *)(*((uint32_t *)this + 135) + 220), v109 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v107 + 8))(v107, v109 + v108, 0) )
    v110 = v107[4];
    v111 = v107[1];
    v107[4] = v110 + 1;
    *(uint32_t *)(v111 + 4 * v110) = this;
    v112 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v112 + 5499) && *(int *)(v112 + 1588) > -1 )
    v113 = (uint32_t *)(*((uint32_t *)this + 135) + 224);
    v114 = *(uint32_t *)(*((uint32_t *)this + 135) + 232);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 240) < v114
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 237) || !v114)
    && (v115 = *(uint32_t *)(*((uint32_t *)this + 135) + 244), v115 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v113 + 8))(v113, v115 + v114, 0) )
    v116 = v113[4];
    v117 = v113[1];
    v113[4] = v116 + 1;
    *(uint32_t *)(v117 + 4 * v116) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5804) )
    v118 = (uint32_t *)(*((uint32_t *)this + 135) + 248);
    v119 = *(uint32_t *)(*((uint32_t *)this + 135) + 256);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 264) < v119
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 261) || !v119)
    && (v120 = *(uint32_t *)(*((uint32_t *)this + 135) + 268), v120 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v118 + 8))(v118, v120 + v119, 0) )
    v121 = v118[4];
    v122 = v118[1];
    v118[4] = v121 + 1;
    *(uint32_t *)(v122 + 4 * v121) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5808) )
    v123 = (uint32_t *)(*((uint32_t *)this + 135) + 272);
    v124 = *(uint32_t *)(*((uint32_t *)this + 135) + 280);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 288) < v124
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 285) || !v124)
    && (v125 = *(uint32_t *)(*((uint32_t *)this + 135) + 292), v125 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v123 + 8))(v123, v125 + v124, 0) )
    v126 = v123[4];
    v127 = v123[1];
    v123[4] = v126 + 1;
    *(uint32_t *)(v127 + 4 * v126) = this;
    if ( *(int *)(*((uint32_t *)this + 328) + 5900) > 0 )
    v128 = (uint32_t *)(*((uint32_t *)this + 135) + 296);
    v129 = *(uint32_t *)(*((uint32_t *)this + 135) + 304);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 312) < v129
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 309) || !v129)
    && (v130 = *(uint32_t *)(*((uint32_t *)this + 135) + 316), v130 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v128 + 8))(v128, v130 + v129, 0) )
    v131 = v128[4];
    v132 = v128[1];
    v128[4] = v131 + 1;
    *(uint32_t *)(v132 + 4 * v131) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5837) )
    v133 = (uint32_t *)(*((uint32_t *)this + 135) + 320);
    v134 = *(uint32_t *)(*((uint32_t *)this + 135) + 328);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 336) < v134
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 333) || !v134)
    && (v135 = *(uint32_t *)(*((uint32_t *)this + 135) + 340), v135 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v133 + 8))(v133, v135 + v134, 0) )
    v136 = v133[4];
    v137 = v133[1];
    v133[4] = v136 + 1;
    *(uint32_t *)(v137 + 4 * v136) = this;
    HouseClass::CalculateCostMultipliers(*((float **)this + 135));
    v138 = (uint32_t *)(*((uint32_t *)this + 135) + 104);
    v139 = *(uint32_t *)(*((uint32_t *)this + 135) + 112);
    if ( *(uint32_t *)(*((uint32_t *)this + 135) + 120) < v139
    || (*(uint8_t *)(*((uint32_t *)this + 135) + 117) || !v139)
    && (v140 = *(uint32_t *)(*((uint32_t *)this + 135) + 124), v140 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v138 + 8))(v138, v140 + v139, 0) )
    v141 = v138[4];
    v142 = v138[1];
    v138[4] = v141 + 1;
    *(uint32_t *)(v142 + 4 * v141) = this;
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    BuildingClass::MarkUpgradeComponentUsed((int *)(*((uint32_t *)this + 135) + 22272), this);
    result = *((uint32_t *)this + 328);
    v143 = *(uint32_t *)(result + 3768);
    if ( v143 )
    LOBYTE(result) = *(uint8_t *)(result + 3278);
    result = HouseClass::UpdateProduction(*((uint32_t *)this + 135), v143, result, 0);
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::ProcessDemolish(#377 *this)
{
    int v2; // ebp
    char *v3; // edi
    int v4; // ecx
    int v5; // edx
    int v6; // edi
    int v7; // ecx
    int v8; // eax
    int v9; // eax
    char v10; // cl
    void (__thiscall **vfptr0)(void*377 *, int); // edx
    int FoundationWidth; // eax
    int FoundationHeight; // eax
    int v14; // edi
    int v15; // eax
    int v16; // eax
    int v17; // edi
    _WORD *v18; // edi
    uint32_t *v19; // ebp
    __int16 v20; // dx
    __int16 v21; // cx
    void *v22; // edi
    int v23; // edi
    int *v24; // eax
    int v25; // ecx
    char *v26; // edx
    int v27; // eax
    void **v28; // ebp
    void *v29; // ebx
    int v30; // edi
    unsigned int v31; // eax
    int *v32; // ebx
    int *v33; // eax
    void **v34; // ebp
    int v35; // edi
    int Index; // eax
    int Positive; // edi
    int v38; // eax
    int *v39; // eax
    void *v40; // eax
    int v41; // eax
    wchar_t *v42; // eax
    void *v43; // edi
    void **v44; // ebp
    int *v45; // eax
    void **v46; // edi
    const char *v47; // eax
    int (__thiscall **v48)(void*377 *); // edx
    int i; // ebx
    uint32_t *v50; // edi
    int v51; // eax
    uint32_t *v52; // eax
    int v53; // ebp
    int v54; // ebx
    void *v55; // edi
    char *v56; // ecx
    int v57; // edx
    int v58; // eax
    int v59; // eax
    int result; // eax
    int v61; // [esp+4h] [ebp-68h]
    int v62; // [esp+18h] [ebp-54h] BYREF
    int Parachute; // [esp+1Ch] [ebp-50h]
    int v64; // [esp+20h] [ebp-4Ch]
    int v65; // [esp+24h] [ebp-48h] BYREF
    char *v66; // [esp+28h] [ebp-44h]
    int v67; // [esp+2Ch] [ebp-40h]
    int v68; // [esp+30h] [ebp-3Ch]
    void *v69; // [esp+34h] [ebp-38h]
    int v70; // [esp+38h] [ebp-34h]
    int v71[3]; // [esp+3Ch] [ebp-30h] BYREF
    int v72; // [esp+48h] [ebp-24h] BYREF
    int v73; // [esp+4Ch] [ebp-20h]
    void **v74; // [esp+54h] [ebp-18h] BYREF
    void *Block; // [esp+58h] [ebp-14h]
    int v76; // [esp+5Ch] [ebp-10h]
    char v77; // [esp+61h] [ebp-Bh]
    int v78; // [esp+64h] [ebp-8h]
    int v79; // [esp+68h] [ebp-4h]
    int v80; // [esp+74h] [ebp+8h]
    char v81; // [esp+78h] [ebp+Ch]
    _WORD *v82; // [esp+7Ch] [ebp+10h]
    v2 = 8;
    v3 = (char *)this + 1480;
    do
    if ( *(uint32_t *)v3 )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)v3 + 248))(*(uint32_t *)v3);
    *(uint32_t *)v3 = 0;
    v3 += 4;
    --v2;
    while ( v2 );
    if ( *((uint32_t *)this + 132) )
    v4 = *((uint32_t *)this + 328);
    *((uint32_t *)this + 132) = 0;
    if ( *(uint8_t *)(v4 + 5796) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 21732) = 0;
    v5 = 0;
    v6 = *(uint32_t *)(*((uint32_t *)this + 135) + 120);
    if ( v6 > 0 )
    do
    v7 = *((uint32_t *)this + 135);
    v8 = *(uint32_t *)(*(uint32_t *)(v7 + 108) + 4 * v5);
    if ( v8 && !*(uint8_t *)(v8 + 129) && *(uint8_t *)(*(uint32_t *)(v8 + 1312) + 5796) )
    *(uint32_t *)(v7 + 21732) |= *(uint32_t *)(v8 + 528);
    ++v5;
    while ( v5 < v6 );
    MapClass::MarkForRedraw(&MapClass_Instance, 2);
    v9 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v9 + 5831) )
    v10 = *((uint8_t *)this + 1772);
    *((uint8_t *)this + 1771) = -1;
    if ( !v10 )
    *((uint8_t *)this + 1772) = *(uint8_t *)(v9 + 5895);
    vfptr0 = *(void (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 128) = 1;
    *((uint8_t *)this + 1772) = 1;
    vfptr0[260](this, 1);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    BuildingClass::DemolishBridgeCheck((int *)this, 1);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 1518) && !(unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t, int, void*375 *))(*(uint32_t *)this + 1164))(
    this,
    0,
    0,
    1,
    HouseClass_Player);
    if ( !*(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1312) )
    v62 = *((uint32_t *)this + 39);
    Parachute = *((uint32_t *)this + 40);
    v64 = *((uint32_t *)this + 41);
    PlayAudioAt2(RulesClass_Instance->Scorches[1], &v62, 0);
    if ( BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) >= 2
    && BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) >= 2 )
    if ( BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) > 2 )
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328));
    Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, FoundationWidth - 2);
    if ( BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) > 2 )
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0);
    Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, FoundationHeight - 2);
    if ( Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) >= 50 )
    v64 = 0;
    v16 = *((uint32_t *)this + 39);
    v17 = *((uint32_t *)this + 40);
    v70 = *((uint32_t *)this + 41);
    v62 = ((__int16)(v16 / 256) << 8) + 128;
    Parachute = ((__int16)(v17 / 256) << 8) + 128;
    TimedCreateUnitAtCoords(&v62, 100, 100, 1);
    else
    v64 = 0;
    v14 = *((uint32_t *)this + 40);
    v15 = *((uint32_t *)this + 39);
    v70 = *((uint32_t *)this + 41);
    v62 = ((__int16)(v15 / 256) << 8) + 128;
    Parachute = ((__int16)(v14 / 256) << 8) + 128;
    StandardCreateUnitAtCoords(&v62, 100, 100, 1);
    while ( *v82 != 0x7FFF || v82[1] != 0x7FFF )
    v18 = v82;
    v82 += 2;
    v19 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 172))(this, v71);
    v20 = v19[1] / 256 + v18[1];
    v21 = *v18 + *v19 / 256;
    if ( *(int *)(*((uint32_t *)this + 328) + 1852) > 0 )
    v68 = *((uint32_t *)this + 39);
    v22 = (void *)*((uint32_t *)this + 40);
    v62 = (v21 << 8) + 128;
    Parachute = (v20 << 8) + 128;
    v69 = v22;
    v23 = *((uint32_t *)this + 41);
    v64 = 0;
    v24 = RandomCoordScatter(&v72, &v62, 64, 0);
    v25 = *v24;
    v26 = (char *)v24[1];
    v27 = v23 + v24[2];
    v65 = v25;
    v66 = v26;
    v67 = v27;
    v28 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v28 )
    v29 = (void *)Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 3);
    v30 = *((uint32_t *)this + 328) + 1836;
    v31 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    AnimClass::ctor(
    v28,
    *(void **)(*(uint32_t *)(v30 + 4) + 4 * (v31 % *(uint32_t *)(v30 + 16))),
    &v65,
    v29,
    1,
    (void *)0x600,
    0,
    0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3349) )
    v32 = (int *)&unk_818CB8;
    do
    v65 = *((uint32_t *)this + 39);
    v61 = *v32;
    v66 = (char *)*((uint32_t *)this + 40);
    v67 = *((uint32_t *)this + 41);
    v33 = (int *)globalHelper_09F550(v61);
    v62 = *v33;
    Parachute = v33[1];
    v64 = v33[2];
    if ( *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v62) + 17) != -1 )
    if ( *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4
    * *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v62)
    + 17)]
    + 688) )
    v34 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v34 )
    v35 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 1, 3);
    Index = AnimTypeClass::FindIndex(aFire3);
    AnimClass::ctor(v34, *((void **)g_AnimTypeCount + Index), &v62, (void *)(v35 + 3), 1, (void *)0x600, 0, 0);
    ++v32;
    while ( (int)v32 < (int)dword_818CC8 );
    while ( Float4::Sum((float *)this + 207) >= 1.0 )
    Positive = FirstFloatPositive((float *)this + 207);
    Float::SubtractClamped((float *)this + 207, 1.0, Positive);
    Float::SubtractClamped((float *)(*((uint32_t *)this + 135) + 764), 1.0, Positive);
    v38 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 256, 768);
    v65 = *((uint32_t *)this + 39);
    v66 = (char *)*((uint32_t *)this + 40);
    v67 = *((uint32_t *)this + 41);
    v39 = RandomCoordScatter(&v72, &v65, v38, 1);
    v62 = *v39;
    Parachute = v39[1];
    v64 = v39[2];
    v40 = Coord::To_Cell(&MapClass_Instance, &v62);
    Crate::FindPlacement((int)v40, Positive, 1);
    v41 = (*(int (__thiscall **)(uint32_t, uint32_t))(**((uint32_t **)this + 328) + 132))(
    *((uint32_t *)this + 328),
    *((uint32_t *)this + 135))
    / SLODWORD(RulesClass_Instance->VeteranROF);
    if ( v41 > 0 )
    nullsub_51(v41);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19 || *(uint8_t *)(*((uint32_t *)this + 328) + 3349) )
    *((uint32_t *)this + 330) = CurrentFrame;
    *((uint32_t *)this + 331) = v73;
    *((uint32_t *)this + 332) = 0;
    v42 = CurrentFrame;
    *((uint32_t *)this + 67) = 0;
    *((uint32_t *)this + 64) = v42;
    *((uint32_t *)this + 65) = v73;
    *((uint32_t *)this + 66) = 0;
    else
    *((uint32_t *)this + 330) = CurrentFrame;
    *((uint32_t *)this + 331) = v73;
    *((uint32_t *)this + 332) = 8;
    if ( *(int *)(*((uint32_t *)this + 328) + 1880) > 0 )
    v43 = *(void **)(*(uint32_t *)(*((uint32_t *)this + 328) + 1868)
    + 4
    * ((unsigned int)Random::State((uint32_t *)ScenarioClass_Instance + 134)
    % *(uint32_t *)(*((uint32_t *)this + 328) + 1880)));
    if ( v43 )
    v44 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v44 )
    v45 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 172))(this, &v72);
    v46 = AnimClass::ctor(v44, v43, v45, 0, 1, (void *)0x600, 0, 0);
    else
    v46 = 0;
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3568) )
    v46[53] = (void *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 484))(this);
    v47 = (const char *)(*((uint32_t *)this + 328) + 3536);
    if ( *v47 )
    strncpy((char *)v46 + 220, v47, 0x20u);
    VectorClass::ConstructorWithVtable(0, 0);
    v48 = *(int (__thiscall ***)(void*377 *))this;
    v74 = &DynamicVectorClass<ParticleSystemTypeClass const *>::`vftable';
    v79 = 10;
    v78 = 0;
    for ( i = *(uint32_t *)(v48[33](this) + 1956) - 1; i >= 0; --i )
    if ( !*(uint32_t *)(*(uint32_t *)(*(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1944)
    + 4 * i)
    + 692) )
    v50 = (uint32_t *)(4 * i + *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1944));
    if ( v78 < v76
    || (v77 || !v76)
    && v79 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v74[2])(&v74, v79 + v76, 0) )
    v51 = v78++;
    *((uint32_t *)Block + v51) = *v50;
    if ( !*((uint32_t *)this + 200) && v78 > 0 && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 456))(this) > -10 )
    v52 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v53 = v52[496];
    v54 = v52[497];
    v70 = v52[498];
    v55 = __2_YAPAXI_Z(0x100u);
    if ( v55 )
    v56 = (char *)*((uint32_t *)this + 40);
    v65 = v53 + *((uint32_t *)this + 39);
    v57 = v70 + *((uint32_t *)this + 41);
    v66 = &v56[v54];
    v67 = v57;
    v58 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v78 - 1);
    v59 = ParticleSystemClass::Constructor((int)v55, *((uint32_t *)Block + v58), &v65, 0, this, &g_BuildingClassPool, 0);
    else
    v59 = 0;
    *((uint32_t *)this + 200) = v59;
    *((uint32_t *)this + 27) = 0;
    if ( v81 )
    *((uint8_t *)this + 1760) = 1;
    ((void (__stdcall *)(uint32_t))BuildingClass::EjectCrew)(*((uint32_t *)this + 336));
    TechnoClass::CleanupAll(this, v80);
    result = (int)Block;
    v74 = &VectorClass<ParticleSystemTypeClass const *>::`vftable';
    if ( Block && v77 )
    __3_YAXPAX_Z(Block);
    return result;
}

int  BuildingClass::ProcessAttack(#377 *this)
{
    int v1; // ebp
    int v3; // ebx
    int v4; // eax
    int Member; // edi
    int v6; // eax
    uint8_t *v7; // eax
    int v9; // edi
    char field_78; // al
    void *v11; // eax
    int v12; // eax
    uint32_t *v13; // ecx
    int v14; // ebx
    uint32_t *v15; // edi
    uint32_t *v16; // ebp
    uint32_t *v17; // eax
    int *v18; // eax
    int v19; // eax
    int v20; // edx
    int v21; // edi
    int v22; // ecx
    int v23; // ecx
    int v24; // eax
    int v25; // eax
    int v26; // edi
    int (__thiscall **vfptr0)(void*377 *, uint8_t *); // edx
    _WORD *v28; // eax
    int FoundationHeight; // edi
    int FoundationWidth; // eax
    void **v31; // ebp
    int v32; // eax
    void **v33; // edi
    void **v34; // eax
    void **v35; // ebp
    void **v36; // edi
    void **v37; // ebp
    void **v38; // edi
    char v39; // al
    unsigned __int16 v40; // dx
    int v41; // eax
    double HealthRatio; // st7
    RulesClass *v43; // edx
    BOOL v44; // ebx
    int v45; // ebp
    int v46; // edi
    char *v47; // eax
    int v48; // eax
    BOOL v49; // ebx
    char *v50; // edx
    int v51; // ebp
    int v52; // edi
    char *v53; // eax
    int *v54; // [esp+14h] [ebp-B4h]
    int *v55; // [esp+14h] [ebp-B4h]
    int *v56; // [esp+14h] [ebp-B4h]
    int v57; // [esp+1Ch] [ebp-ACh]
    int v58; // [esp+1Ch] [ebp-ACh]
    char *v59; // [esp+3Ch] [ebp-8Ch] BYREF
    void **v60; // [esp+40h] [ebp-88h] BYREF
    void *Block; // [esp+44h] [ebp-84h]
    int v62; // [esp+48h] [ebp-80h]
    int v63; // [esp+4Ch] [ebp-7Ch]
    int v64; // [esp+50h] [ebp-78h]
    int v65; // [esp+54h] [ebp-74h]
    int v66; // [esp+58h] [ebp-70h] BYREF
    int v67; // [esp+5Ch] [ebp-6Ch]
    int v68; // [esp+60h] [ebp-68h] BYREF
    int v69; // [esp+64h] [ebp-64h]
    int GroundHeight; // [esp+68h] [ebp-60h]
    int ProductionFrame; // [esp+6Ch] [ebp-5Ch]
    uint32_t v72[3]; // [esp+70h] [ebp-58h] BYREF
    char v73[4]; // [esp+7Ch] [ebp-4Ch] BYREF
    int v74[3]; // [esp+80h] [ebp-48h] BYREF
    int v75[3]; // [esp+8Ch] [ebp-3Ch] BYREF
    int v76[3]; // [esp+98h] [ebp-30h] BYREF
    int v77[3]; // [esp+A4h] [ebp-24h] BYREF
    char v78[12]; // [esp+B0h] [ebp-18h] BYREF
    char v79[12]; // [esp+BCh] [ebp-Ch] BYREF
    int v80; // [esp+CCh] [ebp+4h]
    int v81; // [esp+D0h] [ebp+8h]
    int v82; // [esp+D4h] [ebp+Ch]
    void*377 *v83; // [esp+D8h] [ebp+10h]
    int v84; // [esp+DCh] [ebp+14h]
    int v85; // [esp+E0h] [ebp+18h]
    void*375 *v86; // [esp+E4h] [ebp+1Ch]
    v1 = (int)v83;
    v67 = 0;
    if ( this == v83 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)v83 + 132))(v83) + 3232) )
    return v67;
    BuildingClass::GetHealthRatio((int *)this);
    v3 = 0;
    ProductionFrame = BuildingClass::GetProductionFrame((int *)this);
    if ( v83 && !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 21720) = CurrentFrame;
    *(uint32_t *)(*((uint32_t *)this + 135) + 21724) = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)v83 + 60))(v83)
    + 48);
    TechnoClass::EvaluateMission((void*375 **)this, (int)v83);
    v59 = (char *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 264))(this, 0);
    EventClass::resetEvent(&v60, 0, 0);
    v4 = *((uint32_t *)this + 58);
    v60 = &DynamicVectorClass<TechnoClass *>::`vftable';
    v65 = 10;
    v64 = 0;
    if ( v4 > 0 )
    do
    Member = Team::GetMember(this, v3);
    if ( Member
    && (v64 < v62
    || (BYTE1(v63) || !v62)
    && v65 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v60[2])(&v60, v65 + v62, 0)) )
    v6 = v64++;
    *((uint32_t *)Block + v6) = Member;
    ++v3;
    while ( v3 < *((uint32_t *)this + 58) );
    v7 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v7[5823] && !(uint8_t)v84 )
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    __3_YAXPAX_Z(Block);
    return 0;
    return 0;
    if ( v7[5814] && v7[563] )
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    __3_YAXPAX_Z(Block);
    return 0;
    if ( *((uint32_t *)this + 27) )
    v9 = ((int (__stdcall *)(int, int, int, void*377 *, int, int, void*375 *))TechnoClass::ReceiveDamage_Shield)(
    v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
    field_78 = *((uint8_t *)this + 144);
    v67 = v9;
    if ( !field_78 )
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    __3_YAXPAX_Z(Block);
    return v9;
    switch ( v9 )
    case 2:
    v25 = *((uint32_t *)this + 195);
    if ( v25 )
    *(float *)(v25 + 232) = *(float *)(v25 + 232) * 1.5;
    goto LABEL_64;
    case 3:
    LABEL_64:
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1336) == -1 )
    v72[0] = *((uint32_t *)this + 39);
    v72[1] = *((uint32_t *)this + 40);
    v72[2] = *((uint32_t *)this + 41);
    PlayAudioAt2(RulesClass_Instance->Scorches3[0], v72, 0);
    while ( *(_WORD *)v59 != 0x7FFF || *((_WORD *)v59 + 1) != 0x7FFF )
    v26 = *(uint32_t *)v59;
    vfptr0 = *(int (__thiscall ***)(void*377 *, uint8_t *))this;
    v59 += 4;
    v66 = v26;
    v28 = (_WORD *)vfptr0[110](this, v73);
    LOWORD(v26) = *v28 + v26;
    LOWORD(v28) = HIWORD(v66) + v28[1];
    GroundHeight = 0;
    v68 = ((__int16)v26 << 8) + 128;
    v69 = ((__int16)v28 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v68);
    if ( *(uint8_t *)(v82 + 330) )
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0);
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328));
    switch ( Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, FoundationHeight + FoundationWidth + 5) )
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    v31 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v31 )
    v32 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 1, 3);
    v33 = (void **)RulesClass_Instance->OverloadDamage[3];
    v57 = v32;
    v54 = RandomCoordScatter(v74, &v68, 96, 0);
    v34 = AnimClass::ctor(v31, *v33, v54, 0, v57, (void *)0x600, 0, 0);
    goto LABEL_76;
    break;
    case 6:
    case 7:
    case 8:
    v35 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v35 )
    v58 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 1, 3);
    v36 = (void **)(RulesClass_Instance->OverloadDamage[3] + 4);
    v55 = RandomCoordScatter(v75, &v68, 96, 0);
    v34 = AnimClass::ctor(v35, *v36, v55, 0, v58, (void *)0x600, 0, 0);
    goto LABEL_76;
    break;
    case 9:
    v37 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v37 )
    v38 = (void **)(RulesClass_Instance->OverloadDamage[3] + 8);
    v56 = RandomCoordScatter(v77, &v68, 96, 0);
    v34 = AnimClass::ctor(v37, *v38, v56, 0, 1, (void *)0x600, 0, 0);
    LABEL_76:
    if ( v34 )
    BuildingClass::AimTurret(v34, this);
    break;
    default:
    continue;
    v1 = (int)v83;
    break;
    case 4:
    if ( *((uint32_t *)this + 185) )
    v12 = ((int (__thiscall *)(void ***, char *))v60[4])(&v60, (char *)this + 740);
    if ( v12 != -1 && v12 < v64 && v12 < --v64 )
    do
    ++v12;
    *((uint32_t *)Block + v12 - 1) = *((uint32_t *)Block + v12);
    while ( v12 < v64 );
    BuildingClass::RemoveLimpet(this);
    v13 = (uint32_t *)*((uint32_t *)this + 175);
    if ( v13 )
    CaptureManager::FreeAll(v13);
    if ( *((uint32_t *)this + 171) )
    TechnoClass::EjectPassengers((int *)this, 1);
    v14 = 0;
    if ( v64 > 0 )
    do
    v15 = (uint32_t *)*((uint32_t *)Block + v14);
    v16 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, char *))(*v15 + 72))(v15, v78);
    v17 = (uint32_t *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v79);
    v18 = Coord::Subtract(v76, *v17 - *v16, v17[1] - v16[1], v17[2] - v16[2]);
    v68 = *v18;
    v69 = v18[1];
    GroundHeight = v18[2];
    if ( (int)Coord::Length(&v68) < 256 || *(uint8_t *)(*((uint32_t *)this + 328) + 5835) )
    v19 = (*(int (__thiscall **)(uint32_t *))(*v15 + 132))(v15);
    v20 = *v15;
    v66 = 10 * *(uint32_t *)(v19 + 160);
    (*(void (__thiscall **)(uint32_t *, int *, uint32_t, int, uint32_t, int, int, uint32_t))(v20 + 364))(
    v15,
    &v66,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    else
    (*(void (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 23, v15);
    v15[320] = 0;
    ++v14;
    while ( v14 < v64 );
    v1 = (int)v83;
    v21 = v62;
    ((void (__thiscall *)(void ***))v60[3])(&v60);
    ((void (__thiscall *)(void ***, int, uint32_t))v60[2])(&v60, v21, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5499) )
    BuildingClass::UnloadUnits((int *)this, 0, 0);
    v22 = *((uint32_t *)this + 389);
    if ( v22 )
    MapClass::ScrollOnce(v22, 0);
    (*(void (__thiscall **)(void*377 *, uint32_t, int, int, char *))(*(uint32_t *)this + 1260))(this, 0, v1, v84, v59);
    v23 = *((uint32_t *)this + 330);
    v24 = *((uint32_t *)this + 332);
    if ( v23 == -1 )
    goto LABEL_60;
    if ( (int)CurrentFrame - v23 < v24 )
    v24 -= (int)CurrentFrame - v23;
    LABEL_60:
    if ( v24 > 0 )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    BuildingClass::AfterDestruction(this);
    break;
    case 5:
    v11 = Block;
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    goto LABEL_126;
    return v67;
    default:
    break;
    if ( *((uint8_t *)this + 144) )
    if ( v1 )
    if ( !v67 )
    goto LABEL_113;
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 562)
    && !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this) )
    HouseClass::NotifyUnderAttack(*((void*375 **)this + 135), this);
    *((uint32_t *)this + 335) = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v1 + 60))(v1) + 48);
    if ( *((uint32_t *)this + 43) != 19
    && !Object::IsAlliedWithObjectHouse(*((uint32_t **)this + 135), v1)
    && *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    && !*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    + 160)
    + 676)
    && (!*((uint32_t *)this + 173)
    || !(*(unsigned __int8 (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 940))(this, *((uint32_t *)this + 173))) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 44))(v1) == 2
    || (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && !LOBYTE(RulesClass_Instance[1].IonCannonDamage) )
    if ( !TimerClass::Active((int)this + 904)
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    LOWORD(v66) = 0;
    v39 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    LOBYTE(v40) = 0;
    HIBYTE(v40) = v39;
    v41 = v66;
    BYTE1(v41) = 0;
    v59 = (char *)(v41 | v40);
    FacingClass::Update((char *)this + 904, &v59);
    else
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 968))(this, v1);
    if ( v67 )
    HealthRatio = BuildingClass::GetHealthRatio((int *)this);
    v43 = RulesClass_Instance;
    v44 = HealthRatio <= *(double *)&RulesClass_Instance[1].WarpOut;
    if ( *((uint8_t *)this + 1766) != v44 )
    v45 = 0;
    *((uint8_t *)this + 1766) = v44;
    v46 = 0;
    v59 = (char *)this + 1372;
    do
    if ( *(uint32_t *)v59 )
    if ( v44 )
    v43 = (RulesClass *)*((uint32_t *)this + 328);
    v47 = (char *)&v43->ExpSpread + v46 + 4;
    else
    v47 = (char *)(v46 + *((uint32_t *)this + 328) + 3916);
    if ( v47 && *v47 )
    BuildingClass::PlayAnim(this, (int)v43, v47, v45, v44, 0, 0);
    v46 += 68;
    ++v45;
    v43 = (RulesClass *)(v59 + 4);
    v59 += 4;
    while ( v46 < 1428 );
    LABEL_113:
    v48 = BuildingClass::GetProductionFrame((int *)this);
    if ( ProductionFrame != v48 )
    *((uint8_t *)this + 128) = 1;
    v49 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    if ( *((uint8_t *)this + 1766) != v49 )
    v50 = (char *)this + 1372;
    v51 = 0;
    *((uint8_t *)this + 1766) = v49;
    v52 = 0;
    v59 = (char *)this + 1372;
    do
    if ( *(uint32_t *)v59 )
    if ( v49 )
    v53 = (char *)(v52 + *((uint32_t *)this + 328) + 3932);
    else
    v50 = (char *)*((uint32_t *)this + 328);
    v53 = &v50[v52 + 3916];
    if ( v53 && *v53 )
    BuildingClass::PlayAnim(this, (int)v50, v53, v51, v49, 0, 0);
    v52 += 68;
    ++v51;
    v50 = v59 + 4;
    v59 += 4;
    while ( v52 < 1428 );
    v11 = Block;
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    LABEL_126:
    __3_YAXPAX_Z(v11);
    return v67;
    v60 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v63) )
    __3_YAXPAX_Z(Block);
    return 4;
}

int  BuildingClass::Update(#377 *this)
{
    int v1; // edi
    uint32_t *v3; // ecx
    uint32_t *v4; // eax
    int v5; // ecx
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    int result; // eax
    TechnoClass::Update((int)this, v1);
    v3 = (uint32_t *)*((uint32_t *)this + 135);
    if ( v3 )
    *((uint32_t *)this + 335) = *(uint32_t *)(v3[13] + 184);
    BuildingClass::PowerUpdate(v3, this);
    v4 = (uint32_t *)*((uint32_t *)this + 328);
    if ( v4 )
    v5 = v4[40];
    *((uint32_t *)this + 27) = v5;
    *((uint32_t *)this + 28) = v5;
    v6 = v4[416];
    if ( v6 == -1 )
    v6 = v4[417];
    *((uint32_t *)this + 191) = v6;
    BuildingTypeClass::GetPowerOutput((_WORD *)this + 452, v4[455]);
    if ( (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 328) + 192))(*((uint32_t *)this + 328)) )
    BuildingTypeClass::IsPowered(*((uint32_t *)this + 328));
    *((uint8_t *)this + 1769) = 1;
    else
    *((uint8_t *)this + 1756) = 0;
    v7 = *((uint32_t *)this + 135);
    if ( v7 )
    if ( *(uint8_t *)(v7 + 704) )
    v8 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v8 + 3278) && *(uint8_t *)(v8 + 3214) && *(uint32_t *)(v8 + 1032) )
    Power::ChangedHouse((uint32_t *)this + 84, 1);
    result = *((uint32_t *)this + 328);
    if ( result && *(uint8_t *)(result + 5808) )
    result = dword_8B41E8;
    if ( dword_8B41F0 < dword_8B41E8
    || (byte_8B41ED || !dword_8B41E8)
    && dword_8B41F4 > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(dword_8B41E0 + 8))(
    &dword_8B41E0,
    dword_8B41E8 + dword_8B41F4,
    0),
    (uint8_t)result) )
    result = dword_8B41F0++;
    *((uint32_t *)dword_8B41E4 + result) = this;
    return result;
}

int  BuildingClass::HandleFactoryCommand(#377 *this)
{
    int result; // eax
    uint8_t *WaypointCoords; // eax
    int v4; // eax
    char *v5; // eax
    int v6; // eax
    uint8_t *v7; // eax
    int v8; // eax
    uint8_t *v9; // eax
    uint8_t *v10; // eax
    int v11; // eax
    uint32_t *v12; // eax
    int v13; // [esp-10h] [ebp-A8h]
    char v14; // [esp-Ch] [ebp-A4h]
    int v15; // [esp-8h] [ebp-A0h]
    int v16; // [esp-8h] [ebp-A0h]
    char v17; // [esp-4h] [ebp-9Ch]
    char v18; // [esp-4h] [ebp-9Ch]
    __int16 v19[4]; // [esp+Ch] [ebp-8Ch] BYREF
    int v20; // [esp+14h] [ebp-84h] BYREF
    uint8_t v21[12]; // [esp+1Ch] [ebp-7Ch] BYREF
    char v22[112]; // [esp+28h] [ebp-70h] BYREF
    int v23; // [esp+9Ch] [ebp+4h]
    uint32_t *v24; // [esp+A0h] [ebp+8h]
    result = v23;
    switch ( v23 )
    case 5:
    result = (int)v24;
    if ( v24 )
    result = (*(int (__thiscall **)(void*377 *, int, uint32_t *, uint32_t, uint32_t))(*(uint32_t *)this + 888))(
    this,
    1,
    v24,
    0,
    0);
    LOBYTE(result) = 1;
    return result;
    goto LABEL_25;
    case 4:
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    WaypointCoords = ScriptAction::GetWaypointCoords(v19, this);
    v15 = *(uint32_t *)WaypointCoords;
    v17 = WaypointCoords[4];
    v4 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this);
    v5 = EventClass::Add(v22, v4, 0x11u, v15, v17);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3281) )
    (*(void (__thiscall **)(void*377 *, int, uint32_t *, uint32_t, uint32_t))(*(uint32_t *)this + 888))(this, 16, v24, 0, 0);
    v6 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v6 + 5806) || *(uint8_t *)(v6 + 5807) )
    (*(void (__thiscall **)(void*377 *, int, uint32_t *, uint32_t, uint32_t))(*(uint32_t *)this + 888))(this, 16, v24, 0, 0);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this);
    if ( result > 0 )
    result = (*(int (__thiscall **)(void*377 *, int, uint32_t *, uint32_t, uint32_t))(*(uint32_t *)this + 888))(
    this,
    16,
    v24,
    0,
    0);
    LOBYTE(result) = 1;
    return result;
    goto LABEL_25;
    case 55:
    v7 = ScriptAction::GetWaypointCoords(v19, this);
    result = (int)EventClass::Add(
    v22,
    *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 14) + 40) + 48),
    0xAu,
    *(uint32_t *)v7,
    v7[4]);
    break;
    case 1:
    v8 = *(uint32_t *)(*((uint32_t *)this + 328) + 3768);
    if ( v8 == 16 || v8 == 40 || v8 == 3 )
    v12 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v24 + 72))(v24, v21);
    LOWORD(v20) = *v12 / 256;
    HIWORD(v20) = v12[1] / 256;
    *(uint32_t *)v19 = v20;
    BuildingClass::SetRallyPoint((int)this, v19, 1);
    goto LABEL_25;
    v9 = ScriptAction::GetWaypointCoords(v19, v24);
    v16 = *(uint32_t *)v9;
    v18 = v9[4];
    v10 = ScriptAction::GetWaypointCoords(&v20, this);
    v13 = *(uint32_t *)v10;
    v14 = v10[4];
    v11 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this);
    result = (int)ScenarioClass::SetEvent(v22, v11, 30, v13, v14, v16, v18);
    break;
    default:
    goto LABEL_25;
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], (const void *)result, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    result = ++Networking_LastEventIndex;
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    LOBYTE(result) = 1;
    return result;
    LABEL_25:
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::vt_80_(#377 *this)
{
    int result; // eax
    int v3; // edi
    void *v4; // eax
    char v5; // bl
    uint8_t *WaypointCoords; // eax
    int v7; // eax
    int v8; // [esp-8h] [ebp-8Ch]
    char v9; // [esp-4h] [ebp-88h]
    uint8_t v10[8]; // [esp+Ch] [ebp-78h] BYREF
    char v11[112]; // [esp+14h] [ebp-70h] BYREF
    int v12; // [esp+88h] [ebp+4h]
    __int16 *v13; // [esp+8Ch] [ebp+8h]
    result = v12;
    if ( v12 == 5 )
    v3 = *(uint32_t *)this;
    v4 = CellCoord::To_CellObj(&MapClass_Instance, v13);
    result = (*(int (__thiscall **)(void*377 *, int, void *, uint32_t, uint32_t))(v3 + 888))(this, 1, v4, 0, 0);
    LOBYTE(result) = 1;
    else
    if ( v12 == 6 || v12 == 1 )
    v5 = 0;
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 5817)
    || (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && GameMode_Current[0]
    && (uint8_t)MCVRedeploy
    && !*((uint32_t *)this + 176) )
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 1032)
    || (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 644))(this) )
    BuildingClass::SetRallyPoint((int)this, v13, 1);
    else
    v5 = 1;
    result = *(uint32_t *)(*((uint32_t *)this + 328) + 1032);
    if ( result && !v5 )
    WaypointCoords = ScriptAction::GetWaypointCoords(v10, this);
    v8 = *(uint32_t *)WaypointCoords;
    v9 = WaypointCoords[4];
    v7 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this);
    result = (int)EventClass::Add(v11, v7, 0x16u, v8, v9);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], (const void *)result, 0x6Fu);
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    result = Networking_LastEventIndex + 1;
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    LOBYTE(result) = 1;
    return result;
}

// 0x00443B90
int  BuildingClass::AssignTarget_SyncLog(#377 *this)
{
    int v2; // edi
    int result; // eax
    int v4; // [esp+Ch] [ebp+4h]
    if ( *((uint32_t *)this + 43) == 19 || !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    v2 = 0;
    LABEL_4:
    LOBYTE(result) = TechnoClass::AssignTarget_SyncLog(this, v2);
    return result;
    v2 = v4;
    if ( !v4
    || !*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    || *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) + 160)
    + 676)
    || (*(unsigned __int8 (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 940))(this, v4) )
    goto LABEL_4;
    TechnoClass::AssignTarget_SyncLog(this, 0);
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 5828) || *(uint8_t *)(result + 5834) )
    result = House::IsCurrentPlayer(*((void*375 **)this + 135));
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 892))(this);
    if ( !(uint8_t)result )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 19, 0);
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    return result;
}

int  BuildingClass::UpdateConstruction(#377 *this)
{
    int v2; // eax
    char *v3; // ebp
    unsigned int v4; // eax
    int v5; // edx
    __int16 v6; // di
    int (__thiscall **v7)(void*377 *); // edx
    uint32_t *v8; // eax
    uint32_t *v9; // ecx
    __int16 v10; // ax
    int v11; // eax
    int v12; // eax
    int v13; // esi
    void *v14; // eax
    int *PlacementCells_Alt; // eax
    int v16; // esi
    int v17; // eax
    int v18; // edi
    int v19; // eax
    int v20; // eax
    int v21; // edi
    int v22; // eax
    int v23; // esi
    uint8_t *v24; // eax
    int result; // eax
    int v26; // eax
    int v27; // eax
    int v28; // eax
    uint32_t *v29; // eax
    int v30; // ecx
    uint32_t *v31; // eax
    int v32; // ebp
    int v33; // ebx
    __int16 *v34; // eax
    int v35; // ecx
    int v36; // edx
    double v37; // st7
    unsigned int v38; // ebp
    uint32_t *v39; // eax
    _WORD *v40; // ebp
    __int16 v41; // ax
    uint32_t *v42; // eax
    int (__thiscall **v43)(void*377 *); // edx
    uint32_t *v44; // eax
    int v45; // kr14_4
    int v46; // eax
    int v47; // eax
    void *v48; // eax
    int v49; // ebx
    int v50; // eax
    int v51; // esi
    int v52; // esi
    uint32_t *v53; // eax
    int *Coords; // eax
    int v55; // ebx
    int v56; // eax
    void*377 *v57; // ebp
    int v58; // ebx
    int v59; // ebp
    int v60; // eax
    int v61; // ebp
    int v62; // eax
    int (__thiscall **v63)(void*377 *); // edx
    int v64; // edx
    __int16 v65; // ax
    __int16 v66; // cx
    int (__thiscall **v67)(void*377 *); // edx
    int *v68; // eax
    double v69; // st7
    int (__thiscall **v70)(void*377 *); // eax
    unsigned int v71; // ebx
    uint32_t *v72; // ecx
    __int16 v73; // bp
    int v74; // ecx
    int v75; // ecx
    __int16 v76; // ax
    int v77; // ecx
    int v78; // edx
    int v79; // eax
    int v80; // ebp
    int v81; // ebx
    int v82; // ecx
    int v83; // edx
    int v84; // ebp
    int v85; // ecx
    int v86; // eax
    int v87; // ebx
    void *v88; // eax
    int (__thiscall **vfptr0)(void*377 *); // edx
    int v90; // eax
    int *v91; // ecx
    int v92; // eax
    int v93; // ebx
    int v94; // edx
    uint32_t *v95; // ebp
    int v96; // eax
    int *v97; // eax
    double v98; // st7
    int (__thiscall **v99)(void*377 *); // eax
    unsigned int v100; // ebp
    uint32_t *v101; // ecx
    __int16 v102; // bx
    int v103; // ecx
    int FoundationHeight; // eax
    __int16 v105; // cx
    int v106; // eax
    int v107; // edx
    int v108; // ecx
    int v109; // ebp
    int v110; // ebx
    int v111; // edx
    int v112; // edx
    int v113; // ebp
    int v114; // eax
    int v115; // ecx
    int v116; // ebx
    void *v117; // eax
    void *v118; // eax
    void *v119; // eax
    uint32_t *v120; // eax
    int v121; // eax
    int v122; // eax
    int v123; // eax
    int v124; // ecx
    __int16 *v125; // ebx
    unsigned int *v126; // eax
    int v127; // ecx
    int v128; // ebp
    int v129; // ecx
    int v130; // ebp
    int v131; // ebp
    int v132; // eax
    uint32_t *v133; // ebx
    int v134; // edx
    int v135; // eax
    unsigned int *v136; // eax
    int v137; // edx
    int v138; // eax
    int v139; // edx
    void*375 *v140; // eax
    int v141; // edx
    void *v142; // eax
    int v143; // eax
    int v144; // eax
    int v145; // eax
    int v146; // eax
    int v147; // esi
    int v148; // ecx
    int v149; // ecx
    int v150; // edx
    int v151; // eax
    int v152; // ecx
    uint32_t *v153; // edi
    uint32_t *v154; // ecx
    int v155; // eax
    int v156; // ecx
    int v157; // eax
    int v158; // eax
    int v159; // esi
    int v160; // ecx
    int v161; // ebx
    int v162; // esi
    int *i; // eax
    int v164; // eax
    int v165; // edi
    int v166; // eax
    int v167; // ecx
    int v168; // ecx
    int v169; // edx
    int v170; // edi
    int v171; // eax
    int v172; // ebx
    int v173; // ecx
    bool v174; // zf
    int v175; // ecx
    int v176; // esi
    int v177; // ecx
    int v178; // ecx
    int v179; // edx
    int v180; // eax
    int v181; // ecx
    uint32_t *v182; // edi
    uint32_t *v183; // ecx
    int FreeSlot; // eax
    int v185; // esi
    int v186; // ecx
    int v187; // ecx
    int v188; // edx
    int v189; // eax
    int v190; // ecx
    uint32_t *v191; // edi
    uint32_t *v192; // ecx
    void *v193; // [esp-Ch] [ebp-178h]
    __int64 v194; // [esp+0h] [ebp-16Ch] BYREF
    double v195; // [esp+8h] [ebp-164h] BYREF
    double v196; // [esp+10h] [ebp-15Ch] BYREF
    int v197; // [esp+18h] [ebp-154h] BYREF
    int v198; // [esp+1Ch] [ebp-150h]
    int v199; // [esp+20h] [ebp-14Ch]
    int v200; // [esp+24h] [ebp-148h]
    int v201; // [esp+28h] [ebp-144h]
    int v202; // [esp+2Ch] [ebp-140h]
    int v203; // [esp+30h] [ebp-13Ch] BYREF
    int v204; // [esp+34h] [ebp-138h] BYREF
    unsigned int v205; // [esp+38h] [ebp-134h]
    int v206; // [esp+3Ch] [ebp-130h]
    uint32_t *v207; // [esp+40h] [ebp-12Ch]
    int v208; // [esp+44h] [ebp-128h] BYREF
    int v209; // [esp+48h] [ebp-124h]
    int v210; // [esp+4Ch] [ebp-120h]
    int v211; // [esp+50h] [ebp-11Ch] BYREF
    int v212; // [esp+54h] [ebp-118h]
    int v213; // [esp+58h] [ebp-114h] BYREF
    int v214; // [esp+5Ch] [ebp-110h] BYREF
    int v215; // [esp+60h] [ebp-10Ch]
    int v216; // [esp+64h] [ebp-108h] BYREF
    int v217; // [esp+68h] [ebp-104h]
    int v218; // [esp+6Ch] [ebp-100h] BYREF
    int v219; // [esp+70h] [ebp-FCh]
    __int16 v220[6]; // [esp+74h] [ebp-F8h] BYREF
    int v221; // [esp+80h] [ebp-ECh] BYREF
    int v222[3]; // [esp+84h] [ebp-E8h] BYREF
    int v223; // [esp+90h] [ebp-DCh] BYREF
    int v224; // [esp+94h] [ebp-D8h] BYREF
    uint32_t v225[3]; // [esp+98h] [ebp-D4h] BYREF
    uint32_t v226[4]; // [esp+A4h] [ebp-C8h] BYREF
    int v227; // [esp+B4h] [ebp-B8h] BYREF
    uint32_t v228[2]; // [esp+B8h] [ebp-B4h] BYREF
    int v229; // [esp+C0h] [ebp-ACh] BYREF
    char v230[4]; // [esp+C4h] [ebp-A8h] BYREF
    uint32_t v231[2]; // [esp+C8h] [ebp-A4h] BYREF
    int v232; // [esp+D0h] [ebp-9Ch] BYREF
    char v233[8]; // [esp+D4h] [ebp-98h] BYREF
    unsigned int v234; // [esp+DCh] [ebp-90h] BYREF
    unsigned int v235; // [esp+E4h] [ebp-88h] BYREF
    char v236[8]; // [esp+ECh] [ebp-80h] BYREF
    char v237[12]; // [esp+F4h] [ebp-78h] BYREF
    char v238[4]; // [esp+100h] [ebp-6Ch] BYREF
    char v239[8]; // [esp+104h] [ebp-68h] BYREF
    uint8_t v240[16]; // [esp+10Ch] [ebp-60h] BYREF
    int v241[2]; // [esp+11Ch] [ebp-50h] BYREF
    char v242[12]; // [esp+124h] [ebp-48h] BYREF
    char v243[48]; // [esp+130h] [ebp-3Ch] BYREF
    char v244[12]; // [esp+160h] [ebp-Ch] BYREF
    uint8_t *v245; // [esp+170h] [ebp+4h]
    void*375 *v246; // [esp+174h] [ebp+8h]
    if ( !v245 )
    return 0;
    v2 = *(uint32_t *)v245;
    v245[981] = 1;
    v3 = 0;
    if ( (*(int (__thiscall **)(uint8_t *))(v2 + 44))(v245) == 2 )
    v3 = v245;
    v4 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245) - 1;
    if ( v4 > 0xE )
    return 0;
    switch ( *(uint8_t *)(v4 + 4478648) )
    case 0:
    v24 = (uint8_t *)*((uint32_t *)this + 328);
    if ( !v24[5825] && !v24[5826] && !v24[5821] && !(unsigned __int8)RadioClass::HasFreeLink(this) )
    return 1;
    v26 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v26 + 5825) && !*(uint8_t *)(v26 + 5826) )
    v27 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245);
    HouseClass::UpdateBuildState(*((uint32_t *)this + 135), v27);
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245) == 1 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 22096) = -1;
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245) == 15 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 22100) = -1;
    v28 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v28 + 5819) || *(uint8_t *)(v28 + 5820) )
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245) != 1 )
    (*(void (__thiscall **)(uint8_t *, int *, int, uint32_t))(*(uint32_t *)v245 + 372))(
    v245,
    &g_BuildingClassPool,
    1,
    0);
    return 0;
    v120 = (uint32_t *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v244);
    v200 = 160;
    LOWORD(v209) = *v120 / 256;
    v121 = v120[1];
    v226[2] = 0;
    LOWORD(v209) = dword_89F69C + v209;
    HIWORD(v209) = v121 / 256 + HIWORD(dword_89F69C);
    ++IKnowWhatImDoing;
    v205 = v209;
    v122 = *(uint32_t *)v245;
    v226[0] = ((__int16)(v209 + g_DirectionOffsetPool) << 8) + 128;
    v226[1] = ((__int16)(HIWORD(v209) + HIWORD(g_DirectionOffsetPool)) << 8) + 128;
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, uint32_t *, int))(v122 + 216))(v245, v226, 160) )
    v220[0] = 0x8000;
    FacingClass::Set_SyncLog((int)v220);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 10, 0);
    goto LABEL_146;
    if ( !*(uint8_t *)(v28 + 5821) )
    if ( *(uint32_t *)(v28 + 3768) == 16 || *(uint8_t *)(v28 + 5825) || *(uint8_t *)(v28 + 5826) || *(uint8_t *)(v28 + 5804) )
    TechnoClass::SetFocus(v245, *((uint32_t *)this + 134));
    vfptr0 = *(int (__thiscall ***)(void*377 *))this;
    v201 = g_TerrainTypeTable;
    v200 = (int)v245;
    v199 = (int)&v229;
    v203 = *(uint32_t *)vfptr0[309](this);
    if ( v203 == g_TerrainTypeTable )
    return 0;
    v90 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v90 + 3768) == 16 && !*(uint8_t *)(v90 + 5804) )
    v91 = (int *)(*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 132))(v245);
    v92 = *((uint32_t *)this + 135);
    v93 = 0;
    v216 = (int)v91;
    if ( *(int *)(v92 + 264) > 0 )
    while ( 1 )
    v94 = *v91;
    v95 = *(uint32_t **)(*(uint32_t *)(v92 + 252) + 4 * v93);
    v198 = v95[135];
    v96 = (*(int (__thiscall **)(int *))(v94 + 140))(v91);
    (*(void (__thiscall **)(uint32_t *, int, int))(*v95 + 256))(v95, v96, g_TerrainTypeTable);
    v92 = *((uint32_t *)this + 135);
    if ( ++v93 >= *(uint32_t *)(v92 + 264) )
    break;
    v91 = (int *)v213;
    v205 = (SHIWORD(v200) << 8) + 128;
    v204 = ((__int16)v200 << 8) + 128;
    v97 = (int *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v243);
    v212 = *v97;
    v98 = Math::CalcAngle((double)v97[1] - (double)v204, (double)v203 - (double)v212);
    LOWORD(v212) = Math::RoundToInt((v98 - 1.570796326794897) * -10430.06004058427);
    v212 = (unsigned __int8)((((unsigned int)v212 >> 7) + 1) >> 1);
    v99 = *(int (__thiscall ***)(void*377 *))this;
    v203 = v199;
    v100 = *(uint32_t *)((int (__thiscall *)(void*377 *, char *))v99[110])(this, v233);
    v101 = (uint32_t *)*((uint32_t *)this + 328);
    v205 = v100;
    v199 = (__int16)v100;
    v102 = v202;
    if ( (__int16)v202 < (__int16)v100 + BuildingTypeClass::GetFoundationWidth(v101) )
    if ( (__int16)v202 < (__int16)v100 )
    v102 = v202 + 1;
    else
    v102 = v202 - 1;
    v103 = *((uint32_t *)this + 328);
    v201 = SHIWORD(v205);
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v103, 0);
    v105 = HIWORD(v202);
    if ( SHIWORD(v202) < SHIWORD(v205) + FoundationHeight )
    if ( SHIWORD(v202) < SHIWORD(v205) )
    v105 = HIWORD(v202) + 1;
    else
    v105 = HIWORD(v202) - 1;
    v106 = (v102 << 8) + 128;
    v107 = (v105 << 8) + 128;
    v210 = 0;
    v108 = *((uint32_t *)this + 328);
    v109 = v106;
    v110 = v107;
    v208 = v106;
    v209 = v107;
    if ( *(uint8_t *)(v108 + 5860) )
    if ( (__int16)v198 == v199 + 1 && SHIWORD(v198) == v201 + 2 )
    v110 = v107 + *(uint32_t *)(v108 + 3788);
    v111 = *(uint32_t *)(v108 + 3792);
    v109 = *(uint32_t *)(v108 + 3784) + v106;
    v209 = v110;
    v208 = v109;
    v210 = v111;
    else
    v110 = v209;
    v109 = v208;
    if ( *(uint8_t *)(v108 + 5861) && (__int16)v198 == v199 + 2 && SHIWORD(v198) == v201 + 2 )
    v112 = *(uint32_t *)(v108 + 3792);
    v109 += *(uint32_t *)(v108 + 3784);
    v110 += *(uint32_t *)(v108 + 3788);
    v208 = v109;
    v209 = v110;
    v210 += v112;
    if ( *(uint8_t *)(v108 + 5862) && (__int16)v198 == v199 + 2 && SHIWORD(v198) == v201 + 1 )
    v113 = *(uint32_t *)(v108 + 3784) + v109;
    v114 = *(uint32_t *)(v108 + 3788);
    v115 = *(uint32_t *)(v108 + 3792);
    v208 = v113;
    v209 = v110 + v114;
    v210 += v115;
    ++IKnowWhatImDoing;
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, int *, int))(*(uint32_t *)v245 + 216))(v245, &v208, v211) )
    if ( *((uint32_t *)v245 + 361)
    && !*(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 132))(v245) + 3476)
    && !*(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 132))(v245) + 3284) )
    if ( *((uint32_t *)v245 + 361) )
    TechnoClass::SetFocus(v245, *((uint32_t *)v245 + 361));
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 2, 0);
    v116 = *(uint32_t *)v245;
    v117 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v195 + 2);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v116 + 1152))(v245, v117, 1);
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5825) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 11, 0);
    LODWORD(v194) = *BuildingPlacement::FindPosition(&v224, v245);
    if ( (uint32_t)v194 == g_TerrainTypeTable || !*(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    TechnoClass::SetFocus(v245, 0);
    else
    v118 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v194);
    TechnoClass::SetFocus(v245, (int)v118);
    v119 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v194);
    BuildingClass::AddToProductionQueue((int)v119);
    if ( (*(int (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 2, v245) == 1 )
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 9, v245);
    goto LABEL_99;
    else
    v63 = *(int (__thiscall ***)(void*377 *))this;
    v201 = (int)v246;
    v64 = *(uint32_t *)((int (__thiscall *)(void*377 *, char *, uint8_t *))v63[309])(this, v230, v245);
    v65 = v64;
    v203 = v64;
    v66 = HIWORD(v64);
    if ( v64 == g_TerrainTypeTable )
    return 0;
    v67 = *(int (__thiscall ***)(void*377 *))this;
    v216 = (v65 << 8) + 128;
    v217 = (v66 << 8) + 128;
    v68 = (int *)((int (__thiscall *)(void*377 *, char *))v67[18])(this, v242);
    v206 = *v68;
    v69 = Math::CalcAngle((double)v68[1] - (double)v216, (double)v215 - (double)v206);
    LOWORD(v206) = Math::RoundToInt((v69 - 1.570796326794897) * -10430.06004058427);
    v215 = (unsigned __int8)((((unsigned int)v206 >> 7) + 1) >> 1);
    v70 = *(int (__thiscall ***)(void*377 *))this;
    v209 = v202;
    v71 = *(uint32_t *)((int (__thiscall *)(void*377 *, uint32_t *))v70[110])(this, v228);
    v72 = (uint32_t *)*((uint32_t *)this + 328);
    v205 = v71;
    v202 = (__int16)v71;
    v73 = v208;
    if ( (__int16)v208 < (__int16)v71 + BuildingTypeClass::GetFoundationWidth(v72) )
    if ( (__int16)v208 < (__int16)v71 )
    v73 = v208 + 1;
    else
    v73 = v208 - 1;
    v74 = *((uint32_t *)this + 328);
    v204 = SHIWORD(v205);
    v75 = BuildingTypeClass::GetFoundationHeight(v74, 0);
    v76 = HIWORD(v208);
    if ( SHIWORD(v208) < SHIWORD(v205) + v75 )
    if ( SHIWORD(v208) < SHIWORD(v205) )
    v76 = HIWORD(v208) + 1;
    else
    v76 = HIWORD(v208) - 1;
    v77 = (v73 << 8) + 128;
    v78 = (v76 << 8) + 128;
    v213 = 0;
    v79 = *((uint32_t *)this + 328);
    v80 = v77;
    v81 = v78;
    v211 = v77;
    v212 = v78;
    if ( *(uint8_t *)(v79 + 5860) )
    if ( (__int16)v201 == v202 + 1 && SHIWORD(v201) == v204 + 2 )
    v80 = v77 + *(uint32_t *)(v79 + 3784);
    v82 = *(uint32_t *)(v79 + 3792);
    v81 = v78 + *(uint32_t *)(v79 + 3788);
    v211 = v80;
    v212 = v81;
    v213 = v82;
    else
    v81 = v212;
    v80 = v211;
    if ( *(uint8_t *)(v79 + 5861) && (__int16)v201 == v202 + 2 && SHIWORD(v201) == v204 + 2 )
    v83 = v81 + *(uint32_t *)(v79 + 3788);
    v80 += *(uint32_t *)(v79 + 3784);
    v207 = (uint32_t *)(v213 + *(uint32_t *)(v79 + 3792));
    v81 = v83;
    v211 = v80;
    v212 = v83;
    v213 = (int)v207;
    if ( *(uint8_t *)(v79 + 5862) && (__int16)v201 == v202 + 2 && SHIWORD(v201) == v204 + 1 )
    v84 = *(uint32_t *)(v79 + 3784) + v80;
    v85 = *(uint32_t *)(v79 + 3788);
    v86 = *(uint32_t *)(v79 + 3792);
    v211 = v84;
    v212 = v81 + v85;
    v213 += v86;
    ++IKnowWhatImDoing;
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, int *, int))(*(uint32_t *)v245 + 216))(v245, &v211, v214) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 2, 0);
    v87 = *(uint32_t *)v245;
    v88 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v197);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v87 + 1152))(v245, v88, 1);
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 11, 0);
    v197 = *BuildingPlacement::FindPosition(&v227, v245);
    if ( v197 == g_TerrainTypeTable || !*(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    TechnoClass::SetFocus(v245, 0);
    else
    v193 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v197);
    TechnoClass::SetFocus(v245, (int)v193);
    goto LABEL_99;
    goto LABEL_146;
    if ( !*(uint8_t *)(v28 + 3278) )
    TechnoClass::SetFocus(v245, *((uint32_t *)this + 134));
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 16 )
    v55 = 0;
    v210 = *(uint32_t *)(*((uint32_t *)this + 135) + 120);
    v56 = v210;
    if ( v210 <= 0 )
    return 1;
    while ( 1 )
    v57 = *(void*377 **)(*(uint32_t *)(*((uint32_t *)this + 135) + 108) + 4 * v55);
    if ( *((uint32_t *)v57 + 328) == *((uint32_t *)this + 328) && v57 != this )
    if ( (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v57 + 388))(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 135)
    + 108)
    + 4 * v55)) == 5
    && !*((uint32_t *)v57 + 329) )
    v58 = *((uint32_t *)this + 329);
    *((uint32_t *)v57 + 329) = v58;
    *((uint32_t *)this + 329) = 0;
    result = (*(int (__thiscall **)(void*377 *, uint8_t *, int))(*(uint32_t *)v57 + 256))(
    v57,
    v245,
    g_TerrainTypeTable);
    *((uint32_t *)v57 + 329) = 0;
    *((uint32_t *)this + 329) = v58;
    return result;
    v56 = v210;
    if ( ++v55 >= v56 )
    return 1;
    v201 = 64;
    ++IKnowWhatImDoing;
    v59 = *(uint32_t *)v245;
    v60 = (*(int (__thiscall **)(void*377 *, char *, uint32_t, int))(*(uint32_t *)this + 180))(this, v238, 0, 64);
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, int))(v59 + 216))(v245, v60) )
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v245 + 292))(v245, 0);
    v61 = *(uint32_t *)v245;
    v62 = (*(int (__thiscall **)(void*377 *, char *, uint32_t))(*(uint32_t *)this + 180))(this, v239, 0);
    (*(void (__thiscall **)(uint8_t *, int))(v61 + 436))(v245, v62);
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)v245 + 292))(v245, 1);
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 2, v245);
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 24, v245);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 16, 0);
    goto LABEL_99;
    goto LABEL_146;
    if ( !Team::AllMembersValid((int *)this) )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 16, 0);
    v29 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v214);
    LOWORD(v204) = *v29 / 256;
    v30 = *((uint32_t *)this + 134);
    HIWORD(v204) = v29[1] / 256;
    v206 = v204;
    if ( v30 )
    v31 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v30 + 72))(v30, &v213);
    v32 = *v31 / 256;
    v33 = v31[1] / 256;
    v34 = (__int16 *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 440))(this, v231);
    v35 = *v34;
    v205 = (__int16)v32;
    v36 = v34[1];
    v205 = (__int16)v33;
    v37 = Math::CalcAngle((double)v36 - (double)(__int16)v33, (double)(__int16)v32 - (double)v35);
    LOWORD(v205) = Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427);
    v38 = (((v205 >> 12) + 1) >> 1) & 7;
    v39 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v204);
    if ( Cell::IsBridge(v39) == (uint32_t *)this )
    v40 = (_WORD *)(4 * (v38 & 7) + 9041544);
    do
    v41 = HIWORD(v204) + v40[1];
    LOWORD(v202) = *v40 + v204;
    HIWORD(v202) = v41;
    v204 = v202;
    v42 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v204);
    while ( Cell::IsBridge(v42) == (uint32_t *)this );
    if ( *((uint32_t *)this + 134) && *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v204) + 59) == 2 )
    v196 = 0.0;
    v221 = 0;
    v222[0] = 0;
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v204);
    JUMPOUT(0x444329);
    v43 = *(int (__thiscall ***)(void*377 *))this;
    v217 = 0;
    v44 = (uint32_t *)((int (__thiscall *)(void*377 *, int *))v43[18])(this, &v211);
    LODWORD(v196) = 0;
    LOWORD(v201) = *v44 / 256;
    v45 = v44[1];
    *(_QWORD *)&v195 = (unsigned int)&v216;
    v194 = 0x100000000LL;
    HIWORD(v201) = v45 / 256;
    v46 = *(uint32_t *)v245;
    v218 = v201;
    v47 = (*(int (__thiscall **)(uint8_t *))(v46 + 132))(v245);
    v203 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v218,
    v231,
    (__int16 *)&v218,
    *(uint32_t *)(v47 + 1660),
    -1,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (__int16 *)LODWORD(v195),
    SBYTE4(v195),
    0);
    v48 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v203);
    v49 = *(uint32_t *)v245;
    v50 = (*(int (__thiscall **)(void *, uint8_t *, int))(*(uint32_t *)v48 + 72))(v48, v240, 64);
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, int))(v49 + 216))(v245, v50) )
    v51 = *((uint32_t *)this + 134);
    if ( v51 )
    (*(void (__thiscall **)(uint8_t *, int, int))(*(uint32_t *)v245 + 1152))(v245, v51, 1);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v245 + 488))(v245, 2, 0);
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v245 + 292))(v245, 0);
    v52 = *(uint32_t *)v245;
    v53 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v196);
    Coords = CellClass::GetCoords(v53, v241);
    (*(void (__thiscall **)(uint8_t *, int *))(v52 + 436))(v245, Coords);
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)v245 + 292))(v245, 1);
    return 2;
    return 0;
    case 1:
    HouseClass::UpdateBuildState(*((uint32_t *)this + 135), 2);
    v5 = *((uint32_t *)this + 135);
    v201 = (int)v245;
    *(uint32_t *)(v5 + 22104) = -1;
    if ( Array::ContainsValue((int *)this, v201)
    || HouseClass::IonSensitivesShouldBeOffline() && !*(uint8_t *)(*((uint32_t *)v3 + 433) + 3597) )
    ObjectClass::SetAnim(v3, 0);
    ++IKnowWhatImDoing;
    if ( HouseClass::IonSensitivesShouldBeOffline() )
    PlacementCells_Alt = MapClass::FindPlacementCellsAlt(v3, &v232, (int)this);
    v16 = *(uint32_t *)v3;
    v210 = *PlacementCells_Alt;
    v228[1] = 0;
    v227 = ((__int16)v210 << 8) + 128;
    v228[0] = (SHIWORD(v210) << 8) + 128;
    v17 = AbstractClass::GetField9(v3);
    if ( (*(unsigned __int8 (__thiscall **)(char *, int *, int))(v16 + 216))(v3, &v227, v17) )
    LABEL_99:
    --IKnowWhatImDoing;
    return 2;
    else
    v18 = *(uint32_t *)v3;
    v19 = AbstractClass::GetField9(v3);
    v20 = (*(int (__thiscall **)(void*377 *, uint8_t *, char *, int))(*(uint32_t *)this + 168))(this, v240, v3, v19);
    if ( (*(unsigned __int8 (__thiscall **)(char *, int))(v18 + 216))(v3, v20) )
    (*(void (__thiscall **)(void*377 *, int, char *))(*(uint32_t *)this + 632))(this, 2, v3);
    (*(void (__thiscall **)(void*377 *, int, char *))(*(uint32_t *)this + 632))(this, 24, v3);
    v21 = *(uint32_t *)v3;
    v22 = (*(int (__thiscall **)(void*377 *, int *, char *))(*(uint32_t *)this + 168))(this, v241, v3);
    (*(void (__thiscall **)(char *, int))(v21 + 436))(v3, v22);
    *((uint32_t *)v3 + 435) = this;
    v23 = *((uint32_t *)this + 134);
    if ( v23 && !*(uint8_t *)(*((uint32_t *)v3 + 433) + 3597) )
    (*(void (__thiscall **)(char *, int, int))(*(uint32_t *)v3 + 1152))(v3, v23, 1);
    (*(void (__thiscall **)(char *, int, uint32_t))(*(uint32_t *)v3 + 488))(v3, 2, 0);
    goto LABEL_99;
    else
    if ( *(uint8_t *)(*((uint32_t *)v3 + 433) + 3597) )
    return 0;
    LOWORD(v213) = dword_87F8E8;
    HIWORD(v213) = dword_87F8E8;
    HIWORD(v207) = g_Cell_PositionLUT;
    LOWORD(v219) = dword_87F8E4;
    HIWORD(v219) = -(__int16)dword_87F8E4;
    LOWORD(v210) = dword_87F8E4 + 1;
    HIWORD(v210) = g_Cell_PositionLUT - dword_87F8E4;
    LOWORD(v207) = dword_87F8E8 + dword_87F8E4 + 1;
    v6 = g_Cell_PositionLUT - dword_87F8E4 + dword_87F8E8;
    v7 = *(int (__thiscall ***)(void*377 *))this;
    HIWORD(v207) = v6;
    v8 = (uint32_t *)((int (__thiscall *)(void*377 *, char *))v7[18])(this, v237);
    LOWORD(v218) = *v8 / 256;
    HIWORD(v218) = v8[1] / 256;
    if ( (__int16)(v218 - v206) - (__int16)(HIWORD(v218) - HIWORD(v206)) <= dword_87F8EC )
    v200 = dword_87F8F0;
    LOWORD(v206) = v206 - 1;
    HIWORD(v206) = v6;
    v199 = 0;
    v205 = v206;
    v9 = (char *)ScenarioClass_Instance + 536;
    else
    LOWORD(v209) = dword_87F8EC;
    HIWORD(v218) = v6;
    HIWORD(v209) = -(__int16)dword_87F8EC;
    LOWORD(v218) = v206 - 1;
    LOWORD(v206) = dword_87F8EC + v206 - 1;
    HIWORD(v206) = v6 - dword_87F8EC;
    v205 = v206;
    v9 = (char *)ScenarioClass_Instance + 536;
    v200 = dword_87F8F0;
    v199 = 0;
    v10 = Random::Range(v9, v199, v200);
    LOWORD(v205) = v10 + v205;
    HIWORD(v205) += v10;
    v200 = 0;
    v225[0] = ((__int16)v205 << 8) + 128;
    ++IKnowWhatImDoing;
    v11 = *(uint32_t *)v3;
    v225[1] = (SHIWORD(v205) << 8) + 128;
    v225[2] = 0;
    if ( (*(unsigned __int8 (__thiscall **)(char *, uint32_t *, uint32_t))(v11 + 216))(v3, v225, 0) )
    v12 = *((uint32_t *)this + 134);
    if ( v12 )
    (*(void (__thiscall **)(char *, int, int))(*(uint32_t *)v3 + 1152))(v3, v12, 1);
    (*(void (__thiscall **)(char *, int))(*(uint32_t *)v3 + 496))(v3, 2);
    else
    v204 = *MapClass::FindPlacementCellsAlt(v3, &v229, (int)this);
    if ( v204 == g_TerrainTypeTable )
    (*(void (__thiscall **)(char *, uint32_t, int))(*(uint32_t *)v3 + 1152))(v3, 0, 1);
    (*(void (__thiscall **)(char *, int))(*(uint32_t *)v3 + 496))(v3, 2);
    else
    v13 = *(uint32_t *)v3;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v204);
    (*(void (__thiscall **)(char *, void *, int))(v13 + 1152))(v3, v14, 1);
    (*(void (__thiscall **)(char *, int))(*(uint32_t *)v3 + 496))(v3, 2);
    goto LABEL_99;
    LABEL_146:
    --IKnowWhatImDoing;
    result = 0;
    break;
    case 2:
    if ( (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    return 0;
    HouseClass::UpdateBuildState(*((uint32_t *)this + 135), 6);
    *(uint32_t *)(*((uint32_t *)this + 135) + 22092) = -1;
    v123 = BuildingQueue::AllocSlot(
    (uint32_t *)(*((uint32_t *)this + 135) + 22272),
    *(uint32_t *)(*((uint32_t *)v245 + 328) + 3576));
    v124 = *((uint32_t *)v245 + 328);
    v207 = (uint32_t *)v123;
    v213 = 0;
    v214 = 0;
    v215 = 0;
    v209 = v124;
    if ( v123 && ((v125 = (__int16 *)(v123 + 4), *(_WORD *)(v123 + 4)) || *(_WORD *)(v123 + 6)) )
    if ( *(uint8_t *)(v209 + 3720) || (unsigned __int8)BuildingTypeClass::ProcessData(v209, (int)v125) )
    v134 = v125[1];
    v135 = *v125;
    v133 = v207;
    v132 = (v135 << 8) + 128;
    v131 = (v134 << 8) + 128;
    v213 = v132;
    v214 = v131;
    v215 = 0;
    else
    v126 = HouseClass::ScanBuildLocation(
    *((uint32_t *)this + 135),
    &v235,
    v209,
    (int (__fastcall *)(int, int *, int, int))globalHelper_005F80,
    -1);
    v127 = *(__int16 *)v126;
    v128 = *((__int16 *)v126 + 1);
    v215 = 0;
    v129 = (v127 << 8) + 128;
    v130 = (v128 << 8) + 128;
    v213 = v129;
    v214 = v130;
    if ( v129 == g_BuildingClassPool && v130 == dword_89C84C && !dword_89C850 )
    return 0;
    LOWORD(v210) = v129 / 256;
    HIWORD(v210) = v130 / 256;
    *(uint32_t *)v125 = v210;
    v131 = v214;
    v132 = v213;
    v133 = v207;
    else
    if ( *(uint8_t *)(v209 + 3720) )
    v138 = *(uint32_t *)HouseClass::FindBestProductionBuilding((int)v236, v209);
    v219 = v138;
    if ( v138 == g_TerrainTypeTable )
    v131 = v214;
    v132 = v213;
    else
    v139 = (SHIWORD(v138) << 8) + 128;
    v132 = ((__int16)v138 << 8) + 128;
    v131 = v139;
    v213 = v132;
    v214 = v139;
    v215 = 0;
    else
    v136 = HouseClass::ScanBuildLocation(
    *((uint32_t *)this + 135),
    &v234,
    v209,
    (int (__fastcall *)(int, int *, int, int))globalHelper_005F80,
    -1);
    v137 = (*((__int16 *)v136 + 1) << 8) + 128;
    v132 = (*(__int16 *)v136 << 8) + 128;
    v131 = v137;
    v213 = v132;
    v214 = v137;
    v215 = 0;
    v133 = v207;
    if ( v207 && (v132 != g_BuildingClassPool || v131 != dword_89C84C || v215 != dword_89C850) )
    LOWORD(v210) = v132 / 256;
    HIWORD(v210) = v131 / 256;
    v207[1] = v210;
    v131 = v214;
    v132 = v213;
    if ( v132 == g_BuildingClassPool && v131 == dword_89C84C && v215 == dword_89C850 )
    if ( *(uint8_t *)(v209 + 3720) )
    if ( (uint32_t *)BuildingQueue::AllocSlot((uint32_t *)(*((uint32_t *)this + 135) + 22272), -1) == v133 )
    FreeSlot = BuildingQueue::FindFreeSlot((uint32_t *)(*((uint32_t *)this + 135) + 22272), -1);
    v185 = *((uint32_t *)this + 135) + 22276;
    v186 = *(uint32_t *)(v185 + 16);
    if ( FreeSlot < v186 )
    v187 = v186 - 1;
    v188 = FreeSlot;
    *(uint32_t *)(v185 + 16) = v187;
    if ( FreeSlot < v187 )
    v189 = 16 * FreeSlot;
    do
    v190 = *(uint32_t *)(v185 + 4);
    v191 = (uint32_t *)(v190 + v189 + 16);
    v192 = (uint32_t *)(v189 + v190);
    ++v188;
    v189 += 16;
    *v192 = *v191;
    v192[1] = v191[1];
    v192[2] = v191[2];
    v192[3] = v191[3];
    while ( v188 < *(uint32_t *)(v185 + 16) );
    return 0;
    LOWORD(v210) = v132 / 256;
    HIWORD(v210) = v131 / 256;
    v140 = (void*375 *)*((uint32_t *)this + 135);
    v223 = v210;
    v141 = *(uint32_t *)v245;
    v201 = (int)v140;
    v200 = (int)&v223;
    v142 = (void *)(*(int (__thiscall **)(uint8_t *))(v141 + 136))(v245);
    v143 = BuildingClass::ApplyFoundationDamage(v142, &v223, (void*375 *)v201);
    if ( v143 )
    v144 = v143 - 1;
    if ( !v144 )
    v145 = HouseClass::FailedToPlaceNode((int)v133);
    if ( GameMode_Current[0] )
    if ( v145 > RulesClass_Instance->AIIonCannonAPCValue[1] )
    if ( v133 )
    v146 = (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)(*((uint32_t *)this + 135) + 22276) + 20))(
    *((uint32_t *)this + 135) + 22276,
    v133);
    v147 = *((uint32_t *)this + 135) + 22276;
    v148 = *(uint32_t *)(v147 + 16);
    if ( v146 < v148 )
    v149 = v148 - 1;
    v150 = v146;
    *(uint32_t *)(v147 + 16) = v149;
    if ( v146 < v149 )
    v151 = 16 * v146;
    do
    v152 = *(uint32_t *)(v147 + 4);
    v153 = (uint32_t *)(v152 + v151 + 16);
    v154 = (uint32_t *)(v151 + v152);
    ++v150;
    v151 += 16;
    *v154 = *v153;
    v154[1] = v153[1];
    v154[2] = v153[2];
    v154[3] = v153[3];
    while ( v150 < *(uint32_t *)(v147 + 16) );
    return 1;
    if ( v144 != 1 )
    return 0;
    else if ( (*(unsigned __int8 (__thiscall **)(uint8_t *, int *, uint32_t))(*(uint32_t *)v245 + 216))(v245, &v213, 0) )
    if ( *((uint32_t *)v245 + 182) )
    BuildingClass::RefreshOccupierCache();
    if ( v133 )
    v155 = *((uint32_t *)this + 135);
    if ( *(uint32_t *)(*((uint32_t *)v245 + 328) + 3576) == *(uint32_t *)(v155 + 22092) )
    *(uint32_t *)(v155 + 22092) = -1;
    if ( *((uint32_t *)v245 + 43) == -1 && *((uint32_t *)v245 + 45) == 18 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 492))(v245);
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v245 + 44))(v245) == 6 )
    v156 = *((uint32_t *)v245 + 328);
    if ( *(uint8_t *)(v156 + 5824) )
    v199 = *((uint32_t *)v245 + 328);
    LOWORD(v208) = v211 / 256;
    HIWORD(v208) = v212 / 256;
    v198 = *((uint32_t *)this + 135);
    v222[0] = v208;
    globalHelper_088570((int)v222, v198, v199);
    else
    v157 = *(uint32_t *)(v156 + 3668);
    if ( v157 && *(uint8_t *)(v157 + 680) )
    v199 = *((uint32_t *)v245 + 328);
    LOWORD(v208) = v211 / 256;
    HIWORD(v208) = v212 / 256;
    v198 = *((uint32_t *)this + 135);
    v221 = v208;
    ScanBuildingPlacementCells((int)&v221, v198, v199);
    if ( *((uint32_t *)v245 + 328) == RulesClass_Instance->NSGates[1] )
    v158 = (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)(*((uint32_t *)this + 135) + 22276) + 20))(
    *((uint32_t *)this + 135) + 22276,
    v133);
    v159 = *((uint32_t *)this + 135);
    v160 = v158 + 1;
    v161 = *(uint32_t *)(v159 + 22292);
    if ( v158 + 1 < v161 )
    v162 = *(uint32_t *)(v159 + 22280);
    for ( i = (int *)(v162 + 16 * v160); *i < 0 || !*(uint8_t *)(*((uint32_t *)g_TriggerTypeCount + *i) + 5894); i += 4 )
    if ( ++v160 >= v161 )
    return 2;
    v164 = *((uint32_t *)v245 + 39);
    v165 = *((uint32_t *)v245 + 40);
    v215 = *((uint32_t *)v245 + 41);
    LOWORD(v207) = v164 / 256;
    HIWORD(v207) = v165 / 256;
    *(uint32_t *)(16 * v160 + v162 + 4) = v207;
    return 2;
    if ( !v133 )
    return 0;
    v166 = (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)(*((uint32_t *)this + 135) + 22276) + 20))(
    *((uint32_t *)this + 135) + 22276,
    v133);
    v167 = *((uint32_t *)g_TriggerTypeCount + *v133);
    if ( !*(uint8_t *)(v167 + 5489) && !*(uint8_t *)(v167 + 5815) )
    v168 = *((uint32_t *)this + 135);
    v169 = 0;
    v170 = v212 / 256;
    v171 = v213 / 256;
    if ( *(int *)(v168 + 22292) <= 0 )
    return 0;
    v172 = 0;
    do
    v173 = *(uint32_t *)(v168 + 22280);
    v174 = *(_WORD *)(v173 + v172 + 4) == (unsigned __int16)v170;
    v175 = v173 + v172 + 4;
    if ( v174 && *(_WORD *)(v175 + 2) == (_WORD)v171 )
    v209 = 0;
    *(uint32_t *)v175 = 0;
    v168 = *((uint32_t *)this + 135);
    ++v169;
    v172 += 16;
    while ( v169 < *(uint32_t *)(v168 + 22292) );
    return 0;
    v176 = *((uint32_t *)this + 135) + 22276;
    v177 = *(uint32_t *)(v176 + 16);
    if ( v166 < v177 )
    v178 = v177 - 1;
    v179 = v166;
    *(uint32_t *)(v176 + 16) = v178;
    if ( v166 < v178 )
    v180 = 16 * v166;
    do
    v181 = *(uint32_t *)(v176 + 4);
    v182 = (uint32_t *)(v181 + v180 + 16);
    v183 = (uint32_t *)(v180 + v181);
    ++v179;
    v180 += 16;
    *v183 = *v182;
    v183[1] = v182[1];
    v183[2] = v182[2];
    v183[3] = v182[3];
    while ( v179 < *(uint32_t *)(v176 + 16) );
    return 0;
    return 0;
    case 3:
    return 0;
    return result;
}

int  BuildingClass::vt_312_(#377 *this)
{
    int result; // eax
    int j; // esi
    int m; // esi
    int k; // esi
    int i; // esi
    result = *((uint32_t *)this + 135);
    if ( (void*375 *)result == HouseClass_Player )
    LOBYTE(result) = *((uint8_t *)this + 129);
    if ( !(uint8_t)result )
    LOBYTE(result) = *((uint8_t *)this + 1051);
    if ( (uint8_t)result )
    LOBYTE(result) = *((uint8_t *)this + 1632);
    if ( (uint8_t)result )
    result = *(uint32_t *)(*((uint32_t *)this + 328) + 3768) - 3;
    switch ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    case 3:
    result = g_TypeClass_FindCache;
    for ( i = 0; i < g_TypeClass_FindCache; ++i )
    if ( HouseClass::CanBuild(*((uint32_t *)g_AircraftTypeCount + i), 0, 1) )
    SidebarClass::AddCameo((int *)&MapClass_Instance, 3, i);
    result = g_TypeClass_FindCache;
    break;
    case 7:
    result = g_TriggerClassCount;
    for ( j = 0; j < g_TriggerClassCount; ++j )
    if ( HouseClass::CanBuild(*((uint32_t *)g_TriggerTypeCount + j), 0, 1) )
    SidebarClass::AddCameo((int *)&MapClass_Instance, 7, j);
    result = g_TriggerClassCount;
    break;
    case 0x10:
    result = g_LoadScreenProgress;
    for ( k = 0; k < g_LoadScreenProgress; ++k )
    if ( HouseClass::CanBuild(*((uint32_t *)Factory_ExitCellTable + k), 0, 1) )
    SidebarClass::AddCameo((int *)&MapClass_Instance, 16, k);
    result = g_LoadScreenProgress;
    break;
    case 0x28:
    result = g_CrateCount;
    for ( m = 0; m < g_CrateCount; ++m )
    if ( HouseClass::CanBuild(*((uint32_t *)g_UnitTypeCount2 + m), 0, 1) )
    SidebarClass::AddCameo((int *)&MapClass_Instance, 40, m);
    result = g_CrateCount;
    break;
    default:
    return result;
    return result;
}

int  BuildingClass::Sell(#377 *this)
{
    char *v2; // edx
    int v3; // eax
    int v4; // ecx
    uint32_t *v5; // edi
    int v6; // ebp
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // ecx
    int v11; // eax
    int v12; // ecx
    int v13; // eax
    int v14; // eax
    int v15; // edx
    char *v16; // ecx
    char v17; // bl
    RulesClass *v18; // eax
    int i; // ebp
    int v20; // edx
    void **v21; // edi
    void *v22; // eax
    int v23; // ecx
    int v24; // kr08_4
    void **v25; // eax
    void **v26; // eax
    int v27; // ecx
    __int16 v28; // di
    __int16 v29; // bp
    void **v30; // eax
    void **v31; // eax
    uint32_t *v32; // ecx
    int FoundationWidth; // ebp
    int FoundationHeight; // edi
    int v35; // ecx
    int v36; // eax
    int v37; // ecx
    int v38; // ebp
    int v39; // edi
    __int16 v40; // bx
    uint8_t *v41; // eax
    int *v42; // eax
    int v43; // ecx
    int v44; // edx
    int v45; // eax
    int v46; // ecx
    int result; // eax
    char v48; // [esp+13h] [ebp-2Dh]
    int v49; // [esp+14h] [ebp-2Ch]
    int v50; // [esp+14h] [ebp-2Ch]
    int v51; // [esp+14h] [ebp-2Ch]
    int v52; // [esp+14h] [ebp-2Ch]
    int v53; // [esp+18h] [ebp-28h] BYREF
    int v54; // [esp+1Ch] [ebp-24h] BYREF
    int v55; // [esp+20h] [ebp-20h] BYREF
    __int16 v56; // [esp+28h] [ebp-18h]
    __int16 v57; // [esp+2Ah] [ebp-16h]
    uint32_t v58[4]; // [esp+30h] [ebp-10h] BYREF
    v48 = 0;
    v2 = (char *)this + 156;
    v3 = *((uint32_t *)this + 39);
    v4 = *((uint32_t *)this + 40);
    v58[2] = *((uint32_t *)v2 + 2);
    LOWORD(v55) = v3 / 256;
    HIWORD(v55) = v4 / 256;
    if ( !*((uint8_t *)this + 129) && *((uint32_t *)this + 328) )
    v5 = (uint32_t *)((char *)this + 1480);
    v6 = 8;
    do
    if ( *v5 )
    (*(void (__thiscall **)(uint32_t))(*(uint32_t *)*v5 + 248))(*v5);
    *v5 = 0;
    ++v5;
    --v6;
    while ( v6 );
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5836) )
    if ( *((uint8_t *)this + 1764) )
    --*(uint32_t *)(*((uint32_t *)this + 135) + 21388);
    v7 = *((uint32_t *)this + 135);
    if ( *(int *)(v7 + 21388) < 0 )
    *(uint32_t *)(v7 + 21388) = 0;
    v8 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v8 + 5835) )
    if ( *((uint8_t *)this + 1764) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 724) -= *(uint32_t *)(v8 + 6016);
    v9 = *((uint32_t *)this + 135);
    if ( *(int *)(v9 + 724) < 0 )
    *(uint32_t *)(v9 + 724) = 0;
    v10 = *(uint32_t *)(*((uint32_t *)this + 328) + 5476);
    if ( v10 )
    if ( *((uint8_t *)this + 1764) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 356) -= v10;
    v11 = *((uint32_t *)this + 135);
    if ( *(int *)(v11 + 356) < 0 )
    *(uint32_t *)(v11 + 356) = 0;
    v12 = *(uint32_t *)(*((uint32_t *)this + 328) + 5480);
    if ( v12 )
    if ( *((uint8_t *)this + 1764) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 360) -= v12;
    v13 = *((uint32_t *)this + 135);
    if ( *(int *)(v13 + 360) < 0 )
    *(uint32_t *)(v13 + 360) = 0;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    BuildingClass::DemolishBridgeCheck((int *)this, 0);
    if ( !IKnowWhatImDoing )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5832) )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1272))(this, g_TerrainTypeTable);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3377) )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1280))(this, g_TerrainTypeTable);
    v14 = *((uint32_t *)this + 328);
    if ( (!*(uint32_t *)(v14 + 1032) || !*(uint8_t *)(v14 + 1516))
    && !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this) )
    RecalculateBuildingFoundation((uint32_t **)this);
    v15 = 0;
    v16 = (char *)this + 1516;
    while ( !*(uint32_t *)v16 || !*(uint8_t *)(*(uint32_t *)v16 + 5987) )
    ++v15;
    v16 += 4;
    if ( v15 >= 3 )
    goto LABEL_40;
    v48 = 1;
    LABEL_40:
    if ( !WTFMode )
    v17 = 1;
    goto LABEL_75;
    v18 = RulesClass_Instance;
    if ( *((uint32_t *)this + 328) == RulesClass_Instance->NSGates[1] )
    for ( i = 0; i < 8; i += 2 )
    v20 = i & 7;
    LOWORD(v49) = v55 + LOWORD(Direction_X_Offsets[v20]);
    HIWORD(v49) = HIWORD(v55) + HIWORD(Direction_X_Offsets[v20]);
    v53 = v49;
    v21 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53);
    BuildingClass::ValidatePlacement(v21, 0);
    v22 = v21[17];
    if ( v22 != (void *)-1
    && *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * (uint32_t)v22] + 680)
    && *((uint8_t *)v21 + 286) < 0x10u )
    BuildingClass::SellEffects((int)v21, 200);
    v18 = RulesClass_Instance;
    v23 = *((uint32_t *)this + 328);
    if ( v23 == v18->ConcreteWalls[1] || v23 == v18->ConcreteWalls[3] )
    v24 = v55;
    HIWORD(v50) = HIWORD(v55);
    LOWORD(v50) = v55 - 1;
    v53 = v50;
    v25 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53);
    BuildingClass::ValidatePlacement(v25, 0);
    HIWORD(v50) = HIWORD(v24);
    LOWORD(v50) = v24 + 3;
    v53 = v50;
    v26 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53);
    BuildingClass::ValidatePlacement(v26, 0);
    v18 = RulesClass_Instance;
    v27 = *((uint32_t *)this + 328);
    if ( v27 == v18->ConcreteWalls[2] || v27 == v18->NSGates[0] )
    v28 = HIWORD(v55);
    v29 = v55;
    v53 = v55 - 0x10000;
    v30 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53);
    BuildingClass::ValidatePlacement(v30, 0);
    LOWORD(v51) = v29;
    HIWORD(v51) = v28 + 3;
    v53 = v51;
    v31 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v53);
    BuildingClass::ValidatePlacement(v31, 0);
    v32 = (uint32_t *)*((uint32_t *)this + 328);
    if ( !v32[918] )
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v32);
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0);
    v35 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v55);
    v36 = 0;
    v58[0] = v35;
    v37 = FoundationHeight + 2;
    v53 = 0;
    v55 = FoundationHeight + 2;
    if ( FoundationHeight + 2 > 0 )
    v38 = FoundationWidth + 2;
    do
    v39 = 0;
    if ( v38 > 0 )
    v56 = LOWORD(v58[0]) - 1;
    v57 = HIWORD(v58[0]) - 1;
    v40 = LOWORD(v58[0]) - 1;
    HIWORD(v52) = v36 + HIWORD(v58[0]) - 1;
    do
    LOWORD(v52) = v40 + v39;
    v54 = v52;
    v41 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v54);
    ++v39;
    --v41[290];
    while ( v39 < v38 );
    v37 = v55;
    v36 = v53;
    v53 = ++v36;
    while ( v36 < v37 );
    if ( TacticalClass_Instance )
    v42 = (int *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 300))(this, v58);
    Cell::CreateCrater(*v42, v42[1], v42[2], v42[3], 0);
    v43 = *((uint32_t *)this + 384);
    if ( v43 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v43 + 248))(v43);
    BuildingClass::DecrementTypeCounter(*((uint32_t **)this + 135), this);
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    BuildingClass::CalcExitCoords(*((int **)this + 135));
    if ( *((void*375 **)this + 135) == HouseClass_Player )
    byte_880CF4 = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    HouseClass::RecordCratePlacement(*((int **)this + 135), this);
    v17 = TechnoClass::CleanupDeploy(this);
    if ( v48 )
    HouseClass::AcquiredThreatNode(*((uint8_t **)this + 135));
    v45 = *((uint32_t *)this + 328);
    v46 = *(uint32_t *)(v45 + 3768);
    if ( v46 )
    LOBYTE(v44) = *(uint8_t *)(v45 + 3278);
    HouseClass::UpdateProduction(*((uint32_t *)this + 135), v46, v44, 0);
    LABEL_75:
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 5822) )
    result = IKnowWhatImDoing;
    if ( !IKnowWhatImDoing )
    *((uint32_t *)this + 390) = 0;
    LOBYTE(result) = v17;
    return result;
}

// 0x00445E50
int  BuildingClass::GetFacingToTarget(#377 *this)
{
    int v2; // ecx
    int *v3; // edi
    int *v4; // eax
    double v5; // st7
    int v7; // ecx
    int v8; // [esp+20h] [ebp-20h]
    int v9; // [esp+24h] [ebp-1Ch] BYREF
    char v10[12]; // [esp+28h] [ebp-18h] BYREF
    char v11[12]; // [esp+34h] [ebp-Ch] BYREF
    int *v12; // [esp+44h] [ebp+4h]
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this) || (v2 = *((uint32_t *)this + 173)) == 0 )
    v7 = *ProgressTimer::GetValue((_WORD *)this + 452, &v9);
    *v12 = v7;
    return (int)v12;
    else
    v3 = (int *)(*(int (__thiscall **)(int, char *))(*(uint32_t *)v2 + 72))(v2, v10);
    v4 = (int *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v11);
    v8 = *v3;
    v9 = *v4;
    v5 = Math::CalcAngle((double)v4[1] - (double)v3[1], (double)v8 - (double)v9);
    LOWORD(v9) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
    *v12 = v9;
    return (int)v12;
}

int  BuildingClass::SelectTargetTypeFlags(#377 *this)
{
    uint32_t **v2; // eax
    int v3; // eax
    int v4; // edi
    uint32_t **v5; // eax
    int v6; // eax
    int v8; // [esp+Ch] [ebp+4h]
    int v9; // [esp+10h] [ebp+8h]
    char v10; // [esp+14h] [ebp+Ch]
    if ( *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    v2 = (uint32_t **)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
    LOBYTE(v3) = Building::GetRenderType(*v2);
    v4 = v3 | v8;
    else
    v4 = v8;
    if ( *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, 1) )
    v5 = (uint32_t **)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, 1);
    LOBYTE(v6) = Building::GetRenderType(*v5);
    v4 |= v6;
    return TechnoClass::SelectAutoTarget_Start_AU(v4 | 1, v9, v10);
}

int  BuildingClass::vt_103_(#377 *this)
{
    int result; // eax
    int v3; // edi
    void*375 *v4; // ecx
    uint32_t *v5; // esi
    uint32_t v6[3]; // [esp+8h] [ebp-Ch] BYREF
    int v7; // [esp+18h] [ebp+4h]
    result = v7;
    if ( v7 == -1 )
    *((uint8_t *)this + 1768) = *((uint8_t *)this + 1768) == 0;
    else if ( v7 )
    if ( v7 == 1 )
    LOBYTE(result) = *((uint8_t *)this + 1768);
    if ( (uint8_t)result )
    return result;
    *((uint8_t *)this + 1768) = 1;
    else
    result = *((unsigned __int8 *)this + 1768);
    if ( !(uint8_t)result )
    return result;
    *((uint8_t *)this + 1768) = 0;
    if ( *((uint8_t *)this + 1768) )
    if ( *((uint32_t *)this + 27) == *(uint32_t *)(*((uint32_t *)this + 328) + 160) )
    v3 = RulesClass_Instance->Scorches1[3];
    else
    v3 = RulesClass_Instance->Scorches2[2];
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 328))(this, 7);
    v4 = (void*375 *)*((uint32_t *)this + 135);
    *((uint8_t *)this + 1758) = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(v4) )
    VoxClass::FindAndPlay(aEvaRepairing, -1);
    else
    v3 = RulesClass_Instance->Scorches2[2];
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    v5 = (uint32_t *)((char *)this + 156);
    v6[0] = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    return StartAudioControllerAt(v3, (int)v6, 0);
    return result;
}

// 0x00447110
int  BuildingClass::ToggleSellMode(#377 *this)
{
    int result; // eax
    uint8_t *v3; // ecx
    int v4; // [esp+8h] [ebp+4h]
    if ( *((uint8_t *)this + 1769) )
    if ( v4 == -1 )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19 )
    goto LABEL_12;
    goto LABEL_11;
    if ( !v4 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 19 )
    return result;
    goto LABEL_12;
    if ( v4 != 1 )
    LABEL_12:
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    return PlayVocClass(RulesClass_Instance->Scorches2[2], 0x2000, 1.0, 0);
    return result;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 19 )
    LOBYTE(result) = *((uint8_t *)this + 1759);
    if ( !(uint8_t)result )
    LABEL_11:
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 19, 0);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    goto LABEL_12;
    else
    v3 = (uint8_t *)*((uint32_t *)this + 328);
    LOBYTE(result) = v3[5824];
    if ( (uint8_t)result )
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v3 + 132))(v3, *((uint32_t *)this + 135));
    House::IsCurrentPlayer(*((void*375 **)this + 135));
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 212))(this);
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    return result;
}

// 0x00447210
int  BuildingClass::HandleClickEvent(#377 *this)
{
    int result; // eax
    uint32_t *v3; // ebp
    int v4; // ebx
    uint8_t *v5; // eax
    int v6; // edi
    int v7; // ebx
    int v8; // eax
    uint32_t *v9; // edi
    int v10; // ecx
    int v11; // eax
    int v12; // edx
    int v13; // eax
    uint32_t v14[3]; // [esp+Ch] [ebp-Ch] BYREF
    uint32_t *v15; // [esp+1Ch] [ebp+4h]
    int v16; // [esp+1Ch] [ebp+4h]
    int v17; // [esp+20h] [ebp+8h] BYREF
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5889) )
    return 0;
    v3 = v15;
    if ( (*(int (__thiscall **)(uint32_t *))(*v15 + 44))(v15) == 6 && *(uint8_t *)(v15[328] + 5889) )
    return 0;
    result = TechnoClass::HandleCursorClick(this, v15, v17);
    v4 = result;
    if ( result != 8 )
    if ( result == 4 )
    v5 = (uint8_t *)*((uint32_t *)this + 328);
    if ( !v5[3281] || HouseClass_Player != *((void*375 **)this + 135) )
    if ( (!v5[5806] && !v5[5807] || *((int *)this + 69) <= 0)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) <= 0 )
    if ( !*(uint32_t *)(*((uint32_t *)this + 328) + 3768) )
    return 0;
    goto LABEL_13;
    LABEL_12:
    v4 = 4;
    LABEL_13:
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) && *((uint8_t *)this + 979) )
    return 0;
    return v4;
    if ( *((uint8_t *)this + 616) )
    goto LABEL_12;
    v6 = *((uint32_t *)this + 135) + 36;
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)v6 + 36))(v6);
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)v6 + 32))(v6) - v7 > *(uint32_t *)(*((uint32_t *)this + 328) + 3820) )
    goto LABEL_12;
    return 0;
    if ( result == 5 )
    if ( !*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    goto LABEL_45;
    if ( !*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    + 160)
    + 677)
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5827) )
    v4 = 0;
    if ( *((uint32_t *)this + 43) == 19 )
    return 0;
    if ( v4 == 1 || v4 == 2 )
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 160))(this) )
    return 7;
    v8 = *(uint32_t *)(*((uint32_t *)this + 328) + 3768);
    if ( v8 == 16 || v8 == 40 || v8 == 3 )
    if ( !Mouse::IsButtonDown(dword_A8EBF8) && !Mouse::IsButtonDown(dword_A8EBFC) )
    return 7;
    v9 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint32_t *))(*v15 + 72))(v15, v14);
    v10 = *v9 / 256;
    v11 = v9[1] / 256;
    LOWORD(v16) = v10;
    HIWORD(v16) = v11;
    v17 = v16;
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) != 3 )
    v12 = (__int16)v11;
    v13 = *(uint32_t *)this;
    v14[0] = ((__int16)v10 << 8) + 128;
    v14[1] = (v12 << 8) + 128;
    v14[2] = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *, uint32_t *))(v13 + 716))(this, v14) )
    v4 = 2;
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17) + 80) & 0x100) == 0
    && *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17) + 19) )
    return 2;
    if ( v4 != 5 )
    return v4;
    LABEL_45:
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v3 + 136))(v3) + 563) )
    return 2;
    return v4;
    return result;
}

int  BuildingClass::HandleRepairCursor(#377 *this)
{
    int v2; // eax
    __int16 *v4; // edi
    int v5; // ebx
    void *v6; // eax
    uint32_t *v7; // eax
    int v8; // eax
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    uint32_t v12[3]; // [esp+Ch] [ebp-Ch] BYREF
    __int16 *v13; // [esp+1Ch] [ebp+4h]
    char v14; // [esp+20h] [ebp+8h]
    char v15; // [esp+24h] [ebp+Ch]
    v2 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v2 + 5889) )
    return 0;
    if ( *(uint32_t *)(v2 + 1032) && v14 )
    v4 = v13;
    v5 = TechnoClass::HandleCursor((int *)this, v13, 0, v15);
    v6 = CellCoord::To_CellObj(&MapClass_Instance, v13);
    v7 = (uint32_t *)(*(int (__thiscall **)(void *, uint32_t *))(*(uint32_t *)v6 + 72))(v6, v12);
    if ( !Cell::IsPassable(v7) )
    if ( v5 == 1 )
    if ( *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, v13) + 59) == 5 )
    v8 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v8 + 1517) )
    if ( *(uint8_t *)(v8 + 1516) )
    return 6;
    goto LABEL_14;
    LABEL_13:
    if ( v5 != 2 )
    goto LABEL_27;
    goto LABEL_14;
    else
    v4 = v13;
    v5 = TechnoClass::HandleCursor((int *)this, v13, v14, v15);
    if ( v5 != 1 )
    goto LABEL_13;
    LABEL_14:
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 160))(this) && v5 == 1 )
    v5 = 0;
    goto LABEL_35;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 644))(this) )
    if ( !Mouse::IsButtonDown(dword_A8EBF8) && !Mouse::IsButtonDown(dword_A8EBFC) )
    v5 = 0;
    goto LABEL_35;
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) != 3 )
    v9 = *v4;
    v10 = v4[1];
    v11 = *(uint32_t *)this;
    v12[2] = 0;
    v12[0] = (v9 << 8) + 128;
    v12[1] = (v10 << 8) + 128;
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *, uint32_t *))(v11 + 716))(this, v12) )
    v5 = 2;
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, v4) + 80) & 0x100) == 0
    && *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, v4) + 19) )
    v5 = 2;
    goto LABEL_35;
    LABEL_27:
    if ( v5 != 5 )
    goto LABEL_35;
    if ( *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    if ( !*(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    + 160)
    + 677)
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5827) )
    v5 = 0;
    if ( *((uint32_t *)this + 43) == 19 )
    v5 = 0;
    goto LABEL_35;
    if ( v5 != 5 )
    LABEL_35:
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 644))(this) )
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    return 1;
    return v5;
}

int  BuildingClass::GetExitCoords(#377 *this)
{
    void*377 *v1; // edi
    int v2; // esi
    int FoundationWidth; // eax
    int v4; // ecx
    int v6; // edx
    int v7; // edi
    int *v8; // [esp+Ch] [ebp+4h]
    v1 = this;
    v2 = (BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) << 7) - 128;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)v1 + 328));
    v1 = (void*377 *)((char *)v1 + 156);
    v4 = (FoundationWidth << 7) - 128 + *(uint32_t *)v1;
    v6 = *((uint32_t *)v1 + 1);
    v7 = *((uint32_t *)v1 + 2);
    *v8 = v4;
    v8[1] = v2 + v6;
    v8[2] = v7;
    return (int)v8;
}

int  BuildingClass::CalculateTurretAngle(#377 *this)
{
    int v2; // eax
    _WORD *v3; // eax
    __int16 v4; // dx
    int v5; // eax
    int v6; // ecx
    uint32_t *v7; // esi
    int v8; // edx
    uint32_t *Coords_Alt; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // edi
    int *v14; // eax
    int v15; // ecx
    double v16; // st7
    int v17; // eax
    int *v18; // edx
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int *v22; // edi
    int *v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // ecx
    int v27; // edx
    int v28; // edi
    int v29; // edx
    int v30; // esi
    int v31; // edx
    char *v32; // eax
    int *v33; // ecx
    uint32_t v34[3]; // [esp+24h] [ebp-30h] BYREF
    uint8_t v35[12]; // [esp+30h] [ebp-24h] BYREF
    char v36[12]; // [esp+3Ch] [ebp-18h] BYREF
    char v37; // [esp+48h] [ebp-Ch] BYREF
    int *v38; // [esp+58h] [ebp+4h]
    unsigned int v39; // [esp+5Ch] [ebp+8h] BYREF
    v2 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v2 + 5820) )
    v3 = (_WORD *)(*(int (__thiscall **)(void*377 *, unsigned int *))(*(uint32_t *)this + 440))(this, &v39);
    v4 = v3[1] + 1;
    v5 = ((__int16)(*v3 + 2) << 8) + 128;
    v6 = (v4 << 8) + 128;
    v7 = (uint32_t *)((char *)this + 156);
    v34[2] = 0;
    v34[0] = *v7;
    v34[1] = v7[1];
    v8 = v7[2];
    *v38 = v5;
    v38[1] = v6;
    v38[2] = v8;
    return (int)v38;
    if ( *(uint8_t *)(v2 + 5819) )
    Coords_Alt = (uint32_t *)ObjectClass::GetCoords_Alt(this);
    v11 = Coords_Alt[1];
    v12 = *Coords_Alt + 128;
    LABEL_15:
    v17 = Coords_Alt[2];
    *v38 = v12;
    v38[1] = v11;
    v38[2] = v17;
    return (int)v38;
    if ( *(uint8_t *)(v2 + 5803) && v39 )
    v13 = (*(int (__stdcall **)(uint32_t *))(*(uint32_t *)v39 + 72))(v34);
    v14 = (int *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v15 = *v14;
    v39 = *(uint32_t *)v13;
    v16 = Math::CalcAngle((double)v14[1] - (double)*(int *)(v13 + 4), (double)(int)v39 - (double)v15);
    LOWORD(v39) = Math::RoundToInt((v16 - 1.570796326794897) * -10430.06004058427);
    if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) >= 0x40u )
    if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) < 0x80u )
    Coords_Alt = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v12 = *Coords_Alt + 128;
    v11 = Coords_Alt[1] + 128;
    goto LABEL_15;
    if ( (unsigned __int8)(((v39 >> 7) + 1) >> 1) < 0xC0u )
    Coords_Alt = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v12 = *Coords_Alt - 128;
    v11 = Coords_Alt[1] + 128;
    goto LABEL_15;
    Coords_Alt = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v12 = *Coords_Alt - 128;
    else
    Coords_Alt = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v12 = *Coords_Alt + 128;
    v11 = Coords_Alt[1] - 128;
    goto LABEL_15;
    if ( !*(uint8_t *)(v2 + 5835) && !*(uint8_t *)(v2 + 5801) )
    v18 = (int *)ObjectClass::GetCoords_Alt(this);
    *v38 = *v18;
    v38[1] = v18[1];
    v38[2] = v18[2];
    return (int)v38;
    v19 = *(uint32_t *)(v2 + 6016);
    if ( v19 )
    if ( v19 == 1 )
    v22 = *(int **)(v2 + 6024);
    v23 = (int *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v36);
    v24 = *v23;
    v25 = *v22;
    goto LABEL_24;
    v20 = RadioClass::FindLinkIndex(v39);
    if ( v20 >= 0 )
    v21 = *((uint32_t *)this + 328);
    if ( v20 < *(uint32_t *)(v21 + 6016) )
    v22 = (int *)(*(uint32_t *)(v21 + 6024) + 12 * v20);
    v23 = (int *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v35);
    v24 = *v22;
    v25 = *v23;
    LABEL_24:
    v26 = v25 + v24;
    v27 = v22[1];
    v28 = v22[2];
    v29 = v23[1] + v27;
    v30 = v23[2];
    *v38 = v26;
    v38[1] = v29;
    v38[2] = v30 + v28;
    return (int)v38;
    v31 = *(uint32_t *)this;
    v32 = (char *)v34;
    else
    v31 = *(uint32_t *)this;
    v32 = &v37;
    v33 = (int *)(*(int (__thiscall **)(void*377 *, char *))(v31 + 72))(this, v32);
    *v38 = *v33;
    v38[1] = v33[1];
    v38[2] = v33[2];
    return (int)v38;
}

int  BuildingClass::DistanceToTarget(#377 *this)
{
    uint32_t *v2; // esi
    uint32_t *v3; // eax
    double v4; // st7
    int v6; // [esp+28h] [ebp-1Ch]
    uint8_t v7[12]; // [esp+2Ch] [ebp-18h] BYREF
    uint8_t v8[12]; // [esp+38h] [ebp-Ch] BYREF
    int v9; // [esp+48h] [ebp+4h]
    v2 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v9 + 72))(v9, v7);
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *, int))(*(uint32_t *)this + 168))(this, v8, v9);
    v6 = v3[2] - v2[2];
    v4 = Math::Sqrt(
    (double)(*v3 - *v2) * (double)(*v3 - *v2)
    + (double)v6 * (double)v6
    + (double)(v3[1] - v2[1]) * (double)(v3[1] - v2[1]));
    return Math::RoundToInt(v4);
}

// 0x00447E90
int  BuildingClass::TogglePrimaryFactory(#377 *this)
{
    uint8_t *v1; // eax
    int v2; // eax
    uint32_t *v3; // ecx
    uint8_t v5[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v6; // [esp+14h] [ebp+4h]
    int v7; // [esp+18h] [ebp+8h]
    v1 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v1[5835] || v1[5801] || v1[5803] )
    v2 = (*(int (__thiscall **)(void*377 *, uint8_t *, int))(*(uint32_t *)this + 168))(this, v5, v7);
    else
    v2 = (*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v5);
    v3 = (uint32_t *)v2;
    *v6 = *v3;
    v6[1] = v3[1];
    v6[2] = v3[2];
    return (int)v6;
}

int  BuildingClass::vt_240_(#377 *this)
{
    int v2; // eax
    int v4; // edx
    int FireError; // ebp
    int v6; // edi
    int v7; // ebx
    uint32_t *Value; // eax
    __int16 v9; // dx
    uint8_t *v10; // [esp+10h] [ebp+4h]
    int v11; // [esp+14h] [ebp+8h]
    int v12; // [esp+18h] [ebp+Ch] BYREF
    v2 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v2 + 5499)
    && (!*(uint8_t *)(v2 + 5500) || !(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this))
    || ObjectClass::HasLocation(this) )
    return 5;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5827) )
    return 6;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 19
    || (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 18 )
    return 5;
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    return 6;
    if ( *((uint32_t *)this + 453) )
    return 3;
    FireError = TriggerTypeClass::ReadINI(this, v4, v10, v11, v12);
    if ( FireError )
    return FireError;
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this) )
    return FireError;
    v6 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *, uint8_t *))(*(uint32_t *)this + 1256))(this, &v12, v10);
    v7 = *(uint8_t *)(*((uint32_t *)this + 328) + 5829) != 0 ? 0 : 8;
    Value = ProgressTimer::GetValue((_WORD *)this + 452, &v12);
    LOBYTE(v9) = 0;
    HIBYTE(v9) = v7;
    if ( abs16(v9) >= (int)abs16(*(_WORD *)Value - v6) )
    return FireError;
    else
    return 2;
}

int  BuildingClass::ProcessPrimarySelect(#377 *this)
{
    int v2; // ecx
    int result; // eax
    int v4; // edi
    int v5; // edx
    int v6; // ecx
    int v7; // eax
    void*375 *v8; // ecx
    int v9; // [esp+4h] [ebp-4h]
    result = *((uint32_t *)this + 328);
    v2 = *(uint32_t *)(result + 3768);
    LOBYTE(result) = *((uint8_t *)this + 979);
    if ( v2 )
    if ( (uint8_t)result )
    *((uint8_t *)this + 979) = 0;
    LABEL_17:
    result = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 292))(this, 2);
    LOBYTE(result) = *((uint8_t *)this + 979);
    return result;
    v4 = 0;
    v9 = *(uint32_t *)(*((uint32_t *)this + 135) + 120);
    if ( v9 <= 0 )
    LABEL_13:
    v8 = (void*375 *)*((uint32_t *)this + 135);
    *((uint8_t *)this + 979) = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(v8) )
    VoxClass::FindAndPlay(aEvaPrimarybuil, -1);
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3768) == 7 )
    House::ChooseHouseEnemy(*((int **)this + 135), (int)this);
    goto LABEL_17;
    while ( 1 )
    v5 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 108) + 4 * v4);
    if ( *(uint8_t *)(v5 + 129) )
    goto LABEL_12;
    v6 = *(uint32_t *)(v5 + 1312);
    v7 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v6 + 3768) != *(uint32_t *)(v7 + 3768) )
    goto LABEL_12;
    if ( *(uint8_t *)(v7 + 3278) )
    break;
    if ( !*(uint8_t *)(v6 + 3278) )
    goto LABEL_11;
    LABEL_12:
    if ( ++v4 >= v9 )
    goto LABEL_13;
    if ( !*(uint8_t *)(v6 + 3278) )
    goto LABEL_12;
    LABEL_11:
    *(uint8_t *)(v5 + 979) = 0;
    goto LABEL_12;
    return result;
}

int  BuildingClass::ProcessCapture(#377 *this)
{
    int result; // eax
    int v2; // ebp
    int v3; // edi
    int AttachedBomb; // ecx
    int v6; // ecx
    int v7; // ecx
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // edx
    int v12; // edx
    int v13; // edi
    int v14; // ecx
    int v15; // eax
    int v16; // ecx
    void*375 *v17; // ecx
    int v18; // ecx
    __int64 v19; // rax
    int v20; // edx
    uint8_t *v21; // ecx
    int v22; // edi
    char *v23; // ebp
    int v24; // eax
    int Member; // eax
    uint8_t *v26; // edi
    uint32_t *v27; // ebp
    uint32_t *v28; // eax
    int *v29; // eax
    char v30; // bl
    uint8_t *v31; // eax
    uint8_t *v32; // edi
    int v33; // eax
    void*377 *v34; // ecx
    int v35; // ecx
    int v36; // ecx
    int v37; // ebx
    int v38; // eax
    int v39; // ecx
    uint32_t *v40; // edx
    int v41; // eax
    int v42; // eax
    int v43; // ecx
    int v44; // ecx
    int v45; // edx
    int v46; // eax
    int v47; // ecx
    int v48; // ecx
    int v49; // edx
    int v50; // eax
    int v51; // ecx
    int v52; // ecx
    int v53; // eax
    int v54; // eax
    int v55; // eax
    int v56; // ecx
    int v57; // ecx
    int v58; // edx
    int v59; // eax
    int v60; // ecx
    int v61; // ecx
    int v62; // eax
    int v63; // eax
    int v64; // eax
    int v65; // ecx
    int v66; // ecx
    int v67; // edx
    int v68; // eax
    int v69; // ecx
    int v70; // ecx
    int v71; // edx
    int v72; // eax
    int v73; // ecx
    int v74; // ecx
    int v75; // edx
    int v76; // eax
    int v77; // ecx
    int v78; // ecx
    int v79; // edx
    int v80; // eax
    int v81; // ecx
    int v82; // ecx
    int v83; // eax
    int v84; // eax
    int v85; // ecx
    int v86; // ecx
    int v87; // ecx
    int v88; // eax
    int v89; // ecx
    int v90; // eax
    int v91; // eax
    int v92; // eax
    char v93; // cl
    void (__thiscall **vfptr0)(void*377 *, int); // edx
    int v95; // edi
    int v96; // eax
    char v97; // cl
    int v98; // eax
    void (__thiscall **v99)(void*377 *, int); // edx
    int v100; // eax
    int v101; // ecx
    int v102; // ebp
    int v103; // eax
    int v104; // edi
    int v105; // eax
    int v106; // ecx
    uint32_t *v107; // edx
    int v108; // ebp
    int v109; // ecx
    int v110; // eax
    int v111; // eax
    int v112; // edx
    int v113; // ecx
    int v114; // eax
    int v115; // eax
    int v116; // edx
    int v117; // eax
    int v118; // ecx
    int v119; // eax
    int v120; // eax
    int v121; // edx
    int v122; // ecx
    int v123; // eax
    int v124; // eax
    int v125; // edx
    int v126; // eax
    int v127; // ecx
    int v128; // eax
    int v129; // eax
    int v130; // edx
    int v131; // ecx
    int v132; // eax
    int v133; // eax
    int v134; // edx
    int v135; // ecx
    int v136; // eax
    int v137; // eax
    int v138; // edx
    int v139; // ecx
    int v140; // eax
    int v141; // eax
    int v142; // edx
    int v143; // ecx
    int v144; // eax
    int v145; // eax
    int v146; // edx
    int v147; // ecx
    int v148; // eax
    int v149; // eax
    int v150; // edx
    int v151; // ecx
    int v152; // edx
    int v153; // ecx
    int v154; // ecx
    int v155; // eax
    int v156; // ecx
    int v157; // eax
    int v158; // ecx
    int v159; // edi
    uint32_t **v160; // eax
    int v161; // eax
    char i; // al
    int v163; // ecx
    int v164; // eax
    int v165; // ecx
    int v166; // eax
    int v167; // eax
    int v168; // edx
    int v169; // [esp+A4h] [ebp-60h]
    int v170; // [esp+A8h] [ebp-5Ch]
    char v171[8]; // [esp+B4h] [ebp-50h] BYREF
    int v172; // [esp+BCh] [ebp-48h] BYREF
    int v173; // [esp+C0h] [ebp-44h]
    int v174; // [esp+C4h] [ebp-40h]
    int v175[3]; // [esp+C8h] [ebp-3Ch] BYREF
    int v176[3]; // [esp+D4h] [ebp-30h] BYREF
    int v177[3]; // [esp+E0h] [ebp-24h] BYREF
    void **v178; // [esp+ECh] [ebp-18h] BYREF
    void *Block; // [esp+F0h] [ebp-14h]
    int v180; // [esp+F4h] [ebp-10h]
    int v181; // [esp+F8h] [ebp-Ch]
    int v182; // [esp+FCh] [ebp-8h]
    int v183; // [esp+100h] [ebp-4h]
    void*375 *v184; // [esp+108h] [ebp+4h]
    void*377 *v185; // [esp+10Ch] [ebp+8h] BYREF
    int v186; // [esp+110h] [ebp+Ch]
    if ( v184 == *((void*375 **)this + 135) )
    LOBYTE(result) = 0;
    else
    AttachedBomb = *((uint32_t *)this + 14);
    if ( AttachedBomb && !*(uint8_t *)(*((uint32_t *)this + 328) + 5499) )
    ObjectClass::CleanupAudioAndRefs(AttachedBomb);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5831) )
    *((uint8_t *)v184 + 22264) = 1;
    if ( *(uint8_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 52) + 422) )
    v6 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v6 + 5464) )
    HouseClass::AddPower(v184, *(uint32_t *)(v6 + 5464));
    v7 = *(uint32_t *)(*((uint32_t *)this + 328) + 5472);
    *((uint32_t *)this + 436) = CurrentFrame;
    *((uint32_t *)this + 437) = v173;
    *((uint32_t *)this + 438) = v7;
    v8 = *((uint32_t *)this + 132);
    v170 = v2;
    v169 = v3;
    v9 = 1 << *(uint32_t *)(*((uint32_t *)v184 + 13) + 184);
    if ( (v8 & v9) != 0 )
    v10 = v8 - v9;
    v11 = *((uint32_t *)this + 328);
    *((uint32_t *)this + 132) = v10;
    if ( *(uint8_t *)(v11 + 5796) )
    v12 = 0;
    *(uint32_t *)(*((uint32_t *)this + 135) + 21732) = 0;
    v13 = *(uint32_t *)(*((uint32_t *)this + 135) + 120);
    if ( v13 > 0 )
    do
    v14 = *((uint32_t *)this + 135);
    v15 = *(uint32_t *)(*(uint32_t *)(v14 + 108) + 4 * v12);
    if ( v15 && !*(uint8_t *)(v15 + 129) && *(uint8_t *)(*(uint32_t *)(v15 + 1312) + 5796) )
    *(uint32_t *)(v14 + 21732) |= *(uint32_t *)(v15 + 528);
    ++v12;
    while ( v12 < v13 );
    MapClass::MarkForRedraw(&MapClass_Instance, 2);
    v16 = *((uint32_t *)this + 328);
    *((uint8_t *)this + 979) = 0;
    if ( *(uint8_t *)(v16 + 5822) )
    BuildingClass::DemolishBridgeCheck((int *)this, 0);
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) || (unsigned __int8)House::IsHumanPlayer(v184) )
    if ( !*(uint8_t *)(*((uint32_t *)v184 + 13) + 422) && (uint8_t)v185 )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5458) )
    v17 = (void*375 *)*((uint32_t *)this + 135);
    if ( v17 != v184 )
    if ( (unsigned __int8)House::IsHumanPlayer(v17) )
    VoxClass::FindAndPlay(aEvaTechbuildin, -1);
    if ( (unsigned __int8)House::IsHumanPlayer(v184) )
    if ( (unsigned __int8)House::IsHumanPlayer(v184) )
    v18 = *(uint32_t *)(*((uint32_t *)this + 328) + 5460);
    if ( v18 != -1 )
    UpdateThemeManager(v18, -1, -1);
    else
    v19 = ((__int64 (__thiscall *)(void*377 *, void*377 **))*(uint32_t *)(*(uint32_t *)this + 440))(this, &v185);
    if ( CreateTriggerClassIfFarEnough(10, SHIDWORD(v19), *(uint32_t *)v19) )
    VoxClass::FindAndPlay(aEvaBuildingcap, -1);
    byte_880CF4 = 1;
    MapClass::MarkForRedraw(&MapClass_Instance, 0);
    v20 = *((uint32_t *)this + 328);
    *((uint8_t *)this + 128) = 1;
    *((uint8_t *)this + 1740) = 1;
    if ( *(uint8_t *)(v20 + 5458) )
    v21 = (uint8_t *)*((uint32_t *)this + 389);
    *((uint8_t *)this + 1770) = 1;
    if ( v21 )
    Trigger::EnableOnce(v21, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    BuildingClass::RepairPlacement(this, 0);
    v22 = 0;
    v23 = (char *)this + 1372;
    do
    if ( *(uint8_t *)(v22 + *((uint32_t *)this + 328) + 3980) && *(uint32_t *)v23 )
    VtableStub::425270(*(uint8_t **)v23);
    v22 += 68;
    v23 += 4;
    while ( v22 < 1428 );
    if ( GameMode_Current[0] == 4
    && !*(uint8_t *)((*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 132))(this, v169, v170) + 3231) )
    HouseClass::IncrementStat((uint32_t *)v184 + 4314, *(uint32_t *)(*((uint32_t *)this + 328) + 3576));
    ((void (__stdcall *)(uint32_t, uint32_t))VectorClass_ReestablishPtr::Construct)(0, 0);
    v24 = *((uint32_t *)this + 58);
    v178 = &DynamicVectorClass<Reestablish *>::`vftable';
    v183 = 10;
    v182 = 0;
    v185 = 0;
    if ( v24 > 0 )
    do
    Member = Team::GetMember(this, (int)v185);
    v26 = (uint8_t *)Member;
    if ( Member )
    if ( (*(uint8_t *)(Member + 20) & 4) != 0 )
    if ( (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 19, Member) == 1 )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5821)
    || (v27 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *, uint8_t *))(*(uint32_t *)this + 168))(
    this,
    v175,
    v26),
    v28 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)v26 + 72))(v26, v176),
    v29 = Coord::Subtract(v177, *v28 - *v27, v28[1] - v27[1], v28[2] - v27[2]),
    v172 = *v29,
    v173 = v29[1],
    v174 = v29[2],
    (int)Coord::Length(&v172) < 64) )
    v30 = v26[1048];
    (*(void (__thiscall **)(uint8_t *, void*375 *, int))(*(uint32_t *)v26 + 980))(v26, v184, 1);
    v31 = __2_YAPAXI_Z(8u);
    if ( v31 )
    *(uint32_t *)v31 = v26;
    v31[4] = v30;
    v32 = v31;
    else
    v32 = 0;
    if ( v182 < v180
    || (BYTE1(v181) || !v180)
    && v183 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v178[2])(&v178, v180 + v183, 0) )
    v33 = v182++;
    *((uint32_t *)Block + v33) = v32;
    goto LABEL_66;
    else
    v26 = 0;
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 23, v26);
    (*(void (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 3, v26);
    LABEL_66:
    v34 = (void*377 *)*((uint32_t *)this + 58);
    v185 = (void*377 *)((char *)v185 + 1);
    while ( (int)v185 < (int)v34 );
    v35 = *((uint32_t *)this + 329);
    if ( v35 )
    BuildingClass::AbandonProduction(v35);
    v36 = *((uint32_t *)this + 329);
    if ( v36 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v36 + 32))(v36, 1);
    *((uint32_t *)this + 329) = 0;
    ((void (__stdcall *)(void*377 *))BuildingClass::DecrementTypeCounter)(this);
    v37 = *((uint32_t *)this + 135);
    ScriptAction::GetWaypointCoords(v171, this);
    *((uint8_t *)this + 1763) = 1;
    v38 = 0;
    v39 = RulesClass_Instance->NeutralTechBuildings[1];
    if ( v39 > 0 )
    v40 = (uint32_t *)RulesClass_Instance->BuildDummy[2];
    while ( *v40 != *((uint32_t *)this + 328) )
    ++v38;
    ++v40;
    if ( v38 >= v39 )
    goto LABEL_80;
    v41 = *(uint32_t *)(v37 + 80);
    v185 = this;
    v42 = (*(int (__thiscall **)(int, void*377 **))(v41 + 16))(v37 + 80, &v185);
    if ( v42 != -1 )
    v43 = *(uint32_t *)(v37 + 96);
    if ( v42 < v43 )
    v44 = v43 - 1;
    for ( *(uint32_t *)(v37 + 96) = v44;
    v42 < *(uint32_t *)(v37 + 96);
    *(uint32_t *)(*(uint32_t *)(v37 + 84) + 4 * v42 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 84) + 4 * v42) )
    ++v42;
    LABEL_80:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5801) )
    v45 = *(uint32_t *)(v37 + 128);
    v185 = this;
    v46 = (*(int (__thiscall **)(int, void*377 **))(v45 + 16))(v37 + 128, &v185);
    if ( v46 != -1 )
    v47 = *(uint32_t *)(v37 + 144);
    if ( v46 < v47 )
    v48 = v47 - 1;
    for ( *(uint32_t *)(v37 + 144) = v48;
    v46 < *(uint32_t *)(v37 + 144);
    *(uint32_t *)(*(uint32_t *)(v37 + 132) + 4 * v46 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 132) + 4 * v46) )
    ++v46;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5805) )
    v49 = *(uint32_t *)(v37 + 152);
    v185 = this;
    v50 = (*(int (__thiscall **)(int, void*377 **))(v49 + 16))(v37 + 152, &v185);
    if ( v50 != -1 )
    v51 = *(uint32_t *)(v37 + 168);
    if ( v50 < v51 )
    v52 = v51 - 1;
    for ( *(uint32_t *)(v37 + 168) = v52;
    v50 < *(uint32_t *)(v37 + 168);
    *(uint32_t *)(*(uint32_t *)(v37 + 156) + 4 * v50 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 156) + 4 * v50) )
    ++v50;
    v53 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v53 + 5806) || *(uint8_t *)(v53 + 5807) )
    v54 = *(uint32_t *)(v37 + 176);
    v185 = this;
    v55 = (*(int (__thiscall **)(int, void*377 **))(v54 + 16))(v37 + 176, &v185);
    if ( v55 != -1 )
    v56 = *(uint32_t *)(v37 + 192);
    if ( v55 < v56 )
    v57 = v56 - 1;
    for ( *(uint32_t *)(v37 + 192) = v57;
    v55 < *(uint32_t *)(v37 + 192);
    *(uint32_t *)(*(uint32_t *)(v37 + 180) + 4 * v55 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 180) + 4 * v55) )
    ++v55;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5803) )
    v58 = *(uint32_t *)(v37 + 200);
    v185 = this;
    v59 = (*(int (__thiscall **)(int, void*377 **))(v58 + 16))(v37 + 200, &v185);
    if ( v59 != -1 )
    v60 = *(uint32_t *)(v37 + 216);
    if ( v59 < v60 )
    v61 = v60 - 1;
    for ( *(uint32_t *)(v37 + 216) = v61;
    v59 < *(uint32_t *)(v37 + 216);
    *(uint32_t *)(*(uint32_t *)(v37 + 204) + 4 * v59 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 204) + 4 * v59) )
    ++v59;
    v62 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v62 + 5499) )
    if ( *(int *)(v62 + 1588) > -1 )
    v63 = *(uint32_t *)(v37 + 224);
    v185 = this;
    v64 = (*(int (__thiscall **)(int, void*377 **))(v63 + 16))(v37 + 224, &v185);
    if ( v64 != -1 )
    v65 = *(uint32_t *)(v37 + 240);
    if ( v64 < v65 )
    v66 = v65 - 1;
    for ( *(uint32_t *)(v37 + 240) = v66;
    v64 < *(uint32_t *)(v37 + 240);
    *(uint32_t *)(*(uint32_t *)(v37 + 228) + 4 * v64 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 228) + 4 * v64) )
    ++v64;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5804) )
    v67 = *(uint32_t *)(v37 + 248);
    v185 = this;
    v68 = (*(int (__thiscall **)(int, void*377 **))(v67 + 16))(v37 + 248, &v185);
    if ( v68 != -1 )
    v69 = *(uint32_t *)(v37 + 264);
    if ( v68 < v69 )
    v70 = v69 - 1;
    for ( *(uint32_t *)(v37 + 264) = v70;
    v68 < *(uint32_t *)(v37 + 264);
    *(uint32_t *)(*(uint32_t *)(v37 + 252) + 4 * v68 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 252) + 4 * v68) )
    ++v68;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5808) )
    v71 = *(uint32_t *)(v37 + 272);
    v185 = this;
    v72 = (*(int (__thiscall **)(int, void*377 **))(v71 + 16))(v37 + 272, &v185);
    if ( v72 != -1 )
    v73 = *(uint32_t *)(v37 + 288);
    if ( v72 < v73 )
    v74 = v73 - 1;
    for ( *(uint32_t *)(v37 + 288) = v74;
    v72 < *(uint32_t *)(v37 + 288);
    *(uint32_t *)(*(uint32_t *)(v37 + 276) + 4 * v72 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 276) + 4 * v72) )
    ++v72;
    if ( *(int *)(*((uint32_t *)this + 328) + 5900) > 0 )
    v75 = *(uint32_t *)(v37 + 296);
    v185 = this;
    v76 = (*(int (__thiscall **)(int, void*377 **))(v75 + 16))(v37 + 296, &v185);
    if ( v76 != -1 )
    v77 = *(uint32_t *)(v37 + 312);
    if ( v76 < v77 )
    v78 = v77 - 1;
    for ( *(uint32_t *)(v37 + 312) = v78;
    v76 < *(uint32_t *)(v37 + 312);
    *(uint32_t *)(*(uint32_t *)(v37 + 300) + 4 * v76 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 300) + 4 * v76) )
    ++v76;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5837) )
    v79 = *(uint32_t *)(v37 + 320);
    v185 = this;
    v80 = (*(int (__thiscall **)(int, void*377 **))(v79 + 16))(v37 + 320, &v185);
    if ( v80 != -1 )
    v81 = *(uint32_t *)(v37 + 336);
    if ( v80 < v81 )
    v82 = v81 - 1;
    for ( *(uint32_t *)(v37 + 336) = v82;
    v80 < *(uint32_t *)(v37 + 336);
    *(uint32_t *)(*(uint32_t *)(v37 + 324) + 4 * v80 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 324) + 4 * v80) )
    ++v80;
    HouseClass::CalculateCostMultipliers((float *)v37);
    v83 = *(uint32_t *)(v37 + 104);
    v185 = this;
    v84 = (*(int (__thiscall **)(int, void*377 **, int, int))(v83 + 16))(v37 + 104, &v185, v169, v170);
    if ( v84 != -1 )
    v85 = *(uint32_t *)(v37 + 120);
    if ( v84 < v85 )
    v86 = v85 - 1;
    for ( *(uint32_t *)(v37 + 120) = v86;
    v84 < *(uint32_t *)(v37 + 120);
    *(uint32_t *)(*(uint32_t *)(v37 + 108) + 4 * v84 - 4) = *(uint32_t *)(*(uint32_t *)(v37 + 108) + 4 * v84) )
    ++v84;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5836) )
    --*(uint32_t *)(v37 + 21388);
    v87 = *(uint32_t *)(*((uint32_t *)this + 328) + 5476);
    if ( v87 )
    if ( *((uint8_t *)this + 1764) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 356) -= v87;
    v88 = *((uint32_t *)this + 135);
    if ( *(int *)(v88 + 356) < 0 )
    *(uint32_t *)(v88 + 356) = 0;
    v89 = *(uint32_t *)(*((uint32_t *)this + 328) + 5480);
    if ( v89 )
    if ( *((uint8_t *)this + 1764) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 360) -= v89;
    v90 = *((uint32_t *)this + 135);
    if ( *(int *)(v90 + 360) < 0 )
    *(uint32_t *)(v90 + 360) = 0;
    v91 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v91 + 5835) )
    *(uint32_t *)(v37 + 724) -= *(uint32_t *)(v91 + 6016);
    v92 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v92 + 5831) )
    v93 = *((uint8_t *)this + 1772);
    *((uint8_t *)this + 1771) = -1;
    if ( !v93 )
    *((uint8_t *)this + 1772) = *(uint8_t *)(v92 + 5895);
    vfptr0 = *(void (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 128) = 1;
    *((uint8_t *)this + 1772) = 1;
    vfptr0[260](this, 1);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3281) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1048))(this);
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 1164))(this, 0, 0, 0, 0);
    v95 = v186;
    TechnoClass::ProcessCapture((int *)this, v186, v186, 1);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5831) )
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    v96 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v96 + 5831) )
    v97 = *((uint8_t *)this + 1772);
    *((uint8_t *)this + 1771) = 1;
    if ( v97 == *(uint8_t *)(v96 + 5895) )
    *((uint8_t *)this + 1772) = 0;
    *((uint8_t *)this + 128) = 1;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3281)
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1044))(this);
    ((void (__stdcall *)(char))AnimClass::updateAnimation)(0);
    *(uint32_t *)(v37 + 21728) = this;
    BuildingClass::CalcExitCoords((int *)v37);
    BuildingClass::CalcExitCoords(*((int **)this + 135));
    v98 = *((uint32_t *)this + 135);
    if ( *(void*377 **)(v98 + 21728) == this )
    *(uint32_t *)(v98 + 21728) = 0;
    if ( (unsigned __int8)House::IsHumanPlayer((void*375 *)v37) && *(uint8_t *)(*((uint32_t *)this + 328) + 5817) )
    g_RadarBlipPool = 0;
    g_RadarBlipManager = 0;
    dword_880994 = -1;
    Mouse::SetBounds((int)&MapClass_Instance, 0);
    ((void (__stdcall *)(void*377 *))BuildingClass::IncrementOccupantTypeCounter)(this);
    v99 = *(void (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 1768) = 0;
    v99[311](this, 1);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    if ( !IKnowWhatImDoing )
    if ( !*((uint8_t *)this + 144)
    || *((uint8_t *)this + 129)
    || (BuildingClass::DemolishBridge(this),
    BuildingClass::DemolishBridge(this),
    BuildingClass::DemolishBridge(this),
    BuildingClass::DemolishBridge(this),
    BuildingClass::RepairPlacement(this, 1),
    !IKnowWhatImDoing) )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    *((uint32_t *)this + 390) = 0;
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 1160))(
    this,
    0,
    0,
    0,
    0,
    0);
    MapClass::MarkForRedraw(&MapClass_Instance, 1);
    v100 = 1 << *(uint32_t *)(*(uint32_t *)(v95 + 52) + 184);
    v101 = *((uint32_t *)this + 132);
    if ( (v101 & v100) != 0 )
    *((uint32_t *)this + 132) = v101 & ~v100;
    v102 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 484))(this);
    v103 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this);
    v104 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1124))(this, *(__int16 *)(v103 + 266));
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 352))(this)
    || *((uint32_t *)this + 165) && *(uint32_t *)(*((uint32_t *)this + 165) + 80) == IsObjectTypeBuildingType((int)this) )
    LOWORD(v104) = Techno::StartInvulnerability(v104);
    *((_WORD *)this + 896) = v104;
    ((void (__stdcall *)(int, uint32_t))BuildingClass::SyncCrateVisuals)(v102, (unsigned __int16)v104);
    ((void (__stdcall *)(uint32_t))BuildingClass::SetConnectedBuildingMission)(*((char *)this + 1773));
    v105 = 0;
    v106 = RulesClass_Instance->NeutralTechBuildings[1];
    if ( v106 <= 0 )
    LABEL_183:
    v108 = (int)v184;
    else
    v107 = (uint32_t *)RulesClass_Instance->BuildDummy[2];
    while ( *v107 != *((uint32_t *)this + 328) )
    ++v105;
    ++v107;
    if ( v105 >= v106 )
    goto LABEL_183;
    v108 = (int)v184;
    v165 = *((uint32_t *)v184 + 22);
    if ( *((uint32_t *)v184 + 24) < v165
    || (*((uint8_t *)v184 + 93) || !v165)
    && (v166 = *((uint32_t *)v184 + 25), v166 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, uint32_t))(*((uint32_t *)v184 + 20) + 8))(
    (char *)v184 + 80,
    v165 + v166,
    0) )
    v167 = *((uint32_t *)v184 + 24);
    v168 = *((uint32_t *)v184 + 21);
    *((uint32_t *)v184 + 24) = v167 + 1;
    *(uint32_t *)(v168 + 4 * v167) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5801) )
    v109 = *(uint32_t *)(v108 + 136);
    if ( *(uint32_t *)(v108 + 144) < v109
    || (*(uint8_t *)(v108 + 141) || !v109)
    && (v110 = *(uint32_t *)(v108 + 148), v110 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 128) + 8))(
    v108 + 128,
    v109 + v110,
    0) )
    v111 = *(uint32_t *)(v108 + 144);
    v112 = *(uint32_t *)(v108 + 132);
    *(uint32_t *)(v108 + 144) = v111 + 1;
    *(uint32_t *)(v112 + 4 * v111) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5805) )
    v113 = *(uint32_t *)(v108 + 160);
    if ( *(uint32_t *)(v108 + 168) < v113
    || (*(uint8_t *)(v108 + 165) || !v113)
    && (v114 = *(uint32_t *)(v108 + 172), v114 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 152) + 8))(
    v108 + 152,
    v113 + v114,
    0) )
    v115 = *(uint32_t *)(v108 + 168);
    v116 = *(uint32_t *)(v108 + 156);
    *(uint32_t *)(v108 + 168) = v115 + 1;
    *(uint32_t *)(v116 + 4 * v115) = this;
    v117 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v117 + 5806) || *(uint8_t *)(v117 + 5807) )
    v118 = *(uint32_t *)(v108 + 184);
    if ( *(uint32_t *)(v108 + 192) < v118
    || (*(uint8_t *)(v108 + 189) || !v118)
    && (v119 = *(uint32_t *)(v108 + 196), v119 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 176) + 8))(
    v108 + 176,
    v118 + v119,
    0) )
    v120 = *(uint32_t *)(v108 + 192);
    v121 = *(uint32_t *)(v108 + 180);
    *(uint32_t *)(v108 + 192) = v120 + 1;
    *(uint32_t *)(v121 + 4 * v120) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5803) )
    v122 = *(uint32_t *)(v108 + 208);
    if ( *(uint32_t *)(v108 + 216) < v122
    || (*(uint8_t *)(v108 + 213) || !v122)
    && (v123 = *(uint32_t *)(v108 + 220), v123 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 200) + 8))(
    v108 + 200,
    v122 + v123,
    0) )
    v124 = *(uint32_t *)(v108 + 216);
    v125 = *(uint32_t *)(v108 + 204);
    *(uint32_t *)(v108 + 216) = v124 + 1;
    *(uint32_t *)(v125 + 4 * v124) = this;
    v126 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v126 + 5499) && *(int *)(v126 + 1588) > -1 )
    v127 = *(uint32_t *)(v108 + 232);
    if ( *(uint32_t *)(v108 + 240) < v127
    || (*(uint8_t *)(v108 + 237) || !v127)
    && (v128 = *(uint32_t *)(v108 + 244), v128 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 224) + 8))(
    v108 + 224,
    v127 + v128,
    0) )
    v129 = *(uint32_t *)(v108 + 240);
    v130 = *(uint32_t *)(v108 + 228);
    *(uint32_t *)(v108 + 240) = v129 + 1;
    *(uint32_t *)(v130 + 4 * v129) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5804) )
    v131 = *(uint32_t *)(v108 + 256);
    if ( *(uint32_t *)(v108 + 264) < v131
    || (*(uint8_t *)(v108 + 261) || !v131)
    && (v132 = *(uint32_t *)(v108 + 268), v132 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 248) + 8))(
    v108 + 248,
    v131 + v132,
    0) )
    v133 = *(uint32_t *)(v108 + 264);
    v134 = *(uint32_t *)(v108 + 252);
    *(uint32_t *)(v108 + 264) = v133 + 1;
    *(uint32_t *)(v134 + 4 * v133) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5808) )
    v135 = *(uint32_t *)(v108 + 280);
    if ( *(uint32_t *)(v108 + 288) < v135
    || (*(uint8_t *)(v108 + 285) || !v135)
    && (v136 = *(uint32_t *)(v108 + 292), v136 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 272) + 8))(
    v108 + 272,
    v136 + v135,
    0) )
    v137 = *(uint32_t *)(v108 + 288);
    v138 = *(uint32_t *)(v108 + 276);
    *(uint32_t *)(v108 + 288) = v137 + 1;
    *(uint32_t *)(v138 + 4 * v137) = this;
    if ( *(int *)(*((uint32_t *)this + 328) + 5900) > 0 )
    v139 = *(uint32_t *)(v108 + 304);
    if ( *(uint32_t *)(v108 + 312) < v139
    || (*(uint8_t *)(v108 + 309) || !v139)
    && (v140 = *(uint32_t *)(v108 + 316), v140 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 296) + 8))(
    v108 + 296,
    v140 + v139,
    0) )
    v141 = *(uint32_t *)(v108 + 312);
    v142 = *(uint32_t *)(v108 + 300);
    *(uint32_t *)(v108 + 312) = v141 + 1;
    *(uint32_t *)(v142 + 4 * v141) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5837) )
    v143 = *(uint32_t *)(v108 + 328);
    if ( *(uint32_t *)(v108 + 336) < v143
    || (*(uint8_t *)(v108 + 333) || !v143)
    && (v144 = *(uint32_t *)(v108 + 340), v144 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 320) + 8))(
    v108 + 320,
    v144 + v143,
    0) )
    v145 = *(uint32_t *)(v108 + 336);
    v146 = *(uint32_t *)(v108 + 324);
    *(uint32_t *)(v108 + 336) = v145 + 1;
    *(uint32_t *)(v146 + 4 * v145) = this;
    HouseClass::CalculateCostMultipliers((float *)v108);
    v147 = *(uint32_t *)(v108 + 112);
    if ( *(uint32_t *)(v108 + 120) < v147
    || (*(uint8_t *)(v108 + 117) || !v147)
    && (v148 = *(uint32_t *)(v108 + 124), v148 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v108 + 104) + 8))(v108 + 104, v148 + v147, 0) )
    v149 = *(uint32_t *)(v108 + 120);
    v150 = *(uint32_t *)(v108 + 108);
    *(uint32_t *)(v108 + 120) = v149 + 1;
    *(uint32_t *)(v150 + 4 * v149) = this;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5836) )
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21388);
    v151 = *(uint32_t *)(*((uint32_t *)this + 328) + 5476);
    if ( v151 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 356) += v151;
    v152 = *((uint32_t *)this + 328);
    v153 = *(uint32_t *)(v152 + 5480);
    if ( v153 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 360) += v153;
    v154 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v154 + 5835) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 724) += *(uint32_t *)(v154 + 6016);
    v155 = *((uint32_t *)this + 328);
    v156 = *(uint32_t *)(v155 + 3768);
    if ( v156 )
    LOBYTE(v152) = *(uint8_t *)(v155 + 3278);
    HouseClass::UpdateProduction(v37, v156, v152, 0);
    v157 = *((uint32_t *)this + 328);
    LOBYTE(v158) = *(uint8_t *)(v157 + 3278);
    HouseClass::UpdateProduction(v108, *(uint32_t *)(v157 + 3768), v158, 0);
    v159 = 0;
    if ( v182 > 0 )
    v160 = (uint32_t **)Block;
    do
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 632))(this, 2, *v160[v159]);
    v160 = (uint32_t **)Block;
    if ( *(uint8_t *)(*((uint32_t *)Block + v159) + 4) )
    *((uint8_t *)this + 1048) = 1;
    *(uint8_t *)(*v160[v159] + 1048) = 1;
    v160 = (uint32_t **)Block;
    ++v159;
    while ( v159 < v182 );
    if ( GameMode_Current[0] )
    if ( !(unsigned __int8)House::IsCurrentPlayer((void*375 *)v108) )
    v161 = *((uint32_t *)this + 83);
    if ( v161 != v108 && !*(uint8_t *)(*(uint32_t *)(v161 + 52) + 422) )
    for ( i = *((uint8_t *)this + 1794); i > 0; i = *((uint8_t *)this + 1794) )
    v163 = *((uint32_t *)this + i + 378);
    v164 = (*(int (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v163 + 184))(v163, *((uint32_t *)this + 135), 1);
    HouseClass::AddPower(*((uint32_t **)this + 135), v164);
    BuildingClass::ClearSuperWeaponAnim((int)this);
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 416))(this, 1);
    *(uint8_t *)(v37 + 508) = 1;
    result = (int)Block;
    *(uint8_t *)(v108 + 508) = 1;
    v178 = &VectorClass<Reestablish *>::`vftable';
    if ( result )
    if ( BYTE1(v181) )
    __3_YAXPAX_Z((void *)result);
    LOBYTE(result) = 1;
    return result;
}

// 0x00449410
int  BuildingClass::GetBoundingSizeExt(#377 *this)
{
    return (*(uint8_t *)(*((uint32_t *)this + 328) + 5829) != 0 ? 0x20 : 0)
    - (*(uint8_t *)(*((uint32_t *)this + 328) + 5815) != 0 ? 0x10 : 0)
    + ObjectClass::GetBoundingSize(this);
}

// 0x00449440
int  BuildingClass::GetCursorAction(#377 *this)
{
    uint32_t *v1; // eax
    void *v2; // eax
    int v3; // eax
    int v5; // eax
    int v6; // [esp-Ch] [ebp-Ch]
    int v7; // [esp-8h] [ebp-8h]
    int v8; // [esp-4h] [ebp-4h]
    int v9; // [esp+4h] [ebp+4h] BYREF
    v1 = (uint32_t *)*((uint32_t *)this + 328);
    v9 = *(uint32_t *)(v9 + 36);
    if ( v1[258] && *((uint8_t *)this + 116) )
    v8 = *((uint32_t *)this + 135);
    v7 = (int)v1;
    v6 = v1[415];
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9);
    v3 = -(CellClass::IsPassable((int)v2, v6, v7, v8) != 0);
    LOBYTE(v3) = v3 & 0xF9;
    return v3 + 7;
    else
    v5 = -((*(unsigned __int8 (__thiscall **)(uint32_t *, int *, uint32_t))(*v1 + 168))(v1, &v9, *((uint32_t *)this + 135)) != 0);
    LOBYTE(v5) = v5 & 0xF9;
    return v5 + 7;
}

// 0x004494C0
int  BuildingClass::CanBeSold(#377 *this)
{
    int result; // eax
    result = ObjectClass::HasLocation(this);
    if ( (uint8_t)result )
    goto LABEL_11;
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 5497) )
    goto LABEL_11;
    if ( *((uint8_t *)this + 1769) )
    result = *((uint32_t *)this + 333);
    if ( result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 19 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 18 )
    LOBYTE(result) = 1;
    return result;
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 5824) || *(uint8_t *)(*((uint32_t *)this + 135) + 506) )
    LABEL_11:
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::UpdateProduction(#377 *this)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    char *MissionControl; // eax
    int v7; // esi
    uint8_t *v8; // ecx
    int v9; // eax
    int v10; // ebp
    uint8_t *Member; // eax
    uint8_t *v12; // edi
    uint32_t *v13; // ebx
    uint32_t *v14; // eax
    int *v15; // eax
    double v16; // st7
    char *v17; // eax
    int v18; // esi
    char *v19; // eax
    int v20; // esi
    uint8_t v21[12]; // [esp+34h] [ebp-24h] BYREF
    uint8_t v22[12]; // [esp+40h] [ebp-18h] BYREF
    uint32_t v23[3]; // [esp+4Ch] [ebp-Ch] BYREF
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    TechnoClass::DrainAmmo((char *)this, *((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 684))(this) )
    v2 = *((uint32_t *)this + 328);
    *((uint8_t *)this + 1757) = 1;
    if ( *(uint8_t *)(v2 + 5827)
    || ((v3 = *(uint32_t *)(v2 + 5872), v3 == -1)
    || (v4 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v3) + 40) + 200)) == 0
    || DynamicVector::GetOrGrow((uint32_t *)(*((uint32_t *)this + 135) + 21840), *(uint32_t *)(v4 + 3576)))
    && *(uint32_t *)(*((uint32_t *)this + 328) + 5872) != -1
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5499)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) <= 0
    || !*((uint32_t *)this + 173) )
    MissionControl = MissionClass::GetMissionControl(this);
    v7 = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0);
    return v7 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    else
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 1, 0);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    return 1;
    v8 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v8[5813] )
    return 100;
    v9 = *((uint32_t *)this + 47);
    if ( !v9 )
    BuildingClass::StartProduction((int *)this, 1);
    *((uint32_t *)this + 47) = 1;
    LABEL_32:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5802)
    && Team::AllMembersValid((int *)this)
    && (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 29) != 1
    && (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 19) == 1 )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 20, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5801) )
    v17 = MissionClass::GetMissionControl(this);
    v18 = Math::RoundToInt(*((double *)v17 + 2) * 900.0);
    return v18 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    else
    v19 = MissionClass::GetMissionControl(this);
    v20 = Math::RoundToInt(*((double *)v19 + 2) * 900.0);
    return 3 * v20 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    if ( v9 != 1 )
    goto LABEL_32;
    if ( !v8[5801] && !v8[5802] && !v8[5803] || (v10 = 0, *((int *)this + 58) <= 0) )
    LABEL_28:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5821) )
    AnimClass::resetAnimation(this);
    goto LABEL_32;
    while ( 1 )
    Member = (uint8_t *)Team::GetMember(this, v10);
    v12 = Member;
    if ( Member )
    if ( (Member[20] & 1) != 0 && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)Member + 388))(Member) == 7 )
    v13 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint8_t *))(*(uint32_t *)v12 + 72))(v12, v21);
    v14 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v22);
    v15 = Coord::Subtract(v23, *v14 - *v13, v14[1] - v13[1], v14[2] - v13[2]);
    v16 = Math::Sqrt((double)*v15 * (double)*v15 + (double)v15[2] * (double)v15[2] + (double)v15[1] * (double)v15[1]);
    if ( (int)Math::RoundToInt(v16) < 64
    && (*(int (__thiscall **)(void*377 *, int, uint8_t *))(*(uint32_t *)this + 632))(this, 19, v12) == 1 )
    break;
    if ( ++v10 >= *((uint32_t *)this + 58) )
    goto LABEL_28;
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 20, 0);
    return 1;
}

// 0x00449A40
int  BuildingClass::GetOwnerHouse(#377 *this)
{
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 540))(this);
}

int  BuildingClass::vt_145_(#377 *this)
{
    int v2; // eax
    int v3; // eax
    __int16 v4; // cx
    int SpotlightRadius; // ecx
    __int16 v7; // [esp+14h] [ebp-1Ch] BYREF
    uint32_t v8[3]; // [esp+18h] [ebp-18h] BYREF
    uint32_t v9[3]; // [esp+24h] [ebp-Ch] BYREF
    v2 = *((uint32_t *)this + 47);
    if ( !v2 )
    BuildingClass::StartProduction((int *)this, 0);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 11);
    SpotlightRadius = *(uint32_t *)(*((uint32_t *)this + 328) + 3692);
    if ( SpotlightRadius != -1 || (SpotlightRadius = RulesClass_Instance->SpotlightRadius, SpotlightRadius != -1) )
    v9[0] = *((uint32_t *)this + 39);
    v9[1] = *((uint32_t *)this + 40);
    v9[2] = *((uint32_t *)this + 41);
    StartAudioControllerAt(SpotlightRadius, (int)v9, (int)this + 1696);
    *((uint8_t *)this + 128) = 1;
    *((uint32_t *)this + 47) = 1;
    return 1;
    if ( v2 != 1 )
    return 1;
    *((uint8_t *)this + 128) = 1;
    v8[0] = *((uint32_t *)this + 39);
    v8[1] = *((uint32_t *)this + 40);
    v8[2] = *((uint32_t *)this + 41);
    StartAudioController((int)v8, (int)this + 1696);
    if ( !*((uint8_t *)this + 1757) )
    return 1;
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 12);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    BuildingClass::StartProduction((int *)this, 1);
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1244))(this, 0);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    v3 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v3 + 5823) )
    LOBYTE(v4) = 0;
    HIBYTE(v4) = *(uint8_t *)(v3 + 3800);
    v7 = v4;
    FacingClass::Set_SyncLog(&v7);
    BuildingTypeClass::IsPowered(*((uint32_t *)this + 328));
    Mixer::ReleaseChannel((int **)this + 424);
    return 1;
}

int  BuildingClass::CompleteSell(#377 *this)
{
    int Location_Z; // eax
    int v3; // eax
    bool *p_HasParachute; // esi
    int v5; // eax
    int v6; // eax
    int v7; // ebx
    uint32_t *Value; // eax
    __int16 v9; // dx
    int v10; // ebx
    uint32_t *v11; // eax
    __int16 v12; // dx
    __int16 v13; // cx
    __int16 v14; // cx
    void *v16; // eax
    uint32_t *v17; // ebx
    double HealthRatio; // st7
    int (__thiscall **vfptr0)(void*377 *); // edx
    int v20; // eax
    uint32_t *v21; // ecx
    unsigned int v22; // edx
    unsigned int v23; // eax
    void *Parachute; // ecx
    int v25; // eax
    int v26; // ecx
    int v27; // edi
    int v28; // esi
    int v29; // ecx
    int v30; // eax
    int v31; // eax
    int v32; // eax
    int v33; // eax
    int v34; // eax
    __int16 v35; // dx
    char v36; // al
    int j; // esi
    int v38; // eax
    int (__thiscall **v39)(void*377 *); // eax
    int v40; // ecx
    int v41; // eax
    int k; // esi
    double v43; // st7
    int v44; // eax
    char v45; // cl
    void (__thiscall **v46)(void*377 *, int); // edx
    __int16 *v47; // eax
    int v48; // edx
    __int16 *v49; // edi
    int v50; // ebx
    int v51; // eax
    uint8_t *m; // esi
    __int16 *v53; // ecx
    __int16 v54; // ax
    int v55; // ecx
    void *v56; // eax
    int *v57; // eax
    uint32_t *v58; // eax
    int (__thiscall **v59)(void*377 *); // eax
    int v60; // eax
    int v61; // edx
    char v62; // al
    uint32_t *v63; // eax
    int v64; // edx
    int v65; // ebx
    int v66; // esi
    void *v67; // eax
    int v68; // edi
    int v69; // eax
    _WORD *v70; // esi
    _WORD *v71; // eax
    __int16 v72; // dx
    int v73; // eax
    uint32_t *v74; // eax
    int *v75; // eax
    int v76; // ecx
    int v77; // edx
    int v78; // eax
    int v79; // eax
    int v80; // eax
    int v81; // eax
    int v82; // eax
    int (__thiscall **v83)(void*377 *); // edx
    int v84; // eax
    int v85; // esi
    int v86; // ecx
    int v87; // esi
    int v88; // eax
    char v89; // al
    int v90; // ecx
    int v91; // esi
    int v92; // eax
    void (__thiscall **v93)(void*377 *, int); // edx
    char *v94; // esi
    int v95; // edi
    float v96; // [esp+Eh] [ebp-D8h]
    float v97; // [esp+Eh] [ebp-D8h]
    char v98; // [esp+28h] [ebp-BEh]
    char v99; // [esp+28h] [ebp-BEh]
    char v100; // [esp+29h] [ebp-BDh]
    int v101; // [esp+2Ah] [ebp-BCh]
    int v102; // [esp+2Ah] [ebp-BCh]
    int v103; // [esp+2Eh] [ebp-B8h] BYREF
    unsigned __int64 v104; // [esp+32h] [ebp-B4h]
    double v105; // [esp+3Ah] [ebp-ACh] BYREF
    int v106; // [esp+42h] [ebp-A4h]
    int v107; // [esp+46h] [ebp-A0h]
    void **v108; // [esp+4Ah] [ebp-9Ch] BYREF
    void *Block; // [esp+4Eh] [ebp-98h]
    int v110; // [esp+52h] [ebp-94h]
    int v111; // [esp+56h] [ebp-90h]
    int i; // [esp+5Ah] [ebp-8Ch]
    int v113; // [esp+5Eh] [ebp-88h]
    int v114; // [esp+62h] [ebp-84h]
    int v115; // [esp+66h] [ebp-80h] BYREF
    int v116; // [esp+6Ah] [ebp-7Ch] BYREF
    int v117; // [esp+6Eh] [ebp-78h] BYREF
    uint32_t v118[3]; // [esp+72h] [ebp-74h] BYREF
    uint32_t v119[3]; // [esp+7Eh] [ebp-68h] BYREF
    uint32_t v120[3]; // [esp+8Ah] [ebp-5Ch] BYREF
    uint32_t v121[3]; // [esp+96h] [ebp-50h] BYREF
    uint8_t v122[4]; // [esp+A2h] [ebp-44h] BYREF
    uint8_t v123[4]; // [esp+A6h] [ebp-40h] BYREF
    int v124; // [esp+AAh] [ebp-3Ch] BYREF
    int v125; // [esp+AEh] [ebp-38h] BYREF
    int v126; // [esp+B2h] [ebp-34h] BYREF
    uint8_t v127[12]; // [esp+B6h] [ebp-30h] BYREF
    int v128[3]; // [esp+C2h] [ebp-24h] BYREF
    uint8_t v129[12]; // [esp+CEh] [ebp-18h] BYREF
    int v130[3]; // [esp+DAh] [ebp-Ch] BYREF
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 412))(this, 0);
    Location_Z = *((uint32_t *)this + 47);
    v98 = *((uint8_t *)this + 131);
    if ( Location_Z )
    v3 = Location_Z - 1;
    if ( v3 )
    if ( v3 == 1 )
    p_HasParachute = (bool *)this + 156;
    v118[0] = *((uint32_t *)this + 39);
    v118[1] = *((uint32_t *)this + 40);
    v118[2] = *((uint32_t *)this + 41);
    StartAudioController((int)v118, (int)this + 1696);
    if ( *((uint8_t *)this + 1757) )
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    if ( *((uint8_t *)this + 1050) && !*(uint32_t *)(*((uint32_t *)this + 328) + 1032) )
    VoxClass::FindAndPlay(aEvaStructureso, -1);
    v5 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v5 + 1032)
    && (!*(uint8_t *)(v5 + 5817)
    || GameMode_Current[0]
    && *((uint32_t *)this + 134)
    && (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && GameMode_Current[0]
    && (uint8_t)MCVRedeploy
    && !*((uint32_t *)this + 176)) )
    v6 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v6 + 5834) )
    goto LABEL_20;
    v7 = *(uint32_t *)(v6 + 5904);
    Value = ProgressTimer::GetValue((_WORD *)this + 440, &v125);
    LOBYTE(v9) = 0;
    HIBYTE(v9) = v7;
    if ( *(_WORD *)Value != v9 )
    goto LABEL_19;
    v10 = *(uint32_t *)(*((uint32_t *)this + 328) + 3800);
    v11 = ProgressTimer::GetValue((_WORD *)this + 452, &v124);
    LOBYTE(v12) = 0;
    HIBYTE(v12) = v10;
    if ( *(_WORD *)v11 == v12 )
    LABEL_20:
    ++IKnowWhatImDoing;
    v16 = __2_YAPAXI_Z(0x8E8u);
    if ( v16 )
    v17 = (uint32_t *)UnitClass::Construct(
    (int)v16,
    *(uint32_t *)(*((uint32_t *)this + 328) + 1032),
    *((LPVOID *)this + 135));
    else
    v17 = 0;
    --IKnowWhatImDoing;
    if ( v17 )
    HealthRatio = BuildingClass::GetHealthRatio((int *)this);
    vfptr0 = *(int (__thiscall ***)(void*377 *))this;
    v105 = HealthRatio;
    v20 = vfptr0[175](this);
    v21 = (uint32_t *)*((uint32_t *)this + 328);
    v107 = v20;
    v101 = *((uint32_t *)this + 134);
    if ( BuildingTypeClass::GetFoundationWidth(v21) > 2
    || BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) > 2 )
    Parachute = (void *)*((uint32_t *)this + 40);
    v25 = dword_89F6F0 + *(uint32_t *)p_HasParachute;
    HIDWORD(v104) = *((uint32_t *)this + 41);
    v103 = ((v25 / 256) << 8) + 128;
    LODWORD(v104) = ((((int)Parachute + dword_89F6F4) / 256) << 8) + 128;
    else
    v22 = *((uint32_t *)this + 40);
    v23 = *((uint32_t *)this + 41);
    v103 = *(uint32_t *)p_HasParachute;
    v104 = __PAIR64__(v23, v22);
    v26 = *((uint32_t *)this + 389);
    if ( v26 )
    MapClass::ScrollOnce(v26, 0);
    v27 = 0;
    Block = 0;
    v110 = 0;
    LOWORD(v111) = 1;
    v108 = &DynamicVectorClass<TechnoClass *>::`vftable';
    v113 = 10;
    for ( i = 0; v27 < g_SidebarState; ++v27 )
    v28 = *((uint32_t *)g_TechnoClass_Count + v27);
    v29 = *(uint32_t *)(v28 + 692);
    if ( v29
    && (*(int (__thiscall **)(int))(*(uint32_t *)v29 + 44))(v29) == 6
    && *(void*377 **)(v28 + 692) == this
    && *(uint8_t *)(v28 + 144)
    && (void*377 *)v28 != this
    && (uint32_t *)v28 != v17
    && (i < v110
    || (BYTE1(v111) || !v110)
    && v113 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v108[2])(&v108, v113 + v110, 0)) )
    v30 = i++;
    *((uint32_t *)Block + v30) = v28;
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 212))(this);
    v31 = BuildingClass::processPowerState(*((uint32_t **)this + 328));
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, int))(*v17 + 216))(v17, &v103, v31) )
    v32 = (*(int (__thiscall **)(uint32_t *))(*v17 + 136))(v17);
    v33 = Math::RoundToInt((double)*(int *)(v32 + 160) * v105);
    v17[27] = v33;
    if ( v33 <= 1 )
    v33 = 1;
    v17[27] = v33;
    v17[28] = v33;
    if ( *((uint32_t *)this + 182) )
    ((void (__stdcall *)(uint32_t *))SlaveManagerClass::SetOwner)(v17);
    v17[133] = *((uint32_t *)this + 133);
    v17[84] = *((uint32_t *)this + 84);
    v34 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v34 + 5834) )
    LOBYTE(v35) = 0;
    HIBYTE(v35) = *(uint8_t *)(v34 + 5904);
    LOWORD(v115) = v35;
    ((void (__stdcall *)(int *))FacingClass::Set_SyncLog)(&v115);
    if ( v101 )
    (*(void (__thiscall **)(uint32_t *, int, int))(*v17 + 1152))(v17, v101, 1);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v17 + 488))(v17, 2, 0);
    if ( *((uint32_t *)this + 13) )
    ObjectClass::SetReference(v17, *((uint32_t *)this + 13));
    --*(uint32_t *)(*((uint32_t *)this + 13) + 44);
    *((uint32_t *)this + 13) = 0;
    qmemcpy(v17 + 311, (char *)this + 1244, 0x1Cu);
    SetAudioSource((int)this + 1244, 0, 0);
    *((uint32_t *)this + 316) = -1;
    *((uint32_t *)this + 317) = -1;
    if ( v98 )
    v36 = MoveFeedback;
    MoveFeedback = 0;
    v99 = v36;
    (*(void (__thiscall **)(uint32_t *))(*v17 + 332))(v17);
    MoveFeedback = v99;
    for ( j = 0; j < i; ++j )
    (*(void (__thiscall **)(uint32_t, uint32_t *))(**((uint32_t **)Block + j) + 968))(
    *((uint32_t *)Block + j),
    v17);
    else
    HouseClass::AddPower(*((uint32_t **)this + 135), v107);
    v108 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block )
    if ( BYTE1(v111) )
    __3_YAXPAX_Z(Block);
    else
    v38 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 700))(this);
    HouseClass::AddPower(*((uint32_t **)this + 135), v38);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 220))(this, 1);
    Mixer::ReleaseChannel((int **)this + 424);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    return 1;
    else
    LABEL_19:
    LOBYTE(v13) = 0;
    HIBYTE(v13) = *(uint8_t *)(*((uint32_t *)this + 328) + 5904);
    LOWORD(v117) = v13;
    FacingClass::Update((char *)this + 880, &v117);
    LOBYTE(v14) = 0;
    HIBYTE(v14) = *(uint8_t *)(*((uint32_t *)this + 328) + 3800);
    LOWORD(v116) = v14;
    FacingClass::Update((char *)this + 904, &v116);
    return 1;
    v39 = *(int (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 335) = -1;
    ((void (__thiscall *)(void*377 *, uint32_t))v39[56])(this, 0);
    v40 = *((uint32_t *)this + 389);
    if ( v40 )
    MapClass::ScrollOnce(v40, 0);
    v41 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 700))(this);
    HouseClass::AddPower(*((uint32_t **)this + 135), v41);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 212))(this);
    for ( k = FirstFloatPositive((float *)this + 207); k != -1; k = FirstFloatPositive((float *)this + 207) )
    v96 = FloatArray::Get((float *)this + 207, k);
    v43 = Float::SubtractClamped((float *)this + 207, v96, k);
    v97 = (float)(int)Math::RoundToInt(v43);
    ((void (__stdcall *)(float, int))HouseClass::GiveTiberium_Storage)(v97, k);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    v44 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v44 + 5831) )
    v45 = *((uint8_t *)this + 1772);
    *((uint8_t *)this + 1771) = -1;
    if ( !v45 )
    *((uint8_t *)this + 1772) = *(uint8_t *)(v44 + 5895);
    v46 = *(void (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 128) = 1;
    *((uint8_t *)this + 1772) = 1;
    v46[260](this, 1);
    return 1;
    else
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 640))(this, 3);
    if ( !*((uint8_t *)this + 1048) )
    if ( !*((uint32_t *)this + 134) || !*(uint32_t *)(*((uint32_t *)this + 328) + 1032) )
    v114 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 720))(this);
    v100 = 0;
    v47 = (__int16 *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 264))(this, 0);
    v48 = 0;
    v49 = v47;
    v107 = 0;
    while ( *v47 != 0x7FFF || v47[1] != 0x7FFF )
    ++v48;
    v47 += 2;
    v107 = v48;
    v50 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 440))(this, v122);
    v51 = *((uint32_t *)this + 328);
    if ( (*(uint8_t *)(v51 + 5806) || *(uint8_t *)(v51 + 5807)) && *((int *)this + 69) > 0 )
    for ( m = (uint8_t *)LinkedList::Pop((uint32_t *)this + 69); m; m = (uint8_t *)LinkedList::Pop((uint32_t *)this + 69) )
    v53 = v49;
    v106 = 0;
    v49 += 2;
    v54 = *v53;
    v55 = (__int16)(HIWORD(v50) + v53[1]) << 8;
    LODWORD(v105) = ((__int16)(v50 + v54) << 8) + 128;
    HIDWORD(v105) = v55 + 164;
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)m + 44))(m) == 1 )
    v56 = Coord::To_Cell(&MapClass_Instance, &v105);
    v57 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v56 + 72))(v56, v127);
    else
    v58 = Coord::To_Cell(&MapClass_Instance, &v105);
    v57 = ObjectPlacement::CalcPosition(v58, v130, &v105, 0, 0, 0);
    v105 = *(double *)v57;
    v106 = v57[2];
    ++IKnowWhatImDoing;
    m[140] = *((uint8_t *)this + 140);
    v103 = *((uint32_t *)this + 39);
    v59 = *(int (__thiscall ***)(void*377 *))this;
    v104 = *((_QWORD *)this + 20);
    v60 = v59[111](this);
    v61 = *(uint32_t *)((*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v60 + 72))(v60, v129) + 8);
    v62 = *((uint8_t *)this + 1760);
    HIDWORD(v104) = v61;
    if ( v62
    || (v63 = ProgressTimer::GetValue((_WORD *)this + 452, &v126),
    !(*(unsigned __int8 (__thiscall **)(uint8_t *, int *, uint32_t))(*(uint32_t *)m + 216))(
    m,
    &v103,
    (unsigned __int8)((unsigned int)((*v63 >> 7) + 1) >> 1))) )
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)m + 224))(m, 0);
    (*(void (__thiscall **)(uint8_t *, int))(*(uint32_t *)m + 32))(m, 1);
    else
    if ( !m[1080] )
    ++*(uint32_t *)(*((uint32_t *)m + 135) + 756);
    m[1080] = 1;
    v64 = *(uint32_t *)m;
    m[1081] = 0;
    (*(void (__thiscall **)(uint8_t *, int *, int, uint32_t))(v64 + 372))(m, &g_BuildingClassPool, 1, 0);
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135)) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)m + 488))(m, 15, 0);
    --IKnowWhatImDoing;
    LODWORD(v105) = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 264))(this, 0);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    BuildingClass::UnloadUnits((int *)this, 0, 1);
    if ( v114 )
    v65 = v107;
    v102 = v114;
    do
    v66 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 780))(this);
    if ( *(uint8_t *)(v66 + 3779) )
    do
    if ( !v100 )
    break;
    v66 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 780))(this);
    while ( *(uint8_t *)(v66 + 3779) );
    if ( *(uint8_t *)(v66 + 3779) )
    v100 = 1;
    if ( v66 )
    v67 = __2_YAPAXI_Z(0x6F0u);
    if ( v67 )
    v68 = InfantryClass::Construct((int)v67, v66, *((IUnknown **)this + 135));
    if ( v68 )
    ++IKnowWhatImDoing;
    v69 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v65 - 1);
    v70 = (_WORD *)(LODWORD(v105) + 4 * v69);
    v71 = (_WORD *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 440))(this, v123);
    v72 = v71[1] + v70[1];
    v73 = (__int16)(*v71 + *v70) << 8;
    v104 = (unsigned int)((v72 << 8) + 164);
    v103 = v73 + 128;
    v74 = Coord::To_Cell(&MapClass_Instance, &v103);
    v75 = ObjectPlacement::CalcPosition(v74, v128, &v103, 0, 0, 0);
    v103 = *v75;
    v76 = v75[1];
    LODWORD(v104) = v76;
    v77 = v75[2];
    HIDWORD(v104) = v77;
    if ( v103 == g_BuildingClassPool && v76 == dword_89C84C && v77 == dword_89C850
    || !(*(unsigned __int8 (__thiscall **)(int, int *, uint32_t))(*(uint32_t *)v68 + 216))(v68, &v103, 0) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v68 + 32))(v68, 1);
    else
    if ( *(uint8_t *)(*(uint32_t *)(v68 + 1728) + 3230) )
    *(uint8_t *)(v68 + 1753) = 1;
    --IKnowWhatImDoing;
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)v68 + 372))(
    v68,
    &g_BuildingClassPool,
    1,
    0);
    ++IKnowWhatImDoing;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v68 + 488))(v68, 2, 0);
    --IKnowWhatImDoing;
    --v102;
    while ( v102 );
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    && !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this) )
    v78 = *((uint32_t *)this + 328);
    if ( !*(uint32_t *)(v78 + 1032)
    || *(uint8_t *)(v78 + 5817)
    && (!GameMode_Current[0]
    || !*((uint32_t *)this + 134)
    || !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    || !GameMode_Current[0]
    || !(uint8_t)MCVRedeploy
    || *((uint32_t *)this + 176)) )
    v120[0] = *((uint32_t *)this + 39);
    v120[1] = *((uint32_t *)this + 40);
    v120[2] = *((uint32_t *)this + 41);
    StartAudioControllerAt(HIDWORD(RulesClass_Instance->WheeledDownhill), (int)v120, 0);
    v79 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v79 + 3696) != -1 )
    v119[0] = *((uint32_t *)this + 39);
    v119[1] = *((uint32_t *)this + 40);
    v119[2] = *((uint32_t *)this + 41);
    StartAudioControllerAt(*(uint32_t *)(v79 + 3696), (int)v119, (int)this + 1696);
    *((uint32_t *)this + 47) = 2;
    BuildingClass::StartProduction((int *)this, 0);
    *((uint8_t *)this + 1757) = 0;
    if ( v98 )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 332))(this);
    return 1;
    return 1;
    v80 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v80 + 1032)
    && (!*(uint8_t *)(v80 + 5817)
    || GameMode_Current[0]
    && *((uint32_t *)this + 134)
    && (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && GameMode_Current[0]
    && (uint8_t)MCVRedeploy
    && !*((uint32_t *)this + 176)) )
    v81 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v81 + 5834) || *(uint8_t *)(v81 + 5828) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    v82 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v82 + 1032)
    && (!*(uint8_t *)(v82 + 5817)
    || GameMode_Current[0]
    && *((uint32_t *)this + 134)
    && (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && GameMode_Current[0]
    && (uint8_t)MCVRedeploy
    && !*((uint32_t *)this + 176)) )
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 1032) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 876))(this);
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1388) != -1 )
    v121[0] = *((uint32_t *)this + 39);
    v83 = *(int (__thiscall ***)(void*377 *))this;
    v121[1] = *((uint32_t *)this + 40);
    v121[2] = *((uint32_t *)this + 41);
    v84 = v83[33](this);
    StartAudioControllerAt(*(uint32_t *)(v84 + 1388), (int)v121, 0);
    if ( *((uint32_t *)this + 182) )
    v85 = *((uint32_t *)this + 134);
    if ( v85 != (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this) )
    v86 = *((uint32_t *)this + 134);
    if ( v86 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v86 + 44))(v86) == 11 )
    v87 = *((uint32_t *)this + 134);
    v88 = v87
    ? ((*(int (__thiscall **)(uint32_t))(*(uint32_t *)v87 + 44))(*((uint32_t *)this + 134)) == 11
    ? v87
    : 0)
    : 0;
    if ( *(uint32_t *)(v88 + 236) == 5 )
    BuildingClass::ProcessEnterUnit(*((uint32_t **)this + 182));
    if ( *((uint32_t *)this + 185) )
    BuildingClass::RemoveLimpet(this);
    v89 = *((uint8_t *)this + 1794);
    if ( !v89 )
    v93 = *(void (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 1757) = 0;
    v93[160](this, 23);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    BuildingClass::RepairPlacement(this, 0);
    v94 = (char *)this + 1480;
    v95 = 8;
    do
    if ( *(uint32_t *)v94 )
    (*(void (__thiscall **)(uint32_t))(**(uint32_t **)v94 + 248))(*(uint32_t *)v94);
    *(uint32_t *)v94 = 0;
    v94 += 4;
    --v95;
    while ( v95 );
    *((uint32_t *)this + 47) = 1;
    return 1;
    v90 = *((uint32_t *)this + v89 + 378);
    v91 = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v90 + 140))(v90, *((uint32_t *)this + 135));
    v92 = (*(int (__thiscall **)(int))(*(uint32_t *)v91 + 700))(v91);
    HouseClass::AddPower(*((uint32_t **)this + 135), v92);
    if ( v91 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v91 + 32))(v91, 1);
    BuildingClass::ClearSuperWeaponAnim((int)this);
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    if ( *((uint8_t *)this + 1050) )
    VoxClass::FindAndPlay(aEvaStructureso, -1);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 1;
}

int  BuildingClass::FireLaser(uint32_t *this, int a2, int a3, int a4)
{
    int *v5; // eax
    char *v6; // eax
    wchar_t *v7; // eax
    int ConditionRedSparkingProbability_high; // ecx
    int v10; // [esp-20h] [ebp-44h]
    int ConditionYellowSparkingProbability; // [esp-14h] [ebp-38h]
    char *v12; // [esp+14h] [ebp-10h]
    uint32_t v13[3]; // [esp+18h] [ebp-Ch] BYREF
    v12 = (char *)__2_YAPAXI_Z(0x5Cu);
    if ( v12 )
    ConditionYellowSparkingProbability = RulesClass_Instance->ConditionYellowSparkingProbability;
    LOWORD(v10) = *(_WORD *)(*(this + 135) + 22268);
    HIWORD(v10) = *(unsigned __int8 *)(*(this + 135) + 22270);
    v5 = (int *)(*(int (__thiscall **)(uint32_t *, uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*this + 176))(
    this,
    v13,
    0,
    0,
    0,
    0);
    v6 = TimerClass::Construct(
    v12,
    *v5,
    v5[1],
    v5[2],
    a2,
    a3,
    a4,
    0,
    1,
    v10,
    0,
    0,
    ConditionYellowSparkingProbability,
    0,
    1,
    1065353216,
    0);
    if ( v6 )
    v6[32] = 1;
    *((uint32_t *)v6 + 7) = 3;
    v7 = CurrentFrame;
    ConditionRedSparkingProbability_high = HIDWORD(RulesClass_Instance->ConditionRedSparkingProbability);
    *(this + 409) = 0;
    *(this + 187) = v7;
    *(this + 188) = a3;
    *(this + 189) = ConditionRedSparkingProbability_high;
    return a3;
}

int  BuildingClass::ProcessActiveUpdate(#377 *this)
{
    int v2; // eax
    int Location_Z; // ecx
    char *MissionControl; // eax
    int v5; // esi
    int v7; // edi
    int v8; // eax
    int v9; // eax
    int v10; // edi
    int v11; // eax
    _WORD *v12; // ebx
    _WORD *v13; // eax
    unsigned __int8 (__thiscall **v14)(void*377 *); // eax
    unsigned __int8 (__thiscall **vfptr0)(void*377 *); // edx
    int v16; // ebp
    unsigned __int8 (__thiscall **v17)(void*377 *); // eax
    int v18; // edi
    int v19; // edx
    int v20; // eax
    char v21; // bl
    uint32_t *Value; // eax
    __int16 v23; // dx
    unsigned __int8 (__thiscall **v24)(void*377 *); // eax
    _WORD *v25; // eax
    _WORD *v26; // eax
    _WORD *v27; // eax
    int v28; // eax
    int *v29; // ebx
    int *v30; // eax
    int v31; // ecx
    int v32; // eax
    int *v33; // edi
    int v34; // edx
    int v35; // ecx
    uint32_t *v36; // edx
    int v37; // ebp
    int v38; // eax
    double v39; // st7
    int v40; // ebp
    unsigned __int8 (__thiscall **v41)(void*377 *); // edi
    int *v42; // eax
    int v43; // ecx
    int v44; // edx
    int v45; // eax
    int v46; // edx
    int v47; // ecx
    uint8_t *v48; // eax
    float v49; // ecx
    int v50; // eax
    double HealthRatio; // st7
    RulesClass *v52; // edx
    int v53; // ecx
    uint8_t *v54; // eax
    int v55; // edx
    float v56; // eax
    int v57; // [esp+1Ch] [ebp-84h]
    int v58; // [esp+38h] [ebp-68h]
    int v59; // [esp+3Ch] [ebp-64h] BYREF
    double v60; // [esp+40h] [ebp-60h] BYREF
    int v61; // [esp+4Ch] [ebp-54h] BYREF
    int v62; // [esp+50h] [ebp-50h] BYREF
    char v63[4]; // [esp+54h] [ebp-4Ch] BYREF
    double v64; // [esp+58h] [ebp-48h]
    int v65; // [esp+64h] [ebp-3Ch]
    int v66; // [esp+68h] [ebp-38h]
    int v67; // [esp+6Ch] [ebp-34h]
    int v68; // [esp+74h] [ebp-2Ch]
    float v69; // [esp+78h] [ebp-28h]
    char v70[12]; // [esp+7Ch] [ebp-24h] BYREF
    char v71[12]; // [esp+88h] [ebp-18h] BYREF
    char v72[12]; // [esp+94h] [ebp-Ch] BYREF
    v2 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v2 + 5816) )
    if ( !*((uint32_t *)this + 173) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    vfptr0 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 409) = 0;
    if ( vfptr0[268](this) )
    BuildingClass::GetType_Thunk();
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 28 )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    return 1;
    return 1;
    v16 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 740))(this, *((uint32_t *)this + 173));
    v17 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    v57 = *((uint32_t *)this + 173);
    *((uint8_t *)this + 1757) = 1;
    v18 = ((int (__thiscall *)(void*377 *, int, int, int))v17[240])(this, v57, v16, 1);
    if ( v18 == 2 )
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this) )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5829) )
    v19 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    &v61,
    *((uint32_t *)this + 173));
    v20 = *((uint32_t *)this + 328);
    v59 = v19;
    if ( !*(uint32_t *)(v20 + 1820)
    || (v21 = *(uint32_t *)(v20 + 1820),
    Value = ProgressTimer::GetValue((_WORD *)this + 452, &v61),
    LOBYTE(v23) = 0,
    HIBYTE(v23) = v21,
    abs16(v23) >= (int)abs16(*(_WORD *)Value - v59)) )
    ((void (__stdcall *)(int *))FacingClass::Set_SyncLog)(&v59);
    v18 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int))(*(uint32_t *)this + 960))(
    this,
    *((uint32_t *)this + 173),
    v16,
    1);
    switch ( v18 )
    case 0:
    if ( *((uint8_t *)this + 1794) && *((uint32_t *)this + 379) )
    if ( (unsigned __int8)((int (*)(void))BuildingClass::processCapture)() )
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)this + 972))(this, *((uint32_t *)this + 173), 0);
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 972))(this, *((uint32_t *)this + 173), 1);
    goto LABEL_116;
    v28 = *((uint32_t *)this + 328);
    if ( v28 != LODWORD(RulesClass_Instance->ZoomInFactor) )
    if ( !*(uint8_t *)(v28 + 5799) )
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 972))(this, *((uint32_t *)this + 173), v16);
    goto LABEL_116;
    v55 = v68;
    *((uint32_t *)this + 453) = *(uint32_t *)(v28 + 5868);
    v56 = v69;
    *((uint32_t *)this + 450) = v16;
    *((uint32_t *)this + 449) = 1;
    *((uint32_t *)this + 451) = v55;
    *((float *)this + 452) = v56;
    BuildingClass::ClearAnims((int *)this, 3);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v53 = 0;
    v54 = (uint8_t *)(*((uint32_t *)this + 328) + 4596);
    else
    v53 = 1;
    v54 = (uint8_t *)(*((uint32_t *)this + 328) + 4612);
    if ( v54 && *v54 )
    goto LABEL_107;
    LABEL_116:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    ((void (__stdcall *)(uint32_t))TechnoClass::GattlingRateUp_GattlingRateDownReset)(*((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    else
    ++*((uint32_t *)this + 82);
    return 1;
    v29 = 0;
    v58 = 0x7FFFFFFF;
    v30 = (int *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 172))(this, v70);
    v65 = *v30;
    v31 = *((uint32_t *)this + 409);
    v66 = v30[1];
    v67 = v30[2];
    if ( v31 >= SLODWORD(RulesClass_Instance->ConditionRedSparkingProbability) )
    goto LABEL_102;
    v32 = *((uint32_t *)this + 135);
    v59 = 0;
    v61 = *(uint32_t *)(v32 + 120);
    if ( v61 <= 0 )
    goto LABEL_102;
    break;
    case 1:
    case 5:
    case 6:
    case 8:
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    v24 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 409) = 0;
    if ( v24[268](this) )
    BuildingClass::GetType_Thunk();
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 28 )
    return 1;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    TechnoClass::DrainAmmo((char *)this, *((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    goto LABEL_53;
    case 2:
    if ( *((uint32_t *)this + 173) )
    v26 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    &v62,
    *((uint32_t *)this + 173));
    FacingClass::Update((char *)this + 904, v26);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    ((void (__stdcall *)(uint32_t))TechnoClass::GattlingRateUp_GattlingRateDownReset)(*((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    return 2;
    case 3:
    if ( *((uint32_t *)this + 173) )
    v27 = (_WORD *)(*(int (__thiscall **)(void*377 *, char *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    v63,
    *((uint32_t *)this + 173));
    FacingClass::Update((char *)this + 904, v27);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    ((void (__stdcall *)(uint32_t))TechnoClass::GattlingRateUp_GattlingRateDownReset)(*((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    else
    ++*((uint32_t *)this + 82);
    return 2;
    case 9:
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1116))(this, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    TechnoClass::DrainAmmo((char *)this, *((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    goto LABEL_53;
    case 10:
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 3285) )
    return 1;
    TechnoClass::DrainAmmo((char *)this, *((uint32_t *)this + 49));
    *((uint32_t *)this + 49) = 0;
    return 1;
    default:
    LABEL_53:
    if ( *((uint32_t *)this + 173) )
    v25 = (_WORD *)(*(int (__thiscall **)(void*377 *, char *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    v63,
    *((uint32_t *)this + 173));
    FacingClass::Update((char *)this + 904, v25);
    *((uint32_t *)this + 49) = 0;
    return 1;
    while ( 1 )
    v33 = *(int **)(*(uint32_t *)(*((uint32_t *)this + 135) + 108) + 4 * v59);
    if ( v33 && *((uint8_t *)v33 + 144) && v33[328] == LODWORD(RulesClass_Instance->ZoomInFactor) )
    v34 = v33[187];
    v35 = v33[189];
    if ( v34 != -1 )
    if ( (int)CurrentFrame - v34 >= v35 )
    goto LABEL_86;
    v35 -= (int)CurrentFrame - v34;
    if ( !v35 )
    LABEL_86:
    if ( !v33[453]
    && !ObjectClass::HasLocation(v33)
    && (*(int (__thiscall **)(int *))(*v33 + 388))(v33) != 1
    && v33 != (int *)this )
    v36 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(*v33 + 172))(v33, v71);
    v38 = v36[1];
    LODWORD(v60) = v65 - *v36;
    v37 = LODWORD(v60);
    v69 = (float)(v67 - v36[2]);
    v64 = (double)(v38 - v66);
    v60 = v69;
    v39 = Math::Sqrt((double)v37 * (double)v37 + v69 * v69 + v64 * v64);
    v40 = Math::RoundToInt(v39);
    if ( v40 <= (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 360))(this, 1) && (!v29 || v40 < v58) )
    v29 = v33;
    v58 = v40;
    if ( ++v59 >= v61 )
    if ( v29 )
    v41 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    ++*((uint32_t *)this + 409);
    v42 = (int *)((int (__thiscall *)(void*377 *, char *, uint32_t, uint32_t, uint32_t, uint32_t))v41[44])(
    this,
    v72,
    0,
    0,
    0,
    0);
    v43 = *v42;
    v44 = v42[1];
    v45 = v42[2];
    v29[453] = *(uint32_t *)(v29[328] + 5868);
    v29[449] = 2;
    v29[450] = v43;
    v29[451] = v44;
    v29[452] = v45;
    BuildingClass::ClearAnims(v29, 3);
    if ( BuildingClass::GetHealthRatio(v29) > *(double *)&RulesClass_Instance[1].WarpOut )
    v47 = 0;
    v48 = (uint8_t *)(v29[328] + 4596);
    else
    v47 = 1;
    v48 = (uint8_t *)(v29[328] + 4612);
    if ( v48 && *v48 )
    BuildingClass::PlayAnim(v29, v46, v48, 10, v47, 0, 0);
    goto LABEL_116;
    LABEL_102:
    *((uint32_t *)this + 453) = *(uint32_t *)(*((uint32_t *)this + 328) + 5868);
    v49 = v69;
    *((uint32_t *)this + 450) = 0;
    v50 = v68;
    *((uint32_t *)this + 449) = 1;
    *((uint32_t *)this + 451) = v50;
    *((float *)this + 452) = v49;
    BuildingClass::ClearAnims((int *)this, 3);
    HealthRatio = BuildingClass::GetHealthRatio((int *)this);
    v52 = RulesClass_Instance;
    if ( HealthRatio > *(double *)&RulesClass_Instance[1].WarpOut )
    v53 = 0;
    v54 = (uint8_t *)(*((uint32_t *)this + 328) + 4596);
    else
    v53 = 1;
    v54 = (uint8_t *)(*((uint32_t *)this + 328) + 4612);
    if ( !v54 || !*v54 )
    goto LABEL_116;
    LABEL_107:
    BuildingClass::PlayAnim(this, (int)v52, v54, 10, v53, 0, 0);
    goto LABEL_116;
    Location_Z = *((uint32_t *)this + 47);
    if ( Location_Z )
    if ( Location_Z != 1 )
    MissionControl = MissionClass::GetMissionControl(this);
    v5 = Math::RoundToInt(*((double *)MissionControl + 3) * 900.0);
    return v5 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    v7 = *((uint32_t *)this + 173);
    if ( v7 )
    v8 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v7 + 44))(*((uint32_t *)this + 173)) == 2 ? v7 : 0;
    else
    v8 = 0;
    if ( *((uint32_t *)this + 173) && v8 && (*(int (__thiscall **)(int))(*(uint32_t *)v8 + 464))(v8) )
    v9 = (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t, int))(*(uint32_t *)this + 960))(
    this,
    *((uint32_t *)this + 173),
    0,
    1);
    if ( v9 == 5 || v9 == 6 || v9 == 8 )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    *((uint32_t *)this + 47) = 0;
    return 1;
    if ( v9 != 2 )
    if ( !v9 )
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)this + 972))(this, *((uint32_t *)this + 173), 0);
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 972))(this, *((uint32_t *)this + 173), 1);
    *((uint32_t *)this + 47) = 0;
    return 1;
    return 1;
    else
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    *((uint32_t *)this + 47) = 0;
    return 1;
    if ( *(uint8_t *)(v2 + 5491)
    && *(int *)(v2 + 3812) > 0
    && HouseClass::GetPowerRatio((int *)*((uint32_t *)this + 135)) < 1.0 )
    return 1;
    v10 = *((uint32_t *)this + 173);
    if ( v10 )
    v11 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v10 + 44))(*((uint32_t *)this + 173)) == 2 ? v10 : 0;
    else
    v11 = 0;
    if ( !*((uint32_t *)this + 173) || !v11 || !(*(int (__thiscall **)(int))(*(uint32_t *)v11 + 464))(v11) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    v14 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 47) = 0;
    ((void (__thiscall *)(void*377 *, int, uint32_t))v14[122])(this, 5, 0);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    return 1;
    if ( TimerClass::Active((int)this + 904) )
    return 1;
    v12 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    &v61,
    *((uint32_t *)this + 173));
    if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v60) - *v12) > 0x2000u )
    v13 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    &v59,
    *((uint32_t *)this + 173));
    FacingClass::Update((char *)this + 904, v13);
    else
    *((uint32_t *)this + 47) = 1;
    return 1;
}

int  BuildingClass::ProcessRepair(#377 *this)
{
    uint8_t *v2; // eax
    int Location_Z; // eax
    int v5; // edx
    int v6; // ecx
    uint8_t *v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    void *v12; // edx
    int (__thiscall **vfptr0)(void*377 *, int); // edx
    int v14; // eax
    int v15; // eax
    int *v16; // eax
    void (__thiscall **v17)(void*377 *, int, int); // esi
    int v18; // eax
    void (__thiscall **v19)(void*377 *, int, int); // esi
    int v20; // eax
    wchar_t *v21; // eax
    int v22; // eax
    int v23; // eax
    int v24; // eax
    int v25; // ecx
    int v26; // edx
    void *v27; // edx
    float *v28; // esi
    void (__thiscall **v29)(void*377 *, int, int); // esi
    int v30; // eax
    wchar_t *v31; // eax
    int v32; // eax
    int v33; // eax
    int v34; // eax
    int v35; // ecx
    uint8_t *v36; // eax
    int v37; // edx
    int v38; // ecx
    uint8_t *v39; // eax
    int v40; // eax
    int v41; // ecx
    int v42; // edx
    void *v43; // edx
    int (__thiscall **v44)(void*377 *, int); // eax
    int v45; // eax
    bool v46; // zf
    char v47; // al
    __int64 v48; // rax
    int v49; // ecx
    uint8_t *v50; // eax
    int v51; // edx
    int v52; // ecx
    uint8_t *v53; // eax
    int Member; // eax
    uint32_t *v55; // esi
    int v56; // eax
    uint32_t **v57; // eax
    int v58; // ecx
    uint32_t *v59; // eax
    int v60; // edi
    void *v61; // eax
    int v62; // ecx
    uint8_t *v63; // eax
    int v64; // edx
    int v65; // ecx
    uint8_t *v66; // eax
    int v67; // eax
    int v68; // edx
    int v69; // ecx
    uint8_t *v70; // eax
    int v71; // ecx
    uint8_t *v72; // eax
    void (__thiscall **v73)(void*377 *, int, int); // eax
    int v74; // eax
    int (__thiscall **v75)(void*377 *, int); // ebx
    int v76; // esi
    int v77; // eax
    int v78; // eax
    uint32_t *v79; // eax
    int v80; // esi
    bool v81; // bl
    int v82; // eax
    bool v83; // cl
    bool v84; // al
    int v85; // eax
    uint32_t *v86; // esi
    int (__thiscall **v87)(void*377 *, int); // ebx
    int v88; // eax
    uint32_t **v89; // eax
    int v90; // ecx
    uint32_t *v91; // eax
    int v92; // ebx
    void *v93; // eax
    int v94; // edx
    int v95; // ecx
    uint8_t *v96; // eax
    void *v97; // eax
    uint32_t *v98; // esi
    uint32_t *v99; // esi
    int v100; // edx
    int v101; // ecx
    uint8_t *v102; // eax
    int v103; // edx
    int v104; // ecx
    uint8_t *v105; // eax
    int v106; // eax
    uint32_t *v107; // ebx
    int v108; // eax
    int (__thiscall **v109)(void*377 *, int); // esi
    int v110; // eax
    int v111; // eax
    uint32_t *v112; // eax
    char *MissionControl; // eax
    int v114; // ebx
    int v115; // eax
    uint32_t *v116; // esi
    int v117; // [esp+1Ch] [ebp-3Ch]
    int v118; // [esp+1Ch] [ebp-3Ch]
    int v119; // [esp+1Ch] [ebp-3Ch]
    int v120; // [esp+1Ch] [ebp-3Ch]
    int v121; // [esp+1Ch] [ebp-3Ch]
    char v122; // [esp+33h] [ebp-25h]
    char v123; // [esp+33h] [ebp-25h]
    uint32_t *v124; // [esp+34h] [ebp-24h] BYREF
    int v125; // [esp+38h] [ebp-20h] BYREF
    char v126[4]; // [esp+3Ch] [ebp-1Ch] BYREF
    int v127; // [esp+40h] [ebp-18h] BYREF
    int v128; // [esp+44h] [ebp-14h] BYREF
    int v129; // [esp+48h] [ebp-10h] BYREF
    void *Parachute; // [esp+4Ch] [ebp-Ch]
    int v131; // [esp+50h] [ebp-8h]
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5803) )
    BuildingClass::UpdateBunker((int *)this);
    v2 = (uint8_t *)*((uint32_t *)this + 328);
    if ( v2[5817] )
    Location_Z = *((uint32_t *)this + 47);
    if ( Location_Z )
    if ( Location_Z == 2 && !Team::AllMembersValid((int *)this) )
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    BuildingClass::ClearAnims((int *)this, 7);
    return 1;
    else
    BuildingClass::StartProduction((int *)this, 2);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v6 = 0;
    v7 = (uint8_t *)(*((uint32_t *)this + 328) + 4392);
    else
    v6 = 1;
    v7 = (uint8_t *)(*((uint32_t *)this + 328) + 4408);
    if ( v7 && *v7 )
    BuildingClass::PlayAnim(this, v5, v7, 7, v6, 0, 0);
    *((uint32_t *)this + 47) = 2;
    return 1;
    if ( v2[5825] )
    v8 = *((uint32_t *)this + 47);
    if ( v8 )
    if ( v8 == 2 )
    if ( Locomotor::GetSpeed((int *)this + 394) || (v9 = *((uint32_t *)this + 397)) == 0 )
    *((uint8_t *)this + 1572) = 0;
    else
    v10 = *((uint32_t *)this + 398);
    v11 = *((uint32_t *)this + 392);
    *((uint8_t *)this + 1572) = 1;
    *((uint32_t *)this + 392) = v10 + v11;
    v12 = Parachute;
    *((uint32_t *)this + 394) = CurrentFrame;
    *((uint32_t *)this + 395) = v12;
    *((uint32_t *)this + 396) = v9;
    if ( *(double *)&RulesClass_Instance[1].ChronoBlastDest * 900.0 > (double)*((int *)this + 392) )
    return 1;
    vfptr0 = *(int (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 1757) = 0;
    *((uint32_t *)this + 392) = 0;
    v14 = vfptr0[157](this, 28) - 10;
    if ( v14 )
    v15 = v14 - 22;
    if ( !v15 )
    v19 = *(void (__thiscall ***)(void*377 *, int, int))this;
    v118 = g_TerrainTypeTable;
    v20 = LinkedList::Pop((uint32_t *)this + 69);
    v19[64](this, v20, v118);
    return 1;
    if ( v15 != 1 )
    return 1;
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    v16 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v125);
    if ( CreateTriggerClassIfFarEnough(8, *v16, *v16) )
    VoxClass::FindAndPlay(aEvaUnitrepaire, -1);
    v129 = *((uint32_t *)this + 39);
    Parachute = (void *)*((uint32_t *)this + 40);
    v131 = *((uint32_t *)this + 41);
    StartAudioControllerAt(RulesClass_Instance->Scorches3[1], (int)&v129, 0);
    v17 = *(void (__thiscall ***)(void*377 *, int, int))this;
    v117 = g_TerrainTypeTable;
    v18 = LinkedList::Pop((uint32_t *)this + 69);
    v17[64](this, v18, v117);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 1;
    else
    *((uint32_t *)this + 47) = 2;
    *((uint8_t *)this + 1757) = 0;
    *((uint32_t *)this + 392) = 0;
    v21 = CurrentFrame;
    *((uint32_t *)this + 397) = 1;
    *((uint32_t *)this + 394) = v21;
    *((uint32_t *)this + 395) = Parachute;
    *((uint32_t *)this + 396) = 1;
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 1668) != -1 )
    v22 = *((uint32_t *)this + 191) - 1;
    *((uint32_t *)this + 191) = v22;
    *((uint32_t *)this + 191) = v22 <= 0 ? 0 : v22;
    LABEL_231:
    MissionControl = MissionClass::GetMissionControl(this);
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    if ( v2[5826] )
    v23 = *((uint32_t *)this + 47);
    if ( v23 )
    if ( v23 == 2 )
    if ( Locomotor::GetSpeed((int *)this + 394) || (v24 = *((uint32_t *)this + 397)) == 0 )
    *((uint8_t *)this + 1572) = 0;
    else
    v25 = *((uint32_t *)this + 398);
    v26 = *((uint32_t *)this + 392);
    *((uint8_t *)this + 1572) = 1;
    *((uint32_t *)this + 392) = v25 + v26;
    v27 = Parachute;
    *((uint32_t *)this + 394) = CurrentFrame;
    *((uint32_t *)this + 395) = v27;
    *((uint32_t *)this + 396) = v24;
    if ( *(double *)&RulesClass_Instance[1].ChronoBlastDest * 900.0 <= (double)*((int *)this + 392) )
    v28 = (float *)(Team::GetMember(this, 0) + 336);
    if ( VeinholeClass::GetState(v28) )
    Power::ChangedHouse(v28, 1);
    else
    Timer::SetFlag(v28, 1);
    v29 = *(void (__thiscall ***)(void*377 *, int, int))this;
    v119 = g_TerrainTypeTable;
    v30 = LinkedList::Pop((uint32_t *)this + 69);
    v29[64](this, v30, v119);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    else
    *((uint32_t *)this + 47) = 2;
    *((uint8_t *)this + 1757) = 0;
    *((uint32_t *)this + 392) = 0;
    v31 = CurrentFrame;
    *((uint32_t *)this + 397) = 1;
    *((uint32_t *)this + 394) = v31;
    *((uint32_t *)this + 395) = Parachute;
    *((uint32_t *)this + 396) = 1;
    v32 = *((uint32_t *)this + 191) - 1;
    *((uint32_t *)this + 191) = v32;
    *((uint32_t *)this + 191) = v32 <= 0 ? 0 : v32;
    goto LABEL_231;
    if ( v2[5801] )
    v33 = *((uint32_t *)this + 47);
    if ( v33 )
    v34 = v33 - 1;
    if ( v34 )
    if ( v34 == 1 )
    if ( Team::AllMembersValid((int *)this) )
    if ( !*((uint32_t *)this + 397) )
    *((uint32_t *)this + 397) = 1;
    if ( Locomotor::GetSpeed((int *)this + 394) || (v40 = *((uint32_t *)this + 397)) == 0 )
    *((uint8_t *)this + 1572) = 0;
    else
    v41 = *((uint32_t *)this + 398);
    v42 = *((uint32_t *)this + 392);
    *((uint8_t *)this + 1572) = 1;
    *((uint32_t *)this + 392) = v41 + v42;
    v43 = Parachute;
    *((uint32_t *)this + 394) = CurrentFrame;
    *((uint32_t *)this + 395) = v43;
    *((uint32_t *)this + 396) = v40;
    if ( *(double *)&RulesClass_Instance[1].PermaControlledAnimationType * 900.0 <= (double)*((int *)this + 392)
    && (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 19) == 1 )
    v44 = *(int (__thiscall ***)(void*377 *, int))this;
    *((uint8_t *)this + 1757) = 0;
    *((uint32_t *)this + 392) = 0;
    v45 = v44[157](this, 28) - 1;
    if ( v45 )
    v46 = v45 == 31;
    v47 = *((uint8_t *)this + 1050);
    if ( v46 )
    if ( v47
    && !(*(int (__stdcall **)(int))(*(uint32_t *)(*((uint32_t *)this + 135) + 36) + 24))(*((uint32_t *)this + 135) + 36) )
    VoxClass::FindAndPlay(aEvaInsufficien, -1);
    BuildingClass::ClearAnims((int *)this, 8);
    BuildingClass::ClearAnims((int *)this, 11);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v62 = 0;
    v63 = (uint8_t *)(*((uint32_t *)this + 328) + 4732);
    else
    v62 = 1;
    v63 = (uint8_t *)(*((uint32_t *)this + 328) + 4748);
    if ( v63 && *v63 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v63, 12, v62, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v65 = 0;
    v66 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v65 = 1;
    v66 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v66 && *v66 )
    BuildingClass::PlayAnim(this, v64, v66, 3, v65, 0, 0);
    *((uint32_t *)this + 47) = 1;
    else
    if ( v47 )
    v48 = ((__int64 (__thiscall *)(void*377 *, char *))*(uint32_t *)(*(uint32_t *)this + 440))(this, v126);
    if ( CreateTriggerClassIfFarEnough(8, SHIDWORD(v48), *(uint32_t *)v48) )
    VoxClass::FindAndPlay(aEvaUnitrepaire, -1);
    BuildingClass::ClearAnims((int *)this, 8);
    BuildingClass::ClearAnims((int *)this, 11);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v49 = 0;
    v50 = (uint8_t *)(*((uint32_t *)this + 328) + 4732);
    else
    v49 = 1;
    v50 = (uint8_t *)(*((uint32_t *)this + 328) + 4748);
    if ( v50 && *v50 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v50, 12, v49, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v52 = 0;
    v53 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v52 = 1;
    v53 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v53 && *v53 )
    BuildingClass::PlayAnim(this, v51, v53, 3, v52, 0, 0);
    *((uint32_t *)this + 47) = 1;
    Member = Team::GetMember(this, 0);
    if ( Member )
    v55 = (*(uint8_t *)(Member + 20) & 4) != 0 ? (uint32_t *)Member : 0;
    else
    v55 = 0;
    if ( v55[134] && !(unsigned __int8)House::IsCurrentPlayer((void*375 *)v55[135]) )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v55 + 488))(v55, 2, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v55 + 1152))(v55, v55[134], 1);
    TechnoClass::SetFocus(v55, 0);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    v55[320] = 0;
    return 1;
    v120 = g_TerrainTypeTable;
    v125 = *(uint32_t *)this;
    v56 = Team::GetMember(this, 0);
    v57 = (uint32_t **)(*(int (__thiscall **)(void*377 *, int *, int, int))(v125 + 1236))(
    this,
    &v127,
    v56,
    v120);
    v58 = *((uint32_t *)this + 134);
    v59 = *v57;
    v124 = v59;
    if ( v58 )
    v59 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v58 + 72))(v58, &v129);
    LOWORD(v125) = *v59 / 256;
    HIWORD(v125) = v59[1] / 256;
    LOWORD(v59) = v125;
    v124 = (uint32_t *)v125;
    if ( __PAIR32__(HIWORD(v124), (unsigned __int16)v59) != g_TerrainTypeTable )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v55 + 488))(v55, 2, 0);
    v60 = *v55;
    v61 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v124);
    (*(void (__thiscall **)(uint32_t *, void *, int))(v60 + 1152))(v55, v61, 1);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    v55[320] = 0;
    return 1;
    return 1;
    else
    BuildingClass::ClearAnims((int *)this, 8);
    BuildingClass::ClearAnims((int *)this, 11);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v35 = 0;
    v36 = (uint8_t *)(*((uint32_t *)this + 328) + 4732);
    else
    v35 = 1;
    v36 = (uint8_t *)(*((uint32_t *)this + 328) + 4748);
    if ( v36 && *v36 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v36, 12, v35, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v38 = 0;
    v39 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v38 = 1;
    v39 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v39 && *v39 )
    BuildingClass::PlayAnim(this, v37, v39, 3, v38, 0, 0);
    *((uint32_t *)this + 47) = 1;
    return 1;
    else
    v46 = Team::AllMembersValid((int *)this) == 0;
    v67 = *((uint32_t *)this + 351);
    if ( v46 )
    if ( v67 || *((uint32_t *)this + 354) )
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v69 = 0;
    v70 = (uint8_t *)(*((uint32_t *)this + 328) + 4732);
    else
    v69 = 1;
    v70 = (uint8_t *)(*((uint32_t *)this + 328) + 4748);
    if ( v70 && *v70 )
    BuildingClass::PlayAnim(this, v68, v70, 12, v69, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v71 = 0;
    v72 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v71 = 1;
    v72 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v72 && *v72 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v72, 3, v71, 0, 0);
    BuildingClass::ClearAnims((int *)this, 8);
    BuildingClass::ClearAnims((int *)this, 11);
    if ( !*((uint32_t *)this + 355) )
    v73 = *(void (__thiscall ***)(void*377 *, int, int))this;
    *((uint8_t *)this + 1757) = 1;
    v73[122](this, 5, 1);
    return 1;
    if ( v67 )
    return 1;
    v74 = Team::GetMember(this, 0);
    v75 = *(int (__thiscall ***)(void*377 *, int))this;
    v76 = v74;
    v77 = Team::GetMember(this, 0);
    if ( v75[310](this, v77) < 200 )
    if ( !*(uint32_t *)(v76 + 1652) )
    WinAPI::Wrapper(-2147467261);
    v46 = (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(v76 + 1652) + 96))(*(uint32_t *)(v76 + 1652)) == 0;
    v78 = *(uint32_t *)(v76 + 1652);
    if ( !v46 )
    if ( !v78 )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(v76 + 1652) + 16))(*(uint32_t *)(v76 + 1652)) )
    if ( !*(uint32_t *)(v76 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(v76 + 1652) + 92))(*(uint32_t *)(v76 + 1652));
    return 1;
    if ( !v78 )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(v76 + 1652) + 96))(*(uint32_t *)(v76 + 1652))
    && *(uint32_t *)(Team::GetMember(this, 0) + 1444) )
    v79 = (uint32_t *)Team::GetMember(this, 0);
    FootClass::ClearPathIndex(v79);
    if ( (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 19) == 1 )
    v80 = Team::GetMember(this, 0);
    v81 = BuildingClass::GetHealthRatio((int *)v80) < *(double *)&RulesClass_Instance[1].ChronoBeam;
    v122 = *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v80 + 132))(v80) + 3364);
    v82 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 28);
    v83 = v82 == 1;
    v84 = v82 == 33;
    if ( (v81 || v122) && (v83 || v84) )
    if ( !*(uint8_t *)(v80 + 976) || (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(v80 + 540)) )
    if ( *((uint8_t *)this + 1050) )
    VoxClass::FindAndPlay(aEvaRepairing, -1);
    *((uint32_t *)this + 47) = 2;
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v95 = 0;
    v96 = (uint8_t *)(*((uint32_t *)this + 328) + 4596);
    else
    v95 = 1;
    v96 = (uint8_t *)(*((uint32_t *)this + 328) + 4612);
    if ( v96 && *v96 )
    BuildingClass::PlayAnim(this, v94, v96, 10, v95, 0, 0);
    BuildingClass::ClearAnims((int *)this, 3);
    BuildingClass::ClearAnims((int *)this, 18);
    *((uint8_t *)this + 1757) = 0;
    *((uint32_t *)this + 392) = 0;
    *((uint32_t *)this + 394) = CurrentFrame;
    v97 = Parachute;
    *((uint32_t *)this + 397) = 1;
    *((uint32_t *)this + 395) = v97;
    *((uint32_t *)this + 396) = 1;
    else
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v80 + 416))(v80, 1);
    *((uint32_t *)this + 47) = 0;
    *((uint8_t *)this + 1757) = 1;
    else if ( BuildingClass::GetHealthRatio((int *)v80) == *(double *)&RulesClass_Instance[1].ChronoBeam )
    if ( !*(uint32_t *)(v80 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(v80 + 1652) + 96))(*(uint32_t *)(v80 + 1652)) )
    v85 = Team::GetMember(this, 0);
    if ( v85 )
    v86 = (*(uint8_t *)(v85 + 20) & 4) != 0 ? (uint32_t *)v85 : 0;
    else
    v86 = 0;
    if ( !v86[413] )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)v86[413] + 88))(v86[413]);
    if ( !v86[134] || (unsigned __int8)House::IsCurrentPlayer((void*375 *)v86[135]) )
    v87 = *(int (__thiscall ***)(void*377 *, int))this;
    v121 = g_TerrainTypeTable;
    v88 = Team::GetMember(this, 0);
    v89 = (uint32_t **)((int (__thiscall *)(void*377 *, int *, int, int))v87[309])(this, &v128, v88, v121);
    v90 = *((uint32_t *)this + 134);
    v91 = *v89;
    v124 = v91;
    if ( v90 )
    v91 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v90 + 72))(v90, &v129);
    LOWORD(v125) = *v91 / 256;
    HIWORD(v125) = v91[1] / 256;
    LOWORD(v91) = v125;
    v124 = (uint32_t *)v125;
    if ( __PAIR32__(HIWORD(v124), (unsigned __int16)v91) != g_TerrainTypeTable )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v86 + 488))(v86, 2, 0);
    v92 = *v86;
    v93 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v124);
    (*(void (__thiscall **)(uint32_t *, void *, int))(v92 + 1152))(v86, v93, 1);
    TechnoClass::SetFocus(v86, 0);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    v86[320] = 0;
    else
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v86 + 488))(v86, 2, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v86 + 1152))(v86, v86[134], 1);
    TechnoClass::SetFocus(v86, 0);
    v86[320] = 0;
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 3);
    else if ( !HouseClass::IonSensitivesShouldBeOffline() )
    v98 = (uint32_t *)(Team::GetMember(this, 0) + 1652);
    if ( !*v98 )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*v98 + 96))(*v98) )
    v99 = (uint32_t *)(Team::GetMember(this, 0) + 1652);
    if ( !*v99 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*v99 + 88))(*v99);
    else
    if ( !Team::AllMembersValid((int *)this) )
    BuildingClass::ClearAnims((int *)this, 8);
    BuildingClass::ClearAnims((int *)this, 11);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v101 = 0;
    v102 = (uint8_t *)(*((uint32_t *)this + 328) + 4732);
    else
    v101 = 1;
    v102 = (uint8_t *)(*((uint32_t *)this + 328) + 4748);
    if ( v102 && *v102 )
    BuildingClass::PlayAnim(this, v100, v102, 12, v101, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v104 = 0;
    v105 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v104 = 1;
    v105 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v105 && *v105 )
    BuildingClass::PlayAnim(this, v103, v105, 3, v104, 0, 0);
    (*(void (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 488))(this, 5, 1);
    return 1;
    *((uint8_t *)this + 1757) = 0;
    v125 = 100;
    v106 = Team::GetMember(this, 0);
    v107 = (uint32_t *)(v106 + 1652);
    v124 = 0;
    if ( !*(uint32_t *)(v106 + 1652) )
    goto LABEL_215;
    v108 = StreamClass::Set2(&v124, (uint32_t *)(v106 + 1652));
    if ( v108 < 0 && v108 != -2147467262 )
    WinAPI::Wrapper(v108);
    if ( !v124 )
    LABEL_215:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t *, int *))(*v124 + 12))(v124, &v129);
    if ( !memcmp(&v129, &stru_7E9A40, 0x10u) )
    v125 = 200;
    if ( !memcmp(&v129, &g_CLSID_DriveLocomotion2, 0x10u) )
    v125 = 200;
    if ( (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 628))(this, 19) == 1 )
    v109 = *(int (__thiscall ***)(void*377 *, int))this;
    v110 = Team::GetMember(this, 0);
    v111 = v109[310](this, v110);
    if ( v111 < v125 )
    v112 = v124;
    *((uint32_t *)this + 47) = 1;
    if ( v112 )
    (*(void (__stdcall **)(uint32_t *))(*v112 + 8))(v112);
    return 3;
    if ( !HouseClass::IonSensitivesShouldBeOffline() )
    if ( !*v107 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*v107 + 88))(*v107);
    if ( v124 )
    (*(void (__stdcall **)(uint32_t *))(*v124 + 8))(v124);
    goto LABEL_231;
    if ( !v2[5802] )
    return 15;
    v114 = 0;
    v123 = 0;
    if ( *((int *)this + 58) <= 0 )
    goto LABEL_247;
    do
    v115 = Team::GetMember(this, v114);
    v116 = (uint32_t *)v115;
    if ( !v115 )
    goto LABEL_244;
    if ( (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 29, v115) == 1
    && v116[27] == *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v116 + 132))(v116) + 160) )
    goto LABEL_243;
    if ( (*(int (__thiscall **)(uint32_t *))(*v116 + 388))(v116) != 7
    && (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 19, v116) == 1 )
    v123 = 1;
    if ( (*(int (__thiscall **)(uint32_t *))(*v116 + 388))(v116) )
    (*(void (__thiscall **)(uint32_t *, uint32_t, uint32_t))(*v116 + 488))(v116, 0, 0);
    goto LABEL_244;
    if ( (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 31, v116) != 1
    && (*(int (__thiscall **)(void*377 *, int, uint32_t *))(*(uint32_t *)this + 632))(this, 28, v116) != 1 )
    LABEL_243:
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v116 + 1156))(v116, 0, 1);
    (*(void (__thiscall **)(uint32_t *, int))(*v116 + 496))(v116, 5);
    (*(void (__thiscall **)(uint32_t *))(*v116 + 820))(v116);
    LABEL_244:
    ++v114;
    while ( v114 < *((uint32_t *)this + 58) );
    if ( v123 )
    return Math::RoundToInt(*(double *)&RulesClass_Instance[1].MaximumQueuedObjects * 900.0);
    LABEL_247:
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 3;
}

int  BuildingClass::ProcessSuperWeaponEffects(#377 *this)
{
    int v2; // ecx
    void *v3; // eax
    int v4; // ebp
    void *v5; // edi
    void *v6; // ebx
    int *v7; // eax
    void **v8; // eax
    void **v9; // edi
    void *v10; // eax
    int *v11; // ebx
    uint32_t *UIObject; // eax
    int v13; // edi
    uint32_t *v14; // ecx
    int *v15; // eax
    double v16; // st7
    int result; // eax
    void **v18; // eax
    void **v19; // eax
    void (__thiscall **vfptr0)(void*377 *, void *, uint32_t); // edi
    void *v21; // eax
    int (__thiscall **v22)(void*377 *, uint8_t *, void *); // edi
    void *v23; // eax
    void **v24; // eax
    int (__thiscall **v25)(void*377 *, uint8_t *, void *); // edi
    void *v26; // eax
    int *v27; // eax
    int v28; // ebp
    void *v29; // ebx
    _WORD *v30; // eax
    int v31; // eax
    int v32; // edx
    __int16 *v33; // eax
    double v34; // st7
    void *v35; // eax
    int v36; // eax
    char v37; // cl
    int v38; // edi
    double v39; // st7
    double v40; // st7
    double v41; // st7
    int (__thiscall **v42)(uint32_t, uint32_t, uint32_t); // edx
    int *v43; // eax
    uint32_t *v44; // eax
    int v45; // ebx
    double v46; // st7
    char IsCloseEnoughToBuilding; // al
    double v48; // st7
    char v49; // al
    double v50; // st7
    unsigned int v51; // edi
    unsigned int v52; // ebx
    double v53; // st7
    double v54; // st7
    double v55; // st7
    void **v56; // edi
    int v57; // ebp
    int v58; // eax
    char *MissionControl; // eax
    int v60; // [esp+34h] [ebp-FCh]
    int v61; // [esp+34h] [ebp-FCh]
    double v62; // [esp+3Ch] [ebp-F4h]
    double v63; // [esp+3Ch] [ebp-F4h]
    __int64 v64; // [esp+40h] [ebp-F0h]
    double v65; // [esp+40h] [ebp-F0h]
    __int16 *v66; // [esp+44h] [ebp-ECh]
    void **v67; // [esp+5Ch] [ebp-D4h] BYREF
    double v68; // [esp+60h] [ebp-D0h] BYREF
    double v69; // [esp+68h] [ebp-C8h]
    double v70; // [esp+70h] [ebp-C0h]
    double v71; // [esp+78h] [ebp-B8h] BYREF
    void **v72; // [esp+8Ch] [ebp-A4h] BYREF
    double v73; // [esp+90h] [ebp-A0h]
    int v74; // [esp+98h] [ebp-98h]
    int v75[2]; // [esp+A4h] [ebp-8Ch] BYREF
    int v76; // [esp+ACh] [ebp-84h]
    double v77; // [esp+B0h] [ebp-80h] BYREF
    double v78; // [esp+C0h] [ebp-70h] BYREF
    int v79; // [esp+CCh] [ebp-64h]
    double v80[2]; // [esp+D0h] [ebp-60h] BYREF
    __int16 v81; // [esp+E0h] [ebp-50h] BYREF
    uint32_t v82[3]; // [esp+E4h] [ebp-4Ch] BYREF
    int v83; // [esp+F0h] [ebp-40h] BYREF
    uint8_t v84[4]; // [esp+F4h] [ebp-3Ch] BYREF
    uint8_t v85[4]; // [esp+F8h] [ebp-38h] BYREF
    int v86; // [esp+FCh] [ebp-34h] BYREF
    uint8_t v87[12]; // [esp+100h] [ebp-30h] BYREF
    uint8_t v88[12]; // [esp+10Ch] [ebp-24h] BYREF
    uint8_t v89[12]; // [esp+118h] [ebp-18h] BYREF
    uint8_t v90[12]; // [esp+124h] [ebp-Ch] BYREF
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5818) )
    switch ( *((uint32_t *)this + 47) )
    case 0:
    *((uint8_t *)this + 1757) = 0;
    BuildingClass::StartProduction((int *)this, 2);
    v2 = *((uint32_t *)this + 135);
    *((uint32_t *)this + 47) = 1;
    v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(v2 + 22404));
    v4 = *((uint32_t *)this + 135);
    v5 = v3;
    v6 = (void *)*((uint32_t *)g_AnimTypeCount + AnimTypeClass::FindIndex(aPsiwarn));
    v7 = (int *)(*(int (__thiscall **)(void *, uint32_t *))(*(uint32_t *)v5 + 72))(v5, v82);
    v75[0] = *v7;
    v75[1] = v7[1];
    v76 = v7[2];
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    v9 = AnimClass::ctor(v8, v6, v75, 0, 1, (void *)0x600, 0, 0);
    else
    v9 = 0;
    BuildingClass::SetField95(v9, 0);
    Function::424CA0(v9, v4);
    *((uint8_t *)v9 + 413) = 1;
    *((uint32_t *)this + 339) = v9;
    goto LABEL_7;
    case 1:
    LABEL_7:
    if ( *((uint8_t *)this + 1757) )
    BuildingClass::StartProduction((int *)this, 4);
    *((uint32_t *)this + 47) = 2;
    goto LABEL_9;
    case 2:
    LABEL_9:
    (*(void (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v71);
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*((uint32_t *)this + 135) + 22404));
    v11 = *(int **)(*((uint32_t *)g_SuperWeaponPool + *((uint32_t *)this + 382)) + 156);
    UIObject = CreateUIObjectCOM(v11[40], (int)v10, (int)this, v11[41], v11[43], 255, 1);
    v13 = (int)UIObject;
    if ( !UIObject )
    goto LABEL_18;
    Function::46B260(UIObject, (int)v11);
    v14 = (uint32_t *)*((uint32_t *)this + 339);
    if ( v14 )
    BuildingClass::SetField95(v14, v13);
    *((uint32_t *)this + 339) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)v13 + 212))(v13);
    v15 = (int *)(*(int (__thiscall **)(void*377 *, double *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    &v77,
    0,
    0,
    0,
    0);
    v75[0] = *v15;
    v75[1] = v15[1];
    v76 = v15[2];
    v73 = Math::SinCos(1.570748388432313);
    v78 = Math::ArcTan2(1.570748388432313) * v73 * 10.0;
    v73 = Math::ArcTan2(1.570748388432313);
    v16 = Math::ArcTan2(1.570748388432313);
    v80[1] = v78;
    v69 = v78;
    v80[0] = v16 * v73 * 10.0;
    v68 = v80[0];
    v70 = Math::SinCos(1.570748388432313) * 10.0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int *, double *))(*(uint32_t *)v13 + 496))(v13, v75, &v68) )
    v18 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v18 )
    v19 = AnimClass::ctor(v18, (void *)RulesClass_Instance->InfantryHeadPop, v75, 0, 1, (void *)0x600, 0, 0);
    else
    v19 = 0;
    v19[64] = (void *)-100;
    *((uint32_t *)this + 47) = 3;
    LABEL_18:
    result = 1;
    else
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v13 + 32))(v13, 1);
    *((uint32_t *)this + 47) = 3;
    result = 1;
    break;
    case 3:
    BuildingClass::StartProduction((int *)this, 5);
    *((uint32_t *)this + 47) = 4;
    return 6;
    case 4:
    LABEL_54:
    BuildingClass::StartProduction((int *)this, 1);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 60;
    default:
    goto LABEL_20;
    else
    LABEL_20:
    if ( *((uint32_t *)this + 382) != -1 )
    vfptr0 = *(void (__thiscall ***)(void*377 *, void *, uint32_t))this;
    v64 = (unsigned int)(*((uint32_t *)this + 135) + 22404);
    v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v64);
    vfptr0[243](this, v21, HIDWORD(v64));
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5827) )
    switch ( *((uint32_t *)this + 47) )
    case 0:
    v22 = *(int (__thiscall ***)(void*377 *, uint8_t *, void *))this;
    v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*((uint32_t *)this + 135) + 22400));
    v24 = *(void ***)v22[314](this, v85, v23);
    v25 = *(int (__thiscall ***)(void*377 *, uint8_t *, void *))this;
    v66 = (__int16 *)(*((uint32_t *)this + 135) + 22400);
    v67 = v24;
    v26 = CellCoord::To_CellObj(&MapClass_Instance, v66);
    v72 = *(void ***)v25[178](this, v84, v26);
    if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v86) - (_WORD)v67) )
    FacingClass::Update((char *)this + 904, &v67);
    return 1;
    else
    if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)this + 440, &v83) - (_WORD)v72) )
    FacingClass::Update((char *)this + 880, &v72);
    else
    *((uint32_t *)this + 47) = 1;
    return 1;
    case 1:
    v67 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v67 )
    v72 = (void **)((char *)g_AnimTypeCount + 4 * GlobalArray::FindString(aPulsball));
    v27 = (int *)(*(int (__thiscall **)(void*377 *, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    v90,
    0,
    0,
    0,
    0);
    AnimClass::ctor(v67, *v72, v27, 0, 1, (void *)0x600, 0, 0);
    *((uint32_t *)this + 47) = 2;
    return 32;
    case 2:
    v28 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
    v29 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*((uint32_t *)this + 135) + 22400));
    LODWORD(v71) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*((uint32_t *)this + 135) + 22400));
    if ( ArmageddonMode || *(uint32_t *)(*((uint32_t *)this + 135) + 22400) == g_TerrainTypeTable )
    BuildingClass::StartProduction((int *)this, 1);
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    result = 60;
    else
    v30 = (_WORD *)(*(int (__thiscall **)(void*377 *, double *, void *))(*(uint32_t *)this + 712))(this, &v78, v29);
    FacingClass::Update((char *)this + 880, v30);
    v31 = (*(int (__thiscall **)(void*377 *, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    v88,
    0,
    0,
    0,
    0);
    v73 = *(double *)v31;
    v74 = *(uint32_t *)(v31 + 8);
    v32 = (*(__int16 *)(*((uint32_t *)this + 135) + 22400) << 8) + 128;
    v82[1] = (*(__int16 *)(*((uint32_t *)this + 135) + 22402) << 8) + 128;
    v82[0] = v32;
    v82[2] = 0;
    Cell::GetGroundHeight(v82);
    v33 = (__int16 *)(*((uint32_t *)this + 135) + 22400);
    LODWORD(v77) = (*v33 << 8) + 128;
    HIDWORD(v77) = (v33[1] << 8) + 128;
    v34 = Math::CalcAngle(
    (double)SHIDWORD(v73) - (double)SHIDWORD(v77),
    (double)SLODWORD(v77) - (double)SLODWORD(v73));
    LOWORD(v77) = Math::RoundToInt((v34 - 1.570796326794897) * -10430.06004058427);
    v65 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v35 = (void *)ObjectClass::DistanceTo(this, (int)v29);
    v36 = TechnoClass::ComputeScanRange(v35, v65);
    v37 = *(uint8_t *)(v28 + 303);
    v38 = v36;
    v79 = v36;
    v72 = (void **)CreateUIObjectCOM(
    *(uint32_t *)(v28 + 160),
    (int)v29,
    (int)this,
    *(uint32_t *)(v28 + 164),
    *(uint32_t *)(v28 + 172),
    3 * v36 / 4,
    v37);
    v70 = 0.0;
    v73 = Math::Sqrt(10000.0);
    v77 = (double)(SLOWORD(v77) - 0x3FFF) * -0.00009587672516830327;
    v68 = Math::ArcTan2(v77) * v73;
    v39 = -(Math::SinCos(v77) * v73);
    v69 = v39;
    if ( v68 == 0.0 && v39 == 0.0 && v70 == 0.0 )
    v68 = 100.0;
    v73 = (double)v79;
    v40 = Math::Sqrt(v68 * v68 + v70 * v70 + v39 * v39);
    v41 = v73 / v40;
    v42 = *(int (__thiscall ***)(uint32_t, uint32_t, uint32_t))this;
    v68 = v41 * v68;
    v69 = v69 * v41;
    v70 = v70 * v41;
    v43 = (int *)((int (__thiscall **)(void*377 *, uint8_t *, uint32_t))v42)[192](this, v87, 0);
    v75[0] = *v43;
    v75[1] = v43[1];
    v76 = v43[2];
    v44 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)LODWORD(v71) + 72))(LODWORD(v71), v89);
    v45 = v44[2] - v76;
    LODWORD(v71) = (*v44 - v75[0]) * (*v44 - v75[0]) + (v44[1] - v75[1]) * (v44[1] - v75[1]);
    v71 = (double)SLODWORD(v71);
    v62 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v46 = Math::Sqrt(v71);
    v60 = Math::RoundToInt(v46);
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, 0);
    if ( !ComputeMathFacingAngle(IsCloseEnoughToBuilding, v38, v60, v45, v62, &v67) )
    v63 = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    v48 = Math::Sqrt(v71);
    v61 = Math::RoundToInt(v48);
    v49 = TechnoClass::IsCloseEnoughToBuilding(this, 0);
    if ( !ComputeMathFacingAngle(v49, 10 * v38 / 8, v61, v45, v63, &v67) )
    LOWORD(v71) = -1536;
    v67 = (void **)LODWORD(v71);
    v73 = Math::Sqrt(v69 * v69 + v68 * v68);
    v50 = Math::CalcAngle(v70, v73);
    LODWORD(v71) = (__int16)Math::RoundToInt((v50 - 1.570796326794897) * -10430.06004058427) - 0x3FFF;
    v71 = (double)SLODWORD(v71) * -0.00009587672516830327;
    v73 = Math::Sqrt(v69 * v69 + v70 * v70 + v68 * v68);
    if ( v71 != 0.0 )
    v51 = HIDWORD(v71);
    v52 = LODWORD(v71);
    v68 = v68 / Math::ArcTan2(v71);
    v69 = v69 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v51, v52)));
    LODWORD(v71) = (__int16)v67 - 0x3FFF;
    v53 = Math::ArcTan2((double)SLODWORD(v71) * -0.00009587672516830327);
    v68 = v53 * v68;
    LODWORD(v71) = (__int16)v67 - 0x3FFF;
    v54 = Math::ArcTan2((double)SLODWORD(v71) * -0.00009587672516830327);
    v69 = v54 * v69;
    LODWORD(v71) = (__int16)v67 - 0x3FFF;
    v55 = Math::SinCos((double)SLODWORD(v71) * -0.00009587672516830327);
    v56 = v72;
    v70 = v55 * v73;
    if ( !(*((unsigned __int8 (__thiscall **)(void **, int *, double *))*v72 + 124))(v72, v75, &v68) )
    (*((void (__stdcall **)(void **))*v56 + 2))(v56);
    goto LABEL_54;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this)
    && *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3234) )
    TechnoClass::Fire((int *)this + 246);
    TechnoClass::Fire((int *)this + 254);
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    v57 = *(uint32_t *)(*(uint32_t *)(v28 + 192)
    + 4 * ((unsigned int)Random::State(Randomizer_Global) % *(uint32_t *)(v28 + 204)));
    v58 = (*(int (__thiscall **)(void*377 *, double *, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    v80,
    0,
    0,
    0,
    0);
    StartAudioControllerAt(v57, v58, 0);
    *((uint32_t *)this + 47) = 3;
    result = 1;
    break;
    case 3:
    v81 = 0x4000;
    FacingClass::Update((char *)this + 880, &v81);
    goto LABEL_54;
    default:
    goto LABEL_56;
    else
    LABEL_56:
    MissionControl = MissionClass::GetMissionControl(this);
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return result;
}

int  BuildingClass::CaptureBuilding(#377 *this)
{
    int result; // eax
    void*375 *v3; // [esp+Ch] [ebp+4h]
    if ( TechnoClass::SetHouseFlag(this, v3) )
    if ( !IKnowWhatImDoing )
    *(uint32_t *)(*((uint32_t *)this + 135) + 620) = *(uint32_t *)(*((uint32_t *)this + 328) + 3576);
    *(uint8_t *)(*((uint32_t *)this + 135) + 582) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    if ( !Team::AllMembersValid((int *)this)
    && (unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 18
    && *((uint32_t *)this + 45) != 18
    || !Team::AllMembersValid((int *)this)
    && (result = House::IsCurrentPlayer(*((void*375 **)this + 135)), !(uint8_t)result)
    && v3 == *((void*375 **)this + 135)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this), result != 18) )
    result = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1244))(this, 0);
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::StartOrResumeProduction(#377 *this)
{
    int result; // eax
    char v3; // [esp+8h] [ebp+4h]
    if ( !v3 || IKnowWhatImDoing || ArmageddonMode )
    BuildingClass::StartProduction((int *)this, 1);
    result = (*(int (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    LOBYTE(result) = 0;
    else
    BuildingClass::StartProduction((int *)this, 0);
    result = (*(int (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 18, 0);
    LOBYTE(result) = 0;
    return result;
}

// 0x0044D700
int  BuildingClass::GetAmmoCountScaled(#377 *this)
{
    int v1; // esi
    int v3; // [esp+4h] [ebp-Ch]
    double v4; // [esp+8h] [ebp-8h]
    v1 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v1 + 980) != 2 )
    return TechnoClass::GetAmmoCount(this);
    if ( !*(uint8_t *)(v1 + 5820) )
    return 0;
    v4 = BuildingClass::checkRepairEligibility(*((uint32_t *)this + 135));
    v3 = (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 116))(v1);
    return Math::RoundToInt((double)v3 * v4);
}

// 0x0044D760
int  BuildingClass::PushScriptAction(#377 *this)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // [esp+8h] [ebp-10h] BYREF
    uint8_t v5[12]; // [esp+Ch] [ebp-Ch] BYREF
    int v6; // [esp+1Ch] [ebp+4h]
    int v7; // [esp+1Ch] [ebp+4h]
    result = v6;
    if ( v6 )
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *, uint32_t))(*(uint32_t *)this + 76))(this, v5, 0);
    LOWORD(v7) = *v3 / 256;
    HIWORD(v7) = v3[1] / 256;
    v4 = v7;
    return ScriptActionQueue::PushNext(&v4);
    return result;
}

// 0x0044D7D0
int  BuildingClass::GetTargetFacing(#377 *this)
{
    unsigned int v2; // ecx
    __int16 v4; // dx
    unsigned int v5; // ecx
    int v6; // edx
    int v7; // [esp+4h] [ebp-4h] BYREF
    uint32_t *v8; // [esp+Ch] [ebp+4h]
    if ( *((uint32_t *)this + 173) )
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this)
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5829) )
    v6 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int *, uint32_t))(*(uint32_t *)this + 1256))(
    this,
    &v7,
    *((uint32_t *)this + 173));
    *v8 = v6;
    return (int)v8;
    else
    v5 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7);
    *(_WORD *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11;
    return (int)v8;
    else
    v2 = *ProgressTimer::GetValue((_WORD *)this + 452, &v7);
    LOBYTE(v4) = 0;
    HIBYTE(v4) = ((v2 >> 7) + 1) >> 1;
    *(_WORD *)v8 = v4;
    return (int)v8;
}

int  BuildingClass::ClearFactoryBib(#377 *this)
{
    int v2; // eax
    int v3; // esi
    __int16 v4; // dx
    int v5; // eax
    unsigned int v6; // edi
    int v7; // edi
    _WORD *v8; // eax
    int v9; // edx
    __int16 v10; // cx
    _WORD *v11; // edx
    __int16 v12; // bx
    __int16 v13; // bx
    __int16 v14; // cx
    int v15; // ebx
    void *v16; // eax
    int v17; // eax
    int v18; // ebx
    void *v19; // eax
    uint32_t *v20; // eax
    int v21; // edx
    int *v22; // eax
    int v23; // edx
    int v24; // eax
    int v25; // eax
    void *v26; // eax
    uint32_t *v27; // eax
    char v28; // al
    int v29; // eax
    int v30; // eax
    int v31; // edi
    void *v32; // eax
    char *MissionControl; // eax
    int v34; // esi
    char v36; // cl
    int (__thiscall **vfptr0)(void*377 *, uint32_t *); // edx
    _WORD *v38; // eax
    __int16 v39; // cx
    int Member; // eax
    int v41; // esi
    char v42; // cl
    int v43; // ecx
    uint8_t *v44; // eax
    int v45; // eax
    int v46; // ebx
    int v47; // eax
    uint32_t *v48; // ebx
    int v49; // eax
    _WORD *v50; // eax
    __int16 v51; // dx
    int v52; // edi
    void *v53; // eax
    uint32_t *v54; // edi
    int v55; // eax
    int v56; // eax
    int v57; // eax
    int v58; // eax
    int v59; // eax
    int (__stdcall ***Checked)(uint32_t, void *, int *); // eax
    int v61; // esi
    int v62; // edi
    int v63; // ecx
    int v64; // esi
    int v65; // esi
    LPVOID v66; // eax
    int v67; // edx
    unsigned int v68; // eax
    unsigned __int8 (__thiscall **v69)(void*377 *); // edx
    void (__thiscall **v70)(void*377 *); // edx
    int v71; // ecx
    void (__thiscall **v72)(void*377 *); // eax
    int LandHeight; // [esp+34h] [ebp-5Ch]
    int v74; // [esp+34h] [ebp-5Ch]
    LPVOID *p_ppv; // [esp+3Ch] [ebp-54h]
    int v76; // [esp+40h] [ebp-50h]
    char v77; // [esp+52h] [ebp-3Eh]
    bool v78; // [esp+53h] [ebp-3Dh]
    int v79; // [esp+54h] [ebp-3Ch] BYREF
    int v80; // [esp+58h] [ebp-38h] BYREF
    LPVOID ppv; // [esp+5Ch] [ebp-34h] BYREF
    uint32_t *ppv_4; // [esp+60h] [ebp-30h]
    unsigned int v83; // [esp+64h] [ebp-2Ch] BYREF
    unsigned int i; // [esp+68h] [ebp-28h] BYREF
    int v85; // [esp+6Ch] [ebp-24h] BYREF
    int v86; // [esp+70h] [ebp-20h] BYREF
    int v87; // [esp+74h] [ebp-1Ch] BYREF
    int v88; // [esp+78h] [ebp-18h]
    int v89; // [esp+7Ch] [ebp-14h]
    int v90; // [esp+80h] [ebp-10h] BYREF
    char v91[12]; // [esp+84h] [ebp-Ch] BYREF
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    BuildingClass::UnloadUnits((int *)this, 0, 0);
    v2 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v2 + 5806) && !*(uint8_t *)(v2 + 5807) || *((int *)this + 69) <= 0 )
    if ( *(uint8_t *)(v2 + 5821) )
    v36 = *(uint8_t *)(v2 + 3278);
    v87 = 0;
    v88 = 0;
    v89 = 0;
    if ( !v36 )
    vfptr0 = *(int (__thiscall ***)(void*377 *, uint32_t *))this;
    i = *(uint32_t *)(*(uint32_t *)(v2 + 3796) + 40);
    v38 = (_WORD *)vfptr0[110](this, &v86);
    v39 = HIWORD(i) + v38[1];
    LOWORD(v83) = *v38 + i;
    HIWORD(v83) = v39;
    v87 = ((__int16)(v83 - 1) << 8) + 128;
    v88 = (v39 << 8) + 128;
    v89 = 0;
    switch ( *((uint32_t *)this + 47) )
    case 0:
    Member = Team::GetMember(this, 0);
    v41 = Member;
    if ( Member )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)Member + 488))(Member, 5, 0);
    (*(void (__thiscall **)(int))(*(uint32_t *)v41 + 492))(v41);
    RateScaler::Init((uint8_t *)this + 848, *(double *)(*((uint32_t *)this + 328) + 968));
    v42 = *(uint8_t *)(*((uint32_t *)this + 328) + 3278);
    *((uint8_t *)this + 128) = 1;
    *((uint32_t *)this + 47) = v42 != 0 ? 4 : 1;
    BuildingClass::ClearAnims((int *)this, 18);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v43 = 0;
    v44 = (uint8_t *)(*((uint32_t *)this + 328) + 4460);
    else
    v43 = 1;
    v44 = (uint8_t *)(*((uint32_t *)this + 328) + 4476);
    if ( v44 && *v44 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v44, 8, v43, 0, 0);
    break;
    case 1:
    if ( !AnimClass::resetAnimation(this) )
    Debug::Log();
    *((uint32_t *)this + 47) = 2;
    break;
    case 2:
    if ( BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    v45 = Team::GetMember(this, 0);
    ppv_4 = (uint32_t *)v45;
    if ( !v45 )
    goto LABEL_112;
    v46 = v45;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v45 + 488))(v45, 2, 0);
    v47 = *(uint32_t *)(v46 + 1652);
    v48 = (uint32_t *)(v46 + 1652);
    v83 = 0;
    if ( !v47 )
    goto LABEL_57;
    v49 = StreamClass::Set2(&v83, v48);
    if ( v49 < 0 && v49 != -2147467262 )
    WinAPI::Wrapper(v49);
    if ( !v83 )
    LABEL_57:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(unsigned int, int *))(*(uint32_t *)v83 + 12))(v83, &v90);
    if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) )
    v55 = *v48;
    v79 = 0;
    if ( v55 )
    v56 = StreamClass::Set(&v79, v48);
    if ( v56 < 0 && v56 != -2147467262 )
    WinAPI::Wrapper(v56);
    if ( v79 && (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v79 + 28))(v79) )
    if ( *v48 )
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*v48 + 8))(*v48);
    v57 = v79;
    *v48 = 0;
    if ( !v57 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t *))(*(uint32_t *)v57 + 16))(v57, v48);
    ppv = 0;
    v58 = CreateInstanceCOM(&ppv, (IID *)&stru_7E9A30, 0, 7u);
    if ( v58 < 0 && v58 != -2147467262 )
    WinAPI::Wrapper(v58);
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    v54 = ppv_4;
    (*(void (__stdcall **)(LPVOID, uint32_t *))(*(uint32_t *)ppv + 12))(ppv, ppv_4);
    v59 = 0;
    v80 = 0;
    if ( ppv )
    Checked = (int (__stdcall ***)(uint32_t, void *, int *))Stream::GetChecked(&ppv);
    v61 = (**Checked)(Checked, &unk_819088, &v85);
    if ( v61 >= 0 )
    v62 = v85;
    Release2COM(&v80);
    v59 = v62;
    v54 = ppv_4;
    v80 = v59;
    else
    Release2COM(&v80);
    v59 = 0;
    v80 = 0;
    if ( v61 < 0 && v61 != -2147467262 )
    WinAPI::Wrapper(v61);
    v63 = v79;
    if ( v79 != v59 )
    v64 = v79;
    v79 = v59;
    CellClass::SetField2C(&v79);
    if ( v64 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v64 + 8))(v64);
    v63 = v79;
    v59 = v80;
    if ( v59 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v59 + 8))(v59);
    v63 = v79;
    if ( v63 )
    (*(void (__stdcall **)(int, uint32_t))(*(uint32_t *)v63 + 12))(v63, *v48);
    v65 = *v48;
    v66 = ppv;
    if ( (LPVOID)*v48 != ppv )
    *v48 = ppv;
    if ( v66 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v66 + 4))(v66);
    if ( v65 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v65 + 8))(v65);
    if ( !*v48 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int, int))(*(uint32_t *)*v48 + 112))(*v48, 66, v87, v88, v89);
    else
    v67 = *v54;
    v85 = v54[27];
    (*(void (__thiscall **)(uint32_t *, int *, uint32_t, int, uint32_t, int, uint32_t, uint32_t))(v67 + 364))(
    v54,
    &v85,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    0,
    0);
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    if ( v79 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v79 + 8))(v79);
    else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) )
    if ( !*v48 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int, int))(*(uint32_t *)*v48 + 112))(*v48, 66, v87, v88, v89);
    v54 = ppv_4;
    else
    v50 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v86);
    v51 = v50[1] + 1;
    LOWORD(ppv) = *v50 + 4;
    HIWORD(ppv) = v51;
    i = (unsigned int)ppv;
    v52 = *ppv_4;
    v53 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&i);
    (*(void (__thiscall **)(uint32_t *, void *, int))(v52 + 1152))(ppv_4, v53, 1);
    v54 = ppv_4;
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v54 + 1348))(v54, 0, 1071644672);
    v68 = v83;
    *((uint32_t *)this + 47) = 3;
    if ( v68 )
    (*(void (__stdcall **)(unsigned int))(*(uint32_t *)v68 + 8))(v68);
    break;
    case 3:
    if ( !*((uint8_t *)this + 1048) )
    LABEL_112:
    Timer::StartDouble((uint8_t *)this + 848, *(double *)(*((uint32_t *)this + 328) + 968));
    *((uint32_t *)this + 47) = 4;
    break;
    case 4:
    if ( Flag::CheckNone((uint8_t *)this + 848) || *(uint8_t *)(*((uint32_t *)this + 328) + 3278) )
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 1156))(this, 0, 1);
    *((uint8_t *)this + 128) = 1;
    break;
    default:
    goto LABEL_35;
    goto LABEL_35;
    if ( !*(uint8_t *)(v2 + 3281) || !*(uint8_t *)(v2 + 3283) )
    goto LABEL_125;
    if ( *((uint8_t *)this + 616) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1048))(this);
    v71 = *((uint32_t *)this + 328);
    v72 = *(void (__thiscall ***)(void*377 *))this;
    *((uint8_t *)this + 616) = 0;
    *((uint8_t *)this + 1641) = 0;
    *((uint32_t *)this + 155) = *(char *)(v71 + 3282);
    v72[261](this);
    else
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1048))(this);
    v69 = *(unsigned __int8 (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 155) = *(char *)(*((uint32_t *)this + 328) + 3283);
    if ( !v69[212](this) )
    v70 = *(void (__thiscall ***)(void*377 *))this;
    *((uint32_t *)this + 155) = *(char *)(*((uint32_t *)this + 328) + 3282);
    v70[261](this);
    LABEL_125:
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 1;
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1044))(this);
    *((uint8_t *)this + 616) = 1;
    *((uint8_t *)this + 1641) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    goto LABEL_125;
    v3 = LinkedList::Pop((uint32_t *)this + 69);
    if ( !v3 )
    goto LABEL_35;
    v4 = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, &v85);
    LOBYTE(v5) = 0;
    v77 = 1;
    LOWORD(v83) = v4 + 0x7FFF;
    ppv_4 = 0;
    v6 = ((v83 >> 12) + 1) >> 1;
    for ( i = v6; ; LOBYTE(v6) = i )
    v7 = ((uint8_t)v5 + (uint8_t)v6) & 7;
    v8 = (_WORD *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v86);
    v9 = v7 & 7;
    v10 = LOWORD(Direction_X_Offsets[v9]) + *v8;
    v11 = (_WORD *)(4 * v9 + 9041544);
    v12 = v11[1];
    LOWORD(v83) = v10;
    v13 = v8[1] + v12;
    LOWORD(ppv) = *v11 + v10;
    v14 = v13 + v11[1];
    HIWORD(v83) = v13;
    v15 = *(uint32_t *)v3;
    HIWORD(ppv) = v14;
    v79 = v83;
    v80 = (int)ppv;
    LandHeight = ObjectClass::GetLandHeight(this);
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    v17 = (*(int (__thiscall **)(int, void *, int, int, uint32_t, int))(v15 + 428))(v3, v16, v7, LandHeight, 0, 1);
    v18 = *(uint32_t *)v3;
    v78 = v17 == 0;
    v74 = ObjectClass::GetLandHeight(this);
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v79);
    if ( !(*(int (__thiscall **)(int, void *, int, int, uint32_t, int))(v18 + 428))(v3, v19, v7, v74, 0, 1) )
    break;
    if ( !v77 )
    goto LABEL_13;
    LABEL_17:
    v20 = ppv_4;
    if ( ppv_4 == (uint32_t *)7 )
    v20 = 0;
    v77 = 0;
    LABEL_14:
    v5 = (int)v20 + 1;
    ppv_4 = (uint32_t *)v5;
    if ( v5 >= 8 )
    goto LABEL_34;
    if ( !v78 && v77 )
    goto LABEL_17;
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v79) + 80) & 0x100) != 0 )
    LABEL_13:
    v20 = ppv_4;
    goto LABEL_14;
    ++IKnowWhatImDoing;
    v89 = 0;
    v21 = *(uint32_t *)v3;
    v88 = (SHIWORD(v79) << 8) + 128;
    v87 = ((__int16)v79 << 8) + 128;
    if ( (*(int (__thiscall **)(int))(v21 + 44))(v3) == 15 )
    v22 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v87, 0);
    v87 = *v22;
    v88 = v22[1];
    v23 = v22[2];
    else
    v24 = *(uint32_t *)v3;
    v83 = 0;
    v25 = (*(int (__thiscall **)(int, int))(v24 + 132))(v3, -1);
    v80 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v80,
    &v87,
    (__int16 *)&v80,
    *(uint32_t *)(v25 + 1660),
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (char)&v83,
    0,
    0,
    v76);
    v26 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    v27 = (uint32_t *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v26 + 72))(v26, v91);
    i = *(uint32_t *)CellStruct::Set(&v86, *v27 / 256, v27[1] / 256);
    v23 = 0;
    v87 = ((__int16)i << 8) + 128;
    v88 = (SHIWORD(i) << 8) + 128;
    LOWORD(i) = (_WORD)v7 << 13;
    v89 = v23;
    v28 = (*(int (__thiscall **)(int, int *, uint32_t))(*(uint32_t *)v3 + 216))(
    v3,
    &v87,
    (unsigned __int8)(((i >> 7) + 1) >> 1));
    --IKnowWhatImDoing;
    if ( !v28 )
    LABEL_34:
    CellClass::AddObject((uint32_t *)this + 69, (uint32_t *)v3);
    (*(void (__thiscall **)(int))(*(uint32_t *)v3 + 284))(v3);
    goto LABEL_35;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5807) )
    v29 = (*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v90);
    StartAudioControllerAt(RulesClass_Instance->DamageFireTypes[3], v29, 0);
    v30 = *(uint32_t *)(v3 + 540);
    if ( *(uint8_t *)(v30 + 492) )
    *(uint8_t *)(v3 + 1679) = 0;
    if ( !*(uint8_t *)(v3 + 1080) )
    ++*(uint32_t *)(v30 + 756);
    *(uint8_t *)(v3 + 1080) = 1;
    *(uint8_t *)(v3 + 1081) = 0;
    (*(void (__thiscall **)(int, int, uint32_t, int))(*(uint32_t *)v3 + 488))(v3, 2, 0, v76);
    v31 = *(uint32_t *)v3;
    if ( BYTE2(v79) )
    p_ppv = &ppv;
    else
    p_ppv = (LPVOID *)&v80;
    v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)p_ppv);
    (*(void (__thiscall **)(int, void *))(v31 + 1152))(v3, v32);
    if ( *(int *)(*((uint32_t *)this + 328) + 3816) > 0 )
    *(uint8_t *)(*((uint32_t *)this + 135) + 22392) = 1;
    LABEL_35:
    MissionControl = MissionClass::GetMissionControl(this);
    v34 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v34 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
}

int  BuildingClass::ProcessPowerPlantEffect(#377 *this)
{
    int v2; // eax
    int v3; // eax
    wchar_t *v4; // ecx
    char *MissionControl; // eax
    int v6; // esi
    int result; // eax
    int *v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // edx
    uint32_t *v12; // esi
    int *v13; // esi
    int v14; // edi
    int v15; // edx
    int v16; // eax
    int v17; // eax
    double Progress; // st7
    int v19; // eax
    uint32_t v20[3]; // [esp+10h] [ebp-2Ch] BYREF
    int v21; // [esp+1Ch] [ebp-20h] BYREF
    int v22; // [esp+20h] [ebp-1Ch]
    int v23; // [esp+24h] [ebp-18h]
    int v24; // [esp+2Ch] [ebp-10h] BYREF
    int v25; // [esp+30h] [ebp-Ch]
    v2 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v2 + 5815) )
    switch ( *((uint32_t *)this + 47) )
    case 0:
    if ( BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    v3 = Math::RoundToInt(*(double *)(*((uint32_t *)this + 328) + 3624) * 900.0);
    v4 = CurrentFrame;
    *((uint32_t *)this + 47) = 2;
    *((uint32_t *)this + 385) = v4;
    *((uint32_t *)this + 386) = v22;
    *((uint32_t *)this + 387) = v3;
    *((uint32_t *)this + 388) = v3;
    goto LABEL_5;
    if ( !Window::IsVisible((uint8_t *)this + 848) )
    if ( BuildingClass::CheckFlag24((uint8_t *)this + 848) )
    BuildingClass::UpdateTimerWithElapsed((char *)this + 848);
    else
    RateScaler::Init((uint8_t *)this + 848, *(double *)(*((uint32_t *)this + 328) + 968));
    v20[0] = *((uint32_t *)this + 39);
    v20[1] = *((uint32_t *)this + 40);
    v20[2] = *((uint32_t *)this + 41);
    StartAudioControllerAt(RulesClass_Instance->V3Rocket[7], (int)v20, 0);
    v8 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 300))(this, &v24);
    Cell::CreateCrater(*v8, v8[1], v8[2], v8[3], 0);
    v9 = *((uint32_t *)this + 328);
    *((uint32_t *)this + 47) = 1;
    v10 = Math::RoundToInt(*(double *)(v9 + 3624) * 900.0);
    v11 = v25;
    v12 = (uint32_t *)((char *)this + 1540);
    *v12 = CurrentFrame;
    v12[1] = v11;
    v12[2] = v10;
    v12[3] = v10;
    return 0;
    case 1:
    if ( BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    *((uint32_t *)this + 47) = 2;
    goto LABEL_23;
    case 2:
    if ( (unsigned __int8)BuildingClass::CheckOverlapWithOthers(this) )
    v17 = Math::RoundToInt(*(double *)(*((uint32_t *)this + 328) + 3624) * 900.0);
    *((uint32_t *)this + 385) = CurrentFrame;
    *((uint32_t *)this + 386) = v25;
    *((uint32_t *)this + 387) = v17;
    *((uint32_t *)this + 388) = v17;
    else
    v14 = *((uint32_t *)this + 388);
    if ( !v14 )
    goto LABEL_19;
    v15 = *((uint32_t *)this + 385);
    v16 = *((uint32_t *)this + 387);
    if ( v15 != -1 )
    if ( (int)CurrentFrame - v15 >= v16 )
    v16 = 0;
    else
    v16 -= (int)CurrentFrame - v15;
    if ( (double)(v14 - v16) / (double)*((int *)this + 388) == 1.0 )
    LABEL_19:
    *((uint32_t *)this + 47) = 3;
    goto LABEL_5;
    case 3:
    Timer::StartDouble((uint8_t *)this + 848, *(double *)(v2 + 968));
    *((uint32_t *)this + 47) = 4;
    v13 = (int *)((char *)this + 156);
    v21 = *v13;
    v22 = v13[1];
    v23 = v13[2];
    StartAudioControllerAt(RulesClass_Instance->V3Rocket[6], (int)&v21, 0);
    return 0;
    case 4:
    LABEL_23:
    if ( Flag::CheckNone((uint8_t *)this + 848) )
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 1156))(this, 0, 1);
    *((uint32_t *)this + 47) = 5;
    *((uint8_t *)this + 128) = 1;
    if ( Window::IsVisible((uint8_t *)this + 848)
    || BuildingClass::CheckFlag24((uint8_t *)this + 848)
    || BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    Progress = Animation::GetProgress((int)this + 848);
    v19 = Math::RoundToInt(Progress * (double)*(int *)(*((uint32_t *)this + 328) + 5880));
    if ( v19 != *((char *)this + 1795) )
    *((uint8_t *)this + 1795) = v19;
    *((uint8_t *)this + 128) = 1;
    return 0;
    default:
    LABEL_5:
    MissionControl = MissionClass::GetMissionControl(this);
    v6 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    result = v6 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    break;
    else
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 1;
    return result;
}

int  BuildingClass::GetPowerOutput(int *this)
{
    int v2; // edi
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int *v6; // ecx
    int v7; // edx
    double HealthRatio; // st7
    int v10; // [esp+8h] [ebp-4h]
    v2 = *(uint32_t *)(*(this + 328) + 3808);
    v10 = v2;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 468))(this) )
    return 0;
    if ( *((uint8_t *)this + 1640) )
    v2 += *(uint32_t *)(*(this + 328) + 3816);
    v10 = v2;
    v3 = *(this + 328);
    if ( *(uint8_t *)(v3 + 5806) || *(uint8_t *)(v3 + 5807) )
    v4 = *(uint32_t *)(v3 + 3816);
    if ( v4 > 0 )
    v5 = *(this + 69);
    if ( v5 > 0 )
    v2 += v5 * v4;
    v10 = v2;
    if ( *((uint8_t *)this + 1794) )
    v6 = this + 379;
    v7 = 3;
    do
    if ( *v6 )
    v2 += *(uint32_t *)(*v6 + 3808);
    ++v6;
    --v7;
    while ( v7 );
    v10 = v2;
    if ( v2 <= 0 || !*((uint8_t *)this + 1632) )
    return 0;
    HealthRatio = BuildingClass::GetHealthRatio(this);
    return Math::RoundToInt(HealthRatio * (double)v10);
}

int  BuildingClass::GetPowerDrain(uint8_t *this)
{
    int v2; // ecx
    int result; // eax
    char *v4; // edx
    int v5; // esi
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 468))(this) || !*(this + 1632) )
    return 0;
    v2 = *((uint32_t *)this + 328);
    result = *(uint32_t *)(v2 + 3812);
    if ( *(this + 1641) )
    result += *(uint32_t *)(v2 + 3820);
    if ( *(this + 1794) )
    v4 = this + 1516;
    v5 = 3;
    do
    if ( *(uint32_t *)v4 )
    result += *(uint32_t *)(*(uint32_t *)v4 + 3812);
    v4 += 4;
    --v5;
    while ( v5 );
    return result;
}

int  BuildingClass::OnObjectExpired(#377 *this)
{
    int v2; // edx
    int v3; // ecx
    uint8_t *v4; // eax
    int v5; // edx
    int v6; // ecx
    uint8_t *v7; // eax
    int result; // eax
    uint32_t *v9; // ecx
    uint32_t *v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // eax
    int v14; // ecx
    int v15; // ecx
    int v16; // eax
    char *v17; // esi
    int v18; // ecx
    int v19; // ecx
    int v20; // [esp+10h] [ebp+4h]
    uint8_t *v21; // [esp+14h] [ebp+8h] BYREF
    ObjectClass::NotifyExpired((int *)this, (uint8_t *)v20, v21);
    if ( *((uint32_t *)this + 336) == v20 )
    *((uint32_t *)this + 336) = 0;
    if ( *((uint32_t *)this + 338) == v20 )
    *((uint32_t *)this + 338) = 0;
    if ( *((uint32_t *)this + 329) == v20 )
    *((uint32_t *)this + 329) = 0;
    if ( *((uint32_t *)this + 384) == v20 )
    *((uint32_t *)this + 384) = 0;
    if ( *((uint32_t *)this + 389) == v20 )
    *((uint32_t *)this + 389) = 0;
    if ( *((uint32_t *)this + 351) == v20 )
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v3 = 0;
    v4 = (uint8_t *)(*((uint32_t *)this + 328) + 5140);
    else
    v3 = 1;
    v4 = (uint8_t *)(*((uint32_t *)this + 328) + 5156);
    if ( v4 && *v4 )
    BuildingClass::PlayAnim(this, v2, v4, 18, v3, 0, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5805) && *((uint32_t *)this + 353) == v20 )
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v6 = 0;
    v7 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v6 = 1;
    v7 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v7 && *v7 )
    BuildingClass::PlayAnim(this, v5, v7, 3, v6, 0, 0);
    if ( v20 && (*(int (__stdcall **)(int))(*(uint32_t *)(v20 + 4) + 12))(v20 + 4) == 4 )
    result = 0;
    v9 = (uint32_t *)((char *)this + 1480);
    do
    if ( *v9 == v20 )
    *((uint32_t *)this + result + 370) = 0;
    return result;
    ++result;
    ++v9;
    while ( result < 8 );
    if ( !*(uint8_t *)(v20 + 280) )
    goto LABEL_34;
    LOBYTE(result) = BuildingClass::StopAnim((int)this, v20);
    else
    LABEL_34:
    if ( *((uint32_t *)this + 328) == v20 )
    *((uint32_t *)this + 328) = 0;
    v10 = (uint32_t *)((char *)this + 1516);
    v11 = 3;
    do
    if ( *v10 == v20 )
    *v10 = 0;
    ++v10;
    --v11;
    while ( v11 );
    v12 = *((uint32_t *)this + 411);
    v21 = (uint8_t *)v20;
    v13 = (*(int (__thiscall **)(char *, uint8_t **))(v12 + 16))((char *)this + 1644, &v21);
    if ( v13 != -1 )
    v14 = *((uint32_t *)this + 415);
    if ( v13 < v14 )
    v15 = v14 - 1;
    for ( *((uint32_t *)this + 415) = v15;
    v13 < *((uint32_t *)this + 415);
    *(uint32_t *)(*((uint32_t *)this + 412) + 4 * v13 - 4) = *(uint32_t *)(*((uint32_t *)this + 412) + 4 * v13) )
    ++v13;
    result = IKnowWhatImDoing;
    if ( IKnowWhatImDoing )
    v16 = *((uint32_t *)this + 417);
    v17 = (char *)this + 1668;
    v21 = (uint8_t *)v20;
    result = (*(int (__thiscall **)(char *, uint8_t **))(v16 + 16))(v17, &v21);
    if ( result != -1 )
    v18 = *((uint32_t *)v17 + 4);
    if ( result < v18 )
    v19 = v18 - 1;
    for ( *((uint32_t *)v17 + 4) = v19;
    result < *((uint32_t *)v17 + 4);
    *(uint32_t *)(*((uint32_t *)v17 + 1) + 4 * result - 4) = *(uint32_t *)(*((uint32_t *)v17 + 1) + 4 * result) )
    ++result;
    return result;
}

// 0x0044EB10
int  BuildingClass::GetCrew(#377 *this)
{
    if ( *((uint8_t *)this + 1763)
    || Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) >= 25
    || *(uint32_t *)(*((uint32_t *)this + 328) + 3768) != 7 )
    return TechnoClass::GetCrew(this);
    else
    return RulesClass_Instance->GuardArea;
}

int  BuildingClass::Disappear_PrismForward(#377 *this)
{
    int v1; // ebx
    int v3; // ecx
    int v4; // ecx
    uint32_t *v5; // ecx
    int v6; // eax
    int v7; // edx
    uint32_t *v8; // ecx
    int Type; // eax
    char v10; // bl
    int v11; // edi
    int v12; // eax
    int v13; // eax
    int v14; // eax
    uint32_t *v15; // ecx
    int v16; // eax
    char v17; // bl
    int v18; // edi
    int v19; // eax
    int v20; // eax
    int v21; // eax
    uint32_t *v22; // ecx
    int v23; // eax
    char v24; // bl
    int v25; // edi
    int v26; // eax
    int v27; // eax
    int v28; // eax
    uint32_t *v29; // ecx
    int v30; // eax
    char v31; // bl
    int v32; // edi
    int v33; // eax
    int v34; // eax
    int v35; // eax
    uint32_t *v36; // ecx
    int v37; // eax
    char v38; // bl
    int v39; // edi
    int v40; // eax
    int v41; // eax
    int v42; // eax
    uint32_t *BuildLimit; // eax
    int i; // ebp
    int Member; // eax
    int v46; // edi
    int v48; // [esp+44h] [ebp-10h]
    char v49; // [esp+58h] [ebp+4h]
    if ( v49 )
    v3 = *((uint32_t *)this + 329);
    if ( v3 )
    BuildingClass::AbandonProduction(v3);
    v4 = *((uint32_t *)this + 329);
    if ( v4 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v4 + 32))(v4, 1);
    *((uint32_t *)this + 329) = 0;
    v5 = (uint32_t *)*((uint32_t *)this + 135);
    v48 = v1;
    if ( !v5 )
    goto LABEL_33;
    v6 = *((uint32_t *)this + 328);
    v7 = *(uint32_t *)(v6 + 3768);
    if ( v7 == 7 )
    v8 = (uint32_t *)v5[5359];
    if ( v8 )
    Type = AbstractClass::GetType(v8);
    v10 = *((uint8_t *)this + 129);
    v11 = Type;
    *((uint8_t *)this + 129) = 1;
    if ( Type )
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)Type + 132))(Type);
    if ( !(*(int (__thiscall **)(int, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v12 + 148))(
    v12,
    1,
    0,
    0,
    *((uint32_t *)this + 135)) )
    v13 = (*(int (__thiscall **)(int))(*(uint32_t *)v11 + 132))(v11);
    v14 = (*(int (__thiscall **)(int))(*(uint32_t *)v13 + 64))(v13);
    HouseClass::CancelProduction(*((void*375 **)this + 135), *(void **)(*((uint32_t *)this + 328) + 3768), v14, 0, 0);
    *((uint8_t *)this + 129) = v10;
    v15 = *(uint32_t **)(*((uint32_t *)this + 135) + 21440);
    if ( v15 )
    v16 = AbstractClass::GetType(v15);
    v17 = *((uint8_t *)this + 129);
    v18 = v16;
    *((uint8_t *)this + 129) = 1;
    if ( v16 )
    v19 = (*(int (__thiscall **)(int))(*(uint32_t *)v16 + 132))(v16);
    if ( !(*(int (__thiscall **)(int, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v19 + 148))(
    v19,
    1,
    0,
    0,
    *((uint32_t *)this + 135)) )
    v20 = (*(int (__thiscall **)(int))(*(uint32_t *)v18 + 132))(v18);
    v21 = (*(int (__thiscall **)(int))(*(uint32_t *)v20 + 64))(v20);
    HouseClass::CancelProduction(*((void*375 **)this + 135), *(void **)(*((uint32_t *)this + 328) + 3768), v21, 0, 0);
    *((uint8_t *)this + 129) = v17;
    v22 = *(uint32_t **)(*((uint32_t *)this + 135) + 21444);
    if ( v22 )
    v23 = AbstractClass::GetType(v22);
    v24 = *((uint8_t *)this + 129);
    v25 = v23;
    *((uint8_t *)this + 129) = 1;
    if ( v23 )
    v26 = (*(int (__thiscall **)(int))(*(uint32_t *)v23 + 132))(v23);
    if ( !(*(int (__thiscall **)(int, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v26 + 148))(
    v26,
    1,
    0,
    0,
    *((uint32_t *)this + 135)) )
    v27 = (*(int (__thiscall **)(int))(*(uint32_t *)v25 + 132))(v25);
    v28 = (*(int (__thiscall **)(int))(*(uint32_t *)v27 + 64))(v27);
    HouseClass::CancelProduction(*((void*375 **)this + 135), *(void **)(*((uint32_t *)this + 328) + 3768), v28, 0, 0);
    *((uint8_t *)this + 129) = v24;
    v29 = *(uint32_t **)(*((uint32_t *)this + 135) + 21448);
    if ( v29 )
    v30 = AbstractClass::GetType(v29);
    v31 = *((uint8_t *)this + 129);
    v32 = v30;
    *((uint8_t *)this + 129) = 1;
    if ( v30 )
    v33 = (*(int (__thiscall **)(int))(*(uint32_t *)v30 + 132))(v30);
    if ( !(*(int (__thiscall **)(int, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)v33 + 148))(
    v33,
    1,
    0,
    0,
    *((uint32_t *)this + 135)) )
    v34 = (*(int (__thiscall **)(int))(*(uint32_t *)v32 + 132))(v32);
    v35 = (*(int (__thiscall **)(int))(*(uint32_t *)v34 + 64))(v34);
    HouseClass::CancelProduction(*((void*375 **)this + 135), *(void **)(*((uint32_t *)this + 328) + 3768), v35, 0, 0);
    *((uint8_t *)this + 129) = v31;
    v36 = *(uint32_t **)(*((uint32_t *)this + 135) + 21452);
    if ( !v36 )
    goto LABEL_33;
    v37 = AbstractClass::GetType(v36);
    v38 = *((uint8_t *)this + 129);
    v39 = v37;
    *((uint8_t *)this + 129) = 1;
    if ( !v37 )
    goto LABEL_32;
    else
    BuildLimit = (uint32_t *)HouseClass::GetBuildLimit(v5, v7, *(uint8_t *)(v6 + 3278), 0);
    if ( !BuildLimit )
    goto LABEL_33;
    v37 = AbstractClass::GetType(BuildLimit);
    v38 = *((uint8_t *)this + 129);
    v39 = v37;
    *((uint8_t *)this + 129) = 1;
    if ( !v37 )
    LABEL_32:
    *((uint8_t *)this + 129) = v38;
    LABEL_33:
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 640))(this, 3);
    return ObjectClass::Destroy2(this);
    v40 = (*(int (__thiscall **)(int, int))(*(uint32_t *)v37 + 132))(v37, v48);
    if ( !(*(int (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)v40 + 148))(v40, 1, 0, 0) )
    v41 = (*(int (__thiscall **)(int))(*(uint32_t *)v39 + 132))(v39);
    v42 = (*(int (__thiscall **)(int))(*(uint32_t *)v41 + 64))(v41);
    HouseClass::CancelProduction(*((void*375 **)this + 135), *(void **)(*((uint32_t *)this + 328) + 3768), v42, 0, 0);
    goto LABEL_32;
    for ( i = 0; i < *((uint32_t *)this + 58); ++i )
    Member = Team::GetMember(this, i);
    v46 = Member;
    if ( Member && !Object::IsAlliedWithObjectHouse(*((uint32_t **)this + 135), Member) )
    (*(void (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 3, v46);
    return ObjectClass::Destroy2(this);
}

int  BuildingClass::ValidateFoundation(#377 *this)
{
    int *v2; // eax
    int v3; // edx
    int v4; // ebp
    int *v5; // esi
    int v6; // edi
    void *v7; // eax
    int v9; // edi
    void *v10; // eax
    int v11; // edi
    void *v12; // eax
    int v13; // eax
    uint32_t *v14; // eax
    int v15; // edi
    void *v16; // eax
    int v17; // edi
    void *v18; // eax
    int v19; // edi
    void *v20; // eax
    int v21; // edi
    void *v22; // eax
    int v23; // ecx
    _WORD *v24; // edi
    _WORD *v25; // eax
    int v26; // ebp
    void *v27; // eax
    __int16 FoundationHeight; // ax
    uint32_t *v29; // ecx
    int v30; // ebp
    __int16 v31; // di
    __int16 v32; // di
    int v33; // ebp
    void *v34; // eax
    int v35; // edi
    void *v36; // eax
    uint32_t *v37; // ecx
    __int16 FoundationWidth; // ax
    int v39; // ecx
    int v40; // ebp
    __int16 v41; // di
    __int16 v42; // di
    int v43; // ebp
    void *v44; // eax
    int v45; // edi
    void *v46; // eax
    int v47; // ecx
    int v48; // [esp+50h] [ebp-20h] BYREF
    int v49; // [esp+54h] [ebp-1Ch]
    int v50; // [esp+58h] [ebp-18h] BYREF
    int v51; // [esp+5Ch] [ebp-14h]
    int v52[3]; // [esp+64h] [ebp-Ch] BYREF
    int *v53; // [esp+74h] [ebp+4h]
    int *v54; // [esp+78h] [ebp+8h]
    int v55; // [esp+78h] [ebp+8h]
    int v56; // [esp+78h] [ebp+8h]
    int v57; // [esp+78h] [ebp+8h]
    __int16 v58; // [esp+78h] [ebp+8h]
    int v59; // [esp+78h] [ebp+8h]
    int v60; // [esp+78h] [ebp+8h]
    int v61; // [esp+78h] [ebp+8h]
    int v62; // [esp+7Ch] [ebp+Ch] BYREF
    v2 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v50);
    v3 = *((uint32_t *)this + 328);
    v4 = *v2;
    v5 = v54;
    v51 = *v2;
    if ( *(uint8_t *)(v3 + 5860) )
    LOWORD(v55) = v4 + 1;
    HIWORD(v55) = HIWORD(v51) + 2;
    v48 = v55;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v6 = *v5;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v6 + 428))(v5, v7, -1, -1, 0, 1) )
    *v53 = v48;
    return (int)v53;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5861) )
    LOWORD(v56) = v4 + 2;
    HIWORD(v56) = HIWORD(v51) + 2;
    v48 = v56;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v9 = *v5;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v9 + 428))(v5, v10, -1, -1, 0, 1) )
    *v53 = v48;
    return (int)v53;
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5862) )
    LOWORD(v57) = v4 + 2;
    HIWORD(v57) = HIWORD(v51) + 1;
    v48 = v57;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v11 = *v5;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v11 + 428))(v5, v12, -1, -1, 0, 1) )
    LABEL_12:
    *v53 = v48;
    return (int)v53;
    v13 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v13 + 3278) && *(uint8_t *)(v13 + 5821) )
    v14 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)this + 168))(this, v52, v5);
    v58 = *v14 / 256;
    HIWORD(v48) = v14[1] / 256;
    ++HIWORD(v48);
    LOWORD(v48) = v58 + 1;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v15 = *v5;
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, uint32_t))(v15 + 428))(v5, v16, -1, -1, 0, 0) )
    *v53 = v48;
    return (int)v53;
    --HIWORD(v48);
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v17 = *v5;
    v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, uint32_t))(v17 + 428))(v5, v18, -1, -1, 0, 0) )
    *v53 = v48;
    return (int)v53;
    ++HIWORD(v48);
    LOWORD(v48) = v48 - 1;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v19 = *v5;
    v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, uint32_t))(v19 + 428))(v5, v20, -1, -1, 0, 0) )
    *v53 = v48;
    return (int)v53;
    if ( v62 != g_TerrainTypeTable && LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v62) )
    v21 = *v5;
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v62);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, uint32_t))(v21 + 428))(v5, v22, -1, -1, 0, 0) )
    *v53 = v62;
    return (int)v53;
    v23 = *((uint32_t *)this + 328);
    v24 = *(_WORD **)(v23 + 3796);
    if ( v24 && !*(uint8_t *)(v23 + 5825) )
    while ( *v24 != 0x7FFF || v24[1] != 0x7FFF )
    v25 = v24;
    v24 += 2;
    LOWORD(v59) = v4 + *v25;
    HIWORD(v59) = HIWORD(v51) + v25[1];
    v48 = v59;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v26 = *v5;
    v27 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, uint32_t))(v26 + 428))(v5, v27, -1, -1, 0, 0) )
    goto LABEL_36;
    LOWORD(v4) = v51;
    goto LABEL_53;
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v23, 0);
    v29 = (uint32_t *)*((uint32_t *)this + 328);
    v30 = -1;
    v31 = FoundationHeight;
    v50 = -1;
    if ( BuildingTypeClass::GetFoundationWidth(v29) >= -1 )
    HIWORD(v60) = HIWORD(v51) + v31;
    do
    v32 = v51 + v30;
    LOWORD(v60) = v51 + v30;
    v48 = v60;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v33 = *v5;
    v34 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v33 + 428))(v5, v34, -1, -1, 0, 1) )
    goto LABEL_12;
    v30 = v50;
    LOWORD(v49) = v32;
    HIWORD(v49) = HIWORD(v51) - 1;
    v48 = v49;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v35 = *v5;
    v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v35 + 428))(v5, v36, -1, -1, 0, 1) )
    goto LABEL_36;
    v37 = (uint32_t *)*((uint32_t *)this + 328);
    v50 = ++v30;
    while ( v30 <= BuildingTypeClass::GetFoundationWidth(v37) );
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328));
    v39 = *((uint32_t *)this + 328);
    v40 = -1;
    v41 = FoundationWidth;
    v49 = -1;
    if ( BuildingTypeClass::GetFoundationHeight(v39, 0) >= -1 )
    LOWORD(v61) = v51 + v41;
    while ( 1 )
    v42 = HIWORD(v51) + v40;
    HIWORD(v61) = HIWORD(v51) + v40;
    v48 = v61;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v43 = *v5;
    v44 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v43 + 428))(v5, v44, -1, -1, 0, 1) )
    goto LABEL_12;
    v40 = v49;
    HIWORD(v50) = v42;
    LOWORD(v50) = v51 - 1;
    v48 = v50;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) )
    v45 = *v5;
    v46 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v45 + 428))(v5, v46, -1, -1, 0, 1) )
    break;
    v47 = *((uint32_t *)this + 328);
    v49 = ++v40;
    if ( v40 > BuildingTypeClass::GetFoundationHeight(v47, 0) )
    goto LABEL_53;
    LABEL_36:
    *v53 = v48;
    return (int)v53;
    LABEL_53:
    *v53 = g_TerrainTypeTable;
    return (int)v53;
}

// 0x0044F5C0
int  BuildingClass::CanBeSoldCheck(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 321);
    if ( result <= 0 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 644))(this);
    if ( (uint8_t)result )
    LOBYTE(result) = 1;
    else
    if ( !*(uint8_t *)(*((uint32_t *)this + 328) + 5817) )
    return *(uint32_t *)(*((uint32_t *)this + 328) + 1032) != 0;
    result = House::IsCurrentPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result
    && (result = GameMode_Current[0]) != 0
    && (uint8_t)MCVRedeploy
    && (result = *((uint32_t *)this + 176)) == 0 )
    return *(uint32_t *)(*((uint32_t *)this + 328) + 1032) != 0;
    else
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x0044F640
int  BuildingClass::GetFactoryPosition(#377 *this)
{
    uint32_t *v1; // eax
    uint32_t *v2; // ecx
    int v3; // esi
    int v4; // edi
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int *v9; // ecx
    char v10[12]; // [esp+4h] [ebp-Ch] BYREF
    int *v11; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)*((uint32_t *)this + 328);
    if ( v1[946] == g_BuildingClassPool && v1[947] == dword_89C84C && v1[948] == dword_89C850 )
    v9 = (int *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 72))(this, v10);
    *v11 = *v9;
    v11[1] = v9[1];
    v11[2] = v9[2];
    return (int)v11;
    else
    v2 = (uint32_t *)((char *)this + 156);
    v3 = v2[1];
    v4 = v2[2];
    v5 = *v2 + v1[946];
    v6 = v3 + v1[947];
    v7 = v1[948];
    *v11 = v5;
    v11[1] = v6;
    v11[2] = v4 + v7;
    return (int)v11;
}

// 0x004500A0
int  BuildingClass::GetAdjustedExitCoords(#377 *this)
{
    uint32_t *v2; // eax
    int v3; // edi
    int v4; // ebx
    int v5; // ecx
    int v6; // edx
    int v7; // eax
    uint8_t v9[12]; // [esp+Ch] [ebp-Ch] BYREF
    int *v10; // [esp+1Ch] [ebp+4h]
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v9);
    v3 = v2[1];
    v4 = v2[2];
    v5 = *v2 + *(uint32_t *)(*((uint32_t *)this + 328) + 3772);
    v6 = *(uint32_t *)(*((uint32_t *)this + 328) + 3776);
    v7 = *(uint32_t *)(*((uint32_t *)this + 328) + 3780);
    *v10 = v5;
    v10[1] = v3 + v6;
    v10[2] = v4 + v7;
    return (int)v10;
}

int  BuildingClass::UpdatePrism(int *this)
{
    __int64 v2; // rax
    int v3; // edx
    int v4; // eax
    int v5; // ecx
    LODWORD(v2) = *(this + 449);
    if ( (uint32_t)v2 )
    v3 = *(this + 453) - 1;
    *(this + 453) = v3;
    if ( v3 <= 0 )
    v4 = v2 - 1;
    *(this + 453) = 0;
    if ( v4 )
    LODWORD(v2) = v4 - 1;
    if ( !(uint32_t)v2 )
    LODWORD(v2) = BuildingClass::FireLaser(this, *(this + 450), *(this + 451), *(this + 452));
    *(this + 449) = 0;
    return v2;
    else
    LODWORD(v2) = *(this + 173);
    if ( (uint32_t)v2 )
    LODWORD(v2) = (*(int (__thiscall **)(int *, uint32_t, uint32_t, int))(*this + 960))(this, v2, *(this + 450), 1);
    if ( !(uint32_t)v2 )
    LODWORD(v2) = (*(int (__thiscall **)(int *, uint32_t, uint32_t))(*this + 972))(
    this,
    *(this + 173),
    *(this + 450));
    v5 = v2;
    if ( (uint32_t)v2 )
    LODWORD(v2) = *(this + 409);
    if ( (uint32_t)v2 )
    v2 = 1374389535LL * (unsigned int)(((uint32_t)v2 * HIDWORD(RulesClass_Instance->ZoomInFactor) + 100) << 8);
    *(uint32_t *)(v5 + 336) = HIDWORD(v2) >> 5;
    *(this + 409) = 0;
    *(this + 449) = 0;
    return v2;
}

// 0x00451330
int  BuildingClass::GetCrewCount(#377 *this)
{
    uint8_t *v2; // ecx
    int v3; // edx
    int v4; // eax
    int v5; // esi
    int result; // eax
    if ( *((uint8_t *)this + 1760) )
    return 0;
    v2 = (uint8_t *)*((uint32_t *)this + 328);
    if ( !v2[3277] )
    return 0;
    v3 = *((uint32_t *)this + 135);
    v4 = *(uint32_t *)(v3 + 488);
    if ( v4 )
    if ( v4 == 1 )
    v5 = RulesClass_Instance[1].VeinholeShrinkRate;
    else
    if ( v4 != 2 )
    return 0;
    v5 = RulesClass_Instance[1].VeinAttack;
    else
    v5 = RulesClass_Instance[1].VeinholeGrowthRate;
    if ( !v5 )
    return 0;
    if ( *((uint8_t *)this + 1763) )
    v5 *= 2;
    result = (*(int (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v2 + 184))(v2, v3, 0) / v5;
    if ( result < 1 )
    return 1;
    if ( result > 5 )
    return 5;
    return result;
}

// 0x004513D0
int  BuildingClass::ProductionCheck(#377 *this)
{
    if ( *((uint32_t *)this + 333) && *((uint8_t *)this + 1764) )
    return (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 328) + 156))(*((uint32_t *)this + 328));
    else
    return (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 328) + 192))(*((uint32_t *)this + 328));
}

// 0x004521C0
int  BuildingClass::DisableTemporal(int *this)
{
    int *v1; // ecx
    int v2; // edx
    int result; // eax
    int v4; // esi
    *((uint8_t *)this + 1632) = 0;
    v1 = this + 343;
    v2 = 21;
    do
    result = *v1;
    if ( *v1 )
    v4 = *(uint32_t *)(result + 172);
    *(uint8_t *)(result + 282) = 1;
    *(uint8_t *)(result + 283) = 0;
    *(uint32_t *)(result + 284) = v4;
    *(uint8_t *)(result + 281) = 1;
    ++v1;
    --v2;
    while ( v2 );
    return result;
}

// 0x00452210
uint8_t * BuildingClass::EnableTogglePower(uint8_t *this)
{
    uint32_t *v1; // ecx
    int v2; // edx
    uint8_t *result; // eax
    *(this + 1632) = 1;
    v1 = this + 1372;
    v2 = 21;
    do
    result = (uint8_t *)*v1;
    if ( *v1 )
    result[282] = 0;
    result[283] = 1;
    result[281] = 0;
    ++v1;
    --v2;
    while ( v2 );
    return result;
}

int  BuildingClass::StubReturn0(#377 *this)
{
    return 0;
}

void  BuildingClass::EnableStuff(int this)
{
    uint8_t *v2; // ecx
    int v3; // esi
    uint8_t **v4; // edi
    v2 = *(uint8_t **)(this + 1556);
    *(uint8_t *)(this + 1770) = 1;
    if ( v2 )
    Trigger::EnableOnce(v2, 0);
    if ( *(uint8_t *)(*(uint32_t *)(this + 1312) + 5822) )
    BuildingClass::RepairPlacement((uint8_t *)this, 0);
    v3 = 0;
    v4 = (uint8_t **)(this + 1372);
    do
    if ( *(uint8_t *)(*(uint32_t *)(this + 1312) + v3 + 3980) )
    if ( *v4 )
    VtableStub::425270(*v4);
    v3 += 68;
    ++v4;
    while ( v3 < 1428 );
}

// 0x00452540
char  BuildingClass::MakeTraversable(uint32_t *this)
{
    if ( !*(uint8_t *)(*(this + 328) + 5815) )
    return 1;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 24
    || BuildingClass::CheckFlag24((uint8_t *)this + 848)
    || Flag::CheckNone((uint8_t *)this + 848) )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 496))(this, -1);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 24, 0);
    (*(void (__thiscall **)(uint32_t *))(*this + 492))(this);
    else
    if ( !*(uint8_t *)(*(this + 328) + 5815) )
    return 1;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 24
    && BuildingClass::CheckPowerFlags((uint8_t *)this + 848) )
    return 1;
    return 0;
}

// 0x00452630
int  BuildingClass::CheckHealthForRepair(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 27);
    if ( result )
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 5498) )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 128))(this);
    if ( (uint8_t)result )
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = InfantryClass::CheckHealthDiff(this);
    else
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x004526F0
int  BuildingClass::SelectVocOrSfx(#377 *this)
{
    char v2; // al
    int v3; // ebx
    void **v4; // edi
    int result; // eax
    int v6; // eax
    int v7; // esi
    bool v8; // zf
    int v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // [esp+14h] [ebp+4h]
    v2 = *((uint8_t *)this + 1794);
    if ( v2 && (v3 = 0, v2 > 0) )
    v4 = (void **)((char *)this + 1516);
    while ( 1 )
    if ( *v4 )
    result = TechnoClass::GetAudioEntry(*v4, v12);
    if ( *(uint32_t *)result )
    break;
    ++v3;
    ++v4;
    if ( v3 >= *((char *)this + 1794) )
    goto LABEL_7;
    else
    LABEL_7:
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this) )
    v6 = *((uint32_t *)this + 423);
    if ( v6 < *((uint32_t *)this + 421) )
    v7 = *(uint32_t *)(*((uint32_t *)this + 418) + 4 * v6);
    v8 = !Audio::IsLoud((float *)(v7 + 336));
    v9 = *(uint32_t *)(v7 + 1728);
    if ( v8 )
    v11 = *(uint32_t *)(v9 + 3588);
    result = v9 + 3588;
    if ( v11 )
    return result;
    else
    v10 = *(uint32_t *)(v9 + 3616);
    result = v9 + 3616;
    if ( v10 )
    return result;
    return (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v7 + 1016))(v7, 0);
    return (int)TechnoClass::SelectVocOrSfx((float *)this, v12);
    return result;
}

// 0x004527D0
int  BuildingClass::HasOccupantAudio(#377 *this)
{
    int result; // eax
    char v2; // al
    int v3; // esi
    int v4; // edx
    int *v5; // ecx
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 3233) )
    LABEL_2:
    LOBYTE(result) = 1;
    return result;
    v2 = *((uint8_t *)this + 1794);
    if ( v2 )
    v3 = v2;
    v4 = 0;
    if ( v2 > 0 )
    v5 = (int *)((char *)this + 1516);
    do
    result = *v5;
    if ( *v5 )
    if ( *(uint8_t *)(result + 3233) )
    goto LABEL_2;
    ++v4;
    ++v5;
    while ( v4 < v3 );
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::RenderExitPosition(#377 *this)
{
    int *v2; // eax
    int v3; // edi
    int v4; // ebx
    int *v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v10; // ecx
    int *v11; // eax
    int v12; // edi
    int v13; // ebx
    int *v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    int *v18; // eax
    int v19; // edi
    int v20; // ebx
    int *v21; // eax
    int v22; // esi
    int v23; // ecx
    uint32_t *v24; // ecx
    int *v25; // eax
    int v26; // edi
    int v27; // esi
    int v28; // ebx
    int v29; // ebp
    int v30; // ecx
    uint32_t *v31; // eax
    int *v32; // [esp-4h] [ebp-28h]
    int v33[2]; // [esp+10h] [ebp-14h] BYREF
    uint32_t v34[3]; // [esp+18h] [ebp-Ch] BYREF
    uint32_t *cell; // [esp+28h] [ebp+4h]
    int v36; // [esp+2Ch] [ebp+8h]
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5499) && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    v2 = World::ToScreen(
    (float *)TacticalClass_Instance,
    v33,
    (int *)(*((uint32_t *)this + 328) + 8 * *((uint32_t *)this + 423) + 5512));
    v3 = *v2;
    v4 = v2[1];
    v5 = (int *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 172))(this, v34);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    *cell = v3 + v6;
    cell[1] = v4 + v7;
    cell[2] = v8;
    return (int)cell;
    else
    v10 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v10 + 3652) == 0xFFFF && *(uint32_t *)(v10 + 3656) == 0xFFFF )
    if ( *(uint8_t *)(v10 + 5830) )
    v24 = (uint32_t *)BuildingClass::CalcBarrelFlashPosition(v34, v36, 1);
    *cell = *v24;
    cell[1] = v24[1];
    cell[2] = v24[2];
    return (int)cell;
    else
    v25 = TechnoClass::ComputeTransform((uint32_t **)this, v34, v36, 0, 0, 0);
    v26 = *v25;
    v27 = *((uint32_t *)this + 328);
    v28 = v25[1];
    v29 = v25[2];
    if ( *(uint8_t *)(v27 + 5829) )
    v30 = *(uint32_t *)(v27 + 4576);
    v33[1] = *(uint32_t *)(v27 + 4580);
    v33[0] = v30;
    v31 = World::ToScreen((float *)TacticalClass_Instance, v34, v33);
    v26 += *v31;
    v28 += v31[1];
    *cell = v26;
    cell[1] = v28;
    cell[2] = v29;
    return (int)cell;
    else
    v32 = (int *)(v10 + 3652);
    if ( *(uint8_t *)(v10 + 5988) )
    v11 = World::ToScreen((float *)TacticalClass_Instance, v33, v32);
    v12 = *v11;
    v13 = v11[1];
    v14 = TechnoClass::ComputeTransform((uint32_t **)this, v34, v36, 0, 0, 0);
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    *cell = v12 + v15;
    cell[1] = v13 + v16;
    else
    v18 = World::ToScreen((float *)TacticalClass_Instance, v33, v32);
    v19 = *v18;
    v20 = v18[1];
    v21 = (int *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 172))(this, v34);
    v22 = *v21;
    v23 = v21[1];
    v17 = v21[2];
    *cell = v22 + v19;
    cell[1] = v20 + v23;
    cell[2] = v17;
    return (int)cell;
}

// 0x00453A70
int  BuildingClass::GetTurretScreenPos(#377 *this)
{
    int *v2; // eax
    int v3; // edi
    int v4; // ebx
    int v5; // edx
    int *v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v11; // ecx
    int *v12; // eax
    uint32_t *v13; // ecx
    int *TurretOffset; // eax
    int v15; // edi
    int v16; // esi
    int v17; // ebx
    int v18; // ebp
    int v19; // ecx
    uint32_t *v20; // eax
    int v21[2]; // [esp+Ch] [ebp-14h] BYREF
    uint32_t v22[3]; // [esp+14h] [ebp-Ch] BYREF
    uint32_t *v23; // [esp+24h] [ebp+4h]
    int v24; // [esp+28h] [ebp+8h]
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5499) && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    v2 = World::ToScreen(
    (float *)TacticalClass_Instance,
    v21,
    (int *)(*((uint32_t *)this + 328) + 8 * *((uint32_t *)this + 423) + 5512));
    v3 = *v2;
    v4 = v2[1];
    v5 = *(uint32_t *)this;
    LABEL_4:
    v6 = (int *)(*(int (__thiscall **)(void*377 *, uint32_t *))(v5 + 172))(this, v22);
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    *v23 = v3 + v7;
    v23[1] = v4 + v8;
    v23[2] = v9;
    return (int)v23;
    v11 = *((uint32_t *)this + 328);
    if ( *(uint32_t *)(v11 + 3652) != 0xFFFF || *(uint32_t *)(v11 + 3656) != 0xFFFF )
    v12 = World::ToScreen((float *)TacticalClass_Instance, v21, (int *)(v11 + 3652));
    v3 = *v12;
    v4 = v12[1];
    v5 = *(uint32_t *)this;
    goto LABEL_4;
    if ( *(uint8_t *)(v11 + 5830) )
    v13 = (uint32_t *)BuildingClass::CalcBarrelFlashPosition(v22, v24, 0);
    *v23 = *v13;
    v23[1] = v13[1];
    v23[2] = v13[2];
    return (int)v23;
    else
    TurretOffset = TechnoClass::GetTurretOffset((uint32_t **)this, v22, v24);
    v15 = *TurretOffset;
    v16 = *((uint32_t *)this + 328);
    v17 = TurretOffset[1];
    v18 = TurretOffset[2];
    if ( *(uint8_t *)(v16 + 5829) )
    v19 = *(uint32_t *)(v16 + 4576);
    v21[1] = *(uint32_t *)(v16 + 4580);
    v21[0] = v19;
    v20 = World::ToScreen((float *)TacticalClass_Instance, v22, v21);
    v15 += *v20;
    v17 += v20[1];
    *v23 = v15;
    v23[1] = v17;
    v23[2] = v18;
    return (int)v23;
}

int  BuildingClass::MarkCellOccupied(#377 *this)
{
    uint32_t *v1; // ecx
    uint32_t *v2; // eax
    int v3; // ecx
    int result; // eax
    uint32_t *v5; // [esp+4h] [ebp+4h] BYREF
    v1 = v5;
    LOWORD(v5) = *v5 / 256;
    HIWORD(v5) = v1[1] / 256;
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v5);
    v3 = v2[73];
    result = (int)(v2 + 73);
    LOBYTE(v3) = v3 | 0x80;
    *(uint32_t *)result = v3;
    return result;
}

int  BuildingClass::ClearCellOccupied(#377 *this)
{
    uint32_t *v1; // ecx
    uint32_t *v2; // eax
    int v3; // ecx
    int result; // eax
    uint32_t *v5; // [esp+4h] [ebp+4h] BYREF
    v1 = v5;
    LOWORD(v5) = *v5 / 256;
    HIWORD(v5) = v1[1] / 256;
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v5);
    v3 = v2[73];
    result = (int)(v2 + 73);
    LOBYTE(v3) = v3 & 0x7F;
    *(uint32_t *)result = v3;
    return result;
}

int  BuildingClass::LoadFromStream(#377 *this)
{
    int v1; // edi
    int v2; // esi
    size_t v3; // eax
    int v4; // ebx
    int v5; // eax
    signed int v6; // ecx
    size_t i; // eax
    uint32_t *v8; // eax
    int v9; // ebp
    int result; // eax
    int v11; // esi
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // eax
    int v17; // edx
    int v18; // esi
    int v19; // eax
    int v20; // ebx
    int v21; // ecx
    int v22; // eax
    int v23; // eax
    int v24; // edx
    int v25; // esi
    int *v26; // esi
    int v27; // ebp
    int *v28; // esi
    int v29; // ebp
    int *v30; // esi
    int v31; // ebp
    int v32; // [esp+58h] [ebp-4h]
    int v33; // [esp+60h] [ebp+4h] BYREF
    int v34; // [esp+64h] [ebp+8h] BYREF
    v1 = v33;
    v2 = v33 + 4;
    v33 = (*(int (__stdcall **)(int))(*(uint32_t *)(v33 + 4) + 16))(v33 + 4);
    v3 = BuildingTypeClass::Dequeue((char **)&BuildingLoadQueue_Array, &v33);
    v4 = 0;
    if ( v3 )
    v5 = (int)(v3 - (uint32_t)BuildingLoadQueue_Array) >> 3;
    if ( v5 != -1 )
    v6 = v5 + 1;
    for ( i = BuildingLoadQueue_Count; v6 < (int)BuildingLoadQueue_Count; i = BuildingLoadQueue_Count )
    v8 = (uint32_t *)((char *)BuildingLoadQueue_Array + 8 * v6++);
    *(v8 - 2) = *v8;
    *(v8 - 1) = v8[1];
    BuildingLoadQueue_Count = i - 1;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = 0;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = 0;
    BuildingLoadQueue_Active = 0;
    v9 = v34;
    result = BuildingClass::AllocAndCtor(v1, v34);
    v32 = result;
    if ( result >= 0 )
    if ( v1 )
    BuildingClass::ctor((uint32_t *)v1, (int)&v33);
    v11 = (*(int (__stdcall **)(int))(*(uint32_t *)v2 + 16))(v2);
    v12 = BuildingLoadQueue_Capacity;
    if ( (int)(BuildingLoadQueue_Count + 1) <= BuildingLoadQueue_Capacity )
    goto LABEL_13;
    if ( !BuildingLoadQueue_Capacity )
    v12 = 10;
    if ( BuildingTypeClass::Enqueue((int)&BuildingLoadQueue_Array, v12) )
    LABEL_13:
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = v11;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = v1;
    BuildingLoadQueue_Dirty = 0;
    ++BuildingLoadQueue_Count;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1312));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1316));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1344));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1352));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1356));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1536));
    AudioController::Init((uint32_t *)(v1 + 1696));
    AudioController::Init((uint32_t *)(v1 + 1716));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v1 + 1780));
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v9 + 12))(v9, &v34, 4, 0);
    if ( result >= 0 )
    v13 = v34;
    if ( v34 <= 0 )
    LABEL_24:
    v18 = 0;
    if ( v13 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(v1 + 1648) + 4 * v18++));
    while ( v18 < v34 );
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v9 + 12))(v9, &v34, 4, 0);
    if ( result >= 0 )
    v19 = v34;
    v20 = 0;
    if ( v34 <= 0 )
    LABEL_36:
    v25 = 0;
    if ( v19 > 0 )
    do
    ObjectPtr::RegisterForTracking(
    (int)&SwizzleManagerClass_Instance,
    (int *)(*(uint32_t *)(v1 + 1672) + 4 * v25++));
    while ( v25 < v34 );
    v26 = (int *)(v1 + 1372);
    v27 = 21;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v26++);
    --v27;
    while ( v27 );
    v28 = (int *)(v1 + 1516);
    v29 = 3;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v28++);
    --v29;
    while ( v29 );
    v30 = (int *)(v1 + 1480);
    v31 = 8;
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v30++);
    --v31;
    while ( v31 );
    *(uint32_t *)(v1 + 1556) = 0;
    return v32;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v9 + 12))(v9, &v33, 4, 0);
    if ( result < 0 )
    break;
    v21 = *(uint32_t *)(v1 + 1676);
    if ( *(uint32_t *)(v1 + 1684) < v21
    || (*(uint8_t *)(v1 + 1681) || !v21)
    && (v22 = *(uint32_t *)(v1 + 1688), v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v1 + 1668) + 8))(
    v1 + 1668,
    v21 + v22,
    0) )
    v23 = *(uint32_t *)(v1 + 1684);
    v24 = *(uint32_t *)(v1 + 1672);
    *(uint32_t *)(v1 + 1684) = v23 + 1;
    *(uint32_t *)(v24 + 4 * v23) = v33;
    v19 = v34;
    if ( ++v20 >= v34 )
    goto LABEL_36;
    else
    while ( 1 )
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v9 + 12))(v9, &v33, 4, 0);
    if ( result < 0 )
    break;
    v14 = *(uint32_t *)(v1 + 1652);
    if ( *(uint32_t *)(v1 + 1660) < v14
    || (*(uint8_t *)(v1 + 1657) || !v14)
    && (v15 = *(uint32_t *)(v1 + 1664), v15 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(v1 + 1644) + 8))(
    v1 + 1644,
    v14 + v15,
    0) )
    v16 = *(uint32_t *)(v1 + 1660);
    v17 = *(uint32_t *)(v1 + 1648);
    *(uint32_t *)(v1 + 1660) = v16 + 1;
    *(uint32_t *)(v17 + 4 * v16) = v33;
    v13 = v34;
    if ( ++v4 >= v34 )
    goto LABEL_24;
    return result;
}

// 0x00454190
int  BuildingClass::Size(#377 *this)
{
    int SizeMax; // ebp
    int v2; // edx
    int result; // eax
    int v4; // ebx
    int v5; // edx
    int v6; // ebx
    uint32_t *v7; // [esp+38h] [ebp+4h]
    int v8; // [esp+3Ch] [ebp+8h]
    int v9; // [esp+40h] [ebp+Ch] BYREF
    SizeMax = IPersistStream::GetSizeMax((int)v7, v8, v9);
    if ( SizeMax < 0 )
    return SizeMax;
    v2 = *(uint32_t *)v8;
    v9 = v7[415];
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v2 + 16))(v8, &v9, 4, 0);
    if ( result < 0 )
    return result;
    v4 = 0;
    if ( v9 <= 0 )
    LABEL_6:
    v5 = *(uint32_t *)v8;
    v9 = v7[421];
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v5 + 16))(v8, &v9, 4, 0);
    if ( result < 0 )
    return result;
    v6 = 0;
    if ( v9 > 0 )
    while ( 1 )
    result = (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)v8 + 16))(v8, v7[418] + 4 * v6, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v6 >= v9 )
    return SizeMax;
    return result;
    return SizeMax;
    while ( 1 )
    result = (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)v8 + 16))(v8, v7[412] + 4 * v4, 4, 0);
    if ( result < 0 )
    return result;
    if ( ++v4 >= v9 )
    goto LABEL_6;
}

int  BuildingClass::IsProducing(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 1757) != 0;
    return result;
}

// 0x00454260
int  BuildingClass::PowerDrainUpdate(#377 *this)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // edx
    int v11; // eax
    int v12; // edx
    int v13; // eax
    int v14; // ecx
    int v15; // edx
    int v16; // eax
    int v17; // ecx
    int v18; // edx
    int v19; // eax
    int v20; // ecx
    int v21; // edx
    int v22; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // ecx
    int v27; // edx
    int v28; // eax
    int v29; // edx
    int *v31; // [esp+Ch] [ebp+4h]
    House::PowerBeginUpdate((int)this, (int)v31);
    v2 = *((uint32_t *)this + 330);
    v3 = *((uint32_t *)this + 332);
    if ( v2 != -1 )
    if ( (int)CurrentFrame - v2 >= v3 )
    v3 = 0;
    else
    v3 -= (int)CurrentFrame - v2;
    Power::TimerProcess(v3);
    v4 = *((uint32_t *)this + 436);
    v5 = *((uint32_t *)this + 438);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v5 )
    v5 = 0;
    else
    v5 -= (int)CurrentFrame - v4;
    Power::TimerProcess(v5);
    Power::TimerProcess(*((uint32_t *)this + 333));
    Power::TimerProcess(*((uint32_t *)this + 334));
    Power::TimerProcess(*((uint32_t *)this + 335));
    v6 = *((uint32_t *)this + 336);
    if ( v6 )
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)(v6 + 4) + 16))(v6 + 4);
    Power::TimerProcess(v7);
    Power::TimerProcess(*((uint32_t *)this + 337));
    v8 = *((uint32_t *)this + 338);
    if ( v8 )
    v9 = (*(int (__stdcall **)(int))(*(uint32_t *)(v8 + 4) + 16))(v8 + 4);
    Power::TimerProcess(v9);
    v10 = *((uint32_t *)this + 340);
    v11 = *((uint32_t *)this + 342);
    if ( v10 != -1 )
    if ( (int)CurrentFrame - v10 >= v11 )
    v11 = 0;
    else
    v11 -= (int)CurrentFrame - v10;
    Power::TimerProcess(v11);
    Power::TimerProcess(*((uint32_t *)this + 383));
    Power::TimerProcess(*((uint32_t *)this + 390));
    Power::TimerProcess(*((uint32_t *)this + 391));
    LOBYTE(v12) = *((uint8_t *)this + 1632);
    v13 = Power::FlagProcess(v31, v12);
    LOBYTE(v13) = *((uint8_t *)this + 1770);
    Power::FlagProcess(v31, v13);
    LOBYTE(v14) = *((uint8_t *)this + 1738);
    Power::FlagProcess(v31, v14);
    LOBYTE(v15) = *((uint8_t *)this + 1739);
    v16 = Power::FlagProcess(v31, v15);
    LOBYTE(v16) = *((uint8_t *)this + 1756);
    Power::FlagProcess(v31, v16);
    LOBYTE(v17) = *((uint8_t *)this + 1757);
    Power::FlagProcess(v31, v17);
    LOBYTE(v18) = *((uint8_t *)this + 1768);
    v19 = Power::FlagProcess(v31, v18);
    LOBYTE(v19) = *((uint8_t *)this + 1758);
    Power::FlagProcess(v31, v19);
    LOBYTE(v20) = *((uint8_t *)this + 1759);
    Power::FlagProcess(v31, v20);
    LOBYTE(v21) = *((uint8_t *)this + 1760);
    v22 = Power::FlagProcess(v31, v21);
    LOBYTE(v22) = *((uint8_t *)this + 1761);
    Power::FlagProcess(v31, v22);
    LOBYTE(v23) = *((uint8_t *)this + 1762);
    Power::FlagProcess(v31, v23);
    LOBYTE(v24) = *((uint8_t *)this + 1763);
    v25 = Power::FlagProcess(v31, v24);
    LOBYTE(v25) = *((uint8_t *)this + 1764);
    Power::FlagProcess(v31, v25);
    LOBYTE(v26) = *((uint8_t *)this + 1740);
    Power::FlagProcess(v31, v26);
    LOBYTE(v27) = *((uint8_t *)this + 1765);
    v28 = Power::FlagProcess(v31, v27);
    LOBYTE(v28) = *((uint8_t *)this + 1766);
    Power::FlagProcess(v31, v28);
    Power::TimerProcess(*((unsigned __int16 *)this + 896));
    LOBYTE(v29) = *((uint8_t *)this + 1794);
    return Power::FinalizeDrain(v31, v29);
}

int  BuildingClass::UpdatePowerDrain(#377 *this)
{
    char v2; // al
    int v3; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    _WORD *v8; // eax
    int v10; // [esp-4h] [ebp-18h]
    int v11; // [esp+18h] [ebp+4h]
    int v12; // [esp+1Ch] [ebp+8h] BYREF
    v2 = *((uint8_t *)this + 1773);
    if ( !v2 )
    return TechnoClass::UpdatePowerDrain((char *)this, v11, v12);
    if ( v2 <= 10 )
    return (v2 > 5) + 1;
    if ( (uint8_t)v11 )
    v3 = v12;
    if ( v12 )
    v4 = *((uint32_t *)this + 39);
    v5 = *((uint32_t *)this + 40);
    LOWORD(v12) = v4 / 256;
    v6 = v5;
    v7 = *(uint32_t *)(v3 + 48);
    HIWORD(v12) = v6 / 256;
    v10 = v7;
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v12);
    if ( Cell::IsPassableOffset(v8, v10) )
    return 3;
    else if ( *((uint8_t *)this + 1050)
    || (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 808))(this)
    || !g_hWnd
    || GameMode_Current[0]
    && *((uint32_t *)this + 135)
    && HouseClass_Player
    && (unsigned __int8)House::IsAlliedWith(HouseClass_Player, *((void*375 **)this + 135))
    && (unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player) )
    return 3;
    return 5;
}

int  BuildingClass::CleanupOccupation(#377 *this)
{
    void*377 *v1; // esi
    int result; // eax
    uint32_t *v3; // eax
    int v4; // eax
    char v5; // al
    char v6; // al
    char v7; // bl
    char *v8; // ecx
    int v9; // edi
    int v10; // ecx
    char v11; // al
    char v12; // al
    char v13; // bl
    char *v14; // ecx
    int v15; // edi
    int v16; // eax
    int *v17; // eax
    int v18; // ebp
    int v19; // ebx
    void *v20; // edi
    void *Parachute; // edx
    int v22; // esi
    void *v23; // edx
    int v24; // eax
    void *v25; // eax
    int v26; // eax
    void*377 *v27; // ebx
    int *v28; // esi
    int v29; // eax
    int v30; // ebp
    int v31; // edi
    int *v32; // eax
    int v33; // ebp
    int k; // ebx
    bool v35; // zf
    uint32_t *v36; // edi
    uint32_t *m; // esi
    int v38; // eax
    uint32_t *v39; // eax
    uint32_t *v40; // eax
    int *v41; // eax
    int *v42; // eax
    int v43; // ebp
    int v44; // ebx
    uint32_t *v45; // edi
    uint32_t *i; // esi
    int v47; // eax
    uint32_t *v48; // eax
    uint32_t *v49; // eax
    int j; // edi
    int v51; // esi
    uint32_t *v52; // eax
    int v53; // edx
    int v54; // eax
    char v55; // dl
    char v56; // al
    int v57; // [esp+1Ch] [ebp-54h]
    int v59; // [esp+30h] [ebp-40h]
    int v60; // [esp+34h] [ebp-3Ch] BYREF
    uint8_t *v61; // [esp+38h] [ebp-38h]
    uint8_t *v62; // [esp+3Ch] [ebp-34h]
    int v63[3]; // [esp+40h] [ebp-30h] BYREF
    int v64; // [esp+4Ch] [ebp-24h]
    uint32_t v65[2]; // [esp+54h] [ebp-1Ch] BYREF
    int v66; // [esp+5Ch] [ebp-14h] BYREF
    uint8_t v67[8]; // [esp+60h] [ebp-10h] BYREF
    int v68; // [esp+68h] [ebp-8h]
    uint8_t *v69; // [esp+74h] [ebp+4h] BYREF
    v1 = this;
    result = *((uint32_t *)this + 328);
    if ( result )
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v67);
    LOWORD(v64) = *v3 / 256;
    HIWORD(v64) = v3[1] / 256;
    v4 = *((uint32_t *)v1 + 136);
    if ( v4 == 1 )
    v5 = *((uint8_t *)v1 + 1773);
    if ( v5 < 15 )
    v6 = v5 + 1;
    *((uint8_t *)v1 + 1773) = v6;
    if ( v6 == 1 || v6 == 6 || v6 == 11 )
    *((uint8_t *)v1 + 128) = 1;
    v7 = v6;
    if ( v6 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)v1 + 104))(v1, 0, 0) == 5 )
    v7 = 16;
    v8 = (char *)v1 + 1372;
    v9 = 21;
    do
    if ( *(uint32_t *)v8 )
    *(uint8_t *)(*(uint32_t *)v8 + 376) = v7;
    v8 += 4;
    --v9;
    while ( v9 );
    if ( *((uint8_t *)v1 + 1773) == 15 )
    v10 = *((uint32_t *)v1 + 195);
    *((uint32_t *)v1 + 136) = 2;
    if ( v10 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v10 + 32))(v10, 1);
    *((uint32_t *)v1 + 195) = 0;
    else if ( v4 == 3 )
    v11 = *((uint8_t *)v1 + 1773);
    if ( v11 >= 0 )
    if ( v11 > 0 )
    *((uint8_t *)v1 + 1773) = v11 - 1;
    v12 = *((uint8_t *)v1 + 1773);
    if ( !v12 || v12 == 5 || v12 == 10 )
    *((uint8_t *)v1 + 128) = 1;
    v13 = v12;
    if ( v12 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)v1 + 104))(v1, 0, 0) == 5 )
    v13 = 16;
    v14 = (char *)v1 + 1372;
    v15 = 21;
    do
    if ( *(uint32_t *)v14 )
    *(uint8_t *)(*(uint32_t *)v14 + 376) = v13;
    v14 += 4;
    --v15;
    while ( v15 );
    if ( !*((uint8_t *)v1 + 1773) )
    v16 = *((uint32_t *)v1 + 195);
    *((uint32_t *)v1 + 136) = 0;
    if ( !v16 )
    v17 = (int *)(*((uint32_t *)v1 + 328) + 1896);
    if ( *v17 != g_BuildingClassPool
    || *(uint32_t *)(*((uint32_t *)v1 + 328) + 1900) != dword_89C84C
    || *(uint32_t *)(*((uint32_t *)v1 + 328) + 1904) != dword_89C850 )
    v18 = *v17;
    v19 = *(uint32_t *)(*((uint32_t *)v1 + 328) + 1900);
    v68 = *(uint32_t *)(*((uint32_t *)v1 + 328) + 1904);
    v20 = __2_YAPAXI_Z(0x100u);
    if ( v20 )
    Parachute = (void *)*((uint32_t *)this + 40);
    v63[0] = v18 + *((uint32_t *)this + 39);
    v22 = *((uint32_t *)this + 41);
    v65[0] = *((uint32_t *)this + 39);
    v63[1] = (int)Parachute + v19;
    v23 = (void *)*((uint32_t *)this + 40);
    v24 = *((uint32_t *)this + 41);
    v63[2] = v68 + v22;
    v65[1] = v23;
    v66 = v24;
    v25 = Coord::To_Cell(&MapClass_Instance, v65);
    v26 = ParticleSystemClass::Constructor(
    (int)v20,
    *(uint32_t *)(*((uint32_t *)this + 328) + 1892),
    v63,
    (int)v25,
    0,
    &g_BuildingClassPool,
    0);
    v1 = this;
    else
    v26 = 0;
    *((uint32_t *)v1 + 195) = v26;
    if ( *((uint32_t *)v1 + 136) == 2 && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 676))(v1) )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)v1 + 1116))(v1, 0);
    result = *((uint32_t *)v1 + 136);
    if ( !result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 672))(v1);
    if ( (uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)v1 + 1120))(v1, 0);
    LOBYTE(result) = *((uint8_t *)v1 + 1771);
    if ( (uint8_t)result )
    result = *((uint32_t *)v1 + 328);
    if ( *(uint8_t *)(result + 5831) )
    v27 = this;
    v28 = (int *)dword_89DDC0;
    v29 = *(uint32_t *)dword_89DDC0;
    v60 = *(uint32_t *)(*((uint32_t *)this + 135) + 48);
    v30 = (*(int (__thiscall **)(int))(v29 + 124))(dword_89DDC0);
    result = v30 - (v30 >> 31);
    v59 = v30;
    v31 = v30 / 2;
    LOBYTE(result) = *((uint8_t *)this + 1772);
    if ( *((char *)this + 1771) <= 0 )
    if ( (uint8_t)result )
    *((uint8_t *)this + 1772) = result - 1;
    (*(void (__thiscall **)(int *))(*v28 + 24))(v28);
    v41 = (int *)(*(int (__thiscall **)(int *, int *, uint32_t))(*v28 + 120))(v28, &v66, 0);
    Draw::Ellipse(v28, v31, v31, *(char *)(*((uint32_t *)this + 328) + 5895), *v41, v41[1], v41[2], v41[3], 2);
    if ( *((uint8_t *)this + 1772) )
    v42 = (int *)(*(int (__thiscall **)(int *, uint8_t *))(*v28 + 120))(v28, v67);
    Draw::Ellipse(v28, v31, v31, *((char *)this + 1772), *v42, v42[1], v42[2], v42[3], 1);
    v62 = (uint8_t *)(*(int (__thiscall **)(int *, uint32_t, uint32_t))(*v28 + 92))(v28, 0, 0);
    result = v64 - v31;
    HIWORD(v65[0]) = HIWORD(v64) - v31;
    LOWORD(v65[0]) = v64 - v31;
    v61 = 0;
    if ( v30 > 0 )
    v43 = v60;
    while ( 2 )
    v44 = 0;
    do
    v35 = *v62++ == 0;
    if ( v35 )
    LOWORD(v63[0]) = v44 + LOWORD(v65[0]);
    HIWORD(v63[0]) = (_WORD)v61 + HIWORD(v65[0]);
    v60 = v63[0];
    v45 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v60);
    if ( Cell::HasOccupierBit(v45, v43) )
    ((void (__stdcall *)(int))BuildingClass::updateOccupiedState)(v43);
    for ( i = (uint32_t *)v45[57]; i; i = (uint32_t *)i[12] )
    v47 = (*(int (__thiscall **)(uint32_t *))(*i + 44))(i);
    if ( v47 == 1 || v47 == 15 || v47 == 2 )
    (*(void (__thiscall **)(uint32_t *))(*i + 1056))(i);
    v48 = Cell::IsBridge(v45);
    if ( v48 )
    if ( *(uint32_t *)(v48[135] + 48) == v43 )
    v49 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v48 + 72))(v48, v67);
    if ( __PAIR32__(v49[1] / 256, *v49 / 256) == v60 && !(uint8_t)v69 )
    ++*((uint8_t *)this + 1772);
    return (int)this;
    ++v44;
    while ( v44 < v59 );
    result = (int)++v61;
    if ( (int)v61 < v59 )
    continue;
    break;
    v27 = this;
    LOBYTE(result) = *((uint8_t *)v27 + 1772);
    if ( !(uint8_t)result )
    result = g_BuildingProductionState;
    for ( j = 0; j < g_BuildingProductionState; ++j )
    v51 = *((uint32_t *)g_BuildingClass_InstanceCount + j);
    if ( *(uint8_t *)(v51 + 144) )
    if ( (void*377 *)v51 != v27 )
    if ( *(uint8_t *)(*(uint32_t *)(v51 + 1312) + 5831) )
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t))(*(uint32_t *)v51 + 848))(*((uint32_t *)g_BuildingClass_InstanceCount
    + j)) )
    if ( !*(uint8_t *)(v51 + 1771) )
    v52 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v51 + 72))(v51, v67);
    LOWORD(v65[0]) = *v52 / 256;
    HIWORD(v65[0]) = v52[1] / 256;
    v53 = *(char *)(*((uint32_t *)v27 + 328) + 5895) + 2;
    if ( (__int16)(HIWORD(v64) - HIWORD(v65[0])) * (__int16)(HIWORD(v64) - HIWORD(v65[0]))
    + (__int16)(v64 - LOWORD(v65[0])) * (__int16)(v64 - LOWORD(v65[0])) < 4 * v53 * v53 )
    v54 = *(uint32_t *)(v51 + 1312);
    if ( *(uint8_t *)(v54 + 5831) )
    v55 = *(uint8_t *)(v51 + 1772);
    *(uint8_t *)(v51 + 1771) = 1;
    if ( v55 == *(uint8_t *)(v54 + 5895) )
    *(uint8_t *)(v51 + 1772) = 0;
    *(uint8_t *)(v51 + 128) = 1;
    v56 = *(uint8_t *)(v51 + 1772);
    if ( v56 )
    *(uint8_t *)(v51 + 1772) = v56 - 1;
    result = g_BuildingProductionState;
    else
    *((uint8_t *)this + 1771) = 0;
    else if ( (uint8_t)result == *(uint8_t *)(*((uint32_t *)this + 328) + 5895) )
    *((uint8_t *)this + 1771) = 0;
    else
    *((uint8_t *)this + 1772) = result + 1;
    (*(void (__thiscall **)(int *, uint32_t))(*v28 + 24))(v28, 0);
    v32 = (int *)(*(int (__thiscall **)(int *, uint8_t *, int))(*v28 + 120))(v28, v67, 1);
    Draw::Ellipse(v28, v31, v31, *((char *)this + 1772), *v32, v32[1], v32[2], v32[3], v57);
    v61 = (uint8_t *)(*(int (__thiscall **)(int *, uint32_t))(*v28 + 92))(v28, 0);
    v33 = 0;
    LOWORD(v63[0]) = v64 - v31;
    result = v59;
    for ( HIWORD(v63[0]) = HIWORD(v64) - v31; v33 < v59; ++v33 )
    for ( k = 0; k < v59; ++k )
    v35 = *v61++ == 0;
    if ( !v35 )
    HIWORD(v62) = v33 + HIWORD(v63[0]);
    LOWORD(v62) = k + LOWORD(v63[0]);
    v69 = v62;
    v36 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v69);
    if ( !Cell::HasOccupierBit(v36, v60) )
    ((void (__stdcall *)(int))BuildingClass::checkOccupant)(v60);
    for ( m = (uint32_t *)v36[57]; m; m = (uint32_t *)m[12] )
    v38 = (*(int (__thiscall **)(uint32_t *))(*m + 44))(m);
    if ( v38 == 1 || v38 == 15 || v38 == 2 )
    (*(void (__thiscall **)(uint32_t *))(*m + 1056))(m);
    v39 = Cell::IsBridge(v36);
    if ( v39 )
    if ( *(uint32_t *)(v39[135] + 48) == v60 )
    v40 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v39 + 72))(v39, v67);
    if ( (uint8_t *)__PAIR32__(v40[1] / 256, *v40 / 256) == v69 )
    --*((uint8_t *)this + 1772);
    return (int)this;
    result = v59;
    return result;
}

// 0x004555D0
int  BuildingClass::IsPoweredActive(#377 *this)
{
    int result; // eax
    double PowerRatio; // st7
    bool v4; // c0
    char v5; // c2
    bool v6; // c3
    char v7; // fps^1
    int v8; // ebx
    int v9; // edi
    int v10; // edx
    if ( !*((uint8_t *)this + 1632) && *((int *)this + 415) < 2 )
    goto LABEL_20;
    result = *((uint32_t *)this + 321);
    if ( result > 0 )
    goto LABEL_20;
    result = *((uint32_t *)this + 27);
    if ( !result )
    goto LABEL_20;
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 5491) )
    if ( *(int *)(result + 3812) > 0 )
    PowerRatio = HouseClass::GetPowerRatio((int *)*((uint32_t *)this + 135));
    v4 = PowerRatio < 1.0;
    v5 = 0;
    v6 = PowerRatio == 1.0;
    BYTE1(result) = v7;
    if ( PowerRatio < 1.0 && *((int *)this + 415) < 2 )
    goto LABEL_20;
    v8 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v8 + 5492) )
    v9 = *((uint32_t *)this + 135);
    v10 = *(uint32_t *)(v9 + 676);
    result = *(uint32_t *)(v9 + 684);
    if ( v10 != -1 )
    if ( (int)CurrentFrame - v10 >= result )
    LABEL_14:
    if ( *(uint8_t *)(v9 + 22395) )
    goto LABEL_20;
    goto LABEL_15;
    result -= (int)CurrentFrame - v10;
    if ( result )
    goto LABEL_20;
    goto LABEL_14;
    LABEL_15:
    if ( !*(uint8_t *)(v8 + 5458) || *((uint8_t *)this + 1740) )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 18 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    if ( result != 19 )
    LOBYTE(result) = 1;
    return result;
    LABEL_20:
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::ScanCircleForUnits(#377 *this)
{
    int v1; // ebp
    int v2; // eax
    int v3; // esi
    uint32_t *v4; // eax
    int v5; // edi
    int result; // eax
    int v7; // ebx
    uint32_t *v8; // esi
    uint32_t *j; // esi
    int v10; // eax
    int v11; // [esp+Ch] [ebp-24h]
    int v12; // [esp+Ch] [ebp-24h]
    int i; // [esp+10h] [ebp-20h]
    int v14; // [esp+14h] [ebp-1Ch] BYREF
    int v15; // [esp+18h] [ebp-18h]
    int v16; // [esp+1Ch] [ebp-14h]
    int v17; // [esp+20h] [ebp-10h]
    uint8_t v18[12]; // [esp+24h] [ebp-Ch] BYREF
    int v19; // [esp+34h] [ebp+4h]
    v1 = *(char *)(*((uint32_t *)this + 328) + 5895);
    v2 = *(uint32_t *)(*((uint32_t *)this + 135) + 48);
    v3 = v1 * v1;
    v16 = v1 * v1;
    v15 = v2;
    if ( v19 == g_TerrainTypeTable )
    v4 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v18);
    LOWORD(v11) = *v4 / 256;
    HIWORD(v11) = v4[1] / 256;
    v19 = v11;
    v5 = -v1;
    result = -v1;
    v17 = -v1;
    for ( i = -v1; result < v1; i = result )
    if ( v5 < v1 )
    v7 = result * result;
    HIWORD(v12) = result + HIWORD(v19);
    do
    LOWORD(v12) = v5 + v19;
    v14 = v12;
    if ( v7 + v5 * v5 < v3 )
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14);
    FootClass::updateLocomotion(v15);
    for ( j = (uint32_t *)v8[57]; j; j = (uint32_t *)j[12] )
    v10 = (*(int (__thiscall **)(uint32_t *))(*j + 44))(j);
    if ( v10 == 1 || v10 == 15 || v10 == 2 )
    (*(void (__thiscall **)(uint32_t *))(*j + 1056))(j);
    result = i;
    v3 = v16;
    ++v5;
    while ( v5 < v1 );
    v5 = v17;
    ++result;
    return result;
}

int  BuildingClass::ScanCircleForUnits2(#377 *this)
{
    int result; // eax
    int v3; // ebp
    uint32_t *v4; // eax
    int v5; // edi
    int v6; // ebx
    uint32_t *v7; // esi
    uint32_t *j; // esi
    int v9; // eax
    int v10; // [esp+Ch] [ebp-24h]
    int v11; // [esp+Ch] [ebp-24h]
    int i; // [esp+10h] [ebp-20h]
    int v13; // [esp+18h] [ebp-18h] BYREF
    int v14; // [esp+1Ch] [ebp-14h]
    int v15; // [esp+20h] [ebp-10h]
    uint8_t v16[12]; // [esp+24h] [ebp-Ch] BYREF
    int v17; // [esp+34h] [ebp+4h]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this);
    if ( (uint8_t)result )
    v3 = *(uint32_t *)(*((uint32_t *)this + 328) + 1520);
    v14 = *(uint32_t *)(*((uint32_t *)this + 135) + 48);
    if ( v17 == g_TerrainTypeTable )
    v4 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v16);
    LOWORD(v10) = *v4 / 256;
    HIWORD(v10) = v4[1] / 256;
    v17 = v10;
    v5 = -v3;
    result = -v3;
    v15 = -v3;
    for ( i = -v3; result < v3; i = result )
    if ( v5 < v3 )
    v6 = result * result;
    HIWORD(v11) = result + HIWORD(v17);
    do
    LOWORD(v11) = v5 + v17;
    v13 = v11;
    if ( v6 + v5 * v5 < v3 * v3 )
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    FootClass::checkTerrainSpeed(v14);
    for ( j = (uint32_t *)v7[57]; j; j = (uint32_t *)j[12] )
    v9 = (*(int (__thiscall **)(uint32_t *))(*j + 44))(j);
    if ( v9 == 1 || v9 == 15 || v9 == 2 )
    (*(void (__thiscall **)(uint32_t *))(*j + 1056))(j);
    result = i;
    ++v5;
    while ( v5 < v3 );
    v5 = v15;
    ++result;
    return result;
}

// 0x00455980
int  BuildingClass::ScanCircleForTiberium(#377 *this)
{
    int v1; // ebx
    int result; // eax
    uint32_t *v3; // eax
    int v4; // esi
    int v5; // ebp
    int v6; // [esp+Ch] [ebp-20h]
    int v7; // [esp+Ch] [ebp-20h]
    int v8; // [esp+14h] [ebp-18h] BYREF
    int v9; // [esp+18h] [ebp-14h]
    int i; // [esp+1Ch] [ebp-10h]
    uint8_t v11[12]; // [esp+20h] [ebp-Ch] BYREF
    int v12; // [esp+30h] [ebp+4h]
    v1 = *(uint32_t *)(*((uint32_t *)this + 328) + 1524);
    result = *(uint32_t *)(*((uint32_t *)this + 135) + 48);
    v9 = result;
    if ( (_WORD)v12 == (_WORD)g_TerrainTypeTable )
    LOWORD(result) = HIWORD(v12);
    if ( HIWORD(v12) == HIWORD(g_TerrainTypeTable) )
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v11);
    LOWORD(v6) = *v3 / 256;
    result = v3[1] / 256;
    HIWORD(v6) = result;
    v12 = v6;
    v4 = -v1;
    v5 = -v1;
    for ( i = -v1; v5 < v1; ++v5 )
    if ( v4 < v1 )
    do
    LOWORD(v7) = v4 + v12;
    HIWORD(v7) = HIWORD(v12) + v5;
    v8 = v7;
    result = v1 * v1;
    if ( v5 * v5 + v4 * v4 < v1 * v1 )
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8);
    result = BuildingClass::evaulateDefense(v9);
    ++v4;
    while ( v4 < v1 );
    v4 = i;
    return result;
}

// 0x00455A80
int  BuildingClass::UpdateTerrainEffect(#377 *this)
{
    int result; // eax
    int v3; // ebx
    uint32_t *v4; // eax
    int v5; // esi
    int v6; // ebp
    int v7; // [esp+Ch] [ebp-20h]
    int v8; // [esp+Ch] [ebp-20h]
    int v9; // [esp+14h] [ebp-18h] BYREF
    int v10; // [esp+18h] [ebp-14h]
    int i; // [esp+1Ch] [ebp-10h]
    uint8_t v12[12]; // [esp+20h] [ebp-Ch] BYREF
    int v13; // [esp+30h] [ebp+4h]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this);
    if ( (uint8_t)result )
    v3 = *(uint32_t *)(*((uint32_t *)this + 328) + 1524);
    result = *(uint32_t *)(*((uint32_t *)this + 135) + 48);
    v10 = result;
    if ( v13 == g_TerrainTypeTable )
    v4 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v12);
    LOWORD(v7) = *v4 / 256;
    result = v4[1] / 256;
    HIWORD(v7) = result;
    v13 = v7;
    v5 = -v3;
    v6 = -v3;
    for ( i = -v3; v6 < v3; ++v6 )
    if ( v5 < v3 )
    do
    LOWORD(v8) = v5 + v13;
    result = v3 * v3;
    HIWORD(v8) = HIWORD(v13) + v6;
    v9 = v8;
    if ( v6 * v6 + v5 * v5 < v3 * v3 )
    CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9);
    result = BuildingClass::processGarrison(v10);
    ++v5;
    while ( v5 < v3 );
    v5 = i;
    return result;
}

int  BuildingClass::GetFWFlags(uint32_t *this)
{
    uint32_t *v1; // ecx
    int v2; // ebx
    uint32_t *v3; // edi
    signed int i; // esi
    uint32_t *NeighbourContent; // eax
    uint32_t *v6; // eax
    uint32_t v8[3]; // [esp+Ch] [ebp-Ch] BYREF
    v1 = this + 39;
    v2 = 0;
    v8[0] = *v1;
    v8[1] = v1[1];
    v8[2] = v1[2];
    v3 = Coord::To_Cell(&MapClass_Instance, v8);
    for ( i = 0; i < 8; i += 2 )
    NeighbourContent = Cell::GetNeighbourContent(v3, i);
    v6 = Cell::IsBridge(NeighbourContent);
    if ( v6 && *(uint8_t *)(v6[328] + 5824) && !*((uint8_t *)v6 + 129) && *((uint8_t *)v6 + 144) )
    v2 |= 1 << (i >> 1);
    return v2;
}

int  BuildingClass::GetScreenCoords(#377 *this)
{
    int *v2; // eax
    bool v3; // zf
    int v4; // edx
    int v5; // edi
    char *v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // esi
    int v10; // edi
    uint32_t *v11; // eax
    int v12; // edi
    int v13; // eax
    uint32_t *v14; // esi
    struct IPersistStreamVtbl *lpVtbl; // [esp+10h] [ebp-34h]
    struct IPersistStreamVtbl *v17; // [esp+14h] [ebp-30h]
    int v18; // [esp+18h] [ebp-2Ch] BYREF
    int v19; // [esp+1Ch] [ebp-28h]
    int v20; // [esp+20h] [ebp-24h]
    int v21; // [esp+24h] [ebp-20h]
    int v22; // [esp+28h] [ebp-1Ch] BYREF
    int v23; // [esp+2Ch] [ebp-18h]
    int v24; // [esp+30h] [ebp-14h]
    uint8_t v25[16]; // [esp+34h] [ebp-10h] BYREF
    uint32_t *v26; // [esp+48h] [ebp+4h]
    v2 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 172))(this, &v18);
    v22 = *v2;
    v3 = v22 == *((uint32_t *)this + 403);
    v4 = v2[1];
    v23 = v4;
    v5 = v2[2];
    v24 = v5;
    lpVtbl = TacticalClass_Instance[44].lpVtbl;
    v17 = TacticalClass_Instance[45].lpVtbl;
    if ( v3
    && v4 == *((uint32_t *)this + 404)
    && v5 == *((uint32_t *)this + 405)
    && TacticalClass_Instance[44].lpVtbl == (struct IPersistStreamVtbl *)*((uint32_t *)this + 406)
    && TacticalClass_Instance[45].lpVtbl == (struct IPersistStreamVtbl *)*((uint32_t *)this + 407) )
    v6 = (char *)this + 1596;
    v7 = *((uint32_t *)this + 399);
    v8 = *((uint32_t *)this + 400);
    v9 = *((uint32_t *)this + 401);
    v10 = *((uint32_t *)v6 + 3);
    else
    Coord::To_Screen(TacticalClass_Instance, &v22, &v18);
    v11 = (uint32_t *)CalculateBuildingFoundationBounds(v25);
    v7 = v18 + *v11;
    v8 = v19 + v11[1];
    v12 = v11[2];
    v13 = v11[3];
    *((uint32_t *)this + 403) = v22;
    v20 = v12;
    *((uint32_t *)this + 404) = v23;
    *((uint32_t *)this + 405) = v24;
    *((uint32_t *)this + 406) = lpVtbl;
    *((uint32_t *)this + 407) = v17;
    v14 = (uint32_t *)((char *)this + 1596);
    v19 = v8;
    v21 = v13;
    *v14 = v7;
    v14[1] = v8;
    v14[2] = v12;
    v10 = v13;
    v14[3] = v13;
    v9 = v20;
    *v26 = v7;
    v26[1] = v8;
    v26[2] = v9;
    v26[3] = v10;
    return (int)v26;
}

int  BuildingClass::AssignDestination_SyncLog(#377 *this)
{
    int result; // eax
    int v3; // [esp+8h] [ebp+4h]
    int v4; // [esp+Ch] [ebp+8h]
    if ( *((uint32_t *)this + 43) != 19 )
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 644))(this)
    || *(uint8_t *)(*((uint32_t *)this + 328) + 5817) )
    TechnoClass::SetFocus(this, v3);
    return IPersistStream::Stub(v3, v4);
    return result;
}

int  BuildingClass::_vt161(#377 *this)
{
    int result; // eax
    int v2; // ecx
    result = *((uint32_t *)this + 328);
    v2 = *(uint32_t *)(result + 3768);
    LOBYTE(result) = v2 == 40 || v2 == 16 || *(uint8_t *)(result + 5804) || *(uint8_t *)(result + 5801);
    return result;
}

int  BuildingClass::_vt293(#377 *this)
{
    char *Field; // ebx
    int v3; // edi
    int result; // eax
    Field = Diplomacy::GetField((char *)&MapClass_Instance, *((uint32_t *)this + 328));
    v3 = 0;
    result = *((uint32_t *)Field + 4);
    if ( result > 0 )
    do
    BuildingClass::ProcessFogCellOccupancy(
    (int)&MapClass_Instance,
    (int)this,
    *(uint32_t *)(*((uint32_t *)Field + 1) + 8 * v3) + *((uint32_t *)this + 130),
    *((uint32_t *)this + 131) + *(uint32_t *)(*((uint32_t *)Field + 1) + 8 * v3 + 4));
    result = *((uint32_t *)Field + 4);
    ++v3;
    while ( v3 < result );
    *((uint8_t *)this + 1059) = 1;
    return result;
}

int  BuildingClass::_vt294(#377 *this)
{
    char *Field; // ebp
    int v3; // edi
    int result; // eax
    Field = Diplomacy::GetField((char *)&MapClass_Instance, *((uint32_t *)this + 328));
    v3 = 0;
    result = *((uint32_t *)Field + 4);
    if ( result > 0 )
    do
    BuildingClass::RemoveGapCellCoverage(
    (int)&MapClass_Instance,
    (int)this,
    *(uint32_t *)(*((uint32_t *)Field + 1) + 8 * v3) + *((uint32_t *)this + 130),
    *((uint32_t *)this + 131) + *(uint32_t *)(*((uint32_t *)Field + 1) + 8 * v3 + 4));
    result = *((uint32_t *)Field + 4);
    ++v3;
    while ( v3 < result );
    *((uint8_t *)this + 1059) = 0;
    return result;
}

int  BuildingClass::_vt295(#377 *this)
{
    char *Field; // ebx
    int v3; // esi
    int result; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // edx
    int v8; // ecx
    uint32_t v9[2]; // [esp+Ch] [ebp-8h] BYREF
    Field = Diplomacy::GetField((char *)&MapClass_Instance, *((uint32_t *)this + 328));
    v3 = 0;
    result = *((uint32_t *)Field + 4);
    if ( result > 0 )
    do
    v5 = *((uint32_t *)Field + 1);
    v6 = *(uint32_t *)(v5 + 8 * v3) + *((uint32_t *)this + 130);
    v7 = *((uint32_t *)this + 131);
    v8 = *(uint32_t *)(v5 + 8 * v3 + 4);
    v9[0] = v6;
    v9[1] = v7 + v8;
    FogOfWar::RevealCell((int)&MapClass_Instance, v9);
    result = *((uint32_t *)Field + 4);
    ++v3;
    while ( v3 < result );
    return result;
}

// 0x004566B0
int  BuildingClass::GetPowerFrame(int this)
{
    int v2; // ecx
    int result; // eax
    uint32_t *updated; // edi
    int v6; // eax
    v2 = *(uint32_t *)(this + 1312);
    result = *(uint32_t *)(v2 + 5900);
    if ( result <= 0 )
    if ( *(uint8_t *)(v2 + 3281) )
    if ( *(uint8_t *)(this + 616) )
    return *(char *)(v2 + 3283);
    else
    return *(char *)(v2 + 3282);
    else if ( *(uint8_t *)(v2 + 5832) || *(uint8_t *)(v2 + 5831) )
    return *(char *)(v2 + 5895);
    else
    updated = (uint32_t *)TechnoClass::UpdatePowered((void*377 *)this);
    if ( IsNonNullPtr(updated) && (v6 = *(uint32_t *)(*updated + 180), v6 > 0) )
    return v6 / 256;
    else
    return 0;
    return result;
}

// 0x00456750
int  BuildingClass::DrawDeployCircle(#377 *this)
{
    int result; // eax
    int v3; // ecx
    DWORD Time; // eax
    char v5; // ecx^3
    int v6; // edi
    int *v7; // eax
    double v8; // st7
    int v9; // ecx
    int *v10; // eax
    int v11; // ecx
    int *v12; // eax
    int v13; // [esp+0h] [ebp-2Ch]
    int v14; // [esp+0h] [ebp-2Ch]
    int v15; // [esp+0h] [ebp-2Ch]
    float v16; // [esp+4h] [ebp-28h]
    float v17; // [esp+4h] [ebp-28h]
    float v18; // [esp+4h] [ebp-28h]
    int v19; // [esp+18h] [ebp-14h]
    int v20[3]; // [esp+20h] [ebp-Ch] BYREF
    int v21; // [esp+30h] [ebp+4h] BYREF
    result = BuildingClass::GetPowerFrame((int)this);
    v19 = result;
    if ( result > 0 )
    LOBYTE(result) = *((uint8_t *)this + 1632);
    if ( (uint8_t)result )
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5896) )
    if ( (byte_89C838 & 1) == 0 )
    byte_89C800 = -1;
    byte_89C838 |= 1u;
    byte_89C801 = -1;
    byte_89C802 = -1;
    atexit(nullsub_103);
    v3 = *((uint32_t *)this + 135) + 22265;
    LOWORD(v21) = *(_WORD *)v3;
    BYTE2(v21) = *(uint8_t *)(v3 + 2);
    Time = timeGetTime();
    v6 = (Time >> 1) & 0x3FF;
    if ( ((Time >> 1) & 0x200) == 0 )
    if ( ((Time >> 1) & 0x100) == 0 )
    Color::Lerp((unsigned __int8 *)&v21, ~(Time >> 1), (unsigned __int8 *)&byte_89C800);
    v16 = (float)v19;
    HIBYTE(v13) = v5;
    LOWORD(v13) = v21;
    BYTE2(v13) = BYTE2(v21);
    v7 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, v20);
    DrawTechnoDeployCircle(0, 0, *v7, v7[1], v7[2], v13, v16, 0, 1);
    v8 = Math::Sqrt(2.0);
    result = (v6 * (unsigned int)Math::RoundToInt(((double)v19 + 0.5) / v8 * 60.0)) >> 10;
    if ( (unsigned int)result > 0x20 )
    v9 = *((uint32_t *)this + 135);
    v17 = (float)(unsigned int)result;
    v14 = v9 + 22265;
    LOWORD(v14) = *(_WORD *)(v9 + 22265);
    BYTE2(v14) = *(uint8_t *)(v9 + 22267);
    v10 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, v20);
    LOBYTE(result) = DrawTechnoDeployCircle(0, 0, *v10, v10[1], v10[2], v14, v17, 1, 1);
    else
    v11 = *((uint32_t *)this + 135);
    v18 = (float)v19;
    v15 = v11 + 22265;
    LOWORD(v15) = *(_WORD *)(v11 + 22265);
    BYTE2(v15) = *(uint8_t *)(v11 + 22267);
    v12 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, v20);
    LOBYTE(result) = DrawTechnoDeployCircle(v21, 1, *v12, v12[1], v12[2], v15, v18, 0, 1);
    return result;
}

int  BuildingClass::vt_82_(#377 *this)
{
    int v2; // eax
    int v3; // edi
    void*377 *v4; // eax
    uint32_t *v5; // eax
    int v6; // ecx
    int v7; // ebx
    char *v8; // ecx
    int v9; // ebp
    bool v10; // zf
    int v11; // ebx
    int *v12; // ecx
    int v13; // esi
    int result; // eax
    int v15; // [esp+10h] [ebp-Ch]
    int v16; // [esp+14h] [ebp-8h]
    int v17; // [esp+20h] [ebp+4h]
    uint32_t *v18; // [esp+20h] [ebp+4h]
    if ( v17 )
    *((uint8_t *)this + 128) = 1;
    TechnoClass::SetTargetIfAllowed(this, v17);
    v16 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 484))(this);
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this);
    v3 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1124))(this, *(__int16 *)(v2 + 266));
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 352))(this)
    || *((uint32_t *)this + 165)
    && (this ? (v4 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 ? this : 0) : (v4 = 0),
    *(void*377 **)(*((uint32_t *)this + 165) + 80) == v4) )
    LOWORD(v3) = Techno::StartInvulnerability(v3);
    *((_WORD *)this + 896) = v3;
    v18 = (uint32_t *)((char *)this + 1372);
    v15 = 21;
    do
    v5 = (uint32_t *)*v18;
    if ( *v18 )
    v6 = v5[50];
    if ( v6 && *(uint8_t *)(v6 + 860) )
    v5[53] = v16;
    v5[63] = (unsigned __int16)v3;
    v7 = *((char *)this + 1773);
    if ( v7 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)this + 104))(this, 0, 0) == 5 )
    LOBYTE(v7) = 16;
    v8 = (char *)this + 1372;
    v9 = 21;
    do
    if ( *(uint32_t *)v8 )
    *(uint8_t *)(*(uint32_t *)v8 + 376) = v7;
    v8 += 4;
    --v9;
    while ( v9 );
    v10 = v15 == 1;
    ++v18;
    --v15;
    while ( !v10 );
    v11 = *((char *)this + 1773);
    if ( v11 == 15 && (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)this + 104))(this, 0, 0) == 5 )
    LOBYTE(v11) = 16;
    v12 = (int *)((char *)this + 1372);
    v13 = 21;
    do
    result = *v12;
    if ( *v12 )
    *(uint8_t *)(result + 376) = v11;
    ++v12;
    --v13;
    while ( v13 );
    return result;
}

int  BuildingClass::_vt281(#377 *this)
{
    int result; // eax
    int v2; // [esp+4h] [ebp+4h]
    result = v2;
    if ( (*((uint32_t *)this + 60) & 2) == 2 )
    if ( v2 <= 1500 )
    return v2 + 500;
    else
    return v2 - 500;
    return result;
}

int  BuildingClass::IsCellVisibleToPlayer(#377 *this)
{
    int result; // eax
    uint32_t *v3; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // esi
    int v7; // ebx
    bool v8; // bl
    int v9; // [esp+8h] [ebp-20h]
    int v10; // [esp+Ch] [ebp-1Ch] BYREF
    uint32_t v11[3]; // [esp+10h] [ebp-18h] BYREF
    uint32_t v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
    uint32_t *v13; // [esp+2Ch] [ebp+4h]
    result = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(result + 3226) || *((uint8_t *)this + 129) )
    goto LABEL_22;
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    LOBYTE(result) = *((uint8_t *)this + 1051) != 0;
    return result;
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 72))(this, v12);
    LOWORD(v9) = *v3 / 256;
    HIWORD(v9) = v3[1] / 256;
    v10 = v9;
    if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v10, 1) )
    goto LABEL_22;
    v4 = (BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) << 8) - 256;
    v5 = (BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) << 8) - 256;
    v11[0] = *((uint32_t *)this + 39);
    v11[1] = *((uint32_t *)this + 40);
    v11[2] = *((uint32_t *)this + 41);
    v8 = 0;
    if ( Cell::IsPassable(v11) )
    v6 = *((uint32_t *)this + 41);
    v7 = *((uint32_t *)this + 40) + v4;
    v12[0] = v5 + *((uint32_t *)this + 39);
    v12[1] = v7;
    v12[2] = v6;
    if ( Cell::IsPassable(v12) )
    if ( g_hWnd )
    v8 = 1;
    result = *((uint32_t *)this + 136);
    if ( result != 2 && *((uint8_t *)this + 1773) != 15 && !*((uint8_t *)this + 1767) && !v8 )
    LOBYTE(result) = 1;
    return result;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 808))(this);
    if ( !(uint8_t)result )
    LABEL_22:
    LOBYTE(result) = 0;
    else
    result = House::IsAlliedWith(HouseClass_Player, *((void*375 **)this + 135));
    if ( !(uint8_t)result && !*((uint8_t *)this + 1767) && !v8 )
    *v13 = 1;
    LOBYTE(result) = 1;
    return result;
}

void  BuildingClass::Infiltrate(#375 **this, #375 *a2)
{
    void*375 *v3; // edi
    void*375 *v4; // ecx
    int *v5; // eax
    int v6; // ecx
    int v7; // esi
    int v8; // eax
    uint32_t *v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // esi
    int v13; // ecx
    char v14; // [esp+Bh] [ebp-1h]
    v3 = a2;
    v4 = *(this + 135);
    v14 = 0;
    if ( v4 != a2 )
    if ( (unsigned __int8)House::IsHumanPlayer(v4) || (unsigned __int8)House::IsHumanPlayer(v3) )
    v5 = (int *)(*((int (__thiscall **)(void*375 **, void*375 **))*this + 110))(this, &a2);
    if ( CreateTriggerClassIfFarEnough(9, *v5, *v5) )
    v14 = 1;
    v6 = (int)*(this + 328);
    if ( *(uint8_t *)(v6 + 5796) )
    HouseClass::ReshroudMap(*(this + 135));
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && !*((uint8_t *)*(this + 135) + 22394) && v14 )
    VoxClass::FindAndPlay(aEvaRadarsabota, -1);
    if ( (unsigned __int8)House::IsHumanPlayer(v3) && !*((uint8_t *)*(this + 135) + 22394) )
    if ( v14 )
    VoxClass::FindAndPlay(aEvaBuildinginf, -1);
    goto LABEL_64;
    if ( *(int *)(v6 + 3808) > 0 )
    HouseClass::CreatePowerOutage((int)*(this + 135), HIDWORD(RulesClass_Instance->BarracksRatio));
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
    VoxClass::FindAndPlay(aEvaPowersabota, -1);
    else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
    VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
    VoxClass::FindAndPlay(aEvaEnemybasepo, -1);
    goto LABEL_64;
    v7 = RulesClass_Instance->OnFire[3];
    v8 = 0;
    if ( v7 <= 0 )
    LABEL_26:
    v10 = *(uint32_t *)(v6 + 5872);
    if ( v10 != -1 )
    SuperClass::Reset(*(uint32_t *)(*((uint32_t *)*(this + 135) + 150) + 4 * v10));
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) || (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
    VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
    goto LABEL_64;
    if ( *(int *)(v6 + 2048) > 0 )
    a2 = (void*375 *)(*(int (__stdcall **)(int))(*((uint32_t *)*(this + 135) + 9) + 24))((int)*(this + 135) + 36);
    v12 = Math::RoundToInt((double)(int)a2 * *(float *)&RulesClass_Instance->BarracksLimit);
    HouseClass::ProcessPowerDrain((int)*(this + 135), v12);
    HouseClass::AddPower(v3, v12);
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
    VoxClass::FindAndPlay(aEvaCashstolen, -1);
    if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 )
    VoxClass::FindAndPlay(aEvaBuildinginf_1, -1);
    goto LABEL_64;
    v13 = *(uint32_t *)(v6 + 3768);
    if ( v13 != 40 )
    if ( v13 != 16 )
    goto LABEL_64;
    *((uint8_t *)v3 + 703) = 1;
    *((uint8_t *)v3 + 508) = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(v3) )
    byte_884B8E = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
    VoxClass::FindAndPlay(aEvaTechnologys, -1);
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 )
    goto LABEL_64;
    LABEL_63:
    VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1);
    VoxClass::FindAndPlay(aEvaNewtechnolo, -1);
    LABEL_64:
    (*((void (__thiscall **)(void*375 **, int))*this + 73))(this, 2);
    return;
    *((uint8_t *)v3 + 704) = 1;
    *((uint8_t *)v3 + 508) = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(v3) )
    byte_884B8E = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
    goto LABEL_51;
    else
    v9 = (uint32_t *)RulesClass_Instance->OnFire[0];
    while ( *v9 != v6 )
    ++v8;
    ++v9;
    if ( v8 >= v7 )
    goto LABEL_26;
    v11 = *(uint32_t *)(v6 + 1744);
    if ( v11 )
    if ( v11 == 1 )
    *((uint8_t *)v3 + 701) = 1;
    else
    *((uint8_t *)v3 + 700) = 1;
    else
    *((uint8_t *)v3 + 702) = 1;
    *((uint8_t *)v3 + 508) = 1;
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135)) && v14 )
    LABEL_51:
    VoxClass::FindAndPlay(aEvaTechnologys, -1);
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 )
    goto LABEL_64;
    goto LABEL_63;
}

int  BuildingClass::IsFactorySelectable(#377 *this)
{
    return BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(*((uint32_t *)this + 328));
}

int  BuildingClass::SWAvailable(uint32_t *this)
{
    int v2; // eax
    int v3; // eax
    v2 = *(uint32_t *)(*(this + 328) + 5872);
    if ( v2 == -1 )
    return *(uint32_t *)(*(this + 328) + 5872);
    v3 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v2) + 40) + 200);
    if ( !v3 || DynamicVector::GetOrGrow((uint32_t *)(*(this + 135) + 21840), *(uint32_t *)(v3 + 3576)) )
    return *(uint32_t *)(*(this + 328) + 5872);
    else
    return -1;
}

int  BuildingClass::SW2Available(uint32_t *this)
{
    int v2; // eax
    int v3; // eax
    v2 = *(uint32_t *)(*(this + 328) + 5876);
    if ( v2 == -1 )
    return *(uint32_t *)(*(this + 328) + 5876);
    v3 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v2) + 40) + 200);
    if ( !v3 || DynamicVector::GetOrGrow((uint32_t *)(*(this + 135) + 21840), *(uint32_t *)(v3 + 3576)) )
    return *(uint32_t *)(*(this + 328) + 5876);
    else
    return -1;
}

int  BuildingClass::_vt184(#377 *this)
{
    int result; // eax
    int i; // edi
    int v4; // esi
    uint32_t *v5; // eax
    uint32_t *v6; // eax
    void*377 *v7; // eax
    void*377 *v8; // ecx
    uint8_t v9[12]; // [esp+8h] [ebp-Ch] BYREF
    result = g_BuildingClass_Count;
    for ( i = 0; i < g_BuildingClass_Count; ++i )
    v4 = *((uint32_t *)g_InfantryClassLimit + i);
    v5 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *, uint32_t))(*(uint32_t *)v4 + 76))(v4, v9, 0);
    v6 = Coord::To_Cell(&MapClass_Instance, v5);
    v7 = (void*377 *)Cell::IsBridge(v6);
    if ( *(uint8_t *)(v4 + 144) )
    if ( v7 )
    if ( v7 == this )
    v8 = *(void*377 **)(v4 + 1444);
    if ( !v8 || v8 == v7 )
    (*(void (__thiscall **)(int, int *, int, int))(*(uint32_t *)v4 + 372))(v4, &g_BuildingClassPool, 1, 1);
    result = g_BuildingClass_Count;
    return result;
}

int  BuildingClass::vt_168_(#377 *this)
{
    int result; // eax
    int *v3; // eax
    uint32_t *v4; // ecx
    int FoundationWidth; // eax
    int v6; // ecx
    int v7; // ebx
    int v8; // edi
    __int16 v9; // si
    __int16 v10; // di
    __int16 v11; // si
    uint32_t *v12; // eax
    void*377 *ClosestObject; // eax
    uint32_t *v14; // eax
    int v15; // [esp+10h] [ebp-30h]
    int v16; // [esp+14h] [ebp-2Ch]
    int v17; // [esp+18h] [ebp-28h]
    int v18; // [esp+1Ch] [ebp-24h]
    int v19; // [esp+20h] [ebp-20h] BYREF
    int v20; // [esp+24h] [ebp-1Ch] BYREF
    int v21; // [esp+28h] [ebp-18h]
    int v22; // [esp+2Ch] [ebp-14h] BYREF
    int v23; // [esp+30h] [ebp-10h]
    uint32_t v24[2]; // [esp+38h] [ebp-8h] BYREF
    result = TechnoClass::ShouldBeCloaked();
    if ( (uint8_t)result )
    v3 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v22);
    v4 = (uint32_t *)*((uint32_t *)this + 328);
    v23 = *v3;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4);
    v6 = *((uint32_t *)this + 328);
    v7 = FoundationWidth;
    v22 = FoundationWidth;
    result = BuildingTypeClass::GetFoundationHeight(v6, 0);
    v8 = -1;
    v21 = result;
    v18 = -1;
    if ( v7 < -1 )
    LABEL_13:
    LOBYTE(result) = 1;
    return result;
    while ( 1 )
    v9 = -1;
    v17 = -1;
    if ( result >= -1 )
    break;
    LABEL_12:
    v18 = ++v8;
    if ( v8 > v7 )
    goto LABEL_13;
    v10 = v23 + v8;
    while ( 1 )
    v24[0] = 0;
    v24[1] = 0;
    v11 = HIWORD(v23) + v9;
    LOWORD(v15) = v10;
    HIWORD(v15) = v11;
    v19 = v15;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    ClosestObject = (void*377 *)Object::FindClosestObjectCell(v12, v24, 0, 0);
    if ( ClosestObject == this )
    LOWORD(v16) = v10;
    HIWORD(v16) = v11;
    v20 = v16;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20);
    ClosestObject = (void*377 *)WTFMode::FindObjectByType(v14, 0);
    if ( ClosestObject )
    if ( *((uint32_t *)ClosestObject + 135) != *((uint32_t *)this + 135) )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)ClosestObject + 132))(ClosestObject);
    if ( *(uint8_t *)(result + 3229) )
    break;
    result = v21;
    v9 = ++v17;
    if ( v17 > v21 )
    v7 = v22;
    v8 = v18;
    goto LABEL_12;
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt169(#377 *this)
{
    int result; // eax
    int *v3; // eax
    uint32_t *v4; // ecx
    int FoundationWidth; // eax
    int v6; // ecx
    int v7; // ebx
    int v8; // edi
    __int16 v9; // si
    __int16 v10; // di
    __int16 v11; // si
    uint32_t *v12; // eax
    void*377 *ClosestObjectCell; // eax
    uint32_t *v14; // eax
    int v15; // [esp+10h] [ebp-30h]
    int v16; // [esp+14h] [ebp-2Ch]
    int v17; // [esp+18h] [ebp-28h]
    int v18; // [esp+1Ch] [ebp-24h]
    int v19; // [esp+20h] [ebp-20h] BYREF
    int v20; // [esp+24h] [ebp-1Ch] BYREF
    int v21; // [esp+28h] [ebp-18h]
    int v22; // [esp+2Ch] [ebp-14h] BYREF
    int v23; // [esp+30h] [ebp-10h]
    uint32_t v24[2]; // [esp+38h] [ebp-8h] BYREF
    if ( !TechnoClass::ShouldNotBeCloaked((float *)this) )
    v3 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v22);
    v4 = (uint32_t *)*((uint32_t *)this + 328);
    v23 = *v3;
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4);
    v6 = *((uint32_t *)this + 328);
    v7 = FoundationWidth;
    v22 = FoundationWidth;
    result = BuildingTypeClass::GetFoundationHeight(v6, 0);
    v8 = -1;
    v21 = result;
    v18 = -1;
    if ( v7 < -1 )
    LABEL_13:
    LOBYTE(result) = 0;
    return result;
    while ( 1 )
    v9 = -1;
    v17 = -1;
    if ( result >= -1 )
    break;
    LABEL_12:
    v18 = ++v8;
    if ( v8 > v7 )
    goto LABEL_13;
    v10 = v23 + v8;
    while ( 1 )
    v24[0] = 0;
    v24[1] = 0;
    v11 = HIWORD(v23) + v9;
    LOWORD(v15) = v10;
    HIWORD(v15) = v11;
    v19 = v15;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    ClosestObjectCell = (void*377 *)Object::FindClosestObjectCell(v12, v24, 0, 0);
    if ( ClosestObjectCell == this )
    LOWORD(v16) = v10;
    HIWORD(v16) = v11;
    v20 = v16;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20);
    ClosestObjectCell = (void*377 *)WTFMode::FindObjectByType(v14, 0);
    if ( ClosestObjectCell )
    if ( *((uint32_t *)ClosestObjectCell + 135) != *((uint32_t *)this + 135) )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)ClosestObjectCell + 132))(ClosestObjectCell);
    if ( *(uint8_t *)(result + 3229) )
    break;
    result = v21;
    v9 = ++v17;
    if ( v17 > v21 )
    v7 = v22;
    v8 = v18;
    goto LABEL_12;
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::ApplyIronCurtain(#377 *this)
{
    wchar_t *v1; // eax
    int v3; // [esp+4h] [ebp-8h]
    int v4; // [esp+10h] [ebp+4h]
    int v5; // [esp+14h] [ebp+8h]
    char v6; // [esp+18h] [ebp+Ch]
    if ( *((uint8_t *)this + 1759) )
    *((uint8_t *)this + 1759) = 0;
    v1 = CurrentFrame;
    *((uint32_t *)this + 336) = 0;
    *((uint32_t *)this + 330) = v1;
    *((uint32_t *)this + 331) = v3;
    *((uint32_t *)this + 332) = 0;
    return TechnoClass::IronCurtain(v4, v5, v6);
}

int  BuildingClass::_vt258(#377 *this)
{
    return *((uint32_t *)this + 421);
}

int  BuildingClass::ProcessStructureAbandoned(int this)
{
    int result; // eax
    int v3; // edi
    void*375 *v4; // ebx
    int v5; // eax
    int v6; // ecx
    HouseClass *v7; // edx
    void*375 *v8; // ecx
    __int64 v9; // rax
    uint8_t v10[4]; // [esp+8h] [ebp-4h] BYREF
    result = *(uint32_t *)(this + 1312);
    if ( *(uint32_t *)(result + 1588) == -1 )
    if ( BuildingClass::IsHealthLow((int *)this) )
    BuildingClass::UnloadUnits((int *)this, 0, 0);
    v3 = HouseClass_Count;
    v4 = 0;
    v5 = HouseTypeClass::Find(g_INI_Key_Civilian);
    v6 = 0;
    if ( v3 > 0 )
    v7 = HouseClass_Array;
    while ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v7->gap0 + 52) + 188) != v5 )
    ++v6;
    v7 = (HouseClass *)((char *)v7 + 4);
    if ( v6 >= v3 )
    goto LABEL_10;
    v4 = *(void*375 **)&HouseClass_Array->gap0[4 * v6];
    LABEL_10:
    if ( !(*(int (__thiscall **)(int))(*(uint32_t *)this + 1032))(this) )
    v8 = *(void*375 **)(this + 540);
    if ( v8 != v4 )
    if ( (unsigned __int8)House::IsHumanPlayer(v8) )
    PlayVocClass(RulesClass_Instance->CrateUnitSound, 0x2000, 1.0, 0);
    v9 = ((__int64 (__thiscall *)(int, uint8_t *))*(uint32_t *)(*(uint32_t *)this + 440))(this, v10);
    if ( CreateTriggerClassIfFarEnough(15, SHIDWORD(v9), *(uint32_t *)v9) )
    VoxClass::FindAndPlay(aEvaStructureab, -1);
    PlayHealthDependentBuildingAnim((int *)this);
    (*(void (__thiscall **)(int, void*375 *, uint32_t))(*(uint32_t *)this + 980))(this, v4, 0);
    result = (*(int (__thiscall **)(int))(*(uint32_t *)this + 1032))(this);
    if ( result > 0 && *(void*375 **)(this + 540) == v4 )
    PlayHealthDependentBuildingAnim((int *)this);
    return (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)this + 980))(
    this,
    *(uint32_t *)(**(uint32_t **)(this + 1672) + 540),
    0);
    return result;
}

int  BuildingClass::_vt292(#377 *this)
{
    void*377 *v1; // esi
    int v2; // eax
    _WORD *v3; // ebp
    _WORD *v4; // eax
    __int16 v5; // dx
    uint32_t *v6; // edi
    uint8_t *v7; // esi
    int v8; // eax
    int i; // edi
    uint32_t *v10; // esi
    int j; // edi
    uint32_t *v12; // esi
    int result; // eax
    int k; // edi
    int *v15; // esi
    int v16; // eax
    int v17; // eax
    int *v18; // eax
    int v19; // ebx
    int v20; // eax
    int *v21; // [esp+0h] [ebp-44h]
    int v22; // [esp+4h] [ebp-40h]
    __int16 v23; // [esp+10h] [ebp-34h]
    __int16 v24; // [esp+12h] [ebp-32h]
    int v25; // [esp+14h] [ebp-30h] BYREF
    void*377 *v26; // [esp+18h] [ebp-2Ch] BYREF
    int v27; // [esp+1Ch] [ebp-28h] BYREF
    int v28; // [esp+20h] [ebp-24h] BYREF
    int v29; // [esp+24h] [ebp-20h] BYREF
    int v30; // [esp+28h] [ebp-1Ch] BYREF
    void **v31; // [esp+2Ch] [ebp-18h] BYREF
    void *Block; // [esp+30h] [ebp-14h]
    int v33; // [esp+34h] [ebp-10h]
    int v34; // [esp+38h] [ebp-Ch]
    int v35; // [esp+3Ch] [ebp-8h]
    int v36; // [esp+40h] [ebp-4h]
    uint32_t *v37; // [esp+48h] [ebp+4h]
    int v38; // [esp+4Ch] [ebp+8h]
    int v39; // [esp+50h] [ebp+Ch] BYREF
    int v40; // [esp+54h] [ebp+10h] BYREF
    v1 = this;
    v2 = *(uint32_t *)this;
    v26 = this;
    v3 = (_WORD *)(*(int (__stdcall **)(uint32_t))(v2 + 264))(0);
    v23 = *v37 / 256;
    v24 = v37[1] / 256;
    EventClass::resetEvent(&v31, 0, 0);
    v31 = &DynamicVectorClass<TechnoClass *>::`vftable';
    v36 = 10;
    v35 = 0;
    while ( *v3 != 0x7FFF || v3[1] != 0x7FFF )
    v4 = v3;
    v3 += 2;
    v5 = v24 + v4[1];
    LOWORD(v25) = v23 + *v4;
    HIWORD(v25) = v5;
    v27 = v25;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v27);
    if ( v6[17] != -1 )
    v6[17] = -1;
    *((uint8_t *)v6 + 286) = 0;
    v6[16] = 0;
    v7 = (uint8_t *)v6[57];
    if ( v7 )
    while ( (v7[20] & 1) != 0 && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v7 + 44))(v7) != 6 )
    if ( v35 < v33
    || (BYTE1(v34) || !v33)
    && v36 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v31[2])(&v31, v36 + v33, 0) )
    v8 = v35++;
    *((uint32_t *)Block + v8) = v7;
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)v7 + 212))(v7);
    v7 = (uint8_t *)v6[57];
    if ( !v7 )
    goto LABEL_2;
    for ( i = v35 - 1; i >= 0; --i )
    v10 = (uint32_t *)*((uint32_t *)Block + i);
    v28 = v10[39];
    v29 = v10[40];
    v30 = v10[41];
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *, int *, uint32_t))(*v10 + 216))(v10, &v28, 0) )
    (*(void (__thiscall **)(uint32_t *))(*v10 + 248))(v10);
    goto LABEL_28;
    LABEL_2:
    v1 = v26;
    if ( !(*(unsigned __int8 (__thiscall **)(void*377 *, uint32_t *, int))(*(uint32_t *)v1 + 216))(v1, v37, v38) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)v1 + 248))(v1);
    for ( j = v35 - 1; j >= 0; --j )
    v12 = (uint32_t *)*((uint32_t *)Block + j);
    v28 = v12[39];
    v29 = v12[40];
    v30 = v12[41];
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *, int *, uint32_t))(*v12 + 216))(v12, &v28, 0) )
    (*(void (__thiscall **)(uint32_t *))(*v12 + 248))(v12);
    LABEL_28:
    result = (int)Block;
    v35 = 0;
    if ( Block && BYTE1(v34) )
    __3_YAXPAX_Z(Block);
    LOBYTE(result) = 0;
    return result;
    for ( k = v35 - 1; k >= 0; --k )
    v15 = (int *)*((uint32_t *)Block + k);
    v40 = *(uint32_t *)(*(int (__thiscall **)(int *, int *, int *, int))(*v15 + 440))(v15, &v25, v21, v22);
    v16 = *v15;
    v39 = 0;
    v17 = (*(int (__thiscall **)(int *))(v16 + 132))(v15);
    v29 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v40,
    &v26,
    (__int16 *)&v40,
    *(uint32_t *)(v17 + 1660),
    -1,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (__int16 *)&v39,
    0,
    0);
    v18 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v29);
    v22 = 0;
    v19 = *v18;
    v21 = &v30;
    v28 = *v15;
    v20 = (*(int (__thiscall **)(int *))(v19 + 72))(v18);
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(v27 + 216))(v15, v20) )
    (*(void (__thiscall **)(int *))(*v15 + 248))(v15);
    result = (int)Block;
    v31 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block && BYTE1(v34) )
    __3_YAXPAX_Z(Block);
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::_vt171(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this);
    if ( !(uint8_t)result )
    return TechnoClass::HasActiveParam(this);
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::_vt256(#377 *this)
{
    int v1; // eax
    v1 = *((uint32_t *)this + 328);
    return *(uint8_t *)(v1 + 5499)
    && *(uint8_t *)(v1 + 5500)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0;
}

int  BuildingClass::_vt257(#377 *this)
{
    int FoundationHeight; // edi
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0);
    if ( BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) >= FoundationHeight )
    return BuildingTypeClass::GetFoundationHeight(*((uint32_t *)this + 328), 0) / 2;
    else
    return BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) / 2;
}

int  BuildingClass::_vt181(#377 *this)
{
    return *(uint32_t *)(*((uint32_t *)this + 328) + 5412);
}

int  BuildingClass::_vt182(#377 *this)
{
    return *(uint32_t *)(*((uint32_t *)this + 328) + 5416);
}

int  BuildingClass::_vt183(#377 *this)
{
    return *(uint32_t *)(*((uint32_t *)this + 328) + 5420);
}

// 0x00459900
int  BuildingClass::SpawnParticles(#377 *this)
{
    int result; // eax
    int v3; // ebp
    int v4; // ecx
    int v5; // edx
    void *v6; // eax
    int v7; // ebx
    int v8; // edi
    uint32_t *v9; // eax
    int *v10; // edx
    int v11; // ecx
    int v12; // edx
    void *v13; // eax
    int v14; // ebx
    int v15; // edi
    uint32_t *v16; // eax
    int *v17; // edx
    int v18; // ecx
    int v19; // edx
    void *v20; // eax
    int v21; // ebx
    int v22; // edi
    uint32_t *v23; // eax
    int *v24; // edx
    int v25; // ecx
    int v26; // edx
    void *v27; // eax
    int v28; // ebx
    int v29; // edi
    uint32_t *v30; // eax
    int v31; // [esp+10h] [ebp-1Ch]
    int v32; // [esp+14h] [ebp-18h] BYREF
    int v33; // [esp+18h] [ebp-14h]
    int v34; // [esp+1Ch] [ebp-10h]
    int v35; // [esp+20h] [ebp-Ch] BYREF
    int v36; // [esp+24h] [ebp-8h]
    int v37; // [esp+28h] [ebp-4h]
    result = *((uint32_t *)this + 328);
    v3 = *(uint32_t *)(result + 1908);
    if ( v3 )
    v31 = *(uint32_t *)(result + 5484);
    v32 = *(uint32_t *)(result + 1996);
    v4 = *(uint32_t *)(result + 2000);
    v33 = v4;
    v5 = *(uint32_t *)(result + 2004);
    v34 = v5;
    if ( (v32 != g_BuildingClassPool || v4 != dword_89C84C || v5 != dword_89C850)
    && !Coord3D::Equals(&v32, &dword_89C870) )
    v6 = __2_YAPAXI_Z(0x100u);
    if ( v6 )
    v7 = *((uint32_t *)this + 41);
    v8 = v33 + *((uint32_t *)this + 40);
    v35 = v32 + *((uint32_t *)this + 39);
    v36 = v8;
    v37 = v34 + v7;
    v9 = (uint32_t *)ParticleSystemClass::Constructor((int)v6, v3, &v35, 0, this, &g_BuildingClassPool, 0);
    else
    v9 = 0;
    ObjectClass::SetMember59(v9, v31);
    v10 = (int *)(*((uint32_t *)this + 328) + 2008);
    v32 = *v10;
    v11 = v10[1];
    v33 = v11;
    v12 = v10[2];
    v34 = v12;
    if ( (v32 != g_BuildingClassPool || v11 != dword_89C84C || v12 != dword_89C850)
    && !Coord3D::Equals(&v32, &dword_89C870) )
    v13 = __2_YAPAXI_Z(0x100u);
    if ( v13 )
    v14 = *((uint32_t *)this + 41);
    v15 = v33 + *((uint32_t *)this + 40);
    v35 = v32 + *((uint32_t *)this + 39);
    v36 = v15;
    v37 = v34 + v14;
    v16 = (uint32_t *)ParticleSystemClass::Constructor((int)v13, v3, &v35, 0, this, &g_BuildingClassPool, 0);
    else
    v16 = 0;
    ObjectClass::SetMember59(v16, v31);
    v17 = (int *)(*((uint32_t *)this + 328) + 2020);
    v32 = *v17;
    v18 = v17[1];
    v33 = v18;
    v19 = v17[2];
    v34 = v19;
    if ( (v32 != g_BuildingClassPool || v18 != dword_89C84C || v19 != dword_89C850)
    && !Coord3D::Equals(&v32, &dword_89C870) )
    v20 = __2_YAPAXI_Z(0x100u);
    if ( v20 )
    v21 = *((uint32_t *)this + 41);
    v22 = v33 + *((uint32_t *)this + 40);
    v35 = v32 + *((uint32_t *)this + 39);
    v36 = v22;
    v37 = v34 + v21;
    v23 = (uint32_t *)ParticleSystemClass::Constructor((int)v20, v3, &v35, 0, this, &g_BuildingClassPool, 0);
    else
    v23 = 0;
    ObjectClass::SetMember59(v23, v31);
    v24 = (int *)(*((uint32_t *)this + 328) + 2032);
    result = *v24;
    v32 = result;
    v25 = v24[1];
    v33 = v25;
    v26 = v24[2];
    v34 = v26;
    if ( result != g_BuildingClassPool || v25 != dword_89C84C || v26 != dword_89C850 )
    result = Coord3D::Equals(&v32, &dword_89C870);
    if ( !(uint8_t)result )
    v27 = __2_YAPAXI_Z(0x100u);
    if ( v27 )
    v28 = *((uint32_t *)this + 41);
    v29 = v33 + *((uint32_t *)this + 40);
    v35 = v32 + *((uint32_t *)this + 39);
    v36 = v29;
    v37 = v34 + v28;
    v30 = (uint32_t *)ParticleSystemClass::Constructor((int)v27, v3, &v35, 0, this, &g_BuildingClassPool, 0);
    return ObjectClass::SetMember59(v30, v31);
    else
    return ObjectClass::SetMember59(0, v31);
    return result;
}

// 0x00459C00
int  BuildingClass::IsMassSelectable(#377 *this)
{
    int result; // eax
    result = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(*((uint32_t *)this + 328));
    if ( (uint8_t)result )
    LOBYTE(result) = TechnoClass::CanMoveToCell(this);
    return result;
}

int  BuildingClass::_vt219(#377 *this)
{
    int v2; // ecx
    int v3; // esi
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int result; // eax
    v2 = *((uint32_t *)this + 134);
    if ( v2 && (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 44))(v2) == 11 )
    v3 = *((uint32_t *)this + 134);
    v4 = v3 ? ((*(int (__thiscall **)(uint32_t))(*(uint32_t *)v3 + 44))(*((uint32_t *)this + 134)) == 11 ? v3 : 0) : 0;
    if ( *(uint32_t *)(v4 + 236) == 5 )
    v5 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v5 + 1517) )
    if ( *(uint8_t *)(v5 + 1516) )
    v6 = *(uint32_t *)(v5 + 1404);
    if ( v6 != -1 )
    return (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 852))(this, v6);
    TechnoClass::PickAlternateTarget(this);
    return result;
}

// 0x00459D80
int  BuildingClass::StubReturnFalse(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt177(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 1;
    return result;
}

int  BuildingClass::_vt188(#377 *this)
{
    return 2;
}

int  BuildingClass::_vt189(#377 *this)
{
    uint32_t *v2; // [esp+4h] [ebp+4h]
    *v2 = g_TerrainTypeTable;
    return (int)v2;
}

int  BuildingClass::StubReturnFalse2(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

// 0x00459DF0
int  BuildingClass::StubReturnFalse3(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

// 0x00459E00
int  BuildingClass::StubReturnFalse4(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt209(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt210(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt211(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt224(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt247(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

// 0x00459E70
int  BuildingClass::Mission_Guard(#377 *this)
{
    return 1824;
}

// 0x00459E80
int  BuildingClass::Destroyed(#377 *this)
{
    uint32_t *v2; // [esp+8h] [ebp+8h]
    if ( !v2 )
    return -2147467261;
    *v2 = 237448646;
    v2[1] = 298949647;
    v2[2] = -1610610249;
    v2[3] = -777003740;
    return 0;
}

// 0x00459EC0
int  BuildingClass::Mission_Construction(#377 *this)
{
    return 6;
}

// 0x00459ED0
int  BuildingClass::GetTypeField60(#377 *this)
{
    return *(uint32_t *)(*((uint32_t *)this + 328) + 96);
}

// 0x00459EE0
int  BuildingClass::GetTypePtr(#377 *this)
{
    return *((uint32_t *)this + 328);
}

// 0x00459EF0
int  BuildingClass::GetBuildCoordsAdjusted(#377 *this)
{
    char *v1; // edx
    int v2; // eax
    int v3; // ecx
    int v4; // esi
    int v6; // edx
    uint32_t *v7; // [esp+Ch] [ebp+4h]
    v1 = (char *)this + 156;
    v2 = *((uint32_t *)this + 39);
    v3 = *((uint32_t *)this + 40);
    v4 = v2 - 128;
    v6 = *((uint32_t *)v1 + 2);
    *v7 = v4;
    v7[1] = v3 - 128;
    v7[2] = v6;
    return (int)v7;
}

int  BuildingClass::ScalarDtor(#377 *this)
{
    char v3; // [esp+8h] [ebp+4h]
    BuildingClass::Dtor((void **)this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}

void  BuildingClass::sub_459FF0(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  BuildingClass::sub_45A020(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  BuildingClass::sub_45A560(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  BuildingClass::sub_45A610(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * BuildingClass::sub_45AAB0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<InfantryClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x0045F160
char  BuildingClass::GetPlacementCoords(int *this, int *a2, uint32_t *a3)
{
    int v3; // eax
    int v4; // eax
    if ( *((uint8_t *)this + 5992) && a2 )
    v3 = *(this + 1341);
    if ( v3 )
    *a2 = v3;
    *a3 = 0;
    return 1;
    v4 = (*(int (__thiscall **)(int *))(*this + 156))(this);
    *a2 = v4;
    if ( v4 && *(__int16 *)(v4 + 6) / 2 > 3 )
    *a3 = 3;
    return 1;
    return 0;
}

void  BuildingClass::VisualizePlacement(uint8_t *this)
{
    uint8_t *v1; // ebp
    int *PlacementRect; // esi
    uint32_t *StartCoords; // eax
    int v4; // edi
    int v5; // eax
    int v6; // esi
    int v7; // eax
    char v8; // al
    signed int v9; // ebx
    uint32_t *NeighbourContent; // esi
    int v11; // eax
    int BridgeBitfield; // edi
    int v13; // eax
    int *v14; // ebp
    int *v15; // eax
    int v16; // ecx
    int v17; // edx
    int v18; // ebx
    int v19; // edi
    int v20; // eax
    bool v21; // cc
    int v22; // ebp
    int v23; // edx
    int v24; // eax
    struct tagRECT *v25; // edi
    struct tagRECT *v26; // eax
    LONG left; // edx
    LONG v28; // ecx
    LONG v29; // ebp
    LONG top; // ebx
    LONG bottom; // edi
    LONG v32; // eax
    LONG v33; // ecx
    int *v34; // eax
    uint32_t *v35; // eax
    int *v36; // eax
    int *v37; // eax
    struct tagRECT *v38; // eax
    int *v39; // eax
    int v40; // edx
    struct tagRECT *v41; // eax
    int *v42; // eax
    int *v43; // eax
    struct tagRECT *v44; // eax
    int *v45; // eax
    int *v46; // eax
    struct tagRECT *v47; // [esp-Ch] [ebp-1C4h]
    struct tagRECT *v48; // [esp-Ch] [ebp-1C4h]
    int v49; // [esp-8h] [ebp-1C0h]
    const RECT *v50; // [esp-8h] [ebp-1C0h]
    uint32_t *v51; // [esp-8h] [ebp-1C0h]
    const RECT *v52; // [esp-8h] [ebp-1C0h]
    uint32_t *v53; // [esp-8h] [ebp-1C0h]
    int v54; // [esp-4h] [ebp-1BCh]
    struct tagRECT *v55; // [esp-4h] [ebp-1BCh]
    const RECT *v56; // [esp-4h] [ebp-1BCh]
    const RECT *v57; // [esp-4h] [ebp-1BCh]
    uint32_t *v58; // [esp-4h] [ebp-1BCh]
    const RECT *v59; // [esp-4h] [ebp-1BCh]
    const RECT *v60; // [esp-4h] [ebp-1BCh]
    uint32_t *v61; // [esp-4h] [ebp-1BCh]
    const RECT *v62; // [esp+0h] [ebp-1B8h]
    const RECT *v63; // [esp+0h] [ebp-1B8h]
    const RECT *v64; // [esp+4h] [ebp-1B4h]
    const RECT *v65; // [esp+4h] [ebp-1B4h]
    int v66; // [esp+10h] [ebp-1A8h]
    int right; // [esp+10h] [ebp-1A8h]
    signed int v68; // [esp+34h] [ebp-184h]
    int v69; // [esp+38h] [ebp-180h] BYREF
    int v70; // [esp+3Ch] [ebp-17Ch]
    int v71; // [esp+40h] [ebp-178h]
    int v72; // [esp+44h] [ebp-174h]
    int v73; // [esp+48h] [ebp-170h]
    int v74; // [esp+4Ch] [ebp-16Ch]
    int v75; // [esp+50h] [ebp-168h]
    uint8_t *v76; // [esp+54h] [ebp-164h]
    struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
    int v78; // [esp+74h] [ebp-144h]
    int v79; // [esp+80h] [ebp-138h]
    int v80; // [esp+84h] [ebp-134h]
    uint32_t v81[2]; // [esp+88h] [ebp-130h] BYREF
    int v82; // [esp+90h] [ebp-128h] BYREF
    int v83; // [esp+98h] [ebp-120h]
    int v84; // [esp+A0h] [ebp-118h] BYREF
    LONG v85; // [esp+A8h] [ebp-110h]
    uint32_t v86[2]; // [esp+B0h] [ebp-108h] BYREF
    int v87; // [esp+B8h] [ebp-100h] BYREF
    RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
    int v89[4]; // [esp+D0h] [ebp-E8h] BYREF
    RECT v90; // [esp+E0h] [ebp-D8h] BYREF
    uint32_t v91[4]; // [esp+F0h] [ebp-C8h] BYREF
    int v92; // [esp+100h] [ebp-B8h] BYREF
    int v93[4]; // [esp+108h] [ebp-B0h] BYREF
    int v94[4]; // [esp+118h] [ebp-A0h] BYREF
    int v95[4]; // [esp+128h] [ebp-90h] BYREF
    int v96[4]; // [esp+138h] [ebp-80h] BYREF
    int v97[4]; // [esp+148h] [ebp-70h] BYREF
    int v98[4]; // [esp+168h] [ebp-50h] BYREF
    int v99[4]; // [esp+178h] [ebp-40h] BYREF
    int v100[4]; // [esp+1A8h] [ebp-10h] BYREF
    v1 = this;
    v76 = this;
    if ( !BuildingClass::CheckAdjacentCells((int)this) )
    return;
    PlacementRect = BuildingClass::GetPlacementRect((int)v1, &v84);
    StartCoords = House::GetStartCoords((int)v1, &v82);
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 )
    v7 = PlacementRect[3];
    else
    if ( PlacementRect[2] > 0 )
    v75 = PlacementRect[3];
    if ( v75 > 0 )
    v4 = StartCoords[1];
    v5 = StartCoords[3];
    v6 = PlacementRect[1];
    if ( v4 > v6 )
    v5 += v4 - v6;
    v4 = v6;
    if ( v5 + v4 < v75 + v6 )
    v5 = v75 + v6 - v4 + 1;
    v1 = v76;
    v78 = v5;
    goto LABEL_14;
    v7 = StartCoords[3];
    v78 = v7;
    LABEL_14:
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v1 + 36));
    v8 = v1[284];
    *((uint32_t *)v1 + 17) = 126;
    if ( !v8 )
    v9 = 0;
    v1[286] = (int)abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) % 3 + 48;
    v68 = 0;
    while ( 1 )
    NeighbourContent = Cell::GetNeighbourContent(v1, v9);
    v11 = NeighbourContent[17];
    if ( v11 == 126 )
    if ( *((uint8_t *)NeighbourContent + 286) < 0x30u )
    goto LABEL_21;
    else if ( v11 == -1 || !*(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v11] + 686) )
    LABEL_21:
    if ( *((uint8_t *)NeighbourContent + 284) )
    Rect::Set(&v69, 0, 0, 0, 0);
    v55 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v96);
    House::GetStartCoords((int)NeighbourContent, v99);
    v38 = (struct tagRECT *)Rect::Union(v55, v62, v64);
    v39 = (int *)Rect::Union(v38, v63, v65);
    v69 = *v39;
    v70 = v39[1];
    v71 = v39[2];
    v40 = v39[3];
    NeighbourContent[17] = 126;
    v72 = v40;
    *((uint8_t *)NeighbourContent + 286) = 2 * *((uint8_t *)NeighbourContent + 284)
    + (abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) & 1)
    + 51;
    v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86);
    v47 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v89);
    House::GetStartCoords((int)NeighbourContent, v91);
    v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56);
    v42 = (int *)Rect::Union(v41, v50, v57);
    v43 = Bounds::Subtract(v42, v51, v58);
    v69 = *v43;
    v70 = v43[1];
    v71 = v43[2];
    v72 = v43[3];
    Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0);
    else
    BridgeBitfield = CellClass::GetBridgeBitfield(NeighbourContent);
    v13 = NeighbourContent[17];
    v73 = BridgeBitfield;
    if ( v13 == -1 || BridgeBitfield <= 15 && *((unsigned __int8 *)NeighbourContent + 286) / 3 != BridgeBitfield )
    v14 = BuildingClass::GetPlacementRect((int)NeighbourContent, v100);
    v15 = House::GetStartCoords((int)NeighbourContent, v95);
    if ( v15[2] <= 0 || v15[3] <= 0 )
    v79 = v14[2];
    v20 = v14[3];
    else
    v66 = v14[2];
    if ( v66 <= 0 || (v74 = v14[3], v74 <= 0) )
    v23 = v15[2];
    v20 = v15[3];
    v79 = v23;
    else
    v16 = *v15;
    v17 = *v14;
    v18 = v15[2];
    v19 = v15[1];
    v20 = v15[3];
    v21 = v16 <= *v14;
    v83 = v18;
    if ( !v21 )
    v18 += v16 - v17;
    v16 = v17;
    v83 = v18;
    v22 = v14[1];
    v75 = v22;
    if ( v19 > v22 )
    v20 += v19 - v22;
    v19 = v22;
    if ( v16 + v18 < v17 + v66 )
    v83 = v17 - v16 + v66 + 1;
    if ( v20 + v19 < v74 + v75 )
    v20 = v74 + v75 - v19 + 1;
    v79 = v83;
    v80 = v20;
    NeighbourContent[17] = 126;
    v24 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    *((uint8_t *)NeighbourContent + 286) = 3 * v73 + abs32(v24 % 3);
    House::AnnounceUpgrade((int)NeighbourContent, -1);
    v81[0] = DSurface_ViewBounds;
    v81[1] = Map_VisibleRect;
    v25 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, v97);
    v26 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v98);
    if ( v25->right <= 0 || v25->bottom <= 0 )
    rcDst = *v26;
    else
    right = v26->right;
    if ( right <= 0 || (v73 = v26->bottom, v73 <= 0) )
    rcDst = *v25;
    else
    left = v25->left;
    v28 = v26->left;
    v29 = v25->right;
    top = v25->top;
    bottom = v25->bottom;
    v21 = left <= v26->left;
    v85 = v29;
    if ( !v21 )
    v29 += left - v28;
    left = v28;
    v85 = v29;
    v32 = v26->top;
    v74 = v32;
    if ( top > v32 )
    bottom += top - v32;
    top = v32;
    if ( left + v29 >= v28 + right )
    v33 = v85;
    else
    v33 = v28 - left + right + 1;
    if ( bottom + top < v74 + v73 )
    bottom = v74 + v73 - top + 1;
    rcDst.left = left;
    rcDst.top = top;
    rcDst.right = v33;
    rcDst.bottom = bottom;
    v34 = (int *)Rect::Union(&rcDst, v62, v64);
    v54 = v34[3];
    v49 = v34[2];
    v35 = CellStruct::Copy(v34, &v87);
    v36 = Coord2D::Sub(v35, &v92, v81);
    v37 = Rect::Construct(v94, v36, v49, v54);
    Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0);
    v9 = v68;
    v1 = v76;
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(NeighbourContent + 9));
    v9 += 2;
    v68 = v9;
    if ( v9 >= 8 )
    BuildingClass::CreateIdleAnim((int)v1);
    goto LABEL_62;
    v1[286] = 2 * v1[284] + (abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134)) & 1) + 51;
    LABEL_62:
    v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86);
    v48 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v1, v93);
    House::GetStartCoords((int)v1, v91);
    v44 = (struct tagRECT *)Rect::Union(v48, &v90, v59);
    v45 = (int *)Rect::Union(v44, v52, v60);
    v46 = Bounds::Subtract(v45, v53, v61);
    Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0);
    House::AnnounceUpgrade((int)v1, -1);
}

// 0x004DB9B0
char  BuildingClass::vt_entry_504(uint32_t *this)
{
    int Member; // eax
    int v3; // esi
    int v4; // ebx
    if ( *(this + 361) || *(this + 173) )
    return 0;
    Member = Team::GetMember(this, 0);
    v3 = Member;
    v4 = 0;
    if ( Member )
    Member = (*(int (__thiscall **)(int))(*(uint32_t *)Member + 44))(Member);
    if ( Member == 6 )
    v4 = v3;
    LOBYTE(Member) = *(this + 43) == 7 && v4 && *(uint8_t *)(*(uint32_t *)(v4 + 1312) + 5801);
    LOBYTE(Member) = (uint8_t)Member == 0;
    return (*(int (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1156))(this, 0, Member);
}

int  BuildingClass::MissionDispatch(#377 *this)
{
    int result; // eax
    int v3; // ecx
    int v4; // ecx
    int v5; // [esp+8h] [ebp+4h]
    char v6; // [esp+Ch] [ebp+8h]
    result = v5;
    v3 = *((uint32_t *)this + 43);
    if ( (v3 != 28 || v5 != 5) && v3 != 19 )
    if ( v5 != -1 )
    if ( v3 != v5 || (v4 = *((uint32_t *)this + 45), v4 != v5) && v4 != -1 )
    *((uint32_t *)this + 45) = v5;
    *((uint8_t *)this + 184) = 0;
    LOBYTE(result) = v6;
    if ( v6 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 512))(this);
    if ( (uint8_t)result )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 492))(this);
    return result;
}

int  BuildingClass::GetPlacementScreenRect(#374 *this)
{
    uint32_t *v2; // eax
    int v3; // edi
    int *FoundationSize; // eax
    int v6; // ecx
    int v7; // esi
    int v8; // ebx
    int v9; // ebp
    int v10; // kr00_4
    int v11; // ecx
    int v12; // esi
    int v13; // ecx
    int v14; // [esp+10h] [ebp-18h] BYREF
    int v15; // [esp+14h] [ebp-14h]
    uint32_t v16[3]; // [esp+18h] [ebp-10h] BYREF
    int v17; // [esp+24h] [ebp-4h]
    uint32_t *v18; // [esp+2Ch] [ebp+4h]
    v2 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint32_t *))(*(uint32_t *)this + 172))(this, v16);
    Coord::To_Screen(TacticalClass_Instance, v2, &v14);
    v3 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 108))(this);
    if ( v3 )
    FoundationSize = Building::GetFoundationSize(v16, 0);
    v6 = *FoundationSize;
    v7 = FoundationSize[1];
    v8 = FoundationSize[2];
    v9 = FoundationSize[3];
    v10 = *(__int16 *)(v3 + 2);
    v17 = v9;
    v11 = v14 + v6 - v10 / 2;
    v12 = v15 + v7 - *(__int16 *)(v3 + 4) / 2;
    v15 = v12 + Map_VisibleRect;
    if ( DSurface_ViewBounds >= DSurface_ViewBounds + v11 + v8
    || Map_VisibleRect >= v15 + v9
    || DSurface_ViewBounds + g_Map_VisibleRectOffset <= DSurface_ViewBounds + v11
    || g_DSurface_WindowOffset + Map_VisibleRect <= v15 )
    *v18 = dword_AC1350;
    v18[1] = dword_AC1354;
    v18[2] = dword_AC1358;
    v18[3] = dword_AC135C;
    return (int)v18;
    else
    *v18 = v11;
    v13 = v17;
    v18[1] = v12;
    v18[2] = v8;
    v18[3] = v13;
    return (int)v18;
    else
    *v18 = dword_AC1350;
    v18[1] = dword_AC1354;
    v18[2] = dword_AC1358;
    v18[3] = dword_AC135C;
    return (int)v18;
}

int  BuildingClass::SaveLoad_Register(#374 *this)
{
    int result; // eax
    int *v2; // [esp+8h] [ebp+4h]
    int v3; // [esp+Ch] [ebp+8h]
    result = AbstractClass::SaveLoad_Prefix_0(v2, v3);
    if ( result >= 0 )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 13);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 14);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 6);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 34);
    AudioController::Init(v2 + 15);
    AudioController::Init(v2 + 20);
    v2[42] = 0;
    return 0;
    return result;
}

uint32_t * BuildingClass::ProcessEnterUnit(uint32_t *this)
{
    int v2; // ecx
    int v3; // edi
    int v4; // eax
    int v5; // edi
    int v6; // eax
    uint32_t *v7; // eax
    int *v8; // eax
    uint32_t *result; // eax
    int v10; // edi
    void *v11; // eax
    int i; // edi
    int v13; // ecx
    int v14; // ecx
    int v15; // ecx
    uint32_t *v16; // eax
    int *v17; // eax
    void *v18; // eax
    int j; // edi
    int v20; // ecx
    uint32_t *v21; // [esp+Ch] [ebp-14h] BYREF
    int v22; // [esp+10h] [ebp-10h] BYREF
    uint8_t v23[12]; // [esp+14h] [ebp-Ch] BYREF
    v2 = *(this + 9);
    if ( v2
    && (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 44))(v2) == 1
    && ((v3 = *(this + 9)) != 0
    ? (v4 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v3 + 44))(*(this + 9)) == 1 ? v3 : 0)
    : (v4 = 0),
    *(uint32_t *)(v4 + 1444)) )
    v5 = *(this + 9);
    if ( v5 )
    v6 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v5 + 44))(*(this + 9)) == 1 ? v5 : 0;
    else
    v6 = 0;
    v7 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(v6 + 1444) + 72))(*(uint32_t *)(v6 + 1444), v23);
    v8 = (int *)CellStruct::Set(&v22, *v7 / 256, v7[1] / 256);
    v21 = (uint32_t *)*BuildingClass::FindPlacementCells2(this, &v22, *v8);
    if ( v21 == (uint32_t *)dword_B0B5B8 )
    *(this + 23) = 0;
    *(this + 24) = CurrentFrame;
    return (uint32_t *)(*(int (__thiscall **)(uint32_t, int, uint32_t))(*(uint32_t *)*(this + 9) + 488))(*(this + 9), 5, 0);
    else
    v10 = *(uint32_t *)*(this + 9);
    v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v21);
    (*(void (__thiscall **)(uint32_t, void *, int))(v10 + 1152))(*(this + 9), v11, 1);
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t, int, uint32_t))(*(uint32_t *)*(this + 9) + 488))(*(this + 9), 2, 0);
    *(this + 23) = 2;
    *(this + 24) = 0x7FFFFFFF;
    for ( i = *(this + 18) - 1; i >= 0; --i )
    result = *(uint32_t **)(*(this + 15) + 4 * i);
    v13 = *result;
    if ( result[1] != 6 )
    if ( v13 )
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)v13 + 976))(v13);
    else
    v14 = *(this + 9);
    if ( v14
    && (*(int (__thiscall **)(int))(*(uint32_t *)v14 + 44))(v14) == 6
    && (v15 = *(uint32_t *)(*(this + 9) + 536)) != 0 )
    v16 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v15 + 72))(v15, v23);
    v17 = (int *)CellStruct::Set(&v22, *v16 / 256, v16[1] / 256);
    result = (uint32_t *)*BuildingClass::FindPlacementCells2(this, &v22, *v17);
    v21 = result;
    if ( result != (uint32_t *)dword_B0B5B8 )
    v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v21);
    result = (uint32_t *)TechnoClass::SetFocus((uint32_t *)*(this + 9), (int)v18);
    *(this + 23) = 6;
    *(this + 24) = 0x7FFFFFFF;
    for ( j = *(this + 18) - 1; j >= 0; --j )
    result = *(uint32_t **)(*(this + 15) + 4 * j);
    v20 = *result;
    if ( result[1] != 6 && v20 )
    result = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)v20 + 976))(v20);
    else
    result = (uint32_t *)(*(int (__thiscall **)(uint32_t, int, uint32_t))(*(uint32_t *)*(this + 9) + 488))(*(this + 9), 5, 0);
    *(this + 23) = 0;
    *(this + 24) = CurrentFrame;
    return result;
}

int  BuildingClass::DrawSelectionBox(#377 *this)
{
    int v1; // edi
    int result; // eax
    int v4; // edi
    int v5; // eax
    int *v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // ebp
    int *v10; // eax
    int v11; // esi
    int v12; // ebp
    int v13; // edi
    int v14; // ebx
    int *v15; // eax
    int *v16; // eax
    int *v17; // eax
    int *v18; // eax
    int *v19; // eax
    int *v20; // eax
    int *v21; // eax
    int *v22; // eax
    int *v23; // eax
    int *v24; // eax
    int v25; // [esp-8h] [ebp-60h]
    int v26; // [esp+Ch] [ebp-4Ch]
    int v27; // [esp+10h] [ebp-48h]
    int v28; // [esp+14h] [ebp-44h]
    int v29; // [esp+18h] [ebp-40h]
    int v30; // [esp+1Ch] [ebp-3Ch] BYREF
    int v31; // [esp+20h] [ebp-38h]
    int v32; // [esp+24h] [ebp-34h]
    int v33; // [esp+28h] [ebp-30h] BYREF
    int v34; // [esp+2Ch] [ebp-2Ch]
    int v35; // [esp+30h] [ebp-28h]
    int v36; // [esp+34h] [ebp-24h] BYREF
    int v37; // [esp+38h] [ebp-20h]
    int v38; // [esp+3Ch] [ebp-1Ch]
    int v39; // [esp+40h] [ebp-18h] BYREF
    int v40; // [esp+44h] [ebp-14h] BYREF
    int v41; // [esp+48h] [ebp-10h] BYREF
    uint32_t v42[3]; // [esp+4Ch] [ebp-Ch] BYREF
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this);
    if ( result == 6 )
    LOBYTE(result) = *((uint8_t *)this + 131);
    if ( (uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this);
    if ( result != 15 )
    v25 = v1;
    v4 = 15;
    if ( (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 456))(this, v25) < -4 )
    v4 = 12;
    v5 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v6 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v5 + 124))(v5, &v41);
    v7 = *v6;
    v8 = v6[1];
    v30 = v6[2];
    v28 = v7 / 2;
    v9 = v8 / 2;
    v29 = v8 / 2;
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v27 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + v4);
    else
    v27 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 2 * v4);
    v10 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v40);
    v11 = *v10;
    v12 = -v9;
    v13 = v10[1];
    v14 = v10[2];
    Coord::Subtract(&v30, -v27, v12, v29);
    v15 = Coord::Subtract(v42, v11 + v30, v13 + v31, v14 + v32);
    v36 = *v15;
    v37 = v15[1];
    v38 = v15[2];
    Coord::Subtract(&v33, -v27, v12, 0);
    v16 = Coord::Subtract(v42, v11 + v33, v13 + v34, v14 + v35);
    v39 = *v16;
    v40 = v16[1];
    v41 = v16[2];
    DrawTacticalLine3D(&v39, &v36, v26);
    Coord::Subtract(&v39, v27, v12, 0);
    v17 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41);
    v33 = *v17;
    v34 = v17[1];
    v35 = v17[2];
    Coord::Subtract(&v36, -v27, v12, 0);
    v18 = Coord::Subtract(v42, v11 + v36, v13 + v37, v14 + v38);
    v30 = *v18;
    v31 = v18[1];
    v32 = v18[2];
    DrawTacticalLine3D(&v30, &v33, v26);
    Coord::Subtract(&v39, -v27, v28, 0);
    v19 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41);
    v33 = *v19;
    v34 = v19[1];
    v35 = v19[2];
    Coord::Subtract(&v36, -v27, v12, 0);
    v20 = Coord::Subtract(v42, v11 + v36, v13 + v37, v14 + v38);
    v30 = *v20;
    v31 = v20[1];
    v32 = v20[2];
    DrawTacticalLine3D(&v30, &v33, v26);
    v21 = Coord::Subtract(v42, v11 - v27, v13 + v28, v14 + v29);
    v36 = *v21;
    v37 = v21[1];
    v38 = v21[2];
    Coord::Subtract(&v39, -v27, v12, v29);
    v22 = Coord::Subtract(v42, v11 + v39, v13 + v40, v14 + v41);
    v33 = *v22;
    v34 = v22[1];
    v35 = v22[2];
    DrawTacticalLine3D(&v33, &v36, v26);
    v23 = Coord::Subtract(v42, v11 + v27, v13 + v12, v14 + v29);
    v36 = *v23;
    v37 = v23[1];
    v38 = v23[2];
    Coord::Subtract(&v39, -v27, v12, v29);
    v24 = Coord::Subtract(v42, v11 + v39, v40 + v13, v41 + v14);
    v33 = *v24;
    v34 = v24[1];
    v35 = v24[2];
    return DrawTacticalLine3D(&v33, &v36, v26);
    return result;
}

int  BuildingClass::DrawHealthBar(#377 *this)
{
    int v2; // eax
    int *v3; // eax
    int v4; // edi
    int v5; // ebx
    int v6; // ebp
    uint32_t *v7; // eax
    int v8; // ebx
    int *v9; // eax
    int v10; // edi
    int *v11; // eax
    int v12; // ebx
    int *v13; // eax
    int v14; // ebx
    double HealthRatio; // st7
    int v16; // ebp
    uint32_t *v17; // edi
    int v18; // ebp
    int v19; // ecx
    bool v20; // zf
    int v21; // ebp
    int v22; // ecx
    char v23; // bl
    int result; // eax
    int v25; // ecx
    int v26; // eax
    char v27; // al
    uint32_t *v28; // edi
    int v29; // edx
    int v30; // ebx
    int v31; // ebp
    int v32; // edx
    double v33; // st7
    int v34; // eax
    int i; // ebx
    int v36; // eax
    int v37; // eax
    int v38; // [esp+10h] [ebp-3Ch]
    unsigned int v39; // [esp+14h] [ebp-38h]
    unsigned int v40; // [esp+14h] [ebp-38h]
    int v41; // [esp+18h] [ebp-34h]
    int v42; // [esp+18h] [ebp-34h]
    int v43; // [esp+1Ch] [ebp-30h]
    int v44; // [esp+1Ch] [ebp-30h]
    int v45; // [esp+20h] [ebp-2Ch]
    int v46; // [esp+24h] [ebp-28h]
    int v47; // [esp+28h] [ebp-24h]
    int v48; // [esp+2Ch] [ebp-20h] BYREF
    int v49; // [esp+30h] [ebp-1Ch]
    int v50; // [esp+34h] [ebp-18h] BYREF
    int v51; // [esp+38h] [ebp-14h]
    int v52; // [esp+40h] [ebp-Ch] BYREF
    int v53; // [esp+44h] [ebp-8h]
    int v54; // [esp+48h] [ebp-4h]
    uint32_t *v55; // [esp+50h] [ebp+4h]
    int v56; // [esp+50h] [ebp+4h]
    int v57; // [esp+50h] [ebp+4h]
    int v58; // [esp+50h] [ebp+4h]
    int *v59; // [esp+54h] [ebp+8h]
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 456))(this);
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v2 + 124))(v2, &v50);
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = Coord::Subtract(&v50, *v3 / 2, v5 / 2, v6 / 2);
    v8 = v5 - v7[1];
    v52 = *v7 - v4;
    v53 = v8;
    v54 = v6;
    v9 = Coord::To_ScreenRaw(&v50, &v52);
    v43 = *v9;
    v10 = v9[1];
    v45 = v10;
    v53 = -v53;
    v11 = Coord::To_ScreenRaw(&v50, &v52);
    v48 = *v11;
    v12 = v11[1];
    v54 = 0;
    v53 = -v53;
    v13 = Coord::To_ScreenRaw(&v50, &v52);
    v46 = *v13;
    v47 = v13[1];
    v53 = -v53;
    v14 = (v10 - v12) / 2;
    HealthRatio = BuildingClass::GetHealthRatio((int *)this);
    v16 = Math::RoundToInt(HealthRatio * (double)v14);
    v38 = v16;
    if ( v16 <= 1 )
    v38 = 1;
    v16 = 1;
    if ( v16 >= v14 )
    v38 = v14;
    v16 = v14;
    v39 = 1;
    if ( ObjectClass::IsYellowHP((int *)this) )
    v39 = 2;
    else if ( BuildingClass::IsHealthLow((int *)this) )
    v39 = 4;
    v17 = v55;
    v51 = 2 - 2 * v14;
    if ( v16 > 0 )
    v18 = 0;
    v56 = 0;
    v41 = v38;
    do
    v19 = v45 + v17[1];
    v48 = v43 + *v17 + 4 * v14 + 3 - v18;
    v49 = v51 + v19 + 2 - v56;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_PIPS_SHP,
    v39,
    &v48,
    v59,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v18 += 4;
    v20 = v41 == 1;
    v56 -= 2;
    --v41;
    while ( !v20 );
    v16 = v38;
    if ( v16 < v14 )
    v21 = -2 * v16;
    v57 = 4 * v38;
    v42 = v14 - v38;
    do
    v22 = v45 + v17[1] + v51 + 2;
    v48 = v43 + *v17 + 4 * v14 + 3 - v57;
    v49 = v22 - v21;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_PIPS_SHP,
    0,
    &v48,
    v59,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v21 -= 2;
    v20 = v42 == 1;
    v57 += 4;
    --v42;
    while ( !v20 );
    v23 = 0;
    if ( (unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    || ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & *((uint32_t *)this + 132)) != 0 )
    v23 = 1;
    if ( this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    && *(uint8_t *)(*((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    ? (uint32_t *)((char *)this + 1312)
    : (uint32_t *)1312)
    + 5499) )
    v23 = 1;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint8_t *)(result + 984) || v23 )
    v25 = v17[1];
    v50 = v46 + *v17;
    v26 = *(uint32_t *)this;
    v51 = v47 + v25;
    return (*(int (__thiscall **)(void*377 *, int *, uint32_t *, int *))(v26 + 1104))(this, &v50, v17, v59);
    else
    v20 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 15;
    v27 = *((uint8_t *)this + 131);
    if ( v20 )
    v28 = v55;
    if ( v27 )
    v29 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 992) - 25 + v55[1];
    v50 = *v55 + 11;
    v51 = v29;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_PIPBRD_SHP,
    1u,
    &v50,
    v59,
    3584,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v44 = -5;
    v30 = 8;
    v31 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 992) - 24;
    else
    v28 = v55;
    if ( v27 )
    v32 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 992) - 26 + v55[1];
    v50 = *v55 + 1;
    v51 = v32;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_PIPBRD_SHP,
    0,
    &v50,
    v59,
    3584,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v44 = -15;
    v30 = 17;
    v31 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 992) - 25;
    v33 = BuildingClass::GetHealthRatio((int *)this);
    v34 = Math::RoundToInt(v33 * (double)v30);
    v58 = v34;
    if ( v34 <= 1 )
    v58 = 1;
    v34 = 1;
    if ( v34 >= v30 )
    v58 = v30;
    v40 = 16;
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut )
    v40 = 17;
    if ( BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].ChronoSparkle1 )
    v40 = 18;
    for ( i = 0; i < v58; ++i )
    v36 = v44 + *v28 + 2 * i;
    v51 = v31 + v28[1];
    v50 = v36;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_PIPS_SHP,
    v40,
    &v50,
    v59,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    if ( (unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    || (result = *((uint32_t *)this + 132), ((1 << *(uint32_t *)(*((uint32_t *)HouseClass_Player + 13) + 184)) & result) != 0) )
    v37 = *v28 - 10;
    v51 = v28[1] + 10;
    v50 = v37;
    return (*(int (__thiscall **)(void*377 *, int *, uint32_t *, int *))(*(uint32_t *)this + 1104))(this, &v50, v28, v59);
    return result;
}

// 0x006F9E10
int  BuildingClass::IsInvisible(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint32_t *)(result + 176) )
    result = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 176);
    LOBYTE(result) = *(uint8_t *)result == 0;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x006FB170
int  BuildingClass::RevealShroud(#377 *this)
{
    int result; // eax
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    int v6; // eax
    int v7; // edi
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // edi
    int v13; // ebx
    int i; // eax
    int v15; // eax
    int v16; // ebp
    int v17; // edx
    void*375 *v18; // eax
    uint32_t *v19; // eax
    uint32_t *v20; // eax
    uint32_t *v21; // eax
    uint32_t *v22; // eax
    void*375 *v23; // eax
    uint32_t *v24; // eax
    int v25; // [esp+4h] [ebp-20h] BYREF
    int v26; // [esp+8h] [ebp-1Ch]
    int v27; // [esp+Ch] [ebp-18h]
    int v28; // [esp+10h] [ebp-14h]
    int v29; // [esp+14h] [ebp-10h]
    int v30; // [esp+18h] [ebp-Ch]
    __int16 v31; // [esp+1Ch] [ebp-8h]
    __int16 v32; // [esp+1Eh] [ebp-6h]
    result = (int)HouseClass_Player;
    if ( HouseClass_Player )
    LOBYTE(result) = *((uint8_t *)this + 617);
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 848))(this);
    if ( (uint8_t)result )
    if ( !*((uint32_t *)this + 155) )
    *((uint32_t *)this + 155) = *(char *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3282);
    v3 = *((uint32_t *)this + 39);
    *((uint8_t *)this + 617) = 1;
    v4 = *((uint32_t *)this + 40);
    v5 = *((uint32_t *)this + 41);
    v6 = ZCoordToScreenY(v5);
    v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
    + v3;
    v8 = ZCoordToScreenY(v5);
    v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8;
    v10 = v7;
    v11 = *((uint32_t *)this + 155);
    v12 = -2 - v11;
    v13 = -2 - v11;
    v29 = v11;
    v31 = v10 / 256;
    v30 = -2 - v11;
    v32 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256;
    for ( i = v11 + 2; v13 < i; ++v13 )
    if ( v12 < i )
    v15 = v13 * v13;
    v16 = (v11 + 1) * (v11 + 1);
    v28 = v13 * v13;
    v27 = v16;
    while ( 1 )
    if ( v15 + v12 * v12 < v16 )
    v17 = *(uint32_t *)this;
    LOWORD(v26) = v13 + v31;
    HIWORD(v26) = v12 + v32;
    v25 = v26;
    v18 = (void*375 *)(*(int (__thiscall **)(void*377 *))(v17 + 60))(this);
    if ( !(unsigned __int8)House::IsHumanPlayer(v18)
    && !(unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    && !*((uint8_t *)HouseClass_Player + 501) )
    if ( *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25) + 76) != 1
    && *((int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25) + 76) >= 0 )
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    ++v19[76];
    v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    ++v20[77];
    if ( *((int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25) + 76) >= 1 )
    v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v21[75] &= ~0x10u;
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v22[75] &= ~8u;
    v16 = v27;
    v23 = (void*375 *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 60))(this);
    if ( (unsigned __int8)House::IsHumanPlayer(v23)
    || (unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    || *((uint8_t *)HouseClass_Player + 501) )
    v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    ++v24[79];
    v11 = v29;
    ++v12;
    i = v29 + 2;
    if ( v12 >= v29 + 2 )
    break;
    v15 = v28;
    v12 = v30;
    if ( HouseClass_Player )
    *((uint8_t *)HouseClass_Player + 576) = 0;
    FogOfWar::Render((int **)&MapClass_Instance);
    return MapClass::MarkForRedraw(&MapClass_Instance, 2);
    return result;
}

// 0x006FB470
int  BuildingClass::RemoveShroud(#377 *this)
{
    int result; // eax
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    int v6; // eax
    int v7; // edi
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // edi
    int v13; // ebx
    int i; // eax
    int v15; // eax
    int v16; // ebp
    int v17; // edx
    void*375 *v18; // eax
    uint32_t *v19; // eax
    uint32_t *v20; // eax
    uint32_t *v21; // eax
    uint32_t *v22; // eax
    void*375 *v23; // eax
    uint32_t *v24; // eax
    int v25; // [esp+4h] [ebp-1Ch] BYREF
    int v26; // [esp+8h] [ebp-18h]
    int j; // [esp+Ch] [ebp-14h]
    int v28; // [esp+10h] [ebp-10h]
    int v29; // [esp+14h] [ebp-Ch]
    __int16 v30; // [esp+18h] [ebp-8h]
    __int16 v31; // [esp+1Ah] [ebp-6h]
    result = (int)HouseClass_Player;
    if ( HouseClass_Player )
    LOBYTE(result) = *((uint8_t *)this + 617);
    if ( (uint8_t)result )
    if ( !*((uint32_t *)this + 155) )
    *((uint32_t *)this + 155) = *(char *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3282);
    v3 = *((uint32_t *)this + 39);
    *((uint8_t *)this + 617) = 0;
    v4 = *((uint32_t *)this + 40);
    v5 = *((uint32_t *)this + 41);
    v6 = ZCoordToScreenY(v5);
    v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31)
    + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
    + v3;
    v8 = ZCoordToScreenY(v5);
    v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8;
    v10 = v7;
    v11 = *((uint32_t *)this + 155);
    v12 = -2 - v11;
    v13 = -2 - v11;
    v28 = v11;
    v30 = v10 / 256;
    v29 = -2 - v11;
    v31 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256;
    for ( i = v11 + 2; v13 < i; ++v13 )
    if ( v12 < i )
    v15 = v13 * v13;
    v16 = (v11 + 1) * (v11 + 1);
    for ( j = v13 * v13; ; v15 = j )
    if ( v15 + v12 * v12 < v16 )
    v17 = *(uint32_t *)this;
    LOWORD(v26) = v13 + v30;
    HIWORD(v26) = v12 + v31;
    v25 = v26;
    v18 = (void*375 *)(*(int (__thiscall **)(void*377 *))(v17 + 60))(this);
    if ( !(unsigned __int8)House::IsHumanPlayer(v18)
    && !(unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    && !*((uint8_t *)HouseClass_Player + 501) )
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    --v19[77];
    if ( *((uint8_t *)HouseClass_Player + 22394) )
    if ( *((int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25) + 77) <= 0 )
    v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    --v20[76];
    if ( *((int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25) + 76) <= 0 )
    v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v21[75] |= 8u;
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v22[75] |= 0x10u;
    v23 = (void*375 *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 60))(this);
    if ( (unsigned __int8)House::IsHumanPlayer(v23)
    || (unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    || *((uint8_t *)HouseClass_Player + 501) )
    v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    --v24[79];
    v11 = v28;
    ++v12;
    i = v28 + 2;
    if ( v12 >= v28 + 2 )
    break;
    v12 = v29;
    if ( HouseClass_Player )
    *((uint8_t *)HouseClass_Player + 576) = 0;
    FogOfWar::Render((int **)&MapClass_Instance);
    return MapClass::MarkForRedraw(&MapClass_Instance, 2);
    return result;
}

int  BuildingClass::_vt232(#377 *this)
{
    uint32_t *v2; // ecx
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 640))(this, 3);
    if ( !this || (*((uint8_t *)this + 20) & 4) == 0 || !*((uint8_t *)this + 1709) )
    v2 = (uint32_t *)*((uint32_t *)this + 180);
    if ( v2 )
    TaskManager::Update(v2);
    UnitClass::ProcessIdleOrders(*((uint32_t **)this + 180));
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 220))(this, 1);
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 336))(this);
}

int  BuildingClass::_vt126(#377 *this)
{
    int result; // eax
    if ( AbstractClass::COMStub_126((int)this) )
    result = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, *((uint32_t *)this + 174));
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::HandleSellOrRepair(#377 *this)
{
    int v2; // eax
    int result; // eax
    BOOL v4; // eax
    int v5; // edx
    int v6; // eax
    uint8_t v7[12]; // [esp+8h] [ebp-Ch] BYREF
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 292))(this, 2);
    v2 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 160);
    *((uint32_t *)this + 27) = v2;
    *((uint32_t *)this + 28) = v2;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this);
    if ( result == 6 )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 412))(this, 0);
    v4 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    globalHelper_051EE0((int)this, v5, v4);
    v6 = (*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v7);
    return StartAudioControllerAt(RulesClass_Instance->CratePromoteSound, v6, 0);
    return result;
}

int  BuildingClass::_vt267(#377 *this)
{
    int v2; // ecx
    uint32_t *v3; // ecx
    uint32_t *v5; // esi
    uint8_t v6[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v7; // [esp+14h] [ebp+4h]
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 1 && (v2 = *((uint32_t *)this + 173)) != 0 )
    v3 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v2 + 88))(v2, v6);
    *v7 = *v3;
    v7[1] = v3[1];
    v7[2] = v3[2];
    return (int)v7;
    else
    v5 = (uint32_t *)((char *)this + 156);
    *v7 = *v5;
    v7[1] = v5[1];
    v7[2] = v5[2];
    return (int)v7;
}

int  BuildingClass::_vt179(#377 *this)
{
    int result; // eax
    int v3; // edi
    int *v4; // ecx
    int v5; // edx
    uint32_t *v6; // eax
    int v7; // edx
    int v8; // ecx
    char v9; // al
    int v10; // [esp-Ch] [ebp-2Ch]
    __int16 v11; // [esp+4h] [ebp-1Ch] BYREF
    int v12; // [esp+8h] [ebp-18h]
    int v13; // [esp+Ch] [ebp-14h] BYREF
    __int16 v14; // [esp+10h] [ebp-10h] BYREF
    char v15; // [esp+14h] [ebp-Ch] BYREF
    int v16; // [esp+1Ch] [ebp-4h]
    int *v17; // [esp+24h] [ebp+4h]
    int v18; // [esp+24h] [ebp+4h]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = *(uint32_t *)(result + 1460);
    if ( v3 == -1
    || (v4 = v17, result = *v17, *v17 == g_TechnoClassPool) && v17[1] == dword_B0EA94 && v17[2] == dword_B0EA98 )
    LOBYTE(result) = 1;
    else
    LOWORD(v18) = result / 256;
    v5 = *(uint32_t *)this;
    HIWORD(v18) = v4[1] / 256;
    v13 = v18;
    v6 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(v5 + 76))(this);
    LOWORD(v16) = *v6 / 256;
    v7 = *(uint32_t *)this;
    HIWORD(v16) = v6[1] / 256;
    v12 = v16;
    v10 = (*(int (__thiscall **)(void*377 *))(v7 + 800))(this);
    v8 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, &v11) + 80) >> 8;
    LOBYTE(v8) = v8 & 1;
    v9 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int))(*(uint32_t *)this + 188))(this, 0, v8, v10);
    LOBYTE(result) = MapSeed::CheckTileMatch(&MapClass_Instance, &v14, (__int16 *)&v13, v3, v9, (char)&v15, 0);
    return result;
}

int  BuildingClass::_vt162(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 978) != 0;
    return result;
}

int  BuildingClass::_vt297(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    return *(char *)(v2 + 12);
}

int  BuildingClass::_vt299(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt300(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt302(#377 *this)
{
    uint32_t *v2; // [esp+Ch] [ebp+4h]
    *v2 = -1;
    v2[1] = -1;
    v2[2] = -1;
    return (int)v2;
}

int  BuildingClass::_vt305(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt306(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

int  BuildingClass::_vt308(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

char  BuildingClass::DrawRangeIndicator(void ***this, int *a2, int a3)
{
    void **v4; // eax
    void **v5; // edi
    int *v6; // eax
    int v7; // ebp
    int v8; // ebx
    int v9; // esi
    int v10; // ecx
    int v11; // edi
    int v12; // eax
    int v14; // [esp+80h] [ebp-D4h]
    int v15; // [esp+84h] [ebp-D0h]
    int v16; // [esp+88h] [ebp-CCh]
    int v17; // [esp+98h] [ebp-BCh]
    int v18; // [esp+9Ch] [ebp-B8h]
    int v19; // [esp+A0h] [ebp-B4h]
    int v20; // [esp+A8h] [ebp-ACh]
    uint32_t v21[2]; // [esp+ACh] [ebp-A8h] BYREF
    uint32_t v22[2]; // [esp+B4h] [ebp-A0h] BYREF
    uint32_t v23[2]; // [esp+BCh] [ebp-98h] BYREF
    uint32_t v24[2]; // [esp+C4h] [ebp-90h] BYREF
    uint32_t v25[2]; // [esp+CCh] [ebp-88h] BYREF
    uint32_t v26[2]; // [esp+D4h] [ebp-80h] BYREF
    uint32_t v27[2]; // [esp+DCh] [ebp-78h] BYREF
    uint32_t v28[2]; // [esp+E4h] [ebp-70h] BYREF
    uint32_t v29[2]; // [esp+ECh] [ebp-68h] BYREF
    uint32_t v30[2]; // [esp+F4h] [ebp-60h] BYREF
    uint32_t v31[2]; // [esp+FCh] [ebp-58h] BYREF
    uint32_t v32[2]; // [esp+104h] [ebp-50h] BYREF
    uint32_t v33[2]; // [esp+10Ch] [ebp-48h] BYREF
    uint32_t v34[2]; // [esp+114h] [ebp-40h] BYREF
    uint32_t v35[2]; // [esp+11Ch] [ebp-38h] BYREF
    uint32_t v36[2]; // [esp+124h] [ebp-30h] BYREF
    uint32_t v37[2]; // [esp+12Ch] [ebp-28h] BYREF
    uint32_t v38[2]; // [esp+134h] [ebp-20h] BYREF
    uint32_t v39[2]; // [esp+13Ch] [ebp-18h] BYREF
    uint8_t v40[4]; // [esp+144h] [ebp-10h] BYREF
    uint32_t v41[3]; // [esp+148h] [ebp-Ch] BYREF
    v4 = (void **)((int (__thiscall *)(void ***, uint32_t, uint32_t))(*this)[26])(this, 0, 0);
    if ( !v4 )
    v4 = *(this + 75);
    if ( !v4 )
    if ( LODWORD(RulesClass_Instance->AITriggerSuccessWeightDelta) )
    v5 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v5 )
    v6 = (int *)((int (__thiscall *)(void ***, uint32_t *))(*this)[18])(this, v41);
    v4 = AnimClass::ctor(
    v5,
    (void *)RulesClass_Instance->AITriggerSuccessWeightDelta,
    v6,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v4 = 0;
    *(this + 75) = v4;
    if ( v4 )
    BuildingClass::AimTurret(v4, this);
    LOBYTE(v4) = MCV_DeployModeEnabled;
    if ( !MCV_DeployModeEnabled )
    v4 = *(this + 75);
    *((uint8_t *)v4 + 413) = 1;
    else
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v7 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 12);
    else
    v7 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 24);
    v8 = *a2;
    v9 = a2[1];
    if ( ((unsigned __int8)CurrentFrame & 8) != 0 )
    v10 = 12;
    v16 = 8;
    v15 = 12;
    else
    v15 = 10;
    v16 = 6;
    v10 = 10;
    v14 = v8 + v10;
    v18 = v16 - v10;
    v17 = 2;
    v19 = 4 - v10;
    v11 = -v10;
    v12 = -v16;
    v20 = -4 - v10;
    while ( 1 )
    v32[1] = v9 + v11;
    v32[0] = v8 + v12;
    v24[1] = v9 + v11;
    v24[0] = v11 + v8;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v24,
    v32,
    v7);
    v34[1] = v9 + v11;
    v34[0] = v14;
    v26[0] = v18 + v14;
    v26[1] = v9 + v11;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v26,
    v34,
    v7);
    v21[0] = v14;
    v21[1] = v9 - v16;
    v28[0] = v14;
    v28[1] = v9 + v11;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v28,
    v21,
    v7);
    v35[1] = v9 + v15;
    v35[0] = v14;
    v30[0] = v14;
    v30[1] = v9 + v16;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v30,
    v35,
    v7);
    v36[0] = v18 + v14;
    v22[0] = v14;
    v36[1] = v9 + v15;
    v22[1] = v9 + v15;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v22,
    v36,
    v7);
    v23[0] = v11 + v8;
    v23[1] = v9 + v15;
    v25[1] = v9 + v15;
    v25[0] = v8 - v16;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v25,
    v23,
    v7);
    v27[0] = v11 + v8;
    v27[1] = v9 + v16;
    v29[0] = v11 + v8;
    v29[1] = v9 + v15;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v29,
    v27,
    v7);
    v31[1] = v9 + v11;
    v31[0] = v11 + v8;
    v33[0] = v11 + v8;
    v33[1] = v9 - v16;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v33,
    v31,
    v7);
    v37[0] = v14 + v19;
    v37[1] = v9;
    v39[0] = v20 + v14;
    v39[1] = v9;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v39,
    v37,
    v7);
    v38[1] = v9 + 4;
    v38[0] = v8;
    v41[0] = v8;
    v41[1] = v9 - 4;
    (*(void (__thiscall **)(int, uint32_t *, uint32_t *, int))(*(uint32_t *)DSurface_Hidden_2 + 48))(
    DSurface_Hidden_2,
    v41,
    v38,
    v7);
    ++v8;
    ++v14;
    ++v9;
    v4 = (void **)Color::ConvertToRGB(
    (unsigned __int8 *)(*((uint32_t *)BuildingTypeClass_AnimTable
    + *((uint32_t *)HouseClass_Player + 22549))
    + 776),
    (int)v40);
    v7 = ((unsigned __int8)*(_WORD *)v4 >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((unsigned __int8)HIBYTE(*(_WORD *)v4) >> g_BitMask_Blue << g_BitMask_Green)
    | (*((unsigned __int8 *)v4 + 2) >> g_BitMask_Red << g_BitShift_Blue);
    LOBYTE(v4) = --v17;
    if ( !v17 )
    break;
    v12 = -v16;
    return (char)v4;
}

void  BuildingClass::UpdateThreatBounds(uint32_t *this, uint32_t *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // edx
    int v7; // eax
    int v8; // [esp-4h] [ebp-Ch]
    int v9; // [esp-4h] [ebp-Ch]
    if ( a2 )
    v8 = -*(this + 322);
    v3 = (*(int (**)(void))(*this + 56))();
    CellClass::SetThreatBounds(a2, v3, v8);
    v4 = *this;
    *(this + 322) = 0;
    v5 = (*(int (__thiscall **)(uint32_t *))(v4 + 704))(this);
    v6 = *this;
    v9 = v5;
    *(this + 322) = v5;
    v7 = (*(int (__thiscall **)(uint32_t *))(v6 + 56))(this);
    CellClass::SetThreatBounds(a2, v7, v9);
}

// 0x0070F8F0
int  BuildingClass::FindBridgeCell(#377 *this)
{
    int v1; // edx
    uint32_t *v2; // eax
    int v4; // ebx
    int v5; // edi
    int v6; // esi
    uint32_t *v7; // eax
    void *v8; // eax
    int NthOfType; // eax
    uint32_t *v10; // eax
    void *v11; // eax
    int v12; // eax
    uint32_t *v13; // eax
    void *v14; // eax
    int v15; // eax
    uint32_t *v16; // eax
    void *v17; // eax
    int v18; // eax
    int v19; // [esp+4h] [ebp-34h] BYREF
    int v20; // [esp+8h] [ebp-30h]
    int v21; // [esp+Ch] [ebp-2Ch]
    int v22; // [esp+10h] [ebp-28h]
    int v23; // [esp+14h] [ebp-24h]
    int v24; // [esp+18h] [ebp-20h]
    int v25; // [esp+1Ch] [ebp-1Ch]
    int v26; // [esp+20h] [ebp-18h]
    int v27; // [esp+24h] [ebp-14h] BYREF
    int v28; // [esp+2Ah] [ebp-Eh] BYREF
    int v29; // [esp+2Eh] [ebp-Ah]
    int *v30; // [esp+3Ch] [ebp+4h]
    int v31; // [esp+40h] [ebp+8h]
    v1 = *(uint32_t *)this;
    v20 = g_TechnoHouseState;
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *, char *))(v1 + 72))(this, (char *)&v28 + 2);
    LOWORD(v19) = *v2 / 256;
    HIWORD(v19) = v2[1] / 256;
    v27 = v19;
    if ( *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v27) + 59) == 5 )
    *v30 = v27;
    return (int)v30;
    else
    v4 = 1;
    v5 = -1;
    if ( v31 > 1 )
    v6 = -1;
    v25 = -1;
    do
    if ( v6 <= v4 )
    do
    LOWORD(v29) = -(__int16)v4;
    LOWORD(v21) = v6 + v27;
    HIWORD(v21) = HIWORD(v27) - v4;
    v19 = v21;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    if ( Cell::IsBridge2(v7) )
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    NthOfType = Building::GetNthOfType((int)v8);
    if ( NthOfType > v5 )
    v5 = NthOfType;
    v20 = v19;
    LOWORD(v22) = v6 + v27;
    HIWORD(v22) = v4 + HIWORD(v27);
    v19 = v22;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    if ( Cell::IsBridge2(v10) )
    v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    v12 = Building::GetNthOfType((int)v11);
    if ( v12 > v5 )
    v5 = v12;
    v20 = v19;
    LOWORD(v26) = -(__int16)v4;
    LOWORD(v23) = v27 - v4;
    HIWORD(v23) = v6 + HIWORD(v27);
    v19 = v23;
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    if ( Cell::IsBridge2(v13) )
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    v15 = Building::GetNthOfType((int)v14);
    if ( v15 > v5 )
    v5 = v15;
    v20 = v19;
    LOWORD(v24) = v4 + v27;
    HIWORD(v24) = v6 + HIWORD(v27);
    v19 = v24;
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    if ( Cell::IsBridge2(v16) )
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    v18 = Building::GetNthOfType((int)v17);
    if ( v18 > v5 )
    v5 = v18;
    v20 = v19;
    ++v6;
    while ( v6 <= v4 );
    if ( v5 != -1 )
    break;
    v6 = v25;
    ++v4;
    v25 = --v6;
    while ( v4 < v31 );
    *v30 = v20;
    return (int)v30;
}

int  BuildingClass::_vt229(#377 *this)
{
    int result; // eax
    int v3; // edx
    int v4; // eax
    uint32_t v5[3]; // [esp+8h] [ebp-Ch] BYREF
    uint32_t *v6; // [esp+18h] [ebp+4h]
    CellClass::AddObject((uint32_t *)this + 69, v6);
    if ( v6 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint32_t *)(result + 1380) != -1 )
    v5[0] = *((uint32_t *)this + 39);
    v3 = *(uint32_t *)this;
    v5[1] = *((uint32_t *)this + 40);
    v5[2] = *((uint32_t *)this + 41);
    v4 = (*(int (__thiscall **)(void*377 *))(v3 + 132))(this);
    return PlayAudioAt2(*(uint32_t *)(v4 + 1380), v5, 0);
    return result;
}

char __userpurge BuildingClass::ProcessSell@<al>(int a1@<ecx>, int *a2@<edi>, int a3, int a4, char a5)
{
    int v6; // eax
    uint32_t *v7; // eax
    uint32_t *v8; // eax
    int *v9; // ebx
    void **v10; // ecx
    int v11; // edx
    int v12; // esi
    unsigned int v13; // eax
    int v14; // edx
    int v15; // esi
    unsigned int v16; // eax
    int v17; // eax
    int v18; // eax
    int v19; // esi
    int v20; // eax
    int v21; // eax
    int v22; // ecx
    int v23; // eax
    uint32_t *v24; // edx
    void **v25; // ecx
    int v26; // eax
    BOOL v27; // eax
    int v28; // eax
    uint32_t *v29; // eax
    int v30; // esi
    int v31; // edi
    uint32_t *v32; // eax
    int v33; // kr04_4
    __int64 v34; // rax
    int (__stdcall ***v35)(uint32_t, void *, int *); // eax
    int v36; // esi
    int v37; // eax
    int v38; // edi
    int v39; // ecx
    const IID *v40; // edi
    int *v41; // esi
    bool v42; // zf
    uint32_t *v43; // eax
    uint32_t *v44; // esi
    uint32_t *v45; // eax
    int v46; // eax
    uint32_t *v47; // eax
    void **Building; // esi
    uint32_t *v49; // eax
    uint32_t *v50; // eax
    _WORD *v51; // edi
    _WORD *v52; // eax
    int v53; // eax
    int v54; // ecx
    int v55; // ecx
    bool v56; // bl
    int v57; // eax
    int v58; // ecx
    uint32_t *v59; // eax
    int v60; // eax
    uint32_t *v61; // edi
    uint32_t *v62; // eax
    int v63; // eax
    int v64; // esi
    uint32_t *v65; // esi
    int v66; // eax
    int **v67; // ecx
    int v68; // esi
    void *v69; // eax
    void *v70; // eax
    int v71; // eax
    int v72; // eax
    int v73; // ecx
    int v74; // edx
    uint32_t *v75; // eax
    int v76; // eax
    int *v77; // edi
    int v78; // ecx
    int v79; // eax
    int v80; // esi
    int v81; // eax
    int v82; // esi
    int v83; // eax
    uint32_t *v84; // esi
    int v85; // ebx
    void **v86; // esi
    int v87; // eax
    int v88; // eax
    void *VersusMultiplier; // eax
    int v90; // esi
    int v91; // edi
    int *v92; // eax
    uint32_t *v93; // edi
    int v94; // eax
    int v95; // esi
    int v96; // eax
    double v97; // st7
    int v98; // esi
    int v99; // eax
    void *v101; // [esp+98h] [ebp-48h]
    char v102; // [esp+9Ch] [ebp-44h]
    char v103; // [esp+9Ch] [ebp-44h]
    char v104; // [esp+A0h] [ebp-40h]
    int v105; // [esp+A4h] [ebp-3Ch]
    int v106; // [esp+B0h] [ebp-30h] BYREF
    uint32_t *Member; // [esp+B4h] [ebp-2Ch] BYREF
    int v108; // [esp+B8h] [ebp-28h] BYREF
    int v109; // [esp+BCh] [ebp-24h] BYREF
    int v110; // [esp+C4h] [ebp-1Ch] BYREF
    int v111; // [esp+C8h] [ebp-18h]
    int v112; // [esp+CCh] [ebp-14h]
    int v113; // [esp+D0h] [ebp-10h] BYREF
    int v114; // [esp+D4h] [ebp-Ch]
    int v115; // [esp+D8h] [ebp-8h]
    v109 = *(uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v108);
    if ( a3 == 2 || !a3 )
    if ( *(uint8_t *)(a1 + 1676) )
    TechnoClass::Deploy((int *)a1);
    LOBYTE(v6) = *(uint8_t *)(a1 + 144);
    if ( !(uint8_t)v6 )
    return v6;
    if ( a3 != 2 )
    LABEL_202:
    v93 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v109);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)a1, 17) )
    v94 = v93[17];
    if ( v94 != -1 )
    v95 = *((uint32_t *)BuildingTypeClass_Array + v94);
    if ( *(uint8_t *)(v95 + 557) || *(uint8_t *)(v95 + 680) && *(uint32_t *)(*(uint32_t *)(a1 + 1732) + 1460) == 12 )
    v96 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v113);
    StartAudioControllerAt(*(uint32_t *)(v95 + 496), v96, 0);
    BuildingClass::SellEffects((int)v93, -1);
    v97 = *(float *)(a1 + 820) + 0.02;
    *(uint8_t *)(a1 + 1717) = 0;
    *(float *)(a1 + 820) = v97;
    v98 = *(uint32_t *)a1;
    v99 = (*(int (__thiscall **)(int, int *, uint32_t))(*(uint32_t *)a1 + 440))(a1, &v108, 0);
    (*(void (__thiscall **)(int, int))(v98 + 1332))(a1, v99);
    LOBYTE(v6) = *(uint8_t *)(a1 + 144);
    if ( (uint8_t)v6 )
    LOBYTE(v6) = FootClass::UpdateAI((__int16 *)a1, a1, (int)v93, a3);
    return v6;
    Member = (uint32_t *)Team::GetMember((uint32_t *)a1, 0);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 1040) )
    if ( !(unsigned __int8)HouseClass::GainedPoweredCenter(*(uint32_t *)(a1 + 1732)) )
    v7 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    if ( !Cell::IsBridge(v7) )
    TechnoClass::Deactivate(a1);
    v8 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    v9 = Cell::IsBridge(v8);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 9 )
    if ( !v9 )
    goto LABEL_47;
    if ( v9 == *(int **)(a1 + 1444) || v9 == *(int **)(a1 + 692) )
    v10 = (void **)v9[13];
    if ( v10 )
    TeamClass::Update_0(v10, 1, a1, g_UnitSelectionState, 0, 0);
    if ( *(int *)((*(int (__thiscall **)(int))(*(uint32_t *)a1 + 132))(a1) + 1228) > 0
    && (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(a1 + 540)) )
    v110 = *(uint32_t *)(a1 + 156);
    v11 = *(uint32_t *)a1;
    v111 = *(uint32_t *)(a1 + 160);
    v112 = *(uint32_t *)(a1 + 164);
    v12 = (*(int (__thiscall **)(int))(v11 + 132))(a1) + 1212;
    v13 = Random::State(Randomizer_Global);
    a2 = &v110;
    StartAudioControllerAt(*(uint32_t *)(*(uint32_t *)(v12 + 4) + 4 * (v13 % *(uint32_t *)(v12 + 16))), (int)&v110, 0);
    if ( *(int *)((*(int (__thiscall **)(int))(*(uint32_t *)a1 + 132))(a1) + 1312) > 0 )
    v110 = *(uint32_t *)(a1 + 156);
    v111 = *(uint32_t *)(a1 + 160);
    v14 = *(uint32_t *)a1;
    v112 = *(uint32_t *)(a1 + 164);
    v15 = (*(int (__thiscall **)(int))(v14 + 132))(a1) + 1296;
    v16 = Random::State(Randomizer_Global);
    a2 = &v110;
    StartAudioControllerAt(*(uint32_t *)(*(uint32_t *)(v15 + 4) + 4 * (v16 % *(uint32_t *)(v15 + 16))), (int)&v110, 0);
    v17 = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 700))(a1);
    HouseClass::AddPower((uint32_t *)v9[135], v17);
    while ( *(uint32_t *)(a1 + 280) )
    v18 = FootClass::PopAndProcess((uint32_t *)a1);
    a2 = (int *)v18;
    if ( v18 )
    if ( *(uint32_t *)(v18 + 280) )
    do
    v19 = FootClass::PopAndProcess(a2);
    if ( v19 )
    v20 = (*(int (__thiscall **)(int))(*(uint32_t *)v19 + 700))(v19);
    HouseClass::AddPower((uint32_t *)v9[135], v20);
    (*(void (__thiscall **)(int))(*(uint32_t *)v19 + 248))(v19);
    while ( a2[70] );
    v21 = (*(int (__thiscall **)(int *))(*a2 + 700))(a2);
    HouseClass::AddPower((uint32_t *)v9[135], v21);
    (*(void (__thiscall **)(int *))(*a2 + 248))(a2);
    v22 = *(uint32_t *)(a1 + 1684);
    if ( v22 )
    v23 = (*(int (__thiscall **)(int))(*(uint32_t *)v22 + 700))(v22);
    HouseClass::AddPower((uint32_t *)v9[135], v23);
    v24 = (uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 1684) + 1692) + 44);
    *v24 = CurrentFrame;
    v24[1] = v114;
    v24[2] = 50;
    BuildingClass::Deploy(*(uint32_t *)(*(uint32_t *)(a1 + 1684) + 1692), a1, (int)a2);
    v25 = *(void ***)(a1 + 52);
    if ( v25 )
    TeamClass::Update_0(v25, 48, a1, g_UnitSelectionState, 0, 0);
    if ( *(uint8_t *)(v9[328] + 5805) )
    v26 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v113);
    StartAudioControllerAt(*((uint32_t *)RulesClass_Instance + 154), v26, 0);
    if ( v9[346] )
    BuildingClass::ClearAnims(v9, 3);
    v27 = BuildingClass::GetHealthRatio(v9) <= *((double *)RulesClass_Instance + 736);
    BuildingClass::PlayUpgradeAnim(v9, 10, v27, 0, 0);
    LOBYTE(v6) = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    return v6;
    if ( v9
    && *(uint8_t *)(v9[328] + 5806)
    && (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 7
    && *(int **)(a1 + 1444) == v9 )
    if ( (*(int (__thiscall **)(int, int, int *))(*(uint32_t *)a1 + 632))(a1, 15, v9) == 1 )
    TechnoClass::SetFocus((uint32_t *)a1, 0);
    *(uint8_t *)(a1 + 140) = 0;
    *(uint32_t *)(a1 + 196) = 0;
    TechnoClass::SetMember81((uint32_t *)a1, 0);
    TechnoClass::SetSpread((uint32_t *)a1, 0);
    v28 = *(uint32_t *)(a1 + 704);
    if ( v28 && *(uint32_t *)(v28 + 700) )
    CaptureManagerClass::FreeUnit(a1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 212))(a1);
    CellClass::AddObject(v9 + 69, (uint32_t *)a1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 284))(a1);
    v6 = *(uint32_t *)(v9[328] + 3816);
    if ( v6 > 0 )
    *(uint8_t *)(v9[135] + 22392) = 1;
    return v6;
    LABEL_105:
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 5, 0);
    LOBYTE(v6) = (*(int (__thiscall **)(int, int *, int, int))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 1);
    return v6;
    LABEL_47:
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 7
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 25 )
    if ( Member )
    if ( (*(int (__thiscall **)(uint32_t *))(*Member + 44))(Member) == 6 )
    v29 = (uint32_t *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 72))(a1, &v113);
    v30 = ((__int16)(*v29 / 256) << 8) + 128;
    v31 = ((__int16)(v29[1] / 256) << 8) + 128;
    v32 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *, int))(*Member + 168))(Member, &v113, a1);
    v33 = v32[1];
    v34 = ((__int16)(*v32 / 256) << 8) + 128;
    if ( (unsigned __int16)(v30 / 256) == (unsigned __int16)((BYTE4(v34) + (int)v34) >> 8)
    && (unsigned __int16)(v31 / 256) == (unsigned __int16)((((__int16)(v33 / 256) << 8) + 128) / 256) )
    v35 = *(int (__stdcall ****)(uint32_t, void *, int *))(a1 + 1652);
    v106 = 0;
    if ( !v35 )
    goto LABEL_61;
    v36 = (**v35)(v35, &unk_818858, &v108);
    if ( v36 >= 0 )
    v38 = v108;
    ComPtr::Release_Alt(&v106);
    v37 = v38;
    else
    ComPtr::Release_Alt(&v106);
    v37 = 0;
    v106 = v37;
    if ( v36 < 0 && v36 != -2147467262 )
    WinAPI::Wrapper(v36);
    if ( !v37 )
    LABEL_61:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, int *))(*(uint32_t *)v37 + 12))(v37, &v113);
    v39 = 4;
    v40 = &stru_7E9A40;
    v41 = &v113;
    v42 = 1;
    v43 = Member;
    do
    if ( !v39 )
    break;
    v42 = *v41++ == v40->Data1;
    v40 = (const IID *)((char *)v40 + 4);
    --v39;
    while ( v42 );
    if ( v42 && *(uint8_t *)(Member[328] + 5801) && !*(uint32_t *)(a1 + 1444) )
    *(uint32_t *)(a1 + 1444) = Member;
    if ( v43 == *(uint32_t **)(a1 + 1444) )
    FootClass::UpdateAI((__int16 *)a1, a1, (int)v40, 2);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 21);
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 92))(*(uint32_t *)(a1 + 1652));
    LOBYTE(v6) = v106;
    if ( v106 )
    LOBYTE(v6) = (*(int (__stdcall **)(int))(*(uint32_t *)v106 + 8))(v106);
    return v6;
    if ( v106 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v106 + 8))(v106);
    if ( *(uint8_t *)(a1 + 1048) )
    v44 = Member;
    if ( Member )
    if ( (*(int (__thiscall **)(uint32_t *))(*Member + 44))(Member) == 6
    && (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 7 )
    Member = (uint32_t *)(v109 - 0x10000);
    v108 = v109 - 0x10000;
    v45 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v108);
    if ( v44 == Cell::IsBridge(v45) )
    v46 = (*(int (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)a1 + 632))(a1, 21, v44) - 1;
    if ( v46 )
    if ( v46 != 4 )
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 0);
    v47 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = (void **)Cell::IsBridge(v47);
    if ( !Building )
    v102 = *(uint8_t *)(a1 + 140);
    v49 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = (void **)PlacementList::FindByType(v49, v102);
    if ( !Building )
    v103 = *(uint8_t *)(a1 + 140);
    v50 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1);
    Building = (void **)CellClass::FindBuilding(v50, v103);
    if ( Building == (void **)a1 )
    Building = (void **)AbstractClass::IsTechnoType(Building[12]);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != 7
    || !Building
    || Building == (void **)a1
    || (v51 = (_WORD *)(*((int (__thiscall **)(void **, int *))*Building + 110))(Building, &v108),
    v52 = (_WORD *)(*(int (__thiscall **)(int, uint32_t **))(*(uint32_t *)a1 + 440))(a1, &Member),
    *v52 != *v51)
    || v52[1] != v51[1]
    || !Array::Contains((int *)a1, (int)Building)
    || *(int *)((*((int (__thiscall **)(void **))*Building + 33))(Building) + 1504) <= 0 )
    if ( !*(uint8_t *)(a1 + 1048)
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 7
    && (!AbstractClass::IsTechnoType(*(void **)(a1 + 1444))
    || Team::GetMember((uint32_t *)a1, 0) == *(uint32_t *)(a1 + 1444))
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 16 )
    goto LABEL_159;
    v55 = *(uint32_t *)(a1 + 1444);
    v56 = v55 == 0;
    if ( v55 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v55 + 44))(v55) == 11 )
    v57 = *(uint32_t *)(a1 + 156);
    v58 = *(uint32_t *)(a1 + 160);
    v115 = *(uint32_t *)(a1 + 164);
    if ( *(_WORD *)(*(uint32_t *)(a1 + 1444) + 36) == (unsigned __int16)(v57 / 256)
    && *(_WORD *)(*(uint32_t *)(a1 + 1444) + 38) == (unsigned __int16)(v58 / 256) )
    v56 = 1;
    v110 = *(uint32_t *)(a1 + 156);
    v111 = *(uint32_t *)(a1 + 160);
    v112 = *(uint32_t *)(a1 + 164);
    v59 = Coord::To_Cell(&MapClass_Instance, &v110);
    if ( !Cell::IsBridge(v59) || v56 )
    v60 = Team::GetMember((uint32_t *)a1, 0);
    v61 = (uint32_t *)v60;
    if ( v56
    || !v60
    || (*(int (__thiscall **)(int))(*(uint32_t *)v60 + 44))(v60) != 6
    || !*(uint8_t *)(v61[328] + 5821)
    || (v110 = *(uint32_t *)(a1 + 156),
    v111 = *(uint32_t *)(a1 + 160),
    v112 = *(uint32_t *)(a1 + 164),
    v62 = Coord::To_Cell(&MapClass_Instance, &v110),
    Cell::IsBridge(v62) != v61) )
    v63 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 8);
    if ( v63 == 23 )
    if ( *(uint32_t *)(a1 + 1444) )
    v64 = *(uint32_t *)(a1 + 1444);
    if ( v64 != (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1) )
    if ( v64 && (*(uint8_t *)(v64 + 20) & 1) != 0 )
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)a1 + 632))(a1, 14, v64);
    goto LABEL_154;
    if ( v61 )
    v65 = (*(int (__thiscall **)(uint32_t *))(*v61 + 44))(v61) == 6 ? v61 : 0;
    else
    v65 = 0;
    v66 = *(uint32_t *)(a1 + 1732);
    if ( *(uint8_t *)(v66 + 3598) || *(uint8_t *)(v66 + 3599) )
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)a1 + 488))(a1, 10, 1);
    goto LABEL_154;
    v67 = *(int ***)(a1 + 728);
    if ( v67 )
    BuildingClass::InitBuildLimit(v67);
    goto LABEL_154;
    if ( !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(a1 + 540)) && v65 && *(uint8_t *)(v65[328] + 5821) )
    Member = (uint32_t *)*BuildingPlacement::FindPosition(&v108, (uint32_t *)a1);
    if ( Member != (uint32_t *)g_UnitSelectionState )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 2, 0);
    v68 = *(uint32_t *)a1;
    v69 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&Member);
    (*(void (__thiscall **)(int, void *, int))(v68 + 1152))(a1, v69, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 492))(a1);
    v70 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&Member);
    TechnoClass::SetFocus((uint32_t *)a1, (int)v70);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 11, 0);
    goto LABEL_154;
    LABEL_151:
    TechnoClass::SetFocus((uint32_t *)a1, 0);
    goto LABEL_154;
    v71 = *(uint32_t *)(a1 + 536);
    if ( !v71 || v71 == *(uint32_t *)(a1 + 1444) )
    FootClass::ClearPathIndex((uint32_t *)a1);
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 0);
    else
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)a1 + 1152))(a1, v71, 1);
    else if ( v63 != 10 )
    v72 = *(uint32_t *)(a1 + 1732);
    if ( *(uint8_t *)(v72 + 3598) || *(uint8_t *)(v72 + 3599) )
    if ( !*(uint32_t *)(a1 + 536) )
    if ( !*(uint32_t *)(a1 + 1444) )
    (*(void (__thiscall **)(int, int *, int, uint32_t))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 0);
    goto LABEL_154;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 10, 0);
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, *(uint32_t *)(a1 + 536), 1);
    goto LABEL_151;
    LABEL_154:
    v73 = *(uint32_t *)(a1 + 160);
    v74 = *(uint32_t *)(a1 + 164);
    v110 = *(uint32_t *)(a1 + 156);
    v111 = v73;
    v112 = v74;
    v75 = Coord::To_Cell(&MapClass_Instance, &v110);
    if ( Cell::IsBridge(v75) && !*(uint32_t *)(a1 + 1444) && !*(uint32_t *)(a1 + 1468) && !*(uint32_t *)(a1 + 1432) )
    (*(void (__thiscall **)(int, int *, int, int))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 1);
    LABEL_159:
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 5 )
    v110 = *(uint32_t *)(a1 + 156);
    v111 = *(uint32_t *)(a1 + 160);
    v112 = *(uint32_t *)(a1 + 164);
    if ( !Tactical::IsCellVisible(&MapClass_Instance, &v110) )
    if ( *(uint8_t *)(a1 + 981) )
    v76 = *(uint32_t *)(a1 + 1492);
    if ( v76 )
    *(uint8_t *)(v76 + 130) = 1;
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 928))(a1);
    LOBYTE(v6) = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 248))(a1);
    return v6;
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)a1 + 1164))(a1, 0, 0, 0, 0);
    (*(void (__thiscall **)(int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(*(uint32_t *)a1 + 1160))(a1, 0, 0, 0, 0, 0);
    v77 = (int *)(a1 + 156);
    v110 = *(uint32_t *)(a1 + 156);
    v78 = *(uint32_t *)(a1 + 608);
    v111 = *(uint32_t *)(a1 + 160);
    v112 = *(uint32_t *)(a1 + 164);
    MapClass::RevealArea2(&v110, 0, v78 + 3, 0);
    if ( !*(uint8_t *)(a1 + 1745) && (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)a1 + 512))(a1) )
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 492))(a1);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3598) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != 16
    && *(uint32_t *)(a1 + 172) != 7
    && *(uint32_t *)(a1 + 180) != 7
    && !*(uint8_t *)(a1 + 1745) )
    v79 = Team::GetMember((uint32_t *)a1, 0);
    v80 = v79;
    if ( v79 )
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(v79 + 4) + 12))(v79 + 4) == 6
    && *(uint8_t *)(*(uint32_t *)(v80 + 1312) + 5819) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 3);
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3599) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != 16
    && *(uint32_t *)(a1 + 172) != 7
    && *(uint32_t *)(a1 + 180) != 7
    && !*(uint8_t *)(a1 + 1745) )
    v81 = Team::GetMember((uint32_t *)a1, 0);
    v82 = v81;
    if ( v81 )
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(v81 + 4) + 12))(v81 + 4) == 6
    && *(uint8_t *)(*(uint32_t *)(v82 + 1312) + 5820) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 3);
    if ( !*(uint32_t *)(a1 + 1444) && *(uint32_t *)(a1 + 1504) == -1 && !*(uint8_t *)(*(uint32_t *)(a1 + 1732) + 1710) )
    v83 = (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 792))(a1, 1);
    *(uint32_t *)(a1 + 748) = CurrentFrame;
    *(uint32_t *)(a1 + 752) = v114;
    *(uint32_t *)(a1 + 756) = v83 / 4;
    v110 = *v77;
    v111 = *(uint32_t *)(a1 + 160);
    v112 = *(uint32_t *)(a1 + 164);
    v84 = Coord::To_Cell(&MapClass_Instance, &v110);
    v85 = v84[59];
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 16))(*(uint32_t *)(a1 + 1652))
    && (*(int (__thiscall **)(int, uint32_t *, int, int, uint32_t, int))(*(uint32_t *)a1 + 428))(a1, v84, -1, -1, 0, 1) == 7
    && (!*(uint8_t *)(a1 + 140) || (v84[80] & 0x100) == 0)
    && !*(uint8_t *)(a1 + 973) )
    if ( *(uint32_t *)(a1 + 172) != 7 )
    v86 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v86 )
    v110 = *v77;
    v111 = *(uint32_t *)(a1 + 160);
    v87 = *(uint32_t *)(a1 + 164);
    v113 = *v77;
    v112 = v87;
    v114 = *(uint32_t *)(a1 + 160);
    v88 = *v77;
    v115 = *(uint32_t *)(a1 + 164);
    v101 = (void *)Return::HRESULT_Fail(v88, *(uint32_t *)(a1 + 160), *(uint32_t *)(a1 + 164));
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(
    *(uint32_t *)(a1 + 108),
    *((uint32_t *)RulesClass_Instance + 1002),
    v85,
    &v113);
    AnimClass::ctor(v86, VersusMultiplier, &v110, 0, 1, (void *)0x2600, v101, 0);
    v90 = *((uint32_t *)RulesClass_Instance + 1002);
    v91 = *(uint32_t *)(a1 + 108);
    v92 = (int *)(*(int (__thiscall **)(int, int *, uint32_t, uint32_t))(*(uint32_t *)a1 + 72))(a1, &v113, 0, 0);
    CreateSmokeEffectAt(v91, v90, *v92, v92[1], v92[2], v104, v105);
    LOBYTE(v6) = (*(int (__thiscall **)(int, char *, uint32_t, uint32_t, uint32_t, int))(*(uint32_t *)a1 + 364))(
    a1,
    &a5,
    0,
    *((uint32_t *)RulesClass_Instance + 1002),
    0,
    1);
    return v6;
    (*(void (__thiscall **)(int, int *, int, int))(*(uint32_t *)a1 + 372))(a1, &dword_B1CFE8, 1, 1);
    goto LABEL_202;
    if ( (*(int (__thiscall **)(int, int, void **))(*(uint32_t *)a1 + 632))(a1, 15, Building) != 1 )
    goto LABEL_105;
    TechnoClass::SetFocus((uint32_t *)a1, 0);
    *(uint8_t *)(a1 + 140) = 0;
    *(uint32_t *)(a1 + 196) = 0;
    TechnoClass::SetMember81((uint32_t *)a1, 0);
    TechnoClass::SetSpread((uint32_t *)a1, 0);
    v53 = *(uint32_t *)(a1 + 704);
    if ( v53 && *(uint32_t *)(v53 + 700) )
    CaptureManagerClass::FreeUnit(a1);
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 212))(a1);
    (*((void (__thiscall **)(void **, int))*Building + 229))(Building, a1);
    if ( *(uint8_t *)((*((int (__thiscall **)(void **))*Building + 33))(Building) + 1508) )
    TechnoClass::EnteredOpenTopped(a1);
    v54 = *(uint32_t *)(a1 + 1732);
    *(uint32_t *)(a1 + 284) = Building;
    if ( *(uint8_t *)(v54 + 1508) )
    CCINIClass::IterateNodes((uint32_t *)a1, 0);
    LOBYTE(v6) = (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 284))(a1);
    return v6;
}

