#include "unknown.hpp"

void  unknown::_vt03(int this)
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

unsigned int  unknown::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

int  unknown::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // edx
    v3 = *(this + 1) + 16 * a3;
    *(uint32_t *)a2 = *(uint32_t *)v3;
    *(uint32_t *)(a2 + 4) = *(uint32_t *)(v3 + 4);
    *(uint8_t *)(a2 + 8) = *(uint8_t *)(v3 + 8);
    *(uint32_t *)(a2 + 12) = *(uint32_t *)(v3 + 12);
    return a2;
}

char  unknown::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    _WORD *v5; // eax
    _WORD *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (_WORD *)*(this + 1);
    v6 = (_WORD *)(v4 + 2);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(_WORD *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] && v5[3] == v6[2] )
    ++v3;
    v6 += 8;
    v5 += 8;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  unknown::_vt02(void *this, int a2, _WORD *a3)
{
    int v3; // ebx
    _WORD *v5; // esi
    _WORD *v6; // ebp
    char *v7; // esi
    int v8; // ebp
    int v9; // ecx
    int v10; // eax
    uint32_t *v11; // ebx
    uint32_t *v12; // edx
    int v13; // eax
    v3 = a2;
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v7 = (char *)(a3 + 2);
    v8 = a2;
    do
    *((_WORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 1) = 0;
    CellStruct::Set(v7, 0, 0);
    v7[4] = 0;
    *((uint32_t *)v7 + 2) = -1;
    v7 += 16;
    --v8;
    while ( v8 );
    v5 = a3;
    else
    v5 = __2_YAPAXI_Z(16 * a2);
    if ( v5 )
    v6 = v5;
    if ( a2 - 1 >= 0 )
    do
    unknown::Init(v6);
    v6 += 8;
    --v3;
    while ( v3 );
    v3 = a2;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v9 = *((uint32_t *)this + 2);
    if ( v3 < v9 )
    v9 = v3;
    if ( v9 > 0 )
    v10 = 0;
    do
    v11 = &v5[v10];
    v12 = (uint32_t *)(v10 * 2 + *((uint32_t *)this + 1));
    v10 += 8;
    --v9;
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    while ( v9 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v13 = *((uint32_t *)this + 2);
    if ( v13 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v13;
    return 1;
}

int  unknown::_vt04(int *this, _WORD *a2)
{
    int v2; // esi
    int result; // eax
    _WORD *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (_WORD *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 8 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * unknown::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ZoneConnectionClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

