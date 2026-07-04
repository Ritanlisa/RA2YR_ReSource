#include "bulletclass.hpp"

double * BulletClass::FlightUpdate(#377 *this, int a2, int a3)
{
    int v5; // ebx
    int v6; // eax
    double *v7; // esi
    double *v8; // esi
    double v9; // st7
    double v10; // st7
    unsigned int v11; // ebx
    double v12; // st7
    double v13; // st7
    uint32_t *Value; // ebx
    int v15; // edx
    double v16; // st7
    double v17; // st7
    uint32_t *v18; // esi
    uint32_t *v19; // eax
    uint32_t *v20; // eax
    int v21; // edx
    int v22; // eax
    double v23; // st7
    __int16 v24; // bx
    double *v25; // esi
    unsigned int v26; // ebx
    double v27; // st7
    double v28; // st7
    __int16 v29; // bx
    double v30; // st7
    double v31; // st7
    unsigned int v32; // ebx
    double v33; // st7
    double v34; // st7
    double v35; // st7
    double v36; // st7
    uint32_t *v37; // esi
    uint32_t *v38; // eax
    uint32_t *v39; // eax
    uint32_t *v40; // eax
    uint32_t *v41; // eax
    uint32_t *v42; // eax
    void*375 *v43; // edx
    int v44; // eax
    int v45; // edx
    void*375 *v46; // eax
    double v47; // [esp+4h] [ebp-90h]
    double v48; // [esp+Ch] [ebp-88h]
    double v49; // [esp+Ch] [ebp-88h]
    double v50; // [esp+Ch] [ebp-88h]
    double *v51; // [esp+2Ch] [ebp-68h]
    int v52; // [esp+30h] [ebp-64h] BYREF
    uint8_t v53[12]; // [esp+34h] [ebp-60h] BYREF
    double v54; // [esp+44h] [ebp-50h] BYREF
    int v55; // [esp+4Ch] [ebp-48h]
    double v56; // [esp+58h] [ebp-3Ch] BYREF
    uint32_t v57[3]; // [esp+60h] [ebp-34h] BYREF
    double v58; // [esp+6Ch] [ebp-28h]
    double v59[2]; // [esp+7Ch] [ebp-18h] BYREF
    double v60; // [esp+8Ch] [ebp-8h]
    if ( *((uint32_t *)this + 70) )
    ProcessTechnoMovementAction();
    return 0;
    else
    v5 = a2;
    v6 = TechnoClass::FireWeapon(this);
    v7 = (double *)v6;
    v51 = (double *)v6;
    if ( v6 )
    if ( !*(uint32_t *)(*(uint32_t *)(v6 + 172) + 732) )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    v52 = (*(int (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 132))(*((uint32_t *)this + 413));
    v8 = v7 + 29;
    v54 = (double)v52;
    BulletClass::NormalizeZeroVector(v8);
    Vector3::Magnitude(v8);
    v9 = v54 / v54;
    *v8 = v54 / v54 * *v8;
    v8[1] = v9 * v8[1];
    v8[2] = v9 * v8[2];
    v52 = (__int16)*Vector::ToFacingMath(v8, &v52) - 0x3FFF;
    v10 = (double)v52 * -0.00009587672516830327;
    *(double *)v53 = v10;
    Vector3::Magnitude(v8);
    v54 = v10;
    if ( *(double *)v53 != 0.0 )
    v11 = *(uint32_t *)&v53[4];
    v12 = Math::ArcTan2(*(double *)v53);
    v48 = COERCE_DOUBLE(__PAIR64__(v11, *(unsigned int *)v53));
    *v8 = *v8 / v12;
    v8[1] = v8[1] / Math::ArcTan2(v48);
    *v8 = Math::ArcTan2(-0.00009587672516830327) * *v8;
    v8[1] = Math::ArcTan2(-0.00009587672516830327) * v8[1];
    v13 = Math::SinCos(-0.00009587672516830327) * v54;
    v8[2] = v13;
    Value = ProgressTimer::GetValue((_WORD *)this + 464, v53);
    Vector2::NormalizeNonZero(v8);
    Function::41C430(v8);
    v15 = *(__int16 *)Value;
    v54 = v13;
    v52 = v15 - 0x3FFF;
    v16 = Math::ArcTan2((double)(v15 - 0x3FFF) * -0.00009587672516830327);
    *v8 = v16 * v54;
    v52 = *(__int16 *)Value - 0x3FFF;
    v17 = Math::SinCos((double)v52 * -0.00009587672516830327);
    v5 = a2;
    v8[1] = -(v17 * v54);
    v7 = v51;
    if ( *(uint32_t *)(*((uint32_t *)v7 + 43) + 732) == 1 )
    v18 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *))(*(uint32_t *)this + 72))(this, v53);
    v19 = (uint32_t *)(*(int (__thiscall **)(int, double *))(*(uint32_t *)v5 + 72))(v5, &v56);
    v20 = Coord::Subtract(&v57[1], *v19 - *v18, v19[1] - v18[1], v19[2] - v18[2]);
    LODWORD(v54) = *v20;
    v21 = v20[1];
    v22 = v20[2];
    HIDWORD(v54) = v21;
    v55 = v22;
    *(double *)&v57[1] = (double)SLODWORD(v54);
    v59[1] = (double)v21;
    v58 = (double)v21;
    v60 = (double)v22;
    v59[0] = *(double *)&v57[1];
    v23 = (Math::CalcAngle(-(double)v21, *(double *)&v57[1]) - 1.570796326794897) * -10430.06004058427;
    v24 = Math::RoundToInt(v23);
    v25 = v51 + 29;
    Vector2::NormalizeNonZero(v51 + 29);
    Function::41C430(v51 + 29);
    v54 = v23;
    v52 = v24 - 0x3FFF;
    *(double *)v53 = (double)v52 * -0.00009587672516830327;
    v26 = *(uint32_t *)&v53[4];
    v51[29] = Math::ArcTan2(*(double *)v53) * v23;
    v27 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v26, *(unsigned int *)v53))) * v54);
    v51[30] = v27;
    Math::Hypotenuse2D(v59);
    v28 = Math::CalcAngle(v60, v27);
    v29 = Math::RoundToInt((v28 - 1.570796326794897) * -10430.06004058427);
    v52 = (__int16)*Vector::ToFacingMath(v51 + 29, v53) - 0x3FFF;
    v30 = (double)v52 * -0.00009587672516830327;
    *(double *)v53 = v30;
    Vector3::Magnitude(v51 + 29);
    v54 = v30;
    if ( *(double *)v53 != 0.0 )
    v31 = Math::ArcTan2(*(double *)v53);
    v49 = *(double *)v53;
    *v25 = *v25 / v31;
    v51[30] = v51[30] / Math::ArcTan2(v49);
    v52 = v29 - 0x3FFF;
    *(double *)v53 = (double)v52 * -0.00009587672516830327;
    v32 = *(uint32_t *)&v53[4];
    v33 = Math::ArcTan2(*(double *)v53);
    v50 = COERCE_DOUBLE(__PAIR64__(v32, *(unsigned int *)v53));
    *v25 = v33 * *v25;
    v34 = Math::ArcTan2(v50);
    v47 = COERCE_DOUBLE(__PAIR64__(v32, *(unsigned int *)v53));
    v51[30] = v34 * v51[30];
    v51[31] = Math::SinCos(v47) * v54;
    v35 = (double)*(int *)(*(uint32_t *)(*(int (__thiscall **)(void*377 *, uint32_t))(*(uint32_t *)this + 1016))(this, 0) + 168);
    v54 = v35;
    BulletClass::NormalizeZeroVector(v25);
    Vector3::Magnitude(v25);
    v36 = v54 / v35;
    *v25 = v36 * *v25;
    v51[30] = v36 * v51[30];
    v51[31] = v36 * v51[31];
    v7 = v51;
    if ( (unsigned __int8)House::IsHumanPlayer(*((void*375 **)this + 135)) )
    v37 = (uint32_t *)((char *)this + 156);
    v54 = *(double *)((char *)this + 156);
    v55 = *((uint32_t *)this + 41);
    if ( Cell::IsPassable(&v54) )
    goto LABEL_21;
    Coord::Subtract(&v54, 512, 512, 0);
    v38 = Coord::Subtract(
    &v57[1],
    *v37 + LODWORD(v54),
    *((uint32_t *)this + 40) + HIDWORD(v54),
    *((uint32_t *)this + 41) + v55);
    *(uint32_t *)v53 = *v38;
    *(_QWORD *)&v53[4] = *(_QWORD *)(v38 + 1);
    if ( Cell::IsPassable(v53) )
    goto LABEL_21;
    Coord::Subtract(&v54, -512, -512, 0);
    v39 = Coord::Subtract(
    &v57[1],
    *v37 + LODWORD(v54),
    *((uint32_t *)this + 40) + HIDWORD(v54),
    *((uint32_t *)this + 41) + v55);
    *(uint32_t *)v53 = *v39;
    *(_QWORD *)&v53[4] = *(_QWORD *)(v39 + 1);
    if ( Cell::IsPassable(v53) )
    goto LABEL_21;
    Coord::Subtract(&v54, 512, -512, 0);
    v40 = Coord::Subtract(
    &v57[1],
    *v37 + LODWORD(v54),
    *((uint32_t *)this + 40) + HIDWORD(v54),
    *((uint32_t *)this + 41) + v55);
    *(uint32_t *)v53 = *v40;
    *(_QWORD *)&v53[4] = *(_QWORD *)(v40 + 1);
    if ( Cell::IsPassable(v53)
    || (Coord::Subtract(&v54, 512, -512, 0),
    v41 = Coord::Subtract(
    &v57[1],
    *v37 + LODWORD(v54),
    *((uint32_t *)this + 40) + HIDWORD(v54),
    *((uint32_t *)this + 41) + v55),
    *(uint32_t *)v53 = *v41,
    *(_QWORD *)&v53[4] = *(_QWORD *)(v41 + 1),
    Cell::IsPassable(v53))
    || (v42 = (uint32_t *)(*(int (__thiscall **)(int, uint32_t *))(*(uint32_t *)a2 + 72))(a2, &v57[1]),
    Cell::IsPassable(v42)) )
    LABEL_21:
    LODWORD(v54) = *v37;
    v43 = (void*375 *)*((uint32_t *)this + 135);
    HIDWORD(v54) = *((uint32_t *)this + 40);
    v55 = *((uint32_t *)this + 41);
    MapClass::RevealArea1(&v54, RulesClass_Instance->AttackingAircraftSightRange, v43, 0, 0, 0, 1, 0);
    v44 = *v37;
    v45 = *((uint32_t *)this + 41);
    HIDWORD(v54) = *((uint32_t *)this + 40);
    LODWORD(v54) = v44;
    v46 = (void*375 *)*((uint32_t *)this + 135);
    v55 = v45;
    MapClass::RevealArea1(&v54, RulesClass_Instance->AttackingAircraftSightRange, v46, 0, 0, 0, 1, 1);
    v7 = v51;
    if ( *((uint8_t *)this + 1738) )
    (*(void (__thiscall **)(void*377 *))(*(uint32_t *)this + 248))(this);
    return v7;
}

