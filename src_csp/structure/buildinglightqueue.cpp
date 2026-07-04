#include "buildinglightqueue.hpp"

int  BuildingLightQueue::RemoveEntry(void *this)
{
    int result; // eax
    void *v2; // [esp+0h] [ebp-4h] BYREF
    v2 = this;
    result = (*(int (__thiscall **)(int *, void **))(dword_AC1678 + 16))(&dword_AC1678, &v2);
    if ( result != -1 && result < dword_AC1688 && result < --dword_AC1688 )
    do
    ++result;
    *((uint32_t *)dword_AC167C + result - 1) = *((uint32_t *)dword_AC167C + result);
    while ( result < dword_AC1688 );
    return result;
}

