#include "toggleclass.hpp"

uint32_t * ToggleClass::_vt00(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

