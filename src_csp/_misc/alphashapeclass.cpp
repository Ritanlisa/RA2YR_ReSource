#include "alphashapeclass.hpp"

int  AlphaShapeClass::CTOR(int this, int a2, int a3, int a4)
{
    int v5; // eax
    int v6; // edi
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int i; // edi
    int v11; // edx
    AbstractClass::Constructor((AbstractClass *)this);
    *(uint32_t *)(this + 56) = 0;
    *(uint32_t *)(this + 36) = a2;
    *(uint8_t *)(this + 60) = 0;
    *(uint32_t *)this = &AlphaShapeClass::`vftable';
    *(uint32_t *)(this + 4) = &AlphaShapeClass::`vftable';
    *(uint32_t *)(this + 8) = &AlphaShapeClass::`vftable';
    *(uint32_t *)(this + 12) = &AlphaShapeClass::`vftable';
    v5 = *(uint32_t *)((*(int (__thiscall **)(int))(*(uint32_t *)a2 + 136))(a2) + 172);
    *(uint32_t *)(this + 56) = v5;
    v6 = *(__int16 *)(v5 + 2);
    v7 = *(__int16 *)(v5 + 4);
    *(uint32_t *)(this + 40) = a3;
    *(uint32_t *)(this + 44) = a4;
    *(uint32_t *)(this + 48) = v6;
    *(uint32_t *)(this + 52) = v7;
    if ( g_AlphaShapeLimit < dword_88A0F8
    || (byte_88A0FD || !dword_88A0F8)
    && dword_88A104 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(dword_88A0F0 + 8))(
    &dword_88A0F0,
    dword_88A0F8 + dword_88A104,
    0) )
    v8 = g_AlphaShapeLimit++;
    *((uint32_t *)dword_88A0F4 + v8) = this;
    if ( g_AlphaShapePool < dword_B0F728
    || (byte_B0F72D || !dword_B0F728)
    && dword_B0F734 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, uint32_t))(AbstractClass_Array + 8))(
    &AbstractClass_Array,
    dword_B0F728 + dword_B0F734,
    0) )
    v9 = g_AlphaShapePool++;
    *((uint32_t *)dword_B0F724 + v9) = this;
    if ( !byte_89A134 )
    byte_89A134 = 1;
    for ( i = 0; i < 0x10000; ++i )
    v11 = i % 256 * (i / 256) / 127;
    if ( v11 > 255 )
    LOBYTE(v11) = -1;
    else if ( v11 < 0 )
    LOBYTE(v11) = 0;
    byte_88A118[i] = v11;
    return this;
}

// 0x00420D40
int __stdcall AlphaShapeClass::SD_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1648129412;
    a2[1] = 299005159;
    a2[2] = 1610675640;
    a2[3] = -318126072;
    return 0;
}

// 0x00420D80
int AlphaShapeClass::SD_vt11()
{
    return 62;
}

// 0x00420D90
int AlphaShapeClass::SD_vt12()
{
    return 64;
}

int  AlphaShapeClass::SD_vt13(int this, int a2)
{
    AbstractClass::ProcessPower((void*378 *)this);
    Power::TimerProcess(*(uint32_t *)(this + 40));
    Power::TimerProcess(*(uint32_t *)(this + 44));
    Power::TimerProcess(*(uint32_t *)(this + 48));
    return Power::TimerProcess(*(uint32_t *)(this + 52));
}

// 0x00420DE0
int __stdcall AlphaShapeClass::SD_vt05(uint32_t *a1, int a2)
{
    int Prefix_0; // edi
    Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2);
    if ( Prefix_0 >= 0 )
    if ( a1 )
    AbstractClass::InitVtables(a1, (int)&a2);
    *a1 = &AlphaShapeClass::`vftable';
    a1[1] = &AlphaShapeClass::`vftable';
    a1[2] = &AlphaShapeClass::`vftable';
    a1[3] = &AlphaShapeClass::`vftable';
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 9);
    a1[14] = 0;
    return Prefix_0;
}

int __stdcall AlphaShapeClass::SD_vt06(int *a1, int *a2, int a3)
{
    int Prefix; // eax
    Prefix = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    return Prefix >= 0 ? 0 : Prefix;
}

// 0x00420E70
int  AlphaShapeClass::SD_vt10(int this, int a2, int a3)
{
    int result; // eax
    result = a2;
    if ( a2 == *(uint32_t *)(this + 36) )
    *(uint8_t *)(this + 60) = 1;
    return result;
}

uint32_t * AlphaShapeClass::SDDTOR(uint32_t *Block, char a2)
{
    int v3; // eax
    int v4; // eax
    uint32_t *v6; // [esp+4h] [ebp-4h] BYREF
    *Block = &AlphaShapeClass::`vftable';
    *(Block + 1) = &AlphaShapeClass::`vftable';
    *(Block + 2) = &AlphaShapeClass::`vftable';
    *(Block + 3) = &AlphaShapeClass::`vftable';
    v6 = Block;
    v3 = (*(int (__thiscall **)(int *, uint32_t **))(dword_88A0F0 + 16))(&dword_88A0F0, &v6);
    if ( v3 != -1 && v3 < g_AlphaShapeLimit && v3 < --g_AlphaShapeLimit )
    do
    ++v3;
    *((uint32_t *)dword_88A0F4 + v3 - 1) = *((uint32_t *)dword_88A0F4 + v3);
    while ( v3 < g_AlphaShapeLimit );
    v6 = Block;
    v4 = (*(int (__thiscall **)(int *, uint32_t **))(AbstractClass_Array + 16))(&AbstractClass_Array, &v6);
    if ( v4 != -1 && v4 < g_AlphaShapePool && v4 < --g_AlphaShapePool )
    do
    ++v4;
    *((uint32_t *)dword_B0F724 + v4 - 1) = *((uint32_t *)dword_B0F724 + v4);
    while ( v4 < g_AlphaShapePool );
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

