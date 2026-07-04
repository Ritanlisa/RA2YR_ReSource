#include "multiplayer.hpp"

uint32_t * Multiplayer::CopyDataArray(uint32_t *this, uint32_t *a2)
{
    int v3; // edi
    void *v4; // eax
    int v5; // ecx
    int v6; // eax
    if ( this == a2 )
    return this;
    (*(void (__thiscall **)(uint32_t *))(*this + 12))(this);
    v3 = a2[2];
    *(this + 2) = v3;
    if ( !v3 )
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    return this;
    v4 = __2_YAPAXI_Z(4 * v3);
    if ( !v4 )
    v4 = 0;
    *(this + 1) = v4;
    if ( !v4 )
    return this;
    v5 = *(this + 2);
    v6 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v5 <= 0 )
    return this;
    do
    *(uint32_t *)(*(this + 1) + 4 * v6) = *(uint32_t *)(a2[1] + 4 * v6);
    ++v6;
    while ( v6 < *(this + 2) );
    return this;
}

