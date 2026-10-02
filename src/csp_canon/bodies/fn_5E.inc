// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005E26C0  Dialog::FindGameUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Dialog::FindGameUI()
{
{
    int result;
    result = Dialog::FindByHandle((void *)0xC2);
    if ( !result )
  {
    result = Dialog::FindByHandle((void *)0xC9);
    if ( !result )
    {
    result = Dialog::FindByHandle((void *)0xBC);
    if ( !result )
    return Dialog::FindByHandle((void *)0xBD);
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005E2700  Dialog::ShowMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND Dialog::ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ... a4)
{
{
    HWND result;
    ObjectClass *Current;
    HWND DlgItem;
    ObjectClass *v5;
    wchar_t Buffer[1024];
    va_list va;
    va_start(va, Format);
    memset(Buffer, 0, sizeof(Buffer));
    vswprintf(Buffer, BufferCount, &Format, (SessionClass *)v5);
    result = Dialog::GetCurrent();
    if ( result )
  {
    Current = (ObjectClass *)Dialog::GetCurrent();
    DlgItem = GetDlgItem((HWND)Current, 1343);
    if ( DlgItem )
    {
    return (HWND)DrawDialogText(aP0, Buffer, DlgItem);
    }
    else
    {
    while ( 1 )
      {
    result = (HWND)Dialog::FindByPtr(Current);
    Current = (ObjectClass *)result;
    if ( !result )
    break;
    DlgItem = GetDlgItem(result, 1343);
    if ( DlgItem )
    return (HWND)DrawDialogText(aP0, Buffer, DlgItem);
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005E2790  Dialog::ShowStatusText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND Dialog::ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2)
{
{
    HWND result;
    ObjectClass *Current;
    HWND DlgItem;
    CampaignScore *v5;
    wchar_t Buffer[1024];
    memset(Buffer, 0, sizeof(Buffer));
    vswprintf(Buffer, aP1, (ObjectClass *)&aP2, (SessionClass *)v5);
    result = Dialog::GetCurrent();
    if ( result )
  {
    Current = (ObjectClass *)Dialog::GetCurrent();
    DlgItem = GetDlgItem((HWND)Current, 1461);
    if ( DlgItem )
    {
    return (HWND)DrawDialogText((ObjectClass *)aP0, Buffer, DlgItem);
    }
    else
    {
    while ( 1 )
      {
    result = (HWND)Dialog::FindByPtr(Current);
    Current = (ObjectClass *)result;
    if ( !result )
    break;
    DlgItem = GetDlgItem(result, 1461);
    if ( DlgItem )
    return (HWND)DrawDialogText((ObjectClass *)aP0, Buffer, DlgItem);
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005E29A0  UI_Draw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT UI_Draw(HWND hWnd, wchar_t * Source, DropListClass * Count, LPARAM lParam)
{
{
    wchar_t *v5;
    DropListClass *v6;
    LRESULT v7;
    bool v8;
    LRESULT v9;
    LRESULT v11;
    struct tagRECT Rect;
    signed int Counta;
    memset(&g_MatrixTransformState + 1315, 0, 0x400u);
    wcsncpy((wchar_t *)&g_MatrixTransformState + 2630, Source, Count);
    v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xD);
    if ( v5 || (v5 = wcschr((BlowStraw *)(&g_MatrixTransformState + 1315), (CCINIClass *)0xA)) != 0 )
    *v5 = 0;
    v11 = SendMessageA(hWnd, 0x49Du, 0, 1);
    v6 = (DropListClass *)SendMessageA(hWnd, 0x18Eu, 0, 0);
    v7 = SendMessageA(hWnd, 0x18Bu, 0, 0);
    Counta = SendMessageA(hWnd, 0x1A1u, (WPARAM)v6, 0);
    GetWindowRect(hWnd, &Rect);
    v8 = v7 - (int)v6 <= (Rect.bottom - Rect.top) / Counta;
    if ( v7 > 500 )
  {
    SendMessageA(hWnd, 0x182u, 0, 0);
    --v7;
  }
    v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)(&g_MatrixTransformState + 1315));
    if ( lParam != -1 )
    SendMessageA(hWnd, 0x498u, v9, lParam);
    if ( v8 )
    SendMessageA(hWnd, 0x197u, v7, 0);
    return SendMessageA(hWnd, 0x49Du, 0, v11);
}
}

// ==== BACKFILL 0x005E2E40  sub_5E2E40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR sub_5E2E40(HWND hWnd, UINT, WPARAM, char * a4)
{
{
    INT_PTR result;
    if ( a2 <= 0x2B )
  {
    switch ( a2 )
    {
    case 0x2Bu: Dialog::Resize(a4);
    return 1;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
    }
    return 0;
  }
    if ( a2 != 273 )
    return 0;
    switch ( (short)a3 )
  {
    case 1: case 2: case 6: case 7: CloseDialog(hWnd, (unsigned short)a3);
    result = 1;
    break;
    default: return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005E2F60  Dialog::ShowPlayerName  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
LRESULT Dialog::ShowPlayerName()
{
{
    HWND DlgItem;
    DlgItem = GetDlgItem(this, 1448);
    return SendMessageA(DlgItem, 0x4B2u, 0, 11055906);
}
}

// ==== BACKFILL 0x005E35A0  sub_5E35A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E35A0()
{
{
    unsigned int v0;
    int v1;
    int i;
    int v4[113];
    short v5;
    char v6;
    memset(v4, 0, sizeof(v4));
    v5 = 0;
    v6 = 0;
    v4[0] = 40;
    v0 = strlen(g_GameSetupBuffer) + 1;
    qmemcpy(&v4[1], g_GameSetupBuffer, v0);
    v1 = Game_PlayerCount;
    for ( i = 1; i < v1; ++i )
  {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    LOBYTE(v0) = Event::Dispatch();
  }
    return v0;
}
}

// ==== BACKFILL 0x005E3630  Network_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E3630()
{
{
    unsigned int v0;
    int v1;
    int i;
    int v4[113];
    short v5;
    char v6;
    if ( g_GameMode_Current[0] == 3 )
  {
    memset(v4, 0, sizeof(v4));
    v5 = 0;
    v6 = 0;
    v4[0] = 40;
    v0 = strlen(g_GameSetupBuffer) + 1;
    qmemcpy(&v4[1], g_GameSetupBuffer, v0);
    v1 = Game_PlayerCount;
    for ( i = 1; i < v1; ++i )
    {
    Network::SendMessage((int)g_NetworkManager, (int)v4, 455, 1, *(int *)(Game_PlayerInfoArray + 4 * i) + 40, 0, 0);
    LOBYTE(v0) = Event::Dispatch();
    }
  }
    else
  {
    LOBYTE(v0) = LOBYTE(g_GameMode_Current[0]) - 4;
    if ( g_GameMode_Current[0] == 4 )
    LOBYTE(v0) = (unsigned char)Network_Create_7A2730();
  }
    return v0;
}
}

// ==== BACKFILL 0x005E3720  Network::SendOptionsGame  cls=Network  sig=csp  renamed_refs=0  residual=- ====
int Network::SendOptionsGame()
{
{
    int result;
    ObjectClass *v2;
    int i;
    IUnknown *v4;
    int v5[114];
    char Destination[1024];
    if ( *(&g_MatrixTransformState + 2263) )
  {
    strncpy(Destination, this, (IUnknown *)0x3FF);
    return (*(int (__stdcall **)(int, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( *(&g_MatrixTransformState + 2263), Destination);
  }
    else
  {
    memset(v5, 0, 455);
    v5[0] = 23;
    strcpy((char *)&v5[1], &HouseClass_Player[30260]);
    v2 = *(ObjectClass **)&HouseClass_Player[30280];
    strcpy((char *)&v5[11] + 3, this);
    *(int *)((char *)&v5[111] + 3) = v2;
    *(int *)((char *)&v5[112] + 3) = WideString::Hash((wchar_t *)&HouseClass_Player[39108]);
    result = *(int *)&HouseClass_Player[40248];
    for ( i = 1; i < *(int *)&HouseClass_Player[40248]; ++i )
    {
    v4 = *(IUnknown **)(*(int *)&HouseClass_Player[40236] + 4 * i);
    ToWideStringChar(v4);
    Debug::Log();
    Network::SendMessage((int)&HouseClass_Player[44148], (int)v5, 455, 1, (int)v4->__pad_28, 0, 0);
    Event::Dispatch();
    result = *(int *)&HouseClass_Player[40248];
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005E70D0  SkirmishSetup_Setup_5E70D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
WPARAM SkirmishSetup_Setup_5E70D0(HWND hDlg, int a2)
{
{
    WPARAM v4;
    signed int v5;
    LRESULT v7;
    if ( !a2 )
    return -1;
    v4 = 0;
    v5 = 0;
    v7 = SendDlgItemMessageA(hDlg, 1363, 0x18Bu, 0, 0);
    if ( v7 > 0 )
  {
    do
    {
    if ( SendDlgItemMessageA(hDlg, 1363, 0x199u, v5, 0) == a2 )
    v4 = v5;
    ++v5;
    }
    while ( v5 < v7 );
  }
    SendDlgItemMessageA(hDlg, 1363, 0x186u, v4, 0);
    SendDlgItemMessageA(hDlg, 1363, 0x197u, v4, 0);
    return v4;
}
}

// ==== BACKFILL 0x005E84D0  GameConfig::ComputeCRC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * GameConfig::ComputeCRC()
{
{
    unsigned int v0;
    int *v1;
    int v2;
    unsigned int v3;
    int v4;
    int v5;
    int *v6;
    int v7;
    char *v8;
    int *v10;
    char v11[256];
    v0 = 0;
    qmemcpy(v11, &DataGlobal_ABE050, sizeof(v11));
    v1 = &DataGlobal_ABE010;
    v10 = &DataGlobal_ABE010;
    v2 = 320;
    memset(&DataGlobal_ABE050, 0, 0x100u);
    do
  {
    v3 = v0 >> 31;
    if ( v2 < 4 )
    {
    v5 = 0;
    v6 = v1;
    v7 = v2;
    v2 = 0;
    do
      {
    v5 = *(unsigned char *)v6 | (v5 << 8);
    v6 = (int *)((char *)(v6) + 1);
    --v7;
      }
    while ( v7 );
    v1 = v10;
    v0 = v3 + v5 + 2 * v0;
    }
    else
    {
    v4 = *v1++;
    v10 = v1;
    v0 = v3 + v4 + 2 * v0;
    v2 -= 4;
    }
  }
    while ( v2 > 0 );
    v8 = (char *)__2_YAPAXI_Z(0xCu);
    sprintf(v8, Format, v0);
    qmemcpy(&DataGlobal_ABE050, v11, 0x100u);
    return v8;
}
}

// ==== BACKFILL 0x005E8760  Settings::CheckString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Settings::CheckString()
{
{
    char *v0;
    v0 = CharToWideString(g_GameSetupBuffer);
    return wcscmp((const wchar_t *)v0, &g_CurrentPlayerName) == 0;
}
}

// ==== BACKFILL 0x005E8A20  WinMainSetup_Setup_5DB6F0_Setup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5E8A20()
{
{
    if ( g_HouseClass_ObserverFlags )
  {
    __3_YAXPAX_Z((void *)g_HouseClass_ObserverFlags);
    g_HouseClass_ObserverFlags = 0;
  }
    if ( g_Lobby_PlayerCount )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerCount);
    g_Lobby_PlayerCount = 0;
  }
    if ( g_Lobby_PlayerTeam )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerTeam);
    g_Lobby_PlayerTeam = 0;
  }
    if ( g_Lobby_PlayerSide )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerSide);
    g_Lobby_PlayerSide = 0;
  }
    if ( g_Lobby_PlayerColor )
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerColor);
    g_Lobby_PlayerColor = 0;
  }
    if ( g_Lobby_PlayerReady )
  {
    __3_YAXPAX_Z(g_Lobby_PlayerReady);
    g_Lobby_PlayerReady = 0;
  }
    if ( g_Lobby_MaxPlayers )
  {
    __3_YAXPAX_Z((void *)g_Lobby_MaxPlayers);
    g_Lobby_MaxPlayers = 0;
  }
    return PtrVector::Destroy(&g_PlayerInfoCount);
}
}

// ==== BACKFILL 0x005E8BF0  Player::FindByName  cls=Player  sig=csp  renamed_refs=0  residual=- ====
wchar_t * Player::FindByName()
{
{
    int v3;
    int v4;
    const wchar_t *v5;
    if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, this) )
    return (wchar_t *)g_HouseClass_ObserverFlags;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, this) )
    return (wchar_t *)g_Lobby_PlayerCount;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, this) )
    return (wchar_t *)g_Lobby_PlayerTeam;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, this) )
    return (wchar_t *)g_Lobby_PlayerSide;
    if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, this) )
    return (wchar_t *)g_Lobby_PlayerColor;
    if ( !wcscmp(g_Lobby_PlayerReady, this) )
    return g_Lobby_PlayerReady;
    if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, this) )
    return (wchar_t *)g_Lobby_MaxPlayers;
    v3 = Game_PlayerCount;
    v4 = 0;
    if ( Game_PlayerCount <= 0 )
    return 0;
    while ( 1 )
  {
    v5 = *(const wchar_t **)(Game_PlayerInfoArray + 4 * v4);
    if ( !wcscmp(v5, this) )
    break;
    if ( ++v4 >= v3 )
    return 0;
  }
    return (wchar_t *)v5;
}
}

