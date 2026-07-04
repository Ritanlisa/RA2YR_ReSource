#include "footclass.hpp"

// 0x0041C080
char FootClass::vt_entry_4F8()
{
    return 0;
}

char  FootClass::ProcessDeployMission(int this)
{
    uint32_t *v2; // edi
    int v3; // ecx
    int v4; // eax
    int *v6; // ecx
    int v7; // edi
    int *v8; // eax
    int v9; // edi
    void *v10; // eax
    int v11; // eax
    int *v12; // ecx
    int v13; // edi
    int v14; // eax
    int v15; // eax
    int v16; // ecx
    uint32_t *v17; // eax
    uint32_t *v18; // eax
    uint32_t *v19; // edi
    int v20; // [esp+34h] [ebp-Ch] BYREF
    int v21; // [esp+38h] [ebp-8h]
    int v22; // [esp+3Ch] [ebp-4h]
    v2 = *(uint32_t **)(this + 12);
    if ( v2 && (*(int (__thiscall **)(uint32_t))(*v2 + 44))(*(uint32_t *)(this + 12)) == 2 && !*(uint8_t *)(v2[433] + 3594) )
    v3 = *(uint32_t *)(this + 12);
    *(uint8_t *)(this + 92) = 1;
    *(uint8_t *)(this + 81) = 0;
    *(uint8_t *)(this + 80) = 0;
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 132))(v3);
    *(uint32_t *)(this + 56) = (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 188))(v4);
    return 0;
    else
    v6 = *(int **)(this + 12);
    if ( v6[27] > 0 && (*(uint8_t *)(this + 81) || *(uint8_t *)(this + 80)) )
    v7 = (*(int (__thiscall **)(int *))(*v6 + 120))(v6);
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 0);
    RemoveTarget(*(uint32_t *)(this + 12));
    if ( *(uint8_t *)(this + 81) )
    DropPod::ProcessLanding(this);
    if ( *(uint8_t *)(this + 80) )
    FootClass::UpdateDeployMovement(this);
    if ( v7 != (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 120))(*(uint32_t *)(this + 12)) )
    if ( (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 120))(*(uint32_t *)(this + 12)) != 2
    || *(uint8_t *)(this + 80)
    || (v8 = *(int **)(this + 12),
    v20 = v8[39],
    v21 = v8[40],
    v22 = v8[41],
    v9 = *v8,
    v10 = Coord::To_Cell(&MapClass_Instance, &v20),
    (*(unsigned __int8 (__thiscall **)(uint32_t, void *))(v9 + 1360))(*(uint32_t *)(this + 12), v10)) )
    v15 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 120))(*(uint32_t *)(this + 12));
    v16 = *(uint32_t *)(this + 12);
    if ( v15 == 2 )
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)v16 + 1152))(v16, 0, 1);
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 628))(*(uint32_t *)(this + 12), 24);
    (*(void (__thiscall **)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 1164))(
    *(uint32_t *)(this + 12),
    0,
    0,
    0,
    0);
    (*(void (__thiscall **)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 1160))(
    *(uint32_t *)(this + 12),
    0,
    0,
    0,
    0,
    0);
    v17 = *(uint32_t **)(this + 12);
    v20 = v17[39];
    v21 = v17[40];
    v22 = v17[41];
    MapClass::RevealArea2(&v20, v17[152] - 3, v17[152] + 3, 0);
    else
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v16 + 628))(v16, 25);
    if ( Team::AllMembersValid(*(int **)(this + 12)) )
    v18 = *(uint32_t **)(this + 12);
    if ( v18[361] )
    v19 = *(uint32_t **)(this + 12);
    if ( v19[361] != Team::GetMember(v18, 0) )
    (*(void (__thiscall **)(uint32_t *, int))(*v19 + 628))(v19, 3);
    else
    v11 = *(uint32_t *)(this + 12);
    *(uint8_t *)(this + 80) = 1;
    *(uint8_t *)(v11 + 140) = 0;
    (*(void (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 0);
    v12 = *(int **)(this + 12);
    v13 = *v12;
    v14 = (*(int (__thiscall **)(int *))(*v12 + 456))(v12);
    (*(void (__thiscall **)(uint32_t, int))(v13 + 460))(*(uint32_t *)(this + 12), v14 + 10);
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 1);
    Targeting::Readd(*(uint32_t **)(this + 12));
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 292))(*(uint32_t *)(this + 12), 1);
    return 0;
}

uint32_t * FootClass::PostLoadInit(uint32_t *this, int a2)
{
    TechnoClass::Constructor(this, a2);
    *(this + 354) = &DynamicVectorClass<AbstractClass *>::`vftable';
    *(this + 363) = &DynamicVectorClass<AbstractClass *>::`vftable';
    *(this + 413) = 0;
    *this = &FootClass::`vftable';
    *(this + 1) = &FootClass::`vftable';
    *(this + 2) = &FootClass::`vftable';
    *(this + 3) = &FootClass::`vftable';
    return this;
}

// 0x004D3710
void  FootClass::Destru_vt337(int this, double a2)
{
    if ( a2 < 1.0 )
    if ( a2 > 0.0 )
    *(double *)(this + 1400) = a2;
    else
    *(uint32_t *)(this + 1400) = 0;
    *(uint32_t *)(this + 1404) = 0;
    else
    *(uint32_t *)(this + 1400) = 0;
    *(uint32_t *)(this + 1404) = 1072693248;
}

int  FootClass::Destru_vt139(uint32_t *this)
{
    char *MissionControl; // eax
    int v4; // esi
    if ( *(this + 361) )
    goto LABEL_7;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 16))(*(this + 413)) || *(this + 45) != -1 )
    LABEL_7:
    MissionControl = MissionClass::GetMissionControl(this);
    v4 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
    return v4 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2);
    else
    (*(void (__thiscall **)(uint32_t *, uint32_t, int))(*this + 1156))(this, 0, 1);
    return 1;
}

