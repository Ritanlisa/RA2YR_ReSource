#include "teamclass.hpp"

char  TeamClass::CheckCohesion(#374 *this)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    uint32_t *v5; // edi
    uint32_t *v6; // eax
    double v7; // st7
    int v9; // [esp+20h] [ebp-1Ch]
    uint8_t v10[12]; // [esp+24h] [ebp-18h] BYREF
    uint8_t v11[12]; // [esp+30h] [ebp-Ch] BYREF
    v2 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this);
    if ( v2 > 0
    && v2 <= 2
    && Team::AllMembersValid((int *)this)
    && (v3 = Array::Get(this, 0), (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 44))(v3) == 6)
    && *(uint8_t *)(*(uint32_t *)(Array::Get(this, 0) + 1312) + 5801)
    && (v4 = Array::Get(this, 0),
    v5 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v4 + 72))(v4, v10),
    v6 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v11),
    v9 = v6[2] - v5[2],
    v7 = Math::Sqrt(
    (double)(*v6 - *v5) * (double)(*v6 - *v5)
    + (double)(v6[1] - v5[1]) * (double)(v6[1] - v5[1])
    + (double)v9 * (double)v9),
    (int)Math::RoundToInt(v7) < 128) )
    return 1;
    else
    return AbstractClass::COMStub_Return0_38(this);
}

int  TeamClass::CountActiveTeamsForType(void *this, int a2)
{
    int result; // eax
    int v3; // edi
    int *v4; // esi
    int v5; // edx
    result = 0;
    if ( g_HouseClass_AIProductionState - 1 >= 0 )
    v3 = g_HouseClass_AIProductionState;
    v4 = (int *)((char *)g_TeamClassPool + 4 * g_HouseClass_AIProductionState - 4);
    do
    v5 = *v4;
    if ( *v4 && *(void **)(v5 + 44) == this && a2 == *(uint32_t *)(v5 + 36) )
    ++result;
    --v4;
    --v3;
    while ( v3 );
    return result;
}

// 0x006E8160
int  TeamClass::SumMemberCounts(int *this)
{
    int v1; // edx
    int result; // eax
    int *v3; // ecx
    int v4; // esi
    v1 = *(this + 39);
    result = 0;
    if ( v1 > 0 )
    v3 = this + 41;
    do
    v4 = *v3;
    v3 += 2;
    result += v4;
    --v1;
    while ( v1 );
    return result;
}

int  TeamClass::Destructor(void **this)
{
    int v2; // edi
    int v3; // ecx
    int v4; // eax
    int i; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    void **v14; // [esp+10h] [ebp-4h] BYREF
    v2 = 0;
    *this = &TeamClass::`vftable';
    *(this + 1) = &TeamClass::`vftable';
    *(this + 2) = &TeamClass::`vftable';
    for ( *(this + 3) = &TeamClass::`vftable'; v2 < g_AnimTypeInitQueue; ++v2 )
    if ( *(void **)(*((uint32_t *)dword_A8B204 + v2) + 220) == *(this + 9) )
    if ( *((uint8_t *)this + 132) )
    AITriggerTypeClass::RegisterSuccess();
    else
    AITriggerTypeClass::RegisterFailure();
    v3 = (int)*(this + 11);
    if ( v3 )
    v4 = (int)*(this + 9);
    if ( v4 )
    if ( *(uint8_t *)(v4 + 246) )
    --*(uint32_t *)(v3 + 22124);
    if ( WTFMode && *(this + 9) )
    for ( i = (int)*(this + 21); i; i = (int)*(this + 21) )
    TeamClass::LiberateMember_Start(i, -1, 0);
    --*((uint32_t *)*(this + 9) + 55);
    v6 = (int)*(this + 28);
    if ( v6 )
    if ( !*(uint32_t *)(v6 + 44) )
    TagClass::Destroy();
    *(this + 28) = 0;
    AbstractClass::AnnounceExpiredPointer(this);
    v14 = this;
    v7 = (*(int (__thiscall **)(int *, void ***))(dword_B0F6F0 + 16))(&dword_B0F6F0, &v14);
    if ( v7 != -1 && v7 < dword_B0F700 && v7 < --dword_B0F700 )
    do
    ++v7;
    *((uint32_t *)dword_B0F6F4 + v7 - 1) = *((uint32_t *)dword_B0F6F4 + v7);
    while ( v7 < dword_B0F700 );
    v14 = this;
    v8 = (*(int (__thiscall **)(int *, void ***))(AbstractClass_Array + 16))(&AbstractClass_Array, &v14);
    if ( v8 != -1 && v8 < g_AlphaShapePool && v8 < --g_AlphaShapePool )
    do
    ++v8;
    *((uint32_t *)dword_B0F724 + v8 - 1) = *((uint32_t *)dword_B0F724 + v8);
    while ( v8 < g_AlphaShapePool );
    v14 = this;
    v9 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v14);
    if ( v9 != -1 && v9 < g_AnimManager && v9 < --g_AnimManager )
    do
    ++v9;
    *((uint32_t *)g_AnimPoolCount + v9 - 1) = *((uint32_t *)g_AnimPoolCount + v9);
    while ( v9 < g_AnimManager );
    v14 = this;
    v10 = (*(int (__thiscall **)(int *, void ***))(dword_B0F618 + 16))(&dword_B0F618, &v14);
    if ( v10 != -1 && v10 < dword_B0F628 && v10 < --dword_B0F628 )
    do
    ++v10;
    *((uint32_t *)dword_B0F61C + v10 - 1) = *((uint32_t *)dword_B0F61C + v10);
    while ( v10 < dword_B0F628 );
    v14 = this;
    v11 = (*(int (__thiscall **)(int *, void ***))(TeamClass_Array + 16))(&TeamClass_Array, &v14);
    if ( v11 != -1 && v11 < g_HouseClass_AIProductionState && v11 < --g_HouseClass_AIProductionState )
    do
    ++v11;
    *((uint32_t *)g_TeamClassPool + v11 - 1) = *((uint32_t *)g_TeamClassPool + v11);
    while ( v11 < g_HouseClass_AIProductionState );
    if ( *((uint8_t *)this + 116) )
    v12 = (int)*(this + 9);
    if ( v12 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v12 + 32))(v12, 1);
    return AbstractClass::DTOR(this);
}

