#include "vectorclass__n.hpp"

void  VectorClass__N::sub_50E700(int this)
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

int  VectorClass__N::sub_50E730(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return a2 - *(uint32_t *)(this + 4);
    else
    return 0;
}

char  VectorClass__N::_vt06(uint32_t *this, int a2)
{
    return *(uint8_t *)(*(this + 1) + a2);
}

char  VectorClass__N::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // eax
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    while ( *(uint8_t *)(*(this + 1) + v3) == *(uint8_t *)(*(uint32_t *)(a2 + 4) + v3) )
    if ( ++v3 >= v2 )
    return 1;
    return 0;
}

// 0x0050F9E0
char  VectorClass__N::Remove(void *this, signed int Size, char *a3)
{
    char *v4; // edi
    signed int v6; // ecx
    signed int i; // eax
    if ( Size )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = (char *)__2_YAPAXI_Z(Size);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( Size < v6 )
    v6 = Size;
    for ( i = 0; i < v6; v4[i - 1] = *(uint8_t *)(*((uint32_t *)this + 1) + i - 1) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = Size;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass__N::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass__N::_vt04(int this, uint8_t *a2)
{
    int result; // eax
    int v3; // esi
    int v4; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    v4 = *(uint32_t *)(this + 4);
    while ( *(uint8_t *)(v4 + result) != *a2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

// 0x0050FB00
int  VectorClass__N::Get(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return a2 - *(uint32_t *)(this + 4);
    else
    return 0;
}

char  VectorClass__N::sub_50FB20(void *this, signed int Size, char *a3)
{
    char *v4; // edi
    signed int v5; // ecx
    signed int i; // eax
    int v7; // eax
    if ( Size )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = (char *)__2_YAPAXI_Z(Size);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( Size < v5 )
    v5 = Size;
    for ( i = 0; i < v5; v4[i - 1] = *(uint8_t *)(*((uint32_t *)this + 1) + i - 1) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = Size;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  VectorClass__N::sub_50FBD0(int *this, uint8_t *a2)
{
    int v2; // esi
    int result; // eax
    int v4; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    v4 = *(this + 1);
    while ( *(uint8_t *)(v4 + result) != *a2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * VectorClass__N::Add(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<bool>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass__N::sub_5103B0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<bool>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

