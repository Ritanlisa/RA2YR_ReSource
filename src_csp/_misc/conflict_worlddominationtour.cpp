#include "conflict_worlddominationtour.hpp"

uint32_t * Conflict_WorldDominationTour::_vt00(uint32_t *Block, char a2)
{
    uint32_t *v3; // ecx
    v3 = Block + 2;
    *Block = &WorldDominationTour::Conflict::`vftable';
    *v3 = &rc_ptr<WDTTerritory>::`vftable';
    ComPtr::Release(v3);
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