void __usercall TeamClass::Update(int a1@<ecx>, uint32_t *a2@<ebp>, int j@<edi>)
{
    int v4; // edx
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // ecx
    int i; // edi
    char v10; // cl
    char v11; // al
    char v12; // bl
    int v13; // ecx
    int *Entry; // eax
    int v15; // ecx
    uint32_t *n; // edi
    int v17; // eax
    uint32_t *ii; // edi
    int v19; // eax
    uint32_t *v20; // edi
    uint32_t *v21; // ebp
    int v22; // eax
    void *v23; // eax
    uint32_t *m; // edi
    int *v25; // edi
    int *v26; // ebp
    int v27; // ebx
    int Owner; // eax
    void *v29; // eax
    int v30; // ebp
    int k; // edi
    int v32; // ecx
    AbstractClass *v33; // eax
    AbstractClass *v34; // eax
    uint32_t *v35; // edi
    uint32_t *v36; // edi
    uint32_t *v37; // edi
    uint32_t *v38; // eax
    int *v39; // edi
    char v40; // cl
    int v41; // edx
    uint32_t *v42; // eax
    uint32_t *v43; // edi
    uint32_t *v44; // edi
    int v45; // eax
    uint32_t *v46; // edi
    char v47; // al
    uint32_t *v48; // ebp
    uint32_t *v49; // edi
    char v50; // al
    uint32_t *v51; // ebp
    uint32_t *v52; // edi
    char v53; // al
    uint32_t *v54; // ebp
    uint32_t *v55; // edi
    char v56; // al
    uint32_t *v57; // ebp
    uint32_t *v58; // edi
    char v59; // al
    uint32_t *v60; // ebp
    int v61; // [esp+10h] [ebp-28h] BYREF
    uint32_t v62[2]; // [esp+14h] [ebp-24h] BYREF
    int GroundHeight; // [esp+1Ch] [ebp-1Ch]
    int v64; // [esp+20h] [ebp-18h] BYREF
    int v65; // [esp+24h] [ebp-14h]
    uint8_t v66[12]; // [esp+2Ch] [ebp-Ch] BYREF
    if ( *(uint8_t *)(a1 + 131) )
    v4 = *(uint32_t *)(a1 + 100);
    v5 = *(uint32_t *)(a1 + 108);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v5 )
    LABEL_6:
    *(uint8_t *)(a1 + 131) = 0;
    goto LABEL_7;
    v5 -= (int)CurrentFrame - v4;
    if ( v5 )
    return;
    goto LABEL_6;
    LABEL_7:
    if ( *(uint8_t *)(a1 + 125) && !(unsigned __int8)TeamClass::UpdateReadinessState(a1) )
    return;
    if ( !*(uint8_t *)(a1 + 127) )
    goto LABEL_224;
    if ( *(uint8_t *)(a1 + 122) )
    SelectTeamProductionBuilding(a1);
    if ( !*(uint8_t *)(a1 + 127) )
    LABEL_224:
    if ( *(uint8_t *)(a1 + 121) || *(uint8_t *)(a1 + 119) )
    v6 = *(uint32_t *)(a1 + 84);
    *(uint8_t *)(a1 + 127) = 1;
    *(uint8_t *)(a1 + 120) = 1;
    for ( *(uint8_t *)(a1 + 122) = 0; v6; v6 = *(uint32_t *)(v6 + 1496) )
    if ( *(uint8_t *)(a1 + 123) || *(uint8_t *)(a1 + 119) )
    *(uint8_t *)(v6 + 1673) = 1;
    SetLandTypeMap(*(uint32_t **)(a1 + 40));
    *(uint8_t *)(a1 + 128) = 1;
    if ( *(uint8_t *)(a1 + 123) || *(uint8_t *)(a1 + 127) || !*(uint32_t *)(a1 + 52) || !*(uint32_t *)(a1 + 56) )
    TeamClass::FindClosestEnemy(a1, (void **)(a1 + 52), (int *)(a1 + 56));
    if ( (!*(uint8_t *)(a1 + 127) || !*(uint8_t *)(a1 + 121) && *(uint8_t *)(*(uint32_t *)(a1 + 36) + 171))
    && (!(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(a1 + 44)) || !*(uint8_t *)(a1 + 120)) )
    j = 0;
    v7 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + 228);
    if ( *(int *)(v7 + 156) > 0 )
    a2 = (uint32_t *)(a1 + 136);
    do
    if ( *a2 < *(uint32_t *)(v7 + 8 * j + 164) )
    TeamClass::RecruitMember(j);
    ++j;
    ++a2;
    v7 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + 228);
    while ( j < *(uint32_t *)(v7 + 156) );
    v8 = *(uint32_t *)(a1 + 84);
    if ( !v8 )
    if ( *(uint8_t *)(a1 + 120)
    || GameMode_Current[0]
    && (j = *((uint32_t *)RulesClass_Instance + 1124), (int)CurrentFrame - *(uint32_t *)(a1 + 80) > j) )
    if ( *(uint8_t *)(a1 + 130) )
    for ( i = 0; i < g_ScenarioUpdateState; ++i )
    if ( TeamClass::Update_0(*((void ***)dword_8B40CC + i), 23, 0, dword_B0E948, 0, 0) )
    --i;
    if ( !g_ScenarioUpdateState )
    break;
    LABEL_112:
    if ( a1 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 32))(a1, 1);
    return;
    goto LABEL_49;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v8 + 472))(v8) )
    LABEL_49:
    v10 = 0;
    goto LABEL_50;
    v10 = 1;
    LABEL_50:
    if ( !*(uint8_t *)(a1 + 127) )
    LABEL_91:
    TeamClass::UpdateMembers(a1);
    return;
    if ( *(uint8_t *)(a1 + 123) || *(uint8_t *)(a1 + 122) || v10 )
    *(uint8_t *)(a1 + 123) = HouseClass::EvaluateTarget(a1) == 0;
    return;
    v11 = *(uint8_t *)(a1 + 128);
    v12 = 0;
    LOBYTE(v61) = 0;
    if ( v11 )
    v12 = 1;
    *(uint8_t *)(a1 + 128) = 0;
    v13 = *(uint32_t *)(a1 + 40);
    LOBYTE(v61) = 1;
    TeamClass::Check(v13);
    for ( j = *(uint32_t *)(a1 + 84); j; j = *(uint32_t *)(j + 1496) )
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 36) + 244)
    && *(int *)((*(int (__thiscall **)(int))(*(uint32_t *)j + 132))(j) + 1504) > 0 )
    if ( *(uint32_t *)(j + 536) )
    Debug::Log();
    else
    TechnoClass::SetFocus((uint32_t *)j, 0);
    if ( !(unsigned __int8)SessionClass::SetField(*(uint32_t *)(a1 + 40)) )
    goto LABEL_112;
    TeamClass::SelectMember(a1, 0);
    *(uint32_t *)(a1 + 64) = 0;
    else if ( !*(uint32_t *)(a1 + 64) )
    *(uint32_t *)(a1 + 64) = *(uint32_t *)(a1 + 60);
    if ( *(uint8_t *)(a1 + 129) )
    v12 = 1;
    LOBYTE(v61) = 1;
    *(uint8_t *)(a1 + 129) = 0;
    TeamClass::SelectMember(a1, 0);
    *(uint32_t *)(a1 + 64) = 0;
    Entry = SessionClass::GetEntry(*(uint32_t **)(a1 + 40), v62);
    v64 = *Entry;
    v15 = Entry[1];
    v65 = v15;
    switch ( v64 )
    case 0:
    TeamClass::CoordinateSuperWeaponAttack(&v64, v61);
    return;
    case 1:
    TeamClass::SelectWaypointTarget(&v64, v61);
    return;
    case 3:
    TeamClass::MoveTeamToWaypoint(&v64, v61);
    return;
    case 4:
    if ( !v12 )
    goto LABEL_91;
    LOWORD(v61) = v15 % 128;
    HIWORD(v61) = v15 / 128;
    v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v61);
    goto LABEL_90;
    case 5:
    if ( v12 )
    *(uint32_t *)(a1 + 88) = CurrentFrame;
    *(uint32_t *)(a1 + 92) = v65;
    *(uint32_t *)(a1 + 96) = 15 * v15;
    HouseClass::EvaluateTarget(a1);
    if ( !Locomotor::GetSpeed((int *)(a1 + 88)) )
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 6:
    TeamClass::SetField11(v15 - 2);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 7:
    HouseClass::CheckWinCondition((int)HouseClass_Player, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 8:
    DispatchTeamOrders(&v64, v61);
    return;
    case 9:
    TechnoClass::ProcessBorderTower(a1, v12, j, (int)&v64, v61);
    return;
    case 10:
    TeamClass::AssignAttackTarget(&v64, v61);
    return;
    case 11:
    Mission::AssignTeamMemberMissions(&v64, v61);
    return;
    case 12:
    ScenarioClass::SetGlobalToByID(v15, 1);
    goto LABEL_82;
    case 13:
    v36 = *(uint32_t **)(a1 + 84);
    if ( !v36 )
    goto LABEL_82;
    while ( 1 )
    (*(void (__thiscall **)(uint32_t *, int))(*v36 + 1312))(v36, v15);
    v36 = (uint32_t *)v36[374];
    if ( !v36 )
    break;
    v15 = v65;
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 14:
    AssignTeamProductionFacilities(&v64, v61);
    return;
    case 15:
    TeamClass::AssignMemberToCoordinator(&v64, v61);
    return;
    case 16:
    TeamClass::MoveToCellAndAttack(&v64, v61);
    return;
    case 17:
    v32 = *(uint32_t *)(a1 + 40);
    if ( v32 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v32 + 32))(v32, 1);
    v33 = (AbstractClass *)__2_YAPAXI_Z(0x30u);
    if ( v33 )
    v34 = ScriptClass::Construct(v33, *((uint32_t *)g_MultiplayerSyncState + v65));
    *(uint32_t *)(a1 + 40) = v34;
    SetLandTypeMap(v34);
    else
    *(uint32_t *)(a1 + 40) = 0;
    SetLandTypeMap(0);
    return;
    case 18:
    v29 = __2_YAPAXI_Z(0xA0u);
    if ( v29 )
    v30 = MissionClass::Construct((int)v29, *((uint32_t *)g_TeamTypePool + v65), *(uint32_t *)(a1 + 44), 0);
    else
    v30 = 0;
    for ( k = *(uint32_t *)(a1 + 84); k; k = *(uint32_t *)(a1 + 84) )
    TeamClass::LiberateMember_Start(k, -1, 0);
    TeamClass::AddMember(v30, k, 0);
    goto LABEL_112;
    case 19:
    v35 = *(uint32_t **)(a1 + 84);
    if ( !v35 )
    goto LABEL_82;
    do
    (*(void (__thiscall **)(uint32_t *))(*v35 + 1304))(v35);
    v35 = (uint32_t *)v35[374];
    while ( v35 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 20:
    v25 = *(int **)(a1 + 84);
    if ( v25 )
    while ( 1 )
    v26 = (int *)v25[374];
    v27 = *v25;
    Owner = HouseClass::FindOwner((void *)v15);
    (*(void (__thiscall **)(int *, int, int))(v27 + 980))(v25, Owner, 1);
    v25 = v26;
    if ( !v26 )
    break;
    v15 = v65;
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 21:
    for ( m = *(uint32_t **)(a1 + 84); m; m = (uint32_t *)m[374] )
    (*(void (__thiscall **)(uint32_t *, int *, int, uint32_t))(*m + 372))(m, &dword_B0E968, 1, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 22:
    if ( !v12 )
    goto LABEL_91;
    v22 = *(uint32_t *)(a1 + 52);
    if ( !v22 )
    v22 = *(uint32_t *)(a1 + 84);
    v23 = (void *)FindMapSpawnCell(v22);
    LABEL_90:
    TeamClass::SelectMember(a1, (int)v23);
    goto LABEL_91;
    case 23:
    HouseClass::CheckDefeat((int)HouseClass_Player, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 24:
    goto LABEL_74;
    case 25:
    PlayVocClass(v15, 0x2000, 1.0, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 26:
    Movie::PlayWrapper(v15, (int)a2, j, 1, 1, 1);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 27:
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, v15);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 28:
    v37 = *(uint32_t **)(a1 + 84);
    if ( !v37 )
    goto LABEL_82;
    do
    v38 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v37 + 72))(v37, v66);
    LOWORD(v61) = *v38 / 256;
    HIWORD(v61) = v38[1] / 256;
    v62[0] = v61;
    MapClass::TriggerEVA((__int16 *)v62);
    v37 = (uint32_t *)v37[374];
    while ( v37 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 29:
    *(uint8_t *)(*(uint32_t *)(a1 + 44) + 494) = 1;
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 30:
    *(uint32_t *)(*(uint32_t *)(a1 + 44) + 592) = 4;
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 31:
    do
    v39 = *(int **)(a1 + 84);
    v40 = 0;
    if ( !v39 )
    LABEL_82:
    *(uint8_t *)(a1 + 128) = 1;
    return;
    do
    if ( v39[27] > 0 && *((uint8_t *)v39 + 144) && *((uint8_t *)v39 + 116) && !*((uint8_t *)v39 + 129) )
    v41 = *v39;
    v62[0] = v39[27];
    (*(void (__thiscall **)(int *, uint32_t *, uint32_t, uint32_t, uint32_t, int, uint32_t, uint32_t))(v41 + 364))(
    v39,
    v62,
    0,
    *((uint32_t *)RulesClass_Instance + 1002),
    0,
    1,
    0,
    0);
    v40 = 1;
    v39 = (int *)v39[374];
    while ( v39 );
    while ( v40 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 32:
    if ( LightningStorm::IsActive() )
    goto LABEL_82;
    LightningStorm::Start(dword_B0E948, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 33:
    if ( !LightningStorm::IsActive() )
    goto LABEL_82;
    LightningStorm::End();
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 34:
    v42 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(a1 + 52) + 72))(*(uint32_t *)(a1 + 52), v66);
    v62[0] = *v42;
    v62[1] = v42[1];
    GroundHeight = v42[2];
    GroundHeight = Cell::GetGroundHeight(v62);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v62) + 80) & 0x100) != 0
    || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v62) + 80) & 0x400) != 0 )
    GroundHeight += dword_B0E99C;
    TacticalClass::SetPosition(TacticalClass_Instance, v62, v65);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 35:
    TeamClass::DisbandTeam(0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 36:
    MapClass::ClearShroud(&MapClass_Instance, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 37:
    v20 = *(uint32_t **)(a1 + 84);
    if ( v20 )
    do
    v21 = (uint32_t *)v20[374];
    (*(void (__thiscall **)(uint32_t *))(*v20 + 212))(v20);
    (*(void (__thiscall **)(uint32_t *))(*v20 + 248))(v20);
    v20 = v21;
    while ( v21 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 38:
    ScenarioClass::SetGlobalToByID(v15, 0);
    goto LABEL_82;
    case 39:
    ScenarioClass::SetLocalToByID(v15, 1);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 40:
    ScenarioClass::SetLocalToByID(v15, 0);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 41:
    v43 = *(uint32_t **)(a1 + 84);
    if ( !v43 )
    goto LABEL_82;
    do
    (*(void (__thiscall **)(uint32_t *))(*v43 + 1308))(v43);
    v43 = (uint32_t *)v43[374];
    while ( v43 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 42:
    TeamClass::SyncMemberFacing(&v64, v61);
    return;
    case 43:
    v44 = *(uint32_t **)(a1 + 84);
    if ( !v44 )
    goto LABEL_82;
    break;
    case 44:
    for ( n = *(uint32_t **)(a1 + 84); n; n = (uint32_t *)n[374] )
    if ( (*(int (__thiscall **)(uint32_t *))(*n + 44))(n) == 1 )
    v17 = (*(int (__thiscall **)(uint32_t *))(*n + 132))(n);
    if ( !_strcmpi((const void *)(v17 + 36), g_INI_Key_TRUCKB) )
    n[433] = *((uint32_t *)g_UnitTypeCount2 + BuildingTypeClass::FindIndex(g_INI_Key_TRUCKA));
    LABEL_74:
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 45:
    for ( ii = *(uint32_t **)(a1 + 84); ii; ii = (uint32_t *)ii[374] )
    if ( (*(int (__thiscall **)(uint32_t *))(*ii + 44))(ii) == 1 )
    v19 = (*(int (__thiscall **)(uint32_t *))(*ii + 132))(ii);
    if ( !_strcmpi((const void *)(v19 + 36), g_INI_Key_TRUCKA) )
    ii[433] = *((uint32_t *)g_UnitTypeCount2 + BuildingTypeClass::FindIndex(g_INI_Key_TRUCKB));
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 46:
    TeamClass::SelectAreaAttackTarget(&v64, v61);
    return;
    case 47:
    TeamClass::ProcessTeamMovement(&v64, v61);
    return;
    case 48:
    SelectTeamMembers(&v64, v61);
    return;
    case 49:
    *(uint8_t *)(a1 + 128) = 1;
    *(uint8_t *)(a1 + 132) = 1;
    return;
    case 50:
    if ( !v12 )
    return;
    v45 = *(uint32_t *)(a1 + 84);
    if ( !v45 )
    goto LABEL_82;
    do
    *(uint32_t *)(v45 + 240) = v15;
    v45 = *(uint32_t *)(v45 + 1496);
    while ( v45 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 51:
    TeamClass::PlayMemberAnimation(&v64, v61);
    return;
    case 52:
    if ( v12 )
    RevealTechnoClassRadarEvent(*(uint32_t *)(a1 + 84), v15);
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 53:
    DeployTeamMembersAtStart(&v64, v61);
    return;
    case 54:
    TeamClass::SelectDeploymentTarget(&v64, v61);
    return;
    case 55:
    ProcessAISuperWeaponSelection(&v64, v61);
    return;
    case 56:
    SuperWeapon::DispatchTeam(&v64, v61);
    return;
    case 57:
    TeamClass::CheckMemberSuperWeapon(&v64, v61);
    return;
    case 58:
    TeamClass::SelectBestMember(&v64, v61);
    return;
    case 59:
    TeamClass::SelectAttackTarget(&v64, v61);
    return;
    case 60:
    v46 = *(uint32_t **)(a1 + 84);
    if ( !v46 )
    goto LABEL_82;
    do
    v47 = (*(int (__thiscall **)(uint32_t *))(*v46 + 828))(v46);
    v48 = (uint32_t *)v46[374];
    if ( v47 )
    TeamClass::LiberateMember_Start(v46, -1, 1);
    v46 = v48;
    while ( v48 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 61:
    v49 = *(uint32_t **)(a1 + 84);
    if ( !v49 )
    goto LABEL_82;
    do
    v50 = (*(int (__thiscall **)(uint32_t *))(*v49 + 836))(v49);
    v51 = (uint32_t *)v49[374];
    if ( v50 )
    TeamClass::LiberateMember_Start(v49, -1, 1);
    v49 = v51;
    while ( v51 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 62:
    v52 = *(uint32_t **)(a1 + 84);
    if ( !v52 )
    goto LABEL_82;
    do
    v53 = (*(int (__thiscall **)(uint32_t *))(*v52 + 832))(v52);
    v54 = (uint32_t *)v52[374];
    if ( v53 )
    TeamClass::LiberateMember_Start(v52, -1, 1);
    v52 = v54;
    while ( v54 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 63:
    v55 = *(uint32_t **)(a1 + 84);
    if ( !v55 )
    goto LABEL_82;
    do
    v56 = (*(int (__thiscall **)(uint32_t *))(*v55 + 840))(v55);
    v57 = (uint32_t *)v55[374];
    if ( v56 )
    TeamClass::LiberateMember_Start(v55, -1, 1);
    v55 = v57;
    while ( v57 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    case 64:
    v58 = *(uint32_t **)(a1 + 84);
    if ( !v58 )
    goto LABEL_82;
    do
    v59 = (*(int (__thiscall **)(uint32_t *))(*v58 + 844))(v58);
    v60 = (uint32_t *)v58[374];
    if ( v59 )
    TeamClass::LiberateMember_Start(v58, -1, 1);
    v58 = v60;
    while ( v60 );
    *(uint8_t *)(a1 + 128) = 1;
    return;
    default:
    return;
    while ( *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v44 + 132))(v44) + 1504) <= v44[69] )
    v44 = (uint32_t *)v44[374];
    if ( !v44 )
    *(uint8_t *)(a1 + 128) = 1;
    return;
}

char  TeamClass::LiberateMember_Start(int this, int a2, unsigned int a3, char a4)
{
    int v5; // eax
    void*375 *v7; // ecx
    int v8; // eax
    int v9; // eax
    int v10; // ebx
    int v11; // esi
    int v12; // eax
    int v13; // eax
    int v14; // esi
    char v15; // cl
    int v16; // eax
    char v17; // dl
    int v18; // eax
    int v19; // eax
    int v20; // eax
    int v21; // [esp+8h] [ebp-4h]
    char v22; // [esp+14h] [ebp+8h]
    v5 = *(uint32_t *)(a2 + 1492);
    *(uint8_t *)(a2 + 1720) = 1;
    if ( this != v5 )
    return 1;
    if ( *(uint32_t *)(a2 + 52) == *(uint32_t *)(this + 112) )
    v7 = *(void*375 **)(a2 + 540);
    if ( v7 )
    if ( !(unsigned __int8)House::IsCurrentPlayer(v7) )
    ObjectClass::SetReference((uint32_t *)a2, 0);
    if ( a3 == -1 )
    v8 = *(uint32_t *)(this + 36);
    if ( v8 )
    v9 = *(uint32_t *)(v8 + 228);
    if ( v9 )
    a3 = 0;
    if ( *(int *)(v9 + 156) > 0 )
    v10 = 168;
    do
    v11 = *(uint32_t *)(*(uint32_t *)(this + 36) + 228);
    if ( *(uint32_t *)(v10 + v11) == (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 136))(a2) )
    break;
    v10 += 8;
    ++a3;
    while ( (signed int)a3 < *(uint32_t *)(v11 + 156) );
    v12 = *(uint32_t *)(this + 36);
    if ( v12 )
    v13 = *(uint32_t *)(v12 + 228);
    if ( v13 )
    if ( a3 < *(uint32_t *)(v13 + 156) )
    --*(uint32_t *)(this + 4 * a3 + 136);
    v14 = *(uint32_t *)(this + 84);
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v22 = 0;
    v21 = 0;
    if ( v14 )
    while ( !v17 || !v15 )
    if ( v14 == a2 )
    if ( v16 )
    *(uint32_t *)(v16 + 1496) = *(uint32_t *)(v14 + 1496);
    else
    *(uint32_t *)(this + 84) = *(uint32_t *)(v14 + 1496);
    v18 = *(uint32_t *)(v14 + 1496);
    *(uint32_t *)(v14 + 1496) = 0;
    *(uint32_t *)(v14 + 1492) = 0;
    *(uint32_t *)(v14 + 176) = -1;
    *(uint32_t *)(v14 + 1448) = 0;
    *(uint32_t *)(v14 + 696) = 0;
    v14 = v18;
    --*(uint32_t *)(this + 72);
    v19 = (*(int (__thiscall **)(int))(*(uint32_t *)a2 + 704))(a2);
    v17 = 1;
    *(uint32_t *)(this + 76) -= v19;
    else
    if ( v15 || (v22 = 0, *(uint8_t *)(v14 + 1673)) )
    v22 = 1;
    v21 = v14;
    v14 = *(uint32_t *)(v14 + 1496);
    if ( !v14 )
    v15 = v22;
    break;
    v16 = v21;
    v15 = v22;
    if ( *(uint32_t *)(a2 + 1492) )
    *(uint32_t *)(a2 + 1492) = 0;
    if ( !IKnowWhatImDoing && *(uint8_t *)(a2 + 144) && !*(uint8_t *)(a2 + 1061) && !*(uint8_t *)(a2 + 129) && !a4 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a2 + 1156))(a2, 0, 1);
    v15 = v22;
    if ( !v15 )
    v20 = *(uint32_t *)(this + 84);
    if ( v20 )
    *(uint8_t *)(v20 + 1673) = 1;
    *(uint32_t *)(this + 52) = 0;
    *(uint8_t *)(this + 126) = 1;
    *(uint8_t *)(this + 125) = 1;
    return 1;
}

int  TeamClass::_vt10(uint32_t *this, int a2, char a3)
{
    int result; // eax
    int v4; // edx
    result = a2;
    if ( a2 == *(this + 28) )
    *(this + 28) = 0;
    v4 = *(this + 21);
    if ( a2 == v4 && a3 )
    *(this + 21) = *(uint32_t *)(v4 + 1496);
    if ( a2 == *(this + 11) )
    *(this + 11) = 0;
    if ( a2 == *(this + 10) )
    *(this + 10) = 0;
    if ( *(this + 16) == a2 )
    *(this + 16) = 0;
    if ( *(this + 15) == a2 )
    *(this + 15) = 0;
    if ( *(this + 13) == a2 )
    *(this + 13) = 0;
    if ( *(this + 9) == a2 )
    *(this + 9) = 0;
    if ( *(this + 14) == a2 )
    *(this + 14) = 0;
    if ( *(this + 17) == a2 )
    *(this + 17) = 0;
    if ( *(this + 12) == a2 )
    *(this + 12) = 0;
    return result;
}

char  TeamClass::WakeUpAllMembers(uint32_t *this)
{
    char result; // al
    int i; // esi
    result = TeamClass::SelectMember((int)this, 0);
    for ( i = *(this + 21); i; i = *(uint32_t *)(i + 1496) )
    result = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)i + 968))(i, 0);
    *(uint8_t *)(i + 1672) = 1;
    return result;
}

