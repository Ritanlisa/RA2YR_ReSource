#include "unitclass.hpp"

void ** UnitClass::Create(void **this, void *a2, uint32_t *a3, int a4)
{
    int v5; // eax
    ObjectClass::ctor(this);
    *this = &SmudgeClass::`vftable';
    *(this + 43) = a2;
    *(this + 2) = &SmudgeClass::`vftable';
    *(this + 1) = &SmudgeClass::`vftable';
    *(this + 3) = &SmudgeClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 1));
    if ( dword_A8B1F0 < dword_A8B1E8
    || (byte_A8B1ED || !dword_A8B1E8)
    && dword_A8B1F4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(SmudgeClass_Array + 8))(
    &SmudgeClass_Array,
    dword_A8B1E8 + dword_A8B1F4,
    0) )
    v5 = dword_A8B1F0++;
    *((uint32_t *)dword_A8B1E4 + v5) = this;
    if ( *a3 != dword_B0B728 || a3[1] != dword_B0B72C || a3[2] != dword_B0B730 )
    dword_83FFD8 = a4;
    if ( !(unsigned __int8)ObjectClass::Deploy((void*374 *)this) )
    ObjectClass::Destroy((void*374 *)this);
    return this;
    dword_83FFD8 = -1;
    return this;
}

char  UnitClass::UnloadPassengers(int *this, int a2)
{
    int v2; // edi
    int v4; // edx
    uint8_t v6[4]; // [esp+8h] [ebp-4h] BYREF
    v2 = a2;
    if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((void*374 *)this) || v2 != 1 && v2 != 3 )
    return 0;
    a2 = *(uint32_t *)(*(int (__thiscall **)(int *, uint8_t *))(*this + 440))(this, v6);
    if ( IKnowWhatImDoing > 0 || ArmageddonMode || Cell::IsWalkable((int *)*(this + 43), &a2, 1) )
    UnitClass::CreateUnloadPlacementCraters(&a2);
    v4 = *this;
    *((uint8_t *)this + 116) = 0;
    (*(void (__thiscall **)(int *))(v4 + 248))(this);
    return 1;
}

// 0x006B4EA0
int  UnitClass::SaveLoadData(#374 *this, uint32_t *a2, int a3)
{
    int Register; // edi
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = &SmudgeClass::`vftable';
    a2[1] = &SmudgeClass::`vftable';
    a2[2] = &SmudgeClass::`vftable';
    a2[3] = &SmudgeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43);
    return Register;
}

int __stdcall UnitClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int  UnitClass::_vt34(uint32_t *this)
{
    return *(this + 43);
}

int UnitClass::_vt12()
{
    return 176;
}

int UnitClass::_vt11()
{
    return 29;
}

// 0x006B4F50
int __stdcall UnitClass::GetClassID(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448645;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

void ** UnitClass::DestroySmudge(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &SmudgeClass::`vftable';
    *(Block + 1) = &SmudgeClass::`vftable';
    *(Block + 2) = &SmudgeClass::`vftable';
    *(Block + 3) = &SmudgeClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(SmudgeClass_Array + 16))(&SmudgeClass_Array, &v5);
    if ( v3 != -1 && v3 < dword_A8B1F0 && v3 < --dword_A8B1F0 )
    do
    ++v3;
    *((uint32_t *)dword_A8B1E4 + v3 - 1) = *((uint32_t *)dword_A8B1E4 + v3);
    while ( v3 < dword_A8B1F0 );
    if ( WTFMode )
    ObjectClass::Undeploy((void*374 *)Block);
    *(Block + 43) = 0;
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  UnitClass::IsDeactivated(uint8_t *this)
{
    return *(this + 456);
}

int  UnitClass::Destructor(void **this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int Vtable3; // eax
    signed int v8; // ebx
    void*374 *v9; // ebp
    int v10; // edi
    void **v11; // edx
    char *v12; // ecx
    int v13; // ecx
    signed int v14; // ecx
    uint32_t *v15; // eax
    void **v17; // [esp+10h] [ebp-4h] BYREF
    v2 = (int)*(this + 439);
    *this = &UnitClass::`vftable';
    *(this + 1) = &UnitClass::`vftable';
    *(this + 2) = &UnitClass::`vftable';
    *(this + 3) = &off_7F5C44;
    if ( v2 )
    UnitClass::updateHarvesting();
    *(this + 439) = 0;
    if ( WTFMode )
    v3 = (int)*(this + 433);
    if ( v3 )
    if ( HouseClass::CanBuild(*(this + 135), v3, 0, 0) == -1 )
    *((uint8_t *)*(this + 135) + 508) = 1;
    if ( *(this + 373) )
    TeamClass::LiberateMember_Start(this, -1, 0);
    *(this + 373) = 0;
    HouseClass::DecrementUnitCount(*(this + 135), this);
    if ( !IKnowWhatImDoing && *(this + 70) )
    do
    v4 = LinkedList::Pop(this + 69);
    if ( v4 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v4 + 32))(v4, 1);
    while ( *(this + 70) );
    if ( (unsigned __int8)TechnoClass::CleanupDirection(this) && *(this + 435) != (void *)-1 )
    v5 = (*((int (__thiscall **)(void **, void ***))*this + 110))(this, &v17);
    HouseClass::DroppedFlag(v5, 0);
    *(this + 435) = (void *)-1;
    AbstractClass::AnnounceExpiredPointer(this);
    v17 = this;
    v6 = (*(int (__thiscall **)(int *, void ***))(UnitClass_Array + 16))(&UnitClass_Array, &v17);
    if ( v6 != -1 && v6 < g_HouseClass_BuildState && v6 < --g_HouseClass_BuildState )
    do
    ++v6;
    *((uint32_t *)g_UnitClassPool + v6 - 1) = *((uint32_t *)g_UnitClassPool + v6);
    while ( v6 < g_HouseClass_BuildState );
    Vtable3 = AbstractClass::GetVtable3((int)(this + 1));
    v8 = BuildingLoadQueue_Count;
    v17 = (void **)Vtable3;
    if ( BuildingLoadQueue_Count )
    if ( !BuildingLoadQueue_Dirty )
    qsort(BuildingLoadQueue_Array, BuildingLoadQueue_Count, 8u, CompareFunction);
    v8 = BuildingLoadQueue_Count;
    BuildingLoadQueue_Active = 0;
    BuildingLoadQueue_Dirty = 1;
    v9 = BuildingLoadQueue_Array;
    v10 = v8;
    while ( v10 > 0 )
    v11 = (void **)*((uint32_t *)v9 + 2 * (v10 / 2));
    v12 = (char *)v9 + 8 * (v10 / 2);
    if ( (int)v17 >= (int)v11 )
    if ( v11 == v17 )
    if ( v12 )
    v13 = (v12 - (char *)BuildingLoadQueue_Array) >> 3;
    if ( v13 != -1 )
    v14 = v13 + 1;
    if ( v14 < v8 )
    do
    v15 = (uint32_t *)((char *)BuildingLoadQueue_Array + 8 * v14++);
    *(v15 - 2) = *v15;
    *(v15 - 1) = v15[1];
    v8 = BuildingLoadQueue_Count;
    while ( v14 < (int)BuildingLoadQueue_Count );
    BuildingLoadQueue_Count = v8 - 1;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = 0;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = 0;
    BuildingLoadQueue_Active = 0;
    break;
    v9 = (void*374 *)(v12 + 8);
    v10 += -1 - v10 / 2;
    else
    v10 /= 2;
    *((uint8_t *)this + 144) = 0;
    return FootClass::Destruct(this);
}

char  UnitClass::UpdateRotation_TurretFacing_EMP(int this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    int v5; // edi
    int v6; // eax
    bool v7; // al
    int v8; // edi
    bool v9; // cl
    _WORD *v10; // eax
    int v11; // eax
    _WORD *Value; // [esp-4h] [ebp-14h]
    int v14; // [esp+8h] [ebp-8h] BYREF
    int v15; // [esp+Ch] [ebp-4h] BYREF
    v2 = *(uint32_t *)(this + 692);
    if ( v2 && !*(uint8_t *)(this + 1711) )
    v3 = *ObjectClass::CalcTargetFacing((void *)this, &v15, v2);
    v4 = *(uint32_t *)(this + 1732);
    v14 = v3;
    if ( *(uint8_t *)(v4 + 3233) )
    v5 = (*(int (__thiscall **)(int))(*(uint32_t *)this + 1012))(this);
    if ( IsNonNullPtr((uint32_t *)v5) && !*(uint8_t *)(*(uint32_t *)v5 + 299) )
    if ( *(uint8_t *)(v5 + 24) )
    Value = ProgressTimer::GetValue((_WORD *)(this + 904), &v15);
    FacingClass::Update((char *)(this + 928), Value);
    else
    FacingClass::Update((char *)(this + 928), &v14);
    else if ( *(uint32_t *)(v4 + 1660) == 1 && !*(uint32_t *)(this + 1444) )
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652))
    && *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v15) == (_WORD)v14 )
    FacingClass::Update((char *)(this + 904), &v14);
    v6 = *(uint32_t *)(this + 1732);
    if ( *(uint8_t *)(v6 + 3361) )
    LOWORD(v14) = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 928), &v15) >> 7) + 1) >> 1)
    + 8) << 8;
    FacingClass::Update((char *)(this + 928), &v14);
    goto LABEL_38;
    *(uint8_t *)(this + 1711) = 0;
    if ( *(uint8_t *)(v6 + 3233) )
    if ( TimerClass::Active(this + 928) )
    if ( !*(uint8_t *)(*(uint32_t *)(this + 1732) + 3361) )
    *(uint8_t *)(this + 1711) = TimerClass::Active(this + 928);
    else if ( !*(uint32_t *)(this + 692) )
    v7 = (int)CurrentFrame - *(uint32_t *)(this + 288) >= RulesClass_Instance->AIIonCannonEngineerValue[0] + 5;
    if ( *(uint32_t *)(this + 740) )
    v7 = 0;
    if ( (!*(uint8_t *)(*(uint32_t *)(this + 1732) + 3603) || !*(uint8_t *)(this + 1760)) && v7 )
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)this + 1012))(this);
    v9 = IsNonNullPtr((uint32_t *)v8) && *(uint8_t *)(v8 + 24);
    if ( !*(uint32_t *)(this + 1444) || v9 )
    v10 = ProgressTimer::GetValue((_WORD *)(this + 904), &v15);
    else
    if ( *(uint8_t *)(this + 1709) )
    goto LABEL_38;
    v10 = ObjectClass::CalcTargetFacing((void *)this, &v15, *(uint32_t *)(this + 1444));
    FacingClass::Update((char *)(this + 928), v10);
    LABEL_38:
    LOBYTE(v11) = *(uint8_t *)(*(uint32_t *)(this + 1732) + 3233);
    if ( (uint8_t)v11 )
    v11 = TimerClass::Active(this + 928);
    *(uint32_t *)(this + 1184) = v11;
    return v11;
}

