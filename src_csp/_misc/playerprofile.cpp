#include "playerprofile.hpp"

void ** PlayerProfile::_vt00(void **Block, char a2)
{
    *Block = &PlayerProfile::`vftable';
    DeleteAndZero::Alt(Block + 16);
    DeleteAndZero::Alt(Block + 15);
    DeleteAndZero(Block + 3);
    ReferenceCounted::Constructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

