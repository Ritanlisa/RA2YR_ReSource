#include "vectorclass.hpp"

int  VectorClass::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    v3 = *(this + 1);
    v4 = *(uint32_t *)(v3 + 8 * a3);
    v5 = v3 + 8 * a3;
    *(uint32_t *)a2 = v4;
    *(uint8_t *)(a2 + 4) = *(uint8_t *)(v5 + 4);
    return a2;
}

char  VectorClass::_vt01(int *this, int a2)
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
    v4 += 2;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  VectorClass::_vt02(void *this, int a2, char *a3)
{
    int v3; // ebp
    char *v5; // esi
    char *v6; // eax
    char *v7; // ecx
    int v8; // edx
    char *v9; // eax
    int v10; // ecx
    int v12; // edx
    int v13; // ecx
    int v14; // eax
    uint32_t *v15; // ebx
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
    if ( v5 )
    if ( *((uint32_t *)this + 1) )
    v12 = *((uint32_t *)this + 2);
    if ( a2 < v12 )
    v12 = a2;
    v13 = 0;
    if ( v12 > 0 )
    do
    v14 = 8 * v13;
    v15 = (uint32_t *)(*((uint32_t *)this + 1) + 8 * v13++);
    *(uint32_t *)&v5[v14] = *v15;
    *(uint32_t *)&v5[v14 + 4] = v15[1];
    while ( v13 < v12 );
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

int  VectorClass::_vt04(int this, uint32_t *a2)
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
    for ( i = *(uint32_t **)(this + 4); *i != *a2; i += 2 )
    if ( ++result >= v3 )
    return -1;
    return result;
}

unsigned int  VectorClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 3;
    else
    return 0;
}

uint32_t * VectorClass::_vt00(uint32_t *Block, char a2)
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

// 0x0045AD80
uint32_t * VectorClass::ConstructorWithVtable(uint32_t *this, int a2, int a3)
{
    *(this + 1) = 0;
    *(this + 2) = a2;
    *((uint8_t *)this + 12) = 1;
    *((uint8_t *)this + 13) = 0;
    *this = &VectorClass<ParticleSystemTypeClass const *>::`vftable';
    if ( a2 )
    if ( a3 )
    *(this + 1) = a3;
    return this;
    *(this + 1) = __2_YAPAXI_Z(4 * a2);
    *((uint8_t *)this + 13) = 1;
    return this;
}

int * VectorClass::sub_477750(int *Block, char a2)
{
    Pipe::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

// 0x00477C70
char  VectorClass::vt02(void *this, int a2, uint32_t *a3)
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

// 0x00477D50
int  VectorClass::vt04(int this, uint32_t *a2)
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

// 0x00477D90
unsigned int  VectorClass::vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

uint32_t * VectorClass::vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<int>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  VectorClass::_vt03(int this)
{
    if ( *(uint32_t *)(this + 4) && *(uint8_t *)(this + 13) )
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(uint32_t *)(this + 4) = 0;
    *(uint8_t *)(this + 13) = 0;
    *(uint32_t *)(this + 8) = 0;
}

uint32_t * VectorClass::PointConstructor(uint32_t *this, int a2, int a3)
{
    void *v5; // eax
    *(this + 1) = 0;
    *(this + 2) = a2;
    *((uint8_t *)this + 12) = 1;
    *((uint8_t *)this + 13) = 0;
    *this = &VectorClass<Point2D>::`vftable';
    if ( a2 )
    if ( a3 )
    *(this + 1) = a3;
    return this;
    v5 = __2_YAPAXI_Z(8 * a2);
    if ( v5 )
    *(this + 1) = v5;
    *((uint8_t *)this + 13) = 1;
    return this;
    *((uint8_t *)this + 13) = 1;
    *(this + 1) = 0;
    return this;
}

int  VectorClass::RemoveElement(#377 *this)
{
    int *v1; // edi
    int v4; // eax
    int v5; // ecx
    int v6; // eax
    int *v7; // ebx
    uint32_t *v8; // eax
    int v9; // ebx
    void *v10; // eax
    int v11; // edx
    int v12; // ebx
    int v13; // eax
    int **v14; // ecx
    int v15; // ebp
    void *v16; // eax
    int v17; // [esp+14h] [ebp+4h]
    int v18; // [esp+18h] [ebp+8h]
    int *v19; // [esp+1Ch] [ebp+Ch]
    v1 = v19;
    if ( !v19 )
    v1 = (int *)**((uint32_t **)this + 57);
    if ( !v1 )
    return 0;
    if ( v17 == 3 )
    v4 = *((uint32_t *)this + 58);
    v5 = 0;
    if ( v4 > 0 )
    do
    v6 = *((uint32_t *)this + 57);
    v7 = *(int **)(v6 + 4 * v5);
    v8 = (uint32_t *)(v6 + 4 * v5);
    if ( v7 == v1 )
    *v8 = 0;
    ++v5;
    while ( v5 < *((uint32_t *)this + 58) );
    goto LABEL_9;
    if ( v17 != 2 )
    LABEL_9:
    v9 = *v1;
    v10 = AbstractClass::IsTechnoType(this);
    return (*(int (__thiscall **)(int *, void *, int, int))(v9 + 404))(v1, v10, v17, v18);
    v11 = *((uint32_t *)this + 58);
    v12 = -1;
    v13 = 0;
    if ( v11 > 0 )
    v14 = (int **)*((uint32_t *)this + 57);
    while ( 1 )
    if ( v12 == -1 && !*v14 )
    v12 = v13;
    if ( *v14 == v1 )
    return 1;
    ++v13;
    ++v14;
    if ( v13 >= v11 )
    if ( v12 != -1 )
    goto LABEL_20;
    break;
    (*(void (__thiscall **)(void*377 *, int, uint32_t))(*(uint32_t *)this + 632))(this, 3, **((uint32_t **)this + 57));
    v12 = 0;
    LABEL_20:
    v15 = *v1;
    v16 = AbstractClass::IsTechnoType(this);
    if ( (*(int (__thiscall **)(int *, void *, int, int))(v15 + 404))(v1, v16, 2, v18) == 1 )
    *(uint32_t *)(*((uint32_t *)this + 57) + 4 * v12) = v1;
    return 1;
    return 10;
}

uint32_t * VectorClass::CopyAssign(uint32_t *this, uint32_t *a2)
{
    int v3; // eax
    void *v4; // eax
    int v5; // ecx
    int v6; // eax
    if ( this == a2 )
    return this;
    (*(void (__thiscall **)(uint32_t *))(*this + 12))(this);
    v3 = a2[2];
    *(this + 2) = v3;
    if ( !v3 )
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    return this;
    v4 = __2_YAPAXI_Z(4 * v3);
    *(this + 1) = v4;
    if ( !v4 )
    return this;
    v5 = *(this + 2);
    v6 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v5 <= 0 )
    return this;
    do
    *(uint32_t *)(*(this + 1) + 4 * v6) = *(uint32_t *)(a2[1] + 4 * v6);
    ++v6;
    while ( v6 < *(this + 2) );
    return this;
}

int  VectorClass::sub_69E9B0(uint32_t *this, int a2, int a3)
{
    SHA1::Process(this + 3, a2, a3);
    return Delegate::Dispatch(this, a2, a3);
}