char  UnitClass::SimpleDeployerDeploy(int *this)
{
    int v2; // eax
    int v3; // eax
    void **v4; // eax
    void **v5; // eax
    int v6; // eax
    wchar_t *v7; // ecx
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v12; // [esp+4h] [ebp-Ch] BYREF
    int v13; // [esp+8h] [ebp-8h]
    int v14; // [esp+Ch] [ebp-4h]
    v2 = *(this + 433);
    if ( *(uint8_t *)(v2 + 3603) )
    if ( (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0
    || (v2 = (*(int (__thiscall **)(int *))(*this + 132))(this), *(uint8_t *)(v2 + 1709)) )
    LOBYTE(v2) = *((uint8_t *)this + 1760);
    if ( !(uint8_t)v2 )
    if ( !*((uint8_t *)this + 308) && (*(int (__thiscall **)(int *))(*this + 456))(this) > 0 )
    *((uint8_t *)this + 308) = 1;
    if ( *((uint8_t *)this + 1761) && (v3 = *(this + 76)) != 0 )
    if ( *(this + 62) >= *(uint32_t *)(*(uint32_t *)(v3 + 200) + 704) + *(uint32_t *)(*(uint32_t *)(v3 + 200) + 692) - 1 )
    *((_WORD *)this + 880) = 1;
    else if ( !*((uint8_t *)this + 308) )
    if ( *(uint32_t *)(*(this + 433) + 1724) )
    if ( !*(this + 76) )
    v4 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v4 )
    v12 = *(this + 39);
    v13 = *(this + 40);
    v14 = *(this + 41);
    v5 = AnimClass::ctor(v4, *(void **)(*(this + 433) + 1724), &v12, 0, 1, (void *)0x600, 0, 0);
    else
    v5 = 0;
    *(this + 76) = (int)v5;
    BuildingClass::AimTurret(v5, this);
    *(uint32_t *)(*(this + 76) + 212) = (*(int (__thiscall **)(int *))(*this + 484))(this);
    v6 = *(this + 76);
    *(this + 62) = *(uint32_t *)(*(uint32_t *)(v6 + 200) + 692);
    v7 = CurrentFrame;
    v8 = *(uint32_t *)(*(uint32_t *)(v6 + 200) + 688);
    *(this + 67) = v8;
    *(this + 64) = (int)v7;
    *(this + 65) = v13;
    *(this + 66) = v8;
    *((uint8_t *)this + 1761) = 1;
    else
    *((uint8_t *)this + 1760) = 1;
    v2 = (*(int (__thiscall **)(int *))(*this + 132))(this);
    if ( *(uint32_t *)(v2 + 1388) != -1 )
    v12 = *(this + 39);
    v13 = *(this + 40);
    v9 = *this;
    v14 = *(this + 41);
    v10 = (*(int (__thiscall **)(int *))(v9 + 132))(this);
    LOBYTE(v2) = StartAudioControllerAt(*(uint32_t *)(v10 + 1388), (int)&v12, 0);
    return v2;
}

char  UnitClass::SimpleDeployerUndeploy(int this)
{
    int v2; // eax
    int v3; // eax
    int v4; // edx
    int v5; // edi
    __int16 *PlacementCellsAlt; // eax
    void *v7; // eax
    void **v8; // eax
    void **v9; // eax
    int v10; // eax
    wchar_t *v11; // ecx
    int v12; // eax
    int v13; // edx
    int v14; // eax
    int v16; // [esp+8h] [ebp-10h] BYREF
    int v17; // [esp+Ch] [ebp-Ch] BYREF
    int v18; // [esp+10h] [ebp-8h]
    int v19; // [esp+14h] [ebp-4h]
    LOBYTE(v2) = *(uint8_t *)(this + 1760);
    if ( (uint8_t)v2 )
    if ( *(uint8_t *)(this + 1762) && (v3 = *(uint32_t *)(this + 304)) != 0 )
    if ( *(uint32_t *)(this + 248) >= *(uint32_t *)(*(uint32_t *)(v3 + 200) + 704)
    + *(uint32_t *)(*(uint32_t *)(v3 + 200) + 692)
    - 2 )
    v4 = *(uint32_t *)this;
    *(uint8_t *)(this + 1760) = 0;
    *(uint8_t *)(this + 1762) = 0;
    if ( *(uint8_t *)((*(int (__thiscall **)(int))(v4 + 132))(this) + 1709) )
    v5 = *(uint32_t *)this;
    PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v16, this);
    v7 = CellCoord::To_CellObj(&MapClass_Instance, PlacementCellsAlt);
    (*(void (__thiscall **)(int, void *, int))(v5 + 1152))(this, v7, 1);
    else if ( *(uint32_t *)(*(uint32_t *)(this + 1732) + 1724) )
    if ( !*(uint32_t *)(this + 304) )
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    v17 = *(uint32_t *)(this + 156);
    v18 = *(uint32_t *)(this + 160);
    v19 = *(uint32_t *)(this + 164);
    v9 = AnimClass::ctor(v8, *(void **)(*(uint32_t *)(this + 1732) + 1724), &v17, 0, 1, (void *)0x600, 0, 1);
    else
    v9 = 0;
    *(uint32_t *)(this + 304) = v9;
    BuildingClass::AimTurret(v9, (uint8_t *)this);
    *(uint32_t *)(*(uint32_t *)(this + 304) + 212) = (*(int (__thiscall **)(int))(*(uint32_t *)this + 484))(this);
    v10 = *(uint32_t *)(this + 304);
    *(uint32_t *)(this + 248) = *(uint32_t *)(*(uint32_t *)(v10 + 200) + 692);
    v11 = CurrentFrame;
    v12 = *(uint32_t *)(*(uint32_t *)(v10 + 200) + 688);
    *(uint32_t *)(this + 268) = v12;
    *(uint32_t *)(this + 256) = v11;
    *(uint32_t *)(this + 260) = v18;
    *(uint32_t *)(this + 264) = v12;
    *(uint8_t *)(this + 1762) = 1;
    else
    *(uint8_t *)(this + 1760) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 196))(this) )
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 1136))(this);
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)this + 132))(this);
    if ( *(uint32_t *)(v2 + 1392) != -1 )
    v17 = *(uint32_t *)(this + 156);
    v18 = *(uint32_t *)(this + 160);
    v13 = *(uint32_t *)this;
    v19 = *(uint32_t *)(this + 164);
    v14 = (*(int (__thiscall **)(int))(v13 + 132))(this);
    LOBYTE(v2) = StartAudioControllerAt(*(uint32_t *)(v14 + 1392), (int)&v17, 0);
    return v2;
}

