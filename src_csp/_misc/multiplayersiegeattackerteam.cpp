#include "multiplayersiegeattackerteam.hpp"

void ** MultiplayerSiegeAttackerTeam::_vt00(void **Block, char a2)
{
    *Block = &MultiplayerSiegeAttackerTeam::`vftable';
    MultiplayerTeam::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

