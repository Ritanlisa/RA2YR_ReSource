// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00792BE0  ShowUIMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ShowUIMessage(MPCooperative * a1, wchar_t ** a2, char a3)
{
{
    DLGTEMPLATE *DialogIndirect;
    HWND DlgItem;
    CampaignScore *v7;
    HWND Current;
    HWND v9;
    HWND v10;
    CampaignScore *v11;
    char result;
    DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((void *)0xC4);
    if ( DialogIndirect )
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)a1 | (unsigned int)g_WOL_ChannelList);
    if ( WideString::Length((const wchar_t **)a2) )
    {
    DlgItem = GetDlgItem((HWND)DialogIndirect, 1458);
    v7 = WideString::GetOrEmpty_Alt(a2);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7);
    }
  }
    else if ( a1 )
  {
    Current = Dialog::GetCurrent();
    v9 = GetDlgItem(Current, 1344);
    ShowUIMessage_Show();
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, sub_792CF0, 0);
    SetupDialog((CoordStruct *)DialogIndirect, 196);
    v10 = GetDlgItem((HWND)DialogIndirect, 1458);
    v11 = WideString::GetOrEmpty_Alt(a2);
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11);
    g_WOL_ChannelList = a1;
    if ( v9 )
    SetFocus(v9);
  }
    result = a3;
    if ( a3 )
  {
    result = (char)g_WOL_ChannelList;
    if ( g_WOL_ChannelList )
    return MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned char (*)(void))GameLoop::Thunk, 0, 1, 0);
  }
    return result;
}
}

// ==== BACKFILL 0x00793120  sub_793120  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_793120::sub_793120()
{
{
    int v1;
    char *i;
    char *v4;
    v1 = 0;
    if ( (int)g_WOL_State <= 0 )
    return 0;
    for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 )
  {
    if ( v1 >= 0 && v1 < (int)g_WOL_State )
    qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu);
    if ( (g_IsMultiplayerSession & 1) != 0 )
    break;
    if ( ++v1 >= (int)g_WOL_State )
    return 0;
  }
    if ( !&g_IsMultiplayerSession )
    return 0;
    v4 = String::GetOrEmpty_Alt(this);
    return _strcmpi(DataGlobal_B777D4, v4) == 0;
}
}

// ==== BACKFILL 0x00793A10  UI_Setup_793A10  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * UI_Setup_793A10(void * a1, short a2)
{
{
    int v4;
    SessionClass *v5;
    char *v6;
    ObjectClass *result;
    Debug::Log();
    v4 = 0;
    v5 = (SessionClass *)&HouseClass_Player[40260];
    while ( 1 )
  {
    v6 = ToWideStringChar((IUnknown *)v5->GameMode[0]);
    result = (ObjectClass *)_strcmpi(v6, a1);
    if ( !result )
    break;
    v5 = (SessionClass *)((char *)(v5) + 4);
    ++v4;
    if ( (int)v5 >= (int)&HouseClass_Player[40292] )
    return result;
  }
    *(short *)&HouseClass_Player[21864][2 * v4 + 19868] = a2;
    return result;
}
}

// ==== BACKFILL 0x00793CD0  sub_793CD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_793CD0::sub_793CD0()
{
{
    DWORD Ticks;
    DWORD *v2;
    DWORD v4;
    DataGlobal_A8E1A4[DataGlobal_A8E224] = (int)this;
    Ticks = Timer::GetTicks();
    v2 = (DWORD *)(12 * DataGlobal_A8E224 + 11067844);
    *v2 = Ticks;
    v2[1] = v4;
    v2[2] = 1200;
    return ++DataGlobal_A8E224;
}
}

