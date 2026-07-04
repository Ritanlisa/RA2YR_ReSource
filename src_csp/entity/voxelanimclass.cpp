#include "voxelanimclass.hpp"

int  VoxelAnimClass::_vt65(#374 *this, int a2, int a3, int a4)
{
    uint32_t *v5; // eax
    uint8_t v7[12]; // [esp+4h] [ebp-Ch] BYREF
    v5 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v7);
    if ( (*((uint8_t *)Coord::To_Cell(&MapClass_Instance, v5) + 300) & 0x10) != 0 )
    *((uint8_t *)this + 128) = 1;
    return ObjectClass::CalcDrawRect(this);
}

char  VoxelAnimClass::_vt69(int *this, int *a2, uint32_t *a3)
{
    int v4; // eax
    int v5; // edx
    uint32_t *v6; // ebp
    int *v7; // eax
    float *v8; // eax
    int v9; // edi
    int v10; // ecx
    int v11; // eax
    __int16 *v12; // eax
    int v13; // ecx
    int v14; // eax
    uint32_t *v15; // esi
    int v16; // eax
    int v17; // eax
    int *v18; // eax
    int *SHPFrame; // [esp-1Ch] [ebp-CCh]
    int *v21; // [esp-1Ch] [ebp-CCh]
    int v22; // [esp-18h] [ebp-C8h]
    int v23; // [esp-18h] [ebp-C8h]
    int v24; // [esp-10h] [ebp-C0h]
    int v25; // [esp+Ch] [ebp-A4h] BYREF
    int v26; // [esp+10h] [ebp-A0h]
    int v27; // [esp+14h] [ebp-9Ch]
    int v28; // [esp+18h] [ebp-98h] BYREF
    int v29; // [esp+1Ch] [ebp-94h] BYREF
    int v30; // [esp+20h] [ebp-90h] BYREF
    int v31; // [esp+24h] [ebp-8Ch]
    int GroundHeight; // [esp+28h] [ebp-88h]
    int v33; // [esp+2Ch] [ebp-84h]
    int v34; // [esp+30h] [ebp-80h]
    int v35; // [esp+34h] [ebp-7Ch]
    int v36[2]; // [esp+38h] [ebp-78h] BYREF
    int v37[4]; // [esp+40h] [ebp-70h] BYREF
    float v38[12]; // [esp+50h] [ebp-60h] BYREF
    float v39[12]; // [esp+80h] [ebp-30h] BYREF
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || (v25 = *(this + 39), v26 = *(this + 40), v27 = *(this + 41), LOBYTE(v4) = Game::Stub3((int)&v25), !(uint8_t)v4) )
    v5 = a2[1];
    v34 = *a2;
    v35 = v5;
    v30 = *(this + 39);
    v31 = *(this + 40);
    GroundHeight = *(this + 41);
    GroundHeight = Cell::GetGroundHeight(&v30);
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v30) + 80) & 0x100) == 0 )
    goto LABEL_6;
    v25 = *(this + 39);
    v26 = *(this + 40);
    if ( *(this + 41) >= dword_B1D1BC + GroundHeight )
    v33 = dword_B1D1BC + GroundHeight;
    v27 = dword_B1D1BC + GroundHeight + 1;
    v25 = v30;
    v26 = v31;
    Coord::To_Screen(TacticalClass_Instance, &v25, v36);
    else
    LABEL_6:
    v33 = GroundHeight;
    Coord::To_Screen(TacticalClass_Instance, &v30, v36);
    LOBYTE(v4) = *((uint8_t *)this + 316);
    if ( !(uint8_t)v4 )
    v4 = *(this + 65);
    v6 = *(uint32_t **)(v4 + 176);
    if ( v6 )
    qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38));
    Viewport::Clear();
    globalHelper_053F90(v6, *(uint32_t *)(*(this + 65) + 664), 0, flt_887430, v38, (float *)&dword_887420, 0, 0, 0);
    InitializeAudioOcclusion(v37, &v29, &v28);
    v25 = v36[0] + v29;
    v26 = v28 + v36[1];
    v22 = -4 - ZCoordToScreenY(v33);
    SHPFrame = (int *)BuildingClass::GetSHPFrame((uint32_t *)FileSystem_UNITx_PAL, 8193);
    v7 = Miles::DriverGet();
    BlitterDrawSHP(
    (int *)DSurface_Hidden_2,
    FileSystem_UNITx_PAL,
    v7,
    v37,
    &v25,
    a3,
    0,
    SHPFrame,
    v22,
    0,
    1000,
    0,
    0);
    qmemcpy(v38, VoxelAnimClass::QuaternionToMatrix((float *)this + 44, v39), sizeof(v38));
    globalHelper_053C80(v6, 0, 0, v38, (float *)&dword_887470);
    Viewport::Clear();
    v8 = MultiplyMatrix3x4(v39, flt_887430, v38);
    TransformVoxelVertex(v6, *(uint32_t *)(*(this + 65) + 664), 0, v8);
    InitializeAudioOcclusion(v37, &v29, &v28);
    v9 = 10240;
    if ( *(uint8_t *)(*(this + 65) + 661) )
    v9 = 10244;
    v10 = *(this + 41);
    v11 = *(this + 40);
    v25 = *(this + 39);
    v27 = v10;
    v26 = v11;
    v12 = (__int16 *)Coord::To_Cell(&MapClass_Instance, &v25);
    v13 = *(this + 67);
    v14 = v12[133];
    if ( v13 )
    v15 = *(uint32_t **)(*((uint32_t *)BuildingTypeClass_AnimTable + *(uint32_t *)(v13 + 90196)) + 780);
    else if ( *(uint8_t *)(*(this + 65) + 768) )
    v15 = (uint32_t *)FileSystem_GRFTXT_TIBERIUM_PAL;
    else
    v15 = (uint32_t *)FileSystem_UNITx_PAL;
    v14 = 1000;
    v25 = v29 + v34;
    v24 = v14;
    v16 = *this;
    v26 = v28 + v35;
    v17 = (*(int (__thiscall **)(int *))(v16 + 464))(this);
    v23 = -2 - ZCoordToScreenY(v17);
    v21 = (int *)BuildingClass::GetSHPFrame(v15, v9);
    v18 = Miles::DriverGet();
    LOBYTE(v4) = BlitterDrawSHP((int *)DSurface_Hidden_2, (int)v15, v18, v37, &v25, a3, 0, v21, v23, 0, v24, 0, 0);
    return v4;
}