int  UnitClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, char a6)
{
    __int64 v7; // rax
    int v8; // edx
    bool v9; // al
    int Type; // esi
    int v11; // eax
    int v12; // edi
    int v13; // ecx
    int v14; // edx
    int result; // eax
    int v16; // ecx
    int v17; // eax
    int v18; // eax
    __int16 *NeighbourContent; // eax
    int v20; // ecx
    int v21; // eax
    int v22; // esi
    int v23; // ecx
    bool v24; // al
    int v25; // ebp
    int v26; // edi
    int v27; // eax
    int v28; // esi
    int v29; // eax
    uint8_t *v30; // esi
    int v31; // eax
    int v32; // ecx
    _WORD *v33; // edi
    _WORD *v34; // eax
    uint32_t *v35; // eax
    int v36; // eax
    uint8_t *v37; // eax
    uint8_t *v38; // eax
    int v39; // ecx
    __int16 v40; // dx
    uint32_t *v41; // eax
    int v42; // eax
    unsigned int v43; // ebp
    __int16 v44; // cx
    int v45; // eax
    int v46; // edx
    unsigned int v47; // edi
    double v48; // st7
    uint32_t *v49; // edi
    uint32_t *v50; // eax
    int v51; // ecx
    int v52; // edx
    int v53; // eax
    int v54; // ecx
    double v55; // st7
    uint8_t *v56; // edi
    uint32_t *v57; // eax
    int v58; // eax
    int v59; // eax
    int v60; // eax
    int v61; // eax
    uint8_t *Building; // eax
    bool v63; // [esp+47h] [ebp-7Dh] BYREF
    char v64; // [esp+48h] [ebp-7Ch]
    bool v65; // [esp+49h] [ebp-7Bh]
    char v66; // [esp+4Ah] [ebp-7Ah]
    char v67; // [esp+4Bh] [ebp-79h]
    int v68; // [esp+4Ch] [ebp-78h]
    int v69; // [esp+50h] [ebp-74h]
    int v70; // [esp+54h] [ebp-70h]
    uint8_t *v71; // [esp+58h] [ebp-6Ch]
    uint8_t *v72; // [esp+5Ch] [ebp-68h] BYREF
    int v73; // [esp+60h] [ebp-64h] BYREF
    unsigned int v74; // [esp+64h] [ebp-60h]
    unsigned int v75; // [esp+68h] [ebp-5Ch]
    int v76; // [esp+6Ch] [ebp-58h] BYREF
    int v77; // [esp+70h] [ebp-54h] BYREF
    int v78; // [esp+74h] [ebp-50h] BYREF
    int v79; // [esp+78h] [ebp-4Ch] BYREF
    int v80; // [esp+7Ch] [ebp-48h]
    int v81; // [esp+80h] [ebp-44h]
    int v82; // [esp+84h] [ebp-40h]
    int v83; // [esp+88h] [ebp-3Ch]
    int v84; // [esp+8Ch] [ebp-38h]
    int v85; // [esp+90h] [ebp-34h]
    int v86; // [esp+94h] [ebp-30h]
    int v87; // [esp+98h] [ebp-2Ch]
    int v88; // [esp+9Ch] [ebp-28h]
    uint8_t v89[12]; // [esp+A0h] [ebp-24h] BYREF
    uint8_t v90[12]; // [esp+ACh] [ebp-18h] BYREF
    uint8_t v91[12]; // [esp+B8h] [ebp-Ch] BYREF
    v63 = (*(uint32_t *)(a2 + 320) & 0x100) != 0
    && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
    v8 = *(uint32_t *)(a2 + 84);
    v64 = *(uint8_t *)(a2 + 292);
    v9 = (*(uint32_t *)(a2 + 292) & 0x20) != 0;
    v69 = v8;
    v65 = v9;
    Type = InfantryClass::GetType((__int16 *)a2);
    v11 = *(uint32_t *)(*(uint32_t *)(this + 1732) + 3580);
    if ( v11 == -1 )
    goto LABEL_26;
    v12 = *(uint32_t *)(a2 + 236);
    if ( v12 != 10 )
    goto LABEL_19;
    v13 = *((uint32_t *)g_FrameCounter + *(uint32_t *)(a2 + 56));
    v14 = *(uint32_t *)(v13 + 740);
    if ( v14 == 5 && *(uint32_t *)(v13 + 744) == 3 || v14 == 4 && *(uint32_t *)(v13 + 744) == 3 )
    if ( *(uint8_t *)(a2 + 282) != 2 )
    return 7;
    goto LABEL_19;
    if ( v14 != 3 || *(uint32_t *)(v13 + 744) != 4 && *(uint32_t *)(v13 + 744) != 5 )
    LABEL_19:
    v16 = a2;
    goto LABEL_20;
    v16 = a2;
    if ( *(uint8_t *)(a2 + 282) != 6 )
    return 7;
    LABEL_20:
    if ( v12 != v11 && v12 != 10 )
    v17 = *(uint32_t *)(v16 + 68);
    if ( v17 < 237 || v17 > 238 || a4 == *(char *)(v16 + 283) )
    return 7;
    LABEL_26:
    if ( a3 == 8 )
    if ( Type && *(uint32_t *)(Type + 40) )
    return 0;
    return 7;
    if ( Type )
    v18 = abs32(a3 - *(uint32_t *)(Type + 44));
    if ( v18 > 2 && v18 < 6 && a3 != -1 )
    return 7;
    NeighbourContent = (__int16 *)Cell::GetNeighbourContent((uint32_t *)a2, ((uint8_t)a3 - 4) & 7);
    v20 = InfantryClass::GetType(NeighbourContent);
    if ( v20 )
    v21 = abs32((((uint8_t)a3 - 4) & 7) - *(uint32_t *)(v20 + 44));
    if ( v21 > 2 && v21 < 6 && a3 != -1 )
    return 7;
    v22 = a5;
    result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(uint32_t *)this + 432))(
    this,
    a2,
    a3,
    &a4,
    &v63,
    a5);
    if ( result != 7 )
    v23 = a4;
    if ( a4 != -1 && (*(uint32_t *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 )
    v64 = *(uint8_t *)(a2 + 296);
    v24 = (*(uint32_t *)(a2 + 296) & 0x20) != 0;
    v69 = *(uint32_t *)(a2 + 88);
    v65 = v24;
    if ( !IKnowWhatImDoing )
    if ( !Type::CheckAmbiguity(&MapClass_Instance, a2, 1)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 800))(this)
    && *(uint8_t *)(this + 981) )
    return 7;
    v23 = a4;
    result = FootClass::Destru_vt107(a2, a3, v23, v22, a6);
    v25 = result;
    v68 = result;
    if ( result != 7 )
    v26 = a2;
    v27 = *(uint32_t *)(a2 + 68);
    if ( v27 != -1 )
    v28 = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v27];
    if ( *(uint8_t *)(v28 + 682)
    && !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540))
    && !GameMode_Current[0] )
    return 7;
    if ( *(uint8_t *)(v28 + 680) )
    if ( *(uint8_t *)(v28 + 557)
    && (*(uint8_t *)(*(uint32_t *)(this + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
    || *(uint8_t *)(v28 + 680) && *(uint32_t *)(*(uint32_t *)(this + 1732) + 1460) == 12 )
    if ( !HouseClass::IsAllied(*(uint32_t **)(this + 540), *(uint32_t *)(a2 + 80)) )
    goto LABEL_74;
    goto LABEL_71;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    return 7;
    v29 = *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) + 172);
    if ( !*(uint8_t *)(v29 + 324) && (!*(uint8_t *)(v29 + 327) || *(uint32_t *)(v28 + 156) != 6) )
    return 7;
    if ( HouseClass::IsAllied(*(uint32_t **)(this + 540), *(uint32_t *)(a2 + 80)) )
    LABEL_71:
    if ( v25 >= 4 )
    goto LABEL_74;
    v25 = 4;
    goto LABEL_73;
    if ( v25 < 5 )
    v25 = 5;
    LABEL_73:
    v68 = v25;
    LABEL_74:
    v67 = 0;
    if ( v63 )
    v30 = *(uint8_t **)(a2 + 232);
    else
    v30 = *(uint8_t **)(a2 + 228);
    if ( v30 )
    while ( 1 )
    if ( (uint8_t *)this == v30 )
    v65 = 0;
    v64 &= ~0x20u;
    goto LABEL_153;
    v31 = *(uint32_t *)(this + 1692);
    if ( v31 )
    v32 = *(uint32_t *)(v31 + 40);
    if ( v32 )
    v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v32 + 440))(v32, &v76);
    v34 = (_WORD *)(*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)v30 + 440))(v30, &v77);
    if ( *v34 == *v33 && v34[1] == v33[1] )
    return 0;
    v26 = a2;
    if ( Array::Contains((int *)this, (v30[20] & 1) != 0 ? (unsigned int)v30 : 0)
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30) == 6
    && !(unsigned __int8)UnitClass::IsCellBlockedByBridge(v26) )
    goto LABEL_153;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3608)
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30) == 1
    && *(uint8_t *)(*((uint32_t *)v30 + 433) + 3608) )
    return 0;
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30) == 6 )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 7
    && v30 == *(uint8_t **)(this + 1444)
    && *(uint8_t *)(*((uint32_t *)v30 + 328) + 5806)
    && !(*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 468))(v30)
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 9
    && v30 == *(uint8_t **)(this + 1444)
    && *(uint8_t *)(*((uint32_t *)v30 + 328) + 5805)
    && !(*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 468))(v30) )
    return 0;
    if ( *(uint8_t *)(*((uint32_t *)v30 + 328) + 5805) )
    v35 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 72))(this, v89);
    LOWORD(v70) = *v35 / 256;
    HIWORD(v70) = v35[1] / 256;
    v73 = v70;
    v36 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v73) + 57);
    if ( v36 )
    while ( (uint8_t *)v36 != v30 )
    v36 = *(uint32_t *)(v36 + 48);
    if ( !v36 )
    goto LABEL_105;
    return 0;
    LABEL_105:
    v37 = (uint8_t *)*((uint32_t *)v30 + 328);
    if ( v37[5815] )
    if ( !BuildingClass::IsPoweredOn(v30) )
    if ( (unsigned __int8)House::IsAlliedWith(*((void*375 **)v30 + 135), *(void*375 **)(this + 540)) )
    if ( v25 < 3 )
    v25 = 3;
    v68 = 3;
    else
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    return 7;
    if ( v25 < 5 )
    v25 = 5;
    v68 = 5;
    goto LABEL_153;
    if ( (v37[5801] || v37[5803])
    && Cell::IsBridge((uint32_t *)v26) == (uint32_t *)v30
    && !(unsigned __int8)UnitClass::IsCellBlockedByBridge(v26) )
    goto LABEL_153;
    v38 = (uint8_t *)*((uint32_t *)v30 + 328);
    if ( v38[5889] )
    goto LABEL_153;
    if ( v38[5823] )
    v39 = *((uint32_t *)v30 + 390);
    if ( v39 == 12 || v39 == 8 )
    goto LABEL_153;
    if ( v38[5824] )
    if ( *(uint8_t *)(*((uint32_t *)v30 + 135) + 506) )
    return 7;
    goto LABEL_153;
    if ( v38[5488] )
    v40 = HIWORD(g_CellDirectionOffsets) + *(_WORD *)(v26 + 38);
    LOWORD(v71) = g_CellDirectionOffsets + *(_WORD *)(v26 + 36);
    HIWORD(v71) = v40;
    v72 = v71;
    v41 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v72);
    if ( Cell::IsBridge(v41) != (uint32_t *)v30 )
    goto LABEL_153;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 7
    && v30 == *(uint8_t **)(this + 1444)
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30) == 1 )
    return 0;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) == 11 && *(uint8_t **)(this + 536) == v30 )
    return 7;
    if ( (v30[20] & 4) == 0 )
    break;
    v42 = *((uint32_t *)v30 + 361);
    v72 = v30;
    if ( !v42 && !TimerClass::Active((int)(v30 + 904)) )
    if ( !*((uint32_t *)v30 + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)v30 + 413) + 16))(*((uint32_t *)v30 + 413)) )
    goto LABEL_139;
    v66 = 1;
    LABEL_140:
    if ( Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), (int)v30) )
    if ( v66 )
    v43 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v78) >> 12) + 1) >> 1) & 7;
    v44 = *(_WORD *)ProgressTimer::GetValue((_WORD *)v30 + 452, &v79) + 0x7FFF;
    v45 = *((uint32_t *)v30 + 39);
    LOWORD(v74) = v44;
    v86 = v45;
    v87 = *((uint32_t *)v30 + 40);
    v46 = *((uint32_t *)v30 + 41);
    v83 = *(uint32_t *)(this + 156);
    v88 = v46;
    v84 = *(uint32_t *)(this + 160);
    v85 = *(uint32_t *)(this + 164);
    v47 = (((v74 >> 12) + 1) >> 1) & 7;
    v48 = Math::CalcAngle((double)v84 - (double)v87, (double)v45 - (double)v83);
    LOWORD(v75) = Math::RoundToInt((v48 - 1.570796326794897) * -10430.06004058427);
    if ( v43 == v47 )
    v49 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint8_t *))(*(uint32_t *)v30 + 72))(v30, v90);
    v50 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 72))(this, v91);
    v51 = *v50 - *v49;
    v52 = v50[1];
    v53 = v50[2];
    v80 = v51;
    v54 = v49[2];
    v81 = v52 - v49[1];
    v82 = v53 - v54;
    v55 = Math::Sqrt(
    (double)v80 * (double)v80
    + (double)(v53 - v54) * (double)(v53 - v54)
    + (double)v81 * (double)v81);
    if ( (int)Math::RoundToInt(v55) <= 511 && ((((v75 >> 12) + 1) >> 1) & 7) == v43 )
    return 7;
    v56 = v72;
    if ( v72[1718] && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v72 + 44))(v72) != 15 )
    goto LABEL_150;
    if ( !*((uint32_t *)v56 + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)v56 + 413) + 164))(*((uint32_t *)v56 + 413)) )
    LABEL_150:
    if ( v68 < 2 )
    v68 = 2;
    else
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30) == 6 )
    return 7;
    if ( v25 < 6 )
    v25 = 6;
    v68 = 6;
    goto LABEL_153;
    else
    v57 = AbstractClass::IsTechno(v30);
    if ( v57 && v57[136] == 2 )
    if ( v25 < 1 )
    v25 = 1;
    v68 = 1;
    goto LABEL_153;
    else if ( (*(uint8_t *)(*(uint32_t *)(this + 1732) + 3368)
    || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
    && ObjectClass::IsCrushable(v30, (uint32_t **)this) )
    if ( !Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), (int)v30) )
    v67 = 1;
    goto LABEL_153;
    else
    if ( !*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    && !*(uint8_t *)(*(uint32_t *)(this + 1732) + 3220) )
    return 7;
    v58 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v30 + 44))(v30);
    if ( v58 == 6 )
    if ( *(uint8_t *)(*((uint32_t *)v30 + 328) + 5814) )
    return 7;
    else if ( v58 == 36 )
    v59 = (*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 740))(this, v30);
    v60 = *(uint32_t *)(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 1016))(this, v59);
    if ( !v60 )
    return 7;
    v61 = *(uint32_t *)(v60 + 172);
    if ( !v61 || !*(uint8_t *)(v61 + 327) )
    return 7;
    if ( v25 < 5 )
    v25 = 5;
    v68 = 5;
    goto LABEL_153;
    v25 = v68;
    v26 = a2;
    LABEL_153:
    v30 = (uint8_t *)*((uint32_t *)v30 + 12);
    if ( !v30 )
    goto LABEL_154;
    v72 = 0;
    LABEL_139:
    v66 = 0;
    goto LABEL_140;
    LABEL_154:
    if ( !v63 && flt_89EA40[9 * *(uint32_t *)(v26 + 236) + *(uint32_t *)(*(uint32_t *)(this + 1732) + 1660)] == 0.0 )
    return 7;
    if ( !v25 )
    if ( v67 )
    if ( v65 )
    if ( !CellClass::FindBuilding((uint32_t *)v26, 0) )
    return 2;
    Building = CellClass::FindBuilding((uint32_t *)v26, 0);
    if ( !ObjectClass::IsCrushable(Building, (uint32_t **)this) )
    return 2;
    else if ( (v64 & 0x3F) != 0 )
    if ( v65 || v69 != -1 && HouseClass::IsAllied(*(uint32_t **)(this + 540), v69) )
    return 2;
    else if ( !*(uint8_t *)(*(uint32_t *)(this + 1732) + 3368)
    && !TechnoTypeClass::HasVoiceResponse((float *)this, 17) )
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3220)
    || *(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0)
    && *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(
    this,
    0)
    + 160)
    + 677) )
    return 5;
    return 7;
    return v25;
    return result;
}

