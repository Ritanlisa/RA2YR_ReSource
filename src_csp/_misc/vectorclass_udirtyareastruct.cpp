#include "vectorclass_udirtyareastruct.hpp"

void  VectorClass_UDirtyAreaStruct::sub_6DC4E0(int this)
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

unsigned int  VectorClass_UDirtyAreaStruct::sub_6DC510(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x14u;
    else
    return 0;
}

int  VectorClass_UDirtyAreaStruct::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // ecx
    v3 = *(this + 1) + 20 * a3;
    *(uint32_t *)a2 = *(uint32_t *)v3;
    *(uint32_t *)(a2 + 4) = *(uint32_t *)(v3 + 4);
    *(uint32_t *)(a2 + 8) = *(uint32_t *)(v3 + 8);
    *(uint32_t *)(a2 + 12) = *(uint32_t *)(v3 + 12);
    *(uint8_t *)(a2 + 16) = *(uint8_t *)(v3 + 16);
    return a2;
}

void  VectorClass_UDirtyAreaStruct::sub_6DC580(int this)
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

unsigned int  VectorClass_UDirtyAreaStruct::sub_6DC5B0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  VectorClass_UDirtyAreaStruct::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // ebp
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = *(this + 1);
    v6 = v4 + 4;
    v7 = v4 - v5;
    while ( *(uint8_t *)(v5 + 16) == *(uint8_t *)(v6 + 12)
    && *(uint32_t *)v5 == *(uint32_t *)(v5 + v7)
    && *(uint32_t *)(v5 + 4) == *(uint32_t *)v6
    && *(uint32_t *)(v5 + 8) == *(uint32_t *)(v6 + 4)
    && *(uint32_t *)(v5 + 12) == *(uint32_t *)(v6 + 8) )
    ++v3;
    v6 += 20;
    v5 += 20;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_UDirtyAreaStruct::_vt02(void *this, int a2, char *a3)
{
    int v3; // esi
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v12; // edx
    int v13; // eax
    const void *v14; // esi
    char *v15; // edi
    char *v16; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 8;
    v10 = a2;
    do
    *((uint32_t *)v9 - 2) = 0;
    *((uint32_t *)v9 - 1) = 0;
    *(uint32_t *)v9 = 0;
    *((uint32_t *)v9 + 1) = 0;
    v9[8] = 0;
    v9 += 20;
    --v10;
    while ( v10 );
    v16 = a3;
    else
    v6 = (char *)__2_YAPAXI_Z(20 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 8;
    v8 = a2;
    do
    *((uint32_t *)v7 - 2) = 0;
    *((uint32_t *)v7 - 1) = 0;
    *(uint32_t *)v7 = 0;
    *((uint32_t *)v7 + 1) = 0;
    v7[8] = 0;
    v7 += 20;
    --v8;
    while ( v8 );
    v16 = v6;
    else
    v16 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v16 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
    v13 = 0;
    do
    v14 = (const void *)(*((uint32_t *)this + 1) + v13);
    v15 = &v16[v13];
    v13 += 20;
    --v12;
    qmemcpy(v15, v14, 0x14u);
    while ( v12 );
    v5 = a3;
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 2) = v3;
    *((uint32_t *)this + 1) = v16;
    *((uint8_t *)this + 13) = v5 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_UDirtyAreaStruct::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_UDirtyAreaStruct::_vt04(int this, int a2)
{
    int v3; // edi
    int v4; // esi
    int i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    v4 = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t *)(this + 4);
    *(uint8_t *)(i + 16) != *(uint8_t *)(a2 + 16)
    || *(uint32_t *)i != *(uint32_t *)a2
    || *(uint32_t *)(i + 4) != *(uint32_t *)(a2 + 4)
    || *(uint32_t *)(i + 8) != *(uint32_t *)(a2 + 8)
    || *(uint32_t *)(i + 12) != *(uint32_t *)(a2 + 12);
    i += 20 )
    if ( ++v4 >= v3 )
    return -1;
    return v4;
}

unsigned int  VectorClass_UDirtyAreaStruct::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x14u;
    else
    return 0;
}

char  VectorClass_UDirtyAreaStruct::sub_6DC850(void *this, int a2, char *a3)
{
    int v3; // edi
    char *v5; // esi
    int v6; // ebx
    char *v7; // ebx
    int v8; // ebx
    int v9; // edx
    int v10; // eax
    char *v11; // edi
    const void *v12; // esi
    int v13; // eax
    char *v15; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( !a2 )
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    goto LABEL_26;
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    Rect::Set(v5, 0, 0, 0, 0);
    v5[16] = 0;
    v5 += 20;
    --v8;
    while ( v8 );
    v5 = a3;
    goto LABEL_13;
    v5 = (char *)__2_YAPAXI_Z(20 * a2);
    v15 = v5;
    if ( v5 )
    if ( a2 - 1 >= 0 )
    v6 = a2;
    do
    Rect::Set(v5, 0, 0, 0, 0);
    v5[16] = 0;
    v5 += 20;
    --v6;
    while ( v6 );
    v5 = v15;
    LABEL_13:
    v7 = v5;
    goto LABEL_14;
    v7 = 0;
    LABEL_14:
    *((uint8_t *)this + 12) = 1;
    if ( !v7 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v9 = *((uint32_t *)this + 2);
    if ( a2 < v9 )
    v9 = a2;
    if ( v9 > 0 )
    v10 = 0;
    do
    v11 = &v7[v10];
    v12 = (const void *)(v10 + *((uint32_t *)this + 1));
    v10 += 20;
    --v9;
    qmemcpy(v11, v12, 0x14u);
    while ( v9 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v7;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    LABEL_26:
    v13 = *((uint32_t *)this + 2);
    if ( v13 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v13;
    return 1;
}

int  VectorClass_UDirtyAreaStruct::sub_6DC970(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int i; // ecx
    v2 = *(this + 4);
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = *(this + 1);
    *(uint8_t *)(i + 16) != *(uint8_t *)(a2 + 16)
    || *(uint32_t *)i != *(uint32_t *)a2
    || *(uint32_t *)(i + 4) != *(uint32_t *)(a2 + 4)
    || *(uint32_t *)(i + 8) != *(uint32_t *)(a2 + 8)
    || *(uint32_t *)(i + 12) != *(uint32_t *)(a2 + 12);
    i += 20 )
    if ( ++v3 >= v2 )
    return -1;
    return v3;
}

char  VectorClass_UDirtyAreaStruct::sub_6DCB50(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  VectorClass_UDirtyAreaStruct::sub_6DCC00(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * VectorClass_UDirtyAreaStruct::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<DirtyAreaStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass_UDirtyAreaStruct::sub_6DCD20(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ShadowControlClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

