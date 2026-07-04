#include "mapseedclass.hpp"

char  MapSeedClass::PlaceCityArea(uint32_t *this, __int16 *a2, __int16 *a3, void *a4)
{
    __int16 *v4; // ebp
    __int16 v6; // ax
    __int16 v7; // bx
    __int16 v8; // si
    int v9; // eax
    char result; // al
    int v11; // ebx
    int v12; // ecx
    int v13; // eax
    int v14; // kr00_4
    int v15; // esi
    int v16; // ebx
    int v17; // edx
    int v18; // eax
    int v19; // ebp
    uint8_t *v20; // ebx
    int v21; // ebp
    int v22; // ecx
    int v23; // eax
    int v24; // ebx
    uint8_t *v25; // ebp
    int v26; // edx
    int v27; // ecx
    int v28; // ecx
    int v29; // ebp
    int v30; // ebx
    int v31; // ebx
    uint8_t *v32; // eax
    int v33; // ebx
    int v34; // ecx
    int v35; // eax
    int v36; // edx
    int v37; // eax
    int v38; // ebp
    int v39; // esi
    uint8_t *v40; // eax
    __int16 v41; // ax
    int v42; // edx
    __int16 *v43; // ebp
    int v44; // esi
    int v45; // ebx
    unsigned int v46; // eax
    BOOL v47; // ecx
    __int16 v48; // ax
    __int16 v49; // bp
    char *v50; // esi
    int v51; // ebx
    bool v52; // zf
    __int16 v53; // cx
    __int16 v54; // dx
    uint8_t *v55; // eax
    char v56; // dl
    unsigned __int8 v57; // cl
    int v58; // edx
    bool v59; // cc
    int v60; // edx
    __int16 v61; // bp
    __int16 v62; // si
    __int16 v63; // ax
    __int16 v64; // ax
    uint8_t *v65; // eax
    char v66; // dl
    int v67; // edx
    int v69; // [esp+14h] [ebp-58h] BYREF
    int v70; // [esp+18h] [ebp-54h]
    int v71; // [esp+1Ch] [ebp-50h]
    int v72; // [esp+20h] [ebp-4Ch]
    int v73; // [esp+24h] [ebp-48h] BYREF
    int v74; // [esp+28h] [ebp-44h] BYREF
    int v75; // [esp+2Ch] [ebp-40h]
    int v76; // [esp+34h] [ebp-38h]
    __int16 v77; // [esp+3Ch] [ebp-30h]
    __int16 v78; // [esp+3Eh] [ebp-2Eh]
    __int16 v79; // [esp+44h] [ebp-28h]
    __int16 v80; // [esp+46h] [ebp-26h]
    __int64 v81; // [esp+4Ch] [ebp-20h]
    int v82; // [esp+5Ch] [ebp-10h] BYREF
    int v83; // [esp+60h] [ebp-Ch]
    int v84; // [esp+64h] [ebp-8h]
    int v85; // [esp+68h] [ebp-4h]
    int v86; // [esp+70h] [ebp+4h]
    v4 = a3;
    v6 = *a2;
    v7 = *a2;
    if ( *a2 <= *a3 )
    v7 = *a3;
    v8 = *a2;
    if ( v6 >= *a3 )
    v8 = *a3;
    v6 = *a3;
    v82 = v6 - 3;
    v9 = a3[1];
    v83 = v9 - 4;
    v85 = a2[1] - v9 + 9;
    v84 = v7 - v8 + 11;
    result = BuildingTypeClass::CheckPlacementArea(this, &v82, (int)a4);
    if ( result )
    v11 = *a2;
    v12 = a2[1];
    v72 = *a3 - v11;
    v13 = v12 - a3[1];
    v86 = abs32(v72);
    if ( v86 <= v13 - 5 )
    v14 = v13 + 1;
    v15 = (v13 + 1) / 2 + 2;
    v16 = v11 + 1;
    LODWORD(v81) = v16;
    v70 = v12 - (v13 + 1) / 2;
    v17 = v15 + v70 + 3;
    v73 = v17;
    if ( v70 < v17 )
    v18 = v16 + 7;
    do
    v19 = v16;
    if ( v16 < v18 )
    do
    LOWORD(v69) = v19;
    HIWORD(v69) = v70;
    if ( MapSeed::IsCellInBounds((__int16 *)&v69) )
    SetLayerDataMap((__int16 *)&v69, (int)a4);
    v20 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v69);
    v20[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v16 = v81;
    ++v19;
    v18 = v16 + 7;
    while ( v19 < v16 + 7 );
    v17 = v73;
    ++v70;
    while ( v70 < v17 );
    v4 = a3;
    v21 = *v4 + 1;
    LODWORD(v81) = v21;
    v70 = v83;
    v22 = v15 + v83 + 2;
    v73 = v22;
    if ( v83 < v22 )
    v23 = v21 + 7;
    do
    v24 = v21;
    if ( v21 < v23 )
    do
    LOWORD(v69) = v24;
    HIWORD(v69) = v70;
    if ( MapSeed::IsCellInBounds((__int16 *)&v69) )
    SetLayerDataMap((__int16 *)&v69, (int)a4);
    v25 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v69);
    v25[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v21 = v81;
    ++v24;
    v23 = v21 + 7;
    while ( v24 < v21 + 7 );
    v22 = v73;
    ++v70;
    while ( v70 < v22 );
    v26 = v82;
    v27 = *a2 - v82;
    LODWORD(v81) = v82 + 2;
    v28 = v27 - 1;
    v30 = a2[1] + 1;
    v71 = a2[1] - v14 / 2;
    v29 = v71;
    v73 = v30;
    if ( v71 < v30 )
    v31 = v81;
    v70 = v81 + v28;
    do
    if ( v31 < v70 )
    do
    LOWORD(v69) = v31;
    HIWORD(v69) = v29;
    if ( MapSeed::IsCellInBounds((__int16 *)&v69) )
    SetLayerDataMap((__int16 *)&v69, *(this + 2));
    v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v69);
    v29 = v71;
    v32[283] = *((uint8_t *)this + 16);
    ++v31;
    while ( v31 < v70 );
    v26 = v82;
    v31 = v81;
    v71 = ++v29;
    while ( v29 < v73 );
    v33 = v26 + 2;
    LODWORD(v81) = v26 + 2;
    v34 = a3[1];
    v35 = *a3 - v26;
    v36 = v14 / 2 + v34;
    v37 = v35 - 1;
    v38 = v34;
    v73 = v36;
    if ( v34 < v36 )
    v71 = v33 + v37;
    do
    v39 = v33;
    if ( v33 < v71 )
    do
    LOWORD(v69) = v39;
    HIWORD(v69) = v38;
    if ( MapSeed::IsCellInBounds((__int16 *)&v69) )
    SetLayerDataMap((__int16 *)&v69, *(this + 2));
    v40 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v69);
    v33 = v81;
    v40[283] = *((uint8_t *)this + 16);
    ++v39;
    while ( v39 < v71 );
    v36 = v73;
    ++v38;
    while ( v38 < v36 );
    v41 = a2[1] - 2;
    LOWORD(v71) = *a2;
    v42 = *(this + 4);
    HIWORD(v71) = v41;
    v73 = v71;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &v73, (int)a4, v42);
    v43 = a3;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, a3, (int)a4, *(this + 4));
    v44 = v72;
    v45 = 0;
    v76 = 0;
    if ( v72 )
    do
    v81 = (unsigned int)Random::State(&g_Randomizer);
    v46 = Math::RoundToInt((double)v81 * 4.656612874161595e-10);
    while ( v46 > 1 );
    v47 = v44 > 0;
    v71 = v47;
    v75 = (unsigned __int16)((v44 >= 0) - 1);
    if ( v46 == 1 )
    LOWORD(v76) = v44;
    HIWORD(v76) = -(__int16)v86;
    else
    v48 = a2[1];
    LOWORD(v75) = (v44 >= 0) - 1;
    v80 = v48 - v86 - a3[1] - 5;
    HIWORD(v75) = -v80;
    v69 = 0;
    if ( v86 > 0 )
    v70 = 0;
    while ( 1 )
    v49 = 0;
    v50 = (char *)&unk_82AF78;
    WORD1(v81) = -(__int16)v69;
    v51 = 20 * v47 + 8564620;
    while ( 1 )
    v52 = !v47;
    v53 = v69;
    if ( v52 )
    v53 = v70;
    v54 = a2[1] - 3;
    v77 = *a2;
    v78 = v54;
    v79 = v49 + v77;
    v80 = WORD1(v81) + v54;
    LOWORD(v72) = v75 + v49 + v77;
    HIWORD(v72) = WORD1(v81) + v54 + HIWORD(v75);
    LOWORD(v73) = v53 + v72;
    HIWORD(v73) = HIWORD(v72);
    v74 = v73;
    v55 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v74);
    v56 = *v50;
    v50 += 4;
    v51 += 4;
    v55[283] = *((uint8_t *)this + 16) + v56 - 4;
    v57 = *(uint8_t *)(v51 - 4);
    v55[284] = v57;
    v58 = g_CellTileLookup;
    ++v49;
    v55[282] = 0;
    *((uint32_t *)v55 + 14) = v57 + v58 - 1;
    if ( (int)v50 >= (int)byte_82AF8C )
    break;
    v47 = v71;
    v59 = ++v69 < v86;
    --v70;
    if ( !v59 )
    break;
    v47 = v71;
    v43 = a3;
    v45 = 0;
    v60 = a2[1] - v43[1] - v86;
    v70 = 0;
    if ( v60 - 5 > 0 )
    v61 = HIWORD(v76);
    while ( 1 )
    WORD1(v81) = -(__int16)v70;
    v62 = -(__int16)v70;
    do
    v63 = a2[1] - 3;
    v79 = *a2;
    v80 = v63;
    v77 = v45 + v79;
    v78 = v62 + v63;
    v64 = v62 + v63 + v61;
    LOWORD(v73) = v45 + v79 + v76;
    HIWORD(v73) = v78 + v61;
    v74 = v73;
    if ( g_MapTileArray )
    *((uint32_t *)g_MapTileArray + 20 * (__int16)(v45 + v79 + v76) + 20 * g_MapCellWidth * v64 + 14) = a4;
    v65 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v74);
    v66 = *((uint8_t *)this + 16);
    v65[284] = 3;
    v65[283] = v66 - v45++ - 1;
    *((uint32_t *)v65 + 14) = g_CellTileLookup + 2;
    v65[282] = 0;
    while ( v45 < 4 );
    v67 = a2[1] - a3[1] - v86 - 5;
    if ( ++v70 >= v67 )
    break;
    v45 = 0;
    return 1;
    else
    return 0;
    return result;
}

