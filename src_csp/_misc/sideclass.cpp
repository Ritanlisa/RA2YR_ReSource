#include "sideclass.hpp"

int  SideClass::_vt13(int this, int *a2)
{
    AbstractTypeClass::ProcessPower((char *)this, a2);
    return Power::TimerProcess(*(uint32_t *)(this + 168));
}

int __stdcall SideClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -985803918;
    a2[1] = 298980638;
    a2[2] = 1610642817;
    a2[3] = -1252326136;
    return 0;
}

// 0x006A4780
int __stdcall SideClass::SaveLoad_Prefix(uint32_t *a1, int a2)
{
    int v2; // esi
    int v3; // edi
    int result; // eax
    int v5; // esi
    int i; // ebp
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    v2 = (int)a1;
    v3 = a2;
    result = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( result >= 0 )
    if ( v2 )
    AbstractTypeClass::Init(v2, (int)&a2);
    *(uint32_t *)(v2 + 156) = 0;
    *(uint32_t *)(v2 + 160) = 0;
    *(uint8_t *)(v2 + 164) = 1;
    *(uint8_t *)(v2 + 165) = 0;
    *(uint32_t *)(v2 + 172) = 10;
    *(uint32_t *)(v2 + 168) = 0;
    *(uint32_t *)(v2 + 152) = &TypeList<int>::`vftable';
    *(uint32_t *)v2 = &SideClass::`vftable';
    *(uint32_t *)(v2 + 4) = &SideClass::`vftable';
    *(uint32_t *)(v2 + 8) = &SideClass::`vftable';
    *(uint32_t *)(v2 + 12) = &SideClass::`vftable';
    v5 = v2 + 152;
    if ( v5 )
    *(uint32_t *)(v5 + 4) = 0;
    *(uint32_t *)(v5 + 8) = 0;
    *(uint8_t *)(v5 + 12) = 1;
    *(uint8_t *)(v5 + 13) = 0;
    *(uint32_t *)(v5 + 20) = 10;
    *(uint32_t *)(v5 + 16) = 0;
    *(uint32_t *)v5 = &TypeList<int>::`vftable';
    (*(void (__stdcall **)(int, int *, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &a2, 4, 0);
    for ( i = 0; i < a2; ++i )
    (*(void (__stdcall **)(int, uint32_t **, int, uint32_t))(*(uint32_t *)v3 + 12))(v3, &a1, 4, 0);
    v7 = *(uint32_t *)(v5 + 8);
    if ( *(uint32_t *)(v5 + 16) >= v7 )
    if ( !*(uint8_t *)(v5 + 13) && v7 )
    continue;
    v8 = *(uint32_t *)(v5 + 20);
    if ( v8 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)v5 + 8))(v5, v7 + v8, 0) )
    continue;
    v9 = *(uint32_t *)(v5 + 16);
    v10 = *(uint32_t *)(v5 + 4);
    *(uint32_t *)(v5 + 16) = v9 + 1;
    *(uint32_t *)(v10 + 4 * v9) = a1;
    return 0;
    return result;
}

// 0x006A48A0
int __stdcall SideClass::SaveLoad_Prefix_0(int *a1, int *a2, int a3)
{
    int result; // eax
    int v4; // edx
    int i; // esi
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    v4 = *a2;
    a3 = a1[42];
    (*(void (__stdcall **)(int *, int *, int, uint32_t))(v4 + 16))(a2, &a3, 4, 0);
    for ( i = 0; i < a3; ++i )
    (*(void (__stdcall **)(int *, int, int, uint32_t))(*a2 + 16))(a2, a1[39] + 4 * i, 4, 0);
    return 0;
    return result;
}

int SideClass::_vt12()
{
    return 180;
}

int SideClass::_vt11()
{
    return 28;
}

void ** SideClass::_vt08(void **Block, char a2)
{
    int v3; // eax
    void *v4; // eax
    void **v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &SideClass::`vftable';
    *(Block + 1) = &SideClass::`vftable';
    *(Block + 2) = &SideClass::`vftable';
    *(Block + 3) = &SideClass::`vftable';
    AbstractClass::AnnounceExpiredPointer(Block, 1);
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, void ***))(dword_8B4120 + 16))(&dword_8B4120, &v6);
    if ( v3 != -1 && v3 < g_ObjectTypeList && v3 < --g_ObjectTypeList )
    do
    ++v3;
    *((uint32_t *)dword_8B4124 + v3 - 1) = *((uint32_t *)dword_8B4124 + v3);
    while ( v3 < g_ObjectTypeList );
    v4 = *(Block + 39);
    *(Block + 38) = &VectorClass<int>::`vftable';
    if ( v4 && *((uint8_t *)Block + 165) )
    __3_YAXPAX_Z(v4);
    *(Block + 39) = 0;
    *((uint8_t *)Block + 165) = 0;
    *(Block + 40) = 0;
    AbstractTypeClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

