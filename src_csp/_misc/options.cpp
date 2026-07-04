#include "options.hpp"

char  Options::ReadOptionValue(int *this)
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
    v6 = __2_YAPAXI_Z(20 * v5);
    v7 = (const void *)*(this + 2);
    v8 = (int)v6;
    if ( v7 )
    qmemcpy(v6, v7, 20 * *this);
    __3_YAXPAX_Z((void *)*(this + 2));
    *(this + 2) = v8;
    *(this + 1) = v5;
    return 1;
}

char  Options::SaveOptionValue(int *this)
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
    v5 = __2_YAPAXI_Z(20 * v4);
    memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2));
    v7 = (int)v5;
    v6 = (const void *)*(this + 2);
    if ( v6 )
    qmemcpy(v5, v6, 20 * *this);
    __3_YAXPAX_Z((void *)*(this + 2));
    *(this + 1) = v4;
    *(this + 2) = v7;
    return 1;
}

