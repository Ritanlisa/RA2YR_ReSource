#include "cellclass.hpp"

// 0x0045A170
int  CellClass::SetField2C(int *this)
{
    int result; // eax
    result = *this;
    if ( *this )
    return (*(int (__stdcall **)(int))(*(uint32_t *)result + 4))(result);
    return result;
}

void  CellClass::DTOR(uint32_t *this)
{
    void (__thiscall ***v2)(uint32_t, int); // ecx
    void (__thiscall ***v3)(uint32_t, int); // ecx
    int v4; // eax
    v2 = (void (__thiscall ***)(uint32_t, int))*(this + 10);
    *this = &CellClass::`vftable';
    *(this + 1) = &CellClass::`vftable';
    *(this + 2) = &CellClass::`vftable';
    *(this + 3) = &CellClass::`vftable';
    if ( v2 )
    (**v2)(v2, 1);
    *(this + 10) = 0;
    v3 = (void (__thiscall ***)(uint32_t, int))*(this + 63);
    if ( v3 )
    (**v3)(v3, 1);
    *(this + 63) = 0;
    *(this + 57) = 0;
    if ( *(this + 9) != dword_89E748 )
    v4 = *(this + 13);
    if ( v4 )
    if ( WTFMode )
    --*(uint32_t *)(v4 + 404);
    *(this + 13) = 0;
    AbstractClass::DTOR(this);
}

int __fastcall CellClass::SetWallOwner(int a1)
{
    int result; // eax
    int v2; // ebp
    int v3; // ebx
    int i; // edi
    int v5; // esi
    int v6; // eax
    int v7; // [esp+0h] [ebp-4h]
    result = *(uint32_t *)(a1 + 68);
    v7 = a1;
    if ( result != -1 )
    result = *(uint32_t *)&BuildingTypeClass_Array->gap0[4 * result];
    if ( *(uint8_t *)(result + 680) )
    result = g_BuildingProductionState;
    v2 = -1;
    v3 = 0;
    for ( i = 0x7FFFFFFF; v3 < g_BuildingProductionState; ++v3 )
    v5 = *((uint32_t *)g_BuildingClass_InstanceCount + v3);
    if ( *(uint8_t *)(v5 + 144) && *(uint8_t *)(v5 + 116) && *(uint8_t *)(*(uint32_t *)(*(uint32_t *)(v5 + 540) + 52) + 423) )
    v6 = ObjectClass::DistanceTo((void *)v5, a1);
    if ( v6 < i )
    i = v6;
    v2 = (*(int (__thiscall **)(int))(*(uint32_t *)v5 + 56))(v5);
    result = g_BuildingProductionState;
    a1 = v7;
    *(uint32_t *)(a1 + 80) = v2;
    return result;
}

char  CellClass::AddContent(int this, uint32_t *a2, char a3)
{
    int v3; // eax
    int v5; // esi
    int i; // eax
    int inited; // eax
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v13; // [esp+Ch] [ebp-14h] BYREF
    int v14; // [esp+10h] [ebp-10h]
    int v15; // [esp+14h] [ebp-Ch] BYREF
    int v16; // [esp+18h] [ebp-8h]
    int v17; // [esp+1Ch] [ebp-4h]
    int v18; // [esp+28h] [ebp+8h]
    int v19; // [esp+28h] [ebp+8h]
    LOBYTE(v3) = a3;
    if ( a3 )
    v5 = *(uint32_t *)(this + 232);
    else
    v5 = *(uint32_t *)(this + 228);
    if ( a2 )
    if ( (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) == 6 && v5 )
    for ( i = *(uint32_t *)(v5 + 48); i; i = *(uint32_t *)(i + 48) )
    v5 = i;
    *(uint32_t *)(v5 + 48) = a2;
    a2[12] = 0;
    else if ( a3 )
    if ( !v5 || *(uint32_t **)(v5 + 48) != a2 )
    a2[12] = v5;
    *(uint32_t *)(this + 232) = a2;
    else if ( !v5 || *(uint32_t **)(v5 + 48) != a2 )
    a2[12] = v5;
    *(uint32_t *)(this + 228) = a2;
    v18 = *(uint32_t *)(this + 36);
    v13 = 128;
    v14 = 128;
    inited = Isometric::InitTables(this, &v13);
    v15 = ((__int16)v18 << 8) + 128;
    v16 = (SHIWORD(v18) << 8) + 128;
    v17 = inited;
    if ( !Cell::IsPassable(&v15)
    && (v19 = *(uint32_t *)(this + 36),
    v13 = 128,
    v14 = 128,
    v8 = Isometric::InitTables(this, &v13),
    v15 = ((__int16)v19 << 8) + 128,
    v16 = (SHIWORD(v19) << 8) + 128,
    v17 = v8,
    !Game::Stub3((int)&v15))
    || GameMode_Current[0] )
    (*(void (__thiscall **)(uint32_t *, void*375 *))(*a2 + 408))(a2, HouseClass_Player);
    v3 = (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2);
    if ( v3 != 15 )
    LOBYTE(v3) = (*(int (__thiscall **)(uint32_t *))(*a2 + 192))(a2);
    if ( (uint8_t)v3 )
    if ( (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) == 6 )
    v9 = *(__int16 *)(this + 36);
    v10 = *(__int16 *)(this + 38);
    v11 = *a2;
    v17 = 0;
    v15 = (v9 << 8) + 128;
    v16 = (v10 << 8) + 128;
    else
    v15 = a2[39];
    v11 = *a2;
    v16 = a2[40];
    v17 = a2[41];
    LOBYTE(v3) = (*(int (__thiscall **)(uint32_t *, int *))(v11 + 240))(a2, &v15);
    return v3;
}

