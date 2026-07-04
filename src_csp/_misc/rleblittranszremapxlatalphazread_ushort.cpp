#include "rleblittranszremapxlatalphazread_ushort.hpp"

uint32_t * RLEBlitTransZRemapXlatAlphaZRead_ushort::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 3);
    *Block = &RLEBlitTransZRemapXlatAlphaZRead<unsigned short>::`vftable';
    FractalNoise::Release(v3);
    *(Block + 3) = 0;
    *Block = &RLEBlitter::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

