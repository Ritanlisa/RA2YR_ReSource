#include "wdtstate.hpp"

void * WDTState::_vt00(void *Block, char a2)
{
    WDTState::Constructor_WDTState((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

