#include "aircraftclass.hpp"

int  AircraftClass::_vt00(#374 *this, AbstractClass *a2, void *iid, void **ppv)
{
    int result; // eax
    result = AbstractClass::QueryInterface(this);
    if ( result < 0 )
    if ( !memcmp(iid, &IID_IFlyControl, 0x10u) )
    if ( a2 )
    *ppv = (char *)&a2[42].parent_gap[1] + 2;
    (*(void (__stdcall **)(AbstractClass *))(a2->parent_gap[0] + 4))(a2);
    return 0;
    *ppv = 0;
    (*(void (__stdcall **)(AbstractClass *))(a2->parent_gap[0] + 4))(a2);
    return 0;
    return result;
}

int  AircraftClass::_vt01(#374 *this, int a2)
{
    return AbstractClass::COMStub_AddRef(this);
}

int  AircraftClass::_vt02(#374 *this, int a2)
{
    return AbstractClass::COMStub_Release(this);
}

int  AircraftClass::ProcessMissionTimeout(uint32_t *this)
{
    char *MissionControl; // eax
    int v3; // esi
    int v5; // edi
    int v6; // eax
    int v7; // edi
    int v8; // eax
    int v9; // [esp+10h] [ebp-Ch] BYREF
    int v10; // [esp+14h] [ebp-8h]
    int v11; // [esp+18h] [ebp-4h]
    if ( *(this + 191) )
    if ( *(this + 173) )
    goto LABEL_12;
    if ( GameMode_Current[0] )
    v5 = *this;
    v9 = *(this + 39);
    v10 = *(this + 40);
    v11 = *(this + 41);
    v6 = (*(int (__thiscall **)(uint32_t *, int, int *, uint32_t))(v5 + 964))(this, 64, &v9, 0);
    (*(void (__thiscall **)(uint32_t *, int))(v5 + 968))(this, v6);
    if ( !*(this + 173) )
    v7 = *this;
    v9 = *(this + 39);
    v10 = *(this + 40);
    v11 = *(this + 41);
    v8 = (*(int (__thiscall **)(uint32_t *, uint32_t, int *, uint32_t))(v7 + 964))(this, 0, &v9, 0);
    (*(void (__thiscall **)(uint32_t *, int))(v7 + 968))(this, v8);
    if ( *(this + 173) )
    LABEL_12:
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*this + 488))(this, 1, 0);
    return 1;
    else
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1156))(this, 0, 1);
    return 1;
    else
    if ( *(this + 373) )
    TeamClass::LiberateMember_Start(this, -1, 0);
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1156))(this, 0, 1);
    MissionControl = MissionClass::GetMissionControl(this);
    v3 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v3 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
}

int  AircraftClass::_vt143(int *this)
{
    int v2; // ecx
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    uint32_t *v6; // eax
    char *MissionControl; // eax
    int v8; // esi
    int v10; // eax
    int v11; // edi
    void *ClosestPlacementCell; // eax
    int DB; // eax
    int v14; // edi
    int v15; // eax
    int v16; // ebx
    __int16 *WaypointCoords; // eax
    void *v18; // eax
    void *NearbyCell; // eax
    int v20; // edi
    __int16 *Waypoint_Location; // eax
    void *v22; // eax
    void *v23; // eax
    int v24; // ecx
    int v25; // edi
    int v26; // edi
    _WORD *v27; // eax
    _WORD *v28; // eax
    char *v29; // [esp+0h] [ebp-30h]
    int v30; // [esp+10h] [ebp-20h] BYREF
    int v31; // [esp+14h] [ebp-1Ch] BYREF
    uint8_t v32[4]; // [esp+18h] [ebp-18h] BYREF
    uint8_t v33[4]; // [esp+1Ch] [ebp-14h] BYREF
    uint8_t v34[4]; // [esp+20h] [ebp-10h] BYREF
    uint8_t v35[12]; // [esp+24h] [ebp-Ch] BYREF
    switch ( *(this + 47) )
    case 0:
    if ( !(*(int (__thiscall **)(int *))(*this + 456))(this)
    && *((float *)this + 186) == 0.0
    && ((v2 = *(this + 361)) == 0
    || (v3 = *(this + 39),
    v4 = *(this + 40),
    v5 = *(this + 41),
    v6 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v2 + 72))(v2, v35),
    v3 == *v6)
    && v4 == v6[1]
    && v5 == v6[2]) )
    *(this + 47) = 3;
    else if ( *(this + 361)
    || !*(uint8_t *)(*(this + 433) + 3221)
    || (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0 )
    if ( *(this + 361) )
    if ( (*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 1360))(this, *(this + 361)) )
    DB = CCINIClass::GetDB(this + 69);
    v14 = DB;
    if ( DB
    && (v15 = *(uint32_t *)(DB + 1492)) != 0
    && *TechnoClass::GetWaypointCoords(*(uint32_t **)(v15 + 36), &v30) != g_AircraftStatusFlag )
    v16 = *this;
    WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords(
    *(uint32_t **)(*(uint32_t *)(v14 + 1492) + 36),
    &v31);
    v18 = CellCoord::To_CellObj(&MapClass_Instance, WaypointCoords);
    NearbyCell = InfantryClass::FindNearbyCell(this, (int)v18);
    (*(void (__thiscall **)(int *, void *, int))(v16 + 1152))(this, NearbyCell, 1);
    else
    v20 = *this;
    Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(v32, 700);
    v22 = CellCoord::To_CellObj(&MapClass_Instance, Waypoint_Location);
    v23 = InfantryClass::FindNearbyCell(this, (int)v22);
    (*(void (__thiscall **)(int *, void *, int))(v20 + 1152))(this, v23, 1);
    v24 = *(this + 373);
    if ( v24 )
    TeamClass::SelectMember(v24, *(this + 361));
    else
    v25 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 433) + 188))(*(this + 433));
    *(this + 47) = v25 != (*(int (__thiscall **)(int *))(*this + 456))(this) ? 4 : 1;
    else
    *(this + 47) = 2;
    else
    v10 = (*(int (__thiscall **)(int *, int, uint32_t, uint32_t))(*this + 1320))(this, *(this + 433) + 1000, 0, 0);
    if ( v10 )
    (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v10, 1);
    else
    v11 = *this;
    ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(this);
    (*(void (__thiscall **)(int *, void *, int))(v11 + 1152))(this, ClosestPlacementCell, 1);
    goto LABEL_9;
    case 1:
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413)) )
    *(this + 47) = 2;
    if ( !(*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 1360))(this, *(this + 361)) )
    *(this + 47) = 0;
    goto LABEL_9;
    case 2:
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413)) )
    *(this + 47) = 3;
    return 1;
    case 3:
    if ( !*((uint8_t *)this + 1048) )
    if ( *(this + 70) )
    if ( *(uint8_t *)(*(this + 433) + 3580) )
    (*(void (__thiscall **)(int *, uint32_t))(*this + 292))(this, 0);
    FootClass::MissionMoveCarryallLand(this);
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1);
    else
    v26 = LinkedList::Pop(this + 69);
    v27 = (_WORD *)(*(int (__thiscall **)(int *, uint8_t *, int *))(*this + 440))(this, v33, this);
    MapClass::ApplyOverlayReveal(&MapClass_Instance, v27, v29);
    if ( (*(int (__thiscall **)(int *, int))(*this + 256))(this, v26) )
    *(uint8_t *)(v26 + 1060) = 0;
    v28 = (_WORD *)(*(int (__thiscall **)(int *, uint8_t *))(*this + 440))(this, v34);
    MapClass::FillRevealBuffer(&MapClass_Instance, v28, this);
    if ( !*(uint8_t *)(v26 + 1060) && *(uint32_t *)(v26 + 1492) )
    TeamClass::AddMember(*(this + 373), v26, 0);
    if ( !*(this + 70) )
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    else
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    goto LABEL_9;
    case 4:
    *(this + 47) = 0;
    return 1;
    default:
    LABEL_9:
    MissionControl = MissionClass::GetMissionControl(this);
    v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v8 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
}

int  AircraftClass::_vt140(unsigned int **this)
{
    unsigned int *v2; // ecx
    unsigned int TransitionCount; // eax
    unsigned int *v4; // edi
    void *v5; // eax
    int v7; // [esp+4h] [ebp-8h] BYREF
    int v8; // [esp+8h] [ebp-4h] BYREF
    if ( *(this + 361) )
    if ( *(this + 361) == (unsigned int *)((int (__thiscall *)(unsigned int **))(*this)[111])(this) )
    ((void (__thiscall *)(unsigned int **, uint32_t, int))(*this)[288])(this, 0, 1);
    else
    v2 = *(this + 135);
    TransitionCount = v2[120];
    if ( TransitionCount >= 4 )
    TransitionCount = HouseClass::GetTransitionCount(v2);
    v7 = *CellClass::FindOpenNeighbor(
    (int *)&MapClass_Instance,
    &v8,
    TransitionCount,
    (int)&g_AircraftStatusFlag,
    (int)&g_AircraftStatusFlag,
    4,
    1,
    0);
    if ( v7 != g_AircraftStatusFlag )
    v4 = *this;
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v7);
    ((void (__thiscall *)(unsigned int **, void *, int))v4[288])(this, v5, 1);
    return 3;
    return 3;
}

