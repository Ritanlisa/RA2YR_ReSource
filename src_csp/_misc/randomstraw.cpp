#include "randomstraw.hpp"

// 0x0065C8B0
int  RandomStraw::AdvanceState(int *this)
{
    int result; // eax
    int v2; // edi
    int v3; // esi
    int v4; // ebx
    int v5; // ecx
    result = *(this + 1);
    v2 = *this;
    *(this + 1) = result + 1;
    v3 = 0;
    do
    v4 = result;
    v5 = result ^ dword_839644[v3++];
    result = v2
    ^ ((unsigned __int16)v5 * (v5 >> 16)
    + (dword_839690[v3]
    ^ ((((unsigned __int16)v5 * (unsigned __int16)v5 + ~((v5 >> 16) * (v5 >> 16))) << 16)
    | (((unsigned __int16)v5 * (unsigned __int16)v5 + ~((v5 >> 16) * (v5 >> 16))) >> 16))));
    v2 = v4;
    while ( v3 < 4 );
    return result;
}

int  RandomStraw::_vt02(uint32_t *this, int a2, int a3)
{
    int v3; // ebx
    uint8_t *v4; // edi
    int v6; // eax
    v3 = a3;
    v4 = (uint8_t *)a2;
    if ( !a2 || a3 < 1 )
    return Delegate::Invoke(this, a2, a3);
    do
    v6 = *(this + 4);
    *(this + 4) = v6 + 1;
    *v4++ = RandomStraw::AdvanceState(this + 2 * v6 + 5);
    --v3;
    *(this + 4) &= 0x1Fu;
    while ( v3 );
    return a3;
}

int * RandomStraw::_vt00(int *Block, char a2)
{
    *Block = (int)&RandomStraw::`vftable';
    *(Block + 3) = 0;
    *(Block + 4) = 0;
    memset(Block + 5, 0, 0x100u);
    Straw::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