// ==== BACKFILL 0x00796DE0  Game::CreateAIPlayer  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::CreateAIPlayer()
{
{
    char *v0;
    char *v1;
    int v2;
    int v3;
    int result;
    int v5;
    char v6[2];
    char v7[6];
    v0 = __2_YAPAXI_Z(0x85u);
    v1 = v0;
    if ( v0 )
    Waypoint::InitInvalid(v0 + 40);
    else
    v1 = 0;
    BulkCharToWide(v1, (unsigned char *)aOlCruddy, -1);
    *(int *)(v1 + 123) = -1;
    *(int *)(v1 + 75) = 0;
    *(int *)(v1 + 83) = 3;
    v5 = 0;
    v7[3] = 0;
    strcpy(v7, "QR");
    v6[1] = 2;
    v6[0] = 10;
    NetworkID::Assign((int *)(v1) + 10, &v5, (int)v6, 0);
    if ( Game_PlayerCount < DataGlobal_A8DA7C || (DataGlobal_A8DA81 || !DataGlobal_A8DA7C) && DataGlobal_A8DA88 > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(g_PlayerInfoCount + 8))( &g_PlayerInfoCount, DataGlobal_A8DA7C + DataGlobal_A8DA88, 0) )
  {
    v2 = Game_PlayerCount++;
    *(int *)(Game_PlayerInfoArray + 4 * v2) = v1;
  }
    v3 = g_ScenarioLoadFlags;
    DataGlobal_B7790C[g_ScenarioLoadFlags] = 100;
    result = v3 + 1;
    g_ScenarioLoadFlags = result;
    return result;
}
}

// ==== BACKFILL 0x00796ED0  Game::CreateAIPlayer_Potato  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::CreateAIPlayer_Potato()
{
{
    char *v0;
    char *v1;
    int v2;
    int v3;
    int result;
    int v5;
    char v6[3];
    char v7[5];
    v0 = __2_YAPAXI_Z(0x85u);
    v1 = v0;
    if ( v0 )
    Waypoint::InitInvalid(v0 + 40);
    else
    v1 = 0;
    BulkCharToWide(v1, (unsigned char *)aPotato, -1);
    *(int *)(v1 + 123) = -1;
    *(int *)(v1 + 75) = 0;
    *(int *)(v1 + 83) = 0;
    v5 = 0;
    v7[2] = 0;
    strcpy(v7, "a");
    v6[2] = 20;
    v6[1] = 2;
    v6[0] = 10;
    NetworkID::Assign((int *)(v1) + 10, &v5, (int)v6, 0);
    if ( Game_PlayerCount < DataGlobal_A8DA7C || (DataGlobal_A8DA81 || !DataGlobal_A8DA7C) && DataGlobal_A8DA88 > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(g_PlayerInfoCount + 8))( &g_PlayerInfoCount, DataGlobal_A8DA7C + DataGlobal_A8DA88, 0) )
  {
    v2 = Game_PlayerCount++;
    *(int *)(Game_PlayerInfoArray + 4 * v2) = v1;
  }
    v3 = g_ScenarioLoadFlags;
    DataGlobal_B7790C[g_ScenarioLoadFlags] = 100;
    result = v3 + 1;
    g_ScenarioLoadFlags = result;
    return result;
}
}

// ==== BACKFILL 0x00796FC0  Network_Init_796FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_796FC0()
{
{
    char *v0;
    char *v1;
    int v2;
    int v3;
    int result;
    int v5;
    char v6[8];
    v0 = __2_YAPAXI_Z(0x85u);
    v1 = v0;
    if ( v0 )
    Waypoint::InitInvalid(v0 + 40);
    else
    v1 = 0;
    BulkCharToWide(v1, (unsigned char *)aPotatotoo, -1);
    *(int *)(v1 + 123) = -1;
    *(int *)(v1 + 75) = 1;
    *(int *)(v1 + 83) = 2;
    v6[1] = 2;
    v5 = 0;
    v6[5] = 0;
    v6[4] = 0;
    v6[3] = -6;
    v6[2] = 80;
    v6[0] = 10;
    NetworkID::Assign((int *)(v1) + 10, &v5, (int)v6, 0);
    if ( Game_PlayerCount < DataGlobal_A8DA7C || (DataGlobal_A8DA81 || !DataGlobal_A8DA7C) && DataGlobal_A8DA88 > 0 && (*(unsigned char (__thiscall **)(int *, int, int))(g_PlayerInfoCount + 8))( &g_PlayerInfoCount, DataGlobal_A8DA7C + DataGlobal_A8DA88, 0) )
  {
    v2 = Game_PlayerCount++;
    *(int *)(Game_PlayerInfoArray + 4 * v2) = v1;
  }
    v3 = g_ScenarioLoadFlags;
    DataGlobal_B7790C[g_ScenarioLoadFlags] = 100;
    g_ScenarioLoadFlags = v3 + 1;
    g_NetworkRematchObject = *((int *)(v1) + 10);
    result = *((int *)(v1) + 11);
    DataGlobal_A8BB20 = result;
    DataGlobal_A8BB24 = *((int *)(v1) + 12);
    return result;
}
}

