#include "mapfile.hpp"

void  MapFile::_vt03(int this)
{
    int v2; // eax
    int v3; // ecx
    void *v4; // ebx
    void **v5; // edi
    int v6; // ecx
    int v7; // ebp
    v2 = *(uint32_t *)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    v3 = *(uint32_t *)(v2 - 4);
    v4 = (void *)(v2 - 4);
    v5 = (void **)(v2 + 4 * v3);
    v6 = v3 - 1;
    if ( v6 >= 0 )
    v7 = v6 + 1;
    do
    DeleteAndZero(--v5);
    --v7;
    while ( v7 );
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MapFile::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  MapFile::_vt02(void *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ebx
    uint32_t *v7; // edi
    uint32_t *v8; // edi
    int i; // edi
    int v10; // eax
    void *v11; // edi
    int v12; // eax
    int v14; // [esp+10h] [ebp-4h]
    int v15; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v6 = a3 + 1;
    v8 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v15 = a2;
    do
    unknown_libname_73(v8++);
    --v15;
    while ( v15 );
    else
    v5 = __2_YAPAXI_Z(4 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v14 = a2;
    do
    unknown_libname_73(v7++);
    --v14;
    while ( v14 );
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v6 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    if ( a2 >= *((uint32_t *)this + 2) )
    v3 = *((uint32_t *)this + 2);
    for ( i = 0; i < v3; ++i )
    String::Reassign((char **)&v6[i], (const char **)(4 * i + *((uint32_t *)this + 1)));
    if ( *((uint8_t *)this + 13) )
    v10 = *((uint32_t *)this + 1);
    if ( v10 )
    v11 = (void *)(v10 - 4);
    Array::ForEachReverse(v10, 4, *(uint32_t *)(v10 - 4), (int (__thiscall *)(int))DeleteAndZero);
    __3_YAXPAX_Z(v11);
    *((uint32_t *)this + 1) = 0;
    v3 = a2;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v12 = *((uint32_t *)this + 2);
    if ( v12 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v12;
    return 1;
}

int  MapFile::_vt04(uint32_t *this, const char **a2)
{
    int v3; // esi
    v3 = 0;
    if ( (int)*(this + 4) <= 0 )
    return -1;
    while ( !String::Compare((const char **)(*(this + 1) + 4 * v3), a2) )
    if ( ++v3 >= *(this + 4) )
    return -1;
    return v3;
}

uint32_t * MapFile::_vt00(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // ecx
    void *v5; // ebx
    void **v6; // esi
    int v7; // ecx
    int v8; // ebp
    v3 = *(Block + 1);
    *Block = &VectorClass<Wstring>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    v4 = *(uint32_t *)(v3 - 4);
    v5 = (void *)(v3 - 4);
    v6 = (void **)(v3 + 4 * v4);
    v7 = v4 - 1;
    if ( v7 >= 0 )
    v8 = v7 + 1;
    do
    DeleteAndZero(--v6);
    --v8;
    while ( v8 );
    __3_YAXPAX_Z(v5);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

