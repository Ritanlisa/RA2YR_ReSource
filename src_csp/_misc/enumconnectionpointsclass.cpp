#include "enumconnectionpointsclass.hpp"

int __stdcall EnumConnectionPointsClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    int v4; // eax
    if ( !a3 )
    return -2147467261;
    v4 = 0;
    if ( !memcmp(a2, &unk_7F7CE0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) )
    v4 = a1;
    *a3 = v4;
    if ( !v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall EnumConnectionPointsClass::_vt03(uint32_t *a1, unsigned int a2, int a3, uint32_t *a4)
{
    int v4; // ebx
    int v6; // ebp
    unsigned int i; // edi
    int v8; // eax
    int v9; // eax
    int v10; // [esp-10h] [ebp-14h]
    v4 = a3;
    if ( !a3 )
    return -2147467261;
    if ( a2 > 1 )
    if ( !a4 )
    return -2147467261;
    goto LABEL_7;
    if ( a4 )
    LABEL_7:
    *a4 = 0;
    v6 = 0;
    for ( i = 0; i < a2; *(uint32_t *)(v4 - 4) = *(uint32_t *)(a1[4] + 4 * v9) )
    v8 = a1[1];
    if ( v8 >= a1[7] )
    break;
    v10 = *(uint32_t *)(a1[4] + 4 * v8);
    (*(void (__stdcall **)(int))(*(uint32_t *)v10 + 4))(v10);
    v9 = a1[1];
    v4 += 4;
    ++v6;
    ++i;
    a1[1] = v9 + 1;
    if ( a4 )
    *a4 = v6;
    return v6 != 0 ? 0 : -2147467259;
}

int __stdcall EnumConnectionPointsClass::_vt04(int a1, int a2)
{
    *(uint32_t *)(a1 + 4) += a2;
    return 0;
}

int __stdcall EnumConnectionPointsClass::_vt05(int a1)
{
    *(uint32_t *)(a1 + 4) = 0;
    return 0;
}

int __stdcall EnumConnectionPointsClass::_vt06(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v3; // edi
    int v4; // eax
    void *v5; // eax
    int v6; // ecx
    int v7; // eax
    int i; // esi
    int v9; // [esp-Ch] [ebp-14h]
    if ( !a2 )
    return -2147467261;
    v3 = __2_YAPAXI_Z(0x24u);
    if ( !v3 )
    return -2147024882;
    v3[1] = a1[1];
    v3[2] = 0;
    v3[4] = 0;
    v3[5] = 0;
    *((uint8_t *)v3 + 24) = 1;
    *((uint8_t *)v3 + 25) = 0;
    v3[3] = &VectorClass<IConnectionPoint *>::`vftable';
    if ( v3 + 3 != a1 + 3 )
    VectorClass::CleanupTyped((int)(v3 + 3));
    v4 = a1[5];
    v3[5] = v4;
    if ( v4 )
    v5 = __2_YAPAXI_Z(4 * v4);
    v3[4] = v5;
    if ( v5 )
    v6 = v3[5];
    v7 = 0;
    *((uint8_t *)v3 + 25) = 1;
    if ( v6 > 0 )
    do
    *(uint32_t *)(v3[4] + 4 * v7) = *(uint32_t *)(a1[4] + 4 * v7);
    ++v7;
    while ( v7 < v3[5] );
    else
    v3[4] = 0;
    *((uint8_t *)v3 + 25) = 0;
    v3[7] = a1[7];
    v3[8] = a1[8];
    v3[3] = &DynamicVectorClass<IConnectionPoint *>::`vftable';
    *v3 = &EnumConnectionPointsClass::`vftable';
    for ( i = 0; i < v3[7]; ++i )
    v9 = *(uint32_t *)(v3[4] + 4 * i);
    (*(void (__stdcall **)(int))(*(uint32_t *)v9 + 4))(v9);
    (*(void (__stdcall **)(uint32_t *))(*v3 + 4))(v3);
    *a2 = v3;
    return 0;
}

uint32_t * EnumConnectionPointsClass::sub_4A0E60(uint32_t *Block, char a2)
{
    void *v3; // eax
    v3 = (void *)*(Block + 1);
    *Block = &VectorClass<IConnectionPoint *>::`vftable';
    if ( v3 && *((uint8_t *)Block + 13) )
    __3_YAXPAX_Z(v3);
    *(Block + 1) = 0;
    *((uint8_t *)Block + 13) = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

void  EnumConnectionPointsClass::sub_4A0F20(int this)
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

unsigned int  EnumConnectionPointsClass::sub_4A0F50(int this, int a2)
{
    if ( *(uint8_t *)(this + 12) )
    return (unsigned int)(a2 - *(uint32_t *)(this + 4)) >> 2;
    else
    return 0;
}

char  EnumConnectionPointsClass::sub_4A13C0(void *this, int a2, uint32_t *a3)
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

int  EnumConnectionPointsClass::sub_4A1470(int *this, uint32_t *a2)
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

