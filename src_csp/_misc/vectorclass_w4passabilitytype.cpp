#include "vectorclass_w4passabilitytype.hpp"

void  VectorClass_W4PassabilityType::sub_588F00(int this)
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

unsigned int  VectorClass_W4PassabilityType::sub_588F30(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

int  VectorClass_W4PassabilityType::_vt06(uint32_t *this, int a2)
{
    return *(uint32_t *)(*(this + 1) + 4 * a2);
}

void  VectorClass_W4PassabilityType::sub_588F60(int this)
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

unsigned int  VectorClass_W4PassabilityType::sub_588F90(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

void  VectorClass_W4PassabilityType::sub_588FD0(int this)
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

unsigned int  VectorClass_W4PassabilityType::sub_589000(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (a2 - *(uint32_t *)(this + 4)) / 0xCu;
    else
    return 0;
}

char  VectorClass_W4PassabilityType::_vt01(int *this, int a2)
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

char  VectorClass_W4PassabilityType::_vt02(void *this, int a2, uint32_t *a3)
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

void  VectorClass_W4PassabilityType::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  VectorClass_W4PassabilityType::_vt04(int this, uint32_t *a2)
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

unsigned int  VectorClass_W4PassabilityType::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  VectorClass_W4PassabilityType::sub_58A030(void *this, int a2, uint32_t *a3)
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

int  VectorClass_W4PassabilityType::sub_58A0E0(int *this, uint32_t *a2)
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

char  VectorClass_W4PassabilityType::sub_58A150(void *this, int a2, uint32_t *a3)
{
    uint32_t *v4; // ebx
    uint32_t *v5; // eax
    uint32_t *v6; // edi
    int v7; // ecx
    int v8; // eax
    int v9; // edx
    int v10; // eax
    if ( a2 )
    v4 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v6 = a3;
    else
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    v6 = v5;
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v6 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v7 = *((uint32_t *)this + 2);
    if ( a2 < v7 )
    v7 = a2;
    v8 = 0;
    if ( v7 > 0 )
    do
    v9 = *((uint32_t *)this + 1);
    ++v8;
    v6[2 * v8 - 2] = *(uint32_t *)(v9 + 8 * v8 - 8);
    v6[2 * v8 - 1] = *(uint32_t *)(v9 + 8 * v8 - 4);
    while ( v8 < v7 );
    v4 = a3;
    if ( *((uint8_t *)this + 13) )
    __3_YAXPAX_Z(*((void **)this + 1));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = v4 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v10 = *((uint32_t *)this + 2);
    if ( v10 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v10;
    return 1;
}

int  VectorClass_W4PassabilityType::sub_58A230(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char  VectorClass_W4PassabilityType::sub_58A2A0(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    char *v13; // ebx
    uint32_t *v14; // edx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 4;
    v10 = a2;
    do
    *(uint32_t *)v9 = 0;
    v9[4] = 0;
    v9 += 12;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(12 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 4;
    v8 = a2;
    do
    *(uint32_t *)v7 = 0;
    v7[4] = 0;
    v7 += 12;
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
    v13 = &v5[v12];
    v14 = (uint32_t *)(v12 + *((uint32_t *)this + 1));
    v12 += 12;
    --v11;
    *(uint32_t *)v13 = *v14;
    *((uint32_t *)v13 + 1) = v14[1];
    *((uint32_t *)v13 + 2) = v14[2];
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

int  VectorClass_W4PassabilityType::sub_58A3A0(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2; i += 3 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char * VectorClass_W4PassabilityType::sub_58A630(uint32_t *Block, char a2)
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
    *(uint32_t *)v7 = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable';
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
    *Block = &VectorClass<HashObject<unsigned int,unsigned int>>::`vftable';
    if ( v11 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char *)Block;
}

char * VectorClass_W4PassabilityType::sub_58A840(uint32_t *Block, char a2)
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
    *(uint32_t *)v7 = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable';
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
    *Block = &VectorClass<HashObject<unsigned int,SubzoneConnectionStruct>>::`vftable';
    if ( v11 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char *)Block;
}

uint32_t * VectorClass_W4PassabilityType::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<enum PassabilityType>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * VectorClass_W4PassabilityType::sub_58AAE0(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<enum PassabilityType>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