// 0x004D5660
int  FootClass::EnterAttackState(#377 *this)
{
    int v2; // edx
    (*(void (__thiscall **)(void*377 *, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    v2 = *(uint32_t *)this;
    *((uint32_t *)this + 376) = -1;
    (*(void (__thiscall **)(void*377 *))(v2 + 1280))(this);
    return TechnoClass::ProcessDeploymentState(this);
}

// 0x004D8560
uint32_t * FootClass::GetCoords(#377 *this, uint32_t *a2)
{
    int v3; // ecx
    uint32_t *v4; // eax
    uint8_t v6[12]; // [esp+4h] [ebp-Ch] BYREF
    if ( (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 388))(this) != 1
    && ((v3 = *((uint32_t *)this + 360)) != 0 || (v3 = *((uint32_t *)this + 361)) != 0) )
    v4 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v3 + 88))(v3, v6);
    else
    v4 = (uint32_t *)BuildingClass::GetBridgeAwareCoords(this);
    *a2 = *v4;
    a2[1] = v4[1];
    a2[2] = v4[2];
    return a2;
}

char __userpurge FootClass::UpdateAI@<al>(__int16 *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4)
{
    int v5; // eax
    __int16 *v6; // edi
    __int16 *v7; // eax
    int v8; // ebp
    uint32_t *v9; // eax
    uint32_t *v10; // eax
    int i; // ebp
    int v12; // eax
    __int16 v13; // dx
    uint8_t *v14; // eax
    int v15; // ebp
    int v16; // edx
    __int16 v17; // cx
    uint8_t *v18; // eax
    int v19; // ebp
    _WORD *v20; // eax
    int v21; // ecx
    __int16 v22; // dx
    uint32_t *v23; // eax
    int ClosestObjectCell; // eax
    float *v25; // edi
    int v26; // eax
    uint8_t *v27; // edi
    char v28; // bl
    int v29; // ebp
    uint32_t *v30; // edi
    uint32_t *v31; // eax
    int v32; // ebx
    int v33; // ecx
    int v34; // edx
    int v35; // eax
    double v36; // st7
    int v37; // edi
    int v38; // ebx
    int v39; // eax
    void *v40; // eax
    __int16 v41; // bx
    uint32_t *v42; // ebp
    void **v43; // edi
    int *v44; // eax
    int *v45; // eax
    int *v46; // eax
    int *v47; // eax
    int j; // ebp
    void *v49; // eax
    void **v50; // edi
    int *v51; // eax
    int k; // ebp
    void *v53; // eax
    void **v54; // edi
    int *v55; // eax
    int v56; // eax
    void **v57; // edi
    uint32_t *v58; // eax
    int v59; // edx
    __int16 *v60; // eax
    int v61; // ecx
    __int16 *v62; // eax
    uint32_t *v63; // eax
    uint32_t *v64; // eax
    uint32_t *v65; // edi
    int v66; // eax
    char result; // al
    __int16 *v68; // eax
    int v69; // eax
    int *Element; // eax
    __int16 v71; // dx
    int v72; // [esp+48h] [ebp-58h]
    int v73; // [esp+48h] [ebp-58h]
    int v74; // [esp+58h] [ebp-48h]
    int v75; // [esp+5Ch] [ebp-44h]
    int v76; // [esp+60h] [ebp-40h]
    char v77; // [esp+64h] [ebp-3Ch]
    int v78; // [esp+68h] [ebp-38h] BYREF
    int v79; // [esp+6Ch] [ebp-34h]
    int v80; // [esp+70h] [ebp-30h] BYREF
    int v81; // [esp+74h] [ebp-2Ch] BYREF
    uint8_t v82[4]; // [esp+78h] [ebp-28h] BYREF
    int v83; // [esp+7Ch] [ebp-24h] BYREF
    int v84; // [esp+80h] [ebp-20h]
    int v85; // [esp+84h] [ebp-1Ch]
    int v86; // [esp+88h] [ebp-18h] BYREF
    uint8_t v87[4]; // [esp+90h] [ebp-10h] BYREF
    uint8_t v88[4]; // [esp+94h] [ebp-Ch] BYREF
    uint8_t v89[4]; // [esp+98h] [ebp-8h] BYREF
    uint8_t v90[4]; // [esp+9Ch] [ebp-4h] BYREF
    if ( a4 == 2 )
    v5 = *(uint32_t *)a1;
    *((uint8_t *)a1 + 1714) = 0;
    *((uint8_t *)a1 + 1712) = 0;
    if ( *(uint32_t *)((*(int (**)(void))(v5 + 132))() + 1520) )
    (*(void (__thiscall **)(__int16 *, uint32_t))(*(uint32_t *)a1 + 1260))(a1, *((uint32_t *)a1 + 343));
    (*(void (__thiscall **)(__int16 *, int))(*(uint32_t *)a1 + 1256))(a1, g_FootClass_Pool);
    v75 = a2;
    v74 = a3;
    v6 = a1 + 686;
    if ( a1[686] || a1[687] )
    v7 = (__int16 *)(*(int (__thiscall **)(__int16 *, int *, int))(*(uint32_t *)a1 + 440))(a1, &v81, v74);
    v8 = Cell::PosToLinearIndex(v7);
    if ( Cell::PosToLinearIndex(a1 + 686) != v8 )
    v9 = CellCoord::To_CellObj(&MapClass_Instance, a1 + 686);
    FootClass::ApplyThreatBounds(a1, v9);
    v10 = (uint32_t *)(*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 444))(a1);
    FootClass::SetThreatBounds(a1, v10);
    for ( i = 0; i < 8; ++i )
    v12 = i & 7;
    v13 = a1[687] + HIWORD(Direction_X_Offsets[v12]);
    LOWORD(v80) = LOWORD(Direction_X_Offsets[v12]) + *v6;
    HIWORD(v80) = v13;
    v81 = v80;
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v81);
    --v14[290];
    v15 = 0;
    *(uint32_t *)v6 = *(uint32_t *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 440))(a1, v82);
    do
    v16 = v15 & 7;
    v17 = LOWORD(Direction_X_Offsets[v16]) + *v6;
    LOWORD(v16) = HIWORD(Direction_X_Offsets[v16]);
    LOWORD(v79) = v17;
    HIWORD(v79) = a1[687] + v16;
    v80 = v79;
    v18 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    ++v15;
    ++v18[290];
    while ( v15 < 8 );
    if ( *((uint32_t *)a1 + 136) == 2 )
    v19 = 0;
    while ( 1 )
    v20 = (_WORD *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v81);
    v21 = v19 & 7;
    v22 = Direction_X_Offsets[v21];
    LOWORD(v21) = v20[1] + HIWORD(Direction_X_Offsets[v21]);
    LOWORD(v79) = *v20 + v22;
    HIWORD(v79) = v21;
    v80 = v79;
    if ( LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v80, 1) )
    v83 = 0;
    v84 = 0;
    v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    ClosestObjectCell = Object::FindClosestObjectCell(v23, &v83, 0, 0);
    v25 = (float *)ClosestObjectCell;
    if ( ClosestObjectCell )
    if ( !Object::IsAlliedWithObjectHouse(*(uint32_t **)(ClosestObjectCell + 540), (int)a1)
    && (*(uint8_t *)((*(int (__thiscall **)(float *))(*(uint32_t *)v25 + 132))(v25) + 3229)
    || TechnoTypeClass::HasVoiceResponse(v25, 12)) )
    break;
    if ( ++v19 >= 8 )
    goto LABEL_22;
    (*(void (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 252))(a1);
    LABEL_22:
    v26 = (*(int (__thiscall **)(__int16 *, uint32_t, int))(*(uint32_t *)a1 + 740))(a1, *((uint32_t *)a1 + 173), v74);
    v27 = (uint8_t *)*((uint32_t *)a1 + 173);
    v28 = 0;
    v29 = v26;
    if ( v27 && (v27[20] & 4) != 0 )
    if ( *(uint8_t *)((*(int (__thiscall **)(__int16 *, int))(*(uint32_t *)a1 + 132))(a1, v75) + 1508) )
    v30 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint8_t *))(*(uint32_t *)v27 + 72))(v27, v87);
    v31 = (uint32_t *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 72))(a1, v89);
    v32 = v30[1];
    v33 = *v31 - *v30;
    v34 = v31[1];
    v35 = v31[2];
    v84 = v33;
    v85 = v34 - v32;
    v86 = v35 - v30[2];
    v36 = Math::Sqrt((double)v33 * (double)v33 + (double)v86 * (double)v86 + (double)v85 * (double)v85);
    v37 = Math::RoundToInt(v36);
    v28 = v37 < (*(int (__thiscall **)(__int16 *, int))(*(uint32_t *)a1 + 360))(a1, v29);
    else
    v38 = *(uint32_t *)a1;
    v75 = v29;
    v39 = (*(int (__thiscall **)(uint8_t *, uint8_t *))(*(uint32_t *)v27 + 1264))(v27, v90);
    v28 = (*(int (__thiscall **)(__int16 *, int))(v38 + 356))(a1, v39);
    if ( ((*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 388))(a1) == 21
    || (*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 388))(a1) == 11
    || (*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 388))(a1) == 1
    || (*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 388))(a1) == 15)
    && v28
    && !*((uint32_t *)a1 + 358) )
    (*(void (__thiscall **)(__int16 *, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    *((uint32_t *)a1 + 376) = -1;
    v78 = *(uint32_t *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 440))(a1, v82);
    v40 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v78);
    v41 = HIWORD(v78);
    v42 = v40;
    v81 = (__int16)v78;
    v79 = (int)v40;
    v43 = (void **)*((uint32_t *)v40 + 15);
    if ( (*((uint32_t *)v40 + 80) & 0x500) == 0 || *((uint8_t *)a1 + 140) )
    if ( v43 )
    v44 = (int *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v80);
    TeamClass::Update_0(v43, 1, (int)a1, *v44, 0, 0);
    v45 = (int *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v80);
    TeamClass::Update_0(v43, 59, (int)a1, *v45, 0, 0);
    if ( (*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 44))(a1) == 15 )
    if ( *(uint8_t *)(*((uint32_t *)a1 + 432) + 3780) )
    v46 = (int *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v80);
    TeamClass::Update_0(v43, 53, (int)a1, *v46, 0, 0);
    v47 = (int *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v80);
    TeamClass::Update_0(v43, 54, (int)a1, *v47, 0, 0);
    if ( (v42[80] & 0x100000) != 0 )
    for ( j = 0; j < g_AircraftTrackerPool; ++j )
    HIWORD(v80) = v41;
    LOWORD(v80) = dword_87F90C + j;
    v49 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    v50 = (void **)*((uint32_t *)v49 + 15);
    v79 = (int)v49;
    if ( v50 && TagClass::HasCrossesHorizontalLineEvent(v50) )
    v51 = (int *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 440))(a1, v82);
    TeamClass::Update_0(v50, 25, (int)a1, *v51, 0, 0);
    v42 = (uint32_t *)v79;
    if ( (v42[80] & 0x200000) != 0 )
    for ( k = 0; k < g_AircraftTrackerState; ++k )
    LOWORD(v80) = v81;
    HIWORD(v80) = dword_87F910 + k;
    v53 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v80);
    v54 = (void **)*((uint32_t *)v53 + 15);
    if ( v54 && TagClass::HasCrossesVerticalLineEvent(*((uint32_t **)v53 + 15)) )
    v55 = (int *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 440))(a1, v82);
    TeamClass::Update_0(v54, 26, (int)a1, *v55, 0, 0);
    v42 = (uint32_t *)v79;
    v56 = 0;
    for ( dword_A83DBC = 0; dword_A83DBC < dword_8B41B8; ++dword_A83DBC )
    v57 = (void **)*((uint32_t *)dword_8B41AC + v56);
    if ( v57 )
    if ( TagClass::HasZoneEntryByEvent(*((uint32_t **)dword_8B41AC + v56)) )
    v58 = (uint32_t *)(*(int (__thiscall **)(__int16 *, uint8_t *))(*(uint32_t *)a1 + 76))(a1, v88);
    LOWORD(v79) = *v58 / 256;
    v59 = *(uint32_t *)a1;
    HIWORD(v79) = v58[1] / 256;
    v80 = v79;
    v72 = (*(int (__thiscall **)(__int16 *))(v59 + 188))(a1);
    v60 = (__int16 *)FootClass::processScriptAction(v57, &v80);
    v61 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, v60) + 80) >> 8;
    LOBYTE(v61) = v61 & 1;
    v73 = *(uint32_t *)((*(int (__thiscall **)(__int16 *, int, int))(*(uint32_t *)a1 + 132))(a1, v61, v72) + 1460);
    v62 = (__int16 *)FootClass::processScriptAction(v57, &v83);
    if ( MapSeed::CheckTileMatch(&MapClass_Instance, v62, (__int16 *)&v81, v73, 0, 0, 0) )
    v63 = (uint32_t *)(*(int (__thiscall **)(__int16 *, int *, uint32_t))(*(uint32_t *)a1 + 76))(a1, &v86, 0);
    LOWORD(v79) = *v63 / 256;
    HIWORD(v79) = v63[1] / 256;
    TeamClass::Update_0(v57, 24, (int)a1, v79, 0, 0);
    v56 = dword_A83DBC + 1;
    v64 = Cell::IsBridge(v42);
    v65 = v64;
    if ( v64 )
    if ( *(uint8_t *)(v64[328] + 5823) )
    if ( (int)v64[390] < 8 )
    v66 = (*(int (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 44))(a1);
    if ( v66 > 0 && (v66 <= 2 || v66 == 15) && *((int *)a1 + 27) > 0 )
    (*(void (__thiscall **)(__int16 *, __int16 *, uint32_t, int, uint32_t *, int, int, uint32_t))(*(uint32_t *)a1 + 364))(
    a1,
    a1 + 54,
    0,
    RulesClass_Instance->SilverCrate[5],
    v65,
    1,
    1,
    0);
    a2 = v75;
    if ( *((uint8_t *)a1 + 140) )
    v83 = *((uint32_t *)a1 + 39);
    v84 = *((uint32_t *)a1 + 40);
    v85 = *((uint32_t *)a1 + 41);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v83) + 80) & 0x100) == 0 )
    (*(void (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 236))(a1);
    result = *((uint8_t *)a1 + 144);
    if ( !result )
    return result;
    v68 = (__int16 *)(*(int (__thiscall **)(__int16 *, int *))(*(uint32_t *)a1 + 440))(a1, &v83);
    if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, v68, 1)
    && (*(unsigned __int8 (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 1244))(a1) )
    return (*(char (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 248))(a1);
    if ( *((uint8_t *)a1 + 131) )
    if ( !(unsigned __int8)House::IsHumanPlayer(*((void*375 **)a1 + 135)) )
    v83 = *((uint32_t *)a1 + 39);
    v84 = *((uint32_t *)a1 + 40);
    v85 = *((uint32_t *)a1 + 41);
    if ( Cell::IsPassable(&v83) )
    (*(void (__thiscall **)(__int16 *))(*(uint32_t *)a1 + 336))(a1);
    v69 = *((uint32_t *)a1 + 328);
    if ( v69 != -1 )
    Element = (int *)Array::GetElement(*((uint32_t **)HouseClass_Player + v69 + 132), *((char *)a1 + 1670));
    if ( Element )
    LOWORD(v80) = *Element / 256;
    HIWORD(v80) = Element[1] / 256;
    v71 = v80;
    if ( (int *)dword_8809A4 == Element )
    LOWORD(v80) = dword_8809A8 / 256;
    HIWORD(v80) = dword_8809AC / 256;
    v71 = v80;
    if ( __PAIR32__(HIWORD(v80) + a1[659], v71 + a1[658]) != *((uint32_t *)a1 + 330) )
    BuildingClass::ValidateFoundation_0((int)a1, 0, a2, Element, v76, v77);
    return FootClass::CompleteProduction((void*377 *)a1);
    else
    v80 = 0;
    *((uint32_t *)a1 + 328) = -1;
    *((uint8_t *)a1 + 1670) = 0;
    *((uint32_t *)a1 + 329) = 0;
    *((uint32_t *)a1 + 330) = 0;
    return FootClass::CompleteProduction((void*377 *)a1);
}

