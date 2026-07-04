#include "blittranslucent50alpha_ushort.hpp"

int  BlitTransLucent50Alpha_ushort::_vt03(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, uint32_t))(*(uint32_t *)this + 4))(
    this,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    0);
}

uint32_t * BlitTransLucent50Alpha_ushort::Blit(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 2);
    *Block = &BlitTransLucent50Alpha<unsigned short>::`vftable';
    FractalNoise::Release(v3);
    *(Block + 2) = 0;
    *Block = &Blitter::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