// 0x00415B10
int  AircraftClass::FindLandingCell(uint32_t *this, int *a2, int a3)
{
    int *v5; // ebp
    int v6; // esi
    _WORD *v7; // eax
    int v8; // esi
    int v9; // ecx
    __int16 v10; // dx
    int v11; // esi
    void *v12; // eax
    int v13; // edx
    int v14; // eax
    int v15; // esi
    void *v16; // eax
    unsigned int v18; // [esp+28h] [ebp-18h] BYREF
    int v19; // [esp+2Ch] [ebp-14h]
    char v20[4]; // [esp+30h] [ebp-10h] BYREF
    uint32_t v21[3]; // [esp+34h] [ebp-Ch] BYREF
    unsigned int v22; // [esp+44h] [ebp+4h]
    v18 = 0;
    v19 = 0;
    v5 = dword_817A58;
    do
    v6 = *v5;
    v7 = (_WORD *)(*(int (__thiscall **)(uint32_t *, char *))(*this + 440))(this, v20);
    v8 = v6 & 7;
    v9 = 4 * v8 + 9041544;
    v10 = *v7 + LOWORD(Direction_X_Offsets[v8]);
    v11 = *a2;
    LOWORD(v22) = v10;
    HIWORD(v22) = v7[1] + *(_WORD *)(v9 + 2);
    v18 = v22;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18);
    if ( !(*(int (__thiscall **)(int *, void *, int, int, uint32_t, int))(v11 + 428))(a2, v12, -1, -1, 0, 1) )
    break;
    ++v5;
    ++v19;
    while ( (int)v5 < (int)dword_817A78 );
    LOWORD(v22) = (unsigned __int16)dword_817A58[v19] << 13;
    v13 = *(this + 40);
    v21[0] = *(this + 39);
    v14 = *(this + 41);
    v21[1] = v13;
    v21[2] = v14;
    if ( !(*(unsigned __int8 (__thiscall **)(int *, uint32_t *, uint32_t))(*a2 + 216))(
    a2,
    v21,
    (unsigned __int8)(((v22 >> 7) + 1) >> 1)) )
    return 0;
    (*(void (__thiscall **)(int *, int, uint32_t))(*a2 + 488))(a2, 2, 0);
    v15 = *a2;
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18);
    (*(void (__thiscall **)(int *, void *, int))(v15 + 1152))(a2, v16, 1);
    if ( (*(int (__thiscall **)(uint32_t *, int, int *))(*this + 632))(this, 2, a2) == 1 )
    (*(void (__thiscall **)(uint32_t *, int))(*this + 628))(this, 9);
    return 1;
}

int __usercall AircraftClass::_vt139@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5@<esi>)
{
    int result; // eax
    int v7; // eax
    char *MissionControl; // eax
    int v9; // esi
    int v10; // edi
    void *NearbyCell; // eax
    int v12; // ecx
    uint32_t *v13; // eax
    int v14; // ecx
    int *v15; // eax
    int v16; // edx
    int v17; // edi
    int *v18; // eax
    int Element; // eax
    int *v20; // eax
    int v21; // ecx
    uint32_t *v22; // eax
    int v23; // edi
    int v24; // ebx
    _WORD *v25; // eax
    int v26; // ecx
    uint32_t *v27; // eax
    int v28; // ecx
    uint32_t *v29; // eax
    int v30; // edi
    int v31; // ebx
    _WORD *v32; // eax
    int v33; // ecx
    uint32_t *v34; // eax
    int v35; // [esp+0h] [ebp-60h]
    int v36; // [esp+4h] [ebp-5Ch]
    int v39; // [esp+1Ch] [ebp-44h]
    int v40; // [esp+1Ch] [ebp-44h]
    int v41; // [esp+20h] [ebp-40h] BYREF
    int v42; // [esp+24h] [ebp-3Ch] BYREF
    uint8_t v43[4]; // [esp+28h] [ebp-38h] BYREF
    int v44; // [esp+2Ch] [ebp-34h] BYREF
    int v45[2]; // [esp+30h] [ebp-30h] BYREF
    int v46; // [esp+38h] [ebp-28h]
    uint8_t v47[12]; // [esp+3Ch] [ebp-24h] BYREF
    uint8_t v48[12]; // [esp+48h] [ebp-18h] BYREF
    uint32_t v49[3]; // [esp+54h] [ebp-Ch] BYREF
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3580) )
    return Carryall::MissionStateMachine(a1);
    switch ( *(uint32_t *)(a1 + 188) )
    case 0:
    v7 = *(uint32_t *)(a1 + 1444);
    if ( v7 )
    v10 = *(uint32_t *)a1;
    NearbyCell = InfantryClass::FindNearbyCell((uint32_t *)a1, v7);
    (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(a1, NearbyCell, 1);
    *(uint32_t *)(a1 + 188) = 1;
    else
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    goto LABEL_6;
    case 1:
    v12 = *(uint32_t *)(a1 + 1444);
    if ( !v12 )
    goto LABEL_29;
    v13 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *, int, int, int, int, int))(*(uint32_t *)v12 + 76))(
    v12,
    v47,
    a1,
    a4,
    a5,
    a3,
    a2);
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__cdecl **)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 1652) + 68))(*(uint32_t *)(a1 + 1652), *v13);
    *(uint32_t *)(a1 + 188) = 2;
    return 1;
    case 2:
    if ( *(uint32_t *)(a1 + 1312) != -1 )
    v14 = *(uint32_t *)(a1 + 1444);
    if ( !v14 )
    goto LABEL_15;
    v15 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v14 + 72))(v14, v48);
    v16 = *v15;
    v17 = v15[1];
    v46 = v15[2];
    a2 = *(uint32_t *)(a1 + 164);
    v36 = *(uint32_t *)(a1 + 160) - v17;
    v35 = *(uint32_t *)(a1 + 156) - v16;
    v46 = a2;
    v18 = Coord::Subtract(v49, v35, v36, 0);
    v45[0] = *v18;
    v45[1] = v18[1];
    v46 = v18[2];
    if ( (int)Coord::Length(v45) < 256 )
    LABEL_15:
    Element = Array::GetElement(
    *((uint32_t **)HouseClass_Player + *(uint32_t *)(a1 + 1312) + 132),
    *(char *)(a1 + 1670));
    v20 = (int *)VectorClass::GetAtChecked(*((int **)HouseClass_Player + *(uint32_t *)(a1 + 1312) + 132), Element);
    BuildingClass::ValidateFoundation_0(a1, a2, a3, v20, a4, a5);
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 16))(*(uint32_t *)(a1 + 1652)) )
    goto LABEL_40;
    v21 = *(uint32_t *)(a1 + 1444);
    if ( v21 )
    v22 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)v21 + 76))(v21, v49, a1);
    v23 = *v22 / 256;
    v24 = v22[1] / 256;
    v25 = (_WORD *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)a1 + 440))(a1, v43);
    if ( (_WORD)v23 == *v25 && (_WORD)v24 == v25[1] )
    goto LABEL_40;
    v26 = *(uint32_t *)(a1 + 1444);
    if ( v26 )
    v27 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)v26 + 76))(v26, v49, a1);
    LOWORD(v39) = *v27 / 256;
    HIWORD(v39) = v27[1] / 256;
    v41 = v39;
    if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v41, 1) )
    goto LABEL_24;
    *(uint32_t *)(a1 + 188) = 4;
    return 1;
    case 3:
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 16))(*(uint32_t *)(a1 + 1652)) )
    LABEL_29:
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    return 1;
    case 4:
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 16))(*(uint32_t *)(a1 + 1652))
    || (v28 = *(uint32_t *)(a1 + 1444)) != 0
    && (v29 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)v28 + 76))(v28, v49, a1),
    v30 = *v29 / 256,
    v31 = v29[1] / 256,
    v32 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &v44),
    (_WORD)v30 == *v32)
    && (_WORD)v31 == v32[1] )
    LABEL_40:
    *(uint32_t *)(a1 + 188) = 3;
    else
    v33 = *(uint32_t *)(a1 + 1444);
    if ( v33 )
    v34 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *, int))(*(uint32_t *)v33 + 76))(v33, v49, a1);
    LOWORD(v40) = *v34 / 256;
    HIWORD(v40) = v34[1] / 256;
    v42 = v40;
    if ( !Cell::IsOccupied((void **)a1, (__int16 *)&v42, 1) )
    LABEL_24:
    *(uint32_t *)(a1 + 188) = 0;
    return 1;
    result = 1;
    break;
    default:
    LABEL_6:
    MissionControl = MissionClass::GetMissionControl((uint32_t *)a1);
    v9 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v9 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    return result;
}

char  AircraftClass::_vt81(uint32_t *this, int a2, int *a3, int a4)
{
    int v5; // eax
    char result; // al
    v5 = ((__int64 (__thiscall *)(uint32_t *, int *, int))*(uint32_t *)(*this + 116))(this, a3, a4);
    switch ( v5 )
    case 2:
    result = 0;
    break;
    case 3:
    result = (*(int (__thiscall **)(uint32_t *, int, uint32_t, int *, uint32_t))(*this + 888))(this, 7, 0, a3, 0);
    break;
    case 4:
    result = (*(int (__thiscall **)(uint32_t *, int, uint32_t, uint32_t, uint32_t))(*this + 888))(this, 16, 0, 0, 0);
    break;
    case 17:
    result = (*(int (__thiscall **)(uint32_t *, int, uint32_t, int *, uint32_t))(*this + 888))(this, 2, 0, a3, 0);
    break;
    default:
    result = FootClass::ValidateMove(this, v5, a3, a4);
    break;
    return result;
}

