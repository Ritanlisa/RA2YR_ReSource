#include "multiplayersiegedefenderteam.hpp"

char __stdcall MultiplayerSiegeDefenderTeam::_vt01(int a1)
{
    int v1; // ecx
    char result; // al
    int i; // esi
    v1 = 0;
    result = 1;
    if ( Game_PlayerCount > 0 )
    for ( i = Game_PlayerInfoArray; a1 == v1 || *(uint32_t *)(*(uint32_t *)i + 107) != 1; i += 4 )
    if ( ++v1 >= Game_PlayerCount )
    return result;
    return 0;
    return result;
}

void ** MultiplayerSiegeDefenderTeam::_vt00(void **Block, char a2)
{
    *Block = &MultiplayerSiegeDefenderTeam::`vftable';
    MultiplayerTeam::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