char  MapSeedClass::PlaceCityBlockVariant(uint32_t *this, __int16 *a2, __int16 *a3, void *a4)
{
    __int16 *v4; // ebp
    __int16 *v5; // edi
    int v6; // ebx
    int v7; // eax
    int v9; // edx
    int v10; // ecx
    __int16 *v11; // eax
    int v12; // ebx
    int v13; // ecx
    __int16 *v14; // esi
    uint8_t *v15; // esi
    int v16; // ebx
    int v17; // eax
    int v18; // esi
    uint8_t *v19; // ebx
    int v20; // ebx
    int v21; // esi
    __int16 *v22; // ecx
    int v23; // esi
    __int16 *v24; // ecx
    int v25; // ebx
    int v26; // eax
    int v27; // ebx
    int v28; // esi
    int v29; // ecx
    int v30; // eax
    int v31; // ebx
    int v32; // ebx
    int i; // ebx
    __int16 v34; // ax
    uint8_t *v35; // eax
    char v36; // dl
    int j; // ebx
    __int16 v38; // ax
    int k; // esi
    __int16 v40; // cx
    uint8_t *v41; // eax
    char v42; // dl
    int v43; // ecx
    int m; // ebx
    __int16 v45; // ax
    int n; // esi
    uint8_t *v47; // eax
    char v48; // cl
    int v49; // edx
    int v52; // [esp+14h] [ebp-28h]
    int v53; // [esp+14h] [ebp-28h]
    int v54; // [esp+18h] [ebp-24h]
    int v55; // [esp+18h] [ebp-24h]
    __int16 *v56; // [esp+1Ch] [ebp-20h] BYREF
    __int16 *v57; // [esp+20h] [ebp-1Ch]
    int v58; // [esp+24h] [ebp-18h]
    int v59; // [esp+28h] [ebp-14h]
    int v60; // [esp+2Ch] [ebp-10h]
    __int16 *v61; // [esp+30h] [ebp-Ch]
    int v62; // [esp+38h] [ebp-4h]
    v4 = a3;
    v5 = a2;
    v6 = *a2;
    v7 = *a3 - v6;
    if ( v7 < 3 )
    return 0;
    v9 = a3[1];
    v10 = a2[1] - v9;
    if ( v10 < 3 )
    return 0;
    v58 = v7 + 10;
    v59 = v10 + 10;
    v56 = (__int16 *)(v6 - 2);
    v57 = (__int16 *)(v9 - 2);
    if ( !BuildingTypeClass::CheckPlacementArea(this, &v56, (int)a4) )
    return 0;
    v11 = v56;
    v12 = v5[1] + 1;
    v60 = (int)v56;
    v13 = v12 + 7;
    v54 = v12 + 7;
    if ( !__OFSUB__(v12, v12 + 7) )
    v52 = (int)v56 + v58;
    do
    v14 = v11;
    a3 = v11;
    if ( (int)v11 < v52 )
    do
    LOWORD(a2) = (_WORD)v14;
    HIWORD(a2) = v12;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    if ( g_MapTileArray )
    *((uint32_t *)g_MapTileArray + 20 * (__int16)a2 + 20 * g_MapCellWidth * SHIWORD(a2) + 14) = a4;
    v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v15[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v14 = a3;
    v14 = (__int16 *)((char *)v14 + 1);
    a3 = v14;
    while ( (int)v14 < v52 );
    v13 = v54;
    v11 = (__int16 *)v60;
    ++v12;
    while ( v12 < v13 );
    v16 = *v4 + 1;
    v61 = v57;
    v60 = v16;
    v62 = v59;
    a3 = v57;
    if ( (int)v57 < (int)((char *)v57 + v59) )
    v17 = v16 + 7;
    do
    v18 = v16;
    if ( v16 < v17 )
    do
    LOWORD(a2) = v18;
    HIWORD(a2) = (_WORD)a3;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    if ( g_MapTileArray )
    *((uint32_t *)g_MapTileArray + 20 * (__int16)a2 + 20 * g_MapCellWidth * SHIWORD(a2) + 14) = a4;
    v19 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v19[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v16 = v60;
    ++v18;
    v17 = v16 + 7;
    while ( v18 < v16 + 7 );
    a3 = (__int16 *)((char *)a3 + 1);
    while ( (int)a3 < (int)((char *)v61 + v62) );
    v20 = *v5;
    v21 = v5[1] - 1;
    v60 = v20;
    v22 = (__int16 *)(v21 + 2);
    a3 = (__int16 *)(v21 + 2);
    if ( !__OFSUB__(v21, v21 + 2) )
    do
    if ( !__OFSUB__(v20, v20 + 1) )
    do
    LOWORD(a2) = v20;
    HIWORD(a2) = v21;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    if ( g_MapTileArray )
    *((uint32_t *)g_MapTileArray + 20 * (__int16)a2 + 20 * g_MapCellWidth * SHIWORD(a2) + 14) = *(this + 2);
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) = *((uint8_t *)this + 16);
    ++v20;
    while ( v20 < v60 + 1 );
    v22 = a3;
    v20 = v60;
    ++v21;
    while ( v21 < (int)v22 );
    v23 = *v4;
    v24 = (__int16 *)(v23 + 1);
    v25 = v23 - 1;
    v60 = v23 - 1;
    a3 = (__int16 *)(v23 + 1);
    if ( !__OFSUB__(v23, v23 + 1) )
    do
    if ( !__OFSUB__(v25, v25 + 2) )
    do
    LOWORD(a2) = v25;
    HIWORD(a2) = v23;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, *(this + 2));
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) = *((uint8_t *)this + 16);
    ++v25;
    while ( v25 < v60 + 2 );
    v24 = a3;
    v25 = v60;
    ++v23;
    while ( v23 < (int)v24 );
    v26 = *v5;
    v27 = v4[1];
    v60 = v26 + 1;
    v28 = v27 + 1;
    v29 = *v4 - v26 - 1;
    v53 = v27 + 1;
    v30 = v5[1];
    v55 = v30;
    if ( v27 + 1 < v30 )
    v31 = v60;
    a3 = (__int16 *)(v60 + v29);
    do
    if ( v31 < (int)a3 )
    do
    LOWORD(a2) = v31;
    HIWORD(a2) = v28;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, *(this + 2));
    v28 = v53;
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) = *((uint8_t *)this + 16);
    ++v31;
    while ( v31 < (int)a3 );
    v30 = v55;
    v31 = v60;
    v53 = ++v28;
    while ( v28 < v30 );
    v32 = (int)a4;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2, v5, (int)a4, *(this + 4));
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, v4, v32, *(this + 4));
    for ( i = 0; i < 4; ++i )
    v34 = v5[1] + i;
    LOWORD(a4) = i + *v4;
    HIWORD(a4) = v34;
    v35 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v36 = *((uint8_t *)this + 16);
    v35[284] = 7;
    v35[283] = v36 - i - 1;
    *((uint32_t *)v35 + 14) = g_CellTileLookup + 6;
    v35[282] = 0;
    for ( j = 0; j < 4; ++j )
    v38 = *v5;
    for ( k = 0; k < *v4 - *v5 + j - 3; ++k )
    v40 = v5[1] + j;
    LOWORD(a4) = v38 + k + 3;
    HIWORD(a4) = v40;
    v41 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v42 = *((uint8_t *)this + 16);
    v41[284] = 4;
    v41[283] = v42 - j - 1;
    v43 = g_CellTileLookup + 3;
    v41[282] = 0;
    *((uint32_t *)v41 + 14) = v43;
    v38 = *v5;
    for ( m = 0; m < 4; ++m )
    v45 = v4[1];
    for ( n = 0; n < v5[1] - v45 + m - 3; ++n )
    LOWORD(a4) = m + *v4;
    HIWORD(a4) = v45 + n + 3;
    v47 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v48 = *((uint8_t *)this + 16);
    v47[284] = 3;
    v47[283] = v48 - m - 1;
    v49 = g_CellTileLookup + 2;
    v47[282] = 0;
    *((uint32_t *)v47 + 14) = v49;
    v45 = v4[1];
    return 1;
}

