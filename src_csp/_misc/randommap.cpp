#include "randommap.hpp"

void  RandomMap::_vt03(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  RandomMap::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * RandomMap::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    *a2 = *(uint32_t *)(*(this + 1) + 4 * a3);
    return a2;
}

char  RandomMap::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    _WORD *v5; // eax
    _WORD *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (_WORD *)*(this + 1);
    v6 = (_WORD *)(v4 + 2);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 )
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

int  RandomMap::_vt04(int *this, _WORD *a2)
{
    int v2; // edx
    int result; // eax
    _WORD *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (_WORD *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * RandomMap::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<Cell>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  RandomMap::GenerateTerrainForAllCells(void *this)
{
    int result; // eax
    int v2; // ebx
    int v3; // esi
    int *v4; // edi
    void *v5; // [esp+0h] [ebp-4h] BYREF
    v5 = this;
    result = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    v2 = g_MapCellWidth * g_MapCellWidth;
    result = (int)g_MapTileArray;
    v3 = 0;
    do
    v5 = *(void **)(v3 + result);
    v4 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v5);
    result = (int)g_MapTileArray;
    if ( *(uint32_t *)((char *)g_MapTileArray + v3 + 56) == -1
    && (*(_WORD *)((char *)g_MapTileArray + v3) || *(_WORD *)((char *)g_MapTileArray + v3 + 2)) )
    if ( Cell::IsGroundTypeRange(v4) || Cell::IsShore(v4) )
    RandomMap::GenerateTerrain((int)v4);
    result = (int)g_MapTileArray;
    v3 += 80;
    --v2;
    while ( v2 );
    return result;
}

// 0x0058D1C0
int  RandomMap::ExpandTerrainCells(uint32_t *this, int a2, int a3)
{
    int result; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // ecx
    int v7; // edi
    int i; // esi
    int v9; // ecx
    uint32_t *v10; // eax
    uint32_t *v11; // esi
    uint32_t *v12; // ebx
    int v13; // edi
    int v14; // edx
    char v15; // al
    __int16 v16; // cx
    int v17; // eax
    int v18; // ecx
    char *v19; // esi
    int v20; // ecx
    int v21; // eax
    int v22; // eax
    int v23; // edx
    int v24; // ecx
    int v25; // [esp+Ch] [ebp-1Ch]
    int v26; // [esp+10h] [ebp-18h]
    int v27; // [esp+14h] [ebp-14h]
    int v28; // [esp+18h] [ebp-10h]
    int j; // [esp+1Ch] [ebp-Ch]
    int v30; // [esp+20h] [ebp-8h]
    result = (int)RandomMap::TerrainAlloc(this);
    v4 = a2;
    v5 = result;
    v25 = result;
    if ( a2 > 1 )
    v6 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    result = 0;
    do
    result += 80;
    --v6;
    *(uint32_t *)((char *)g_MapTileArray + result - 20) = -1;
    while ( v6 );
    v7 = 0;
    v26 = 0;
    if ( a2 > 0 )
    do
    for ( i = *(uint32_t *)(v5 + 16) - 1; i >= 0; --i )
    result = *(uint32_t *)(v5 + 4);
    v9 = *(uint32_t *)(result + 4 * i);
    if ( g_MapTileArray )
    result = 80 * ((__int16)v9 + g_MapCellWidth * SHIWORD(v9));
    *(uint32_t *)((char *)g_MapTileArray + result + 56) = a3;
    if ( v7 < v4 - 1 )
    v10 = __2_YAPAXI_Z(0x18u);
    v11 = v10;
    v12 = 0;
    if ( v10 )
    VectorClass::CellConstructor(v10, 0, 0);
    v11[4] = 0;
    *v11 = &DynamicVectorClass<Cell>::`vftable';
    v11[5] = 10;
    v12 = v11;
    v12[5] = *(uint32_t *)(v5 + 16);
    result = *(uint32_t *)(v5 + 16) - 1;
    v30 = result;
    if ( result >= 0 )
    v13 = g_MapCellHeight_Value;
    do
    v14 = *(uint32_t *)(*(uint32_t *)(v5 + 4) + 4 * result);
    v15 = 0;
    v27 = v14;
    for ( j = 0; j < 8; ++j )
    v16 = HIWORD(v27) + HIWORD(Direction_X_Offsets[v15 & 7]);
    LOWORD(v28) = LOWORD(Direction_X_Offsets[v15 & 7]) + v27;
    v17 = v16;
    HIWORD(v28) = v16;
    v18 = v16 + (__int16)v28;
    if ( v18 > v13 && (__int16)v28 - v17 < v13 && v17 - (__int16)v28 < v13 && v18 <= g_MapCellCount )
    v19 = (char *)g_MapTileArray + 80 * (__int16)v28 + 80 * g_MapCellWidth * v17;
    if ( *((uint32_t *)v19 + 14) == *(this + 2) )
    if ( *((uint32_t *)v19 + 15) != v26 + 1 )
    v20 = v12[2];
    if ( v12[4] < v20
    || (*((uint8_t *)v12 + 13) || !v20)
    && (v21 = v12[5], v21 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v12 + 8))(v12, v20 + v21, 0) )
    v22 = v12[4];
    v23 = v12[1];
    v12[4] = v22 + 1;
    *(uint32_t *)(v23 + 4 * v22) = v28;
    *((uint32_t *)v19 + 15) = v26 + 1;
    v13 = g_MapCellHeight_Value;
    v5 = v25;
    v15 = j + 1;
    result = --v30;
    while ( v30 >= 0 );
    v7 = v26;
    if ( v5 )
    result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    v25 = (int)v12;
    v5 = (int)v12;
    v4 = a2;
    v26 = ++v7;
    while ( v7 < v4 );
    if ( v5 )
    result = (**(int (__thiscall ***)(int, int))v5)(v5, 1);
    if ( v4 > 1 )
    v24 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    result = 0;
    do
    result += 80;
    --v24;
    *(uint32_t *)((char *)g_MapTileArray + result - 20) = -1;
    while ( v24 );
    return result;
}

char  RandomMap::CollectTerrainCells(uint32_t *this, int a2)
{
    uint32_t *v2; // eax
    uint32_t *v3; // esi
    uint32_t *v4; // ebp
    uint32_t *v5; // ecx
    int v6; // esi
    int v7; // ebx
    _WORD *v8; // eax
    __int16 v9; // dx
    int v10; // eax
    int v11; // edx
    char *v12; // eax
    char *v13; // esi
    int v14; // edi
    uint32_t *v15; // eax
    int *v16; // eax
    int v17; // ecx
    int v18; // eax
    int v19; // eax
    int v20; // edx
    uint32_t *v21; // edi
    int v22; // edx
    int v24; // [esp+10h] [ebp-18h] BYREF
    uint32_t *v25; // [esp+14h] [ebp-14h]
    uint32_t *v26; // [esp+18h] [ebp-10h]
    int v27; // [esp+1Ch] [ebp-Ch]
    int v28; // [esp+20h] [ebp-8h]
    int i; // [esp+24h] [ebp-4h]
    v26 = this;
    v25 = RandomMap::TerrainAlloc(this);
    for ( i = 0; i < a2; ++i )
    v2 = __2_YAPAXI_Z(0x18u);
    v3 = v2;
    if ( v2 )
    VectorClass::CellConstructor(v2, 0, 0);
    *v3 = &DynamicVectorClass<Cell>::`vftable';
    v3[5] = 10;
    v3[4] = 0;
    v4 = v3;
    else
    v4 = 0;
    v5 = v25;
    v27 = 0;
    v4[5] = 3 * v25[4];
    if ( (int)v5[4] > 0 )
    v6 = g_MapCellHeight_Value;
    while ( 2 )
    v7 = 0;
    while ( 1 )
    v8 = (_WORD *)(v5[1] + 4 * v27);
    v9 = v8[1] + HIWORD(Direction_X_Offsets[v7 & 7]);
    LOWORD(v28) = LOWORD(Direction_X_Offsets[v7 & 7]) + *v8;
    HIWORD(v28) = v9;
    v24 = v28;
    v10 = v9;
    v11 = v9 + (__int16)v28;
    if ( v11 > v6 && (__int16)v28 - v10 < v6 && v10 - (__int16)v28 < v6 && v11 <= g_MapCellCount )
    v12 = (char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24);
    if ( v12[283] == v26[4] )
    v13 = (char *)g_MapTileArray + 80 * (__int16)v24 + 80 * g_MapCellWidth * SHIWORD(v24);
    v14 = *((uint32_t *)v13 + 14);
    if ( v14 == -1
    && ((v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24), Cell::IsEmpty(v15))
    || (v16 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24), Cell::IsShore(v16))) )
    v17 = v4[2];
    if ( v4[4] < v17
    || (*((uint8_t *)v4 + 13) || !v17)
    && (v18 = v4[5], v18 > 0)
    && (*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*v4 + 8))(v4, v17 + v18, 0) )
    v19 = v4[4];
    v20 = v4[1];
    v4[4] = v19 + 1;
    *(uint32_t *)(v20 + 4 * v19) = v24;
    v21 = v26;
    *((uint32_t *)v13 + 14) = v26[2];
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v24) + 283) = *((uint8_t *)v21 + 16);
    else if ( v14 != v26[2] )
    if ( v25 )
    (*(void (__thiscall **)(uint32_t *, int))*v25)(v25, 1);
    if ( v4 )
    (*(void (__thiscall **)(uint32_t *, int))*v4)(v4, 1);
    return 0;
    v6 = g_MapCellHeight_Value;
    if ( ++v7 >= 8 )
    break;
    v5 = v25;
    v5 = v25;
    v22 = v25[4];
    if ( ++v27 < v22 )
    continue;
    break;
    if ( v5 )
    (*(void (__thiscall **)(uint32_t *, int))*v5)(v5, 1);
    v25 = v4;
    if ( v25 )
    (*(void (__thiscall **)(uint32_t *, int))*v25)(v25, 1);
    return 1;
}

