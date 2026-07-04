#include "vectorclass_uhashobject_uint_uint.hpp"

uint32_t * VectorClass_UHashObject_uint_uint::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    v3 = *(this + 1);
    v4 = *(uint32_t *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    a2[1] = *(uint32_t *)(v5 + 4);
    return a2;
}

char  VectorClass_UHashObject_uint_uint::_vt01(int *this, int a2)
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

char  VectorClass_UHashObject_uint_uint::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // ebx
    uint32_t *v5; // eax
    uint32_t *v6; // edi
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    if ( a2 )
    v4 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v6 = a3;
    else
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    v6 = v5;
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v6 )
    if ( *((uint32_t *)this + 1) )
    v8 = *((uint32_t *)this + 2);
    if ( a2 < v8 )
    v8 = a2;
    v9 = 0;
    if ( v8 > 0 )
    do
    v10 = *((uint32_t *)this + 1);
    ++v9;
    v6[2 * v9 - 2] = *(uint32_t *)(v10 + 8 * v9 - 8);
    v6[2 * v9 - 1] = *(uint32_t *)(v10 + 8 * v9 - 4);
    while ( v9 < v8 );
    v4 = a3;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = v4 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_UHashObject_uint_uint::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_UHashObject_uint_uint::_vt04(int this, uint32_t *a2)
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

unsigned int  VectorClass_UHashObject_uint_uint::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * VectorClass_UHashObject_uint_uint::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

