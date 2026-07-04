#include "blowstraw.hpp"

void * BlowStraw::sub_5B4630(void *Block, char a2)
{
    void *v3; // eax
    void *v4; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // ecx
    int v8; // eax
    v3 = (void *)*((uint32_t *)Block + 3);
    *(uint32_t *)Block = &MixFileClass::`vftable';
    if ( v3 )
    free(v3);
    if ( *((uint32_t *)Block + 9) && *((uint8_t *)Block + 18) )
    __3_YAXPAX_Z(*((void **)Block + 9));
    *((uint8_t *)Block + 18) = 0;
    v4 = (void *)*((uint32_t *)Block + 8);
    *((uint32_t *)Block + 9) = 0;
    if ( v4 )
    __3_YAXPAX_Z(v4);
    *((uint32_t *)Block + 8) = 0;
    if ( Block )
    v5 = *((uint32_t *)Block + 1);
    if ( v5 )
    v6 = *((uint32_t *)Block + 2);
    if ( v6 )
    *(uint32_t *)(v6 + 4) = v5;
    *(uint32_t *)(*((uint32_t *)Block + 1) + 8) = *((uint32_t *)Block + 2);
    *((uint32_t *)Block + 2) = 0;
    *((uint32_t *)Block + 1) = 0;
    *(uint32_t *)Block = &GenericNode::`vftable';
    if ( Block )
    v7 = *((uint32_t *)Block + 1);
    if ( v7 )
    v8 = *((uint32_t *)Block + 2);
    if ( v8 )
    *(uint32_t *)(v8 + 4) = v7;
    *(uint32_t *)(*((uint32_t *)Block + 1) + 8) = *((uint32_t *)Block + 2);
    *((uint32_t *)Block + 2) = 0;
    *((uint32_t *)Block + 1) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