int  AircraftClass::GetCursorOverObject(int this, int a2, int a3)
{
    int v3; // ebp
    int *v4; // edi
    int result; // eax
    int v7; // ebx
    uint32_t *v8; // eax
    uint32_t *v9; // eax
    int v10; // eax
    int v11; // ebp
    int v12; // ecx
    int v13; // edx
    uint32_t *v14; // eax
    uint32_t *v15; // eax
    uint32_t *v16; // eax
    int v17; // eax
    char v18[12]; // [esp+10h] [ebp-Ch] BYREF
    v3 = a3;
    v4 = (int *)a2;
    result = InfantryClass::GetCursorOverObject((void *)this, a2, a3);
    v7 = result;
    if ( result == 8 )
    return result;
    if ( result == 26 && *(uint8_t *)(*(uint32_t *)(this + 1732) + 3597) )
    v7 = 0;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3580) && (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    if ( v7 != 7 && v7 )
    goto LABEL_18;
    if ( Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), (int)v4) )
    if ( !v4
    || (LOBYTE(a3) = v4[5] & 1, !(uint8_t)a3)
    || (v8 = (uint32_t *)(*(int (__thiscall **)(int *))(*v4 + 60))(v4), Object::IsAlliedWithObjectHouse(v8, this)) )
    if ( !*(uint32_t *)(this + 280) && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 1 )
    v7 = 17;
    goto LABEL_24;
    if ( !v7 )
    v9 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(*v4 + 72))(v4, v18);
    LOWORD(a3) = *v9 / 256;
    HIWORD(a3) = v9[1] / 256;
    v10 = *(uint32_t *)this;
    a2 = a3;
    v7 = (*(int (__thiscall **)(int, int *, uint32_t, int))(v10 + 112))(this, &a2, 0, v3);
    LABEL_18:
    if ( v7 == 4 )
    if ( *(uint32_t *)(this + 276) )
    goto LABEL_24;
    LABEL_23:
    v7 = 0;
    goto LABEL_24;
    if ( v7 == 5 && !*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    goto LABEL_23;
    LABEL_24:
    if ( (unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    if ( v7 == 7 && (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 6 )
    v11 = v4[328];
    if ( *(uint8_t *)(v11 + 5801) )
    v12 = 0;
    v13 = *(uint32_t *)(*(uint32_t *)(this + 1732) + 1016);
    if ( v13 <= 0 )
    goto LABEL_36;
    v14 = *(uint32_t **)(*(uint32_t *)(this + 1732) + 1004);
    while ( *v14 != v11 )
    ++v12;
    ++v14;
    if ( v12 >= v13 )
    goto LABEL_36;
    if ( !Array::ContainsValue(v4, this)
    || v4[70]
    || (v7 = 3, (*(int (__thiscall **)(int, int, int *))(*(uint32_t *)this + 632))(this, 15, v4) != 1) )
    LABEL_36:
    v7 = 31;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3580) && v7 == 17 )
    a3 = *(uint32_t *)(*(int (__thiscall **)(int *, int *))(*v4 + 440))(v4, &a2);
    if ( a3 != g_AircraftStatusFlag )
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    v16 = Cell::IsBridge(v15);
    if ( v16 )
    if ( *(uint8_t *)(v16[328] + 5821) )
    return 0;
    else if ( v7 == 2 )
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v4 + 196))(v4) )
    if ( !(*(int (__thiscall **)(int *, int))(*v4 + 208))(v4, 1) )
    v17 = (*(int (__thiscall **)(int *, int))(*v4 + 204))(v4, 1);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)v17 + 44))(v17) == 21 )
    return 1;
    else if ( v7 == 5 && *(uint8_t *)((*(int (__thiscall **)(int *))(*v4 + 136))(v4) + 563) )
    return 2;
    return v7;
}

