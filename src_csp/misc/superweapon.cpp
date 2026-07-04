#include "superweapon.hpp"

int  SuperWeapon::CreateUnits(#377 *this)
{
    int result; // eax
    int v3; // esi
    int v4; // ecx
    double v5; // st7
    int v6; // eax
    double v7; // st7
    double HealthRatio; // st7
    RulesClass *v9; // edx
    int v10; // ecx
    uint8_t *v11; // eax
    int v12; // edx
    int v13; // ecx
    uint8_t *v14; // eax
    int v15; // edx
    int v16; // ecx
    uint8_t *v17; // eax
    int v18; // ecx
    uint8_t *v19; // eax
    BOOL v20; // ebx
    bool v21; // al
    int v22; // edx
    uint8_t *v23; // eax
    bool v24; // zf
    int v25; // eax
    BOOL v26; // ebx
    bool v27; // al
    int v28; // edx
    uint8_t *v29; // eax
    int v30; // eax
    int v31; // ecx
    uint8_t *v32; // eax
    int v33; // edx
    int v34; // ecx
    uint8_t *v35; // eax
    int v36; // ecx
    int v37; // ecx
    int v38; // ecx
    int v39; // eax
    int i; // esi
    uint32_t *v41; // eax
    int v42; // ecx
    int v43; // eax
    BOOL v44; // ebx
    bool v45; // al
    int v46; // edx
    uint8_t *v47; // eax
    int v48; // eax
    BOOL v49; // ebx
    bool v50; // al
    int v51; // edx
    uint8_t *v52; // eax
    int v53; // eax
    int v54; // edx
    int v55; // eax
    int v56; // ebx
    unsigned int v57; // edx
    unsigned int v58; // ecx
    uint8_t *v59; // eax
    uint32_t *Value; // eax
    int v61; // ecx
    unsigned int v62; // eax
    uint32_t *v63; // esi
    uint32_t *v64; // eax
    int *v65; // eax
    uint32_t *v66; // eax
    int v67; // edx
    int v68; // eax
    int v69; // ecx
    int v70; // eax
    int v71; // eax
    int v72; // eax
    int v73; // eax
    __int16 *v74; // eax
    int v75; // eax
    int v76; // edx
    uint32_t *v77; // eax
    __int16 v78; // si
    __int16 v79; // bx
    void *v80; // eax
    uint32_t *v81; // eax
    uint32_t *v82; // edi
    int v83; // edx
    int *v84; // esi
    int v85; // edx
    int TileIndex; // eax
    int v87; // eax
    int v88; // edx
    int v89; // edx
    int v90; // edx
    int v91; // eax
    int v92; // edx
    int v93; // eax
    int v94; // eax
    int v95; // edx
    int v96; // eax
    int v97; // eax
    int v98; // esi
    int v99; // edi
    int Field9; // eax
    int v101; // eax
    int v102; // [esp-8h] [ebp-94h]
    int v103; // [esp-8h] [ebp-94h]
    int v104; // [esp+10h] [ebp-7Ch]
    int v105; // [esp+14h] [ebp-78h]
    int v106; // [esp+18h] [ebp-74h]
    int v107; // [esp+1Ch] [ebp-70h]
    int v108; // [esp+20h] [ebp-6Ch]
    __int64 v109; // [esp+34h] [ebp-58h] BYREF
    int v110; // [esp+3Ch] [ebp-50h] BYREF
    int v111; // [esp+40h] [ebp-4Ch] BYREF
    int v112; // [esp+44h] [ebp-48h]
    int v113; // [esp+48h] [ebp-44h]
    char v114[64]; // [esp+4Ch] [ebp-40h] BYREF
    unsigned __int8 v115; // [esp+90h] [ebp+4h]
    LOBYTE(result) = *((uint8_t *)this + 1764);
    if ( (uint8_t)result && !v115 )
    return result;
    v3 = *((uint32_t *)this + 328);
    v4 = *(uint32_t *)(v3 + 5472);
    if ( v4 )
    *((uint32_t *)this + 436) = CurrentFrame;
    *((uint32_t *)this + 437) = v112;
    *((uint32_t *)this + 438) = v4;
    if ( !(uint8_t)result )
    if ( *(uint8_t *)(v3 + 5819) )
    v5 = Float4::Sum((float *)this + 207);
    v6 = Math::RoundToInt(v5);
    if ( v6 )
    v7 = Float4::Sum((float *)this + 207);
    v6 = (int)(4 * Math::RoundToInt(v7)) / *(uint32_t *)(*((uint32_t *)this + 328) + 2048);
    *((uint32_t *)this + 444) = v6;
    if ( v6 < 3 )
    if ( v6 < 2 )
    if ( v6 < 1 )
    if ( v6 >= 0 )
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v18 = 0;
    v19 = (uint8_t *)(*((uint32_t *)this + 328) + 4120);
    else
    v18 = 1;
    v19 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    if ( v19 && *v19 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v19, 3, v18, 0, 0);
    else
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v16 = 0;
    v17 = (uint8_t *)(*((uint32_t *)this + 328) + 4188);
    else
    v16 = 1;
    v17 = (uint8_t *)(*((uint32_t *)this + 328) + 4204);
    if ( v17 && *v17 )
    BuildingClass::PlayAnim(this, v15, v17, 4, v16, 0, 0);
    else
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v13 = 0;
    v14 = (uint8_t *)(*((uint32_t *)this + 328) + 4256);
    else
    v13 = 1;
    v14 = (uint8_t *)(*((uint32_t *)this + 328) + 4272);
    if ( v14 && *v14 )
    BuildingClass::PlayAnim(this, v12, v14, 5, v13, 0, 0);
    goto LABEL_71;
    HealthRatio = BuildingClass::GetHealthRatio((int *)this);
    v9 = RulesClass_Instance;
    if ( HealthRatio > *(double *)&RulesClass_Instance[1].WarpOut )
    v10 = 0;
    v11 = (uint8_t *)(*((uint32_t *)this + 328) + 4324);
    else
    v10 = 1;
    v11 = (uint8_t *)(*((uint32_t *)this + 328) + 4340);
    if ( !v11 || !*v11 )
    LABEL_71:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5836) )
    ++*(uint32_t *)(*((uint32_t *)this + 135) + 21388);
    v36 = *(uint32_t *)(*((uint32_t *)this + 328) + 5476);
    if ( v36 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 356) += v36;
    v37 = *(uint32_t *)(*((uint32_t *)this + 328) + 5480);
    if ( v37 )
    *(uint32_t *)(*((uint32_t *)this + 135) + 360) += v37;
    v38 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v38 + 5835) )
    *(uint32_t *)(*((uint32_t *)this + 135) + 724) += *(uint32_t *)(v38 + 6016);
    SuperWeapon::UpdateTargetRedrawState((int)&MapClass_Instance, (wchar_t *)3);
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 5872) != -1 )
    v39 = *((uint32_t *)this + 135);
    for ( i = 0; i < *(uint32_t *)(v39 + 612); ++i )
    v41 = *(uint32_t **)(*(uint32_t *)(v39 + 600) + 4 * i);
    if ( *(uint32_t *)(v41[10] + 180) == *(uint32_t *)(*((uint32_t *)this + 328) + 5872) )
    v42 = v41[14];
    v43 = v41[12];
    if ( v43 != -1 )
    if ( (int)CurrentFrame - v43 >= v42 )
    v42 = 0;
    else
    v42 -= (int)CurrentFrame - v43;
    if ( 60 * (v42 / 15) > 4 )
    v49 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    v50 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0;
    LOBYTE(v109) = v50;
    if ( v49 )
    v52 = (uint8_t *)(*((uint32_t *)this + 328) + 4884);
    else
    v24 = !v50;
    v53 = *((uint32_t *)this + 328);
    if ( v24 )
    v52 = (uint8_t *)(v53 + 4868);
    else
    v52 = (uint8_t *)(v53 + 4900);
    if ( v52 && *v52 )
    BuildingClass::PlayAnim(this, v51, v52, 14, v49, v109, 0);
    else
    v44 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    v45 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0;
    BYTE4(v109) = v45;
    if ( v44 )
    v47 = (uint8_t *)(*((uint32_t *)this + 328) + 5020);
    else
    v24 = !v45;
    v48 = *((uint32_t *)this + 328);
    if ( v24 )
    v47 = (uint8_t *)(v48 + 5004);
    else
    v47 = (uint8_t *)(v48 + 5036);
    if ( v47 && *v47 )
    BuildingClass::PlayAnim(this, v46, v47, 16, v44, SHIDWORD(v109), 0);
    v39 = *((uint32_t *)this + 135);
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this) )
    v55 = *((uint32_t *)this + 328);
    if ( !*(uint8_t *)(v55 + 5829) )
    v56 = *((uint32_t *)this + 383);
    if ( v56 == -1 )
    v59 = (uint8_t *)(v55 + 4528);
    if ( v59 && *v59 )
    BuildingClass::PlayAnim(this, v54, v59, 9, 0, 0, 0);
    else
    *((uint32_t *)this + 383) = -1;
    if ( !*(uint8_t *)(v55 + 5829) )
    BuildingClass::ClearAnims((int *)this, 9);
    strcpy(v114, (const char *)(*((uint32_t *)this + 328) + 504));
    v57 = strlen(asc_818D7C) + 1;
    qmemcpy(&v114[strlen(v114)], asc_818D7C, v57);
    v58 = strlen(v114);
    v114[v58] = v56 + 66;
    v114[v58 + 1] = 0;
    BuildingClass::PlayAnim(this, v57, v114, 9, 0, 0, 0);
    *((uint32_t *)this + 383) = v56;
    if ( (*(unsigned __int8 (__thiscall **)(void*377 *))(*(uint32_t *)this + 1020))(this) )
    if ( *((uint32_t *)this + 352) )
    Value = ProgressTimer::GetValue((_WORD *)this + 452, &v110);
    v61 = *((uint32_t *)this + 352);
    v62 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F;
    if ( v61 )
    *(uint32_t *)(v61 + 172) = dword_7F4890[v62];
    *(uint32_t *)(v61 + 196) = 0;
    if ( *(uint32_t *)(*((uint32_t *)this + 328) + 3636) )
    if ( !*((uint32_t *)this + 389) )
    v63 = __2_YAPAXI_Z(0x4Cu);
    if ( v63 )
    v64 = (uint32_t *)*((uint32_t *)this + 328);
    v108 = v64[912];
    v107 = v64[911];
    v106 = v64[910];
    v105 = v64[909];
    v104 = v64[908];
    v65 = (int *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v111);
    v66 = LightSourceClass::Construct(v63, *v65, v65[1], v65[2], v104, v105, v106, v107, v108);
    else
    v66 = 0;
    *((uint32_t *)this + 389) = v66;
    Trigger::EnableOnce(*((uint8_t **)this + 389), 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5822) )
    BuildingClass::RepairPlacement(this, 0);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5832) )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1268))(this, g_TerrainTypeTable);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 3377) )
    (*(void (__thiscall **)(void*377 *, int))(*(uint32_t *)this + 1276))(this, g_TerrainTypeTable);
    *((uint8_t *)this + 1757) = 1;
    goto LABEL_130;
    else
    v20 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    v21 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0;
    BYTE4(v109) = v21;
    if ( v20 )
    v23 = (uint8_t *)(*((uint32_t *)this + 328) + 5156);
    else
    v24 = !v21;
    v25 = *((uint32_t *)this + 328);
    if ( v24 )
    v23 = (uint8_t *)(v25 + 5140);
    else
    v23 = (uint8_t *)(v25 + 5172);
    if ( v23 && *v23 )
    BuildingClass::PlayAnim(this, v22, v23, 18, v20, SHIDWORD(v109), 0);
    v26 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)&RulesClass_Instance[1].WarpOut;
    v27 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 1032))(this) > 0;
    BYTE4(v109) = v27;
    if ( v26 )
    v29 = (uint8_t *)(*((uint32_t *)this + 328) + 4136);
    else
    v24 = !v27;
    v30 = *((uint32_t *)this + 328);
    if ( v24 )
    v29 = (uint8_t *)(v30 + 4120);
    else
    v29 = (uint8_t *)(v30 + 4152);
    if ( v29 && *v29 )
    BuildingClass::PlayAnim(this, v28, v29, 3, v26, SHIDWORD(v109), 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v31 = 0;
    v32 = (uint8_t *)(*((uint32_t *)this + 328) + 4188);
    else
    v31 = 1;
    v32 = (uint8_t *)(*((uint32_t *)this + 328) + 4204);
    if ( v32 && *v32 )
    BuildingClass::PlayAnim(this, (int)RulesClass_Instance, v32, 4, v31, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v34 = 0;
    v35 = (uint8_t *)(*((uint32_t *)this + 328) + 4256);
    else
    v34 = 1;
    v35 = (uint8_t *)(*((uint32_t *)this + 328) + 4272);
    if ( v35 && *v35 )
    BuildingClass::PlayAnim(this, v33, v35, 5, v34, 0, 0);
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)&RulesClass_Instance[1].WarpOut )
    v10 = 0;
    v11 = (uint8_t *)(*((uint32_t *)this + 328) + 4324);
    else
    v10 = 1;
    v11 = (uint8_t *)(*((uint32_t *)this + 328) + 4340);
    if ( !v11 || !*v11 )
    goto LABEL_71;
    BuildingClass::PlayAnim(this, (int)v9, v11, 6, v10, 0, 0);
    goto LABEL_71;
    LABEL_130:
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 5491) )
    BuildingClass::UpdateAnimationSlots((int *)this);
    if ( *(uint8_t *)(*((uint32_t *)this + 328) + 1518) && !(unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    if ( !v115 )
    (*(void (__thiscall **)(void*377 *, uint32_t, uint32_t, int, void*375 *, uint32_t))(*(uint32_t *)this + 1160))(
    this,
    0,
    0,
    1,
    HouseClass_Player,
    0);
    v111 = *((uint32_t *)this + 39);
    v67 = *((uint32_t *)this + 152) + 3;
    v112 = *((uint32_t *)this + 40);
    v113 = *((uint32_t *)this + 41);
    MapClass::RevealArea2(&MapClass_Instance, &v111, 0, v67, 0);
    v68 = *((uint32_t *)this + 39);
    v69 = *((uint32_t *)this + 40);
    v113 = *((uint32_t *)this + 41);
    LOWORD(v109) = v68 / 256;
    WORD1(v109) = v69 / 256;
    CreateTriggerClassIfFarEnough(12, (unsigned __int8)(v69 >> 31), v109);
    if ( !(unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135))
    && !(unsigned __int8)House::IsAlliedWith(*((void*375 **)this + 135), HouseClass_Player)
    && !MuteSWLaunches )
    if ( GameMode_Current[0] )
    v70 = *(uint32_t *)(*((uint32_t *)this + 328) + 5872);
    if ( v70 == -1
    || (v71 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)dword_A83CBC + v70) + 40) + 200)) == 0
    || DynamicVector::GetOrGrow((uint32_t *)(*((uint32_t *)this + 135) + 21840), *(uint32_t *)(v71 + 3576)) )
    switch ( *(uint32_t *)(*((uint32_t *)this + 328) + 5872) )
    case 0:
    VoxClass::FindAndPlay(aEvaNuclearsilo, -1);
    break;
    case 1:
    VoxClass::FindAndPlay(aEvaIroncurtain_1, -1);
    break;
    case 2:
    VoxClass::FindAndPlay(aEvaWeatherdevi, -1);
    break;
    case 3:
    VoxClass::FindAndPlay(aEvaChronospher_1, -1);
    break;
    case 7:
    VoxClass::FindAndPlay(aEvaPsychicdomi_1, -1);
    break;
    case 9:
    VoxClass::FindAndPlay(aEvaGeneticmuta_1, -1);
    break;
    default:
    break;
    v72 = *((uint32_t *)this + 328);
    if ( *(uint8_t *)(v72 + 5821) )
    if ( *(uint8_t *)(v72 + 3278) )
    if ( !*((uint32_t *)this + 134) )
    v73 = *(uint32_t *)this;
    LODWORD(v109) = 0;
    v74 = (__int16 *)(*(int (__thiscall **)(void*377 *, int *))(v73 + 440))(this, &v110);
    v75 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v109 + 4,
    (uint32_t *)&v109 + 1,
    v74,
    5,
    -1,
    10,
    0,
    5,
    5,
    0,
    0,
    0,
    1,
    (__int16 *)&v109,
    0,
    0);
    LOWORD(v109) = v75 + 2;
    WORD1(v109) = HIWORD(v75) + 2;
    v111 = v109;
    if ( __PAIR32__(HIWORD(v75) + 2, v75 + 2) != g_TerrainTypeTable )
    BuildingClass::SetRallyPoint((int)this, (__int16 *)&v111, 0);
    *(uint8_t *)(*((uint32_t *)this + 135) + 508) = 1;
    v76 = *((uint32_t *)this + 135);
    *((uint8_t *)this + 1764) = 1;
    *(uint8_t *)(v76 + 22392) = 1;
    *(uint8_t *)(*((uint32_t *)this + 135) + 22393) = 1;
    if ( *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 3281) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 1044))(this);
    result = *(uint32_t *)(*((uint32_t *)this + 328) + 3744);
    if ( result )
    result = IKnowWhatImDoing;
    if ( !IKnowWhatImDoing )
    result = v115;
    if ( !v115 && !ArmageddonMode )
    if ( !(unsigned __int8)House::IsCurrentPlayer(*((void*375 **)this + 135))
    || !*((uint32_t *)this + 192)
    || (result = (*(int (__thiscall **)(uint32_t))(**((uint32_t **)this + 328) + 172))(*((uint32_t *)this + 328)),
    *((uint32_t *)this + 192) > result) )
    v77 = (uint32_t *)(*(int (__thiscall **)(void*377 *, int *))(*(uint32_t *)this + 72))(this, &v111);
    LOWORD(v109) = *v77 / 256;
    WORD1(v109) = v77[1] / 256;
    v78 = v109 + g_DirectionOffsetPool;
    v79 = HIWORD(g_DirectionOffsetPool) + WORD1(v109);
    v80 = __2_YAPAXI_Z(0x8E8u);
    if ( v80
    && (v81 = (uint32_t *)UnitClass::Construct(
    (int)v80,
    *(uint32_t *)(*((uint32_t *)this + 328) + 3744),
    *((LPVOID *)this + 135)),
    (v82 = v81) != 0) )
    v83 = *v81;
    v113 = 0;
    v111 = (v78 << 8) + 128;
    v112 = (v79 << 8) + 128;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, int))(v83 + 216))(v81, &v111, 192) )
    goto LABEL_173;
    v84 = (int *)((char *)this + 156);
    HIDWORD(v109) = 0;
    v111 = *((uint32_t *)this + 39);
    v112 = *((uint32_t *)this + 40);
    v113 = *((uint32_t *)this + 41);
    LOWORD(v109) = v111 / 256;
    *(uint32_t *)((char *)&v109 + 2) = (unsigned __int16)(v112 / 256);
    v110 = v109;
    v111 = *((uint32_t *)this + 39);
    v112 = *((uint32_t *)this + 40);
    v113 = *((uint32_t *)this + 41);
    LOWORD(v109) = v111 / 256;
    v85 = v82[433];
    WORD1(v109) = v112 / 256;
    v102 = *(uint32_t *)(v85 + 1460);
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v110, v102, 0);
    v87 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v111,
    &v111,
    (__int16 *)&v109,
    2,
    TileIndex,
    v102,
    0,
    1,
    1,
    1,
    1,
    0,
    0,
    (__int16 *)&v109 + 2,
    0,
    0);
    v110 = v87;
    if ( v87 != g_TerrainTypeTable )
    v88 = *v82;
    v113 = 0;
    v111 = ((__int16)v87 << 8) + 128;
    v112 = (SHIWORD(v87) << 8) + 128;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, int))(v88 + 216))(v82, &v111, 160) )
    goto LABEL_173;
    LODWORD(v109) = 0;
    v111 = *v84;
    v112 = *((uint32_t *)this + 40);
    v113 = *((uint32_t *)this + 41);
    WORD2(v109) = v111 / 256;
    v89 = *((uint32_t *)this + 40);
    HIWORD(v109) = v112 / 256;
    v112 = v89;
    v90 = *((uint32_t *)this + 41);
    v110 = HIDWORD(v109);
    v91 = *v84;
    v113 = v90;
    WORD2(v109) = v91 / 256;
    v92 = v82[433];
    HIWORD(v109) = v112 / 256;
    v103 = *(uint32_t *)(v92 + 1460);
    v93 = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v110, v103, 0);
    v94 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v111,
    &v111,
    (__int16 *)&v109 + 2,
    2,
    v93,
    v103,
    0,
    1,
    1,
    0,
    1,
    0,
    0,
    (__int16 *)&v109,
    0,
    0);
    v110 = v94;
    if ( v94 == g_TerrainTypeTable )
    goto LABEL_172;
    v95 = *v82;
    v113 = 0;
    v111 = ((__int16)v94 << 8) + 128;
    v112 = (SHIWORD(v94) << 8) + 128;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *, int *, int))(v95 + 216))(v82, &v111, 160) )
    LABEL_173:
    (*(void (__thiscall **)(uint32_t *, int, uint32_t))(*v82 + 488))(v82, 10, 0);
    result = (*(int (__thiscall **)(uint32_t *))(*v82 + 492))(v82);
    else
    LABEL_172:
    v96 = (*(int (__thiscall **)(uint32_t, uint32_t, int))(*(uint32_t *)v82[433] + 184))(
    v82[433],
    *((uint32_t *)this + 135),
    1);
    HouseClass::AddPower(*((uint32_t **)this + 135), v96);
    result = (*(int (__thiscall **)(uint32_t *, int))(*v82 + 32))(v82, 1);
    else
    v97 = (*(int (__thiscall **)(uint32_t, uint32_t, int))(**(uint32_t **)(*((uint32_t *)this + 328) + 3744) + 184))(
    *(uint32_t *)(*((uint32_t *)this + 328) + 3744),
    *((uint32_t *)this + 135),
    1);
    result = HouseClass::AddPower(*((uint32_t **)this + 135), v97);
    LOBYTE(result) = RulesClass_Instance[1].RadarEventDurations[3];
    if ( !(uint8_t)result )
    LOBYTE(result) = *(uint8_t *)(*((uint32_t *)this + 328) + 5454);
    if ( (uint8_t)result )
    LOBYTE(result) = v115;
    if ( !v115 )
    ++IKnowWhatImDoing;
    result = (int)__2_YAPAXI_Z(0x6D8u);
    if ( result )
    result = AircraftClass::Construct(
    result,
    *(uint32_t *)RulesClass_Instance->OverloadCount[0],
    *((IUnknown **)this + 135));
    v98 = result;
    if ( result )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)result + 460))(result, 0);
    v99 = *(uint32_t *)v98;
    Field9 = AbstractClass::GetField9();
    v101 = (*(int (__thiscall **)(void*377 *, int *, int))(*(uint32_t *)this + 72))(this, &v111, Field9);
    result = (*(int (__thiscall **)(int, int))(v99 + 216))(v98, v101);
    if ( (uint8_t)result )
    (*(void (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v98 + 488))(v98, 5, 0);
    (*(void (__thiscall **)(int, int, void*377 *))(*(uint32_t *)v98 + 632))(v98, 2, this);
    result = (*(int (__thiscall **)(void*377 *, int, int))(*(uint32_t *)this + 632))(this, 24, v98);
    --IKnowWhatImDoing;
    return result;
}

