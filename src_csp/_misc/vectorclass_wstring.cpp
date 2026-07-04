#include "vectorclass_wstring.hpp"

char ** VectorClass_Wstring::_vt06(uint32_t *this, char **a2, int a3)
{
    String::AssignFromPtr(a2, (const char **)(*(this + 1) + 4 * a3));
    return a2;
}

char  VectorClass_Wstring::_vt01(int *this, int a2)
{
    int v3; // eax
    int v4; // esi
    v3 = *(this + 2);
    if ( v3 == *(uint32_t *)(a2 + 8) )
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    while ( !VectorClass_Wstring::SetCapacity(
    (const char **)(4 * v4 + *(this + 1)),
    (const char **)(4 * v4 + *(uint32_t *)(a2 + 4))) )
    if ( ++v4 >= *(this + 2) )
    return 1;
    return 0;
}

char  VectorClass_Wstring::_vt02(uint8_t *this, int a2, uint32_t *a3)
{
    int v3; // ebp
    uint32_t *v5; // eax
    uint32_t *v6; // ebx
    uint32_t *v7; // esi
    uint32_t *v8; // esi
    int i; // esi
    int v11; // ecx
    int v12; // eax
    void *v13; // edx
    void **v14; // esi
    int v15; // eax
    int v16; // ebp
    int v17; // [esp+10h] [ebp-4h]
    int v18; // [esp+10h] [ebp-4h]
    void *v19; // [esp+10h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    *(this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v6 = a3 + 1;
    v8 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v18 = a2;
    do
    unknown_libname_73(v8++);
    --v18;
    while ( v18 );
    else
    v5 = __2_YAPAXI_Z(4 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v17 = a2;
    do
    unknown_libname_73(v7++);
    --v17;
    while ( v17 );
    else
    v6 = 0;
    *(this + 12) = 1;
    if ( v6 )
    if ( *((uint32_t *)this + 1) )
    if ( a2 >= *((uint32_t *)this + 2) )
    v3 = *((uint32_t *)this + 2);
    for ( i = 0; i < v3; ++i )
    String::Reassign((char **)&v6[i], (const char **)(4 * i + *((uint32_t *)this + 1)));
    if ( *(this + 13) )
    v11 = *((uint32_t *)this + 1);
    if ( v11 )
    v12 = *(uint32_t *)(v11 - 4);
    v13 = (void *)(v11 - 4);
    v19 = (void *)(v11 - 4);
    v14 = (void **)(v11 + 4 * v12);
    v15 = v12 - 1;
    if ( v15 >= 0 )
    v16 = v15 + 1;
    do
    DeleteAndZero(--v14);
    --v16;
    while ( v16 );
    v13 = v19;
    __3_YAXPAX_Z(v13);
    *((uint32_t *)this + 1) = 0;
    v3 = a2;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = v3;
    *(this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(uint8_t *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_Wstring::_vt03(int this)
{
    int v2; // eax
    int v3; // ecx
    void *v4; // ebx
    void **v5; // esi
    int v6; // ecx
    int v7; // ebp
    v2 = *(uint32_t *)(this + 4);
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

int  VectorClass_Wstring::_vt04(int this, const char **a2)
{
    int v4; // esi
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v4 = 0;
    if ( *(int *)(this + 8) <= 0 )
    return -1;
    while ( !String::Compare((const char **)(*(uint32_t *)(this + 4) + 4 * v4), a2) )
    if ( ++v4 >= *(uint32_t *)(this + 8) )
    return -1;
    return v4;
}

unsigned int  VectorClass_Wstring::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * VectorClass_Wstring::_vt00(uint32_t *Block, char a2)
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

