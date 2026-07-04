#include "buildinglightclass.hpp"

int * BuildingLightClass::CTOR(int *this, int a2)
{
    int v3; // edx
    int v4; // eax
    uint32_t *Value; // eax
    double v6; // kr00_8
    double v7; // st7
    double v8; // st7
    int v9; // eax
    int *v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // ecx
    int v14; // edi
    int v15; // eax
    double v16; // st7
    double v17; // st7
    int v18; // eax
    int *v19; // eax
    int v20; // edx
    int v21; // eax
    int v22; // eax
    int **v23; // edx
    bool v24; // zf
    signed int v25; // eax
    int v27; // [esp-8h] [ebp-68h]
    int v28; // [esp-8h] [ebp-68h]
    int v29; // [esp-4h] [ebp-64h]
    int v30; // [esp+18h] [ebp-48h]
    double v31; // [esp+18h] [ebp-48h]
    double v32; // [esp+18h] [ebp-48h]
    double v33; // [esp+20h] [ebp-40h]
    double v34; // [esp+28h] [ebp-38h] BYREF
    double v35; // [esp+30h] [ebp-30h]
    int v36; // [esp+3Ch] [ebp-24h]
    int v37; // [esp+40h] [ebp-20h]
    int v38; // [esp+44h] [ebp-1Ch]
    int v39; // [esp+48h] [ebp-18h] BYREF
    int v40; // [esp+4Ch] [ebp-14h]
    int v41; // [esp+50h] [ebp-10h]
    uint32_t v42[3]; // [esp+54h] [ebp-Ch] BYREF
    ObjectClass::ctor(this);
    *(this + 44) = 0;
    *(this + 45) = 0;
    *(this + 46) = dword_89C510;
    *(this + 47) = dword_89C514;
    *(this + 48) = dword_89C518;
    *(this + 49) = dword_89C510;
    *(this + 50) = dword_89C514;
    v3 = dword_89C518;
    *(this + 52) = 0;
    *(this + 53) = 0;
    *(this + 51) = v3;
    *((uint8_t *)this + 216) = 0;
    *(this + 55) = 0;
    *(this + 56) = 0;
    *(this + 57) = a2;
    *this = (int)&BuildingLightClass::`vftable';
    *(this + 1) = (int)&BuildingLightClass::`vftable';
    *(this + 2) = (int)&BuildingLightClass::`vftable';
    *(this + 3) = (int)&BuildingLightClass::`vftable';
    if ( dword_8B41A0 < dword_8B4198
    || (byte_8B419D || !dword_8B4198)
    && dword_8B41A4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8B4190 + 8))(
    &dword_8B4190,
    dword_8B4198 + dword_8B41A4,
    0) )
    v4 = dword_8B41A0++;
    *((uint32_t *)dword_8B4194 + v4) = this;
    if ( a2 )
    v36 = *(uint32_t *)(a2 + 156);
    v37 = *(uint32_t *)(a2 + 160);
    v30 = RulesClass_Instance->BuildPower[1];
    v38 = *(uint32_t *)(a2 + 164);
    Value = ProgressTimer::GetValue((_WORD *)(a2 + 904), (uint32_t *)&v34 + 1);
    v29 = v38;
    v6 = (double)(*(__int16 *)Value - 0x3FFF) * -0.00009587672516830327;
    v31 = (double)v30;
    v35 = (double)v37;
    v7 = Math::SinCos(v6);
    v27 = Math::RoundToInt(v35 - v7 * v31);
    v8 = Math::ArcTan2(v6);
    v9 = Math::RoundToInt(v8 * v31 + (double)v36);
    v10 = Coord3D::Set(v42, v9, v27, v29);
    v39 = *v10;
    v40 = v10[1];
    v11 = v40;
    v12 = v10[2];
    *(this + 49) = v39;
    *(this + 50) = v11;
    v41 = v12;
    *(this + 51) = v12;
    v13 = *(uint32_t *)(a2 + 160);
    v14 = *(uint32_t *)(a2 + 164);
    v36 = *(uint32_t *)(a2 + 156);
    v15 = RulesClass_Instance->BuildPower[0];
    v37 = v13;
    LODWORD(v31) = -v15;
    v33 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(a2 + 904), (uint32_t *)&v34 + 1) - 0x3FFF)
    * -0.00009587672516830327;
    v32 = (double)SLODWORD(v31);
    v35 = (double)v37;
    v16 = Math::SinCos(v33);
    v28 = Math::RoundToInt(v35 - v16 * v32);
    v17 = Math::ArcTan2(v33);
    v18 = Math::RoundToInt(v17 * v32 + (double)v36);
    v19 = Coord3D::Set(v42, v18, v28, v14);
    *(this + 46) = *v19;
    *(this + 47) = v19[1];
    v20 = v19[2];
    v21 = *this;
    *(this + 48) = v20;
    (*(void (__thiscall **)(int *, int *))(v21 + 436))(this, &v39);
    v39 = *(this + 39);
    v40 = *(this + 40);
    v41 = *(this + 41);
    if ( (unsigned __int8)ObjectClass::Deploy((void*374 *)this) )
    ObjectClass::SetDeployState((int)this, 0);
    BuildingLightClass::FindTarget(this, (uint32_t *)1);
    v22 = 0;
    if ( dword_8B41A0 <= 0 )
    LABEL_14:
    v22 = -1;
    else
    v23 = (int **)dword_8B4194;
    while ( *v23 != this )
    ++v22;
    ++v23;
    if ( v22 >= dword_8B41A0 )
    goto LABEL_14;
    v25 = v22 & 0x80000001;
    v24 = v25 == 0;
    if ( v25 < 0 )
    v24 = (((uint8_t)v25 - 1) | 0xFFFFFFFE) == -1;
    *((uint8_t *)this + 216) = !v24;
    return this;
}

