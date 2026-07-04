#include "msengine_destru.hpp"

char  MSEngine_Destru::sub_5AE4C0(int this)
{
    char result; // al
    result = String::NotEquals((const char **)(this + 200), 0);
    if ( result )
    if ( *(uint32_t *)(this + 204) != -1 )
    return Timer::GetTicks();
    return result;
}

void ** MSEngine_Destru::sub_5AE5A0(void **Block, char a2)
{
    DeleteAndZero(Block + 50);
    MSEngine::Destructor((int)(Block + 20));
    MSEngine::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MSEngine_Destru::_vt00(uint32_t *Block, char a2)
{
    MSEngine::Destruct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