char  MapSeedClass::PlaceCityBlockDiagonal(uint32_t *this, __int16 *a2, __int16 *a3, void *a4)
{
    __int16 *v4; // ebp
    int v6; // ebx
    int v7; // eax
    int v8; // esi
    int v9; // edx
    int v10; // eax
    int v11; // esi
    int v12; // ebx
    uint8_t *v13; // ebx
    int v14; // esi
    int v15; // eax
    int v16; // ebx
    uint8_t *v17; // esi
    int v18; // ecx
    int v19; // esi
    int v20; // edx
    int v21; // eax
    int v22; // ebx
    uint8_t *v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // esi
    int v27; // eax
    int v28; // ebx
    uint8_t *v29; // eax
    int v30; // eax
    int v31; // ebx
    int v32; // edx
    int v33; // ecx
    int v34; // eax
    int v35; // ecx
    int v36; // esi
    int v37; // eax
    int v38; // ebx
    int v39; // ebx
    __int16 v40; // ax
    int v41; // edx
    __int16 v42; // dx
    int v43; // ecx
    int i; // ebx
    __int16 v45; // dx
    uint8_t *v46; // eax
    char v47; // cl
    int j; // ebx
    __int16 v49; // ax
    int k; // esi
    __int16 v51; // dx
    uint8_t *v52; // eax
    char v53; // dl
    int v54; // ecx
    int m; // ebx
    __int16 v56; // ax
    int n; // esi
    __int16 v58; // dx
    __int16 v59; // ax
    uint8_t *v60; // eax
    char v61; // cl
    int v62; // edx
    int v65; // [esp+14h] [ebp-28h]
    int v66; // [esp+14h] [ebp-28h]
    int v67; // [esp+18h] [ebp-24h]
    int v68; // [esp+18h] [ebp-24h]
    int v69; // [esp+18h] [ebp-24h]
    int v70; // [esp+18h] [ebp-24h]
    int v71; // [esp+1Ch] [ebp-20h] BYREF
    int v72; // [esp+20h] [ebp-1Ch]
    int v73; // [esp+24h] [ebp-18h]
    int v74; // [esp+28h] [ebp-14h]
    int v75; // [esp+2Ch] [ebp-10h]
    int v76; // [esp+30h] [ebp-Ch]
    int v77; // [esp+38h] [ebp-4h]
    int v78; // [esp+40h] [ebp+4h]
    int v79; // [esp+40h] [ebp+4h]
    int v80; // [esp+40h] [ebp+4h]
    int v81; // [esp+40h] [ebp+4h]
    int v82; // [esp+40h] [ebp+4h]
    v4 = a3;
    v6 = *a3;
    v7 = *a2 - v6;
    if ( v7 < 3 )
    return 0;
    v8 = a3[1];
    v9 = a2[1] - v8;
    if ( v9 < 3 )
    return 0;
    v73 = v7 + 10;
    v74 = v9 + 10;
    v71 = v6 - 2;
    v72 = v8 - 7;
    if ( !BuildingTypeClass::CheckPlacementArea(this, &v71, (int)a4) )
    return 0;
    v10 = v72;
    v11 = v71;
    v12 = v72;
    v75 = v71;
    v65 = v72;
    v67 = v72 + 7;
    if ( !__OFSUB__(v72, v72 + 7) )
    v78 = v71 + v73;
    do
    if ( v11 < v78 )
    do
    LOWORD(a3) = v11;
    HIWORD(a3) = v12;
    if ( MapSeed::IsCellInBounds((__int16 *)&a3) )
    SetLayerDataMap((__int16 *)&a3, (int)a4);
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    v13[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v12 = v65;
    ++v11;
    while ( v11 < v78 );
    v10 = v72;
    v11 = v75;
    v65 = ++v12;
    while ( v12 < v67 );
    v14 = *a2 + 1;
    v77 = v74;
    v75 = v14;
    v76 = v10;
    v79 = v10;
    if ( v10 < v10 + v74 )
    v15 = v14 + 7;
    do
    v16 = v14;
    if ( v14 < v15 )
    do
    LOWORD(a3) = v16;
    HIWORD(a3) = v79;
    if ( MapSeed::IsCellInBounds((__int16 *)&a3) )
    SetLayerDataMap((__int16 *)&a3, (int)a4);
    v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    v17[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v14 = v75;
    ++v16;
    v15 = v14 + 7;
    while ( v16 < v14 + 7 );
    ++v79;
    while ( v79 < v76 + v77 );
    v18 = v4[1];
    v19 = *v4;
    v20 = v18 + 2;
    v75 = v19;
    v80 = v18;
    v68 = v18 + 2;
    if ( !__OFSUB__(v18, v18 + 2) )
    v21 = v19 + 1;
    do
    v22 = v19;
    if ( v19 < v21 )
    do
    HIWORD(a3) = v18;
    LOWORD(a3) = v22;
    if ( MapSeed::IsCellInBounds((__int16 *)&a3) )
    SetLayerDataMap((__int16 *)&a3, *(this + 2));
    v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    v19 = v75;
    v23[283] = *((uint8_t *)this + 16);
    v18 = v80;
    ++v22;
    v21 = v19 + 1;
    while ( v22 < v19 + 1 );
    v20 = v68;
    v80 = ++v18;
    while ( v18 < v20 );
    v24 = a2[1];
    v25 = v24 + 1;
    v26 = *a2 - 1;
    v75 = v26;
    v81 = v24;
    v69 = v24 + 1;
    if ( !__OFSUB__(v24, v24 + 1) )
    v27 = v26 + 2;
    do
    v28 = v26;
    if ( v26 < v27 )
    do
    HIWORD(a3) = v24;
    LOWORD(a3) = v28;
    if ( MapSeed::IsCellInBounds((__int16 *)&a3) )
    SetLayerDataMap((__int16 *)&a3, *(this + 2));
    v29 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3);
    v26 = v75;
    v29[283] = *((uint8_t *)this + 16);
    v24 = v81;
    ++v28;
    v27 = v26 + 2;
    while ( v28 < v26 + 2 );
    v25 = v69;
    v81 = ++v24;
    while ( v24 < v25 );
    v30 = *v4;
    v31 = v4[1];
    v32 = v30 + 1;
    v33 = *a2 - v30;
    v34 = a2[1] - v31;
    v75 = v32;
    v35 = v33 - 1;
    v36 = v31 + 1;
    v37 = v31 + v34;
    v66 = v31 + 1;
    v70 = v37;
    if ( v31 + 1 < v37 )
    v38 = v75;
    v82 = v75 + v35;
    do
    if ( v38 < v82 )
    do
    LOWORD(a3) = v38;
    HIWORD(a3) = v36;
    if ( MapSeed::IsCellInBounds((__int16 *)&a3) )
    SetLayerDataMap((__int16 *)&a3, *(this + 2));
    v36 = v66;
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a3) + 283) = *((uint8_t *)this + 16);
    ++v38;
    while ( v38 < v82 );
    v37 = v70;
    v38 = v75;
    v66 = ++v36;
    while ( v36 < v37 );
    v39 = (int)a4;
    v40 = a2[1] - 2;
    LOWORD(a3) = *a2;
    v41 = *(this + 4);
    HIWORD(a3) = v40;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &a3, (int)a4, v41);
    v42 = v4[1] - 3;
    LOWORD(a4) = *v4;
    v43 = *(this + 4);
    HIWORD(a4) = v42;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &a4, v39, v43);
    for ( i = 0; i < 4; ++i )
    v45 = v4[1];
    LOWORD(a4) = i + *a2;
    HIWORD(a4) = v45 - i;
    v46 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v47 = *((uint8_t *)this + 16);
    v46[284] = 6;
    v46[283] = v47 - i - 1;
    *((uint32_t *)v46 + 14) = g_CellTileLookup + 5;
    v46[282] = 0;
    for ( j = 0; j < 4; ++j )
    v49 = a2[1];
    for ( k = 0; k < v49 - v4[1] + j - 3; ++k )
    v51 = j + *a2;
    HIWORD(a4) = v49 - k - 3;
    LOWORD(a4) = v51;
    v52 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v53 = *((uint8_t *)this + 16);
    v52[284] = 3;
    v52[283] = v53 - j - 1;
    v54 = g_CellTileLookup + 2;
    v52[282] = 0;
    *((uint32_t *)v52 + 14) = v54;
    v49 = a2[1];
    for ( m = 0; m < 4; ++m )
    v56 = *v4;
    for ( n = 0; n < *a2 - *v4 + m - 3; ++n )
    v58 = v56 + n + 3;
    v59 = v4[1] - m;
    LOWORD(a4) = v58;
    HIWORD(a4) = v59;
    v60 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v61 = *((uint8_t *)this + 16);
    v60[284] = 2;
    v60[283] = v61 - m - 1;
    v62 = g_CellTileLookup + 1;
    v60[282] = 0;
    *((uint32_t *)v60 + 14) = v62;
    v56 = *v4;
    return 1;
}