// 0x004D8F40
int  FootClass::OverrideMission_SyncLog(#377 *this, int a2, int a3, int a4)
{
    *((uint32_t *)this + 362) = *((uint32_t *)this + 361);
    MissionClass::OverrideMission_SyncLog(this);
    return (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 1152))(this, a4, 1);
}

int  FootClass::DispatchSell(void **this, char a2)
{
    int v3; // ecx
    int Member; // eax
    if ( a2 )
    v3 = (int)*(this + 373);
    if ( v3 )
    if ( !IKnowWhatImDoing )
    TeamClass::LiberateMember_Start(v3, (int)this, 0xFFFFFFFF, 0);
    (*((void (__thiscall **)(void **, int))*this + 157))(this, 3);
    return ObjectClass::Destroy2((void*374 *)this);
    Member = Team::GetMember(this, 0);
    if ( !Member || Object::IsAlliedWithObjectHouse(*(this + 135), Member) )
    return ObjectClass::Destroy2((void*374 *)this);
    (*((void (__thiscall **)(void **, int))*this + 157))(this, 3);
    return ObjectClass::Destroy2((void*374 *)this);
}

void  FootClass::Destroyed(#375 **this, int a2)
{
    __int64 v3; // rax
    uint8_t v4[4]; // [esp+4h] [ebp-4h] BYREF
    if ( (unsigned __int8)House::IsHumanPlayer(*(this + 135))
    && !*(uint8_t *)((*((int (__thiscall **)(void*375 **))*this + 33))(this) + 3412) )
    v3 = ((__int64 (__thiscall *)(void*375 **, uint8_t *))*((uint32_t *)*this + 110))(this, v4);
    if ( CreateTriggerClassIfFarEnough(7, SHIDWORD(v3), *(uint32_t *)v3) )
    VoxClass::FindAndPlay(aEvaUnitlost, -1);
}

void * FootClass::SelectAutoTarget_Cloaked(int this, int a2, int a3, char a4)
{
    int v5; // eax
    void *result; // eax
    v5 = a2;
    if ( *(uint8_t *)(this + 1672) )
    LOBYTE(v5) = a2 & 0xFC | 1;
    result = TechnoClass::SelectAutoTarget_Start_AU((void*375 **)this, a3, v5, a3, a4);
    if ( *(uint8_t *)(this + 1672) )
    if ( !result )
    *(uint8_t *)(this + 1672) = 0;
    return result;
}

// 0x004D9C00
int FootClass::vt_entry_524()
{
    return 0;
}

int  FootClass::Destru_vt107(uint32_t *this, int a2, int a3, int a4, int a5, char a6)
{
    if ( !*(this + 413) || !a6 )
    return 0;
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, uint32_t))(*(uint32_t *)*(this + 413) + 28))(*(this + 413), *(uint32_t *)(a2 + 36));
}

