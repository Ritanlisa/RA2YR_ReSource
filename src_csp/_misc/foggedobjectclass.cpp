#include "foggedobjectclass.hpp"

int  FoggedObjectClass::InitBuildingFog(int this, uint32_t *a2, int a3, int a4)
{
    void *v5; // ebp
    int *PlacementRectBuildingClass; // edi
    int *StartCoordsHouse; // eax
    int v8; // edx
    int v9; // ecx
    int v10; // ebp
    int v11; // ebx
    int v12; // eax
    int v13; // edi
    int v14; // ebp
    int v15; // ecx
    int v16; // edi
    int v17; // ebp
    int v18; // edi
    int v19; // eax
    int v20; // ecx
    int v21; // eax
    int v22; // edi
    int v24; // [esp+18h] [ebp-28h]
    int v25[4]; // [esp+20h] [ebp-20h] BYREF
    int v26[4]; // [esp+30h] [ebp-10h] BYREF
    int v27; // [esp+44h] [ebp+4h]
    int v28; // [esp+48h] [ebp+8h]
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 36) = a3;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = a4;
    *(uint32_t *)(this + 48) = 20;
    *(uint32_t *)(this + 52) = *a2;
    *(uint32_t *)(this + 56) = a2[1];
    *(uint32_t *)(this + 60) = a2[2];
    *(uint32_t *)(this + 80) = *((char *)Coord::To_Cell(&MapClass_Instance, a2) + 283);
    *(uint32_t *)(this + 84) = -1;
    *(uint32_t *)(this + 88) = 0;
    FoggedObject::DrawVector_Constructor((uint32_t *)(this + 92), 0, 0);
    *(uint32_t *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable';
    *(uint32_t *)(this + 112) = 10;
    *(uint32_t *)(this + 108) = 0;
    *(uint8_t *)(this + 116) = 1;
    *(uint32_t *)this = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 4) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 8) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 12) = &FoggedObjectClass::`vftable';
    v5 = Coord::To_Cell(&MapClass_Instance, a2);
    PlacementRectBuildingClass = BuildingClass::GetPlacementRect((int)v5, v25);
    StartCoordsHouse = House::GetStartCoords((int)v5, v26);
    if ( StartCoordsHouse[2] <= 0 || StartCoordsHouse[3] <= 0 )
    v8 = *PlacementRectBuildingClass;
    v15 = PlacementRectBuildingClass[1];
    v14 = PlacementRectBuildingClass[2];
    v16 = PlacementRectBuildingClass[3];
    else
    v28 = PlacementRectBuildingClass[2];
    if ( v28 <= 0 || (v27 = PlacementRectBuildingClass[3], v27 <= 0) )
    v8 = *StartCoordsHouse;
    v15 = StartCoordsHouse[1];
    v14 = StartCoordsHouse[2];
    v16 = StartCoordsHouse[3];
    else
    v8 = *StartCoordsHouse;
    v9 = *PlacementRectBuildingClass;
    v10 = StartCoordsHouse[2];
    v11 = StartCoordsHouse[1];
    v12 = StartCoordsHouse[3];
    v24 = v10;
    if ( v8 > *PlacementRectBuildingClass )
    v10 += v8 - v9;
    v8 = *PlacementRectBuildingClass;
    v24 = v10;
    v13 = PlacementRectBuildingClass[1];
    if ( v11 > v13 )
    v12 += v11 - v13;
    v11 = v13;
    if ( v8 + v10 >= v9 + v28 )
    v14 = v24;
    else
    v14 = v9 - v8 + v28 + 1;
    if ( v12 + v11 < v27 + v13 )
    v12 = v27 + v13 - v11 + 1;
    v15 = v11;
    v16 = v12;
    *(uint32_t *)(this + 64) = v8;
    *(uint32_t *)(this + 68) = v15;
    *(uint32_t *)(this + 72) = v14;
    *(uint32_t *)(this + 76) = v16;
    v17 = *(uint32_t *)(this + 68);
    *(uint32_t *)(this + 64) += TacticalClass_Instance[44].lpVtbl;
    *(uint32_t *)(this + 68) = (char *)TacticalClass_Instance[45].lpVtbl + v17;
    v18 = *(uint32_t *)(this + 68) - Map_VisibleRect;
    *(uint32_t *)(this + 64) -= DSurface_ViewBounds;
    *(uint32_t *)(this + 68) = v18;
    if ( g_FootClassConfig < dword_8B3D18
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8B3D10 + 8))(
    &dword_8B3D10,
    dword_8B3D24 + dword_8B3D18,
    0) )
    v19 = g_FootClassConfig++;
    *((uint32_t *)dword_8B3D14 + v19) = this;
    v20 = (__int16)(*(uint32_t *)(this + 52) / 256);
    v21 = dword_8B3CC8;
    v22 = 74 * ((__int16)(*(uint32_t *)(this + 56) / 256) - ((v20 + (__int16)(*(uint32_t *)(this + 56) / 256)) << 9) - v20)
    - *(uint32_t *)(this + 48)
    + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 )
    goto LABEL_27;
    if ( !dword_8B3CC8 )
    v21 = 10;
    if ( Vector::ReallocDynamic((int)&g_MissionPool, v21) )
    LABEL_27:
    *((uint32_t *)g_MissionPool + 2 * g_MissionState) = v22;
    *((uint32_t *)g_MissionPool + 2 * g_MissionState + 1) = this;
    byte_8B3CCC = 0;
    ++g_MissionState;
    return this;
}

int  FoggedObjectClass::Constructor(int this, int *a2, char a3)
{
    int v4; // eax
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    uint32_t *v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // ebp
    int ProductionFrame; // eax
    int v13; // ebp
    int v14; // eax
    char v15; // al
    int v16; // ecx
    int v17; // eax
    int v18; // eax
    int v19; // ecx
    int *v20; // edx
    int *v21; // ebx
    int *v22; // eax
    int *v23; // ecx
    int v24; // edx
    int v25; // ebp
    int v26; // ebx
    int v27; // ecx
    int v28; // ebx
    int v29; // eax
    int v30; // ebx
    int v31; // eax
    int v32; // ecx
    int v33; // edx
    int v34; // ebp
    int v35; // ecx
    int v36; // ebp
    int v37; // eax
    int v38; // ecx
    int v39; // eax
    uint32_t *v40; // eax
    int v41; // ecx
    int v42; // edx
    bool v43; // zf
    int *v45; // [esp+20h] [ebp-40h]
    int v46; // [esp+24h] [ebp-3Ch]
    int v47; // [esp+28h] [ebp-38h]
    int v48; // [esp+2Ch] [ebp-34h]
    uint32_t v49[2]; // [esp+30h] [ebp-30h] BYREF
    int v50; // [esp+38h] [ebp-28h]
    int v51; // [esp+3Ch] [ebp-24h]
    char v52[8]; // [esp+40h] [ebp-20h] BYREF
    int v53; // [esp+48h] [ebp-18h]
    int v54; // [esp+4Ch] [ebp-14h]
    int v55[4]; // [esp+50h] [ebp-10h] BYREF
    int v56; // [esp+64h] [ebp+4h]
    int v57; // [esp+68h] [ebp+8h]
    int v58; // [esp+68h] [ebp+8h]
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 36) = -1;
    v4 = a2[135];
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 40) = v4;
    *(uint32_t *)(this + 48) = 6;
    *(uint32_t *)(this + 52) = a2[39];
    *(uint32_t *)(this + 56) = a2[40];
    *(uint32_t *)(this + 60) = a2[41];
    v5 = a2[40];
    v49[0] = a2[39];
    v6 = a2[41];
    v49[1] = v5;
    v50 = v6;
    v7 = this + 92;
    *(uint32_t *)(this + 80) = *((char *)Coord::To_Cell(&MapClass_Instance, v49) + 283);
    *(uint32_t *)(this + 84) = -1;
    *(uint32_t *)(this + 88) = 0;
    FoggedObject::DrawVector_Constructor((uint32_t *)(this + 92), 0, 0);
    *(uint32_t *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable';
    *(uint32_t *)(this + 112) = 10;
    *(uint32_t *)(this + 108) = 0;
    *(uint8_t *)(this + 116) = a3;
    *(uint32_t *)this = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 4) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 8) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 12) = &FoggedObjectClass::`vftable';
    v8 = (uint32_t *)(*(int (__thiscall **)(int *, char *))(*a2 + 300))(a2, v52);
    *(uint32_t *)(this + 64) = *v8;
    *(uint32_t *)(this + 68) = v8[1];
    *(uint32_t *)(this + 72) = v8[2];
    *(uint32_t *)(this + 76) = v8[3];
    if ( g_FootClassConfig < dword_8B3D18
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8B3D10 + 8))(
    &dword_8B3D10,
    dword_8B3D18 + dword_8B3D24,
    0) )
    v9 = g_FootClassConfig++;
    *((uint32_t *)dword_8B3D14 + v9) = this;
    v10 = dword_8B3CC8;
    v11 = 74
    * ((__int16)(*(uint32_t *)(this + 56) / 256)
    - (((__int16)(*(uint32_t *)(this + 52) / 256) + (__int16)(*(uint32_t *)(this + 56) / 256)) << 9)
    - (__int16)(*(uint32_t *)(this + 52) / 256))
    - *(uint32_t *)(this + 48)
    + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 )
    goto LABEL_11;
    if ( !dword_8B3CC8 )
    v10 = 10;
    if ( (unsigned __int8)Vector::ReallocDynamic(v10) )
    LABEL_11:
    *((uint32_t *)g_MissionPool + 2 * g_MissionState) = v11;
    *((uint32_t *)g_MissionPool + 2 * g_MissionState + 1) = this;
    byte_8B3CCC = 0;
    ++g_MissionState;
    *((uint8_t *)a2 + 1767) = 1;
    ProductionFrame = BuildingClass::GetProductionFrame(a2);
    v13 = a2[328];
    v57 = ProductionFrame;
    if ( *(uint8_t *)(v13 + 5823) && ((v14 = a2[390], v14 == 12) || v14 == 8)
    || (v15 = *(uint8_t *)(v13 + 5824), LOBYTE(v53) = 0, v15) )
    LOBYTE(v53) = 1;
    v16 = *(uint32_t *)(this + 100);
    if ( *(uint32_t *)(this + 108) < v16
    || (*(uint8_t *)(this + 105) || !v16)
    && (v17 = *(uint32_t *)(this + 112), v17 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v7 + 8))(this + 92, v16 + v17, 0) )
    v18 = *(uint32_t *)(this + 108);
    *(uint32_t *)(this + 108) = v18 + 1;
    v19 = v53;
    v20 = (int *)(*(uint32_t *)(this + 96) + 16 * v18);
    *v20 = v13;
    v20[1] = v57;
    v20[2] = v19;
    v20[3] = 0;
    v21 = a2 + 343;
    v46 = 21;
    v45 = a2 + 343;
    do
    if ( !*v21 )
    goto LABEL_47;
    *(uint8_t *)(*v21 + 409) = 1;
    v56 = *(uint32_t *)(*v21 + 200);
    v22 = (int *)(*(int (__thiscall **)(int, int *))(*(uint32_t *)*v21 + 296))(*v21, v55);
    v23 = (int *)(this + 64);
    if ( *(int *)(this + 72) <= 0 || *(int *)(this + 76) <= 0 )
    v32 = *v22;
    v33 = v22[1];
    v34 = v22[2];
    else
    v58 = v22[2];
    if ( v58 > 0 )
    v48 = v22[3];
    if ( v48 > 0 )
    v24 = *v23;
    v25 = *(uint32_t *)(this + 68);
    v26 = *(uint32_t *)(this + 72);
    v50 = v26;
    v51 = *(uint32_t *)(this + 76);
    v27 = *v22;
    if ( v24 > *v22 )
    v28 = v24 - v27 + v26;
    v24 = *v22;
    v50 = v28;
    v29 = v22[1];
    v47 = v29;
    if ( v25 > v29 )
    v30 = v25 - v29 + v51;
    v25 = v29;
    v51 = v30;
    if ( v24 + v50 < v27 + v58 )
    v50 = v27 - v24 + v58 + 1;
    v31 = v51;
    if ( v51 + v25 < v47 + v48 )
    v31 = v47 + v48 - v25 + 1;
    v32 = v24;
    v33 = v25;
    v34 = v50;
    goto LABEL_41;
    v22 = (int *)(this + 64);
    v32 = *v23;
    v33 = *(uint32_t *)(this + 68);
    v34 = *(uint32_t *)(this + 72);
    v31 = v22[3];
    LABEL_41:
    LOBYTE(v53) = 0;
    *(uint32_t *)(this + 64) = v32;
    *(uint32_t *)(this + 68) = v33;
    *(uint32_t *)(this + 72) = v34;
    *(uint32_t *)(this + 76) = v31;
    v21 = v45;
    v35 = *(uint32_t *)(this + 108);
    v36 = *(uint32_t *)(v56 + 692) + *(uint32_t *)(*v45 + 172);
    v37 = *(uint32_t *)(this + 100);
    v54 = *(uint32_t *)(*v45 + 256);
    if ( v35 < v37
    || (*(uint8_t *)(this + 105) || !v37)
    && (v38 = *(uint32_t *)(this + 112), v38 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v7 + 8))(this + 92, v37 + v38, 0) )
    v39 = *(uint32_t *)(this + 108);
    *(uint32_t *)(this + 108) = v39 + 1;
    v40 = (uint32_t *)(*(uint32_t *)(this + 96) + 16 * v39);
    v41 = v53;
    *v40 = v56;
    v42 = v54;
    v40[1] = v36;
    v40[2] = v41;
    v40[3] = v42;
    LABEL_47:
    ++v21;
    v43 = v46 == 1;
    v45 = v21;
    --v46;
    while ( !v43 );
    Cell::CreateCrater(*(uint32_t *)(this + 64), *(uint32_t *)(this + 68), *(uint32_t *)(this + 72), *(uint32_t *)(this + 76), 0);
    *(uint32_t *)(this + 64) += TacticalClass_Instance[44].lpVtbl;
    *(uint32_t *)(this + 68) += TacticalClass_Instance[45].lpVtbl;
    return this;
}

