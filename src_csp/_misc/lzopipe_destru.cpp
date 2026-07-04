#include "lzopipe_destru.hpp"

int  LZOPipe_Destru::_vt01(int this)
{
    int v2; // edi
    _WORD *v3; // ebx
    int v4; // edi
    int v5; // edi
    void *v7; // edi
    __int16 v8; // dx
    int v9; // edi
    int v10; // [esp+10h] [ebp-4h] BYREF
    v2 = 0;
    if ( *(int *)(this + 16) > 0 )
    if ( *(uint32_t *)(this + 12) == 1 )
    v3 = (_WORD *)(this + 36);
    if ( *(_WORD *)(this + 36) == 0xFFFF )
    v2 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 20), *(uint32_t *)(this + 16));
    *(uint32_t *)(this + 16) = 0;
    if ( *(int *)(this + 16) > 0 )
    v4 = Delegate::Dispatch((uint32_t *)this, this + 36, 4) + v2;
    v5 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 20), *(uint32_t *)(this + 16)) + v4;
    *(uint32_t *)(this + 16) = 0;
    *v3 = -1;
    return v5 + GameClass::GetRelatedObject((uint32_t *)this);
    else
    v10 = 0;
    v7 = __2_YAPAXI_Z(0x10000u);
    WriteCompressionBlock(*(uint8_t **)(this + 20), *(uint32_t *)(this + 16), *(uint8_t **)(this + 24), &v10, (int)v7);
    __3_YAXPAX_Z(v7);
    v8 = v10;
    *(_WORD *)(this + 38) = *(_WORD *)(this + 16);
    *(_WORD *)(this + 36) = v8;
    v9 = Delegate::Dispatch((uint32_t *)this, this + 36, 4);
    v2 = Delegate::Dispatch((uint32_t *)this, *(uint32_t *)(this + 24), v10) + v9;
    *(uint32_t *)(this + 16) = 0;
    return v2 + GameClass::GetRelatedObject((uint32_t *)this);
}

int * LZOPipe_Destru::_vt00(int *Block, char a2)
{
    void *v3; // eax
    void *v4; // ecx
    v3 = (void *)*(Block + 5);
    *Block = (int)&LZOPipe::`vftable';
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

