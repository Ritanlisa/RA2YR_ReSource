#include "animclass.hpp"

void ** AnimClass::ctor(void **this, void *a2, int *a3, void *a4, int a5, void *a6, void *a7, char a8)
{
    wchar_t *v9; // eax
    void *v10; // eax
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax
    int v15; // eax
    uint32_t *v17; // ecx
    int v18; // ecx
    int v19; // eax
    uint32_t *v20; // ecx
    int v21; // edx
    char *ProductionTimeMult; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // eax
    int v27; // eax
    double v28; // st7
    int v29; // eax
    double v30; // st7
    double v31; // st7
    uint32_t *v32; // eax
    int v33; // ecx
    int v34; // eax
    int *v35; // eax
    int v36; // edx
    uint32_t *v37; // edi
    uint32_t *v38; // eax
    int v39; // ecx
    int v40; // edx
    int v41; // eax
    int *v42; // eax
    int v43; // ebx
    int v44; // eax
    int v45; // edi
    double v46; // st7
    double v47; // st6
    char v48; // cl
    char v49; // al
    int v50; // [esp+Ch] [ebp-54h]
    float v51; // [esp+Ch] [ebp-54h]
    int v52; // [esp+Ch] [ebp-54h]
    int v53; // [esp+10h] [ebp-50h]
    uint32_t *Coords; // [esp+10h] [ebp-50h]
    int v55; // [esp+10h] [ebp-50h]
    float v56; // [esp+10h] [ebp-50h]
    int v57; // [esp+14h] [ebp-4Ch]
    float v58; // [esp+18h] [ebp-48h] BYREF
    float v59; // [esp+1Ch] [ebp-44h]
    float v60; // [esp+20h] [ebp-40h]
    int X; // [esp+24h] [ebp-3Ch] BYREF
    int v62; // [esp+28h] [ebp-38h]
    int v63; // [esp+2Ch] [ebp-34h]
    int v64; // [esp+30h] [ebp-30h] BYREF
    float v65; // [esp+34h] [ebp-2Ch]
    float v66; // [esp+38h] [ebp-28h]
    CoordStruct v67; // [esp+3Ch] [ebp-24h] BYREF
    CoordStruct out; // [esp+48h] [ebp-18h] BYREF
    CoordStruct v69; // [esp+54h] [ebp-Ch] BYREF
    ObjectClass::ctor(this);
    *(this + 43) = 0;
    *((uint8_t *)this + 176) = 0;
    v9 = CurrentFrame;
    *(this + 47) = 0;
    *(this + 45) = v9;
    *(this + 48) = 0;
    *(this + 49) = (void *)1;
    *(this + 50) = a2;
    *(this + 51) = 0;
    *(this + 52) = (void *)-1;
    *(this + 53) = 0;
    *(this + 54) = (void *)-1;
    *(this + 63) = (void *)1000;
    *(this + 64) = 0;
    *(this + 65) = 0;
    *(this + 66) = (void *)Map_InvalidCoord_X;
    *(this + 67) = (void *)Map_InvalidCoord_Y;
    v10 = (void *)Map_InvalidCoord_Z;
    *((uint8_t *)this + 280) = 0;
    *((uint8_t *)this + 281) = 0;
    *(this + 68) = v10;
    *(this + 69) = 0;
    *((uint8_t *)this + 282) = 0;
    *((uint8_t *)this + 283) = 0;
    *(this + 71) = 0;
    *((uint8_t *)this + 288) = 0;
    *(this + 74) = 0;
    *(this + 76) = 0;
    *(this + 78) = 0;
    *(this + 75) = 0;
    *(this + 77) = 0;
    *(this + 79) = 0;
    Int4::Set(this + 86, 0, 0, 0, 1065353216);
    Int4::Set(this + 90, 0, 0, 0, 1065353216);
    *(this + 98) = 0;
    *((uint8_t *)this + 376) = 0;
    *((uint8_t *)this + 377) = 0;
    *(this + 95) = 0;
    *(this + 96) = 0;
    *(this + 97) = a4;
    *(this + 99) = (void *)1072693248;
    *(this + 100) = a6;
    *((uint8_t *)this + 404) = 0;
    *((uint8_t *)this + 405) = 1;
    *((uint8_t *)this + 406) = 0;
    *((uint8_t *)this + 407) = 0;
    *((uint8_t *)this + 408) = 0;
    *((uint8_t *)this + 409) = 0;
    *((uint8_t *)this + 410) = 0;
    *((uint8_t *)this + 411) = 0;
    *((uint8_t *)this + 412) = 1;
    *((uint8_t *)this + 413) = 0;
    *((uint8_t *)this + 414) = 0;
    *this = &AnimClass::`vftable';
    *(this + 1) = &AnimClass::`vftable';
    *(this + 2) = &AnimClass::`vftable';
    *(this + 3) = &off_7E3328;
    *((uint8_t *)this + 220) = 0;
    AbstractClass::GenerateUniqueID((int)(this + 1));
    AudioController::Init(this + 104);
    AudioController::Init(this + 109);
    if ( g_AnimClassCount < dword_A8E9B0
    || (byte_A8E9B5 || !dword_A8E9B0)
    && dword_A8E9BC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(AnimClass_Array + 8))(
    &AnimClass_Array,
    dword_A8E9BC + dword_A8E9B0,
    0) )
    v11 = g_AnimClassCount++;
    *((uint32_t *)g_AnimClassPool + v11) = this;
    v12 = (int)*(this + 50);
    *((uint8_t *)this + 144) = 1;
    if ( v12 )
    *(this + 65) = *(void **)(v12 + 832);
    v17 = *(this + 50);
    if ( v17[176] == -1 )
    *((uint32_t *)*(this + 50) + 176) = *(__int16 *)((*(int (__thiscall **)(uint32_t *))(*v17 + 156))(v17) + 6);
    v18 = (int)*(this + 50);
    if ( *(uint8_t *)(v18 + 882) )
    *(int *)(v18 + 704) /= 2;
    v19 = (int)*(this + 50);
    if ( *(uint32_t *)(v19 + 700) == -1 )
    *(uint32_t *)(v19 + 700) = *(uint32_t *)(v19 + 704);
    if ( a7 )
    *(this + 64) = a7;
    else
    *(this + 64) = (void *)*((uint32_t *)*(this + 50) + 210);
    v20 = *(this + 50);
    v21 = v20[185];
    ProductionTimeMult = (char *)v20[172];
    if ( v21 || v20[186] )
    v23 = v20[186];
    if ( v21 <= v23 )
    ProductionTimeMult = (char *)Random::Range((uint32_t *)ScenarioClass_Instance + 134, v21, v23);
    if ( *((uint8_t *)*(this + 50) + 866) )
    ProductionTimeMult = Rules::GetProductionTimeMult((int *)g_GameModeOptions, (int)ProductionTimeMult);
    *(this + 45) = CurrentFrame;
    *(this + 46) = (void *)v67.Y;
    *(this + 47) = ProductionTimeMult;
    *(this + 48) = ProductionTimeMult;
    v24 = (int)*(this + 50);
    *(this + 43) = 0;
    v25 = *(uint32_t *)(v24 + 868);
    if ( v25 == 3 || v25 == 4 )
    ObjectClass::SetAnim(this, RulesClass_Instance->BuildBarracks[3]);
    else
    ObjectClass::SetZ((void*374 *)this);
    if ( a8 )
    *((uint8_t *)this + 288) = 1;
    v26 = (int)*(this + 50);
    if ( *(uint8_t *)(v26 + 881) || *((uint8_t *)this + 288) )
    *(this + 43) = (void *)(*(uint32_t *)(v26 + 700) - 1);
    *(this + 49) = (void *)-(int)*(this + 49);
    v27 = (int)*(this + 50);
    if ( *(uint8_t *)(v27 + 858) || *(uint8_t *)(v27 + 854) )
    *((uint8_t *)this + 404) = 1;
    if ( *(uint8_t *)(v27 + 854) )
    v50 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v53 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v28 = *((double *)*(this + 50) + 99);
    v29 = Math::RoundToInt(v28);
    v51 = (double)((int)abs32(v50) % v29) - *((double *)*(this + 50) + 101);
    v58 = (double)((int)abs32(v53) % v29) - *((double *)*(this + 50) + 101);
    v59 = v51;
    v60 = v28;
    v30 = -v51;
    if ( v58 < v30 )
    v58 = -v58;
    v59 = v30;
    v31 = (double)(int)(70 - abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 20));
    v64 = Math::RoundToInt(v31);
    LODWORD(v65) = Math::RoundToInt(v31);
    LODWORD(v66) = Math::RoundToInt((double)a3[2] - v31 * v60);
    ObjectClass::Deploy((void*374 *)this);
    if ( *(this + 51) )
    Coords = (uint32_t *)ObjectClass::GetCoords((void*374 *)this);
    v32 = (uint32_t *)(*(int (__thiscall **)(uint32_t, CoordStruct *))(*(uint32_t *)*(this + 51) + 72))(
    *(this + 51),
    &v69);
    v67.X = *v32 + *Coords;
    v33 = Coords[1] + v32[1];
    v34 = Coords[2] + v32[2];
    X = v67.X;
    v62 = v33;
    else
    v35 = (int *)ObjectClass::GetCoords((void*374 *)this);
    X = *v35;
    v62 = v35[1];
    v34 = v35[2];
    v36 = (int)*(this + 50);
    v63 = v34;
    AnimClass::InitRotation(
    this + 74,
    &X,
    *(uint32_t *)(v36 + 784),
    *(uint32_t *)(v36 + 788),
    1610612736,
    1073112678,
    0,
    0,
    &v58,
    0.0);
    else
    ObjectClass::Deploy((void*374 *)this);
    if ( *(this + 51) )
    v37 = (uint32_t *)ObjectClass::GetCoords((void*374 *)this);
    v38 = (uint32_t *)(*(int (__thiscall **)(uint32_t, CoordStruct *))(*(uint32_t *)*(this + 51) + 72))(
    *(this + 51),
    &out);
    v39 = *v37 + *v38;
    v40 = v37[1] + v38[1];
    v41 = v37[2] + v38[2];
    else
    v42 = (int *)ObjectClass::GetCoords((void*374 *)this);
    v39 = *v42;
    v40 = v42[1];
    v41 = v42[2];
    v62 = v40;
    X = v39;
    v63 = v41 + 10;
    v43 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v55 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v44 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v45 = (int)*(this + 50);
    v52 = v44;
    v57 = Math::RoundToInt(*(double *)(v45 + 808) + *(double *)(v45 + 808));
    v46 = (double)((int)abs32(v55) % v57) - *(double *)(v45 + 808);
    v56 = (double)((int)abs32(v43) % (int)Math::RoundToInt(v46)) + *(double *)(v45 + 792);
    v47 = (double)((int)abs32(v52) % v57) - *(double *)(v45 + 808);
    v66 = v56;
    *(float *)&v64 = v47;
    v65 = v46;
    AnimClass::InitRotation(
    this + 74,
    &X,
    *(uint32_t *)(v45 + 784),
    *(uint32_t *)(v45 + 788),
    1610612736,
    1073112678,
    0,
    0,
    &v64,
    0.0);
    else
    ObjectClass::Deploy((void*374 *)this);
    if ( *(this + 50) == (void *)RulesClass_Instance[1].BarrelDebris[1] )
    MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    a3,
    RulesClass_Instance[1].InfantryNuked / 256,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    0);
    MapClass::RevealArea1(
    (int *)&MapClass_Instance,
    a3,
    RulesClass_Instance[1].InfantryNuked / 256,
    HouseClass_Player,
    0,
    0,
    0,
    1,
    1);
    v48 = a5;
    if ( a5 <= 1 )
    v48 = 1;
    v49 = v48 * *((uint8_t *)*(this + 50) + 708);
    *((uint8_t *)this + 405) = v49;
    if ( (unsigned __int8)v49 <= 1u )
    v49 = 1;
    *((uint8_t *)this + 405) = v49;
    if ( !*(this + 97) )
    ProductionCompletionCallback((BuildingClass_Full *)this);
    return this;
    else
    v13 = (int)*(this + 51);
    if ( v13 )
    (*(void (__thiscall **)(int, void **))(*(uint32_t *)v13 + 96))(v13, this);
    BuildingClass::AimTurret(this, 0);
    Mixer::ReleaseChannel((int **)this + 104);
    if ( !*((uint8_t *)this + 408) )
    v14 = (int)*(this + 50);
    if ( v14 )
    if ( *(uint32_t *)(v14 + 764) != -1 )
    v15 = (*((int (__thiscall **)(void **, CoordStruct *))*this + 18))(this, &v67);
    StartAudioControllerAt(*((uint32_t *)*(this + 50) + 191), v15, (int)(this + 109));
    ObjectClass::Destroy((void*374 *)this);
    return this;
}

int  AnimClass::_vt46(int this)
{
    return *(uint32_t *)(this + 260) + ObjectClass::GetBoundingSize((void*374 *)this);
}

int * AnimClass::_vt18(#374 *this, int *a2)
{
    uint32_t *Coords; // esi
    uint32_t *v4; // eax
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int v8; // edx
    int v9; // edi
    int *v11; // edx
    CoordStruct v12; // [esp+14h] [ebp-Ch] BYREF
    if ( *((uint32_t *)this + 51) )
    Coords = (uint32_t *)ObjectClass::GetCoords(this);
    v4 = (uint32_t *)(*(int (__thiscall **)(uint32_t, CoordStruct *))(**((uint32_t **)this + 51) + 72))(
    *((uint32_t *)this + 51),
    &v12);
    v5 = *Coords + *v4;
    v6 = Coords[1];
    v7 = Coords[2];
    v8 = v4[1] + v6;
    v9 = v4[2];
    *a2 = v5;
    a2[1] = v8;
    a2[2] = v9 + v7;
    return a2;
    else
    v11 = (int *)ObjectClass::GetCoords(this);
    *a2 = *v11;
    a2[1] = v11[1];
    a2[2] = v11[2];
    return a2;
}

char  AnimClass::_vt65(int this, int a2, int a3, int a4)
{
    if ( *(uint32_t *)(this + 388) )
    return 0;
    else
    return ObjectClass::CalcDrawRect((void*374 *)this);
}

void  AnimClass::Render(uint32_t *this, int *a2, int *a3)
{
    int v4; // edi
    int v5; // ebx
    int v6; // eax
    int v7; // edi
    int v8; // ecx
    __int16 v9; // bx
    int v10; // eax
    int v11; // ebp
    int v12; // eax
    int v13; // ebp
    int v14; // eax
    unsigned __int8 v15; // di
    int v16; // eax
    __int16 v17; // ax
    int v18; // edi
    int v19; // ebx
    int v20; // eax
    int v21; // eax
    int v22; // ebx
    double v23; // st7
    double v24; // st6
    uint8_t *v25; // eax
    uint32_t *v26; // eax
    int v27; // ecx
    int v28; // eax
    char v29; // al
    uint32_t *v30; // eax
    __int16 *v31; // edi
    int v32; // ecx
    uint32_t *v33; // eax
    int v34; // eax
    int v35; // edx
    int v36; // ecx
    int v37; // eax
    int v38; // eax
    int v39; // eax
    char v40; // al
    int v41; // ebp
    uint32_t *v42; // eax
    uint32_t *v43; // eax
    uint32_t *v44; // eax
    int v45; // eax
    char *v46; // edx
    int v47; // eax
    int v48; // edx
    int v49; // ecx
    int v50; // eax
    int v51; // ecx
    int v52; // eax
    char *v53; // edx
    int v54; // eax
    int v55; // edx
    int v56; // ecx
    int v57; // eax
    int v58; // edx
    int v59; // ecx
    uint32_t *v60; // eax
    uint32_t *v61; // eax
    int v62; // eax
    uint32_t *FoundationSize; // eax
    int v64; // ecx
    int v65; // edi
    int v66; // edx
    int v67; // ebp
    int v68; // eax
    int v69; // edi
    int v70; // eax
    int v71; // edi
    int v72; // edx
    int v73; // eax
    int v74; // edx
    int v75; // eax
    int v76; // edx
    int v77; // eax
    int v78; // ebp
    int v79; // eax
    int v80; // [esp-20h] [ebp-130h]
    int v81; // [esp-20h] [ebp-130h]
    int v82; // [esp-18h] [ebp-128h]
    int v83; // [esp-18h] [ebp-128h]
    unsigned __int8 v84; // [esp+13h] [ebp-FDh]
    unsigned __int8 v85; // [esp+13h] [ebp-FDh]
    char v86; // [esp+13h] [ebp-FDh]
    int v87; // [esp+14h] [ebp-FCh]
    int v88; // [esp+14h] [ebp-FCh]
    int v89; // [esp+14h] [ebp-FCh]
    int v90; // [esp+14h] [ebp-FCh]
    int v91; // [esp+14h] [ebp-FCh]
    int v92; // [esp+14h] [ebp-FCh]
    uint32_t *v93; // [esp+14h] [ebp-FCh]
    int v94; // [esp+14h] [ebp-FCh]
    int v95; // [esp+14h] [ebp-FCh]
    unsigned __int8 v96; // [esp+1Ah] [ebp-F6h]
    unsigned __int8 v97; // [esp+1Ah] [ebp-F6h]
    unsigned __int8 v98; // [esp+1Bh] [ebp-F5h]
    unsigned __int8 v99; // [esp+1Bh] [ebp-F5h]
    int v100; // [esp+1Ch] [ebp-F4h] BYREF
    int v101; // [esp+20h] [ebp-F0h] BYREF
    int v102; // [esp+24h] [ebp-ECh]
    float v103; // [esp+28h] [ebp-E8h]
    int v104; // [esp+2Ch] [ebp-E4h]
    int v105[2]; // [esp+30h] [ebp-E0h] BYREF
    int v106; // [esp+38h] [ebp-D8h]
    int v107; // [esp+3Ch] [ebp-D4h]
    int v108; // [esp+40h] [ebp-D0h] BYREF
    int v109; // [esp+44h] [ebp-CCh]
    uint32_t v110[24]; // [esp+50h] [ebp-C0h] BYREF
    uint32_t v111[24]; // [esp+B0h] [ebp-60h] BYREF
    if ( byte_8A0DF0 && g_ZBufferDescriptor && (unsigned __int8)ObjectClass::StepCleanup(this, aRing1) )
    v4 = *(this + 45);
    v5 = *(this + 48);
    v6 = *(this + 47);
    if ( v4 != -1 )
    if ( (int)CurrentFrame - v4 >= v6 )
    v6 = 0;
    else
    v6 -= (int)CurrentFrame - v4;
    v7 = v5 + *(this + 43) * v5 - v6;
    v8 = v5 * (*(int (__thiscall **)(uint32_t *))(*this + 492))(this);
    v9 = v7 + 8;
    v10 = *a2 + 2 * (v7 + 8);
    v101 = *a2 - 2 * (v7 + 8);
    v106 = v10;
    v11 = a2[1];
    v107 = v7 + 8 + v11;
    v102 = v11 - (v7 + 8);
    v104 = (v8 - v7) << 8;
    v100 = v104 / v8;
    if ( v104 / v8 >= 0 )
    if ( v104 / v8 > 255 )
    v100 = 255;
    else
    *(float *)&v100 = 0.0;
    if ( v7 >= v8 / 3 )
    v12 = ((v8 - v7) << 8) / (v8 - v8 / 3);
    else
    v12 = (v7 << 8) / (v8 / 3);
    if ( v12 >= 0 )
    if ( v12 > 255 )
    v12 = 255;
    else
    v12 = 0;
    v13 = 2 * v12 / 3;
    v87 = 2 * v8 / 3;
    if ( v7 >= v87 )
    v14 = v104 / (v8 - v87);
    else
    v14 = (v7 << 8) / v87;
    v15 = v14;
    if ( v14 >= 0 )
    if ( v14 > 255 )
    v15 = -1;
    else
    v15 = 0;
    v16 = (*(int (__thiscall **)(uint32_t *))(*this + 464))(this);
    v17 = *((_WORD *)g_ZBufferDescriptor + 2)
    + *((_WORD *)g_ZBufferDescriptor + 18)
    - *((_WORD *)a2 + 2)
    - Map_VisibleRect
    + *(this + 64)
    + *(uint32_t *)(*(this + 50) + 836)
    - ZCoordToScreenY(v16)
    - 2;
    *(float *)&v104 = (double)(unsigned __int16)(v17 + v9) * 0.000015259022;
    v103 = (double)(unsigned __int16)(v17 - v9) * 0.000015259022;
    ColorStruct::SetRGB(v110, v100, v13, v15);
    ColorStruct::SetRGB(v111, v100, v13, v15);
    *(float *)&v88 = (float)v102;
    v18 = v88;
    *(float *)&v100 = (float)v101;
    v19 = v100;
    Tactical::SetCellTransform((char *)v110, 0, v100, v88, v104, 0, 0);
    *(float *)&v100 = (float)v107;
    Tactical::SetCellTransform((char *)v110, 1, v19, v100, SLODWORD(v103), 0, 1065353216);
    *(float *)&v89 = (float)v106;
    Tactical::SetCellTransform((char *)v110, 2, v89, v100, SLODWORD(v103), 1065353216, 1065353216);
    Tactical::SetCellTransform((char *)v111, 0, v19, v18, v104, 0, 0);
    Tactical::SetCellTransform((char *)v111, 1, v89, v100, SLODWORD(v103), 1065353216, 1065353216);
    Tactical::SetCellTransform((char *)v111, 2, v89, v18, v104, 1065353216, 0);
    StructTable::Append(dword_8A0E10, v110);
    StructTable::Append(dword_8A0E10, v111);
    return;
    if ( (unsigned int)dword_ABCD44 < PingPongBuffer::GetWriteOffset() && *(int *)(*(this + 50) + 724) > 1 )
    return;
    if ( *((uint8_t *)this + 413) )
    return;
    v20 = *(this + 50);
    if ( *(uint32_t *)(v20 + 724) > lParam || *((uint8_t *)this + 409) && *(uint8_t *)(v20 + 884) )
    return;
    v103 = COERCE_FLOAT((*(int (__thiscall **)(uint32_t *))(*this + 108))(this));
    if ( v103 == 0.0 )
    return;
    v21 = *(this + 50);
    v22 = *(this + 100);
    v90 = *(this + 43);
    v104 = v90 + *(uint32_t *)(v21 + 692);
    if ( *((uint8_t *)this + 281) )
    if ( *(uint8_t *)(v21 + 872) )
    v22 |= 6u;
    else
    v22 |= 4u;
    if ( *(uint32_t *)(v21 + 728) <= lParam )
    if ( !*(uint8_t *)(v21 + 874) )
    v28 = *(uint32_t *)(v21 + 748);
    if ( v28 <= 0 )
    v29 = *((uint8_t *)this + 376);
    if ( !v29 )
    goto LABEL_47;
    if ( v29 > 15 )
    return;
    if ( v29 > 10 )
    v22 |= 4u;
    goto LABEL_47;
    if ( v29 > 5 )
    v22 |= 4u;
    goto LABEL_47;
    else
    if ( *((char *)this + 376) >= 15 )
    return;
    if ( v28 != 25 )
    if ( v28 == 50 )
    v22 |= 4u;
    else if ( v28 == 75 )
    v22 |= 6u;
    goto LABEL_47;
    LABEL_46:
    v22 |= 2u;
    goto LABEL_47;
    if ( *((char *)this + 376) >= 15 )
    return;
    v23 = (double)v90;
    v24 = (double)*(int *)(v21 + 704);
    if ( v23 > v24 * 0.6 )
    v22 |= 6u;
    goto LABEL_47;
    if ( v23 > v24 * 0.4 )
    v22 |= 4u;
    goto LABEL_47;
    if ( v23 > v24 * 0.2 )
    goto LABEL_46;
    LABEL_47:
    if ( (v22 & 1) == 0 )
    BYTE1(v22) |= 8u;
    v101 = (*(int (__thiscall **)(uint32_t *))(*this + 456))(this);
    v25 = (uint8_t *)*(this + 50);
    v106 = 1000;
    if ( v25[853] )
    v105[0] = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + *((uint32_t *)HouseClass_Player + 22549)) + 780);
    if ( v25[861] )
    goto LABEL_78;
    v26 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 172))(this, &v108);
    v27 = *((__int16 *)Coord::To_Cell(&MapClass_Instance, v26) + 134);
    goto LABEL_77;
    if ( *((uint8_t *)this + 406) )
    v30 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 172))(this, &v108);
    LOWORD(v91) = *v30 / 256;
    HIWORD(v91) = v30[1] / 256;
    v100 = v91;
    v31 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v100);
    if ( !*((uint32_t *)v31 + 13) )
    TacticalClass::SetView((int)v31, 0, 0x10000, 0, 1000, 1000, 1000);
    v32 = *(this + 50);
    v105[0] = *((uint32_t *)v31 + 13);
    if ( !*(uint8_t *)(v32 + 861) )
    v106 = v31[134];
    else if ( *(this + 53) )
    v105[0] = *(this + 53);
    if ( !v25[861] )
    v106 = *(this + 63);
    else
    v105[0] = FileSystem_ANIM_PAL;
    if ( v25[865] )
    v105[0] = *(uint32_t *)(*(uint32_t *)BuildingTypeClass_AnimTable + 780);
    if ( !v25[861] )
    v33 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 172))(this, &v108);
    LOWORD(v92) = *v33 / 256;
    HIWORD(v92) = v33[1] / 256;
    v100 = v92;
    v27 = *((__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v100) + 133);
    LABEL_77:
    v106 = v27;
    LABEL_78:
    if ( *((uint8_t *)this + 404) )
    v34 = ZCoordToScreenY(v101);
    v35 = *a2;
    v36 = *(uint32_t *)(*(this + 50) + 836) + v34 + a2[1];
    v37 = *this;
    v102 = v36;
    v101 = v35;
    v38 = (*(int (__thiscall **)(uint32_t *))(v37 + 464))(this);
    v39 = ZCoordToScreenY(v38);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v105[0],
    SLODWORD(v103),
    v104,
    &v101,
    a3,
    9729,
    0,
    *(uint32_t *)(*(this + 50) + 836) - v39,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v40 = *((uint8_t *)this + 280);
    v41 = 0;
    *(float *)&v100 = 0.0;
    if ( !v40 )
    goto LABEL_99;
    v42 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 72))(this, &v108);
    v43 = Coord::To_Cell(&MapClass_Instance, v42);
    v44 = Cell::IsBridge(v43);
    v93 = v44;
    if ( !v44 )
    goto LABEL_99;
    if ( v44[165] )
    v45 = RulesClass_Instance[1].CMisl[10];
    v46 = (char *)RulesClass_Instance + 2 * v45;
    v101 = (int)&v46[v45];
    v98 = v46[v45 + 6260];
    v96 = v46[v45 + 6261];
    v84 = v46[v45 + 6262];
    v47 = DDraw::GetStatus() - 1;
    if ( v47 )
    v50 = v47 - 1;
    if ( v50 )
    LOBYTE(v50) = v96;
    goto LABEL_89;
    LOWORD(v41) = v98;
    v50 = v96;
    LOWORD(v49) = v84;
    LOWORD(v48) = v96;
    v41 = v49 | (32 * (v48 | (v41 << 6)));
    else
    v50 = v96;
    LOWORD(v49) = (unsigned __int8)v50 >> 1;
    LOWORD(v48) = v98;
    v48 *= 32;
    v51 = v48 | v49;
    LOWORD(v48) = v84;
    v49 = v48 | (v51 << 6);
    v41 |= v49;
    LABEL_89:
    LOWORD(v49) = v98;
    LOWORD(v48) = v84;
    LOWORD(v50) = (unsigned __int8)v50 >> 1;
    v41 |= v48 | (32 * ((32 * v49) | v50));
    v100 = v41;
    if ( !(*(unsigned __int8 (__thiscall **)(uint32_t *))(*v93 + 352))(v93) || v93[113] != 1 )
    goto LABEL_99;
    v52 = RulesClass_Instance[1].CMisl[13];
    v53 = (char *)RulesClass_Instance + 2 * v52;
    v101 = (int)&v53[v52];
    v99 = v53[v52 + 6260];
    v85 = v53[v52 + 6261];
    v97 = v53[v52 + 6262];
    v54 = DDraw::GetStatus() - 1;
    if ( v54 )
    v57 = v54 - 1;
    if ( v57 )
    LOBYTE(v57) = v85;
    goto LABEL_98;
    LOWORD(v55) = v99;
    v57 = v85;
    LOWORD(v56) = v85;
    v58 = v56 | (v55 << 6);
    LOWORD(v56) = v97;
    v55 = v56 | (32 * v58);
    v41 |= v55;
    else
    v57 = v85;
    LOWORD(v56) = (unsigned __int8)v57 >> 1;
    LOWORD(v55) = v99;
    v55 *= 32;
    v59 = v55 | v56;
    LOWORD(v55) = v97;
    v56 = v55 | (v59 << 6);
    v41 |= v56;
    LABEL_98:
    LOWORD(v56) = v99;
    LOWORD(v55) = v97;
    LOWORD(v57) = (unsigned __int8)v57 >> 1;
    v41 |= v55 | (32 * ((32 * v56) | v57));
    v100 = v41;
    LABEL_99:
    v60 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, int *))(*this + 72))(this, &v108);
    LOWORD(v94) = *v60 / 256;
    HIWORD(v94) = v60[1] / 256;
    v101 = v94;
    v61 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v101);
    if ( CellClass::QuickPassable(v61) )
    v41 = 0;
    *(float *)&v100 = 0.0;
    v62 = *(this + 50);
    if ( *(uint8_t *)(v62 + 859) )
    FoundationSize = Building::GetFoundationSize(&v108, 0);
    v64 = *a2;
    v65 = a2[1];
    v101 = FoundationSize[3];
    v66 = *this;
    v108 = v64;
    v105[0] = v64;
    v95 = v101 / 2;
    v67 = v65 - v101 / 2;
    v86 = 0;
    v68 = (*(int (__thiscall **)(uint32_t *))(v66 + 464))(this);
    v69 = *(this + 64) + *(uint32_t *)(*(this + 50) + 836) - ZCoordToScreenY(v68) - 50;
    BYTE1(v22) |= 0x20u;
    do
    v70 = v67 + *(uint32_t *)(*(this + 50) + 836);
    v105[0] = v108;
    v105[1] = v70;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    FileSystem_ANIM_PAL,
    SLODWORD(v103),
    v104,
    v105,
    &DSurface_ViewBounds,
    v22,
    0,
    v69,
    2,
    v106,
    v100,
    0,
    0,
    0,
    0);
    if ( v67 < 0 )
    v86 = 1;
    v67 -= v101;
    v69 -= v101 + v95;
    while ( !v86 );
    else if ( *(uint8_t *)(v62 + 873) )
    v109 = *(uint32_t *)(v62 + 836);
    v71 = a2[1];
    v101 = *a2;
    v82 = v106;
    v72 = *this;
    v102 = v109 + v71;
    v73 = (*(int (__thiscall **)(uint32_t *))(v72 + 464))(this);
    BYTE1(v22) |= 0x20u;
    v80 = *(this + 64) + *(uint32_t *)(*(this + 50) + 836) - ZCoordToScreenY(v73) - 3;
    DrawToSurfaceSHP(DSurface_Hidden_2, v105[0], SLODWORD(v103), v104, &v101, a3, v22, 0, v80, 0, v82, v41, 0, 0, 0, 0);
    else
    v74 = *a2;
    v102 = *(uint32_t *)(v62 + 836) + a2[1];
    v101 = v74;
    v83 = v106;
    v75 = (*(int (__thiscall **)(uint32_t *))(*this + 464))(this);
    v76 = *(this + 64) + *(uint32_t *)(*(this + 50) + 836) - ZCoordToScreenY(v75);
    v77 = v22;
    BYTE1(v77) = BYTE1(v22) | 0x20;
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v105[0],
    SLODWORD(v103),
    v104,
    &v101,
    a3,
    v77,
    0,
    v76 - 2,
    2,
    v83,
    v41,
    0,
    0,
    0,
    0);
    if ( *(uint8_t *)(*(this + 50) + 882) )
    v78 = *(__int16 *)(LODWORD(v103) + 6);
    v79 = (*(int (__thiscall **)(uint32_t *))(*this + 464))(this);
    v81 = -2 - ZCoordToScreenY(v79);
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v105[0],
    SLODWORD(v103),
    v104 + v78 / 2,
    a2,
    a3,
    v22 & 0xFFFFF9F8 | 0x601,
    0,
    v81,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

bool  AnimClass::_vt73(#374 *this, int a2)
{
    return (unsigned __int8)ObjectClass::UpdateProductionDisplay(this) != 0;
}

int *__stdcall AnimClass::_vt66(int a1)
{
    if ( (byte_89A190 & 1) == 0 )
    byte_89A190 |= 1u;
    dword_89A160 = 2147450879;
    atexit(nullsub_89);
    return &dword_89A160;
}

int  AnimClass::_vt122(char *this)
{
    float *v2; // esi
    int v3; // ebx
    int v4; // eax
    void **v5; // edi
    int *v6; // eax
    uint32_t *Coords; // eax
    uint32_t *v8; // edi
    uint32_t *v9; // esi
    uint32_t *v10; // eax
    int v11; // ebx
    int v12; // esi
    int v13; // eax
    int v14; // edx
    int v15; // eax
    int v16; // esi
    uint32_t *v17; // eax
    int v19; // [esp-8h] [ebp-60h]
    int v20; // [esp+1Ch] [ebp-3Ch] BYREF
    int v21; // [esp+20h] [ebp-38h]
    int v22; // [esp+24h] [ebp-34h]
    char v23[12]; // [esp+28h] [ebp-30h] BYREF
    int v24[3]; // [esp+34h] [ebp-24h] BYREF
    char v25[12]; // [esp+40h] [ebp-18h] BYREF
    uint32_t v26[3]; // [esp+4Ch] [ebp-Ch] BYREF
    v2 = (float *)(this + 296);
    v3 = JumpjetLocomotionClass::Update2(this + 296);
    v4 = *((uint32_t *)this + 50);
    v22 = v3;
    if ( *(uint8_t *)(v4 + 854) )
    v2[11] = v2[11] + *((double *)v2 + 1);
    if ( v3 == 1 )
    if ( *(uint32_t *)(*((uint32_t *)this + 50) + 768) )
    v5 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v5 )
    v6 = (int *)(*(int (__thiscall **)(char *, char *))(*(uint32_t *)this + 72))(this, v23);
    AnimClass::ctor(v5, *(void **)(*((uint32_t *)this + 50) + 768), v6, 0, 1, (void *)0x600, 0, 0);
    Coords = Coord::GetCoords(v2, v24);
    v8 = (uint32_t *)*((uint32_t *)Coord::To_Cell(&MapClass_Instance, Coords) + 57);
    if ( v8 )
    do
    v9 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, char *))(*v8 + 72))(v8, v25);
    v10 = Coord::GetCoords((float *)this + 74, v26);
    v11 = *((uint32_t *)this + 50);
    v12 = abs32(v10[1] - v9[1]) + abs32(*v10 - *v9);
    if ( v12 <= *(uint32_t *)(v11 + 820) )
    v13 = Math::RoundToInt(*(double *)(v11 + 680));
    v14 = *v8;
    v20 = v13;
    v19 = *(uint32_t *)(v11 + 816);
    v21 = v14;
    v15 = ZCoordToScreenY(v12);
    (*(void (__thiscall **)(uint32_t *, int *, int, int, uint32_t, uint32_t, uint32_t, uint32_t))(v21 + 364))(
    v8,
    &v20,
    v15,
    v19,
    0,
    0,
    0,
    0);
    v8 = (uint32_t *)v8[12];
    while ( v8 );
    v3 = v22;
    else if ( v3 == 2 )
    (*(void (__thiscall **)(char *))(*(uint32_t *)this + 248))(this);
    v16 = *(uint32_t *)this;
    v17 = Coord::GetCoords((float *)this + 74, v26);
    (*(void (__thiscall **)(char *, uint32_t *))(v16 + 436))(this, v17);
    return v3;
}

// 0x00424CB0
int  AnimClass::InWhichLayer_AttachedObjectLayer(uint32_t *this)
{
    int v2; // eax
    if ( *(this + 51) )
    return 2;
    v2 = *(this + 50);
    if ( v2 )
    return *(uint32_t *)(v2 + 868);
    else
    return 3;
}

int  AnimClass::_vt10(int this, int a2, int a3)
{
    int result; // eax
    int v5; // eax
    int v6; // edx
    int v7; // eax
    Object::Unlink((void*374 *)this);
    result = *(uint32_t *)(this + 204);
    if ( result == a2 && a2 )
    RemoveTarget(this);
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 204) + 96))(*(uint32_t *)(this + 204), this);
    v5 = *(uint32_t *)this;
    *(uint32_t *)(this + 204) = 0;
    *(uint8_t *)(this + 411) = 1;
    result = (*(int (__thiscall **)(int, uint32_t))(v5 + 292))(this, 0);
    if ( *(uint32_t *)(this + 200) == a2 )
    *(uint32_t *)(this + 200) = 0;
    if ( *(uint32_t *)(this + 380) == a2 )
    v6 = *(uint32_t *)this;
    *(uint32_t *)(this + 380) = 0;
    result = (*(int (__thiscall **)(int))(v6 + 248))(this);
    if ( *(uint32_t *)(this + 384) == a2 )
    v7 = *(uint32_t *)this;
    *(uint32_t *)(this + 380) = 0;
    return (*(int (__thiscall **)(int))(v7 + 248))(this);
    return result;
}

// 0x00425280
int  AnimClass::SaveLoad_Prefix(#374 *this, int a2, int a3)
{
    int Register; // edi
    int v4; // eax
    int v6; // eax
    int v7; // eax
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init((uint32_t *)a2, (int)&a3);
    __4type_info_AAEAAV0_ABV0__Z(&a3);
    *(uint32_t *)a2 = &AnimClass::`vftable';
    *(uint32_t *)(a2 + 4) = &AnimClass::`vftable';
    *(uint32_t *)(a2 + 8) = &AnimClass::`vftable';
    *(uint32_t *)(a2 + 12) = &off_7E3328;
    AudioController::Init((uint32_t *)(a2 + 416));
    AudioController::Init((uint32_t *)(a2 + 436));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 200));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 204));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 380));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a2 + 384));
    v4 = *(uint32_t *)(a2 + 216);
    if ( v4 <= -1 )
    if ( *(uint8_t *)(a2 + 220) )
    v6 = FileExtension::MapHandler((const char *)(a2 + 220));
    if ( v6 )
    v7 = (*(int (__thiscall **)(int, uint32_t))(*(uint32_t *)v6 + 24))(v6, 0);
    if ( v7 )
    *(uint32_t *)(a2 + 212) = *(uint32_t *)(v7 + 780);
    return Register;
    *(uint32_t *)(a2 + 212) = 0;
    else if ( v4 < g_AnimClass_SaveState )
    *(uint32_t *)(a2 + 212) = *(uint32_t *)(*((uint32_t *)BuildingTypeClass_AnimTable + v4) + 780);
    return Register;
    return Register;
}

