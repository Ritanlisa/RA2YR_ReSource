#include "editclass.hpp"

uint32_t * EditClass::_vt00(uint32_t *Block, char a2)
{
    DropListClass::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