// 0x004D9FF0
uint32_t * FootClass::vt_entry_4F0(void *this, uint32_t *a2)
{
    uint32_t *v2; // ecx
    uint8_t v4[12]; // [esp+4h] [ebp-Ch] BYREF
    v2 = (uint32_t *)(*(int (__thiscall **)(void *, uint8_t *))(*(uint32_t *)this + 164))(this, v4);
    *a2 = *v2;
    a2[1] = v2[1];
    a2[2] = v2[2];
    return a2;
}

int  FootClass::ClearSomeVector(uint32_t *this)
{
    return (*(int (__thiscall **)(uint32_t *))(*(this + 363) + 12))(this + 363);
}

// 0x004DA230
char  FootClass::CanBeRecruited(uint32_t *this, int a2)
{
    char result; // al
    int v4; // eax
    if ( !a2 )
    return 0;
    if ( a2 != *(this + 135) )
    return 0;
    if ( *((uint8_t *)this + 129) )
    return 0;
    if ( *(this + 373) )
    return 0;
    v4 = (*(int (__thiscall **)(uint32_t *))(*this + 388))(this);
    result = IPersistStream::SetField(v4);
    if ( result )
    return *((uint8_t *)this + 1057) != 0;
    return result;
}

// 0x004DA2A0
bool  FootClass::ClearSomeVector2(void *this)
{
    return (*(int (__thiscall **)(void *))(*(uint32_t *)this + 388))(this) == 7;
}

// 0x004DB7E0
int  FootClass::Destru_vt30(uint32_t *this)
{
    if ( !*(this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t))(*(uint32_t *)*(this + 413) + 116))(*(this + 413));
}