int  FoggedObjectClass::InitDrawRecord(int this, uint32_t *a2)
{
    int v3; // edx
    int v4; // eax
    uint32_t *v5; // eax
    int v6; // edx
    int v7; // eax
    int v8; // eax
    int v9; // ecx
    int v10; // ebx
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // edi
    int v17; // ebp
    uint32_t *v18; // ebx
    signed int i; // eax
    uint32_t *v20; // ecx
    uint32_t v22[2]; // [esp+10h] [ebp-10h] BYREF
    int v23; // [esp+18h] [ebp-8h]
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 36) = -1;
    *(uint32_t *)(this + 40) = 0;
    *(uint32_t *)(this + 44) = 0;
    *(uint32_t *)(this + 48) = 36;
    *(uint32_t *)(this + 52) = a2[39];
    *(uint32_t *)(this + 56) = a2[40];
    *(uint32_t *)(this + 60) = a2[41];
    v3 = a2[40];
    v4 = a2[41];
    v22[0] = a2[39];
    v22[1] = v3;
    v23 = v4;
    *(uint32_t *)(this + 80) = *((char *)Coord::To_Cell(&MapClass_Instance, v22) + 283);
    *(uint32_t *)(this + 84) = -1;
    *(uint32_t *)(this + 88) = 0;
    FoggedObject::DrawVector_Constructor((uint32_t *)(this + 92), 0, 0);
    *(uint32_t *)(this + 92) = &DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable';
    *(uint32_t *)(this + 112) = 10;
    *(uint32_t *)(this + 108) = 0;
    *(uint8_t *)(this + 116) = 1;
    *(uint32_t *)this = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 4) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 8) = &FoggedObjectClass::`vftable';
    *(uint32_t *)(this + 12) = &FoggedObjectClass::`vftable';
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t *, uint32_t *))(*a2 + 300))(a2, v22);
    *(uint32_t *)(this + 64) = *v5;
    *(uint32_t *)(this + 68) = v5[1];
    *(uint32_t *)(this + 72) = v5[2];
    *(uint32_t *)(this + 76) = v5[3];
    v6 = *(uint32_t *)(this + 68);
    *(uint32_t *)(this + 64) += TacticalClass_Instance[44].lpVtbl;
    *(uint32_t *)(this + 68) = (char *)TacticalClass_Instance[45].lpVtbl + v6;
    if ( g_FootClassConfig < dword_8B3D18
    || (byte_8B3D1D || !dword_8B3D18)
    && dword_8B3D24 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_8B3D10 + 8))(
    &dword_8B3D10,
    dword_8B3D18 + dword_8B3D24,
    0) )
    v7 = g_FootClassConfig++;
    *((uint32_t *)dword_8B3D14 + v7) = this;
    v8 = *(uint32_t *)(this + 100);
    v9 = *(uint32_t *)(this + 108);
    v10 = a2[50];
    LOBYTE(v23) = 0;
    if ( v9 < v8
    || (*(uint8_t *)(this + 105) || !v8)
    && (v11 = *(uint32_t *)(this + 112), v11 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(this + 92) + 8))(this + 92, v8 + v11, 0) )
    v12 = *(uint32_t *)(this + 108);
    *(uint32_t *)(this + 108) = v12 + 1;
    v13 = (uint32_t *)(*(uint32_t *)(this + 96) + 16 * v12);
    v14 = v23;
    *v13 = v10;
    v13[1] = 0;
    v13[2] = v14;
    v13[3] = 0;
    v15 = (__int16)(*(uint32_t *)(this + 52) / 256);
    v16 = 74 * ((__int16)(*(uint32_t *)(this + 56) / 256) - ((v15 + (__int16)(*(uint32_t *)(this + 56) / 256)) << 9) - v15)
    - *(uint32_t *)(this + 48)
    + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 )
    goto LABEL_21;
    if ( dword_8B3CC8 )
    v17 = dword_8B3CC8;
    if ( dword_8B3CC8 < 0 )
    return this;
    else
    v17 = 10;
    v18 = __2_YAPAXI_Z(8 * (v17 + dword_8B3CC8));
    if ( v18 )
    for ( i = 0; i < (int)g_MissionState; v18[2 * i - 1] = v20[1] )
    v20 = (char *)g_MissionPool + 8 * i++;
    v18[2 * i - 2] = *v20;
    __3_YAXPAX_Z(g_MissionPool);
    g_MissionPool = v18;
    dword_8B3CC8 += v17;
    dword_8B3CD0 = 0;
    LABEL_21:
    *((uint32_t *)g_MissionPool + 2 * g_MissionState) = v16;
    *((uint32_t *)g_MissionPool + 2 * g_MissionState + 1) = this;
    byte_8B3CCC = 0;
    ++g_MissionState;
    return this;
}

