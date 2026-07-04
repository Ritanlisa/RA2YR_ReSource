#include "terrainclass.hpp"

int  TerrainClass::SetFieldF8(uint32_t *this, int a2)
{
    *(this + 62) = a2;
    return a2;
}

int  TerrainClass::_vt91(int this, int a2, int a3, int a4, int a5, int a6, int a7, void **a8)
{
    int result; // eax
    int v10; // edi
    int v11; // ebx
    int v12; // ebp
    int v13; // edx
    int v14; // eax
    void *WarheadVersusMultiplier; // eax
    int v16; // eax
    wchar_t *v17; // eax
    int *v18; // eax
    void *v19; // [esp-8h] [ebp-44h]
    char v20; // [esp+0h] [ebp-3Ch]
    int v21; // [esp+10h] [ebp-2Ch]
    uint32_t v22[3]; // [esp+14h] [ebp-28h] BYREF
    int v23[3]; // [esp+20h] [ebp-1Ch] BYREF
    int v24; // [esp+2Ch] [ebp-10h] BYREF
    int v25; // [esp+30h] [ebp-Ch]
    int v26; // [esp+34h] [ebp-8h]
    result = a4;
    v21 = 0;
    if ( a4 )
    if ( *(uint8_t *)(a4 + 327) && !*(uint8_t *)(*(uint32_t *)(this + 200) + 563) )
    result = TechnoClass::CreateDestructionEffect((void*374 *)this);
    v21 = result;
    if ( result == 5 )
    return result;
    if ( result == 4 )
    if ( *(uint8_t *)(*(uint32_t *)(this + 200) + 689) )
    a8 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( a8 )
    v11 = *(uint32_t *)(this + 160);
    v12 = *(uint32_t *)(this + 164);
    v23[0] = *(uint32_t *)(this + 156);
    v10 = v23[0];
    v23[1] = *(uint32_t *)(this + 160);
    v23[2] = *(uint32_t *)(this + 164);
    v24 = *(uint32_t *)(this + 156);
    v25 = *(uint32_t *)(this + 160);
    v13 = *(uint32_t *)(this + 164);
    v22[0] = *(uint32_t *)(this + 156);
    v26 = v13;
    v14 = *(uint32_t *)(this + 164);
    v22[1] = *(uint32_t *)(this + 160);
    v22[2] = v14;
    a4 = *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v22) + 59);
    v19 = (void *)Return::HRESULT_Fail(v10, v11, v12);
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(
    100,
    RulesClass_Instance->SilverCrate[5],
    a4,
    &v24);
    AnimClass::ctor(a8, WarheadVersusMultiplier, v23, 0, 1, (void *)0x2600, v19, 0);
    v24 = *(uint32_t *)(this + 156);
    v25 = *(uint32_t *)(this + 160);
    v26 = *(uint32_t *)(this + 164);
    PlaySoundEffectAt(&v24, 100, 0, RulesClass_Instance->SilverCrate[5], 1, 0);
    v16 = (*(int (__thiscall **)(int, int *))(*(uint32_t *)this + 440))(this, &a4);
    CellChainReact(v16);
    else if ( *(uint8_t *)(this + 204) )
    TerrainClass::ClearAnimationLinkFlags((void *)this);
    else if ( !*(uint8_t *)(this + 205) )
    *(uint8_t *)(this + 205) = 1;
    v17 = CurrentFrame;
    *(uint32_t *)(this + 192) = 2;
    *(uint32_t *)(this + 180) = v17;
    *(uint32_t *)(this + 184) = v25;
    *(uint32_t *)(this + 188) = 2;
    *(uint32_t *)(this + 172) = 0;
    v18 = (int *)(*(int (__thiscall **)(int, int *, uint32_t))(*(uint32_t *)this + 300))(this, &v24, 0);
    Cell::CreateCrater(*v18, v18[1], v18[2], v18[3], v20);
    (*(void (__thiscall **)(int, int))(*(uint32_t *)this + 220))(this, 1);
    (*(void (__thiscall **)(int))(*(uint32_t *)this + 248))(this);
    return v21;
    return result;
}

