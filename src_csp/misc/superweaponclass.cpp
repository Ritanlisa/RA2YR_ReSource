#include "superweaponclass.hpp"

// 0x00539890
int  SuperWeaponClass::LoadFromSaveStream(int *this)
{
    int result; // eax
    int v3; // eax
    int v4; // edi
    int v5; // ecx
    int v6; // ecx
    int v7; // edi
    int v8; // edx
    int v9; // edx
    int i; // edi
    int v11; // eax
    int v12; // [esp+140h] [ebp-8h] BYREF
    int v13; // [esp+144h] [ebp-4h] BYREF
    result = (*(int (__stdcall **)(int *, char *, int, uint32_t))(*this + 16))(this, &LightningStorm_Active, 1, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &LightningStorm_StartTime, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &LightningStorm_Duration, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &LightningStorm_Deferment, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, char *, int, uint32_t))(*this + 16))(
    this,
    &LightningStorm_TimeToEnd,
    1,
    0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &NukeFlash_StartTime, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &NukeFlash_Duration, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &NukeFlash_Status, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &PsyDom_Status, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(this, &PsyDom_Anim, 4, 0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(
    this,
    &LightningStorm_Coords,
    4,
    0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(*this + 16))(
    this,
    &PsyDom_Coords,
    4,
    0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, void*375 **, int, uint32_t))(*this + 16))(
    this,
    &LightningStorm_Owner,
    4,
    0);
    if ( result >= 0 )
    result = (*(int (__stdcall **)(int *, void*375 **, int, uint32_t))(*this + 16))(
    this,
    &PsyDom_Owner,
    4,
    0);
    if ( result >= 0 )
    v3 = *this;
    v12 = dword_A9FA70;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(this, &v12, 4, 0);
    if ( result >= 0 )
    v4 = 0;
    if ( v12 <= 0 )
    LABEL_19:
    v6 = *this;
    v12 = dword_A9F9E0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 16))(this, &v12, 4, 0);
    if ( result >= 0 )
    v7 = 0;
    if ( v12 <= 0 )
    LABEL_23:
    v9 = *this;
    v12 = dword_A9FA28;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v9 + 16))(
    this,
    &v12,
    4,
    0);
    if ( result >= 0 )
    for ( i = 0; i < v12; ++i )
    v11 = *this;
    v13 = *((uint32_t *)dword_A9FA1C + i);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v11 + 16))(
    this,
    &v13,
    4,
    0);
    if ( result < 0 )
    break;
    else
    while ( 1 )
    v8 = *this;
    v13 = *((uint32_t *)dword_A9F9D4 + v7);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v8 + 16))(
    this,
    &v13,
    4,
    0);
    if ( result < 0 )
    break;
    if ( ++v7 >= v12 )
    goto LABEL_23;
    else
    while ( 1 )
    v5 = *this;
    v13 = *((uint32_t *)dword_A9FA64 + v4);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v5 + 16))(
    this,
    &v13,
    4,
    0);
    if ( result < 0 )
    break;
    if ( ++v4 >= v12 )
    goto LABEL_19;
    return result;
}

char  SuperWeaponClass::CreateChemLauncher(uint32_t *this, int a2, int a3, int a4, int a5)
{
    int v5; // edi
    uint32_t *v6; // eax
    int v7; // esi
    void *v8; // eax
    int *UIObjectCOM; // esi
    double v10; // st7
    int v11; // eax
    int v13; // [esp-10h] [ebp-60h]
    int v14; // [esp-Ch] [ebp-5Ch]
    int v15; // [esp+8h] [ebp-48h] BYREF
    int v16; // [esp+Ch] [ebp-44h] BYREF
    double v17; // [esp+10h] [ebp-40h] BYREF
    double v18; // [esp+18h] [ebp-38h] BYREF
    double v19; // [esp+20h] [ebp-30h]
    int v20; // [esp+2Ch] [ebp-24h] BYREF
    int v21; // [esp+30h] [ebp-20h]
    int GroundHeight; // [esp+34h] [ebp-1Ch]
    _QWORD v23[3]; // [esp+38h] [ebp-18h] BYREF
    v15 = *(uint32_t *)ScenarioClass::Get_Waypoint_Location(&v16, *(this + 17));
    GroundHeight = 0;
    v21 = (SHIWORD(v15) << 8) + 128;
    v20 = ((__int16)v15 << 8) + 128;
    GroundHeight = Cell::GetGroundHeight(&v20);
    if ( (*((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15) + 80) & 0x100) != 0 )
    GroundHeight += dword_B0E6D4;
    LOWORD(v16) = v20 / 256;
    HIWORD(v16) = v21 / 256;
    v5 = *(uint32_t *)JumpjetLocomotionClass::ClampToCellBounds(&v17, &v16, 0);
    v16 = v5;
    v6 = (uint32_t *)*((uint32_t *)g_WeaponTypeConfig + SuperWeaponClass::FindByName(aChemlauncher));
    v7 = v6[40];
    v14 = v6[43];
    v13 = v6[41];
    v8 = Coord::To_Cell(&MapClass_Instance, &v20);
    UIObjectCOM = (int *)CreateUIObjectCOM(v7, (int)v8, 0, v13, v14, 20, 0);
    if ( !UIObjectCOM )
    return 0;
    v17 = Math::ArcTan2(-0.00009587672516830327);
    v17 = Math::SinCos(1.570748388432313) * v17 * 100.0;
    v18 = Math::ArcTan2(-0.00009587672516830327);
    v10 = Math::ArcTan2(1.570748388432313);
    v19 = v17;
    *(double *)&v23[1] = v17;
    v18 = v10 * v18 * 100.0;
    *(double *)v23 = v18;
    *(double *)&v23[2] = Math::SinCos(-0.00009587672516830327) * 100.0;
    v11 = *UIObjectCOM;
    LODWORD(v18) = ((__int16)v5 << 8) + 128;
    HIDWORD(v18) = (SHIWORD(v16) << 8) + 128;
    LODWORD(v19) = 0;
    (*(void (__thiscall **)(int *, double *, _QWORD *))(v11 + 496))(UIObjectCOM, &v18, v23);
    return 1;
}

