#include "unholyalliance.hpp"

char UnholyAlliance::_vt04()
{
    Bases = 1;
    return 1;
}

char UnholyAlliance::_vt06()
{
    Bases = 1;
    return 1;
}

uint32_t * UnholyAlliance::_vt00(uint32_t *Block, char a2)
{
    *Block = &UnholyAlliance::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

