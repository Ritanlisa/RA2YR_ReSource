#include "subzone.hpp"

int * Subzone::CopyDataFrom(int *this, int a2)
{
    int v3; // edi
    char *v4; // eax
    char *v5; // ecx
    int v6; // edx
    int v7; // ecx
    int v8; // eax
    int v9; // edx
    int v10; // ecx
    if ( this != (int *)a2 )
    (*(void (__thiscall **)(int *))(*this + 12))(this);
    v3 = *(uint32_t *)(a2 + 8);
    *(this + 2) = v3;
    if ( v3 )
    v4 = (char *)__2_YAPAXI_Z(8 * v3);
    if ( v4 )
    v5 = v4;
    if ( v3 - 1 >= 0 )
    v6 = v3;
    do
    *(uint32_t *)v5 = 0;
    v5[4] = 0;
    v5 += 8;
    --v6;
    while ( v6 );
    else
    v4 = 0;
    *(this + 1) = (int)v4;
    if ( v4 )
    v7 = *(this + 2);
    v8 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v7 > 0 )
    do
    v9 = *(uint32_t *)(a2 + 4);
    v10 = *(this + 1);
    *(uint32_t *)(v10 + 8 * v8) = *(uint32_t *)(v9 + 8 * v8);
    *(uint32_t *)(v10 + 8 * v8 + 4) = *(uint32_t *)(v9 + 8 * v8 + 4);
    ++v8;
    while ( v8 < *(this + 2) );
    else
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    *(this + 4) = *(uint32_t *)(a2 + 16);
    *(this + 5) = *(uint32_t *)(a2 + 20);
    *((_WORD *)this + 12) = *(_WORD *)(a2 + 24);
    *(this + 7) = *(uint32_t *)(a2 + 28);
    *(this + 8) = *(uint32_t *)(a2 + 32);
    return this;
}