void ** TerrainClass::Construct(void **this, void *a2, __int16 *a3)
{
    wchar_t *v4; // eax
    int v5; // eax
    wchar_t *v6; // eax
    int v7; // eax
    int v8; // ebp
    void*374 *v9; // edi
    signed int i; // eax
    uint32_t *v11; // ecx
    int v13; // [esp+10h] [ebp-Ch] BYREF
    void *v14; // [esp+14h] [ebp-8h]
    int v15; // [esp+18h] [ebp-4h]
    int Vtable3; // [esp+24h] [ebp+8h]
    ObjectClass::ctor(this);
    *(this + 43) = 0;
    *((uint8_t *)this + 176) = 0;
    v4 = CurrentFrame;
    *(this + 47) = 0;
    *(this + 45) = v4;
    *(this + 48) = 0;
    *(this + 49) = (void *)1;
    *(this + 50) = a2;
    *((uint8_t *)this + 204) = 0;
    *((uint8_t *)this + 205) = 0;
    *(this + 52) = 0;
    *(this + 53) = 0;
    *(this + 54) = 0;
    *(this + 55) = 0;
    *this = &TerrainClass::`vftable';
    *(this + 1) = &off_7F5200;
    *(this + 2) = &TerrainClass::`vftable';
    *(this + 3) = &TerrainClass::`vftable';
    AbstractClass::GenerateUniqueID((int)(this + 1));
    *(this + 27) = (void *)*((uint32_t *)*(this + 50) + 40);
    if ( *a3 != word_B0ECF0 || a3[1] != word_B0ECF2 )
    v5 = (*a3 << 8) + 128;
    v14 = (void *)((a3[1] << 8) + 128);
    v13 = v5;
    v15 = 0;
    if ( !TerrainClass::ProcessSpawnAnim((int)this, &v13, 0) )
    ObjectClass::Destroy((void*374 *)this);
    v6 = CurrentFrame;
    *(this + 48) = 0;
    *(this + 45) = v6;
    *(this + 46) = v14;
    *(this + 47) = 0;
    if ( dword_A8E998 < dword_A8E990
    || (byte_A8E995 || !dword_A8E990)
    && dword_A8E99C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_A8E988 + 8))(
    &dword_A8E988,
    dword_A8E990 + dword_A8E99C,
    0) )
    v7 = dword_A8E998++;
    *((uint32_t *)dword_A8E98C + v7) = this;
    Vtable3 = AbstractClass::GetVtable3((int)(this + 1));
    if ( (int)(BuildingLoadQueue_Count + 1) <= BuildingLoadQueue_Capacity )
    goto LABEL_19;
    if ( BuildingLoadQueue_Capacity )
    v8 = BuildingLoadQueue_Capacity;
    if ( BuildingLoadQueue_Capacity < 0 )
    return this;
    else
    v8 = 10;
    v9 = (void*374 *)__2_YAPAXI_Z(8 * (v8 + BuildingLoadQueue_Capacity));
    if ( v9 )
    for ( i = 0; i < (int)BuildingLoadQueue_Count; *((uint32_t *)v9 + 2 * i - 1) = v11[1] )
    v11 = (uint32_t *)((char *)BuildingLoadQueue_Array + 8 * i++);
    *((uint32_t *)v9 + 2 * i - 2) = *v11;
    __3_YAXPAX_Z(BuildingLoadQueue_Array);
    BuildingLoadQueue_Array = v9;
    BuildingLoadQueue_Capacity += v8;
    BuildingLoadQueue_Active = 0;
    LABEL_19:
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = Vtable3;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = this;
    BuildingLoadQueue_Dirty = 0;
    ++BuildingLoadQueue_Count;
    return this;
}

char  TerrainClass::_vt73(int this, int a2)
{
    int v2; // esi
    uint32_t *v4; // eax
    struct IPersistStreamVtbl *lpVtbl; // eax
    int v6; // ecx
    uint8_t v8[4]; // [esp+8h] [ebp-10h] BYREF
    uint8_t v9[12]; // [esp+Ch] [ebp-Ch] BYREF
    v2 = a2;
    if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((void*374 *)this) )
    return 0;
    a2 = *(uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 440))(this, v8);
    if ( v2 )
    if ( v2 == 1 || v2 == 3 )
    MapClass::FillRevealBuffer(&MapClass_Instance, &a2, (uint8_t *)this);
    v4 = (uint32_t *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)this + 172))(this, v9);
    Coord::To_Screen(TacticalClass_Instance, v4, (int *)(this + 216));
    lpVtbl = TacticalClass_Instance[45].lpVtbl;
    v6 = *(uint32_t *)(this + 220);
    *(uint32_t *)(this + 216) += TacticalClass_Instance[44].lpVtbl;
    *(uint32_t *)(this + 220) = (char *)lpVtbl + v6;
    return 1;
    else
    MapClass::ApplyOverlayReveal(&MapClass_Instance, &a2, (char *)this);
    return 1;
}

uint8_t * TerrainClass::_vt61(uint32_t *this, uint32_t *a2)
{
    int v2; // ebx
    uint32_t *v3; // ecx
    uint8_t *result; // eax
    if ( *((uint32_t *)ScenarioClass_Instance + 1174) == 1 )
    v2 = *(uint32_t *)(*(this + 50) + 684);
    else
    v2 = *(uint32_t *)(*(this + 50) + 680);
    v3 = a2;
    LOWORD(a2) = *a2 / 256;
    HIWORD(a2) = v3[1] / 256;
    result = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( (v2 & 1) != 0 )
    result[292] &= ~4u;
    if ( (v2 & 2) != 0 )
    result[292] &= ~8u;
    if ( (v2 & 4) != 0 )
    result[292] &= ~0x10u;
    return result;
}

// 0x0071C110
uint8_t * TerrainClass::SetOccupyBit_PassableTerrain(uint32_t *this, uint32_t *a2)
{
    int v2; // ebx
    uint32_t *v3; // ecx
    uint8_t *result; // eax
    if ( *((uint32_t *)ScenarioClass_Instance + 1174) == 1 )
    v2 = *(uint32_t *)(*(this + 50) + 684);
    else
    v2 = *(uint32_t *)(*(this + 50) + 680);
    v3 = a2;
    LOWORD(a2) = *a2 / 256;
    HIWORD(a2) = v3[1] / 256;
    result = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    if ( (v2 & 1) != 0 )
    result[292] |= 4u;
    if ( (v2 & 2) != 0 )
    result[292] |= 8u;
    if ( (v2 & 4) != 0 )
    result[292] |= 0x10u;
    return result;
}

void  TerrainClass::Draw(unsigned int *this, int *a2, int *a3)
{
    uint32_t *v4; // eax
    unsigned int v5; // edx
    int v6; // ebp
    unsigned int v7; // ebx
    int v8; // edx
    unsigned int v9; // eax
    int v10; // eax
    int v11; // edi
    int v12; // eax
    int v13; // edx
    int v14; // ebp
    int v15; // esi
    int v16; // [esp+10h] [ebp-14h]
    int v17; // [esp+14h] [ebp-10h] BYREF
    uint32_t *v18; // [esp+18h] [ebp-Ch] BYREF
    int v19; // [esp+1Ch] [ebp-8h] BYREF
    int v20; // [esp+20h] [ebp-4h]
    v17 = *(uint32_t *)(*(int (__thiscall **)(unsigned int *, uint32_t **))(*this + 440))(this, &v18);
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17);
    v5 = *this;
    v6 = (int)v4;
    v18 = v4;
    v16 = (*(int (__thiscall **)(unsigned int *))(v5 + 108))(this);
    if ( v16 )
    if ( *(uint8_t *)(*(this + 50) + 691) )
    v7 = *(this + 43);
    else if ( *((uint8_t *)this + 205) )
    v7 = *((unsigned __int8 *)this + 205) + *(this + 43);
    else
    v7 = (int)*(this + 27) < 2;
    v8 = a2[1];
    v9 = *this;
    v19 = *a2;
    v20 = v8;
    v10 = (*(int (__thiscall **)(unsigned int *))(v9 + 464))(this);
    v11 = -(int)ZCoordToScreenY(v10);
    if ( !*(uint32_t *)(v6 + 52) )
    TacticalClass::SetView(v6, 0, 0x10000, 0, 1000, 1000, 1000);
    v12 = *(this + 50);
    if ( *(uint8_t *)(v12 + 689) )
    v13 = FileSystem_GRFTXT_TIBERIUM_PAL;
    v14 = *(__int16 *)(v6 + 266);
    v20 -= 16;
    else
    v13 = *(uint32_t *)(v6 + 52);
    v14 = *(__int16 *)(v6 + 268);
    if ( *(uint8_t *)(v12 + 691) || *((uint8_t *)this + 205) )
    v15 = 11776;
    else
    v15 = 19968;
    DrawToSurfaceSHP(DSurface_Hidden_2, v13, v16, v7, &v19, a3, v15, 0, v11 - 12, 2, v14, 0, 0, 0, 0, 0);
    if ( byte_822CF1 )
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v18[13],
    v16,
    v7 + *(__int16 *)(v16 + 6) / 2,
    &v19,
    a3,
    v15 | 1,
    0,
    v11 - 3,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

void  TerrainClass::_vt70(unsigned __int8 *this, int *a2, int *a3)
{
    uint32_t *v4; // ebx
    int v5; // ebp
    unsigned __int8 v6; // al
    int v7; // edx
    int v8; // eax
    int v9; // eax
    int v10; // edi
    int v11; // edx
    int v12; // esi
    unsigned int v13; // [esp+10h] [ebp-10h] BYREF
    int v14; // [esp+14h] [ebp-Ch] BYREF
    int v15; // [esp+18h] [ebp-8h] BYREF
    int v16; // [esp+1Ch] [ebp-4h]
    v14 = *(uint32_t *)(*(int (__thiscall **)(unsigned __int8 *, unsigned int *))(*(uint32_t *)this + 440))(this, &v13);
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14);
    v5 = (*(int (__thiscall **)(unsigned __int8 *))(*(uint32_t *)this + 108))(this);
    if ( v5 )
    v6 = *(this + 205);
    v13 = 0;
    if ( v6 )
    v13 = v6 + *((uint32_t *)this + 43);
    v7 = a2[1];
    v8 = *(uint32_t *)this;
    v15 = *a2;
    v16 = v7;
    v9 = (*(int (__thiscall **)(unsigned __int8 *))(v8 + 464))(this);
    v10 = -(int)ZCoordToScreenY(v9);
    if ( !v4[13] )
    TacticalClass::SetView((int)v4, 0, 0x10000, 0, 1000, 1000, 1000);
    if ( *(uint8_t *)(*((uint32_t *)this + 50) + 689) )
    v11 = FileSystem_GRFTXT_TIBERIUM_PAL;
    v12 = *((__int16 *)v4 + 133);
    v16 -= 16;
    else
    v11 = v4[13];
    v12 = *((__int16 *)v4 + 134);
    DrawToSurfaceSHP(DSurface_Hidden_2, v11, v5, v13, &v15, a3, 3584, 0, v10 - 4, 2, v12, 0, 0, 0, 0, 0);
    if ( byte_822CF1 )
    DrawToSurfaceSHP(
    DSurface_Hidden_2,
    v4[13],
    v5,
    v13 + *(__int16 *)(v5 + 6) / 2,
    &v15,
    a3,
    1537,
    0,
    v10 - 2,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
}

int  TerrainClass::_vt107(uint32_t *this, int a2, int a3, int a4, int a5, int a6)
{
    _WORD *v7; // esi
    int v8; // edi
    _WORD *v9; // eax
    __int16 v10; // dx
    void *v11; // eax
    __int16 v12; // dx
    __int16 v13; // ax
    int v15; // [esp-Ch] [ebp-24h]
    int v16; // [esp+10h] [ebp-8h]
    int v17; // [esp+14h] [ebp-4h] BYREF
    int v18; // [esp+1Ch] [ebp+4h]
    v7 = (_WORD *)(*(int (__thiscall **)(uint32_t *, uint32_t))(*this + 264))(this, 0);
    v8 = *(uint32_t *)(a2 + 36);
    while ( *v7 != 0x7FFF || v7[1] != 0x7FFF )
    v9 = v7;
    if ( *(uint8_t *)(*(this + 50) + 688) )
    v10 = v7[1];
    v7 += 2;
    LOWORD(v18) = v8 + *v9;
    HIWORD(v18) = HIWORD(v8) + v10;
    v15 = 5;
    v17 = v18;
    else
    v12 = *v7;
    v13 = v7[1];
    v7 += 2;
    LOWORD(v16) = v8 + v12;
    HIWORD(v16) = HIWORD(v8) + v13;
    v15 = 1;
    v17 = v16;
    v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v17);
    if ( !CellClass::IsPassable((int)v11, v15, 0, 0) )
    return 7;
    return 0;
}

char  TerrainClass::_vt94(uint8_t *this)
{
    int v2; // eax
    char v3; // si
    void **v4; // ebx
    int *v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    void **v9; // eax
    void **v10; // esi
    int v12[3]; // [esp+4h] [ebp-18h] BYREF
    char v13[12]; // [esp+10h] [ebp-Ch] BYREF
    if ( *(this + 205) )
    return 0;
    if ( *(this + 204) )
    return 0;
    v2 = *((uint32_t *)this + 50);
    if ( *(uint32_t *)(v2 + 156) != 6 || *(uint8_t *)(v2 + 689) )
    return 0;
    v3 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v4 = (void **)__2_YAPAXI_Z(0x1C8u);
    if ( v4 )
    v5 = (int *)(*(int (__thiscall **)(uint8_t *, char *))(*(uint32_t *)this + 72))(this, v13);
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v12[1] = v7;
    v12[0] = v6;
    v12[2] = v8 + 80;
    v9 = AnimClass::ctor(
    v4,
    *(void **)(LODWORD(RulesClass_Instance->OccupyROFMultiplier) + 4 * (v3 & 1)),
    v12,
    0,
    255,
    (void *)0x600,
    0,
    0);
    v10 = v9;
    if ( v9 )
    BuildingClass::AimTurret(v9, this);
    else
    v10 = 0;
    v10[64] = (char *)v10[64] - 20;
    *(this + 204) = 1;
    return 1;
}

char  TerrainClass::_vt95(void *this)
{
    wchar_t *v2; // eax
    int v4; // [esp+8h] [ebp-8h]
    LOBYTE(v2) = *((uint8_t *)this + 204);
    if ( (uint8_t)v2 )
    LOBYTE(v2) = *((uint8_t *)this + 205);
    *((uint8_t *)this + 204) = 0;
    if ( !(uint8_t)v2 )
    v2 = (wchar_t *)*((uint32_t *)this + 27);
    if ( !v2 )
    (*(void (__thiscall **)(void *, int))(*(uint32_t *)this + 220))(this, 1);
    (*(void (__thiscall **)(void *, int))(*(uint32_t *)this + 292))(this, 2);
    LOBYTE(v2) = *((uint8_t *)this + 205);
    if ( !(uint8_t)v2 )
    *((uint8_t *)this + 205) = 1;
    v2 = CurrentFrame;
    *((uint32_t *)this + 48) = 2;
    *((uint32_t *)this + 45) = v2;
    *((uint32_t *)this + 46) = v4;
    *((uint32_t *)this + 47) = 2;
    *((uint32_t *)this + 43) = 0;
    LOBYTE(v2) = v4;
    return (char)v2;
}

int  TerrainClass::Update(int this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    wchar_t *v5; // ecx
    int result; // eax
    int v7; // ecx
    int v8; // edi
    uint8_t *v9; // ecx
    int v10; // edi
    wchar_t *v11; // eax
    wchar_t **v12; // edx
    int *v13; // esi
    int v14; // [esp+10h] [ebp-Ch] BYREF
    wchar_t *v15; // [esp+14h] [ebp-8h]
    int v16; // [esp+18h] [ebp-4h]
    ObjectClass::DetectCloaked((void*374 *)this);
    if ( *(uint8_t *)(*(uint32_t *)(this + 200) + 691) )
    if ( !*(uint32_t *)(this + 192) )
    v2 = Random::State((uint32_t *)ScenarioClass_Instance + 134);
    v3 = *(uint32_t *)(this + 200);
    if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) )
    *(uint32_t *)(this + 172) = 0;
    v4 = *(uint32_t *)(v3 + 672);
    v5 = CurrentFrame;
    *(uint32_t *)(this + 192) = v4;
    *(uint32_t *)(this + 180) = v5;
    *(uint32_t *)(this + 184) = v15;
    *(uint32_t *)(this + 188) = v4;
    result = Locomotor::GetSpeed((int *)(this + 180));
    if ( result || (result = *(uint32_t *)(this + 192)) == 0 )
    *(uint8_t *)(this + 176) = 0;
    else
    v7 = *(uint32_t *)(this + 196) + *(uint32_t *)(this + 172);
    *(uint8_t *)(this + 176) = 1;
    *(uint32_t *)(this + 172) = v7;
    *(uint32_t *)(this + 180) = CurrentFrame;
    *(uint32_t *)(this + 184) = v15;
    *(uint32_t *)(this + 188) = result;
    if ( *(uint8_t *)(this + 205)
    && (v8 = *(uint32_t *)(this + 172),
    result = *(__int16 *)((*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 200) + 156))(*(uint32_t *)(this + 200))
    + 6)
    - 1,
    v8 == result) )
    return (*(int (__thiscall **)(int))(*(uint32_t *)this + 248))(this);
    else
    v9 = *(uint8_t **)(this + 200);
    if ( v9[689] && v9[691] )
    v10 = *(uint32_t *)(this + 172);
    result = *(__int16 *)((*(int (__thiscall **)(uint8_t *))(*(uint32_t *)v9 + 156))(v9) + 6) / 2;
    if ( v10 == result )
    *(uint32_t *)(this + 172) = 0;
    v11 = CurrentFrame;
    v12 = (wchar_t **)(this + 180);
    *(uint32_t *)(this + 192) = 0;
    v13 = (int *)(this + 156);
    *v12 = v11;
    v12[1] = v15;
    v12[2] = 0;
    v14 = *v13;
    v15 = (wchar_t *)v13[1];
    v16 = v13[2];
    Coord::To_Cell(&MapClass_Instance, &v14);
    return CellClass::SpawnTiberiumTree(1);
    return result;
}

char  TerrainClass::_vt53(#374 *this)
{
    int v2; // ebx
    int v3; // esi
    int v4; // edx
    __int16 v5; // cx
    uint8_t *v6; // eax
    uint32_t *v7; // eax
    char v8; // bl
    void *v9; // eax
    int v11; // [esp+8h] [ebp-18h] BYREF
    int v12; // [esp+Ch] [ebp-14h]
    int v13; // [esp+10h] [ebp-10h] BYREF
    uint32_t v14[3]; // [esp+14h] [ebp-Ch] BYREF
    if ( !*((uint8_t *)this + 129) )
    v2 = *(uint32_t *)(*(int (__thiscall **)(void*374 *, int *))(*(uint32_t *)this + 440))(this, &v13);
    v3 = 0;
    v12 = v2;
    do
    v4 = v3 & 7;
    v5 = LOWORD(Direction_X_Offsets[v4]) + v2;
    LOWORD(v4) = HIWORD(Direction_X_Offsets[v4]);
    LOWORD(v12) = v5;
    HIWORD(v12) = HIWORD(v2) + v4;
    v13 = v12;
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v13);
    ++v3;
    --v6[290];
    while ( v3 < 8 );
    v14[0] = *((uint32_t *)this + 39);
    v14[1] = *((uint32_t *)this + 40);
    v14[2] = *((uint32_t *)this + 41);
    v7 = Coord::To_Cell(&MapClass_Instance, v14);
    v7[73] &= ~0x40u;
    v11 = *(uint32_t *)(*(int (__thiscall **)(void*374 *, int *))(*(uint32_t *)this + 440))(this, &v13);
    v8 = ObjectClass::Undeploy(this);
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v11);
    House::AnnounceUpgrade((int)v9, -1);
    if ( !IKnowWhatImDoing )
    Cell::SetRadar((int *)&MapClass_Instance, (__int16 *)&v11);
    Radar::Update(&MapClass_Instance, (__int16 *)&v11);
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)&v11);
    return v8;
}

char  TerrainClass::_vt65(uint8_t *this, int *a2, char a3, int a4)
{
    int *v5; // eax
    int v6; // ebx
    int v7; // ebp
    uint32_t *v8; // eax
    int v9; // edx
    int v10; // ecx
    int v11; // ebx
    int v12; // eax
    int v13; // ebp
    int v14; // ebx
    uint32_t *v15; // eax
    int v16; // ecx
    int v18; // [esp+10h] [ebp-18h] BYREF
    int v19; // [esp+14h] [ebp-14h]
    uint32_t v20[4]; // [esp+18h] [ebp-10h] BYREF
    if ( !ArmageddonMode && g_hWnd && (!a3 && !*(this + 128) || !*(this + 116) || *(this + 129)) )
    return 0;
    *(this + 128) = 0;
    v5 = ClipRectIntersection(v20, a2, &DSurface_ViewBounds, 0, 0);
    *a2 = *v5;
    a2[1] = v5[1];
    a2[2] = v5[2];
    a2[3] = v5[3];
    v6 = DSurface_ViewBounds;
    v7 = Map_VisibleRect;
    v8 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint32_t *))(*(uint32_t *)this + 300))(this, v20);
    v9 = v8[1];
    v10 = v6 + *v8;
    v11 = v8[2];
    v12 = v8[3];
    v13 = v9 + v7;
    if ( *a2 >= v10 + v11 )
    return 0;
    v14 = a2[1];
    if ( v14 >= v13 + v12 || *a2 + a2[2] <= v10 || v14 + a2[3] <= v13 )
    return 0;
    v15 = (uint32_t *)(*(int (__thiscall **)(uint8_t *, uint32_t *))(*(uint32_t *)this + 172))(this, v20);
    Coord::To_Screen(TacticalClass_Instance, v15, &v18);
    if ( *a2 > DSurface_ViewBounds )
    v18 += DSurface_ViewBounds - *a2;
    v16 = a2[1];
    if ( v16 > Map_VisibleRect )
    v19 += Map_VisibleRect - v16;
    (*(void (__thiscall **)(uint8_t *, int *, int *))(*(uint32_t *)this + 276))(this, &v18, a2);
    return 1;
}

int __stdcall TerrainClass::LoadFromStream(uint32_t *a1, int a2)
{
    uint32_t *v2; // ebp
    uint32_t *v3; // esi
    int v4; // eax
    void*374 *v5; // ecx
    int v6; // edx
    int v7; // edi
    int v8; // eax
    int v9; // eax
    signed int v10; // ecx
    size_t i; // eax
    uint32_t *v12; // eax
    int Register; // edi
    int v14; // esi
    int v15; // eax
    int v17; // [esp+Ch] [ebp-8h] BYREF
    v2 = a1;
    v3 = a1 + 1;
    v4 = (*(int (__stdcall **)(uint32_t *))(a1[1] + 16))(a1 + 1);
    v6 = BuildingLoadQueue_Count;
    v7 = v4;
    if ( BuildingLoadQueue_Count )
    if ( !BuildingLoadQueue_Dirty )
    qsort(BuildingLoadQueue_Array, BuildingLoadQueue_Count, 8u, CompareFunction);
    v6 = BuildingLoadQueue_Count;
    BuildingLoadQueue_Active = 0;
    BuildingLoadQueue_Dirty = 1;
    v17 = v7;
    v8 = BinaryArraySearch((int)BuildingLoadQueue_Array, v6, &v17);
    if ( v8 )
    v9 = (v8 - (int)BuildingLoadQueue_Array) >> 3;
    if ( v9 != -1 )
    v10 = v9 + 1;
    for ( i = BuildingLoadQueue_Count; v10 < (int)BuildingLoadQueue_Count; i = BuildingLoadQueue_Count )
    v12 = (uint32_t *)((char *)BuildingLoadQueue_Array + 8 * v10++);
    *(v12 - 2) = *v12;
    *(v12 - 1) = v12[1];
    BuildingLoadQueue_Count = i - 1;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = 0;
    v5 = BuildingLoadQueue_Array;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = 0;
    BuildingLoadQueue_Active = 0;
    Register = BuildingClass::SaveLoad_Register(v5);
    if ( Register >= 0 )
    if ( v2 )
    ObjectClass::Init(v2, (int)&a1);
    *v2 = &TerrainClass::`vftable';
    *v3 = &off_7F5200;
    v2[2] = &TerrainClass::`vftable';
    v2[3] = &TerrainClass::`vftable';
    v14 = (*(int (__stdcall **)(uint32_t *))(*v3 + 16))(v3);
    v15 = BuildingLoadQueue_Capacity;
    if ( (int)(BuildingLoadQueue_Count + 1) <= BuildingLoadQueue_Capacity )
    goto LABEL_16;
    if ( !BuildingLoadQueue_Capacity )
    v15 = 10;
    if ( BuildingTypeClass::Enqueue((int)&BuildingLoadQueue_Array, v15) )
    LABEL_16:
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count) = v14;
    *((uint32_t *)BuildingLoadQueue_Array + 2 * BuildingLoadQueue_Count + 1) = v2;
    BuildingLoadQueue_Dirty = 0;
    ++BuildingLoadQueue_Count;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 50);
    return Register;
}

