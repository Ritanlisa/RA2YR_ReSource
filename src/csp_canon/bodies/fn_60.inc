// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00600660  ReadPointerFromECX  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_600660::ReadPointerFromECX()
{
{
    return *(ObjectClass **)this;
}
}

// ==== BACKFILL 0x00602AE0  Dialog::IsSpecialTemplate  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
BOOL Dialog::IsSpecialTemplate()
{
{
    return this == (void *)293 || this == (void *)231 || this == (void *)278 || this == (void *)194 || this == (void *)201 || this == (void *)285 || this == (void *)284 || this == (void *)276 || this == (void *)700 || this == (void *)275 || this == (void *)265 || this == (void *)271 || this == (void *)279 || this == (void *)230 || this == (void *)243 || this == (void *)244 || this == (void *)270 || this == (void *)274;
}
}

// ==== BACKFILL 0x00603DB0  Diplomacy_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT Diplomacy_Helper(HWND hWnd, unsigned char a2)
{
{
    return SendMessageA(hWnd, 0x4E5u, 0, a2);
}
}

// ==== BACKFILL 0x00603DD0  globalHelper_003DD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT globalHelper_003DD0(HWND hWnd, unsigned char a2)
{
{
    return SendMessageA(hWnd, 0x4E6u, 0, a2);
}
}

// ==== BACKFILL 0x00603F00  UI_Assign  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** UI_Assign(wchar_t ** a1, HWND a2, LPARAM, LPARAM)
{
{
    LPARAM lParam[2];
    void *v8;
    unknown_libname_74(&v8);
    lParam[0] = a3;
    lParam[1] = a4;
    SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v8);
    DeleteAndZero::Alt(&v8);
    return a1;
}
}

// ==== BACKFILL 0x00603F60  WOLobby_Setup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM)
{
{
    LPARAM lParam[2];
    void *v7;
    unknown_libname_74(&v7);
    lParam[0] = a3;
    lParam[1] = -1;
    SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam);
    WideString::AssignFromPtr(a1, (const wchar_t **)&v7);
    DeleteAndZero::Alt(&v7);
    return a1;
}
}

// ==== BACKFILL 0x0060AA60  sub_60AA60  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_60AA60(HWND hWnd, LPARAM)
{
{
    HWND Parent;
    Parent = GetParent(hWnd);
    if ( IsValidActionDialog((int)Parent, hWnd) )
    SendMessageA(hWnd, 0x4EEu, 0, 0);
    return 1;
}
}

// ==== BACKFILL 0x0060AAA0  Dialog::EnumAndCleanup  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
BOOL Dialog::EnumAndCleanup()
{
{
    return EnumChildWindows(this, sub_60AA60, 0);
}
}

// ==== BACKFILL 0x0060B740  sub_60B740  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
BOOL E4Recv_60B740::sub_60B740()
{
{
    HWND Parent;
    struct tagRECT v4;
    struct tagRECT Rect;
    Parent = GetParent(this);
    GetWindowRect(Parent, &Rect);
    GetWindowRect(this, &v4);
    return MoveWindow(this, v4.left - Rect.left, v4.top - Rect.top, v4.right - v4.left, v4.bottom - v4.top, 0);
}
}

// ==== BACKFILL 0x0060CBA0  CampaignScore::LookupDialogHash  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CampaignScore::LookupDialogHash() {
{
      int result;
      void *v2;

      result = g_DialogHashMap_Count;
      v2 = this;
      if ( g_DialogHashMap_Count )
      {
        result = *((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v2) & ((1 << g_DialogHashMap_Buckets) - 1)));
        if ( result )
        {
          while ( *(void **)result != v2 )
          {
            result = *(_DWORD *)(result + 516);
            if ( !result )
              return result;
          }
          result += 4;
          if ( result )
            *(_BYTE *)(result + 213) = 1;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x0060CC00  CampaignScore::FindDialogTemplate  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CampaignScore::FindDialogTemplate() {
{
      int result;
      void *v2;

      result = g_DialogHashMap_Count;
      v2 = this;
      if ( g_DialogHashMap_Count )
      {
        result = *((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v2) & ((1 << g_DialogHashMap_Buckets) - 1)));
        if ( result )
        {
          while ( *(void **)result != v2 )
          {
            result = *(_DWORD *)(result + 516);
            if ( !result )
              return result;
          }
          result += 4;
          if ( result )
            *(_BYTE *)(result + 213) = 0;
        }
      }
      return result;
}
} }

