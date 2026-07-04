#include "hashtable.hpp"

char  HashTable::RemoveAndResize(uint32_t *this, uint32_t *a2, uint8_t *a3)
{
    int v4; // eax
    int v7; // edi
    uint32_t *v8; // ecx
    int v9; // edx
    int v10; // ebp
    bool v11; // c0
    bool v12; // c3
    unsigned int v13; // ebp
    int *v14; // ebx
    int v15; // ecx
    void *v16; // edi
    unsigned int v17; // edx
    int v18; // edi
    int v19; // edx
    int v20; // ecx
    int v21; // eax
    uint32_t *v22; // eax
    unsigned int v23; // ebp
    int v24; // edi
    int *v25; // ebx
    void *v26; // edi
    unsigned int v27; // edx
    int v28; // edi
    int v29; // edx
    int v30; // ecx
    int v31; // eax
    uint32_t *v32; // [esp-4h] [ebp-1Ch]
    float v33; // [esp+10h] [ebp-8h]
    char v34; // [esp+1Ch] [ebp+4h]
    int *v35; // [esp+20h] [ebp+8h]
    int *v36; // [esp+20h] [ebp+8h]
    v4 = *(this + 1);
    if ( !v4 )
    return 0;
    v33 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2);
    v7 = ((int (__thiscall *)(uint32_t *))*(this + 6))(a2) & ((1 << *(this + 3)) - 1);
    v8 = *(uint32_t **)(*this + 4 * v7);
    if ( !v8 )
    return 0;
    v9 = a2[1];
    if ( v9 == v8[1] && *a2 == *v8 )
    *a3 = *((uint8_t *)v8 + 8);
    v32 = *(uint32_t **)(*this + 4 * v7);
    v10 = v32[3];
    __3_YAXPAX_Z(v32);
    *(uint32_t *)(*this + 4 * v7) = v10;
    v11 = v33 < *((double *)this + 4);
    v12 = v33 == *((double *)this + 4);
    --*(this + 1);
    if ( v11 || v12 )
    v13 = *(this + 2);
    if ( v13 > *(this + 12) && *((uint8_t *)this + 20) != 1 )
    v14 = (int *)*this;
    v35 = (int *)*this;
    v15 = *(this + 3) - 1;
    *(this + 2) = v13 >> 1;
    *(this + 3) = v15;
    v16 = __2_YAPAXI_Z(4 * (v13 >> 1));
    v17 = 4 * *(this + 2);
    *this = v16;
    memset(v16, 0, v17);
    if ( (int)v13 > 0 )
    do
    v18 = *v14;
    if ( *v14 )
    do
    v19 = ((int (__thiscall *)(int))*(this + 6))(v18) & ((1 << *(this + 3)) - 1);
    v20 = *(uint32_t *)(*this + 4 * v19);
    *(uint32_t *)(*this + 4 * v19) = v18;
    v21 = *(uint32_t *)(v18 + 12);
    *(uint32_t *)(v18 + 12) = v20;
    v18 = v21;
    while ( v21 );
    ++v14;
    --v13;
    while ( v13 );
    v14 = v35;
    __3_YAXPAX_Z(v14);
    return 1;
    else
    v22 = (uint32_t *)v8[3];
    v34 = 0;
    if ( v22 )
    while ( v9 != v22[1] || *a2 != *v22 )
    v8 = v22;
    v22 = (uint32_t *)v22[3];
    if ( !v22 )
    goto LABEL_23;
    *a3 = *((uint8_t *)v22 + 8);
    v8[3] = v22[3];
    --*(this + 1);
    __3_YAXPAX_Z(v22);
    v34 = 1;
    LABEL_23:
    if ( v33 <= *((double *)this + 4) )
    v23 = *(this + 2);
    if ( v23 > *(this + 12) && *((uint8_t *)this + 20) != 1 )
    v24 = *(this + 3);
    v25 = (int *)*this;
    v36 = (int *)*this;
    *(this + 2) = v23 >> 1;
    *(this + 3) = v24 - 1;
    v26 = __2_YAPAXI_Z(4 * (v23 >> 1));
    v27 = 4 * *(this + 2);
    *this = v26;
    memset(v26, 0, v27);
    if ( (int)v23 > 0 )
    do
    v28 = *v25;
    if ( *v25 )
    do
    v29 = ((int (__thiscall *)(int))*(this + 6))(v28) & ((1 << *(this + 3)) - 1);
    v30 = *(uint32_t *)(*this + 4 * v29);
    *(uint32_t *)(*this + 4 * v29) = v28;
    v31 = *(uint32_t *)(v28 + 12);
    *(uint32_t *)(v28 + 12) = v30;
    v28 = v31;
    while ( v31 );
    ++v25;
    --v23;
    while ( v23 );
    v25 = v36;
    __3_YAXPAX_Z(v25);
    return v34;
}