void  RandomMap::CollectBorderCells(uint32_t *this)
{
    uint32_t *v1; // ebx
    uint32_t *v2; // eax
    uint32_t *v3; // esi
    uint8_t *v4; // ecx
    signed int v5; // eax
    uint32_t *v6; // ebp
    int v7; // eax
    int v8; // esi
    int v9; // edi
    int v10; // ebp
    int v11; // edx
    __int16 v12; // cx
    int v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    signed int i; // edi
    int v18; // esi
    int v19; // ecx
    int v20; // eax
    int v21; // eax
    int v22; // edx
    int v23; // eax
    int v24; // ecx
    int v25; // esi
    char *v26; // edx
    uint8_t *Block; // [esp+10h] [ebp-14h]
    int v28; // [esp+14h] [ebp-10h]
    uint32_t *v29; // [esp+1Ch] [ebp-8h]
    v1 = this;
    v2 = __2_YAPAXI_Z(0x18u);
    v3 = v2;
    if ( v2 )
    VectorClass::Construct(v2, 0, 0);
    *v3 = &DynamicVectorClass<int>::`vftable';
    v3[5] = 10;
    v3[4] = 0;
    else
    v3 = 0;
    v1[1] = v3;
    v4 = __2_YAPAXI_Z(g_MapTileArrayEnd);
    v5 = 0;
    for ( Block = v4; v5 < (int)g_MapTileArrayEnd; ++v5 )
    v4[v5] = 0;
    v6 = RandomMap::TerrainAlloc(v1);
    v7 = 0;
    v29 = v6;
    v28 = 0;
    if ( (int)v6[4] > 0 )
    v8 = g_MapCellHeight_Value;
    do
    v9 = 0;
    v10 = *(uint32_t *)(v6[1] + 4 * v7);
    do
    v11 = v9 & 7;
    v12 = HIWORD(v10) + HIWORD(Direction_X_Offsets[v11]);
    v13 = (__int16)(v10 + LOWORD(Direction_X_Offsets[v11]));
    v14 = v12;
    v15 = v12 + v13;
    if ( v15 > v8 && v13 - v14 < v8 && v14 - v13 < v8 && v15 <= g_MapCellCount )
    if ( g_MapTileArray )
    v16 = *((uint32_t *)g_MapTileArray + 20 * v13 + 20 * g_MapCellWidth * v14 + 14);
    if ( v16 >= 0 )
    Block[v16] = 1;
    v8 = g_MapCellHeight_Value;
    ++v9;
    while ( v9 < 8 );
    v6 = v29;
    v7 = v28 + 1;
    v28 = v7;
    while ( v7 < v29[4] );
    v1 = this;
    for ( i = 0; i < (int)g_MapTileArrayEnd; ++i )
    if ( Block[i] && i != v1[2] )
    v18 = v1[1];
    v19 = *(uint32_t *)(v18 + 8);
    if ( *(uint32_t *)(v18 + 16) < v19
    || (*(uint8_t *)(v18 + 13) || !v19)
    && (v20 = *(uint32_t *)(v18 + 20), v20 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v18 + 8))(v18, v19 + v20, 0) )
    v21 = *(uint32_t *)(v18 + 16);
    v22 = *(uint32_t *)(v18 + 4);
    *(uint32_t *)(v18 + 16) = v21 + 1;
    *(uint32_t *)(v22 + 4 * v21) = i;
    v23 = 0;
    v1[3] = 0;
    v24 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    v25 = v1[2];
    v26 = (char *)g_MapTileArray;
    do
    if ( *(uint32_t *)&v26[v23 + 56] == v25 && (*(_WORD *)&v26[v23] || *(_WORD *)&v26[v23 + 2]) )
    ++v1[3];
    v26 = (char *)g_MapTileArray;
    v23 += 80;
    --v24;
    while ( v24 );
    if ( v6 )
    (*(void (__thiscall **)(uint32_t *, int))*v6)(v6, 1);
    __3_YAXPAX_Z(Block);
}

int  RandomMap::FinalizeMapData(int *this)
{
    int i; // eax
    int v3; // eax
    int v4; // eax
    uint32_t *j; // edi
    char v6; // bl
    signed int k; // esi
    uint32_t *NeighbourContent; // eax
    int v9; // ecx
    int v10; // eax
    int m; // ebx
    uint32_t *v12; // esi
    int v13; // eax
    void *v14; // eax
    int result; // eax
    int *n; // ebp
    signed int ii; // esi
    uint32_t *v18; // edi
    uint32_t *v19; // [esp+10h] [ebp-4h] BYREF
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) )
    *(uint32_t *)(i + 56) = g_CellPassabilityLUT;
    v3 = *(this + 15);
    if ( v3 )
    v4 = v3 - 1;
    if ( v4 )
    if ( v4 == 1 )
    RandomMap::PlaceTerrainFeatures(this);
    else
    RandomMap::FillTerrainProgressively(this);
    else
    RandomMap::ArrangeBuildingGrid(this);
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( j = (uint32_t *)LayerClass::CellIteratorNext(&MapClass_Instance);
    j;
    j = (uint32_t *)LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( j[14] == g_CellPassabilityLUT )
    v6 = 1;
    for ( k = 0; k < 8; k += 2 )
    NeighbourContent = Cell::GetNeighbourContent(j, k);
    if ( !Cell::IsEmpty(NeighbourContent) )
    v6 = 0;
    if ( v6 )
    j[14] = 0;
    MapClass::InitTileData(0, 0);
    if ( g_MapTileArray )
    v9 = g_MapCellWidth * g_MapCellWidth;
    if ( g_MapCellWidth * g_MapCellWidth > 0 )
    v10 = 0;
    do
    *(uint32_t *)((char *)g_MapTileArray + v10 + 56) = -1;
    *(uint32_t *)((char *)g_MapTileArray + v10 + 60) = -1;
    v10 += 80;
    --v9;
    while ( v9 );
    for ( m = g_RandomMap_TileData - 1; m >= 0; --m )
    v12 = (uint32_t *)*((uint32_t *)g_RandomMap_TerrainState + m);
    if ( v12 )
    if ( *v12 )
    (**(void (__thiscall ***)(uint32_t, int))*v12)(*v12, 1);
    *v12 = 0;
    v19 = v12;
    v13 = (*(int (__thiscall **)(int *, uint32_t **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v19);
    if ( v13 != -1 && v13 < g_RandomMap_TileData && v13 < --g_RandomMap_TileData )
    do
    ++v13;
    *((uint32_t *)g_RandomMap_TerrainState + v13 - 1) = *((uint32_t *)g_RandomMap_TerrainState + v13);
    while ( v13 < g_RandomMap_TileData );
    v14 = (void *)v12[11];
    v12[10] = &VectorClass<Cell>::`vftable';
    if ( v14 && *((uint8_t *)v12 + 53) )
    __3_YAXPAX_Z(v14);
    v12[11] = 0;
    *((uint8_t *)v12 + 53) = 0;
    v12[12] = 0;
    __3_YAXPAX_Z(v12);
    g_MapTileArrayEnd = 0;
    LayerClass::CellIteratorReset(&MapClass_Instance);
    result = LayerClass::CellIteratorNext(&MapClass_Instance);
    for ( n = (int *)result; result; n = (int *)result )
    if ( CellClass::IsTerrainType(n) )
    for ( ii = 0; ii < 8; ii += 2 )
    v18 = Cell::GetNeighbourContent(n, ii);
    if ( Cell::IsEmpty(v18) )
    v18[14] = dword_AA0E18;
    result = LayerClass::CellIteratorNext(&MapClass_Instance);
    return result;
}

