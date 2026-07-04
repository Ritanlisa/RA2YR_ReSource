#include "filestraw_destru.hpp"

void * FileStraw_Destru::_vt00(void *Block, char a2)
{
    FileStraw::Destructor((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

int  FileStraw_Destru::_vt02(int this, int a2, int a3)
{
    int v4; // ecx
    int v5; // ecx
    v4 = *(uint32_t *)(this + 12);
    if ( v4
    && a2
    && a3 > 0
    && ((*(unsigned __int8 (__thiscall **)(int))(*(uint32_t *)v4 + 24))(v4)
    || (v5 = *(uint32_t *)(this + 12),
    *(uint8_t *)(this + 16) = 1,
    (*(unsigned __int8 (__thiscall **)(int, uint32_t))(*(uint32_t *)v5 + 20))(v5, 0))
    && (*(int (__thiscall **)(uint32_t, int))(**(uint32_t **)(this + 12) + 28))(*(uint32_t *)(this + 12), 1)) )
    return (*(int (__thiscall **)(uint32_t, int, int))(**(uint32_t **)(this + 12) + 36))(*(uint32_t *)(this + 12), a2, a3);
    else
    return 0;
}

