#include "map_worlddominationtour.hpp"

void * Map_WorldDominationTour::_vt00(void *Block, char a2)
{
    WorldDomination::SetupTerritoryNodes((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

