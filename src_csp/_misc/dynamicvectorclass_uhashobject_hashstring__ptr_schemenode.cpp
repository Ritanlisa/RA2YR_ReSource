#include "dynamicvectorclass_uhashobject_hashstring__ptr_schemenode.hpp"

void  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D20(int this)
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

unsigned int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D50(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

void  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627D80(int this)
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

unsigned int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627DB0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 3u;
    else
    return 0;
}

int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627DE0(uint32_t *this, int a2, int a3)
{
    int v3; // ecx
    v3 = *(this + 1) + 3 * a3;
    *(_WORD *)a2 = *(_WORD *)v3;
    *(uint8_t *)(a2 + 2) = *(uint8_t *)(v3 + 2);
    return a2;
}

char  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_627F90(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // edi
    int v5; // ecx
    int i; // eax
    int v7; // eax
    if ( a2 )
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 12) = 1;
    if ( !v4 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v5 = *((uint32_t *)this + 2);
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(uint32_t *)(*((uint32_t *)this + 1) + 4 * i - 4) )
    ++i;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v4;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v7 = *((uint32_t *)this + 2);
    if ( v7 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v7;
    return 1;
}

int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_628040(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; ++i )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6281F0(int *this, int a2)
{
    int v3; // eax
    int v4; // ebx
    int i; // esi
    v3 = *(this + 2);
    if ( v3 == *(uint32_t *)(a2 + 8) )
    v4 = 0;
    if ( v3 <= 0 )
    return 1;
    for ( i = 0;
    !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
    (uint8_t *)(i + *(this + 1)),
    (uint8_t *)(i + *(uint32_t *)(a2 + 4)));
    i += 3 )
    if ( ++v4 >= *(this + 2) )
    return 1;
    return 0;
}

char  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6284A0(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint8_t *v7; // ecx
    int v8; // edx
    uint8_t *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    char *v14; // ebx
    int v15; // eax
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
    if ( !v5 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    if ( v11 > 0 )
    v12 = 0;
    do
    v13 = *((uint32_t *)this + 1) + v12;
    v14 = &v5[v12];
    v12 += 3;
    --v11;
    *(_WORD *)v14 = *(_WORD *)v13;
    v14[2] = *(uint8_t *)(v13 + 2);
    while ( v11 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v5;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v15 = *((uint32_t *)this + 2);
    if ( v15 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v15;
    return 1;
}

int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6285A0(uint32_t *this, int a2)
{
    if ( (int)*(this + 4) > 0 )
    VtableStub::5175D0(*(this + 1), a2);
    return -1;
}

uint32_t * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_628640(uint32_t *Block, char a2)
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

char * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(uint32_t *Block, char a2)
{
    int v3; // eax
    char *v4; // ebp
    int v5; // ecx
    int v6; // eax
    char *v7; // esi
    int v8; // edi
    void *v9; // eax
    void *v11; // eax
    if ( (a2 & 2) != 0 )
    v3 = *(Block - 1);
    v4 = (char *)(Block - 1);
    v5 = 3 * v3;
    v6 = v3 - 1;
    v7 = (char *)(Block + 2 * v5);
    if ( v6 >= 0 )
    v8 = v6 + 1;
    do
    v9 = (void *)*((uint32_t *)v7 - 5);
    v7 -= 24;
    *(uint32_t *)v7 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable';
    if ( v9 && v7[13] )
    __3_YAXPAX_Z(v9);
    *((uint32_t *)v7 + 1) = 0;
    --v8;
    v7[13] = 0;
    *((uint32_t *)v7 + 2) = 0;
    while ( v8 );
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return v4;
    else
    v11 = (void *)*(Block + 1);
    *Block = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable';
    if ( v11 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char *)Block;
}

uint32_t * DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::sub_6287B0(uint32_t *Block, char a2)
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

void  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt03(int this)
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

// 0x00628830
unsigned int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0x104u;
    else
    return 0;
}

int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // esi
    v3 = *(this + 1) + 260 * a3;
    String::Copy((char *)a2, (const char *)v3);
    *(uint32_t *)(a2 + 256) = *(uint32_t *)(v3 + 256);
    return a2;
}

char  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt01(int *this, int a2)
{
    int v2; // eax
    v2 = *(this + 2);
    if ( v2 != *(uint32_t *)(a2 + 8) )
    return 0;
    if ( v2 > 0 )
    j_Stub_InfiniteLoop();
    return 1;
}

// 0x00628BB0
char  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(void *this, int a2, uint8_t *a3)
{
    int v3; // edi
    uint8_t *v5; // esi
    uint8_t *v6; // ebx
    uint8_t *v7; // esi
    int v8; // ebx
    int v9; // eax
    int v10; // ebx
    char *v11; // edi
    int v12; // esi
    int v13; // eax
    int v15; // [esp+10h] [ebp-8h]
    char *v16; // [esp+10h] [ebp-8h]
    int v17; // [esp+14h] [ebp-4h]
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
    v16 = a3;
    else
    v6 = __2_YAPAXI_Z(260 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v15 = a2;
    do
    Byte::Zero(v7);
    v7 += 260;
    --v15;
    while ( v15 );
    v16 = v6;
    else
    v16 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v16 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v9 = *((uint32_t *)this + 2);
    if ( a2 < v9 )
    v9 = a2;
    if ( v9 > 0 )
    v10 = 0;
    v11 = v16;
    v17 = v9;
    do
    v12 = v10 + *((uint32_t *)this + 1);
    String::CopyChecked(v11, (const char *)v12);
    *((uint32_t *)v11 + 64) = *(uint32_t *)(v12 + 256);
    v10 += 260;
    v11 += 260;
    --v17;
    while ( v17 );
    v3 = a2;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v16;
    *((uint32_t *)this + 2) = v3;
    *((uint8_t *)this + 13) = a3 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v13 = *((uint32_t *)this + 2);
    if ( v13 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v13;
    return 1;
}

int  DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::_vt04(uint32_t *this, int a2)
{
    if ( (int)*(this + 4) > 0 )
    Stub::InfiniteLoop(*(this + 1), a2);
    return -1;
}

