#include "wonlinestringdialogcontrol.hpp"

void ** WonlineStringDialogControl::_vt00(void **Block, char a2)
{
    *Block = &WonlineStringDialogControl::`vftable';
    DeleteAndZero(Block + 3);
    *Block = &off_7F7624;
    OwnerDrawControl::InitVtable(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

