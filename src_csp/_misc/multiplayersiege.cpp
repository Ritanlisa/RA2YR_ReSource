#include "multiplayersiege.hpp"

char MultiplayerSiege::_vt04()
{
    char result; // al
    int v1; // ecx
    result = PlayerClass::AssignPlayerIndex();
    if ( result )
    result = 1;
    if ( Game_PlayerCount > 0 )
    v1 = 1;
    for ( *(uint32_t *)(*(uint32_t *)Game_PlayerInfoArray + 107) = 1;
    v1 < Game_PlayerCount;
    *(uint32_t *)(*(uint32_t *)(Game_PlayerInfoArray + 4) + 107) = 2 )
    ++v1;
    return result;
}

char __stdcall MultiplayerSiege::_vt05(void **a1)
{
    char result; // al
    char v2; // bl
    int v3; // edi
    int v4; // ecx
    int v5; // edx
    int v6; // eax
    int v7; // eax
    wchar_t *StringCSF; // eax
    wchar_t *v9; // eax
    wchar_t *v10; // eax
    wchar_t *v11; // eax
    result = ScenarioClass::MissionStubReturnZero2((int)a1);
    if ( result )
    v2 = 0;
    v3 = 0;
    v4 = 0;
    if ( Game_PlayerCount <= 0 )
    LABEL_12:
    StringCSF = GetStringCSF(aMpNodefender, 0, g_Str_File_MPSiege_cpp, 65);
    WideString::Assign_Alt(a1, StringCSF);
    return 0;
    else
    v5 = Game_PlayerInfoArray;
    do
    v6 = *(uint32_t *)(*(uint32_t *)v5 + 107);
    if ( v6 )
    v7 = v6 - 1;
    if ( v7 )
    if ( v7 != 1 )
    v9 = GetStringCSF(aMpIllegalteam, 0, g_Str_File_MPSiege_cpp, 60);
    WideString::Assign_Alt(a1, v9);
    return 0;
    ++v3;
    else
    if ( v2 )
    v10 = GetStringCSF(aMpOnlyonebesei, 0, g_Str_File_MPSiege_cpp, 51);
    WideString::Assign_Alt(a1, v10);
    return 0;
    v2 = 1;
    ++v4;
    v5 += 4;
    while ( v4 < Game_PlayerCount );
    if ( !v2 )
    goto LABEL_12;
    if ( v3 >= 1 )
    return 1;
    else
    v11 = GetStringCSF(aMpNoattackers, 0, g_Str_File_MPSiege_cpp, 70);
    WideString::Assign_Alt(a1, v11);
    return 0;
    return result;
}

char MultiplayerSiege::_vt15()
{
    return 0;
}

char  MultiplayerSiege::_vt33(void *this, char a2)
{
    int v3; // eax
    int v4; // edx
    void *v5; // eax
    int v6; // eax
    uint32_t *v7; // ebx
    int v8; // eax
    int i; // esi
    uint32_t *v10; // edi
    int *v11; // eax
    uint32_t v13[4]; // [esp+10h] [ebp-28h] BYREF
    void **v14; // [esp+20h] [ebp-18h] BYREF
    void *Block; // [esp+24h] [ebp-14h]
    char v16; // [esp+2Dh] [ebp-Bh]
    Multiplayer::FindStartPositions(&v14);
    v3 = 0;
    memset(v13, 0, sizeof(v13));
    if ( Game_PlayerCount > 0 )
    v4 = Game_PlayerInfoArray;
    do
    if ( *(uint32_t *)(*(uint32_t *)v4 + 107) == 1 )
    break;
    ++v3;
    v4 += 4;
    while ( v3 < Game_PlayerCount );
    if ( v3 >= Game_PlayerCount )
    v5 = Block;
    v14 = &VectorClass<Cell>::`vftable';
    if ( !Block || !v16 )
    return 0;
    goto LABEL_26;
    v6 = *(uint32_t *)(*(uint32_t *)(Game_PlayerInfoArray + 4 * v3) + 111);
    if ( v6 < 0 || v6 >= HouseClass_Count )
    v5 = Block;
    v14 = &VectorClass<Cell>::`vftable';
    if ( !Block || !v16 )
    return 0;
    LABEL_26:
    __3_YAXPAX_Z(v5);
    return 0;
    v7 = *(uint32_t **)&HouseClass_Array->gap0[4 * v6];
    if ( *(uint8_t *)(v7[13] + 422) )
    v5 = Block;
    v14 = &VectorClass<Cell>::`vftable';
    if ( !Block || !v16 )
    return 0;
    goto LABEL_26;
    Debug::Log();
    v8 = *(uint32_t *)Block;
    LOBYTE(v13[0]) = 1;
    HouseClass::SetMapSeed(v7, v8);
    for ( i = 0; i < HouseClass_Count; ++i )
    v10 = *(uint32_t **)&HouseClass_Array->gap0[4 * i];
    if ( !*(uint8_t *)(v10[13] + 422) && v10 != v7 )
    Debug::Log();
    v11 = (int *)(*(int (__thiscall **)(void *, char *, int, void ***, uint32_t *))(*(uint32_t *)this + 196))(
    this,
    &a2,
    i,
    &v14,
    v13);
    HouseClass::SetMapSeed(v10, *v11);
    v14 = &VectorClass<Cell>::`vftable';
    if ( Block && v16 )
    __3_YAXPAX_Z(Block);
    return 1;
}