void  RandomMap::ArrangeBuildingGrid(int *this)
{
    int v2; // eax
    int v3; // eax
    unsigned int v4; // esi
    unsigned int v5; // eax
    int v6; // edx
    int i; // eax
    int v8; // eax
    int v9; // esi
    int v10; // edi
    int v11; // ebp
    int v12; // esi
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    uint32_t *v16; // esi
    uint32_t *v17; // edx
    int v18; // [esp+10h] [ebp-50h] BYREF
    int v19; // [esp+14h] [ebp-4Ch]
    int v20[2]; // [esp+18h] [ebp-48h] BYREF
    double v21; // [esp+20h] [ebp-40h]
    int v22; // [esp+28h] [ebp-38h] BYREF
    int v23; // [esp+2Ch] [ebp-34h]
    int v24; // [esp+30h] [ebp-30h]
    int v25; // [esp+34h] [ebp-2Ch]
    int v26[4]; // [esp+38h] [ebp-28h] BYREF
    void **v27; // [esp+48h] [ebp-18h] BYREF
    void *Block; // [esp+4Ch] [ebp-14h]
    char v29; // [esp+55h] [ebp-Bh]
    int v30; // [esp+58h] [ebp-8h]
    int v31; // [esp+5Ch] [ebp-4h]
    *(this + 194) = 1;
    RandomMap::Constructor_0(0, 0);
    v2 = *(this + 20);
    v27 = &DynamicVectorClass<TRect<int>>::`vftable';
    v31 = 10;
    v3 = v2 / 2;
    v30 = 0;
    v4 = 2;
    if ( v3 >= 2 )
    v4 = v3;
    *(_QWORD *)v20 = v4;
    v21 = (double)v4;
    do
    *(_QWORD *)v20 = (unsigned int)Random::State(&g_Randomizer);
    v5 = Math::RoundToInt((double)*(__int64 *)v20 * v21 * 2.328306437080797e-10 + 1.0);
    while ( v5 > v4 );
    v26[1] = dword_87F8E8;
    v26[0] = dword_87F8E4;
    v26[3] = dword_87F8F0;
    v6 = *(this + 20);
    v26[2] = dword_87F8EC;
    ArrangeBuildingPlacementGrid((int)&v27, v5 + v6, v26);
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) )
    v18 = *(uint32_t *)(i + 36);
    *((uint32_t *)g_MapTileArray + 20 * (__int16)v18 + 20 * g_MapCellWidth * SHIWORD(v18) + 15) = 0;
    while ( v30 > 0 )
    v22 = *(uint32_t *)Block;
    v23 = *((uint32_t *)Block + 1);
    v24 = *((uint32_t *)Block + 2);
    v25 = *((uint32_t *)Block + 3);
    v8 = Random::State(&g_Randomizer);
    v9 = v25;
    v10 = v24;
    *(_QWORD *)&v21 = (unsigned int)v8;
    v19 = 2 * v24 * v25;
    v11 = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)v19);
    v20[0] = v22 + v10 / 2 + v9 / 2 + v23 + 1;
    v20[1] = v23 + g_Cell_PositionLUT + v9 / 2 - v10 / 2 - v22;
    v12 = 0;
    do
    if ( v12 >= 10 )
    break;
    LOWORD(v18) = v20[0];
    HIWORD(v18) = v20[1];
    v13 = RandomMap::PlaceTerrain(this, v11, &v22, (int)v20, 1, (int)&v18, 0.25, 0);
    if ( !v13 )
    ++*(this + 194);
    ++v12;
    while ( !v13 );
    if ( v30 <= 0 )
    break;
    v14 = 0;
    if ( --v30 <= 0 )
    break;
    v15 = 0;
    do
    v16 = (char *)Block + v15 + 16;
    v17 = (char *)Block + v15;
    ++v14;
    v15 += 16;
    *v17 = *v16;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    while ( v14 < v30 );
    v27 = &VectorClass<TRect<int>>::`vftable';
    if ( Block )
    if ( v29 )
    __3_YAXPAX_Z(Block);
}

