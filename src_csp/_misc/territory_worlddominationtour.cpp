#include "territory_worlddominationtour.hpp"

void ** Territory_WorldDominationTour::_vt00(void **Block, char a2)
{
    *Block = &WorldDominationTour::Territory::`vftable';
    DeleteAndZero(Block + 8);
    DeleteAndZero::Alt(Block + 3);
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

