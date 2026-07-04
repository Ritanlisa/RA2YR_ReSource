#include "skirmishdialog.hpp"

void  SkirmishDialog::HandleGameStart(int this)
{
    int v2; // ebp
    void *v3; // esi
    void *v4; // eax
    void *v5; // eax
    HWND DlgItem; // eax
    uint32_t *v7; // esi
    void *v8; // eax
    void *v9; // eax
    char v10[132]; // [esp+10h] [ebp-188h] BYREF
    wchar_t Destination[130]; // [esp+94h] [ebp-104h] BYREF
    Debug::Log();
    v2 = g_GameRulesOptions;
    strcpy(v10, &::Destination);
    wcscpy(Destination, (const wchar_t *)&MCVRedeploy + 1);
    ShowWindow(*(HWND *)this, 0);
    if ( SkirmishDialog::Show(g_hWnd, this, v2) == 2 )
    g_GameRulesOptions = v2;
    LoadScenarioClassByIndex(v2);
    Session::PrepareGame(*(HWND *)this);
    ShowWindow(*(HWND *)this, 5);
    if ( _strcmpi(
    (const void *)(*(uint32_t *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
    g_Str_File_RandMap_Sed) )
    Session::PrepareGame(*(HWND *)this);
    InvalidateRect(*(HWND *)this, 0, 0);
    else
    v3 = g_UIControlState;
    if ( g_UIControlState )
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v3);
    v4 = __2_YAPAXI_Z(4u);
    if ( v4 )
    v5 = (void *)unknown_libname_27(v4);
    else
    v5 = 0;
    g_UIControlState = v5;
    Surface::LoadToSurfaceSHP((char **)v5, ExistingFileName);
    if ( !*(uint32_t *)g_UIControlState )
    Session::PrepareGame(*(HWND *)this);
    InvalidateRect(*(HWND *)this, 0, 0);
    InvalidateRect(*(HWND *)this, 0, 0);
    else
    ShowWindow(*(HWND *)this, 5);
    if ( LoadScenarioClassByIndex(g_GameRulesOptions) == 1 )
    DlgItem = GetDlgItem(*(HWND *)this, 1448);
    SendMessageA(DlgItem, 0x4B2u, 0, 11055906);
    if ( _strcmpi(
    (const void *)(*(uint32_t *)(g_MultiplayerGameState + 4 * g_GameRulesOptions) + 88),
    g_Str_File_RandMap_Sed) )
    Session::PrepareGame(*(HWND *)this);
    else
    v7 = g_UIControlState;
    if ( g_UIControlState )
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v7);
    v8 = __2_YAPAXI_Z(4u);
    if ( v8 )
    v9 = (void *)unknown_libname_27(v8);
    else
    v9 = 0;
    g_UIControlState = v9;
    Surface::LoadToSurfaceSHP((char **)v9, ExistingFileName);
    v7 = g_UIControlState;
    if ( !*v7 )
    Session::PrepareGame(*(HWND *)this);
    InvalidateRect(*(HWND *)this, 0, 0);
    else
    g_GameRulesOptions = v2;
    *(uint8_t *)(this + 9) = 1;
    Debug::Log();
}