int __stdcall TeamClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int __stdcall TeamClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448655;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int  TeamClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // edx
    int v12; // eax
    int v13; // eax
    int v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    int v18; // ecx
    int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // edx
    int v23; // eax
    int v24; // ecx
    int v25; // edx
    AbstractClass::ProcessPower((void*378 *)this);
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 36) + 4) + 16))(*(uint32_t *)(this + 36) + 4);
    Power::TimerProcess(v3);
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 44) + 4) + 16))(*(uint32_t *)(this + 44) + 4);
    Power::TimerProcess(v4);
    v5 = *(uint32_t *)(this + 56);
    if ( v5 )
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 16))(v5 + 4);
    Power::TimerProcess(v6);
    Power::TimerProcess(*(uint32_t *)(this + 72));
    Power::TimerProcess(*(uint32_t *)(this + 76));
    v7 = *(uint32_t *)(this + 84);
    if ( v7 )
    v8 = (*(int (__stdcall **)(int))(*(uint32_t *)(v7 + 4) + 16))(v7 + 4);
    Power::TimerProcess(v8);
    v9 = *(uint32_t *)(this + 88);
    v10 = *(uint32_t *)(this + 96);
    if ( v9 != -1 )
    if ( (int)CurrentFrame - v9 >= v10 )
    v10 = 0;
    else
    v10 -= (int)CurrentFrame - v9;
    Power::TimerProcess(v10);
    v11 = *(uint32_t *)(this + 100);
    v12 = *(uint32_t *)(this + 108);
    if ( v11 != -1 )
    if ( (int)CurrentFrame - v11 >= v12 )
    v12 = 0;
    else
    v12 -= (int)CurrentFrame - v11;
    Power::TimerProcess(v12);
    v13 = *(uint32_t *)(this + 112);
    if ( v13 )
    v14 = (*(int (__stdcall **)(int))(*(uint32_t *)(v13 + 4) + 16))(v13 + 4);
    v13 = Power::TimerProcess(v14);
    LOBYTE(v13) = *(uint8_t *)(this + 119);
    Power::FlagProcess(a2, v13);
    LOBYTE(v15) = *(uint8_t *)(this + 120);
    Power::FlagProcess(a2, v15);
    LOBYTE(v16) = *(uint8_t *)(this + 121);
    v17 = Power::FlagProcess(a2, v16);
    LOBYTE(v17) = *(uint8_t *)(this + 122);
    Power::FlagProcess(a2, v17);
    LOBYTE(v18) = *(uint8_t *)(this + 123);
    Power::FlagProcess(a2, v18);
    LOBYTE(v19) = *(uint8_t *)(this + 124);
    v20 = Power::FlagProcess(a2, v19);
    LOBYTE(v20) = *(uint8_t *)(this + 125);
    Power::FlagProcess(a2, v20);
    LOBYTE(v21) = *(uint8_t *)(this + 126);
    Power::FlagProcess(a2, v21);
    LOBYTE(v22) = *(uint8_t *)(this + 127);
    v23 = Power::FlagProcess(a2, v22);
    LOBYTE(v23) = *(uint8_t *)(this + 128);
    Power::FlagProcess(a2, v23);
    LOBYTE(v24) = *(uint8_t *)(this + 130);
    Power::FlagProcess(a2, v24);
    LOBYTE(v25) = *(uint8_t *)(this + 131);
    Power::FlagProcess(a2, v25);
    return Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 136), 24);
}

