#include "swizzlemanagerclass_19_.hpp"

void  SwizzleManagerClass_19_::sub_6CF4F0(int this)
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

unsigned int  SwizzleManagerClass_19_::sub_6CF520(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * SwizzleManagerClass_19_::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    int v3; // edx
    v3 = *(this + 1);
    *a2 = *(uint32_t *)(v3 + 8 * a3);
    a2[1] = *(uint32_t *)(v3 + 8 * a3 + 4);
    return a2;
}

char  SwizzleManagerClass_19_::_vt01(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  SwizzleManagerClass_19_::_vt02(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // esi
    uint32_t *v6; // eax
    uint32_t *v7; // ecx
    int v8; // edx
    uint32_t *v9; // eax
    int v10; // ecx
    int v12; // edx
    int v13; // ecx
    int v14; // eax
    uint32_t *v15; // ebx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v9 = a3;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    *v9 = 0;
    v9[1] = 0;
    v9 += 2;
    --v10;
    while ( v10 );
    else
    v6 = __2_YAPAXI_Z(8 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *v7 = 0;
    v7[1] = 0;
    v7 += 2;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
    do
    v14 = 2 * v13;
    v15 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v13++);
    v5[v14] = *v15;
    v5[v14 + 1] = v15[1];
    while ( v13 < v12 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  SwizzleManagerClass_19_::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  SwizzleManagerClass_19_::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2; i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  SwizzleManagerClass_19_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

char  SwizzleManagerClass_19_::sub_6CF720(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // edi
    uint32_t *v6; // eax
    uint32_t *v7; // ecx
    int v8; // edx
    uint32_t *v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // ebx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v9 = a3;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    *v9 = 0;
    v9[1] = 0;
    v9 += 2;
    --v10;
    while ( v10 );
    else
    v6 = __2_YAPAXI_Z(8 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *v7 = 0;
    v7[1] = 0;
    v7 += 2;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    v12 = 0;
    if ( v11 > 0 )
    do
    v13 = 2 * v12;
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v12++);
    v5[v13] = *v14;
    v5[v13 + 1] = v14[1];
    while ( v12 < v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  SwizzleManagerClass_19_::sub_6CF820(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * SwizzleManagerClass_19_::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SwizzlePointerClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * SwizzleManagerClass_19_::sub_6CF8A0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SwizzlePointerClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

