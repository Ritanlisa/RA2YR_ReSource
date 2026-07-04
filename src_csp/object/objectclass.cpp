#include "objectclass.hpp"

int  ObjectClass::ClearFlags2(uint32_t *this)
{
    *this &= ~2u;
    *(this + 20) &= ~2u;
    *(this + 10) &= ~2u;
    return -3;
}

// 0x004103E0
int  ObjectClass::GetSizeMax(#374 *this)
{
    int v2; // [esp+8h] [ebp+4h]
    uint32_t *v3; // [esp+Ch] [ebp+8h]
    if ( !v3 )
    return -2147467261;
    *v3 = (*(int (__thiscall **)(int))(*(uint32_t *)v2 + 48))(v2) + 4;
    v3[1] = 0;
    return 0;
}

// 0x00417C80
char  ObjectClass::vt_entry_140(uint8_t *this, int a2, __int16 *a3, __int16 *a4, void **a5)
{
    return ObjectClass::SpawnInfantry(this, a2, a3, a4, a5);
}

// 0x0041BDD0
int  ObjectClass::GetCoordsThunk1(#374 *this)
{
    uint32_t *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}

// 0x0041BE00
int  ObjectClass::GetCoordsThunk2(#374 *this)
{
    uint32_t *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}

// 0x0041BE30
int  ObjectClass::GetCoordsThunk3(#374 *this)
{
    uint32_t *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}

// 0x0041BEA0
int  ObjectClass::GetCellCoords_Alt(#374 *this)
{
    int v2; // [esp+0h] [ebp-4h]
    uint32_t *v3; // [esp+8h] [ebp+4h]
    LOWORD(v2) = *((uint32_t *)this + 39) / 256;
    HIWORD(v2) = *((uint32_t *)this + 40) / 256;
    *v3 = v2;
    return (int)v3;
}

// 0x004263D0
int  ObjectClass::GetDrawPosition(#374 *this)
{
    int *v1; // eax
    int v2; // ecx
    int v3; // edx
    int v4; // eax
    uint8_t v6[12]; // [esp+8h] [ebp-Ch] BYREF
    uint32_t *v7; // [esp+18h] [ebp+4h]
    v1 = (int *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v6);
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    *v7 = v2;
    v7[1] = v3;
    v7[2] = v4 + 50;
    return (int)v7;
}

int  ObjectClass::SetTriggerTarget(uint32_t *this, int a2)
{
    int v3; // eax
    int result; // eax
    v3 = *(this + 15);
    if ( v3 )
    --*(uint32_t *)(v3 + 44);
    result = a2;
    *(this + 15) = a2;
    if ( a2 )
    result = dword_88094C;
    if ( dword_880954 < dword_88094C
    || (byte_880951 || !dword_88094C)
    && dword_880958 > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(dword_880944 + 8))(
    &dword_880944,
    dword_88094C + dword_880958,
    0),
    (uint8_t)result) )
    result = dword_880954++;
    *(uint32_t *)(dword_880948 + 4 * result) = *(this + 9);
    ++*(uint32_t *)(*(this + 15) + 44);
    return result;
}

// 0x00513F40
float *__stdcall ObjectClass::BuildTransform(uint32_t *a1, float *a2, uint32_t *a3)
{
    int v3; // ecx
    uint32_t *v4; // ecx
    int v5; // ebp
    float *v7; // eax
    double v8; // st7
    int v9; // edx
    double v10; // st7
    int v11; // eax
    double v12; // st7
    int v13; // ecx
    double v14; // st7
    int v15; // esi
    int v16; // eax
    int v17; // ecx
    float *Transform; // eax
    float *v19; // eax
    float *v20; // esi
    float v21; // [esp+4h] [ebp-154h]
    float v22; // [esp+8h] [ebp-150h]
    float v23; // [esp+8h] [ebp-150h]
    float v24; // [esp+8h] [ebp-150h]
    float v25; // [esp+18h] [ebp-140h]
    int v26; // [esp+18h] [ebp-140h]
    float v27; // [esp+1Ch] [ebp-13Ch]
    int v28; // [esp+1Ch] [ebp-13Ch]
    float v29; // [esp+20h] [ebp-138h] BYREF
    int v30; // [esp+24h] [ebp-134h]
    float v31; // [esp+28h] [ebp-130h]
    uint32_t v32[3]; // [esp+2Ch] [ebp-12Ch] BYREF
    float v33[12]; // [esp+38h] [ebp-120h] BYREF
    float v34[12]; // [esp+68h] [ebp-F0h] BYREF
    float v35[12]; // [esp+98h] [ebp-C0h] BYREF
    float v36[12]; // [esp+C8h] [ebp-90h] BYREF
    float v37[12]; // [esp+F8h] [ebp-60h] BYREF
    float v38[12]; // [esp+128h] [ebp-30h] BYREF
    v3 = a1[2];
    if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 )
    if ( a3 )
    *a3 = -1;
    Matrix3x4::Identity(v35);
    Matrix3x4::Identity(v33);
    v25 = *(double *)((*(int (__thiscall **)(uint32_t))(*(uint32_t *)a1[2] + 132))(a1[2]) + 864);
    v27 = *(double *)((*(int (__thiscall **)(uint32_t))(*(uint32_t *)a1[2] + 132))(a1[2]) + 872);
    v8 = Math::ArcTan2(*(float *)(a1[2] + 812));
    v9 = a1[2];
    v31 = v8;
    v10 = Math::SinCos(*(float *)(v9 + 812));
    v11 = a1[2];
    *(float *)&v30 = v10;
    v12 = Math::ArcTan2(*(float *)(v11 + 808));
    v13 = a1[2];
    v29 = v12;
    v14 = Math::SinCos(*(float *)(v13 + 808));
    v30 = Math::RoundToInt(fabs(v14) * v25 + fabs(*(float *)&v30) * v27);
    LODWORD(v31) = Math::RoundToInt(v31 * v27);
    v15 = Math::RoundToInt(v27 - (double)SLODWORD(v31));
    v28 = v15;
    LODWORD(v29) = Math::RoundToInt(v29 * v25);
    v16 = Math::RoundToInt(v25 - (double)SLODWORD(v29));
    v17 = a1[2];
    v26 = v16;
    if ( *(float *)(v17 + 812) < 0.0 )
    v28 = -v15;
    if ( *(float *)(v17 + 808) > 0.0 )
    v26 = -v16;
    v22 = (float)v30;
    Matrix3x3::ApplyCol1(v35, v22);
    v23 = (float)v28;
    Matrix3x4::Translate(v33, v23);
    v24 = (float)v26;
    Matrix3x3::ApplyCol0(v33, v24);
    Matrix3x3::RotateX(v33, *(float *)(a1[2] + 808));
    Matrix3D::RotateZ(v33, *(float *)(a1[2] + 812));
    Transform = Turret::GetTransform((signed int)a1, v36, a3);
    Transform::Copy(v34, Transform);
    v19 = MultiplyMatrix3x4(v37, v35, v34);
    v7 = MultiplyMatrix3x4(v38, v19, v33);
    goto LABEL_16;
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t *))(*a1 + 96))(a1) )
    v7 = Turret::GetTransform((signed int)a1, v34, a3);
    LABEL_16:
    v20 = v7;
    qmemcpy(a2, v20, 0x30u);
    return a2;
    v4 = (uint32_t *)(a1[2] + 156);
    v32[0] = *v4;
    v32[1] = v4[1];
    v32[2] = v4[2];
    v5 = *((unsigned __int8 *)Coord::To_Cell(&MapClass_Instance, v32) + 284);
    qmemcpy(v33, CopyAudioData((char *)v34, v5), sizeof(v33));
    v21 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F)
    - 8)
    * -0.1963495408493621;
    Matrix2D::Rotate(v33, v21);
    if ( a3 )
    if ( *a3 != -1 )
    *a3 = 32 * (v5 + (*a3 << 6));
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(a1[2] + 904), &v29) >> 10) + 1) >> 1) & 0x1F;
    qmemcpy(a2, v33, 0x30u);
    return a2;
}

// 0x005F3E30
int  ObjectClass::HasC4(#374 *this)
{
    int v1; // eax
    v1 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    return (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 156))(v1);
}