char  TeamClass::AssignMemberToCoordinator(int this, int a2, char a3)
{
    void *CellFromArray; // eax
    int v5; // ecx
    int v6; // esi
    uint32_t *v7; // eax
    int ObjectCell; // eax
    uint32_t v10[2]; // [esp+4h] [ebp-8h] BYREF
    if ( a3 )
    CellFromArray = ScenarioClass::GetCellFromArray((__int16 *)ScenarioClass_Instance, *(uint32_t *)(a2 + 4));
    TeamClass::SelectMember(this, (int)CellFromArray);
    v5 = *(uint32_t *)(this + 60);
    if ( v5 && (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 44))(v5) == 11 )
    v6 = *(uint32_t *)(this + 60);
    if ( v6 )
    v7 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v6 + 44))(*(uint32_t *)(this + 60)) == 11 ? (uint32_t *)v6 : 0;
    else
    v7 = 0;
    v10[0] = 0;
    v10[1] = 0;
    ObjectCell = Object::FindObjectCell(v7, v10, 0);
    if ( ObjectCell )
    TeamClass::SelectMember(this, ObjectCell);
    LABEL_10:
    LOBYTE(ObjectCell) = TeamClass::AttackCoordinator((int *)this);
    else
    if ( *(uint32_t *)(this + 60) )
    goto LABEL_10;
    LOBYTE(ObjectCell) = TeamClass::SelectMember(this, 0);
    *(uint8_t *)(this + 128) = 1;
    return ObjectCell;
}

