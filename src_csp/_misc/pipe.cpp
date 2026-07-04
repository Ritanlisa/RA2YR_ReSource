#include "pipe.hpp"

int * Pipe::_vt00(int *Block, char a2)
{
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x007B7D80
int  Pipe::GetField(const wchar_t **this)
{
    return wcstol(*this, 0, 10);
}

