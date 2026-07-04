#include "graphicmenuitem_destru.hpp"

char __stdcall GraphicMenuItem_Destru::_vt02(int a1)
{
    return 0;
}

void *** GraphicMenuItem_Destru::_vt00(void ***Block, char a2)
{
    void **v3; // edi
    v3 = *(Block + 3);
    *Block = &GraphicMenuItem::`vftable';
    if ( v3 )
    j_DeleteAndZero(v3);
    __3_YAXPAX_Z(v3);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