void  TeamClass::SelectBestMember(uint32_t *this, int a2, int a3)
{
    int v3; // ebp
    uint8_t *v4; // esi
    uint32_t *v5; // edi
    int v6; // ebx
    int v7; // ebp
    int v8; // ebx
    int v9; // edi
    int *v10; // ebx
    int v11; // eax
    int v12; // ecx
    int v13; // edx
    uint32_t *v14; // eax
    int v15; // eax
    int TileIndex; // [esp-30h] [ebp-60h]
    void *v17; // [esp-4h] [ebp-34h]
    int v19; // [esp+14h] [ebp-1Ch] BYREF
    int v20; // [esp+18h] [ebp-18h] BYREF
    int v21; // [esp+1Ch] [ebp-14h] BYREF
    int v22; // [esp+20h] [ebp-10h] BYREF
    uint8_t v23[8]; // [esp+24h] [ebp-Ch] BYREF
    int v24; // [esp+2Ch] [ebp-4h]
    v3 = (int)this;
    if ( (uint8_t)a3 )
    if ( *(this + 15) )
    goto LABEL_22;
    v4 = (uint8_t *)*(this + 21);
    if ( v4 )
    v5 = (uint32_t *)*(this + 21);
    a3 = -1;
    v6 = (unsigned __int16)HIWORD(*(uint32_t *)(a2 + 4));
    a2 = *((uint32_t *)g_TriggerTypeCount + (unsigned __int16)*(uint32_t *)(a2 + 4));
    do
    v7 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v5 + 132))(v5) + 1532);
    if ( v5
    && *((uint8_t *)v5 + 144)
    && v5[27]
    && (IKnowWhatImDoing || !*((uint8_t *)v5 + 129))
    && (*((uint8_t *)v5 + 1673) || (*(int (__thiscall **)(uint32_t *))(*v5 + 44))(v5) == 2)
    && v7 > a3 )
    v4 = v5;
    a3 = v7;
    v5 = (uint32_t *)v5[374];
    while ( v5 );
    v3 = (int)this;
    v8 = TeamClass::ScoreMember(v4, v6, 0);
    if ( v8 )
    v9 = *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v4 + 132))(v4) + 1460);
    v10 = (int *)(v8 + 156);
    v11 = *v10;
    v12 = v10[1];
    v24 = v10[2];
    LOWORD(a3) = v11 / 256;
    v13 = *(uint32_t *)v4;
    HIWORD(a3) = v12 / 256;
    v21 = a3;
    a2 = 0;
    v14 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint8_t *))(v13 + 72))(v4, v23);
    LOWORD(a3) = *v14 / 256;
    HIWORD(a3) = v14[1] / 256;
    LOBYTE(v14) = v4[140];
    v20 = a3;
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v20, v9, (char)v14);
    v15 = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v4 + 132))(v4);
    v19 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v22,
    &v22,
    (__int16 *)&v21,
    *(uint32_t *)(v15 + 1660),
    TileIndex,
    v9,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    (__int16 *)&a2,
    0,
    0);
    if ( v19 == dword_B0E948 )
    TeamClass::SelectMember((int)this, 0);
    else
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    TeamClass::SelectMember((int)this, (int)v17);
    v3 = (int)this;
    if ( !*(uint32_t *)(v3 + 60) )
    *(uint8_t *)(v3 + 128) = 1;
    return;
    LABEL_22:
    TeamClass::UpdateMembers(v3);
}