// 0x004253B0
int __stdcall AnimClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int v3; // edx
    int v4; // eax
    char *v5; // ecx
    v3 = a1[53];
    if ( v3 && (v4 = g_AnimClass_SaveState - 1, g_AnimClass_SaveState - 1 >= 0) )
    v5 = (char *)BuildingTypeClass_AnimTable + 4 * v4;
    while ( v3 != *(uint32_t *)(*(uint32_t *)v5 + 780) )
    --v4;
    v5 -= 4;
    if ( v4 < 0 )
    goto LABEL_6;
    a1[54] = v4;
    else
    LABEL_6:
    a1[54] = -1;
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

// 0x00425410
int  AnimClass::ProcessPower(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ecx
    HouseClass::ProcessPower((void*374 *)this);
    v3 = *(uint32_t *)(this + 204);
    if ( v3 )
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(v3 + 4) + 16))(v3 + 4);
    Power::TimerProcess(v4);
    Power::TimerProcess(*(uint32_t *)(this + 208));
    Power::TimerProcess(*(uint32_t *)(this + 252));
    Power::TimerProcess(*(uint32_t *)(this + 256));
    Power::TimerProcess(*(uint32_t *)(this + 260));
    Power::TimerProcess(*(uint32_t *)(this + 388));
    Checksummer::Add_double(*(uint32_t *)(this + 392), *(uint32_t *)(this + 396));
    Power::TimerProcess(*(uint32_t *)(this + 400));
    LOBYTE(v5) = *(uint8_t *)(this + 404);
    Power::FlagProcess(a2, v5);
    v6 = Power::TimerProcess(*(unsigned __int8 *)(this + 405));
    LOBYTE(v6) = *(uint8_t *)(this + 406);
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = *(uint8_t *)(this + 407);
    Power::FlagProcess(a2, v7);
    LOBYTE(v8) = *(uint8_t *)(this + 411);
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = *(uint8_t *)(this + 412);
    Power::FlagProcess(a2, v9);
    LOBYTE(v10) = *(uint8_t *)(this + 414);
    return Power::FlagProcess(a2, v10);
}

