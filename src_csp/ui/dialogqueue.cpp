#include "dialogqueue.hpp"

int  DialogQueue::RemoveEntry(void *this)
{
    int result; // eax
    void *v2; // [esp+0h] [ebp-4h] BYREF
    v2 = this;
    result = (*(int (__thiscall **)(int *, void **))(dword_ABFC90 + 16))(&dword_ABFC90, &v2);
    if ( result != -1 && result < dword_ABFCA0 && result < --dword_ABFCA0 )
    do
    ++result;
    *((uint32_t *)dword_ABFC94 + result - 1) = *((uint32_t *)dword_ABFC94 + result);
    while ( result < dword_ABFCA0 );
    return result;
}

