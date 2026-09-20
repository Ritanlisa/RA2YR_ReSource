// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00780A00  FormatLocaleStringWOL  cls=unknown  sig=csp  renamed_refs=0 ====
wchar_t ** WOL_FormatLocaleString(wchar_t ** a1, int a2)
{
{
    char **v3;
    char *v4;
    wchar_t *String;
    void *v7;
    void *v8;
    void *v9;
    v3 = FormatStringInt((char **)&v9, a2, 2);
    ProcessStringAndCopy((char **)&v8, DataGlobal_84A684, v3);
    DeleteAndZero(&v9);
    v4 = String::GetOrEmpty((char **)&v8);
    String = GetStringCSF((wchar_t *)v4, 0, g_Str_File_wonline_cpp, 2909);
    WideString::Assign((wchar_t **)&v7, String);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v7);
    DeleteAndZero::Alt(&v7);
    DeleteAndZero(&v8);
    return a1;
}
}

// ==== BACKFILL 0x00781090  WOLobby_Get  cls=unknown  sig=csp  renamed_refs=0 ====
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
{
    wchar_t *StringCSF;
    LRESULT v5;
    char v7[108];
    if ( wParam == -1 )
  {
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3050);
  }
    else
  {
    v5 = SendMessageA(a2, 0x199u, wParam, 0);
    if ( v5 >= 0 && v5 < (int)g_WOL_State )
    {
    qmemcpy(v7, &g_WOL_ConnectionFlags[3 * v5], sizeof(v7));
    FormatWOLPlayerInfo(a1, v7);
    return (CampaignScore *)a1;
    }
    StringCSF = GetStringCSF((wchar_t *)&DataGlobal_830620.__pad_14B0[14568], 0, g_Str_File_wonline_cpp, 3055);
  }
    WideString::Assign(a1, (CampaignScore *)StringCSF);
    return (CampaignScore *)a1;
}
}

// ==== BACKFILL 0x00786390  LoginFlowWOL_Reset  cls=unknown  sig=csp  renamed_refs=0 ====
int sub_786390()
{
{
    HANDLE *v1;
    BYTE Data[4];
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    CHAR SubKey[256];
    if ( DataGlobal_B77E75 )
    return 1;
    DataGlobal_B77E75 = 1;
    LoadNetworkShareStrings();
    Game::ResetFlags();
    Network::InitPlayerSlots();
    *(int *)Data = 0;
    if ( g_Str_SOFTWARE_Westwood_Yuri_s_Reven )
  {
    if ( strlen(g_Str_SOFTWARE_Westwood_Yuri_s_Reven) )
    {
    strcpy(SubKey, g_Str_SOFTWARE_Westwood_Yuri_s_Reven);
    if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &phkResult) )
      {
    cbData = 4;
    RegQueryValueExA(phkResult, DataGlobal_84A940, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
      }
    }
  }
    *(int *)Data = Data[0];
    DataGlobal_B77E50 = Data[0];
    g_NetworkRematchState = Data[0] + 10496;
    ResetSystemWOL();
    DataGlobal_B77DC0 = 1;
    v1 = &Handles;
    do
    *v1++ = CreateEventA(0, 0, 0, 0);
    while ( (int)v1 < (int)g_WOL_RequestObject );
    return InitializeWestwoodOnline(g_hInstance);
}
}

// ==== BACKFILL 0x00786E70  sub_786E70  cls=ObjectClass  sig=csp  renamed_refs=0 ====
int E4Recv_786E70::sub_786E70()
{
{
    int v2;
    int v3;
    int i;
    char *v5;
    char *v6;
    if ( !String::Length(this) )
    return -1;
    v2 = g_WOL_UserList;
    v3 = 1;
    if ( g_WOL_UserList <= 1 )
    return -1;
    for ( i = 248; ; i += 248 )
  {
    v5 = 0;
    if ( i >= 0 && v3 < v2 )
    v5 = (char *)(DataGlobal_B778E0) + i;
    v6 = strchr(v5 + 24, 58);
    if ( v6 )
    {
    if ( *v6 && String::Equals_Alt(this, v6 + 1) )
    break;
    }
    v2 = g_WOL_UserList;
    if ( ++v3 >= g_WOL_UserList )
    return -1;
  }
    return v3;
}
}

// ==== BACKFILL 0x0078ABF0  ChatMessageWOL  cls=unknown  sig=csp  renamed_refs=0 ====
short WOL_ChatMessage(char a1, wchar_t * a2)
{
{
    DataGlobal_B77E40 = a1;
    return WideString::Reassign(&DataGlobal_B76230, a2);
}
}
