// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00791AA0  ObjectClass::UI_Setup_791AA0  this=ObjectClass  sig=csp ====
void __thiscall UI_Setup_791AA0(ObjectClass *this)
{
  wchar_t *StringCSF; // eax

  if ( this ) /*0x791aa5*/
  {
    if ( g_MenuStateFlags ) /*0x791ab5*/
      StringCSF = GetStringCSF(g_Str_TXT_OBSERVER_FULL, 0, g_Str_File_wonline_cpp, 17235); /*0x791adb*/
    else
      StringCSF = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 17233); /*0x791ac8*/
    ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x791ae4*/
    if ( (*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv) < 0 ) /*0x791af6*/
      CloseDialog((HWND)this, 2); /*0x791aff*/
  }
}



// ==== 0x00791B10  WOLobby::ChatDlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v13; // eax
  Skirmish *v14; // esi
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
  ObjectClass **p_nextObject; // edi
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
  int v39; // eax
  const wchar_t *i; // esi
  char *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // e... [27756 chars total]



// ==== 0x00792BE0  ShowUIMessage  this=-  sig=csp ====
char __fastcall ShowUIMessage(int a1, wchar_t **a2, char a3)
{
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // edi
  wchar_t *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  wchar_t *v11; // eax
  char result; // al

  DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((Dialog *)0xC4); /*0x792bf6*/
  if ( DialogIndirect ) /*0x792bfa*/
  {
    dword_B77DC8 |= a1; /*0x792c06*/
    if ( WideString::Length((WideString *)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, (DLGPROC)sub_792CF0, 0); /*0x792c7e*/
    SetupDialog((Dialog *)DialogIndirect, 196); /*0x792c87*/
    v10 = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    dword_B77DC8 = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = dword_B77DC8; /*0x792cca*/
    if ( dword_B77DC8 ) /*0x792cd1*/
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
    dword_B77DC8 &= ~a1; /*0x792edb*/
    if ( !dword_B77DC8 ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
  Current = Dialog::GetCurrent(); /*0x792eec*/
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}



// ==== 0x00792F10  Network::SyncPlayerList  this=Network  sig=csp ====
void Network::SyncPlayerList(Network *this)
{
  int owningHouseIndex; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // esi
  char *v7; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // ecx
  int i; // esi
  int v13; // [esp+Ch] [ebp-7Ch] BYREF
  int v14; // [esp+10h] [ebp-78h] BYREF
  int v15[2]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v16[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x792f10*/
  dword_A8B54C = 1; /*0x792f18*/
  v2 = 0; /*0x792f23*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x792f28*/
  {
    v3 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v3 >= 0 && v2 < owningHouseIndex ) /*0x792f38*/
        qmemcpy(v16, (char *)g_WOL_UserList.nextObject + v3, sizeof(v16)); /*0x792f4b*/
      v4 = CharToWideString(&v16[9]); /*0x792f51*/
      v5 = Player::FindByName((Player *)v4); /*0x792f58*/
      v6 = v5; /*0x792f5d*/
      if ( v5 && (unsigned __int8)IsKnownPointer((ObjectClass *)v5) ) /*0x792f65*/
        *(_DWORD *)((char *)v6 + 123) = v16[5]; /*0x792f72*/
      v7 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x792f7a*/
      if ( _strcmpi((char *)&v16[9], v7) ) /*0x792f85*/
      {
        if ( (v16[0] & 1) != 0 ) /*0x792f96*/
        {
          v8 = CharToWideString(&v16[9]); /*0x792f9c*/
          v9 = Player::FindByName((Player *)v8); /*0x792fa3*/
          Network::CopyAddress((Network *)(v9 + 20), &v14, (int)v15); /*0x792fb5*/
          NetworkID::Assign((NetworkID *)&stru_A8BB1C, &v14, (int)v15, 0); /*0x792fcb*/
        }
        v13 = 0; /*0x792fde*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))( /*0x792fea*/
          g_UIPointerTable,
          v16[6],
          &v13);
        v10 = v13; /*0x792fed*/
        if ( v13 < 0 ) /*0x792ff3*/
        {
          v10 = 0; /*0x792ff5*/
          v13 = 0; /*0x792ff7*/
        }
        v11 = dword_A8B54C; /*0x792ffb*/
        *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = v10; /*0x793001*/
        dword_A8B54C = v11 + 1; /*0x793009*/
      }
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79300f*/
      ++v2; /*0x793014*/
      v3 += 108; /*0x793015*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x79301a*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 48))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x79302a*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x793039*/
  {
    Network::FormatAddress((Network *)(dword_A8DA78[i] + 40), 0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 44))( /*0x793071*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      dword_A8DA78[i] + 40,
      0);
  }
  Network::FormatAddress(&stru_A8BB1C, 0); /*0x793085*/
  Debug::Log(); /*0x793090*/
}



// ==== 0x007930A0  UI_Setup_7930A0  this=-  sig=ida-proto ====
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7930bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7930c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&byte_B777B0 ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = String::GetOrEmpty_Alt((char **)&dword_B73E40); /*0x7930f6*/
  return _strcmpi(unk_B777D4, v3) == 0; /*0x7930dc*/
}



// ==== 0x00793120  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_793120(ObjectClass *this)
{
  int v1; // eax
  ObjectClass *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < g_WOL_UserList.owningHouseIndex ) /*0x79313e*/
      qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x79314c*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= g_WOL_UserList.owningHouseIndex ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = String::GetOrEmpty_Alt((String *)this); /*0x793178*/
  return _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4) == 0; /*0x79315f*/
}



// ==== 0x007931A0  GameSettings::FindFlagged  this=GameSettings  sig=ida-proto ====
char *GameSettings_FindFlagged()
{
  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7931bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7931c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &byte_B777B0; /*0x7931dc*/
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
      if ( v5 > dword_A8DA84 - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < dword_A8DA84; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(dword_A8DA78 + 4 * i)); /*0x7933e1*/
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
int HandleWOLForwardingError(ObjectClass *this)
{
  int result; // eax
  ObjectClass *i; // edx
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  char v6; // bl
  int v7; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // [esp-4h] [ebp-210h]
  wchar_t *v12; // [esp-4h] [ebp-210h]
  const wchar_t *v13; // [esp-4h] [ebp-210h]
  wchar_t *v14; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x793496*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7934a3*/
  {
    for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7934a9*/
    {
      if ( result >= 0 && result < g_WOL_UserList.owningHouseIndex ) /*0x7934b5*/
        qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7934c3*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      if ( ++result >= g_WOL_UserList.owningHouseIndex ) /*0x7934d4*/
        return result; /*0x7934d4*/
    }
    result = (int)&g_WebBrowserConfig.occupant; /*0x7934e0*/
    if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7934e7*/
    {
      v3 = -1; /*0x7934f2*/
      v4 = 0; /*0x7934f5*/
      if ( dword_A8DA84 > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v5 = ToWideStringChar((char *)dword_A8DA78[v4]); /*0x793509*/
          if ( !_strcmpi(v5, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v4 >= dword_A8DA84 ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v3 = v4; /*0x793527*/
      }
LABEL_15:
      v6 = 0; /*0x793529*/
      v7 = 0; /*0x793530*/
      if ( dword_A8DA84 <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( *(_DWORD *)&g_WindowManager.__pad_EC[4 * v7 + 32] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v6 = 1; /*0x793557*/
            ToWideStringChar((char *)dword_A8DA78[v7]); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            v11 = (const wchar_t *)dword_A8DA78[v7]; /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v6 = 1; /*0x793591*/
            ToWideStringChar((char *)dword_A8DA78[v7]); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            v11 = (const wchar_t *)dword_A8DA78[v7]; /*0x7935b3*/
            StringCSF = GetStringCSF(aTxtTalkLocalPr, 0, g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
LABEL_19:
            swprintf(Buffer, (const size_t)StringCSF, v11); /*0x7935c8*/
            Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v6 = 1; /*0x7935ee*/
            if ( v7 == v3 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              v12 = GetStringCSF(aTxtTalkForward, 0, g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage(-1, (size_t)v12); /*0x79361d*/
            }
            else
            {
              ToWideStringChar((char *)dword_A8DA78[v7]); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              v13 = (const wchar_t *)dword_A8DA78[v7]; /*0x79364b*/
              v9 = GetStringCSF(aTxtTalkForward_0, 0, g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf(Buffer, (const size_t)v9, v13); /*0x793663*/
              Dialog::ShowMessage(-1, (size_t)Buffer); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v6 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            v14 = GetStringCSF(aTxtTalkHostAbo, 0, g_Str_File_wonline_cpp, 18875); /*0x7936a3*/
            Dialog::ShowMessage(-1, (size_t)v14); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = dword_A8DA84; /*0x7936b2*/
        ++v7; /*0x7936b7*/
      }
      while ( v7 < dword_A8DA84 ); /*0x7936ba*/
      if ( !v6 ) /*0x7936c2*/
      {
LABEL_26:
        v10 = GetStringCSF(aTxtFailedToTal, 0, g_Str_File_wonline_cpp, 18888); /*0x7936d5*/
        return Dialog::ShowMessage(-1, (size_t)v10); /*0x7936e2*/
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
  v3 = (wchar_t **)&dword_A8DA90; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x7937ed*/
  v4 = dword_A8DA84; /*0x7937ef*/
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
        v4 = dword_A8DA84; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < dword_A8DA84 - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  v9 = 0; /*0x79389c*/
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  v10 = dword_A8DA84; /*0x7938ac*/
  if ( dword_A8DA84 > 0 ) /*0x7938b6*/
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
          v10 = dword_A8DA84; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < dword_A8DA84 ); /*0x793906*/
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
  v6 = (char **)&dword_A8DA90; /*0x79395c*/
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
  while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x79399d*/
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
  v5 = (char **)&dword_A8DA90; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar(*v5); /*0x793a38*/
    result = _strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    ++v5; /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&dword_A8DAB0 ) /*0x793a54*/
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

  result = dword_B77900; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)dword_B77900 > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = (char *)dword_B77908 + v7; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        qmemcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, "%d", a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v3, v9); /*0x793aff*/
      }
      result = dword_B77900; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)dword_B77900 ) /*0x793b15*/
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
int Network_Connect_793BB0(ObjectClass *this)
{
  int result; // eax
  int *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // [esp+0h] [ebp-1D8h]
  int v7; // [esp+8h] [ebp-1D0h]
  int v8[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+1D4h] [ebp-4h]
  char v10; // [esp+1D6h] [ebp-2h]

  result = dword_A8E224; /*0x793bb6*/
  v6 = 0; /*0x793bbb*/
  if ( dword_A8E224 > 0 ) /*0x793bc5*/
  {
    v2 = (int *)&unk_A8E1C4; /*0x793bcf*/
    v3 = &dword_A8E1A4; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v4 = v2[2]; /*0x793bdc*/
      if ( *v2 != -1 ) /*0x793be5*/
      {
        v5 = Timer::GetTicks() - *v2; /*0x793bec*/
        if ( v5 >= v4 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v4 -= v5; /*0x793bf3*/
      }
      if ( !v4 ) /*0x793bf7*/
      {
LABEL_7:
        memset(v8, 0, sizeof(v8)); /*0x793c08*/
        v9 = 0; /*0x793c0a*/
        v10 = 0; /*0x793c0c*/
        v8[0] = 13; /*0x793c12*/
        strcpy((char *)&v8[1], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x793c39*/
        ToWideStringChar((char *)dword_A8DA90[*v3]); /*0x793c4b*/
        Debug::Log(); /*0x793c56*/
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v8, 47, 0, (wchar_t *)dword_A8DA90[*v3]); /*0x793c76*/
        *v2 = Timer::GetTicks(); /*0x793c8f*/
        v2[1] = v7; /*0x793c99*/
        v2[2] = 1200; /*0x793c9c*/
      }
      result = v6 + 1; /*0x793c9f*/
      ++v3; /*0x793caa*/
      v2 += 3; /*0x793cad*/
      ++v6; /*0x793cb2*/
    }
    while ( v6 < dword_A8E224 ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}



// ==== 0x00793CD0  ObjectClass::method_793CD0  this=ObjectClass  sig=csp ====
int __thiscall sub_793CD0(ObjectClass *this)
{
  int Ticks; // eax
  int *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  dword_A8E1A4[dword_A8E224] = this; /*0x793cd8*/
  Ticks = Timer::GetTicks(); /*0x793ce3*/
  v2 = (int *)(12 * dword_A8E224 + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++dword_A8E224; /*0x793d14*/
}



// ==== 0x00793D20  NegotiateNetworkConnection  this=-  sig=csp ====
char __fastcall NegotiateNetworkConnection(int a1, int a2, int a3)
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
  unsigned __int16 v23; // si
  char *v24; // ebx
  int owningHouseIndex; // eax
  char *v26; // esi
  int v27; // ebp
  int v28; // ecx
  TechnoTypeClass *v29; // ecx
  int v30; // esi
  int v31; // eax
  __int16 v32; // di
  int v33; // esi
  TechnoTypeClass *v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Speed; // eax
  int v44; // ecx
  char *v45; // eax
  HWND v46; // eax
  HWND v47; // esi
  HWND DlgItem; // eax
  int *v49; // ecx
  int v50; // eax
  int v51; // esi
  int v52; // esi
  int v53; // eax
  char *v54; // eax
  ObjectClass *v55; // [esp+2h] [ebp-74Ch]
  char v56; // [esp+14h] [ebp-73Ah]
  char v57; // [esp+15h] [ebp-739h]
  unsigned __int16 v58; // [esp+16h] [ebp-738h]
  int v59; // [esp+16h] [ebp-738h]
  int v60; // [esp+16h] [ebp-738h]
  int v61; // [esp+1Ah] [ebp-734h]
  int v62; // [esp+1Eh] [ebp-730h]
  int v63; // [esp+22h] [ebp-72Ch]
  int v64; // [esp+22h] [ebp-72Ch]
  int v65; // [esp+2Ah] [ebp-724h]
  int v66; // [esp+2Eh] [ebp-720h]
  int v67; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v69; // [esp+3Eh] [ebp-710h] BYREF
  int v70; // [esp+42h] [ebp-70Ch]
  int v71; // [esp+46h] [ebp-708h]
  int v72; // [esp+4Ah] [ebp-704h]
  int v73; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  _DWORD v75[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  int v76; // [esp+6Ah] [ebp-6E4h]
  int v77; // [esp+6Eh] [ebp-6E0h]
  int v78; // [esp+72h] [ebp-6DCh]
  int v79; // [esp+76h] [ebp-6D8h]
  int v80; // [esp+7Eh] [ebp-6D0h]
  int v81; // [esp+82h] [ebp-6CCh]
  TechnoTypeClass *v82; // [esp+86h] [ebp-6C8h]
  int v83; // [esp+8Ah] [ebp-6C4h]
  bool v84[4]; // [esp+8Eh] [ebp-6C0h] BYREF
  int v85; // [esp+92h] [ebp-6BCh]
  int v86; // [esp+96h] [ebp-6B8h]
  int v87; // [esp+9Ah] [ebp-6B4h]
  int v88; // [esp+A2h] [ebp-6ACh]
  int Ticks; // [esp+A6h] [ebp-6A8h]
  int v90; // [esp+AEh] [ebp-6A0h]
  Waypoint v91; // [esp+B2h] [ebp-69Ch] BYREF
  char v92[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v93[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v94[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v96; // [esp+3BEh] [ebp-390h] BYREF
  char v97[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v98[11]; // [esp+586h] [ebp-1C8h] BYREF
  __int16 v99; // [esp+5B2h] [ebp-19Ch]
  char v100; // [esp+5B4h] [ebp-19Ah]

  v3 = a1; /*0x793d28*/
  v70 = a2; /*0x793d2c*/
  v72 = a1; /*0x793d34*/
  v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v56 = 1; /*0x793d5f*/
  v75[0] = 0; /*0x793d64*/
  Waypoint::InitInvalid(&v91); /*0x793d68*/
  v66 = 0; /*0x793d74*/
  v57 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v62 = -1; /*0x793d93*/
  if ( dword_A8DA84 <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = (char *)dword_A8DA90[v3]; /*0x793da3*/
    v6 = ToWideStringChar((char *)dword_A8DA78[v4]); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v62 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < dword_A8DA84 ); /*0x793dd5*/
  if ( v62 == -1 ) /*0x793ddc*/
  {
LABEL_6:
    strcpy(&v91.__pad_0[12], "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, &v91.__pad_0[12]); /*0x793e23*/
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  v9 = (char *)&unk_A8E060; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v56 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)byte_A8E180 ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = *(_DWORD *)&stru_A8DBC0.alignmentPadding69[4 * v3 + 3]; /*0x793e87*/
  if ( v56 && (!v11 || (v11 & 1) != 0) && (!(_WORD)dword_ABFEC8 || (dword_ABFEC8 & 1) != 0) ) /*0x793eac*/
  {
    Debug::Log(); /*0x793eb3*/
    v56 = 0; /*0x793ebb*/
  }
  v61 = 0; /*0x793ec2*/
  v71 = 0; /*0x793ec6*/
  v58 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
    v12 = v62; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(v55); /*0x793edf*/
    if ( v56 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      v15 = dword_ABFEC8; /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v59 = 0; /*0x793f50*/
      if ( dword_A8E224 <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = dword_A8E1A4; /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *v16; /*0x793f5f*/
        v18 = (_DWORD *)(dword_A8DA90[*v16] + 40); /*0x793f68*/
        *(_DWORD *)v84 = *v18; /*0x793f6d*/
        v19 = dword_A8DA90[v3] + 40; /*0x793f7e*/
        v85 = v18[1]; /*0x793f81*/
        v86 = v18[2]; /*0x793f8c*/
        if ( (unsigned __int8)NetworkID::Compare(v84, v19) ) /*0x793f9a*/
        {
          v14 = dword_A8E184[v17]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        ++v16; /*0x793fcb*/
        ++v59; /*0x793fd0*/
      }
      while ( v59 < dword_A8E224 ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( dword_A8DA84 > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar((char *)dword_A8DA78[v20]); /*0x79400a*/
            v22 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= dword_A8DA84 ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(&dword_A8E2B2 + v20); /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((Network *)&dword_ABFEC8, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = ToWideStringChar((char *)dword_A8DA90[v72]); /*0x794069*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v60 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < owningHouseIndex ) /*0x794098*/
            v26 = (char *)g_WOL_UserList.nextObject + v28; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
            qmemcpy(v94, "Z4", sizeof(v94)); /*0x7940c3*/
            sprintf(Buffer, "%d", v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v26, v94); /*0x794106*/
          }
          owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v60 + 108; /*0x794113*/
          v60 += 108; /*0x794118*/
        }
        while ( v27 < g_WOL_UserList.owningHouseIndex ); /*0x79411c*/
      }
      v3 = v72; /*0x794122*/
      v12 = v62; /*0x794126*/
      v58 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *(&dword_A8E2B2 + v62); /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      dword_A8E050[v3] = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v63 = Ticks; /*0x794141*/
    v30 = 360; /*0x79414c*/
    HIWORD(v31) = HIWORD(v61); /*0x794155*/
    v90 = 360; /*0x79415b*/
    v65 = 360; /*0x794162*/
    if ( v61 > 0 ) /*0x794166*/
    {
      v31 = Timer::GetTicks(); /*0x79416f*/
      v29 = v82; /*0x794174*/
      v30 = 240; /*0x79417b*/
      v81 = v31; /*0x794180*/
      v83 = 240; /*0x794187*/
      v63 = v31; /*0x79418e*/
      v65 = 240; /*0x794196*/
    }
    v32 = v71; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v63 != -1 ) /*0x7941a3*/
      {
        v31 = Timer::GetTicks() - v63; /*0x7941ae*/
        if ( v31 >= v30 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v30 -= v31; /*0x7941b6*/
      }
      if ( !v30 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v56 == 1 ) /*0x7941c2*/
      {
        if ( dword_A8E050[v3] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( dword_A8E050[v3] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v65; /*0x7941d3*/
    }
    LOWORD(v31) = dword_A8E050[v3]; /*0x7941f3*/
    v71 = v31; /*0x7941fe*/
    if ( (_WORD)v31 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *(&dword_A8E2B2 + v12) = dword_A8E050[v3]; /*0x79421e*/
      Network::SetPort((Network *)(dword_A8DA78[v12] + 40), dword_A8E050[v3]); /*0x79423b*/
      Network::SetPort((Network *)(dword_A8DA90[v3] + 40), dword_A8E050[v3]); /*0x794253*/
      memset(v98, 0, sizeof(v98)); /*0x794266*/
      v99 = 0; /*0x794268*/
      v100 = 0; /*0x79426a*/
      v98[0] = 41; /*0x794270*/
      strcpy((char *)&v98[1], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x79429d*/
      if ( (dword_ABFEC8 & 8) != 0 && (stru_A8DBC0.alignmentPadding69[4 * v3 + 3] & 8) == 0 ) /*0x7942b7*/
      {
        Debug::Log(); /*0x7942be*/
        v33 = 240; /*0x7942cf*/
        v73 = Timer::GetTicks(); /*0x7942d4*/
        for ( i = 240; ; v33 = i ) /*0x7942d8*/
        {
          if ( v73 != -1 ) /*0x7942e1*/
          {
            v35 = Timer::GetTicks() - v73; /*0x7942ec*/
            if ( v35 >= v33 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v33 -= v35; /*0x7942f4*/
          }
          if ( !v33 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(v34); /*0x7942fa*/
        }
      }
      ToWideStringChar((char *)dword_A8DA90[v3]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v36 = Timer::GetTicks(); /*0x794331*/
      v88 = 360; /*0x794342*/
      v87 = v36; /*0x794351*/
      v64 = v36; /*0x794358*/
      v79 = Timer::GetTicks(); /*0x794365*/
      v67 = v79; /*0x794369*/
      v37 = 0; /*0x794371*/
      v80 = 0; /*0x794373*/
      for ( j = 0; ; v37 = j ) /*0x79437b*/
      {
        v38 = v37; /*0x794383*/
        if ( v67 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v39 = Timer::GetTicks() - v67; /*0x794393*/
        if ( v39 < v38 ) /*0x794399*/
        {
          v40 = v38 - v39; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v98, 47, 0, (wchar_t *)dword_A8DA90[v3]); /*0x7943d3*/
        v41 = Timer::GetTicks(); /*0x7943dc*/
        v37 = 30; /*0x7943e5*/
        v75[1] = v41; /*0x7943ea*/
        v75[3] = 30; /*0x7943ee*/
        v67 = v41; /*0x7943f2*/
        j = 30; /*0x7943fa*/
LABEL_70:
        Game::ProcessIdle((TechnoTypeClass *)v37); /*0x7943fe*/
        v42 = v57; /*0x794403*/
        if ( !v57 ) /*0x794409*/
        {
          Speed = Connection::GetSpeed(&unk_A8E9C0); /*0x794414*/
          v44 = v66; /*0x794419*/
          if ( v66 >= Speed ) /*0x79441f*/
          {
            v44 = 0; /*0x794421*/
            v66 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk((int)&unk_A8E9C0, v44, (int)&v96, (int)v75, (int)&v91, (int)&v69 + 2, 0) /*0x79445d*/
            || HIWORD(v69) != 0xAA04 )
          {
            goto LABEL_89; /*0x79445d*/
          }
          if ( v96 != 13 ) /*0x79446d*/
          {
            if ( v96 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v62] + 40), (int)&v91) ) /*0x7944a1*/
            {
              v45 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7944bd*/
              if ( !_strcmpi(v45, v97) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                qmemcpy(v92, "Z1;", sizeof(v92)); /*0x7944f1*/
                if ( v97 ) /*0x794509*/
                  strcpy(v93, v97); /*0x79452d*/
                else
                  v93[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, v92); /*0x794565*/
                if ( v62 >= 0 && v62 < dword_A8DA84 ) /*0x794576*/
                {
                  v46 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x79457d*/
                  v47 = v46; /*0x794582*/
                  if ( v46 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v46, dword_84A1F0[v62]); /*0x794591*/
                    *((_BYTE *)&dword_B75F54 + v62) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v47, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                dword_A8E1A4[dword_A8E224] = v3; /*0x7945c4*/
                v76 = Timer::GetTicks(); /*0x7945d6*/
                v57 = 1; /*0x7945df*/
                v42 = 1; /*0x7945e7*/
                v78 = 1200; /*0x7945eb*/
                v49 = (int *)(12 * dword_A8E224 + 11067844); /*0x7945ef*/
                *v49 = v76; /*0x7945f6*/
                v49[1] = v77; /*0x7945fc*/
                v49[2] = 1200; /*0x7945ff*/
                ++dword_A8E224; /*0x794609*/
                dword_A8E184[v3] = v58; /*0x794619*/
              }
            }
          }
          Network::receiveData((int)&unk_A8E9C0, v66); /*0x79462a*/
          if ( !v42 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( dword_A8DE4C[v70] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        v50 = dword_A8DE4C[v70]; /*0x794641*/
        if ( v50 >= 1 && v50 < 11 ) /*0x794654*/
        {
          v51 = v50 - 1; /*0x794656*/
          if ( v50 - 1 > v61 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v61 = v51 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v52 = 360; /*0x794669*/
        ++v66; /*0x794671*/
        if ( v64 != -1 ) /*0x794675*/
        {
          v53 = Timer::GetTicks() - v64; /*0x794680*/
          if ( v53 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v52 = 360 - v53; /*0x794688*/
        }
        if ( !v52 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v40 = v37; /*0x79439f*/
LABEL_68:
      if ( v40 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v42 = v57; /*0x7946bb*/
LABEL_100:
    if ( v42 && dword_A8DE4C[v70] == 11 || v61 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v61; /*0x7946f2*/
    v54 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7946f6*/
    v91.__pad_0[12] = 90; /*0x7946fd*/
    v91.__pad_0[13] = 49; /*0x794707*/
    v91.__pad_0[14] = v61 + 49; /*0x794714*/
    if ( v54 ) /*0x79471b*/
      strcpy(&v91.__pad_0[15], v54); /*0x79473a*/
    else
      v91.__pad_0[15] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, &v91.__pad_0[12]); /*0x794772*/
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v42; /*0x793e37*/
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
  SessionClass::SetupNetwork((int)dword_A8B238); /*0x794804*/
  if ( dword_A8DA84 > 0 ) /*0x79480f*/
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
    v6 = (char *)*(&dword_A8DA90 + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948d8*/
    v8 = String::GetOrEmpty((char **)&dword_B73E40); /*0x7948da*/
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
    v10 = ToWideStringChar((char *)*(&dword_A8DA90 + v5)); /*0x79491c*/
    v11 = String::GetOrEmpty((char **)&dword_B73E40); /*0x79491e*/
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
void StartGameWOL(ObjectClass *this)
{
  Dialog *DialogIndirect; // eax
  int v2; // esi
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  unsigned __int16 *v13; // eax
  int v14; // eax
  ObjectClass *nextObject; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  ObjectClass *v20; // edx
  char *v21; // eax
  int v22; // esi
  TagClass **p_attachedTag; // eax
  int v24; // eax
  ObjectClass *v25; // ebp
  int v26; // ebx
  ObjectClass *v27; // edx
  int abstractFlags; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  ObjectClass *v37; // ebp
  int v38; // edx
  TagClass **v39; // eax
  int owningHouseIndex; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  ObjectClass *v43; // [esp+0h] [ebp-20h]
  ObjectClass *v44; // [esp+14h] [ebp-Ch]
  ObjectClass *v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+18h] [ebp-8h]
  int v47; // [esp+1Ch] [ebp-4h]
  TagClass **v48; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_UserList.owningHouseIndex ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 20))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x794c32*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 24))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x794c3d*/
    memset(&g_WindowManager.__pad_EC[32], 0xFFu, 0x20u); /*0x794c4e*/
    DialogIndirect = (Dialog *)CreateDialogIndirect(g_hInstance, (HWND)0x130, g_hWnd, (DLGPROC)sub_793280, 0); /*0x794c66*/
    if ( DialogIndirect ) /*0x794c6d*/
      SetupDialog(DialogIndirect, 304); /*0x794c76*/
    v2 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v2; /*0x794c85*/
    }
    while ( v2 ); /*0x794c86*/
    StartGameWOL_Start((ObjectClass *)&unk_A8E9C0, 300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
      stru_B77D80.HashTable_field_0x4C = 0; /*0x794cab*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v4); /*0x794cbe*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= g_WOL_UserList.owningHouseIndex ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x794cf1*/
        || (v5 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v5)) )
      {
LABEL_18:
        Debug::Log(); /*0x794cfd*/
      }
    }
    v6 = NegotiateScenarioWOL(v3); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_SCENARIOS_DO_NOT_MATCH, 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(v43); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x794e00*/
      if ( dword_A8B244 == 1 || dword_A8B244 == 2 || dword_A8B244 == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&stru_B7622C.?, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = dword_A8DA84; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( dword_A8DA84 > 0 ) /*0x794e7c*/
      {
        v12 = hostshort; /*0x794e7e*/
        v13 = &dword_A8E2B2; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*v13 ) /*0x794e89*/
          {
            *v13 = v12; /*0x794e8e*/
            v10 = dword_A8DA84; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          ++v13; /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794ea9*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < g_WOL_UserList.owningHouseIndex ) /*0x794eb7*/
            qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x794ec5*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x794ed1*/
          if ( v14 >= g_WOL_UserList.owningHouseIndex ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x794ee1*/
        {
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar((char *)dword_A8DA78[v16]); /*0x794ef6*/
              if ( !_strcmpi(v17, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= dword_A8DA84 ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            dword_A8DBBC = *(&dword_A8E2B2 + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( *(_DWORD *)&dword_A8B238 != 4 || dword_A8B244 != 3 ) /*0x794f67*/
        dword_A8B3AC = 0; /*0x794f69*/
      dword_A8B554 = 5; /*0x794f74*/
      switch ( *(_DWORD *)&stru_A8B250.__pad_0[24] ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794f98*/
          dword_A8B570 = 60; /*0x794fa2*/
          dword_A8B554 = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794fb4*/
          dword_A8B570 = 45; /*0x794fbe*/
          dword_A8B554 = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          dword_A8B550 = (wchar_t *)30; /*0x794fd5*/
          dword_A8B570 = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fe1*/
          dword_A8B570 = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fef*/
          dword_A8B570 = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x795001*/
          dword_A8B570 = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          dword_A8B550 = (wchar_t *)10; /*0x795013*/
          dword_A8B570 = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( byte_A8E2C8 ) /*0x795026*/
        dword_A8B550 += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      dword_A8B56C = 0; /*0x795038*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = g_WOL_UserList.nextObject; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x79504c*/
          qmemcpy(&g_WebBrowserConfig.occupant, v20, 0x6Cu); /*0x79505a*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 = (ObjectClass *)((char *)v20 + 108); /*0x795066*/
        if ( v19 >= g_WOL_UserList.owningHouseIndex ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x795088*/
        || (v21 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v21)) )
      {
LABEL_77:
        dword_A8B570 = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( (int)*p_attachedTag > v22 ) /*0x7950a9*/
          v22 = (int)*p_attachedTag; /*0x7950ab*/
        ++p_attachedTag; /*0x7950ad*/
      }
      while ( (int)p_attachedTag < (int)&g_WOL_UserList.customSound_controller[1] ); /*0x7950b5*/
      if ( byte_A8E2C8 ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      dword_A8DB9C = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        dword_A8B56C = 10 * ((unsigned int)dword_A8B550 / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)dword_A8B550 / 0xA) <= 0xA ) /*0x7953e3*/
          dword_A8B56C = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            dword_A8DB9C = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          dword_A8DB9C = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &unk_A8E9C0,
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795169*/
        {
          v25 = g_WOL_UserList.nextObject; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < g_WOL_UserList.owningHouseIndex ) /*0x795177*/
              qmemcpy(&g_WebBrowserConfig.occupant, v25, 0x6Cu); /*0x795185*/
            if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 = (ObjectClass *)((char *)v25 + 108); /*0x795195*/
            if ( v24 >= g_WOL_UserList.owningHouseIndex ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x795346*/
          {
            v35 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x795351*/
            if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)dword_A8DB9C ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)dword_A8B550; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = dword_A8B56C; /*0x79539c*/
                  break; /*0x79539c*/
              }
              dword_A8B56C = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      dword_A8B568 = dword_A8B550; /*0x7951f0*/
      memset(&unk_A8B574, 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&hostshort = 1234; /*0x795200*/
      stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x79520a*/
      *(_DWORD *)&dword_841F34 = 1235; /*0x795216*/
      *(_DWORD *)&dword_841F38 = 1236; /*0x795220*/
      *(_DWORD *)&dword_841F3C = 1237; /*0x79522a*/
      *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x795234*/
      if ( byte_A8E2C8 ) /*0x79523e*/
        Process::WaitForExit((Process *)&stru_B052C0.__pad_0[16], 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x795266*/
      {
        if ( (stru_B76AC4.health & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          abstractFlags = 0; /*0x79528b*/
          v46 = 0; /*0x79528f*/
          v47 = 0; /*0x795293*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795297*/
          {
            v44 = g_WOL_UserList.nextObject; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < g_WOL_UserList.owningHouseIndex ) /*0x7952b0*/
                v27 = v44; /*0x7952b2*/
              if ( !abstractFlags || (v29 = v27->?, abstractFlags == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, (const char *)&v27->occupant); /*0x79541a*/
                strcat(&byte_B77A04, Str); /*0x795445*/
                abstractFlags = v27->?; /*0x79544e*/
              }
              else if ( !v46 || v46 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, (const char *)&v27->occupant); /*0x7952fb*/
                v30 = strlen(Str) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, Str, 4 * (v30 >> 2)); /*0x795326*/
                v33 = &Str[4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v47; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v46 = v27->?; /*0x795336*/
              }
              v47 = ++v26; /*0x795460*/
              v44 = (ObjectClass *)((char *)v44 + 108); /*0x795464*/
            }
            while ( v26 < g_WOL_UserList.owningHouseIndex ); /*0x795468*/
          }
        }
        if ( dword_A8B244 == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795486*/
          {
            v39 = &g_WOL_LoginObject.attachedTag; /*0x795492*/
            v45 = g_WOL_UserList.nextObject; /*0x795497*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79549b*/
            v48 = &g_WOL_LoginObject.attachedTag; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)&g_WOL_LoginObject.attachedTag && v38 < owningHouseIndex ) /*0x7954ae*/
                v37 = v45; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, (const char *)&v37->occupant); /*0x79551d*/
                v41 = strlen(Str) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, (const char *)&v37->occupant); /*0x7954dc*/
                v41 = strlen(Str) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], Str, v41); /*0x79554a*/
              owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v48 + 37; /*0x795565*/
              v45 = (ObjectClass *)((char *)v45 + 108); /*0x79556c*/
              v48 += 37; /*0x795570*/
            }
            while ( v38 < g_WOL_UserList.owningHouseIndex ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x7955da*/
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
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794bde*/
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



// ==== 0x00795650  ObjectClass::QueryNATPortWOL  this=ObjectClass  sig=csp ====
char __thiscall QueryNATPortWOL(ObjectClass *this)
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
  void *Items; // eax
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
  VectorClass v26; // [esp+34h] [ebp-100h] BYREF
  int v27; // [esp+44h] [ebp-F0h]
  int v28; // [esp+48h] [ebp-ECh]
  HMODULE hLibModule; // [esp+4Ch] [ebp-E8h]
  void *v30; // [esp+50h] [ebp-E4h]
  int v31; // [esp+54h] [ebp-E0h] BYREF
  HMODULE v32; // [esp+58h] [ebp-DCh]
  NetworkID *v33; // [esp+5Ch] [ebp-D8h]
  int v34; // [esp+60h] [ebp-D4h]
  void *v35; // [esp+64h] [ebp-D0h]
  int v36; // [esp+6Ch] [ebp-C8h] BYREF
  _DWORD v37[10]; // [esp+74h] [ebp-C0h] BYREF
  _BYTE v38[4]; // [esp+9Ch] [ebp-98h] BYREF
  int v39; // [esp+A0h] [ebp-94h] BYREF
  _BYTE v40[4]; // [esp+A4h] [ebp-90h] BYREF
  _BYTE v41[4]; // [esp+A8h] [ebp-8Ch] BYREF
  _BYTE v42[8]; // [esp+ACh] [ebp-88h] BYREF
  char Destination[128]; // [esp+B4h] [ebp-80h] BYREF

  v33 = (NetworkID *)this; /*0x79565c*/
  QueryNATPortWOL_Helper(&v26, 0, 0); /*0x795666*/
  v26.ptr_0 = &DynamicVectorClass<tConnInfoStruct *>::`vftable'; /*0x795670*/
  v28 = 10; /*0x79567b*/
  v27 = 0; /*0x795683*/
  v31 = 0; /*0x795687*/
  if ( dword_B76468 < 1 || dword_B76468 >= (int)g_WOL_UserList.AbstractClass ) /*0x795697*/
  {
    Items = v26.Items; /*0x795c8c*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c90*/
    if ( !v26.Items || !v26.IsAllocated ) /*0x795ca2*/
      return 0; /*0x795ca2*/
LABEL_65:
    __3_YAXPAX_Z(Items); /*0x795ca4*/
    return 0; /*0x795cb0*/
  }
  Debug::Log(); /*0x7956a2*/
  v1 = 0; /*0x7956af*/
  if ( dword_B76468 >= 0 && dword_B76468 < (int)g_WOL_UserList.AbstractClass ) /*0x7956bb*/
    v1 = (char *)g_WOL_UserList.? + 248 * dword_B76468; /*0x7956ca*/
  memset(Destination, 0, sizeof(Destination)); /*0x7956de*/
  strncpy(Destination, v1 + 104, 0x80u); /*0x7956ee*/
  v2 = strchr(Destination, 59); /*0x7956fd*/
  if ( !v2 ) /*0x795707*/
    goto LABEL_58; /*0x795707*/
  *v2 = 0; /*0x795711*/
  sscanf(v2 + 1, "%d", &v31); /*0x79571c*/
  Debug::Log(); /*0x79572e*/
  Debug::Log(); /*0x79573d*/
  Debug::Log(); /*0x795747*/
  v3 = gethostbyname(Destination); /*0x795757*/
  if ( !v3 ) /*0x79575e*/
  {
    WSAGetLastError(); /*0x795760*/
    Debug::Log(); /*0x79576b*/
LABEL_59:
    Items = v26.Items; /*0x795c72*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c76*/
    v11 = v26.Items == 0; /*0x795c7e*/
    goto LABEL_60; /*0x795c7e*/
  }
  v35 = (void *)ntohl(**(_DWORD **)v3->h_addr_list); /*0x795785*/
  Debug::Log(); /*0x7957b4*/
  Debug::Log(); /*0x7957be*/
  LibraryA = LoadLibraryA(aInetmib1Dll); /*0x7957d3*/
  v32 = LibraryA; /*0x7957d7*/
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
  g_WOL_UserList.customSound_controller[1] = (int)GetProcAddress(LibraryA, aSnmpextensioni); /*0x79582c*/
  *(_DWORD *)&stru_B765EC.onBridge = GetProcAddress(LibraryA, aSnmpextensionq); /*0x795839*/
  g_WOL_UserList.? = (int)GetProcAddress(v5, aSnmputilmemall); /*0x795846*/
  ProcAddress = GetProcAddress(v5, aSnmputilmemfre); /*0x795851*/
  dword_B77AC0 = (int (__stdcall *)(_DWORD))ProcAddress; /*0x795859*/
  if ( !g_WOL_UserList.customSound_controller[1] /*0x795882*/
    || !*(_DWORD *)&stru_B765EC.onBridge
    || !g_WOL_UserList.?
    || !ProcAddress )
  {
    Debug::Log(); /*0x795c37*/
    FreeLibrary(v5); /*0x795c46*/
    FreeLibrary(LibraryA); /*0x795c49*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c4b*/
    Items = v26.Items; /*0x795c53*/
    if ( !v26.Items || !v26.IsAllocated ) /*0x795c61*/
      return 0; /*0x795c61*/
    goto LABEL_65; /*0x795c61*/
  }
  v7 = (_DWORD *)((int (__stdcall *)(int))g_WOL_UserList.?)(8); /*0x79588c*/
  v8 = (_DWORD *)((int (__stdcall *)(int))g_WOL_UserList.?)(24); /*0x795896*/
  Debug::Log(); /*0x79589d*/
  TickCount = GetTickCount(); /*0x7958b5*/
  if ( !((int (__stdcall *)(DWORD, _BYTE *, _BYTE *))g_WOL_UserList.customSound_controller[1])(TickCount, v41, v42) ) /*0x7958bc*/
  {
    Debug::Log(); /*0x7958cb*/
    dword_B77AC0(v7); /*0x7958d4*/
    dword_B77AC0(v8); /*0x7958db*/
    FreeLibrary(hLibModule); /*0x7958ec*/
    FreeLibrary(LibraryA); /*0x7958ef*/
LABEL_18:
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7958f1*/
    Items = v26.Items; /*0x7958f9*/
    v11 = v26.Items == 0; /*0x7958fd*/
LABEL_60:
    if ( v11 || !v26.IsAllocated ) /*0x795c88*/
      return 0; /*0x795c88*/
    goto LABEL_65; /*0x795c88*/
  }
  v37[0] = 1; /*0x795910*/
  v37[1] = 3; /*0x795914*/
  v37[2] = 6; /*0x79591c*/
  v37[3] = 1; /*0x795920*/
  v37[4] = 2; /*0x795924*/
  v37[5] = 1; /*0x79592c*/
  v37[6] = 6; /*0x795930*/
  v37[7] = 13; /*0x795934*/
  v37[8] = 1; /*0x79593c*/
  v37[9] = 1; /*0x795940*/
  v30 = (void *)((int (__stdcall *)(int))g_WOL_UserList.?)(40); /*0x795955*/
  qmemcpy(v30, v37, 0x28u); /*0x795962*/
  *v8 = 10; /*0x795964*/
  v8[1] = v37; /*0x79596b*/
  *v7 = v8; /*0x79596e*/
  v7[1] = 1; /*0x795970*/
  v34 = 1; /*0x795973*/
  v12 = 0; /*0x795977*/
  while ( 1 ) /*0x795979*/
  {
    if ( !(*(int (__stdcall **)(int, _DWORD *, _BYTE *, _BYTE *))&stru_B765EC.onBridge)(161, v7, v40, v38) ) /*0x795994*/
    {
      Debug::Log(); /*0x795a7c*/
      dword_B77AC0(v7); /*0x795a85*/
      dword_B77AC0(v8); /*0x795a8c*/
      FreeLibrary(hLibModule); /*0x795a9d*/
      FreeLibrary(v32); /*0x795aa4*/
      goto LABEL_18; /*0x795aa4*/
    }
    if ( *v8 < 0xAu ) /*0x79599e*/
      break; /*0x79599e*/
    v13 = v8[1]; /*0x7959a4*/
    v14 = *(_DWORD *)(v13 + 36); /*0x7959ab*/
    if ( v34 != v14 ) /*0x7959b0*/
    {
      v12 = 0; /*0x7959b2*/
      v34 = *(_DWORD *)(v13 + 36); /*0x7959b4*/
    }
    switch ( v14 ) /*0x7959be*/
    {
      case 1: /*0x7959be*/
        v15 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x7959cc*/
        *v15 = v8[3]; /*0x7959d4*/
        if ( v27 < v26.Capacity /*0x795a01*/
          || (v26.IsAllocated || !v26.Capacity)
          && v28 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v26.ptr_0 + 2))(
               &v26,
               v28 + v26.Capacity,
               0) )
        {
          v16 = v27++; /*0x795a10*/
          *((_DWORD *)v26.Items + v16) = v15; /*0x795a1b*/
        }
        break; /*0x795a1e*/
      case 2: /*0x7959be*/
        v17 = *((_DWORD *)v26.Items + v12++); /*0x795a2a*/
        *(_DWORD *)(v17 + 4) = *(_DWORD *)v8[3]; /*0x795a30*/
        break; /*0x795a33*/
      case 3: /*0x7959be*/
        v18 = *((_DWORD *)v26.Items + v12++); /*0x795a40*/
        *(_WORD *)(v18 + 8) = *((_WORD *)v8 + 6); /*0x795a44*/
        break; /*0x795a48*/
      case 4: /*0x7959be*/
        v19 = *((_DWORD *)v26.Items + v12++); /*0x795a54*/
        *(_DWORD *)(v19 + 12) = *(_DWORD *)v8[3]; /*0x795a5a*/
        break; /*0x795a5d*/
      case 5: /*0x7959be*/
        v20 = *((_DWORD *)v26.Items + v12++); /*0x795a6a*/
        *(_WORD *)(v20 + 16) = *((_WORD *)v8 + 6); /*0x795a6e*/
        break; /*0x795a72*/
      default:
        continue;
    }
  }
  dword_B77AC0(v7); /*0x795aaa*/
  dword_B77AC0(v8); /*0x795ab1*/
  dword_B77AC0(v30); /*0x795abc*/
  Debug::Log(); /*0x795acc*/
  v21 = 0; /*0x795ad8*/
  if ( v27 ) /*0x795adc*/
  {
    do /*0x795bcd*/
    {
      v22 = *(_DWORD *)v26.Items; /*0x795ae6*/
      v30 = (void *)ntohl(*(_DWORD *)(*(_DWORD *)v26.Items + 12)); /*0x795af3*/
      if ( !v21 && v30 == v35 ) /*0x795b0b*/
      {
        Debug::Log(); /*0x795b16*/
        if ( (!v31 || v31 == *(unsigned __int16 *)(v22 + 16)) && (Debug::Log(), *(_DWORD *)v22 == 5) ) /*0x795b53*/
        {
          Debug::Log(); /*0x795b5a*/
          v36 = *(_DWORD *)(v22 + 4); /*0x795b65*/
          NetworkID::Assign(v33, &v39, (int)&v36, *(_WORD *)(v22 + 8)); /*0x795b7f*/
          v21 = 1; /*0x795b84*/
        }
        else
        {
          Debug::Log(); /*0x795b8d*/
        }
      }
      __3_YAXPAX_Z(*(void **)v26.Items); /*0x795b9c*/
      v23 = v27 == 0; /*0x795ba8*/
      if ( v27 > 0 ) /*0x795baa*/
      {
        v24 = 0; /*0x795bad*/
        v23 = v27-- == 1; /*0x795baf*/
        if ( v27 > 0 ) /*0x795bb5*/
        {
          do /*0x795bc9*/
          {
            ++v24; /*0x795bbb*/
            *((_DWORD *)v26.Items + v24 - 1) = *((_DWORD *)v26.Items + v24); /*0x795bbf*/
          }
          while ( v24 < v27 ); /*0x795bc9*/
          v23 = v27 == 0; /*0x795bcb*/
        }
      }
    }
    while ( !v23 ); /*0x795bcd*/
    if ( v21 ) /*0x795bd5*/
    {
      Network::FormatAddress((Network *)v33, 0); /*0x795bdd*/
      Debug::Log(); /*0x795be8*/
    }
  }
  FreeLibrary(hLibModule); /*0x795bfb*/
  FreeLibrary(v32); /*0x795c02*/
  v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c04*/
  if ( v26.Items && v26.IsAllocated ) /*0x795c1a*/
    __3_YAXPAX_Z(v26.Items); /*0x795c1d*/
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
  Network::Disconnect(unk_A8E9C0); /*0x795cf3*/
  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&dword_B73E40), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    LOBYTE(v1) = dword_A8BB08; /*0x79616e*/
    if ( FindAndValidateMap(&byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)dword_B77900 > 0 ) /*0x7961de*/
      {
        v19 = (char *)dword_B77908; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)dword_B77900 ) /*0x7961ec*/
            qmemcpy(&byte_B777B0, v19, 0x6Cu); /*0x7961fa*/
          if ( (byte_B777B0 & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)dword_B77900 ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &byte_B777B0 ) /*0x796216*/
        {
          v20 = CharToWideString(unk_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
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
      while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x796297*/
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
      if ( dword_A8B244 != 3 && (dword_A8B244 == 1 || dword_A8B244 == 2) /*0x796306*/
        || (_BYTE)dword_A8BB08 && !IsRandMap::Sed2((int)dword_A8B238) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)dword_B77900 > 0 ) /*0x796335*/
        {
          v24 = (char *)dword_B77908; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)dword_B77900 ) /*0x796343*/
              qmemcpy(&byte_B777B0, v24, 0x6Cu); /*0x796351*/
            if ( (byte_B777B0 & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)dword_B77900 ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &byte_B777B0 ) /*0x79636d*/
          {
            v25 = CharToWideString(unk_B777D4); /*0x796374*/
            Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x7963d9*/
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
        if ( RequestNetworkFile(&byte_A8B8E0, 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)dword_A8B238) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)dword_A8B230 + 4700, &byte_A8B8E0); /*0x796481*/
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
      if ( Network::Send((int)unk_A8E9C0, (int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x796538*/
      {
        if ( word_A8D810 == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)dword_B77900 > 0 ) /*0x796561*/
          {
            v29 = (char *)dword_B77908; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)dword_B77900 ) /*0x79656f*/
                qmemcpy(&byte_B777B0, v29, 0x6Cu); /*0x79657d*/
              if ( (byte_B777B0 & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)dword_B77900 ); /*0x796569*/
            if ( &byte_B777B0 && !_strcmpi(byte_A8D63C, unk_B777D4) ) /*0x7965a5*/
            {
              if ( dword_A8D638 == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( dword_A8D638 == 42 ) /*0x7965be*/
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
    if ( dword_A8DA84 > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, unk_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= dword_A8DA84 ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < dword_A8DA84 && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
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
    if ( Network::Send((int)unk_A8E9C0, (int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x795dda*/
    {
      if ( word_A8D810 == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( dword_A8DA84 > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + dword_A8DA78 + 4) + 40, (int)&dword_A8D804) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + dword_A8DA78 + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, byte_A8D63C) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = dword_A8D638; /*0x795e66*/
                if ( dword_A8D638 == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = dword_A8D638; /*0x795e7a*/
                  v52[v7 + 5] = dword_A8D638; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = dword_A8D638; /*0x795e98*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = dword_A8D638; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < dword_A8DA84; /*0x795ec3*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = dword_A8D638; /*0x795f01*/
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
          while ( v6 < dword_A8DA84 ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= dword_A8DA84 - 1 ) /*0x795f32*/
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
  if ( !v40 && !v41 && v5 && v4 == dword_A8DA84 - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    byte_A8BB10 = 0; /*0x795fba*/
    dword_A8BB14 = 0; /*0x795fbf*/
    dword_A8BB18 = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( dword_A8DA84 > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&byte_A8BB10 + dword_A8BB18++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < dword_A8DA84 ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)dword_A8B230 + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)dword_A8B238) && !SendNetworkFile(ExistingFileName, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != dword_A8DA84 - 1 || v41 ) /*0x79607d*/
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
  CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7960b4*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7960c5*/
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
      if ( Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, *(wchar_t **)(dword_A8DA78 + 4 * i)) ) /*0x79612f*/
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
  if ( (unsigned int)(8 * Network::GetLobbyStatus(unk_A8E9C0)) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(unk_A8E9C0); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(unk_A8E9C0); /*0x7966d0*/
  Network::SetConnectionParams(unk_A8E9C0, LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(unk_A8E9C0); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}



// ==== 0x00796710  HandleWOLRematch  this=-  sig=ida-proto ====
char HandleWOLRematch()
{
  int v0; // eax
  ObjectClass *nextObject; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  ObjectClass *i; // edx
  Network *v8; // [esp+0h] [ebp-254h]
  _WORD v9[3]; // [esp+Eh] [ebp-246h] BYREF
  Waypoint v10[2]; // [esp+14h] [ebp-240h] BYREF
  int v11; // [esp+8Ch] [ebp-1C8h] BYREF
  char v12[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !stru_B76AC4.ambientSoundController[4] || g_WOL_UserList.owningHouseIndex < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796742*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < g_WOL_UserList.owningHouseIndex ) /*0x796750*/
        qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x79675e*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x79676a*/
      if ( v0 >= g_WOL_UserList.owningHouseIndex ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x79677a*/
    {
      v2 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x796781*/
      if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed(&unk_A8E9C0) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  *(_DWORD *)&v9[1] = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk((int)&unk_A8E9C0, 0, (int)&v11, (int)&v9[1], (int)v10, (int)v9, 0) || v11 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796833*/
    qmemcpy(&v10[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796844*/
  *(_DWORD *)&v10[0].__pad_0[44] = 0; /*0x79684a*/
  Network::SyncPlayerList(v8); /*0x796852*/
  if ( !Network::Send((Network *)&unk_A8E9C0, (int)&v11, (int)&v9[1], (int)v10, (int)v9) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v11 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !(unsigned __int8)NetworkID::Compare((bool *)v10[0].__pad_0, (int)&stru_A8BB1C) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v9[0] != 0xAA04 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7968b8*/
      qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7968c6*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 || _strcmpi(v12, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(&unk_A8E9C0, 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}



// ==== 0x00796960  ObjectClass::Event_Play  this=ObjectClass  sig=csp ====
char Event_Play(ObjectClass *this)
{
  Network *v1; // edi
  int owningHouseIndex; // eax
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  ObjectClass *nextObject; // edx
  char *v7; // eax
  Waypoint v9[2]; // [esp+8h] [ebp-240h] BYREF
  int v10[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v11; // [esp+244h] [ebp-4h]
  char v12; // [esp+246h] [ebp-2h]

  LOBYTE(owningHouseIndex) = dword_A8B238; /*0x796960*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x796970*/
    return owningHouseIndex; /*0x796970*/
  Waypoint::InitInvalid(v9); /*0x79697a*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79697f*/
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x796987*/
    return owningHouseIndex; /*0x796987*/
  v3 = 0; /*0x79698d*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v3); /*0x7969a3*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969b0*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x7969df*/
    || (v4 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
        (owningHouseIndex = _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4)) != 0) )
  {
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969e5*/
LABEL_10:
    if ( !g_NetworkLobbyState && stru_B76AC4.ambientSoundController[4] ) /*0x796a00*/
    {
      if ( owningHouseIndex > 0 ) /*0x796a0a*/
        qmemcpy(&v9[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796a1b*/
      *(_DWORD *)&v9[0].__pad_0[44] = 0; /*0x796a21*/
      Network::SyncPlayerList(v1); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress(&stru_A8BB1C, 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v10, 0, sizeof(v10)); /*0x796a6f*/
      v11 = 0; /*0x796a79*/
      v12 = 0; /*0x796a7b*/
      v10[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v10[1], (char *)*dword_A8DA78, -1); /*0x796a90*/
      v5 = 0; /*0x796a9b*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796a9f*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x796aad*/
            qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x796abb*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v5; /*0x796ac5*/
          nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x796ac6*/
          if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x796ae4*/
        {
          v7 = CharToWideString(&g_WebBrowserConfig.ambientSoundController[3]); /*0x796aeb*/
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v10, 455, 1, (wchar_t *)v7); /*0x796b04*/
        }
      }
LABEL_24:
      LOBYTE(owningHouseIndex) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return owningHouseIndex; /*0x796ad4*/
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
int Game::CreateAIPlayer(Game *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v2 = v1; /*0x796def*/
  if ( v1 ) /*0x796df8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796dfd*/
  else
    v2 = 0; /*0x796e04*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796e1f*/
  *(_DWORD *)(v2 + 75) = 0; /*0x796e26*/
  *(_DWORD *)(v2 + 83) = 3; /*0x796e29*/
  v6 = 0; /*0x796e33*/
  v9 = 0; /*0x796e37*/
  v8 = 0; /*0x796e3b*/
  v7 = 1381040650; /*0x796e4e*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x796e53*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x796e99*/
    dword_A8DA78[v3] = v2; /*0x796ea8*/
  }
  v4 = dword_A8B54C; /*0x796eab*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796eb2*/
  result = v4 + 1; /*0x796ebd*/
  dword_A8B54C = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}



// ==== 0x00796ED0  Game::CreateAIPlayer_Potato  this=Game  sig=csp ====
int Game::CreateAIPlayer_Potato(Game *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v2 = v1; /*0x796edf*/
  if ( v1 ) /*0x796ee8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796eed*/
  else
    v2 = 0; /*0x796ef4*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796f0f*/
  *(_DWORD *)(v2 + 75) = 0; /*0x796f16*/
  *(_DWORD *)(v2 + 83) = 0; /*0x796f19*/
  v6 = 0; /*0x796f1f*/
  v9 = 0; /*0x796f23*/
  v8 = 0; /*0x796f27*/
  v7 = 1628701194; /*0x796f3a*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x796f3f*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x796f85*/
    dword_A8DA78[v3] = v2; /*0x796f94*/
  }
  v4 = dword_A8B54C; /*0x796f97*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796f9e*/
  result = v4 + 1; /*0x796fa9*/
  dword_A8B54C = result; /*0x796faa*/
  return result; /*0x796f9c*/
}



// ==== 0x00796FC0  ObjectClass::Network_Init_796FC0  this=ObjectClass  sig=csp ====
int Network_Init_796FC0(ObjectClass *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796fca*/
  v2 = v1; /*0x796fcf*/
  if ( v1 ) /*0x796fd6*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796fdb*/
  else
    v2 = 0; /*0x796fe2*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aPotatotoo, -1); /*0x796fed*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796ff7*/
  *(_DWORD *)(v2 + 75) = 1; /*0x796ffe*/
  *(_DWORD *)(v2 + 83) = 2; /*0x797005*/
  v6 = 0; /*0x79701d*/
  v9 = 0; /*0x797025*/
  v8 = 0; /*0x79702a*/
  v7 = -95419894; /*0x797039*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x79703e*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x79707a*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x797087*/
    dword_A8DA78[v3] = v2; /*0x797096*/
  }
  v4 = dword_A8B54C; /*0x797099*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x79709e*/
  dword_A8B54C = v4 + 1; /*0x7970aa*/
  stru_A8BB1C.Network_field_0x0 = *(_DWORD *)(v2 + 40); /*0x7970b1*/
  result = *(_DWORD *)(v2 + 44); /*0x7970b7*/
  stru_A8BB1C.Network_field_0x4 = (void *)result; /*0x7970ba*/
  stru_A8BB1C.Network_field_0x8 = *(void **)(v2 + 48); /*0x7970c3*/
  return result; /*0x7970c2*/
}



// ==== 0x007970D0  ObjectClass::InitNetworkGame  this=ObjectClass  sig=csp ====
int InitNetworkGame(ObjectClass *this)
{
  int i; // esi
  int v2; // esi
  TagClass **p_attachedTag; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  Game *v7; // [esp+0h] [ebp-43Ch]
  Game *v8; // [esp+0h] [ebp-43Ch]
  Game *v9; // [esp+0h] [ebp-43Ch]
  Game *v10; // [esp+0h] [ebp-43Ch]
  ObjectClass *v11; // [esp+0h] [ebp-43Ch]
  Game *v12; // [esp+0h] [ebp-43Ch]
  char v13; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v15[16]; // [esp+18h] [ebp-424h] BYREF
  int v16; // [esp+28h] [ebp-414h]
  int v17; // [esp+2Ch] [ebp-410h]
  int v18; // [esp+30h] [ebp-40Ch]
  int v19; // [esp+34h] [ebp-408h]
  int v20; // [esp+38h] [ebp-404h] BYREF
  int v21[2]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  *(_DWORD *)&g_WOL_BuddyList.__pad_20[4] = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)g_WOL_BuddyList.__pad_14 = 0; /*0x7970f1*/
  strcpy((char *)&g_WebBrowserConfig.location[2], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x797115*/
  PtrVector::Destroy(&stru_A8DA74); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v13 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(v7); /*0x797197*/
      Game::CreateAIPlayer_Potato(v12); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(v7); /*0x79718b*/
      Game::CreateAIPlayer(v10); /*0x797190*/
    }
    Network_Init_796FC0(v11); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0((ObjectClass *)v7); /*0x797160*/
    Game::CreateAIPlayer(v8); /*0x797165*/
    Game::CreateAIPlayer_Potato(v9); /*0x79716a*/
    v13 = 1; /*0x79716f*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 48))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x7971ae*/
  strcpy(v15, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v16 = 0; /*0x7971d1*/
  v17 = 0; /*0x7971de*/
  v18 = 0; /*0x7971e4*/
  v19 = 0; /*0x7971ec*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7971f7*/
  {
    Network::CopyAddress((Network *)(dword_A8DA78[i] + 40), &v20, (int)v21); /*0x79720e*/
    (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 44))( /*0x797221*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v15,
      0);
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(word_A8E258, (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  dword_A8E2AC = -1; /*0x797267*/
  dword_A8B3AC = 0; /*0x797271*/
  *(_DWORD *)&stru_A8EB00.?[432] = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = 10; /*0x797282*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = 10000; /*0x797288*/
  byte_A8B31F = 0; /*0x797292*/
  stru_A8B250.__pad_0[16] = 1; /*0x797297*/
  stru_A8B250.__pad_0[17] = 1; /*0x79729d*/
  dword_A8B320 = 1; /*0x7972a3*/
  byte_A8B31C = 1; /*0x7972a9*/
  byte_A8B31D = 0; /*0x7972af*/
  stru_A8B250.__pad_0[8] = 1; /*0x7972b4*/
  byte_A8B31E = 0; /*0x7972ba*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x7972bf*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = 0; /*0x7972c4*/
  stru_A8B250.__pad_0[18] = 1; /*0x7972c9*/
  stru_A8B250.__pad_0[19] = 1; /*0x7972cf*/
  stru_A8B250.__pad_0[20] = 0; /*0x7972d5*/
  stru_A8B250.__pad_0[28] = 1; /*0x7972da*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = 1; /*0x7972e0*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = 2; /*0x7972fb*/
  stru_A8EB00.ObjectTypeClass[24] = 2; /*0x797301*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x797307*/
  dword_A8B554 = 5; /*0x797315*/
  switch ( *(_DWORD *)&stru_A8B250.__pad_0[24] ) /*0x797325*/
  {
    case 0: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x79732c*/
      dword_A8B570 = 60; /*0x797332*/
      dword_A8B554 = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x797344*/
      dword_A8B570 = 45; /*0x79734a*/
      dword_A8B554 = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      dword_A8B550 = (wchar_t *)30; /*0x797361*/
      dword_A8B570 = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797372*/
      dword_A8B570 = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x79737e*/
      dword_A8B570 = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797394*/
      dword_A8B570 = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      dword_A8B550 = (wchar_t *)10; /*0x7973aa*/
      dword_A8B570 = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  dword_A8B56C = 0; /*0x7973be*/
  if ( !v13 ) /*0x7973c4*/
    dword_A8B570 = 0; /*0x7973c6*/
  v2 = 0; /*0x7973d1*/
  if ( dword_A8DA84 > 0 ) /*0x7973d5*/
  {
    p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7973d7*/
    v4 = dword_A8DA84; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( (int)*p_attachedTag > v2 ) /*0x7973e2*/
        v2 = (int)*p_attachedTag; /*0x7973e4*/
      ++p_attachedTag; /*0x7973e6*/
      --v4; /*0x7973e9*/
    }
    while ( v4 ); /*0x7973ea*/
  }
  dword_A8DB9C = (wchar_t *)1; /*0x7973ee*/
  if ( !v2 || v2 == 1000 ) /*0x797400*/
  {
    dword_A8B570 = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v2 <= 1000 ) /*0x79741a*/
    {
      if ( v2 < 600 ) /*0x79742a*/
        dword_A8DB9C = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      dword_A8DB9C = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      &unk_A8E9C0,
      120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000,
      -1,
      8 * (120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000),
      1);
    if ( v13 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(&unk_A8E9C0, 5, -1, 120); /*0x797493*/
      switch ( (unsigned int)dword_A8DB9C ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v5 = 2 * (_DWORD)dword_A8B550; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v5 = dword_A8B56C; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      dword_A8B56C = 10 * (v5 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  dword_A8B568 = dword_A8B550; /*0x797543*/
  memset(&unk_A8B574, 0, 0x340u); /*0x797556*/
  *(_DWORD *)&hostshort = 1234; /*0x79755e*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x797568*/
  *(_DWORD *)&dword_841F34 = 1235; /*0x79756e*/
  *(_DWORD *)&dword_841F38 = 1236; /*0x797578*/
  *(_DWORD *)&dword_841F3C = 1237; /*0x797582*/
  *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x79758c*/
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
    dword_B77DC8 = 0; /*0x7977a6*/
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
char FetchWOLData(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  HANDLE *v2; // esi
  int v3; // esi
  wchar_t *v5; // eax
  int v6; // ebx
  TechnoTypeClass *v7; // ecx
  DWORD v8; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  int v18; // esi
  HWND v19; // eax
  HWND v20; // eax
  TechnoTypeClass *v21; // ecx
  DWORD i; // esi
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  char *v32; // [esp-4h] [ebp-18h]
  void *v33; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v32 = byte_B76A2C; /*0x79780e*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
LABEL_7:
    ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, (char)v32); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v2 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v2++); /*0x797823*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x797832*/
  v3 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797853*/
         g_UIPointerTable,
         &g_WindowManager.__pad_70[28],
         stru_B76AC4.ambientSoundController[3],
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v3 ) /*0x797876*/
  {
    LOBYTE(v32) = 0; /*0x797878*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v5 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  WideString::Assign((wchar_t **)&v33, v5); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v33, 0); /*0x7978cf*/
  DeleteAndZero::Alt((DeleteAndZero *)&v33); /*0x7978d8*/
  do /*0x797949*/
  {
    v6 = 30000; /*0x7978ed*/
    v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v8 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v6 -= 100; /*0x7978fe*/
        if ( v6 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(v7); /*0x797909*/
        v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v8 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
LABEL_25:
      v15 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v15, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x797a20*/
      v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a2a*/
      if ( v16 ) /*0x797a31*/
      {
        stru_B77D80.HashTable_field_0x48 = 0; /*0x797a37*/
        CloseDialog(v16, 0); /*0x797a3d*/
      }
      Current = (HWND)Dialog::GetCurrent(); /*0x797a42*/
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
    ResetEvent(*(&Handles + v8)); /*0x797924*/
    switch ( v8 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v9 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797956*/
        if ( v9 ) /*0x79795d*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797963*/
          CloseDialog(v9, 0); /*0x797969*/
        }
        v10 = (HWND)Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v10, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v12 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v12, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7979b6*/
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7979c0*/
        if ( v13 ) /*0x7979c7*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x7979cd*/
          CloseDialog(v13, 0); /*0x7979d3*/
        }
        v14 = (HWND)Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v14, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v8 != 11 ); /*0x797949*/
  v18 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797a83*/
          g_UIPointerTable,
          &g_WindowManager.__pad_70[28],
          stru_B76AC4.ambientSoundController[3],
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v18 ) /*0x797a94*/
  {
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a9b*/
    if ( v19 ) /*0x797aa2*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x797aa8*/
      CloseDialog(v19, 0); /*0x797aae*/
    }
    v20 = (HWND)Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v20, 1344); /*0x797abe*/
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
        Game::ProcessIdle(v21); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v25 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v25, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x797b8b*/
        v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b95*/
        if ( v26 ) /*0x797b9c*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797ba2*/
          CloseDialog(v26, 0); /*0x797ba8*/
        }
        v27 = (HWND)Dialog::GetCurrent(); /*0x797bad*/
        v28 = GetDlgItem(v27, 1344); /*0x797bb8*/
        if ( v28 ) /*0x797bc0*/
          SetFocus(v28); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797bd6*/
        if ( v29 ) /*0x797bdd*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797be3*/
          CloseDialog(v29, 0); /*0x797be9*/
        }
        v30 = (HWND)Dialog::GetCurrent(); /*0x797bee*/
        v31 = GetDlgItem(v30, 1344); /*0x797bf9*/
        if ( v31 ) /*0x797c01*/
          SetFocus(v31); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b2f*/
    if ( v23 ) /*0x797b36*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x797b3c*/
      CloseDialog(v23, 0); /*0x797b42*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v24, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}



// ==== 0x00797C20  ObjectClass::InitVersionStringsWOL  this=ObjectClass  sig=csp ====
char InitVersionStringsWOL(ObjectClass *this)
{
  char result; // al
  int *p_abstractFlags; // esi
  int v3; // edi
  int i; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  String *v13; // ecx
  int lastLayer; // esi
  String *v15; // ecx
  int v16; // esi
  String *v17; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (stru_B76900.customSound_controller[1] & 1) == 0 ) /*0x797c38*/
    {
      LOBYTE(stru_B76900.customSound_controller[1]) |= 1u; /*0x797c3d*/
      p_abstractFlags = &stru_B76900.?; /*0x797c42*/
      v3 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(p_abstractFlags++); /*0x797c4e*/
        --v3; /*0x797c56*/
      }
      while ( v3 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((String *)&stru_B76900.?, a01W024V01); /*0x797c71*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W026V01); /*0x797c80*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((String *)&stru_B76900.occupant, a01W020V01); /*0x797cad*/
    String::Assign_Bool((String *)&stru_B76900.owningHouseIndex, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((String *)&stru_B76900.fallRate, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((String *)&stru_B76900.nextObject, a00W024V00); /*0x797cda*/
    String::Assign_Bool((String *)&stru_B76900.attachedTag, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((String *)&stru_B76900.attachedBomb, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((String *)stru_B76900.ambientSoundController, a00W018V00); /*0x797d07*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[1], a00W020V00); /*0x797d16*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[2], a01W032V01); /*0x797d25*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[3], a01W030V01); /*0x797d34*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[4], a00W031V00); /*0x797d43*/
    String::Assign_Bool((String *)stru_B76900.customSound_controller, a00W029V00); /*0x797d52*/
    for ( i = 0; i < *(int *)&g_WindowManager.__pad_EC[68]; ++i ) /*0x797d60*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)&g_WindowManager.__pad_EC[76] + 4 * i), 0); /*0x797d6b*/
    v5 = 0; /*0x797d7f*/
    for ( *(_DWORD *)&g_WindowManager.__pad_EC[68] = 0; v5 < *(_DWORD *)&stru_B736F8; ++v5 ) /*0x797d89*/
      Object::DtorWithDelete((Object *)((char *)dword_B73700 + 4 * v5), 0); /*0x797d95*/
    v6 = 0; /*0x797da9*/
    for ( stru_B736F8 = 0; v6 < stru_B76AC4.ambientSoundController[0]; ++v6 ) /*0x797db3*/
      Object::DtorWithDelete((Object *)(stru_B76AC4.ambientSoundController[2] + 4 * v6), 0); /*0x797dbf*/
    v7 = 0; /*0x797dd3*/
    for ( stru_B76AC4.ambientSoundController[0] = 0; v7 < *(int *)stru_B76510.__pad_0; ++v7 ) /*0x797ddd*/
      Object::DtorWithDelete((Object *)(stru_B76510.StringVector_field_0x08 + 4 * v7), 0); /*0x797de8*/
    v8 = 0; /*0x797dfc*/
    for ( *(_DWORD *)stru_B76510.__pad_0 = 0; v8 < (int)g_WindowManager.Array_field_0x40; ++v8 ) /*0x797e06*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_48 + 4 * v8), 0); /*0x797e12*/
    v9 = 0; /*0x797e26*/
    for ( g_WindowManager.Array_field_0x40 = 0; v9 < g_WebBrowserConfig.lastLayer; ++v9 ) /*0x797e30*/
      Object::DtorWithDelete((Object *)(g_WebBrowserConfig.location[0] + 4 * v9), 0); /*0x797e3c*/
    v10 = 0; /*0x797e50*/
    for ( g_WebBrowserConfig.lastLayer = 0; v10 < *(int *)stru_B73708.__pad_0; ++v10 ) /*0x797e5a*/
      Object::DtorWithDelete((Object *)(stru_B73708.DynamicVector_field_0x8 + 4 * v10), 0); /*0x797e65*/
    v11 = 0; /*0x797e79*/
    for ( *(_DWORD *)stru_B73708.__pad_0 = 0; v11 < *(int *)stru_B76188.__pad_0; ++v11 ) /*0x797e83*/
      Object::DtorWithDelete((Object *)(stru_B76188.DynamicVector_field_0x8 + 4 * v11), 0); /*0x797e8f*/
    *(_DWORD *)stru_B76188.__pad_0 = 0; /*0x797ea9*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797eaf*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797ebf*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797ecf*/
    StringVector::Insert((StringVector *)stru_B76AC4.ambientSoundController, (const char **)&stru_B76900.?, 0); /*0x797edf*/
    StringVector::Insert((StringVector *)stru_B76AC4.ambientSoundController, (const char **)&stru_B76900.occupant, 0); /*0x797eef*/
    StringVector::Insert( /*0x797eff*/
      (StringVector *)stru_B76AC4.ambientSoundController,
      (const char **)&stru_B76900.owningHouseIndex,
      0);
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.fallRate, 0); /*0x797f0f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.nextObject, 0); /*0x797f1f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.attachedTag, 0); /*0x797f2f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.attachedBomb, 0); /*0x797f3f*/
    StringVector::Insert(&stru_B76510, (const char **)stru_B76900.ambientSoundController, 0); /*0x797f4f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.ambientSoundController[1], 0); /*0x797f5f*/
    StringVector::Insert( /*0x797f6f*/
      (StringVector *)&g_WindowManager.Array_field_0x40,
      (const char **)&stru_B76900.ambientSoundController[2],
      0);
    v12 = 0; /*0x797f79*/
    if ( *(int *)stru_B73708.__pad_0 < 0 ) /*0x797f7d*/
      v12 = *(_DWORD *)stru_B73708.__pad_0; /*0x797f7f*/
    if ( v12 >= *(int *)&stru_B73708.DynamicVector_field_0x1[3] ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797f8e*/
    if ( *(int *)stru_B73708.__pad_0 >= *(int *)&stru_B73708.DynamicVector_field_0x1[3] ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797fa7*/
    if ( v12 < *(int *)stru_B73708.__pad_0 ) /*0x797fb3*/
      memcpy( /*0x797fd0*/
        (void *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12 + 4),
        (const void *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12),
        4 * (*(_DWORD *)stru_B73708.__pad_0 + 0x3FFFFFFF * v12));
    v13 = (String *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12); /*0x797fde*/
    if ( v13 ) /*0x797fe3*/
      String::AssignFromPtr(v13, (const char **)&stru_B76900.ambientSoundController[3]); /*0x797fea*/
    lastLayer = 0; /*0x797ffb*/
    ++*(_DWORD *)stru_B73708.__pad_0; /*0x797fff*/
    if ( g_WebBrowserConfig.lastLayer < 0 ) /*0x798005*/
      lastLayer = g_WebBrowserConfig.lastLayer; /*0x798007*/
    if ( lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x79800f*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x798016*/
    if ( g_WebBrowserConfig.lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x798028*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x79802f*/
    if ( lastLayer < g_WebBrowserConfig.lastLayer ) /*0x79803b*/
      memcpy( /*0x798058*/
        (void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer + 4),
        (const void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer),
        4 * (g_WebBrowserConfig.lastLayer + 0x3FFFFFFF * lastLayer));
    v15 = (String *)(g_WebBrowserConfig.location[0] + 4 * lastLayer); /*0x798066*/
    if ( v15 ) /*0x79806b*/
      String::AssignFromPtr(v15, (const char **)&stru_B76900.ambientSoundController[4]); /*0x798072*/
    v16 = 0; /*0x798083*/
    ++g_WebBrowserConfig.lastLayer; /*0x798087*/
    if ( *(int *)stru_B76188.__pad_0 < 0 ) /*0x79808d*/
      v16 = *(_DWORD *)stru_B76188.__pad_0; /*0x79808f*/
    if ( v16 >= *(int *)&stru_B76188.DynamicVector_field_0x1[3] ) /*0x798097*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x79809e*/
    if ( *(int *)stru_B76188.__pad_0 >= *(int *)&stru_B76188.DynamicVector_field_0x1[3] ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x7980b7*/
    if ( v16 < *(int *)stru_B76188.__pad_0 ) /*0x7980c3*/
      memcpy( /*0x7980e0*/
        (void *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16 + 4),
        (const void *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16),
        4 * (*(_DWORD *)stru_B76188.__pad_0 + 0x3FFFFFFF * v16));
    v17 = (String *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16); /*0x7980ee*/
    if ( v17 ) /*0x7980f4*/
      String::AssignFromPtr(v17, (const char **)stru_B76900.customSound_controller); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    result = stru_B76188.__pad_0[0] + 1; /*0x79810c*/
    ++*(_DWORD *)stru_B76188.__pad_0; /*0x79810d*/
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
              dword_A8B244 = 5; /*0x798887*/
              dword_A8B248 = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              dword_A8B244 = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              dword_A8B244 = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              dword_A8B244 = 4; /*0x79880a*/
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
              dword_A8B244 = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              dword_A8B244 = 1; /*0x798746*/
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
              dword_A8B244 = 5; /*0x798dab*/
              dword_A8B248 = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              dword_A8B244 = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              dword_A8B244 = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              dword_A8B244 = 4; /*0x798d2c*/
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
              dword_A8B244 = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              dword_A8B244 = 1; /*0x798c68*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&dword_B73E40) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&dword_B73E40); /*0x7989b5*/
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&dword_B73E40, (wchar_t **)1); /*0x7989ca*/
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
BOOL __usercall RunWOLMainLoop_Read@<eax>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  int v3; // esi
  char *v4; // eax
  int v5; // esi
  char *v6; // eax
  BOOL v7; // esi
  int v9; // [esp+1Ch] [ebp-38h]
  int v10; // [esp+28h] [ebp-2Ch]
  ObjectClass *v11; // [esp+2Ch] [ebp-28h]
  Flag v12; // [esp+34h] [ebp-20h] BYREF
  OwnerDrawControl v13; // [esp+48h] [ebp-Ch] BYREF

  *(_DWORD *)v12.__pad_0 = 0; /*0x798de9*/
  LOBYTE(v12.Flag_field_0x04) = 0; /*0x798df1*/
  ReadRegistryOptionsWOL((ObjectClass *)&v12); /*0x798df6*/
  Screen::Capture(1, 0, v2, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(stru_B76188.__pad_20) && String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x798e27*/
  {
    v3 = *(_DWORD *)g_UIPointerTable; /*0x798e3f*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v4 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v3 + 20))( /*0x798e67*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      v4,
      v9,
      -1,
      0,
      0);
    v5 = *(_DWORD *)g_UIPointerTable; /*0x798e7c*/
    v10 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v6 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x798e84*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v5 + 56))( /*0x798e9c*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      v6,
      v10);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( (unsigned __int8)Flag::IsNot2(&v12) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v12.Flag_field_0x08); /*0x798eb5*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798ece*/
    RunDialog( /*0x798ed2*/
      0x10Eu,
      (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer,
      (LPARAM)&v12.Flag_field_0x08);
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798ed7*/
    v7 = dword_A8B244 != 0; /*0x798eed*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v12.Flag_field_0x08); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v13); /*0x798f04*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)&v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798f26*/
    v7 = dword_A8B244 != 0; /*0x798f3b*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(&v13); /*0x798f41*/
  }
  return v7; /*0x798efa*/
}



// ==== 0x00798F50  ObjectClass::MainLobbyDlgProcWOL_Read  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MainLobbyDlgProcWOL_Read(ObjectClass *this)
{
  ObjectClass *PlayerProfile; // eax
  int i; // ebx
  LRESULT v4; // eax
  WPARAM v5; // esi
  wchar_t *v7; // [esp-4h] [ebp-30h]
  DeleteAndZero v8; // [esp+10h] [ebp-1Ch] BYREF
  void **v9; // [esp+1Ch] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-Ch]
  __int64 v11; // [esp+24h] [ebp-8h] BYREF

  ListBox::Clear((ListBox *)this); /*0x798f59*/
  v8.DeleteAndZero_field_0x08 = 0; /*0x798f69*/
  (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 208))(ppv, &v8.DeleteAndZero_field_0x08); /*0x798f71*/
  LODWORD(v11) = 0; /*0x798f7b*/
  BYTE4(v11) = 0; /*0x798f7f*/
  ReadRegistryOptionsWOL((ObjectClass *)&v11); /*0x798f84*/
  ComPtr::Constructor((ComPtr *)&v9); /*0x798f8d*/
  v9 = &rc_ptr<PlayerProfile>::`vftable'; /*0x798f9b*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v11) ) /*0x798f9f*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v8, (const char **)&g_WindowManager.__pad_EC[684]); /*0x798fb1*/
    ComPtr::Set((ComPtr *)&v9, (int)PlayerProfile->?); /*0x798fbe*/
    *(_DWORD *)v8.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x798fc7*/
    ComPtr::Release((ComPtr *)&v8); /*0x798fcb*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v9, stru_B75E48.ComPtr_field_0x04); /*0x798fdd*/
  }
  if ( v8.DeleteAndZero_field_0x08 > 0 ) /*0x798fe8*/
  {
    for ( i = v8.DeleteAndZero_field_0x08 - 1; i >= 0; --i ) /*0x798fed*/
    {
      FormatLocaleStringWOL((wchar_t **)&v8, i); /*0x798ffb*/
      v7 = WideString::GetOrEmpty((wchar_t **)&v8); /*0x79900e*/
      if ( i >= 2 ) /*0x799007*/
        v4 = SendMessageA((HWND)this, 0x4C2u, 0, (LPARAM)v7); /*0x799026*/
      else
        v4 = SendMessageA((HWND)this, 0x4C1u, 0, (LPARAM)v7); /*0x799016*/
      v5 = v4; /*0x799028*/
      SendMessageA((HWND)this, 0x151u, v4, i); /*0x799032*/
      if ( v10 && i == *(_DWORD *)(v10 + 16) ) /*0x79903f*/
        SendMessageA((HWND)this, 0x14Eu, v5, 0); /*0x79904a*/
      DeleteAndZero::Alt(&v8); /*0x799050*/
    }
  }
  v9 = &rc_ptr<PlayerProfile>::`vftable'; /*0x799061*/
  return ComPtr::Release((ComPtr *)&v9); /*0x79906a*/
}



// ==== 0x00799080  MainLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall MainLobbyDlgProcWOL(String hWnd, ObjectClass a2)
{
  unsigned int v2; // ebx
  char *ptr_4; // ebp
  Dialog *v4; // esi
  unsigned int ptr_0; // edi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v8; // ebx
  LRESULT v9; // eax
  int v10; // ebp
  char v11; // al
  BOOL v12; // eax
  HWND v13; // eax
  BOOL v14; // eax
  HWND v15; // eax
  LRESULT v16; // esi
  LRESULT v17; // eax
  LRESULT v18; // esi
  LRESULT v19; // eax
  LRESULT v20; // esi
  LRESULT v21; // eax
  char **v22; // eax
  char v23; // bl
  ObjectClass *v24; // esi
  LRESULT v25; // eax
  HWND v26; // edi
  LRESULT v27; // ebx
  char **v28; // eax
  char **v29; // eax
  LRESULT v30; // eax
  HWND v31; // eax
  HWND v32; // esi
  unsigned int v33; // ebx
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  wchar_t *v36; // eax
  LRESULT v37; // edi
  wchar_t *v38; // eax
  LRESULT v39; // eax
  ObjectClass *v40; // eax
  HWND v41; // eax
  LRESULT v42; // eax
  BOOL v43; // ebp
  HWND v44; // ... [19471 chars total]



// ==== 0x00799CD0  RunWOLMainLoop_Helper  this=-  sig=ida-proto ====
__int64 sub_799CD0()
{
  memset(&dword_B76B10, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  dword_B73E10 = 0; /*0x799cf4*/
  dword_B76AE0 = 0; /*0x799cfa*/
  dword_B77900 = 0; /*0x799d00*/
  dword_B77DD0 = 0; /*0x799d06*/
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
int RunWOLMainLoop_Init(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  BOOL v10; // esi
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+24h] [ebp-1Ch]
  DeleteAndZero v13; // [esp+30h] [ebp-10h] BYREF

  result = LoginFlowWOL_Reset(v1); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((wchar_t **)&v13, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v13, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v13); /*0x799d75*/
    v4 = 8960; /*0x799d7f*/
    if ( dword_A8B244 != 3 ) /*0x799d87*/
      v4 = 10496; /*0x799d89*/
    v5 = LoginWOL(v4); /*0x799d8e*/
    if ( v5 ) /*0x799d96*/
    {
      if ( v5 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( g_UIPointerTable && strlen(stru_B76188.__pad_20) && String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x799dd2*/
      {
        v6 = *(_DWORD *)g_UIPointerTable; /*0x799dea*/
        v11 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v7 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x799dfa*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x799e12*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v7,
          v11,
          -1,
          0,
          0);
        v8 = *(_DWORD *)g_UIPointerTable; /*0x799e27*/
        v12 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v9 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x799e2f*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v8 + 56))( /*0x799e47*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v9,
          v12);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)&v13.DeleteAndZero_field_0x04); /*0x799e53*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e6c*/
      RunDialog( /*0x799e70*/
        0x114u,
        (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL,
        (LPARAM)&v13.DeleteAndZero_field_0x04);
      System_Init_72CA10(v1); /*0x799e75*/
      v10 = dword_A8B244 != 0; /*0x799e8b*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable((OwnerDrawControl *)&v13.DeleteAndZero_field_0x04); /*0x799e91*/
      return v10; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/
}



// ==== 0x00799EA0  OptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall OptionsDlgProcWOL(String hWnd, ObjectClass a2)
{
  char *ptr_4; // ebp
  Dialog *v3; // esi
  unsigned int v4; // edi
  unsigned int ptr_0; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v8; // eax
  bool v9; // dl
  int i; // ebx
  char *v11; // eax
  char v12; // al
  HWND v13; // edi
  char *v14; // eax
  int v15; // eax
  HWND v16; // edi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // edi
  char *v20; // eax
  LRESULT v21; // ebp
  LRESULT v22; // eax
  HWND v23; // ebp
  char *v24; // eax
  int v25; // eax
  HWND v26; // ebp
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  LRESULT v30; // eax
  LRESULT v31; // ecx
  LRESULT v32; // edi
  HWND v33; // esi
  LRESULT v34; // eax
  LRESULT v35; // edi
  HWND v36; // esi
  LRESULT v37; // eax
  HWND v38; // eax
  int v39; // eax
  HWND v40; // edi
  int v41; // ebx
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // edi
  char *v45; // eax
  char **v46; // eax
  char **v47; // eax
  HWN... [25686 chars total]



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
          ReadSettingsWOL(&dword_B73E40); /*0x79aeec*/
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
int __thiscall FillBuddyListWOL(ObjectClass *this)
{
  LRESULT (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // ebp
  HWND DlgItem; // ebx
  int v3; // edi
  int v4; // esi
  int *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *StringCSF; // eax
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
  int v23; // ebp
  int referenceCount; // eax
  int v25; // ebx
  char *v26; // eax
  char v27; // bl
  BOOL v28; // ecx
  AnimClass *v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  wchar_t *v32; // eax
  int v33; // esi
  LRESULT v34; // esi
  char *v35; // eax
  int v36; // eax
  ObjectClass *fallRate; // esi
  HWND v38; // eax
  HWND v39; // eax
  int v40; // esi
  HWND v41; // eax
  int result; // eax
  wchar_t *v43; // [e... [19370 chars total]



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
  if ( dword_A8B238 == 4 ) /*0x79ba7a*/
  {
    v4 = *(_DWORD *)(a1 + 32); /*0x79ba7c*/
    if ( (v4 & 0x800) != 0 || (v4 & 0x1000) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x79bab6*/
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( dword_A8B238 == 4 && (*(_DWORD *)(a1 + 32) & 0x100) != 0 && dword_B77DE4 < 1 ) /*0x79badd*/
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
      v10 = GetStringCSF(aTxtMismatch, 0, g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
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
  v1 = *((_DWORD *)dword_B76990 + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
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
  v4 = *((_DWORD *)dword_B76608 + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
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
  v7 = dword_B76AE0; /*0x79bdc2*/
  if ( (int)dword_B76AE0 <= 0 ) /*0x79bdc9*/
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
      qmemcpy(v12, (char *)dword_B76AE8 + v8, sizeof(v12)); /*0x79bde7*/
    v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = dword_B76AE0; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)dword_B76AE0 ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, g_MenuStateFlags != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}



// ==== 0x0079BF50  ObjectClass::method_79BF50  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_79BF50(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]

  v7 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem((HWND)this, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem((HWND)this, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !stru_B76900.lastLayer ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79bfd4*/
                   + 4
                   * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                    & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&g_WOL_LoginObject) ) /*0x79bfe9*/
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
  v5 = GetDlgItem((HWND)this, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}



// ==== 0x0079C040  ObjectClass::ShowUserProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall ShowUserProfileWOL(ObjectClass *this)
{
  HWND DlgItem; // ebx
  HWND v3; // ebp
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // ebx
  int v6; // eax
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
  DeleteAndZero *p_DeleteAndZero_field_0x04; // ecx
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  char *v27; // [esp-4h] [ebp-A0h]
  DeleteAndZero v28; // [esp+10h] [ebp-8Ch] BYREF
  DeleteAndZero v29; // [esp+1Ch] [ebp-80h] BYREF
  HWND v30; // [esp+28h] [ebp-74h]
  char *v31; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v32[27]; // [esp+30h] [ebp-6Ch] BYREF

  DlgItem = GetDlgItem((HWND)this, 1775); /*0x79c05a*/
  v3 = GetDlgItem((HWND)this, 1780); /*0x79c064*/
  v28.DeleteAndZero_field_0x04 = (int)v3; /*0x79c06c*/
  v29.DeleteAndZero_field_0x08 = (int)GetDlgItem((HWND)this, 1781); /*0x79c078*/
  v29.DeleteAndZero_field_0x04 = (int)GetDlgItem((HWND)this, 1776); /*0x79c084*/
  v30 = GetDlgItem((HWND)this, 1777); /*0x79c090*/
  v28.DeleteAndZero_field_0x08 = (int)GetDlgItem((HWND)this, 1793); /*0x79c09b*/
  if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79c09f*/
  {
    StringCSF = GetStringCSF(aGuiUserprofile, 0, g_Str_File_wonline_cpp, 26882); /*0x79c133*/
    WideString::Assign((wchar_t **)&v29, StringCSF); /*0x79c13d*/
    v5 = WideString::Length((const wchar_t **)&v29); /*0x79c150*/
    v6 = String::Length((String *)&g_WOL_LoginObject); /*0x79c152*/
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v5 + v6) + 2); /*0x79c16b*/
    v27 = String::GetOrEmpty((String *)&g_WOL_LoginObject); /*0x79c176*/
    v8 = WideString::GetOrEmpty((wchar_t **)&v29); /*0x79c177*/
    swprintf(v7, (const size_t)v8, (const wchar_t *const)v27); /*0x79c17e*/
    v9 = GetDlgItem((HWND)this, 1775); /*0x79c18c*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)v7); /*0x79c19d*/
    __3_YAXPAX_Z(v7); /*0x79c1a0*/
    memset(v32, 0, sizeof(v32)); /*0x79c1b3*/
    String::ToLowerCopy((String *)&g_WOL_LoginObject, &v31); /*0x79c1bf*/
    *(_DWORD *)v28.__pad_0 = 0; /*0x79c1d3*/
    if ( (unsigned __int8)HashTable::LookupString(&stru_B77D80, (const char **)&v31, &v28) ) /*0x79c1db*/
    {
      if ( *(_DWORD *)v28.__pad_0 ) /*0x79c1ee*/
        qmemcpy(v32, *(const void **)v28.__pad_0, sizeof(v32)); /*0x79c1f9*/
      v10 = FormatWideString((wchar_t **)&v28, v32[7]); /*0x79c203*/
      v11 = WideString::GetOrEmpty_Alt(v10); /*0x79c20a*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v11); /*0x79c21c*/
      DeleteAndZero::Alt(&v28); /*0x79c222*/
      v12 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[4]); /*0x79c22f*/
      v13 = WideString::GetOrEmpty_Alt(v12); /*0x79c236*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v13); /*0x79c248*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c24e*/
      v14 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[2]); /*0x79c25b*/
      v15 = WideString::GetOrEmpty_Alt(v14); /*0x79c262*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v15); /*0x79c274*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c27a*/
      v16 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[3]); /*0x79c287*/
      v17 = WideString::GetOrEmpty_Alt(v16); /*0x79c28e*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v17); /*0x79c2a0*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c2a6*/
      v18 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[8]); /*0x79c2b3*/
      v19 = WideString::GetOrEmpty_Alt(v18); /*0x79c2ba*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v19); /*0x79c2cc*/
      p_DeleteAndZero_field_0x04 = (DeleteAndZero *)&v28.DeleteAndZero_field_0x04; /*0x79c2ce*/
    }
    else
    {
      v21 = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_wonline_cpp, 26899); /*0x79c2e8*/
      WideString::Assign((wchar_t **)&v28, v21); /*0x79c2f2*/
      v22 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c2fb*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v22); /*0x79c30d*/
      v23 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c313*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v23); /*0x79c325*/
      v24 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c32b*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v24); /*0x79c33d*/
      v25 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c343*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v25); /*0x79c355*/
      v26 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c35b*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v26); /*0x79c36d*/
      p_DeleteAndZero_field_0x04 = &v28; /*0x79c36f*/
    }
    DeleteAndZero::Alt(p_DeleteAndZero_field_0x04); /*0x79c373*/
    DeleteAndZero((ObjectClass *)&v31); /*0x79c37c*/
    DeleteAndZero::Alt(&v29); /*0x79c385*/
  }
  else
  {
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ba*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0c9*/
    SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0dc*/
    SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ef*/
    SendMessageA(v30, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c102*/
    SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c115*/
  }
}



// ==== 0x0079C3A0  ObjectClass::Network_Cleanup  this=ObjectClass  sig=csp ====
unsigned int Network_Cleanup(ObjectClass *this)
{
  unsigned int result; // eax
  int v2; // esi
  int v3; // ebx
  AnimClass *v4; // eax
  AnimClass *parachute; // esi
  AnimClass *v6; // ebp
  char v7[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79c3a8*/
  {
    result = time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79c3d1*/
  }
  result = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c3d6*/
  if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c3dd*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c3e6*/
    {
      String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79c3f7*/
      v2 = 0; /*0x79c401*/
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c405*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79c40b*/
          v2 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x79c40d*/
        DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79c419*/
        memcpy( /*0x79c442*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v2,
          &stru_B76900.parachute->AnimClass_field_0x4 + v2,
          4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v2 + 1)));
        --*(_DWORD *)&stru_B76900.needsRedraw; /*0x79c456*/
        if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x79c460*/
        {
          v3 = *(_DWORD *)&stru_B76900.hasParachute / 2; /*0x79c469*/
          if ( *(_DWORD *)&stru_B76900.hasParachute / 2 < 10 ) /*0x79c46e*/
            v3 = 10; /*0x79c470*/
          if ( v3 < *(int *)&stru_B76900.hasParachute ) /*0x79c477*/
          {
            v4 = (AnimClass *)__2_YAPAXI_Z(4 * v3); /*0x79c482*/
            parachute = stru_B76900.parachute; /*0x79c487*/
            v6 = v4; /*0x79c492*/
            if ( stru_B76900.parachute ) /*0x79c494*/
            {
              qmemcpy(v4, stru_B76900.parachute, 4 * *(_DWORD *)&stru_B76900.needsRedraw); /*0x79c49e*/
              parachute = stru_B76900.parachute; /*0x79c4a0*/
            }
            __3_YAXPAX_Z(parachute); /*0x79c4a7*/
            stru_B76900.parachute = v6; /*0x79c4af*/
            *(_DWORD *)&stru_B76900.hasParachute = v3; /*0x79c4b5*/
          }
        }
      }
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c4c3*/
    memset(v7, 0, sizeof(v7)); /*0x79c4d3*/
    strcpy(&v7[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v7); /*0x79c512*/
  }
  return result; /*0x79c518*/
}



// ==== 0x0079C520  MapSeed::CheckName  this=MapSeed  sig=csp ====
int __thiscall MapSeed::CheckName(MapSeed *this)
{
  char **v2; // eax
  char v3; // bl
  const char *v4; // edx
  int result; // eax
  int v6; // esi
  char **v7; // [esp-8h] [ebp-18h]
  String v8; // [esp+4h] [ebp-Ch] BYREF
  char *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr(&v8, (const char **)this); /*0x79c52b*/
  String::ToLower(&v8); /*0x79c534*/
  if ( !String::Length((String *)this) /*0x79c5aa*/
    || (v7 = String::ToLowerCopy((String *)&g_WindowManager.__pad_EC[684], &v9),
        v2 = String::ToLowerCopy(&v8, (char **)&v8.m_3[1]),
        v3 = String::Compare((String *)v2, (const char **)v7),
        DeleteAndZero((ObjectClass *)&v8.m_3[1]),
        DeleteAndZero((ObjectClass *)&v9),
        v3)
    || (unsigned __int8)ValidateStringContains((const char **)this, v4, asc_84BA18) )
  {
    result = DeleteAndZero((ObjectClass *)&v8); /*0x79c5b7*/
    LOBYTE(result) = 0; /*0x79c5bc*/
  }
  else
  {
    v6 = 0; /*0x79c5c8*/
    if ( *(int *)g_WindowManager.__pad_0 <= 0 ) /*0x79c5cc*/
    {
LABEL_12:
      result = DeleteAndZero((ObjectClass *)&v8); /*0x79c624*/
      LOBYTE(result) = 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8.m_3[1]); /*0x79c5d2*/
        if ( v6 >= 0 && v6 < *(int *)g_WindowManager.__pad_0 ) /*0x79c5e1*/
          String::Reassign((String *)&v8.m_3[1], (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v6)); /*0x79c5f1*/
        String::ToLower((String *)&v8.m_3[1]); /*0x79c5fa*/
        if ( (unsigned __int8)String::Compare((String *)&v8.m_3[1], (const char **)&v8) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c615*/
        if ( ++v6 >= *(int *)g_WindowManager.__pad_0 ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c634*/
      result = DeleteAndZero((ObjectClass *)&v8); /*0x79c63d*/
      LOBYTE(result) = 0; /*0x79c642*/
    }
  }
  return result; /*0x79c54f*/
}



// ==== 0x0079C650  MapSeed::InsertName  this=MapSeed  sig=csp ====
void __thiscall MapSeed::InsertName(MapSeed *this)
{
  int v2; // eax
  int v3; // esi
  String *v4; // ecx
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  const char *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( (unsigned __int8)MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((String *)&v11, (const char **)this); /*0x79c668*/
    v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c66d*/
    v3 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c672*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c685*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c68a*/
    }
    if ( v2 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c69c*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy( /*0x79c6c5*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3),
        4 * (v2 + 0x3FFFFFFF * v3));
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6ca*/
    }
    v4 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, &v11); /*0x79c6e4*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6e9*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v2 + 1; /*0x79c6ef*/
    v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c6f4*/
    v6 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c6f9*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c70c*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c711*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c723*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy( /*0x79c74c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c751*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, &v11); /*0x79c76b*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c770*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v5 + 1; /*0x79c776*/
    v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c77b*/
    v9 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c780*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c798*/
    }
    if ( v8 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy( /*0x79c7d3*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7d8*/
    }
    v10 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, &v11); /*0x79c7f2*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7f7*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v8 + 1; /*0x79c802*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero((ObjectClass *)&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79c830*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c83c*/
    {
      if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c83e*/
      {
        String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79c84b*/
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79c857*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79c8a1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }
}



// ==== 0x0079C8D0  ObjectClass::QueueWOLAuthRequest  this=ObjectClass  sig=csp ====
void __thiscall QueueWOLAuthRequest(ObjectClass *this)
{
  ObjectClass *v1; // edi
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  String *v6; // ecx
  int v7; // eax
  int v8; // esi
  String *v9; // ecx
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  _BYTE v13[220]; // [esp+10h] [ebp-DCh] BYREF

  if ( (unsigned __int8)MapSeed::CheckName((MapSeed *)this) ) /*0x79c8d9*/
  {
    memset(&v13[4], 0, 0x6Cu); /*0x79c8f2*/
    v3 = String::GetOrEmpty_Alt((String *)this); /*0x79c8f8*/
    strncpy(&v13[40], v3, 9u); /*0x79c903*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v13[4]); /*0x79c918*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)this) ) /*0x79c927*/
    {
LABEL_35:
      SendGameListWOL(v1); /*0x79cb8b*/
      return; /*0x79cb8b*/
    }
    String::AssignFromPtr((String *)v13, (const char **)this); /*0x79c932*/
    v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c937*/
    v5 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c93c*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c948*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c94f*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c954*/
    }
    if ( v4 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c95f*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c966*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c96b*/
    }
    if ( v5 < v4 ) /*0x79c972*/
    {
      memcpy( /*0x79c98f*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5),
        4 * (v4 + 0x3FFFFFFF * v5));
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c994*/
    }
    v6 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5); /*0x79c9a2*/
    if ( v6 ) /*0x79c9a7*/
    {
      String::AssignFromPtr(v6, (const char **)v13); /*0x79c9ae*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c9b3*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v4 + 1; /*0x79c9b9*/
    v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9be*/
    v8 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9c3*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79c9cf*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c9d6*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9db*/
    }
    if ( v7 >= *(int *)&stru_B76900.hasParachute ) /*0x79c9e6*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c9ed*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9f2*/
    }
    if ( v8 < v7 ) /*0x79c9f9*/
    {
      memcpy( /*0x79ca16*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v8,
        &stru_B76900.parachute->AnimClass_field_0x0 + v8,
        4 * (v7 + 0x3FFFFFFF * v8));
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79ca1b*/
    }
    v9 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v8); /*0x79ca29*/
    if ( v9 ) /*0x79ca2e*/
    {
      String::AssignFromPtr(v9, (const char **)v13); /*0x79ca35*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79ca3a*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v7 + 1; /*0x79ca40*/
    v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca45*/
    v11 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca4a*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79ca56*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca5d*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca62*/
    }
    if ( v10 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79ca6d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca74*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca79*/
    }
    if ( v11 < v10 ) /*0x79ca80*/
    {
      memcpy( /*0x79ca9d*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79caa2*/
    }
    v12 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11); /*0x79cab0*/
    if ( v12 ) /*0x79cab5*/
    {
      String::AssignFromPtr(v12, (const char **)v13); /*0x79cabc*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79cac1*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v10 + 1; /*0x79cacc*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79cad1*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79caef*/
      {
LABEL_34:
        DeleteAndZero((ObjectClass *)v13); /*0x79cb82*/
        goto LABEL_35; /*0x79cb86*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79cafa*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79cb06*/
    {
      if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79cb08*/
      {
        String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79cb15*/
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79cb21*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79cb2d*/
      memset(&v13[112], 0, 0x6Cu); /*0x79cb3d*/
      strcpy(&v13[148], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79cb6d*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v13[112]); /*0x79cb7f*/
    }
    goto LABEL_34; /*0x79cb7f*/
  }
}



// ==== 0x0079CBA0  RemoveWOLPlayerLogin  this=-  sig=csp ====
void __fastcall RemoveWOLPlayerLogin(const char **a1)
{
  const char **ptr_4; // ebp
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
  ObjectClass v14; // [esp+8h] [ebp-188h] BYREF

  ptr_4 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  v14.? = a1; /*0x79cbb1*/
  if ( *(int *)g_WindowManager.__pad_0 > 0 ) /*0x79cbb7*/
  {
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v14.?); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < *(int *)g_WindowManager.__pad_0 ) /*0x79cbd0*/
        String::Reassign((String *)&v14.?, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79cbdf*/
      if ( (unsigned __int8)String::Compare((String *)&v14.?, ptr_4) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero((ObjectClass *)&v14.?); /*0x79cbf6*/
      if ( ++v2 >= *(int *)g_WindowManager.__pad_0 ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( *(_DWORD *)g_WindowManager.__pad_0 ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= *(int *)g_WindowManager.__pad_0 ) /*0x79cc25*/
        v2 = *(_DWORD *)g_WindowManager.__pad_0 - 1; /*0x79cc27*/
      DeleteAndZero((ObjectClass *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * (v2 + 1)),
        4 * (*(_DWORD *)g_WindowManager.__pad_0 + 0x3FFFFFFF * (v2 + 1)));
      --*(_DWORD *)g_WindowManager.__pad_0; /*0x79cc70*/
      if ( 3 * *(_DWORD *)g_WindowManager.__pad_0 <= (int)g_WindowManager.Array_field_0x4 ) /*0x79cc7a*/
      {
        v3 = (int)g_WindowManager.Array_field_0x4 / 2; /*0x79cc83*/
        if ( (int)g_WindowManager.Array_field_0x4 / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < (int)g_WindowManager.Array_field_0x4 ) /*0x79cc91*/
        {
          v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          v5 = *(void **)g_WindowManager.__pad_8; /*0x79cca0*/
          v6 = v4; /*0x79ccab*/
          if ( *(_DWORD *)g_WindowManager.__pad_8 ) /*0x79ccad*/
          {
            qmemcpy(v4, *(const void **)g_WindowManager.__pad_8, 4 * *(_DWORD *)g_WindowManager.__pad_0); /*0x79ccb7*/
            v5 = *(void **)g_WindowManager.__pad_8; /*0x79ccb9*/
          }
          __3_YAXPAX_Z(v5); /*0x79ccc0*/
          *(_DWORD *)g_WindowManager.__pad_8 = v6; /*0x79ccc5*/
          ptr_4 = (const char **)v14.?; /*0x79cccb*/
          g_WindowManager.Array_field_0x4 = (void *)v3; /*0x79ccd2*/
        }
      }
    }
    String::AssignFromPtr((String *)&v14, ptr_4); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry((HashTable *)&stru_B765EC.?, (const char **)&v14, &v14.visibilityFlags); /*0x79ccf4*/
    if ( !stru_B76900.lastLayer ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    *(_QWORD *)&v14.? = (unsigned int)(stru_B76900.lastLayer - 1); /*0x79cd0d*/
    *(float *)&v14.? = (double)*(__int64 *)&v14.? / (double)*(int *)&stru_B76900.isInLogic; /*0x79cd2a*/
    v7 = ((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&v14) /*0x79cd48*/
       & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
    v8 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( (unsigned __int8)String::Compare( /*0x79cd5c*/
                            *(String **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7),
                            (const char **)&v14) )
    {
      v9 = *(_DWORD **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd6a*/
      v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*(ObjectClass **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      v11 = *(float *)&v14.?; /*0x79cd8a*/
      *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7) = v10; /*0x79cd8e*/
      --stru_B76900.lastLayer; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = *(_DWORD *)(v12 + 8); /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8); /*0x79cdd0*/
        --stru_B76900.lastLayer; /*0x79cddc*/
        DeleteAndZero((ObjectClass *)v12); /*0x79cde6*/
        __3_YAXPAX_Z((void *)v12); /*0x79cdec*/
      }
LABEL_32:
      if ( *(float *)&v14.? > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79ce0a*/
LABEL_34:
    memset(&v14.?, 0, 0x6Cu); /*0x79ce0f*/
    v13 = String::GetOrEmpty_Alt((String *)ptr_4); /*0x79ce20*/
    strncpy((char *)&v14.attachedTag, v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 228))(ppv, &v14.?); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero((ObjectClass *)&v14.?); /*0x79ce53*/
  }
}



// ==== 0x0079CE70  ObjectClass::RefreshChannelListWOL  this=ObjectClass  sig=csp ====
unsigned int RefreshChannelListWOL(ObjectClass *this)
{
  HANDLE *v1; // esi
  unsigned int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // esi
  const char *v9; // [esp+Ch] [ebp-70h] BYREF
  char v10[108]; // [esp+10h] [ebp-6Ch] BYREF

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v1 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v1++); /*0x79ceab*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79ceea*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79cef4*/
  v4 = 0; /*0x79cf08*/
  for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v4 < *(int *)g_WindowManager.__pad_0; ++v4 ) /*0x79cf16*/
  {
    unknown_libname_73(&v9); /*0x79cf20*/
    if ( v4 >= 0 && v4 < *(int *)g_WindowManager.__pad_0 ) /*0x79cf2f*/
      String::Reassign((String *)&v9, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v4)); /*0x79cf3f*/
    v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf44*/
    v6 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf49*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf5c*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf61*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf73*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf78*/
    }
    if ( v6 < v5 ) /*0x79cf7f*/
    {
      memcpy( /*0x79cf9c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cfa1*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79cfaf*/
    if ( v7 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v7, &v9); /*0x79cfbb*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cfc0*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v5 + 1; /*0x79cfca*/
    DeleteAndZero((ObjectClass *)&v9); /*0x79cfcf*/
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79cfe7*/
  {
    result = time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79d010*/
  }
  result = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79d015*/
  if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79d01c*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79d022*/
    {
      String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79d02f*/
      v8 = 0; /*0x79d039*/
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79d03d*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79d03f*/
          v8 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x79d041*/
        Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v8), 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v8,
          &stru_B76900.parachute->AnimClass_field_0x4 + v8,
          4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v8 + 1)));
        --*(_DWORD *)&stru_B76900.needsRedraw; /*0x79d086*/
        if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x79d095*/
          VectorClass::Shrink((VectorClass *)&stru_B76900.needsRedraw); /*0x79d09c*/
      }
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79d0a8*/
    memset(v10, 0, sizeof(v10)); /*0x79d0b8*/
    strcpy(&v10[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79d0e5*/
    return (*(unsigned int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v10); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}



// ==== 0x0079D110  ObjectClass::SendGameListWOL  this=ObjectClass  sig=csp ====
void SendGameListWOL(ObjectClass *this)
{
  int v1; // esi
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *DynamicVector_field_0x8; // esi
  int v6; // ebp
  int v7; // esi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+2Ch] [ebp-14h]
  String v13; // [esp+34h] [ebp-Ch] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v1 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d114*/
  if ( *(int *)g_WOL_BuddyList.__pad_0 <= 10 ) /*0x79d11d*/
  {
    if ( !*(_DWORD *)g_WOL_BuddyList.__pad_0 ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v1 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v13); /*0x79d132*/
  if ( v1 > 0 ) /*0x79d139*/
  {
    v14 = v1; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13.m_3[1]); /*0x79d14a*/
      if ( *(int *)g_WOL_BuddyList.__pad_0 > 0 ) /*0x79d156*/
      {
        String::Reassign((String *)&v13.m_3[1], (const char **)g_WOL_BuddyList.DynamicVector_field_0x8); /*0x79d166*/
        v2 = 0; /*0x79d170*/
        if ( *(_DWORD *)g_WOL_BuddyList.__pad_0 ) /*0x79d174*/
        {
          if ( *(int *)g_WOL_BuddyList.__pad_0 <= 0 ) /*0x79d17a*/
            v2 = *(_DWORD *)g_WOL_BuddyList.__pad_0 - 1; /*0x79d17c*/
          DeleteAndZero((ObjectClass *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v2)); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v2),
            (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * (v2 + 1)),
            4 * (*(_DWORD *)g_WOL_BuddyList.__pad_0 + 0x3FFFFFFF * (v2 + 1)));
          --*(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d1c5*/
          if ( 3 * *(_DWORD *)g_WOL_BuddyList.__pad_0 <= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d1cf*/
          {
            v3 = *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] / 2; /*0x79d1d8*/
            if ( *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] / 2 < 10 ) /*0x79d1dd*/
              v3 = 10; /*0x79d1df*/
            if ( v3 < *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d1e6*/
            {
              v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x79d1f0*/
              DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d1f5*/
              v6 = (int)v4; /*0x79d200*/
              if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d202*/
              {
                qmemcpy( /*0x79d20c*/
                  v4,
                  (const void *)g_WOL_BuddyList.DynamicVector_field_0x8,
                  4 * *(_DWORD *)g_WOL_BuddyList.__pad_0);
                DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d20e*/
              }
              __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x79d215*/
              g_WOL_BuddyList.DynamicVector_field_0x8 = v6; /*0x79d21d*/
              *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v3; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length(&v13) ) /*0x79d22d*/
        String::Append(&v13, asc_8318B8); /*0x79d23f*/
      String::Append2(&v13, (char **)&v13.m_3[1]); /*0x79d24d*/
      DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v7 = *(_DWORD *)g_UIPointerTable; /*0x79d27c*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v8 = String::GetOrEmpty(&v13); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v7 + 20))( /*0x79d2a3*/
    g_UIPointerTable,
    stru_B76188.__pad_20,
    g_WOL_GameConfig,
    v8,
    v11,
    -1,
    0,
    0);
  v9 = *(_DWORD *)g_UIPointerTable; /*0x79d2b7*/
  v12 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v10 = String::GetOrEmpty(&v13); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v9 + 56))( /*0x79d2d6*/
    g_UIPointerTable,
    stru_B76188.__pad_20,
    g_WOL_GameConfig,
    v10,
    v12);
  DeleteAndZero((ObjectClass *)&v13); /*0x79d2dd*/
}



// ==== 0x0079D2F0  ObjectClass::RefreshGameListWOL  this=ObjectClass  sig=csp ====
void RefreshGameListWOL(ObjectClass *this)
{
  int i; // esi
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ebp
  void *v6; // ebx
  void *DynamicVector_field_0x8; // eax
  int v8; // ebp
  void *v9; // ebx
  void *v10; // eax
  String *v11; // ecx
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+8h] [ebp-Ch]
  String v14; // [esp+Ch] [ebp-8h] BYREF

  for ( i = 0; i < *(int *)g_WOL_BuddyList.__pad_0; ++i ) /*0x79d2fe*/
    DeleteAndZero((ObjectClass *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * i)); /*0x79d308*/
  v2 = 0; /*0x79d31c*/
  *(_DWORD *)g_WOL_BuddyList.__pad_0 = 0; /*0x79d320*/
  for ( *(_DWORD *)&v14.m_3[1] = 0; v2 < *(int *)g_WindowManager.__pad_0; *(_DWORD *)&v14.m_3[1] = v2 ) /*0x79d32e*/
  {
    unknown_libname_73(&v14); /*0x79d33a*/
    if ( v2 >= 0 && v2 < *(int *)g_WindowManager.__pad_0 ) /*0x79d349*/
      String::Reassign(&v14, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79d359*/
    v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d35e*/
    v4 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d363*/
    v13 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d367*/
    v5 = *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3]; /*0x79d371*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d379*/
    {
      v5 = 2 * *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d383*/
      if ( 2 * *(_DWORD *)g_WOL_BuddyList.__pad_0 < 10 ) /*0x79d389*/
        v5 = 10; /*0x79d38b*/
      v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x79d39f*/
      memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x79d3ad*/
      DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d3b6*/
      if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d3bd*/
      {
        qmemcpy(v6, (const void *)g_WOL_BuddyList.DynamicVector_field_0x8, 4 * *(_DWORD *)g_WOL_BuddyList.__pad_0); /*0x79d3c9*/
        DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d3cb*/
        v4 = v13; /*0x79d3d0*/
      }
      __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x79d3d5*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d3da*/
      v2 = *(_DWORD *)&v14.m_3[1]; /*0x79d3df*/
      g_WOL_BuddyList.DynamicVector_field_0x8 = (int)v6; /*0x79d3e6*/
      *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v5; /*0x79d3ec*/
    }
    if ( v3 >= v5 ) /*0x79d3f4*/
    {
      v8 = 2 * v3; /*0x79d3f6*/
      if ( 2 * v3 < 10 ) /*0x79d3fc*/
        v8 = 10; /*0x79d3fe*/
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x79d412*/
      memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x79d420*/
      v10 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d429*/
      if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d430*/
      {
        qmemcpy(v9, (const void *)g_WOL_BuddyList.DynamicVector_field_0x8, 4 * *(_DWORD *)g_WOL_BuddyList.__pad_0); /*0x79d43c*/
        v10 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d43e*/
        v4 = v13; /*0x79d443*/
      }
      __3_YAXPAX_Z(v10); /*0x79d448*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d44d*/
      v2 = *(_DWORD *)&v14.m_3[1]; /*0x79d452*/
      g_WOL_BuddyList.DynamicVector_field_0x8 = (int)v9; /*0x79d459*/
      *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v8; /*0x79d45f*/
    }
    if ( v4 < v3 ) /*0x79d467*/
    {
      memcpy( /*0x79d484*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4),
        4 * (v3 + 0x3FFFFFFF * v4));
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d489*/
    }
    v11 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4); /*0x79d497*/
    if ( v11 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v11, (const char **)&v14); /*0x79d4a3*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d4a8*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v3 + 1; /*0x79d4b2*/
    DeleteAndZero((ObjectClass *)&v14); /*0x79d4b7*/
    ++v2; /*0x79d4c1*/
  }
  SendGameListWOL(v12); /*0x79d4d0*/
}



// ==== 0x0079D4E0  ObjectClass::CleanupWOLSession  this=ObjectClass  sig=csp ====
void CleanupWOLSession(ObjectClass *this)
{
  int i; // esi
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  ObjectClass *v5; // esi
  ObjectClass *v6; // edi
  unsigned int occupant; // eax
  unsigned int j; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v10; // edi
  int k; // esi
  int v12; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]
  char *v14; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < *(int *)g_WindowManager.__pad_0; ++i ) /*0x79d4ee*/
    DeleteAndZero((ObjectClass *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * i)); /*0x79d4f8*/
  v2 = 0; /*0x79d50c*/
  for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v2 < *(int *)&stru_B76900.needsRedraw; ++v2 ) /*0x79d516*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79d521*/
  v3 = *(_DWORD *)&stru_B76900.isInLogic; /*0x79d530*/
  v4 = 0; /*0x79d536*/
  for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79d541*/
        v4 < *(_DWORD *)&stru_B76900.isInLogic;
        v3 = *(_DWORD *)&stru_B76900.isInLogic )
  {
    v5 = *(ObjectClass **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v4); /*0x79d549*/
    while ( v5 ) /*0x79d54e*/
    {
      v6 = v5; /*0x79d550*/
      v5 = (ObjectClass *)v5->?; /*0x79d552*/
      DeleteAndZero(v6); /*0x79d55b*/
      __3_YAXPAX_Z(v6); /*0x79d561*/
    }
    ++v4; /*0x79d572*/
    *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v4 - 4) = 0; /*0x79d573*/
  }
  stru_B76900.lastLayer = 0; /*0x79d586*/
  if ( v3 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( LOBYTE(stru_B76900.location[2]) ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79d59d*/
    }
    while ( *(_DWORD *)&stru_B76900.isInLogic > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  occupant = stru_B765EC.occupant; /*0x79d5b1*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79d5ba*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.? + 4 * j); /*0x79d5c2*/
    while ( customSound ) /*0x79d5c7*/
    {
      v10 = customSound; /*0x79d5c9*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x79d5cb*/
      DeleteAndZero(v10); /*0x79d5d7*/
      __3_YAXPAX_Z(v10); /*0x79d5dd*/
    }
    ++j; /*0x79d5ee*/
    *(_DWORD *)(stru_B765EC.? + 4 * j - 4) = 0; /*0x79d5ef*/
  }
  stru_B765EC.? = 0; /*0x79d605*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x79d61b*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79d637*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(v13); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < *(int *)&stru_B76900.needsRedraw; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + k), 0); /*0x79d6a6*/
    v12 = 0; /*0x79d6ba*/
    for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v12 < *(int *)g_WindowManager.__pad_0; ++v12 ) /*0x79d6c4*/
    {
      unknown_libname_73(&v14); /*0x79d6ca*/
      DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, &v14, v12); /*0x79d6da*/
      StringVector::Insert( /*0x79d6ef*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&v14,
        *(int *)&stru_B76900.needsRedraw);
      DeleteAndZero((ObjectClass *)&v14); /*0x79d6f8*/
    }
    Network_Cleanup(v13); /*0x79d707*/
  }
  RefreshGameListWOL(v13); /*0x79d70c*/
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
String *__fastcall ExtractChatCommand(String *a1, HWND a2)
{
  LRESULT v4; // esi
  wchar_t *v6; // [esp+10h] [ebp-4h] BYREF

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
LABEL_7:
    String::AssignFromPtr(a1, (const char **)&g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (void **)&v6); /*0x79dad6*/
      if ( (unsigned __int16)WideString::GetChar((const wchar_t **)&v6, 0) == 40 ) /*0x79daea*/
      {
        if ( UI_Helper_7B7980((ObjectClass *)&v6, 0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar((const wchar_t **)&v6, 0x28u); /*0x79db2f*/
    ToWideStringCharAlt((char **)a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db43*/
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
      if ( dword_887640 ) /*0x79dc97*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 20))(dword_887640); /*0x79dc9f*/
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
    Dialog::ShowMessage(61680, (size_t)g_Str_Fmt_Hs_S_Bracket, dword_B73E40, v20); /*0x79df7b*/
  }
  EnableWindow(a4, 0); /*0x79df86*/
  InvalidateRect(v16, 0, 0); /*0x79df91*/
  DeleteAndZero(&v23); /*0x79df9b*/
  DeleteAndZero::Alt(&v22); /*0x79dfa4*/
  return 0; /*0x79dba7*/
}



// ==== 0x0079DFE0  GameSetupDlgProcWOL  this=-  sig=csp ====
int __stdcall GameSetupDlgProcWOL(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  int v11; // eax
  int v12; // esi
  String *v13; // ecx
  int v14; // eax
  int v15; // esi
  String *v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  DeleteAndZero v21; // [esp+0h] [ebp-F8h]
  int v22; // [esp+0h] [ebp-F8h]
  ObjectClass *v23; // [esp+4h] [ebp-F4h]
  _BYTE v24[228]; // [esp+14h] [ebp-E4h] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  *(_DWORD *)v21.__pad_0 = a4; /*0x79e01f*/
  result = BaseDialogProc(hWnd, a2, a3, v21); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    *(_DWORD *)&v24[8] = WindowLongA; /*0x79e043*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e07d*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e084*/
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
        unknown_libname_73(v24); /*0x79e438*/
        GetDialogText(a4, (String *)v24); /*0x79e443*/
        v22 = (unsigned __int8)MapSeed::CheckName((MapSeed *)v24); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v22); /*0x79e464*/
        DeleteAndZero((ObjectClass *)v24); /*0x79e46e*/
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
    unknown_libname_73(&v24[4]); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, (String *)&v24[4]); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e0f9*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) /*0x79e114*/
      || !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) )
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v24[8] + 4))(*(_DWORD *)&v24[8], hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero((ObjectClass *)&v24[4]); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(&v24[12], 0, 0x6Cu); /*0x79e12e*/
    v7 = String::GetOrEmpty_Alt((String *)&v24[4]); /*0x79e134*/
    strncpy(&v24[48], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v24[12]); /*0x79e154*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(v23); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((String *)v24, (const char **)&v24[4]); /*0x79e174*/
    v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e179*/
    v9 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e17e*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e191*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e196*/
    }
    if ( v8 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e1a8*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy( /*0x79e1d1*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1d6*/
    }
    v10 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)v24); /*0x79e1f0*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1f5*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v8 + 1; /*0x79e1fb*/
    v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e200*/
    v12 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e205*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e218*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e21d*/
    }
    if ( v11 >= *(int *)&stru_B76900.hasParachute ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e22f*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy( /*0x79e258*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v12,
        &stru_B76900.parachute->AnimClass_field_0x0 + v12,
        4 * (v11 + 0x3FFFFFFF * v12));
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e25d*/
    }
    v13 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)v24); /*0x79e277*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e27c*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v11 + 1; /*0x79e282*/
    v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e287*/
    v15 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e28c*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2a4*/
    }
    if ( v14 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy( /*0x79e2df*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15),
        4 * (v14 + 0x3FFFFFFF * v15));
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2e4*/
    }
    v16 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)v24); /*0x79e2fe*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e303*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v14 + 1; /*0x79e30e*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79e331*/
      {
LABEL_50:
        DeleteAndZero((ObjectClass *)v24); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79e33c*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79e348*/
    {
      if ( (unsigned __int8)DynamicStringArray::Get( /*0x79e35a*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e36a*/
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79e376*/
      memset(&v24[120], 0, 0x6Cu); /*0x79e389*/
      strcpy(&v24[156], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v24[120]); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}



// ==== 0x0079E520  PlayerOptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall PlayerOptionsDlgProcWOL(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
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
  Dialog *DialogIndirect; // esi
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
  DeleteAndZero v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL v36; // [esp-4h] [ebp-90h]
  BOOL BuddyWOL; // [esp-4h] [ebp-90h]
  ObjectClass *v38; // [esp+0h] [ebp-8Ch]
  String v39; // [esp+10h] [ebp-7Ch] BYREF
  char v40[108]; // [esp+20h] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e54f*/
  *(_DWORD *)v34.__pad_0 = a4; /*0x79e55c*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, v34); /*0x79e562*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e5a9*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e5b0*/
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
              SimpleDialogControl::Constructor((SimpleDialogControl *)&v39.m_3[1]); /*0x79edc9*/
              *(_DWORD *)&v39.m_3[1] = &off_7F7624; /*0x79ede2*/
              RunDialog( /*0x79ede6*/
                0x115u,
                (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL,
                (LPARAM)&v39.m_3[1]);
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79eded*/
              *(_DWORD *)&v39.m_3[1] = &off_7F7624; /*0x79edf6*/
              OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39.m_3[1]); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v39); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v39); /*0x79ee48*/
              RemoveWOLPlayerLogin((const char **)&v39); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79ee6d*/
              DeleteAndZero((ObjectClass *)&v39); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79eed3*/
                DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79eede*/
              v33 = 0; /*0x79eef2*/
              for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v33 < *(int *)g_WindowManager.__pad_0; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v39); /*0x79ef06*/
                if ( v33 >= 0 && v33 < *(int *)g_WindowManager.__pad_0 ) /*0x79ef15*/
                  String::Reassign(&v39, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v33)); /*0x79ef24*/
                StringVector::Insert( /*0x79ef3a*/
                  (StringVector *)&stru_B76900.needsRedraw,
                  (const char **)&v39,
                  *(int *)&stru_B76900.needsRedraw);
                DeleteAndZero((ObjectClass *)&v39); /*0x79ef43*/
              }
              if ( !String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79ef80*/
LABEL_112:
                if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79ef8c*/
                {
                  if ( (unsigned __int8)DynamicStringArray::Get( /*0x79ef9a*/
                                          (DynamicStringArray *)&stru_B76900.needsRedraw,
                                          (char **)&g_WindowManager.__pad_14[16],
                                          0) )
                    DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79efaa*/
                  *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79efb6*/
                  memset(v40, 0, sizeof(v40)); /*0x79efc6*/
                  strcpy(&v40[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v40); /*0x79f005*/
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
                  unknown_libname_73(&v39); /*0x79ea99*/
                  GetDialogText(a4, &v39); /*0x79eaa9*/
                  v35 = String::Length(&v39) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v35); /*0x79eacb*/
                  DeleteAndZero((ObjectClass *)&v39); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                DialogIndirect = (Dialog *)CreateDialogIndirect( /*0x79ea41*/
                                             g_hInstance,
                                             (HWND)0x11E,
                                             g_hWnd,
                                             (DLGPROC)ChatDialog::DlgProc,
                                             0);
                SetupDialog(DialogIndirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)DialogIndirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)DialogIndirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
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
            if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( stru_B76900.lastLayer ) /*0x79eb9c*/
              {
                v19 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79ebc2*/
                                + 4
                                * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                                 & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v19, (const char **)&g_WOL_LoginObject) ) /*0x79ebdb*/
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
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, &g_WOL_LoginObject.AbstractClass); /*0x79ec6b*/
        v36 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v36); /*0x79ec98*/
        BuddyWOL = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, BuddyWOL); /*0x79ecae*/
        if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !stru_B76900.lastLayer ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79eced*/
                          + 4
                          * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                           & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !(unsigned __int8)String::Compare((String *)v25, (const char **)&g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = *(_DWORD *)(v25 + 8); /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              v39.__pad_0[0] = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            v39.__pad_0[0] = 1; /*0x79ed2f*/
          else
LABEL_88:
            v39.__pad_0[0] = 0; /*0x79ed28*/
        }
        else
        {
          v39.__pad_0[0] = 0; /*0x79ecbe*/
        }
LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (unsigned __int8)v39.__pad_0[0]); /*0x79ed48*/
        ShowUserProfileWOL((ObjectClass *)hWnd); /*0x79ed4c*/
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
        for ( j = 0; j < *(int *)&stru_B76900.needsRedraw; ++j ) /*0x79e893*/
          DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + j)); /*0x79e89e*/
        v15 = 0; /*0x79e8b2*/
        for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v15 < *(int *)g_WindowManager.__pad_0; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v39); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < *(int *)g_WindowManager.__pad_0 ) /*0x79e8d5*/
            String::Reassign(&v39, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v15)); /*0x79e8e5*/
          StringVector::Insert( /*0x79e8fb*/
            (StringVector *)&stru_B76900.needsRedraw,
            (const char **)&v39,
            *(int *)&stru_B76900.needsRedraw);
          DeleteAndZero((ObjectClass *)&v39); /*0x79e904*/
        }
        if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79e941*/
        }
        if ( !*(_DWORD *)&stru_B76900.needsRedraw ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( (unsigned __int8)DynamicStringArray::Get( /*0x79e95f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WindowManager.__pad_14[16],
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e96f*/
        *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79e97b*/
        memset(v40, 0, sizeof(v40)); /*0x79e98b*/
        strcpy(&v40[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v40); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, (WPARAM)stru_B765EC.?, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, *(WPARAM *)&g_WindowManager.__pad_EC[680], dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(&g_DialogHashTable, g_Str_File_wouref_pcx, 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(&g_DialogHashTable, g_Str_File_wodref_pcx, 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < *(int *)g_WindowManager.__pad_0; ++k ) /*0x79e703*/
          Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * k), 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v11 < *(int *)&stru_B76900.needsRedraw; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v11), 0); /*0x79e73b*/
        *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79e74f*/
        HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79e755*/
        HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79e76c*/
        if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79e784*/
          RefreshChannelListWOL(v38); /*0x79e786*/
        Array::CleanupArrayWOL((Array *)&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < *(int *)g_WindowManager.__pad_0; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v39); /*0x79e7a4*/
          DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, (char **)&v39, m); /*0x79e7b4*/
          StringVector::Insert((StringVector *)&g_WOL_BuddyList, (const char **)&v39, *(int *)g_WOL_BuddyList.__pad_0); /*0x79e7ca*/
          DeleteAndZero((ObjectClass *)&v39); /*0x79e7d3*/
        }
        SendGameListWOL(v38); /*0x79e7e2*/
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
int GameOptionsScreenWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  int i; // esi
  TechnoTypeClass *v4; // ecx
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int occupant; // eax
  unsigned int j; // ebx
  ObjectClass *customSound; // esi
  ObjectClass *v11; // edi
  DWORD (__stdcall *v12)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v13; // esi
  Dialog *Dialog; // edi
  DWORD m; // esi
  TechnoTypeClass *v16; // ecx
  TechnoTypeClass *v17; // ecx
  HANDLE *v18; // esi
  TechnoTypeClass *v19; // ecx
  DWORD v20; // esi
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HANDLE *v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // ebp
  int referenceCount; // eax
  char *v29; // eax
  HANDLE *v30; // esi
  int v31; // eax
  int v32; // ebx
  char *v33; // eax
  char v34; // al
  TechnoTypeClass *v35; // ecx
  DWORD k; // esi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  wchar_t *v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebp
  ObjectClass *v48; // [esp+0h] [ebp-23Ch]
  int v49; // [esp+10h] [ebp-22Ch] BYREF
  OwnerDrawControl v50; // [esp+14h] [ebp-228h] BYREF
  _BYTE v51[272]; // [esp+20h] [ebp-21Ch] BYREF
  char v52[268]; // [esp+130h] [ebp-10Ch] BYREF

  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79f166*/
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
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f1e9*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    WideString::Assign((wchar_t **)v51, StringCSF); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)v51, 1); /*0x79f217*/
    DeleteAndZero::Alt((DeleteAndZero *)v51); /*0x79f220*/
    for ( i = 0; stru_B77D80.HashTable_field_0x50; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(v4); /*0x79f242*/
    }
    v5 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f256*/
    if ( v5 ) /*0x79f25d*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x79f268*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x79f26e*/
        CloseDialog(v5, 0); /*0x79f274*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  occupant = stru_B765EC.occupant; /*0x79f295*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79f29e*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.? + 4 * j); /*0x79f2a5*/
    while ( customSound ) /*0x79f2aa*/
    {
      v11 = customSound; /*0x79f2ac*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x79f2ae*/
      DeleteAndZero(v11); /*0x79f2ba*/
      __3_YAXPAX_Z(v11); /*0x79f2c0*/
    }
    ++j; /*0x79f2d2*/
    *(_DWORD *)(stru_B765EC.? + 4 * j - 4) = 0; /*0x79f2d3*/
  }
  stru_B765EC.? = 0; /*0x79f2e6*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x79f2fe*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79f310*/
  }
  v12 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v50); /*0x79f327*/
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f32c*/
    v13 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v13++); /*0x79f33c*/
    while ( (int)v13 < (int)g_WOL_RequestObject ); /*0x79f347*/
    Dialog = (Dialog *)CreateDialog( /*0x79f35d*/
                         0x116u,
                         (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                         (LPARAM)&v50);
    Dialog::Show(Dialog); /*0x79f361*/
    if ( !(unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f36a*/
      break; /*0x79f36a*/
LABEL_33:
    Dialog::Destroy(Dialog); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(v48); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(&v50) ) /*0x79f411*/
    {
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( dword_A8B248 != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v18 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v18++); /*0x79f426*/
        while ( (int)v18 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL(v48, (int)v18) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v20 = v12(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v20 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(v19); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v20)); /*0x79f47f*/
            if ( !v20 || v20 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v20 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f9a0*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(&v50); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v20 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(&v50); /*0x79fa03*/
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
        v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f4dc*/
        if ( v21 ) /*0x79f4e3*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x79f4e9*/
          CloseDialog(v21, 0); /*0x79f4ef*/
        }
        v22 = (HWND)Dialog::GetCurrent(); /*0x79f4f4*/
        v23 = GetDlgItem(v22, 1344); /*0x79f4ff*/
        if ( v23 ) /*0x79f507*/
          SetFocus(v23); /*0x79f50a*/
        v24 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v24++); /*0x79f518*/
        while ( (int)v24 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79f53b*/
        while ( (unsigned __int8)CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
        memset(v52, 0, sizeof(v52)); /*0x79f574*/
        if ( !String::Length((String *)&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v49 = 0; /*0x79f597*/
        if ( !GameOptionsScreenWOL_Helper_7AE8E0((ObjectClass *)&stru_B765EC.?, (const char **)&g_WOL_LoginObject, &v49) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v49 ) /*0x79f5ae*/
          qmemcpy(v52, (const void *)v49, sizeof(v52)); /*0x79f5bc*/
        v25 = 0; /*0x79f5cd*/
        v49 = 0; /*0x79f5cf*/
        if ( !GameOptionsScreenWOL_Helper_7AE7C0( /*0x79f5d3*/
                (ObjectClass *)&stru_B76900.isAliveFlag,
                (const char **)&g_WOL_LoginObject,
                &v49) )
          goto LABEL_117; /*0x79f5da*/
        if ( v49 ) /*0x79f5e6*/
          v25 = *(_DWORD *)v49; /*0x79f5e8*/
        v26 = v25 - 4; /*0x79f5ea*/
        if ( !v26 ) /*0x79f5ed*/
        {
          v45 = 0; /*0x79fa80*/
          memset(&v51[4], 0, 0x10Cu); /*0x79fa82*/
          v46 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fa84*/
          dword_A8B248 = 4; /*0x79fa89*/
          if ( *(int *)&g_WindowManager.__pad_EC[636] > 0 ) /*0x79fa95*/
          {
            v47 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v47 >= 0 && v45 < v46 ) /*0x79fa9f*/
                qmemcpy(&v51[4], (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + v47), 0x10Cu); /*0x79fab3*/
              if ( !_strcmpi(&v51[56], &v52[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v46 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79face*/
              ++v45; /*0x79fad3*/
              v47 += 268; /*0x79fad4*/
              if ( v45 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v52[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v26 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        String::Assign((String *)v51, &v52[52]); /*0x79f606*/
        v27 = 0; /*0x79f616*/
        memset(&v51[4], 0, 0x10Cu); /*0x79f618*/
        referenceCount = stru_B76AC4.?; /*0x79f61a*/
        if ( stru_B76AC4.? <= 0 ) /*0x79f621*/
        {
LABEL_77:
          memset(&v51[4], 0, 0x10Cu); /*0x79f681*/
          if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v30 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v30++); /*0x79f69d*/
          while ( (int)v30 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
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
          v27 = 0; /*0x79f6fc*/
          memset(&v51[4], 0, 0x10Cu); /*0x79f6fe*/
          v31 = stru_B76AC4.?; /*0x79f700*/
          if ( stru_B76AC4.? <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(&v51[4], 0, 0x10Cu); /*0x79f763*/
LABEL_94:
            v34 = 0; /*0x79f765*/
          }
          else
          {
            v32 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v32 >= 0 && v27 < v31 ) /*0x79f711*/
                qmemcpy(&v51[4], (const void *)(v32 + stru_B76AC4.occupant), 0x10Cu); /*0x79f725*/
              v33 = String::GetOrEmpty_Alt((String *)v51); /*0x79f72b*/
              if ( !_strcmpi(&v51[56], v33) ) /*0x79f736*/
                break; /*0x79f736*/
              v31 = stru_B76AC4.?; /*0x79f742*/
              ++v27; /*0x79f747*/
              v32 += 268; /*0x79f748*/
              if ( v27 >= stru_B76AC4.? ) /*0x79f750*/
              {
                v12 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v12 = WaitForMultipleObjects; /*0x79f775*/
            v34 = 1; /*0x79f77b*/
          }
          if ( !v34 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v12 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v12 >= 0 && v27 < referenceCount ) /*0x79f62b*/
            qmemcpy(&v51[4], (char *)v12 + stru_B76AC4.occupant, 0x10Cu); /*0x79f63f*/
          v29 = String::GetOrEmpty_Alt((String *)v51); /*0x79f645*/
          if ( !_strcmpi(&v51[56], v29) ) /*0x79f650*/
            break; /*0x79f650*/
          referenceCount = stru_B76AC4.?; /*0x79f660*/
          ++v27; /*0x79f665*/
          v12 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v12 + 268); /*0x79f666*/
          if ( v27 >= stru_B76AC4.? ) /*0x79f66e*/
          {
            v12 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
LABEL_98:
        if ( !ValidateJoinWOL(v48, (int)&v51[4], (int)v12, v27) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v12 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v12 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v49 = 500; /*0x79f7c5*/
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
        Game::ProcessIdle(v35); /*0x79f7ed*/
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
        BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero((ObjectClass *)v51); /*0x79fa4f*/
        v50 = (OwnerDrawControl)&off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(&v50); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v49-- < 0 ) /*0x79f863*/
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
    DeleteAndZero((ObjectClass *)v51); /*0x79f898*/
LABEL_117:
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(&v50); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v12(0x12u, &Handles, 0, 0x64u); m == 258; m = v12(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(v16); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v42 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f933*/
      if ( v42 ) /*0x79f93a*/
      {
        stru_B77D80.HashTable_field_0x48 = 0; /*0x79f940*/
        CloseDialog(v42, 0); /*0x79f946*/
      }
      v43 = (HWND)Dialog::GetCurrent(); /*0x79f94b*/
      v44 = GetDlgItem(v43, 1344); /*0x79f956*/
      if ( v44 ) /*0x79f95e*/
        SetFocus(v44); /*0x79f961*/
      Dialog::Destroy(Dialog); /*0x79f969*/
      dword_A8B248 = 0; /*0x79f96e*/
      v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
    LOBYTE(v17) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v17, v48); /*0x79f3d2*/
    if ( (unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v38 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f8be*/
  if ( v38 ) /*0x79f8c5*/
  {
    stru_B77D80.HashTable_field_0x48 = 0; /*0x79f8cb*/
    CloseDialog(v38, 0); /*0x79f8d1*/
  }
  v39 = (HWND)Dialog::GetCurrent(); /*0x79f8d6*/
  v40 = GetDlgItem(v39, 1344); /*0x79f8e1*/
  if ( v40 ) /*0x79f8e9*/
    SetFocus(v40); /*0x79f8ec*/
  Dialog::Destroy(Dialog); /*0x79f8f4*/
  dword_A8B248 = 0; /*0x79f8f9*/
  v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
LABEL_123:
  ShowDialogConfirm(v41, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(v48); /*0x79f924*/
LABEL_143:
  v50 = (OwnerDrawControl)&off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(&v50); /*0x79fb22*/
  return 0; /*0x79f195*/
}



// ==== 0x0079FC40  ObjectClass::JoinLobbyWOL  this=ObjectClass  sig=csp ====
int JoinLobbyWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  int v2; // edx
  wchar_t *v3; // eax
  int v5; // ebp
  int v6; // ebx
  wchar_t *v7; // eax
  HANDLE *v8; // esi
  int v9; // esi
  int v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  int v13; // esi
  TechnoTypeClass *v14; // ecx
  DWORD i; // esi
  HWND Dialog; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int j; // esi
  TechnoTypeClass *v20; // ecx
  HWND v21; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v24; // eax
  HWND v25; // eax
  wchar_t *v26; // eax
  int k; // esi
  TechnoTypeClass *v28; // ecx
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  Skirmish *v32; // esi
  wchar_t *v33; // [esp-4h] [ebp-12Ch] BYREF
  ObjectClass *v34; // [esp+0h] [ebp-128h]
  _BYTE String2[280]; // [esp+10h] [ebp-118h] BYREF

  if ( g_MenuStateFlags ) /*0x79fc53*/
  {
    g_MenuStateFlags = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  StringCSF = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&stru_B7622C.?, StringCSF); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x79fcf8*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v2 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fd37*/
  if ( !*(_DWORD *)&g_WindowManager.__pad_EC[636] ) /*0x79fd3f*/
  {
    v3 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v3, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  *(_DWORD *)String2 = aLob39; /*0x79fd94*/
  memset(&String2[12], 0, 0x10Cu); /*0x79fd9c*/
  if ( dword_A8B244 != 2 ) /*0x79fda4*/
    *(_DWORD *)String2 = g_Str_Lob_40_; /*0x79fda6*/
  v5 = 0; /*0x79fdae*/
  if ( *(int *)&g_WindowManager.__pad_EC[636] <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v6 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v6 >= 0 && v5 < v2 ) /*0x79fdbc*/
      qmemcpy(&String2[12], (const void *)(v6 + *(_DWORD *)&g_WindowManager.__pad_EC[644]), 0x10Cu); /*0x79fdd0*/
    if ( !_strnicmp(&String2[64], *(const char **)String2, strlen(*(const char **)String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v2 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fdf7*/
    ++v5; /*0x79fdfd*/
    v6 += 268; /*0x79fdfe*/
    if ( v5 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v5 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fe10*/
  {
LABEL_22:
    v7 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v7, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  *(_DWORD *)&String2[8] = CreateDialogIndirect(g_hInstance, (HWND)0x117, g_hWnd, (DLGPROC)sub_7A2110, 0); /*0x79fe70*/
  SetupDialog(*(Dialog **)&String2[8], 279); /*0x79fe74*/
  SendMessageA(*(HWND *)&String2[8], 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow(*(HWND *)&String2[8], 1); /*0x79fe8b*/
  v8 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v8++); /*0x79fe9f*/
  while ( (int)v8 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  v9 = 0; /*0x79feb1*/
  for ( *(_DWORD *)&String2[4] = 0; v9 < *(int *)g_WindowManager.__pad_0; ++v9 ) /*0x79feb9*/
    Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9), 0); /*0x79fec5*/
  v10 = 0; /*0x79fed9*/
  for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v10 < *(int *)&stru_B76900.needsRedraw; ++v10 ) /*0x79fee3*/
    Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v10), 0); /*0x79feee*/
  *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79ff02*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79ff08*/
  HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79ff1f*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(v34); /*0x79ff39*/
  RefreshGameListWOL(v34); /*0x79ff3e*/
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
            String::Assign((String *)String2, aZotclot9); /*0x79ff62*/
            v11 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v33 = v12; /*0x79ff7d*/
            WideString::Assign(&v33, v11); /*0x79ff81*/
            v13 = LeaveChannelExWOL((int)&String2[12], (char **)String2, v33); /*0x79ff97*/
            DeleteAndZero((ObjectClass *)String2); /*0x79ff99*/
            if ( v13 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v33 = 0; /*0x7a0139*/
              v17 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
LABEL_70:
              ShowDialogConfirm(v17, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, (char)v33); /*0x7a0279*/
LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&String2[64], &stru_B76AC4.needsRedraw) ) /*0x79ffe2*/
            RequestMatchWOL(v34); /*0x7a0009*/
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(v14); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + i)); /*0x7a0045*/
          if ( !i || i == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( i != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(v34); /*0x7a0061*/
          ProcessPingRequestsWOL(v34); /*0x7a0066*/
        }
        if ( i != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( stru_B77D80.HashTable_field_0x50 ) /*0x7a0154*/
          {
            v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a017b*/
            v18 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            WideString::Assign((wchar_t **)String2, v18); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a01b1*/
            for ( j = 0; stru_B77D80.HashTable_field_0x50; ++j ) /*0x7a01bf*/
            {
              if ( j >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(v20); /*0x7a01d3*/
            }
            v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a01e7*/
            if ( v21 ) /*0x7a01ee*/
            {
              stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7a01f9*/
              if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a01ff*/
                CloseDialog(v21, 0); /*0x7a0205*/
            }
            Current = (HWND)Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v33 = 0; /*0x7a025d*/
            v17 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v33 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v17 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v17 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( i != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( MatchGameWOL(v34) && dword_A8B244 == 3 ) /*0x7a009f*/
      {
        Dialog = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(Dialog, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(Dialog, 1); /*0x7a00f1*/
      }
    }
  }
  while ( i != 7 ); /*0x7a00ff*/
  v24 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v24); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  *(_DWORD *)&String2[4] = 1; /*0x7a02c6*/
LABEL_73:
  CloseDialog(*(HWND *)&String2[8], 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(v34); /*0x7a02d9*/
  v25 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a02e3*/
  if ( v25 ) /*0x7a02ea*/
    CloseDialog(v25, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x7a032c*/
  {
    v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a0353*/
    v26 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    WideString::Assign((wchar_t **)String2, v26); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a038a*/
    for ( k = 0; stru_B77D80.HashTable_field_0x50; ++k ) /*0x7a0398*/
    {
      if ( k >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(v28); /*0x7a03ac*/
    }
    v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a03c0*/
    if ( v29 ) /*0x7a03c7*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7a03d2*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a03d8*/
        CloseDialog(v29, 0); /*0x7a03de*/
    }
    v30 = (HWND)Dialog::GetCurrent(); /*0x7a03e3*/
    v31 = GetDlgItem(v30, 1344); /*0x7a03ee*/
    if ( v31 ) /*0x7a03f6*/
      SetFocus(v31); /*0x7a03f9*/
  }
  v32 = g_UIControlState; /*0x7a03ff*/
  if ( g_UIControlState ) /*0x7a0407*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x7a040b*/
    __3_YAXPAX_Z(v32); /*0x7a0411*/
    g_UIControlState = 0; /*0x7a0419*/
  }
  return *(_DWORD *)&String2[4]; /*0x79fd7e*/
}



// ==== 0x00791AA0  ObjectClass::UI_Setup_791AA0  this=ObjectClass  sig=csp ====
void __thiscall UI_Setup_791AA0(ObjectClass *this)
{
  wchar_t *StringCSF; // eax

  if ( this ) /*0x791aa5*/
  {
    if ( g_MenuStateFlags ) /*0x791ab5*/
      StringCSF = GetStringCSF(g_Str_TXT_OBSERVER_FULL, 0, g_Str_File_wonline_cpp, 17235); /*0x791adb*/
    else
      StringCSF = GetStringCSF(g_Str_TXT_CHANNEL_FULL, 0, g_Str_File_wonline_cpp, 17233); /*0x791ac8*/
    ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x791ae4*/
    if ( (*(int (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv) < 0 ) /*0x791af6*/
      CloseDialog((HWND)this, 2); /*0x791aff*/
  }
}



// ==== 0x00791B10  WOLobby::ChatDlgProc  this=WOLobby  sig=csp ====
int __stdcall WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{
  int result; // eax
  HWND v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v13; // eax
  Skirmish *v14; // esi
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
  ObjectClass **p_nextObject; // edi
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
  int v39; // eax
  const wchar_t *i; // esi
  char *v41; // eax
  wchar_t *v42; // eax
  wchar_t *v43; // e... [27756 chars total]



// ==== 0x00792BE0  ShowUIMessage  this=-  sig=csp ====
char __fastcall ShowUIMessage(int a1, wchar_t **a2, char a3)
{
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // edi
  wchar_t *v7; // eax
  HWND Current; // eax
  HWND v9; // edi
  HWND v10; // ebp
  wchar_t *v11; // eax
  char result; // al

  DialogIndirect = (DLGTEMPLATE *)Dialog::FindByHandle((Dialog *)0xC4); /*0x792bf6*/
  if ( DialogIndirect ) /*0x792bfa*/
  {
    dword_B77DC8 |= a1; /*0x792c06*/
    if ( WideString::Length((WideString *)a2) ) /*0x792c0c*/
    {
      DlgItem = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c27*/
      v7 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c29*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v7); /*0x792c37*/
    }
  }
  else if ( a1 ) /*0x792c44*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x792c47*/
    v9 = GetDlgItem(Current, 1344); /*0x792c5a*/
    ShowUIMessage_Show(); /*0x792c5c*/
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)0xC4, g_hWnd, (DLGPROC)sub_792CF0, 0); /*0x792c7e*/
    SetupDialog((Dialog *)DialogIndirect, 196); /*0x792c87*/
    v10 = GetDlgItem((HWND)DialogIndirect, 1458); /*0x792c96*/
    v11 = WideString::GetOrEmpty_Alt((WideString *)a2); /*0x792c98*/
    SendMessageA(v10, 0x4B2u, 0, (LPARAM)v11); /*0x792ca6*/
    dword_B77DC8 = a1; /*0x792cb3*/
    if ( v9 ) /*0x792cb9*/
      SetFocus(v9); /*0x792cbc*/
  }
  result = a3; /*0x792cc2*/
  if ( a3 ) /*0x792cc8*/
  {
    result = dword_B77DC8; /*0x792cca*/
    if ( dword_B77DC8 ) /*0x792cd1*/
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
    dword_B77DC8 &= ~a1; /*0x792edb*/
    if ( !dword_B77DC8 ) /*0x792ee1*/
      CloseDialog(v2, 0); /*0x792ee7*/
  }
  Current = Dialog::GetCurrent(); /*0x792eec*/
  result = GetDlgItem(Current, 1344); /*0x792ef7*/
  if ( result ) /*0x792f00*/
    return SetFocus(result); /*0x792f03*/
  return result; /*0x792eff*/
}



// ==== 0x00792F10  Network::SyncPlayerList  this=Network  sig=csp ====
void Network::SyncPlayerList(Network *this)
{
  int owningHouseIndex; // eax
  int v2; // ebp
  int v3; // ebx
  char *v4; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // esi
  char *v7; // eax
  char *v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  int v11; // ecx
  int i; // esi
  int v13; // [esp+Ch] [ebp-7Ch] BYREF
  int v14; // [esp+10h] [ebp-78h] BYREF
  int v15[2]; // [esp+14h] [ebp-74h] BYREF
  _DWORD v16[27]; // [esp+1Ch] [ebp-6Ch] BYREF

  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x792f10*/
  dword_A8B54C = 1; /*0x792f18*/
  v2 = 0; /*0x792f23*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x792f28*/
  {
    v3 = 0; /*0x792f30*/
    do /*0x79301a*/
    {
      if ( v3 >= 0 && v2 < owningHouseIndex ) /*0x792f38*/
        qmemcpy(v16, (char *)g_WOL_UserList.nextObject + v3, sizeof(v16)); /*0x792f4b*/
      v4 = CharToWideString(&v16[9]); /*0x792f51*/
      v5 = Player::FindByName((Player *)v4); /*0x792f58*/
      v6 = v5; /*0x792f5d*/
      if ( v5 && (unsigned __int8)IsKnownPointer((ObjectClass *)v5) ) /*0x792f65*/
        *(_DWORD *)((char *)v6 + 123) = v16[5]; /*0x792f72*/
      v7 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x792f7a*/
      if ( _strcmpi((char *)&v16[9], v7) ) /*0x792f85*/
      {
        if ( (v16[0] & 1) != 0 ) /*0x792f96*/
        {
          v8 = CharToWideString(&v16[9]); /*0x792f9c*/
          v9 = Player::FindByName((Player *)v8); /*0x792fa3*/
          Network::CopyAddress((Network *)(v9 + 20), &v14, (int)v15); /*0x792fb5*/
          NetworkID::Assign((NetworkID *)&stru_A8BB1C, &v14, (int)v15, 0); /*0x792fcb*/
        }
        v13 = 0; /*0x792fde*/
        (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))( /*0x792fea*/
          g_UIPointerTable,
          v16[6],
          &v13);
        v10 = v13; /*0x792fed*/
        if ( v13 < 0 ) /*0x792ff3*/
        {
          v10 = 0; /*0x792ff5*/
          v13 = 0; /*0x792ff7*/
        }
        v11 = dword_A8B54C; /*0x792ffb*/
        *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = v10; /*0x793001*/
        dword_A8B54C = v11 + 1; /*0x793009*/
      }
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79300f*/
      ++v2; /*0x793014*/
      v3 += 108; /*0x793015*/
    }
    while ( v2 < g_WOL_UserList.owningHouseIndex ); /*0x79301a*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 48))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x79302a*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x793039*/
  {
    Network::FormatAddress((Network *)(dword_A8DA78[i] + 40), 0); /*0x793048*/
    Debug::Log(); /*0x793053*/
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 44))( /*0x793071*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      dword_A8DA78[i] + 40,
      0);
  }
  Network::FormatAddress(&stru_A8BB1C, 0); /*0x793085*/
  Debug::Log(); /*0x793090*/
}



// ==== 0x007930A0  UI_Setup_7930A0  this=-  sig=ida-proto ====
bool sub_7930A0()
{
  int v0; // eax
  char *i; // edx
  char *v3; // eax

  v0 = 0; /*0x7930a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7930ad*/
    return 0; /*0x7930ad*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7930af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7930bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7930c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7930d2*/
      break; /*0x7930d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7930da*/
      return 0; /*0x7930e1*/
  }
  if ( !&byte_B777B0 ) /*0x7930e9*/
    return 0; /*0x7930ed*/
  v3 = String::GetOrEmpty_Alt((char **)&dword_B73E40); /*0x7930f6*/
  return _strcmpi(unk_B777D4, v3) == 0; /*0x7930dc*/
}



// ==== 0x00793120  ObjectClass::method  this=ObjectClass  sig=csp ====
bool __thiscall sub_793120(ObjectClass *this)
{
  int v1; // eax
  ObjectClass *i; // edx
  char *v4; // eax

  v1 = 0; /*0x793128*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x793130*/
    return 0; /*0x793130*/
  for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x793132*/
  {
    if ( v1 >= 0 && v1 < g_WOL_UserList.owningHouseIndex ) /*0x79313e*/
      qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x79314c*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x793155*/
      break; /*0x793155*/
    if ( ++v1 >= g_WOL_UserList.owningHouseIndex ) /*0x79315d*/
      return 0; /*0x793165*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 ) /*0x79316d*/
    return 0; /*0x793172*/
  v4 = String::GetOrEmpty_Alt((String *)this); /*0x793178*/
  return _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4) == 0; /*0x79315f*/
}



// ==== 0x007931A0  GameSettings::FindFlagged  this=GameSettings  sig=ida-proto ====
char *GameSettings_FindFlagged()
{
  int v0; // eax
  char *i; // edx

  v0 = 0; /*0x7931a7*/
  if ( (int)dword_B77900 <= 0 ) /*0x7931ad*/
    return 0; /*0x7931dc*/
  for ( i = (char *)dword_B77908; ; i += 108 ) /*0x7931af*/
  {
    if ( v0 >= 0 && v0 < (int)dword_B77900 ) /*0x7931bb*/
      qmemcpy(&byte_B777B0, i, 0x6Cu); /*0x7931c9*/
    if ( (byte_B777B0 & 1) != 0 ) /*0x7931d2*/
      break; /*0x7931d2*/
    if ( ++v0 >= (int)dword_B77900 ) /*0x7931da*/
      return 0; /*0x7931da*/
  }
  return &byte_B777B0; /*0x7931dc*/
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
      if ( v5 > dword_A8DA84 - 1 ) /*0x79339c*/
        DestroyWindow(DlgItem); /*0x79339f*/
      ++v6; /*0x7933a1*/
      ++v5; /*0x7933a4*/
    }
    while ( (int)v6 < (int)&byte_84A210 ); /*0x7933ab*/
    for ( i = 0; i < dword_A8DA84; ++i ) /*0x7933bc*/
    {
      v9 = GetDlgItem(hWnd, dword_84A1F0[i]); /*0x7933d3*/
      SendMessageA(v9, 0x4B2u, 0, *(_DWORD *)(dword_A8DA78 + 4 * i)); /*0x7933e1*/
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
int HandleWOLForwardingError(ObjectClass *this)
{
  int result; // eax
  ObjectClass *i; // edx
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  char v6; // bl
  int v7; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  const wchar_t *v11; // [esp-4h] [ebp-210h]
  wchar_t *v12; // [esp-4h] [ebp-210h]
  const wchar_t *v13; // [esp-4h] [ebp-210h]
  wchar_t *v14; // [esp-4h] [ebp-210h]
  wchar_t Buffer[256]; // [esp+Ch] [ebp-200h] BYREF

  result = 0; /*0x793496*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x7934a3*/
  {
    for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7934a9*/
    {
      if ( result >= 0 && result < g_WOL_UserList.owningHouseIndex ) /*0x7934b5*/
        qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7934c3*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7934cc*/
        break; /*0x7934cc*/
      if ( ++result >= g_WOL_UserList.owningHouseIndex ) /*0x7934d4*/
        return result; /*0x7934d4*/
    }
    result = (int)&g_WebBrowserConfig.occupant; /*0x7934e0*/
    if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x7934e7*/
    {
      v3 = -1; /*0x7934f2*/
      v4 = 0; /*0x7934f5*/
      if ( dword_A8DA84 > 0 ) /*0x7934f9*/
      {
        while ( 1 ) /*0x793509*/
        {
          v5 = ToWideStringChar((char *)dword_A8DA78[v4]); /*0x793509*/
          if ( !_strcmpi(v5, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x79350f*/
            break; /*0x79350f*/
          if ( ++v4 >= dword_A8DA84 ) /*0x793523*/
            goto LABEL_15; /*0x793523*/
        }
        v3 = v4; /*0x793527*/
      }
LABEL_15:
      v6 = 0; /*0x793529*/
      v7 = 0; /*0x793530*/
      if ( dword_A8DA84 <= 0 ) /*0x793534*/
        goto LABEL_26; /*0x793534*/
      do /*0x7936ba*/
      {
        switch ( *(_DWORD *)&g_WindowManager.__pad_EC[4 * v7 + 32] ) /*0x79354a*/
        {
          case 0: /*0x79354a*/
            v6 = 1; /*0x793557*/
            ToWideStringChar((char *)dword_A8DA78[v7]); /*0x79355c*/
            Debug::Log(); /*0x793567*/
            v11 = (const wchar_t *)dword_A8DA78[v7]; /*0x793579*/
            StringCSF = GetStringCSF((wchar_t *)aTxtTalkReporte, 0, g_Str_File_wonline_cpp, 18840); /*0x793589*/
            goto LABEL_19; /*0x793589*/
          case 1: /*0x79354a*/
            v6 = 1; /*0x793591*/
            ToWideStringChar((char *)dword_A8DA78[v7]); /*0x793596*/
            Debug::Log(); /*0x7935a1*/
            v11 = (const wchar_t *)dword_A8DA78[v7]; /*0x7935b3*/
            StringCSF = GetStringCSF(aTxtTalkLocalPr, 0, g_Str_File_wonline_cpp, 18850); /*0x7935c3*/
LABEL_19:
            swprintf(Buffer, (const size_t)StringCSF, v11); /*0x7935c8*/
            Dialog::ShowMessage(-1, (size_t)Buffer); /*0x7935df*/
            break; /*0x7935e7*/
          case 2: /*0x79354a*/
            v6 = 1; /*0x7935ee*/
            if ( v7 == v3 ) /*0x7935f0*/
            {
              Debug::Log(); /*0x7935f7*/
              v12 = GetStringCSF(aTxtTalkForward, 0, g_Str_File_wonline_cpp, 18861); /*0x79361b*/
              Dialog::ShowMessage(-1, (size_t)v12); /*0x79361d*/
            }
            else
            {
              ToWideStringChar((char *)dword_A8DA78[v7]); /*0x79362a*/
              Debug::Log(); /*0x793635*/
              v13 = (const wchar_t *)dword_A8DA78[v7]; /*0x79364b*/
              v9 = GetStringCSF(aTxtTalkForward_0, 0, g_Str_File_wonline_cpp, 18864); /*0x793658*/
              swprintf(Buffer, (const size_t)v9, v13); /*0x793663*/
              Dialog::ShowMessage(-1, (size_t)Buffer); /*0x793674*/
            }
            break; /*0x79361d*/
          case 3: /*0x79354a*/
            v6 = 1; /*0x793683*/
            Debug::Log(); /*0x793685*/
            v14 = GetStringCSF(aTxtTalkHostAbo, 0, g_Str_File_wonline_cpp, 18875); /*0x7936a3*/
            Dialog::ShowMessage(-1, (size_t)v14); /*0x7936aa*/
            break; /*0x7936aa*/
          default:
            break;
        }
        result = dword_A8DA84; /*0x7936b2*/
        ++v7; /*0x7936b7*/
      }
      while ( v7 < dword_A8DA84 ); /*0x7936ba*/
      if ( !v6 ) /*0x7936c2*/
      {
LABEL_26:
        v10 = GetStringCSF(aTxtFailedToTal, 0, g_Str_File_wonline_cpp, 18888); /*0x7936d5*/
        return Dialog::ShowMessage(-1, (size_t)v10); /*0x7936e2*/
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
  v3 = (wchar_t **)&dword_A8DA90; /*0x7937ce*/
  do /*0x7937ed*/
  {
    if ( IsKnownPointer(*v3) ) /*0x7937d5*/
      *v2++ = v1; /*0x7937de*/
    ++v3; /*0x7937e3*/
    ++v1; /*0x7937e6*/
  }
  while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x7937ed*/
  v4 = dword_A8DA84; /*0x7937ef*/
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
        v4 = dword_A8DA84; /*0x79384f*/
        ++v5; /*0x793859*/
        ++v19; /*0x79385f*/
      }
      while ( v19 < dword_A8DA84 - 1 ); /*0x793865*/
    }
  }
  Debug::Log(); /*0x793897*/
  v9 = 0; /*0x79389c*/
  v20 = 0; /*0x7938a3*/
  Debug::Log(); /*0x7938a7*/
  v10 = dword_A8DA84; /*0x7938ac*/
  if ( dword_A8DA84 > 0 ) /*0x7938b6*/
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
          v10 = dword_A8DA84; /*0x7938f0*/
          v17 = v20 + 1; /*0x7938f8*/
          v15 += 8; /*0x7938f9*/
          ++v11; /*0x7938fc*/
          ++v14; /*0x7938fd*/
          ++v20; /*0x793902*/
        }
        while ( v11 < dword_A8DA84 ); /*0x793906*/
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
  v6 = (char **)&dword_A8DA90; /*0x79395c*/
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
  while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x79399d*/
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
  v5 = (char **)&dword_A8DA90; /*0x793a30*/
  while ( 1 ) /*0x793a38*/
  {
    v6 = ToWideStringChar(*v5); /*0x793a38*/
    result = _strcmpi(v6, a1); /*0x793a3e*/
    if ( !result ) /*0x793a48*/
      break; /*0x793a48*/
    ++v5; /*0x793a4a*/
    ++v4; /*0x793a4d*/
    if ( (int)v5 >= (int)&dword_A8DAB0 ) /*0x793a54*/
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

  result = dword_B77900; /*0x793a70*/
  v3 = 0; /*0x793a7e*/
  v4 = 0; /*0x793a80*/
  if ( (int)dword_B77900 > 0 ) /*0x793a89*/
  {
    v7 = 0; /*0x793a8f*/
    for ( i = 0; ; v7 = i ) /*0x793a91*/
    {
      if ( v7 >= 0 && v4 < result ) /*0x793aa1*/
        v3 = (char *)dword_B77908 + v7; /*0x793aa8*/
      if ( !_strcmpi(a1, v3 + 36) ) /*0x793ab0*/
      {
        qmemcpy(v9, "Z4", sizeof(v9)); /*0x793ac8*/
        sprintf(Buffer, "%d", a2); /*0x793ad9*/
        Debug::Log(); /*0x793ae9*/
        (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v3, v9); /*0x793aff*/
      }
      result = dword_B77900; /*0x793b06*/
      ++v4; /*0x793b0b*/
      i += 108; /*0x793b11*/
      if ( v4 >= (int)dword_B77900 ) /*0x793b15*/
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
int Network_Connect_793BB0(ObjectClass *this)
{
  int result; // eax
  int *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // esi
  int v5; // eax
  int v6; // [esp+0h] [ebp-1D8h]
  int v7; // [esp+8h] [ebp-1D0h]
  int v8[113]; // [esp+10h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+1D4h] [ebp-4h]
  char v10; // [esp+1D6h] [ebp-2h]

  result = dword_A8E224; /*0x793bb6*/
  v6 = 0; /*0x793bbb*/
  if ( dword_A8E224 > 0 ) /*0x793bc5*/
  {
    v2 = (int *)&unk_A8E1C4; /*0x793bcf*/
    v3 = &dword_A8E1A4; /*0x793bd4*/
    do /*0x793bdc*/
    {
      v4 = v2[2]; /*0x793bdc*/
      if ( *v2 != -1 ) /*0x793be5*/
      {
        v5 = Timer::GetTicks() - *v2; /*0x793bec*/
        if ( v5 >= v4 ) /*0x793bf1*/
          goto LABEL_7; /*0x793bf1*/
        v4 -= v5; /*0x793bf3*/
      }
      if ( !v4 ) /*0x793bf7*/
      {
LABEL_7:
        memset(v8, 0, sizeof(v8)); /*0x793c08*/
        v9 = 0; /*0x793c0a*/
        v10 = 0; /*0x793c0c*/
        v8[0] = 13; /*0x793c12*/
        strcpy((char *)&v8[1], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x793c39*/
        ToWideStringChar((char *)dword_A8DA90[*v3]); /*0x793c4b*/
        Debug::Log(); /*0x793c56*/
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v8, 47, 0, (wchar_t *)dword_A8DA90[*v3]); /*0x793c76*/
        *v2 = Timer::GetTicks(); /*0x793c8f*/
        v2[1] = v7; /*0x793c99*/
        v2[2] = 1200; /*0x793c9c*/
      }
      result = v6 + 1; /*0x793c9f*/
      ++v3; /*0x793caa*/
      v2 += 3; /*0x793cad*/
      ++v6; /*0x793cb2*/
    }
    while ( v6 < dword_A8E224 ); /*0x793bdc*/
  }
  return result; /*0x793cc0*/
}



// ==== 0x00793CD0  ObjectClass::method_793CD0  this=ObjectClass  sig=csp ====
int __thiscall sub_793CD0(ObjectClass *this)
{
  int Ticks; // eax
  int *v2; // ecx
  int v4; // [esp+4h] [ebp-8h]

  dword_A8E1A4[dword_A8E224] = this; /*0x793cd8*/
  Ticks = Timer::GetTicks(); /*0x793ce3*/
  v2 = (int *)(12 * dword_A8E224 + 11067844); /*0x793cf6*/
  *v2 = Ticks; /*0x793cfd*/
  v2[1] = v4; /*0x793d03*/
  v2[2] = 1200; /*0x793d06*/
  return ++dword_A8E224; /*0x793d14*/
}



// ==== 0x00793D20  NegotiateNetworkConnection  this=-  sig=csp ====
char __fastcall NegotiateNetworkConnection(int a1, int a2, int a3)
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
  unsigned __int16 v23; // si
  char *v24; // ebx
  int owningHouseIndex; // eax
  char *v26; // esi
  int v27; // ebp
  int v28; // ecx
  TechnoTypeClass *v29; // ecx
  int v30; // esi
  int v31; // eax
  __int16 v32; // di
  int v33; // esi
  TechnoTypeClass *v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  char v42; // bl
  int Speed; // eax
  int v44; // ecx
  char *v45; // eax
  HWND v46; // eax
  HWND v47; // esi
  HWND DlgItem; // eax
  int *v49; // ecx
  int v50; // eax
  int v51; // esi
  int v52; // esi
  int v53; // eax
  char *v54; // eax
  ObjectClass *v55; // [esp+2h] [ebp-74Ch]
  char v56; // [esp+14h] [ebp-73Ah]
  char v57; // [esp+15h] [ebp-739h]
  unsigned __int16 v58; // [esp+16h] [ebp-738h]
  int v59; // [esp+16h] [ebp-738h]
  int v60; // [esp+16h] [ebp-738h]
  int v61; // [esp+1Ah] [ebp-734h]
  int v62; // [esp+1Eh] [ebp-730h]
  int v63; // [esp+22h] [ebp-72Ch]
  int v64; // [esp+22h] [ebp-72Ch]
  int v65; // [esp+2Ah] [ebp-724h]
  int v66; // [esp+2Eh] [ebp-720h]
  int v67; // [esp+32h] [ebp-71Ch]
  int j; // [esp+3Ah] [ebp-714h]
  int v69; // [esp+3Eh] [ebp-710h] BYREF
  int v70; // [esp+42h] [ebp-70Ch]
  int v71; // [esp+46h] [ebp-708h]
  int v72; // [esp+4Ah] [ebp-704h]
  int v73; // [esp+4Eh] [ebp-700h]
  int i; // [esp+56h] [ebp-6F8h]
  _DWORD v75[4]; // [esp+5Ah] [ebp-6F4h] BYREF
  int v76; // [esp+6Ah] [ebp-6E4h]
  int v77; // [esp+6Eh] [ebp-6E0h]
  int v78; // [esp+72h] [ebp-6DCh]
  int v79; // [esp+76h] [ebp-6D8h]
  int v80; // [esp+7Eh] [ebp-6D0h]
  int v81; // [esp+82h] [ebp-6CCh]
  TechnoTypeClass *v82; // [esp+86h] [ebp-6C8h]
  int v83; // [esp+8Ah] [ebp-6C4h]
  bool v84[4]; // [esp+8Eh] [ebp-6C0h] BYREF
  int v85; // [esp+92h] [ebp-6BCh]
  int v86; // [esp+96h] [ebp-6B8h]
  int v87; // [esp+9Ah] [ebp-6B4h]
  int v88; // [esp+A2h] [ebp-6ACh]
  int Ticks; // [esp+A6h] [ebp-6A8h]
  int v90; // [esp+AEh] [ebp-6A0h]
  Waypoint v91; // [esp+B2h] [ebp-69Ch] BYREF
  char v92[3]; // [esp+1BEh] [ebp-590h] BYREF
  char v93[253]; // [esp+1C1h] [ebp-58Dh] BYREF
  char v94[2]; // [esp+2BEh] [ebp-490h] BYREF
  char Buffer[254]; // [esp+2C0h] [ebp-48Eh] BYREF
  int v96; // [esp+3BEh] [ebp-390h] BYREF
  char v97[452]; // [esp+3C2h] [ebp-38Ch] BYREF
  int v98[11]; // [esp+586h] [ebp-1C8h] BYREF
  __int16 v99; // [esp+5B2h] [ebp-19Ch]
  char v100; // [esp+5B4h] [ebp-19Ah]

  v3 = a1; /*0x793d28*/
  v70 = a2; /*0x793d2c*/
  v72 = a1; /*0x793d34*/
  v4 = 0; /*0x793d3d*/
  Timer::GetTicks(); /*0x793d38*/
  Timer::GetTicks(); /*0x793d4b*/
  v56 = 1; /*0x793d5f*/
  v75[0] = 0; /*0x793d64*/
  Waypoint::InitInvalid(&v91); /*0x793d68*/
  v66 = 0; /*0x793d74*/
  v57 = 0; /*0x793d7f*/
  Debug::Log(); /*0x793d84*/
  v62 = -1; /*0x793d93*/
  if ( dword_A8DA84 <= 0 ) /*0x793d9b*/
    goto LABEL_6; /*0x793d9b*/
  do /*0x793dd5*/
  {
    v5 = (char *)dword_A8DA90[v3]; /*0x793da3*/
    v6 = ToWideStringChar((char *)dword_A8DA78[v4]); /*0x793db4*/
    v7 = ToWideStringChar(v5); /*0x793db6*/
    if ( !_strcmpi(v6, v7) ) /*0x793dbd*/
      v62 = v4; /*0x793dc9*/
    ++v4; /*0x793dd2*/
  }
  while ( v4 < dword_A8DA84 ); /*0x793dd5*/
  if ( v62 == -1 ) /*0x793ddc*/
  {
LABEL_6:
    strcpy(&v91.__pad_0[12], "Z10"); /*0x793de5*/
    Debug::Log(); /*0x793e0b*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, &v91.__pad_0[12]); /*0x793e23*/
    Debug::Log(); /*0x793e2d*/
    return 0; /*0x793e41*/
  }
  v9 = (char *)&unk_A8E060; /*0x793e44*/
  while ( *v9 ) /*0x793e4c*/
  {
    v10 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x793e55*/
    if ( !_strcmpi(v9, v10) ) /*0x793e66*/
    {
      Debug::Log(); /*0x793e7a*/
      v56 = 0; /*0x793e82*/
      break; /*0x793e82*/
    }
    v9 += 36; /*0x793e68*/
    if ( (int)v9 >= (int)byte_A8E180 ) /*0x793e71*/
      break; /*0x793e71*/
  }
  v11 = *(_DWORD *)&stru_A8DBC0.alignmentPadding69[4 * v3 + 3]; /*0x793e87*/
  if ( v56 && (!v11 || (v11 & 1) != 0) && (!(_WORD)dword_ABFEC8 || (dword_ABFEC8 & 1) != 0) ) /*0x793eac*/
  {
    Debug::Log(); /*0x793eb3*/
    v56 = 0; /*0x793ebb*/
  }
  v61 = 0; /*0x793ec2*/
  v71 = 0; /*0x793ec6*/
  v58 = 0; /*0x793eca*/
  while ( 1 ) /*0x793ece*/
  {
    v12 = v62; /*0x793ece*/
    Debug::Log(); /*0x793ed7*/
    Network_Connect_793BB0(v55); /*0x793edf*/
    if ( v56 ) /*0x793eea*/
    {
      v14 = 0; /*0x793f1d*/
      v15 = dword_ABFEC8; /*0x793f1f*/
      Debug::Log(); /*0x793f2b*/
      if ( (v15 & 0x40) != 0 ) /*0x793f36*/
        goto LABEL_110; /*0x793f36*/
      Debug::Log(); /*0x793f41*/
      v59 = 0; /*0x793f50*/
      if ( dword_A8E224 <= 0 ) /*0x793f54*/
        goto LABEL_110; /*0x793f54*/
      v16 = dword_A8E1A4; /*0x793f5a*/
      do /*0x793fd4*/
      {
        v17 = *v16; /*0x793f5f*/
        v18 = (_DWORD *)(dword_A8DA90[*v16] + 40); /*0x793f68*/
        *(_DWORD *)v84 = *v18; /*0x793f6d*/
        v19 = dword_A8DA90[v3] + 40; /*0x793f7e*/
        v85 = v18[1]; /*0x793f81*/
        v86 = v18[2]; /*0x793f8c*/
        if ( (unsigned __int8)NetworkID::Compare(v84, v19) ) /*0x793f9a*/
        {
          v14 = dword_A8E184[v17]; /*0x793fa3*/
          Debug::Log(); /*0x793fb8*/
        }
        ++v16; /*0x793fcb*/
        ++v59; /*0x793fd0*/
      }
      while ( v59 < dword_A8E224 ); /*0x793fd4*/
      if ( !v14 ) /*0x793fd9*/
      {
LABEL_110:
        Debug::Log(); /*0x793fe4*/
        v20 = 0; /*0x793ff1*/
        if ( dword_A8DA84 > 0 ) /*0x793ff5*/
        {
          while ( 1 ) /*0x79400a*/
          {
            v21 = ToWideStringChar((char *)dword_A8DA78[v20]); /*0x79400a*/
            v22 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x79400c*/
            if ( !_strcmpi(v21, v22) ) /*0x794013*/
              break; /*0x794013*/
            if ( ++v20 >= dword_A8DA84 ) /*0x794027*/
              goto LABEL_34; /*0x794027*/
          }
          v23 = *(&dword_A8E2B2 + v20); /*0x79402b*/
          Debug::Log(); /*0x794041*/
          v14 = Network::ResolveNetworkAddress((Network *)&dword_ABFEC8, v23); /*0x794054*/
          Debug::Log(); /*0x794061*/
        }
      }
LABEL_34:
      v24 = ToWideStringChar((char *)dword_A8DA90[v72]); /*0x794069*/
      owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79407b*/
      v26 = 0; /*0x794080*/
      v27 = 0; /*0x794082*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794086*/
      {
        v28 = 0; /*0x79408c*/
        v60 = 0; /*0x79408e*/
        do /*0x79411c*/
        {
          if ( v28 >= 0 && v27 < owningHouseIndex ) /*0x794098*/
            v26 = (char *)g_WOL_UserList.nextObject + v28; /*0x7940a0*/
          if ( !_strcmpi(v24, v26 + 36) ) /*0x7940a8*/
          {
            qmemcpy(v94, "Z4", sizeof(v94)); /*0x7940c3*/
            sprintf(Buffer, "%d", v14); /*0x7940da*/
            Debug::Log(); /*0x7940ed*/
            (*(void (__stdcall **)(LPVOID, char *, char *))(*(_DWORD *)ppv + 56))(ppv, v26, v94); /*0x794106*/
          }
          owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79410d*/
          ++v27; /*0x794112*/
          v28 = v60 + 108; /*0x794113*/
          v60 += 108; /*0x794118*/
        }
        while ( v27 < g_WOL_UserList.owningHouseIndex ); /*0x79411c*/
      }
      v3 = v72; /*0x794122*/
      v12 = v62; /*0x794126*/
      v58 = v14; /*0x79412a*/
    }
    else
    {
      v13 = *(&dword_A8E2B2 + v62); /*0x793eec*/
      Debug::Log(); /*0x793f02*/
      dword_A8E050[v3] = v13; /*0x793f0a*/
    }
    Ticks = Timer::GetTicks(); /*0x79413a*/
    v63 = Ticks; /*0x794141*/
    v30 = 360; /*0x79414c*/
    HIWORD(v31) = HIWORD(v61); /*0x794155*/
    v90 = 360; /*0x79415b*/
    v65 = 360; /*0x794162*/
    if ( v61 > 0 ) /*0x794166*/
    {
      v31 = Timer::GetTicks(); /*0x79416f*/
      v29 = v82; /*0x794174*/
      v30 = 240; /*0x79417b*/
      v81 = v31; /*0x794180*/
      v83 = 240; /*0x794187*/
      v63 = v31; /*0x79418e*/
      v65 = 240; /*0x794196*/
    }
    v32 = v71; /*0x79419a*/
    while ( 1 ) /*0x79419e*/
    {
      if ( v63 != -1 ) /*0x7941a3*/
      {
        v31 = Timer::GetTicks() - v63; /*0x7941ae*/
        if ( v31 >= v30 ) /*0x7941b4*/
          break; /*0x7941b4*/
        v30 -= v31; /*0x7941b6*/
      }
      if ( !v30 ) /*0x7941ba*/
        break; /*0x7941ba*/
      if ( v56 == 1 ) /*0x7941c2*/
      {
        if ( dword_A8E050[v3] != v32 ) /*0x7941cc*/
          break; /*0x7941cc*/
      }
      else if ( dword_A8E050[v3] ) /*0x7941dd*/
      {
        break; /*0x7941e6*/
      }
      Game::ProcessIdle(v29); /*0x7941ce*/
      v30 = v65; /*0x7941d3*/
    }
    LOWORD(v31) = dword_A8E050[v3]; /*0x7941f3*/
    v71 = v31; /*0x7941fe*/
    if ( (_WORD)v31 ) /*0x794202*/
    {
      Debug::Log(); /*0x79420e*/
      *(&dword_A8E2B2 + v12) = dword_A8E050[v3]; /*0x79421e*/
      Network::SetPort((Network *)(dword_A8DA78[v12] + 40), dword_A8E050[v3]); /*0x79423b*/
      Network::SetPort((Network *)(dword_A8DA90[v3] + 40), dword_A8E050[v3]); /*0x794253*/
      memset(v98, 0, sizeof(v98)); /*0x794266*/
      v99 = 0; /*0x794268*/
      v100 = 0; /*0x79426a*/
      v98[0] = 41; /*0x794270*/
      strcpy((char *)&v98[1], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x79429d*/
      if ( (dword_ABFEC8 & 8) != 0 && (stru_A8DBC0.alignmentPadding69[4 * v3 + 3] & 8) == 0 ) /*0x7942b7*/
      {
        Debug::Log(); /*0x7942be*/
        v33 = 240; /*0x7942cf*/
        v73 = Timer::GetTicks(); /*0x7942d4*/
        for ( i = 240; ; v33 = i ) /*0x7942d8*/
        {
          if ( v73 != -1 ) /*0x7942e1*/
          {
            v35 = Timer::GetTicks() - v73; /*0x7942ec*/
            if ( v35 >= v33 ) /*0x7942f2*/
              break; /*0x7942f2*/
            v33 -= v35; /*0x7942f4*/
          }
          if ( !v33 ) /*0x7942f8*/
            break; /*0x7942f8*/
          Game::ProcessIdle(v34); /*0x7942fa*/
        }
      }
      ToWideStringChar((char *)dword_A8DA90[v3]); /*0x794305*/
      Debug::Log(); /*0x794322*/
      v36 = Timer::GetTicks(); /*0x794331*/
      v88 = 360; /*0x794342*/
      v87 = v36; /*0x794351*/
      v64 = v36; /*0x794358*/
      v79 = Timer::GetTicks(); /*0x794365*/
      v67 = v79; /*0x794369*/
      v37 = 0; /*0x794371*/
      v80 = 0; /*0x794373*/
      for ( j = 0; ; v37 = j ) /*0x79437b*/
      {
        v38 = v37; /*0x794383*/
        if ( v67 == -1 ) /*0x794388*/
          break; /*0x794388*/
        v39 = Timer::GetTicks() - v67; /*0x794393*/
        if ( v39 < v38 ) /*0x794399*/
        {
          v40 = v38 - v39; /*0x79439b*/
          goto LABEL_68; /*0x79439d*/
        }
LABEL_69:
        Debug::Log(); /*0x7943a5*/
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v98, 47, 0, (wchar_t *)dword_A8DA90[v3]); /*0x7943d3*/
        v41 = Timer::GetTicks(); /*0x7943dc*/
        v37 = 30; /*0x7943e5*/
        v75[1] = v41; /*0x7943ea*/
        v75[3] = 30; /*0x7943ee*/
        v67 = v41; /*0x7943f2*/
        j = 30; /*0x7943fa*/
LABEL_70:
        Game::ProcessIdle((TechnoTypeClass *)v37); /*0x7943fe*/
        v42 = v57; /*0x794403*/
        if ( !v57 ) /*0x794409*/
        {
          Speed = Connection::GetSpeed(&unk_A8E9C0); /*0x794414*/
          v44 = v66; /*0x794419*/
          if ( v66 >= Speed ) /*0x79441f*/
          {
            v44 = 0; /*0x794421*/
            v66 = 0; /*0x794423*/
          }
          if ( !Network::SendPacketThunk((int)&unk_A8E9C0, v44, (int)&v96, (int)v75, (int)&v91, (int)&v69 + 2, 0) /*0x79445d*/
            || HIWORD(v69) != 0xAA04 )
          {
            goto LABEL_89; /*0x79445d*/
          }
          if ( v96 != 13 ) /*0x79446d*/
          {
            if ( v96 != 41 ) /*0x794476*/
              goto LABEL_89; /*0x794476*/
            Debug::Log(); /*0x794481*/
            if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v62] + 40), (int)&v91) ) /*0x7944a1*/
            {
              v45 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7944bd*/
              if ( !_strcmpi(v45, v97) ) /*0x7944c3*/
              {
                Debug::Log(); /*0x7944e0*/
                qmemcpy(v92, "Z1;", sizeof(v92)); /*0x7944f1*/
                if ( v97 ) /*0x794509*/
                  strcpy(v93, v97); /*0x79452d*/
                else
                  v93[0] = 0; /*0x794538*/
                Debug::Log(); /*0x79454d*/
                (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, v92); /*0x794565*/
                if ( v62 >= 0 && v62 < dword_A8DA84 ) /*0x794576*/
                {
                  v46 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x79457d*/
                  v47 = v46; /*0x794582*/
                  if ( v46 ) /*0x794586*/
                  {
                    DlgItem = GetDlgItem(v46, dword_84A1F0[v62]); /*0x794591*/
                    *((_BYTE *)&dword_B75F54 + v62) = 1; /*0x794597*/
                    SendMessageA(DlgItem, 0xF1u, 1u, 0); /*0x7945a8*/
                    PostMessageA(v47, 0xFu, 0, 0); /*0x7945b5*/
                  }
                }
                dword_A8E1A4[dword_A8E224] = v3; /*0x7945c4*/
                v76 = Timer::GetTicks(); /*0x7945d6*/
                v57 = 1; /*0x7945df*/
                v42 = 1; /*0x7945e7*/
                v78 = 1200; /*0x7945eb*/
                v49 = (int *)(12 * dword_A8E224 + 11067844); /*0x7945ef*/
                *v49 = v76; /*0x7945f6*/
                v49[1] = v77; /*0x7945fc*/
                v49[2] = 1200; /*0x7945ff*/
                ++dword_A8E224; /*0x794609*/
                dword_A8E184[v3] = v58; /*0x794619*/
              }
            }
          }
          Network::receiveData((int)&unk_A8E9C0, v66); /*0x79462a*/
          if ( !v42 ) /*0x794631*/
            goto LABEL_89; /*0x794631*/
        }
        if ( dword_A8DE4C[v70] == 11 ) /*0x79463f*/
        {
          Debug::Log(); /*0x79469c*/
          goto LABEL_100; /*0x7946a4*/
        }
LABEL_89:
        v50 = dword_A8DE4C[v70]; /*0x794641*/
        if ( v50 >= 1 && v50 < 11 ) /*0x794654*/
        {
          v51 = v50 - 1; /*0x794656*/
          if ( v50 - 1 > v61 ) /*0x79465f*/
          {
            Debug::Log(); /*0x7946ac*/
            v61 = v51 - 1; /*0x7946b5*/
            goto LABEL_100; /*0x7946b9*/
          }
        }
        v52 = 360; /*0x794669*/
        ++v66; /*0x794671*/
        if ( v64 != -1 ) /*0x794675*/
        {
          v53 = Timer::GetTicks() - v64; /*0x794680*/
          if ( v53 >= 360 ) /*0x794686*/
            goto LABEL_100; /*0x794686*/
          v52 = 360 - v53; /*0x794688*/
        }
        if ( !v52 ) /*0x79468c*/
          goto LABEL_100; /*0x79468c*/
      }
      v40 = v37; /*0x79439f*/
LABEL_68:
      if ( v40 ) /*0x7943a3*/
        goto LABEL_70; /*0x7943a3*/
      goto LABEL_69; /*0x7943a3*/
    }
    v42 = v57; /*0x7946bb*/
LABEL_100:
    if ( v42 && dword_A8DE4C[v70] == 11 || v61 >= a3 ) /*0x7946e2*/
      break; /*0x7946e2*/
    ++v61; /*0x7946f2*/
    v54 = ToWideStringChar((char *)dword_A8DA90[v3]); /*0x7946f6*/
    v91.__pad_0[12] = 90; /*0x7946fd*/
    v91.__pad_0[13] = 49; /*0x794707*/
    v91.__pad_0[14] = v61 + 49; /*0x794714*/
    if ( v54 ) /*0x79471b*/
      strcpy(&v91.__pad_0[15], v54); /*0x79473a*/
    else
      v91.__pad_0[15] = 0; /*0x794745*/
    Debug::Log(); /*0x79475a*/
    (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, &v91.__pad_0[12]); /*0x794772*/
    Debug::Log(); /*0x79477b*/
  }
  Debug::Log(); /*0x794794*/
  return v42; /*0x793e37*/
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
  SessionClass::SetupNetwork((int)dword_A8B238); /*0x794804*/
  if ( dword_A8DA84 > 0 ) /*0x79480f*/
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
    v6 = (char *)*(&dword_A8DA90 + v5); /*0x79489e*/
    ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948a5*/
    ToWideStringChar(v6); /*0x7948ae*/
    Debug::Log(); /*0x7948bf*/
    v7 = ToWideStringChar((char *)*(&dword_A8DA90 + v4)); /*0x7948d8*/
    v8 = String::GetOrEmpty((char **)&dword_B73E40); /*0x7948da*/
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
    v10 = ToWideStringChar((char *)*(&dword_A8DA90 + v5)); /*0x79491c*/
    v11 = String::GetOrEmpty((char **)&dword_B73E40); /*0x79491e*/
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
void StartGameWOL(ObjectClass *this)
{
  Dialog *DialogIndirect; // eax
  int v2; // esi
  char v3; // bl
  int v4; // esi
  char *v5; // eax
  int v6; // esi
  wchar_t *StringCSF; // eax
  HWND v8; // eax
  wchar_t *v9; // eax
  int v10; // ebx
  int v11; // ecx
  u_short v12; // dx
  unsigned __int16 *v13; // eax
  int v14; // eax
  ObjectClass *nextObject; // edx
  int v16; // esi
  char *v17; // eax
  HWND v18; // eax
  int v19; // eax
  ObjectClass *v20; // edx
  char *v21; // eax
  int v22; // esi
  TagClass **p_attachedTag; // eax
  int v24; // eax
  ObjectClass *v25; // ebp
  int v26; // ebx
  ObjectClass *v27; // edx
  int abstractFlags; // ebp
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // edi
  char *v32; // edi
  char *v33; // esi
  char v34; // cl
  char *v35; // eax
  unsigned int v36; // ecx
  ObjectClass *v37; // ebp
  int v38; // edx
  TagClass **v39; // eax
  int owningHouseIndex; // ecx
  unsigned int v41; // ebx
  const char *v42; // edi
  ObjectClass *v43; // [esp+0h] [ebp-20h]
  ObjectClass *v44; // [esp+14h] [ebp-Ch]
  ObjectClass *v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+18h] [ebp-8h]
  int v47; // [esp+1Ch] [ebp-4h]
  TagClass **v48; // [esp+1Ch] [ebp-4h]

  Debug::Log(); /*0x794bac*/
  byte_B77E26 = 1; /*0x794bbd*/
  if ( g_WOL_UserList.owningHouseIndex ) /*0x794bc4*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 20))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x794c32*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 24))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x794c3d*/
    memset(&g_WindowManager.__pad_EC[32], 0xFFu, 0x20u); /*0x794c4e*/
    DialogIndirect = (Dialog *)CreateDialogIndirect(g_hInstance, (HWND)0x130, g_hWnd, (DLGPROC)sub_793280, 0); /*0x794c66*/
    if ( DialogIndirect ) /*0x794c6d*/
      SetupDialog(DialogIndirect, 304); /*0x794c76*/
    v2 = 100; /*0x794c7b*/
    do /*0x794c86*/
    {
      Event::Dispatch(); /*0x794c80*/
      --v2; /*0x794c85*/
    }
    while ( v2 ); /*0x794c86*/
    StartGameWOL_Start((ObjectClass *)&unk_A8E9C0, 300); /*0x794c92*/
    v3 = WaitNetworkLobbyPlayers(); /*0x794c9c*/
    if ( !v3 ) /*0x794ca0*/
    {
      v4 = 0; /*0x794ca7*/
      stru_B77D80.HashTable_field_0x4C = 0; /*0x794cab*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x794cb1*/
        goto LABEL_18; /*0x794cb1*/
      while ( 1 ) /*0x794cbe*/
      {
        StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v4); /*0x794cbe*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794cca*/
          break; /*0x794cca*/
        if ( ++v4 >= g_WOL_UserList.owningHouseIndex ) /*0x794cd4*/
          goto LABEL_18; /*0x794cd4*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x794cf1*/
        || (v5 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v5)) )
      {
LABEL_18:
        Debug::Log(); /*0x794cfd*/
      }
    }
    v6 = NegotiateScenarioWOL(v3); /*0x794d11*/
    if ( v6 ) /*0x794d15*/
    {
      Debug::Log(); /*0x794d20*/
      if ( v6 == 2 ) /*0x794d2b*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_SCENARIOS_DO_NOT_MATCH, 0, g_Str_File_wonline_cpp, 20292); /*0x794d44*/
        ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x794d4d*/
      }
      v8 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794d57*/
      if ( v8 ) /*0x794d5e*/
        CloseDialog(v8, 0); /*0x794d64*/
      g_NetworkLobbyState = 0; /*0x794d6e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794d81*/
      {
        g_WOL_GameListState = 0; /*0x794d84*/
        g_WOL_IdleHandler = 11; /*0x794d8a*/
        g_WOL_GameProcessState = -1; /*0x794d94*/
        g_WOL_GameListPool = time(0); /*0x794da6*/
      }
      byte_B77DEC = 0; /*0x794dab*/
      HandleWOLForwardingError(v43); /*0x794db2*/
      Network::Init(); /*0x794db7*/
      byte_B77E27 = 0; /*0x794dbc*/
      byte_B77E26 = 0; /*0x794dc3*/
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x794dcf*/
      Debug::Log(); /*0x794dd6*/
      SetEvent(dword_B7369C); /*0x794de5*/
      Debug::Log(); /*0x794df0*/
      (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x794e00*/
      if ( dword_A8B244 == 1 || dword_A8B244 == 2 || dword_A8B244 == 3 ) /*0x794e15*/
      {
        v9 = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 20329); /*0x794e46*/
        byte_B77E40 = 1; /*0x794e50*/
        WideString::Reassign(&stru_B7622C.?, v9); /*0x794e58*/
      }
      else
      {
        byte_B77E40 = 0; /*0x794e21*/
        WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x794e28*/
      }
    }
    else
    {
      Debug::Log(); /*0x794e6a*/
      v10 = dword_A8DA84; /*0x794e6f*/
      v11 = 0; /*0x794e78*/
      if ( dword_A8DA84 > 0 ) /*0x794e7c*/
      {
        v12 = hostshort; /*0x794e7e*/
        v13 = &dword_A8E2B2; /*0x794e84*/
        do /*0x794e9d*/
        {
          if ( !*v13 ) /*0x794e89*/
          {
            *v13 = v12; /*0x794e8e*/
            v10 = dword_A8DA84; /*0x794e91*/
          }
          ++v11; /*0x794e97*/
          ++v13; /*0x794e98*/
        }
        while ( v11 < v10 ); /*0x794e9d*/
      }
      v14 = 0; /*0x794ea5*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x794ea9*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x794eab*/
        while ( 1 ) /*0x794eb1*/
        {
          if ( v14 >= 0 && v14 < g_WOL_UserList.owningHouseIndex ) /*0x794eb7*/
            qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x794ec5*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x794ece*/
            break; /*0x794ece*/
          ++v14; /*0x794ed0*/
          nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x794ed1*/
          if ( v14 >= g_WOL_UserList.owningHouseIndex ) /*0x794ed6*/
            goto LABEL_52; /*0x794ed6*/
        }
        if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x794ee1*/
        {
          v16 = 0; /*0x794ee3*/
          if ( v10 > 0 ) /*0x794ee7*/
          {
            while ( 1 ) /*0x794ef6*/
            {
              v17 = ToWideStringChar((char *)dword_A8DA78[v16]); /*0x794ef6*/
              if ( !_strcmpi(v17, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x794efc*/
                break; /*0x794efc*/
              if ( ++v16 >= dword_A8DA84 ) /*0x794f10*/
                goto LABEL_52; /*0x794f10*/
            }
            dword_A8DBBC = *(&dword_A8E2B2 + v16); /*0x794f1c*/
          }
        }
      }
LABEL_52:
      Debug::Log(); /*0x794f23*/
      v18 = (HWND)Dialog::FindByHandle((Dialog *)0x130); /*0x794f35*/
      if ( v18 ) /*0x794f3e*/
        CloseDialog(v18, 0); /*0x794f44*/
      Debug::Log(); /*0x794f4e*/
      if ( *(_DWORD *)&dword_A8B238 != 4 || dword_A8B244 != 3 ) /*0x794f67*/
        dword_A8B3AC = 0; /*0x794f69*/
      dword_A8B554 = 5; /*0x794f74*/
      switch ( *(_DWORD *)&stru_A8B250.__pad_0[24] ) /*0x794f91*/
      {
        case 0: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794f98*/
          dword_A8B570 = 60; /*0x794fa2*/
          dword_A8B554 = 10; /*0x794fac*/
          break; /*0x794fb2*/
        case 1: /*0x794f91*/
          dword_A8B550 = (wchar_t *)40; /*0x794fb4*/
          dword_A8B570 = 45; /*0x794fbe*/
          dword_A8B554 = 10; /*0x794fc8*/
          break; /*0x794fce*/
        case 2: /*0x794f91*/
          dword_A8B550 = (wchar_t *)30; /*0x794fd5*/
          dword_A8B570 = 30; /*0x794fda*/
          break; /*0x794fdf*/
        case 3: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fe1*/
          dword_A8B570 = 20; /*0x794fe7*/
          break; /*0x794fed*/
        case 4: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x794fef*/
          dword_A8B570 = 15; /*0x794ff5*/
          break; /*0x794fff*/
        case 5: /*0x794f91*/
          dword_A8B550 = (wchar_t *)20; /*0x795001*/
          dword_A8B570 = 12; /*0x795007*/
          break; /*0x795011*/
        default:
          dword_A8B550 = (wchar_t *)10; /*0x795013*/
          dword_A8B570 = 10; /*0x795019*/
          break; /*0x795019*/
      }
      if ( byte_A8E2C8 ) /*0x795026*/
        dword_A8B550 += 10; /*0x795028*/
      v19 = 0; /*0x795034*/
      dword_A8B56C = 0; /*0x795038*/
      if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x79503e*/
        goto LABEL_77; /*0x79503e*/
      v20 = g_WOL_UserList.nextObject; /*0x795040*/
      while ( 1 ) /*0x795046*/
      {
        if ( v19 >= 0 && v19 < g_WOL_UserList.owningHouseIndex ) /*0x79504c*/
          qmemcpy(&g_WebBrowserConfig.occupant, v20, 0x6Cu); /*0x79505a*/
        if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x795063*/
          break; /*0x795063*/
        ++v19; /*0x795065*/
        v20 = (ObjectClass *)((char *)v20 + 108); /*0x795066*/
        if ( v19 >= g_WOL_UserList.owningHouseIndex ) /*0x79506b*/
          goto LABEL_77; /*0x79506b*/
      }
      if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x795088*/
        || (v21 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
            _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v21)) )
      {
LABEL_77:
        dword_A8B570 = 0; /*0x795094*/
      }
      v22 = 0; /*0x79509e*/
      p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7950a0*/
      do /*0x7950b5*/
      {
        if ( (int)*p_attachedTag > v22 ) /*0x7950a9*/
          v22 = (int)*p_attachedTag; /*0x7950ab*/
        ++p_attachedTag; /*0x7950ad*/
      }
      while ( (int)p_attachedTag < (int)&g_WOL_UserList.customSound_controller[1] ); /*0x7950b5*/
      if ( byte_A8E2C8 ) /*0x7950be*/
        v22 *= 2; /*0x7950c0*/
      dword_A8DB9C = (wchar_t *)1; /*0x7950c9*/
      if ( !v22 || v22 == 1000 ) /*0x7950db*/
      {
        Debug::Log(); /*0x7953c0*/
        dword_A8B56C = 10 * ((unsigned int)dword_A8B550 / 0xA); /*0x7953de*/
        if ( 10 * ((unsigned int)dword_A8B550 / 0xA) <= 0xA ) /*0x7953e3*/
          dword_A8B56C = 10; /*0x7953ee*/
      }
      else
      {
        Debug::Log(); /*0x7950e7*/
        if ( v22 <= 1000 ) /*0x7950f5*/
        {
          if ( v22 < 600 ) /*0x795109*/
            dword_A8DB9C = (wchar_t *)1; /*0x79510b*/
        }
        else
        {
          dword_A8DB9C = (wchar_t *)2; /*0x7950f7*/
        }
        Network::SetConnectionParams( /*0x79515a*/
          &unk_A8E9C0,
          120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000,
          -1,
          8 * (120 * (60 * v22 / 1000) / 100 + 60 * v22 / 1000),
          1);
        v24 = 0; /*0x795165*/
        if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795169*/
        {
          v25 = g_WOL_UserList.nextObject; /*0x79516b*/
          while ( 1 ) /*0x795171*/
          {
            if ( v24 >= 0 && v24 < g_WOL_UserList.owningHouseIndex ) /*0x795177*/
              qmemcpy(&g_WebBrowserConfig.occupant, v25, 0x6Cu); /*0x795185*/
            if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x79518e*/
              break; /*0x79518e*/
            ++v24; /*0x795194*/
            v25 = (ObjectClass *)((char *)v25 + 108); /*0x795195*/
            if ( v24 >= g_WOL_UserList.owningHouseIndex ) /*0x79519a*/
              goto LABEL_97; /*0x79519a*/
          }
          if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x795346*/
          {
            v35 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x795351*/
            if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v35) ) /*0x79535c*/
            {
              switch ( (unsigned int)dword_A8DB9C ) /*0x795376*/
              {
                case 0u: /*0x795376*/
                case 1u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550; /*0x79537d*/
                  break; /*0x795383*/
                case 2u: /*0x795376*/
                  v36 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x79538e*/
                  break; /*0x795390*/
                case 3u: /*0x795376*/
                  v36 = 2 * (_DWORD)dword_A8B550; /*0x795398*/
                  break; /*0x79539a*/
                default:
                  v36 = dword_A8B56C; /*0x79539c*/
                  break; /*0x79539c*/
              }
              dword_A8B56C = 10 * (v36 / 0xA); /*0x7953b1*/
            }
          }
        }
      }
LABEL_97:
      Debug::Log(); /*0x7951a1*/
      Debug::Log(); /*0x7951b8*/
      Debug::Log(); /*0x7951c8*/
      Debug::Log(); /*0x7951d9*/
      dword_A8B568 = dword_A8B550; /*0x7951f0*/
      memset(&unk_A8B574, 0, 0x340u); /*0x7951f9*/
      *(_DWORD *)&hostshort = 1234; /*0x795200*/
      stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x79520a*/
      *(_DWORD *)&dword_841F34 = 1235; /*0x795216*/
      *(_DWORD *)&dword_841F38 = 1236; /*0x795220*/
      *(_DWORD *)&dword_841F3C = 1237; /*0x79522a*/
      *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x795234*/
      if ( byte_A8E2C8 ) /*0x79523e*/
        Process::WaitForExit((Process *)&stru_B052C0.__pad_0[16], 0x7D0u, 1); /*0x79524b*/
      byte_B77A04 = 0; /*0x795255*/
      byte_B76568[0] = 0; /*0x79525f*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x795266*/
      {
        if ( (stru_B76AC4.health & 0x100) != 0 ) /*0x79527c*/
        {
          v26 = 0; /*0x795287*/
          v27 = 0; /*0x795289*/
          abstractFlags = 0; /*0x79528b*/
          v46 = 0; /*0x79528f*/
          v47 = 0; /*0x795293*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795297*/
          {
            v44 = g_WOL_UserList.nextObject; /*0x7952a2*/
            do /*0x795468*/
            {
              if ( v26 >= 0 && v26 < g_WOL_UserList.owningHouseIndex ) /*0x7952b0*/
                v27 = v44; /*0x7952b2*/
              if ( !abstractFlags || (v29 = v27->?, abstractFlags == v29) ) /*0x7952c3*/
              {
                strcat(&byte_B77A04, (const char *)&v27->occupant); /*0x79541a*/
                strcat(&byte_B77A04, Str); /*0x795445*/
                abstractFlags = v27->?; /*0x79544e*/
              }
              else if ( !v46 || v46 == v29 ) /*0x7952d3*/
              {
                strcat(byte_B76568, (const char *)&v27->occupant); /*0x7952fb*/
                v30 = strlen(Str) + 1; /*0x795314*/
                v31 = &byte_B76568[strlen(byte_B76568)]; /*0x795322*/
                qmemcpy(v31, Str, 4 * (v30 >> 2)); /*0x795326*/
                v33 = &Str[4 * (v30 >> 2)]; /*0x795326*/
                v32 = &v31[4 * (v30 >> 2)]; /*0x795326*/
                v34 = v30; /*0x795328*/
                v26 = v47; /*0x79532a*/
                qmemcpy(v32, v33, v34 & 3); /*0x795331*/
                v46 = v27->?; /*0x795336*/
              }
              v47 = ++v26; /*0x795460*/
              v44 = (ObjectClass *)((char *)v44 + 108); /*0x795464*/
            }
            while ( v26 < g_WOL_UserList.owningHouseIndex ); /*0x795468*/
          }
        }
        if ( dword_A8B244 == 3 ) /*0x795475*/
        {
          v37 = 0; /*0x795480*/
          v38 = 0; /*0x795482*/
          if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x795486*/
          {
            v39 = &g_WOL_LoginObject.attachedTag; /*0x795492*/
            v45 = g_WOL_UserList.nextObject; /*0x795497*/
            owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79549b*/
            v48 = &g_WOL_LoginObject.attachedTag; /*0x7954a1*/
            do /*0x795574*/
            {
              if ( (int)v39 >= (int)&g_WOL_LoginObject.attachedTag && v38 < owningHouseIndex ) /*0x7954ae*/
                v37 = v45; /*0x7954b0*/
              if ( *v39 ) /*0x7954b4*/
              {
                strcat(byte_B76568, (const char *)&v37->occupant); /*0x79551d*/
                v41 = strlen(Str) + 1; /*0x795536*/
                v42 = byte_B76568; /*0x795538*/
              }
              else
              {
                strcat(&byte_B77A04, (const char *)&v37->occupant); /*0x7954dc*/
                v41 = strlen(Str) + 1; /*0x7954f5*/
                v42 = &byte_B77A04; /*0x7954f7*/
              }
              qmemcpy((void *)&v42[strlen(v42)], Str, v41); /*0x79554a*/
              owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79555b*/
              ++v38; /*0x795561*/
              v39 = v48 + 37; /*0x795565*/
              v45 = (ObjectClass *)((char *)v45 + 108); /*0x79556c*/
              v48 += 37; /*0x795570*/
            }
            while ( v38 < g_WOL_UserList.owningHouseIndex ); /*0x795574*/
          }
        }
      }
      Debug::Log(); /*0x79557f*/
      SetEvent(dword_B736A0); /*0x79558e*/
      if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x7955a6*/
      {
        g_WOL_GameListState = 0; /*0x7955aa*/
        g_WOL_IdleHandler = 11; /*0x7955b4*/
        g_WOL_GameProcessState = -1; /*0x7955be*/
        g_WOL_GameListPool = time(0); /*0x7955d0*/
      }
      BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x7955da*/
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
    if ( dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2 ) /*0x794bde*/
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



// ==== 0x00795650  ObjectClass::QueryNATPortWOL  this=ObjectClass  sig=csp ====
char __thiscall QueryNATPortWOL(ObjectClass *this)
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
  void *Items; // eax
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
  VectorClass v26; // [esp+34h] [ebp-100h] BYREF
  int v27; // [esp+44h] [ebp-F0h]
  int v28; // [esp+48h] [ebp-ECh]
  HMODULE hLibModule; // [esp+4Ch] [ebp-E8h]
  void *v30; // [esp+50h] [ebp-E4h]
  int v31; // [esp+54h] [ebp-E0h] BYREF
  HMODULE v32; // [esp+58h] [ebp-DCh]
  NetworkID *v33; // [esp+5Ch] [ebp-D8h]
  int v34; // [esp+60h] [ebp-D4h]
  void *v35; // [esp+64h] [ebp-D0h]
  int v36; // [esp+6Ch] [ebp-C8h] BYREF
  _DWORD v37[10]; // [esp+74h] [ebp-C0h] BYREF
  _BYTE v38[4]; // [esp+9Ch] [ebp-98h] BYREF
  int v39; // [esp+A0h] [ebp-94h] BYREF
  _BYTE v40[4]; // [esp+A4h] [ebp-90h] BYREF
  _BYTE v41[4]; // [esp+A8h] [ebp-8Ch] BYREF
  _BYTE v42[8]; // [esp+ACh] [ebp-88h] BYREF
  char Destination[128]; // [esp+B4h] [ebp-80h] BYREF

  v33 = (NetworkID *)this; /*0x79565c*/
  QueryNATPortWOL_Helper(&v26, 0, 0); /*0x795666*/
  v26.ptr_0 = &DynamicVectorClass<tConnInfoStruct *>::`vftable'; /*0x795670*/
  v28 = 10; /*0x79567b*/
  v27 = 0; /*0x795683*/
  v31 = 0; /*0x795687*/
  if ( dword_B76468 < 1 || dword_B76468 >= (int)g_WOL_UserList.AbstractClass ) /*0x795697*/
  {
    Items = v26.Items; /*0x795c8c*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c90*/
    if ( !v26.Items || !v26.IsAllocated ) /*0x795ca2*/
      return 0; /*0x795ca2*/
LABEL_65:
    __3_YAXPAX_Z(Items); /*0x795ca4*/
    return 0; /*0x795cb0*/
  }
  Debug::Log(); /*0x7956a2*/
  v1 = 0; /*0x7956af*/
  if ( dword_B76468 >= 0 && dword_B76468 < (int)g_WOL_UserList.AbstractClass ) /*0x7956bb*/
    v1 = (char *)g_WOL_UserList.? + 248 * dword_B76468; /*0x7956ca*/
  memset(Destination, 0, sizeof(Destination)); /*0x7956de*/
  strncpy(Destination, v1 + 104, 0x80u); /*0x7956ee*/
  v2 = strchr(Destination, 59); /*0x7956fd*/
  if ( !v2 ) /*0x795707*/
    goto LABEL_58; /*0x795707*/
  *v2 = 0; /*0x795711*/
  sscanf(v2 + 1, "%d", &v31); /*0x79571c*/
  Debug::Log(); /*0x79572e*/
  Debug::Log(); /*0x79573d*/
  Debug::Log(); /*0x795747*/
  v3 = gethostbyname(Destination); /*0x795757*/
  if ( !v3 ) /*0x79575e*/
  {
    WSAGetLastError(); /*0x795760*/
    Debug::Log(); /*0x79576b*/
LABEL_59:
    Items = v26.Items; /*0x795c72*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c76*/
    v11 = v26.Items == 0; /*0x795c7e*/
    goto LABEL_60; /*0x795c7e*/
  }
  v35 = (void *)ntohl(**(_DWORD **)v3->h_addr_list); /*0x795785*/
  Debug::Log(); /*0x7957b4*/
  Debug::Log(); /*0x7957be*/
  LibraryA = LoadLibraryA(aInetmib1Dll); /*0x7957d3*/
  v32 = LibraryA; /*0x7957d7*/
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
  g_WOL_UserList.customSound_controller[1] = (int)GetProcAddress(LibraryA, aSnmpextensioni); /*0x79582c*/
  *(_DWORD *)&stru_B765EC.onBridge = GetProcAddress(LibraryA, aSnmpextensionq); /*0x795839*/
  g_WOL_UserList.? = (int)GetProcAddress(v5, aSnmputilmemall); /*0x795846*/
  ProcAddress = GetProcAddress(v5, aSnmputilmemfre); /*0x795851*/
  dword_B77AC0 = (int (__stdcall *)(_DWORD))ProcAddress; /*0x795859*/
  if ( !g_WOL_UserList.customSound_controller[1] /*0x795882*/
    || !*(_DWORD *)&stru_B765EC.onBridge
    || !g_WOL_UserList.?
    || !ProcAddress )
  {
    Debug::Log(); /*0x795c37*/
    FreeLibrary(v5); /*0x795c46*/
    FreeLibrary(LibraryA); /*0x795c49*/
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c4b*/
    Items = v26.Items; /*0x795c53*/
    if ( !v26.Items || !v26.IsAllocated ) /*0x795c61*/
      return 0; /*0x795c61*/
    goto LABEL_65; /*0x795c61*/
  }
  v7 = (_DWORD *)((int (__stdcall *)(int))g_WOL_UserList.?)(8); /*0x79588c*/
  v8 = (_DWORD *)((int (__stdcall *)(int))g_WOL_UserList.?)(24); /*0x795896*/
  Debug::Log(); /*0x79589d*/
  TickCount = GetTickCount(); /*0x7958b5*/
  if ( !((int (__stdcall *)(DWORD, _BYTE *, _BYTE *))g_WOL_UserList.customSound_controller[1])(TickCount, v41, v42) ) /*0x7958bc*/
  {
    Debug::Log(); /*0x7958cb*/
    dword_B77AC0(v7); /*0x7958d4*/
    dword_B77AC0(v8); /*0x7958db*/
    FreeLibrary(hLibModule); /*0x7958ec*/
    FreeLibrary(LibraryA); /*0x7958ef*/
LABEL_18:
    v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x7958f1*/
    Items = v26.Items; /*0x7958f9*/
    v11 = v26.Items == 0; /*0x7958fd*/
LABEL_60:
    if ( v11 || !v26.IsAllocated ) /*0x795c88*/
      return 0; /*0x795c88*/
    goto LABEL_65; /*0x795c88*/
  }
  v37[0] = 1; /*0x795910*/
  v37[1] = 3; /*0x795914*/
  v37[2] = 6; /*0x79591c*/
  v37[3] = 1; /*0x795920*/
  v37[4] = 2; /*0x795924*/
  v37[5] = 1; /*0x79592c*/
  v37[6] = 6; /*0x795930*/
  v37[7] = 13; /*0x795934*/
  v37[8] = 1; /*0x79593c*/
  v37[9] = 1; /*0x795940*/
  v30 = (void *)((int (__stdcall *)(int))g_WOL_UserList.?)(40); /*0x795955*/
  qmemcpy(v30, v37, 0x28u); /*0x795962*/
  *v8 = 10; /*0x795964*/
  v8[1] = v37; /*0x79596b*/
  *v7 = v8; /*0x79596e*/
  v7[1] = 1; /*0x795970*/
  v34 = 1; /*0x795973*/
  v12 = 0; /*0x795977*/
  while ( 1 ) /*0x795979*/
  {
    if ( !(*(int (__stdcall **)(int, _DWORD *, _BYTE *, _BYTE *))&stru_B765EC.onBridge)(161, v7, v40, v38) ) /*0x795994*/
    {
      Debug::Log(); /*0x795a7c*/
      dword_B77AC0(v7); /*0x795a85*/
      dword_B77AC0(v8); /*0x795a8c*/
      FreeLibrary(hLibModule); /*0x795a9d*/
      FreeLibrary(v32); /*0x795aa4*/
      goto LABEL_18; /*0x795aa4*/
    }
    if ( *v8 < 0xAu ) /*0x79599e*/
      break; /*0x79599e*/
    v13 = v8[1]; /*0x7959a4*/
    v14 = *(_DWORD *)(v13 + 36); /*0x7959ab*/
    if ( v34 != v14 ) /*0x7959b0*/
    {
      v12 = 0; /*0x7959b2*/
      v34 = *(_DWORD *)(v13 + 36); /*0x7959b4*/
    }
    switch ( v14 ) /*0x7959be*/
    {
      case 1: /*0x7959be*/
        v15 = (_DWORD *)__2_YAPAXI_Z(0x14u); /*0x7959cc*/
        *v15 = v8[3]; /*0x7959d4*/
        if ( v27 < v26.Capacity /*0x795a01*/
          || (v26.IsAllocated || !v26.Capacity)
          && v28 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v26.ptr_0 + 2))(
               &v26,
               v28 + v26.Capacity,
               0) )
        {
          v16 = v27++; /*0x795a10*/
          *((_DWORD *)v26.Items + v16) = v15; /*0x795a1b*/
        }
        break; /*0x795a1e*/
      case 2: /*0x7959be*/
        v17 = *((_DWORD *)v26.Items + v12++); /*0x795a2a*/
        *(_DWORD *)(v17 + 4) = *(_DWORD *)v8[3]; /*0x795a30*/
        break; /*0x795a33*/
      case 3: /*0x7959be*/
        v18 = *((_DWORD *)v26.Items + v12++); /*0x795a40*/
        *(_WORD *)(v18 + 8) = *((_WORD *)v8 + 6); /*0x795a44*/
        break; /*0x795a48*/
      case 4: /*0x7959be*/
        v19 = *((_DWORD *)v26.Items + v12++); /*0x795a54*/
        *(_DWORD *)(v19 + 12) = *(_DWORD *)v8[3]; /*0x795a5a*/
        break; /*0x795a5d*/
      case 5: /*0x7959be*/
        v20 = *((_DWORD *)v26.Items + v12++); /*0x795a6a*/
        *(_WORD *)(v20 + 16) = *((_WORD *)v8 + 6); /*0x795a6e*/
        break; /*0x795a72*/
      default:
        continue;
    }
  }
  dword_B77AC0(v7); /*0x795aaa*/
  dword_B77AC0(v8); /*0x795ab1*/
  dword_B77AC0(v30); /*0x795abc*/
  Debug::Log(); /*0x795acc*/
  v21 = 0; /*0x795ad8*/
  if ( v27 ) /*0x795adc*/
  {
    do /*0x795bcd*/
    {
      v22 = *(_DWORD *)v26.Items; /*0x795ae6*/
      v30 = (void *)ntohl(*(_DWORD *)(*(_DWORD *)v26.Items + 12)); /*0x795af3*/
      if ( !v21 && v30 == v35 ) /*0x795b0b*/
      {
        Debug::Log(); /*0x795b16*/
        if ( (!v31 || v31 == *(unsigned __int16 *)(v22 + 16)) && (Debug::Log(), *(_DWORD *)v22 == 5) ) /*0x795b53*/
        {
          Debug::Log(); /*0x795b5a*/
          v36 = *(_DWORD *)(v22 + 4); /*0x795b65*/
          NetworkID::Assign(v33, &v39, (int)&v36, *(_WORD *)(v22 + 8)); /*0x795b7f*/
          v21 = 1; /*0x795b84*/
        }
        else
        {
          Debug::Log(); /*0x795b8d*/
        }
      }
      __3_YAXPAX_Z(*(void **)v26.Items); /*0x795b9c*/
      v23 = v27 == 0; /*0x795ba8*/
      if ( v27 > 0 ) /*0x795baa*/
      {
        v24 = 0; /*0x795bad*/
        v23 = v27-- == 1; /*0x795baf*/
        if ( v27 > 0 ) /*0x795bb5*/
        {
          do /*0x795bc9*/
          {
            ++v24; /*0x795bbb*/
            *((_DWORD *)v26.Items + v24 - 1) = *((_DWORD *)v26.Items + v24); /*0x795bbf*/
          }
          while ( v24 < v27 ); /*0x795bc9*/
          v23 = v27 == 0; /*0x795bcb*/
        }
      }
    }
    while ( !v23 ); /*0x795bcd*/
    if ( v21 ) /*0x795bd5*/
    {
      Network::FormatAddress((Network *)v33, 0); /*0x795bdd*/
      Debug::Log(); /*0x795be8*/
    }
  }
  FreeLibrary(hLibModule); /*0x795bfb*/
  FreeLibrary(v32); /*0x795c02*/
  v26.ptr_0 = &VectorClass<tConnInfoStruct *>::`vftable'; /*0x795c04*/
  if ( v26.Items && v26.IsAllocated ) /*0x795c1a*/
    __3_YAXPAX_Z(v26.Items); /*0x795c1d*/
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
  Network::Disconnect(unk_A8E9C0); /*0x795cf3*/
  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x795d08*/
  Flagged = GameSettings::FindFlagged(); /*0x795d12*/
  if ( !Flagged || (v3 = String::GetOrEmpty_Alt((char **)&dword_B73E40), _strcmpi(Flagged + 36, v3)) ) /*0x795d2b*/
  {
    LOBYTE(v1) = dword_A8BB08; /*0x79616e*/
    if ( FindAndValidateMap(&byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v1, 1) ) /*0x796187*/
    {
      memset(v53, 0, sizeof(v53)); /*0x7961a8*/
      v54 = 0; /*0x7961aa*/
      v55 = 0; /*0x7961ac*/
      v53[0] = 19; /*0x7961af*/
      if ( v40 ) /*0x7961b7*/
        v53[0] = 42; /*0x7961b9*/
      CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7961cf*/
      v18 = 0; /*0x7961da*/
      if ( (int)dword_B77900 > 0 ) /*0x7961de*/
      {
        v19 = (char *)dword_B77908; /*0x7961e0*/
        while ( 1 ) /*0x7961e6*/
        {
          if ( v18 >= 0 && v18 < (int)dword_B77900 ) /*0x7961ec*/
            qmemcpy(&byte_B777B0, v19, 0x6Cu); /*0x7961fa*/
          if ( (byte_B777B0 & 1) != 0 ) /*0x796203*/
            break; /*0x796203*/
          ++v18; /*0x796205*/
          v19 += 108; /*0x796206*/
          if ( v18 >= (int)dword_B77900 ) /*0x79620b*/
            goto LABEL_75; /*0x79620b*/
        }
        if ( &byte_B777B0 ) /*0x796216*/
        {
          v20 = CharToWideString(unk_B777D4); /*0x79621d*/
          Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v20); /*0x796231*/
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
      while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x796297*/
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
      if ( dword_A8B244 != 3 && (dword_A8B244 == 1 || dword_A8B244 == 2) /*0x796306*/
        || (_BYTE)dword_A8BB08 && !IsRandMap::Sed2((int)dword_A8B238) )
      {
        memset(v53, 0, sizeof(v53)); /*0x796324*/
        v54 = 0; /*0x796326*/
        v55 = 0; /*0x796328*/
        v23 = 0; /*0x796329*/
        v53[0] = 20; /*0x79632b*/
        if ( (int)dword_B77900 > 0 ) /*0x796335*/
        {
          v24 = (char *)dword_B77908; /*0x796337*/
          while ( 1 ) /*0x79633d*/
          {
            if ( v23 >= 0 && v23 < (int)dword_B77900 ) /*0x796343*/
              qmemcpy(&byte_B777B0, v24, 0x6Cu); /*0x796351*/
            if ( (byte_B777B0 & 1) != 0 ) /*0x79635a*/
              break; /*0x79635a*/
            ++v23; /*0x79635c*/
            v24 += 108; /*0x79635d*/
            if ( v23 >= (int)dword_B77900 ) /*0x796362*/
              goto LABEL_99; /*0x796362*/
          }
          if ( &byte_B777B0 ) /*0x79636d*/
          {
            v25 = CharToWideString(unk_B777D4); /*0x796374*/
            Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, (wchar_t *)v25); /*0x796388*/
          }
        }
LABEL_99:
        Debug::Log(); /*0x79638d*/
        Timer::GetTicks(); /*0x79639e*/
        v45 = Timer::GetTicks(); /*0x7963bd*/
        while ( Network::GetQueueCount((int)unk_A8E9C0) > 0 ) /*0x7963d9*/
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
        if ( RequestNetworkFile(&byte_A8B8E0, 4, 1) /*0x79646f*/
          && (v40 || !IsRandMap::Sed2((int)dword_A8B238) || RequestNetworkFile((char *)v52, 4, 1)) )
        {
          goto LABEL_113; /*0x796476*/
        }
      }
      v42 = 2; /*0x796478*/
      v40 = 1; /*0x79647c*/
    }
LABEL_113:
    strcpy((char *)dword_A8B230 + 4700, &byte_A8B8E0); /*0x796481*/
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
      if ( Network::Send((int)unk_A8E9C0, (int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x796538*/
      {
        if ( word_A8D810 == -22012 ) /*0x796548*/
        {
          Debug::Log(); /*0x79654f*/
          v28 = 0; /*0x79655d*/
          if ( (int)dword_B77900 > 0 ) /*0x796561*/
          {
            v29 = (char *)dword_B77908; /*0x796563*/
            do /*0x796569*/
            {
              if ( v28 >= 0 && v28 < (int)dword_B77900 ) /*0x79656f*/
                qmemcpy(&byte_B777B0, v29, 0x6Cu); /*0x79657d*/
              if ( (byte_B777B0 & 1) != 0 ) /*0x796586*/
                break; /*0x796586*/
              ++v28; /*0x796588*/
              v29 += 108; /*0x796589*/
            }
            while ( v28 < (int)dword_B77900 ); /*0x796569*/
            if ( &byte_B777B0 && !_strcmpi(byte_A8D63C, unk_B777D4) ) /*0x7965a5*/
            {
              if ( dword_A8D638 == 11 ) /*0x7965b9*/
              {
                Debug::Log(); /*0x7965f6*/
                goto LABEL_147; /*0x7965fe*/
              }
              if ( dword_A8D638 == 42 ) /*0x7965be*/
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
    if ( dword_A8DA84 > 0 ) /*0x79661e*/
    {
      while ( 1 ) /*0x79662e*/
      {
        v33 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v32)); /*0x79662e*/
        if ( !_strcmpi(v33, unk_B777D4) ) /*0x796634*/
          break; /*0x796634*/
        if ( ++v32 >= dword_A8DA84 ) /*0x796648*/
          goto LABEL_142; /*0x796648*/
      }
      if ( v32 < dword_A8DA84 && dword_B73BB4[v32] < dword_84A1E0[v32] ) /*0x79666b*/
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
    if ( Network::Send((int)unk_A8E9C0, (int)&dword_A8D638, (int)&unk_A8D800, (int)&dword_A8D804, (int)&word_A8D810) ) /*0x795dda*/
    {
      if ( word_A8D810 == -22012 ) /*0x795df0*/
      {
        Debug::Log(); /*0x795dfb*/
        v6 = 1; /*0x795e05*/
        if ( dword_A8DA84 > 1 ) /*0x795e0f*/
        {
          v7 = 0; /*0x795e15*/
          do /*0x795f23*/
          {
            if ( NetworkID::Compare(*(_DWORD *)(v7 * 4 + dword_A8DA78 + 4) + 40, (int)&dword_A8D804) ) /*0x795e28*/
            {
              v8 = ToWideStringChar(*(char **)(v7 * 4 + dword_A8DA78 + 4)); /*0x795e44*/
              if ( !_strcmpi(v8, byte_A8D63C) && !v52[v7 + 5] ) /*0x795e5a*/
              {
                v9 = dword_A8D638; /*0x795e66*/
                if ( dword_A8D638 == 16 ) /*0x795e6e*/
                {
                  Debug::Log(); /*0x795e75*/
                  v9 = dword_A8D638; /*0x795e7a*/
                  v52[v7 + 5] = dword_A8D638; /*0x795e82*/
                  v5 = 1; /*0x795e86*/
                  ++v4; /*0x795e88*/
                }
                if ( v9 == 19 ) /*0x795e8c*/
                {
                  Debug::Log(); /*0x795e93*/
                  v9 = dword_A8D638; /*0x795e98*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ea0*/
                  ++v4; /*0x795ea4*/
                }
                if ( v9 == 42 ) /*0x795ea8*/
                {
                  Debug::Log(); /*0x795eaf*/
                  v9 = dword_A8D638; /*0x795eba*/
                  ++v4; /*0x795ec2*/
                  v10 = v6 < dword_A8DA84; /*0x795ec3*/
                  v52[v7 + 5] = dword_A8D638; /*0x795ec5*/
                  v40 = 1; /*0x795ec9*/
                  if ( v10 && dword_B73BB8[v7] < dword_84A1E4[v7] ) /*0x795ede*/
                    dword_B73BB8[v7] = 0; /*0x795ee0*/
                }
                if ( v9 == 20 ) /*0x795eed*/
                {
                  Debug::Log(); /*0x795ef4*/
                  v52[v7 + 5] = dword_A8D638; /*0x795f01*/
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
          while ( v6 < dword_A8DA84 ); /*0x795f23*/
        }
      }
    }
    if ( v4 >= dword_A8DA84 - 1 ) /*0x795f32*/
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
  if ( !v40 && !v41 && v5 && v4 == dword_A8DA84 - 1 ) /*0x795f92*/
  {
    while ( CloseDialog(0, 0) == 1 ) /*0x795fa3*/
      ; /*0x795fa5*/
    byte_A8BB10 = 0; /*0x795fba*/
    dword_A8BB14 = 0; /*0x795fbf*/
    dword_A8BB18 = 0; /*0x795fc4*/
    v13 = 1; /*0x795fc9*/
    if ( dword_A8DA84 > 1 ) /*0x795fd0*/
    {
      v14 = &v52[5]; /*0x795fd2*/
      do /*0x796000*/
      {
        if ( *v14 == 16 ) /*0x795fd9*/
          *((_BYTE *)&byte_A8BB10 + dword_A8BB18++) = v13; /*0x795fe1*/
        ++v13; /*0x795ffa*/
        ++v14; /*0x795ffb*/
      }
      while ( v13 < dword_A8DA84 ); /*0x796000*/
    }
    if ( !SendNetworkFile((char *)dword_A8B230 + 4700, 4, 0, 1) ) /*0x796016*/
    {
      v42 = 2; /*0x79601f*/
      v40 = 0; /*0x796023*/
    }
    if ( IsRandMap::Sed2((int)dword_A8B238) && !SendNetworkFile(ExistingFileName, 4, 0, 1) ) /*0x796043*/
    {
      v42 = 2; /*0x79604c*/
      v40 = 0; /*0x796050*/
    }
  }
  memset(v53, 0, sizeof(v53)); /*0x79605f*/
  v54 = 0; /*0x796061*/
  v55 = 0; /*0x796063*/
  if ( v40 || v4 != dword_A8DA84 - 1 || v41 ) /*0x79607d*/
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
  CopyWideToChar(&v53[1], *(char **)dword_A8DA78, -1); /*0x7960b4*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7960c5*/
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
      if ( Network::SendToPlayer((int)unk_A8E9C0, (int)v53, 47, 1, *(wchar_t **)(dword_A8DA78 + 4 * i)) ) /*0x79612f*/
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
  if ( (unsigned int)(8 * Network::GetLobbyStatus(unk_A8E9C0)) >= 0x78 ) /*0x7966b0*/
    v36 = 8 * Network::GetLobbyStatus(unk_A8E9C0); /*0x7966c3*/
  else
    v36 = 120; /*0x7966b2*/
  v39 = v36; /*0x7966c8*/
  LobbyStatus = Network::GetLobbyStatus(unk_A8E9C0); /*0x7966d0*/
  Network::SetConnectionParams(unk_A8E9C0, LobbyStatus + 2, -1, v39, 1); /*0x7966de*/
  Connection::Close(unk_A8E9C0); /*0x7966e8*/
  result = v42; /*0x7966ed*/
  if ( v42 != 2 && v40 ) /*0x7966fc*/
    return 1; /*0x7966fe*/
  return result; /*0x796703*/
}



// ==== 0x00796710  HandleWOLRematch  this=-  sig=ida-proto ====
char HandleWOLRematch()
{
  int v0; // eax
  ObjectClass *nextObject; // ebp
  char *v2; // eax
  HWND v3; // eax
  HWND DlgItem; // eax
  int v5; // eax
  ObjectClass *i; // edx
  Network *v8; // [esp+0h] [ebp-254h]
  _WORD v9[3]; // [esp+Eh] [ebp-246h] BYREF
  Waypoint v10[2]; // [esp+14h] [ebp-240h] BYREF
  int v11; // [esp+8Ch] [ebp-1C8h] BYREF
  char v12[452]; // [esp+90h] [ebp-1C4h] BYREF

  Waypoint::InitInvalid(v10); /*0x79671d*/
  if ( !stru_B76AC4.ambientSoundController[4] || g_WOL_UserList.owningHouseIndex < 2 ) /*0x796738*/
    return 0; /*0x796738*/
  v0 = 0; /*0x79673e*/
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796742*/
  {
    nextObject = g_WOL_UserList.nextObject; /*0x796744*/
    while ( 1 ) /*0x79674a*/
    {
      if ( v0 >= 0 && v0 < g_WOL_UserList.owningHouseIndex ) /*0x796750*/
        qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x79675e*/
      if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796767*/
        break; /*0x796767*/
      ++v0; /*0x796769*/
      nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x79676a*/
      if ( v0 >= g_WOL_UserList.owningHouseIndex ) /*0x79676f*/
        goto LABEL_13; /*0x79676f*/
    }
    if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x79677a*/
    {
      v2 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]); /*0x796781*/
      if ( !_strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v2) ) /*0x79678c*/
        return 0; /*0x796796*/
    }
  }
LABEL_13:
  if ( g_NetworkLobbyState ) /*0x7967a3*/
    return 0; /*0x7967a3*/
  if ( !Connection::GetSpeed(&unk_A8E9C0) ) /*0x7967ae*/
    return 0; /*0x7967ae*/
  Event::Dispatch(); /*0x7967bb*/
  *(_DWORD *)&v9[1] = 455; /*0x7967e0*/
  if ( !Network::SendPacketThunk((int)&unk_A8E9C0, 0, (int)&v11, (int)&v9[1], (int)v10, (int)v9, 0) || v11 != 25 ) /*0x796803*/
    return 0; /*0x796803*/
  v3 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x79680e*/
  if ( v3 ) /*0x796815*/
  {
    DlgItem = GetDlgItem(v3, 1128); /*0x79681f*/
    ShowWindow(DlgItem, 1); /*0x796826*/
  }
  if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796833*/
    qmemcpy(&v10[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796844*/
  *(_DWORD *)&v10[0].__pad_0[44] = 0; /*0x79684a*/
  Network::SyncPlayerList(v8); /*0x796852*/
  if ( !Network::Send((Network *)&unk_A8E9C0, (int)&v11, (int)&v9[1], (int)v10, (int)v9) ) /*0x796873*/
    return 0; /*0x796873*/
  if ( v11 != 25 ) /*0x796883*/
    return 0; /*0x796883*/
  if ( !(unsigned __int8)NetworkID::Compare((bool *)v10[0].__pad_0, (int)&stru_A8BB1C) ) /*0x79688e*/
    return 0; /*0x79688e*/
  if ( v9[0] != 0xAA04 ) /*0x79689e*/
    return 0; /*0x79689e*/
  v5 = 0; /*0x7968a6*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x7968aa*/
    return 0; /*0x7968aa*/
  for ( i = g_WOL_UserList.nextObject; ; i = (ObjectClass *)((char *)i + 108) ) /*0x7968ac*/
  {
    if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x7968b8*/
      qmemcpy(&g_WebBrowserConfig.occupant, i, 0x6Cu); /*0x7968c6*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7968cf*/
      break; /*0x7968cf*/
    if ( ++v5 >= g_WOL_UserList.owningHouseIndex ) /*0x7968d7*/
      return 0; /*0x7968d7*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 || _strcmpi(v12, (char *)&g_WebBrowserConfig.ambientSoundController[3]) ) /*0x7968fb*/
    return 0; /*0x7968e4*/
  Debug::Log(); /*0x79690c*/
  Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796924*/
  byte_B77E2C = 1; /*0x796929*/
  ExchangeMultiplayerGameInfo(); /*0x796930*/
  byte_B77E2C = 0; /*0x79693a*/
  Network::SetConnectionParams(&unk_A8E9C0, 30, -1, 600, 1); /*0x79694c*/
  return 1; /*0x7968d9*/
}



// ==== 0x00796960  ObjectClass::Event_Play  this=ObjectClass  sig=csp ====
char Event_Play(ObjectClass *this)
{
  Network *v1; // edi
  int owningHouseIndex; // eax
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  ObjectClass *nextObject; // edx
  char *v7; // eax
  Waypoint v9[2]; // [esp+8h] [ebp-240h] BYREF
  int v10[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v11; // [esp+244h] [ebp-4h]
  char v12; // [esp+246h] [ebp-2h]

  LOBYTE(owningHouseIndex) = dword_A8B238; /*0x796960*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x796970*/
    return owningHouseIndex; /*0x796970*/
  Waypoint::InitInvalid(v9); /*0x79697a*/
  owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x79697f*/
  if ( g_WOL_UserList.owningHouseIndex < 2 ) /*0x796987*/
    return owningHouseIndex; /*0x796987*/
  v3 = 0; /*0x79698d*/
  if ( g_WOL_UserList.owningHouseIndex <= 0 ) /*0x796996*/
    goto LABEL_10; /*0x796996*/
  while ( 1 ) /*0x7969a3*/
  {
    StartGameWOL_Start_7ACB90((ObjectClass *)&g_WOL_UserList.owningHouseIndex, &g_WebBrowserConfig.occupant, v3); /*0x7969a3*/
    if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x7969ae*/
      break; /*0x7969ae*/
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969b0*/
    if ( ++v3 >= g_WOL_UserList.owningHouseIndex ) /*0x7969b8*/
      goto LABEL_10; /*0x7969b8*/
  }
  if ( &g_WebBrowserConfig == (ObjectClass *)-36 /*0x7969df*/
    || (v4 = String::GetOrEmpty_Alt((String *)&g_WindowManager.__pad_EC[684]),
        (owningHouseIndex = _strcmpi((char *)&g_WebBrowserConfig.ambientSoundController[3], v4)) != 0) )
  {
    owningHouseIndex = g_WOL_UserList.owningHouseIndex; /*0x7969e5*/
LABEL_10:
    if ( !g_NetworkLobbyState && stru_B76AC4.ambientSoundController[4] ) /*0x796a00*/
    {
      if ( owningHouseIndex > 0 ) /*0x796a0a*/
        qmemcpy(&v9[0].__pad_0[12], g_WOL_UserList.nextObject, 0x6Cu); /*0x796a1b*/
      *(_DWORD *)&v9[0].__pad_0[44] = 0; /*0x796a21*/
      Network::SyncPlayerList(v1); /*0x796a29*/
      Event::Dispatch(); /*0x796a2e*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x796a42*/
      Network::FormatAddress(&stru_A8BB1C, 0); /*0x796a4e*/
      Debug::Log(); /*0x796a59*/
      memset(v10, 0, sizeof(v10)); /*0x796a6f*/
      v11 = 0; /*0x796a79*/
      v12 = 0; /*0x796a7b*/
      v10[0] = 13; /*0x796a7c*/
      CopyWideToChar(&v10[1], (char *)*dword_A8DA78, -1); /*0x796a90*/
      v5 = 0; /*0x796a9b*/
      if ( g_WOL_UserList.owningHouseIndex > 0 ) /*0x796a9f*/
      {
        nextObject = g_WOL_UserList.nextObject; /*0x796aa1*/
        while ( 1 ) /*0x796aa7*/
        {
          if ( v5 >= 0 && v5 < g_WOL_UserList.owningHouseIndex ) /*0x796aad*/
            qmemcpy(&g_WebBrowserConfig.occupant, nextObject, 0x6Cu); /*0x796abb*/
          if ( (g_WebBrowserConfig.occupant & 1) != 0 ) /*0x796ac3*/
            break; /*0x796ac3*/
          ++v5; /*0x796ac5*/
          nextObject = (ObjectClass *)((char *)nextObject + 108); /*0x796ac6*/
          if ( v5 >= g_WOL_UserList.owningHouseIndex ) /*0x796acb*/
            goto LABEL_24; /*0x796acb*/
        }
        if ( &g_WebBrowserConfig != (ObjectClass *)-36 ) /*0x796ae4*/
        {
          v7 = CharToWideString(&g_WebBrowserConfig.ambientSoundController[3]); /*0x796aeb*/
          Network::SendToPlayer((int)&unk_A8E9C0, (int)v10, 455, 1, (wchar_t *)v7); /*0x796b04*/
        }
      }
LABEL_24:
      LOBYTE(owningHouseIndex) = Event::Dispatch(); /*0x796b09*/
    }
  }
  return owningHouseIndex; /*0x796ad4*/
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
int Game::CreateAIPlayer(Game *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796dea*/
  v2 = v1; /*0x796def*/
  if ( v1 ) /*0x796df8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796dfd*/
  else
    v2 = 0; /*0x796e04*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aOlCruddy, -1); /*0x796e0f*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796e1f*/
  *(_DWORD *)(v2 + 75) = 0; /*0x796e26*/
  *(_DWORD *)(v2 + 83) = 3; /*0x796e29*/
  v6 = 0; /*0x796e33*/
  v9 = 0; /*0x796e37*/
  v8 = 0; /*0x796e3b*/
  v7 = 1381040650; /*0x796e4e*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x796e53*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796e8c*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x796e99*/
    dword_A8DA78[v3] = v2; /*0x796ea8*/
  }
  v4 = dword_A8B54C; /*0x796eab*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796eb2*/
  result = v4 + 1; /*0x796ebd*/
  dword_A8B54C = result; /*0x796ebe*/
  return result; /*0x796eb0*/
}



// ==== 0x00796ED0  Game::CreateAIPlayer_Potato  this=Game  sig=csp ====
int Game::CreateAIPlayer_Potato(Game *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796eda*/
  v2 = v1; /*0x796edf*/
  if ( v1 ) /*0x796ee8*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796eed*/
  else
    v2 = 0; /*0x796ef4*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aPotato, -1); /*0x796eff*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796f0f*/
  *(_DWORD *)(v2 + 75) = 0; /*0x796f16*/
  *(_DWORD *)(v2 + 83) = 0; /*0x796f19*/
  v6 = 0; /*0x796f1f*/
  v9 = 0; /*0x796f23*/
  v8 = 0; /*0x796f27*/
  v7 = 1628701194; /*0x796f3a*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x796f3f*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x796f78*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x796f85*/
    dword_A8DA78[v3] = v2; /*0x796f94*/
  }
  v4 = dword_A8B54C; /*0x796f97*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x796f9e*/
  result = v4 + 1; /*0x796fa9*/
  dword_A8B54C = result; /*0x796faa*/
  return result; /*0x796f9c*/
}



// ==== 0x00796FC0  ObjectClass::Network_Init_796FC0  this=ObjectClass  sig=csp ====
int Network_Init_796FC0(ObjectClass *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  char v8; // [esp+10h] [ebp-4h]
  char v9; // [esp+11h] [ebp-3h]

  v1 = __2_YAPAXI_Z(0x85u); /*0x796fca*/
  v2 = v1; /*0x796fcf*/
  if ( v1 ) /*0x796fd6*/
    Waypoint::InitInvalid((Waypoint *)(v1 + 40)); /*0x796fdb*/
  else
    v2 = 0; /*0x796fe2*/
  BulkCharToWide((_WORD *)v2, (unsigned __int8 *)aPotatotoo, -1); /*0x796fed*/
  *(_DWORD *)(v2 + 123) = -1; /*0x796ff7*/
  *(_DWORD *)(v2 + 75) = 1; /*0x796ffe*/
  *(_DWORD *)(v2 + 83) = 2; /*0x797005*/
  v6 = 0; /*0x79701d*/
  v9 = 0; /*0x797025*/
  v8 = 0; /*0x79702a*/
  v7 = -95419894; /*0x797039*/
  NetworkID::Assign((NetworkID *)(v2 + 40), &v6, (int)&v7, 0); /*0x79703e*/
  if ( dword_A8DA84 < dword_A8DA7C /*0x79707a*/
    || (byte_A8DA81 || !dword_A8DA7C)
    && dword_A8DA88 > 0
    && (*(unsigned __int8 (__thiscall **)(PtrVector *, int, _DWORD))(*(_DWORD *)&stru_A8DA74 + 8))(
         &stru_A8DA74,
         dword_A8DA7C + dword_A8DA88,
         0) )
  {
    v3 = dword_A8DA84++; /*0x797087*/
    dword_A8DA78[v3] = v2; /*0x797096*/
  }
  v4 = dword_A8B54C; /*0x797099*/
  *((_DWORD *)&g_WOL_UserList.attachedTag + dword_A8B54C) = 100; /*0x79709e*/
  dword_A8B54C = v4 + 1; /*0x7970aa*/
  stru_A8BB1C.Network_field_0x0 = *(_DWORD *)(v2 + 40); /*0x7970b1*/
  result = *(_DWORD *)(v2 + 44); /*0x7970b7*/
  stru_A8BB1C.Network_field_0x4 = (void *)result; /*0x7970ba*/
  stru_A8BB1C.Network_field_0x8 = *(void **)(v2 + 48); /*0x7970c3*/
  return result; /*0x7970c2*/
}



// ==== 0x007970D0  ObjectClass::InitNetworkGame  this=ObjectClass  sig=csp ====
int InitNetworkGame(ObjectClass *this)
{
  int i; // esi
  int v2; // esi
  TagClass **p_attachedTag; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  Game *v7; // [esp+0h] [ebp-43Ch]
  Game *v8; // [esp+0h] [ebp-43Ch]
  Game *v9; // [esp+0h] [ebp-43Ch]
  Game *v10; // [esp+0h] [ebp-43Ch]
  ObjectClass *v11; // [esp+0h] [ebp-43Ch]
  Game *v12; // [esp+0h] [ebp-43Ch]
  char v13; // [esp+13h] [ebp-429h]
  DWORD nSize; // [esp+14h] [ebp-428h] BYREF
  char v15[16]; // [esp+18h] [ebp-424h] BYREF
  int v16; // [esp+28h] [ebp-414h]
  int v17; // [esp+2Ch] [ebp-410h]
  int v18; // [esp+30h] [ebp-40Ch]
  int v19; // [esp+34h] [ebp-408h]
  int v20; // [esp+38h] [ebp-404h] BYREF
  int v21[2]; // [esp+3Ch] [ebp-400h] BYREF
  CHAR Buffer[1016]; // [esp+44h] [ebp-3F8h] BYREF

  *(_DWORD *)&g_WOL_BuddyList.__pad_20[4] = 0; /*0x7970e6*/
  *(_DWORD *)dword_B77D6C = g_NetworkRematchState; /*0x7970ec*/
  *(_DWORD *)g_WOL_BuddyList.__pad_14 = 0; /*0x7970f1*/
  strcpy((char *)&g_WebBrowserConfig.location[2], String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684])); /*0x797115*/
  PtrVector::Destroy(&stru_A8DA74); /*0x797123*/
  nSize = 1015; /*0x797132*/
  GetComputerNameA(Buffer, &nSize); /*0x79713a*/
  v13 = 0; /*0x79714a*/
  if ( _strcmpi(Buffer, aSteveT3) ) /*0x79714f*/
  {
    if ( _strcmpi(Buffer, aSteveT2) ) /*0x79717f*/
    {
      Game::CreateAIPlayer(v7); /*0x797197*/
      Game::CreateAIPlayer_Potato(v12); /*0x79719c*/
    }
    else
    {
      Game::CreateAIPlayer_Potato(v7); /*0x79718b*/
      Game::CreateAIPlayer(v10); /*0x797190*/
    }
    Network_Init_796FC0(v11); /*0x7971a1*/
  }
  else
  {
    Network_Init_796FC0((ObjectClass *)v7); /*0x797160*/
    Game::CreateAIPlayer(v8); /*0x797165*/
    Game::CreateAIPlayer_Potato(v9); /*0x79716a*/
    v13 = 1; /*0x79716f*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 48))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x7971ae*/
  strcpy(v15, "xxx.xxx.xxx.xxx"); /*0x7971c8*/
  v16 = 0; /*0x7971d1*/
  v17 = 0; /*0x7971de*/
  v18 = 0; /*0x7971e4*/
  v19 = 0; /*0x7971ec*/
  for ( i = 1; i < dword_A8DA84; ++i ) /*0x7971f7*/
  {
    Network::CopyAddress((Network *)(dword_A8DA78[i] + 40), &v20, (int)v21); /*0x79720e*/
    (*(void (__thiscall **)(_DWORD, char *, _DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 44))( /*0x797221*/
      *(_DWORD *)&stru_887598.isAliveFlag,
      v15,
      0);
  }
  g_NetworkLobbyState = 2; /*0x79723f*/
  Debug::Log(); /*0x797245*/
  BulkCharToWide(word_A8E258, (unsigned __int8 *)aPotatotoo, -1); /*0x797259*/
  dword_A8E2AC = -1; /*0x797267*/
  dword_A8B3AC = 0; /*0x797271*/
  *(_DWORD *)&stru_A8EB00.?[432] = 1; /*0x797276*/
  g_RulesInitConfig = 10; /*0x79727c*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = 10; /*0x797282*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = 10000; /*0x797288*/
  byte_A8B31F = 0; /*0x797292*/
  stru_A8B250.__pad_0[16] = 1; /*0x797297*/
  stru_A8B250.__pad_0[17] = 1; /*0x79729d*/
  dword_A8B320 = 1; /*0x7972a3*/
  byte_A8B31C = 1; /*0x7972a9*/
  byte_A8B31D = 0; /*0x7972af*/
  stru_A8B250.__pad_0[8] = 1; /*0x7972b4*/
  byte_A8B31E = 0; /*0x7972ba*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = 0; /*0x7972bf*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = 0; /*0x7972c4*/
  stru_A8B250.__pad_0[18] = 1; /*0x7972c9*/
  stru_A8B250.__pad_0[19] = 1; /*0x7972cf*/
  stru_A8B250.__pad_0[20] = 0; /*0x7972d5*/
  stru_A8B250.__pad_0[28] = 1; /*0x7972da*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = 1; /*0x7972e0*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = 0; /*0x7972e6*/
  LoadScenarioClassByIndex(1); /*0x7972eb*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = 2; /*0x7972fb*/
  stru_A8EB00.ObjectTypeClass[24] = 2; /*0x797301*/
  dword_A8B230[130].ptr_C = *(void **)&stru_A8B250.__pad_0[4]; /*0x797307*/
  dword_A8B554 = 5; /*0x797315*/
  switch ( *(_DWORD *)&stru_A8B250.__pad_0[24] ) /*0x797325*/
  {
    case 0: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x79732c*/
      dword_A8B570 = 60; /*0x797332*/
      dword_A8B554 = 10; /*0x79733c*/
      break; /*0x797342*/
    case 1: /*0x797325*/
      dword_A8B550 = (wchar_t *)40; /*0x797344*/
      dword_A8B570 = 45; /*0x79734a*/
      dword_A8B554 = 10; /*0x797354*/
      break; /*0x79735a*/
    case 2: /*0x797325*/
      dword_A8B550 = (wchar_t *)30; /*0x797361*/
      dword_A8B570 = 30; /*0x797366*/
      break; /*0x79736b*/
    case 3: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797372*/
      dword_A8B570 = 20; /*0x797377*/
      break; /*0x79737c*/
    case 4: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x79737e*/
      dword_A8B570 = 15; /*0x797388*/
      break; /*0x797392*/
    case 5: /*0x797325*/
      dword_A8B550 = (wchar_t *)20; /*0x797394*/
      dword_A8B570 = 12; /*0x79739e*/
      break; /*0x7973a8*/
    default:
      dword_A8B550 = (wchar_t *)10; /*0x7973aa*/
      dword_A8B570 = 10; /*0x7973b0*/
      break; /*0x7973b0*/
  }
  dword_A8B56C = 0; /*0x7973be*/
  if ( !v13 ) /*0x7973c4*/
    dword_A8B570 = 0; /*0x7973c6*/
  v2 = 0; /*0x7973d1*/
  if ( dword_A8DA84 > 0 ) /*0x7973d5*/
  {
    p_attachedTag = &g_WOL_UserList.attachedTag; /*0x7973d7*/
    v4 = dword_A8DA84; /*0x7973dc*/
    do /*0x7973ea*/
    {
      if ( (int)*p_attachedTag > v2 ) /*0x7973e2*/
        v2 = (int)*p_attachedTag; /*0x7973e4*/
      ++p_attachedTag; /*0x7973e6*/
      --v4; /*0x7973e9*/
    }
    while ( v4 ); /*0x7973ea*/
  }
  dword_A8DB9C = (wchar_t *)1; /*0x7973ee*/
  if ( !v2 || v2 == 1000 ) /*0x797400*/
  {
    dword_A8B570 = 0; /*0x7974ea*/
    Debug::Log(); /*0x7974f0*/
  }
  else
  {
    Debug::Log(); /*0x79740c*/
    if ( v2 <= 1000 ) /*0x79741a*/
    {
      if ( v2 < 600 ) /*0x79742a*/
        dword_A8DB9C = (wchar_t *)1; /*0x79742c*/
    }
    else
    {
      dword_A8DB9C = (wchar_t *)2; /*0x79741c*/
    }
    Network::SetConnectionParams( /*0x79747b*/
      &unk_A8E9C0,
      120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000,
      -1,
      8 * (120 * (60 * v2 / 1000) / 100 + 60 * v2 / 1000),
      1);
    if ( v13 ) /*0x797486*/
    {
      IPXManagerClass::sendPacket(&unk_A8E9C0, 5, -1, 120); /*0x797493*/
      switch ( (unsigned int)dword_A8DB9C ) /*0x7974a2*/
      {
        case 0u: /*0x7974a2*/
        case 1u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550; /*0x7974a9*/
          break; /*0x7974af*/
        case 2u: /*0x7974a2*/
          v5 = (unsigned int)dword_A8B550 + ((unsigned int)dword_A8B550 >> 1); /*0x7974ba*/
          break; /*0x7974bc*/
        case 3u: /*0x7974a2*/
          v5 = 2 * (_DWORD)dword_A8B550; /*0x7974c3*/
          break; /*0x7974c6*/
        default:
          v5 = dword_A8B56C; /*0x7974c8*/
          break; /*0x7974c8*/
      }
      dword_A8B56C = 10 * (v5 / 0xA); /*0x7974dd*/
    }
  }
  Debug::Log(); /*0x797504*/
  Debug::Log(); /*0x797515*/
  Debug::Log(); /*0x797526*/
  Debug::Log(); /*0x797536*/
  dword_A8B568 = dword_A8B550; /*0x797543*/
  memset(&unk_A8B574, 0, 0x340u); /*0x797556*/
  *(_DWORD *)&hostshort = 1234; /*0x79755e*/
  stru_A8EB00.ObjectTypeClass[24] = *(_DWORD *)&stru_A8B250.__pad_0[24]; /*0x797568*/
  *(_DWORD *)&dword_841F34 = 1235; /*0x79756e*/
  *(_DWORD *)&dword_841F38 = 1236; /*0x797578*/
  *(_DWORD *)&dword_841F3C = 1237; /*0x797582*/
  *(_DWORD *)&stru_A8EB00.?[416] = 0; /*0x79758c*/
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
    dword_B77DC8 = 0; /*0x7977a6*/
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
char FetchWOLData(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  HANDLE *v2; // esi
  int v3; // esi
  wchar_t *v5; // eax
  int v6; // ebx
  TechnoTypeClass *v7; // ecx
  DWORD v8; // esi
  HWND v9; // eax
  HWND v10; // eax
  HWND DlgItem; // eax
  wchar_t *v12; // eax
  HWND v13; // eax
  HWND v14; // eax
  wchar_t *v15; // eax
  HWND v16; // eax
  HWND Current; // eax
  int v18; // esi
  HWND v19; // eax
  HWND v20; // eax
  TechnoTypeClass *v21; // ecx
  DWORD i; // esi
  HWND v23; // eax
  HWND v24; // eax
  wchar_t *v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  char *v32; // [esp-4h] [ebp-18h]
  void *v33; // [esp+10h] [ebp-4h] BYREF

  if ( !byte_B76A2C ) /*0x79780c*/
  {
    v32 = byte_B76A2C; /*0x79780e*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24435); /*0x797819*/
LABEL_7:
    ShowDialogConfirm(StringCSF, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, (char)v32); /*0x797894*/
    return 0; /*0x7978a4*/
  }
  v2 = &Handles; /*0x79781b*/
  do /*0x797832*/
    ResetEvent(*v2++); /*0x797823*/
  while ( (int)v2 < (int)g_WOL_RequestObject ); /*0x797832*/
  v3 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797853*/
         g_UIPointerTable,
         &g_WindowManager.__pad_70[28],
         stru_B76AC4.ambientSoundController[3],
         3);
  Debug::Log(); /*0x797860*/
  Debug::Log(); /*0x79786a*/
  if ( v3 ) /*0x797876*/
  {
    LOBYTE(v32) = 0; /*0x797878*/
    StringCSF = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24451); /*0x79788f*/
    goto LABEL_7; /*0x79788f*/
  }
  v5 = GetStringCSF(aTxtFetchingWdt, 0, g_Str_File_wonline_cpp, 24455); /*0x7978b6*/
  WideString::Assign((wchar_t **)&v33, v5); /*0x7978c0*/
  ShowUIMessage(16, (wchar_t **)&v33, 0); /*0x7978cf*/
  DeleteAndZero::Alt((DeleteAndZero *)&v33); /*0x7978d8*/
  do /*0x797949*/
  {
    v6 = 30000; /*0x7978ed*/
    v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x7978f4*/
    if ( v8 == 258 ) /*0x7978fc*/
    {
      while ( 1 ) /*0x7978fe*/
      {
        v6 -= 100; /*0x7978fe*/
        if ( v6 <= 0 ) /*0x797903*/
          break; /*0x797903*/
        Game::ProcessIdle(v7); /*0x797909*/
        v8 = WaitForMultipleObjects(0x12u, &Handles, 0, 0x64u); /*0x79791a*/
        if ( v8 != 258 ) /*0x797922*/
          goto LABEL_12; /*0x797922*/
      }
LABEL_25:
      v15 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24480); /*0x797a00*/
      ShowDialogConfirm(v15, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x797a20*/
      v16 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a2a*/
      if ( v16 ) /*0x797a31*/
      {
        stru_B77D80.HashTable_field_0x48 = 0; /*0x797a37*/
        CloseDialog(v16, 0); /*0x797a3d*/
      }
      Current = (HWND)Dialog::GetCurrent(); /*0x797a42*/
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
    ResetEvent(*(&Handles + v8)); /*0x797924*/
    switch ( v8 ) /*0x797936*/
    {
      case 0u: /*0x797936*/
        v9 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797956*/
        if ( v9 ) /*0x79795d*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797963*/
          CloseDialog(v9, 0); /*0x797969*/
        }
        v10 = (HWND)Dialog::GetCurrent(); /*0x79796e*/
        DlgItem = GetDlgItem(v10, 1344); /*0x797979*/
        if ( DlgItem ) /*0x797981*/
          goto LABEL_43; /*0x797981*/
        return 0; /*0x797981*/
      case 5u: /*0x797936*/
        v12 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24474); /*0x7979ad*/
        ShowDialogConfirm(v12, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x7979b6*/
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7979c0*/
        if ( v13 ) /*0x7979c7*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x7979cd*/
          CloseDialog(v13, 0); /*0x7979d3*/
        }
        v14 = (HWND)Dialog::GetCurrent(); /*0x7979d8*/
        DlgItem = GetDlgItem(v14, 1344); /*0x7979e3*/
        if ( DlgItem ) /*0x7979eb*/
          goto LABEL_43; /*0x7979eb*/
        return 0; /*0x7979eb*/
      case 0x12u: /*0x797936*/
        goto LABEL_25; /*0x797940*/
    }
  }
  while ( v8 != 11 ); /*0x797949*/
  v18 = (*(int (__stdcall **)(LPVOID, char *, int, int))(*(_DWORD *)g_UIPointerTable + 44))( /*0x797a83*/
          g_UIPointerTable,
          &g_WindowManager.__pad_70[28],
          stru_B76AC4.ambientSoundController[3],
          5);
  Debug::Log(); /*0x797a8a*/
  if ( v18 ) /*0x797a94*/
  {
    v19 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797a9b*/
    if ( v19 ) /*0x797aa2*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x797aa8*/
      CloseDialog(v19, 0); /*0x797aae*/
    }
    v20 = (HWND)Dialog::GetCurrent(); /*0x797ab3*/
    DlgItem = GetDlgItem(v20, 1344); /*0x797abe*/
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
        Game::ProcessIdle(v21); /*0x797af1*/
      }
      ResetEvent(*(&Handles + i)); /*0x797b14*/
      if ( !i ) /*0x797b18*/
        break; /*0x797b18*/
      if ( i == 5 ) /*0x797b1d*/
      {
        v25 = GetStringCSF(g_Str_TXT_WDT_NET_ERR, 0, g_Str_File_wonline_cpp, 24507); /*0x797b82*/
        ShowDialogConfirm(v25, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x797b8b*/
        v26 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b95*/
        if ( v26 ) /*0x797b9c*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797ba2*/
          CloseDialog(v26, 0); /*0x797ba8*/
        }
        v27 = (HWND)Dialog::GetCurrent(); /*0x797bad*/
        v28 = GetDlgItem(v27, 1344); /*0x797bb8*/
        if ( v28 ) /*0x797bc0*/
          SetFocus(v28); /*0x797bc3*/
        return 0; /*0x797bc3*/
      }
      if ( i == 11 ) /*0x797b22*/
      {
        v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797bd6*/
        if ( v29 ) /*0x797bdd*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x797be3*/
          CloseDialog(v29, 0); /*0x797be9*/
        }
        v30 = (HWND)Dialog::GetCurrent(); /*0x797bee*/
        v31 = GetDlgItem(v30, 1344); /*0x797bf9*/
        if ( v31 ) /*0x797c01*/
          SetFocus(v31); /*0x797c04*/
        return 1; /*0x797c0d*/
      }
    }
    v23 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x797b2f*/
    if ( v23 ) /*0x797b36*/
    {
      stru_B77D80.HashTable_field_0x48 = 0; /*0x797b3c*/
      CloseDialog(v23, 0); /*0x797b42*/
    }
    v24 = (HWND)Dialog::GetCurrent(); /*0x797b47*/
    DlgItem = GetDlgItem(v24, 1344); /*0x797b52*/
    if ( DlgItem ) /*0x797b5a*/
      goto LABEL_43; /*0x797b5a*/
  }
  return 0; /*0x79789f*/
}



// ==== 0x00797C20  ObjectClass::InitVersionStringsWOL  this=ObjectClass  sig=csp ====
char InitVersionStringsWOL(ObjectClass *this)
{
  char result; // al
  int *p_abstractFlags; // esi
  int v3; // edi
  int i; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  String *v13; // ecx
  int lastLayer; // esi
  String *v15; // ecx
  int v16; // esi
  String *v17; // ecx

  result = byte_B77E10; /*0x797c20*/
  if ( !byte_B77E10 ) /*0x797c2a*/
  {
    if ( (stru_B76900.customSound_controller[1] & 1) == 0 ) /*0x797c38*/
    {
      LOBYTE(stru_B76900.customSound_controller[1]) |= 1u; /*0x797c3d*/
      p_abstractFlags = &stru_B76900.?; /*0x797c42*/
      v3 = 16; /*0x797c47*/
      do /*0x797c57*/
      {
        unknown_libname_73(p_abstractFlags++); /*0x797c4e*/
        --v3; /*0x797c56*/
      }
      while ( v3 ); /*0x797c57*/
      atexit(sub_798120); /*0x797c5e*/
    }
    String::Assign_Bool((String *)&stru_B76900.?, a01W024V01); /*0x797c71*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W026V01); /*0x797c80*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W028V01); /*0x797c8f*/
    String::Assign_Bool((String *)&stru_B76900.?, a01W018V01); /*0x797c9e*/
    String::Assign_Bool((String *)&stru_B76900.occupant, a01W020V01); /*0x797cad*/
    String::Assign_Bool((String *)&stru_B76900.owningHouseIndex, a01W022V01); /*0x797cbc*/
    String::Assign_Bool((String *)&stru_B76900.fallRate, a00W022V00); /*0x797ccb*/
    String::Assign_Bool((String *)&stru_B76900.nextObject, a00W024V00); /*0x797cda*/
    String::Assign_Bool((String *)&stru_B76900.attachedTag, a00W026V00); /*0x797ce9*/
    String::Assign_Bool((String *)&stru_B76900.attachedBomb, a00W017V00); /*0x797cf8*/
    String::Assign_Bool((String *)stru_B76900.ambientSoundController, a00W018V00); /*0x797d07*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[1], a00W020V00); /*0x797d16*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[2], a01W032V01); /*0x797d25*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[3], a01W030V01); /*0x797d34*/
    String::Assign_Bool((String *)&stru_B76900.ambientSoundController[4], a00W031V00); /*0x797d43*/
    String::Assign_Bool((String *)stru_B76900.customSound_controller, a00W029V00); /*0x797d52*/
    for ( i = 0; i < *(int *)&g_WindowManager.__pad_EC[68]; ++i ) /*0x797d60*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)&g_WindowManager.__pad_EC[76] + 4 * i), 0); /*0x797d6b*/
    v5 = 0; /*0x797d7f*/
    for ( *(_DWORD *)&g_WindowManager.__pad_EC[68] = 0; v5 < *(_DWORD *)&stru_B736F8; ++v5 ) /*0x797d89*/
      Object::DtorWithDelete((Object *)((char *)dword_B73700 + 4 * v5), 0); /*0x797d95*/
    v6 = 0; /*0x797da9*/
    for ( stru_B736F8 = 0; v6 < stru_B76AC4.ambientSoundController[0]; ++v6 ) /*0x797db3*/
      Object::DtorWithDelete((Object *)(stru_B76AC4.ambientSoundController[2] + 4 * v6), 0); /*0x797dbf*/
    v7 = 0; /*0x797dd3*/
    for ( stru_B76AC4.ambientSoundController[0] = 0; v7 < *(int *)stru_B76510.__pad_0; ++v7 ) /*0x797ddd*/
      Object::DtorWithDelete((Object *)(stru_B76510.StringVector_field_0x08 + 4 * v7), 0); /*0x797de8*/
    v8 = 0; /*0x797dfc*/
    for ( *(_DWORD *)stru_B76510.__pad_0 = 0; v8 < (int)g_WindowManager.Array_field_0x40; ++v8 ) /*0x797e06*/
      Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_48 + 4 * v8), 0); /*0x797e12*/
    v9 = 0; /*0x797e26*/
    for ( g_WindowManager.Array_field_0x40 = 0; v9 < g_WebBrowserConfig.lastLayer; ++v9 ) /*0x797e30*/
      Object::DtorWithDelete((Object *)(g_WebBrowserConfig.location[0] + 4 * v9), 0); /*0x797e3c*/
    v10 = 0; /*0x797e50*/
    for ( g_WebBrowserConfig.lastLayer = 0; v10 < *(int *)stru_B73708.__pad_0; ++v10 ) /*0x797e5a*/
      Object::DtorWithDelete((Object *)(stru_B73708.DynamicVector_field_0x8 + 4 * v10), 0); /*0x797e65*/
    v11 = 0; /*0x797e79*/
    for ( *(_DWORD *)stru_B73708.__pad_0 = 0; v11 < *(int *)stru_B76188.__pad_0; ++v11 ) /*0x797e83*/
      Object::DtorWithDelete((Object *)(stru_B76188.DynamicVector_field_0x8 + 4 * v11), 0); /*0x797e8f*/
    *(_DWORD *)stru_B76188.__pad_0 = 0; /*0x797ea9*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797eaf*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797ebf*/
    StringVector::Insert((StringVector *)&g_WindowManager.__pad_EC[68], (const char **)&stru_B76900.?, 0); /*0x797ecf*/
    StringVector::Insert((StringVector *)stru_B76AC4.ambientSoundController, (const char **)&stru_B76900.?, 0); /*0x797edf*/
    StringVector::Insert((StringVector *)stru_B76AC4.ambientSoundController, (const char **)&stru_B76900.occupant, 0); /*0x797eef*/
    StringVector::Insert( /*0x797eff*/
      (StringVector *)stru_B76AC4.ambientSoundController,
      (const char **)&stru_B76900.owningHouseIndex,
      0);
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.fallRate, 0); /*0x797f0f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.nextObject, 0); /*0x797f1f*/
    StringVector::Insert((StringVector *)&stru_B736F8, (const char **)&stru_B76900.attachedTag, 0); /*0x797f2f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.attachedBomb, 0); /*0x797f3f*/
    StringVector::Insert(&stru_B76510, (const char **)stru_B76900.ambientSoundController, 0); /*0x797f4f*/
    StringVector::Insert(&stru_B76510, (const char **)&stru_B76900.ambientSoundController[1], 0); /*0x797f5f*/
    StringVector::Insert( /*0x797f6f*/
      (StringVector *)&g_WindowManager.Array_field_0x40,
      (const char **)&stru_B76900.ambientSoundController[2],
      0);
    v12 = 0; /*0x797f79*/
    if ( *(int *)stru_B73708.__pad_0 < 0 ) /*0x797f7d*/
      v12 = *(_DWORD *)stru_B73708.__pad_0; /*0x797f7f*/
    if ( v12 >= *(int *)&stru_B73708.DynamicVector_field_0x1[3] ) /*0x797f87*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797f8e*/
    if ( *(int *)stru_B73708.__pad_0 >= *(int *)&stru_B73708.DynamicVector_field_0x1[3] ) /*0x797fa0*/
      DynamicVector::EnsureCapacity(&stru_B73708); /*0x797fa7*/
    if ( v12 < *(int *)stru_B73708.__pad_0 ) /*0x797fb3*/
      memcpy( /*0x797fd0*/
        (void *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12 + 4),
        (const void *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12),
        4 * (*(_DWORD *)stru_B73708.__pad_0 + 0x3FFFFFFF * v12));
    v13 = (String *)(stru_B73708.DynamicVector_field_0x8 + 4 * v12); /*0x797fde*/
    if ( v13 ) /*0x797fe3*/
      String::AssignFromPtr(v13, (const char **)&stru_B76900.ambientSoundController[3]); /*0x797fea*/
    lastLayer = 0; /*0x797ffb*/
    ++*(_DWORD *)stru_B73708.__pad_0; /*0x797fff*/
    if ( g_WebBrowserConfig.lastLayer < 0 ) /*0x798005*/
      lastLayer = g_WebBrowserConfig.lastLayer; /*0x798007*/
    if ( lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x79800f*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x798016*/
    if ( g_WebBrowserConfig.lastLayer >= *(int *)&g_WebBrowserConfig.isInLogic ) /*0x798028*/
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WebBrowserConfig.lastLayer); /*0x79802f*/
    if ( lastLayer < g_WebBrowserConfig.lastLayer ) /*0x79803b*/
      memcpy( /*0x798058*/
        (void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer + 4),
        (const void *)(g_WebBrowserConfig.location[0] + 4 * lastLayer),
        4 * (g_WebBrowserConfig.lastLayer + 0x3FFFFFFF * lastLayer));
    v15 = (String *)(g_WebBrowserConfig.location[0] + 4 * lastLayer); /*0x798066*/
    if ( v15 ) /*0x79806b*/
      String::AssignFromPtr(v15, (const char **)&stru_B76900.ambientSoundController[4]); /*0x798072*/
    v16 = 0; /*0x798083*/
    ++g_WebBrowserConfig.lastLayer; /*0x798087*/
    if ( *(int *)stru_B76188.__pad_0 < 0 ) /*0x79808d*/
      v16 = *(_DWORD *)stru_B76188.__pad_0; /*0x79808f*/
    if ( v16 >= *(int *)&stru_B76188.DynamicVector_field_0x1[3] ) /*0x798097*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x79809e*/
    if ( *(int *)stru_B76188.__pad_0 >= *(int *)&stru_B76188.DynamicVector_field_0x1[3] ) /*0x7980b0*/
      DynamicVector::EnsureCapacity(&stru_B76188); /*0x7980b7*/
    if ( v16 < *(int *)stru_B76188.__pad_0 ) /*0x7980c3*/
      memcpy( /*0x7980e0*/
        (void *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16 + 4),
        (const void *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16),
        4 * (*(_DWORD *)stru_B76188.__pad_0 + 0x3FFFFFFF * v16));
    v17 = (String *)(stru_B76188.DynamicVector_field_0x8 + 4 * v16); /*0x7980ee*/
    if ( v17 ) /*0x7980f4*/
      String::AssignFromPtr(v17, (const char **)stru_B76900.customSound_controller); /*0x7980fb*/
    byte_B77E10 = 1; /*0x798105*/
    result = stru_B76188.__pad_0[0] + 1; /*0x79810c*/
    ++*(_DWORD *)stru_B76188.__pad_0; /*0x79810d*/
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
              dword_A8B244 = 5; /*0x798887*/
              dword_A8B248 = 0; /*0x798891*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x7988a3*/
              break;
            case 0x6E3u: /*0x798833*/
              dword_A8B244 = 3; /*0x798863*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1763); /*0x798875*/
              return 0; /*0x798884*/
            case 0x771u: /*0x798833*/
              dword_A8B244 = 2; /*0x79883f*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798851*/
              return 0; /*0x798860*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798729*/
          {
            case 0x6E1u: /*0x798729*/
              dword_A8B244 = 4; /*0x79880a*/
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
              dword_A8B244 = 0; /*0x79876a*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x79877c*/
              return 0; /*0x79878b*/
            case 0x6E0u: /*0x798729*/
              dword_A8B244 = 1; /*0x798746*/
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
              dword_A8B244 = 5; /*0x798dab*/
              dword_A8B248 = 0; /*0x798db5*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1762); /*0x798dc7*/
              break;
            case 0x6E4u: /*0x798d55*/
              dword_A8B244 = 6; /*0x798d87*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1764); /*0x798d99*/
              return 0; /*0x798da8*/
            case 0x771u: /*0x798d55*/
              dword_A8B244 = 2; /*0x798d63*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1905); /*0x798d75*/
              return 0; /*0x798d84*/
          }
        }
        else
        {
          switch ( (unsigned __int16)a3 ) /*0x798c4b*/
          {
            case 0x6E1u: /*0x798c4b*/
              dword_A8B244 = 4; /*0x798d2c*/
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
              dword_A8B244 = 0; /*0x798c8c*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1670); /*0x798c9e*/
              return 0; /*0x798cad*/
            case 0x6E0u: /*0x798c4b*/
              dword_A8B244 = 1; /*0x798c68*/
              (*(void (__thiscall **)(LONG, HWND, int))(*(_DWORD *)WindowLongA + 4))(WindowLongA, hWnd, 1760); /*0x798c7a*/
              return 0; /*0x798c89*/
          }
        }
      }
      else if ( a2 == 1175 ) /*0x798998*/
      {
        if ( String::Length((const char **)&dword_B73E40) ) /*0x7989a3*/
        {
          LoadPlayerProfile(&Type, (const char **)&dword_B73E40); /*0x7989b5*/
          if ( v35 ) /*0x7989c0*/
            FillPersonaInfoWOL(v35, hWnd, (char **)&dword_B73E40, (wchar_t **)1); /*0x7989ca*/
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
BOOL __usercall RunWOLMainLoop_Read@<eax>(ObjectClass *this, int a2@<ebp>)
{
  int v2; // ebx
  int v3; // esi
  char *v4; // eax
  int v5; // esi
  char *v6; // eax
  BOOL v7; // esi
  int v9; // [esp+1Ch] [ebp-38h]
  int v10; // [esp+28h] [ebp-2Ch]
  ObjectClass *v11; // [esp+2Ch] [ebp-28h]
  Flag v12; // [esp+34h] [ebp-20h] BYREF
  OwnerDrawControl v13; // [esp+48h] [ebp-Ch] BYREF

  *(_DWORD *)v12.__pad_0 = 0; /*0x798de9*/
  LOBYTE(v12.Flag_field_0x04) = 0; /*0x798df1*/
  ReadRegistryOptionsWOL((ObjectClass *)&v12); /*0x798df6*/
  Screen::Capture(1, 0, v2, a2); /*0x798dff*/
  if ( g_UIPointerTable && strlen(stru_B76188.__pad_20) && String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x798e27*/
  {
    v3 = *(_DWORD *)g_UIPointerTable; /*0x798e3f*/
    v9 = g_NetworkRematchState & 0xFFFF00; /*0x798e49*/
    v4 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x798e4f*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v3 + 20))( /*0x798e67*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      v4,
      v9,
      -1,
      0,
      0);
    v5 = *(_DWORD *)g_UIPointerTable; /*0x798e7c*/
    v10 = g_NetworkRematchState & 0xFFFF00; /*0x798e7e*/
    v6 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x798e84*/
    (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v5 + 56))( /*0x798e9c*/
      g_UIPointerTable,
      stru_B76188.__pad_20,
      g_WOL_GameConfig,
      v6,
      v10);
  }
  RunWOLMainLoop_Read_Read(); /*0x798e9f*/
  if ( (unsigned __int8)Flag::IsNot2(&v12) ) /*0x798ea8*/
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v12.Flag_field_0x08); /*0x798eb5*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798ece*/
    RunDialog( /*0x798ed2*/
      0x10Eu,
      (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameModeDlgProcMultiplayer,
      (LPARAM)&v12.Flag_field_0x08);
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798ed7*/
    v7 = dword_A8B244 != 0; /*0x798eed*/
    v12.Flag_field_0x08 = (int)&off_7F7624; /*0x798eef*/
    OwnerDrawControl::InitVtable((OwnerDrawControl *)&v12.Flag_field_0x08); /*0x798ef3*/
  }
  else
  {
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v13); /*0x798f04*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f1d*/
    RunDialog(0x11Cu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))Setup2DlgProcMultiplayer, (LPARAM)&v13); /*0x798f21*/
    RunWOLMainLoop_Read_Read_72C830(v11); /*0x798f26*/
    v7 = dword_A8B244 != 0; /*0x798f3b*/
    v13 = (OwnerDrawControl)&off_7F7624; /*0x798f3d*/
    OwnerDrawControl::InitVtable(&v13); /*0x798f41*/
  }
  return v7; /*0x798efa*/
}



// ==== 0x00798F50  ObjectClass::MainLobbyDlgProcWOL_Read  this=ObjectClass  sig=csp ====
_DWORD *__thiscall MainLobbyDlgProcWOL_Read(ObjectClass *this)
{
  ObjectClass *PlayerProfile; // eax
  int i; // ebx
  LRESULT v4; // eax
  WPARAM v5; // esi
  wchar_t *v7; // [esp-4h] [ebp-30h]
  DeleteAndZero v8; // [esp+10h] [ebp-1Ch] BYREF
  void **v9; // [esp+1Ch] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-Ch]
  __int64 v11; // [esp+24h] [ebp-8h] BYREF

  ListBox::Clear((ListBox *)this); /*0x798f59*/
  v8.DeleteAndZero_field_0x08 = 0; /*0x798f69*/
  (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 208))(ppv, &v8.DeleteAndZero_field_0x08); /*0x798f71*/
  LODWORD(v11) = 0; /*0x798f7b*/
  BYTE4(v11) = 0; /*0x798f7f*/
  ReadRegistryOptionsWOL((ObjectClass *)&v11); /*0x798f84*/
  ComPtr::Constructor((ComPtr *)&v9); /*0x798f8d*/
  v9 = &rc_ptr<PlayerProfile>::`vftable'; /*0x798f9b*/
  if ( (unsigned __int8)Flag::IsNot2((Flag *)&v11) ) /*0x798f9f*/
  {
    PlayerProfile = LoadPlayerProfile((ObjectClass *)&v8, (const char **)&g_WindowManager.__pad_EC[684]); /*0x798fb1*/
    ComPtr::Set((ComPtr *)&v9, (int)PlayerProfile->?); /*0x798fbe*/
    *(_DWORD *)v8.__pad_0 = &rc_ptr<PlayerProfile>::`vftable'; /*0x798fc7*/
    ComPtr::Release((ComPtr *)&v8); /*0x798fcb*/
  }
  else
  {
    ComPtr::Set((ComPtr *)&v9, stru_B75E48.ComPtr_field_0x04); /*0x798fdd*/
  }
  if ( v8.DeleteAndZero_field_0x08 > 0 ) /*0x798fe8*/
  {
    for ( i = v8.DeleteAndZero_field_0x08 - 1; i >= 0; --i ) /*0x798fed*/
    {
      FormatLocaleStringWOL((wchar_t **)&v8, i); /*0x798ffb*/
      v7 = WideString::GetOrEmpty((wchar_t **)&v8); /*0x79900e*/
      if ( i >= 2 ) /*0x799007*/
        v4 = SendMessageA((HWND)this, 0x4C2u, 0, (LPARAM)v7); /*0x799026*/
      else
        v4 = SendMessageA((HWND)this, 0x4C1u, 0, (LPARAM)v7); /*0x799016*/
      v5 = v4; /*0x799028*/
      SendMessageA((HWND)this, 0x151u, v4, i); /*0x799032*/
      if ( v10 && i == *(_DWORD *)(v10 + 16) ) /*0x79903f*/
        SendMessageA((HWND)this, 0x14Eu, v5, 0); /*0x79904a*/
      DeleteAndZero::Alt(&v8); /*0x799050*/
    }
  }
  v9 = &rc_ptr<PlayerProfile>::`vftable'; /*0x799061*/
  return ComPtr::Release((ComPtr *)&v9); /*0x79906a*/
}



// ==== 0x00799080  MainLobbyDlgProcWOL  this=-  sig=csp ====
int __stdcall MainLobbyDlgProcWOL(String hWnd, ObjectClass a2)
{
  unsigned int v2; // ebx
  char *ptr_4; // ebp
  Dialog *v4; // esi
  unsigned int ptr_0; // edi
  int result; // eax
  LONG WindowLongA; // eax
  HWND v8; // ebx
  LRESULT v9; // eax
  int v10; // ebp
  char v11; // al
  BOOL v12; // eax
  HWND v13; // eax
  BOOL v14; // eax
  HWND v15; // eax
  LRESULT v16; // esi
  LRESULT v17; // eax
  LRESULT v18; // esi
  LRESULT v19; // eax
  LRESULT v20; // esi
  LRESULT v21; // eax
  char **v22; // eax
  char v23; // bl
  ObjectClass *v24; // esi
  LRESULT v25; // eax
  HWND v26; // edi
  LRESULT v27; // ebx
  char **v28; // eax
  char **v29; // eax
  LRESULT v30; // eax
  HWND v31; // eax
  HWND v32; // esi
  unsigned int v33; // ebx
  HWND DlgItem; // ebp
  wchar_t *StringCSF; // eax
  wchar_t *v36; // eax
  LRESULT v37; // edi
  wchar_t *v38; // eax
  LRESULT v39; // eax
  ObjectClass *v40; // eax
  HWND v41; // eax
  LRESULT v42; // eax
  BOOL v43; // ebp
  HWND v44; // ... [19471 chars total]



// ==== 0x00799CD0  RunWOLMainLoop_Helper  this=-  sig=ida-proto ====
__int64 sub_799CD0()
{
  memset(&dword_B76B10, 0, 0x10Cu); /*0x799cdd*/
  byte_84A210 = 1; /*0x799ceb*/
  memset(&dword_B73BE8, 0, 0x10Cu); /*0x799cf2*/
  dword_B73E10 = 0; /*0x799cf4*/
  dword_B76AE0 = 0; /*0x799cfa*/
  dword_B77900 = 0; /*0x799d00*/
  dword_B77DD0 = 0; /*0x799d06*/
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
int RunWOLMainLoop_Init(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int result; // eax
  wchar_t *StringCSF; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  BOOL v10; // esi
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+24h] [ebp-1Ch]
  DeleteAndZero v13; // [esp+30h] [ebp-10h] BYREF

  result = LoginFlowWOL_Reset(v1); /*0x799d33*/
  if ( result == 1 ) /*0x799d3b*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_FETCHING_SERVLIST, 0, g_Str_File_wonline_cpp, 24300); /*0x799d52*/
    WideString::Assign((wchar_t **)&v13, StringCSF); /*0x799d5c*/
    ShowUIMessage(16, (wchar_t **)&v13, 0); /*0x799d6c*/
    DeleteAndZero::Alt(&v13); /*0x799d75*/
    v4 = 8960; /*0x799d7f*/
    if ( dword_A8B244 != 3 ) /*0x799d87*/
      v4 = 10496; /*0x799d89*/
    v5 = LoginWOL(v4); /*0x799d8e*/
    if ( v5 ) /*0x799d96*/
    {
      if ( v5 == 2 ) /*0x799d9b*/
        return -1; /*0x799da6*/
      else
        return -2; /*0x799d9d*/
    }
    else
    {
      if ( g_UIPointerTable && strlen(stru_B76188.__pad_20) && String::Length((String *)&g_WindowManager.__pad_EC[684]) ) /*0x799dd2*/
      {
        v6 = *(_DWORD *)g_UIPointerTable; /*0x799dea*/
        v11 = g_NetworkRematchState & 0xFFFF00; /*0x799df4*/
        v7 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x799dfa*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v6 + 20))( /*0x799e12*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v7,
          v11,
          -1,
          0,
          0);
        v8 = *(_DWORD *)g_UIPointerTable; /*0x799e27*/
        v12 = g_NetworkRematchState & 0xFFFF00; /*0x799e29*/
        v9 = String::GetOrEmpty((String *)&g_WindowManager.__pad_EC[684]); /*0x799e2f*/
        (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v8 + 56))( /*0x799e47*/
          g_UIPointerTable,
          stru_B76188.__pad_20,
          g_WOL_GameConfig,
          v9,
          v12);
      }
      System_Init_72C9C0(); /*0x799e4a*/
      SimpleDialogControl::Constructor((SimpleDialogControl *)&v13.DeleteAndZero_field_0x04); /*0x799e53*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e6c*/
      RunDialog( /*0x799e70*/
        0x114u,
        (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))MainLobbyDlgProcWOL,
        (LPARAM)&v13.DeleteAndZero_field_0x04);
      System_Init_72CA10(v1); /*0x799e75*/
      v10 = dword_A8B244 != 0; /*0x799e8b*/
      v13.DeleteAndZero_field_0x04 = (int)&off_7F7624; /*0x799e8d*/
      OwnerDrawControl::InitVtable((OwnerDrawControl *)&v13.DeleteAndZero_field_0x04); /*0x799e91*/
      return v10; /*0x799e96*/
    }
  }
  return result; /*0x799da2*/
}



// ==== 0x00799EA0  OptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall OptionsDlgProcWOL(String hWnd, ObjectClass a2)
{
  char *ptr_4; // ebp
  Dialog *v3; // esi
  unsigned int v4; // edi
  unsigned int ptr_0; // ebx
  int result; // eax
  LONG WindowLongA; // eax
  HWND v8; // eax
  bool v9; // dl
  int i; // ebx
  char *v11; // eax
  char v12; // al
  HWND v13; // edi
  char *v14; // eax
  int v15; // eax
  HWND v16; // edi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // edi
  char *v20; // eax
  LRESULT v21; // ebp
  LRESULT v22; // eax
  HWND v23; // ebp
  char *v24; // eax
  int v25; // eax
  HWND v26; // ebp
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // esi
  LRESULT v30; // eax
  LRESULT v31; // ecx
  LRESULT v32; // edi
  HWND v33; // esi
  LRESULT v34; // eax
  LRESULT v35; // edi
  HWND v36; // esi
  LRESULT v37; // eax
  HWND v38; // eax
  int v39; // eax
  HWND v40; // edi
  int v41; // ebx
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // edi
  char *v45; // eax
  char **v46; // eax
  char **v47; // eax
  HWN... [25686 chars total]



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
          ReadSettingsWOL(&dword_B73E40); /*0x79aeec*/
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
int __thiscall FillBuddyListWOL(ObjectClass *this)
{
  LRESULT (__stdcall *v1)(HWND, UINT, WPARAM, LPARAM); // ebp
  HWND DlgItem; // ebx
  int v3; // edi
  int v4; // esi
  int *v5; // esi
  char *v6; // eax
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *StringCSF; // eax
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
  int v23; // ebp
  int referenceCount; // eax
  int v25; // ebx
  char *v26; // eax
  char v27; // bl
  BOOL v28; // ecx
  AnimClass *v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  wchar_t *v32; // eax
  int v33; // esi
  LRESULT v34; // esi
  char *v35; // eax
  int v36; // eax
  ObjectClass *fallRate; // esi
  HWND v38; // eax
  HWND v39; // eax
  int v40; // esi
  HWND v41; // eax
  int result; // eax
  wchar_t *v43; // [e... [19370 chars total]



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
  if ( dword_A8B238 == 4 ) /*0x79ba7a*/
  {
    v4 = *(_DWORD *)(a1 + 32); /*0x79ba7c*/
    if ( (v4 & 0x800) != 0 || (v4 & 0x1000) != 0 ) /*0x79ba96*/
      v5 = 1; /*0x79ba7a*/
  }
  v6 = dword_A8B244 == 3 || dword_A8B244 == 1 || dword_A8B244 == 2; /*0x79bab6*/
  if ( v5 != v6 ) /*0x79babd*/
    return 0; /*0x79babd*/
  if ( dword_A8B238 == 4 && (*(_DWORD *)(a1 + 32) & 0x100) != 0 && dword_B77DE4 < 1 ) /*0x79badd*/
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
      v10 = GetStringCSF(aTxtMismatch, 0, g_Str_File_wonline_cpp, 26769); /*0x79bc54*/
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
  v1 = *((_DWORD *)dword_B76990 + (dword_B769A8(&g_WOL_LoginObject) & ((1 << dword_B7699C) - 1))); /*0x79bcce*/
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
  v4 = *((_DWORD *)dword_B76608 + (dword_B76620(&g_WOL_LoginObject) & ((1 << dword_B76614) - 1))); /*0x79bd55*/
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
  v7 = dword_B76AE0; /*0x79bdc2*/
  if ( (int)dword_B76AE0 <= 0 ) /*0x79bdc9*/
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
      qmemcpy(v12, (char *)dword_B76AE8 + v8, sizeof(v12)); /*0x79bde7*/
    v9 = String::GetOrEmpty_Alt((char **)&v11); /*0x79bded*/
    if ( !_strcmpi(&v12[52], v9) ) /*0x79bdf8*/
      break; /*0x79bdf8*/
    v7 = dword_B76AE0; /*0x79be04*/
    ++v6; /*0x79be09*/
    v8 += 268; /*0x79be0a*/
    if ( v6 >= (int)dword_B76AE0 ) /*0x79be12*/
      goto LABEL_27; /*0x79be12*/
  }
  v10 = ValidateGameJoinWOL((int)v12, 0, g_MenuStateFlags != 0); /*0x79be52*/
  DeleteAndZero(&v11); /*0x79be54*/
  return v10; /*0x79bc98*/
}



// ==== 0x0079BF50  ObjectClass::method_79BF50  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_79BF50(ObjectClass *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int v4; // esi
  HWND v5; // eax
  BOOL v7; // [esp-4h] [ebp-18h]
  BOOL BuddyWOL; // [esp-4h] [ebp-18h]
  unsigned __int8 v9; // [esp+10h] [ebp-4h]

  v7 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79bf6f*/
  DlgItem = GetDlgItem((HWND)this, 1795); /*0x79bf76*/
  EnableWindow(DlgItem, v7); /*0x79bf7f*/
  BuddyWOL = FindBuddyWOL(); /*0x79bf8b*/
  v3 = GetDlgItem((HWND)this, 1581); /*0x79bf92*/
  EnableWindow(v3, BuddyWOL); /*0x79bf95*/
  if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79bf9c*/
  {
    if ( !stru_B76900.lastLayer ) /*0x79bfb2*/
      goto LABEL_10; /*0x79bfb2*/
    v4 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79bfd4*/
                   + 4
                   * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                    & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
    if ( !v4 ) /*0x79bfd9*/
      goto LABEL_10; /*0x79bfd9*/
    while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)&g_WOL_LoginObject) ) /*0x79bfe9*/
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
  v5 = GetDlgItem((HWND)this, 1474); /*0x79c01b*/
  return EnableWindow(v5, v9); /*0x79c031*/
}



// ==== 0x0079C040  ObjectClass::ShowUserProfileWOL  this=ObjectClass  sig=csp ====
void __thiscall ShowUserProfileWOL(ObjectClass *this)
{
  HWND DlgItem; // ebx
  HWND v3; // ebp
  wchar_t *StringCSF; // eax
  const wchar_t *v5; // ebx
  int v6; // eax
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
  DeleteAndZero *p_DeleteAndZero_field_0x04; // ecx
  wchar_t *v21; // eax
  wchar_t *v22; // eax
  wchar_t *v23; // eax
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // eax
  char *v27; // [esp-4h] [ebp-A0h]
  DeleteAndZero v28; // [esp+10h] [ebp-8Ch] BYREF
  DeleteAndZero v29; // [esp+1Ch] [ebp-80h] BYREF
  HWND v30; // [esp+28h] [ebp-74h]
  char *v31; // [esp+2Ch] [ebp-70h] BYREF
  const wchar_t *v32[27]; // [esp+30h] [ebp-6Ch] BYREF

  DlgItem = GetDlgItem((HWND)this, 1775); /*0x79c05a*/
  v3 = GetDlgItem((HWND)this, 1780); /*0x79c064*/
  v28.DeleteAndZero_field_0x04 = (int)v3; /*0x79c06c*/
  v29.DeleteAndZero_field_0x08 = (int)GetDlgItem((HWND)this, 1781); /*0x79c078*/
  v29.DeleteAndZero_field_0x04 = (int)GetDlgItem((HWND)this, 1776); /*0x79c084*/
  v30 = GetDlgItem((HWND)this, 1777); /*0x79c090*/
  v28.DeleteAndZero_field_0x08 = (int)GetDlgItem((HWND)this, 1793); /*0x79c09b*/
  if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79c09f*/
  {
    StringCSF = GetStringCSF(aGuiUserprofile, 0, g_Str_File_wonline_cpp, 26882); /*0x79c133*/
    WideString::Assign((wchar_t **)&v29, StringCSF); /*0x79c13d*/
    v5 = WideString::Length((const wchar_t **)&v29); /*0x79c150*/
    v6 = String::Length((String *)&g_WOL_LoginObject); /*0x79c152*/
    v7 = (wchar_t *)__2_YAPAXI_Z(2 * ((_DWORD)v5 + v6) + 2); /*0x79c16b*/
    v27 = String::GetOrEmpty((String *)&g_WOL_LoginObject); /*0x79c176*/
    v8 = WideString::GetOrEmpty((wchar_t **)&v29); /*0x79c177*/
    swprintf(v7, (const size_t)v8, (const wchar_t *const)v27); /*0x79c17e*/
    v9 = GetDlgItem((HWND)this, 1775); /*0x79c18c*/
    SendMessageA(v9, 0x4B2u, 0, (LPARAM)v7); /*0x79c19d*/
    __3_YAXPAX_Z(v7); /*0x79c1a0*/
    memset(v32, 0, sizeof(v32)); /*0x79c1b3*/
    String::ToLowerCopy((String *)&g_WOL_LoginObject, &v31); /*0x79c1bf*/
    *(_DWORD *)v28.__pad_0 = 0; /*0x79c1d3*/
    if ( (unsigned __int8)HashTable::LookupString(&stru_B77D80, (const char **)&v31, &v28) ) /*0x79c1db*/
    {
      if ( *(_DWORD *)v28.__pad_0 ) /*0x79c1ee*/
        qmemcpy(v32, *(const void **)v28.__pad_0, sizeof(v32)); /*0x79c1f9*/
      v10 = FormatWideString((wchar_t **)&v28, v32[7]); /*0x79c203*/
      v11 = WideString::GetOrEmpty_Alt(v10); /*0x79c20a*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v11); /*0x79c21c*/
      DeleteAndZero::Alt(&v28); /*0x79c222*/
      v12 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[4]); /*0x79c22f*/
      v13 = WideString::GetOrEmpty_Alt(v12); /*0x79c236*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v13); /*0x79c248*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c24e*/
      v14 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[2]); /*0x79c25b*/
      v15 = WideString::GetOrEmpty_Alt(v14); /*0x79c262*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v15); /*0x79c274*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c27a*/
      v16 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[3]); /*0x79c287*/
      v17 = WideString::GetOrEmpty_Alt(v16); /*0x79c28e*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v17); /*0x79c2a0*/
      DeleteAndZero::Alt((DeleteAndZero *)&v28.DeleteAndZero_field_0x04); /*0x79c2a6*/
      v18 = FormatWideString((wchar_t **)&v28.DeleteAndZero_field_0x04, v32[8]); /*0x79c2b3*/
      v19 = WideString::GetOrEmpty_Alt(v18); /*0x79c2ba*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v19); /*0x79c2cc*/
      p_DeleteAndZero_field_0x04 = (DeleteAndZero *)&v28.DeleteAndZero_field_0x04; /*0x79c2ce*/
    }
    else
    {
      v21 = GetStringCSF(g_Str_GUI_UnknownStats, 0, g_Str_File_wonline_cpp, 26899); /*0x79c2e8*/
      WideString::Assign((wchar_t **)&v28, v21); /*0x79c2f2*/
      v22 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c2fb*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v22); /*0x79c30d*/
      v23 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c313*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v23); /*0x79c325*/
      v24 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c32b*/
      SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)v24); /*0x79c33d*/
      v25 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c343*/
      SendMessageA(v30, 0x4B2u, 0, (LPARAM)v25); /*0x79c355*/
      v26 = WideString::GetOrEmpty_Alt((wchar_t **)&v28); /*0x79c35b*/
      SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)v26); /*0x79c36d*/
      p_DeleteAndZero_field_0x04 = &v28; /*0x79c36f*/
    }
    DeleteAndZero::Alt(p_DeleteAndZero_field_0x04); /*0x79c373*/
    DeleteAndZero((ObjectClass *)&v31); /*0x79c37c*/
    DeleteAndZero::Alt(&v29); /*0x79c385*/
  }
  else
  {
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ba*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0c9*/
    SendMessageA((HWND)v29.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0dc*/
    SendMessageA((HWND)v29.DeleteAndZero_field_0x04, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c0ef*/
    SendMessageA(v30, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c102*/
    SendMessageA((HWND)v28.DeleteAndZero_field_0x08, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x79c115*/
  }
}



// ==== 0x0079C3A0  ObjectClass::Network_Cleanup  this=ObjectClass  sig=csp ====
unsigned int Network_Cleanup(ObjectClass *this)
{
  unsigned int result; // eax
  int v2; // esi
  int v3; // ebx
  AnimClass *v4; // eax
  AnimClass *parachute; // esi
  AnimClass *v6; // ebp
  char v7[108]; // [esp+0h] [ebp-6Ch] BYREF

  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79c3a8*/
  {
    result = time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20; /*0x79c3c1*/
    if ( result < 5 ) /*0x79c3c6*/
      return result; /*0x79c3c6*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79c3d1*/
  }
  result = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c3d6*/
  if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c3dd*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c3e6*/
    {
      String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79c3f7*/
      v2 = 0; /*0x79c401*/
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c405*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79c40b*/
          v2 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x79c40d*/
        DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79c419*/
        memcpy( /*0x79c442*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v2,
          &stru_B76900.parachute->AnimClass_field_0x4 + v2,
          4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v2 + 1)));
        --*(_DWORD *)&stru_B76900.needsRedraw; /*0x79c456*/
        if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x79c460*/
        {
          v3 = *(_DWORD *)&stru_B76900.hasParachute / 2; /*0x79c469*/
          if ( *(_DWORD *)&stru_B76900.hasParachute / 2 < 10 ) /*0x79c46e*/
            v3 = 10; /*0x79c470*/
          if ( v3 < *(int *)&stru_B76900.hasParachute ) /*0x79c477*/
          {
            v4 = (AnimClass *)__2_YAPAXI_Z(4 * v3); /*0x79c482*/
            parachute = stru_B76900.parachute; /*0x79c487*/
            v6 = v4; /*0x79c492*/
            if ( stru_B76900.parachute ) /*0x79c494*/
            {
              qmemcpy(v4, stru_B76900.parachute, 4 * *(_DWORD *)&stru_B76900.needsRedraw); /*0x79c49e*/
              parachute = stru_B76900.parachute; /*0x79c4a0*/
            }
            __3_YAXPAX_Z(parachute); /*0x79c4a7*/
            stru_B76900.parachute = v6; /*0x79c4af*/
            *(_DWORD *)&stru_B76900.hasParachute = v3; /*0x79c4b5*/
          }
        }
      }
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c4c3*/
    memset(v7, 0, sizeof(v7)); /*0x79c4d3*/
    strcpy(&v7[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79c500*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v7); /*0x79c512*/
  }
  return result; /*0x79c518*/
}



// ==== 0x0079C520  MapSeed::CheckName  this=MapSeed  sig=csp ====
int __thiscall MapSeed::CheckName(MapSeed *this)
{
  char **v2; // eax
  char v3; // bl
  const char *v4; // edx
  int result; // eax
  int v6; // esi
  char **v7; // [esp-8h] [ebp-18h]
  String v8; // [esp+4h] [ebp-Ch] BYREF
  char *v9; // [esp+Ch] [ebp-4h] BYREF

  String::AssignFromPtr(&v8, (const char **)this); /*0x79c52b*/
  String::ToLower(&v8); /*0x79c534*/
  if ( !String::Length((String *)this) /*0x79c5aa*/
    || (v7 = String::ToLowerCopy((String *)&g_WindowManager.__pad_EC[684], &v9),
        v2 = String::ToLowerCopy(&v8, (char **)&v8.m_3[1]),
        v3 = String::Compare((String *)v2, (const char **)v7),
        DeleteAndZero((ObjectClass *)&v8.m_3[1]),
        DeleteAndZero((ObjectClass *)&v9),
        v3)
    || (unsigned __int8)ValidateStringContains((const char **)this, v4, asc_84BA18) )
  {
    result = DeleteAndZero((ObjectClass *)&v8); /*0x79c5b7*/
    LOBYTE(result) = 0; /*0x79c5bc*/
  }
  else
  {
    v6 = 0; /*0x79c5c8*/
    if ( *(int *)g_WindowManager.__pad_0 <= 0 ) /*0x79c5cc*/
    {
LABEL_12:
      result = DeleteAndZero((ObjectClass *)&v8); /*0x79c624*/
      LOBYTE(result) = 1; /*0x79c62d*/
    }
    else
    {
      while ( 1 ) /*0x79c5d2*/
      {
        unknown_libname_73(&v8.m_3[1]); /*0x79c5d2*/
        if ( v6 >= 0 && v6 < *(int *)g_WindowManager.__pad_0 ) /*0x79c5e1*/
          String::Reassign((String *)&v8.m_3[1], (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v6)); /*0x79c5f1*/
        String::ToLower((String *)&v8.m_3[1]); /*0x79c5fa*/
        if ( (unsigned __int8)String::Compare((String *)&v8.m_3[1], (const char **)&v8) ) /*0x79c608*/
          break; /*0x79c608*/
        DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c615*/
        if ( ++v6 >= *(int *)g_WindowManager.__pad_0 ) /*0x79c622*/
          goto LABEL_12; /*0x79c622*/
      }
      DeleteAndZero((ObjectClass *)&v8.m_3[1]); /*0x79c634*/
      result = DeleteAndZero((ObjectClass *)&v8); /*0x79c63d*/
      LOBYTE(result) = 0; /*0x79c642*/
    }
  }
  return result; /*0x79c54f*/
}



// ==== 0x0079C650  MapSeed::InsertName  this=MapSeed  sig=csp ====
void __thiscall MapSeed::InsertName(MapSeed *this)
{
  int v2; // eax
  int v3; // esi
  String *v4; // ecx
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  const char *v11; // [esp+8h] [ebp-70h] BYREF
  char v12[108]; // [esp+Ch] [ebp-6Ch] BYREF

  if ( (unsigned __int8)MapSeed::CheckName(this) ) /*0x79c656*/
  {
    String::AssignFromPtr((String *)&v11, (const char **)this); /*0x79c668*/
    v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c66d*/
    v3 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c672*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c67e*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c685*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c68a*/
    }
    if ( v2 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c695*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c69c*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6a1*/
    }
    if ( v3 < v2 ) /*0x79c6a8*/
    {
      memcpy( /*0x79c6c5*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3),
        4 * (v2 + 0x3FFFFFFF * v3));
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6ca*/
    }
    v4 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v3); /*0x79c6d8*/
    if ( v4 ) /*0x79c6dd*/
    {
      String::AssignFromPtr(v4, &v11); /*0x79c6e4*/
      v2 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c6e9*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v2 + 1; /*0x79c6ef*/
    v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c6f4*/
    v6 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c6f9*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79c705*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c70c*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c711*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79c71c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c723*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c728*/
    }
    if ( v6 < v5 ) /*0x79c72f*/
    {
      memcpy( /*0x79c74c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c751*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79c75f*/
    if ( v7 ) /*0x79c764*/
    {
      String::AssignFromPtr(v7, &v11); /*0x79c76b*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c770*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v5 + 1; /*0x79c776*/
    v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c77b*/
    v9 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c780*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c78c*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c793*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c798*/
    }
    if ( v8 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79c7a3*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79c7aa*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7af*/
    }
    if ( v9 < v8 ) /*0x79c7b6*/
    {
      memcpy( /*0x79c7d3*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7d8*/
    }
    v10 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v9); /*0x79c7e6*/
    if ( v10 ) /*0x79c7eb*/
    {
      String::AssignFromPtr(v10, &v11); /*0x79c7f2*/
      v8 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79c7f7*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v8 + 1; /*0x79c802*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79c807*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79c825*/
      {
LABEL_33:
        DeleteAndZero((ObjectClass *)&v11); /*0x79c8b7*/
        return; /*0x79c8bb*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79c830*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79c83c*/
    {
      if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79c83e*/
      {
        String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79c84b*/
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79c857*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79c864*/
      memset(v12, 0, sizeof(v12)); /*0x79c874*/
      strcpy(&v12[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79c8a1*/
      (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v12); /*0x79c8b3*/
    }
    goto LABEL_33; /*0x79c8b3*/
  }
}



// ==== 0x0079C8D0  ObjectClass::QueueWOLAuthRequest  this=ObjectClass  sig=csp ====
void __thiscall QueueWOLAuthRequest(ObjectClass *this)
{
  ObjectClass *v1; // edi
  char *v3; // eax
  int v4; // eax
  int v5; // esi
  String *v6; // ecx
  int v7; // eax
  int v8; // esi
  String *v9; // ecx
  int v10; // eax
  int v11; // esi
  String *v12; // ecx
  _BYTE v13[220]; // [esp+10h] [ebp-DCh] BYREF

  if ( (unsigned __int8)MapSeed::CheckName((MapSeed *)this) ) /*0x79c8d9*/
  {
    memset(&v13[4], 0, 0x6Cu); /*0x79c8f2*/
    v3 = String::GetOrEmpty_Alt((String *)this); /*0x79c8f8*/
    strncpy(&v13[40], v3, 9u); /*0x79c903*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v13[4]); /*0x79c918*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)this) ) /*0x79c927*/
    {
LABEL_35:
      SendGameListWOL(v1); /*0x79cb8b*/
      return; /*0x79cb8b*/
    }
    String::AssignFromPtr((String *)v13, (const char **)this); /*0x79c932*/
    v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c937*/
    v5 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c93c*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c948*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c94f*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c954*/
    }
    if ( v4 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79c95f*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79c966*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c96b*/
    }
    if ( v5 < v4 ) /*0x79c972*/
    {
      memcpy( /*0x79c98f*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5),
        4 * (v4 + 0x3FFFFFFF * v5));
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c994*/
    }
    v6 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v5); /*0x79c9a2*/
    if ( v6 ) /*0x79c9a7*/
    {
      String::AssignFromPtr(v6, (const char **)v13); /*0x79c9ae*/
      v4 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79c9b3*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v4 + 1; /*0x79c9b9*/
    v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9be*/
    v8 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9c3*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79c9cf*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c9d6*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9db*/
    }
    if ( v7 >= *(int *)&stru_B76900.hasParachute ) /*0x79c9e6*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79c9ed*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79c9f2*/
    }
    if ( v8 < v7 ) /*0x79c9f9*/
    {
      memcpy( /*0x79ca16*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v8,
        &stru_B76900.parachute->AnimClass_field_0x0 + v8,
        4 * (v7 + 0x3FFFFFFF * v8));
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79ca1b*/
    }
    v9 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v8); /*0x79ca29*/
    if ( v9 ) /*0x79ca2e*/
    {
      String::AssignFromPtr(v9, (const char **)v13); /*0x79ca35*/
      v7 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79ca3a*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v7 + 1; /*0x79ca40*/
    v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca45*/
    v11 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca4a*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79ca56*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca5d*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca62*/
    }
    if ( v10 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79ca6d*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79ca74*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79ca79*/
    }
    if ( v11 < v10 ) /*0x79ca80*/
    {
      memcpy( /*0x79ca9d*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11),
        4 * (v10 + 0x3FFFFFFF * v11));
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79caa2*/
    }
    v12 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v11); /*0x79cab0*/
    if ( v12 ) /*0x79cab5*/
    {
      String::AssignFromPtr(v12, (const char **)v13); /*0x79cabc*/
      v10 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79cac1*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v10 + 1; /*0x79cacc*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79cad1*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79caef*/
      {
LABEL_34:
        DeleteAndZero((ObjectClass *)v13); /*0x79cb82*/
        goto LABEL_35; /*0x79cb86*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79cafa*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79cb06*/
    {
      if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79cb08*/
      {
        String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79cb15*/
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79cb21*/
      }
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79cb2d*/
      memset(&v13[112], 0, 0x6Cu); /*0x79cb3d*/
      strcpy(&v13[148], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79cb6d*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v13[112]); /*0x79cb7f*/
    }
    goto LABEL_34; /*0x79cb7f*/
  }
}



// ==== 0x0079CBA0  RemoveWOLPlayerLogin  this=-  sig=csp ====
void __fastcall RemoveWOLPlayerLogin(const char **a1)
{
  const char **ptr_4; // ebp
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
  ObjectClass v14; // [esp+8h] [ebp-188h] BYREF

  ptr_4 = a1; /*0x79cbad*/
  v2 = 0; /*0x79cbaf*/
  v14.? = a1; /*0x79cbb1*/
  if ( *(int *)g_WindowManager.__pad_0 > 0 ) /*0x79cbb7*/
  {
    while ( 1 ) /*0x79cbc1*/
    {
      unknown_libname_73(&v14.?); /*0x79cbc1*/
      if ( v2 >= 0 && v2 < *(int *)g_WindowManager.__pad_0 ) /*0x79cbd0*/
        String::Reassign((String *)&v14.?, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79cbdf*/
      if ( (unsigned __int8)String::Compare((String *)&v14.?, ptr_4) ) /*0x79cbe9*/
        break; /*0x79cbe9*/
      DeleteAndZero((ObjectClass *)&v14.?); /*0x79cbf6*/
      if ( ++v2 >= *(int *)g_WindowManager.__pad_0 ) /*0x79cc03*/
        return; /*0x79cc03*/
    }
    if ( *(_DWORD *)g_WindowManager.__pad_0 ) /*0x79cc17*/
    {
      if ( v2 < 0 ) /*0x79cc1f*/
        v2 = 0; /*0x79cc21*/
      if ( v2 >= *(int *)g_WindowManager.__pad_0 ) /*0x79cc25*/
        v2 = *(_DWORD *)g_WindowManager.__pad_0 - 1; /*0x79cc27*/
      DeleteAndZero((ObjectClass *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79cc33*/
      memcpy( /*0x79cc5c*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * (v2 + 1)),
        4 * (*(_DWORD *)g_WindowManager.__pad_0 + 0x3FFFFFFF * (v2 + 1)));
      --*(_DWORD *)g_WindowManager.__pad_0; /*0x79cc70*/
      if ( 3 * *(_DWORD *)g_WindowManager.__pad_0 <= (int)g_WindowManager.Array_field_0x4 ) /*0x79cc7a*/
      {
        v3 = (int)g_WindowManager.Array_field_0x4 / 2; /*0x79cc83*/
        if ( (int)g_WindowManager.Array_field_0x4 / 2 < 10 ) /*0x79cc88*/
          v3 = 10; /*0x79cc8a*/
        if ( v3 < (int)g_WindowManager.Array_field_0x4 ) /*0x79cc91*/
        {
          v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x79cc9b*/
          v5 = *(void **)g_WindowManager.__pad_8; /*0x79cca0*/
          v6 = v4; /*0x79ccab*/
          if ( *(_DWORD *)g_WindowManager.__pad_8 ) /*0x79ccad*/
          {
            qmemcpy(v4, *(const void **)g_WindowManager.__pad_8, 4 * *(_DWORD *)g_WindowManager.__pad_0); /*0x79ccb7*/
            v5 = *(void **)g_WindowManager.__pad_8; /*0x79ccb9*/
          }
          __3_YAXPAX_Z(v5); /*0x79ccc0*/
          *(_DWORD *)g_WindowManager.__pad_8 = v6; /*0x79ccc5*/
          ptr_4 = (const char **)v14.?; /*0x79cccb*/
          g_WindowManager.Array_field_0x4 = (void *)v3; /*0x79ccd2*/
        }
      }
    }
    String::AssignFromPtr((String *)&v14, ptr_4); /*0x79ccdd*/
    HashTable::FindWOLHashTableEntry((HashTable *)&stru_B765EC.?, (const char **)&v14, &v14.visibilityFlags); /*0x79ccf4*/
    if ( !stru_B76900.lastLayer ) /*0x79cd02*/
      goto LABEL_34; /*0x79cd02*/
    *(_QWORD *)&v14.? = (unsigned int)(stru_B76900.lastLayer - 1); /*0x79cd0d*/
    *(float *)&v14.? = (double)*(__int64 *)&v14.? / (double)*(int *)&stru_B76900.isInLogic; /*0x79cd2a*/
    v7 = ((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&v14) /*0x79cd48*/
       & ((1 << SLOBYTE(stru_B76900.location[0])) - 1);
    v8 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd4a*/
    if ( !v8 ) /*0x79cd4f*/
      goto LABEL_34; /*0x79cd4f*/
    if ( (unsigned __int8)String::Compare( /*0x79cd5c*/
                            *(String **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7),
                            (const char **)&v14) )
    {
      v9 = *(_DWORD **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7); /*0x79cd6a*/
      v10 = v9[2]; /*0x79cd6f*/
      if ( v9 ) /*0x79cd72*/
      {
        DeleteAndZero(*(ObjectClass **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7)); /*0x79cd76*/
        __3_YAXPAX_Z(v9); /*0x79cd7c*/
      }
      v11 = *(float *)&v14.?; /*0x79cd8a*/
      *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v7) = v10; /*0x79cd8e*/
      --stru_B76900.lastLayer; /*0x79cd9d*/
      if ( v11 > dbl_B769B0 ) /*0x79cda7*/
        goto LABEL_34; /*0x79cda7*/
    }
    else
    {
      v12 = *(_DWORD *)(v8 + 8); /*0x79cdab*/
      if ( v12 ) /*0x79cdb0*/
      {
        while ( !(unsigned __int8)String::Compare((String *)v12, (const char **)&v14) ) /*0x79cdc0*/
        {
          v8 = v12; /*0x79cdc2*/
          v12 = *(_DWORD *)(v12 + 8); /*0x79cdc4*/
          if ( !v12 ) /*0x79cdc9*/
            goto LABEL_32; /*0x79cdc9*/
        }
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v12 + 8); /*0x79cdd0*/
        --stru_B76900.lastLayer; /*0x79cddc*/
        DeleteAndZero((ObjectClass *)v12); /*0x79cde6*/
        __3_YAXPAX_Z((void *)v12); /*0x79cdec*/
      }
LABEL_32:
      if ( *(float *)&v14.? > dbl_B769B0 ) /*0x79ce03*/
        goto LABEL_34; /*0x79ce03*/
    }
    RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79ce0a*/
LABEL_34:
    memset(&v14.?, 0, 0x6Cu); /*0x79ce0f*/
    v13 = String::GetOrEmpty_Alt((String *)ptr_4); /*0x79ce20*/
    strncpy((char *)&v14.attachedTag, v13, 9u); /*0x79ce2b*/
    (*(void (__stdcall **)(LPVOID, int *))(*(_DWORD *)ppv + 228))(ppv, &v14.?); /*0x79ce40*/
    DeleteAndZero(&v14); /*0x79ce4a*/
    DeleteAndZero((ObjectClass *)&v14.?); /*0x79ce53*/
  }
}



// ==== 0x0079CE70  ObjectClass::RefreshChannelListWOL  this=ObjectClass  sig=csp ====
unsigned int RefreshChannelListWOL(ObjectClass *this)
{
  HANDLE *v1; // esi
  unsigned int result; // eax
  int i; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  String *v7; // ecx
  int v8; // esi
  const char *v9; // [esp+Ch] [ebp-70h] BYREF
  char v10[108]; // [esp+10h] [ebp-6Ch] BYREF

  dword_B778C8 = time(0); /*0x79ce83*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79ce9b*/
    return SetEvent(hEvent); /*0x79ce9b*/
  v1 = &Handles; /*0x79cea3*/
  do /*0x79ceb6*/
    ResetEvent(*v1++); /*0x79ceab*/
  while ( (int)v1 < (int)g_WOL_RequestObject ); /*0x79ceb6*/
  if ( !RequestChannelList2WOL(41, 1u) ) /*0x79cebf*/
  {
    SetEvent(Handles); /*0x79cecf*/
    return SetEvent(hEvent); /*0x79cee0*/
  }
  for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79ceea*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79cef4*/
  v4 = 0; /*0x79cf08*/
  for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v4 < *(int *)g_WindowManager.__pad_0; ++v4 ) /*0x79cf16*/
  {
    unknown_libname_73(&v9); /*0x79cf20*/
    if ( v4 >= 0 && v4 < *(int *)g_WindowManager.__pad_0 ) /*0x79cf2f*/
      String::Reassign((String *)&v9, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v4)); /*0x79cf3f*/
    v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf44*/
    v6 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf49*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79cf55*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf5c*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf61*/
    }
    if ( v5 >= *(int *)&stru_B76900.hasParachute ) /*0x79cf6c*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79cf73*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cf78*/
    }
    if ( v6 < v5 ) /*0x79cf7f*/
    {
      memcpy( /*0x79cf9c*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v6,
        &stru_B76900.parachute->AnimClass_field_0x0 + v6,
        4 * (v5 + 0x3FFFFFFF * v6));
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cfa1*/
    }
    v7 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v6); /*0x79cfaf*/
    if ( v7 ) /*0x79cfb4*/
    {
      String::AssignFromPtr(v7, &v9); /*0x79cfbb*/
      v5 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79cfc0*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v5 + 1; /*0x79cfca*/
    DeleteAndZero((ObjectClass *)&v9); /*0x79cfcf*/
  }
  if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79cfe7*/
  {
    result = time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20; /*0x79d000*/
    if ( result < 5 ) /*0x79d005*/
      return result; /*0x79d005*/
    DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79d010*/
  }
  result = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79d015*/
  if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79d01c*/
  {
    if ( *(int *)&stru_B76900.needsRedraw > 0 ) /*0x79d022*/
    {
      String::Reassign((String *)&g_WindowManager.__pad_14[16], (const char **)stru_B76900.parachute); /*0x79d02f*/
      v8 = 0; /*0x79d039*/
      if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79d03d*/
      {
        if ( *(int *)&stru_B76900.needsRedraw <= 0 ) /*0x79d03f*/
          v8 = *(_DWORD *)&stru_B76900.needsRedraw - 1; /*0x79d041*/
        Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v8), 0); /*0x79d04f*/
        memcpy( /*0x79d078*/
          &stru_B76900.parachute->AnimClass_field_0x0 + v8,
          &stru_B76900.parachute->AnimClass_field_0x4 + v8,
          4 * (*(_DWORD *)&stru_B76900.needsRedraw + 0x3FFFFFFF * (v8 + 1)));
        --*(_DWORD *)&stru_B76900.needsRedraw; /*0x79d086*/
        if ( 3 * *(_DWORD *)&stru_B76900.needsRedraw <= *(int *)&stru_B76900.hasParachute ) /*0x79d095*/
          VectorClass::Shrink((VectorClass *)&stru_B76900.needsRedraw); /*0x79d09c*/
      }
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79d0a8*/
    memset(v10, 0, sizeof(v10)); /*0x79d0b8*/
    strcpy(&v10[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79d0e5*/
    return (*(unsigned int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v10); /*0x79d0f7*/
  }
  return result; /*0x79ceda*/
}



// ==== 0x0079D110  ObjectClass::SendGameListWOL  this=ObjectClass  sig=csp ====
void SendGameListWOL(ObjectClass *this)
{
  int v1; // esi
  int v2; // esi
  int v3; // ebx
  void *v4; // eax
  void *DynamicVector_field_0x8; // esi
  int v6; // ebp
  int v7; // esi
  char *v8; // eax
  int v9; // esi
  char *v10; // eax
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+2Ch] [ebp-14h]
  String v13; // [esp+34h] [ebp-Ch] BYREF
  int v14; // [esp+3Ch] [ebp-4h]

  v1 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d114*/
  if ( *(int *)g_WOL_BuddyList.__pad_0 <= 10 ) /*0x79d11d*/
  {
    if ( !*(_DWORD *)g_WOL_BuddyList.__pad_0 ) /*0x79d128*/
      return; /*0x79d128*/
  }
  else
  {
    v1 = 10; /*0x79d11f*/
  }
  unknown_libname_73(&v13); /*0x79d132*/
  if ( v1 > 0 ) /*0x79d139*/
  {
    v14 = v1; /*0x79d142*/
    do /*0x79d264*/
    {
      unknown_libname_73(&v13.m_3[1]); /*0x79d14a*/
      if ( *(int *)g_WOL_BuddyList.__pad_0 > 0 ) /*0x79d156*/
      {
        String::Reassign((String *)&v13.m_3[1], (const char **)g_WOL_BuddyList.DynamicVector_field_0x8); /*0x79d166*/
        v2 = 0; /*0x79d170*/
        if ( *(_DWORD *)g_WOL_BuddyList.__pad_0 ) /*0x79d174*/
        {
          if ( *(int *)g_WOL_BuddyList.__pad_0 <= 0 ) /*0x79d17a*/
            v2 = *(_DWORD *)g_WOL_BuddyList.__pad_0 - 1; /*0x79d17c*/
          DeleteAndZero((ObjectClass *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v2)); /*0x79d188*/
          memcpy( /*0x79d1b1*/
            (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v2),
            (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * (v2 + 1)),
            4 * (*(_DWORD *)g_WOL_BuddyList.__pad_0 + 0x3FFFFFFF * (v2 + 1)));
          --*(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d1c5*/
          if ( 3 * *(_DWORD *)g_WOL_BuddyList.__pad_0 <= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d1cf*/
          {
            v3 = *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] / 2; /*0x79d1d8*/
            if ( *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] / 2 < 10 ) /*0x79d1dd*/
              v3 = 10; /*0x79d1df*/
            if ( v3 < *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d1e6*/
            {
              v4 = (void *)__2_YAPAXI_Z(4 * v3); /*0x79d1f0*/
              DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d1f5*/
              v6 = (int)v4; /*0x79d200*/
              if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d202*/
              {
                qmemcpy( /*0x79d20c*/
                  v4,
                  (const void *)g_WOL_BuddyList.DynamicVector_field_0x8,
                  4 * *(_DWORD *)g_WOL_BuddyList.__pad_0);
                DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d20e*/
              }
              __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x79d215*/
              g_WOL_BuddyList.DynamicVector_field_0x8 = v6; /*0x79d21d*/
              *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v3; /*0x79d223*/
            }
          }
        }
      }
      if ( String::Length(&v13) ) /*0x79d22d*/
        String::Append(&v13, asc_8318B8); /*0x79d23f*/
      String::Append2(&v13, (char **)&v13.m_3[1]); /*0x79d24d*/
      DeleteAndZero((ObjectClass *)&v13.m_3[1]); /*0x79d256*/
      --v14; /*0x79d260*/
    }
    while ( v14 ); /*0x79d264*/
  }
  v7 = *(_DWORD *)g_UIPointerTable; /*0x79d27c*/
  v11 = g_NetworkRematchState & 0xFFFF00; /*0x79d285*/
  v8 = String::GetOrEmpty(&v13); /*0x79d28a*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int, int, _DWORD, _DWORD))(v7 + 20))( /*0x79d2a3*/
    g_UIPointerTable,
    stru_B76188.__pad_20,
    g_WOL_GameConfig,
    v8,
    v11,
    -1,
    0,
    0);
  v9 = *(_DWORD *)g_UIPointerTable; /*0x79d2b7*/
  v12 = g_NetworkRematchState & 0xFFFF00; /*0x79d2b9*/
  v10 = String::GetOrEmpty(&v13); /*0x79d2be*/
  (*(void (__stdcall **)(LPVOID, char *, int, char *, int))(v9 + 56))( /*0x79d2d6*/
    g_UIPointerTable,
    stru_B76188.__pad_20,
    g_WOL_GameConfig,
    v10,
    v12);
  DeleteAndZero((ObjectClass *)&v13); /*0x79d2dd*/
}



// ==== 0x0079D2F0  ObjectClass::RefreshGameListWOL  this=ObjectClass  sig=csp ====
void RefreshGameListWOL(ObjectClass *this)
{
  int i; // esi
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ebp
  void *v6; // ebx
  void *DynamicVector_field_0x8; // eax
  int v8; // ebp
  void *v9; // ebx
  void *v10; // eax
  String *v11; // ecx
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+8h] [ebp-Ch]
  String v14; // [esp+Ch] [ebp-8h] BYREF

  for ( i = 0; i < *(int *)g_WOL_BuddyList.__pad_0; ++i ) /*0x79d2fe*/
    DeleteAndZero((ObjectClass *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * i)); /*0x79d308*/
  v2 = 0; /*0x79d31c*/
  *(_DWORD *)g_WOL_BuddyList.__pad_0 = 0; /*0x79d320*/
  for ( *(_DWORD *)&v14.m_3[1] = 0; v2 < *(int *)g_WindowManager.__pad_0; *(_DWORD *)&v14.m_3[1] = v2 ) /*0x79d32e*/
  {
    unknown_libname_73(&v14); /*0x79d33a*/
    if ( v2 >= 0 && v2 < *(int *)g_WindowManager.__pad_0 ) /*0x79d349*/
      String::Reassign(&v14, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v2)); /*0x79d359*/
    v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d35e*/
    v4 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d363*/
    v13 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d367*/
    v5 = *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3]; /*0x79d371*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79d379*/
    {
      v5 = 2 * *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d383*/
      if ( 2 * *(_DWORD *)g_WOL_BuddyList.__pad_0 < 10 ) /*0x79d389*/
        v5 = 10; /*0x79d38b*/
      v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x79d39f*/
      memset(v6, 0, 4 * ((unsigned int)(4 * v5) >> 2)); /*0x79d3ad*/
      DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d3b6*/
      if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d3bd*/
      {
        qmemcpy(v6, (const void *)g_WOL_BuddyList.DynamicVector_field_0x8, 4 * *(_DWORD *)g_WOL_BuddyList.__pad_0); /*0x79d3c9*/
        DynamicVector_field_0x8 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d3cb*/
        v4 = v13; /*0x79d3d0*/
      }
      __3_YAXPAX_Z(DynamicVector_field_0x8); /*0x79d3d5*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d3da*/
      v2 = *(_DWORD *)&v14.m_3[1]; /*0x79d3df*/
      g_WOL_BuddyList.DynamicVector_field_0x8 = (int)v6; /*0x79d3e6*/
      *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v5; /*0x79d3ec*/
    }
    if ( v3 >= v5 ) /*0x79d3f4*/
    {
      v8 = 2 * v3; /*0x79d3f6*/
      if ( 2 * v3 < 10 ) /*0x79d3fc*/
        v8 = 10; /*0x79d3fe*/
      v9 = (void *)__2_YAPAXI_Z(4 * v8); /*0x79d412*/
      memset(v9, 0, 4 * ((unsigned int)(4 * v8) >> 2)); /*0x79d420*/
      v10 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d429*/
      if ( g_WOL_BuddyList.DynamicVector_field_0x8 ) /*0x79d430*/
      {
        qmemcpy(v9, (const void *)g_WOL_BuddyList.DynamicVector_field_0x8, 4 * *(_DWORD *)g_WOL_BuddyList.__pad_0); /*0x79d43c*/
        v10 = (void *)g_WOL_BuddyList.DynamicVector_field_0x8; /*0x79d43e*/
        v4 = v13; /*0x79d443*/
      }
      __3_YAXPAX_Z(v10); /*0x79d448*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d44d*/
      v2 = *(_DWORD *)&v14.m_3[1]; /*0x79d452*/
      g_WOL_BuddyList.DynamicVector_field_0x8 = (int)v9; /*0x79d459*/
      *(_DWORD *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] = v8; /*0x79d45f*/
    }
    if ( v4 < v3 ) /*0x79d467*/
    {
      memcpy( /*0x79d484*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4),
        4 * (v3 + 0x3FFFFFFF * v4));
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d489*/
    }
    v11 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v4); /*0x79d497*/
    if ( v11 ) /*0x79d49c*/
    {
      String::AssignFromPtr(v11, (const char **)&v14); /*0x79d4a3*/
      v3 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79d4a8*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v3 + 1; /*0x79d4b2*/
    DeleteAndZero((ObjectClass *)&v14); /*0x79d4b7*/
    ++v2; /*0x79d4c1*/
  }
  SendGameListWOL(v12); /*0x79d4d0*/
}



// ==== 0x0079D4E0  ObjectClass::CleanupWOLSession  this=ObjectClass  sig=csp ====
void CleanupWOLSession(ObjectClass *this)
{
  int i; // esi
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  ObjectClass *v5; // esi
  ObjectClass *v6; // edi
  unsigned int occupant; // eax
  unsigned int j; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v10; // edi
  int k; // esi
  int v12; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]
  char *v14; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < *(int *)g_WindowManager.__pad_0; ++i ) /*0x79d4ee*/
    DeleteAndZero((ObjectClass *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * i)); /*0x79d4f8*/
  v2 = 0; /*0x79d50c*/
  for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v2 < *(int *)&stru_B76900.needsRedraw; ++v2 ) /*0x79d516*/
    DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + v2)); /*0x79d521*/
  v3 = *(_DWORD *)&stru_B76900.isInLogic; /*0x79d530*/
  v4 = 0; /*0x79d536*/
  for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79d541*/
        v4 < *(_DWORD *)&stru_B76900.isInLogic;
        v3 = *(_DWORD *)&stru_B76900.isInLogic )
  {
    v5 = *(ObjectClass **)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v4); /*0x79d549*/
    while ( v5 ) /*0x79d54e*/
    {
      v6 = v5; /*0x79d550*/
      v5 = (ObjectClass *)v5->?; /*0x79d552*/
      DeleteAndZero(v6); /*0x79d55b*/
      __3_YAXPAX_Z(v6); /*0x79d561*/
    }
    ++v4; /*0x79d572*/
    *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag + 4 * v4 - 4) = 0; /*0x79d573*/
  }
  stru_B76900.lastLayer = 0; /*0x79d586*/
  if ( v3 > dword_B769C0 ) /*0x79d58e*/
  {
    do /*0x79d5af*/
    {
      if ( LOBYTE(stru_B76900.location[2]) ) /*0x79d596*/
        break; /*0x79d596*/
      RemoveWOLPlayerLogin_Remove((ObjectClass *)&stru_B76900.isAliveFlag); /*0x79d59d*/
    }
    while ( *(_DWORD *)&stru_B76900.isInLogic > (unsigned int)dword_B769C0 ); /*0x79d5af*/
  }
  occupant = stru_B765EC.occupant; /*0x79d5b1*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79d5ba*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.? + 4 * j); /*0x79d5c2*/
    while ( customSound ) /*0x79d5c7*/
    {
      v10 = customSound; /*0x79d5c9*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x79d5cb*/
      DeleteAndZero(v10); /*0x79d5d7*/
      __3_YAXPAX_Z(v10); /*0x79d5dd*/
    }
    ++j; /*0x79d5ee*/
    *(_DWORD *)(stru_B765EC.? + 4 * j - 4) = 0; /*0x79d5ef*/
  }
  stru_B765EC.? = 0; /*0x79d605*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79d60c*/
  {
    do /*0x79d62d*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x79d614*/
        break; /*0x79d614*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x79d61b*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79d62d*/
  }
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79d637*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79d657*/
  {
    dword_B778C8 = time(0); /*0x79d66d*/
    if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79d673*/
    {
      SetEvent(hEvent); /*0x79d682*/
      RefreshGameListWOL(v13); /*0x79d688*/
      return; /*0x79d690*/
    }
    for ( k = 0; k < *(int *)&stru_B76900.needsRedraw; ++k ) /*0x79d69a*/
      Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + k), 0); /*0x79d6a6*/
    v12 = 0; /*0x79d6ba*/
    for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v12 < *(int *)g_WindowManager.__pad_0; ++v12 ) /*0x79d6c4*/
    {
      unknown_libname_73(&v14); /*0x79d6ca*/
      DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, &v14, v12); /*0x79d6da*/
      StringVector::Insert( /*0x79d6ef*/
        (StringVector *)&stru_B76900.needsRedraw,
        (const char **)&v14,
        *(int *)&stru_B76900.needsRedraw);
      DeleteAndZero((ObjectClass *)&v14); /*0x79d6f8*/
    }
    Network_Cleanup(v13); /*0x79d707*/
  }
  RefreshGameListWOL(v13); /*0x79d70c*/
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
String *__fastcall ExtractChatCommand(String *a1, HWND a2)
{
  LRESULT v4; // esi
  wchar_t *v6; // [esp+10h] [ebp-4h] BYREF

  v4 = SendMessageA(a2, 0x188u, 0, 0); /*0x79daab*/
  if ( v4 == -1 ) /*0x79dab0*/
    v4 = 0; /*0x79dab2*/
  if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79dac2*/
  {
LABEL_7:
    String::AssignFromPtr(a1, (const char **)&g_WOL_LoginObject); /*0x79db15*/
    return a1; /*0x79db21*/
  }
  else
  {
    while ( 1 ) /*0x79dac8*/
    {
      unknown_libname_74(&v6); /*0x79dac8*/
      UI_Assign_623F60(a2, v4, (void **)&v6); /*0x79dad6*/
      if ( (unsigned __int16)WideString::GetChar((const wchar_t **)&v6, 0) == 40 ) /*0x79daea*/
      {
        if ( UI_Helper_7B7980((ObjectClass *)&v6, 0x29u) ) /*0x79daf2*/
          break; /*0x79daf2*/
      }
      ++v4; /*0x79daff*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db00*/
      if ( v4 >= SendMessageA(a2, 0x18Bu, 0, 0) ) /*0x79db13*/
        goto LABEL_7; /*0x79db13*/
    }
    WideString::RemoveChar((const wchar_t **)&v6, 0x28u); /*0x79db2f*/
    ToWideStringCharAlt((char **)a1, (const wchar_t **)&v6); /*0x79db3a*/
    DeleteAndZero::Alt((DeleteAndZero *)&v6); /*0x79db43*/
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
      if ( dword_887640 ) /*0x79dc97*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 20))(dword_887640); /*0x79dc9f*/
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
    Dialog::ShowMessage(61680, (size_t)g_Str_Fmt_Hs_S_Bracket, dword_B73E40, v20); /*0x79df7b*/
  }
  EnableWindow(a4, 0); /*0x79df86*/
  InvalidateRect(v16, 0, 0); /*0x79df91*/
  DeleteAndZero(&v23); /*0x79df9b*/
  DeleteAndZero::Alt(&v22); /*0x79dfa4*/
  return 0; /*0x79dba7*/
}



// ==== 0x0079DFE0  GameSetupDlgProcWOL  this=-  sig=csp ====
int __stdcall GameSetupDlgProcWOL(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  HWND v6; // ebx
  char *v7; // eax
  int v8; // eax
  int v9; // esi
  String *v10; // ecx
  int v11; // eax
  int v12; // esi
  String *v13; // ecx
  int v14; // eax
  int v15; // esi
  String *v16; // ecx
  HWND v17; // eax
  HWND v18; // eax
  HWND DlgItem; // esi
  HWND v20; // eax
  DeleteAndZero v21; // [esp+0h] [ebp-F8h]
  int v22; // [esp+0h] [ebp-F8h]
  ObjectClass *v23; // [esp+4h] [ebp-F4h]
  _BYTE v24[228]; // [esp+14h] [ebp-E4h] BYREF

  if ( a2 == 272 && a4 ) /*0x79e009*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e012*/
  *(_DWORD *)v21.__pad_0 = a4; /*0x79e01f*/
  result = BaseDialogProc(hWnd, a2, a3, v21); /*0x79e025*/
  if ( !result ) /*0x79e02c*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x79e03b*/
    *(_DWORD *)&v24[8] = WindowLongA; /*0x79e043*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e07d*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e084*/
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
        unknown_libname_73(v24); /*0x79e438*/
        GetDialogText(a4, (String *)v24); /*0x79e443*/
        v22 = (unsigned __int8)MapSeed::CheckName((MapSeed *)v24); /*0x79e456*/
        v17 = GetDlgItem(hWnd, 1794); /*0x79e45d*/
        EnableWindow(v17, v22); /*0x79e464*/
        DeleteAndZero((ObjectClass *)v24); /*0x79e46e*/
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
    unknown_libname_73(&v24[4]); /*0x79e0ce*/
    v6 = GetDlgItem(hWnd, 1344); /*0x79e0df*/
    GetDialogText(v6, (String *)&v24[4]); /*0x79e0e7*/
    SendMessageA(v6, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x79e0f9*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) /*0x79e114*/
      || !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) )
    {
LABEL_52:
      InvalidateRect(v6, 0, 0); /*0x79e3df*/
      (*(void (__thiscall **)(_DWORD, HWND, int))(**(_DWORD **)&v24[8] + 4))(*(_DWORD *)&v24[8], hWnd, 1794); /*0x79e3f6*/
      DeleteAndZero((ObjectClass *)&v24[4]); /*0x79e3fd*/
      return 0; /*0x79e40e*/
    }
    memset(&v24[12], 0, 0x6Cu); /*0x79e12e*/
    v7 = String::GetOrEmpty_Alt((String *)&v24[4]); /*0x79e134*/
    strncpy(&v24[48], v7, 9u); /*0x79e13f*/
    (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 224))(ppv, &v24[12]); /*0x79e154*/
    if ( !(unsigned __int8)MapSeed::CheckName((MapSeed *)&v24[4]) ) /*0x79e165*/
    {
LABEL_51:
      SendGameListWOL(v23); /*0x79e3da*/
      goto LABEL_52; /*0x79e3da*/
    }
    String::AssignFromPtr((String *)v24, (const char **)&v24[4]); /*0x79e174*/
    v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e179*/
    v9 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e17e*/
    if ( *(int *)g_WindowManager.__pad_0 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79e18a*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e191*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e196*/
    }
    if ( v8 >= (int)g_WindowManager.Array_field_0x4 ) /*0x79e1a1*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&g_WindowManager); /*0x79e1a8*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1ad*/
    }
    if ( v9 < v8 ) /*0x79e1b4*/
    {
      memcpy( /*0x79e1d1*/
        (void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9 + 4),
        (const void *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9),
        4 * (v8 + 0x3FFFFFFF * v9));
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1d6*/
    }
    v10 = (String *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9); /*0x79e1e4*/
    if ( v10 ) /*0x79e1e9*/
    {
      String::AssignFromPtr(v10, (const char **)v24); /*0x79e1f0*/
      v8 = *(_DWORD *)g_WindowManager.__pad_0; /*0x79e1f5*/
    }
    *(_DWORD *)g_WindowManager.__pad_0 = v8 + 1; /*0x79e1fb*/
    v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e200*/
    v12 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e205*/
    if ( *(int *)&stru_B76900.needsRedraw >= *(int *)&stru_B76900.hasParachute ) /*0x79e211*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e218*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e21d*/
    }
    if ( v11 >= *(int *)&stru_B76900.hasParachute ) /*0x79e228*/
    {
      DynamicVector::EnsureCapacity((DynamicVector *)&stru_B76900.needsRedraw); /*0x79e22f*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e234*/
    }
    if ( v12 < v11 ) /*0x79e23b*/
    {
      memcpy( /*0x79e258*/
        &stru_B76900.parachute->AnimClass_field_0x4 + v12,
        &stru_B76900.parachute->AnimClass_field_0x0 + v12,
        4 * (v11 + 0x3FFFFFFF * v12));
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e25d*/
    }
    v13 = (String *)(&stru_B76900.parachute->AnimClass_field_0x0 + v12); /*0x79e26b*/
    if ( v13 ) /*0x79e270*/
    {
      String::AssignFromPtr(v13, (const char **)v24); /*0x79e277*/
      v11 = *(_DWORD *)&stru_B76900.needsRedraw; /*0x79e27c*/
    }
    *(_DWORD *)&stru_B76900.needsRedraw = v11 + 1; /*0x79e282*/
    v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e287*/
    v15 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e28c*/
    if ( *(int *)g_WOL_BuddyList.__pad_0 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79e298*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e29f*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2a4*/
    }
    if ( v14 >= *(int *)&g_WOL_BuddyList.DynamicVector_field_0x1[3] ) /*0x79e2af*/
    {
      DynamicVector::EnsureCapacity(&g_WOL_BuddyList); /*0x79e2b6*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2bb*/
    }
    if ( v15 < v14 ) /*0x79e2c2*/
    {
      memcpy( /*0x79e2df*/
        (void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15 + 4),
        (const void *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15),
        4 * (v14 + 0x3FFFFFFF * v15));
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e2e4*/
    }
    v16 = (String *)(g_WOL_BuddyList.DynamicVector_field_0x8 + 4 * v15); /*0x79e2f2*/
    if ( v16 ) /*0x79e2f7*/
    {
      String::AssignFromPtr(v16, (const char **)v24); /*0x79e2fe*/
      v14 = *(_DWORD *)g_WOL_BuddyList.__pad_0; /*0x79e303*/
    }
    *(_DWORD *)g_WOL_BuddyList.__pad_0 = v14 + 1; /*0x79e30e*/
    if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79e313*/
    {
      if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79e331*/
      {
LABEL_50:
        DeleteAndZero((ObjectClass *)v24); /*0x79e3d1*/
        goto LABEL_51; /*0x79e3d5*/
      }
      DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79e33c*/
    }
    if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79e348*/
    {
      if ( (unsigned __int8)DynamicStringArray::Get( /*0x79e35a*/
                              (DynamicStringArray *)&stru_B76900.needsRedraw,
                              (char **)&g_WindowManager.__pad_14[16],
                              0) )
        DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e36a*/
      *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79e376*/
      memset(&v24[120], 0, 0x6Cu); /*0x79e389*/
      strcpy(&v24[156], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79e3bc*/
      (*(void (__stdcall **)(LPVOID, _BYTE *))(*(_DWORD *)ppv + 96))(ppv, &v24[120]); /*0x79e3ce*/
    }
    goto LABEL_50; /*0x79e3ce*/
  }
  return result; /*0x79e069*/
}



// ==== 0x0079E520  PlayerOptionsDlgProcWOL  this=-  sig=csp ====
int __stdcall PlayerOptionsDlgProcWOL(HWND hWnd, unsigned int a2, UINT_PTR uIDEvent, HWND a4)
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
  Dialog *DialogIndirect; // esi
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
  DeleteAndZero v34; // [esp-4h] [ebp-90h]
  BOOL v35; // [esp-4h] [ebp-90h]
  BOOL v36; // [esp-4h] [ebp-90h]
  BOOL BuddyWOL; // [esp-4h] [ebp-90h]
  ObjectClass *v38; // [esp+0h] [ebp-8Ch]
  String v39; // [esp+10h] [ebp-7Ch] BYREF
  char v40[108]; // [esp+20h] [ebp-6Ch] BYREF

  if ( a2 == 272 && a4 ) /*0x79e546*/
    SetWindowLongA(hWnd, 8, *((_DWORD *)a4 + 1)); /*0x79e54f*/
  *(_DWORD *)v34.__pad_0 = a4; /*0x79e55c*/
  result = BaseDialogProc(hWnd, a2, uIDEvent, v34); /*0x79e562*/
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
          Dialog::DrawBackground((Dialog *)hWnd); /*0x79e5a9*/
          Dialog::StopBink((Dialog *)hWnd); /*0x79e5b0*/
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
              SimpleDialogControl::Constructor((SimpleDialogControl *)&v39.m_3[1]); /*0x79edc9*/
              *(_DWORD *)&v39.m_3[1] = &off_7F7624; /*0x79ede2*/
              RunDialog( /*0x79ede6*/
                0x115u,
                (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDlgProcWOL,
                (LPARAM)&v39.m_3[1]);
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79eded*/
              *(_DWORD *)&v39.m_3[1] = &off_7F7624; /*0x79edf6*/
              OwnerDrawControl::InitVtable((OwnerDrawControl *)&v39.m_3[1]); /*0x79edfa*/
              return 0; /*0x79ee08*/
            case 1795: /*0x79ed73*/
              DlgItem = GetDlgItem(hWnd, 1673); /*0x79ee1f*/
              v31 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x79ee2b*/
              if ( v31 == -1 ) /*0x79ee30*/
                return 0; /*0x79ee30*/
              unknown_libname_73(&v39); /*0x79ee3a*/
              GetListBoxItemText(DlgItem, v31, (void **)&v39); /*0x79ee48*/
              RemoveWOLPlayerLogin((const char **)&v39); /*0x79ee51*/
              SendMessageA(DlgItem, 0x182u, v31, 0); /*0x79ee5f*/
              DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ee66*/
              FillBuddyListWOL((ObjectClass *)hWnd); /*0x79ee6d*/
              DeleteAndZero((ObjectClass *)&v39); /*0x79ee76*/
              return 0; /*0x79ee84*/
            case 1796: /*0x79ed73*/
              EnableWindow(a4, 0); /*0x79ee91*/
              dword_B778C8 = time(0); /*0x79eea8*/
              if ( !RequestChannelListExWOL(41, 1u, 0) ) /*0x79eeaf*/
              {
                SetEvent(hEvent); /*0x79eebf*/
                goto LABEL_116; /*0x79eec5*/
              }
              for ( i = 0; i < *(int *)&stru_B76900.needsRedraw; ++i ) /*0x79eed3*/
                DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + i)); /*0x79eede*/
              v33 = 0; /*0x79eef2*/
              for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v33 < *(int *)g_WindowManager.__pad_0; ++v33 ) /*0x79ef00*/
              {
                unknown_libname_73(&v39); /*0x79ef06*/
                if ( v33 >= 0 && v33 < *(int *)g_WindowManager.__pad_0 ) /*0x79ef15*/
                  String::Reassign(&v39, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v33)); /*0x79ef24*/
                StringVector::Insert( /*0x79ef3a*/
                  (StringVector *)&stru_B76900.needsRedraw,
                  (const char **)&v39,
                  *(int *)&stru_B76900.needsRedraw);
                DeleteAndZero((ObjectClass *)&v39); /*0x79ef43*/
              }
              if ( !String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79ef5e*/
                goto LABEL_112; /*0x79ef5e*/
              if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) >= 5 ) /*0x79ef75*/
              {
                DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79ef80*/
LABEL_112:
                if ( *(_DWORD *)&stru_B76900.needsRedraw ) /*0x79ef8c*/
                {
                  if ( (unsigned __int8)DynamicStringArray::Get( /*0x79ef9a*/
                                          (DynamicStringArray *)&stru_B76900.needsRedraw,
                                          (char **)&g_WindowManager.__pad_14[16],
                                          0) )
                    DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79efaa*/
                  *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79efb6*/
                  memset(v40, 0, sizeof(v40)); /*0x79efc6*/
                  strcpy(&v40[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79eff3*/
                  (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v40); /*0x79f005*/
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
                  unknown_libname_73(&v39); /*0x79ea99*/
                  GetDialogText(a4, &v39); /*0x79eaa9*/
                  v35 = String::Length(&v39) != 0; /*0x79eabd*/
                  v17 = GetDlgItem(hWnd, 1794); /*0x79eac4*/
                  EnableWindow(v17, v35); /*0x79eacb*/
                  DeleteAndZero((ObjectClass *)&v39); /*0x79ead5*/
                  return 0; /*0x79eae3*/
                }
                break;
              case 0x5C2u: /*0x79ea0b*/
                DialogIndirect = (Dialog *)CreateDialogIndirect( /*0x79ea41*/
                                             g_hInstance,
                                             (HWND)0x11E,
                                             g_hWnd,
                                             (DLGPROC)ChatDialog::DlgProc,
                                             0);
                SetupDialog(DialogIndirect, 286); /*0x79ea4a*/
                SendMessageA((HWND)DialogIndirect, 0x4A9u, 0, 1); /*0x79ea59*/
                ShowWindow((HWND)DialogIndirect, 1); /*0x79ea62*/
                MessageDialogLoopAlt((HWND)DialogIndirect, (unsigned __int8 (*)(void))Game::ProcessIdle, 0, 1, 1); /*0x79ea75*/
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
            if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79eb88*/
            {
              if ( stru_B76900.lastLayer ) /*0x79eb9c*/
              {
                v19 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79ebc2*/
                                + 4
                                * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                                 & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
                if ( v19 ) /*0x79ebc7*/
                {
                  while ( !(unsigned __int8)String::Compare((String *)v19, (const char **)&g_WOL_LoginObject) ) /*0x79ebdb*/
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
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WOL_LoginObject); /*0x79ec5b*/
        else
          GetListBoxItemText(a4, v22, &g_WOL_LoginObject.AbstractClass); /*0x79ec6b*/
        v36 = String::Length((String *)&g_WOL_LoginObject) != 0; /*0x79ec88*/
        v23 = GetDlgItem(hWnd, 1795); /*0x79ec8f*/
        EnableWindow(v23, v36); /*0x79ec98*/
        BuddyWOL = FindBuddyWOL(); /*0x79eca4*/
        v24 = GetDlgItem(hWnd, 1581); /*0x79ecab*/
        EnableWindow(v24, BuddyWOL); /*0x79ecae*/
        if ( String::Length((String *)&g_WOL_LoginObject) ) /*0x79ecb5*/
        {
          if ( !stru_B76900.lastLayer ) /*0x79eccb*/
            goto LABEL_88; /*0x79eccb*/
          v25 = *(_DWORD *)(*(_DWORD *)&stru_B76900.isAliveFlag /*0x79eced*/
                          + 4
                          * (((int (__thiscall *)(ObjectClass *))stru_B76900.lineTrailer)(&g_WOL_LoginObject)
                           & ((1 << SLOBYTE(stru_B76900.location[0])) - 1)));
          if ( !v25 ) /*0x79ecf2*/
            goto LABEL_88; /*0x79ecf2*/
          while ( !(unsigned __int8)String::Compare((String *)v25, (const char **)&g_WOL_LoginObject) ) /*0x79ed02*/
          {
            v25 = *(_DWORD *)(v25 + 8); /*0x79ed04*/
            if ( !v25 ) /*0x79ed09*/
            {
              v39.__pad_0[0] = 0; /*0x79ed0b*/
              goto LABEL_90; /*0x79ed10*/
            }
          }
          v26 = (_DWORD *)(v25 + 4); /*0x79ed16*/
          if ( v26 && *v26 > 2u ) /*0x79ed21*/
            v39.__pad_0[0] = 1; /*0x79ed2f*/
          else
LABEL_88:
            v39.__pad_0[0] = 0; /*0x79ed28*/
        }
        else
        {
          v39.__pad_0[0] = 0; /*0x79ecbe*/
        }
LABEL_90:
        v27 = GetDlgItem(hWnd, 1474); /*0x79ed34*/
        EnableWindow(v27, (unsigned __int8)v39.__pad_0[0]); /*0x79ed48*/
        ShowUserProfileWOL((ObjectClass *)hWnd); /*0x79ed4c*/
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
        for ( j = 0; j < *(int *)&stru_B76900.needsRedraw; ++j ) /*0x79e893*/
          DeleteAndZero((ObjectClass *)(&stru_B76900.parachute->AnimClass_field_0x0 + j)); /*0x79e89e*/
        v15 = 0; /*0x79e8b2*/
        for ( *(_DWORD *)&stru_B76900.needsRedraw = 0; v15 < *(int *)g_WindowManager.__pad_0; ++v15 ) /*0x79e8c0*/
        {
          unknown_libname_73(&v39); /*0x79e8c6*/
          if ( v15 >= 0 && v15 < *(int *)g_WindowManager.__pad_0 ) /*0x79e8d5*/
            String::Reassign(&v39, (const char **)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v15)); /*0x79e8e5*/
          StringVector::Insert( /*0x79e8fb*/
            (StringVector *)&stru_B76900.needsRedraw,
            (const char **)&v39,
            *(int *)&stru_B76900.needsRedraw);
          DeleteAndZero((ObjectClass *)&v39); /*0x79e904*/
        }
        if ( String::Length((String *)&g_WindowManager.__pad_14[16]) ) /*0x79e918*/
        {
          if ( (unsigned int)(time(0) - *(_DWORD *)g_WOL_BuddyList.__pad_20) < 5 ) /*0x79e936*/
            return 0; /*0x79e936*/
          DeleteAndZero::Alt2((DeleteAndZero *)&g_WindowManager.__pad_14[16]); /*0x79e941*/
        }
        if ( !*(_DWORD *)&stru_B76900.needsRedraw ) /*0x79e94d*/
          return 0; /*0x79e94d*/
        if ( (unsigned __int8)DynamicStringArray::Get( /*0x79e95f*/
                                (DynamicStringArray *)&stru_B76900.needsRedraw,
                                (char **)&g_WindowManager.__pad_14[16],
                                0) )
          DynamicArray::Remove((DynamicArray *)&stru_B76900.needsRedraw, 0); /*0x79e96f*/
        *(_DWORD *)g_WOL_BuddyList.__pad_20 = time(0); /*0x79e97b*/
        memset(v40, 0, sizeof(v40)); /*0x79e98b*/
        strcpy(&v40[36], String::GetOrEmpty((String *)&g_WindowManager.__pad_14[16])); /*0x79e9b8*/
        (*(void (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 96))(ppv, v40); /*0x79e9ca*/
        return 0; /*0x79e9d0*/
      case 0x497u: /*0x79e612*/
        Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x79e62f*/
        v6 = GetDlgItem(hWnd, 1673); /*0x79e655*/
        SendMessageA(v6, 0x4A6u, (WPARAM)stru_B765EC.?, dword_84A1C4); /*0x79e65e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1C8); /*0x79e66e*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1CC); /*0x79e67f*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D0); /*0x79e690*/
        SendMessageA(v6, 0x4A6u, *(WPARAM *)&g_WindowManager.__pad_EC[680], dword_84A1D4); /*0x79e6a5*/
        SendMessageA(v6, 0x4A6u, 0, dword_84A1D8); /*0x79e6b6*/
        v7 = GetDlgItem(hWnd, 1796); /*0x79e6cc*/
        v8 = HashTable::Find(&g_DialogHashTable, g_Str_File_wouref_pcx, 0); /*0x79e6ce*/
        SendMessageA(v7, 0x49Cu, 0, v8); /*0x79e6dc*/
        v9 = HashTable::Find(&g_DialogHashTable, g_Str_File_wodref_pcx, 0); /*0x79e6ea*/
        SendMessageA(v7, 0x4AAu, 0, v9); /*0x79e6f8*/
        for ( k = 0; k < *(int *)g_WindowManager.__pad_0; ++k ) /*0x79e703*/
          Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * k), 0); /*0x79e70f*/
        v11 = 0; /*0x79e725*/
        for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v11 < *(int *)&stru_B76900.needsRedraw; ++v11 ) /*0x79e72f*/
          Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v11), 0); /*0x79e73b*/
        *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79e74f*/
        HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79e755*/
        HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x79e75f*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79e76c*/
        if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79e784*/
          RefreshChannelListWOL(v38); /*0x79e786*/
        Array::CleanupArrayWOL((Array *)&g_WOL_BuddyList); /*0x79e790*/
        for ( m = 0; m < *(int *)g_WindowManager.__pad_0; ++m ) /*0x79e79e*/
        {
          unknown_libname_73(&v39); /*0x79e7a4*/
          DynamicStringArray::Get((DynamicStringArray *)&g_WindowManager, (char **)&v39, m); /*0x79e7b4*/
          StringVector::Insert((StringVector *)&g_WOL_BuddyList, (const char **)&v39, *(int *)g_WOL_BuddyList.__pad_0); /*0x79e7ca*/
          DeleteAndZero((ObjectClass *)&v39); /*0x79e7d3*/
        }
        SendGameListWOL(v38); /*0x79e7e2*/
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
int GameOptionsScreenWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  int i; // esi
  TechnoTypeClass *v4; // ecx
  HWND v5; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  unsigned int occupant; // eax
  unsigned int j; // ebx
  ObjectClass *customSound; // esi
  ObjectClass *v11; // edi
  DWORD (__stdcall *v12)(DWORD, const HANDLE *, BOOL, DWORD); // ebx
  HANDLE *v13; // esi
  Dialog *Dialog; // edi
  DWORD m; // esi
  TechnoTypeClass *v16; // ecx
  TechnoTypeClass *v17; // ecx
  HANDLE *v18; // esi
  TechnoTypeClass *v19; // ecx
  DWORD v20; // esi
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HANDLE *v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // ebp
  int referenceCount; // eax
  char *v29; // eax
  HANDLE *v30; // esi
  int v31; // eax
  int v32; // ebx
  char *v33; // eax
  char v34; // al
  TechnoTypeClass *v35; // ecx
  DWORD k; // esi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  wchar_t *v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  HWND v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebp
  ObjectClass *v48; // [esp+0h] [ebp-23Ch]
  int v49; // [esp+10h] [ebp-22Ch] BYREF
  OwnerDrawControl v50; // [esp+14h] [ebp-228h] BYREF
  _BYTE v51[272]; // [esp+20h] [ebp-21Ch] BYREF
  char v52[268]; // [esp+130h] [ebp-10Ch] BYREF

  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f146*/
  g_NetworkLobbyState = 0; /*0x79f153*/
  Network::Init(); /*0x79f159*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79f166*/
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
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x79f1c2*/
  {
    Debug::Log(); /*0x79f1d9*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f1e9*/
    StringCSF = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x79f1fd*/
    WideString::Assign((wchar_t **)v51, StringCSF); /*0x79f207*/
    ShowUIMessage(64, (wchar_t **)v51, 1); /*0x79f217*/
    DeleteAndZero::Alt((DeleteAndZero *)v51); /*0x79f220*/
    for ( i = 0; stru_B77D80.HashTable_field_0x50; ++i ) /*0x79f22e*/
    {
      if ( i >= 150 ) /*0x79f23c*/
        break; /*0x79f23c*/
      Sleep(0x64u); /*0x79f240*/
      Game::ProcessIdle(v4); /*0x79f242*/
    }
    v5 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f256*/
    if ( v5 ) /*0x79f25d*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x79f268*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x79f26e*/
        CloseDialog(v5, 0); /*0x79f274*/
    }
    Current = (HWND)Dialog::GetCurrent(); /*0x79f279*/
    DlgItem = GetDlgItem(Current, 1344); /*0x79f284*/
    if ( DlgItem ) /*0x79f28c*/
      SetFocus(DlgItem); /*0x79f28f*/
  }
  occupant = stru_B765EC.occupant; /*0x79f295*/
  for ( j = 0; j < stru_B765EC.occupant; occupant = stru_B765EC.occupant ) /*0x79f29e*/
  {
    customSound = *(ObjectClass **)(stru_B765EC.? + 4 * j); /*0x79f2a5*/
    while ( customSound ) /*0x79f2aa*/
    {
      v11 = customSound; /*0x79f2ac*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x79f2ae*/
      DeleteAndZero(v11); /*0x79f2ba*/
      __3_YAXPAX_Z(v11); /*0x79f2c0*/
    }
    ++j; /*0x79f2d2*/
    *(_DWORD *)(stru_B765EC.? + 4 * j - 4) = 0; /*0x79f2d3*/
  }
  stru_B765EC.? = 0; /*0x79f2e6*/
  if ( occupant > stru_B765EC.ambientSoundController[4] ) /*0x79f2ee*/
  {
    do /*0x79f310*/
    {
      if ( LOBYTE(stru_B765EC.nextObject) ) /*0x79f2f7*/
        break; /*0x79f2f7*/
      HashTable::Shrink((HashTable *)&stru_B765EC.?); /*0x79f2fe*/
    }
    while ( stru_B765EC.occupant > (unsigned int)stru_B765EC.ambientSoundController[4] ); /*0x79f310*/
  }
  v12 = WaitForMultipleObjects; /*0x79f312*/
  while ( 1 ) /*0x79f31e*/
  {
    GameOptionsScreenWOL_Load(); /*0x79f31e*/
    SimpleDialogControl::Constructor((SimpleDialogControl *)&v50); /*0x79f327*/
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f32c*/
    v13 = &Handles; /*0x79f334*/
    do /*0x79f347*/
      ResetEvent(*v13++); /*0x79f33c*/
    while ( (int)v13 < (int)g_WOL_RequestObject ); /*0x79f347*/
    Dialog = (Dialog *)CreateDialog( /*0x79f35d*/
                         0x116u,
                         (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))PlayerOptionsDlgProcWOL,
                         (LPARAM)&v50);
    Dialog::Show(Dialog); /*0x79f361*/
    if ( !(unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f36a*/
      break; /*0x79f36a*/
LABEL_33:
    Dialog::Destroy(Dialog); /*0x79f3e6*/
    GameOptionsScreenWOL_Destroy(v48); /*0x79f3eb*/
    switch ( ObjectClass::GetMember01(&v50) ) /*0x79f411*/
    {
      case 1472: /*0x79f411*/
      case 1670: /*0x79f411*/
        if ( dword_A8B248 != 4 ) /*0x79fb0d*/
          goto LABEL_143; /*0x79fb0d*/
        goto LABEL_142; /*0x79fb0d*/
      case 1579: /*0x79f411*/
        v18 = &Handles; /*0x79f41e*/
        do /*0x79f431*/
          ResetEvent(*v18++); /*0x79f426*/
        while ( (int)v18 < (int)g_WOL_RequestObject ); /*0x79f431*/
        if ( CreateGameWOL(v48, (int)v18) ) /*0x79f433*/
        {
          g_WOL_ChannelLeaveState = 0; /*0x79f44e*/
          while ( 1 ) /*0x79f475*/
          {
            do /*0x79f475*/
            {
              v20 = v12(0x12u, &Handles, 0, 0x14u); /*0x79f460*/
              if ( v20 != 258 ) /*0x79f468*/
                break; /*0x79f468*/
              Game::ProcessIdle(v19); /*0x79f46a*/
            }
            while ( !g_WOL_ChannelLeaveState ); /*0x79f475*/
            ResetEvent(*(&Handles + v20)); /*0x79f47f*/
            if ( !v20 || v20 == 6 ) /*0x79f488*/
              break; /*0x79f488*/
            if ( v20 == 15 ) /*0x79f48d*/
            {
              Debug::Log(); /*0x79f986*/
              byte_B77DEC = 0; /*0x79f992*/
              word_B77AD0 = 0; /*0x79f999*/
              BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f9a0*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9a7*/
              OwnerDrawControl::InitVtable(&v50); /*0x79f9af*/
              return 2; /*0x79f9c3*/
            }
            if ( v20 == 7 ) /*0x79f496*/
            {
              Debug::Log(); /*0x79f9c9*/
              byte_B77DEC = 0; /*0x79f9d6*/
              (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x79f9e0*/
              word_B77AD0 = 0; /*0x79f9e7*/
              BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x79f9ee*/
              g_WOL_ChannelLeaveState = 0; /*0x79f9f5*/
              v50 = (OwnerDrawControl)&off_7F7624; /*0x79f9fb*/
              OwnerDrawControl::InitVtable(&v50); /*0x79fa03*/
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
        v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f4dc*/
        if ( v21 ) /*0x79f4e3*/
        {
          stru_B77D80.HashTable_field_0x48 = 0; /*0x79f4e9*/
          CloseDialog(v21, 0); /*0x79f4ef*/
        }
        v22 = (HWND)Dialog::GetCurrent(); /*0x79f4f4*/
        v23 = GetDlgItem(v22, 1344); /*0x79f4ff*/
        if ( v23 ) /*0x79f507*/
          SetFocus(v23); /*0x79f50a*/
        v24 = &Handles; /*0x79f510*/
        do /*0x79f523*/
          ResetEvent(*v24++); /*0x79f518*/
        while ( (int)v24 < (int)g_WOL_RequestObject ); /*0x79f523*/
        if ( word_B77AD0 ) /*0x79f52c*/
          ShowDialogConfirm(&word_B77AD0, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79f53b*/
        while ( (unsigned __int8)CloseDialog(0, 0) ) /*0x79f544*/
          ; /*0x79f54d*/
        BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79f55a*/
        goto LABEL_117; /*0x79f561*/
      case 1581: /*0x79f411*/
        memset(v52, 0, sizeof(v52)); /*0x79f574*/
        if ( !String::Length((String *)&g_WOL_LoginObject) ) /*0x79f57b*/
          goto LABEL_117; /*0x79f57b*/
        v49 = 0; /*0x79f597*/
        if ( !GameOptionsScreenWOL_Helper_7AE8E0((ObjectClass *)&stru_B765EC.?, (const char **)&g_WOL_LoginObject, &v49) ) /*0x79f59b*/
          goto LABEL_117; /*0x79f59b*/
        if ( v49 ) /*0x79f5ae*/
          qmemcpy(v52, (const void *)v49, sizeof(v52)); /*0x79f5bc*/
        v25 = 0; /*0x79f5cd*/
        v49 = 0; /*0x79f5cf*/
        if ( !GameOptionsScreenWOL_Helper_7AE7C0( /*0x79f5d3*/
                (ObjectClass *)&stru_B76900.isAliveFlag,
                (const char **)&g_WOL_LoginObject,
                &v49) )
          goto LABEL_117; /*0x79f5da*/
        if ( v49 ) /*0x79f5e6*/
          v25 = *(_DWORD *)v49; /*0x79f5e8*/
        v26 = v25 - 4; /*0x79f5ea*/
        if ( !v26 ) /*0x79f5ed*/
        {
          v45 = 0; /*0x79fa80*/
          memset(&v51[4], 0, 0x10Cu); /*0x79fa82*/
          v46 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fa84*/
          dword_A8B248 = 4; /*0x79fa89*/
          if ( *(int *)&g_WindowManager.__pad_EC[636] > 0 ) /*0x79fa95*/
          {
            v47 = 0; /*0x79fa97*/
            while ( 1 ) /*0x79fa99*/
            {
              if ( v47 >= 0 && v45 < v46 ) /*0x79fa9f*/
                qmemcpy(&v51[4], (const void *)(*(_DWORD *)&g_WindowManager.__pad_EC[644] + v47), 0x10Cu); /*0x79fab3*/
              if ( !_strcmpi(&v51[56], &v52[52]) ) /*0x79fac2*/
                break; /*0x79fac2*/
              v46 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79face*/
              ++v45; /*0x79fad3*/
              v47 += 268; /*0x79fad4*/
              if ( v45 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fadc*/
                goto LABEL_143; /*0x79fadc*/
            }
            dword_B77DD4 = atol(&v52[strlen(g_Str_Lob_41_) + 52]); /*0x79faff*/
LABEL_142:
            byte_84A210 = 0; /*0x79fb0f*/
          }
          goto LABEL_143; /*0x79fb0f*/
        }
        if ( v26 != 1 ) /*0x79f5f4*/
          goto LABEL_117; /*0x79f5f4*/
        String::Assign((String *)v51, &v52[52]); /*0x79f606*/
        v27 = 0; /*0x79f616*/
        memset(&v51[4], 0, 0x10Cu); /*0x79f618*/
        referenceCount = stru_B76AC4.?; /*0x79f61a*/
        if ( stru_B76AC4.? <= 0 ) /*0x79f621*/
        {
LABEL_77:
          memset(&v51[4], 0, 0x10Cu); /*0x79f681*/
          if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79f68c*/
            goto LABEL_84; /*0x79f68c*/
          v30 = &Handles; /*0x79f695*/
          do /*0x79f6ac*/
            ResetEvent(*v30++); /*0x79f69d*/
          while ( (int)v30 < (int)g_WOL_RequestObject ); /*0x79f6ac*/
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
          v27 = 0; /*0x79f6fc*/
          memset(&v51[4], 0, 0x10Cu); /*0x79f6fe*/
          v31 = stru_B76AC4.?; /*0x79f700*/
          if ( stru_B76AC4.? <= 0 ) /*0x79f707*/
          {
LABEL_93:
            memset(&v51[4], 0, 0x10Cu); /*0x79f763*/
LABEL_94:
            v34 = 0; /*0x79f765*/
          }
          else
          {
            v32 = 0; /*0x79f709*/
            while ( 1 ) /*0x79f70b*/
            {
              if ( v32 >= 0 && v27 < v31 ) /*0x79f711*/
                qmemcpy(&v51[4], (const void *)(v32 + stru_B76AC4.occupant), 0x10Cu); /*0x79f725*/
              v33 = String::GetOrEmpty_Alt((String *)v51); /*0x79f72b*/
              if ( !_strcmpi(&v51[56], v33) ) /*0x79f736*/
                break; /*0x79f736*/
              v31 = stru_B76AC4.?; /*0x79f742*/
              ++v27; /*0x79f747*/
              v32 += 268; /*0x79f748*/
              if ( v27 >= stru_B76AC4.? ) /*0x79f750*/
              {
                v12 = WaitForMultipleObjects; /*0x79f752*/
                goto LABEL_93; /*0x79f752*/
              }
            }
            v12 = WaitForMultipleObjects; /*0x79f775*/
            v34 = 1; /*0x79f77b*/
          }
          if ( !v34 ) /*0x79f769*/
            goto LABEL_115; /*0x79f769*/
          goto LABEL_98; /*0x79f769*/
        }
        v12 = 0; /*0x79f623*/
        while ( 1 ) /*0x79f625*/
        {
          if ( (int)v12 >= 0 && v27 < referenceCount ) /*0x79f62b*/
            qmemcpy(&v51[4], (char *)v12 + stru_B76AC4.occupant, 0x10Cu); /*0x79f63f*/
          v29 = String::GetOrEmpty_Alt((String *)v51); /*0x79f645*/
          if ( !_strcmpi(&v51[56], v29) ) /*0x79f650*/
            break; /*0x79f650*/
          referenceCount = stru_B76AC4.?; /*0x79f660*/
          ++v27; /*0x79f665*/
          v12 = (DWORD (__stdcall *)(DWORD, const HANDLE *, BOOL, DWORD))((char *)v12 + 268); /*0x79f666*/
          if ( v27 >= stru_B76AC4.? ) /*0x79f66e*/
          {
            v12 = WaitForMultipleObjects; /*0x79f670*/
            goto LABEL_77; /*0x79f670*/
          }
        }
LABEL_98:
        if ( !ValidateJoinWOL(v48, (int)&v51[4], (int)v12, v27) ) /*0x79f78e*/
        {
          Debug::Log(); /*0x79f79c*/
          v12 = WaitForMultipleObjects; /*0x79f7a1*/
          goto LABEL_116; /*0x79f7aa*/
        }
        v12 = WaitForMultipleObjects; /*0x79f7af*/
        g_WOL_ChannelLeaveState = 0; /*0x79f7bb*/
        v49 = 500; /*0x79f7c5*/
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
        Game::ProcessIdle(v35); /*0x79f7ed*/
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
        BYTE1(stru_B77D80.HashTable_field_0x40) = 1; /*0x79fa42*/
        g_WOL_ChannelLeaveState = 0; /*0x79fa49*/
        DeleteAndZero((ObjectClass *)v51); /*0x79fa4f*/
        v50 = (OwnerDrawControl)&off_7F7624; /*0x79fa58*/
        OwnerDrawControl::InitVtable(&v50); /*0x79fa60*/
        return 1; /*0x79fa74*/
      }
      if ( v49-- < 0 ) /*0x79f863*/
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
    DeleteAndZero((ObjectClass *)v51); /*0x79f898*/
LABEL_117:
    v50 = (OwnerDrawControl)&off_7F7624; /*0x79f8a3*/
    OwnerDrawControl::InitVtable(&v50); /*0x79f8af*/
  }
  while ( 1 ) /*0x79f37f*/
  {
    for ( m = v12(0x12u, &Handles, 0, 0x64u); m == 258; m = v12(0x12u, &Handles, 0, 0x64u) ) /*0x79f387*/
    {
      if ( (unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f38d*/
        break; /*0x79f394*/
      Game::ProcessIdle(v16); /*0x79f396*/
    }
    ResetEvent(*(&Handles + m)); /*0x79f3b9*/
    if ( !m ) /*0x79f3c1*/
      break; /*0x79f3c1*/
    if ( m == 5 ) /*0x79f3ca*/
    {
      v42 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f933*/
      if ( v42 ) /*0x79f93a*/
      {
        stru_B77D80.HashTable_field_0x48 = 0; /*0x79f940*/
        CloseDialog(v42, 0); /*0x79f946*/
      }
      v43 = (HWND)Dialog::GetCurrent(); /*0x79f94b*/
      v44 = GetDlgItem(v43, 1344); /*0x79f956*/
      if ( v44 ) /*0x79f95e*/
        SetFocus(v44); /*0x79f961*/
      Dialog::Destroy(Dialog); /*0x79f969*/
      dword_A8B248 = 0; /*0x79f96e*/
      v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27780); /*0x79f97f*/
      goto LABEL_123; /*0x79f97f*/
    }
    LOBYTE(v17) = 0; /*0x79f3d0*/
    ScreenSaver::Process(v17, v48); /*0x79f3d2*/
    if ( (unsigned __int8)ObjectClass::Release(&v50) ) /*0x79f3db*/
      goto LABEL_33; /*0x79f3e2*/
  }
  v38 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x79f8be*/
  if ( v38 ) /*0x79f8c5*/
  {
    stru_B77D80.HashTable_field_0x48 = 0; /*0x79f8cb*/
    CloseDialog(v38, 0); /*0x79f8d1*/
  }
  v39 = (HWND)Dialog::GetCurrent(); /*0x79f8d6*/
  v40 = GetDlgItem(v39, 1344); /*0x79f8e1*/
  if ( v40 ) /*0x79f8e9*/
    SetFocus(v40); /*0x79f8ec*/
  Dialog::Destroy(Dialog); /*0x79f8f4*/
  dword_A8B248 = 0; /*0x79f8f9*/
  v41 = GetStringCSF(aTxtYoureDiscon, 0, g_Str_File_wonline_cpp, 27771); /*0x79f916*/
LABEL_123:
  ShowDialogConfirm(v41, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79f91b*/
  GameOptionsScreenWOL_Destroy(v48); /*0x79f924*/
LABEL_143:
  v50 = (OwnerDrawControl)&off_7F7624; /*0x79fb16*/
  OwnerDrawControl::InitVtable(&v50); /*0x79fb22*/
  return 0; /*0x79f195*/
}



// ==== 0x0079FC40  ObjectClass::JoinLobbyWOL  this=ObjectClass  sig=csp ====
int JoinLobbyWOL(ObjectClass *this)
{
  wchar_t *StringCSF; // eax
  int v2; // edx
  wchar_t *v3; // eax
  int v5; // ebp
  int v6; // ebx
  wchar_t *v7; // eax
  HANDLE *v8; // esi
  int v9; // esi
  int v10; // esi
  wchar_t *v11; // eax
  wchar_t *v12; // ecx
  int v13; // esi
  TechnoTypeClass *v14; // ecx
  DWORD i; // esi
  HWND Dialog; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  int j; // esi
  TechnoTypeClass *v20; // ecx
  HWND v21; // eax
  HWND Current; // eax
  HWND DlgItem; // eax
  wchar_t *v24; // eax
  HWND v25; // eax
  wchar_t *v26; // eax
  int k; // esi
  TechnoTypeClass *v28; // ecx
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  Skirmish *v32; // esi
  wchar_t *v33; // [esp-4h] [ebp-12Ch] BYREF
  ObjectClass *v34; // [esp+0h] [ebp-128h]
  _BYTE String2[280]; // [esp+10h] [ebp-118h] BYREF

  if ( g_MenuStateFlags ) /*0x79fc53*/
  {
    g_MenuStateFlags = 0; /*0x79fc57*/
    Dialog::RefreshDialogsGame(0); /*0x79fc5d*/
  }
  BYTE1(stru_B77D80.HashTable_field_0x40) = 0; /*0x79fc63*/
  g_WOL_GameListState = 0; /*0x79fc6a*/
  g_WOL_IdleHandler = 1; /*0x79fc70*/
  g_WOL_GameProcessState = -1; /*0x79fc7a*/
  g_WOL_GameListPool = time(0); /*0x79fc93*/
  StringCSF = GetStringCSF(aTxtAwayQuickma, 0, g_Str_File_wonline_cpp, 28003); /*0x79fca2*/
  byte_B77E40 = 1; /*0x79fcac*/
  WideString::Reassign(&stru_B7622C.?, StringCSF); /*0x79fcb4*/
  g_NetworkLobbyState = 0; /*0x79fcb9*/
  Network::Init(); /*0x79fcbf*/
  g_WOL_GameListState = 0; /*0x79fcc9*/
  g_WOL_IdleHandler = 2; /*0x79fcd0*/
  g_WOL_GameProcessState = 30; /*0x79fcd6*/
  g_WOL_GameListPool = time(0); /*0x79fced*/
  *(_DWORD *)&g_WindowManager.__pad_EC[636] = 0; /*0x79fcf2*/
  DeleteAndZero::Alt2((DeleteAndZero *)&stru_B76AC4); /*0x79fcf8*/
  if ( stru_B76510.StringVector_field_0x10 && !RequestChannelListWOL() ) /*0x79fd0c*/
    goto LABEL_10; /*0x79fd0c*/
  GameOptionsScreenWOL_Helper(); /*0x79fd0e*/
  if ( !RequestChannelList2WOL(0, 0) ) /*0x79fd17*/
  {
    SetEvent(Handles); /*0x79fd26*/
LABEL_10:
    byte_B77E40 = 0; /*0x79fd66*/
    WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x79fd77*/
    return 0; /*0x79fd88*/
  }
  if ( !RequestChannelListWOL() ) /*0x79fd35*/
    goto LABEL_10; /*0x79fd35*/
  v2 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fd37*/
  if ( !*(_DWORD *)&g_WindowManager.__pad_EC[636] ) /*0x79fd3f*/
  {
    v3 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28045); /*0x79fd58*/
    ShowDialogConfirm(v3, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79fd61*/
    goto LABEL_10; /*0x79fd61*/
  }
  *(_DWORD *)String2 = aLob39; /*0x79fd94*/
  memset(&String2[12], 0, 0x10Cu); /*0x79fd9c*/
  if ( dword_A8B244 != 2 ) /*0x79fda4*/
    *(_DWORD *)String2 = g_Str_Lob_40_; /*0x79fda6*/
  v5 = 0; /*0x79fdae*/
  if ( *(int *)&g_WindowManager.__pad_EC[636] <= 0 ) /*0x79fdb2*/
    goto LABEL_22; /*0x79fdb2*/
  v6 = 0; /*0x79fdb4*/
  while ( 1 ) /*0x79fdb6*/
  {
    if ( v6 >= 0 && v5 < v2 ) /*0x79fdbc*/
      qmemcpy(&String2[12], (const void *)(v6 + *(_DWORD *)&g_WindowManager.__pad_EC[644]), 0x10Cu); /*0x79fdd0*/
    if ( !_strnicmp(&String2[64], *(const char **)String2, strlen(*(const char **)String2)) ) /*0x79fdeb*/
      break; /*0x79fdeb*/
    v2 = *(_DWORD *)&g_WindowManager.__pad_EC[636]; /*0x79fdf7*/
    ++v5; /*0x79fdfd*/
    v6 += 268; /*0x79fdfe*/
    if ( v5 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fe06*/
      goto LABEL_22; /*0x79fe06*/
  }
  if ( v5 >= *(int *)&g_WindowManager.__pad_EC[636] ) /*0x79fe10*/
  {
LABEL_22:
    v7 = GetStringCSF(aWolMatchingser, 0, g_Str_File_wonline_cpp, 28069); /*0x79fe12*/
    ShowDialogConfirm(v7, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, 0); /*0x79fe32*/
    return 0; /*0x79fe43*/
  }
  JoinLobbyWOL_Load(); /*0x79fe44*/
  *(_DWORD *)&String2[8] = CreateDialogIndirect(g_hInstance, (HWND)0x117, g_hWnd, (DLGPROC)sub_7A2110, 0); /*0x79fe70*/
  SetupDialog(*(Dialog **)&String2[8], 279); /*0x79fe74*/
  SendMessageA(*(HWND *)&String2[8], 0x4A9u, 0, 1); /*0x79fe82*/
  ShowWindow(*(HWND *)&String2[8], 1); /*0x79fe8b*/
  v8 = &Handles; /*0x79fe97*/
  do /*0x79feaa*/
    ResetEvent(*v8++); /*0x79fe9f*/
  while ( (int)v8 < (int)g_WOL_RequestObject ); /*0x79feaa*/
  v9 = 0; /*0x79feb1*/
  for ( *(_DWORD *)&String2[4] = 0; v9 < *(int *)g_WindowManager.__pad_0; ++v9 ) /*0x79feb9*/
    Object::DtorWithDelete((Object *)(*(_DWORD *)g_WindowManager.__pad_8 + 4 * v9), 0); /*0x79fec5*/
  v10 = 0; /*0x79fed9*/
  for ( *(_DWORD *)g_WindowManager.__pad_0 = 0; v10 < *(int *)&stru_B76900.needsRedraw; ++v10 ) /*0x79fee3*/
    Object::DtorWithDelete((Object *)(&stru_B76900.parachute->AnimClass_field_0x0 + v10), 0); /*0x79feee*/
  *(_DWORD *)&stru_B76900.needsRedraw = 0; /*0x79ff02*/
  HashTable::CleanupAndResize((HashTable *)&stru_B76900.isAliveFlag); /*0x79ff08*/
  HashTable::Rebuild((HashTable *)&stru_B765EC.?); /*0x79ff12*/
  (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 220))(ppv); /*0x79ff1f*/
  if ( dword_A8B244 != 3 && dword_A8B244 != 1 && dword_A8B244 != 2 ) /*0x79ff37*/
    RefreshChannelListWOL(v34); /*0x79ff39*/
  RefreshGameListWOL(v34); /*0x79ff3e*/
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
            String::Assign((String *)String2, aZotclot9); /*0x79ff62*/
            v11 = GetStringCSF(g_Str_TXT_JOINLOB, 0, g_Str_File_wonline_cpp, 28095); /*0x79ff78*/
            v33 = v12; /*0x79ff7d*/
            WideString::Assign(&v33, v11); /*0x79ff81*/
            v13 = LeaveChannelExWOL((int)&String2[12], (char **)String2, v33); /*0x79ff97*/
            DeleteAndZero((ObjectClass *)String2); /*0x79ff99*/
            if ( v13 ) /*0x79ffa0*/
            {
              g_WOL_GameListState = 1; /*0x7a010b*/
              g_WOL_IdleHandler = 0; /*0x7a0115*/
              g_WOL_GameProcessState = -1; /*0x7a011b*/
              g_WOL_GameListPool = time(0); /*0x7a012d*/
              v33 = 0; /*0x7a0139*/
              v17 = GetStringCSF((wchar_t *)aWolChanneljoin, 0, g_Str_File_wonline_cpp, 28098); /*0x7a0149*/
LABEL_70:
              ShowDialogConfirm(v17, 0, (unsigned __int8 (*)(void))GameLoop::Thunk, (char)v33); /*0x7a0279*/
LABEL_71:
              byte_B77E40 = 0; /*0x7a0282*/
              WideString::Reassign(&stru_B7622C.?, &g_TypeClass_DefaultString); /*0x7a0293*/
              goto LABEL_73; /*0x7a0298*/
            }
            g_WOL_GameListState = 0; /*0x79ffa7*/
            g_WOL_IdleHandler = 3; /*0x79ffad*/
            g_WOL_GameProcessState = 20; /*0x79ffb7*/
            g_WOL_GameListPool = time(0); /*0x79ffc5*/
          }
          if ( g_WOL_IdleHandler == 3 && !strcmp(&String2[64], &stru_B76AC4.needsRedraw) ) /*0x79ffe2*/
            RequestMatchWOL(v34); /*0x7a0009*/
          for ( i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u); /*0x7a0021*/
                i == 258;
                i = WaitForMultipleObjects(0x12u, &Handles, 0, 0x14u) )
          {
            Game::ProcessIdle(v14); /*0x7a0023*/
          }
          ResetEvent(*(&Handles + i)); /*0x7a0045*/
          if ( !i || i == 6 ) /*0x7a0056*/
            goto LABEL_71; /*0x7a0056*/
          if ( i != 17 ) /*0x7a005f*/
            break; /*0x7a005f*/
          CollectWOLConnectionTokens(v34); /*0x7a0061*/
          ProcessPingRequestsWOL(v34); /*0x7a0066*/
        }
        if ( i != 5 ) /*0x7a0073*/
          break; /*0x7a0073*/
        if ( !g_WOL_IdleHandler ) /*0x7a007b*/
        {
          if ( stru_B77D80.HashTable_field_0x50 ) /*0x7a0154*/
          {
            v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0160*/
            Debug::Log(); /*0x7a016b*/
            (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a017b*/
            v18 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a018f*/
            WideString::Assign((wchar_t **)String2, v18); /*0x7a0199*/
            ShowUIMessage(64, (wchar_t **)String2, 0); /*0x7a01a8*/
            DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a01b1*/
            for ( j = 0; stru_B77D80.HashTable_field_0x50; ++j ) /*0x7a01bf*/
            {
              if ( j >= 150 ) /*0x7a01cd*/
                break; /*0x7a01cd*/
              Sleep(0x64u); /*0x7a01d1*/
              Game::ProcessIdle(v20); /*0x7a01d3*/
            }
            v21 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a01e7*/
            if ( v21 ) /*0x7a01ee*/
            {
              stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7a01f9*/
              if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a01ff*/
                CloseDialog(v21, 0); /*0x7a0205*/
            }
            Current = (HWND)Dialog::GetCurrent(); /*0x7a020a*/
            DlgItem = GetDlgItem(Current, 1344); /*0x7a0215*/
            if ( DlgItem ) /*0x7a021d*/
              SetFocus(DlgItem); /*0x7a0220*/
          }
          if ( g_WOL_GameListState == 1 ) /*0x7a022c*/
          {
            v33 = 0; /*0x7a025d*/
            v17 = GetStringCSF(aWolNomatchinga, 0, g_Str_File_wonline_cpp, 28174); /*0x7a0274*/
          }
          else
          {
            v33 = 0; /*0x7a022f*/
            if ( g_WOL_GameListState == 2 ) /*0x7a0235*/
              v17 = GetStringCSF(aWolMatchtimeou, 0, g_Str_File_wonline_cpp, 28180); /*0x7a025b*/
            else
              v17 = GetStringCSF(g_Str_WOL_MatchFailExit, 0, g_Str_File_wonline_cpp, 28185); /*0x7a0248*/
          }
          goto LABEL_70; /*0x7a0248*/
        }
      }
      if ( i != 16 ) /*0x7a0089*/
        break; /*0x7a0089*/
      if ( MatchGameWOL(v34) && dword_A8B244 == 3 ) /*0x7a009f*/
      {
        Dialog = (HWND)CreateDialog(0x11Fu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_7A2600, 0); /*0x7a00b5*/
        g_WOL_GameListState = 0; /*0x7a00b7*/
        g_WOL_IdleHandler = 10; /*0x7a00be*/
        g_WOL_GameProcessState = 180; /*0x7a00c8*/
        g_WOL_GameListPool = time(0); /*0x7a00da*/
        SendMessageA(Dialog, 0x4A9u, 0, 1); /*0x7a00e8*/
        ShowWindow(Dialog, 1); /*0x7a00f1*/
      }
    }
  }
  while ( i != 7 ); /*0x7a00ff*/
  v24 = GetStringCSF(aWolMatchgamest, 0, g_Str_File_wonline_cpp, 28211); /*0x7a02ab*/
  Dialog::ShowMessage(-1, (size_t)v24); /*0x7a02b7*/
  byte_B77DEC = 0; /*0x7a02bf*/
  *(_DWORD *)&String2[4] = 1; /*0x7a02c6*/
LABEL_73:
  CloseDialog(*(HWND *)&String2[8], 0); /*0x7a02ce*/
  JoinLobbyWOL_Destroy(v34); /*0x7a02d9*/
  v25 = (HWND)Dialog::FindByHandle((Dialog *)0x11F); /*0x7a02e3*/
  if ( v25 ) /*0x7a02ea*/
    CloseDialog(v25, 0); /*0x7a02f0*/
  if ( g_WOL_IdleHandler != 11 ) /*0x7a02fc*/
  {
    g_WOL_GameListState = 0; /*0x7a02ff*/
    g_WOL_IdleHandler = 1; /*0x7a0305*/
    g_WOL_GameProcessState = -1; /*0x7a030f*/
    g_WOL_GameListPool = time(0); /*0x7a0321*/
  }
  if ( stru_B77D80.HashTable_field_0x50 ) /*0x7a032c*/
  {
    v33 = (wchar_t *)stru_B76AC4.ambientSoundController[4]; /*0x7a0338*/
    Debug::Log(); /*0x7a0343*/
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 36))(ppv); /*0x7a0353*/
    v26 = GetStringCSF(g_Str_WOL_LeavingChannel, 0, g_Str_File_wonline_cpp, 10704); /*0x7a0367*/
    WideString::Assign((wchar_t **)String2, v26); /*0x7a0371*/
    ShowUIMessage(64, (wchar_t **)String2, 1); /*0x7a0381*/
    DeleteAndZero::Alt((DeleteAndZero *)String2); /*0x7a038a*/
    for ( k = 0; stru_B77D80.HashTable_field_0x50; ++k ) /*0x7a0398*/
    {
      if ( k >= 150 ) /*0x7a03a6*/
        break; /*0x7a03a6*/
      Sleep(0x64u); /*0x7a03aa*/
      Game::ProcessIdle(v28); /*0x7a03ac*/
    }
    v29 = (HWND)Dialog::FindByHandle((Dialog *)0xC4); /*0x7a03c0*/
    if ( v29 ) /*0x7a03c7*/
    {
      stru_B77D80.HashTable_field_0x48 &= ~0x40u; /*0x7a03d2*/
      if ( !stru_B77D80.HashTable_field_0x48 ) /*0x7a03d8*/
        CloseDialog(v29, 0); /*0x7a03de*/
    }
    v30 = (HWND)Dialog::GetCurrent(); /*0x7a03e3*/
    v31 = GetDlgItem(v30, 1344); /*0x7a03ee*/
    if ( v31 ) /*0x7a03f6*/
      SetFocus(v31); /*0x7a03f9*/
  }
  v32 = g_UIControlState; /*0x7a03ff*/
  if ( g_UIControlState ) /*0x7a0407*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x7a040b*/
    __3_YAXPAX_Z(v32); /*0x7a0411*/
    g_UIControlState = 0; /*0x7a0419*/
  }
  return *(_DWORD *)&String2[4]; /*0x79fd7e*/
}