int  ObjectClass::DetectCloaked(#374 *this)
{
    int result; // eax
    int v3; // edx
    int v4; // eax
    int v5; // ecx
    int v6; // ebp
    int v7; // edi
    int v8; // edx
    int v9; // eax
    int v10; // eax
    int v11; // edi
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    wchar_t *v15; // eax
    wchar_t **v16; // edx
    int *v17; // esi
    int v18; // edx
    int v19; // edx
    int v20; // edi
    int v21; // esi
    int v22; // [esp+20h] [ebp-10h] BYREF
    int v23; // [esp+24h] [ebp-Ch] BYREF
    int v24; // [esp+28h] [ebp-8h]
    int v25; // [esp+2Ch] [ebp-4h]
    if ( !*((uint8_t *)this + 129) )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    if ( result )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    if ( *(uint32_t *)(result + 500) != -1 )
    v23 = *((uint32_t *)this + 39);
    v24 = *((uint32_t *)this + 40);
    v3 = *(uint32_t *)this;
    v25 = *((uint32_t *)this + 41);
    v4 = (*(int (__thiscall **)(void*374 *))(v3 + 136))(this);
    result = StartAudioControllerAt(*(uint32_t *)(v4 + 500), (int)&v23, (int)this + 60);
    v5 = *((uint32_t *)this + 25);
    if ( v5 != -1 )
    v23 = *((uint32_t *)this + 39);
    v24 = *((uint32_t *)this + 40);
    v25 = *((uint32_t *)this + 41);
    result = StartAudioControllerAt(v5, (int)&v23, (int)this + 80);
    LOBYTE(result) = *((uint8_t *)this + 141);
    if ( (uint8_t)result )
    v6 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 120))(this);
    v7 = *((uint32_t *)this + 11) + (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 464))(this);
    if ( *((uint8_t *)this + 116) )
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    v8 = *(uint32_t *)this;
    *((uint32_t *)this + 41) = v7;
    (*(void (__thiscall **)(void*374 *, int))(v8 + 292))(this, 1);
    else
    *((uint32_t *)this + 41) = v7;
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 456))(this) <= 0 )
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 460))(this, 0);
    v9 = *(uint32_t *)this;
    *((uint8_t *)this + 141) = 0;
    (*(void (__thiscall **)(void*374 *, int))(v9 + 396))(this, 2);
    v10 = *((uint32_t *)this + 34);
    if ( v10 )
    *(uint8_t *)(v10 + 405) = 0;
    if ( *((uint8_t *)this + 129) )
    RemoveTarget((int)this);
    return result;
    if ( *((uint8_t *)this + 132) )
    v11 = *((uint32_t *)this + 11) - 1;
    *((uint32_t *)this + 11) = v11;
    v12 = v11;
    v13 = RulesClass_Instance->BuildTech[0];
    if ( v11 <= v13 )
    goto LABEL_19;
    else
    v12 = Math::RoundToInt((double)*((int *)this + 11) - 1.4);
    *((uint32_t *)this + 11) = v12;
    v13 = RulesClass_Instance->BuildTech[1];
    if ( v12 <= v13 )
    LABEL_19:
    v12 = v13;
    *((uint32_t *)this + 11) = v12;
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 120))(this);
    if ( v6 != result )
    Targeting::Readd(this);
    LOBYTE(result) = *((uint8_t *)this + 141);
    if ( !(uint8_t)result )
    if ( *((uint8_t *)this + 143) && *((int *)this + 27) > 0 )
    v14 = *(uint32_t *)this;
    v22 = *((uint32_t *)this + 27);
    (*(void (__thiscall **)(void*374 *, int *, uint32_t, int, uint32_t, int, int, uint32_t))(v14 + 364))(
    this,
    &v22,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this);
    if ( result == 4 )
    result = *((uint32_t *)this + 50);
    if ( *(uint8_t *)(result + 852) )
    *((uint8_t *)this + 410) = 1;
    v15 = CurrentFrame;
    v16 = (wchar_t **)((char *)this + 180);
    *((uint32_t *)this + 48) = 1;
    v17 = (int *)((char *)this + 156);
    *v16 = v15;
    v16[1] = (wchar_t *)v24;
    v16[2] = (wchar_t *)1;
    v18 = *v17;
    v17[4] = 8 * *(uint32_t *)(v17[11] + 848) + 1;
    v23 = v18;
    v24 = v17[1];
    v25 = v17[2];
    result = (int)Coord::To_Cell(&MapClass_Instance, &v23);
    if ( *(uint32_t *)(result + 236) == 2 )
    result = (int)__2_YAPAXI_Z(0x1C8u);
    if ( result )
    v19 = *v17;
    v20 = v17[1];
    v21 = v17[2];
    v23 = v19;
    v24 = v20;
    v25 = v21 + 3;
    return (int)AnimClass::ctor(
    (void **)result,
    *(void **)RulesClass_Instance->Pilot,
    &v23,
    0,
    1,
    (void *)0x600,
    0,
    0);
    return result;
}

