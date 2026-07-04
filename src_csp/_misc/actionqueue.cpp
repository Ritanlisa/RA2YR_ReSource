#include "actionqueue.hpp"

uint32_t * ActionQueue::PushEntry(uint32_t *this, int a2, int a3, int a4)
{
    int v5; // eax
    *this = a2;
    *(this + 1) = a3;
    *(this + 3) = 0;
    *(this + 4) = 0;
    *(this + 2) = a4;
    if ( dword_AA0128 < dword_AA0120
    || (byte_AA0125 || !dword_AA0120)
    && dword_AA012C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_AA0118 + 8))(
    &dword_AA0118,
    dword_AA0120 + dword_AA012C,
    0) )
    v5 = dword_AA0128++;
    *((uint32_t *)dword_AA011C + v5) = this;
    return this;
}