int __stdcall FoggedObjectClass::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int v5; // ebp
    int v6; // edi
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[27];
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    v5 = 0;
    if ( a3 > 0 )
    v6 = 0;
    do
    if ( (*(int (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, v6 + a1[24], 16, 0) < 0 )
    break;
    ++v5;
    v6 += 16;
    while ( v5 < a3 );
    return 0;
    return result;
}

int __stdcall FoggedObjectClass::_vt05(int *a1, int a2)
{
    int *v2; // ebx
    int *v3; // edi
    int result; // eax
    int v5; // edx
    int v6; // ecx
    int v7; // ecx
    int v8; // eax
    int v9; // eax
    int v10; // edx
    uint32_t *v11; // eax
    int v12; // esi
    int v13; // ebx
    uint32_t *v14; // ebp
    signed int i; // eax
    uint32_t *v16; // edx
    int v17; // [esp+2Ch] [ebp-14h] BYREF
    int v18; // [esp+30h] [ebp-10h] BYREF
    int v19; // [esp+34h] [ebp-Ch]
    int v20; // [esp+38h] [ebp-8h]
    int v21; // [esp+3Ch] [ebp-4h]
    v2 = (int *)a2;
    v3 = a1;
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result < 0 )
    return result;
    if ( v3 )
    AbstractClass::InitVtables(v3, (int)&a2);
    FoggedObject::DrawVector_Constructor(v3 + 23, 0, 0);
    v3[23] = (int)&DynamicVectorClass<FoggedObjectClass::DrawRecord>::`vftable';
    v3[28] = 10;
    v3[27] = 0;
    *v3 = (int)&FoggedObjectClass::`vftable';
    v3[1] = (int)&FoggedObjectClass::`vftable';
    v3[2] = (int)&FoggedObjectClass::`vftable';
    v3[3] = (int)&FoggedObjectClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 10);
    v5 = *v2;
    a1 = 0;
    result = (*(int (__stdcall **)(int *, int **, int, uint32_t))(v5 + 12))(v2, &a1, 4, 0);
    a2 = result;
    if ( result < 0 )
    return result;
    v17 = 0;
    if ( (int)a1 <= 0 )
    LABEL_14:
    v17 = *(uint32_t *)(*(int (__thiscall **)(int *, int *))(*v3 + 96))(v3, &v17);
    v12 = 74 * (SHIWORD(v17) - (((__int16)v17 + SHIWORD(v17)) << 9) - (__int16)v17) - v3[12] + 0x7FFFFFFF;
    if ( (int)(g_MissionState + 1) <= dword_8B3CC8 )
    LABEL_22:
    *((uint32_t *)g_MissionPool + 2 * g_MissionState) = v12;
    *((uint32_t *)g_MissionPool + 2 * g_MissionState + 1) = v3;
    byte_8B3CCC = 0;
    ++g_MissionState;
    return a2;
    if ( dword_8B3CC8 )
    v13 = dword_8B3CC8;
    if ( dword_8B3CC8 < 0 )
    return a2;
    else
    v13 = 10;
    v17 = v13 + dword_8B3CC8;
    v14 = __2_YAPAXI_Z(8 * (v13 + dword_8B3CC8));
    if ( v14 )
    --v17;
    for ( i = 0; i < (int)g_MissionState; v14[2 * i - 1] = v16[1] )
    v16 = (char *)g_MissionPool + 8 * i++;
    v14[2 * i - 2] = *v16;
    __3_YAXPAX_Z(g_MissionPool);
    g_MissionPool = v14;
    dword_8B3CC8 += v13;
    dword_8B3CD0 = 0;
    goto LABEL_22;
    return a2;
    while ( 1 )
    v6 = *v2;
    v18 = 0;
    v19 = 0;
    LOBYTE(v20) = 0;
    v21 = 0;
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v6 + 12))(v2, &v18, 16, 0);
    a2 = result;
    if ( result < 0 )
    return result;
    v7 = v3[25];
    if ( v3[27] < v7
    || (*((uint8_t *)v3 + 105) || !v7)
    && (v8 = v3[28], v8 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(v3[23] + 8))(v3 + 23, v7 + v8, 0) )
    v9 = v3[27];
    v10 = v18;
    v3[27] = v9 + 1;
    v11 = (uint32_t *)(v3[24] + 16 * v9);
    *v11 = v10;
    v11[1] = v19;
    v11[2] = v20;
    v11[3] = v21;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(16 * v3[27] + v3[24] - 16));
    if ( ++v17 >= (int)a1 )
    goto LABEL_14;
}

