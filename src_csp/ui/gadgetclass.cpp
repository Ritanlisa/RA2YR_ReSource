#include "gadgetclass.hpp"

uint32_t * GadgetClass::_vt00(uint32_t *Block, char a2)
{
    uint32_t *v3; // eax
    int v4; // eax
    *Block = &GadgetClass::`vftable';
    v3 = (uint32_t *)dword_8B3E90;
    if ( Block == (uint32_t *)dword_8B3E90 )
    v4 = *(Block + 8);
    BYTE1(v4) &= ~1u;
    *(Block + 8) = v4;
    v3 = 0;
    dword_8B3E90 = 0;
    if ( Block == (uint32_t *)dword_8B3E88 )
    dword_8B3E88 = 0;
    if ( Block == (uint32_t *)dword_8B3E8C )
    dword_8B3E8C = 0;
    if ( Block == v3 )
    dword_8B3E90 = 0;
    LinkClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

