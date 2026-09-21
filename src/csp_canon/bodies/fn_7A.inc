// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x007A0EA0  SetGameOptionsPing  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void INIClass::SetGameOptionsPing()
{
{
    int v1;
    int v2;
    int i;
    char *v5;
    HWND GameUI;
    v2 = v1;
    Debug::Log();
    for ( i = 0; i < 8; ++i )
  {
    v5 = (char *)*(&g_NetworkPlayerName + i);
    if ( v5 )
    {
    if ( !strcmp(ToWideStringChar(v5), this->__pad_0) )
      {
    DataGlobal_B76440[i] = v2;
    GameUI = (HWND)Dialog::FindGameUI();
    if ( GameUI )
        {
    if ( v2 >= 0 )
          {
    if ( v2 >= 300 )
            {
    if ( v2 >= 500 )
    UpdateLobbyGraphicsWOL(GameUI, i, 2);
    else
    UpdateLobbyGraphicsWOL(GameUI, i, 1);
            }
    else
            {
    UpdateLobbyGraphicsWOL(GameUI, i, 0);
            }
          }
    else
          {
    UpdateLobbyGraphicsWOL(GameUI, i, -1);
          }
        }
      }
    }
  }
}
}

// ==== BACKFILL 0x007A2110  sub_7A2110  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR sub_7A2110(HWND hWnd, UINT a2, WPARAM a3, char * a4)
{
{
    if ( a2 > 0x2B )
  {
    switch ( a2 )
    {
    case 0x111u: switch ( (unsigned short)a3 )
        {
    case 0x5C0u: if ( g_WOL_IdleHandler == 11 )
            {
    CloseDialog(hWnd, 0);
    return 0;
            }
    SetEvent(Handles);
    break;
    case 0x708u: (*(void (__stdcall **)(int, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( *(&g_MatrixTransformState + 2263), aStart443900100_0);
    return 0;
    case 0x709u: (*(void (__stdcall **)(int, char *))((*(&g_MatrixTransformState + 2263))->X + 44))( *(&g_MatrixTransformState + 2263), aStart443900100);
    return 0;
        }
    break;
    case 0x113u: if ( !a3 )
        {
    sub_5E2AC0();
    return 0;
        }
    break;
    case 0x497u: SetTimer(hWnd, 0, 0x7D0u, 0);
    return 0;
    }
  }
    else
  {
    switch ( a2 )
    {
    case 0x2Bu: Dialog::Resize(a4);
    return 1;
    case 2u: KillTimer(hWnd, 0);
    return 0;
    case 0xFu: Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    ValidateRect(hWnd, 0);
    return 1;
    case 0x14u: return 1;
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007A2600  sub_7A2600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7A2600(HWND hWnd, unsigned int a2, int a3, char * a4)
{
{
    int result;
    int *v5;
    void *v6;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x2B )
    {
    if ( a2 == 273 && (short)a3 == 1472 )
      {
    SetEvent(Handles);
    CloseDialog(hWnd, 1472);
      }
    return 0;
    }
    if ( a2 == 43 )
    {
    Dialog::Resize(a4);
    return 1;
    }
    if ( a2 == 2 )
    {
    v6 = g_UIControlState;
    if ( g_UIControlState )
      {
    ComPtr::Dtor(g_UIControlState);
    __3_YAXPAX_Z(v6);
    g_UIControlState = 0;
    return 0;
      }
    return 0;
    }
    if ( a2 != 15 )
    return a2 == 20;
    Dialog::DrawBackground(hWnd);
    Dialog::StopBink(hWnd);
    v5 = g_UIControlState;
    if ( g_UIControlState || g_GameRulesOptions == -1 && (v5 = g_Map_TiberiumConfig) != 0 )
    Skirmish::RenderPreview(v5, hWnd);
    if ( LoadScreen::IsActive(g_UIManager) )
    LoadScreen::Render((int)g_UIManager, a3, (int)a4, NAN);
    ValidateRect(hWnd, 0);
    return 1;
  }
    return result;
}
}

// ==== BACKFILL 0x007A2800  Map_Handle_7A2800  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_7A2800(int a1, char a2, char a3)
{
{
    HWND v5;
    v5 = (HWND)Dialog::FindByHandle((void *)0xC2);
    return Map_Handle_5EC880(v5, a1, a2, a3);
}
}

// ==== BACKFILL 0x007A2F30  System_Init_7A2F30  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int System_Init_7A2F30(int a1, int a2, ObjectClass * aP2)
{
{
    int v4;
    if ( !a1 )
    return -2147024809;
    *(int *)(a1 + 16) = a2;
    *(int *)(a1 + 8) = aP2;
    *(int *)(a1 + 12) = aP2;
    *(int *)(a1 + 4) = aP2;
    *(int *)(a1 + 20) = 0;
    *(int *)(a1 + 24) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 28));
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 52));
    InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 76));
    v4 = *(int *)(a1 + 16);
    *(int *)(a1 + 104) = 0;
    *(char *)(a1 + 108) = 1;
    *(int *)(a1 + 116) = 0;
    *(int *)(a1 + 124) = 0;
    *(int *)(a1 + 120) = 0;
    *(int *)(a1 + 128) = 0;
    if ( v4 && *(int *)v4 )
  {
    do
    {
    (*(void (__stdcall **)(int))(v4 + 32))(1);
    if ( *(int *)a1 == 100 )
    v4 += 28;
    else
    v4 += 36;
    }
    while ( *(int *)v4 );
  }
    return 0;
}
}