// 0x004DBFD0
bool  FootClass::vt_entry_4E0(void *this)
{
    if ( !(*(int (__thiscall **)(void *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) )
    return 1;
    if ( *(uint32_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 1588) == -1 )
    return 1;
    if ( *(uint32_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 1028) )
    return 1;
    return *(uint32_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 1656) <= 13;
}

// 0x004DC030
int  FootClass::vt_entry_4F4(void *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 388))(this);
    if ( result == 15 )
    (*(void (__thiscall **)(void *, uint32_t))(*(uint32_t *)this + 968))(this, 0);
    return (*(int (__thiscall **)(void *, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    return result;
}

// 0x004DC790
bool  FootClass::Destru_vt311(void *this)
{
    bool result; // al
    int v3; // ecx
    int v4; // ecx
    uint32_t *v5; // eax
    uint8_t v6[12]; // [esp+4h] [ebp-Ch] BYREF
    if ( !*((uint8_t *)this + 981) )
    return 0;
    v3 = *((uint32_t *)this + 373);
    if ( !v3 || (result = TechnoClass::IsWaypointHidden(v3)) )
    result = 1;
    if ( *(uint8_t *)((*(int (__thiscall **)(void *))(*(uint32_t *)this + 132))(this) + 3220) )
    v4 = *((uint32_t *)this + 361);
    if ( v4 )
    v5 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)v4 + 72))(v4, v6);
    if ( IsCoordVisibleMap(&MapClass_Instance, v5) )
    return 0;
    return result;
}

char  FootClass::MoveToTiberium(uint32_t *this, int a2, int a3)
{
    uint32_t *v4; // eax
    int v6; // edi
    void *v7; // eax
    uint8_t v8[12]; // [esp+Ch] [ebp-Ch] BYREF
    if ( !*(this + 361) )
    a3 = *(uint32_t *)(*(int (__thiscall **)(uint32_t *, int *, int, int))(*this + 824))(this, &a2, a2, a3);
    if ( a3 != g_FootClass_Pool )
    v4 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*this + 72))(this, v8);
    if ( a3 == __PAIR32__(v4[1] / 256, *v4 / 256) )
    return 1;
    v6 = *this;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    (*(void (__thiscall **)(uint32_t *, void *, int))(v6 + 1152))(this, v7, 1);
    return 0;
}

char  FootClass::MoveToWeed(int *this, int a2)
{
    uint32_t *v3; // eax
    int v5; // edi
    void *v6; // eax
    int v7; // [esp+8h] [ebp-10h] BYREF
    uint8_t v8[12]; // [esp+Ch] [ebp-Ch] BYREF
    if ( !*(this + 361) )
    a2 = *BuildingClass::Validate(this, &v7, a2);
    if ( a2 != g_FootClass_Pool )
    v3 = (uint32_t *)(*(int (__thiscall **)(int *, uint8_t *))(*this + 72))(this, v8);
    if ( a2 == __PAIR32__(v3[1] / 256, *v3 / 256) )
    return 1;
    v5 = *this;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    (*(void (__thiscall **)(int *, void *, int))(v5 + 1152))(this, v6, 1);
    return 0;
}

int  FootClass::PreDestroy(void **this)
{
    uint32_t *v2; // ecx
    int v3; // ecx
    v2 = *(this + 175);
    if ( v2 )
    CaptureManager::FreeAll(v2);
    if ( *(this + 171) )
    TechnoClass::EjectPassengers((int *)this, 1);
    v3 = (int)*(this + 373);
    if ( v3 )
    TeamClass::LiberateMember_Start(v3, (int)this, 0xFFFFFFFF, 0);
    return ObjectClass::Destroy((void*374 *)this);
}

// 0x004DE670
int  FootClass::RemovePassenger(uint32_t *this, int a2)
{
    uint32_t *v3; // edi
    int v4; // edx
    int v5; // eax
    int result; // eax
    uint32_t v7[3]; // [esp+Ch] [ebp-Ch] BYREF
    v3 = this + 69;
    FootClass::updateMovementAnimation(this + 69, a2);
    if ( a2 && *(uint32_t *)((*(int (__thiscall **)(uint32_t *))(*this + 132))(this) + 1384) != -1 )
    v7[0] = *(this + 39);
    v4 = *this;
    v7[1] = *(this + 40);
    v7[2] = *(this + 41);
    v5 = (*(int (__thiscall **)(uint32_t *))(v4 + 132))(this);
    PlayAudioAt2(*(uint32_t *)(v5 + 1384), v7, 0);
    result = (*(int (__thiscall **)(uint32_t *))(*this + 132))(this);
    if ( *(uint8_t *)(result + 2053) )
    if ( !*v3 )
    return (*(int (__thiscall **)(uint32_t *, int))(*this + 1240))(this, a2);
    return result;
}

// 0x004DEE50
int  FootClass::vt_entry_530(int *this, int a2, int a3, int a4)
{
    int v4; // eax
    int v6; // [esp+0h] [ebp-4h] BYREF
    v6 = (int)this;
    v4 = *this;
    v6 = -1;
    return (*(int (__thiscall **)(int *, int, int, int, int *))(v4 + 1324))(this, a2, a3, a4, &v6);
}

// 0x004DF3A0
int  FootClass::UpdateAttackMove_SelectNewTarget(uint32_t *this)
{
    int result; // eax
    int v3; // eax
    int v4; // eax
    int v5; // [esp+8h] [ebp-Ch] BYREF
    int v6; // [esp+Ch] [ebp-8h]
    int v7; // [esp+10h] [ebp-4h]
    if ( *(this + 370) )
    if ( *((uint8_t *)this + 1489) )
    result = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 948))(this, *(this + 173));
    if ( (uint8_t)result )
    return result;
    *(this + 173) = 0;
    v5 = *(this + 39);
    v3 = *this;
    v6 = *(this + 40);
    v7 = *(this + 41);
    result = (*(int (__thiscall **)(uint32_t *, int *, int))(v3 + 924))(this, &v5, 1);
    if ( (uint8_t)result )
    goto LABEL_6;
    else if ( !*(this + 371)
    || (result = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 948))(this, *(this + 371)), !(uint8_t)result) )
    if ( !*((uint8_t *)this + 1489)
    || (result = (*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 948))(this, *(this + 173)), !(uint8_t)result) )
    *(this + 173) = 0;
    v5 = *(this + 39);
    v4 = *this;
    v6 = *(this + 40);
    v7 = *(this + 41);
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, int))(v4 + 924))(this, &v5, 1) )
    LABEL_6:
    result = (*(int (__thiscall **)(uint32_t *, int, int))(*this + 488))(this, 1, 1);
    *((uint8_t *)this + 1489) = 1;
    return result;
    result = *(this + 371);
    *(this + 173) = result;
    return result;
}