char  MapSeedClass::PlaceCityBlockVariant2(uint32_t *this, __int16 *a2, __int16 *a3, void *a4)
{
    __int16 *v4; // ebp
    __int16 *v5; // edi
    int v6; // esi
    int v7; // eax
    int v9; // edx
    int v10; // ecx
    int v11; // edx
    int v12; // ebx
    int v13; // esi
    uint8_t *v14; // esi
    int v15; // ebx
    int v16; // esi
    int v17; // eax
    int v18; // ecx
    int v19; // esi
    char *v20; // edx
    int v21; // eax
    int v22; // ebx
    uint8_t *v23; // eax
    int v24; // ebx
    int v25; // esi
    __int16 *v26; // ecx
    int v27; // eax
    int v28; // ebx
    int v29; // esi
    int v30; // ecx
    int v31; // eax
    int v32; // ebx
    int v33; // ebx
    __int16 v34; // dx
    __int16 v35; // cx
    int i; // ebx
    __int16 v37; // dx
    uint8_t *v38; // eax
    char v39; // cl
    int j; // ebx
    __int16 v41; // ax
    int k; // esi
    uint8_t *v43; // eax
    char v44; // cl
    int m; // ebx
    __int16 v46; // ax
    int n; // esi
    uint8_t *v48; // eax
    char v49; // cl
    int v50; // edx
    int v53; // [esp+14h] [ebp-28h]
    uint8_t *v54; // [esp+14h] [ebp-28h]
    int v55; // [esp+14h] [ebp-28h]
    int v56; // [esp+18h] [ebp-24h]
    char *v57; // [esp+18h] [ebp-24h]
    int v58; // [esp+18h] [ebp-24h]
    int v59; // [esp+1Ch] [ebp-20h] BYREF
    int v60; // [esp+20h] [ebp-1Ch]
    int v61; // [esp+24h] [ebp-18h]
    int v62; // [esp+28h] [ebp-14h]
    int v63; // [esp+2Ch] [ebp-10h]
    int v64; // [esp+30h] [ebp-Ch]
    int v65; // [esp+38h] [ebp-4h]
    v4 = a2;
    v5 = a3;
    v6 = *a2;
    v7 = *a3 - v6;
    if ( v7 < 3 )
    return 0;
    v9 = a2[1];
    v10 = a3[1] - v9;
    if ( v10 < 3 )
    return 0;
    v61 = v7 + 10;
    v62 = v10 + 10;
    v59 = v6 - 7;
    v60 = v9 - 4;
    if ( !BuildingTypeClass::CheckPlacementArea(this, &v59, (int)a4) )
    return 0;
    v11 = v59;
    v65 = v62;
    v12 = v59;
    v13 = v60;
    v63 = v59;
    v64 = v60;
    v53 = v60;
    if ( v60 < v60 + v62 )
    a3 = (__int16 *)(v59 + 7);
    do
    if ( v12 < (int)a3 )
    do
    LOWORD(a2) = v12;
    HIWORD(a2) = v13;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, (int)a4);
    v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v14[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    v13 = v53;
    ++v12;
    while ( v12 < (int)a3 );
    v11 = v59;
    v12 = v63;
    v53 = ++v13;
    while ( v13 < v64 + v65 );
    v15 = v5[1] + 1;
    v16 = v11;
    v63 = v11;
    v17 = v15 + 7;
    v56 = v15 + 7;
    if ( !__OFSUB__(v15, v15 + 7) )
    a3 = (__int16 *)(v11 + v61);
    do
    if ( v16 < (int)a3 )
    do
    LOWORD(a2) = v16;
    HIWORD(a2) = v15;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, (int)a4);
    v54 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v54[283] = *(uint8_t *)(List::FindByValue(a4) + 16);
    ++v16;
    while ( v16 < (int)a3 );
    v16 = v63;
    v17 = v56;
    ++v15;
    while ( v15 < v17 );
    v18 = v4[1];
    v19 = *v4;
    v20 = (char *)(v18 + 1);
    v63 = v19;
    a3 = (__int16 *)v18;
    v57 = (char *)(v18 + 1);
    if ( !__OFSUB__(v18, v18 + 1) )
    v21 = v19 + 2;
    do
    v22 = v19;
    if ( v19 < v21 )
    do
    HIWORD(a2) = v18;
    LOWORD(a2) = v22;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, *(this + 2));
    v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2);
    v19 = v63;
    v23[283] = *((uint8_t *)this + 16);
    v18 = (int)a3;
    ++v22;
    v21 = v19 + 2;
    while ( v22 < v19 + 2 );
    v20 = v57;
    a3 = (__int16 *)++v18;
    while ( v18 < (int)v20 );
    v24 = *v5;
    v25 = v5[1] - 1;
    v63 = v24;
    v26 = (__int16 *)(v25 + 2);
    a3 = (__int16 *)(v25 + 2);
    if ( !__OFSUB__(v25, v25 + 2) )
    do
    if ( !__OFSUB__(v24, v24 + 1) )
    do
    LOWORD(a2) = v24;
    HIWORD(a2) = v25;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, *(this + 2));
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) = *((uint8_t *)this + 16);
    ++v24;
    while ( v24 < v63 + 1 );
    v26 = a3;
    v24 = v63;
    ++v25;
    while ( v25 < (int)v26 );
    v27 = *v4;
    v28 = v4[1];
    v63 = v27 + 1;
    v29 = v28 + 1;
    v30 = *v5 - v27 - 1;
    v55 = v28 + 1;
    v31 = v5[1];
    v58 = v31;
    if ( v28 + 1 < v31 )
    v32 = v63;
    a3 = (__int16 *)(v63 + v30);
    do
    if ( v32 < (int)a3 )
    do
    LOWORD(a2) = v32;
    HIWORD(a2) = v29;
    if ( MapSeed::IsCellInBounds((__int16 *)&a2) )
    SetLayerDataMap((__int16 *)&a2, *(this + 2));
    v29 = v55;
    *((uint8_t *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) = *((uint8_t *)this + 16);
    ++v32;
    while ( v32 < (int)a3 );
    v31 = v58;
    v32 = v63;
    v55 = ++v29;
    while ( v29 < v31 );
    v33 = (int)a4;
    v34 = *v4 - 3;
    HIWORD(a2) = v4[1];
    LOWORD(a2) = v34;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &a2, (int)a4, *(this + 4));
    v35 = *v5 - 2;
    HIWORD(a4) = v5[1];
    LOWORD(a4) = v35;
    PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &a4, v33, *(this + 4));
    for ( i = 0; i < 4; ++i )
    v37 = v5[1] + i;
    LOWORD(a4) = *v4 - i;
    HIWORD(a4) = v37;
    v38 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v39 = *((uint8_t *)this + 16);
    v38[284] = 8;
    v38[283] = v39 - i - 1;
    *((uint32_t *)v38 + 14) = g_CellTileLookup + 7;
    v38[282] = 0;
    for ( j = 0; j < 4; ++j )
    v41 = v4[1];
    for ( k = 0; k < v5[1] - v41 + j - 3; v41 = v4[1] )
    LOWORD(a4) = *v4 - j;
    HIWORD(a4) = v41 + k + 3;
    v43 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v44 = *((uint8_t *)this + 16);
    v43[284] = 1;
    ++k;
    v43[283] = v44 - j - 1;
    *((uint32_t *)v43 + 14) = g_CellTileLookup;
    v43[282] = 0;
    for ( m = 0; m < 4; ++m )
    v46 = *v5;
    for ( n = 0; n < *v5 - *v4 + m - 3; ++n )
    LOWORD(a4) = v46 - n - 3;
    HIWORD(a4) = v5[1] + m;
    v48 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4);
    v49 = *((uint8_t *)this + 16);
    v48[284] = 4;
    v48[283] = v49 - m - 1;
    v50 = g_CellTileLookup + 3;
    v48[282] = 0;
    *((uint32_t *)v48 + 14) = v50;
    v46 = *v5;
    return 1;
}