// ==== BACKFILL 0x007A4070  ComStreamClass::Seek  cls=CNetUtilEventSink  sig=csp  renamed_refs=0  residual=- ====
int ComStreamClass::Seek()
{
{
    HWND v1;
    HWND Current;
    HWND DlgItem;
    int v5;
    CampaignScore *v6;
    int v7;
    Debug::Log();
    DataGlobal_B77DF4 = v5;
    if ( !v5 )
  {
    DataGlobal_B77E60 = v6;
    DataGlobal_B77E64 = v7;
  }
    v1 = (HWND)Dialog::FindByHandle((void *)0xC4);
    if ( v1 )
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)g_WOL_ChannelList & 0xFFFFFEFF);
    if ( !g_WOL_ChannelList )
    CloseDialog(v1, 0);
  }
    Current = Dialog::GetCurrent();
    DlgItem = GetDlgItem(Current, 1344);
    if ( DlgItem )
    SetFocus(DlgItem);
    return 0;
}
}

// ==== BACKFILL 0x007A40F0  ComStreamClass::ddtor  cls=CNetUtilEventSink  sig=csp  renamed_refs=0  residual=- ====
int ComStreamClass::ddtor()
{
{
    int v2;
    unsigned int v3;
    if ( g_NetworkLobby_Init && DataGlobal_B77780 )
  {
    if ( !v2 && v3 < 0x3E8 )
    {
    DataGlobal_B77CE0 = (ObjectClass *)((char *)(DataGlobal_B77CE0) + 1);
    return 0;
    }
    return 0;
  }
    if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 )
  {
    if ( g_WOL_ProcessIdle )
    DisplayRankingsWOL(0, 0);
    return 0;
  }
    Debug::Log();
    if ( ++DataGlobal_B736F4 < (int)g_WOL_LoginPool )
    return 0;
    if ( g_WOL_IdleHandler == 4 || g_WOL_IdleHandler == 5 )
    UpdateWOLLobbyPings();
    ProcessPingRequestsWOL();
    return 0;
}
}

// ==== BACKFILL 0x007A5220  CComObject_CChatEventSink___ATL::DispatchStub_20  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_20(int a1, int a2, const char * a3)
{
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a3);
    return 0;
}
}

// ==== BACKFILL 0x007A5240  CComObject_CChatEventSink___ATL::GetTypeInfoCount  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::GetTypeInfoCount(int a1, int a2, int a3)
{
{
    wchar_t *StringCSF;
    wchar_t Buffer[512];
    if ( !g_NetworkLobby_Init )
  {
    StringCSF = GetStringCSF(DataGlobal_84AC00, 0, g_Str_File_wonline_cpp, 5655);
    swprintf(Buffer, (const size_t)&DataGlobal_8240B4, StringCSF);
    Dialog::ShowMessage(-1, (size_t)Buffer);
  }
    return 0;
}
}

