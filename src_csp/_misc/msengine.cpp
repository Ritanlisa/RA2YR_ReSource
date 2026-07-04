#include "msengine.hpp"

void  MSEngine::sub_5AC520(int this)
{
    void *v2; // eax
    v2 = *(void **)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  MSEngine::sub_5AC550(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

uint32_t * MSEngine::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // ecx
    v3 = (uint32_t *)(*(this + 1) + 16 * a3);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

char  MSEngine::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    uint32_t *v5; // eax
    uint32_t *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = (uint32_t *)*(this + 1);
    v6 = (uint32_t *)(v4 + 8);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] )
    ++v3;
    v6 += 4;
    v5 += 4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  MSEngine::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebx
    char *v5; // ebp
    char *v6; // eax
    char *v7; // edi
    int v9; // ecx
    int v10; // eax
    char *v11; // ebx
    uint32_t *v12; // edx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v7 = a3;
    else
    v6 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( v6 )
    v7 = v6;
    else
    v7 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v7 )
    if ( *((uint32_t *)this + 1) )
    v9 = *((uint32_t *)this + 2);
    if ( a2 < v9 )
    v9 = a2;
    if ( v9 > 0 )
    v10 = 0;
    do
    v11 = &v7[v10];
    v12 = (uint32_t *)(v10 + *((uint32_t *)this + 1));
    v10 += 16;
    --v9;
    *(uint32_t *)v11 = *v12;
    *((uint32_t *)v11 + 1) = v12[1];
    *((uint32_t *)v11 + 2) = v12[2];
    *((uint32_t *)v11 + 3) = v12[3];
    while ( v9 );
    v5 = a3;
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v7;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = v5 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  MSEngine::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  MSEngine::_vt04(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // esi
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  MSEngine::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

char  MSEngine::sub_5ACED0(void *this, int a2, char *a3)
{
    int v3; // ebx
    char *v5; // ebp
    char *v6; // eax
    char *v7; // edi
    int v8; // ecx
    int v9; // eax
    char *v10; // ebx
    uint32_t *v11; // edx
    int v12; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v7 = a3;
    else
    v6 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( v6 )
    v7 = v6;
    else
    v7 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v7 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v8 = *((uint32_t *)this + 2);
    if ( a2 < v8 )
    v8 = a2;
    if ( v8 > 0 )
    v9 = 0;
    do
    v10 = &v7[v9];
    v11 = (uint32_t *)(v9 + *((uint32_t *)this + 1));
    v9 += 16;
    --v8;
    *(uint32_t *)v10 = *v11;
    *((uint32_t *)v10 + 1) = v11[1];
    *((uint32_t *)v10 + 2) = v11[2];
    *((uint32_t *)v10 + 3) = v11[3];
    while ( v8 );
    v3 = a2;
    v5 = a3;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v7;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = v5 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v12 = *((uint32_t *)this + 2);
    if ( v12 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v12;
    return 1;
}

int  MSEngine::sub_5ACFC0(int *this, uint32_t *a2)
{
    int v2; // esi
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * MSEngine::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<TRect<int>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * MSEngine::sub_5AD520(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<TRect<int>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x005CEE60
void  MSEngine::Destructor(int this)
{
    void *v2; // eax
    void *v3; // eax
    void *v4; // eax
    SessionClass::Destruct((uint32_t *)this);
    v2 = *(void **)(this + 72);
    *(uint32_t *)(this + 68) = &VectorClass<MSSfxEntry *>::`vftable';
    if ( v2 && *(uint8_t *)(this + 81) )
    __3_YAXPAX_Z(v2);
    *(uint32_t *)(this + 72) = 0;
    *(uint8_t *)(this + 81) = 0;
    *(uint32_t *)(this + 76) = 0;
    v3 = *(void **)(this + 48);
    *(uint32_t *)(this + 44) = &VectorClass<MSAnimEntry *>::`vftable';
    if ( v3 && *(uint8_t *)(this + 57) )
    __3_YAXPAX_Z(v3);
    *(uint32_t *)(this + 48) = 0;
    *(uint8_t *)(this + 57) = 0;
    *(uint32_t *)(this + 52) = 0;
    DeleteAndZero((void **)(this + 40));
    v4 = *(void **)(this + 4);
    *(uint32_t *)this = &VectorClass<MapStage *>::`vftable';
    if ( v4 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(v4);
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

