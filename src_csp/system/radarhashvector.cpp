#include "radarhashvector.hpp"

void  RadarHashVector::sub_658890(int this)
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

unsigned int  RadarHashVector::sub_6588C0(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

uint32_t * RadarHashVector::_vt06(uint32_t *this, uint32_t *a2, int a3)
{
    uint32_t *v3; // edx
    v3 = (uint32_t *)(*(this + 1) + 16 * a3);
    *a2 = *v3;
    a2[1] = v3[1];
    a2[2] = v3[2];
    a2[3] = v3[3];
    return a2;
}

char  RadarHashVector::_vt01(int *this, int a2)
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
    while ( *v5 == *(uint32_t *)((char *)v5 + v7) && v5[1] == *v6 && v5[2] == v6[1] )
    ++v3;
    v6 += 4;
    v5 += 4;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  RadarHashVector::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint32_t *v7; // ecx
    int v8; // edx
    uint32_t *v9; // eax
    int v10; // ecx
    int v12; // ecx
    int v13; // eax
    uint32_t *v14; // edx
    char *v15; // ebx
    v3 = a2;
    if ( a2 )
    v5 = a3;
    *((uint8_t *)this + 12) = 0;
    if ( a3 )
    if ( a2 - 1 >= 0 )
    v9 = a3 + 4;
    v10 = a2;
    do
    *(v9 - 1) = 0;
    *v9 = 0;
    v9[1] = 0;
    v9 += 4;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 4;
    v8 = a2;
    do
    *(v7 - 1) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7 += 4;
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
    v14 = (uint32_t *)(*((uint32_t *)this + 1) + v13);
    v15 = &v5[v13];
    v13 += 16;
    --v12;
    *(uint32_t *)v15 = *v14;
    *((uint32_t *)v15 + 1) = v14[1];
    *((uint32_t *)v15 + 2) = v14[2];
    *((uint32_t *)v15 + 3) = v14[3];
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

void  RadarHashVector::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

int  RadarHashVector::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  RadarHashVector::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

char  RadarHashVector::sub_658B10(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // edi
    char *v6; // eax
    uint32_t *v7; // ecx
    int v8; // edx
    uint32_t *v9; // eax
    int v10; // ecx
    int v11; // ecx
    int v12; // eax
    uint32_t *v13; // edx
    char *v14; // ebx
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
    *(v9 - 1) = 0;
    *v9 = 0;
    v9[1] = 0;
    v9 += 4;
    --v10;
    while ( v10 );
    else
    v6 = (char *)__2_YAPAXI_Z(16 * a2);
    if ( v6 )
    if ( a2 - 1 >= 0 )
    v7 = v6 + 4;
    v8 = a2;
    do
    *(v7 - 1) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7 += 4;
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
    v13 = (uint32_t *)(*((uint32_t *)this + 1) + v12);
    v14 = &v5[v12];
    v12 += 16;
    --v11;
    *(uint32_t *)v14 = *v13;
    *((uint32_t *)v14 + 1) = v13[1];
    *((uint32_t *)v14 + 2) = v13[2];
    *((uint32_t *)v14 + 3) = v13[3];
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

int  RadarHashVector::sub_658C20(int *this, uint32_t *a2)
{
    int v2; // edx
    int result; // eax
    uint32_t *i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (uint32_t *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 4 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

char * RadarHashVector::sub_658C60(uint32_t *Block, char a2)
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
    *(uint32_t *)v7 = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable';
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
    *Block = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable';
    if ( v11 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v11);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (char *)Block;
}

uint32_t * RadarHashVector::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<HashObject<RadarTrackingStruct,TechnoClass *>>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