// ==== BACKFILL 0x007A55F0  CComObject_CChatEventSink___ATL::GetIDsOfNames  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::GetIDsOfNames(int a1, int a2, char * Source)
{
{
    char *v4;
    unsigned char *i;
    short v6[1024];
    if ( a2 < 0 )
    return 0;
    v4 = _strdup(Source);
    for ( i = (unsigned char *)strtok(v4, DataGlobal_83F328); i; i = (unsigned char *)strtok(0, DataGlobal_83F328) )
  {
    BulkCharToWide(v6, i, -1);
    Dialog::ShowMessage(-1, (size_t)v6);
  }
    free(v4);
    Dialog::ShowMessage(-1, (size_t)asc_830174);
    return 0;
}
}

// ==== BACKFILL 0x007A70E0  CComObject_CChatEventSink___ATL::Disconnect  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::Disconnect(int a1, int a2, int a3, const char * a4)
{
{
    if ( a2 >= 0 )
    LeaveChannelWOL(a4);
    else
    Debug::Log();
    return 0;
}
}

// ==== BACKFILL 0x007AA6A0  CComObject_CChatEventSink___ATL::DispatchStub_18  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_18(int a1, int a2, int a3)
{
{
    if ( !g_NetworkLobby_Init && a2 >= 0 )
    Dialog::ShowMessage(-1, (size_t)DataGlobal_84B128, a3);
    return 0;
}
}