char  FootClass::Destru_vt322(uint8_t *this, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // eax
    int v7; // edi
    void *v8; // eax
    LPVOID v9; // edi
    LPVOID v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // edi
    int v14; // ecx
    void *v15; // eax
    LPVOID ppv; // [esp+54h] [ebp-8h] BYREF
    int v18; // [esp+58h] [ebp-4h] BYREF
    if ( (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 84))(this)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 352))(this)
    || *(this + 636)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 468))(this)
    || (*(unsigned __int8 (__thiscall **)(uint8_t *))(*(uint32_t *)this + 472))(this) )
    return 0;
    ppv = 0;
    v5 = CreateInstanceCOM(&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    v18 = 0;
    if ( ppv )
    v6 = StreamClass::Set(&v18, &ppv);
    if ( v6 < 0 && v6 != -2147467262 )
    WinAPI::Wrapper(v6);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &a2) + 80) & 0x100) != 0 )
    a4 += dword_8B3DF4;
    if ( (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)this + 44))(this) == 1 )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, uint32_t))(**((uint32_t **)this + 413) + 156))(*((uint32_t *)this + 413), 0);
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(uint32_t, int, int, int, int))(**((uint32_t **)this + 413) + 112))(
    *((uint32_t *)this + 413),
    -1,
    a2,
    a3,
    a4);
    (*(void (__thiscall **)(uint8_t *, int *))(*(uint32_t *)this + 244))(this, &a2);
    *(this + 1718) = 1;
    v7 = *(uint32_t *)this;
    v8 = Coord::To_Cell(&MapClass_Instance, &a2);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v7 + 1152))(this, v8, 1);
    (*(void (__thiscall **)(uint8_t *, uint32_t, int))(*(uint32_t *)this + 1152))(this, 0, 1);
    if ( !ppv )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID, uint8_t *))(*(uint32_t *)ppv + 12))(ppv, this);
    if ( !v18 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int, uint32_t))(*(uint32_t *)v18 + 12))(v18, *((uint32_t *)this + 413));
    v9 = (LPVOID)*((uint32_t *)this + 413);
    v10 = ppv;
    if ( v9 != ppv )
    *((uint32_t *)this + 413) = ppv;
    if ( v10 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v10 + 4))(v10);
    if ( v9 )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)v9 + 8))(v9);
    v11 = a2;
    v12 = a3;
    v13 = *(uint32_t *)this;
    *(this + 636) = 1;
    *((uint32_t *)this + 162) = v11;
    v14 = a4;
    *((uint32_t *)this + 163) = v12;
    *((uint32_t *)this + 164) = v14;
    v15 = Coord::To_Cell(&MapClass_Instance, &a2);
    (*(void (__thiscall **)(uint8_t *, void *, int))(v13 + 1152))(this, v15, 1);
    if ( v18 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v18 + 8))(v18);
    if ( ppv )
    (*(void (__stdcall **)(LPVOID))(*(uint32_t *)ppv + 8))(ppv);
    return 1;
}

// 0x004E00B0
uint32_t * FootClass::Jumpjet_OccupyCell(__int16 *this, int a2)
{
    uint32_t *result; // eax
    uint32_t *v4; // esi
    result = (uint32_t *)g_FootClass_Pool;
    v4 = this + 690;
    if ( *((uint32_t *)this + 345) == g_FootClass_Pool )
    *v4 = a2;
    return (uint32_t *)a2;
    else
    if ( a2 != g_FootClass_Pool )
    result = CellCoord::To_CellObj(&MapClass_Instance, this + 690);
    if ( (__int16 *)result[56] == this )
    result = CellCoord::To_CellObj(&MapClass_Instance, this + 690);
    result[56] = 0;
    *v4 = a2;
    return result;
}