int  AnimClass::_vt123(uint32_t *this)
{
    return *(uint32_t *)(*(this + 50) + 704);
}

char  AnimClass::_vt53(#374 *this)
{
    int v2; // eax
    uint32_t *v3; // eax
    uint32_t v5[3]; // [esp+4h] [ebp-Ch] BYREF
    v2 = *((uint32_t *)this + 50);
    if ( v2 && *(uint8_t *)(v2 + 853) )
    v5[0] = *((uint32_t *)this + 39);
    v5[1] = *((uint32_t *)this + 40);
    v5[2] = *((uint32_t *)this + 41);
    v3 = Coord::To_Cell(&MapClass_Instance, v5);
    v3[80] &= ~0x20000u;
    if ( !(unsigned __int8)ObjectClass::Undeploy(this) )
    return 0;
    RemoveTarget((int)this);
    return 1;
}

int  AnimClass::_vt62(void **this)
{
    int v2; // ecx
    int v3; // eax
    int v4; // eax
    uint8_t v6[12]; // [esp+4h] [ebp-Ch] BYREF
    v2 = (int)*(this + 51);
    if ( v2 )
    (*(void (__thiscall **)(int, void **))(*(uint32_t *)v2 + 96))(v2, this);
    BuildingClass::AimTurret(this, 0);
    Mixer::ReleaseChannel((int **)this + 104);
    if ( !*((uint8_t *)this + 408) )
    v3 = (int)*(this + 50);
    if ( v3 )
    if ( *(uint32_t *)(v3 + 764) != -1 )
    v4 = (*((int (__thiscall **)(void **, uint8_t *))*this + 18))(this, v6);
    StartAudioControllerAt(*((uint32_t *)*(this + 50) + 191), v4, (int)(this + 109));
    return ObjectClass::Destroy((void*374 *)this);
}

int  AnimClass::_vt116(uint32_t *this)
{
    uint32_t *v1; // eax
    int v2; // ecx
    int result; // eax
    v1 = this + 39;
    v2 = *(this + 51);
    result = v1[2];
    if ( v2 )
    result += *(uint32_t *)(v2 + 164);
    return result;
}

int  AnimClass::_vt60(void *this, uint32_t *a2)
{
    char v3; // bp
    uint8_t *v4; // esi
    int result; // eax
    v3 = Input::OffsetToDirection(a2);
    v4 = Coord::To_Cell(&MapClass_Instance, a2);
    if ( Map_MaxHeight + Cell::GetGroundHeight(a2) <= a2[2] && (*((uint32_t *)v4 + 80) & 0x100) != 0 )
    v4[296] |= 1 << v3;
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 56))(this);
    *((uint32_t *)v4 + 22) = result;
    else
    v4[292] |= 1 << v3;
    result = (*(int (__thiscall **)(void *))(*(uint32_t *)this + 56))(this);
    *((uint32_t *)v4 + 21) = result;
    return result;
}

char __stdcall AnimClass::_vt61(uint32_t *a1)
{
    char v1; // bl
    uint8_t *v2; // esi
    char result; // al
    v1 = Input::OffsetToDirection(a1);
    v2 = Coord::To_Cell(&MapClass_Instance, a1);
    if ( Cell::GetGroundHeight(a1) + Map_MaxHeight > a1[2] )
    result = ~(1 << v1) & v2[292];
    v2[292] = result;
    if ( (result & 0x1C) == 0 )
    *((uint32_t *)v2 + 21) = -1;
    else
    result = ~(1 << v1) & v2[296];
    v2[296] = result;
    if ( (result & 0x1C) == 0 )
    *((uint32_t *)v2 + 22) = -1;
    return result;
}

int AnimClass::_vt12()
{
    return 456;
}

int __stdcall AnimClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448643;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