// ==== BACKFILL 0x007AAFB0  CComObject_CChatEventSink___ATL::Unadvise  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::Unadvise(int a1, int a2, const char * a3, const char * a4)
{
{
    const char *v4;
    const char *v5;
    bool v6;
    const void *v7;
    wchar_t *v8;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v4 = a4;
    String::Assign((char **)&a2, a4);
    v5 = a3;
    if ( a3 )
    {
    if ( (*a3 & 1) != 0 )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v6 = 1;
      }
    else
      {
    v6 = Dialog::FindByHandle((void *)0xC9) || DataGlobal_B779C0 != 0;
      }
    }
    else
    {
    v6 = 0;
    }
    DeleteAndZero((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    {
    String::Assign((char **)&a2, v4);
    CharStringToWide((wchar_t **)&a4, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v7 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v7) )
      {
    v8 = WideString::GetOrEmpty((wchar_t **)&a4);
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v7, v8);
      }
    DeleteAndZero::Alt((void **)&a4);
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007AB0A0  CComObject_CChatEventSink___ATL::DispatchStub_42  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_42(int a1, int a2, const char * a3, wchar_t * String)
{
{
    wchar_t *v4;
    const char *v5;
    bool v6;
    bool v7;
    int v8;
    const void *v9;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v4 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v5 = a3;
    if ( a3 )
    {
    if ( (*a3 & 1) != 0 )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v6 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC9) )
      {
    v6 = 1;
      }
    else
      {
    v7 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v8 = DataGlobal_B779C0;
    if ( v7 )
    v8 = DataGlobal_B779DC;
    v6 = v8 != 0;
      }
    }
    else
    {
    v6 = 0;
    }
    DeleteAndZero::Alt((void **)&a2);
    if ( v6 && IsBuddyOrIgnoreWOL(v5) )
    {
    v9 = v5 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v9) )
    Dialog::ShowMessage(16711935, (size_t)g_Str_Trace__hs, v9, v4);
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007AB170  CComObject_CChatEventSink___ATL::EnumDependents  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::EnumDependents(int a1, int a2, int a3, const char * a4, const char * a5)
{
{
    const char *v5;
    const char *v6;
    bool v7;
    const void *v8;
    wchar_t *v9;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v5 = a5;
    String::Assign((char **)&a2, a5);
    v6 = a4;
    if ( a4 )
    {
    if ( (*a4 & 1) != 0 )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v7 = 1;
      }
    else
      {
    v7 = Dialog::FindByHandle((void *)0xC9) || DataGlobal_B779C0 != 0;
      }
    }
    else
    {
    v7 = 0;
    }
    DeleteAndZero((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    {
    String::Assign((char **)&a2, v5);
    CharStringToWide((wchar_t **)&a5, (const char **)&a2);
    DeleteAndZero((void **)&a2);
    v8 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v8) )
      {
    v9 = WideString::GetOrEmpty((wchar_t **)&a5);
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v8, v9);
      }
    DeleteAndZero::Alt((void **)&a5);
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007AB260  CComObject_CChatEventSink___ATL::DispatchStub_43  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_43(int a1, int a2, int a3, const char * a4, wchar_t * String)
{
{
    wchar_t *v5;
    const char *v6;
    bool v7;
    bool v8;
    int v9;
    const void *v10;
    if ( !g_NetworkLobby_Init && a2 >= 0 )
  {
    v5 = String;
    WideString::Assign((wchar_t **)&a2, String);
    v6 = a4;
    if ( a4 )
    {
    if ( (*a4 & 1) != 0 )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC2) )
      {
    v7 = 1;
      }
    else if ( Dialog::FindByHandle((void *)0xC9) )
      {
    v7 = 1;
      }
    else
      {
    v8 = WideString::IsASCII((const wchar_t **)&a2) == 0;
    v9 = DataGlobal_B779C0;
    if ( v8 )
    v9 = DataGlobal_B779DC;
    v7 = v9 != 0;
      }
    }
    else
    {
    v7 = 0;
    }
    DeleteAndZero::Alt((void **)&a2);
    if ( v7 && IsBuddyOrIgnoreWOL(v6) )
    {
    v10 = v6 + 36;
    if ( _strcmpi(g_GameSetupBuffer, v10) )
    Dialog::ShowMessage(3166463, (size_t)g_Str_Trace__hs, v10, v5);
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x007AB330  CComObject_CChatEventSink___ATL::COMStub_Return0  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::COMStub_Return0(int a1, int a2, int a3, int a4)
{
return 0;
}

// ==== BACKFILL 0x007AB340  CComObject_CChatEventSink___ATL::StubReturnFalse  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::StubReturnFalse(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AB350  CComObject_CChatEventSink___ATL::DispatchStub_29  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_29(int a1, int a2, __time32_t Time)
{
{
    wchar_t *StringCSF;
    const wchar_t *v5;
    wchar_t Buffer[200];
    if ( !g_NetworkLobby_Init && !a2 )
  {
    v5 = (const wchar_t *)unknown_libname_75(&Time);
    StringCSF = GetStringCSF(aTxtBannedtill, 0, g_Str_File_wonline_cpp, 8809);
    swprintf(Buffer, (const size_t)StringCSF, v5);
    ShowDialogConfirm(Buffer, 0, (int)GameLoop::Thunk, 0);
  }
    return 0;
}
}

// ==== BACKFILL 0x007AB3C0  CComObject_CChatEventSink___ATL::DispatchStub_31  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_31(int a1, int a2, unsigned char * a3, int a4)
{
{
    wchar_t *StringCSF;
    wchar_t *v6;
    char *v7;
    char *v8;
    if ( !g_NetworkLobby_Init )
  {
    if ( a4 )
    {
    v7 = CharToWideString(a3);
    StringCSF = GetStringCSF(aTxtChanBan, 0, g_Str_File_wonline_cpp, 8822);
    Dialog::ShowMessage(-1, (size_t)StringCSF, v7);
    return 0;
    }
    v8 = CharToWideString(a3);
    v6 = GetStringCSF(aTxtChanUnban, 0, g_Str_File_wonline_cpp, 8825);
    Dialog::ShowMessage(-1, (size_t)v6, v8);
  }
    return 0;
}
}

// ==== BACKFILL 0x007AC4A0  CComObject_CChatEventSink___ATL::DispatchStub_38  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_38(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AC4B0  CComObject_CChatEventSink___ATL::DispatchStub_39  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_39(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AC4C0  CComObject_CChatEventSink___ATL::DispatchStub_45  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_45(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AC4D0  CComObject_CChatEventSink___ATL::DispatchStub_46  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_46(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AC4E0  CComObject_CChatEventSink___ATL::DispatchStub_47  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CComObject_CChatEventSink___ATL::DispatchStub_47(int a1, int a2, int a3)
{
return 0;
}

// ==== BACKFILL 0x007AC500  HandleLogoutWOL_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_7AC500(int a1)
{
{
    int v2;
    int v3;
    int *v4;
    int *v5;
    unsigned int v6;
    if ( !a1 )
    return -2147024809;
    v2 = *(int *)(a1 + 16);
    if ( v2 && *(int *)v2 )
  {
    do
    {
    v3 = *(int *)(v2 + 16);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(*(int *)(v2 + 16));
    *(int *)(v2 + 16) = 0;
    (*(void (__stdcall **)(int))(v2 + 32))(0);
    if ( *(int *)a1 == 100 )
    v2 += 28;
    else
    v2 += 36;
    }
    while ( *(int *)v2 );
  }
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 28));
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 52));
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 76));
    v4 = *(int **)(a1 + 128);
    if ( v4 )
  {
    do
    {
    ((void (__stdcall *)(int))*v4)(v4[1]);
    v5 = (int *)v4[2];
    __3_YAXPAX_Z(v4);
    v4 = v5;
    }
    while ( v5 );
  }
    if ( *(int *)(a1 + 24) && *(char *)(a1 + 108) )
  {
    if ( *(int *)(a1 + 120) )
    {
    v6 = 0;
    do
    HeapDestroy(*(HANDLE *)(*(int *)(a1 + 120) + 4 * v6++));
    while ( v6 <= *(int *)(a1 + 116) );
    }
    HeapDestroy(*(HANDLE *)(a1 + 24));
  }
    return 0;
}
}

