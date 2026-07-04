#include "vectorclass_usubzonetrackingstruct.hpp"

int  VectorClass_USubzoneTrackingStruct::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // ebp
    int v4; // edi
    char *v5; // eax
    char *v6; // ecx
    int v7; // edx
    int v8; // ecx
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    v3 = *(this + 1) + 36 * a3;
    *(uint32_t *)(a2 + 4) = 0;
    *(uint32_t *)(a2 + 8) = 0;
    *(uint8_t *)(a2 + 12) = 1;
    *(uint8_t *)(a2 + 13) = 0;
    *(uint32_t *)a2 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( a2 != v3 )
    VectorClass::Cleanup5(a2);
    v4 = *(uint32_t *)(v3 + 8);
    *(uint32_t *)(a2 + 8) = v4;
    if ( v4 )
    v5 = (char *)__2_YAPAXI_Z(8 * v4);
    if ( v5 )
    v6 = v5;
    if ( v4 - 1 >= 0 )
    v7 = v4;
    do
    *(uint32_t *)v6 = 0;
    v6[4] = 0;
    v6 += 8;
    --v7;
    while ( v7 );
    else
    v5 = 0;
    *(uint32_t *)(a2 + 4) = v5;
    if ( v5 )
    v8 = *(uint32_t *)(a2 + 8);
    v9 = 0;
    *(uint8_t *)(a2 + 13) = 1;
    if ( v8 > 0 )
    do
    v10 = *(uint32_t *)(v3 + 4);
    v11 = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(v11 + 8 * v9) = *(uint32_t *)(v10 + 8 * v9);
    *(uint32_t *)(v11 + 8 * v9 + 4) = *(uint32_t *)(v10 + 8 * v9 + 4);
    ++v9;
    while ( v9 < *(uint32_t *)(a2 + 8) );
    else
    *(uint32_t *)(a2 + 4) = 0;
    *(uint8_t *)(a2 + 13) = 0;
    *(uint32_t *)(a2 + 16) = *(uint32_t *)(v3 + 16);
    *(uint32_t *)(a2 + 20) = *(uint32_t *)(v3 + 20);
    *(uint32_t *)a2 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable';
    *(_WORD *)(a2 + 24) = *(_WORD *)(v3 + 24);
    *(uint32_t *)(a2 + 28) = *(uint32_t *)(v3 + 28);
    *(uint32_t *)(a2 + 32) = *(uint32_t *)(v3 + 32);
    return a2;
}

