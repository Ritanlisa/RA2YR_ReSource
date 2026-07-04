#include "dynamicvector.hpp"

char  DynamicVector::GrowCapacity(int *this)
{
    int v2; // eax
    int v4; // ebp
    void *v5; // edx
    const void *v6; // esi
    int v7; // [esp+4h] [ebp-4h]
    v2 = *this;
    if ( *this < *(this + 1) )
    return 0;
    v4 = 2 * v2;
    if ( 2 * v2 < 10 )
    v4 = 10;
    v5 = __2_YAPAXI_Z(24 * v4);
    memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)*(this + 2);
    if ( v6 )
    qmemcpy(v5, v6, 24 * *this);
    __3_YAXPAX_Z((void *)*(this + 2));
    *(this + 1) = v4;
    *(this + 2) = v7;
    return 1;
}

// 0x0067C360
char  DynamicVector::RemoveAt(uint32_t *this, int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    v2 = *(this + 4);
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    *(this + 4) = v4;
    if ( a2 < v4 )
    do
    ++v3;
    *(uint32_t *)(*(this + 1) + 4 * v3 - 4) = *(uint32_t *)(*(this + 1) + 4 * v3);
    while ( v3 < *(this + 4) );
    return 1;
}

// 0x0067C3F0
char  DynamicVector::RemoveAt2(uint32_t *this, int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    v2 = *(this + 4);
    v3 = a2;
    if ( a2 >= v2 )
    return 0;
    v4 = v2 - 1;
    *(this + 4) = v4;
    if ( a2 < v4 )
    do
    ++v3;
    *(uint32_t *)(*(this + 1) + 4 * v3 - 4) = *(uint32_t *)(*(this + 1) + 4 * v3);
    while ( v3 < *(this + 4) );
    return 1;
}