char  BuildingLightClass::Draw_Start(int *this, int a2, int a3)
{
    int v4; // eax
    int v5; // ecx
    uint8_t *v6; // edi
    uint32_t *v7; // eax
    uint32_t *v8; // edi
    uint32_t *v9; // eax
    int *v10; // eax
    double v11; // st7
    int v12; // ebp
    uint32_t *v13; // edi
    uint32_t *v14; // eax
    int *v15; // eax
    int v16; // ebx
    int v17; // edi
    int v18; // eax
    uint32_t *v19; // edi
    int *v20; // edi
    int v21; // ebp
    int *v22; // ecx
    int v23; // eax
    int *v24; // eax
    int v25; // ebx
    int v26; // eax
    uint32_t *v27; // eax
    float *v28; // eax
    int v29; // eax
    float *v30; // eax
    double v31; // st7
    float v32; // edx
    int v33; // eax
    double v34; // st7
    int v35; // ebp
    int v36; // eax
    double v37; // st7
    int v38; // esi
    int v39; // eax
    float *v40; // eax
    float v41; // ecx
    int v42; // esi
    int v43; // ebp
    int v44; // esi
    int v45; // eax
    int v46; // esi
    int v47; // ecx
    int v48; // edi
    int v49; // ebx
    int v50; // ebp
    int v51; // eax
    int v52; // ebp
    int v53; // eax
    float v55; // [esp+1Ch] [ebp-D8h]
    float v56; // [esp+1Ch] [ebp-D8h]
    float v57; // [esp+30h] [ebp-C4h]
    uint32_t *Block; // [esp+34h] [ebp-C0h]
    void *Blocka; // [esp+34h] [ebp-C0h]
    float Blockb; // [esp+34h] [ebp-C0h]
    float v61; // [esp+38h] [ebp-BCh] BYREF
    float v62; // [esp+3Ch] [ebp-B8h]
    float v63; // [esp+40h] [ebp-B4h]
    int v64; // [esp+44h] [ebp-B0h]
    int v65; // [esp+48h] [ebp-ACh] BYREF
    int v66; // [esp+4Ch] [ebp-A8h]
    int v67; // [esp+50h] [ebp-A4h]
    int v68; // [esp+54h] [ebp-A0h] BYREF
    int v69; // [esp+58h] [ebp-9Ch]
    int v70; // [esp+5Ch] [ebp-98h]
    int v71; // [esp+60h] [ebp-94h] BYREF
    int v72; // [esp+64h] [ebp-90h]
    int v73; // [esp+68h] [ebp-8Ch] BYREF
    float v74; // [esp+6Ch] [ebp-88h]
    int v75; // [esp+70h] [ebp-84h] BYREF
    float v76; // [esp+74h] [ebp-80h]
    float v77; // [esp+78h] [ebp-7Ch]
    int v78[2]; // [esp+7Ch] [ebp-78h] BYREF
    float v79[3]; // [esp+84h] [ebp-70h] BYREF
    double v80; // [esp+90h] [ebp-64h] BYREF
    uint32_t v81[3]; // [esp+9Ch] [ebp-58h] BYREF
    uint32_t v82[3]; // [esp+A8h] [ebp-4Ch] BYREF
    float v83[4]; // [esp+B4h] [ebp-40h] BYREF
    float v84[12]; // [esp+C4h] [ebp-30h] BYREF
    v4 = *(this + 55);
    if ( v4 )
    v5 = *(this + 57);
    if ( v5 )
    v4 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 44))(v5);
    if ( v4 == 6 )
    v6 = (uint8_t *)*(this + 57);
    if ( v6 )
    LOBYTE(v4) = v6[144];
    if ( (uint8_t)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(uint32_t))(*(uint32_t *)v6 + 848))(*(this + 57));
    if ( (uint8_t)v4 )
    LOBYTE(v4) = v6[1767];
    if ( !(uint8_t)v4 )
    if ( (*(uint32_t *)ScenarioClass_Instance & 0x1000) == 0
    || (v61 = *((float *)this + 39),
    v62 = *((float *)this + 40),
    v63 = *((float *)this + 41),
    LOBYTE(v4) = Game::Stub3((int)&v61),
    !(uint8_t)v4) )
    v7 = __2_YAPAXI_Z(0x18u);
    if ( v7 )
    Block = ObjectClass::RegisterInArray(v7, *(this + 39), *(this + 40), *(this + 41), 16);
    else
    Block = 0;
    v8 = (uint32_t *)(*(int (__thiscall **)(uint32_t, int *))(*(uint32_t *)*(this + 57) + 72))(
    *(this + 57),
    &v68);
    v9 = (uint32_t *)(*(int (__thiscall **)(int *, float *))(*this + 72))(this, &v61);
    v10 = Vector3::Subtract(v9, &v65, v8);
    v11 = Math::Sqrt(
    (double)*v10 * (double)*v10
    + (double)v10[1] * (double)v10[1]
    + (double)v10[2] * (double)v10[2]);
    v12 = Math::RoundToInt(v11);
    v13 = (uint32_t *)(*(int (__thiscall **)(uint32_t, int *))(*(uint32_t *)*(this + 57) + 72))(
    *(this + 57),
    &v68);
    v14 = (uint32_t *)(*(int (__thiscall **)(int *, float *))(*this + 72))(this, &v61);
    v15 = Vector3::Subtract(v14, &v65, v13);
    v16 = Coord::Length(v15);
    v17 = RulesClass_Instance->BuildPower[1];
    if ( v16 >= v17 )
    v64 = (v16 - v17) / ((RulesClass_Instance->BuildPower[0] - v17) / 10);
    else
    v64 = 0;
    if ( v12 > v17 && *(this + 55) == 3 )
    v18 = v64 + 80 <= 0 ? 0 : v64 + 80;
    if ( v18 >= 89 )
    v18 = 89;
    v19 = Block;
    Block[3] = v18;
    else
    v19 = Block;
    Block[3] = 80;
    BuildingLight::CalculateShading(v19);
    if ( v19 )
    BuildingLightQueue::RemoveEntry(v19);
    __3_YAXPAX_Z(v19);
    v20 = this + 39;
    v21 = *(this + 39);
    v69 = *(this + 40);
    v22 = (int *)*(this + 57);
    v23 = *v22;
    v70 = *(this + 41);
    v24 = (int *)(*(int (__thiscall **)(int *, float *))(v23 + 72))(v22, &v61);
    v65 = *v24;
    v66 = v24[1];
    v25 = v24[2];
    v26 = *this;
    v67 = v25;
    v27 = (uint32_t *)(*(int (__thiscall **)(int *, double *))(v26 + 72))(this, &v80);
    v28 = (float *)Coord::Subtract(v83, *v27 - v65, v27[1] - v66, v27[2] - v25);
    v61 = *v28;
    v62 = v28[1];
    v63 = v28[2];
    Blocka = (void *)Coord::Length((int *)&v61);
    v29 = BuildingLightClass::CalculateDistanceIntensity((uint32_t **)this);
    v4 = RulesClass_Instance->BuildBarracks[0] + Math::RoundToInt((double)v29 * 5.973333333333333);
    if ( (int)Blocka >= v4 )
    v80 = BuildingLight::CalcIntensity((double)v4 / (double)(int)Blocka);
    Matrix3x4::Identity(v84);
    v55 = v80;
    Matrix2D::Rotate(v84, v55);
    v79[0] = (float)(v21 - v65);
    v79[1] = (float)(v69 - v66);
    v79[2] = (float)(v70 - v25);
    v30 = TransformMatrix3x4Point(v83, v84, v79);
    v31 = (double)v65;
    v32 = v30[1];
    v61 = *v30;
    v62 = v32;
    Blockb = v31;
    v63 = v30[2];
    v33 = Math::RoundToInt(v31 + v61);
    v34 = (double)v66;
    v35 = v33;
    v77 = v34;
    v36 = Math::RoundToInt(v34 + v62);
    v37 = (double)v67;
    v38 = v36;
    v57 = v37;
    v39 = Math::RoundToInt(v37 + v63);
    v82[0] = v35;
    v82[1] = v38;
    v82[2] = v39;
    Matrix3x4::Identity(v84);
    v56 = -v80;
    Matrix2D::Rotate(v84, v56);
    v40 = TransformMatrix3x4Point(v83, v84, v79);
    v41 = v40[1];
    v61 = *v40;
    v62 = v41;
    v63 = v40[2];
    v42 = Math::RoundToInt(Blockb + v61);
    v43 = Math::RoundToInt(v77 + v62);
    v81[2] = Math::RoundToInt(v57 + v63);
    v81[0] = v42;
    v81[1] = v43;
    Coord::To_Screen(TacticalClass_Instance, v82, &v75);
    Coord::To_Screen(TacticalClass_Instance, v81, &v73);
    v68 = v65;
    v70 = v25 + 430;
    v69 = v66;
    Coord::To_Screen(TacticalClass_Instance, &v68, &v71);
    v75 += DSurface_ViewBounds;
    LODWORD(v74) += Map_VisibleRect;
    v72 += Map_VisibleRect;
    v78[1] = v72;
    LODWORD(v76) += Map_VisibleRect;
    v73 += DSurface_ViewBounds;
    v71 += DSurface_ViewBounds;
    v78[0] = v71;
    v44 = ZCoordToScreenY(v25 + 400);
    v45 = v20[1];
    v46 = -v44;
    v47 = v20[2] + 250;
    v68 = *v20;
    v69 = v45;
    v48 = -(int)ZCoordToScreenY(v47);
    if ( ClipLine(&v71, &v75, &DSurface_ViewBounds) )
    v49 = v64;
    v50 = *(uint32_t *)DSurface_Hidden_2;
    v51 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, uint32_t))(*(uint32_t *)DSurface_Hidden_2 + 120))(
    DSurface_Hidden_2,
    v83,
    &v71,
    &v75,
    75 - 6 * v64,
    v46,
    v48,
    0);
    (*(void (__thiscall **)(int, int))(v50 + 56))(DSurface_Hidden_2, v51);
    else
    v49 = v64;
    LOBYTE(v4) = ClipLine(v78, &v73, &DSurface_ViewBounds);
    if ( (uint8_t)v4 )
    v52 = *(uint32_t *)DSurface_Hidden_2;
    v53 = (*(int (__thiscall **)(int, float *, int *, int *, int, int, int, uint32_t))(*(uint32_t *)DSurface_Hidden_2 + 120))(
    DSurface_Hidden_2,
    v83,
    v78,
    &v73,
    75 - 6 * v49,
    v46,
    v48,
    0);
    LOBYTE(v4) = (*(int (__thiscall **)(int, int))(v52 + 56))(DSurface_Hidden_2, v53);
    return v4;
}