// ==== BACKFILL 0x005E9290  NetworkLobby::CheckLobbyConditions  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char NetworkLobby::CheckLobbyConditions()
{
{
    int v2;
    int v3;
    LPARAM *v4;
    LPARAM v5;
    if ( g_GameMode_Current[0] == 4 )
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() )
    v2 = 6;
    else
    v2 = 2;
  }
    else
  {
    v2 = 8;
  }
    if ( !g_MPCooperativeState && v2 < 7 )
    ++v2;
    v3 = 0;
    v4 = &g_NetworkPlayerName;
    while ( 1 )
  {
    LOBYTE(v5) = GUID::Compare((char *)(*v4 + 40), (int)this);
    if ( (char)v5 )
    break;
    ++v4;
    ++v3;
    if ( (int)v4 >= (int)&g_PlayerNameListEnd )
    return v5;
  }
    v5 = *(&g_NetworkPlayerName + v3);
    if ( *(int *)(v5 + 107) == -1 )
  {
    *(&g_NetworkPlayerName + v3) = g_Lobby_MaxPlayers;
  }
    else
  {
    v5 = g_HouseClass_ObserverFlags;
    if ( v3 >= v2 )
    v5 = g_Lobby_PlayerCount;
    *(&g_NetworkPlayerName + v3) = v5;
  }
    return v5;
}
}