// ==== BACKFILL 0x007ACB90  StartGameWOL_Start_7ACB90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_7ACB90::StartGameWOL_Start_7ACB90(IUnknown * aP1, int a3)
{
{
    if ( a3 < 0 || a3 >= *(void**)this )
    return 0;
    qmemcpy(aP1, (const void *)(this->M8 + 108 * a3), 0x6Cu);
    return 1;
}
}

// ==== BACKFILL 0x007ACBD0  ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_1  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_7ACBD0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_1()
{
{
    *(int *)this = 0;
}
}

// ==== BACKFILL 0x007AD2F0  SessionClass::ResetSystemWOL_Reset  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ** SessionClass::ResetSystemWOL_Reset(char a2)
{
{
    DeleteAndZero((void **)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (void **)this;
}
}

// ==== BACKFILL 0x007AD330  Object::DtorWithDelete  cls=Object  sig=csp  renamed_refs=0  residual=- ====
SessionClass * Object::DtorWithDelete(char a2)
{
{
    DeleteAndZero(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SessionClass *)this;
}
}

// ==== BACKFILL 0x007AD350  CChatEventSink::DeleteAndZero  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * CChatEventSink::DeleteAndZero(char a2)
{
{
    DeleteAndZero(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}

// ==== BACKFILL 0x007AE730  VectorClass::Shrink  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass::Shrink()
{
{
    int v2;
    int v3;
    int v5;
    void *v6;
    const void *v7;
    int v8;
    v2 = *(int*)this;
    v3 = this->Items;
    if ( 3 * v2 > v3 )
    return 0;
    v5 = v3 / 2;
    if ( v3 / 2 < 10 )
    v5 = 10;
    if ( v5 >= v3 )
    return 0;
    v6 = __2_YAPAXI_Z(4 * v5);
    v7 = (const void *)this->Capacity;
    v8 = (int)v6;
    if ( v7 )
    qmemcpy(v6, v7, 4 * *(int*)this);
    __3_YAXPAX_Z((void*)this->Capacity);
    this->Capacity = v8;
    this->Items = (void*)(v5);
    return 1;
}
}

// ==== BACKFILL 0x007AECB0  CChatEventSink::ComputeBucketMask  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
int CChatEventSink::ComputeBucketMask(int a2)
{
{
    return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->CChatEventSink_field_0x0C) - 1);
}
}

// ==== BACKFILL 0x007AECD0  QueryNATPortWOL_Helper  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_7AECD0::sub_7AECD0(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_tConnInfoStruct;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x007AED20  ComStreamClass::writeData  cls=ComStreamClass  sig=csp  renamed_refs=0  residual=- ====
void ** ComStreamClass::writeData(char a2)
{
{
    DeleteAndZero(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// ==== BACKFILL 0x007AEDD0  CChatEventSink::EnsureCapacity  cls=CChatEventSink  sig=csp  renamed_refs=0  residual=- ====
char CChatEventSink::EnsureCapacity(int a2)
{
{
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    void *v9;
    const void *v10;
    void *v11;
    v3 = *(int *)this;
    if ( !*(int *)this )
    return 0;
    v5 = a2;
    if ( a2 < 0 )
    v5 = 0;
    if ( v5 >= v3 )
    v5 = v3 - 1;
    memcpy( (void *)(this->CChatEventSink_field_0x08 + 4 * v5), (const void *)(this->CChatEventSink_field_0x08 + 4 * (v5 + 1)), 4 * (v3 + 0x3FFFFFFF * (v5 + 1)));
    v6 = *(int *)this - 1;
    *(int *)this = v6;
    v7 = this->CChatEventSink_field_0x04;
    if ( 3 * v6 <= v7 )
  {
    v8 = v7 / 2;
    if ( v7 / 2 < 10 )
    v8 = 10;
    if ( v8 < v7 )
    {
    v9 = __2_YAPAXI_Z(4 * v8);
    v10 = (const void *)this->CChatEventSink_field_0x08;
    v11 = v9;
    if ( v10 )
    qmemcpy(v9, v10, 4 * *(int *)this);
    __3_YAXPAX_Z(*((void **)(this) + 2));
    this->CChatEventSink_field_0x08 = v11;
    this->CChatEventSink_field_0x04 = v8;
    }
  }
    return 1;
}
}

// ==== BACKFILL 0x007AEEC0  Vector::Grow  cls=Vector  sig=csp  renamed_refs=6  residual=- ====
char Vector::Grow()
{
{
    int v2;
    int v4;
    void *v5;
    int v6;
    v2 = *(void**)this;
    if ( *(void**)this < this->q004 )
    return 0;
    v4 = 2 * v2;
    v6 = 2 * v2;
    if ( 2 * v2 < 10 )
  {
    v6 = 10;
    v4 = 10;
  }
    v5 = __2_YAPAXI_Z(4 * v4);
    memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2));
    if ( this->q008 )
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *(void**)this);
    v4 = v6;
  }
    __3_YAXPAX_Z((void *)this->q008);
    this->q004 = v4;
    this->q008 = (int)v5;
    return 1;
}
}