int  VoxelAnimClass::Update(uint32_t *this)
{
    uint32_t *v1; // ebx
    int v2; // eax
    int v3; // eax
    int v5; // eax
    int v6; // ebp
    int *v7; // esi
    bool v8; // zf
    int v9; // edi
    bool v10; // al
    void **v11; // eax
    int v12; // edx
    int v13; // ecx
    int v14; // esi
    void **v15; // eax
    void **v16; // eax
    int v17; // edx
    int v18; // ecx
    int v19; // esi
    void **v20; // esi
    int v21; // eax
    double v22; // st7
    int v23; // eax
    double v24; // st7
    int v25; // eax
    int v26; // edx
    int v27; // eax
    int v28; // edi
    uint32_t *Coords; // eax
    int v30; // eax
    int v31; // edi
    int *v32; // eax
    int v33; // eax
    int *v34; // eax
    int v35; // eax
    int v36; // eax
    int v37; // esi
    int v38; // eax
    int v39; // esi
    void*374 *v40; // eax
    int v41; // edi
    int v42; // edx
    uint32_t *v43; // esi
    int v44; // edi
    int v45; // eax
    int v46; // eax
    int *StartCoords; // esi
    int v48; // eax
    int v49; // ecx
    int v50; // edx
    int v51; // esi
    int v52; // edx
    int v53; // edi
    uint32_t *v54; // eax
    unsigned __int8 *v55; // esi
    int v56; // edi
    uint32_t *v57; // ebp
    int v58; // eax
    uint32_t *v59; // ebp
    int v60; // eax
    void **v61; // esi
    int v62; // eax
    double v63; // st7
    int v64; // eax
    double v65; // st7
    int v66; // eax
    int v67; // eax
    void **v68; // eax
    int v69; // edx
    int v70; // ecx
    uint32_t *v71; // eax
    int *i; // edi
    int v73; // ebp
    uint32_t *v74; // eax
    int v75; // ecx
    int v76; // eax
    int v77; // esi
    __int64 v78; // rax
    int v79; // esi
    uint32_t *v80; // eax
    int v81; // [esp-14h] [ebp-90h]
    int v82; // [esp-Ch] [ebp-88h]
    bool v83; // [esp+12h] [ebp-6Ah]
    bool v84; // [esp+13h] [ebp-69h]
    int v85; // [esp+14h] [ebp-68h]
    int v86; // [esp+18h] [ebp-64h]
    int v87; // [esp+18h] [ebp-64h]
    int v88; // [esp+1Ch] [ebp-60h] BYREF
    int v89; // [esp+20h] [ebp-5Ch] BYREF
    uint32_t *v90; // [esp+24h] [ebp-58h]
    int v91; // [esp+28h] [ebp-54h] BYREF
    uint32_t *v92; // [esp+2Ch] [ebp-50h] BYREF
    int v93; // [esp+30h] [ebp-4Ch] BYREF
    int v94; // [esp+34h] [ebp-48h]
    int v95; // [esp+38h] [ebp-44h]
    int v96[4]; // [esp+3Ch] [ebp-40h] BYREF
    int v97; // [esp+4Ch] [ebp-30h] BYREF
    int v98; // [esp+50h] [ebp-2Ch]
    int v99; // [esp+54h] [ebp-28h]
    int v100; // [esp+58h] [ebp-24h]
    int v101; // [esp+5Ch] [ebp-20h] BYREF
    int v102; // [esp+64h] [ebp-18h]
    int v103; // [esp+68h] [ebp-14h]
    int v104; // [esp+6Ch] [ebp-10h] BYREF
    int v105; // [esp+70h] [ebp-Ch]
    int v106; // [esp+78h] [ebp-4h]
    v1 = this;
    v2 = *(this + 65);
    v92 = this;
    if ( *(uint32_t *)(v2 + 732) != -1 )
    v3 = (*(int (__thiscall **)(uint32_t *, int *))(*this + 72))(this, &v97);
    StartAudioController(v3, (int)(v1 + 69));
    if ( *((uint8_t *)v1 + 272) )
    return (*(int (__thiscall **)(uint32_t *))(*v1 + 248))(v1);
    v5 = v1[80];
    v6 = 0;
    if ( v5 )
    v1[80] = v5 - 1;
    if ( (int)v1[80] <= 0 )
    v7 = v1 + 39;
    v93 = v1[39];
    v94 = v1[40];
    v95 = v1[41];
    v8 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v93) + 59) == 2;
    v97 = v1[39];
    v98 = v1[40];
    v9 = v1[41];
    v93 = v1[39];
    v94 = v1[40];
    v84 = v8;
    v95 = v1[41];
    v10 = v9 >= dword_B1D1BC + Cell::GetGroundHeight(&v93);
    v83 = v10;
    if ( !v84 || v10 )
    if ( *(uint32_t *)(v1[65] + 744) )
    v20 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v20 )
    v21 = Math::RoundToInt(*((float *)v1 + 50));
    v22 = *((float *)v1 + 51);
    v93 = v21;
    v23 = Math::RoundToInt(v22);
    v24 = *((float *)v1 + 52);
    v94 = v23;
    v25 = Math::RoundToInt(v24);
    v26 = v1[65];
    v95 = v25;
    AnimClass::ctor(v20, *(void **)(v26 + 744), &v93, 0, 1, (void *)0x2600, (void *)0xFFFFFFE2, 0);
    v27 = v1[65];
    v28 = *(uint32_t *)(v27 + 752);
    v82 = *(uint32_t *)(v27 + 760);
    Coords = Coord::GetCoords((float *)v1 + 44, &v97);
    PlaySoundEffectAt(Coords, v28, 0, v82, 1, 0);
    v30 = v1[65];
    v86 = *(uint32_t *)(v30 + 760);
    v31 = *(uint32_t *)(v30 + 752);
    v32 = Coord::GetCoords((float *)v1 + 44, &v97);
    CreateSmokeEffectAt(v31, v86, *v32, v32[1], v32[2], 0, 0);
    else if ( *(uint8_t *)(v1[65] + 720) )
    v11 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v11 )
    v12 = *v7;
    v13 = v1[40];
    v14 = v1[41];
    v93 = v12;
    v94 = v13;
    v95 = v14 + 5;
    AnimClass::ctor(
    v11,
    *(void **)(*((uint32_t *)RulesClass_Instance + 753) + 4 * *((uint32_t *)RulesClass_Instance + 756) - 4),
    &v93,
    0,
    1,
    (void *)0x600,
    0,
    0);
    else
    v15 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v15 )
    v93 = *v7;
    v94 = v1[40];
    v95 = v1[41];
    AnimClass::ctor(v15, *((void **)RulesClass_Instance + 37), &v93, 0, 1, (void *)0x600, 0, 0);
    v16 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v16 )
    v17 = *v7;
    v18 = v1[40];
    v19 = v1[41];
    v93 = v17;
    v94 = v18;
    v95 = v19 + 10;
    AnimClass::ctor(v16, **((void ***)RulesClass_Instance + 753), &v93, 0, 1, (void *)0x600, 0, 0);
    if ( !v84 || v83 )
    v33 = v1[65];
    v104 = 0;
    v105 = 0;
    v106 = 0;
    if ( *(uint8_t *)(v33 + 720) )
    v34 = Coord::GetCoords((float *)v1 + 44, &v97);
    v93 = *v34;
    v94 = v34[1];
    v95 = v34[2];
    v35 = v1[65];
    if ( *(uint32_t *)(v35 + 724) )
    v36 = *(uint32_t *)(v35 + 728);
    if ( v36 > 0 )
    v37 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, v36);
    v38 = v37 + Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, *(uint32_t *)(v1[65] + 728));
    if ( v38 > 0 )
    v39 = v38;
    do
    v40 = (void*374 *)__2_YAPAXI_Z(0x148u);
    if ( v40 )
    DamageAnimClass::Constructor(v40, *(uint32_t *)(v1[65] + 724), &v93, 0);
    --v39;
    while ( v39 );
    if ( *(uint8_t *)(v1[65] + 768) && !v83 )
    v41 = 0;
    v87 = 0;
    do
    v42 = v41 & 7;
    LOWORD(v85) = v93 / 256 + LOWORD(Direction_X_Offsets[v42]);
    HIWORD(v85) = v94 / 256 + HIWORD(Direction_X_Offsets[v42]);
    v88 = v85;
    v43 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v88);
    if ( IsCoordValidMap((int)v43, 0) )
    v44 = *((uint32_t *)BuildingClass_InstanceArray + FindBuildingByTiberiumType(127));
    if ( *((uint8_t *)v43 + 284) )
    v90 = __2_YAPAXI_Z(0xB0u);
    if ( v90 )
    v89 = v43[9];
    v45 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 1);
    Object::SpawnAtCell(
    v90,
    *((uint32_t *)BuildingTypeClass_Array
    + 2 * *((unsigned __int8 *)v43 + 284)
    + v45
    + *(uint32_t *)(v44 + 232)
    + *(uint32_t *)(*(uint32_t *)(v44 + 224) + 660)
    - 2),
    (__int16 *)&v89,
    -1);
    else
    v90 = __2_YAPAXI_Z(0xB0u);
    if ( v90 )
    v91 = v43[9];
    v46 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 11);
    Object::SpawnAtCell(
    v90,
    *((uint32_t *)BuildingTypeClass_Array + v46 + *(uint32_t *)(*(uint32_t *)(v44 + 224) + 660)),
    (__int16 *)&v91,
    -1);
    v90 = v43 + 9;
    CellClass::RegisterForRedraw(v44, (__int16 *)v43 + 18);
    *((uint8_t *)v43 + 286) = 0;
    StartCoords = House::GetStartCoords((int)v43, v96);
    v48 = *StartCoords;
    v49 = StartCoords[1] - Map_VisibleRect;
    v50 = StartCoords[2];
    v51 = StartCoords[3];
    v102 = v50;
    v103 = v51;
    if ( v6 > 0 && v106 > 0 )
    if ( v50 <= 0 || v51 <= 0 )
    v48 = v104;
    v49 = v105;
    v50 = v6;
    v51 = v106;
    else
    v52 = v104;
    v53 = v105;
    v100 = v106;
    if ( v104 > v48 )
    v6 = v104 + v6 - v48;
    v52 = v48;
    if ( v105 > v49 )
    v53 = v49;
    v100 += v105 - v49;
    if ( v52 + v6 < v48 + v102 )
    v6 = v48 + v102 - v52 + 1;
    v51 = v100;
    if ( v100 + v53 < v49 + v103 )
    v51 = v103 - v53 + v49 + 1;
    v1 = v92;
    v48 = v52;
    v49 = v53;
    v50 = v6;
    v105 = v49;
    v104 = v48;
    v6 = v50;
    v106 = v51;
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)v90);
    v41 = v87;
    v87 = ++v41;
    while ( v41 < 8 );
    Cell::CreateCrater(v104, v105, v6, v106, 0);
    return (*(int (__thiscall **)(uint32_t *))(*v1 + 248))(v1);
    else if ( *(uint8_t *)(v33 + 768) )
    if ( !v83 )
    v54 = Coord::GetCoords((float *)v1 + 44, &v97);
    v55 = (unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, v54);
    if ( IsCoordValidMap((int)v55, 0) )
    v56 = *((uint32_t *)BuildingClass_InstanceArray + FindBuildingByTiberiumType(127));
    if ( v55[284] )
    v57 = __2_YAPAXI_Z(0xB0u);
    if ( v57 )
    v92 = (uint32_t *)*((uint32_t *)v55 + 9);
    v58 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 1);
    Object::SpawnAtCell(
    v57,
    *((uint32_t *)BuildingTypeClass_Array
    + 2 * v55[284]
    + v58
    + *(uint32_t *)(v56 + 232)
    + *(uint32_t *)(*(uint32_t *)(v56 + 224) + 660)
    - 2),
    (__int16 *)&v92,
    -1);
    else
    v59 = __2_YAPAXI_Z(0xB0u);
    if ( v59 )
    v92 = (uint32_t *)*((uint32_t *)v55 + 9);
    v60 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 11);
    Object::SpawnAtCell(
    v59,
    *((uint32_t *)BuildingTypeClass_Array + v60 + *(uint32_t *)(*(uint32_t *)(v56 + 224) + 660)),
    (__int16 *)&v92,
    -1);
    CellClass::RegisterForRedraw(v56, (__int16 *)v55 + 18);
    v55[286] = 0;
    House::GetStartCoords((int)v55, &v104);
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v55 + 36));
    return (*(int (__thiscall **)(uint32_t *))(*v1 + 248))(v1);
    if ( *(uint32_t *)(v1[65] + 748) )
    if ( !((int)CurrentFrame % 2) )
    v61 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v61 )
    v62 = Math::RoundToInt(*((float *)v1 + 50));
    v63 = *((float *)v1 + 51);
    v93 = v62;
    v64 = Math::RoundToInt(v63);
    v65 = *((float *)v1 + 52) * dbl_B1D170;
    v94 = v64;
    v95 = Math::RoundToInt(v65 * 0.01924500897298839 + 0.5);
    AnimClass::ctor(v61, *(void **)(v1[65] + 748), &v93, (void *)1, 1, (void *)0x600, 0, 0);
    v66 = JumpjetLocomotionClass::Update2(v1 + 44);
    if ( *(uint8_t *)(v1[65] + 720) )
    *((float *)v1 + 55) = *((float *)v1 + 55) + *((double *)v1 + 23);
    v67 = v66 - 1;
    if ( v67 )
    if ( v67 == 1 )
    v1[80] = 0;
    else
    v93 = v1[39];
    v94 = v1[40];
    v95 = v1[41];
    if ( *((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v93) + 59) == 2 )
    v1[80] = 0;
    else
    if ( *(uint32_t *)(v1[65] + 740) )
    v68 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v68 )
    v69 = v1[40];
    v96[0] = v1[39];
    v70 = v1[41];
    v96[1] = v69;
    v96[2] = v70;
    AnimClass::ctor(v68, *(void **)(v1[65] + 740), v96, 0, 1, (void *)0x600, 0, 0);
    v71 = Coord::GetCoords((float *)v1 + 44, &v101);
    for ( i = (int *)*((uint32_t *)Coord::To_Cell(&MapClass_Instance, v71) + 57); i; i = (int *)i[12] )
    v73 = i[39];
    v98 = i[40];
    v99 = i[41];
    v74 = Coord::GetCoords((float *)v1 + 44, &v104);
    v75 = abs32(*v74 - v73) + abs32(v74[1] - v98);
    v76 = v1[65];
    if ( v75 <= *(uint32_t *)(v76 + 756) )
    v77 = *i;
    v81 = *(uint32_t *)(v76 + 760);
    v78 = ZCoordToScreenY(v75);
    (*(void (__fastcall **)(int *, uint32_t, int, uint32_t, int, uint32_t, uint32_t, uint32_t, uint32_t))(v77 + 364))(
    i,
    HIDWORD(v78),
    v1[65] + 752,
    v78,
    v81,
    0,
    0,
    0,
    0);
    v79 = *v1;
    v80 = Coord::GetCoords((float *)v1 + 44, &v104);
    return (*(int (__thiscall **)(uint32_t *, uint32_t *))(v79 + 436))(v1, v80);
}

