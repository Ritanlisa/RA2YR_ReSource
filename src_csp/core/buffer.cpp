#include "buffer.hpp"

// 0x0040A6D0
int  Buffer::UpdateVolumeSettings(uint32_t *this)
{
    uint32_t **v2; // edi
    signed int v3; // eax
    int v4; // eax
    v2 = (uint32_t **)*(this + 86);
    (*(void (__stdcall **)(uint32_t *, int))(*v2[25] + 60))(
    v2[25],
    dword_816380[(unsigned int)(100 * HIWORD(*(this + 55))) >> 14]);
    v3 = ((unsigned int)(200 * HIWORD(*(this + 75))) >> 14) - 100;
    if ( v3 >= 0 )
    (*(void (__stdcall **)(uint32_t *, int))(*v2[25] + 64))(v2[25], -dword_816510[-v3]);
    else
    (*(void (__stdcall **)(uint32_t *, int))(*v2[25] + 64))(v2[25], dword_816510[v3]);
    v4 = sub_401190((int)(this + 54), (*v2)[97]);
    (*(void (__stdcall **)(uint32_t *, int))(*v2[25] + 68))(v2[25], v4);
    return 0;
}

uint32_t * Buffer::sub_488030(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ObjectClass *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

