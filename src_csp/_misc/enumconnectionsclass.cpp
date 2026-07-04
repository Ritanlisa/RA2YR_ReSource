#include "enumconnectionsclass.hpp"

int __stdcall EnumConnectionsClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &unk_7F7CB0, 0x10u) )
    *a3 = a1;
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall EnumConnectionsClass::_vt03(uint32_t *a1, unsigned int a2, int a3, uint32_t *a4)
{
    int v4; // edi
    int v6; // ebp
    unsigned int i; // ebx
    int v8; // eax
    int v9; // eax
    int v10; // ecx
    int v11; // [esp-10h] [ebp-14h]
    v4 = a3;
    if ( !a3 )
    return -2147467261;
    if ( a2 > 1 )
    if ( !a4 )
    return -2147024809;
    goto LABEL_7;
    if ( a4 )
    LABEL_7:
    *a4 = 0;
    v6 = 0;
    for ( i = 0; i < a2; *(uint32_t *)(v4 - 4) = *(uint32_t *)(v10 + 8 * v9 + 4) )
    v8 = a1[7];
    if ( v8 >= a1[5] )
    break;
    v11 = *(uint32_t *)(a1[2] + 8 * v8);
    (*(void (__stdcall **)(int))(*(uint32_t *)v11 + 4))(v11);
    v9 = a1[7];
    v4 += 8;
    ++v6;
    ++i;
    a1[7] = v9 + 1;
    v10 = a1[2];
    *(uint32_t *)(v4 - 8) = *(uint32_t *)(v10 + 8 * v9);
    if ( a4 )
    *a4 = v6;
    return v6 != 0 ? 0 : -2147467259;
}

int __stdcall EnumConnectionsClass::_vt04(int a1, int a2)
{
    *(uint32_t *)(a1 + 28) += a2;
    return 0;
}

int __stdcall EnumConnectionsClass::_vt05(int a1)
{
    *(uint32_t *)(a1 + 28) = 0;
    return 0;
}

int __stdcall EnumConnectionsClass::_vt06(uint32_t *a1, uint32_t *a2)
{
    uint32_t *v3; // edi
    int v4; // eax
    void *v5; // eax
    int v6; // eax
    int v7; // ecx
    uint32_t *v8; // edx
    uint32_t *v9; // eax
    int v10; // eax
    int i; // esi
    int v12; // eax
    int v13; // [esp-Ch] [ebp-14h]
    if ( !a2 )
    return -2147467261;
    v3 = __2_YAPAXI_Z(0x24u);
    if ( !v3 )
    return -2147024882;
    v3[2] = 0;
    v3[3] = 0;
    *((uint8_t *)v3 + 16) = 1;
    *((uint8_t *)v3 + 17) = 0;
    v3[1] = &VectorClass<tagCONNECTDATA>::`vftable';
    if ( v3 + 1 != a1 + 1 )
    VectorClass::ClearAndFree2((int)(v3 + 1));
    v4 = a1[3];
    v3[3] = v4;
    if ( v4 )
    v5 = __2_YAPAXI_Z(8 * v4);
    v3[2] = v5;
    if ( v5 )
    v6 = v3[3];
    v7 = 0;
    *((uint8_t *)v3 + 17) = 1;
    if ( v6 > 0 )
    do
    v8 = (uint32_t *)(a1[2] + 8 * v7);
    v9 = (uint32_t *)(v3[2] + 8 * v7++);
    *v9 = *v8;
    v9[1] = v8[1];
    while ( v7 < v3[3] );
    else
    v3[2] = 0;
    *((uint8_t *)v3 + 17) = 0;
    v3[5] = a1[5];
    v3[6] = a1[6];
    v3[1] = &DynamicVectorClass<tagCONNECTDATA>::`vftable';
    v10 = a1[7];
    v3[8] = 0;
    v3[7] = v10;
    *v3 = &EnumConnectionsClass::`vftable';
    for ( i = 0; i < v3[5]; ++i )
    v13 = *(uint32_t *)(v3[2] + 8 * i);
    (*(void (__stdcall **)(int))(*(uint32_t *)v13 + 4))(v13);
    v12 = *v3;
    v3[8] = 0;
    (*(void (__stdcall **)(uint32_t *))(v12 + 4))(v3);
    *a2 = v3;
    return 0;
}