void  HashTable::Clear(int this)
{
    int v2; // ecx
    unsigned int v3; // edi
    int v4; // eax
    int v5; // ebx
    int *v6; // ecx
    const char **v7; // esi
    int *v8; // eax
    uint32_t *v9; // esi
    int v10; // edi
    bool v11; // c0
    bool v12; // c3
    unsigned int v13; // esi
    int v14; // ecx
    int *v15; // ebx
    void *v16; // edi
    unsigned int v17; // edx
    int *v18; // edi
    unsigned int v19; // ebx
    int v20; // esi
    int v21; // edx
    int v22; // ecx
    int v23; // eax
    int v24; // esi
    void **v25; // ebx
    unsigned int v26; // edx
    unsigned int v27; // eax
    float v28; // [esp+10h] [ebp-31Ch]
    int *v29; // [esp+10h] [ebp-31Ch]
    void *v30; // [esp+14h] [ebp-318h] BYREF
    __int64 v31; // [esp+18h] [ebp-314h]
    int v32; // [esp+20h] [ebp-30Ch]
    int v33; // [esp+24h] [ebp-308h]
    uint32_t v34[193]; // [esp+28h] [ebp-304h] BYREF
    unknown_libname_73(&v30);
    while ( 1 )
    v2 = *(uint32_t *)(this + 4);
    v3 = 0;
    if ( !v2 )
    break;
    v4 = *(uint32_t *)(this + 8);
    v31 = (unsigned int)(v2 - 1);
    v32 = v4;
    v33 = 0;
    v5 = 0;
    v28 = (double)v31 / (double)v4;
    if ( v4 <= 0 )
    break;
    v6 = *(int **)this;
    while ( !*v6 )
    ++v5;
    ++v6;
    if ( v5 >= v4 )
    goto LABEL_23;
    if ( v5 == -1 )
    break;
    v7 = *(const char ***)(*(uint32_t *)this + 4 * v5);
    String::Reassign((char **)&v30, v7);
    v8 = *(int **)this;
    qmemcpy(v34, v7 + 1, sizeof(v34));
    v9 = (uint32_t *)v8[v5];
    v10 = v9[194];
    if ( v9 )
    DeleteAndZero((void **)v8[v5]);
    __3_YAXPAX_Z(v9);
    *(uint32_t *)(*(uint32_t *)this + 4 * v5) = v10;
    v11 = v28 < *(double *)(this + 32);
    v12 = v28 == *(double *)(this + 32);
    --*(uint32_t *)(this + 4);
    if ( v11 || v12 )
    v13 = *(uint32_t *)(this + 8);
    if ( v13 > *(uint32_t *)(this + 48) && *(uint8_t *)(this + 20) != 1 )
    v14 = *(uint32_t *)(this + 12);
    v15 = *(int **)this;
    v29 = *(int **)this;
    *(uint32_t *)(this + 8) = v13 >> 1;
    *(uint32_t *)(this + 12) = v14 - 1;
    v16 = __2_YAPAXI_Z(4 * (v13 >> 1));
    v17 = 4 * *(uint32_t *)(this + 8);
    *(uint32_t *)this = v16;
    memset(v16, 0, v17);
    if ( (int)v13 > 0 )
    v18 = v15;
    v19 = v13;
    do
    v20 = *v18;
    if ( *v18 )
    do
    v21 = (*(int (__thiscall **)(int))(this + 24))(v20) & ((1 << *(uint32_t *)(this + 12)) - 1);
    v22 = *(uint32_t *)(*(uint32_t *)this + 4 * v21);
    *(uint32_t *)(*(uint32_t *)this + 4 * v21) = v20;
    v23 = *(uint32_t *)(v20 + 776);
    *(uint32_t *)(v20 + 776) = v22;
    v20 = v23;
    while ( v23 );
    ++v18;
    --v19;
    while ( v19 );
    v15 = v29;
    __3_YAXPAX_Z(v15);
    if ( v34[0] )
    (**(void (__thiscall ***)(uint32_t, int))v34[0])(v34[0], 1);
    LABEL_23:
    DeleteAndZero(&v30);
    if ( *(uint32_t *)(this + 8) )
    do
    v24 = *(uint32_t *)(*(uint32_t *)this + 4 * v3);
    while ( v24 )
    v25 = (void **)v24;
    v24 = *(uint32_t *)(v24 + 776);
    DeleteAndZero(v25);
    __3_YAXPAX_Z(v25);
    ++v3;
    *(uint32_t *)(*(uint32_t *)this + 4 * v3 - 4) = 0;
    while ( v3 < *(uint32_t *)(this + 8) );
    v26 = *(uint32_t *)(this + 8);
    v27 = *(uint32_t *)(this + 48);
    *(uint32_t *)(this + 4) = 0;
    if ( v26 > v27 )
    do
    if ( *(uint8_t *)(this + 20) )
    break;
    HashTable::RebuildEx((uint32_t *)this);
    while ( *(uint32_t *)(this + 8) > *(uint32_t *)(this + 48) );
    __3_YAXPAX_Z(*(void **)this);
}