int  AircraftClass::_vt28(int this, __int16 *a2, char a3, char a4)
{
    int v6; // edi
    if ( !(unsigned __int8)House::IsHumanPlayer(*(void*375 **)(this + 540)) )
    return 0;
    v6 = FootClass::HandleCursorWithCheck((int *)this, a2, a3, a4);
    if ( v6 == 5 && !*(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    return 0;
    return v6;
}

int  AircraftClass::Mission_Attack(int *this)
{
    int v2; // eax
    int v3; // eax
    int result; // eax
    char v5; // al
    int v6; // eax
    int v7; // eax
    int v8; // edi
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int *v12; // edi
    int v13; // edi
    int v14; // edi
    int *v15; // eax
    int v16; // edx
    int *v17; // edi
    int *v18; // eax
    double v19; // st7
    int *v20; // ebx
    int *v21; // eax
    int *v22; // eax
    int v23; // edi
    int v24; // eax
    int v25; // edi
    int v26; // ebp
    int v27; // eax
    int v28; // edi
    int v29; // eax
    int v30; // edi
    int v31; // eax
    uint32_t *v32; // eax
    uint32_t *v33; // eax
    int v34; // edx
    int v35; // eax
    bool v36; // zf
    bool v37; // sf
    int v38; // eax
    int *v39; // eax
    int *v40; // eax
    int v41; // edi
    int v42; // eax
    int v43; // eax
    int v44; // edi
    int v45; // eax
    uint32_t *v46; // eax
    uint32_t *v47; // eax
    int v48; // eax
    int v49; // edi
    int v50; // eax
    int v51; // edi
    int v52; // ecx
    uint32_t *v53; // eax
    uint32_t *v54; // eax
    int v55; // edx
    int v56; // eax
    int v57; // edi
    int v58; // eax
    int v59; // edi
    uint32_t *v60; // eax
    uint32_t *v61; // eax
    int v62; // edx
    int v63; // eax
    int v64; // edi
    int v65; // eax
    int v66; // edi
    uint32_t *v67; // eax
    uint32_t *v68; // eax
    int v69; // edx
    int v70; // eax
    int v71; // edi
    int v72; // eax
    int v73; // edi
    int v74; // ecx
    uint32_t *v75; // eax
    uint32_t *v76; // eax
    int v77; // edx
    char v78; // al
    int v79; // eax
    unsigned int *v80; // ecx
    unsigned int TransitionCount; // eax
    int *OpenNeighbor; // eax
    int v83; // edi
    void *v84; // eax
    int v85; // eax
    char *MissionControl; // eax
    int v87; // esi
    int v88; // [esp+28h] [ebp-E4h]
    int v89; // [esp+2Ch] [ebp-E0h]
    int v90; // [esp+2Ch] [ebp-E0h]
    int v91; // [esp+2Ch] [ebp-E0h]
    int v92; // [esp+2Ch] [ebp-E0h]
    int v93; // [esp+30h] [ebp-DCh]
    int v94; // [esp+30h] [ebp-DCh]
    int v95; // [esp+30h] [ebp-DCh]
    int v96; // [esp+30h] [ebp-DCh]
    int v97; // [esp+30h] [ebp-DCh]
    int v98; // [esp+34h] [ebp-D8h]
    char v99; // [esp+38h] [ebp-D4h]
    int v100; // [esp+44h] [ebp-C8h] BYREF
    uint32_t v101[2]; // [esp+48h] [ebp-C4h] BYREF
    uint32_t v102[5]; // [esp+50h] [ebp-BCh] BYREF
    uint32_t v103[3]; // [esp+64h] [ebp-A8h] BYREF
    int v104; // [esp+70h] [ebp-9Ch] BYREF
    int v105; // [esp+74h] [ebp-98h] BYREF
    int v106; // [esp+78h] [ebp-94h]
    int v107; // [esp+7Ch] [ebp-90h]
    uint32_t v108[5]; // [esp+80h] [ebp-8Ch] BYREF
    int v109; // [esp+94h] [ebp-78h] BYREF
    int v110; // [esp+98h] [ebp-74h] BYREF
    int v111; // [esp+9Ch] [ebp-70h] BYREF
    int v112; // [esp+A0h] [ebp-6Ch] BYREF
    int v113; // [esp+A4h] [ebp-68h] BYREF
    int v114; // [esp+A8h] [ebp-64h] BYREF
    uint8_t v115[4]; // [esp+ACh] [ebp-60h] BYREF
    uint8_t v116[20]; // [esp+B0h] [ebp-5Ch] BYREF
    uint8_t v117[4]; // [esp+C4h] [ebp-48h] BYREF
    uint8_t v118[24]; // [esp+C8h] [ebp-44h] BYREF
    uint8_t v119[20]; // [esp+E0h] [ebp-2Ch] BYREF
    uint8_t v120[24]; // [esp+F4h] [ebp-18h] BYREF
    switch ( *(this + 47) )
    case 0:
    v2 = *(this + 173);
    *((uint8_t *)this + 1746) = 0;
    v3 = -(v2 != 0);
    LOBYTE(v3) = v3 & 0xF7;
    *(this + 47) = v3 + 10;
    return 1;
    case 1:
    v5 = *((uint8_t *)this + 1736);
    *((uint8_t *)this + 1746) = 0;
    if ( v5 )
    v6 = *(this + 191);
    *((uint8_t *)this + 1736) = 0;
    *(this + 191) = v6 - 1;
    v7 = *(this + 173);
    if ( v7 && *(this + 191) )
    v8 = *this;
    v9 = FindSpiralMoveTarget(v7);
    (*(void (__thiscall **)(int *, int, int))(v8 + 1152))(this, v9, 1);
    *(this + 47) = *(this + 361) != 0 ? 3 : 10;
    else
    LABEL_107:
    *(this + 47) = 10;
    goto LABEL_108;
    case 3:
    if ( *((uint8_t *)this + 1736) )
    v10 = *(this + 191);
    *((uint8_t *)this + 1736) = 0;
    *(this + 191) = v10 - 1;
    v11 = *(this + 173);
    *((uint8_t *)this + 1746) = 0;
    if ( !v11 || !*(this + 191) )
    goto LABEL_83;
    v12 = this + 432;
    if ( (*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
    v13 = *(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(*this + 1016))(this, 0);
    if ( ObjectClass::ComputeDistance(this, *(this + 173)) < *(uint32_t *)(v13 + 180) )
    LABEL_14:
    *(this + 47) = 4;
    return 1;
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    else
    if ( (*(int (__stdcall **)(int *))(*v12 + 28))(this + 432) )
    goto LABEL_14;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 128))(*(this + 413)) )
    goto LABEL_14;
    if ( *(this + 361) )
    v14 = ObjectClass::ComputeDistance(this, *(this + 361));
    if ( v14 >= 512 )
    v17 = (int *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)*(this + 361) + 72))(*(this + 361), v117);
    v18 = (int *)(*(int (__thiscall **)(int *, uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t))(*this + 176))(
    this,
    v115,
    0,
    0,
    0,
    0);
    if ( *v18 == *v17 && v18[1] == v17[1] )
    LOWORD(v100) = 0;
    v19 = Math::CalcAngle((double)v18[1] - (double)v17[1], (double)*v17 - (double)*v18);
    LOWORD(v100) = Math::RoundToInt((v19 - 1.570796326794897) * -10430.06004058427);
    FacingClass::Update((char *)this + 928, &v100);
    return 1;
    else
    v15 = ObjectClass::CalcTargetFacing(this, &v113, *(this + 173));
    FacingClass::Update((char *)this + 928, v15);
    if ( v14 >= 16 )
    return 1;
    else
    v16 = *this;
    *(this + 47) = 4;
    (*(void (__thiscall **)(int *, uint32_t, int))(v16 + 1152))(this, 0, 1);
    return 1;
    else
    *(this + 47) = 1;
    return 1;
    case 4:
    if ( !*(this + 173) || !*(this + 191) )
    goto LABEL_83;
    v20 = this + 432;
    if ( !(*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
    v21 = ObjectClass::CalcTargetFacing(this, &v109, *(this + 173));
    FacingClass::Update((char *)this + 904, v21);
    v22 = ObjectClass::CalcTargetFacing(this, &v112, *(this + 173));
    FacingClass::Update((char *)this + 928, v22);
    v23 = *this;
    v24 = (*(int (__thiscall **)(int *, uint32_t, int))(*this + 740))(this, *(this + 173), 1);
    switch ( (*(int (__thiscall **)(int *, uint32_t, int))(v23 + 960))(this, *(this + 173), v24) )
    case 0:
    v25 = *this;
    v93 = *(this + 173);
    *((uint8_t *)this + 1736) = 1;
    v26 = 0;
    v27 = (*(int (__thiscall **)(int *, int))(v25 + 740))(this, v93);
    if ( *(int *)(*(uint32_t *)(*(int (__thiscall **)(int *, int))(v25 + 1016))(this, v27) + 156) > 0 )
    do
    v28 = *this;
    v29 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    (*(void (__thiscall **)(int *, uint32_t, int))(v28 + 972))(this, *(this + 173), v29);
    v30 = *this;
    ++v26;
    v31 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    while ( v26 < *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, int))(v30 + 1016))(this, v31) + 156) );
    v103[0] = *(this + 39);
    v103[1] = *(this + 40);
    v103[2] = *(this + 41);
    v32 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *, uint32_t *))(*(uint32_t *)*(this + 173) + 72))(
    *(this + 173),
    v120,
    v103);
    v33 = Coord::To_Cell(&MapClass_Instance, v32);
    Cell::ApplyDamage(v33, 1, 0, 0, v98);
    if ( (*(int (__cdecl **)(int *))(*v20 + 24))(this + 432) )
    v34 = *this;
    *(this + 47) = 6;
    *((uint8_t *)this + 1746) = 1;
    return *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v34 + 1016))(this, 0) + 176);
    if ( !(*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) )
    goto LABEL_54;
    v35 = *(this + 191);
    v36 = v35 == 0;
    v37 = v35 < 0;
    v38 = *this;
    *((uint8_t *)this + 1746) = 1;
    *(this + 47) = !v37 && !v36 ? 1 : 10;
    return *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v38 + 1016))(this, 0) + 176);
    case 2:
    if ( !*(this + 191) )
    *(this + 47) = 10;
    return 1;
    if ( !(*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 940))(this, *(this + 173))
    || (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
    *(this + 47) = 1;
    else if ( (*(int (__stdcall **)(int *))(*v20 + 28))(this + 432) )
    *(this + 47) = 4;
    else
    *(this + 47) = BYTE1(RulesClass_Instance[1].RadarEventDurations[1]) != 0 ? 1 : 4;
    if ( !(*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
    return 1;
    return 45;
    case 3:
    return 1;
    case 9:
    (*(void (__thiscall **)(int *, uint32_t))(*this + 1116))(this, 0);
    return 1;
    default:
    if ( !*(this + 191) )
    *(this + 47) = 10;
    return 1;
    if ( (*(int (__stdcall **)(int *))(*v20 + 24))(this + 432) )
    return 1;
    LABEL_54:
    *(this + 47) = 5;
    result = 1;
    break;
    return result;
    case 5:
    if ( *(this + 173) )
    v39 = ObjectClass::CalcTargetFacing(this, &v114, *(this + 173));
    FacingClass::Update((char *)this + 904, v39);
    v40 = ObjectClass::CalcTargetFacing(this, &v111, *(this + 173));
    FacingClass::Update((char *)this + 928, v40);
    v41 = *this;
    v42 = (*(int (__thiscall **)(int *, uint32_t, int))(*this + 740))(this, *(this + 173), 1);
    switch ( (*(unsigned int (__thiscall **)(int *, uint32_t, int))(v41 + 960))(this, *(this + 173), v42) )
    case 0u:
    v44 = *this;
    v45 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    (*(void (__thiscall **)(int *, uint32_t, int))(v44 + 972))(this, *(this + 173), v45);
    v105 = *(this + 39);
    v106 = *(this + 40);
    v107 = *(this + 41);
    v46 = (uint32_t *)(*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 173) + 72))(*(this + 173));
    v47 = Coord::To_Cell(&MapClass_Instance, v46);
    Cell::ApplyDamage(v47, (int)v119, (int)&v105, 1, 0);
    if ( !*(this + 191) )
    goto LABEL_107;
    *(this + 47) = BYTE1(RulesClass_Instance[1].RadarEventDurations[1]) != 0 ? 1 : 4;
    goto LABEL_108;
    case 2u:
    if ( !*(this + 191) )
    goto LABEL_107;
    if ( !(*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 940))(this, *(this + 173))
    || (*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
    *(this + 47) = 1;
    else
    v43 = -(BYTE1(RulesClass_Instance[1].RadarEventDurations[1]) != 0);
    LOBYTE(v43) = v43 & 0xFD;
    *(this + 47) = v43 + 4;
    if ( !(*(int (__stdcall **)(int *))(*(this + 432) + 24))(this + 432) )
    goto LABEL_108;
    result = 45;
    break;
    case 3u:
    goto LABEL_108;
    case 9u:
    (*(void (__thiscall **)(int *, uint32_t))(*this + 1116))(this, 0);
    goto LABEL_108;
    default:
    if ( !*(this + 191) )
    goto LABEL_107;
    if ( (*(unsigned __int8 (__thiscall **)(int *, uint32_t))(*this + 940))(this, *(this + 173)) )
    *(this + 47) = BYTE1(RulesClass_Instance[1].RadarEventDurations[1]) != 0 ? 1 : 4;
    else
    *(this + 47) = 1;
    goto LABEL_108;
    else
    *(this + 47) = 10;
    return 1;
    return result;
    case 6:
    v48 = *(this + 173);
    if ( v48 )
    v49 = *this;
    v50 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v48, 1);
    switch ( (*(int (__thiscall **)(int *, uint32_t, int))(v49 + 960))(this, *(this + 173), v50) )
    case 0:
    case 2:
    case 9:
    break;
    case 8:
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    break;
    default:
    goto LABEL_91;
    v51 = *this;
    v94 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    v89 = *(this + 173);
    (*(void (__thiscall **)(int *))(v51 + 972))(this);
    v100 = *(this + 39);
    v52 = *(this + 173);
    v101[0] = *(this + 40);
    v101[1] = *(this + 41);
    v53 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *, int *, int, uint32_t, uint32_t))(*(uint32_t *)v52 + 72))(
    v52,
    v116,
    &v100,
    1,
    0,
    0);
    v54 = Coord::To_Cell(&MapClass_Instance, v53);
    Cell::ApplyDamage(v54, v89, v94, v98, v99);
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    v55 = *this;
    *(this + 47) = 7;
    return *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v55 + 1016))(this, 0) + 176);
    else
    *(this + 47) = 10;
    return 1;
    case 7:
    v56 = *(this + 173);
    if ( v56 )
    v57 = *this;
    v58 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v56, 1);
    switch ( (*(unsigned int (__thiscall **)(int *, uint32_t, int))(v57 + 960))(this, *(this + 173), v58) )
    case 0u:
    case 2u:
    case 9u:
    break;
    case 8u:
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    break;
    default:
    goto LABEL_91;
    v59 = *this;
    v95 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    v90 = *(this + 173);
    (*(void (__thiscall **)(int *))(v59 + 972))(this);
    v108[0] = *(this + 39);
    v108[1] = *(this + 40);
    v108[2] = *(this + 41);
    v60 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *, uint32_t *, int, uint32_t, uint32_t))(*(uint32_t *)*(this + 173)
    + 72))(
    *(this + 173),
    v118,
    v108,
    1,
    0,
    0);
    v61 = Coord::To_Cell(&MapClass_Instance, v60);
    Cell::ApplyDamage(v61, v90, v95, v98, v99);
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    v62 = *this;
    *(this + 47) = 8;
    return *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v62 + 1016))(this, 0) + 176);
    else
    *(this + 47) = 10;
    return 1;
    case 8:
    v63 = *(this + 173);
    if ( v63 )
    v64 = *this;
    v65 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v63, 1);
    switch ( (*(unsigned int (__thiscall **)(int *, uint32_t, int))(v64 + 960))(this, *(this + 173), v65) )
    case 0u:
    case 2u:
    case 9u:
    break;
    case 8u:
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    break;
    default:
    goto LABEL_91;
    v66 = *this;
    v96 = (*(int (__thiscall **)(int *, uint32_t))(*this + 740))(this, *(this + 173));
    v91 = *(this + 173);
    (*(void (__thiscall **)(int *))(v66 + 972))(this);
    v102[0] = *(this + 39);
    v102[1] = *(this + 40);
    v102[2] = *(this + 41);
    v67 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *, uint32_t *, int, uint32_t, uint32_t))(*(uint32_t *)*(this + 173)
    + 72))(
    *(this + 173),
    v119,
    v102,
    1,
    0,
    0);
    v68 = Coord::To_Cell(&MapClass_Instance, v67);
    Cell::ApplyDamage(v68, v91, v96, v98, v99);
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1152))(this, *(this + 173), 1);
    v69 = *this;
    *(this + 47) = 9;
    return *(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v69 + 1016))(this, 0) + 176);
    else
    LABEL_83:
    *(this + 47) = 10;
    return 1;
    case 9:
    v70 = *(this + 173);
    if ( v70 )
    v71 = *this;
    v72 = (*(int (__thiscall **)(int *, int, int))(*this + 740))(this, v70, 1);
    switch ( (*(unsigned int (__thiscall **)(int *, uint32_t, int))(v71 + 960))(this, *(this + 173), v72) )
    case 0u:
    case 2u:
    case 8u:
    case 9u:
    v73 = *this;
    v97 = *(this + 173);
    v92 = (*(int (__thiscall **)(int *))(*this + 740))(this);
    v88 = *(this + 173);
    (*(void (__thiscall **)(int *))(v73 + 972))(this);
    v104 = *(this + 39);
    v105 = *(this + 40);
    v74 = *(this + 173);
    v106 = *(this + 41);
    v75 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *, int *, int, uint32_t, uint32_t))(*(uint32_t *)v74 + 72))(
    v74,
    v120,
    &v104,
    1,
    0,
    0);
    v76 = Coord::To_Cell(&MapClass_Instance, v75);
    Cell::ApplyDamage(v76, v88, v92, v97, v98);
    v77 = *this;
    *(this + 47) = 3;
    result = (*(uint32_t *)(*(uint32_t *)(*(int (__thiscall **)(int *, uint32_t))(v77 + 1016))(this, 0) + 180) + 1024)
    / *(uint32_t *)(*(this + 433) + 1656);
    break;
    default:
    LABEL_91:
    if ( !*(this + 191) )
    *(this + 47) = 10;
    *((uint8_t *)this + 1746) = 0;
    return 1;
    else
    *(this + 47) = 10;
    return 1;
    return result;
    case 10:
    v78 = *((uint8_t *)this + 1736);
    *((uint8_t *)this + 1746) = 0;
    if ( v78 )
    v79 = *(this + 191);
    *((uint8_t *)this + 1736) = 0;
    if ( v79 > 0 )
    *(this + 191) = v79 - 1;
    if ( *(this + 191) )
    if ( *(this + 173) )
    *(this + 47) = 1;
    return 1;
    else if ( *((uint8_t *)this + 980) || (unsigned __int8)House::IsCurrentPlayer((void*375 *)*(this + 135)) )
    (*(void (__thiscall **)(int *, uint32_t))(*this + 968))(this, 0);
    v80 = (unsigned int *)*(this + 135);
    *((uint8_t *)this + 1746) = 0;
    TransitionCount = HouseClass::GetTransitionCount(v80);
    OpenNeighbor = CellClass::FindOpenNeighbor(
    (int *)&MapClass_Instance,
    &v110,
    TransitionCount,
    (int)&g_AircraftStatusFlag,
    (int)&g_AircraftStatusFlag,
    4,
    1,
    0);
    v83 = *this;
    v101[0] = *OpenNeighbor;
    v84 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v101);
    (*(void (__thiscall **)(int *, void *, int))(v83 + 1152))(this, v84, 1);
    v85 = *(this + 165);
    *((uint8_t *)this + 1749) = 0;
    if ( v85 && *(this + 191) > 0 )
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 4, 0);
    *((uint8_t *)this + 1749) = 1;
    return 1;
    else
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    *((uint8_t *)this + 1749) = 1;
    return 1;
    default:
    LABEL_108:
    MissionControl = MissionClass::GetMissionControl(this);
    v87 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v87 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
}

