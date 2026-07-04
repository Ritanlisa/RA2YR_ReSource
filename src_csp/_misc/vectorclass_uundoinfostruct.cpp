#include "vectorclass_uundoinfostruct.hpp"

void  VectorClass_UUndoInfoStruct::sub_6B43B0(int this)
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

unsigned int  VectorClass_UUndoInfoStruct::sub_6B43E0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

uint32_t * VectorClass_UUndoInfoStruct::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // edx
    v3 = (uint32_t *)(*(this + 1) + 12 * a3);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    return a2;
}

char  VectorClass_UUndoInfoStruct::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint32_t *)*(this + 1);
    v6 = (uint32_t *)(v4 + 8);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 )
    ++v3;
    v6 += 3;
    v5 += 3;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_UUndoInfoStruct::_vt02(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    uint32_t *v8; // edi
    int v9; // ecx
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // ebx
    uint32_t *v14; // edx
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a2;
    do
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5 += 3;
    --v9;
    while ( v9 );
    v5 = a3;
    else
    v5 = __2_YAPAXI_Z(12 * a2);
    if ( !v5 )
    v8 = 0;
    goto LABEL_14;
    v6 = v5;
    if ( a2 - 1 >= 0 )
    v7 = a2;
    do
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6 += 3;
    --v7;
    while ( v7 );
    v8 = v5;
    LABEL_14:
    *((uint8_t *)this + 12) = 1;
    if ( !v8 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
    v12 = 0;
    do
    v13 = &v8[v12];
    v14 = (uint32_t *)(v12 * 4 + *((uint32_t *)this + 1));
    v12 += 3;
    --v11;
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    while ( v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v8;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
}

void  VectorClass_UUndoInfoStruct::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_UUndoInfoStruct::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_UUndoInfoStruct::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

char  VectorClass_UUndoInfoStruct::sub_6B4650(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    uint32_t *v8; // edi
    int v9; // ecx
    int v10; // ecx
    int v11; // eax
    uint32_t *v12; // ebx
    uint32_t *v13; // edx
    int v14; // eax
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    goto LABEL_26;
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a2;
    do
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5 += 3;
    --v9;
    while ( v9 );
    v5 = a3;
    goto LABEL_13;
    v5 = __2_YAPAXI_Z(12 * a2);
    if ( v5 )
    v6 = v5;
    if ( a2 - 1 >= 0 )
    v7 = a2;
    do
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6 += 3;
    --v7;
    while ( v7 );
    LABEL_13:
    v8 = v5;
    goto LABEL_14;
    v8 = 0;
    LABEL_14:
    *((uint8_t *)this + 12) = 1;
    if ( !v8 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v10 = *((uint32_t *)this + 2);
    if ( a2 < v10 )
    v10 = a2;
    if ( v10 > 0 )
    v11 = 0;
    do
    v12 = &v8[v11];
    v13 = (uint32_t *)(v11 * 4 + *((uint32_t *)this + 1));
    v11 += 3;
    --v10;
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    while ( v10 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v8;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    LABEL_26:
    v14 = *((uint32_t *)this + 2);
    if ( v14 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v14;
    return 1;
}

int  VectorClass_UUndoInfoStruct::sub_6B4760(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * VectorClass_UUndoInfoStruct::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<UndoInfoStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass_UUndoInfoStruct::sub_6B47F0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<UndoInfoStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

