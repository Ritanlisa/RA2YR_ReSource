#include "symboltable.hpp"

char  SymbolTable::Insert(void *this, uint32_t *a2, int ***Block)
{
    uint32_t *v4; // esi
    void *v5; // eax
    int v6; // eax
    uint32_t *v7; // eax
    uint32_t *v8; // ebp
    void *v9; // edx
    const wchar_t *v10; // esi
    size_t v11; // eax
    wchar_t *v12; // eax
    int v13; // edx
    int v14; // eax
    int v15; // esi
    double v16; // st7
    int v17; // ecx
    void *v18; // edi
    unsigned int v19; // edx
    int *v20; // edi
    int v21; // ebp
    int v22; // esi
    int v23; // edx
    int v24; // ecx
    int v25; // eax
    uint32_t *v27; // [esp+10h] [ebp-10h]
    int v28; // [esp+14h] [ebp-Ch]
    int v29; // [esp+18h] [ebp-8h]
    int *Blocka; // [esp+28h] [ebp+8h]
    v4 = __2_YAPAXI_Z(0x208u);
    if ( v4 )
    memset(v4 + 1, 0, 0x200u);
    v4[27] = 11;
    v4[26] = g_FogOfWarState;
    v5 = __2_YAPAXI_Z(4u);
    if ( v5 )
    v6 = unknown_libname_74(v5);
    else
    v6 = 0;
    v4[16] = v6;
    v7 = v4;
    v4[17] = 0;
    v4[24] = 0;
    v4[37] = -1;
    v27 = v4;
    else
    v27 = 0;
    v7 = 0;
    v8 = v7 + 1;
    *v7 = *a2;
    v9 = (void *)v7[11];
    v29 = v7[14];
    v28 = v7[16];
    if ( v7 + 1 != Block )
    qmemcpy(v8, Block, 0x200u);
    v7[16] = v28;
    v7[11] = v9;
    v7[14] = v29;
    v10 = (const wchar_t *)Block[10];
    if ( v9 )
    __3_YAXPAX_Z(v9);
    v8[10] = 0;
    if ( v10 && *v10 )
    v11 = wcslen(v10);
    v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2);
    v8[10] = v12;
    wcscpy(v12, v10);
    SymbolTable::Rebuild(v8, Block[13]);
    v7 = v27;
    v7[129] = 0;
    v13 = (*((int (__thiscall **)(uint32_t *))this + 6))(a2) & ((1 << *((uint32_t *)this + 3)) - 1);
    v14 = *(uint32_t *)(*(uint32_t *)this + 4 * v13);
    *(uint32_t *)(*(uint32_t *)this + 4 * v13) = v27;
    if ( v14 )
    v27[129] = v14;
    v15 = *((uint32_t *)this + 2);
    v16 = (double)(unsigned int)++*((uint32_t *)this + 1) / (double)v15;
    if ( v16 >= *((double *)this + 5) && *((uint8_t *)this + 20) != 1 )
    Blocka = *(int **)this;
    v17 = *((uint32_t *)this + 3) + 1;
    *((uint32_t *)this + 2) = 2 * v15;
    *((uint32_t *)this + 3) = v17;
    v18 = __2_YAPAXI_Z(8 * v15);
    v19 = 4 * *((uint32_t *)this + 2);
    *(uint32_t *)this = v18;
    memset(v18, 0, v19);
    if ( v15 > 0 )
    v20 = Blocka;
    v21 = v15;
    do
    v22 = *v20;
    if ( *v20 )
    do
    v23 = (*((int (__thiscall **)(int))this + 6))(v22) & ((1 << *((uint32_t *)this + 3)) - 1);
    v24 = *(uint32_t *)(*(uint32_t *)this + 4 * v23);
    *(uint32_t *)(*(uint32_t *)this + 4 * v23) = v22;
    v25 = *(uint32_t *)(v22 + 516);
    *(uint32_t *)(v22 + 516) = v24;
    v22 = v25;
    while ( v25 );
    ++v20;
    --v21;
    while ( v21 );
    __3_YAXPAX_Z(Blocka);
    return 1;
}

