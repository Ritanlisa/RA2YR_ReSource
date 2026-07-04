#include "scriptqueue.hpp"

void  ScriptQueue::PushEntry(uint8_t *this)
{
    int v2; // eax
    if ( this && !*(this + 28) )
    *(this + 28) = 1;
    if ( dword_AC4CA8 < dword_AC4CA0
    || (byte_AC4CA5 || !dword_AC4CA0)
    && dword_AC4CAC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(g_ScriptConfig + 8))(
    &g_ScriptConfig,
    dword_AC4CA0 + dword_AC4CAC,
    0) )
    v2 = dword_AC4CA8++;
    *((uint32_t *)dword_AC4C9C + v2) = this;
}