int VoxelAnimClass::_vt30()
{
    return 3;
}

// 0x0074A970
int  VoxelAnimClass::SaveLoad_Prefix(#374 *this, int *a2, int a3)
{
    int Register; // edi
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = (int)&VoxelAnimClass::`vftable';
    a2[1] = (int)&VoxelAnimClass::`vftable';
    a2[2] = (int)&VoxelAnimClass::`vftable';
    a2[3] = (int)&VoxelAnimClass::`vftable';
    AudioController::Init(a2 + 69);
    AudioController::Init(a2 + 74);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 65);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 66);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 67);
    return Register;
}

int __stdcall VoxelAnimClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int  VoxelAnimClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // edx
    int v8; // eax
    HouseClass::ProcessPower((void*374 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 256));
    v3 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 260) + 4) + 16))(*(uint32_t *)(this + 260) + 4);
    Power::TimerProcess(v3);
    v4 = *(uint32_t *)(this + 264);
    if ( v4 )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(v4 + 4) + 16))(v4 + 4);
    Power::TimerProcess(v5);
    v6 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 268) + 4) + 16))(*(uint32_t *)(this + 268) + 4);
    Power::TimerProcess(v6);
    LOBYTE(v7) = *(uint8_t *)(this + 272);
    v8 = Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 316);
    Power::FlagProcess(a2, v8);
    return Power::TimerProcess(*(uint32_t *)(this + 320));
}

int __stdcall VoxelAnimClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448641;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int VoxelAnimClass::_vt12()
{
    return 328;
}

int VoxelAnimClass::_vt11()
{
    return 41;
}

int  VoxelAnimClass::_vt34(uint32_t *this)
{
    return *(this + 65);
}

int __stdcall VoxelAnimClass::_vt66(int a1)
{
    return 0;
}

