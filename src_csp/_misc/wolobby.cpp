#include "wolobby.hpp"

void __fastcall WOLobby::BuildStateList(char a1)
{
    signed int v1; // esi
    signed int v2; // ebx
    int *v3; // ebp
    int v4; // eax
    int *v5; // ebp
    char *v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // esi
    char *v10; // edi
    bool v11; // zf
    void **v12; // edi
    int v14; // [esp+14h] [ebp-84h]
    signed int v15; // [esp+14h] [ebp-84h]
    int v16[2]; // [esp+18h] [ebp-80h] BYREF
    void *Block; // [esp+20h] [ebp-78h]
    signed int v18; // [esp+24h] [ebp-74h]
    int *v19; // [esp+28h] [ebp-70h]
    uint32_t v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF
    v1 = g_WOL_State;
    v2 = 0;
    v16[0] = 0;
    v16[1] = 0;
    Block = 0;
    v18 = g_WOL_State;
    v3 = (int *)__2_YAPAXI_Z(12 * g_WOL_State);
    v19 = v3;
    if ( v3 )
    v4 = 0;
    memset(v20, 0, sizeof(v20));
    if ( v1 <= 0 )
    LABEL_12:
    g_WOL_State = 0;
    if ( a1 )
    qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0);
    else
    qsort(v3, v1, 0xCu, sub_781CF0);
    if ( v1 > 0 )
    v7 = g_WOL_State;
    v15 = v1;
    do
    v8 = *v3;
    if ( *v3 >= 0 && v8 < v16[0] )
    qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20));
    v9 = v7;
    if ( v7 >= g_WOL_StateFlags )
    DynamicArray::Grow(&g_WOL_State);
    v7 = g_WOL_State;
    if ( v7 >= g_WOL_StateFlags )
    DynamicArray::Grow(&g_WOL_State);
    v7 = g_WOL_State;
    if ( v9 < v7 )
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
    (char *)g_WOL_ConnectionFlags + 108 * v9,
    108 * v7 - 108 * v9);
    v7 = g_WOL_State;
    v10 = (char *)g_WOL_ConnectionFlags + 108 * v9;
    if ( v10 )
    qmemcpy(v10, v20, 0x6Cu);
    v7 = g_WOL_State;
    ++v7;
    v3 += 3;
    v11 = v15 == 1;
    g_WOL_State = v7;
    --v15;
    while ( !v11 );
    v3 = v19;
    v1 = v18;
    v16[0] = 0;
    if ( v1 > 0 )
    v12 = (void **)(v3 + 1);
    do
    if ( *v12 )
    __3_YAXPAX_Z(*v12);
    v12 += 3;
    --v1;
    while ( v1 );
    __3_YAXPAX_Z(v3);
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
    else
    v14 = 0;
    v5 = v3 + 2;
    while ( 1 )
    if ( v4 >= 0 && v2 < (int)g_WOL_State )
    qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v4, sizeof(v20));
    *(v5 - 2) = v2;
    v6 = (char *)__2_YAPAXI_Z(0xAu);
    *(v5 - 1) = (int)v6;
    if ( !v6 )
    break;
    strcpy(v6, (const char *)&v20[9]);
    *v5 = v20[0] & 1;
    DynamicClass::Insert(v16, v20, v16[0]);
    ++v2;
    v5 += 3;
    v14 += 108;
    if ( v2 >= v18 )
    v3 = v19;
    v1 = v18;
    goto LABEL_12;
    v4 = v14;
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
    else
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
}

void __fastcall WOLobby::BuildPlayerList(char a1)
{
    signed int v1; // esi
    signed int v2; // ebx
    int *v3; // ebp
    int v4; // eax
    int *v5; // ebp
    char *v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // esi
    char *v10; // edi
    bool v11; // zf
    void **v12; // edi
    int v14; // [esp+14h] [ebp-84h]
    signed int v15; // [esp+14h] [ebp-84h]
    int v16[2]; // [esp+18h] [ebp-80h] BYREF
    void *Block; // [esp+20h] [ebp-78h]
    signed int v18; // [esp+24h] [ebp-74h]
    int *v19; // [esp+28h] [ebp-70h]
    uint32_t v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF
    v1 = g_WOL_State;
    v2 = 0;
    v16[0] = 0;
    v16[1] = 0;
    Block = 0;
    v18 = g_WOL_State;
    v3 = (int *)__2_YAPAXI_Z(12 * g_WOL_State);
    v19 = v3;
    if ( v3 )
    v4 = 0;
    memset(v20, 0, sizeof(v20));
    if ( v1 <= 0 )
    LABEL_12:
    if ( a1 )
    qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7835C0);
    else
    qsort(v3, v1, 0xCu, sub_7836E0);
    v7 = 0;
    g_WOL_State = 0;
    if ( v1 > 0 )
    v15 = v1;
    do
    v8 = *v3;
    if ( *v3 >= 0 && v8 < v16[0] )
    qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20));
    v9 = v7;
    if ( v7 >= g_WOL_StateFlags )
    DynamicArray::Grow(&g_WOL_State);
    v7 = g_WOL_State;
    if ( v7 >= g_WOL_StateFlags )
    DynamicArray::Grow(&g_WOL_State);
    v7 = g_WOL_State;
    if ( v9 < v7 )
    memcpy(
    (char *)g_WOL_ConnectionFlags + 108 * v9 + 108,
    (char *)g_WOL_ConnectionFlags + 108 * v9,
    108 * v7 - 108 * v9);
    v7 = g_WOL_State;
    v10 = (char *)g_WOL_ConnectionFlags + 108 * v9;
    if ( v10 )
    qmemcpy(v10, v20, 0x6Cu);
    v7 = g_WOL_State;
    ++v7;
    v3 += 3;
    v11 = v15 == 1;
    g_WOL_State = v7;
    --v15;
    while ( !v11 );
    v3 = v19;
    v1 = v18;
    v16[0] = 0;
    if ( v1 > 0 )
    v12 = (void **)(v3 + 1);
    do
    if ( *v12 )
    __3_YAXPAX_Z(*v12);
    v12 += 3;
    --v1;
    while ( v1 );
    __3_YAXPAX_Z(v3);
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
    else
    v14 = 0;
    v5 = v3 + 2;
    while ( 1 )
    if ( v4 >= 0 && v2 < (int)g_WOL_State )
    qmemcpy(v20, (char *)g_WOL_ConnectionFlags + v4, sizeof(v20));
    *(v5 - 2) = v2;
    v6 = (char *)__2_YAPAXI_Z(0xAu);
    *(v5 - 1) = (int)v6;
    if ( !v6 )
    break;
    strcpy(v6, (const char *)&v20[21] + 3);
    *v5 = v20[0] & 1;
    DynamicClass::Insert(v16, v20, v16[0]);
    ++v2;
    v5 += 3;
    v14 += 108;
    if ( v2 >= v18 )
    v3 = v19;
    v1 = v18;
    goto LABEL_12;
    v4 = v14;
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
    else
    v16[0] = 0;
    __3_YAXPAX_Z(Block);
}

