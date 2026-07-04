#include "scriptactionvector.hpp"

char  ScriptActionVector::PushBack(uint32_t *this, uint32_t *a2)
{
    int v3; // ecx
    int v4; // eax
    int v6; // eax
    int v7; // edx
    v3 = *(this + 2);
    if ( *(this + 4) >= v3 )
    if ( !*((uint8_t *)this + 13) && v3 )
    return 0;
    v4 = *(this + 5);
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(uint32_t *, int, uint32_t))(*this + 8))(this, v3 + v4, 0) )
    return 0;
    v6 = *(this + 4);
    v7 = *(this + 1);
    *(this + 4) = v6 + 1;
    *(uint32_t *)(v7 + 4 * v6) = *a2;
    return 1;
}