int  ObjectClass::DropAsBomb_Track(#374 *this)
{
    int v2; // eax
    int result; // eax
    int v4; // eax
    uint32_t v5[3]; // [esp+Ch] [ebp-Ch] BYREF
    v2 = *(uint32_t *)this;
    *((uint8_t *)this + 141) = 1;
    *((uint8_t *)this + 143) = 1;
    (*(void (__stdcall **)(uint32_t))(v2 + 292))(0);
    RemoveTarget((int)this);
    *((uint8_t *)this + 140) = 0;
    Targeting::Readd(this);
    result = (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 1);
    if ( this )
    LOBYTE(result) = (*((uint8_t *)this + 20) & 4) != 0;
    if ( (*((uint8_t *)this + 20) & 4) != 0 )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    if ( (*(unsigned __int8 (__stdcall **)(uint32_t))(**((uint32_t **)this + 413) + 16))(*((uint32_t *)this + 413)) )
    if ( !*((uint32_t *)this + 413) )
    WinAPI::Wrapper(-2147467261);
    return (*(int (__stdcall **)(uint32_t, uint32_t))(**((uint32_t **)this + 413) + 156))(*((uint32_t *)this + 413), 0);
    else
    v5[0] = *((uint32_t *)this + 39);
    v4 = *(uint32_t *)this;
    v5[1] = *((uint32_t *)this + 40);
    v5[2] = *((uint32_t *)this + 41);
    return (*(int (__thiscall **)(void*374 *, uint32_t *))(v4 + 244))(this, v5);
    return result;
}

// 0x005F4260
int  ObjectClass::GetThreatLevel(#374 *this)
{
    if ( (*(unsigned __int8 (__thiscall **)(void*374 *))(*(uint32_t *)this + 84))(this) )
    return ((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 456))(this) >= RulesClass_Instance->V3Rocket[13]) + 3;
    else
    return 2;
}

// 0x005F4410
int  ObjectClass::MoveToDirection(#374 *this)
{
    int v2; // edx
    int v3; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // edi
    void *v7; // eax
    uint32_t v9[3]; // [esp+18h] [ebp-Ch] BYREF
    int v10; // [esp+28h] [ebp+4h]
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    v2 = *((uint32_t *)this + 39);
    v3 = *((uint32_t *)this + 40);
    v9[2] = *((uint32_t *)this + 41);
    v4 = dword_89F6D8[2 * (v10 & 7)];
    v5 = v3 + dword_89F6DC[2 * (v10 & 7)];
    v6 = *(uint32_t *)this;
    v9[1] = v5;
    v9[0] = v2 + v4;
    v7 = Coord::To_Cell(&MapClass_Instance, v9);
    if ( !(*(int (__thiscall **)(void*374 *, void *, int, int, uint32_t, int))(v6 + 428))(this, v7, v10, -1, 0, 1) )
    (*(void (__thiscall **)(void*374 *, uint32_t *))(*(uint32_t *)this + 436))(this, v9);
    return (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 1);
}

// 0x005F44A0
int  ObjectClass::Remove(#374 *this)
{
    int result; // eax
    int v3; // eax
    void*374 *v4; // [esp+4h] [ebp-4h] BYREF
    LOBYTE(result) = *((uint8_t *)this + 131);
    if ( (uint8_t)result )
    v4 = this;
    v3 = ((int (__thiscall *)(ObjectClass **, void*374 **))ObjectClass_CurrentObjects->parent_gap[4])(
    &ObjectClass_CurrentObjects,
    &v4);
    if ( v3 != -1 && v3 < (int)g_SelectionManager )
    for ( g_SelectionManager = (wchar_t *)((char *)g_SelectionManager - 1);
    v3 < (int)g_SelectionManager;
    *((uint32_t *)g_ObjectClass_CurrentCount + v3 - 1) = *((uint32_t *)g_ObjectClass_CurrentCount + v3) )
    ++v3;
    *((uint8_t *)this + 131) = 0;
    result = MapClass::GetScrollMode((int)&MapClass_Instance);
    if ( (void*374 *)result == this )
    LOBYTE(result) = MapClass::SetScrollMode((int)&MapClass_Instance, 0);
    return result;
}

int  ObjectClass::HandleSelection(#374 *this)
{
    int result; // eax
    uint8_t *v3; // edi
    void*375 *v4; // ebx
    void*375 *v5; // edi
    wchar_t *v6; // eax
    wchar_t *v7; // eax
    char IsHumanPlayer; // [esp+Bh] [ebp-1h]
    if ( !ArmageddonMode )
    if ( *((uint8_t *)this + 129)
    || *((uint8_t *)this + 131)
    || (result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 312))(this), !(uint8_t)result) )
    LOBYTE(result) = 0;
    return result;
    v3 = AbstractClass::IsTechnoType(this);
    if ( !ArmageddonMode )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 160))(this);
    if ( (uint8_t)result )
    if ( !v3 )
    goto LABEL_14;
    if ( v3[980] )
    LOBYTE(result) = 0;
    return result;
    if ( v3 )
    result = (*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v3 + 468))(v3);
    if ( (uint8_t)result )
    LOBYTE(result) = 0;
    return result;
    LABEL_14:
    result = g_RadarBlipManager;
    if ( g_RadarBlipManager )
    LOBYTE(result) = 0;
    return result;
    if ( (int)g_SelectionManager > 0 )
    v4 = (void*375 *)(*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 60))(this);
    v5 = (void*375 *)(*(int (__thiscall **)(uint32_t))(**(uint32_t **)g_ObjectClass_CurrentCount + 60))(*(uint32_t *)g_ObjectClass_CurrentCount);
    IsHumanPlayer = House::IsHumanPlayer(v5);
    if ( IsHumanPlayer != (unsigned __int8)House::IsHumanPlayer(v4) || !(unsigned __int8)House::IsHumanPlayer(v5) )
    MapClass::UnselectAll_ClearLimboLaunchers();
    if ( !this
    || (*((uint8_t *)this + 20) & 1) == 0
    || !*(uint8_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 3228) )
    if ( (int)g_SelectionManager < dword_A8ECC0
    || (byte_A8ECC5 || !dword_A8ECC0)
    && dword_A8ECCC > 0
    && ((unsigned __int8 (__thiscall *)(ObjectClass **, int, uint32_t))ObjectClass_CurrentObjects->parent_gap[2])(
    &ObjectClass_CurrentObjects,
    dword_A8ECC0 + dword_A8ECCC,
    0) )
    v7 = g_SelectionManager;
    g_SelectionManager = (wchar_t *)((char *)g_SelectionManager + 1);
    *((uint32_t *)g_ObjectClass_CurrentCount + (uint32_t)v7) = this;
    goto LABEL_38;
    v6 = g_SelectionManager;
    if ( (int)g_SelectionManager >= dword_A8ECC0 )
    if ( (byte_A8ECC5 || !dword_A8ECC0)
    && dword_A8ECCC > 0
    && ((unsigned __int8 (__thiscall *)(ObjectClass **, int, uint32_t))ObjectClass_CurrentObjects->parent_gap[2])(
    &ObjectClass_CurrentObjects,
    dword_A8ECC0 + dword_A8ECCC,
    0) )
    v6 = g_SelectionManager;
    goto LABEL_29;
    LABEL_38:
    Selection::SetCurrent(0);
    *((uint8_t *)this + 131) = 1;
    LOBYTE(result) = 1;
    return result;
    LABEL_29:
    if ( v6 )
    memcpy((char *)g_ObjectClass_CurrentCount + 4, g_ObjectClass_CurrentCount, 4 * (uint32_t)v6);
    *(uint32_t *)g_ObjectClass_CurrentCount = this;
    g_SelectionManager = (wchar_t *)((char *)g_SelectionManager + 1);
    Selection::SetCurrent(0);
    *((uint8_t *)this + 131) = 1;
    LOBYTE(result) = 1;
    return result;
}

// 0x005F4870
int  ObjectClass::GetBoundsRect(#374 *this)
{
    uint32_t *v2; // eax
    int v3; // eax
    __int16 *v4; // esi
    unsigned int v6; // ebp
    int *FoundationSize; // eax
    int v8; // edi
    int v9; // ebx
    int v10; // edx
    int v11; // eax
    int *v12; // eax
    int v13; // ecx
    int v14; // ebp
    int v15; // esi
    int v16; // edx
    int v17; // ebp
    int v18; // eax
    int v19; // esi
    int v20; // edi
    int *v21; // eax
    int v22; // ecx
    int v23; // edx
    int v24; // edi
    int v25; // eax
    int v26; // ecx
    int v27; // edi
    int v29; // [esp+Ch] [ebp-40h]
    int v30; // [esp+10h] [ebp-3Ch]
    int v31[2]; // [esp+14h] [ebp-38h] BYREF
    int v32; // [esp+1Ch] [ebp-30h] BYREF
    int v33; // [esp+20h] [ebp-2Ch]
    int v34; // [esp+24h] [ebp-28h]
    int v35; // [esp+28h] [ebp-24h]
    int v36; // [esp+30h] [ebp-1Ch]
    int v37; // [esp+38h] [ebp-14h]
    uint32_t v38[4]; // [esp+3Ch] [ebp-10h] BYREF
    uint32_t *v39; // [esp+50h] [ebp+4h]
    v2 = (uint32_t *)(*(int (__stdcall **)(int *))(*(uint32_t *)this + 172))(&v32);
    Coord::To_Screen(TacticalClass_Instance, v2, v31);
    v3 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    v4 = (__int16 *)(*(int (__thiscall **)(int))(*(uint32_t *)v3 + 156))(v3);
    if ( !v4 )
    *v39 = dword_AC1350;
    v39[1] = dword_AC1354;
    v39[2] = dword_AC1358;
    v39[3] = dword_AC135C;
    return (int)v39;
    v6 = 0;
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) == 6 && *(uint8_t *)(*((uint32_t *)this + 328) + 5824) )
    v6 = 15;
    FoundationSize = Building::GetFoundationSize(&v32, v6);
    v8 = *FoundationSize;
    v36 = FoundationSize[1];
    v9 = FoundationSize[2];
    v10 = FoundationSize[3];
    v11 = v4[3];
    v37 = v10;
    v12 = Building::GetFoundationSize(v38, v6 + v11 / 2);
    v13 = *v12;
    v33 = v12[1];
    v34 = v12[2];
    v14 = v4[1];
    v15 = v4[2];
    v16 = v12[3];
    v29 = v14;
    v35 = v16;
    v30 = v15;
    if ( v9 <= 0 || (v17 = v37, v37 <= 0) )
    v20 = v12[1];
    v19 = *v12;
    v9 = v12[2];
    v17 = v12[3];
    v36 = v20;
    else if ( v34 <= 0 || v16 <= 0 )
    v19 = v8;
    v20 = v36;
    else
    v18 = v36;
    if ( v8 > v13 )
    v9 += v8 - v13;
    v8 = v13;
    if ( v36 > v33 )
    v17 = v36 - v33 + v37;
    v18 = v33;
    if ( v9 + v8 < v13 + v34 )
    v9 = v34 - v8 + v13 + 1;
    if ( v18 + v17 < v33 + v35 )
    v17 = v33 - v18 + v35 + 1;
    v19 = v8;
    v20 = v18;
    v36 = v18;
    v34 = v9;
    v35 = v17;
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) != 6 || !*(uint32_t *)(*((uint32_t *)this + 328) + 5400) )
    v9 = v34;
    v26 = v35;
    goto LABEL_39;
    v21 = Building::GetFoundationSize(v38, 0);
    v22 = *v21;
    v33 = v21[1];
    v23 = v21[2];
    v34 = v23;
    v24 = v21[3];
    v35 = v24;
    if ( v9 <= 0 || v17 <= 0 )
    v19 = *v21;
    v20 = v21[1];
    v9 = v21[2];
    v25 = v21[3];
    goto LABEL_37;
    if ( v23 <= 0 || v24 <= 0 )
    v20 = v36;
    v26 = v17;
    goto LABEL_39;
    v20 = v36;
    v25 = v17;
    if ( v19 > v22 )
    v9 += v19 - v22;
    v19 = v22;
    if ( v36 > v33 )
    v25 = v36 - v33 + v17;
    v20 = v33;
    if ( v9 + v19 < v22 + v23 )
    v9 = v34 - v19 + v22 + 1;
    if ( v25 + v20 >= v33 + v35 )
    LABEL_37:
    v26 = v25;
    goto LABEL_39;
    v26 = v33 - v20 + v35 + 1;
    LABEL_39:
    v27 = v31[1] + v20 - v30 / 2;
    *v39 = v31[0] + v19 - v29 / 2;
    v39[1] = v27;
    v39[2] = v9;
    v39[3] = v26;
    return (int)v39;
}

