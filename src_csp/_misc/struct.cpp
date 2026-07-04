#include "struct.hpp"

int  Struct::ClearAllMemberFlags(int *this)
{
    int v1; // eax
    int v2; // esi
    int v3; // eax
    uint32_t *v4; // edi
    int result; // eax
    int v6; // esi
    uint32_t *v7; // edi
    v1 = *(this + 1);
    v2 = 0;
    *(this + 11) = 0;
    *(this + 15) = 0;
    *(this + 5) = 0;
    *(this + 6) = 0;
    *(this + 7) = 0;
    *(this + 8) = 0;
    *(this + 10) = 0;
    *(this + 14) = 0;
    if ( v1 > 0 )
    v3 = 0;
    do
    *(uint32_t *)(v3 + *(this + 9)) &= ~1u;
    *(uint32_t *)(v3 + *(this + 9)) &= ~2u;
    v4 = (uint32_t *)(v3 + *(this + 9));
    v3 += 36;
    ++v2;
    *v4 &= ~4u;
    *(uint32_t *)(v3 + *(this + 9) - 32) = 0;
    *(uint32_t *)(v3 + *(this + 9) - 28) = 0;
    *(uint32_t *)(v3 + *(this + 9) - 24) = 0;
    *(uint32_t *)(v3 + *(this + 9) - 20) = 0;
    *(uint32_t *)(v3 + *(this + 9) - 12) = 0;
    *(_WORD *)(v3 + *(this + 9) - 4) = 0;
    *(uint32_t *)(*(this + 12) + 4 * v2 - 4) = 0;
    while ( v2 < *(this + 1) );
    result = *(this + 2);
    v6 = 0;
    if ( result > 0 )
    result = 0;
    do
    *(uint32_t *)(result + *(this + 13)) &= ~1u;
    *(uint32_t *)(result + *(this + 13)) &= ~2u;
    v7 = (uint32_t *)(result + *(this + 13));
    result += 24;
    ++v6;
    *v7 &= ~4u;
    *(uint32_t *)(*(this + 13) + result - 20) = 0;
    *(uint32_t *)(*(this + 13) + result - 16) = 0;
    *(uint32_t *)(*(this + 13) + result - 8) = 0;
    *(uint32_t *)(*(this + 16) + 4 * v6 - 4) = 0;
    while ( v6 < *(this + 2) );
    *(this + 17) = 0;
    *(this + 18) = 0;
    *(this + 19) = 0;
    *(this + 21) = 0;
    return result;
}

