#include "trajectoryhelper.hpp"

uint32_t *__fastcall TrajectoryHelper::FindFirstObstacle(uint32_t *a1, int *a2, int a3, #375 *a4)
{
    int v5; // esi
    int v6; // edi
    int v7; // ebp
    signed int v8; // eax
    int v9; // edi
    int v10; // esi
    int v11; // ecx
    uint8_t *v12; // esi
    void *v13; // eax
    int v14; // esi
    int v15; // edi
    uint32_t *result; // eax
    bool v17; // cc
    int v18; // [esp+10h] [ebp-34h]
    int v19; // [esp+10h] [ebp-34h]
    int v20; // [esp+14h] [ebp-30h]
    int v21; // [esp+18h] [ebp-2Ch]
    int v22; // [esp+18h] [ebp-2Ch]
    int v23; // [esp+1Ch] [ebp-28h]
    int v24; // [esp+20h] [ebp-24h]
    int v25; // [esp+24h] [ebp-20h] BYREF
    int v26; // [esp+28h] [ebp-1Ch] BYREF
    uint8_t *v27; // [esp+2Ch] [ebp-18h]
    uint8_t *v28; // [esp+30h] [ebp-14h]
    int v29; // [esp+34h] [ebp-10h] BYREF
    int v30; // [esp+38h] [ebp-Ch]
    int v31; // [esp+3Ch] [ebp-8h]
    int v32; // [esp+40h] [ebp-4h]
    if ( !*(uint8_t *)(a3 + 662) && !*(uint8_t *)(a3 + 664) )
    return 0;
    v5 = *a2;
    v6 = a2[1];
    LOWORD(v21) = *a1 / 256;
    HIWORD(v21) = a1[1] / 256;
    v25 = v21;
    LOWORD(v18) = v5 / 256;
    HIWORD(v18) = v6 / 256;
    v26 = v18;
    v7 = abs32((__int16)v21 - (__int16)v18);
    v8 = abs32(SHIWORD(v21) - SHIWORD(v18));
    if ( v7 <= v8 )
    v7 = v8;
    v9 = v6 - a1[1];
    v10 = v5 - *a1;
    v11 = a2[2] - a1[2];
    if ( v7 )
    v30 = v10 / v7;
    v31 = v9 / v7;
    v32 = v11 / v7;
    else
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v25);
    v28 = v12;
    v27 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v26);
    v13 = v12;
    v24 = 0;
    if ( v7 <= 0 )
    return 0;
    v22 = 0;
    v20 = 0;
    v19 = 0;
    while ( 1 )
    v14 = *a1 + v19;
    v15 = v20 + a1[1];
    result = TrajectoryHelper::GetObstacle(v28, v27, (int)v13, v14, v15, a1[2] + v22, a3, a4);
    if ( result )
    break;
    LOWORD(v23) = v14 / 256;
    HIWORD(v23) = v15 / 256;
    v29 = v23;
    v13 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v29);
    v19 += v30;
    v17 = ++v24 < v7;
    v20 += v31;
    v22 += v32;
    if ( !v17 )
    return 0;
    return result;
}

uint32_t *__fastcall TrajectoryHelper::FindFirstImpenetrableObstacle(uint32_t *a1, int *a2, int a3, #375 *a4)
{
    uint32_t *FirstObstacle; // eax
    uint32_t *v5; // esi
    FirstObstacle = TrajectoryHelper::FindFirstObstacle(a1, a2, *(uint32_t *)(a3 + 160), a4);
    v5 = FirstObstacle;
    if ( FirstObstacle
    && BuildingPlacement::ValidateType(FirstObstacle, -1, -1)
    && *(uint8_t *)(*(uint32_t *)(a3 + 172) + 324) )
    return 0;
    else
    return v5;
}

