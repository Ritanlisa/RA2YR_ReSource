#include "carryoverclass.hpp"

uint32_t * CarryoverClass::_vt00(uint32_t *Block, char a2)
{
    LinkClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

