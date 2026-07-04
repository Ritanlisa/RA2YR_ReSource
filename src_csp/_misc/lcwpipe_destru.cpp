#include "lcwpipe_destru.hpp"

int  LCWPipe_Destru::_vt01(int this)
{
    int v2; // edi
    int v3; // eax
    _WORD *v4; // ebx
    int v5; // edi
    int v6; // edi
    int v8; // ebx
    int v9; // edi
    v2 = 0;
    v3 = *(uint32_t *)(this + 16);
    if ( v3 > 0 )
    if ( *(uint32_t *)(this + 12) == 1 )
    v4 = (_WORD *)(this + 36);
    if ( *(_WORD *)(this + 36) == 0xFFFF )
    v2 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 20), *(uint32_t *)(this + 16));
    *(uint32_t *)(this + 16) = 0;
    if ( *(int *)(this + 16) > 0 )
    v5 = Delegate::Dispatch((uint32_t *)this, this + 36, 4) + v2;
    v6 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 20), *(uint32_t *)(this + 16)) + v5;
    *(uint32_t *)(this + 16) = 0;
    *v4 = -1;
    return v6 + GameClass::GetRelatedObject((uint32_t *)this);
    else
    v8 = DecompressCoreLCW(*(uint8_t **)(this + 20), *(uint8_t **)(this + 24), v3);
    *(_WORD *)(this + 38) = *(_WORD *)(this + 16);
    *(_WORD *)(this + 36) = v8;
    v9 = Delegate::Dispatch((uint32_t *)this, this + 36, 4);
    v2 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 24), v8) + v9;
    *(uint32_t *)(this + 16) = 0;
    return v2 + GameClass::GetRelatedObject((uint32_t *)this);
}

int * LCWPipe_Destru::_vt00(int *Block, char a2)
{
    void *v3; // eax
    void *v4; // ecx
    v3 = (void *)*(Block + 5);
    *Block = (int)&LCWPipe::`vftable';
    __3_YAXPAX_Z(v3);
    v4 = (void *)*(Block + 6);
    *(Block + 5) = 0;
    __3_YAXPAX_Z(v4);
    *(Block + 6) = 0;
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

