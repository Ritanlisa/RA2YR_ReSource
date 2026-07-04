#include "playerclass.hpp"

char  PlayerClass::FindNearestWaypoint(uint32_t *this, int a2, int a3, int a4)
{
    uint32_t **v4; // edi
    int v5; // esi
    uint32_t *v6; // eax
    double v7; // st7
    bool v8; // cc
    int v10; // esi
    int v11; // [esp+18h] [ebp-18h]
    uint32_t *v12; // [esp+1Ch] [ebp-14h]
    if ( !*(this + 24) )
    return 0;
    v4 = (uint32_t **)this;
    v11 = 0;
    v12 = this;
    LABEL_3:
    v5 = 0;
    while ( 1 )
    if ( *v4 )
    v6 = *v4;
    v7 = Math::Sqrt(
    (double)(a2 - *v6) * (double)(a2 - *v6)
    + (double)(a4 - v6[2]) * (double)(a4 - v6[2])
    + (double)(a3 - v6[1]) * (double)(a3 - v6[1]));
    if ( (int)Math::RoundToInt(v7) < 128 )
    break;
    ++v5;
    ++v4;
    if ( v5 >= 3 )
    v4 = (uint32_t **)(v12 + 3);
    v8 = ++v11 < 8;
    v12 += 3;
    if ( v8 )
    goto LABEL_3;
    return 0;
    v10 = *(this + 2 * v11 + v5 + v11);
    if ( !v10 )
    return 0;
    MapClass::UnselectAll_ClearLimboLaunchers();
    *(uint8_t *)(v10 + 12) |= 2u;
    return 1;
}

int  PlayerClass::ProcessOccupancyUpdate(int *this, void ( *a2)(uint8_t *))
{
    int result; // eax
    int v4; // edx
    int v5; // eax
    int v6; // ecx
    int v7; // edi
    int v8; // ebx
    int v9[4]; // [esp+4h] [ebp-10h] BYREF
    if ( *(this + 868) || (result = *(this + 869)) != 0 )
    v4 = *(this + 868);
    v5 = *(this + 870);
    v6 = *(this + 871);
    v7 = *(this + 869);
    if ( v4 > v5 )
    v8 = v4;
    v4 = v5;
    v5 = v8;
    if ( v7 > v6 )
    v7 = v6;
    v6 = *(this + 869);
    v9[2] = v5 - v4 + 1;
    v9[3] = v6 - v7 + 1;
    v9[0] = v4;
    v9[1] = v7;
    BuildingClass::ProcessOccupancy(this, v9, a2);
    *(this + 868) = 0;
    *(this + 869) = 0;
    return 0;
    return result;
}

int  PlayerClass::HasOccupiedCell(int *this)
{
    int v1; // eax
    int v2; // edx
    int v3; // ebx
    int v4; // ebp
    int v5; // edx
    int *i; // esi
    int v7; // eax
    int v8; // edx
    int v10; // [esp+10h] [ebp-14h]
    int v11; // [esp+1Ch] [ebp-8h]
    int v12; // [esp+20h] [ebp-4h]
    v1 = *(this + 870);
    v2 = *(this + 871);
    v3 = *(this + 868);
    v4 = *(this + 869);
    if ( v3 > v1 )
    v3 = *(this + 870);
    v1 = *(this + 868);
    if ( v4 > v2 )
    v4 = *(this + 871);
    v2 = *(this + 869);
    v5 = v2 - v4 + 1;
    v11 = v1 - v3 + 1;
    v12 = v5;
    if ( v11 <= 0 )
    return 0;
    if ( v5 <= 0 )
    return 0;
    v10 = 0;
    if ( *(this + 876) <= 0 )
    return 0;
    for ( i = dword_B0CEC8; ; i += 3 )
    if ( *i )
    if ( *(uint8_t *)(*i + 144) )
    v7 = i[1] - *(this + 44);
    v8 = i[2] - *(this + 45);
    if ( v7 >= v3 && v7 < v3 + v11 && v8 >= v4 && v8 < v4 + v12 )
    break;
    if ( ++v10 >= *(this + 876) )
    return 0;
    return 1;
}

