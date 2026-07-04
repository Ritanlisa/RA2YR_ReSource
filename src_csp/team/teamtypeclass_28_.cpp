#include "teamtypeclass_28_.hpp"

void  TeamTypeClass_28_::sub_6F21B0(int this)
{
    int v2; // eax
    v2 = *(uint32_t *)(this + 4);
    *(uint32_t *)(this + 16) = 0;
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z((void *)(v2 - 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

unsigned int  TeamTypeClass_28_::sub_6F21F0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * TeamTypeClass_28_::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    v3 = *(this + 1);
    v4 = *(uint32_t *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *a2 = v4;
    a2[1] = *(uint32_t *)(v5 + 4);
    return a2;
}

char  TeamTypeClass_28_::_vt01(int *this, int a2)
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
    v6 = (uint32_t *)(v4 + 4);
    v7 = v4 - (uint32_t)v5;
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *v6 )
    ++v3;
    v6 += 2;
    v5 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  TeamTypeClass_28_::_vt02(void *this, int a2, int *a3)
{
    int *v4; // ebx
    int *v5; // eax
    uint32_t *v6; // edi
    uint32_t *v7; // eax
    int v8; // ecx
    uint32_t *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    int v14; // edx
    int v15; // eax
    if ( a2 )
    v4 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v6 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *v9 = 0;
    v9 += 2;
    --v10;
    while ( v10 );
    else
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v7 = v5 + 2;
    v8 = a2;
    do
    *v7 = 0;
    v7 += 2;
    --v8;
    while ( v8 );
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( v6 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
    do
    v14 = *((uint32_t *)this + 1);
    ++v13;
    v6[2 * v13 - 2] = *(uint32_t *)(v14 + 8 * v13 - 8);
    v6[2 * v13 - 1] = *(uint32_t *)(v14 + 8 * v13 - 4);
    while ( v13 < v12 );
    v4 = a3;
    if ( *((uint8_t *)this + 13) )
    v15 = *((uint32_t *)this + 1);
    if ( v15 )
    __3_YAXPAX_Z((void *)(v15 - 4));
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = v4 == 0;
    return 1;
    else
    return 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    return 1;
}

void  TeamTypeClass_28_::_vt03(int this)
{
    int v2; // eax
    v2 = *(uint32_t *)(this + 4);
    if ( v2 && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z((void *)(v2 - 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  TeamTypeClass_28_::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1]; i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  TeamTypeClass_28_::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

char  TeamTypeClass_28_::sub_6F24B0(void *this, int a2, int *a3)
{
    int *v4; // ebp
    int *v5; // eax
    uint32_t *v6; // edi
    uint32_t *v7; // eax
    int v8; // ecx
    uint32_t *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    int v13; // edx
    int v14; // eax
    void *v15; // ebp
    int v16; // eax
    if ( a2 )
    v4 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    *a3 = a2;
    v6 = a3 + 1;
    if ( a2 - 1 >= 0 )
    v9 = a3 + 2;
    v10 = a2;
    do
    *v9 = 0;
    v9 += 2;
    --v10;
    while ( v10 );
    else
    v5 = (int *)__2_YAPAXI_Z(8 * a2 + 4);
    if ( v5 )
    *v5 = a2;
    v6 = v5 + 1;
    if ( a2 - 1 >= 0 )
    v7 = v5 + 2;
    v8 = a2;
    do
    *v7 = 0;
    v7 += 2;
    --v8;
    while ( v8 );
    else
    v6 = 0;
    *((uint8_t *)this + 12) = 1;
    if ( !v6 )
    return 0;
    if ( *((uint32_t *)this + 1) )
    v11 = *((uint32_t *)this + 2);
    if ( a2 < v11 )
    v11 = a2;
    v12 = 0;
    if ( v11 > 0 )
    do
    v13 = *((uint32_t *)this + 1);
    ++v12;
    v6[2 * v12 - 2] = *(uint32_t *)(v13 + 8 * v12 - 8);
    v6[2 * v12 - 1] = *(uint32_t *)(v13 + 8 * v12 - 4);
    while ( v12 < v11 );
    v4 = a3;
    if ( *((uint8_t *)this + 13) )
    v14 = *((uint32_t *)this + 1);
    if ( v14 )
    v15 = (void *)(v14 - 4);
    Array::ForEachReverse(v14, 8, *(uint32_t *)(v14 - 4), (int (__thiscall *)(int))nullsub_240);
    __3_YAXPAX_Z(v15);
    v4 = a3;
    *((uint32_t *)this + 1) = 0;
    *((uint32_t *)this + 1) = v6;
    *((uint32_t *)this + 2) = a2;
    *((uint8_t *)this + 13) = v4 == 0;
    else
    (*(void (__thiscall **)(void *))(*(uint32_t *)this + 12))(this);
    v16 = *((uint32_t *)this + 2);
    if ( v16 < *((uint32_t *)this + 4) )
    *((uint32_t *)this + 4) = v16;
    return 1;
}

int  TeamTypeClass_28_::sub_6F2640(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1]; i += 2 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * TeamTypeClass_28_::_vt00(uint32_t *Block, char a2)
{
    int v3; // eax
    v3 = *(Block + 1);
    *Block = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

uint32_t * TeamTypeClass_28_::sub_6F2720(uint32_t *Block, char a2)
{
    int v3; // eax
    v3 = *(Block + 1);
    *Block = &VectorClass<DiscreteDistributionClass<AITriggerTypeClass>::DistributionObject<AITriggerTypeClass *>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z((void *)(v3 - 4));
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

