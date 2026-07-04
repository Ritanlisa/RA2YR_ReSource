#include "megawealth.hpp"

char Megawealth::_vt35()
{
    MapClass::ClearShroud(&MapClass_Instance, 0);
    return 1;
}

uint32_t * Megawealth::_vt00(uint32_t *Block, char a2)
{
    *Block = &Megawealth::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

