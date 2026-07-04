#include "scoreanimclass.hpp"

char  ScoreAnimClass::AdvanceFrame(uint32_t *this, int a2)
{
    signed int v3; // edi
    signed int v4; // eax
    int v5; // edi
    DWORD Ticks; // eax
    int v7; // edx
    int v8; // ecx
    int *v9; // eax
    int *v10; // eax
    int v12; // [esp+8h] [ebp-1Ch] BYREF
    int v13; // [esp+Ch] [ebp-18h]
    uint8_t v14[16]; // [esp+14h] [ebp-10h] BYREF
    v3 = *(this + 5);
    if ( *(this + 3) == -1 )
    LABEL_4:
    if ( v3 )
    return 0;
    goto LABEL_5;
    v4 = Timer::GetTicks() - *(this + 3);
    if ( v4 < v3 )
    v3 -= v4;
    goto LABEL_4;
    LABEL_5:
    v5 = *(this + 9);
    Ticks = Timer::GetTicks();
    v7 = *(this + 7);
    v8 = *(this + 8);
    *(this + 3) = Ticks;
    *(this + 4) = v13;
    *(this + 5) = v5;
    *(this + 7) = v7 + 1;
    if ( v7 + 1 >= v8 )
    *(this + 7) = 0;
    v12 = *(this + 1);
    v13 = *(this + 2);
    v9 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Hidden + 120))(DSurface_Hidden, v14);
    DrawToSurfaceSHP(
    DSurface_Hidden,
    *(this + 10),
    *(this + 6),
    *(this + 7),
    &v12,
    v9,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    v12 = *(this + 1);
    v13 = *(this + 2);
    v10 = (int *)(*(int (__thiscall **)(int, uint8_t *))(*(uint32_t *)DSurface_Alternate + 120))(DSurface_Alternate, v14);
    DrawToSurfaceSHP(
    DSurface_Alternate,
    *(this + 10),
    *(this + 6),
    *(this + 7),
    &v12,
    v10,
    1024,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);
    return 0;
}

char __userpurge ScoreAnimClass::sub_690D60@<al>(int a1@<ecx>, signed int a2@<ebp>, int a3)
{
    signed int v4; // edi
    signed int v5; // eax
    int v7; // eax
    int v8; // ecx
    int v9; // edx
    int v10; // eax
    int v11; // ecx
    int v12; // ebx
    char v13; // dl
    int v14; // ebp
    int v16; // [esp+4Ch] [ebp-14h]
    int v17; // [esp+50h] [ebp-10h] BYREF
    int v18; // [esp+54h] [ebp-Ch]
    int v19; // [esp+58h] [ebp-8h]
    int v20; // [esp+5Ch] [ebp-4h]
    byte_B05584 = 1;
    v4 = *(uint32_t *)(a1 + 20);
    if ( *(uint32_t *)(a1 + 12) == -1 )
    LABEL_4:
    if ( v4 )
    return 0;
    goto LABEL_5;
    v5 = Timer::GetTicks() - *(uint32_t *)(a1 + 12);
    if ( v5 < v4 )
    v4 -= v5;
    goto LABEL_4;
    LABEL_5:
    *(uint32_t *)(a1 + 12) = Timer::GetTicks();
    *(uint32_t *)(a1 + 16) = v18;
    *(uint32_t *)(a1 + 20) = 2;
    if ( *(uint32_t *)(a1 + 28) > wcslen(*(const wchar_t **)(a1 + 24)) && *(int *)(a1 + 32) > 2 )
    return 1;
    if ( !*(uint8_t *)(a1 + 36) )
    v7 = (*(int (__thiscall **)(uint32_t, uint32_t))(**(uint32_t **)(a1 + 40) + 8))(
    *(uint32_t *)(a1 + 40),
    *(uint32_t *)(a1 + 24));
    v8 = *(uint32_t *)(a1 + 4) - 8 <= 0 ? 0 : *(uint32_t *)(a1 + 4) - 8;
    v9 = *(uint32_t *)(*(uint32_t *)(a1 + 40) + 8);
    v19 = v7 + 10;
    v17 = v8;
    v18 = *(uint32_t *)(a1 + 8);
    v20 = v9;
    (*(void (__thiscall **)(int, int *, int, int *, uint32_t, int))(*(uint32_t *)DSurface_Hidden + 8))(
    DSurface_Hidden,
    &v17,
    DSurface_Alternate,
    &v17,
    0,
    1);
    v10 = *(uint32_t *)(a1 + 28);
    v11 = 0;
    v12 = *(uint32_t *)(a1 + 4);
    v16 = 0;
    if ( v10 >= 0 )
    while ( 1 )
    v13 = *(uint8_t *)(*(uint32_t *)(a1 + 24) + 2 * v11);
    if ( !v13 )
    break;
    if ( *(uint8_t *)(a1 + 36) == 1 || (v14 = v10 - v11, v10 - v11 >= 2) )
    v14 = 2;
    LOWORD(v4) = v13;
    (*(void (__thiscall **)(uint32_t, int, signed int, int, uint32_t, int, int, signed int))(**(uint32_t **)(a1 + 40) + 16))(
    *(uint32_t *)(a1 + 40),
    DSurface_Hidden,
    v4,
    v12,
    *(uint32_t *)(a1 + 8),
    v14,
    1,
    a2);
    if ( v14 == 2 )
    (*(void (__thiscall **)(uint32_t, int, signed int, int, uint32_t, int, uint32_t))(**(uint32_t **)(a1 + 40) + 16))(
    *(uint32_t *)(a1 + 40),
    DSurface_Alternate,
    v4,
    v12,
    *(uint32_t *)(a1 + 8),
    2,
    0);
    a2 = v4;
    v12 += (*(int (__thiscall **)(uint32_t))(**(uint32_t **)(a1 + 40) + 4))(*(uint32_t *)(a1 + 40)) + 1;
    v10 = *(uint32_t *)(a1 + 28);
    if ( ++v16 > v10 )
    *(uint32_t *)(a1 + 28) = v10 + 1;
    return 0;
    v11 = v16;
    ++*(uint32_t *)(a1 + 32);
    ++*(uint32_t *)(a1 + 28);
    return 0;
}

signed int  ScoreAnimClass::_vt01(signed int *this)
{
    signed int result; // eax
    signed int v3; // edi
    result = *(this + 3);
    if ( result != -1 )
    v3 = *(this + 5);
    result = Timer::GetTicks() - *(this + 3);
    if ( result >= v3 )
    *(this + 5) = 0;
    *(this + 3) = -1;
    else
    *(this + 3) = -1;
    *(this + 5) = v3 - result;
    return result;
}

void  ScoreAnimClass::_vt02(uint32_t *this)
{
    if ( *(this + 3) == -1 )
    *(this + 3) = Timer::GetTicks();
}

uint32_t * ScoreAnimClass::sub_6910A0(uint32_t *Block, char a2)
{
    void *v3; // eax
    char *v4; // eax
    v3 = (void *)*(Block + 3);
    *Block = &ScoreFontClass::`vftable';
    if ( v3 && *((uint8_t *)Block + 16) == 1 )
    __3_YAXPAX_Z(v3);
    *(Block + 3) = 0;
    *((uint8_t *)Block + 16) = 0;
    if ( !--dword_B0558C )
    v4 = &byte_B05594;
    do
    *((uint32_t *)v4 - 1) = 0;
    *v4 = 0;
    v4 += 8;
    while ( (int)v4 < (int)((char *)&dbl_B055A8 + 4) );
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

