#include "tactical.hpp"

unsigned int  Tactical::SetTacticalPosition(int this, int *a2)
{
    int v3; // esi
    int v4; // ebx
    int v5; // esi
    int v6; // ebx
    unsigned int result; // eax
    int v8; // [esp+10h] [ebp-8h] BYREF
    int v9; // [esp+14h] [ebp-4h]
    v3 = *a2;
    v9 = a2[1];
    v8 = -60 * v9 / 2 + 60 * v3 / 2;
    v4 = 30 * v9 / 2 + 30 * v3 / 2;
    v5 = v8 / 256;
    v6 = v4 / 256 - ZCoordToScreenY(a2[2]);
    v8 /= 256;
    v9 = v6;
    if ( ClampCoordMap(&v8) && !ArmageddonMode )
    v5 = v8;
    v6 = v9;
    *(uint32_t *)(this + 3428) = v5;
    *(uint32_t *)(this + 3444) = v5;
    *(uint32_t *)(this + 3432) = v6;
    *(uint32_t *)(this + 3448) = v6;
    result = TacticalClass::CalcViewportCells(this);
    *(uint8_t *)(this + 3453) = 1;
    return result;
}

int *__stdcall Tactical::_vt10(int a1, int a2)
{
    int *result; // eax
    result = dword_B0CEC8;
    do
    if ( *result == a1 )
    *result = 0;
    result += 3;
    while ( (int)result < (int)&dword_B0E638 );
    if ( a1 == dword_880978 )
    result = (int *)MIXClass::CopyHeader((int)&MapClass_Instance, 0);
    dword_880978 = 0;
    dword_88097C = 0;
    dword_880980 = -1;
    return result;
}

char  Tactical::_vt24(uint32_t *this, int *a2, int *a3, int a4, int a5)
{
    uint32_t *v6; // eax
    int v7; // ebx
    int v8; // esi
    int v9; // ecx
    int v10; // edx
    int v11; // eax
    int v12; // ecx
    int v13; // esi
    int v14; // ecx
    uint32_t *v15; // eax
    int v16; // ecx
    __int64 v17; // rax
    int v18; // esi
    int v19; // eax
    int v20; // esi
    int v21; // eax
    int v22; // esi
    int v23; // edi
    int v24; // eax
    int v26; // [esp-8h] [ebp-38h]
    int v27; // [esp-8h] [ebp-38h]
    int v28; // [esp+10h] [ebp-20h] BYREF
    int v29; // [esp+18h] [ebp-18h] BYREF
    int v30; // [esp+1Ch] [ebp-14h]
    uint32_t v31[2]; // [esp+20h] [ebp-10h] BYREF
    uint32_t v32[2]; // [esp+28h] [ebp-8h] BYREF
    BOOL v33; // [esp+38h] [ebp+8h]
    v6 = IsoCoord::ToPixel(&v29, *a2, a2[1]);
    v7 = v6[1];
    v8 = *v6 / 256;
    v9 = ZCoordToScreenY(a2[2]);
    v10 = *(this + 45);
    v11 = v7 / 256 - v9;
    v12 = *(this + 44);
    v32[0] = v8;
    v13 = v8 - v12;
    v14 = a3[1];
    v32[1] = v11 - v10;
    v26 = *a3;
    v32[0] = v13;
    v15 = IsoCoord::ToPixel(&v28, v26, v14);
    v16 = v15[1];
    v17 = (int)*v15;
    v30 = v16;
    v18 = (BYTE4(v17) + (int)v17) >> 8;
    v19 = ZCoordToScreenY(a3[2]);
    v31[0] = v18;
    v20 = v18 - *(this + 44);
    v31[1] = v30 / 256 - v19 - *(this + 45);
    v21 = a3[2];
    v31[0] = v20;
    v28 = v21;
    v29 = a2[2];
    v33 = v29 >= 728;
    v22 = DSurface_Hidden_2;
    v23 = *(uint32_t *)DSurface_Hidden_2;
    v27 = 14 - Math::RoundToInt((double)v21 * dbl_B0CD48 + (double)(v21 >= 728) + 0.5);
    v24 = Math::RoundToInt((double)v29 * dbl_B0CD48 + (double)v33 + 0.5);
    (*(void (__thiscall **)(int, int *, uint32_t *, uint32_t *, int, int, int, int))(v23 + 52))(
    v22,
    &DSurface_ViewBounds,
    v32,
    v31,
    a4,
    14 - v24,
    v27,
    a5);
    return 1;
}

int __stdcall Tactical::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = -816401526;
    a2[1] = 298984461;
    a2[2] = 1610644609;
    a2[3] = -1252326136;
    return 0;
}

int __stdcall Tactical::_vt05(int a1, int a2)
{
    int result; // eax
    int v3; // eax
    int v4; // edi
    int *v5; // ebx
    int v6; // eax
    int v7; // eax
    int v8; // ecx
    int v9; // [esp+4h] [ebp-8h] BYREF
    int v10; // [esp+8h] [ebp-4h]
    result = AbstractClass::SaveLoad_Prefix_0((uint32_t *)a1, a2);
    if ( result >= 0 )
    if ( a1 )
    SmallFunc_6D1E30((uint32_t *)a1, (int)&a2);
    v3 = *(uint32_t *)(a1 + 224);
    v4 = 0;
    *(uint32_t *)(a1 + 3504) = 0;
    if ( v3 > 0 )
    v5 = (int *)(a1 + 228);
    do
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v5);
    ++v4;
    ++v5;
    while ( v4 < *(uint32_t *)(a1 + 224) );
    v6 = *(uint32_t *)(a1 + 3432);
    v9 = *(uint32_t *)(a1 + 3428);
    v10 = v6;
    if ( !ClampCoordMap(&v9) || ArmageddonMode )
    v7 = *(uint32_t *)(a1 + 3428);
    v8 = *(uint32_t *)(a1 + 3432);
    else
    v7 = v9;
    v8 = v10;
    *(uint32_t *)(a1 + 3428) = v7;
    *(uint32_t *)(a1 + 3444) = v7;
    *(uint32_t *)(a1 + 3432) = v8;
    *(uint32_t *)(a1 + 3448) = v8;
    TacticalClass::CalcViewportCells(a1);
    *(uint8_t *)(a1 + 3453) = 1;
    return 0;
    return result;
}

int __stdcall Tactical::_vt06(int *a1, int *a2, int a3)
{
    int result; // eax
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
    return 0;
    return result;
}

int Tactical::_vt11()
{
    return 56;
}

int Tactical::_vt12()
{
    return 3608;
}

uint32_t * Tactical::_vt08(uint32_t *Block, char a2)
{
    *Block = &Tactical::`vftable';
    *(Block + 1) = &Tactical::`vftable';
    *(Block + 2) = &Tactical::`vftable';
    *(Block + 3) = &Tactical::`vftable';
    TacticalClass_Instance = 0;
    AbstractClass::DTOR(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

