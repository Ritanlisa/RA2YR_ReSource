#include "straw.hpp"

int * Straw::_vt00(int *Block, char a2)
{
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

