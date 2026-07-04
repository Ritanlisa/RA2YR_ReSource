#include "vectorclass_uhashobject_uint_subzoneconn.hpp"

int  VectorClass_UHashObject_uint_SubzoneConn::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // ecx
    int v4; // edx
    int v5; // ecx
    v3 = *(this + 1);
    v4 = *(uint32_t *)(v3 + 12 * a3);
    v5 = v3 + 12 * a3;
    *(uint32_t *)a2 = v4;
    *(uint32_t *)(a2 + 4) = *(uint32_t *)(v5 + 4);
    *(uint8_t *)(a2 + 8) = *(uint8_t *)(v5 + 8);
    return a2;
}

char  VectorClass_UHashObject_uint_SubzoneConn::_vt01(int *this, int a2)
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
    v4 += 3;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_UHashObject_uint_SubzoneConn::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    char *v14; // ebx
    uint32_t *v15; // edx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 4;
    v10 = a2;
    do
    *(uint32_t *)v9 = 0;
    v9[4] = 0;
    v9 += 12;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(12 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 4;
    v8 = a2;
    do
    *(uint32_t *)v7 = 0;
    v7[4] = 0;
    v7 += 12;
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
    if ( v12 > 0 )
    v13 = 0;
    do
    v14 = &v5[v13];
    v15 = (uint32_t *)(v13 + *((uint32_t *)this + 1));
    v13 += 12;
    --v12;
    *(uint32_t *)v14 = *v15;
    *((uint32_t *)v14 + 1) = v15[1];
    *((uint32_t *)v14 + 2) = v15[2];
    while ( v12 );
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

void  VectorClass_UHashObject_uint_SubzoneConn::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_UHashObject_uint_SubzoneConn::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2; i += 3 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_UHashObject_uint_SubzoneConn::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

uint32_t * VectorClass_UHashObject_uint_SubzoneConn::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