int *__stdcall BulletClass::_vt66(int a1)
{
    if ( (byte_89DE10 & 1) == 0 )
    byte_89DE10 |= 1u;
    dword_89DDF4 = 2147450879;
    atexit(nullsub_108);
    return &dword_89DDF4;
}

bool  BulletClass::_vt73(#374 *this, int a2)
{
    return (unsigned __int8)ObjectClass::UpdateProductionDisplay(this) != 0;
}

char  BulletClass::ProcessNukeExplosion(int this)
{
    int v2; // eax
    int v3; // eax
    int v4; // ecx
    char v5; // al
    unsigned __int8 v6; // bl
    int v7; // esi
    void **v8; // eax
    int v9; // eax
    double v10; // st6
    double v11; // st5
    double *v12; // ebx
    double v13; // st3
    double v14; // st7
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    char v18; // al
    int v19; // edx
    double v20; // st7
    double v21; // st7
    double v22; // st7
    unsigned int v23; // eax
    unsigned int v24; // edx
    int v25; // ecx
    int *v26; // eax
    uint8_t *v27; // ecx
    int v28; // eax
    double *v29; // esi
    double v30; // st7
    __int64 v31; // rax
    int v32; // edi
    uint32_t *v33; // eax
    int *v34; // eax
    int v35; // edx
    int v36; // eax
    double v37; // st7
    int v38; // ecx
    char v39; // si
    __int16 v40; // cx
    char *v41; // eax
    double v42; // st7
    double v43; // st6
    double v44; // st5
    double v45; // st7
    int v46; // edx
    int *v47; // eax
    int v48; // edx
    double v49; // st7
    int v50; // esi
    int *v51; // eax
    int v52; // edx
    int v53; // eax
    double v54; // st7
    int v55; // eax
    double v56; // st7
    double v57; // st7
    char v59; // c0
    int v60; // eax
    int v61; // eax
    double *v62; // ebx
    double v63; // st7
    int v64; // ecx
    int v65; // eax
    double FiringDistance; // st7
    int v67; // eax
    double v68; // st7
    int v69; // eax
    double v70; // st7
    double v71; // st7
    double v72; // st7
    int v73; // edx
    int v74; // esi
    int v75; // edi
    int v76; // eax
    int v77; // ecx
    int v78; // esi
    int v79; // edx
    int v80; // eax
    uint32_t *v81; // ecx
    int v82; // eax
    int v83; // eax
    int v84; // edi
    uint32_t *v85; // esi
    char v86; // bl
    double v87; // st7
    uint32_t *v88; // edi
    uint32_t *v89; // esi
    int Byte284; // eax
    float *v91; // eax
    float *v92; // eax
    float v93; // eax
    double v94; // st7
    unsigned int v95; // esi
    unsigned int v96; // edi
    int v97; // eax
    int v98; // eax
    int v99; // esi
    int v100; // eax
    uint32_t *v101; // esi
    uint32_t *v102; // edi
    uint32_t *v103; // esi
    uint32_t *v104; // eax
    uint32_t *v105; // eax
    uint32_t *ClosestObject; // esi
    int v107; // eax
    bool IsAlliedWithObject; // al
    int v109; // ecx
    int v110; // edx
    double v111; // st7
    bool v112; // al
    int v113; // edx
    double *v114; // esi
    int v115; // edx
    int v116; // edx
    char v117; // al
    int v118; // edx
    char v119; // bl
    int v120; // eax
    int v121; // esi
    int v122; // ecx
    int v123; // eax
    int v124; // eax
    int v125; // ecx
    int v126; // eax
    double v127; // kr00_8
    int v128; // ebx
    int *v129; // eax
    int v130; // ecx
    double v131; // st7
    int v132; // ecx
    double v133; // st7
    double v134; // st7
    double v135; // st7
    int v136; // esi
    int v137; // eax
    __int64 v138; // rax
    int Index; // eax
    void *v140; // edi
    void **v141; // esi
    int v142; // eax
    void *v143; // eax
    void **v144; // eax
    int v145; // eax
    int v147; // [esp+10h] [ebp-1B4h]
    int v148; // [esp+14h] [ebp-1B0h]
    int v149; // [esp+14h] [ebp-1B0h]
    int v150; // [esp+14h] [ebp-1B0h]
    __int64 v151; // [esp+14h] [ebp-1B0h]
    int v152; // [esp+18h] [ebp-1ACh]
    int v153; // [esp+18h] [ebp-1ACh]
    int v154; // [esp+18h] [ebp-1ACh]
    float v155; // [esp+18h] [ebp-1ACh]
    int GroundHeight; // [esp+2Ch] [ebp-198h] BYREF
    int v157; // [esp+30h] [ebp-194h]
    int v158; // [esp+34h] [ebp-190h]
    int v159; // [esp+38h] [ebp-18Ch]
    int v160; // [esp+3Ch] [ebp-188h]
    double v161; // [esp+40h] [ebp-184h] BYREF
    int v162; // [esp+48h] [ebp-17Ch]
    double v163[2]; // [esp+4Ch] [ebp-178h] BYREF
    double v164; // [esp+60h] [ebp-164h] BYREF
    int v165; // [esp+68h] [ebp-15Ch]
    int v166[2]; // [esp+6Ch] [ebp-158h] BYREF
    int v167; // [esp+74h] [ebp-150h]
    int v168; // [esp+7Ch] [ebp-148h]
    uint32_t *v169; // [esp+80h] [ebp-144h]
    double v170[3]; // [esp+84h] [ebp-140h] BYREF
    double v171[2]; // [esp+9Ch] [ebp-128h] BYREF
    double v172; // [esp+ACh] [ebp-118h] BYREF
    double v173; // [esp+B4h] [ebp-110h]
    double v174; // [esp+BCh] [ebp-108h]
    int v175; // [esp+C4h] [ebp-100h] BYREF
    int v176; // [esp+C8h] [ebp-FCh]
    int v177; // [esp+CCh] [ebp-F8h]
    _QWORD v178[3]; // [esp+D0h] [ebp-F4h] BYREF
    double v179[3]; // [esp+E8h] [ebp-DCh] BYREF
    int v180; // [esp+100h] [ebp-C4h] BYREF
    float v181[12]; // [esp+104h] [ebp-C0h] BYREF
    float v182[12]; // [esp+134h] [ebp-90h] BYREF
    char v183[48]; // [esp+164h] [ebp-60h] BYREF
    float v184[12]; // [esp+194h] [ebp-30h] BYREF
    ObjectClass::DetectCloaked((void*374 *)this);
    LOBYTE(v2) = *(uint8_t *)(this + 144);
    if ( !(uint8_t)v2 )
    return v2;
    if ( !*(uint8_t *)(this + 344) )
    v4 = *(uint32_t *)(this + 172);
    HIBYTE(v159) = 0;
    LOBYTE(v158) = 0;
    if ( *(uint8_t *)(v4 + 668) )
    LOBYTE(v158) = *(uint8_t *)(this + 141) == 0;
    if ( *(uint8_t *)(v4 + 756) || *(uint8_t *)(v4 + 757) )
    v5 = *(uint8_t *)(this + 301) - 1;
    *(uint8_t *)(this + 301) = v5;
    if ( !v5 )
    v6 = *(uint8_t *)(this + 300) + 1;
    *(uint8_t *)(this + 301) = *(uint8_t *)(v4 + 758);
    *(uint8_t *)(this + 300) = v6;
    if ( v6 > *(uint8_t *)(v4 + 757) )
    *(uint8_t *)(this + 300) = *(uint8_t *)(v4 + 756);
    v161 = *(double *)(this + 156);
    v162 = *(uint32_t *)(this + 164);
    if ( *(uint32_t *)(v4 + 728) )
    v7 = *(uint32_t *)(v4 + 744);
    if ( v7 )
    if ( !((int)CurrentFrame % v7) )
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    LABEL_23:
    AnimClass::ctor(
    v8,
    *(void **)(*(uint32_t *)(this + 172) + 728),
    (int *)&v161,
    (void *)1,
    1,
    (void *)0x600,
    0,
    0);
    else if ( !((int)CurrentFrame % *(uint32_t *)(v4 + 740)) )
    v8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v8 )
    goto LABEL_23;
    v9 = *(uint32_t *)(this + 172);
    v160 = 0;
    if ( *(int *)(v9 + 732) > 0 )
    v10 = *(double *)(this + 240);
    v11 = *(double *)(this + 232);
    v12 = (double *)(this + 232);
    v13 = *(double *)(this + 248) * *(double *)(this + 248);
    GroundHeight = *(uint32_t *)(this + 272);
    v14 = Math::Sqrt(v11 * v11 + v10 * v10 + v13);
    v15 = *(uint32_t *)(this + 172);
    v16 = *(uint32_t *)(v15 + 736);
    v171[0] = v14;
    if ( v16 )
    v17 = *(uint32_t *)(this + 264);
    if ( v17 < v16 )
    *(uint32_t *)(this + 264) = v17 + 1;
    if ( v17 + 1 >= *(uint32_t *)(v15 + 736) )
    goto LABEL_31;
    else if ( *(int *)(this + 272) >= 40 || (double)GroundHeight <= v171[0] + 0.5 )
    LABEL_31:
    *(uint8_t *)(this + 261) = 0;
    v18 = *(uint8_t *)(this + 261);
    v19 = *(uint32_t *)(v15 + 720);
    v169 = (uint32_t *)v19;
    if ( v18 && !*(uint32_t *)(v15 + 736) )
    v19 = (int)CurrentFrame % 2 == 0;
    v169 = (uint32_t *)v19;
    v20 = (double)GroundHeight;
    if ( v171[0] >= v20 )
    if ( v171[0] <= v20 )
    goto LABEL_50;
    GroundHeight = v19 / 2;
    v171[0] = v171[0] - (double)(v19 / 2);
    if ( v171[0] <= 0.0 )
    v171[0] = 0.0;
    if ( *v12 != 0.0 || *(double *)(this + 240) != 0.0 || *(double *)(this + 248) != 0.0 )
    LABEL_49:
    v21 = Math::Sqrt(
    *(double *)(this + 248) * *(double *)(this + 248)
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *v12 * *v12);
    v22 = v171[0] / v21;
    *v12 = v22 * *v12;
    *(double *)(this + 240) = v22 * *(double *)(this + 240);
    *(double *)(this + 248) = v22 * *(double *)(this + 248);
    LABEL_50:
    v172 = *v12;
    LODWORD(v173) = *(uint32_t *)(this + 240);
    v23 = *(uint32_t *)(this + 252);
    v24 = *(uint32_t *)(this + 248);
    HIDWORD(v173) = *(uint32_t *)(this + 244);
    v25 = *(uint32_t *)(this + 268);
    v174 = COERCE_DOUBLE(__PAIR64__(v23, v24));
    if ( v25 )
    v26 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)v25 + 88))(v25, &v175);
    else
    v26 = &unk_89DE30;
    LODWORD(v163[0]) = *v26;
    v27 = *(uint8_t **)(this + 268);
    HIDWORD(v163[0]) = v26[1];
    LODWORD(v163[1]) = v26[2];
    if ( v27 && (v27[20] & 2) != 0 )
    v28 = (*(int (__thiscall **)(uint8_t *, int *))(*(uint32_t *)v27 + 164))(v27, &v175);
    v163[0] = *(double *)v28;
    LODWORD(v163[1]) = *(uint32_t *)(v28 + 8);
    v29 = (double *)((char *)RulesClass_Instance + 1432);
    GroundHeight = ((int)CurrentFrame + (*(int (__stdcall **)(int))(*(uint32_t *)(this + 4) + 16))(this + 4)) % 15;
    v30 = Math::SinCos((double)GroundHeight * 0.06666666666666667 * 6.283185307179586);
    v31 = Math::RoundToInt((v30 * *v29 + *v29 + 1.0) * (double)*(int *)(*(uint32_t *)(this + 172) + 732));
    v32 = v31;
    LODWORD(v31) = *(uint32_t *)this;
    GroundHeight = v32;
    v33 = (uint32_t *)(*(int (__fastcall **)(int, uint32_t, int *))(v31 + 72))(this, HIDWORD(v31), &v175);
    v34 = Coord::Subtract(v171, *v33 - LODWORD(v163[0]), v33[1] - HIDWORD(v163[0]), v33[2] - LODWORD(v163[1]));
    v166[0] = *v34;
    v35 = v34[1];
    v36 = v34[2];
    v166[1] = v35;
    v167 = v36;
    v37 = Math::Sqrt((double)v35 * (double)v35 + (double)v36 * (double)v36 + (double)v166[0] * (double)v166[0]);
    if ( (int)Math::RoundToInt(v37) < 256 )
    LOBYTE(v32) = Math::RoundToInt((double)GroundHeight * 1.5);
    v164 = v161;
    v38 = *(uint32_t *)(this + 268);
    v165 = v162;
    v39 = v38 && (*(int (__thiscall **)(int))(*(uint32_t *)v38 + 44))(v38) == 2;
    LOBYTE(v40) = 0;
    HIBYTE(v40) = *(uint8_t *)(this + 261) == 0 ? v32 : 0;
    v41 = *(char **)(this + 172);
    LOWORD(GroundHeight) = v40;
    GroundHeight = Movement::CalcVelocity(v163, &GroundHeight, v39, v41[660], v41[665], v41[669]);
    v169 = Coord::To_Cell(&MapClass_Instance, &v161);
    *(double *)v178 = v172;
    *(double *)&v178[1] = v173;
    *(double *)&v178[2] = v174;
    qmemcpy(v12, v178, 0x18u);
    v42 = *(double *)(this + 248);
    v43 = *(double *)(this + 240);
    v44 = *v12;
    *(double *)v166 = (double)GroundHeight;
    v45 = Math::Sqrt(v44 * v44 + v43 * v43 + v42 * v42) * 0.5;
    if ( v45 >= *(double *)v166 || (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) <= 0 )
    v46 = *(uint32_t *)this;
    LOBYTE(v158) = 1;
    v160 = 1;
    if ( (*(int (__thiscall **)(int))(v46 + 456))(this) > 0
    && !*(uint8_t *)(*(uint32_t *)(this + 172) + 660)
    && (LODWORD(v163[0]) != unk_89DE30 || *(_QWORD *)((char *)v163 + 4) != qword_89DE34) )
    v161 = v163[0];
    v162 = LODWORD(v163[1]);
    if ( LODWORD(v163[0]) == unk_89DE30
    && *(_QWORD *)((char *)v163 + 4) == qword_89DE34
    && (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) >= *((uint32_t *)RulesClass_Instance + 360) )
    LOBYTE(v158) = 1;
    v160 = 1;
    v47 = Coord::Subtract(
    &v175,
    LODWORD(v164) - LODWORD(v163[0]),
    HIDWORD(v164) - HIDWORD(v163[0]),
    v165 - LODWORD(v163[1]));
    v166[0] = *v47;
    v48 = v47[2];
    v166[1] = v47[1];
    v167 = v48;
    v49 = Math::Sqrt((double)v48 * (double)v48 + (double)v166[1] * (double)v166[1] + (double)v166[0]
    * (double)v166[0]);
    v50 = Math::RoundToInt(v49);
    v51 = Coord::Subtract(
    v171,
    LODWORD(v161) - LODWORD(v163[0]),
    HIDWORD(v161) - HIDWORD(v163[0]),
    v162 - LODWORD(v163[1]));
    v166[0] = *v51;
    v52 = v51[1];
    v53 = v51[2];
    v166[1] = v52;
    v167 = v53;
    v54 = Math::Sqrt((double)v53 * (double)v53 + (double)v52 * (double)v52 + (double)v166[0] * (double)v166[0]);
    GroundHeight = v50 - Math::RoundToInt(v54);
    if ( !*(uint8_t *)(this + 261) )
    v55 = *(uint32_t *)(this + 280);
    if ( v55 >= 60 )
    v57 = *(double *)(this + 288) * 0.9833333333333333 + (double)GroundHeight;
    *(double *)(this + 288) = v57;
    if ( !v59 && v57 < 60.0 )
    v60 = *(uint32_t *)(this + 172);
    if ( !*(uint8_t *)(v60 + 660) && !*(uint8_t *)(v60 + 665) )
    LOBYTE(v158) = 1;
    v160 = 1;
    goto LABEL_184;
    else
    v56 = (double)GroundHeight;
    *(uint32_t *)(this + 280) = v55 + 1;
    *(double *)(this + 288) = v56 + *(double *)(this + 288);
    if ( !v160
    && ((v169[80] & 0x100) != 0 || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v164) + 80) & 0x100) != 0) )
    v61 = dword_89DE64 + Cell::GetGroundHeight(&v161);
    if ( v162 > v61 && v165 < v61 )
    v160 = 1;
    v162 = v61;
    LABEL_183:
    LOBYTE(v158) = 1;
    goto LABEL_184;
    if ( v162 < v61 && v165 > v61 )
    v160 = 1;
    v162 = v61;
    goto LABEL_183;
    LABEL_184:
    v116 = *(uint32_t *)this;
    if ( v160 == 2 )
    (*(void (__thiscall **)(int, int))(v116 + 292))(this, 2);
    else
    (*(void (__thiscall **)(int, int))(v116 + 292))(this, 2);
    (*(void (__thiscall **)(int, double *))(*(uint32_t *)this + 436))(this, &v161);
    if ( (uint8_t)v158
    || (v164 = *(double *)(this + 156),
    v165 = *(uint32_t *)(this + 164),
    v117 = BulletClass::CheckBulletCollision(&v164),
    v118 = *(uint32_t *)this,
    v119 = v117,
    LOBYTE(v158) = v117,
    (*(void (__thiscall **)(int, double *))(v118 + 436))(this, &v164),
    v119) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) < 0 )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 460))(this, 0);
    v120 = *(uint32_t *)(this + 172);
    if ( *(int *)(v120 + 732) > 0 || *(uint8_t *)(v120 + 672) )
    v121 = BulletClass::CheckProximityDetonation(&v161);
    else
    v121 = 0;
    v122 = *(uint32_t *)(this + 176);
    v168 = v121;
    if ( v122 && *(uint8_t *)((*(int (__thiscall **)(int))(*(uint32_t *)v122 + 132))(v122) + 3476) && v121 == 2 )
    v121 = 1;
    v168 = 1;
    if ( !(uint8_t)v158 )
    v123 = *(uint32_t *)(this + 172);
    if ( *(uint8_t *)(v123 + 668) || !v121 )
    if ( *(uint8_t *)(v123 + 678) )
    v124 = *(uint32_t *)(this + 108);
    if ( v124 > 5 )
    *(uint32_t *)(this + 108) = v124 - 1;
    goto LABEL_233;
    v125 = *(uint32_t *)(this + 268);
    if ( v125 && (v168 == 1 || HIBYTE(v159)) )
    v126 = *(uint32_t *)(this + 172);
    if ( !*(uint8_t *)(v126 + 660) && !*(uint8_t *)(v126 + 674) )
    v127 = v161;
    v128 = v162;
    v129 = (int *)(*(int (__thiscall **)(int, double *))(*(uint32_t *)v125 + 88))(v125, v179);
    v175 = *v129;
    v176 = v129[1];
    v130 = v129[2];
    HIDWORD(v164) = HIDWORD(v127) - v176;
    v165 = (v130 + v128) / 2 - v130;
    LODWORD(v164) = LODWORD(v127) - v175;
    v131 = Math::Sqrt(
    (double)(LODWORD(v127) - v175) * (double)(LODWORD(v127) - v175)
    + (double)v165 * (double)v165
    + (double)SHIDWORD(v164) * (double)SHIDWORD(v164));
    v132 = Math::RoundToInt(v131);
    GroundHeight = v132;
    if ( HIBYTE(v159) )
    GroundHeight = v132 / 3;
    if ( v168 == 1
    || ((v133 = Math::Sqrt(
    *(double *)(this + 232) * *(double *)(this + 232)
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *(double *)(this + 248) * *(double *)(this + 248)),
    v133 + v133 >= 128.0)
    ? (v135 = Math::Sqrt(
    *(double *)(this + 232) * *(double *)(this + 232)
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *(double *)(this + 248) * *(double *)(this + 248)),
    v134 = v135 + v135)
    : (v134 = 128.0),
    (double)GroundHeight <= v134) )
    v136 = *(uint32_t *)this;
    v137 = (*(int (__thiscall **)(uint32_t, double *))(**(uint32_t **)(this + 268) + 72))(
    *(uint32_t *)(this + 268),
    v163);
    (*(void (__thiscall **)(int, int))(v136 + 436))(this, v137);
    if ( (unsigned __int8)AbstractTypeClass::NameEquals(aNuke) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) < 0 )
    (*(void (__thiscall **)(int, uint32_t))(*(uint32_t *)this + 460))(this, 0);
    sub_53AB70();
    v138 = ((__int64 (__thiscall *)(int, double *))*(uint32_t *)(*(uint32_t *)this + 440))(this, v171);
    CreateTriggerClassIfFarEnough(13, SHIDWORD(v138), *(uint32_t *)v138);
    Index = AnimTypeClass::FindIndex(aNukeball);
    if ( Index != -1 )
    v140 = (void *)*((uint32_t *)g_AnimTypeCount + Index);
    if ( v140 )
    v141 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v141 )
    v166[0] = *(uint32_t *)(this + 156);
    v166[1] = *(uint32_t *)(this + 160);
    v167 = *(uint32_t *)(this + 164);
    v142 = *(uint32_t *)(this + 164);
    v151 = (unsigned int)v142;
    v143 = (void *)Return::HRESULT_Fail(*(uint32_t *)(this + 156), *(uint32_t *)(this + 160), v142);
    v144 = AnimClass::ctor(v141, v140, v166, 0, 1, (void *)0x2600, v143, SBYTE4(v151));
    else
    v144 = 0;
    *(uint32_t *)(this + 340) = v144;
    *(uint8_t *)(this + 344) = 1;
    if ( g_BuildingTypeInstanceCount < dword_B0F5C0
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_BuildingInstanceCount + 8))(
    &g_BuildingInstanceCount,
    dword_B0F5CC + dword_B0F5C0,
    0) )
    v145 = g_BuildingTypeInstanceCount++;
    *((uint32_t *)g_BuildingClassPoolManager + v145) = this;
    goto LABEL_233;
    BulletClass::Fire(v158);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 248))(this);
    LABEL_233:
    LOWORD(GroundHeight) = SLODWORD(v161) / 256;
    v2 = SHIDWORD(v161) / 256;
    HIWORD(GroundHeight) = SHIDWORD(v161) / 256;
    *(uint32_t *)(this + 332) = GroundHeight;
    return v2;
    else
    v171[0] = (double)(int)v169 + v171[0];
    if ( v171[0] >= v20 )
    v171[0] = v20;
    if ( *v12 != 0.0 || *(double *)(this + 240) != 0.0 || *(double *)(this + 248) != 0.0 )
    goto LABEL_49;
    *(uint32_t *)v12 = 0;
    *(uint32_t *)(this + 236) = 1079574528;
    goto LABEL_49;
    v62 = (double *)(this + 232);
    v63 = *(double *)(this + 248);
    v170[0] = *(double *)(this + 232);
    v64 = *(uint32_t *)(this + 244);
    LODWORD(v170[1]) = *(uint32_t *)(this + 240);
    v170[2] = v63;
    HIDWORD(v170[1]) = v64;
    qmemcpy(v178, v170, sizeof(v178));
    v172 = v170[0];
    v173 = v170[1];
    v174 = v63;
    v160 = Math::Sqrt(v170[1] * v170[1] + v170[0] * v170[0] + v170[2] * v170[2]) < 8.0;
    v65 = *(uint32_t *)(this + 172);
    v170[0] = (double)SLODWORD(v161);
    v170[1] = (double)SHIDWORD(v161);
    v170[2] = (double)v162;
    FiringDistance = (double)*((int *)RulesClass_Instance + 1454);
    if ( *(uint8_t *)(v65 + 661) )
    FiringDistance = RulesClass::GetFiringDistance();
    v67 = *(uint32_t *)(this + 172);
    if ( *(uint8_t *)(v67 + 704) )
    v68 = Math::Sqrt(
    *v62 * *v62
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *(double *)(this + 248) * *(double *)(this + 248));
    v69 = Math::RoundToInt(v68);
    if ( v69 < *(uint32_t *)(this + 272) )
    GroundHeight = v69 + *(uint32_t *)(*(uint32_t *)(this + 172) + 720);
    *(double *)v166 = (double)GroundHeight;
    if ( *v62 == 0.0 && *(double *)(this + 240) == 0.0 && *(double *)(this + 248) == 0.0 )
    *(uint32_t *)v62 = 0;
    *(uint32_t *)(this + 236) = 1079574528;
    v70 = Math::Sqrt(
    *(double *)(this + 248) * *(double *)(this + 248)
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *v62 * *v62);
    v71 = *(double *)v166 / v70;
    *v62 = v71 * *v62;
    *(double *)(this + 240) = v71 * *(double *)(this + 240);
    *(double *)(this + 248) = v71 * *(double *)(this + 248);
    v72 = *(double *)(this + 248);
    v179[0] = *v62;
    v73 = *(uint32_t *)(this + 244);
    LODWORD(v179[1]) = *(uint32_t *)(this + 240);
    HIDWORD(v179[1]) = v73;
    v74 = Math::RoundToInt(v72);
    v75 = Math::RoundToInt(v72);
    v76 = Math::RoundToInt(v72);
    v164 = v161;
    LODWORD(v161) += v74;
    v77 = *(uint32_t *)(this + 172);
    v165 = v162;
    HIDWORD(v161) += v75;
    v162 += v76;
    if ( v162 <= *(uint32_t *)(v77 + 700) )
    if ( (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) >= 0 )
    v78 = Cell::GetGroundHeight(&v161) + dword_89DE64;
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v161) + 80) & 0x100) != 0
    || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v164) + 80) & 0x100) != 0 )
    if ( v162 < v78 )
    if ( v165 >= v78 )
    v160 = 1;
    LOBYTE(v158) = 1;
    else if ( v165 < v78 )
    v160 = 1;
    LOBYTE(v158) = 1;
    else
    v160 = 1;
    LOBYTE(v158) = 1;
    else
    v160 = 1;
    LOBYTE(v158) = 1;
    LABEL_152:
    v98 = *(uint32_t *)(this + 320);
    LOWORD(GroundHeight) = SLODWORD(v161) / 256;
    HIWORD(GroundHeight) = SHIDWORD(v161) / 256;
    v180 = GroundHeight;
    v99 = v98 / 256;
    v100 = *(uint32_t *)(this + 324) / 256;
    LOWORD(GroundHeight) = v99;
    HIWORD(GroundHeight) = v100;
    LODWORD(v171[0]) = GroundHeight;
    if ( (unsigned __int16)(SLODWORD(v161) / 256) == (_WORD)v99
    && (unsigned __int16)(SHIDWORD(v161) / 256) == (_WORD)v100
    && !*(uint8_t *)(*(uint32_t *)(this + 172) + 704)
    && (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) < 2 * dword_89DE70
    || (v101 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v180),
    v102 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v171),
    v103 = Cell::IsBridge(v101),
    v104 = Cell::IsBridge(v102),
    v103)
    && !*(uint8_t *)(*(uint32_t *)(this + 172) + 704)
    && v103 == v104
    && (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) < 2 * dword_89DE70 )
    v160 = 1;
    LOBYTE(v158) = 1;
    HIBYTE(v159) = 1;
    goto LABEL_184;
    v166[0] = 0;
    v166[1] = 0;
    v105 = Coord::To_Cell(&MapClass_Instance, &v161);
    ClosestObject = (uint32_t *)Object::FindClosestObjectCell(v105, v166, 0, 0);
    v107 = *(uint32_t *)(this + 176);
    if ( !v107 || (HIBYTE(v157) = 1, ClosestObject != (uint32_t *)v107) )
    HIBYTE(v157) = 0;
    if ( !ClosestObject
    || !v107
    || (IsAlliedWithObject = Object::IsAlliedWithObjectHouse(*(uint32_t **)(v107 + 540), (int)ClosestObject),
    BYTE2(v157) = 1,
    !IsAlliedWithObject) )
    BYTE2(v157) = 0;
    v112 = 0;
    if ( ClosestObject )
    v109 = ClosestObject[40];
    LODWORD(v164) = LODWORD(v161) - ClosestObject[39];
    v110 = ClosestObject[41];
    HIDWORD(v164) = HIDWORD(v161) - v109;
    v165 = v162 - v110;
    v111 = Math::Sqrt(
    (double)SLODWORD(v164) * (double)SLODWORD(v164)
    + (double)(v162 - v110) * (double)(v162 - v110)
    + (double)(HIDWORD(v161) - v109) * (double)(HIDWORD(v161) - v109));
    if ( (int)Math::RoundToInt(v111) < 128 )
    v112 = 1;
    if ( HIWORD(v157) || !v112 )
    if ( !Tactical::IsCellVisible(&MapClass_Instance, &v161) )
    v160 = 2;
    LOBYTE(v158) = 1;
    v161 = *(double *)(this + 156);
    v162 = *(uint32_t *)(this + 164);
    goto LABEL_184;
    v115 = *(uint32_t *)(this + 172);
    *(double *)&v178[1] = v173;
    *(double *)v178 = v172;
    if ( !*(uint8_t *)(v115 + 704) )
    v179[0] = *(double *)v178;
    v179[1] = *(double *)&v178[1];
    v179[2] = v174;
    qmemcpy((void *)(this + 232), v179, 0x18u);
    if ( Math::Sqrt(
    *(double *)(this + 232) * *(double *)(this + 232)
    + *(double *)(this + 240) * *(double *)(this + 240)
    + *(double *)(this + 248) * *(double *)(this + 248)) < 10.0
    && (*(int (__thiscall **)(int))(*(uint32_t *)this + 456))(this) < 10 )
    v160 = 1;
    goto LABEL_183;
    else
    v113 = *(uint32_t *)(this + 172);
    v160 = 1;
    LOBYTE(v158) = 1;
    if ( !*(uint8_t *)(v113 + 674) )
    v114 = (double *)(ClosestObject + 39);
    v161 = *v114;
    v162 = *((uint32_t *)v114 + 2);
    goto LABEL_184;
    v79 = *(uint32_t *)(v67 + 712);
    v80 = *(uint32_t *)(v67 + 716);
    v81 = *(uint32_t **)(this + 176);
    v166[0] = v79;
    v169 = v81;
    v166[1] = v80;
    v174 = v174 - FiringDistance;
    v152 = Math::RoundToInt(v170[2]);
    v148 = Math::RoundToInt(v170[1]);
    v82 = Math::RoundToInt(v170[0]);
    Coord::Subtract(&v175, v82, v148, v152);
    BulletClass::AddVector3(&v172);
    v153 = Math::RoundToInt(v170[2]);
    v149 = Math::RoundToInt(v170[1]);
    v83 = Math::RoundToInt(v170[0]);
    Coord3D::Set(&v164, v83, v149, v153);
    GroundHeight = Cell::GetGroundHeight(&v164);
    v84 = GroundHeight + dword_89DE64;
    v168 = GroundHeight + dword_89DE64;
    v85 = Coord::To_Cell(&MapClass_Instance, &v164);
    HIWORD(v157) = 0;
    if ( (v85[80] & 0x100) != 0 || (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v175) + 80) & 0x100) != 0 )
    if ( v165 < v84 )
    if ( v177 >= v84 )
    HIBYTE(v157) = 1;
    else if ( v177 < v84 )
    BYTE2(v157) = 1;
    v86 = 0;
    if ( !HIWORD(v157) )
    v87 = (double)GroundHeight;
    if ( v170[2] < v87 || v170[2] - 150.0 >= v87 )
    LABEL_134:
    v163[0] = (double)GroundHeight;
    if ( v170[2] >= v163[0] && !HIWORD(v157) && !v86 )
    goto LABEL_151;
    if ( v169 )
    if ( HIBYTE(v157) )
    v94 = (double)v168;
    else
    if ( !BYTE2(v157) )
    LABEL_151:
    v95 = Math::RoundToInt(v170[0]);
    v96 = Math::RoundToInt(v170[1]);
    v97 = Math::RoundToInt(v170[2]);
    v161 = COERCE_DOUBLE(__PAIR64__(v96, v95));
    v162 = v97;
    goto LABEL_152;
    GroundHeight = v84 - 20;
    v94 = (double)(v84 - 20);
    v170[2] = v94;
    else
    if ( HIBYTE(v157) )
    v170[2] = (double)v168;
    else if ( BYTE2(v157) )
    GroundHeight = v84 - 20;
    v170[2] = (double)(v84 - 20);
    else
    GroundHeight -= 100;
    if ( (double)GroundHeight < v170[2] )
    v170[2] = v163[0];
    Byte284 = CellClass::GetByte284(&v164);
    qmemcpy(v181, CopyAudioData(v183, Byte284), sizeof(v181));
    qmemcpy(v182, InvertMatrix3x3Signs(v184, v181), sizeof(v182));
    *(float *)&v154 = v174;
    *(float *)&v150 = -v173;
    *(float *)&v147 = v172;
    Triple::Set(v163, v147, v150, v154);
    v91 = Matrix3x3::TransformPoint(v182, (float *)v179, (float *)v163);
    v163[0] = *(double *)v91;
    v155 = *(double *)v166;
    *(float *)&v163[1] = v91[2];
    Coord::Scale((float *)v163, v155);
    *(float *)&v163[1] = -*(float *)&v163[1];
    v92 = Matrix3x3::TransformPoint(v181, (float *)v166, (float *)v163);
    v163[0] = *(double *)v92;
    v93 = v92[2];
    v172 = *(float *)v163;
    v173 = -*((float *)v163 + 1);
    *(float *)&v163[1] = v93;
    v174 = v93;
    v160 = 1;
    LOBYTE(v158) = 1;
    goto LABEL_151;
    v88 = Cell::IsBridge(v85);
    if ( !v88 && !BuildingPlacement::ValidateType(v85, -1, -1) )
    v84 = v168;
    goto LABEL_134;
    v86 = 1;
    if ( v88 )
    v89 = v169;
    if ( v88 == v169 || *(uint8_t *)(v88[328] + 5823) && (int)v88[390] >= 8 )
    v86 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(uint32_t *))(*v88 + 128))(v88) )
    v86 = 0;
    if ( v89 && Object::IsAlliedWithObjectHouse((uint32_t *)v169[135], (int)v88) )
    v86 = 0;
    v84 = v168;
    goto LABEL_134;
    v2 = *(uint32_t *)(this + 340);
    if ( !v2 )
    GroundHeight = this;
    v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &GroundHeight);
    if ( v3 != -1 && v3 < g_BuildingTypeInstanceCount && v3 < --g_BuildingTypeInstanceCount )
    do
    ++v3;
    *((uint32_t *)g_BuildingClassPoolManager + v3 - 1) = *((uint32_t *)g_BuildingClassPoolManager + v3);
    while ( v3 < g_BuildingTypeInstanceCount );
    *(uint8_t *)(this + 344) = 0;
    BulletClass::Fire(0);
    LOBYTE(v2) = (*(int (__thiscall **)(int))(*(uint32_t *)this + 248))(this);
    return v2;
}