void * FootClass::Destru_vt08(void *Block, char a2)
{
    FootClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  FootClass::UpdateFacing(int this)
{
    int v2; // ebp
    int *v3; // edi
    int *v4; // ebx
    double v5; // st7
    uint32_t *Value; // eax
    uint32_t *v7; // eax
    int v8; // ecx
    int v9; // edx
    int v10; // eax
    uint32_t *v11; // eax
    int v12; // ebx
    int v13; // ecx
    int v14; // edx
    int v15; // eax
    int v16; // eax
    double v17; // st7
    char v18; // al
    int v19; // eax
    int v20; // ecx
    int *p_CloakSound; // ecx
    double v22; // st7
    double v23; // st6
    char v25; // c0
    double v26; // st7
    unsigned __int8 v28; // c0
    unsigned __int8 v29; // c3
    uint32_t *v30; // ecx
    int v31; // ebx
    int v32; // ebp
    int v33; // edi
    int v34; // eax
    int v35; // eax
    int v36; // edx
    int *v37; // eax
    double v38; // st7
    __int16 v39; // ax
    int v40; // ecx
    int v41; // [esp+34h] [ebp-24h] BYREF
    int v42; // [esp+38h] [ebp-20h]
    int v43; // [esp+3Ch] [ebp-1Ch] BYREF
    int v44; // [esp+40h] [ebp-18h] BYREF
    int v45; // [esp+44h] [ebp-14h]
    int v46; // [esp+48h] [ebp-10h]
    uint8_t v47[12]; // [esp+4Ch] [ebp-Ch] BYREF
    v2 = this + 4;
    if ( !(*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)(this + 4) + 16))(this + 4)
    || (v3 = (int *)(this + 36), *(uint32_t *)(this + 36) == g_ScoreDisplayState1)
    && *(uint32_t *)(this + 40) == g_ScoreDisplayState2
    && *(uint32_t *)(this + 44) == g_ScoreDisplayState3 )
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v2 + 16))(v2)
    && *(uint32_t *)(this + 36) == g_ScoreDisplayState1
    && *(uint32_t *)(this + 40) == g_ScoreDisplayState2
    && *(uint32_t *)(this + 44) == g_ScoreDisplayState3 )
    (*(void (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(this + 12) + 1348))(
    *(uint32_t *)(this + 12),
    0,
    1072693248);
    MovementAI::StepFootClass((int *)this, 0);
    MovementAI::MainFootClass((int *)this, 1);
    else
    v4 = (int *)(*(int (__thiscall **)(uint32_t, int *))(**(uint32_t **)(this + 12) + 72))(*(uint32_t *)(this + 12), &v44);
    Int64::Equal(v4, (uint32_t *)(this + 36));
    v5 = Math::CalcAngle((double)v4[1] - (double)*(int *)(this + 40), (double)*v3 - (double)*v4);
    LOWORD(v41) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
    if ( *(uint8_t *)(this + 112) )
    FacingClass::Set_SyncLog(&v41);
    else
    FacingClass::Update((char *)(this + 48), &v41);
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(uint32_t *)v2 + 96))(v2)
    && (Value = ProgressTimer::GetValue((_WORD *)(this + 48), &v43), abs16(*(_WORD *)Value - v41) <= 0x2000u)
    || *(uint8_t *)(this + 112) )
    if ( *(uint32_t *)(this + 24) == g_ScoreDisplayState1
    && *(uint32_t *)(this + 28) == g_ScoreDisplayState2
    && *(uint32_t *)(this + 32) == g_ScoreDisplayState3 )
    v7 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(this + 12) + 72))(
    *(uint32_t *)(this + 12),
    v47);
    v8 = *v7 - *v3;
    v9 = v7[1] - *(uint32_t *)(this + 40);
    v10 = v7[2] - *(uint32_t *)(this + 44);
    v44 = v8;
    v45 = v9;
    v46 = v10;
    if ( (int)Coord::Length(&v44) < 256 )
    goto LABEL_19;
    if ( *(uint32_t *)(this + 24) == g_ScoreDisplayState1
    && *(uint32_t *)(this + 28) == g_ScoreDisplayState2
    && *(uint32_t *)(this + 32) == g_ScoreDisplayState3 )
    goto LABEL_20;
    v11 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(**(uint32_t **)(this + 12) + 72))(
    *(uint32_t *)(this + 12),
    v47);
    v12 = *(uint32_t *)(this + 28);
    v13 = *v11 - *(uint32_t *)(this + 24);
    v14 = v11[1];
    v15 = v11[2];
    v44 = v13;
    v16 = v15 - *(uint32_t *)(this + 32);
    v45 = v14 - v12;
    v46 = v16;
    v17 = Math::Sqrt((double)v13 * (double)v13 + (double)v16 * (double)v16 + (double)(v14 - v12) * (double)(v14 - v12));
    if ( (int)Math::RoundToInt(v17) >= 256 )
    LABEL_20:
    v18 = *(uint8_t *)(this + 112);
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)(this + 76) = 1072693248;
    if ( v18 )
    *(uint32_t *)(this + 80) = 0;
    *(uint32_t *)(this + 84) = 1072693248;
    else
    LABEL_19:
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)(this + 76) = 1071644672;
    else
    *(uint32_t *)(this + 72) = 0;
    *(uint32_t *)(this + 76) = 0;
    if ( *(double *)(this + 72) > 0.0 )
    v19 = *(uint32_t *)(this + 12);
    *(uint32_t *)(this + 88) = 0;
    *(uint32_t *)(this + 92) = 1072693248;
    v20 = *(uint32_t *)(v19 + 1504);
    if ( v20 != -1 && v20 == *(uint32_t *)(v19 + 1508) )
    p_CloakSound = &RulesClass_Instance->CloakSound;
    *(uint32_t *)(this + 88) = RulesClass_Instance->CloakSound;
    *(uint32_t *)(this + 92) = p_CloakSound[1];
    v22 = *(double *)(this + 88) * *(double *)(this + 72);
    if ( v22 > 1.0 )
    v22 = 1.0;
    if ( v22 > *(double *)(this + 80) )
    v23 = 1.0 / (*(double *)&RulesClass_Instance->GameClosed * 900.0) + *(double *)(this + 80);
    *(double *)(this + 80) = v23;
    if ( !v25 )
    v23 = v22;
    *(double *)(this + 80) = v23;
    if ( v22 < *(double *)(this + 80) )
    v26 = *(double *)(this + 80) - 1.0 / (*(double *)&RulesClass_Instance->SystemError * 900.0);
    *(double *)(this + 80) = v26;
    if ( v28 | v29 )
    v26 = 0.0;
    *(double *)(this + 80) = v26;
    if ( *(double *)(this + 72) > 0.0 && !*(uint8_t *)(this + 112) )
    v30 = *(uint32_t **)(this + 12);
    v31 = *v3;
    v32 = *(uint32_t *)(this + 40);
    v33 = *(uint32_t *)(this + 44);
    v34 = v30[376];
    v44 = v31;
    v45 = v32;
    if ( v34 != -1 && v34 != 8 )
    v35 = v34 & 7;
    v46 = v33;
    v36 = dword_89F6DC[2 * v35];
    v44 = v31 + dword_89F6D8[2 * v35];
    v45 = v32 + v36;
    v37 = (int *)(*(int (__thiscall **)(uint32_t *, uint8_t *))(*v30 + 72))(v30, v47);
    v42 = *v37;
    v38 = Math::CalcAngle((double)v37[1] - (double)v45, (double)v44 - (double)v42);
    v39 = Math::RoundToInt((v38 - 1.570796326794897) * -10430.06004058427);
    v40 = *(uint32_t *)(this + 12);
    LOWORD(v42) = v39;
    v43 = v42;
    FacingClass::Update((char *)(v40 + 904), &v43);
}

int  FootClass::CreateWakes(_WORD *this, int a2, int a3, int a4)
{
    double v4; // rdi
    double v5; // st7
    int v6; // esi
    int v7; // eax
    void **v8; // eax
    int result; // eax
    int v10; // [esp+Ch] [ebp-34h]
    double v11; // [esp+10h] [ebp-30h] BYREF
    double v12; // [esp+18h] [ebp-28h]
    double v13; // [esp+20h] [ebp-20h]
    double v14; // [esp+28h] [ebp-18h]
    int v15[3]; // [esp+34h] [ebp-Ch] BYREF
    v11 = -((double)(*(__int16 *)ProgressTimer::GetValue(this + 452, &v11) - 0x3FFF) * -0.00009587672516830327);
    v4 = v11;
    v14 = Math::ArcTan2(v11);
    v13 = Math::SinCos(v4);
    v10 = 3;
    do
    LODWORD(v11) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, -180, 180);
    v12 = (double)SLODWORD(v11);
    LODWORD(v11) = Random::Range((uint32_t *)ScenarioClass_Instance + 134, -64, 64);
    v5 = (double)SLODWORD(v11);
    v6 = Math::RoundToInt(v5);
    v7 = Math::RoundToInt(v12 * v13 + v5 * v14);
    v15[0] = v6 + a2;
    v15[1] = a3 + v7;
    v15[2] = a4;
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    AnimClass::ctor(v8, (void *)RulesClass_Instance->FlamingInfantry, v15, 0, 1, (void *)0x600, 0, 0);
    result = --v10;
    while ( v10 );
    return result;
}

int  FootClass::CompleteProduction(#377 *this)
{
    int result; // eax
    uint32_t *v3; // ecx
    uint32_t *v4; // eax
    int v5; // eax
    void **v6; // ecx
    void *v7; // eax
    int v8; // [esp+4h] [ebp-10h]
    uint8_t v9[12]; // [esp+8h] [ebp-Ch] BYREF
    int v10; // [esp+18h] [ebp+4h] BYREF
    result = v10;
    if ( v10 == 2 )
    v3 = (uint32_t *)*((uint32_t *)this + 157);
    if ( v3 && v3[10] )
    FactoryClass::CompleteItem(v3);
    v4 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v9);
    LOWORD(v8) = *v4 / 256;
    HIWORD(v8) = v4[1] / 256;
    v5 = *(uint32_t *)this;
    v10 = v8;
    (*(void (__thiscall **)(void*377 *))(v5 + 1056))(this);
    v6 = (void **)*((uint32_t *)this + 13);
    if ( v6 )
    TeamClass::Update_0(v6, 34, (int)this, g_TechnoHouseState, 0, 0);
    if ( !*((uint8_t *)this + 981) && LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v10, 1) )
    *((uint8_t *)this + 981) = 1;
    if ( !*((uint8_t *)this + 1051)
    && (*((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10) + 300) & 0x10) != 0 )
    (*(void (__thiscall **)(void*377 *, void*375 *))(*(uint32_t *)this + 408))(this, HouseClass_Player);
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10);
    BuildingClass::CreateIdleAnim((int)v7);
    return result;
}

