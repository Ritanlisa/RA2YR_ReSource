#include "counterclass.hpp"

int  CounterClass::_vt03(uint32_t *this)
{
    int result; // eax
    for ( result = 0; result < *(this + 2); *(uint32_t *)(*(this + 1) + 4 * result - 4) = 0 )
    ++result;
    *(this + 4) = 0;
    return result;
}

uint32_t * CounterClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<int>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

