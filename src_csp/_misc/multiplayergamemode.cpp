#include "multiplayergamemode.hpp"

char * MultiplayerGameMode::_vt00(char *Block, char a2)
{
    int v3; // edi
    void (__thiscall ***v4)(uint32_t, int); // ecx
    void (__thiscall ***v5)(uint32_t, int); // ecx
    void *v6; // eax
    v3 = 0;
    for ( *(uint32_t *)Block = &MultiplayerGameMode::`vftable'; v3 < *((uint32_t *)Block + 6); ++v3 )
    v4 = *(void (__thiscall ****)(uint32_t, int))(*((uint32_t *)Block + 3) + 4 * v3);
    if ( v4 )
    (**v4)(v4, 1);
    (*(void (__thiscall **)(char *))(*((uint32_t *)Block + 2) + 12))(Block + 8);
    v5 = (void (__thiscall ***)(uint32_t, int))*((uint32_t *)Block + 14);
    if ( v5 )
    (**v5)(v5, 1);
    DeleteAndZero((void **)Block + 12);
    DeleteAndZero((void **)Block + 11);
    DeleteAndZero::Alt((void **)Block + 9);
    DeleteAndZero::Alt((void **)Block + 8);
    v6 = (void *)*((uint32_t *)Block + 3);
    *((uint32_t *)Block + 2) = &VectorClass<MultiplayerTeam *>::`vftable';
    if ( v6 && *(Block + 21) )
    __3_YAXPAX_Z(v6);
    *((uint32_t *)Block + 3) = 0;
    *(Block + 21) = 0;
    *((uint32_t *)Block + 4) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

