#include "radsiteclass.hpp"

int RadSiteClass::_vt12()
{
    return 116;
}

int  RadSiteClass::_vt13(#378 *this, int a2)
{
    return AbstractClass::ProcessPower(this);
}

int RadSiteClass::_vt11()
{
    return 69;
}

// 0x0065B3D0
int __stdcall RadSiteClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    int Prefix_0; // edi
    wchar_t *v3; // edx
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    v3 = CurrentFrame;
    a1[12] = 0;
    a1[10] = v3;
    a1[13] = CurrentFrame;
    a1[15] = 0;
    *a1 = &RadSiteClass::`vftable';
    a1[1] = &RadSiteClass::`vftable';
    a1[2] = &RadSiteClass::`vftable';
    a1[3] = &RadSiteClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    return Prefix_0;
}

int __stdcall RadSiteClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int __stdcall RadSiteClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1090836288;
    a2[1] = 299095303;
    a2[2] = -1610598260;
    a2[3] = 1153315785;
    return 0;
}

// 0x0065B4B0
int  RadSiteClass::GetSpread(uint32_t *this)
{
    return *(this + 17);
}

uint32_t * RadSiteClass::SetBaseCell(uint32_t *this, uint32_t *a2)
{
    *(this + 16) = *a2;
    return a2;
}

int  RadSiteClass::SetSpread(uint32_t *this, int a2)
{
    int result; // eax
    *(this + 17) = a2;
    result = (a2 << 8) + 128;
    *(this + 18) = result;
    return result;
}

int  RadSiteClass::SetRadLevel(uint32_t *this, int a2)
{
    int result; // eax
    *(this + 19) = a2;
    result = a2 * RulesClass_Instance[1].PrismSupportDuration;
    *(this + 27) = result;
    *(this + 28) = result;
    return result;
}

int  RadSiteClass::Add(uint32_t *this, int a2)
{
    int v3; // edi
    int v4; // eax
    v3 = Math::RoundToInt((double)(int)*(this + 19) * (double)(int)*(this + 28) / (double)(int)*(this + 27));
    RadSiteClass::Deactivate(this);
    *(this + 19) = v3 + a2;
    v4 = (v3 + a2) * RulesClass_Instance[1].PrismSupportDuration;
    *(this + 27) = v4;
    *(this + 28) = v4;
    return Warhead::ProcessDamageArea((int)this);
}

int  RadSiteClass::_vt23(int *this)
{
    int v2; // edx
    int v3; // eax
    wchar_t *v4; // edi
    int v5; // ecx
    int v6; // ecx
    int v7; // eax
    int v8; // edi
    int v9; // ecx
    int result; // eax
    int v11; // [esp+Ch] [ebp-8h]
    --*(this + 28);
    v2 = *(this + 10);
    v3 = *(this + 12);
    v4 = CurrentFrame;
    if ( v2 == -1 )
    LABEL_4:
    if ( v3 )
    goto LABEL_6;
    goto LABEL_5;
    if ( (int)CurrentFrame - v2 < v3 )
    v3 -= (int)CurrentFrame - v2;
    goto LABEL_4;
    LABEL_5:
    RadSiteClass::DecreaseRadiation(this);
    v5 = RulesClass_Instance[1].V3Rocket[1];
    *(this + 10) = (int)CurrentFrame;
    *(this + 11) = v11;
    *(this + 12) = v5;
    v4 = CurrentFrame;
    LABEL_6:
    v6 = *(this + 13);
    v7 = *(this + 15);
    if ( v6 == -1 )
    goto LABEL_9;
    v8 = (int)v4 - v6;
    if ( v8 < v7 )
    v7 -= v8;
    LABEL_9:
    if ( v7 )
    goto LABEL_11;
    TacticalClass::UpdateScrollTarget(
    *(this + 9),
    *(uint32_t *)(*(this + 9) + 36) - *(this + 26),
    *(this + 28) * *(this + 22) / *(this + 27),
    *(this + 28) * *(this + 23) / *(this + 27),
    *(this + 28) * *(this + 24) / *(this + 27),
    0);
    v9 = RulesClass_Instance[1].V3Rocket[2];
    *(this + 13) = (int)CurrentFrame;
    *(this + 14) = v11;
    *(this + 15) = v9;
    LABEL_11:
    result = *(this + 28);
    if ( result <= 0 )
    if ( this )
    return (*(int (__thiscall **)(int *, int))(*this + 32))(this, 1);
    return result;
}

double  RadSiteClass::GetRadLevelAt(int this, __int16 *a2)
{
    void *v3; // esi
    int *v4; // eax
    int v5; // esi
    int v6; // edi
    int v7; // ebx
    uint32_t *v8; // eax
    int v9; // esi
    int v10; // edx
    double v11; // st7
    int v12; // eax
    int v13; // ecx
    double result; // st7
    int v15; // [esp+24h] [ebp-Ch] BYREF
    int v16; // [esp+28h] [ebp-8h]
    int v17; // [esp+2Ch] [ebp-4h]
    void *v18; // [esp+34h] [ebp+4h]
    v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(this + 64));
    v18 = CellCoord::To_CellObj(&MapClass_Instance, a2);
    v4 = (int *)(*(int (__thiscall **)(void *, int *))(*(uint32_t *)v3 + 72))(v3, &v15);
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = (uint32_t *)(*(int (__thiscall **)(void *, int *))(*(uint32_t *)v18 + 72))(v18, &v15);
    v9 = v5 - *v8;
    v10 = v8[2];
    v16 = v6 - v8[1];
    v15 = v9;
    v17 = v7 - v10;
    v11 = Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v16 * (double)v16);
    v12 = Math::RoundToInt(v11);
    v13 = *(uint32_t *)(this + 72);
    result = 0.0;
    if ( v12 <= v13 )
    return (double)(v13 - v12) / (double)*(int *)(this + 72) * (double)*(int *)(this + 76);
    return result;
}

int __fastcall RadSiteClass::Radiate(int a1)
{
    int v1; // esi
    int v2; // edx
    int result; // eax
    int v4; // edi
    int v5; // esi
    void *v6; // esi
    void *v7; // ebp
    int *v8; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    uint32_t *v12; // eax
    int v13; // ecx
    int v14; // edx
    double v15; // st7
    int v16; // eax
    double *v17; // eax
    __int16 v18[2]; // [esp+24h] [ebp-4Ch] BYREF
    int v19; // [esp+28h] [ebp-48h]
    int v20; // [esp+2Ch] [ebp-44h]
    int i; // [esp+30h] [ebp-40h]
    int v22; // [esp+34h] [ebp-3Ch]
    double v23; // [esp+38h] [ebp-38h]
    int v24; // [esp+40h] [ebp-30h]
    int v25; // [esp+44h] [ebp-2Ch]
    int v26; // [esp+48h] [ebp-28h]
    int v27; // [esp+4Ch] [ebp-24h]
    int v28; // [esp+50h] [ebp-20h]
    int v29; // [esp+54h] [ebp-1Ch]
    char v30[12]; // [esp+58h] [ebp-18h] BYREF
    char v31[12]; // [esp+64h] [ebp-Ch] BYREF
    v1 = *(uint32_t *)(a1 + 68);
    v2 = *(__int16 *)(a1 + 64) - v1;
    result = *(__int16 *)(a1 + 66) - v1;
    v20 = a1;
    v4 = v2 + 2 * v1 + 1;
    v5 = result + 2 * v1 + 1;
    v26 = v2;
    v22 = v4;
    v25 = v5;
    for ( i = result; i < v5; ++i )
    v19 = v2;
    if ( v2 < v22 )
    while ( 1 )
    v18[0] = v19;
    v18[1] = i;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(a1 + 64));
    v7 = CellCoord::To_CellObj(&MapClass_Instance, v18);
    v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v6 + 72))(v6, v30);
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = (uint32_t *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v7 + 72))(v7, v31);
    v13 = v12[1];
    v27 = v9 - *v12;
    v14 = v12[2];
    v28 = v10 - v13;
    v29 = v11 - v14;
    v15 = Math::Sqrt((double)v27 * (double)v27 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v28
    * (double)v28);
    v16 = Math::RoundToInt(v15);
    v23 = 0.0;
    v24 = *(uint32_t *)(v20 + 72);
    if ( v16 <= v24 )
    LODWORD(v23) = v24 - v16;
    v23 = (double)(v24 - v16) / (double)v24 * (double)*(int *)(v20 + 76);
    v17 = (double *)CellCoord::To_CellObj(&MapClass_Instance, v18);
    CellClass::RadLevel_Increase(v17, v23);
    if ( ++v19 >= v22 )
    break;
    a1 = v20;
    v5 = v25;
    v2 = v26;
    a1 = v20;
    result = i + 1;
    return result;
}

int __fastcall RadSiteClass::Deactivate(uint32_t *a1)
{
    int v1; // eax
    int v2; // edx
    int v3; // esi
    int v4; // edx
    int result; // eax
    int v6; // esi
    void *v7; // esi
    void *v8; // ebp
    int *v9; // eax
    int v10; // esi
    int v11; // edi
    int v12; // ebx
    uint32_t *v13; // eax
    int v14; // ecx
    int v15; // edx
    double v16; // st7
    int v17; // eax
    double v18; // st7
    void *v19; // eax
    __int16 v20[2]; // [esp+24h] [ebp-5Ch] BYREF
    int v21; // [esp+28h] [ebp-58h]
    uint32_t *v22; // [esp+2Ch] [ebp-54h]
    int v23; // [esp+30h] [ebp-50h]
    int v24; // [esp+34h] [ebp-4Ch]
    int v25; // [esp+38h] [ebp-48h]
    int v26; // [esp+3Ch] [ebp-44h]
    double v27; // [esp+40h] [ebp-40h]
    unsigned __int64 v28; // [esp+48h] [ebp-38h]
    double v29; // [esp+50h] [ebp-30h]
    int v30; // [esp+5Ch] [ebp-24h]
    int v31; // [esp+60h] [ebp-20h]
    int v32; // [esp+64h] [ebp-1Ch]
    char v33[12]; // [esp+68h] [ebp-18h] BYREF
    char v34[12]; // [esp+74h] [ebp-Ch] BYREF
    v1 = a1[28] / RulesClass_Instance[1].V3Rocket[1];
    v2 = *((__int16 *)a1 + 32);
    v3 = a1[17];
    v22 = a1;
    v4 = v2 - v3;
    v24 = v4 + 2 * v3 + 1;
    v25 = v1 + 1;
    result = *((__int16 *)a1 + 33) - v3;
    v23 = result;
    v6 = result + 2 * v3 + 1;
    v28 = __PAIR64__(v4, v6);
    if ( result < v6 )
    do
    v21 = v4;
    if ( v4 < v24 )
    v29 = (double)v25;
    while ( 1 )
    v20[0] = v21;
    v20[1] = v23;
    v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)a1 + 32);
    v8 = CellCoord::To_CellObj(&MapClass_Instance, v20);
    v9 = (int *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v7 + 72))(v7, v33);
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = (uint32_t *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v8 + 72))(v8, v34);
    v14 = v13[1];
    v30 = v10 - *v13;
    v15 = v13[2];
    v31 = v11 - v14;
    v32 = v12 - v15;
    v16 = Math::Sqrt((double)v30 * (double)v30 + (double)(v12 - v15) * (double)(v12 - v15) + (double)v31
    * (double)v31);
    v17 = Math::RoundToInt(v16);
    v18 = 0.0;
    LODWORD(v27) = v22[18];
    if ( v17 <= SLODWORD(v27) )
    v26 = LODWORD(v27) - v17;
    v18 = (double)(LODWORD(v27) - v17) / (double)SLODWORD(v27) * (double)(int)v22[19];
    v27 = v18 / (double)(int)v22[20] * v29;
    v19 = CellCoord::To_CellObj(&MapClass_Instance, v20);
    CellClass::RadLevel_Decrease((int)v19, v27);
    if ( ++v21 >= v24 )
    break;
    a1 = v22;
    v4 = HIDWORD(v28);
    v6 = v28;
    a1 = v22;
    result = ++v23;
    while ( v23 < v6 );
    return result;
}

// 0x0065BD00
int __fastcall RadSiteClass::DecreaseRadiation(uint32_t *a1)
{
    int v1; // esi
    int v2; // edx
    int result; // eax
    int v4; // edi
    int v5; // esi
    void *v6; // esi
    void *v7; // ebp
    int *v8; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    uint32_t *v12; // eax
    int v13; // ecx
    int v14; // edx
    double v15; // st7
    int v16; // eax
    double v17; // st7
    void *v18; // eax
    __int16 v19[2]; // [esp+20h] [ebp-50h] BYREF
    int v20; // [esp+24h] [ebp-4Ch]
    uint32_t *v21; // [esp+28h] [ebp-48h]
    int i; // [esp+2Ch] [ebp-44h]
    int v23; // [esp+30h] [ebp-40h]
    int v24; // [esp+34h] [ebp-3Ch]
    double v25; // [esp+38h] [ebp-38h]
    int v26; // [esp+44h] [ebp-2Ch]
    int v27; // [esp+48h] [ebp-28h]
    int v28; // [esp+4Ch] [ebp-24h]
    int v29; // [esp+50h] [ebp-20h]
    int v30; // [esp+54h] [ebp-1Ch]
    char v31[12]; // [esp+58h] [ebp-18h] BYREF
    char v32[12]; // [esp+64h] [ebp-Ch] BYREF
    v1 = a1[17];
    v2 = *((__int16 *)a1 + 32) - v1;
    result = *((__int16 *)a1 + 33) - v1;
    v21 = a1;
    v4 = v2 + 2 * v1 + 1;
    v5 = result + 2 * v1 + 1;
    v27 = v2;
    v23 = v4;
    v26 = v5;
    for ( i = result; i < v5; ++i )
    v20 = v2;
    if ( v2 < v23 )
    while ( 1 )
    v19[0] = v20;
    v19[1] = i;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)a1 + 32);
    v7 = CellCoord::To_CellObj(&MapClass_Instance, v19);
    v8 = (int *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v6 + 72))(v6, v31);
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = (uint32_t *)(*(int (__thiscall **)(void *, char *))(*(uint32_t *)v7 + 72))(v7, v32);
    v13 = v12[1];
    v28 = v9 - *v12;
    v14 = v12[2];
    v29 = v10 - v13;
    v30 = v11 - v14;
    v15 = Math::Sqrt((double)v28 * (double)v28 + (double)(v11 - v14) * (double)(v11 - v14) + (double)v29
    * (double)v29);
    v16 = Math::RoundToInt(v15);
    v17 = 0.0;
    LODWORD(v25) = v21[18];
    if ( v16 <= SLODWORD(v25) )
    v24 = LODWORD(v25) - v16;
    v17 = (double)(LODWORD(v25) - v16) / (double)SLODWORD(v25) * (double)(int)v21[19];
    v25 = v17 / (double)(int)v21[20];
    v18 = CellCoord::To_CellObj(&MapClass_Instance, v19);
    CellClass::RadLevel_Decrease((int)v18, v25);
    if ( ++v20 >= v23 )
    break;
    a1 = v21;
    v5 = v26;
    v2 = v27;
    a1 = v21;
    result = i + 1;
    return result;
}

// 0x0065BE90
char  RadSiteClass::DecreaseLight(int *this)
{
    return TacticalClass::UpdateScrollTarget(
    *(this + 9),
    *(uint32_t *)(*(this + 9) + 36) - *(this + 26),
    *(this + 28) * *(this + 22) / *(this + 27),
    *(this + 28) * *(this + 23) / *(this + 27),
    *(this + 28) * *(this + 24) / *(this + 27),
    0);
}

void ** RadSiteClass::_vt08(void **Block, char a2)
{
    RadSiteClass::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

