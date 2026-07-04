#include "technoclass.hpp"

int  TechnoClass::sub_4157C0(int *this)
{
    int v2; // edi
    int v3; // edi
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // edi
    void *v8; // eax
    int v10; // [esp+2Ch] [ebp-14h] BYREF
    int v11; // [esp+30h] [ebp-10h] BYREF
    int v12[3]; // [esp+34h] [ebp-Ch] BYREF
    v2 = ObjectClass::ComputeDistance(this, *(this + 173));
    if ( v2 <= *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(*this + 1016))(this, 0) + 180) )
    (*(void (__thiscall **)(int *, uint32_t, uint32_t, uint32_t, uint32_t))(*this + 1164))(this, 0, 0, 0, 0);
    v3 = *this;
    v4 = (*(int (__thiscall **)(int *, uint32_t))(*this + 1016))(this, 0);
    (*(void (__thiscall **)(int *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(v3 + 1160))(
    this,
    0,
    0,
    0,
    0,
    *(uint32_t *)(*(uint32_t *)v4 + 164));
    v12[0] = *(this + 39);
    v5 = *(this + 152) + 3;
    v12[1] = *(this + 40);
    v12[2] = *(this + 41);
    MapClass::RevealArea2(&MapClass_Instance, v12, 0, v5, 0);
    if ( !*(this + 361) )
    v6 = TechnoClass::MapHouseRelationIndex((uint32_t *)*(this + 135));
    v10 = *CellClass::FindOpenNeighbor(
    (int *)&MapClass_Instance,
    &v11,
    v6,
    (int)&g_AircraftStatusFlag,
    (int)&g_AircraftStatusFlag,
    4,
    1,
    0);
    if ( v10 != g_AircraftStatusFlag )
    v7 = *this;
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10);
    (*(void (__thiscall **)(int *, void *, int))(v7 + 1152))(this, v8, 1);
    return 3;
}

int  TechnoClass::sub_4158E0(int *this)
{
    int v2; // eax
    v2 = *(this + 173);
    if ( v2 )
    if ( *(this + 361) )
    if ( ObjectClass::ComputeDistance(this, v2) <= RulesClass_Instance->ExplosiveVoxelDebris[1] )
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 27, 0);
    --*((uint8_t *)this + 1747);
    return 3;
    else
    (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v2, 1);
    return 3;
    else
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, 0, 1);
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 4, 0);
    return 3;
}

int  TechnoClass::sub_415960(uint32_t *this)
{
    int v2; // eax
    char v3; // al
    uint32_t v5[3]; // [esp+4h] [ebp-Ch] BYREF
    v2 = *(this + 173);
    *((uint8_t *)this + 1746) = 1;
    if ( !v2 || !*(this + 70) )
    *((uint8_t *)this + 1746) = 0;
    LABEL_9:
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 968))(this, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, 0, 1);
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 4, 0);
    return 5;
    if ( ObjectClass::ComputeDistance(this, v2) > RulesClass_Instance->ExplosiveVoxelDebris[1] )
    v3 = *((uint8_t *)this + 1747);
    *((uint8_t *)this + 1746) = 0;
    if ( v3 > 0 )
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 26, 0);
    return 5;
    goto LABEL_9;
    v5[0] = *(this + 39);
    v5[1] = *(this + 40);
    v5[2] = *(this + 41);
    if ( IsCoordVisibleMap(&MapClass_Instance, v5) )
    ProcessTechnoMovementAction((char *)this);
    return 5;
    return 5;
}

int  TechnoClass::sub_417CA0(#377 *this, int a2, int a3, int a4, int a5)
{
    return ScriptAction::ExecuteMissionCmd(this);
}

int  TechnoClass::sub_4195A0(void *this, int a2, __int16 *a3)
{
    uint32_t *v4; // eax
    int *v5; // ebx
    int v6; // ebp
    int v7; // edi
    int v8; // ecx
    int *v9; // eax
    int v10; // kr08_4
    int v11; // eax
    void *v12; // eax
    __int16 v14; // [esp+12h] [ebp-Eh]
    uint8_t v15[12]; // [esp+14h] [ebp-Ch] BYREF
    int v16; // [esp+28h] [ebp+8h]
    *(uint32_t *)a3 = g_AircraftStatusFlag;
    v4 = (uint32_t *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)this + 72))(this, v15);
    v5 = dword_817A78;
    v6 = *v4 / 256;
    v7 = v4[1] / 256;
    v14 = v7;
    while ( 1 )
    v8 = *v5 & 7;
    LOWORD(v16) = v6 + LOWORD(Direction_X_Offsets[v8]);
    HIWORD(v16) = v7 + HIWORD(Direction_X_Offsets[v8]);
    *(uint32_t *)a3 = v16;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, a3) )
    break;
    LABEL_7:
    if ( (int)++v5 >= (int)&IFlyControl `RTTI Type Descriptor' )
    return 0;
    v9 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a2 + 72))(a2, v15);
    v10 = *v9;
    v11 = v9[1] / 256;
    if ( (unsigned __int16)(v10 / 256) != *a3 || (_WORD)v11 != a3[1] )
    v12 = CellCoord::To_CellObj(&MapClass_Instance, a3);
    if ( !Cell::IsBuildable((int)v12, 0, 0, 0, -1, 0, -1, 1) )
    LOWORD(v7) = v14;
    goto LABEL_7;
    return 0;
}

uint32_t * TechnoClass::sub_41A570(_WORD *this, uint32_t *a2)
{
    int v2; // ecx
    _WORD *v4; // [esp+0h] [ebp-4h] BYREF
    v4 = this;
    v2 = *ProgressTimer::GetValue(this + 464, &v4);
    *a2 = v2;
    return a2;
}

int __fastcall TechnoClass::sub_41A9E0(int a1, int a2, uint8_t *a3, int a4, char a5)
{
    int result; // eax
    int v7; // edi
    result = TriggerTypeClass::ReadINI((uint32_t *)a1, a2, a3, a4, a5);
    if ( !result )
    if ( !*(uint8_t *)(a1 + 1737) || *(uint32_t *)(a1 + 280) )
    v7 = *ProgressTimer::GetValue((_WORD *)(a1 + 928), &a5);
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(a1 + 1728) + 28))(a1 + 1728)
    || abs16(v7 - *(_WORD *)ObjectClass::CalcTargetFacing((void *)a1, (int *)&a5, (int)a3)) <= 0x800u )
    return 0;
    else
    return 2;
    else
    return 1;
    return result;
}

int __stdcall TechnoClass::sub_41B6A0(int a1)
{
    uint32_t *v1; // edi
    int v2; // edi
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 4) + 3580) )
    if ( !*(uint32_t *)(a1 - 1448) )
    if ( Team::AllMembersValid((int *)(a1 - 1728)) )
    v1 = (uint32_t *)Array::Get((uint32_t *)(a1 - 1728), 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)(a1 - 1728) + 388))(a1 - 1728) == 7 )
    if ( v1 )
    if ( (*(int (__thiscall **)(uint32_t *))(*v1 + 44))(v1) == 6 )
    v2 = v1[328];
    if ( *(uint8_t *)(v2 + 5801) || *(uint8_t *)(v2 + 5835) )
    return 0;
    if ( (!Team::AllMembersValid((int *)(a1 - 1728)) || !*(uint8_t *)(*(uint32_t *)(a1 + 4) + 3580))
    && (!*(uint32_t *)(a1 - 1448) || !*(uint8_t *)(*(uint32_t *)(a1 + 4) + 3580)) )
    return 0;
    else
    return 100;
}

int __stdcall TechnoClass::sub_41B760(int a1)
{
    int v1; // edi
    uint32_t *v2; // esi
    int v3; // eax
    uint32_t *Value; // eax
    v1 = a1;
    v2 = (uint32_t *)(a1 - 1728);
    if ( Team::AllMembersValid((int *)(a1 - 1728)) )
    v3 = Array::Get(v2, 0);
    Value = ProgressTimer::GetValue((_WORD *)(v3 + 904), &a1);
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
    if ( *(uint32_t *)(v1 - 1448) )
    Value = ProgressTimer::GetValue((_WORD *)(v1 - 800), &a1);
    return ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
    return RulesClass_Instance->PoseDir;
}

uint32_t *__stdcall TechnoClass::sub_41B7F0(int a1)
{
    uint32_t *result; // eax
    int v2; // eax
    result = (uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)(a1 - 1728) + 1016))(a1 - 1728, 0);
    if ( result )
    result = (uint32_t *)*result;
    if ( result )
    v2 = result[40];
    return (uint32_t *)(*(int *)(v2 + 732) <= 1 && *(uint8_t *)(v2 + 670) == 0);
    return result;
}

int __stdcall TechnoClass::sub_41B860(int a1)
{
    return *(unsigned __int8 *)(a1 + 18);
}

char  TechnoClass::sub_41B9E0(uint8_t *this)
{
    return *(this + 1749);
}

char __userpurge TechnoClass::sub_41BC30@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
    RulesClass *v5; // edi
    int v6; // ebp
    int v7; // esi
    int v8; // ebx
    char *UIObjectCOM; // edi
    int *v10; // eax
    int v11; // edx
    int v12; // eax
    int *v13; // eax
    char *v14; // eax
    char *v15; // edi
    int v18; // [esp+8h] [ebp-20h]
    int v20; // [esp+10h] [ebp-18h] BYREF
    int v21; // [esp+14h] [ebp-14h] BYREF
    int v22; // [esp+18h] [ebp-10h]
    int v23; // [esp+1Ch] [ebp-Ch] BYREF
    uint8_t v24[8]; // [esp+20h] [ebp-8h] BYREF
    if ( !*(uint8_t *)(a1 + 1701) )
    return 0;
    v5 = RulesClass_Instance;
    if ( LOBYTE(RulesClass_Instance->SuperWeapons) )
    v18 = *(uint32_t *)(a1 + 100);
    else
    v18 = *(uint32_t *)(*(uint32_t *)(a1 + 1724) + 160);
    v6 = Math::RoundToInt((double)v18 * *(float *)&RulesClass_Instance->MaxIQLevels);
    if ( v6 < 0 )
    v6 = 0;
    v7 = a1 - 8;
    v8 = v7;
    if ( *(uint32_t *)(a1 + 1056) )
    v8 = *(uint32_t *)(a1 + 1056);
    UIObjectCOM = (char *)CreateUIObjectCOM(*(uint32_t *)(v5->WaterCrate[4] + 160), v7, v8, v6, v5->SilverCrate[5], 0, 1);
    v10 = (int *)(*(int (__thiscall **)(int, int *, int))(*(uint32_t *)v7 + 72))(v7, &v23, a2);
    v21 = *v10;
    v22 = v10[1];
    v11 = *(uint32_t *)v7;
    v23 = v10[2];
    v12 = (*(int (__thiscall **)(int))(v11 + 456))(v7);
    v23 -= v12;
    if ( UIObjectCOM )
    (*(void (__thiscall **)(char *))(*(uint32_t *)UIObjectCOM + 212))(UIObjectCOM);
    Warhead::ApplyDamage(UIObjectCOM, &v21);
    (*(void (__stdcall **)(char *))(*(uint32_t *)UIObjectCOM + 8))(UIObjectCOM);
    if ( *(uint32_t *)(v20 + 1056) )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)v7 + 224))(v7, *(uint32_t *)(v20 + 1056));
    else if ( *(uint32_t *)(v20 + 1060) )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)v7 + 228))(v7, *(uint32_t *)(v20 + 1060));
    v13 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v7 + 72))(v7, v24);
    v20 = *v13;
    v21 = v13[1];
    v22 = v13[2];
    v14 = (char *)CreateUIObjectCOM(
    *(uint32_t *)(RulesClass_Instance->WaterCrate[4] + 160),
    v7,
    v8,
    v6,
    RulesClass_Instance->SilverCrate[5],
    0,
    1);
    v15 = v14;
    if ( v14 )
    (*(void (__thiscall **)(char *))(*(uint32_t *)v14 + 212))(v14);
    Warhead::ApplyDamage(v15, &v20);
    (*(void (__stdcall **)(char *))(*(uint32_t *)v15 + 8))(v15);
    (*(void (__thiscall **)(int))(*(uint32_t *)v7 + 248))(v7);
    return 1;
}

// 0x0041BFF0
int  TechnoClass::vt_entry_434(#377 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

uint32_t * TechnoClass::sub_41C1E0(_WORD *this, uint32_t *a2)
{
    int v2; // ecx
    _WORD *v4; // [esp+0h] [ebp-4h] BYREF
    v4 = this;
    v2 = *ProgressTimer::GetValue(this + 464, &v4);
    *a2 = v2;
    return a2;
}

int  TechnoClass::sub_41C640(#374 *this, int a2, void *a3, void **a4)
{
    return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 4), a3, a4);
}

int  TechnoClass::sub_41C650(#374 *this, int a2)
{
    return AircraftClass::AddRef(this, a2 - 4);
}

int  TechnoClass::sub_41C660(#374 *this, int a2)
{
    return AircraftClass::Release(this, a2 - 4);
}

int  TechnoClass::sub_41C670(#374 *this, int a2, void *a3, void **a4)
{
    return AircraftClass::QueryInterface(this, (AbstractClass *)(a2 - 1728), a3, a4);
}

int  TechnoClass::sub_41C680(#374 *this, int a2)
{
    return AircraftClass::AddRef(this, a2 - 1728);
}

int  TechnoClass::sub_41C690(#374 *this, int a2)
{
    return AircraftClass::Release(this, a2 - 1728);
}

bool  TechnoClass::CreateUnit(BuildingClass_Full *this)
{
    int v2; // eax
    uint32_t *v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int *p_Location_X; // edi
    int v8; // ebx
    int v9; // ebp
    bool v10; // bl
    bool v11; // al
    void **v12; // eax
    int v13; // edx
    int v14; // ebp
    int v15; // edi
    void **v16; // eax
    void **v17; // eax
    int v18; // edx
    int v19; // ebp
    int v20; // edi
    void **v21; // edi
    int v22; // eax
    int MissionTimer_StartTime; // edx
    int v24; // eax
    int v25; // ebp
    uint32_t *CoordsCoord; // eax
    int v27; // eax
    int v28; // ebp
    int *v29; // eax
    int *v30; // eax
    int v31; // eax
    int v32; // eax
    int v33; // edi
    int v34; // eax
    int v35; // edi
    void **v36; // eax
    int v37; // eax
    int v38; // ebx
    int v39; // ebp
    char v40; // cl
    int v41; // eax
    double v42; // st7
    int v43; // edx
    uint32_t *v44; // edi
    uint32_t *v45; // ebx
    int v46; // eax
    int *StartCoordsHouse; // edx
    int v48; // eax
    int v49; // ecx
    int v50; // edi
    int v51; // edx
    int v52; // edx
    int v53; // edi
    int v54; // ebx
    int IsAlive; // eax
    int v56; // eax
    int v57; // ecx
    void **v58; // edi
    int *v59; // eax
    uint32_t *v60; // eax
    uint32_t *v61; // eax
    int v62; // eax
    int *v63; // eax
    int v64; // ecx
    int v65; // edx
    int v66; // eax
    int v67; // eax
    uint32_t *v68; // ecx
    int v69; // ecx
    int v70; // eax
    int v71; // edx
    int v72; // edx
    int CurrentMission; // ebx
    int MissionTimer_Padding; // ecx
    double v75; // st7
    int v76; // ebp
    int v77; // eax
    uint32_t *v78; // eax
    int v79; // eax
    int v80; // ecx
    int v81; // ecx
    unsigned __int8 IronTintTimer_StartTime_high; // cl
    int v83; // eax
    int v84; // ecx
    uint32_t *v85; // ecx
    int v86; // ecx
    int v87; // eax
    int v88; // eax
    char v89; // cl
    int v90; // ecx
    int v91; // edx
    char *ProductionTimeMultRules; // eax
    int *v93; // ebp
    int v94; // edx
    int v95; // eax
    int v96; // edi
    int HouseTypeClass; // eax
    int v98; // ecx
    HouseClass *v99; // edx
    int v100; // ecx
    uint8_t *v101; // edi
    int v102; // edx
    uint32_t *v103; // eax
    uint32_t *v104; // eax
    int v105; // ecx
    int v106; // edx
    int v107; // ebp
    int v108; // eax
    int v109; // eax
    int v111; // [esp+Ch] [ebp-94h]
    int v112; // [esp+Ch] [ebp-94h]
    bool v113; // [esp+2Bh] [ebp-75h]
    int i; // [esp+2Ch] [ebp-74h]
    int v115; // [esp+30h] [ebp-70h]
    int v116; // [esp+34h] [ebp-6Ch]
    int v117; // [esp+38h] [ebp-68h] BYREF
    int v118; // [esp+3Ch] [ebp-64h] BYREF
    double v119; // [esp+40h] [ebp-60h] BYREF
    float v120; // [esp+48h] [ebp-58h]
    int Location_X; // [esp+54h] [ebp-4Ch] BYREF
    int Location_Y; // [esp+58h] [ebp-48h]
    int Location_Z; // [esp+5Ch] [ebp-44h]
    int v124; // [esp+60h] [ebp-40h]
    int v125; // [esp+64h] [ebp-3Ch]
    int v126; // [esp+6Ch] [ebp-34h]
    int v127; // [esp+78h] [ebp-28h]
    int v128; // [esp+7Ch] [ebp-24h]
    int v129; // [esp+88h] [ebp-18h]
    int v130; // [esp+8Ch] [ebp-14h]
    char v131[16]; // [esp+90h] [ebp-10h] BYREF
    if ( !BYTE2(this->IronTintTimer_Padding) && *(uint32_t *)(this->MissionTimer_StartTime + 760) != -1 )
    v2 = (*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(this, &Location_X);
    StartAudioController(v2, (int)&this->IronTintTimer_TimeLeft + 2);
    if ( *(uint8_t *)(this->MissionTimer_StartTime + 852) )
    ConstructionPositionTracker(this);
    ObjectClass::DetectCloaked((void*374 *)this);
    if ( *(uint8_t *)(this->MissionTimer_StartTime + 883) )
    v3 = (uint32_t *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &Location_X);
    Coord::To_Cell(&MapClass_Instance, v3);
    this->UnknownFlag_9E = Cell::CanPlaceBuilding(*(void **)&this->_pad_D8[172]) == 0;
    if ( this->MissionTimer_StartTime == LODWORD(RulesClass_Instance->AITriggerSuccessWeightDelta) )
    if ( MCV_DeployModeEnabled )
    this->UnknownFlag_9E = 0;
    else
    this->UnknownFlag_9E = 1;
    if ( *(uint8_t *)(this->MissionTimer_StartTime + 857) )
    v4 = (*(int (__thiscall **)(BuildingClass_Full *))(*(uint32_t *)this->_pad_base + 444))(this);
    this->UnknownFlag_9E = !v4 || !Building::GetNthOfType(v4);
    if ( *(uint32_t *)(this->MissionTimer_StartTime + 844) != -1 )
    Location_X = this->Location_X;
    v5 = *(uint32_t *)this->_pad_base;
    Location_Y = this->Location_Y;
    Location_Z = this->Location_Z;
    (*(void (__thiscall **)(BuildingClass_Full *, int *))(v5 + 240))(this, &Location_X);
    if ( this->_pad_D8[71] && *(uint32_t *)&this->_pad_D8[72] == this->CurrentMission )
    this->_pad_D8[71] = 0;
    if ( BYTE2(this->IronTintTimer_StartTime) )
    v6 = (*(int (__thiscall **)(BuildingClass_Full *))(*(uint32_t *)this->_pad_base + 488))(this);
    if ( v6 == 2 || v6 == 1 )
    p_Location_X = &this->Location_X;
    Location_X = this->Location_X;
    Location_Y = this->Location_Y;
    Location_Z = this->Location_Z;
    v8 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &Location_X) + 59);
    Location_X = this->Location_X;
    Location_Y = this->Location_Y;
    v9 = this->Location_Z;
    Location_X = this->Location_X;
    Location_Y = this->Location_Y;
    v10 = v8 == 2;
    Location_Z = this->Location_Z;
    v11 = v9 >= Map_MaxHeight + Cell::GetGroundHeight(&Location_X);
    v113 = v11;
    if ( !v10 || v11 )
    if ( *(uint32_t *)(this->MissionTimer_StartTime + 772) )
    v119 = *(double *)&this->_pad_D8[108];
    v120 = *(float *)&this->_pad_D8[116];
    v21 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v21 )
    Location_X = Math::RoundToInt(*(float *)&v119);
    Location_Y = Math::RoundToInt(*((float *)&v119 + 1));
    v22 = Math::RoundToInt(v120);
    MissionTimer_StartTime = this->MissionTimer_StartTime;
    Location_Z = v22;
    AnimClass::ctor(
    v21,
    *(void **)(MissionTimer_StartTime + 772),
    &Location_X,
    0,
    1,
    (void *)0x2600,
    (void *)0xFFFFFFE2,
    0);
    v24 = this->MissionTimer_StartTime;
    v111 = *(uint32_t *)(v24 + 816);
    v25 = Math::RoundToInt(*(double *)(v24 + 680));
    CoordsCoord = Coord::GetCoords((float *)&this->_pad_D8[84], &Location_X);
    PlaySoundEffectAt(CoordsCoord, v25, 0, v111, 1, 0);
    v27 = this->MissionTimer_StartTime;
    v116 = *(uint32_t *)(v27 + 816);
    v28 = Math::RoundToInt(*(double *)(v27 + 680));
    v29 = Coord::GetCoords((float *)&this->_pad_D8[84], &Location_X);
    CreateSmokeEffectAt(v28, v116, *v29, v29[1], v29[2], 0, 0);
    else if ( *(uint8_t *)(this->MissionTimer_StartTime + 854) )
    v12 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v12 )
    v13 = *p_Location_X;
    v14 = this->Location_Y;
    v15 = this->Location_Z;
    Location_X = v13;
    Location_Y = v14;
    Location_Z = v15 + 3;
    AnimClass::ctor(
    v12,
    *(void **)(RulesClass_Instance->Pilot + 4 * RulesClass_Instance->ThirdCrew - 4),
    &Location_X,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v16 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v16 )
    Location_X = *p_Location_X;
    Location_Y = this->Location_Y;
    Location_Z = this->Location_Z;
    AnimClass::ctor(v16, (void *)RulesClass_Instance->FlamingInfantry, &Location_X, 0, 1, (void *)0x600, 0, 0);
    v17 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v17 )
    v18 = *p_Location_X;
    v19 = this->Location_Y;
    v20 = this->Location_Z;
    Location_X = v18;
    Location_Y = v19;
    Location_Z = v20 + 3;
    AnimClass::ctor(v17, *(void **)RulesClass_Instance->Pilot, &Location_X, 0, 1, (void *)0x600, 0, 0);
    if ( !v10 || v113 )
    v30 = Coord::GetCoords((float *)&this->_pad_D8[84], &v119);
    Location_X = *v30;
    Location_Y = v30[1];
    Location_Z = v30[2];
    v31 = this->MissionTimer_StartTime;
    if ( *(uint32_t *)(v31 + 752) )
    v32 = *(uint32_t *)(v31 + 756);
    if ( v32 > 0 )
    v33 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v32);
    v34 = v33
    + Random::Range(
    (uint32_t *)ScenarioClass_Instance + 134,
    0,
    *(uint32_t *)(this->MissionTimer_StartTime + 756));
    if ( v34 > 0 )
    v35 = v34;
    do
    v36 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v36 )
    AnimClass::ctor(
    v36,
    *(void **)(this->MissionTimer_StartTime + 752),
    &Location_X,
    0,
    1,
    (void *)0x600,
    0,
    0);
    --v35;
    while ( v35 );
    v37 = this->MissionTimer_StartTime;
    v38 = 0;
    v39 = 0;
    v124 = 0;
    v40 = *(uint8_t *)(v37 + 856);
    v125 = 0;
    v126 = 0;
    if ( v40 && !v113 )
    v41 = *(uint32_t *)(v37 + 828);
    for ( i = -v41; i <= v41; ++i )
    v115 = -v41;
    if ( -v41 <= v41 )
    v119 = (double)i * (double)i;
    do
    v42 = Math::Sqrt((double)v115 * (double)v115 + v119);
    if ( (int)Math::RoundToInt(v42) <= *(uint32_t *)(this->MissionTimer_StartTime + 828) )
    v43 = i & 7;
    LOWORD(v116) = Location_X / 256 + LOWORD(Direction_X_Offsets[v43]);
    HIWORD(v116) = Location_Y / 256 + HIWORD(Direction_X_Offsets[v43]);
    v117 = v116;
    v44 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v117);
    if ( IsCoordValidMap((int)v44, 0) )
    if ( *(uint32_t *)(this->MissionTimer_StartTime + 824) )
    v45 = __2_YAPAXI_Z(0xB0u);
    if ( v45 )
    v118 = v44[9];
    v46 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 3);
    Object::SpawnAtCell(
    v45,
    *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v46
    + 4
    * *(uint32_t *)(*(uint32_t *)(this->MissionTimer_StartTime
    + 824)
    + 660)],
    (__int16 *)&v118,
    -1);
    *((uint8_t *)v44 + 286) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    StartCoordsHouse = House::GetStartCoords((int)v44, v131);
    v48 = *StartCoordsHouse;
    v49 = StartCoordsHouse[1] - Map_VisibleRect;
    v50 = StartCoordsHouse[2];
    v51 = StartCoordsHouse[3];
    v129 = v50;
    v130 = v51;
    if ( v39 <= 0 || v126 <= 0 )
    v39 = v50;
    else if ( v50 <= 0 || v51 <= 0 )
    v48 = v124;
    v49 = v125;
    v51 = v126;
    else
    v52 = v124;
    v53 = v125;
    v128 = v126;
    v127 = v39;
    if ( v124 > v48 )
    v52 = v48;
    v127 = v124 + v39 - v48;
    if ( v125 > v49 )
    v53 = v49;
    v128 += v125 - v49;
    if ( v52 + v127 < v48 + v129 )
    v127 = v129 - v52 + v48 + 1;
    v54 = v128;
    if ( v128 + v53 < v49 + v130 )
    v54 = v130 - v53 + v49 + 1;
    v39 = v127;
    v48 = v52;
    v49 = v53;
    v51 = v54;
    v38 = v51;
    v124 = v48;
    v125 = v49;
    v126 = v51;
    ++v115;
    while ( v115 <= *(uint32_t *)(this->MissionTimer_StartTime + 828) );
    v41 = *(uint32_t *)(this->MissionTimer_StartTime + 828);
    Cell::CreateCrater(v124, v125, v39, v38, 0);
    LOBYTE(IsAlive) = (*(bool (__thiscall **)(BuildingClass_Full *))(*(uint32_t *)this->_pad_base + 248))(this);
    return IsAlive;
    if ( this->IsAlive && !this->ProductionFlag_9C )
    v56 = this->MissionTimer_StartTime;
    if ( *(uint32_t *)(v56 + 776) )
    v57 = *(uint32_t *)(v56 + 780);
    if ( v57 == 1 || !((int)CurrentFrame % v57) )
    v58 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v58 )
    v59 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &Location_X);
    AnimClass::ctor(v58, *(void **)(this->MissionTimer_StartTime + 776), v59, (void *)1, 1, (void *)0x600, 0, 0);
    if ( this->MissionTimer_StartTime == RulesClass_Instance[1].BarrelDebris[1] )
    v60 = (uint32_t *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &Location_X);
    v61 = Coord::To_Cell(&MapClass_Instance, v60);
    if ( Cell::IsBridge(v61) )
    this->ProductionFlag_9C = 1;
    if ( this->ProductionFlag_9C )
    goto LABEL_187;
    LOBYTE(IsAlive) = this->PlacementAllowed;
    if ( (uint8_t)IsAlive )
    this->PlacementAllowed = 0;
    return IsAlive;
    v62 = *(uint32_t *)&this->_pad_D8[176];
    if ( v62 )
    IsAlive = v62 - 1;
    *(uint32_t *)&this->_pad_D8[176] = IsAlive;
    if ( !IsAlive )
    LOBYTE(IsAlive) = ProductionCompletionCallback(this);
    return IsAlive;
    IsAlive = this->IsAlive;
    if ( (uint8_t)IsAlive )
    if ( *(uint8_t *)(this->MissionTimer_StartTime + 864) )
    v63 = (int *)(*(int (__thiscall **)(BuildingClass_Full *, double *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &v119);
    v64 = *v63;
    v65 = v63[1];
    v66 = v63[2];
    Location_X = v64 - 384;
    Location_Y = v65 - 384;
    Location_Z = v66;
    v67 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &Location_X) + 17);
    if ( v67 == -1
    || *(uint32_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v67] + 668) != this->MissionTimer_StartTime )
    this->ProductionFlag_9C = 1;
    v68 = (uint32_t *)this->MissionTimer_StartTime;
    if ( v68[176] == -1 )
    *(uint32_t *)(this->MissionTimer_StartTime + 704) = *(__int16 *)((*(int (__thiscall **)(uint32_t *))(*v68 + 156))(v68)
    + 6);
    v69 = this->MissionTimer_StartTime;
    if ( *(uint8_t *)(v69 + 882) )
    *(int *)(v69 + 704) /= 2;
    v70 = this->MissionTimer_StartTime;
    if ( *(uint32_t *)(v70 + 700) == -1 )
    *(uint32_t *)(v70 + 700) = *(uint32_t *)(v70 + 704);
    (*(void (__thiscall **)(BuildingClass_Full *, int))(*(uint32_t *)this->_pad_base + 292))(this, 2);
    LOBYTE(IsAlive) = this->IronTintTimer_TimeLeft;
    if ( !(uint8_t)IsAlive )
    LOBYTE(IsAlive) = this->_pad_D8[70];
    if ( !(uint8_t)IsAlive )
    IsAlive = Locomotor::GetSpeed(&this->QueuedMission);
    if ( IsAlive || (IsAlive = this->MissionStartTime) == 0 )
    LOBYTE(this->SuspendedMission) = 0;
    return IsAlive;
    v71 = this->MissionData + this->CurrentMission;
    LOBYTE(this->SuspendedMission) = 1;
    this->CurrentMission = v71;
    v72 = Location_Y;
    this->QueuedMission = (int)CurrentFrame;
    *(uint32_t *)&this->MissionQueued = v72;
    this->MissionStatus = IsAlive;
    CurrentMission = this->CurrentMission;
    if ( *(double *)(this->MissionTimer_StartTime + 680) <= 0.0 || BYTE2(this->IronTintTimer_StartTime) )
    goto LABEL_120;
    MissionTimer_Padding = this->MissionTimer_Padding;
    if ( MissionTimer_Padding
    && (*(int (__thiscall **)(int))(*(uint32_t *)MissionTimer_Padding + 44))(MissionTimer_Padding) == 36 )
    v75 = *(double *)(this->MissionTimer_StartTime + 680) * 5.0;
    else
    v75 = *(double *)(this->MissionTimer_StartTime + 680);
    *(double *)&this->_pad_D8[180] = v75 + *(double *)&this->_pad_D8[180];
    if ( *(double *)&this->_pad_D8[180] < 1.0 || BYTE2(this->IronTintTimer_Padding) )
    goto LABEL_120;
    v76 = Math::RoundToInt(*(double *)&this->_pad_D8[180]);
    v77 = this->MissionTimer_StartTime;
    v118 = v76;
    *(double *)&this->_pad_D8[180] = *(double *)&this->_pad_D8[180] - (double)v76;
    v112 = !strcmp((const char *)(v77 + 36), aInviso)
    ? RulesClass_Instance->SilverCrate[5]
    : RulesClass_Instance->Harvester;
    v78 = (uint32_t *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &Location_X);
    PlaySoundEffectAt(v78, v76, 0, v112, 1, 0);
    LOBYTE(IsAlive) = this->IsAlive;
    if ( (uint8_t)IsAlive )
    LABEL_120:
    v79 = this->MissionTimer_StartTime;
    v80 = *(uint32_t *)(v79 + 664);
    if ( v80 && CurrentMission + *(uint32_t *)(v79 + 692) == v80 && !BYTE2(this->IronTintTimer_StartTime) )
    CreateUnitOnCompletion(this);
    IsAlive = this->MissionTimer_StartTime;
    if ( *(uint8_t *)(IsAlive + 880) )
    if ( HIBYTE(this->IronTintTimer_StartTime) <= 1u )
    if ( CurrentMission < *(uint32_t *)(IsAlive + 704) && CurrentMission )
    goto LABEL_132;
    LABEL_131:
    IsAlive = -this->MissionData;
    this->MissionData = IsAlive;
    return IsAlive;
    v81 = *(uint32_t *)(IsAlive + 692);
    if ( CurrentMission >= *(uint32_t *)(IsAlive + 700) - v81 || CurrentMission == v81 )
    goto LABEL_131;
    LABEL_132:
    IronTintTimer_StartTime_high = HIBYTE(this->IronTintTimer_StartTime);
    if ( IronTintTimer_StartTime_high > 1u )
    if ( CurrentMission >= *(uint32_t *)(IsAlive + 700) - *(uint32_t *)(IsAlive + 692) )
    goto LABEL_143;
    else if ( CurrentMission >= *(uint32_t *)(IsAlive + 704) )
    goto LABEL_143;
    if ( !*(uint8_t *)(IsAlive + 882) )
    goto LABEL_191;
    if ( *(uint8_t *)(IsAlive + 881) )
    LABEL_142:
    if ( CurrentMission > 0 )
    return IsAlive;
    goto LABEL_143;
    if ( this->_pad_D8[76] || CurrentMission < *(uint32_t *)(IsAlive + 700) - *(uint32_t *)(IsAlive + 692) )
    LABEL_191:
    if ( !*(uint8_t *)(IsAlive + 881) )
    LOBYTE(IsAlive) = this->_pad_D8[76];
    if ( !(uint8_t)IsAlive )
    return IsAlive;
    goto LABEL_142;
    LABEL_143:
    if ( IronTintTimer_StartTime_high && IronTintTimer_StartTime_high != 0xFF )
    HIBYTE(this->IronTintTimer_StartTime) = IronTintTimer_StartTime_high - 1;
    v83 = this->MissionTimer_StartTime;
    if ( HIBYTE(this->IronTintTimer_StartTime) )
    if ( *(uint8_t *)(v83 + 881) || this->_pad_D8[76] )
    this->CurrentMission = *(uint32_t *)(v83 + 700);
    else
    this->CurrentMission = *(uint32_t *)(v83 + 696) - *(uint32_t *)(v83 + 692);
    IsAlive = this->MissionTimer_StartTime;
    v84 = *(uint32_t *)(IsAlive + 732);
    if ( v84 || *(uint32_t *)(IsAlive + 736) )
    IsAlive = Random::Range((uint32_t *)ScenarioClass_Instance + 134, v84, *(uint32_t *)(IsAlive + 736));
    *(uint32_t *)&this->_pad_D8[176] = IsAlive;
    return IsAlive;
    v85 = *(uint32_t **)(v83 + 712);
    if ( v85 )
    this->MissionTimer_StartTime = (int)v85;
    if ( v85[176] == -1 )
    *(uint32_t *)(this->MissionTimer_StartTime + 704) = *(__int16 *)((*(int (__thiscall **)(uint32_t *))(*v85 + 156))(v85)
    + 6);
    v86 = this->MissionTimer_StartTime;
    if ( *(uint8_t *)(v86 + 882) )
    *(int *)(v86 + 704) /= 2;
    v87 = this->MissionTimer_StartTime;
    if ( *(uint32_t *)(v87 + 700) == -1 )
    *(uint32_t *)(v87 + 700) = *(uint32_t *)(v87 + 704);
    v88 = this->MissionTimer_StartTime;
    this->ProductionFlag_9C = 0;
    v89 = *(uint8_t *)(v88 + 708);
    *(uint32_t *)&this->_pad_D8[180] = 0;
    HIBYTE(this->IronTintTimer_StartTime) = v89;
    v90 = v88;
    *(uint32_t *)&this->_pad_D8[184] = 0;
    v91 = *(uint32_t *)(v88 + 740);
    ProductionTimeMultRules = *(char **)(v88 + 688);
    if ( v91 || *(uint32_t *)(v90 + 744) )
    ProductionTimeMultRules = (char *)Random::Range(
    (uint32_t *)ScenarioClass_Instance + 134,
    v91,
    *(uint32_t *)(v90 + 744));
    if ( *(uint8_t *)(this->MissionTimer_StartTime + 866) )
    ProductionTimeMultRules = Rules::GetProductionTimeMult(
    (int *)g_GameModeOptions,
    (int)ProductionTimeMultRules);
    this->QueuedMission = (int)CurrentFrame;
    *(uint32_t *)&this->MissionQueued = Location_Y;
    this->MissionStatus = (int)ProductionTimeMultRules;
    this->MissionStartTime = (int)ProductionTimeMultRules;
    this->CurrentMission = *(uint32_t *)(this->MissionTimer_StartTime + 692);
    LOBYTE(IsAlive) = ProductionCompletionCallback(this);
    return IsAlive;
    if ( *(uint32_t *)(v83 + 844) != -1 )
    v93 = &this->Location_X;
    Location_X = this->Location_X;
    v94 = *(uint32_t *)this->_pad_base;
    Location_Y = this->Location_Y;
    Location_Z = this->Location_Z;
    (*(void (__thiscall **)(BuildingClass_Full *, int *))(v94 + 244))(this, &Location_X);
    if ( *(uint32_t *)(this->MissionTimer_StartTime + 844) <= SHIDWORD(RulesClass_Instance->AttackDelay) )
    v95 = *(uint32_t *)&this->_pad_D8[172];
    if ( !v95 || *(uint8_t *)(v95 + 501) )
    v96 = HouseClass_Count;
    HouseTypeClass = HouseTypeClass::Find(g_INI_Key_Civilian);
    v98 = 0;
    if ( v96 > 0 )
    v99 = HouseClass_Array;
    while ( *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v99->gap0 + 52) + 188) != HouseTypeClass )
    ++v98;
    v99 = (HouseClass *)((char *)v99 + 4);
    if ( v98 >= v96 )
    goto LABEL_176;
    *(uint32_t *)&this->_pad_D8[172] = *(uint32_t *)&HouseClass_Array->gap0[4 * v98];
    LABEL_176:
    if ( *(uint32_t *)&this->_pad_D8[172] )
    v100 = *((uint32_t *)Factory_ExitCellTable
    + *(uint32_t *)(*(uint32_t *)(LODWORD(RulesClass_Instance->AttackInterval)
    + 4 * *(uint32_t *)(this->MissionTimer_StartTime + 844))
    + 3576));
    v101 = (uint8_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v100 + 140))(
    v100,
    *(uint32_t *)&this->_pad_D8[172]);
    Location_X = *v93;
    Location_Y = this->Location_Y;
    v102 = *(uint32_t *)v101;
    Location_Z = this->Location_Z;
    LOBYTE(IsAlive) = (*(int (__thiscall **)(uint8_t *, int *, int))(v102 + 216))(v101, &Location_X, 96);
    if ( !(uint8_t)IsAlive )
    --this->CurrentMission;
    return IsAlive;
    v103 = (uint32_t *)(*(int (__thiscall **)(BuildingClass_Full *, int *))(*(uint32_t *)this->_pad_base + 72))(
    this,
    &Location_X);
    LOWORD(v116) = *v103 / 256;
    HIWORD(v116) = v103[1] / 256;
    v118 = v116;
    v104 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v118);
    if ( v104 )
    if ( (v104[80] & 0x100) != 0 )
    v105 = *v93;
    v106 = this->Location_Y;
    v107 = this->Location_Z;
    Location_X = v105;
    Location_Y = v106;
    if ( v107 > *(uint32_t *)((*(int (__thiscall **)(uint32_t *, int *))(*v104 + 72))(v104, &Location_X) + 8) )
    (*(void (__thiscall **)(uint8_t *, uint32_t))(*(uint32_t *)v101 + 292))(v101, 0);
    v108 = *(uint32_t *)v101;
    v101[140] = 1;
    (*(void (__thiscall **)(uint8_t *, int))(v108 + 292))(v101, 1);
    if ( !*(uint8_t *)(*(uint32_t *)&this->_pad_D8[172] + 492) )
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)v101 + 488))(v101, 15, 0);
    v109 = *(uint32_t *)this->_pad_base;
    this->_pad_D8[165] = 1;
    LOBYTE(IsAlive) = (*(bool (__thiscall **)(BuildingClass_Full *))(v109 + 248))(this);
    return IsAlive;
    this->_pad_D8[165] = 1;
    LABEL_187:
    LOBYTE(IsAlive) = (*(bool (__thiscall **)(BuildingClass_Full *))(*(uint32_t *)this->_pad_base + 248))(this);
    return IsAlive;
}

int  TechnoClass::IndexOf(uint32_t *this, int a2)
{
    int v2; // ecx
    int result; // eax
    int v4; // edx
    v2 = *(this + 1);
    result = 0;
    if ( !v2 )
    return 0;
    while ( 1 )
    ++result;
    if ( v2 == a2 )
    break;
    v4 = *(uint32_t *)(v2 + 48);
    if ( v4 )
    if ( (*(uint8_t *)(v4 + 20) & 4) == 0 )
    return 0;
    v2 = *(uint32_t *)(v2 + 48);
    if ( !v2 )
    return 0;
    return result;
}

char  TechnoClass::ApplySplashDamageToNeighbors(int this)
{
    __int16 *v1; // edi
    char result; // al
    int v3; // ecx
    __int16 v4; // ax
    __int16 *v5; // eax
    int *v6; // esi
    int v7; // edx
    int *v8; // esi
    int v9; // edx
    int *v10; // [esp+58h] [ebp-2Ch]
    int *v11; // [esp+58h] [ebp-2Ch]
    int v12; // [esp+5Ch] [ebp-28h]
    int v13; // [esp+60h] [ebp-24h]
    int v15; // [esp+68h] [ebp-1Ch]
    int v16; // [esp+6Ch] [ebp-18h] BYREF
    int v17; // [esp+70h] [ebp-14h] BYREF
    __int16 *v18; // [esp+74h] [ebp-10h] BYREF
    int v19; // [esp+78h] [ebp-Ch] BYREF
    int v20; // [esp+7Ch] [ebp-8h]
    int v21; // [esp+80h] [ebp-4h]
    v1 = (__int16 *)this;
    result = *(uint8_t *)(this + 296);
    if ( result )
    v3 = *(__int16 *)(this + 38) << 8;
    v19 = (v1[18] << 8) + 128;
    v20 = v3 + 128;
    v21 = 0;
    v12 = -2;
    v21 = dword_89E7B4 + Cell::GetGroundHeight(&v19);
    do
    v4 = -2;
    v15 = -2;
    do
    HIWORD(v13) = v4 + v1[19];
    LOWORD(v13) = v12 + v1[18];
    v16 = v13;
    v5 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16);
    v18 = v5;
    if ( v5 != v1 )
    v6 = (int *)*((uint32_t *)v5 + 58);
    if ( v6 )
    do
    v10 = (int *)v6[12];
    if ( v6 && (v6[5] & 4) != 0 )
    if ( !v6[413] )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(uint32_t *)v6[413] + 160))(
    v6[413],
    v19,
    v20,
    v21) )
    v7 = *v6;
    v17 = v6[27];
    (*(void (__thiscall **)(int *, int *, uint32_t, int, uint32_t, int, int, uint32_t))(v7 + 364))(
    v6,
    &v17,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    v6 = v10;
    while ( v10 );
    v5 = v18;
    v1 = (__int16 *)this;
    v8 = (int *)*((uint32_t *)v5 + 57);
    if ( v8 )
    do
    v11 = (int *)v8[12];
    if ( v8 && (v8[5] & 4) != 0 )
    if ( !v8[413] )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(uint32_t *)v8[413] + 160))(
    v8[413],
    v19,
    v20,
    v21) )
    v9 = *v8;
    v18 = (__int16 *)v8[27];
    (*(void (__thiscall **)(int *, __int16 **, uint32_t, int, uint32_t, int, int, uint32_t))(v9 + 364))(
    v8,
    &v18,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    v8 = v11;
    while ( v11 );
    v1 = (__int16 *)this;
    v4 = ++v15;
    while ( v15 < 3 );
    result = ++v12;
    while ( v12 < 3 );
    return result;
}

uint32_t * TechnoClass::GetWeaponType(uint32_t *this, uint32_t *a2)
{
    *a2 = *this;
    return a2;
}

char  TechnoClass::UpdateThunk(uint8_t *this)
{
    int v1; // eax
    if ( !*(uint32_t *)this )
    return 0;
    v1 = *(uint32_t *)this - 1;
    *(this + 4) = 0;
    *(uint32_t *)this = v1;
    if ( (v1 & 1) != 0 )
    *(this + 4) = 1;
    return 1;
}

int  TechnoClass::SetPositionAnimated(#374 *this, uint32_t *a2)
{
    uint32_t *v3; // edx
    int v4; // eax
    int v5; // ecx
    int v6; // edx
    bool v7; // bl
    int result; // eax
    v3 = (uint32_t *)((char *)this + 156);
    v4 = *((uint32_t *)this + 39);
    v5 = *((uint32_t *)this + 40);
    v6 = v3[2];
    v7 = *a2 != v4 || a2[1] != v5 || a2[2] != v6;
    if ( *((uint8_t *)this + 116) )
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    ObjectClass::SetPosition(this);
    result = (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 1);
    else
    result = ObjectClass::SetPosition(this);
    if ( v7 )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint8_t *)(result + 1508) )
    return FootClass::UpdatePassengerCoords((int *)this);
    return result;
}

// 0x004DED70
int  TechnoClass::GetThreatValue(#375 **this)
{
    uint32_t *v2; // eax
    _WORD *v3; // edi
    int v5; // [esp+8h] [ebp-14h]
    int v6; // [esp+Ch] [ebp-10h] BYREF
    uint8_t v7[12]; // [esp+10h] [ebp-Ch] BYREF
    v2 = (uint32_t *)(*((int (__thiscall **)(void*375 **, uint8_t *))*this + 18))(this, v7);
    LOWORD(v5) = *v2 / 256;
    HIWORD(v5) = v2[1] / 256;
    v6 = v5;
    v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v6);
    if ( !(unsigned __int8)House::IsAlliedWith(*(this + 135), HouseClass_Player)
    && (*((unsigned __int8 (__thiscall **)(void*375 **))*this + 49))(this)
    && !HouseClass::HasType(v3, *((uint32_t *)HouseClass_Player + 12)) )
    return *(uint32_t *)((*((int (__thiscall **)(void*375 **, uint32_t))*this + 51))(this, 0) + 164);
    if ( (*((unsigned __int8 (__thiscall **)(void*375 **, void*375 *))*this + 272))(this, HouseClass_Player) )
    return ObjectClass::HasC4((void*374 *)this);
    return *(uint32_t *)((*((int (__thiscall **)(void*375 **, int))*this + 51))(this, 1) + 164);
}

// 0x004DF1A0
int  TechnoClass::vt_entry_4A8(int this)
{
    *(uint32_t *)(this + 1476) = -1;
    *(uint32_t *)(this + 1480) = 0;
    *(uint32_t *)(this + 1484) = 0;
    *(uint8_t *)(this + 1489) = 0;
    return 0;
}

// 0x004DF1D0
char  TechnoClass::vt_entry_4B0(uint8_t *this)
{
    return *(this + 1489);
}

// 0x004DF1E0
int  TechnoClass::vt_entry_4B4(uint32_t *this)
{
    return *(this + 369);
}

// 0x004DF1F0
uint32_t * TechnoClass::vt_entry_4B8(uint32_t *this, uint32_t *a2)
{
    int v2; // eax
    uint32_t *v3; // edx
    int v5; // ecx
    uint32_t *v6; // ecx
    uint8_t v7[12]; // [esp+4h] [ebp-Ch] BYREF
    v2 = *(this + 370);
    if ( v2 )
    v3 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v2 + 72))(v2, v7);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    return a2;
    else
    v5 = *(this + 371);
    if ( v5 )
    v6 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v5 + 72))(v5, v7);
    *a2 = *v6;
    a2[1] = v6[1];
    a2[2] = v6[2];
    else
    *a2 = -1;
    a2[1] = -1;
    a2[2] = -1;
    return a2;
}

// 0x004DF320
char  TechnoClass::vt_entry_4C8(uint32_t *this)
{
    int v2; // eax
    int v4; // edx
    v2 = *(this + 370);
    *((uint8_t *)this + 1489) = 0;
    if ( v2 )
    (*(void (__thiscall **)(uint32_t *, int, int))(*this + 488))(this, 2, 1);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1152))(this, *(this + 370), 1);
    return 1;
    else
    v4 = *this;
    if ( *(this + 371) )
    (*(void (__thiscall **)(uint32_t *, int, int))(v4 + 488))(this, 1, 1);
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*this + 968))(this, *(this + 371));
    return 1;
    else
    (*(void (__thiscall **)(uint32_t *))(v4 + 1192))(this);
    return 0;
}

// 0x004DF4B0
char  TechnoClass::vt_entry_4D0(uint8_t *this)
{
    char result; // al
    result = 0;
    if ( *((uint32_t *)this + 369) == 29 )
    if ( *(this + 1489) )
    *(this + 1489) = 0;
    else if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 388))(this) != 5
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 388))(this) != 5 )
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 1192))(this);
    return 0;
    return (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 1224))(this);
    return result;
}

uint32_t * TechnoClass::GetAnimationValue(_WORD *this, uint32_t *a2)
{
    int v2; // ecx
    _WORD *v4; // [esp+0h] [ebp-4h] BYREF
    v4 = this;
    v2 = *ProgressTimer::GetValue(this + 452, &v4);
    *a2 = v2;
    return a2;
}

char  TechnoClass::sub_522A60(uint32_t *this, int a2, int a3)
{
    int v4; // eax
    uint32_t *v5; // esi
    int v6; // eax
    uint32_t *v8; // esi
    uint32_t *v9; // eax
    int v10; // [esp+Ch] [ebp-10h] BYREF
    uint8_t v11[12]; // [esp+10h] [ebp-Ch] BYREF
    int v12; // [esp+20h] [ebp+4h]
    v4 = *(this + 430);
    if ( (*(uint8_t *)(v4 + 3434) || *(uint8_t *)(v4 + 3476))
    && a2 == 4475
    && (v5 = this - 2, Team::AllMembersValid(this - 2)) )
    (*(void (__thiscall **)(uint32_t *, int))(*v5 + 628))(this - 2, 8);
    v6 = *(this + 132);
    if ( !v6 || v6 == *(this + 359) )
    FootClass::ClearPathIndex(this - 2);
    (*(void (__thiscall **)(uint32_t *, int *, int, uint32_t))(*v5 + 372))(this - 2, &dword_A8F200, 1, 0);
    return 1;
    else
    (*(void (__thiscall **)(uint32_t *, int, int))(*v5 + 1152))(this - 2, v6, 1);
    return 1;
    else if ( *(uint8_t *)(*(this + 430) + 3477) && a2 == 4476 )
    v8 = this - 2;
    v9 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*(this - 2) + 72))(this - 2, v11);
    LOWORD(v12) = *v9 / 256;
    HIWORD(v12) = v9[1] / 256;
    v10 = v12;
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 80) & 0x100) != 0 )
    (*(void (__thiscall **)(uint32_t *, int))(*v8 + 460))(this - 2, dword_A8F234);
    else
    (*(void (__thiscall **)(uint32_t *, uint32_t))(*v8 + 460))(this - 2, 0);
    (*(void (__thiscall **)(uint32_t *, int, int, uint32_t))(*v8 + 1368))(this - 2, 36, 1, 0);
    return 1;
    else
    return 0;
}

bool  TechnoClass::CanBePermaMC(void *this)
{
    if ( !this )
    return 0;
    if ( (*(int (__thiscall **)(void *))(*(uint32_t *)this + 44))(this) == 6 )
    return 0;
    if ( *(uint8_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 3381) )
    return 0;
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(uint32_t *)this + 352))(this) )
    return 0;
    if ( *(uint8_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 3434) )
    return 0;
    return (*(unsigned __int8 (__thiscall **)(void *))(*(uint32_t *)this + 84))(this) == 0;
}

int TechnoClass::_vt132()
{
    return 450;
}

int TechnoClass::_vt135()
{
    return 450;
}

int TechnoClass::_vt136()
{
    return 450;
}

int  TechnoClass::CreateDestructionEffect(#374 *this)
{
    int v2; // ebp
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int v7; // edx
    double v8; // st7
    int v9; // eax
    void **v10; // eax
    int v11; // eax
    int v12; // edx
    int v13; // ebp
    void **v14; // ecx
    void **v15; // ecx
    void **v16; // ecx
    void **v17; // ecx
    void **v18; // ecx
    void **v19; // ecx
    void **v20; // ecx
    int v21; // ecx
    void **v22; // ecx
    void **v23; // ecx
    int v24; // [esp+10h] [ebp-14h]
    int v25; // [esp+14h] [ebp-10h]
    int v26[3]; // [esp+18h] [ebp-Ch] BYREF
    int *v27; // [esp+28h] [ebp+4h]
    int v28; // [esp+2Ch] [ebp+8h]
    int v29; // [esp+30h] [ebp+Ch]
    int v30; // [esp+34h] [ebp+10h]
    char v31; // [esp+38h] [ebp+14h]
    int v32; // [esp+38h] [ebp+14h]
    int v33; // [esp+40h] [ebp+1Ch]
    v24 = 0;
    v25 = *((uint32_t *)this + 27);
    if ( v25 <= 0 || !*v27 || !v31 && *(uint8_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 563) )
    return v24;
    v2 = *(uint32_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 160);
    if ( !v31 )
    v3 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    *v27 = ComputeTechnoClassDamageFalloff(*v27, v29, *(uint32_t *)(v3 + 156), v28);
    if ( this
    && (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) == 6
    && !*(uint8_t *)(*((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) == 6
    ? (uint32_t *)((char *)this + 1312)
    : (uint32_t *)1312)
    + 5495) )
    v4 = *v27;
    if ( *v27 < 1 )
    v4 = 1;
    *v27 = v4;
    v5 = *v27;
    if ( !*v27 )
    return 0;
    if ( *v27 >= 0 )
    v24 = 1;
    if ( v25 <= v5 )
    *v27 = v25;
    else if ( v25 >= v2 >> 1 && v25 - v5 < v2 >> 1 )
    v24 = 2;
    v8 = (double)v2 * *(double *)&RulesClass_Instance[1].ChronoSparkle1;
    if ( (double)v25 > v8 && (double)(v25 - *v27) < v8 )
    v24 = 3;
    v9 = v25 - *v27;
    *((uint32_t *)this + 27) = v9;
    if ( v9 > 0
    || (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) != 15
    || v31
    || !*(uint8_t *)(*((uint32_t *)this + 432) + 3756)
    || *((uint8_t *)this + 1755) )
    v13 = v24;
    else
    v10 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v10 )
    v26[0] = *((uint32_t *)this + 39);
    v26[1] = *((uint32_t *)this + 40);
    v26[2] = *((uint32_t *)this + 41);
    AnimClass::ctor(v10, (void *)RulesClass_Instance->InfantryNuked, v26, 0, 1, (void *)0x600, 0, 0);
    v11 = Math::RoundToInt((double)*(int *)(*((uint32_t *)this + 432) + 160) * 0.25);
    *((uint32_t *)this + 27) = v11;
    if ( v11 <= 1 )
    v11 = 1;
    v12 = *(uint32_t *)this;
    *((uint32_t *)this + 27) = v11;
    *((uint8_t *)this + 1755) = 1;
    (*(void (__thiscall **)(void*374 *, int, int, uint32_t))(v12 + 1368))(this, 6, 1, 0);
    v13 = 3;
    v24 = 3;
    v32 = *((uint32_t *)this + 27);
    if ( v13 == 2 )
    if ( v30 )
    v14 = (void **)*((uint32_t *)this + 13);
    if ( v14 )
    TeamClass::Update_0(v14, 39, (int)this, dword_AC1360, 0, 0);
    if ( !*((uint8_t *)this + 144) )
    return 5;
    v15 = (void **)*((uint32_t *)this + 13);
    if ( v15 )
    TeamClass::Update_0(v15, 42, (int)this, dword_AC1360, 0, 0);
    if ( *((uint8_t *)this + 144) )
    if ( v13 == 3 )
    if ( v30 )
    v16 = (void **)*((uint32_t *)this + 13);
    if ( v16 )
    TeamClass::Update_0(v16, 40, (int)this, dword_AC1360, 0, 0);
    if ( !*((uint8_t *)this + 144) )
    return 5;
    v17 = (void **)*((uint32_t *)this + 13);
    if ( v17 )
    TeamClass::Update_0(v17, 43, (int)this, dword_AC1360, 0, 0);
    if ( *((uint8_t *)this + 144) )
    if ( *((uint32_t *)this + 27) != v25
    && (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this)
    && v25 == *(uint32_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 160) )
    if ( v30 )
    v18 = (void **)*((uint32_t *)this + 13);
    if ( v18 )
    TeamClass::Update_0(v18, 38, (int)this, dword_AC1360, 0, 0);
    v19 = (void **)*((uint32_t *)this + 13);
    if ( v19 && *((uint8_t *)this + 144) )
    TeamClass::Update_0(v19, 41, (int)this, dword_AC1360, 0, 0);
    v20 = (void **)*((uint32_t *)this + 13);
    if ( v20 )
    if ( !*((uint8_t *)this + 144) )
    return 5;
    if ( v30 )
    TeamClass::Update_0(v20, 41, (int)this, dword_AC1360, 0, v30);
    if ( *((uint8_t *)this + 144) && (v32 <= 0 || *((int *)this + 27) > 0) )
    v21 = 0;
    if ( !*((uint32_t *)this + 27) )
    if ( v30 )
    v21 = *(uint32_t *)(v30 + 540);
    if ( !v33 || v30 && v33 == v21 )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 224))(this, v30);
    else
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 228))(this, v33);
    v13 = 4;
    v24 = 4;
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 220))(this, 1);
    if ( *((uint8_t *)this + 144) )
    if ( v30 )
    v22 = (void **)*((uint32_t *)this + 13);
    if ( v22 )
    if ( v13 != 4 )
    TeamClass::Update_0(v22, 6, (int)this, dword_AC1360, 0, v30);
    if ( *((uint8_t *)this + 144) )
    if ( v30 )
    v23 = (void **)*((uint32_t *)this + 13);
    if ( v23 )
    if ( v13 != 4 )
    TeamClass::Update_0(v23, 44, (int)this, dword_AC1360, 0, v30);
    if ( *((uint8_t *)this + 144) && *((uint8_t *)this + 131) )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 2);
    return v24;
    return 5;
    v7 = *((uint32_t *)this + 27);
    *((uint32_t *)this + 27) = v7 - v5;
    if ( v7 - v5 > v2 )
    *((uint32_t *)this + 27) = v2;
    if ( v7 != *((uint32_t *)this + 27) )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 328))(this, 7);
    return 0;
}

// 0x006F3280
int  TechnoClass::IsNotAircraftOrBuilding(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this);
    LOBYTE(result) = result
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this), result != 6)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this), result != 16)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this), !*(uint8_t *)(result + 3220));
    return result;
}

// 0x006F32D0
int  TechnoClass::CanInitiateSell(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 27);
    if ( result > 0
    && !*((uint8_t *)this + 129)
    && *((uint8_t *)this + 981)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this), result != 6)
    && *((uint8_t *)this + 1051)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this), *(uint8_t *)(result + 560)) )
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    LOBYTE(result) = (uint8_t)result != 0;
    else
    LOBYTE(result) = 0;
    return result;
}

int  TechnoClass::SelectWeapon(#377 *this)
{
    uint32_t *v2; // eax
    int result; // eax
    int v4; // edi
    int v5; // ebx
    uint8_t *v6; // ebp
    int v7; // esi
    int v8; // eax
    int v9; // eax
    bool v10; // bl
    uint32_t *v11; // [esp+1Ch] [ebp+4h]
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( HouseClass::HasPower(v2) && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    return *((uint32_t *)this + 78) != -1 ? *((uint32_t *)this + 78) : 0;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this) )
    return 0;
    v4 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, 1);
    if ( !v4 )
    return 0;
    v5 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
    if ( !v5 || *(uint8_t *)(v4 + 310) || !v11 )
    return 0;
    if ( *((uint8_t *)this + 130) && *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3408) != -1 )
    return *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3408);
    v6 = (v11[5] & 1) != 0 ? (uint8_t *)v11 : 0;
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    if ( *(uint8_t *)(*(uint32_t *)(v4 + 172) + 364) )
    if ( (*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11) == 6
    && *(uint8_t *)(*((*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (uint32_t *)1312) + 5495) )
    v8 = (*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11);
    if ( *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
    v9 = (*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11);
    return !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
    return 1;
    else
    if ( *(uint8_t *)(*(uint32_t *)(v5 + 172) + 347)
    && v6
    && (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 44))(v6) == 6 )
    return 1;
    if ( *(uint8_t *)(v4 + 322)
    && v6
    && *(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 132))(v6) + 1519)
    && !*((uint32_t *)this + 115)
    && !Object::IsAlliedWithObjectHouse(*((uint32_t **)this + 135), (int)v6) )
    return 1;
    if ( *(uint8_t *)(v4 + 336) && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) == 16 )
    return 1;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 && *((uint8_t *)this + 1633) )
    return 1;
    if ( (*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11) == 6
    && Object::IsAlliedWithObjectSimpleHouse(*((uint32_t **)this + 135), v11)
    && *(uint8_t *)(*(uint32_t *)(v4 + 172) + 344)
    && *(uint8_t *)(v11[328] + 5493) )
    return 1;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 2 && *((uint8_t *)this + 1738) )
    return 1;
    if ( (*(int (__thiscall **)(uint32_t *))(*v11 + 44))(v11) == 11
    && (v11[59] != 2 && (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v11 + 80))(v11)
    || (v11[80] & 0x100) != 0 && *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3278))
    && !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*v11 + 84))(v11)
    && *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1540) == 2 )
    return 1;
    if ( v6
    && *(double *)(*(uint32_t *)(v4 + 172)
    + 8 * *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 132))(v6) + 156)
    + 160) != 0.0 )
    if ( *(double *)(*(uint32_t *)(v5 + 172)
    + 8 * *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 132))(v6) + 156)
    + 160) == 0.0 )
    return 1;
    v10 = *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 444))(v6) + 236) == 2
    || *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 444))(v6) + 236) == 6;
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 84))(v6) )
    v10 = 0;
    if ( !v6[140] && v10 )
    result = (*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 744))(this, v11);
    if ( result != -1 )
    return result;
    return 0;
    if ( !(*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 84))(v6)
    && *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1540) == 2 )
    return 1;
    if ( *(uint8_t *)(*(uint32_t *)(v4 + 160) + 676)
    && (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 84))(v6) )
    return 1;
    return 0;
    v7 = *((uint32_t *)this + 80);
    if ( *(uint8_t *)(*(uint32_t *)(v4 + 160) + 676)
    && v6
    && (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)v6 + 84))(v6) )
    return 2 * v7 + 1;
    else
    return 2 * v7;
}

// 0x006F3820
int  TechnoClass::CanTargetHouse(#377 *this)
{
    uint32_t *v1; // esi
    int result; // eax
    char v4; // bl
    char v5; // [esp+Eh] [ebp-2h]
    bool v6; // [esp+Fh] [ebp-1h]
    uint8_t *v7; // [esp+14h] [ebp+4h]
    char v8; // [esp+14h] [ebp+4h]
    v1 = v7;
    if ( !v7 || (v7[20] & 1) == 0 )
    return -1;
    v4 = *(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v7 + 132))(v7) + 3433);
    v8 = *(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v7 + 132))(v7) + 3479);
    v6 = *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*v1 + 132))(v1) + 1660) == 3;
    v5 = *(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*v1 + 132))(v1) + 1684);
    switch ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1536) )
    case 0:
    if ( !v4 || !v1[136] )
    goto LABEL_16;
    return -1;
    case 1:
    return v4 != 0;
    case 2:
    return (v4 != 0) - 1;
    case 3:
    if ( !v8 && !v5 )
    goto LABEL_16;
    result = 1;
    break;
    case 4:
    if ( v6 || v8 )
    goto LABEL_16;
    result = 1;
    break;
    case 6:
    return -1;
    default:
    LABEL_16:
    result = 0;
    break;
    return result;
}

int  TechnoClass::DTOR(int this)
{
    uint32_t *v2; // ecx
    int v3; // ecx
    int v4; // ecx
    uint32_t *v5; // ecx
    int v6; // ecx
    int v7; // ecx
    uint32_t *v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // ecx
    void *v13; // eax
    void *v14; // eax
    void *v15; // eax
    int v17; // [esp+18h] [ebp-4h] BYREF
    v2 = *(uint32_t **)(this + 1300);
    *(uint32_t *)this = &TechnoClass::`vftable';
    *(uint32_t *)(this + 4) = &TechnoClass::`vftable';
    *(uint32_t *)(this + 8) = &TechnoClass::`vftable';
    *(uint32_t *)(this + 12) = &off_7F4934;
    if ( v2 )
    Sidebar::CancelSidebarProductionQueue(v2);
    *(uint32_t *)(this + 1300) = 0;
    v3 = *(uint32_t *)(this + 700);
    if ( v3 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v3 + 32))(v3, 1);
    *(uint32_t *)(this + 700) = 0;
    v4 = *(uint32_t *)(this + 720);
    if ( v4 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v4 + 32))(v4, 1);
    *(uint32_t *)(this + 720) = 0;
    v5 = *(uint32_t **)(this + 728);
    if ( v5 )
    TechnoClass::MutateAll(v5, 0, 0);
    v6 = *(uint32_t *)(this + 728);
    if ( v6 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v6 + 32))(v6, 1);
    *(uint32_t *)(this + 728) = 0;
    v7 = *(uint32_t *)(this + 628);
    if ( v7 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v7 + 32))(v7, 1);
    *(uint32_t *)(this + 628) = 0;
    v8 = *(uint32_t **)(this + 660);
    if ( v8 && v8[19] == this )
    (*(void (__thiscall **)(uint32_t *, int))(*v8 + 32))(v8, 1);
    *(uint32_t *)(this + 660) = 0;
    AudioFile::Stop((uint32_t *)(this + 1160));
    AudioFileClass::Release((uint32_t *)(this + 1160));
    AudioFile::Stop((uint32_t *)(this + 1188));
    AudioFileClass::Release((uint32_t *)(this + 1188));
    AudioFile::Stop((uint32_t *)(this + 1216));
    AudioFileClass::Release((uint32_t *)(this + 1216));
    AudioFileClass::Release((uint32_t *)(this + 1244));
    *(uint32_t *)(this + 540) = 0;
    *(uint8_t *)(this + 1050) = 0;
    v17 = this;
    v9 = ((int (__thiscall *)(TechnoClass **, int *))TechnoClass_Array->parent_gap[4])(&TechnoClass_Array, &v17);
    if ( v9 != -1 )
    FactoryClass::RemoveItem(&TechnoClass_Array, v9);
    v17 = this;
    v10 = (*(int (__thiscall **)(int *, int *))(dword_B0F6C8 + 16))(&dword_B0F6C8, &v17);
    if ( v10 != -1 )
    DynamicVector::Remove(&dword_B0F6C8, v10);
    v11 = *(uint32_t *)(this + 300);
    if ( v11 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v11 + 248))(v11);
    *(uint32_t *)(this + 300) = 0;
    v12 = *(uint32_t *)(this + 304);
    if ( v12 )
    (*(void (__thiscall **)(int))(*(uint32_t *)v12 + 248))(v12);
    *(uint32_t *)(this + 304) = 0;
    *(uint32_t *)(this + 1136) = &VectorClass<AbstractClass *>::`vftable';
    AbstractClassVector::ddtor(this + 1136);
    v13 = *(void **)(this + 1116);
    *(uint32_t *)(this + 1112) = &VectorClass<AbstractClass *>::`vftable';
    if ( v13 && *(uint8_t *)(this + 1125) )
    __3_YAXPAX_Z(v13);
    *(uint32_t *)(this + 1116) = 0;
    *(uint8_t *)(this + 1125) = 0;
    *(uint32_t *)(this + 1120) = 0;
    v14 = *(void **)(this + 1092);
    *(uint32_t *)(this + 1088) = &VectorClass<int>::`vftable';
    if ( v14 && *(uint8_t *)(this + 1101) )
    __3_YAXPAX_Z(v14);
    *(uint32_t *)(this + 1092) = 0;
    *(uint8_t *)(this + 1101) = 0;
    *(uint32_t *)(this + 1096) = 0;
    nullsub_69(this + 336);
    *(uint32_t *)this = &RadioClass::`vftable';
    *(uint32_t *)(this + 4) = &RadioClass::`vftable';
    *(uint32_t *)(this + 8) = &RadioClass::`vftable';
    *(uint32_t *)(this + 12) = &RadioClass::`vftable';
    v15 = *(void **)(this + 228);
    *(uint32_t *)(this + 224) = &VectorClass<TechnoClass *>::`vftable';
    if ( v15 && *(uint8_t *)(this + 237) )
    __3_YAXPAX_Z(v15);
    *(uint32_t *)(this + 228) = 0;
    *(uint8_t *)(this + 237) = 0;
    *(uint32_t *)(this + 232) = 0;
    *(uint32_t *)this = &MissionClass::`vftable';
    *(uint32_t *)(this + 4) = &MissionClass::`vftable';
    *(uint32_t *)(this + 8) = &MissionClass::`vftable';
    *(uint32_t *)(this + 12) = &MissionClass::`vftable';
    return ObjectClass::Dtor((uint32_t *)this);
}

char  TechnoClass::SetHouseFlag(#374 *this, #375 *a2)
{
    int v4; // eax
    void **v5; // ecx
    if ( a2 == HouseClass_Player )
    if ( *((uint8_t *)this + 1051) )
    return 0;
    else
    if ( *((uint8_t *)this + 1052) )
    return 0;
    *((uint8_t *)this + 1052) = 1;
    if ( !(unsigned __int8)AbstractClass::IsNotNull(this) )
    return 0;
    if ( !(unsigned __int8)House::IsCurrentPlayer(a2)
    && (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 388))(this) == 14 )
    (*(void (__thiscall **)(void*374 *, int, uint32_t))(*(uint32_t *)this + 488))(this, 15, 0);
    if ( a2 != HouseClass_Player )
    *((uint8_t *)this + 1052) = 1;
    return 1;
    v4 = *((uint32_t *)this + 135);
    *((uint8_t *)this + 1051) = 1;
    *(uint8_t *)(v4 + 22392) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    if ( *((uint8_t *)this + 1050) )
    return 1;
    if ( !IKnowWhatImDoing )
    v5 = (void **)*((uint32_t *)this + 13);
    if ( v5 )
    TeamClass::Update_0(v5, 4, (int)this, g_TechnoHouseState, 0, 0);
    *(uint8_t *)(*((uint32_t *)this + 135) + 500) = 1;
    return 1;
}

// 0x006F4A40
int  TechnoClass::CheckPlayerOwned(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 1051);
    if ( (uint8_t)result )
    result = House::IsCurrentPlayer(*((void*375 **)this + 135));
    if ( !(uint8_t)result )
    *((uint8_t *)this + 1051) = 0;
    return result;
}

// 0x006F4EB0
int  TechnoClass::PushNearbyUnits(#377 *this)
{
    uint32_t *v2; // eax
    _WORD *v3; // edi
    int result; // eax
    int i; // ebx
    int v6; // edi
    uint32_t *v7; // eax
    _WORD *v8; // eax
    int v9; // eax
    int j; // edi
    int v11; // [esp-8h] [ebp-3Ch]
    int v12; // [esp+8h] [ebp-2Ch]
    int v13; // [esp+Ch] [ebp-28h] BYREF
    uint32_t v14[3]; // [esp+10h] [ebp-24h] BYREF
    void **v15; // [esp+1Ch] [ebp-18h] BYREF
    void *Block; // [esp+20h] [ebp-14h]
    int v17; // [esp+24h] [ebp-10h]
    int v18; // [esp+28h] [ebp-Ch]
    int v19; // [esp+2Ch] [ebp-8h]
    int v20; // [esp+30h] [ebp-4h]
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 72))(this, v14);
    LOWORD(v12) = *v2 / 256;
    HIWORD(v12) = v2[1] / 256;
    v13 = v12;
    v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    if ( *((uint32_t *)this + 136) == 2
    && HouseClass_Player
    && *((void*375 **)this + 135) != HouseClass_Player
    && !Cell::IsPassableOffset(v3, *((uint32_t *)HouseClass_Player + 12)) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 336))(this);
    result = Cell::HasOccupierBit(v3, *(uint32_t *)(*((uint32_t *)this + 135) + 48));
    if ( (uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 672))(this);
    if ( (uint8_t)result )
    EventClass::resetEvent(&v15, 0, 0);
    v15 = &DynamicVectorClass<TechnoClass *>::`vftable';
    v20 = 10;
    v19 = 0;
    for ( i = g_SidebarState - 1; i >= 0; --i )
    v6 = *((uint32_t *)g_TechnoClass_Count + i);
    if ( *(void*377 **)(v6 + 692) == this )
    v11 = *(uint32_t *)(*(uint32_t *)(v6 + 540) + 48);
    v7 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 72))(this, v14);
    v8 = Coord::To_Cell(&MapClass_Instance, v7);
    if ( (Cell::IsPassableOffset(v8, v11) || *(uint32_t *)(v6 + 540) == *((uint32_t *)this + 135))
    && (v19 < v17
    || (BYTE1(v18) || !v17)
    && v20 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v15[2])(&v15, v20 + v17, 0)) )
    v9 = v19++;
    *((uint32_t *)Block + v9) = v6;
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1120))(this, 0);
    for ( j = v19 - 1; j >= 0; --j )
    (*(void (__thiscall **)(uint32_t, void*377 *))(**((uint32_t **)Block + j) + 968))(*((uint32_t *)Block + j), this);
    result = (int)Block;
    v15 = &VectorClass<TechnoClass *>::`vftable';
    if ( Block )
    if ( BYTE1(v18) )
    __3_YAXPAX_Z(Block);
    return result;
}

int  TechnoClass::DrawHealthBar(#377 *this)
{
    int result; // eax
    void*377 *v2; // ebp
    __int16 *v3; // eax
    uint32_t *v4; // eax
    uint32_t *v5; // eax
    Iostream_init *CurrentFrame; // eax
    __int16 *v7; // eax
    uint32_t *v8; // eax
    uint32_t *v9; // eax
    int v10; // ecx
    int *v11; // esi
    int v12; // eax
    int *v13; // eax
    int v14; // ebx
    int v15; // kr04_4
    int v16; // esi
    int v17; // edi
    int *v18; // eax
    int v19; // edx
    int v20; // eax
    int *v21; // eax
    int *v22; // eax
    int *v23; // eax
    int *v24; // eax
    int *v25; // eax
    int v26; // ebp
    int *v27; // eax
    int *v28; // eax
    int *v29; // eax
    int *v30; // eax
    uint32_t *v31; // eax
    uint32_t *v32; // eax
    uint32_t *v33; // eax
    int *v34; // eax
    struct IPersistStreamVtbl *v35; // edx
    int *v36; // eax
    int *v37; // eax
    uint32_t *v38; // eax
    uint32_t *v39; // eax
    uint32_t *v40; // eax
    int *v41; // eax
    int v42; // eax
    bool v43; // cc
    struct IPersistStreamVtbl *v44; // eax
    int *v45; // eax
    int *v46; // eax
    uint32_t *v47; // eax
    uint32_t *v48; // eax
    uint32_t *v49; // eax
    int *v50; // eax
    struct IPersistStreamVtbl *v51; // edx
    int *v52; // eax
    int *v53; // eax
    uint32_t *v54; // eax
    uint32_t *v55; // eax
    uint32_t *v56; // eax
    int *v57; // eax
    struct IPersistStreamVtbl *lpVtbl; // edx
    int *v59; // eax
    int *v60; // eax
    uint32_t *v61; // eax
    uint32_t *v62; // eax
    uint32_t *v63; // eax
    int *v64; // eax
    struct IPersistStreamVtbl *v65; // edx
    int v66; // edi
    int *v67; // eax
    int *v68; // eax
    uint32_t *v69; // eax
    uint32_t *v70; // eax
    uint32_t *v71; // eax
    int *v72; // eax
    struct IPersistStreamVtbl *v73; // edx
    int *v74; // eax
    int *v75; // eax
    int *v76; // edi
    char v77; // al
    int v78; // edx
    int v79; // [esp+50h] [ebp-98h]
    int v80; // [esp+54h] [ebp-94h]
    int v81; // [esp+60h] [ebp-88h]
    int v82; // [esp+60h] [ebp-88h]
    int v83; // [esp+64h] [ebp-84h] BYREF
    int v84; // [esp+68h] [ebp-80h]
    int v85; // [esp+6Ch] [ebp-7Ch]
    int v86; // [esp+70h] [ebp-78h] BYREF
    int v87; // [esp+74h] [ebp-74h]
    int v88; // [esp+78h] [ebp-70h] BYREF
    int v89; // [esp+7Ch] [ebp-6Ch] BYREF
    int v90; // [esp+80h] [ebp-68h]
    int v91; // [esp+84h] [ebp-64h] BYREF
    int v92; // [esp+88h] [ebp-60h] BYREF
    int v93; // [esp+8Ch] [ebp-5Ch]
    int v94; // [esp+90h] [ebp-58h] BYREF
    int v95; // [esp+94h] [ebp-54h] BYREF
    int v96; // [esp+98h] [ebp-50h]
    int v97; // [esp+9Ch] [ebp-4Ch] BYREF
    int v98; // [esp+A0h] [ebp-48h] BYREF
    int v99; // [esp+A4h] [ebp-44h]
    int v100; // [esp+A8h] [ebp-40h] BYREF
    int v101; // [esp+ACh] [ebp-3Ch] BYREF
    int v102; // [esp+B0h] [ebp-38h]
    int v103; // [esp+B4h] [ebp-34h] BYREF
    int v104; // [esp+B8h] [ebp-30h] BYREF
    int v105; // [esp+BCh] [ebp-2Ch]
    int v106; // [esp+C0h] [ebp-28h] BYREF
    uint32_t v107[2]; // [esp+C4h] [ebp-24h] BYREF
    int v108; // [esp+CCh] [ebp-1Ch] BYREF
    uint32_t v109[2]; // [esp+D0h] [ebp-18h] BYREF
    int v110; // [esp+D8h] [ebp-10h] BYREF
    uint32_t v111[2]; // [esp+DCh] [ebp-Ch] BYREF
    void*377 *v112; // [esp+E4h] [ebp-4h] BYREF
    void*377 *retaddr; // [esp+E8h] [ebp+0h]
    int *v114; // [esp+ECh] [ebp+4h]
    int *v115; // [esp+F0h] [ebp+8h]
    int *v116; // [esp+F4h] [ebp+Ch]
    v2 = this;
    LOBYTE(result) = *((uint8_t *)this + 973);
    v112 = this;
    if ( !(uint8_t)result )
    if ( *((uint8_t *)this + 104) )
    if ( *((uint32_t *)this + 14) )
    v3 = (__int16 *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 440))(this, &v91);
    v4 = CellCoord::To_CellObj(&MapClass_Instance, v3);
    if ( !CellClass::QuickPassable(v4) )
    v5 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)v2 + 172))(v2, &v97);
    Coord::To_Screen(TacticalClass_Instance, v5, &v91);
    CurrentFrame = BombClass::GetCurrentFrame(*((uint32_t **)v2 + 14));
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_MOUSE_PAL,
    RulesClass_Instance->WaterCrate[5],
    (unsigned int)CurrentFrame,
    &v91,
    &DSurface_ViewBounds,
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
    if ( v2
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 44))(v2) == 6
    && *((*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 44))(v2) == 6 ? (char *)v2 + 1768 : (uint8_t *)1768)
    && (v7 = (__int16 *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)v2 + 440))(v2, &v91),
    v8 = CellCoord::To_CellObj(&MapClass_Instance, v7),
    !CellClass::QuickPassable(v8)) )
    v9 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)v2 + 172))(v2, &v97);
    Coord::To_Screen(TacticalClass_Instance, v9, &v91);
    v10 = (int)Rules::GetProductionTimeMult((int *)g_GameModeOptions, 14) / 4;
    if ( v10 < 2 )
    v10 = 2;
    v11 = v115;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_MOUSE_PAL,
    FileSystem_WRENCH_SHP,
    6 * ((int)::CurrentFrame % v10) / (v10 - 1),
    &v91,
    v115,
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
    else
    v11 = v115;
    result = (*(int (__thiscall **)(void*377 *, void*375 *))(*(uint32_t *)v2 + 200))(v2, HouseClass_Player);
    if ( !(uint8_t)result )
    result = (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)v2 + 104))(v2, 0, 0);
    if ( result != 5 )
    result = (*(int (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)v2 + 1108))(v2, v114, v11);
    if ( *((uint8_t *)v2 + 131) )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 44))(v2) == 6 )
    v81 = 15;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 456))(v2) < -4 )
    v81 = 12;
    v12 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 132))(v2);
    v13 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v12 + 124))(v12, &v98);
    v14 = v13[2];
    v15 = *v13;
    v16 = *v13 / 2;
    v17 = v13[1] / 2;
    if ( *(uint32_t *)(FileSystem_THEATER_PAL + 4) == 1 )
    v82 = *(unsigned __int8 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + v81);
    else
    v82 = *(unsigned __int16 *)(*(uint32_t *)(FileSystem_THEATER_PAL + 372) + 2 * v81);
    v18 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)v2 + 72))(v2, &v98);
    v83 = *v18;
    v84 = v18[1];
    v19 = v18[2];
    v20 = *(uint32_t *)v2;
    v85 = v19;
    if ( (*(int (__thiscall **)(void*377 *))(v20 + 44))(v2) != 15 )
    v89 = v83 - v16;
    v91 = v85;
    v90 = v17 + v84;
    v21 = Coord::Subtract(&v98, v16 + v83, v17 + v84, v85);
    v86 = *v21;
    v87 = v21[1];
    v88 = v21[2];
    DrawTacticalLine3D(&v86, &v89, v82);
    v92 = -v17;
    v22 = Coord::Subtract(&v98, v16 + v83, v84 - v17, v85);
    v89 = *v22;
    v90 = v22[1];
    v91 = v22[2];
    v23 = Coord::Subtract(&v98, v16 + v83, v17 + v84, v85);
    v86 = *v23;
    v87 = v23[1];
    v88 = v23[2];
    DrawTacticalLine3D(&v86, &v89, v82);
    v24 = Coord::Subtract(&v98, v83 - v16, v17 + v84, v14 + v85);
    v86 = *v24;
    v87 = v24[1];
    v88 = v24[2];
    Coord::Subtract(&v89, -v16, v17, 0);
    v25 = Coord::Subtract(&v98, v83 + v89, v90 + v84, v91 + v85);
    v95 = *v25;
    v96 = v25[1];
    v97 = v25[2];
    DrawTacticalLine3D(&v95, &v86, v82);
    v26 = v92;
    v27 = Coord::Subtract(&v98, v16 + v83, v92 + v84, v14 + v85);
    v95 = *v27;
    v96 = v27[1];
    v97 = v27[2];
    v28 = Coord::Subtract(&v98, v16 + v83, v26 + v84, v85);
    v89 = *v28;
    v90 = v28[1];
    v91 = v28[2];
    DrawTacticalLine3D(&v89, &v95, v82);
    v2 = retaddr;
    if ( *((int *)v2 + 27) > 0
    && ((unsigned __int8)House::IsAlliedWith(*((void*375 **)v2 + 135), HouseClass_Player)
    || BYTE2(RulesClass_Instance[1].RadarEventDurations[2])) )
    (*(void (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)v2 + 1096))(v2, v115, v116);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)v2 + 44))(v2) == 15 )
    Coord::Subtract(&v101, v15 / 2, v17, 0);
    v52 = Coord::Subtract(&v104, v83 + v101, v102 + v84, v103 + v85);
    v98 = *v52;
    v99 = v52[1];
    v100 = v52[2];
    v92 = v15 / -2;
    Coord::Subtract(&v95, v15 / -2, v17, 0);
    v53 = Coord::Subtract(&v104, v83 + v95, v96 + v84, v97 + v85);
    v86 = *v53;
    v87 = v53[1];
    v88 = v53[2];
    v54 = Coord3D::Add(&v86, v107, &v86);
    v55 = Coord3D::Add(v54, v111, &v86);
    v56 = Coord3D::Add(v55, v109, &v98);
    v57 = Coord::Divide(v56, &v104, 4);
    v89 = *v57;
    v90 = v57[1];
    v91 = v57[2];
    lpVtbl = TacticalClass_Instance->lpVtbl;
    if ( v88 <= v91 )
    ((void (__stdcall *)(int *, int *, int, uint32_t, int, int))lpVtbl[3].QueryInterface)(
    &v89,
    &v86,
    v82,
    0,
    v79,
    v80);
    else
    ((void (__stdcall *)(int *, int *, int, uint32_t, int, int))lpVtbl[3].QueryInterface)(
    &v86,
    &v89,
    v82,
    0,
    v79,
    v80);
    Coord::Subtract(&v100, v94, v17, v14);
    v59 = Coord::Subtract(&v108, v85 + v100, v101 + v86, v102 + v87);
    v97 = *v59;
    v98 = v59[1];
    v99 = v59[2];
    Coord::Subtract(&v103, v94, v17, 0);
    v60 = Coord::Subtract(&v108, v85 + v103, v104 + v86, v105 + v87);
    v88 = *v60;
    v89 = v60[1];
    v90 = v60[2];
    v61 = Coord3D::Add(&v88, &v112, &v88);
    v62 = Coord3D::Add(v61, &v110, &v88);
    v63 = Coord3D::Add(v62, &v106, &v97);
    v64 = Coord::Divide(v63, &v108, 4);
    v91 = *v64;
    v92 = v64[1];
    v93 = v64[2];
    v65 = TacticalClass_Instance->lpVtbl;
    if ( v90 <= v93 )
    ((void (__stdcall *)(int *, int *, int, uint32_t))v65[3].QueryInterface)(&v91, &v88, v84, 0);
    else
    ((void (__stdcall *)(int *, int *, int, uint32_t))v65[3].QueryInterface)(&v88, &v91, v84, 0);
    v66 = -v17;
    Coord::Subtract(&v100, v15 / 2, v66, 0);
    v67 = Coord::Subtract(&v108, v85 + v100, v101 + v86, v102 + v87);
    v97 = *v67;
    v98 = v67[1];
    v99 = v67[2];
    Coord::Subtract(&v103, v15 / 2, v66, v14);
    v68 = Coord::Subtract(&v108, v85 + v103, v104 + v86, v105 + v87);
    v88 = *v68;
    v89 = v68[1];
    v90 = v68[2];
    v69 = Coord3D::Add(&v88, &v112, &v88);
    v70 = Coord3D::Add(v69, &v110, &v88);
    v71 = Coord3D::Add(v70, &v106, &v97);
    v72 = Coord::Divide(v71, &v108, 4);
    v91 = *v72;
    v92 = v72[1];
    v93 = v72[2];
    v80 = 0;
    v73 = TacticalClass_Instance->lpVtbl;
    v79 = v84;
    if ( v90 <= v93 )
    ((void (__stdcall *)(int *, int *))v73[3].QueryInterface)(&v91, &v88);
    else
    ((void (__stdcall *)(int *, int *))v73[3].QueryInterface)(&v88, &v91);
    Coord::Subtract(&v98, v92, v66, v14);
    v74 = Coord::Subtract(v107, v83 + v98, v99 + v84, v100 + v85);
    v101 = *v74;
    v102 = v74[1];
    v103 = v74[2];
    Coord::Subtract(&v89, v15 / 2, v66, v14);
    v75 = Coord3D::Add(&v83, &v104, &v89);
    v95 = *v75;
    v96 = v75[1];
    v97 = v75[2];
    globalHelper_0F6030(&v95, &v101, v82);
    else
    Coord::Subtract(&v95, v15 / 2, v17, v14);
    v29 = Coord::Subtract(&v98, v83 + v95, v96 + v84, v97 + v85);
    v89 = *v29;
    v90 = v29[1];
    v91 = v29[2];
    v30 = Coord::Subtract(&v98, v16 + v83, v17 + v84, v85);
    v92 = *v30;
    v93 = v30[1];
    v94 = v30[2];
    v31 = Coord3D::Add(&v92, v109, &v92);
    v32 = Coord3D::Add(v31, v111, &v92);
    v33 = Coord3D::Add(v32, &v101, &v89);
    v34 = Coord::Divide(v33, &v98, 4);
    v86 = *v34;
    v87 = v34[1];
    v88 = v34[2];
    v35 = TacticalClass_Instance->lpVtbl;
    if ( v94 <= v88 )
    ((void (__stdcall *)(int *, int *, int, uint32_t, int, int))v35[3].QueryInterface)(
    &v86,
    &v92,
    v82,
    0,
    v79,
    v80);
    else
    ((void (__stdcall *)(int *, int *, int, uint32_t, int, int))v35[3].QueryInterface)(
    &v92,
    &v86,
    v82,
    0,
    v79,
    v80);
    Coord::Subtract(&v97, v15 / 2, v17, v14);
    v36 = Coord::Subtract(&v110, v85 + v97, v98 + v86, v99 + v87);
    v103 = *v36;
    v104 = v36[1];
    v105 = v36[2];
    Coord::Subtract(&v91, v15 / 2, -v17, v14);
    v37 = Coord::Subtract(&v110, v85 + v91, v92 + v86, v93 + v87);
    v94 = *v37;
    v95 = v37[1];
    v96 = v37[2];
    v38 = Coord3D::Add(&v94, &v106, &v94);
    v39 = Coord3D::Add(v38, &v100, &v94);
    v40 = Coord3D::Add(v39, &v112, &v103);
    v41 = Coord::Divide(v40, &v110, 4);
    v88 = *v41;
    v89 = v41[1];
    v42 = v41[2];
    v43 = v96 <= v42;
    v90 = v42;
    v44 = TacticalClass_Instance->lpVtbl;
    if ( v43 )
    ((void (__stdcall *)(int *, int *, int, uint32_t))v44[3].QueryInterface)(&v88, &v94, v84, 0);
    else
    ((void (__stdcall *)(int *, int *, int, uint32_t))v44[3].QueryInterface)(&v94, &v88, v84, 0);
    Coord::Subtract(&v103, v15 / 2, v17, v14);
    v45 = Coord::Subtract(&v106, v85 + v103, v104 + v86, v105 + v87);
    v91 = *v45;
    v92 = v45[1];
    v93 = v45[2];
    Coord::Subtract(&v97, v15 / -2, v17, v14);
    v46 = Coord::Subtract(&v106, v85 + v97, v98 + v86, v99 + v87);
    v94 = *v46;
    v95 = v46[1];
    v96 = v46[2];
    v47 = Coord3D::Add(&v94, &v100, &v94);
    v48 = Coord3D::Add(v47, &v112, &v94);
    v49 = Coord3D::Add(v48, &v110, &v91);
    v50 = Coord::Divide(v49, &v106, 4);
    v88 = *v50;
    v89 = v50[1];
    v90 = v50[2];
    v80 = 0;
    v51 = TacticalClass_Instance->lpVtbl;
    v79 = v84;
    if ( v96 <= v90 )
    ((void (__stdcall *)(int *, int *))v51[3].QueryInterface)(&v88, &v94);
    else
    ((void (__stdcall *)(int *, int *))v51[3].QueryInterface)(&v94, &v88);
    v11 = v116;
    v76 = v115;
    result = (*(int (__thiscall **)(void*377 *, int *, int *))(*(uint32_t *)v2 + 1100))(v2, v115, v11);
    else
    v76 = v114;
    LOBYTE(result) = *((uint8_t *)v2 + 1073);
    if ( (uint8_t)result )
    LOBYTE(result) = *((uint8_t *)v2 + 131);
    if ( !(uint8_t)result )
    v77 = (*(int (__thiscall **)(void*377 *, void*375 *, int))(*(uint32_t *)v2 + 200))(v2, HouseClass_Player, v79);
    v78 = *(uint32_t *)v2;
    if ( v77 )
    result = (*(int (__thiscall **)(void*377 *, int, int))(v78 + 208))(v2, 1, v80);
    if ( result )
    result = (*(int (__thiscall **)(void*377 *, int *, int *, int))(*(uint32_t *)v2 + 1100))(v2, v76, v11, 1);
    else
    result = (*(int (__thiscall **)(void*377 *, int *, int *))(v78 + 1100))(v2, v76, v11);
    if ( (void*377 *)dword_B0EB38 == v2 )
    result = dword_B0EB3C;
    if ( dword_B0EB3C > 0 )
    result = Timer::GetRemainingMs(&dword_B0EA70);
    if ( result > 0 )
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    FileSystem_TALKBUBL_SHP,
    dword_B0EB3C - 1,
    v76,
    v11,
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
    return result;
}

// 0x006F7660
int  TechnoClass::IsInRange(#377 *this)
{
    int result; // eax
    uint32_t *v3; // eax
    uint32_t *v4; // eax
    double v5; // st7
    char v6; // fps^1
    double v7; // st7
    bool v8; // c0
    char v9; // c2
    bool v10; // c3
    float v11; // [esp+14h] [ebp-24h]
    __int16 v12; // [esp+18h] [ebp-20h]
    __int16 v13; // [esp+1Ah] [ebp-1Eh]
    __int16 v14; // [esp+20h] [ebp-18h] BYREF
    int v15; // [esp+22h] [ebp-16h]
    uint8_t v16[12]; // [esp+2Ch] [ebp-Ch] BYREF
    int v17; // [esp+3Ch] [ebp+4h]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 992))(this);
    if ( !(uint8_t)result )
    goto LABEL_5;
    result = *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1008))(this) + 172);
    if ( !result )
    goto LABEL_5;
    v11 = *(float *)(result + 292) - *(float *)(result + 296);
    v3 = (uint32_t *)(*(int (__thiscall **)(void*377 *, __int16 *))(*(uint32_t *)this + 72))(this, &v14);
    v12 = *v3 / 256;
    v13 = v3[1] / 256;
    v4 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v17 + 72))(v17, v16);
    v14 = *v4 / 256;
    LOWORD(v15) = v4[1] / 256;
    v5 = Math::Sqrt(
    (double)(__int16)(v12 - v14) * (double)(__int16)(v12 - v14)
    + (double)(__int16)(v13 - v15) * (double)(__int16)(v13 - v15));
    result = (__int16)Math::RoundToInt(v5);
    v7 = (double)(__int16)result;
    v8 = v7 < v11;
    v9 = 0;
    v10 = v7 == v11;
    BYTE1(result) = v6;
    if ( v7 <= v11 )
    LOBYTE(result) = 1;
    else
    LABEL_5:
    LOBYTE(result) = 0;
    return result;
}

// 0x006F7780
int  TechnoClass::CheckCellPassable2(#377 *this)
{
    int v2; // edi
    int v3; // eax
    int v5; // [esp+10h] [ebp+4h]
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 740))(this, v5);
    return (*(int (__thiscall **)(void*377 *, int, int))(v2 + 936))(this, v5, v3);
}

int  TechnoClass::ValidateTarget(#377 *this)
{
    int result; // eax
    int *v2; // ebx
    int *v4; // eax
    int v5; // edx
    int v6; // eax
    int v7; // edi
    uint32_t *v8; // eax
    void *v9; // eax
    int *v10; // eax
    char v11; // cl
    int v12; // eax
    int v13; // [esp+14h] [ebp-24h] BYREF
    int v14; // [esp+18h] [ebp-20h]
    int v15; // [esp+1Ch] [ebp-1Ch]
    uint8_t v16[12]; // [esp+20h] [ebp-18h] BYREF
    uint8_t v17[12]; // [esp+2Ch] [ebp-Ch] BYREF
    int *v18; // [esp+3Ch] [ebp+4h]
    int v19; // [esp+3Ch] [ebp+4h]
    int v20; // [esp+40h] [ebp+8h] BYREF
    v2 = v18;
    if ( v18 )
    v4 = (int *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v16);
    v13 = *v4;
    v14 = v4[1];
    v5 = v4[2];
    v6 = *(uint32_t *)this;
    v15 = v5;
    v7 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(v6 + 1016))(this, v20);
    if ( v7 )
    if ( *(uint8_t *)(v7 + 308) )
    v8 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v16);
    LOWORD(v19) = *v8 / 256;
    HIWORD(v19) = v8[1] / 256;
    v20 = v19;
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20);
    v10 = (int *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)v9 + 72))(v9, v17);
    v13 = *v10;
    v14 = v10[1];
    v11 = *((uint8_t *)this + 140);
    v12 = v10[2];
    v15 = v12;
    if ( v11 )
    v15 = dword_B0EB24 + v12;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 84))(this) )
    v15 = *(uint32_t *)((*(int (__thiscall **)(int *, uint8_t *))(*v2 + 72))(v2, v17) + 8);
    LOBYTE(result) = TechnoClass::CheckTargetLOS(this, &v13, v2, (uint32_t *)v7);
    else
    LOBYTE(result) = 1;
    return result;
}

// 0x006F78D0
int  TechnoClass::CheckAndFireAtTarget(#377 *this)
{
    int v2; // edi
    int *v3; // eax
    int v4; // eax
    int v6; // [esp+Ch] [ebp+4h]
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1000))(this);
    v3 = (int *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v2);
    if ( v3 && (v4 = *v3) != 0 && *(uint8_t *)(v4 + 310) )
    return (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 936))(this, v6, v2);
    else
    return (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 940))(this, v6);
}

int  TechnoClass::CheckCellPassable(#377 *this)
{
    void *v2; // eax
    int v3; // ebx
    void *v4; // edi
    int v5; // eax
    uint32_t *v7; // [esp+10h] [ebp+4h]
    v2 = Coord::To_Cell(&MapClass_Instance, v7);
    v3 = *(uint32_t *)this;
    v4 = v2;
    v5 = (*(int (__thiscall **)(void*377 *, void *))(*(uint32_t *)this + 740))(this, v2);
    return (*(int (__thiscall **)(void*377 *, void *, int))(v3 + 936))(this, v4, v5);
}

int  TechnoClass::CheckCellPassable3(#377 *this)
{
    int v2; // edi
    void *v3; // eax
    uint32_t *v5; // [esp+Ch] [ebp+4h]
    int v6; // [esp+10h] [ebp+8h]
    v2 = *(uint32_t *)this;
    v3 = Coord::To_Cell(&MapClass_Instance, v5);
    return (*(int (__thiscall **)(void*377 *, void *, int))(v2 + 936))(this, v3, v6);
}

void *__fastcall TechnoClass::SelectAutoTarget_Start_AU(#375 **a1, int a2, int a3, int a4, char a5)
{
    void*375 *v6; // eax
    int v8; // ebx
    uint32_t *v9; // eax
    void*375 *v10; // edx
    int v11; // eax
    int v12; // ebx
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    void*375 *v16; // ecx
    int v17; // edi
    int v18; // eax
    uint32_t *v19; // eax
    int v20; // eax
    int v21; // edi
    int v22; // ecx
    void*375 *v23; // edx
    void *v24; // eax
    int j; // ebp
    void*375 *v26; // ecx
    void*375 *v27; // ecx
    int v28; // eax
    void*375 *v29; // eax
    void*375 *v30; // edx
    void*375 *v31; // ecx
    int v32; // eax
    void*375 *v33; // eax
    void*375 *v34; // edx
    int v35; // edi
    int v36; // ebx
    void*375 *v37; // eax
    int v38; // ebp
    int v39; // ecx
    void*375 *v40; // eax
    void*375 *v41; // edx
    void*375 *v42; // ecx
    int v43; // eax
    void*375 *v44; // eax
    void*375 *v45; // edx
    int v46; // eax
    void*375 *v47; // eax
    int v48; // ebp
    int v49; // ecx
    void*375 *v50; // eax
    void*375 *v51; // edx
    void*375 *v52; // ecx
    int v53; // eax
    void*375 *v54; // eax
    void*375 *v55; // edx
    int v56; // eax
    int v57; // ebx
    void*375 *v58; // eax
    int v59; // ebp
    int v60; // ecx
    void*375 *v61; // eax
    void*375 *v62; // edx
    void*375 *v63; // ecx
    int v64; // eax
    void*375 *v65; // eax
    void*375 *v66; // edx
    int v67; // eax
    void*375 *v68; // eax
    int v69; // ebp
    int v70; // ecx
    void*375 *v71; // eax
    void*375 *v72; // edx
    void*375 *v73; // ecx
    int v74; // eax
    void*375 *v75; // eax
    void*375 *v76; // edx
    int v77; // eax
    int v78; // edi
    char v79; // bl
    int i; // ebp
    void*375 *v81; // ecx
    int v82; // edi
    int v83; // eax
    int v84; // ebx
    int v85; // ebp
    void*375 *v86; // ecx
    int v87; // edi
    bool v88; // [esp+5Fh] [ebp-59h]
    int v89; // [esp+60h] [ebp-58h]
    int v90; // [esp+64h] [ebp-54h] BYREF
    int v91; // [esp+68h] [ebp-50h]
    int v92; // [esp+6Ch] [ebp-4Ch]
    int v93; // [esp+70h] [ebp-48h]
    int v94; // [esp+74h] [ebp-44h] BYREF
    int v95; // [esp+78h] [ebp-40h]
    int v96; // [esp+7Ch] [ebp-3Ch]
    int v97; // [esp+80h] [ebp-38h] BYREF
    int v98; // [esp+84h] [ebp-34h]
    int TileIndex; // [esp+88h] [ebp-30h]
    int v100; // [esp+8Ch] [ebp-2Ch]
    int v101; // [esp+90h] [ebp-28h]
    int v102; // [esp+94h] [ebp-24h]
    int v103; // [esp+98h] [ebp-20h]
    int v104; // [esp+9Ch] [ebp-1Ch] BYREF
    __int16 v105; // [esp+A0h] [ebp-18h]
    int v106; // [esp+A4h] [ebp-14h] BYREF
    int v107; // [esp+ACh] [ebp-Ch] BYREF
    v92 = 0;
    ++dword_A8EC34;
    v6 = *a1;
    v91 = -1;
    TileIndex = -1;
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))v6 + 33))(a1) + 3360)
    && (unsigned __int8)House::IsCurrentPlayer(a1[135]) )
    return 0;
    LOWORD(v8) = a3;
    if ( (a3 & 1) == 0
    && (*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) != 6
    && (*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) != 2 )
    v9 = (uint32_t *)(*((int (__thiscall **)(void*375 **))*a1 + 18))(a1);
    LOWORD(TileIndex) = *v9 / 256;
    v10 = *a1;
    HIWORD(TileIndex) = v9[1] / 256;
    v103 = TileIndex;
    v11 = (*((int (__thiscall **)(void*375 **, int))v10 + 33))(a1, 1);
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v104, *(uint32_t *)(v11 + 1460), (char)&v107);
    if ( (*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) == 15 )
    if ( TechnoClass::GetValue(a1, -1) < 0 )
    v8 = a3 & 3 | 0x4008;
    LABEL_16:
    a3 = v8;
    goto LABEL_17;
    if ( *((uint8_t *)a1[432] + 3779) )
    LOWORD(v8) = a3 & 0xFFE7;
    a3 &= 0xFFFFFFE7;
    else if ( (*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) == 1 && TechnoClass::GetValue(a1, -1) < 0 )
    v8 = a3 & 3 | 0x4010;
    goto LABEL_16;
    LABEL_17:
    v89 = 0;
    if ( (v8 & 0x100) != 0 )
    v89 = 32834;
    v12 = v8 & 4;
    if ( v12 )
    v13 = v89;
    LOBYTE(v13) = v89 | 4;
    v89 = v13;
    if ( (a3 & 0x1BA60) != 0 )
    v89 |= 0x40u;
    if ( (a3 & 8) != 0 )
    v14 = v89;
    BYTE1(v14) = BYTE1(v89) | 0x80;
    v89 = v14;
    if ( (a3 & 0x50) != 0 )
    v15 = v89;
    LOBYTE(v15) = v89 | 2;
    v89 = v15;
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    (*((void (__thiscall **)(void*375 **))a1[278] + 3))(a1 + 278);
    (*((void (__thiscall **)(void*375 **))a1[272] + 3))(a1 + 272);
    v16 = a1[71];
    v88 = 0;
    if ( v16 && *(uint8_t *)((*(int (__thiscall **)(void*375 *))(*(uint32_t *)v16 + 132))(v16) + 1508) )
    v88 = *((uint32_t *)a1[71] + 176) != 0;
    if ( (a3 & 3) == 0 )
    v79 = a5;
    if ( (v89 & 4) != 0 )
    for ( i = 0; i < g_AircraftClassCount; ++i )
    v81 = a1[135];
    v82 = *((uint32_t *)dword_A8E394 + i);
    v104 = 0;
    if ( (!Object::IsAlliedWithObjectHouse(v81, v82)
    || *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1728)
    || *((uint8_t *)a1 + 664)
    || v88)
    && (!v79 || *(uint32_t *)(*(uint32_t *)(v82 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(v82 + 540)))
    && TechnoClass::EvaluateTarget((int *)a1, a3, v89, -1, v82, &v104, -1, (int)&g_TechnoClassPool)
    && v104 > v91 )
    v92 = v82;
    v91 = v104;
    if ( (a3 & 0x10) != 0 )
    v83 = v89;
    LOBYTE(v83) = v89 | 4;
    v89 = v83;
    v84 = 0;
    if ( g_SidebarState > 0 )
    v85 = a4;
    do
    v86 = a1[135];
    v87 = *((uint32_t *)g_TechnoClass_Count + v84);
    a4 = 0;
    if ( (!Object::IsAlliedWithObjectHouse(v86, v87)
    || TechnoClass::GetValue(a1, -1) < 0
    || !(unsigned __int8)House::IsCurrentPlayer(a1[135])
    && a1
    && (*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) == 15
    && *((uint8_t *)*((*((int (__thiscall **)(void*375 **))*a1 + 11))(a1) == 15 ? a1 + 432 : (void*375 **)1728) + 3779)
    || *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1728)
    || *((uint8_t *)a1 + 664)
    || v88)
    && *(uint32_t *)(v87 + 148) == 2
    && (!a5 || *(uint32_t *)(*(uint32_t *)(v87 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(v87 + 540)))
    && TechnoClass::EvaluateTarget((int *)a1, a3, v89, -1, v87, &a4, TileIndex, v85)
    && a4 > v91 )
    v92 = v87;
    v91 = a4;
    ++v84;
    while ( v84 < g_SidebarState );
    return (void *)v92;
    v17 = 0;
    v95 = 0;
    if ( (a3 & 1) != 0 )
    v18 = (*((int (__thiscall **)(void*375 **, uint32_t))*a1 + 199))(a1, 0);
    LABEL_39:
    v17 = v18;
    v95 = v18;
    goto LABEL_40;
    if ( (a3 & 2) != 0 )
    if ( a1[43] == (void*375 *)25 )
    v18 = (*((int (__thiscall **)(void*375 **, int))*a1 + 199))(a1, 2);
    else
    v18 = (*((int (__thiscall **)(void*375 **, int))*a1 + 199))(a1, 1);
    goto LABEL_39;
    LABEL_40:
    if ( TechnoClass::GetValue(a1, -1) < 0 && a1[43] == (void*375 *)5 )
    v17 = 512;
    v95 = 512;
    v98 = v17 / 256;
    if ( !v17 )
    v19 = (uint32_t *)(*((int (__thiscall **)(void*375 **))*a1 + 33))(a1);
    if ( !HouseClass::HasPower(v19) || *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 3285) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 3433)
    && *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 3479)
    && *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 3348) )
    v20 = *(uint32_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1464);
    else
    v21 = (*((int (__thiscall **)(void*375 **, int))*a1 + 90))(a1, 1);
    if ( (*((int (__thiscall **)(void*375 **, uint32_t))*a1 + 90))(a1, 0) <= v21 )
    v20 = (*((int (__thiscall **)(void*375 **, int))*a1 + 90))(a1, 1);
    else
    v20 = (*((int (__thiscall **)(void*375 **, uint32_t))*a1 + 90))(a1, 0);
    else
    v20 = (*((int (__thiscall **)(void*375 **, void*375 *))*a1 + 90))(a1, a1[78]);
    v98 = v20 / 256 + *(uint32_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1676) / 256 + 1;
    v22 = a4;
    LOWORD(a4) = *(uint32_t *)a4 / 256;
    v23 = *a1;
    HIWORD(a4) = *(uint32_t *)(v22 + 4) / 256;
    v106 = a4;
    if ( (*((unsigned __int8 (__thiscall **)(void*375 **))v23 + 256))(a1) )
    v98 = (*((int (__thiscall **)(void*375 **))*a1 + 257))(a1) + LODWORD(RulesClass_Instance->GameSpeedBias) + 1;
    if ( v12 )
    v24 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v106);
    AircraftTrackerClass::FillCurrentVector((int)g_CellClassManager, (int)v24, v98);
    for ( j = VectorClass::RemoveObjectById((int)g_CellClassManager);
    j;
    j = VectorClass::RemoveObjectById((int)g_CellClassManager) )
    v26 = a1[135];
    a4 = 0;
    if ( (!Object::IsAlliedWithObjectHouse(v26, j)
    || *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1728)
    || *((uint8_t *)a1 + 664)
    || v88)
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(j + 540)))
    && *(uint8_t *)(j + 116)
    && (*(int (__thiscall **)(int))(*(uint32_t *)j + 120))(j) != 2
    && (!a5 || *(uint32_t *)(*(uint32_t *)(j + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && TechnoClass::EvaluateTarget((int *)a1, a3, v89 | 0x8002, v95, j, &a4, -1, (int)&g_TechnoClassPool) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    v27 = a1[280];
    if ( (int)a1[282] < (int)v27
    || (*((uint8_t *)a1 + 1125) || !v27)
    && (v28 = (int)a1[283], v28 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[278] + 2))(a1 + 278, (int)v27 + v28, 0) )
    v29 = a1[282];
    v30 = a1[279];
    a1[282] = (void*375 *)((char *)v29 + 1);
    *((uint32_t *)v30 + (uint32_t)v29) = j;
    v31 = a1[274];
    if ( (int)a1[276] < (int)v31
    || (*((uint8_t *)a1 + 1101) || !v31)
    && (v32 = (int)a1[277], v32 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[272] + 2))(a1 + 272, (int)v31 + v32, 0) )
    v33 = a1[276];
    v34 = a1[273];
    a1[276] = (void*375 *)((char *)v33 + 1);
    *((uint32_t *)v34 + (uint32_t)v33) = a4;
    if ( a4 > v91 )
    v92 = j;
    v91 = a4;
    if ( (a3 & 0x10) != 0 )
    v89 |= 4u;
    if ( a3 == 5 )
    return (void *)v92;
    v97 = 0;
    v96 = 0;
    v93 = 0;
    if ( v98 <= 0 )
    return (void *)v92;
    while ( 1 )
    v35 = -v93;
    v100 = -v93;
    if ( -v93 <= v93 )
    HIWORD(v107) = -(__int16)v93;
    while ( 1 )
    HIWORD(v101) = HIWORD(v107) + HIWORD(v106);
    LOWORD(v101) = v35 + v106;
    v94 = v101;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v94) )
    v36 = a3;
    if ( SelectTechnoClassAreaTarget(a1, (int)&v94, a3, v89, (__int16 *)&v94, v95, &a4, &v90, TileIndex)
    && a4
    && (!a5 || *(uint32_t *)(*(uint32_t *)(a4 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(a4 + 540))) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    v37 = a1[280];
    v38 = a4;
    if ( (int)a1[282] < (int)v37
    || (*((uint8_t *)a1 + 1125) || !v37)
    && (v39 = (int)a1[283], v39 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[278] + 2))(a1 + 278, (int)v37 + v39, 0) )
    v40 = a1[282];
    v41 = a1[279];
    a1[282] = (void*375 *)((char *)v40 + 1);
    *((uint32_t *)v41 + (uint32_t)v40) = v38;
    v42 = a1[274];
    if ( (int)a1[276] < (int)v42
    || (*((uint8_t *)a1 + 1101) || !v42)
    && (v43 = (int)a1[277], v43 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[272] + 2))(a1 + 272, (int)v42 + v43, 0) )
    v44 = a1[276];
    v45 = a1[273];
    a1[276] = (void*375 *)((char *)v44 + 1);
    *((uint32_t *)v45 + (uint32_t)v44) = v90;
    if ( v91 < v90 )
    v91 = v90;
    v92 = a4;
    if ( !v92 )
    v46 = TechnoClass::EvaluateBuildingTarget(a1, (__int16 *)&v94);
    v90 = v46;
    if ( v96 < v46 )
    v96 = v46;
    v97 = v94;
    LOWORD(v35) = v100;
    else
    v36 = a3;
    HIWORD(v102) = v93 + HIWORD(v106);
    LOWORD(v102) = v35 + v106;
    v94 = v102;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v94) )
    if ( SelectTechnoClassAreaTarget(a1, (int)&v94, v36, v89, (__int16 *)&v94, v95, &a4, &v90, TileIndex)
    && a4
    && (!a5 || *(uint32_t *)(*(uint32_t *)(a4 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((v36 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(a4 + 540))) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    v47 = a1[280];
    v48 = a4;
    if ( (int)a1[282] < (int)v47
    || (*((uint8_t *)a1 + 1125) || !v47)
    && (v49 = (int)a1[283], v49 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[278] + 2))(a1 + 278, (int)v47 + v49, 0) )
    v50 = a1[282];
    v51 = a1[279];
    a1[282] = (void*375 *)((char *)v50 + 1);
    *((uint32_t *)v51 + (uint32_t)v50) = v48;
    v52 = a1[274];
    if ( (int)a1[276] < (int)v52
    || (*((uint8_t *)a1 + 1101) || !v52)
    && (v53 = (int)a1[277], v53 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[272] + 2))(a1 + 272, (int)v52 + v53, 0) )
    v54 = a1[276];
    v55 = a1[273];
    a1[276] = (void*375 *)((char *)v54 + 1);
    *((uint32_t *)v55 + (uint32_t)v54) = v90;
    if ( v91 < v90 )
    v91 = v90;
    v92 = a4;
    if ( !v92 )
    v56 = TechnoClass::EvaluateBuildingTarget(a1, (__int16 *)&v94);
    v90 = v56;
    if ( v96 < v56 )
    v96 = v56;
    v97 = v94;
    if ( ++v100 > v93 )
    break;
    LOWORD(v35) = v100;
    v57 = 1 - v93;
    if ( 1 - v93 < v93 )
    v105 = -(__int16)v93;
    do
    LOWORD(v103) = v106 + v105;
    HIWORD(v103) = v57 + HIWORD(v106);
    v94 = v103;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v94) )
    if ( SelectTechnoClassAreaTarget(a1, a3, a3, v89, (__int16 *)&v94, v95, &a4, &v90, TileIndex)
    && a4
    && (!a5 || *(uint32_t *)(*(uint32_t *)(a4 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(a4 + 540))) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    v58 = a1[280];
    v59 = a4;
    if ( (int)a1[282] < (int)v58
    || (*((uint8_t *)a1 + 1125) || !v58)
    && (v60 = (int)a1[283], v60 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[278] + 2))(a1 + 278, (int)v58 + v60, 0) )
    v61 = a1[282];
    v62 = a1[279];
    a1[282] = (void*375 *)((char *)v61 + 1);
    *((uint32_t *)v62 + (uint32_t)v61) = v59;
    v63 = a1[274];
    if ( (int)a1[276] < (int)v63
    || (*((uint8_t *)a1 + 1101) || !v63)
    && (v64 = (int)a1[277], v64 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[272] + 2))(a1 + 272, (int)v63 + v64, 0) )
    v65 = a1[276];
    v66 = a1[273];
    a1[276] = (void*375 *)((char *)v65 + 1);
    *((uint32_t *)v66 + (uint32_t)v65) = v90;
    if ( v91 < v90 )
    v91 = v90;
    v92 = a4;
    if ( !v92 )
    v67 = TechnoClass::EvaluateBuildingTarget(a1, (__int16 *)&v94);
    v90 = v67;
    if ( v96 < v67 )
    v96 = v67;
    v97 = v94;
    LOWORD(v104) = v106 + v93;
    HIWORD(v104) = v57 + HIWORD(v106);
    v94 = v104;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v94) )
    if ( SelectTechnoClassAreaTarget(a1, (int)&v94, a3, v89, (__int16 *)&v94, v95, &a4, &v90, TileIndex)
    && a4
    && (!a5 || *(uint32_t *)(*(uint32_t *)(a4 + 540) + 48) == *((uint32_t *)a1[135] + 5504))
    && ((a3 & 0x4000) == 0 || (unsigned __int8)House::IsAlliedWith(a1[135], *(void*375 **)(a4 + 540))) )
    if ( *(uint8_t *)((*((int (__thiscall **)(void*375 **))*a1 + 33))(a1) + 1712) )
    v68 = a1[280];
    v69 = a4;
    if ( (int)a1[282] < (int)v68
    || (*((uint8_t *)a1 + 1125) || !v68)
    && (v70 = (int)a1[283], v70 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[278] + 2))(a1 + 278, (int)v68 + v70, 0) )
    v71 = a1[282];
    v72 = a1[279];
    a1[282] = (void*375 *)((char *)v71 + 1);
    *((uint32_t *)v72 + (uint32_t)v71) = v69;
    v73 = a1[274];
    if ( (int)a1[276] < (int)v73
    || (*((uint8_t *)a1 + 1101) || !v73)
    && (v74 = (int)a1[277], v74 > 0)
    && (*((unsigned __int8 (__thiscall **)(void*375 **, int, uint32_t))a1[272] + 2))(a1 + 272, (int)v73 + v74, 0) )
    v75 = a1[276];
    v76 = a1[273];
    a1[276] = (void*375 *)((char *)v75 + 1);
    *((uint32_t *)v76 + (uint32_t)v75) = v90;
    if ( v91 < v90 )
    v91 = v90;
    v92 = a4;
    if ( !v92 )
    v77 = TechnoClass::EvaluateBuildingTarget(a1, (__int16 *)&v94);
    v90 = v77;
    if ( v96 < v77 )
    v96 = v77;
    v97 = v94;
    ++v57;
    while ( v57 < v93 );
    if ( v92 )
    v78 = v93;
    if ( v93 == v98 / 4 || v93 == v98 / 2 )
    return (void *)v92;
    else
    v78 = v93;
    if ( v97 != g_TechnoHouseState )
    break;
    v93 = v78 + 1;
    if ( v78 + 1 >= v98 )
    return (void *)v92;
    return CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v97);
}

// 0x006F9DB0
int  TechnoClass::GetID(#377 *this)
{
    return *(uint32_t *)(*((uint32_t *)this + 135) + 48);
}

// 0x006F9DC0
int  TechnoClass::GetTarget(#377 *this)
{
    return *((uint32_t *)this + 135);
}

int  TechnoClass::StepAnimFrame(#377 *this)
{
    int result; // eax
    int v3; // edi
    int v4; // edx
    int v5; // edx
    result = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1668);
    if ( result != -1 )
    v3 = *((uint32_t *)this + 191);
    if ( v3 < result )
    v4 = *((uint32_t *)this + 127);
    result = *((uint32_t *)this + 129);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= result )
    LABEL_7:
    v5 = *(uint32_t *)this;
    *((uint32_t *)this + 191) = v3 + 1;
    (*(void (__thiscall **)(void*377 *, int))(v5 + 292))(this, 2);
    return TechnoClass::CalcAnimDelay(this);
    result -= (int)CurrentFrame - v4;
    if ( result )
    return result;
    goto LABEL_7;
    return result;
}

// 0x006FBC90
bool  TechnoClass::ShouldNotBeCloaked(float *this)
{
    int v2; // edi
    uint32_t *v3; // eax
    int v4; // eax
    uint32_t *v5; // eax
    int v7; // [esp-4h] [ebp-24h]
    int v8; // [esp+Ch] [ebp-14h]
    int v9; // [esp+10h] [ebp-10h] BYREF
    uint8_t v10[12]; // [esp+14h] [ebp-Ch] BYREF
    if ( ((*(unsigned __int8 (__thiscall **)(float *))(*(uint32_t *)this + 648))(this) || *((uint8_t *)this + 978))
    && !(*(unsigned __int8 (__thiscall **)(float *))(*(uint32_t *)this + 892))(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(*(uint32_t *)this + 896))(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(*(uint32_t *)this + 468))(this)
    && !(*(unsigned __int8 (__thiscall **)(float *))(*(uint32_t *)this + 472))(this) )
    return 0;
    if ( Audio::IsMediumVolume(this + 84) || Audio::IsLoud(this + 84) )
    v2 = (*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this);
    if ( Audio::IsMediumVolume(this + 84) )
    if ( *(uint8_t *)(v2 + 674) )
    return 0;
    if ( Audio::IsLoud(this + 84) && (*(uint8_t *)(v2 + 674) || *(uint8_t *)(v2 + 692)) )
    return 0;
    v3 = (uint32_t *)(*(int (__thiscall **)(float *, uint8_t *))(*(uint32_t *)this + 72))(this, v10);
    LOWORD(v8) = *v3 / 256;
    HIWORD(v8) = v3[1] / 256;
    v4 = *((uint32_t *)this + 135);
    v9 = v8;
    v7 = *(uint32_t *)(v4 + 48);
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9);
    return !Cell::HasOccupierBit(v5, v7);
}

// 0x006FBDC0
bool  TechnoClass::ShouldBeCloaked(void *this)
{
    int v2; // edi
    uint32_t *v3; // eax
    int v4; // eax
    uint32_t *v5; // eax
    int v7; // edx
    int v8; // eax
    int v9; // edx
    int v10; // eax
    int v11; // [esp-4h] [ebp-24h]
    int v12; // [esp+Ch] [ebp-14h]
    int v13; // [esp+10h] [ebp-10h] BYREF
    uint8_t v14[12]; // [esp+14h] [ebp-Ch] BYREF
    if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(uint32_t *)this + 648))(this) )
    if ( !Audio::IsMediumVolume((float *)this + 84) && !Audio::IsLoud((float *)this + 84)
    || ((v2 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this), !Audio::IsMediumVolume((float *)this + 84))
    || !*(uint8_t *)(v2 + 674))
    && (!Audio::IsLoud((float *)this + 84) || !*(uint8_t *)(v2 + 674) && !*(uint8_t *)(v2 + 692)) )
    v3 = (uint32_t *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)this + 72))(this, v14);
    LOWORD(v12) = *v3 / 256;
    HIWORD(v12) = v3[1] / 256;
    v4 = *((uint32_t *)this + 135);
    v13 = v12;
    v11 = *(uint32_t *)(v4 + 48);
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    if ( !Cell::HasOccupierBit(v5, v11) && !*((uint8_t *)this + 978) )
    return 0;
    if ( *((uint32_t *)this + 136) == 2 )
    return 0;
    v7 = *((uint32_t *)this + 187);
    v8 = *((uint32_t *)this + 189);
    if ( v7 != -1 )
    if ( (int)CurrentFrame - v7 >= v8 )
    goto LABEL_19;
    v8 -= (int)CurrentFrame - v7;
    if ( v8 )
    return 0;
    LABEL_19:
    if ( *((uint32_t *)this + 173)
    && (*(unsigned __int8 (__thiscall **)(void *, uint32_t))(*(uint32_t *)this + 940))(this, *((uint32_t *)this + 173)) )
    return 0;
    if ( (*(int (__thiscall **)(void *))(*(uint32_t *)this + 44))(this) != 6 && *((uint32_t *)this + 137) )
    return 0;
    v9 = *((uint32_t *)this + 144);
    v10 = *((uint32_t *)this + 146);
    if ( v9 != -1 )
    if ( (int)CurrentFrame - v9 >= v10 )
    return (!*((uint32_t *)this + 172) || !this || (*((uint8_t *)this + 20) & 4) == 0 || !*((uint8_t *)this + 1709))
    && (*(int (__thiscall **)(void *))(*(uint32_t *)this + 456))(this) <= 0;
    v10 -= (int)CurrentFrame - v9;
    if ( v10 )
    return 0;
    return (!*((uint32_t *)this + 172) || !this || (*((uint8_t *)this + 20) & 4) == 0 || !*((uint8_t *)this + 1709))
    && (*(int (__thiscall **)(void *))(*(uint32_t *)this + 456))(this) <= 0;
}

int  TechnoClass::ExecuteMoveCommand(#377 *this)
{
    int result; // eax
    void **v3; // ecx
    if ( (*((uint8_t *)this + 1051)
    || (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    || (result = (int)g_hWnd) == 0)
    && (result = ObjectClass::HandleSelection(this), (uint8_t)result) )
    v3 = (void **)*((uint32_t *)this + 13);
    if ( v3 )
    TeamClass::Update_0(v3, 33, (int)this, g_TechnoHouseState, 0, 0);
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    || *(uint8_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 52) + 422) )
    if ( MoveFeedback )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 864))(this);
    TechnoClass::IsProductionChainActive(this);
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x006FC030
char  TechnoClass::CanMoveToCell(uint32_t *this)
{
    uint32_t *v3; // eax
    if ( *(this + 183) )
    return 0;
    if ( *((uint8_t *)this + 456) )
    return 0;
    if ( *(this + 185) )
    return 0;
    if ( *((uint8_t *)this + 1048) )
    v3 = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*this + 444))(this);
    if ( Cell::IsBridge(v3) )
    return 0;
    return AbstractClass::COMStub_79((void*374 *)this);
}

// 0x006FC090
int  TechnoClass::Vt240Thunk(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    int v3; // [esp+8h] [ebp+8h]
    return (*(int (__thiscall **)(void*377 *, int, int, uint32_t))(*(uint32_t *)this + 960))(this, v2, v3, 0);
}

// 0x006FCFA0
int  TechnoClass::CalculateROF(#377 *this)
{
    int v3; // edi
    void*377 *v4; // eax
    int v5; // ecx
    int v6; // ecx
    int v7; // eax
    int v8; // ebp
    int v9; // ebx
    int v10; // [esp+Ch] [ebp+4h]
    int v11; // [esp+Ch] [ebp+4h]
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 && *((int *)this + 191) > 1 )
    return 1;
    v3 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v10);
    if ( !v3 )
    return 1;
    if ( *(uint8_t *)(v3 + 304)
    || *(uint8_t *)(v3 + 298) && *((uint32_t *)this + 194)
    || *(uint8_t *)(v3 + 297) && *((uint32_t *)this + 193)
    || *(uint8_t *)(v3 + 301) && *((uint32_t *)this + 197) )
    return *(uint32_t *)(v3 + 176);
    if ( this )
    v4 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 1 ? this : 0;
    else
    v4 = 0;
    v5 = *((uint32_t *)this + 238);
    if ( v5 >= *(uint32_t *)(v3 + 156) )
    v7 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    v8 = Math::RoundToInt((double)*(int *)(v3 + 176) * *(double *)(*((uint32_t *)this + 135) + 424) + (double)v7);
    v11 = v8;
    if ( Audio::IsMediumVolume((float *)this + 84) || Audio::IsLoud((float *)this + 84) )
    if ( (v9 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this), Audio::IsMediumVolume((float *)this + 84))
    && *(uint8_t *)(v9 + 672)
    || Audio::IsLoud((float *)this + 84) && (*(uint8_t *)(v9 + 672) || *(uint8_t *)(v9 + 690)) )
    v8 = Math::RoundToInt((double)v8 * *(double *)&RulesClass_Instance->TrackedDownhill);
    v11 = v8;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this) )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    v8 /= (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this);
    v11 = v8;
    if ( *((float *)&RulesClass_Instance->CloakDelay + 1) > 0.0 )
    v8 = Math::RoundToInt((double)v11 / *((float *)&RulesClass_Instance->CloakDelay + 1));
    v11 = v8;
    if ( *((uint32_t *)this + 185)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 6
    && *(float *)&RulesClass_Instance->BaseBias != 0.0 )
    return Math::RoundToInt((double)v11 / *(float *)&RulesClass_Instance->BaseBias);
    return v8;
    else
    if ( v5 <= 0 )
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 3, 5);
    if ( v5 > 4 )
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 3, 5);
    if ( !v4 )
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 3, 5);
    v6 = *(uint32_t *)(*((uint32_t *)v4 + 433) + 4 * v5 + 3652);
    if ( v6 == -1 )
    return Random::Range((uint32_t *)ScenarioClass_Instance + 134, 3, 5);
    else
    return v6;
}

int  TechnoClass::FireWeapon(#377 *this)
{
    int v2; // ebx
    uint8_t *v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // edx
    uint32_t *v8; // eax
    int v9; // eax
    void*375 *v10; // eax
    void*375 *v11; // edi
    int *v12; // eax
    int *v13; // eax
    int v14; // edx
    int v15; // eax
    uint32_t *v16; // eax
    void *v17; // eax
    int *v18; // eax
    int *v19; // eax
    int *v20; // eax
    int v21; // edi
    int *v22; // eax
    int v23; // ebx
    char v24; // al
    int v25; // edi
    void *v26; // eax
    uint32_t *v27; // ebx
    int v28; // eax
    int v29; // ecx
    double v30; // st7
    void *v31; // eax
    int WeaponRange; // eax
    int v33; // edx
    int v34; // ecx
    uint32_t *UIObjectCOM; // eax
    uint8_t *v36; // edi
    bool v37; // zf
    int v38; // eax
    int v39; // edi
    int v40; // eax
    int *TargetCoords; // eax
    int v42; // edx
    int v43; // edi
    int v44; // ecx
    int v45; // edi
    int v46; // eax
    double v47; // st7
    int v48; // eax
    int v49; // ebx
    int v50; // ebx
    double v51; // rcx
    double v52; // st7
    double v53; // st7
    double v54; // rcx
    double v55; // st7
    double v56; // st7
    double v57; // st7
    int *v58; // eax
    double v59; // st7
    double v60; // st7
    int v61; // eax
    double v62; // st7
    __int16 v63; // bx
    unsigned int v64; // ebx
    double v65; // st7
    int v66; // edx
    double v67; // st7
    int v68; // eax
    double v69; // st7
    double v70; // rcx
    uint32_t *v71; // ebx
    uint8_t *v72; // eax
    char v73; // cl
    int v74; // eax
    char IsCloseEnoughToBuilding; // al
    int v76; // edi
    uint32_t *v77; // ebx
    int v78; // eax
    double v79; // st7
    double v80; // st7
    double v81; // st7
    __int16 v82; // ax
    double v83; // st7
    unsigned int v84; // edi
    double v85; // st7
    double v86; // st7
    double v87; // st7
    void*377 *v88; // edi
    int v89; // edx
    int v90; // eax
    int v91; // eax
    int v92; // ebx
    void *v93; // eax
    int v94; // eax
    void *v95; // eax
    int v96; // eax
    int *v97; // eax
    void *v98; // eax
    int v99; // eax
    int v100; // edx
    int v101; // eax
    void *v102; // edi
    int v103; // eax
    unsigned int v104; // edx
    int v105; // eax
    void **v106; // eax
    void **v107; // edi
    int v108; // eax
    void **v109; // eax
    int *v110; // edi
    int *v111; // eax
    char *FireEffect; // eax
    char *v113; // eax
    int v114; // eax
    __int16 v115; // ax
    void **v116; // eax
    void **v117; // eax
    uint32_t *v118; // eax
    int v119; // eax
    void*375 *v120; // eax
    int v121; // edi
    int *v122; // eax
    int *v123; // eax
    void*375 *v124; // eax
    uint32_t *v125; // edi
    int v126; // ecx
    int v127; // eax
    int v128; // eax
    int v129; // edx
    int v130; // ecx
    int v131; // [esp+2Ch] [ebp-C4h]
    int v132; // [esp+30h] [ebp-C0h]
    double v133; // [esp+34h] [ebp-BCh]
    int v134; // [esp+38h] [ebp-B8h]
    float v135; // [esp+38h] [ebp-B8h]
    char v136; // [esp+3Ch] [ebp-B4h]
    float v137; // [esp+3Ch] [ebp-B4h]
    char v138; // [esp+40h] [ebp-B0h]
    double v139; // [esp+50h] [ebp-A0h] BYREF
    double v140; // [esp+58h] [ebp-98h] BYREF
    double v141; // [esp+60h] [ebp-90h]
    int v142; // [esp+68h] [ebp-88h]
    int v143; // [esp+6Ch] [ebp-84h]
    double v144; // [esp+70h] [ebp-80h] BYREF
    int v145; // [esp+78h] [ebp-78h]
    uint32_t *v146; // [esp+7Ch] [ebp-74h]
    int v147[2]; // [esp+80h] [ebp-70h] BYREF
    int v148; // [esp+88h] [ebp-68h]
    int v149; // [esp+8Ch] [ebp-64h]
    double v150; // [esp+90h] [ebp-60h] BYREF
    double v151; // [esp+98h] [ebp-58h]
    double v152; // [esp+A0h] [ebp-50h]
    double v153; // [esp+A8h] [ebp-48h]
    double WeatherConBoltExplosion; // [esp+B0h] [ebp-40h] BYREF
    int v155; // [esp+C0h] [ebp-30h] BYREF
    uint8_t *v156; // [esp+C4h] [ebp-2Ch]
    int v157; // [esp+C8h] [ebp-28h] BYREF
    int v158; // [esp+CCh] [ebp-24h]
    int v159; // [esp+D0h] [ebp-20h]
    int v160; // [esp+D4h] [ebp-1Ch] BYREF
    int v161; // [esp+D8h] [ebp-18h]
    int v162; // [esp+DCh] [ebp-14h]
    double v163; // [esp+E0h] [ebp-10h]
    int *v164; // [esp+F8h] [ebp+8h]
    int v165; // [esp+FCh] [ebp+Ch]
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v165);
    v147[0] = v2;
    if ( !v2 )
    return 0;
    v3 = v164 ? ((v164[5] & 2) != 0 ? (uint8_t *)v164 : 0) : 0;
    v4 = *(uint32_t *)(v2 + 160);
    v156 = v3;
    LODWORD(v153) = v4;
    if ( ArmageddonMode || !v164 || v3 && v3[129] )
    return 0;
    if ( *(uint8_t *)(v2 + 324) )
    v5 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v6 = *(uint32_t *)this;
    LODWORD(v140) = *(uint32_t *)(v5 + 160);
    (*(void (__thiscall **)(void*377 *, double *, uint32_t, int, uint32_t, int, uint32_t, uint32_t))(v6 + 364))(
    this,
    &v140,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    0,
    0);
    return 0;
    if ( *(uint8_t *)(v2 + 297) && *((uint32_t *)this + 193)
    || *(uint8_t *)(v2 + 301) && *((uint32_t *)this + 197)
    || *(uint8_t *)(v2 + 298) && *((uint32_t *)this + 194)
    || *(uint8_t *)(v2 + 304) && *((uint32_t *)this + 201) )
    return 0;
    if ( *(uint8_t *)(v2 + 305) )
    SpawnManagerClass::SetTarget(*((uint32_t **)this + 180), (int)v164);
    if ( *((uint8_t *)this + 1050) || *((uint8_t *)this + 1051) )
    v8 = (uint32_t *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    if ( !Cell::IsPassable(v8) )
    v9 = (*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    if ( !Game::Stub3(v9) )
    return 0;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 2 && *((uint8_t *)this + 1050) )
    return 0;
    if ( !v156 )
    return 0;
    v10 = (void*375 *)(*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v156 + 60))(v156);
    v11 = v10;
    if ( v10 && (unsigned __int8)House::IsHumanPlayer(v10) )
    if ( *(uint8_t *)(v2 + 311) )
    v12 = (int *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    MapClass::RevealArea0((int *)&MapClass_Instance, v12, 3, v11, 0, 0, 0, 1, 0);
    v13 = (int *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    MapClass::RevealArea2(&MapClass_Instance, v13, 0, 4, 0);
    return 0;
    if ( *(uint8_t *)(v2 + 322) )
    if ( (v164[5] & 1) == 0 || !*(uint8_t *)((*(int (__thiscall **)(int *))(*v164 + 132))(v164) + 1519) )
    return 0;
    TechnoClass::LinkToBridge(this, v164);
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return 0;
    if ( (byte_B0EB30 & 1) == 0 )
    dword_B0EAA8[0] = 256;
    dword_B0EAAC[0] = 0;
    dword_B0EAB4 = 180;
    dword_B0EAB8 = 180;
    dword_B0EAC0 = 0;
    dword_B0EAC4 = 256;
    dword_B0EACC = -180;
    dword_B0EAD0 = 180;
    dword_B0EAD8 = -256;
    dword_B0EADC = 0;
    dword_B0EAE4 = -180;
    dword_B0EAE8 = -180;
    byte_B0EB30 |= 1u;
    dword_B0EAF0 = 0;
    dword_B0EAF4 = -256;
    dword_B0EAB0[0] = 0;
    dword_B0EABC = 0;
    dword_B0EAC8 = 0;
    dword_B0EAD4 = 0;
    dword_B0EAE0 = 0;
    dword_B0EAEC = 0;
    dword_B0EAF8 = 0;
    dword_B0EAFC = 180;
    dword_B0EB00 = -180;
    dword_B0EB04 = 0;
    atexit(nullsub_45);
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1681) )
    if ( *((uint32_t *)this + 238) )
    *((uint32_t *)this + 168) = (8 / *(uint32_t *)(v2 + 156) + *((uint32_t *)this + 168)) % 8;
    else
    *((uint32_t *)this + 168) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 7);
    v14 = *((uint32_t *)this + 40) + dword_B0EAAC[3 * *((uint32_t *)this + 168)];
    v15 = *((uint32_t *)this + 41) + dword_B0EAB0[3 * *((uint32_t *)this + 168)];
    v157 = *((uint32_t *)this + 39) + dword_B0EAA8[3 * *((uint32_t *)this + 168)];
    v158 = v14;
    else
    if ( *(uint8_t *)(v2 + 336) )
    v16 = (uint32_t *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    LOWORD(v142) = *v16 / 256;
    HIWORD(v142) = v16[1] / 256;
    LODWORD(v140) = v142;
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v140);
    v18 = (int *)(*(int (__thiscall **)(void *, double *))(*(uint32_t *)v17 + 72))(v17, &v144);
    v157 = *v18;
    v158 = v18[1];
    v159 = v18[2];
    v164 = (int *)Coord::To_Cell(&MapClass_Instance, &v157);
    goto LABEL_51;
    if ( v156 )
    v19 = (int *)(*(int (__thiscall **)(uint8_t *, double *))(*(uint32_t *)v156 + 164))(v156, &v144);
    else
    v19 = (int *)(*(int (__thiscall **)(int *, double *))(*v164 + 88))(v164, &v144);
    v157 = *v19;
    v158 = v19[1];
    v15 = v19[2];
    v159 = v15;
    LABEL_51:
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1681) )
    v164 = (int *)Coord::To_Cell(&MapClass_Instance, &v157);
    v20 = (int *)(*(int (__thiscall **)(void*377 *, double *, int, uint32_t, uint32_t, uint32_t))(*(uint32_t *)this + 176))(
    this,
    &v144,
    v165,
    0,
    0,
    0);
    v21 = LODWORD(v153);
    v147[1] = *v20;
    v148 = v20[1];
    v149 = v20[2];
    if ( *(uint32_t *)(LODWORD(v153) + 732) || *(uint8_t *)(LODWORD(v153) + 668) )
    (*(void (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 776))(this, &v139);
    if ( *(uint8_t *)(v21 + 668) )
    v22 = (int *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    v147[1] = *v22;
    v148 = v22[1];
    v149 = v22[2];
    else
    Math::CalcAngle((double)v148 - (double)v158, (double)v157 - (double)v147[1]);
    v23 = v147[0];
    v24 = *(uint8_t *)(v147[0] + 304);
    v25 = *(uint32_t *)(v147[0] + 164);
    LODWORD(v140) = v25;
    v143 = v25;
    if ( v24 || *(uint8_t *)(v147[0] + 297) )
    v25 = 0;
    else
    if ( v25 <= 0 )
    goto LABEL_71;
    v25 = Math::RoundToInt(*(double *)(*((uint32_t *)this + 135) + 392) * *((double *)this + 44) * (double)SLODWORD(v140));
    v143 = v25;
    if ( !Audio::IsMediumVolume((float *)this + 84) && !Audio::IsLoud((float *)this + 84) )
    goto LABEL_71;
    v142 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( (!Audio::IsMediumVolume((float *)this + 84) || !*(uint8_t *)(v142 + 670))
    && (!Audio::IsLoud((float *)this + 84) || !*(uint8_t *)(v142 + 670) && !*(uint8_t *)(v142 + 688)) )
    goto LABEL_71;
    v25 = Math::RoundToInt((double)v143 * *(double *)&RulesClass_Instance->ShellButtonSlideSound);
    v143 = v25;
    LABEL_71:
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this) )
    v25 = Math::RoundToInt((double)v143 * *(float *)&RulesClass_Instance->CloakDelay);
    v143 = v25;
    if ( *((uint32_t *)this + 185) && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 6 )
    v25 = Math::RoundToInt((double)v143 * *((float *)&RulesClass_Instance->GameSpeedBias + 1));
    v143 = v25;
    if ( *((uint8_t *)this + 130) )
    v25 = Math::RoundToInt((double)v143 * *(float *)&RulesClass_Instance->ExpSpread);
    v143 = v25;
    if ( *(uint8_t *)(v23 + 330) )
    v26 = __2_YAPAXI_Z(0x40u);
    if ( v26 )
    v27 = (uint32_t *)DiskLaserClass::DiskLaserClass((int)v26);
    if ( v27 )
    ++*((uint32_t *)this + 238);
    v28 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 792))(this, v165);
    *((uint32_t *)this + 190) = v28;
    *((uint32_t *)this + 187) = CurrentFrame;
    *((uint32_t *)this + 188) = HIDWORD(v144);
    v29 = v147[0];
    v134 = v147[0];
    *((uint32_t *)this + 189) = v28;
    *((int *)this + 238) %= *(uint32_t *)(v29 + 156);
    DiskLaserClass::Fire(v27, (int)this, (int)v164, v134, v25);
    return 0;
    v23 = v147[0];
    LODWORD(v140) = (v158 - v148) * (v158 - v148) + (v157 - v147[1]) * (v157 - v147[1]);
    v30 = Math::Sqrt((double)SLODWORD(v140));
    v31 = (void *)Math::RoundToInt(v30);
    WeaponRange = TechnoClass::GetWeaponRange((uint32_t *)v23, v31);
    v33 = *(uint32_t *)(v23 + 172);
    v136 = *(uint8_t *)(v23 + 303);
    v34 = *(uint32_t *)(v23 + 160);
    v142 = WeaponRange;
    UIObjectCOM = CreateUIObjectCOM(v34, (int)v164, (int)this, v25, v33, WeaponRange, v136);
    v146 = UIObjectCOM;
    if ( UIObjectCOM )
    v36 = UIObjectCOM;
    Function::46B260(UIObjectCOM, v23);
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)v36 + 212))(v36);
    if ( this )
    v37 = (*((uint8_t *)this + 20) & 4) == 0;
    HIBYTE(v141) = (*((uint8_t *)this + 20) & 4) != 0;
    if ( !v37 )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 16))(*((uint32_t *)this + 413))
    && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3476) )
    v36[180] = 1;
    if ( !v36[180] && !*(uint8_t *)(LODWORD(v153) + 674) )
    v38 = *((uint32_t *)this + 173);
    v39 = v38 ? ((*(uint8_t *)(v38 + 20) & 1) != 0 ? v38 : 0) : 0;
    v40 = TechnoClass::updateHealthBar(v146);
    if ( v39 )
    if ( v40 )
    *(uint32_t *)(v39 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v39, v40);
    TargetCoords = TechnoClass::GetTargetCoords((int *)this, &v160);
    v42 = TargetCoords[1];
    LODWORD(v144) = *TargetCoords - v147[1];
    v43 = TargetCoords[2];
    v160 = LODWORD(v144);
    v44 = LODWORD(v153);
    v45 = v43 - v149;
    HIDWORD(v144) = v42 - v148;
    v46 = v42 - v148;
    LOBYTE(v42) = *(uint8_t *)(LODWORD(v153) + 674);
    v145 = v45;
    v161 = v46;
    v162 = v45;
    if ( (uint8_t)v42 && *(uint8_t *)(LODWORD(v153) + 667) )
    if ( !*(uint8_t *)(LODWORD(v153) + 675) || *(uint8_t *)(LODWORD(v153) + 670) )
    LODWORD(v140) = Random::Range(
    (uint32_t *)ScenarioClass_Instance + 134,
    RulesClass_Instance[1].PrerequisiteFactory[2] / 2,
    RulesClass_Instance[1].PrerequisiteFactory[2]);
    LODWORD(v139) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646);
    LODWORD(v139) = (__int16)Math::RoundToInt(
    ((double)SLODWORD(v139) * 4.656612877414201e-10 * 6.283185307179586
    - 1.570796326794897)
    * -10430.06004058427)
    - 0x3FFF;
    WeatherConBoltExplosion = (double)SLODWORD(v139) * -0.00009587672516830327;
    v54 = WeatherConBoltExplosion;
    v140 = (double)SLODWORD(v140);
    v163 = (double)SHIDWORD(v144);
    v55 = Math::SinCos(WeatherConBoltExplosion);
    LODWORD(v139) = Math::RoundToInt(v163 - v55 * v140);
    v56 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(HIDWORD(v54), LODWORD(WeatherConBoltExplosion))));
    v160 = Math::RoundToInt(v56 * v140 + (double)SLODWORD(v144));
    v46 = LODWORD(v139);
    else
    *(float *)&v163 = (float)SLODWORD(v144);
    *((float *)&v163 + 1) = (float)SHIDWORD(v144);
    v47 = Math::Sqrt(
    *(float *)&v163 * *(float *)&v163
    + *((float *)&v163 + 1) * *((float *)&v163 + 1)
    + (double)v145 * (double)v145);
    v48 = RulesClass_Instance[1].PrerequisiteFactory[2];
    *(float *)&v140 = v47;
    v49 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v48);
    v50 = Math::RoundToInt(*(float *)&v140) * v49;
    LODWORD(v139) = v50 / (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 360))(this, v165);
    LODWORD(v140) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646);
    v140 = (double)((__int16)Math::RoundToInt(
    ((double)SLODWORD(v140) * 4.656612877414201e-10 * 6.283185307179586
    - 1.570796326794897)
    * -10430.06004058427)
    - 0x3FFF)
    * -0.00009587672516830327;
    v51 = v140;
    WeatherConBoltExplosion = (double)SLODWORD(v139);
    v163 = (double)SHIDWORD(v144);
    v52 = Math::SinCos(v140);
    LODWORD(v139) = Math::RoundToInt(v163 - v52 * WeatherConBoltExplosion);
    v53 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(HIDWORD(v51), LODWORD(v140))));
    v160 = Math::RoundToInt(v53 * WeatherConBoltExplosion + (double)SLODWORD(v144));
    v46 = LODWORD(v139);
    v23 = v147[0];
    v44 = LODWORD(v153);
    v161 = v46;
    v162 = v45;
    if ( *(uint32_t *)(v44 + 732) || *(uint8_t *)(v44 + 668) )
    LODWORD(v140) = *(uint32_t *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 776))(this, &v139);
    if ( *(uint8_t *)(LODWORD(v153) + 668) )
    v58 = (int *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144);
    v147[1] = *v58;
    v148 = v58[1];
    v149 = v58[2];
    else
    LODWORD(v139) = -v46;
    v57 = Math::CalcAngle((double)-v46, (double)v160);
    LOWORD(v139) = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427);
    LODWORD(v140) = LODWORD(v139);
    v163 = (double)v160 * (double)v160;
    v139 = (double)v162 * (double)v162 + (double)v161 * (double)v161 + v163;
    v59 = Math::Sqrt(v139);
    if ( v142 > (int)Math::RoundToInt(v59) / 2 )
    v60 = Math::Sqrt(v139);
    v142 = (int)Math::RoundToInt(v60) / 2;
    LODWORD(v153) = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1700);
    v61 = *(uint32_t *)(v23 + 160);
    if ( *(int *)(v61 + 732) > 0 || *(uint8_t *)(v61 + 704) )
    if ( !LODWORD(v153) )
    v142 = 1;
    v146[68] = *(uint32_t *)(v23 + 168);
    v151 = 0.0;
    WeatherConBoltExplosion = (double)v142;
    v152 = 0.0;
    v150 = 100.0;
    v62 = WeatherConBoltExplosion / Math::Sqrt(10000.0);
    v150 = v62 * v150;
    v151 = v62 * v151;
    v152 = v62 * v152;
    if ( SLODWORD(v153) <= 0 )
    if ( v150 == 0.0 && v151 == 0.0 )
    v150 = 100.0;
    v153 = Math::Sqrt(v150 * v150 + v151 * v151);
    LODWORD(v139) = SLOWORD(v140) - 0x3FFF;
    WeatherConBoltExplosion = (double)SLODWORD(v139) * -0.00009587672516830327;
    v70 = WeatherConBoltExplosion;
    v150 = Math::ArcTan2(WeatherConBoltExplosion) * v153;
    v69 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(HIDWORD(v70), LODWORD(WeatherConBoltExplosion)))) * v153);
    v151 = v69;
    else
    WeatherConBoltExplosion = 3.141592653589793 / (double)SLODWORD(v153) * (double)*((int *)this + 271)
    - 1.570796326794897;
    LODWORD(v139) = *(__int16 *)ProgressTimer::GetValue((_WORD *)this + 452, &v139) - 0x3FFF;
    v63 = Math::RoundToInt(
    ((double)SLODWORD(v139) * -0.00009587672516830327 + WeatherConBoltExplosion - 1.570796326794897)
    * -10430.06004058427);
    if ( v150 == 0.0 && v151 == 0.0 )
    v150 = 100.0;
    v140 = Math::Sqrt(v150 * v150 + v151 * v151);
    LODWORD(v139) = v63 - 0x3FFF;
    WeatherConBoltExplosion = (double)SLODWORD(v139) * -0.00009587672516830327;
    v64 = HIDWORD(WeatherConBoltExplosion);
    v150 = Math::ArcTan2(WeatherConBoltExplosion) * v140;
    v65 = Math::SinCos(COERCE_DOUBLE(__PAIR64__(v64, LODWORD(WeatherConBoltExplosion))));
    v66 = LODWORD(v153);
    v67 = v65 * v140;
    v68 = *((uint32_t *)this + 271) + 1;
    *((uint32_t *)this + 271) = v68;
    v69 = -v67;
    v151 = v69;
    if ( v68 >= v66 )
    *((uint32_t *)this + 271) = 0;
    v71 = v146;
    LOWORD(v155) = 0x3FFF;
    HIBYTE(v141) = 1;
    v72 = (uint8_t *)v146[43];
    if ( v72[667] )
    v73 = v72[661];
    WeatherConBoltExplosion = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    if ( v73 )
    WeatherConBoltExplosion = RulesClass::GetFiringDistance();
    v69 = Math::Sqrt((double)v161 * (double)v161 + v163);
    v74 = Math::RoundToInt(v69);
    v133 = WeatherConBoltExplosion;
    v131 = v74;
    IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding(this, v165);
    HIBYTE(v141) = ComputeMathFacingAngle(IsCloseEnoughToBuilding, v142, v131, v45, v133, &v155);
    else if ( v72[566] )
    v76 = (*(int (__thiscall **)(int *, double *))(*v164 + 72))(v164, &v144);
    if ( *(uint32_t *)(v76 + 8) >= *(uint32_t *)((*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(
    this,
    &v160)
    + 8) )
    LOWORD(v139) = 0x4000;
    else
    LOWORD(v139) = 0x8000;
    v155 = LODWORD(v139);
    else
    v142 = abs32(v45);
    if ( v142 > 200 )
    v77 = (uint32_t *)*((uint32_t *)this + 173);
    v140 = 20.0;
    if ( v77 )
    if ( (*(int (__thiscall **)(uint32_t *))(*v77 + 44))(v77) == 6 )
    v78 = (*(int (__thiscall **)(void*377 *, double *, int))(*(uint32_t *)this + 768))(
    this,
    &WeatherConBoltExplosion,
    v165);
    v144 = *(double *)v78;
    v45 = 200 * *(uint32_t *)(v77[328] + 3828) - *(uint32_t *)(v78 + 8);
    v142 = abs32(v45);
    if ( (double)v142 < 20.0 )
    v140 = 0.0;
    v79 = Math::Sqrt((double)v161 * (double)v161 + v163);
    LODWORD(v139) = Math::RoundToInt(v79);
    v80 = (double)SLODWORD(v139);
    if ( v80 < 0.05 )
    v80 = 0.05;
    v137 = v80;
    v135 = (double)v142 - v140;
    v81 = globalHelper_0CB3D0(v135, v137);
    if ( v45 < 0 )
    v81 = -v81;
    v69 = (v81 - 1.570796326794897) * -10430.06004058427;
    v82 = Math::RoundToInt(v69);
    v71 = v146;
    LOWORD(v139) = v82;
    v155 = LODWORD(v139);
    Math::Hypotenuse2D(&v150);
    v83 = Math::CalcAngle(v152, v69);
    LODWORD(v139) = (__int16)Math::RoundToInt((v83 - 1.570796326794897) * -10430.06004058427) - 0x3FFF;
    v139 = (double)SLODWORD(v139) * -0.00009587672516830327;
    v163 = Math::Sqrt(v150 * v150 + v151 * v151 + v152 * v152);
    if ( v139 != 0.0 )
    v84 = HIDWORD(v139);
    v150 = v150 / Math::ArcTan2(v139);
    v151 = v151 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v84, LODWORD(v139))));
    LODWORD(v139) = (__int16)v155 - 0x3FFF;
    v85 = Math::ArcTan2((double)SLODWORD(v139) * -0.00009587672516830327);
    v150 = v85 * v150;
    LODWORD(v139) = (__int16)v155 - 0x3FFF;
    v86 = Math::ArcTan2((double)SLODWORD(v139) * -0.00009587672516830327);
    v151 = v86 * v151;
    LODWORD(v139) = (__int16)v155 - 0x3FFF;
    v87 = Math::SinCos((double)SLODWORD(v139) * -0.00009587672516830327);
    v152 = v87 * v163;
    if ( HIBYTE(v141)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, double *))(*v71 + 496))(v71, &v147[1], &v150) )
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this)
    && this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 )
    v88 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 ? this : 0;
    v89 = *(uint32_t *)v88;
    ++*((uint32_t *)v88 + 423);
    *((int *)v88 + 423) %= (*(int (__thiscall **)(void*377 *))(v89 + 1032))(v88);
    if ( *(uint8_t *)(v71[43] + 670) && v156 && v156[140] )
    *((uint8_t *)v71 + 140) = 1;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this)
    && *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3234) )
    LODWORD(v139) = *((uint32_t *)this + 246);
    if ( LODWORD(v139) )
    v90 = *((uint32_t *)this + 247);
    *((uint32_t *)this + 252) = 1;
    *((uint32_t *)this + 253) = v90;
    if ( v90 < 1 )
    *((uint32_t *)this + 253) = 1;
    *((float *)this + 250) = (double)SLODWORD(v139) / (double)*((int *)this + 253);
    LODWORD(v139) = *((uint32_t *)this + 254);
    if ( LODWORD(v139) )
    v91 = *((uint32_t *)this + 255);
    *((uint32_t *)this + 260) = 1;
    *((uint32_t *)this + 261) = v91;
    if ( v91 < 1 )
    *((uint32_t *)this + 261) = 1;
    *((float *)this + 258) = (double)SLODWORD(v139) / (double)*((int *)this + 261);
    v92 = v147[0];
    if ( *(uint8_t *)(v147[0] + 297) && !*((uint32_t *)this + 193) )
    v93 = __2_YAPAXI_Z(0x100u);
    if ( v93 )
    v94 = ParticleSystemClass::Constructor(
    (int)v93,
    *(uint32_t *)(v92 + 284),
    &v147[1],
    (int)v164,
    this,
    &g_TechnoClassPool,
    0);
    else
    v94 = 0;
    *((uint32_t *)this + 193) = v94;
    if ( *(uint8_t *)(v92 + 298) && !*((uint32_t *)this + 194) )
    v95 = __2_YAPAXI_Z(0x100u);
    if ( v95 )
    v96 = ParticleSystemClass::Constructor(
    (int)v95,
    *(uint32_t *)(v92 + 284),
    &v147[1],
    (int)v164,
    this,
    &g_TechnoClassPool,
    0);
    else
    v96 = 0;
    *((uint32_t *)this + 194) = v96;
    if ( *(uint8_t *)(v92 + 301) && !*((uint32_t *)this + 197) )
    v97 = Weapon::DestroyTerrain((int *)this, &v160, &v147[1], v164, v92);
    v144 = *(double *)v97;
    v145 = v97[2];
    v98 = __2_YAPAXI_Z(0x100u);
    if ( v98 )
    v99 = ParticleSystemClass::Constructor((int)v98, *(uint32_t *)(v92 + 284), &v147[1], 0, this, &v144, 0);
    else
    v99 = 0;
    *((uint32_t *)this + 197) = v99;
    v100 = *(uint32_t *)this;
    ++*((uint32_t *)this + 238);
    v101 = (*(int (__thiscall **)(void*377 *, int))(v100 + 792))(this, v165);
    if ( *((uint8_t *)this + 664) )
    v101 /= 2;
    *((uint32_t *)this + 190) = v101;
    v102 = 0;
    *((uint32_t *)this + 187) = CurrentFrame;
    *((uint32_t *)this + 188) = HIDWORD(v144);
    *((uint32_t *)this + 189) = v101;
    *((int *)this + 238) %= *(uint32_t *)(v92 + 156);
    v103 = *(uint32_t *)(v92 + 260);
    if ( v103 == 8 )
    v102 = *(void **)(*(uint32_t *)(v92 + 248)
    + 4
    * ((int)((((unsigned int)((*(uint32_t *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 776))(
    this,
    &v139) >> 12)
    + 1) >> 1)
    & 7)
    + 1)
    % 8));
    else if ( v103 > 0 )
    v102 = **(void ***)(v92 + 248);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1024))(this) )
    v102 = *(void **)(v92 + 272);
    if ( !v102 && *((uint8_t *)this + 130) && *(uint32_t *)(v92 + 280) )
    v102 = *(void **)(v92 + 280);
    if ( *(int *)(v92 + 204) > 0 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3285) )
    v104 = (unsigned int)*((unsigned __int16 *)this + 484) % *(uint32_t *)(v92 + 204);
    v105 = *(uint32_t *)(v92 + 192);
    LODWORD(v139) = &v147[1];
    StartAudioControllerAt(*(uint32_t *)(v105 + 4 * v104), (int)&v147[1], 0);
    if ( v102 )
    v106 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v106 )
    v107 = AnimClass::ctor(v106, v102, &v147[1], 0, 1, (void *)0x600, 0, 0);
    else
    v107 = 0;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 )
    v108 = (*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 172))(this, &v144);
    v107[64] = (v148 - *(uint32_t *)(v108 + 4)) / -4 >= 0 ? 0 : (void *)((v148 - *(uint32_t *)(v108 + 4)) / -4);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    v107[64] = (void *)-200;
    if ( v107 && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 6 )
    BuildingClass::AimTurret(v107, this);
    if ( *(uint8_t *)(v92 + 304) )
    v109 = (void **)__2_YAPAXI_Z(0x240u);
    v110 = v164;
    if ( v109 )
    *((uint32_t *)this + 201) = WaveClass::Constructor(v109, &v157, &v147[1], this, 0, v164);
    else
    *((uint32_t *)this + 201) = 0;
    else
    v110 = v164;
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3216)
    && (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    *((uint32_t *)this + 239) = CurrentFrame;
    *((uint32_t *)this + 240) = HIDWORD(v144);
    *((uint32_t *)this + 241) = 15;
    if ( *(uint8_t *)(v92 + 329) )
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6 )
    v111 = (int *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1012))(this);
    FireEffect = TechnoClass::CreateFireEffect(this, v110, v165, *v111, &g_TechnoClassPool);
    if ( FireEffect )
    if ( *((uint32_t *)this + 328) == LODWORD(RulesClass_Instance->ZoomInFactor) )
    *((uint32_t *)FireEffect + 7) = 3;
    if ( *((int *)this + 409) > 0 )
    FireEffect[33] = 1;
    *((uint32_t *)FireEffect + 7) = 5;
    else
    v113 = TechnoClass::CreateFireEffect(this, v110, v165, v92, &g_TechnoClassPool);
    if ( v113 && *(uint8_t *)(v92 + 333) )
    *((uint32_t *)v113 + 7) = 2;
    else if ( *(uint8_t *)(v92 + 337) )
    TechnoClass::CreateFiringRadarBlip((int)this, v110);
    else if ( *(uint8_t *)(v92 + 340) )
    v114 = *(uint32_t *)(v92 + 172);
    if ( v114 && *(uint8_t *)(v114 + 346) )
    TechnoClass::CreateFireBeamEffect((int *)this, v110, 1);
    else
    TechnoClass::CreateFireBeamEffect((int *)this, v110, 0);
    else if ( *(uint8_t *)(v92 + 341) )
    v115 = Math::RoundToInt(*(float *)(*(uint32_t *)(v92 + 172) + 292));
    SpreadRadiationAreaEffect(this, v115);
    else if ( *(uint8_t *)(v92 + 348)
    && (!*((uint32_t *)this + 201)
    || (!v110 || (*(int (__thiscall **)(int *))(*v110 + 44))(v110) != 6) && !*((uint32_t *)this + 201)) )
    v116 = (void **)__2_YAPAXI_Z(0x240u);
    if ( v116 )
    v117 = WaveClass::Constructor(v116, &v157, &v147[1], this, (void *)3, v110);
    else
    v117 = 0;
    *((uint32_t *)this + 201) = v117;
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 912))(this);
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 292))(this, 2);
    if ( !*((uint8_t *)this + 1050) && !*((uint8_t *)this + 1051)
    || ((v118 = (uint32_t *)(*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144),
    Cell::IsPassable(v118))
    || (v119 = (*(int (__thiscall **)(void*377 *, double *))(*(uint32_t *)this + 72))(this, &v144), Game::Stub3(v119)))
    && ((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 2 || !*((uint8_t *)this + 1050)) )
    if ( v110 )
    if ( (v110[5] & 2) != 0 )
    v120 = (void*375 *)(*(int (__thiscall **)(int *))(*v110 + 60))(v110);
    v121 = (int)v120;
    if ( v120 )
    if ( (unsigned __int8)House::IsHumanPlayer(v120) && *(uint8_t *)(v92 + 311) )
    v122 = (int *)(*(int (__thiscall **)(void*377 *, double *, int))(*(uint32_t *)this + 72))(this, &v144, 3);
    MapClass::RevealArea0((int *)&MapClass_Instance, v122, v121, 0, 0, 0, 1, 0, v138);
    v123 = (int *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 72))(this);
    MapClass::RevealArea2(&MapClass_Instance, v123, (int)&v144 + 4, 0, 4);
    *((uint32_t *)this + 72) = CurrentFrame;
    else
    (*(void (__stdcall **)(uint32_t *))(*v71 + 8))(v71);
    v146 = 0;
    v25 = v143;
    v23 = v147[0];
    if ( *(uint8_t *)(v23 + 306) )
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3388) )
    if ( *((uint8_t *)this + 131) )
    v124 = (void*375 *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 60))(this);
    if ( (unsigned __int8)House::IsHumanPlayer(v124) )
    if ( (*(int (__thiscall **)(int *))(*v164 + 44))(v164) == 15 )
    *((uint8_t *)this + 1074) = 1;
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3389)
    && this
    && (*((uint8_t *)this + 20) & 4) != 0
    && *((uint32_t *)this + 373)
    && (*(int (__thiscall **)(int *))(*v164 + 44))(v164) == 15 )
    *((uint32_t *)this + 269) = *((*((uint8_t *)this + 20) & 4) != 0 ? (uint32_t *)((char *)this + 1492) : (uint32_t *)1492);
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 212))(this);
    if ( *(uint8_t *)(*(uint32_t *)(v23 + 172) + 345) )
    if ( v164 && (v164[5] & 4) != 0 )
    v164[422] = (int)(CurrentFrame + 10);
    (*(void (__thiscall **)(uint32_t *))(*v146 + 212))(v146);
    v132 = v25;
    v125 = v146;
    Particle::Init(
    (int)v146,
    *(uint32_t *)(v23 + 160),
    (int)v164,
    (int)this,
    v132,
    *(uint32_t *)(v23 + 172),
    *(uint32_t *)(v23 + 168),
    *(uint8_t *)(v23 + 303));
    (*(void (__thiscall **)(uint32_t *, int *, double *))(*v125 + 496))(v125, &v147[1], &v150);
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1712)
    && (*((uint32_t *)this + 43) != 1 || (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6) )
    v126 = *((uint32_t *)this + 286);
    if ( *((uint32_t *)this + 288) < v126
    || (*((uint8_t *)this + 1149) || !v126)
    && (v127 = *((uint32_t *)this + 289), v127 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, uint32_t))(*((uint32_t *)this + 284) + 8))(
    (char *)this + 1136,
    v126 + v127,
    0) )
    v128 = *((uint32_t *)this + 288);
    v129 = *((uint32_t *)this + 285);
    *((uint32_t *)this + 288) = v128 + 1;
    *(uint32_t *)(v129 + 4 * v128) = v164;
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    if ( *(uint8_t *)(v23 + 309) )
    if ( this )
    if ( (*((uint8_t *)this + 20) & 4) != 0 )
    v130 = *((uint32_t *)this + 373);
    if ( v130 )
    TeamClass::SelectMember(v130, 0);
    *(uint8_t *)(*((uint32_t *)this + 373) + 128) = 1;
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return (int)v146;
}

// 0x00700D10
int  TechnoClass::IsDeadOrInactive(#377 *this)
{
    int result; // eax
    LOBYTE(result) = !this
    || (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this), result != 1)
    || (*((char *)this + 1668) < 0
    || (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1252))(this), !(uint8_t)result))
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 892))(this), !(uint8_t)result);
    return result;
}

int  TechnoClass::CanAttack(#377 *this)
{
    void *v2; // eax
    int result; // eax
    int v4; // eax
    int v5; // eax
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // ebp
    uint32_t *v10; // edi
    uint32_t *v11; // ebx
    uint32_t *v12; // eax
    uint32_t *v13; // eax
    int v14; // [esp+10h] [ebp-24h] BYREF
    int v15; // [esp+14h] [ebp-20h]
    int v16; // [esp+18h] [ebp-1Ch] BYREF
    int v17; // [esp+1Ch] [ebp-18h] BYREF
    int v18; // [esp+20h] [ebp-14h] BYREF
    int v19; // [esp+24h] [ebp-10h] BYREF
    int v20; // [esp+28h] [ebp-Ch] BYREF
    uint32_t *v21; // [esp+2Ch] [ebp-8h] BYREF
    char v22[4]; // [esp+30h] [ebp-4h] BYREF
    v16 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t **))(*(uint32_t *)this + 440))(this, &v21);
    v2 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16);
    if ( v2 && InfantryClass::ValidateAttackPosition((int)v2) )
    goto LABEL_8;
    v4 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) - 1;
    if ( v4 )
    v5 = v4 - 5;
    if ( !v5 )
    LOBYTE(result) = ReturnFalse_465D30();
    return result;
    if ( v5 != 9 )
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 892))(this);
    if ( (uint8_t)result )
    goto LABEL_8;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( !*(uint32_t *)(result + 1504) )
    goto LABEL_8;
    goto LABEL_46;
    if ( TechnoClass::updateTurretRotation(this) )
    result = TechnoClass::IsMission27to30(this);
    if ( (uint8_t)result || *((uint32_t *)this + 433) == 31 )
    goto LABEL_8;
    if ( TechnoClass::updateTurretRotation(this) )
    v6 = *((uint32_t *)this + 187);
    result = *((uint32_t *)this + 189);
    if ( v6 == -1 )
    goto LABEL_16;
    if ( (int)CurrentFrame - v6 < result )
    result -= (int)CurrentFrame - v6;
    LABEL_16:
    if ( result )
    LABEL_8:
    LOBYTE(result) = 0;
    return result;
    LOBYTE(result) = TechnoClass::GetTypeFlag(this);
    return result;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 892))(this);
    if ( (uint8_t)result )
    goto LABEL_8;
    if ( *((char *)this + 1668) >= 0 )
    goto LABEL_8;
    v7 = *((uint32_t *)this + 433);
    if ( !*(uint32_t *)(v7 + 1028)
    && !*(uint32_t *)(v7 + 1504)
    && !*(uint8_t *)(v7 + 3603)
    && !*((uint32_t *)this + 185)
    && !TechnoClass::updateSpawnManager(this) )
    goto LABEL_8;
    v8 = *((uint32_t *)this + 433);
    result = *(uint32_t *)(v8 + 1028);
    if ( result )
    if ( *((uint32_t *)this + 421) )
    goto LABEL_8;
    if ( *(uint8_t *)(result + 5817) )
    result = *((uint32_t *)this + 176);
    if ( result )
    goto LABEL_8;
    result = *(uint32_t *)(v8 + 1504);
    if ( result > 0 )
    if ( *((uint8_t *)this + 140) )
    goto LABEL_8;
    v14 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, char *))(*(uint32_t *)this + 440))(this, v22);
    result = (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14);
    v9 = result;
    if ( result )
    LOWORD(v15) = v14 + g_DirectionOffsetPool;
    HIWORD(v15) = HIWORD(g_DirectionOffsetPool) + HIWORD(v14);
    v17 = v15;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17);
    HIWORD(v15) = HIWORD(Direction_X_Offsets[0]) + HIWORD(v14);
    LOWORD(v15) = v14 + LOWORD(Direction_X_Offsets[0]);
    v18 = v15;
    v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18);
    LOWORD(v15) = v14 + g_CellDirectionOffsets;
    HIWORD(v15) = HIWORD(g_CellDirectionOffsets) + HIWORD(v14);
    v19 = v15;
    v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19);
    HIWORD(v15) = HIWORD(Direction_Y_Offsets) + HIWORD(v14);
    LOWORD(v15) = v14 + Direction_Y_Offsets;
    v20 = v15;
    result = (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20);
    if ( (*(uint32_t *)(v9 + 320) & 0x100) != 0 || v10 && (v10[80] & 0x100) != 0 )
    goto LABEL_8;
    if ( result && (*(uint32_t *)(result + 320) & 0x100) != 0 )
    goto LABEL_8;
    if ( v11 && (v11[80] & 0x100) != 0 )
    goto LABEL_8;
    result = (int)v21;
    if ( v21 )
    if ( (v21[80] & 0x100) != 0 )
    goto LABEL_8;
    if ( *(uint8_t *)(*((uint32_t *)this + 135) + 492) && *(uint32_t *)(v9 + 236) == 2 )
    goto LABEL_8;
    v12 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this);
    result = (int)Cell::IsBridge(v12);
    if ( result )
    v13 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this);
    result = Cell::IsBridge(v13)[328];
    if ( !*(uint8_t *)(result + 5803) )
    goto LABEL_8;
    LABEL_46:
    LOBYTE(result) = 1;
    return result;
}

// 0x007010D0
int  TechnoClass::HasValidWeapon(#377 *this)
{
    int result; // eax
    LOBYTE(result) = !*((uint8_t *)this + 456)
    && (result = House::IsHumanPlayer(*((void*375 **)this + 135)), (uint8_t)result)
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1012))(this)) != 0
    && *(uint32_t *)result
    && (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 892))(this), !(uint8_t)result);
    return result;
}

// 0x007012C0
int  TechnoClass::FindLowestDamage(#377 *this)
{
    int v2; // eax
    int v3; // ebx
    uint32_t *v4; // ebp
    int v5; // edi
    int DB; // esi
    int v7; // eax
    int v8; // eax
    int v10; // edi
    int v11; // esi
    int v12; // eax
    int v13; // eax
    int v14; // [esp+Ch] [ebp+4h]
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v14);
    if ( !v2 )
    return 0;
    v3 = *(uint32_t *)(v2 + 180);
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1508) )
    return v3;
    v4 = (uint32_t *)((char *)this + 276);
    v5 = 0x7FFFFFFF;
    DB = CCINIClass::GetDB((uint32_t *)this + 69);
    if ( DB )
    do
    v7 = *(uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)DB + 1012))(DB);
    if ( v7 )
    v8 = *(uint32_t *)(v7 + 180);
    if ( v8 < v5 )
    v5 = v8;
    DB = *(uint32_t *)(DB + 48);
    while ( DB && (*(uint8_t *)(DB + 20) & 4) != 0 );
    if ( v3 < v5 )
    return v3;
    v10 = 0x7FFFFFFF;
    v11 = CCINIClass::GetDB(v4);
    if ( v11 )
    do
    v12 = *(uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)v11 + 1012))(v11);
    if ( v12 )
    v13 = *(uint32_t *)(v12 + 180);
    if ( v13 < v10 )
    v10 = v13;
    v11 = *(uint32_t *)(v11 + 48);
    while ( v11 && (*(uint8_t *)(v11 + 20) & 4) != 0 );
    return v10;
}

int  TechnoClass::OverrideMission_SyncLog(#377 *this)
{
    int v3; // [esp+Ch] [ebp+4h]
    int v4; // [esp+10h] [ebp+8h]
    int v5; // [esp+14h] [ebp+Ch]
    *((uint32_t *)this + 174) = *((uint32_t *)this + 173);
    AbstractClass::COMStub_125((int)this, v3, v4, v5);
    return (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 968))(this, v4);
}

int  TechnoClass::RegisterKill(#377 *this)
{
    int v2; // eax
    int v3; // ebp
    void **v4; // ecx
    void **v5; // ecx
    void **v6; // ecx
    void **v7; // ecx
    void **v8; // ecx
    int result; // eax
    int v10; // ecx
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // eax
    int v16; // ebx
    uint32_t *v17; // eax
    uint32_t *v18; // eax
    int v19; // [esp-Ch] [ebp-1Ch]
    int v20; // [esp-Ch] [ebp-1Ch]
    int v21; // [esp-Ch] [ebp-1Ch]
    int v22; // [esp-Ch] [ebp-1Ch]
    int v23; // [esp-8h] [ebp-18h]
    int v24; // [esp-8h] [ebp-18h]
    int v25; // [esp-8h] [ebp-18h]
    int v26; // [esp-8h] [ebp-18h]
    int v27; // [esp+Ch] [ebp-4h]
    int v28; // [esp+14h] [ebp+4h]
    v27 = 0;
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v2 + 132))(v2, *((uint32_t *)this + 135));
    if ( *((uint8_t *)this + 144) )
    v4 = (void **)*((uint32_t *)this + 13);
    if ( v4 )
    if ( v28 )
    TeamClass::Update_0(v4, 6, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v5 = (void **)*((uint32_t *)this + 13);
    if ( v5 && v28 )
    TeamClass::Update_0(v5, 4, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144)
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 1
    && *((uint8_t *)this + 144) )
    v6 = (void **)*((uint32_t *)this + 13);
    if ( v6 && v28 )
    TeamClass::Update_0(v6, 7, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v7 = (void **)*((uint32_t *)this + 13);
    if ( v7 )
    TeamClass::Update_0(v7, 48, (int)this, g_TechnoHouseState, 0, 0);
    if ( *((uint8_t *)this + 144) )
    v8 = (void **)*((uint32_t *)this + 13);
    if ( v8 )
    TeamClass::Update_0(v8, 29, (int)this, g_TechnoHouseState, 0, 0);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( !*(uint8_t *)(result + 3231) )
    if ( v28 )
    if ( Object::IsAlliedWithObjectHouse(*(uint32_t **)(v28 + 540), (int)this) )
    v3 = 0;
    else if ( Audio::IsMediumVolume((float *)this + 84) )
    v3 *= 2;
    else if ( Audio::IsLoud((float *)this + 84) )
    v3 *= 3;
    if ( *(uint8_t *)(v28 + 130)
    && (v10 = *(uint32_t *)(v28 + 284)) != 0
    && *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v10 + 132))(v10) + 3214) )
    v11 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v28 + 284) + 132))(*(uint32_t *)(v28 + 284));
    v23 = *((uint32_t *)this + 135);
    v19 = (*(int (__thiscall **)(int))(*(uint32_t *)v11 + 132))(v11);
    HouseClass::AccumulateScore((float *)(*(uint32_t *)(v28 + 284) + 336), v19, v23);
    else if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v28 + 132))(v28) + 3214) )
    v12 = (*(int (__thiscall **)(int))(*(uint32_t *)v28 + 132))(v28);
    v24 = *((uint32_t *)this + 135);
    v20 = (*(int (__thiscall **)(int))(*(uint32_t *)v12 + 132))(v12);
    HouseClass::AccumulateScore((float *)(v28 + 336), v20, v24);
    else if ( *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v28 + 132))(v28) + 3432) )
    v13 = *(uint32_t *)(v28 + 724);
    if ( v13 && *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v13 + 132))(v13) + 3214) )
    v14 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v28 + 724) + 132))(*(uint32_t *)(v28 + 724));
    v25 = *((uint32_t *)this + 135);
    v21 = (*(int (__thiscall **)(int))(*(uint32_t *)v14 + 132))(v14);
    HouseClass::AccumulateScore((float *)(*(uint32_t *)(v28 + 724) + 336), v21, v25);
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v28 + 1024))(v28)
    && (*(int (__thiscall **)(int))(*(uint32_t *)v28 + 44))(v28) == 6 )
    v15 = (*(int (__thiscall **)(int))(*(uint32_t *)v28 + 44))(v28);
    v16 = *(uint32_t *)(*(uint32_t *)(v15 == 6 ? v28 + 0x688 : 1672) + 4 * *(uint32_t *)(v15 == 6 ? v28 + 0x69C : 1692));
    v26 = *((uint32_t *)this + 135);
    v22 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(v16 + 1728) + 132))(*(uint32_t *)(v16 + 1728));
    HouseClass::AccumulateScore((float *)(v16 + 336), v22, v26);
    *(uint32_t *)(*((uint32_t *)this + 135) + 21644) = (*(int (__thiscall **)(int))(*(uint32_t *)v28 + 56))(v28);
    *(uint32_t *)(*(uint32_t *)(v28 + 540) + 21736) += v3;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) - 1;
    switch ( result )
    case 0:
    goto LABEL_59;
    case 1:
    if ( !v28 )
    goto LABEL_63;
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(
    (uint32_t *)(*(uint32_t *)(v28 + 540) + 9032),
    *(uint32_t *)(*((uint32_t *)this + 433) + 3576));
    v27 = 1;
    LABEL_55:
    if ( v28 )
    if ( !v27 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(
    (uint32_t *)(*(uint32_t *)(v28 + 540) + 11088),
    *(uint32_t *)(*((uint32_t *)this + 432) + 3576));
    v27 = 1;
    LABEL_59:
    if ( v28 && !v27 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(
    (uint32_t *)(*(uint32_t *)(v28 + 540) + 13144),
    *(uint32_t *)(*((uint32_t *)this + 433) + 3576));
    LABEL_63:
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21556);
    if ( v28 )
    if ( !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    v18 = (uint32_t *)(*(uint32_t *)(v28 + 540)
    + 4 * (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this)
    + 21476);
    ++*v18;
    result = RadarClass::IsActiveMode(&MapClass_Instance);
    if ( (uint8_t)result )
    LABEL_67:
    result = RadarClass::SetFlag(&MapClass_Instance, 0);
    break;
    case 5:
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( !*(uint8_t *)(result + 562) )
    if ( *((uint32_t *)this + 335) != -1 )
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21640);
    if ( v28 && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3231) )
    HouseClass::IncrementStat(
    (uint32_t *)(*(uint32_t *)(v28 + 540) + 15200),
    *(uint32_t *)(*((uint32_t *)this + 328) + 3576));
    v17 = (uint32_t *)(*(uint32_t *)(v28 + 540)
    + 4 * (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 56))(this)
    + 21560);
    ++*v17;
    result = RadarClass::IsActiveMode(&MapClass_Instance);
    if ( (uint8_t)result )
    goto LABEL_67;
    return result;
    case 14:
    goto LABEL_55;
    default:
    return result;
    return result;
}

// 0x007036C0
int  TechnoClass::TransitionEffectState(#377 *this)
{
    int result; // eax
    int v3; // edx
    int v4; // eax
    wchar_t *v5; // ecx
    int *v6; // esi
    int v7; // [esp+4h] [ebp-Ch] BYREF
    int v8; // [esp+8h] [ebp-8h]
    int v9; // [esp+Ch] [ebp-4h]
    char v10; // [esp+14h] [ebp+4h]
    result = *((uint32_t *)this + 136);
    if ( result == 2 || result == 1 )
    *((uint32_t *)this + 136) = 3;
    v3 = *(uint32_t *)this;
    *((uint32_t *)this + 137) = RulesClass_Instance->MovieOff - 1;
    v4 = (*(int (__thiscall **)(void*377 *))(v3 + 132))(this);
    v5 = CurrentFrame;
    result = *(uint32_t *)(v4 + 784);
    *((uint32_t *)this + 142) = result;
    *((uint32_t *)this + 139) = v5;
    *((uint32_t *)this + 140) = v8;
    *((uint32_t *)this + 141) = result;
    LOBYTE(result) = v10;
    *((uint32_t *)this + 143) = -1;
    if ( !v10 )
    v6 = (int *)((char *)this + 156);
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    return StartAudioControllerAt(RulesClass_Instance->WheeledDownhill, (int)&v7, 0);
    return result;
}

// 0x00703770
int  TechnoClass::StartEffectAudio(#377 *this)
{
    int result; // eax
    int v3; // edx
    int v4; // eax
    wchar_t *v5; // ecx
    int v6; // eax
    int v7; // [esp+4h] [ebp-Ch] BYREF
    int v8; // [esp+8h] [ebp-8h]
    int v9; // [esp+Ch] [ebp-4h]
    char v10; // [esp+14h] [ebp+4h]
    result = *((uint32_t *)this + 136);
    if ( !result || result == 3 )
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 220))(this, 0);
    v3 = *(uint32_t *)this;
    *((uint32_t *)this + 136) = 1;
    *((uint32_t *)this + 137) = 0;
    v4 = (*(int (__thiscall **)(void*377 *))(v3 + 132))(this);
    v5 = CurrentFrame;
    v6 = *(uint32_t *)(v4 + 784);
    *((uint32_t *)this + 142) = v6;
    *((uint32_t *)this + 139) = v5;
    *((uint32_t *)this + 140) = v8;
    *((uint32_t *)this + 141) = v6;
    *((uint32_t *)this + 143) = 1;
    if ( !v10 )
    v7 = *((uint32_t *)this + 39);
    v8 = *((uint32_t *)this + 40);
    v9 = *((uint32_t *)this + 41);
    StartAudioControllerAt(RulesClass_Instance->WheeledDownhill, (int)&v7, 0);
    result = (int)HouseClass_Player;
    if ( *((void*375 **)this + 135) != HouseClass_Player )
    LOBYTE(result) = *((uint8_t *)this + 131);
    if ( (uint8_t)result )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 336))(this);
    return result;
}

// 0x00703850
int  TechnoClass::Vt279Thunk0(#377 *this)
{
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1116))(this, 0);
}

int  TechnoClass::IsValidBuildingPlacement(uint8_t *this)
{
    int v2; // eax
    int *v3; // eax
    char v4; // cl
    int v5; // eax
    uint32_t *v6; // edi
    void *v7; // eax
    int v8; // esi
    int v9; // ebx
    uint32_t *v10; // eax
    uint32_t *v11; // ebp
    __int16 v12; // di
    uint32_t *v13; // ebx
    uint32_t *v14; // eax
    uint32_t *v15; // esi
    int v16; // ebx
    void *v17; // edi
    int v18; // eax
    void *v19; // eax
    int v21; // [esp+10h] [ebp-14h] BYREF
    int v22; // [esp+14h] [ebp-10h]
    int v23; // [esp+18h] [ebp-Ch]
    int v24; // [esp+1Ch] [ebp-8h] BYREF
    int v25; // [esp+20h] [ebp-4h] BYREF
    v2 = *(uint32_t *)this;
    v23 = 0;
    v3 = (int *)(*(int (__thiscall **)(uint8_t *, int *))(v2 + 440))(this, &v25);
    v4 = *(this + 140);
    v5 = *v3;
    v21 = v5;
    if ( v4 )
    return v23;
    LOWORD(v22) = LOWORD(Direction_X_Offsets[0]) + v5;
    HIWORD(v22) = HIWORD(v21) + HIWORD(Direction_X_Offsets[0]);
    v24 = v22;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    LOWORD(v22) = Direction_Y_Offsets + v21;
    HIWORD(v22) = HIWORD(v21) + HIWORD(Direction_Y_Offsets);
    v25 = v22;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    LOWORD(v8) = g_TechnoHouseState;
    v9 = (int)v7;
    v22 = g_TechnoHouseState;
    v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v21);
    v11 = v10;
    if ( !v6 || !v9 )
    return v23;
    if ( InfantryClass::IsInBounds((int)v10) )
    v8 = v11[9];
    LABEL_10:
    v22 = v8;
    goto LABEL_11;
    if ( InfantryClass::IsInBounds((int)v6) )
    v8 = v6[9];
    goto LABEL_10;
    if ( InfantryClass::IsInBounds(v9) )
    v8 = *(uint32_t *)(v9 + 36);
    goto LABEL_10;
    LABEL_11:
    v12 = HIWORD(v22);
    if ( __PAIR32__(HIWORD(v22), v8) != g_TechnoHouseState )
    LOWORD(v22) = v8 + LOWORD(Direction_X_Offsets[0]);
    HIWORD(v22) += HIWORD(Direction_X_Offsets[0]);
    v25 = v22;
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    LOWORD(v22) = v8 + Direction_Y_Offsets;
    HIWORD(v22) = HIWORD(Direction_Y_Offsets) + v12;
    v24 = v22;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    v15 = v14;
    if ( v13 )
    if ( v14 )
    v16 = v13[9];
    LOWORD(v22) = LOWORD(Direction_X_Offsets[0]) + v16;
    HIWORD(v22) = HIWORD(Direction_X_Offsets[0]) + HIWORD(v16);
    v25 = v22;
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v18 = v15[9];
    LOWORD(v22) = Direction_Y_Offsets + v18;
    HIWORD(v22) = HIWORD(Direction_Y_Offsets) + HIWORD(v18);
    v25 = v22;
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    if ( v17 )
    if ( v19 && (InfantryClass::IsInBounds((int)v19) || InfantryClass::IsInBounds((int)v17)) )
    return 1;
    return v23;
}

int  TechnoClass::GetDrawHeight(int *this)
{
    int v2; // eax
    int v3; // eax
    int v4; // edx
    int v5; // ebp
    uint8_t *v6; // ebx
    int v7; // eax
    int v8; // edi
    uint32_t *v10; // eax
    uint32_t *v11; // eax
    uint32_t *v12; // edi
    uint32_t *v13; // ebx
    uint32_t *v14; // eax
    int v15; // edi
    int v16; // ebx
    int v17; // eax
    _WORD *v18; // esi
    int v19; // eax
    __int16 v20; // dx
    uint8_t *v21; // edi
    int v22; // eax
    __int16 v23; // dx
    unsigned int v24; // eax
    __int16 v25; // dx
    int v26; // eax
    __int16 v27; // dx
    uint8_t *v28; // ebx
    int v29; // eax
    __int16 v30; // dx
    uint8_t *v31; // ebp
    int v32; // eax
    __int16 v33; // dx
    uint8_t *v34; // eax
    int v35; // eax
    uint32_t *v36; // ecx
    int v37; // edi
    uint32_t *i; // esi
    int v39; // eax
    int v40; // ecx
    int v41; // [esp+10h] [ebp-5Ch] BYREF
    int v42; // [esp+14h] [ebp-58h]
    uint8_t *v43; // [esp+18h] [ebp-54h] BYREF
    uint8_t *v44; // [esp+1Ch] [ebp-50h] BYREF
    uint8_t *v45; // [esp+20h] [ebp-4Ch] BYREF
    uint8_t *v46; // [esp+24h] [ebp-48h]
    uint8_t *v47; // [esp+28h] [ebp-44h] BYREF
    uint8_t *v48; // [esp+2Ch] [ebp-40h] BYREF
    uint8_t *v49; // [esp+30h] [ebp-3Ch] BYREF
    uint8_t *v50; // [esp+34h] [ebp-38h] BYREF
    uint8_t *v51; // [esp+38h] [ebp-34h] BYREF
    uint8_t *v52; // [esp+3Ch] [ebp-30h] BYREF
    int v53; // [esp+40h] [ebp-2Ch] BYREF
    int v54; // [esp+44h] [ebp-28h] BYREF
    int v55; // [esp+48h] [ebp-24h] BYREF
    int v56; // [esp+4Ch] [ebp-20h] BYREF
    int v57; // [esp+50h] [ebp-1Ch] BYREF
    int v58; // [esp+54h] [ebp-18h] BYREF
    int v59; // [esp+58h] [ebp-14h] BYREF
    int v60; // [esp+5Ch] [ebp-10h] BYREF
    uint8_t *v61; // [esp+60h] [ebp-Ch] BYREF
    uint8_t *v62; // [esp+64h] [ebp-8h]
    uint8_t *v63; // [esp+68h] [ebp-4h]
    v2 = (*(int (__thiscall **)(int *))(*this + 464))(this);
    v3 = ZCoordToScreenY(v2);
    v4 = *this;
    v5 = -v3;
    v42 = -v3;
    v41 = *(uint32_t *)(*(int (__thiscall **)(int *, uint8_t **))(v4 + 440))(this, &v52);
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v41);
    v7 = *this;
    v46 = v6;
    if ( (*(int (__thiscall **)(int *))(v7 + 44))(this) == 1 )
    if ( *((uint8_t *)this + 1048) )
    v8 = Array::Get(this, 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v8 + 44))(v8) == 6
    && (*(int (__thiscall **)(int))(*(uint32_t *)v8 + 388))(v8) == 16 )
    return v5 - 3;
    if ( *(uint8_t *)(*(this + 433) + 3598) )
    v10 = (uint32_t *)(*(int (__thiscall **)(int *))(*this + 444))(this);
    v11 = Cell::IsBridge(v10);
    if ( v11 )
    if ( *(uint8_t *)(v11[328] + 5819) )
    return v5 - 14;
    if ( v6[284] )
    LOWORD(v43) = g_DirectionOffsetPool + v41;
    HIWORD(v43) = HIWORD(g_DirectionOffsetPool) + HIWORD(v41);
    v45 = v43;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v45);
    LOWORD(v43) = g_CellDirectionOffsets + v41;
    HIWORD(v43) = HIWORD(g_CellDirectionOffsets) + HIWORD(v41);
    v44 = v43;
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v44);
    HIWORD(v43) = HIWORD(dword_89F694) + HIWORD(v41);
    LOWORD(v43) = dword_89F694 + v41;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v43);
    if ( v12 )
    if ( v13 && v14 )
    v15 = v12[17];
    if ( v15 == -1 )
    v16 = v13[17];
    if ( v16 == -1 )
    v17 = v14[17];
    if ( v17 != -1 && *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v17] + 693) )
    return dword_843124 + v5 - 1;
    else if ( *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v16] + 693) )
    return dword_843124 + v5 - 1;
    else if ( *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v15] + 693) )
    return dword_843124 + v5 - 1;
    v18 = this + 226;
    v19 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v54) >> 12) + 1) >> 1) + 1) & 7;
    v20 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v19]);
    LOWORD(v43) = v41 + LOWORD(Direction_X_Offsets[v19]);
    HIWORD(v43) = v20;
    v47 = v43;
    v21 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v47);
    v22 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v55) >> 12) + 1) >> 1) - 1) & 7;
    v23 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v22]);
    LOWORD(v43) = v41 + LOWORD(Direction_X_Offsets[v22]);
    HIWORD(v43) = v23;
    v48 = v43;
    v44 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48);
    v24 = ((unsigned int)((*ProgressTimer::GetValue(v18, &v56) >> 12) + 1) >> 1) & 7;
    v25 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v24]);
    LOWORD(v43) = LOWORD(Direction_X_Offsets[v24]) + v41;
    HIWORD(v43) = v25;
    v49 = v43;
    v45 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v49);
    v26 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v57) >> 12) + 1) >> 1) - 4) & 7;
    v27 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v26]);
    LOWORD(v43) = LOWORD(Direction_X_Offsets[v26]) + v41;
    HIWORD(v43) = v27;
    v50 = v43;
    v28 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v50);
    v29 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v58) >> 12) + 1) >> 1) + 3) & 7;
    v30 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v29]);
    LOWORD(v43) = v41 + LOWORD(Direction_X_Offsets[v29]);
    HIWORD(v43) = v30;
    v51 = v43;
    v31 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v51);
    v32 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) >> 1) - 3) & 7;
    v33 = HIWORD(v41) + HIWORD(Direction_X_Offsets[v32]);
    LOWORD(v43) = v41 + LOWORD(Direction_X_Offsets[v32]);
    HIWORD(v43) = v33;
    v52 = v43;
    v34 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v52);
    v43 = v34;
    if ( !v21 || !v44 || !v45 )
    return v42 - 1;
    if ( v21[284] || v44[284] || v45[284] )
    return dword_843120 + v42;
    if ( !v28 || !v31 || !v34 )
    return v42 - 1;
    if ( v28[284] || v31[284] || v34[284] )
    return dword_843120 + v42;
    if ( v46[284] )
    return v42 + dword_84311C;
    if ( (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) == 0xC
    || (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) == 0 )
    v61 = v28;
    v62 = v31;
    v63 = v43;
    else
    if ( (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) != 8
    && (((unsigned __int8)(*ProgressTimer::GetValue(v18, &v59) >> 12) + 1) & 0xE) != 4 )
    return v42 - 1;
    v61 = v21;
    v62 = v44;
    v63 = v45;
    if ( (*((uint32_t *)v46 + 80) & 0x10000) != 0 )
    return v42 - 1;
    v35 = 0;
    v36 = &v61;
    do
    if ( (*(uint32_t *)(*v36 + 320) & 0x10000) != 0 )
    return v42 - 1;
    ++v35;
    ++v36;
    while ( v35 < 3 );
    v37 = 0;
    for ( i = &v61; ; ++i )
    v39 = *(uint32_t *)(*i + 56);
    if ( v39 == 0xFFFF || v39 == 255 )
    v40 = 0;
    else
    v40 = *(unsigned __int8 *)(*i + 282);
    TechnoClass::GetTileAnimationData(v40, &v60, &v53);
    if ( v53 > 36 )
    break;
    if ( ++v37 >= 3 )
    return v42 - 1;
    return v42 - 2;
}

int __stdcall TechnoClass::DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int v6; // ebp
    int v7; // ebx
    int v8; // edx
    int result; // eax
    int *v10; // edi
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // esi
    int v15; // edx
    int v16; // esi
    int v17; // ebx
    int v18; // esi
    bool v19; // cc
    unsigned __int8 v20; // [esp+30h] [ebp-60h] BYREF
    __int16 v21; // [esp+31h] [ebp-5Fh]
    int v22; // [esp+34h] [ebp-5Ch]
    int v23; // [esp+38h] [ebp-58h]
    int v24; // [esp+3Ch] [ebp-54h]
    int v25; // [esp+40h] [ebp-50h] BYREF
    int v26; // [esp+44h] [ebp-4Ch]
    signed int v27; // [esp+48h] [ebp-48h]
    signed int v28; // [esp+4Ch] [ebp-44h]
    int v29; // [esp+50h] [ebp-40h] BYREF
    int v30; // [esp+54h] [ebp-3Ch]
    int v31; // [esp+58h] [ebp-38h] BYREF
    int v32; // [esp+5Ch] [ebp-34h]
    int v33; // [esp+60h] [ebp-30h] BYREF
    int v34; // [esp+64h] [ebp-2Ch]
    int v35; // [esp+68h] [ebp-28h] BYREF
    int v36; // [esp+6Ch] [ebp-24h]
    int v37; // [esp+70h] [ebp-20h] BYREF
    int v38; // [esp+74h] [ebp-1Ch]
    int v39; // [esp+78h] [ebp-18h] BYREF
    int v40; // [esp+7Ch] [ebp-14h]
    int v41; // [esp+80h] [ebp-10h] BYREF
    int v42; // [esp+84h] [ebp-Ch]
    int v43; // [esp+88h] [ebp-8h]
    int v44; // [esp+8Ch] [ebp-4h]
    Coord::To_Screen(TacticalClass_Instance, &a1, &v41);
    Coord::To_Screen(TacticalClass_Instance, &a4, &v31);
    v6 = -32 - ZCoordToScreenY(a3);
    v7 = -32 - ZCoordToScreenY(a6);
    v28 = abs32(v31 - v41);
    v8 = *(uint32_t *)DSurface_Hidden_2;
    v27 = abs32(v32 - v42);
    result = (*(int (__thiscall **)(int))(v8 + 132))(DSurface_Hidden_2);
    if ( (uint8_t)result )
    v10 = (int *)DSurface_Hidden_2;
    v11 = Random::Range(Randomizer_Global, 190, 270);
    v21 = 0;
    if ( v11 <= 255 )
    v20 = v11;
    else
    v20 = -1;
    LOBYTE(v21) = (char)(110 * v11) / 14;
    HIBYTE(v21) = (char)(30 * v11) / 14;
    v12 = v32;
    v13 = v42;
    if ( v32 < v42 )
    v14 = 255 >> g_BitShift_Green_0 << g_BitShift_Red;
    v29 = v31 + 1;
    v25 = v31 - 2;
    v26 = v32 + 1;
    v30 = v32 + 1;
    (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14);
    v15 = *v10;
    v25 = v31 - 2;
    v29 = v31 + 1;
    v26 = v32;
    v30 = v32;
    (*(void (__thiscall **)(int *, int *, int *, int))(v15 + 48))(v10, &v25, &v29, v14);
    v26 = v32 - 1;
    v30 = v32 + 2;
    v25 = v31 - 1;
    v29 = v31 - 1;
    (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14);
    v25 = v31;
    v30 = v32 + 2;
    v26 = v32 - 1;
    v29 = v31;
    (*(void (__thiscall **)(int *, int *, int *, int))(*v10 + 48))(v10, &v25, &v29, v14);
    v13 = v42;
    v12 = v32;
    v16 = v41;
    v44 = v12 - v13;
    v43 = v31 - v41;
    v29 = v7 - v6;
    v24 = v7 - v6;
    v17 = 100;
    v35 = v41;
    v36 = v13;
    v23 = v12 - v13;
    v22 = v31 - v41;
    v25 = 0;
    while ( 1 )
    v33 = v16 + v22 / 4;
    v34 = v13 + v23 / 4;
    v18 = v6 + v24 / 4;
    AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v35, &v33, &v20, v25 / 4 + 255, v6, v18);
    if ( v28 <= v27 )
    v39 = v35 + 1;
    v40 = v36;
    v37 = v33 + 1;
    v38 = v34;
    AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18);
    v39 = v35 - 1;
    v40 = v36;
    v37 = v33 - 1;
    v38 = v34;
    else
    v39 = v35;
    v40 = v36 + 1;
    v37 = v33;
    v38 = v34 + 1;
    AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18);
    v39 = v35;
    v40 = v36 - 1;
    v37 = v33;
    v38 = v34 - 1;
    AudioStream::DrawWaveform(v10, &DSurface_ViewBounds, &v39, &v37, &v20, v17, v6, v18);
    v35 = v33;
    v36 = v34;
    v6 = v18;
    v22 += v43;
    v23 += v44;
    result = v25 - 255;
    v17 -= 25;
    v19 = v25 - 255 < -765;
    v24 += v29;
    v25 -= 255;
    if ( v19 )
    break;
    v13 = v42;
    v16 = v41;
    return result;
}

// 0x00705D50
int  TechnoClass::IsNotBusy(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 472))(this);
    LOBYTE(result) = (uint8_t)result == 0;
    return result;
}

// 0x00705D70
int  TechnoClass::GetBuildAnim(#377 *this)
{
    int v2; // eax
    int v3; // edi
    v2 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3568);
    v3 = *(uint32_t *)(*((uint32_t *)this + 135) + 90196);
    if ( v2 )
    return *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v2 + 4) + 4 * v3) + 780);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *, void*375 *))(*(uint32_t *)this + 1088))(this, HouseClass_Player)
    || !(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 208))(this, 1) )
    return *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v3) + 780);
    return *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable
    + *(uint32_t *)((*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 208))(this, 1) + 90196))
    + 780);
}

int  TechnoClass::UpdateState(#377 *this)
{
    int v1; // edi
    int v3; // esi
    int result; // eax
    int v5; // eax
    int v6; // edi
    int v7; // eax
    int v8; // ebx
    uint32_t *v9; // eax
    int v10; // eax
    __int16 **v11; // eax
    __int16 *v12; // eax
    void *v13; // eax
    int v14; // edx
    int v15; // esi
    int v16; // ecx
    int v17; // eax
    int v18; // edx
    int v19; // esi
    int *Miles; // eax
    int v21; // eax
    int v22; // edi
    char *v23; // esi
    int v24; // eax
    int v25; // ecx
    int v26; // eax
    uint32_t *v27; // edx
    int v28; // eax
    int *v29; // eax
    int v30; // ebp
    int v31; // edi
    int v32; // ebp
    int v33; // esi
    int v34; // eax
    int v35; // ecx
    int v36; // eax
    uint32_t *v37; // edx
    int v38; // eax
    int v39; // eax
    uint8_t v40[4]; // [esp+10h] [ebp-40h] BYREF
    int v41; // [esp+14h] [ebp-3Ch]
    int v42; // [esp+18h] [ebp-38h]
    int v43; // [esp+1Ch] [ebp-34h]
    int v44[4]; // [esp+28h] [ebp-28h] BYREF
    uint32_t v45[6]; // [esp+38h] [ebp-18h] BYREF
    uint32_t *v46; // [esp+54h] [ebp+4h]
    unsigned int v47; // [esp+58h] [ebp+8h]
    int v48; // [esp+5Ch] [ebp+Ch] BYREF
    int v49; // [esp+60h] [ebp+10h]
    int *v50; // [esp+64h] [ebp+14h]
    uint32_t *appended; // [esp+68h] [ebp+18h]
    const void *v52; // [esp+6Ch] [ebp+1Ch]
    int v53; // [esp+70h] [ebp+20h]
    int v54; // [esp+74h] [ebp+24h]
    int v55; // [esp+78h] [ebp+28h]
    v1 = v55;
    v3 = 0x2000;
    if ( !v55 )
    result = (*(int (__thiscall **)(void*377 *, uint32_t, uint32_t))(*(uint32_t *)this + 104))(this, 0, 0) - 1;
    switch ( result )
    case 0:
    v3 = 8194;
    goto LABEL_8;
    case 1:
    case 2:
    v3 = 8196;
    goto LABEL_8;
    case 3:
    if ( *((uint32_t *)this + 137) )
    v3 = 8204;
    else
    v3 = 8202;
    goto LABEL_8;
    case 4:
    return result;
    default:
    goto LABEL_8;
    return result;
    LABEL_8:
    if ( ((*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 468))(this)
    || (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 472))(this))
    && ((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 1 || !*((uint8_t *)this + 1747)) )
    if ( this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    && *(uint8_t *)(*((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    ? (uint32_t *)((char *)this + 1312)
    : (uint32_t *)1312)
    + 5809) )
    v3 |= 0x2006u;
    else
    v3 |= 0x2004u;
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 196))(this)
    && ((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 1 || !*((uint8_t *)this + 1747)) )
    v3 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1084))(this, v3);
    v44[0] = *v50;
    v55 = ~v1 & (v3 | 0x800);
    v44[1] = v50[1];
    v44[2] = v50[2];
    v5 = *(uint32_t *)this;
    v44[3] = v50[3];
    v6 = (*(int (__thiscall **)(void*377 *, int))(v5 + 1124))(this, v53);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 352))(this)
    || this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    && *((uint32_t *)this + 165)
    && *(uint32_t *)(*((uint32_t *)this + 165) + 80) == ((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    ? (unsigned int)this
    : 0) )
    v7 = TechnoClass::InvulnerabilityIntensity_SetContext(v6);
    v6 = TechnoClass::CalcFlashAlpha(this, v7);
    v8 = v49;
    if ( v48 != -1 )
    if ( !v49 || *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3518) )
    v48 = -1;
    goto LABEL_41;
    if ( *(uint32_t *)(v8 + 4) )
    v9 = *(uint32_t **)(v8 + 16);
    if ( v9 && *v9 == v48 )
    goto LABEL_36;
    v10 = SortedStateVector::BinarySearch(&v48);
    if ( v10 )
    *(uint32_t *)(v8 + 16) = v10;
    LABEL_36:
    v11 = (__int16 **)(*(uint32_t *)(v8 + 16) + 4);
    goto LABEL_38;
    v11 = (__int16 **)&unk_B78824;
    LABEL_38:
    v12 = *v11;
    if ( v12 )
    Surface::BlitTechnoTo(this, v12, appended, v44, v55, v6, v54);
    return result;
    LABEL_41:
    result = (int)v46;
    if ( !*v46 || !v46[1] )
    return result;
    v13 = RenderTechnoClassVoxel((int *)this, (int)v40, v40, v46, v52, (int)appended, v44, v47, v55, v6, v54);
    v14 = *(uint32_t *)this;
    qmemcpy(v45, v13, sizeof(v45));
    v15 = v45[4];
    v55 = v45[4];
    v54 = v45[5];
    result = (*(int (__thiscall **)(void*377 *))(v14 + 44))(this);
    if ( result == 1 )
    v16 = v45[1] + appended[1];
    v17 = v45[0] + *appended;
    if ( dword_B1CFC8 <= 0 || dword_B1CFCC <= 0 )
    v18 = v45[0] + *appended;
    result = v15;
    v19 = v54;
    else if ( v15 <= 0 || v54 <= 0 )
    v18 = dword_B1CFC0;
    v16 = dword_B1CFC4;
    v19 = dword_B1CFCC;
    result = dword_B1CFC8;
    else
    v18 = dword_B1CFC0;
    v42 = dword_B1CFC8;
    v41 = dword_B1CFC4;
    v43 = dword_B1CFCC;
    if ( dword_B1CFC0 > v17 )
    v18 = v17;
    v42 += dword_B1CFC0 - v17;
    if ( dword_B1CFC4 > v16 )
    v41 = v16;
    v43 += dword_B1CFC4 - v16;
    if ( v18 + v42 < v17 + v55 )
    v42 = v17 - v18 + v55 + 1;
    v19 = v43;
    if ( v43 + v41 < v16 + v54 )
    v19 = v16 - v41 + v54 + 1;
    v16 = v41;
    result = v42;
    dword_B1CFC0 = v18;
    dword_B1CFC4 = v16;
    dword_B1CFC8 = result;
    dword_B1CFCC = v19;
    if ( v48 == -1 )
    return result;
    Miles = Miles::DriverGet();
    appended = (uint32_t *)Buffer::AppendCellData(&dword_887460, Miles, (int)v45);
    if ( appended )
    v21 = *(uint32_t *)(v8 + 8);
    if ( *(uint32_t *)(v8 + 4) + 1 <= v21 )
    LABEL_70:
    *(uint32_t *)(*(uint32_t *)v8 + 8 * *(uint32_t *)(v8 + 4)) = v48;
    *(uint32_t *)(*(uint32_t *)v8 + 8 * *(uint32_t *)(v8 + 4) + 4) = appended;
    LABEL_82:
    v39 = *(uint32_t *)(v8 + 4);
    *(uint8_t *)(v8 + 12) = 0;
    result = v39 + 1;
    *(uint32_t *)(v8 + 4) = result;
    return result;
    if ( v21 )
    v54 = *(uint32_t *)(v8 + 8);
    if ( v21 < 0 )
    goto LABEL_71;
    else
    v54 = 10;
    v22 = v21 + v54;
    v23 = (char *)__2_YAPAXI_Z(8 * (v21 + v54));
    if ( v23 )
    v24 = *(uint32_t *)(v8 + 4);
    v25 = 0;
    v55 = v22 - 1;
    if ( v24 > 0 )
    do
    v26 = 8 * v25;
    v27 = (uint32_t *)(*(uint32_t *)v8 + 8 * v25++);
    *(uint32_t *)&v23[v26] = *v27;
    *(uint32_t *)&v23[v26 + 4] = v27[1];
    while ( v25 < *(uint32_t *)(v8 + 4) );
    __3_YAXPAX_Z(*(void **)v8);
    v28 = v54 + *(uint32_t *)(v8 + 8);
    *(uint32_t *)v8 = v23;
    *(uint32_t *)(v8 + 8) = v28;
    *(uint32_t *)(v8 + 16) = 0;
    goto LABEL_70;
    LABEL_71:
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 136))(this);
    TechnoClass::ClearArrays();
    result = (int)appended;
    if ( !appended )
    v29 = Miles::DriverGet();
    result = Buffer::AppendCellData(&dword_887460, v29, (int)v45);
    appended = (uint32_t *)result;
    v30 = *(uint32_t *)(v8 + 8);
    if ( *(uint32_t *)(v8 + 4) + 1 <= v30 )
    goto LABEL_81;
    if ( v30 )
    v31 = *(uint32_t *)(v8 + 8);
    if ( v30 < 0 )
    return result;
    else
    v31 = 10;
    v32 = v31 + v30;
    result = (int)__2_YAPAXI_Z(8 * v32);
    v33 = result;
    if ( result )
    v34 = *(uint32_t *)(v8 + 4);
    v35 = 0;
    v54 = v32 - 1;
    if ( v34 > 0 )
    do
    v36 = 8 * v35;
    v37 = (uint32_t *)(*(uint32_t *)v8 + 8 * v35++);
    *(uint32_t *)(v36 + v33) = *v37;
    *(uint32_t *)(v36 + v33 + 4) = v37[1];
    while ( v35 < *(uint32_t *)(v8 + 4) );
    __3_YAXPAX_Z(*(void **)v8);
    v38 = *(uint32_t *)(v8 + 8);
    *(uint32_t *)v8 = v33;
    *(uint32_t *)(v8 + 8) = v31 + v38;
    *(uint32_t *)(v8 + 16) = 0;
    LABEL_81:
    *(uint32_t *)(*(uint32_t *)v8 + 8 * *(uint32_t *)(v8 + 4)) = v48;
    *(uint32_t *)(*(uint32_t *)v8 + 8 * *(uint32_t *)(v8 + 4) + 4) = appended;
    goto LABEL_82;
    return result;
}

// 0x00707D20
int  TechnoClass::GetCrew(uint32_t *this)
{
    int v3; // ecx
    int v4; // eax
    RulesClass *v5; // eax
    int Scatter; // esi
    bool v7; // zf
    if ( !*(uint8_t *)((*(int (__thiscall **)(uint32_t *))(*this + 132))(this) + 3277) )
    return 0;
    v3 = *(this + 135);
    v4 = *(uint32_t *)(v3 + 488);
    if ( v4 )
    if ( v4 == 1 )
    v5 = RulesClass_Instance;
    Scatter = RulesClass_Instance->Scatter;
    else
    v7 = v4 == 2;
    v5 = RulesClass_Instance;
    if ( v7 )
    Scatter = RulesClass_Instance->ContentScan;
    else
    Scatter = RulesClass_Instance->Production;
    else
    v5 = RulesClass_Instance;
    Scatter = RulesClass_Instance->AutoCrush;
    if ( *(uint32_t *)(*(uint32_t *)(v3 + 52) + 188) == -1 )
    return v5->Production;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 684))(this)
    && Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 99) < 15 )
    return RulesClass_Instance->Production;
    return Scatter;
}

// 0x00707DD0
int  TechnoClass::ComputeTotalPowerDrain(#377 *this)
{
    int v2; // ebx
    int v3; // ecx
    uint32_t *i; // esi
    int v5; // eax
    int v6; // esi
    v2 = 0;
    v3 = *((uint32_t *)this + 135);
    if ( *((uint8_t *)&RulesClass_Instance[1].GUICloseSound + 80 * *(uint32_t *)(v3 + 388) + 2)
    || *(uint32_t *)(v3 + 588) >= RulesClass_Instance[1].SelfHealInfantryFrames )
    if ( *((uint32_t *)this + 70) )
    for ( i = (uint32_t *)CCINIClass::GetDB((uint32_t *)this + 69); i; v2 += v5 )
    v5 = (*(int (__thiscall **)(uint32_t *))(*i + 384))(i);
    i = (uint32_t *)i[12];
    v6 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return v2 + (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 704))(this) + *(uint32_t *)(v6 + 1652);
}

// 0x00707E60
int  TechnoClass::ComputeScanDistance(#377 *this)
{
    int result; // eax
    char v3; // bl
    int v4; // eax
    int v5; // ebx
    int v6; // [esp+10h] [ebp+4h]
    if ( v6 == -1 )
    return -1;
    if ( !v6 )
    v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 816))(this);
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1464) && !v3 )
    return *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1464);
    return 0;
    v4 = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1464);
    if ( !v4 )
    v5 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 360))(this, 1);
    if ( (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 360))(this, 0) <= v5 )
    v4 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 360))(this, 1);
    else
    v4 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 360))(this, 0);
    result = 2 * v4;
    if ( v6 == 2 )
    if ( result >= 1792 )
    if ( result > 4096 )
    return 4096;
    else
    return 1792;
    else
    if ( result < 0 )
    return 0;
    if ( result > 4096 )
    return 4096;
    return result;
}

// 0x00708B40
int  TechnoClass::GetCostMultiplier(#377 *this)
{
    int v2; // edi
    int v3; // edi
    int v5; // ecx
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( !v2 )
    return 0;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 6 )
    return *(uint32_t *)(v2 + 1648);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0 )
    v3 = RulesClass_Instance->AIIonCannonTechCenterValue[0];
    return v3 * (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this);
    v5 = *((uint32_t *)this + 185);
    if ( v5 )
    return *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v5 + 132))(v5) + 1648);
    else
    return *(uint32_t *)(v2 + 1648);
}

// 0x00708BC0
int  TechnoClass::ComputeAverageValue(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint32_t *)(result + 2048) )
    Float4::Sum((float *)this + 207);
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return result;
}

// 0x00708C10
int  TechnoClass::GetGlobalValue(#377 *this)
{
    uint32_t *v2; // [esp+8h] [ebp+8h]
    *v2 = g_TechnoHouseState;
    return 0;
}

// 0x00708D90
int  TechnoClass::SetMoveDestination(#377 *this)
{
    int result; // eax
    int v3; // [esp+Ch] [ebp+4h]
    LOBYTE(result) = MoveFeedback;
    if ( MoveFeedback && v3 != -1 )
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( (uint8_t)result )
    *((uint32_t *)this + 316) = v3;
    return result;
}

// 0x00708DC0
int  TechnoClass::GetPrimaryTargetOrFallback(#377 *this)
{
    int v2; // edi
    int v3; // eax
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1372) == -1 )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 856))(this);
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(v2 + 852))(this, *(uint32_t *)(v3 + 1372));
}

// 0x00708EB0
int  TechnoClass::SelectRandomTarget(#377 *this)
{
    int v2; // eax
    int v3; // ecx
    int result; // eax
    unsigned int v5; // edi
    int v6; // ecx
    int v7; // eax
    int v8; // ecx
    unsigned int v9; // edi
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    if ( *((uint32_t *)this + 183) )
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = *(uint32_t *)(v2 + 1088);
    result = v2 + 1072;
    if ( !v3 )
    return result;
    v5 = Random::State(Randomizer_Global);
    v6 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1072;
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v6 + 4) + 4 * (v5 % *(uint32_t *)(v6 + 16))));
    if ( !*((uint8_t *)this + 456) )
    v11 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v12 = *(uint32_t *)(v11 + 1060);
    result = v11 + 1044;
    if ( !v12 )
    return result;
    v5 = Random::State(Randomizer_Global);
    v6 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1044;
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v6 + 4) + 4 * (v5 % *(uint32_t *)(v6 + 16))));
    v7 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v8 = *(uint32_t *)(v7 + 1116);
    result = v7 + 1100;
    if ( v8 )
    v9 = Random::State(Randomizer_Global);
    v10 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v10 + 1104) + 4 * (v9 % *(uint32_t *)(v10 + 1116))));
    return result;
}

// 0x00708FC0
int  TechnoClass::ResponseMove_Pickup(#377 *this)
{
    int v2; // eax
    int v3; // ecx
    int result; // eax
    unsigned int v5; // edi
    int v6; // eax
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v3 = *(uint32_t *)(v2 + 1144);
    result = v2 + 1128;
    if ( v3 )
    v5 = Random::State(Randomizer_Global);
    v6 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v6 + 1132) + 4 * (v5 % *(uint32_t *)(v6 + 1144))));
    return result;
}

// 0x00709020
int  TechnoClass::GetSecondaryTargetOrFallback(#377 *this)
{
    int v2; // edi
    int v3; // eax
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1368) == -1 )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 872))(this);
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(v2 + 852))(this, *(uint32_t *)(v3 + 1368));
}

// 0x00709060
int  TechnoClass::GetTertiaryTargetOrFallback(#377 *this)
{
    int v2; // edi
    int v3; // eax
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1404) == -1 )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 872))(this);
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(v2 + 852))(this, *(uint32_t *)(v3 + 1404));
}

int  TechnoClass::VoiceAttack(#377 *this)
{
    int v2; // edi
    int v3; // eax
    int EnterGrinderSound; // edi
    int v5; // eax
    int v6; // ecx
    int result; // eax
    unsigned int v8; // edi
    int v9; // eax
    int v10; // [esp+Ch] [ebp+4h]
    v2 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 740))(this, v10);
    v3 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v2);
    if ( v3 && *(int *)(v3 + 164) < 0 && (unsigned __int8)ObjectClass::StepCleanup(this, aFv) )
    EnterGrinderSound = RulesClass_Instance->EnterGrinderSound;
    else if ( Audio::IsLoud((float *)this + 84) )
    if ( v2 )
    EnterGrinderSound = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1420);
    else
    EnterGrinderSound = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1412);
    else if ( v2 )
    EnterGrinderSound = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1416);
    else
    EnterGrinderSound = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1408);
    v5 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v6 = *(uint32_t *)(v5 + 1172);
    result = v5 + 1156;
    if ( !v6 )
    if ( EnterGrinderSound == -1 )
    return result;
    return (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 852))(this, EnterGrinderSound);
    if ( EnterGrinderSound != -1 )
    return (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 852))(this, EnterGrinderSound);
    v8 = Random::State(Randomizer_Global);
    v9 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 852))(
    this,
    *(uint32_t *)(*(uint32_t *)(v9 + 1160) + 4 * (v8 % *(uint32_t *)(v9 + 1172))));
}

int  TechnoClass::BeginFiringSequence(#377 *this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // eax
    uint32_t *v5; // ecx
    int v6; // edi
    int v7; // eax
    int v8; // eax
    int v10; // [esp+Ch] [ebp-8h]
    int v11; // [esp+18h] [ebp+4h]
    char v12; // [esp+1Ch] [ebp+8h]
    *((uint32_t *)this + 319) = CurrentFrame;
    if ( *((uint32_t *)this + 43) == 11 )
    v2 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2) + RulesClass_Instance->AIIonCannonEngineerValue[0];
    else
    v2 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2) + RulesClass_Instance->AIIonCannonEngineerValue[1];
    *((uint32_t *)this + 96) = CurrentFrame;
    *((uint32_t *)this + 97) = v10;
    *((uint32_t *)this + 98) = v2;
    if ( *((uint32_t *)this + 173) && *((uint8_t *)this + 1292) )
    v3 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 740))(this, *((uint32_t *)this + 173));
    v4 = (*(int (__thiscall **)(void*377 *, uint32_t, int, int))(*(uint32_t *)this + 960))(this, *((uint32_t *)this + 173), v3, 1);
    if ( v4 == 6 )
    v5 = (uint32_t *)*((uint32_t *)this + 180);
    if ( v5 )
    UnitClass::ProcessIdleOrders(v5);
    goto LABEL_12;
    goto LABEL_11;
    if ( v4 == 5 || v4 == 8 )
    LABEL_11:
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    LABEL_12:
    if ( !*((uint32_t *)this + 173) )
    v6 = (*(int (__thiscall **)(void*377 *, int, int, uint32_t))(*(uint32_t *)this + 964))(this, v12 & 3, v11, 0);
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1712) )
    SelectTargetByWeight(this, (int)this);
    else
    if ( v6 )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 968))(this, v6);
    v7 = (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 740))(this, *((uint32_t *)this + 173));
    if ( v6 )
    v6 = (*(uint8_t *)(v6 + 20) & 1) != 0 ? v6 : 0;
    v8 = *(uint32_t *)(*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1016))(this, v7);
    if ( v6 && v8 && !*(uint8_t *)(*(uint32_t *)(v8 + 160) + 674) )
    *(uint32_t *)(v6 + 112) -= TechnoClass::ComputeAudioFalloffDamage(this, v6, v8);
    return *((uint32_t *)this + 173) != 0;
}

// 0x007099E0
int  TechnoClass::IsTimerExpired(#377 *this)
{
    int v1; // edx
    int result; // eax
    v1 = *((uint32_t *)this + 90);
    result = *((uint32_t *)this + 92);
    if ( v1 != -1 )
    if ( (int)CurrentFrame - v1 < result )
    result -= (int)CurrentFrame - v1;
    LOBYTE(result) = result == 0;
    return result;
    result = 0;
    LOBYTE(result) = result == 0;
    return result;
}

// 0x00709A40
char  TechnoClass::CompleteFactoryProduction(uint32_t *this, int a2, int a3)
{
    uint32_t *v4; // ecx
    v4 = (uint32_t *)*(this + 157);
    if ( v4 && v4[10] )
    FactoryClass::CompleteItem(v4);
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 1232))(this)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *))(*this + 1072))(this) )
    BuildingClass::GetObjectData(this);
    return 0;
}

int  TechnoClass::DrawPips(#377 *this)
{
    int v2; // esi
    int v3; // ecx
    int v4; // eax
    int v5; // edx
    int v6; // edx
    int v7; // ebx
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int result; // eax
    int v12; // edi
    int v13; // ebx
    int v14; // edx
    void *v15; // ebx
    int v16; // edi
    int v17; // ebx
    int v18; // eax
    int v19; // edx
    int v20; // eax
    int v21; // ebx
    int v22; // eax
    void *v23; // edi
    int v24; // edi
    int v25; // eax
    uint32_t *DB; // edi
    uint32_t *v27; // ebx
    int v28; // eax
    uint32_t *v29; // ebx
    int v30; // eax
    int v31; // eax
    uint32_t *v32; // ecx
    int v33; // eax
    int v34; // eax
    uint32_t *v35; // ecx
    int v36; // edx
    signed int v37; // edi
    unsigned int v38; // edi
    unsigned int v39; // ebx
    signed int v40; // ecx
    bool v41; // zf
    int v42; // eax
    void *v43; // ebx
    int v44; // eax
    int v45; // edi
    int v46; // ebx
    int v47; // ecx
    int v48; // eax
    int v49; // eax
    signed int v50; // eax
    int v51; // edx
    int v52; // eax
    int v53; // ebx
    int v54; // edi
    unsigned int v55; // edx
    int v56; // ebx
    int v57; // eax
    int v58; // ecx
    signed int v59; // edi
    int v60; // edi
    int v61; // edx
    int v62; // ecx
    int v63; // eax
    int v64; // edx
    unsigned int v65; // ebx
    int v66; // edi
    int v67; // esi
    int v68; // ecx
    int v69; // edx
    unsigned int v70; // edi
    int v71; // edi
    int v72; // esi
    uint32_t *TextBoundingRect; // eax
    int v74; // ebx
    int v75; // ecx
    int v76; // edx
    int v77; // ebx
    unsigned int v78; // eax
    int v79; // edx
    int v80; // esi
    int v81; // esi
    unsigned int v82; // ecx
    int v83; // edx
    int v84; // esi
    int v85; // [esp-10h] [ebp-84h]
    char v86; // [esp+12h] [ebp-62h]
    bool v87; // [esp+13h] [ebp-61h] BYREF
    void *Block[2]; // [esp+14h] [ebp-60h] BYREF
    int v89; // [esp+1Ch] [ebp-58h]
    float v90; // [esp+20h] [ebp-54h]
    signed int v91; // [esp+24h] [ebp-50h]
    signed int v92; // [esp+28h] [ebp-4Ch]
    double v93; // [esp+2Ch] [ebp-48h] BYREF
    int v94; // [esp+34h] [ebp-40h]
    int v95; // [esp+38h] [ebp-3Ch]
    int v96; // [esp+3Ch] [ebp-38h]
    double v97; // [esp+40h] [ebp-34h] BYREF
    int v98; // [esp+48h] [ebp-2Ch]
    int v99; // [esp+4Ch] [ebp-28h]
    int v100; // [esp+50h] [ebp-24h] BYREF
    int v101; // [esp+54h] [ebp-20h]
    int v102; // [esp+58h] [ebp-1Ch] BYREF
    int v103; // [esp+5Ch] [ebp-18h]
    wchar_t Buffer[10]; // [esp+60h] [ebp-14h] BYREF
    int *v105; // [esp+78h] [ebp+4h]
    int *v106; // [esp+80h] [ebp+Ch]
    v102 = 4;
    v2 = 2;
    v3 = v105[1] - 1;
    v100 = *v105 + 6;
    v4 = *(uint32_t *)this;
    v101 = v3;
    (*(void (__thiscall **)(void*377 *))(v4 + 136))(this);
    v5 = *(uint32_t *)this;
    v89 = FileSystem_PIPS_SHP;
    (*(void (__thiscall **)(void*377 *))(v5 + 136))(this);
    v6 = *(uint32_t *)this;
    v96 = FileSystem_PIPS_SHP;
    (*(void (__thiscall **)(void*377 *))(v6 + 136))(this);
    v7 = FileSystem_PIPS2_SHP;
    v8 = *(uint32_t *)this;
    LODWORD(v93) = FileSystem_PIPS2_SHP;
    v9 = (*(int (__thiscall **)(void*377 *))(v8 + 44))(this);
    v87 = v9 == 6;
    if ( v9 != 6 )
    v10 = *v105;
    v101 = v105[1];
    v100 = v10 - 5;
    v2 = 0;
    v102 = 4;
    v89 = v7;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 15 )
    v100 += 11;
    if ( !v87 || (result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this), *(uint32_t *)(result + 980) != 2) )
    v90 = *(float *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3420);
    if ( SLODWORD(v90) > 0 )
    v12 = 0;
    *(float *)&v92 = COERCE_FLOAT(SpawnManagerClass::CountDockedSpawns(*((int **)this + 180)));
    v13 = 0;
    *(float *)&v91 = 0.0;
    do
    Block[0] = (void *)(v13 + v100);
    HIDWORD(v97) = v91 + v101;
    LODWORD(v97) = v13 + v100;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    v12++ < v92,
    (int *)&v97,
    v106,
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
    v13 += v102;
    v91 += v2;
    while ( v12 < SLODWORD(v90) );
    if ( v87 )
    v14 = *(uint32_t *)this;
    v15 = *(void **)(*((uint32_t *)this + 328) + 5504);
    Block[0] = v15;
    v90 = COERCE_FLOAT((*(int (__thiscall **)(void*377 *))(v14 + 1032))(this));
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5508) )
    if ( (int)v15 > 0 )
    v16 = 0;
    v17 = 0;
    *(float *)&v91 = 0.0;
    do
    if ( v16 < SLODWORD(v90) && (v18 = *(uint32_t *)(*((uint32_t *)this + 418) + 4 * v16)) != 0 )
    v92 = *(signed int *)(*(uint32_t *)(v18 + 1728) + 3584);
    else
    v92 = 6;
    LODWORD(v97) = v17 + v100;
    HIDWORD(v97) = v101 + v91;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    v92,
    (int *)&v97,
    v106,
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
    ++v16;
    v17 += v102;
    v91 += v2;
    while ( v16 < (int)Block[0] );
    if ( *(int *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1504) <= 0 )
    v90 = COERCE_FLOAT((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 696))(this));
    v42 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v43 = (void *)(*(int (__thiscall **)(int))(*(uint32_t *)v42 + 116))(v42);
    v44 = *(uint32_t *)this;
    Block[0] = v43;
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(v44 + 132))(this) + 980) == 5 )
    v45 = 0;
    if ( (int)v43 > 0 )
    v46 = 0;
    *(float *)&v92 = 0.0;
    do
    v91 = v45 < SLODWORD(v90);
    LODWORD(v97) = v46 + v100;
    HIDWORD(v97) = v101 + v92;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    v91,
    (int *)&v97,
    v106,
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
    ++v45;
    v46 += v102;
    v92 += v2;
    while ( v45 < (int)Block[0] );
    v47 = *((uint32_t *)this + 175);
    v87 = 0;
    if ( v47 && CaptureManagerClass::IsOverloading(v47, &v87) )
    LODWORD(v97) = v100 + v102 * v45;
    HIDWORD(v97) = v101 + v45 * v2;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    4 - v87,
    (int *)&v97,
    v106,
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
    if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 980) == 2 )
    *(float *)&v91 = FloatArray::Get((float *)this + 207, 0);
    *(float *)&v92 = FloatArray::Get((float *)this + 207, 2);
    *(float *)&v93 = FloatArray::Get((float *)this + 207, 3);
    v90 = FloatArray::Get((float *)this + 207, 1);
    v48 = *(uint32_t *)this;
    v97 = (double)(int)Block[0];
    v93 = *(float *)&v93 + *(float *)&v92 + *(float *)&v91;
    v49 = (*(int (__thiscall **)(void*377 *))(v48 + 132))(this);
    v50 = Math::RoundToInt(v93 / (double)*(int *)(v49 + 2048) * v97 + 0.5);
    v51 = *(uint32_t *)this;
    v93 = v90;
    v91 = v50;
    v52 = (*(int (__thiscall **)(void*377 *))(v51 + 132))(this);
    v92 = Math::RoundToInt(v93 / (double)*(int *)(v52 + 2048) * v97 + 0.5);
    if ( (int)Block[0] > 0 )
    v53 = 0;
    v54 = 0;
    v90 = *(float *)Block;
    do
    v55 = 0;
    if ( v92 <= 0 )
    if ( v91 > 0 )
    v55 = 2;
    --v91;
    else
    v55 = 5;
    --v92;
    LODWORD(v97) = v54 + v100;
    HIDWORD(v97) = v53 + v101;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    v55,
    (int *)&v97,
    v106,
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
    v54 += v102;
    v53 += v2;
    --LODWORD(v90);
    while ( v90 != 0.0 );
    else if ( *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 980) == 1 )
    LODWORD(v97) = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 996);
    v56 = LODWORD(v97);
    if ( LODWORD(v97) )
    v60 = 0;
    if ( SLODWORD(v97) > 0 )
    v61 = 0;
    LODWORD(v90) = (int)Block[0] / SLODWORD(v97) - 1;
    *(float *)&v91 = 0.0;
    do
    v62 = LODWORD(v90);
    v92 = 14;
    if ( v90 >= 0.0 )
    v89 = -v56;
    v63 = v60 + v56 * LODWORD(v90);
    while ( v63 >= *((uint32_t *)this + 191) )
    --v62;
    v63 += v89;
    if ( v62 < 0 )
    goto LABEL_87;
    v92 = v62 + 15;
    LABEL_87:
    Block[0] = (void *)(v100 + v61);
    Block[1] = (void *)(v101 + v60 * v2 - 3);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    SLODWORD(v93),
    v92,
    (int *)Block,
    v106,
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
    v56 = LODWORD(v97);
    ++v60;
    v61 = v102 + v91;
    v91 += v102;
    while ( v60 < SLODWORD(v97) );
    else
    v57 = LODWORD(v90);
    v58 = 0;
    *(float *)&v92 = 0.0;
    if ( (int)Block[0] > 0 )
    v59 = 0;
    *(float *)&v91 = 0.0;
    do
    if ( v57 > 0 )
    LODWORD(v90) = v57 - 1;
    HIDWORD(v97) = v101 + v58 * v2 - 3;
    LODWORD(v97) = v100 + v59;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    SLODWORD(v93),
    0xDu,
    (int *)&v97,
    v106,
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
    v58 = v92;
    v57 = LODWORD(v90);
    v59 = v91;
    ++v58;
    v59 += v102;
    v92 = v58;
    v91 = v59;
    while ( v58 < (int)Block[0] );
    else
    v19 = *(uint32_t *)this;
    v97 = 0.0;
    v20 = (*(int (__thiscall **)(void*377 *))(v19 + 136))(this);
    v21 = (*(int (__thiscall **)(int))(*(uint32_t *)v20 + 116))(v20);
    v22 = *(uint32_t *)this;
    v92 = v21;
    (*(void (__thiscall **)(void*377 *))(v22 + 132))(this);
    v23 = __2_YAPAXI_Z(4 * v21);
    Block[0] = v23;
    if ( v21 > 0 )
    memset(v23, 0, 4 * v21);
    v91 = *((signed int *)this + 69);
    v24 = HouseClass::SumPowerDrain((int *)this + 69) - 1;
    if ( this
    && (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 6
    && (v25 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this),
    InfantryClass::updateDeployAnimation(v25 == 6 ? this : 0)) )
    DB = (uint32_t *)CCINIClass::GetDB((uint32_t *)this + 69);
    v90 = 0.0;
    if ( v91 > 0 )
    v27 = Block[0];
    do
    if ( !DB )
    break;
    if ( (*(int (__thiscall **)(uint32_t *))(*DB + 44))(DB) == 15 )
    *v27 = *(uint32_t *)(DB[432] + 3580);
    else
    v28 = -((*(int (__thiscall **)(uint32_t *))(*DB + 44))(DB) != 1);
    LOBYTE(v28) = v28 & 0xFD;
    *v27 = v28 + 4;
    DB = (uint32_t *)DB[12];
    ++v27;
    ++LODWORD(v90);
    while ( SLODWORD(v90) < v91 );
    else
    if ( v24 >= v92 )
    __3_YAXPAX_Z(Block[0]);
    return result;
    v29 = (uint32_t *)CCINIClass::GetDB((uint32_t *)this + 69);
    v90 = 0.0;
    if ( v91 > 0 )
    do
    if ( !v29 )
    break;
    if ( (*(int (__thiscall **)(uint32_t *))(*v29 + 44))(v29) == 15 )
    v30 = (*(int (__thiscall **)(uint32_t *))(*v29 + 132))(v29);
    v31 = Math::RoundToInt(*(double *)(v30 + 896) - 1.0);
    if ( v31 > 0 )
    v32 = (char *)Block[0] + 4 * v24;
    v24 -= v31;
    do
    *v32-- = 3;
    --v31;
    while ( v31 );
    *((uint32_t *)Block[0] + v24) = *(uint32_t *)(v29[432] + 3580);
    else if ( (*(int (__thiscall **)(uint32_t *))(*v29 + 44))(v29) == 1 )
    v33 = (*(int (__thiscall **)(uint32_t *))(*v29 + 132))(v29);
    v34 = Math::RoundToInt(*(double *)(v33 + 896) - 1.0);
    if ( v34 > 0 )
    v35 = (char *)Block[0] + 4 * v24;
    v24 -= v34;
    do
    *v35-- = 3;
    --v34;
    while ( v34 );
    *((uint32_t *)Block[0] + v24) = 5;
    else
    *((uint32_t *)Block[0] + v24) = 1;
    v29 = (uint32_t *)v29[12];
    --v24;
    ++LODWORD(v90);
    while ( SLODWORD(v90) < v91 );
    v36 = *(uint32_t *)this;
    v37 = 0;
    *(float *)&v91 = 0.0;
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(v36 + 132))(this) + 2053) )
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    *(uint32_t *)Block[0],
    &v100,
    v106,
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
    v37 = 1;
    v91 = 1;
    HIDWORD(v97) = 2 * v2;
    LODWORD(v97) = 2 * v102;
    if ( v37 < v92 )
    v38 = v102 * v91;
    v39 = v91 * v2;
    v40 = v92 - v91;
    v91 = (signed int)Block[0] + 4 * v91;
    v92 = v40;
    do
    LODWORD(v93) = v38 + LODWORD(v97) + v100;
    HIDWORD(v93) = v39 + v101 + HIDWORD(v97);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v89,
    *(uint32_t *)v91,
    (int *)&v93,
    v106,
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
    v38 += v102;
    v39 += v2;
    v41 = v92 == 1;
    v91 += 4;
    --v92;
    while ( !v41 );
    __3_YAXPAX_Z(Block[0]);
    v64 = *(uint32_t *)this;
    v86 = 0;
    v87 = 0;
    v65 = 13;
    v66 = 0;
    v67 = 0;
    if ( ((*(int (__thiscall **)(void*377 *))(v64 + 44))(this) == 15
    || (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 1
    && *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3479))
    && TechnoClass::processExperienceGain(*((uint32_t **)this + 135)) )
    v86 = 1;
    if ( (int)CurrentFrame % RulesClass_Instance->SelfHealInfantryFrames <= 5
    && *((uint32_t *)this + 27) < *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 160) )
    v87 = 1;
    v65 = 13;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 1
    && !*(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3479)
    && TechnoClass::updateVeterancy(*((uint32_t **)this + 135)) )
    v86 = 1;
    if ( (int)CurrentFrame % RulesClass_Instance->SelfHealUnitFrames <= 5
    && *((uint32_t *)this + 27) < *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 160) )
    v87 = 1;
    v65 = 20;
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 1 )
    v66 = 38;
    v67 = -32;
    else if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) == 15 )
    v66 = 19;
    v67 = -35;
    if ( v86 )
    v102 = v100 + v66;
    v103 = v67 + v101;
    if ( v87 )
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v96,
    v65,
    &v102,
    v106,
    1537,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    else
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v96,
    v65,
    &v102,
    v106,
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
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this);
    if ( result != 6 )
    v68 = v105[1];
    v69 = *(uint32_t *)this;
    v102 = *v105 - 10;
    v103 = v68 + 10;
    result = (*(int (__thiscall **)(void*377 *, int *, int *, int *))(v69 + 1112))(this, &v102, v105, v106);
    v70 = *((uint32_t *)this + 133);
    if ( v70 <= 9 )
    v71 = v70 + 1;
    if ( v71 == 10 )
    v71 = 0;
    v72 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 15 ? -33 : -36;
    swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, v71 >= 10 ? 0 : (const wchar_t *const)v71);
    v85 = v105[1] + v72 - 3;
    v102 = *v105 - 4;
    v103 = v85;
    TextBoundingRect = GetTextBoundingRect(&v97, (int)Buffer, v102, v85, 73, 2, -2);
    LODWORD(v93) = *TextBoundingRect;
    v74 = *v106;
    HIDWORD(v93) = TextBoundingRect[1];
    v75 = TextBoundingRect[2];
    v94 = v75;
    v76 = TextBoundingRect[3];
    LODWORD(v97) = v74;
    v77 = v106[1];
    v95 = v76;
    HIDWORD(v97) = v77;
    v78 = 0;
    v79 = 0;
    v80 = v106[3];
    v98 = v106[2];
    v99 = v80;
    if ( v75 <= 0 || v95 <= 0 || v106[2] <= 0 || v106[3] <= 0 )
    goto LABEL_134;
    if ( SLODWORD(v97) < SLODWORD(v93) )
    v98 += LODWORD(v97) - LODWORD(v93);
    LODWORD(v97) = LODWORD(v93);
    if ( v98 < 1 )
    goto LABEL_134;
    if ( SHIDWORD(v97) < SHIDWORD(v93) )
    v99 += HIDWORD(v97) - HIDWORD(v93);
    HIDWORD(v97) = HIDWORD(v93);
    if ( v99 < 1 )
    goto LABEL_134;
    if ( LODWORD(v97) + v98 > v75 + LODWORD(v93) )
    v98 = LODWORD(v93) + v75 - LODWORD(v97);
    if ( v98 < 1
    || (v99 + HIDWORD(v97) <= HIDWORD(v93) + v95 ? (v81 = v99) : (v81 = v95 + HIDWORD(v93) - HIDWORD(v97)), v81 < 1) )
    LABEL_134:
    v82 = 0;
    v81 = 0;
    else
    v82 = HIDWORD(v97);
    v78 = LODWORD(v97);
    v79 = v98;
    v93 = COERCE_DOUBLE(__PAIR64__(v82, v78));
    v94 = v79 + 1;
    v83 = *((uint32_t *)this + 135) + 22265;
    v95 = v81;
    LODWORD(v93) = v78 - 1;
    LOWORD(v97) = *(_WORD *)v83;
    BYTE2(v97) = *(uint8_t *)(v83 + 2);
    v84 = (LOBYTE(v97) >> g_BitShift_Green_0 << g_BitShift_Red)
    | (BYTE1(v97) >> g_BitMask_Blue << g_BitMask_Green)
    | (BYTE2(v97) >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(int, double *, uint32_t))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v93, 0);
    (*(void (__thiscall **)(int, double *, int))(*(uint32_t *)DSurface_Hidden_2 + 88))(DSurface_Hidden_2, &v93, v84);
    return (int)globalHelper_0A66D0((int *)&v97, (int)Buffer, DSurface_Hidden_2, v106, (int)&v102, v84, 0, 73, -1, 1);
    return result;
}

int  TechnoClass::DrawVeterancy(#377 *this)
{
    int v2; // ebp
    unsigned int v3; // ebx
    int result; // eax
    int v5; // edx
    int v6; // eax
    int v7; // [esp+10h] [ebp-8h] BYREF
    int v8; // [esp+14h] [ebp-4h]
    uint32_t *v9; // [esp+1Ch] [ebp+4h]
    int *v10; // [esp+20h] [ebp+8h]
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 136))(this);
    v2 = FileSystem_PIPS_SHP;
    v3 = -1;
    if ( Audio::IsMediumVolume((float *)this + 84) )
    v3 = 14;
    if ( Audio::IsLoud((float *)this + 84) )
    v3 = 15;
    result = VeinholeClass::GetState((float *)this + 84);
    if ( (uint8_t)result )
    v3 = 19;
    else if ( v3 == -1 )
    return result;
    v5 = *(uint32_t *)this;
    v6 = *v9 + 5;
    v8 = v9[1] + 2;
    v7 = v6;
    if ( (*(int (__thiscall **)(void*377 *))(v5 + 44))(this) != 15 )
    v7 += 5;
    v8 += 4;
    DrawToSurfaceSHP(DSurface_Hidden_2, FileSystem_THEATER_PAL, v2, v3, &v7, v10, 3584, 0, -2, 0, 1000, 0, 0, 0, 0, 0);
    return result;
}

int  TechnoClass::DrawPowerIndicator(#377 *this)
{
    int result; // eax
    wchar_t *v3; // esi
    int v4; // eax
    wchar_t *StringCSF; // eax
    int *TextBoundingRect; // eax
    int *v7; // eax
    wchar_t *v8; // edx
    unsigned __int8 *v9; // eax
    int v10; // esi
    wchar_t *v11; // eax
    int v12; // edx
    int *v13; // eax
    int *v14; // eax
    unsigned __int8 *v15; // edi
    int v16; // esi
    const wchar_t *v17; // [esp+Ch] [ebp-144h]
    int v18; // [esp+20h] [ebp-130h] BYREF
    int v19; // [esp+24h] [ebp-12Ch] BYREF
    int v20; // [esp+28h] [ebp-128h]
    int v21; // [esp+2Ch] [ebp-124h]
    wchar_t *v22; // [esp+30h] [ebp-120h] BYREF
    uint32_t v23[3]; // [esp+34h] [ebp-11Ch] BYREF
    uint32_t v24[4]; // [esp+40h] [ebp-110h] BYREF
    uint8_t v25[4]; // [esp+50h] [ebp-100h] BYREF
    wchar_t Buffer[126]; // [esp+54h] [ebp-FCh] BYREF
    int *v27; // [esp+158h] [ebp+8h]
    int *v28; // [esp+15Ch] [ebp+Ch]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this);
    if ( result != 6 || (result = *(uint32_t *)(*((uint32_t *)this + 328) + 3808), result <= 0) )
    LABEL_5:
    LOBYTE(result) = *((uint8_t *)this + 979);
    if ( !(uint8_t)result )
    return result;
    goto LABEL_6;
    if ( !*((uint8_t *)this + 979) )
    v22 = (wchar_t *)(*((uint32_t *)this + 135) + 36);
    v3 = v22;
    v4 = (*(int (__stdcall **)(wchar_t *))(*(uint32_t *)v3 + 36))(v3);
    v17 = (const wchar_t *)(*(int (__stdcall **)(wchar_t *, int))(*(uint32_t *)v3 + 32))(v3, v4);
    StringCSF = GetStringCSF(aTxtPowerDrain2, 0, g_Str_File_Techno_CPP, 15483);
    swprintf(Buffer, (const size_t)StringCSF, v17);
    TextBoundingRect = GetTextBoundingRect(v23, (int)Buffer, *v27, v27[1], 329, 4, 2);
    v19 = *TextBoundingRect;
    v20 = TextBoundingRect[1];
    v21 = TextBoundingRect[2];
    v22 = (wchar_t *)TextBoundingRect[3];
    v7 = ClipRectIntersection(v23, &v19, v28, 0, 0);
    v19 = *v7;
    v20 = v7[1];
    v21 = v7[2];
    v8 = (wchar_t *)v7[3];
    v9 = (unsigned __int8 *)(*((uint32_t *)this + 135) + 22265);
    v22 = v8;
    v10 = (*v9 >> g_BitShift_Green_0 << g_BitShift_Red)
    | (v9[1] >> g_BitMask_Blue << g_BitMask_Green)
    | (v9[2] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__thiscall **)(int, int *))(*(uint32_t *)DSurface_Hidden_2 + 20))(DSurface_Hidden_2, &v19);
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 88))(DSurface_Hidden_2, &v18, v10);
    result = (int)RenderTextLabel((int *)&v22, (int)v25, DSurface_Hidden_2, v28, (int)v27, v10, 0, 329, 1);
    goto LABEL_5;
    LABEL_6:
    v11 = GetStringCSF(aTxtPrimary, 0, g_Str_File_Techno_CPP, 15502);
    v12 = *(uint32_t *)this;
    v22 = v11;
    if ( (*(int (__thiscall **)(void*377 *))(v12 + 44))(this) == 6
    && BuildingTypeClass::GetFoundationWidth(*((uint32_t **)this + 328)) == 1 )
    v22 = GetStringCSF(aTxtPri, 0, g_Str_File_Techno_CPP, 15504);
    v13 = GetTextBoundingRect(v24, (int)v22, *v27, v27[1], 329, 4, 2);
    v18 = *v13;
    v19 = v13[1];
    v20 = v13[2];
    v21 = v13[3];
    v14 = ClipRectIntersection(v24, &v18, v28, 0, 0);
    v15 = (unsigned __int8 *)*((uint32_t *)this + 135);
    v18 = *v14;
    v19 = v14[1];
    v20 = v14[2];
    v21 = v14[3];
    v16 = (v15[22265] >> g_BitShift_Green_0 << g_BitShift_Red)
    | (v15[22266] >> g_BitMask_Blue << g_BitMask_Green)
    | (v15[22267] >> g_BitMask_Red << g_BitShift_Blue);
    (*(void (__stdcall **)(int *, uint32_t))(*(uint32_t *)DSurface_Hidden_2 + 20))(&v18, 0);
    (*(void (__thiscall **)(int, int *, int))(*(uint32_t *)DSurface_Hidden_2 + 88))(DSurface_Hidden_2, &v18, v16);
    return (int)RenderTextLabel((int *)&v22, (int)v22, DSurface_Hidden_2, v28, (int)v27, v16, 0, 329, 1);
}

// 0x0070ADA0
int  TechnoClass::Vt46Thunk(#377 *this)
{
    int v2; // eax
    v2 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(int, uint32_t, uint32_t))(*(uint32_t *)v2 + 184))(v2, *((uint32_t *)this + 135), 0);
}

// 0x0070ADC0
int  TechnoClass::RevealAreaSmall(#377 *this)
{
    int result; // eax
    int v3; // eax
    int v4; // eax
    int v5; // ebp
    int v6; // edx
    int v7; // ecx
    int v8; // [esp+8h] [ebp-10h]
    int v9; // [esp+Ch] [ebp-Ch] BYREF
    int v10; // [esp+10h] [ebp-8h]
    int v11; // [esp+14h] [ebp-4h]
    char v12; // [esp+1Ch] [ebp+4h]
    char v13; // [esp+20h] [ebp+8h]
    LOBYTE(result) = *((uint8_t *)this + 981);
    if ( (uint8_t)result )
    if ( !*(uint8_t *)(*(uint32_t *)(*((uint32_t *)this + 135) + 52) + 422) || (result = GameMode_Current[0]) == 0 )
    v9 = *((uint32_t *)this + 39);
    v10 = *((uint32_t *)this + 40);
    v3 = 10 * (*((uint32_t *)this + 41) / RulesClass_Instance[1].DominatorWarhead);
    if ( v3 > *((char *)this + 1056) )
    v12 = 0;
    *((uint8_t *)this + 1056) = v3;
    v4 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v8 = Math::RoundToInt((double)*(int *)(v4 + 1512) * ((double)*((char *)this + 1056) * 0.01 + 1.0));
    if ( Audio::IsMediumVolume((float *)this + 84) || Audio::IsLoud((float *)this + 84) )
    if ( (v5 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this),
    Audio::IsMediumVolume((float *)this + 84))
    && *(uint8_t *)(v5 + 673)
    || Audio::IsLoud((float *)this + 84) && (*(uint8_t *)(v5 + 673) || *(uint8_t *)(v5 + 691)) )
    if ( *(double *)&RulesClass_Instance->ChargeToDrainRatio != 0.0 )
    v8 = Math::RoundToInt((double)v8 * *(double *)&RulesClass_Instance->ChargeToDrainRatio);
    result = v8;
    if ( v8 )
    v6 = *((uint32_t *)this + 40);
    v9 = *((uint32_t *)this + 39);
    v7 = *((uint32_t *)this + 41);
    v10 = v6;
    v11 = v7;
    return MapClass::RevealArea0((int *)&MapClass_Instance, &v9, v8, *((void*375 **)this + 135), v12, v13, 0, 1, 1);
    return result;
}

// 0x0070AF50
int  TechnoClass::ScanForEnemies(#377 *this)
{
    int result; // eax
    int *v3; // edi
    int v4; // eax
    int v5; // eax
    int v6; // ebx
    int v7; // eax
    int v8; // ecx
    int v9; // edx
    int v10; // edx
    int v11; // ecx
    int v12; // [esp+Ch] [ebp-14h]
    int v13; // [esp+14h] [ebp-Ch] BYREF
    int v14; // [esp+18h] [ebp-8h]
    int v15; // [esp+1Ch] [ebp-4h]
    char v16; // [esp+24h] [ebp+4h]
    int v17; // [esp+28h] [ebp+8h]
    char v18; // [esp+2Ch] [ebp+Ch]
    void*375 *v19; // [esp+30h] [ebp+10h]
    int v20; // [esp+34h] [ebp+14h]
    LOBYTE(result) = *((uint8_t *)this + 981);
    if ( (uint8_t)result )
    result = *((uint32_t *)this + 135);
    LOBYTE(result) = *(uint8_t *)(*(uint32_t *)(result + 52) + 422);
    if ( !(uint8_t)result
    && (*(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1512) || (result = v20) != 0) )
    v3 = (int *)((char *)this + 156);
    v13 = *((uint32_t *)this + 39);
    v14 = *((uint32_t *)this + 40);
    v4 = 10 * (*((uint32_t *)this + 41) / RulesClass_Instance[1].DominatorWarhead);
    if ( v4 > *((char *)this + 1056) )
    v16 = 0;
    *((uint8_t *)this + 1056) = v4;
    v5 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v6 = Math::RoundToInt((double)*(int *)(v5 + 1512) * ((double)*((char *)this + 1056) * 0.01 + 1.0));
    if ( Audio::IsMediumVolume((float *)this + 84) || Audio::IsLoud((float *)this + 84) )
    if ( (v12 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this),
    Audio::IsMediumVolume((float *)this + 84))
    && *(uint8_t *)(v12 + 673)
    || Audio::IsLoud((float *)this + 84) && (*(uint8_t *)(v12 + 673) || *(uint8_t *)(v12 + 691)) )
    if ( *(double *)&RulesClass_Instance->ChargeToDrainRatio != 0.0 )
    v6 = Math::RoundToInt((double)v6 * *(double *)&RulesClass_Instance->ChargeToDrainRatio);
    result = v20;
    if ( v20 )
    v6 = v20;
    if ( !*((uint8_t *)this + 592) )
    v7 = *v3;
    *((uint8_t *)this + 592) = 1;
    *((uint32_t *)this + 149) = v7;
    *((uint32_t *)this + 152) = v6;
    result = *((uint32_t *)this + 40);
    *((uint32_t *)this + 150) = result;
    *((uint32_t *)this + 151) = *((uint32_t *)this + 41);
    if ( !v6 )
    return result;
    if ( !v18 || !v19 )
    v8 = *((uint32_t *)this + 40);
    v9 = *((uint32_t *)this + 41);
    v13 = *v3;
    v14 = v8;
    v15 = v9;
    return MapClass::RevealArea1((int *)&MapClass_Instance, &v13, v6, *((void*375 **)this + 135), v16, v17, 0, 1, 0);
    goto LABEL_26;
    LOBYTE(result) = v18;
    if ( v18 )
    if ( v6 )
    result = (int)v19;
    if ( v19 )
    LABEL_26:
    v10 = *((uint32_t *)this + 40);
    v13 = *v3;
    v11 = *((uint32_t *)this + 41);
    v14 = v10;
    v15 = v11;
    return MapClass::RevealArea1((int *)&MapClass_Instance, &v13, v6, v19, v16, v17, 0, 1, 0);
    return result;
}

int  TechnoClass::RevealAreaConditional(#377 *this)
{
    int result; // eax
    int v2; // esi
    void*375 *v3; // edx
    char v4; // [esp+8h] [ebp+4h]
    int v5; // [esp+Ch] [ebp+8h]
    char v6; // [esp+10h] [ebp+Ch]
    void*375 *v7; // [esp+14h] [ebp+10h]
    LOBYTE(result) = *((uint8_t *)this + 981);
    if ( (uint8_t)result )
    v2 = *((uint32_t *)this + 135);
    result = *(uint32_t *)(v2 + 52);
    if ( !*(uint8_t *)(result + 422) )
    if ( *((uint8_t *)this + 592) )
    result = *((uint32_t *)this + 152);
    *((uint8_t *)this + 592) = 0;
    if ( !result )
    return result;
    if ( !v6 )
    return MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    (int *)this + 149,
    result,
    (void*375 *)v2,
    v4,
    v5,
    0,
    1,
    1);
    v3 = v7;
    if ( !v7 )
    return MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    (int *)this + 149,
    result,
    (void*375 *)v2,
    v4,
    v5,
    0,
    1,
    1);
    return MapClass::RevealArea1((int *)&MapClass_Instance, (int *)this + 149, result, v3, v4, v5, 0, 1, 1);
    LOBYTE(result) = v6;
    if ( v6 )
    result = *((uint32_t *)this + 152);
    if ( result )
    v3 = v7;
    if ( v7 )
    return MapClass::RevealArea1((int *)&MapClass_Instance, (int *)this + 149, result, v3, v4, v5, 0, 1, 1);
    return result;
}

// 0x0070B280
int  TechnoClass::ComputeAimVector(#377 *this)
{
    int result; // eax
    int v3; // edi
    int v4; // ecx
    int v5; // eax
    int v6; // edi
    unsigned int v7; // edi
    unsigned int v8; // ebx
    double v9; // st7
    __int16 v10; // fps
    long double v11; // st7
    bool v12; // c0
    char v13; // c2
    bool v14; // c3
    __int16 v15; // fps
    bool v16; // c0
    char v17; // c2
    bool v18; // c3
    double v19; // st7
    float v20; // eax
    double v21; // st7
    double v22; // st7
    char v23; // fps^1
    long double v24; // st6
    bool v25; // c0
    char v26; // c2
    bool v27; // c3
    char v28; // fps^1
    long double v29; // st6
    bool v30; // c0
    char v31; // c2
    bool v32; // c3
    double v33; // st6
    float v34; // [esp+18h] [ebp-48h]
    float v35; // [esp+24h] [ebp-3Ch]
    double v36; // [esp+28h] [ebp-38h] BYREF
    float v37; // [esp+30h] [ebp-30h]
    double v38; // [esp+3Ch] [ebp-24h]
    float v39; // [esp+44h] [ebp-1Ch]
    double v40; // [esp+48h] [ebp-18h]
    float v41; // [esp+50h] [ebp-10h]
    float v42; // [esp+54h] [ebp-Ch]
    uint32_t *v43; // [esp+68h] [ebp+8h]
    float v44; // [esp+6Ch] [ebp+Ch]
    char v45; // [esp+70h] [ebp+10h]
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( *(uint32_t *)(result + 176) )
    result = *(uint32_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 176);
    if ( !*(uint8_t *)result )
    v3 = *((uint32_t *)this + 40);
    LODWORD(v36) = *((uint32_t *)this + 39) - *v43;
    v4 = *((uint32_t *)this + 41);
    v5 = v43[1] - v3;
    v6 = v43[2];
    *(float *)&v38 = (float)SLODWORD(v36);
    LODWORD(v36) = v4 - v6;
    *((float *)&v38 + 1) = (float)v5;
    v40 = v38;
    v39 = (float)(v4 - v6);
    v41 = v39;
    v36 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)this + 452, &v36) - 0x3FFF) * -0.00009587672516830327;
    v7 = HIDWORD(v36);
    v8 = LODWORD(v36);
    v35 = Math::SinCos(v36);
    v42 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v7, v8)));
    v9 = Math::Sqrt(*(float *)&v38 * *(float *)&v38 + *((float *)&v38 + 1) * *((float *)&v38 + 1) + v39 * v39);
    *(float *)&v36 = v9;
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v34 = (0.039999999 - v9 * 0.000024999999) * v44 / *(double *)(result + 880);
    v11 = fabs(*(float *)&v36);
    v12 = v11 < 0.00002;
    v13 = 0;
    v14 = v11 == 0.00002;
    LOWORD(result) = v10;
    if ( v11 >= 0.00002 )
    v16 = v34 < 0.0099999998;
    v17 = 0;
    v18 = v34 == 0.0099999998;
    LOWORD(result) = v15;
    if ( v34 >= 0.0099999998 )
    if ( v34 > 0.050000001 )
    v34 = 0.050000001;
    v41 = 0.0;
    v19 = Math::Sqrt(*((float *)&v40 + 1) * *((float *)&v40 + 1) + *(float *)&v40 * *(float *)&v40);
    if ( v19 == 0.0 )
    v20 = v41;
    v38 = v40;
    else
    *(float *)&v36 = *(float *)&v40 / v19;
    *((float *)&v36 + 1) = *((float *)&v40 + 1) / v19;
    v38 = v36;
    v37 = 0.0 / v19;
    v20 = v37;
    v39 = v20;
    *(float *)&v36 = *(float *)&v38 * v42 + *((float *)&v38 + 1) * v35;
    *(float *)&v40 = -(v20 * v35);
    *((float *)&v40 + 1) = v20 * v42;
    v21 = *(float *)&v38 * v35 - *((float *)&v38 + 1) * v42;
    v22 = Math::Sqrt(*(float *)&v40 * *(float *)&v40 + *((float *)&v40 + 1) * *((float *)&v40 + 1) + v21 * v21);
    v24 = fabs(v42 * *(float *)&v36 - v35 * v22 - *(float *)&v38);
    v25 = v24 < 0.0002;
    v26 = 0;
    v27 = v24 == 0.0002;
    BYTE1(result) = v23;
    if ( v24 > 0.0002
    || (v29 = fabs(v42 * v22 + v35 * *(float *)&v36 - *((float *)&v38 + 1)),
    v30 = v29 < 0.0002,
    v31 = 0,
    v32 = v29 == 0.0002,
    BYTE1(result) = v28,
    v29 > 0.0002) )
    v22 = -v22;
    LOBYTE(result) = v45;
    v33 = *(float *)&v36 * v34;
    if ( !v45 )
    v33 = v33 * 0.5;
    *((float *)this + 205) = v33;
    *((float *)this + 204) = -(v22 * v34);
    return result;
}

// 0x0070B570
int  TechnoClass::UpdateBodyTilt(#377 *this)
{
    int result; // eax
    bool v3; // dl
    __int16 v4; // fps
    double v5; // st7
    char v6; // c0
    bool v7; // c0
    char v8; // c2
    bool v9; // c3
    int v10; // edx
    double v11; // st7
    double v12; // st7
    __int16 v13; // fps
    bool v14; // c0
    char v15; // c2
    bool v16; // c3
    bool v17; // cl
    double v18; // st7
    unsigned __int8 v20; // c0
    unsigned __int8 v21; // c3
    double v22; // st7
    double v23; // st7
    bool v24; // dl
    bool v25; // cl
    double v26; // st7
    double v27; // st7
    double v28; // st7
    __int16 v29; // fps
    double v30; // st7
    bool v31; // c0
    char v32; // c2
    bool v33; // c3
    int v34; // eax
    int v35; // edx
    bool v36; // [esp+Ah] [ebp-Eh]
    bool v37; // [esp+Ah] [ebp-Eh]
    float v38; // [esp+Ch] [ebp-Ch]
    float v39; // [esp+Ch] [ebp-Ch]
    float v40; // [esp+10h] [ebp-8h]
    float v41; // [esp+14h] [ebp-4h] BYREF
    v3 = *((float *)this + 202) > 0.00002;
    v36 = *((float *)this + 202) < -0.00002;
    if ( *((uint8_t *)this + 973) )
    v5 = *((float *)this + 203);
    if ( v6 )
    v5 = -v5;
    v7 = v5 < 0.78539819;
    v8 = 0;
    v9 = v5 == 0.78539819;
    LOWORD(result) = v4;
    if ( v5 < 0.78539819 )
    result = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v41) >> 12) + 1) >> 1) & 7;
    if ( result && result <= 5 )
    *((float *)this + 203) = *((float *)this + 203) + 0.01;
    else
    *((float *)this + 203) = *((float *)this + 203) - 0.01;
    return result;
    if ( *((uint8_t *)this + 1061) )
    v10 = *(uint32_t *)this;
    *((float *)this + 203) = *((float *)this + 205) + *((float *)this + 203);
    *((float *)this + 202) = *((float *)this + 204) + *((float *)this + 202);
    result = (*(int (__thiscall **)(void*377 *))(v10 + 132))(this);
    if ( *(uint8_t *)(result + 3434) )
    if ( *((float *)this + 203) <= -0.78539819 )
    v11 = -0.78539819;
    else
    v11 = *((float *)this + 203);
    *((float *)this + 203) = v11;
    if ( *((float *)this + 202) <= -0.78539819 )
    v12 = -0.78539819;
    else
    v12 = *((float *)this + 202);
    *((float *)this + 202) = v12;
    v14 = v12 < 0.78539819;
    v15 = 0;
    v16 = v12 == 0.78539819;
    LOWORD(result) = v13;
    if ( v12 >= 0.78539819 )
    *((float *)this + 202) = 0.78539819;
    else
    *((float *)this + 202) = v12;
    return result;
    v17 = *((float *)this + 202) > 1.5707964;
    if ( *((float *)this + 202) < -1.5707964 )
    v17 = 1;
    if ( *((float *)this + 204) == 0.0 )
    *((uint32_t *)this + 202) = 0;
    goto LABEL_61;
    v18 = *((float *)this + 204) + *((float *)this + 202);
    v38 = *((float *)this + 202);
    *((float *)this + 202) = v18;
    if ( !(v20 | v21) && !*((uint32_t *)this + 170) && !v17 && v38 < 0.78539819 )
    *((uint32_t *)this + 202) = 1061752795;
    LABEL_33:
    *((uint32_t *)this + 204) = 0;
    goto LABEL_34;
    if ( v18 < -0.78539819 && !*((uint32_t *)this + 170) && !v17 && v38 > -0.78539819 )
    *((uint32_t *)this + 202) = -1085730853;
    goto LABEL_33;
    LABEL_34:
    v22 = *((float *)this + 204);
    if ( !v3 )
    result = *((uint32_t *)this + 170);
    if ( v22 >= 0.0 )
    if ( result )
    if ( !v17 )
    *((float *)this + 204) = *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001
    + *((float *)this + 204);
    goto LABEL_63;
    else if ( !v17 )
    *((float *)this + 204) = *((float *)this + 204) + 0.005000000237487257;
    goto LABEL_63;
    else if ( result )
    if ( !v17 )
    *((float *)this + 204) = *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001 + *((float *)this + 204);
    goto LABEL_63;
    else if ( !v17 )
    *((float *)this + 204) = *((float *)this + 204) + 0.0020000001;
    goto LABEL_63;
    *((float *)this + 204) = *((float *)this + 204) - 0.0020000001;
    goto LABEL_63;
    result = *((uint32_t *)this + 170);
    if ( v22 <= 0.0 )
    if ( result )
    if ( !v17 )
    HIWORD(result) = HIWORD(RulesClass_Instance);
    v23 = *(float *)&RulesClass_Instance[1].ZoomInFactor;
    goto LABEL_39;
    else if ( !v17 )
    *((float *)this + 204) = *((float *)this + 204) - 0.005000000237487257;
    goto LABEL_61;
    goto LABEL_41;
    if ( !result )
    if ( !v17 )
    *((float *)this + 204) = *((float *)this + 204) - 0.0020000001;
    goto LABEL_61;
    goto LABEL_41;
    if ( v17 )
    LABEL_41:
    *((float *)this + 204) = *((float *)this + 204) + 0.0020000001;
    goto LABEL_61;
    v23 = *(float *)&RulesClass_Instance[1].ZoomInFactor;
    LABEL_39:
    *((float *)this + 204) = *((float *)this + 204) - v23 * 0.0020000001;
    LABEL_61:
    if ( v3 && *((float *)this + 202) < 0.00002 )
    goto LABEL_65;
    LABEL_63:
    if ( v36 && *((float *)this + 202) > -0.00002 )
    LABEL_65:
    *((uint32_t *)this + 204) = 0;
    *((uint32_t *)this + 202) = 0;
    v24 = *((float *)this + 203) > 0.00002;
    v37 = *((float *)this + 203) < -0.00002;
    v25 = *((float *)this + 203) > 1.5707964;
    if ( *((float *)this + 203) < -1.5707964 )
    v25 = 1;
    if ( *((float *)this + 205) == 0.0 )
    *((uint32_t *)this + 203) = 0;
    goto LABEL_110;
    v26 = *((float *)this + 205) + *((float *)this + 203);
    v41 = *((float *)this + 203);
    v40 = v26;
    *((float *)this + 203) = v26;
    v27 = 0.78539819;
    if ( this && (*((uint8_t *)this + 20) & 4) != 0 && *((uint8_t *)this + 1717) )
    v27 = 0.31415927;
    if ( v40 > v27 && !*((uint32_t *)this + 170) && !v25 && v41 < v27 )
    *((float *)this + 203) = v27;
    LABEL_83:
    *((uint32_t *)this + 205) = 0;
    goto LABEL_84;
    v39 = -v27;
    if ( v40 < (double)v39 && !*((uint32_t *)this + 170) && !v25 && v41 > (double)v39 )
    *((float *)this + 203) = v39;
    goto LABEL_83;
    LABEL_84:
    v28 = *((float *)this + 205);
    if ( !v24 )
    result = *((uint32_t *)this + 170);
    if ( v28 >= 0.0 )
    if ( result )
    if ( !v25 )
    *((float *)this + 205) = *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001
    + *((float *)this + 205);
    goto LABEL_112;
    goto LABEL_107;
    if ( v25 )
    goto LABEL_107;
    else
    if ( result )
    if ( !v25 )
    *((float *)this + 205) = *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001
    + *((float *)this + 205);
    goto LABEL_112;
    LABEL_107:
    *((float *)this + 205) = *((float *)this + 205) - 0.0020000001;
    goto LABEL_112;
    if ( v25 )
    goto LABEL_107;
    *((float *)this + 205) = *((float *)this + 205) + 0.005000000237487257;
    goto LABEL_112;
    result = *((uint32_t *)this + 170);
    if ( v28 <= 0.0 )
    if ( result )
    if ( !v25 )
    HIWORD(result) = HIWORD(RulesClass_Instance);
    *((float *)this + 205) = *((float *)this + 205) - *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001;
    goto LABEL_110;
    LABEL_95:
    *((float *)this + 205) = *((float *)this + 205) + 0.0020000001;
    goto LABEL_110;
    if ( v25 )
    goto LABEL_95;
    LABEL_96:
    *((float *)this + 205) = *((float *)this + 205) - 0.005000000237487257;
    goto LABEL_110;
    if ( !result )
    if ( v25 )
    *((float *)this + 205) = *((float *)this + 205) + 0.0020000001;
    goto LABEL_110;
    goto LABEL_96;
    if ( v25 )
    goto LABEL_95;
    *((float *)this + 205) = *((float *)this + 205) - *(float *)&RulesClass_Instance[1].ZoomInFactor * 0.0020000001;
    LABEL_110:
    if ( v24 && *((float *)this + 203) < 0.00002 )
    goto LABEL_114;
    LABEL_112:
    if ( v37 && *((float *)this + 203) > -0.00002 )
    LABEL_114:
    *((uint32_t *)this + 205) = 0;
    *((uint32_t *)this + 203) = 0;
    if ( *((float *)this + 202) > 3.1415927
    || *((float *)this + 202) < -3.1415927
    || *((float *)this + 203) > 3.1415927
    || (v30 = *((float *)this + 203),
    v31 = v30 < -3.1415927,
    v32 = 0,
    v33 = v30 == -3.1415927,
    LOWORD(result) = v29,
    v30 < -3.1415927) )
    v34 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    v35 = *(uint32_t *)this;
    v41 = *(float *)(v34 + 160);
    return (*(int (__thiscall **)(void*377 *, float *, uint32_t, int, uint32_t, int, uint32_t, uint32_t))(v35 + 364))(
    this,
    &v41,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    0,
    0);
    return result;
}

// 0x0070BE80
int  TechnoClass::ShouldSelfHealOneStep(#377 *this)
{
    int result; // eax
    int v3; // edi
    int v4; // eax
    int v5; // et2
    int v6; // edi
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3348)
    || (Audio::IsMediumVolume((float *)this + 84) || (result = Audio::IsLoud((float *)this + 84), (uint8_t)result))
    && ((v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this), Audio::IsMediumVolume((float *)this + 84))
    && *(uint8_t *)(v3 + 677)
    || (result = Audio::IsLoud((float *)this + 84), (uint8_t)result) && (*(uint8_t *)(v3 + 677) || *(uint8_t *)(v3 + 695))) )
    v4 = Math::RoundToInt(*(double *)&RulesClass_Instance[1].DrainAnimationType * 900.0);
    v5 = (int)CurrentFrame % v4;
    result = (int)CurrentFrame / v4;
    if ( v5 )
    LOBYTE(result) = 0;
    else
    v6 = *((uint32_t *)this + 27);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    LOBYTE(result) = v6 != *(uint32_t *)(result + 160) && v6 != 0;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x0070D420
int  TechnoClass::IsPlayerCellPassable(#377 *this)
{
    int result; // eax
    uint32_t *v2; // eax
    _WORD *v3; // eax
    uint8_t v4[12]; // [esp+0h] [ebp-Ch] BYREF
    result = (int)HouseClass_Player;
    if ( HouseClass_Player )
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v4);
    v3 = Coord::To_Cell(&MapClass_Instance, v2);
    return Cell::IsPassableOffset(v3, *((uint32_t *)HouseClass_Player + 12));
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x0070D460
int  TechnoClass::IsCellPassableFor(#377 *this)
{
    uint32_t *v1; // eax
    _WORD *v2; // eax
    int result; // eax
    uint8_t v4[12]; // [esp+4h] [ebp-Ch] BYREF
    int v5; // [esp+14h] [ebp+4h]
    if ( v5 )
    v1 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v4);
    v2 = Coord::To_Cell(&MapClass_Instance, v1);
    return Cell::IsPassableOffset(v2, *(uint32_t *)(v5 + 48));
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x0070D670
int  TechnoClass::DecCounter(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 191);
    if ( result > 0 )
    *((uint32_t *)this + 191) = --result;
    return result;
}

int  TechnoClass::OnEnterCell(#377 *this)
{
    uint32_t *v2; // eax
    int v3; // edx
    int *v4; // eax
    int v5; // eax
    char v6; // bl
    int *v7; // eax
    int v8; // edi
    int v9; // ebp
    int v10; // eax
    int v11; // ecx
    int v12; // edi
    int v13; // eax
    int *v14; // eax
    char v15; // al
    int result; // eax
    int v17; // edx
    int v18; // ecx
    int v19; // eax
    int v20; // et2
    int v21; // [esp+Ch] [ebp-2Ch] BYREF
    int v22; // [esp+10h] [ebp-28h]
    int v23; // [esp+14h] [ebp-24h]
    int v24[2]; // [esp+18h] [ebp-20h] BYREF
    int v25; // [esp+20h] [ebp-18h]
    int v26; // [esp+24h] [ebp-14h]
    int v27; // [esp+28h] [ebp-10h] BYREF
    int v28; // [esp+2Ch] [ebp-Ch]
    int v29; // [esp+30h] [ebp-8h]
    char v30; // [esp+3Ch] [ebp+4h]
    int v31; // [esp+3Ch] [ebp+4h]
    if ( !*((uint8_t *)this + 1051) && !GameMode_Current[0] )
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v27);
    *((uint8_t *)this + 1051) = !Cell::IsPassable(v2);
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 44))(this) != 6 || v30 )
    v27 = *((uint32_t *)this + 39);
    v28 = *((uint32_t *)this + 40);
    v29 = *((uint32_t *)this + 41);
    v4 = Coord::WorldToScreen((int)&MapClass_Instance, v24, &v27, 0);
    v22 = *v4;
    v3 = v4[1];
    else
    v3 = *((uint32_t *)this + 131);
    v22 = *((uint32_t *)this + 130);
    v5 = *(uint32_t *)this;
    v23 = v3;
    v21 = 0;
    v6 = (*(int (__thiscall **)(void*377 *, int *))(v5 + 804))(this, &v21);
    v7 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)dword_880A04 + 120))(dword_880A04, &v27);
    v8 = *v7;
    v9 = v7[1];
    v25 = v7[2];
    v26 = v7[3];
    if ( v21 && v6 && (!this || (*((uint8_t *)this + 20) & 4) == 0 || *((char *)this + 1668) < 0) )
    v10 = *((uint32_t *)this + 39);
    v11 = *((uint32_t *)this + 40);
    v29 = *((uint32_t *)this + 41);
    LOWORD(v31) = v10 / 256;
    HIWORD(v31) = v11 / 256;
    CreateTriggerClassIfFarEnough(5, (unsigned __int8)(v11 >> 31), v31);
    if ( v22 < v8 || v22 >= v8 + v25 )
    v12 = v23;
    else
    v12 = v23;
    if ( v23 >= v9 && v23 < v26 + v9 )
    goto LABEL_23;
    if ( v6 )
    v13 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 452))(this);
    v6 = Type::CheckAmbiguity(&MapClass_Instance, v13, 1);
    if ( v6 )
    v27 = *((uint32_t *)this + 39);
    v28 = *((uint32_t *)this + 40);
    v29 = *((uint32_t *)this + 41);
    v14 = Coord::WorldToScreen((int)&MapClass_Instance, v24, &v27, 1);
    v22 = *v14;
    v23 = v14[1];
    v12 = v23;
    LABEL_23:
    if ( *((uint8_t *)this + 129) && v6 )
    v6 = 0;
    if ( *((uint8_t *)this + 1059) && (v22 != *((uint32_t *)this + 130) || v12 != *((uint32_t *)this + 131) || !v6) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1176))(this);
    *((uint32_t *)this + 130) = v22;
    v15 = *((uint8_t *)this + 1059);
    *((uint32_t *)this + 131) = v12;
    if ( !v15 && v6 )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1172))(this);
    result = *((uint32_t *)this + 135);
    if ( (void*375 *)result == HouseClass_Player )
    v17 = *((uint32_t *)this + 93);
    result = *((uint32_t *)this + 95);
    if ( v17 != -1 )
    if ( (int)CurrentFrame - v17 >= result )
    return result;
    result -= (int)CurrentFrame - v17;
    if ( result > 0 )
    v18 = *((uint32_t *)this + 93);
    v19 = *((uint32_t *)this + 95);
    if ( v18 != -1 )
    if ( (int)CurrentFrame - v18 >= v19 )
    v19 = 0;
    else
    v19 -= (int)CurrentFrame - v18;
    v20 = v19 % RulesClass_Instance->Wake;
    result = v19 / RulesClass_Instance->Wake;
    if ( !v20 )
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1180))(this);
    return result;
}

// 0x0070DD50
int  TechnoClass::GetVt252Byte(#377 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1008))(this);
    if ( result && (result = *(uint32_t *)result) != 0 )
    LOBYTE(result) = *(uint8_t *)(result + 336);
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x0070DD90
int  TechnoClass::vt_entry_3E8(#377 *this)
{
    return 1;
}

int  TechnoClass::GattlingValueRateDown_GattlingRateDownDelay(uint32_t *this, int a2)
{
    int result; // eax
    int v3; // edx
    result = a2;
    v3 = *(this + 81) - a2;
    *(this + 81) = v3;
    if ( v3 < 0 || !a2 )
    *(this + 81) = 0;
    return result;
}

char  TechnoClass::GattlingRateUp_GattlingRateDownReset(float *this, int a2)
{
    int v3; // ebx
    int v4; // eax
    int v5; // edi
    int v6; // ebp
    int v7; // eax
    int v8; // edi
    int v9; // eax
    unsigned int v10; // ebx
    unsigned int v11; // eax
    int v13; // [esp+10h] [ebp-10h]
    uint32_t v14[3]; // [esp+14h] [ebp-Ch] BYREF
    v3 = *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 3288);
    if ( Audio::IsLoud(this + 84) )
    v4 = *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 4 * v3 + 3312);
    else
    v4 = *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 4 * v3 + 3288);
    v13 = *((uint32_t *)this + 81);
    if ( v13 < v4 )
    *((uint32_t *)this + 81) += a2 * *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 3340);
    v5 = *((uint32_t *)this + 80);
    v6 = *(uint32_t *)(*(int (__thiscall **)(float *, int))(*(uint32_t *)this + 1016))(this, 2 * v5);
    AudioController::Stop((uint32_t *)this + 304);
    *((uint8_t *)this + 1236) = 0;
    if ( v5 >= 0 && v5 < v3 - 1 )
    v7 = Audio::IsLoud(this + 84)
    ? *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 4 * v5 + 3316)
    : *(uint32_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)this + 132))(this) + 4 * v5 + 3292);
    if ( v13 >= v7 )
    v8 = v5 + 1;
    if ( v8 >= 0 )
    *((uint32_t *)this + 80) = v8;
    v6 = *(uint32_t *)(*(int (__thiscall **)(float *, int))(*(uint32_t *)this + 1016))(this, 2 * v8);
    AudioController::Stop((uint32_t *)this + 297);
    *((uint8_t *)this + 1208) = 0;
    LOBYTE(v9) = *((uint8_t *)this + 1208);
    if ( !(uint8_t)v9 )
    v9 = *(uint32_t *)(v6 + 204);
    if ( v9 > 0 )
    AudioController::Stop((uint32_t *)this + 297);
    v10 = *(uint32_t *)(v6 + 204);
    *(float *)v14 = *(this + 39);
    *(float *)&v14[1] = *(this + 40);
    *(float *)&v14[2] = *(this + 41);
    v11 = Random::State(Randomizer_Global);
    LOBYTE(v9) = StartAudioControllerAt(
    *(uint32_t *)(*(uint32_t *)(v6 + 192) + 4 * (v11 % v10)),
    (int)v14,
    (int)(this + 297));
    *((uint8_t *)this + 1208) = 1;
    return v9;
}

// 0x0070E120
int  TechnoClass::Vt249to254(#377 *this)
{
    int v2; // edi
    int v3; // eax
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 996))(this);
    return (*(int (__thiscall **)(void*377 *, int))(v2 + 1016))(this, v3);
}

// 0x0070E1A0
int  TechnoClass::UpdatePowered(#377 *this)
{
    uint32_t *v2; // eax
    v2 = (uint32_t *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( HouseClass::HasPower(v2) )
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, *((uint32_t *)this + 78));
    else
    return (*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0);
}

// 0x0070E280
int  TechnoClass::ActivateEffect(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    if ( v2 )
    *((uint8_t *)this + 472) = 1;
    *((uint32_t *)this + 119) = CurrentFrame;
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1180))(this);
}

int  TechnoClass::IronCurtain(uint32_t *this, int a2, int a3, char a4)
{
    int result; // eax
    int v5; // [esp+8h] [ebp-8h]
    *(this + 99) = CurrentFrame;
    *(this + 100) = v5;
    result = 0;
    *(this + 105) = 0;
    *(this + 101) = a2;
    if ( a4 )
    *(this + 113) = 1;
    else
    *(this + 113) = 0;
    return result;
}

// 0x0070E300
int  TechnoClass::ResetTimer(#377 *this)
{
    wchar_t *v1; // eax
    int v3; // [esp+8h] [ebp-8h]
    int v4; // [esp+14h] [ebp+4h]
    v1 = CurrentFrame;
    *((uint32_t *)this + 112) = 0;
    *((uint32_t *)this + 106) = v1;
    *((uint32_t *)this + 107) = v3;
    *((uint32_t *)this + 108) = v4;
    return v3;
}

int  TechnoClass::InvulnerabilityIntensity_SetContext(uint32_t *this, int a2)
{
    int v2; // edx
    int v3; // esi
    int v4; // ecx
    int v5; // eax
    int v6; // edx
    int result; // eax
    v2 = *(this + 104);
    v3 = *(this + 102);
    if ( v3 != -1 )
    if ( (int)CurrentFrame - v3 >= v2 )
    v2 = 0;
    else
    v2 -= (int)CurrentFrame - v3;
    switch ( *(this + 105) )
    case 1:
    v4 = (12 - v2) << 8;
    goto LABEL_13;
    case 2:
    case 8:
    v5 = 512;
    goto LABEL_15;
    case 3:
    v6 = (unsigned __int64)(1717986919LL * (461 * v2 + 1020)) >> 32;
    v5 = ((unsigned int)v6 >> 31) + (v6 >> 3);
    goto LABEL_15;
    case 4:
    v5 = (1024 - 77 * v2) / 8;
    goto LABEL_15;
    case 5:
    v5 = (77 * v2 + 816) / 16;
    goto LABEL_15;
    case 6:
    v5 = 51;
    goto LABEL_15;
    case 7:
    v4 = 3072 - 461 * v2;
    LABEL_13:
    v5 = v4 / 6;
    goto LABEL_15;
    case 9:
    v5 = ((v2 + 20) << 8) / 20;
    LABEL_15:
    result = (a2 * v5) >> 8;
    if ( result > 2000 )
    result = 2000;
    break;
    default:
    result = a2;
    break;
    return result;
}

// 0x0070ECE0
int  TechnoClass::Fire(int *this)
{
    int result; // eax
    int v2; // [esp+0h] [ebp-4h]
    result = *this;
    v2 = *this;
    if ( *this )
    result = *(this + 1);
    *(this + 6) = 1;
    *(this + 7) = result;
    if ( result < 1 )
    *(this + 7) = 1;
    *((float *)this + 4) = (double)v2 / (double)*(this + 7);
    return result;
}

// 0x0070ED10
int  TechnoClass::Update2(uint32_t *this)
{
    int result; // eax
    double v2; // st7
    int v3; // esi
    int v4; // eax
    int v5; // eax
    result = *(this + 6);
    if ( result )
    v2 = *((float *)this + 4) + *((float *)this + 5);
    v3 = *(this + 7) - 1;
    *(this + 7) = v3;
    *((float *)this + 5) = v2;
    if ( v3 <= 0 )
    v4 = result - 1;
    if ( v4 )
    v5 = v4 - 1;
    if ( v5 )
    result = v5 - 1;
    if ( !result )
    *(this + 6) = 0;
    *(this + 5) = 0;
    return result;
    else
    result = *(this + 3);
    *(this + 6) = 2;
    *(this + 7) = result;
    *(this + 4) = 0;
    if ( result > 1 )
    return result;
    result = *(this + 2);
    *(this + 6) = 3;
    *(this + 7) = result;
    if ( result < 1 )
    *(this + 7) = 1;
    *((float *)this + 4) = -((double)(int)*this / (double)(int)*(this + 7));
    return result;
}

// 0x0070ED80
int  TechnoClass::GetAnimationFlags(#377 *this)
{
    int v1; // esi
    wchar_t *v2; // eax
    int v4; // ebx
    int v5; // ecx
    int v6; // eax
    int v8; // [esp+10h] [ebp+4h]
    v1 = v8;
    v2 = CurrentFrame;
    v4 = *((uint32_t *)this + 123);
    v5 = *((uint32_t *)this + 125);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v5 )
    goto LABEL_7;
    v5 -= (int)CurrentFrame - v4;
    if ( v5 )
    if ( !(unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    return v1;
    v2 = CurrentFrame;
    LABEL_7:
    v6 = ((int)v2 - *((uint32_t *)this + 119) + 64) % 256;
    if ( v6 >= 64 )
    if ( v6 < 68 )
    return v8 | 2;
    if ( v6 < 76 )
    return v8 | 4;
    if ( v6 < 80 )
    return v8 | 2;
    if ( v6 >= 112 )
    if ( v6 < 116 )
    return v8 | 2;
    if ( v6 < 124 )
    return v8 | 4;
    if ( v6 < 128 )
    return v8 | 2;
    return v1;
}

// 0x0070EE30
int  TechnoClass::CheckFireCooldown(#377 *this)
{
    int v2; // edx
    int v3; // eax
    int result; // eax
    _WORD *v5; // edi
    int v6; // [esp+Ch] [ebp+4h]
    v2 = *((uint32_t *)this + 123);
    v3 = *((uint32_t *)this + 125);
    if ( v2 != -1 )
    if ( (int)CurrentFrame - v2 >= v3 )
    goto LABEL_6;
    v3 -= (int)CurrentFrame - v2;
    if ( v3 )
    result = House::IsHumanPlayer(*((void*375 **)this + 135));
    if ( !(uint8_t)result )
    goto LABEL_14;
    LABEL_6:
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    && (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 196))(this) )
    result = ((int)CurrentFrame - *((uint32_t *)this + 119) + 64) % 256;
    if ( result >= 72 && result <= 119 )
    LOBYTE(result) = 0;
    return result;
    goto LABEL_14;
    v5 = (_WORD *)(*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 444))(this);
    result = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 196))(this);
    if ( !(uint8_t)result || !v5 || (result = HouseClass::HasType(v5, *(uint32_t *)(v6 + 48)), (uint8_t)result) )
    LABEL_14:
    LOBYTE(result) = 1;
    return result;
}

// 0x0070EF00
int  TechnoClass::CanDamageTarget(#377 *this)
{
    int v2; // ebx
    int v3; // eax
    int result; // eax
    int v5; // esi
    int v6; // [esp+10h] [ebp+4h]
    v2 = *(uint32_t *)this;
    v3 = (*(int (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 740))(this, v6);
    result = (*(int (__thiscall **)(void*377 *, int))(v2 + 1016))(this, v3);
    v5 = *(uint32_t *)result;
    if ( *(uint32_t *)result )
    result = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 44))(v6);
    if ( result == 36 )
    if ( BYTE1(RulesClass_Instance[1].RadarEventDurations[3]) || *(uint8_t *)(v5 + 312) )
    LOBYTE(result) = 1;
    return result;
    else if ( *(uint8_t *)(v5 + 312) )
    result = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 44))(v6);
    if ( result == 11 )
    result = *(uint32_t *)(v6 + 68);
    if ( result != -1 )
    if ( *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * result] + 693) )
    LOBYTE(result) = 1;
    return result;
    if ( v6 )
    if ( (*(uint8_t *)(v6 + 20) & 2) != 0 )
    result = (*(int (__thiscall **)(int))(*(uint32_t *)v6 + 196))(v6);
    if ( (uint8_t)result )
    result = (*(int (__thiscall **)(int, int))(*(uint32_t *)v6 + 208))(v6, 1);
    if ( !result )
    return 1;
    LOBYTE(result) = 0;
    return result;
}

// 0x0070EFD0
int  TechnoClass::HasPassengers(#377 *this)
{
    return *((uint32_t *)this + 321) > 0;
}

// 0x0070EFE0
int  TechnoClass::GetMaxSpeed(#377 *this)
{
    int v1; // eax
    v1 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    if ( v1 )
    return *(uint32_t *)(v1 + 1656);
    else
    return 0;
}

// 0x0070F850
int  TechnoClass::SetIdleState(#377 *this)
{
    int v2; // eax
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    (*(void (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    v2 = *(uint32_t *)this;
    *((uint32_t *)this + 134) = 0;
    return (*(int (__thiscall **)(void*377 *, int))(v2 + 496))(this, 5);
}

bool  TechnoClass::CanSelfRepair(uint8_t *this)
{
    uint32_t *v3; // eax
    if ( !*(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 132))(this) + 3374) )
    return 0;
    if ( !*(uint8_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 132))(this) + 3233) )
    return 0;
    v3 = (uint32_t *)(*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 1012))(this);
    if ( !v3 || !*v3 )
    return 0;
    if ( *(uint32_t *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 132))(this) + 1660) == 3 )
    return 0;
    return !this || (*(this + 20) & 4) == 0 || !*((uint32_t *)this + 421);
}

// 0x0070FBE0
char  TechnoClass::Activate(uint32_t *this)
{
    int v2; // eax
    int v3; // edx
    int v4; // eax
    uint32_t v6[3]; // [esp+4h] [ebp-Ch] BYREF
    (*(void (__thiscall **)(uint32_t *))(*this + 976))(this);
    if ( this && (*(uint8_t *)(this + 5) & 4) != 0 )
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 88))(*(this + 413));
    LOBYTE(v2) = *((uint8_t *)this + 456);
    if ( !(uint8_t)v2 || (v2 = (*(int (__thiscall **)(uint32_t *))(*this + 132))(this), *(uint32_t *)(v2 + 1448) == -1) )
    *((uint8_t *)this + 456) = 0;
    else
    v6[0] = *(this + 39);
    v6[1] = *(this + 40);
    v3 = *this;
    v6[2] = *(this + 41);
    v4 = (*(int (__thiscall **)(uint32_t *))(v3 + 132))(this);
    LOBYTE(v2) = StartAudioControllerAt(*(uint32_t *)(v4 + 1448), (int)v6, 0);
    *((uint8_t *)this + 456) = 0;
    return v2;
}

char  TechnoClass::Deactivate(uint32_t *this)
{
    uint32_t *v2; // eax
    uint32_t *v3; // edi
    int Member; // eax
    int v5; // edx
    int v6; // eax
    uint32_t v8[3]; // [esp+8h] [ebp-Ch] BYREF
    if ( !*((uint8_t *)this + 1048)
    || !Team::GetMember(this, 0)
    || (v2 = (uint32_t *)(*(int (__thiscall **)(uint32_t *))(*this + 444))(this),
    v3 = Cell::IsBridge(v2),
    Member = Team::GetMember(this, 0),
    v3 != (uint32_t *)Member) )
    (*(void (__thiscall **)(uint32_t *))(*this + 976))(this);
    (*(void (__thiscall **)(uint32_t *))(*this + 336))(this);
    if ( this && (*(uint8_t *)(this + 5) & 4) != 0 )
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 92))(*(this + 413));
    LOBYTE(Member) = *((uint8_t *)this + 456);
    if ( !(uint8_t)Member )
    Member = (*(int (__thiscall **)(uint32_t *))(*this + 132))(this);
    if ( *(uint32_t *)(Member + 1452) != -1 )
    v8[0] = *(this + 39);
    v8[1] = *(this + 40);
    v5 = *this;
    v8[2] = *(this + 41);
    v6 = (*(int (__thiscall **)(uint32_t *))(v5 + 132))(this);
    LOBYTE(Member) = StartAudioControllerAt(*(uint32_t *)(v6 + 1452), (int)v8, 0);
    *((uint8_t *)this + 456) = 1;
    return Member;
}

char __stdcall TechnoClass::EnteredOpenTopped(int a1)
{
    int v1; // eax
    char result; // al
    if ( a1 )
    v1 = *(uint32_t *)a1;
    *(uint8_t *)(a1 + 130) = 1;
    (*(void (__thiscall **)(int))(v1 + 976))(a1);
    return ObjectClass::SetDeployState(a1, 0);
    return result;
}

int __stdcall TechnoClass::ExitedOpenTopped(int a1)
{
    int result; // eax
    result = a1;
    if ( a1 )
    *(uint8_t *)(a1 + 130) = 0;
    return result;
}

int  TechnoClass::MarkPassengersAsExited(uint32_t *this)
{
    int result; // eax
    result = CCINIClass::GetDB(this + 69);
    if ( result )
    do
    *(uint8_t *)(result + 130) = 0;
    result = *(uint32_t *)(result + 48);
    while ( result && (*(uint8_t *)(result + 20) & 4) != 0 );
    return result;
}

void * TechnoClass::ScalarDtor(void *Block, char a2)
{
    TechnoClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x00731CF0
void TechnoClass::GetField()
{
    byte_B0FE58 = 0;
}

int  TechnoClass::sub_736CA0(#377 *this)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    int v7; // [esp+Ch] [ebp-8h]
    if ( !*(uint8_t *)(*((uint32_t *)this + 433) + 1710) )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 16))(*((uint32_t *)this + 413)) )
    v2 = *((uint32_t *)this + 127);
    v3 = *((uint32_t *)this + 129);
    if ( v2 != -1 )
    if ( (int)CurrentFrame - v2 >= v3 )
    return TechnoClass::StepAnimFrame(this);
    v3 -= (int)CurrentFrame - v2;
    if ( v3 > 0 )
    v4 = *((uint32_t *)this + 127);
    v5 = *((uint32_t *)this + 129);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v5 )
    v5 = 0;
    else
    v5 -= (int)CurrentFrame - v4;
    *((uint32_t *)this + 127) = CurrentFrame;
    *((uint32_t *)this + 128) = v7;
    *((uint32_t *)this + 129) = v5 + 1;
    return TechnoClass::StepAnimFrame(this);
}

bool  TechnoClass::sub_736D50(int this)
{
    int v2; // eax
    int v4; // eax
    int v5; // eax
    uint32_t *v7; // esi
    void *v8; // eax
    uint32_t v9[3]; // [esp+4h] [ebp-Ch] BYREF
    v2 = *(uint32_t *)(this + 1732);
    if ( *(uint8_t *)(v2 + 3602) )
    return 1;
    v4 = *(uint32_t *)(v2 + 1028);
    if ( !v4 )
    return 0;
    if ( !*(uint8_t *)(v4 + 5828) )
    return 0;
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    return 0;
    v5 = *(uint32_t *)(this + 692);
    if ( !v5 )
    return 0;
    if ( (*(int (__stdcall **)(int))(*(uint32_t *)(v5 + 4) + 12))(v5 + 4) - 1 )
    return 0;
    v7 = (uint32_t *)(this + 156);
    v9[0] = *v7;
    v9[1] = v7[1];
    v9[2] = v7[2];
    v8 = Coord::To_Cell(&MapClass_Instance, v9);
    return BuildingClass::CheckC4Active((int)v8) != 0;
}

char  TechnoClass::sub_737BA0(int this, int a2, int a3)
{
    char v3; // bl
    __int16 v5; // cx
    int v6; // eax
    wchar_t *v7; // eax
    wchar_t *v9; // eax
    int v10; // [esp+Ch] [ebp-8h]
    v3 = a3;
    if ( !FootClass::DispatchInput((double *)this, a2, a3) )
    return 0;
    LOBYTE(v5) = 0;
    HIBYTE(v5) = v3;
    LOWORD(a3) = v5;
    FacingClass::Set_SyncLog((char *)(this + 928), &a3);
    if ( *(uint8_t *)(this + 978) && !*(uint8_t *)(this + 981) )
    *(uint32_t *)(this + 544) = 2;
    v6 = *(uint32_t *)(this + 1732);
    if ( *(uint8_t *)(v6 + 3608) || *(uint8_t *)(v6 + 3609) )
    *(uint32_t *)(this + 248) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 29);
    v9 = CurrentFrame;
    *(uint32_t *)(this + 268) = 1;
    *(uint32_t *)(this + 256) = v9;
    *(uint32_t *)(this + 260) = v10;
    *(uint32_t *)(this + 264) = 1;
    return 1;
    else
    *(uint32_t *)(this + 248) = 0;
    v7 = CurrentFrame;
    *(uint32_t *)(this + 268) = 0;
    *(uint32_t *)(this + 256) = v7;
    *(uint32_t *)(this + 260) = v10;
    *(uint32_t *)(this + 264) = 0;
    return 1;
}

char  TechnoClass::sub_738890(int *this, int a2, int *a3, int a4)
{
    int v5; // eax
    int v6; // ecx
    v5 = (*(int (__thiscall **)(int *, int *, int))(*this + 116))(this, a3, a4);
    v6 = a2;
    if ( a2 != v5 )
    v6 = v5;
    if ( v5 == 3 )
    v6 = 1;
    goto LABEL_10;
    if ( v5 == 9 || v5 == 16 )
    goto LABEL_9;
    if ( v6 == 27 || v6 == 29 )
    LABEL_9:
    v6 = 5;
    LABEL_10:
    if ( a3 == this && (v6 == 2 || v6 == 5) )
    return 0;
    if ( *((uint8_t *)this + 664) )
    return 0;
    return FootClass::ValidateMove(this, v6, a3, a4);
}

char  TechnoClass::sub_738910(uint8_t *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
    if ( *(this + 1760)
    && (*(int (__thiscall **)(uint8_t *, __int16 *, uint32_t, void **))(*(uint32_t *)this + 112))(this, a3, 0, a5) == 2 )
    return 0;
    if ( *(this + 664) )
    return 0;
    return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5);
}

char  TechnoClass::sub_73B0B0(#374 *this, int a2, int a3, int a4)
{
    uint32_t *v5; // esi
    uint8_t *v6; // esi
    if ( *((uint8_t *)this + 1048)
    && (v5 = (uint32_t *)Array::Get(this, 0), (*(int (__thiscall **)(uint32_t *))(*v5 + 44))(v5) == 6)
    && ((*(int (__thiscall **)(uint32_t *))(*v5 + 388))(v5) == 16 || v5[45] == 16)
    && ((v6 = v5 + 212, Window::IsVisible(v6))
    || BuildingClass::CheckFlag24(v6)
    || BuildingClass::CheckPowerFlags(v6)
    || Flag::CheckNone(v6)) )
    return 0;
    else
    return ObjectClass::CalcDrawRect(this);
}

int  TechnoClass::sub_73EFC0(int this)
{
    int v2; // edi
    int v3; // eax
    int v4; // edx
    uint32_t *v5; // ecx
    int v6; // eax
    char *MissionControl; // eax
    int v8; // esi
    v2 = *(uint32_t *)(*(uint32_t *)(this + 1732) + 1028);
    if ( !v2 )
    return InfantryClass::ProcessDeploy((void*375 **)this);
    v3 = 0;
    v4 = RulesClass_Instance->NeutralTechBuildings[1];
    if ( v4 > 0 )
    v5 = (uint32_t *)RulesClass_Instance->BuildDummy[2];
    while ( *v5 != v2 )
    ++v3;
    ++v5;
    if ( v3 >= v4 )
    goto LABEL_6;
    goto LABEL_8;
    LABEL_6:
    if ( !*(uint32_t *)(this + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    return InfantryClass::ProcessDeploy((void*375 **)this);
    LABEL_8:
    v6 = *(uint32_t *)(this + 188);
    if ( v6 )
    if ( v6 == 1 && !*(uint8_t *)(this + 1676) )
    *(uint32_t *)(this + 188) = 0;
    else if ( UnitClass::DeployToBuilding((uint32_t *)this) && TechnoClass::Deploy((int *)this) )
    *(uint32_t *)(this + 188) = 1;
    MissionControl = MissionClass::GetMissionControl((uint32_t *)this);
    v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v8 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
}

int  TechnoClass::sub_740810(int this)
{
    uint32_t *v2; // ecx
    int v3; // eax
    int v4; // eax
    int v5; // edi
    int v6; // edi
    int v7; // eax
    int v8; // edx
    uint32_t *v9; // ecx
    uint32_t *v10; // ebx
    unsigned int v11; // edi
    uint32_t *NeighbourContent; // eax
    uint32_t *v13; // eax
    int v15; // ecx
    char *MissionControl; // eax
    int v17; // esi
    int v18; // edx
    v2 = *(uint32_t **)(this + 728);
    if ( v2
    && *(uint32_t *)(this + 192) + *(uint32_t *)RulesClass_Instance[1].gap370 < (int)CurrentFrame
    && SlaveManagerClass::ShouldWakeUpNow(v2) )
    BuildingClass::InitBuildLimit(*(int ***)(this + 728));
    LABEL_34:
    MissionControl = MissionClass::GetMissionControl((uint32_t *)this);
    v17 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v17 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    v3 = *(uint32_t *)(this + 1732);
    if ( *(uint8_t *)(v3 + 3598) || *(uint8_t *)(v3 + 3599) )
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3284) )
    v10 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)this + 444))(this);
    v11 = 0;
    while ( 1 )
    NeighbourContent = Cell::GetNeighbourContent(v10, v11);
    v13 = Cell::IsBridge(NeighbourContent);
    if ( v13 )
    if ( *(uint8_t *)(v13[328] + 5819) && v13[135] == *(uint32_t *)(this + 540) )
    goto LABEL_30;
    if ( (int)++v11 >= 8 )
    if ( ((double (__thiscall *)(int))*(uint32_t *)(*(uint32_t *)this + 692))(this) != 1.0 )
    break;
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    break;
    goto LABEL_30;
    else
    v4 = *(uint32_t *)(this + 1732);
    v5 = 0;
    if ( *(int *)(v4 + 1016) > 0 )
    while ( DynamicVector::GetOrGrow(
    (uint32_t *)(*(uint32_t *)(this + 540) + 21760),
    *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v4 + 1004) + 4 * v5) + 3576)) <= 0 )
    v4 = *(uint32_t *)(this + 1732);
    if ( ++v5 >= *(uint32_t *)(v4 + 1016) )
    goto LABEL_11;
    if ( !*(uint8_t *)(*(uint32_t *)(this + 1732) + 3598) || !*(uint8_t *)(*(uint32_t *)(this + 540) + 578) )
    LABEL_30:
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 10, 0);
    return 1;
    LABEL_11:
    v6 = *(uint32_t *)(*(uint32_t *)(this + 1732) + 1028);
    if ( v6 )
    v7 = 0;
    v8 = RulesClass_Instance->NeutralTechBuildings[1];
    if ( v8 > 0 )
    v9 = (uint32_t *)RulesClass_Instance->BuildDummy[2];
    while ( *v9 != v6 )
    ++v7;
    ++v9;
    if ( v7 >= v8 )
    goto LABEL_35;
    v15 = *(uint32_t *)(this + 540);
    if ( *(uint8_t *)(v15 + 499) )
    if ( !(unsigned __int8)House::IsCurrentPlayer((void*375 *)v15) )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 16, 0);
    goto LABEL_34;
    LABEL_35:
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3599) )
    if ( *(uint8_t *)(this + 1720) )
    v18 = *(uint32_t *)this;
    *(uint8_t *)(this + 1720) = 0;
    (*(void (__thiscall **)(int, int, uint32_t))(v18 + 488))(this, 10, 0);
    return FootClass::FindMovePosition(this);
}

int  TechnoClass::sub_740A90(int this)
{
    char v2; // al
    v2 = *(uint8_t *)(this + 1760);
    *(uint8_t *)(this + 1746) = 0;
    if ( v2 || *(uint8_t *)(this + 1761) || *(uint8_t *)(this + 1762) )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 5, 0);
    return 1;
    else
    if ( !Flag::CheckNone((uint8_t *)(this + 848)) )
    Timer::StartDouble((uint8_t *)(this + 848), *(double *)(*(uint32_t *)(this + 1732) + 968));
    return FootClass::Destru_vt139((uint32_t *)this);
}

int  TechnoClass::sub_740B10(int this)
{
    uint8_t *v2; // edi
    v2 = (uint8_t *)(this + 848);
    *(uint8_t *)(this + 1746) = 0;
    if ( !Flag::CheckNone((uint8_t *)(this + 848)) )
    Timer::StartDouble(v2, *(double *)(*(uint32_t *)(this + 1732) + 968));
    return UnitClass::ApproachEvaluate((uint32_t *)this);
}

unsigned int  TechnoClass::sub_740B60(_WORD *this, int *a2, int **a3)
{
    int *v3; // ebx
    int v4; // ebp
    int v6; // eax
    int *v7; // eax
    unsigned int v8; // eax
    _WORD *v9; // eax
    int v10; // ecx
    int v11; // esi
    void *v12; // eax
    int **v13; // eax
    int v14; // ecx
    uint32_t *v15; // esi
    char v16; // al
    int ClosestObjectCell; // eax
    __int64 v18; // rax
    int v19; // ecx
    int **v20; // esi
    unsigned int result; // eax
    _WORD *v22; // eax
    int v23; // ecx
    __int16 v24; // bx
    int LandHeight; // [esp+0h] [ebp-54h]
    int v26; // [esp+1Ch] [ebp-38h]
    int *v27; // [esp+20h] [ebp-34h]
    int v28; // [esp+24h] [ebp-30h]
    int *v29; // [esp+28h] [ebp-2Ch] BYREF
    unsigned int v30; // [esp+2Ch] [ebp-28h]
    int v31; // [esp+30h] [ebp-24h]
    char v32[4]; // [esp+34h] [ebp-20h] BYREF
    int v33; // [esp+38h] [ebp-1Ch] BYREF
    uint32_t v34[3]; // [esp+3Ch] [ebp-18h] BYREF
    int v35[3]; // [esp+48h] [ebp-Ch] BYREF
    v3 = a2;
    v4 = 0;
    if ( a2 )
    v6 = (*(int (__thiscall **)(int *))(*a2 + 72))(a2);
    v7 = (int *)(*(int (__thiscall **)(_WORD *, int *, int))(*(uint32_t *)this + 72))(this, &v33, v6);
    v8 = *(uint32_t *)Cell::GetHeight(&a2, v7, v35);
    else
    LOWORD(a2) = *(_WORD *)ProgressTimer::GetValue(this + 452, &a2) + 0x7FFF;
    v8 = (unsigned int)a2;
    v28 = 0;
    v26 = -1;
    v31 = (char)(((v8 >> 7) + 1) >> 1);
    do
    v9 = (_WORD *)(*(int (__thiscall **)(_WORD *, char *))(*(uint32_t *)this + 440))(this, v32);
    v10 = v4 & 7;
    LOWORD(v27) = LOWORD(Direction_X_Offsets[v10]) + *v9;
    HIWORD(v27) = v9[1] + HIWORD(Direction_X_Offsets[v10]);
    a2 = v27;
    if ( v3 )
    v11 = *v3;
    LandHeight = ObjectClass::GetLandHeight(this);
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v11 + 428))(v3, v12, v4, LandHeight, 0, 1)
    || (v13 = (int **)(*(int (__thiscall **)(int *, int *))(*v3 + 440))(v3, &v33), *v13 == a2) )
    v14 = 128;
    goto LABEL_16;
    else
    v29 = v27;
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v29);
    if ( flt_89EA40[9 * v15[59]] != 0.0 )
    v16 = *((uint8_t *)v15 + 292);
    if ( (v16 & 0xE0) == 0 && (v16 & 0x1F) != 0x1F )
    v34[0] = 0;
    v34[1] = 0;
    if ( !Object::FindClosestObjectCell(v15, v34, 0, 0)
    || (v35[0] = 0,
    v35[1] = 0,
    ClosestObjectCell = Object::FindClosestObjectCell(v15, v35, 0, 0),
    Object::IsAlliedWithObjectHouse(*((uint32_t **)this + 135), ClosestObjectCell)) )
    v14 = 128;
    goto LABEL_16;
    v14 = -128;
    LABEL_16:
    LOWORD(v30) = (_WORD)v4 << 13;
    v18 = (char)(((v30 >> 7) + 1) >> 1) - v31;
    v19 = v14 - ((HIDWORD(v18) ^ v18) - HIDWORD(v18));
    if ( v4 == 4 )
    v19 -= 100;
    if ( v26 == -1 || v19 > v26 )
    v26 = v19;
    v28 = v4;
    ++v4;
    while ( v4 < 8 );
    v20 = a3;
    result = 4;
    *a3 = (int *)g_UnitSelectionState;
    if ( v26 > 0 )
    v22 = (_WORD *)(*(int (__thiscall **)(_WORD *, int ***))(*(uint32_t *)this + 440))(this, &a3);
    v23 = v28 & 7;
    v24 = Direction_X_Offsets[v23];
    LOWORD(v23) = v22[1] + HIWORD(Direction_X_Offsets[v23]);
    LOWORD(a2) = *v22 + v24;
    HIWORD(a2) = v23;
    *v20 = a2;
    result = dword_8458D0[v28];
    if ( *(uint8_t *)(*((uint32_t *)this + 433) + 3220) )
    return ((unsigned int)((*ProgressTimer::GetValue(this + 452, &a2) >> 12) + 1) >> 1) & 7;
    return result;
}

int  TechnoClass::sub_740EF0(uint8_t *this)
{
    int v2; // eax
    int v3; // edx
    char *MissionControl; // eax
    v2 = (*(int (__thiscall **)(uint8_t *, int *, uint32_t, uint32_t))(*(uint32_t *)this + 1320))(
    this,
    &RulesClass_Instance->BuildHelipad[2],
    0,
    0);
    v3 = *(uint32_t *)this;
    *(this + 1746) = 0;
    if ( !v2 )
    if ( (*(int (__thiscall **)(uint8_t *, int *, uint32_t, int))(v3 + 1320))(
    this,
    &RulesClass_Instance->BuildHelipad[2],
    0,
    1) )
    (*(void (__thiscall **)(uint8_t *, uint32_t, int))(*(uint32_t *)this + 1156))(this, 0, 1);
    goto LABEL_4;
    if ( (*(int (__thiscall **)(uint8_t *, int, int))(v3 + 632))(this, 2, v2) != 1 )
    LABEL_4:
    MissionControl = MissionClass::GetMissionControl(this);
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    (*(void (__thiscall **)(uint8_t *, int, uint32_t))(*(uint32_t *)this + 488))(this, 7, 0);
    return 1;
}

uint32_t * TechnoClass::sub_740F80(int this, uint32_t *a2)
{
    int v2; // ecx
    int v4; // [esp+0h] [ebp-4h] BYREF
    v4 = this;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3233) )
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 928), &v4);
    else
    v2 = *TechnoClass::Vt170((void *)this, &v4);
    *a2 = v2;
    return a2;
}

int  TechnoClass::sub_741340(uint32_t *this, int a2, int a3)
{
    int v5; // ecx
    bool v7; // bl
    int v8; // edx
    int v9; // edx
    int v10; // edi
    int v11; // ecx
    int v12; // eax
    char v13; // al
    uint32_t *v14; // esi
    int v15; // ecx
    int v16; // [esp+18h] [ebp-8h]
    int v17; // [esp+28h] [ebp+8h]
    v5 = *(uint32_t *)(*(int (__thiscall **)(uint32_t *, int))(*this + 1016))(this, a3);
    v17 = v5;
    if ( !v5 )
    return 0;
    v7 = 0;
    if ( !a3 )
    v8 = *(this + 238) % *(uint32_t *)(v5 + 156);
    if ( v8 >= 2 )
    v9 = -1;
    else
    v9 = *(uint32_t *)(*(this + 433) + 4 * v8 + 3648);
    v7 = *(this + 432) != -1 && v9 != -1;
    if ( (*(int (__thiscall **)(uint32_t *, int, int, int))(*this + 960))(this, a2, a3, 1) )
    return 0;
    v10 = TechnoClass::FireWeapon((void*377 *)this);
    if ( v10 )
    v11 = *(this + 433);
    v12 = *(uint32_t *)(v11 + 1668);
    if ( v12 > 0 && *(this + 191) < v12 && !*(uint8_t *)(v11 + 3364) )
    TechnoClass::CalcAnimDelay(this);
    if ( !v7 )
    v13 = *(uint8_t *)(*(this + 433) + 3677);
    if ( v13 > 0 )
    *(this + 432) = 2 * v13 - 1;
    if ( *(uint8_t *)(*(uint32_t *)(v10 + 172) + 748) )
    BulletClass::InitScalable((uint32_t **)v10);
    if ( *(uint8_t *)(*(this + 433) + 3378) )
    v14 = this + 123;
    v15 = *(uint32_t *)(v17 + 316);
    *v14 = CurrentFrame;
    v14[1] = v16;
    v14[2] = v15;
    return v10;
    return v10;
}

int  TechnoClass::sub_741490(uint32_t *this)
{
    return *(this + 433);
}

double  TechnoClass::sub_7414A0(int this)
{
    int v1; // eax
    v1 = *(uint32_t *)(this + 1732);
    if ( *(uint8_t *)(v1 + 3598) || *(uint8_t *)(v1 + 3599) )
    return Float4::Sum((float *)(this + 828)) / (double)*(int *)(*(uint32_t *)(this + 1732) + 2048);
    else
    return 0.0;
}

void *__userpurge TechnoClass::sub_743190@<eax>(uint32_t *a1@<ecx>, int a2@<edi>, int a3, int a4, char a5)
{
    int v7; // edi
    int v8; // ebx
    int v9; // eax
    uint32_t **v10; // eax
    int v11; // eax
    uint32_t **v12; // eax
    int v13; // eax
    uint32_t **v14; // eax
    int v15; // eax
    if ( (unsigned __int8)House::IsCurrentPlayer((void*375 *)a1[135]) && *(uint8_t *)(a1[433] + 3602) )
    return 0;
    v7 = a3;
    if ( (a3 & 0x1B978) == 0 )
    if ( !TechnoClass::OwnerHasPower(a1) || *(uint8_t *)(a1[433] + 3285) )
    if ( *(uint32_t *)(*(int (__thiscall **)(uint32_t *, uint32_t, int))(*a1 + 1016))(a1, 0, a2) )
    v12 = (uint32_t **)(*(int (__thiscall **)(uint32_t *, uint32_t))(*a1 + 1016))(a1, 0);
    LOBYTE(v13) = Building::GetRenderType(*v12);
    v7 = v13 | a3;
    if ( *(uint32_t *)(*(int (__thiscall **)(uint32_t *, int))(*a1 + 1016))(a1, 1) )
    v14 = (uint32_t **)(*(int (__thiscall **)(uint32_t *, int))(*a1 + 1016))(a1, 1);
    LOBYTE(v15) = Building::GetRenderType(*v14);
    v7 |= v15;
    else
    v8 = *a1;
    v9 = TechnoClass::GetPoweredWeaponIndex(a1);
    v10 = (uint32_t **)(*(int (__thiscall **)(uint32_t *, int))(v8 + 1016))(a1, v9);
    LOBYTE(v11) = Building::GetRenderType(*v10);
    v7 = v11 | a3;
    return FootClass::SelectAutoTarget_Cloaked((int)a1, v7, a4, a5);
}

char  TechnoClass::sub_7440B0(int this)
{
    int v2; // eax
    int **v3; // edi
    __int16 *v4; // eax
    uint8_t v6[4]; // [esp+4h] [ebp-4h] BYREF
    if ( !(unsigned __int8)TechnoClass::CleanupDirection((uint8_t *)this) )
    return 0;
    v2 = *(uint32_t *)(this + 1740);
    if ( v2 != -1 )
    v3 = (int **)((char *)HouseClass_Array + 4 * v2);
    v4 = (__int16 *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 440))(this, v6);
    HouseClass::DroppedFlag(*v3, v4, 0);
    *(uint32_t *)(this + 1740) = -1;
    return 1;
}

bool  TechnoClass::sub_744180(uint8_t *this)
{
    uint8_t *v1; // esi
    v1 = this + 848;
    return !Window::IsVisible(this + 848) && !BuildingClass::CheckFlag24(v1) && !BuildingClass::CheckPowerFlags(v1);
}

int __stdcall TechnoClass::sub_7441B0(uint32_t *a1)
{
    uint32_t *v1; // edi
    int result; // eax
    v1 = Coord::To_Cell(&MapClass_Instance, a1);
    if ( dword_B1D0AC + Cell::GetGroundHeight(a1) <= a1[2] && (v1[80] & 0x100) != 0 )
    result = v1[74];
    LOBYTE(result) = result | 0x20;
    v1[74] = result;
    else
    result = v1[73];
    LOBYTE(result) = result | 0x20;
    v1[73] = result;
    return result;
}

char __stdcall TechnoClass::sub_744210(uint32_t *a1)
{
    uint32_t *v1; // edi
    int v2; // eax
    v1 = Coord::To_Cell(&MapClass_Instance, a1);
    if ( dword_B1D0AC + Cell::GetGroundHeight(a1) > a1[2] )
    v2 = v1[73];
    LOBYTE(v2) = v2 & 0xDF;
    v1[73] = v2;
    else
    v2 = v1[74];
    LOBYTE(v2) = v2 & 0xDF;
    v1[74] = v2;
    return v2;
}

char  TechnoClass::sub_744270(uint32_t *this)
{
    int v2; // eax
    uint32_t *v3; // edi
    int v4; // esi
    uint32_t *v6; // esi
    uint32_t *v7; // eax
    uint32_t *v8; // eax
    uint32_t *v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // ecx
    uint32_t v14[2]; // [esp+14h] [ebp-Ch] BYREF
    int v15; // [esp+1Ch] [ebp-4h]
    v2 = *(this + 43);
    if ( v2 == 6 || v2 == 21 || *((uint8_t *)this + 1761) || *((uint8_t *)this + 1762) || *((uint8_t *)this + 1745) )
    return 0;
    if ( *(this + 45) != 7 )
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 128))(*(this + 413))
    && (*(int (__thiscall **)(uint32_t *))(*this + 456))(this) >= 0
    && (*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 5
    && ((*(int (__thiscall **)(uint32_t *))(*this + 388))(this) != 1 || *(this + 173))
    && !*((uint8_t *)this + 184) )
    return 0;
    if ( !Flag::CheckNone((uint8_t *)this + 848) )
    return 0;
    v3 = (uint32_t *)Array::Get(this, 0);
    if ( v3 )
    if ( (*(int (__thiscall **)(uint32_t *))(*v3 + 44))(v3) == 6 )
    if ( *(uint8_t *)(v3[328] + 5821) )
    v4 = *(this + 45);
    if ( v4 != 2 && v4 != 7 )
    return 0;
    else
    v6 = this + 39;
    v14[0] = *v6;
    v14[1] = v6[1];
    v15 = v6[2];
    v7 = Coord::To_Cell(&MapClass_Instance, v14);
    v8 = Cell::IsBridge(v7);
    if ( v8 )
    if ( *(uint8_t *)(v8[328] + 5821) )
    v9 = v8 + 39;
    v10 = v8[39];
    v11 = v9[1];
    v15 = v9[2];
    LOWORD(v14[0]) = v10 / 256;
    v12 = v11;
    v13 = v6[1];
    HIWORD(v14[0]) = v12 / 256;
    if ( (unsigned __int16)(*v6 / 256) == LOWORD(v14[0]) && (unsigned __int16)(v13 / 256) - HIWORD(v14[0]) == 1 )
    return 0;
    return 1;
}

int  TechnoClass::sub_744720(int this, int a2)
{
    uint32_t *v3; // ecx
    void **v4; // ecx
    void **v5; // ecx
    v3 = *(uint32_t **)(this + 52);
    if ( v3 && (*(uint32_t *)(this + 824) == -1 || !TechnoClass::HasAnyMission(v3)) )
    if ( a2 )
    TeamClass::Update_0(*(void ***)(this + 52), 7, this, g_UnitSelectionState, 0, 0);
    v4 = *(void ***)(this + 52);
    if ( v4 )
    TeamClass::Update_0(v4, 48, this, g_UnitSelectionState, 0, 0);
    v5 = *(void ***)(this + 52);
    if ( v5 )
    TeamClass::Update_0(v5, 29, this, g_UnitSelectionState, 0, 0);
    return TechnoClass::RegisterKill((void*377 *)this);
}

char  TechnoClass::sub_7463A0(int this, int a2, int a3)
{
    uint8_t *v4; // esi
    if ( a2 == *(uint32_t *)(this + 540) )
    return 0;
    v4 = *(uint8_t **)(this + 1736);
    *(uint8_t *)(this + 1744) = 0;
    if ( v4 )
    (*(void (__thiscall **)(uint8_t *, int, int))(*(uint32_t *)v4 + 980))(v4, a2, 1);
    *(uint32_t *)(this + 1736) = v4;
    v4[1744] = 1;
    return FootClass::LiberateMember((uint32_t *)this, a2, 1);
}

bool  TechnoClass::sub_746400(uint32_t *this)
{
    return *(uint8_t *)(*(this + 433) + 3611) == 0;
}

int  TechnoClass::sub_746420(int *this, uint32_t *a2)
{
    int v3; // ebx
    int v4; // edx
    int v5; // eax
    int v6; // ebp
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v11; // [esp+10h] [ebp-8h]
    v3 = a2[157];
    if ( !v3 )
    goto LABEL_9;
    v4 = a2[187];
    v5 = a2[189];
    v6 = 0;
    if ( v4 == -1 )
    goto LABEL_5;
    if ( (int)CurrentFrame - v4 < v5 )
    v5 -= (int)CurrentFrame - v4;
    LABEL_5:
    if ( v5 )
    v6 = 1;
    *(this + 157) = v3;
    *(uint32_t *)(v3 + 36) = this;
    a2[157] = 0;
    UnitClass::SetTurret(this, 7u);
    if ( v6 )
    v7 = *this;
    ++*(this + 238);
    v8 = (*(int (__thiscall **)(int *, int))(v7 + 792))(this, 7);
    *(this + 187) = (int)CurrentFrame;
    *(this + 188) = v11;
    *(this + 189) = v8;
    LABEL_9:
    v9 = (*(int (__thiscall **)(uint32_t *))(*a2 + 132))(a2);
    return UnitClass::SetTurret(this, *(uint32_t *)(v9 + 1672));
}

int  TechnoClass::sub_7464E0(uint32_t *this, int *a2)
{
    int v3; // ebx
    int v4; // edx
    int v5; // eax
    int v6; // ebp
    uint32_t *v7; // ecx
    int v8; // edx
    int v9; // eax
    int v11; // [esp+10h] [ebp-8h]
    if ( !a2 )
    return UnitClass::SetTurret(this, 0);
    v3 = *(this + 157);
    if ( !v3 )
    return UnitClass::SetTurret(this, 0);
    v4 = *(this + 187);
    v5 = *(this + 189);
    v6 = 0;
    if ( v4 == -1 )
    goto LABEL_6;
    if ( (int)CurrentFrame - v4 < v5 )
    v5 -= (int)CurrentFrame - v4;
    LABEL_6:
    if ( v5 )
    v6 = 1;
    a2[157] = v3;
    *(uint32_t *)(*(this + 157) + 36) = a2;
    *(this + 157) = 0;
    v7 = (uint32_t *)a2[157];
    if ( v7 && v7[10] )
    FactoryClass::CompleteItem(v7);
    if ( v6 )
    v8 = *a2;
    ++a2[238];
    v9 = (*(int (__thiscall **)(int *, uint32_t))(v8 + 792))(a2, 0);
    a2[187] = (int)CurrentFrame;
    a2[188] = v11;
    a2[189] = v9;
    return UnitClass::SetTurret(this, 0);
}

int  TechnoClass::sub_7465B0(int this, char a2)
{
    if ( !(unsigned __int8)House::IsAlliedWith(*(void*375 **)(this + 540), HouseClass_Player) || a2 )
    return *(uint32_t *)(this + 1304);
    else
    return *(uint32_t *)(this + 1732);
}

int  TechnoClass::sub_7465F0(int this, char a2)
{
    if ( !(unsigned __int8)House::IsAlliedWith(*(void*375 **)(this + 540), HouseClass_Player) || a2 )
    return *(uint32_t *)(this + 1308);
    else
    return *(uint32_t *)(this + 540);
}

void  TechnoClass::sub_746670(#377 *this, uint32_t *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    if ( a2 )
    v3 = (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) - 1;
    if ( v3 )
    v4 = v3 - 10;
    if ( v4 )
    if ( v4 != 25 )
    return;
    v5 = (*(int (__thiscall **)(uint32_t *))(*a2 + 136))(a2);
    goto LABEL_6;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *, uint32_t *))(*(uint32_t *)this + 920))(this, a2) )
    v5 = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * a2[17]];
    LABEL_6:
    *((uint32_t *)this + 326) = v5;
    *((uint32_t *)this + 327) = 0;
    TechnoClass::ActivateEffect(this);
    else if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*a2 + 196))(a2) )
    *((uint32_t *)this + 326) = (*(int (__thiscall **)(uint32_t *, int))(*a2 + 204))(a2, 1);
    *((uint32_t *)this + 327) = (*(int (__thiscall **)(uint32_t *, int))(*a2 + 208))(a2, 1);
    TechnoClass::ActivateEffect(this);
}

int  TechnoClass::sub_746720(uint8_t *this)
{
    int v2; // eax
    int result; // eax
    v2 = *(uint32_t *)this;
    *(this + 472) = 0;
    result = (*(int (**)(void))(v2 + 1180))();
    *((uint32_t *)this + 326) = 0;
    *((uint32_t *)this + 327) = 0;
    return result;
}

bool  TechnoClass::sub_746750(#375 **this, #375 *other)
{
    uint32_t *v3; // eax
    _WORD *v4; // ebx
    void*375 *v5; // esi
    bool result; // al
    int v7; // [esp+Ch] [ebp-14h]
    int v8; // [esp+10h] [ebp-10h] BYREF
    uint8_t v9[12]; // [esp+14h] [ebp-Ch] BYREF
    result = 0;
    if ( (*((unsigned __int8 (__thiscall **)(void*375 **))*this + 49))(this) )
    v3 = (uint32_t *)(*((int (__thiscall **)(void*375 **, uint8_t *))*this + 18))(this, v9);
    LOWORD(v7) = *v3 / 256;
    HIWORD(v7) = v3[1] / 256;
    v8 = v7;
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v8);
    if ( !(unsigned __int8)House::IsAlliedWith(*(this + 135), other)
    && !HouseClass::HasType(v4, *((uint32_t *)other + 12)) )
    v5 = *(this + 327);
    if ( v5 == other || !v5 || (unsigned __int8)House::IsAlliedWith(other, v5) )
    return 1;
    return result;
}

int  TechnoClass::sub_746B20(int this)
{
    int result; // eax
    uint32_t *DB; // edi
    bool v4; // bl
    int v5; // eax
    wchar_t *StringCSF; // eax
    if ( !(*(unsigned __int8 (__thiscall **)(int, void*375 *))(*(uint32_t *)this + 200))(this, HouseClass_Player)
    || !(*(int (__thiscall **)(int, int))(*(uint32_t *)this + 204))(this, 1) )
    if ( !TechnoClass::OwnerHasPower((void *)this) || !TechnoClass::processEMPulse((void *)this) )
    return *(uint32_t *)(*(uint32_t *)(this + 1732) + 96);
    DB = (uint32_t *)CCINIClass::GetDB((uint32_t *)(this + 276));
    if ( !DB || (*(int (__thiscall **)(uint32_t *))(*DB + 44))(DB) != 15 )
    goto LABEL_20;
    v4 = *(uint8_t *)(DB[432] + 3786) != 0;
    v5 = TechnoClass::applyEMPulseDamage((uint32_t *)this);
    switch ( v5 )
    case 0:
    StringCSF = GetStringCSF(aTipRocket, 0, g_Str_File_Unit_CPP, 11408);
    goto LABEL_19;
    case 1:
    if ( !v4 )
    StringCSF = GetStringCSF(aTipMachinegun, 0, g_Str_File_Unit_CPP, 11412);
    goto LABEL_19;
    break;
    case 2:
    StringCSF = GetStringCSF(aTipRepair, 0, g_Str_File_Unit_CPP, 11416);
    goto LABEL_19;
    default:
    if ( v5 != 3 && !v4 )
    goto LABEL_20;
    break;
    StringCSF = *(wchar_t **)((*(int (__thiscall **)(uint32_t *))(*DB + 136))(DB) + 96);
    LABEL_19:
    if ( StringCSF )
    LABEL_21:
    swprintf(
    (wchar_t *const)(this + 1768),
    (const size_t)&off_826960,
    StringCSF,
    *(uint32_t *)(*(uint32_t *)(this + 1732) + 96));
    return this + 1768;
    LABEL_20:
    StringCSF = GetStringCSF(aTipRocket, 0, g_Str_File_Unit_CPP, 11454);
    goto LABEL_21;
    result = (*(int (__thiscall **)(int, int))(*(uint32_t *)this + 208))(this, 1);
    if ( result )
    return *(uint32_t *)((*(int (__thiscall **)(int, int))(*(uint32_t *)this + 204))(this, 1) + 96);
    return result;
}

int  TechnoClass::sub_746CD0(int this, int a2)
{
    int v2; // eax
    if ( *(uint8_t *)(this + 1760) && (v2 = *(uint32_t *)(this + 1732), *(uint8_t *)(v2 + 1708)) )
    return *(uint32_t *)(v2 + 1704);
    else
    return TechnoClass::SelectWeapon((void*377 *)this);
}

int  TechnoClass::sub_746D60(#377 *this)
{
    TechnoClass::CreateDeathAnim((int)this);
    return ObjectClass::FreeCaptureManager(this);
}

uint32_t * TechnoClass::sub_746E30(int this, uint32_t *a2)
{
    int v2; // ecx
    int v4; // [esp+0h] [ebp-4h] BYREF
    v4 = this;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3233) )
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 928), &v4);
    else
    v2 = *ProgressTimer::GetValue((_WORD *)(this + 904), &v4);
    *a2 = v2;
    return a2;
}

int  TechnoClass::GetWeaponRange(uint32_t *this, void *a2)
{
    int v2; // eax
    double FiringDistance; // st7
    v2 = *(this + 40);
    if ( !v2 || *(uint32_t *)(v2 + 732) )
    return *(this + 42);
    if ( *(uint8_t *)(v2 + 661) )
    FiringDistance = RulesClass::GetFiringDistance();
    else
    FiringDistance = (double)RulesClass_Instance[1].WeatherConBoltExplosion;
    return TechnoClass::ComputeScanRange(a2, FiringDistance);
}

