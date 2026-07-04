#include "optionqueue.hpp"

// 0x004F1AA0
int  OptionQueue::PushEntry(int *this, const void *a2)
{
    int v3; // eax
    if ( *this >= 128 )
    return 0;
    qmemcpy((char *)this + 74 * *(this + 2) + 37 * *(this + 2) + 12, a2, 0x6Fu);
    *(this + *(this + 2) + 3555) = timeGetTime();
    v3 = *this + 1;
    *(this + 2) = ((unsigned __int8)*(this + 2) + 1) & 0x7F;
    *this = v3;
    return 1;
}

