#include "vectorclass_uscoutstruct.hpp"

int  VectorClass_UScoutStruct::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    v3 = *(this + 1);
    v4 = *(uint32_t *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *(uint32_t *)a2 = v4;
    *(uint8_t *)(a2 + 4) = *(uint8_t *)(v5 + 4);
    return a2;
}

char  VectorClass_UScoutStruct::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    int v5; // eax
    uint8_t *v6; // ecx
    int v7; // ebp
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = *(this + 1);
    v6 = (uint8_t *)(v4 + 4);
    v7 = v4 - v5;
    while ( *(uint32_t *)v5 == *(uint32_t *)(v5 + v7) && *(uint8_t *)(v5 + 4) == *v6 )
    ++v3;
    v6 += 8;
    v5 += 8;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_UScoutStruct::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // esi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
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
    *(uint32_t *)v9 = 0;
    v9[4] = 0;
    v9 += 8;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(8 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *(uint32_t *)v7 = 0;
    v7[4] = 0;
    v7 += 8;
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
    v14 = 8 * v13;
    v15 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v13++);
    *(uint32_t *)&v5[v14] = *v15;
    *(uint32_t *)&v5[v14 + 4] = v15[1];
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

void  VectorClass_UScoutStruct::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_UScoutStruct::_vt04(int this, int a2)
{
    int result; // eax
    int v3; // esi
    int i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t *)(this + 4); *(uint32_t *)i != *(uint32_t *)a2 || *(uint8_t *)(i + 4) != *(uint8_t *)(a2 + 4); i += 8 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_UScoutStruct::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * VectorClass_UScoutStruct::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ScoutStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