char  VectorClass_USubzoneTrackingStruct::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    uint32_t *i; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)(*(uint32_t *)(a2 + 4) + 28);
    for ( i = (uint32_t *)(*(this + 1) + 28); *((_WORD *)i - 2) == *((_WORD *)v4 - 2) && *i == *v4; i += 9 )
    ++v3;
    v4 += 9;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_USubzoneTrackingStruct::_vt02(uint8_t *this, int a2, int *a3)
{
    int v3; // edi
    uint8_t *v4; // ebp
    int *v5; // eax
    uint32_t *v6; // esi
    uint32_t *v7; // esi
    uint32_t *v8; // ecx
    int v10; // eax
    uint32_t *v11; // edi
    int v12; // esi
    int v13; // esi
    int v14; // eax
    void *v15; // ecx
    int v16; // edx
    int v17; // eax
    int v18; // esi
    void *v19; // eax
    uint32_t *v20; // [esp+10h] [ebp-Ch]
    uint32_t *v22; // [esp+18h] [ebp-4h]
    int v23; // [esp+18h] [ebp-4h]
    void *v24; // [esp+18h] [ebp-4h]
    int v25; // [esp+20h] [ebp+4h]
    v3 = a2;
    v4 = this;
    if ( a2 )
    *(this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v7 = a3 + 1;
    if ( a2 - 1 >= 0 )
    do
    VectorClass::ConstructSubzone(v7, 0, 0);
    *v7 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable';
    v7[5] = 10;
    v7[4] = 0;
    (*(void (__thiscall **)(uint32_t *))(*v7 + 12))(v7);
    *((_WORD *)v7 + 12) = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7 += 9;
    --v3;
    while ( v3 );
    v3 = a2;
    v4 = this;
    v20 = a3 + 1;
    else
    v5 = (int *)__2_YAPAXI_Z(36 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v22 = v5 + 1;
    if ( a2 - 1 >= 0 )
    do
    VectorClass::ConstructSubzone(v6, 0, 0);
    *v6 = &DynamicVectorClass<SubzoneConnectionStruct>::`vftable';
    v6[5] = 10;
    v6[4] = 0;
    (*(void (__thiscall **)(uint32_t *))(*v6 + 12))(v6);
    *((_WORD *)v6 + 12) = 0;
    v6[7] = 0;
    v6[8] = 0;
    v6 += 9;
    --v3;
    while ( v3 );
    v3 = a2;
    v6 = v22;
    v4 = this;
    v20 = v6;
    else
    v20 = 0;
    v8 = v20;
    v4[12] = 1;
    if ( v20 )
    if ( *((uint32_t *)v4 + 1) )
    v10 = *((uint32_t *)v4 + 2);
    if ( v3 < v10 )
    v10 = v3;
    if ( v10 > 0 )
    v11 = v20 + 5;
    v23 = v10;
    do
    v12 = (int)v11 + *((uint32_t *)this + 1) + -20 - (uint32_t)v20;
    VectorClass_USubzoneTrackingStruct::SetCapacity(v11 - 5, (uint32_t *)v12);
    *(v11 - 1) = *(uint32_t *)(v12 + 16);
    *v11 = *(uint32_t *)(v12 + 20);
    *((_WORD *)v11 + 2) = *(_WORD *)(v12 + 24);
    v11[2] = *(uint32_t *)(v12 + 28);
    v11[3] = *(uint32_t *)(v12 + 32);
    v11 += 9;
    --v23;
    while ( v23 );
    v3 = a2;
    v4 = this;
    if ( v4[13] )
    v13 = *((uint32_t *)v4 + 1);
    if ( v13 )
    v14 = *(uint32_t *)(v13 - 4);
    v15 = (void *)(v13 - 4);
    v24 = (void *)(v13 - 4);
    v16 = 9 * v14;
    v17 = v14 - 1;
    v18 = v13 + 4 * v16;
    if ( v17 >= 0 )
    v25 = v17 + 1;
    do
    v19 = *(void **)(v18 - 32);
    v18 -= 36;
    *(uint32_t *)v18 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( v19 )
    if ( *(uint8_t *)(v18 + 13) )
    __3_YAXPAX_Z(v19);
    *(uint32_t *)(v18 + 4) = 0;
    *(uint8_t *)(v18 + 13) = 0;
    *(uint32_t *)(v18 + 8) = 0;
    --v25;
    while ( v25 );
    v15 = v24;
    __3_YAXPAX_Z(v15);
    *((uint32_t *)v4 + 1) = 0;
    v8 = v20;
    *((uint32_t *)v4 + 1) = v8;
    *((uint32_t *)v4 + 2) = v3;
    v4[13] = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_USubzoneTrackingStruct::_vt03(int this)
{
    int v2; // ecx
    int v3; // eax
    void *v4; // edx
    int v5; // esi
    int v6; // eax
    int v7; // esi
    int v8; // ebp
    void *v9; // eax
    void *v10; // [esp+8h] [ebp-4h]
    v2 = *(uint32_t *)(this + 4);
    if ( v2 && *(uint8_t *)(this + 13) )
    v3 = *(uint32_t *)(v2 - 4);
    v4 = (void *)(v2 - 4);
    v10 = (void *)(v2 - 4);
    v5 = 9 * v3;
    v6 = v3 - 1;
    v7 = v2 + 4 * v5;
    if ( v6 >= 0 )
    v8 = v6 + 1;
    do
    v9 = *(void **)(v7 - 32);
    v7 -= 36;
    *(uint32_t *)v7 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( v9 && *(uint8_t *)(v7 + 13) )
    __3_YAXPAX_Z(v9);
    *(uint32_t *)(v7 + 4) = 0;
    --v8;
    *(uint8_t *)(v7 + 13) = 0;
    *(uint32_t *)(v7 + 8) = 0;
    while ( v8 );
    v4 = v10;
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_USubzoneTrackingStruct::_vt04(int this, int a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = (uint32_t *)(*(uint32_t *)(this + 4) + 28);
    *((_WORD *)i - 2) != *(_WORD *)(a2 + 24) || *i != *(uint32_t *)(a2 + 28);
    i += 9 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_USubzoneTrackingStruct::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x24u;
    else
    return 0;
}

uint32_t * VectorClass_USubzoneTrackingStruct::_vt00(uint32_t *Block, char a2)
{
    int v3; // ecx
    int v4; // eax
    void *v5; // edx
    int v6; // esi
    int v7; // eax
    int v8; // esi
    int v9; // ebp
    void *v10; // eax
    void *v12; // [esp+8h] [ebp-4h]
    v3 = *(Block + 1);
    *Block = &VectorClass<SubzoneTrackingStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    v4 = *(uint32_t *)(v3 - 4);
    v5 = (void *)(v3 - 4);
    v12 = (void *)(v3 - 4);
    v6 = 9 * v4;
    v7 = v4 - 1;
    v8 = v3 + 4 * v6;
    if ( v7 >= 0 )
    v9 = v7 + 1;
    do
    v10 = *(void **)(v8 - 32);
    v8 -= 36;
    *(uint32_t *)v8 = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( v10 && *(uint8_t *)(v8 + 13) )
    __3_YAXPAX_Z(v10);
    *(uint32_t *)(v8 + 4) = 0;
    --v9;
    *(uint8_t *)(v8 + 13) = 0;
    *(uint32_t *)(v8 + 8) = 0;
    while ( v9 );
    v5 = v12;
    __3_YAXPAX_Z(v5);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