void  RandomMap::FillTerrainProgressively(int *this)
{
    int *v1; // edi
    int v2; // eax
    double v3; // st7
    int v4; // ebx
    int i; // eax
    int v6; // eax
    int v7; // edi
    int j; // ecx
    __int64 v9; // rax
    int v10; // esi
    int v11; // [esp+10h] [ebp-48h]
    int v12; // [esp+14h] [ebp-44h]
    int v13; // [esp+18h] [ebp-40h]
    int v14; // [esp+1Ch] [ebp-3Ch] BYREF
    int *v15; // [esp+20h] [ebp-38h]
    int v16; // [esp+24h] [ebp-34h]
    int v17; // [esp+28h] [ebp-30h] BYREF
    int v18; // [esp+2Ch] [ebp-2Ch]
    double v19; // [esp+30h] [ebp-28h]
    double v20; // [esp+38h] [ebp-20h]
    double v21; // [esp+40h] [ebp-18h]
    int v22[4]; // [esp+48h] [ebp-10h] BYREF
    v1 = this;
    v15 = this;
    *(this + 194) = 1;
    v2 = Object::ComputeAllocationSize();
    v3 = (double)v1[19];
    v14 = v2;
    v12 = 0;
    v13 = 0;
    v19 = 0.0;
    v20 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45;
    v21 = (double)v2;
    v16 = Math::RoundToInt(v21 * 0.03 * v20);
    v4 = g_CellPositionOffset / 2 + g_Cell_PositionLUT / 2;
    v18 = v4;
    v17 = v4 + 1;
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( i = LayerClass::CellIteratorNext(&MapClass_Instance); i; i = LayerClass::CellIteratorNext(&MapClass_Instance) )
    v14 = *(uint32_t *)(i + 36);
    *((uint32_t *)g_MapTileArray + 20 * (__int16)v14 + 20 * g_MapCellWidth * SHIWORD(v14) + 15) = 0;
    v22[0] = dword_87F8E4 + 1;
    v22[1] = dword_87F8E8 + 1;
    v22[2] = dword_87F8EC - 2;
    v22[3] = dword_87F8F0 - 2;
    if ( v20 > 0.0 )
    while ( v13 < 100 )
    v6 = Math::RoundToInt((v20 - v19) * v21);
    if ( v6 >= v16 )
    v6 = v16;
    LOWORD(v14) = v4 + 1;
    HIWORD(v14) = v4;
    v12 += RandomMap::PlaceTerrain(v1, v6, v22, (int)&v17, 1, (int)&v14, 0.75, 1);
    ++v13;
    v7 = 50000;
    v11 = 0;
    v19 = (double)v12 / v21;
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( j = LayerClass::CellIteratorNext(&MapClass_Instance); j; j = LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( !*((uint32_t *)g_MapTileArray + 20 * *(__int16 *)(j + 36) + 20 * g_MapCellWidth * *(__int16 *)(j + 38) + 15) )
    v9 = *(__int16 *)(j + 36) - (v4 + 1);
    v10 = (HIDWORD(v9) ^ v9) - HIDWORD(v9) + abs32(*(__int16 *)(j + 38) - v4);
    if ( v10 < v7 )
    v7 = v10;
    v11 = *(uint32_t *)(j + 36);
    v17 = (__int16)v11;
    v18 = SHIWORD(v11);
    if ( v19 >= v20 )
    break;
    v1 = v15;
}

void RandomMap::PlaceShoreObjects()
{
    int *i; // ebp
    signed int j; // edi
    uint32_t *NeighbourContent; // esi
    int v3; // eax
    int v4; // edx
    unsigned int v5; // esi
    signed int v6; // eax
    uint32_t *v7; // ecx
    uint32_t *v8; // ebp
    signed int v9; // edi
    uint32_t *v10; // esi
    int v11; // eax
    int v12; // [esp+10h] [ebp-34h]
    __int64 v13; // [esp+1Ch] [ebp-28h]
    double v14; // [esp+24h] [ebp-20h]
    void **v15; // [esp+2Ch] [ebp-18h] BYREF
    void *Block; // [esp+30h] [ebp-14h]
    int v17; // [esp+34h] [ebp-10h]
    char v18; // [esp+39h] [ebp-Bh]
    signed int v19; // [esp+3Ch] [ebp-8h]
    int v20; // [esp+40h] [ebp-4h]
    RandomMap::Constructor(0, 0);
    v15 = &DynamicVectorClass<CellClass *>::`vftable';
    v19 = 0;
    v20 = 10000;
    LayerClass::CellIteratorReset(&MapClass_Instance);
    for ( i = (int *)LayerClass::CellIteratorNext(&MapClass_Instance);
    i;
    i = (int *)LayerClass::CellIteratorNext(&MapClass_Instance) )
    if ( Cell::IsShore(i) )
    for ( j = 0; j < 8; j += 2 )
    NeighbourContent = Cell::GetNeighbourContent(i, j);
    if ( Cell::IsEmpty(NeighbourContent)
    && (v19 < v17
    || (v18 || !v17)
    && v20 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v15[2])(&v15, v20 + v17, 0)) )
    v3 = v19++;
    *((uint32_t *)Block + v3) = NeighbourContent;
    v4 = v19 / 3;
    if ( v19 / 3 > 1000 )
    v4 = 1000;
    if ( v4 > 0 )
    v12 = v4;
    do
    v5 = v19 - 1;
    v14 = (double)(unsigned int)v19;
    do
    v13 = (unsigned int)Random::State(&g_Randomizer);
    v6 = Math::RoundToInt((double)v13 * v14 * 2.328306437080797e-10);
    while ( v6 > v5 );
    v7 = Block;
    v8 = (uint32_t *)*((uint32_t *)Block + v6);
    if ( v6 < v19 && v6 < --v19 )
    while ( 1 )
    v7[v6] = v7[v6 + 1];
    if ( ++v6 >= v19 )
    break;
    v7 = Block;
    v9 = 0;
    v8[14] = dword_AA0E18;
    do
    v10 = Cell::GetNeighbourContent(v8, v9);
    if ( Cell::IsEmpty(v10)
    && (v19 < v17
    || (v18 || !v17)
    && v20 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v15[2])(&v15, v20 + v17, 0)) )
    v11 = v19++;
    *((uint32_t *)Block + v11) = v10;
    v9 += 2;
    while ( v9 < 8 );
    --v12;
    while ( v12 );
    v15 = &VectorClass<CellClass *>::`vftable';
    if ( Block )
    if ( v18 )
    __3_YAXPAX_Z(Block);
}

int  RandomMap::PlaceMapSeedBuildings(int *this)
{
    int v1; // edx
    int v3; // ecx
    int *v4; // eax
    int v5; // edi
    int v6; // edx
    int v7; // ecx
    int *v8; // eax
    int v9; // edi
    int result; // eax
    int v11; // esi
    int v12; // ebp
    unsigned int v13; // edi
    unsigned int v14; // esi
    _WORD *v15; // eax
    uint32_t *v16; // eax
    int v17; // eax
    int *v18; // esi
    int v19; // [esp+10h] [ebp-4Ch] BYREF
    int v20; // [esp+14h] [ebp-48h]
    int v21; // [esp+18h] [ebp-44h]
    int v22; // [esp+1Ch] [ebp-40h]
    int v23; // [esp+20h] [ebp-3Ch] BYREF
    double v24; // [esp+24h] [ebp-38h]
    int v25; // [esp+2Ch] [ebp-30h]
    int v26; // [esp+30h] [ebp-2Ch]
    int *v27; // [esp+34h] [ebp-28h]
    __int16 v28; // [esp+38h] [ebp-24h] BYREF
    __int64 v29; // [esp+3Ch] [ebp-20h]
    __int64 v30; // [esp+44h] [ebp-18h]
    int v31[4]; // [esp+4Ch] [ebp-10h] BYREF
    v1 = dword_ABC1D4;
    v27 = this;
    v3 = 0;
    v4 = &dword_ABE378;
    do
    v5 = v1 + v3++;
    *v4 = v5;
    v4 += 3;
    while ( (int)v4 < (int)&dword_ABE834 );
    v6 = dword_ABBEC0;
    v7 = 0;
    v8 = &dword_ABE834;
    do
    v9 = v6 + v7++;
    *v8 = v9;
    v8 += 3;
    while ( (int)v8 < (int)dword_ABE894 );
    v26 = Math::RoundToInt((double)*(this + 24) + 0.49 + (double)*(this + 24) + 0.49);
    v25 = 0;
    v21 = 0;
    do
    result = v26;
    if ( v21 >= v26 )
    break;
    v19 = 0;
    v20 = 0;
    LABEL_8:
    v11 = g_MapCellWidth;
    while ( 1 )
    v12 = 0;
    while ( 1 )
    v13 = v11 * v11 - 1;
    do
    v29 = v13 + 1;
    v24 = (double)v29;
    do
    v30 = (unsigned int)Random::State(&g_Randomizer);
    v14 = Math::RoundToInt((double)v30 * v24 * 2.328306437080797e-10);
    while ( v14 > v13 );
    v15 = CellStruct::Set(&v28, 0, 0);
    while ( CellStruct::Equals((_WORD *)g_MapTileArray + 40 * v14, v15) );
    ++v12;
    v23 = *((uint32_t *)g_MapTileArray + 20 * v14);
    if ( v12 > 200 )
    v22 = 0;
    v17 = 0;
    goto LABEL_19;
    v16 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v23);
    if ( Cell::IsEmpty(v16) )
    break;
    v11 = g_MapCellWidth;
    v17 = v23;
    LABEL_19:
    LODWORD(v24) = v17;
    v19 = v17;
    if ( ++v20 >= 20 )
    break;
    v11 = g_MapCellWidth;
    if ( !*((uint8_t *)g_MapTileArray + 80 * (__int16)v17 + 80 * g_MapCellWidth * SWORD1(v24) + 69) )
    v31[0] = (__int16)v17 - 4;
    v31[1] = SWORD1(v24) - 4;
    v31[2] = 8;
    v31[3] = 8;
    if ( !IsAreaClearMap(v31, 0, 0) || !LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)&v19, 1) )
    goto LABEL_8;
    break;
    if ( v20 != 20 )
    v18 = v27;
    if ( ScheduleMapSeedBuildings(&v19) )
    ScatterMapSeedBuildings(v18, (__int16 *)&v19);
    PlaceNeutralCreeps(&v19);
    ++v21;
    result = ++v25;
    while ( v25 < 10 );
    return result;
}

