#include "networklobby.hpp"

int __stdcall NetworkLobby::GetPlayerCount(char a1)
{
    int result; // eax
    result = 2;
    if ( (a1 & 1) != 0 )
    result = 3;
    if ( (a1 & 2) != 0 )
    ++result;
    if ( (a1 & 4) != 0 )
    ++result;
    if ( (a1 & 0x20) != 0 )
    result += 5;
    return result;
}

int  NetworkLobby::AssignPlayerSlot(LPARAM this)
{
    int result; // eax
    LPARAM *v2; // edx
    result = 0;
    v2 = &g_NetworkPlayerName;
    while ( (*v2 != g_HouseClass_ObserverFlags || *(uint32_t *)(this + 107) == -1)
    && (*v2 != g_Lobby_MaxPlayers || *(uint32_t *)(this + 107) != -1) )
    ++v2;
    ++result;
    if ( (int)v2 >= (int)&g_PlayerNameListEnd )
    return -1;
    *(&g_NetworkPlayerName + result) = this;
    return result;
}

char  NetworkLobby::SetupPlayerSlotControls(HWND hDlg)
{
    int i; // edi
    int v3; // esi
    LRESULT v4; // eax
    LRESULT v5; // eax
    char v7; // [esp+13h] [ebp-5h]
    int v8; // [esp+14h] [ebp-4h]
    v7 = 0;
    if ( GameMode_Current[0] == 4 )
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() )
    v8 = 6;
    else
    v8 = 2;
    else
    v8 = 8;
    for ( i = 0; i < 8; ++i )
    if ( i )
    switch ( i )
    case 1:
    v3 = 1042;
    break;
    case 2:
    v3 = 1043;
    break;
    case 3:
    v3 = 1044;
    break;
    case 4:
    v3 = 1045;
    break;
    case 5:
    v3 = 1046;
    break;
    case 6:
    v3 = 1047;
    break;
    default:
    v3 = i != 7 ? -1 : 1048;
    break;
    else
    v3 = 1041;
    v4 = SendDlgItemMessageA(hDlg, v3, 0x147u, 0, 0);
    v5 = SendDlgItemMessageA(hDlg, v3, 0x150u, v4, 0);
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) )
    if ( i >= v8 )
    *(&g_NetworkPlayerName + i) = g_Lobby_PlayerCount;
    else
    *(&g_NetworkPlayerName + i) = g_HouseClass_ObserverFlags;
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0);
    dword_A8B27C[i] = -1;
    g_CampaignPlayerArray[i] = -1;
    g_CampaignConfig[i] = -1;
    v7 = 1;
    return v7;
}

