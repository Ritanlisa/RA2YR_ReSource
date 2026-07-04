#include "multiplayerobserverteam.hpp"

bool __stdcall MultiplayerObserverTeam::_vt01(int a1)
{
    return PlayerClass::IsValidIndex(a1);
}

void ** MultiplayerObserverTeam::_vt00(void **Block, char a2)
{
    MultiplayerTeam::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

