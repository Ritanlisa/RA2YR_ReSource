#include "dynamicarray.hpp"

char  DynamicArray::ShrinkCapacity(int *this)
{
    int v2; // eax
    int v3; // ecx
    int v5; // ebx
    void *v6; // eax
    const void *v7; // esi
    int v8; // [esp+8h] [ebp-4h]
    v2 = *this;
    v3 = *(this + 1);
    if ( 3 * v2 > v3 )
    return 0;
    v5 = v3 / 2;
    if ( v3 / 2 < 10 )
    v5 = 10;
    if ( v5 >= v3 )
    return 0;
    v6 = __2_YAPAXI_Z(4 * v5);
    v7 = (const void *)*(this + 2);
    v8 = (int)v6;
    if ( v7 )
    qmemcpy(v6, v7, 4 * *this);
    __3_YAXPAX_Z((void *)*(this + 2));
    *(this + 2) = v8;
    *(this + 1) = v5;
    return 1;
}