void * UnitClass::ApproachTarget_DisallowMoving(uint32_t *this, char a2)
{
    int v3; // eax
    uint8_t *v4; // edi
    int v5; // edi
    int v6; // eax
    int v7; // eax
    int v8; // eax
    uint8_t *v10; // eax
    if ( (unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135))
    || (v3 = *(this + 173)) == 0
    || *(this + 361)
    || (v4 = (*(uint8_t *)(v3 + 20) & 1) != 0 ? (uint8_t *)v3 : 0, !*(uint8_t *)(*(this + 433) + 3368))
    && !TechnoTypeClass::HasVoiceResponse((float *)this, 17)
    || ObjectClass::DistanceTo(this, *(this + 173)) >= RulesClass_Instance[1].PrerequisitePower[3]
    || !v4
    || !ObjectClass::IsCrushable(v4, (uint32_t **)this)
    || !*(uint8_t *)(*(this + 433) + 3373) && (unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135)) )
    if ( *(uint8_t *)(*(this + 433) + 3434) )
    v5 = *this;
    v6 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 740))(this, *(this + 173));
    v7 = *(uint32_t *)(*(int (__thiscall **)(uint32_t *, int))(v5 + 1016))(this, v6);
    if ( v7 )
    v8 = *(uint32_t *)(v7 + 160);
    if ( v8 )
    if ( *(uint8_t *)(v8 + 704) )
    if ( !a2 )
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    return (void *)*(this + 173);
    if ( !*(uint8_t *)(*(this + 433) + 3369) )
    return FootClass::CalculateApproachPath(this, 0);
    v10 = (uint8_t *)*(this + 173);
    if ( !v10 || *(uint8_t *)(*(this + 135) + 492) && *((uint8_t *)this + 1292) )
    return FootClass::CalculateApproachPath(this, 0);
    if ( (v10[20] & 2) == 0 || !ObjectClass::IsCrushable((v10[20] & 2) != 0 ? v10 : 0, (uint32_t **)this) )
    return FootClass::CalculateApproachPath(this, 0);
    if ( !a2 )
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    return (void *)*(this + 173);
}

