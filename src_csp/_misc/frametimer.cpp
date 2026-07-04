#include "frametimer.hpp"

// 0x0041BF40
int  FrameTimer::HasRemaining(#377 *this)
{
    int v1; // edx
    int result; // eax
    v1 = *((uint32_t *)this + 99);
    result = *((uint32_t *)this + 101);
    if ( v1 != -1 )
    if ( (int)CurrentFrame - v1 < result )
    result -= (int)CurrentFrame - v1;
    LOBYTE(result) = result > 0;
    return result;
    result = 0;
    LOBYTE(result) = result > 0;
    return result;
}