int  AircraftClass::MissionDispatch(int this, uint32_t *a2, int a3, void **a4)
{
    int result; // eax
    int v6; // ebx
    void *ClosestPlacementCell; // eax
    void *v8; // edi
    int v9; // ebx
    void *v10; // eax
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // eax
    int v14; // eax
    int Member; // eax
    int v16; // eax
    switch ( *(uint32_t *)(this + 172) )
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    if ( *(uint32_t *)(this + 660) )
    goto LABEL_4;
    LABEL_3:
    result = 0;
    break;
    default:
    LABEL_4:
    switch ( a3 )
    case 8:
    if ( !*(uint8_t *)(*(uint32_t *)(this + 1732) + 3580)
    || (*(int (__thiscall **)(int))(*(uint32_t *)this + 388))(this) != 2
    || !*(uint8_t *)(this + 1048)
    || (!*(uint32_t *)(this + 280) || (uint32_t *)CCINIClass::GetDB((uint32_t *)(this + 276)) != a2)
    && *(uint32_t **)(this + 1444) != a2 )
    return FootClass::MissionDispatch((int *)this, a2, a3, a4);
    return 10;
    case 14:
    v14 = *(uint32_t *)(*(uint32_t *)(this + 1732) + 1504);
    if ( v14 <= 0 || *(uint32_t *)(this + 276) >= v14 )
    return FootClass::MissionDispatch((int *)this, a2, a3, a4);
    FootClass::MissionDispatch((int *)this, a2, a3, a4);
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    return 1;
    RateScaler::Init((uint8_t *)(this + 848), *(double *)(*(uint32_t *)(this + 1732) + 968));
    if ( (*(int (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)this + 632))(this, 19, a2) != 1 )
    return 1;
    *a4 = (void *)this;
    if ( (*(int (__thiscall **)(int, int, void **, uint32_t *))(*(uint32_t *)this + 636))(this, 18, a4, a2) == 1 )
    Member = Team::GetMember((uint32_t *)this, 0);
    (*(void (__thiscall **)(int))(*(uint32_t *)Member + 336))(Member);
    return 1;
    else
    (*(void (__thiscall **)(int, int, uint32_t *))(*(uint32_t *)this + 632))(this, 3, a2);
    return 1;
    case 15:
    if ( !*(uint32_t *)(*(uint32_t *)(this + 1732) + 1504)
    || !a2
    || !Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), (int)a2) )
    goto LABEL_3;
    v16 = (*(uint32_t *)(this + 276) >= *(uint32_t *)(*(uint32_t *)(this + 1732) + 1504)) - 1;
    LOBYTE(v16) = v16 & 0xF7;
    return v16 + 10;
    case 18:
    FootClass::MissionDispatch((int *)this, a2, a3, a4);
    v8 = *a4;
    if ( *a4 && (*(int (__thiscall **)(void *))(*(uint32_t *)v8 + 44))(v8) == 6 )
    v9 = *(uint32_t *)this;
    v10 = AbstractClass::IsTechnoType(v8);
    if ( (*(int (__thiscall **)(int, int, void *))(v9 + 632))(this, 15, v10) != 1 )
    return 10;
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 7, 0);
    else
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 2, 0);
    (*(void (__thiscall **)(int, void *, int))(*(uint32_t *)this + 1152))(this, v8, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 492))(this);
    result = 1;
    break;
    case 19:
    FootClass::MissionDispatch((int *)this, a2, a3, a4);
    if ( !*(uint32_t *)(this + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t))(**(uint32_t **)(this + 1652) + 16))(*(uint32_t *)(this + 1652)) )
    return 1;
    v11 = *(uint32_t *)(this + 1444);
    if ( !v11 )
    return 1;
    if ( *(uint8_t *)(*(uint32_t *)(this + 1732) + 3597)
    && (*(int (__thiscall **)(int))(*(uint32_t *)v11 + 44))(v11) == 11
    && *(uint32_t *)(this + 1444) == (*(int (__thiscall **)(int))(*(uint32_t *)this + 444))(this) )
    return 1;
    else
    return 10;
    case 21:
    v12 = *(uint32_t *)(this + 1732);
    if ( *(uint32_t *)(this + 276) == *(uint32_t *)(v12 + 1504) )
    Timer::StartDouble((uint8_t *)(this + 848), *(double *)(v12 + 968));
    if ( a2 )
    v13 = (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) == 15 ? a2 : 0;
    if ( v13 )
    if ( *(uint8_t *)(v13[432] + 3777) && !*((uint8_t *)v13 + 1753) )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 4, 0);
    return 5;
    case 23:
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 2, 0);
    v6 = *(uint32_t *)this;
    ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)this);
    (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, ClosestPlacementCell, 1);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 628))(this, 3);
    return FootClass::MissionDispatch((int *)this, a2, a3, a4);
    case 29:
    if ( *(uint32_t *)(this + 692) )
    return 10;
    else
    return *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) != *(uint32_t *)(this + 764) ? 10 : 1;
    case 31:
    if ( *(uint32_t *)(this + 764) >= *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) / 2 && *(uint32_t *)(this + 692) )
    return 1;
    else
    return FootClass::MissionDispatch((int *)this, a2, a3, a4);
    case 33:
    return *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) != *(uint32_t *)(this + 764) ? 10 : 1;
    default:
    return FootClass::MissionDispatch((int *)this, a2, a3, a4);
    break;
    return result;
}

