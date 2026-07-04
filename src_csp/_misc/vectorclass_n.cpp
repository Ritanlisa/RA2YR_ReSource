#include "vectorclass_n.hpp"

void  VectorClass_N::sub_5AC5F0(int this)
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

unsigned int  VectorClass_N::sub_5AC620(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

double  VectorClass_N::_vt06(uint32_t *this, int a2)
{
    return *(double *)(*(this + 1) + 8 * a2);
}

char  VectorClass_N::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    double *v4; // edx
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(double **)(a2 + 4);
    v5 = *(this + 1) - (uint32_t)v4;
    while ( *(double *)((char *)v4 + v5) == *v4 )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_N::_vt02(void *this, int a2, uint32_t *a3)
{
    int v3; // ebx
    uint32_t *v5; // edi
    int v7; // ecx
    int v8; // eax
    int v9; // edx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( !a3 )
    v5 = __2_YAPAXI_Z(8 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v7 = *((uint32_t *)this + 2);
    if ( a2 < v7 )
    v7 = a2;
    v8 = 0;
    if ( v7 > 0 )
    do
    v9 = *((uint32_t *)this + 1);
    ++v8;
    v5[2 * v8 - 2] = *(uint32_t *)(v9 + 8 * v8 - 8);
    v5[2 * v8 - 1] = *(uint32_t *)(v9 + 8 * v8 - 4);
    while ( v8 < v7 );
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

void  VectorClass_N::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_N::_vt04(int this, double *a2)
{
    int v3; // esi
    int v4; // edx
    double *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    v4 = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(double **)(this + 4); *i != *a2; ++i )
    if ( ++v4 >= v3 )
    return -1;
    return v4;
}

unsigned int  VectorClass_N::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

char  VectorClass_N::sub_5AD290(void *this, int a2, uint32_t *a3)
{
    int v3; // ebx
    uint32_t *v5; // edi
    int v6; // ecx
    int v7; // eax
    int v8; // edx
    int v9; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( !a3 )
    v5 = __2_YAPAXI_Z(8 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    v7 = 0;
    if ( v6 > 0 )
    do
    v8 = *((uint32_t *)this + 1);
    ++v7;
    v5[2 * v7 - 2] = *(uint32_t *)(v8 + 8 * v7 - 8);
    v5[2 * v7 - 1] = *(uint32_t *)(v8 + 8 * v7 - 4);
    while ( v7 < v6 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v9 = *((uint32_t *)this + 2);
    if ( v9 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v9;
    return 1;
}

int  VectorClass_N::sub_5AD350(uint32_t *this, double *a2)
{
    int v2; // esi
    int v3; // edx
    double *i; // ecx
    v2 = *(this + 4);
    v3 = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (double *)*(this + 1); *i != *a2; ++i )
    if ( ++v3 >= v2 )
    return -1;
    return v3;
}

uint32_t * VectorClass_N::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<double>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass_N::sub_5AD610(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<double>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

