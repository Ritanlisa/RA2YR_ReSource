#include "object.hpp"

// 0x005F5230
int  Object::Unlink(#374 *this)
{
    int result; // eax
    int v2; // [esp+4h] [ebp+4h]
    char v3; // [esp+8h] [ebp+8h]
    result = *((uint32_t *)this + 13);
    if ( result == v2 && result )
    --*(uint32_t *)(result + 44);
    *((uint32_t *)this + 13) = 0;
    LOBYTE(result) = v3;
    if ( v3 )
    result = *((uint32_t *)this + 12);
    if ( v2 == result )
    if ( v2 )
    result = *(uint32_t *)(result + 48);
    *((uint32_t *)this + 12) = result;
    if ( v2 == *((uint32_t *)this + 34) )
    *((uint32_t *)this + 34) = 0;
    return result;
}

char  Object::_vt73(int *this, int a2)
{
    int v2; // esi
    uint8_t *v4; // eax
    int v5; // edx
    int v6; // ecx
    int v7; // ebp
    int v8; // esi
    int v9; // eax
    int v10; // eax
    signed int i; // esi
    uint32_t *NeighbourContent; // eax
    void*374 *v13; // eax
    int v14; // eax
    signed int j; // esi
    uint8_t *v16; // eax
    int v18; // ecx
    int v19; // esi
    __int16 v20; // bp
    __int16 v21; // ax
    char v22; // bl
    _WORD *v23; // edi
    __int16 v24; // dx
    bool v25; // zf
    int v26; // ebx
    uint32_t *v27; // eax
    __int16 v28; // ax
    int v29; // esi
    char v30; // bl
    int v31; // edx
    __int16 v32; // cx
    _WORD *v33; // edi
    uint32_t *v34; // eax
    __int16 v35; // ax
    char v36; // si
    int v37; // eax
    __int16 v38; // di
    int v39; // ecx
    signed int v40; // eax
    int v41; // ebp
    int v42; // ebx
    _WORD *v43; // edi
    __int16 v44; // dx
    uint32_t *v45; // esi
    __int16 v46; // dx
    int v47; // esi
    __int16 v48; // bp
    __int16 v49; // ax
    char v50; // bl
    _WORD *v51; // edi
    __int16 v52; // dx
    int v53; // ebx
    uint32_t *v54; // eax
    __int16 v55; // ax
    int v56; // esi
    char v57; // bl
    int v58; // edx
    __int16 v59; // cx
    _WORD *v60; // edi
    _WORD **v61; // eax
    __int16 v62; // ax
    char v63; // si
    int v64; // eax
    __int16 v65; // di
    int v66; // eax
    int v67; // ecx
    signed int v68; // eax
    int v69; // ebp
    int v70; // ebx
    _WORD *v71; // edi
    __int16 v72; // dx
    uint32_t *v73; // esi
    __int16 v74; // dx
    int v75; // ecx
    bool IsBuildable; // al
    int v77; // ecx
    int *v78; // eax
    int v79; // esi
    int v80; // edi
    int v81; // edx
    int v82; // eax
    int GroundHeight; // ebx
    void **v84; // eax
    int v85; // edx
    void **v86; // esi
    int v87; // eax
    int v88; // eax
    int *v89; // ecx
    int v90; // edx
    int v91; // [esp-1Ch] [ebp-58h]
    char v92; // [esp-18h] [ebp-54h]
    char v93; // [esp-14h] [ebp-50h]
    int v94; // [esp+10h] [ebp-2Ch] BYREF
    int *v95; // [esp+14h] [ebp-28h]
    int v96; // [esp+18h] [ebp-24h]
    int v97; // [esp+1Ch] [ebp-20h]
    int v98; // [esp+20h] [ebp-1Ch]
    _WORD *v99; // [esp+24h] [ebp-18h] BYREF
    _WORD *v100; // [esp+28h] [ebp-14h] BYREF
    uint8_t *v101; // [esp+2Ch] [ebp-10h]
    int v102; // [esp+30h] [ebp-Ch] BYREF
    int v103; // [esp+34h] [ebp-8h]
    int v104; // [esp+38h] [ebp-4h]
    v2 = a2;
    v95 = this;
    if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((void*374 *)this) || v2 != 1 && v2 != 3 )
    return 0;
    v94 = *(uint32_t *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &a2);
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v94);
    v6 = *(this + 43);
    v7 = (int)v4;
    v101 = v4;
    v8 = *(uint32_t *)(v6 + 660);
    if ( v4[284] > 4u && v8 != 178 )
    return 0;
    switch ( v8 )
    case 24:
    UpdateCellClassNeighborTerrain((int)v4, v5, 0, 1);
    break;
    case 25:
    UpdateCellClassNeighborTerrain((int)v4, v5, 6u, 1);
    break;
    case 237:
    SetCellClassOccupancyFlags((int)v4, v5, 0, 1);
    break;
    case 238:
    SetCellClassOccupancyFlags((int)v4, v5, 6u, 1);
    break;
    case 167:
    if ( (unsigned __int8)ObjectClass::IsCellSuitableForPlacement(v4 + 36) )
    for ( i = 0; i < 8; ++i )
    NeighbourContent = Cell::GetNeighbourContent((uint32_t *)v7, i);
    NeighbourContent[17] = 178;
    *((uint8_t *)NeighbourContent + 286) = 0;
    *(uint32_t *)(v7 + 68) = 167;
    *(uint8_t *)(v7 + 286) = 0;
    v13 = (void*374 *)__2_YAPAXI_Z(0x108u);
    if ( v13 )
    VeinholeMonsterClass::Constructor(v13, (__int16 *)(v7 + 36));
    goto LABEL_131;
    default:
    if ( v8 == 126 && !IKnowWhatImDoing )
    BuildingClass::VisualizePlacement(v4);
    goto LABEL_131;
    break;
    v9 = v95[43];
    if ( *(uint32_t *)(v9 + 664) != 9 )
    if ( *(uint8_t *)(v9 + 680) )
    if ( CellClass::IsPassable(v7, 1, 0, 0) )
    v14 = *(uint32_t *)(v95[43] + 660);
    *(uint8_t *)(v7 + 286) = 0;
    *(uint32_t *)(v7 + 68) = v14;
    BuildingClass::ValidatePlacement((void **)v7, 1);
    if ( !IKnowWhatImDoing )
    CellClass::DetermineTileConnectivity(v7 + 36);
    Radar::Update(&MapClass_Instance, (__int16 *)(v7 + 36));
    if ( dword_8333BC != -1 )
    *(uint32_t *)(v7 + 80) = dword_880994;
    for ( j = 0; j < 8; ++j )
    v16 = Cell::GetNeighbourContent((uint32_t *)v7, j);
    ++v16[290];
    goto LABEL_131;
    (*(void (__thiscall **)(int *))(*v95 + 248))(v95);
    return 0;
    v18 = *(uint32_t *)(v9 + 660);
    if ( v18 >= 122 && v18 <= 125 )
    v19 = v18 - 122;
    if ( (byte_AC1548 & 1) == 0 )
    byte_AC1548 |= 1u;
    dword_AC154C[0] = -65536;
    a2 = 0xFFFF;
    dword_AC1550 = -65536;
    dword_AC1554 = 0xFFFF;
    dword_AC1558 = 0xFFFF;
    atexit(nullsub_211);
    if ( (byte_AC1548 & 2) == 0 )
    byte_AC1548 |= 2u;
    dword_AC1588 = 0xFFFF;
    dword_AC158C = 0;
    dword_AC1590 = 1;
    dword_AC1594 = -65536;
    v96 = 0x10000;
    dword_AC1598 = 0;
    dword_AC159C = 0x10000;
    atexit(nullsub_210);
    v20 = LOWORD(dword_AC154C[v19]) + v94;
    v21 = HIWORD(v94) + HIWORD(dword_AC154C[v19]);
    v22 = 1;
    v98 = 3;
    LOWORD(v96) = v20;
    HIWORD(v96) = v21;
    a2 = v96;
    v23 = (_WORD *)(4 * (dword_8333C0[v19] & 7) + 9041544);
    do
    if ( *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17) != -1 )
    v22 = 0;
    v24 = a2 + *v23;
    HIWORD(v97) = v23[1] + HIWORD(a2);
    LOWORD(v97) = v24;
    v25 = v98 == 1;
    a2 = v97;
    --v98;
    while ( !v25 );
    a2 = v96;
    if ( v22 )
    v26 = 0;
    do
    v27 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v27[17] = dword_8333D0[v19];
    *((uint8_t *)v27 + 286) = v26;
    House::AnnounceUpgrade((int)v27, -1);
    v28 = v23[1] + HIWORD(a2);
    ++v26;
    LOWORD(v98) = *v23 + a2;
    HIWORD(v98) = v28;
    a2 = v98;
    while ( v26 < 3 );
    v29 = dword_8333E0[v19];
    v30 = 0;
    v31 = v29 & 7;
    v32 = HIWORD(v94) + HIWORD(Direction_X_Offsets[v31]);
    v33 = (_WORD *)(4 * v31 + 9041544);
    LOWORD(v98) = v94 + LOWORD(Direction_X_Offsets[v31]);
    HIWORD(v98) = v32;
    a2 = v98;
    v97 = dword_8333F8[v29 / 2];
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) )
    while ( !v30 )
    v34 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( v34[17] == v97 && *((uint8_t *)v34 + 286) == 1 )
    v30 = 1;
    else
    v35 = v33[1];
    LOWORD(v98) = a2 + *v33;
    HIWORD(v98) = HIWORD(a2) + v35;
    a2 = v98;
    if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) )
    if ( !v30 )
    goto LABEL_131;
    break;
    v36 = (v29 - 4) & 7;
    v37 = v36 & 7;
    v38 = Direction_X_Offsets[v37];
    v100 = (_WORD *)(4 * v37 + 9041544);
    LOWORD(v37) = HIWORD(a2) + HIWORD(Direction_X_Offsets[v37]);
    LOWORD(v98) = a2 + v38;
    HIWORD(v98) = v37;
    a2 = v98;
    v39 = abs32((__int16)v37 - SHIWORD(v96));
    v40 = abs32((__int16)v98 - v20);
    if ( v40 > v39 )
    v39 = v40;
    if ( v39 > 0 )
    v96 = v39;
    v41 = (v36 & 3) / 2;
    do
    v42 = 0;
    v43 = (_WORD *)(12 * v41 + 11277704);
    do
    v44 = HIWORD(a2) + v43[1];
    LOWORD(v98) = a2 + *v43;
    HIWORD(v98) = v44;
    v99 = (_WORD *)v98;
    v45 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v99);
    v45[17] = dword_8333F0[v41] + (Random::State((uint32_t *)ScenarioClass_Instance + 134) & 3);
    *((uint8_t *)v45 + 286) = v42;
    House::AnnounceUpgrade((int)v45, -1);
    ++v42;
    v43 += 2;
    while ( v42 < 3 );
    v46 = v100[1];
    LOWORD(v97) = *v100 + a2;
    HIWORD(v97) = HIWORD(a2) + v46;
    a2 = v97;
    --v96;
    while ( v96 );
    goto LABEL_131;
    if ( v18 >= 233 && v18 <= 236 )
    v47 = *(uint32_t *)(v9 + 660) - 233;
    if ( (byte_AC1548 & 4) == 0 )
    byte_AC1548 |= 4u;
    dword_AC155C[0] = -65536;
    a2 = 0xFFFF;
    dword_AC1560 = -65536;
    dword_AC1564 = 0xFFFF;
    dword_AC1568 = 0xFFFF;
    atexit(nullsub_209);
    if ( (byte_AC1548 & 8) == 0 )
    byte_AC1548 |= 8u;
    dword_AC15A4 = 0;
    dword_AC15A0 = 0xFFFF;
    dword_AC15A8 = 1;
    dword_AC15AC = -65536;
    v98 = 0x10000;
    dword_AC15B0 = 0;
    dword_AC15B4 = 0x10000;
    atexit(nullsub_208);
    v48 = v94 + LOWORD(dword_AC155C[v47]);
    v49 = HIWORD(v94) + HIWORD(dword_AC155C[v47]);
    v50 = 1;
    v97 = 3;
    LOWORD(v96) = v48;
    HIWORD(v96) = v49;
    a2 = v96;
    v51 = (_WORD *)(4 * (dword_833408[v47] & 7) + 9041544);
    do
    if ( *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17) != -1 )
    v50 = 0;
    v52 = a2 + *v51;
    HIWORD(v98) = v51[1] + HIWORD(a2);
    LOWORD(v98) = v52;
    v25 = v97 == 1;
    a2 = v98;
    --v97;
    while ( !v25 );
    a2 = v96;
    if ( v50 )
    v53 = 0;
    do
    v54 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v54[17] = dword_833418[v47];
    *((uint8_t *)v54 + 286) = v53;
    House::AnnounceUpgrade((int)v54, -1);
    v55 = v51[1] + HIWORD(a2);
    ++v53;
    LOWORD(v98) = *v51 + a2;
    HIWORD(v98) = v55;
    a2 = v98;
    while ( v53 < 3 );
    v56 = dword_833428[v47];
    v57 = 0;
    v58 = v56 & 7;
    v59 = HIWORD(v94) + HIWORD(Direction_X_Offsets[v58]);
    v60 = (_WORD *)(4 * v58 + 9041544);
    LOWORD(v98) = v94 + LOWORD(Direction_X_Offsets[v58]);
    HIWORD(v98) = v59;
    a2 = v98;
    v100 = (_WORD *)dword_833440[v56 / 2];
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) )
    while ( !v57 )
    v61 = (_WORD **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( v61[17] == v100 && *((uint8_t *)v61 + 286) == 1 )
    v57 = 1;
    else
    v62 = v60[1];
    LOWORD(v98) = a2 + *v60;
    HIWORD(v98) = HIWORD(a2) + v62;
    a2 = v98;
    if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) )
    if ( !v57 )
    goto LABEL_131;
    break;
    v63 = (v56 - 4) & 7;
    v64 = v63 & 7;
    v65 = LOWORD(Direction_X_Offsets[v64]) + a2;
    v99 = (_WORD *)(4 * v64 + 9041544);
    LOWORD(v64) = HIWORD(Direction_X_Offsets[v64]);
    LOWORD(v98) = v65;
    HIWORD(v98) = HIWORD(a2) + v64;
    v66 = (__int16)(HIWORD(a2) + v64) - SHIWORD(v96);
    a2 = v98;
    v67 = abs32(v66);
    v68 = abs32(v65 - v48);
    if ( v68 > v67 )
    v67 = v68;
    if ( v67 > 0 )
    v96 = v67;
    v69 = (v63 & 3) / 2;
    do
    v70 = 0;
    v71 = (_WORD *)(12 * v69 + 11277728);
    do
    v72 = HIWORD(a2) + v71[1];
    LOWORD(v98) = a2 + *v71;
    HIWORD(v98) = v72;
    v100 = (_WORD *)v98;
    v73 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v100);
    v73[17] = dword_833438[v69] + (Random::State((uint32_t *)ScenarioClass_Instance + 134) & 3);
    *((uint8_t *)v73 + 286) = v70;
    House::AnnounceUpgrade((int)v73, -1);
    ++v70;
    v71 += 2;
    while ( v70 < 3 );
    v74 = v99[1];
    LOWORD(v97) = *v99 + a2;
    HIWORD(v97) = HIWORD(a2) + v74;
    a2 = v97;
    --v96;
    while ( v96 );
    goto LABEL_131;
    if ( IKnowWhatImDoing )
    IsBuildable = 1;
    else
    if ( v9 == RulesClass_Instance->DropPod[1] )
    v93 = 0;
    v92 = 0;
    v91 = 5;
    v75 = v7;
    LABEL_97:
    IsBuildable = Cell::IsBuildable(v75, v91, v92, v93, -1, 0, -1, 1);
    goto LABEL_110;
    if ( v9 == RulesClass_Instance->DropPod[0] || v9 == RulesClass_Instance->WaterCrateImg )
    IsBuildable = Cell::IsBuildable(v7, 1, 0, 0, -1, 0, -1, 1);
    else
    if ( v18 == 24 || v18 == 25 || v18 == 237 || v18 == 238 )
    IsBuildable = 1;
    goto LABEL_111;
    v93 = 1;
    v25 = v18 == 102;
    v92 = 1;
    v91 = 1;
    v75 = v7;
    if ( !v25 )
    goto LABEL_97;
    IsBuildable = Cell::IsBuildable(v7, 1, 1, 1, -1, 0, -1, 1);
    if ( *(uint8_t *)(v7 + 284) > 4u )
    IsBuildable = 0;
    LABEL_110:
    if ( IKnowWhatImDoing )
    LABEL_113:
    if ( IsBuildable )
    v78 = v95;
    *(uint32_t *)(v7 + 68) = *(uint32_t *)(v95[43] + 660);
    if ( v8 != 24 && v8 != 25 && v8 != 237 && v8 != 238 )
    *(uint8_t *)(v7 + 286) = 0;
    if ( *(uint32_t *)(v78[43] + 664) == 5 )
    *(uint8_t *)(v7 + 286) = 1;
    ObjectClass::UpdateTiberiumGrowth(0);
    v78 = v95;
    if ( *(uint8_t *)(v78[43] + 682) )
    *(uint8_t *)(v7 + 286) = -1;
    goto LABEL_124;
    LABEL_123:
    v78 = v95;
    LABEL_124:
    if ( *(uint32_t *)(v78[43] + 668) )
    v79 = v95[39];
    v80 = v95[40];
    v81 = v95[41];
    v102 = v79;
    v104 = v81;
    v82 = v95[41];
    v103 = v95[40];
    v104 = v82;
    GroundHeight = Cell::GetGroundHeight(&v102);
    v84 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v84 )
    v102 = v79 + 384;
    v103 = v80 + 384;
    v85 = v95[43];
    v104 = GroundHeight;
    v86 = AnimClass::ctor(v84, *(void **)(v85 + 668), &v102, 0, 1, (void *)0x600, 0, 0);
    else
    v86 = 0;
    v87 = BuildingClass::FindByCellHash((uint32_t *)v7);
    if ( v87 != -1 )
    v88 = *(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * v87];
    if ( v88 )
    v86[53] = *(void **)(*((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v88 + 192)) + 780);
    v86[63] = (void *)*(__int16 *)(v7 + 266);
    goto LABEL_131;
    LABEL_111:
    v77 = *(uint32_t *)(v7 + 68);
    if ( v77 != -1 && *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v77] + 690) )
    goto LABEL_123;
    goto LABEL_113;
    v10 = *(uint32_t *)(v9 + 660);
    *(uint8_t *)(v7 + 286) = 0;
    *(uint32_t *)(v7 + 68) = v10;
    LABEL_131:
    House::AnnounceUpgrade((int)v101, -1);
    v89 = v95;
    v90 = *v95;
    *((uint8_t *)v95 + 116) = 0;
    *((uint8_t *)v89 + 129) = 1;
    (*(void (**)(void))(v90 + 248))();
    return 1;
}

