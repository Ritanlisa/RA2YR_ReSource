#include "filepipe.hpp"

void * FilePipe::_vt00(void *Block, char a2)
{
    FilePipe::Destructor((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  FilePipe::Destructor(int this)
{
    int v2; // ecx
    v2 = *(uint32_t *)(this + 12);
    *(uint32_t *)this = &FilePipe::`vftable';
    if ( v2 && *(uint8_t *)(this + 16) )
    *(uint8_t *)(this + 16) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)v2 + 52))(v2);
    *(uint32_t *)(this + 12) = 0;
    return Pipe::Dtor((int *)this);
}

int  FilePipe::_vt02(uint32_t *this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // edi
    v2 = (*(int (__thiscall **)(uint32_t *))(*this + 4))(this);
    v3 = *(this + 3);
    v4 = v2;
    if ( v3 && *((uint8_t *)this + 16) )
    *((uint8_t *)this + 16) = 0;
    (*(void (__thiscall **)(int))(*(uint32_t *)v3 + 52))(v3);
    return v4;
}

int  FilePipe::_vt04(int this, int a2, int a3)
{
    int v4; // ecx
    int v5; // ecx
    v4 = *(uint32_t *)(this + 12);
    if ( !v4 || !a2 || a3 <= 0 )
    return 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v4 + 24))(v4) )
    v5 = *(uint32_t *)(this + 12);
    *(uint8_t *)(this + 16) = 1;
    (*(void (__thiscall **)(int, int))(*(uint32_t *)v5 + 28))(v5, 2);
    return (*(int (__thiscall **)(uint32_t, int, int))(**(uint32_t **)(this + 12) + 48))(*(uint32_t *)(this + 12), a2, a3);
}

