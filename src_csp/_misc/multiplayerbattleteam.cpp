#include "multiplayerbattleteam.hpp"

bool __stdcall MultiplayerBattleTeam::_vt01(int a1)
{
    return PlayerClass::IsValidIndex(a1);
}

bool  MultiplayerBattleTeam::_vt02(uint32_t *this, int a2)
{
    return PlayerClass::SetHouse(this, a2) != 0;
}

void ** MultiplayerBattleTeam::_vt00(void **Block, char a2)
{
    MultiplayerTeam::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