int  MapSeedClass::Constructor(int this)
{
    wchar_t *StringCSF; // eax
    LoadOptions::Construct((uint32_t *)this);
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 60) = 1;
    *(uint32_t *)(this + 64) = 1;
    *(uint32_t *)(this + 68) = 0;
    *(uint32_t *)(this + 72) = 1;
    *(uint32_t *)(this + 76) = 0;
    *(uint32_t *)(this + 80) = 2;
    *(uint32_t *)(this + 84) = 0;
    *(uint32_t *)(this + 88) = 0;
    *(uint32_t *)(this + 92) = 0;
    *(uint32_t *)(this + 96) = 0;
    *(uint32_t *)(this + 100) = 0;
    *(uint32_t *)(this + 104) = 0;
    *(uint32_t *)(this + 108) = 0;
    *(uint32_t *)(this + 112) = 0;
    *(uint32_t *)(this + 116) = -1;
    *(uint32_t *)this = &MapSeedClass::`vftable';
    *(uint32_t *)(this + 8) = &off_82BA60;
    *(_WORD *)(this + 120) = 0;
    *(uint32_t *)(this + 12) = this + 120;
    if ( sub_734FD0() )
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 3934);
    wcscpy((wchar_t *)(this + 120), StringCSF);
    return this;
}

char  MapSeedClass::_vt02(int this, char *a2, wchar_t *Source)
{
    void *v5[4]; // [esp+Ch] [ebp-ACh] BYREF
    uint32_t v6[3]; // [esp+1Ch] [ebp-9Ch] BYREF
    uint32_t v7[6]; // [esp+28h] [ebp-90h] BYREF
    char v8; // [esp+40h] [ebp-78h]
    int v9; // [esp+44h] [ebp-74h]
    int v10; // [esp+48h] [ebp-70h]
    uint32_t v11[22]; // [esp+4Ch] [ebp-6Ch] BYREF
    uint8_t v12[12]; // [esp+A4h] [ebp-14h] BYREF
    int v13; // [esp+B0h] [ebp-8h]
    if ( !a2 )
    return 0;
    Debug::Log();
    CCFileClass::Construct(v11, a2);
    v6[0] = &GenericNode::`vftable';
    v7[0] = &GenericNode::`vftable';
    v5[1] = 0;
    v5[2] = 0;
    v6[1] = 0;
    v6[2] = 0;
    v7[1] = 0;
    v7[2] = 0;
    LinkedList::Prepend(v6, (int)v7);
    v5[3] = &List<INIClass::INISection *>::`vftable';
    memset(&v7[3], 0, 12);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = &INIClass::`vftable';
    if ( Source )
    wcscpy((wchar_t *)(this + 120), Source);
    INIClass::SetWideAsHex((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Description, Source);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Width, *(uint32_t *)(this + 100), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Height, *(uint32_t *)(this + 104), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_NumPlayers, *(uint32_t *)(this + 80), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aSeed, *(uint32_t *)(this + 116), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aMaptype, *(uint32_t *)(this + 60), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Theater, *(uint32_t *)(this + 56), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Time, *(uint32_t *)(this + 72), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aRegionsize, *(uint32_t *)(this + 112), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aRuggedness, *(uint32_t *)(this + 68), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aAccessibility, *(uint32_t *)(this + 108), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aWateramount, *(uint32_t *)(this + 76), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Tiberium, *(uint32_t *)(this + 84), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aTiberiumlayout, *(uint32_t *)(this + 88), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aVegetation, *(uint32_t *)(this + 92), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aUrbanpresence, *(uint32_t *)(this + 96), 0);
    INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, aResources, *(uint32_t *)(this + 64), 0);
    INIClass::SaveToPipe(v5, (int)v11);
    HashTable::DestroyHashTableINIClass(v5);
    v11[0] = &CCFileClass::`vftable';
    v13 = 0;
    Vector::Clear((int)v12);
    v11[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v11);
    return 1;
}