int FoggedObjectClass::_vt11()
{
    return 61;
}

int FoggedObjectClass::_vt12()
{
    return 120;
}

int __stdcall FoggedObjectClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 474417934;
    a2[1] = 299002327;
    a2[2] = 1610674872;
    a2[3] = -318126072;
    return 0;
}

int  FoggedObjectClass::_vt13(int this, int a2)
{
    AbstractClass::ProcessPower((void*378 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 36));
    Power::TimerProcess(*(uint32_t *)(this + 44));
    Power::TimerProcess(*(uint32_t *)(this + 48));
    Power::TimerProcess(*(uint32_t *)(this + 52));
    Power::TimerProcess(*(uint32_t *)(this + 56));
    Power::TimerProcess(*(uint32_t *)(this + 60));
    Power::TimerProcess(*(uint32_t *)(this + 64));
    Power::TimerProcess(*(uint32_t *)(this + 68));
    Power::TimerProcess(*(uint32_t *)(this + 72));
    Power::TimerProcess(*(uint32_t *)(this + 76));
    Power::TimerProcess(*(uint32_t *)(this + 80));
    Power::TimerProcess(*(uint32_t *)(this + 84));
    Power::TimerProcess(*(uint32_t *)(this + 88));
    return Power::TimerProcess(*(uint32_t *)(this + 108));
}

