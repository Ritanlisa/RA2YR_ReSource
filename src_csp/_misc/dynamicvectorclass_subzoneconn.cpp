#include "dynamicvectorclass_subzoneconn.hpp"

// 0x00588CC0
unsigned int  DynamicVectorClass_SubzoneConn::Remove(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * DynamicVectorClass_SubzoneConn::Add(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<SubzoneConnectionStruct>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

char  DynamicVectorClass_SubzoneConn::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // ebx
    int v15; // eax
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    v9 = a3;
    if ( a2 - 1 >= 0 )
    v10 = a2;
    do
    *(uint32_t *)v9 = 0;
    v9[4] = 0;
    v9 += 8;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(8 * a2);
    if ( v6 )
    v7 = v6;
    if ( a2 - 1 >= 0 )
    v8 = a2;
    do
    *(uint32_t *)v7 = 0;
    v7[4] = 0;
    v7 += 8;
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
    v12 = 0;
    if ( v11 > 0 )
    do
    v13 = 8 * v12;
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v12++);
    *(uint32_t *)&v5[v13] = *v14;
    *(uint32_t *)&v5[v13 + 4] = v14[1];
    while ( v12 < v11 );
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

int  DynamicVectorClass_SubzoneConn::_vt04(int *this, uint32_t *a2)
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

