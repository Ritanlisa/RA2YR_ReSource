#include "mapsizegameoption_worlddominationtour.hpp"

int __stdcall MapSizeGameOption_WorldDominationTour::_vt03(int a1)
{
    return dword_848628[4 * *(unsigned __int8 *)(*(uint32_t *)(a1 + 4) + 18)
    + *(unsigned __int8 *)(*(uint32_t *)(a1 + 4) + 19)];
}

uint32_t * MapSizeGameOption_WorldDominationTour::_vt00(uint32_t *Block, char a2)
{
    *Block = &WorldDominationTour::GameOption::`vftable';
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