char  MapSeedClass::_vt01(int this, char *Source)
{
    wchar_t *StringCSF; // eax
    int Int_Overwrite; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // eax
    int v17; // ecx
    int v18; // eax
    int v20; // [esp-4h] [ebp-BCh]
    int v21; // [esp-4h] [ebp-BCh]
    int v22; // [esp-4h] [ebp-BCh]
    int v23; // [esp-4h] [ebp-BCh]
    int v24; // [esp-4h] [ebp-BCh]
    void *v25[4]; // [esp+Ch] [ebp-ACh] BYREF
    uint32_t v26[3]; // [esp+1Ch] [ebp-9Ch] BYREF
    uint32_t v27[6]; // [esp+28h] [ebp-90h] BYREF
    char v28; // [esp+40h] [ebp-78h]
    int v29; // [esp+44h] [ebp-74h]
    int v30; // [esp+48h] [ebp-70h]
    uint32_t v31[22]; // [esp+4Ch] [ebp-6Ch] BYREF
    uint8_t v32[12]; // [esp+A4h] [ebp-14h] BYREF
    int v33; // [esp+B0h] [ebp-8h]
    if ( Source )
    Debug::Log();
    CCFileClass::Construct(v31, Source);
    v26[0] = &GenericNode::`vftable';
    v27[0] = &GenericNode::`vftable';
    v25[1] = 0;
    v25[2] = 0;
    v26[1] = 0;
    v26[2] = 0;
    v27[1] = 0;
    v27[2] = 0;
    LinkedList::Prepend(v26, (int)v27);
    v25[3] = &List<INIClass::INISection *>::`vftable';
    memset(&v27[3], 0, 12);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v25[0] = &INIClass::`vftable';
    if ( FileStraw::Open(v25, (int)v31, 0) )
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 5433);
    INIClass::ParseValue_Wide(
    (char **)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Description,
    StringCSF,
    (wchar_t *)(this + 120),
    0x80u);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Width,
    *(uint32_t *)(this + 100));
    v5 = *(uint32_t *)(this + 104);
    *(uint32_t *)(this + 100) = Int_Overwrite;
    v6 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Height,
    v5);
    v20 = *(uint32_t *)(this + 80);
    *(uint32_t *)(this + 104) = v6;
    *(uint32_t *)(this + 80) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_NumPlayers,
    v20);
    v7 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aSeed,
    *(uint32_t *)(this + 116));
    v8 = *(uint32_t *)(this + 60);
    *(uint32_t *)(this + 116) = v7;
    v9 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aMaptype,
    v8);
    v21 = *(uint32_t *)(this + 56);
    *(uint32_t *)(this + 60) = v9;
    *(uint32_t *)(this + 56) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Theater,
    v21);
    v10 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Time,
    *(uint32_t *)(this + 72));
    v11 = *(uint32_t *)(this + 112);
    *(uint32_t *)(this + 72) = v10;
    v12 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aRegionsize,
    v11);
    v22 = *(uint32_t *)(this + 68);
    *(uint32_t *)(this + 112) = v12;
    *(uint32_t *)(this + 68) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aRuggedness,
    v22);
    v13 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aAccessibility,
    *(uint32_t *)(this + 108));
    v14 = *(uint32_t *)(this + 76);
    *(uint32_t *)(this + 108) = v13;
    v15 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aWateramount,
    v14);
    v23 = *(uint32_t *)(this + 84);
    *(uint32_t *)(this + 76) = v15;
    *(uint32_t *)(this + 84) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)g_INI_Key_Tiberium,
    v23);
    v16 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aTiberiumlayout,
    *(uint32_t *)(this + 88));
    v17 = *(uint32_t *)(this + 92);
    *(uint32_t *)(this + 88) = v16;
    v18 = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aVegetation,
    v17);
    v24 = *(uint32_t *)(this + 96);
    *(uint32_t *)(this + 92) = v18;
    *(uint32_t *)(this + 96) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aUrbanpresence,
    v24);
    *(uint32_t *)(this + 64) = INIClass::ReadInt_Overwrite(
    (int)v25,
    (unsigned __int8 *)g_INI_Key_RandomMap,
    (unsigned __int8 *)aResources,
    *(uint32_t *)(this + 64));
    HashTable::DestroyHashTableINIClass(v25);
    v31[0] = &CCFileClass::`vftable';
    v33 = 0;
    Vector::Clear((int)v32);
    v31[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v31);
    return 1;
    HashTable::DestroyHashTableINIClass(v25);
    v31[0] = &CCFileClass::`vftable';
    v33 = 0;
    Vector::Clear((int)v32);
    v31[0] = &off_7E1668;
    BufferIOFileClass::Dtor(v31);
    return 0;
}

bool __stdcall MapSeedClass::_vt03(LPCSTR lpFileName)
{
    return LoadOptions::ddtor(lpFileName);
}

uint32_t * MapSeedClass::_vt00(uint32_t *Block, char a2)
{
    LoadOptions::Cleanup(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