int __stdcall TerrainClass::_vt06(int *a1, int *a2, int a3)
{
    return AbstractClass::SaveLoad_Prefix(a1, a2, a3);
}

int  TerrainClass::_vt13(int this, int *a2)
{
    int v3; // eax
    int v4; // eax
    int v5; // edx
    int v6; // eax
    HouseClass::ProcessPower((void*374 *)this);
    v3 = (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(this + 200) + 44))(*(uint32_t *)(this + 200));
    Power::TimerProcess(v3);
    v4 = (*(int (__stdcall **)(int))(*(uint32_t *)(*(uint32_t *)(this + 200) + 4) + 16))(*(uint32_t *)(this + 200) + 4);
    Power::TimerProcess(v4);
    LOBYTE(v5) = *(uint8_t *)(this + 204);
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = *(uint8_t *)(this + 205);
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(*(uint32_t *)(this + 208));
    return Power::TimerProcess(*(uint32_t *)(this + 212));
}

int  TerrainClass::_vt10(int this, int a2, int a3)
{
    int result; // eax
    result = Object::Unlink((void*374 *)this);
    if ( *(uint32_t *)(this + 200) == a2 )
    *(uint32_t *)(this + 200) = 0;
    return result;
}

char  TerrainClass::_vt54(int this, uint32_t *a2, uint32_t *a3)
{
    uint32_t *v3; // ebp
    int v4; // edi
    int v5; // ebx
    int i; // esi
    int v7; // ecx
    __int16 v8; // ax
    uint8_t *v9; // eax
    uint32_t *v10; // eax
    char *v11; // edi
    char v14[12]; // [esp+8h] [ebp-Ch] BYREF
    v3 = a2;
    if ( !(unsigned __int8)ObjectClass::Deploy((void*374 *)this) )
    return 0;
    v4 = *v3 / 256;
    v5 = v3[1] / 256;
    for ( i = 0; i < 8; ++i )
    v7 = i & 7;
    v8 = HIWORD(Direction_X_Offsets[v7]);
    LOWORD(a3) = v4 + LOWORD(Direction_X_Offsets[v7]);
    HIWORD(a3) = v5 + v8;
    a2 = a3;
    v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    ++v9[290];
    v10 = (uint32_t *)(*(int (__stdcall **)(char *))(*(uint32_t *)this + 172))(v14);
    Coord::To_Screen(TacticalClass_Instance, v10, (int *)(this + 216));
    v11 = (char *)TacticalClass_Instance[45].lpVtbl + *(uint32_t *)(this + 220);
    *(uint32_t *)(this + 216) += TacticalClass_Instance[44].lpVtbl;
    *(uint32_t *)(this + 220) = v11;
    if ( *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v3) + 17) != -1 )
    if ( *(uint8_t *)(*(uint32_t *)&BuildingTypeClass_Array->gap0[4
    * *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v3) + 17)]
    + 681) )
    *((uint32_t *)Coord::To_Cell(&MapClass_Instance, v3) + 17) = -1;
    *((uint8_t *)Coord::To_Cell(&MapClass_Instance, v3) + 286) = 0;
    return 1;
}

