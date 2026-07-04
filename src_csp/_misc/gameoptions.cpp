#include "gameoptions.hpp"

char  GameOptions::GameSpeedChanged(HWND *this)
{
    HWND (__stdcall *v2)(HWND, int); // edi
    HWND DlgItem; // eax
    int v4; // ecx
    char *v5; // eax
    HWND v6; // eax
    HWND v7; // eax
    LRESULT v8; // eax
    HWND v9; // eax
    HWND v10; // eax
    HWND v11; // eax
    char v12; // al
    HWND v13; // eax
    char v15[112]; // [esp+10h] [ebp-70h] BYREF
    v2 = GetDlgItem;
    DlgItem = GetDlgItem(*this, 1321);
    if ( DlgItem )
    v4 = 6 - SendMessageA(DlgItem, 0x400u, 0, 0);
    if ( *(uint32_t *)g_GameModeOptions != v4 )
    if ( WTFMode == 1 && GameMode_Current[0] && GameMode_Current[0] != 5 )
    v5 = EventClass::Add2(v15, *((uint32_t *)HouseClass_Player + 12), 0xDu, v4);
    if ( Networking_LastEventIndex < 128 )
    qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v5, 0x6Fu);
    v2 = GetDlgItem;
    g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime();
    Networking_NextPacketIndex = ((uint8_t)Networking_NextPacketIndex + 1) & 0x7F;
    ++Networking_LastEventIndex;
    v6 = GetDlgItem(*this, 1322);
    goto LABEL_10;
    else
    *(uint32_t *)g_GameModeOptions = v4;
    v6 = GetDlgItem(*this, 1322);
    LABEL_10:
    if ( v6 )
    dword_A8EB70 = 6 - SendMessageA(v6, 0x400u, 0, 0);
    v7 = v2(*this, 1323);
    if ( v7 )
    v8 = SendMessageA(v7, 0x400u, 0, 0);
    if ( lParam != v8 )
    lParam = v8;
    TacticalClass::Initialize(&MapClass_Instance);
    v9 = v2(*this, 1537);
    if ( v9 )
    byte_A8EB7E = SendMessageA(v9, 0xF0u, 0, 0) == 1;
    SetGlobalFlag(byte_A8EB7E);
    v10 = v2(*this, 1540);
    if ( v10 )
    MCV_DeployModeEnabled = SendMessageA(v10, 0xF0u, 0, 0) == 1;
    v11 = v2(*this, 1538);
    if ( v11 )
    v12 = SendMessageA(v11, 0xF0u, 0, 0) == 1;
    byte_A8EB80 = v12;
    if ( g_TacticalRender )
    if ( WTFMode == 1 )
    Tooltip::Enable((void *)g_TacticalRender, v12);
    LOBYTE(v13) = WTFMode;
    if ( !WTFMode )
    v13 = v2(*this, 1295);
    if ( v13 )
    v13 = (HWND)SendMessageA(v13, 0x400u, 0, 0);
    dword_A8EB64 = (LPARAM)v13;
    return (char)v13;
}