// ==== BACKFILL 0x007AF000  DynamicVector::EnsureCapacity  cls=DynamicVector  sig=csp  renamed_refs=4  residual=- ====
char DynamicVector::EnsureCapacity()
{
{
    int v2;
    int v4;
    void *v5;
    int v6;
    v2 = *(void**)this;
    if ( *(void**)this < this->Items )
    return 0;
    v4 = 2 * v2;
    v6 = 2 * v2;
    if ( 2 * v2 < 10 )
  {
    v6 = 10;
    v4 = 10;
  }
    v5 = __2_YAPAXI_Z(4 * v4);
    memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2));
    if ( this->q008 )
  {
    qmemcpy(v5, (const void *)this->q008, 4 * *(void**)this);
    v4 = v6;
  }
    __3_YAXPAX_Z((void *)this->q008);
    this->Items = v4;
    this->q008 = (int)v5;
    return 1;
}
}

// ==== BACKFILL 0x007AF540  WorldDominationFactionDlgProc_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_7AF540::sub_7AF540(HWND hWnd, int * a3)
{
{
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    result = this->Vf8();
    if ( !(char)result )
  {
    v5 = 0;
    this->M28 = this->M16;
    result = *a3;
    if ( *a3 >= 16 && result < 364 && (v6 = *((int*)(a3) + 1), v6 >= 20) && v6 < 136 || result >= 130 && result < 300 && (v7 = *((int*)(a3) + 1), v7 >= 100) && v7 < 216 || result >= 175 && result < 245 && (v8 = *((int*)(a3) + 1), v8 >= 216) && v8 < 262 )
    {
    result = this->M20;
    v5 = 2;
    this->M28 = result;
    }
    else if ( result >= 252 && result < 466 && (v9 = *((int*)(a3) + 1), v9 >= 180) && v9 < 382 || result >= 212 && result < 496 && (v10 = *((int*)(a3) + 1), v10 >= 262) && v10 < 422 )
    {
    v5 = 3;
    this->M28 = this->M24;
    }
    if ( this->M12 != v5 )
    {
    this->M12 = v5;
    return InvalidateRect(hWnd, 0, 0);
    }
  }
    return result;
}
}