// 0x0047EA90
void  CellClass::RemoveContent(int this, uint32_t *a2, char a3)
{
    uint32_t *v4; // eax
    uint32_t *v5; // ecx
    int v6; // ecx
    int v7; // edx
    int v8; // eax
    int v9; // [esp+8h] [ebp-Ch] BYREF
    int v10; // [esp+Ch] [ebp-8h]
    int v11; // [esp+10h] [ebp-4h]
    if ( !a2 )
    return;
    if ( a3 )
    v4 = *(uint32_t **)(this + 232);
    else
    v4 = *(uint32_t **)(this + 228);
    if ( v4 == a2 )
    if ( a3 )
    *(uint32_t *)(this + 232) = a2[12];
    else
    *(uint32_t *)(this + 228) = a2[12];
    LABEL_14:
    a2[12] = 0;
    goto LABEL_15;
    if ( v4 )
    while ( 1 )
    v5 = (uint32_t *)v4[12];
    if ( v5 == a2 )
    break;
    v4 = (uint32_t *)v4[12];
    if ( !v5 )
    goto LABEL_15;
    v4[12] = a2[12];
    goto LABEL_14;
    LABEL_15:
    if ( (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) != 15
    && (*(unsigned __int8 (__thiscall **)(uint32_t *))(*a2 + 192))(a2) )
    if ( (*(int (__thiscall **)(uint32_t *))(*a2 + 44))(a2) == 6 )
    v6 = *(__int16 *)(this + 36);
    v7 = *(__int16 *)(this + 38);
    v8 = *a2;
    v11 = 0;
    v9 = (v6 << 8) + 128;
    v10 = (v7 << 8) + 128;
    else
    v9 = a2[39];
    v8 = *a2;
    v10 = a2[40];
    v11 = a2[41];
    (*(void (__thiscall **)(uint32_t *, int *))(v8 + 244))(a2, &v9);
}

