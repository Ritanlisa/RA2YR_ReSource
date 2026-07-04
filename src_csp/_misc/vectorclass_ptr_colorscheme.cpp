#include "vectorclass_ptr_colorscheme.hpp"

// 0x00627D70
int  VectorClass_ptr_ColorScheme::Get(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

// 0x00627E10
char  VectorClass_ptr_ColorScheme::Add(int *this, int a2)
{
    int v2; // esi
    int v3; // edx
    uint32_t *v4; // eax
    int v5; // ecx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (uint32_t *)*(this + 1);
    v5 = *(uint32_t *)(a2 + 4) - (uint32_t)v4;
    while ( *v4 == *(uint32_t *)((char *)v4 + v5) )
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass_ptr_ColorScheme::_vt02(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v6; // ecx
    int i; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( v4 )
    if ( *((uint32_t *)this + 1) )
    v6 = *((uint32_t *)this + 2);
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

// 0x00627F00
void  VectorClass_ptr_ColorScheme::Remove(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_ptr_ColorScheme::_vt04(int this, uint32_t *a2)
{
    int result; // eax
    int v3; // edx
    uint32_t *i; // ecx
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    v3 = *(uint32_t *)(this + 8);
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(uint32_t **)(this + 4); *i != *a2; ++i )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass_ptr_ColorScheme::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  VectorClass_ptr_ColorScheme::sub_6282E0(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint8_t *v7; // ecx
    int v8; // edx
    uint8_t *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    int v14; // edx
    char *v15; // ebx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *(v9 - 2) = 0;
    *(v9 - 1) = 0;
    *v9 = 0;
    v9 += 3;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(3 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 2;
    v8 = a2;
    do
    *(v7 - 2) = 0;
    *(v7 - 1) = 0;
    *v7 = 0;
    v7 += 3;
    --v8;
    while ( v8 );
    v5 = v6;
    else
    v5 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    if ( v12 > 0 )
    v13 = 0;
    do
    v14 = *((uint32_t *)this + 1) + v13;
    v15 = &v5[v13];
    v13 += 3;
    --v12;
    *(_WORD *)v15 = *(_WORD *)v14;
    v15[2] = *(uint8_t *)(v14 + 2);
    while ( v12 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_ptr_ColorScheme::sub_6283E0(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_ptr_ColorScheme::sub_628410(int this, int a2)
{
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    if ( *(int *)(this + 8) > 0 )
    VtableStub::5175D0(*(uint32_t *)(this + 4), a2);
    return -1;
}

unsigned int  VectorClass_ptr_ColorScheme::sub_628470(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 3u;
    else
    return 0;
}

uint32_t * VectorClass_ptr_ColorScheme::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<ColorScheme *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass_ptr_ColorScheme::sub_628760(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HSVClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  VectorClass_ptr_ColorScheme::sub_6288F0(void *this, int a2, uint8_t *a3)
{
    int v3; // edi
    uint8_t *v5; // esi
    uint8_t *v6; // ebx
    uint8_t *v7; // esi
    int v8; // ebx
    int v10; // eax
    int v11; // ebx
    char *v12; // edi
    int v13; // esi
    int v14; // [esp+10h] [ebp-8h]
    char *v15; // [esp+10h] [ebp-8h]
    int v16; // [esp+14h] [ebp-4h]
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    Byte::Zero(v5);
    v5 += 260;
    --v8;
    while ( v8 );
    v15 = a3;
    else
    v6 = __2_YAPAXI_Z(260 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v14 = a2;
    do
    Byte::Zero(v7);
    v7 += 260;
    --v14;
    while ( v14 );
    v15 = v6;
    else
    v15 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v15 )
    if ( *((uint32_t *)this + 1) )
    v10 = *((uint32_t *)this + 2);
    if ( a2 < v10 )
    v10 = a2;
    if ( v10 > 0 )
    v11 = 0;
    v12 = v15;
    v16 = v10;
    do
    v13 = v11 + *((uint32_t *)this + 1);
    String::CopyChecked(v12, (const char *)v13);
    *((uint32_t *)v12 + 64) = *(uint32_t *)(v13 + 256);
    v11 += 260;
    v12 += 260;
    --v16;
    while ( v16 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v15;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  VectorClass_ptr_ColorScheme::sub_628A40(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_ptr_ColorScheme::sub_628A70(int this, int a2)
{
    if ( !*(uint8_t *)(this + 12) )
    return 0;
    if ( *(int *)(this + 8) > 0 )
    Stub::InfiniteLoop(*(uint32_t *)(this + 4), a2);
    return -1;
}

unsigned int  VectorClass_ptr_ColorScheme::sub_628AD0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x104u;
    else
    return 0;
}

uint32_t * VectorClass_ptr_ColorScheme::sub_628E80(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

