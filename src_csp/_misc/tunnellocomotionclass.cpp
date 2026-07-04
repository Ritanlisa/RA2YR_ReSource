#include "tunnellocomotionclass.hpp"

// 0x00728C00
void __stdcall TunnelLocomotionClass::ProcessFormationPosition(uint32_t *a1)
{
    uint32_t *v2; // esi
    int v3; // eax
    int v4; // edx
    double v5; // st7
    int TileIndexMapClass; // eax
    int v7; // eax
    int v8; // [esp+14h] [ebp-20h] BYREF
    __int16 v9[2]; // [esp+18h] [ebp-1Ch] BYREF
    __int16 v10[2]; // [esp+1Ch] [ebp-18h] BYREF
    uint8_t v11[4]; // [esp+20h] [ebp-14h] BYREF
    int v12; // [esp+24h] [ebp-10h] BYREF
    int v13; // [esp+28h] [ebp-Ch] BYREF
    int v14; // [esp+2Ch] [ebp-8h]
    int v15; // [esp+30h] [ebp-4h]
    unsigned __int16 v16; // [esp+3Ah] [ebp+6h]
    switch ( a1[5] )
    case 1:
    case 5:
    case 6:
    case 7:
    goto LABEL_11;
    case 2:
    a1[5] = 7;
    goto LABEL_11;
    case 3:
    a1[5] = 5;
    LABEL_11:
    a1[6] = dword_B0F910;
    a1[7] = dword_B0F914;
    a1[8] = dword_B0F918;
    break;
    case 4:
    v2 = a1 + 6;
    v3 = *(uint32_t *)(a1[2] + 156);
    v4 = *(uint32_t *)(a1[2] + 164);
    v14 = *(uint32_t *)(a1[2] + 160) - a1[7];
    v15 = v4;
    v13 = v3 - a1[6];
    v5 = Math::Sqrt((double)v13 * (double)v13 + (double)v14 * (double)v14);
    if ( (double)(int)Math::RoundToInt(v5) > dbl_B0F8F8 )
    v8 = *(uint32_t *)(*(int (__thiscall **)(uint32_t, uint8_t *))(*(uint32_t *)a1[2] + 440))(a1[2], v11);
    v9[0] = 0;
    v9[1] = 0;
    TileIndexMapClass = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&v8, 0, 0);
    v7 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)&v12,
    &v12,
    (__int16 *)&v8,
    1,
    TileIndexMapClass,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    v9,
    0,
    0);
    v16 = HIWORD(v7);
    if ( (_WORD)v7 != (_WORD)dword_B0F8F0 )
    goto LABEL_8;
    if ( HIWORD(v7) == HIWORD(dword_B0F8F0) )
    v10[0] = 0;
    v10[1] = 0;
    v7 = *LayerClass::Pathfinding_Find(
    &MapClass_Instance,
    (int)v10,
    &v13,
    (__int16 *)&v8,
    1,
    -1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    v10,
    0,
    0);
    v16 = HIWORD(v7);
    if ( __PAIR32__(v16, v7) == dword_B0F8F0 )
    (*(void (__stdcall **)(int, uint32_t, int, uint32_t, int, int, uint32_t))(*(uint32_t *)a1[2] + 364))(
    a1[2] + 108,
    0,
    RulesClass_Instance->SilverCrate[5],
    0,
    1,
    1,
    0);
    *v2 = dword_B0F910;
    a1[7] = dword_B0F914;
    a1[8] = dword_B0F918;
    else
    LABEL_8:
    *v2 = ((__int16)v7 << 8) + 128;
    a1[7] = ((__int16)v16 << 8) + 128;
    a1[8] = 0;
    break;
    default:
    return;
}

int __stdcall TunnelLocomotionClass::_vt03(int a1, uint32_t *a2)
{
    if ( !a2 )
    return -2147467261;
    *a2 = 1247291203;
    a2[1] = 298948665;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

int __stdcall TunnelLocomotionClass::_vt05(int *a1, int *a2)
{
    int result; // eax
    wchar_t *v3; // edx
    result = SwizzleManager::SaveLoad(a1, a2);
    if ( result >= 0 )
    if ( a1 )
    *a1 = (int)&LocomotionClass::`vftable';
    a1[1] = (int)&LocomotionClass::`vftable';
    v3 = CurrentFrame;
    a1[12] = 0;
    a1[10] = (int)v3;
    a1[13] = 0;
    *a1 = (int)&TunnelLocomotionClass::`vftable';
    a1[1] = (int)&TunnelLocomotionClass::`vftable';
    return result;
}

int TunnelLocomotionClass::_vt09()
{
    return 60;
}

uint32_t * TunnelLocomotionClass::_vt08(uint32_t *Block, char a2)
{
    LocomotionClass::Construct(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

