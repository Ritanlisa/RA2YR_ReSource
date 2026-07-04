#include "connectionpointclass.hpp"

int __stdcall ConnectionPointClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    int v4; // eax
    if ( !a3 )
    return -2147467261;
    v4 = 0;
    if ( !memcmp(a2, &unk_7F7CC0, 0x10u) || !memcmp(a2, &IID_IUnknown, 0x10u) )
    v4 = a1;
    *a3 = v4;
    if ( !v4 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(uint32_t *)v4 + 4))(v4);
    return 0;
}

int __stdcall ConnectionPointClass::_vt03(uint32_t *a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = a1[1];
    a2[1] = a1[2];
    a2[2] = a1[3];
    a2[3] = a1[4];
    return 0;
}

int __stdcall ConnectionPointClass::_vt04(int a1, int a2)
{
    return (***(int (__stdcall ****)(uint32_t, void *, int))(a1 + 24))(*(uint32_t *)(a1 + 24), &unk_7F7CD0, a2);
}

int __stdcall ConnectionPointClass::_vt05(int a1, int (__stdcall ***a2)(uint32_t, int, int *), int *a3)
{
    int v4; // ecx
    int v5; // eax
    int v6; // eax
    int v7; // edx
    int v8; // [esp+14h] [ebp-8h] BYREF
    int v9; // [esp+18h] [ebp-4h]
    if ( !a2 || !a3 )
    return -2147467261;
    v9 = AbstractClass::updateAITimer(ScenarioClass_Instance);
    if ( (**a2)(a2, a1 + 4, &v8) < 0 )
    return -2147220990;
    v4 = *(uint32_t *)(a1 + 36);
    if ( *(uint32_t *)(a1 + 44) >= v4 )
    if ( !*(uint8_t *)(a1 + 41) && v4 )
    return -2147220991;
    v5 = *(uint32_t *)(a1 + 48);
    if ( v5 <= 0
    || !(*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(a1 + 28) + 8))(a1 + 28, v4 + v5, 0) )
    return -2147220991;
    v6 = *(uint32_t *)(a1 + 44);
    v7 = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 44) = v6 + 1;
    *(uint32_t *)(v7 + 8 * v6) = v8;
    *(uint32_t *)(v7 + 8 * v6 + 4) = v9;
    *a3 = v9;
    return 0;
}

int __stdcall ConnectionPointClass::_vt06(int a1, int a2)
{
    int v2; // eax
    int v3; // esi
    uint32_t *i; // ecx
    int v6; // ecx
    int v7; // ecx
    int v8; // ecx
    v2 = 0;
    v3 = *(uint32_t *)(a1 + 44);
    if ( v3 <= 0 )
    return -2147220992;
    for ( i = (uint32_t *)(*(uint32_t *)(a1 + 32) + 4); *i != a2; i += 2 )
    if ( ++v2 >= v3 )
    return -2147220992;
    v6 = *(uint32_t *)(a1 + 44);
    if ( v2 < v6 )
    v7 = v6 - 1;
    for ( *(uint32_t *)(a1 + 44) = v7; v2 < *(uint32_t *)(a1 + 44); *(uint32_t *)(v8 + 8 * v2 - 4) = *(uint32_t *)(v8 + 8 * v2 + 4) )
    v8 = *(uint32_t *)(a1 + 32);
    ++v2;
    *(uint32_t *)(v8 + 8 * v2 - 8) = *(uint32_t *)(v8 + 8 * v2);
    return 0;
}

int __stdcall ConnectionPointClass::_vt07(uint32_t *a1, int a2)
{
    uint32_t *v3; // edi
    int v4; // eax
    void *v5; // eax
    int v6; // eax
    int v7; // ecx
    uint32_t *v8; // edx
    uint32_t *v9; // eax
    int i; // esi
    int v11; // [esp-Ch] [ebp-14h]
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
    if ( v3 + 1 != a1 + 7 )
    VectorClass::ClearAndFree2((int)(v3 + 1));
    v4 = a1[9];
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
    v8 = (uint32_t *)(a1[8] + 8 * v7);
    v9 = (uint32_t *)(v3[2] + 8 * v7++);
    *v9 = *v8;
    v9[1] = v8[1];
    while ( v7 < v3[3] );
    else
    v3[2] = 0;
    *((uint8_t *)v3 + 17) = 0;
    v3[5] = a1[11];
    v3[6] = a1[12];
    v3[1] = &DynamicVectorClass<tagCONNECTDATA>::`vftable';
    v3[7] = 0;
    v3[8] = 0;
    *v3 = &EnumConnectionsClass::`vftable';
    for ( i = 0; i < v3[5]; ++i )
    v11 = *(uint32_t *)(v3[2] + 8 * i);
    (*(void (__stdcall **)(int))(*(uint32_t *)v11 + 4))(v11);
    return (*(int (__stdcall **)(uint32_t *, void *, int))*v3)(v3, &unk_7F7CB0, a2);
}

