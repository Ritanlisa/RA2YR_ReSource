#include "blittranszremapxlatalphazreadwrite_ushort.hpp"

uint32_t * BlitTransZRemapXlatAlphaZReadWrite_ushort::Blit(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 3);
    *Block = &BlitTransZRemapXlatAlphaZReadWrite<unsigned short>::`vftable';
    FractalNoise::Release(v3);
    *(Block + 3) = 0;
    *Block = &Blitter::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

