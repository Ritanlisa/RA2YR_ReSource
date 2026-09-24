// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00791AA0  ObjectClass::UI_Setup_791AA0  this=ObjectClass  sig=csp ====
void __thiscall sub_791AA0(HWND this)
{
  wchar_t *StringCSF; // eax

  if ( this ) /*0x791aa5*/
  {
    if ( g_MenuStateFlags ) /*0x791ab5*/
      StringCSF = GetStringCSF(g_Str_TXT_OBSERVER_FULL, 0, g_Str_File_wonline_cpp, 17235); /*0x791adb*/
    else
      StringCSF = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 17233); /*0x791ac8*/
    ShowDialogConfirm(StringCSF, 0, (int)GameLoop::Thunk, 0); /*0x791ae4*/
    if ( (*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv) < 0 ) /*0x791af6*/
      CloseDialog(this, 2); /*0x791aff*/
  }
}



// ==== 0x00791B10  WOLobby::ChatDlgProc  this=WOLobby  sig=csp ====
int __stdcall sub_791B10(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // ebx
  int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  const wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **OwnerName; // eax
  wchar_t *v13; // eax
  void *v14; // esi
  HWND v15; // esi
  int v16; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  int v21; // ebx
  size_t v22; // esi
  wchar_t *v23; // edi
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // ebp
  const wchar_t *v27; // esi
  struct tagRECT *p_Rect; // edi
  wchar_t v29; // ax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  size_t v32; // esi
  wchar_t *v33; // edi
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // eax
  wchar_t *v37; // edi
  size_t v38; // eax
  size_t v39; // eax
  const wchar_t *i; // esi
  char *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // eax
  int v44; // esi
  wchar_t... [26107 chars total]



// ==== 0x00792BE0  ShowUIMessage  this=-  sig=csp ====
char __fastcall UIMessage_Show(int a1, wchar_t **a2, char a3)
{
  HWND v5; // esi
  HWND DlgItem; // edi
  wchar_t *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  wchar_t *v11; // eax
  char result; // al

  v5 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x792bf6*/
  if ( v5 ) /*0x792bfa*/
  {
    g_WOL_ChannelList |= a1; /*0x792c06*/
    if ( WideString::Length((const wchar_t **)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem(v5, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt(a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    v5 = (HWND)CreateDialogIndirect(g_hInstance, g_hWnd, sub_792CF0, 0); /*0x792c7e*/
    SetupDialog(v5); /*0x792c87*/
    v10 = GetDlgItem(v5, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt(a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    g_WOL_ChannelList = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = g_WOL_ChannelList; /*0x792cca*/
    if ( g_WOL_ChannelList ) /*0x792cd1*/
      return MessageDialogLoopAlt(v5, 0, 1, 0); /*0x792ce0*/
  }
  return result; /*0x792ce5*/
}



// ==== 0x00792CF0  sub_792CF0  this=-  sig=csp ====
INT_PTR __stdcall sub_792CF0(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax
  HWND DlgItem; // esi

  if ( a2 > 0x110 ) /*0x792cfa*/
  {
    switch ( a2 ) /*0x792d68*/
    {
      case 0x111u: /*0x792d68*/
        if ( (unsigned __int16)a3 == 1421 ) /*0x792e0f*/
        {
          SetEvent(Handles); /*0x792e2b*/
          CloseDialog(hWnd, 1); /*0x792e3a*/
        }
        else if ( (unsigned __int16)a3 == 1422 ) /*0x792e12*/
        {
          WebBrowser::ShowDialog(aNetstatus); /*0x792e19*/
          return 0; /*0x792e21*/
        }
        break;
      case 0x113u: /*0x792d68*/
        if ( a3 == 69 ) /*0x792de3*/
        {
          ShowWindow(hWnd, 5); /*0x792dec*/
          KillTimer(hWnd, 0x45u); /*0x792df5*/
          return 0; /*0x792dfe*/
        }
        break;
      case 0x497u: /*0x792d68*/
        SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x792d8d*/
        SetTimer(hWnd, 0x45u, uElapse, 0); /*0x792d9e*/
        HashTable::LookupAndMark(hWnd); /*0x792da6*/
        DlgItem = GetDlgItem(hWnd, 1961); /*0x792dbf*/
        PostMessageA(DlgItem, 0x4D5u, 0, 0); /*0x792dc9*/
        PostMessageA(DlgItem, 0x4D3u, 0, 0); /*0x792dd5*/
        return 0; /*0x792ddb*/
    }
    return 0; /*0x792d78*/
  }
  if ( a2 == 272 ) /*0x792cfc*/
    return 0; /*0x792e3f*/
  switch ( a2 ) /*0x792d16*/
  {
    case 2u: /*0x792d16*/
      KillTimer(hWnd, 0x45u); /*0x792d24*/
      return 0; /*0x792d2d*/
    case 0xFu: /*0x792d16*/
      Dialog::DrawBackground(hWnd); /*0x792d48*/
      Dialog::StopBink(hWnd); /*0x792d4f*/
      ValidateRect(hWnd, 0); /*0x792d57*/
      return 0; /*0x792d60*/
    case 0x14u: /*0x792d16*/
      goto LABEL_6;
    case 0x2Bu: /*0x792d16*/
      Dialog::Resize(a4); /*0x792d34*/
LABEL_6:
      result = 1; /*0x792d39*/
      break; /*0x792d3f*/
    default:
      return 0;
  }
  return result; /*0x792d2c*/
}



// ==== 0x00792EC0  CreateGameWOL_Create  this=-  sig=ida-proto ====
HWND __fastcall sub_792EC0(int a1)
{
  HWND v2; // eax
  HWND Current; // eax
  HWND result; // eax

  v2 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x792ec8*/
  if ( v2 ) /*0x792ecf*/
  {
    g_WOL_ChannelList &= ~a1; /*0x792edb*/
    if ( !g_WOL_ChannelList ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
  Current = Dialog::GetCurrent(); /*0x792eec*/
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}



// ==== 0x00792F10  Network::SyncPlayerList  this=Network  sig=csp ====
void Network_SyncPlayerList()
{
  signed int v0; // eax
  signed int v1; // ebp
  int v2; // ebx
  char *v3; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  int v9; // eax
  int v10; // ecx
  int i; // esi
  int v12; // [esp+Ch] [ebp-7Ch] BYREF
  int v13; // [esp+10h] [ebp-78h] BYREF
  _BYTE v14[8]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v15[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  v0 = g_WOL_State; /*0x792f10*/
  g_ScenarioLoadFlags = 1; /*0x792f18*/
  v1 = 0; /*0x792f23*/
  if ( (int)g_WOL_State > 0 ) /*0x792f28*/
  {
    v2 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v2 >= 0 && v1 < v0 ) /*0x792f38*/
        qmemcpy(v15, (char *)g_WOL_ConnectionFlags + v2, sizeof(v15)); /*0x792f4b*/
      v3 = CharToWideString(&v15[9]); /*0x792f51*/
      v4 = Player::FindByName((wchar_t *)v3); /*0x792f58*/
      v5 = v4; /*0x792f5d*/
      if ( v4 && IsKnownPointer(v4) ) /*0x792f65*/
        *(_DWORD *)((char *)v5 + 123) = v15[5]; /*0x792f72*/
      v6 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x792f7a*/
      if ( _strcmpi(&v15[9], v6) ) /*0x792f85*/
      {
        if ( (v15[0] & 1) != 0 ) /*0x792f96*/
        {
          v7 = CharToWideString(&v15[9]); /*0x792f9c*/
          v8 = Player::FindByName((wchar_t *)v7); /*0x792fa3*/
          Network::CopyAddress((_DWORD *)v8 + 10, &v13, (int)v14); /*0x792fb5*/
          NetworkID::Assign(&g_NetworkRematchObject, &v13, (int)v14, 0); /*0x792fcb*/
        }
        v12 = 0; /*0x792fde*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))( /*0x792fea*/
          g_UIPointerTable,
          v15[6],
          &v12);
        v9 = v12; /*0x792fed*/
        if ( v12 < 0 ) /*0x792ff3*/
        {
          v9 = 0; /*0x792ff5*/
          v12 = 0; /*0x792ff7*/
        }
        v10 = g_ScenarioLoadFlags; /*0x792ffb*/
        dword_B7790C[g_ScenarioLoadFlags] = v9; /*0x793001*/
        g_ScenarioLoadFlags = v10 + 1; /*0x793009*/
      }
      v0 = g_WOL_State; /*0x79300f*/
      ++v1; /*0x793014*/
      v2 += 108; /*0x793015*/
    }
    while ( v1 < (int)g_WOL_State ); /*0x79301a*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 48))(g_NetworkInterface); /*0x79302a*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x793039*/
  {
    Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40), 0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)g_NetworkInterface + 44))( /*0x793071*/
      g_NetworkInterface,
      *(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40,
      0);
  }
  Network::FormatAddress((unsigned __int16 *)&g_NetworkRematchObject, 0); /*0x793085*/
  Debug::Log(); /*0x793090*/
}



// ==== 0x007930A0  UI_Setup_7930A0  this=-  sig=ida-proto ====
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7930bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7930c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7930f6*/
  return _strcmpi(byte_B777D4, v3) == 0; /*0x7930dc*/
}



// ==== 0x00793120  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_793120(char **this)
{
  int v1; // eax
  char *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( (int)g_WOL_State <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < (int)g_WOL_State ) /*0x79313e*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x79314c*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = String::GetOrEmpty_Alt(this); /*0x793178*/
  return _strcmpi(byte_B777D4, v4) == 0; /*0x79315f*/
}



// ==== 0x007931A0  GameSettings::FindFlagged  this=GameSettings  sig=ida-proto ====
char *GameSettings_FindFlagged()
{
  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7931bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7931c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &g_IsMultiplayerSession; /*0x7931dc*/
}



// ==== 0x00793280  sub_793280  this=-  sig=csp ====
int __stdcall sub_793280(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  int result; // eax
  int v5; // edi
  int *v6; // esi
  HWND DlgItem; // eax
  int i; // esi
  HWND v9; // edi

  if ( a2 > 0x111 ) /*0x79328c*/
  {
    if ( a2 < 0x132 ) /*0x793355*/
      return 0; /*0x793355*/
    if ( a2 <= 0x138 ) /*0x79335c*/
      return (int)GetStockObject(4); /*0x793420*/
    if ( a2 != 1175 ) /*0x793367*/
      return 0; /*0x793331*/
    v5 = 0; /*0x793374*/
    v6 = dword_84A1F0; /*0x793376*/
    do /*0x7933ab*/
    {
      DlgItem = GetDlgItem(hWnd, *v6); /*0x79337f*/
      dword_B75F54 = 0; /*0x79338e*/
      dword_B75F58 = 0; /*0x793396*/
      if ( v5 > Game_PlayerCount - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < Game_PlayerCount; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(Game_PlayerInfoArray + 4 * i)); /*0x7933e1*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7933ed*/
    }
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x793403*/
    HashTable::LookupAndMark(hWnd); /*0x793407*/
    ShowWindow(hWnd, 5); /*0x79340f*/
    return 0; /*0x793418*/
  }
  else
  {
    if ( a2 != 273 ) /*0x793292*/
    {
      switch ( a2 ) /*0x793297*/
      {
        case 0xFu: /*0x793297*/
          Dialog::DrawBackground(hWnd); /*0x7932c1*/
          ValidateRect(hWnd, 0); /*0x7932c9*/
          return 0; /*0x7932d4*/
        case 0x14u: /*0x793297*/
          return 1; /*0x7932b8*/
        case 0x2Bu: /*0x793297*/
          Dialog::Resize(a4); /*0x7932ab*/
          return 1; /*0x7932ab*/
      }
      return 0; /*0x7932a1*/
    }
    switch ( (__int16)a3 ) /*0x7932f4*/
    {
      case 1889: /*0x7932f4*/
      case 1890: /*0x7932f4*/
      case 1892: /*0x7932f4*/
      case 1893: /*0x7932f4*/
      case 1894: /*0x7932f4*/
      case 1895: /*0x7932f4*/
      case 1896: /*0x7932f4*/
      case 1897: /*0x7932f4*/
        if ( byte_B757EB[(unsigned __int16)a3] ) /*0x7932fb*/
        {
          if ( !SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) ) /*0x79331a*/
            SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 1u, 0); /*0x79332a*/
          return 0; /*0x79332a*/
        }
        if ( SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) != 1 ) /*0x793339*/
          return 0; /*0x793339*/
        SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 0, 0); /*0x793346*/
        result = 0; /*0x79334a*/
        break; /*0x79334d*/
      default:
        return 0;
    }
  }
  return result; /*0x7932b0*/
}



// ==== 0x00793490  ObjectClass::HandleWOLForwardingError  this=ObjectClass  sig=csp ====
HWND HandleWOLForwardingError()
{
  HWND result; // eax
  char *i; // edx
  int v2; // edi
  int v3; // esi
  char *v4; // eax
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  const wchar_t *v10; // [esp-4h] [ebp-210h]
  wchar_t *v11; // [esp-4h] [ebp-210h]
  const wchar_t *v12; // [esp-4h] [ebp-210h]
  wchar_t *v13; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x793496*/
  if ( (int)g_WOL_State > 0 ) /*0x7934a3*/
  {
    for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7934a9*/
    {
      if ( (int)result >= 0 && (int)result < (int)g_WOL_State ) /*0x7934b5*/
        qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7934c3*/
      if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      result = (HWND)((char *)result + 1); /*0x7934ce*/
      if ( (int)result >= (int)g_WOL_State ) /*0x7934d4*/
        return result; /*0x7934d4*/
    }
    result = (HWND)&g_IsMultiplayerSession; /*0x7934e0*/
    if ( &g_IsMultiplayerSession ) /*0x7934e7*/
    {
      v2 = -1; /*0x7934f2*/
      v3 = 0; /*0x7934f5*/
      if ( Game_PlayerCount > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v4 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v3)); /*0x793509*/
          if ( !_strcmpi(v4, byte_B777D4) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v3 >= Game_PlayerCount ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v2 = v3; /*0x793527*/
      }
LABEL_15:
      v5 = 0; /*0x793529*/
      v6 = 0; /*0x793530*/
      if ( Game_PlayerCount <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( dword_B73BB4[v6] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v5 = 1; /*0x793557*/
            ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v6)); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            v10 = *(const wchar_t **)(Game_PlayerInfoArray + 4 * v6); /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v5 = 1; /*0x793591*/
            ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v6)); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            v10 = *(const wchar_t **)(Game_PlayerInfoArray + 4 * v6); /*0x7935b3*/
            StringCSF = GetStringCSF(aTxtTalkLocalPr, 0, g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
LABEL_19:
            swprintf(Buffer, (const size_t)StringCSF, v10); /*0x7935c8*/
            Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v5 = 1; /*0x7935ee*/
            if ( v6 == v2 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              v11 = GetStringCSF(aTxtTalkForward, 0, g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage(-1, (size_t)v11); /*0x79361d*/
            }
            else
            {
              ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v6)); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              v12 = *(const wchar_t **)(Game_PlayerInfoArray + 4 * v6); /*0x79364b*/
              v8 = GetStringCSF(aTxtTalkForward_0, 0, g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf(Buffer, (const size_t)v8, v12); /*0x793663*/
              Dialog::ShowMessage(-1, (size_t)Buffer); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v5 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            v13 = GetStringCSF(aTxtTalkHostAbo, 0, g_Str_File_wonline_cpp, 18875); /*0x7936a3*/
            Dialog::ShowMessage(-1, (size_t)v13); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = (HWND)Game_PlayerCount; /*0x7936b2*/
        ++v6; /*0x7936b7*/
      }
      while ( v6 < Game_PlayerCount ); /*0x7936ba*/
      if ( !v5 ) /*0x7936c2*/
      {
LABEL_26:
        v9 = GetStringCSF(aTxtFailedToTal, 0, g_Str_File_wonline_cpp, 18888); /*0x7936d5*/
        return Dialog::ShowMessage(-1, (size_t)v9); /*0x7936e2*/
      }
    }
  }
  return result; /*0x7934d6*/
}



// ==== 0x00793710  sub_793710  this=-  sig=ida-proto ====
__int16 __fastcall sub_793710(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  LOWORD(v4) = a1 + a2; /*0x79371c*/
  if ( a4 != 1 ) /*0x79371f*/
  {
    if ( a4 == 2 ) /*0x793724*/
    {
      LOWORD(v4) = a2 + 2 * a1; /*0x793726*/
    }
    else if ( a4 <= 1 ) /*0x79372e*/
    {
      if ( a4 < 0 ) /*0x793753*/
      {
        if ( a4 == -100 ) /*0x793758*/
          LOWORD(v4) = a2 + 100 * a1; /*0x793760*/
        else
          v4 = a2 + a1 % 2 - a4 * (a1 / 2); /*0x793780*/
      }
    }
    else
    {
      v4 = a4 * (a1 / 2) + a2 + a1 % 2; /*0x79374d*/
    }
  }
  Debug::Log(); /*0x79378b*/
  if ( (unsigned __int16)v4 >= 0x400u ) /*0x793798*/
    return v4; /*0x7937a5*/
  else
    return 1024; /*0x79379c*/
}



// ==== 0x007937B0  CComObject_CChatEventSink___ATL::DispatchConnectionPairs  this=CComObject_CChatEventSink___ATL  sig=csp ====
int __thiscall sub_7937B0(char *this)
{
  int v1; // edi
  _DWORD *v2; // ebx
  wchar_t **v3; // esi
  int v4; // eax
  int *v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebx
  int *v14; // edi
  char *v15; // esi
  int v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h]
  int v20; // [esp+10h] [ebp-30h]
  int i; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+14h] [ebp-2Ch]
  int v23; // [esp+18h] [ebp-28h]
  _DWORD *v24; // [esp+18h] [ebp-28h]
  _DWORD v26[8]; // [esp+20h] [ebp-20h] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7937c6*/
  v1 = 0; /*0x7937c8*/
  v2 = v26; /*0x7937ca*/
  v3 = (wchar_t **)&g_NetworkPlayerName; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&g_PlayerNameListEnd ); /*0x7937ed*/
  v4 = Game_PlayerCount; /*0x7937ef*/
  for ( i = 0; i < v4; ++i ) /*0x7937fe*/
  {
    v19 = 0; /*0x793803*/
    if ( v4 - 1 > 0 ) /*0x79380d*/
    {
      v5 = &v26[1]; /*0x79380f*/
      do /*0x793865*/
      {
        v6 = *v5; /*0x793813*/
        v7 = *(v5 - 1); /*0x793815*/
        v8 = dword_A8DC2C[v7]; /*0x793824*/
        v23 = Network_Connect(dword_A8DC2C[*v5]); /*0x793839*/
        if ( Network_Connect(v8) < v23 ) /*0x793848*/
        {
          *(v5 - 1) = v6; /*0x79384a*/
          *v5 = v7; /*0x79384d*/
        }
        v4 = Game_PlayerCount; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < Game_PlayerCount - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  v9 = 0; /*0x79389c*/
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  v10 = Game_PlayerCount; /*0x7938ac*/
  if ( Game_PlayerCount > 0 ) /*0x7938b6*/
  {
    v11 = 1; /*0x7938b8*/
    v12 = v26; /*0x7938bd*/
    v22 = 1; /*0x7938c1*/
    v24 = v26; /*0x7938c5*/
    do /*0x793923*/
    {
      if ( v11 < v10 ) /*0x7938cb*/
      {
        v13 = *v12; /*0x7938d1*/
        v14 = v12 + 1; /*0x7938d3*/
        v15 = this + 8 * v9; /*0x7938d6*/
        do /*0x793906*/
        {
          v16 = *v14; /*0x7938d9*/
          *(_DWORD *)v15 = v13; /*0x7938db*/
          *((_DWORD *)v15 + 1) = v16; /*0x7938e4*/
          Debug::Log(); /*0x7938e7*/
          v10 = Game_PlayerCount; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < Game_PlayerCount ); /*0x793906*/
        v12 = v24; /*0x793908*/
        v11 = v22; /*0x79390c*/
        v9 = v17; /*0x793910*/
      }
      ++v11; /*0x793912*/
      ++v12; /*0x793913*/
      v22 = v11; /*0x793916*/
      v24 = v12; /*0x79391a*/
    }
    while ( v11 - 1 < v10 ); /*0x793923*/
  }
  return v9; /*0x793927*/
}



// ==== 0x00793930  UI_Setup  this=-  sig=csp ====
_DWORD *__fastcall sub_793930(void *a1, void *a2, int a3)
{
  int v5; // edi
  char **v6; // esi
  char *v7; // eax
  char *v8; // eax
  _DWORD *result; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = -1; /*0x793938*/
  v12 = -1; /*0x79393c*/
  Debug::Log(); /*0x793952*/
  v5 = 0; /*0x79395a*/
  v6 = (char **)&g_NetworkPlayerName; /*0x79395c*/
  do /*0x79399d*/
  {
    v7 = ToWideStringChar(*v6); /*0x793964*/
    if ( !_strcmpi(v7, a1) ) /*0x79396a*/
      v13 = v5; /*0x793976*/
    v8 = ToWideStringChar(*v6); /*0x79397d*/
    result = (_DWORD *)_strcmpi(v8, a2); /*0x793983*/
    if ( !result ) /*0x79398d*/
      v12 = v5; /*0x79398f*/
    ++v6; /*0x793993*/
    ++v5; /*0x793996*/
  }
  while ( (int)v6 < (int)&g_PlayerNameListEnd ); /*0x79399d*/
  v10 = 0; /*0x7939a5*/
  if ( dword_A8E04C > 0 ) /*0x7939a9*/
  {
    result = &unk_A8DC50; /*0x7939ab*/
    while ( 1 ) /*0x7939b0*/
    {
      v11 = *(result - 1); /*0x7939b0*/
      if ( v11 == v13 && *result == v12 ) /*0x7939c3*/
      {
        dword_A8DE4C[2 * v10] = a3; /*0x7939e8*/
        return result; /*0x7939f3*/
      }
      if ( v11 == v12 && *result == v13 ) /*0x7939cd*/
        break; /*0x7939cd*/
      ++v10; /*0x7939cf*/
      result += 2; /*0x7939d0*/
      if ( v10 >= dword_A8E04C ) /*0x7939d5*/
        return result; /*0x7939d5*/
    }
    dword_A8DE50[2 * v10] = a3; /*0x7939fa*/
    return (_DWORD *)a3; /*0x7939f6*/
  }
  return result; /*0x7939d7*/
}



// ==== 0x00793A10  UI_Setup_793A10  this=-  sig=csp ====
int __fastcall sub_793A10(void *a1, __int16 a2)
{
  int v4; // edi
  char **v5; // esi
  char *v6; // eax
  int result; // eax

  Debug::Log(); /*0x793a26*/
  v4 = 0; /*0x793a2e*/
  v5 = (char **)&g_NetworkPlayerName; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar(*v5); /*0x793a38*/
    result = _strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    ++v5; /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&g_PlayerNameListEnd ) /*0x793a54*/
      return result; /*0x793a54*/
  }
  *((_WORD *)&dword_A8E050 + v4) = a2; /*0x793a5b*/
  return result; /*0x793a56*/
}



// ==== 0x00793A70  sub_793A70  this=-  sig=ida-proto ====
int __fastcall sub_793A70(void *a1, unsigned __int16 a2)
{
  int result; // eax
  char *v3; // esi
  signed int v4; // ebx
  int v7; // ecx
  int i; // [esp+10h] [ebp-104h]
  char v9[2]; // [esp+14h] [ebp-100h] BYREF
  char Buffer[254]; // [esp+16h] [ebp-FEh] BYREF

  result = g_WOL_State; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)g_WOL_State > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = (char *)g_WOL_ConnectionFlags + v7; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        qmemcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, "%d", a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v3, v9); /*0x793aff*/
      }
      result = g_WOL_State; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)g_WOL_State ) /*0x793b15*/
        break; /*0x793b15*/
    }
  }
  return result; /*0x793b17*/
}



// ==== 0x00793B30  sub_793B30  this=-  sig=ida-proto ====
int __fastcall sub_793B30(char a1, const char *a2)
{
  _BYTE v3[3]; // [esp+0h] [ebp-100h] BYREF
  char v4[253]; // [esp+3h] [ebp-FDh] BYREF

  qmemcpy(v3, "Z1", 2); /*0x793b39*/
  v3[2] = a1 + 48; /*0x793b45*/
  if ( a2 ) /*0x793b49*/
    strcpy(v4, a2); /*0x793b68*/
  else
    v4[0] = 0; /*0x793b76*/
  Debug::Log(); /*0x793b85*/
  return (*(int (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 60))(ppv, v3); /*0x793b9d*/
}



// ==== 0x00793BB0  ObjectClass::Network_Connect_793BB0  this=ObjectClass  sig=csp ====
int sub_793BB0()
{
  int result; // eax
  DWORD *v1; // ebp
  int *v2; // ebx
  signed int v3; // esi
  signed int v4; // eax
  int v5; // [esp+0h] [ebp-1D8h]
  DWORD v6; // [esp+8h] [ebp-1D0h]
  int v7[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v8; // [esp+1D4h] [ebp-4h]
  char v9; // [esp+1D6h] [ebp-2h]

  result = dword_A8E224; /*0x793bb6*/
  v5 = 0; /*0x793bbb*/
  if ( dword_A8E224 > 0 ) /*0x793bc5*/
  {
    v1 = (DWORD *)&unk_A8E1C4; /*0x793bcf*/
    v2 = dword_A8E1A4; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v3 = v1[2]; /*0x793bdc*/
      if ( *v1 != -1 ) /*0x793be5*/
      {
        v4 = Timer::GetTicks() - *v1; /*0x793bec*/
        if ( v4 >= v3 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v3 -= v4; /*0x793bf3*/
      }
      if ( !v3 ) /*0x793bf7*/
      {
LABEL_7:
        memset(v7, 0, sizeof(v7)); /*0x793c08*/
        v8 = 0; /*0x793c0a*/
        v9 = 0; /*0x793c0c*/
        v7[0] = 13; /*0x793c12*/
        strcpy((char *)&v7[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x793c39*/
        ToWideStringChar((char *)*(&g_NetworkPlayerName + *v2)); /*0x793c4b*/
        Debug::Log(); /*0x793c56*/
        Network::SendToPlayer((int)g_NetworkManager, (int)v7, 47, 0, (wchar_t *)*(&g_NetworkPlayerName + *v2)); /*0x793c76*/
        *v1 = Timer::GetTicks(); /*0x793c8f*/
        v1[1] = v6; /*0x793c99*/
        v1[2] = 1200; /*0x793c9c*/
      }
      result = v5 + 1; /*0x793c9f*/
      ++v2; /*0x793caa*/
      v1 += 3; /*0x793cad*/
      ++v5; /*0x793cb2*/
    }
    while ( v5 < dword_A8E224 ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}



// ==== 0x00793CD0  ObjectClass::method_793CD0  this=ObjectClass  sig=csp ====
int __thiscall sub_793CD0(void *this)
{
  DWORD Ticks; // eax
  DWORD *v2; // ecx
  DWORD v4; // [esp+4h] [ebp-8h]

  dword_A8E1A4[dword_A8E224] = (int)this; /*0x793cd8*/
  Ticks = Timer::GetTicks(); /*0x793ce3*/
  v2 = (DWORD *)(12 * dword_A8E224 + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++dword_A8E224; /*0x793d14*/
}



// ==== 0x00793D20  NegotiateNetworkConnection  this=-  sig=csp ====
char __fastcall Network_NegotiateConnection(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  char *v5; // edi
  char *v6; // ebx
  char *v7; // eax
  char *v9; // esi
  char *v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // si
  unsigned __int16 v14; // di
  char v15; // bl
  int *v16; // ebx
  int v17; // esi
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // esi
  char *v21; // ebx
  char *v22; // eax
  __int16 v23; // si
  char *v24; // ebx
  signed int v25; // eax
  char *v26; // esi
  signed int v27; // ebp
  int v28; // ecx
  int v29; // esi
  signed int v30; // eax
  __int16 v31; // di
  int v32; // esi
  int v33; // eax
  DWORD v34; // eax
  int v35; // ecx
  int v36; // esi
  signed int v37; // eax
  int v38; // esi
  char v39; // bl
  int Speed; // eax
  int v41; // ecx
  char *v42; // eax
  HWND v43; // eax
  HWND v44; // esi
  HWND DlgItem; // eax
  DWORD *v46; // ecx
  int v47; // eax
  int v48; // esi
  int v49; // esi
  int v50; // eax
  char *v51; // eax
  char v52; // [esp+14h] [ebp-73Ah]
  char v53; // [esp+15h] [ebp-739h]
  unsigned __int16 v54; // [esp+16h] [ebp-738h]
  int v55; // [esp+16h] [ebp-738h]
  int v56; // [esp+16h] [ebp-738h]
  int v57; // [esp+1Ah] [ebp-734h]
  int v58; // [esp+1Eh] [ebp-730h]
  DWORD v59; // [esp+22h] [ebp-72Ch]
  DWORD v60; // [esp+22h] [ebp-72Ch]
  int v61; // [esp+2Ah] [ebp-724h]
  int v62; // [esp+2Eh] [ebp-720h]
  DWORD v63; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v65; // [esp+3Eh] [ebp-710h] BYREF
  int v66; // [esp+42h] [ebp-70Ch]
  signed int v67; // [esp+46h] [ebp-708h]
  int v68; // [esp+4Ah] [ebp-704h]
  DWORD v69; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  int v71; // [esp+5Ah] [ebp-6F4h] BYREF
  DWORD v72; // [esp+5Eh] [ebp-6F0h]
  int v73; // [esp+66h] [ebp-6E8h]
  DWORD v74; // [esp+6Ah] [ebp-6E4h]
  DWORD v75; // [esp+6Eh] [ebp-6E0h]
  int v76; // [esp+72h] [ebp-6DCh]
  DWORD v77; // [esp+76h] [ebp-6D8h]
  int v78; // [esp+7Eh] [ebp-6D0h]
  signed int v79; // [esp+82h] [ebp-6CCh]
  int v80; // [esp+8Ah] [ebp-6C4h]
  _DWORD v81[6]; // [esp+8Eh] [ebp-6C0h] BYREF
  DWORD Ticks; // [esp+A6h] [ebp-6A8h]
  int v83; // [esp+AEh] [ebp-6A0h]
  _BYTE v84[12]; // [esp+B2h] [ebp-69Ch] BYREF
  char v85[256]; // [esp+BEh] [ebp-690h] BYREF
  _BYTE v86[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v87[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v88[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v90; // [esp+3BEh] [ebp-390h] BYREF
  char v91[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v92[11]; // [esp+586h] [ebp-1C8h] BYREF
  __int16 v93; // [esp+5B2h] [ebp-19Ch]
  char v94; // [esp+5B4h] [ebp-19Ah]

  v3 = a1; /*0x793d28*/
  v66 = a2; /*0x793d2c*/
  v68 = a1; /*0x793d34*/
  v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v52 = 1; /*0x793d5f*/
  v71 = 0; /*0x793d64*/
  Waypoint::InitInvalid(v84); /*0x793d68*/
  v62 = 0; /*0x793d74*/
  v53 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v58 = -1; /*0x793d93*/
  if ( Game_PlayerCount <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = (char *)*(&g_NetworkPlayerName + v3); /*0x793da3*/
    v6 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v4)); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v58 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < Game_PlayerCount ); /*0x793dd5*/
  if ( v58 == -1 ) /*0x793ddc*/
  {
LABEL_6:
    strcpy(v85, "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, v85); /*0x793e23*/
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  v9 = (char *)&unk_A8E060; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v3)); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v52 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)&byte_A8E180 ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = dword_A8DC2C[v3]; /*0x793e87*/
  if ( v52 && (!v11 || (v11 & 1) != 0) && (!(_WORD)dword_ABFEC8 || (dword_ABFEC8 & 1) != 0) ) /*0x793eac*/
  {
    Debug::Log(); /*0x793eb3*/
    v52 = 0; /*0x793ebb*/
  }
  v57 = 0; /*0x793ec2*/
  v67 = 0; /*0x793ec6*/
  v54 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
    v12 = v58; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(); /*0x793edf*/
    if ( v52 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      v15 = dword_ABFEC8; /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v55 = 0; /*0x793f50*/
      if ( dword_A8E224 <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = dword_A8E1A4; /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *v16; /*0x793f5f*/
        v18 = (_DWORD *)(*(&g_NetworkPlayerName + *v16) + 40); /*0x793f68*/
        v81[0] = *v18; /*0x793f6d*/
        v19 = *(&g_NetworkPlayerName + v3) + 40; /*0x793f7e*/
        v81[1] = v18[1]; /*0x793f81*/
        v81[2] = v18[2]; /*0x793f8c*/
        if ( NetworkID::Compare((int)v81, v19) ) /*0x793f9a*/
        {
          v14 = dword_A8E184[v17]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        ++v16; /*0x793fcb*/
        ++v55; /*0x793fd0*/
      }
      while ( v55 < dword_A8E224 ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( Game_PlayerCount > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v20)); /*0x79400a*/
            v22 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= Game_PlayerCount ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *((_WORD *)&Network_PlayerPorts + v20); /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress(v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v68)); /*0x794069*/
      v25 = g_WOL_State; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( (int)g_WOL_State > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v56 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < v25 ) /*0x794098*/
            v26 = (char *)g_WOL_ConnectionFlags + v28; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
            qmemcpy(v88, "Z4", sizeof(v88)); /*0x7940c3*/
            sprintf(Buffer, "%d", v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v26, v88); /*0x794106*/
          }
          v25 = g_WOL_State; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v56 + 108; /*0x794113*/
          v56 += 108; /*0x794118*/
        }
        while ( v27 < (int)g_WOL_State ); /*0x79411c*/
      }
      v3 = v68; /*0x794122*/
      v12 = v58; /*0x794126*/
      v54 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *((_WORD *)&Network_PlayerPorts + v58); /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      *((_WORD *)&dword_A8E050 + v3) = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v59 = Ticks; /*0x794141*/
    v29 = 360; /*0x79414c*/
    HIWORD(v30) = HIWORD(v57); /*0x794155*/
    v83 = 360; /*0x79415b*/
    v61 = 360; /*0x794162*/
    if ( v57 > 0 ) /*0x794166*/
    {
      v30 = Timer::GetTicks(); /*0x79416f*/
      v29 = 240; /*0x79417b*/
      v79 = v30; /*0x794180*/
      v80 = 240; /*0x794187*/
      v59 = v30; /*0x79418e*/
      v61 = 240; /*0x794196*/
    }
    v31 = v67; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v59 != -1 ) /*0x7941a3*/
      {
        v30 = Timer::GetTicks() - v59; /*0x7941ae*/
        if ( v30 >= v29 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v29 -= v30; /*0x7941b6*/
      }
      if ( !v29 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v52 == 1 ) /*0x7941c2*/
      {
        if ( *((_WORD *)&dword_A8E050 + v3) != v31 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( *((_WORD *)&dword_A8E050 + v3) ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(); /*0x7941ce*/
      v29 = v61; /*0x7941d3*/
    }
    LOWORD(v30) = *((_WORD *)&dword_A8E050 + v3); /*0x7941f3*/
    v67 = v30; /*0x7941fe*/
    if ( (_WORD)v30 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *((_WORD *)&Network_PlayerPorts + v12) = *((_WORD *)&dword_A8E050 + v3); /*0x79421e*/
      Network::SetPort((_WORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v12) + 40), *((_WORD *)&dword_A8E050 + v3)); /*0x79423b*/
      Network::SetPort((_WORD *)(*(&g_NetworkPlayerName + v3) + 40), *((_WORD *)&dword_A8E050 + v3)); /*0x794253*/
      memset(v92, 0, sizeof(v92)); /*0x794266*/
      v93 = 0; /*0x794268*/
      v94 = 0; /*0x79426a*/
      v92[0] = 41; /*0x794270*/
      strcpy((char *)&v92[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x79429d*/
      if ( (dword_ABFEC8 & 8) != 0 && (dword_A8DC2C[v3] & 8) == 0 ) /*0x7942b7*/
      {
        Debug::Log(); /*0x7942be*/
        v32 = 240; /*0x7942cf*/
        v69 = Timer::GetTicks(); /*0x7942d4*/
        for ( i = 240; ; v32 = i ) /*0x7942d8*/
        {
          if ( v69 != -1 ) /*0x7942e1*/
          {
            v33 = Timer::GetTicks() - v69; /*0x7942ec*/
            if ( v33 >= v32 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v32 -= v33; /*0x7942f4*/
          }
          if ( !v32 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(); /*0x7942fa*/
        }
      }
      ToWideStringChar((char *)*(&g_NetworkPlayerName + v3)); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v34 = Timer::GetTicks(); /*0x794331*/
      v81[5] = 360; /*0x794342*/
      v81[3] = v34; /*0x794351*/
      v60 = v34; /*0x794358*/
      v77 = Timer::GetTicks(); /*0x794365*/
      v63 = v77; /*0x794369*/
      v35 = 0; /*0x794371*/
      v78 = 0; /*0x794373*/
      for ( j = 0; ; v35 = j ) /*0x79437b*/
      {
        v36 = v35; /*0x794383*/
        if ( v63 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v37 = Timer::GetTicks() - v63; /*0x794393*/
        if ( v37 < v36 ) /*0x794399*/
        {
          v38 = v36 - v37; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer((int)&g_NetworkManager, (int)v92, 47, 0, (wchar_t *)*(&g_NetworkPlayerName + v3)); /*0x7943d3*/
        v72 = Timer::GetTicks(); /*0x7943ea*/
        v73 = 30; /*0x7943ee*/
        v63 = v72; /*0x7943f2*/
        j = 30; /*0x7943fa*/
LABEL_70:
        Game::ProcessIdle(); /*0x7943fe*/
        v39 = v53; /*0x794403*/
        if ( !v53 ) /*0x794409*/
        {
          Speed = Connection::GetSpeed((int)&g_NetworkManager); /*0x794414*/
          v41 = v62; /*0x794419*/
          if ( v62 >= Speed ) /*0x79441f*/
          {
            v41 = 0; /*0x794421*/
            v62 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk(v41, &v90, &v71, v84, (char *)&v65 + 2, 0) || HIWORD(v65) != 0xAA04 ) /*0x79445d*/
            goto LABEL_89; /*0x79445d*/
          if ( v90 != 13 ) /*0x79446d*/
          {
            if ( v90 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( NetworkID::Compare(*(_DWORD *)(Game_PlayerInfoArray + 4 * v58) + 40, (int)v84) ) /*0x7944a1*/
            {
              v42 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v3)); /*0x7944bd*/
              if ( !_strcmpi(v42, v91) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                qmemcpy(v86, "Z1;", sizeof(v86)); /*0x7944f1*/
                if ( v91 ) /*0x794509*/
                  strcpy(v87, v91); /*0x79452d*/
                else
                  v87[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 60))(ppv, v86); /*0x794565*/
                if ( v58 >= 0 && v58 < Game_PlayerCount ) /*0x794576*/
                {
                  v43 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79457d*/
                  v44 = v43; /*0x794582*/
                  if ( v43 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v43, dword_84A1F0[v58]); /*0x794591*/
                    *((_BYTE *)&dword_B75F54 + v58) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v44, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                dword_A8E1A4[dword_A8E224] = v3; /*0x7945c4*/
                v74 = Timer::GetTicks(); /*0x7945d6*/
                v53 = 1; /*0x7945df*/
                v39 = 1; /*0x7945e7*/
                v76 = 1200; /*0x7945eb*/
                v46 = (DWORD *)(12 * dword_A8E224 + 11067844); /*0x7945ef*/
                *v46 = v74; /*0x7945f6*/
                v46[1] = v75; /*0x7945fc*/
                v46[2] = 1200; /*0x7945ff*/
                ++dword_A8E224; /*0x794609*/
                dword_A8E184[v3] = v54; /*0x794619*/
              }
            }
          }
          Network::receiveData(v62); /*0x79462a*/
          if ( !v39 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( dword_A8DE4C[v66] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        v47 = dword_A8DE4C[v66]; /*0x794641*/
        if ( v47 >= 1 && v47 < 11 ) /*0x794654*/
        {
          v48 = v47 - 1; /*0x794656*/
          if ( v47 - 1 > v57 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v57 = v48 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v49 = 360; /*0x794669*/
        ++v62; /*0x794671*/
        if ( v60 != -1 ) /*0x794675*/
        {
          v50 = Timer::GetTicks() - v60; /*0x794680*/
          if ( v50 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v49 = 360 - v50; /*0x794688*/
        }
        if ( !v49 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v38 = v35; /*0x79439f*/
LABEL_68:
      if ( v38 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v39 = v53; /*0x7946bb*/
LABEL_100:
    if ( v39 && dword_A8DE4C[v66] == 11 || v57 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v57; /*0x7946f2*/
    v51 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v3)); /*0x7946f6*/
    qmemcpy(v85, "Z1", 2); /*0x7946fd*/
    v85[2] = v57 + 49; /*0x794714*/
    if ( v51 ) /*0x79471b*/
      strcpy(&v85[3], v51); /*0x79473a*/
    else
      v85[3] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, v85); /*0x794772*/
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v39; /*0x793e37*/
}



// ==== 0x007947B0  WaitNetworkLobbyPlayers  this=-  sig=ida-proto ====
char NetworkLobby_WaitForPlayers()
{
  HWND v1; // esi
  HWND DlgItem; // eax
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  char *v6; // ebx
  char *v7; // ebx
  char *v8; // eax
  int v9; // ebp
  char *v10; // ebx
  char *v11; // eax
  int *v12; // ebx
  int v13; // edx
  _DWORD *v14; // esi
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  signed int v25; // eax
  bool v26; // cc
  int *i; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+1Ch] [ebp-34h]
  DWORD Ticks; // [esp+20h] [ebp-30h]
  int v31; // [esp+28h] [ebp-28h]

  Timer::GetTicks(); /*0x7947bb*/
  dword_A8E224 = 0; /*0x7947d2*/
  memset(dword_A8E184, 0, sizeof(dword_A8E184)); /*0x7947d8*/
  v29 = -1; /*0x7947e5*/
  dword_B77DCC = 0; /*0x7947ed*/
  if ( !dword_A8E04C ) /*0x7947f3*/
    return 0; /*0x7947fe*/
  SessionClass::SetupNetwork((int)g_GameMode_Current); /*0x794804*/
  if ( Game_PlayerCount > 0 ) /*0x79480f*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79481b*/
    if ( v1 ) /*0x79481f*/
    {
      DlgItem = GetDlgItem(v1, dword_84A1F0[0]); /*0x794828*/
      LOBYTE(dword_B75F54) = 1; /*0x79482e*/
      SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x79483e*/
      PostMessageA(v1, 0xFu, 0, 0); /*0x794849*/
    }
  }
  Debug::Log(); /*0x79485b*/
  v28 = 0; /*0x79486a*/
  if ( dword_A8E04C <= 0 ) /*0x79486e*/
  {
LABEL_44:
    Debug::Log(); /*0x794b38*/
    return 1; /*0x794b4e*/
  }
  v3 = dword_A8DE4C; /*0x794874*/
  for ( i = dword_A8DE4C; ; v3 = i ) /*0x794879*/
  {
    v4 = *(v3 - 128); /*0x794883*/
    v5 = *(v3 - 127); /*0x794889*/
    v6 = (char *)*(&g_NetworkPlayerName + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&g_NetworkPlayerName + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v4)); /*0x7948d8*/
    v8 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7948da*/
    if ( _strcmpi(v7, v8) ) /*0x7948e1*/
    {
      v9 = -1; /*0x794907*/
    }
    else
    {
      v9 = v5; /*0x7948f5*/
      *i = 11; /*0x7948fb*/
      v29 = 2 * v28 + 1; /*0x794901*/
    }
    v10 = ToWideStringChar((char *)*(&g_NetworkPlayerName + v5)); /*0x79491c*/
    v11 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79491e*/
    if ( _strcmpi(v10, v11) ) /*0x794925*/
    {
      v12 = i; /*0x79494f*/
    }
    else
    {
      v12 = i; /*0x794935*/
      v9 = v4; /*0x79493d*/
      i[1] = 11; /*0x794942*/
      v29 = 2 * v28; /*0x794949*/
    }
    if ( v9 != -1 ) /*0x794956*/
      break; /*0x794956*/
    Debug::Log(); /*0x7949cb*/
    Ticks = Timer::GetTicks(); /*0x7949e0*/
    v31 = 960; /*0x7949f5*/
    v19 = 0; /*0x7949f9*/
    while ( 1 ) /*0x7949fd*/
    {
      Sleep(5u); /*0x7949fd*/
      Game::ProcessIdle(); /*0x794a03*/
      Network_Connect_793BB0(); /*0x794a08*/
      v20 = *v12; /*0x794a0d*/
      v21 = v12[1]; /*0x794a0f*/
      if ( (v20 == 11 || !v20) && (v21 == 11 || !v21) ) /*0x794a26*/
        break; /*0x794a26*/
      if ( v20 < 1 || v20 >= 11 || (v22 = v20 - 1, v20 - 1 <= v19) ) /*0x794a3b*/
      {
        v23 = v31; /*0x794a77*/
      }
      else
      {
        Debug::Log(); /*0x794a43*/
        v19 = v22; /*0x794a4f*/
        Ticks = Timer::GetTicks(); /*0x794a63*/
        v23 = 840; /*0x794a67*/
        v31 = 840; /*0x794a71*/
      }
      if ( v21 >= 1 && v21 < 11 && v21 - 1 > v19 ) /*0x794a8a*/
      {
        Debug::Log(); /*0x794a92*/
        v19 = v21 - 1; /*0x794a9e*/
        Ticks = Timer::GetTicks(); /*0x794aa9*/
        v23 = 840; /*0x794aba*/
        v31 = 840; /*0x794ac0*/
      }
      v24 = v23; /*0x794ac8*/
      if ( Ticks != -1 ) /*0x794acd*/
      {
        v25 = Timer::GetTicks() - Ticks; /*0x794ad8*/
        if ( v25 >= v24 ) /*0x794ade*/
          goto LABEL_41; /*0x794ade*/
        v23 = v24 - v25; /*0x794ae2*/
      }
      if ( !v23 ) /*0x794ae6*/
        goto LABEL_41; /*0x794ae6*/
      v12 = i; /*0x794ae8*/
    }
    Debug::Log(); /*0x794af6*/
LABEL_41:
    if ( *i != 11 || i[1] != 11 ) /*0x794b0b*/
      goto LABEL_45; /*0x794b0b*/
    Debug::Log(); /*0x794b12*/
    v26 = ++v28 < dword_A8E04C; /*0x794b28*/
    i += 2; /*0x794b2e*/
    if ( !v26 ) /*0x794b32*/
      goto LABEL_44; /*0x794b32*/
  }
  v13 = dword_A8DC2C[v4]; /*0x794958*/
  v14 = (_DWORD *)(4 * v4 + 11066412); /*0x79495f*/
  v15 = (_DWORD *)(4 * v5 + 11066412); /*0x79496c*/
  v16 = NetworkLobby::GetPlayerCount(v13); /*0x794978*/
  if ( v16 <= NetworkLobby::GetPlayerCount(*v15) ) /*0x794989*/
    v17 = NetworkLobby::GetPlayerCount(*v15); /*0x794998*/
  else
    v17 = NetworkLobby::GetPlayerCount(*v14); /*0x79498e*/
  v18 = v17; /*0x79499d*/
  Debug::Log(); /*0x7949a5*/
  if ( NegotiateNetworkConnection(v9, v29, v18) ) /*0x7949b4*/
    goto LABEL_41; /*0x7949bb*/
LABEL_45:
  Debug::Log(); /*0x794b7d*/
  return 0; /*0x7947f5*/
}



// ==== 0x00794BA0  ObjectClass::StartGameWOL  this=ObjectClass  sig=csp ====
void WOL_StartGame()
{
  DLGTEMPLATE *Indirect; // eax
  int v1; // esi
  int v2; // ecx
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *String; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  int *v13; // eax
  int v14; // eax
  char *v15; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  char *v20; // edx
  char *v21; // eax
  int v22; // esi
  int *v23; // eax
  int v24; // eax
  char *v25; // ebp
  int v26; // ebx
  char *v27; // edx
  int v28; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  char *v37; // ebp
  signed int v38; // edx
  int *v39; // eax
  signed int v40; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  char *v43; // [esp+14h] [ebp-Ch]
  char *v44; // [esp+14h] [ebp-Ch]
  int v45; // [esp+18h] [ebp-8h]
  int v46; // [esp+1Ch] [ebp-4h]
  int *v47; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_State ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 20))(g_NetworkInterface); /*0x794c32*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 24))(g_NetworkInterface); /*0x794c3d*/
    memset(&dword_B73BB4, 0xFFu, 0x20u); /*0x794c4e*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 304, g_hWnd, sub_793280, 0); /*0x794c66*/
    if ( Indirect ) /*0x794c6d*/
      SetupDialog((HWND)Indirect, 304); /*0x794c76*/
    v1 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v1; /*0x794c85*/
    }
    while ( v1 ); /*0x794c86*/
    StartGameWOL_Start(300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
      dword_B77DCC = 0; /*0x794cab*/
      if ( (int)g_WOL_State <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90(&g_IsMultiplayerSession, v4); /*0x794cbe*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= (int)g_WOL_State ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
      if ( !&g_IsMultiplayerSession || (v5 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v5)) ) /*0x794cf1*/
LABEL_18:
        Debug::Log(); /*0x794cfd*/
    }
    LOBYTE(v2) = v3; /*0x794d0a*/
    v6 = NegotiateScenarioWOL(v2); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        String = GetStringCSF(g_Str_TXT_SCENARIOS_DO_NOT_MATCH, 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      g_NetworkLobby_Init = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x794e00*/
      if ( g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 || g_GameOptionsFlags == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&dword_B76230, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = Game_PlayerCount; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( Game_PlayerCount > 0 ) /*0x794e7c*/
      {
        v12 = hostshort; /*0x794e7e*/
        v13 = &Network_PlayerPorts; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*(_WORD *)v13 ) /*0x794e89*/
          {
            *(_WORD *)v13 = v12; /*0x794e8e*/
            v10 = Game_PlayerCount; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          v13 = (int *)((char *)v13 + 2); /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( (int)g_WOL_State > 0 ) /*0x794ea9*/
      {
        v15 = (char *)g_WOL_ConnectionFlags; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < (int)g_WOL_State ) /*0x794eb7*/
            qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu); /*0x794ec5*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          v15 += 108; /*0x794ed1*/
          if ( v14 >= (int)g_WOL_State ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_IsMultiplayerSession ) /*0x794ee1*/
        {
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v16)); /*0x794ef6*/
              if ( !_strcmpi(v17, byte_B777D4) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= Game_PlayerCount ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            LOWORD(dword_A8DBBC) = *((_WORD *)&Network_PlayerPorts + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( g_GameMode_Current[0] != 4 || g_GameOptionsFlags != 3 ) /*0x794f67*/
        g_CommandExecState = 0; /*0x794f69*/
      g_ScenarioLoadState = 5; /*0x794f74*/
      switch ( g_Rules_EngineerCount ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          g_ScenarioState = (wchar_t *)40; /*0x794f98*/
          g_GameSessionFlags = 60; /*0x794fa2*/
          g_ScenarioLoadState = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          g_ScenarioState = (wchar_t *)40; /*0x794fb4*/
          g_GameSessionFlags = 45; /*0x794fbe*/
          g_ScenarioLoadState = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          g_ScenarioState = (wchar_t *)30; /*0x794fd5*/
          g_GameSessionFlags = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x794fe1*/
          g_GameSessionFlags = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x794fef*/
          g_GameSessionFlags = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          g_ScenarioState = (wchar_t *)20; /*0x795001*/
          g_GameSessionFlags = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          g_ScenarioState = (wchar_t *)10; /*0x795013*/
          g_GameSessionFlags = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( byte_A8E2C8 ) /*0x795026*/
        g_ScenarioState += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      g_GameSessionPool = 0; /*0x795038*/
      if ( (int)g_WOL_State <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = (char *)g_WOL_ConnectionFlags; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < (int)g_WOL_State ) /*0x79504c*/
          qmemcpy(&g_IsMultiplayerSession, v20, 0x6Cu); /*0x79505a*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 += 108; /*0x795066*/
        if ( v19 >= (int)g_WOL_State ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( !&g_IsMultiplayerSession /*0x795088*/
        || (v21 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v21)) )
      {
LABEL_77:
        g_GameSessionFlags = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      v23 = dword_B7790C; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( *v23 > v22 ) /*0x7950a9*/
          v22 = *v23; /*0x7950ab*/
        ++v23; /*0x7950ad*/
      }
      while ( (int)v23 < (int)&dword_B7792C ); /*0x7950b5*/
      if ( byte_A8E2C8 ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      g_NetworkHostState = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        g_GameSessionPool = 10 * ((unsigned int)g_ScenarioState / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)g_ScenarioState / 0xA) <= 0xA ) /*0x7953e3*/
          g_GameSessionPool = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            g_NetworkHostState = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          g_NetworkHostState = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &g_NetworkManager,
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( (int)g_WOL_State > 0 ) /*0x795169*/
        {
          v25 = (char *)g_WOL_ConnectionFlags; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < (int)g_WOL_State ) /*0x795177*/
              qmemcpy(&g_IsMultiplayerSession, v25, 0x6Cu); /*0x795185*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 += 108; /*0x795195*/
            if ( v24 >= (int)g_WOL_State ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_IsMultiplayerSession ) /*0x795346*/
          {
            v35 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x795351*/
            if ( !_strcmpi(byte_B777D4, v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)g_NetworkHostState ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)g_ScenarioState; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)g_ScenarioState + ((unsigned int)g_ScenarioState >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)g_ScenarioState; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = g_GameSessionPool; /*0x79539c*/
                  break; /*0x79539c*/
              }
              g_GameSessionPool = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      dword_A8B568 = (int)g_ScenarioState; /*0x7951f0*/
      memset(&unk_A8B574, 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&hostshort = 1234; /*0x795200*/
      *(_DWORD *)g_GameModeOptions = g_Rules_EngineerCount; /*0x79520a*/
      *(_DWORD *)&dword_841F34 = 1235; /*0x795216*/
      *(_DWORD *)&dword_841F38 = 1236; /*0x795220*/
      *(_DWORD *)&dword_841F3C = 1237; /*0x79522a*/
      g_CurrentFrame = 0; /*0x795234*/
      if ( byte_A8E2C8 ) /*0x79523e*/
        Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( g_GameMode_Current[0] == 4 ) /*0x795266*/
      {
        if ( (dword_B76B30 & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          v28 = 0; /*0x79528b*/
          v45 = 0; /*0x79528f*/
          v46 = 0; /*0x795293*/
          if ( (int)g_WOL_State > 0 ) /*0x795297*/
          {
            v43 = (char *)g_WOL_ConnectionFlags; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < (int)g_WOL_State ) /*0x7952b0*/
                v27 = v43; /*0x7952b2*/
              if ( !v28 || (v29 = *((_DWORD *)v27 + 5), v28 == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, v27 + 36); /*0x79541a*/
                strcat(&byte_B77A04, Delimiter); /*0x795445*/
                v28 = *((_DWORD *)v27 + 5); /*0x79544e*/
              }
              else if ( !v45 || v45 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, v27 + 36); /*0x7952fb*/
                v30 = strlen(Delimiter) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, Delimiter, 4 * (v30 >> 2)); /*0x795326*/
                v33 = &Delimiter[4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v46; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v45 = *((_DWORD *)v27 + 5); /*0x795336*/
              }
              v46 = ++v26; /*0x795460*/
              v43 += 108; /*0x795464*/
            }
            while ( v26 < (int)g_WOL_State ); /*0x795468*/
          }
        }
        if ( g_GameOptionsFlags == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( (int)g_WOL_State > 0 ) /*0x795486*/
          {
            v39 = dword_B76E58; /*0x795492*/
            v44 = (char *)g_WOL_ConnectionFlags; /*0x795497*/
            v40 = g_WOL_State; /*0x79549b*/
            v47 = dword_B76E58; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)dword_B76E58 && v38 < v40 ) /*0x7954ae*/
                v37 = v44; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, v37 + 36); /*0x79551d*/
                v41 = strlen(Delimiter) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, v37 + 36); /*0x7954dc*/
                v41 = strlen(Delimiter) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], Delimiter, v41); /*0x79554a*/
              v40 = g_WOL_State; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v47 + 37; /*0x795565*/
              v44 += 108; /*0x79556c*/
              v47 += 37; /*0x795570*/
            }
            while ( v38 < (int)g_WOL_State ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      g_NetworkLobby_Init = 1; /*0x7955da*/
      Debug::Log(); /*0x7955e1*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7955f1*/
      Scenario::PreGameInit(); /*0x7955f4*/
      byte_B77E27 = 0; /*0x7955f9*/
      byte_B77E26 = 0; /*0x795600*/
      Debug::Log(); /*0x79560c*/
    }
  }
  else
  {
    g_NetworkLobbyState = 0; /*0x794bcb*/
    if ( g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2 ) /*0x794bde*/
    {
      g_WOL_GameListState = 0; /*0x794be1*/
      g_WOL_IdleHandler = 11; /*0x794be7*/
      g_WOL_GameProcessState = -1; /*0x794bf1*/
      g_WOL_GameListPool = time(0); /*0x794c03*/
    }
    byte_B77DEC = 0; /*0x794c08*/
    Network::Init(); /*0x794c0f*/
    byte_B77E27 = 0; /*0x794c14*/
    byte_B77E26 = 0; /*0x794c1b*/
  }
}



// ==== 0x00795650  ObjectClass::QueryNATPortWOL  this=IPXInterfaceClass  sig=csp ====
char __thiscall WOL_QueryNATPort(unsigned __int16 *this)
{
  char *v1; // edx
  char *v2; // eax
  struct hostent *v3; // eax
  HMODULE LibraryA; // edi
  HMODULE v5; // ebx
  FARPROC ProcAddress; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // ebp
  DWORD TickCount; // eax
  void *v10; // eax
  bool v11; // zf
  int v12; // esi
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  char v21; // bl
  int v22; // esi
  bool v23; // zf
  int v24; // eax
  void **v26; // [esp+34h] [ebp-100h] BYREF
  void *Block; // [esp+38h] [ebp-FCh]
  int v28; // [esp+3Ch] [ebp-F8h]
  char v29; // [esp+41h] [ebp-F3h]
  int v30; // [esp+44h] [ebp-F0h]
  int v31; // [esp+48h] [ebp-ECh]
  HMODULE hLibModule; // [esp+4Ch] [ebp-E8h]
  void *v33; // [esp+50h] [ebp-E4h]
  int v34; // [esp+54h] [ebp-E0h] BYREF
  HMODULE v35; // [esp+58h] [ebp-DCh]
  unsigned __int16 *v36; // [esp+5Ch] [ebp-D8h]
  int v37; // [esp+60h] [ebp-D4h]
  void *v38; // [esp+64h] [ebp-D0h]
  int v39; // [esp+6Ch] [ebp-C8h] BYREF
  _DWORD v40[10]; // [esp+74h] [ebp-C0h] BYREF
  _BYTE v41[4]; // [esp+9Ch] [ebp-98h] BYREF
  int v42; // [esp+A0h] [ebp-94h] BYREF
  _BYTE v43[4]; // [esp+A4h] [ebp-90h] BYREF
  _BYTE v44[4]; // [esp+A8h] [ebp-8Ch] BYREF
  _BYTE v45[8]; // [esp+ACh] [ebp-88h] BYREF
  char Destination[128]; // [esp+B4h] [ebp-80h] BYREF

  v36 = this; /*0x79565c*/
  QueryNATPortWOL_Helper(0, 0); /*0x795666*/
  v26 = &DynamicVectorClass<tConnInfoStruct *>::`vftable'; /*0x795670*/
  v31 = 10; /*0x79567b*/
  v30 = 0; /*0x795683*/
  v34 = 0; /*0x795687*/
  if ( dword_B76468 < 1 || dword_B76468 >= g_WOL_UserList ) /*0x795697*/
  {
    v10 = Block; /*0x795c8c*/
    v26 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c90*/
    if ( !Block || !v29 ) /*0x795ca2*/
      return 0; /*0x795ca2*/
LABEL_65:
    __3_YAXPAX_Z(v10); /*0x795ca4*/
    return 0; /*0x795cb0*/
  }
  Debug::Log(); /*0x7956a2*/
  v1 = 0; /*0x7956af*/
  if ( dword_B76468 >= 0 && dword_B76468 < g_WOL_UserList ) /*0x7956bb*/
    v1 = (char *)dword_B778E0 + 248 * dword_B76468; /*0x7956ca*/
  memset(Destination, 0, sizeof(Destination)); /*0x7956de*/
  strncpy(Destination, v1 + 104, 0x80u); /*0x7956ee*/
  v2 = strchr(Destination, 59); /*0x7956fd*/
  if ( !v2 ) /*0x795707*/
    goto LABEL_58; /*0x795707*/
  *v2 = 0; /*0x795711*/
  sscanf(v2 + 1, "%d", &v34); /*0x79571c*/
  Debug::Log(); /*0x79572e*/
  Debug::Log(); /*0x79573d*/
  Debug::Log(); /*0x795747*/
  v3 = gethostbyname(Destination); /*0x795757*/
  if ( !v3 ) /*0x79575e*/
  {
    WSAGetLastError(); /*0x795760*/
    Debug::Log(); /*0x79576b*/
LABEL_59:
    v10 = Block; /*0x795c72*/
    v26 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c76*/
    v11 = Block == 0; /*0x795c7e*/
    goto LABEL_60; /*0x795c7e*/
  }
  v38 = (void *)ntohl(**(_DWORD **)v3->h_addr_list); /*0x795785*/
  Debug::Log(); /*0x7957b4*/
  Debug::Log(); /*0x7957be*/
  LibraryA = LoadLibraryA(aInetmib1Dll); /*0x7957d3*/
  v35 = LibraryA; /*0x7957d7*/
  if ( !LibraryA ) /*0x7957db*/
  {
LABEL_58:
    Debug::Log(); /*0x795c6a*/
    goto LABEL_59; /*0x795c6a*/
  }
  Debug::Log(); /*0x7957ec*/
  v5 = LoadLibraryA(aSnmpapiDll); /*0x7957fb*/
  hLibModule = v5; /*0x7957ff*/
  if ( !v5 ) /*0x795803*/
  {
    Debug::Log(); /*0x79580a*/
    FreeLibrary(LibraryA); /*0x795813*/
    goto LABEL_59; /*0x795819*/
  }
  dword_B7792C = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, aSnmpextensioni); /*0x79582c*/
  dword_B76678 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, aSnmpextensionq); /*0x795839*/
  dword_B778F0 = (int (__stdcall *)(_DWORD))GetProcAddress(v5, aSnmputilmemall); /*0x795846*/
  ProcAddress = GetProcAddress(v5, aSnmputilmemfre); /*0x795851*/
  dword_B77AC0 = (int (__stdcall *)(_DWORD))ProcAddress; /*0x795859*/
  if ( !dword_B7792C || !dword_B76678 || !dword_B778F0 || !ProcAddress ) /*0x795882*/
  {
    Debug::Log(); /*0x795c37*/
    FreeLibrary(v5); /*0x795c46*/
    FreeLibrary(LibraryA); /*0x795c49*/
    v26 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c4b*/
    v10 = Block; /*0x795c53*/
    if ( !Block || !v29 ) /*0x795c61*/
      return 0; /*0x795c61*/
    goto LABEL_65; /*0x795c61*/
  }
  v7 = (_DWORD *)dword_B778F0(8); /*0x79588c*/
  v8 = (_DWORD *)dword_B778F0(24); /*0x795896*/
  Debug::Log(); /*0x79589d*/
  TickCount = GetTickCount(); /*0x7958b5*/
  if ( !dword_B7792C(TickCount, v44, v45) ) /*0x7958bc*/
  {
    Debug::Log(); /*0x7958cb*/
    dword_B77AC0(v7); /*0x7958d4*/
    dword_B77AC0(v8); /*0x7958db*/
    FreeLibrary(hLibModule); /*0x7958ec*/
    FreeLibrary(LibraryA); /*0x7958ef*/
LABEL_18:
    v26 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7958f1*/
    v10 = Block; /*0x7958f9*/
    v11 = Block == 0; /*0x7958fd*/
LABEL_60:
    if ( v11 || !v29 ) /*0x795c88*/
      return 0; /*0x795c88*/
    goto LABEL_65; /*0x795c88*/
  }
  v40[0] = 1; /*0x795910*/
  v40[1] = 3; /*0x795914*/
  v40[2] = 6; /*0x79591c*/
  v40[3] = 1; /*0x795920*/
  v40[4] = 2; /*0x795924*/
  v40[5] = 1; /*0x79592c*/
  v40[6] = 6; /*0x795930*/
  v40[7] = 13; /*0x795934*/
  v40[8] = 1; /*0x79593c*/
  v40[9] = 1; /*0x795940*/
  v33 = (void *)dword_B778F0(40); /*0x795955*/
  qmemcpy(v33, v40, 0x28u); /*0x795962*/
  *v8 = 10; /*0x795964*/
  v8[1] = v40; /*0x79596b*/
  *v7 = v8; /*0x79596e*/
  v7[1] = 1; /*0x795970*/
  v37 = 1; /*0x795973*/
  v12 = 0; /*0x795977*/
  while ( 1 ) /*0x795979*/
  {
    if ( !dword_B76678(161, v7, v43, v41) ) /*0x795994*/
    {
      Debug::Log(); /*0x795a7c*/
      dword_B77AC0(v7); /*0x795a85*/
      dword_B77AC0(v8); /*0x795a8c*/
      FreeLibrary(hLibModule); /*0x795a9d*/
      FreeLibrary(v35); /*0x795aa4*/
      goto LABEL_18; /*0x795aa4*/
    }
    if ( *v8 < 0xAu ) /*0x79599e*/
      break; /*0x79599e*/
    v13 = v8[1]; /*0x7959a4*/
    v14 = *(_DWORD *)(v13 + 36); /*0x7959ab*/
    if ( v37 != v14 ) /*0x7959b0*/
    {
      v12 = 0; /*0x7959b2*/
      v37 = *(_DWORD *)(v13 + 36); /*0x7959b4*/
    }
    switch ( v14 ) /*0x7959be*/
    {
      case 1: /*0x7959be*/
        v15 = __2_YAPAXI_Z(0x14u); /*0x7959cc*/
        *v15 = v8[3]; /*0x7959d4*/
        if ( v30 < v28 /*0x795a01*/
          || (v29 || !v28)
          && v31 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v26[2])(&v26, v31 + v28, 0) )
        {
          v16 = v30++; /*0x795a10*/
          *((_DWORD *)Block + v16) = v15; /*0x795a1b*/
        }
        break; /*0x795a1e*/
      case 2: /*0x7959be*/
        v17 = *((_DWORD *)Block + v12++); /*0x795a2a*/
        *(_DWORD *)(v17 + 4) = *(_DWORD *)v8[3]; /*0x795a30*/
        break; /*0x795a33*/
      case 3: /*0x7959be*/
        v18 = *((_DWORD *)Block + v12++); /*0x795a40*/
        *(_WORD *)(v18 + 8) = *((_WORD *)v8 + 6); /*0x795a44*/
        break; /*0x795a48*/
      case 4: /*0x7959be*/
        v19 = *((_DWORD *)Block + v12++); /*0x795a54*/
        *(_DWORD *)(v19 + 12) = *(_DWORD *)v8[3]; /*0x795a5a*/
        break; /*0x795a5d*/
      case 5: /*0x7959be*/
        v20 = *((_DWORD *)Block + v12++); /*0x795a6a*/
        *(_WORD *)(v20 + 16) = *((_WORD *)v8 + 6); /*0x795a6e*/
        break; /*0x795a72*/
      default:
        continue;
    }
  }
  dword_B77AC0(v7); /*0x795aaa*/
  dword_B77AC0(v8); /*0x795ab1*/
  dword_B77AC0(v33); /*0x795abc*/
  Debug::Log(); /*0x795acc*/
  v21 = 0; /*0x795ad8*/
  if ( v30 ) /*0x795adc*/
  {
    do /*0x795bcd*/
    {
      v22 = *(_DWORD *)Block; /*0x795ae6*/
      v33 = (void *)ntohl(*(_DWORD *)(*(_DWORD *)Block + 12)); /*0x795af3*/
      if ( !v21 && v33 == v38 ) /*0x795b0b*/
      {
        Debug::Log(); /*0x795b16*/
        if ( (!v34 || v34 == *(unsigned __int16 *)(v22 + 16)) && (Debug::Log(), *(_DWORD *)v22 == 5) ) /*0x795b53*/
        {
          Debug::Log(); /*0x795b5a*/
          v39 = *(_DWORD *)(v22 + 4); /*0x795b65*/
          NetworkID::Assign(v36, &v42, (int)&v39, *(_WORD *)(v22 + 8)); /*0x795b7f*/
          v21 = 1; /*0x795b84*/
        }
        else
        {
          Debug::Log(); /*0x795b8d*/
        }
      }
      __3_YAXPAX_Z(*(void **)Block); /*0x795b9c*/
      v23 = v30 == 0; /*0x795ba8*/
      if ( v30 > 0 ) /*0x795baa*/
      {
        v24 = 0; /*0x795bad*/
        v23 = v30-- == 1; /*0x795baf*/
        if ( v30 > 0 ) /*0x795bb5*/
        {
          do /*0x795bc9*/
          {
            ++v24; /*0x795bbb*/
            *((_DWORD *)Block + v24 - 1) = *((_DWORD *)Block + v24); /*0x795bbf*/
          }
          while ( v24 < v30 ); /*0x795bc9*/
          v23 = v30 == 0; /*0x795bcb*/
        }
      }
    }
    while ( !v23 ); /*0x795bcd*/
    if ( v21 ) /*0x795bd5*/
    {
      Network::FormatAddress(v36, 0); /*0x795bdd*/
      Debug::Log(); /*0x795be8*/
    }
  }
  FreeLibrary(hLibModule); /*0x795bfb*/
  FreeLibrary(v35); /*0x795c02*/
  v26 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c04*/
  if ( Block && v29 ) /*0x795c1a*/
    __3_YAXPAX_Z(Block); /*0x795c1d*/
  return v21; /*0x795c25*/
}



// ==== 0x00795CD0  NegotiateScenarioWOL  this=-  sig=ida-proto ====
int __fastcall WOL_NegotiateScenario(char a1)
{
  int v1; // ecx
  char *Flagged; // esi
  char *v3; // eax
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  int v9; // eax
  bool v10; // cc
  int v11; // esi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ecx
  int i; // edi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  char *v19; // edx
  char *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  char *v24; // edx
  char *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  char *v29; // edx
  int v30; // esi
  int v31; // eax
  int v32; // esi
  char *v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // eax
  int LobbyStatus; // eax
  int result; // eax
  int v39; // [esp-8h] [ebp-220h]
  bool v40; // [esp+2h] [ebp-216h]
  char v41; // [esp+3h] [ebp-215h]
  int v42; // [esp+4h] [ebp-214h]
  DWORD v43; // [esp+8h] [ebp-210h]
  DWORD Ticks; // [esp+8h] [ebp-210h]
  DWORD v45; // [esp+8h] [ebp-210h]
  int v46; // [esp+10h] [ebp-208h]
  int v47; // [esp+10h] [ebp-208h]
  DWORD v48; // [esp+14h] [ebp-204h]
  DWORD v49; // [esp+14h] [ebp-204h]
  int v50; // [esp+1Ch] [ebp-1FCh]
  int v51; // [esp+1Ch] [ebp-1FCh]
  _DWORD v52[12]; // [esp+20h] [ebp-1F8h] BYREF
  int v53[113]; // [esp+50h] [ebp-1C8h] BYREF
  __int16 v54; // [esp+214h] [ebp-4h]
  char v55; // [esp+216h] [ebp-2h]

  v41 = 0; /*0x795ce1*/
  v40 = a1 == 0; /*0x795ce6*/
  v42 = 0; /*0x795ceb*/
  Network::Disconnect(g_NetworkManager); /*0x795cf3*/
  Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    LOBYTE(v1) = g_MultiplayerSetupState; /*0x79616e*/
    if ( FindAndValidateMap(&Destination, g_MultiplayerConfigState, &g_MultiplayerFlags, v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)Game_PlayerInfoArray, -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)g_WOL_State > 0 ) /*0x7961de*/
      {
        v19 = (char *)g_WOL_ConnectionFlags; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)g_WOL_State ) /*0x7961ec*/
            qmemcpy(&g_IsMultiplayerSession, v19, 0x6Cu); /*0x7961fa*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)g_WOL_State ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796216*/
        {
          v20 = CharToWideString(byte_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
        }
      }
LABEL_75:
      Timer::GetTicks(); /*0x796236*/
      Ticks = Timer::GetTicks(); /*0x79625f*/
      v47 = 1200; /*0x796267*/
      if ( v40 ) /*0x79626b*/
      {
        Ticks = Timer::GetTicks(); /*0x796276*/
        v47 = 300; /*0x796287*/
      }
      while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x796297*/
      {
        v21 = v47; /*0x7962a1*/
        if ( Ticks != -1 ) /*0x7962a8*/
        {
          v22 = Timer::GetTicks() - Ticks; /*0x7962b3*/
          if ( v22 >= v47 ) /*0x7962b9*/
            break; /*0x7962b9*/
          v21 = v47 - v22; /*0x7962bf*/
        }
        if ( !v21 ) /*0x7962c3*/
          break; /*0x7962c3*/
        Event::Dispatch(); /*0x7962c9*/
      }
    }
    else
    {
      if ( g_GameOptionsFlags != 3 && (g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2) /*0x796306*/
        || (_BYTE)g_MultiplayerSetupState && !IsRandMap::Sed2((int)g_GameMode_Current) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)g_WOL_State > 0 ) /*0x796335*/
        {
          v24 = (char *)g_WOL_ConnectionFlags; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)g_WOL_State ) /*0x796343*/
              qmemcpy(&g_IsMultiplayerSession, v24, 0x6Cu); /*0x796351*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)g_WOL_State ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &g_IsMultiplayerSession ) /*0x79636d*/
          {
            v25 = CharToWideString(byte_B777D4); /*0x796374*/
            Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)g_NetworkManager) > 0 ) /*0x7963d9*/
        {
          v26 = 1200; /*0x7963e6*/
          if ( v45 != -1 ) /*0x7963ec*/
          {
            v27 = Timer::GetTicks() - v45; /*0x7963f7*/
            if ( v27 >= 1200 ) /*0x7963fd*/
              break; /*0x7963fd*/
            v26 = 1200 - v27; /*0x7963ff*/
          }
          if ( !v26 ) /*0x796403*/
            break; /*0x796403*/
          Event::Dispatch(); /*0x796405*/
        }
      }
      else
      {
        while ( CloseDialog(0, 0) == 1 ) /*0x796425*/
          ; /*0x796427*/
        SynchronizeMultiplayerGameStart_Start(); /*0x796434*/
        if ( RequestNetworkFile(&Destination, 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)g_GameMode_Current) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)g_ScenarioClass_Instance + 4700, &Destination); /*0x796481*/
    Debug::Log(); /*0x7964b4*/
    Timer::GetTicks(); /*0x7964c0*/
    v49 = Timer::GetTicks(); /*0x7964de*/
    v51 = 1200; /*0x7964f1*/
    if ( v40 ) /*0x7964f5*/
    {
      v49 = Timer::GetTicks(); /*0x796500*/
      v51 = 300; /*0x796511*/
    }
    while ( 1 ) /*0x79651a*/
    {
      Event::Dispatch(); /*0x79651a*/
      if ( Network::Send( /*0x796538*/
             (int)g_NetworkManager,
             (int)&Network_EventType,
             (int)&unk_A8D800,
             (int)&Network_EventValue,
             (int)&Network_EventHeader) )
      {
        if ( Network_EventHeader == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)g_WOL_State > 0 ) /*0x796561*/
          {
            v29 = (char *)g_WOL_ConnectionFlags; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)g_WOL_State ) /*0x79656f*/
                qmemcpy(&g_IsMultiplayerSession, v29, 0x6Cu); /*0x79657d*/
              if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)g_WOL_State ); /*0x796569*/
            if ( &g_IsMultiplayerSession && !_strcmpi(g_NetworkPlayerBuffer, byte_B777D4) ) /*0x7965a5*/
            {
              if ( Network_EventType == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( Network_EventType == 42 ) /*0x7965be*/
                break; /*0x7965be*/
            }
          }
        }
      }
      v30 = v51; /*0x7965c0*/
      if ( v49 != -1 ) /*0x7965cb*/
      {
        v31 = Timer::GetTicks() - v49; /*0x7965d6*/
        if ( v31 >= v51 ) /*0x7965dc*/
          goto LABEL_142; /*0x7965dc*/
        v30 = v51 - v31; /*0x7965e2*/
      }
      if ( !v30 ) /*0x7965e6*/
        goto LABEL_142; /*0x7965e6*/
    }
    Debug::Log(); /*0x796608*/
    v32 = 0; /*0x796615*/
    v40 = 1; /*0x796617*/
    if ( Game_PlayerCount > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(Game_PlayerInfoArray + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, byte_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= Game_PlayerCount ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < Game_PlayerCount && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
        dword_B73BB4[v32] = 3; /*0x79666d*/
    }
LABEL_142:
    v34 = v51; /*0x796673*/
    if ( v49 != -1 ) /*0x79667e*/
    {
      v35 = Timer::GetTicks() - v49; /*0x796689*/
      if ( v35 >= v51 ) /*0x79668f*/
      {
LABEL_146:
        v40 = 1; /*0x796697*/
        goto LABEL_147; /*0x796697*/
      }
      v34 = v51 - v35; /*0x796691*/
    }
    if ( v34 ) /*0x796695*/
      goto LABEL_147; /*0x796695*/
    goto LABEL_146; /*0x796695*/
  }
  memset(v53, 0, sizeof(v53)); /*0x795d44*/
  v54 = 0; /*0x795d46*/
  v55 = 0; /*0x795d48*/
  memset(&v52[4], 0, 0x20u); /*0x795d59*/
  v4 = 0; /*0x795d5b*/
  v5 = 0; /*0x795d5d*/
  Debug::Log(); /*0x795d5f*/
  Timer::GetTicks(); /*0x795d6b*/
  v48 = Timer::GetTicks(); /*0x795d81*/
  v50 = 900; /*0x795d98*/
  if ( v40 ) /*0x795d9c*/
  {
    v48 = Timer::GetTicks(); /*0x795db0*/
    v50 = 300; /*0x795db8*/
  }
  do /*0x795f56*/
  {
    Event::Dispatch(); /*0x795dbc*/
    if ( Network::Send( /*0x795dda*/
           (int)g_NetworkManager,
           (int)&Network_EventType,
           (int)&unk_A8D800,
           (int)&Network_EventValue,
           (int)&Network_EventHeader) )
    {
      if ( Network_EventHeader == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( Game_PlayerCount > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + Game_PlayerInfoArray + 4) + 40, (int)&Network_EventValue) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + Game_PlayerInfoArray + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, g_NetworkPlayerBuffer) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = Network_EventType; /*0x795e66*/
                if ( Network_EventType == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = Network_EventType; /*0x795e7a*/
                  v52[v7 + 5] = Network_EventType; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = Network_EventType; /*0x795e98*/
                  v52[v7 + 5] = Network_EventType; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = Network_EventType; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < Game_PlayerCount; /*0x795ec3*/
                  v52[v7 + 5] = Network_EventType; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = Network_EventType; /*0x795f01*/
                  v42 = 2; /*0x795f05*/
                  v40 = 1; /*0x795f0d*/
                  v41 = 1; /*0x795f12*/
                  ++v4; /*0x795f17*/
                }
              }
            }
            ++v6; /*0x795f1d*/
            ++v7; /*0x795f1e*/
          }
          while ( v6 < Game_PlayerCount ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= Game_PlayerCount - 1 ) /*0x795f32*/
      break; /*0x795f32*/
    v11 = v50; /*0x795f38*/
    if ( v48 != -1 ) /*0x795f3f*/
    {
      v12 = Timer::GetTicks() - v48; /*0x795f4a*/
      if ( v12 >= v50 ) /*0x795f50*/
        break; /*0x795f50*/
      v11 = v50 - v12; /*0x795f52*/
    }
  }
  while ( v11 ); /*0x795f56*/
  if ( v41 ) /*0x795f67*/
    v42 = 2; /*0x795f69*/
  if ( !v40 && !v41 && v5 && v4 == Game_PlayerCount - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    dword_A8BB10 = 0; /*0x795fba*/
    dword_A8BB14 = 0; /*0x795fbf*/
    dword_A8BB18 = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( Game_PlayerCount > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&dword_A8BB10 + dword_A8BB18++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < Game_PlayerCount ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)g_ScenarioClass_Instance + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)g_GameMode_Current) && !SendNetworkFile(ExistingFileName, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != Game_PlayerCount - 1 || v41 ) /*0x79607d*/
  {
    v53[0] = 42; /*0x79608d*/
    v40 = 1; /*0x796097*/
    if ( !v42 ) /*0x79609c*/
      v42 = 1; /*0x79609e*/
  }
  else
  {
    v53[0] = 11; /*0x79607f*/
  }
  CopyWideToChar(&v53[1], *(char **)Game_PlayerInfoArray, -1); /*0x7960b4*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x7960c5*/
  {
    v43 = Timer::GetTicks(); /*0x7960dc*/
    v46 = 600; /*0x7960e6*/
    if ( v40 ) /*0x7960ea*/
    {
      v52[0] = Timer::GetTicks(); /*0x7960f5*/
      v43 = v52[0]; /*0x7960f9*/
      v52[2] = 300; /*0x796106*/
      v46 = 300; /*0x79610e*/
    }
    do /*0x796159*/
    {
      Event::Dispatch(); /*0x796112*/
      if ( Network::SendToPlayer((int)g_NetworkManager, (int)v53, 47, 1, *(wchar_t **)(Game_PlayerInfoArray + 4 * i)) ) /*0x79612f*/
        break; /*0x796136*/
      v16 = v46; /*0x79613c*/
      if ( v43 != -1 ) /*0x796142*/
      {
        v17 = Timer::GetTicks() - v43; /*0x79614d*/
        if ( v17 >= v46 ) /*0x796153*/
          break; /*0x796153*/
        v16 = v46 - v17; /*0x796155*/
      }
    }
    while ( v16 ); /*0x796159*/
  }
LABEL_147:
  if ( (unsigned int)(8 * Network::GetLobbyStatus(g_NetworkManager)) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(g_NetworkManager); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(g_NetworkManager); /*0x7966d0*/
  Network::SetConnectionParams(g_NetworkManager, LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(g_NetworkManager); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}



// ==== 0x00796710  HandleWOLRematch  this=-  sig=ida-proto ====
char HandleWOLRematch()
{
  int v0; // eax
  char *v1; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  char *i; // edx
  __int16 v8; // [esp+Eh] [ebp-246h] BYREF
  int v9; // [esp+10h] [ebp-244h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-240h] BYREF
  _DWORD v11[27]; // [esp+20h] [ebp-234h] BYREF
  int v12; // [esp+8Ch] [ebp-1C8h] BYREF
  _BYTE v13[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !g_WOL_ProcessIdle || (int)g_WOL_State < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( (int)g_WOL_State > 0 ) /*0x796742*/
  {
    v1 = (char *)g_WOL_ConnectionFlags; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x796750*/
        qmemcpy(&g_IsMultiplayerSession, v1, 0x6Cu); /*0x79675e*/
      if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      v1 += 108; /*0x79676a*/
      if ( v0 >= (int)g_WOL_State ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_IsMultiplayerSession ) /*0x79677a*/
    {
      v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x796781*/
      if ( !_strcmpi(byte_B777D4, v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed((int)g_NetworkManager) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  v9 = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk(0, &v12, &v9, v10, &v8, 0) || v12 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( (int)g_WOL_State > 0 ) /*0x796833*/
    qmemcpy(v11, g_WOL_ConnectionFlags, sizeof(v11)); /*0x796844*/
  v11[8] = 0; /*0x79684a*/
  Network::SyncPlayerList(); /*0x796852*/
  if ( !Network::Send((int)g_NetworkManager, (int)&v12, (int)&v9, (int)v10, (int)&v8) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v12 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !NetworkID::Compare((int)v10, (int)&g_NetworkRematchObject) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v8 != -22012 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
  if ( (int)g_WOL_State <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7968b8*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7968c6*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= (int)g_WOL_State ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  if ( !&g_IsMultiplayerSession || _strcmpi(v13, byte_B777D4) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(g_NetworkManager, 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}



// ==== 0x00796960  ObjectClass::Event_Play  this=ObjectClass  sig=csp ====
char sub_796960()
{
  int v0; // eax
  int v1; // esi
  char *v2; // eax
  int v3; // eax
  char *v4; // edx
  char *v5; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-240h] BYREF
  _DWORD v8[27]; // [esp+14h] [ebp-234h] BYREF
  int v9[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+244h] [ebp-4h]
  char v11; // [esp+246h] [ebp-2h]

  LOBYTE(v0) = g_GameMode_Current[0]; /*0x796960*/
  if ( g_GameMode_Current[0] == 4 ) /*0x796970*/
    return v0; /*0x796970*/
  Waypoint::InitInvalid(v7); /*0x79697a*/
  v0 = g_WOL_State; /*0x79697f*/
  if ( (int)g_WOL_State < 2 ) /*0x796987*/
    return v0; /*0x796987*/
  v1 = 0; /*0x79698d*/
  if ( (int)g_WOL_State <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((int *)&g_WOL_State, &g_IsMultiplayerSession, v1); /*0x7969a3*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    v0 = g_WOL_State; /*0x7969b0*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( !&g_IsMultiplayerSession /*0x7969df*/
    || (v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), (v0 = _strcmpi(byte_B777D4, v2)) != 0) )
  {
    v0 = g_WOL_State; /*0x7969e5*/
LABEL_10:
    if ( !g_NetworkLobbyState && g_WOL_ProcessIdle ) /*0x796a00*/
    {
      if ( v0 > 0 ) /*0x796a0a*/
        qmemcpy(v8, g_WOL_ConnectionFlags, sizeof(v8)); /*0x796a1b*/
      v8[8] = 0; /*0x796a21*/
      Network::SyncPlayerList(); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(g_NetworkManager, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress((unsigned __int16 *)&g_NetworkRematchObject, 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v9, 0, sizeof(v9)); /*0x796a6f*/
      v10 = 0; /*0x796a79*/
      v11 = 0; /*0x796a7b*/
      v9[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v9[1], *(char **)Game_PlayerInfoArray, -1); /*0x796a90*/
      v3 = 0; /*0x796a9b*/
      if ( (int)g_WOL_State > 0 ) /*0x796a9f*/
      {
        v4 = (char *)g_WOL_ConnectionFlags; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x796aad*/
            qmemcpy(&g_IsMultiplayerSession, v4, 0x6Cu); /*0x796abb*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v3; /*0x796ac5*/
          v4 += 108; /*0x796ac6*/
          if ( v3 >= (int)g_WOL_State ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796ae4*/
        {
          v5 = CharToWideString(byte_B777D4); /*0x796aeb*/
          Network::SendToPlayer((int)g_NetworkManager, (int)v9, 455, 1, (wchar_t *)v5); /*0x796b04*/
        }
      }
LABEL_24:
      LOBYTE(v0) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return v0; /*0x796ad4*/
}



// ==== 0x00796B20  nullsub_264  this=-  sig=ida-proto ====
void nullsub_264()
{
  ; /*0x796b20*/
}



// ==== 0x00796B30  sub_796B30  this=-  sig=ida-proto ====
int sub_796B30()
{
  int v0; // esi
  _DWORD v2[3]; // [esp+4h] [ebp-Ch] BYREF

  SimpleDialogControl::Constructor(v2); /*0x796b38*/
  v2[0] = &off_7F7624; /*0x796b4c*/
  v0 = RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v2); /*0x796b59*/
  v2[0] = &off_7F7624; /*0x796b5b*/
  OwnerDrawControl::InitVtable(v2); /*0x796b6b*/
  if ( v0 >= 0 ) /*0x796b69*/
    return v0; /*0x796b7c*/
  else
    return 0; /*0x796b70*/
}



// ==== 0x00796B90  LobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_LobbyDlgProc(HWND hWnd, LONG a2, int a3, HWND a4)
{
  HWND v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // esi
  int i; // edi
  LRESULT v12; // eax
  HWND v13; // eax
  LRESULT v14; // ebx
  HWND DlgItem; // edi
  LRESULT v16; // eax
  wchar_t *v17; // [esp-4h] [ebp-14h]
  BOOL v18; // [esp-4h] [ebp-14h]

  v4 = a4; /*0x796b92*/
  v5 = hWnd; /*0x796b97*/
  v6 = a2; /*0x796b9c*/
  if ( a2 == 272 && a4 ) /*0x796baa*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x796bb3*/
  v7 = a3; /*0x796bb9*/
  result = BaseDialogProc(v5, v6, a3, (unsigned int)v4); /*0x796bc3*/
  if ( !result ) /*0x796bca*/
  {
    WindowLongA = GetWindowLongA(v5, 8); /*0x796bd3*/
    a2 = WindowLongA; /*0x796bdf*/
    if ( v6 <= 0x82 ) /*0x796be3*/
    {
      switch ( v6 ) /*0x796be5*/
      {
        case 0x82u: /*0x796be5*/
          DestroyDialog(v5); /*0x796c2f*/
          return 0; /*0x796c3a*/
        case 0xFu: /*0x796be5*/
          Dialog::DrawBackground(v5); /*0x796c0f*/
          Dialog::StopBink(v5); /*0x796c16*/
          ValidateRect(v5, 0); /*0x796c1e*/
          return 0; /*0x796c2a*/
        case 0x14u: /*0x796be5*/
          return 1; /*0x796c0a*/
        case 0x2Bu: /*0x796be5*/
          Dialog::Resize((char *)v4); /*0x796bfc*/
          return 1; /*0x796bfc*/
      }
      return 0; /*0x796bf4*/
    }
    if ( v6 == 273 ) /*0x796c43*/
    {
      if ( (unsigned __int16)v7 == 1 ) /*0x796d2e*/
      {
        v14 = 0; /*0x796da1*/
        DlgItem = GetDlgItem(v5, 1008); /*0x796da4*/
        v16 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x796dad*/
        if ( v16 != -1 ) /*0x796db2*/
          v14 = SendMessageA(DlgItem, 0x199u, v16, 0); /*0x796dbe*/
        (*(void (__thiscall **)(LONG, HWND, LRESULT))(*(_DWORD *)a2 + 4))(a2, v5, v14); /*0x796dc8*/
      }
      else
      {
        if ( (unsigned __int16)v7 == 2 ) /*0x796d31*/
        {
          (*(void (__thiscall **)(LONG, HWND, _DWORD))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 0); /*0x796d83*/
          return 0; /*0x796d8c*/
        }
        if ( (unsigned __int16)v7 == 1008 && HIWORD(v7) == 1 ) /*0x796d45*/
        {
          v18 = SendMessageA(v4, 0x188u, 0, 0) != -1; /*0x796d63*/
          v13 = GetDlgItem(v5, 1); /*0x796d66*/
          EnableWindow(v13, v18); /*0x796d6d*/
          return 0; /*0x796d79*/
        }
      }
      return 0; /*0x796d45*/
    }
    if ( v6 != 1175 ) /*0x796c4f*/
      return 0; /*0x796c4f*/
    SendDlgItemMessageA(v5, 1008, 0x184u, 0, 0); /*0x796c64*/
    hWnd = 0; /*0x796c73*/
    (*(void (__stdcall **)(LPVOID, HWND *))(*(_DWORD *)ppv + 208))(ppv, &hWnd); /*0x796c7f*/
    if ( (int)hWnd <= 0 ) /*0x796c8b*/
      return 0; /*0x796dcb*/
    v10 = GetDlgItem(v5, 1008); /*0x796ca3*/
    for ( i = (int)hWnd - 1; i >= 0; --i ) /*0x796cae*/
    {
      FormatLocaleStringWOL((wchar_t **)&a2, i); /*0x796cb6*/
      WideString::GetOrEmpty((wchar_t **)&a2); /*0x796cbf*/
      Debug::Log(); /*0x796cca*/
      v17 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x796ce0*/
      if ( i >= 2 ) /*0x796cd9*/
        v12 = SendMessageA(v10, 0x4CDu, 0, (LPARAM)v17); /*0x796cf8*/
      else
        v12 = SendMessageA(v10, 0x4CCu, 0, (LPARAM)v17); /*0x796ce8*/
      SendMessageA(v10, 0x19Au, v12, i); /*0x796d02*/
      DeleteAndZero::Alt((void **)&a2); /*0x796d08*/
    }
    SendMessageA(v10, 0x186u, 0xFFFFFFFF, 0); /*0x796d1a*/
    return 0; /*0x796d1f*/
  }
  return result; /*0x796c01*/
}



// ==== 0x00796DE0  Game::CreateAIPlayer  this=Game  sig=csp ====
int Game_CreateAIPlayer()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[2]; // [esp+Ch] [ebp-8h] BYREF
  char v7[6]; // [esp+Eh] [ebp-6h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v1 = v0; /*0x796def*/
  if ( v0 ) /*0x796df8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796dfd*/
  else
    v1 = 0; /*0x796e04*/
  BulkCharToWide(v1, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796e1f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796e26*/
  *(_DWORD *)(v1 + 83) = 3; /*0x796e29*/
  v5 = 0; /*0x796e33*/
  v7[3] = 0; /*0x796e37*/
  strcpy(v7, "QR"); /*0x796e44*/
  v6[1] = 2; /*0x796e49*/
  v6[0] = 10; /*0x796e4e*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796e53*/
  if ( Game_PlayerCount < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
         &g_PlayerInfoCount,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v2 = Game_PlayerCount++; /*0x796e99*/
    *(_DWORD *)(Game_PlayerInfoArray + 4 * v2) = v1; /*0x796ea8*/
  }
  v3 = g_ScenarioLoadFlags; /*0x796eab*/
  dword_B7790C[g_ScenarioLoadFlags] = 100; /*0x796eb2*/
  result = v3 + 1; /*0x796ebd*/
  g_ScenarioLoadFlags = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}



// ==== 0x00796ED0  Game::CreateAIPlayer_Potato  this=Game  sig=csp ====
int Game_CreateAIPlayer_Potato()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[3]; // [esp+Ch] [ebp-8h] BYREF
  char v7[5]; // [esp+Fh] [ebp-5h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v1 = v0; /*0x796edf*/
  if ( v0 ) /*0x796ee8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796eed*/
  else
    v1 = 0; /*0x796ef4*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796f0f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796f16*/
  *(_DWORD *)(v1 + 83) = 0; /*0x796f19*/
  v5 = 0; /*0x796f1f*/
  v7[2] = 0; /*0x796f23*/
  strcpy(v7, "a"); /*0x796f2b*/
  v6[2] = 20; /*0x796f30*/
  v6[1] = 2; /*0x796f35*/
  v6[0] = 10; /*0x796f3a*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796f3f*/
  if ( Game_PlayerCount < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
         &g_PlayerInfoCount,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v2 = Game_PlayerCount++; /*0x796f85*/
    *(_DWORD *)(Game_PlayerInfoArray + 4 * v2) = v1; /*0x796f94*/
  }
  v3 = g_ScenarioLoadFlags; /*0x796f97*/
  dword_B7790C[g_ScenarioLoadFlags] = 100; /*0x796f9e*/
  result = v3 + 1; /*0x796fa9*/
  g_ScenarioLoadFlags = result; /*0x796faa*/
  return result; /*0x796f9c*/
}



// ==== 0x00796FC0  ObjectClass::Network_Init_796FC0  this=ObjectClass  sig=csp ====
int sub_796FC0()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796fca*/
  v1 = v0; /*0x796fcf*/
  if ( v0 ) /*0x796fd6*/
    Waypoint::InitInvalid(v0 + 40); /*0x796fdb*/
  else
    v1 = 0; /*0x796fe2*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotatotoo, -1); /*0x796fed*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796ff7*/
  *(_DWORD *)(v1 + 75) = 1; /*0x796ffe*/
  *(_DWORD *)(v1 + 83) = 2; /*0x797005*/
  v6[1] = 2; /*0x797008*/
  v5 = 0; /*0x79701d*/
  v6[5] = 0; /*0x797025*/
  v6[4] = 0; /*0x79702a*/
  v6[3] = -6; /*0x79702f*/
  v6[2] = 80; /*0x797034*/
  v6[0] = 10; /*0x797039*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x79703e*/
  if ( Game_PlayerCount < dword_A8DA7C /*0x79707a*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_PlayerInfoCount + 8))(
         &g_PlayerInfoCount,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v2 = Game_PlayerCount++; /*0x797087*/
    *(_DWORD *)(Game_PlayerInfoArray + 4 * v2) = v1; /*0x797096*/
  }
  v3 = g_ScenarioLoadFlags; /*0x797099*/
  dword_B7790C[g_ScenarioLoadFlags] = 100; /*0x79709e*/
  g_ScenarioLoadFlags = v3 + 1; /*0x7970aa*/
  g_NetworkRematchObject = *((_DWORD *)v1 + 10); /*0x7970b1*/
  result = *((_DWORD *)v1 + 11); /*0x7970b7*/
  dword_A8BB20 = result; /*0x7970ba*/
  dword_A8BB24 = *((_DWORD *)v1 + 12); /*0x7970c3*/
  return result; /*0x7970c2*/
}



// ==== 0x007970D0  ObjectClass::InitNetworkGame  this=ObjectClass  sig=csp ====
int NetworkGame_Init()
{
  int i; // esi
  int v1; // esi
  int *v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  char v6; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v8[16]; // [esp+18h] [ebp-424h] BYREF
  int v9; // [esp+28h] [ebp-414h]
  int v10; // [esp+2Ch] [ebp-410h]
  int v11; // [esp+30h] [ebp-40Ch]
  int v12; // [esp+34h] [ebp-408h]
  int v13; // [esp+38h] [ebp-404h] BYREF
  _BYTE v14[8]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  dword_B779D4 = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)dword_B779C4 = 0; /*0x7970f1*/
  strcpy(byte_B77830, String::GetOrEmpty((char **)&g_WebBrowser)); /*0x797115*/
  PtrVector::Destroy(&g_PlayerInfoCount); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v6 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(); /*0x797197*/
      Game::CreateAIPlayer_Potato(); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(); /*0x79718b*/
      Game::CreateAIPlayer(); /*0x797190*/
    }
    Network_Init_796FC0(); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0(); /*0x797160*/
    Game::CreateAIPlayer(); /*0x797165*/
    Game::CreateAIPlayer_Potato(); /*0x79716a*/
    v6 = 1; /*0x79716f*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 48))(g_NetworkInterface); /*0x7971ae*/
  strcpy(v8, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v9 = 0; /*0x7971d1*/
  v10 = 0; /*0x7971de*/
  v11 = 0; /*0x7971e4*/
  v12 = 0; /*0x7971ec*/
  for ( i = 1; i < Game_PlayerCount; ++i ) /*0x7971f7*/
  {
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * i) + 40), &v13, (int)v14); /*0x79720e*/
    (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)g_NetworkInterface + 44))(g_NetworkInterface, v8, 0); /*0x797221*/
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(word_A8E258, (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  dword_A8E2AC = -1; /*0x797267*/
  g_CommandExecState = 0; /*0x797271*/
  g_MenuRandomSeed = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  g_Rules_MultiEngineer = 10; /*0x797282*/
  g_Rules_Bases = 10000; /*0x797288*/
  FOW = 0; /*0x797292*/
  BridgeDestruction = 1; /*0x797297*/
  Crates = 1; /*0x79729d*/
  LOBYTE(MCVRedeploy) = 1; /*0x7972a3*/
  AlliesAllowed = 1; /*0x7972a9*/
  HarvesterTruce = 0; /*0x7972af*/
  Bases = 1; /*0x7972b4*/
  CTF = 0; /*0x7972ba*/
  g_Rules_AlliesAllowed = 0; /*0x7972bf*/
  dword_A8B278 = 0; /*0x7972c4*/
  ShortGame = 1; /*0x7972c9*/
  SWAllowed = 1; /*0x7972cf*/
  LOBYTE(g_Rules_ShortGame) = 0; /*0x7972d5*/
  MultiEngineer = 1; /*0x7972da*/
  g_GameRulesOptions = 1; /*0x7972e0*/
  g_Rules_EngineerCount = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  g_Rules_EngineerCount = 2; /*0x7972fb*/
  *(_DWORD *)g_GameModeOptions = 2; /*0x797301*/
  *((_DWORD *)g_ScenarioClass_Instance + 1173) = g_GameRulesOptions; /*0x797307*/
  g_ScenarioLoadState = 5; /*0x797315*/
  switch ( g_Rules_EngineerCount ) /*0x797325*/
  {
    case 0: /*0x797325*/
      g_ScenarioState = (wchar_t *)40; /*0x79732c*/
      g_GameSessionFlags = 60; /*0x797332*/
      g_ScenarioLoadState = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      g_ScenarioState = (wchar_t *)40; /*0x797344*/
      g_GameSessionFlags = 45; /*0x79734a*/
      g_ScenarioLoadState = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      g_ScenarioState = (wchar_t *)30; /*0x797361*/
      g_GameSessionFlags = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x797372*/
      g_GameSessionFlags = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x79737e*/
      g_GameSessionFlags = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      g_ScenarioState = (wchar_t *)20; /*0x797394*/
      g_GameSessionFlags = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      g_ScenarioState = (wchar_t *)10; /*0x7973aa*/
      g_GameSessionFlags = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  g_GameSessionPool = 0; /*0x7973be*/
  if ( !v6 ) /*0x7973c4*/
    g_GameSessionFlags = 0; /*0x7973c6*/
  v1 = 0; /*0x7973d1*/
  if ( Game_PlayerCount > 0 ) /*0x7973d5*/
  {
    v2 = dword_B7790C; /*0x7973d7*/
    v3 = Game_PlayerCount; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( *v2 > v1 ) /*0x7973e2*/
        v1 = *v2; /*0x7973e4*/
      ++v2; /*0x7973e6*/
      --v3; /*0x7973e9*/
    }
    while ( v3 ); /*0x7973ea*/
  }
  g_NetworkHostState = (wchar_t *)1; /*0x7973ee*/
  if ( !v1 || v1 == 1000 ) /*0x797400*/
  {
    g_GameSessionFlags = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v1 <= 1000 ) /*0x79741a*/
    {
      if ( v1 < 600 ) /*0x79742a*/
        g_NetworkHostState = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      g_NetworkHostState = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      g_NetworkManager,
      120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000,
      -1,
      8 * (120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000),
      1);
    if ( v6 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(5, -1, 120); /*0x797493*/
      switch ( (unsigned int)g_NetworkHostState ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v4 = (unsigned int)g_ScenarioState; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v4 = (unsigned int)g_ScenarioState + ((unsigned int)g_ScenarioState >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v4 = 2 * (_DWORD)g_ScenarioState; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v4 = g_GameSessionPool; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      g_GameSessionPool = 10 * (v4 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  dword_A8B568 = (int)g_ScenarioState; /*0x797543*/
  memset(&unk_A8B574, 0, 0x340u); /*0x797556*/
  *(_DWORD *)&hostshort = 1234; /*0x79755e*/
  *(_DWORD *)g_GameModeOptions = g_Rules_EngineerCount; /*0x797568*/
  *(_DWORD *)&dword_841F34 = 1235; /*0x79756e*/
  *(_DWORD *)&dword_841F38 = 1236; /*0x797578*/
  *(_DWORD *)&dword_841F3C = 1237; /*0x797582*/
  g_CurrentFrame = 0; /*0x79758c*/
  byte_B77A04 = 0; /*0x797591*/
  byte_B76568[0] = 0; /*0x797596*/
  return Scenario::PreGameInit(); /*0x7975a0*/
}



// ==== 0x00797640  LoginWOL  this=-  sig=ida-proto ====
int __fastcall sub_797640(int a1)
{
  DWORD i; // esi
  wchar_t *String; // eax
  int v3; // esi
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char v8; // [esp+21h] [ebp-3h]
  char v9; // [esp+22h] [ebp-2h]
  char v10; // [esp+23h] [ebp-1h]

  v10 = byte_B77DC0; /*0x797650*/
  byte_B77DC0 = 1; /*0x797669*/
  g_WOL_UserList = 0; /*0x797670*/
  dword_B76468 = 0; /*0x797676*/
  dword_B779CC = 0; /*0x79767c*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)ppv + 16))( /*0x79768b*/
    ppv,
    a1 | dword_B77E50,
    65537,
    aTibsun,
    aTibpass99,
    30);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)ppv + 140))(ppv, g_NetworkRematchState); /*0x79769d*/
  v9 = 0; /*0x7976af*/
  v8 = 0; /*0x7976b3*/
  while ( 1 ) /*0x797758*/
  {
    while ( 1 ) /*0x79771a*/
    {
      do /*0x79771a*/
      {
        while ( 1 ) /*0x7976c3*/
        {
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u); /*0x7976cb*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u) )
          {
            Game::ProcessIdle(); /*0x7976cd*/
          }
          ResetEvent(*(&Handles + i)); /*0x7976f0*/
          if ( !i ) /*0x7976f4*/
            goto LABEL_19; /*0x7976f4*/
          if ( i == 8 ) /*0x7976fd*/
          {
            v3 = 2; /*0x79778b*/
            goto LABEL_22; /*0x797790*/
          }
          if ( i != 1 ) /*0x797706*/
            break; /*0x797706*/
          v9 = 1; /*0x79770c*/
          if ( v8 ) /*0x797713*/
            goto LABEL_21; /*0x797713*/
        }
      }
      while ( i != 9 ); /*0x79771a*/
      if ( dword_B77DE8 > -2147221395 ) /*0x797726*/
        break; /*0x797726*/
      if ( dword_B77DE8 >= -2147221396 || dword_B77DE8 >= -2147221401 && dword_B77DE8 <= -2147221398 ) /*0x79773b*/
      {
        String = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 24389); /*0x797776*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x79777f*/
LABEL_19:
        v3 = 1; /*0x797784*/
        goto LABEL_22; /*0x797789*/
      }
    }
    if ( dword_B77DE8 == 262447 ) /*0x797747*/
    {
      v8 = 1; /*0x797751*/
      if ( v9 ) /*0x797758*/
        break; /*0x797758*/
    }
  }
LABEL_21:
  v3 = 0; /*0x797792*/
LABEL_22:
  v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797794*/
  if ( v4 ) /*0x7977a0*/
  {
    g_WOL_ChannelList = 0; /*0x7977a6*/
    CloseDialog(v4, 0); /*0x7977ac*/
  }
  Current = Dialog::GetCurrent(); /*0x7977b1*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7977bc*/
  if ( DlgItem ) /*0x7977c4*/
    SetFocus(DlgItem); /*0x7977c7*/
  byte_B77DC0 = v10; /*0x7977d6*/
  return v3; /*0x7977d3*/
}



// ==== 0x00797800  ObjectClass::FetchWOLData  this=ObjectClass  sig=csp ====
char WOL_FetchData()
{
  wchar_t *String; // eax
  HANDLE *v1; // esi
  int v2; // esi
  wchar_t *v4; // eax
  int v5; // ebx
  DWORD v6; // esi
  HWND v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  HWND v14; // eax
  HWND Current; // eax
  int v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  DWORD i; // esi
  HWND v20; // eax
  HWND v21; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  char *v29; // [esp-4h] [ebp-18h]
  void *v30; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v29 = byte_B76A2C; /*0x79780e*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
LABEL_7:
    ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, (char)v29); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v1 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v1++); /*0x797823*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x797832*/
  v2 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797853*/
         g_UIPointerTable,
         byte_B73B34,
         dword_B76B0C,
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v2 ) /*0x797876*/
  {
    LOBYTE(v29) = 0; /*0x797878*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v4 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  WideString::Assign((wchar_t **)&v30, v4); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v30, 0); /*0x7978cf*/
  DeleteAndZero::Alt(&v30); /*0x7978d8*/
  do /*0x797949*/
  {
    v5 = 30000; /*0x7978ed*/
    v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v6 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v5 -= 100; /*0x7978fe*/
        if ( v5 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(); /*0x797909*/
        v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v6 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
LABEL_25:
      v13 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v13, 0, (int)GameLoop::Thunk, 0); /*0x797a20*/
      v14 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a2a*/
      if ( v14 ) /*0x797a31*/
      {
        g_WOL_ChannelList = 0; /*0x797a37*/
        CloseDialog(v14, 0); /*0x797a3d*/
      }
      Current = Dialog::GetCurrent(); /*0x797a42*/
      DlgItem = GetDlgItem(Current, 1344); /*0x797a4d*/
      if ( DlgItem ) /*0x797a55*/
      {
LABEL_43:
        SetFocus(DlgItem); /*0x797b5c*/
        return 0; /*0x797b6a*/
      }
      return 0; /*0x797a55*/
    }
LABEL_12:
    ResetEvent(*(&Handles + v6)); /*0x797924*/
    switch ( v6 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797956*/
        if ( v7 ) /*0x79795d*/
        {
          g_WOL_ChannelList = 0; /*0x797963*/
          CloseDialog(v7, 0); /*0x797969*/
        }
        v8 = Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v8, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v10 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v10, 0, (int)GameLoop::Thunk, 0); /*0x7979b6*/
        v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7979c0*/
        if ( v11 ) /*0x7979c7*/
        {
          g_WOL_ChannelList = 0; /*0x7979cd*/
          CloseDialog(v11, 0); /*0x7979d3*/
        }
        v12 = Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v12, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v6 != 11 ); /*0x797949*/
  v16 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797a83*/
          g_UIPointerTable,
          byte_B73B34,
          dword_B76B0C,
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v16 ) /*0x797a94*/
  {
    v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a9b*/
    if ( v17 ) /*0x797aa2*/
    {
      g_WOL_ChannelList = 0; /*0x797aa8*/
      CloseDialog(v17, 0); /*0x797aae*/
    }
    v18 = Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v18, 1344); /*0x797abe*/
    if ( DlgItem ) /*0x797ac6*/
      goto LABEL_43; /*0x797ac6*/
  }
  else
  {
    while ( 1 ) /*0x797ae7*/
    {
      for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x797aef*/
            i == 258;
            i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
      {
        Game::ProcessIdle(); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v22 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v22, 0, (int)GameLoop::Thunk, 0); /*0x797b8b*/
        v23 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b95*/
        if ( v23 ) /*0x797b9c*/
        {
          g_WOL_ChannelList = 0; /*0x797ba2*/
          CloseDialog(v23, 0); /*0x797ba8*/
        }
        v24 = Dialog::GetCurrent(); /*0x797bad*/
        v25 = GetDlgItem(v24, 1344); /*0x797bb8*/
        if ( v25 ) /*0x797bc0*/
          SetFocus(v25); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v26 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797bd6*/
        if ( v26 ) /*0x797bdd*/
        {
          g_WOL_ChannelList = 0; /*0x797be3*/
          CloseDialog(v26, 0); /*0x797be9*/
        }
        v27 = Dialog::GetCurrent(); /*0x797bee*/
        v28 = GetDlgItem(v27, 1344); /*0x797bf9*/
        if ( v28 ) /*0x797c01*/
          SetFocus(v28); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v20 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b2f*/
    if ( v20 ) /*0x797b36*/
    {
      g_WOL_ChannelList = 0; /*0x797b3c*/
      CloseDialog(v20, 0); /*0x797b42*/
    }
    v21 = Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v21, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}



// ==== 0x00797C20  ObjectClass::InitVersionStringsWOL  this=ObjectClass  sig=csp ====
char WOL_InitVersionStrings()
{
  char result; // al
  const char **v1; // esi
  int v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  char **v12; // ecx
  int v13; // esi
  char **v14; // ecx
  int v15; // esi
  char **v16; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (byte_B76954 & 1) == 0 ) /*0x797c38*/
    {
      byte_B76954 |= 1u; /*0x797c3d*/
      v1 = &dword_B76914; /*0x797c42*/
      v2 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(v1++); /*0x797c4e*/
        --v2; /*0x797c56*/
      }
      while ( v2 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((void **)&dword_B76914, a01W024V01); /*0x797c71*/
    String::Assign_Bool((void **)&dword_B76918, a01W026V01); /*0x797c80*/
    String::Assign_Bool((void **)&dword_B7691C, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((void **)&dword_B76920, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((void **)&dword_B76924, a01W020V01); /*0x797cad*/
    String::Assign_Bool((void **)&dword_B76928, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((void **)&dword_B7692C, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((void **)&dword_B76930, a00W024V00); /*0x797cda*/
    String::Assign_Bool((void **)&dword_B76934, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((void **)&dword_B76938, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((void **)&dword_B7693C, a00W018V00); /*0x797d07*/
    String::Assign_Bool((void **)&dword_B76940, a00W020V00); /*0x797d16*/
    String::Assign_Bool((void **)&dword_B76944, a01W032V01); /*0x797d25*/
    String::Assign_Bool((void **)&dword_B76948, a01W030V01); /*0x797d34*/
    String::Assign_Bool((void **)&dword_B7694C, a00W031V00); /*0x797d43*/
    String::Assign_Bool((void **)&dword_B76950, a00W029V00); /*0x797d52*/
    for ( i = 0; i < dword_B73BD8; ++i ) /*0x797d60*/
      Object::DtorWithDelete((void **)dword_B73BE0 + i, 0); /*0x797d6b*/
    v4 = 0; /*0x797d7f*/
    for ( dword_B73BD8 = 0; v4 < dword_B736F8; ++v4 ) /*0x797d89*/
      Object::DtorWithDelete((void **)dword_B73700 + v4, 0); /*0x797d95*/
    v5 = 0; /*0x797da9*/
    for ( dword_B736F8 = 0; v5 < dword_B76B00; ++v5 ) /*0x797db3*/
      Object::DtorWithDelete((void **)dword_B76B08 + v5, 0); /*0x797dbf*/
    v6 = 0; /*0x797dd3*/
    for ( dword_B76B00 = 0; v6 < dword_B76510; ++v6 ) /*0x797ddd*/
      Object::DtorWithDelete((void **)dword_B76518 + v6, 0); /*0x797de8*/
    v7 = 0; /*0x797dfc*/
    for ( dword_B76510 = 0; v7 < dword_B73AE8; ++v7 ) /*0x797e06*/
      Object::DtorWithDelete((void **)dword_B73AF0 + v7, 0); /*0x797e12*/
    v8 = 0; /*0x797e26*/
    for ( dword_B73AE8 = 0; v8 < dword_B77820; ++v8 ) /*0x797e30*/
      Object::DtorWithDelete((void **)dword_B77828 + v8, 0); /*0x797e3c*/
    v9 = 0; /*0x797e50*/
    for ( dword_B77820 = 0; v9 < dword_B73708; ++v9 ) /*0x797e5a*/
      Object::DtorWithDelete((void **)dword_B73710 + v9, 0); /*0x797e65*/
    v10 = 0; /*0x797e79*/
    for ( dword_B73708 = 0; v10 < dword_B76188; ++v10 ) /*0x797e83*/
      Object::DtorWithDelete((void **)dword_B76190 + v10, 0); /*0x797e8f*/
    dword_B76188 = 0; /*0x797ea9*/
    StringVector::Insert(&dword_B73BD8, &dword_B76914, 0); /*0x797eaf*/
    StringVector::Insert(&dword_B73BD8, &dword_B76918, 0); /*0x797ebf*/
    StringVector::Insert(&dword_B73BD8, &dword_B7691C, 0); /*0x797ecf*/
    StringVector::Insert(&dword_B76B00, &dword_B76920, 0); /*0x797edf*/
    StringVector::Insert(&dword_B76B00, &dword_B76924, 0); /*0x797eef*/
    StringVector::Insert(&dword_B76B00, &dword_B76928, 0); /*0x797eff*/
    StringVector::Insert(&dword_B736F8, &dword_B7692C, 0); /*0x797f0f*/
    StringVector::Insert(&dword_B736F8, &dword_B76930, 0); /*0x797f1f*/
    StringVector::Insert(&dword_B736F8, &dword_B76934, 0); /*0x797f2f*/
    StringVector::Insert(&dword_B76510, &dword_B76938, 0); /*0x797f3f*/
    StringVector::Insert(&dword_B76510, &dword_B7693C, 0); /*0x797f4f*/
    StringVector::Insert(&dword_B76510, &dword_B76940, 0); /*0x797f5f*/
    StringVector::Insert(&dword_B73AE8, &dword_B76944, 0); /*0x797f6f*/
    v11 = 0; /*0x797f79*/
    if ( dword_B73708 < 0 ) /*0x797f7d*/
      v11 = dword_B73708; /*0x797f7f*/
    if ( v11 >= dword_B7370C ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797f8e*/
    if ( dword_B73708 >= dword_B7370C ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797fa7*/
    if ( v11 < dword_B73708 ) /*0x797fb3*/
      memcpy((char *)dword_B73710 + 4 * v11 + 4, (char *)dword_B73710 + 4 * v11, 4 * (dword_B73708 + 0x3FFFFFFF * v11)); /*0x797fd0*/
    v12 = (char **)((char *)dword_B73710 + 4 * v11); /*0x797fde*/
    if ( v12 ) /*0x797fe3*/
      String::AssignFromPtr(v12, &dword_B76948); /*0x797fea*/
    v13 = 0; /*0x797ffb*/
    ++dword_B73708; /*0x797fff*/
    if ( dword_B77820 < 0 ) /*0x798005*/
      v13 = dword_B77820; /*0x798007*/
    if ( v13 >= dword_B77824 ) /*0x79800f*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x798016*/
    if ( dword_B77820 >= dword_B77824 ) /*0x798028*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x79802f*/
    if ( v13 < dword_B77820 ) /*0x79803b*/
      memcpy((char *)dword_B77828 + 4 * v13 + 4, (char *)dword_B77828 + 4 * v13, 4 * (dword_B77820 + 0x3FFFFFFF * v13)); /*0x798058*/
    v14 = (char **)((char *)dword_B77828 + 4 * v13); /*0x798066*/
    if ( v14 ) /*0x79806b*/
      String::AssignFromPtr(v14, &dword_B7694C); /*0x798072*/
    v15 = 0; /*0x798083*/
    ++dword_B77820; /*0x798087*/
    if ( dword_B76188 < 0 ) /*0x79808d*/
      v15 = dword_B76188; /*0x79808f*/
    if ( v15 >= dword_B7618C ) /*0x798097*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x79809e*/
    if ( dword_B76188 >= dword_B7618C ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x7980b7*/
    if ( v15 < dword_B76188 ) /*0x7980c3*/
      memcpy((char *)dword_B76190 + 4 * v15 + 4, (char *)dword_B76190 + 4 * v15, 4 * (dword_B76188 + 0x3FFFFFFF * v15)); /*0x7980e0*/
    v16 = (char **)((char *)dword_B76190 + 4 * v15); /*0x7980ee*/
    if ( v16 ) /*0x7980f4*/
      String::AssignFromPtr(v16, &dword_B76950); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    return ++dword_B76188; /*0x79810c*/
  }
  return result; /*0x798112*/
}



// ==== 0x00798120  sub_798120  this=-  sig=ida-proto ====
void __cdecl sub_798120()
{
  void **v0; // esi
  int v1; // edi

  v0 = (void **)&byte_B76954; /*0x798122*/
  v1 = 16; /*0x798127*/
  do /*0x798137*/
  {
    DeleteAndZero(--v0); /*0x798131*/
    --v1; /*0x798136*/
  }
  while ( v1 ); /*0x798137*/
}



// ==== 0x007982A0  Network_Delete  this=-  sig=csp ====
void __stdcall sub_7982A0(int a1, int a2, void **Block)
{
  int v3; // edi
  void **v4; // esi

  v3 = a1; /*0x7982a6*/
  if ( a1 > 0 ) /*0x7982ac*/
  {
    v4 = Block; /*0x7982af*/
    do /*0x7982bc*/
    {
      DeleteAndZero(v4++); /*0x7982b3*/
      --v3; /*0x7982bb*/
    }
    while ( v3 ); /*0x7982bc*/
  }
  __3_YAXPAX_Z(Block); /*0x7982c0*/
}



// ==== 0x007982D0  sub_7982D0  this=-  sig=ida-proto ====
int __fastcall sub_7982D0(int a1, DWORD a2)
{
  int v3; // edi
  DWORD v4; // esi

  v3 = 1000 * a1; /*0x7982ef*/
  v4 = WaitForMultipleObjects(a2, &Handles, 0, 0x64u); /*0x7982f4*/
  if ( v4 == 258 ) /*0x7982fc*/
  {
    while ( 1 ) /*0x7982fe*/
    {
      v3 -= 100; /*0x7982fe*/
      if ( v3 <= 0 ) /*0x798303*/
        return 18; /*0x798338*/
      Game::ProcessIdle(); /*0x798305*/
      v4 = WaitForMultipleObjects(a2, &Handles, 0, 0x64u); /*0x798316*/
      if ( v4 != 258 ) /*0x79831e*/
        goto LABEL_4; /*0x79831e*/
    }
  }
  else
  {
LABEL_4:
    ResetEvent(*(&Handles + v4)); /*0x798320*/
    return v4; /*0x79832e*/
  }
}



// ==== 0x00798340  GameOptionsScreenWOL_Helper  this=-  sig=ida-proto ====
BOOL sub_798340()
{
  HANDLE *v0; // esi
  BOOL result; // eax

  v0 = &Handles; /*0x798348*/
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}



// ==== 0x00798360  sub_798360  this=-  sig=ida-proto ====
char sub_798360()
{
  LSTATUS v0; // eax
  LSTATUS v1; // esi
  HKEY phkResult; // [esp+0h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+4h] [ebp-208h] BYREF
  DWORD Type; // [esp+8h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+Ch] [ebp-200h] BYREF

  v0 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult); /*0x79837c*/
  if ( !v0 ) /*0x798384*/
  {
    cbData = 512; /*0x7983a2*/
    v1 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7983b0*/
    LOBYTE(v0) = RegCloseKey(phkResult); /*0x7983b7*/
    if ( !v1 ) /*0x7983c0*/
      LOBYTE(v0) = OpenURLWOL((const char *)Data, 0); /*0x7983c8*/
  }
  return v0; /*0x7983cd*/
}



// ==== 0x007983E0  Setup2DlgProcMultiplayer  this=-  sig=csp ====
int __stdcall Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-208h] BYREF
  DWORD Type; // [esp+18h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+1Ch] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x798409*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x798412*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798425*/
  if ( !result ) /*0x79842c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79843e*/
    if ( a2 > 0x2B ) /*0x798440*/
    {
      if ( a2 == 273 ) /*0x7984ac*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798723*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798833*/
          {
            case 0x6E2u: /*0x798833*/
              g_GameOptionsFlags = 5; /*0x798887*/
              dword_A8B248 = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              g_GameOptionsFlags = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              g_GameOptionsFlags = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              g_GameOptionsFlags = 4; /*0x79880a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x79881c*/
              return 0; /*0x79882b*/
            case 0x55Fu: /*0x798729*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x7987a4*/
              {
                cbData = 512; /*0x7987cd*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7987db*/
                RegCloseKey(phkResult); /*0x7987e2*/
                if ( !v32 ) /*0x7987ea*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x7987f6*/
                  return 0; /*0x798807*/
                }
              }
              break;
            case 0x686u: /*0x798729*/
              g_GameOptionsFlags = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              g_GameOptionsFlags = 1; /*0x798746*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798758*/
              return 0; /*0x798767*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x7984b8*/
      {
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7984d8*/
        v7 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7984da*/
        if ( DlgItem && v7 ) /*0x7984e5*/
          CacheDialogInvalidate(DlgItem, v7); /*0x7984eb*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798504*/
        v9 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x798506*/
        if ( v8 && v9 ) /*0x798511*/
          CacheDialogInvalidate(v8, v9); /*0x798517*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798530*/
        v11 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x798532*/
        if ( v10 && v11 ) /*0x79853d*/
          CacheDialogInvalidate(v10, v11); /*0x798543*/
        v12 = GetDlgItem(hWnd, 1866); /*0x79855c*/
        v13 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x79855e*/
        if ( v12 && v13 ) /*0x798569*/
          CacheDialogInvalidate(v12, v13); /*0x79856f*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798588*/
        v15 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x79858a*/
        if ( v14 && v15 ) /*0x798595*/
          CacheDialogInvalidate(v14, v15); /*0x79859b*/
        v16 = GetDlgItem(hWnd, 1884); /*0x7985b4*/
        v17 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingg_pcx, 0); /*0x7985b6*/
        if ( v16 && v17 ) /*0x7985c1*/
          CacheDialogInvalidate(v16, v17); /*0x7985c7*/
        v18 = GetDlgItem(hWnd, 1885); /*0x7985e0*/
        v19 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingy_pcx, 0); /*0x7985e2*/
        if ( v18 && v19 ) /*0x7985ed*/
          CacheDialogInvalidate(v18, v19); /*0x7985f3*/
        v20 = GetDlgItem(hWnd, 1886); /*0x79860c*/
        v21 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingr_pcx, 0); /*0x79860e*/
        if ( v20 && v21 ) /*0x798619*/
          CacheDialogInvalidate(v20, v21); /*0x79861f*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798638*/
        v23 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x79863a*/
        if ( v22 && v23 ) /*0x798645*/
          CacheDialogInvalidate(v22, v23); /*0x79864b*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798664*/
        v25 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798666*/
        if ( v24 && v25 ) /*0x798671*/
          CacheDialogInvalidate(v24, v25); /*0x798677*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798690*/
        v27 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798692*/
        if ( v26 && v27 ) /*0x79869d*/
          CacheDialogInvalidate(v26, v27); /*0x7986a3*/
        v28 = GetDlgItem(hWnd, 1953); /*0x7986bc*/
        v29 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_cooperat_pcx, 0); /*0x7986be*/
        if ( v28 && v29 ) /*0x7986c9*/
          CacheDialogInvalidate(v28, v29); /*0x7986cf*/
        v30 = GetDlgItem(hWnd, 1954); /*0x7986e8*/
        v31 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x7986ea*/
        if ( v30 ) /*0x7986f1*/
        {
          if ( v31 ) /*0x7986f9*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798703*/
            return 0; /*0x798714*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798442*/
      {
        case 0x2Bu: /*0x798442*/
          Dialog::Resize((char *)a4); /*0x79848f*/
          return 1; /*0x7984a3*/
        case 0xFu: /*0x798442*/
          Dialog::DrawBackground(hWnd); /*0x798466*/
          Dialog::StopBink(hWnd); /*0x79846d*/
          ValidateRect(hWnd, 0); /*0x798475*/
          return 1; /*0x79848a*/
        case 0x14u: /*0x798442*/
          return 1; /*0x798461*/
      }
    }
    return 0; /*0x7988a6*/
  }
  return result; /*0x798452*/
}



// ==== 0x007988C0  GameModeDlgProcMultiplayer  this=-  sig=csp ====
int __stdcall Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-210h] BYREF
  DWORD Type; // [esp+14h] [ebp-20Ch] BYREF
  int v35; // [esp+18h] [ebp-208h]
  DWORD cbData; // [esp+1Ch] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x7988e9*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7988f2*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798905*/
  if ( !result ) /*0x79890c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79891e*/
    if ( a2 > 0x2B ) /*0x798920*/
    {
      if ( a2 == 273 ) /*0x79898c*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798c45*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798d55*/
          {
            case 0x6E2u: /*0x798d55*/
              g_GameOptionsFlags = 5; /*0x798dab*/
              dword_A8B248 = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              g_GameOptionsFlags = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              g_GameOptionsFlags = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              g_GameOptionsFlags = 4; /*0x798d2c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x798d3e*/
              return 0; /*0x798d4d*/
            case 0x55Fu: /*0x798c4b*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, g_Str_WOL_URL_RegKey, 0, 0x20019u, &phkResult) ) /*0x798cc6*/
              {
                cbData = 512; /*0x798cef*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x798cfd*/
                RegCloseKey(phkResult); /*0x798d04*/
                if ( !v32 ) /*0x798d0c*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x798d18*/
                  return 0; /*0x798d29*/
                }
              }
              break;
            case 0x686u: /*0x798c4b*/
              g_GameOptionsFlags = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              g_GameOptionsFlags = 1; /*0x798c68*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&g_WebBrowser) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&g_WebBrowser); /*0x7989b5*/
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&g_WebBrowser, (wchar_t **)1); /*0x7989ca*/
          Type = (DWORD)&rc_ptr<PlayerProfile>::`vftable'; /*0x7989d3*/
          ComPtr::Release(&Type); /*0x7989db*/
        }
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7989fa*/
        v7 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_gt18_pcx, 0); /*0x7989fc*/
        if ( DlgItem && v7 ) /*0x798a07*/
          CacheDialogInvalidate(DlgItem, v7); /*0x798a0d*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798a26*/
        v9 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x798a28*/
        if ( v8 && v9 ) /*0x798a33*/
          CacheDialogInvalidate(v8, v9); /*0x798a39*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798a52*/
        v11 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x798a54*/
        if ( v10 && v11 ) /*0x798a5f*/
          CacheDialogInvalidate(v10, v11); /*0x798a65*/
        v12 = GetDlgItem(hWnd, 1866); /*0x798a7e*/
        v13 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x798a80*/
        if ( v12 && v13 ) /*0x798a8b*/
          CacheDialogInvalidate(v12, v13); /*0x798a91*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798aaa*/
        v15 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x798aac*/
        if ( v14 && v15 ) /*0x798ab7*/
          CacheDialogInvalidate(v14, v15); /*0x798abd*/
        v16 = GetDlgItem(hWnd, 1884); /*0x798ad6*/
        v17 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingg_pcx, 0); /*0x798ad8*/
        if ( v16 && v17 ) /*0x798ae3*/
          CacheDialogInvalidate(v16, v17); /*0x798ae9*/
        v18 = GetDlgItem(hWnd, 1885); /*0x798b02*/
        v19 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingy_pcx, 0); /*0x798b04*/
        if ( v18 && v19 ) /*0x798b0f*/
          CacheDialogInvalidate(v18, v19); /*0x798b15*/
        v20 = GetDlgItem(hWnd, 1886); /*0x798b2e*/
        v21 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_pingr_pcx, 0); /*0x798b30*/
        if ( v20 && v21 ) /*0x798b3b*/
          CacheDialogInvalidate(v20, v21); /*0x798b41*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798b5a*/
        v23 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number1_pcx, 0); /*0x798b5c*/
        if ( v22 && v23 ) /*0x798b67*/
          CacheDialogInvalidate(v22, v23); /*0x798b6d*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798b86*/
        v25 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798b88*/
        if ( v24 && v25 ) /*0x798b93*/
          CacheDialogInvalidate(v24, v25); /*0x798b99*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798bb2*/
        v27 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_number0_pcx, 0); /*0x798bb4*/
        if ( v26 && v27 ) /*0x798bbf*/
          CacheDialogInvalidate(v26, v27); /*0x798bc5*/
        v28 = GetDlgItem(hWnd, 1953); /*0x798bde*/
        v29 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_cooperat_pcx, 0); /*0x798be0*/
        if ( v28 && v29 ) /*0x798beb*/
          CacheDialogInvalidate(v28, v29); /*0x798bf1*/
        v30 = GetDlgItem(hWnd, 1954); /*0x798c0a*/
        v31 = (HWND)HashTable::Find(g_DialogHashTable, g_Str_File_comchief_pcx, 0); /*0x798c0c*/
        if ( v30 ) /*0x798c13*/
        {
          if ( v31 ) /*0x798c1b*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798c25*/
            return 0; /*0x798c36*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798922*/
      {
        case 0x2Bu: /*0x798922*/
          Dialog::Resize((char *)a4); /*0x79896f*/
          return 1; /*0x798983*/
        case 0xFu: /*0x798922*/
          Dialog::DrawBackground(hWnd); /*0x798946*/
          Dialog::StopBink(hWnd); /*0x79894d*/
          ValidateRect(hWnd, 0); /*0x798955*/
          return 1; /*0x79896a*/
        case 0x14u: /*0x798922*/
          return 1; /*0x798941*/
      }
    }
    return 0; /*0x798dca*/
  }
  return result; /*0x798932*/
}



// ==== 0x00798DE0  ObjectClass::RunWOLMainLoop_Read  this=ObjectClass  sig=csp ====
BOOL __usercall sub_798DE0@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  int v2; // esi
  char *v3; // eax
  int v4; // esi
  char *v5; // eax
  BOOL v6; // esi
  int v8; // [esp+1Ch] [ebp-38h]
  int v9; // [esp+28h] [ebp-2Ch]
  int v10; // [esp+34h] [ebp-20h] BYREF
  char v11; // [esp+38h] [ebp-1Ch]
  _DWORD v12[3]; // [esp+3Ch] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+48h] [ebp-Ch] BYREF

  v10 = 0; /*0x798de9*/
  v11 = 0; /*0x798df1*/
  ReadRegistryOptionsWOL(&v10); /*0x798df6*/
  Screen::Capture(1, 0, a1, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x798e27*/
  {
    v2 = *(_DWORD *)g_UIPointerTable; /*0x798e3f*/
    v8 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v3 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v2 + 20))( /*0x798e67*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v3,
      v8,
      -1,
      0,
      0);
    v4 = *(_DWORD *)g_UIPointerTable; /*0x798e7c*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e84*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v4 + 56))( /*0x798e9c*/
      g_UIPointerTable,
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v5,
      v9);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( Flag::IsNot2(&v10) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor(v12); /*0x798eb5*/
    v12[0] = &off_7F7624; /*0x798ece*/
    RunDialog(0x10Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer, (LPARAM)v12); /*0x798ed2*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798ed7*/
    v6 = g_GameOptionsFlags != 0; /*0x798eed*/
    v12[0] = &off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable(v12); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor(v13); /*0x798f04*/
    v13[0] = &off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798f26*/
    v6 = g_GameOptionsFlags != 0; /*0x798f3b*/
    v13[0] = &off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(v13); /*0x798f41*/
  }
  return v6; /*0x798efa*/
}



// ==== 0x00798F50  ObjectClass::MainLobbyDlgProcWOL_Read  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_798F50(HWND hWnd)
{
  _DWORD *PlayerProfile; // eax
  int i; // ebx
  LRESULT v4; // eax
  WPARAM v5; // esi
  wchar_t *v7; // [esp-4h] [ebp-30h]
  void *v8[2]; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-14h] BYREF
  void **v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch]
  int v12; // [esp+24h] [ebp-8h] BYREF
  char v13; // [esp+28h] [ebp-4h]

  ListBox::Clear(hWnd); /*0x798f59*/
  v9 = 0; /*0x798f69*/
  (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 208))(ppv, &v9); /*0x798f71*/
  v12 = 0; /*0x798f7b*/
  v13 = 0; /*0x798f7f*/
  ReadRegistryOptionsWOL(&v12); /*0x798f84*/
  ComPtr::Constructor(&v10); /*0x798f8d*/
  v10 = &rc_ptr<PlayerProfile>::`vftable'; /*0x798f9b*/
  if ( Flag::IsNot2(&v12) ) /*0x798f9f*/
  {
    PlayerProfile = LoadPlayerProfile(v8, (const char **)&g_WebBrowser); /*0x798fb1*/
    ComPtr::Set(&v10, PlayerProfile[1]); /*0x798fbe*/
    v8[0] = &rc_ptr<PlayerProfile>::`vftable'; /*0x798fc7*/
    ComPtr::Release(v8); /*0x798fcb*/
  }
  else
  {
    ComPtr::Set(&v10, dword_B75E4C); /*0x798fdd*/
  }
  if ( v9 > 0 ) /*0x798fe8*/
  {
    for ( i = v9 - 1; i >= 0; --i ) /*0x798fed*/
    {
      FormatLocaleStringWOL((wchar_t **)v8, i); /*0x798ffb*/
      v7 = WideString::GetOrEmpty((wchar_t **)v8); /*0x79900e*/
      if ( i >= 2 ) /*0x799007*/
        v4 = SendMessageA(hWnd, 0x4C2u, 0, (LPARAM)v7); /*0x799026*/
      else
        v4 = SendMessageA(hWnd, 0x4C1u, 0, (LPARAM)v7); /*0x799016*/
      v5 = v4; /*0x799028*/
      SendMessageA(hWnd, 0x151u, v4, i); /*0x799032*/
      if ( v11 && i == *(_DWORD *)(v11 + 16) ) /*0x79903f*/
        SendMessageA(hWnd, 0x14Eu, v5, 0); /*0x79904a*/
      DeleteAndZero::Alt(v8); /*0x799050*/
    }
  }
  v10 = &rc_ptr<PlayerProfile>::`vftable'; /*0x799061*/
  return ComPtr::Release(&v10); /*0x79906a*/
}



// ==== 0x00799080  MainLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_MainLobby_DlgProc(HWND hWnd, LPARAM lParam, int a3, HWND a4)
{
  unsigned int v4; // ebx
  HWND v5; // ebp
  HWND v6; // esi
  unsigned int v7; // edi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // ebx
  LRESULT v11; // eax
  LPARAM v12; // ebp
  bool v13; // al
  BOOL v14; // eax
  HWND v15; // eax
  BOOL v16; // eax
  HWND v17; // eax
  LRESULT v18; // esi
  LRESULT v19; // eax
  LRESULT v20; // esi
  LRESULT v21; // eax
  LRESULT v22; // esi
  LRESULT v23; // eax
  char **v24; // eax
  bool v25; // bl
  LRESULT v26; // eax
  HWND v27; // edi
  LRESULT v28; // ebx
  char **v29; // eax
  char **v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  HWND v33; // esi
  unsigned int v34; // ebx
  HWND DlgItem; // ebp
  wchar_t *String; // eax
  wchar_t *v37; // eax
  LRESULT v38; // edi
  wchar_t *v39; // eax
  LRESULT v40; // eax
  HWND v41; // eax
  int v42; // ecx
  HWND v43; // eax
  LRESULT v44; // eax
  BOOL v45; // ebp
  HWND v46; // eax
  HWND v47; // eax
  HWND v48; // eax
  HWND v49; // eax
  WPARAM v50; // [esp-8h] [ebp-50h]
  BOOL v51; // [esp-4h] [ebp-4Ch]
  BOOL v52; // [esp-4h] [ebp-4Ch]
  char **v53; // [esp-4h] [ebp-4Ch]
  void *v54; // [esp+10h] [ebp-38h] BYREF
  void *v55; // [esp+14h] [ebp-34h] BYREF
  void *v56; // [esp+18h] [ebp-30h] BYREF
  void *v57; // [esp+1Ch] [ebp-2Ch] BYREF
  int v58; // [esp+20h] [ebp-28h] BYREF
  void *v59; // [esp+24h] [ebp-24h] BYREF
  void *v60; // [esp+28h] [ebp-20h] BYREF
  void *v61; // [esp+2Ch] [ebp-1Ch] BYREF
  void *v62; // [esp+30h] [ebp-18h] BYREF
  void *v63; // [esp+34h] [ebp-14h] BYREF
  void **v64; // [esp+38h] [ebp-10h] BYREF
  int v65; // [esp+3Ch] [ebp-Ch]
  void **v66; // [esp+40h] [ebp-8h] BYREF
  int v67; // [esp+44h] [ebp-4h]

  v4 = lParam; /*0x799084*/
  v5 = a4; /*0x799089*/
  v6 = hWnd; /*0x79908e*/
  if ( lParam == 272 && a4 ) /*0x79909d*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x7990a6*/
  v7 = a3; /*0x7990ac*/
  result = BaseDialogProc(v6, v4, a3, (unsigned int)v5); /*0x7990b6*/
  if ( !result ) /*0x7990bd*/
  {
    WindowLongA = GetWindowLongA(v6, 8); /*0x7990c6*/
    if ( v4 > 0x111 ) /*0x7990d2*/
    {
      v34 = v4 - 1175; /*0x7998e2*/
      if ( v34 ) /*0x7998e8*/
      {
        if ( v34 == 86 ) /*0x7998ed*/
        {
          ShowWindow(v6, 0); /*0x7998f6*/
          Dialog::InitWindow(v6, 1); /*0x7998ff*/
          return 0; /*0x79990d*/
        }
      }
      else
      {
        DlgItem = GetDlgItem(v6, 1576); /*0x79991c*/
        ListBox::Clear(DlgItem); /*0x799920*/
        SendMessageA(DlgItem, 0x141u, 9u, 0); /*0x799935*/
        String = GetStringCSF(aGuiDefault, 0, g_Str_File_wonline_cpp, 25247); /*0x799948*/
        WideString::Assign((wchar_t **)&v56, String); /*0x799952*/
        v37 = WideString::GetOrEmpty_Alt((wchar_t **)&v56); /*0x79995b*/
        v38 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v37); /*0x79996b*/
        SendMessageA(DlgItem, 0x151u, v38, -1); /*0x799976*/
        SendMessageA(DlgItem, 0x14Eu, v38, 0); /*0x799981*/
        for ( lParam = 1; lParam <= 32; ++lParam ) /*0x799983*/
        {
          hWnd = 0; /*0x799996*/
          v64 = 0; /*0x79999a*/
          if ( !(*(int (__stdcall **)(LPVOID, LPARAM, HWND *, void ***))(*(_DWORD *)ppv + 144))( /*0x7999c0*/
                  ppv,
                  lParam,
                  &hWnd,
                  &v64)
            && hWnd
            && strlen((const char *)hWnd) )
          {
            String::Assign((char **)&v59, (const char *)hWnd); /*0x7999cf*/
            CharStringToWide((wchar_t **)&a4, (const char **)&v59); /*0x7999dc*/
            DeleteAndZero(&v59); /*0x7999e5*/
            v39 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x7999ee*/
            v40 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v39); /*0x7999fc*/
            SendMessageA(DlgItem, 0x151u, v40, lParam); /*0x799a0a*/
            DeleteAndZero::Alt((void **)&a4); /*0x799a10*/
          }
        }
        v41 = GetDlgItem(v6, 1578); /*0x799a33*/
        MainLobbyDlgProcWOL_Read(v41); /*0x799a37*/
        FillComboBoxRandomOnly(v6, 1697); /*0x799a43*/
        InitGameDropdownColors(v42); /*0x799a48*/
        FillComboBoxFactions(v6, 1698); /*0x799a54*/
        v43 = GetDlgItem(v6, 1577); /*0x799a5f*/
        PopulateWOLUserList(v43); /*0x799a65*/
        LoadPlayerProfile(&v66, (const char **)&g_WebBrowser); /*0x799a73*/
        if ( v67 ) /*0x799a7e*/
          FillPersonaInfoWOL(v67, v6, (char **)&g_WebBrowser, (wchar_t **)1); /*0x799a88*/
        lParam = -1; /*0x799a97*/
        v44 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x799a9f*/
        if ( v44 != -1 ) /*0x799aa4*/
          lParam = SendMessageA(DlgItem, 0x150u, v44, 0); /*0x799ab1*/
        v45 = lParam != -1; /*0x799ac1*/
        v46 = GetDlgItem(v6, 1771); /*0x799aca*/
        EnableWindow(v46, v45); /*0x799acd*/
        v47 = GetDlgItem(v6, 1671); /*0x799ada*/
        EnableWindow(v47, v45); /*0x799add*/
        v48 = GetDlgItem(v6, 1791); /*0x799ae9*/
        EnableWindow(v48, v45); /*0x799aed*/
        ReadAutoLoginWOL((char **)&v57); /*0x799af7*/
        v50 = String::Compare((const char **)&v57, (const char **)&g_WebBrowser); /*0x799b12*/
        v49 = GetDlgItem(v6, 1791); /*0x799b1e*/
        SendMessageA(v49, 0xF1u, v50, 0); /*0x799b21*/
        DeleteAndZero(&v57); /*0x799b27*/
        v66 = &rc_ptr<PlayerProfile>::`vftable'; /*0x799b30*/
        ComPtr::Release(&v66); /*0x799b38*/
        DeleteAndZero::Alt(&v56); /*0x799b41*/
      }
      return 0; /*0x7998ed*/
    }
    if ( v4 != 273 ) /*0x7990d8*/
    {
      switch ( v4 ) /*0x7990dd*/
      {
        case 0xFu: /*0x7990dd*/
          Dialog::DrawBackground(v6); /*0x799105*/
          Dialog::StopBink(v6); /*0x79910c*/
          ValidateRect(v6, 0); /*0x799114*/
          break;
        case 0x14u: /*0x7990dd*/
          break;
        case 0x2Bu: /*0x7990dd*/
          Dialog::Resize((char *)v5); /*0x7990ef*/
          return 1; /*0x799100*/
        default:
          return 0; /*0x7990e7*/
      }
      return 1; /*0x799126*/
    }
    if ( (unsigned __int16)v7 > 0x6A2u ) /*0x799137*/
    {
      switch ( (__int16)v7 ) /*0x79955d*/
      {
        case 1770: /*0x79955d*/
          CreateAccountWOL(v6); /*0x799681*/
          result = 0; /*0x799689*/
          break; /*0x79968f*/
        case 1771: /*0x79955d*/
          v27 = GetDlgItem(v6, 1576); /*0x7996a6*/
          v28 = SendMessageA(v27, 0x147u, 0, 0); /*0x7996b2*/
          if ( v28 != -1 ) /*0x7996b7*/
          {
            unknown_libname_74(&a4); /*0x7996c1*/
            MainLobbyDlgProcWOL_Assign(v27, v28, (int)&a4); /*0x7996cf*/
            ToWideStringCharAlt((char **)&hWnd, (const wchar_t **)&a4); /*0x7996dc*/
            String::ToLower((const char **)&hWnd); /*0x7996e5*/
            ReadAutoLoginWOL((char **)&v57); /*0x7996ee*/
            v29 = String::ToLowerCopy((const char **)&v57, (char **)&v62); /*0x7996fc*/
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v29); /*0x79970f*/
            DeleteAndZero(&v62); /*0x799713*/
            if ( (_BYTE)lParam ) /*0x79971e*/
            {
              String::Assign((char **)&v54, &g_INI_DefaultBuffer); /*0x799729*/
              ReadSettingsWOL(&v54); /*0x799732*/
              DeleteAndZero(&v54); /*0x79973b*/
            }
            LoadConfigWOL((char **)&v56); /*0x799744*/
            v30 = String::ToLowerCopy((const char **)&v56, (char **)&v63); /*0x799752*/
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v30); /*0x799765*/
            DeleteAndZero(&v63); /*0x799769*/
            if ( (_BYTE)lParam ) /*0x799774*/
            {
              String::Assign((char **)&v55, &g_INI_DefaultBuffer); /*0x79977f*/
              SavePersonaConfigWOL((char **)&v55); /*0x799788*/
              DeleteAndZero(&v55); /*0x799791*/
            }
            v31 = SendMessageA(v27, 0x150u, v28, 0); /*0x79979f*/
            if ( v31 != -1 ) /*0x7997a4*/
            {
              (*(void (__stdcall **)(LPVOID, LRESULT, char *, char *, int))(*(_DWORD *)ppv + 148))( /*0x7997bc*/
                ppv,
                v31,
                &g_INI_DefaultBuffer,
                &g_INI_DefaultBuffer,
                1);
              SendMessageA(v27, 0x144u, v28, 0); /*0x7997cb*/
            }
            SendMessageA(v27, 0x14Eu, 0xFFFFFFFF, 0); /*0x7997d7*/
            DeleteAndZero(&v56); /*0x7997dd*/
            DeleteAndZero(&v57); /*0x7997e6*/
            DeleteAndZero((void **)&hWnd); /*0x7997ef*/
            DeleteAndZero::Alt((void **)&a4); /*0x7997f8*/
          }
          MainLobbyDlgProcWOL_Get(v6); /*0x799801*/
          InvalidateRect(v27, 0, 0); /*0x799811*/
          v32 = GetDlgItem(v6, 1771); /*0x79981b*/
          EnableWindow(v32, 0); /*0x799822*/
          SendMessageA(v27, 0x14Eu, 0, 0); /*0x799832*/
          LoadAccountInfoWOL(&v64); /*0x799838*/
          if ( v65 ) /*0x799843*/
          {
            String::Assign((char **)&v58, &g_INI_DefaultBuffer); /*0x79984e*/
            FillPersonaInfoWOL(v65, v6, (char **)&v58, 0); /*0x79985f*/
            DeleteAndZero((void **)&v58); /*0x799868*/
            v33 = GetDlgItem(v6, 1791); /*0x79987b*/
            SendMessageA(v33, 0x49Du, 0, 1); /*0x799885*/
            EnableWindow(v33, 0); /*0x79988a*/
            SendMessageA(v33, 0xF1u, 0, 0); /*0x79989a*/
            SendMessageA(v33, 0x49Du, 0, 0); /*0x7998a6*/
            InvalidateRect(v33, 0, 0); /*0x7998ad*/
          }
          v64 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7998b3*/
          ComPtr::Release(&v64); /*0x7998bb*/
          result = 0; /*0x7998c3*/
          break; /*0x7998c9*/
        case 1772: /*0x79955d*/
          WebBrowser::ShowDialog(g_INI_Key_Manage); /*0x7998d1*/
          result = 0; /*0x7998d9*/
          break; /*0x7998df*/
        case 1791: /*0x79955d*/
          if ( SendMessageA(v5, 0xF0u, 0, 0) == 1 ) /*0x79958d*/
          {
            ReadSettingsWOL(&g_WebBrowser); /*0x799594*/
            result = 0; /*0x79959c*/
          }
          else
          {
            ReadAutoLoginWOL((char **)&lParam); /*0x7995a9*/
            v53 = String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v61); /*0x7995bd*/
            v24 = String::ToLowerCopy((const char **)&lParam, (char **)&v60); /*0x7995c7*/
            v25 = String::Compare((const char **)v24, (const char **)v53); /*0x7995d7*/
            DeleteAndZero(&v60); /*0x7995d9*/
            DeleteAndZero(&v61); /*0x7995e2*/
            if ( v25 ) /*0x7995e9*/
            {
              String::Assign((char **)&a3, &g_INI_DefaultBuffer); /*0x7995f4*/
              ReadSettingsWOL(&a3); /*0x7995fd*/
              DeleteAndZero((void **)&a3); /*0x799606*/
            }
            DeleteAndZero((void **)&lParam); /*0x79960f*/
            result = 0; /*0x799617*/
          }
          break; /*0x7995a2*/
        case 1907: /*0x79955d*/
          LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x799629*/
          if ( v65 ) /*0x799634*/
          {
            v26 = SendMessageA(v5, 0xF0u, 0, 0); /*0x799640*/
            MainLobbyDlgProcWOL_Helper(v26 == 1); /*0x79964f*/
            SaveProfileWOL(v65, (const char **)&g_WebBrowser); /*0x79965d*/
          }
          goto LABEL_67; /*0x79965d*/
        case 1955: /*0x79955d*/
          WebBrowser::ShowDialog(g_INI_Key_Ladder); /*0x799569*/
          result = 0; /*0x799571*/
          break; /*0x799577*/
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)v7 != 1698 ) /*0x79913d*/
      {
        switch ( (__int16)v7 ) /*0x79915a*/
        {
          case 1576: /*0x79915a*/
            if ( HIWORD(v7) != 1 ) /*0x7991cb*/
              return 0; /*0x7991cb*/
            v10 = GetDlgItem(v6, 1791); /*0x7991e5*/
            SendMessageA(v10, 0x49Du, 0, 1); /*0x7991ef*/
            ShowWindow(v10, 0); /*0x7991f4*/
            v11 = SendMessageA(v5, 0x147u, 0, 0); /*0x799204*/
            lParam = -1; /*0x799209*/
            if ( v11 != -1 ) /*0x799211*/
              lParam = SendMessageA(v5, 0x150u, v11, 0); /*0x79921e*/
            DeleteAndZero::Alt2((void **)&g_WebBrowser); /*0x799227*/
            v12 = lParam; /*0x79922c*/
            if ( lParam != -1 ) /*0x799233*/
            {
              lParam = 0; /*0x79923b*/
              a4 = 0; /*0x79923f*/
              if ( !(*(int (__stdcall **)(LPVOID, LPARAM, LPARAM *, HWND *))(*(_DWORD *)ppv + 144))( /*0x799252*/
                      ppv,
                      v12,
                      &lParam,
                      &a4) )
                String::Assign_Alt((void **)&g_WebBrowser, (const char *)lParam); /*0x799266*/
            }
            LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x799274*/
            ReadAutoLoginWOL((char **)&hWnd); /*0x79927d*/
            EnableWindow(v10, v12 != -1); /*0x79928c*/
            v13 = String::Compare((const char **)&hWnd, (const char **)&g_WebBrowser); /*0x79929d*/
            SendMessageA(v10, 0xF1u, v13, 0); /*0x7992af*/
            SendMessageA(v10, 0x49Du, 0, 0); /*0x7992bb*/
            ShowWindow(v10, 5); /*0x7992c0*/
            InvalidateRect(v10, 0, 0); /*0x7992cb*/
            if ( v65 ) /*0x7992d7*/
              FillPersonaInfoWOL(v65, v6, (char **)&g_WebBrowser, 0); /*0x7992e1*/
            v14 = v12 != -1 && String::Length((const char **)&g_WebBrowser); /*0x799300*/
            v51 = v14; /*0x799308*/
            v15 = GetDlgItem(v6, 1771); /*0x79930f*/
            EnableWindow(v15, v51); /*0x799318*/
            v16 = v12 != -1 && String::Length((const char **)&g_WebBrowser); /*0x799334*/
            v52 = v16; /*0x799336*/
            v17 = GetDlgItem(v6, 1671); /*0x79933d*/
            EnableWindow(v17, v52); /*0x799340*/
            DeleteAndZero((void **)&hWnd); /*0x799346*/
            v64 = &rc_ptr<PlayerProfile>::`vftable'; /*0x79934f*/
            ComPtr::Release(&v64); /*0x799357*/
            return 0; /*0x799365*/
          case 1577: /*0x79915a*/
            if ( HIWORD(v7) != 1 ) /*0x79936c*/
              return 0; /*0x79936c*/
            unknown_libname_73(&lParam); /*0x799376*/
            GetDialogText(v5, (void **)&lParam); /*0x799381*/
            LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x79938f*/
            if ( v65 ) /*0x79939a*/
            {
              WOLOption::SetValue(&lParam); /*0x7993a1*/
              SaveProfileWOL(v65, (const char **)&g_WebBrowser); /*0x7993af*/
            }
            v64 = &rc_ptr<PlayerProfile>::`vftable'; /*0x7993b8*/
            ComPtr::Release(&v64); /*0x7993c0*/
            DeleteAndZero((void **)&lParam); /*0x7993c9*/
            return 0; /*0x7993d7*/
          case 1578: /*0x79915a*/
            if ( HIWORD(v7) != 1 ) /*0x7993de*/
              return 0; /*0x7993de*/
            v18 = 0; /*0x7993ea*/
            v19 = SendMessageA(v5, 0x147u, 0, 0); /*0x7993f4*/
            if ( v19 != -1 ) /*0x7993f9*/
              v18 = SendMessageA(v5, 0x150u, v19, 0); /*0x799405*/
            LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x799410*/
            if ( v65 ) /*0x79941b*/
            {
              GadgetClass::TrackState(v65, v18, 3); /*0x799420*/
              SaveProfileWOL(v65, (const char **)&g_WebBrowser); /*0x79942e*/
            }
            goto LABEL_67; /*0x79942e*/
          case 1670: /*0x79915a*/
            g_GameOptionsFlags = 0; /*0x7991a4*/
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v6, 1670); /*0x7991b8*/
            return 0; /*0x7991c4*/
          case 1671: /*0x79915a*/
            g_GameOptionsFlags = 5; /*0x799161*/
            dword_A8B248 = 6; /*0x79916b*/
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v6, 1671); /*0x79917f*/
            return 0; /*0x79918b*/
          case 1672: /*0x79915a*/
            WebBrowser::ShowDialog(g_INI_Key_Battleclans); /*0x799193*/
            return 0; /*0x7991a1*/
          case 1697: /*0x79915a*/
            if ( HIWORD(v7) != 1 ) /*0x799454*/
              return 0; /*0x799454*/
            v20 = -2; /*0x79946a*/
            v21 = SendMessageA(v5, 0x147u, 0, 0); /*0x79946f*/
            if ( v21 != -1 ) /*0x799474*/
              v20 = SendMessageA(v5, 0x150u, v21, 0); /*0x799481*/
            LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x79948c*/
            if ( v65 ) /*0x799497*/
            {
              MainLobbyDlgProcWOL_Helper_77A780(v20); /*0x79949a*/
              SaveProfileWOL(v65, (const char **)&g_WebBrowser); /*0x7994a8*/
            }
            goto LABEL_67; /*0x7994a8*/
          default:
            return 0;
        }
      }
      if ( HIWORD(v7) != 1 ) /*0x7994ce*/
        return 0; /*0x799b46*/
      v22 = -2; /*0x7994e4*/
      v23 = SendMessageA(v5, 0x147u, 0, 0); /*0x7994e9*/
      if ( v23 != -1 ) /*0x7994ee*/
        v22 = SendMessageA(v5, 0x150u, v23, 0); /*0x7994fb*/
      LoadPlayerProfile(&v64, (const char **)&g_WebBrowser); /*0x799506*/
      if ( v65 ) /*0x799511*/
      {
        MainLobbyDlgProcWOL_Helper_77A7A0(v22); /*0x799514*/
        SaveProfileWOL(v65, (const char **)&g_WebBrowser); /*0x799522*/
      }
LABEL_67:
      v64 = &rc_ptr<PlayerProfile>::`vftable'; /*0x799662*/
      ComPtr::Release(&v64); /*0x79966e*/
      return 0; /*0x799676*/
    }
  }
  return result; /*0x7990f4*/
}



// ==== 0x00799CD0  RunWOLMainLoop_Helper  this=-  sig=ida-proto ====
__int64 sub_799CD0()
{
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  g_WOL_AuthPool = 0; /*0x799cf4*/
  g_WOL_ChatState = 0; /*0x799cfa*/
  g_WOL_State = 0; /*0x799d00*/
  g_WOL_ChannelState = 0; /*0x799d06*/
  return 0; /*0x799d0c*/
}



// ==== 0x00799D10  Dialog::CloseAll  this=Dialog  sig=ida-proto ====
HWND Dialog_CloseAll()
{
  HWND result; // eax

  for ( result = Dialog::GetCurrent(); result; result = Dialog::GetCurrent() ) /*0x799d17*/
    CloseDialog(result, 0); /*0x799d1d*/
  return result; /*0x799d2b*/
}



// ==== 0x00799D30  ObjectClass::RunWOLMainLoop_Init  this=ObjectClass  sig=csp ====
int sub_799D30()
{
  int result; // eax
  wchar_t *StringCSF; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  BOOL v8; // esi
  int v9; // [esp+18h] [ebp-28h]
  int v10; // [esp+24h] [ebp-1Ch]
  void *v11; // [esp+30h] [ebp-10h] BYREF
  _DWORD v12[3]; // [esp+34h] [ebp-Ch] BYREF

  result = LoginFlowWOL_Reset(); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((wchar_t **)&v11, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v11, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v11); /*0x799d75*/
    v2 = 8960; /*0x799d7f*/
    if ( g_GameOptionsFlags != 3 ) /*0x799d87*/
      v2 = 10496; /*0x799d89*/
    v3 = LoginWOL(v2); /*0x799d8e*/
    if ( v3 ) /*0x799d96*/
    {
      if ( v3 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( g_UIPointerTable && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x799dd2*/
      {
        v4 = *(_DWORD *)g_UIPointerTable; /*0x799dea*/
        v9 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799dfa*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v4 + 20))( /*0x799e12*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v5,
          v9,
          -1,
          0,
          0);
        v6 = *(_DWORD *)g_UIPointerTable; /*0x799e27*/
        v10 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799e2f*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v6 + 56))( /*0x799e47*/
          g_UIPointerTable,
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v7,
          v10);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor(v12); /*0x799e53*/
      v12[0] = &off_7F7624; /*0x799e6c*/
      RunDialog(0x114u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL, (LPARAM)v12); /*0x799e70*/
      System_Init_72CA10(); /*0x799e75*/
      v8 = g_GameOptionsFlags != 0; /*0x799e8b*/
      v12[0] = &off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable(v12); /*0x799e91*/
      return v8; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/
}



// ==== 0x00799EA0  OptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_OptionsDlgProc(HWND hWnd, const char *lParam, int a3, int hCtl)
{
  HWND v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // eax
  bool v11; // dl
  int i; // ebx
  char *v13; // eax
  char v14; // al
  HWND v15; // edi
  char *v16; // eax
  unsigned int v17; // eax
  HWND v18; // edi
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // edi
  char *v22; // eax
  LRESULT v23; // ebp
  LRESULT v24; // eax
  HWND v25; // ebp
  char *v26; // eax
  unsigned int v27; // eax
  HWND v28; // ebp
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // esi
  LRESULT v32; // eax
  LRESULT v33; // ecx
  LRESULT v34; // edi
  HWND v35; // esi
  LRESULT v36; // eax
  LRESULT v37; // edi
  HWND v38; // esi
  LRESULT v39; // eax
  HWND v40; // eax
  unsigned int v41; // eax
  HWND v42; // edi
  int v43; // ebx
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // edi
  char *v47; // eax
  char **v4... [23949 chars total]



// ==== 0x0079AE00  sub_79AE00  this=-  sig=csp ====
int __stdcall sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  UINT v6; // eax

  if ( a2 == 272 ) /*0x79ae16*/
  {
    if ( a4 ) /*0x79ae1a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x79ae23*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x79ae33*/
  if ( !result ) /*0x79ae3a*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79ae4c*/
    if ( a2 > 0x2B ) /*0x79ae4e*/
    {
      if ( a2 == 273 ) /*0x79aeaa*/
      {
        if ( (unsigned __int16)a3 == 1 ) /*0x79aeb3*/
        {
          ReadSettingsWOL(&g_WebBrowser); /*0x79aeec*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x79aef8*/
        }
        else if ( (unsigned __int16)a3 == 2 ) /*0x79aeb6*/
        {
          v6 = IsDlgButtonChecked(hWnd, 1785); /*0x79aebe*/
          ReadWOLGameOption(v6 != 1); /*0x79aecf*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x79aedb*/
          return 0; /*0x79aee4*/
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x79ae50*/
      {
        case 0x2Bu: /*0x79ae50*/
          Dialog::Resize((char *)a4); /*0x79ae93*/
          return 1; /*0x79aea1*/
        case 0xFu: /*0x79ae50*/
          Dialog::DrawBackground(hWnd); /*0x79ae6e*/
          Dialog::StopBink(hWnd); /*0x79ae75*/
          ValidateRect(hWnd, 0); /*0x79ae7d*/
          return 1; /*0x79ae8c*/
        case 0x14u: /*0x79ae50*/
          return 1; /*0x79ae69*/
      }
    }
    return 0; /*0x79aefb*/
  }
  return result; /*0x79ae60*/
}



// ==== 0x0079AF10  ObjectClass::FillBuddyListWOL  this=ObjectClass  sig=csp ====
int __thiscall WOL_FillBuddyList(HWND hDlg)
{
  LRESULT (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // ebp
  HWND DlgItem; // ebx
  int v3; // edi
  int v4; // esi
  int *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *String; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  int v13; // esi
  const void *v14; // esi
  int v15; // eax
  int v16; // esi
  wchar_t **v17; // eax
  wchar_t *v18; // eax
  char *v19; // eax
  int v20; // esi
  wchar_t *v21; // eax
  const void *v22; // esi
  signed int v23; // ebp
  signed int v24; // eax
  int v25; // ebx
  char *v26; // eax
  char v27; // bl
  BOOL v28; // ecx
  void *v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  wchar_t *v32; // eax
  int v33; // esi
  LRESULT v34; // esi
  char *v35; // eax
  unsigned int v36; // eax
  HWND v37; // esi
  HWND v38; // eax
  HWND v39; // eax
  int v40; // esi
  HWND v41; // eax
  wchar_t *v43; // [esp-4h] [ebp-41Ch]
  wchar_t *v44; // [esp-4h] [ebp-41Ch]
  const wchar_t *v45; // [esp-4h] [ebp-41Ch]
  BOOL v46; // [esp-4h] [ebp-41Ch]
  int v47; // [esp-4h] [ebp-41Ch]
  int v48; // [esp-4h] [ebp-41Ch]
  void *v49; // [esp+10h] [ebp-408h] BYREF
  int v50; // [esp+14h] [ebp-404h]
  int v51; // [esp+18h] [ebp-400h] BYREF
  void *v52; // [esp+1Ch] [ebp-3FCh] BYREF
  int v53; // [esp+20h] [ebp-3F8h] BYREF
  LPARAM v54; // [esp+24h] [ebp-3F4h] BYREF
  void *v55; // [esp+28h] [ebp-3F0h] BYREF
  void *v56; // [esp+2Ch] [ebp-3ECh] BYREF
  int v57; // [esp+30h] [ebp-3E8h]
  HWND hDlga; // [esp+3Ch] [ebp-3DCh]
  int v59; // [esp+40h] [ebp-3D8h] BYREF
  void *v60; // [esp+44h] [ebp-3D4h] BYREF
  void *v61; // [esp+48h] [ebp-3D0h] BYREF
  HWND hWnd; // [esp+4Ch] [ebp-3CCh]
  LRESULT v63; // [esp+50h] [ebp-3C8h]
  int v64; // [esp+54h] [ebp-3C4h] BYREF
  LPARAM lParam; // [esp+58h] [ebp-3C0h] BYREF
  void *v66; // [esp+5Ch] [ebp-3BCh] BYREF
  void *v67; // [esp+60h] [ebp-3B8h] BYREF
  int v68; // [esp+64h] [ebp-3B4h]
  LPARAM v69; // [esp+70h] [ebp-3A8h] BYREF
  void *v70; // [esp+74h] [ebp-3A4h] BYREF
  void *v71[2]; // [esp+78h] [ebp-3A0h] BYREF
  int v72; // [esp+80h] [ebp-398h]
  LPARAM v73; // [esp+88h] [ebp-390h] BYREF
  void *v74; // [esp+8Ch] [ebp-38Ch] BYREF
  void *v75[4]; // [esp+90h] [ebp-388h] BYREF
  void *v76; // [esp+A0h] [ebp-378h] BYREF
  int v77[2]; // [esp+A4h] [ebp-374h] BYREF
  LPARAM v78; // [esp+ACh] [ebp-36Ch] BYREF
  void *v79; // [esp+B0h] [ebp-368h] BYREF
  void *v80[4]; // [esp+B4h] [ebp-364h] BYREF
  LPARAM v81; // [esp+C4h] [ebp-354h] BYREF
  void *v82; // [esp+C8h] [ebp-350h] BYREF
  void *v83[4]; // [esp+CCh] [ebp-34Ch] BYREF
  _DWORD v84[67]; // [esp+DCh] [ebp-33Ch] BYREF
  wchar_t Buffer[80]; // [esp+1E8h] [ebp-230h] BYREF
  _DWORD v86[67]; // [esp+288h] [ebp-190h] BYREF
  char Destination[132]; // [esp+394h] [ebp-84h] BYREF

  hDlga = hDlg; /*0x79af20*/
  v1 = SendMessageA; /*0x79af2a*/
  DlgItem = GetDlgItem(hDlg, 1673); /*0x79af30*/
  hWnd = DlgItem; /*0x79af3c*/
  SendMessageA(DlgItem, 0x49Du, 0, 1); /*0x79af40*/
  v50 = 0; /*0x79af49*/
  if ( g_WindowManager > 0 ) /*0x79af51*/
  {
    while ( 1 ) /*0x79af5b*/
    {
      unknown_libname_73(&v49); /*0x79af5b*/
      if ( v50 >= 0 && v50 < g_WindowManager ) /*0x79af6e*/
        String::Reassign((char **)&v49, (const char **)g_WOL_LoginQueue + v50); /*0x79af7e*/
      CharStringToWide((wchar_t **)&v60, (const char **)&v49); /*0x79af8b*/
      v3 = 0; /*0x79af95*/
      if ( dword_B76994 ) /*0x79af99*/
      {
        v4 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&v49) & ((1 << dword_B7699C) - 1))); /*0x79afba*/
        if ( v4 ) /*0x79afbf*/
        {
          while ( !String::Compare((const char **)v4, (const char **)&v49) ) /*0x79afcf*/
          {
            v4 = *(_DWORD *)(v4 + 8); /*0x79afd1*/
            if ( !v4 ) /*0x79afd6*/
              goto LABEL_12; /*0x79afd6*/
          }
          v5 = (int *)(v4 + 4); /*0x79afde*/
          if ( v5 ) /*0x79afe3*/
            v3 = *v5; /*0x79afe5*/
        }
      }
LABEL_12:
      v6 = String::GetOrEmpty_Alt((char **)&v49); /*0x79afe7*/
      v63 = v1(DlgItem, 0x4C5u, 0, (LPARAM)v6); /*0x79afff*/
      if ( v63 == -1 ) /*0x79b003*/
      {
        v7 = String::GetOrEmpty_Alt((char **)&v49); /*0x79b009*/
        v63 = v1(DlgItem, 0x4C8u, 0, (LPARAM)v7); /*0x79b018*/
      }
      Gadget::InitProperties(&lParam); /*0x79b020*/
      lParam = 1; /*0x79b029*/
      v8 = WideString::GetOrEmpty((wchar_t **)&v60); /*0x79b031*/
      WideString::Reassign(&v66, v8); /*0x79b03b*/
      WideString::Reassign(&v67, &g_TypeClass_DefaultString); /*0x79b049*/
      Gadget::InitProperties(&v54); /*0x79b052*/
      v54 = 1; /*0x79b05b*/
      WideString::Reassign(&v56, &g_TypeClass_DefaultString); /*0x79b068*/
      Gadget::InitProperties(&v69); /*0x79b071*/
      v69 = 0; /*0x79b07a*/
      WideString::Reassign(&v70, &g_TypeClass_DefaultString); /*0x79b083*/
      WideString::Reassign(v71, &g_TypeClass_DefaultString); /*0x79b091*/
      Gadget::InitProperties(&v78); /*0x79b09d*/
      v78 = 0; /*0x79b0a9*/
      WideString::Reassign(&v79, &g_TypeClass_DefaultString); /*0x79b0b5*/
      WideString::Reassign(v80, &g_TypeClass_DefaultString); /*0x79b0c6*/
      Gadget::InitProperties(&v73); /*0x79b0d2*/
      v73 = 0; /*0x79b0de*/
      WideString::Reassign(&v74, &g_TypeClass_DefaultString); /*0x79b0ea*/
      WideString::Reassign(v75, &g_TypeClass_DefaultString); /*0x79b0fb*/
      Gadget::InitProperties(&v81); /*0x79b107*/
      v81 = 0; /*0x79b113*/
      WideString::Reassign(&v82, &g_TypeClass_DefaultString); /*0x79b11f*/
      WideString::Reassign(v83, &g_TypeClass_DefaultString); /*0x79b130*/
      switch ( v3 ) /*0x79b141*/
      {
        case 1: /*0x79b141*/
          String = GetStringCSF((wchar_t *)aWolBuddydisabl, 0, g_Str_File_wonline_cpp, 26557); /*0x79b159*/
          goto LABEL_73; /*0x79b159*/
        case 2: /*0x79b141*/
          String = GetStringCSF((wchar_t *)aWolBuddyofflin, 0, g_Str_File_wonline_cpp, 26563); /*0x79b16f*/
          goto LABEL_73; /*0x79b16f*/
        case 3: /*0x79b141*/
          v10 = GetStringCSF(aWolBuddyonline, 0, g_Str_File_wonline_cpp, 26569); /*0x79b179*/
          goto LABEL_24; /*0x79b179*/
        case 4: /*0x79b141*/
          memset(v86, 0, sizeof(v86)); /*0x79b1b6*/
          if ( !dword_B7660C ) /*0x79b1bf*/
            goto LABEL_23; /*0x79b1bf*/
          v13 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&v49) & ((1 << dword_B76614) - 1))); /*0x79b1e0*/
          if ( !v13 ) /*0x79b1e5*/
            goto LABEL_23; /*0x79b1e5*/
          do /*0x79b1ff*/
          {
            if ( String::Compare((const char **)v13, (const char **)&v49) ) /*0x79b1ee*/
            {
              v14 = (const void *)(v13 + 4); /*0x79b22f*/
              if ( v14 ) /*0x79b234*/
                qmemcpy(v86, v14, sizeof(v86)); /*0x79b242*/
              if ( v86[0] || strncmp((const char *)&v86[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x79b270*/
              {
                v19 = CharToWideString(&v86[13]); /*0x79b32c*/
                WideString::Reassign(&v55, (wchar_t *)v19); /*0x79b336*/
                v12 = 16728064; /*0x79b33b*/
              }
              else
              {
                v15 = atol((const char *)&v86[13] + strlen(g_Str_Lob_41_)); /*0x79b295*/
                v16 = v15 / 8; /*0x79b2a7*/
                WideString::Assign((wchar_t **)&v52, (&dword_B73E1C)[v15 % 8]); /*0x79b2c3*/
                if ( v16 ) /*0x79b2ca*/
                {
                  WideString::Append2((wchar_t **)&v52, (wchar_t *)asc_82083C); /*0x79b2d5*/
                  v17 = FormatWideString((wchar_t **)&v76, (const wchar_t *)(v16 + 1)); /*0x79b2e4*/
                  WideString::Append((wchar_t **)&v52, (const wchar_t **)v17); /*0x79b2ee*/
                  DeleteAndZero::Alt(&v76); /*0x79b2fa*/
                }
                v18 = WideString::GetOrEmpty((wchar_t **)&v52); /*0x79b303*/
                WideString::Reassign(&v55, v18); /*0x79b30d*/
                DeleteAndZero::Alt(&v52); /*0x79b316*/
                v12 = 16728064; /*0x79b31b*/
              }
              goto LABEL_74; /*0x79b320*/
            }
            v13 = *(_DWORD *)(v13 + 272); /*0x79b1f7*/
          }
          while ( v13 ); /*0x79b1ff*/
LABEL_23:
          v10 = GetStringCSF(aWolBuddyonline, 0, g_Str_File_wonline_cpp, 26601); /*0x79b201*/
LABEL_24:
          WideString::Reassign(&v55, v10); /*0x79b217*/
          v12 = 61680; /*0x79b221*/
LABEL_74:
          v57 = v12; /*0x79b77f*/
          v68 = v12; /*0x79b783*/
          goto LABEL_75; /*0x79b783*/
        case 5: /*0x79b141*/
          memset(v84, 0, sizeof(v84)); /*0x79b353*/
          if ( !dword_B7660C ) /*0x79b35c*/
            goto LABEL_37; /*0x79b35c*/
          v20 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&v49) & ((1 << dword_B76614) - 1))); /*0x79b37d*/
          if ( !v20 ) /*0x79b382*/
            goto LABEL_37; /*0x79b382*/
          break; /*0x79b382*/
        case 6: /*0x79b141*/
          v32 = GetStringCSF(aWolBuddyplayin, 0, g_Str_File_wonline_cpp, 26687); /*0x79b744*/
          WideString::Reassign(&v55, v32); /*0x79b74e*/
          v12 = 3166463; /*0x79b753*/
          goto LABEL_74; /*0x79b758*/
        case 7: /*0x79b141*/
        case 8: /*0x79b141*/
          v11 = GetStringCSF(aWolBuddyquickm, 0, g_Str_File_wonline_cpp, 26576); /*0x79b18f*/
          WideString::Reassign(&v55, v11); /*0x79b199*/
          v12 = 8453888; /*0x79b19e*/
          goto LABEL_74; /*0x79b1a3*/
        default:
          String = GetStringCSF(aWolBuddyunknow, 0, g_Str_File_wonline_cpp, 26693); /*0x79b76b*/
LABEL_73:
          WideString::Reassign(&v55, String); /*0x79b770*/
          v12 = (int)&off_808080; /*0x79b77a*/
          goto LABEL_74; /*0x79b77a*/
      }
      while ( !String::Compare((const char **)v20, (const char **)&v49) ) /*0x79b392*/
      {
        v20 = *(_DWORD *)(v20 + 272); /*0x79b394*/
        if ( !v20 ) /*0x79b39c*/
          goto LABEL_37; /*0x79b39c*/
      }
      v22 = (const void *)(v20 + 4); /*0x79b3de*/
      if ( v22 ) /*0x79b3e3*/
        qmemcpy(v84, v22, sizeof(v84)); /*0x79b3f1*/
      String::Assign((char **)&v61, (const char *)&v84[13]); /*0x79b3ff*/
      v23 = 0; /*0x79b412*/
      memset(v84, 0, sizeof(v84)); /*0x79b414*/
      v24 = g_WOL_ChatState; /*0x79b416*/
      if ( (int)g_WOL_ChatState <= 0 ) /*0x79b41d*/
      {
LABEL_47:
        v27 = 0; /*0x79b471*/
        memset(v84, 0, sizeof(v84)); /*0x79b481*/
      }
      else
      {
        v25 = 0; /*0x79b41f*/
        while ( 1 ) /*0x79b421*/
        {
          if ( v25 >= 0 && v23 < v24 ) /*0x79b427*/
            qmemcpy(v84, (char *)g_WOL_ConnectionHandler + v25, sizeof(v84)); /*0x79b43d*/
          v26 = String::GetOrEmpty_Alt((char **)&v61); /*0x79b443*/
          if ( !_strcmpi(&v84[13], v26) ) /*0x79b451*/
            break; /*0x79b451*/
          v24 = g_WOL_ChatState; /*0x79b461*/
          ++v23; /*0x79b466*/
          v25 += 268; /*0x79b467*/
          if ( v23 >= (int)g_WOL_ChatState ) /*0x79b46f*/
            goto LABEL_47; /*0x79b46f*/
        }
        v27 = 1; /*0x79b526*/
      }
      DeleteAndZero(&v61); /*0x79b487*/
      if ( !v27 ) /*0x79b48e*/
      {
LABEL_37:
        v21 = GetStringCSF(aWolBuddyonline, 0, g_Str_File_wonline_cpp, 26680); /*0x79b39e*/
        WideString::Reassign(&v55, v21); /*0x79b3b9*/
        v1 = SendMessageA; /*0x79b3be*/
        DlgItem = hWnd; /*0x79b3c9*/
        v57 = 61680; /*0x79b3cd*/
        v68 = 61680; /*0x79b3d1*/
        goto LABEL_75; /*0x79b3d5*/
      }
      strncpy(Destination, (const char *)&v84[56], 0x80u); /*0x79b4a9*/
      v77[1] = 0; /*0x79b4b7*/
      v77[0] = 0; /*0x79b4be*/
      v59 = 0; /*0x79b4c5*/
      v53 = 0; /*0x79b4c9*/
      v51 = 0; /*0x79b4cd*/
      unknown_libname_73(&v64); /*0x79b4d1*/
      ParseStringCommaInts(Destination, (int)v77, (int)&v59, (int)&v53, (int)&v51, (int)&v64); /*0x79b500*/
      v28 = v53 || v51; /*0x79b52d*/
      swprintf(Buffer, (const size_t)aHsDD, (const wchar_t *const)&v84[13], v59 + v84[3] - v53, v84[2] - v28); /*0x79b552*/
      WideString::Reassign(&v55, Buffer); /*0x79b566*/
      v57 = 16776960; /*0x79b575*/
      v68 = 16776960; /*0x79b579*/
      v69 = 2; /*0x79b584*/
      if ( v84[5] ) /*0x79b58a*/
      {
        v72 = HashTable::Find(g_DialogHashTable, g_Str_File_woltrny_pcx, 0); /*0x79b5ad*/
        v43 = GetStringCSF(aTxtTournamentG, 0, g_Str_File_wonline_cpp, 26637); /*0x79b5b9*/
        WideString::Reassign(v71, v43); /*0x79b5ba*/
      }
      else if ( (v84[8] & 0x100) != 0 ) /*0x79b5c7*/
      {
        v72 = HashTable::Find(g_DialogHashTable, g_Str_File_wolclan_pcx, 0); /*0x79b5e9*/
        v44 = GetStringCSF(aTxtBattleclanG, 0, g_Str_File_wonline_cpp, 26640); /*0x79b5f5*/
        WideString::Reassign(v71, v44); /*0x79b5f6*/
      }
      else
      {
        v72 = HashTable::Find(g_DialogHashTable, aGt18Bmp, 0); /*0x79b607*/
        WideString::Reassign(v71, &g_TypeClass_DefaultString); /*0x79b617*/
      }
      if ( (v84[8] & 0x600) != 0 ) /*0x79b62a*/
        break; /*0x79b62a*/
      if ( !v53 && v51 ) /*0x79b65c*/
      {
        v73 = 2; /*0x79b65f*/
        v29 = (void *)HashTable::Find(g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x79b670*/
LABEL_67:
        v75[2] = v29; /*0x79b675*/
      }
      if ( (v84[7] & 0x100) != 0 ) /*0x79b686*/
      {
        v78 = 2; /*0x79b693*/
        v80[2] = (void *)HashTable::Find(g_DialogHashTable, g_Str_File_wolpriv_pcx, 0); /*0x79b6b0*/
        v30 = GetStringCSF(aTxtGamePasswor, 0, g_Str_File_wonline_cpp, 26672); /*0x79b6b7*/
        WideString::Reassign(v80, v30); /*0x79b6c4*/
      }
      v45 = (const wchar_t *)v84[10]; /*0x79b6d2*/
      v81 = 3; /*0x79b6e2*/
      v83[3] = (void *)v84[10]; /*0x79b6ed*/
      v31 = GetStringCSF(aWolGameping, 0, g_Str_File_wonline_cpp, 26677); /*0x79b6f4*/
      swprintf(Buffer, (const size_t)v31, v45); /*0x79b702*/
      WideString::Reassign(v83, Buffer); /*0x79b719*/
      DeleteAndZero((void **)&v64); /*0x79b722*/
      v1 = SendMessageA; /*0x79b727*/
      DlgItem = hWnd; /*0x79b72d*/
LABEL_75:
      v33 = (unsigned __int16)v63 << 16; /*0x79b787*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1C4, (LPARAM)&lParam); /*0x79b7ac*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1C8, (LPARAM)&v69); /*0x79b7c8*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1CC, (LPARAM)&v78); /*0x79b7e7*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1D0, (LPARAM)&v73); /*0x79b804*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1D4, (LPARAM)&v54); /*0x79b820*/
      v1(DlgItem, 0x4A8u, v33 | (unsigned __int16)dword_84A1D8, (LPARAM)&v81); /*0x79b83f*/
      DeleteAndZero::Alt(v83); /*0x79b848*/
      DeleteAndZero::Alt(&v82); /*0x79b854*/
      DeleteAndZero::Alt(v75); /*0x79b860*/
      DeleteAndZero::Alt(&v74); /*0x79b86c*/
      DeleteAndZero::Alt(v80); /*0x79b878*/
      DeleteAndZero::Alt(&v79); /*0x79b884*/
      DeleteAndZero::Alt(v71); /*0x79b88d*/
      DeleteAndZero::Alt(&v70); /*0x79b896*/
      DeleteAndZero::Alt(&v56); /*0x79b89f*/
      DeleteAndZero::Alt(&v55); /*0x79b8a8*/
      DeleteAndZero::Alt(&v67); /*0x79b8b1*/
      DeleteAndZero::Alt(&v66); /*0x79b8ba*/
      DeleteAndZero::Alt(&v60); /*0x79b8c3*/
      DeleteAndZero(&v49); /*0x79b8cc*/
      if ( ++v50 >= g_WindowManager ) /*0x79b8e2*/
        goto LABEL_76; /*0x79b8e2*/
    }
    if ( v53 || !v51 ) /*0x79b634*/
    {
      v73 = 2; /*0x79b646*/
      v29 = (void *)HashTable::Find(g_DialogHashTable, g_Str_File_wolreslk_pcx, 0); /*0x79b652*/
    }
    else
    {
      v73 = 2; /*0x79b637*/
      v29 = (void *)HashTable::Find(g_DialogHashTable, g_Str_File_wolrslkob_pcx, 0); /*0x79b643*/
    }
    goto LABEL_67; /*0x79b643*/
  }
LABEL_76:
  v34 = -1; /*0x79b8e8*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79b8f0*/
  {
    v35 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79b8fe*/
    v34 = v1(DlgItem, 0x4C5u, 0, (LPARAM)v35); /*0x79b90e*/
  }
  if ( v34 != v1(DlgItem, 0x188u, 0, 0) ) /*0x79b91e*/
    v1(DlgItem, 0x186u, v34, 0); /*0x79b929*/
  v1(DlgItem, 0x49Du, 0, 0); /*0x79b935*/
  InvalidateRect(DlgItem, 0, 0); /*0x79b93c*/
  v36 = String::Length(&g_WOL_LoginObject); /*0x79b947*/
  v37 = hDlga; /*0x79b94e*/
  v46 = v36 != 0; /*0x79b95e*/
  v38 = GetDlgItem(hDlga, 1795); /*0x79b965*/
  EnableWindow(v38, v46); /*0x79b96e*/
  v47 = (unsigned __int8)FindBuddyWOL(); /*0x79b97a*/
  v39 = GetDlgItem(v37, 1581); /*0x79b981*/
  EnableWindow(v39, v47); /*0x79b984*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79b98b*/
  {
    if ( !dword_B76994 ) /*0x79b9a1*/
      goto LABEL_89; /*0x79b9a1*/
    v40 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79b9c3*/
    if ( !v40 ) /*0x79b9c8*/
      goto LABEL_89; /*0x79b9c8*/
    while ( !String::Compare((const char **)v40, &g_WOL_LoginObject) ) /*0x79b9d8*/
    {
      v40 = *(_DWORD *)(v40 + 8); /*0x79b9da*/
      if ( !v40 ) /*0x79b9df*/
      {
        LOBYTE(v50) = 0; /*0x79b9e1*/
        goto LABEL_91; /*0x79b9e6*/
      }
    }
    if ( v40 != -4 && *(_DWORD *)(v40 + 4) > 2u ) /*0x79b9f7*/
      LOBYTE(v50) = 1; /*0x79ba05*/
    else
LABEL_89:
      LOBYTE(v50) = 0; /*0x79b9fe*/
LABEL_91:
    v37 = hDlga; /*0x79ba0a*/
  }
  else
  {
    LOBYTE(v50) = 0; /*0x79b994*/
  }
  v48 = (unsigned __int8)v50; /*0x79ba18*/
  v41 = GetDlgItem(v37, 1474); /*0x79ba1f*/
  EnableWindow(v41, v48); /*0x79ba26*/
  return ShowUserProfileWOL(v37); /*0x79ba2f*/
}



// ==== 0x0079BA60  ValidateGameJoinWOL  this=AbstractClass  sig=csp ====
char __fastcall WOL_ValidateGameJoin(int a1, char a2, char a3)
{
  int v4; // eax
  char v5; // cl
  char v6; // al
  wchar_t *v7; // eax
  BOOL v9; // ecx
  wchar_t *v10; // eax
  int v12; // [esp+10h] [ebp-9Ch] BYREF
  int v13; // [esp+14h] [ebp-98h] BYREF
  int v14; // [esp+18h] [ebp-94h] BYREF
  int v15; // [esp+1Ch] [ebp-90h] BYREF
  int v16; // [esp+20h] [ebp-8Ch] BYREF
  int v17; // [esp+24h] [ebp-88h]
  char String[132]; // [esp+28h] [ebp-84h] BYREF

  v5 = 0; /*0x79ba9c*/
  if ( g_GameMode_Current == 4 ) /*0x79ba7a*/
  {
    v4 = *(_DWORD *)(a1 + 32); /*0x79ba7c*/
    if ( (v4 & 0x800) != 0 || (v4 & 0x1000) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = g_GameOptionsFlags == 3 || g_GameOptionsFlags == 1 || g_GameOptionsFlags == 2; /*0x79bab6*/
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( g_GameMode_Current == 4 && (*(_DWORD *)(a1 + 32) & 0x100) != 0 && dword_B77DE4 < 1 ) /*0x79badd*/
  {
    if ( a2 ) /*0x79bae1*/
    {
      v7 = GetStringCSF(aTxtNoClan, 0, g_Str_File_wonline_cpp, 26733); /*0x79baf8*/
      Dialog::ShowMessage(-1, (size_t)v7); /*0x79bb00*/
      return 0; /*0x79bb13*/
    }
    return 0; /*0x79bae1*/
  }
  v17 = 0; /*0x79bb32*/
  strcpy(String, (const char *)(a1 + 224)); /*0x79bb39*/
  v15 = 0; /*0x79bb3d*/
  v16 = 0; /*0x79bb44*/
  v13 = 0; /*0x79bb4e*/
  v14 = 0; /*0x79bb52*/
  unknown_libname_73(&v12); /*0x79bb56*/
  ParseStringCommaInts(String, (int)&v15, (int)&v16, (int)&v13, (int)&v14, (int)&v12); /*0x79bb7c*/
  if ( GameOptions::GetEntry() != v17 || (CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash) != v15 ) /*0x79bbae*/
  {
    if ( a2 ) /*0x79bc41*/
    {
      v10 = GetStringCSF(g_Str_TXT_MISMATCH, 0, g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
      goto LABEL_34; /*0x79bc54*/
    }
    goto LABEL_35; /*0x79bc41*/
  }
  if ( !a3 ) /*0x79bbbb*/
  {
    v9 = v13 || v14; /*0x79bbda*/
    if ( v16 + *(_DWORD *)(a1 + 12) - v13 >= *(_DWORD *)(a1 + 8) - v9 ) /*0x79bbe6*/
    {
      if ( a2 ) /*0x79bbec*/
      {
        v10 = GetStringCSF((wchar_t *)aWolGamefull, 0, g_Str_File_wonline_cpp, 26780); /*0x79bbff*/
LABEL_34:
        Dialog::ShowMessage(-1, (size_t)v10); /*0x79bc59*/
        goto LABEL_35; /*0x79bc5c*/
      }
      goto LABEL_35; /*0x79bbec*/
    }
LABEL_29:
    DeleteAndZero((void **)&v12); /*0x79bc0d*/
    return 1; /*0x79bc21*/
  }
  if ( v14 && !v13 ) /*0x79bc0b*/
    goto LABEL_29; /*0x79bc0b*/
  if ( a2 ) /*0x79bc28*/
  {
    v10 = GetStringCSF(g_Str_TXT_OBSERVER_FULL, 0, g_Str_File_wonline_cpp, 26788); /*0x79bc3b*/
    goto LABEL_34; /*0x79bc3b*/
  }
LABEL_35:
  DeleteAndZero((void **)&v12); /*0x79bc64*/
  return 0; /*0x79bb0a*/
}



// ==== 0x0079BC80  FindBuddyWOL  this=-  sig=ida-proto ====
bool WOL_FindBuddy()
{
  bool result; // al
  int v1; // esi
  int *v2; // esi
  int v3; // esi
  int v4; // esi
  const void *v5; // esi
  signed int v6; // ebx
  signed int v7; // eax
  int v8; // ebp
  char *v9; // eax
  char v10; // bl
  void *v11; // [esp+10h] [ebp-21Ch] BYREF
  _BYTE v12[268]; // [esp+14h] [ebp-218h] BYREF
  char v13[268]; // [esp+120h] [ebp-10Ch] BYREF

  if ( !String::Length(&g_WOL_LoginObject) ) /*0x79bc8f*/
    return 0; /*0x79bca4*/
  if ( !dword_B76994 ) /*0x79bcac*/
    return 0; /*0x79bcac*/
  v1 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
  if ( !v1 ) /*0x79bcd3*/
    return 0; /*0x79bcd3*/
  while ( 1 ) /*0x79bcdc*/
  {
    result = String::Compare((const char **)v1, &g_WOL_LoginObject); /*0x79bcdc*/
    if ( result ) /*0x79bce3*/
      break; /*0x79bce3*/
    v1 = *(_DWORD *)(v1 + 8); /*0x79bce5*/
    if ( !v1 ) /*0x79bcea*/
      return result; /*0x79bcea*/
  }
  v2 = (int *)(v1 + 4); /*0x79bcfb*/
  if ( !v2 ) /*0x79bd00*/
    return 0; /*0x79bd00*/
  v3 = *v2; /*0x79bd02*/
  if ( v3 == 4 ) /*0x79bd07*/
    return 1; /*0x79bd15*/
  if ( v3 != 5 ) /*0x79bd19*/
    return 0; /*0x79bd27*/
  if ( !dword_B7660C ) /*0x79bd2f*/
    return 0; /*0x79bd2f*/
  v4 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
  if ( !v4 ) /*0x79bd5a*/
    return 0; /*0x79bd5a*/
  while ( 1 ) /*0x79bd67*/
  {
    result = String::Compare((const char **)v4, &g_WOL_LoginObject); /*0x79bd67*/
    if ( result ) /*0x79bd6e*/
      break; /*0x79bd6e*/
    v4 = *(_DWORD *)(v4 + 272); /*0x79bd70*/
    if ( !v4 ) /*0x79bd78*/
      return result; /*0x79bd78*/
  }
  v5 = (const void *)(v4 + 4); /*0x79bd8d*/
  if ( v5 ) /*0x79bd92*/
    qmemcpy(v13, v5, sizeof(v13)); /*0x79bda0*/
  String::Assign((char **)&v11, &v13[52]); /*0x79bdae*/
  v6 = 0; /*0x79bdbe*/
  memset(v12, 0, sizeof(v12)); /*0x79bdc0*/
  v7 = g_WOL_ChatState; /*0x79bdc2*/
  if ( (int)g_WOL_ChatState <= 0 ) /*0x79bdc9*/
  {
LABEL_27:
    memset(v12, 0, sizeof(v12)); /*0x79be1f*/
    DeleteAndZero(&v11); /*0x79be25*/
    return 0; /*0x79be36*/
  }
  v8 = 0; /*0x79bdcb*/
  while ( 1 ) /*0x79bdcd*/
  {
    if ( v8 >= 0 && v6 < v7 ) /*0x79bdd3*/
      qmemcpy(v12, (char *)g_WOL_ConnectionHandler + v8, sizeof(v12)); /*0x79bde7*/
    v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = g_WOL_ChatState; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)g_WOL_ChatState ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, g_MenuStateFlags != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}



// ==== 0x0079BF50  ObjectClass::method_79BF50  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_79BF50(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]

  v7 = String::Length(&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem(hDlg, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem(hDlg, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !dword_B76994 ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bfd4*/
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !String::Compare((const char **)v4, &g_WOL_LoginObject) ) /*0x79bfe9*/
    {
      v4 = *(_DWORD *)(v4 + 8); /*0x79bfeb*/
      if ( !v4 ) /*0x79bff0*/
      {
        v9 = 0; /*0x79bff2*/
        goto LABEL_12; /*0x79bff7*/
      }
    }
    if ( v4 != -4 && *(_DWORD *)(v4 + 4) > 2u ) /*0x79c008*/
      v9 = 1; /*0x79c016*/
    else
LABEL_10:
      v9 = 0; /*0x79c00f*/
  }
  else
  {
    v9 = 0; /*0x79bfa5*/
  }
LABEL_12:
  v5 = GetDlgItem(hDlg, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}



// ==== 0x0079C040  ObjectClass::ShowUserProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall WOL_ShowUserProfile(HWND hDlg)
{
  HWND DlgItem; // ebx
  HWND v3; // ebp
  wchar_t *String; // eax
  const wchar_t *v5; // ebx
  unsigned int v6; // eax
  wchar_t *v7; // ebp
  wchar_t *v8; // eax
  HWND v9; // eax
  wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **v12; // eax
  wchar_t *v13; // eax
  wchar_t **v14; // eax
  wchar_t *v15; // eax
  wchar_t **v16; // eax
  wchar_t *v17; // eax
  wchar_t **v18; // eax
  wchar_t *v19; // eax
  void **v20; // ecx
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  char *v27; // [esp-4h] [ebp-A0h]
  void *v28; // [esp+10h] [ebp-8Ch] BYREF
  HWND v29; // [esp+14h] [ebp-88h] BYREF
  HWND v30; // [esp+18h] [ebp-84h]
  void *v31; // [esp+1Ch] [ebp-80h] BYREF
  HWND v32; // [esp+20h] [ebp-7Ch]
  HWND hWnd; // [esp+24h] [ebp-78h]
  HWND v34; // [esp+28h] [ebp-74h]
  void *v35; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v36[27]; // [esp+30h] [ebp-6Ch] BYREF

  DlgItem = GetDlgItem(hDlg, 1775); /*0x79c05a*/
  v3 = GetDlgItem(hDlg, 1780); /*0x79c064*/
  v29 = v3; /*0x79c06c*/
  hWnd = GetDlgItem(hDlg, 1781); /*0x79c078*/
  v32 = GetDlgItem(hDlg, 1776); /*0x79c084*/
  v34 = GetDlgItem(hDlg, 1777); /*0x79c090*/
  v30 = GetDlgItem(hDlg, 1793); /*0x79c09b*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79c09f*/
  {
    String = GetStringCSF(aGuiUserprofile, 0, g_Str_File_wonline_cpp, 26882); /*0x79c133*/
    WideString::Assign((wchar_t **)&v31, String); /*0x79c13d*/
    v5 = WideString::Length((const wchar_t **)&v31); /*0x79c150*/
    v6 = String::Length(&g_WOL_LoginObject); /*0x79c152*/
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v5 + v6) + 2); /*0x79c16b*/
    v27 = String::GetOrEmpty((char **)&g_WOL_LoginObject); /*0x79c176*/
    v8 = WideString::GetOrEmpty((wchar_t **)&v31); /*0x79c177*/
    swprintf(v7, (const size_t)v8, (const wchar_t *const)v27); /*0x79c17e*/
    v9 = GetDlgItem(hDlg, 1775); /*0x79c18c*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)v7); /*0x79c19d*/
    __3_YAXPAX_Z(v7); /*0x79c1a0*/
    memset(v36, 0, sizeof(v36)); /*0x79c1b3*/
    String::ToLowerCopy(&g_WOL_LoginObject, (char **)&v35); /*0x79c1bf*/
    v28 = 0; /*0x79c1d3*/
    if ( HashTable::LookupString(&dword_B77D80, (const char **)&v35, &v28) ) /*0x79c1db*/
    {
      if ( v28 ) /*0x79c1ee*/
        qmemcpy(v36, v28, sizeof(v36)); /*0x79c1f9*/
      v10 = FormatWideString((wchar_t **)&v28, v36[7]); /*0x79c203*/
      v11 = WideString::GetOrEmpty_Alt(v10); /*0x79c20a*/
      SendMessageA(v29, 0x4B2u, 0, (LPARAM)v11); /*0x79c21c*/
      DeleteAndZero::Alt(&v28); /*0x79c222*/
      v12 = FormatWideString((wchar_t **)&v29, v36[4]); /*0x79c22f*/
      v13 = WideString::GetOrEmpty_Alt(v12); /*0x79c236*/
      SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)v13); /*0x79c248*/
      DeleteAndZero::Alt((void **)&v29); /*0x79c24e*/
      v14 = FormatWideString((wchar_t **)&v29, v36[2]); /*0x79c25b*/
      v15 = WideString::GetOrEmpty_Alt(v14); /*0x79c262*/
      SendMessageA(v32, 0x4B2u, 0, (LPARAM)v15); /*0x79c274*/
      DeleteAndZero::Alt((void **)&v29); /*0x79c27a*/
      v16 = FormatWideString((wchar_t **)&v29, v36[3]); /*0x79c287*/
      v17 = WideString::GetOrEmpty_Alt(v16); /*0x79c28e*/
      SendMessageA(v34, 0x4B2u, 0, (LPARAM)v17); /*0x79c2a0*/
      DeleteAndZero::Alt((void **)&v29); /*0x79c2a6*/
      v18 = FormatWideString((wchar_t **)&v29, v36[8]); /*0x79c2b3*/
      v19 = WideString::GetOrEmpty_Alt(v18); /*0x79c2ba*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v19); /*0x79c2cc*/
      v20 = (void **)&v29; /*0x79c2ce*/
    }
    else
    {
      v21 = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_wonline_cpp, 26899); /*0x79c2e8*/
      WideString::Assign((wchar_t **)&v28, v21); /*0x79c2f2*/
      v22 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c2fb*/
      SendMessageA(v29, 0x4B2u, 0, (LPARAM)v22); /*0x79c30d*/
      v23 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c313*/
      SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)v23); /*0x79c325*/
      v24 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c32b*/
      SendMessageA(v32, 0x4B2u, 0, (LPARAM)v24); /*0x79c33d*/
      v25 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c343*/
      SendMessageA(v34, 0x4B2u, 0, (LPARAM)v25); /*0x79c355*/
      v26 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c35b*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v26); /*0x79c36d*/
      v20 = &v28; /*0x79c36f*/
    }
    DeleteAndZero::Alt(v20); /*0x79c373*/
    DeleteAndZero(&v35); /*0x79c37c*/
    DeleteAndZero::Alt(&v31); /*0x79c385*/
  }
  else
  {
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ba*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0c9*/
    SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0dc*/
    SendMessageA(v32, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ef*/
    SendMessageA(v34, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c102*/
    SendMessageA(v30, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c115*/
  }
}



// ==== 0x0079C3A0  ObjectClass::Network_Cleanup  this=ObjectClass  sig=csp ====
unsigned int sub_79C3A0()
{
  unsigned int result; // eax
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  char v6[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( String::Length(&g_WOL_AuthObject) ) /*0x79c3a8*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c3d1*/
  }
  result = g_WOL_RequestManager; /*0x79c3d6*/
  if ( g_WOL_RequestManager ) /*0x79c3dd*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79c3e6*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c3f7*/
      v1 = 0; /*0x79c401*/
      if ( g_WOL_RequestManager ) /*0x79c405*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79c40b*/
          v1 = g_WOL_RequestManager - 1; /*0x79c40d*/
        DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79c419*/
        memcpy( /*0x79c442*/
          (char *)g_WOL_SessionID + 4 * v1,
          (char *)g_WOL_SessionID + 4 * v1 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v1 + 1)));
        --g_WOL_RequestManager; /*0x79c456*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79c460*/
        {
          v2 = dword_B76984 / 2; /*0x79c469*/
          if ( dword_B76984 / 2 < 10 ) /*0x79c46e*/
            v2 = 10; /*0x79c470*/
          if ( v2 < dword_B76984 ) /*0x79c477*/
          {
            v3 = __2_YAPAXI_Z(4 * v2); /*0x79c482*/
            v4 = g_WOL_SessionID; /*0x79c487*/
            v5 = v3; /*0x79c492*/
            if ( g_WOL_SessionID ) /*0x79c494*/
            {
              qmemcpy(v3, g_WOL_SessionID, 4 * g_WOL_RequestManager); /*0x79c49e*/
              v4 = g_WOL_SessionID; /*0x79c4a0*/
            }
            __3_YAXPAX_Z(v4); /*0x79c4a7*/
            g_WOL_SessionID = v5; /*0x79c4af*/
            dword_B76984 = v2; /*0x79c4b5*/
          }
        }
      }
    }
    g_WOL_ParseState = time(0); /*0x79c4c3*/
    memset(v6, 0, sizeof(v6)); /*0x79c4d3*/
    strcpy(&v6[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v6); /*0x79c512*/
  }
  return result; /*0x79c518*/
}



// ==== 0x0079C520  MapSeed::CheckName  this=ObjectClass  sig=csp ====
char __thiscall MapSeed_CheckName(const char **this)
{
  char **v2; // eax
  bool v3; // bl
  int v5; // esi
  char **v6; // [esp-8h] [ebp-18h]
  void *v7; // [esp+4h] [ebp-Ch] BYREF
  void *v8; // [esp+8h] [ebp-8h] BYREF
  void *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr((char **)&v7, this); /*0x79c52b*/
  String::ToLower((const char **)&v7); /*0x79c534*/
  if ( !String::Length(this) /*0x79c5aa*/
    || (v6 = String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v9),
        v2 = String::ToLowerCopy((const char **)&v7, (char **)&v8),
        v3 = String::Compare((const char **)v2, (const char **)v6),
        DeleteAndZero(&v8),
        DeleteAndZero(&v9),
        v3)
    || (unsigned __int8)ValidateStringContains(asc_84BA18) )
  {
    DeleteAndZero(&v7); /*0x79c5b7*/
    return 0; /*0x79c5bc*/
  }
  else
  {
    v5 = 0; /*0x79c5c8*/
    if ( g_WindowManager <= 0 ) /*0x79c5cc*/
    {
LABEL_12:
      DeleteAndZero(&v7); /*0x79c624*/
      return 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8); /*0x79c5d2*/
        if ( v5 >= 0 && v5 < g_WindowManager ) /*0x79c5e1*/
          String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v5); /*0x79c5f1*/
        String::ToLower((const char **)&v8); /*0x79c5fa*/
        if ( String::Compare((const char **)&v8, (const char **)&v7) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero(&v8); /*0x79c615*/
        if ( ++v5 >= g_WindowManager ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero(&v8); /*0x79c634*/
      DeleteAndZero(&v7); /*0x79c63d*/
      return 0; /*0x79c642*/
    }
  }
}



// ==== 0x0079C650  MapSeed::InsertName  this=MapSeed  sig=csp ====
void __thiscall MapSeed::InsertName(const char **this)
{
  int v2; // eax
  int v3; // esi
  char **v4; // ecx
  int v5; // eax
  int v6; // esi
  char **v7; // ecx
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  void *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((char **)&v11, this); /*0x79c668*/
    v2 = g_WindowManager; /*0x79c66d*/
    v3 = g_WindowManager; /*0x79c672*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c685*/
      v2 = g_WindowManager; /*0x79c68a*/
    }
    if ( v2 >= dword_B73AAC ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c69c*/
      v2 = g_WindowManager; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v3 + 4, (char *)g_WOL_LoginQueue + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79c6c5*/
      v2 = g_WindowManager; /*0x79c6ca*/
    }
    v4 = (char **)((char *)g_WOL_LoginQueue + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, (const char **)&v11); /*0x79c6e4*/
      v2 = g_WindowManager; /*0x79c6e9*/
    }
    g_WindowManager = v2 + 1; /*0x79c6ef*/
    v5 = g_WOL_RequestManager; /*0x79c6f4*/
    v6 = g_WOL_RequestManager; /*0x79c6f9*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c70c*/
      v5 = g_WOL_RequestManager; /*0x79c711*/
    }
    if ( v5 >= dword_B76984 ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c723*/
      v5 = g_WOL_RequestManager; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v6 + 4, (char *)g_WOL_SessionID + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x79c74c*/
      v5 = g_WOL_RequestManager; /*0x79c751*/
    }
    v7 = (char **)((char *)g_WOL_SessionID + 4 * v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, (const char **)&v11); /*0x79c76b*/
      v5 = g_WOL_RequestManager; /*0x79c770*/
    }
    g_WOL_RequestManager = v5 + 1; /*0x79c776*/
    v8 = g_WOL_BuddyList; /*0x79c77b*/
    v9 = g_WOL_BuddyList; /*0x79c780*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = g_WOL_BuddyList; /*0x79c798*/
    }
    if ( v8 >= dword_B779B4 ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = g_WOL_BuddyList; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v9 + 4, (char *)g_WOL_ChannelMgr + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79c7d3*/
      v8 = g_WOL_BuddyList; /*0x79c7d8*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, (const char **)&v11); /*0x79c7f2*/
      v8 = g_WOL_BuddyList; /*0x79c7f7*/
    }
    g_WOL_BuddyList = v8 + 1; /*0x79c802*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero(&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c830*/
    }
    if ( g_WOL_RequestManager ) /*0x79c83c*/
    {
      if ( g_WOL_RequestManager > 0 ) /*0x79c83e*/
      {
        String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c84b*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79c857*/
      }
      g_WOL_ParseState = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c8a1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }
}



// ==== 0x0079C8D0  ObjectClass::QueueWOLAuthRequest  this=ObjectClass  sig=csp ====
void __thiscall QueueWOLAuthRequest(char **this)
{
  char *v2; // eax
  int v3; // eax
  int v4; // esi
  char **v5; // ecx
  int v6; // eax
  int v7; // esi
  char **v8; // ecx
  int v9; // eax
  int v10; // esi
  char **v11; // ecx
  void *v12; // [esp+10h] [ebp-DCh] BYREF
  char v13[108]; // [esp+14h] [ebp-D8h] BYREF
  char v14[108]; // [esp+80h] [ebp-6Ch] BYREF

  if ( MapSeed::CheckName((const char **)this) ) /*0x79c8d9*/
  {
    memset(v13, 0, sizeof(v13)); /*0x79c8f2*/
    v2 = String::GetOrEmpty_Alt(this); /*0x79c8f8*/
    strncpy(&v13[36], v2, 9u); /*0x79c903*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 224))(ppv, v13); /*0x79c918*/
    if ( !MapSeed::CheckName((const char **)this) ) /*0x79c927*/
    {
LABEL_35:
      SendGameListWOL(); /*0x79cb8b*/
      return; /*0x79cb8b*/
    }
    String::AssignFromPtr((char **)&v12, (const char **)this); /*0x79c932*/
    v3 = g_WindowManager; /*0x79c937*/
    v4 = g_WindowManager; /*0x79c93c*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79c948*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c94f*/
      v3 = g_WindowManager; /*0x79c954*/
    }
    if ( v3 >= dword_B73AAC ) /*0x79c95f*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c966*/
      v3 = g_WindowManager; /*0x79c96b*/
    }
    if ( v4 < v3 ) /*0x79c972*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v4 + 4, (char *)g_WOL_LoginQueue + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x79c98f*/
      v3 = g_WindowManager; /*0x79c994*/
    }
    v5 = (char **)((char *)g_WOL_LoginQueue + 4 * v4); /*0x79c9a2*/
    if ( v5 ) /*0x79c9a7*/
    {
      String::AssignFromPtr(v5, (const char **)&v12); /*0x79c9ae*/
      v3 = g_WindowManager; /*0x79c9b3*/
    }
    g_WindowManager = v3 + 1; /*0x79c9b9*/
    v6 = g_WOL_RequestManager; /*0x79c9be*/
    v7 = g_WOL_RequestManager; /*0x79c9c3*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79c9cf*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c9d6*/
      v6 = g_WOL_RequestManager; /*0x79c9db*/
    }
    if ( v6 >= dword_B76984 ) /*0x79c9e6*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c9ed*/
      v6 = g_WOL_RequestManager; /*0x79c9f2*/
    }
    if ( v7 < v6 ) /*0x79c9f9*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v7 + 4, (char *)g_WOL_SessionID + 4 * v7, 4 * (v6 + 0x3FFFFFFF * v7)); /*0x79ca16*/
      v6 = g_WOL_RequestManager; /*0x79ca1b*/
    }
    v8 = (char **)((char *)g_WOL_SessionID + 4 * v7); /*0x79ca29*/
    if ( v8 ) /*0x79ca2e*/
    {
      String::AssignFromPtr(v8, (const char **)&v12); /*0x79ca35*/
      v6 = g_WOL_RequestManager; /*0x79ca3a*/
    }
    g_WOL_RequestManager = v6 + 1; /*0x79ca40*/
    v9 = g_WOL_BuddyList; /*0x79ca45*/
    v10 = g_WOL_BuddyList; /*0x79ca4a*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79ca56*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca5d*/
      v9 = g_WOL_BuddyList; /*0x79ca62*/
    }
    if ( v9 >= dword_B779B4 ) /*0x79ca6d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca74*/
      v9 = g_WOL_BuddyList; /*0x79ca79*/
    }
    if ( v10 < v9 ) /*0x79ca80*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v10 + 4, (char *)g_WOL_ChannelMgr + 4 * v10, 4 * (v9 + 0x3FFFFFFF * v10)); /*0x79ca9d*/
      v9 = g_WOL_BuddyList; /*0x79caa2*/
    }
    v11 = (char **)((char *)g_WOL_ChannelMgr + 4 * v10); /*0x79cab0*/
    if ( v11 ) /*0x79cab5*/
    {
      String::AssignFromPtr(v11, (const char **)&v12); /*0x79cabc*/
      v9 = g_WOL_BuddyList; /*0x79cac1*/
    }
    g_WOL_BuddyList = v9 + 1; /*0x79cacc*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79cad1*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79caef*/
      {
LABEL_34:
        DeleteAndZero(&v12); /*0x79cb82*/
        goto LABEL_35; /*0x79cb86*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79cafa*/
    }
    if ( g_WOL_RequestManager ) /*0x79cb06*/
    {
      if ( g_WOL_RequestManager > 0 ) /*0x79cb08*/
      {
        String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79cb15*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79cb21*/
      }
      g_WOL_ParseState = time(0); /*0x79cb2d*/
      memset(v14, 0, sizeof(v14)); /*0x79cb3d*/
      strcpy(&v14[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79cb6d*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v14); /*0x79cb7f*/
    }
    goto LABEL_34; /*0x79cb7f*/
  }
}



// ==== 0x0079CBA0  RemoveWOLPlayerLogin  this=-  sig=csp ====
void __fastcall RemoveWOLPlayerLogin(const char **a1)
{
  const char **v1; // ebp
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  void *v6; // ebp
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // ebx
  double v11; // st7
  int v12; // esi
  char *v13; // eax
  void *v14; // [esp+8h] [ebp-188h] BYREF
  __int64 v15; // [esp+Ch] [ebp-184h]
  void *v16; // [esp+14h] [ebp-17Ch] BYREF
  char v17[108]; // [esp+18h] [ebp-178h] BYREF
  _BYTE v18[268]; // [esp+84h] [ebp-10Ch] BYREF

  v1 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  LODWORD(v15) = a1; /*0x79cbb1*/
  if ( g_WindowManager > 0 ) /*0x79cbb7*/
  {
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v16); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < g_WindowManager ) /*0x79cbd0*/
        String::Reassign((char **)&v16, (const char **)g_WOL_LoginQueue + v2); /*0x79cbdf*/
      if ( String::Compare((const char **)&v16, v1) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero(&v16); /*0x79cbf6*/
      if ( ++v2 >= g_WindowManager ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( g_WindowManager ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= g_WindowManager ) /*0x79cc25*/
        v2 = g_WindowManager - 1; /*0x79cc27*/
      DeleteAndZero((void **)g_WOL_LoginQueue + v2); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (char *)g_WOL_LoginQueue + 4 * v2,
        (char *)g_WOL_LoginQueue + 4 * v2 + 4,
        4 * (g_WindowManager + 0x3FFFFFFF * (v2 + 1)));
      --g_WindowManager; /*0x79cc70*/
      if ( 3 * g_WindowManager <= dword_B73AAC ) /*0x79cc7a*/
      {
        v3 = dword_B73AAC / 2; /*0x79cc83*/
        if ( dword_B73AAC / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < dword_B73AAC ) /*0x79cc91*/
        {
          v4 = __2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          v5 = g_WOL_LoginQueue; /*0x79cca0*/
          v6 = v4; /*0x79ccab*/
          if ( g_WOL_LoginQueue ) /*0x79ccad*/
          {
            qmemcpy(v4, g_WOL_LoginQueue, 4 * g_WindowManager); /*0x79ccb7*/
            v5 = g_WOL_LoginQueue; /*0x79ccb9*/
          }
          __3_YAXPAX_Z(v5); /*0x79ccc0*/
          g_WOL_LoginQueue = v6; /*0x79ccc5*/
          v1 = (const char **)v15; /*0x79cccb*/
          dword_B73AAC = v3; /*0x79ccd2*/
        }
      }
    }
    String::AssignFromPtr((char **)&v14, v1); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry(&v14, v18); /*0x79ccf4*/
    if ( !dword_B76994 ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    v15 = (unsigned int)(dword_B76994 - 1); /*0x79cd0d*/
    *(float *)&v15 = (double)v15 / (double)dword_B76998; /*0x79cd2a*/
    v7 = dword_B769A8(&v14) & ((1 << dword_B7699C) - 1); /*0x79cd48*/
    v8 = *((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( String::Compare(*((const char ***)g_WOL_AccountInfo + v7), (const char **)&v14) ) /*0x79cd5c*/
    {
      v9 = (_DWORD *)*((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd6a*/
      v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*((void ***)g_WOL_AccountInfo + v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      v11 = *(float *)&v15; /*0x79cd8a*/
      *((_DWORD *)g_WOL_AccountInfo + v7) = v10; /*0x79cd8e*/
      --dword_B76994; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !String::Compare((const char **)v12, (const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = *(_DWORD *)(v12 + 8); /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8); /*0x79cdd0*/
        --dword_B76994; /*0x79cddc*/
        DeleteAndZero((void **)v12); /*0x79cde6*/
        __3_YAXPAX_Z((void *)v12); /*0x79cdec*/
      }
LABEL_32:
      if ( *(float *)&v15 > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79ce0a*/
LABEL_34:
    memset(v17, 0, sizeof(v17)); /*0x79ce0f*/
    v13 = String::GetOrEmpty_Alt((char **)v1); /*0x79ce20*/
    strncpy(&v17[36], v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 228))(ppv, v17); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero(&v16); /*0x79ce53*/
  }
}



// ==== 0x0079CE70  ObjectClass::RefreshChannelListWOL  this=ObjectClass  sig=csp ====
unsigned int WOL_RefreshChannelList()
{
  HANDLE *v0; // esi
  unsigned int result; // eax
  int i; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  char **v6; // ecx
  int v7; // esi
  void *v8; // [esp+Ch] [ebp-70h] BYREF
  char v9[108]; // [esp+10h] [ebp-6Ch] BYREF

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v0 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v0++); /*0x79ceab*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79ceea*/
    DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79cef4*/
  v3 = 0; /*0x79cf08*/
  for ( g_WOL_RequestManager = 0; v3 < g_WindowManager; ++v3 ) /*0x79cf16*/
  {
    unknown_libname_73(&v8); /*0x79cf20*/
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x79cf2f*/
      String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v3); /*0x79cf3f*/
    v4 = g_WOL_RequestManager; /*0x79cf44*/
    v5 = g_WOL_RequestManager; /*0x79cf49*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf5c*/
      v4 = g_WOL_RequestManager; /*0x79cf61*/
    }
    if ( v4 >= dword_B76984 ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf73*/
      v4 = g_WOL_RequestManager; /*0x79cf78*/
    }
    if ( v5 < v4 ) /*0x79cf7f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v5 + 4, (char *)g_WOL_SessionID + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x79cf9c*/
      v4 = g_WOL_RequestManager; /*0x79cfa1*/
    }
    v6 = (char **)((char *)g_WOL_SessionID + 4 * v5); /*0x79cfaf*/
    if ( v6 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v6, (const char **)&v8); /*0x79cfbb*/
      v4 = g_WOL_RequestManager; /*0x79cfc0*/
    }
    g_WOL_RequestManager = v4 + 1; /*0x79cfca*/
    DeleteAndZero(&v8); /*0x79cfcf*/
  }
  if ( String::Length(&g_WOL_AuthObject) ) /*0x79cfe7*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79d010*/
  }
  result = g_WOL_RequestManager; /*0x79d015*/
  if ( g_WOL_RequestManager ) /*0x79d01c*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79d022*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79d02f*/
      v7 = 0; /*0x79d039*/
      if ( g_WOL_RequestManager ) /*0x79d03d*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79d03f*/
          v7 = g_WOL_RequestManager - 1; /*0x79d041*/
        Object::DtorWithDelete((void **)g_WOL_SessionID + v7, 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          (char *)g_WOL_SessionID + 4 * v7,
          (char *)g_WOL_SessionID + 4 * v7 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v7 + 1)));
        --g_WOL_RequestManager; /*0x79d086*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79d095*/
          VectorClass::Shrink(&g_WOL_RequestManager); /*0x79d09c*/
      }
    }
    g_WOL_ParseState = time(0); /*0x79d0a8*/
    memset(v9, 0, sizeof(v9)); /*0x79d0b8*/
    strcpy(&v9[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79d0e5*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v9); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}



// ==== 0x0079D110  ObjectClass::SendGameListWOL  this=ObjectClass  sig=csp ====
void WOL_SendGameList()
{
  int v0; // esi
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // [esp+20h] [ebp-20h]
  int v11; // [esp+2Ch] [ebp-14h]
  void *v12; // [esp+34h] [ebp-Ch] BYREF
  void *v13; // [esp+38h] [ebp-8h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v0 = g_WOL_BuddyList; /*0x79d114*/
  if ( g_WOL_BuddyList <= 10 ) /*0x79d11d*/
  {
    if ( !g_WOL_BuddyList ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v0 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v12); /*0x79d132*/
  if ( v0 > 0 ) /*0x79d139*/
  {
    v14 = v0; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13); /*0x79d14a*/
      if ( g_WOL_BuddyList > 0 ) /*0x79d156*/
      {
        String::Reassign((char **)&v13, (const char **)g_WOL_ChannelMgr); /*0x79d166*/
        v1 = 0; /*0x79d170*/
        if ( g_WOL_BuddyList ) /*0x79d174*/
        {
          if ( g_WOL_BuddyList <= 0 ) /*0x79d17a*/
            v1 = g_WOL_BuddyList - 1; /*0x79d17c*/
          DeleteAndZero((void **)g_WOL_ChannelMgr + v1); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (char *)g_WOL_ChannelMgr + 4 * v1,
            (char *)g_WOL_ChannelMgr + 4 * v1 + 4,
            4 * (g_WOL_BuddyList + 0x3FFFFFFF * (v1 + 1)));
          --g_WOL_BuddyList; /*0x79d1c5*/
          if ( 3 * g_WOL_BuddyList <= dword_B779B4 ) /*0x79d1cf*/
          {
            v2 = dword_B779B4 / 2; /*0x79d1d8*/
            if ( dword_B779B4 / 2 < 10 ) /*0x79d1dd*/
              v2 = 10; /*0x79d1df*/
            if ( v2 < dword_B779B4 ) /*0x79d1e6*/
            {
              v3 = __2_YAPAXI_Z(4 * v2); /*0x79d1f0*/
              v4 = g_WOL_ChannelMgr; /*0x79d1f5*/
              v5 = v3; /*0x79d200*/
              if ( g_WOL_ChannelMgr ) /*0x79d202*/
              {
                qmemcpy(v3, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d20c*/
                v4 = g_WOL_ChannelMgr; /*0x79d20e*/
              }
              __3_YAXPAX_Z(v4); /*0x79d215*/
              g_WOL_ChannelMgr = v5; /*0x79d21d*/
              dword_B779B4 = v2; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length((const char **)&v12) ) /*0x79d22d*/
        String::Append((const char **)&v12, asc_8318B8); /*0x79d23f*/
      String::Append2((const char **)&v12, (char **)&v13); /*0x79d24d*/
      DeleteAndZero(&v13); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v6 = *(_DWORD *)g_UIPointerTable; /*0x79d27c*/
  v10 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v7 = String::GetOrEmpty((char **)&v12); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x79d2a3*/
    g_UIPointerTable,
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v7,
    v10,
    -1,
    0,
    0);
  v8 = *(_DWORD *)g_UIPointerTable; /*0x79d2b7*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v9 = String::GetOrEmpty((char **)&v12); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int))(v8 + 56))( /*0x79d2d6*/
    g_UIPointerTable,
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v9,
    v11);
  DeleteAndZero(&v12); /*0x79d2dd*/
}



// ==== 0x0079D2F0  ObjectClass::RefreshGameListWOL  this=ObjectClass  sig=csp ====
void WOL_RefreshGameList()
{
  int i; // esi
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  void *v5; // ebx
  void *v6; // eax
  int v7; // ebp
  void *v8; // ebx
  void *v9; // eax
  char **v10; // ecx
  int v11; // [esp+8h] [ebp-Ch]
  void *v12; // [esp+Ch] [ebp-8h] BYREF
  int j; // [esp+10h] [ebp-4h]

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x79d2fe*/
    DeleteAndZero((void **)g_WOL_ChannelMgr + i); /*0x79d308*/
  v1 = 0; /*0x79d31c*/
  g_WOL_BuddyList = 0; /*0x79d320*/
  for ( j = 0; v1 < g_WindowManager; j = v1 ) /*0x79d32e*/
  {
    unknown_libname_73(&v12); /*0x79d33a*/
    if ( v1 >= 0 && v1 < g_WindowManager ) /*0x79d349*/
      String::Reassign((char **)&v12, (const char **)g_WOL_LoginQueue + v1); /*0x79d359*/
    v2 = g_WOL_BuddyList; /*0x79d35e*/
    v3 = g_WOL_BuddyList; /*0x79d363*/
    v11 = g_WOL_BuddyList; /*0x79d367*/
    v4 = dword_B779B4; /*0x79d371*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79d379*/
    {
      v4 = 2 * g_WOL_BuddyList; /*0x79d383*/
      if ( 2 * g_WOL_BuddyList < 10 ) /*0x79d389*/
        v4 = 10; /*0x79d38b*/
      v5 = __2_YAPAXI_Z(4 * v4); /*0x79d39f*/
      memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x79d3ad*/
      v6 = g_WOL_ChannelMgr; /*0x79d3b6*/
      if ( g_WOL_ChannelMgr ) /*0x79d3bd*/
      {
        qmemcpy(v5, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d3c9*/
        v6 = g_WOL_ChannelMgr; /*0x79d3cb*/
        v3 = v11; /*0x79d3d0*/
      }
      __3_YAXPAX_Z(v6); /*0x79d3d5*/
      v2 = g_WOL_BuddyList; /*0x79d3da*/
      v1 = j; /*0x79d3df*/
      g_WOL_ChannelMgr = v5; /*0x79d3e6*/
      dword_B779B4 = v4; /*0x79d3ec*/
    }
    if ( v2 >= v4 ) /*0x79d3f4*/
    {
      v7 = 2 * v2; /*0x79d3f6*/
      if ( 2 * v2 < 10 ) /*0x79d3fc*/
        v7 = 10; /*0x79d3fe*/
      v8 = __2_YAPAXI_Z(4 * v7); /*0x79d412*/
      memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x79d420*/
      v9 = g_WOL_ChannelMgr; /*0x79d429*/
      if ( g_WOL_ChannelMgr ) /*0x79d430*/
      {
        qmemcpy(v8, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d43c*/
        v9 = g_WOL_ChannelMgr; /*0x79d43e*/
        v3 = v11; /*0x79d443*/
      }
      __3_YAXPAX_Z(v9); /*0x79d448*/
      v2 = g_WOL_BuddyList; /*0x79d44d*/
      v1 = j; /*0x79d452*/
      g_WOL_ChannelMgr = v8; /*0x79d459*/
      dword_B779B4 = v7; /*0x79d45f*/
    }
    if ( v3 < v2 ) /*0x79d467*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v3 + 4, (char *)g_WOL_ChannelMgr + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79d484*/
      v2 = g_WOL_BuddyList; /*0x79d489*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v3); /*0x79d497*/
    if ( v10 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v10, (const char **)&v12); /*0x79d4a3*/
      v2 = g_WOL_BuddyList; /*0x79d4a8*/
    }
    g_WOL_BuddyList = v2 + 1; /*0x79d4b2*/
    DeleteAndZero(&v12); /*0x79d4b7*/
    ++v1; /*0x79d4c1*/
  }
  SendGameListWOL(); /*0x79d4d0*/
}



// ==== 0x0079D4E0  ObjectClass::CleanupWOLSession  this=ObjectClass  sig=csp ====
void CleanupWOLSession()
{
  int i; // esi
  int v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // esi
  void **v5; // edi
  unsigned int v6; // eax
  unsigned int j; // ebp
  int v8; // esi
  void **v9; // edi
  int k; // esi
  int v11; // esi
  void *v12; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_WindowManager; ++i ) /*0x79d4ee*/
    DeleteAndZero((void **)g_WOL_LoginQueue + i); /*0x79d4f8*/
  v1 = 0; /*0x79d50c*/
  for ( g_WindowManager = 0; v1 < g_WOL_RequestManager; ++v1 ) /*0x79d516*/
    DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79d521*/
  v2 = dword_B76998; /*0x79d530*/
  v3 = 0; /*0x79d536*/
  for ( g_WOL_RequestManager = 0; v3 < dword_B76998; v2 = dword_B76998 ) /*0x79d541*/
  {
    v4 = *((_DWORD *)g_WOL_AccountInfo + v3); /*0x79d549*/
    while ( v4 ) /*0x79d54e*/
    {
      v5 = (void **)v4; /*0x79d550*/
      v4 = *(_DWORD *)(v4 + 8); /*0x79d552*/
      DeleteAndZero(v5); /*0x79d55b*/
      __3_YAXPAX_Z(v5); /*0x79d561*/
    }
    *((_DWORD *)g_WOL_AccountInfo + v3++) = 0; /*0x79d573*/
  }
  dword_B76994 = 0; /*0x79d586*/
  if ( v2 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( byte_B769A4 ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79d59d*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  v6 = g_WOL_PacketQueue; /*0x79d5b1*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79d5ba*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79d5c2*/
    while ( v8 ) /*0x79d5c7*/
    {
      v9 = (void **)v8; /*0x79d5c9*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79d5cb*/
      DeleteAndZero(v9); /*0x79d5d7*/
      __3_YAXPAX_Z(v9); /*0x79d5dd*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79d5ef*/
  }
  dword_B7660C = 0; /*0x79d605*/
  if ( v6 > dword_B76638 ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( byte_B7661C ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79d61b*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79d637*/
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < g_WOL_RequestManager; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((void **)g_WOL_SessionID + k, 0); /*0x79d6a6*/
    v11 = 0; /*0x79d6ba*/
    for ( g_WOL_RequestManager = 0; v11 < g_WindowManager; ++v11 ) /*0x79d6c4*/
    {
      unknown_libname_73(&v12); /*0x79d6ca*/
      DynamicStringArray::Get(&g_WindowManager, (char **)&v12, v11); /*0x79d6da*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&v12, g_WOL_RequestManager); /*0x79d6ef*/
      DeleteAndZero(&v12); /*0x79d6f8*/
    }
    Network_Cleanup(); /*0x79d707*/
  }
  RefreshGameListWOL(); /*0x79d70c*/
}



// ==== 0x0079D720  WOLLoginDialogProc  this=-  sig=csp ====
int __stdcall WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  HWND v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // edi
  int result; // eax
  unsigned int v8; // esi
  unsigned int v9; // esi
  HWND DlgItem; // edi
  HWND v11; // eax
  HWND v12; // esi
  char *v13; // eax
  HWND v14; // ebp
  int v15; // esi
  wchar_t *v16; // eax
  unsigned int v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  BOOL v20; // [esp-4h] [ebp-80h]
  char v21[108]; // [esp+10h] [ebp-6Ch] BYREF

  v4 = a4; /*0x79d729*/
  v5 = a2; /*0x79d731*/
  v6 = a3; /*0x79d739*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79d746*/
  if ( !result ) /*0x79d74d*/
  {
    if ( v5 <= 0x2B ) /*0x79d756*/
    {
      if ( v5 == 43 ) /*0x79d758*/
      {
        Dialog::Resize((char *)v4); /*0x79d7a8*/
        return 1; /*0x79d7b9*/
      }
      v8 = v5 - 2; /*0x79d75a*/
      if ( v8 ) /*0x79d75d*/
      {
        v9 = v8 - 13; /*0x79d763*/
        if ( !v9 ) /*0x79d766*/
        {
          Dialog::DrawBackground(hWnd); /*0x79d782*/
          Dialog::StopBink(hWnd); /*0x79d789*/
          ValidateRect(hWnd, 0); /*0x79d791*/
          return 1; /*0x79d7a3*/
        }
        if ( v9 == 5 ) /*0x79d76b*/
          return 1; /*0x79d77d*/
      }
      return 0; /*0x79da81*/
    }
    if ( v5 != 273 ) /*0x79d7c2*/
    {
      if ( v5 == 1175 ) /*0x79d7ca*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79d7e6*/
        SendMessageA(DlgItem, 0xC5u, 0x78u, 0); /*0x79d7f0*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79d7ff*/
        v11 = GetDlgItem(hWnd, 1474); /*0x79d809*/
        EnableWindow(v11, 0); /*0x79d80c*/
        v12 = GetDlgItem(hWnd, 1810); /*0x79d81f*/
        v13 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79d821*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)v13); /*0x79d82f*/
        return 0; /*0x79d83a*/
      }
      return 0; /*0x79d7ca*/
    }
    if ( (unsigned __int16)v6 == 1344 ) /*0x79d849*/
    {
      v17 = HIWORD(v6); /*0x79d985*/
      switch ( v17 ) /*0x79d98e*/
      {
        case 0x300u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79da3a*/
          GetEditControlText(v4, (void **)&a4); /*0x79da48*/
          v20 = WideString::Length((const wchar_t **)&a4) != 0; /*0x79da61*/
          v19 = GetDlgItem(hWnd, 1474); /*0x79da68*/
          EnableWindow(v19, v20); /*0x79da6f*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da7c*/
          break;
        case 0x400u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79d9d7*/
          GetEditControlText(v4, (void **)&a4); /*0x79d9e5*/
          WideString::Assign((wchar_t **)&a2, asc_831D9C); /*0x79d9f6*/
          WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a2); /*0x79da0a*/
          DeleteAndZero::Alt((void **)&a2); /*0x79da16*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da22*/
          return 0; /*0x79da30*/
        case 0x501u: /*0x79d98e*/
          v18 = GetDlgItem(hWnd, 1474); /*0x79d9b7*/
          SendMessageA(v18, 0xF5u, 0, 0); /*0x79d9be*/
          return 0; /*0x79d9cd*/
      }
      return 0; /*0x79d9a2*/
    }
    if ( (unsigned __int16)v6 != 1474 ) /*0x79d854*/
    {
      if ( (unsigned __int16)v6 == 1670 ) /*0x79d85b*/
      {
        CloseDialog(hWnd, 1670); /*0x79d865*/
        return 0; /*0x79d873*/
      }
      return 0; /*0x79d85b*/
    }
    unknown_libname_74(&a4); /*0x79d87d*/
    v14 = GetDlgItem(hWnd, 1344); /*0x79d88e*/
    GetEditControlText(v14, (void **)&a4); /*0x79d899*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79d8ab*/
    if ( WideString::Length((const wchar_t **)&a4) ) /*0x79d8b8*/
    {
      WideString::Assign((wchar_t **)&a3, asc_831D9C); /*0x79d8d1*/
      WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a3); /*0x79d8e5*/
      DeleteAndZero::Alt((void **)&a3); /*0x79d8f1*/
      memset(v21, 0, sizeof(v21)); /*0x79d901*/
      strcpy(&v21[36], String::GetOrEmpty((char **)&g_WOL_LoginObject)); /*0x79d927*/
      v15 = *(_DWORD *)ppv; /*0x79d936*/
      v16 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x79d93f*/
      (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v15 + 248))(ppv, v21, v16); /*0x79d950*/
    }
    InvalidateRect(v14, 0, 0); /*0x79d95b*/
    CloseDialog(hWnd, 1474); /*0x79d968*/
    DeleteAndZero::Alt((void **)&a4); /*0x79d974*/
    return 0; /*0x79d97c*/
  }
  return result; /*0x79d771*/
}



// ==== 0x0079DA90  ExtractChatCommand  this=-  sig=csp ====
char **__fastcall Chat_ExtractCommand(char **a1, HWND a2)
{
  LRESULT v4; // esi
  int v6; // [esp+10h] [ebp-4h] BYREF

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
LABEL_7:
    String::AssignFromPtr(a1, &g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (int)&v6); /*0x79dad6*/
      if ( WideString::GetChar((const wchar_t **)&v6, 0) == 40 ) /*0x79daea*/
      {
        if ( (unsigned __int8)UI_Helper_7B7980(0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((void **)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar(0x28u); /*0x79db2f*/
    ToWideStringCharAlt(a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((void **)&v6); /*0x79db43*/
    return a1; /*0x79db48*/
  }
}



// ==== 0x0079DB50  ChatDialog::DlgProc  this=ChatDialog  sig=csp ====
int __stdcall ChatDialog_DlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // ebx
  HWND v6; // eax
  HWND v7; // eax
  char **Command; // ebx
  HWND v9; // esi
  char *v10; // eax
  WPARAM v11; // edi
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  int v18; // esi
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  BOOL v21; // [esp-4h] [ebp-98h]
  void *v22; // [esp+10h] [ebp-84h] BYREF
  void *v23; // [esp+14h] [ebp-80h] BYREF
  void *v24; // [esp+18h] [ebp-7Ch] BYREF
  void *v25; // [esp+1Ch] [ebp-78h] BYREF
  void *v26; // [esp+20h] [ebp-74h] BYREF
  void *v27; // [esp+24h] [ebp-70h] BYREF
  char v28[108]; // [esp+28h] [ebp-6Ch] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79db7c*/
  if ( result ) /*0x79db83*/
    return result; /*0x79db83*/
  if ( a2 <= 0x2B ) /*0x79db8c*/
  {
    if ( a2 == 43 ) /*0x79db8e*/
    {
      Dialog::Resize((char *)a4); /*0x79dbe4*/
      return 1; /*0x79dbf8*/
    }
    if ( a2 != 2 ) /*0x79db93*/
    {
      if ( a2 == 15 ) /*0x79db9c*/
      {
        Dialog::DrawBackground(hWnd); /*0x79dbbb*/
        Dialog::StopBink(hWnd); /*0x79dbc2*/
        ValidateRect(hWnd, 0); /*0x79dbca*/
        return 1; /*0x79dbdf*/
      }
      if ( a2 == 20 ) /*0x79dba1*/
        return 1; /*0x79dbb6*/
    }
    return 0; /*0x79dba1*/
  }
  if ( a2 != 273 ) /*0x79dc01*/
  {
    if ( a2 == 1175 ) /*0x79dc0d*/
    {
      DlgItem = GetDlgItem(hWnd, 1344); /*0x79dc29*/
      SendMessageA(DlgItem, 0xC5u, 0x78u, 0); /*0x79dc33*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79dc42*/
      v6 = GetDlgItem(hWnd, 1474); /*0x79dc4c*/
      EnableWindow(v6, 0); /*0x79dc4f*/
      v7 = GetDlgItem(hWnd, 1343); /*0x79dc5b*/
      Command = ExtractChatCommand((char **)&v27, v7); /*0x79dc6e*/
      v9 = GetDlgItem(hWnd, 1816); /*0x79dc74*/
      v10 = String::GetOrEmpty_Alt(Command); /*0x79dc76*/
      SendMessageA(v9, 0x4B4u, 0, (LPARAM)v10); /*0x79dc84*/
      DeleteAndZero(&v27); /*0x79dc8a*/
      if ( g_WWMouseClass_Instance ) /*0x79dc97*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x79dc9f*/
        return 0; /*0x79dcae*/
      }
    }
    return 0; /*0x79dc97*/
  }
  if ( (unsigned __int16)a3 > 0x5C2u ) /*0x79dcbd*/
  {
    if ( (unsigned __int16)a3 == 1670 ) /*0x79dfbd*/
      CloseDialog(hWnd, 1474); /*0x79dfc6*/
    return 0; /*0x79dfc6*/
  }
  if ( (unsigned __int16)a3 != 1474 ) /*0x79dcc3*/
  {
    if ( (unsigned __int16)a3 == 1343 ) /*0x79dcce*/
    {
      if ( HIWORD(a3) == 1 ) /*0x79de22*/
      {
        ExtractChatCommand((char **)&v23, a4); /*0x79de2e*/
        v14 = GetDlgItem(hWnd, 1816); /*0x79de43*/
        v15 = String::GetOrEmpty_Alt((char **)&v23); /*0x79de45*/
        SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x79de53*/
        DeleteAndZero(&v23); /*0x79de5d*/
        return 0; /*0x79de6e*/
      }
      return 0; /*0x79de22*/
    }
    if ( (unsigned __int16)a3 == 1344 ) /*0x79dcd5*/
    {
      v11 = HIWORD(a3); /*0x79dcdb*/
      if ( HIWORD(a3) == 768 ) /*0x79dce4*/
      {
        unknown_libname_74(&v22); /*0x79ddd1*/
        GetEditControlText(a4, &v22); /*0x79dddc*/
        v21 = WideString::Length((const wchar_t **)&v22) != 0; /*0x79ddf2*/
        v13 = GetDlgItem(hWnd, 1474); /*0x79ddf9*/
        EnableWindow(v13, v21); /*0x79de00*/
        DeleteAndZero::Alt(&v22); /*0x79de0a*/
        return 0; /*0x79de1b*/
      }
      if ( v11 == 1024 ) /*0x79dcf0*/
      {
        unknown_libname_74(&v22); /*0x79dd80*/
        GetEditControlText(a4, &v22); /*0x79dd8b*/
        WideString::Assign((wchar_t **)&v24, asc_831D9C); /*0x79dd99*/
        WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v24); /*0x79dda7*/
        DeleteAndZero::Alt(&v24); /*0x79ddb0*/
        DeleteAndZero::Alt(&v22); /*0x79ddb9*/
        return 0; /*0x79ddca*/
      }
      if ( v11 == 1281 ) /*0x79dcfc*/
      {
        unknown_libname_74(&v22); /*0x79dd06*/
        GetEditControlText(a4, &v22); /*0x79dd11*/
        WideString::Assign((wchar_t **)&v26, asc_831D9C); /*0x79dd1f*/
        WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v26); /*0x79dd2d*/
        DeleteAndZero::Alt(&v26); /*0x79dd36*/
        if ( WideString::Length((const wchar_t **)&v22) ) /*0x79dd3f*/
        {
          v12 = GetDlgItem(hWnd, 1474); /*0x79dd57*/
          SendMessageA(v12, 0xF5u, 0, 0); /*0x79dd5e*/
        }
        DeleteAndZero::Alt(&v22); /*0x79dd68*/
        return 0; /*0x79dd79*/
      }
    }
    return 0; /*0x79dfcb*/
  }
  unknown_libname_74(&v22); /*0x79de75*/
  v16 = GetDlgItem(hWnd, 1344); /*0x79de88*/
  GetEditControlText(v16, &v22); /*0x79de90*/
  SendMessageA(v16, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79dea2*/
  v17 = GetDlgItem(hWnd, 1343); /*0x79deae*/
  ExtractChatCommand((char **)&v23, v17); /*0x79deb6*/
  if ( String::Length((const char **)&v23) && WideString::Length((const wchar_t **)&v22) ) /*0x79ded0*/
  {
    WideString::Assign((wchar_t **)&v25, asc_831D9C); /*0x79dee6*/
    WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v25); /*0x79def4*/
    DeleteAndZero::Alt(&v25); /*0x79defd*/
    memset(v28, 0, sizeof(v28)); /*0x79df0d*/
    strcpy(&v28[36], String::GetOrEmpty((char **)&v23)); /*0x79df32*/
    v18 = *(_DWORD *)ppv; /*0x79df41*/
    v19 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x79df47*/
    (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v18 + 248))(ppv, v28, v19); /*0x79df58*/
    v20 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x79df62*/
    Dialog::ShowMessage(61680, (size_t)g_Str_Fmt_Hs_S_Bracket, g_WebBrowser, v20); /*0x79df7b*/
  }
  EnableWindow(a4, 0); /*0x79df86*/
  InvalidateRect(v16, 0, 0); /*0x79df91*/
  DeleteAndZero(&v23); /*0x79df9b*/
  DeleteAndZero::Alt(&v22); /*0x79dfa4*/
  return 0; /*0x79dba7*/
}



// ==== 0x0079DFE0  GameSetupDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  int v11; // eax
  int v12; // esi
  char **v13; // ecx
  int v14; // eax
  int v15; // esi
  char **v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  int v21; // [esp+0h] [ebp-F8h]
  void *v22; // [esp+14h] [ebp-E4h] BYREF
  void *v23; // [esp+18h] [ebp-E0h] BYREF
  LONG v24; // [esp+1Ch] [ebp-DCh]
  char v25[108]; // [esp+20h] [ebp-D8h] BYREF
  char v26[108]; // [esp+8Ch] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    v24 = WindowLongA; /*0x79e043*/
    if ( a2 > 0x111 ) /*0x79e047*/
    {
      if ( a2 == 1175 ) /*0x79e488*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79e4d0*/
        SendMessageA(DlgItem, 0xC5u, 9u, 0); /*0x79e4da*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x79e4e6*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e4f5*/
        v20 = GetDlgItem(hWnd, 1794); /*0x79e4ff*/
        EnableWindow(v20, 0); /*0x79e502*/
      }
      else if ( a2 == 1242 ) /*0x79e48d*/
      {
        v18 = GetDlgItem(hWnd, 1794); /*0x79e49e*/
        PostMessageA(v18, 0xF5u, 0, 0); /*0x79e4a5*/
        return 0; /*0x79e4b7*/
      }
      return 0; /*0x79e48d*/
    }
    if ( a2 != 273 ) /*0x79e04d*/
    {
      switch ( a2 ) /*0x79e052*/
      {
        case 0xFu: /*0x79e052*/
          Dialog::DrawBackground(hWnd); /*0x79e07d*/
          Dialog::StopBink(hWnd); /*0x79e084*/
          ValidateRect(hWnd, 0); /*0x79e08c*/
          break;
        case 0x14u: /*0x79e052*/
          break;
        case 0x2Bu: /*0x79e052*/
          Dialog::Resize((char *)a4); /*0x79e064*/
          return 1; /*0x79e078*/
        default:
          return 0; /*0x79e05c*/
      }
      return 1; /*0x79e0a1*/
    }
    if ( (unsigned __int16)a3 == 1344 ) /*0x79e0b0*/
    {
      if ( HIWORD(a3) ) /*0x79e42b*/
      {
        unknown_libname_73(&v22); /*0x79e438*/
        GetDialogText(a4, &v22); /*0x79e443*/
        v21 = (unsigned __int8)MapSeed::CheckName((const char **)&v22); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v21); /*0x79e464*/
        DeleteAndZero(&v22); /*0x79e46e*/
        return 0; /*0x79e47f*/
      }
      return 0; /*0x79e42e*/
    }
    if ( (unsigned __int16)a3 == 1670 ) /*0x79e0bb*/
    {
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79e419*/
      return 0; /*0x79e428*/
    }
    if ( (unsigned __int16)a3 != 1794 ) /*0x79e0c4*/
      return 0; /*0x79e508*/
    unknown_libname_73(&v23); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, &v23); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e0f9*/
    if ( !MapSeed::CheckName((const char **)&v23) || !MapSeed::CheckName((const char **)&v23) ) /*0x79e114*/
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)v24 + 4))(v24, hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero(&v23); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(v25, 0, sizeof(v25)); /*0x79e12e*/
    v7 = String::GetOrEmpty_Alt((char **)&v23); /*0x79e134*/
    strncpy(&v25[36], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 224))(ppv, v25); /*0x79e154*/
    if ( !MapSeed::CheckName((const char **)&v23) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((char **)&v22, (const char **)&v23); /*0x79e174*/
    v8 = g_WindowManager; /*0x79e179*/
    v9 = g_WindowManager; /*0x79e17e*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e191*/
      v8 = g_WindowManager; /*0x79e196*/
    }
    if ( v8 >= dword_B73AAC ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e1a8*/
      v8 = g_WindowManager; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v9 + 4, (char *)g_WOL_LoginQueue + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79e1d1*/
      v8 = g_WindowManager; /*0x79e1d6*/
    }
    v10 = (char **)((char *)g_WOL_LoginQueue + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)&v22); /*0x79e1f0*/
      v8 = g_WindowManager; /*0x79e1f5*/
    }
    g_WindowManager = v8 + 1; /*0x79e1fb*/
    v11 = g_WOL_RequestManager; /*0x79e200*/
    v12 = g_WOL_RequestManager; /*0x79e205*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e218*/
      v11 = g_WOL_RequestManager; /*0x79e21d*/
    }
    if ( v11 >= dword_B76984 ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e22f*/
      v11 = g_WOL_RequestManager; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v12 + 4, (char *)g_WOL_SessionID + 4 * v12, 4 * (v11 + 0x3FFFFFFF * v12)); /*0x79e258*/
      v11 = g_WOL_RequestManager; /*0x79e25d*/
    }
    v13 = (char **)((char *)g_WOL_SessionID + 4 * v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)&v22); /*0x79e277*/
      v11 = g_WOL_RequestManager; /*0x79e27c*/
    }
    g_WOL_RequestManager = v11 + 1; /*0x79e282*/
    v14 = g_WOL_BuddyList; /*0x79e287*/
    v15 = g_WOL_BuddyList; /*0x79e28c*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = g_WOL_BuddyList; /*0x79e2a4*/
    }
    if ( v14 >= dword_B779B4 ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = g_WOL_BuddyList; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v15 + 4, (char *)g_WOL_ChannelMgr + 4 * v15, 4 * (v14 + 0x3FFFFFFF * v15)); /*0x79e2df*/
      v14 = g_WOL_BuddyList; /*0x79e2e4*/
    }
    v16 = (char **)((char *)g_WOL_ChannelMgr + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)&v22); /*0x79e2fe*/
      v14 = g_WOL_BuddyList; /*0x79e303*/
    }
    g_WOL_BuddyList = v14 + 1; /*0x79e30e*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e331*/
      {
LABEL_50:
        DeleteAndZero(&v22); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e33c*/
    }
    if ( g_WOL_RequestManager ) /*0x79e348*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e35a*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e36a*/
      g_WOL_ParseState = time(0); /*0x79e376*/
      memset(v26, 0, sizeof(v26)); /*0x79e389*/
      strcpy(&v26[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v26); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}



// ==== 0x0079E520  PlayerOptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // edi
  HWND v6; // edi
  HWND v7; // edi
  LPARAM v8; // eax
  LPARAM v9; // eax
  int k; // esi
  int v11; // esi
  int m; // esi
  HWND v13; // eax
  int j; // esi
  int v15; // esi
  DLGTEMPLATE *Indirect; // esi
  HWND v17; // eax
  HWND v18; // eax
  int v19; // esi
  _DWORD *v20; // esi
  HWND v21; // eax
  LRESULT v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  int v25; // esi
  _DWORD *v26; // esi
  HWND v27; // eax
  int v28; // esi
  HWND v29; // eax
  HWND DlgItem; // esi
  LRESULT v31; // edi
  int i; // esi
  int v33; // esi
  BOOL v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL Buddy; // [esp-4h] [ebp-90h]
  int v37; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v38[3]; // [esp+14h] [ebp-78h] BYREF
  char v39[108]; // [esp+20h] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e54f*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, (unsigned int)a4); /*0x79e562*/
  if ( !result ) /*0x79e569*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e57b*/
    if ( a2 <= 0x2B ) /*0x79e57d*/
    {
      switch ( a2 ) /*0x79e583*/
      {
        case 0x2Bu: /*0x79e583*/
          Dialog::Resize((char *)a4); /*0x79e5f8*/
          return 1; /*0x79e609*/
        case 2u: /*0x79e583*/
          KillTimer(hWnd, 0); /*0x79e5d6*/
          KillTimer(hWnd, 0x704u); /*0x79e5de*/
          Config::SaveObserverMode(); /*0x79e5e0*/
          return 0; /*0x79e5ee*/
        case 0xFu: /*0x79e583*/
          Dialog::DrawBackground(hWnd); /*0x79e5a9*/
          Dialog::StopBink(hWnd); /*0x79e5b0*/
          ValidateRect(hWnd, 0); /*0x79e5b8*/
          return 1; /*0x79e5ca*/
        case 0x14u: /*0x79e583*/
          return 1; /*0x79e5a4*/
      }
      return 0; /*0x79e592*/
    }
    switch ( a2 ) /*0x79e612*/
    {
      case 0x111u: /*0x79e612*/
        if ( (*(unsigned __int8 (__thiscall **)(LONG))(*(_DWORD *)WindowLongA + 8))(WindowLongA) ) /*0x79e9dd*/
          return 0; /*0x79e9e2*/
        if ( (unsigned __int16)uIDEvent > 0x689u ) /*0x79e9f4*/
        {
          switch ( (__int16)uIDEvent ) /*0x79ed73*/
          {
            case 1794: /*0x79ed73*/
              SimpleDialogControl::Constructor(v38); /*0x79edc9*/
              v38[0] = &off_7F7624; /*0x79ede2*/
              RunDialog(0x115u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL, (LPARAM)v38); /*0x79ede6*/
              FillBuddyListWOL(hWnd); /*0x79eded*/
              v38[0] = &off_7F7624; /*0x79edf6*/
              OwnerDrawControl::InitVtable(v38); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v37); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v37); /*0x79ee48*/
              RemoveWOLPlayerLogin(&v37); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL(hWnd); /*0x79ee6d*/
              DeleteAndZero((void **)&v37); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79eed3*/
                DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79eede*/
              v33 = 0; /*0x79eef2*/
              for ( g_WOL_RequestManager = 0; v33 < g_WindowManager; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v37); /*0x79ef06*/
                if ( v33 >= 0 && v33 < g_WindowManager ) /*0x79ef15*/
                  String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v33); /*0x79ef24*/
                StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79ef3a*/
                DeleteAndZero((void **)&v37); /*0x79ef43*/
              }
              if ( !String::Length(&g_WOL_AuthObject) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - g_WOL_ParseState) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79ef80*/
LABEL_112:
                if ( g_WOL_RequestManager ) /*0x79ef8c*/
                {
                  if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79ef9a*/
                    DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79efaa*/
                  g_WOL_ParseState = time(0); /*0x79efb6*/
                  memset(v39, 0, sizeof(v39)); /*0x79efc6*/
                  strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v39); /*0x79f005*/
                }
              }
LABEL_116:
              SetTimer(hWnd, 0x704u, 0xBB8u, 0); /*0x79f008*/
              break; /*0x79f015*/
            case 1887: /*0x79ed73*/
            case 1888: /*0x79ed73*/
              v28 = 0; /*0x79ed80*/
              v29 = GetDlgItem(hWnd, 1888); /*0x79ed82*/
              if ( v29 ) /*0x79ed8a*/
                v28 = SendMessageA(v29, 0xF0u, 0, 0); /*0x79ed9a*/
              if ( (_WORD)uIDEvent == 1887 ) /*0x79eda1*/
                v28 = v28 == 0; /*0x79edaa*/
              g_MenuStateFlags = v28; /*0x79edae*/
              Dialog::RefreshDialogsGame(0); /*0x79edb4*/
              return 0; /*0x79edc2*/
            default:
              return 0;
          }
          return 0; /*0x79f015*/
        }
        if ( (unsigned __int16)uIDEvent != 1673 ) /*0x79e9fa*/
        {
          if ( (unsigned __int16)uIDEvent > 0x62Bu ) /*0x79ea05*/
          {
            if ( (unsigned __int16)uIDEvent == 1581 ) /*0x79eb04*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1581); /*0x79eb32*/
              return 0; /*0x79eb3e*/
            }
            if ( (unsigned __int16)uIDEvent == 1670 ) /*0x79eb09*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79eb19*/
              return 0; /*0x79eb25*/
            }
          }
          else
          {
            switch ( (unsigned __int16)uIDEvent ) /*0x79ea0b*/
            {
              case 0x62Bu: /*0x79ea0b*/
                (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1579); /*0x79eaf0*/
                return 0; /*0x79eafc*/
              case 0x540u: /*0x79ea0b*/
                if ( HIWORD(uIDEvent) == 768 ) /*0x79ea8f*/
                {
                  unknown_libname_73(&v37); /*0x79ea99*/
                  GetDialogText(a4, (void **)&v37); /*0x79eaa9*/
                  v34 = String::Length((const char **)&v37) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v34); /*0x79eacb*/
                  DeleteAndZero((void **)&v37); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                Indirect = (DLGTEMPLATE *)CreateDialogIndirect( /*0x79ea41*/
                                            g_hInstance,
                                            286,
                                            g_hWnd,
                                            (DLGPROC)ChatDialog::DlgProc,
                                            0);
                SetupDialog((HWND)Indirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)Indirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)Indirect, (unsigned __int8 (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
                return 0; /*0x79ea83*/
            }
          }
          return 0; /*0x79ea1d*/
        }
        if ( HIWORD(uIDEvent) != 1 ) /*0x79eb45*/
        {
          if ( HIWORD(uIDEvent) == 2 ) /*0x79eb4c*/
          {
            if ( FindBuddyWOL() ) /*0x79eb52*/
            {
              v18 = GetDlgItem(hWnd, 1581); /*0x79eb6a*/
              SendMessageA(v18, 0xF5u, 0, 0); /*0x79eb71*/
              return 0; /*0x79eb80*/
            }
            if ( String::Length(&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( dword_B76994 ) /*0x79eb9c*/
              {
                v19 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79ebc2*/
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !String::Compare((const char **)v19, &g_WOL_LoginObject) ) /*0x79ebdb*/
                  {
                    v19 = *(_DWORD *)(v19 + 8); /*0x79ebdd*/
                    if ( !v19 ) /*0x79ebe2*/
                      return 0; /*0x79ebed*/
                  }
                  v20 = (_DWORD *)(v19 + 4); /*0x79ebf8*/
                  if ( v20 ) /*0x79ebfd*/
                  {
                    if ( *v20 > 2u ) /*0x79ec07*/
                    {
                      v21 = GetDlgItem(hWnd, 1474); /*0x79ec21*/
                      SendMessageA(v21, 0xF5u, 0, 0); /*0x79ec28*/
                      return 0; /*0x79ec37*/
                    }
                  }
                }
              }
            }
          }
          return 0; /*0x79ec07*/
        }
        v22 = SendMessageA(a4, 0x188u, 0, 0); /*0x79ec4b*/
        if ( v22 == -1 ) /*0x79ec54*/
          DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, (void **)&g_WOL_LoginObject); /*0x79ec6b*/
        v35 = String::Length(&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v35); /*0x79ec98*/
        Buddy = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, Buddy); /*0x79ecae*/
        if ( String::Length(&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !dword_B76994 ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79eced*/
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !String::Compare((const char **)v25, &g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = *(_DWORD *)(v25 + 8); /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              LOBYTE(v37) = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            LOBYTE(v37) = 1; /*0x79ed2f*/
          else
LABEL_88:
            LOBYTE(v37) = 0; /*0x79ed28*/
        }
        else
        {
          LOBYTE(v37) = 0; /*0x79ecbe*/
        }
LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (unsigned __int8)v37); /*0x79ed48*/
        ShowUserProfileWOL(hWnd); /*0x79ed4c*/
        return 0; /*0x79ed54*/
      case 0x113u: /*0x79e612*/
        if ( uIDEvent ) /*0x79e803*/
        {
          if ( uIDEvent == 1796 ) /*0x79e80b*/
          {
            KillTimer(hWnd, 0x704u); /*0x79e813*/
            v13 = GetDlgItem(hWnd, 1796); /*0x79e81d*/
            EnableWindow(v13, 1); /*0x79e824*/
            return 0; /*0x79e833*/
          }
          return 0; /*0x79e80b*/
        }
        if ( (unsigned int)(time(0) - dword_B778C8) <= 0x1E ) /*0x79e84b*/
          return 0; /*0x79e84b*/
        dword_B778C8 = time(0); /*0x79e862*/
        if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79e869*/
        {
          SetEvent(hEvent); /*0x79e878*/
          return 0; /*0x79e887*/
        }
        for ( j = 0; j < g_WOL_RequestManager; ++j ) /*0x79e893*/
          DeleteAndZero((void **)g_WOL_SessionID + j); /*0x79e89e*/
        v15 = 0; /*0x79e8b2*/
        for ( g_WOL_RequestManager = 0; v15 < g_WindowManager; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v37); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < g_WindowManager ) /*0x79e8d5*/
            String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v15); /*0x79e8e5*/
          StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79e8fb*/
          DeleteAndZero((void **)&v37); /*0x79e904*/
        }
        if ( String::Length(&g_WOL_AuthObject) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e941*/
        }
        if ( !g_WOL_RequestManager ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e95f*/
          DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e96f*/
        g_WOL_ParseState = time(0); /*0x79e97b*/
        memset(v39, 0, sizeof(v39)); /*0x79e98b*/
        strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v39); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame(hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, dword_B765F0, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, dword_B73E3C, dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(g_DialogHashTable, g_Str_File_wouref_pcx, 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(g_DialogHashTable, g_Str_File_wodref_pcx, 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < g_WindowManager; ++k ) /*0x79e703*/
          Object::DtorWithDelete((void **)g_WOL_LoginQueue + k, 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( g_WindowManager = 0; v11 < g_WOL_RequestManager; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((void **)g_WOL_SessionID + v11, 0); /*0x79e73b*/
        g_WOL_RequestManager = 0; /*0x79e74f*/
        HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79e755*/
        HashTable::Rebuild(&g_WOL_EventQueue); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79e76c*/
        if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79e784*/
          RefreshChannelListWOL(); /*0x79e786*/
        Array::CleanupArrayWOL(&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < g_WindowManager; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v37); /*0x79e7a4*/
          DynamicStringArray::Get(&g_WindowManager, (char **)&v37, m); /*0x79e7b4*/
          StringVector::Insert(&g_WOL_BuddyList, (const char **)&v37, g_WOL_BuddyList); /*0x79e7ca*/
          DeleteAndZero((void **)&v37); /*0x79e7d3*/
        }
        SendGameListWOL(); /*0x79e7e2*/
        SetTimer(hWnd, 0, 0x3E8u, 0); /*0x79e7ef*/
        return 0; /*0x79e7fe*/
      default:
        return 0; /*0x79f01b*/
    }
  }
  return result; /*0x79e598*/
}



// ==== 0x0079F0A0  sub_79F0A0  this=-  sig=ida-proto ====
char __fastcall sub_79F0A0(char **a1, int *a2, char *a3)
{
  char *v3; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  char *v8; // eax
  int v10; // [esp+10h] [ebp-8h]

  v3 = a3; /*0x79f0a6*/
  memset(a3, 0, 0x10Cu); /*0x79f0ba*/
  v5 = *a2; /*0x79f0bc*/
  v6 = 0; /*0x79f0be*/
  v10 = 0; /*0x79f0c2*/
  if ( *a2 <= 0 ) /*0x79f0c6*/
  {
LABEL_8:
    memset(v3, 0, 0x10Cu); /*0x79f115*/
    return 0; /*0x79f11a*/
  }
  else
  {
    v7 = 0; /*0x79f0c8*/
    while ( 1 ) /*0x79f0ca*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x79f0d0*/
      {
        qmemcpy(a3, (const void *)(v7 + a2[2]), 0x10Cu); /*0x79f0e0*/
        v3 = a3; /*0x79f0e2*/
        v6 = v10; /*0x79f0e6*/
      }
      v8 = String::GetOrEmpty_Alt(a1); /*0x79f0ee*/
      if ( !_strcmpi(v3 + 52, v8) ) /*0x79f0f8*/
        return 1; /*0x79f12f*/
      v5 = *a2; /*0x79f104*/
      ++v6; /*0x79f106*/
      v7 += 268; /*0x79f107*/
      v10 = v6; /*0x79f10f*/
      if ( v6 >= *a2 ) /*0x79f113*/
        goto LABEL_8; /*0x79f113*/
    }
  }
}



// ==== 0x0079F140  ObjectClass::GameOptionsScreenWOL  this=ObjectClass  sig=csp ====
int WOL_GameOptionsScreen()
{
  wchar_t *String; // eax
  int i; // esi
  HWND v3; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int v6; // eax
  unsigned int j; // ebx
  int v8; // esi
  void **v9; // edi
  DWORD (__stdcall *v10)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v11; // esi
  HWND v12; // edi
  DWORD m; // esi
  int v14; // ecx
  HANDLE *v15; // esi
  DWORD v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HANDLE *v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // ebp
  signed int v24; // eax
  char *v25; // eax
  HANDLE *v26; // esi
  signed int v27; // eax
  int v28; // ebx
  char *v29; // eax
  char v30; // al
  DWORD k; // esi
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  wchar_t *v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebp
  int v43; // [esp+10h] [ebp-22Ch] BYREF
  _DWORD v44[3]; // [esp+14h] [ebp-228h] BYREF
  void *v45; // [esp+20h] [ebp-21Ch] BYREF
  _BYTE v46[268]; // [esp+24h] [ebp-218h] BYREF
  char v47[268]; // [esp+130h] [ebp-10Ch] BYREF

  g_NetworkLobby_Init = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f166*/
    goto LABEL_6; /*0x79f166*/
  GameOptionsScreenWOL_Helper(); /*0x79f16f*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79f178*/
  {
    SetEvent(Handles); /*0x79f187*/
    dword_A8B248 = 0; /*0x79f18d*/
    return 0; /*0x79f19f*/
  }
  if ( !RequestChannelListWOL() ) /*0x79f1a0*/
  {
LABEL_6:
    dword_A8B248 = 0; /*0x79f1aa*/
    return 0; /*0x79f1bb*/
  }
  if ( g_WOL_ChannelState ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f1e9*/
    String = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    WideString::Assign((wchar_t **)&v45, String); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)&v45, 1); /*0x79f217*/
    DeleteAndZero::Alt(&v45); /*0x79f220*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(); /*0x79f242*/
    }
    v3 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f256*/
    if ( v3 ) /*0x79f25d*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x79f268*/
      if ( !g_WOL_ChannelList ) /*0x79f26e*/
        CloseDialog(v3, 0); /*0x79f274*/
    }
    Current = Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  v6 = g_WOL_PacketQueue; /*0x79f295*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79f29e*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79f2a5*/
    while ( v8 ) /*0x79f2aa*/
    {
      v9 = (void **)v8; /*0x79f2ac*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79f2ae*/
      DeleteAndZero(v9); /*0x79f2ba*/
      __3_YAXPAX_Z(v9); /*0x79f2c0*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79f2d3*/
  }
  dword_B7660C = 0; /*0x79f2e6*/
  if ( v6 > dword_B76638 ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( byte_B7661C ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79f2fe*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79f310*/
  }
  v10 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor(v44); /*0x79f327*/
    v44[0] = &off_7F7624; /*0x79f32c*/
    v11 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v11++); /*0x79f33c*/
    while ( (int)v11 < (int)g_WOL_RequestObject ); /*0x79f347*/
    v12 = (HWND)CreateDialog( /*0x79f35d*/
                  0x116u,
                  (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                  (LPARAM)v44);
    Dialog::Show(v12); /*0x79f361*/
    if ( !(unsigned __int8)ObjectClass::Release(v44) ) /*0x79f36a*/
      break; /*0x79f36a*/
LABEL_33:
    Dialog::Destroy(v12); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(v44) ) /*0x79f411*/
    {
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( dword_A8B248 != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v15 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v15++); /*0x79f426*/
        while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL((int)ResetEvent, (int)v15) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v16 = v10(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v16 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v16)); /*0x79f47f*/
            if ( !v16 || v16 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v16 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              g_NetworkLobby_Init = 0; /*0x79f9a0*/
              v44[0] = &off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(v44); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v16 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              g_NetworkLobby_Init = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v44[0] = &off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(v44); /*0x79fa03*/
              return 1; /*0x79fa17*/
            }
            if ( g_WOL_ChannelLeaveState ) /*0x79f4a2*/
              goto LABEL_48; /*0x79f4a2*/
          }
          Debug::Log(); /*0x79f4b2*/
          g_WOL_ChannelLeaveState = 1; /*0x79f4ba*/
LABEL_48:
          Debug::Log(); /*0x79f4c4*/
          g_WOL_ChannelLeaveState = 0; /*0x79f4d1*/
        }
        else
        {
          Debug::Log(); /*0x79f441*/
        }
        v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f4dc*/
        if ( v17 ) /*0x79f4e3*/
        {
          g_WOL_ChannelList = 0; /*0x79f4e9*/
          CloseDialog(v17, 0); /*0x79f4ef*/
        }
        v18 = Dialog::GetCurrent(); /*0x79f4f4*/
        v19 = GetDlgItem(v18, 1344); /*0x79f4ff*/
        if ( v19 ) /*0x79f507*/
          SetFocus(v19); /*0x79f50a*/
        v20 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v20++); /*0x79f518*/
        while ( (int)v20 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (int)GameLoop::Thunk, 0); /*0x79f53b*/
        while ( CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        g_NetworkLobby_Init = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
        memset(v47, 0, sizeof(v47)); /*0x79f574*/
        if ( !String::Length(&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v43 = 0; /*0x79f597*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE8E0(&g_WOL_LoginObject, &v43) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v43 ) /*0x79f5ae*/
          qmemcpy(v47, (const void *)v43, sizeof(v47)); /*0x79f5bc*/
        v21 = 0; /*0x79f5cd*/
        v43 = 0; /*0x79f5cf*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE7C0(&g_WOL_LoginObject, &v43) ) /*0x79f5d3*/
          goto LABEL_117; /*0x79f5da*/
        if ( v43 ) /*0x79f5e6*/
          v21 = *(_DWORD *)v43; /*0x79f5e8*/
        v22 = v21 - 4; /*0x79f5ea*/
        if ( !v22 ) /*0x79f5ed*/
        {
          v40 = 0; /*0x79fa80*/
          memset(v46, 0, sizeof(v46)); /*0x79fa82*/
          v41 = g_WOL_AuthPool; /*0x79fa84*/
          dword_A8B248 = 4; /*0x79fa89*/
          if ( g_WOL_AuthPool > 0 ) /*0x79fa95*/
          {
            v42 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v42 >= 0 && v40 < v41 ) /*0x79fa9f*/
                qmemcpy(v46, (char *)dword_B73E18 + v42, sizeof(v46)); /*0x79fab3*/
              if ( !_strcmpi(&v46[52], &v47[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v41 = g_WOL_AuthPool; /*0x79face*/
              ++v40; /*0x79fad3*/
              v42 += 268; /*0x79fad4*/
              if ( v40 >= g_WOL_AuthPool ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v47[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v22 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        String::Assign((char **)&v45, &v47[52]); /*0x79f606*/
        v23 = 0; /*0x79f616*/
        memset(v46, 0, sizeof(v46)); /*0x79f618*/
        v24 = g_WOL_ChatState; /*0x79f61a*/
        if ( (int)g_WOL_ChatState <= 0 ) /*0x79f621*/
        {
LABEL_77:
          memset(v46, 0, sizeof(v46)); /*0x79f681*/
          if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v26 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v26++); /*0x79f69d*/
          while ( (int)v26 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
          if ( !RequestChannelList2WOL(41, 0) ) /*0x79f6b5*/
          {
            SetEvent(Handles); /*0x79f6c5*/
            goto LABEL_84; /*0x79f6cb*/
          }
          if ( !RequestChannelListWOL() ) /*0x79f6cd*/
          {
LABEL_84:
            Debug::Log(); /*0x79f6d6*/
            SetEvent(hEvent); /*0x79f6e9*/
            goto LABEL_94; /*0x79f6ef*/
          }
          v23 = 0; /*0x79f6fc*/
          memset(v46, 0, sizeof(v46)); /*0x79f6fe*/
          v27 = g_WOL_ChatState; /*0x79f700*/
          if ( (int)g_WOL_ChatState <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(v46, 0, sizeof(v46)); /*0x79f763*/
LABEL_94:
            v30 = 0; /*0x79f765*/
          }
          else
          {
            v28 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v28 >= 0 && v23 < v27 ) /*0x79f711*/
                qmemcpy(v46, (char *)g_WOL_ConnectionHandler + v28, sizeof(v46)); /*0x79f725*/
              v29 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f72b*/
              if ( !_strcmpi(&v46[52], v29) ) /*0x79f736*/
                break; /*0x79f736*/
              v27 = g_WOL_ChatState; /*0x79f742*/
              ++v23; /*0x79f747*/
              v28 += 268; /*0x79f748*/
              if ( v23 >= (int)g_WOL_ChatState ) /*0x79f750*/
              {
                v10 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v10 = WaitForMultipleObjects; /*0x79f775*/
            v30 = 1; /*0x79f77b*/
          }
          if ( !v30 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v10 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v10 >= 0 && v23 < v24 ) /*0x79f62b*/
            qmemcpy(v46, (char *)v10 + (_DWORD)g_WOL_ConnectionHandler, sizeof(v46)); /*0x79f63f*/
          v25 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f645*/
          if ( !_strcmpi(&v46[52], v25) ) /*0x79f650*/
            break; /*0x79f650*/
          v24 = g_WOL_ChatState; /*0x79f660*/
          ++v23; /*0x79f665*/
          v10 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v10 + 268); /*0x79f666*/
          if ( v23 >= (int)g_WOL_ChatState ) /*0x79f66e*/
          {
            v10 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
LABEL_98:
        if ( !ValidateJoinWOL(g_MenuStateFlags != 0, (int)v46, (int)v10, v23) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v10 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v10 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v43 = 500; /*0x79f7c5*/
        break; /*0x79f7c5*/
      default:
        goto LABEL_117;
    }
    while ( 1 ) /*0x79f7db*/
    {
      for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x79f7e3*/
            k == 258;
            k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
      {
        if ( g_WOL_ChannelLeaveState ) /*0x79f7eb*/
          break; /*0x79f7eb*/
        Game::ProcessIdle(); /*0x79f7ed*/
      }
      ResetEvent(*(&Handles + k)); /*0x79f810*/
      if ( !k || k == 6 || k == 5 || k == 10 ) /*0x79f838*/
      {
        Debug::Log(); /*0x79f83f*/
        g_WOL_ChannelLeaveState = 1; /*0x79f847*/
      }
      else if ( k == 7 ) /*0x79f856*/
      {
        Debug::Log(); /*0x79fa1d*/
        byte_B77DEC = 0; /*0x79fa2a*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79fa34*/
        word_B77AD0 = 0; /*0x79fa3b*/
        g_NetworkLobby_Init = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero(&v45); /*0x79fa4f*/
        v44[0] = &off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(v44); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v43-- < 0 ) /*0x79f863*/
        break; /*0x79f869*/
      if ( g_WOL_ChannelLeaveState ) /*0x79f871*/
        goto LABEL_114; /*0x79f871*/
    }
    Debug::Log(); /*0x79f87d*/
LABEL_114:
    g_WOL_ChannelLeaveState = 0; /*0x79f885*/
LABEL_115:
    Debug::Log(); /*0x79f890*/
LABEL_116:
    DeleteAndZero(&v45); /*0x79f898*/
LABEL_117:
    v44[0] = &off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(v44); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v10(0x12u, &Handles, 0, 0x64u); m == 258; m = v10(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v37 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f933*/
      if ( v37 ) /*0x79f93a*/
      {
        g_WOL_ChannelList = 0; /*0x79f940*/
        CloseDialog(v37, 0); /*0x79f946*/
      }
      v38 = Dialog::GetCurrent(); /*0x79f94b*/
      v39 = GetDlgItem(v38, 1344); /*0x79f956*/
      if ( v39 ) /*0x79f95e*/
        SetFocus(v39); /*0x79f961*/
      Dialog::Destroy(v12); /*0x79f969*/
      dword_A8B248 = 0; /*0x79f96e*/
      v36 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
    LOBYTE(v14) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v14); /*0x79f3d2*/
    if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v33 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f8be*/
  if ( v33 ) /*0x79f8c5*/
  {
    g_WOL_ChannelList = 0; /*0x79f8cb*/
    CloseDialog(v33, 0); /*0x79f8d1*/
  }
  v34 = Dialog::GetCurrent(); /*0x79f8d6*/
  v35 = GetDlgItem(v34, 1344); /*0x79f8e1*/
  if ( v35 ) /*0x79f8e9*/
    SetFocus(v35); /*0x79f8ec*/
  Dialog::Destroy(v12); /*0x79f8f4*/
  dword_A8B248 = 0; /*0x79f8f9*/
  v36 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
LABEL_123:
  ShowDialogConfirm(v36, 0, (int)GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(); /*0x79f924*/
LABEL_143:
  v44[0] = &off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(v44); /*0x79fb22*/
  return 0; /*0x79f195*/
}



// ==== 0x0079FC40  ObjectClass::JoinLobbyWOL  this=ObjectClass  sig=csp ====
int WOL_JoinLobby()
{
  wchar_t *String; // eax
  int v1; // edx
  wchar_t *v2; // eax
  int v4; // ebp
  int v5; // ebx
  wchar_t *v6; // eax
  HANDLE *v7; // esi
  int v8; // esi
  int v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // ecx
  int v12; // esi
  DWORD j; // esi
  HWND v14; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  int k; // esi
  HWND v18; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v21; // eax
  HWND v22; // eax
  wchar_t *v23; // eax
  int m; // esi
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  void *v28; // esi
  wchar_t *v29; // [esp-4h] [ebp-12Ch] BYREF
  char *String2; // [esp+10h] [ebp-118h] BYREF
  int i; // [esp+14h] [ebp-114h]
  DLGTEMPLATE *Indirect; // [esp+18h] [ebp-110h]
  char v33[268]; // [esp+1Ch] [ebp-10Ch] BYREF

  if ( g_MenuStateFlags ) /*0x79fc53*/
  {
    g_MenuStateFlags = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  g_NetworkLobby_Init = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  String = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&dword_B76230, String); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  g_WOL_AuthPool = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((void **)&dword_B76AC4); /*0x79fcf8*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v1 = g_WOL_AuthPool; /*0x79fd37*/
  if ( !g_WOL_AuthPool ) /*0x79fd3f*/
  {
    v2 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v2, 0, (int)GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  String2 = aLob39; /*0x79fd94*/
  memset(v33, 0, sizeof(v33)); /*0x79fd9c*/
  if ( g_GameOptionsFlags != 2 ) /*0x79fda4*/
    String2 = g_Str_Lob_40_; /*0x79fda6*/
  v4 = 0; /*0x79fdae*/
  if ( g_WOL_AuthPool <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v5 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v5 >= 0 && v4 < v1 ) /*0x79fdbc*/
      qmemcpy(v33, (char *)dword_B73E18 + v5, sizeof(v33)); /*0x79fdd0*/
    if ( !_strnicmp(&v33[52], String2, strlen(String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v1 = g_WOL_AuthPool; /*0x79fdf7*/
    ++v4; /*0x79fdfd*/
    v5 += 268; /*0x79fdfe*/
    if ( v4 >= g_WOL_AuthPool ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v4 >= g_WOL_AuthPool ) /*0x79fe10*/
  {
LABEL_22:
    v6 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v6, 0, (int)GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 279, g_hWnd, sub_7A2110, 0); /*0x79fe70*/
  SetupDialog((HWND)Indirect, 279); /*0x79fe74*/
  SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow((HWND)Indirect, 1); /*0x79fe8b*/
  v7 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v7++); /*0x79fe9f*/
  while ( (int)v7 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  v8 = 0; /*0x79feb1*/
  for ( i = 0; v8 < g_WindowManager; ++v8 ) /*0x79feb9*/
    Object::DtorWithDelete((void **)g_WOL_LoginQueue + v8, 0); /*0x79fec5*/
  v9 = 0; /*0x79fed9*/
  for ( g_WindowManager = 0; v9 < g_WOL_RequestManager; ++v9 ) /*0x79fee3*/
    Object::DtorWithDelete((void **)g_WOL_SessionID + v9, 0); /*0x79feee*/
  g_WOL_RequestManager = 0; /*0x79ff02*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79ff08*/
  HashTable::Rebuild(&g_WOL_EventQueue); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79ff1f*/
  if ( g_GameOptionsFlags != 3 && g_GameOptionsFlags != 1 && g_GameOptionsFlags != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(); /*0x79ff39*/
  RefreshGameListWOL(); /*0x79ff3e*/
  do /*0x7a00ff*/
  {
    while ( 1 ) /*0x7a0073*/
    {
      while ( 1 ) /*0x7a005f*/
      {
        while ( 1 ) /*0x79ff50*/
        {
          if ( g_WOL_IdleHandler == 2 ) /*0x79ff57*/
          {
            String::Assign(&String2, aZotclot9); /*0x79ff62*/
            v10 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v29 = v11; /*0x79ff7d*/
            WideString::Assign(&v29, v10); /*0x79ff81*/
            v12 = LeaveChannelExWOL((int)v33, &String2, v29); /*0x79ff97*/
            DeleteAndZero((void **)&String2); /*0x79ff99*/
            if ( v12 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v29 = 0; /*0x7a0139*/
              v15 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
LABEL_70:
              ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, (char)v29); /*0x7a0279*/
LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&dword_B76230, &g_TypeClass_DefaultString); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&v33[52], g_WOL_IdleFlag) ) /*0x79ffe2*/
            RequestMatchWOL(); /*0x7a0009*/
          for ( j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                j == 258;
                j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + j)); /*0x7a0045*/
          if ( !j || j == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( j != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(); /*0x7a0061*/
          ProcessPingRequestsWOL(); /*0x7a0066*/
        }
        if ( j != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( g_WOL_ChannelState ) /*0x7a0154*/
          {
            v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a017b*/
            v16 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            WideString::Assign((wchar_t **)&String2, v16); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)&String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((void **)&String2); /*0x7a01b1*/
            for ( k = 0; g_WOL_ChannelState; ++k ) /*0x7a01bf*/
            {
              if ( k >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(); /*0x7a01d3*/
            }
            v18 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a01e7*/
            if ( v18 ) /*0x7a01ee*/
            {
              g_WOL_ChannelList &= ~0x40u; /*0x7a01f9*/
              if ( !g_WOL_ChannelList ) /*0x7a01ff*/
                CloseDialog(v18, 0); /*0x7a0205*/
            }
            Current = Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v29 = 0; /*0x7a025d*/
            v15 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v29 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v15 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v15 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( j != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( (unsigned __int8)MatchGameWOL() && g_GameOptionsFlags == 3 ) /*0x7a009f*/
      {
        v14 = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(v14, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(v14, 1); /*0x7a00f1*/
      }
    }
  }
  while ( j != 7 ); /*0x7a00ff*/
  v21 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v21); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  i = 1; /*0x7a02c6*/
LABEL_73:
  CloseDialog((HWND)Indirect, 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(); /*0x7a02d9*/
  v22 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a02e3*/
  if ( v22 ) /*0x7a02ea*/
    CloseDialog(v22, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( g_WOL_ChannelState ) /*0x7a032c*/
  {
    v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a0353*/
    v23 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    WideString::Assign((wchar_t **)&String2, v23); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)&String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((void **)&String2); /*0x7a038a*/
    for ( m = 0; g_WOL_ChannelState; ++m ) /*0x7a0398*/
    {
      if ( m >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(); /*0x7a03ac*/
    }
    v25 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a03c0*/
    if ( v25 ) /*0x7a03c7*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7a03d2*/
      if ( !g_WOL_ChannelList ) /*0x7a03d8*/
        CloseDialog(v25, 0); /*0x7a03de*/
    }
    v26 = Dialog::GetCurrent(); /*0x7a03e3*/
    v27 = GetDlgItem(v26, 1344); /*0x7a03ee*/
    if ( v27 ) /*0x7a03f6*/
      SetFocus(v27); /*0x7a03f9*/
  }
  v28 = g_UIControlState; /*0x7a03ff*/
  if ( g_UIControlState ) /*0x7a0407*/
  {
    ComPtr::Dtor(g_UIControlState); /*0x7a040b*/
    __3_YAXPAX_Z(v28); /*0x7a0411*/
    g_UIControlState = 0; /*0x7a0419*/
  }
  return i; /*0x79fd7e*/
}



// ==== 0x00791AA0  ObjectClass::UI_Setup_791AA0  this=ObjectClass  sig=csp ====
void __thiscall sub_791AA0(HWND this)
{
  wchar_t *StringCSF; // eax

  if ( this ) /*0x791aa5*/
  {
    if ( MEMORY[0xAC10C8] ) /*0x791ab5*/
      StringCSF = GetStringCSF(MEMORY[0x8315FC], 0, g_Str_File_wonline_cpp, 17235); /*0x791adb*/
    else
      StringCSF = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 17233); /*0x791ac8*/
    ShowDialogConfirm(StringCSF, 0, (int)GameLoop::Thunk, 0); /*0x791ae4*/
    if ( (*(int (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]) < 0 ) /*0x791af6*/
      CloseDialog(this, 2); /*0x791aff*/
  }
}


// ==== 0x00791B10  WOLobby::ChatDlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // ebx
  int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  CampaignScore *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  CampaignScore *v13; // eax
  ObjectClass *v14; // esi
  HWND v15; // esi
  int v16; // esi
  wchar_t *v17; // eax
  CampaignScore *v19; // eax
  wchar_t *eax40; // eax
  int v20; // ebx
  DropListClass *v21; // esi
  AbstractClass *v23; // edi
  wchar_t *StringCSF; // eax
  CampaignScore *v25; // eax
  wchar_t *ebp44; // ebp
  const wchar_t *v26; // esi
  wchar_t *v27; // edi
  wchar_t v28; // ax
  wchar_t *v29; // eax
  CampaignScore *v31; // eax
  DropListClass *esi66; // esi
  wchar_t *v32; // edi
  wchar_t *v33; // eax
  wchar_t *v34; // eax
  CampaignScore *v36; // eax
  wchar_t *edi67; // edi
  size_t v37; // eax
  size_t v38; // eax
  const wchar_t *i; // esi
  char *v40; // eax
  wchar_t *v41; // eax
  CampaignScore *v43; // eax
  int esi82; // esi
  SkirmishDialog *v46; // esi
  int GameUI; // eax
  char (*edx90)(); // edx
  HWND v47; // edi
  HWND v48; // eax
  void *v49; // edi
  int v50; // ebx
  int v51; // eax
  void *ResourceID2CSF; // ebp
  void *ResourceIDCSF; // ebx
  void *ResourceID4CSF; // eax
  INIClass *v57; // edi
  INIClass *v56; // eax
  void **ebx114; // ebx
  void *DlgCtrlID; // ebp
  void *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  void *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  void *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  SessionClass *v70; // ebx
  CampaignScore *v71; // eax
  CampaignScore *v72; // eax
  wchar_t *v68; // eax
  CampaignScore *v74; // eax
  int edi132; // edi
  int eax147; // eax
  SessionClass *eax148; // eax
  SessionClass *v78; // esi
  wchar_t *eax150; // eax
  HWND DlgItem; // eax
  LPARAM v76; // eax
  LPARAM v77; // eax
  _DWORD *First; // edi
  int v79; // edi
  int v80; // ebx
  int PlayerCountMap; // ecx
  _BYTE v82[184]; // [esp-Ch] [ebp-170h] BYREF
  wchar_t String[64]; // [esp+E4h] [ebp-80h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)hWnd);
  if ( result )
    return result;
  if ( a2 > 0x111 )
  {
    if ( a2 == 1175 )
    {
      DlgItem = GetDlgItem(hDlg, 1344);
      SetFocus(DlgItem);
      v76 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[912], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x49Cu, 0, v76);
      v77 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[924], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x4AAu, 0, v77);
      First = (_DWORD *)MultiplayerGameMode::GetFirst();
      *(_DWORD *)&HouseClass_Player.__pad_5568[8092] = First[10];
      SetDialogPlayerName(hDlg, (int)First);
      v79 = (*(int (__thiscall **)(_DWORD *))(*First + 68))(First);
      *(_DWORD *)&HouseClass_Player.__pad_5568[8096] = v79;
      LoadScenarioClassByIndex(v79);
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg);
      InitGameDropdownColors();
      Lobby::FillPlayerFactions(hDlg);
      _cfltcvt_init();
      GDlg::LoadLetterStrings();
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      LoadScenarioClassByIndex(-1);
      *((_BYTE *)&g_MatrixTransformState + 9138) = 0;
      *(_DWORD *)&HouseClass_Player.__pad_5568[10328] = 8;
      Dialog::ShowPlayerName(hDlg);
      Session::PrepareGame(hDlg);
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8072]
        && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)&HouseClass_Player.__pad_5568[8072] + 4))(*(_DWORD *)&HouseClass_Player.__pad_5568[8072])
        && (v80 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4580), v80 <= ReadPlayerCountMap(v79)) )
      {
        PlayerCountMap = v80;
      }
      else
      {
        PlayerCountMap = ReadPlayerCountMap(v79);
      }
      ResetLobbyFactionTable(PlayerCountMap);
      Lobby::InvalidateFactionCombos(hDlg);
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      InitSkirmishDialogControls(hDlg, 1);
      DisplayRankingsWOL(0, 0);
      return 0;
    }
    if ( a2 != 1257 )
    {
      if ( a2 == 1261 )
      {
        ShowWindow(hDlg, 0);
        Dialog::InitWindow((SkirmishDialog *)hDlg, 1);
        return 0;
      }
      return 0;
    }
    ebx114 = (void **)(hWnd + 2);
    *(_DWORD *)&v82[32] = hWnd + 2;
    WideString::Assign_Alt((void **)hWnd + 2, 0);
    if ( *(_DWORD *)hWnd )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)hWnd);
      if ( *((_DWORD *)hWnd + 1) != -1 )
      {
        if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
        {
          ComboBoxSelectedDefault = (void *)GetComboBoxSelectedDefault(
                                              (SkirmishDialog *)hDlg,
                                              (int)DlgCtrlID,
                                              *((_DWORD *)hWnd + 1));
          DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault);
          WideString::Assign_Alt((void **)hWnd + 2, DifficultyString);
          return 1;
        }
        if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
          {
            ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw(
                                            (ReferenceCounted *)hDlg,
                                            (int)DlgCtrlID,
                                            *((_DWORD *)hWnd + 1));
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw);
            WideString::Assign_Alt((void **)hWnd + 2, ColorTooltip);
            return 1;
          }
        }
        else
        {
          ComboBoxSelected = (void *)GetComboBoxSelected(
                                       (ReferenceCounted *)hDlg,
                                       (int)DlgCtrlID,
                                       *((_DWORD *)hWnd + 1));
          if ( ComboBoxSelected != (void *)-1 )
          {
            Name = SideClass::GetName(ComboBoxSelected);
            WideString::Assign_Alt((void **)hWnd + 2, Name);
            return 1;
          }
        }
        return 1;
      }
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
      {
        v70 = (SessionClass *)GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, (int)DlgCtrlID, 0xFFFFFFFF);
        if ( v70 )
        {
          GetSkirmishMenuOwnerName((SkirmishDialog *)&v82[28], hDlg, *(HWND *)hWnd);
          *(_DWORD *)&v82[8] = GetStringCSF(
                                 (wchar_t *)&stru_830620.__pad_14B0[7684],
                                 0,
                                 (CampaignScore *)g_Str_File_wonline_cpp,
                                 17364);
          v71 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          if ( !wcscmp((const wchar_t *)v71, *(const wchar_t **)&v82[8])
            || (*(_DWORD *)&v82[8] = GetStringCSF(
                                       (wchar_t *)&stru_830620.__pad_14B0[7320],
                                       0,
                                       (CampaignScore *)g_Str_File_wonline_cpp,
                                       17364),
                v72 = WideString::GetOrEmpty((wchar_t **)&v82[28]),
                !wcscmp((const wchar_t *)v72, *(const wchar_t **)&v82[8])) )
          {
            if ( IsKnownPointer((wchar_t *)v70) )
            {
              v68 = BuildWOLPlayerTooltip((IUnknown *)v70);
              WideString::Assign_Alt((void **)&v82[28], v68);
            }
          }
          v74 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          WideString::Assign_Alt(*(void ***)&v82[32], (wchar_t *)v74);
          DeleteAndZero::Alt((void **)&v82[28]);
        }
        ebx114 = *(void ***)&v82[32];
      }
      if ( DlgCtrlID == (void *)1876 )
      {
        edi132 = 0;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1877 )
      {
        edi132 = 1;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1878 )
      {
        edi132 = 2;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1879 )
      {
        edi132 = 3;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1880 )
      {
        edi132 = 4;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1881 )
      {
        edi132 = 5;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1882 )
      {
        edi132 = 6;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1883 )
      {
        edi132 = 7;
LABEL_147:
        unknown_libname_74(&v82[32]);
        eax147 = PlayerSlot::IndexToDlgID((void *)edi132);
        if ( eax147 != -1 )
        {
          eax148 = (SessionClass *)GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, eax147, 0xFFFFFFFF);
          v78 = eax148;
          if ( eax148 )
          {
            if ( IsKnownPointer((wchar_t *)eax148) )
            {
              eax150 = WOLobby::FormatLatencyText((wchar_t *)v78);
              WideString::Assign_Alt((void **)&v82[32], eax150);
              WideString::Reassign_Alt(ebx114, (const wchar_t **)&v82[32]);
            }
          }
        }
        DeleteAndZero::Alt((void **)&v82[32]);
      }
    }
    return 1;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          VtableStub::643E70(&g_MatrixTransformState + 6226);
        v14 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
        if ( !*(&g_MatrixTransformState + 2257) )
          return 0;
        ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
        __3_YAXPAX_Z(v14);
        *(&g_MatrixTransformState + 2257) = 0;
        result = 0;
        break;
      case 0xFu:
        Dialog::DrawBackground(hDlg);
        Dialog::StopBink(hDlg);
        if ( *(&g_MatrixTransformState + 2257) )
          Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), (SkirmishDialog *)hDlg);
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283);
        ValidateRect(hDlg, 0);
        result = 0;
        break;
      case 0x2Bu:
        Dialog::Resize((char *)hWnd);
        result = 1;
        break;
      case 0x84u:
        v5 = GetDlgItem(hDlg, 1685);
        if ( !v5 )
          return 0;
        GetWindowRect(hDlg, (LPRECT)&v82[76]);
        v6 = (unsigned __int16)hWnd - *(_DWORD *)&v82[76];
        v7 = ((unsigned int)hWnd >> 16) - *(_DWORD *)&v82[80];
        unknown_libname_74(&v82[28]);
        v8 = ChildWindowFromPointEx(hDlg, (POINT)__PAIR64__(v7, v6), 1u);
        v9 = v8;
        if ( v8 )
        {
          v10 = WOLobby_Setup((wchar_t **)&v82[60], hDlg, (LPARAM)v8);
          WideString::Reassign_Alt((void **)&v82[28], (const wchar_t **)v10);
          DeleteAndZero::Alt((void **)&v82[60]);
          v11 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          if ( !wcscmp((const wchar_t *)v11, (const wchar_t *)&stru_87C374.__pad_579C[23588]) )
          {
            SkirmishMenuOwnerName = GetSkirmishMenuOwnerName((SkirmishDialog *)&v82[64], hDlg, v9);
            WideString::Reassign_Alt((void **)&v82[28], (const wchar_t **)SkirmishMenuOwnerName);
            DeleteAndZero::Alt((void **)&v82[64]);
          }
        }
        v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v82[28]);
        SendMessageA(v5, 0x4B2u, 0, (LPARAM)v13);
        DeleteAndZero::Alt((void **)&v82[28]);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)a3 > 0x540u )
  {
    if ( (unsigned __int16)a3 > 0x6A8u )
    {
      switch ( (__int16)a3 )
      {
        case 1706:
        case 1707:
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
          goto LABEL_95;
        default:
          return 0;
      }
    }
    if ( (unsigned __int16)a3 < 0x6A1u )
    {
      if ( (unsigned __int16)a3 == 1439 )
      {
        *(_DWORD *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 119) = 1;
        sprintf(&v82[112], (ObjectClass *)&stru_830620.__pad_DFC[620], *(INIClass **)&v82[12]);
        Network::SendOptionsGame(&v82[112]);
        EnablePlayerSlotControls(hDlg, 0);
        v47 = GetDlgItem(hDlg, 1439);
        EnableWindow(v47, 0);
        InvalidateRect(v47, 0, 0);
        SendMessageA(v47, 0x4DCu, 0, 0);
        DisplayRankingsWOL(0, 0);
        v48 = GetDlgItem(hDlg, 1344);
        SetFocus(v48);
        return 0;
      }
      if ( (unsigned __int16)a3 == 1474 )
      {
        v46 = (SkirmishDialog *)CreateDialog(
                                  0xCFu,
                                  (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL,
                                  0);
        HouseClass_Player.__pad_5568[23272] = 1;
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        ShowWindow((HWND)v46, 1);
        GameUI = Dialog::FindGameUI();
        edx90 = Dialog::UpdateGameUI;
        if ( !GameUI )
          edx90 = Dialog::PumpMessages;
        MessageDialogLoopAlt((HWND)v46, (unsigned __int8 (*)(void))edx90, 0, 1, 1);
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        HouseClass_Player.__pad_5568[23272] = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730);
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        return 0;
      }
      return 0;
    }
LABEL_95:
    if ( HIWORD(a3) == 1 )
    {
      v49 = (void *)CountryCombo::IDToIndex((void *)(unsigned __int16)a3);
      *(_DWORD *)&v82[48] = v49;
      v50 = StartCombo::IDToIndex((void *)(unsigned __int16)a3);
      *(_DWORD *)&v82[52] = v50;
      *(_DWORD *)&v82[32] = Dialog::SideIDToIndex((void *)(unsigned __int16)a3);
      v51 = Dialog::OptionIDToIndex((void *)(unsigned __int16)a3);
      if ( (int)v49 <= v50 )
        v49 = (void *)v50;
      if ( (int)v49 <= *(int *)&v82[32] )
        v49 = *(void **)&v82[32];
      if ( (int)v49 <= v51 )
        v49 = (void *)v51;
      ResourceID2CSF = (void *)GetResourceID2CSF(v49);
      ResourceIDCSF = (void *)GetResourceIDCSF(v49);
      *(_DWORD *)&v82[36] = GetResourceID3CSF(v49);
      ResourceID4CSF = (void *)GetResourceID4CSF(v49);
      *(_DWORD *)&v82[56] = ResourceID4CSF;
      if ( v49 == *(void **)&v82[48] )
      {
        SelectLobbyCountry(hDlg, ResourceID2CSF);
      }
      else if ( v49 == *(void **)&v82[52] )
      {
        AssignPlayerColor(hDlg, ResourceIDCSF);
      }
      else if ( v49 == *(void **)&v82[32] )
      {
        AssignPlayerSide(hDlg, *(int *)&v82[36]);
      }
      else
      {
        ProcessNetworkLobbyOption((SessionClass *)hDlg, ResourceID4CSF);
      }
      v57 = (INIClass *)GetComboBoxSelected((ReferenceCounted *)hDlg, (int)ResourceID2CSF, 0xFFFFFFFF);
      GetComboBoxSelectedRaw((ReferenceCounted *)hDlg, (int)ResourceIDCSF, 0xFFFFFFFF);
      SetComboBoxSelection(hDlg, *(int *)&v82[36], 0xFFFFFFFF);
      GetComboBoxSelectedRaw2(hDlg, *(int *)&v82[56], 0xFFFFFFFF);
      Network::GetAddress(&HouseClass_Player.__pad_5568[18700], &v82[108], (ObjectClass *)&v82[68], &v82[28]);
      sprintf(&v82[112], &stru_84BBE0, v57);
      Debug::Log();
      WideString::Assign((wchar_t **)&v82[40], (CampaignScore *)&HouseClass_Player.__pad_5568[17244]);
      ToWideStringCharAlt((char **)&v82[44], (const wchar_t **)&v82[40]);
      DeleteAndZero::Alt((void **)&v82[40]);
      v56 = (INIClass *)String::GetOrEmpty((char **)&v82[44]);
      WOLobby_Play(v56);
      DeleteAndZero((int)&v82[44]);
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 == 1344 )
  {
    ReadChatMessage((wchar_t **)&v82[28], hWnd);
    if ( HIWORD(a3) != 1281 )
      goto LABEL_43;
    SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
    if ( !WideString::Length((const wchar_t **)&v82[28]) )
      goto LABEL_43;
    v19 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
    eax40 = HandlePageWOL((ObjectClass *)v19);
    if ( eax40 )
    {
      if ( eax40 != (wchar_t *)1
        || (v20 = 0,
            v21 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v82[28]) + 1),
            v23 = (AbstractClass *)__2_YAPAXI_Z(2 * (_DWORD)v21),
            StringCSF = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17577),
            wcscpy((wchar_t *)&v82[112], StringCSF),
            !v23) )
      {
LABEL_43:
        DeleteAndZero::Alt((void **)&v82[28]);
        return 0;
      }
      v25 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
      ebp44 = wcsncpy((wchar_t *)v23, (const wchar_t *)v25, v21);
      if ( ebp44 )
      {
        v26 = &ebp44[wcslen((const wchar_t *)&v82[112])];
        if ( *v26 )
        {
          do
          {
            if ( wcsncmp(v26, &stru_82083C, 1u) )
              break;
            ++v26;
          }
          while ( *v26 );
          if ( *v26 )
          {
            v27 = (wchar_t *)&v82[76];
            do
            {
              if ( !wcsncmp(v26, &stru_82083C, 1u) )
                break;
              if ( v20 > 10 )
                break;
              v28 = *v26++;
              *v27 = v28;
              ++v20;
              ++v27;
            }
            while ( *v26 );
          }
        }
        for ( *(_WORD *)&v82[2 * v20 + 76] = 0; *v26; ++v26 )
        {
          if ( wcsncmp(v26, &stru_82083C, 1u) )
            break;
        }
        if ( v20 <= 10 )
        {
          if ( v20 )
          {
            if ( wcslen(v26) )
            {
              *(_DWORD *)&v82[8] = v26;
              *(_DWORD *)&v82[4] = &v82[76];
              *(_DWORD *)v82 = *(_DWORD *)g_WebBrowser.__pad_0;
              Dialog::ShowMessage((ObjectClass *)0xFF8080, (CampaignScore *)g_Str_Trace___hs____s_, *(ObjectClass *)v82);
              __3_YAXPAX_Z(ebp44);
              DeleteAndZero::Alt((void **)&v82[28]);
              return 0;
            }
            v29 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17615);
          }
          else
          {
            v29 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17609);
          }
        }
        else
        {
          v29 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_TOO_LONG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17607);
        }
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v29, *(ObjectClass *)&v82[12]);
        __3_YAXPAX_Z(ebp44);
        DeleteAndZero::Alt((void **)&v82[28]);
        return 0;
      }
    }
    else
    {
      v31 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
      if ( !HandleReplyWOL((wchar_t *)v31, 1281) )
      {
        v43 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
        if ( !HandleOnlineWOL((wchar_t *)v43) )
        {
          esi82 = (int)Math::InitDegToRad;
          if ( FillPlayerListWOL((wchar_t **)&v82[28]) == 1 )
            esi82 = 16744576;
          *(_DWORD *)&v82[8] = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          *(_DWORD *)&v82[4] = *(_DWORD *)g_WebBrowser.__pad_0;
          Dialog::ShowMessage((ObjectClass *)esi82, (CampaignScore *)&stru_84B8E0.health, *(ObjectClass *)&v82[4]);
        }
        goto LABEL_43;
      }
      esi66 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v82[28]) + 1);
      v32 = (wchar_t *)__2_YAPAXI_Z(2 * (_DWORD)esi66);
      v33 = GetStringCSF((wchar_t *)stru_82A038.location, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17633);
      wcscpy((wchar_t *)&v82[112], v33);
      v34 = GetStringCSF((wchar_t *)&stru_82A038.hasParachute, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17634);
      wcscpy(String, v34);
      if ( v32 )
      {
        v36 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
        edi67 = wcsncpy(v32, (const wchar_t *)v36, esi66);
        if ( edi67 )
        {
          v37 = wcslen((const wchar_t *)&v82[112]);
          if ( !wcsncmp(edi67, (CampaignScore *)&v82[112], v37) )
            v38 = wcslen((const wchar_t *)&v82[112]);
          else
            v38 = wcslen(String);
          for ( i = &edi67[v38]; *i; ++i )
          {
            if ( wcsncmp(i, &stru_82083C, 1u) )
              break;
          }
          v40 = CharToWideString(byte_B77E30);
          wcscpy((wchar_t *)&v82[76], (const wchar_t *)v40);
          if ( wcslen((const wchar_t *)&v82[76]) && wcslen(i) )
          {
            *(_DWORD *)&v82[8] = i;
            *(_DWORD *)&v82[4] = &v82[76];
            *(_DWORD *)v82 = *(_DWORD *)g_WebBrowser.__pad_0;
            Dialog::ShowMessage((ObjectClass *)0xFF8080, (CampaignScore *)g_Str_Trace___hs____s_, *(ObjectClass *)v82);
            __3_YAXPAX_Z(edi67);
            DeleteAndZero::Alt((void **)&v82[28]);
            return 0;
          }
          else
          {
            if ( wcslen((const wchar_t *)&v82[76]) )
            {
              v41 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17663);
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v41, *(ObjectClass *)&v82[12]);
            }
            __3_YAXPAX_Z(edi67);
            DeleteAndZero::Alt((void **)&v82[28]);
            return 0;
          }
        }
      }
    }
    DeleteAndZero::Alt((void **)&v82[28]);
    return 0;
  }
  if ( (unsigned __int16)a3 > 0x510u )
  {
    switch ( (__int16)a3 )
    {
      case 1299:
      case 1300:
      case 1310:
      case 1311:
      case 1312:
      case 1313:
      case 1314:
      case 1315:
      case 1316:
      case 1317:
      case 1318:
      case 1319:
      case 1320:
        goto LABEL_95;
      default:
        return 0;
    }
  }
  if ( (unsigned __int16)a3 == 1296 )
    goto LABEL_95;
  if ( (unsigned __int16)a3 == 2 )
  {
    if ( !g_NetworkLobbyState
      && (*(int (__stdcall **)(_DWORD))((*(&g_MatrixTransformState + 2263))->X + 36))(*(&g_MatrixTransformState + 2263)) < 0 )
    {
      CloseDialog(hDlg, 2);
      CleanupFileTree();
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 != 1005 )
    return 0;
  v15 = GetDlgItem(hDlg, 1344);
  ReadChatMessage((wchar_t **)&v82[28], v15);
  SendMessageA(v15, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
  SetFocus(v15);
  InvalidateRect(v15, 0, 0);
  v16 = 3166463;
  if ( !strlen((const char *)&g_WOL_IdleFlag) )
  {
    v17 = GetStringCSF(g_Str_TXT_NOT_IN_CHAN, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17692);
LABEL_33:
    Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v17, *(ObjectClass *)&v82[12]);
    DeleteAndZero::Alt((void **)&v82[28]);
    return 0;
  }
  if ( !WideString::Length((const wchar_t **)&v82[28]) )
  {
    v17 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17700);
    goto LABEL_33;
  }
  if ( FillBuddyListExWOL((wchar_t **)&v82[28]) )
    v16 = 16711935;
  *(_DWORD *)&v82[8] = WideString::GetOrEmpty((wchar_t **)&v82[28]);
  *(_DWORD *)&v82[4] = *(_DWORD *)g_WebBrowser.__pad_0;
  Dialog::ShowMessage((ObjectClass *)v16, (CampaignScore *)g_Str_Trace__hs, *(ObjectClass *)&v82[4]);
  DeleteAndZero::Alt((void **)&v82[28]);
  return 0;
}


// ==== 0x00792BE0  ShowUIMessage  this=-  sig=csp ====
char __fastcall ShowUIMessage(MPCooperative *a1, wchar_t **a2, char a3)
{
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // edi
  CampaignScore *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  CampaignScore *v11; // eax
  char result; // al

  DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((void *)0xC4); /*0x792bf6*/
  if ( DialogIndirect ) /*0x792bfa*/
  {
    g_WOL_ChannelList = (MPCooperative *)((unsigned int)a1 | (unsigned int)g_WOL_ChannelList); /*0x792c06*/
    if ( WideString::Length((const wchar_t **)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt(a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, sub_792CF0, 0); /*0x792c7e*/
    SetupDialog((CoordStruct *)DialogIndirect, 196); /*0x792c87*/
    v10 = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt(a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    g_WOL_ChannelList = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = (char)g_WOL_ChannelList; /*0x792cca*/
    if ( g_WOL_ChannelList ) /*0x792cd1*/
      return MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))GameLoop::Thunk, 0, 1, 0); /*0x792ce0*/
  }
  return result; /*0x792ce5*/
}


// ==== 0x00792CF0  sub_792CF0  this=-  sig=csp ====
INT_PTR __stdcall sub_792CF0(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax
  HWND DlgItem; // esi

  if ( a2 > 0x110 ) /*0x792cfa*/
  {
    switch ( a2 ) /*0x792d68*/
    {
      case 0x111u: /*0x792d68*/
        if ( (unsigned __int16)a3 == 1421 ) /*0x792e0f*/
        {
          SetEvent(Handles); /*0x792e2b*/
          CloseDialog(hWnd, 1); /*0x792e3a*/
        }
        else if ( (unsigned __int16)a3 == 1422 ) /*0x792e12*/
        {
          WebBrowser::ShowDialog((const char *)&stru_84BBE0.nextArrayIndex); /*0x792e19*/
          return 0; /*0x792e21*/
        }
        break;
      case 0x113u: /*0x792d68*/
        if ( a3 == 69 ) /*0x792de3*/
        {
          ShowWindow(hWnd, 5); /*0x792dec*/
          KillTimer(hWnd, 0x45u); /*0x792df5*/
          return 0; /*0x792dfe*/
        }
        break;
      case 0x497u: /*0x792d68*/
        SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x792d8d*/
        SetTimer(hWnd, 0x45u, uElapse, 0); /*0x792d9e*/
        HashTable::LookupAndMark(hWnd); /*0x792da6*/
        DlgItem = GetDlgItem(hWnd, 1961); /*0x792dbf*/
        PostMessageA(DlgItem, 0x4D5u, 0, 0); /*0x792dc9*/
        PostMessageA(DlgItem, 0x4D3u, 0, 0); /*0x792dd5*/
        return 0; /*0x792ddb*/
    }
    return 0; /*0x792d78*/
  }
  if ( a2 == 272 ) /*0x792cfc*/
    return 0; /*0x792e3f*/
  switch ( a2 ) /*0x792d16*/
  {
    case 2u: /*0x792d16*/
      KillTimer(hWnd, 0x45u); /*0x792d24*/
      return 0; /*0x792d2d*/
    case 0xFu: /*0x792d16*/
      Dialog::DrawBackground(hWnd); /*0x792d48*/
      Dialog::StopBink(hWnd); /*0x792d4f*/
      ValidateRect(hWnd, 0); /*0x792d57*/
      return 0; /*0x792d60*/
    case 0x14u: /*0x792d16*/
      goto LABEL_6;
    case 0x2Bu: /*0x792d16*/
      Dialog::Resize(a4); /*0x792d34*/
LABEL_6:
      result = 1; /*0x792d39*/
      break; /*0x792d3f*/
    default:
      return 0;
  }
  return result; /*0x792d2c*/
}


// ==== 0x00792EC0  CreateGameWOL_Create  this=-  sig=ida-proto ====
HWND __fastcall sub_792EC0(int a1)
{
  HWND v2; // eax
  HWND Current; // eax
  HWND result; // eax

  v2 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x792ec8*/
  if ( v2 ) /*0x792ecf*/
  {
    g_WOL_ChannelList &= ~a1; /*0x792edb*/
    if ( !g_WOL_ChannelList ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
  Current = Dialog::GetCurrent(); /*0x792eec*/
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}


// ==== 0x00792F10  Network::SyncPlayerList  this=Network  sig=csp ====
void Network_SyncPlayerList()
{
  signed int v0; // eax
  signed int v1; // ebp
  int v2; // ebx
  char *v3; // eax
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  int v9; // eax
  int v10; // ecx
  int i; // esi
  int v12; // [esp+Ch] [ebp-7Ch] BYREF
  int v13; // [esp+10h] [ebp-78h] BYREF
  _BYTE v14[8]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v15[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  v0 = g_WOL_State; /*0x792f10*/
  MEMORY[0xA8B54C] = 1; /*0x792f18*/
  v1 = 0; /*0x792f23*/
  if ( (int)g_WOL_State > 0 ) /*0x792f28*/
  {
    v2 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v2 >= 0 && v1 < v0 ) /*0x792f38*/
        qmemcpy(v15, (char *)g_WOL_ConnectionFlags + v2, sizeof(v15)); /*0x792f4b*/
      v3 = CharToWideString(&v15[9]); /*0x792f51*/
      v4 = Player::FindByName((wchar_t *)v3); /*0x792f58*/
      v5 = v4; /*0x792f5d*/
      if ( v4 && IsKnownPointer(v4) ) /*0x792f65*/
        *(_DWORD *)((char *)v5 + 123) = v15[5]; /*0x792f72*/
      v6 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x792f7a*/
      if ( _strcmpi(&v15[9], v6) ) /*0x792f85*/
      {
        if ( (v15[0] & 1) != 0 ) /*0x792f96*/
        {
          v7 = CharToWideString(&v15[9]); /*0x792f9c*/
          v8 = Player::FindByName((wchar_t *)v7); /*0x792fa3*/
          Network::CopyAddress((_DWORD *)v8 + 10, &v13, (int)v14); /*0x792fb5*/
          NetworkID::Assign(&MEMORY[0xA8BB1C], &v13, (int)v14, 0); /*0x792fcb*/
        }
        v12 = 0; /*0x792fde*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)MEMORY[0xAC1170] + 32))( /*0x792fea*/
          MEMORY[0xAC1170],
          v15[6],
          &v12);
        v9 = v12; /*0x792fed*/
        if ( v12 < 0 ) /*0x792ff3*/
        {
          v9 = 0; /*0x792ff5*/
          v12 = 0; /*0x792ff7*/
        }
        v10 = MEMORY[0xA8B54C]; /*0x792ffb*/
        dword_B7790C[MEMORY[0xA8B54C]] = v9; /*0x793001*/
        MEMORY[0xA8B54C] = v10 + 1; /*0x793009*/
      }
      v0 = g_WOL_State; /*0x79300f*/
      ++v1; /*0x793014*/
      v2 += 108; /*0x793015*/
    }
    while ( v1 < (int)g_WOL_State ); /*0x79301a*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x79302a*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x793039*/
  {
    Network::FormatAddress((unsigned __int16 *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40), 0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 44))( /*0x793071*/
      MEMORY[0x887628],
      *(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40,
      0);
  }
  Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8BB1C], 0); /*0x793085*/
  Debug::Log(); /*0x793090*/
}


// ==== 0x007930A0  UI_Setup_7930A0  this=-  sig=ida-proto ====
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7930bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7930c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x7930f6*/
  return _strcmpi(byte_B777D4, v3) == 0; /*0x7930dc*/
}


// ==== 0x00793120  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_793120(char **this)
{
  int v1; // eax
  char *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( (int)g_WOL_State <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < (int)g_WOL_State ) /*0x79313e*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x79314c*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( !&g_IsMultiplayerSession ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = String::GetOrEmpty_Alt(this); /*0x793178*/
  return _strcmpi(byte_B777D4, v4) == 0; /*0x79315f*/
}


// ==== 0x007931A0  GameSettings::FindFlagged  this=GameSettings  sig=ida-proto ====
char *GameSettings_FindFlagged()
{
  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)g_WOL_State <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x7931bb*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7931c9*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)g_WOL_State ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &g_IsMultiplayerSession; /*0x7931dc*/
}


// ==== 0x00793280  sub_793280  this=-  sig=csp ====
INT_PTR __stdcall sub_793280(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax
  int v5; // edi
  int *v6; // esi
  HWND DlgItem; // eax
  int i; // esi
  HWND v9; // edi

  if ( a2 > 0x111 ) /*0x79328c*/
  {
    if ( a2 < 0x132 ) /*0x793355*/
      return 0; /*0x793355*/
    if ( a2 <= 0x138 ) /*0x79335c*/
      return (INT_PTR)GetStockObject(4); /*0x793420*/
    if ( a2 != 1175 ) /*0x793367*/
      return 0; /*0x793331*/
    v5 = 0; /*0x793374*/
    v6 = dword_84A1F0; /*0x793376*/
    do /*0x7933ab*/
    {
      DlgItem = GetDlgItem(hWnd, *v6); /*0x79337f*/
      dword_B75F54 = 0; /*0x79338e*/
      dword_B75F58 = 0; /*0x793396*/
      if ( v5 > *(_DWORD *)&HouseClass_Player.__pad_5568[18384] - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * i)); /*0x7933e1*/
      SendMessageA(v9, 0xF1u, 0, 0); /*0x7933ed*/
    }
    SendMessageA(hWnd, 0x4A9u, 0, 1); /*0x793403*/
    HashTable::LookupAndMark(hWnd); /*0x793407*/
    ShowWindow(hWnd, 5); /*0x79340f*/
    return 0; /*0x793418*/
  }
  else
  {
    if ( a2 != 273 ) /*0x793292*/
    {
      switch ( a2 ) /*0x793297*/
      {
        case 0xFu: /*0x793297*/
          Dialog::DrawBackground(hWnd); /*0x7932c1*/
          ValidateRect(hWnd, 0); /*0x7932c9*/
          return 0; /*0x7932d4*/
        case 0x14u: /*0x793297*/
          return 1; /*0x7932b8*/
        case 0x2Bu: /*0x793297*/
          Dialog::Resize(a4); /*0x7932ab*/
          return 1; /*0x7932ab*/
      }
      return 0; /*0x7932a1*/
    }
    switch ( (__int16)a3 ) /*0x7932f4*/
    {
      case 1889: /*0x7932f4*/
      case 1890: /*0x7932f4*/
      case 1892: /*0x7932f4*/
      case 1893: /*0x7932f4*/
      case 1894: /*0x7932f4*/
      case 1895: /*0x7932f4*/
      case 1896: /*0x7932f4*/
      case 1897: /*0x7932f4*/
        if ( byte_B757EB[(unsigned __int16)a3] ) /*0x7932fb*/
        {
          if ( !SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) ) /*0x79331a*/
            SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 1u, 0); /*0x79332a*/
          return 0; /*0x79332a*/
        }
        if ( SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF0u, 0, 0) != 1 ) /*0x793339*/
          return 0; /*0x793339*/
        SendDlgItemMessageA(hWnd, (unsigned __int16)a3, 0xF1u, 0, 0); /*0x793346*/
        result = 0; /*0x79334a*/
        break; /*0x79334d*/
      default:
        return 0;
    }
  }
  return result; /*0x7932b0*/
}


// ==== 0x00793490  ObjectClass::HandleWOLForwardingError  this=ObjectClass  sig=csp ====
HWND HandleWOLForwardingError()
{
  HWND result; // eax
  ObjectClass *i; // edx
  int v2; // edi
  int v3; // esi
  char *v4; // eax
  char v5; // bl
  int v6; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  _BYTE v10[368]; // [esp-Ch] [ebp-218h] BYREF

  result = 0; /*0x793496*/
  if ( (int)g_WOL_State > 0 ) /*0x7934a3*/
  {
    for ( i = (ObjectClass *)g_WOL_ConnectionFlags; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7934a9*/
    {
      if ( (int)result >= 0 && (int)result < (int)g_WOL_State ) /*0x7934b5*/
        qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7934c3*/
      if ( (g_IsMultiplayerSession.field_0 & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      result = (HWND)((char *)result + 1); /*0x7934ce*/
      if ( (int)result >= (int)g_WOL_State ) /*0x7934d4*/
        return result; /*0x7934d4*/
    }
    result = (HWND)&g_IsMultiplayerSession; /*0x7934e0*/
    if ( &g_IsMultiplayerSession ) /*0x7934e7*/
    {
      v2 = -1; /*0x7934f2*/
      v3 = 0; /*0x7934f5*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v4 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v3)); /*0x793509*/
          if ( !_strcmpi(v4, byte_B777D4) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v3 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v2 = v3; /*0x793527*/
      }
LABEL_15:
      v5 = 0; /*0x793529*/
      v6 = 0; /*0x793530*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( dword_B73BB4[v6] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v5 = 1; /*0x793557*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v5 = 1; /*0x793591*/
            ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x7935b3*/
            StringCSF = GetStringCSF(aTxtTalkLocalPr, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
LABEL_19:
            swprintf( /*0x7935c8*/
              (wchar_t *const)&v10[24],
              (const size_t)StringCSF,
              *(const wchar_t *const *)&v10[8],
              *(CampaignScore **)&v10[12]);
            Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10[24], *(ObjectClass *)v10); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v5 = 1; /*0x7935ee*/
            if ( v6 == v2 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              *(_DWORD *)&v10[8] = GetStringCSF(aTxtTalkForward, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, *(CampaignScore **)&v10[8], *(ObjectClass *)&v10[12]); /*0x79361d*/
            }
            else
            {
              ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6)); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              *(_DWORD *)&v10[8] = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v6); /*0x79364b*/
              v8 = GetStringCSF(aTxtTalkForward_0, 0, (CampaignScore *)g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf( /*0x793663*/
                (wchar_t *const)&v10[24],
                (const size_t)v8,
                *(const wchar_t *const *)&v10[8],
                *(CampaignScore **)&v10[12]);
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)&v10[24], *(ObjectClass *)v10); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v5 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            *(_DWORD *)&v10[8] = GetStringCSF( /*0x7936a3*/
                                   (wchar_t *)&stru_84BBE0.estimatedHealth,
                                   0,
                                   (CampaignScore *)g_Str_File_wonline_cpp,
                                   18875);
            Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, *(CampaignScore **)&v10[8], *(ObjectClass *)&v10[12]); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = *(HWND *)&HouseClass_Player.__pad_5568[18384]; /*0x7936b2*/
        ++v6; /*0x7936b7*/
      }
      while ( v6 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x7936ba*/
      if ( !v5 ) /*0x7936c2*/
      {
LABEL_26:
        v9 = GetStringCSF( /*0x7936d5*/
               (wchar_t *)&stru_84BBE0.customSound_controller[3],
               0,
               (CampaignScore *)g_Str_File_wonline_cpp,
               18888);
        return Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v9, *(ObjectClass *)&v10[12]); /*0x7936e2*/
      }
    }
  }
  return result; /*0x7934d6*/
}


// ==== 0x00793710  sub_793710  this=-  sig=ida-proto ====
__int16 __fastcall sub_793710(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  LOWORD(v4) = a1 + a2; /*0x79371c*/
  if ( a4 != 1 ) /*0x79371f*/
  {
    if ( a4 == 2 ) /*0x793724*/
    {
      LOWORD(v4) = a2 + 2 * a1; /*0x793726*/
    }
    else if ( a4 <= 1 ) /*0x79372e*/
    {
      if ( a4 < 0 ) /*0x793753*/
      {
        if ( a4 == -100 ) /*0x793758*/
          LOWORD(v4) = a2 + 100 * a1; /*0x793760*/
        else
          v4 = a2 + a1 % 2 - a4 * (a1 / 2); /*0x793780*/
      }
    }
    else
    {
      v4 = a4 * (a1 / 2) + a2 + a1 % 2; /*0x79374d*/
    }
  }
  Debug::Log(); /*0x79378b*/
  if ( (unsigned __int16)v4 >= 0x400u ) /*0x793798*/
    return v4; /*0x7937a5*/
  else
    return 1024; /*0x79379c*/
}


// ==== 0x007937B0  CComObject_CChatEventSink___ATL::DispatchConnectionPairs  this=CComObject_CChatEventSink___ATL  sig=csp ====
int __thiscall sub_7937B0(char *this)
{
  int v1; // edi
  _DWORD *v2; // ebx
  wchar_t **v3; // esi
  int v4; // eax
  int *v5; // esi
  int v6; // ebx
  int v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebx
  int *v14; // edi
  char *v15; // esi
  int v16; // eax
  int v17; // edx
  int v19; // [esp+10h] [ebp-30h]
  int v20; // [esp+10h] [ebp-30h]
  int i; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+14h] [ebp-2Ch]
  int v23; // [esp+18h] [ebp-28h]
  _DWORD *v24; // [esp+18h] [ebp-28h]
  _DWORD v26[8]; // [esp+20h] [ebp-20h] BYREF

  memset(v26, 0, sizeof(v26)); /*0x7937c6*/
  v1 = 0; /*0x7937c8*/
  v2 = v26; /*0x7937ca*/
  v3 = (wchar_t **)&MEMORY[0xA8DA90]; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&MEMORY[0xA8DAB0] ); /*0x7937ed*/
  v4 = MEMORY[0xA8DA84]; /*0x7937ef*/
  for ( i = 0; i < v4; ++i ) /*0x7937fe*/
  {
    v19 = 0; /*0x793803*/
    if ( v4 - 1 > 0 ) /*0x79380d*/
    {
      v5 = &v26[1]; /*0x79380f*/
      do /*0x793865*/
      {
        v6 = *v5; /*0x793813*/
        v7 = *(v5 - 1); /*0x793815*/
        v8 = MEMORY[0xA8DC2C][v7]; /*0x793824*/
        v23 = Network_Connect(MEMORY[0xA8DC2C][*v5]); /*0x793839*/
        if ( Network_Connect(v8) < v23 ) /*0x793848*/
        {
          *(v5 - 1) = v6; /*0x79384a*/
          *v5 = v7; /*0x79384d*/
        }
        v4 = MEMORY[0xA8DA84]; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < MEMORY[0xA8DA84] - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  v9 = 0; /*0x79389c*/
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  v10 = MEMORY[0xA8DA84]; /*0x7938ac*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x7938b6*/
  {
    v11 = 1; /*0x7938b8*/
    v12 = v26; /*0x7938bd*/
    v22 = 1; /*0x7938c1*/
    v24 = v26; /*0x7938c5*/
    do /*0x793923*/
    {
      if ( v11 < v10 ) /*0x7938cb*/
      {
        v13 = *v12; /*0x7938d1*/
        v14 = v12 + 1; /*0x7938d3*/
        v15 = this + 8 * v9; /*0x7938d6*/
        do /*0x793906*/
        {
          v16 = *v14; /*0x7938d9*/
          *(_DWORD *)v15 = v13; /*0x7938db*/
          *((_DWORD *)v15 + 1) = v16; /*0x7938e4*/
          Debug::Log(); /*0x7938e7*/
          v10 = MEMORY[0xA8DA84]; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < MEMORY[0xA8DA84] ); /*0x793906*/
        v12 = v24; /*0x793908*/
        v11 = v22; /*0x79390c*/
        v9 = v17; /*0x793910*/
      }
      ++v11; /*0x793912*/
      ++v12; /*0x793913*/
      v22 = v11; /*0x793916*/
      v24 = v12; /*0x79391a*/
    }
    while ( v11 - 1 < v10 ); /*0x793923*/
  }
  return v9; /*0x793927*/
}


// ==== 0x00793930  UI_Setup  this=-  sig=csp ====
ObjectClass *__fastcall UI_Setup_793930(void *a1, void *a2, int a3)
{
  int v5; // edi
  SessionClass *v6; // esi
  char *v7; // eax
  char *v8; // eax
  ObjectClass *result; // eax
  int v10; // edx
  void *lineTrailer; // ecx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = -1; /*0x793938*/
  v12 = -1; /*0x79393c*/
  Debug::Log(); /*0x793952*/
  v5 = 0; /*0x79395a*/
  v6 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x79395c*/
  do /*0x79399d*/
  {
    v7 = ToWideStringChar((IUnknown *)v6->GameMode[0]); /*0x793964*/
    if ( !_strcmpi(v7, a1) ) /*0x79396a*/
      v13 = v5; /*0x793976*/
    v8 = ToWideStringChar((IUnknown *)v6->GameMode[0]); /*0x79397d*/
    result = (ObjectClass *)_strcmpi(v8, a2); /*0x793983*/
    if ( !result ) /*0x79398d*/
      v12 = v5; /*0x79398f*/
    v6 = (SessionClass *)((char *)v6 + 4); /*0x793993*/
    ++v5; /*0x793996*/
  }
  while ( (int)v6 < (int)&HouseClass_Player.__pad_5568[18428] ); /*0x79399d*/
  v10 = 0; /*0x7939a5*/
  if ( *(int *)&HouseClass_Player.__pad_5568[19864] > 0 ) /*0x7939a9*/
  {
    result = (ObjectClass *)&HouseClass_Player.__pad_5568[18844]; /*0x7939ab*/
    while ( 1 ) /*0x7939b0*/
    {
      lineTrailer = result[-1].lineTrailer; /*0x7939b0*/
      if ( lineTrailer == (void *)v13 && *(_DWORD *)result->__pad_0 == v12 ) /*0x7939c3*/
      {
        *(_DWORD *)&HouseClass_Player.__pad_5568[8 * v10 + 19352] = a3; /*0x7939e8*/
        return result; /*0x7939f3*/
      }
      if ( lineTrailer == (void *)v12 && *(_DWORD *)result->__pad_0 == v13 ) /*0x7939cd*/
        break; /*0x7939cd*/
      ++v10; /*0x7939cf*/
      result = (ObjectClass *)((char *)result + 8); /*0x7939d0*/
      if ( v10 >= *(int *)&HouseClass_Player.__pad_5568[19864] ) /*0x7939d5*/
        return result; /*0x7939d5*/
    }
    *(_DWORD *)&HouseClass_Player.__pad_5568[8 * v10 + 19356] = a3; /*0x7939fa*/
    return (ObjectClass *)a3; /*0x7939f6*/
  }
  return result; /*0x7939d7*/
}


// ==== 0x00793A10  UI_Setup_793A10  this=-  sig=csp ====
ObjectClass *__fastcall UI_Setup_793A10(void *a1, __int16 a2)
{
  int v4; // edi
  SessionClass *v5; // esi
  char *v6; // eax
  ObjectClass *result; // eax

  Debug::Log(); /*0x793a26*/
  v4 = 0; /*0x793a2e*/
  v5 = (SessionClass *)&HouseClass_Player.__pad_5568[18396]; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar((IUnknown *)v5->GameMode[0]); /*0x793a38*/
    result = (ObjectClass *)_strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    v5 = (SessionClass *)((char *)v5 + 4); /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&HouseClass_Player.__pad_5568[18428] ) /*0x793a54*/
      return result; /*0x793a54*/
  }
  *(_WORD *)&HouseClass_Player.__pad_5568[2 * v4 + 19868] = a2; /*0x793a5b*/
  return result; /*0x793a56*/
}


// ==== 0x00793A70  sub_793A70  this=-  sig=ida-proto ====
int __fastcall sub_793A70(void *a1, unsigned __int16 a2)
{
  int result; // eax
  char *v3; // esi
  signed int v4; // ebx
  int v7; // ecx
  int i; // [esp+10h] [ebp-104h]
  char v9[2]; // [esp+14h] [ebp-100h] BYREF
  char Buffer[254]; // [esp+16h] [ebp-FEh] BYREF

  result = g_WOL_State; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)g_WOL_State > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = &g_WOL_ConnectionFlags->__pad_0[v7]; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        qmemcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, (INIClass *)a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(_DWORD, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 56))( /*0x793aff*/
          *(&g_MatrixTransformState + 2263),
          v3,
          v9);
      }
      result = g_WOL_State; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)g_WOL_State ) /*0x793b15*/
        break; /*0x793b15*/
    }
  }
  return result; /*0x793b17*/
}


// ==== 0x00793B30  sub_793B30  this=-  sig=ida-proto ====
int __fastcall sub_793B30(char a1, const char *a2)
{
  _BYTE v3[3]; // [esp+0h] [ebp-100h] BYREF
  char v4[253]; // [esp+3h] [ebp-FDh] BYREF

  qmemcpy(v3, "Z1", 2); /*0x793b39*/
  v3[2] = a1 + 48; /*0x793b45*/
  if ( a2 ) /*0x793b49*/
    strcpy(v4, a2); /*0x793b68*/
  else
    v4[0] = 0; /*0x793b76*/
  Debug::Log(); /*0x793b85*/
  return (*(int (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)MEMORY[0xAC116C] + 60))(MEMORY[0xAC116C], v3); /*0x793b9d*/
}


// ==== 0x00793BB0  ObjectClass::Network_Connect_793BB0  this=ObjectClass  sig=csp ====
int sub_793BB0()
{
  int result; // eax
  DWORD *v1; // ebp
  int *v2; // ebx
  signed int v3; // esi
  signed int v4; // eax
  int v5; // [esp+0h] [ebp-1D8h]
  DWORD v6; // [esp+8h] [ebp-1D0h]
  int v7[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v8; // [esp+1D4h] [ebp-4h]
  char v9; // [esp+1D6h] [ebp-2h]

  result = MEMORY[0xA8E224]; /*0x793bb6*/
  v5 = 0; /*0x793bbb*/
  if ( MEMORY[0xA8E224] > 0 ) /*0x793bc5*/
  {
    v1 = (DWORD *)&MEMORY[0xA8E1C4]; /*0x793bcf*/
    v2 = MEMORY[0xA8E1A4]; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v3 = v1[2]; /*0x793bdc*/
      if ( *v1 != -1 ) /*0x793be5*/
      {
        v4 = Timer::GetTicks() - *v1; /*0x793bec*/
        if ( v4 >= v3 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v3 -= v4; /*0x793bf3*/
      }
      if ( !v3 ) /*0x793bf7*/
      {
LABEL_7:
        memset(v7, 0, sizeof(v7)); /*0x793c08*/
        v8 = 0; /*0x793c0a*/
        v9 = 0; /*0x793c0c*/
        v7[0] = 13; /*0x793c12*/
        strcpy((char *)&v7[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x793c39*/
        ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + *v2)); /*0x793c4b*/
        Debug::Log(); /*0x793c56*/
        Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v7, 47, 0, (wchar_t *)*(&MEMORY[0xA8DA90] + *v2)); /*0x793c76*/
        *v1 = Timer::GetTicks(); /*0x793c8f*/
        v1[1] = v6; /*0x793c99*/
        v1[2] = 1200; /*0x793c9c*/
      }
      result = v5 + 1; /*0x793c9f*/
      ++v2; /*0x793caa*/
      v1 += 3; /*0x793cad*/
      ++v5; /*0x793cb2*/
    }
    while ( v5 < MEMORY[0xA8E224] ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}


// ==== 0x00793CD0  ObjectClass::method_793CD0  this=ObjectClass  sig=csp ====
int __thiscall sub_793CD0(void *this)
{
  DWORD Ticks; // eax
  DWORD *v2; // ecx
  DWORD v4; // [esp+4h] [ebp-8h]

  MEMORY[0xA8E1A4][MEMORY[0xA8E224]] = (int)this; /*0x793cd8*/
  Ticks = Timer::GetTicks(); /*0x793ce3*/
  v2 = (DWORD *)(12 * MEMORY[0xA8E224] + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++MEMORY[0xA8E224]; /*0x793d14*/
}


// ==== 0x00793D20  NegotiateNetworkConnection  this=-  sig=csp ====
char __fastcall NegotiateNetworkConnection(IUnknown *aP0, int a2, int a3)
{
  IUnknown *v3; // ebp
  int v4; // esi
  IUnknown *v5; // edi
  char *v6; // ebx
  char *v7; // eax
  char *v9; // esi
  char *v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // si
  unsigned __int16 v14; // di
  char v15; // bl
  char *v16; // ebx
  int v17; // esi
  _DWORD *v18; // ecx
  int v19; // edx
  int v20; // esi
  char *v21; // ebx
  char *v22; // eax
  unsigned __int16 v23; // si
  IUnknown *v24; // ebx
  signed int v25; // eax
  char *v26; // esi
  signed int v27; // ebp
  int v28; // ecx
  CreateGameDialogControl *v29; // ecx
  int v30; // esi
  signed int v31; // eax
  __int16 v32; // di
  IPXManagerClass *eax55; // eax
  IPXManagerClass *v34; // edx
  int v35; // esi
  CreateGameDialogControl *v36; // ecx
  IUnknown *v33; // eax
  DWORD v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  int v42; // esi
  DWORD v43; // eax
  char v44; // bl
  int Speed; // eax
  int v46; // ecx
  char *v47; // eax
  HWND v48; // eax
  HWND v49; // esi
  HWND DlgItem; // eax
  DWORD *v51; // ecx
  int v52; // eax
  int v53; // esi
  int v54; // esi
  int v55; // eax
  char *v56; // eax
  char v57; // [esp+14h] [ebp-73Ah]
  char v58; // [esp+15h] [ebp-739h]
  unsigned __int16 v59; // [esp+16h] [ebp-738h]
  int v60; // [esp+16h] [ebp-738h]
  int v61; // [esp+16h] [ebp-738h]
  int v62; // [esp+1Ah] [ebp-734h]
  int v63; // [esp+1Eh] [ebp-730h]
  DWORD v64; // [esp+22h] [ebp-72Ch]
  DWORD v65; // [esp+22h] [ebp-72Ch]
  int v66; // [esp+2Ah] [ebp-724h]
  int v67; // [esp+2Eh] [ebp-720h]
  DWORD v68; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v70; // [esp+3Eh] [ebp-710h] BYREF
  int v71; // [esp+42h] [ebp-70Ch]
  signed int v72; // [esp+46h] [ebp-708h]
  IUnknown *v73; // [esp+4Ah] [ebp-704h]
  DWORD v74; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  _DWORD v76[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  DWORD v77; // [esp+6Ah] [ebp-6E4h]
  DWORD v78; // [esp+6Eh] [ebp-6E0h]
  int v79; // [esp+72h] [ebp-6DCh]
  DWORD v80; // [esp+76h] [ebp-6D8h]
  int v81; // [esp+7Eh] [ebp-6D0h]
  signed int v82; // [esp+82h] [ebp-6CCh]
  CreateGameDialogControl *v83; // [esp+86h] [ebp-6C8h]
  int v84; // [esp+8Ah] [ebp-6C4h]
  _DWORD v85[6]; // [esp+8Eh] [ebp-6C0h] BYREF
  DWORD Ticks; // [esp+A6h] [ebp-6A8h]
  int v87; // [esp+AEh] [ebp-6A0h]
  char v88[12]; // [esp+B2h] [ebp-69Ch] BYREF
  char v89[256]; // [esp+BEh] [ebp-690h] BYREF
  char v90[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v91[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v92[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v94; // [esp+3BEh] [ebp-390h] BYREF
  char v95[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v96[11]; // [esp+586h] [ebp-1C8h] BYREF
  __int16 v97; // [esp+5B2h] [ebp-19Ch]
  char v98; // [esp+5B4h] [ebp-19Ah]

  v3 = aP0; /*0x793d28*/
  v71 = a2; /*0x793d2c*/
  v73 = aP0; /*0x793d34*/
  v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v57 = 1; /*0x793d5f*/
  v76[0] = 0; /*0x793d64*/
  Waypoint::InitInvalid(v88); /*0x793d68*/
  v67 = 0; /*0x793d74*/
  v58 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v63 = -1; /*0x793d93*/
  if ( *(int *)&HouseClass_Player.__pad_5568[18384] <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = *(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]; /*0x793da3*/
    v6 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v4)); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v63 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < *(int *)&HouseClass_Player.__pad_5568[18384] ); /*0x793dd5*/
  if ( v63 == -1 ) /*0x793ddc*/
  {
LABEL_6:
    strcpy(v89, "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x793e23*/
      *(&g_MatrixTransformState + 2263),
      v89);
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  v9 = &HouseClass_Player.__pad_5568[19884]; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v57 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)&HouseClass_Player.__pad_5568[20172] ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18808]; /*0x793e87*/
  if ( v57 /*0x793eac*/
    && (!v11 || (v11 & 1) != 0)
    && (!*((_WORD *)&(&g_MatrixTransformState)[89] + 4) || (*(_BYTE *)(&(&g_MatrixTransformState)[89] + 2) & 1) != 0) )
  {
    Debug::Log(); /*0x793eb3*/
    v57 = 0; /*0x793ebb*/
  }
  v62 = 0; /*0x793ec2*/
  v72 = 0; /*0x793ec6*/
  v59 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
    v12 = v63; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(); /*0x793edf*/
    if ( v57 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      v15 = *((_BYTE *)&(&g_MatrixTransformState)[89] + 8); /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v60 = 0; /*0x793f50*/
      if ( *(int *)&HouseClass_Player.__pad_5568[20336] <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = &HouseClass_Player.__pad_5568[20208]; /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *(_DWORD *)v16; /*0x793f5f*/
        v18 = (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)v16 + 18396] + 40); /*0x793f68*/
        v85[0] = *v18; /*0x793f6d*/
        v19 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396] + 40; /*0x793f7e*/
        v85[1] = v18[1]; /*0x793f81*/
        v85[2] = v18[2]; /*0x793f8c*/
        if ( NetworkID::Compare((int)v85, v19) ) /*0x793f9a*/
        {
          v14 = *(_WORD *)&HouseClass_Player.__pad_5568[4 * v17 + 20176]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        v16 += 4; /*0x793fcb*/
        ++v60; /*0x793fd0*/
      }
      while ( v60 < *(int *)&HouseClass_Player.__pad_5568[20336] ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar(*(IUnknown **)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v20)); /*0x79400a*/
            v22 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v20 + 20478]; /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((int *)&(&g_MatrixTransformState)[89] + 2, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = (IUnknown *)ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v73 + 18396]); /*0x794069*/
      v25 = g_WOL_State; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( (int)g_WOL_State > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v61 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < v25 ) /*0x794098*/
            v26 = &g_WOL_ConnectionFlags->__pad_0[v28]; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
            qmemcpy(v92, "Z4", sizeof(v92)); /*0x7940c3*/
            sprintf(Buffer, (ObjectClass *)&stru_817F40.fallRate, (INIClass *)v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(_DWORD, char *, char *))((*(&g_MatrixTransformState + 2263))->X + 56))( /*0x794106*/
              *(&g_MatrixTransformState + 2263),
              v26,
              v92);
          }
          v25 = g_WOL_State; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v61 + 108; /*0x794113*/
          v61 += 108; /*0x794118*/
        }
        while ( v27 < (int)g_WOL_State ); /*0x79411c*/
      }
      v3 = v73; /*0x794122*/
      v12 = v63; /*0x794126*/
      v59 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *(_WORD *)&HouseClass_Player.__pad_5568[2 * v63 + 20478]; /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v64 = Ticks; /*0x794141*/
    v30 = 360; /*0x79414c*/
    HIWORD(v31) = HIWORD(v62); /*0x794155*/
    v87 = 360; /*0x79415b*/
    v66 = 360; /*0x794162*/
    if ( v62 > 0 ) /*0x794166*/
    {
      v31 = Timer::GetTicks(); /*0x79416f*/
      v29 = v83; /*0x794174*/
      v30 = 240; /*0x79417b*/
      v82 = v31; /*0x794180*/
      v84 = 240; /*0x794187*/
      v64 = v31; /*0x79418e*/
      v66 = 240; /*0x794196*/
    }
    v32 = v72; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v64 != -1 ) /*0x7941a3*/
      {
        v31 = Timer::GetTicks() - v64; /*0x7941ae*/
        if ( v31 >= v30 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v30 -= v31; /*0x7941b6*/
      }
      if ( !v30 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v57 == 1 ) /*0x7941c2*/
      {
        if ( *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v66; /*0x7941d3*/
    }
    LOWORD(v31) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x7941f3*/
    v72 = v31; /*0x7941fe*/
    if ( (_WORD)v31 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *(_WORD *)&HouseClass_Player.__pad_5568[2 * v12 + 20478] = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x79421e*/
      LOWORD(eax55) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x79422c*/
      Network::SetPort((_WORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v12) + 40), eax55); /*0x79423b*/
      LOWORD(v34) = *(_WORD *)&HouseClass_Player.__pad_5568[2 * (_DWORD)v3 + 19868]; /*0x794240*/
      Network::SetPort((_WORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396] + 40), v34); /*0x794253*/
      memset(v96, 0, sizeof(v96)); /*0x794266*/
      v97 = 0; /*0x794268*/
      v98 = 0; /*0x79426a*/
      v96[0] = 41; /*0x794270*/
      strcpy((char *)&v96[1], String::GetOrEmpty((char **)&g_WebBrowser)); /*0x79429d*/
      if ( (*(_BYTE *)(&(&g_MatrixTransformState)[89] + 2) & 8) != 0 /*0x7942b7*/
        && (HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18808] & 8) == 0 )
      {
        Debug::Log(); /*0x7942be*/
        v35 = 240; /*0x7942cf*/
        v74 = Timer::GetTicks(); /*0x7942d4*/
        for ( i = 240; ; v35 = i ) /*0x7942d8*/
        {
          if ( v74 != -1 ) /*0x7942e1*/
          {
            v33 = (IUnknown *)(Timer::GetTicks() - v74); /*0x7942ec*/
            if ( (int)v33 >= v35 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v35 -= (int)v33; /*0x7942f4*/
          }
          if ( !v35 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(v36); /*0x7942fa*/
        }
      }
      ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v38 = Timer::GetTicks(); /*0x794331*/
      v85[5] = 360; /*0x794342*/
      v85[3] = v38; /*0x794351*/
      v65 = v38; /*0x794358*/
      v80 = Timer::GetTicks(); /*0x794365*/
      v68 = v80; /*0x794369*/
      v39 = 0; /*0x794371*/
      v81 = 0; /*0x794373*/
      for ( j = 0; ; v39 = j ) /*0x79437b*/
      {
        v40 = v39; /*0x794383*/
        if ( v68 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v41 = Timer::GetTicks() - v68; /*0x794393*/
        if ( v41 < v40 ) /*0x794399*/
        {
          v42 = v40 - v41; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer( /*0x7943d3*/
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v96,
          47,
          0,
          *(wchar_t **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]);
        v43 = Timer::GetTicks(); /*0x7943dc*/
        v39 = 30; /*0x7943e5*/
        v76[1] = v43; /*0x7943ea*/
        v76[3] = 30; /*0x7943ee*/
        v68 = v43; /*0x7943f2*/
        j = 30; /*0x7943fa*/
LABEL_70:
        Game::ProcessIdle((CreateGameDialogControl *)v39); /*0x7943fe*/
        v44 = v58; /*0x794403*/
        if ( !v58 ) /*0x794409*/
        {
          Speed = Connection::GetSpeed((int)&HouseClass_Player.__pad_5568[22284]); /*0x794414*/
          v46 = v67; /*0x794419*/
          if ( v67 >= Speed ) /*0x79441f*/
          {
            v46 = 0; /*0x794421*/
            v67 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk( /*0x79445d*/
                  (int)&HouseClass_Player.__pad_5568[22284],
                  v46,
                  (int)&v94,
                  (int)v76,
                  (int)v88,
                  (int)&v70 + 2,
                  0)
            || HIWORD(v70) != 0xAA04 )
          {
            goto LABEL_89; /*0x79445d*/
          }
          if ( v94 != 13 ) /*0x79446d*/
          {
            if ( v94 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( NetworkID::Compare( /*0x7944a1*/
                   *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v63) + 40,
                   (int)v88) )
            {
              v47 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x7944bd*/
              if ( !_strcmpi(v47, v95) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                qmemcpy(v90, "Z1;", sizeof(v90)); /*0x7944f1*/
                if ( v95 ) /*0x794509*/
                  strcpy(v91, v95); /*0x79452d*/
                else
                  v91[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x794565*/
                  *(&g_MatrixTransformState + 2263),
                  v90);
                if ( v63 >= 0 && v63 < *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x794576*/
                {
                  v48 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79457d*/
                  v49 = v48; /*0x794582*/
                  if ( v48 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v48, dword_84A1F0[v63]); /*0x794591*/
                    *((_BYTE *)&dword_B75F54 + v63) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v49, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * *(_DWORD *)&HouseClass_Player.__pad_5568[20336] + 20208] = v3; /*0x7945c4*/
                v77 = Timer::GetTicks(); /*0x7945d6*/
                v58 = 1; /*0x7945df*/
                v44 = 1; /*0x7945e7*/
                v79 = 1200; /*0x7945eb*/
                v51 = (DWORD *)(12 * *(_DWORD *)&HouseClass_Player.__pad_5568[20336] + 11067844); /*0x7945ef*/
                *v51 = v77; /*0x7945f6*/
                v51[1] = v78; /*0x7945fc*/
                v51[2] = 1200; /*0x7945ff*/
                ++*(_DWORD *)&HouseClass_Player.__pad_5568[20336]; /*0x794609*/
                *(_DWORD *)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 20176] = v59; /*0x794619*/
              }
            }
          }
          Network::receiveData((int)&HouseClass_Player.__pad_5568[22284], v67); /*0x79462a*/
          if ( !v44 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        v52 = *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352]; /*0x794641*/
        if ( v52 >= 1 && v52 < 11 ) /*0x794654*/
        {
          v53 = v52 - 1; /*0x794656*/
          if ( v52 - 1 > v62 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v62 = v53 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v54 = 360; /*0x794669*/
        ++v67; /*0x794671*/
        if ( v65 != -1 ) /*0x794675*/
        {
          v55 = Timer::GetTicks() - v65; /*0x794680*/
          if ( v55 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v54 = 360 - v55; /*0x794688*/
        }
        if ( !v54 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v42 = v39; /*0x79439f*/
LABEL_68:
      if ( v42 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v44 = v58; /*0x7946bb*/
LABEL_100:
    if ( v44 && *(_DWORD *)&HouseClass_Player.__pad_5568[4 * v71 + 19352] == 11 || v62 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v62; /*0x7946f2*/
    v56 = ToWideStringChar(*(IUnknown **)&HouseClass_Player.__pad_5568[4 * (_DWORD)v3 + 18396]); /*0x7946f6*/
    qmemcpy(v89, "Z1", 2); /*0x7946fd*/
    v89[2] = v62 + 49; /*0x794714*/
    if ( v56 ) /*0x79471b*/
      strcpy(&v89[3], v56); /*0x79473a*/
    else
      v89[3] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(_DWORD, char *))((*(&g_MatrixTransformState + 2263))->X + 60))( /*0x794772*/
      *(&g_MatrixTransformState + 2263),
      v89);
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v44; /*0x793e37*/
}


// ==== 0x007947B0  WaitNetworkLobbyPlayers  this=-  sig=ida-proto ====
char NetworkLobby_WaitForPlayers()
{
  HWND v1; // esi
  HWND DlgItem; // eax
  int *v3; // eax
  int v4; // esi
  int v5; // edi
  char *v6; // ebx
  char *v7; // ebx
  char *v8; // eax
  int v9; // ebp
  char *v10; // ebx
  char *v11; // eax
  int *v12; // ebx
  int v13; // edx
  _DWORD *v14; // esi
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  int v24; // esi
  signed int v25; // eax
  bool v26; // cc
  int *i; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+1Ch] [ebp-34h]
  DWORD Ticks; // [esp+20h] [ebp-30h]
  int v31; // [esp+28h] [ebp-28h]

  Timer::GetTicks(); /*0x7947bb*/
  MEMORY[0xA8E224] = 0; /*0x7947d2*/
  memset(MEMORY[0xA8E184], 0, sizeof(MEMORY[0xA8E184])); /*0x7947d8*/
  v29 = -1; /*0x7947e5*/
  dword_B77DCC = 0; /*0x7947ed*/
  if ( !MEMORY[0xA8E04C] ) /*0x7947f3*/
    return 0; /*0x7947fe*/
  SessionClass::SetupNetwork((int)MEMORY[0xA8B238]); /*0x794804*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x79480f*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x79481b*/
    if ( v1 ) /*0x79481f*/
    {
      DlgItem = GetDlgItem(v1, dword_84A1F0[0]); /*0x794828*/
      LOBYTE(dword_B75F54) = 1; /*0x79482e*/
      SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x79483e*/
      PostMessageA(v1, 0xFu, 0, 0); /*0x794849*/
    }
  }
  Debug::Log(); /*0x79485b*/
  v28 = 0; /*0x79486a*/
  if ( MEMORY[0xA8E04C] <= 0 ) /*0x79486e*/
  {
LABEL_44:
    Debug::Log(); /*0x794b38*/
    return 1; /*0x794b4e*/
  }
  v3 = MEMORY[0xA8DE4C]; /*0x794874*/
  for ( i = MEMORY[0xA8DE4C]; ; v3 = i ) /*0x794879*/
  {
    v4 = *(v3 - 128); /*0x794883*/
    v5 = *(v3 - 127); /*0x794889*/
    v6 = (char *)*(&MEMORY[0xA8DA90] + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v4)); /*0x7948d8*/
    v8 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x7948da*/
    if ( _strcmpi(v7, v8) ) /*0x7948e1*/
    {
      v9 = -1; /*0x794907*/
    }
    else
    {
      v9 = v5; /*0x7948f5*/
      *i = 11; /*0x7948fb*/
      v29 = 2 * v28 + 1; /*0x794901*/
    }
    v10 = ToWideStringChar((char *)*(&MEMORY[0xA8DA90] + v5)); /*0x79491c*/
    v11 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x79491e*/
    if ( _strcmpi(v10, v11) ) /*0x794925*/
    {
      v12 = i; /*0x79494f*/
    }
    else
    {
      v12 = i; /*0x794935*/
      v9 = v4; /*0x79493d*/
      i[1] = 11; /*0x794942*/
      v29 = 2 * v28; /*0x794949*/
    }
    if ( v9 != -1 ) /*0x794956*/
      break; /*0x794956*/
    Debug::Log(); /*0x7949cb*/
    Ticks = Timer::GetTicks(); /*0x7949e0*/
    v31 = 960; /*0x7949f5*/
    v19 = 0; /*0x7949f9*/
    while ( 1 ) /*0x7949fd*/
    {
      Sleep(5u); /*0x7949fd*/
      Game::ProcessIdle(); /*0x794a03*/
      Network_Connect_793BB0(); /*0x794a08*/
      v20 = *v12; /*0x794a0d*/
      v21 = v12[1]; /*0x794a0f*/
      if ( (v20 == 11 || !v20) && (v21 == 11 || !v21) ) /*0x794a26*/
        break; /*0x794a26*/
      if ( v20 < 1 || v20 >= 11 || (v22 = v20 - 1, v20 - 1 <= v19) ) /*0x794a3b*/
      {
        v23 = v31; /*0x794a77*/
      }
      else
      {
        Debug::Log(); /*0x794a43*/
        v19 = v22; /*0x794a4f*/
        Ticks = Timer::GetTicks(); /*0x794a63*/
        v23 = 840; /*0x794a67*/
        v31 = 840; /*0x794a71*/
      }
      if ( v21 >= 1 && v21 < 11 && v21 - 1 > v19 ) /*0x794a8a*/
      {
        Debug::Log(); /*0x794a92*/
        v19 = v21 - 1; /*0x794a9e*/
        Ticks = Timer::GetTicks(); /*0x794aa9*/
        v23 = 840; /*0x794aba*/
        v31 = 840; /*0x794ac0*/
      }
      v24 = v23; /*0x794ac8*/
      if ( Ticks != -1 ) /*0x794acd*/
      {
        v25 = Timer::GetTicks() - Ticks; /*0x794ad8*/
        if ( v25 >= v24 ) /*0x794ade*/
          goto LABEL_41; /*0x794ade*/
        v23 = v24 - v25; /*0x794ae2*/
      }
      if ( !v23 ) /*0x794ae6*/
        goto LABEL_41; /*0x794ae6*/
      v12 = i; /*0x794ae8*/
    }
    Debug::Log(); /*0x794af6*/
LABEL_41:
    if ( *i != 11 || i[1] != 11 ) /*0x794b0b*/
      goto LABEL_45; /*0x794b0b*/
    Debug::Log(); /*0x794b12*/
    v26 = ++v28 < MEMORY[0xA8E04C]; /*0x794b28*/
    i += 2; /*0x794b2e*/
    if ( !v26 ) /*0x794b32*/
      goto LABEL_44; /*0x794b32*/
  }
  v13 = MEMORY[0xA8DC2C][v4]; /*0x794958*/
  v14 = (_DWORD *)(4 * v4 + 11066412); /*0x79495f*/
  v15 = (_DWORD *)(4 * v5 + 11066412); /*0x79496c*/
  v16 = NetworkLobby::GetPlayerCount(v13); /*0x794978*/
  if ( v16 <= NetworkLobby::GetPlayerCount(*v15) ) /*0x794989*/
    v17 = NetworkLobby::GetPlayerCount(*v15); /*0x794998*/
  else
    v17 = NetworkLobby::GetPlayerCount(*v14); /*0x79498e*/
  v18 = v17; /*0x79499d*/
  Debug::Log(); /*0x7949a5*/
  if ( NegotiateNetworkConnection(v9, v29, v18) ) /*0x7949b4*/
    goto LABEL_41; /*0x7949bb*/
LABEL_45:
  Debug::Log(); /*0x794b7d*/
  return 0; /*0x7947f5*/
}


// ==== 0x00794BA0  ObjectClass::StartGameWOL  this=ObjectClass  sig=csp ====
void WOL_StartGame()
{
  DLGTEMPLATE *Indirect; // eax
  int v1; // esi
  int v2; // ecx
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *String; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  int *v13; // eax
  int v14; // eax
  char *v15; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  char *v20; // edx
  char *v21; // eax
  int v22; // esi
  int *v23; // eax
  int v24; // eax
  char *v25; // ebp
  int v26; // ebx
  char *v27; // edx
  int v28; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  char *v37; // ebp
  signed int v38; // edx
  int *v39; // eax
  signed int v40; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  char *v43; // [esp+14h] [ebp-Ch]
  char *v44; // [esp+14h] [ebp-Ch]
  int v45; // [esp+18h] [ebp-8h]
  int v46; // [esp+1Ch] [ebp-4h]
  int *v47; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_State ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 20))(MEMORY[0x887628]); /*0x794c32*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 24))(MEMORY[0x887628]); /*0x794c3d*/
    memset(&dword_B73BB4, 0xFFu, 0x20u); /*0x794c4e*/
    Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 304, g_hWnd, sub_793280, 0); /*0x794c66*/
    if ( Indirect ) /*0x794c6d*/
      SetupDialog((HWND)Indirect, 304); /*0x794c76*/
    v1 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v1; /*0x794c85*/
    }
    while ( v1 ); /*0x794c86*/
    StartGameWOL_Start(300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
      dword_B77DCC = 0; /*0x794cab*/
      if ( (int)g_WOL_State <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90(&g_IsMultiplayerSession, v4); /*0x794cbe*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= (int)g_WOL_State ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
      if ( !&g_IsMultiplayerSession || (v5 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v5)) ) /*0x794cf1*/
LABEL_18:
        Debug::Log(); /*0x794cfd*/
    }
    LOBYTE(v2) = v3; /*0x794d0a*/
    v6 = NegotiateScenarioWOL(v2); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        String = GetStringCSF(MEMORY[0x837484], 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      g_NetworkLobby_Init = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x794e00*/
      if ( MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 || MEMORY[0xA8B244] == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&dword_B76230, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = MEMORY[0xA8DA84]; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( MEMORY[0xA8DA84] > 0 ) /*0x794e7c*/
      {
        v12 = MEMORY[0x841F30]; /*0x794e7e*/
        v13 = &MEMORY[0xA8E2B2]; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*(_WORD *)v13 ) /*0x794e89*/
          {
            *(_WORD *)v13 = v12; /*0x794e8e*/
            v10 = MEMORY[0xA8DA84]; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          v13 = (int *)((char *)v13 + 2); /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( (int)g_WOL_State > 0 ) /*0x794ea9*/
      {
        v15 = (char *)g_WOL_ConnectionFlags; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < (int)g_WOL_State ) /*0x794eb7*/
            qmemcpy(&g_IsMultiplayerSession, v15, 0x6Cu); /*0x794ec5*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          v15 += 108; /*0x794ed1*/
          if ( v14 >= (int)g_WOL_State ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_IsMultiplayerSession ) /*0x794ee1*/
        {
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v16)); /*0x794ef6*/
              if ( !_strcmpi(v17, byte_B777D4) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= MEMORY[0xA8DA84] ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            LOWORD(MEMORY[0xA8DBBC]) = *((_WORD *)&MEMORY[0xA8E2B2] + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((void *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( MEMORY[0xA8B238][0] != 4 || MEMORY[0xA8B244] != 3 ) /*0x794f67*/
        MEMORY[0xA8B3AC] = 0; /*0x794f69*/
      MEMORY[0xA8B554] = 5; /*0x794f74*/
      switch ( MEMORY[0xA8B268] ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)40; /*0x794f98*/
          MEMORY[0xA8B570] = 60; /*0x794fa2*/
          MEMORY[0xA8B554] = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)40; /*0x794fb4*/
          MEMORY[0xA8B570] = 45; /*0x794fbe*/
          MEMORY[0xA8B554] = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)30; /*0x794fd5*/
          MEMORY[0xA8B570] = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x794fe1*/
          MEMORY[0xA8B570] = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x794fef*/
          MEMORY[0xA8B570] = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          MEMORY[0xA8B550] = (wchar_t *)20; /*0x795001*/
          MEMORY[0xA8B570] = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          MEMORY[0xA8B550] = (wchar_t *)10; /*0x795013*/
          MEMORY[0xA8B570] = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( MEMORY[0xA8E2C8] ) /*0x795026*/
        MEMORY[0xA8B550] += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      MEMORY[0xA8B56C] = 0; /*0x795038*/
      if ( (int)g_WOL_State <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = (char *)g_WOL_ConnectionFlags; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < (int)g_WOL_State ) /*0x79504c*/
          qmemcpy(&g_IsMultiplayerSession, v20, 0x6Cu); /*0x79505a*/
        if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 += 108; /*0x795066*/
        if ( v19 >= (int)g_WOL_State ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( !&g_IsMultiplayerSession /*0x795088*/
        || (v21 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(byte_B777D4, v21)) )
      {
LABEL_77:
        MEMORY[0xA8B570] = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      v23 = dword_B7790C; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( *v23 > v22 ) /*0x7950a9*/
          v22 = *v23; /*0x7950ab*/
        ++v23; /*0x7950ad*/
      }
      while ( (int)v23 < (int)&dword_B7792C ); /*0x7950b5*/
      if ( MEMORY[0xA8E2C8] ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        MEMORY[0xA8B56C] = 10 * ((unsigned int)MEMORY[0xA8B550] / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)MEMORY[0xA8B550] / 0xA) <= 0xA ) /*0x7953e3*/
          MEMORY[0xA8B56C] = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &MEMORY[0xA8E9C0],
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( (int)g_WOL_State > 0 ) /*0x795169*/
        {
          v25 = (char *)g_WOL_ConnectionFlags; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < (int)g_WOL_State ) /*0x795177*/
              qmemcpy(&g_IsMultiplayerSession, v25, 0x6Cu); /*0x795185*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 += 108; /*0x795195*/
            if ( v24 >= (int)g_WOL_State ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_IsMultiplayerSession ) /*0x795346*/
          {
            v35 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x795351*/
            if ( !_strcmpi(byte_B777D4, v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)MEMORY[0xA8B550]; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = MEMORY[0xA8B56C]; /*0x79539c*/
                  break; /*0x79539c*/
              }
              MEMORY[0xA8B56C] = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      MEMORY[0xA8B568] = (int)MEMORY[0xA8B550]; /*0x7951f0*/
      memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&MEMORY[0x841F30] = 1234; /*0x795200*/
      *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x79520a*/
      *(_DWORD *)&MEMORY[0x841F34] = 1235; /*0x795216*/
      *(_DWORD *)&MEMORY[0x841F38] = 1236; /*0x795220*/
      *(_DWORD *)&MEMORY[0x841F3C] = 1237; /*0x79522a*/
      MEMORY[0xA8ED84] = 0; /*0x795234*/
      if ( MEMORY[0xA8E2C8] ) /*0x79523e*/
        Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( MEMORY[0xA8B238][0] == 4 ) /*0x795266*/
      {
        if ( (dword_B76B30 & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          v28 = 0; /*0x79528b*/
          v45 = 0; /*0x79528f*/
          v46 = 0; /*0x795293*/
          if ( (int)g_WOL_State > 0 ) /*0x795297*/
          {
            v43 = (char *)g_WOL_ConnectionFlags; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < (int)g_WOL_State ) /*0x7952b0*/
                v27 = v43; /*0x7952b2*/
              if ( !v28 || (v29 = *((_DWORD *)v27 + 5), v28 == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, v27 + 36); /*0x79541a*/
                strcat(&byte_B77A04, MEMORY[0x817F70]); /*0x795445*/
                v28 = *((_DWORD *)v27 + 5); /*0x79544e*/
              }
              else if ( !v45 || v45 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, v27 + 36); /*0x7952fb*/
                v30 = strlen(MEMORY[0x817F70]) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, MEMORY[0x817F70], 4 * (v30 >> 2)); /*0x795326*/
                v33 = &MEMORY[0x817F70][4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v46; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v45 = *((_DWORD *)v27 + 5); /*0x795336*/
              }
              v46 = ++v26; /*0x795460*/
              v43 += 108; /*0x795464*/
            }
            while ( v26 < (int)g_WOL_State ); /*0x795468*/
          }
        }
        if ( MEMORY[0xA8B244] == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( (int)g_WOL_State > 0 ) /*0x795486*/
          {
            v39 = MEMORY[0xB76E58]; /*0x795492*/
            v44 = (char *)g_WOL_ConnectionFlags; /*0x795497*/
            v40 = g_WOL_State; /*0x79549b*/
            v47 = MEMORY[0xB76E58]; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)MEMORY[0xB76E58] && v38 < v40 ) /*0x7954ae*/
                v37 = v44; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, v37 + 36); /*0x79551d*/
                v41 = strlen(MEMORY[0x817F70]) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, v37 + 36); /*0x7954dc*/
                v41 = strlen(MEMORY[0x817F70]) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], MEMORY[0x817F70], v41); /*0x79554a*/
              v40 = g_WOL_State; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v47 + 37; /*0x795565*/
              v44 += 108; /*0x79556c*/
              v47 += 37; /*0x795570*/
            }
            while ( v38 < (int)g_WOL_State ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      g_NetworkLobby_Init = 1; /*0x7955da*/
      Debug::Log(); /*0x7955e1*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7955f1*/
      Scenario::PreGameInit(); /*0x7955f4*/
      byte_B77E27 = 0; /*0x7955f9*/
      byte_B77E26 = 0; /*0x795600*/
      Debug::Log(); /*0x79560c*/
    }
  }
  else
  {
    g_NetworkLobbyState = 0; /*0x794bcb*/
    if ( MEMORY[0xA8B244] == 3 || MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2 ) /*0x794bde*/
    {
      g_WOL_GameListState = 0; /*0x794be1*/
      g_WOL_IdleHandler = 11; /*0x794be7*/
      g_WOL_GameProcessState = -1; /*0x794bf1*/
      g_WOL_GameListPool = time(0); /*0x794c03*/
    }
    byte_B77DEC = 0; /*0x794c08*/
    Network::Init(); /*0x794c0f*/
    byte_B77E27 = 0; /*0x794c14*/
    byte_B77E26 = 0; /*0x794c1b*/
  }
}


// ==== 0x00795650  ObjectClass::QueryNATPortWOL  this=IPXInterfaceClass  sig=csp ====
char __thiscall WOL_QueryNATPort(unsigned __int16 *this)
{
  char *v1; // edx
  char *v2; // eax
  struct hostent *v3; // eax
  HMODULE LibraryA; // edi
  HMODULE v5; // ebx
  FARPROC ProcAddress; // eax
  _DWORD *v7; // ebx
  _DWORD *v8; // ebp
  DWORD TickCount; // eax
  void *v10; // eax
  bool v11; // zf
  int v12; // esi
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  char v21; // bl
  int v22; // esi
  bool v23; // zf
  int v24; // eax
  void **v26; // [esp+34h] [ebp-100h] BYREF
  void *Block; // [esp+38h] [ebp-FCh]
  int v28; // [esp+3Ch] [ebp-F8h]
  char v29; // [esp+41h] [ebp-F3h]
  int v30; // [esp+44h] [ebp-F0h]
  int v31; // [esp+48h] [ebp-ECh]
  HMODULE hLibModule; // [esp+4Ch] [ebp-E8h]
  void *v33; // [esp+50h] [ebp-E4h]
  int v34; // [esp+54h] [ebp-E0h] BYREF
  HMODULE v35; // [esp+58h] [ebp-DCh]
  unsigned __int16 *v36; // [esp+5Ch] [ebp-D8h]
  int v37; // [esp+60h] [ebp-D4h]
  void *v38; // [esp+64h] [ebp-D0h]
  int v39; // [esp+6Ch] [ebp-C8h] BYREF
  _DWORD v40[10]; // [esp+74h] [ebp-C0h] BYREF
  _BYTE v41[4]; // [esp+9Ch] [ebp-98h] BYREF
  int v42; // [esp+A0h] [ebp-94h] BYREF
  _BYTE v43[4]; // [esp+A4h] [ebp-90h] BYREF
  _BYTE v44[4]; // [esp+A8h] [ebp-8Ch] BYREF
  _BYTE v45[8]; // [esp+ACh] [ebp-88h] BYREF
  char Destination[128]; // [esp+B4h] [ebp-80h] BYREF

  v36 = this; /*0x79565c*/
  QueryNATPortWOL_Helper(0, 0); /*0x795666*/
  v26 = &DynamicVectorClass<tConnInfoStruct *>::`vftable'; /*0x795670*/
  v31 = 10; /*0x79567b*/
  v30 = 0; /*0x795683*/
  v34 = 0; /*0x795687*/
  if ( dword_B76468 < 1 || dword_B76468 >= g_WOL_UserList ) /*0x795697*/
  {
    v10 = Block; /*0x795c8c*/
    v26 = &vt_VectorClass_tConnInfoStruct; /*0x795c90*/
    if ( !Block || !v29 ) /*0x795ca2*/
      return 0; /*0x795ca2*/
LABEL_65:
    __3_YAXPAX_Z(v10); /*0x795ca4*/
    return 0; /*0x795cb0*/
  }
  Debug::Log(); /*0x7956a2*/
  v1 = 0; /*0x7956af*/
  if ( dword_B76468 >= 0 && dword_B76468 < g_WOL_UserList ) /*0x7956bb*/
    v1 = (char *)dword_B778E0 + 248 * dword_B76468; /*0x7956ca*/
  memset(Destination, 0, sizeof(Destination)); /*0x7956de*/
  strncpy(Destination, v1 + 104, 0x80u); /*0x7956ee*/
  v2 = strchr(Destination, 59); /*0x7956fd*/
  if ( !v2 ) /*0x795707*/
    goto LABEL_58; /*0x795707*/
  *v2 = 0; /*0x795711*/
  sscanf(v2 + 1, MEMORY[0x817F6C], &v34); /*0x79571c*/
  Debug::Log(); /*0x79572e*/
  Debug::Log(); /*0x79573d*/
  Debug::Log(); /*0x795747*/
  v3 = gethostbyname(Destination); /*0x795757*/
  if ( !v3 ) /*0x79575e*/
  {
    WSAGetLastError(); /*0x795760*/
    Debug::Log(); /*0x79576b*/
LABEL_59:
    v10 = Block; /*0x795c72*/
    v26 = &vt_VectorClass_tConnInfoStruct; /*0x795c76*/
    v11 = Block == 0; /*0x795c7e*/
    goto LABEL_60; /*0x795c7e*/
  }
  v38 = (void *)ntohl(**(_DWORD **)v3->h_addr_list); /*0x795785*/
  Debug::Log(); /*0x7957b4*/
  Debug::Log(); /*0x7957be*/
  LibraryA = LoadLibraryA(aInetmib1Dll); /*0x7957d3*/
  v35 = LibraryA; /*0x7957d7*/
  if ( !LibraryA ) /*0x7957db*/
  {
LABEL_58:
    Debug::Log(); /*0x795c6a*/
    goto LABEL_59; /*0x795c6a*/
  }
  Debug::Log(); /*0x7957ec*/
  v5 = LoadLibraryA(aSnmpapiDll); /*0x7957fb*/
  hLibModule = v5; /*0x7957ff*/
  if ( !v5 ) /*0x795803*/
  {
    Debug::Log(); /*0x79580a*/
    FreeLibrary(LibraryA); /*0x795813*/
    goto LABEL_59; /*0x795819*/
  }
  dword_B7792C = (int (__stdcall *)(_DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, aSnmpextensioni); /*0x79582c*/
  dword_B76678 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(LibraryA, aSnmpextensionq); /*0x795839*/
  dword_B778F0 = (int (__stdcall *)(_DWORD))GetProcAddress(v5, aSnmputilmemall); /*0x795846*/
  ProcAddress = GetProcAddress(v5, aSnmputilmemfre); /*0x795851*/
  dword_B77AC0 = (int (__stdcall *)(_DWORD))ProcAddress; /*0x795859*/
  if ( !dword_B7792C || !dword_B76678 || !dword_B778F0 || !ProcAddress ) /*0x795882*/
  {
    Debug::Log(); /*0x795c37*/
    FreeLibrary(v5); /*0x795c46*/
    FreeLibrary(LibraryA); /*0x795c49*/
    v26 = &vt_VectorClass_tConnInfoStruct; /*0x795c4b*/
    v10 = Block; /*0x795c53*/
    if ( !Block || !v29 ) /*0x795c61*/
      return 0; /*0x795c61*/
    goto LABEL_65; /*0x795c61*/
  }
  v7 = (_DWORD *)dword_B778F0(8); /*0x79588c*/
  v8 = (_DWORD *)dword_B778F0(24); /*0x795896*/
  Debug::Log(); /*0x79589d*/
  TickCount = GetTickCount(); /*0x7958b5*/
  if ( !dword_B7792C(TickCount, v44, v45) ) /*0x7958bc*/
  {
    Debug::Log(); /*0x7958cb*/
    dword_B77AC0(v7); /*0x7958d4*/
    dword_B77AC0(v8); /*0x7958db*/
    FreeLibrary(hLibModule); /*0x7958ec*/
    FreeLibrary(LibraryA); /*0x7958ef*/
LABEL_18:
    v26 = &vt_VectorClass_tConnInfoStruct; /*0x7958f1*/
    v10 = Block; /*0x7958f9*/
    v11 = Block == 0; /*0x7958fd*/
LABEL_60:
    if ( v11 || !v29 ) /*0x795c88*/
      return 0; /*0x795c88*/
    goto LABEL_65; /*0x795c88*/
  }
  v40[0] = 1; /*0x795910*/
  v40[1] = 3; /*0x795914*/
  v40[2] = 6; /*0x79591c*/
  v40[3] = 1; /*0x795920*/
  v40[4] = 2; /*0x795924*/
  v40[5] = 1; /*0x79592c*/
  v40[6] = 6; /*0x795930*/
  v40[7] = 13; /*0x795934*/
  v40[8] = 1; /*0x79593c*/
  v40[9] = 1; /*0x795940*/
  v33 = (void *)dword_B778F0(40); /*0x795955*/
  qmemcpy(v33, v40, 0x28u); /*0x795962*/
  *v8 = 10; /*0x795964*/
  v8[1] = v40; /*0x79596b*/
  *v7 = v8; /*0x79596e*/
  v7[1] = 1; /*0x795970*/
  v37 = 1; /*0x795973*/
  v12 = 0; /*0x795977*/
  while ( 1 ) /*0x795979*/
  {
    if ( !dword_B76678(161, v7, v43, v41) ) /*0x795994*/
    {
      Debug::Log(); /*0x795a7c*/
      dword_B77AC0(v7); /*0x795a85*/
      dword_B77AC0(v8); /*0x795a8c*/
      FreeLibrary(hLibModule); /*0x795a9d*/
      FreeLibrary(v35); /*0x795aa4*/
      goto LABEL_18; /*0x795aa4*/
    }
    if ( *v8 < 0xAu ) /*0x79599e*/
      break; /*0x79599e*/
    v13 = v8[1]; /*0x7959a4*/
    v14 = *(_DWORD *)(v13 + 36); /*0x7959ab*/
    if ( v37 != v14 ) /*0x7959b0*/
    {
      v12 = 0; /*0x7959b2*/
      v37 = *(_DWORD *)(v13 + 36); /*0x7959b4*/
    }
    switch ( v14 ) /*0x7959be*/
    {
      case 1: /*0x7959be*/
        v15 = __2_YAPAXI_Z(0x14u); /*0x7959cc*/
        *v15 = v8[3]; /*0x7959d4*/
        if ( v30 < v28 /*0x795a01*/
          || (v29 || !v28)
          && v31 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v26[2])(&v26, v31 + v28, 0) )
        {
          v16 = v30++; /*0x795a10*/
          *((_DWORD *)Block + v16) = v15; /*0x795a1b*/
        }
        break; /*0x795a1e*/
      case 2: /*0x7959be*/
        v17 = *((_DWORD *)Block + v12++); /*0x795a2a*/
        *(_DWORD *)(v17 + 4) = *(_DWORD *)v8[3]; /*0x795a30*/
        break; /*0x795a33*/
      case 3: /*0x7959be*/
        v18 = *((_DWORD *)Block + v12++); /*0x795a40*/
        *(_WORD *)(v18 + 8) = *((_WORD *)v8 + 6); /*0x795a44*/
        break; /*0x795a48*/
      case 4: /*0x7959be*/
        v19 = *((_DWORD *)Block + v12++); /*0x795a54*/
        *(_DWORD *)(v19 + 12) = *(_DWORD *)v8[3]; /*0x795a5a*/
        break; /*0x795a5d*/
      case 5: /*0x7959be*/
        v20 = *((_DWORD *)Block + v12++); /*0x795a6a*/
        *(_WORD *)(v20 + 16) = *((_WORD *)v8 + 6); /*0x795a6e*/
        break; /*0x795a72*/
      default:
        continue;
    }
  }
  dword_B77AC0(v7); /*0x795aaa*/
  dword_B77AC0(v8); /*0x795ab1*/
  dword_B77AC0(v33); /*0x795abc*/
  Debug::Log(); /*0x795acc*/
  v21 = 0; /*0x795ad8*/
  if ( v30 ) /*0x795adc*/
  {
    do /*0x795bcd*/
    {
      v22 = *(_DWORD *)Block; /*0x795ae6*/
      v33 = (void *)ntohl(*(_DWORD *)(*(_DWORD *)Block + 12)); /*0x795af3*/
      if ( !v21 && v33 == v38 ) /*0x795b0b*/
      {
        Debug::Log(); /*0x795b16*/
        if ( (!v34 || v34 == *(unsigned __int16 *)(v22 + 16)) && (Debug::Log(), *(_DWORD *)v22 == 5) ) /*0x795b53*/
        {
          Debug::Log(); /*0x795b5a*/
          v39 = *(_DWORD *)(v22 + 4); /*0x795b65*/
          NetworkID::Assign(v36, &v42, (int)&v39, *(_WORD *)(v22 + 8)); /*0x795b7f*/
          v21 = 1; /*0x795b84*/
        }
        else
        {
          Debug::Log(); /*0x795b8d*/
        }
      }
      __3_YAXPAX_Z(*(void **)Block); /*0x795b9c*/
      v23 = v30 == 0; /*0x795ba8*/
      if ( v30 > 0 ) /*0x795baa*/
      {
        v24 = 0; /*0x795bad*/
        v23 = v30-- == 1; /*0x795baf*/
        if ( v30 > 0 ) /*0x795bb5*/
        {
          do /*0x795bc9*/
          {
            ++v24; /*0x795bbb*/
            *((_DWORD *)Block + v24 - 1) = *((_DWORD *)Block + v24); /*0x795bbf*/
          }
          while ( v24 < v30 ); /*0x795bc9*/
          v23 = v30 == 0; /*0x795bcb*/
        }
      }
    }
    while ( !v23 ); /*0x795bcd*/
    if ( v21 ) /*0x795bd5*/
    {
      Network::FormatAddress(v36, 0); /*0x795bdd*/
      Debug::Log(); /*0x795be8*/
    }
  }
  FreeLibrary(hLibModule); /*0x795bfb*/
  FreeLibrary(v35); /*0x795c02*/
  v26 = &vt_VectorClass_tConnInfoStruct; /*0x795c04*/
  if ( Block && v29 ) /*0x795c1a*/
    __3_YAXPAX_Z(Block); /*0x795c1d*/
  return v21; /*0x795c25*/
}


// ==== 0x00795CD0  NegotiateScenarioWOL  this=-  sig=ida-proto ====
int __fastcall WOL_NegotiateScenario(char a1)
{
  int v1; // ecx
  char *Flagged; // esi
  char *v3; // eax
  int v4; // ebp
  char v5; // bl
  int v6; // edi
  int v7; // esi
  char *v8; // eax
  int v9; // eax
  bool v10; // cc
  int v11; // esi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // ecx
  int i; // edi
  int v16; // esi
  int v17; // eax
  int v18; // eax
  char *v19; // edx
  char *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  char *v24; // edx
  char *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  char *v29; // edx
  int v30; // esi
  int v31; // eax
  int v32; // esi
  char *v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // eax
  int LobbyStatus; // eax
  int result; // eax
  int v39; // [esp-8h] [ebp-220h]
  bool v40; // [esp+2h] [ebp-216h]
  char v41; // [esp+3h] [ebp-215h]
  int v42; // [esp+4h] [ebp-214h]
  DWORD v43; // [esp+8h] [ebp-210h]
  DWORD Ticks; // [esp+8h] [ebp-210h]
  DWORD v45; // [esp+8h] [ebp-210h]
  int v46; // [esp+10h] [ebp-208h]
  int v47; // [esp+10h] [ebp-208h]
  DWORD v48; // [esp+14h] [ebp-204h]
  DWORD v49; // [esp+14h] [ebp-204h]
  int v50; // [esp+1Ch] [ebp-1FCh]
  int v51; // [esp+1Ch] [ebp-1FCh]
  _DWORD v52[12]; // [esp+20h] [ebp-1F8h] BYREF
  int v53[113]; // [esp+50h] [ebp-1C8h] BYREF
  __int16 v54; // [esp+214h] [ebp-4h]
  char v55; // [esp+216h] [ebp-2h]

  v41 = 0; /*0x795ce1*/
  v40 = a1 == 0; /*0x795ce6*/
  v42 = 0; /*0x795ceb*/
  Network::Disconnect(MEMORY[0xA8E9C0]); /*0x795cf3*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    LOBYTE(v1) = MEMORY[0xA8BB08]; /*0x79616e*/
    if ( FindAndValidateMap(&MEMORY[0xA8B8E0], MEMORY[0xA8BB04], &MEMORY[0xA8BAE2], v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)MEMORY[0xA8DA78], -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)g_WOL_State > 0 ) /*0x7961de*/
      {
        v19 = (char *)g_WOL_ConnectionFlags; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)g_WOL_State ) /*0x7961ec*/
            qmemcpy(&g_IsMultiplayerSession, v19, 0x6Cu); /*0x7961fa*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)g_WOL_State ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796216*/
        {
          v20 = CharToWideString(byte_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
        }
      }
LABEL_75:
      Timer::GetTicks(); /*0x796236*/
      Ticks = Timer::GetTicks(); /*0x79625f*/
      v47 = 1200; /*0x796267*/
      if ( v40 ) /*0x79626b*/
      {
        Ticks = Timer::GetTicks(); /*0x796276*/
        v47 = 300; /*0x796287*/
      }
      while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x796297*/
      {
        v21 = v47; /*0x7962a1*/
        if ( Ticks != -1 ) /*0x7962a8*/
        {
          v22 = Timer::GetTicks() - Ticks; /*0x7962b3*/
          if ( v22 >= v47 ) /*0x7962b9*/
            break; /*0x7962b9*/
          v21 = v47 - v22; /*0x7962bf*/
        }
        if ( !v21 ) /*0x7962c3*/
          break; /*0x7962c3*/
        Event::Dispatch(); /*0x7962c9*/
      }
    }
    else
    {
      if ( MEMORY[0xA8B244] != 3 && (MEMORY[0xA8B244] == 1 || MEMORY[0xA8B244] == 2) /*0x796306*/
        || (_BYTE)MEMORY[0xA8BB08] && !IsRandMap::Sed2((int)MEMORY[0xA8B238]) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)g_WOL_State > 0 ) /*0x796335*/
        {
          v24 = (char *)g_WOL_ConnectionFlags; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)g_WOL_State ) /*0x796343*/
              qmemcpy(&g_IsMultiplayerSession, v24, 0x6Cu); /*0x796351*/
            if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)g_WOL_State ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &g_IsMultiplayerSession ) /*0x79636d*/
          {
            v25 = CharToWideString(byte_B777D4); /*0x796374*/
            Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)MEMORY[0xA8E9C0]) > 0 ) /*0x7963d9*/
        {
          v26 = 1200; /*0x7963e6*/
          if ( v45 != -1 ) /*0x7963ec*/
          {
            v27 = Timer::GetTicks() - v45; /*0x7963f7*/
            if ( v27 >= 1200 ) /*0x7963fd*/
              break; /*0x7963fd*/
            v26 = 1200 - v27; /*0x7963ff*/
          }
          if ( !v26 ) /*0x796403*/
            break; /*0x796403*/
          Event::Dispatch(); /*0x796405*/
        }
      }
      else
      {
        while ( CloseDialog(0, 0) == 1 ) /*0x796425*/
          ; /*0x796427*/
        SynchronizeMultiplayerGameStart_Start(); /*0x796434*/
        if ( RequestNetworkFile(&MEMORY[0xA8B8E0], 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)MEMORY[0xA8B238]) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)MEMORY[0xA8B230] + 4700, &MEMORY[0xA8B8E0]); /*0x796481*/
    Debug::Log(); /*0x7964b4*/
    Timer::GetTicks(); /*0x7964c0*/
    v49 = Timer::GetTicks(); /*0x7964de*/
    v51 = 1200; /*0x7964f1*/
    if ( v40 ) /*0x7964f5*/
    {
      v49 = Timer::GetTicks(); /*0x796500*/
      v51 = 300; /*0x796511*/
    }
    while ( 1 ) /*0x79651a*/
    {
      Event::Dispatch(); /*0x79651a*/
      if ( Network::Send( /*0x796538*/
             (int)MEMORY[0xA8E9C0],
             (int)&MEMORY[0xA8D638],
             (int)&MEMORY[0xA8D800],
             (int)&MEMORY[0xA8D804],
             (int)&MEMORY[0xA8D810]) )
      {
        if ( MEMORY[0xA8D810] == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)g_WOL_State > 0 ) /*0x796561*/
          {
            v29 = (char *)g_WOL_ConnectionFlags; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)g_WOL_State ) /*0x79656f*/
                qmemcpy(&g_IsMultiplayerSession, v29, 0x6Cu); /*0x79657d*/
              if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)g_WOL_State ); /*0x796569*/
            if ( &g_IsMultiplayerSession && !_strcmpi(MEMORY[0xA8D63C], byte_B777D4) ) /*0x7965a5*/
            {
              if ( MEMORY[0xA8D638] == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( MEMORY[0xA8D638] == 42 ) /*0x7965be*/
                break; /*0x7965be*/
            }
          }
        }
      }
      v30 = v51; /*0x7965c0*/
      if ( v49 != -1 ) /*0x7965cb*/
      {
        v31 = Timer::GetTicks() - v49; /*0x7965d6*/
        if ( v31 >= v51 ) /*0x7965dc*/
          goto LABEL_142; /*0x7965dc*/
        v30 = v51 - v31; /*0x7965e2*/
      }
      if ( !v30 ) /*0x7965e6*/
        goto LABEL_142; /*0x7965e6*/
    }
    Debug::Log(); /*0x796608*/
    v32 = 0; /*0x796615*/
    v40 = 1; /*0x796617*/
    if ( MEMORY[0xA8DA84] > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(MEMORY[0xA8DA78] + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, byte_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= MEMORY[0xA8DA84] ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < MEMORY[0xA8DA84] && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
        dword_B73BB4[v32] = 3; /*0x79666d*/
    }
LABEL_142:
    v34 = v51; /*0x796673*/
    if ( v49 != -1 ) /*0x79667e*/
    {
      v35 = Timer::GetTicks() - v49; /*0x796689*/
      if ( v35 >= v51 ) /*0x79668f*/
      {
LABEL_146:
        v40 = 1; /*0x796697*/
        goto LABEL_147; /*0x796697*/
      }
      v34 = v51 - v35; /*0x796691*/
    }
    if ( v34 ) /*0x796695*/
      goto LABEL_147; /*0x796695*/
    goto LABEL_146; /*0x796695*/
  }
  memset(v53, 0, sizeof(v53)); /*0x795d44*/
  v54 = 0; /*0x795d46*/
  v55 = 0; /*0x795d48*/
  memset(&v52[4], 0, 0x20u); /*0x795d59*/
  v4 = 0; /*0x795d5b*/
  v5 = 0; /*0x795d5d*/
  Debug::Log(); /*0x795d5f*/
  Timer::GetTicks(); /*0x795d6b*/
  v48 = Timer::GetTicks(); /*0x795d81*/
  v50 = 900; /*0x795d98*/
  if ( v40 ) /*0x795d9c*/
  {
    v48 = Timer::GetTicks(); /*0x795db0*/
    v50 = 300; /*0x795db8*/
  }
  do /*0x795f56*/
  {
    Event::Dispatch(); /*0x795dbc*/
    if ( Network::Send( /*0x795dda*/
           (int)MEMORY[0xA8E9C0],
           (int)&MEMORY[0xA8D638],
           (int)&MEMORY[0xA8D800],
           (int)&MEMORY[0xA8D804],
           (int)&MEMORY[0xA8D810]) )
    {
      if ( MEMORY[0xA8D810] == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( MEMORY[0xA8DA84] > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + MEMORY[0xA8DA78] + 4) + 40, (int)&MEMORY[0xA8D804]) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + MEMORY[0xA8DA78] + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, MEMORY[0xA8D63C]) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = MEMORY[0xA8D638]; /*0x795e66*/
                if ( MEMORY[0xA8D638] == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = MEMORY[0xA8D638]; /*0x795e7a*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = MEMORY[0xA8D638]; /*0x795e98*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = MEMORY[0xA8D638]; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < MEMORY[0xA8DA84]; /*0x795ec3*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = MEMORY[0xA8D638]; /*0x795f01*/
                  v42 = 2; /*0x795f05*/
                  v40 = 1; /*0x795f0d*/
                  v41 = 1; /*0x795f12*/
                  ++v4; /*0x795f17*/
                }
              }
            }
            ++v6; /*0x795f1d*/
            ++v7; /*0x795f1e*/
          }
          while ( v6 < MEMORY[0xA8DA84] ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= MEMORY[0xA8DA84] - 1 ) /*0x795f32*/
      break; /*0x795f32*/
    v11 = v50; /*0x795f38*/
    if ( v48 != -1 ) /*0x795f3f*/
    {
      v12 = Timer::GetTicks() - v48; /*0x795f4a*/
      if ( v12 >= v50 ) /*0x795f50*/
        break; /*0x795f50*/
      v11 = v50 - v12; /*0x795f52*/
    }
  }
  while ( v11 ); /*0x795f56*/
  if ( v41 ) /*0x795f67*/
    v42 = 2; /*0x795f69*/
  if ( !v40 && !v41 && v5 && v4 == MEMORY[0xA8DA84] - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    MEMORY[0xA8BB10] = 0; /*0x795fba*/
    MEMORY[0xA8BB14] = 0; /*0x795fbf*/
    MEMORY[0xA8BB18] = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( MEMORY[0xA8DA84] > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&MEMORY[0xA8BB10] + MEMORY[0xA8BB18]++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < MEMORY[0xA8DA84] ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)MEMORY[0xA8B230] + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)MEMORY[0xA8B238]) && !SendNetworkFile(stru_829ABC, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != MEMORY[0xA8DA84] - 1 || v41 ) /*0x79607d*/
  {
    v53[0] = 42; /*0x79608d*/
    v40 = 1; /*0x796097*/
    if ( !v42 ) /*0x79609c*/
      v42 = 1; /*0x79609e*/
  }
  else
  {
    v53[0] = 11; /*0x79607f*/
  }
  CopyWideToChar(&v53[1], *(char **)MEMORY[0xA8DA78], -1); /*0x7960b4*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x7960c5*/
  {
    v43 = Timer::GetTicks(); /*0x7960dc*/
    v46 = 600; /*0x7960e6*/
    if ( v40 ) /*0x7960ea*/
    {
      v52[0] = Timer::GetTicks(); /*0x7960f5*/
      v43 = v52[0]; /*0x7960f9*/
      v52[2] = 300; /*0x796106*/
      v46 = 300; /*0x79610e*/
    }
    do /*0x796159*/
    {
      Event::Dispatch(); /*0x796112*/
      if ( Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v53, 47, 1, *(wchar_t **)(MEMORY[0xA8DA78] + 4 * i)) ) /*0x79612f*/
        break; /*0x796136*/
      v16 = v46; /*0x79613c*/
      if ( v43 != -1 ) /*0x796142*/
      {
        v17 = Timer::GetTicks() - v43; /*0x79614d*/
        if ( v17 >= v46 ) /*0x796153*/
          break; /*0x796153*/
        v16 = v46 - v17; /*0x796155*/
      }
    }
    while ( v16 ); /*0x796159*/
  }
LABEL_147:
  if ( (unsigned int)(8 * Network::GetLobbyStatus(MEMORY[0xA8E9C0])) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(MEMORY[0xA8E9C0]); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(MEMORY[0xA8E9C0]); /*0x7966d0*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(MEMORY[0xA8E9C0]); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}


// ==== 0x00796710  HandleWOLRematch  this=-  sig=ida-proto ====
char HandleWOLRematch()
{
  int v0; // eax
  char *v1; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  char *i; // edx
  __int16 v8; // [esp+Eh] [ebp-246h] BYREF
  int v9; // [esp+10h] [ebp-244h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-240h] BYREF
  _DWORD v11[27]; // [esp+20h] [ebp-234h] BYREF
  int v12; // [esp+8Ch] [ebp-1C8h] BYREF
  _BYTE v13[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !g_WOL_ProcessIdle || (int)g_WOL_State < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( (int)g_WOL_State > 0 ) /*0x796742*/
  {
    v1 = (char *)g_WOL_ConnectionFlags; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < (int)g_WOL_State ) /*0x796750*/
        qmemcpy(&g_IsMultiplayerSession, v1, 0x6Cu); /*0x79675e*/
      if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      v1 += 108; /*0x79676a*/
      if ( v0 >= (int)g_WOL_State ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_IsMultiplayerSession ) /*0x79677a*/
    {
      v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser); /*0x796781*/
      if ( !_strcmpi(byte_B777D4, v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed((int)MEMORY[0xA8E9C0]) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  v9 = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk(0, &v12, &v9, v10, &v8, 0) || v12 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( (int)g_WOL_State > 0 ) /*0x796833*/
    qmemcpy(v11, g_WOL_ConnectionFlags, sizeof(v11)); /*0x796844*/
  v11[8] = 0; /*0x79684a*/
  Network::SyncPlayerList(); /*0x796852*/
  if ( !Network::Send((int)MEMORY[0xA8E9C0], (int)&v12, (int)&v9, (int)v10, (int)&v8) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v12 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !NetworkID::Compare((int)v10, (int)&MEMORY[0xA8BB1C]) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v8 != -22012 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
  if ( (int)g_WOL_State <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = (char *)g_WOL_ConnectionFlags; ; i += 108 ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7968b8*/
      qmemcpy(&g_IsMultiplayerSession, i, 0x6Cu); /*0x7968c6*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= (int)g_WOL_State ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  if ( !&g_IsMultiplayerSession || _strcmpi(v13, byte_B777D4) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(MEMORY[0xA8E9C0], 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}


// ==== 0x00796960  ObjectClass::Event_Play  this=ObjectClass  sig=csp ====
char sub_796960()
{
  int v0; // eax
  int v1; // esi
  char *v2; // eax
  int v3; // eax
  char *v4; // edx
  char *v5; // eax
  _BYTE v7[12]; // [esp+8h] [ebp-240h] BYREF
  _DWORD v8[27]; // [esp+14h] [ebp-234h] BYREF
  int v9[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v10; // [esp+244h] [ebp-4h]
  char v11; // [esp+246h] [ebp-2h]

  LOBYTE(v0) = MEMORY[0xA8B238][0]; /*0x796960*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x796970*/
    return v0; /*0x796970*/
  Waypoint::InitInvalid(v7); /*0x79697a*/
  v0 = g_WOL_State; /*0x79697f*/
  if ( (int)g_WOL_State < 2 ) /*0x796987*/
    return v0; /*0x796987*/
  v1 = 0; /*0x79698d*/
  if ( (int)g_WOL_State <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((int *)&g_WOL_State, &g_IsMultiplayerSession, v1); /*0x7969a3*/
    if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    v0 = g_WOL_State; /*0x7969b0*/
    if ( ++v1 >= (int)g_WOL_State ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( !&g_IsMultiplayerSession /*0x7969df*/
    || (v2 = String::GetOrEmpty_Alt((char **)&g_WebBrowser), (v0 = _strcmpi(byte_B777D4, v2)) != 0) )
  {
    v0 = g_WOL_State; /*0x7969e5*/
LABEL_10:
    if ( !g_NetworkLobbyState && g_WOL_ProcessIdle ) /*0x796a00*/
    {
      if ( v0 > 0 ) /*0x796a0a*/
        qmemcpy(v8, g_WOL_ConnectionFlags, sizeof(v8)); /*0x796a1b*/
      v8[8] = 0; /*0x796a21*/
      Network::SyncPlayerList(); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(MEMORY[0xA8E9C0], 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8BB1C], 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v9, 0, sizeof(v9)); /*0x796a6f*/
      v10 = 0; /*0x796a79*/
      v11 = 0; /*0x796a7b*/
      v9[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v9[1], *(char **)MEMORY[0xA8DA78], -1); /*0x796a90*/
      v3 = 0; /*0x796a9b*/
      if ( (int)g_WOL_State > 0 ) /*0x796a9f*/
      {
        v4 = (char *)g_WOL_ConnectionFlags; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v3 >= 0 && v3 < (int)g_WOL_State ) /*0x796aad*/
            qmemcpy(&g_IsMultiplayerSession, v4, 0x6Cu); /*0x796abb*/
          if ( (g_IsMultiplayerSession & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v3; /*0x796ac5*/
          v4 += 108; /*0x796ac6*/
          if ( v3 >= (int)g_WOL_State ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_IsMultiplayerSession ) /*0x796ae4*/
        {
          v5 = CharToWideString(byte_B777D4); /*0x796aeb*/
          Network::SendToPlayer((int)MEMORY[0xA8E9C0], (int)v9, 455, 1, (wchar_t *)v5); /*0x796b04*/
        }
      }
LABEL_24:
      LOBYTE(v0) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return v0; /*0x796ad4*/
}


// ==== 0x00796B20  nullsub_264  this=-  sig=ida-proto ====
void nullsub_264()
{
  ; /*0x796b20*/
}


// ==== 0x00796B30  sub_796B30  this=-  sig=ida-proto ====
int sub_796B30()
{
  int v0; // esi
  _DWORD v2[3]; // [esp+4h] [ebp-Ch] BYREF

  SimpleDialogControl::Constructor(v2); /*0x796b38*/
  v2[0] = &off_7F7624; /*0x796b4c*/
  v0 = RunDialog(0xFEu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LobbyDlgProcWOL, (LPARAM)v2); /*0x796b59*/
  v2[0] = &off_7F7624; /*0x796b5b*/
  OwnerDrawControl::InitVtable(v2); /*0x796b6b*/
  if ( v0 >= 0 ) /*0x796b69*/
    return v0; /*0x796b7c*/
  else
    return 0; /*0x796b70*/
}


// ==== 0x00796B90  LobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_LobbyDlgProc(HWND hWnd, LONG a2, int a3, HWND a4)
{
  HWND v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // esi
  int i; // edi
  LRESULT v12; // eax
  HWND v13; // eax
  LRESULT v14; // ebx
  HWND DlgItem; // edi
  LRESULT v16; // eax
  wchar_t *v17; // [esp-4h] [ebp-14h]
  BOOL v18; // [esp-4h] [ebp-14h]

  v4 = a4; /*0x796b92*/
  v5 = hWnd; /*0x796b97*/
  v6 = a2; /*0x796b9c*/
  if ( a2 == 272 && a4 ) /*0x796baa*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x796bb3*/
  v7 = a3; /*0x796bb9*/
  result = BaseDialogProc(v5, v6, a3, (unsigned int)v4); /*0x796bc3*/
  if ( !result ) /*0x796bca*/
  {
    WindowLongA = GetWindowLongA(v5, 8); /*0x796bd3*/
    a2 = WindowLongA; /*0x796bdf*/
    if ( v6 <= 0x82 ) /*0x796be3*/
    {
      switch ( v6 ) /*0x796be5*/
      {
        case 0x82u: /*0x796be5*/
          DestroyDialog(v5); /*0x796c2f*/
          return 0; /*0x796c3a*/
        case 0xFu: /*0x796be5*/
          Dialog::DrawBackground(v5); /*0x796c0f*/
          Dialog::StopBink(v5); /*0x796c16*/
          ValidateRect(v5, 0); /*0x796c1e*/
          return 0; /*0x796c2a*/
        case 0x14u: /*0x796be5*/
          return 1; /*0x796c0a*/
        case 0x2Bu: /*0x796be5*/
          Dialog::Resize((char *)v4); /*0x796bfc*/
          return 1; /*0x796bfc*/
      }
      return 0; /*0x796bf4*/
    }
    if ( v6 == 273 ) /*0x796c43*/
    {
      if ( (unsigned __int16)v7 == 1 ) /*0x796d2e*/
      {
        v14 = 0; /*0x796da1*/
        DlgItem = GetDlgItem(v5, 1008); /*0x796da4*/
        v16 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x796dad*/
        if ( v16 != -1 ) /*0x796db2*/
          v14 = SendMessageA(DlgItem, 0x199u, v16, 0); /*0x796dbe*/
        (*(void (__thiscall **)(LONG, HWND, LRESULT))(*(_DWORD *)a2 + 4))(a2, v5, v14); /*0x796dc8*/
      }
      else
      {
        if ( (unsigned __int16)v7 == 2 ) /*0x796d31*/
        {
          (*(void (__thiscall **)(LONG, HWND, _DWORD))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 0); /*0x796d83*/
          return 0; /*0x796d8c*/
        }
        if ( (unsigned __int16)v7 == 1008 && HIWORD(v7) == 1 ) /*0x796d45*/
        {
          v18 = SendMessageA(v4, 0x188u, 0, 0) != -1; /*0x796d63*/
          v13 = GetDlgItem(v5, 1); /*0x796d66*/
          EnableWindow(v13, v18); /*0x796d6d*/
          return 0; /*0x796d79*/
        }
      }
      return 0; /*0x796d45*/
    }
    if ( v6 != 1175 ) /*0x796c4f*/
      return 0; /*0x796c4f*/
    SendDlgItemMessageA(v5, 1008, 0x184u, 0, 0); /*0x796c64*/
    hWnd = 0; /*0x796c73*/
    (*(void (__stdcall **)(LPVOID, HWND *))(*(_DWORD *)MEMORY[0xAC116C] + 208))(MEMORY[0xAC116C], &hWnd); /*0x796c7f*/
    if ( (int)hWnd <= 0 ) /*0x796c8b*/
      return 0; /*0x796dcb*/
    v10 = GetDlgItem(v5, 1008); /*0x796ca3*/
    for ( i = (int)hWnd - 1; i >= 0; --i ) /*0x796cae*/
    {
      FormatLocaleStringWOL((wchar_t **)&a2, i); /*0x796cb6*/
      WideString::GetOrEmpty((wchar_t **)&a2); /*0x796cbf*/
      Debug::Log(); /*0x796cca*/
      v17 = WideString::GetOrEmpty((wchar_t **)&a2); /*0x796ce0*/
      if ( i >= 2 ) /*0x796cd9*/
        v12 = SendMessageA(v10, 0x4CDu, 0, (LPARAM)v17); /*0x796cf8*/
      else
        v12 = SendMessageA(v10, 0x4CCu, 0, (LPARAM)v17); /*0x796ce8*/
      SendMessageA(v10, 0x19Au, v12, i); /*0x796d02*/
      DeleteAndZero::Alt((void **)&a2); /*0x796d08*/
    }
    SendMessageA(v10, 0x186u, 0xFFFFFFFF, 0); /*0x796d1a*/
    return 0; /*0x796d1f*/
  }
  return result; /*0x796c01*/
}


// ==== 0x00796DE0  Game::CreateAIPlayer  this=Game  sig=csp ====
int Game_CreateAIPlayer()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[2]; // [esp+Ch] [ebp-8h] BYREF
  char v7[6]; // [esp+Eh] [ebp-6h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v1 = v0; /*0x796def*/
  if ( v0 ) /*0x796df8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796dfd*/
  else
    v1 = 0; /*0x796e04*/
  BulkCharToWide(v1, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796e1f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796e26*/
  *(_DWORD *)(v1 + 83) = 3; /*0x796e29*/
  v5 = 0; /*0x796e33*/
  v7[3] = 0; /*0x796e37*/
  strcpy(v7, "QR"); /*0x796e44*/
  v6[1] = 2; /*0x796e49*/
  v6[0] = 10; /*0x796e4e*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796e53*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x796e8c*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x796e99*/
    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x796ea8*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x796eab*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x796eb2*/
  result = v3 + 1; /*0x796ebd*/
  MEMORY[0xA8B54C] = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}


// ==== 0x00796ED0  Game::CreateAIPlayer_Potato  this=Game  sig=csp ====
int Game_CreateAIPlayer_Potato()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[3]; // [esp+Ch] [ebp-8h] BYREF
  char v7[5]; // [esp+Fh] [ebp-5h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v1 = v0; /*0x796edf*/
  if ( v0 ) /*0x796ee8*/
    Waypoint::InitInvalid(v0 + 40); /*0x796eed*/
  else
    v1 = 0; /*0x796ef4*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796f0f*/
  *(_DWORD *)(v1 + 75) = 0; /*0x796f16*/
  *(_DWORD *)(v1 + 83) = 0; /*0x796f19*/
  v5 = 0; /*0x796f1f*/
  v7[2] = 0; /*0x796f23*/
  strcpy(v7, "a"); /*0x796f2b*/
  v6[2] = 20; /*0x796f30*/
  v6[1] = 2; /*0x796f35*/
  v6[0] = 10; /*0x796f3a*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x796f3f*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x796f78*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x796f85*/
    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x796f94*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x796f97*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x796f9e*/
  result = v3 + 1; /*0x796fa9*/
  MEMORY[0xA8B54C] = result; /*0x796faa*/
  return result; /*0x796f9c*/
}


// ==== 0x00796FC0  ObjectClass::Network_Init_796FC0  this=ObjectClass  sig=csp ====
int sub_796FC0()
{
  _BYTE *v0; // eax
  _BYTE *v1; // esi
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _BYTE v6[8]; // [esp+Ch] [ebp-8h] BYREF

  v0 = __2_YAPAXI_Z(0x85u); /*0x796fca*/
  v1 = v0; /*0x796fcf*/
  if ( v0 ) /*0x796fd6*/
    Waypoint::InitInvalid(v0 + 40); /*0x796fdb*/
  else
    v1 = 0; /*0x796fe2*/
  BulkCharToWide(v1, (unsigned __int8 *)aPotatotoo, -1); /*0x796fed*/
  *(_DWORD *)(v1 + 123) = -1; /*0x796ff7*/
  *(_DWORD *)(v1 + 75) = 1; /*0x796ffe*/
  *(_DWORD *)(v1 + 83) = 2; /*0x797005*/
  v6[1] = 2; /*0x797008*/
  v5 = 0; /*0x79701d*/
  v6[5] = 0; /*0x797025*/
  v6[4] = 0; /*0x79702a*/
  v6[3] = -6; /*0x79702f*/
  v6[2] = 80; /*0x797034*/
  v6[0] = 10; /*0x797039*/
  NetworkID::Assign((_DWORD *)v1 + 10, &v5, (int)v6, 0); /*0x79703e*/
  if ( MEMORY[0xA8DA84] < MEMORY[0xA8DA7C] /*0x79707a*/
    || (MEMORY[0xA8DA81] || !MEMORY[0xA8DA7C])
    && MEMORY[0xA8DA88] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DA74] + 8))(
         &MEMORY[0xA8DA74],
         MEMORY[0xA8DA7C] + MEMORY[0xA8DA88],
         0) )
  {
    v2 = MEMORY[0xA8DA84]++; /*0x797087*/
    *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v2) = v1; /*0x797096*/
  }
  v3 = MEMORY[0xA8B54C]; /*0x797099*/
  dword_B7790C[MEMORY[0xA8B54C]] = 100; /*0x79709e*/
  MEMORY[0xA8B54C] = v3 + 1; /*0x7970aa*/
  MEMORY[0xA8BB1C] = *((_DWORD *)v1 + 10); /*0x7970b1*/
  result = *((_DWORD *)v1 + 11); /*0x7970b7*/
  MEMORY[0xA8BB20] = result; /*0x7970ba*/
  MEMORY[0xA8BB24] = *((_DWORD *)v1 + 12); /*0x7970c3*/
  return result; /*0x7970c2*/
}


// ==== 0x007970D0  ObjectClass::InitNetworkGame  this=ObjectClass  sig=csp ====
int NetworkGame_Init()
{
  int i; // esi
  int v1; // esi
  int *v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  char v6; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v8[16]; // [esp+18h] [ebp-424h] BYREF
  int v9; // [esp+28h] [ebp-414h]
  int v10; // [esp+2Ch] [ebp-410h]
  int v11; // [esp+30h] [ebp-40Ch]
  int v12; // [esp+34h] [ebp-408h]
  int v13; // [esp+38h] [ebp-404h] BYREF
  _BYTE v14[8]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  dword_B779D4 = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)dword_B779C4 = 0; /*0x7970f1*/
  strcpy(byte_B77830, String::GetOrEmpty((char **)&g_WebBrowser)); /*0x797115*/
  PtrVector::Destroy(&MEMORY[0xA8DA74]); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v6 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(); /*0x797197*/
      Game::CreateAIPlayer_Potato(); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(); /*0x79718b*/
      Game::CreateAIPlayer(); /*0x797190*/
    }
    Network_Init_796FC0(); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0(); /*0x797160*/
    Game::CreateAIPlayer(); /*0x797165*/
    Game::CreateAIPlayer_Potato(); /*0x79716a*/
    v6 = 1; /*0x79716f*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 48))(MEMORY[0x887628]); /*0x7971ae*/
  strcpy(v8, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v9 = 0; /*0x7971d1*/
  v10 = 0; /*0x7971de*/
  v11 = 0; /*0x7971e4*/
  v12 = 0; /*0x7971ec*/
  for ( i = 1; i < MEMORY[0xA8DA84]; ++i ) /*0x7971f7*/
  {
    Network::CopyAddress((_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * i) + 40), &v13, (int)v14); /*0x79720e*/
    (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 44))(MEMORY[0x887628], v8, 0); /*0x797221*/
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(MEMORY[0xA8E258], (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  MEMORY[0xA8E2AC] = -1; /*0x797267*/
  MEMORY[0xA8B3AC] = 0; /*0x797271*/
  MEMORY[0xA8ED94] = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  MEMORY[0xA8B270] = 10; /*0x797282*/
  MEMORY[0xA8B25C] = 10000; /*0x797288*/
  MEMORY[0xA8B31F] = 0; /*0x797292*/
  MEMORY[0xA8B260] = 1; /*0x797297*/
  MEMORY[0xA8B261] = 1; /*0x79729d*/
  LOBYTE(MEMORY[0xA8B320]) = 1; /*0x7972a3*/
  MEMORY[0xA8B31C] = 1; /*0x7972a9*/
  MEMORY[0xA8B31D] = 0; /*0x7972af*/
  MEMORY[0xA8B258] = 1; /*0x7972b4*/
  MEMORY[0xA8B31E] = 0; /*0x7972ba*/
  MEMORY[0xA8B274] = 0; /*0x7972bf*/
  MEMORY[0xA8B278] = 0; /*0x7972c4*/
  MEMORY[0xA8B262] = 1; /*0x7972c9*/
  MEMORY[0xA8B263] = 1; /*0x7972cf*/
  LOBYTE(MEMORY[0xA8B264]) = 0; /*0x7972d5*/
  MEMORY[0xA8B26C] = 1; /*0x7972da*/
  MEMORY[0xA8B254] = 1; /*0x7972e0*/
  MEMORY[0xA8B268] = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  MEMORY[0xA8B268] = 2; /*0x7972fb*/
  *(_DWORD *)MEMORY[0xA8EB60] = 2; /*0x797301*/
  *((_DWORD *)MEMORY[0xA8B230] + 1173) = MEMORY[0xA8B254]; /*0x797307*/
  MEMORY[0xA8B554] = 5; /*0x797315*/
  switch ( MEMORY[0xA8B268] ) /*0x797325*/
  {
    case 0: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x79732c*/
      MEMORY[0xA8B570] = 60; /*0x797332*/
      MEMORY[0xA8B554] = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)40; /*0x797344*/
      MEMORY[0xA8B570] = 45; /*0x79734a*/
      MEMORY[0xA8B554] = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)30; /*0x797361*/
      MEMORY[0xA8B570] = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x797372*/
      MEMORY[0xA8B570] = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x79737e*/
      MEMORY[0xA8B570] = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      MEMORY[0xA8B550] = (wchar_t *)20; /*0x797394*/
      MEMORY[0xA8B570] = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      MEMORY[0xA8B550] = (wchar_t *)10; /*0x7973aa*/
      MEMORY[0xA8B570] = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  MEMORY[0xA8B56C] = 0; /*0x7973be*/
  if ( !v6 ) /*0x7973c4*/
    MEMORY[0xA8B570] = 0; /*0x7973c6*/
  v1 = 0; /*0x7973d1*/
  if ( MEMORY[0xA8DA84] > 0 ) /*0x7973d5*/
  {
    v2 = dword_B7790C; /*0x7973d7*/
    v3 = MEMORY[0xA8DA84]; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( *v2 > v1 ) /*0x7973e2*/
        v1 = *v2; /*0x7973e4*/
      ++v2; /*0x7973e6*/
      --v3; /*0x7973e9*/
    }
    while ( v3 ); /*0x7973ea*/
  }
  MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x7973ee*/
  if ( !v1 || v1 == 1000 ) /*0x797400*/
  {
    MEMORY[0xA8B570] = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v1 <= 1000 ) /*0x79741a*/
    {
      if ( v1 < 600 ) /*0x79742a*/
        MEMORY[0xA8DB9C] = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      MEMORY[0xA8DB9C] = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      MEMORY[0xA8E9C0],
      120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000,
      -1,
      8 * (120 * (60 * v1 / 1000) / 100 + 60 * v1 / 1000),
      1);
    if ( v6 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(5, -1, 120); /*0x797493*/
      switch ( (unsigned int)MEMORY[0xA8DB9C] ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v4 = (unsigned int)MEMORY[0xA8B550]; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v4 = (unsigned int)MEMORY[0xA8B550] + ((unsigned int)MEMORY[0xA8B550] >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v4 = 2 * (_DWORD)MEMORY[0xA8B550]; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v4 = MEMORY[0xA8B56C]; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      MEMORY[0xA8B56C] = 10 * (v4 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  MEMORY[0xA8B568] = (int)MEMORY[0xA8B550]; /*0x797543*/
  memset(&MEMORY[0xA8B574], 0, 0x340u); /*0x797556*/
  *(_DWORD *)&MEMORY[0x841F30] = 1234; /*0x79755e*/
  *(_DWORD *)MEMORY[0xA8EB60] = MEMORY[0xA8B268]; /*0x797568*/
  *(_DWORD *)&MEMORY[0x841F34] = 1235; /*0x79756e*/
  *(_DWORD *)&MEMORY[0x841F38] = 1236; /*0x797578*/
  *(_DWORD *)&MEMORY[0x841F3C] = 1237; /*0x797582*/
  MEMORY[0xA8ED84] = 0; /*0x79758c*/
  byte_B77A04 = 0; /*0x797591*/
  byte_B76568[0] = 0; /*0x797596*/
  return Scenario::PreGameInit(); /*0x7975a0*/
}


// ==== 0x00797640  LoginWOL  this=-  sig=ida-proto ====
int __fastcall sub_797640(int a1)
{
  DWORD i; // esi
  wchar_t *String; // eax
  int v3; // esi
  HWND v4; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  char v8; // [esp+21h] [ebp-3h]
  char v9; // [esp+22h] [ebp-2h]
  char v10; // [esp+23h] [ebp-1h]

  v10 = byte_B77DC0; /*0x797650*/
  byte_B77DC0 = 1; /*0x797669*/
  g_WOL_UserList = 0; /*0x797670*/
  dword_B76468 = 0; /*0x797676*/
  dword_B779CC = 0; /*0x79767c*/
  (*(void (__stdcall **)(LPVOID, int, int, char *, char *, int))(*(_DWORD *)MEMORY[0xAC116C] + 16))( /*0x79768b*/
    MEMORY[0xAC116C],
    a1 | dword_B77E50,
    65537,
    MEMORY[0x84B7AC],
    MEMORY[0x84B7B4],
    30);
  (*(void (__stdcall **)(LPVOID, int))(*(_DWORD *)MEMORY[0xAC116C] + 140))(MEMORY[0xAC116C], g_NetworkRematchState); /*0x79769d*/
  v9 = 0; /*0x7976af*/
  v8 = 0; /*0x7976b3*/
  while ( 1 ) /*0x797758*/
  {
    while ( 1 ) /*0x79771a*/
    {
      do /*0x79771a*/
      {
        while ( 1 ) /*0x7976c3*/
        {
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u); /*0x7976cb*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x32u) )
          {
            Game::ProcessIdle(); /*0x7976cd*/
          }
          ResetEvent(*(&Handles + i)); /*0x7976f0*/
          if ( !i ) /*0x7976f4*/
            goto LABEL_19; /*0x7976f4*/
          if ( i == 8 ) /*0x7976fd*/
          {
            v3 = 2; /*0x79778b*/
            goto LABEL_22; /*0x797790*/
          }
          if ( i != 1 ) /*0x797706*/
            break; /*0x797706*/
          v9 = 1; /*0x79770c*/
          if ( v8 ) /*0x797713*/
            goto LABEL_21; /*0x797713*/
        }
      }
      while ( i != 9 ); /*0x79771a*/
      if ( dword_B77DE8 > -2147221395 ) /*0x797726*/
        break; /*0x797726*/
      if ( dword_B77DE8 >= -2147221396 || dword_B77DE8 >= -2147221401 && dword_B77DE8 <= -2147221398 ) /*0x79773b*/
      {
        String = GetStringCSF(g_Str_TXT_CANT_CONNECT, 0, g_Str_File_wonline_cpp, 24389); /*0x797776*/
        ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, 0); /*0x79777f*/
LABEL_19:
        v3 = 1; /*0x797784*/
        goto LABEL_22; /*0x797789*/
      }
    }
    if ( dword_B77DE8 == 262447 ) /*0x797747*/
    {
      v8 = 1; /*0x797751*/
      if ( v9 ) /*0x797758*/
        break; /*0x797758*/
    }
  }
LABEL_21:
  v3 = 0; /*0x797792*/
LABEL_22:
  v4 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797794*/
  if ( v4 ) /*0x7977a0*/
  {
    g_WOL_ChannelList = 0; /*0x7977a6*/
    CloseDialog(v4, 0); /*0x7977ac*/
  }
  Current = Dialog::GetCurrent(); /*0x7977b1*/
  DlgItem = GetDlgItem(Current, 1344); /*0x7977bc*/
  if ( DlgItem ) /*0x7977c4*/
    SetFocus(DlgItem); /*0x7977c7*/
  byte_B77DC0 = v10; /*0x7977d6*/
  return v3; /*0x7977d3*/
}


// ==== 0x00797800  ObjectClass::FetchWOLData  this=ObjectClass  sig=csp ====
char WOL_FetchData()
{
  wchar_t *String; // eax
  HANDLE *v1; // esi
  int v2; // esi
  wchar_t *v4; // eax
  int v5; // ebx
  DWORD v6; // esi
  HWND v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  wchar_t *v10; // eax
  HWND v11; // eax
  HWND v12; // eax
  wchar_t *v13; // eax
  HWND v14; // eax
  HWND Current; // eax
  int v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  DWORD i; // esi
  HWND v20; // eax
  HWND v21; // eax
  wchar_t *v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  char *v29; // [esp-4h] [ebp-18h]
  void *v30; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v29 = byte_B76A2C; /*0x79780e*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
LABEL_7:
    ShowDialogConfirm(String, 0, (int)GameLoop::Thunk, (char)v29); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v1 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v1++); /*0x797823*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x797832*/
  v2 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)MEMORY[0xAC1170] + 44))( /*0x797853*/
         MEMORY[0xAC1170],
         MEMORY[0xB73B34],
         dword_B76B0C,
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v2 ) /*0x797876*/
  {
    LOBYTE(v29) = 0; /*0x797878*/
    String = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v4 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  WideString::Assign((wchar_t **)&v30, v4); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v30, 0); /*0x7978cf*/
  DeleteAndZero::Alt(&v30); /*0x7978d8*/
  do /*0x797949*/
  {
    v5 = 30000; /*0x7978ed*/
    v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v6 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v5 -= 100; /*0x7978fe*/
        if ( v5 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(); /*0x797909*/
        v6 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v6 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
LABEL_25:
      v13 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v13, 0, (int)GameLoop::Thunk, 0); /*0x797a20*/
      v14 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a2a*/
      if ( v14 ) /*0x797a31*/
      {
        g_WOL_ChannelList = 0; /*0x797a37*/
        CloseDialog(v14, 0); /*0x797a3d*/
      }
      Current = Dialog::GetCurrent(); /*0x797a42*/
      DlgItem = GetDlgItem(Current, 1344); /*0x797a4d*/
      if ( DlgItem ) /*0x797a55*/
      {
LABEL_43:
        SetFocus(DlgItem); /*0x797b5c*/
        return 0; /*0x797b6a*/
      }
      return 0; /*0x797a55*/
    }
LABEL_12:
    ResetEvent(*(&Handles + v6)); /*0x797924*/
    switch ( v6 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v7 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797956*/
        if ( v7 ) /*0x79795d*/
        {
          g_WOL_ChannelList = 0; /*0x797963*/
          CloseDialog(v7, 0); /*0x797969*/
        }
        v8 = Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v8, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v10 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v10, 0, (int)GameLoop::Thunk, 0); /*0x7979b6*/
        v11 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7979c0*/
        if ( v11 ) /*0x7979c7*/
        {
          g_WOL_ChannelList = 0; /*0x7979cd*/
          CloseDialog(v11, 0); /*0x7979d3*/
        }
        v12 = Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v12, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v6 != 11 ); /*0x797949*/
  v16 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)MEMORY[0xAC1170] + 44))( /*0x797a83*/
          MEMORY[0xAC1170],
          MEMORY[0xB73B34],
          dword_B76B0C,
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v16 ) /*0x797a94*/
  {
    v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797a9b*/
    if ( v17 ) /*0x797aa2*/
    {
      g_WOL_ChannelList = 0; /*0x797aa8*/
      CloseDialog(v17, 0); /*0x797aae*/
    }
    v18 = Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v18, 1344); /*0x797abe*/
    if ( DlgItem ) /*0x797ac6*/
      goto LABEL_43; /*0x797ac6*/
  }
  else
  {
    while ( 1 ) /*0x797ae7*/
    {
      for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x797aef*/
            i == 258;
            i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u) )
      {
        Game::ProcessIdle(); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v22 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v22, 0, (int)GameLoop::Thunk, 0); /*0x797b8b*/
        v23 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b95*/
        if ( v23 ) /*0x797b9c*/
        {
          g_WOL_ChannelList = 0; /*0x797ba2*/
          CloseDialog(v23, 0); /*0x797ba8*/
        }
        v24 = Dialog::GetCurrent(); /*0x797bad*/
        v25 = GetDlgItem(v24, 1344); /*0x797bb8*/
        if ( v25 ) /*0x797bc0*/
          SetFocus(v25); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v26 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797bd6*/
        if ( v26 ) /*0x797bdd*/
        {
          g_WOL_ChannelList = 0; /*0x797be3*/
          CloseDialog(v26, 0); /*0x797be9*/
        }
        v27 = Dialog::GetCurrent(); /*0x797bee*/
        v28 = GetDlgItem(v27, 1344); /*0x797bf9*/
        if ( v28 ) /*0x797c01*/
          SetFocus(v28); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v20 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x797b2f*/
    if ( v20 ) /*0x797b36*/
    {
      g_WOL_ChannelList = 0; /*0x797b3c*/
      CloseDialog(v20, 0); /*0x797b42*/
    }
    v21 = Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v21, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}


// ==== 0x00797C20  ObjectClass::InitVersionStringsWOL  this=ObjectClass  sig=csp ====
char WOL_InitVersionStrings()
{
  char result; // al
  const char **v1; // esi
  int v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  char **v12; // ecx
  int v13; // esi
  char **v14; // ecx
  int v15; // esi
  char **v16; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (byte_B76954 & 1) == 0 ) /*0x797c38*/
    {
      byte_B76954 |= 1u; /*0x797c3d*/
      v1 = &dword_B76914; /*0x797c42*/
      v2 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(v1++); /*0x797c4e*/
        --v2; /*0x797c56*/
      }
      while ( v2 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((void **)&dword_B76914, a01W024V01); /*0x797c71*/
    String::Assign_Bool((void **)&dword_B76918, a01W026V01); /*0x797c80*/
    String::Assign_Bool((void **)&dword_B7691C, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((void **)&dword_B76920, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((void **)&dword_B76924, a01W020V01); /*0x797cad*/
    String::Assign_Bool((void **)&dword_B76928, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((void **)&dword_B7692C, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((void **)&dword_B76930, a00W024V00); /*0x797cda*/
    String::Assign_Bool((void **)&dword_B76934, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((void **)&dword_B76938, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((void **)&dword_B7693C, a00W018V00); /*0x797d07*/
    String::Assign_Bool((void **)&dword_B76940, a00W020V00); /*0x797d16*/
    String::Assign_Bool((void **)&dword_B76944, a01W032V01); /*0x797d25*/
    String::Assign_Bool((void **)&dword_B76948, a01W030V01); /*0x797d34*/
    String::Assign_Bool((void **)&dword_B7694C, a00W031V00); /*0x797d43*/
    String::Assign_Bool((void **)&dword_B76950, a00W029V00); /*0x797d52*/
    for ( i = 0; i < dword_B73BD8; ++i ) /*0x797d60*/
      Object::DtorWithDelete((void **)dword_B73BE0 + i, 0); /*0x797d6b*/
    v4 = 0; /*0x797d7f*/
    for ( dword_B73BD8 = 0; v4 < dword_B736F8; ++v4 ) /*0x797d89*/
      Object::DtorWithDelete((void **)dword_B73700 + v4, 0); /*0x797d95*/
    v5 = 0; /*0x797da9*/
    for ( dword_B736F8 = 0; v5 < dword_B76B00; ++v5 ) /*0x797db3*/
      Object::DtorWithDelete((void **)dword_B76B08 + v5, 0); /*0x797dbf*/
    v6 = 0; /*0x797dd3*/
    for ( dword_B76B00 = 0; v6 < dword_B76510; ++v6 ) /*0x797ddd*/
      Object::DtorWithDelete((void **)dword_B76518 + v6, 0); /*0x797de8*/
    v7 = 0; /*0x797dfc*/
    for ( dword_B76510 = 0; v7 < MEMORY[0xB73AE8]; ++v7 ) /*0x797e06*/
      Object::DtorWithDelete((void **)MEMORY[0xB73AF0] + v7, 0); /*0x797e12*/
    v8 = 0; /*0x797e26*/
    for ( MEMORY[0xB73AE8] = 0; v8 < dword_B77820; ++v8 ) /*0x797e30*/
      Object::DtorWithDelete((void **)dword_B77828 + v8, 0); /*0x797e3c*/
    v9 = 0; /*0x797e50*/
    for ( dword_B77820 = 0; v9 < dword_B73708; ++v9 ) /*0x797e5a*/
      Object::DtorWithDelete((void **)dword_B73710 + v9, 0); /*0x797e65*/
    v10 = 0; /*0x797e79*/
    for ( dword_B73708 = 0; v10 < dword_B76188; ++v10 ) /*0x797e83*/
      Object::DtorWithDelete((void **)dword_B76190 + v10, 0); /*0x797e8f*/
    dword_B76188 = 0; /*0x797ea9*/
    StringVector::Insert(&dword_B73BD8, &dword_B76914, 0); /*0x797eaf*/
    StringVector::Insert(&dword_B73BD8, &dword_B76918, 0); /*0x797ebf*/
    StringVector::Insert(&dword_B73BD8, &dword_B7691C, 0); /*0x797ecf*/
    StringVector::Insert(&dword_B76B00, &dword_B76920, 0); /*0x797edf*/
    StringVector::Insert(&dword_B76B00, &dword_B76924, 0); /*0x797eef*/
    StringVector::Insert(&dword_B76B00, &dword_B76928, 0); /*0x797eff*/
    StringVector::Insert(&dword_B736F8, &dword_B7692C, 0); /*0x797f0f*/
    StringVector::Insert(&dword_B736F8, &dword_B76930, 0); /*0x797f1f*/
    StringVector::Insert(&dword_B736F8, &dword_B76934, 0); /*0x797f2f*/
    StringVector::Insert(&dword_B76510, &dword_B76938, 0); /*0x797f3f*/
    StringVector::Insert(&dword_B76510, &dword_B7693C, 0); /*0x797f4f*/
    StringVector::Insert(&dword_B76510, &dword_B76940, 0); /*0x797f5f*/
    StringVector::Insert(&MEMORY[0xB73AE8], &dword_B76944, 0); /*0x797f6f*/
    v11 = 0; /*0x797f79*/
    if ( dword_B73708 < 0 ) /*0x797f7d*/
      v11 = dword_B73708; /*0x797f7f*/
    if ( v11 >= dword_B7370C ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797f8e*/
    if ( dword_B73708 >= dword_B7370C ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&dword_B73708); /*0x797fa7*/
    if ( v11 < dword_B73708 ) /*0x797fb3*/
      memcpy((char *)dword_B73710 + 4 * v11 + 4, (char *)dword_B73710 + 4 * v11, 4 * (dword_B73708 + 0x3FFFFFFF * v11)); /*0x797fd0*/
    v12 = (char **)((char *)dword_B73710 + 4 * v11); /*0x797fde*/
    if ( v12 ) /*0x797fe3*/
      String::AssignFromPtr(v12, &dword_B76948); /*0x797fea*/
    v13 = 0; /*0x797ffb*/
    ++dword_B73708; /*0x797fff*/
    if ( dword_B77820 < 0 ) /*0x798005*/
      v13 = dword_B77820; /*0x798007*/
    if ( v13 >= dword_B77824 ) /*0x79800f*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x798016*/
    if ( dword_B77820 >= dword_B77824 ) /*0x798028*/
      DynamicVector::EnsureCapacity(&dword_B77820); /*0x79802f*/
    if ( v13 < dword_B77820 ) /*0x79803b*/
      memcpy((char *)dword_B77828 + 4 * v13 + 4, (char *)dword_B77828 + 4 * v13, 4 * (dword_B77820 + 0x3FFFFFFF * v13)); /*0x798058*/
    v14 = (char **)((char *)dword_B77828 + 4 * v13); /*0x798066*/
    if ( v14 ) /*0x79806b*/
      String::AssignFromPtr(v14, &dword_B7694C); /*0x798072*/
    v15 = 0; /*0x798083*/
    ++dword_B77820; /*0x798087*/
    if ( dword_B76188 < 0 ) /*0x79808d*/
      v15 = dword_B76188; /*0x79808f*/
    if ( v15 >= dword_B7618C ) /*0x798097*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x79809e*/
    if ( dword_B76188 >= dword_B7618C ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&dword_B76188); /*0x7980b7*/
    if ( v15 < dword_B76188 ) /*0x7980c3*/
      memcpy((char *)dword_B76190 + 4 * v15 + 4, (char *)dword_B76190 + 4 * v15, 4 * (dword_B76188 + 0x3FFFFFFF * v15)); /*0x7980e0*/
    v16 = (char **)((char *)dword_B76190 + 4 * v15); /*0x7980ee*/
    if ( v16 ) /*0x7980f4*/
      String::AssignFromPtr(v16, &dword_B76950); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    return ++dword_B76188; /*0x79810c*/
  }
  return result; /*0x798112*/
}


// ==== 0x00798120  sub_798120  this=-  sig=ida-proto ====
void __cdecl sub_798120()
{
  void **v0; // esi
  int v1; // edi

  v0 = (void **)&byte_B76954; /*0x798122*/
  v1 = 16; /*0x798127*/
  do /*0x798137*/
  {
    DeleteAndZero(--v0); /*0x798131*/
    --v1; /*0x798136*/
  }
  while ( v1 ); /*0x798137*/
}


// ==== 0x007982A0  Network_Delete  this=-  sig=csp ====
void __stdcall Network_Delete(int a1, int a2, SessionClass *aP2)
{
  int v3; // edi
  SessionClass *v4; // esi

  v3 = a1; /*0x7982a6*/
  if ( a1 > 0 ) /*0x7982ac*/
  {
    v4 = aP2; /*0x7982af*/
    do /*0x7982bc*/
    {
      DeleteAndZero((int)v4); /*0x7982b3*/
      v4 = (SessionClass *)((char *)v4 + 4); /*0x7982b8*/
      --v3; /*0x7982bb*/
    }
    while ( v3 ); /*0x7982bc*/
  }
  __3_YAXPAX_Z(aP2); /*0x7982c0*/
}


// ==== 0x007982D0  sub_7982D0  this=-  sig=ida-proto ====
DWORD __fastcall sub_7982D0(int a1, DWORD a2)
{
  int v3; // edi
  CreateGameDialogControl *v4; // ecx
  DWORD v5; // esi

  v3 = 1000 * a1; /*0x7982ef*/
  v5 = WaitForMultipleObjects(a2, (const HANDLE *)&Handles, 0, 0x64u); /*0x7982f4*/
  if ( v5 == 258 ) /*0x7982fc*/
  {
    while ( 1 ) /*0x7982fe*/
    {
      v3 -= 100; /*0x7982fe*/
      if ( v3 <= 0 ) /*0x798303*/
        return 18; /*0x798338*/
      Game::ProcessIdle(v4); /*0x798305*/
      v5 = WaitForMultipleObjects(a2, (const HANDLE *)&Handles, 0, 0x64u); /*0x798316*/
      if ( v5 != 258 ) /*0x79831e*/
        goto LABEL_4; /*0x79831e*/
    }
  }
  else
  {
LABEL_4:
    ResetEvent(*(&Handles + v5)); /*0x798320*/
    return v5; /*0x79832e*/
  }
}


// ==== 0x00798340  GameOptionsScreenWOL_Helper  this=-  sig=ida-proto ====
BOOL sub_798340()
{
  HANDLE *v0; // esi
  BOOL result; // eax

  v0 = &Handles; /*0x798348*/
  do /*0x79835b*/
    result = ResetEvent(*v0++); /*0x798350*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79835b*/
  return result; /*0x79835d*/
}


// ==== 0x00798360  sub_798360  this=-  sig=ida-proto ====
char sub_798360()
{
  LSTATUS v0; // eax
  LSTATUS v1; // esi
  HKEY phkResult; // [esp+0h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+4h] [ebp-208h] BYREF
  DWORD Type; // [esp+8h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+Ch] [ebp-200h] BYREF

  v0 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult); /*0x79837c*/
  if ( !v0 ) /*0x798384*/
  {
    cbData = 512; /*0x7983a2*/
    v1 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7983b0*/
    LOBYTE(v0) = RegCloseKey(phkResult); /*0x7983b7*/
    if ( !v1 ) /*0x7983c0*/
      LOBYTE(v0) = OpenURLWOL((const char *)Data, 0); /*0x7983c8*/
  }
  return v0; /*0x7983cd*/
}


// ==== 0x007983E0  Setup2DlgProcMultiplayer  this=-  sig=csp ====
int __stdcall Multiplayer_Setup2_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-20Ch] BYREF
  DWORD cbData; // [esp+14h] [ebp-208h] BYREF
  DWORD Type; // [esp+18h] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+1Ch] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x798409*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x798412*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798425*/
  if ( !result ) /*0x79842c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79843e*/
    if ( a2 > 0x2B ) /*0x798440*/
    {
      if ( a2 == 273 ) /*0x7984ac*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798723*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798833*/
          {
            case 0x6E2u: /*0x798833*/
              MEMORY[0xA8B244] = 5; /*0x798887*/
              MEMORY[0xA8B248] = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              MEMORY[0xA8B244] = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              MEMORY[0xA8B244] = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              MEMORY[0xA8B244] = 4; /*0x79880a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x79881c*/
              return 0; /*0x79882b*/
            case 0x55Fu: /*0x798729*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x7987a4*/
              {
                cbData = 512; /*0x7987cd*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x7987db*/
                RegCloseKey(phkResult); /*0x7987e2*/
                if ( !v32 ) /*0x7987ea*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x7987f6*/
                  return 0; /*0x798807*/
                }
              }
              break;
            case 0x686u: /*0x798729*/
              MEMORY[0xA8B244] = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              MEMORY[0xA8B244] = 1; /*0x798746*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798758*/
              return 0; /*0x798767*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x7984b8*/
      {
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7984d8*/
        v7 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836070], 0); /*0x7984da*/
        if ( DlgItem && v7 ) /*0x7984e5*/
          CacheDialogInvalidate(DlgItem, v7); /*0x7984eb*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798504*/
        v9 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83609C], 0); /*0x798506*/
        if ( v8 && v9 ) /*0x798511*/
          CacheDialogInvalidate(v8, v9); /*0x798517*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798530*/
        v11 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835D14], 0); /*0x798532*/
        if ( v10 && v11 ) /*0x79853d*/
          CacheDialogInvalidate(v10, v11); /*0x798543*/
        v12 = GetDlgItem(hWnd, 1866); /*0x79855c*/
        v13 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DDC], 0); /*0x79855e*/
        if ( v12 && v13 ) /*0x798569*/
          CacheDialogInvalidate(v12, v13); /*0x79856f*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798588*/
        v15 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8360A8], 0); /*0x79858a*/
        if ( v14 && v15 ) /*0x798595*/
          CacheDialogInvalidate(v14, v15); /*0x79859b*/
        v16 = GetDlgItem(hWnd, 1884); /*0x7985b4*/
        v17 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835CA8], 0); /*0x7985b6*/
        if ( v16 && v17 ) /*0x7985c1*/
          CacheDialogInvalidate(v16, v17); /*0x7985c7*/
        v18 = GetDlgItem(hWnd, 1885); /*0x7985e0*/
        v19 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C9C], 0); /*0x7985e2*/
        if ( v18 && v19 ) /*0x7985ed*/
          CacheDialogInvalidate(v18, v19); /*0x7985f3*/
        v20 = GetDlgItem(hWnd, 1886); /*0x79860c*/
        v21 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C90], 0); /*0x79860e*/
        if ( v20 && v21 ) /*0x798619*/
          CacheDialogInvalidate(v20, v21); /*0x79861f*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798638*/
        v23 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FBC], 0); /*0x79863a*/
        if ( v22 && v23 ) /*0x798645*/
          CacheDialogInvalidate(v22, v23); /*0x79864b*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798664*/
        v25 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798666*/
        if ( v24 && v25 ) /*0x798671*/
          CacheDialogInvalidate(v24, v25); /*0x798677*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798690*/
        v27 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798692*/
        if ( v26 && v27 ) /*0x79869d*/
          CacheDialogInvalidate(v26, v27); /*0x7986a3*/
        v28 = GetDlgItem(hWnd, 1953); /*0x7986bc*/
        v29 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FD4], 0); /*0x7986be*/
        if ( v28 && v29 ) /*0x7986c9*/
          CacheDialogInvalidate(v28, v29); /*0x7986cf*/
        v30 = GetDlgItem(hWnd, 1954); /*0x7986e8*/
        v31 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FE4], 0); /*0x7986ea*/
        if ( v30 ) /*0x7986f1*/
        {
          if ( v31 ) /*0x7986f9*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798703*/
            return 0; /*0x798714*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798442*/
      {
        case 0x2Bu: /*0x798442*/
          Dialog::Resize((char *)a4); /*0x79848f*/
          return 1; /*0x7984a3*/
        case 0xFu: /*0x798442*/
          Dialog::DrawBackground(hWnd); /*0x798466*/
          Dialog::StopBink(hWnd); /*0x79846d*/
          ValidateRect(hWnd, 0); /*0x798475*/
          return 1; /*0x79848a*/
        case 0x14u: /*0x798442*/
          return 1; /*0x798461*/
      }
    }
    return 0; /*0x7988a6*/
  }
  return result; /*0x798452*/
}


// ==== 0x007988C0  GameModeDlgProcMultiplayer  this=-  sig=csp ====
int __stdcall Multiplayer_GameMode_DlgProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND DlgItem; // ebx
  HWND v7; // eax
  HWND v8; // ebx
  HWND v9; // eax
  HWND v10; // ebx
  HWND v11; // eax
  HWND v12; // ebx
  HWND v13; // eax
  HWND v14; // ebx
  HWND v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  HWND v18; // ebx
  HWND v19; // eax
  HWND v20; // ebx
  HWND v21; // eax
  HWND v22; // ebx
  HWND v23; // eax
  HWND v24; // ebx
  HWND v25; // eax
  HWND v26; // ebx
  HWND v27; // eax
  HWND v28; // ebx
  HWND v29; // eax
  HWND v30; // esi
  HWND v31; // eax
  LSTATUS v32; // esi
  HKEY phkResult; // [esp+10h] [ebp-210h] BYREF
  DWORD Type; // [esp+14h] [ebp-20Ch] BYREF
  int v35; // [esp+18h] [ebp-208h]
  DWORD cbData; // [esp+1Ch] [ebp-204h] BYREF
  BYTE Data[512]; // [esp+20h] [ebp-200h] BYREF

  if ( a2 == 272 && a4 ) /*0x7988e9*/
    SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x7988f2*/
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x798905*/
  if ( !result ) /*0x79890c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79891e*/
    if ( a2 > 0x2B ) /*0x798920*/
    {
      if ( a2 == 273 ) /*0x79898c*/
      {
        if ( (unsigned __int16)a3 > 0x6E1u ) /*0x798c45*/
        {
          switch ( (unsigned __int16)a3 ) /*0x798d55*/
          {
            case 0x6E2u: /*0x798d55*/
              MEMORY[0xA8B244] = 5; /*0x798dab*/
              MEMORY[0xA8B248] = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              MEMORY[0xA8B244] = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              MEMORY[0xA8B244] = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              MEMORY[0xA8B244] = 4; /*0x798d2c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1761); /*0x798d3e*/
              return 0; /*0x798d4d*/
            case 0x55Fu: /*0x798c4b*/
              if ( !RegOpenKeyExA(HKEY_LOCAL_MACHINE, MEMORY[0x849690], 0, 0x20019u, &phkResult) ) /*0x798cc6*/
              {
                cbData = 512; /*0x798cef*/
                v32 = RegQueryValueExA(phkResult, g_INI_Key_Community, 0, &Type, Data, &cbData); /*0x798cfd*/
                RegCloseKey(phkResult); /*0x798d04*/
                if ( !v32 ) /*0x798d0c*/
                {
                  OpenURLWOL((const char *)Data, 0); /*0x798d18*/
                  return 0; /*0x798d29*/
                }
              }
              break;
            case 0x686u: /*0x798c4b*/
              MEMORY[0xA8B244] = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              MEMORY[0xA8B244] = 1; /*0x798c68*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&g_WebBrowser) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&g_WebBrowser); /*0x7989b5*/
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&g_WebBrowser, (wchar_t **)1); /*0x7989ca*/
          Type = (DWORD)&vt_rc_ptr_PlayerProfile; /*0x7989d3*/
          ComPtr::Release(&Type); /*0x7989db*/
        }
        DlgItem = GetDlgItem(hWnd, 1862); /*0x7989fa*/
        v7 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836070], 0); /*0x7989fc*/
        if ( DlgItem && v7 ) /*0x798a07*/
          CacheDialogInvalidate(DlgItem, v7); /*0x798a0d*/
        v8 = GetDlgItem(hWnd, 1864); /*0x798a26*/
        v9 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83609C], 0); /*0x798a28*/
        if ( v8 && v9 ) /*0x798a33*/
          CacheDialogInvalidate(v8, v9); /*0x798a39*/
        v10 = GetDlgItem(hWnd, 1865); /*0x798a52*/
        v11 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835D14], 0); /*0x798a54*/
        if ( v10 && v11 ) /*0x798a5f*/
          CacheDialogInvalidate(v10, v11); /*0x798a65*/
        v12 = GetDlgItem(hWnd, 1866); /*0x798a7e*/
        v13 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x831DDC], 0); /*0x798a80*/
        if ( v12 && v13 ) /*0x798a8b*/
          CacheDialogInvalidate(v12, v13); /*0x798a91*/
        v14 = GetDlgItem(hWnd, 1874); /*0x798aaa*/
        v15 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x8360A8], 0); /*0x798aac*/
        if ( v14 && v15 ) /*0x798ab7*/
          CacheDialogInvalidate(v14, v15); /*0x798abd*/
        v16 = GetDlgItem(hWnd, 1884); /*0x798ad6*/
        v17 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835CA8], 0); /*0x798ad8*/
        if ( v16 && v17 ) /*0x798ae3*/
          CacheDialogInvalidate(v16, v17); /*0x798ae9*/
        v18 = GetDlgItem(hWnd, 1885); /*0x798b02*/
        v19 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C9C], 0); /*0x798b04*/
        if ( v18 && v19 ) /*0x798b0f*/
          CacheDialogInvalidate(v18, v19); /*0x798b15*/
        v20 = GetDlgItem(hWnd, 1886); /*0x798b2e*/
        v21 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835C90], 0); /*0x798b30*/
        if ( v20 && v21 ) /*0x798b3b*/
          CacheDialogInvalidate(v20, v21); /*0x798b41*/
        v22 = GetDlgItem(hWnd, 1950); /*0x798b5a*/
        v23 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FBC], 0); /*0x798b5c*/
        if ( v22 && v23 ) /*0x798b67*/
          CacheDialogInvalidate(v22, v23); /*0x798b6d*/
        v24 = GetDlgItem(hWnd, 1951); /*0x798b86*/
        v25 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798b88*/
        if ( v24 && v25 ) /*0x798b93*/
          CacheDialogInvalidate(v24, v25); /*0x798b99*/
        v26 = GetDlgItem(hWnd, 1952); /*0x798bb2*/
        v27 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FC8], 0); /*0x798bb4*/
        if ( v26 && v27 ) /*0x798bbf*/
          CacheDialogInvalidate(v26, v27); /*0x798bc5*/
        v28 = GetDlgItem(hWnd, 1953); /*0x798bde*/
        v29 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FD4], 0); /*0x798be0*/
        if ( v28 && v29 ) /*0x798beb*/
          CacheDialogInvalidate(v28, v29); /*0x798bf1*/
        v30 = GetDlgItem(hWnd, 1954); /*0x798c0a*/
        v31 = (HWND)HashTable::Find(MEMORY[0xAC4848], MEMORY[0x835FE4], 0); /*0x798c0c*/
        if ( v30 ) /*0x798c13*/
        {
          if ( v31 ) /*0x798c1b*/
          {
            CacheDialogInvalidate(v30, v31); /*0x798c25*/
            return 0; /*0x798c36*/
          }
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x798922*/
      {
        case 0x2Bu: /*0x798922*/
          Dialog::Resize((char *)a4); /*0x79896f*/
          return 1; /*0x798983*/
        case 0xFu: /*0x798922*/
          Dialog::DrawBackground(hWnd); /*0x798946*/
          Dialog::StopBink(hWnd); /*0x79894d*/
          ValidateRect(hWnd, 0); /*0x798955*/
          return 1; /*0x79896a*/
        case 0x14u: /*0x798922*/
          return 1; /*0x798941*/
      }
    }
    return 0; /*0x798dca*/
  }
  return result; /*0x798932*/
}


// ==== 0x00798DE0  ObjectClass::RunWOLMainLoop_Read  this=ObjectClass  sig=csp ====
BOOL __usercall sub_798DE0@<eax>(int a1@<ebx>, int a2@<ebp>)
{
  int v2; // esi
  char *v3; // eax
  int v4; // esi
  char *v5; // eax
  BOOL v6; // esi
  int v8; // [esp+1Ch] [ebp-38h]
  int v9; // [esp+28h] [ebp-2Ch]
  int v10; // [esp+34h] [ebp-20h] BYREF
  char v11; // [esp+38h] [ebp-1Ch]
  _DWORD v12[3]; // [esp+3Ch] [ebp-18h] BYREF
  _DWORD v13[3]; // [esp+48h] [ebp-Ch] BYREF

  v10 = 0; /*0x798de9*/
  v11 = 0; /*0x798df1*/
  ReadRegistryOptionsWOL(&v10); /*0x798df6*/
  Screen::Capture(1, 0, a1, a2); /*0x798dff*/
  if ( MEMORY[0xAC1170] && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x798e27*/
  {
    v2 = *(_DWORD *)MEMORY[0xAC1170]; /*0x798e3f*/
    v8 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v3 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v2 + 20))( /*0x798e67*/
      MEMORY[0xAC1170],
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v3,
      v8,
      -1,
      0,
      0);
    v4 = *(_DWORD *)MEMORY[0xAC1170]; /*0x798e7c*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x798e84*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v4 + 56))( /*0x798e9c*/
      MEMORY[0xAC1170],
      g_WOL_ConnectFlag,
      g_WOL_GameConfig,
      v5,
      v9);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( Flag::IsNot2(&v10) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor(v12); /*0x798eb5*/
    v12[0] = &off_7F7624; /*0x798ece*/
    RunDialog(0x10Eu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer, (LPARAM)v12); /*0x798ed2*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798ed7*/
    v6 = MEMORY[0xA8B244] != 0; /*0x798eed*/
    v12[0] = &off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable(v12); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor(v13); /*0x798f04*/
    v13[0] = &off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(); /*0x798f26*/
    v6 = MEMORY[0xA8B244] != 0; /*0x798f3b*/
    v13[0] = &off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(v13); /*0x798f41*/
  }
  return v6; /*0x798efa*/
}


// ==== 0x00798F50  ObjectClass::MainLobbyDlgProcWOL_Read  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MainLobbyDlgProcWOL_Read(HWND hWnd)
{
  _DWORD *PlayerProfile; // eax
  int i; // ebx
  LRESULT v4; // eax
  WPARAM v5; // esi
  wchar_t *v7; // [esp-4h] [ebp-30h]
  void *v8[2]; // [esp+10h] [ebp-1Ch] BYREF
  int v9; // [esp+18h] [ebp-14h] BYREF
  void **v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch]
  int v12; // [esp+24h] [ebp-8h] BYREF
  char v13; // [esp+28h] [ebp-4h]

  ListBox::Clear(hWnd); /*0x798f59*/
  v9 = 0; /*0x798f69*/
  (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)MEMORY[0xAC116C] + 208))(MEMORY[0xAC116C], &v9); /*0x798f71*/
  v12 = 0; /*0x798f7b*/
  v13 = 0; /*0x798f7f*/
  ReadRegistryOptionsWOL(&v12); /*0x798f84*/
  ComPtr::Constructor(&v10); /*0x798f8d*/
  v10 = &vt_rc_ptr_PlayerProfile; /*0x798f9b*/
  if ( Flag::IsNot2(&v12) ) /*0x798f9f*/
  {
    PlayerProfile = LoadPlayerProfile(v8, (const char **)&g_WebBrowser); /*0x798fb1*/
    ComPtr::Set(&v10, PlayerProfile[1]); /*0x798fbe*/
    v8[0] = &vt_rc_ptr_PlayerProfile; /*0x798fc7*/
    ComPtr::Release(v8); /*0x798fcb*/
  }
  else
  {
    ComPtr::Set(&v10, dword_B75E4C); /*0x798fdd*/
  }
  if ( v9 > 0 ) /*0x798fe8*/
  {
    for ( i = v9 - 1; i >= 0; --i ) /*0x798fed*/
    {
      FormatLocaleStringWOL((wchar_t **)v8, i); /*0x798ffb*/
      v7 = WideString::GetOrEmpty((wchar_t **)v8); /*0x79900e*/
      if ( i >= 2 ) /*0x799007*/
        v4 = SendMessageA(hWnd, 0x4C2u, 0, (LPARAM)v7); /*0x799026*/
      else
        v4 = SendMessageA(hWnd, 0x4C1u, 0, (LPARAM)v7); /*0x799016*/
      v5 = v4; /*0x799028*/
      SendMessageA(hWnd, 0x151u, v4, i); /*0x799032*/
      if ( v11 && i == *(_DWORD *)(v11 + 16) ) /*0x79903f*/
        SendMessageA(hWnd, 0x14Eu, v5, 0); /*0x79904a*/
      DeleteAndZero::Alt(v8); /*0x799050*/
    }
  }
  v10 = &vt_rc_ptr_PlayerProfile; /*0x799061*/
  return ComPtr::Release(&v10); /*0x79906a*/
}


// ==== 0x00799080  MainLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall MainLobbyDlgProcWOL(HWND hWnd, LPARAM lParam, ObjectClass a3)
{
  unsigned int v3; // ebx
  char *v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v9; // ebx
  LRESULT v10; // eax
  LPARAM v11; // ebp
  bool v12; // al
  BOOL v13; // eax
  HWND v14; // eax
  BOOL v15; // eax
  HWND v16; // eax
  LRESULT v17; // esi
  LRESULT v18; // eax
  LRESULT v19; // esi
  LRESULT v20; // eax
  LRESULT v21; // esi
  LRESULT v22; // eax
  ObjectClass *v24; // eax
  bool bl62; // bl
  _BYTE *v25; // esi
  LRESULT v26; // eax
  HWND v27; // edi
  LRESULT v28; // ebx
  ObjectClass *v29; // eax
  ObjectClass *v30; // eax
  LRESULT v31; // eax
  HWND v32; // eax
  ObjectClass *v33; // esi
  unsigned int v34; // ebx
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  CampaignScore *v37; // eax
  CampaignScore *v38; // edi
  CampaignScore *v39; // eax
  LRESULT v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  LRESULT v43; // eax
  BOOL v44; // ebp
  HWND v45; // eax
  HWND v46; // eax
  HWND v47; // eax
  HWND v48; // eax
  WPARAM v49; // [esp-8h] [ebp-50h]
  BOOL v50; // [esp-4h] [ebp-4Ch]
  BOOL v51; // [esp-4h] [ebp-4Ch]
  char **v52; // [esp-4h] [ebp-4Ch]
  ObjectClass *v53; // [esp+10h] [ebp-38h] BYREF
  int v54; // [esp+14h] [ebp-34h] BYREF
  ObjectClass *v56; // [esp+18h] [ebp-30h] BYREF
  ObjectClass *v57; // [esp+1Ch] [ebp-2Ch] BYREF
  int var28; // [esp+20h] [ebp-28h] BYREF
  char *a1; // [esp+24h] [ebp-24h] BYREF
  int v59; // [esp+28h] [ebp-20h] BYREF
  int v60; // [esp+2Ch] [ebp-1Ch] BYREF
  int v61; // [esp+30h] [ebp-18h] BYREF
  int v62; // [esp+34h] [ebp-14h] BYREF
  rc_ptr_base v63; // [esp+38h] [ebp-10h] BYREF
  int v64; // [esp+3Ch] [ebp-Ch]
  rc_ptr_base v65; // [esp+40h] [ebp-8h] BYREF
  int v66; // [esp+44h] [ebp-4h]

  v3 = lParam;
  v4 = *(char **)&a3.__pad_0[4];
  v5 = hWnd;
  if ( lParam == 272 && *(_DWORD *)&a3.__pad_0[4] )
    SetWindowLongA(hWnd, 8, *(_DWORD *)(*(_DWORD *)&a3.__pad_0[4] + 4));
  v6 = *(_DWORD *)a3.__pad_0;
  result = BaseDialogProc((SkirmishDialog *)v5, v3, *(int *)a3.__pad_0, (unsigned int)v4);
  if ( !result )
  {
    WindowLongA = GetWindowLongA(v5, 8);
    if ( v3 > 0x111 )
    {
      v34 = v3 - 1175;
      if ( v34 )
      {
        if ( v34 == 86 )
        {
          ShowWindow(v5, 0);
          Dialog::InitWindow((SkirmishDialog *)v5, 1);
          return 0;
        }
      }
      else
      {
        DlgItem = GetDlgItem(v5, 1576);
        ListBox::Clear(DlgItem);
        SendMessageA(DlgItem, 0x141u, 9u, 0);
        StringCSF = GetStringCSF(aGuiDefault, 0, (CampaignScore *)g_Str_File_wonline_cpp, 25247);
        WideString::Assign((wchar_t **)&v56, (CampaignScore *)StringCSF);
        v37 = WideString::GetOrEmpty_Alt((wchar_t **)&v56);
        v38 = (CampaignScore *)SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v37);
        SendMessageA(DlgItem, 0x151u, (WPARAM)v38, -1);
        SendMessageA(DlgItem, 0x14Eu, (WPARAM)v38, 0);
        for ( lParam = 1; lParam <= 32; ++lParam )
        {
          hWnd = 0;
          v63.vfptr = 0;
          if ( !(*(int (__stdcall **)(_DWORD, LPARAM, HWND *, rc_ptr_base *))((*(&g_MatrixTransformState + 2263))->X
                                                                            + 144))(
                  *(&g_MatrixTransformState + 2263),
                  lParam,
                  &hWnd,
                  &v63)
            && hWnd
            && strlen((const char *)hWnd) )
          {
            String::Assign(&a1, (const char *)hWnd);
            CharStringToWide((ObjectClass *)&a3.__pad_0[4], (const char **)&a1);
            DeleteAndZero((int)&a1);
            v39 = WideString::GetOrEmpty_Alt((wchar_t **)&a3.__pad_0[4]);
            v40 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v39);
            SendMessageA(DlgItem, 0x151u, v40, lParam);
            DeleteAndZero::Alt((void **)&a3.__pad_0[4]);
          }
        }
        v41 = GetDlgItem(v5, 1578);
        MainLobbyDlgProcWOL_Read(v41);
        FillComboBoxRandomOnly(v5, 1697);
        InitGameDropdownColors();
        FillComboBoxFactions(v5, 1698);
        v42 = GetDlgItem(v5, 1577);
        PopulateWOLUserList(v42, 1);
        LoadPlayerProfile(&v65, (const char **)&g_WebBrowser);
        if ( v66 )
          FillPersonaInfoWOL(v66, v5, &g_WebBrowser, (wchar_t **)1);
        lParam = -1;
        v43 = SendMessageA(DlgItem, 0x147u, 0, 0);
        if ( v43 != -1 )
          lParam = SendMessageA(DlgItem, 0x150u, v43, 0);
        v44 = lParam != -1;
        v45 = GetDlgItem(v5, 1771);
        EnableWindow(v45, v44);
        v46 = GetDlgItem(v5, 1671);
        EnableWindow(v46, v44);
        v47 = GetDlgItem(v5, 1791);
        EnableWindow(v47, v44);
        ReadAutoLoginWOL((char **)&v57);
        v49 = String::Compare((const char **)&v57, (const char **)&g_WebBrowser);
        v48 = GetDlgItem(v5, 1791);
        SendMessageA(v48, 0xF1u, v49, 0);
        DeleteAndZero((int)&v57);
        v65.vfptr = &vt_rc_ptr_PlayerProfile;
        ComPtr::Release(&v65);
        DeleteAndZero::Alt((void **)&v56);
      }
      return 0;
    }
    if ( v3 != 273 )
    {
      switch ( v3 )
      {
        case 0xFu:
          Dialog::DrawBackground(v5);
          Dialog::StopBink(v5);
          ValidateRect(v5, 0);
          break;
        case 0x14u:
          break;
        case 0x2Bu:
          Dialog::Resize(v4);
          return 1;
        default:
          return 0;
      }
      return 1;
    }
    if ( (unsigned __int16)v6 > 0x6A2u )
    {
      switch ( (__int16)v6 )
      {
        case 1770:
          CreateAccountWOL(v5, 273, (int)v4);
          result = 0;
          break;
        case 1771:
          v27 = GetDlgItem(v5, 1576);
          v28 = SendMessageA(v27, 0x147u, 0, 0);
          if ( v28 != -1 )
          {
            unknown_libname_74(&a3.__pad_0[4]);
            MainLobbyDlgProcWOL_Assign(v27, v28, (void **)&a3.__pad_0[4]);
            ToWideStringCharAlt((char **)&hWnd, (const wchar_t **)&a3.__pad_0[4]);
            String::ToLower((const char **)&hWnd);
            ReadAutoLoginWOL((char **)&v57);
            v29 = (ObjectClass *)String::ToLowerCopy((const char **)&v57, (ObjectClass *)&v61);
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v29);
            DeleteAndZero((int)&v61);
            if ( (_BYTE)lParam )
            {
              String::Assign((char **)&v53, &stru_87C374.__pad_579C[33876]);
              ReadSettingsWOL((ObjectClass *)&v53);
              DeleteAndZero((int)&v53);
            }
            LoadConfigWOL((char **)&v56);
            v30 = (ObjectClass *)String::ToLowerCopy((const char **)&v56, (ObjectClass *)&v62);
            LOBYTE(lParam) = String::Compare((const char **)&hWnd, (const char **)v30);
            DeleteAndZero((int)&v62);
            if ( (_BYTE)lParam )
            {
              String::Assign((char **)&v54, &stru_87C374.__pad_579C[33876]);
              SavePersonaConfigWOL((ObjectClass *)&v54);
              DeleteAndZero((int)&v54);
            }
            v31 = SendMessageA(v27, 0x150u, v28, 0);
            if ( v31 != -1 )
            {
              (*(void (__stdcall **)(_DWORD, LRESULT, char *, char *, int))((*(&g_MatrixTransformState + 2263))->X + 148))(
                *(&g_MatrixTransformState + 2263),
                v31,
                &stru_87C374.__pad_579C[33876],
                &stru_87C374.__pad_579C[33876],
                1);
              SendMessageA(v27, 0x144u, v28, 0);
            }
            SendMessageA(v27, 0x14Eu, 0xFFFFFFFF, 0);
            DeleteAndZero((int)&v56);
            DeleteAndZero((int)&v57);
            DeleteAndZero((int)&hWnd);
            DeleteAndZero::Alt((void **)&a3.__pad_0[4]);
          }
          MainLobbyDlgProcWOL_Get(v5, 1);
          InvalidateRect(v27, 0, 0);
          v32 = GetDlgItem(v5, 1771);
          EnableWindow(v32, 0);
          SendMessageA(v27, 0x14Eu, 0, 0);
          LoadAccountInfoWOL(&v63);
          if ( v64 )
          {
            String::Assign((char **)&var28, &stru_87C374.__pad_579C[33876]);
            FillPersonaInfoWOL(v64, v5, (ObjectClass *)&var28, 0);
            DeleteAndZero((int)&var28);
            v33 = (ObjectClass *)GetDlgItem(v5, 1791);
            SendMessageA((HWND)v33, 0x49Du, 0, 1);
            EnableWindow((HWND)v33, 0);
            SendMessageA((HWND)v33, 0xF1u, 0, 0);
            SendMessageA((HWND)v33, 0x49Du, 0, 0);
            InvalidateRect((HWND)v33, 0, 0);
          }
          v63.vfptr = &vt_rc_ptr_PlayerProfile;
          ComPtr::Release(&v63);
          result = 0;
          break;
        case 1772:
          WebBrowser::ShowDialog(g_INI_Key_Manage);
          result = 0;
          break;
        case 1791:
          if ( SendMessageA((HWND)v4, 0xF0u, 0, 0) == 1 )
          {
            ReadSettingsWOL(&g_WebBrowser);
            result = 0;
          }
          else
          {
            ReadAutoLoginWOL((char **)&lParam);
            v52 = String::ToLowerCopy((const char **)&g_WebBrowser, (ObjectClass *)&v60);
            v24 = (ObjectClass *)String::ToLowerCopy((const char **)&lParam, (ObjectClass *)&v59);
            bl62 = String::Compare((const char **)v24, (const char **)v52);
            DeleteAndZero((int)&v59);
            DeleteAndZero((int)&v60);
            if ( bl62 )
            {
              String::Assign((char **)&a3, &stru_87C374.__pad_579C[33876]);
              ReadSettingsWOL(&a3);
              DeleteAndZero((int)&a3);
            }
            DeleteAndZero((int)&lParam);
            result = 0;
          }
          break;
        case 1907:
          LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
          v25 = (_BYTE *)v64;
          if ( v64 )
          {
            v26 = SendMessageA((HWND)v4, 0xF0u, 0, 0);
            MainLobbyDlgProcWOL_Helper(v25, v26 == 1);
            SaveProfileWOL(v64, &g_WebBrowser);
          }
          goto LABEL_67;
        case 1955:
          WebBrowser::ShowDialog(g_INI_Key_Ladder);
          result = 0;
          break;
        default:
          return 0;
      }
    }
    else
    {
      if ( (unsigned __int16)v6 != 1698 )
      {
        switch ( (__int16)v6 )
        {
          case 1576:
            if ( HIWORD(v6) != 1 )
              return 0;
            v9 = GetDlgItem(v5, 1791);
            SendMessageA(v9, 0x49Du, 0, 1);
            ShowWindow(v9, 0);
            v10 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            lParam = -1;
            if ( v10 != -1 )
              lParam = SendMessageA((HWND)v4, 0x150u, v10, 0);
            DeleteAndZero::Alt2((void **)&g_WebBrowser);
            v11 = lParam;
            if ( lParam != -1 )
            {
              lParam = 0;
              *(_DWORD *)&a3.__pad_0[4] = 0;
              if ( !(*(int (__stdcall **)(_DWORD, LPARAM, LPARAM *, char *))((*(&g_MatrixTransformState + 2263))->X + 144))(
                      *(&g_MatrixTransformState + 2263),
                      v11,
                      &lParam,
                      &a3.__pad_0[4]) )
                String::Assign_Alt((void **)&g_WebBrowser, (CCINIClass *)lParam);
            }
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            ReadAutoLoginWOL((char **)&hWnd);
            EnableWindow(v9, v11 != -1);
            v12 = String::Compare((const char **)&hWnd, (const char **)&g_WebBrowser);
            SendMessageA(v9, 0xF1u, v12, 0);
            SendMessageA(v9, 0x49Du, 0, 0);
            ShowWindow(v9, 5);
            InvalidateRect(v9, 0, 0);
            if ( v64 )
              FillPersonaInfoWOL(v64, v5, &g_WebBrowser, 0);
            v13 = v11 != -1 && String::Length((const char **)&g_WebBrowser);
            v50 = v13;
            v14 = GetDlgItem(v5, 1771);
            EnableWindow(v14, v50);
            v15 = v11 != -1 && String::Length((const char **)&g_WebBrowser);
            v51 = v15;
            v16 = GetDlgItem(v5, 1671);
            EnableWindow(v16, v51);
            DeleteAndZero((int)&hWnd);
            v63.vfptr = &vt_rc_ptr_PlayerProfile;
            ComPtr::Release(&v63);
            return 0;
          case 1577:
            if ( HIWORD(v6) != 1 )
              return 0;
            unknown_libname_73(&lParam);
            GetDialogText((HWND)v4, (void **)&lParam);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              WOLOption::SetValue(v64, (const char **)&lParam);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            v63.vfptr = &vt_rc_ptr_PlayerProfile;
            ComPtr::Release(&v63);
            DeleteAndZero((int)&lParam);
            return 0;
          case 1578:
            if ( HIWORD(v6) != 1 )
              return 0;
            v17 = 0;
            v18 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            if ( v18 != -1 )
              v17 = SendMessageA((HWND)v4, 0x150u, v18, 0);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              GadgetClass::TrackState(v64, v17, 3);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            goto LABEL_67;
          case 1670:
            *(_DWORD *)&HouseClass_Player.__pad_5568[8080] = 0;
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1670);
            return 0;
          case 1671:
            *(_DWORD *)&HouseClass_Player.__pad_5568[8080] = 5;
            *(_DWORD *)&HouseClass_Player.__pad_5568[8084] = 6;
            (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1671);
            return 0;
          case 1672:
            WebBrowser::ShowDialog(g_INI_Key_Battleclans);
            return 0;
          case 1697:
            if ( HIWORD(v6) != 1 )
              return 0;
            v19 = -2;
            v20 = SendMessageA((HWND)v4, 0x147u, 0, 0);
            if ( v20 != -1 )
              v19 = SendMessageA((HWND)v4, 0x150u, v20, 0);
            LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
            if ( v64 )
            {
              MainLobbyDlgProcWOL_Helper_77A780(v64, v19);
              SaveProfileWOL(v64, &g_WebBrowser);
            }
            goto LABEL_67;
          default:
            return 0;
        }
      }
      if ( HIWORD(v6) != 1 )
        return 0;
      v21 = -2;
      v22 = SendMessageA((HWND)v4, 0x147u, 0, 0);
      if ( v22 != -1 )
        v21 = SendMessageA((HWND)v4, 0x150u, v22, 0);
      LoadPlayerProfile(&v63, (const char **)&g_WebBrowser);
      if ( v64 )
      {
        MainLobbyDlgProcWOL_Helper_77A7A0(v64, v21);
        SaveProfileWOL(v64, &g_WebBrowser);
      }
LABEL_67:
      v63.vfptr = &vt_rc_ptr_PlayerProfile;
      ComPtr::Release(&v63);
      return 0;
    }
  }
  return result;
}


// ==== 0x00799CD0  RunWOLMainLoop_Helper  this=-  sig=ida-proto ====
__int64 sub_799CD0()
{
  memset(&g_WOL_ProcessIdle, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  g_WOL_AuthPool = 0; /*0x799cf4*/
  g_WOL_ChatState = 0; /*0x799cfa*/
  g_WOL_State = 0; /*0x799d00*/
  g_WOL_ChannelState = 0; /*0x799d06*/
  return 0; /*0x799d0c*/
}


// ==== 0x00799D10  Dialog::CloseAll  this=Dialog  sig=ida-proto ====
void *Dialog::CloseAll()
{
  void *result; // eax

  for ( result = (void *)Dialog::GetCurrent(); result; result = (void *)Dialog::GetCurrent() ) /*0x799d17*/
    CloseDialog(result, 0); /*0x799d1d*/
  return result; /*0x799d2b*/
}


// ==== 0x00799D30  ObjectClass::RunWOLMainLoop_Init  this=ObjectClass  sig=csp ====
int sub_799D30()
{
  int result; // eax
  wchar_t *StringCSF; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  char *v7; // eax
  BOOL v8; // esi
  int v9; // [esp+18h] [ebp-28h]
  int v10; // [esp+24h] [ebp-1Ch]
  void *v11; // [esp+30h] [ebp-10h] BYREF
  _DWORD v12[3]; // [esp+34h] [ebp-Ch] BYREF

  result = LoginFlowWOL_Reset(); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((wchar_t **)&v11, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v11, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v11); /*0x799d75*/
    v2 = 8960; /*0x799d7f*/
    if ( MEMORY[0xA8B244] != 3 ) /*0x799d87*/
      v2 = 10496; /*0x799d89*/
    v3 = LoginWOL(v2); /*0x799d8e*/
    if ( v3 ) /*0x799d96*/
    {
      if ( v3 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( MEMORY[0xAC1170] && strlen(g_WOL_ConnectFlag) && String::Length((const char **)&g_WebBrowser) ) /*0x799dd2*/
      {
        v4 = *(_DWORD *)MEMORY[0xAC1170]; /*0x799dea*/
        v9 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v5 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799dfa*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v4 + 20))( /*0x799e12*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v5,
          v9,
          -1,
          0,
          0);
        v6 = *(_DWORD *)MEMORY[0xAC1170]; /*0x799e27*/
        v10 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v7 = String::GetOrEmpty((char **)&g_WebBrowser); /*0x799e2f*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v6 + 56))( /*0x799e47*/
          MEMORY[0xAC1170],
          g_WOL_ConnectFlag,
          g_WOL_GameConfig,
          v7,
          v10);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor(v12); /*0x799e53*/
      v12[0] = &off_7F7624; /*0x799e6c*/
      RunDialog(0x114u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL, (LPARAM)v12); /*0x799e70*/
      System_Init_72CA10(); /*0x799e75*/
      v8 = MEMORY[0xA8B244] != 0; /*0x799e8b*/
      v12[0] = &off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable(v12); /*0x799e91*/
      return v8; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/
}


// ==== 0x00799EA0  OptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_OptionsDlgProc(HWND hWnd, const char *lParam, int a3, int hCtl)
{
  HWND v4; // ebp
  HWND v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v10; // eax
  bool v11; // dl
  int i; // ebx
  char *v13; // eax
  char v14; // al
  HWND v15; // edi
  char *v16; // eax
  unsigned int v17; // eax
  HWND v18; // edi
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // edi
  char *v22; // eax
  LRESULT v23; // ebp
  LRESULT v24; // eax
  HWND v25; // ebp
  char *v26; // eax
  unsigned int v27; // eax
  HWND v28; // ebp
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // esi
  LRESULT v32; // eax
  LRESULT v33; // ecx
  LRESULT v34; // edi
  HWND v35; // esi
  LRESULT v36; // eax
  LRESULT v37; // edi
  HWND v38; // esi
  LRESULT v39; // eax
  HWND v40; // eax
  unsigned int v41; // eax
  HWND v42; // edi
  int v43; // ebx
  HWND v44; // eax
  HWND v45; // eax
  HWND v46; // edi
  char *v47; // eax
  char **v48; // eax
  char **v49; // eax
  HWND v50; // eax
  HWND v51; // ebx
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // ebx
  int v55; // ecx
  LRESULT v56; // eax
  int v57; // eax
  char *v58; // eax
  char *v59; // eax
  char *v60; // eax
  unsigned int v61; // eax
  HWND v62; // edi
  HWND v63; // eax
  HWND v64; // eax
  HWND v65; // eax
  HWND v66; // edi
  const char *v67; // ecx
  WPARAM v68; // edi
  HWND v69; // eax
  unsigned int v70; // edi
  unsigned int v71; // edi
  HWND v72; // edi
  unsigned __int8 v73; // bl
  HWND Parent; // eax
  HWND DlgItem; // eax
  HWND v76; // eax
  HWND v77; // eax
  const char *v78; // [esp+8h] [ebp-30h]
  BOOL v79; // [esp+8h] [ebp-30h]
  int v80; // [esp+8h] [ebp-30h]
  BOOL v81; // [esp+8h] [ebp-30h]
  int v82; // [esp+8h] [ebp-30h]
  const char *v83; // [esp+8h] [ebp-30h]
  BOOL v84; // [esp+8h] [ebp-30h]
  int v85; // [esp+8h] [ebp-30h]
  void *v86; // [esp+1Ch] [ebp-1Ch] BYREF
  HWND v87; // [esp+20h] [ebp-18h] BYREF
  const char *v88; // [esp+24h] [ebp-14h] BYREF
  void *v89; // [esp+28h] [ebp-10h] BYREF
  void *v90; // [esp+2Ch] [ebp-Ch] BYREF
  int v91; // [esp+30h] [ebp-8h] BYREF
  char v92; // [esp+34h] [ebp-4h]

  v4 = (HWND)hCtl;
  v5 = hWnd;
  v6 = (unsigned int)lParam;
  if ( lParam == (const char *)272 && hCtl )
    SetWindowLongA(hWnd, 8, *(_DWORD *)(hCtl + 4));
  v7 = a3;
  result = BaseDialogProc(v5, v6, a3, (unsigned int)v4);
  if ( result )
    return result;
  WindowLongA = GetWindowLongA(v5, 8);
  if ( v6 > 0x497 )
  {
    v70 = v6 - 1242;
    if ( v70 )
    {
      v71 = v70 - 1;
      if ( v71 )
      {
        if ( v71 == 18 )
        {
          ShowWindow(v5, 0);
          Dialog::InitWindow(v5, 1);
          return 0;
        }
      }
      else
      {
        v72 = v4;
        v73 = v7 != 0;
        Parent = GetParent(v4);
        if ( Parent )
        {
          while ( v72 )
          {
            if ( Parent != v5 )
            {
              v72 = Parent;
              Parent = GetParent(Parent);
              if ( Parent )
                continue;
            }
            goto LABEL_133;
          }
        }
        else
        {
LABEL_133:
          if ( v72 )
          {
            NavigateDialogTab(v72, v73);
            return 0;
          }
        }
      }
    }
    else
    {
      DlgItem = GetDlgItem(v5, 1836);
      GetDialogText(DlgItem, (void **)&g_WebBrowserConfig);
      unknown_libname_73(&hCtl);
      v76 = GetDlgItem(v5, 1576);
      GetDialogText(v76, (void **)&hCtl);
      if ( String::Length((const char **)&hCtl) && String::Length((const char **)&g_WebBrowserConfig) == 8 )
      {
        v77 = GetDlgItem(v5, 1337);
        PostMessageA(v77, 0xF5u, 0, 0);
      }
      DeleteAndZero((void **)&hCtl);
    }
    return 0;
  }
  if ( v6 == 1175 )
  {
    byte_B77EA0 = 1;
    v54 = GetDlgItem(v5, 1576);
    v87 = GetDlgItem(v5, 1836);
    SendMessageA(v54, 0x4D1u, 1u, 0);
    SendMessageA(v87, 0x4D1u, 1u, 0);
    SendMessageA(v54, 0xC5u, 9u, 0);
    SendMessageA(v87, 0xC5u, 8u, 0);
    ListBox::Clear(v54);
    SendMessageA(v54, 0x141u, 9u, 0);
    v55 = 1;
    for ( hCtl = 1; hCtl < 32; ++hCtl )
    {
      if ( !(*(int (__stdcall **)(LPVOID, int, const char **, const char **))(*(_DWORD *)MEMORY[0xAC116C] + 144))(
              MEMORY[0xAC116C],
              v55,
              &lParam,
              &v88)
        && lParam
        && strlen(lParam) )
      {
        v56 = SendMessageA(v54, 0x4BCu, 0, (LPARAM)lParam);
        SendMessageA(v54, 0x151u, v56, hCtl);
      }
      v55 = hCtl + 1;
    }
    String::AssignFromPtr((char **)&hWnd, (const char **)&g_WebBrowser);
    DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
    v57 = 1;
    hCtl = 1;
    while ( 1 )
    {
      if ( !(*(int (__stdcall **)(LPVOID, int, const char **, const char **))(*(_DWORD *)MEMORY[0xAC116C] + 144))(
              MEMORY[0xAC116C],
              v57,
              &lParam,
              &v88) )
      {
        if ( lParam )
        {
          if ( strlen(lParam) )
          {
            v83 = lParam;
            v58 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
            if ( !_strcmpi(v58, v83) )
              break;
          }
        }
      }
      v57 = ++hCtl;
      if ( hCtl > 32 )
      {
        DeleteAndZero::Alt2((void **)&g_WebBrowser);
        LOBYTE(hCtl) = 0;
        String::Reassign((char **)&g_WebBrowser, (const char **)&hWnd);
        goto LABEL_106;
      }
    }
    String::Assign_Alt((void **)&g_WebBrowser, lParam);
    String::Assign_Alt((void **)&g_WebBrowserConfig, v88);
    LOBYTE(dword_84A238) = 0;
    LOBYTE(hCtl) = 1;
LABEL_106:
    v59 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
    SendMessageA(v54, 0x4B4u, 0, (LPARAM)v59);
    if ( String::Length((const char **)&g_WebBrowser) )
    {
      v60 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
      SendMessageA(v87, 0x4B4u, 0, (LPARAM)v60);
      LOBYTE(dword_84A238) = 0;
    }
    if ( !String::Length((const char **)&g_WebBrowser)
      || (v61 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(lParam) = 1, v61 != 8) )
    {
      LOBYTE(lParam) = 0;
    }
    v62 = GetDlgItem(v5, 1837);
    SendMessageA(v62, 0x49Du, 0, 1);
    SendMessageA(v62, 0xF1u, (unsigned __int8)hCtl, 0);
    EnableWindow(v62, 0);
    InvalidateRect(v62, 0, 0);
    SendMessageA(v62, 0x49Du, 0, 0);
    v84 = String::Length((const char **)&g_WebBrowser) != 0;
    v63 = GetDlgItem(v5, 1771);
    EnableWindow(v63, v84);
    v85 = (unsigned __int8)lParam;
    v64 = GetDlgItem(v5, 1337);
    EnableWindow(v64, v85);
    v91 = 0;
    v92 = 0;
    ReadRegistryOptionsWOL(&v91);
    if ( !Flag::IsNot2(&v91) )
    {
      v65 = GetDlgItem(v5, 1578);
      MainLobbyDlgProcWOL_Read(v65);
      FillComboBoxRandomOnly(v5, 1697);
      v66 = GetDlgItem(v5, 1697);
      lParam = (const char *)SendMessageA(v66, 0x146u, 0, 0);
      hCtl = 0;
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA(v66, 0x150u, hCtl, 0) != *(_DWORD *)(dword_B75E4C + 28) )
        {
          v67 = lParam;
          if ( ++hCtl >= (int)lParam )
            goto LABEL_118;
        }
        SendMessageA(v66, 0x14Eu, hCtl, 0);
      }
LABEL_118:
      InitGameDropdownColors(v67);
      FillComboBoxFactions(v5, 1698);
      hCtl = (int)GetDlgItem(v5, 1698);
      v68 = 0;
      lParam = (const char *)SendMessageA((HWND)hCtl, 0x146u, 0, 0);
      if ( (int)lParam > 0 )
      {
        while ( SendMessageA((HWND)hCtl, 0x150u, v68, 0) != *(_DWORD *)(dword_B75E4C + 32) )
        {
          if ( (int)++v68 >= (int)lParam )
            goto LABEL_123;
        }
        SendMessageA((HWND)hCtl, 0x14Eu, v68, 0);
      }
LABEL_123:
      v69 = GetDlgItem(v5, 1577);
      PopulateWOLUserList(v69);
    }
    byte_B77EA0 = 0;
    DeleteAndZero((void **)&hWnd);
    return 0;
  }
  else
  {
    if ( v6 <= 0x2B )
    {
      switch ( v6 )
      {
        case 0x2Bu:
          Dialog::Resize((char *)v4);
          return 1;
        case 0xFu:
          Dialog::DrawBackground(v5);
          Dialog::StopBink(v5);
          ValidateRect(v5, 0);
          return 1;
        case 0x14u:
          return 1;
      }
      return 0;
    }
    if ( v6 != 273 )
      return 0;
    if ( (unsigned __int16)v7 > 0x6A2u )
    {
      switch ( (__int16)v7 )
      {
        case 1770:
          CreateAccountWOL(v5);
          result = 0;
          break;
        case 1771:
          byte_B77EA0 = 1;
          v46 = GetDlgItem(v5, 1576);
          v47 = String::GetOrEmpty_Alt((char **)&g_WebBrowser);
          hWnd = (HWND)SendMessageA(v46, 0x4B9u, 0xFFFFFFFF, (LPARAM)v47);
          if ( hWnd != HWND_MESSAGE|0x2 )
          {
            unknown_libname_73(&lParam);
            OptionsDlgProcWOL_Assign(v46, (WPARAM)hWnd, (int)&lParam);
            String::ToLower(&lParam);
            ReadAutoLoginWOL((char **)&v88);
            v48 = String::ToLowerCopy(&v88, (char **)&v89);
            LOBYTE(hCtl) = String::Compare(&lParam, (const char **)v48);
            DeleteAndZero(&v89);
            if ( (_BYTE)hCtl )
            {
              String::Assign((char **)&a3, &MEMORY[0x889F64]);
              ReadSettingsWOL(&a3);
              DeleteAndZero((void **)&a3);
            }
            LoadConfigWOL((char **)&v87);
            v49 = String::ToLowerCopy((const char **)&v87, (char **)&v90);
            LOBYTE(hCtl) = String::Compare(&lParam, (const char **)v49);
            DeleteAndZero(&v90);
            if ( (_BYTE)hCtl )
            {
              String::Assign((char **)&v86, &MEMORY[0x889F64]);
              SavePersonaConfigWOL((char **)&v86);
              DeleteAndZero(&v86);
            }
            hCtl = SendMessageA(v46, 0x150u, (WPARAM)hWnd, 0);
            SendMessageA(v46, 0x144u, (WPARAM)hWnd, 0);
            (*(void (__stdcall **)(LPVOID, int, char *, char *, int))(*(_DWORD *)MEMORY[0xAC116C] + 148))(
              MEMORY[0xAC116C],
              hCtl,
              &MEMORY[0x889F64],
              &MEMORY[0x889F64],
              1);
            DeleteAndZero((void **)&v87);
            DeleteAndZero((void **)&v88);
            DeleteAndZero((void **)&lParam);
          }
          SendMessageA(v46, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]);
          InvalidateRect(v46, 0, 0);
          v50 = GetDlgItem(v5, 1836);
          SendMessageA(v50, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]);
          DeleteAndZero::Alt2((void **)&g_WebBrowser);
          DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
          LOBYTE(dword_84A238) = 1;
          v51 = GetDlgItem(v5, 1837);
          EnableWindow(v51, 0);
          InvalidateRect(v51, 0, 0);
          v52 = GetDlgItem(v5, 1771);
          EnableWindow(v52, 0);
          v53 = GetDlgItem(v5, 1337);
          EnableWindow(v53, 0);
          byte_B77EA0 = 0;
          result = 0;
          break;
        case 1772:
          WebBrowser::ShowDialog(g_INI_Key_Manage);
          result = 0;
          break;
        case 1836:
          if ( HIWORD(v7) != 768 || byte_B77EA0 )
            return 0;
          LOBYTE(dword_84A238) = 1;
          GetDialogText(v4, (void **)&g_WebBrowserConfig);
          unknown_libname_73(&hCtl);
          v40 = GetDlgItem(v5, 1576);
          GetDialogText(v40, (void **)&hCtl);
          if ( !String::Length((const char **)&hCtl)
            || (v41 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(lParam) = 1, v41 != 8) )
          {
            LOBYTE(lParam) = 0;
          }
          v42 = GetDlgItem(v5, 1837);
          SendMessageA(v42, 0x49Du, 0, 1);
          v43 = (unsigned __int8)lParam;
          EnableWindow(v42, (unsigned __int8)lParam);
          InvalidateRect(v42, 0, 0);
          SendMessageA(v42, 0x49Du, 0, 0);
          v44 = GetDlgItem(v5, 1771);
          EnableWindow(v44, 0);
          v45 = GetDlgItem(v5, 1337);
          EnableWindow(v45, v43);
          DeleteAndZero((void **)&hCtl);
          result = 0;
          break;
        case 1837:
          byte_B77E68 = SendMessageA(v4, 0xF0u, 0, 0) == 1;
          result = 0;
          break;
        default:
          return 0;
      }
      return result;
    }
    if ( (unsigned __int16)v7 == 1698 )
    {
      if ( Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
      {
        v37 = -2;
        v38 = GetDlgItem(v5, 1698);
        v39 = SendMessageA(v38, 0x147u, 0, 0);
        if ( v39 != -1 )
          v37 = SendMessageA(v38, 0x150u, v39, 0);
        MainLobbyDlgProcWOL_Helper_77A7A0(v37);
        return 0;
      }
      return 0;
    }
    if ( (unsigned __int16)v7 <= 0x62Au )
    {
      switch ( (unsigned __int16)v7 )
      {
        case 0x62Au:
          if ( Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
          {
            v31 = GetDlgItem(v5, 1578);
            v32 = SendMessageA(v31, 0x147u, 0, 0);
            v33 = 0;
            if ( v32 != -1 )
              v33 = SendMessageA(v31, 0x150u, v32, 0);
            GadgetClass::TrackState(dword_B75E4C, v33, 3);
            return 0;
          }
          break;
        case 0x539u:
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 1337);
          return 0;
        case 0x628u:
          v11 = Dialog::FindByHandle((void *)0x11D) != 0;
          if ( HIWORD(v7) == 1 )
          {
            if ( !v11 )
            {
              byte_B77EA0 = 1;
              DeleteAndZero::Alt2((void **)&g_WebBrowser);
              DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
              LOBYTE(dword_84A238) = 1;
              v21 = GetDlgItem(v5, 1836);
              v22 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
              SendMessageA(v21, 0x4B4u, 0, (LPARAM)v22);
              LOBYTE(hWnd) = byte_B77E68;
              v23 = SendMessageA((HWND)hCtl, 0x147u, 0, 0);
              if ( v23 != -1 )
              {
                v24 = SendMessageA((HWND)hCtl, 0x150u, v23, 0);
                lParam = (const char *)v24;
                if ( v24 > 0 && v24 <= 32 )
                {
                  OptionsDlgProcWOL_Assign((HWND)hCtl, v23, (int)&g_WebBrowser);
                  (*(void (__stdcall **)(LPVOID, const char *, const char **, int *))(*(_DWORD *)MEMORY[0xAC116C] + 144))(
                    MEMORY[0xAC116C],
                    lParam,
                    &v88,
                    &hCtl);
                  String::Assign_Alt((void **)&g_WebBrowserConfig, (const char *)hCtl);
                  v25 = GetDlgItem(v5, 1836);
                  v26 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
                  SendMessageA(v25, 0x4B4u, 0, (LPARAM)v26);
                  LOBYTE(dword_84A238) = 0;
                  LOBYTE(hWnd) = 1;
                }
              }
              if ( !String::Length((const char **)&g_WebBrowser)
                || (v27 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(hCtl) = 1, v27 != 8) )
              {
                LOBYTE(hCtl) = 0;
              }
              v28 = GetDlgItem(v5, 1837);
              SendMessageA(v28, 0xF1u, (unsigned __int8)hWnd, 0);
              EnableWindow(v28, 0);
              InvalidateRect(v28, 0, 0);
              v81 = String::Length((const char **)&g_WebBrowser) != 0;
              v29 = GetDlgItem(v5, 1771);
              EnableWindow(v29, v81);
              v82 = (unsigned __int8)hCtl;
              v30 = GetDlgItem(v5, 1337);
              EnableWindow(v30, v82);
              byte_B77EA0 = 0;
              return 0;
            }
          }
          else if ( (HIWORD(v7) == 5 || HIWORD(v7) == 768)
                 && (HIWORD(v7) != 768 || v11)
                 && (HIWORD(v7) != 5 || !v11)
                 && !byte_B77EA0 )
          {
            unknown_libname_73(&hCtl);
            GetDialogText(v4, (void **)&hCtl);
            DeleteAndZero::Alt2((void **)&g_WebBrowserConfig);
            for ( i = 1; i <= 32; ++i )
            {
              if ( !(*(int (__stdcall **)(LPVOID, int, const char **, HWND *))(*(_DWORD *)MEMORY[0xAC116C] + 144))(
                      MEMORY[0xAC116C],
                      i,
                      &lParam,
                      &hWnd) )
              {
                if ( lParam )
                {
                  if ( strlen(lParam) )
                  {
                    v78 = lParam;
                    v13 = String::GetOrEmpty_Alt((char **)&hCtl);
                    if ( !_strcmpi(v13, v78) )
                    {
                      String::Assign_Alt((void **)&g_WebBrowser, lParam);
                      String::Assign_Alt((void **)&g_WebBrowserConfig, (const char *)hWnd);
                      LOBYTE(dword_84A238) = 0;
                      v14 = 1;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
            DeleteAndZero::Alt2((void **)&g_WebBrowser);
            v14 = 0;
            if ( !byte_B77E68 )
            {
              LOBYTE(lParam) = 0;
              goto LABEL_43;
            }
LABEL_42:
            LOBYTE(lParam) = 1;
            if ( v14 )
              goto LABEL_44;
LABEL_43:
            String::Reassign((char **)&g_WebBrowser, (const char **)&hCtl);
LABEL_44:
            byte_B77EA0 = 1;
            v15 = GetDlgItem(v5, 1836);
            v16 = String::GetOrEmpty_Alt(&g_WebBrowserConfig);
            SendMessageA(v15, 0x4B4u, 0, (LPARAM)v16);
            InvalidateRect(v15, 0, 0);
            byte_B77EA0 = 0;
            if ( !String::Length((const char **)&g_WebBrowser)
              || (v17 = String::Length((const char **)&g_WebBrowserConfig), LOBYTE(hWnd) = 1, v17 != 8) )
            {
              LOBYTE(hWnd) = 0;
            }
            v18 = GetDlgItem(v5, 1837);
            ShowWindow(v18, 0);
            SendMessageA(v18, 0x49Du, 0, 1);
            SendMessageA(v18, 0xF1u, (unsigned __int8)lParam, 0);
            EnableWindow(v18, 0);
            SendMessageA(v18, 0x49Du, 0, 0);
            ShowWindow(v18, 5);
            InvalidateRect(v18, 0, 0);
            v79 = String::Length((const char **)&g_WebBrowser) != 0;
            v19 = GetDlgItem(v5, 1771);
            EnableWindow(v19, v79);
            v80 = (unsigned __int8)hWnd;
            v20 = GetDlgItem(v5, 1337);
            EnableWindow(v20, v80);
            DeleteAndZero((void **)&hCtl);
            return 0;
          }
          break;
        default:
          if ( (unsigned __int16)v7 == 1577 && Dialog::FindByHandle((void *)0x11D) && dword_B75E4C )
          {
            unknown_libname_73(&hCtl);
            v10 = GetDlgItem(v5, 1577);
            GetDialogText(v10, (void **)&hCtl);
            WOLOption::SetValue(&hCtl);
            DeleteAndZero((void **)&hCtl);
            return 0;
          }
          return 0;
      }
      return 0;
    }
    if ( (unsigned __int16)v7 == 1670 )
    {
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, v5, 2);
      return 0;
    }
    if ( (unsigned __int16)v7 != 1697 || !Dialog::FindByHandle((void *)0x11D) || !dword_B75E4C )
      return 0;
    v34 = -2;
    v35 = GetDlgItem(v5, 1697);
    v36 = SendMessageA(v35, 0x147u, 0, 0);
    if ( v36 != -1 )
      v34 = SendMessageA(v35, 0x150u, v36, 0);
    MainLobbyDlgProcWOL_Helper_77A780(v34);
    return 0;
  }
}


// ==== 0x0079AE00  sub_79AE00  this=-  sig=csp ====
int __stdcall sub_79AE00(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  UINT v6; // eax

  if ( a2 == 272 ) /*0x79ae16*/
  {
    if ( a4 ) /*0x79ae1a*/
      SetWindowLongA(hWnd, 8, *(_DWORD *)(a4 + 4)); /*0x79ae23*/
  }
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x79ae33*/
  if ( !result ) /*0x79ae3a*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79ae4c*/
    if ( a2 > 0x2B ) /*0x79ae4e*/
    {
      if ( a2 == 273 ) /*0x79aeaa*/
      {
        if ( (unsigned __int16)a3 == 1 ) /*0x79aeb3*/
        {
          ReadSettingsWOL(&g_WebBrowser); /*0x79aeec*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1); /*0x79aef8*/
        }
        else if ( (unsigned __int16)a3 == 2 ) /*0x79aeb6*/
        {
          v6 = IsDlgButtonChecked(hWnd, 1785); /*0x79aebe*/
          ReadWOLGameOption(v6 != 1); /*0x79aecf*/
          (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 2); /*0x79aedb*/
          return 0; /*0x79aee4*/
        }
      }
    }
    else
    {
      switch ( a2 ) /*0x79ae50*/
      {
        case 0x2Bu: /*0x79ae50*/
          Dialog::Resize((char *)a4); /*0x79ae93*/
          return 1; /*0x79aea1*/
        case 0xFu: /*0x79ae50*/
          Dialog::DrawBackground(hWnd); /*0x79ae6e*/
          Dialog::StopBink(hWnd); /*0x79ae75*/
          ValidateRect(hWnd, 0); /*0x79ae7d*/
          return 1; /*0x79ae8c*/
        case 0x14u: /*0x79ae50*/
          return 1; /*0x79ae69*/
      }
    }
    return 0; /*0x79aefb*/
  }
  return result; /*0x79ae60*/
}


// ==== 0x0079AF10  ObjectClass::FillBuddyListWOL  this=ObjectClass  sig=csp ====
void __thiscall FillBuddyListWOL(CCINIClass *hDlg)
{
  LRESULT (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // ebp
  CCINIClass *DlgItem; // ebx
  int v3; // edi
  ObjectClass *v4; // esi
  char *v5; // esi
  char *v6; // eax
  char *v7; // eax
  CampaignScore *v8; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  ObjectClass *v13; // esi
  char *v14; // esi
  int v15; // eax
  int v16; // esi
  GameSetup *v17; // eax
  CampaignScore *v18; // eax
  char *v19; // eax
  ObjectClass *v20; // esi
  wchar_t *v21; // eax
  char *v22; // esi
  int v23; // ebp
  ObjectClass *v24; // eax
  int v25; // ebx
  char *v26; // eax
  char v27; // bl
  void *v28; // eax
  wchar_t *v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  int v32; // esi
  LRESULT v33; // esi
  char *v34; // eax
  unsigned int v35; // eax
  CCINIClass *v36; // esi
  HWND v37; // eax
  HWND v38; // eax
  ObjectClass *v40; // esi
  HWND eax89; // eax
  wchar_t *v41; // [esp-4h] [ebp-41Ch]
  wchar_t *v42; // [esp-4h] [ebp-41Ch]
  const wchar_t *v43; // [esp-4h] [ebp-41Ch]
  BOOL v44; // [esp-4h] [ebp-41Ch]
  BOOL BuddyWOL; // [esp-4h] [ebp-41Ch]
  int v46; // [esp-4h] [ebp-41Ch]
  CampaignScore *v47; // [esp+0h] [ebp-418h]
  char *a1; // [esp+10h] [ebp-408h] BYREF
  int v49; // [esp+14h] [ebp-404h]
  int v50; // [esp+18h] [ebp-400h] BYREF
  wchar_t *v51; // [esp+1Ch] [ebp-3FCh] BYREF
  int v52; // [esp+20h] [ebp-3F8h] BYREF
  LPARAM v53; // [esp+24h] [ebp-3F4h] BYREF
  void *v54; // [esp+28h] [ebp-3F0h] BYREF
  void *v55; // [esp+2Ch] [ebp-3ECh] BYREF
  int v56; // [esp+30h] [ebp-3E8h]
  CCINIClass *hDlga; // [esp+3Ch] [ebp-3DCh]
  int v58; // [esp+40h] [ebp-3D8h] BYREF
  void *aP0; // [esp+44h] [ebp-3D4h] BYREF
  char *aP0_4; // [esp+48h] [ebp-3D0h] BYREF
  CCINIClass *hWnd; // [esp+4Ch] [ebp-3CCh]
  LRESULT aP0_12; // [esp+50h] [ebp-3C8h]
  void *aP0_16; // [esp+54h] [ebp-3C4h] BYREF
  int aP0_20; // [esp+58h] [ebp-3C0h] BYREF
  void *aP0_24; // [esp+5Ch] [ebp-3BCh] BYREF
  void *aP0_28; // [esp+60h] [ebp-3B8h] BYREF
  int aP0_32; // [esp+64h] [ebp-3B4h]
  int aP0_44; // [esp+70h] [ebp-3A8h] BYREF
  void *aP0_48; // [esp+74h] [ebp-3A4h] BYREF
  void *aP0_52[2]; // [esp+78h] [ebp-3A0h] BYREF
  int aP0_60; // [esp+80h] [ebp-398h]
  int aP0_68; // [esp+88h] [ebp-390h] BYREF
  void *aP0_72; // [esp+8Ch] [ebp-38Ch] BYREF
  void *aP0_76[4]; // [esp+90h] [ebp-388h] BYREF
  void *aP0_92; // [esp+A0h] [ebp-378h] BYREF
  int aP0_96; // [esp+A4h] [ebp-374h] BYREF
  int aP0_100; // [esp+A8h] [ebp-370h] BYREF
  int aP0_104; // [esp+ACh] [ebp-36Ch] BYREF
  void *aP0_108; // [esp+B0h] [ebp-368h] BYREF
  void *aP0_112[4]; // [esp+B4h] [ebp-364h] BYREF
  int aP0_128; // [esp+C4h] [ebp-354h] BYREF
  void *aP0_132; // [esp+C8h] [ebp-350h] BYREF
  void *aP0_136[4]; // [esp+CCh] [ebp-34Ch] BYREF
  _DWORD aP0_152[67]; // [esp+DCh] [ebp-33Ch] BYREF
  wchar_t Buffer[80]; // [esp+1E8h] [ebp-230h] BYREF
  _DWORD v86[67]; // [esp+288h] [ebp-190h] BYREF
  char Destination[132]; // [esp+394h] [ebp-84h] BYREF

  hDlga = hDlg; /*0x79af20*/
  v1 = SendMessageA; /*0x79af2a*/
  DlgItem = (CCINIClass *)GetDlgItem((HWND)hDlg, 1673); /*0x79af30*/
  hWnd = DlgItem; /*0x79af3c*/
  SendMessageA((HWND)DlgItem, 0x49Du, 0, 1); /*0x79af40*/
  v49 = 0; /*0x79af49*/
  if ( g_WindowManager > 0 ) /*0x79af51*/
  {
    while ( 1 ) /*0x79af5b*/
    {
      unknown_libname_73(&a1); /*0x79af5b*/
      if ( v49 >= 0 && v49 < g_WindowManager ) /*0x79af6e*/
        String::Reassign(&a1, (AbstractClass *)((char *)g_WOL_LoginQueue + 4 * v49)); /*0x79af7e*/
      CharStringToWide((ObjectClass *)&aP0, (const char **)&a1); /*0x79af8b*/
      v3 = 0; /*0x79af95*/
      if ( dword_B76994 ) /*0x79af99*/
      {
        v4 = (ObjectClass *)*((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&a1) & ((1 << dword_B7699C) - 1))); /*0x79afba*/
        if ( v4 ) /*0x79afbf*/
        {
          while ( !String::Compare((const char **)v4, (const char **)&a1) ) /*0x79afcf*/
          {
            v4 = *(ObjectClass **)&v4->__pad_0[8]; /*0x79afd1*/
            if ( !v4 ) /*0x79afd6*/
              goto LABEL_12; /*0x79afd6*/
          }
          v5 = &v4->__pad_0[4]; /*0x79afde*/
          if ( v5 ) /*0x79afe3*/
            v3 = *(_DWORD *)v5; /*0x79afe5*/
        }
      }
LABEL_12:
      v6 = String::GetOrEmpty_Alt(&a1); /*0x79afe7*/
      aP0_12 = v1((HWND)DlgItem, 0x4C5u, 0, (LPARAM)v6); /*0x79afff*/
      if ( aP0_12 == -1 ) /*0x79b003*/
      {
        v7 = String::GetOrEmpty_Alt(&a1); /*0x79b009*/
        aP0_12 = v1((HWND)DlgItem, 0x4C8u, 0, (LPARAM)v7); /*0x79b018*/
      }
      Gadget::InitProperties(&aP0_20); /*0x79b020*/
      aP0_20 = 1; /*0x79b029*/
      v8 = WideString::GetOrEmpty((wchar_t **)&aP0); /*0x79b031*/
      WideString::Reassign(&aP0_24, (wchar_t *)v8); /*0x79b03b*/
      WideString::Reassign(&aP0_28, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b049*/
      Gadget::InitProperties(&v53); /*0x79b052*/
      v53 = 1; /*0x79b05b*/
      WideString::Reassign(&v55, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b068*/
      Gadget::InitProperties(&aP0_44); /*0x79b071*/
      aP0_44 = 0; /*0x79b07a*/
      WideString::Reassign(&aP0_48, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b083*/
      WideString::Reassign(aP0_52, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b091*/
      Gadget::InitProperties(&aP0_104); /*0x79b09d*/
      aP0_104 = 0; /*0x79b0a9*/
      WideString::Reassign(&aP0_108, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b0b5*/
      WideString::Reassign(aP0_112, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b0c6*/
      Gadget::InitProperties(&aP0_68); /*0x79b0d2*/
      aP0_68 = 0; /*0x79b0de*/
      WideString::Reassign(&aP0_72, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b0ea*/
      WideString::Reassign(aP0_76, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b0fb*/
      Gadget::InitProperties(&aP0_128); /*0x79b107*/
      aP0_128 = 0; /*0x79b113*/
      WideString::Reassign(&aP0_132, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b11f*/
      WideString::Reassign(aP0_136, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b130*/
      switch ( v3 ) /*0x79b141*/
      {
        case 1: /*0x79b141*/
          StringCSF = GetStringCSF((wchar_t *)aWolBuddydisabl, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26557); /*0x79b159*/
          goto LABEL_70; /*0x79b159*/
        case 2: /*0x79b141*/
          StringCSF = GetStringCSF((wchar_t *)aWolBuddyofflin, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26563); /*0x79b16f*/
          goto LABEL_70; /*0x79b16f*/
        case 3: /*0x79b141*/
          v10 = GetStringCSF(aWolBuddyonline, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26569); /*0x79b179*/
          goto LABEL_24; /*0x79b179*/
        case 4: /*0x79b141*/
          memset(v86, 0, sizeof(v86)); /*0x79b1b6*/
          if ( !dword_B7660C ) /*0x79b1bf*/
            goto LABEL_23; /*0x79b1bf*/
          v13 = (ObjectClass *)*((_DWORD *)g_WOL_EventQueue + (dword_B76620(&a1) & ((1 << dword_B76614) - 1))); /*0x79b1e0*/
          if ( !v13 ) /*0x79b1e5*/
            goto LABEL_23; /*0x79b1e5*/
          do /*0x79b1ff*/
          {
            if ( String::Compare((const char **)v13, (const char **)&a1) ) /*0x79b1ee*/
            {
              v14 = &v13->__pad_0[4]; /*0x79b22f*/
              if ( v14 ) /*0x79b234*/
                qmemcpy(v86, v14, sizeof(v86)); /*0x79b242*/
              if ( v86[0] || strncmp((AnimClass *)&v86[13], g_Str_Lob_41_, strlen(g_Str_Lob_41_)) ) /*0x79b270*/
              {
                v19 = CharToWideString(&v86[13]); /*0x79b32c*/
                WideString::Reassign(&v54, (wchar_t *)v19); /*0x79b336*/
                v12 = 16728064; /*0x79b33b*/
              }
              else
              {
                v15 = atol((const char *)&v86[13] + strlen(g_Str_Lob_41_)); /*0x79b295*/
                v16 = v15 / 8; /*0x79b2a7*/
                WideString::Assign(&v51, *(&dword_B73E1C + v15 % 8)); /*0x79b2c3*/
                if ( v16 ) /*0x79b2ca*/
                {
                  WideString::Append2(&v51, &stru_82083C); /*0x79b2d5*/
                  v17 = (GameSetup *)FormatWideString((wchar_t **)&aP0_92, (const wchar_t *)(v16 + 1)); /*0x79b2e4*/
                  WideString::Append(&v51, (CampaignScore *)v17); /*0x79b2ee*/
                  DeleteAndZero::Alt(&aP0_92); /*0x79b2fa*/
                }
                v18 = WideString::GetOrEmpty(&v51); /*0x79b303*/
                WideString::Reassign(&v54, (wchar_t *)v18); /*0x79b30d*/
                DeleteAndZero::Alt((void **)&v51); /*0x79b316*/
                v12 = 16728064; /*0x79b31b*/
              }
              goto LABEL_71; /*0x79b320*/
            }
            v13 = (ObjectClass *)v13[1].customSound; /*0x79b1f7*/
          }
          while ( v13 ); /*0x79b1ff*/
LABEL_23:
          v10 = GetStringCSF(aWolBuddyonline, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26601); /*0x79b201*/
LABEL_24:
          WideString::Reassign(&v54, v10); /*0x79b217*/
          v12 = 61680; /*0x79b221*/
LABEL_71:
          v56 = v12; /*0x79b77f*/
          aP0_32 = v12; /*0x79b783*/
          goto LABEL_72; /*0x79b783*/
        case 5: /*0x79b141*/
          memset(aP0_152, 0, sizeof(aP0_152)); /*0x79b353*/
          if ( !dword_B7660C ) /*0x79b35c*/
            goto LABEL_37; /*0x79b35c*/
          v20 = (ObjectClass *)*((_DWORD *)g_WOL_EventQueue + (dword_B76620(&a1) & ((1 << dword_B76614) - 1))); /*0x79b37d*/
          if ( !v20 ) /*0x79b382*/
            goto LABEL_37; /*0x79b382*/
          break; /*0x79b382*/
        case 6: /*0x79b141*/
          v31 = GetStringCSF(aWolBuddyplayin, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26687); /*0x79b744*/
          WideString::Reassign(&v54, v31); /*0x79b74e*/
          v12 = 3166463; /*0x79b753*/
          goto LABEL_71; /*0x79b758*/
        case 7: /*0x79b141*/
        case 8: /*0x79b141*/
          v11 = GetStringCSF(aWolBuddyquickm, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26576); /*0x79b18f*/
          WideString::Reassign(&v54, v11); /*0x79b199*/
          v12 = 8453888; /*0x79b19e*/
          goto LABEL_71; /*0x79b1a3*/
        default:
          StringCSF = GetStringCSF(aWolBuddyunknow, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26693); /*0x79b76b*/
LABEL_70:
          WideString::Reassign(&v54, StringCSF); /*0x79b770*/
          v12 = (int)&unk_808080; /*0x79b77a*/
          goto LABEL_71; /*0x79b77a*/
      }
      while ( !String::Compare((const char **)v20, (const char **)&a1) ) /*0x79b392*/
      {
        v20 = (ObjectClass *)v20[1].customSound; /*0x79b394*/
        if ( !v20 ) /*0x79b39c*/
          goto LABEL_37; /*0x79b39c*/
      }
      v22 = &v20->__pad_0[4]; /*0x79b3de*/
      if ( v22 ) /*0x79b3e3*/
        qmemcpy(aP0_152, v22, sizeof(aP0_152)); /*0x79b3f1*/
      String::Assign(&aP0_4, (const char *)&aP0_152[13]); /*0x79b3ff*/
      v23 = 0; /*0x79b412*/
      memset(aP0_152, 0, sizeof(aP0_152)); /*0x79b414*/
      v24 = g_WOL_ChatState; /*0x79b416*/
      if ( (int)g_WOL_ChatState <= 0 ) /*0x79b41d*/
      {
LABEL_47:
        v27 = 0; /*0x79b471*/
        memset(aP0_152, 0, sizeof(aP0_152)); /*0x79b481*/
      }
      else
      {
        v25 = 0; /*0x79b41f*/
        while ( 1 ) /*0x79b421*/
        {
          if ( v25 >= 0 && v23 < (int)v24 ) /*0x79b427*/
            qmemcpy(aP0_152, (char *)g_WOL_ConnectionHandler + v25, sizeof(aP0_152)); /*0x79b43d*/
          v26 = String::GetOrEmpty_Alt(&aP0_4); /*0x79b443*/
          if ( !_strcmpi(&aP0_152[13], v26) ) /*0x79b451*/
            break; /*0x79b451*/
          v24 = g_WOL_ChatState; /*0x79b461*/
          ++v23; /*0x79b466*/
          v25 += 268; /*0x79b467*/
          if ( v23 >= (int)g_WOL_ChatState ) /*0x79b46f*/
            goto LABEL_47; /*0x79b46f*/
        }
        v27 = 1; /*0x79b526*/
      }
      DeleteAndZero((int)&aP0_4); /*0x79b487*/
      if ( !v27 ) /*0x79b48e*/
      {
LABEL_37:
        v21 = GetStringCSF(aWolBuddyonline, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26680); /*0x79b39e*/
        WideString::Reassign(&v54, v21); /*0x79b3b9*/
        v1 = SendMessageA; /*0x79b3be*/
        DlgItem = hWnd; /*0x79b3c9*/
        v56 = 61680; /*0x79b3cd*/
        aP0_32 = 61680; /*0x79b3d1*/
        goto LABEL_72; /*0x79b3d5*/
      }
      strncpy(Destination, (const char *)&aP0_152[56], (IUnknown *)0x80); /*0x79b4a9*/
      aP0_100 = 0; /*0x79b4b7*/
      aP0_96 = 0; /*0x79b4be*/
      v58 = 0; /*0x79b4c5*/
      v52 = 0; /*0x79b4c9*/
      v50 = 0; /*0x79b4cd*/
      unknown_libname_73(&aP0_16); /*0x79b4d1*/
      ParseStringCommaInts(Destination, &aP0_100, &aP0_96, &v58, &v52, &v50, &aP0_16); /*0x79b500*/
      swprintf( /*0x79b552*/
        Buffer,
        (const size_t)aHsDD,
        (const wchar_t *const)&aP0_152[13],
        (CampaignScore *)(v58 + aP0_152[3] - v52));
      WideString::Reassign(&v54, Buffer); /*0x79b566*/
      v56 = 16776960; /*0x79b575*/
      aP0_32 = 16776960; /*0x79b579*/
      aP0_44 = 2; /*0x79b584*/
      if ( aP0_152[5] ) /*0x79b58a*/
      {
        aP0_60 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[788], 0); /*0x79b5ad*/
        v41 = GetStringCSF(aTxtTournamentG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26637); /*0x79b5b9*/
        WideString::Reassign(aP0_52, v41); /*0x79b5ba*/
      }
      else if ( (aP0_152[8] & 0x100) != 0 ) /*0x79b5c7*/
      {
        aP0_60 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[736], 0); /*0x79b5e9*/
        v42 = GetStringCSF(aTxtBattleclanG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26640); /*0x79b5f5*/
        WideString::Reassign(aP0_52, v42); /*0x79b5f6*/
      }
      else
      {
        aP0_60 = HashTable::Find(&g_MatrixTransformState + 5774, aGt18Bmp, 0); /*0x79b607*/
        WideString::Reassign(aP0_52, (wchar_t *)&stru_87C374.__pad_579C[23588]); /*0x79b617*/
      }
      if ( (aP0_152[8] & 0x600) != 0 ) /*0x79b62a*/
        break; /*0x79b62a*/
      if ( !v52 && v50 ) /*0x79b65c*/
      {
        aP0_68 = 2; /*0x79b65f*/
        v28 = (void *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_14B0[780], 0); /*0x79b670*/
LABEL_64:
        aP0_76[2] = v28; /*0x79b675*/
      }
      if ( (aP0_152[7] & 0x100) != 0 ) /*0x79b686*/
      {
        aP0_104 = 2; /*0x79b693*/
        aP0_112[2] = (void *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[748], 0); /*0x79b6b0*/
        v29 = GetStringCSF(aTxtGamePasswor, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26672); /*0x79b6b7*/
        WideString::Reassign(aP0_112, v29); /*0x79b6c4*/
      }
      v43 = (const wchar_t *)aP0_152[10]; /*0x79b6d2*/
      aP0_128 = 3; /*0x79b6e2*/
      aP0_136[3] = (void *)aP0_152[10]; /*0x79b6ed*/
      v30 = GetStringCSF((wchar_t *)&stru_84A684.CCINIClass_field_4C, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26677); /*0x79b6f4*/
      swprintf(Buffer, (const size_t)v30, v43, v47); /*0x79b702*/
      WideString::Reassign(aP0_136, Buffer); /*0x79b719*/
      DeleteAndZero((int)&aP0_16); /*0x79b722*/
      v1 = SendMessageA; /*0x79b727*/
      DlgItem = hWnd; /*0x79b72d*/
LABEL_72:
      v32 = (unsigned __int16)aP0_12 << 16; /*0x79b787*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1C4, (LPARAM)&aP0_20); /*0x79b7ac*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1C8, (LPARAM)&aP0_44); /*0x79b7c8*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1CC, (LPARAM)&aP0_104); /*0x79b7e7*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1D0, (LPARAM)&aP0_68); /*0x79b804*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1D4, (LPARAM)&v53); /*0x79b820*/
      v1((HWND)DlgItem, 0x4A8u, v32 | (unsigned __int16)dword_84A1D8, (LPARAM)&aP0_128); /*0x79b83f*/
      DeleteAndZero::Alt(aP0_136); /*0x79b848*/
      DeleteAndZero::Alt(&aP0_132); /*0x79b854*/
      DeleteAndZero::Alt(aP0_76); /*0x79b860*/
      DeleteAndZero::Alt(&aP0_72); /*0x79b86c*/
      DeleteAndZero::Alt(aP0_112); /*0x79b878*/
      DeleteAndZero::Alt(&aP0_108); /*0x79b884*/
      DeleteAndZero::Alt(aP0_52); /*0x79b88d*/
      DeleteAndZero::Alt(&aP0_48); /*0x79b896*/
      DeleteAndZero::Alt(&v55); /*0x79b89f*/
      DeleteAndZero::Alt(&v54); /*0x79b8a8*/
      DeleteAndZero::Alt(&aP0_28); /*0x79b8b1*/
      DeleteAndZero::Alt(&aP0_24); /*0x79b8ba*/
      DeleteAndZero::Alt(&aP0); /*0x79b8c3*/
      DeleteAndZero((int)&a1); /*0x79b8cc*/
      if ( ++v49 >= g_WindowManager ) /*0x79b8e2*/
        goto LABEL_73; /*0x79b8e2*/
    }
    if ( v52 || !v50 ) /*0x79b634*/
    {
      aP0_68 = 2; /*0x79b646*/
      v28 = (void *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_566C[136], 0); /*0x79b652*/
    }
    else
    {
      aP0_68 = 2; /*0x79b637*/
      v28 = (void *)HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[720], 0); /*0x79b643*/
    }
    goto LABEL_64; /*0x79b643*/
  }
LABEL_73:
  v33 = -1; /*0x79b8e8*/
  if ( String::Length((const char **)&g_WOL_LoginObject) ) /*0x79b8f0*/
  {
    v34 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79b8fe*/
    v33 = v1((HWND)DlgItem, 0x4C5u, 0, (LPARAM)v34); /*0x79b90e*/
  }
  if ( v33 != v1((HWND)DlgItem, 0x188u, 0, 0) ) /*0x79b91e*/
    v1((HWND)DlgItem, 0x186u, v33, 0); /*0x79b929*/
  v1((HWND)DlgItem, 0x49Du, 0, 0); /*0x79b935*/
  InvalidateRect((HWND)DlgItem, 0, 0); /*0x79b93c*/
  v35 = String::Length((const char **)&g_WOL_LoginObject); /*0x79b947*/
  v36 = hDlga; /*0x79b94e*/
  v44 = v35 != 0; /*0x79b95e*/
  v37 = GetDlgItem((HWND)hDlga, 1795); /*0x79b965*/
  EnableWindow(v37, v44); /*0x79b96e*/
  BuddyWOL = FindBuddyWOL(); /*0x79b97a*/
  v38 = GetDlgItem((HWND)v36, 1581); /*0x79b981*/
  EnableWindow(v38, BuddyWOL); /*0x79b984*/
  if ( String::Length((const char **)&g_WOL_LoginObject) ) /*0x79b98b*/
  {
    if ( !dword_B76994 ) /*0x79b9a1*/
      goto LABEL_86; /*0x79b9a1*/
    v40 = (ObjectClass *)*((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79b9c3*/
    if ( !v40 ) /*0x79b9c8*/
      goto LABEL_86; /*0x79b9c8*/
    while ( !String::Compare((const char **)v40, (const char **)&g_WOL_LoginObject) ) /*0x79b9d8*/
    {
      v40 = *(ObjectClass **)&v40->__pad_0[8]; /*0x79b9da*/
      if ( !v40 ) /*0x79b9df*/
      {
        LOBYTE(v49) = 0; /*0x79b9e1*/
        goto LABEL_88; /*0x79b9e6*/
      }
    }
    if ( v40 != (ObjectClass *)-4 && *(_DWORD *)&v40->__pad_0[4] > 2u ) /*0x79b9f7*/
      LOBYTE(v49) = 1; /*0x79ba05*/
    else
LABEL_86:
      LOBYTE(v49) = 0; /*0x79b9fe*/
LABEL_88:
    v36 = hDlga; /*0x79ba0a*/
  }
  else
  {
    LOBYTE(v49) = 0; /*0x79b994*/
  }
  v46 = (unsigned __int8)v49; /*0x79ba18*/
  eax89 = GetDlgItem((HWND)v36, 1474); /*0x79ba1f*/
  EnableWindow(eax89, v46); /*0x79ba26*/
  ShowUserProfileWOL((HWND)v36); /*0x79ba2a*/
}


// ==== 0x0079BA60  ValidateGameJoinWOL  this=AbstractClass  sig=csp ====
char __fastcall ValidateGameJoinWOL(BlowStraw *aP0, ObjectClass *aP1, char a3)
{
  int BlowStraw_field_0x08; // eax
  char v5; // cl
  char v6; // al
  wchar_t *StringCSF; // eax
  BOOL v9; // ecx
  wchar_t *v10; // eax
  ObjectClass v11; // [esp+0h] [ebp-ACh] BYREF

  v11.__pad_0[14] = (char)aP1; /*0x79ba74*/
  v5 = 0; /*0x79ba9c*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x79ba7a*/
  {
    BlowStraw_field_0x08 = aP0[2].BlowStraw_field_0x08; /*0x79ba7c*/
    v11.__pad_0[15] = (BlowStraw_field_0x08 & 0x800) != 0; /*0x79ba87*/
    if ( (aP0[2].BlowStraw_field_0x08 & 0x800) != 0 || (v11.__pad_0[15] = (BlowStraw_field_0x08 & 0x1000) != 0) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 3 /*0x79bab6*/
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 1
    || *(_DWORD *)&HouseClass_Player.__pad_5568[8080] == 2;
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x79bac6*/
  {
    v11.__pad_0[15] = BYTE1(aP0[2].BlowStraw_field_0x08) & 1; /*0x79bad0*/
    if ( v11.__pad_0[15] ) /*0x79bad4*/
    {
      if ( dword_B77DE4 < 1 ) /*0x79badd*/
      {
        if ( (_BYTE)aP1 ) /*0x79bae1*/
        {
          StringCSF = GetStringCSF(aTxtNoClan, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26733); /*0x79baf8*/
          Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)StringCSF, v11); /*0x79bb00*/
          return 0; /*0x79bb13*/
        }
        return 0; /*0x79bae1*/
      }
    }
  }
  strcpy((char *)&v11.owningHouseIndex, (const char *)&aP0[18].BlowStraw_field_0x08); /*0x79bb39*/
  memset(&v11.abstractFlags, 0, 20); /*0x79bb4e*/
  unknown_libname_73(&v11.uniqueId); /*0x79bb56*/
  ParseStringCommaInts( /*0x79bb7c*/
    (char *)&v11.owningHouseIndex,
    &v11.objectTypeFlags,
    &v11.referenceCount,
    (int *)&v11.NeedsSaveOrLink,
    &v11.abstractFlags,
    &v11.nextArrayIndex,
    (void **)&v11.uniqueId);
  if ( GameOptions::GetEntry() != (INIClass *)v11.objectTypeFlags /*0x79bbae*/
    || (CCINIClass_RulesHash ^ CCINIClass_AIHash ^ CCINIClass_ArtHash) != v11.referenceCount )
  {
    if ( v11.__pad_0[14] ) /*0x79bc41*/
    {
      v10 = GetStringCSF(g_Str_TXT_MISMATCH, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
      goto LABEL_34; /*0x79bc54*/
    }
    goto LABEL_35; /*0x79bc41*/
  }
  if ( !a3 ) /*0x79bbbb*/
  {
    v9 = v11.abstractFlags || v11.nextArrayIndex; /*0x79bbda*/
    if ( (int)v11.NeedsSaveOrLink + *(_DWORD *)aP0[1].__pad_0 - v11.abstractFlags >= aP0->BlowStraw_field_0x08 - v9 ) /*0x79bbe6*/
    {
      if ( v11.__pad_0[14] ) /*0x79bbec*/
      {
        v10 = GetStringCSF((wchar_t *)aWolGamefull, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26780); /*0x79bbff*/
LABEL_34:
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v10, v11); /*0x79bc59*/
        goto LABEL_35; /*0x79bc5c*/
      }
      goto LABEL_35; /*0x79bbec*/
    }
LABEL_29:
    DeleteAndZero((int)&v11.uniqueId); /*0x79bc0d*/
    return 1; /*0x79bc21*/
  }
  if ( v11.nextArrayIndex && !v11.abstractFlags ) /*0x79bc0b*/
    goto LABEL_29; /*0x79bc0b*/
  if ( v11.__pad_0[14] ) /*0x79bc28*/
  {
    v10 = GetStringCSF((wchar_t *)&stru_830620.__pad_DFC[480], 0, (CampaignScore *)g_Str_File_wonline_cpp, 26788); /*0x79bc3b*/
    goto LABEL_34; /*0x79bc3b*/
  }
LABEL_35:
  DeleteAndZero((int)&v11.uniqueId); /*0x79bc64*/
  return 0; /*0x79bb0a*/
}


// ==== 0x0079BC80  FindBuddyWOL  this=-  sig=ida-proto ====
bool WOL_FindBuddy()
{
  bool result; // al
  int v1; // esi
  int *v2; // esi
  int v3; // esi
  int v4; // esi
  const void *v5; // esi
  signed int v6; // ebx
  signed int v7; // eax
  int v8; // ebp
  char *v9; // eax
  char v10; // bl
  void *v11; // [esp+10h] [ebp-21Ch] BYREF
  _BYTE v12[268]; // [esp+14h] [ebp-218h] BYREF
  char v13[268]; // [esp+120h] [ebp-10Ch] BYREF

  if ( !String::Length(&g_WOL_LoginObject) ) /*0x79bc8f*/
    return 0; /*0x79bca4*/
  if ( !dword_B76994 ) /*0x79bcac*/
    return 0; /*0x79bcac*/
  v1 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
  if ( !v1 ) /*0x79bcd3*/
    return 0; /*0x79bcd3*/
  while ( 1 ) /*0x79bcdc*/
  {
    result = String::Compare((const char **)v1, &g_WOL_LoginObject); /*0x79bcdc*/
    if ( result ) /*0x79bce3*/
      break; /*0x79bce3*/
    v1 = *(_DWORD *)(v1 + 8); /*0x79bce5*/
    if ( !v1 ) /*0x79bcea*/
      return result; /*0x79bcea*/
  }
  v2 = (int *)(v1 + 4); /*0x79bcfb*/
  if ( !v2 ) /*0x79bd00*/
    return 0; /*0x79bd00*/
  v3 = *v2; /*0x79bd02*/
  if ( v3 == 4 ) /*0x79bd07*/
    return 1; /*0x79bd15*/
  if ( v3 != 5 ) /*0x79bd19*/
    return 0; /*0x79bd27*/
  if ( !dword_B7660C ) /*0x79bd2f*/
    return 0; /*0x79bd2f*/
  v4 = *((_DWORD *)g_WOL_EventQueue + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
  if ( !v4 ) /*0x79bd5a*/
    return 0; /*0x79bd5a*/
  while ( 1 ) /*0x79bd67*/
  {
    result = String::Compare((const char **)v4, &g_WOL_LoginObject); /*0x79bd67*/
    if ( result ) /*0x79bd6e*/
      break; /*0x79bd6e*/
    v4 = *(_DWORD *)(v4 + 272); /*0x79bd70*/
    if ( !v4 ) /*0x79bd78*/
      return result; /*0x79bd78*/
  }
  v5 = (const void *)(v4 + 4); /*0x79bd8d*/
  if ( v5 ) /*0x79bd92*/
    qmemcpy(v13, v5, sizeof(v13)); /*0x79bda0*/
  String::Assign((char **)&v11, &v13[52]); /*0x79bdae*/
  v6 = 0; /*0x79bdbe*/
  memset(v12, 0, sizeof(v12)); /*0x79bdc0*/
  v7 = g_WOL_ChatState; /*0x79bdc2*/
  if ( (int)g_WOL_ChatState <= 0 ) /*0x79bdc9*/
  {
LABEL_27:
    memset(v12, 0, sizeof(v12)); /*0x79be1f*/
    DeleteAndZero(&v11); /*0x79be25*/
    return 0; /*0x79be36*/
  }
  v8 = 0; /*0x79bdcb*/
  while ( 1 ) /*0x79bdcd*/
  {
    if ( v8 >= 0 && v6 < v7 ) /*0x79bdd3*/
      qmemcpy(v12, (char *)g_WOL_ConnectionHandler + v8, sizeof(v12)); /*0x79bde7*/
    v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = g_WOL_ChatState; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)g_WOL_ChatState ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, MEMORY[0xAC10C8] != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}


// ==== 0x0079BF50  ObjectClass::method_79BF50  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_79BF50(HWND hDlg)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  ObjectClass *v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]

  v7 = String::Length(&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem(hDlg, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem(hDlg, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length(&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !dword_B76994 ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = (ObjectClass *)*((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bfd4*/
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !String::Compare((const char **)v4, &g_WOL_LoginObject) ) /*0x79bfe9*/
    {
      v4 = *(ObjectClass **)&v4->__pad_0[8]; /*0x79bfeb*/
      if ( !v4 ) /*0x79bff0*/
      {
        v9 = 0; /*0x79bff2*/
        goto LABEL_12; /*0x79bff7*/
      }
    }
    if ( v4 != (ObjectClass *)-4 && *(_DWORD *)&v4->__pad_0[4] > 2u ) /*0x79c008*/
      v9 = 1; /*0x79c016*/
    else
LABEL_10:
      v9 = 0; /*0x79c00f*/
  }
  else
  {
    v9 = 0; /*0x79bfa5*/
  }
LABEL_12:
  v5 = GetDlgItem(hDlg, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}


// ==== 0x0079C040  ObjectClass::ShowUserProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall ShowUserProfileWOL(HWND hDlg)
{
  HWND DlgItem; // ebx
  HWND v3; // ebp
  wchar_t *StringCSF; // eax
  CampaignScore *v5; // ebx
  unsigned int v6; // eax
  wchar_t *v7; // ebp
  CampaignScore *v8; // eax
  HWND v9; // eax
  GameSetup *v10; // eax
  CampaignScore *v11; // eax
  GameSetup *v12; // eax
  CampaignScore *v13; // eax
  GameSetup *v14; // eax
  CampaignScore *v15; // eax
  GameSetup *v16; // eax
  CampaignScore *v17; // eax
  GameSetup *v18; // eax
  CampaignScore *v19; // eax
  void **v20; // ecx
  wchar_t *v21; // eax
  CampaignScore *v22; // eax
  CampaignScore *v23; // eax
  CampaignScore *v24; // eax
  CampaignScore *v25; // eax
  CampaignScore *v26; // eax
  char *v27; // [esp-4h] [ebp-A0h]
  CampaignScore *v28; // [esp+0h] [ebp-9Ch]
  wchar_t *v29; // [esp+10h] [ebp-8Ch] BYREF
  HWND v30; // [esp+14h] [ebp-88h] BYREF
  HWND v31; // [esp+18h] [ebp-84h]
  wchar_t *v32; // [esp+1Ch] [ebp-80h] BYREF
  HWND v33; // [esp+20h] [ebp-7Ch]
  HWND hWnd; // [esp+24h] [ebp-78h]
  HWND v35; // [esp+28h] [ebp-74h]
  int v36; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v37[27]; // [esp+30h] [ebp-6Ch] BYREF

  DlgItem = GetDlgItem(hDlg, 1775); /*0x79c05a*/
  v3 = GetDlgItem(hDlg, 1780); /*0x79c064*/
  v30 = v3; /*0x79c06c*/
  hWnd = GetDlgItem(hDlg, 1781); /*0x79c078*/
  v33 = GetDlgItem(hDlg, 1776); /*0x79c084*/
  v35 = GetDlgItem(hDlg, 1777); /*0x79c090*/
  v31 = GetDlgItem(hDlg, 1793); /*0x79c09b*/
  if ( String::Length((const char **)&g_WOL_LoginObject) ) /*0x79c09f*/
  {
    StringCSF = GetStringCSF(aGuiUserprofile, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26882); /*0x79c133*/
    WideString::Assign(&v32, (CampaignScore *)StringCSF); /*0x79c13d*/
    v5 = (CampaignScore *)WideString::Length((const wchar_t **)&v32); /*0x79c150*/
    v6 = String::Length((const char **)&g_WOL_LoginObject); /*0x79c152*/
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v5 + v6) + 2); /*0x79c16b*/
    v27 = String::GetOrEmpty((char **)&g_WOL_LoginObject); /*0x79c176*/
    v8 = WideString::GetOrEmpty(&v32); /*0x79c177*/
    swprintf(v7, (const size_t)v8, (const wchar_t *const)v27, v28); /*0x79c17e*/
    v9 = GetDlgItem(hDlg, 1775); /*0x79c18c*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)v7); /*0x79c19d*/
    __3_YAXPAX_Z(v7); /*0x79c1a0*/
    memset(v37, 0, sizeof(v37)); /*0x79c1b3*/
    String::ToLowerCopy((const char **)&g_WOL_LoginObject, (ObjectClass *)&v36); /*0x79c1bf*/
    v29 = 0; /*0x79c1d3*/
    if ( HashTable::LookupString(&dword_B77D80, (const char **)&v36, &v29) ) /*0x79c1db*/
    {
      if ( v29 ) /*0x79c1ee*/
        qmemcpy(v37, v29, sizeof(v37)); /*0x79c1f9*/
      v10 = (GameSetup *)FormatWideString(&v29, v37[7]); /*0x79c203*/
      v11 = WideString::GetOrEmpty_Alt((wchar_t **)v10); /*0x79c20a*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v11); /*0x79c21c*/
      DeleteAndZero::Alt((void **)&v29); /*0x79c222*/
      v12 = (GameSetup *)FormatWideString((wchar_t **)&v30, v37[4]); /*0x79c22f*/
      v13 = WideString::GetOrEmpty_Alt((wchar_t **)v12); /*0x79c236*/
      SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)v13); /*0x79c248*/
      DeleteAndZero::Alt((void **)&v30); /*0x79c24e*/
      v14 = (GameSetup *)FormatWideString((wchar_t **)&v30, v37[2]); /*0x79c25b*/
      v15 = WideString::GetOrEmpty_Alt((wchar_t **)v14); /*0x79c262*/
      SendMessageA(v33, 0x4B2u, 0, (LPARAM)v15); /*0x79c274*/
      DeleteAndZero::Alt((void **)&v30); /*0x79c27a*/
      v16 = (GameSetup *)FormatWideString((wchar_t **)&v30, v37[3]); /*0x79c287*/
      v17 = WideString::GetOrEmpty_Alt((wchar_t **)v16); /*0x79c28e*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)v17); /*0x79c2a0*/
      DeleteAndZero::Alt((void **)&v30); /*0x79c2a6*/
      v18 = (GameSetup *)FormatWideString((wchar_t **)&v30, v37[8]); /*0x79c2b3*/
      v19 = WideString::GetOrEmpty_Alt((wchar_t **)v18); /*0x79c2ba*/
      SendMessageA(v31, 0x4B2u, 0, (LPARAM)v19); /*0x79c2cc*/
      v20 = (void **)&v30; /*0x79c2ce*/
    }
    else
    {
      v21 = GetStringCSF(&unk_84A16C, 0, (CampaignScore *)g_Str_File_wonline_cpp, 26899); /*0x79c2e8*/
      WideString::Assign(&v29, (CampaignScore *)v21); /*0x79c2f2*/
      v22 = WideString::GetOrEmpty_Alt(&v29); /*0x79c2fb*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v22); /*0x79c30d*/
      v23 = WideString::GetOrEmpty_Alt(&v29); /*0x79c313*/
      SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)v23); /*0x79c325*/
      v24 = WideString::GetOrEmpty_Alt(&v29); /*0x79c32b*/
      SendMessageA(v33, 0x4B2u, 0, (LPARAM)v24); /*0x79c33d*/
      v25 = WideString::GetOrEmpty_Alt(&v29); /*0x79c343*/
      SendMessageA(v35, 0x4B2u, 0, (LPARAM)v25); /*0x79c355*/
      v26 = WideString::GetOrEmpty_Alt(&v29); /*0x79c35b*/
      SendMessageA(v31, 0x4B2u, 0, (LPARAM)v26); /*0x79c36d*/
      v20 = (void **)&v29; /*0x79c36f*/
    }
    DeleteAndZero::Alt(v20); /*0x79c373*/
    DeleteAndZero((int)&v36); /*0x79c37c*/
    DeleteAndZero::Alt((void **)&v32); /*0x79c385*/
  }
  else
  {
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c0ba*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c0c9*/
    SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c0dc*/
    SendMessageA(v33, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c0ef*/
    SendMessageA(v35, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c102*/
    SendMessageA(v31, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]); /*0x79c115*/
  }
}


// ==== 0x0079C3A0  ObjectClass::Network_Cleanup  this=ObjectClass  sig=csp ====
unsigned int sub_79C3A0()
{
  unsigned int result; // eax
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  char v6[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( String::Length(&g_WOL_AuthObject) ) /*0x79c3a8*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c3d1*/
  }
  result = g_WOL_RequestManager; /*0x79c3d6*/
  if ( g_WOL_RequestManager ) /*0x79c3dd*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79c3e6*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c3f7*/
      v1 = 0; /*0x79c401*/
      if ( g_WOL_RequestManager ) /*0x79c405*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79c40b*/
          v1 = g_WOL_RequestManager - 1; /*0x79c40d*/
        DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79c419*/
        memcpy( /*0x79c442*/
          (char *)g_WOL_SessionID + 4 * v1,
          (char *)g_WOL_SessionID + 4 * v1 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v1 + 1)));
        --g_WOL_RequestManager; /*0x79c456*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79c460*/
        {
          v2 = dword_B76984 / 2; /*0x79c469*/
          if ( dword_B76984 / 2 < 10 ) /*0x79c46e*/
            v2 = 10; /*0x79c470*/
          if ( v2 < dword_B76984 ) /*0x79c477*/
          {
            v3 = __2_YAPAXI_Z(4 * v2); /*0x79c482*/
            v4 = g_WOL_SessionID; /*0x79c487*/
            v5 = v3; /*0x79c492*/
            if ( g_WOL_SessionID ) /*0x79c494*/
            {
              qmemcpy(v3, g_WOL_SessionID, 4 * g_WOL_RequestManager); /*0x79c49e*/
              v4 = g_WOL_SessionID; /*0x79c4a0*/
            }
            __3_YAXPAX_Z(v4); /*0x79c4a7*/
            g_WOL_SessionID = v5; /*0x79c4af*/
            dword_B76984 = v2; /*0x79c4b5*/
          }
        }
      }
    }
    g_WOL_ParseState = time(0); /*0x79c4c3*/
    memset(v6, 0, sizeof(v6)); /*0x79c4d3*/
    strcpy(&v6[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v6); /*0x79c512*/
  }
  return result; /*0x79c518*/
}


// ==== 0x0079C520  MapSeed::CheckName  this=ObjectClass  sig=csp ====
char __thiscall MapSeed_CheckName(const char **this)
{
  char **v2; // eax
  bool v3; // bl
  int v5; // esi
  char **v6; // [esp-8h] [ebp-18h]
  void *v7; // [esp+4h] [ebp-Ch] BYREF
  void *v8; // [esp+8h] [ebp-8h] BYREF
  void *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr((char **)&v7, this); /*0x79c52b*/
  String::ToLower((const char **)&v7); /*0x79c534*/
  if ( !String::Length(this) /*0x79c5aa*/
    || (v6 = String::ToLowerCopy((const char **)&g_WebBrowser, (char **)&v9),
        v2 = String::ToLowerCopy((const char **)&v7, (char **)&v8),
        v3 = String::Compare((const char **)v2, (const char **)v6),
        DeleteAndZero(&v8),
        DeleteAndZero(&v9),
        v3)
    || (unsigned __int8)ValidateStringContains(asc_84BA18) )
  {
    DeleteAndZero(&v7); /*0x79c5b7*/
    return 0; /*0x79c5bc*/
  }
  else
  {
    v5 = 0; /*0x79c5c8*/
    if ( g_WindowManager <= 0 ) /*0x79c5cc*/
    {
LABEL_12:
      DeleteAndZero(&v7); /*0x79c624*/
      return 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8); /*0x79c5d2*/
        if ( v5 >= 0 && v5 < g_WindowManager ) /*0x79c5e1*/
          String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v5); /*0x79c5f1*/
        String::ToLower((const char **)&v8); /*0x79c5fa*/
        if ( String::Compare((const char **)&v8, (const char **)&v7) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero(&v8); /*0x79c615*/
        if ( ++v5 >= g_WindowManager ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero(&v8); /*0x79c634*/
      DeleteAndZero(&v7); /*0x79c63d*/
      return 0; /*0x79c642*/
    }
  }
}


// ==== 0x0079C650  MapSeed::InsertName  this=MapSeed  sig=csp ====
void __thiscall MapSeed::InsertName(const char **this)
{
  int v2; // eax
  int v3; // esi
  char **v4; // ecx
  int v5; // eax
  int v6; // esi
  char **v7; // ecx
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  void *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((char **)&v11, this); /*0x79c668*/
    v2 = g_WindowManager; /*0x79c66d*/
    v3 = g_WindowManager; /*0x79c672*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c685*/
      v2 = g_WindowManager; /*0x79c68a*/
    }
    if ( v2 >= dword_B73AAC ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c69c*/
      v2 = g_WindowManager; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v3 + 4, (char *)g_WOL_LoginQueue + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79c6c5*/
      v2 = g_WindowManager; /*0x79c6ca*/
    }
    v4 = (char **)((char *)g_WOL_LoginQueue + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, (const char **)&v11); /*0x79c6e4*/
      v2 = g_WindowManager; /*0x79c6e9*/
    }
    g_WindowManager = v2 + 1; /*0x79c6ef*/
    v5 = g_WOL_RequestManager; /*0x79c6f4*/
    v6 = g_WOL_RequestManager; /*0x79c6f9*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c70c*/
      v5 = g_WOL_RequestManager; /*0x79c711*/
    }
    if ( v5 >= dword_B76984 ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c723*/
      v5 = g_WOL_RequestManager; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v6 + 4, (char *)g_WOL_SessionID + 4 * v6, 4 * (v5 + 0x3FFFFFFF * v6)); /*0x79c74c*/
      v5 = g_WOL_RequestManager; /*0x79c751*/
    }
    v7 = (char **)((char *)g_WOL_SessionID + 4 * v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, (const char **)&v11); /*0x79c76b*/
      v5 = g_WOL_RequestManager; /*0x79c770*/
    }
    g_WOL_RequestManager = v5 + 1; /*0x79c776*/
    v8 = g_WOL_BuddyList; /*0x79c77b*/
    v9 = g_WOL_BuddyList; /*0x79c780*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = g_WOL_BuddyList; /*0x79c798*/
    }
    if ( v8 >= dword_B779B4 ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = g_WOL_BuddyList; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v9 + 4, (char *)g_WOL_ChannelMgr + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79c7d3*/
      v8 = g_WOL_BuddyList; /*0x79c7d8*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, (const char **)&v11); /*0x79c7f2*/
      v8 = g_WOL_BuddyList; /*0x79c7f7*/
    }
    g_WOL_BuddyList = v8 + 1; /*0x79c802*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero(&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79c830*/
    }
    if ( g_WOL_RequestManager ) /*0x79c83c*/
    {
      if ( g_WOL_RequestManager > 0 ) /*0x79c83e*/
      {
        String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79c84b*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79c857*/
      }
      g_WOL_ParseState = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79c8a1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }
}


// ==== 0x0079C8D0  ObjectClass::QueueWOLAuthRequest  this=ObjectClass  sig=csp ====
void __thiscall QueueWOLAuthRequest(char **this)
{
  char *v2; // eax
  int v3; // eax
  int v4; // esi
  char **v5; // ecx
  int v6; // eax
  int v7; // esi
  char **v8; // ecx
  int v9; // eax
  int v10; // esi
  char **v11; // ecx
  void *v12; // [esp+10h] [ebp-DCh] BYREF
  char v13[108]; // [esp+14h] [ebp-D8h] BYREF
  char v14[108]; // [esp+80h] [ebp-6Ch] BYREF

  if ( MapSeed::CheckName((const char **)this) ) /*0x79c8d9*/
  {
    memset(v13, 0, sizeof(v13)); /*0x79c8f2*/
    v2 = String::GetOrEmpty_Alt(this); /*0x79c8f8*/
    strncpy(&v13[36], v2, 9u); /*0x79c903*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 224))(MEMORY[0xAC116C], v13); /*0x79c918*/
    if ( !MapSeed::CheckName((const char **)this) ) /*0x79c927*/
    {
LABEL_35:
      SendGameListWOL(); /*0x79cb8b*/
      return; /*0x79cb8b*/
    }
    String::AssignFromPtr((char **)&v12, (const char **)this); /*0x79c932*/
    v3 = g_WindowManager; /*0x79c937*/
    v4 = g_WindowManager; /*0x79c93c*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79c948*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c94f*/
      v3 = g_WindowManager; /*0x79c954*/
    }
    if ( v3 >= dword_B73AAC ) /*0x79c95f*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79c966*/
      v3 = g_WindowManager; /*0x79c96b*/
    }
    if ( v4 < v3 ) /*0x79c972*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v4 + 4, (char *)g_WOL_LoginQueue + 4 * v4, 4 * (v3 + 0x3FFFFFFF * v4)); /*0x79c98f*/
      v3 = g_WindowManager; /*0x79c994*/
    }
    v5 = (char **)((char *)g_WOL_LoginQueue + 4 * v4); /*0x79c9a2*/
    if ( v5 ) /*0x79c9a7*/
    {
      String::AssignFromPtr(v5, (const char **)&v12); /*0x79c9ae*/
      v3 = g_WindowManager; /*0x79c9b3*/
    }
    g_WindowManager = v3 + 1; /*0x79c9b9*/
    v6 = g_WOL_RequestManager; /*0x79c9be*/
    v7 = g_WOL_RequestManager; /*0x79c9c3*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79c9cf*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c9d6*/
      v6 = g_WOL_RequestManager; /*0x79c9db*/
    }
    if ( v6 >= dword_B76984 ) /*0x79c9e6*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79c9ed*/
      v6 = g_WOL_RequestManager; /*0x79c9f2*/
    }
    if ( v7 < v6 ) /*0x79c9f9*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v7 + 4, (char *)g_WOL_SessionID + 4 * v7, 4 * (v6 + 0x3FFFFFFF * v7)); /*0x79ca16*/
      v6 = g_WOL_RequestManager; /*0x79ca1b*/
    }
    v8 = (char **)((char *)g_WOL_SessionID + 4 * v7); /*0x79ca29*/
    if ( v8 ) /*0x79ca2e*/
    {
      String::AssignFromPtr(v8, (const char **)&v12); /*0x79ca35*/
      v6 = g_WOL_RequestManager; /*0x79ca3a*/
    }
    g_WOL_RequestManager = v6 + 1; /*0x79ca40*/
    v9 = g_WOL_BuddyList; /*0x79ca45*/
    v10 = g_WOL_BuddyList; /*0x79ca4a*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79ca56*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca5d*/
      v9 = g_WOL_BuddyList; /*0x79ca62*/
    }
    if ( v9 >= dword_B779B4 ) /*0x79ca6d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca74*/
      v9 = g_WOL_BuddyList; /*0x79ca79*/
    }
    if ( v10 < v9 ) /*0x79ca80*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v10 + 4, (char *)g_WOL_ChannelMgr + 4 * v10, 4 * (v9 + 0x3FFFFFFF * v10)); /*0x79ca9d*/
      v9 = g_WOL_BuddyList; /*0x79caa2*/
    }
    v11 = (char **)((char *)g_WOL_ChannelMgr + 4 * v10); /*0x79cab0*/
    if ( v11 ) /*0x79cab5*/
    {
      String::AssignFromPtr(v11, (const char **)&v12); /*0x79cabc*/
      v9 = g_WOL_BuddyList; /*0x79cac1*/
    }
    g_WOL_BuddyList = v9 + 1; /*0x79cacc*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79cad1*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79caef*/
      {
LABEL_34:
        DeleteAndZero(&v12); /*0x79cb82*/
        goto LABEL_35; /*0x79cb86*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79cafa*/
    }
    if ( g_WOL_RequestManager ) /*0x79cb06*/
    {
      if ( g_WOL_RequestManager > 0 ) /*0x79cb08*/
      {
        String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79cb15*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79cb21*/
      }
      g_WOL_ParseState = time(0); /*0x79cb2d*/
      memset(v14, 0, sizeof(v14)); /*0x79cb3d*/
      strcpy(&v14[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79cb6d*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v14); /*0x79cb7f*/
    }
    goto LABEL_34; /*0x79cb7f*/
  }
}


// ==== 0x0079CBA0  RemoveWOLPlayerLogin  this=-  sig=csp ====
void __fastcall RemoveWOLPlayerLogin(const char **a1)
{
  const char **v1; // ebp
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  void *v6; // ebp
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // ebx
  double v11; // st7
  int v12; // esi
  char *v13; // eax
  void *v14; // [esp+8h] [ebp-188h] BYREF
  __int64 v15; // [esp+Ch] [ebp-184h]
  void *v16; // [esp+14h] [ebp-17Ch] BYREF
  char v17[108]; // [esp+18h] [ebp-178h] BYREF
  _BYTE v18[268]; // [esp+84h] [ebp-10Ch] BYREF

  v1 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  LODWORD(v15) = a1; /*0x79cbb1*/
  if ( g_WindowManager > 0 ) /*0x79cbb7*/
  {
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v16); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < g_WindowManager ) /*0x79cbd0*/
        String::Reassign((char **)&v16, (const char **)g_WOL_LoginQueue + v2); /*0x79cbdf*/
      if ( String::Compare((const char **)&v16, v1) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero(&v16); /*0x79cbf6*/
      if ( ++v2 >= g_WindowManager ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( g_WindowManager ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= g_WindowManager ) /*0x79cc25*/
        v2 = g_WindowManager - 1; /*0x79cc27*/
      DeleteAndZero((void **)g_WOL_LoginQueue + v2); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (char *)g_WOL_LoginQueue + 4 * v2,
        (char *)g_WOL_LoginQueue + 4 * v2 + 4,
        4 * (g_WindowManager + 0x3FFFFFFF * (v2 + 1)));
      --g_WindowManager; /*0x79cc70*/
      if ( 3 * g_WindowManager <= dword_B73AAC ) /*0x79cc7a*/
      {
        v3 = dword_B73AAC / 2; /*0x79cc83*/
        if ( dword_B73AAC / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < dword_B73AAC ) /*0x79cc91*/
        {
          v4 = __2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          v5 = g_WOL_LoginQueue; /*0x79cca0*/
          v6 = v4; /*0x79ccab*/
          if ( g_WOL_LoginQueue ) /*0x79ccad*/
          {
            qmemcpy(v4, g_WOL_LoginQueue, 4 * g_WindowManager); /*0x79ccb7*/
            v5 = g_WOL_LoginQueue; /*0x79ccb9*/
          }
          __3_YAXPAX_Z(v5); /*0x79ccc0*/
          g_WOL_LoginQueue = v6; /*0x79ccc5*/
          v1 = (const char **)v15; /*0x79cccb*/
          dword_B73AAC = v3; /*0x79ccd2*/
        }
      }
    }
    String::AssignFromPtr((char **)&v14, v1); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry(&v14, v18); /*0x79ccf4*/
    if ( !dword_B76994 ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    v15 = (unsigned int)(dword_B76994 - 1); /*0x79cd0d*/
    *(float *)&v15 = (double)v15 / (double)dword_B76998; /*0x79cd2a*/
    v7 = dword_B769A8(&v14) & ((1 << dword_B7699C) - 1); /*0x79cd48*/
    v8 = *((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( String::Compare(*((const char ***)g_WOL_AccountInfo + v7), (const char **)&v14) ) /*0x79cd5c*/
    {
      v9 = (_DWORD *)*((_DWORD *)g_WOL_AccountInfo + v7); /*0x79cd6a*/
      v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*((void ***)g_WOL_AccountInfo + v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      v11 = *(float *)&v15; /*0x79cd8a*/
      *((_DWORD *)g_WOL_AccountInfo + v7) = v10; /*0x79cd8e*/
      --dword_B76994; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !String::Compare((const char **)v12, (const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = *(_DWORD *)(v12 + 8); /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8); /*0x79cdd0*/
        --dword_B76994; /*0x79cddc*/
        DeleteAndZero((void **)v12); /*0x79cde6*/
        __3_YAXPAX_Z((void *)v12); /*0x79cdec*/
      }
LABEL_32:
      if ( *(float *)&v15 > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79ce0a*/
LABEL_34:
    memset(v17, 0, sizeof(v17)); /*0x79ce0f*/
    v13 = String::GetOrEmpty_Alt((char **)v1); /*0x79ce20*/
    strncpy(&v17[36], v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 228))(MEMORY[0xAC116C], v17); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero(&v16); /*0x79ce53*/
  }
}


// ==== 0x0079CE70  ObjectClass::RefreshChannelListWOL  this=ObjectClass  sig=csp ====
unsigned int WOL_RefreshChannelList()
{
  HANDLE *v0; // esi
  unsigned int result; // eax
  int i; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi
  char **v6; // ecx
  int v7; // esi
  void *v8; // [esp+Ch] [ebp-70h] BYREF
  char v9[108]; // [esp+10h] [ebp-6Ch] BYREF

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v0 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v0++); /*0x79ceab*/
  while ( (int)v0 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79ceea*/
    DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79cef4*/
  v3 = 0; /*0x79cf08*/
  for ( g_WOL_RequestManager = 0; v3 < g_WindowManager; ++v3 ) /*0x79cf16*/
  {
    unknown_libname_73(&v8); /*0x79cf20*/
    if ( v3 >= 0 && v3 < g_WindowManager ) /*0x79cf2f*/
      String::Reassign((char **)&v8, (const char **)g_WOL_LoginQueue + v3); /*0x79cf3f*/
    v4 = g_WOL_RequestManager; /*0x79cf44*/
    v5 = g_WOL_RequestManager; /*0x79cf49*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf5c*/
      v4 = g_WOL_RequestManager; /*0x79cf61*/
    }
    if ( v4 >= dword_B76984 ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79cf73*/
      v4 = g_WOL_RequestManager; /*0x79cf78*/
    }
    if ( v5 < v4 ) /*0x79cf7f*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v5 + 4, (char *)g_WOL_SessionID + 4 * v5, 4 * (v4 + 0x3FFFFFFF * v5)); /*0x79cf9c*/
      v4 = g_WOL_RequestManager; /*0x79cfa1*/
    }
    v6 = (char **)((char *)g_WOL_SessionID + 4 * v5); /*0x79cfaf*/
    if ( v6 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v6, (const char **)&v8); /*0x79cfbb*/
      v4 = g_WOL_RequestManager; /*0x79cfc0*/
    }
    g_WOL_RequestManager = v4 + 1; /*0x79cfca*/
    DeleteAndZero(&v8); /*0x79cfcf*/
  }
  if ( String::Length(&g_WOL_AuthObject) ) /*0x79cfe7*/
  {
    result = time(0) - g_WOL_ParseState; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79d010*/
  }
  result = g_WOL_RequestManager; /*0x79d015*/
  if ( g_WOL_RequestManager ) /*0x79d01c*/
  {
    if ( g_WOL_RequestManager > 0 ) /*0x79d022*/
    {
      String::Reassign((char **)&g_WOL_AuthObject, (const char **)g_WOL_SessionID); /*0x79d02f*/
      v7 = 0; /*0x79d039*/
      if ( g_WOL_RequestManager ) /*0x79d03d*/
      {
        if ( g_WOL_RequestManager <= 0 ) /*0x79d03f*/
          v7 = g_WOL_RequestManager - 1; /*0x79d041*/
        Object::DtorWithDelete((void **)g_WOL_SessionID + v7, 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          (char *)g_WOL_SessionID + 4 * v7,
          (char *)g_WOL_SessionID + 4 * v7 + 4,
          4 * (g_WOL_RequestManager + 0x3FFFFFFF * (v7 + 1)));
        --g_WOL_RequestManager; /*0x79d086*/
        if ( 3 * g_WOL_RequestManager <= dword_B76984 ) /*0x79d095*/
          VectorClass::Shrink(&g_WOL_RequestManager); /*0x79d09c*/
      }
    }
    g_WOL_ParseState = time(0); /*0x79d0a8*/
    memset(v9, 0, sizeof(v9)); /*0x79d0b8*/
    strcpy(&v9[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79d0e5*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v9); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}


// ==== 0x0079D110  ObjectClass::SendGameListWOL  this=ObjectClass  sig=csp ====
void WOL_SendGameList()
{
  int v0; // esi
  int v1; // esi
  int v2; // ebx
  void *v3; // eax
  void *v4; // esi
  void *v5; // ebp
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v10; // [esp+20h] [ebp-20h]
  int v11; // [esp+2Ch] [ebp-14h]
  void *v12; // [esp+34h] [ebp-Ch] BYREF
  void *v13; // [esp+38h] [ebp-8h] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v0 = g_WOL_BuddyList; /*0x79d114*/
  if ( g_WOL_BuddyList <= 10 ) /*0x79d11d*/
  {
    if ( !g_WOL_BuddyList ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v0 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v12); /*0x79d132*/
  if ( v0 > 0 ) /*0x79d139*/
  {
    v14 = v0; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13); /*0x79d14a*/
      if ( g_WOL_BuddyList > 0 ) /*0x79d156*/
      {
        String::Reassign((char **)&v13, (const char **)g_WOL_ChannelMgr); /*0x79d166*/
        v1 = 0; /*0x79d170*/
        if ( g_WOL_BuddyList ) /*0x79d174*/
        {
          if ( g_WOL_BuddyList <= 0 ) /*0x79d17a*/
            v1 = g_WOL_BuddyList - 1; /*0x79d17c*/
          DeleteAndZero((void **)g_WOL_ChannelMgr + v1); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (char *)g_WOL_ChannelMgr + 4 * v1,
            (char *)g_WOL_ChannelMgr + 4 * v1 + 4,
            4 * (g_WOL_BuddyList + 0x3FFFFFFF * (v1 + 1)));
          --g_WOL_BuddyList; /*0x79d1c5*/
          if ( 3 * g_WOL_BuddyList <= dword_B779B4 ) /*0x79d1cf*/
          {
            v2 = dword_B779B4 / 2; /*0x79d1d8*/
            if ( dword_B779B4 / 2 < 10 ) /*0x79d1dd*/
              v2 = 10; /*0x79d1df*/
            if ( v2 < dword_B779B4 ) /*0x79d1e6*/
            {
              v3 = __2_YAPAXI_Z(4 * v2); /*0x79d1f0*/
              v4 = g_WOL_ChannelMgr; /*0x79d1f5*/
              v5 = v3; /*0x79d200*/
              if ( g_WOL_ChannelMgr ) /*0x79d202*/
              {
                qmemcpy(v3, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d20c*/
                v4 = g_WOL_ChannelMgr; /*0x79d20e*/
              }
              __3_YAXPAX_Z(v4); /*0x79d215*/
              g_WOL_ChannelMgr = v5; /*0x79d21d*/
              dword_B779B4 = v2; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length((const char **)&v12) ) /*0x79d22d*/
        String::Append((const char **)&v12, MEMORY[0x8318B8]); /*0x79d23f*/
      String::Append2((const char **)&v12, (char **)&v13); /*0x79d24d*/
      DeleteAndZero(&v13); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v6 = *(_DWORD *)MEMORY[0xAC1170]; /*0x79d27c*/
  v10 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v7 = String::GetOrEmpty((char **)&v12); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x79d2a3*/
    MEMORY[0xAC1170],
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v7,
    v10,
    -1,
    0,
    0);
  v8 = *(_DWORD *)MEMORY[0xAC1170]; /*0x79d2b7*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v9 = String::GetOrEmpty((char **)&v12); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, void *, int, char *, int))(v8 + 56))( /*0x79d2d6*/
    MEMORY[0xAC1170],
    &g_WOL_ConnectFlag,
    g_WOL_GameConfig,
    v9,
    v11);
  DeleteAndZero(&v12); /*0x79d2dd*/
}


// ==== 0x0079D2F0  ObjectClass::RefreshGameListWOL  this=ObjectClass  sig=csp ====
void WOL_RefreshGameList()
{
  int i; // esi
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  void *v5; // ebx
  void *v6; // eax
  int v7; // ebp
  void *v8; // ebx
  void *v9; // eax
  char **v10; // ecx
  int v11; // [esp+8h] [ebp-Ch]
  void *v12; // [esp+Ch] [ebp-8h] BYREF
  int j; // [esp+10h] [ebp-4h]

  for ( i = 0; i < g_WOL_BuddyList; ++i ) /*0x79d2fe*/
    DeleteAndZero((void **)g_WOL_ChannelMgr + i); /*0x79d308*/
  v1 = 0; /*0x79d31c*/
  g_WOL_BuddyList = 0; /*0x79d320*/
  for ( j = 0; v1 < g_WindowManager; j = v1 ) /*0x79d32e*/
  {
    unknown_libname_73(&v12); /*0x79d33a*/
    if ( v1 >= 0 && v1 < g_WindowManager ) /*0x79d349*/
      String::Reassign((char **)&v12, (const char **)g_WOL_LoginQueue + v1); /*0x79d359*/
    v2 = g_WOL_BuddyList; /*0x79d35e*/
    v3 = g_WOL_BuddyList; /*0x79d363*/
    v11 = g_WOL_BuddyList; /*0x79d367*/
    v4 = dword_B779B4; /*0x79d371*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79d379*/
    {
      v4 = 2 * g_WOL_BuddyList; /*0x79d383*/
      if ( 2 * g_WOL_BuddyList < 10 ) /*0x79d389*/
        v4 = 10; /*0x79d38b*/
      v5 = __2_YAPAXI_Z(4 * v4); /*0x79d39f*/
      memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x79d3ad*/
      v6 = g_WOL_ChannelMgr; /*0x79d3b6*/
      if ( g_WOL_ChannelMgr ) /*0x79d3bd*/
      {
        qmemcpy(v5, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d3c9*/
        v6 = g_WOL_ChannelMgr; /*0x79d3cb*/
        v3 = v11; /*0x79d3d0*/
      }
      __3_YAXPAX_Z(v6); /*0x79d3d5*/
      v2 = g_WOL_BuddyList; /*0x79d3da*/
      v1 = j; /*0x79d3df*/
      g_WOL_ChannelMgr = v5; /*0x79d3e6*/
      dword_B779B4 = v4; /*0x79d3ec*/
    }
    if ( v2 >= v4 ) /*0x79d3f4*/
    {
      v7 = 2 * v2; /*0x79d3f6*/
      if ( 2 * v2 < 10 ) /*0x79d3fc*/
        v7 = 10; /*0x79d3fe*/
      v8 = __2_YAPAXI_Z(4 * v7); /*0x79d412*/
      memset(v8, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x79d420*/
      v9 = g_WOL_ChannelMgr; /*0x79d429*/
      if ( g_WOL_ChannelMgr ) /*0x79d430*/
      {
        qmemcpy(v8, g_WOL_ChannelMgr, 4 * g_WOL_BuddyList); /*0x79d43c*/
        v9 = g_WOL_ChannelMgr; /*0x79d43e*/
        v3 = v11; /*0x79d443*/
      }
      __3_YAXPAX_Z(v9); /*0x79d448*/
      v2 = g_WOL_BuddyList; /*0x79d44d*/
      v1 = j; /*0x79d452*/
      g_WOL_ChannelMgr = v8; /*0x79d459*/
      dword_B779B4 = v7; /*0x79d45f*/
    }
    if ( v3 < v2 ) /*0x79d467*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v3 + 4, (char *)g_WOL_ChannelMgr + 4 * v3, 4 * (v2 + 0x3FFFFFFF * v3)); /*0x79d484*/
      v2 = g_WOL_BuddyList; /*0x79d489*/
    }
    v10 = (char **)((char *)g_WOL_ChannelMgr + 4 * v3); /*0x79d497*/
    if ( v10 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v10, (const char **)&v12); /*0x79d4a3*/
      v2 = g_WOL_BuddyList; /*0x79d4a8*/
    }
    g_WOL_BuddyList = v2 + 1; /*0x79d4b2*/
    DeleteAndZero(&v12); /*0x79d4b7*/
    ++v1; /*0x79d4c1*/
  }
  SendGameListWOL(); /*0x79d4d0*/
}


// ==== 0x0079D4E0  ObjectClass::CleanupWOLSession  this=ObjectClass  sig=csp ====
void CleanupWOLSession()
{
  int i; // esi
  int v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ebp
  int v4; // esi
  void **v5; // edi
  unsigned int v6; // eax
  unsigned int j; // ebp
  int v8; // esi
  void **v9; // edi
  int k; // esi
  int v11; // esi
  void *v12; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_WindowManager; ++i ) /*0x79d4ee*/
    DeleteAndZero((void **)g_WOL_LoginQueue + i); /*0x79d4f8*/
  v1 = 0; /*0x79d50c*/
  for ( g_WindowManager = 0; v1 < g_WOL_RequestManager; ++v1 ) /*0x79d516*/
    DeleteAndZero((void **)g_WOL_SessionID + v1); /*0x79d521*/
  v2 = dword_B76998; /*0x79d530*/
  v3 = 0; /*0x79d536*/
  for ( g_WOL_RequestManager = 0; v3 < dword_B76998; v2 = dword_B76998 ) /*0x79d541*/
  {
    v4 = *((_DWORD *)g_WOL_AccountInfo + v3); /*0x79d549*/
    while ( v4 ) /*0x79d54e*/
    {
      v5 = (void **)v4; /*0x79d550*/
      v4 = *(_DWORD *)(v4 + 8); /*0x79d552*/
      DeleteAndZero(v5); /*0x79d55b*/
      __3_YAXPAX_Z(v5); /*0x79d561*/
    }
    *((_DWORD *)g_WOL_AccountInfo + v3++) = 0; /*0x79d573*/
  }
  dword_B76994 = 0; /*0x79d586*/
  if ( v2 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( byte_B769A4 ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove(&g_WOL_AccountInfo); /*0x79d59d*/
    }
    while ( dword_B76998 > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  v6 = g_WOL_PacketQueue; /*0x79d5b1*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79d5ba*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79d5c2*/
    while ( v8 ) /*0x79d5c7*/
    {
      v9 = (void **)v8; /*0x79d5c9*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79d5cb*/
      DeleteAndZero(v9); /*0x79d5d7*/
      __3_YAXPAX_Z(v9); /*0x79d5dd*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79d5ef*/
  }
  dword_B7660C = 0; /*0x79d605*/
  if ( v6 > dword_B76638 ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( byte_B7661C ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79d61b*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79d637*/
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < g_WOL_RequestManager; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((void **)g_WOL_SessionID + k, 0); /*0x79d6a6*/
    v11 = 0; /*0x79d6ba*/
    for ( g_WOL_RequestManager = 0; v11 < g_WindowManager; ++v11 ) /*0x79d6c4*/
    {
      unknown_libname_73(&v12); /*0x79d6ca*/
      DynamicStringArray::Get(&g_WindowManager, (char **)&v12, v11); /*0x79d6da*/
      StringVector::Insert(&g_WOL_RequestManager, (const char **)&v12, g_WOL_RequestManager); /*0x79d6ef*/
      DeleteAndZero(&v12); /*0x79d6f8*/
    }
    Network_Cleanup(); /*0x79d707*/
  }
  RefreshGameListWOL(); /*0x79d70c*/
}


// ==== 0x0079D720  WOLLoginDialogProc  this=-  sig=csp ====
int __stdcall WOLLoginDialogProc(HWND hWnd, unsigned int a2, int a3, HWND a4)
{
  HWND v4; // ebp
  unsigned int v5; // esi
  unsigned int v6; // edi
  int result; // eax
  unsigned int v8; // esi
  unsigned int v9; // esi
  HWND DlgItem; // edi
  HWND v11; // eax
  HWND v12; // esi
  char *v13; // eax
  HWND v14; // ebp
  int v15; // esi
  wchar_t *v16; // eax
  unsigned int v17; // edi
  HWND v18; // eax
  HWND v19; // eax
  BOOL v20; // [esp-4h] [ebp-80h]
  char v21[108]; // [esp+10h] [ebp-6Ch] BYREF

  v4 = a4; /*0x79d729*/
  v5 = a2; /*0x79d731*/
  v6 = a3; /*0x79d739*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79d746*/
  if ( !result ) /*0x79d74d*/
  {
    if ( v5 <= 0x2B ) /*0x79d756*/
    {
      if ( v5 == 43 ) /*0x79d758*/
      {
        Dialog::Resize((char *)v4); /*0x79d7a8*/
        return 1; /*0x79d7b9*/
      }
      v8 = v5 - 2; /*0x79d75a*/
      if ( v8 ) /*0x79d75d*/
      {
        v9 = v8 - 13; /*0x79d763*/
        if ( !v9 ) /*0x79d766*/
        {
          Dialog::DrawBackground(hWnd); /*0x79d782*/
          Dialog::StopBink(hWnd); /*0x79d789*/
          ValidateRect(hWnd, 0); /*0x79d791*/
          return 1; /*0x79d7a3*/
        }
        if ( v9 == 5 ) /*0x79d76b*/
          return 1; /*0x79d77d*/
      }
      return 0; /*0x79da81*/
    }
    if ( v5 != 273 ) /*0x79d7c2*/
    {
      if ( v5 == 1175 ) /*0x79d7ca*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79d7e6*/
        SendMessageA(DlgItem, 0xC5u, 0x78u, 0); /*0x79d7f0*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79d7ff*/
        v11 = GetDlgItem(hWnd, 1474); /*0x79d809*/
        EnableWindow(v11, 0); /*0x79d80c*/
        v12 = GetDlgItem(hWnd, 1810); /*0x79d81f*/
        v13 = String::GetOrEmpty_Alt((char **)&g_WOL_LoginObject); /*0x79d821*/
        SendMessageA(v12, 0x4B4u, 0, (LPARAM)v13); /*0x79d82f*/
        return 0; /*0x79d83a*/
      }
      return 0; /*0x79d7ca*/
    }
    if ( (unsigned __int16)v6 == 1344 ) /*0x79d849*/
    {
      v17 = HIWORD(v6); /*0x79d985*/
      switch ( v17 ) /*0x79d98e*/
      {
        case 0x300u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79da3a*/
          GetEditControlText(v4, (void **)&a4); /*0x79da48*/
          v20 = WideString::Length((const wchar_t **)&a4) != 0; /*0x79da61*/
          v19 = GetDlgItem(hWnd, 1474); /*0x79da68*/
          EnableWindow(v19, v20); /*0x79da6f*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da7c*/
          break;
        case 0x400u: /*0x79d98e*/
          unknown_libname_74(&a4); /*0x79d9d7*/
          GetEditControlText(v4, (void **)&a4); /*0x79d9e5*/
          WideString::Assign((wchar_t **)&a2, MEMORY[0x831D9C]); /*0x79d9f6*/
          WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a2); /*0x79da0a*/
          DeleteAndZero::Alt((void **)&a2); /*0x79da16*/
          DeleteAndZero::Alt((void **)&a4); /*0x79da22*/
          return 0; /*0x79da30*/
        case 0x501u: /*0x79d98e*/
          v18 = GetDlgItem(hWnd, 1474); /*0x79d9b7*/
          SendMessageA(v18, 0xF5u, 0, 0); /*0x79d9be*/
          return 0; /*0x79d9cd*/
      }
      return 0; /*0x79d9a2*/
    }
    if ( (unsigned __int16)v6 != 1474 ) /*0x79d854*/
    {
      if ( (unsigned __int16)v6 == 1670 ) /*0x79d85b*/
      {
        CloseDialog(hWnd, 1670); /*0x79d865*/
        return 0; /*0x79d873*/
      }
      return 0; /*0x79d85b*/
    }
    unknown_libname_74(&a4); /*0x79d87d*/
    v14 = GetDlgItem(hWnd, 1344); /*0x79d88e*/
    GetEditControlText(v14, (void **)&a4); /*0x79d899*/
    SendMessageA(v14, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79d8ab*/
    if ( WideString::Length((const wchar_t **)&a4) ) /*0x79d8b8*/
    {
      WideString::Assign((wchar_t **)&a3, MEMORY[0x831D9C]); /*0x79d8d1*/
      WString::TrimRight((const wchar_t **)&a4, (const wchar_t **)&a3); /*0x79d8e5*/
      DeleteAndZero::Alt((void **)&a3); /*0x79d8f1*/
      memset(v21, 0, sizeof(v21)); /*0x79d901*/
      strcpy(&v21[36], String::GetOrEmpty((char **)&g_WOL_LoginObject)); /*0x79d927*/
      v15 = *(_DWORD *)MEMORY[0xAC116C]; /*0x79d936*/
      v16 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x79d93f*/
      (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v15 + 248))(MEMORY[0xAC116C], v21, v16); /*0x79d950*/
    }
    InvalidateRect(v14, 0, 0); /*0x79d95b*/
    CloseDialog(hWnd, 1474); /*0x79d968*/
    DeleteAndZero::Alt((void **)&a4); /*0x79d974*/
    return 0; /*0x79d97c*/
  }
  return result; /*0x79d771*/
}


// ==== 0x0079DA90  ExtractChatCommand  this=-  sig=csp ====
char **__fastcall ExtractChatCommand(char **a1, HWND a2)
{
  LRESULT v4; // esi
  int v6; // [esp+10h] [ebp-4h] BYREF

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
LABEL_7:
    String::AssignFromPtr(a1, &g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (void **)&v6); /*0x79dad6*/
      if ( WideString::GetChar((const wchar_t **)&v6, 0) == 40 ) /*0x79daea*/
      {
        if ( UI_Helper_7B7980((const wchar_t **)&v6, 0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((void **)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar((const wchar_t **)&v6, 0x28u); /*0x79db2f*/
    ToWideStringCharAlt(a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((void **)&v6); /*0x79db43*/
    return a1; /*0x79db48*/
  }
}


// ==== 0x0079DB50  ChatDialog::DlgProc  this=ChatDialog  sig=csp ====
int __stdcall ChatDialog_DlgProc(HWND hWnd, UINT a2, WPARAM a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // ebx
  HWND v6; // eax
  HWND v7; // eax
  char **Command; // ebx
  HWND v9; // esi
  char *v10; // eax
  WPARAM v11; // edi
  HWND v12; // eax
  HWND v13; // eax
  HWND v14; // esi
  char *v15; // eax
  HWND v16; // ebx
  HWND v17; // eax
  int v18; // esi
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  BOOL v21; // [esp-4h] [ebp-98h]
  void *v22; // [esp+10h] [ebp-84h] BYREF
  void *v23; // [esp+14h] [ebp-80h] BYREF
  void *v24; // [esp+18h] [ebp-7Ch] BYREF
  void *v25; // [esp+1Ch] [ebp-78h] BYREF
  void *v26; // [esp+20h] [ebp-74h] BYREF
  void *v27; // [esp+24h] [ebp-70h] BYREF
  char v28[108]; // [esp+28h] [ebp-6Ch] BYREF

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79db7c*/
  if ( result ) /*0x79db83*/
    return result; /*0x79db83*/
  if ( a2 <= 0x2B ) /*0x79db8c*/
  {
    if ( a2 == 43 ) /*0x79db8e*/
    {
      Dialog::Resize((char *)a4); /*0x79dbe4*/
      return 1; /*0x79dbf8*/
    }
    if ( a2 != 2 ) /*0x79db93*/
    {
      if ( a2 == 15 ) /*0x79db9c*/
      {
        Dialog::DrawBackground(hWnd); /*0x79dbbb*/
        Dialog::StopBink(hWnd); /*0x79dbc2*/
        ValidateRect(hWnd, 0); /*0x79dbca*/
        return 1; /*0x79dbdf*/
      }
      if ( a2 == 20 ) /*0x79dba1*/
        return 1; /*0x79dbb6*/
    }
    return 0; /*0x79dba1*/
  }
  if ( a2 != 273 ) /*0x79dc01*/
  {
    if ( a2 == 1175 ) /*0x79dc0d*/
    {
      DlgItem = GetDlgItem(hWnd, 1344); /*0x79dc29*/
      SendMessageA(DlgItem, 0xC5u, 0x78u, 0); /*0x79dc33*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79dc42*/
      v6 = GetDlgItem(hWnd, 1474); /*0x79dc4c*/
      EnableWindow(v6, 0); /*0x79dc4f*/
      v7 = GetDlgItem(hWnd, 1343); /*0x79dc5b*/
      Command = ExtractChatCommand((char **)&v27, v7); /*0x79dc6e*/
      v9 = GetDlgItem(hWnd, 1816); /*0x79dc74*/
      v10 = String::GetOrEmpty_Alt(Command); /*0x79dc76*/
      SendMessageA(v9, 0x4B4u, 0, (LPARAM)v10); /*0x79dc84*/
      DeleteAndZero(&v27); /*0x79dc8a*/
      if ( MEMORY[0x887640] ) /*0x79dc97*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x79dc9f*/
        return 0; /*0x79dcae*/
      }
    }
    return 0; /*0x79dc97*/
  }
  if ( (unsigned __int16)a3 > 0x5C2u ) /*0x79dcbd*/
  {
    if ( (unsigned __int16)a3 == 1670 ) /*0x79dfbd*/
      CloseDialog(hWnd, 1474); /*0x79dfc6*/
    return 0; /*0x79dfc6*/
  }
  if ( (unsigned __int16)a3 != 1474 ) /*0x79dcc3*/
  {
    if ( (unsigned __int16)a3 == 1343 ) /*0x79dcce*/
    {
      if ( HIWORD(a3) == 1 ) /*0x79de22*/
      {
        ExtractChatCommand((char **)&v23, a4); /*0x79de2e*/
        v14 = GetDlgItem(hWnd, 1816); /*0x79de43*/
        v15 = String::GetOrEmpty_Alt((char **)&v23); /*0x79de45*/
        SendMessageA(v14, 0x4B4u, 0, (LPARAM)v15); /*0x79de53*/
        DeleteAndZero(&v23); /*0x79de5d*/
        return 0; /*0x79de6e*/
      }
      return 0; /*0x79de22*/
    }
    if ( (unsigned __int16)a3 == 1344 ) /*0x79dcd5*/
    {
      v11 = HIWORD(a3); /*0x79dcdb*/
      if ( HIWORD(a3) == 768 ) /*0x79dce4*/
      {
        unknown_libname_74(&v22); /*0x79ddd1*/
        GetEditControlText(a4, &v22); /*0x79dddc*/
        v21 = WideString::Length((const wchar_t **)&v22) != 0; /*0x79ddf2*/
        v13 = GetDlgItem(hWnd, 1474); /*0x79ddf9*/
        EnableWindow(v13, v21); /*0x79de00*/
        DeleteAndZero::Alt(&v22); /*0x79de0a*/
        return 0; /*0x79de1b*/
      }
      if ( v11 == 1024 ) /*0x79dcf0*/
      {
        unknown_libname_74(&v22); /*0x79dd80*/
        GetEditControlText(a4, &v22); /*0x79dd8b*/
        WideString::Assign((wchar_t **)&v24, MEMORY[0x831D9C]); /*0x79dd99*/
        WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v24); /*0x79dda7*/
        DeleteAndZero::Alt(&v24); /*0x79ddb0*/
        DeleteAndZero::Alt(&v22); /*0x79ddb9*/
        return 0; /*0x79ddca*/
      }
      if ( v11 == 1281 ) /*0x79dcfc*/
      {
        unknown_libname_74(&v22); /*0x79dd06*/
        GetEditControlText(a4, &v22); /*0x79dd11*/
        WideString::Assign((wchar_t **)&v26, MEMORY[0x831D9C]); /*0x79dd1f*/
        WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v26); /*0x79dd2d*/
        DeleteAndZero::Alt(&v26); /*0x79dd36*/
        if ( WideString::Length((const wchar_t **)&v22) ) /*0x79dd3f*/
        {
          v12 = GetDlgItem(hWnd, 1474); /*0x79dd57*/
          SendMessageA(v12, 0xF5u, 0, 0); /*0x79dd5e*/
        }
        DeleteAndZero::Alt(&v22); /*0x79dd68*/
        return 0; /*0x79dd79*/
      }
    }
    return 0; /*0x79dfcb*/
  }
  unknown_libname_74(&v22); /*0x79de75*/
  v16 = GetDlgItem(hWnd, 1344); /*0x79de88*/
  GetEditControlText(v16, &v22); /*0x79de90*/
  SendMessageA(v16, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x79dea2*/
  v17 = GetDlgItem(hWnd, 1343); /*0x79deae*/
  ExtractChatCommand((char **)&v23, v17); /*0x79deb6*/
  if ( String::Length((const char **)&v23) && WideString::Length((const wchar_t **)&v22) ) /*0x79ded0*/
  {
    WideString::Assign((wchar_t **)&v25, MEMORY[0x831D9C]); /*0x79dee6*/
    WString::TrimRight((const wchar_t **)&v22, (const wchar_t **)&v25); /*0x79def4*/
    DeleteAndZero::Alt(&v25); /*0x79defd*/
    memset(v28, 0, sizeof(v28)); /*0x79df0d*/
    strcpy(&v28[36], String::GetOrEmpty((char **)&v23)); /*0x79df32*/
    v18 = *(_DWORD *)MEMORY[0xAC116C]; /*0x79df41*/
    v19 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x79df47*/
    (*(void (__stdcall **)(LPVOID, char *, wchar_t *))(v18 + 248))(MEMORY[0xAC116C], v28, v19); /*0x79df58*/
    v20 = WideString::GetOrEmpty((wchar_t **)&v22); /*0x79df62*/
    Dialog::ShowMessage(61680, (size_t)MEMORY[0x84B94C], g_WebBrowser, v20); /*0x79df7b*/
  }
  EnableWindow(a4, 0); /*0x79df86*/
  InvalidateRect(v16, 0, 0); /*0x79df91*/
  DeleteAndZero(&v23); /*0x79df9b*/
  DeleteAndZero::Alt(&v22); /*0x79dfa4*/
  return 0; /*0x79dba7*/
}


// ==== 0x0079DFE0  GameSetupDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_GameSetup_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  char **v10; // ecx
  int v11; // eax
  int v12; // esi
  char **v13; // ecx
  int v14; // eax
  int v15; // esi
  char **v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  int v21; // [esp+0h] [ebp-F8h]
  void *v22; // [esp+14h] [ebp-E4h] BYREF
  void *v23; // [esp+18h] [ebp-E0h] BYREF
  LONG v24; // [esp+1Ch] [ebp-DCh]
  char v25[108]; // [esp+20h] [ebp-D8h] BYREF
  char v26[108]; // [esp+8Ch] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    v24 = WindowLongA; /*0x79e043*/
    if ( a2 > 0x111 ) /*0x79e047*/
    {
      if ( a2 == 1175 ) /*0x79e488*/
      {
        DlgItem = GetDlgItem(hWnd, 1344); /*0x79e4d0*/
        SendMessageA(DlgItem, 0xC5u, 9u, 0); /*0x79e4da*/
        SendMessageA(DlgItem, 0x4D1u, 1u, 0); /*0x79e4e6*/
        SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x79e4f5*/
        v20 = GetDlgItem(hWnd, 1794); /*0x79e4ff*/
        EnableWindow(v20, 0); /*0x79e502*/
      }
      else if ( a2 == 1242 ) /*0x79e48d*/
      {
        v18 = GetDlgItem(hWnd, 1794); /*0x79e49e*/
        PostMessageA(v18, 0xF5u, 0, 0); /*0x79e4a5*/
        return 0; /*0x79e4b7*/
      }
      return 0; /*0x79e48d*/
    }
    if ( a2 != 273 ) /*0x79e04d*/
    {
      switch ( a2 ) /*0x79e052*/
      {
        case 0xFu: /*0x79e052*/
          Dialog::DrawBackground(hWnd); /*0x79e07d*/
          Dialog::StopBink(hWnd); /*0x79e084*/
          ValidateRect(hWnd, 0); /*0x79e08c*/
          break;
        case 0x14u: /*0x79e052*/
          break;
        case 0x2Bu: /*0x79e052*/
          Dialog::Resize((char *)a4); /*0x79e064*/
          return 1; /*0x79e078*/
        default:
          return 0; /*0x79e05c*/
      }
      return 1; /*0x79e0a1*/
    }
    if ( (unsigned __int16)a3 == 1344 ) /*0x79e0b0*/
    {
      if ( HIWORD(a3) ) /*0x79e42b*/
      {
        unknown_libname_73(&v22); /*0x79e438*/
        GetDialogText(a4, &v22); /*0x79e443*/
        v21 = (unsigned __int8)MapSeed::CheckName((const char **)&v22); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v21); /*0x79e464*/
        DeleteAndZero(&v22); /*0x79e46e*/
        return 0; /*0x79e47f*/
      }
      return 0; /*0x79e42e*/
    }
    if ( (unsigned __int16)a3 == 1670 ) /*0x79e0bb*/
    {
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79e419*/
      return 0; /*0x79e428*/
    }
    if ( (unsigned __int16)a3 != 1794 ) /*0x79e0c4*/
      return 0; /*0x79e508*/
    unknown_libname_73(&v23); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, &v23); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x79e0f9*/
    if ( !MapSeed::CheckName((const char **)&v23) || !MapSeed::CheckName((const char **)&v23) ) /*0x79e114*/
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)v24 + 4))(v24, hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero(&v23); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(v25, 0, sizeof(v25)); /*0x79e12e*/
    v7 = String::GetOrEmpty_Alt((char **)&v23); /*0x79e134*/
    strncpy(&v25[36], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 224))(MEMORY[0xAC116C], v25); /*0x79e154*/
    if ( !MapSeed::CheckName((const char **)&v23) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((char **)&v22, (const char **)&v23); /*0x79e174*/
    v8 = g_WindowManager; /*0x79e179*/
    v9 = g_WindowManager; /*0x79e17e*/
    if ( g_WindowManager >= dword_B73AAC ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e191*/
      v8 = g_WindowManager; /*0x79e196*/
    }
    if ( v8 >= dword_B73AAC ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity(&g_WindowManager); /*0x79e1a8*/
      v8 = g_WindowManager; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy((char *)g_WOL_LoginQueue + 4 * v9 + 4, (char *)g_WOL_LoginQueue + 4 * v9, 4 * (v8 + 0x3FFFFFFF * v9)); /*0x79e1d1*/
      v8 = g_WindowManager; /*0x79e1d6*/
    }
    v10 = (char **)((char *)g_WOL_LoginQueue + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)&v22); /*0x79e1f0*/
      v8 = g_WindowManager; /*0x79e1f5*/
    }
    g_WindowManager = v8 + 1; /*0x79e1fb*/
    v11 = g_WOL_RequestManager; /*0x79e200*/
    v12 = g_WOL_RequestManager; /*0x79e205*/
    if ( g_WOL_RequestManager >= dword_B76984 ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e218*/
      v11 = g_WOL_RequestManager; /*0x79e21d*/
    }
    if ( v11 >= dword_B76984 ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_RequestManager); /*0x79e22f*/
      v11 = g_WOL_RequestManager; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy((char *)g_WOL_SessionID + 4 * v12 + 4, (char *)g_WOL_SessionID + 4 * v12, 4 * (v11 + 0x3FFFFFFF * v12)); /*0x79e258*/
      v11 = g_WOL_RequestManager; /*0x79e25d*/
    }
    v13 = (char **)((char *)g_WOL_SessionID + 4 * v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)&v22); /*0x79e277*/
      v11 = g_WOL_RequestManager; /*0x79e27c*/
    }
    g_WOL_RequestManager = v11 + 1; /*0x79e282*/
    v14 = g_WOL_BuddyList; /*0x79e287*/
    v15 = g_WOL_BuddyList; /*0x79e28c*/
    if ( g_WOL_BuddyList >= dword_B779B4 ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = g_WOL_BuddyList; /*0x79e2a4*/
    }
    if ( v14 >= dword_B779B4 ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = g_WOL_BuddyList; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy((char *)g_WOL_ChannelMgr + 4 * v15 + 4, (char *)g_WOL_ChannelMgr + 4 * v15, 4 * (v14 + 0x3FFFFFFF * v15)); /*0x79e2df*/
      v14 = g_WOL_BuddyList; /*0x79e2e4*/
    }
    v16 = (char **)((char *)g_WOL_ChannelMgr + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)&v22); /*0x79e2fe*/
      v14 = g_WOL_BuddyList; /*0x79e303*/
    }
    g_WOL_BuddyList = v14 + 1; /*0x79e30e*/
    if ( String::Length(&g_WOL_AuthObject) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e331*/
      {
LABEL_50:
        DeleteAndZero(&v22); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e33c*/
    }
    if ( g_WOL_RequestManager ) /*0x79e348*/
    {
      if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e35a*/
        DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e36a*/
      g_WOL_ParseState = time(0); /*0x79e376*/
      memset(v26, 0, sizeof(v26)); /*0x79e389*/
      strcpy(&v26[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v26); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}


// ==== 0x0079E520  PlayerOptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall WOL_PlayerOptions_DlgProc(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // edi
  HWND v6; // edi
  HWND v7; // edi
  LPARAM v8; // eax
  LPARAM v9; // eax
  int k; // esi
  int v11; // esi
  int m; // esi
  HWND v13; // eax
  int j; // esi
  int v15; // esi
  DLGTEMPLATE *Indirect; // esi
  HWND v17; // eax
  HWND v18; // eax
  int v19; // esi
  _DWORD *v20; // esi
  HWND v21; // eax
  LRESULT v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  int v25; // esi
  _DWORD *v26; // esi
  HWND v27; // eax
  int v28; // esi
  HWND v29; // eax
  HWND DlgItem; // esi
  LRESULT v31; // edi
  int i; // esi
  int v33; // esi
  BOOL v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL Buddy; // [esp-4h] [ebp-90h]
  int v37; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v38[3]; // [esp+14h] [ebp-78h] BYREF
  char v39[108]; // [esp+20h] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e54f*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, (unsigned int)a4); /*0x79e562*/
  if ( !result ) /*0x79e569*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e57b*/
    if ( a2 <= 0x2B ) /*0x79e57d*/
    {
      switch ( a2 ) /*0x79e583*/
      {
        case 0x2Bu: /*0x79e583*/
          Dialog::Resize((char *)a4); /*0x79e5f8*/
          return 1; /*0x79e609*/
        case 2u: /*0x79e583*/
          KillTimer(hWnd, 0); /*0x79e5d6*/
          KillTimer(hWnd, 0x704u); /*0x79e5de*/
          Config::SaveObserverMode(); /*0x79e5e0*/
          return 0; /*0x79e5ee*/
        case 0xFu: /*0x79e583*/
          Dialog::DrawBackground(hWnd); /*0x79e5a9*/
          Dialog::StopBink(hWnd); /*0x79e5b0*/
          ValidateRect(hWnd, 0); /*0x79e5b8*/
          return 1; /*0x79e5ca*/
        case 0x14u: /*0x79e583*/
          return 1; /*0x79e5a4*/
      }
      return 0; /*0x79e592*/
    }
    switch ( a2 ) /*0x79e612*/
    {
      case 0x111u: /*0x79e612*/
        if ( (*(unsigned __int8 (__thiscall **)(LONG))(*(_DWORD *)WindowLongA + 8))(WindowLongA) ) /*0x79e9dd*/
          return 0; /*0x79e9e2*/
        if ( (unsigned __int16)uIDEvent > 0x689u ) /*0x79e9f4*/
        {
          switch ( (__int16)uIDEvent ) /*0x79ed73*/
          {
            case 1794: /*0x79ed73*/
              SimpleDialogControl::Constructor(v38); /*0x79edc9*/
              v38[0] = &off_7F7624; /*0x79ede2*/
              RunDialog(0x115u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL, (LPARAM)v38); /*0x79ede6*/
              FillBuddyListWOL(hWnd); /*0x79eded*/
              v38[0] = &off_7F7624; /*0x79edf6*/
              OwnerDrawControl::InitVtable(v38); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v37); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v37); /*0x79ee48*/
              RemoveWOLPlayerLogin(&v37); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL(hWnd); /*0x79ee6d*/
              DeleteAndZero((void **)&v37); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < g_WOL_RequestManager; ++i ) /*0x79eed3*/
                DeleteAndZero((void **)g_WOL_SessionID + i); /*0x79eede*/
              v33 = 0; /*0x79eef2*/
              for ( g_WOL_RequestManager = 0; v33 < g_WindowManager; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v37); /*0x79ef06*/
                if ( v33 >= 0 && v33 < g_WindowManager ) /*0x79ef15*/
                  String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v33); /*0x79ef24*/
                StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79ef3a*/
                DeleteAndZero((void **)&v37); /*0x79ef43*/
              }
              if ( !String::Length(&g_WOL_AuthObject) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - g_WOL_ParseState) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79ef80*/
LABEL_112:
                if ( g_WOL_RequestManager ) /*0x79ef8c*/
                {
                  if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79ef9a*/
                    DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79efaa*/
                  g_WOL_ParseState = time(0); /*0x79efb6*/
                  memset(v39, 0, sizeof(v39)); /*0x79efc6*/
                  strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v39); /*0x79f005*/
                }
              }
LABEL_116:
              SetTimer(hWnd, 0x704u, 0xBB8u, 0); /*0x79f008*/
              break; /*0x79f015*/
            case 1887: /*0x79ed73*/
            case 1888: /*0x79ed73*/
              v28 = 0; /*0x79ed80*/
              v29 = GetDlgItem(hWnd, 1888); /*0x79ed82*/
              if ( v29 ) /*0x79ed8a*/
                v28 = SendMessageA(v29, 0xF0u, 0, 0); /*0x79ed9a*/
              if ( (_WORD)uIDEvent == 1887 ) /*0x79eda1*/
                v28 = v28 == 0; /*0x79edaa*/
              MEMORY[0xAC10C8] = v28; /*0x79edae*/
              Dialog::RefreshDialogsGame(0); /*0x79edb4*/
              return 0; /*0x79edc2*/
            default:
              return 0;
          }
          return 0; /*0x79f015*/
        }
        if ( (unsigned __int16)uIDEvent != 1673 ) /*0x79e9fa*/
        {
          if ( (unsigned __int16)uIDEvent > 0x62Bu ) /*0x79ea05*/
          {
            if ( (unsigned __int16)uIDEvent == 1581 ) /*0x79eb04*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1581); /*0x79eb32*/
              return 0; /*0x79eb3e*/
            }
            if ( (unsigned __int16)uIDEvent == 1670 ) /*0x79eb09*/
            {
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79eb19*/
              return 0; /*0x79eb25*/
            }
          }
          else
          {
            switch ( (unsigned __int16)uIDEvent ) /*0x79ea0b*/
            {
              case 0x62Bu: /*0x79ea0b*/
                (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1579); /*0x79eaf0*/
                return 0; /*0x79eafc*/
              case 0x540u: /*0x79ea0b*/
                if ( HIWORD(uIDEvent) == 768 ) /*0x79ea8f*/
                {
                  unknown_libname_73(&v37); /*0x79ea99*/
                  GetDialogText(a4, (void **)&v37); /*0x79eaa9*/
                  v34 = String::Length((const char **)&v37) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v34); /*0x79eacb*/
                  DeleteAndZero((void **)&v37); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                Indirect = (DLGTEMPLATE *)CreateDialogIndirect( /*0x79ea41*/
                                            g_hInstance,
                                            286,
                                            g_hWnd,
                                            (DLGPROC)ChatDialog::DlgProc,
                                            0);
                SetupDialog((HWND)Indirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)Indirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)Indirect, (unsigned __int8 (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
                return 0; /*0x79ea83*/
            }
          }
          return 0; /*0x79ea1d*/
        }
        if ( HIWORD(uIDEvent) != 1 ) /*0x79eb45*/
        {
          if ( HIWORD(uIDEvent) == 2 ) /*0x79eb4c*/
          {
            if ( FindBuddyWOL() ) /*0x79eb52*/
            {
              v18 = GetDlgItem(hWnd, 1581); /*0x79eb6a*/
              SendMessageA(v18, 0xF5u, 0, 0); /*0x79eb71*/
              return 0; /*0x79eb80*/
            }
            if ( String::Length(&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( dword_B76994 ) /*0x79eb9c*/
              {
                v19 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79ebc2*/
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !String::Compare((const char **)v19, &g_WOL_LoginObject) ) /*0x79ebdb*/
                  {
                    v19 = *(_DWORD *)(v19 + 8); /*0x79ebdd*/
                    if ( !v19 ) /*0x79ebe2*/
                      return 0; /*0x79ebed*/
                  }
                  v20 = (_DWORD *)(v19 + 4); /*0x79ebf8*/
                  if ( v20 ) /*0x79ebfd*/
                  {
                    if ( *v20 > 2u ) /*0x79ec07*/
                    {
                      v21 = GetDlgItem(hWnd, 1474); /*0x79ec21*/
                      SendMessageA(v21, 0xF5u, 0, 0); /*0x79ec28*/
                      return 0; /*0x79ec37*/
                    }
                  }
                }
              }
            }
          }
          return 0; /*0x79ec07*/
        }
        v22 = SendMessageA(a4, 0x188u, 0, 0); /*0x79ec4b*/
        if ( v22 == -1 ) /*0x79ec54*/
          DeleteAndZero::Alt2((void **)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, (void **)&g_WOL_LoginObject); /*0x79ec6b*/
        v35 = String::Length(&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v35); /*0x79ec98*/
        Buddy = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, Buddy); /*0x79ecae*/
        if ( String::Length(&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !dword_B76994 ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *((_DWORD *)g_WOL_AccountInfo + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79eced*/
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !String::Compare((const char **)v25, &g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = *(_DWORD *)(v25 + 8); /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              LOBYTE(v37) = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            LOBYTE(v37) = 1; /*0x79ed2f*/
          else
LABEL_88:
            LOBYTE(v37) = 0; /*0x79ed28*/
        }
        else
        {
          LOBYTE(v37) = 0; /*0x79ecbe*/
        }
LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (unsigned __int8)v37); /*0x79ed48*/
        ShowUserProfileWOL(hWnd); /*0x79ed4c*/
        return 0; /*0x79ed54*/
      case 0x113u: /*0x79e612*/
        if ( uIDEvent ) /*0x79e803*/
        {
          if ( uIDEvent == 1796 ) /*0x79e80b*/
          {
            KillTimer(hWnd, 0x704u); /*0x79e813*/
            v13 = GetDlgItem(hWnd, 1796); /*0x79e81d*/
            EnableWindow(v13, 1); /*0x79e824*/
            return 0; /*0x79e833*/
          }
          return 0; /*0x79e80b*/
        }
        if ( (unsigned int)(time(0) - dword_B778C8) <= 0x1E ) /*0x79e84b*/
          return 0; /*0x79e84b*/
        dword_B778C8 = time(0); /*0x79e862*/
        if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79e869*/
        {
          SetEvent(hEvent); /*0x79e878*/
          return 0; /*0x79e887*/
        }
        for ( j = 0; j < g_WOL_RequestManager; ++j ) /*0x79e893*/
          DeleteAndZero((void **)g_WOL_SessionID + j); /*0x79e89e*/
        v15 = 0; /*0x79e8b2*/
        for ( g_WOL_RequestManager = 0; v15 < g_WindowManager; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v37); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < g_WindowManager ) /*0x79e8d5*/
            String::Reassign((char **)&v37, (const char **)g_WOL_LoginQueue + v15); /*0x79e8e5*/
          StringVector::Insert(&g_WOL_RequestManager, (const char **)&v37, g_WOL_RequestManager); /*0x79e8fb*/
          DeleteAndZero((void **)&v37); /*0x79e904*/
        }
        if ( String::Length(&g_WOL_AuthObject) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - g_WOL_ParseState) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((void **)&g_WOL_AuthObject); /*0x79e941*/
        }
        if ( !g_WOL_RequestManager ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( DynamicStringArray::Get(&g_WOL_RequestManager, (char **)&g_WOL_AuthObject, 0) ) /*0x79e95f*/
          DynamicArray::Remove(&g_WOL_RequestManager, 0); /*0x79e96f*/
        g_WOL_ParseState = time(0); /*0x79e97b*/
        memset(v39, 0, sizeof(v39)); /*0x79e98b*/
        strcpy(&v39[36], String::GetOrEmpty((char **)&g_WOL_AuthObject)); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)MEMORY[0xAC116C] + 96))(MEMORY[0xAC116C], v39); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame(hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, dword_B765F0, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, dword_B73E3C, dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836140], 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836134], 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < g_WindowManager; ++k ) /*0x79e703*/
          Object::DtorWithDelete((void **)g_WOL_LoginQueue + k, 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( g_WindowManager = 0; v11 < g_WOL_RequestManager; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((void **)g_WOL_SessionID + v11, 0); /*0x79e73b*/
        g_WOL_RequestManager = 0; /*0x79e74f*/
        HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79e755*/
        HashTable::Rebuild(&g_WOL_EventQueue); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79e76c*/
        if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79e784*/
          RefreshChannelListWOL(); /*0x79e786*/
        Array::CleanupArrayWOL(&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < g_WindowManager; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v37); /*0x79e7a4*/
          DynamicStringArray::Get(&g_WindowManager, (char **)&v37, m); /*0x79e7b4*/
          StringVector::Insert(&g_WOL_BuddyList, (const char **)&v37, g_WOL_BuddyList); /*0x79e7ca*/
          DeleteAndZero((void **)&v37); /*0x79e7d3*/
        }
        SendGameListWOL(); /*0x79e7e2*/
        SetTimer(hWnd, 0, 0x3E8u, 0); /*0x79e7ef*/
        return 0; /*0x79e7fe*/
      default:
        return 0; /*0x79f01b*/
    }
  }
  return result; /*0x79e598*/
}


// ==== 0x0079F0A0  sub_79F0A0  this=-  sig=ida-proto ====
char __fastcall sub_79F0A0(char **a1, int *a2, char *a3)
{
  char *v3; // esi
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  char *v8; // eax
  int v10; // [esp+10h] [ebp-8h]

  v3 = a3; /*0x79f0a6*/
  memset(a3, 0, 0x10Cu); /*0x79f0ba*/
  v5 = *a2; /*0x79f0bc*/
  v6 = 0; /*0x79f0be*/
  v10 = 0; /*0x79f0c2*/
  if ( *a2 <= 0 ) /*0x79f0c6*/
  {
LABEL_8:
    memset(v3, 0, 0x10Cu); /*0x79f115*/
    return 0; /*0x79f11a*/
  }
  else
  {
    v7 = 0; /*0x79f0c8*/
    while ( 1 ) /*0x79f0ca*/
    {
      if ( v7 >= 0 && v6 < v5 ) /*0x79f0d0*/
      {
        qmemcpy(a3, (const void *)(v7 + a2[2]), 0x10Cu); /*0x79f0e0*/
        v3 = a3; /*0x79f0e2*/
        v6 = v10; /*0x79f0e6*/
      }
      v8 = String::GetOrEmpty_Alt(a1); /*0x79f0ee*/
      if ( !_strcmpi(v3 + 52, v8) ) /*0x79f0f8*/
        return 1; /*0x79f12f*/
      v5 = *a2; /*0x79f104*/
      ++v6; /*0x79f106*/
      v7 += 268; /*0x79f107*/
      v10 = v6; /*0x79f10f*/
      if ( v6 >= *a2 ) /*0x79f113*/
        goto LABEL_8; /*0x79f113*/
    }
  }
}


// ==== 0x0079F140  ObjectClass::GameOptionsScreenWOL  this=ObjectClass  sig=csp ====
int WOL_GameOptionsScreen()
{
  wchar_t *String; // eax
  int i; // esi
  HWND v3; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int v6; // eax
  unsigned int j; // ebx
  int v8; // esi
  void **v9; // edi
  DWORD (__stdcall *v10)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v11; // esi
  HWND v12; // edi
  DWORD m; // esi
  int v14; // ecx
  HANDLE *v15; // esi
  DWORD v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HANDLE *v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // ebp
  signed int v24; // eax
  char *v25; // eax
  HANDLE *v26; // esi
  signed int v27; // eax
  int v28; // ebx
  char *v29; // eax
  char v30; // al
  DWORD k; // esi
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  wchar_t *v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebp
  int v43; // [esp+10h] [ebp-22Ch] BYREF
  _DWORD v44[3]; // [esp+14h] [ebp-228h] BYREF
  void *v45; // [esp+20h] [ebp-21Ch] BYREF
  _BYTE v46[268]; // [esp+24h] [ebp-218h] BYREF
  char v47[268]; // [esp+130h] [ebp-10Ch] BYREF

  g_NetworkLobby_Init = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f166*/
    goto LABEL_6; /*0x79f166*/
  GameOptionsScreenWOL_Helper(); /*0x79f16f*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79f178*/
  {
    SetEvent(Handles); /*0x79f187*/
    MEMORY[0xA8B248] = 0; /*0x79f18d*/
    return 0; /*0x79f19f*/
  }
  if ( !RequestChannelListWOL() ) /*0x79f1a0*/
  {
LABEL_6:
    MEMORY[0xA8B248] = 0; /*0x79f1aa*/
    return 0; /*0x79f1bb*/
  }
  if ( g_WOL_ChannelState ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79f1e9*/
    String = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    WideString::Assign((wchar_t **)&v45, String); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)&v45, 1); /*0x79f217*/
    DeleteAndZero::Alt(&v45); /*0x79f220*/
    for ( i = 0; g_WOL_ChannelState; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(); /*0x79f242*/
    }
    v3 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f256*/
    if ( v3 ) /*0x79f25d*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x79f268*/
      if ( !g_WOL_ChannelList ) /*0x79f26e*/
        CloseDialog(v3, 0); /*0x79f274*/
    }
    Current = Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  v6 = g_WOL_PacketQueue; /*0x79f295*/
  for ( j = 0; j < g_WOL_PacketQueue; v6 = g_WOL_PacketQueue ) /*0x79f29e*/
  {
    v8 = *((_DWORD *)g_WOL_EventQueue + j); /*0x79f2a5*/
    while ( v8 ) /*0x79f2aa*/
    {
      v9 = (void **)v8; /*0x79f2ac*/
      v8 = *(_DWORD *)(v8 + 272); /*0x79f2ae*/
      DeleteAndZero(v9); /*0x79f2ba*/
      __3_YAXPAX_Z(v9); /*0x79f2c0*/
    }
    *((_DWORD *)g_WOL_EventQueue + j++) = 0; /*0x79f2d3*/
  }
  dword_B7660C = 0; /*0x79f2e6*/
  if ( v6 > dword_B76638 ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( byte_B7661C ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink(&g_WOL_EventQueue); /*0x79f2fe*/
    }
    while ( g_WOL_PacketQueue > (unsigned int)dword_B76638 ); /*0x79f310*/
  }
  v10 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor(v44); /*0x79f327*/
    v44[0] = &off_7F7624; /*0x79f32c*/
    v11 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v11++); /*0x79f33c*/
    while ( (int)v11 < (int)g_WOL_RequestObject ); /*0x79f347*/
    v12 = (HWND)CreateDialog( /*0x79f35d*/
                  0x116u,
                  (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                  (LPARAM)v44);
    Dialog::Show(v12); /*0x79f361*/
    if ( !(unsigned __int8)ObjectClass::Release(v44) ) /*0x79f36a*/
      break; /*0x79f36a*/
LABEL_33:
    Dialog::Destroy(v12); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(v44) ) /*0x79f411*/
    {
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( MEMORY[0xA8B248] != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v15 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v15++); /*0x79f426*/
        while ( (int)v15 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL((int)ResetEvent, (int)v15) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v16 = v10(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v16 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v16)); /*0x79f47f*/
            if ( !v16 || v16 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v16 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              g_NetworkLobby_Init = 0; /*0x79f9a0*/
              v44[0] = &off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(v44); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v16 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              g_NetworkLobby_Init = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v44[0] = &off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(v44); /*0x79fa03*/
              return 1; /*0x79fa17*/
            }
            if ( g_WOL_ChannelLeaveState ) /*0x79f4a2*/
              goto LABEL_48; /*0x79f4a2*/
          }
          Debug::Log(); /*0x79f4b2*/
          g_WOL_ChannelLeaveState = 1; /*0x79f4ba*/
LABEL_48:
          Debug::Log(); /*0x79f4c4*/
          g_WOL_ChannelLeaveState = 0; /*0x79f4d1*/
        }
        else
        {
          Debug::Log(); /*0x79f441*/
        }
        v17 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f4dc*/
        if ( v17 ) /*0x79f4e3*/
        {
          g_WOL_ChannelList = 0; /*0x79f4e9*/
          CloseDialog(v17, 0); /*0x79f4ef*/
        }
        v18 = Dialog::GetCurrent(); /*0x79f4f4*/
        v19 = GetDlgItem(v18, 1344); /*0x79f4ff*/
        if ( v19 ) /*0x79f507*/
          SetFocus(v19); /*0x79f50a*/
        v20 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v20++); /*0x79f518*/
        while ( (int)v20 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (int)GameLoop::Thunk, 0); /*0x79f53b*/
        while ( CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        g_NetworkLobby_Init = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
        memset(v47, 0, sizeof(v47)); /*0x79f574*/
        if ( !String::Length(&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v43 = 0; /*0x79f597*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE8E0(&g_WOL_LoginObject, &v43) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v43 ) /*0x79f5ae*/
          qmemcpy(v47, (const void *)v43, sizeof(v47)); /*0x79f5bc*/
        v21 = 0; /*0x79f5cd*/
        v43 = 0; /*0x79f5cf*/
        if ( !(unsigned __int8)GameOptionsScreenWOL_Helper_7AE7C0(&g_WOL_LoginObject, &v43) ) /*0x79f5d3*/
          goto LABEL_117; /*0x79f5da*/
        if ( v43 ) /*0x79f5e6*/
          v21 = *(_DWORD *)v43; /*0x79f5e8*/
        v22 = v21 - 4; /*0x79f5ea*/
        if ( !v22 ) /*0x79f5ed*/
        {
          v40 = 0; /*0x79fa80*/
          memset(v46, 0, sizeof(v46)); /*0x79fa82*/
          v41 = g_WOL_AuthPool; /*0x79fa84*/
          MEMORY[0xA8B248] = 4; /*0x79fa89*/
          if ( g_WOL_AuthPool > 0 ) /*0x79fa95*/
          {
            v42 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v42 >= 0 && v40 < v41 ) /*0x79fa9f*/
                qmemcpy(v46, (char *)dword_B73E18 + v42, sizeof(v46)); /*0x79fab3*/
              if ( !_strcmpi(&v46[52], &v47[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v41 = g_WOL_AuthPool; /*0x79face*/
              ++v40; /*0x79fad3*/
              v42 += 268; /*0x79fad4*/
              if ( v40 >= g_WOL_AuthPool ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v47[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v22 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        String::Assign((char **)&v45, &v47[52]); /*0x79f606*/
        v23 = 0; /*0x79f616*/
        memset(v46, 0, sizeof(v46)); /*0x79f618*/
        v24 = g_WOL_ChatState; /*0x79f61a*/
        if ( (int)g_WOL_ChatState <= 0 ) /*0x79f621*/
        {
LABEL_77:
          memset(v46, 0, sizeof(v46)); /*0x79f681*/
          if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v26 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v26++); /*0x79f69d*/
          while ( (int)v26 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
          if ( !RequestChannelList2WOL(41, 0) ) /*0x79f6b5*/
          {
            SetEvent(Handles); /*0x79f6c5*/
            goto LABEL_84; /*0x79f6cb*/
          }
          if ( !RequestChannelListWOL() ) /*0x79f6cd*/
          {
LABEL_84:
            Debug::Log(); /*0x79f6d6*/
            SetEvent(hEvent); /*0x79f6e9*/
            goto LABEL_94; /*0x79f6ef*/
          }
          v23 = 0; /*0x79f6fc*/
          memset(v46, 0, sizeof(v46)); /*0x79f6fe*/
          v27 = g_WOL_ChatState; /*0x79f700*/
          if ( (int)g_WOL_ChatState <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(v46, 0, sizeof(v46)); /*0x79f763*/
LABEL_94:
            v30 = 0; /*0x79f765*/
          }
          else
          {
            v28 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v28 >= 0 && v23 < v27 ) /*0x79f711*/
                qmemcpy(v46, (char *)g_WOL_ConnectionHandler + v28, sizeof(v46)); /*0x79f725*/
              v29 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f72b*/
              if ( !_strcmpi(&v46[52], v29) ) /*0x79f736*/
                break; /*0x79f736*/
              v27 = g_WOL_ChatState; /*0x79f742*/
              ++v23; /*0x79f747*/
              v28 += 268; /*0x79f748*/
              if ( v23 >= (int)g_WOL_ChatState ) /*0x79f750*/
              {
                v10 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v10 = WaitForMultipleObjects; /*0x79f775*/
            v30 = 1; /*0x79f77b*/
          }
          if ( !v30 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v10 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v10 >= 0 && v23 < v24 ) /*0x79f62b*/
            qmemcpy(v46, (char *)v10 + (_DWORD)g_WOL_ConnectionHandler, sizeof(v46)); /*0x79f63f*/
          v25 = String::GetOrEmpty_Alt((char **)&v45); /*0x79f645*/
          if ( !_strcmpi(&v46[52], v25) ) /*0x79f650*/
            break; /*0x79f650*/
          v24 = g_WOL_ChatState; /*0x79f660*/
          ++v23; /*0x79f665*/
          v10 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v10 + 268); /*0x79f666*/
          if ( v23 >= (int)g_WOL_ChatState ) /*0x79f66e*/
          {
            v10 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
LABEL_98:
        if ( !ValidateJoinWOL(MEMORY[0xAC10C8] != 0, (int)v46, (int)v10, v23) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v10 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v10 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v43 = 500; /*0x79f7c5*/
        break; /*0x79f7c5*/
      default:
        goto LABEL_117;
    }
    while ( 1 ) /*0x79f7db*/
    {
      for ( k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x79f7e3*/
            k == 258;
            k = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
      {
        if ( g_WOL_ChannelLeaveState ) /*0x79f7eb*/
          break; /*0x79f7eb*/
        Game::ProcessIdle(); /*0x79f7ed*/
      }
      ResetEvent(*(&Handles + k)); /*0x79f810*/
      if ( !k || k == 6 || k == 5 || k == 10 ) /*0x79f838*/
      {
        Debug::Log(); /*0x79f83f*/
        g_WOL_ChannelLeaveState = 1; /*0x79f847*/
      }
      else if ( k == 7 ) /*0x79f856*/
      {
        Debug::Log(); /*0x79fa1d*/
        byte_B77DEC = 0; /*0x79fa2a*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x79fa34*/
        word_B77AD0 = 0; /*0x79fa3b*/
        g_NetworkLobby_Init = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero(&v45); /*0x79fa4f*/
        v44[0] = &off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(v44); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v43-- < 0 ) /*0x79f863*/
        break; /*0x79f869*/
      if ( g_WOL_ChannelLeaveState ) /*0x79f871*/
        goto LABEL_114; /*0x79f871*/
    }
    Debug::Log(); /*0x79f87d*/
LABEL_114:
    g_WOL_ChannelLeaveState = 0; /*0x79f885*/
LABEL_115:
    Debug::Log(); /*0x79f890*/
LABEL_116:
    DeleteAndZero(&v45); /*0x79f898*/
LABEL_117:
    v44[0] = &off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(v44); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v10(0x12u, &Handles, 0, 0x64u); m == 258; m = v10(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v37 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f933*/
      if ( v37 ) /*0x79f93a*/
      {
        g_WOL_ChannelList = 0; /*0x79f940*/
        CloseDialog(v37, 0); /*0x79f946*/
      }
      v38 = Dialog::GetCurrent(); /*0x79f94b*/
      v39 = GetDlgItem(v38, 1344); /*0x79f956*/
      if ( v39 ) /*0x79f95e*/
        SetFocus(v39); /*0x79f961*/
      Dialog::Destroy(v12); /*0x79f969*/
      MEMORY[0xA8B248] = 0; /*0x79f96e*/
      v36 = GetStringCSF(MEMORY[0x84B15C], 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
    LOBYTE(v14) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v14); /*0x79f3d2*/
    if ( (unsigned __int8)ObjectClass::Release(v44) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v33 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x79f8be*/
  if ( v33 ) /*0x79f8c5*/
  {
    g_WOL_ChannelList = 0; /*0x79f8cb*/
    CloseDialog(v33, 0); /*0x79f8d1*/
  }
  v34 = Dialog::GetCurrent(); /*0x79f8d6*/
  v35 = GetDlgItem(v34, 1344); /*0x79f8e1*/
  if ( v35 ) /*0x79f8e9*/
    SetFocus(v35); /*0x79f8ec*/
  Dialog::Destroy(v12); /*0x79f8f4*/
  MEMORY[0xA8B248] = 0; /*0x79f8f9*/
  v36 = GetStringCSF(MEMORY[0x84B15C], 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
LABEL_123:
  ShowDialogConfirm(v36, 0, (int)GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(); /*0x79f924*/
LABEL_143:
  v44[0] = &off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(v44); /*0x79fb22*/
  return 0; /*0x79f195*/
}


// ==== 0x0079FC40  ObjectClass::JoinLobbyWOL  this=ObjectClass  sig=csp ====
int WOL_JoinLobby()
{
  wchar_t *String; // eax
  int v1; // edx
  wchar_t *v2; // eax
  int v4; // ebp
  int v5; // ebx
  wchar_t *v6; // eax
  HANDLE *v7; // esi
  int v8; // esi
  int v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // ecx
  int v12; // esi
  DWORD j; // esi
  HWND v14; // esi
  wchar_t *v15; // eax
  wchar_t *v16; // eax
  int k; // esi
  HWND v18; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v21; // eax
  HWND v22; // eax
  wchar_t *v23; // eax
  int m; // esi
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  void *v28; // esi
  wchar_t *v29; // [esp-4h] [ebp-12Ch] BYREF
  char *String2; // [esp+10h] [ebp-118h] BYREF
  int i; // [esp+14h] [ebp-114h]
  DLGTEMPLATE *Indirect; // [esp+18h] [ebp-110h]
  char v33[268]; // [esp+1Ch] [ebp-10Ch] BYREF

  if ( MEMORY[0xAC10C8] ) /*0x79fc53*/
  {
    MEMORY[0xAC10C8] = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  g_NetworkLobby_Init = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  String = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&dword_B76230, String); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  g_WOL_AuthPool = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((void **)&dword_B76AC4); /*0x79fcf8*/
  if ( g_WOL_RequestState && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v1 = g_WOL_AuthPool; /*0x79fd37*/
  if ( !g_WOL_AuthPool ) /*0x79fd3f*/
  {
    v2 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v2, 0, (int)GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  String2 = aLob39; /*0x79fd94*/
  memset(v33, 0, sizeof(v33)); /*0x79fd9c*/
  if ( MEMORY[0xA8B244] != 2 ) /*0x79fda4*/
    String2 = g_Str_Lob_40_; /*0x79fda6*/
  v4 = 0; /*0x79fdae*/
  if ( g_WOL_AuthPool <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v5 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v5 >= 0 && v4 < v1 ) /*0x79fdbc*/
      qmemcpy(v33, (char *)dword_B73E18 + v5, sizeof(v33)); /*0x79fdd0*/
    if ( !_strnicmp(&v33[52], String2, strlen(String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v1 = g_WOL_AuthPool; /*0x79fdf7*/
    ++v4; /*0x79fdfd*/
    v5 += 268; /*0x79fdfe*/
    if ( v4 >= g_WOL_AuthPool ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v4 >= g_WOL_AuthPool ) /*0x79fe10*/
  {
LABEL_22:
    v6 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v6, 0, (int)GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  Indirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, 279, g_hWnd, sub_7A2110, 0); /*0x79fe70*/
  SetupDialog((HWND)Indirect, 279); /*0x79fe74*/
  SendMessageA((HWND)Indirect, 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow((HWND)Indirect, 1); /*0x79fe8b*/
  v7 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v7++); /*0x79fe9f*/
  while ( (int)v7 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  v8 = 0; /*0x79feb1*/
  for ( i = 0; v8 < g_WindowManager; ++v8 ) /*0x79feb9*/
    Object::DtorWithDelete((void **)g_WOL_LoginQueue + v8, 0); /*0x79fec5*/
  v9 = 0; /*0x79fed9*/
  for ( g_WindowManager = 0; v9 < g_WOL_RequestManager; ++v9 ) /*0x79fee3*/
    Object::DtorWithDelete((void **)g_WOL_SessionID + v9, 0); /*0x79feee*/
  g_WOL_RequestManager = 0; /*0x79ff02*/
  HashTable::CleanupAndResize(&g_WOL_AccountInfo); /*0x79ff08*/
  HashTable::Rebuild(&g_WOL_EventQueue); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 220))(MEMORY[0xAC116C]); /*0x79ff1f*/
  if ( MEMORY[0xA8B244] != 3 && MEMORY[0xA8B244] != 1 && MEMORY[0xA8B244] != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(); /*0x79ff39*/
  RefreshGameListWOL(); /*0x79ff3e*/
  do /*0x7a00ff*/
  {
    while ( 1 ) /*0x7a0073*/
    {
      while ( 1 ) /*0x7a005f*/
      {
        while ( 1 ) /*0x79ff50*/
        {
          if ( g_WOL_IdleHandler == 2 ) /*0x79ff57*/
          {
            String::Assign(&String2, aZotclot9); /*0x79ff62*/
            v10 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v29 = v11; /*0x79ff7d*/
            WideString::Assign(&v29, v10); /*0x79ff81*/
            v12 = LeaveChannelExWOL((int)v33, &String2, v29); /*0x79ff97*/
            DeleteAndZero((void **)&String2); /*0x79ff99*/
            if ( v12 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v29 = 0; /*0x7a0139*/
              v15 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
LABEL_70:
              ShowDialogConfirm(v15, 0, (int)GameLoop::Thunk, (char)v29); /*0x7a0279*/
LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&dword_B76230, &MEMORY[0x887734]); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&v33[52], g_WOL_IdleFlag) ) /*0x79ffe2*/
            RequestMatchWOL(); /*0x7a0009*/
          for ( j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                j == 258;
                j = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + j)); /*0x7a0045*/
          if ( !j || j == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( j != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(); /*0x7a0061*/
          ProcessPingRequestsWOL(); /*0x7a0066*/
        }
        if ( j != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( g_WOL_ChannelState ) /*0x7a0154*/
          {
            v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7a017b*/
            v16 = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            WideString::Assign((wchar_t **)&String2, v16); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)&String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((void **)&String2); /*0x7a01b1*/
            for ( k = 0; g_WOL_ChannelState; ++k ) /*0x7a01bf*/
            {
              if ( k >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(); /*0x7a01d3*/
            }
            v18 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a01e7*/
            if ( v18 ) /*0x7a01ee*/
            {
              g_WOL_ChannelList &= ~0x40u; /*0x7a01f9*/
              if ( !g_WOL_ChannelList ) /*0x7a01ff*/
                CloseDialog(v18, 0); /*0x7a0205*/
            }
            Current = Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v29 = 0; /*0x7a025d*/
            v15 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v29 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v15 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v15 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( j != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( (unsigned __int8)MatchGameWOL() && MEMORY[0xA8B244] == 3 ) /*0x7a009f*/
      {
        v14 = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(v14, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(v14, 1); /*0x7a00f1*/
      }
    }
  }
  while ( j != 7 ); /*0x7a00ff*/
  v21 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v21); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  i = 1; /*0x7a02c6*/
LABEL_73:
  CloseDialog((HWND)Indirect, 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(); /*0x7a02d9*/
  v22 = (HWND)Dialog::FindByHandle((void *)0x11F); /*0x7a02e3*/
  if ( v22 ) /*0x7a02ea*/
    CloseDialog(v22, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( g_WOL_ChannelState ) /*0x7a032c*/
  {
    v29 = (wchar_t *)g_WOL_ProcessIdle; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]); /*0x7a0353*/
    v23 = GetStringCSF(MEMORY[0x84B644], 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    WideString::Assign((wchar_t **)&String2, v23); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)&String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((void **)&String2); /*0x7a038a*/
    for ( m = 0; g_WOL_ChannelState; ++m ) /*0x7a0398*/
    {
      if ( m >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(); /*0x7a03ac*/
    }
    v25 = (HWND)Dialog::FindByHandle((void *)0xC4); /*0x7a03c0*/
    if ( v25 ) /*0x7a03c7*/
    {
      g_WOL_ChannelList &= ~0x40u; /*0x7a03d2*/
      if ( !g_WOL_ChannelList ) /*0x7a03d8*/
        CloseDialog(v25, 0); /*0x7a03de*/
    }
    v26 = Dialog::GetCurrent(); /*0x7a03e3*/
    v27 = GetDlgItem(v26, 1344); /*0x7a03ee*/
    if ( v27 ) /*0x7a03f6*/
      SetFocus(v27); /*0x7a03f9*/
  }
  v28 = MEMORY[0xAC1154]; /*0x7a03ff*/
  if ( MEMORY[0xAC1154] ) /*0x7a0407*/
  {
    ComPtr::Dtor(MEMORY[0xAC1154]); /*0x7a040b*/
    __3_YAXPAX_Z(v28); /*0x7a0411*/
    MEMORY[0xAC1154] = 0; /*0x7a0419*/
  }
  return i; /*0x79fd7e*/
}

