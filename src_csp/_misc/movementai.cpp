#include "movementai.hpp"

bool  MovementAI::IsPathMovementAllowed(uint32_t *this)
{
    uint32_t *v2; // esi
    if ( !WTFMode )
    return *(this + 64) != 0;
    v2 = (uint32_t *)*(this + 57);
    if ( !v2 )
    return *(this + 64) != 0;
    while ( (*(int (__thiscall **)(uint32_t *))(*v2 + 44))(v2) != 6 )
    v2 = (uint32_t *)v2[12];
    if ( !v2 )
    return *(this + 64) != 0;
    return *(this + 64) != 1 && *(this + 64) != 0;
}

bool  MovementAI::IsProgressAtEnd(int this)
{
    int v1; // esi
    int v2; // edx
    int v3; // eax
    if ( !*(uint8_t *)(this + 24) )
    return 1;
    v1 = *(uint32_t *)(this + 20);
    if ( !v1 )
    return 1;
    v2 = *(uint32_t *)(this + 8);
    v3 = *(uint32_t *)(this + 16);
    if ( v2 != -1 )
    if ( (int)CurrentFrame - v2 >= v3 )
    v3 = 0;
    else
    v3 -= (int)CurrentFrame - v2;
    return (double)(v1 - v3) / (double)*(int *)(this + 20) == 1.0;
}

// 0x005163B0
char  MovementAI::MarkOccupiedPathCell(uint32_t *this)
{
    int v2; // eax
    int v3; // ecx
    int v4; // ecx
    uint32_t *v5; // eax
    double v6; // st7
    int v7; // eax
    uint32_t *v9; // ecx
    int v10; // [esp+18h] [ebp-14h]
    int v11; // [esp+1Ch] [ebp-10h]
    uint8_t v12[12]; // [esp+20h] [ebp-Ch] BYREF
    if ( !(*(unsigned __int8 (__stdcall **)(uint32_t *))(*(this + 1) + 16))(this + 1) )
    return 0;
    v2 = *(this + 3);
    if ( *(uint32_t *)(v2 + 1504) == -1 )
    return 0;
    v3 = *(uint32_t *)(v2 + 1444);
    if ( v3 && (*(int (__thiscall **)(int))(*(uint32_t *)v3 + 44))(v3) == 1
    || (v4 = *(uint32_t *)(*(this + 3) + 1444)) != 0 && (*(int (__thiscall **)(int))(*(uint32_t *)v4 + 44))(v4) == 15 )
    v5 = (uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)*(this + 3) + 72))(*(this + 3), v12);
    v10 = v5[1] - *(this + 7);
    v11 = v5[2] - *(this + 8);
    v6 = Math::Sqrt(
    (double)(*v5 - *(this + 6)) * (double)(*v5 - *(this + 6))
    + (double)v10 * (double)v10
    + (double)v11 * (double)v11);
    v7 = (int)Math::RoundToInt(v6) / 256;
    if ( v7 < 24 )
    *(uint32_t *)(*(this + 3) + 4 * v7 + 1504) = -1;
    return 1;
    v9 = (uint32_t *)*(this + 3);
    if ( !v9[173] || !(*(unsigned __int8 (__thiscall **)(uint32_t *, uint32_t))(*v9 + 940))(v9, v9[173]) )
    return 0;
    *(uint32_t *)(*(this + 3) + 1504) = -1;
    return 1;
}

