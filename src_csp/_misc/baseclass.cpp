#include "baseclass.hpp"

// 0x0042F070
int __stdcall BaseClass::LoadArrayFields(uint32_t *a1, int a2)
{
    int v2; // esi
    int v3; // edx
    int v4; // ebp
    int v5; // ebx
    int v6; // ecx
    int v7; // ebx
    int v8; // ecx
    int result; // eax
    int v10; // ebx
    v2 = a2;
    if ( (*(int (__stdcall **)(int, uint32_t *, int, uint32_t))(*(uint32_t *)a2 + 16))(a2, a1, 120, 0) >= 0 )
    v3 = *(uint32_t *)v2;
    a2 = a1[5];
    if ( (*(int (__stdcall **)(int, int *, int, uint32_t))(v3 + 16))(v2, &a2, 4, 0) >= 0 )
    v4 = 0;
    if ( a2 <= 0 )
    LABEL_7:
    v6 = *(uint32_t *)v2;
    a2 = a1[12];
    if ( (*(int (__stdcall **)(int, int *, int, uint32_t))(v6 + 16))(v2, &a2, 4, 0) >= 0 )
    v7 = 0;
    if ( a2 <= 0 )
    LABEL_11:
    v8 = *(uint32_t *)v2;
    a2 = a1[18];
    result = (*(int (__stdcall **)(int, int *, int, uint32_t))(v8 + 16))(v2, &a2, 4, 0);
    if ( result >= 0 )
    v10 = 0;
    if ( a2 <= 0 )
    return result;
    while ( 1 )
    result = (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)v2 + 16))(v2, a1[15] + 4 * v10, 4, 0);
    if ( result < 0 )
    break;
    if ( ++v10 >= a2 )
    return result;
    else
    while ( (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)v2 + 16))(v2, a1[9] + 4 * v7, 4, 0) >= 0 )
    if ( ++v7 >= a2 )
    goto LABEL_11;
    else
    v5 = 0;
    while ( (*(int (__stdcall **)(int, int, int, uint32_t))(*(uint32_t *)v2 + 16))(v2, v5 + a1[2], 16, 0) >= 0 )
    ++v4;
    v5 += 16;
    if ( v4 >= a2 )
    goto LABEL_7;
    return 0;
}

int  BaseClass::sub_42F180(int *this, unsigned int *a2)
{
    int result; // eax
    int v4; // ebp
    int v5; // edi
    Power::TimerProcess(*(this + 5));
    result = *(this + 5);
    v4 = 0;
    if ( result > 0 )
    v5 = 0;
    do
    Power::TimerProcess(*(uint32_t *)(*(this + 2) + v5));
    Checksummer::Add_WORD(a2, *(_WORD *)(*(this + 2) + v5 + 4));
    Checksummer::Add_WORD(a2, *(_WORD *)(*(this + 2) + v5 + 6));
    result = *(this + 5);
    ++v4;
    v5 += 16;
    while ( v4 < result );
    return result;
}

void  BaseClass::_vt03(int this)
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

unsigned int  BaseClass::_vt05(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 4;
    else
    return 0;
}

int  BaseClass::_vt06(uint32_t *this, int a2, int a3)
{
    int v3; // edx
    v3 = *(this + 1) + 16 * a3;
    *(uint32_t *)a2 = *(uint32_t *)v3;
    *(uint32_t *)(a2 + 4) = *(uint32_t *)(v3 + 4);
    *(uint8_t *)(a2 + 8) = *(uint8_t *)(v3 + 8);
    *(uint32_t *)(a2 + 12) = *(uint32_t *)(v3 + 12);
    return a2;
}

char  BaseClass::_vt01(int *this, int a2)
{
    int v2; // edi
    int v3; // esi
    int v4; // edx
    int v5; // eax
    _WORD *v6; // ecx
    int v7; // edx
    v2 = *(this + 2);
    if ( v2 == *(uint32_t *)(a2 + 8) )
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(uint32_t *)(a2 + 4);
    v5 = *(this + 1);
    v6 = (_WORD *)(v4 + 4);
    v7 = v4 - v5;
    while ( *(uint32_t *)v5 == *(uint32_t *)(v7 + v5) && *(_WORD *)(v5 + 4) == *v6 && *(_WORD *)(v5 + 6) == v6[1] )
    ++v3;
    v6 += 8;
    v5 += 16;
    if ( v3 >= v2 )
    return 1;
    return 0;
}

char  BaseClass::_vt02(void *this, int a2, char *a3)
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

int  BaseClass::_vt04(int *this, int a2)
{
    int v2; // edx
    int result; // eax
    int i; // ecx
    v2 = *(this + 4);
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = *(this + 1);
    *(uint32_t *)i != *(uint32_t *)a2
    || *(_WORD *)(i + 4) != *(_WORD *)(a2 + 4)
    || *(_WORD *)(i + 6) != *(_WORD *)(a2 + 6);
    i += 16 )
    if ( ++result >= v2 )
    return -1;
    return result;
}

uint32_t * BaseClass::_vt00(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<BaseNodeClass>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