// ==== BACKFILL 0x005E9440  Player::IsObserver  cls=Player  sig=csp  renamed_refs=0  residual=- ====
BOOL Player::IsObserver()
{
{
    return this && (this == (void *)g_Lobby_PlayerTeam || this == (void *)g_Lobby_PlayerSide || this == (void *)g_Lobby_PlayerColor);
}
}

// ==== BACKFILL 0x005E9470  NetworkLobby::IsValidPlayerName  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
BOOL NetworkLobby::IsValidPlayerName()
{
{
    return this && this != (wchar_t *)g_HouseClass_ObserverFlags && this != (wchar_t *)g_Lobby_PlayerCount && this != (wchar_t *)g_Lobby_MaxPlayers && this != g_Lobby_PlayerReady;
}
}

// ==== BACKFILL 0x005E94D0  Hash_Check_5E94D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5E94D0()
{
{
    int result;
    LPARAM *v1;
    LPARAM v2;
    result = 0;
    v1 = &g_NetworkPlayerName;
    do
  {
    v2 = *v1;
    if ( *v1 && (v2 == g_Lobby_PlayerTeam || v2 == g_Lobby_PlayerSide || v2 == g_Lobby_PlayerColor) )
    ++result;
    ++v1;
  }
    while ( (int)v1 < (int)&g_PlayerNameListEnd );
    return result;
}
}