// 0x004839F0
int  CellClass::SaveLoad_Prefix(#378 *this)
{
    int v1; // ebp
    uint32_t *v2; // esi
    int result; // eax
    uint32_t *v4; // eax
    uint32_t *v5; // edi
    int v6; // eax
    int v7; // edi
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // edx
    int v12; // eax
    int i; // edi
    int v14; // ecx
    int v15; // edi
    int v16; // eax
    int v17; // edi
    int v18; // ecx
    int v19; // eax
    int v20; // [esp+28h] [ebp-4h] BYREF
    uint32_t *v21; // [esp+30h] [ebp+4h]
    int v22; // [esp+30h] [ebp+4h]
    int v23; // [esp+34h] [ebp+8h] BYREF
    v1 = v23;
    v2 = v21;
    result = AbstractClass::SaveLoad_Prefix_0(v21, v23);
    if ( result >= 0 )
    if ( v21 )
    AbstractClass::InitVtables(v21, (int)&v23);
    v21[13] = 0;
    v21[19] = 0;
    *v21 = &CellClass::`vftable';
    v21[1] = &CellClass::`vftable';
    v21[2] = &CellClass::`vftable';
    v21[3] = &CellClass::`vftable';
    if ( !v21[10] )
    goto LABEL_20;
    v4 = __2_YAPAXI_Z(0x18u);
    v5 = v4;
    if ( v4 )
    CellClass::clearOccupationFlags(v4, 0, 0);
    *v5 = &DynamicVectorClass<FoggedObjectClass *>::`vftable';
    v5[5] = 10;
    v5[4] = 0;
    else
    v5 = 0;
    v21[10] = v5;
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v1 + 12))(v1, &v20, 4, 0);
    if ( result >= 0 )
    v22 = 0;
    if ( v20 > 0 )
    do
    v6 = *(uint32_t *)v1;
    v23 = 0;
    if ( (*(int (__stdcall **)(int, int *, int, uint32_t))(v6 + 12))(v1, &v23, 4, 0) < 0 )
    return 0;
    v7 = v2[10];
    v8 = *(uint32_t *)(v7 + 8);
    if ( *(uint32_t *)(v7 + 16) >= v8 )
    if ( !*(uint8_t *)(v7 + 13) && v8 )
    continue;
    v9 = *(uint32_t *)(v7 + 20);
    if ( v9 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v7 + 8))(v7, v8 + v9, 0) )
    continue;
    v10 = *(uint32_t *)(v7 + 16);
    v11 = *(uint32_t *)(v7 + 4);
    *(uint32_t *)(v7 + 16) = v10 + 1;
    *(uint32_t *)(v11 + 4 * v10) = v23;
    while ( ++v22 < v20 );
    v12 = v2[10];
    for ( i = 0; i < *(uint32_t *)(v12 + 16); ++i )
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(uint32_t *)(v12 + 4) + 4 * i));
    v12 = v2[10];
    LABEL_20:
    v14 = *((__int16 *)v2 + 18);
    v15 = *((__int16 *)v2 + 19) << 9;
    v2[63] = 0;
    v16 = g_Shroud_CellArray;
    v17 = v14 + v15;
    v18 = *(uint32_t *)(g_Shroud_CellArray + 4 * v17);
    if ( v18 )
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v18 + 32))(v18, 1);
    *(uint32_t *)(g_Shroud_CellArray + 4 * v17) = 0;
    v16 = g_Shroud_CellArray;
    *(uint32_t *)(v16 + 4 * v17) = v2;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 11);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 12);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 15);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 56);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 57);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 58);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 62);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 16);
    v19 = v2[17];
    if ( v19 == 179 || v19 == 242 )
    v2[17] = -1;
    *((uint8_t *)v2 + 286) = 0;
    return 0;
    return result;
}

// 0x00483C10
int  CellClass::SaveLoad_Prefix_0(#378 *this)
{
    int result; // eax
    int v2; // eax
    int v3; // edx
    int i; // edi
    int *v5; // [esp+18h] [ebp+4h]
    int *v6; // [esp+1Ch] [ebp+8h]
    int v7; // [esp+20h] [ebp+Ch] BYREF
    result = AbstractClass::SaveLoad_Prefix(v5, v6, v7);
    if ( result >= 0 )
    v2 = v5[10];
    if ( v2 )
    v3 = *v6;
    v7 = *(uint32_t *)(v2 + 16);
    result = (*(int (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(v6, &v7, 4, 0);
    if ( result < 0 )
    return result;
    for ( i = 0; i < v7; ++i )
    if ( (*(int (__stdcall **)(int *, int, int, uint32_t))(*v6 + 16))(v6, *(uint32_t *)(v5[10] + 4) + 4 * i, 4, 0) < 0 )
    break;
    return 0;
    return result;
}

int  CellClass::GetUIName(int *this)
{
    int BuildingByTiberiumType; // eax
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(this + 17));
    if ( BuildingByTiberiumType == -1 )
    return 0;
    else
    return *(uint32_t *)(*(uint32_t *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType] + 96);
}

int  CellClass::_vt03(#378 *this)
{
    uint32_t *v2; // [esp+8h] [ebp+8h]
    if ( !v2 )
    return -2147467261;
    *v2 = -1044407858;
    v2[1] = 298982028;
    v2[2] = 1610642817;
    v2[3] = -1252326136;
    return 0;
}

void  CellClass::ProcessBridgeRepair(uint32_t *this)
{
    uint32_t *v1; // ebp
    int *PlacementRect; // esi
    int *StartCoords; // eax
    int v4; // ecx
    int v5; // edx
    int v6; // edi
    int v7; // ebx
    int v8; // eax
    int v9; // esi
    LONG right; // edx
    int v11; // eax
    int v12; // ebp
    LONG bottom; // esi
    int v14; // edi
    int BridgeBitfield; // eax
    signed int v16; // edi
    uint8_t *NeighbourContent; // esi
    int v18; // ebx
    struct tagRECT *v19; // ebp
    struct tagRECT *v20; // eax
    LONG left; // edx
    LONG v22; // ecx
    LONG v23; // ebx
    LONG top; // edi
    LONG v25; // eax
    bool v26; // cc
    LONG v27; // ebp
    LONG v28; // ebx
    int *v29; // eax
    struct tagRECT *v30; // eax
    int *v31; // eax
    uint32_t *v32; // eax
    int *v33; // eax
    int *v34; // eax
    struct tagRECT *v35; // eax
    int *v36; // eax
    int *v37; // eax
    struct tagRECT *v38; // [esp-Ch] [ebp-10Ch]
    int v39; // [esp-8h] [ebp-108h]
    const RECT *v40; // [esp-8h] [ebp-108h]
    uint32_t *v41; // [esp-8h] [ebp-108h]
    struct tagRECT *v42; // [esp-4h] [ebp-104h]
    int v43; // [esp-4h] [ebp-104h]
    const RECT *v44; // [esp-4h] [ebp-104h]
    const RECT *v45; // [esp-4h] [ebp-104h]
    uint32_t *v46; // [esp-4h] [ebp-104h]
    const RECT *v47; // [esp+0h] [ebp-100h]
    const RECT *v48; // [esp+0h] [ebp-100h]
    const RECT *v49; // [esp+0h] [ebp-100h]
    const RECT *v50; // [esp+4h] [ebp-FCh]
    const RECT *v51; // [esp+4h] [ebp-FCh]
    const RECT *v52; // [esp+4h] [ebp-FCh]
    int v53; // [esp+10h] [ebp-F0h]
    int v54; // [esp+10h] [ebp-F0h]
    struct tagRECT rcDst; // [esp+14h] [ebp-ECh] BYREF
    int v56; // [esp+24h] [ebp-DCh]
    int v57; // [esp+28h] [ebp-D8h]
    LONG v58; // [esp+2Ch] [ebp-D4h]
    LONG v59; // [esp+30h] [ebp-D0h]
    signed int v60; // [esp+34h] [ebp-CCh]
    int v61; // [esp+38h] [ebp-C8h]
    int v62; // [esp+3Ch] [ebp-C4h]
    int v63; // [esp+40h] [ebp-C0h]
    int v64; // [esp+44h] [ebp-BCh]
    int v65; // [esp+48h] [ebp-B8h]
    uint32_t *v66; // [esp+4Ch] [ebp-B4h]
    int v67; // [esp+50h] [ebp-B0h]
    int v68; // [esp+54h] [ebp-ACh]
    uint32_t v69[2]; // [esp+58h] [ebp-A8h] BYREF
    int v70; // [esp+60h] [ebp-A0h] BYREF
    LONG v71; // [esp+68h] [ebp-98h]
    int v72[2]; // [esp+70h] [ebp-90h] BYREF
    int v73[4]; // [esp+78h] [ebp-88h] BYREF
    uint32_t v74[4]; // [esp+88h] [ebp-78h] BYREF
    int v75; // [esp+98h] [ebp-68h] BYREF
    uint32_t v76[4]; // [esp+A0h] [ebp-60h] BYREF
    RECT rcSrc1; // [esp+B0h] [ebp-50h] BYREF
    int v78[4]; // [esp+C0h] [ebp-40h] BYREF
    int v79[4]; // [esp+E0h] [ebp-20h] BYREF
    int v80[4]; // [esp+F0h] [ebp-10h] BYREF
    v1 = this;
    v66 = this;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    PlacementRect = BuildingClass::GetPlacementRect((int)this, &v70);
    StartCoords = House::GetStartCoords((int)v1, &rcDst);
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 )
    v4 = *PlacementRect;
    v6 = PlacementRect[1];
    v7 = PlacementRect[2];
    v8 = PlacementRect[3];
    goto LABEL_16;
    v53 = PlacementRect[2];
    if ( v53 <= 0 || (v65 = PlacementRect[3], v65 <= 0) )
    v4 = *StartCoords;
    v6 = StartCoords[1];
    v7 = StartCoords[2];
    v8 = StartCoords[3];
    LABEL_16:
    v64 = v8;
    goto LABEL_17;
    v4 = *StartCoords;
    v5 = *PlacementRect;
    v6 = StartCoords[1];
    v7 = StartCoords[2];
    v8 = StartCoords[3];
    if ( v4 > *PlacementRect )
    v7 += v4 - v5;
    v4 = *PlacementRect;
    v9 = PlacementRect[1];
    v60 = v9;
    if ( v6 > v9 )
    v8 += v6 - v9;
    v6 = v9;
    if ( v7 + v4 < v5 + v53 )
    v7 = v5 - v4 + v53 + 1;
    if ( v8 + v6 < v65 + v60 )
    v8 = v65 + v60 - v6 + 1;
    v1 = v66;
    v64 = v8;
    LABEL_17:
    right = v58;
    if ( v58 <= 0 || v59 <= 0 )
    right = v7;
    else if ( v7 <= 0 || v8 <= 0 )
    v4 = v56;
    v6 = v57;
    v8 = v59;
    else
    v11 = v56;
    v12 = v57;
    rcDst.bottom = v59;
    rcDst.right = v58;
    if ( v56 > v4 )
    v11 = v4;
    rcDst.right = v56 + v58 - v4;
    if ( v57 > v6 )
    v12 = v6;
    rcDst.bottom += v57 - v6;
    if ( v11 + rcDst.right >= v4 + v7 )
    right = rcDst.right;
    else
    right = v4 - v11 + v7 + 1;
    bottom = rcDst.bottom;
    v14 = v64 + v6;
    if ( rcDst.bottom + v12 < v14 )
    bottom = v14 - v12 + 1;
    v4 = v11;
    v6 = v12;
    v1 = v66;
    v8 = bottom;
    v56 = v4;
    v57 = v6;
    v58 = right;
    v59 = v8;
    *((uint8_t *)v1 + 286) = 0;
    BridgeBitfield = CellClass::GetBridgeBitfield(v1);
    if ( !BridgeBitfield || *((uint8_t *)v1 + 284) )
    v1[17] = -1;
    else
    *((uint8_t *)v1 + 286) = 3 * BridgeBitfield + abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 3);
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v1 + 9));
    v16 = 0;
    v60 = 0;
    do
    NeighbourContent = Cell::GetNeighbourContent(v1, v16);
    if ( !NeighbourContent[284] && *((uint32_t *)NeighbourContent + 17) == 126 && NeighbourContent[286] < 0x30u )
    v18 = CellClass::GetBridgeBitfield(NeighbourContent);
    v67 = v18;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v19 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v79);
    v20 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, v80);
    if ( v20->right <= 0 || v20->bottom <= 0 )
    rcDst = *v19;
    else
    v54 = v19->right;
    if ( v54 <= 0 || (v68 = v19->bottom, v68 <= 0) )
    rcDst = *v20;
    else
    left = v20->left;
    v22 = v19->left;
    v23 = v20->right;
    top = v20->top;
    v25 = v20->bottom;
    v26 = left <= v19->left;
    v71 = v23;
    if ( !v26 )
    v23 += left - v22;
    left = v22;
    v71 = v23;
    v27 = v19->top;
    v65 = v27;
    if ( top > v27 )
    v25 += top - v27;
    top = v27;
    if ( left + v23 >= v22 + v54 )
    v28 = v71;
    else
    v28 = v22 - left + v54 + 1;
    if ( v25 + top < v68 + v65 )
    v25 = v68 + v65 - top + 1;
    rcDst.top = top;
    v16 = v60;
    rcDst.right = v28;
    v18 = v67;
    rcDst.left = left;
    rcDst.bottom = v25;
    v29 = (int *)Rect::Union(&rcDst, v47, v50);
    v61 = *v29;
    v62 = v29[1];
    v63 = v29[2];
    v64 = v29[3];
    if ( v18 )
    NeighbourContent[286] = 3 * v18 + abs32(Random::State((uint32_t *)ScenarioClass_Instance + 134) % 3);
    else
    *((uint32_t *)NeighbourContent + 17) = -1;
    House::AnnounceUpgrade((int)NeighbourContent, -1);
    v69[0] = DSurface_ViewBounds;
    v69[1] = Map_VisibleRect;
    v42 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v73);
    House::GetStartCoords((int)NeighbourContent, v74);
    v30 = (struct tagRECT *)Rect::Union(v42, v48, v51);
    v31 = (int *)Rect::Union(v30, v49, v52);
    v43 = v31[3];
    v39 = v31[2];
    v32 = CellStruct::Copy(v31, v72);
    v33 = Coord2D::Sub(v32, &v75, v69);
    v34 = Rect::Construct(&rcSrc1, v33, v39, v43);
    v61 = *v34;
    v62 = v34[1];
    v63 = v34[2];
    v64 = v34[3];
    Cell::CreateCrater(*v34, v34[1], v34[2], v34[3], 0);
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(NeighbourContent + 36));
    v1 = v66;
    v16 += 2;
    v60 = v16;
    while ( v16 < 8 );
    v44 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v72);
    v38 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v1, v78);
    House::GetStartCoords((int)v1, v76);
    v35 = (struct tagRECT *)Rect::Union(v38, &rcSrc1, v44);
    v36 = (int *)Rect::Union(v35, v40, v45);
    v37 = Bounds::Subtract(v36, v41, v46);
    v56 = *v37;
    v57 = v37[1];
    v58 = v37[2];
    v59 = v37[3];
    Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0);
    House::AnnounceUpgrade((int)v1, -1);
}

int  CellClass::_vt20(#378 *this)
{
    int result; // eax
    result = *((uint32_t *)this + 14);
    LOBYTE(result) = result < g_CellPassabilityLUT || result >= g_CellPassabilityLUT + 14;
    return result;
}

int  CellClass::_vt18(#378 *this)
{
    int v1; // esi
    int v2; // edi
    int inited; // eax
    uint32_t v5[2]; // [esp+8h] [ebp-8h] BYREF
    uint32_t *v6; // [esp+14h] [ebp+4h]
    v2 = (*((__int16 *)this + 19) << 8) + 128;
    v5[0] = (*((__int16 *)this + 18) << 8) + 128;
    v1 = v5[0];
    v5[1] = v2;
    inited = Isometric::InitTables((int)this, v5);
    *v6 = v1;
    v6[1] = v2;
    v6[2] = inited;
    return (int)v6;
}

int  CellClass::_vt22(#378 *this)
{
    int v1; // esi
    int *v2; // eax
    int v3; // ecx
    int v4; // edx
    int v5; // eax
    uint32_t *v7; // ecx
    uint8_t v8[12]; // [esp+4h] [ebp-Ch] BYREF
    uint32_t *v9; // [esp+14h] [ebp+4h]
    if ( (*((uint32_t *)this + 80) & 0x100) != 0 )
    v1 = dword_89E7B4;
    v2 = (int *)(*(int (__thiscall **)(void*378 *, uint8_t *))(*(uint32_t *)this + 72))(this, v8);
    v3 = *v2;
    v4 = v2[1];
    v5 = v1 + v2[2];
    *v9 = v3;
    v9[1] = v4;
    v9[2] = v5;
    return (int)v9;
    else
    v7 = (uint32_t *)(*(int (__thiscall **)(void*378 *, uint8_t *))(*(uint32_t *)this + 72))(this, v8);
    *v9 = *v7;
    v9[1] = v7[1];
    v9[2] = v7[2];
    return (int)v9;
}

int  CellClass::Unshroud(int *this)
{
    int v1; // eax
    int result; // eax
    v1 = *(this + 75);
    LOBYTE(v1) = v1 | 0x18;
    *(this + 75) = v1;
    result = *(this + 76);
    if ( result > 0 )
    result = *(this + 80);
    LOBYTE(result) = result | 0x20;
    *(this + 80) = result;
    return result;
}

// 0x00487CE0
void  CellClass::RadLevel_Increase(double *this, double a2)
{
    *(this + 30) = a2 + *(this + 30);
}

// 0x00487D00
void  CellClass::RadLevel_Decrease(int this, double a2)
{
    double v2; // st7
    v2 = *(double *)(this + 240) - a2;
    *(double *)(this + 240) = v2;
    if ( v2 >= 0.0 )
    *(double *)(this + 240) = v2;
    else
    *(uint32_t *)(this + 240) = 0;
    *(uint32_t *)(this + 244) = 0;
}

int  CellClass::_vt11(#378 *this)
{
    return 11;
}

int  CellClass::_vt12(#378 *this)
{
    return 328;
}

int  CellClass::_vt08(#378 *this)
{
    char v3; // [esp+8h] [ebp+4h]
    CellClass::DTOR(this);
    if ( (v3 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (int)this;
}

int  CellClass::ApplyTerrainModTile(uint32_t *this, int a2)
{
    int v2; // esi
    unsigned int v4; // eax
    uint32_t *v5; // eax
    int result; // eax
    __int16 v7; // dx
    int v8; // eax
    __int16 v9; // ax
    __int16 v10; // cx
    int v11; // eax
    __int16 v12; // dx
    __int16 v13; // dx
    int v14; // eax
    __int16 v15; // ax
    __int16 v16; // cx
    int v17; // eax
    int v18; // [esp+8h] [ebp-8h] BYREF
    int v19; // [esp+Ch] [ebp-4h] BYREF
    v2 = a2;
    v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9);
    if ( v4 >= 0x40000 || (v5 = *(uint32_t **)(g_Shroud_CellArray + 4 * v4)) == 0 )
    g_Map_GlobalCellIndex = *(uint32_t *)a2;
    v5 = g_CellClassArray;
    result = v5[17];
    if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 )
    v7 = *(_WORD *)(a2 + 2);
    LOWORD(a2) = *(_WORD *)a2;
    HIWORD(a2) = v7 - 1;
    v8 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v8 >= 205 && v8 <= 232 )
    v10 = *(_WORD *)(v2 + 2) - 2;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v10;
    v11 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v11 >= 205 && v11 <= 232 )
    v12 = *(_WORD *)(v2 + 2);
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v12 - 1;
    return CellClass::ApplyTerrainMod2(this, &a2);
    else
    return CellClass::ApplyTerrainMod2(this, (uint32_t *)v2);
    else
    v9 = *(_WORD *)(v2 + 2) + 1;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v9;
    return CellClass::ApplyTerrainMod2(this, &a2);
    else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 )
    v13 = *(_WORD *)a2 - 1;
    HIWORD(a2) = *(_WORD *)(a2 + 2);
    LOWORD(a2) = v13;
    v14 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v14 >= 205 && v14 <= 232 )
    v16 = *(_WORD *)v2 - 2;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v16;
    v17 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v17 >= 205 && v17 <= 232 )
    a2 = 1;
    v18 = *CellStruct::Sub((__int16 *)v2, &v19, &a2);
    return CellClass::ApplyTerrainMod(this, &v18);
    else
    return CellClass::ApplyTerrainMod(this, (uint32_t *)v2);
    else
    v15 = *(_WORD *)v2 + 1;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v15;
    return CellClass::ApplyTerrainMod(this, &a2);
    return result;
}

void  CellClass::ApplyCliffTileModifications(int *this, int a2)
{
    int v2; // esi
    unsigned int v4; // eax
    uint32_t *v5; // eax
    int v6; // eax
    __int16 v7; // dx
    int v8; // eax
    __int16 v9; // ax
    __int16 v10; // cx
    int v11; // eax
    __int16 v12; // dx
    __int16 v13; // dx
    int v14; // eax
    __int16 v15; // ax
    __int16 v16; // cx
    int v17; // eax
    int v18; // [esp+8h] [ebp-8h] BYREF
    int v19; // [esp+Ch] [ebp-4h] BYREF
    v2 = a2;
    v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9);
    if ( v4 >= 0x40000 || (v5 = *(uint32_t **)(g_Shroud_CellArray + 4 * v4)) == 0 )
    g_Map_GlobalCellIndex = *(uint32_t *)a2;
    v5 = g_CellClassArray;
    v6 = v5[17];
    if ( v6 >= 74 && v6 <= 82 || v6 >= 92 && v6 <= 95 || v6 == 100 )
    v7 = *(_WORD *)(a2 + 2);
    LOWORD(a2) = *(_WORD *)a2;
    HIWORD(a2) = v7 - 1;
    v8 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v8 >= 74 && v8 <= 101 )
    v10 = *(_WORD *)(v2 + 2) - 2;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v10;
    v11 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v11 >= 74 && v11 <= 101 )
    v12 = *(_WORD *)(v2 + 2);
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v12 - 1;
    CellClass::ApplyTileModification6(this, &a2);
    else
    CellClass::ApplyTileModification6(this, (uint32_t *)v2);
    else
    v9 = *(_WORD *)(v2 + 2) + 1;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v9;
    CellClass::ApplyTileModification6(this, &a2);
    else if ( v6 >= 83 && v6 <= 91 || v6 >= 96 && v6 <= 99 || v6 == 101 )
    v13 = *(_WORD *)a2 - 1;
    HIWORD(a2) = *(_WORD *)(a2 + 2);
    LOWORD(a2) = v13;
    v14 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v14 >= 74 && v14 <= 101 )
    v16 = *(_WORD *)v2 - 2;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v16;
    v17 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v17 >= 74 && v17 <= 101 )
    a2 = 1;
    v18 = *CellStruct::Sub((__int16 *)v2, &v19, &a2);
    CellClass::ApplyTileModification7(this, &v18);
    else
    CellClass::ApplyTileModification7(this, (int *)v2);
    else
    v15 = *(_WORD *)v2 + 1;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v15;
    CellClass::ApplyTileModification7(this, &a2);
}

void  CellClass::ApplyTileMod58(int *this, int a2)
{
    int v2; // esi
    unsigned int v4; // eax
    uint32_t *v5; // eax
    int v6; // eax
    __int16 v7; // dx
    int v8; // eax
    __int16 v9; // ax
    __int16 v10; // cx
    int v11; // eax
    __int16 v12; // dx
    __int16 v13; // dx
    int v14; // eax
    __int16 v15; // ax
    __int16 v16; // cx
    int v17; // eax
    int v18; // [esp+8h] [ebp-8h] BYREF
    int v19; // [esp+Ch] [ebp-4h] BYREF
    v2 = a2;
    v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9);
    if ( v4 >= 0x40000 || (v5 = *(uint32_t **)(g_Shroud_CellArray + 4 * v4)) == 0 )
    g_Map_GlobalCellIndex = *(uint32_t *)a2;
    v5 = g_CellClassArray;
    v6 = v5[17];
    if ( v6 >= 205 && v6 <= 213 || v6 >= 223 && v6 <= 226 || v6 == 231 )
    v7 = *(_WORD *)(a2 + 2);
    LOWORD(a2) = *(_WORD *)a2;
    HIWORD(a2) = v7 - 1;
    v8 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v8 >= 205 && v8 <= 232 )
    v10 = *(_WORD *)(v2 + 2) - 2;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v10;
    v11 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v11 >= 205 && v11 <= 232 )
    v12 = *(_WORD *)(v2 + 2);
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v12 - 1;
    CellClass::ApplyTileModification5(this, &a2);
    else
    CellClass::ApplyTileModification5(this, (uint32_t *)v2);
    else
    v9 = *(_WORD *)(v2 + 2) + 1;
    LOWORD(a2) = *(_WORD *)v2;
    HIWORD(a2) = v9;
    CellClass::ApplyTileModification5(this, &a2);
    else if ( v6 >= 214 && v6 <= 222 || v6 >= 227 && v6 <= 230 || v6 == 232 )
    v13 = *(_WORD *)a2 - 1;
    HIWORD(a2) = *(_WORD *)(a2 + 2);
    LOWORD(a2) = v13;
    v14 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v14 >= 205 && v14 <= 232 )
    v16 = *(_WORD *)v2 - 2;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v16;
    v17 = *((uint32_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 17);
    if ( v17 >= 205 && v17 <= 232 )
    a2 = 1;
    v18 = *CellStruct::Sub((__int16 *)v2, &v19, &a2);
    CellClass::ApplyTileModification8(this, &v18);
    else
    CellClass::ApplyTileModification8(this, (int *)v2);
    else
    v15 = *(_WORD *)v2 + 1;
    HIWORD(a2) = *(_WORD *)(v2 + 2);
    LOWORD(a2) = v15;
    CellClass::ApplyTileModification8(this, &a2);
}