void  HashTable::RemoveEntry(int this, const char *a2)
{
    int v3; // eax
    int v4; // esi
    const void *v5; // esi
    int v6; // eax
    int v7; // edx
    int v8; // esi
    int v9; // edi
    uint32_t *v10; // edi
    int v11; // ebp
    double v12; // st7
    bool v13; // c0
    bool v14; // c3
    int v15; // esi
    void *v16; // [esp+Ch] [ebp-310h] BYREF
    __int64 v17; // [esp+10h] [ebp-30Ch]
    uint32_t v18[193]; // [esp+18h] [ebp-304h] BYREF
    String::Assign((char **)&v16, a2);
    v3 = *(uint32_t *)(this + 4);
    v18[0] = 0;
    if ( !v3 )
    goto LABEL_24;
    v4 = *(uint32_t *)(*(uint32_t *)this
    + 4 * ((*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << *(uint32_t *)(this + 12)) - 1)));
    if ( !v4 )
    goto LABEL_24;
    while ( !String::Compare((const char **)v4, (const char **)&v16) )
    v4 = *(uint32_t *)(v4 + 776);
    if ( !v4 )
    goto LABEL_24;
    v5 = (const void *)(v4 + 4);
    if ( v5 )
    qmemcpy(v18, v5, sizeof(v18));
    v6 = *(uint32_t *)(this + 4);
    if ( v6 )
    v7 = *(uint32_t *)(this + 8);
    v17 = (unsigned int)(v6 - 1);
    *(float *)&v17 = (double)v17 / (double)v7;
    v8 = (*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << *(uint32_t *)(this + 12)) - 1);
    v9 = *(uint32_t *)(*(uint32_t *)this + 4 * v8);
    if ( v9 )
    if ( String::Compare((const char **)v9, (const char **)&v16) )
    v10 = *(uint32_t **)(*(uint32_t *)this + 4 * v8);
    v11 = v10[194];
    if ( v10 )
    DeleteAndZero(*(void ***)(*(uint32_t *)this + 4 * v8));
    __3_YAXPAX_Z(v10);
    v12 = *(float *)&v17;
    *(uint32_t *)(*(uint32_t *)this + 4 * v8) = v11;
    v13 = v12 < *(double *)(this + 32);
    v14 = v12 == *(double *)(this + 32);
    --*(uint32_t *)(this + 4);
    if ( !v13 && !v14 )
    goto LABEL_22;
    else
    v15 = *(uint32_t *)(v9 + 776);
    if ( v15 )
    while ( !String::Compare((const char **)v15, (const char **)&v16) )
    v9 = v15;
    v15 = *(uint32_t *)(v15 + 776);
    if ( !v15 )
    goto LABEL_20;
    *(uint32_t *)(v9 + 776) = *(uint32_t *)(v15 + 776);
    --*(uint32_t *)(this + 4);
    DeleteAndZero((void **)v15);
    __3_YAXPAX_Z((void *)v15);
    LABEL_20:
    if ( *(float *)&v17 > *(double *)(this + 32) )
    goto LABEL_22;
    HashTable::RebuildEx((uint32_t *)this);
    LABEL_22:
    if ( v18[0] )
    (**(void (__thiscall ***)(uint32_t, int))v18[0])(v18[0], 1);
    LABEL_24:
    DeleteAndZero(&v16);
}

