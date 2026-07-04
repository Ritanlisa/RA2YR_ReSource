#include "voxclass.hpp"

// 0x007534E0
int  VoxClass::SetEVAIndex(void *this)
{
    int result; // eax
    if ( this == (void *)-1 )
    dword_B1D4C8 = 0;
    return 0;
    else
    dword_B1D4C8 = (int)this;
    return result;
}