// 0x005F4B10
int  ObjectClass::CalcDrawRect(#374 *this)
{
    int result; // eax
    int v3; // edx
    uint32_t *v4; // eax
    int *v5; // ebx
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // esi
    int v10; // edi
    int v11; // ebx
    int v12; // ebx
    int v13; // ecx
    int v14; // [esp+4h] [ebp-20h]
    int v16; // [esp+Ch] [ebp-18h] BYREF
    int v17; // [esp+10h] [ebp-14h]
    int v18; // [esp+14h] [ebp-10h] BYREF
    int v19; // [esp+18h] [ebp-Ch]
    int v20; // [esp+1Ch] [ebp-8h]
    int v21; // [esp+20h] [ebp-4h]
    int *v22; // [esp+28h] [ebp+4h]
    char v23; // [esp+2Ch] [ebp+8h]
    int v24; // [esp+2Ch] [ebp+8h]
    int v25; // [esp+2Ch] [ebp+8h]
    if ( (ArmageddonMode || (result = (int)g_hWnd) == 0 || (v23 || *((uint8_t *)this + 128)) && !*((uint8_t *)this + 129))
    && ((v3 = *(uint32_t *)this,
    *((uint8_t *)this + 128) = 0,
    v4 = (uint32_t *)(*(int (__thiscall **)(void*374 *, int *))(v3 + 172))(this, &v18),
    Coord::To_Screen(TacticalClass_Instance, v4, &v16))
    || (result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this), result == 24)) )
    v19 = Map_VisibleRect;
    v20 = g_Map_VisibleRectOffset;
    v21 = g_DSurface_WindowOffset;
    v5 = v22;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = DSurface_ViewBounds;
    v14 = v22[2];
    if ( v14 > 0 && v22[3] > 0 && g_Map_VisibleRectOffset > 0 && g_DSurface_WindowOffset > 0 )
    v24 = *v22;
    if ( DSurface_ViewBounds < *v22 )
    v10 = *v22;
    v20 += DSurface_ViewBounds - *v22;
    if ( v20 >= 1 )
    v11 = v22[1];
    if ( v19 >= v11 )
    v5 = v22;
    else
    v21 += v19 - v11;
    v5 = v22;
    v19 = v22[1];
    if ( v21 >= 1 )
    v5 = v22;
    if ( v10 + v20 > v14 + v24 )
    v20 = v22[2] + v24 - v10;
    if ( v20 >= 1 )
    v25 = v22[3] + v22[1];
    if ( v21 + v19 <= v25 )
    v12 = v21;
    else
    v12 = v25 - v19;
    if ( v12 >= 1 )
    v7 = v19;
    v8 = v20;
    v6 = v10;
    v9 = v12;
    v5 = v22;
    *v5 = v6;
    v5[1] = v7;
    v5[2] = v8;
    v5[3] = v9;
    if ( *v5 > DSurface_ViewBounds )
    v16 += DSurface_ViewBounds - *v5;
    v13 = v5[1];
    if ( v13 > Map_VisibleRect )
    v17 += Map_VisibleRect - v13;
    result = (*(int (__thiscall **)(void*374 *, int *, int *))(*(uint32_t *)this + 276))(this, &v16, v5);
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

// 0x005F4D10
int  ObjectClass::MarkForRedraw(#374 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 128);
    if ( !(uint8_t)result )
    *((uint8_t *)this + 128) = 1;
    return MapClass::MarkForRedraw(&MapClass_Instance, 0);
    return result;
}

int  ObjectClass::Undeploy(#374 *this)
{
    uint32_t *v2; // eax
    int v3; // ecx
    int v4; // edi
    int result; // eax
    int v6; // [esp+10h] [ebp-20h] BYREF
    int v7; // [esp+14h] [ebp-1Ch]
    uint32_t v8[3]; // [esp+18h] [ebp-18h] BYREF
    uint8_t v9[12]; // [esp+24h] [ebp-Ch] BYREF
    if ( !WTFMode || *((uint8_t *)this + 129) )
    LOBYTE(result) = 0;
    else
    (*(void (__thiscall **)(void*374 *))(*(uint32_t *)this + 336))(this);
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 220))(this, 1);
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    RemoveTarget((int)this);
    AudioController::Stop((uint32_t *)this + 15);
    AudioFile::Stop((uint32_t *)this + 20);
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this)
    && *(uint8_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 564)
    && (!GameMode_Current[0]
    || GameMode_Current[0] == 5
    || (*(int (__stdcall **)(char *))(*((uint32_t *)this + 1) + 16))((char *)this + 4) != -2) )
    VectorClass::RemoveItem(&g_GameConfigManager, (int)this);
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) )
    if ( *(uint32_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 172) )
    v2 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v9);
    v8[0] = *v2;
    v8[1] = v2[1];
    v8[2] = v2[2];
    Coord::To_Screen(TacticalClass_Instance, v8, &v6);
    v3 = *(uint32_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 172);
    v4 = v7 - *(__int16 *)(v3 + 4) / 2;
    v6 -= *(__int16 *)(v3 + 2) / 2;
    v7 = v4;
    Cell::CreateCrater(v6, v4, *(__int16 *)(v3 + 2), *(__int16 *)(v3 + 4), 1);
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 284))(this);
    *((uint8_t *)this + 129) = 1;
    *((uint8_t *)this + 128) = 0;
    LOBYTE(result) = 1;
    return result;
}