char __stdcall MultiplayerSiege::_vt48(int a1)
{
    wchar_t **v1; // eax
    wchar_t **v2; // edi
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // edx
    wchar_t **v7; // eax
    wchar_t **v8; // edi
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    int v12; // edx
    wchar_t **v13; // eax
    wchar_t **v14; // edi
    int v15; // ecx
    int v16; // eax
    int v17; // edx
    v1 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v1 )
    v2 = MPCombatTeam::Constructor(v1);
    else
    v2 = 0;
    v3 = *(uint32_t *)(a1 + 8);
    if ( *(uint32_t *)(a1 + 16) < v3
    || (*(uint8_t *)(a1 + 13) || !v3)
    && (v4 = *(uint32_t *)(a1 + 20), v4 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 8))(a1, v3 + v4, 0) )
    v5 = *(uint32_t *)(a1 + 16);
    v6 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 16) = v5 + 1;
    *(uint32_t *)(v6 + 4 * v5) = v2;
    v7 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v7 )
    v8 = MPCombatTeam::MPTeam(v7);
    else
    v8 = 0;
    v9 = *(uint32_t *)(a1 + 8);
    if ( *(uint32_t *)(a1 + 16) < v9
    || (*(uint8_t *)(a1 + 13) || !v9)
    && (v10 = *(uint32_t *)(a1 + 20), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 8))(a1, v9 + v10, 0) )
    v11 = *(uint32_t *)(a1 + 16);
    v12 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 16) = v11 + 1;
    *(uint32_t *)(v12 + 4 * v11) = v8;
    v13 = (wchar_t **)__2_YAPAXI_Z(0xCu);
    if ( v13 )
    v14 = MPCombatTeam::Constructor2(v13);
    else
    v14 = 0;
    v15 = *(uint32_t *)(a1 + 8);
    if ( *(uint32_t *)(a1 + 16) < v15
    || ((LOBYTE(v16) = *(uint8_t *)(a1 + 13), (uint8_t)v16) || !v15)
    && (v16 = *(uint32_t *)(a1 + 20), v16 > 0)
    && (LOBYTE(v16) = (*(int (__thiscall **)(int, int, uint32_t))(*(uint32_t *)a1 + 8))(a1, v15 + v16, 0), (uint8_t)v16) )
    v16 = *(uint32_t *)(a1 + 16);
    v17 = *(uint32_t *)(a1 + 4);
    *(uint32_t *)(a1 + 16) = v16 + 1;
    *(uint32_t *)(v17 + 4 * v16) = v14;
    return v16;
}

char __stdcall MultiplayerSiege::_vt50(uint32_t *ppv, int a2)
{
    int v2; // eax
    int v3; // esi
    uint32_t *BuildableFromArray; // esi
    void *v6; // eax
    int *v7; // eax
    int *v8; // esi
    int v9; // ebx
    uint32_t *StartCoords; // eax
    __int16 *CurrentOption; // eax
    uint32_t v12[3]; // [esp+14h] [ebp-Ch] BYREF
    v2 = 0;
    if ( Game_PlayerCount > 0 )
    v3 = Game_PlayerInfoArray;
    do
    if ( *(uint32_t *)(*(uint32_t *)v3 + 111) == ppv[12] )
    break;
    ++v2;
    v3 += 4;
    while ( v2 < Game_PlayerCount );
    if ( v2 >= Game_PlayerCount )
    AI::CreateMCV(ppv, a2);
    return 0;
    if ( *(uint32_t *)(*(uint32_t *)(Game_PlayerInfoArray + 4 * v2) + 107) != 1 )
    return AI::CreateMCV(ppv, a2);
    BuildableFromArray = HouseClass::FirstBuildableFromArray(ppv, (int)&RulesClass_Instance->BuildDummy[1]);
    if ( !BuildableFromArray )
    return 0;
    v6 = __2_YAPAXI_Z(0x720u);
    if ( !v6 )
    return 0;
    v7 = (int *)BuildingClass::Construct((int)v6, (int)BuildableFromArray, (int)ppv);
    v8 = v7;
    if ( !v7 )
    return 0;
    v9 = *v7;
    StartCoords = HouseClass::GetStartCoords(ppv, v12);
    if ( (*(unsigned __int8 (__thiscall **)(int *, uint32_t *, uint32_t))(v9 + 216))(v8, StartCoords, 0) )
    return 1;
    CurrentOption = (__int16 *)HouseClass::GetCurrentOption(ppv, &a2);
    if ( FindInfantryDeployPosition(v8, CurrentOption, 1) )
    return 1;
    (*(void (__thiscall **)(int *, int))(*v8 + 32))(v8, 1);
    return 0;
}

uint32_t * MultiplayerSiege::_vt00(uint32_t *Block, char a2)
{
    *Block = &MultiplayerSiege::`vftable';
    MultiplayerGameMode::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

