#include "wol.hpp"

void * WOL::_vt00(void *Block, char a2)
{
    SelectionInitializeWOL((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