int  ObjectClass::Deploy(#374 *this)
{
    int result; // eax
    int v3; // ebx
    void *v4; // eax
    int v5; // eax
    int v6; // ebx
    int *v7; // eax
    uint32_t *v8; // eax
    char *v9; // edx
    int v10; // eax
    int v11; // edi
    int v12; // ebp
    void *v13; // eax
    char *v14; // eax
    int v15; // eax
    int v16; // edx
    char v17; // cl
    char v18; // cl
    int v19; // eax
    int v20; // [esp+2Ch] [ebp-2Ch] BYREF
    char *v21; // [esp+30h] [ebp-28h]
    int v22; // [esp+34h] [ebp-24h] BYREF
    int v23; // [esp+38h] [ebp-20h]
    int v24; // [esp+3Ch] [ebp-1Ch]
    uint32_t v25[3]; // [esp+40h] [ebp-18h] BYREF
    char v26[12]; // [esp+4Ch] [ebp-Ch] BYREF
    int *v27; // [esp+5Ch] [ebp+4h]
    __int16 v28; // [esp+5Ch] [ebp+4h]
    result = *v27;
    if ( *v27 == dword_AC1380 )
    result = dword_AC1384;
    if ( v27[1] == dword_AC1384 )
    result = dword_AC1388;
    if ( v27[2] == dword_AC1388 )
    goto LABEL_41;
    if ( !WTFMode )
    goto LABEL_41;
    if ( !*((uint8_t *)this + 129) )
    goto LABEL_41;
    if ( *((uint8_t *)this + 116) )
    goto LABEL_41;
    if ( !IKnowWhatImDoing )
    v3 = *(uint32_t *)this;
    v4 = Coord::To_Cell(&MapClass_Instance, v27);
    result = (*(int (__thiscall **)(void*374 *, void *, int, int, uint32_t, uint32_t))(v3 + 428))(this, v4, -1, -1, 0, 0);
    if ( result )
    goto LABEL_41;
    v5 = *(uint32_t *)this;
    *((uint8_t *)this + 129) = 0;
    *((uint8_t *)this + 128) = 0;
    v6 = (*(int (__thiscall **)(void*374 *))(v5 + 136))(this);
    v22 = *v27;
    v23 = v27[1];
    v24 = v27[2];
    if ( v6 )
    v7 = (int *)(*(int (__thiscall **)(int, uint32_t *, int *))(*(uint32_t *)v6 + 108))(v6, v25, v27);
    v22 = *v7;
    v23 = v7[1];
    v24 = v7[2];
    (*(void (__thiscall **)(void*374 *, int *))(*(uint32_t *)this + 436))(this, &v22);
    result = (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 1);
    if ( !(uint8_t)result )
    *((uint8_t *)this + 129) = 1;
    LABEL_41:
    LOBYTE(result) = 0;
    return result;
    if ( *((uint8_t *)this + 144) )
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 120))(this) != -1 )
    Targeting::Readd(this);
    if ( v6 )
    if ( *(uint8_t *)(v6 + 564)
    && ((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) != 36
    || (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) == 36 && *(uint8_t *)(v6 + 689))
    && (!GameMode_Current[0]
    || GameMode_Current[0] == 5
    || (*(int (__stdcall **)(char *))(*((uint32_t *)this + 1) + 16))((char *)this + 4) != -2) )
    ObjectClass::SetDeployState((int)this, 0);
    if ( *(uint32_t *)(v6 + 172) )
    v8 = (uint32_t *)(*(int (__thiscall **)(void*374 *, char *))(*(uint32_t *)this + 72))(this, v26);
    v25[0] = *v8;
    v25[1] = v8[1];
    v25[2] = v8[2];
    Coord::To_Screen(TacticalClass_Instance, v25, &v20);
    v9 = (char *)TacticalClass_Instance[45].lpVtbl + (unsigned int)v21;
    v10 = *(uint32_t *)this;
    v20 += (int)TacticalClass_Instance[44].lpVtbl;
    v21 = v9;
    v11 = *(uint32_t *)((*(int (__thiscall **)(void*374 *))(v10 + 136))(this) + 172);
    v12 = (int)&v21[-(*(__int16 *)(v11 + 4) / 2)];
    v20 -= *(__int16 *)(v11 + 2) / 2;
    v21 = (char *)v12;
    v13 = __2_YAPAXI_Z(0x40u);
    if ( v13 )
    AlphaShapeClass::CTOR((int)v13, (int)this, v20, (int)v21);
    if ( !IKnowWhatImDoing )
    Cell::CreateCrater(
    v20 - (unsigned int)TacticalClass_Instance[44].lpVtbl,
    v21 - (char *)TacticalClass_Instance[45].lpVtbl,
    *(__int16 *)(v11 + 2),
    *(__int16 *)(v11 + 4),
    1);
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    if ( *(uint8_t *)(result + 570) )
    v14 = (char *)__2_YAPAXI_Z(0x210u);
    result = v14 ? (int)ObjectClass::checkLimbo(v14) : 0;
    *((uint32_t *)this + 42) = result;
    if ( result )
    v28 = *(_WORD *)((char *)&RulesClass_Instance[1].DMisl[7] + 3);
    if ( (uint8_t)v28 || __PAIR16__(HIBYTE(v28), 0) != BYTE1(RulesClass_Instance[1].DMisl[8]) )
    v18 = BYTE1(RulesClass_Instance[1].DMisl[8]);
    *(_WORD *)result = *(_WORD *)((char *)&RulesClass_Instance[1].DMisl[7] + 3);
    *(uint8_t *)(result + 2) = v18;
    else
    v15 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    v16 = *((uint32_t *)this + 42);
    v17 = *(uint8_t *)(v15 + 573);
    *(_WORD *)v16 = *(_WORD *)(v15 + 571);
    *(uint8_t *)(v16 + 2) = v17;
    v19 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    result = ObjectClass::updateMissionState(*((uint32_t **)this + 42), *(uint32_t *)(v19 + 576));
    *(uint32_t *)(*((uint32_t *)this + 42) + 4) = this;
    LOBYTE(result) = 1;
    return result;
}

int  ObjectClass::Destroy2(#374 *this)
{
    uint32_t *v2; // ecx
    void*375 *v3; // edi
    bool v4; // bl
    int v5; // edx
    int result; // eax
    char v7; // [esp+Ch] [ebp+4h]
    v2 = (uint32_t *)*((uint32_t *)this + 42);
    if ( v2 )
    TacticalClass::GetField(v2);
    *((uint32_t *)this + 42) = 0;
    v3 = (void*375 *)(*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 60))(this);
    v4 = 0;
    if ( v7 )
    goto LABEL_10;
    if ( this && (*((uint8_t *)this + 20) & 1) != 0 )
    v4 = (*(unsigned __int8 (__thiscall **)(void*374 *))(*(uint32_t *)this + 808))(this) != 0;
    if ( !v3 || !(unsigned __int8)House::IsHumanPlayer(v3) && !v4 )
    LABEL_10:
    (*(void (__thiscall **)(void*374 *))(*(uint32_t *)this + 336))(this);
    if ( (void*374 *)MapClass::GetScrollMode((int)&MapClass_Instance) == this )
    MapClass::SetScrollMode((int)&MapClass_Instance, 0);
    LOBYTE(v5) = v7;
    AbstractClass::AnnounceExpiredPointer((void **)this, v5);
    return result;
}

int  ObjectClass::ProcessInputKey(#374 *this)
{
    double v2; // [esp+0h] [ebp-8h]
    int v3; // [esp+10h] [ebp+8h]
    if ( v3 == 13 )
    (*(void (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 2);
    else
    if ( v3 != 34 )
    return 0;
    v2 = (double)*((int *)this + 27);
    if ( v2 / (double)*(int *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) + 160) >= *(double *)&RulesClass_Instance[1].ChronoBeam )
    return 10;
    return 1;
}

int  ObjectClass::UpdateProductionDisplay(#374 *this)
{
    int result; // eax
    int v3; // ebx
    int v4; // edi
    int v5; // edx
    int v6; // [esp+Ch] [ebp+4h] BYREF
    if ( !*((uint8_t *)this + 129) )
    v3 = v6;
    if ( v6 == 2 )
    if ( !*((uint8_t *)this + 128) && *((uint8_t *)this + 116) )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 308))(this);
    LOBYTE(result) = 1;
    return result;
    else
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) != 6
    || (result = *((uint32_t *)this + 328), !*(uint32_t *)(result + 3672))
    || v3 )
    result = (int)AbstractClass::IsTechnoType(this);
    v4 = result;
    if ( result )
    (*(void (__thiscall **)(int))(*(uint32_t *)result + 704))(result);
    (*(void (__thiscall **)(int))(*(uint32_t *)v4 + 56))(v4);
    result = (*(int (__thiscall **)(void*374 *, int *))(*(uint32_t *)this + 440))(this, &v6);
    if ( (v3 == 1 || v3 == 3) && !*((uint8_t *)this + 116) )
    v5 = *(uint32_t *)this;
    *((uint8_t *)this + 116) = 1;
    result = (*(int (__thiscall **)(void*374 *))(v5 + 308))(this);
    LOBYTE(result) = 1;
    return result;
    if ( !v3 && *((uint8_t *)this + 116) )
    *((uint8_t *)this + 116) = 0;
    LOBYTE(result) = 1;
    return result;
    LOBYTE(result) = 0;
    return result;
}