int  AircraftClass::ValidateLandingCell(int this, uint32_t *a2, int a3, int a4, int a5, int a6)
{
    int v7; // ecx
    int v8; // esi
    uint32_t *v10; // eax
    uint8_t v11[12]; // [esp+Ch] [ebp-Ch] BYREF
    v7 = *(uint32_t *)(this + 1492);
    if ( v7 && TechnoClass::IsWaypointHidden(v7) && !Type::CheckAmbiguity(&MapClass_Instance, (int)a2, 1) )
    return 0;
    v8 = a2[57];
    if ( (!v8
    || (*(uint8_t *)(v8 + 20) & 1) == 0
    || (unsigned __int8)House::IsAlliedWith(*(void*375 **)(v8 + 540), *(void*375 **)(this + 540))
    || *(uint32_t *)(v8 + 544) != 2
    && !IKnowWhatImDoing
    && ((*(int (__thiscall **)(int))(*(uint32_t *)v8 + 44))(v8) != 6 || !*(uint8_t *)(*(uint32_t *)(v8 + 1312) + 3226)))
    && !Cell::IsBuildable((int)a2, 4, 0, 0, -1, 0, -1, 1) )
    return 7;
    if ( GameMode_Current[0] )
    return 0;
    if ( !*(uint8_t *)(this + 1050) )
    return 0;
    if ( *(uint8_t *)(this + 980) )
    return 0;
    v10 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*a2 + 72))(a2, v11);
    if ( !Cell::IsPassable(v10) )
    return 0;
    else
    return 7;
}

int __usercall AircraftClass::Mission_Transport@<eax>(int a1@<ecx>, int a2@<ebp>)
{
    uint32_t *v3; // edi
    uint32_t *v4; // eax
    uint32_t *v5; // eax
    int v6; // edx
    int result; // eax
    int v8; // ecx
    int v9; // edi
    int v10; // eax
    int v11; // edi
    int *v12; // eax
    int v13; // ecx
    int v14; // edx
    int v15; // eax
    int v16; // ecx
    int v17; // edi
    int v18; // edx
    int v19; // edi
    int v20; // edx
    int v21; // edx
    int v22; // eax
    int Member; // eax
    int v24; // ebx
    uint32_t *v25; // edi
    int v26; // edi
    void *ClosestPlacementCell; // eax
    uint32_t v28[3]; // [esp+Ch] [ebp-30h] BYREF
    uint8_t v29[12]; // [esp+18h] [ebp-24h] BYREF
    uint8_t v30[20]; // [esp+24h] [ebp-18h] BYREF
    int v31; // [esp+38h] [ebp-4h]
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 456))(a1)
    || !*(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3597)
    || !*(uint32_t *)(a1 + 1444)
    || (v3 = *(uint32_t **)(a1 + 1444),
    v4 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1),
    v3 == Cell::IsBridge(v4)) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 456))(a1) > 0 )
    v8 = *(uint32_t *)(a1 + 1444);
    if ( *(uint32_t *)(a1 + 1740) != v8 && v8 && (*(int (__thiscall **)(int))(*(uint32_t *)v8 + 44))(v8) == 6 )
    v9 = *(uint32_t *)(a1 + 1444);
    if ( v9 )
    v10 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v9 + 44))(*(uint32_t *)(a1 + 1444)) == 6 ? v9 : 0;
    else
    v10 = 0;
    *(uint32_t *)(a1 + 1740) = v10;
    if ( *(uint32_t *)(a1 + 1444)
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 120))(a1) == 2
    || (*(int (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 14) == 1
    || TechnoClass::PlaceAtCell((int *)a1) )
    switch ( *(uint32_t *)(a1 + 188) )
    case 0:
    *(uint32_t *)(a1 + 188) = 6;
    goto LABEL_24;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    LABEL_24:
    *(uint8_t *)(a1 + 1748) = 1;
    return 1;
    case 6:
    if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3597) && (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 456))(a1) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 14);
    if ( Team::AllMembersValid((int *)a1) )
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(int (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 144))(*(uint32_t *)(a1 + 1652)) == 1
    || *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3597) && !(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 456))(a1) )
    *(uint32_t *)(a1 + 188) = 7;
    *(uint8_t *)(a1 + 1748) = 0;
    result = 3;
    else
    if ( !TechnoClass::PlaceAtCell((int *)a1) )
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(int (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 144))(*(uint32_t *)(a1 + 1652)) == 1 )
    *(uint32_t *)(a1 + 188) = 7;
    *(uint8_t *)(a1 + 1748) = 1;
    if ( *(uint32_t *)(a1 + 180) == -1 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    *(uint8_t *)(a1 + 1748) = 1;
    return 1;
    *(uint8_t *)(a1 + 1748) = 1;
    *(uint8_t *)(a1 + 1748) = 1;
    result = 1;
    break;
    case 7:
    if ( !*(uint32_t *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(int (__stdcall **)(uint32_t))(**(uint32_t **)(a1 + 1652) + 144))(*(uint32_t *)(a1 + 1652)) == 1 )
    v11 = *(uint32_t *)(a1 + 1444);
    if ( v11 )
    if ( (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v11 + 44))(*(uint32_t *)(a1 + 1444)) == 6 )
    v12 = (int *)(*(int (__thiscall **)(int, uint8_t *, int))(*(uint32_t *)v11 + 168))(v11, v29, a1);
    else
    v12 = (int *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(a1 + 1444) + 72))(
    *(uint32_t *)(a1 + 1444),
    v30);
    v13 = *v12;
    v14 = v12[1];
    v31 = v12[2];
    v15 = *(uint32_t *)(a1 + 156);
    v16 = v13 - v15;
    v17 = *(uint32_t *)(a1 + 160);
    v18 = v14 - v17;
    v28[2] = *(uint32_t *)(a1 + 164);
    if ( v16 <= 0 )
    if ( v16 < -5 )
    v16 = -5;
    else if ( v16 > 5 )
    v16 = 5;
    if ( v18 <= 0 )
    if ( v18 < -5 )
    v18 = -5;
    else if ( v18 > 5 )
    v18 = 5;
    v19 = v18 + v17;
    v20 = *(uint32_t *)a1;
    v28[0] = v16 + v15;
    v28[1] = v19;
    (*(void (__thiscall **)(int, uint32_t *))(v20 + 436))(a1, v28);
    *(uint8_t *)(a1 + 1748) = 1;
    return 1;
    else
    v21 = *(uint32_t *)a1;
    *(uint8_t *)(a1 + 1748) = 1;
    v22 = (*(int (__thiscall **)(int, int))(v21 + 628))(a1, 21) - 1;
    if ( v22 )
    if ( v22 == 4 )
    (*(void (__thiscall **)(int))(*(uint32_t *)a1 + 212))(a1);
    Member = Team::GetMember((uint32_t *)a1, 0);
    CellClass::AddObject((uint32_t *)(Member + 276), (uint32_t *)a1);
    else
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    return 1;
    else if ( *(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3580) && *(uint32_t *)(a1 + 280) )
    v24 = Team::GetMember((uint32_t *)a1, 0);
    v25 = (uint32_t *)LinkedList::Pop((uint32_t *)(a1 + 276));
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)a1 + 628))(a1, 3, a2);
    if ( (*(int (__thiscall **)(uint32_t *, int, int))(*v25 + 632))(v25, 2, v24) == 1 )
    CellClass::AddObject((uint32_t *)(a1 + 276), v25);
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)a1 + 292))(a1, 0);
    FootClass::MissionMoveCarryallLand((int *)a1);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 292))(a1, 1);
    else
    v26 = *(uint32_t *)a1;
    ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((int *)a1);
    (*(void (__thiscall **)(int, void *))(v26 + 1152))(a1, ClosestPlacementCell);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 2, 0);
    return 1;
    else
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, 5, 0);
    return 1;
    default:
    return 1;
    else
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1156))(a1, 0, 1);
    return 1;
    else
    if ( v3 )
    v5 = (*(int (__thiscall **)(uint32_t *))(*v3 + 44))(v3) == 6 ? v3 : 0;
    else
    v5 = 0;
    v6 = *(uint32_t *)a1;
    *(uint32_t *)(a1 + 1740) = v5;
    (*(void (__thiscall **)(int, int))(v6 + 628))(a1, 3);
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)a1 + 488))(a1, 2, 1);
    return 1;
    return result;
}