// 0x006EEEA0
uint32_t * TeamClass::ScoreMember(void *this, uint32_t *a2, int a3, int a4)
{
    uint32_t *result; // eax
    int v5; // ecx
    int v6; // esi
    int v7; // edx
    uint32_t *v8; // esi
    int v9; // ecx
    uint32_t *v10; // eax
    int v11; // edx
    uint32_t *v12; // eax
    int v13; // edx
    int TileData; // eax
    int v15; // ebx
    int v16; // ecx
    int v17; // edx
    double v18; // st7
    int v19; // ebx
    int v20; // ecx
    int v21; // edx
    double v22; // st7
    int v23; // [esp+18h] [ebp-70h]
    int v24; // [esp+1Ch] [ebp-6Ch]
    int v25; // [esp+20h] [ebp-68h]
    uint32_t *v26; // [esp+24h] [ebp-64h]
    int v27; // [esp+28h] [ebp-60h]
    int v28; // [esp+2Ch] [ebp-5Ch]
    int v30; // [esp+34h] [ebp-54h] BYREF
    int v31; // [esp+38h] [ebp-50h] BYREF
    int v32; // [esp+3Ch] [ebp-4Ch]
    int v33; // [esp+40h] [ebp-48h]
    int v34; // [esp+44h] [ebp-44h]
    int v35; // [esp+48h] [ebp-40h]
    int v36; // [esp+4Ch] [ebp-3Ch]
    int v37; // [esp+50h] [ebp-38h]
    int v38; // [esp+54h] [ebp-34h]
    int v39; // [esp+5Ch] [ebp-2Ch]
    int v40; // [esp+60h] [ebp-28h]
    int v41; // [esp+68h] [ebp-20h]
    int v42; // [esp+6Ch] [ebp-1Ch]
    char v43[12]; // [esp+70h] [ebp-18h] BYREF
    char v44[12]; // [esp+7Ch] [ebp-Ch] BYREF
    result = 0;
    v5 = a2[135];
    v6 = 0;
    v26 = 0;
    v25 = -1;
    v28 = v5;
    v32 = *(uint32_t *)(v5 + 120);
    v27 = 0;
    if ( v32 > 0 )
    v7 = a3;
    while ( 1 )
    v8 = *(uint32_t **)(*(uint32_t *)(v5 + 108) + 4 * v6);
    if ( (void *)v8[328] == this )
    v9 = -1;
    switch ( v7 )
    case 0:
    v10 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, char *))(*v8 + 72))(v8, v43);
    LOWORD(v23) = *v10 / 256;
    v11 = a2[135];
    HIWORD(v23) = v10[1] / 256;
    v30 = v23;
    v9 = 0x7FFFFFFF - CellClass::GetTileData((__int16 *)&v30, v11);
    break;
    case 1:
    v12 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, char *))(*v8 + 72))(v8, v44);
    LOWORD(v24) = *v12 / 256;
    v13 = a2[135];
    HIWORD(v24) = v12[1] / 256;
    v31 = v24;
    TileData = CellClass::GetTileData((__int16 *)&v31, v13);
    goto LABEL_10;
    case 2:
    v15 = a2[39];
    v39 = a2[40];
    v40 = a2[41];
    v16 = v8[40];
    v33 = v8[39] - v15;
    v17 = v8[41];
    v34 = v16 - v39;
    v35 = v17 - v40;
    v18 = Math::Sqrt(
    (double)v33 * (double)v33
    + (double)(v17 - v40) * (double)(v17 - v40)
    + (double)(v16 - v39) * (double)(v16 - v39));
    v9 = 0x7FFFFFFF - Math::RoundToInt(v18);
    break;
    case 3:
    v19 = a2[39];
    v41 = a2[40];
    v42 = a2[41];
    v20 = v8[40];
    v36 = v8[39] - v19;
    v21 = v8[41];
    v37 = v20 - v41;
    v38 = v21 - v42;
    v22 = Math::Sqrt(
    (double)v36 * (double)v36
    + (double)(v21 - v42) * (double)(v21 - v42)
    + (double)(v20 - v41) * (double)(v20 - v41));
    TileData = Math::RoundToInt(v22);
    LABEL_10:
    v9 = TileData;
    break;
    default:
    break;
    if ( v9 <= v25 )
    result = v26;
    else
    result = v8;
    v25 = v9;
    v26 = v8;
    v6 = ++v27;
    if ( v27 >= v32 )
    break;
    v7 = a3;
    v5 = v28;
    return result;
}