uint32_t * FoggedObjectClass::_vt24(uint32_t *this, uint32_t *a2)
{
    int v3; // [esp+0h] [ebp-4h]
    LOWORD(v3) = *(this + 13) / 256;
    HIWORD(v3) = *(this + 14) / 256;
    *a2 = v3;
    return a2;
}

void * FoggedObjectClass::_vt08(void *Block, char a2)
{
    DestructFoggedObjectClass((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  FoggedObjectClass::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint32_t *)*(this + 1);
    v6 = (uint32_t *)(v4 + 4);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *v6 )
    ++v3;
    v6 += 4;
    v5 += 4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

// 0x004D2BC0
char  FoggedObjectClass::ResizeArray(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // edx
    char *v14; // ebx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 8;
    v10 = a2;
    do
    *((uint32_t *)v9 - 2) = 0;
    *((uint32_t *)v9 - 1) = 0;
    *v9 = 0;
    *((uint32_t *)v9 + 1) = 0;
    v9 += 16;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 8;
    v8 = a2;
    do
    *((uint32_t *)v7 - 2) = 0;
    *((uint32_t *)v7 - 1) = 0;
    *v7 = 0;
    *((uint32_t *)v7 + 1) = 0;
    v7 += 16;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
    v12 = 0;
    do
    v13 = (uint32_t *)(*((uint32_t *)this + 1) + v12);
    v14 = &v5[v12];
    v12 += 16;
    --v11;
    *(uint32_t *)v14 = *v13;
    *((uint32_t *)v14 + 1) = v13[1];
    *((uint32_t *)v14 + 2) = v13[2];
    *((uint32_t *)v14 + 3) = v13[3];
    while ( v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  FoggedObjectClass::_vt04(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 4 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * FoggedObjectClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<FoggedObjectClass::DrawRecord>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