// ==== BACKFILL 0x0060D380  Campaign::Screen  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG Campaign::Screen(char a1)
{
{
    HWND v1;
    LONG result;
    LONG dwNewLong;
    v1 = (HWND)CreateDialog(0);
    result = 0;
    dwNewLong = 0;
    if ( v1 )
  {
    SetWindowLongA(v1, 8, (LONG)&dwNewLong);
    ShowWindow(v1, 1);
    SetForegroundWindow(v1);
    Timer::PumpMessages(g_BinkMoviePlayer);
    if ( a1 )
    BINK::Background_Setup(v1);
    while ( !dwNewLong )
    {
    MessageLoop();
    if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign )
      {
    Event::Dispatch();
      }
    else if ( !(unsigned char)VtableStub::Method_55CBF0() && GameFrameLoop() )
      {
    break;
      }
    }
    Dialog::Destroy(v1);
    return dwNewLong;
  }
    return result;
}
}

// ==== BACKFILL 0x0060D450  DialogClass::RegisterWinClasses  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
ATOM DialogClass::RegisterWinClasses()
{
{
    ATOM result;
    WNDCLASSA WndClass;
    result = 1;
    if ( DataGlobal_AC48CC != 1 )
  {
    DataGlobal_AC48CC = 1;
    WndClass.hInstance = g_hInstance;
    WndClass.style = 3;
    WndClass.lpfnWndProc = GameScreen::DlgProc;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    memset(&WndClass.hIcon, 0, 12);
    WndClass.lpszMenuName = DataGlobal_8357A0;
    WndClass.lpszClassName = DataGlobal_8357A0;
    RegisterClassA(&WndClass);
    WndClass.style = 131;
    WndClass.lpfnWndProc = sub_60D520;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = g_hInstance;
    memset(&WndClass.hIcon, 0, 16);
    WndClass.lpszClassName = g_INI_Key_NewEdit;
    return RegisterClassA(&WndClass);
  }
    return result;
}
}

// ==== BACKFILL 0x0060D520  sub_60D520  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT sub_60D520(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
{
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
}
}

// ==== BACKFILL 0x0060F320  Dialog::SubclassEditControl  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Dialog::SubclassEditControl(HWND hWnd, LPARAM)
{
{
    LONG WindowLongA;
    HWND Parent;
    DWORD v4;
    HWND Window;
    int *v6;
    LONG v7;
    LONG dwNewLong;
    struct tagRECT Rect;
    struct tagRECT v11;
    CHAR ClassName[128];
    WindowLongA = GetWindowLongA(hWnd, -16);
    SetWindowLongA(hWnd, -21, 0);
    if ( (WindowLongA & 0x10000000) != 0 && (WindowLongA & 0x8000000) == 0 )
  {
    GetClassNameA(hWnd, ClassName, 128);
    if ( !strcmp(ClassName, g_INI_Key_Edit) )
    {
    Parent = GetParent(hWnd);
    ScreenDialogToClient(hWnd, &Rect);
    ScreenDialogToClient(Parent, &v11);
    v4 = 1073742096;
    if ( (WindowLongA & 0x10000) != 0 )
    v4 = 1073807632;
    Window = CreateWindowExA( 0, g_INI_Key_ListBox, 0, v4, Rect.left - v11.left, Rect.top - v11.top, Rect.right - Rect.left, Rect.bottom - Rect.top, Parent, 0, g_hInstance, 0);
    v6 = __2_YAPAXI_Z(8u);
    *v6 = g_INI_Key_NewEdit;
    v6[1] = GetWindowLongA(hWnd, -16);
    SetWindowLongA(Window, -21, (LONG)v6);
    EnableWindow(hWnd, 0);
    ShowWindow(hWnd, 0);
    EnableWindow(Window, 1);
    ShowWindow(Window, 1);
    dwNewLong = GetWindowLongA(hWnd, -12);
    v7 = GetWindowLongA(Window, -12);
    SetWindowLongA(hWnd, -12, v7);
    SetWindowLongA(Window, -12, dwNewLong);
    }
  }
    return 1;
}
}