// 0x00468000
int  BulletClass::GetAnimFrame(int this)
{
    int result; // eax
    double v3; // st7
    int v4; // ecx
    unsigned int v5; // [esp+14h] [ebp-4h]
    result = 0;
    if ( !*(uint8_t *)(*(uint32_t *)(this + 172) + 673) )
    v3 = Math::CalcAngle(-*(double *)(this + 240), *(double *)(this + 232));
    LOWORD(v5) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427);
    result = dword_7F4890[(((v5 >> 10) + 1) >> 1) & 0x1F];
    v4 = *(uint32_t *)(this + 172);
    if ( *(uint8_t *)(v4 + 756) || *(uint8_t *)(v4 + 757) )
    return *(unsigned __int8 *)(this + 300);
    return result;
}

// 0x00468090
void  BulletClass::SetupVoxelTransform(void *this, int *a2, int *a3)
{
    int v4; // eax
    double v5; // st7
    double v6; // st7
    float *inited; // eax
    float *v8; // eax
    int v9; // ebx
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // edx
    int v14; // eax
    int v15; // eax
    int v16; // ebx
    int v17; // eax
    int v18; // eax
    int v19; // eax
    float v20; // [esp+Ch] [ebp-C4h]
    float v21; // [esp+Ch] [ebp-C4h]
    unsigned int v22; // [esp+20h] [ebp-B0h]
    double v23; // [esp+20h] [ebp-B0h]
    int v24; // [esp+20h] [ebp-B0h]
    int v25; // [esp+2Ch] [ebp-A4h] BYREF
    int v26; // [esp+30h] [ebp-A0h]
    int v27; // [esp+34h] [ebp-9Ch]
    int GroundHeight; // [esp+38h] [ebp-98h]
    unsigned int v29; // [esp+3Ch] [ebp-94h]
    float v30[12]; // [esp+40h] [ebp-90h] BYREF
    uint8_t v31[48]; // [esp+70h] [ebp-60h] BYREF
    float v32[12]; // [esp+A0h] [ebp-30h] BYREF
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || (v25 = *((uint32_t *)this + 39), v26 = *((uint32_t *)this + 40),
    v27 = *((uint32_t *)this + 41),
    !Game::Stub3((int)&v25)) )
    v4 = *((uint32_t *)this + 43);
    if ( !*(uint8_t *)(v4 + 670) && !*((uint8_t *)this + 344) )
    if ( *(uint8_t *)(v4 + 566) )
    Matrix3x4::Identity(v30);
    v5 = Math::CalcAngle(-*((double *)this + 30), *((double *)this + 29));
    LOWORD(v22) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427);
    v20 = (double)(int)(((((v22 >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621;
    Matrix2D::Rotate(v30, v20);
    v23 = Math::Sqrt(*((double *)this + 29) * *((double *)this + 29) + *((double *)this + 30)
    * *((double *)this + 30));
    v6 = Math::CalcAngle(*((double *)this + 31), v23);
    LOWORD(v23) = Math::RoundToInt((v6 - 1.570796326794897) * -10430.06004058427);
    v21 = -((double)(int)((((unsigned int)((LODWORD(v23) >> 10) + 1) >> 1) & 0x1F) - 8) * -0.1963495408493621);
    Matrix3D::RotateZ(v30, v21);
    inited = (float *)AudioConfig::InitDefault(v31);
    v8 = MultiplyMatrix3x4(v32, inited, v30);
    ((void (__stdcall *)(int, float *, int *, int *, uint32_t, int, int))BulletClass::RenderVoxelBullet)(
    *((uint32_t *)this + 43) + 176,
    v8,
    a2,
    a3,
    0,
    2048,
    1000);
    else
    v24 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 108))(this);
    if ( v24 )
    v29 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 488))(this);
    v9 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 456))(this);
    v25 = *((uint32_t *)this + 39);
    v26 = *((uint32_t *)this + 40);
    v27 = *((uint32_t *)this + 41);
    GroundHeight = Cell::GetGroundHeight(&v25);
    if ( !*((uint8_t *)this + 140) )
    v10 = *((uint32_t *)this + 40);
    v11 = *((uint32_t *)this + 41);
    v25 = *((uint32_t *)this + 39);
    v26 = v10;
    v27 = v11;
    if ( (*((uint32_t *)Coord::To_Cell(&MapClass_Instance, &v25) + 80) & 0x100) != 0 && v9 >= dword_89DE64 )
    v9 -= dword_89DE64;
    GroundHeight += dword_89DE64;
    if ( v9 > 0 && *(uint8_t *)(*((uint32_t *)this + 43) + 666) )
    v12 = ZCoordToScreenY(v9);
    v13 = *a2;
    v26 = v12 + a2[1];
    v25 = v13;
    v14 = ZCoordToScreenY(GroundHeight);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_THEATER_PAL,
    v24,
    v29,
    &v25,
    a3,
    9729,
    0,
    -10 - v14,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v15 = *((uint32_t *)this + 43);
    v16 = FileSystem_THEATER_PAL;
    if ( *(uint8_t *)(v15 + 680) )
    v16 = FileSystem_ANIM_PAL;
    else if ( *(uint8_t *)(v15 + 681) )
    v17 = *((uint32_t *)this + 69);
    if ( v17 == -1 )
    v16 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + *((uint32_t *)HouseClass_Player + 22549)) + 780);
    else
    v16 = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v17) + 780);
    v18 = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 464))(this);
    v19 = ZCoordToScreenY(v18);
    DrawToSurfaceSHP(DSurface_Hidden_2, v16, v24, v29, a2, a3, 11776, 0, -30 - v19, 0, 1000, 0, 0, 0, 0, 0);
}

