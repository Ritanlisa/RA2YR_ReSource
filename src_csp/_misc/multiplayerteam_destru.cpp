#include "multiplayerteam_destru.hpp"

void ** MultiplayerTeam_Destru::_vt00(void **Block, char a2)
{
    *Block = &MultiplayerTeam::`vftable';
    DeleteAndZero::Alt(Block + 1);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