void  UnitClass::AssignDestination_SyncLog(uint32_t *this, __int64 a2)
{
    __int16 *v3; // ebx
    int v4; // ecx
    int v5; // eax
    int v6; // esi
    int v7; // eax
    uint32_t *Value; // esi
    char v9; // al
    int Member; // eax
    int v11; // eax
    uint32_t *v12; // eax
    int *v13; // esi
    int v14; // edx
    __int16 *v15; // eax
    __int16 v16; // dx
    uint32_t *v17; // eax
    int *v18; // eax
    void *v19; // eax
    int v20; // eax
    int v21; // edi
    uint32_t *v22; // esi
    int v23; // eax
    int v24; // eax
    int v25; // ecx
    int v26; // eax
    int v27; // ecx
    int v28; // eax
    int v29; // eax
    int TileIndex; // eax
    int v31; // edx
    uint32_t *v32; // eax
    void *v33; // eax
    uint32_t *v34; // eax
    uint32_t *v35; // eax
    char v36; // bl
    int RegionMap; // esi
    void *v38; // esi
    double v39; // st7
    char v40; // al
    int v41; // ecx
    int v42; // eax
    int v43; // ecx
    LPVOID *v44; // ebx
    int v45; // edi
    int v46; // eax
    int v47; // esi
    uint32_t *v48; // eax
    LPVOID v49; // eax
    int v50; // eax
    int v51; // eax
    LPVOID v52; // eax
    int v53; // eax
    int v54; // eax
    int v55; // eax
    void *v56; // eax
    int (__stdcall ***v57)(uint32_t, void *, __int64 *); // eax
    int v58; // esi
    void *v59; // edi
    int v60; // ecx
    int v61; // esi
    LPVOID v62; // esi
    LPVOID v63; // eax
    uint32_t *v64; // esi
    int v65; // eax
    int (__stdcall ***Checked)(uint32_t, void *, __int64 *); // eax
    int v67; // esi
    LPVOID v68; // eax
    void *v69; // edi
    uint32_t *v70; // eax
    int GroundHeight; // eax
    uint32_t *v72; // eax
    uint32_t *v73; // eax
    void *v74; // eax
    uint32_t *v75; // eax
    void *v76; // eax
    uint32_t *v77; // eax
    int v78; // eax
    __int16 *v79; // eax
    int v80; // eax
    int **v81; // ebx
    int (__stdcall ***v82)(uint32_t, void *, __int64 *); // eax
    int v83; // esi
    int v84; // eax
    int v85; // edi
    int v86; // eax
    int InstanceCOM; // eax
    void *v88; // eax
    int (__stdcall ***v89)(uint32_t, void *, __int64 *); // eax
    int v90; // esi
    void *v91; // edi
    int v92; // ecx
    int v93; // esi
    int *v94; // esi
    LPVOID v95; // eax
    int *v96; // esi
    int v97; // edi
    unsigned __int8 *v98; // eax
    int *v99; // ebx
    void *v100; // edi
    int *v101; // esi
    int *v102; // esi
    int v103; // eax
    int v104; // ecx
    int v105; // ecx
    int v106; // edx
    int v107; // eax
    uint32_t *v108; // ecx
    int v109; // eax
    int v110; // eax
    uint32_t *v111; // esi
    int v112; // eax
    int *v113; // ecx
    int *v114; // edx
    int v115; // eax
    int v116; // ebx
    int v117; // eax
    int v118; // ebx
    int v119; // kr28_4
    int v120; // eax
    int v121; // eax
    int v122; // edx
    int v123; // [esp+D0h] [ebp-BCh]
    int v124; // [esp+D0h] [ebp-BCh]
    char v125; // [esp+10Fh] [ebp-7Dh]
    char v126; // [esp+110h] [ebp-7Ch]
    char v127; // [esp+110h] [ebp-7Ch]
    char IsBuildableAdvanced; // [esp+112h] [ebp-7Ah]
    char v129; // [esp+113h] [ebp-79h]
    void *v130; // [esp+114h] [ebp-78h] BYREF
    LPVOID v131[2]; // [esp+118h] [ebp-74h] BYREF
    int *v132; // [esp+120h] [ebp-6Ch]
    LPVOID ppv; // [esp+124h] [ebp-68h] BYREF
    LPVOID v134; // [esp+128h] [ebp-64h] BYREF
    int *v135; // [esp+12Ch] [ebp-60h] BYREF
    int *v136; // [esp+130h] [ebp-5Ch] BYREF
    int *v137; // [esp+134h] [ebp-58h] BYREF
    __int64 v138; // [esp+138h] [ebp-54h] BYREF
    int v139; // [esp+140h] [ebp-4Ch]
    uint32_t v140[2]; // [esp+144h] [ebp-48h] BYREF
    int v141; // [esp+14Ch] [ebp-40h]
    uint32_t v142[3]; // [esp+150h] [ebp-3Ch] BYREF
    __int16 v143[4]; // [esp+15Ch] [ebp-30h] BYREF
    int v144; // [esp+164h] [ebp-28h]
    uint8_t v145[16]; // [esp+16Ch] [ebp-20h] BYREF
    uint8_t v146[16]; // [esp+17Ch] [ebp-10h] BYREF
    v3 = (__int16 *)a2;
    if ( *(uint8_t *)(*(this + 433) + 3434) )
    if ( !(uint32_t)a2 )
    v4 = *(this + 361);
    if ( v4 )
    v5 = *(this + 173);
    if ( v5 )
    if ( v4 == v5
    || (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 11
    && ((v6 = *(this + 361)) != 0
    ? (v7 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v6 + 44))(*(this + 361)) == 11 ? v6 : 0)
    : (v7 = 0),
    *(uint32_t *)(v7 + 228) == *(this + 173))
    || (LOWORD(v136) = 0x4000,
    Value = ProgressTimer::GetValue((_WORD *)this + 452, &v138),
    LOWORD(v137) = *(_WORD *)ObjectClass::CalcTargetFacing(this, (int *)&v135, *(this + 173))
    - *(_WORD *)Value,
    UnitClass::CompareCoordinateMagnitude((__int16 *)&v136, (__int16 *)&v137)) )
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 1 )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 496))(this, 1);
    return;
    if ( (uint32_t)a2 != *(this + 361) || *((uint8_t *)this + 504) )
    v9 = *((uint8_t *)this + 1760);
    *((uint8_t *)this + 504) = 0;
    if ( v9 )
    if ( !*(this + 172) )
    LABEL_366:
    FootClass::ClearPathIndex(this);
    return;
    else if ( *((uint8_t *)this + 1761) || *((uint8_t *)this + 1762) )
    goto LABEL_366;
    if ( Team::AllMembersValid(this) )
    if ( *(int *)(*(this + 433) + 1504) > 0 )
    Member = Team::GetMember(this, 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)Member + 44))(Member) == 15 )
    if ( !(uint32_t)a2 )
    goto LABEL_49;
    if ( (*(uint8_t *)(a2 + 20) & 1) != 0 && !Array::Contains(this, a2) )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    if ( (uint32_t)a2 )
    if ( Team::AllMembersValid(this) )
    if ( !(*(int (__thiscall **)(uint32_t *))(*this + 388))(this) )
    if ( *((uint8_t *)this + 1048) )
    v11 = Team::GetMember(this, 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v11 + 44))(v11) == 2 )
    v12 = (uint32_t *)Team::GetMember(this, 0);
    if ( *(uint8_t *)(v12[433] + 3580) )
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*v12 + 1152))(v12, 0, 1);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 25);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    v13 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)a2 + 44))(a2) == 6 ? (int *)a2 : 0;
    LABEL_36:
    v14 = *this;
    v137 = v13;
    if ( (*(int (__thiscall **)(uint32_t *))(v14 + 388))(this) == 16 || *(this + 45) == 16 )
    v15 = (__int16 *)(*(int (__thiscall **)(uint32_t *, __int64 *))(*this + 440))(this, &v138);
    v16 = *v15;
    LOWORD(v15) = HIWORD(Direction_Y_Offsets) + v15[1];
    LOWORD(v135) = Direction_Y_Offsets + v16;
    HIWORD(v135) = (_WORD)v15;
    v136 = v135;
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v136);
    v18 = Cell::IsBridge(v17);
    if ( v18 )
    if ( *(uint8_t *)(*(this + 433) + 3598) && v18[353] )
    BuildingClass::ClearAnims(v18, 10);
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 7 && *(this + 45) != 7
    || Team::AllMembersValid(this) )
    *(this + 376) = -1;
    goto LABEL_80;
    v19 = AbstractClass::IsTechnoType((void *)a2);
    if ( v19 && (*(int (__thiscall **)(void *))(*(uint32_t *)v19 + 44))(v19) == 1 )
    if ( (uint32_t)a2 )
    v20 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)a2 + 44))(a2) == 1 ? a2 : 0;
    else
    v20 = 0;
    *(this + 320) = v20;
    TechnoClass::SetFocus(this, 0);
    v3 = 0;
    LODWORD(a2) = 0;
    goto LABEL_80;
    if ( !v13 )
    goto LABEL_74;
    if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 && *(uint8_t *)(v13[328] + 5806) )
    *(this + 320) = v13;
    TechnoClass::SetFocus(this, 0);
    v3 = 0;
    LODWORD(a2) = 0;
    goto LABEL_80;
    if ( (*(int (__thiscall **)(int *))(*v13 + 44))(v13) == 6 )
    if ( Team::AllMembersValid(v13) )
    if ( !*(uint8_t *)(v13[328] + 5803) )
    TechnoClass::SetFocus(this, a2);
    if ( *(uint8_t *)(v13[328] + 5803) )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    v3 = 0;
    LODWORD(a2) = 0;
    if ( *(uint8_t *)(v13[328] + 5801) )
    if ( BuildingClass::GetHealthRatio(this) >= *(double *)&RulesClass_Instance[1].ChronoBeam )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    v3 = 0;
    else
    v3 = 0;
    *(this + 320) = v13;
    LODWORD(a2) = 0;
    goto LABEL_80;
    v21 = *(this + 361);
    if ( (*(int (__thiscall **)(uint32_t *, int, int *))(*this + 632))(this, 14, v13) != 1 )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    if ( !*(uint8_t *)(v13[328] + 5801) )
    goto LABEL_80;
    goto LABEL_69;
    if ( *(uint8_t *)(v13[328] + 5811) && *(this + 361) != v21 )
    v3 = (__int16 *)*(this + 361);
    LODWORD(a2) = v3;
    else
    LABEL_74:
    if ( !(uint32_t)a2 || (*(uint8_t *)(a2 + 20) & 1) == 0 )
    goto LABEL_80;
    if ( Team::AllMembersValid((int *)a2) )
    LABEL_69:
    TechnoClass::SetFocus(this, a2);
    goto LABEL_80;
    if ( (*(int (__thiscall **)(uint32_t *, int, uint32_t))(*this + 632))(this, 2, a2) == 1
    && (*(int (__thiscall **)(uint32_t *, int))(*this + 628))(this, 14) != 1 )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    LABEL_80:
    if ( v3 && *(uint8_t *)(*(this + 433) + 3372) )
    v22 = this + 413;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*v22 + 16))(*v22) )
    v23 = *v22;
    v135 = 0;
    if ( !v23 )
    goto LABEL_90;
    v24 = StreamClass::Set2(&v135, this + 413);
    if ( v24 < 0 && v24 != -2147467262 )
    WinAPI::Wrapper(v24);
    if ( !v135 )
    LABEL_90:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int *, uint8_t *))(*v135 + 12))(v135, v145);
    if ( !memcmp(v145, &stru_7E9A30, 0x10u) )
    v25 = *(this + 365);
    if ( *(this + 367) < v25
    || (*((uint8_t *)this + 1465) || !v25)
    && (v26 = *(this + 368), v26 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*(this + 363) + 8))(
    this + 363,
    v26 + v25,
    0) )
    v27 = *(this + 367);
    if ( v27 )
    memcpy((void *)(*(this + 364) + 4), (const void *)*(this + 364), 4 * v27);
    *(uint32_t *)*(this + 364) = v3;
    ++*(this + 367);
    (*(void (__thiscall **)(uint32_t *))(*(this + 354) + 12))(this + 354);
    v28 = (*(int (__thiscall **)(uint32_t *))(*this + 452))(this);
    v3 = (__int16 *)v28;
    BYTE4(a2) = 0;
    LODWORD(a2) = v28;
    if ( v28 )
    if ( (*(uint32_t *)(v28 + 320) & 0x100) != 0
    && !(*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(*this + 188))(this, 0) )
    v29 = *(this + 433);
    v134 = 0;
    v123 = *(uint32_t *)(v29 + 1460);
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, v3 + 18, v123, 0);
    v136 = (int *)*LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    v31,
    &v138,
    v3 + 18,
    1,
    TileIndex,
    v123,
    0,
    1,
    1,
    0,
    1,
    0,
    0,
    (__int16 *)&v134,
    0,
    0);
    if ( v136 != (int *)g_UnitSelectionState )
    v3 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v136);
    LODWORD(a2) = v3;
    if ( v135 )
    (*(void (__stdcall **)(int *))(*v135 + 8))(v135);
    v125 = 0;
    if ( !v3 )
    (*(void (__thiscall **)(uint32_t *))(*(this + 354) + 12))(this + 354);
    goto LABEL_143;
    if ( !*(uint8_t *)(*(this + 433) + 3372) )
    goto LABEL_128;
    if ( !BYTE4(a2) )
    goto LABEL_143;
    v126 = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 188))(this, 0);
    v32 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint32_t *, uint32_t))(*this + 76))(this, v142, 0);
    LOWORD(v131[0]) = *v32 / 256;
    HIWORD(v131[0]) = v32[1] / 256;
    v134 = v131[0];
    v33 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v134);
    IsBuildableAdvanced = Cell::IsBuildableAdvanced((int)v33);
    v34 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint32_t *))(*(uint32_t *)a2 + 72))(a2, v142);
    LOWORD(v131[0]) = *v34 / 256;
    HIWORD(v131[0]) = v34[1] / 256;
    ppv = v131[0];
    v35 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&ppv);
    v36 = BYTE1(v35[80]) & 1;
    v129 = Cell::IsBuildableAdvanced((int)v35);
    v130 = (void *)(*(int (__thiscall **)(uint32_t *))(*this + 456))(this);
    if ( v126 )
    if ( v36 )
    RegionMap = GetRegionMap((int *)&MapClass_Instance, (__int16 *)&v134, 3, 0);
    if ( RegionMap == GetRegionMap((int *)&MapClass_Instance, (__int16 *)&ppv, 3, 0) && RegionMap != -1 )
    if ( *((uint8_t *)dword_87F83C + 16 * RegionMap + 8)
    || (v38 = (void *)*Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&v134, (int)&v134),
    v131[0] = v38,
    LODWORD(v138) = *Pathfinding::SelectRegionPath((int *)&v138, (__int16 *)&ppv, (int)&ppv),
    v131[0] = (LPVOID)(__int16)(HIWORD(v38) - WORD1(v138)),
    v39 = Math::Sqrt(
    (double)(int)v131[0] * (double)(int)v131[0]
    + (double)(__int16)((_WORD)v38 - v138) * (double)(__int16)((_WORD)v38 - v138)),
    (__int16)Math::RoundToInt(v39) <= 2) )
    v125 = 1;
    if ( !v125 )
    v40 = 1;
    goto LABEL_122;
    else if ( v36 )
    v40 = 1;
    goto LABEL_122;
    v40 = 0;
    LABEL_122:
    if ( (!IsBuildableAdvanced && (int)v130 >= 0 || !v129) && !v125 || v40 )
    LODWORD(a2) = BuildingClass::FindPlacementCells(this, a2);
    LABEL_130:
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 152))(*(this + 413)) )
    v41 = *(this + 356);
    if ( *(this + 358) < v41
    || (*((uint8_t *)this + 1429) || !v41)
    && (v42 = *(this + 359), v42 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*(this + 354) + 8))(this + 354, v42 + v41, 0) )
    v43 = *(this + 358);
    if ( v43 )
    memcpy((void *)(*(this + 355) + 4), (const void *)*(this + 355), 4 * v43);
    *(uint32_t *)*(this + 355) = a2;
    ++*(this + 358);
    v142[0] = *(this + 39);
    v142[1] = *(this + 40);
    v142[2] = *(this + 41);
    LODWORD(a2) = Coord::To_Cell(&MapClass_Instance, v142);
    LABEL_143:
    if ( !*(uint8_t *)(*(this + 433) + 3284) || *((uint8_t *)this + 636) || *(this + 172) || *((uint8_t *)this + 1709) )
    goto LABEL_228;
    v44 = (LPVOID *)(this + 413);
    v45 = Team::GetMember(this, 0);
    v134 = 0;
    if ( !*(this + 413) )
    goto LABEL_152;
    v46 = StreamClass::Set2(&v134, this + 413);
    if ( v46 < 0 && v46 != -2147467262 )
    WinAPI::Wrapper(v46);
    if ( !v134 )
    LABEL_152:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, __int16 *))(*(uint32_t *)v134 + 12))(v134, v143);
    v127 = 1;
    if ( !v45 )
    goto LABEL_182;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v45 + 44))(v45) != 6
    || ((v47 = (*(int (__thiscall **)(int))(*(uint32_t *)v45 + 44))(v45) == 6 ? v45 : 0, (uint32_t)a2)
    ? (v48 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)a2 + 44))(a2) == 11 ? (uint32_t *)a2 : 0)
    : (v48 = 0),
    !*(uint8_t *)(*(uint32_t *)(v47 + 1312) + 5811)
    || !v48
    || CellClass::FindBuilding(v48, 0)
    || (v127 = 0, !memcmp(v143, &g_CLSID_HoverLocomotion, 0x10u))) )
    LABEL_181:
    if ( v127 != 1 )
    LABEL_226:
    if ( v134 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v134 + 8))(v134);
    LABEL_228:
    if ( (uint32_t)a2 )
    v64 = this + 413;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*v64 + 16))(*v64) )
    v65 = *v64;
    v134 = 0;
    if ( !v65 )
    goto LABEL_240;
    Checked = (int (__stdcall ***)(uint32_t, void *, __int64 *))Stream::GetChecked(this + 413);
    v67 = (**Checked)(Checked, &unk_818858, &v138);
    if ( v67 >= 0 )
    v69 = (void *)v138;
    ComPtr::Release_Alt((int *)&v134);
    v68 = v69;
    else
    ComPtr::Release_Alt((int *)&v134);
    v68 = 0;
    v134 = v68;
    if ( v67 < 0 && v67 != -2147467262 )
    WinAPI::Wrapper(v67);
    if ( !v68 )
    LABEL_240:
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint8_t *))(*(uint32_t *)v68 + 12))(v68, v146);
    if ( !memcmp(v146, &stru_7E9A50, 0x10u) && !(*(int (__thiscall **)(uint32_t *))(*this + 456))(this) )
    v70 = (uint32_t *)(*(int (__thiscall **)(uint32_t, __int64 *))(*(uint32_t *)a2 + 72))(a2, &v138);
    v140[0] = *v70;
    v140[1] = v70[1];
    v141 = v70[2];
    GroundHeight = Cell::GetGroundHeight(v140);
    if ( v141 < GroundHeight )
    v141 = GroundHeight;
    if ( v125 )
    goto LABEL_251;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(*this + 188))(this, 0) )
    goto LABEL_251;
    v72 = (uint32_t *)(*(int (__thiscall **)(uint32_t, __int64 *))(*(uint32_t *)a2 + 72))(a2, &v138);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v72) + 80) & 0x100) != 0 )
    goto LABEL_251;
    v73 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, LPVOID *, uint32_t))(*this + 76))(this, v131, 0);
    v74 = Coord::To_Cell(&MapClass_Instance, v73);
    if ( !Cell::IsBuildableAdvanced((int)v74) )
    goto LABEL_251;
    v75 = (uint32_t *)(*(int (__thiscall **)(uint32_t, __int16 *))(*(uint32_t *)a2 + 72))(a2, v143);
    v76 = Coord::To_Cell(&MapClass_Instance, v75);
    if ( !Cell::IsBuildableAdvanced((int)v76)
    || (v77 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(*(uint32_t *)a2 + 72))(a2),
    LOWORD(v132) = *v77 / 256,
    HIWORD(v132) = v77[1] / 256,
    v78 = *this,
    v137 = v132,
    v79 = (__int16 *)(*(int (__thiscall **)(uint32_t *, void **, int **))(v78 + 448))(
    this,
    &v130,
    &v137),
    !BuildingTypeClass::IsPlacementValid(this, v79, v143)) )
    LABEL_251:
    v80 = *(this + 413);
    v81 = (int **)(this + 413);
    v130 = 0;
    if ( v80 )
    v82 = (int (__stdcall ***)(uint32_t, void *, __int64 *))Stream::GetChecked(this + 413);
    v83 = (**v82)(v82, &unk_819088, &v138);
    if ( v83 >= 0 )
    v85 = v138;
    Release2COM((int *)&v130);
    v84 = v85;
    else
    Release2COM((int *)&v130);
    v84 = 0;
    v130 = (void *)v84;
    if ( v83 < 0 && v83 != -2147467262 )
    WinAPI::Wrapper(v83);
    if ( v84 && (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v84 + 28))(v84) )
    if ( *v81 )
    (*(void (__stdcall **)(int *))(**v81 + 8))(*v81);
    v86 = (int)v130;
    *v81 = 0;
    if ( !v86 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t *))(*(uint32_t *)v86 + 16))(v86, this + 413);
    v131[0] = 0;
    InstanceCOM = CreateInstanceCOM(v131, (IID *)&stru_7E9A30, 0, 7u);
    if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
    WinAPI::Wrapper(InstanceCOM);
    if ( !v131[0] )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint32_t *))(*(uint32_t *)v131[0] + 12))(v131[0], this);
    v88 = 0;
    ppv = 0;
    if ( v131[0] )
    v89 = (int (__stdcall ***)(uint32_t, void *, __int64 *))Stream::GetChecked(v131);
    v90 = (**v89)(v89, &unk_819088, &v138);
    if ( v90 >= 0 )
    v91 = (void *)v138;
    Release2COM((int *)&ppv);
    v88 = v91;
    else
    Release2COM((int *)&ppv);
    v88 = 0;
    ppv = v88;
    if ( v90 < 0 && v90 != -2147467262 )
    WinAPI::Wrapper(v90);
    v92 = (int)v130;
    if ( v130 != v88 )
    v93 = (int)v130;
    v92 = (int)v88;
    v130 = v88;
    if ( v88 )
    (*(void (__stdcall **)(void *))(*(uint32_t *)v88 + 4))(v88);
    v92 = (int)v130;
    v88 = ppv;
    if ( v93 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v93 + 8))(v93);
    v92 = (int)v130;
    v88 = ppv;
    if ( v88 )
    (*(void (__stdcall **)(void *))(*(uint32_t *)v88 + 8))(v88);
    v92 = (int)v130;
    if ( v92 )
    (*(void (__stdcall **)(int, int *))(*(uint32_t *)v92 + 12))(v92, *v81);
    v94 = *v81;
    v95 = v131[0];
    if ( *v81 != v131[0] )
    *v81 = (int *)v131[0];
    if ( v95 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v95 + 4))(v95);
    if ( v94 )
    (*(void (__stdcall **)(int *))(*v94 + 8))(v94);
    v138 = *(_QWORD *)(this + 39);
    v139 = *(this + 41);
    if ( !*v81 )
    WinAPI::Wrapper(-2147467261);
    v96 = *v81;
    v97 = **v81;
    v98 = (unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, &v138);
    (*(void (__stdcall **)(int *, uint32_t))(v97 + 124))(v96, v98[284]);
    v92 = (int)v130;
    if ( v131[0] )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v131[0] + 8))(v131[0]);
    v92 = (int)v130;
    if ( v92 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v92 + 8))(v92);
    if ( v134 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v134 + 8))(v134);
    v99 = v137;
    if ( !v137 )
    v100 = (void *)a2;
    goto LABEL_318;
    if ( *(uint8_t *)(v137[328] + 5801) )
    if ( Team::AllMembersValid(v137) && (uint32_t *)Team::GetMember(v99, 0) != this )
    v100 = (void *)a2;
    TechnoClass::SetFocus(this, a2);
    goto LABEL_309;
    if ( (*(int (__thiscall **)(uint32_t *, int, int *))(*this + 632))(this, 2, v99) == 1 )
    if ( (*(int (__thiscall **)(uint32_t *, int))(*this + 628))(this, 14) == 1 )
    FootClass::AssignDestination((int)this, a2, SHIDWORD(a2));
    LABEL_315:
    *(this + 376) = -1;
    return;
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    v100 = 0;
    LODWORD(a2) = 0;
    goto LABEL_309;
    v100 = (void *)a2;
    LABEL_309:
    if ( *(uint8_t *)(v99[328] + 5803)
    && (!Team::AllMembersValid(v99) || (uint32_t *)Team::GetMember(v99, 0) == this)
    && (*(int (__thiscall **)(uint32_t *, int, int *))(*this + 632))(this, 2, v99) == 1 )
    if ( (*(int (__thiscall **)(uint32_t *, int))(*this + 628))(this, 14) == 1 )
    FootClass::AssignDestination((int)this, (int)v100, SHIDWORD(a2));
    goto LABEL_315;
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    v100 = 0;
    LODWORD(a2) = 0;
    LABEL_318:
    v101 = (int *)Team::GetMember(this, 0);
    if ( v101
    && (*(int (__thiscall **)(int *))(*v101 + 44))(v101) == 6
    && *(uint8_t *)(v101[328] + 5821)
    && *(this + 43) != 7 )
    if ( *(this + 172) )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 3);
    else
    v102 = v101 + 39;
    v103 = *v102;
    v104 = v102[1];
    v144 = v102[2];
    LOWORD(v138) = v103 / 256;
    WORD1(v138) = v104 / 256;
    LOWORD(v137) = v138 + 4;
    HIWORD(v137) = WORD1(v138) + 1;
    LODWORD(v138) = v137;
    if ( v100 != CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v138) )
    (*(void (__thiscall **)(uint32_t *))(*(this + 363) + 12))(this + 363);
    (*(void (__thiscall **)(uint32_t *))(*(this + 354) + 12))(this + 354);
    if ( v100 )
    BuildingClass::AddToProductionQueue((int)this, (int)v100);
    return;
    if ( !v99 )
    goto LABEL_345;
    v105 = *(this + 433);
    if ( *(int *)(v105 + 1016) <= 0 )
    goto LABEL_345;
    v106 = *(uint32_t *)(v105 + 1016);
    v107 = 0;
    if ( v106 <= 0 )
    goto LABEL_345;
    v108 = *(uint32_t **)(v105 + 1004);
    while ( *v108 != v99[328] )
    ++v107;
    ++v108;
    if ( v107 >= v106 )
    goto LABEL_345;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 44))(this) != 1 )
    goto LABEL_345;
    v109 = *(this + 433);
    if ( !*(uint8_t *)(v109 + 3598) && !*(uint8_t *)(v109 + 3599) )
    goto LABEL_345;
    if ( (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 16 )
    goto LABEL_345;
    if ( (int *)Team::GetMember(this, 0) == v99
    || Team::AllMembersValid(v99)
    || (*(int (__thiscall **)(uint32_t *, int, int *))(*this + 632))(this, 2, v99) != 1
    || (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 7
    || (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) == 10 )
    if ( !(uint32_t)a2
    || (*(int (__thiscall **)(uint32_t))(*(uint32_t *)a2 + 44))(a2) != 6
    || Team::GetMember(this, 0) == (uint32_t)a2 )
    goto LABEL_345;
    v113 = v99 + 39;
    v114 = v99 + 39;
    v136 = 0;
    v115 = v99[39];
    v116 = v99[40];
    v144 = v114[2];
    LOWORD(v137) = v115 / 256;
    v117 = v116;
    v118 = v113[1];
    HIWORD(v137) = v117 / 256;
    LODWORD(v138) = v137;
    v119 = *v113;
    v144 = v113[2];
    LOWORD(v137) = v119 / 256;
    HIWORD(v137) = v118 / 256;
    v120 = *(this + 433);
    v135 = v137;
    v124 = *(uint32_t *)(v120 + 1460);
    v121 = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v138, v124, 0);
    v137 = (int *)*LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    v122,
    &v134,
    (__int16 *)&v135,
    2,
    v121,
    v124,
    0,
    1,
    1,
    0,
    1,
    0,
    0,
    (__int16 *)&v136,
    0,
    0);
    if ( v137 != (int *)g_UnitSelectionState )
    LODWORD(a2) = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v137);
    goto LABEL_345;
    else
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 7, 0);
    LODWORD(a2) = 0;
    LABEL_345:
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 96))(*(this + 413))
    && !HouseClass::IonSensitivesShouldBeOffline() )
    v110 = (*(int (__thiscall **)(uint32_t *))(*this + 444))(this);
    if ( (*(uint32_t *)(v110 + 320) & 0x100) == 0 )
    v111 = *(uint32_t **)(v110 + 228);
    if ( v111 )
    while ( 1 )
    if ( v111 != this && (*(int (__thiscall **)(uint32_t *))(*v111 + 44))(v111) == 6 )
    v112 = v111[328];
    if ( *(uint8_t *)(v112 + 5801) || *(uint8_t *)(v112 + 5803) )
    break;
    v111 = (uint32_t *)v111[12];
    if ( !v111 )
    goto LABEL_365;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 88))(*(this + 413));
    LABEL_365:
    FootClass::AssignDestination((int)this, a2, SHIDWORD(a2));
    return;
    LABEL_182:
    if ( memcmp(v143, &stru_7E9A30, 0x10u) )
    v52 = *v44;
    v130 = 0;
    if ( v52 )
    v53 = StreamClass::Set(&v130, this + 413);
    if ( v53 < 0 && v53 != -2147467262 )
    WinAPI::Wrapper(v53);
    if ( v130 && (*(unsigned __int8 (__stdcall **)(void *))(*(uint32_t *)v130 + 28))(v130) )
    if ( !v130 )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(void *))(*(uint32_t *)v130 + 20))(v130) )
    if ( *v44 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)*v44 + 8))(*v44);
    v54 = (int)v130;
    *v44 = 0;
    if ( !v54 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t *))(*(uint32_t *)v54 + 16))(v54, this + 413);
    ppv = 0;
    v55 = CreateInstanceCOM(&ppv, (IID *)&stru_7E9A30, 0, 7u);
    if ( v55 < 0 && v55 != -2147467262 )
    WinAPI::Wrapper(v55);
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint32_t *))(*(uint32_t *)ppv + 12))(ppv, this);
    v56 = 0;
    v131[0] = 0;
    if ( ppv )
    v57 = (int (__stdcall ***)(uint32_t, void *, __int64 *))Stream::GetChecked(&ppv);
    v58 = (**v57)(v57, &unk_819088, &v138);
    if ( v58 >= 0 )
    v59 = (void *)v138;
    Release2COM((int *)v131);
    v56 = v59;
    else
    Release2COM((int *)v131);
    v56 = 0;
    v131[0] = v56;
    if ( v58 < 0 && v58 != -2147467262 )
    WinAPI::Wrapper(v58);
    v60 = (int)v130;
    if ( v130 != v56 )
    v61 = (int)v130;
    v130 = v56;
    CellClass::SetField2C((int *)&v130);
    if ( v61 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v61 + 8))(v61);
    v60 = (int)v130;
    v56 = v131[0];
    if ( v56 )
    (*(void (__stdcall **)(void *))(*(uint32_t *)v56 + 8))(v56);
    v60 = (int)v130;
    if ( v60 )
    (*(void (__stdcall **)(int, LPVOID))(*(uint32_t *)v60 + 12))(v60, *v44);
    v62 = *v44;
    v63 = ppv;
    if ( *v44 != ppv )
    *v44 = ppv;
    if ( v63 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v63 + 4))(v63);
    if ( v62 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v62 + 8))(v62);
    v60 = (int)v130;
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    v60 = (int)v130;
    if ( v60 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v60 + 8))(v60);
    goto LABEL_226;
    v49 = *v44;
    v130 = 0;
    if ( v49 )
    v50 = StreamClass::Set(&v130, this + 413);
    if ( v50 < 0 && v50 != -2147467262 )
    WinAPI::Wrapper(v50);
    if ( v130 && (*(unsigned __int8 (__stdcall **)(void *))(*(uint32_t *)v130 + 28))(v130) )
    if ( !v130 )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(void *))(*(uint32_t *)v130 + 20))(v130) )
    if ( *v44 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)*v44 + 8))(*v44);
    v51 = (int)v130;
    *v44 = 0;
    if ( !v51 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t *))(*(uint32_t *)v51 + 16))(v51, this + 413);
    goto LABEL_179;
    if ( *v44 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)*v44 + 72))(*v44);
    (*(void (__thiscall **)(uint32_t *, int))(*this + 496))(this, -1);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 7, 0);
    *((uint8_t *)this + 1708) = 1;
    *((uint8_t *)this + 504) = 1;
    LABEL_179:
    if ( v130 )
    (*(void (__stdcall **)(void *))(*(uint32_t *)v130 + 8))(v130);
    goto LABEL_181;
    WinAPI::Wrapper(-2147467261);
    LABEL_128:
    if ( !BYTE4(a2) )
    goto LABEL_143;
    (*(void (__thiscall **)(uint32_t *))(*(this + 354) + 12))(this + 354);
    goto LABEL_130;
    LABEL_49:
    v13 = 0;
    goto LABEL_36;
}