char  BuildingLightClass::SD_vt23(int **this)
{
    int *v2; // ecx
    int *v3; // eax
    int *v4; // ebx
    uint32_t *v5; // esi
    uint32_t *v6; // eax
    int v7; // ebp
    int v8; // ecx
    int v9; // edx
    int v10; // eax
    float v11; // eax
    double v12; // st7
    int *v13; // ebx
    int v14; // ecx
    int v15; // eax
    int *v16; // ecx
    int v17; // esi
    int v18; // ebx
    int v19; // ebp
    double v20; // st7
    unsigned __int8 v22; // c0
    unsigned __int8 v23; // c3
    int v24; // eax
    int v25; // ecx
    float *v26; // eax
    int v27; // esi
    int v28; // ebx
    double v29; // st7
    double v30; // st7
    char v31; // al
    double v33; // st7
    unsigned __int8 v34; // c0
    unsigned __int8 v35; // c3
    double v36; // st7
    double v37; // st7
    double v38; // st7
    int v39; // edx
    int v40; // esi
    int v41; // eax
    float *v42; // eax
    double v43; // st7
    int v44; // eax
    int v45; // esi
    uint32_t *v46; // esi
    uint32_t *v47; // eax
    int *v48; // eax
    double v49; // st7
    int v50; // eax
    RulesClass *v51; // ebp
    int v52; // esi
    int v53; // edx
    int v54; // eax
    uint32_t *v55; // ecx
    __int16 v56; // ax
    int v57; // ebx
    uint32_t *v58; // esi
    int v59; // edx
    int v60; // ebp
    int v61; // ebx
    int *v62; // eax
    int v63; // ecx
    int v64; // edx
    int v65; // eax
    double v66; // st7
    float v68; // [esp+18h] [ebp-D4h]
    float v69; // [esp+18h] [ebp-D4h]
    int v70; // [esp+30h] [ebp-BCh]
    char v71; // [esp+37h] [ebp-B5h]
    float v72; // [esp+38h] [ebp-B4h] BYREF
    float v73; // [esp+3Ch] [ebp-B0h]
    float v74; // [esp+40h] [ebp-ACh]
    int v75; // [esp+44h] [ebp-A8h] BYREF
    int v76; // [esp+48h] [ebp-A4h]
    int v77; // [esp+4Ch] [ebp-A0h]
    int v78; // [esp+50h] [ebp-9Ch]
    int v79; // [esp+54h] [ebp-98h] BYREF
    int v80; // [esp+58h] [ebp-94h]
    int v81; // [esp+5Ch] [ebp-90h]
    int v82; // [esp+60h] [ebp-8Ch]
    int v83; // [esp+64h] [ebp-88h]
    uint32_t v84[3]; // [esp+68h] [ebp-84h] BYREF
    int v85; // [esp+74h] [ebp-78h]
    uint32_t *v86; // [esp+78h] [ebp-74h]
    int v87; // [esp+7Ch] [ebp-70h] BYREF
    int v88[3]; // [esp+80h] [ebp-6Ch] BYREF
    float v89[3]; // [esp+8Ch] [ebp-60h] BYREF
    uint32_t v90[3]; // [esp+98h] [ebp-54h] BYREF
    float v91[3]; // [esp+A4h] [ebp-48h] BYREF
    float v92[12]; // [esp+B0h] [ebp-3Ch] BYREF
    char v93[12]; // [esp+E0h] [ebp-Ch] BYREF
    v2 = *(this + 57);
    if ( !v2 || !*((uint8_t *)v2 + 144) )
    LOBYTE(v44) = ((int (__thiscall *)(int **))(*this)[62])(this);
    return v44;
    if ( *(this + 55) == (int *)1 )
    v30 = *((double *)this + 26) + *((double *)this + 22);
    v31 = *((uint8_t *)this + 216);
    *((double *)this + 22) = v30;
    if ( v31 )
    v33 = *((double *)this + 26);
    if ( !(v34 | v35) )
    v36 = v33 - *(double *)RulesClass_Instance->BuildRefinery;
    *((double *)this + 26) = v36;
    if ( v36 < 0.0 )
    *(this + 52) = 0;
    *(this + 53) = 0;
    *((uint8_t *)this + 216) = 0;
    goto LABEL_28;
    if ( v33 < *(double *)&RulesClass_Instance->BuildPower[2] )
    v37 = *(double *)RulesClass_Instance->BuildRefinery + *((double *)this + 26);
    LABEL_27:
    *((double *)this + 26) = v37;
    else
    if ( v30 < *(double *)&RulesClass_Instance->BuildRefinery[2] * -0.5 )
    v38 = *(double *)RulesClass_Instance->BuildRefinery + *((double *)this + 26);
    *((double *)this + 26) = v38;
    if ( v38 > 0.0 )
    *(this + 52) = 0;
    *(this + 53) = 0;
    *((uint8_t *)this + 216) = 1;
    goto LABEL_28;
    if ( -*(double *)&RulesClass_Instance->BuildPower[2] < *((double *)this + 26) )
    v37 = *((double *)this + 26) - *(double *)RulesClass_Instance->BuildRefinery;
    goto LABEL_27;
    LABEL_28:
    Matrix3x4::Identity(v92);
    v69 = *((double *)this + 22);
    Matrix2D::Rotate(v92, v69);
    v39 = (int)*(this + 50);
    v40 = (int)*(this + 47);
    v41 = (char *)*(this + 51) - (char *)*(this + 48);
    v72 = (float)((char *)*(this + 49) - (char *)*(this + 46));
    v73 = (float)(v39 - v40);
    v74 = (float)v41;
    v42 = TransformMatrix3x4Point(v89, v92, &v72);
    v43 = (double)(int)*(this + 46);
    v72 = *v42;
    v73 = v42[1];
    v74 = v42[2];
    v27 = Math::RoundToInt(v43 + v72);
    v28 = Math::RoundToInt((double)(int)*(this + 47) + v73);
    v29 = (double)(int)*(this + 48) + v74;
    LABEL_29:
    v15 = Math::RoundToInt(v29);
    v79 = v27;
    v80 = v28;
    goto LABEL_30;
    if ( *(this + 55) == (int *)2 )
    v16 = v2 + 39;
    v17 = *v16;
    v75 = *v16;
    v18 = v16[1];
    v76 = v18;
    v19 = v16[2];
    v77 = v19;
    v20 = *(double *)&RulesClass_Instance->BuildPower[2] * 4.0 + *((double *)this + 22);
    *((double *)this + 22) = v20;
    if ( !(v22 | v23) )
    *((double *)this + 22) = v20 - 6.283185307179586;
    Matrix3x4::Identity(v92);
    v68 = *((double *)this + 22);
    Matrix2D::Rotate(v92, v68);
    v24 = (int)*(this + 50);
    v25 = (int)*(this + 51);
    v72 = (float)((int)*(this + 49) - v17);
    v73 = (float)(v24 - v18);
    v74 = (float)(v25 - v19);
    v26 = TransformMatrix3x4Point(v91, v92, &v72);
    v72 = *v26;
    v73 = v26[1];
    v74 = v26[2];
    v27 = Math::RoundToInt((double)v75 + v72);
    v28 = Math::RoundToInt((double)v76 + v73);
    v29 = (double)v77 + v74;
    goto LABEL_29;
    if ( *(this + 55) == (int *)3 )
    v4 = *(this + 56);
    if ( !v4 )
    goto LABEL_12;
    if ( !*((uint8_t *)v4 + 144) )
    goto LABEL_12;
    v5 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(*v2 + 72))(v2, v93);
    v6 = (uint32_t *)(*(int (__thiscall **)(int *, int *))(*v4 + 72))(v4, &v75);
    v7 = v5[1];
    v8 = *v6 - *v5;
    v9 = v6[1];
    v10 = v6[2];
    v72 = *(float *)&v8;
    LODWORD(v11) = v10 - v5[2];
    LODWORD(v73) = v9 - v7;
    v74 = v11;
    v12 = Math::Sqrt(
    (double)v8 * (double)v8
    + (double)SLODWORD(v11) * (double)SLODWORD(v11)
    + (double)(v9 - v7) * (double)(v9 - v7));
    if ( (int)Math::RoundToInt(v12) >= RulesClass_Instance->BuildPower[0] )
    LABEL_12:
    BuildingLightClass::FindTarget(this, (uint32_t *)1);
    goto LABEL_31;
    v13 = v4 + 39;
    v88[0] = *v13;
    v88[1] = v13[1];
    v14 = v13[2];
    v84[1] = *(this + 39);
    v88[2] = v14;
    v84[2] = *(this + 40);
    v85 = (int)*(this + 41);
    v3 = Color::RGBFromFloat(v90, (int)v88, 0.25);
    else
    v3 = (int *)(this + 39);
    v79 = *v3;
    v80 = v3[1];
    v15 = v3[2];
    LABEL_30:
    v81 = v15;
    LABEL_31:
    ((void (__thiscall *)(int **, int *))(*this)[109])(this, &v79);
    v44 = (*(int (__thiscall **)(uint32_t))(**(this + 57) + 44))(*(this + 57));
    if ( v44 == 6 )
    v45 = (int)*(this + 57);
    v82 = v45;
    else
    v82 = 0;
    v45 = 0;
    if ( *(this + 55) == (int *)1 )
    if ( v45 )
    LOBYTE(v44) = *(uint8_t *)(v45 + 144);
    if ( (uint8_t)v44 )
    LOBYTE(v44) = (*(int (__thiscall **)(int))(*(uint32_t *)v45 + 848))(v45);
    if ( (uint8_t)v44 )
    v44 = *(uint32_t *)(v45 + 52);
    if ( v44 )
    v71 = 0;
    v72 = *(float *)((int (__thiscall *)(int **, uint32_t *))(*this)[110])(this, v84);
    v46 = (uint32_t *)(*(int (__thiscall **)(uint32_t, float *))(**(this + 57) + 72))(*(this + 57), v89);
    v47 = (uint32_t *)((int (__thiscall *)(int **, float *))(*this)[18])(this, v91);
    v48 = Coord::Subtract(v90, *v47 - *v46, v47[1] - v46[1], v47[2] - v46[2]);
    v75 = *v48;
    v76 = v48[1];
    v77 = v48[2];
    v49 = Math::Sqrt((double)v75 * (double)v75 + (double)v77 * (double)v77 + (double)v76 * (double)v76);
    v50 = Math::RoundToInt(v49);
    v51 = RulesClass_Instance;
    v52 = RulesClass_Instance->BuildPower[1];
    if ( v50 >= v52 )
    v78 = (v50 - v52) / ((RulesClass_Instance->BuildPower[0] - v52) / 10);
    else
    v78 = 0;
    v53 = Math::RoundToInt((double)v78 * 5.973333333333333) + v51->BuildBarracks[0] + 30;
    v54 = (int)*(this + 57);
    v84[0] = v53;
    v55 = *(uint32_t **)(v54 + 540);
    v56 = -1;
    v86 = v55;
    v70 = -1;
    do
    v57 = -1;
    v83 = -1;
    LOWORD(v78) = LOWORD(v72) + v56;
    do
    HIWORD(v78) = v57 + HIWORD(v72);
    v87 = v78;
    v58 = (uint32_t *)*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v87) + 57);
    if ( v58 )
    do
    if ( ((*(int (__thiscall **)(uint32_t *))(*v58 + 44))(v58) == 15
    || (*(int (__thiscall **)(uint32_t *))(*v58 + 44))(v58) == 1)
    && !Object::IsAlliedWithObjectHouse(v86, (int)v58) )
    v59 = *v58;
    v60 = (int)*(this + 39);
    v61 = (int)*(this + 40);
    v85 = (int)*(this + 41);
    v62 = (int *)(*(int (__thiscall **)(uint32_t *, float *))(v59 + 72))(v58, v89);
    v63 = *v62;
    v64 = v62[1];
    v65 = v62[2];
    v75 = v63 - v60;
    v76 = v64 - v61;
    v77 = v65 - v85;
    v66 = Math::Sqrt(
    (double)(v65 - v85) * (double)(v65 - v85)
    + (double)(v64 - v61) * (double)(v64 - v61)
    + (double)v75 * (double)v75);
    if ( (int)Math::RoundToInt(v66) < v84[0] )
    v71 = 1;
    v58 = (uint32_t *)v58[12];
    while ( v58 );
    v57 = v83;
    v83 = ++v57;
    while ( v57 < 2 );
    v56 = ++v70;
    while ( v70 < 2 );
    LOBYTE(v44) = v71;
    if ( v71 )
    LOBYTE(v44) = TeamClass::Update_0(*(void ***)(v82 + 52), 35, v82, dword_89C4F0, 0, 0);
    return v44;
}

