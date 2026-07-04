#include "vectorclass_point2d.hpp"

// 0x005D05F0
uint32_t * VectorClass_Point2D::Count(uint32_t *this, uint32_t *a2, int a3)
{
    int v3; // edx
    v3 = *(this + 1);
    *a2 = *(uint32_t *)(v3 + 8 * a3);
    a2[1] = *(uint32_t *)(v3 + 8 * a3 + 4);
    return a2;
}

// 0x005D07F0
char  VectorClass_Point2D::Get(int *this, int a2)
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
    v6 = (uint32_t *)(v4 + 4);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *v6 )
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_Point2D::_vt02(void *this, int a2, uint32_t *a3)
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

// 0x005D0920
void  VectorClass_Point2D::Set(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_Point2D::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_Point2D::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * VectorClass_Point2D::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<Point2D>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  VectorClass_Point2D::sub_5D2780(int this)
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

unsigned int  VectorClass_Point2D::sub_5D27B0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  VectorClass_Point2D::sub_5D2BC0(void *this, int a2, uint32_t *a3)
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

int  VectorClass_Point2D::sub_5D2C70(int *this, uint32_t *a2)
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

uint32_t * VectorClass_Point2D::sub_5D2D90(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<MSSfx *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