// 0x007446E0
int  UnitClass::HandleTargetDestroyed(int *this, int *a2, int *a3)
{
    int result; // eax
    FootClass::HandleTargetDestroyed(this, a2, a3);
    result = 0;
    if ( (int *)*(this + 434) == a2 )
    *(this + 434) = 0;
    if ( (int *)*(this + 433) == a2 )
    *(this + 433) = 0;
    return result;
}

int  UnitClass::CheckForNearbyEnemies(int *this)
{
    wchar_t *v2; // ecx
    int v3; // ebp
    int *v4; // eax
    int v5; // edi
    int v6; // eax
    uint32_t *v7; // eax
    uint32_t *ObjectByType; // eax
    int v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // edx
    int result; // eax
    int TechLevel; // ecx
    bool v17; // [esp+Dh] [ebp-19h]
    int v18; // [esp+Eh] [ebp-18h]
    int v19; // [esp+12h] [ebp-14h] BYREF
    uint32_t v20[4]; // [esp+16h] [ebp-10h] BYREF
    v17 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) )
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413))
    && *(uint8_t *)(*(this + 433) + 3378) )
    v17 = Team::GetMember(this, 0) == 0;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413)) )
    LABEL_30:
    (*(void (__thiscall **)(int *))(*this + 1136))(this);
    goto LABEL_25;
    v2 = CurrentFrame;
    if ( (int)CurrentFrame % 8 )
    v3 = *(uint32_t *)(*(int (__thiscall **)(int *, uint32_t *))(*this + 440))(this, v20);
    v4 = (int *)(*(int (__thiscall **)(int *))(*this + 444))(this);
    LOBYTE(v20[0]) = Cell::IsInRange(v4);
    v5 = 0;
    while ( 1 )
    v6 = v5 & 7;
    LOWORD(v18) = v3 + LOWORD(Direction_X_Offsets[v6]);
    HIWORD(v18) = HIWORD(v3) + HIWORD(Direction_X_Offsets[v6]);
    v19 = v18;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    ObjectByType = WTFMode::FindObjectByType(v7, v20[0]);
    if ( ObjectByType )
    if ( !Object::IsAlliedWithObjectHouse((uint32_t *)*(this + 135), (int)ObjectByType) )
    break;
    if ( ++v5 >= 8 )
    v2 = CurrentFrame;
    goto LABEL_16;
    TechLevel = RulesClass_Instance->TechLevel;
    *(this + 120) = (int)CurrentFrame;
    *(this + 121) = v20[2];
    *(this + 122) = TechLevel;
    goto LABEL_30;
    LABEL_16:
    if ( !v17 )
    goto LABEL_25;
    v9 = *(this + 120);
    v10 = *(this + 122);
    if ( v9 == -1 )
    goto LABEL_20;
    v11 = (int)v2 - v9;
    if ( v11 < v10 )
    v10 -= v11;
    LABEL_20:
    if ( v10 )
    goto LABEL_25;
    v12 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, RulesClass_Instance->MinUnitCount - 1);
    if ( v12 >= RulesClass_Instance->MinUnitCount - 1 )
    v12 = RulesClass_Instance->MinUnitCount - 1;
    v13 = *(uint32_t *)(RulesClass_Instance->Money + 4 * v12);
    if ( v13 )
    v14 = *this;
    *(this + 326) = v13;
    *(this + 327) = 0;
    *((uint8_t *)this + 472) = 1;
    *(this + 119) = (int)CurrentFrame;
    (*(void (__thiscall **)(int *))(v14 + 1180))(this);
    LABEL_25:
    result = *(this + 178);
    if ( result )
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this)
    || (unsigned __int8)House::IsHumanPlayer((void*375 *)*(this + 135)) )
    *(uint8_t *)(*(this + 178) + 413) = 0;
    return 0;
    else
    *(uint8_t *)(*(this + 178) + 413) = 1;
    return 1;
    return result;
}