// ==== BACKFILL 0x005E9510  NetworkLobby::CheckMinPlayers  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
bool NetworkLobby::CheckMinPlayers()
{
{
    int v0;
    int v1;
    LPARAM *i;
    v0 = DataGlobal_A8BB0C;
    if ( DataGlobal_A8B548 < DataGlobal_A8BB0C )
    v0 = DataGlobal_A8B548;
    v1 = 0;
    if ( v0 > 0 )
  {
    for ( i = &g_NetworkPlayerName; *i != g_HouseClass_ObserverFlags; ++i )
    {
    if ( ++v1 >= v0 )
    return g_MPCooperativeState || v0 >= 8 || *(&g_NetworkPlayerName + v0) != g_HouseClass_ObserverFlags;
    }
    return 0;
  }
    return g_MPCooperativeState || v0 >= 8 || *(&g_NetworkPlayerName + v0) != g_HouseClass_ObserverFlags;
}
}

// ==== BACKFILL 0x005E9560  GameOption::CheckDuplicate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char GameOption::CheckDuplicate()
{
{
    LPARAM *v0;
    v0 = &g_NetworkPlayerName;
    while ( *v0 != g_Lobby_MaxPlayers )
  {
    if ( (int)++v0 >= (int)&g_PlayerNameListEnd )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x005E9580  Hash_Check_5E9580  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E9580()
{
{
    int v0;
    LPARAM *v1;
    LPARAM v2;
    v0 = 0;
    v1 = &g_NetworkPlayerName;
    while ( 1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
    if ( v2 != g_HouseClass_ObserverFlags && v2 != g_Lobby_PlayerCount && v2 != g_Lobby_MaxPlayers && (wchar_t *)v2 != g_Lobby_PlayerReady && v0 == g_MPCooperativeState && *(int *)(v2 + 107) == -1 )
      {
    break;
      }
    }
    ++v1;
    ++v0;
    if ( (int)v1 >= (int)&g_PlayerNameListEnd )
    return 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x005E96A0  NetworkLobby::CheckPlayerNameValid  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char NetworkLobby::CheckPlayerNameValid()
{
{
    wchar_t **v2;
    wchar_t *v3;
    int *v4;
    if ( this == (void *)-2 )
    return 0;
    v2 = (wchar_t **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
    if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady && v3 != (wchar_t *)g_Lobby_MaxPlayers && v3 != (wchar_t *)g_Lobby_PlayerTeam && v3 != (wchar_t *)g_Lobby_PlayerSide && v3 != (wchar_t *)g_Lobby_PlayerColor && (void *)SessionClass::GetPlayerColor((int)v3) == this )
      {
    break;
      }
    }
    if ( (int)++v2 >= (int)&g_PlayerNameListEnd )
    {
    v4 = g_CampaignConfig;
    while ( (void *)*v4 != this )
      {
    if ( (int)++v4 >= (int)g_CampaignSideIndex )
    return 0;
      }
    return 1;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x005E9720  NetworkLobby::CheckPlayerNames  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char NetworkLobby::CheckPlayerNames()
{
{
    wchar_t **v2;
    wchar_t *v3;
    int *v4;
    if ( this == (void *)-2 )
    return 0;
    v2 = (wchar_t **)&g_NetworkPlayerName;
    while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
    if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady && v3 != (wchar_t *)g_Lobby_MaxPlayers && v3 != (wchar_t *)g_Lobby_PlayerTeam && v3 != (wchar_t *)g_Lobby_PlayerSide && v3 != (wchar_t *)g_Lobby_PlayerColor && (void *)SessionClass::GetOption((int)v3) == this )
      {
    break;
      }
    }
    if ( (int)++v2 >= (int)&g_PlayerNameListEnd )
    {
    v4 = g_CampaignSideIndex;
    while ( (void *)*v4 != this )
      {
    if ( (int)++v4 >= (int)g_CampaignFactionSlot )
    return 0;
      }
    return 1;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x005E9950  Dialog::MapPlayerIDToIndex  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
int Dialog::MapPlayerIDToIndex()
{
{
    int v2;
    if ( this == (void *)1041 )
    return 0;
    if ( this == (void *)1042 )
    return 1;
    if ( this == (void *)1043 )
    return 2;
    if ( this == (void *)1044 )
    return 3;
    if ( this == (void *)1045 )
    return 4;
    if ( this == (void *)1046 )
    return 5;
    if ( this == (void *)1047 )
    return 6;
    v2 = -(this != (void *)1048);
    LOBYTE(v2) = v2 & 0xF8;
    return v2 + 7;
}
}

// ==== BACKFILL 0x005E99C0  GameClass::GetDifficultyString  cls=GameClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * GameClass::GetDifficultyString()
{
{
    if ( this == (void *)g_HouseClass_ObserverFlags )
    return GetStringCSF(DataGlobal_831D34, 0, g_Str_File_netshare_cpp, 4948);
    if ( this == (void *)g_Lobby_PlayerCount )
    return GetStringCSF(DataGlobal_831D20, 0, g_Str_File_netshare_cpp, 4950);
    if ( this == (void *)g_Lobby_PlayerTeam )
    return GetStringCSF(g_Str_STT_PlayerDumbAI, 0, g_Str_File_netshare_cpp, 4952);
    if ( this == (void *)g_Lobby_PlayerSide )
    return GetStringCSF(g_Str_STT_PlayerSmartAI, 0, g_Str_File_netshare_cpp, 4954);
    if ( this == (void *)g_Lobby_PlayerColor )
    return GetStringCSF(g_Str_STT_PlayerGeniusAI, 0, g_Str_File_netshare_cpp, 4956);
    if ( this == (void *)g_Lobby_MaxPlayers )
    return GetStringCSF(DataGlobal_831CCC, 0, g_Str_File_netshare_cpp, 4958);
    return GetStringCSF(DataGlobal_831CBC, 0, g_Str_File_netshare_cpp, 4960);
}
}

// ==== BACKFILL 0x005E9B60  SelectLobbyCountry  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Lobby_SelectCountry(HWND a1, void * a2)
{
{
    LRESULT Selected;
    int result;
    int v5;
    Selected = GetComboBoxSelected(a1, (int)a2, -1);
    result = CountryCombo::IDToIndex(a2);
    if ( result == g_NetworkPlayerCount )
  {
    SessionClass::AssignSide(&g_GameMode_Current, Selected, 0);
    result = Game_PlayerCount;
    if ( Game_PlayerCount )
    return SessionClass::SetPlayerOption(*(int *)Game_PlayerInfoArray, Selected);
  }
    else
  {
    v5 = *(&g_NetworkPlayerName + result);
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) )
    {
    g_CampaignPlayerArray[result] = Selected;
    }
    else
    {
    g_CampaignPlayerArray[result] = -1;
    DataGlobal_A8B27C[result] = -1;
    g_CampaignConfig[result] = -1;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x005ED370  Session::StartGame  cls=Session  sig=csp  renamed_refs=0  residual=- ====
int Session::StartGame()
{
{
    ObjectClass *v2;
    int *v3;
    ObjectClass *v4;
    if ( !IsRandMap::Sed(*(int *)(g_MultiplayerGameState + 4 * g_GameRulesOptions)) )
    return Session::PrepareGame(this);
    v2 = (ObjectClass *)g_UIControlState;
    if ( g_UIControlState )
  {
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v2);
  }
    v3 = __2_YAPAXI_Z(4u);
    if ( v3 )
    v4 = (ObjectClass *)unknown_libname_27(v3);
    else
    v4 = 0;
    g_UIControlState = v4;
    Surface::LoadToSurfaceSHP((char **)v4, ExistingFileName);
    if ( !*(int *)g_UIControlState )
    Session::PrepareGame(this);
    return InvalidateRect(this, 0, 0);
}
}

// ==== BACKFILL 0x005EDD00  ReadChatMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** ReadChatMessage(wchar_t ** a1, HWND a2)
{
{
    size_t v4;
    size_t v5;
    wchar_t *v6;
    void *v8;
    void *v9;
    unknown_libname_74(&v8);
    GetEditControlText(a2, &v8);
    v4 = 120;
    if ( !WideString::IsASCII((const wchar_t **)&v8) )
  {
    v5 = 0;
    if ( WideString::Length((const wchar_t **)&v8) )
    {
    do
      {
    if ( WideString::GetChar((const wchar_t **)&v8, v5) > 0x100u )
    break;
    ++v5;
      }
    while ( v5 < (unsigned int)WideString::Length((const wchar_t **)&v8) );
    }
    v4 = v5 - 1;
    if ( v4 <= 0x28 )
    v4 = 40;
  }
    if ( (unsigned int)WideString::Length((const wchar_t **)&v8) > v4 )
  {
    String::TruncateTo(&v8, v4);
    v6 = WideString::GetOrEmpty_Alt((wchar_t **)&v8);
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6);
  }
    WideString::Assign((wchar_t **)&v9, DataGlobal_831D9C);
    WString::TrimRight((const wchar_t **)&v8, (const wchar_t **)&v9);
    DeleteAndZero::Alt(&v9);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v8);
    DeleteAndZero::Alt(&v8);
    return a1;
}
}

// ==== BACKFILL 0x005EDEF0  GetPlayerTypeString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** Player_GetTypeString(char ** a1, wchar_t * a2)
{
{
    if ( a2 == (wchar_t *)g_HouseClass_ObserverFlags )
  {
    String::Assign(a1, DataGlobal_831704[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerCount )
  {
    String::Assign(a1, DataGlobal_831708[0]);
    return a1;
  }
    else if ( a2 == g_Lobby_PlayerReady )
  {
    String::Assign(a1, DataGlobal_83170C[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerTeam )
  {
    String::Assign(a1, DataGlobal_831710[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerSide )
  {
    String::Assign(a1, DataGlobal_831714[0]);
    return a1;
  }
    else if ( a2 == (wchar_t *)g_Lobby_PlayerColor )
  {
    String::Assign(a1, DataGlobal_831718[0]);
    return a1;
  }
    else
  {
    if ( a2 == (wchar_t *)g_Lobby_MaxPlayers )
    String::Assign(a1, DataGlobal_83171C);
    else
    String::Assign(a1, DataGlobal_83170C[0]);
    return a1;
  }
}
}

// ==== BACKFILL 0x005EDFC0  NetworkLobby::DeleteAndZero  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
wchar_t * NetworkLobby::DeleteAndZero()
{
{
    LPARAM v2;
    LPARAM v4;
    wchar_t *v5;
    LPARAM v6;
    LPARAM v7;
    LPARAM v8;
    LPARAM v9;
    void *v10;
    if ( WideString::IsASCII(this) )
  {
    ToWideStringCharAlt((char **)&v10, this);
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831704[0]) )
    {
    v2 = g_HouseClass_ObserverFlags;
    DeleteAndZero(&v10);
    return (wchar_t *)v2;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831708[0]) )
    {
    v4 = g_Lobby_PlayerCount;
    DeleteAndZero(&v10);
    return (wchar_t *)v4;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_83170C[0]) )
    {
    v5 = g_Lobby_PlayerReady;
    DeleteAndZero(&v10);
    return v5;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831710[0]) )
    {
    v6 = g_Lobby_PlayerTeam;
    DeleteAndZero(&v10);
    return (wchar_t *)v6;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831714[0]) )
    {
    v7 = g_Lobby_PlayerSide;
    DeleteAndZero(&v10);
    return (wchar_t *)v7;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_831718[0]) )
    {
    v8 = g_Lobby_PlayerColor;
    DeleteAndZero(&v10);
    return (wchar_t *)v8;
    }
    if ( String::Equals_Alt((const char **)&v10, DataGlobal_83171C) )
    {
    v9 = g_Lobby_MaxPlayers;
    DeleteAndZero(&v10);
    return (wchar_t *)v9;
    }
    DeleteAndZero(&v10);
  }
    return 0;
}
}

// ==== BACKFILL 0x005EE200  UpdateObserveButtonWOL  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5EE200::UpdateObserveButtonWOL()
{
{
    HWND DlgItem;
    IUnknown *v3;
    IUnknown *v4;
    HWND v5;
    IUnknown *v6;
    wchar_t *StringCSF;
    IUnknown *v8;
    wchar_t *v9;
    if ( this )
  {
    DlgItem = GetDlgItem(this, 1888);
    if ( DlgItem )
    SendMessageA(DlgItem, 0xF1u, g_MenuStateFlags != 0, 0);
    if ( g_MenuStateFlags )
    v3 = (IUnknown *)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0);
    else
    v3 = (IUnknown *)HashTable::Find(g_DialogHashTable, DataGlobal_831DD0, 0);
    v4 = v3;
    v5 = GetDlgItem(this, 1887);
    CacheDialogInvalidate(v5, (HWND)v4);
    v6 = (IUnknown *)GetDlgItem(this, 1741);
    if ( v6 )
    {
    if ( g_MenuStateFlags )
    StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6751);
    else
    StringCSF = GetStringCSF(DataGlobal_831DC4, 0, g_Str_File_netshare_cpp, 6753);
    SendMessageA((HWND)v6, 0x4B2u, 0, (LPARAM)StringCSF);
    InvalidateRect((HWND)v6, 0, 0);
    }
    v8 = (IUnknown *)GetDlgItem(this, 1581);
    if ( v8 )
    {
    if ( g_MenuStateFlags )
      {
    v9 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6762);
      }
    else if ( (HWND)Dialog::FindByHandle((void *)0x113) == this )
      {
    v9 = GetStringCSF((wchar_t *)DataGlobal_831DB4, 0, g_Str_File_netshare_cpp, 6766);
      }
    else
      {
    v9 = GetStringCSF(DataGlobal_831DC4, 0, g_Str_File_netshare_cpp, 6768);
      }
    SendMessageA((HWND)v8, 0x4B2u, 0, (LPARAM)v9);
    InvalidateRect((HWND)v8, 0, 0);
    }
  }
}
}

// ==== BACKFILL 0x005EE6A0  NetworkLobby::UpdateLabels  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
void NetworkLobby::UpdateLabels()
{
{
    char *v2;
    int *v3;
    int ResourceID3CSF;
    LRESULT v5;
    if ( this )
  {
    v2 = 0;
    v3 = &g_NetworkPlayerName;
    do
    {
    ResourceID3CSF = GetResourceID3CSF(v2);
    FillComboBoxSides(this, ResourceID3CSF);
    v5 = SetComboBoxSelection(this, ResourceID3CSF, -1);
    if ( *v3 )
    SessionClass::SetOption(*v3, v5);
    ++v3;
    ++v2;
    }
    while ( (int)v3 < (int)&g_PlayerNameListEnd );
  }
}
}

// ==== BACKFILL 0x005EED00  VectorClass::Cleanup3  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::Cleanup3()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x005EF190  VectorClass_cptr_MultiMission::j_vt09  cls=NullModemConnClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_cptr_MultiMission::j_vt09(unsigned char * a1, signed int a3, int a4, int a5, int a6, int a7)
{
{
    short *v8;
    signed int v9;
    unsigned int *v10;
    unsigned int v11;
    int v12;
    if ( *(int *)&this->__pad_0[76] == -1 )
    return 0;
    v8 = (short *)this->field_50;
    *v8 = -9539;
    v8[1] = a3;
    v8[2] = -8529;
    qmemcpy((void *)(this->field_50 + 6), a1, a3);
    v9 = 0;
    v10 = (unsigned int *)(this->field_50 + a3 + 6);
    v11 = 0;
    if ( a3 > 0 )
  {
    do
    {
    v12 = a1[v9++] + (v11 >> 31);
    v11 = v12 + 2 * v11;
    }
    while ( v9 < a3 );
    v10 = (unsigned int *)(this->field_50 + a3 + 6);
  }
    *v10 = v11;
    *(char *)(a3 + 10 + this->field_50) = 13;
    WinModemClass::WriteSerial((int)g_ClipboardBuffer, (LPCVOID)this->field_50, (WinModemClass *)(a3 + 11));
    return 1;
}
}

// ==== BACKFILL 0x005EF290  VectorClass_cptr_MultiMission::j_vt00  cls=NullModemConnClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass_cptr_MultiMission::j_vt00(char a2)
{
{
    IPXConnClass *v3;
    v3 = (IPXConnClass *)this->field_50;
    *(int *)this->__pad_0 = &vt_NullModemConnClass;
    __3_YAXPAX_Z(v3);
    ConnectionClass::dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this->__pad_0;
}
}

// ==== BACKFILL 0x005EFF00  sub_5EFF00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
{
    int result;
    unsigned int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 )
    {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8);
    if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 )
    *WindowLongA = a3;
    }
    else if ( a2 == 1175 )
    {
    Network::handleTimeout(hWnd);
    return 0;
    }
    return 0;
  }
    return result;
}
}

// ==== BACKFILL 0x005EFF70  Network::handleTimeout  cls=Network  sig=csp  renamed_refs=0  residual=- ====
HWND Network::handleTimeout()
{
{
    HWND DlgItem;
    HWND v3;
    HWND result;
    unsigned char v5;
    v5 = 1;
    if ( !*(int *)&g_NetworkPlayerBuffer[1156] || *(int *)&g_NetworkPlayerBuffer[1160] == -1 || *(int *)&g_NetworkPlayerBuffer[1164] == -1 || Modem::OpenPort(&g_NetworkPlayerBuffer[5172], (Modem *)&g_NetworkPlayerBuffer[1156]) )
  {
    v5 = 0;
  }
    DlgItem = GetDlgItem(this, 1619);
    if ( DlgItem )
    EnableWindow(DlgItem, v5);
    v3 = GetDlgItem(this, 1620);
    if ( v3 )
    EnableWindow(v3, v5);
    result = GetDlgItem(this, 1621);
    if ( result )
    return (HWND)EnableWindow(result, v5);
    return result;
}
}
