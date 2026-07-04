#include "cd.hpp"

// 0x004790E0
char  CD::AlwaysAvailable(uint32_t *this, int a2)
{
    if ( a2 == -2 )
    return 1;
    if ( byte_89E3A0 == 1 )
    return 1;
    *(this + 1) = -1;
    return CD::CheckDiscPresence(this, a2);
}

// 0x0047ADA0
int  CD::SetCurrentInstance(void *this)
{
    int result; // eax
    result = dword_89E414;
    dword_89E414 = (int)this;
    dword_89E418 = result;
    return result;
}