int  FootClass::CheckCliffTransition(#377 *this)
{
    int v2; // edi
    int v3; // eax
    uint32_t *v4; // eax
    int v6; // [esp+8h] [ebp-14h] BYREF
    uint8_t v7[4]; // [esp+Ch] [ebp-10h] BYREF
    uint32_t v8[3]; // [esp+10h] [ebp-Ch] BYREF
    v8[0] = *((uint32_t *)this + 39);
    v8[1] = *((uint32_t *)this + 40);
    v8[2] = *((uint32_t *)this + 41);
    v2 = *Terrain::ClimbCheck(&v6, v8);
    v3 = *(uint32_t *)this;
    v6 = v2;
    v4 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(v3 + 440))(this, v7);
    return __PAIR32__(HIWORD(v6), v2) != *v4;
}

int  FootClass::UpdatePassengerCoords(int *this)
{
    int *v1; // edi
    int DB; // esi
    int result; // eax
    uint32_t v4[3]; // [esp+8h] [ebp-Ch] BYREF
    v1 = this + 39;
    DB = CCINIClass::GetDB(this + 69);
    result = *v1;
    v4[0] = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    if ( DB )
    do
    result = (*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)DB + 436))(DB, v4);
    DB = *(uint32_t *)(DB + 48);
    while ( DB && (*(uint8_t *)(DB + 20) & 4) != 0 );
    return result;
}

char __userpurge FootClass::RespondToDestruction@<al>(int a1@<ecx>, int a2@<ebp>, int a3, int a4)
{
    char v4; // bl
    char v6; // al
    uint32_t *v7; // edx
    __int16 *v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // ebp
    int v12; // eax
    int v13; // eax
    uint32_t *Member; // edi
    uint32_t *v15; // eax
    int v16; // eax
    uint32_t v18[3]; // [esp+10h] [ebp-Ch] BYREF
    v4 = a3;
    v6 = FootClass::ValidatePlacement((uint32_t **)a1, a3, a2, a3, a4);
    v7 = *(uint32_t **)a1;
    LOBYTE(a4) = v6;
    if ( ((unsigned __int8 (__thiscall *)(int))v7[299])(a1)
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 28 )
    return a4;
    if ( *(uint32_t *)(a1 + 684) )
    TechnoClass::EjectPassengers((int *)a1, 1);
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 2 && !*(uint32_t *)(a1 + 1444) )
    v8 = (__int16 *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)a1 + 440))(a1, &a3);
    v9 = (*v8 << 8) + 128;
    v10 = (v8[1] << 8) + 128;
    if ( *(uint32_t *)(a1 + 156) == v9 && *(uint32_t *)(a1 + 160) == v10 && !*(uint32_t *)(a1 + 164) )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)a1 + 628))(a1, 3);
    InfantryClass::ProcessExitQueue(a1);
    if ( *(uint32_t *)(a1 + 1444) )
    v11 = 2;
    else
    v12 = *(uint32_t *)(a1 + 1732);
    if ( *(uint8_t *)(v12 + 3598) || *(uint8_t *)(v12 + 3599) )
    if ( Team::AllMembersValid((int *)a1) )
    return a4;
    v11 = 10;
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 10 || *(uint32_t *)(a1 + 180) == 10 )
    return a4;
    if ( !v4 )
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void*375 **)(a1 + 540)) )
    v18[0] = *(uint32_t *)(a1 + 156);
    v18[1] = *(uint32_t *)(a1 + 160);
    v18[2] = *(uint32_t *)(a1 + 164);
    if ( *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v18) + 59) != (*(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3598) != 0
    ? 5
    : 11) )
    v11 = 5;
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)a1 + 968))(a1, 0);
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)a1 + 684))(a1) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 5
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) == 11
    || (*(int (__thiscall **)(int))(*(uint32_t *)a1 + 388))(a1) != -1
    && (MissionClass::GetMissionControl((uint32_t *)a1)[7] || MissionClass::GetMissionControl((uint32_t *)a1)[5]) )
    return a4;
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 540) + 588) < SLODWORD(RulesClass_Instance[1].TunnelSpeed)
    && !TechnoTypeClass::HasVoiceResponse((float *)a1, 16)
    && !*(uint8_t *)(*(uint32_t *)(a1 + 1732) + 3385)
    || *(uint32_t *)(a1 + 1492)
    || *(uint32_t *)(a1 + 732)
    || *(uint32_t *)(a1 + 728)
    || (v11 = 11, *(uint32_t *)(a1 + 740)) )
    v11 = 5;
    else if ( *(uint8_t *)(a1 + 980)
    && *(int *)(*(uint32_t *)(a1 + 1732) + 1504) > 0
    && *(uint32_t *)(a1 + 280)
    && !*(uint32_t *)(a1 + 1492) )
    v11 = 16;
    else
    if ( *(uint8_t *)(a1 + 1676) )
    return a4;
    v13 = *(uint32_t *)(a1 + 172);
    if ( v13 == 16 )
    if ( *(uint32_t *)(*(uint32_t *)(a1 + 1732) + 1028) )
    return a4;
    if ( v13 == 11 )
    return a4;
    v11 = 5;
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)a1 + 968))(a1, 0);
    (*(void (__thiscall **)(int, uint32_t, int))(*(uint32_t *)a1 + 1152))(a1, 0, 1);
    Member = (uint32_t *)Team::GetMember((uint32_t *)a1, 0);
    if ( *(uint32_t *)(a1 + 172) != 7
    || !Member
    || (*(int (__thiscall **)(uint32_t *))(*Member + 44))(Member) != 6
    || !*(uint8_t *)(*((*(int (__thiscall **)(uint32_t *))(*Member + 44))(Member) == 6 ? Member + 328 : (uint32_t *)1312)
    + 5803)
    || (v15 = (uint32_t *)(*(int (__thiscall **)(int))(*(uint32_t *)a1 + 444))(a1), Cell::IsBridge(v15) == Member) )
    v16 = *(uint32_t *)(a1 + 172);
    if ( v16 != 25 && v16 != 11 && v16 != 16 && v16 != 9 )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 488))(a1, v11, 0);
    return a4;
}

// 0x007500D0
double  FootClass::GetField(float *this)
{
    double result; // st7
    result = *this * 100.0;
    Math::RoundToInt(result);
    return result;
}

// 0x007500E0
void  FootClass::SetField(float *this, int a2)
{
    *this = (double)a2 * 0.01;
}

