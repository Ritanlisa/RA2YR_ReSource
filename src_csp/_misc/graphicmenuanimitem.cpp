#include "graphicmenuanimitem.hpp"

void *** GraphicMenuAnimItem::_vt00(void ***Block, char a2)
{
    void (__thiscall ***v3)(uint32_t, int); // ecx
    v3 = (void (__thiscall ***)(uint32_t, int))*(Block + 9);
    *Block = &GraphicMenuAnimItem::`vftable';
    if ( v3 )
    (**v3)(v3, 1);
    GraphicMenuItem::Destructor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char __stdcall GraphicMenuAnimItem::_vt01(int a1)
{
    return 0;
}