int  ObjectClass::ParachuteDrop(#374 *this)
{
    int *v1; // edi
    int result; // eax
    int v4; // ebp
    int v5; // ecx
    int v6; // edx
    int v7; // eax
    uint32_t *v8; // edi
    int v9; // eax
    int v10; // ecx
    int v11; // edi
    int TileIndex; // [esp-10h] [ebp-28h]
    int v13; // [esp-Ch] [ebp-24h]
    int v14[3]; // [esp+Ch] [ebp-Ch] BYREF
    int v15; // [esp+1Ch] [ebp+4h] BYREF
    v1 = (int *)v15;
    if ( IsCoordVisibleMap(&MapClass_Instance, (uint32_t *)v15) )
    *((uint8_t *)this + 141) = 1;
    result = (int)Coord::To_Cell(&MapClass_Instance, v1);
    v4 = result;
    if ( result )
    if ( (*(uint32_t *)(result + 320) & 0x100) == 0
    || (*((uint8_t *)this + 140) = 1, result = *(uint32_t *)(result + 320), (result & 0x200) != 0) )
    if ( !this )
    goto LABEL_23;
    LOBYTE(v15) = *((uint8_t *)this + 20) & 1;
    if ( !(uint8_t)v15
    || (v5 = *(uint32_t *)((*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 132))(this) + 1460),
    LOWORD(v15) = *v1 / 256,
    v13 = v5,
    v6 = *((unsigned __int8 *)this + 140),
    HIWORD(v15) = v1[1] / 256,
    TileIndex = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v15, v5, v6),
    v7 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 132))(this),
    Cell::IsBuildable(v4, *(uint32_t *)(v7 + 1660), 0, 0, TileIndex, v13, -1, 1)) )
    LABEL_23:
    result = (*(int (__thiscall **)(void*374 *, int *, int))(*(uint32_t *)this + 216))(this, v1, 128);
    if ( (uint8_t)result )
    (*(void (__thiscall **)(void*374 *, int *))(*(uint32_t *)this + 436))(this, v1);
    if ( (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this) == 8 )
    result = (int)__2_YAPAXI_Z(0x1C8u);
    if ( !result )
    LABEL_19:
    LOBYTE(result) = 1;
    return result;
    result = (int)AnimClass::ctor(
    (void **)result,
    *(void **)&RulesClass_Instance->CurrentStrengthDamage,
    v1,
    0,
    1,
    (void *)0x600,
    0,
    0);
    v8 = (uint32_t *)result;
    else
    v9 = *v1;
    v10 = v1[1];
    v11 = v1[2] + 75;
    v14[0] = v9;
    v14[1] = v10;
    v14[2] = v11;
    result = (int)__2_YAPAXI_Z(0x1C8u);
    if ( result )
    result = (int)AnimClass::ctor(
    (void **)result,
    (void *)RulesClass_Instance->Technician,
    v14,
    0,
    1,
    (void *)0x600,
    0,
    0);
    v8 = (uint32_t *)result;
    else
    v8 = 0;
    *((uint32_t *)this + 34) = v8;
    if ( v8 )
    BuildingClass::AimTurret(v8, this);
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 44))(this);
    if ( result != 8 )
    v8[53] = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 484))(this);
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 444))(this);
    v8[63] = *(__int16 *)(result + 266);
    goto LABEL_19;
    LOBYTE(result) = 0;
    return result;
}

// 0x005F5B90
int  ObjectClass::GetOrCreateResHandle(#374 *this)
{
    int v3; // eax
    int v4; // [esp+Ch] [ebp+4h]
    if ( (byte_AC1398 & 1) == 0 )
    byte_AC1398 |= 1u;
    dword_AC139C = 2147450879;
    atexit(nullsub_205);
    if ( !(*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this) )
    return (int)&dword_AC139C;
    v3 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    return (*(int (__thiscall **)(int, int))(*(uint32_t *)v3 + 144))(v3, v4);
}

// 0x005F5C20
int  ObjectClass::Fire(#374 *this)
{
    int *v2; // edi
    int v3; // ebx
    int v5; // [esp-4h] [ebp-10h]
    int v6; // [esp+10h] [ebp+4h]
    int v7; // [esp+14h] [ebp+8h]
    v2 = (int *)(*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    v3 = *v2;
    v5 = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 60))(this);
    return (*(int (__thiscall **)(int *, int, int, uint32_t, int))(v3 + 148))(v2, v6, v7, 0, v5);
}

// 0x005F5F30
int  ObjectClass::GetMember41(#374 *this)
{
    return *((uint32_t *)this + 41);
}

int  ObjectClass::GetZAboveGround(#374 *this)
{
    int v2; // ecx
    uint32_t v4[3]; // [esp+4h] [ebp-Ch] BYREF
    v4[0] = *((uint32_t *)this + 39);
    v4[1] = *((uint32_t *)this + 40);
    v4[2] = *((uint32_t *)this + 41);
    v2 = *((uint32_t *)this + 41) - Cell::GetGroundHeight(v4);
    if ( *((uint8_t *)this + 140) )
    v2 -= dword_AC13BC;
    return v2;
}

int  ObjectClass::SetZ(#374 *this)
{
    int v2; // edi
    int result; // eax
    int v4; // [esp+8h] [ebp-Ch] BYREF
    int v5; // [esp+Ch] [ebp-8h]
    int v6; // [esp+10h] [ebp-4h]
    int v7; // [esp+18h] [ebp+4h]
    v2 = v7;
    if ( *((uint8_t *)this + 140) )
    v2 = dword_AC13BC + v7;
    if ( *((uint8_t *)this + 116) )
    (*(void (__thiscall **)(void*374 *, uint32_t))(*(uint32_t *)this + 292))(this, 0);
    v4 = *((uint32_t *)this + 39);
    v5 = *((uint32_t *)this + 40);
    v6 = *((uint32_t *)this + 41);
    *((uint32_t *)this + 41) = v2 + Cell::GetGroundHeight(&v4);
    return (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 292))(this, 1);
    else
    v4 = *((uint32_t *)this + 39);
    v5 = *((uint32_t *)this + 40);
    v6 = *((uint32_t *)this + 41);
    result = v2 + Cell::GetGroundHeight(&v4);
    *((uint32_t *)this + 41) = result;
    return result;
}

int  ObjectClass::GetCoords(#374 *this)
{
    int *v2; // ecx
    CoordStruct *out; // [esp+8h] [ebp+4h]
    v2 = (int *)((char *)this + 156);
    out->X = *v2;
    out->Y = v2[1];
    out->Z = v2[2];
    return (int)out;
}

// 0x005F65D0
int  ObjectClass::DelegateVt69(#374 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    int v3; // [esp+8h] [ebp+8h]
    return (*(int (__thiscall **)(void*374 *, int, int))(*(uint32_t *)this + 276))(this, v2, v3);
}

int  ObjectClass::Destroy(#374 *this)
{
    int v2; // ecx
    int result; // eax
    v2 = *((uint32_t *)this + 14);
    if ( v2 )
    ObjectClass::CleanupAudioAndRefs(v2);
    if ( this && (*((uint8_t *)this + 20) & 1) != 0 )
    TechnoClass::CleanupAll(this, 0);
    AbstractClass::AnnounceExpiredPointer((void **)this, 1);
    (*(void (__thiscall **)(void*374 *))(*(uint32_t *)this + 212))(this);
    *((uint8_t *)this + 144) = 0;
    result = dword_B0F6A0;
    if ( g_LaserDrawConfig < dword_B0F6A0
    || (byte_B0F6A5 || !dword_B0F6A0)
    && dword_B0F6AC > 0
    && (result = (*(int (__thiscall **)(int *, int, uint32_t))(g_DiskLaserManager + 8))(
    &g_DiskLaserManager,
    dword_B0F6A0 + dword_B0F6AC,
    0),
    (uint8_t)result) )
    result = g_LaserDrawConfig++;
    *((uint32_t *)dword_B0F69C + result) = this;
    return result;
}

// 0x005F6690
int  ObjectClass::IsActive(#374 *this)
{
    return *((uint8_t *)this + 144) == 0;
}

int  ObjectClass::SetPosition(#374 *this)
{
    uint32_t *v1; // ecx
    int result; // eax
    uint32_t *v3; // [esp+4h] [ebp+4h]
    v1 = (uint32_t *)((char *)this + 156);
    *v1 = *v3;
    v1[1] = v3[1];
    result = v3[2];
    v1[2] = result;
    return result;
}

int  ObjectClass::GetCellCoords(#374 *this)
{
    int *v1; // esi
    int v2; // ecx
    int v3; // eax
    int v5; // [esp+4h] [ebp-Ch] BYREF
    int v6; // [esp+8h] [ebp-8h]
    int v7; // [esp+Ch] [ebp-4h]
    v1 = (int *)((char *)this + 156);
    v5 = *((uint32_t *)this + 39);
    v6 = *((uint32_t *)this + 40);
    v7 = *((uint32_t *)this + 41);
    Coord::To_Cell(&MapClass_Instance, &v5);
    v2 = v1[2];
    v3 = v1[1];
    v5 = *v1;
    v7 = v2;
    v6 = v3;
    return (int)Coord::To_Cell(&MapClass_Instance, &v5);
}

// 0x005F69C0
int  ObjectClass::CoordToCell(#374 *this)
{
    uint32_t *v1; // eax
    int v3; // [esp+8h] [ebp-10h]
    uint8_t v4[12]; // [esp+Ch] [ebp-Ch] BYREF
    uint32_t *v5; // [esp+1Ch] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *, uint32_t))(*(uint32_t *)this + 76))(this, v4, 0);
    LOWORD(v3) = *v1 / 256;
    HIWORD(v3) = v1[1] / 256;
    *v5 = v3;
    return (int)v5;
}

// 0x005F6A10
int  ObjectClass::GetCell(#374 *this)
{
    uint32_t *v1; // eax
    int v3; // [esp+8h] [ebp-14h]
    int v4; // [esp+Ch] [ebp-10h] BYREF
    uint8_t v5[12]; // [esp+10h] [ebp-Ch] BYREF
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *, uint32_t))(*(uint32_t *)this + 76))(this, v5, 0);
    LOWORD(v3) = *v1 / 256;
    HIWORD(v3) = v1[1] / 256;
    v4 = v3;
    return (int)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v4);
}

int  ObjectClass::CheckGroundHeightDiff(#374 *this)
{
    char v2; // bl
    uint32_t *v3; // eax
    int GroundHeight; // edi
    int v5; // ebp
    int result; // eax
    uint32_t v7[3]; // [esp+10h] [ebp-18h] BYREF
    uint32_t v8[3]; // [esp+1Ch] [ebp-Ch] BYREF
    int v9; // [esp+2Ch] [ebp+4h]
    v2 = *((uint8_t *)this + 140);
    v3 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint32_t *, int))(*(uint32_t *)this + 76))(this, v8, v9);
    v7[0] = *v3;
    v7[1] = v3[1];
    v7[2] = v3[2];
    GroundHeight = Cell::GetGroundHeight(v7);
    v8[0] = *((uint32_t *)this + 39);
    v8[1] = *((uint32_t *)this + 40);
    v8[2] = *((uint32_t *)this + 41);
    v5 = Cell::GetGroundHeight(v8);
    if ( *((uint8_t *)this + 140) )
    LABEL_5:
    result = dword_AC13C8;
    goto LABEL_6;
    result = dword_AC13C8;
    if ( v5 - GroundHeight > 3 * dword_AC13C8 )
    result = (int)Coord::To_Cell(&MapClass_Instance, v7);
    if ( (*(uint32_t *)(result + 320) & 0x100) != 0 )
    LOBYTE(result) = 1;
    return result;
    goto LABEL_5;
    LABEL_6:
    if ( *((uint8_t *)this + 140) && GroundHeight - v5 > 3 * result )
    LOBYTE(result) = 0;
    else
    LOBYTE(result) = v2;
    return result;
}

// 0x005F6B60
int  ObjectClass::IsBelowScreen(#374 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 116)
    && (result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 456))(this), result < 2 * dword_AC13C8);
    return result;
}

// 0x005F6B90
int  ObjectClass::IsHeightAboveThreshold(#374 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 116)
    && (result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 456))(this), result >= 2 * dword_AC13C8);
    return result;
}

