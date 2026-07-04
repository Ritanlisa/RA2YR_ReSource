#include "bigint.hpp"

// 0x005C6FE0
int __fastcall BigInt::ArrayArithmetic(int *a1, char *a2, uint32_t *a3, int a4)
{
    int v4; // ebx
    unsigned int v6; // ebp
    char *v7; // eax
    int v8; // ecx
    int v9; // edx
    int *v10; // eax
    int v11; // ecx
    int v12; // edx
    int v13; // ecx
    bool v14; // zf
    uint32_t *v15; // eax
    int *v17; // eax
    int v18; // ecx
    int v19; // edx
    int *v20; // eax
    int *v21; // ecx
    int v22; // esi
    int v23; // edi
    int v24; // esi
    uint32_t *v25; // ecx
    int *v26; // eax
    int v27; // edx
    int v28; // esi
    int *v29; // eax
    uint32_t v31[64]; // [esp+14h] [ebp-200h] BYREF
    char v32[256]; // [esp+114h] [ebp-100h] BYREF
    v4 = a4;
    v6 = 4 * a4;
    if ( *(int *)&a2[4 * a4 - 4] >= 0 )
    if ( (int)a3[v6 / 4 - 1] >= 0 )
    FillArrayPattern(a1, a2, a3, a4);
    else
    qmemcpy(v31, a3, 4 * (v6 >> 2));
    v21 = v31;
    if ( a4 > 0 )
    v22 = a4;
    do
    v23 = *v21++;
    *(v21 - 1) = ~v23;
    --v22;
    while ( v22 );
    v24 = a4;
    v14 = v31[0] == -1;
    v25 = v31;
    ++v31[0];
    for ( ; v14; v14 = (*v25)++ == -1 )
    ++v25;
    if ( !--v24 )
    break;
    FillArrayPattern(a1, a2, v31, a4);
    v26 = a1;
    if ( a4 > 0 )
    v27 = a4;
    do
    v28 = *v26++;
    *(v26 - 1) = ~v28;
    --v27;
    while ( v27 );
    v29 = a1;
    v14 = (*a1)++ == -1;
    if ( v14 )
    while ( 1 )
    ++v29;
    if ( !--v4 )
    break;
    v14 = (*v29)++ == -1;
    if ( !v14 )
    return 0;
    return 0;
    qmemcpy(v32, a2, 4 * (v6 >> 2));
    v7 = v32;
    if ( a4 > 0 )
    v8 = a4;
    do
    v9 = *(uint32_t *)v7;
    v7 += 4;
    *((uint32_t *)v7 - 1) = ~v9;
    --v8;
    while ( v8 );
    sub_5C65B0(v32, a4);
    if ( (int)a3[v6 / 4 - 1] >= 0 )
    FillArrayPattern(a1, v32, a3, a4);
    v17 = a1;
    if ( a4 > 0 )
    v18 = a4;
    do
    v19 = *v17++;
    *(v17 - 1) = ~v19;
    --v18;
    while ( v18 );
    v20 = a1;
    v14 = (*a1)++ == -1;
    if ( v14 )
    while ( 1 )
    ++v20;
    if ( !--v4 )
    break;
    v14 = (*v20)++ == -1;
    if ( !v14 )
    return 0;
    return 0;
    qmemcpy(v31, a3, 4 * (v6 >> 2));
    v10 = v31;
    if ( a4 > 0 )
    v11 = a4;
    do
    v12 = *v10++;
    *(v10 - 1) = ~v12;
    --v11;
    while ( v11 );
    v13 = a4;
    v14 = v31[0] == -1;
    v15 = v31;
    ++v31[0];
    for ( ; v14; v14 = (*v15)++ == -1 )
    ++v15;
    if ( !--v13 )
    break;
    FillArrayPattern(a1, v32, v31, a4);
    return 0;
}

// 0x00632BC0
bool  BigInt::Compare(void *this, int a2)
{
    return CompareBigIntLE((int)this, a2, 64) > 0;
}