char * AircraftClass::_vt93(uint32_t *this, int a2, int a3, int a4)
{
    char *result; // eax
    result = MissionClass::GetMissionControl(this);
    if ( result[9] )
    return (char *)(*(int (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1156))(this, 0, 1);
    return result;
}

int  AircraftClass::GetMissionTimer(int this)
{
    int v2; // edi
    int v3; // eax
    char *MissionControl; // eax
    int v6; // edi
    void *v7; // eax
    int v8; // eax
    int v9; // ecx
    int Member; // eax
    int v11; // edi
    int v12; // eax
    char *v13; // eax
    int v14; // esi
    int v15; // [esp+8h] [ebp-Ch] BYREF
    int v16; // [esp+Ch] [ebp-8h]
    int v17; // [esp+10h] [ebp-4h]
    v2 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 1732) + 188))(*(uint32_t *)(this + 1732));
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) == v2 )
    if ( *(uint32_t *)(this + 1492) )
    if ( *(uint32_t *)(this + 1444) )
    v3 = *(uint32_t *)this;
    *(uint8_t *)(this + 1748) = 1;
    (*(void (__thiscall **)(int, int, uint32_t))(v3 + 488))(this, 2, 0);
    MissionControl = MissionClass::GetMissionControl((uint32_t *)this);
    return Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    else if ( *(uint32_t *)(*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    if ( !*(uint32_t *)(this + 1492) )
    v8 = *(uint32_t *)this;
    *(uint8_t *)(this + 1748) = 1;
    (*(void (__thiscall **)(int, uint32_t, int))(v8 + 1156))(this, 0, 1);
    return 1;
    else
    v6 = *(uint32_t *)this;
    v15 = *(uint32_t *)(this + 156);
    v16 = *(uint32_t *)(this + 160);
    v17 = *(uint32_t *)(this + 164);
    v7 = Coord::To_Cell(&MapClass_Instance, &v15);
    (*(void (__thiscall **)(int, void *, int))(v6 + 1152))(this, v7, 1);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 2, 0);
    return 1;
    if ( byte_889ECC )
    if ( *(uint32_t *)(this + 764) || !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    goto LABEL_14;
    LABEL_26:
    if ( !Team::AllMembersValid((int *)this) )
    v11 = (*(int (__thiscall **)(int, int, uint32_t, uint32_t))(*(uint32_t *)this + 1320))(
    this,
    *(uint32_t *)(this + 1732) + 1000,
    0,
    0);
    if ( v11 )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 7, 0);
    (*(void (__thiscall **)(int, int, int))(*(uint32_t *)this + 1152))(this, v11, 1);
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return 1;
    goto LABEL_14;
    if ( byte_889ECD )
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this)
    && *(uint32_t *)(this + 764) < *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) / 2 )
    goto LABEL_26;
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this)
    && *(uint32_t *)(this + 764) < *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) )
    goto LABEL_26;
    LABEL_14:
    v9 = *(uint32_t *)(this + 764);
    if ( v9 != -1 && v9 < *(uint32_t *)(*(uint32_t *)(this + 1732) + 1668) / 2 )
    if ( Team::AllMembersValid((int *)this) )
    Member = Team::GetMember((uint32_t *)this, 0);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)Member + 44))(Member) == 6 )
    if ( *(uint8_t *)(*(uint32_t *)(Team::GetMember((uint32_t *)this, 0) + 1312) + 5802) )
    return 1;
    if ( *(uint32_t *)(this + 692) )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 1, 0);
    return 1;
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 684))(this) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) || Team::AllMembersValid((int *)this) )
    if ( !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540)) )
    v15 = *(uint32_t *)(this + 156);
    v16 = *(uint32_t *)(this + 160);
    v17 = *(uint32_t *)(this + 164);
    v12 = CellClass::ScanOccupiers(&v15);
    if ( v12 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 968))(this, v12);
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)this + 488))(this, 1, 0);
    if ( !(unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(this + 540))
    || (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)this + 84))(this) )
    return FootClass::FindMovePosition(this);
    else
    v13 = MissionClass::GetMissionControl((uint32_t *)this);
    v14 = Math::RoundToInt(*((double *)v13 + 2) * 900.0);
    return v14 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    else
    return 45;
    else
    return 45;
}

int  AircraftClass::_vt136(int *this)
{
    int v2; // edi
    v2 = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)*(this + 433) + 188))(*(this + 433));
    if ( (*(int (__thiscall **)(int *))(*this + 456))(this) == v2 )
    if ( !*(this + 373) )
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    return 1;
    else
    if ( !*(this + 191)
    && (*(unsigned __int8 (__thiscall **)(int *))(*this + 684))(this)
    && !Team::AllMembersValid(this) )
    (*(void (__thiscall **)(int *, uint32_t, int))(*this + 1156))(this, 0, 1);
    if ( *(this + 173) )
    (*(void (__thiscall **)(int *, int, uint32_t))(*this + 488))(this, 1, 0);
    return 1;
    else
    return FootClass::FindAITarget(this);
}

char __userpurge AircraftClass::AssignDestination_SyncLog@<al>(int *a1@<ecx>, int a2@<ebp>, uint32_t *a3, int a4)
{
    void *ClosestPlacementCell; // edi
    int v6; // eax
    int v7; // ebx
    int v8; // eax
    int v9; // eax
    int *v10; // eax
    int *v11; // ebx
    int v12; // eax
    int v13; // eax
    int *v14; // ebx
    int v15; // eax
    ClosestPlacementCell = a3;
    if ( !a3 )
    LABEL_53:
    LOBYTE(v6) = FootClass::AssignDestination((int)a1, (int)ClosestPlacementCell, a4);
    return v6;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*a3 + 84))(a3) )
    if ( (*(int (__stdcall **)(uint32_t *))(a3[1] + 12))(a3 + 1) != 6
    || (*(int (__thiscall **)(int *))(*a1 + 388))(a1) != 7 && a1[45] != 7 )
    goto LABEL_35;
    if ( Team::AllMembersValid(a1) )
    v10 = (int *)AbstractClass::IsTechnoType(a3);
    v11 = v10;
    if ( !v10 )
    goto LABEL_35;
    if ( Array::ContainsValue(v10, (int)a1) )
    if ( Array::Contains(v11, (int)a1) )
    goto LABEL_35;
    v6 = (*(int (__thiscall **)(int *, int))(*a1 + 628))(a1, 14);
    if ( v6 == 1 )
    return v6;
    (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3);
    v12 = a3[328];
    if ( !*(uint8_t *)(v12 + 5801) && !*(uint8_t *)(v12 + 5802) )
    goto LABEL_35;
    TechnoClass::SetFocus(a1, (int)a3);
    goto LABEL_34;
    else
    if ( !Array::ContainsValue(a3, (int)a1) )
    TechnoClass::SetFocus(a1, (int)a3);
    if ( *(uint8_t *)(a3[328] + 5835) )
    ClosestPlacementCell = (void *)(*(int (__thiscall **)(int *, int, uint32_t, uint32_t, int))(*a1 + 1320))(
    a1,
    a1[433] + 1000,
    0,
    0,
    a2);
    (*(void (__thiscall **)(int *, uint32_t, int))(*a1 + 1152))(a1, 0, 1);
    v7 = 2;
    if ( ClosestPlacementCell
    && (*(int (__thiscall **)(int *, int, void *))(*a1 + 632))(a1, 15, ClosestPlacementCell) == 1 )
    (*(void (__thiscall **)(int *, int, void *))(*a1 + 632))(a1, 2, ClosestPlacementCell);
    v7 = 7;
    else
    ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(a1);
    (*(void (__thiscall **)(int *, int))(*a1 + 488))(a1, v7);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 512))(a1) )
    (*(void (__thiscall **)(int *))(*a1 + 492))(a1);
    if ( *(uint8_t *)(a3[328] + 5801) )
    a1[320] = (int)a3;
    LABEL_34:
    ClosestPlacementCell = 0;
    LABEL_35:
    v13 = (*(int (__thiscall **)(int *))(*a1 + 444))(a1);
    if ( (*(uint32_t *)(v13 + 320) & 0x100) == 0 )
    v14 = *(int **)(v13 + 228);
    if ( v14 )
    while ( v14 == a1 || (*(int (__thiscall **)(int *))(*v14 + 44))(v14) != 6 )
    v14 = (int *)v14[12];
    if ( !v14 )
    goto LABEL_53;
    v15 = v14[328];
    if ( *(uint8_t *)(v15 + 5801) || *(uint8_t *)(v15 + 5802) )
    if ( !a1[413] )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)a1[413] + 96))(a1[413])
    && !HouseClass::IonSensitivesShouldBeOffline() )
    if ( !a1[413] )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(*(uint32_t *)a1[413] + 88))(a1[413]);
    if ( (int *)Team::GetMember(a1, 0) == v14 && ClosestPlacementCell != (void *)Team::GetMember(a1, 0) )
    (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3);
    goto LABEL_53;
    if ( (*(int (__thiscall **)(int *, int, uint32_t *))(*a1 + 632))(a1, 14, a3) != 1 )
    (*(void (__thiscall **)(int *, int))(*a1 + 628))(a1, 3);
    v8 = a3[328];
    if ( *(uint8_t *)(v8 + 5801) || *(uint8_t *)(v8 + 5802) )
    TechnoClass::SetFocus(a1, (int)a3);
    ClosestPlacementCell = 0;
    v9 = a3[328];
    if ( *(uint8_t *)(v9 + 5801) || *(uint8_t *)(v9 + 5802) )
    if ( a1[361] )
    TechnoClass::SetFocus(a1, a1[361]);
    goto LABEL_35;
    TechnoClass::SetFocus(a1, (int)ClosestPlacementCell);
    goto LABEL_35;
    LOBYTE(v6) = FootClass::AssignDestination((int)a1, 0, a4);
    return v6;
}