// 0x005F6BD0
int  ObjectClass::GetBoundingSize(#374 *this)
{
    int v2; // edi
    uint8_t v4[12]; // [esp+8h] [ebp-18h] BYREF
    uint8_t v5[12]; // [esp+14h] [ebp-Ch] BYREF
    v2 = (*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 172))(this, v4);
    return *(uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 172))(this, v5) + *(uint32_t *)(v2 + 4);
}

// 0x005F6C10
int  ObjectClass::IsAboveScreenMargin(#374 *this)
{
    int result; // eax
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 456))(this);
    LOBYTE(result) = result > -20;
    return result;
}

// 0x005F6C30
int  ObjectClass::IsPlayerOwnedAndCheck(#374 *this)
{
    int result; // eax
    if ( !(*(unsigned __int8 (__thiscall **)(void*374 *, void*375 *))(*(uint32_t *)this + 200))(this, HouseClass_Player)
    || (result = (*(int (__thiscall **)(void*374 *, int))(*(uint32_t *)this + 208))(this, 1)) != 0 )
    result = (*(int (__thiscall **)(void*374 *))(*(uint32_t *)this + 136))(this);
    LOBYTE(result) = *(uint8_t *)(result + 560);
    else
    LOBYTE(result) = 0;
    return result;
}

int  ObjectClass::GetCoords_Alt(#374 *this)
{
    uint32_t *v1; // ecx
    uint8_t v3[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+14h] [ebp+4h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*374 *, uint8_t *))(*(uint32_t *)this + 72))(this, v3);
    *v4 = *v1;
    v4[1] = v1[1];
    v4[2] = v1[2];
    return (int)v4;
}

// 0x005F6CB0
int  ObjectClass::CheckFlagD0(uint32_t *this, int a2)
{
    int result; // eax
    result = a2;
    *(this + 25) = a2;
    if ( a2 == -1 )
    return AudioFile::Stop(this + 20);
    return result;
}

