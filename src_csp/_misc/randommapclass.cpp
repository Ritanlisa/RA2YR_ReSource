#include "randommapclass.hpp"

int  RandomMapClass::PlaceTiberium(int *this)
{
    int *v1; // esi
    __int16 v2; // bx
    int v3; // eax
    int v4; // ecx
    int result; // eax
    int *v6; // edi
    __int16 v7; // bp
    int v8; // esi
    int v9; // ecx
    __int16 v10; // bx
    unsigned int v11; // eax
    unsigned int v12; // esi
    int v13; // ecx
    int v14; // esi
    int v15; // ebp
    int v16; // eax
    double v17; // st7
    double v18; // st7
    int v19; // eax
    int v20; // ecx
    int v21; // ebx
    int v22; // esi
    int v23; // eax
    int *Waypoint_Location; // eax
    int v25; // ecx
    int v26; // eax
    int v27; // esi
    int v28; // ebx
    int v29; // ebp
    int v30; // eax
    double v31; // st7
    int v32; // eax
    int v33; // eax
    int v34; // ebx
    double *v35; // edx
    uint32_t *v36; // ecx
    int v37; // esi
    int v38; // ebp
    int v39; // eax
    int v40; // esi
    int v41; // ebp
    __int16 *v42; // eax
    int v43; // [esp-4h] [ebp-9Ch]
    bool v44; // [esp+1Fh] [ebp-79h]
    int v45; // [esp+20h] [ebp-78h]
    int *v46; // [esp+24h] [ebp-74h]
    int v47; // [esp+28h] [ebp-70h]
    int v48; // [esp+28h] [ebp-70h]
    double v49; // [esp+28h] [ebp-70h]
    int v50; // [esp+34h] [ebp-64h]
    int v51; // [esp+34h] [ebp-64h]
    char v52; // [esp+38h] [ebp-60h]
    int v53; // [esp+3Ch] [ebp-5Ch]
    double v54; // [esp+40h] [ebp-58h]
    int v55; // [esp+40h] [ebp-58h]
    double v56; // [esp+40h] [ebp-58h]
    char v57[4]; // [esp+4Ch] [ebp-4Ch] BYREF
    char v58[4]; // [esp+50h] [ebp-48h] BYREF
    char v59[4]; // [esp+54h] [ebp-44h] BYREF
    double v60; // [esp+58h] [ebp-40h]
    double v61; // [esp+60h] [ebp-38h]
    double v62; // [esp+68h] [ebp-30h]
    __int64 v63; // [esp+70h] [ebp-28h]
    __int64 v64; // [esp+78h] [ebp-20h]
    void **v65; // [esp+80h] [ebp-18h] BYREF
    void *Block; // [esp+84h] [ebp-14h]
    int v67; // [esp+88h] [ebp-10h]
    char v68; // [esp+8Dh] [ebp-Bh]
    int v69; // [esp+90h] [ebp-8h]
    int v70; // [esp+94h] [ebp-4h]
    v1 = this;
    v2 = 0;
    v3 = *(this + 15);
    v4 = *(this + 16);
    v46 = v1;
    v45 = 0;
    switch ( v3 )
    case 0:
    v44 = v4 == 3;
    break;
    case 1:
    case 3:
    case 4:
    v44 = v4 != 3;
    break;
    case 2:
    v44 = 1;
    break;
    default:
    v44 = 0;
    break;
    result = 0;
    v53 = 0;
    if ( g_RandomMap_TileData > 0 )
    while ( 1 )
    v6 = (int *)*((uint32_t *)g_RandomMap_TerrainState + result);
    if ( *v6 )
    v50 = -1;
    if ( v44 )
    v7 = 0;
    if ( v6[8] <= 0 )
    v12 = v6[14] - 1;
    v63 = (unsigned int)v6[14];
    v54 = (double)v63;
    do
    v64 = (unsigned int)Random::State(&g_Randomizer);
    v11 = Math::RoundToInt((double)v64 * v54 * 2.328306437080797e-10);
    while ( v11 > v12 );
    v47 = *(uint32_t *)(v6[11] + 4 * v11);
    LOWORD(v11) = HIWORD(v47);
    v10 = v47;
    else
    v8 = 0;
    do
    LODWORD(v60) = *(uint32_t *)ScenarioClass::Get_Waypoint_Location(v57, v8 + v45);
    v7 += WORD1(v60);
    v2 += LOWORD(v60);
    ++v8;
    while ( v8 < v6[8] );
    v9 = v6[8];
    v10 = v2 / v9;
    v11 = v7 / v9;
    v13 = *v6;
    v14 = 0;
    v48 = 500000;
    if ( *(int *)(*v6 + 16) > 0 )
    v15 = (__int16)v11;
    do
    v16 = *(uint32_t *)(*(uint32_t *)(v13 + 4) + 4 * v14);
    v17 = Math::Sqrt((double)(((__int16)v16 - v10) * ((__int16)v16 - v10)
    + (SHIWORD(v16) - v15) * (SHIWORD(v16) - v15)));
    if ( v17 < (double)v48 )
    v48 = Math::RoundToInt(v17);
    v50 = v14;
    v13 = *v6;
    ++v14;
    while ( v14 < *(uint32_t *)(*v6 + 16) );
    v1 = v46;
    Math::RoundToInt((double)v1[21] * 0.01 * (double)(v1[176] - v1[175]) + (double)v1[175]);
    v18 = (double)v6[8];
    if ( v18 < 0.5 )
    v18 = 0.5;
    v19 = Math::RoundToInt(v18);
    v20 = *(uint32_t *)(*v6 + 16);
    if ( v20 && v19 )
    v21 = 0;
    v22 = 0;
    v55 = v19 / v20;
    if ( v20 > 0 )
    do
    do
    do
    v49 = Random::Gaussian((double *)&g_TileSystemInit) * 50.0;
    while ( v49 < -100.0 );
    while ( v49 > 100.0 );
    v23 = Math::RoundToInt((double)v55 + v49);
    if ( v23 >= 0 )
    Terrain::PlaceTiberiumTrees((__int16 *)(*(uint32_t *)(*v6 + 4) + 4 * v22), v23, v22 + v45 + 1, v22 == v50);
    ++v22;
    while ( v22 < *(uint32_t *)(*v6 + 16) );
    RandomMap::Constructor_1(0, 0);
    v65 = &DynamicVectorClass<double>::`vftable';
    v70 = 10;
    v69 = 0;
    v51 = 0;
    if ( v6[8] > 0 )
    do
    v62 = 0.0;
    Waypoint_Location = (int *)ScenarioClass::Get_Waypoint_Location(v58, v21 + v45);
    v25 = *v6;
    v26 = *Waypoint_Location;
    v27 = 0;
    if ( *(int *)(*v6 + 16) > 0 )
    v28 = SHIWORD(v26);
    v29 = (__int16)v26;
    do
    v30 = *(uint32_t *)(*(uint32_t *)(v25 + 4) + 4 * v27);
    v31 = Math::Sqrt((double)(((__int16)v30 - v29) * ((__int16)v30 - v29)
    + (SHIWORD(v30) - v28) * (SHIWORD(v30) - v28)));
    v25 = *v6;
    v32 = *(uint32_t *)(*v6 + 16);
    ++v27;
    v62 = v31 + v62;
    while ( v27 < v32 );
    v21 = v51;
    v56 = v62 / (double)*(int *)(*v6 + 16);
    if ( v69 < v67
    || (v68 || !v67)
    && v70 > 0
    && ((unsigned __int8 (__thiscall *)(void ***, int, uint32_t))v65[2])(&v65, v70 + v67, 0) )
    v33 = v69++;
    *((double *)Block + v33) = v56;
    v51 = ++v21;
    while ( v21 < v6[8] );
    v34 = v6[8];
    v35 = (double *)Block;
    v61 = 9999999.0;
    if ( v34 > 0 )
    v36 = Block;
    v37 = v34;
    do
    if ( *(double *)v36 < v61 )
    v38 = v36[1];
    LODWORD(v61) = *v36;
    HIDWORD(v61) = v38;
    v36 += 2;
    --v37;
    while ( v37 );
    v52 = 0;
    if ( v46[16] == 3 )
    v39 = v46[15];
    if ( v39 == 1 || v39 == 3 || v39 == 4 )
    v52 = 1;
    v40 = 0;
    if ( v34 > 0 )
    v41 = v45;
    do
    v43 = Math::RoundToInt((v35[v40] - v61) * 15.0) + 500;
    v42 = (__int16 *)ScenarioClass::Get_Waypoint_Location(v59, v41);
    Terrain::PlaceTiberiumTrees(v42, v43, v41 + 1, v52);
    v35 = (double *)Block;
    ++v40;
    ++v41;
    while ( v40 < v6[8] );
    v45 += v6[8];
    v65 = &VectorClass<double>::`vftable';
    if ( v35 )
    if ( v68 )
    __3_YAXPAX_Z(v35);
    Block = 0;
    v67 = 0;
    v1 = v46;
    v68 = 0;
    result = ++v53;
    if ( v53 >= g_RandomMap_TileData )
    break;
    v2 = 0;
    return result;
}