// 0x0071D160
uint32_t * TerrainClass::Export(int this, uint32_t *a2)
{
    __int16 *HasC4; // esi
    int *FoundationSize; // eax
    int v5; // edi
    int v6; // ebx
    int v7; // edx
    int v8; // eax
    int *v9; // eax
    int v10; // edx
    int v11; // ecx
    int v12; // esi
    int v13; // ecx
    int v14; // eax
    int v15; // edi
    int v16; // [esp+4h] [ebp-40h]
    int v17; // [esp+8h] [ebp-3Ch]
    unsigned int v18; // [esp+Ch] [ebp-38h]
    unsigned int v19; // [esp+10h] [ebp-34h]
    int v20; // [esp+14h] [ebp-30h] BYREF
    int v21; // [esp+18h] [ebp-2Ch]
    int v22; // [esp+1Ch] [ebp-28h]
    int v23; // [esp+20h] [ebp-24h]
    int v24; // [esp+28h] [ebp-1Ch]
    int v25; // [esp+30h] [ebp-14h]
    uint32_t v26[4]; // [esp+34h] [ebp-10h] BYREF
    v18 = *(uint32_t *)(this + 216) - (unsigned int)TacticalClass_Instance[44].lpVtbl;
    v19 = *(uint32_t *)(this + 220) - (unsigned int)TacticalClass_Instance[45].lpVtbl;
    HasC4 = (__int16 *)ObjectClass::HasC4((void*374 *)this);
    if ( HasC4 )
    FoundationSize = Building::GetFoundationSize(&v20, 0);
    v5 = *FoundationSize;
    v24 = FoundationSize[1];
    v6 = FoundationSize[2];
    v7 = FoundationSize[3];
    v8 = HasC4[3];
    v25 = v7;
    v9 = Building::GetFoundationSize(v26, v8 / 2);
    v10 = *v9;
    v21 = v9[1];
    v11 = v9[2];
    v22 = v11;
    v23 = v9[3];
    v16 = HasC4[1];
    v17 = HasC4[2];
    if ( v6 <= 0 || v25 <= 0 )
    v13 = *v9;
    v12 = v9[1];
    v6 = v9[2];
    v15 = v9[3];
    else if ( v11 <= 0 || v23 <= 0 )
    v12 = v24;
    v13 = v5;
    v15 = v25;
    else
    v12 = v24;
    v13 = v5;
    v14 = v25;
    if ( v5 > v10 )
    v13 = v10;
    v6 += v5 - v10;
    if ( v24 > v21 )
    v14 = v24 - v21 + v25;
    v12 = v21;
    if ( v6 + v13 < v10 + v22 )
    v6 = v22 - v13 + v10 + 1;
    if ( v14 + v12 < v21 + v23 )
    v14 = v21 - v12 + v23 + 1;
    v15 = v14;
    *a2 = v18 + v13 - v16 / 2;
    a2[1] = v19 + v12 - v17 / 2;
    a2[2] = v6;
    a2[3] = v15;
    return a2;
    else
    *a2 = dword_B0ECE0;
    a2[1] = dword_B0ECE4;
    a2[2] = dword_B0ECE8;
    a2[3] = dword_B0ECEC;
    return a2;
}

int TerrainClass::_vt12()
{
    return 224;
}

int TerrainClass::_vt11()
{
    return 36;
}

int __stdcall TerrainClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 237448654;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

void * TerrainClass::_vt08(void *Block, char a2)
{
    TerrainClass::CleanupMembers((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

