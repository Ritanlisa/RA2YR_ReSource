#include "lzostraw_destru.hpp"

int * LZOStraw_Destru::_vt00(int *Block, char a2)
{
    void *v3; // eax
    void *v4; // ecx
    v3 = (void *)*(Block + 5);
    *Block = (int)&LZOStraw::`vftable';
    __3_YAXPAX_Z(v3);
    v4 = (void *)*(Block + 6);
    *(Block + 5) = 0;
    __3_YAXPAX_Z(v4);
    *(Block + 6) = 0;
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

