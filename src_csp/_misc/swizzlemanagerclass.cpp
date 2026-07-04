#include "swizzlemanagerclass.hpp"

// 0x006CF2C0
int __stdcall SwizzleManagerClass::Here_I_Am(int a1, int a2, int a3)
{
    int v3; // eax
    int v4; // ecx
    int v5; // eax
    int v6; // edx
    v3 = *(uint32_t *)(a1 + 36);
    if ( *(uint32_t *)(a1 + 44) < v3
    || (*(uint8_t *)(a1 + 41) || !v3)
    && (v4 = *(uint32_t *)(a1 + 48), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)(a1 + 28) + 8))(a1 + 28, v3 + v4, 0) )
    v5 = *(uint32_t *)(a1 + 44);
    v6 = *(uint32_t *)(a1 + 32);
    *(uint32_t *)(a1 + 44) = v5 + 1;
    *(uint32_t *)(v6 + 8 * v5) = a2;
    *(uint32_t *)(v6 + 8 * v5 + 4) = a3;
    return 0;
}

int  SwizzleManagerClass::ConvertNodes(int this)
{
    int result; // eax
    signed int v3; // eax
    signed int v4; // eax
    uint32_t *v5; // ecx
    int v6; // ebx
    int v7; // ebp
    uint32_t *v8; // edi
    uint32_t *v9; // edx
    int v10; // edx
    result = *(uint32_t *)(this + 20);
    if ( result )
    v3 = *(uint32_t *)(this + 44);
    if ( v3 > 0 )
    qsort(*(void **)(this + 32), v3, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0CF320);
    v4 = *(uint32_t *)(this + 20);
    if ( v4 > 0 )
    qsort(*(void **)(this + 8), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)globalHelper_0CF320);
    v5 = *(uint32_t **)(this + 32);
    v6 = *(uint32_t *)(this + 44);
    v7 = *(uint32_t *)(this + 20);
    v8 = *(uint32_t **)(this + 8);
    while ( v7 > 0 )
    if ( *v8 == *v5 )
    v9 = (uint32_t *)v8[1];
    v8 += 2;
    --v7;
    *v9 = v5[1];
    else if ( *v8 > *v5 )
    do
    v10 = v5[2];
    v5 += 2;
    --v6;
    while ( *v8 > v10 );
    (*(void (__thiscall **)(int))(*(uint32_t *)(this + 4) + 12))(this + 4);
    return (*(int (__thiscall **)(int))(*(uint32_t *)(this + 28) + 12))(this + 28);
    return result;
}

int __stdcall SwizzleManagerClass::_vt09(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 4;
    return 0;
}

int __stdcall SwizzleManagerClass::_vt00(int a1, const void *a2, uint32_t *a3)
{
    if ( !a3 )
    return -2147467261;
    if ( memcmp(a2, &IID_ISwizzle, 0x10u) && memcmp(a2, &IID_IUnknown, 0x10u) )
    return -2147467262;
    *a3 = a1;
    (*(void (__stdcall **)(int))(*(uint32_t *)a1 + 4))(a1);
    return 0;
}

int __stdcall SwizzleManagerClass::_vt05(int a1, int a2, uint32_t *a3)
{
    if ( !a2 || !a3 )
    return -2147467261;
    *a3 = a2;
    return 0;
}

int __stdcall SwizzleManagerClass::_vt01(int a1)
{
    return 1;
}

int __stdcall SwizzleManagerClass::_vt02(int a1)
{
    return 1;
}

int __stdcall SwizzleManagerClass::_vt07(int a1, int a2, int a3)
{
    return -2147467263;
}

int __stdcall SwizzleManagerClass::_vt08(int a1, int a2, int a3, int a4)
{
    return -2147467263;
}