void  TeamClass::SelectDeploymentTarget(int *this, int a2, char a3)
{
    int v3; // esi
    uint32_t *i; // edi
    int v5; // ebx
    uint32_t *v6; // esi
    int v7; // eax
    int *StartCoords; // eax
    int v9; // ebx
    int v10; // ecx
    char v11; // al
    __int16 v12; // cx
    __int16 v13; // ax
    uint32_t *v14; // eax
    int v15; // ecx
    int v16; // edx
    double v17; // st7
    int v18; // edx
    double v19; // st7
    double v20; // st7
    int v21; // eax
    void *v22; // eax
    int v23; // [esp+1Ch] [ebp-3Ch] BYREF
    double v24; // [esp+20h] [ebp-38h] BYREF
    int *v25; // [esp+2Ch] [ebp-2Ch]
    double v26; // [esp+30h] [ebp-28h] BYREF
    double v27; // [esp+38h] [ebp-20h] BYREF
    int v28; // [esp+40h] [ebp-18h]
    int v29; // [esp+4Ch] [ebp-Ch]
    int v30; // [esp+50h] [ebp-8h]
    int v31; // [esp+54h] [ebp-4h]
    v25 = this;
    if ( a3 )
    v3 = *(this + 21);
    LODWORD(v24) = -1;
    for ( i = (uint32_t *)v3; v3; v3 = *(uint32_t *)(v3 + 1496) )
    v5 = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3) + 1532);
    if ( TechnoClass::IsDeployed(v3)
    && (*(uint8_t *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 44))(v3) == 2)
    && v5 > SLODWORD(v24) )
    i = (uint32_t *)v3;
    LODWORD(v24) = v5;
    v6 = 0;
    if ( i )
    v7 = *(uint32_t *)(i[135] + 22016);
    if ( v7 != -1 )
    v6 = *(uint32_t **)&HouseClass_Array->gap0[4 * v7];
    StartCoords = HouseClass::GetStartCoords((uint32_t *)i[135], &v27);
    v9 = *StartCoords;
    v10 = StartCoords[1];
    v29 = *StartCoords;
    v30 = v10;
    v31 = StartCoords[2];
    if ( v6 )
    v14 = HouseClass::GetStartCoords(v6, &v27);
    v15 = v14[1] - v30;
    v16 = v14[2];
    LODWORD(v27) = *v14 - v9;
    LODWORD(v24) = -v15;
    v28 = v16;
    v17 = Math::CalcAngle((double)-v15, (double)SLODWORD(v27));
    v13 = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427);
    LOWORD(v24) = v13;
    else
    v11 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 255);
    LOBYTE(v12) = 0;
    HIBYTE(v12) = v11;
    v13 = v12;
    LODWORD(v24) = v13 - 0x3FFF;
    v18 = HIDWORD(RulesClass_Instance->RefineryRatio) << 8;
    v24 = (double)SLODWORD(v24) * -0.00009587672516830327;
    v27 = (double)v18;
    v26 = (double)v30;
    v19 = Math::SinCos(v24);
    LODWORD(v26) = Math::RoundToInt(v26 - v19 * v27);
    v20 = Math::ArcTan2(v24);
    LOWORD(v24) = (int)Math::RoundToInt(v20 * v27 + (double)v29) / 256;
    WORD1(v24) = SLODWORD(v26) / 256;
    v23 = LODWORD(v24);
    LODWORD(v24) = 0;
    v21 = (*(int (__thiscall **)(uint32_t *))(*i + 132))(i);
    v23 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v26,
    &v26,
    (__int16 *)&v23,
    *(uint32_t *)(v21 + 1660),
    -1,
    0,
    0,
    3,
    3,
    0,
    0,
    0,
    1,
    (__int16 *)&v24,
    0,
    0);
    v22 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23);
    TeamClass::SelectMember((int)v25, (int)v22);
    this = v25;
    TeamClass::UpdateMembers((int)this);
}

