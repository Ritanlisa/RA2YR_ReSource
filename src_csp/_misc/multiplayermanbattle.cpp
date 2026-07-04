#include "multiplayermanbattle.hpp"

uint32_t * MultiplayerManBattle::_vt00(uint32_t *Block, char a2)
{
    *Block = &MultiplayerManBattle::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