// 0x005F6DA0
int  ObjectClass::ResetPointerIfMatch(#374 *this)
{
    int result; // eax
    int v2; // [esp+4h] [ebp+4h]
    result = v2;
    if ( v2 == *((uint32_t *)this + 34) )
    *((uint32_t *)this + 34) = 0;
    return result;
}

int  ObjectClass::_vt08(#374 *this)
{
    char v3; // [esp+8h] [ebp+4h]
    ObjectClass::Dtor(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}

char  ObjectClass::_vt2(uint8_t *this)
{
    return *(this + 8);
}

int  ObjectClass::ProcessGroupInput(int this, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // ecx
    int v7; // ecx
    int v8; // edi
    uint32_t *i; // eax
    int v11; // edx
    int v12; // eax
    uint32_t *v13; // ecx
    int v14; // edx
    int v15; // eax
    uint32_t *v16; // esi
    uint32_t *j; // ecx
    v5 = *(uint32_t *)(this + 212);
    if ( a3 != v5 )
    v6 = *(uint32_t *)(this + 216);
    *(uint32_t *)(this + 216) = v5;
    *(uint32_t *)(this + 220) = v6;
    *(uint32_t *)(this + 212) = a3;
    if ( a3 == 3 )
    v7 = *(uint32_t *)(this + 232);
    v8 = 0;
    if ( v7 > 0 )
    for ( i = *(uint32_t **)(this + 228); a2 != *i; ++i )
    if ( ++v8 >= v7 )
    return ObjectClass::ProcessInputKey((void*374 *)this);
    ObjectClass::ProcessInputKey((void*374 *)this);
    *(uint32_t *)(*(uint32_t *)(this + 228) + 4 * v8) = 0;
    return 1;
    return ObjectClass::ProcessInputKey((void*374 *)this);
    if ( a3 != 2 || !*(uint32_t *)(this + 108) )
    return ObjectClass::ProcessInputKey((void*374 *)this);
    if ( !Object::IsAlliedWithObjectHouse(*(uint32_t **)(a2 + 540), this) )
    return 10;
    if ( this && (*(uint8_t *)(this + 20) & 1) != 0 && !Object::IsAlliedWithObjectHouse(*(uint32_t **)(this + 540), a2) )
    return 10;
    if ( a2 )
    v11 = *(uint32_t *)(this + 232);
    v12 = 0;
    if ( v11 > 0 )
    v13 = *(uint32_t **)(this + 228);
    while ( *v13 != a2 )
    ++v12;
    ++v13;
    if ( v12 >= v11 )
    goto LABEL_23;
    if ( v12 != -1 )
    return 1;
    LABEL_23:
    v14 = *(uint32_t *)(this + 232);
    v15 = 0;
    if ( v14 <= 0 )
    return 10;
    v16 = *(uint32_t **)(this + 228);
    for ( j = v16; *j; ++j )
    if ( ++v15 >= v14 )
    return 10;
    v16[v15] = a2;
    return 1;
}

// 0x0065AAA0
int  ObjectClass::ThunkTo636(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    int v3; // [esp+8h] [ebp+8h]
    return (*(int (__thiscall **)(void*377 *, int, void *, int))(*(uint32_t *)this + 636))(this, v2, &unk_A8EC30, v3);
}

// 0x0065ACB0
int  ObjectClass::ThunkTo159x4(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    if ( **((uint32_t **)this + 57) )
    return (*(int (__thiscall **)(void*377 *, int, void *, uint32_t))(*(uint32_t *)this + 636))(
    this,
    v2,
    &unk_A8EC30,
    **((uint32_t **)this + 57));
    else
    return 0;
}

int  ObjectClass::sub_6A5000(int *this)
{
    int v1; // esi
    int result; // eax
    PowerClass::Stub(this);
    v1 = 4;
    do
    result = SearchMIXFile(aDarkenShp, 0);
    --v1;
    dword_B07BC0 = result;
    while ( v1 );
    return result;
}

int __stdcall ObjectClass::sub_6ABA40(int a1, int a2, int a3)
{
    Mouse::SetCursor((int)&MapClass_Instance, 0, 0);
    return 1;
}

uint32_t * ObjectClass::sub_6AC7A0(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char * ObjectClass::sub_6AC7F0(char *Block, char a2)
{
    char *v3; // esi
    int v4; // edi
    v3 = Block + 21484;
    v4 = 4;
    do
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
    while ( v4 );
    RadarClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x006F3270
int  ObjectClass::Vt34Thunk(#377 *this)
{
    return (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 136))(this);
}

// 0x00708B30
int  ObjectClass::GetTypeVt28(#377 *this)
{
    int v1; // eax
    v1 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 112))(v1);
}

int  ObjectClass::GetCellCoordsV2(#377 *this)
{
    uint32_t *v1; // eax
    uint8_t v3[12]; // [esp+0h] [ebp-Ch] BYREF
    uint32_t *v4; // [esp+10h] [ebp+4h]
    int v5; // [esp+14h] [ebp+8h]
    int v6; // [esp+14h] [ebp+8h]
    v1 = (uint32_t *)(*(int (__thiscall **)(void*377 *, uint8_t *, int))(*(uint32_t *)this + 168))(this, v3, v5);
    LOWORD(v6) = *v1 / 256;
    HIWORD(v6) = v1[1] / 256;
    *v4 = v6;
    return (int)v4;
}

// 0x0070C5B0
int  ObjectClass::GetShroudByte(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 624);
    return result;
}

// 0x0070C5C0
int  ObjectClass::GetFogByte(#377 *this)
{
    int result; // eax
    LOBYTE(result) = *((uint8_t *)this + 625);
    return result;
}

// 0x0070C5D0
int  ObjectClass::HasSubObject(#377 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 157);
    LOBYTE(result) = result && *(uint32_t *)(result + 40);
    return result;
}

// 0x0070C5F0
int  ObjectClass::IsNotShrouded(#377 *this)
{
    int result; // eax
    LOBYTE(result) = !*((uint8_t *)this + 624) && !*((uint8_t *)this + 625);
    return result;
}

// 0x0070DD70
int  ObjectClass::CheckTypeFlag1681(#377 *this)
{
    return *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1681) == 0;
}

// 0x0070DDA0
int  ObjectClass::CheckTypeFlag1681_2(#377 *this)
{
    return *(uint8_t *)((*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this) + 1681) == 0;
}

// 0x0070E340
int  ObjectClass::ResetTimer2(#377 *this)
{
    uint32_t *v1; // ecx
    int v3; // [esp+4h] [ebp-8h]
    v1 = (uint32_t *)((char *)this + 424);
    *v1 = CurrentFrame;
    v1[1] = v3;
    v1[2] = 0;
    return v3;
}

int  ObjectClass::GetTypeVt40(#377 *this)
{
    int v1; // eax
    v1 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 160))(v1);
}

// 0x0070F090
int  ObjectClass::GetTypeVt41(#377 *this)
{
    int v1; // eax
    v1 = (*(int (__thiscall **)(void*377 *))(*(uint32_t *)this + 132))(this);
    return (*(int (__thiscall **)(int))(*(uint32_t *)v1 + 164))(v1);
}

// 0x00710410
int  ObjectClass::ClearPointerRefs(#377 *this)
{
    int v2; // [esp+4h] [ebp+4h]
    if ( v2 == *((uint32_t *)this + 75) )
    *((uint32_t *)this + 75) = 0;
    if ( v2 == *((uint32_t *)this + 117) )
    *((uint32_t *)this + 117) = 0;
    if ( v2 == *((uint32_t *)this + 178) )
    *((uint32_t *)this + 178) = 0;
    if ( v2 == *((uint32_t *)this + 76) )
    *((uint32_t *)this + 76) = 0;
    return ObjectClass::ResetPointerIfMatch(this);
}

int  ObjectClass::FreeCaptureManager(#377 *this)
{
    uint32_t *v1; // ecx
    int result; // eax
    v1 = (uint32_t *)*((uint32_t *)this + 175);
    if ( v1 )
    return CaptureManager::FreeAll(v1);
    return result;
}

int  ObjectClass::sub_72A4A0(int this, int a2)
{
    int v3; // eax
    int v4; // edi
    int Instance; // eax
    int v6; // edx
    uint32_t *v7; // ebp
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // edi
    signed int v12; // ebx
    DWORD Time; // eax
    int v14; // ecx
    signed int v15; // edx
    unsigned __int8 v16; // al
    int v18; // [esp-8h] [ebp-30h]
    uint32_t *v19; // [esp+Ch] [ebp-1Ch]
    int v20; // [esp+10h] [ebp-18h]
    int v21[2]; // [esp+18h] [ebp-10h] BYREF
    int v22; // [esp+20h] [ebp-8h]
    int v23; // [esp+24h] [ebp-4h]
    if ( *(uint8_t *)(this + 64) )
    return 0;
    if ( !GadgetClass::ClearState((uint8_t *)this, a2) )
    return 0;
    v3 = *(uint32_t *)(this + 52);
    if ( !g_AnimClass_SaveState )
    return 0;
    if ( v3 <= 0 || v3 >= g_AnimClass_SaveState )
    v3 = 0;
    v4 = *((uint32_t *)BuildingTypeClass_AnimTable + v3);
    if ( !v4 )
    return 0;
    Instance = TextRenderer::GetInstance();
    v6 = *(uint32_t *)(this + 12);
    v7 = (uint32_t *)Instance;
    v19 = (uint32_t *)Instance;
    v21[1] = *(uint32_t *)(this + 16);
    v8 = *(uint32_t *)(this + 56);
    v21[0] = v6;
    if ( v8 < 0 )
    v8 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 124))(DSurface_Hidden_2);
    v22 = v8;
    v23 = v7[7];
    v9 = (*(int (__thiscall **)(int))(*(uint32_t *)DSurface_Hidden_2 + 124))(DSurface_Hidden_2);
    if ( v22 + v21[0] - v9 > 0 )
    v22 = v9 - v21[0];
    if ( v9 - v21[0] <= 0 || v23 <= 0 )
    return 0;
    v10 = Color::ConvertToRGB((unsigned __int8 *)(v4 + 776), (int)&a2);
    LOWORD(v20) = *(_WORD *)v10;
    BYTE2(v20) = *(uint8_t *)(v10 + 2);
    v11 = (unsigned __int8)*(_WORD *)v10 | (*(unsigned __int16 *)((char *)&v20 + 1) << 8);
    v12 = wcslen(*(const wchar_t **)(this + 48));
    if ( *(uint8_t *)(this + 65) )
    Time = timeGetTime();
    v14 = *(uint32_t *)(this + 68);
    if ( v14 )
    v7 = v19;
    *(uint32_t *)(this + 68) = v14 + ((Time - *(uint32_t *)(this + 72)) >> 4);
    else
    *(uint32_t *)(this + 68) = 1;
    v15 = *(uint32_t *)(this + 68);
    if ( v14 != v15 )
    *(uint32_t *)(this + 72) = Time;
    if ( v15 <= v12 )
    PlayVocClass(HIDWORD(RulesClass_Instance->SpotlightAngle), 0x2000, 1.0, 0);
    v18 = *(uint32_t *)(this + 68);
    v16 = (*(int (__thiscall **)(int))(*(uint32_t *)this + 88))(this);
    DrawTextRendererMultiline(
    (uint32_t *)DSurface_Hidden_2,
    v21,
    *(wchar_t **)(this + 48),
    v12,
    v7,
    v11,
    (signed int *)(this + 60),
    v16,
    0,
    1,
    v18);
    return 1;
}

int  ObjectClass::sub_72A660(uint32_t *this, int a2)
{
    *(this + 12) = a2;
    return a2;
}

uint32_t * ObjectClass::sub_72A670(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