// 0x00436900
int BuildingLightClass::SD_vt12()
{
    return 232;
}

// 0x00436910
int __stdcall BuildingLightClass::SD_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1417814616;
    a2[1] = 298965160;
    a2[2] = 1610638004;
    a2[3] = 2041169559;
    return 0;
}

// 0x00436950
int  BuildingLightClass::SD_vt05(#374 *this, uint32_t *a2, int a3)
{
    int Register; // edi
    Register = BuildingClass::SaveLoad_Register(this);
    if ( Register >= 0 )
    if ( a2 )
    ObjectClass::Init(a2, (int)&a3);
    *a2 = &BuildingLightClass::`vftable';
    a2[1] = &BuildingLightClass::`vftable';
    a2[2] = &BuildingLightClass::`vftable';
    a2[3] = &BuildingLightClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 57);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 56);
    return Register;
}

int __stdcall BuildingLightClass::SD_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

// 0x004369E0
int BuildingLightClass::SD_vt34()
{
    return 0;
}

// 0x004369F0
int BuildingLightClass::SD_vt30()
{
    return 3;
}

int  BuildingLightClass::SD_vt10(int this, int a2, int a3)
{
    int result; // eax
    Object::Unlink((void*374 *)this);
    result = 0;
    if ( *(uint32_t *)(this + 224) == a2 )
    *(uint32_t *)(this + 224) = 0;
    if ( *(uint32_t *)(this + 228) == a2 )
    *(uint32_t *)(this + 228) = 0;
    return result;
}

// 0x00436F40
int  BuildingLightClass::SD_vt13(int this, unsigned int *a2)
{
    int v3; // ecx
    int result; // eax
    int v5; // eax
    int v6; // esi
    int v7; // eax
    HouseClass::ProcessPower((void*374 *)this);
    Checksummer::Add_double(a2, *(uint32_t *)(this + 176), *(uint32_t *)(this + 180));
    Power::TimerProcess(*(uint32_t *)(this + 184));
    Power::TimerProcess(*(uint32_t *)(this + 188));
    Power::TimerProcess(*(uint32_t *)(this + 192));
    Power::TimerProcess(*(uint32_t *)(this + 196));
    Power::TimerProcess(*(uint32_t *)(this + 200));
    Power::TimerProcess(*(uint32_t *)(this + 204));
    Checksummer::Add_double(a2, *(uint32_t *)(this + 208), *(uint32_t *)(this + 212));
    LOBYTE(v3) = *(uint8_t *)(this + 216);
    Power::FlagProcess((int *)a2, v3);
    Power::TimerProcess(*(uint32_t *)(this + 220));
    result = *(uint32_t *)(this + 224);
    if ( result )
    v5 = (*(int (__stdcall **)(int))(*(uint32_t *)(result + 4) + 16))(result + 4);
    result = Power::TimerProcess(v5);
    v6 = *(uint32_t *)(this + 228);
    if ( v6 )
    v7 = (*(int (__stdcall **)(int))(*(uint32_t *)(v6 + 4) + 16))(v6 + 4);
    return Power::TimerProcess(v7);
    return result;
}

char  BuildingLightClass::SD_vt53(#374 *this)
{
    if ( !(unsigned __int8)ObjectClass::Undeploy(this) )
    return 0;
    VectorClass::RemoveItem(&g_GameConfigManager, (int)this);
    return 1;
}

char  BuildingLightClass::SD_vt54(#374 *this, int a2, int a3)
{
    if ( !(unsigned __int8)ObjectClass::Deploy(this) )
    return 0;
    ObjectClass::SetDeployState((int)this, 0);
    return 1;
}

// 0x004370B0
int BuildingLightClass::SD_vt11()
{
    return 19;
}

signed int  BuildingLightClass::UpdateOscillation(int this)
{
    int v2; // eax
    int *v3; // eax
    int GroundHeight; // edi
    int v5; // eax
    int *v6; // ecx
    int v7; // eax
    int v8; // edx
    int v9; // ebx
    int v10; // ebp
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    double v14; // st7
    int v15; // edi
    double v16; // st7
    double v17; // st7
    int v18; // eax
    int v19; // ecx
    char v20; // bl
    signed int result; // eax
    RulesClass *v22; // ecx
    double v23; // st7
    int v24; // [esp+1Ch] [ebp-18h]
    int v25; // [esp+1Ch] [ebp-18h]
    int v26; // [esp+20h] [ebp-14h]
    int v27; // [esp+24h] [ebp-10h]
    int v28; // [esp+28h] [ebp-Ch] BYREF
    int v29; // [esp+2Ch] [ebp-8h]
    int v30; // [esp+30h] [ebp-4h]
    v24 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 12) + 456))(*(uint32_t *)(this + 12));
    v26 = v24;
    v2 = *(uint32_t *)(this + 12);
    if ( *(uint32_t *)(v2 + 1504) != -1 )
    v3 = (int *)(v2 + 156);
    v28 = *v3;
    v29 = v3[1];
    v30 = v3[2];
    GroundHeight = Cell::GetGroundHeight(&v28);
    v5 = *(uint32_t *)(this + 12);
    v6 = (int *)(v5 + 156);
    v7 = *(uint32_t *)(v5 + 1504) & 7;
    v8 = *v6;
    v9 = v6[1];
    v10 = v6[2];
    v11 = 8 * v7 + 9041624;
    v12 = v8 + dword_89F6D8[2 * v7];
    v29 = v9 + *(uint32_t *)(v11 + 4);
    v28 = v12;
    v30 = v10;
    if ( Cell::GetGroundHeight(&v28) > GroundHeight )
    v26 = v24 - HIDWORD(RulesClass_Instance->VeteranROF);
    v25 = Math::RoundToInt((double)v24 + *(double *)(this + 96));
    v13 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 12) + 4) + 16))(*(uint32_t *)(this + 12) + 4);
    if ( (v13 & 1) != 0 )
    v14 = 1.0;
    else
    v14 = 1.1;
    v15 = (int)&CurrentFrame[v13];
    v16 = v14 * *(double *)&RulesClass_Instance->VeteranCap * 900.0;
    v27 = v15 % (int)Math::RoundToInt(v16);
    v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16);
    v18 = Math::RoundToInt(v17 + v17 + (double)v25);
    if ( v18 < 0 )
    *(uint32_t *)(this + 96) = 0;
    *(uint32_t *)(this + 100) = 0;
    v18 = 0;
    v19 = *(uint32_t *)(this + 12);
    v20 = *(uint8_t *)(v19 + 116);
    *(uint8_t *)(v19 + 116) = 0;
    (*(void (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 460))(*(uint32_t *)(this + 12), v18);
    result = *(uint32_t *)(this + 12);
    *(uint8_t *)(result + 116) = v20;
    v22 = RulesClass_Instance;
    if ( v26 < SHIDWORD(RulesClass_Instance->VeteranROF) )
    if ( StreamClass::GetDirty(this + 4) )
    *(double *)(this + 96) = ((double)SHIDWORD(RulesClass_Instance->VeteranROF)
    + (double)SHIDWORD(RulesClass_Instance->VeteranROF)
    - (double)v26)
    / (double)SHIDWORD(RulesClass_Instance->VeteranROF)
    * (double)RulesClass_Instance[1].WeatherConBoltExplosion
    + *(double *)(this + 96);
    v22 = RulesClass_Instance;
    result = SHIDWORD(RulesClass_Instance->VeteranROF) / 4;
    if ( v26 < result )
    result = (unsigned int)((unsigned __int64)(1431655766LL * RulesClass_Instance[1].WeatherConBoltExplosion) >> 32) >> 31;
    *(double *)(this + 96) = (double)(RulesClass_Instance[1].WeatherConBoltExplosion / 3) + *(double *)(this + 96);
    v22 = RulesClass_Instance;
    v23 = *(double *)(this + 96) - (double)v22[1].WeatherConBoltExplosion;
    *(double *)(this + 96) = v23;
    *(double *)(this + 96) = v23 * *(double *)&RulesClass_Instance->GameForming;
    return result;
}