// ==== BACKFILL 0x007982A0  Network_Delete  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Network_Delete(int a1, int a2, SessionClass * aP2)
{
{
    int v3;
    SessionClass *v4;
    v3 = a1;
    if ( a1 > 0 )
  {
    v4 = aP2;
    do
    {
    DeleteAndZero((int)v4);
    v4 = (SessionClass *)((char *)(v4) + 4);
    --v3;
    }
    while ( v3 );
  }
    __3_YAXPAX_Z(aP2);
}
}

// ==== BACKFILL 0x00799D30  RunWOLMainLoop_Init  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_799D30()
{
{
    int result;
    wchar_t *StringCSF;
    int v2;
    int v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    int v8;
    int v9;
    int v10;
    void *v11;
    int v12[3];
    result = LoginFlowWOL_Reset();
    if ( result == 1 )
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300);
    WideString::Assign((wchar_t **)&v11, StringCSF);
    ShowUIMessage(16, (wchar_t **)&v11, 0);
    DeleteAndZero::Alt(&v11);
    v2 = 8960;
    if ( g_GameOptionsFlags != 3 )
    v2 = 10496;
    v3 = LoginWOL(v2);
    if ( v3 )
    {
    if ( v3 == 2 )
    return -1;
    else
    return -2;
    }
    else
    {
    if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) )
      {
    v4 = *(int *)g_UIPointerTable;
    v9 = g_NetworkRematchState & 0xFFFF00;
    v5 = String::GetOrEmpty((char **)&g_WebBrowser);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, int, int))(v4 + 20))( g_UIPointerTable, g_WOL_ConnectFlag, g_WOL_GameConfig, v5, v9, -1, 0, 0);
    v6 = *(int *)g_UIPointerTable;
    v10 = g_NetworkRematchState & 0xFFFF00;
    v7 = String::GetOrEmpty((char **)&g_WebBrowser);
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v6 + 56))( g_UIPointerTable, g_WOL_ConnectFlag, g_WOL_GameConfig, v7, v10);
      }
    System_Init_72C9C0();
    SimpleDialogControl::Constructor(v12);
    v12[0] = &DataGlobal_7F7624;
    RunDialog(0x114u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL, (LPARAM)v12);
    System_Init_72CA10();
    v8 = g_GameOptionsFlags != 0;
    v12[0] = &DataGlobal_7F7624;
    OwnerDrawControl::InitVtable(v12);
    return v8;
    }
  }
    return result;
}
}

// ==== BACKFILL 0x0079AE00  sub_79AE00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    LONG WindowLongA;
    UINT v6;
    if ( a2 == 272 )
  {
    if ( a4 )
    SetWindowLongA(hWnd, 8, *(int *)(a4 + 4));
  }
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = GetWindowLongA(hWnd, 8);
    if ( a2 > 0x2B )
    {
    if ( a2 == 273 )
      {
    if ( (unsigned short)a3 == 1 )
        {
    ReadSettingsWOL(&g_WebBrowser);
    (*(void (__thiscall **)(LONG, HWND, int))(*(int *)(WindowLongA) + 4))(WindowLongA, hWnd, 1);
        }
    else if ( (unsigned short)a3 == 2 )
        {
    v6 = IsDlgButtonChecked(hWnd, 1785);
    ReadWOLGameOption(v6 != 1);
    (*(void (__thiscall **)(LONG, HWND, int))(*(int *)(WindowLongA) + 4))(WindowLongA, hWnd, 2);
    return 0;
        }
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x2Bu: Dialog::Resize((char *)a4);
    return 1;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
      }
    }
    return 0;
  }
    return result;
}
}