char  BulletClass::ProcessObstacle(uint32_t *this, uint32_t *a2, const void *a3)
{
    int *v4; // edx
    int v5; // ecx
    int v6; // eax
    int v7; // edx
    int v8; // esi
    int v9; // eax
    int v10; // esi
    int v11; // eax
    __int16 v12; // ax
    int v13; // esi
    double v14; // st7
    double v15; // st7
    int v16; // eax
    int v17; // esi
    int FirstFirestorm; // eax
    int v19; // edx
    int GroundHeight; // eax
    int v21; // edx
    int FirstObstacle; // eax
    int v23; // edi
    int v24; // eax
    double v25; // st7
    int v26; // ecx
    int v27; // eax
    double v28; // st7
    int v30; // [esp+24h] [ebp-40h]
    int v31; // [esp+24h] [ebp-40h]
    float v32; // [esp+24h] [ebp-40h]
    double v33; // [esp+24h] [ebp-40h]
    int v34; // [esp+30h] [ebp-34h]
    double v35; // [esp+34h] [ebp-30h] BYREF
    uint32_t v36[3]; // [esp+40h] [ebp-24h] BYREF
    int v37; // [esp+4Ch] [ebp-18h]
    int v38; // [esp+58h] [ebp-Ch] BYREF
    int v39; // [esp+5Ch] [ebp-8h]
    int v40; // [esp+60h] [ebp-4h]
    if ( !(unsigned __int8)ObjectClass::Deploy((void*374 *)this) )
    return 0;
    qmemcpy(this + 58, a3, 0x18u);
    *(this + 77) = *a2;
    *(this + 78) = a2[1];
    *(this + 79) = a2[2];
    LOWORD(v30) = *(this + 77) / 256;
    HIWORD(v30) = *(this + 78) / 256;
    *(this + 83) = v30;
    RemoveTarget((int)this);
    v4 = (int *)(*(int (__thiscall **)(uint32_t, uint32_t *))(*(uint32_t *)*(this + 67) + 88))(*(this + 67), &v36[1]);
    v5 = *v4;
    v38 = v5;
    v39 = v4[1];
    v6 = v39;
    v7 = v4[2];
    *(this + 80) = v5;
    v40 = v7;
    *(this + 81) = v6;
    *(this + 82) = v7;
    v8 = *(this + 43);
    if ( *(uint8_t *)(v8 + 675) && *(uint8_t *)(v8 + 670) )
    v31 = v6 - a2[1];
    v9 = a2[2];
    *(float *)&v36[1] = (float)(*a2 - v5);
    *(float *)&v36[2] = (float)v31;
    v32 = Math::Sqrt(
    *(float *)&v36[1] * *(float *)&v36[1]
    + *(float *)&v36[2] * *(float *)&v36[2]
    + (double)(v9 - v7) * (double)(v9 - v7));
    v10 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2 * RulesClass_Instance[1].PrerequisiteFactory[2]);
    v34 = (int)(Math::RoundToInt(v32) * v10) / *(uint32_t *)(*(this + 76) + 180);
    v11 = Random::Range((uint32_t *)ScenarioClass_Instance + 134, 0, 2147483646);
    v12 = Math::RoundToInt(((double)v11 * 4.656612877414201e-10 * 6.283185307179586 - 1.570796326794897) * -10430.06004058427);
    v13 = v40;
    v33 = (double)(v12 - 0x3FFF) * -0.00009587672516830327;
    *(double *)&v36[1] = (double)v39;
    v35 = (double)v34;
    v14 = Math::SinCos(v33);
    v34 = Math::RoundToInt(*(double *)&v36[1] - v14 * v35);
    v15 = Math::ArcTan2(v33);
    v38 = Math::RoundToInt(v15 * v35 + (double)v38);
    v39 = v34;
    v40 = v13;
    if ( *(uint8_t *)(*(this + 43) + 670) )
    v16 = *(this + 44);
    if ( v16 )
    v17 = *(uint32_t *)(v16 + 540);
    else
    v17 = 0;
    FirstFirestorm = MapClass::FindFirstFirestorm(&v35, a2, &v38, v17);
    *(_QWORD *)&v36[1] = *(_QWORD *)FirstFirestorm;
    v19 = *(uint32_t *)(FirstFirestorm + 8);
    v37 = v19;
    if ( *(_QWORD *)&v36[1] == unk_89DE30 && v19 == MEMORY[0x89DE38] )
    FirstObstacle = TrajectoryHelper::FindFirstObstacle(*(this + 43), v17);
    if ( FirstObstacle )
    v23 = *this;
    v24 = (*(int (__thiscall **)(int, double *))(*(uint32_t *)FirstObstacle + 72))(FirstObstacle, &v35);
    (*(void (__thiscall **)(uint32_t *, int))(v23 + 436))(this, v24);
    else
    (*(void (__thiscall **)(uint32_t *, int *))(*this + 436))(this, &v38);
    (*(void (__thiscall **)(uint32_t *, int *))(*this + 436))(this, &v38);
    *(this + 68) = 0;
    if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 )
    *(this + 58) = 0;
    *(this + 59) = 1079574528;
    v25 = 0.0
    / Math::Sqrt(
    *((double *)this + 31) * *((double *)this + 31)
    + *((double *)this + 30) * *((double *)this + 30)
    + *((double *)this + 29) * *((double *)this + 29));
    *((double *)this + 29) = v25 * *((double *)this + 29);
    *((double *)this + 30) = v25 * *((double *)this + 30);
    *((double *)this + 31) = v25 * *((double *)this + 31);
    else
    GroundHeight = Cell::GetGroundHeight(&v36[1]);
    v21 = *this;
    v37 = GroundHeight;
    (*(void (__thiscall **)(uint32_t *, uint32_t *))(v21 + 436))(this, &v36[1]);
    v26 = *(this + 67);
    if ( v26 && (*(int (__thiscall **)(int))(*(uint32_t *)v26 + 44))(v26) == 2 )
    v27 = 0;
    else
    v27 = *(uint32_t *)(*(this + 43) + 752);
    v36[1] = *(this + 39);
    v36[2] = *(this + 40);
    v37 = *(this + 41);
    BulletClass::InitDetonationTimer(&v36[1], &v38, v27, 0x7FFFFFFF);
    if ( *(int *)(*(this + 43) + 732) > 0 )
    if ( *((double *)this + 29) == 0.0 && *((double *)this + 30) == 0.0 && *((double *)this + 31) == 0.0 )
    *(this + 58) = 0;
    *(this + 59) = 1079574528;
    v28 = 1.0
    / Math::Sqrt(
    *((double *)this + 31) * *((double *)this + 31)
    + *((double *)this + 30) * *((double *)this + 30)
    + *((double *)this + 29) * *((double *)this + 29));
    *((double *)this + 29) = v28 * *((double *)this + 29);
    *((double *)this + 30) = v28 * *((double *)this + 30);
    *((double *)this + 31) = v28 * *((double *)this + 31);
    if ( *((uint8_t *)this + 144) )
    Targeting::Readd(this);
    return 1;
}