char  Object::_vt54(#374 *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // esi
    uint32_t *v5; // eax
    v3 = a2;
    LOWORD(a2) = *a2 / 256;
    HIWORD(a2) = v3[1] / 256;
    v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( CellClass::FindInfantry(v5, 0) )
    return 0;
    else
    return ObjectClass::Deploy(this);
}

int  Object::_vt05(#374 *this, uint32_t *a2, int a3)
{
    int Register; // edi
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = &OverlayClass::`vftable';
    a2[1] = &OverlayClass::`vftable';
    a2[2] = &OverlayClass::`vftable';
    a2[3] = &OverlayClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43);
    return Register;
}

int __stdcall Object::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

void  Object::_vt70(int this, int *a2, int *a3)
{
    int *v4; // esi
    int v5; // ebp
    int GroundHeight; // eax
    int v7; // eax
    BuildingTypeClass *v8; // edx
    int v9; // ebx
    int v10; // edx
    int v11; // eax
    int v12; // eax
    int v13; // edx
    BuildingTypeClass *v14; // esi
    int v15; // eax
    int v16; // esi
    int v17; // ecx
    int v18; // eax
    int v19; // ecx
    char *v20; // esi
    int v21; // eax
    int v22; // ecx
    int v23; // ecx
    int v24; // eax
    uint32_t *v25; // eax
    __int16 *v26; // eax
    int v27; // [esp-18h] [ebp-40h]
    __int16 *v28; // [esp-4h] [ebp-2Ch]
    int v29; // [esp+10h] [ebp-18h]
    int v30; // [esp+14h] [ebp-14h] BYREF
    int v31; // [esp+18h] [ebp-10h]
    int v32; // [esp+1Ch] [ebp-Ch] BYREF
    int v33; // [esp+20h] [ebp-8h]
    int v34; // [esp+24h] [ebp-4h]
    v4 = (int *)(this + 156);
    v5 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 172) + 156))(*(uint32_t *)(this + 172));
    v32 = *v4;
    v33 = *(uint32_t *)(this + 160);
    v34 = *(uint32_t *)(this + 164);
    GroundHeight = Cell::GetGroundHeight(&v32);
    v29 = ZCoordToScreenY(GroundHeight);
    v7 = 0;
    if ( g_ObjectTypeConfig <= 0 )
    LABEL_5:
    v7 = -1;
    else
    v8 = BuildingTypeClass_Array;
    while ( *(uint32_t *)v8->gap0 != *(uint32_t *)(this + 172) )
    ++v7;
    v8 = (BuildingTypeClass *)((char *)v8 + 4);
    if ( v7 >= g_ObjectTypeConfig )
    goto LABEL_5;
    v9 = 0;
    v10 = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * v7];
    if ( *(uint8_t *)(v10 + 681) || *(uint8_t *)(v10 + 680) || *(uint32_t *)(v10 + 660) == 126 || *(uint8_t *)(v10 + 682) )
    v9 = -12;
    if ( *(uint32_t *)(v10 + 664) == 9 )
    --v9;
    if ( v7 == 126 )
    --v9;
    v11 = v9 + a2[1];
    v30 = *a2;
    v31 = Map_VisibleRect + v11;
    v12 = *(uint32_t *)(this + 172);
    if ( *(uint8_t *)(v12 + 681) )
    v13 = 0;
    if ( g_ObjectTypeConfig <= 0 )
    LABEL_20:
    v13 = -1;
    else
    v14 = BuildingTypeClass_Array;
    while ( *(uint32_t *)v14->gap0 != v12 )
    ++v13;
    v14 = (BuildingTypeClass *)((char *)v14 + 4);
    if ( v13 >= g_ObjectTypeConfig )
    goto LABEL_20;
    v15 = *(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * FindBuildingByTiberiumType(v13)];
    v16 = *((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v15 + 192));
    v17 = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * *(uint32_t *)(*(uint32_t *)(v15 + 224) + 660)];
    v18 = (*(int (__thiscall **)(int))(*(uint32_t *)v17 + 156))(v17);
    if ( !v18 )
    v19 = *(uint32_t *)(*(uint32_t *)(this + 172) + 668);
    if ( v19 )
    v18 = (*(int (__thiscall **)(int))(*(uint32_t *)v19 + 156))(v19);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    *(uint32_t *)(v16 + 780),
    v18,
    0,
    &v30,
    a3,
    3584,
    0,
    -2 - v29,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    else if ( *(uint8_t *)(v12 + 686) )
    if ( *(uint32_t *)(v12 + 660) == 167 )
    v31 -= 38;
    v32 = *v4;
    v33 = *(uint32_t *)(this + 160);
    v34 = *(uint32_t *)(this + 164);
    v20 = (char *)BuildingTypeClass_AnimTable + 4 * *((uint32_t *)HouseClass_Player + 22549);
    v27 = *((__int16 *)Coord::To_Cell(&MapClass_Instance, &v32) + 134);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    *(uint32_t *)(*(uint32_t *)v20 + 780),
    v5,
    0,
    &v30,
    a3,
    3584,
    0,
    -2 - v29,
    0,
    v27,
    0,
    0,
    0,
    0,
    0);
    else
    v21 = *v4;
    v22 = *(uint32_t *)(this + 160);
    v34 = *(uint32_t *)(this + 164);
    LOWORD(a2) = v21 / 256;
    HIWORD(a2) = v22 / 256;
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&a2) )
    v23 = *(uint32_t *)(this + 164);
    v24 = *(uint32_t *)(this + 160);
    v32 = *v4;
    v34 = v23;
    v33 = v24;
    v25 = Coord::To_Cell(&MapClass_Instance, &v32);
    else
    v26 = (__int16 *)Tactical::PixelToCell((int)TacticalClass_Instance, &a2, &v30);
    if ( LayerClass::CoordinatesLegal(&MapClass_Instance, v26) )
    v28 = (__int16 *)Tactical::PixelToCell((int)TacticalClass_Instance, &a2, &v30);
    v25 = CellCoord::To_CellObj(&MapClass_Instance, v28);
    else
    LOWORD(a2) = 1;
    HIWORD(a2) = g_Cell_PositionLUT;
    v25 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v25[13],
    v5,
    0,
    &v30,
    a3,
    3584,
    0,
    -2 - v29,
    0,
    *((__int16 *)v25 + 134),
    0,
    0,
    0,
    0,
    0);
}

int  Object::_vt34(uint32_t *this)
{
    return *(this + 43);
}

int Object::_vt12()
{
    return 176;
}

int __stdcall Object::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448647;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int Object::_vt11()
{
    return 20;
}

void ** Object::_vt08(void **Block, char a2)
{
    int v3; // eax
    void **v5; // [esp+4h] [ebp-4h] BYREF
    *Block = &OverlayClass::`vftable';
    *(Block + 1) = &OverlayClass::`vftable';
    *(Block + 2) = &OverlayClass::`vftable';
    *(Block + 3) = &OverlayClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v5 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(OverlayClass_Array + 16))(&OverlayClass_Array, &v5);
    if ( v3 != -1 && v3 < dword_A8EC60 && v3 < --dword_A8EC60 )
    do
    ++v3;
    *((uint32_t *)g_ObjectClass_Capacity + v3 - 1) = *((uint32_t *)g_ObjectClass_Capacity + v3);
    while ( v3 < dword_A8EC60 );
    if ( WTFMode )
    ObjectClass::Undeploy((void*374 *)Block);
    *(Block + 43) = 0;
    ObjectClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

