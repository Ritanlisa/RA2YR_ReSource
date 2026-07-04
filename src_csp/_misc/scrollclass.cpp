#include "scrollclass.hpp"

int  ScrollClass::_vt10(int *this, int *a2, uint32_t *a3)
{
    TacticalClass::ProcessView(this);
    return BlowStraw_29_::Seek(this, a2, a3);
}

char * ScrollClass::_vt04(char *Block, char a2)
{
    char *v3; // esi
    int v4; // edi
    v3 = Block + 21484;
    v4 = 4;
    do
    v3 -= 3988;
    Array::ForEachReverse((int)v3, 52, 75, (int (__thiscall *)(int))nullsub_56);
    --v4;
    while ( v4 );
    RadarClass::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

