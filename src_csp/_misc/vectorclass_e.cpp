#include "vectorclass_e.hpp"

char  VectorClass_E::_vt06(uint32_t *this, int a2)
{
    return *(uint8_t *)(*(this + 1) + a2);
}

uint32_t * VectorClass_E::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<unsigned char>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  VectorClass_E::_vt01(int *this, int a2)
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

char  VectorClass_E::_vt02(void *this, signed int Size, char *a3)
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

void  VectorClass_E::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_E::_vt04(int this, uint8_t *a2)
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

int  VectorClass_E::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return a2 - *(uint32_t *)(this + 4);
    else
    return 0;
}

