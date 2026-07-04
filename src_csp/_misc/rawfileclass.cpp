#include "rawfileclass.hpp"

int  RawFileClass::_vt08(void *this, int a2, int a3)
{
    (*(void (__thiscall **)(void *, int))(*(uint32_t *)this + 8))(this, a2);
    return (*(int (__thiscall **)(void *, int))(*(uint32_t *)this + 28))(this, a3);
}

uint32_t * RawFileClass::_vt00(uint32_t *Block, char a2)
{
    int v3; // edi
    DWORD LastError; // eax
    int v6; // [esp-4h] [ebp-Ch]
    *Block = &RawFileClass::`vftable';
    if ( RawFileClass::Write(Block) )
    if ( !CloseHandle((HANDLE)*(Block + 5)) )
    v3 = *Block;
    v6 = *(Block + 6);
    LastError = GetLastError();
    (*(void (__thiscall **)(uint32_t *, DWORD, uint32_t, int))(v3 + 64))(Block, LastError, 0, v6);
    *(Block + 5) = -1;
    if ( *((uint8_t *)Block + 32) && *(Block + 6) )
    free((void *)*(Block + 6));
    *(Block + 6) = 0;
    *((uint8_t *)Block + 32) = 0;
    *Block = &FileClass::`vftable';
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