int  AircraftClass::_vt30(uint32_t *this)
{
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 116))(*(this + 413));
}

int  AircraftClass::RevealSight(int *this, int a2, int a3)
{
    int v4; // ebx
    void*375 *v5; // edx
    int v6; // edx
    int v7; // eax
    void*375 *v8; // edx
    int result; // eax
    int CrateImg; // ebx
    int v11; // edx
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    int v15; // eax
    int v16; // eax
    int v17; // [esp+Ch] [ebp-Ch] BYREF
    int v18; // [esp+10h] [ebp-8h]
    int v19; // [esp+14h] [ebp-4h]
    v4 = *(uint32_t *)(*(this + 433) + 1512);
    if ( !(*(int (__thiscall **)(int *))(*this + 456))(this) )
    v4 = 1;
    LABEL_4:
    v17 = *(this + 39);
    v18 = *(this + 40);
    v5 = (void*375 *)*(this + 135);
    v19 = *(this + 41);
    MapClass::RevealArea1(&v17, v4, v5, a2, a3, 0, 1, 0);
    v6 = *(this + 40);
    v7 = *(this + 41);
    v17 = *(this + 39);
    v18 = v6;
    v8 = (void*375 *)*(this + 135);
    v19 = v7;
    return MapClass::RevealArea1(&v17, v4, v8, a2, a3, 0, 1, 1);
    if ( v4 )
    goto LABEL_4;
    result = *(uint32_t *)ScenarioClass_Instance;
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) != 0 )
    CrateImg = RulesClass_Instance->CrateImg;
    v17 = *(this + 39);
    v18 = *(this + 40);
    v11 = *this;
    v19 = *(this + 41);
    v12 = (*(int (__thiscall **)(int *))(v11 + 456))(this);
    MapClass::RevealArea1(
    &v17,
    CrateImg,
    (void*375 *)*(this + 135),
    0,
    0,
    1,
    v12 < RulesClass_Instance->BuildBarracks[3] / 2,
    0);
    v13 = *(this + 40);
    v14 = *(this + 41);
    v17 = *(this + 39);
    v15 = *this;
    v18 = v13;
    v19 = v14;
    v16 = (*(int (__thiscall **)(int *))(v15 + 456))(this);
    return MapClass::RevealArea1(
    &v17,
    CrateImg,
    (void*375 *)*(this + 135),
    0,
    0,
    1,
    v16 < RulesClass_Instance->BuildBarracks[3] / 2,
    1);
    return result;
}

int  AircraftClass::_vt13(uint8_t *this, int *a2)
{
    int v3; // eax
    int v4; // ecx
    int v5; // edx
    v3 = FootClass::BeginPowerUpdate((int)this, a2);
    LOBYTE(v3) = *(this + 1737);
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = *(this + 1744);
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = *(this + 1745);
    Power::FlagProcess(a2, v5);
    return Power::TimerProcess((char)*(this + 1747));
}

int  AircraftClass::_vt10(int *this, int *a2, int *a3)
{
    int result; // eax
    FootClass::HandleTargetDestroyed(this, a2, a3);
    result = 0;
    if ( (int *)*(this + 435) == a2 )
    *(this + 435) = 0;
    if ( (int *)*(this + 433) == a2 )
    *(this + 433) = 0;
    return result;
}

int  AircraftClass::_vt123(#377 *this)
{
    if ( *((uint32_t *)this + 43) != 30 )
    *((uint8_t *)this + 1746) = 0;
    return MissionClass::AdvanceState(this);
}

int  AircraftClass::_vt32(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 80))(this);
}

bool  AircraftClass::_vt21(uint8_t *this)
{
    int v1; // eax
    v1 = *((uint32_t *)this + 433);
    if ( v1 != LODWORD(RulesClass_Instance->MissileROTVar) && v1 != RulesClass_Instance->HoverHeight )
    return ObjectClass::IsHeightAboveThreshold_0(this);
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 128))(*((uint32_t *)this + 413)) != 0;
}

int  AircraftClass::_vt20(#374 *this)
{
    int v1; // eax
    v1 = *((uint32_t *)this + 433);
    if ( v1 != LODWORD(RulesClass_Instance->MissileROTVar) && v1 != RulesClass_Instance->HoverHeight )
    return ObjectClass::IsBelowScreen(this);
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 128))(*((uint32_t *)this + 413)) == 0;
}

int  AircraftClass::_vt124(int this, int a2)
{
    int result; // eax
    switch ( *(uint32_t *)(this + 172) )
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    if ( *(uint32_t *)(this + 660) )
    goto LABEL_4;
    result = a2 - 4;
    switch ( a2 )
    case 4:
    case 26:
    case 27:
    case 30:
    case 31:
    goto LABEL_4;
    default:
    return result;
    default:
    LABEL_4:
    result = MissionClass::SetState((void*377 *)this);
    break;
    return result;
}

int  AircraftClass::_vt122(int this, int a2, int a3)
{
    int result; // eax
    switch ( *(uint32_t *)(this + 172) )
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    if ( *(uint32_t *)(this + 660) )
    goto LABEL_4;
    result = a2 - 4;
    switch ( a2 )
    case 4:
    case 26:
    case 27:
    case 30:
    case 31:
    goto LABEL_4;
    default:
    return result;
    default:
    LABEL_4:
    result = ParticleClass::MissionDispatch((void*377 *)this);
    break;
    return result;
}

// 0x0041BB30
int  AircraftClass::OverrideMission_SyncLog(int this, int a2, int a3, int a4)
{
    int result; // eax
    switch ( *(uint32_t *)(this + 172) )
    case 4:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    if ( *(uint32_t *)(this + 660) )
    goto LABEL_4;
    result = a2 - 4;
    switch ( a2 )
    case 4:
    case 26:
    case 27:
    case 30:
    case 31:
    goto LABEL_4;
    default:
    return result;
    default:
    LABEL_4:
    result = FootClass::OverrideMission_SyncLog((void*377 *)this, a2, a3, a4);
    break;
    return result;
}

int  AircraftClass::_vt51(#374 *this)
{
    return 0;
}

int  AircraftClass::_vt52(#374 *this)
{
    return 0;
}

int  AircraftClass::_vt49(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 472);
    return result;
}

int  AircraftClass::_vt50(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 472);
    return result;
}

int AircraftClass::_vt12()
{
    return 1752;
}

int AircraftClass::_vt11()
{
    return 2;
}

int __stdcall AircraftClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448642;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int  AircraftClass::_vt36(uint32_t *this)
{
    return *(uint32_t *)(*(this + 433) + 96);
}

int  AircraftClass::_vt34(uint32_t *this)
{
    return *(this + 433);
}

void ** AircraftClass::_vt08(void **Block, char a2)
{
    AircraftClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  AircraftClass::_vt94(#374 *this)
{
    int result; // eax
    LOBYTE(result) = 0;
    return result;
}