void  TeamClass::CheckMemberSuperWeapon(int this, int a2, int a3)
{
    int *v3; // esi
    int v4; // ebx
    int *v5; // ebp
    int v6; // edi
    int v7; // ebx
    int *v8; // edi
    int *v9; // edx
    int v10; // esi
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    int v14; // ecx
    int v15; // eax
    int v16; // ebp
    int v17; // esi
    uint32_t *v18; // eax
    int v19; // eax
    uint32_t *v20; // eax
    int v21; // edx
    int v22; // ecx
    int v23; // [esp+14h] [ebp-20h] BYREF
    int DefaultTimer; // [esp+18h] [ebp-1Ch]
    uint32_t v25[3]; // [esp+1Ch] [ebp-18h] BYREF
    uint32_t v26[3]; // [esp+28h] [ebp-Ch] BYREF
    int v27; // [esp+38h] [ebp+4h]
    int v28; // [esp+38h] [ebp+4h]
    v3 = *(int **)(this + 84);
    v4 = -1;
    v23 = this;
    v5 = v3;
    if ( v3 )
    do
    v6 = *(uint32_t *)((*(int (__thiscall **)(int *))(*v3 + 132))(v3) + 1532);
    if ( TechnoClass::IsDeployed((int)v3)
    && (*((uint8_t *)v3 + 1673) || (*(int (__thiscall **)(int *))(*v3 + 44))(v3) == 2)
    && v6 > v4 )
    v5 = v3;
    v4 = v6;
    v3 = (int *)v3[374];
    while ( v3 );
    this = v23;
    v7 = 0;
    if ( !v5 )
    goto LABEL_33;
    v8 = (int *)v5[135];
    DefaultTimer = 0;
    if ( v8[153] <= 0 )
    goto LABEL_33;
    v9 = (int *)v8[150];
    v10 = v8[153];
    do
    v11 = *(uint32_t *)(*(uint32_t *)(*v9 + 40) + 180);
    if ( v11 == 3 )
    v7 = *v9;
    if ( v11 == 4 )
    DefaultTimer = *v9;
    ++v9;
    --v10;
    while ( v10 );
    if ( !v7 || !DefaultTimer )
    LABEL_32:
    this = v23;
    LABEL_33:
    *(uint8_t *)(this + 128) = 1;
    return;
    if ( !*(uint8_t *)(v7 + 111) || HouseClass::GetPowerRatio(v8) < 1.0 )
    v21 = *(uint32_t *)(v7 + 48);
    v22 = *(uint32_t *)(v7 + 56);
    if ( v21 != -1 )
    if ( (int)CurrentFrame - v21 >= v22 )
    v28 = 0;
    goto LABEL_28;
    v22 -= (int)CurrentFrame - v21;
    v28 = v22;
    LABEL_28:
    DefaultTimer = Super::GetDefaultTimer((uint32_t *)v7);
    if ( *(uint8_t *)(v7 + 109)
    && 1.0 - *(float *)&RulesClass_Instance->RefineryRatio >= (double)v28 / (double)DefaultTimer )
    return;
    goto LABEL_32;
    v12 = GetSuperWeaponTypeFlag(*(uint32_t *)(a2 + 4));
    v25[0] = v5[39];
    v25[1] = v5[40];
    v13 = *v5;
    v25[2] = v5[41];
    v14 = *(uint32_t *)(v23 + 36);
    LOBYTE(v14) = *(uint8_t *)(v14 + 247);
    v15 = (*(int (__thiscall **)(int *, int, uint32_t *, int))(v13 + 964))(v5, v12, v25, v14);
    v16 = v23;
    v17 = v15;
    if ( v15 )
    v18 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint32_t *))(**(uint32_t **)(v23 + 52) + 72))(*(uint32_t *)(v23 + 52), v26);
    LOWORD(v27) = *v18 / 256;
    HIWORD(v27) = v18[1] / 256;
    v19 = *(uint32_t *)(v7 + 40);
    v23 = v27;
    SuperWeapon::FireSuperWeaponHouseClass((void*375 *)v8, *(uint32_t *)(v19 + 180), (int)&v23);
    v20 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)v17 + 72))(v17, v26);
    LOWORD(v27) = *v20 / 256;
    HIWORD(v27) = v20[1] / 256;
    v23 = v27;
    SuperWeapon::FireSuperWeaponHouseClass((void*375 *)v8, *(uint32_t *)(*(uint32_t *)(DefaultTimer + 40) + 180), (int)&v23);
    TeamClass::SelectMember(v16, v17);
    *(uint8_t *)(v16 + 128) = 1;
}

int TeamClass::_vt12()
{
    return 160;
}

int TeamClass::_vt11()
{
    return 34;
}

void ** TeamClass::_vt08(void **Block, char a2)
{
    TeamClass::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

