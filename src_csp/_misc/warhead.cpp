#include "warhead.hpp"

// 0x00452820
char  Warhead::RemoveFromDamageList(uint32_t *this, int a2)
{
    uint32_t *v2; // esi
    int v3; // eax
    int v4; // ecx
    int v5; // ecx
    int v6; // ecx
    int v7; // eax
    int v8; // edx
    v2 = this + 411;
    v3 = (*(int (__thiscall **)(uint32_t *, int *))(*(this + 411) + 16))(this + 411, &a2);
    if ( v3 != -1 )
    v4 = v2[4];
    if ( v3 < v4 )
    v5 = v4 - 1;
    for ( v2[4] = v5; v3 < v2[4]; *(uint32_t *)(v2[1] + 4 * v3 - 4) = *(uint32_t *)(v2[1] + 4 * v3) )
    ++v3;
    v6 = v2[2];
    if ( v2[4] < v6
    || ((LOBYTE(v7) = *((uint8_t *)v2 + 13), (uint8_t)v7) || !v6)
    && (v7 = v2[5], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(uint32_t *, int, uint32_t))(*v2 + 8))(v2, v6 + v7, 0), (uint8_t)v7) )
    v7 = v2[4];
    v8 = v2[1];
    v2[4] = v7 + 1;
    *(uint32_t *)(v8 + 4 * v7) = a2;
    return v7;
}