int  BulletClass::_vt30(uint32_t *this)
{
    int v1; // eax
    v1 = -(*(uint8_t *)(*(this + 43) + 759) != 0);
    LOBYTE(v1) = v1 & 0xFE;
    return v1 + 3;
}

// 0x0046AE70
int  BulletClass::SaveLoad_Prefix(#374 *this, int *a2, int a3)
{
    int result; // eax
    int v4; // ebx
    int v5; // eax
    result = BuildingClass::SaveLoad_Register(this);
    v4 = result;
    if ( result >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    Timer::Start(a2 + 46, 0);
    Timer::Start(a2 + 49, 0);
    *a2 = (int)&BulletClass::`vftable';
    a2[1] = (int)&BulletClass::`vftable';
    a2[2] = (int)&BulletClass::`vftable';
    a2[3] = (int)&BulletClass::`vftable';
    if ( a2[85]
    && (g_BuildingTypeInstanceCount < dword_B0F5C0
    || (byte_B0F5C5 || !dword_B0F5C0)
    && dword_B0F5CC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_BuildingInstanceCount + 8))(
    &g_BuildingInstanceCount,
    dword_B0F5C0 + dword_B0F5CC,
    0)) )
    v5 = g_BuildingTypeInstanceCount++;
    *((uint32_t *)g_BuildingClassPoolManager + v5) = a2;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 44);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 74);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 67);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 76);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 85);
    return v4;
    return result;
}

int __stdcall BulletClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int  BulletClass::InitScalable(uint32_t **this)
{
    int v2; // eax
    int v3; // edx
    if ( dword_89DE28 < dword_89DE20
    || (byte_89DE25 || !dword_89DE20)
    && dword_89DE2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_89DE18 + 8))(
    &dword_89DE18,
    dword_89DE20 + dword_89DE2C,
    0) )
    v2 = dword_89DE28++;
    *((uint32_t *)dword_89DE1C + v2) = this;
    v3 = dword_89DE28 - 5;
    if ( dword_89DE28 - 5 < 0 )
    v3 = 0;
    return BulletTypeClass::SetScaledSpawnDelay(*(this + 43), v3 / 3 + (*(this + 43))[185]);
}

int BulletClass::_vt12()
{
    return 352;
}

int BulletClass::_vt11()
{
    return 8;
}

int __stdcall BulletClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448649;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int  BulletClass::_vt123(uint32_t *this, int a2)
{
    *(this + 67) = a2;
    return a2;
}

int  BulletClass::_vt34(uint32_t *this)
{
    return *(this + 43);
}

