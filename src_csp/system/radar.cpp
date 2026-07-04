#include "radar.hpp"

int  Radar::FindNearestRadarTarget(uint32_t *this, int a2, int a3, int a4)
{
    uint32_t **v4; // edi
    int i; // esi
    uint32_t *v6; // eax
    double v7; // st7
    bool v8; // cc
    int v10; // [esp+18h] [ebp-18h]
    uint32_t *v11; // [esp+1Ch] [ebp-14h]
    if ( *(this + 24) )
    v4 = (uint32_t **)this;
    v10 = 0;
    v11 = this;
    while ( 2 )
    for ( i = 0; i < 3; ++i )
    if ( *v4 )
    v6 = *v4;
    v7 = Math::Sqrt(
    (double)(a2 - *v6) * (double)(a2 - *v6)
    + (double)(a4 - v6[2]) * (double)(a4 - v6[2])
    + (double)(a3 - v6[1]) * (double)(a3 - v6[1]));
    if ( (int)Math::RoundToInt(v7) < 128 )
    return *(this + 2 * v10 + i + v10);
    ++v4;
    v4 = (uint32_t **)(v11 + 3);
    v8 = ++v10 < 8;
    v11 += 3;
    if ( v8 )
    continue;
    break;
    return 0;
}

// 0x005090F0
bool  Radar::IsRadarTargetEligible(unsigned int *this)
{
    unsigned int v1; // eax
    int v2; // eax
    v1 = *(this + 131);
    if ( v1 >= 0xC )
    return 0;
    v2 = *(this + v1 + 132);
    return *(uint32_t *)(v2 + 56) < RulesClass_Instance->InfantryExplode && *(uint32_t *)(v2 + 36) == -1;
}

int * Radar::CopyDataArray(int *this, int *a2)
{
    int v3; // edi
    char *v4; // eax
    char *v5; // ecx
    int v6; // edx
    int v7; // ecx
    int v8; // eax
    int v9; // edx
    int v10; // ecx
    if ( this != a2 )
    (*(void (__thiscall **)(int *))(*this + 12))(this);
    v3 = a2[2];
    *(this + 2) = v3;
    if ( v3 )
    v4 = (char *)__2_YAPAXI_Z(8 * v3);
    if ( v4 )
    v5 = v4;
    if ( v3 - 1 >= 0 )
    v6 = v3;
    do
    *(uint32_t *)v5 = 0;
    v5[4] = 0;
    v5 += 8;
    --v6;
    while ( v6 );
    else
    v4 = 0;
    *(this + 1) = (int)v4;
    if ( v4 )
    v7 = *(this + 2);
    v8 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v7 > 0 )
    do
    v9 = a2[1];
    v10 = *(this + 1);
    *(uint32_t *)(v10 + 8 * v8) = *(uint32_t *)(v9 + 8 * v8);
    *(uint32_t *)(v10 + 8 * v8 + 4) = *(uint32_t *)(v9 + 8 * v8 + 4);
    ++v8;
    while ( v8 < *(this + 2) );
    else
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    *(this + 4) = a2[4];
    *(this + 5) = a2[5];
    return this;
}