char  SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass(#375 *this)
{
    int v2; // eax
    int i; // edi
    int v4; // eax
    int j; // ebx
    int v6; // esi
    int v7; // edx
    int *v8; // ecx
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    char v13; // al
    int v14; // ecx
    int Status; // eax
    char v17; // [esp+Bh] [ebp-9h]
    LOBYTE(v2) = *((uint8_t *)this + 501);
    if ( !(uint8_t)v2 )
    v2 = *((uint32_t *)this + 153);
    for ( i = 0; i < v2; ++i )
    v4 = *(uint32_t *)(*((uint32_t *)this + 150) + 4 * i);
    if ( !*(uint8_t *)(v4 + 109) || *(uint8_t *)(v4 + 110) && *(uint8_t *)(v4 + 109) )
    v17 = 0;
    for ( j = *((uint32_t *)this + 30) - 1; j >= 0; --j )
    v6 = *(uint32_t *)(*((uint32_t *)this + 27) + 4 * j);
    if ( *(uint8_t *)(v6 + 144) && !*(uint8_t *)(v6 + 129) )
    v7 = 0;
    v8 = (int *)(v6 + 1516);
    while ( 1 )
    v9 = *v8;
    if ( *v8 )
    if ( *(uint32_t *)(v9 + 5872) == i || *(uint32_t *)(v9 + 5876) == i )
    break;
    ++v7;
    ++v8;
    if ( v7 >= 3 )
    goto LABEL_16;
    v17 = 1;
    LABEL_16:
    if ( BuildingClass::SWAvailable((uint32_t *)v6) == i || BuildingClass::SW2Available((uint32_t *)v6) == i )
    v17 = 1;
    break;
    if ( v17 )
    break;
    v10 = *(uint32_t *)(*((uint32_t *)this + 150) + 4 * i);
    if ( (!*(uint8_t *)(*(uint32_t *)(v10 + 40) + 231) || SWAllowed) && v17 )
    v11 = *((uint32_t *)this + 5353);
    v12 = *((uint32_t *)this + 5354);
    v13 = v11 < v12 && v12 && (!v11 || (double)*((int *)this + 5353) / (double)*((int *)this + 5354) < 1.0);
    SuperClass::StartTimer(v10, 0, this == HouseClass_Player, v13);
    if ( this == HouseClass_Player )
    SidebarClass::AddCameo((int *)&MapClass_Instance, 31, i);
    v14 = *(uint32_t *)(*(uint32_t *)(*((uint32_t *)this + 150) + 4 * i) + 40);
    (*(void (__thiscall **)(int))(*(uint32_t *)v14 + 64))(v14);
    Status = HouseClass::GetStatus((void *)0x39, 0);
    Sidebar::ActivateTab((int)&MapClass_Instance, Status);
    v2 = *((uint32_t *)this + 153);
    return v2;
}

