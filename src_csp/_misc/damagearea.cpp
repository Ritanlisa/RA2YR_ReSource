#include "damagearea.hpp"

char  DamageArea::CheckOccupancyEligibility(int this)
{
    uint32_t *v2; // esi
    int (__stdcall ***v3)(uint32_t, void *, int *); // ecx
    int v4; // eax
    int v5; // esi
    int v6; // edi
    int v8; // [esp+18h] [ebp-8h] BYREF
    int v9; // [esp+1Ch] [ebp-4h] BYREF
    v2 = *(uint32_t **)(this + 12);
    if ( v2 )
    if ( (*(int (__thiscall **)(uint32_t))(*v2 + 44))(*(uint32_t *)(this + 12)) == 2 )
    if ( (*(int (__stdcall **)(uint32_t *))(v2[432] + 32))(v2 + 432) )
    return 0;
    else
    v2 = 0;
    if ( *(uint8_t *)(this + 81) || !*(uint8_t *)(this + 92) )
    return 1;
    if ( !v2 || !*(uint8_t *)(v2[433] + 3595) )
    v3 = *(int (__stdcall ****)(uint32_t, void *, int *))(this + 12);
    v4 = 0;
    v8 = 0;
    if ( v3 )
    v5 = (**v3)(v3, &unk_822410, &v9);
    if ( v5 >= 0 )
    v6 = v9;
    Release3COM(&v8);
    v4 = v6;
    v8 = v6;
    else
    Release3COM(&v8);
    v4 = 0;
    v8 = 0;
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( v4 )
    if ( !(*(int (__stdcall **)(int))(*(uint32_t *)v4 + 24))(v4) )
    if ( !v8 )
    WinAPI::Wrapper(-2147467261);
    if ( !(*(int (__stdcall **)(int))(*(uint32_t *)v8 + 28))(v8) )
    v4 = v8;
    goto LABEL_24;
    v4 = v8;
    if ( !*(uint32_t *)(*(uint32_t *)(this + 12) + 764) )
    LABEL_24:
    if ( v4 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v4 + 8))(v4);
    return 1;
    if ( v4 )
    (*(void (__stdcall **)(int))(*(uint32_t *)v4 + 8))(v4);
    return 0;
}

// 0x00565660
uint32_t * DamageArea::CalcScatterOffset(uint32_t *this, uint32_t *a2, __int16 *a3)
{
    int v3; // ebx
    int v4; // ebp
    int v5; // esi
    __int16 v6; // di
    int v7; // eax
    int v8; // ecx
    int v9; // ecx
    int v11; // [esp+20h] [ebp+8h]
    v3 = *(this + 61);
    v4 = *(this + 63);
    v5 = a3[1];
    v6 = *a3;
    v7 = *(this + 64);
    v8 = *a3;
    if ( (v3 & 1) != 0 )
    v9 = v8 - v5 + 1;
    else
    v9 = v8 - v5;
    LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4;
    HIWORD(v11) = v6 + v5 - v3 - v7;
    *a2 = v11;
    return a2;
}

