#include "vectorclass_cell.hpp"

char  VectorClass_Cell::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // eax
    uint32_t *v5; // edi
    int v7; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v5 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    if ( v4 )
    v5 = v4;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v7 = *((uint32_t *)this + 2);
    if ( a2 < v7 )
    v7 = a2;
    for ( i = 0; i < v7; v5[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

int  VectorClass_Cell::_vt04(int this, _WORD *a2)
{
    int result; // eax
    int v3; // edx
    _WORD *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(_WORD **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_Cell::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * VectorClass_Cell::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<Cell>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

