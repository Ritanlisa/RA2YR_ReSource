#include "saveload.hpp"

// 0x0067A770
int  SaveLoad::StreamVector(uint32_t *this, int *a2)
{
    int v3; // ecx
    int result; // eax
    int i; // esi
    int v6; // [esp+20h] [ebp-4h] BYREF
    v3 = *a2;
    v6 = *(this + 4);
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v3 + 16))(a2, &v6, 4, 0);
    result = v6;
    for ( i = 0; i < v6; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, *(this + 1) + 4 * i, 4, 0);
    result = v6;
    return result;
}

