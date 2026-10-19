// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005E00B0  NetworkLobby::MessageHandler  this=NetworkLobby  sig=csp ====
char NetworkLobby::MessageHandler(NetworkLobby *this)
{
  NetworkLobby *v1; // edi
  char result; // al
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  char *v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  wchar_t *StringCSF; // eax
  int v19; // edi
  int v20; // esi
  int v21; // eax
  LPARAM v22; // ebp
  char *v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // eax
  HWND v27; // eax
  char *v28; // eax
  int v29; // eax
  int v30; // esi
  char *v31; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v34; // eax
  Dialog *DialogIndirect; // esi
  int v36; // esi
  int m; // esi
  wchar_t *v38; // eax
  wchar_t *v39; // eax
  HWND v40; // eax
  HWND v41; // esi
  HWND DlgItem; // eax
  int v43; // esi
  char *v44; // eax
  int v45; // edi
  char **v46; // esi
  char *v47; // eax
... [48227 chars total]



// ==== 0x005E1CA0  GameLobby::DlgProc  this=GameLobby  sig=csp ====
int __userpurge GameLobby::DlgProc@<eax>(GameLobby *this, int a2@<ebp>, HWND hWnd, UINT a4, WPARAM a5, unsigned int a6)
{
  int v6; // ebx
  Skirmish *v7; // esi
  int result; // eax
  int v10; // esi
  WPARAM v11; // edi
  wchar_t *StringCSF; // ebp
  HWND v13; // eax
  char *v14; // eax
  HWND DlgItem; // eax
  UINT v16; // edi
  StartCombo *v17; // esi
  bool v18; // cc
  HWND v19; // esi
  signed int v20; // edi
  signed int v21; // ebx
  int v22; // ebp
  int v23; // eax
  ObjectClass *v24; // esi
  void *ResourceID2CSF; // edi
  void *ResourceIDCSF; // ebx
  int ResourceID3CSF; // ebp
  void *ResourceID4CSF; // eax
  GameLobby *v29; // esi
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  int ComboBoxSelectedRaw2; // eax
  char *v34; // eax
  WPARAM v35; // edi
  void **v36; // ebx
  StartCombo *DlgCtrlID; // esi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  SideClass *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  POINT v44; // [esp-Ch] [ebp-74h]
  ObjectClass *v45; // [esp+0h] [ebp-68h]
  GameSetup *v46; // [esp+0h] [ebp-68h]
  GameSetup *v47; // [esp+0h] [ebp-68h]
  ObjectClass *v48; // [esp+10h] [ebp-58h]
  int nIDDlgItem; // [esp+14h] [ebp-54h]
  struct tagRECT Rect; // [esp+18h] [ebp-50h] BYREF
  char Buffer[64]; // [esp+28h] [ebp-40h] BYREF
  HWND hWnda; // [esp+6Ch] [ebp+4h]

  if ( (unsigned int)hWnd <= 0x84 ) /*0x5e1cb0*/
  {
    if ( hWnd != (HWND)132 ) /*0x5e1cb6*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e1cd0*/
      {
        case 2u: /*0x5e1cd0*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5e1cdc*/
            VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x5e1cea*/
          v7 = g_UIControlState; /*0x5e1cef*/
          if ( !g_UIControlState ) /*0x5e1cf7*/
            return 0; /*0x5e1cf7*/
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e1cff*/
          __3_YAXPAX_Z(v7); /*0x5e1d05*/
          g_UIControlState = 0; /*0x5e1d0d*/
          return 0; /*0x5e1d20*/
        case 0xFu: /*0x5e1cd0*/
          Dialog::DrawBackground((Dialog *)this); /*0x5e1d41*/
          if ( g_UIControlState ) /*0x5e1d4e*/
            Skirmish::RenderPreview(g_UIControlState, (HWND)this); /*0x5e1d51*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5e1d5b*/
            LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], v6, a2, NAN); /*0x5e1d71*/
          Dialog::StopBink((Dialog *)this); /*0x5e1d78*/
          ValidateRect((HWND)this, 0); /*0x5e1d80*/
          return 0; /*0x5e1d8f*/
        case 0x14u: /*0x5e1cd0*/
          goto LABEL_9;
        case 0x2Bu: /*0x5e1cd0*/
          Dialog::Resize((char *)a5); /*0x5e1d27*/
LABEL_9:
          result = 1; /*0x5e1d2c*/
          break; /*0x5e1d38*/
        default:
          return 0;
      }
      return result; /*0x5e1d38*/
    }
    hWnda = GetDlgItem((HWND)this, 1685); /*0x5e1da4*/
    if ( hWnda ) /*0x5e1da8*/
    {
      v10 = (unsigned __int16)a5; /*0x5e1dbd*/
      v11 = HIWORD(a5); /*0x5e1dc3*/
      GetWindowRect((HWND)this, &Rect); /*0x5e1dc5*/
      StringCSF = &g_TypeClass_DefaultString; /*0x5e1dd9*/
      v44.y = v11 - Rect.top; /*0x5e1dde*/
      v44.x = v10 - Rect.left; /*0x5e1ddf*/
      v13 = ChildWindowFromPointEx((HWND)this, v44, 1u); /*0x5e1de1*/
      if ( v13 ) /*0x5e1de9*/
      {
        v14 = DlgSkirmishMenuProc((HWND)this, v13); /*0x5e1def*/
        if ( v14 ) /*0x5e1df6*/
          StringCSF = GetStringCSF((wchar_t *)v14, 0, g_Str_File_netdlg2_cpp, 3388); /*0x5e1e0b*/
      }
      SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5e1e1a*/
      return 0; /*0x5e1e29*/
    }
    return 0; /*0x5e1da8*/
  }
  if ( (unsigned int)hWnd > 0x4E9 ) /*0x5e1e31*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e22e0*/
      Dialog::EnumAndCleanup((Dialog *)this); /*0x5e22e6*/
    return 0; /*0x5e22e6*/
  }
  if ( hWnd == (HWND)1257 ) /*0x5e1e37*/
  {
    v35 = a5; /*0x5e21fe*/
    v36 = (void **)(a5 + 8); /*0x5e2204*/
    WideString::Assign_Alt((void **)(a5 + 8), 0); /*0x5e2209*/
    if ( *(_DWORD *)v35 && *(_DWORD *)(v35 + 4) != -1 ) /*0x5e221c*/
    {
      DlgCtrlID = (StartCombo *)GetDlgCtrlID(*(HWND *)v35); /*0x5e2229*/
      if ( Dialog::MapPlayerIDToIndex((Dialog *)DlgCtrlID) == -1 ) /*0x5e2235*/
      {
        if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5e2241*/
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 ) /*0x5e224d*/
          {
            ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw((HWND)this, (int)DlgCtrlID, *(_DWORD *)(v35 + 4)); /*0x5e2259*/
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5e2260*/
            WideString::Assign_Alt(v36, ColorTooltip); /*0x5e2268*/
            return 1; /*0x5e2279*/
          }
        }
        else
        {
          ComboBoxSelected = (SideClass *)GetComboBoxSelected((HWND)this, (int)DlgCtrlID, *(_DWORD *)(v35 + 4)); /*0x5e2286*/
          if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5e228e*/
          {
            Name = SideClass::GetName(ComboBoxSelected); /*0x5e2292*/
            WideString::Assign_Alt(v36, Name); /*0x5e229a*/
            return 1; /*0x5e22ab*/
          }
        }
      }
      else
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault( /*0x5e22b8*/
                                                 (HWND)this,
                                                 (int)DlgCtrlID,
                                                 *(_DWORD *)(v35 + 4));
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5e22bf*/
        WideString::Assign_Alt(v36, DifficultyString); /*0x5e22c7*/
      }
    }
    return 1; /*0x5e22d8*/
  }
  if ( hWnd != (HWND)273 ) /*0x5e1e42*/
  {
    if ( hWnd == (HWND)1175 ) /*0x5e1e4d*/
    {
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)this); /*0x5e1e59*/
      InitGameDropdownColors(v45); /*0x5e1e5e*/
      Lobby::FillPlayerFactions((Lobby *)this); /*0x5e1e65*/
      _cfltcvt_init(); /*0x5e1e6a*/
      Lobby::InvalidateFactionCombos((Lobby *)this); /*0x5e1e71*/
      GDlg::LoadLetterStrings(); /*0x5e1e76*/
      memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5e1e8a*/
      Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x5e1e8e*/
      RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5e1e96*/
      GameLobby_Setup((HWND)this, dword_A8DA8C); /*0x5e1ea3*/
      SetupSkirmishDialogPlayerSlot((HWND)this, (int)dword_A8DA8C); /*0x5e1eb0*/
      MapSkirmishDialogPlayerToControl((HWND)this, (int)dword_A8DA8C); /*0x5e1ebd*/
      DlgItem = GetDlgItem((HWND)this, 1439); /*0x5e1eca*/
      EnableWindow(DlgItem, 0); /*0x5e1ed1*/
      byte_AC11C2 = 0; /*0x5e1edb*/
      SetGameSetupPlayerState(0, 0, v46); /*0x5e1ee2*/
      GameSetup::DisplayPlayers(v47); /*0x5e1ee9*/
      NetworkLobby::UpdatePlayerList(); /*0x5e1eee*/
      InitSkirmishDialogControls((HWND)this, 1); /*0x5e1efa*/
      LoadScenarioClassByIndex(-1); /*0x5e1f02*/
      dword_A8BB0C = 8; /*0x5e1f0a*/
      return 0; /*0x5e1f1a*/
    }
    return 0; /*0x5e1e4d*/
  }
  v16 = a4; /*0x5e1f1d*/
  v17 = (StartCombo *)(unsigned __int16)a4; /*0x5e1f23*/
  if ( (unsigned __int16)a4 <= 0x540u ) /*0x5e1f2f*/
  {
    if ( (unsigned __int16)a4 == 1344 ) /*0x5e1f35*/
    {
      ReadChatMessage((wchar_t **)&hWnd, (HWND)a5); /*0x5e1fb8*/
      DeleteAndZero::Alt((DeleteAndZero *)&hWnd); /*0x5e1fc1*/
      if ( HIWORD(v16) == 1281 ) /*0x5e1fcf*/
      {
        SendNetworkLobbyChatMessage((HWND)this, (int)Math::InitDegToRad, 61680); /*0x5e1fe6*/
        return 0; /*0x5e1ff4*/
      }
      return 0; /*0x5e1fcf*/
    }
    if ( (unsigned __int16)a4 <= 0x514u ) /*0x5e1f3d*/
    {
      if ( (unsigned __int16)a4 < 0x513u ) /*0x5e1f45*/
      {
        if ( (unsigned __int16)a4 == 2 ) /*0x5e1f50*/
        {
          if ( !byte_AC0268 ) /*0x5e1f70*/
          {
            g_NetworkOptionsState = 2; /*0x5e1f79*/
            return 0; /*0x5e1f89*/
          }
          return 0; /*0x5e1f70*/
        }
        if ( (unsigned __int16)a4 != 1296 ) /*0x5e1f57*/
          return 0; /*0x5e1f66*/
      }
      goto LABEL_49; /*0x5e1f57*/
    }
    if ( (unsigned __int16)a4 < 0x51Eu ) /*0x5e1f92*/
      return 0; /*0x5e1f92*/
    v18 = (unsigned __int16)a4 <= 0x528u; /*0x5e1f98*/
    goto LABEL_36; /*0x5e1f98*/
  }
  if ( (unsigned __int16)a4 > 0x6ABu ) /*0x5e1ffd*/
  {
    if ( (unsigned __int16)a4 < 0x76Du || (unsigned __int16)a4 > 0x774u ) /*0x5e20c9*/
      return 0; /*0x5e20c9*/
    goto LABEL_49; /*0x5e20c9*/
  }
  if ( (unsigned __int16)a4 < 0x6AAu ) /*0x5e2009*/
  {
    if ( (unsigned __int16)a4 == 1439 ) /*0x5e2015*/
    {
      if ( dword_A8DA84 ) /*0x5e2035*/
      {
        *(_DWORD *)(*dword_A8DA78 + 119) = 1; /*0x5e204d*/
        sprintf(Buffer, g_INI_Key_A1); /*0x5e2054*/
        Network::SendOptionsGame(Buffer); /*0x5e2060*/
        EnablePlayerSlotControls((HWND)this, 0); /*0x5e206d*/
        v19 = GetDlgItem((HWND)this, 1439); /*0x5e207e*/
        EnableWindow(v19, 0); /*0x5e2083*/
        InvalidateRect(v19, 0, 0); /*0x5e208e*/
        SendMessageA(v19, 0x4DCu, 0, 0); /*0x5e209e*/
        GameSetup::DisplayPlayers((GameSetup *)v45); /*0x5e20a6*/
        return 0; /*0x5e20b4*/
      }
      return 0; /*0x5e2035*/
    }
    if ( (unsigned __int16)a4 <= 0x6A0u ) /*0x5e201d*/
      return 0; /*0x5e22ee*/
    v18 = (unsigned __int16)a4 <= 0x6A8u; /*0x5e2023*/
LABEL_36:
    if ( !v18 ) /*0x5e1f9e*/
      return 0; /*0x5e1fad*/
  }
LABEL_49:
  if ( HIWORD(a4) != 1 ) /*0x5e20d5*/
    return 0; /*0x5e20d5*/
  v20 = CountryCombo::IDToIndex((CountryCombo *)(unsigned __int16)a4); /*0x5e20e2*/
  a5 = v20; /*0x5e20e6*/
  v21 = StartCombo::IDToIndex(v17); /*0x5e20ef*/
  a4 = v21; /*0x5e20f3*/
  v22 = Dialog::SideIDToIndex((Dialog *)v17); /*0x5e20fc*/
  v48 = (ObjectClass *)v22; /*0x5e2100*/
  v23 = Dialog::OptionIDToIndex((Dialog *)v17); /*0x5e2104*/
  v24 = (ObjectClass *)v20; /*0x5e210b*/
  if ( v20 <= v21 ) /*0x5e210d*/
    v24 = (ObjectClass *)v21; /*0x5e210f*/
  if ( (int)v24 <= v22 ) /*0x5e2113*/
    v24 = (ObjectClass *)v22; /*0x5e2115*/
  if ( (int)v24 <= v23 ) /*0x5e2119*/
    v24 = (ObjectClass *)v23; /*0x5e211b*/
  ResourceID2CSF = (void *)GetResourceID2CSF(v24); /*0x5e2126*/
  ResourceIDCSF = (void *)GetResourceIDCSF(v24); /*0x5e212f*/
  ResourceID3CSF = GetResourceID3CSF(v24); /*0x5e2138*/
  ResourceID4CSF = (void *)GetResourceID4CSF(v24); /*0x5e213a*/
  nIDDlgItem = (int)ResourceID4CSF; /*0x5e2143*/
  if ( v24 == (ObjectClass *)a5 ) /*0x5e2149*/
  {
    v29 = this; /*0x5e214b*/
    SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5e2153*/
  }
  else if ( v24 == (ObjectClass *)a4 ) /*0x5e215e*/
  {
    v29 = this; /*0x5e2160*/
    AssignPlayerColor((HWND)this, ResourceIDCSF); /*0x5e2168*/
  }
  else if ( v24 == v48 ) /*0x5e2173*/
  {
    v29 = this; /*0x5e2175*/
    AssignPlayerSide((HWND)this, ResourceID3CSF); /*0x5e217d*/
  }
  else
  {
    v29 = this; /*0x5e2184*/
    ProcessNetworkLobbyOption((HWND)this, ResourceID4CSF); /*0x5e218c*/
  }
  v30 = GetComboBoxSelected((HWND)v29, (int)ResourceID2CSF, -1); /*0x5e21a2*/
  v31 = GetComboBoxSelectedRaw((HWND)v29, (int)ResourceIDCSF, -1); /*0x5e21af*/
  v32 = SetComboBoxSelection((HWND)v29, ResourceID3CSF, -1); /*0x5e21be*/
  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)v29, nIDDlgItem, -1); /*0x5e21c0*/
  sprintf(Buffer, "R%d,%d,%d,%d", v30, v31, v32, ComboBoxSelectedRaw2); /*0x5e21d3*/
  v34 = ToWideStringChar((char *)&stru_A8D600.Network_field_0x10); /*0x5e21e4*/
  WOLobby_Play(v34, Buffer); /*0x5e21ed*/
  return 0; /*0x5e1d19*/
}



// ==== 0x005E2340  UI_Setup_5E2340  this=-  sig=ida-proto ====
HWND sub_5E2340()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  HWND result; // eax
  wchar_t *StringCSF; // eax

  Current = Dialog::GetCurrent(); /*0x5e2341*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e2354*/
  result = (HWND)SendMultiplayerStartSignal_Start(0); /*0x5e2356*/
  if ( result != (HWND)1 ) /*0x5e235e*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x5e236a*/
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_netdlg2_cpp, 5300); /*0x5e2381*/
    return Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x5e2389*/
  }
  return result; /*0x5e2391*/
}



// ==== 0x005E23A0  SendMultiplayerStartSignal_Start_5E23A0  this=-  sig=ida-proto ====
LRESULT sub_5E23A0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x5e23a0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e23ab*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x5e23c1*/
}



// ==== 0x005E23D0  ObjectClass::Network_Check  this=ObjectClass  sig=csp ====
char __thiscall Network_Check(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x5e23d0*/
  v3 = a2; /*0x5e23d3*/
  if ( a2 >= uniqueId ) /*0x5e23d9*/
    return 0; /*0x5e23fc*/
  v4 = uniqueId - 1; /*0x5e23db*/
  this->? = v4; /*0x5e23de*/
  if ( a2 < v4 ) /*0x5e23e1*/
  {
    do /*0x5e23f4*/
    {
      ++v3; /*0x5e23e7*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x5e23eb*/
    }
    while ( v3 < this->? ); /*0x5e23f4*/
  }
  return 1; /*0x5e23f9*/
}



// ==== 0x005E2410  sub_5E2410  this=-  sig=ida-proto ====
int sub_5E2410()
{
  dword_AC0B38 = 0; /*0x5e2412*/
  dword_AC0B3C = 0; /*0x5e2417*/
  dword_AC0B40 = 0; /*0x5e241c*/
  dword_AC0B44 = 0; /*0x5e2421*/
  return 0; /*0x5e2426*/
}



// ==== 0x005E2430  sub_5E2430  this=-  sig=ida-proto ====
void sub_5E2430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5e243c*/
  dbl_AC0CE8 = Math::Sqrt(v0 + v0); /*0x5e244e*/
}



// ==== 0x005E2460  sub_5E2460  this=-  sig=ida-proto ====
void sub_5E2460()
{
  dbl_AC1160 = dbl_AC0CE8 / 60.0; /*0x5e246c*/
}



// ==== 0x005E2480  sub_5E2480  this=-  sig=ida-proto ====
void sub_5E2480()
{
  dbl_AC10E8 = 1.0 / dbl_AC1160; /*0x5e248c*/
}



// ==== 0x005E24A0  sub_5E24A0  this=-  sig=ida-proto ====
void sub_5E24A0()
{
  dbl_AC10D8 = 0.0174532925199433 * 45.0; /*0x5e24ac*/
}



// ==== 0x005E24C0  sub_5E24C0  this=-  sig=ida-proto ====
void sub_5E24C0()
{
  dbl_AC0D28 = 0.0174532925199433 * 60.0; /*0x5e24cc*/
}



// ==== 0x005E24E0  sub_5E24E0  this=-  sig=ida-proto ====
void sub_5E24E0()
{
  dbl_AC0AC0 = 0.0174532925199433 * 90.0; /*0x5e24ec*/
}



// ==== 0x005E2500  sub_5E2500  this=-  sig=ida-proto ====
__int64 sub_5E2500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC0AC0 - dbl_AC0D28); /*0x5e2512*/
  result = Math::RoundToInt(v0 * dbl_AC0CE8 * 0.5); /*0x5e2526*/
  dword_AC1168 = result; /*0x5e252b*/
  return result; /*0x5e2530*/
}



// ==== 0x005E2540  sub_5E2540  this=-  sig=ida-proto ====
void sub_5E2540()
{
  dbl_AC0D38 = Math::ArcTan((double)dword_AC1168 * 0.00390625); /*0x5e2557*/
}



// ==== 0x005E2570  sub_5E2570  this=-  sig=ida-proto ====
void sub_5E2570()
{
  dbl_AC10D0 = Math::ArcTan((double)(2 * dword_AC1168) / dbl_AC0CE8); /*0x5e2592*/
}



// ==== 0x005E25A0  sub_5E25A0  this=-  sig=ida-proto ====
__int64 sub_5E25A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1168) + 0.5); /*0x5e25bb*/
  dword_AC1158 = result; /*0x5e25c0*/
  return result; /*0x5e25c6*/
}



// ==== 0x005E25D0  sub_5E25D0  this=-  sig=ida-proto ====
int sub_5E25D0()
{
  dword_AC0B90 = 0; /*0x5e25d2*/
  return 0; /*0x5e25de*/
}



// ==== 0x005E25E0  sub_5E25E0  this=-  sig=ida-proto ====
int sub_5E25E0()
{
  dword_AC0E98 = 0; /*0x5e25e2*/
  dword_AC0E9C = 0; /*0x5e25e7*/
  dword_AC0EA0 = 0; /*0x5e25ec*/
  return 0; /*0x5e25f1*/
}



// ==== 0x005E2600  sub_5E2600  this=-  sig=ida-proto ====
int sub_5E2600()
{
  dword_AC1150 = 0; /*0x5e2605*/
  dword_AC1148 = 128; /*0x5e260f*/
  dword_AC114C = 128; /*0x5e2614*/
  return 128; /*0x5e2619*/
}



// ==== 0x005E2620  String::ComputeHash  this=ObjectClass  sig=csp ====
unsigned int __thiscall String::ComputeHash(String *this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length(this); /*0x5e262c*/
  for ( i = 0; i < String::Length(this); ++i ) /*0x5e2630*/
  {
    v4 = String::GetOrEmpty(this); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/
}



// ==== 0x005E2670  GameSetup::CompareWideString  this=GameSetup  sig=csp ====
const wchar_t *__thiscall GameSetup::CompareWideString(GameSetup *this)
{
  const wchar_t *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // esi

  v2 = WideString::Length((WideString *)this); /*0x5e267c*/
  v3 = 0; /*0x5e267e*/
  if ( WideString::Length((WideString *)this) ) /*0x5e2680*/
  {
    do /*0x5e26ae*/
    {
      v4 = (unsigned int)v2 + v3 + WideString::GetOrEmpty((WideString *)this)[v3]; /*0x5e2698*/
      v2 = (const wchar_t *)(HIBYTE(v4) ^ (v4 << 8)); /*0x5e26a4*/
      ++v3; /*0x5e26a6*/
    }
    while ( v3 < (unsigned int)WideString::Length((WideString *)this) ); /*0x5e26ae*/
  }
  return v2; /*0x5e26b2*/
}



// ==== 0x005E26C0  Dialog::FindGameUI  this=Dialog  sig=csp ====
int Dialog_FindGameUI()
{
  int result; // eax

  result = Dialog::FindByHandle((void *)0xC2); /*0x5e26c5*/
  if ( !result ) /*0x5e26cc*/
  {
    result = Dialog::FindByHandle((void *)0xC9); /*0x5e26d3*/
    if ( !result ) /*0x5e26da*/
    {
      result = Dialog::FindByHandle((void *)0xBC); /*0x5e26e1*/
      if ( !result ) /*0x5e26e8*/
        return Dialog::FindByHandle((void *)0xBD); /*0x5e26ef*/
    }
  }
  return result; /*0x5e26f4*/
}



// ==== 0x005E2700  Dialog::ShowMessage  this=IUnknown  sig=csp ====
int Dialog::ShowMessage(int a1, size_t BufferCount, ...)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e2717*/
  vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v5); /*0x5e272a*/
  result = Dialog::GetCurrent(); /*0x5e2732*/
  if ( result ) /*0x5e2739*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2746*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e274e*/
    if ( DlgItem ) /*0x5e2752*/
    {
      return DrawDialogText(a1, Buffer, DlgItem); /*0x5e276d*/
    }
    else
    {
      while ( 1 ) /*0x5e2756*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e2756*/
        Current = (HWND)result; /*0x5e275b*/
        if ( !result ) /*0x5e275f*/
          break; /*0x5e275f*/
        DlgItem = GetDlgItem((HWND)result, 1343); /*0x5e2767*/
        if ( DlgItem ) /*0x5e276b*/
          return DrawDialogText(a1, Buffer, DlgItem); /*0x5e276b*/
      }
    }
  }
  return result; /*0x5e277e*/
}



// ==== 0x005E2790  Dialog::ShowStatusText  this=ObjectClass  sig=csp ====
int Dialog::ShowStatusText(LPARAM a1, size_t BufferCount, ...)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e27a7*/
  vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v5); /*0x5e27ba*/
  result = Dialog::GetCurrent(); /*0x5e27c2*/
  if ( result ) /*0x5e27c9*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e27d6*/
    DlgItem = GetDlgItem(Current, 1461); /*0x5e27de*/
    if ( DlgItem ) /*0x5e27e2*/
    {
      return DrawDialogText(a1, Buffer, DlgItem); /*0x5e27fd*/
    }
    else
    {
      while ( 1 ) /*0x5e27e6*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e27e6*/
        Current = (HWND)result; /*0x5e27eb*/
        if ( !result ) /*0x5e27ef*/
          break; /*0x5e27ef*/
        DlgItem = GetDlgItem((HWND)result, 1461); /*0x5e27f7*/
        if ( DlgItem ) /*0x5e27fb*/
          return DrawDialogText(a1, Buffer, DlgItem); /*0x5e27fb*/
      }
    }
  }
  return result; /*0x5e280e*/
}



// ==== 0x005E2820  DrawDialogText  this=ObjectClass  sig=csp ====
int __fastcall DrawDialogText(LPARAM a1, wchar_t *a2, HWND hWnd)
{
  wchar_t *v3; // esi
  HWND v4; // ebx
  signed int v5; // edi
  wchar_t *v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // ebx
  int v9; // ecx
  int v10; // ebx
  wint_t *v11; // ebp
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  HDC hDC; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  v3 = a2; /*0x5e2826*/
  v4 = hWnd; /*0x5e2833*/
  v5 = wcslen(a2); /*0x5e2840*/
  v13 = 18; /*0x5e2842*/
  ScreenDialogToClient(hWnd, &Rect); /*0x5e284a*/
  if ( SendMessageA(hWnd, 0x4A0u, 0, 0) ) /*0x5e285f*/
    v13 = 1; /*0x5e2865*/
  hDC = GetDC(hWnd); /*0x5e287d*/
  SendMessageA(hWnd, 0x49Eu, 0, (LPARAM)hDC); /*0x5e2881*/
  if ( v5 ) /*0x5e2885*/
  {
    do /*0x5e2980*/
    {
      if ( v3 ) /*0x5e288d*/
      {
        v6 = wcschr(v3, 0xAu); /*0x5e2892*/
        if ( v6 ) /*0x5e289c*/
        {
          v7 = v6 - v3 + 1; /*0x5e28a2*/
          if ( v5 >= v7 ) /*0x5e28a5*/
            v5 = v7; /*0x5e28a7*/
        }
      }
      v8 = _wcsdup(v3); /*0x5e28b2*/
      v8[v5] = 0; /*0x5e28c2*/
      Text::Layout(g_FogOfWarState, v8, &v17, &v18, 0); /*0x5e28d0*/
      free(v8); /*0x5e28d6*/
      v9 = Rect.right - Rect.left - v13; /*0x5e28e9*/
      if ( v17 < v9 - 4 ) /*0x5e28f7*/
      {
        UI_Draw(hWnd, v3, v5, a1); /*0x5e295d*/
        for ( v3 += v5; *v3 == 32; ++v3 ) /*0x5e2968*/
          ; /*0x5e296a*/
        v5 = wcslen(v3); /*0x5e297c*/
      }
      else
      {
        if ( v17 / 2 <= v9 ) /*0x5e2900*/
        {
          v14 = 1; /*0x5e290f*/
        }
        else
        {
          v14 = 10; /*0x5e2902*/
          v5 -= 10; /*0x5e290a*/
        }
        v10 = v5 - 1; /*0x5e2917*/
        if ( v5 - 1 <= 0 ) /*0x5e291c*/
          goto LABEL_18; /*0x5e291c*/
        v11 = &v3[v10]; /*0x5e291e*/
        while ( iswgraph(*v11) ) /*0x5e2930*/
        {
          --v10; /*0x5e2932*/
          --v11; /*0x5e2933*/
          if ( v10 <= 0 ) /*0x5e2938*/
          {
            v5 -= v14; /*0x5e293a*/
            goto LABEL_23; /*0x5e2940*/
          }
        }
        if ( v10 == -1 ) /*0x5e2945*/
LABEL_18:
          v10 = v5 - v14; /*0x5e294b*/
        v5 = v10; /*0x5e294d*/
      }
LABEL_23:
      ; /*0x5e297e*/
    }
    while ( v5 ); /*0x5e2980*/
    v4 = hWnd; /*0x5e2986*/
  }
  return ReleaseDC(v4, hDC); /*0x5e2996*/
}



// ==== 0x005E29A0  UI_Draw  this=-  sig=csp ====
LRESULT __fastcall sub_5E29A0(HWND hWnd, wchar_t *Source, size_t Count, LPARAM lParam)
{
  wchar_t *v5; // eax
  LRESULT v6; // ebx
  LRESULT v7; // ebp
  bool v8; // bl
  LRESULT v9; // eax
  LRESULT v11; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF
  signed int Counta; // [esp+28h] [ebp+4h]

  memset(&word_AC029C, 0, 0x400u); /*0x5e29b5*/
  wcsncpy(&word_AC029C, Source, Count); /*0x5e29c2*/
  v5 = wcschr(&word_AC029C, 0xDu); /*0x5e29ce*/
  if ( v5 || (v5 = wcschr(&word_AC029C, 0xAu)) != 0 ) /*0x5e29eb*/
    *v5 = 0; /*0x5e29ed*/
  v11 = SendMessageA(hWnd, 0x49Du, 0, 1); /*0x5e2a0e*/
  v6 = SendMessageA(hWnd, 0x18Eu, 0, 0); /*0x5e2a14*/
  v7 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e2a22*/
  Counta = SendMessageA(hWnd, 0x1A1u, v6, 0); /*0x5e2a35*/
  GetWindowRect(hWnd, &Rect); /*0x5e2a39*/
  v8 = v7 - v6 <= (Rect.bottom - Rect.top) / Counta; /*0x5e2a54*/
  if ( v7 > 500 ) /*0x5e2a5d*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x5e2a69*/
    --v7; /*0x5e2a6b*/
  }
  v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)&word_AC029C); /*0x5e2a79*/
  if ( lParam != -1 ) /*0x5e2a82*/
    SendMessageA(hWnd, 0x498u, v9, lParam); /*0x5e2a8c*/
  if ( v8 ) /*0x5e2a90*/
    SendMessageA(hWnd, 0x197u, v7, 0); /*0x5e2a9b*/
  return SendMessageA(hWnd, 0x49Du, 0, v11); /*0x5e2aac*/
}



// ==== 0x005E2AC0  sub_5E2AC0  this=-  sig=ida-proto ====
void sub_5E2AC0()
{
  HWND Current; // edi
  HWND DlgItem; // esi
  HWND v2; // eax
  LRESULT v3; // edi
  wchar_t *v4; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( Dialog::GetCurrent() ) /*0x5e2ac4*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2adc*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e2ae6*/
    if ( DlgItem ) /*0x5e2aea*/
    {
LABEL_5:
      v3 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5e2b0b*/
      unknown_libname_74(&v5); /*0x5e2b23*/
      if ( v3 > 0 ) /*0x5e2b2a*/
        UI_Assign_623F60(DlgItem, v3 - 1, (void **)&v5); /*0x5e2b36*/
      if ( (unsigned int)WideString::Length((const wchar_t **)&v5) >= 0x24 ) /*0x5e2b47*/
      {
        WideString::Assign_Alt((void **)&v5, asc_831774); /*0x5e2b6e*/
      }
      else
      {
        SendMessageA(DlgItem, 0x182u, v3 - 1, 0); /*0x5e2b53*/
        WideString::Append2((wchar_t **)&v5, asc_831774); /*0x5e2b5e*/
      }
      v4 = WideString::GetOrEmpty((wchar_t **)&v5); /*0x5e2b78*/
      DrawDialogText(-1, v4, DlgItem); /*0x5e2b82*/
      InvalidateRect(DlgItem, 0, 0); /*0x5e2b8c*/
      DeleteAndZero::Alt((void **)&v5); /*0x5e2b96*/
    }
    else
    {
      while ( 1 ) /*0x5e2aee*/
      {
        v2 = (HWND)Dialog::FindByPtr(Current); /*0x5e2aee*/
        Current = v2; /*0x5e2af3*/
        if ( !v2 ) /*0x5e2af7*/
          break; /*0x5e2af7*/
        DlgItem = GetDlgItem(v2, 1343); /*0x5e2b05*/
        if ( DlgItem ) /*0x5e2b09*/
          goto LABEL_5; /*0x5e2b09*/
      }
    }
  }
}



// ==== 0x005E2BA0  Network::processQueue  this=Network  sig=csp ====
int __thiscall Network::processQueue(Network *this)
{
  int result; // eax
  Network **ptr_C; // esi
  int nextArrayIndex; // edi
  Network *v4; // edx

  result = 0; /*0x5e2ba6*/
  if ( stru_A80220.? > 0 ) /*0x5e2baa*/
  {
    ptr_C = (Network **)stru_A80220.?; /*0x5e2bae*/
    nextArrayIndex = stru_A80220.?; /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      v4 = *ptr_C; /*0x5e2bb7*/
      if ( *ptr_C && v4->__pad_1AA[66] && !v4->Network_field_0x1F5[0] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      ++ptr_C; /*0x5e2bd6*/
      --nextArrayIndex; /*0x5e2bd9*/
    }
    while ( nextArrayIndex ); /*0x5e2bda*/
  }
  return result; /*0x5e2bdf*/
}



// ==== 0x005E2BE0  Network::CountDisconnectedHouses  this=Network  sig=csp ====
int __thiscall Network::CountDisconnectedHouses(Network *this)
{
  int nextArrayIndex; // eax
  int v2; // ecx
  int v3; // ebp
  char v4; // bl
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  nextArrayIndex = stru_A80220.?; /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( stru_A80220.? <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((_DWORD *)stru_A80220.? + v2); /*0x5e2c0a*/
    if ( v3 && !*(_BYTE *)(v3 + 501) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && (Network *)v3 != this ) /*0x5e2c34*/
    {
      v4 = 0; /*0x5e2c36*/
      v5 = 0; /*0x5e2c38*/
      if ( nextArrayIndex <= 0 ) /*0x5e2c3c*/
        goto LABEL_20; /*0x5e2c3c*/
      do /*0x5e2c9e*/
      {
        if ( v5 != v9 ) /*0x5e2c42*/
        {
          v6 = *((_DWORD *)stru_A80220.? + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !*(_BYTE *)(v6 + 501) /*0x5e2c7d*/
              && !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422)
              && (Network *)v6 != this
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v3, *((#375 **)stru_A80220.? + v5))
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)v3) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        nextArrayIndex = stru_A80220.?; /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < stru_A80220.? ); /*0x5e2c9e*/
      if ( !v4 ) /*0x5e2ca2*/
LABEL_20:
        ++v8; /*0x5e2ca4*/
    }
    v2 = ++v9; /*0x5e2cac*/
  }
  while ( v9 < nextArrayIndex ); /*0x5e2cb3*/
  return v8; /*0x5e2cc1*/
}



// ==== 0x005E2CD0  ShowDialogConfirm  this=-  sig=csp ====
int __fastcall ShowDialogConfirm(wchar_t *String, int nIDDlgItem, unsigned __int8 (*a3)(void), char a4)
{
  wchar_t *v4; // ebp
  int v6; // edi
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // ebx
  LONG WindowLongA; // eax
  LONG (__stdcall *v10)(HWND, int); // ebp
  HWND v11; // ebx
  LONG v12; // eax
  HWND v13; // eax
  HWND v14; // ebx
  LONG v15; // eax
  HWND v16; // ebx
  LONG v17; // eax
  HWND v18; // eax

  v4 = String; /*0x5e2cd3*/
  if ( String && wcslen(String) )
  {
    if ( a4 )
    {
      v6 = 251; /*0x5e2cfe*/
    }
    else if ( nIDDlgItem )
    {
      if ( nIDDlgItem == 1 )
        v6 = 252; /*0x5e2d15*/
      else
        v6 = nIDDlgItem != 4 ? 251 : 294;
    }
    else
    {
      v6 = 208; /*0x5e2d09*/
    }
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)v6, g_hWnd, (DLGPROC)sub_5E2E40, 0); /*0x5e2d48*/
    SetupDialog((HWND)DialogIndirect, v6); /*0x5e2d4e*/
    switch ( nIDDlgItem ) /*0x5e2d5b*/
    {
      case 0: /*0x5e2d5b*/
        DlgItem = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d62*/
        WindowLongA = GetWindowLongA(DlgItem, -16); /*0x5e2d67*/
        SetWindowLongA(DlgItem, -16, WindowLongA | 0x10000000); /*0x5e2d76*/
        if ( a4 ) /*0x5e2d82*/
          UI_Get_60B350(DlgItem); /*0x5e2d86*/
        goto LABEL_18; /*0x5e2d8b*/
      case 1: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2d96*/
        v11 = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d9c*/
        v12 = GetWindowLongA(v11, -16); /*0x5e2da1*/
        SetWindowLongA(v11, -16, v12 | 0x10000000); /*0x5e2dac*/
        v13 = GetDlgItem((HWND)DialogIndirect, 2); /*0x5e2db4*/
        break;
      case 4: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2dc0*/
        v14 = GetDlgItem((HWND)DialogIndirect, 6); /*0x5e2dc6*/
        v15 = GetWindowLongA(v14, -16); /*0x5e2dcb*/
        SetWindowLongA(v14, -16, v15 | 0x10000000); /*0x5e2dd6*/
        v13 = GetDlgItem((HWND)DialogIndirect, 7); /*0x5e2ddf*/
        break;
      default:
LABEL_18:
        v18 = GetDlgItem((HWND)DialogIndirect, 1456); /*0x5e2dfb*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v4); /*0x5e2e0c*/
        ShowWindow((HWND)DialogIndirect, 1); /*0x5e2e15*/
        return MessageDialogLoopAlt((HWND)DialogIndirect, a3, 0, 1, 1); /*0x5e2e31*/
    }
    v16 = v13; /*0x5e2de1*/
    v17 = v10(v13, -16); /*0x5e2de6*/
    SetWindowLongA(v16, -16, v17 | 0x10000000); /*0x5e2df1*/
    v4 = String; /*0x5e2df7*/
    goto LABEL_18; /*0x5e2df7*/
  }
  return 0; /*0x5e2e2e*/
}



// ==== 0x005E2E40  sub_5E2E40  this=-  sig=csp ====
INT_PTR __stdcall sub_5E2E40(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax

  if ( a2 <= 0x2B ) /*0x5e2e47*/
  {
    switch ( a2 ) /*0x5e2e49*/
    {
      case 0x2Bu: /*0x5e2e49*/
        Dialog::Resize(a4); /*0x5e2e86*/
        return 1; /*0x5e2e90*/
      case 0xFu: /*0x5e2e49*/
        Dialog::DrawBackground(hWnd); /*0x5e2e64*/
        Dialog::StopBink(hWnd); /*0x5e2e6b*/
        ValidateRect(hWnd, 0); /*0x5e2e73*/
        return 1; /*0x5e2e7f*/
      case 0x14u: /*0x5e2e49*/
        return 1; /*0x5e2e5a*/
    }
    return 0; /*0x5e2e53*/
  }
  if ( a2 != 273 ) /*0x5e2e98*/
    return 0; /*0x5e2ecc*/
  switch ( (__int16)a3 ) /*0x5e2eb4*/
  {
    case 1: /*0x5e2eb4*/
    case 2: /*0x5e2eb4*/
    case 6: /*0x5e2eb4*/
    case 7: /*0x5e2eb4*/
      CloseDialog(hWnd, (unsigned __int16)a3); /*0x5e2ebf*/
      result = 1; /*0x5e2ec4*/
      break; /*0x5e2ec9*/
    default:
      return 0;
  }
  return result; /*0x5e2e5a*/
}



// ==== 0x005E2EF0  SetDialogPlayerName  this=Skirmish  sig=csp ====
void __fastcall Dialog_SetPlayerName(HWND hDlg, int a2)
{
  HWND DlgItem; // edi
  wchar_t *v4; // eax

  if ( a2 ) /*0x5e2ef5*/
  {
    DlgItem = GetDlgItem(hDlg, 1772); /*0x5e2f07*/
    v4 = WideString::GetOrEmpty_Alt((wchar_t **)(a2 + 32)); /*0x5e2f09*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v4); /*0x5e2f17*/
  }
}



// ==== 0x005E2F60  Dialog::ShowPlayerName  this=Dialog  sig=csp ====
int __thiscall Dialog::ShowPlayerName(Dialog *this)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem((HWND)this, 1448); /*0x5e2f66*/
  return SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5e2f7f*/
}



// ==== 0x005E2F80  Skirmish_Setup  this=-  sig=ida-proto ====
int sub_5E2F80()
{
  int result; // eax

  result = MultiplayerGameMode::Find(*(void **)stru_A8B250); /*0x5e2f86*/
  if ( !result ) /*0x5e2f8d*/
    return MultiplayerGameMode::GetFirst(); /*0x5e2f8f*/
  return result; /*0x5e2f94*/
}



// ==== 0x005E2FA0  ObjectClass::Event_Handle  this=ObjectClass  sig=csp ====
int Event_Handle(ObjectClass *this)
{
  int result; // eax
  HWND Current; // esi

  result = Dialog::GetCurrentType(); /*0x5e2fa2*/
  if ( result == 107 ) /*0x5e2faa*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2fb7*/
    result = SendDlgItemMessageA(Current, 1771, 0x188u, 0, 0); /*0x5e2fc8*/
    if ( result != -1 ) /*0x5e2fcd*/
    {
      result = SendDlgItemMessageA(Current, 1771, 0x199u, result, 0); /*0x5e2fdd*/
      if ( result ) /*0x5e2fe1*/
        return (*(int (__thiscall **)(int))(*(_DWORD *)result + 148))(result); /*0x5e2fe7*/
    }
  }
  else if ( dword_A8B23C ) /*0x5e2ff8*/
  {
    return (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 37))(dword_A8B23C); /*0x5e2ffc*/
  }
  return result; /*0x5e2fed*/
}



// ==== 0x005E3010  InitSkirmishDialogControls  this=Dialog  sig=csp ====
LRESULT __fastcall SkirmishDialog_InitControls(HWND hDlg, int a2)
{
  int v3; // eax
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  int v12; // [esp+Ch] [ebp-1Ch]
  LPARAM lParam; // [esp+10h] [ebp-18h]
  LPARAM v14; // [esp+14h] [ebp-14h]
  WPARAM wParam; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch]
  _DWORD v17[2]; // [esp+20h] [ebp-8h] BYREF

  v14 = MEMORY[0xA8B270]; /*0x5e3022*/
  lParam = MEMORY[0xA8B25C]; /*0x5e3032*/
  v12 = MEMORY[0xA8B268]; /*0x5e3038*/
  if ( a2 ) /*0x5e303c*/
  {
    ComPtr::Constructor(&wParam); /*0x5e3047*/
    wParam = (WPARAM)&rc_ptr<WDTTerritory>::`vftable'; /*0x5e3059*/
    if ( dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5e3066*/
    {
      v3 = FindWDTTerritoryClass(v17, *(_DWORD *)dword_A8B240); /*0x5e3072*/
      ComPtr::Set(&wParam, *(_DWORD *)(v3 + 4)); /*0x5e307f*/
      v17[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x5e3088*/
      ComPtr::Release(v17); /*0x5e308c*/
    }
    if ( v16 ) /*0x5e3097*/
    {
      DlgItem = GetDlgItem(hDlg, 1348); /*0x5e30ab*/
      EnableWindow(DlgItem, 0); /*0x5e30b4*/
      v5 = GetDlgItem(hDlg, 1748); /*0x5e30be*/
      EnableWindow(v5, 0); /*0x5e30c1*/
      if ( (*(_DWORD *)(v16 + 60) & 0x20000) == 0 ) /*0x5e30ce*/
      {
        v6 = GetDlgItem(hDlg, 1026); /*0x5e30d8*/
        EnableWindow(v6, 0); /*0x5e30db*/
      }
      if ( (BYTE1(*(_DWORD *)(v16 + 60)) & 0x80u) == 0 ) /*0x5e30e7*/
      {
        v7 = GetDlgItem(hDlg, 1359); /*0x5e30f1*/
        EnableWindow(v7, 0); /*0x5e30f4*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x400) == 0 ) /*0x5e3100*/
      {
        v8 = GetDlgItem(hDlg, 1358); /*0x5e310a*/
        EnableWindow(v8, 0); /*0x5e310d*/
      }
      if ( (*(_BYTE *)(v16 + 60) & 0x20) == 0 ) /*0x5e3117*/
      {
        v9 = GetDlgItem(hDlg, 1000); /*0x5e3121*/
        EnableWindow(v9, 0); /*0x5e3124*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x100) == 0 ) /*0x5e3130*/
      {
        v10 = GetDlgItem(hDlg, 1357); /*0x5e313a*/
        EnableWindow(v10, 0); /*0x5e313d*/
      }
    }
    SendDlgItemMessageA(hDlg, 1321, 0x406u, 1u, 393216); /*0x5e3151*/
    SendDlgItemMessageA( /*0x5e317d*/
      hDlg,
      1026,
      0x406u,
      1u,
      *((unsigned __int16 *)dword_8871E0 + 2624) | (*((unsigned __int16 *)dword_8871E0 + 2628) << 16));
    SendDlgItemMessageA(hDlg, 1026, 0x4ABu, 0, *((_DWORD *)dword_8871E0 + 1315)); /*0x5e3198*/
    SendDlgItemMessageA( /*0x5e31c4*/
      hDlg,
      1359,
      0x406u,
      1u,
      *((unsigned __int16 *)dword_8871E0 + 2632) | (*((unsigned __int16 *)dword_8871E0 + 2636) << 16));
    wParam = (WPARAM)&rc_ptr<WDTTerritory>::`vftable'; /*0x5e31ca*/
    ComPtr::Release(&wParam); /*0x5e31d2*/
  }
  SendDlgItemMessageA(hDlg, 1321, 0x405u, 1u, 6 - v12); /*0x5e31f1*/
  SendDlgItemMessageA(hDlg, 1026, 0x405u, 1u, lParam); /*0x5e3205*/
  SendDlgItemMessageA(hDlg, 1359, 0x405u, 1u, v14); /*0x5e3219*/
  wParam = 0; /*0x5e3223*/
  v16 = 1; /*0x5e322b*/
  SendDlgItemMessageA(hDlg, 1358, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B262]), 0); /*0x5e3245*/
  SendDlgItemMessageA(hDlg, 1690, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B263]), 0); /*0x5e3261*/
  SendDlgItemMessageA(hDlg, 1693, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B264]), 0); /*0x5e327f*/
  SendDlgItemMessageA(hDlg, 1000, 0xF1u, *(&wParam + (unsigned __int8)dword_A8B320), 0); /*0x5e329f*/
  return SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B261]), 0); /*0x5e32bd*/
}



// ==== 0x005E32D0  CheckGameSettingsChanged  this=-  sig=ida-proto ====
char __fastcall Game_CheckSettingsChanged(char a1, char a2)
{
  char v2; // bl
  char result; // al
  char Buffer[520]; // [esp+8h] [ebp-208h] BYREF

  v2 = 0; /*0x5e32e1*/
  if ( time(0) != dword_AC11B8 ) /*0x5e32f1*/
    goto LABEL_5; /*0x5e32f1*/
  if ( a1 ) /*0x5e32fb*/
    byte_AC11BC = 1; /*0x5e32fd*/
  result = a2; /*0x5e3304*/
  if ( a2 ) /*0x5e330a*/
  {
LABEL_5:
    if ( byte_AC11BC ) /*0x5e3317*/
      a1 = 1; /*0x5e3319*/
    byte_AC11BC = 0; /*0x5e3323*/
    if ( ppv ) /*0x5e332e*/
    {
      if ( time(0) - dword_AC11B8 >= 5 ) /*0x5e3343*/
        goto LABEL_11; /*0x5e3343*/
    }
    else if ( time(0) - dword_AC11B8 >= 2 ) /*0x5e335a*/
    {
LABEL_11:
      v2 = 1; /*0x5e335c*/
    }
    if ( a1 ) /*0x5e3364*/
      v2 = 1; /*0x5e3366*/
    if ( dword_8316D8 != MEMORY[0xA8B268] ) /*0x5e3375*/
      v2 = 1; /*0x5e3377*/
    if ( dword_8316DC != MEMORY[0xA8B25C] ) /*0x5e3386*/
      v2 = 1; /*0x5e3388*/
    if ( dword_8316E0 != MEMORY[0xA8B270] ) /*0x5e3397*/
      v2 = 1; /*0x5e3399*/
    if ( byte_AC11BD != MEMORY[0xA8B262] ) /*0x5e33a8*/
      v2 = 1; /*0x5e33aa*/
    if ( byte_AC11BE != MEMORY[0xA8B263] ) /*0x5e33b9*/
      v2 = 1; /*0x5e33bb*/
    if ( byte_AC11BF != (_BYTE)MEMORY[0xA8B264] ) /*0x5e33ca*/
      v2 = 1; /*0x5e33cc*/
    if ( byte_AC11C0 != (_BYTE)dword_A8B320 ) /*0x5e33db*/
      v2 = 1; /*0x5e33dd*/
    if ( byte_AC11C1 != MEMORY[0xA8B261] ) /*0x5e33ec*/
      v2 = 1; /*0x5e33ee*/
    word_AC1146 = 0; /*0x5e33fa*/
    if ( _wcsicmp(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1) ) /*0x5e3403*/
      v2 = 1; /*0x5e340f*/
    byte_AC0CFD = 0; /*0x5e341b*/
    if ( _strcmpi(byte_AC0CF0, &byte_A8B8E0) ) /*0x5e3422*/
      v2 = 1; /*0x5e342e*/
    byte_AC0D20 = 0; /*0x5e343a*/
    if ( _strcmpi(byte_AC0D00, &byte_A8BAE2) ) /*0x5e3441*/
      v2 = 1; /*0x5e344d*/
    if ( dword_8316E8 != dword_A8BB04 ) /*0x5e345c*/
      v2 = 1; /*0x5e345e*/
    result = byte_8316E4; /*0x5e3460*/
    if ( byte_8316E4 != (_BYTE)dword_A8BB08 || v2 ) /*0x5e3471*/
    {
      dword_AC11B8 = time(0); /*0x5e348c*/
      dword_8316D8 = MEMORY[0xA8B268]; /*0x5e3496*/
      dword_8316DC = MEMORY[0xA8B25C]; /*0x5e34a2*/
      dword_8316E0 = MEMORY[0xA8B270]; /*0x5e34ae*/
      byte_AC11BD = MEMORY[0xA8B262]; /*0x5e34b8*/
      byte_AC11BE = MEMORY[0xA8B263]; /*0x5e34c4*/
      byte_AC11BF = MEMORY[0xA8B264]; /*0x5e34da*/
      byte_AC11C0 = dword_A8B320; /*0x5e34df*/
      byte_AC11C1 = MEMORY[0xA8B261]; /*0x5e34e5*/
      wcscpy(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1); /*0x5e34eb*/
      strcpy(byte_AC0D00, &byte_A8BAE2); /*0x5e350f*/
      dword_8316E8 = dword_A8BB04; /*0x5e3536*/
      strcpy(byte_AC0CF0, &byte_A8B8E0); /*0x5e353e*/
      byte_8316E4 = dword_A8BB08; /*0x5e3553*/
      memset(Buffer, 0, sizeof(Buffer)); /*0x5e355e*/
      if ( ppv ) /*0x5e356d*/
        Game::EncodeGameSetupState(Buffer); /*0x5e356f*/
      else
        Game::BuildGameSettingsPacket(Buffer); /*0x5e3585*/
      return Network::SendOptionsGame(Buffer); /*0x5e3578*/
    }
  }
  return result; /*0x5e357d*/
}



// ==== 0x005E35A0  ObjectClass::method_5E35A0  this=ObjectClass  sig=csp ====
char sub_5E35A0(ObjectClass *this)
{
  char *v1; // edi
  unsigned int v2; // kr08_4
  char result; // al
  int v4; // edi
  int i; // esi
  int v6[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v7; // [esp+1CCh] [ebp-4h]
  char v8; // [esp+1CEh] [ebp-2h]

  memset(v6, 0, sizeof(v6)); /*0x5e35b7*/
  v7 = 0; /*0x5e35b9*/
  v8 = 0; /*0x5e35bb*/
  v6[0] = 40; /*0x5e35c6*/
  v2 = strlen(unk_A8B380) + 1; /*0x5e35ce*/
  v1 = &unk_A8B380[v2++]; /*0x5e35ce*/
  result = v2 - 1; /*0x5e35d4*/
  qmemcpy(&v6[1], &v1[1 - v2], v2 - 1); /*0x5e35dd*/
  v4 = dword_A8DA84; /*0x5e35e6*/
  for ( i = 1; i < v4; ++i ) /*0x5e35f3*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v6, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e3617*/
    result = Event::Dispatch(); /*0x5e361c*/
  }
  return result; /*0x5e3626*/
}



// ==== 0x005E3630  ObjectClass::Network_Create  this=ObjectClass  sig=csp ====
char Network_Create(ObjectClass *this)
{
  char result; // al
  char *v2; // edi
  unsigned int v3; // kr08_4
  int v4; // edi
  int i; // esi
  ObjectClass *v6; // [esp+0h] [ebp-1D0h]
  int v7[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v8; // [esp+1CCh] [ebp-4h]
  char v9; // [esp+1CEh] [ebp-2h]

  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e3640*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3666*/
    v8 = 0; /*0x5e3668*/
    v9 = 0; /*0x5e366a*/
    v7[0] = 40; /*0x5e3675*/
    v3 = strlen(unk_A8B380) + 1; /*0x5e367d*/
    v2 = &unk_A8B380[v3++]; /*0x5e367d*/
    result = v3 - 1; /*0x5e3683*/
    qmemcpy(&v7[1], &v2[1 - v3], v3 - 1); /*0x5e368c*/
    v4 = dword_A8DA84; /*0x5e3695*/
    for ( i = 1; i < v4; ++i ) /*0x5e36a2*/
    {
      Network::SendMessage(&unk_A8E9C0.Socket, (int)v7, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e36c6*/
      result = Event::Dispatch(); /*0x5e36cb*/
    }
  }
  else
  {
    result = *(_BYTE *)&dword_A8B238 - 4; /*0x5e3642*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e3643*/
      return Network_Create_7A2730(v6); /*0x5e3649*/
  }
  return result; /*0x5e364e*/
}



// ==== 0x005E36E0  Network_Handle  this=-  sig=ida-proto ====
void sub_5E36E0()
{
  dword_A8DAB0 = 1; /*0x5e36e5*/
  if ( ppv ) /*0x5e36ee*/
    UI_Setup_7A2750(); /*0x5e36f0*/
  else
    UI_Setup_5E2340(); /*0x5e36f5*/
}



// ==== 0x005E3720  Network::SendOptionsGame  this=char*  sig=csp ====
int __thiscall Game_NetworkSendOptions(char *Source)
{
  int result; // eax
  int v2; // eax
  int i; // esi
  char *v4; // edi
  char *v5; // eax
  _DWORD v6[114]; // [esp+8h] [ebp-5C8h] BYREF
  char Destination[1024]; // [esp+1D0h] [ebp-400h] BYREF

  if ( ppv ) /*0x5e3731*/
  {
    strncpy(Destination, Source, 0x3FFu); /*0x5e3741*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, Destination); /*0x5e3759*/
  }
  else
  {
    memset(v6, 0, 455); /*0x5e3771*/
    v6[0] = 23; /*0x5e378a*/
    strcpy((char *)&v6[1], unk_A8B380); /*0x5e379f*/
    v2 = dword_A8B394; /*0x5e37b5*/
    strcpy((char *)&v6[11] + 3, Source); /*0x5e37c3*/
    *(_DWORD *)((char *)&v6[111] + 3) = v2; /*0x5e37d1*/
    *(_DWORD *)((char *)&v6[112] + 3) = WideString::Hash(&word_A8D610); /*0x5e37dd*/
    result = dword_A8DA84; /*0x5e37e4*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e37f1*/
    {
      v4 = *(char **)(dword_A8DA78 + 4 * i); /*0x5e37f9*/
      v5 = ToWideStringChar(v4); /*0x5e37fe*/
      Debug::Log("Sending public game options to %s\n", v5); /*0x5e3809*/
      Network::SendMessage((int)&unk_A8E9C0, (int)v6, 455, 1, (int)(v4 + 40), 0, 0); /*0x5e382a*/
      Event::Dispatch(); /*0x5e382f*/
      result = dword_A8DA84; /*0x5e3834*/
    }
  }
  return result; /*0x5e375c*/
}



// ==== 0x005E3850  WOLobby_Play  this=AbstractClass  sig=csp ====
int __fastcall sub_5E3850(const char *a1, const char *a2)
{
  LPVOID v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  _DWORD v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]

  v2 = ppv; /*0x5e3857*/
  if ( ppv ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], a1); /*0x5e3892*/
    return (*(int (__stdcall **)(LPVOID, char *, const char *))(*(_DWORD *)v2 + 56))(v2, v7, a2); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, a2); /*0x5e3915*/
    dword_A8D7F7 = Session::GetPlayerColor(dword_A8B238); /*0x5e392d*/
    dword_A8D7FB = WideString::Hash(word_A8D610); /*0x5e3937*/
    result = dword_A8DA84; /*0x5e393c*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, a1) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage((int)unk_A8E9C0, (int)v8, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5e39a0*/
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = dword_A8DA84; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/
}



// ==== 0x005E39C0  ValidateNetworkLobbyHostMap  this=-  sig=csp ====
HWND __fastcall NetworkLobby_ValidateHostMap(char *a1, int a2)
{
  char *v2; // edi
  char *v4; // eax
  HWND result; // eax
  int v6; // esi
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *String; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]

  v2 = a1; /*0x5e39c3*/
  if ( !a1 ) /*0x5e39c9*/
    v2 = unk_A8B380; /*0x5e39cb*/
  v4 = CharToWideString(v2); /*0x5e39d7*/
  if ( !wcscmp((const wchar_t *)v4, word_A8D610) ) /*0x5e39dd*/
    a2 = 1; /*0x5e39e9*/
  result = (HWND)dword_A8DA84; /*0x5e39ee*/
  v6 = 0; /*0x5e39f3*/
  if ( dword_A8DA84 > 0 ) /*0x5e39f7*/
  {
    while ( 1 ) /*0x5e3a06*/
    {
      v7 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v6)); /*0x5e3a06*/
      result = (HWND)_strcmpi(v7, v2); /*0x5e3a0c*/
      if ( !result ) /*0x5e3a16*/
        break; /*0x5e3a16*/
      result = (HWND)dword_A8DA84; /*0x5e3a18*/
      if ( ++v6 >= dword_A8DA84 ) /*0x5e3a20*/
        return result; /*0x5e3a20*/
    }
    if ( v6 != -1 ) /*0x5e3a29*/
    {
      *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v6) + 127) = a2; /*0x5e3a36*/
      if ( a2 ) /*0x5e3a39*/
      {
        if ( a2 == 2 ) /*0x5e3a71*/
        {
          v11 = *(_DWORD *)(dword_A8DA78 + 4 * v6); /*0x5e3a88*/
          String = GetStringCSF(aGuiHostmaptran, 0, g_Str_File_netshare_cpp, 1173); /*0x5e3a93*/
          return Dialog::ShowMessage(-1, (size_t)String, v11, 11055906); /*0x5e3a9b*/
        }
      }
      else
      {
        v10 = *(_DWORD *)(dword_A8DA78 + 4 * v6); /*0x5e3a4a*/
        v8 = GetStringCSF(g_Str_GUI_HostNoMap, 0, g_Str_File_netshare_cpp, 1169); /*0x5e3a5a*/
        return Dialog::ShowMessage(-1, (size_t)v8, v10, 11055906); /*0x5e3a62*/
      }
    }
  }
  return result; /*0x5e3a22*/
}



// ==== 0x005E3AB0  SendMultiplayerStartSignal  this=-  sig=ida-proto ====
int SendMultiplayerStartSignal()
{
  int v0; // esi
  HWND v1; // eax
  HWND (__stdcall *v2)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  int result; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  BOOL v11; // [esp-4h] [ebp-4Ch]
  void *v12; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( ppv ) /*0x5e3abb*/
  {
    String::Assign((char **)&v12, 0); /*0x5e3ac3*/
    v0 = SendMultiplayerStartSignal_Start_77EBA0(&v12); /*0x5e3ad5*/
    DeleteAndZero(&v12); /*0x5e3ad7*/
  }
  else
  {
    v0 = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  dword_A8DAB0 = 0; /*0x5e3aec*/
  if ( ppv ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( v0 == 1 ) /*0x5e3b06*/
  {
    if ( ppv ) /*0x5e3b13*/
    {
      String::Assign((char **)&v12, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v12, 0); /*0x5e3b26*/
      DeleteAndZero(&v12); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, aA0); /*0x5e3b49*/
    Network::SendOptionsGame(Buffer); /*0x5e3b55*/
    if ( byte_AC11C2 ) /*0x5e3b66*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b68*/
      if ( !v1 ) /*0x5e3b6f*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3b76*/
        if ( !v1 ) /*0x5e3b7d*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3b84*/
          if ( !v1 ) /*0x5e3b8b*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3b92*/
        }
      }
      v11 = 1; /*0x5e3b97*/
    }
    else
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b9b*/
      if ( !v1 ) /*0x5e3ba2*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3ba9*/
        if ( !v1 ) /*0x5e3bb0*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3bb7*/
          if ( !v1 ) /*0x5e3bbe*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3bc5*/
        }
      }
      v11 = 0; /*0x5e3bca*/
    }
    v2 = GetDlgItem; /*0x5e3bcc*/
    DlgItem = GetDlgItem(v1, 1439); /*0x5e3bd8*/
    EnableWindow(DlgItem, v11); /*0x5e3bdb*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3be6*/
    if ( v4 ) /*0x5e3bed*/
      goto LABEL_40; /*0x5e3bed*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3bf8*/
    if ( v4 ) /*0x5e3bff*/
      goto LABEL_40; /*0x5e3bff*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c0a*/
    if ( v4 ) /*0x5e3c11*/
      goto LABEL_40; /*0x5e3c11*/
    goto LABEL_39; /*0x5e3c11*/
  }
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c21*/
  if ( !v5 ) /*0x5e3c28*/
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c2f*/
    if ( !v5 ) /*0x5e3c36*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c3d*/
      if ( !v5 ) /*0x5e3c44*/
        v5 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3c4b*/
    }
  }
  v2 = GetDlgItem; /*0x5e3c50*/
  v6 = GetDlgItem(v5, 1439); /*0x5e3c5c*/
  result = IsWindowEnabled(v6); /*0x5e3c5f*/
  if ( !result ) /*0x5e3c67*/
  {
    result = (unsigned __int8)byte_AC11C2; /*0x5e3c6d*/
    if ( byte_AC11C2 ) /*0x5e3c74*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c7f*/
      if ( !v8 ) /*0x5e3c86*/
      {
        v8 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c8d*/
        if ( !v8 ) /*0x5e3c94*/
        {
          v8 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c9b*/
          if ( !v8 ) /*0x5e3ca2*/
            v8 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ca9*/
        }
      }
      v9 = GetDlgItem(v8, 1439); /*0x5e3cb6*/
      EnableWindow(v9, 1); /*0x5e3cb9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3cc4*/
      if ( v4 ) /*0x5e3ccb*/
        goto LABEL_40; /*0x5e3ccb*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3cd2*/
      if ( v4 ) /*0x5e3cd9*/
        goto LABEL_40; /*0x5e3cd9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3ce0*/
      if ( v4 ) /*0x5e3ce7*/
        goto LABEL_40; /*0x5e3ce7*/
LABEL_39:
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ce9*/
LABEL_40:
      v10 = v2(v4, 1439); /*0x5e3cf3*/
      return InvalidateRect(v10, 0, 0); /*0x5e3d00*/
    }
  }
  return result; /*0x5e3d06*/
}



// ==== 0x005E3D10  SetupNetworkLobbyDialog  this=-  sig=csp ====
bool __fastcall SetupNetworkLobbyDialog(char *Source, void *a2)
{
  void *v3; // ebx
  char *v5; // edi
  char v6; // al
  HWND v7; // edi
  HWND DlgItem; // eax
  HWND v9; // esi
  HWND v10; // eax
  wchar_t *StringCSF; // eax
  __int16 v12; // ax
  char **v13; // ebx
  char *v14; // eax
  int v15; // ebp
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int i; // esi
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // edi
  unsigned int v27; // eax
  int j; // ecx
  void *v29; // edx
  void *v30; // esi
  HWND v31; // eax
  Lobby *v32; // esi
  char v33; // al
  ObjectClass *v34; // ecx
  int v35; // edx
  char *v36; // eax
  wchar_t *v37; // ebp
  int ResourceID2CSF; // eax
  int v39; // eax
  HWND v40; // eax
  int ResourceIDCSF; // edi
  ObjectClass *v42; // ecx
  int v43; // eax
  int v44; // eax
  HWND v45; // eax
  int v47; // esi
  unsigned int v48; // kr08_4
  char *v49; // eax
  c... [59502 chars total]



// ==== 0x005E5F10  RehashGenericHashMap  this=MultiplayerLobby  sig=csp ====
void __fastcall RehashGenericHashMap(HWND hWnd, int a2)
{
  LRESULT v4; // edi
  __int16 WindowLongA; // ax
  int DeleteAndZero_field_0x04; // edi
  void **v7; // eax
  void **v8; // edi
  void ***v9; // eax
  void **v10; // ecx
  int v11; // eax
  LRESULT v12; // eax
  WPARAM v13; // edi
  void **v14; // eax
  void **v15; // edi
  void ***v16; // edx
  void **v17; // eax
  int v18; // ebx
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  void *v22; // edi
  unsigned int v23; // edx
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  DeleteAndZero v28; // [esp+10h] [ebp-C1Ch] BYREF
  __int64 v29; // [esp+1Ch] [ebp-C10h]
  __int64 v30; // [esp+24h] [ebp-C08h]
  unsigned __int8 v31[1024]; // [esp+2Ch] [ebp-C00h] BYREF
  wchar_t lParam[1024]; // [esp+42Ch] [ebp-800h] BYREF

  v4 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e5f30*/
  v28.DeleteAndZero_field_0x08 = v4; /*0x5e5f36*/
  unknown_libname_74(&v28); /*0x5e5f3a*/
  if ( v4 ) /*0x5e5f41*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e5f4a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e5f52*/
    {
      DeleteAndZero_field_0x04 = 0; /*0x5e5f5c*/
      for ( v28.DeleteAndZero_field_0x04 = 0; /*0x5e5f64*/
            DeleteAndZero_field_0x04 < v28.DeleteAndZero_field_0x08;
            v28.DeleteAndZero_field_0x04 = DeleteAndZero_field_0x04 )
      {
        if ( SendMessageA(hWnd, 0x187u, DeleteAndZero_field_0x04, 0) ) /*0x5e5f73*/
        {
          if ( SendMessageA(hWnd, 0x4CFu, DeleteAndZero_field_0x04, 0) ) /*0x5e5f86*/
          {
            SendMessageA(hWnd, 0x4B6u, DeleteAndZero_field_0x04, (LPARAM)lParam); /*0x5e5f9b*/
          }
          else
          {
            SendMessageA(hWnd, 0x4B7u, DeleteAndZero_field_0x04, (LPARAM)v31); /*0x5e5fab*/
            BulkCharToWide(lParam, v31, -1); /*0x5e5fba*/
          }
          WideString::Assign_Alt((void **)&v28, lParam); /*0x5e5fcb*/
          v7 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e5fd2*/
          v8 = v7; /*0x5e5fd7*/
          if ( v7 ) /*0x5e5fde*/
            unknown_libname_74(v7); /*0x5e5fe2*/
          else
            v8 = 0; /*0x5e5fe9*/
          WideString::Reassign_Alt(v8, (const wchar_t **)&v28); /*0x5e5ff2*/
          *((_BYTE *)v8 + 4) = 1; /*0x5e5ffb*/
          v8[2] = 0; /*0x5e5fff*/
          v9 = (void ***)(*(_DWORD *)a2 /*0x5e6018*/
                        + 4
                        * ((*(int (__thiscall **)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          v10 = *v9; /*0x5e601d*/
          *v9 = v8; /*0x5e601f*/
          if ( v10 ) /*0x5e6023*/
            v8[2] = v10; /*0x5e6025*/
          v11 = *(_DWORD *)(a2 + 4); /*0x5e6028*/
          HIDWORD(v30) = 0; /*0x5e602b*/
          ++v11; /*0x5e602f*/
          HIDWORD(v29) = 0; /*0x5e6030*/
          *(_DWORD *)(a2 + 4) = v11; /*0x5e6034*/
          LODWORD(v30) = v11; /*0x5e6037*/
          LODWORD(v29) = *(_DWORD *)(a2 + 8); /*0x5e6042*/
          if ( (double)v30 / (double)(int)v29 >= *(double *)(a2 + 40) ) /*0x5e6052*/
            Map_Helper_5EF010((ObjectClass *)a2); /*0x5e6056*/
          DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x04; /*0x5e605b*/
        }
        ++DeleteAndZero_field_0x04; /*0x5e6063*/
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6078*/
    {
      v12 = SendMessageA(hWnd, 0x188u, 0, 0); /*0x5e6088*/
      v13 = v12; /*0x5e608a*/
      if ( v12 >= 0 ) /*0x5e608e*/
      {
        lParam[0] = 0; /*0x5e609d*/
        if ( SendMessageA(hWnd, 0x4CFu, v12, 0) ) /*0x5e60a7*/
        {
          SendMessageA(hWnd, 0x4B6u, v13, (LPARAM)lParam); /*0x5e60bc*/
        }
        else
        {
          SendMessageA(hWnd, 0x4B7u, v13, (LPARAM)v31); /*0x5e60cc*/
          BulkCharToWide(lParam, v31, -1); /*0x5e60db*/
        }
        WideString::Assign_Alt((void **)&v28, lParam); /*0x5e60ec*/
        v14 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e60f3*/
        v15 = v14; /*0x5e60f8*/
        if ( v14 ) /*0x5e60ff*/
          unknown_libname_74(v14); /*0x5e6103*/
        else
          v15 = 0; /*0x5e610a*/
        WideString::Reassign_Alt(v15, (const wchar_t **)&v28); /*0x5e6113*/
        *((_BYTE *)v15 + 4) = 1; /*0x5e611e*/
        v15[2] = 0; /*0x5e6122*/
        v16 = (void ***)(*(_DWORD *)a2 /*0x5e6137*/
                       + 4
                       * ((*(int (__thiscall **)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
        v17 = *v16; /*0x5e613a*/
        *v16 = v15; /*0x5e613c*/
        if ( v17 ) /*0x5e6140*/
          v15[2] = v17; /*0x5e6142*/
        v18 = *(_DWORD *)(a2 + 8); /*0x5e6148*/
        v19 = *(_DWORD *)(a2 + 4) + 1; /*0x5e614b*/
        v29 = (unsigned int)v19; /*0x5e6150*/
        *(_DWORD *)(a2 + 4) = v19; /*0x5e6154*/
        v20 = (double)v29; /*0x5e6157*/
        v29 = (unsigned int)v18; /*0x5e615b*/
        if ( v20 / (double)v18 >= *(double *)(a2 + 40) && *(_BYTE *)(a2 + 20) != 1 ) /*0x5e6179*/
        {
          v28.DeleteAndZero_field_0x08 = *(_DWORD *)a2; /*0x5e6184*/
          v21 = *(_DWORD *)(a2 + 12) + 1; /*0x5e6192*/
          *(_DWORD *)(a2 + 8) = 2 * v18; /*0x5e6194*/
          *(_DWORD *)(a2 + 12) = v21; /*0x5e6197*/
          v22 = (void *)__2_YAPAXI_Z(8 * v18); /*0x5e61a2*/
          v23 = 4 * *(_DWORD *)(a2 + 8); /*0x5e61a7*/
          *(_DWORD *)a2 = v22; /*0x5e61ae*/
          memset(v22, 0, v23); /*0x5e61b3*/
          if ( v18 > 0 ) /*0x5e61be*/
          {
            v28.DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x08; /*0x5e61c4*/
            do /*0x5e6206*/
            {
              v24 = *(_DWORD *)v28.DeleteAndZero_field_0x04; /*0x5e61cc*/
              if ( *(_DWORD *)v28.DeleteAndZero_field_0x04 ) /*0x5e61cc*/
              {
                do /*0x5e61f8*/
                {
                  v25 = (*(int (__thiscall **)(int))(a2 + 24))(v24) & ((1 << *(_DWORD *)(a2 + 12)) - 1); /*0x5e61e2*/
                  v26 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v25); /*0x5e61e6*/
                  *(_DWORD *)(*(_DWORD *)a2 + 4 * v25) = v24; /*0x5e61ec*/
                  v27 = *(_DWORD *)(v24 + 8); /*0x5e61ee*/
                  *(_DWORD *)(v24 + 8) = v26; /*0x5e61f1*/
                  v24 = v27; /*0x5e61f6*/
                }
                while ( v27 ); /*0x5e61f8*/
              }
              --v18; /*0x5e6201*/
              v28.DeleteAndZero_field_0x04 += 4; /*0x5e6202*/
            }
            while ( v18 ); /*0x5e6206*/
          }
          __3_YAXPAX_Z((void *)v28.DeleteAndZero_field_0x08); /*0x5e620d*/
        }
      }
    }
  }
  DeleteAndZero::Alt(&v28); /*0x5e6219*/
}



// ==== 0x005E6230  ProcessComboBoxAddString  this=-  sig=csp ====
void __fastcall ProcessComboBoxAddString(HWND hWnd, int a2)
{
  void (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v5; // edi
  __int16 WindowLongA; // ax
  LPARAM v7; // edi
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  DeleteAndZero *v13; // edi
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  wchar_t *v17; // eax
  LRESULT v18; // eax
  void *v19; // [esp+10h] [ebp-C10h] BYREF
  int DeleteAndZero_field_0x08; // [esp+14h] [ebp-C0Ch]
  __int64 v21; // [esp+18h] [ebp-C08h]
  wchar_t lParam[1024]; // [esp+20h] [ebp-C00h] BYREF
  unsigned __int8 v23[1024]; // [esp+820h] [ebp-400h] BYREF

  v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6239*/
  v5 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e6250*/
  DeleteAndZero_field_0x08 = v5; /*0x5e6256*/
  unknown_libname_74(&v19); /*0x5e625a*/
  if ( v5 ) /*0x5e6261*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e626a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e6272*/
    {
      v7 = 0; /*0x5e627c*/
      if ( DeleteAndZero_field_0x08 > 0 ) /*0x5e6280*/
      {
        while ( 1 ) /*0x5e628e*/
        {
          if ( ((LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))v2)(hWnd, 0x4CFu, v7, 0) ) /*0x5e6297*/
          {
            v2(hWnd, 0x4B6u, v7, (LPARAM)lParam); /*0x5e62a9*/
          }
          else
          {
            v2(hWnd, 0x4B7u, v7, (LPARAM)v23); /*0x5e62bc*/
            BulkCharToWide(lParam, v23, -1); /*0x5e62cb*/
          }
          WideString::Assign_Alt(&v19, lParam); /*0x5e62d9*/
          v8 = *(ObjectClass **)(*(_DWORD *)a2 /*0x5e62f4*/
                               + 4
                               * ((*(int (__thiscall **)(void **))(a2 + 24))(&v19) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          if ( v8 ) /*0x5e62f9*/
          {
            while ( !SendMultiplayerStartSignal_Start_77EBA0_Start(v8, (const wchar_t **)&v19) ) /*0x5e6309*/
            {
              v8 = (ObjectClass *)v8->?; /*0x5e630b*/
              if ( !v8 ) /*0x5e6310*/
                goto LABEL_14; /*0x5e6310*/
            }
            SendMessageA(hWnd, 0x185u, 1u, v7); /*0x5e631d*/
          }
LABEL_14:
          if ( ++v7 >= DeleteAndZero_field_0x08 ) /*0x5e632a*/
            break; /*0x5e632a*/
          v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6288*/
        }
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6338*/
    {
      v9 = *(_DWORD *)(a2 + 4); /*0x5e633e*/
      v10 = 0; /*0x5e6341*/
      if ( v9 ) /*0x5e6345*/
      {
        v11 = *(_DWORD *)(a2 + 8); /*0x5e634b*/
        v21 = (unsigned int)(v9 - 1); /*0x5e634f*/
        *(float *)&v21 = (double)v21 / (double)v11; /*0x5e6369*/
        if ( v11 > 0 ) /*0x5e636d*/
        {
          v12 = *(_DWORD **)a2; /*0x5e6375*/
          while ( !*v12 ) /*0x5e637a*/
          {
            ++v10; /*0x5e637c*/
            ++v12; /*0x5e637d*/
            if ( v10 >= v11 ) /*0x5e6382*/
              goto LABEL_30; /*0x5e6382*/
          }
          if ( v10 != -1 ) /*0x5e638c*/
          {
            WideString::Reassign_Alt(&v19, *(const wchar_t ***)(*(_DWORD *)a2 + 4 * v10)); /*0x5e639a*/
            v13 = *(DeleteAndZero **)(*(_DWORD *)a2 + 4 * v10); /*0x5e63a1*/
            DeleteAndZero_field_0x08 = v13->DeleteAndZero_field_0x08; /*0x5e63a9*/
            if ( v13 ) /*0x5e63ad*/
            {
              DeleteAndZero::Alt(v13); /*0x5e63b1*/
              __3_YAXPAX_Z(v13); /*0x5e63b7*/
            }
            v14 = *(float *)&v21; /*0x5e63c5*/
            *(_DWORD *)(*(_DWORD *)a2 + 4 * v10) = DeleteAndZero_field_0x08; /*0x5e63c9*/
            v15 = v14 < *(double *)(a2 + 32); /*0x5e63cf*/
            v16 = v14 == *(double *)(a2 + 32); /*0x5e63cf*/
            --*(_DWORD *)(a2 + 4); /*0x5e63d3*/
            if ( v15 || v16 ) /*0x5e63d8*/
              String_Process((ObjectClass *)a2); /*0x5e63df*/
            v17 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x5e63e8*/
            wcscpy(lParam, v17); /*0x5e63f3*/
            v18 = SendMessageA(hWnd, 0x4CAu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5e640e*/
            if ( v18 != -1 ) /*0x5e6413*/
              SendMessageA(hWnd, 0x186u, v18, 0); /*0x5e641e*/
          }
        }
      }
    }
  }
LABEL_30:
  DeleteAndZero::Alt((DeleteAndZero *)&v19); /*0x5e6420*/
}



// ==== 0x005E64C0  SessionClass::initPlayers  this=SessionClass  sig=csp ====
unsigned int __thiscall SessionClass::initPlayers(SessionClass *this)
{
  signed int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (SessionClass *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( dword_A8B23C ) /*0x5e64db*/
  {
    v3 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/
}



// ==== 0x005E6520  ReadPlayerCountMap  this=AbstractClass  sig=csp ====
int __fastcall Map_ReadPlayerCount(int a1)
{
  int Int_Overwrite; // edi
  int i; // esi
  void *v4[4]; // [esp+Ch] [ebp-150h] BYREF
  _DWORD v5[3]; // [esp+1Ch] [ebp-140h] BYREF
  _DWORD v6[6]; // [esp+28h] [ebp-134h] BYREF
  char v7; // [esp+40h] [ebp-11Ch]
  int v8; // [esp+44h] [ebp-118h]
  int v9; // [esp+48h] [ebp-114h]
  _DWORD v10[22]; // [esp+4Ch] [ebp-110h] BYREF
  _BYTE v11[12]; // [esp+A4h] [ebp-B8h] BYREF
  int v12; // [esp+B0h] [ebp-ACh]
  char Buffer[32]; // [esp+B8h] [ebp-A4h] BYREF
  char Source[132]; // [esp+D8h] [ebp-84h] BYREF

  if ( a1 < 0 || a1 >= dword_A8B8D8 ) /*0x5e6539*/
    return 0; /*0x5e6539*/
  strcpy(Source, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e6565*/
  CCFileClass::Construct(v10, Source); /*0x5e657a*/
  v4[1] = 0; /*0x5e6583*/
  v4[2] = 0; /*0x5e6587*/
  GenericNode::Constructor(v5); /*0x5e658b*/
  GenericNode::Constructor(v6); /*0x5e6594*/
  LinkedList::Prepend(v5, (int)v6); /*0x5e65aa*/
  v4[3] = &List<INIClass::INISection *>::`vftable'; /*0x5e65b9*/
  memset(&v6[3], 0, 12); /*0x5e65c1*/
  v7 = 0; /*0x5e65cd*/
  v8 = 0; /*0x5e65d1*/
  v9 = 0; /*0x5e65d5*/
  v4[0] = &INIClass::`vftable'; /*0x5e65d9*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x5e65e1*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5e65ee*/
    v10[0] = &CCFileClass::`vftable'; /*0x5e65fa*/
    v12 = 0; /*0x5e6602*/
    Vector::Clear((int)v11); /*0x5e6609*/
    v10[0] = &off_7E1668; /*0x5e6612*/
    BufferIOFileClass::Dtor(v10); /*0x5e661a*/
    return 0; /*0x5e662a*/
  }
  Int_Overwrite = 0; /*0x5e662b*/
  for ( i = 0; i < 8; ++i ) /*0x5e662d*/
  {
    sprintf(Buffer, "%d", i); /*0x5e663d*/
    if ( INIClass::ReadInt_Overwrite(g_INI_Key_Waypoints, Buffer, -1) != -1 ) /*0x5e6660*/
      ++Int_Overwrite; /*0x5e6662*/
  }
  if ( !Int_Overwrite ) /*0x5e666b*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite(aRandommap, aNumplayers, 0); /*0x5e6681*/
    if ( !Int_Overwrite ) /*0x5e6685*/
      Int_Overwrite = 8; /*0x5e6687*/
  }
  HashTable::DestroyHashTableINIClass(v4); /*0x5e6690*/
  v10[0] = &CCFileClass::`vftable'; /*0x5e669c*/
  v12 = 0; /*0x5e66a4*/
  Vector::Clear((int)v11); /*0x5e66ab*/
  v10[0] = &off_7E1668; /*0x5e66b4*/
  BufferIOFileClass::Dtor(v10); /*0x5e66bc*/
  return Int_Overwrite; /*0x5e661f*/
}



// ==== 0x005E66D0  MPCooperative_Helper  this=-  sig=ida-proto ====
LRESULT sub_5E66D0()
{
  return SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e66ea*/
}



// ==== 0x005E66F0  sub_5E66F0  this=-  sig=ida-proto ====
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  _DWORD *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (_DWORD *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          v5 = __2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}



// ==== 0x005E68A0  SkirmishDialog::Show  this=ObjectClass  sig=csp ====
int __usercall SkirmishDialog::Show@<eax>(HWND hWndParent@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  int v4; // esi
  AudioController *v6; // [esp+0h] [ebp-4h]

  Screen::Capture(1, 0, a2, a3); /*0x5e68a7*/
  UI_Show(); /*0x5e68ac*/
  hDlg = (HWND)CreateDialogIndirect(g_hInstance, (HWND)0x6B, hWndParent, (DLGPROC)SkirmishSetup::DlgProc, 0); /*0x5e68d0*/
  SetupDialog(hDlg, 107); /*0x5e68d5*/
  SendMessageA(hDlg, 0x4A9u, 0, 1); /*0x5e68e9*/
  ShowWindow(hDlg, 1); /*0x5e68f8*/
  v4 = MessageDialogLoopAlt(hDlg, (unsigned __int8 (*)(void))sub_5E66F0, 0, 1, 1); /*0x5e6914*/
  AudioController::GetVolume(v6); /*0x5e6916*/
  return v4; /*0x5e691d*/
}



// ==== 0x005E6920  SkirmishSetup::DlgProc  this=SkirmishSetup  sig=csp ====
int __userpurge SkirmishSetup::DlgProc@<eax>(
        SkirmishSetup *this,
        int a2@<ebp>,
        HWND hWnd,
        signed int a4,
        WPARAM a5,
        char *a6)
{
  int v6; // ebx
  int result; // eax
  Dialog *v8; // esi
  Session *v9; // esi
  int v10; // ebx
  LRESULT v11; // eax
  char *v12; // edi
  int v13; // ebx
  HWND DlgItem; // eax
  SkirmishSetup *v15; // edi
  int v16; // ebx
  LRESULT v17; // eax
  LRESULT v18; // eax
  char *v19; // esi
  HWND v20; // eax
  HWND v21; // eax
  WPARAM v22; // ebx
  signed int v23; // esi
  const wchar_t *v24; // eax
  HWND v25; // esi
  LRESULT v26; // eax
  const wchar_t *v27; // eax
  wchar_t *v28; // eax
  WPARAM v29; // esi
  void **v30; // ebx
  int DlgCtrlID; // edi
  WPARAM v32; // esi
  LRESULT v33; // eax
  wchar_t *v34; // eax
  int First; // esi
  signed int v36; // ebx
  SkirmishSetup *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  int v41; // eax
  WPARAM v42; // ebx
  signed int v43; // esi
  SkirmishSetup *v44; // eax
  Dialog *v45; // [esp+0h] [ebp-28h]
  ObjectClass *v46; // [esp+0h] [ebp-28h]
  SkirmishVector v47; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v49; // [esp+24h] [ebp-4h]

  if ( (unsigned int)hWnd <= 0x111 ) /*0x5e6930*/
  {
    if ( hWnd != (HWND)273 ) /*0x5e6936*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e694c*/
      {
        case 0xFu: /*0x5e694c*/
          v8 = (Dialog *)this; /*0x5e696b*/
          Dialog::DrawBackground((Dialog *)this); /*0x5e6971*/
          if ( g_UIControlState ) /*0x5e697e*/
            Skirmish::RenderPreview(g_UIControlState, (HWND)v8); /*0x5e6981*/
          Dialog::StopBink(v8); /*0x5e6988*/
          ValidateRect((HWND)v8, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 0x14u: /*0x5e694c*/
          goto LABEL_5;
        case 0x2Bu: /*0x5e694c*/
          Dialog::Resize((char *)a5); /*0x5e6957*/
LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 0x82u: /*0x5e694c*/
          DestroyDialog((ObjectClass *)this); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (unsigned __int16)a4 <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (unsigned __int16)a4 ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection((ObjectClass *)this); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v9 = (Session *)this; /*0x5e69fd*/
          Dialog::IdleProcess(v45, (ObjectClass *)this); /*0x5e6a03*/
          ShowWindow((HWND)v9, 0); /*0x5e6a0b*/
          v10 = SkirmishSetup_Setup_5E8590(v46); /*0x5e6a16*/
          a5 = v10; /*0x5e6a1b*/
          if ( v10 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v11 = SendDlgItemMessageA((HWND)v9, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v11 != -1 ) /*0x5e6a3f*/
          {
            v12 = (char *)SendDlgItemMessageA((HWND)v9, 1771, 0x199u, v11, 0); /*0x5e6a55*/
            if ( v12 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6a67*/
              a2 = dword_A8B8D8; /*0x5e6a6c*/
              v13 = 0; /*0x5e6a72*/
              v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6a76*/
              v49 = 10; /*0x5e6a7e*/
              for ( i = 0; v13 < a2; ++v13 ) /*0x5e6a8e*/
              {
                this = *(SkirmishSetup **)(dword_A8B8CC + 4 * v13); /*0x5e6a9c*/
                if ( (unsigned __int8)MapPreview::Check(v12, (int)this) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(&v47, &this); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem((HWND)v9, 1363); /*0x5e6ac2*/
              (*(void (__thiscall **)(char *, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)v12 + 76))( /*0x5e6ad4*/
                v12,
                DlgItem,
                &v47,
                0);
              v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6adb*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6ae3*/
              v10 = a5; /*0x5e6ae8*/
            }
          }
          if ( v10 < dword_A8B8D8 ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0((HWND)v9, *(_DWORD *)(dword_A8B8CC + 4 * v10)); /*0x5e6aff*/
          LoadScenarioClassByIndex(v10); /*0x5e6b06*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e6b10*/
            Session::PrepareGame(v9); /*0x5e6b17*/
          *(_DWORD *)&stru_A8B250.__pad_0[4] = dword_AC10E0; /*0x5e6b22*/
          LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6b28*/
          LOBYTE(v10) = HandleMultiplayerMapSelection((ObjectClass *)v9); /*0x5e6b38*/
          Screen::Capture(1, 0, v10, a2); /*0x5e6b3a*/
          if ( !(_BYTE)v10 ) /*0x5e6b41*/
          {
LABEL_28:
            SkirmishSetup::PlayButtonClickAnim((SkirmishSetup *)v9); /*0x5e6b49*/
            ShowWindow((HWND)v9, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog((HWND)this, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (unsigned __int16)a4 == 1771 && !byte_AC11C8 && HIWORD(a4) == 1 ) /*0x5e6b96*/
    {
      v15 = this; /*0x5e6b9c*/
      v16 = 0; /*0x5e6ba6*/
      v17 = SendDlgItemMessageA((HWND)this, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v17 != dword_8316FC && v17 != -1 ) /*0x5e6bc6*/
      {
        dword_8316FC = v17; /*0x5e6bd9*/
        v18 = SendDlgItemMessageA((HWND)v15, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v18 != -1 ) /*0x5e6be3*/
        {
          v19 = (char *)SendDlgItemMessageA((HWND)v15, 1771, 0x199u, v18, 0); /*0x5e6bf8*/
          if ( v19 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&this); /*0x5e6c06*/
            if ( (*(unsigned __int8 (__thiscall **)(char *, SkirmishSetup **))(*(_DWORD *)v19 + 12))(v19, &this) ) /*0x5e6c14*/
            {
              (*(void (__thiscall **)(char *))(*(_DWORD *)v19 + 16))(v19); /*0x5e6c23*/
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6c2c*/
              v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6c36*/
              v49 = 10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              hWnd = (HWND)dword_A8B8D8; /*0x5e6c4c*/
              if ( dword_A8B8D8 > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  a5 = *(_DWORD *)(dword_A8B8CC + 4 * v16); /*0x5e6c5d*/
                  if ( (unsigned __int8)MapPreview::Check(v19, a5) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(&v47, &a5); /*0x5e6c73*/
                  ++v16; /*0x5e6c7c*/
                }
                while ( v16 < (int)hWnd ); /*0x5e6c7f*/
              }
              v20 = GetDlgItem((HWND)v15, 1363); /*0x5e6c8d*/
              (*(void (__thiscall **)(char *, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)v19 + 76))(v19, v20, &v47, 0); /*0x5e6c9b*/
              v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6ca2*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6caa*/
              LOBYTE(a5) = (*(int (__thiscall **)(char *))(*(_DWORD *)v19 + 60))(v19); /*0x5e6cbc*/
              v21 = GetDlgItem((HWND)v15, 1411); /*0x5e6cc0*/
              EnableWindow(v21, (unsigned __int8)a5); /*0x5e6cce*/
              if ( &word_AC0EC8 ) /*0x5e6cdb*/
              {
                v22 = 0; /*0x5e6cdd*/
                v23 = 0; /*0x5e6cee*/
                a5 = SendDlgItemMessageA((HWND)v15, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( (int)a5 > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v24 = (const wchar_t *)SendDlgItemMessageA((HWND)v15, 1363, 0x199u, v23, 0); /*0x5e6d06*/
                    if ( !wcscmp(v24, &word_AC0EC8) ) /*0x5e6d0e*/
                      v22 = v23; /*0x5e6d1a*/
                    ++v23; /*0x5e6d20*/
                  }
                  while ( v23 < (int)a5 ); /*0x5e6d23*/
                }
                SendDlgItemMessageA((HWND)v15, 1363, 0x186u, v22, 0); /*0x5e6d33*/
                SendDlgItemMessageA((HWND)v15, 1363, 0x197u, v22, 0); /*0x5e6d43*/
              }
              v25 = hDlg; /*0x5e6d59*/
              v26 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( v26 == -1 || (v27 = (const wchar_t *)SendDlgItemMessageA(v25, 1363, 0x199u, v26, 0)) == 0 ) /*0x5e6d74*/
              {
                word_AC0EC8 = 0; /*0x5e6da4*/
                byte_AC11C9 = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy(&word_AC0EC8, v27); /*0x5e6d7c*/
                byte_AC11C9 = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !byte_AC11C9 ) /*0x5e6dcc*/
              {
                v28 = WideString::GetOrEmpty((wchar_t **)&this); /*0x5e6dd4*/
                ShowDialogConfirm(v28, 0, 0, 0); /*0x5e6ddd*/
                byte_AC11C9 = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA((HWND)v15, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( hWnd == (HWND)1175 ) /*0x5e6e12*/
  {
    byte_AC11C8 = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5e6eb8*/
    v36 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v37 = this; /*0x5e6ec7*/
    v38 = GetDlgItem((HWND)this, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v38, *(_DWORD *)(First + 40)); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6ef1*/
      v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6efb*/
      v49 = 10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      a5 = dword_A8B8D8; /*0x5e6f11*/
      if ( dword_A8B8D8 > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          this = *(SkirmishSetup **)(dword_A8B8CC + 4 * v36); /*0x5e6f23*/
          if ( (unsigned __int8)MapPreview::Check((char *)First, (int)this) ) /*0x5e6f27*/
            SkirmishVector::PushBack(&v47, &this); /*0x5e6f39*/
          ++v36; /*0x5e6f42*/
        }
        while ( v36 < (int)a5 ); /*0x5e6f45*/
      }
      v39 = GetDlgItem((HWND)v37, 1363); /*0x5e6f4d*/
      (*(void (__thiscall **)(int, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)First + 76))(First, v39, &v47, 0); /*0x5e6f5b*/
      v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6f62*/
      VectorClass::Cleanup3((int)&v47); /*0x5e6f6a*/
    }
    LOBYTE(this) = (*(int (__thiscall **)(int))(*(_DWORD *)First + 60))(First); /*0x5e6f7c*/
    v40 = GetDlgItem((HWND)v37, 1411); /*0x5e6f80*/
    EnableWindow(v40, (unsigned __int8)this); /*0x5e6f8e*/
    v41 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5e6f94*/
    if ( *(_DWORD *)&stru_A8B250.__pad_0[4] != -1 && *(int *)&stru_A8B250.__pad_0[4] < dword_A8B8D8 ) /*0x5e6fa8*/
    {
      this = *(SkirmishSetup **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x5e6fb5*/
      if ( this ) /*0x5e6fb9*/
      {
        v42 = 0; /*0x5e6fc1*/
        v43 = 0; /*0x5e6fd2*/
        a5 = SendDlgItemMessageA((HWND)v37, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( (int)a5 > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v44 = (SkirmishSetup *)SendDlgItemMessageA((HWND)v37, 1363, 0x199u, v43, 0); /*0x5e6fea*/
            if ( v44 == this ) /*0x5e6ff0*/
              v42 = v43; /*0x5e6ff2*/
            ++v43; /*0x5e6ff8*/
          }
          while ( v43 < (int)a5 ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA((HWND)v37, 1363, 0x186u, v42, 0); /*0x5e700b*/
        SendDlgItemMessageA((HWND)v37, 1363, 0x197u, v42, 0); /*0x5e701b*/
        v41 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5e701d*/
      }
    }
    dword_AC10E0 = v41; /*0x5e7022*/
    dword_AC0D30 = -1; /*0x5e7027*/
    byte_AC11C8 = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( hWnd != (HWND)1257 ) /*0x5e6e1b*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, v6, a2); /*0x5e6e2a*/
      Dialog::EnumAndCleanup((Dialog *)this); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v29 = a5; /*0x5e6e44*/
  v30 = (void **)(a5 + 8); /*0x5e6e51*/
  DlgCtrlID = GetDlgCtrlID(*(HWND *)a5); /*0x5e6e58*/
  WideString::Assign_Alt(v30, 0); /*0x5e6e5a*/
  if ( DlgCtrlID == 1771 ) /*0x5e6e65*/
  {
    v32 = *(_DWORD *)(v29 + 4); /*0x5e6e67*/
    if ( v32 != -1 ) /*0x5e6e6d*/
    {
      v33 = SendDlgItemMessageA((HWND)this, 1771, 0x199u, v32, 0); /*0x5e6e7d*/
      if ( v33 ) /*0x5e6e85*/
      {
        v34 = WideString::GetOrEmpty_Alt((wchar_t **)(v33 + 36)); /*0x5e6e8a*/
        WideString::Assign_Alt(v30, v34); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/
}



// ==== 0x005E70D0  SkirmishSetup_Setup_5E70D0  this=-  sig=csp ====
WPARAM __fastcall sub_5E70D0(HWND hDlg, int a2)
{
  WPARAM v4; // ebp
  signed int v5; // esi
  LRESULT v7; // [esp+8h] [ebp-4h]

  if ( !a2 ) /*0x5e70dc*/
    return -1; /*0x5e70de*/
  v4 = 0; /*0x5e70ee*/
  v5 = 0; /*0x5e7100*/
  v7 = SendDlgItemMessageA(hDlg, 1363, 0x18Bu, 0, 0); /*0x5e7104*/
  if ( v7 > 0 ) /*0x5e7108*/
  {
    do /*0x5e7129*/
    {
      if ( SendDlgItemMessageA(hDlg, 1363, 0x199u, v5, 0) == a2 ) /*0x5e711e*/
        v4 = v5; /*0x5e7120*/
      ++v5; /*0x5e7126*/
    }
    while ( v5 < v7 ); /*0x5e7129*/
  }
  SendDlgItemMessageA(hDlg, 1363, 0x186u, v4, 0); /*0x5e7139*/
  SendDlgItemMessageA(hDlg, 1363, 0x197u, v4, 0); /*0x5e7149*/
  return v4; /*0x5e70e1*/
}



// ==== 0x005E7160  ObjectClass::HandleMultiplayerMapSelection  this=ObjectClass  sig=csp ====
char __thiscall HandleMultiplayerMapSelection(ObjectClass *this)
{
  LRESULT v1; // eax
  LRESULT v2; // eax
  int v3; // esi
  _DWORD *i; // edx
  ObjectClass *v6; // ebp
  LRESULT v7; // esi
  HWND v8; // ebx
  LRESULT v9; // eax
  int PlayerCountMap; // edi
  int v11; // eax
  ObjectClass *v12; // ecx
  char v13; // bl
  char v14; // al
  wchar_t *v15; // ecx
  int *StringCSF; // edi
  wchar_t *v17; // ebx
  wchar_t *v18; // eax
  int v19; // eax
  HWND v20; // edi
  HWND DlgItem; // ebx
  wchar_t *v22; // eax
  LPARAM v23; // ebx
  HWND v24; // eax
  int v25; // [esp+0h] [ebp-20h]
  char v26; // [esp+13h] [ebp-Dh]
  int v27; // [esp+14h] [ebp-Ch]
  char v28; // [esp+18h] [ebp-8h]

  v1 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e7185*/
  if ( v1 == -1 ) /*0x5e718a*/
    return 0; /*0x5e718a*/
  v2 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v1, 0); /*0x5e71a0*/
  v3 = 0; /*0x5e71a8*/
  if ( dword_A8B8D8 <= 0 ) /*0x5e71b0*/
    return 0; /*0x5e71b0*/
  for ( i = (_DWORD *)dword_A8B8CC; v2 != *i; ++i ) /*0x5e71b2*/
  {
    if ( ++v3 >= dword_A8B8D8 ) /*0x5e71c2*/
      return 0; /*0x5e71d1*/
  }
  v27 = v3; /*0x5e71d5*/
  if ( v3 == -1 ) /*0x5e71d9*/
    return 0; /*0x5e71e4*/
  v6 = dword_A8B23C; /*0x5e71ea*/
  v7 = 0; /*0x5e71f0*/
  v8 = hDlg; /*0x5e71f2*/
  v9 = SendDlgItemMessageA(hDlg, 1771, 0x188u, 0, 0); /*0x5e7201*/
  if ( v9 != -1 ) /*0x5e7206*/
    v7 = SendDlgItemMessageA(v8, 1771, 0x199u, v9, 0); /*0x5e7217*/
  dword_A8B23C = (ObjectClass *)v7; /*0x5e7219*/
  v26 = (*(int (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 64))(v7); /*0x5e7226*/
  v28 = (*(int (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 188))(v7); /*0x5e7238*/
  PlayerCountMap = ReadPlayerCountMap(v27); /*0x5e7247*/
  if ( dword_A8B23C ) /*0x5e724b*/
  {
    v11 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5e724f*/
    if ( v11 != -1 && v11 < PlayerCountMap ) /*0x5e725c*/
      PlayerCountMap = v11; /*0x5e725e*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e7267*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e7269*/
    {
      PlayerCountMap &= ~1u; /*0x5e7272*/
    }
    else if ( Network::IsMultiplayerActive() ) /*0x5e7277*/
    {
      PlayerCountMap = 2; /*0x5e7280*/
    }
  }
  v12 = v6; /*0x5e728a*/
  v13 = 0; /*0x5e728c*/
  dword_A8B23C = v6; /*0x5e7291*/
  switch ( *(_DWORD *)&dword_A8B238 ) /*0x5e7297*/
  {
    case 3: /*0x5e7297*/
      v14 = Map_Handle(PlayerCountMap, v26, v28); /*0x5e72cb*/
      break;
    case 4: /*0x5e7297*/
      v14 = Map_Handle_7A2800(PlayerCountMap, v26, v28); /*0x5e72b9*/
      break;
    case 5: /*0x5e7297*/
      v14 = Map_Handle_6ACCA0(PlayerCountMap); /*0x5e72a5*/
      v13 = 1; /*0x5e72aa*/
      break;
    default:
      goto LABEL_32; /*0x5e729d*/
  }
  if ( v14 ) /*0x5e72d2*/
  {
    v15 = (wchar_t *)aGuiEjectplayer; /*0x5e72d6*/
    if ( v13 ) /*0x5e72db*/
      v15 = aGuiEjectaiplay; /*0x5e72dd*/
    StringCSF = (int *)GetStringCSF(v15, 0, g_Str_File_netshare_cpp, 2963); /*0x5e7304*/
    v17 = GetStringCSF(aGuiOk, 0, g_Str_File_netshare_cpp, 2964); /*0x5e731c*/
    v18 = GetStringCSF(aGuiCancel, 0, g_Str_File_netshare_cpp, 2965); /*0x5e731e*/
    if ( Dialog::ShowMessageBox(StringCSF, v17, v18, 0, 0, v25) ) /*0x5e7336*/
      return 0; /*0x5e7348*/
  }
  v12 = dword_A8B23C; /*0x5e7349*/
LABEL_32:
  if ( (ObjectClass *)v7 != v12 ) /*0x5e7351*/
  {
    if ( v12 ) /*0x5e7355*/
      (*((void (__thiscall **)(ObjectClass *))v12->AbstractClass + 39))(v12); /*0x5e7359*/
    if ( v7 ) /*0x5e7361*/
    {
      dword_A8B23C = (ObjectClass *)v7; /*0x5e7367*/
      v19 = *(_DWORD *)(v7 + 40); /*0x5e736d*/
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v27; /*0x5e7370*/
      *(_DWORD *)stru_A8B250.__pad_0 = v19; /*0x5e7376*/
      (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 32))(v7); /*0x5e737f*/
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = v27; /*0x5e7388*/
  if ( v7 ) /*0x5e738d*/
    (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 36))(v7); /*0x5e7393*/
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 24))(v7); /*0x5e739a*/
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 124))(v7); /*0x5e73a1*/
  CloseDialog((HWND)this, 1); /*0x5e73ad*/
  v20 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e73bc*/
  if ( !v20 ) /*0x5e73c0*/
  {
    v20 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e73cc*/
    if ( !v20 ) /*0x5e73d0*/
    {
      v20 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e73dc*/
      if ( !v20 ) /*0x5e73e0*/
        v20 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e73ec*/
    }
  }
  if ( v7 ) /*0x5e73f6*/
  {
    DlgItem = GetDlgItem(v20, 1772); /*0x5e7403*/
    v22 = WideString::GetOrEmpty_Alt((wchar_t **)(v7 + 32)); /*0x5e7405*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v22); /*0x5e7413*/
  }
  if ( *(int *)&stru_A8B250.__pad_0[4] >= 0 && *(int *)&stru_A8B250.__pad_0[4] < dword_A8B8D8 ) /*0x5e7428*/
  {
    v23 = *(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x5e7430*/
    if ( v23 ) /*0x5e7435*/
    {
      v24 = GetDlgItem(v20, 1448); /*0x5e743d*/
      SendMessageA(v24, 0x4B2u, 0, v23); /*0x5e7448*/
    }
  }
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 96))(v7); /*0x5e7452*/
  return 1; /*0x5e71c8*/
}



// ==== 0x005E7460  Scenario::PreGameInit  this=AbstractClass  sig=ida-proto ====
int Scenario_PreGameInit()
{
  int v0; // edx
  int v1; // eax

  *((_DWORD *)dword_A8B230 + 1173) = MEMORY[0xA8B254]; /*0x5e746b*/
  dword_A8ED84 = 0; /*0x5e747c*/
  dword_A8B54C = dword_A8DA84; /*0x5e7486*/
  Debug::Log("Pregame setup for %d players.\n", dword_A8DA84); /*0x5e748b*/
  *(_DWORD *)dword_A8EB60 = MEMORY[0xA8B268]; /*0x5e74aa*/
  v0 = dword_A8E960; /*0x5e74b0*/
  BYTE1(v0) = BYTE1(dword_A8E960) & 0x77; /*0x5e74bb*/
  v1 = v0 | ((byte_A8B31D & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5e74c1*/
  dword_A8B24C = 2; /*0x5e74c3*/
  LOBYTE(v1) = dword_A8E960 | 0xC0; /*0x5e74cd*/
  dword_A8E960 = v1; /*0x5e74d4*/
  return nullsub_37(&dword_A8E960);
}



// ==== 0x005E74E0  Session::PrepareGame  this=Session  sig=csp ====
int __thiscall Session::PrepareGame(Session *this)
{
  Skirmish *v1; // esi
  int v3; // eax
  char *Flagged; // eax
  char *v5; // eax
  int result; // eax
  char v7; // bl
  Skirmish *v8; // esi
  int v9; // esi
  int v10; // edi
  int v11; // esi
  Skirmish *v12; // esi
  _DWORD *v13; // eax
  char v14; // al
  bool v15; // bl
  ScenarioClass *v16; // [esp+0h] [ebp-208h]
  int v17; // [esp+10h] [ebp-1F8h]
  RawFileClass v18; // [esp+1Ch] [ebp-1ECh] BYREF
  _BYTE Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  __int16 v20; // [esp+204h] [ebp-4h]
  char v21; // [esp+206h] [ebp-2h]

  v1 = g_UIControlState; /*0x5e74e9*/
  if ( g_UIControlState ) /*0x5e74f6*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  g_UIControlState = 0; /*0x5e7513*/
  switch ( *(_DWORD *)&dword_A8B238 ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) ) /*0x5e774c*/
        goto LABEL_42; /*0x5e7753*/
      memset(Str, 0, 250); /*0x5e7764*/
      *(_DWORD *)Str = 119; /*0x5e776c*/
      result = Timer::GetTicks(); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v17 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v17 != -1 ) /*0x5e7793*/
        {
          result = Timer::GetTicks() - v17; /*0x5e779e*/
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        v10 = Stream::WriteBlock((int *)&unk_A8EA70, (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue((Count *)&unk_A8EA70); /*0x5e77d8*/
              result > 0;
              result = Count::GetCountQueue((Count *)&unk_A8EA70) )
        {
          result = v17; /*0x5e77da*/
          v11 = 1800; /*0x5e77de*/
          if ( v17 != -1 ) /*0x5e77e4*/
          {
            result = Timer::GetTicks() - v17; /*0x5e77ef*/
            if ( result >= 1800 ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          Event::Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return result; /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( Dialog::GetCurrentType() != 189 /*0x5e7550*/
        || FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect((HWND)this, 0, 0); /*0x5e7560*/
      memset(Str, 0, sizeof(Str)); /*0x5e7571*/
      v20 = 0; /*0x5e7573*/
      v21 = 0; /*0x5e7575*/
      *(_DWORD *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !Dialog::FindByHandle((Dialog *)0xC9) ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      v7 = 0; /*0x5e762e*/
      if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) ) /*0x5e7630*/
      {
        strcpy(Str, byte_A8B8E0); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        Debug::Log(); /*0x5e7677*/
        if ( !dword_A8BB08 && strstr(Str, aMpr) && strstr(Str, aYrm) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        RawFileClass::Construct(&v18, (int)byte_A8B8E0); /*0x5e76c1*/
        if ( (unsigned __int8)FileClass::Open(&v18, 0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(&v18); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42:
          v12 = g_UIControlState; /*0x5e7825*/
          if ( g_UIControlState ) /*0x5e782d*/
          {
            ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            g_UIControlState = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5e76ef*/
        return InvalidateRect((HWND)this, 0, 0); /*0x5e76ef*/
      v8 = g_UIControlState; /*0x5e76fc*/
      if ( !g_UIControlState ) /*0x5e7704*/
        return InvalidateRect((HWND)this, 0, 0); /*0x5e7704*/
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e770c*/
      __3_YAXPAX_Z(v8); /*0x5e7712*/
      g_UIControlState = 0; /*0x5e771a*/
      return InvalidateRect((HWND)this, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      v13 = CCFileClass::Construct((CCFileClass *)Str, byte_A8B8E0); /*0x5e7845*/
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(_DWORD *)Str = &CCFileClass::`vftable'; /*0x5e7864*/
      v15 = v14 == 0; /*0x5e786c*/
      *(_DWORD *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(_DWORD *)Str = &off_7E1668; /*0x5e787f*/
      result = BufferIOFileClass::Dtor((BufferIOFileClass *)Str); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = __2_YAPAXI_Z(4u); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          g_UIControlState = 0; /*0x5e78e4*/
          return result; /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((ObjectClass *)result); /*0x5e78a0*/
        g_UIControlState = (Skirmish *)result; /*0x5e78a5*/
      }
      if ( g_UIControlState ) /*0x5e78b0*/
      {
        if ( (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(v16); /*0x5e78f5*/
          return InvalidateRect((HWND)this, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview((PreviewClass *)g_UIControlState, byte_A8B8E0); /*0x5e78cb*/
          return InvalidateRect((HWND)this, 0, 0); /*0x5e78d3*/
        }
      }
      return result;
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage(&unk_A8E9C0.Socket, (int)Str, 47, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x5e75a4*/
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = CharToWideString(Flagged + 36); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)&unk_A8E9C0, (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount(&unk_A8E9C0); result; result = Network::GetQueueCount(&unk_A8E9C0) ) /*0x5e75e0*/
        Event::Dispatch(); /*0x5e75e6*/
      return result; /*0x5e75f7*/
    }
LABEL_12:
    Event::Dispatch(); /*0x5e75cd*/
  }
}



// ==== 0x005E7920  ExchangeMultiplayerGameInfo  this=-  sig=ida-proto ====
void ExchangeMultiplayerGameInfo()
{
  int v0; // eax
  char *FlaggedGameSettings; // eax
  char *v2; // eax
  int FileSize; // edi
  char *v4; // esi
  signed int v5; // ebx
  char *v6; // edi
  void *v7; // ebx
  void *v8; // eax
  void *v9; // eax
  HWND CurrentDialog; // eax
  int v11[3]; // [esp+8h] [ebp-330h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-324h] BYREF
  int v13[9]; // [esp+24h] [ebp-314h] BYREF
  int v14[10]; // [esp+48h] [ebp-2F0h] BYREF
  int v15[113]; // [esp+70h] [ebp-2C8h] BYREF
  __int16 v16; // [esp+234h] [ebp-104h]
  char v17; // [esp+236h] [ebp-102h]
  char v18[256]; // [esp+238h] [ebp-100h] BYREF

  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x5e7938*/
  Debug::Log(); /*0x5e7942*/
  memset(v15, 0, sizeof(v15)); /*0x5e7957*/
  v16 = 0; /*0x5e7959*/
  v17 = 0; /*0x5e795b*/
  v15[0] = 26; /*0x5e795c*/
  Debug::Log(); /*0x5e7964*/
  while ( 1 ) /*0x5e7977*/
  {
    if ( dword_A8B238[0] == 3 ) /*0x5e7977*/
    {
      v0 = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e7996*/
    }
    else
    {
      FlaggedGameSettings = GameSettings::FindFlagged(); /*0x5e799d*/
      if ( !FlaggedGameSettings ) /*0x5e79a4*/
        break; /*0x5e79a4*/
      v2 = CharToWideString(FlaggedGameSettings + 36); /*0x5e79a9*/
      v0 = Network::SendToPlayer((int)unk_A8E9C0, (int)v15, 455, 1, (wchar_t *)v2); /*0x5e79c0*/
    }
    if ( v0 ) /*0x5e79c7*/
      break; /*0x5e79c7*/
    Event::Dispatch(); /*0x5e79c9*/
  }
  while ( Network::GetQueueCount((int)unk_A8E9C0) ) /*0x5e79d5*/
    Event::Dispatch(); /*0x5e79de*/
  Debug::Log(); /*0x5e79f6*/
  dword_A8D804 = stru_A8BB1C; /*0x5e7a11*/
  dword_A8D808 = dword_A8BB20; /*0x5e7a17*/
  dword_A8D80C = dword_A8BB24; /*0x5e7a1c*/
  Debug::Log(); /*0x5e7a22*/
  if ( RequestNetworkFile(v18, 3, 0) ) /*0x5e7a35*/
  {
    Debug::Log(); /*0x5e7a6f*/
    RawFileClass::Construct(v13, (int)v18); /*0x5e7a83*/
    FileSize = CCFileClass::GetFileSize(v13); /*0x5e7a91*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5e7a9c*/
    FileClass::Read(v13, v4, FileSize); /*0x5e7aa4*/
    v5 = *(_DWORD *)v4; /*0x5e7aa9*/
    Debug::Log(); /*0x5e7ab0*/
    v11[1] = 0; /*0x5e7abf*/
    v11[2] = 0; /*0x5e7ac9*/
    Buffer::Init(v12, (int)(v4 + 4), FileSize); /*0x5e7ad9*/
    v12[3] = 0; /*0x5e7ae2*/
    v11[0] = (int)&BufferStraw::`vftable'; /*0x5e7af1*/
    LZOStraw::Constructor(v14, 1, 0x2000); /*0x5e7af9*/
    Delegate::Set(v14, (int)v11); /*0x5e7b07*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5e7b18*/
    LCW::Decompress((int)v14, v6, v5); /*0x5e7b20*/
    Debug::Log(); /*0x5e7b2a*/
    if ( g_UIControlState ) /*0x5e7b39*/
    {
      v7 = g_UIControlState; /*0x5e7b3b*/
      ComPtr::Dtor(g_UIControlState); /*0x5e7b43*/
      __3_YAXPAX_Z(v7); /*0x5e7b49*/
    }
    v8 = __2_YAPAXI_Z(4u); /*0x5e7b53*/
    if ( v8 ) /*0x5e7b5e*/
      v9 = (void *)unknown_libname_27(v8); /*0x5e7b62*/
    else
      v9 = 0; /*0x5e7b69*/
    g_UIControlState = v9; /*0x5e7b6e*/
    ModemGame::RenderPaletteImage(v6); /*0x5e7b73*/
    CurrentDialog = Dialog::GetCurrent(); /*0x5e7b7c*/
    InvalidateRect(CurrentDialog, 0, 0); /*0x5e7b82*/
    Debug::Log(); /*0x5e7b8d*/
    __3_YAXPAX_Z(v6); /*0x5e7b93*/
    __3_YAXPAX_Z(v4); /*0x5e7b99*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7bb1*/
    LZOStraw::Destructor(v14); /*0x5e7bba*/
    Vector::Clear((int)v12); /*0x5e7bc3*/
    Straw::Dtor(v11); /*0x5e7bcc*/
    RawFileClass::Dtor(v13); /*0x5e7bd5*/
  }
  else
  {
    Debug::Log(); /*0x5e7a43*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7a5b*/
  }
}



// ==== 0x005E7BF0  LoadScenarioClassByIndex  this=AbstractClass  sig=ida-proto ====
char __fastcall LoadScenarioClassByIndex(int a1)
{
  char result; // al
  _DWORD *v3; // eax
  char v4; // al
  bool v5; // bl
  int **v6; // esi
  int v7; // eax
  int Field; // eax
  int *v9; // eax
  char *v10; // eax
  int PlayerCountMap; // esi
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-90h]
  int v16; // [esp+0h] [ebp-80h]
  _DWORD v17[22]; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  if ( a1 == -1 ) /*0x5e7bfb*/
  {
    dword_A8BB04 = 0; /*0x5e7c00*/
    LOBYTE(dword_A8BB08) = 0; /*0x5e7c05*/
    dword_A8BB0C = 0; /*0x5e7c0a*/
    HIWORD(dword_A8B320) = 0; /*0x5e7c0f*/
    byte_A8B8E0 = 0; /*0x5e7c16*/
    byte_A8BAE2 = 0; /*0x5e7c1d*/
    return 0; /*0x5e7c2a*/
  }
  v3 = CCFileClass::Construct(v17, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7c3b*/
  v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x5e7c46*/
  v17[0] = &CCFileClass::`vftable'; /*0x5e7c4f*/
  v5 = v4 == 0; /*0x5e7c57*/
  v19 = 0; /*0x5e7c5a*/
  Vector::Clear((int)v18); /*0x5e7c62*/
  v17[0] = &off_7E1668; /*0x5e7c6b*/
  BufferIOFileClass::Dtor(v17); /*0x5e7c73*/
  if ( !v5 ) /*0x5e7c7a*/
    goto LABEL_9; /*0x5e7c7a*/
  if ( dword_81C1D0 == -2 ) /*0x5e7c87*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7cfe*/
    v9 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7d09*/
    Dialog::ShowMessageBox(v9, StringCSF, 0, 0, 0, v16); /*0x5e7d13*/
    return 0; /*0x5e7d20*/
  }
  v6 = (int **)(dword_A8B8CC + 4 * a1); /*0x5e7c93*/
  v7 = Game::CheckForGameCD((void *)0x3C); /*0x5e7c96*/
  if ( (unsigned __int8)ScenarioClass::CheckExists(*v6, v7) /*0x5e7cca*/
    || (Field = GameOption::GetField(*(_DWORD ***)(dword_A8B8CC + 4 * a1)), (result = CD::`vftable'(Field)) != 0) )
  {
LABEL_9:
    wcscpy((wchar_t *)&dword_A8B320 + 1, *(const wchar_t **)(dword_A8B8CC + 4 * a1)); /*0x5e7d31*/
    strcpy(&byte_A8BAE2, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 348)); /*0x5e7d5f*/
    v10 = dword_A8B230; /*0x5e7d7e*/
    strcpy(&byte_A8B8E0, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7d8f*/
    strcpy(v10 + 4700, &byte_A8B8E0); /*0x5e7db7*/
    LOBYTE(dword_A8BB08) = *(_BYTE *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 380); /*0x5e7dd1*/
    PlayerCountMap = ReadPlayerCountMap(a1); /*0x5e7de5*/
    if ( dword_A8B23C ) /*0x5e7de7*/
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 152))(dword_A8B23C); /*0x5e7deb*/
      if ( v12 != -1 && v12 < PlayerCountMap ) /*0x5e7df8*/
        PlayerCountMap = v12; /*0x5e7dfa*/
    }
    if ( dword_A8B238[0] == 4 ) /*0x5e7e03*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5e7e05*/
      {
        PlayerCountMap &= ~1u; /*0x5e7e0e*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5e7e13*/
      {
        PlayerCountMap = 2; /*0x5e7e1c*/
      }
    }
    dword_A8BB0C = PlayerCountMap; /*0x5e7e2a*/
    v13 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e30*/
    dword_A8BB04 = (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13); /*0x5e7e45*/
    v17[0] = &CCFileClass::`vftable'; /*0x5e7e4a*/
    v19 = 0; /*0x5e7e4e*/
    Vector::Clear((int)v18); /*0x5e7e52*/
    v17[0] = &off_7E1668; /*0x5e7e60*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e64*/
    v14 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e72*/
    dword_A8BB04 = (*(int (__thiscall **)(_DWORD *))(*v14 + 44))(v14); /*0x5e7e82*/
    v17[0] = &CCFileClass::`vftable'; /*0x5e7e87*/
    v19 = 0; /*0x5e7e8b*/
    Vector::Clear((int)v18); /*0x5e7e8f*/
    v17[0] = &off_7E1668; /*0x5e7e98*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e9c*/
    return 1; /*0x5e7ea1*/
  }
  return result; /*0x5e7bff*/
}



// ==== 0x005E7EB0  MapPreview::Upload  this=MapPreview  sig=csp ====
int __thiscall MapPreview::Upload(MapPreview *this)
{
  int result; // eax
  int i; // ebp
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  size_t v7; // eax
  int v8; // esi
  unsigned int PlayerName; // eax
  int v10; // ecx
  int j; // esi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // esi
  void *v19; // ebp
  void *v20; // esi
  int v21; // edi
  DWORD v22; // edi
  size_t *v23; // [esp+0h] [ebp-588h]
  int Ticks; // [esp+10h] [ebp-578h]
  int v25; // [esp+10h] [ebp-578h]
  size_t Size[2]; // [esp+1Ch] [ebp-56Ch] BYREF
  Palette *v27; // [esp+24h] [ebp-564h]
  _DWORD v28[2]; // [esp+28h] [ebp-560h] BYREF
  int v29; // [esp+30h] [ebp-558h] BYREF
  int v30; // [esp+36h] [ebp-552h] BYREF
  Pipe v31; // [esp+44h] [ebp-544h] BYREF
  int v32; // [esp+5Ch] [ebp-52Ch]
  Waypoint v33; // [esp+60h] [ebp-528h] BYREF
  char v34[64]; // [esp+B8h] [ebp-4D0h] BYREF
  char Buffer[256]; // [esp+F8h] [ebp-490h] BYREF
  int v36[113]; // [esp+1F8h] [ebp-390h] BYREF
  __int16 v37; // [esp+3BCh] [ebp-1CCh]
  char v38; // [esp+3BEh] [ebp-1CAh]
  int v39[114]; // [esp+3C0h] [ebp-1C8h] BYREF

  v27 = (Palette *)this; /*0x5e7ec0*/
  result = Timer::GetTicks(); /*0x5e7ec4*/
  if ( this ) /*0x5e7ed7*/
  {
    result = dword_A8DA84; /*0x5e7edd*/
    if ( dword_A8DA84 > 1 ) /*0x5e7ee9*/
    {
      if ( dword_A8B230 ) /*0x5e7ef6*/
      {
        sprintf( /*0x5e7f2e*/
          Buffer,
          "%c%d,%d,%d,%d,%d",
          87,
          dword_A8B230[122].ptr_C,
          dword_A8B230[122].uniqueId,
          dword_A8B230[122].ptr_4,
          dword_A8B230[122].ptr_8,
          dword_A8B230[122].abstractFlags);
        for ( i = 0; i < 8; ++i ) /*0x5e7f36*/
        {
          v4 = Map_Helper_58BB00((int *)((char *)&v30 + 2), i); /*0x5e7f3e*/
          v5 = *v4; /*0x5e7f43*/
          v6 = v4[1]; /*0x5e7f4c*/
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, i) ) /*0x5e7f4f*/
            v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v28, i); /*0x5e7f69*/
          else
            v7 = dword_AC0B90; /*0x5e7f6d*/
          Size[1] = v7; /*0x5e7f72*/
          sprintf(v34, ",%d,%d,%d,%d", v5, v6, (__int16)v7, SHIWORD(v7)); /*0x5e7f8f*/
          strcat(Buffer, v34); /*0x5e7fc1*/
        }
        Network::SendOptionsGame(Buffer); /*0x5e7fdb*/
      }
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e7fe7*/
      {
        if ( dword_ABFEC8 && (dword_ABFEC8 & 1) == 0 ) /*0x5e7ff8*/
        {
LABEL_21:
          strcpy(Buffer, "Z3"); /*0x5e808f*/
          Debug::Log(); /*0x5e80b4*/
          return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, Buffer); /*0x5e80d9*/
        }
        v8 = 1; /*0x5e8003*/
        if ( dword_A8DA84 > 1 ) /*0x5e8007*/
        {
          while ( 1 ) /*0x5e8013*/
          {
            PlayerName = GameClass::FindPlayerName(v8); /*0x5e8013*/
            if ( PlayerName < 8 ) /*0x5e801a*/
            {
              v10 = dword_A8DC2C[PlayerName]; /*0x5e8021*/
              if ( v10 ) /*0x5e802a*/
              {
                if ( (v10 & 1) == 0 ) /*0x5e802f*/
                  break; /*0x5e802f*/
              }
              if ( !(unsigned __int8)NetworkID::Compare((bool *)(12 * PlayerName + 11066316), dword_A8DA78[v8] + 40) ) /*0x5e8048*/
                break; /*0x5e8048*/
            }
            if ( ++v8 >= dword_A8DA84 ) /*0x5e8059*/
              goto LABEL_22; /*0x5e8059*/
          }
          ToWideStringChar((char *)dword_A8DA78[v8]); /*0x5e807c*/
          Debug::Log(); /*0x5e8087*/
          goto LABEL_21; /*0x5e8087*/
        }
      }
LABEL_22:
      Debug::Log(); /*0x5e80da*/
      memset(v36, 0, sizeof(v36)); /*0x5e80f5*/
      v37 = 0; /*0x5e80f7*/
      v38 = 0; /*0x5e80f9*/
      v36[0] = 25; /*0x5e8119*/
      strcpy((char *)&v36[1], unk_A8B380); /*0x5e8127*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x5e813e*/
      Ticks = Timer::GetTicks(); /*0x5e8150*/
      for ( j = 1; j < dword_A8DA84; ++j ) /*0x5e8170*/
      {
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v36, 455, 1, (wchar_t *)dword_A8DA78[j]); /*0x5e818b*/
        Event::Dispatch(); /*0x5e8190*/
      }
      while ( Network::GetQueueCount(&unk_A8E9C0) ) /*0x5e81a4*/
      {
        v12 = 1200; /*0x5e81b1*/
        if ( Ticks != -1 ) /*0x5e81b7*/
        {
          v13 = Timer::GetTicks() - Ticks; /*0x5e81c2*/
          if ( v13 >= 1200 ) /*0x5e81c8*/
            break; /*0x5e81c8*/
          v12 = 1200 - v13; /*0x5e81ca*/
        }
        if ( !v12 ) /*0x5e81ce*/
          break; /*0x5e81ce*/
        Event::Dispatch(); /*0x5e81d0*/
      }
      result = Ticks; /*0x5e81e3*/
      v14 = 1200; /*0x5e81e7*/
      if ( Ticks != -1 ) /*0x5e81ed*/
      {
        result = Timer::GetTicks() - Ticks; /*0x5e81f8*/
        if ( result >= 1200 ) /*0x5e81fe*/
          return result; /*0x5e81fe*/
        v14 = 1200 - result; /*0x5e8204*/
      }
      if ( v14 ) /*0x5e8208*/
      {
        Waypoint::InitInvalid(&v33); /*0x5e8212*/
        v28[0] = 0; /*0x5e821d*/
        v15 = 0; /*0x5e8221*/
        v28[1] = 0; /*0x5e8223*/
        v25 = Timer::GetTicks(); /*0x5e8230*/
        Debug::Log(); /*0x5e824d*/
        if ( dword_A8DA84 - 1 > 0 ) /*0x5e825e*/
        {
          do /*0x5e8318*/
          {
            v16 = 1800; /*0x5e826d*/
            if ( v25 != -1 ) /*0x5e8274*/
            {
              v17 = Timer::GetTicks() - v25; /*0x5e827f*/
              if ( v17 >= 1800 ) /*0x5e8285*/
                break; /*0x5e8285*/
              v16 = 1800 - v17; /*0x5e828b*/
            }
            if ( !v16 ) /*0x5e828f*/
              break; /*0x5e828f*/
            Event::Dispatch(); /*0x5e8295*/
            v29 = 455; /*0x5e82b6*/
            if ( Network::Send((Network *)&unk_A8E9C0, (int)v39, (int)&v29, (int)&v33, (int)&v30) ) /*0x5e82ba*/
            {
              if ( v39[0] == 26 ) /*0x5e82ca*/
              {
                v18 = 1; /*0x5e82d1*/
                if ( dword_A8DA84 > 1 ) /*0x5e82d8*/
                {
                  while ( !(unsigned __int8)NetworkID::Compare((bool *)v33.__pad_0, dword_A8DA78[v18] + 40) ) /*0x5e82f1*/
                  {
                    if ( ++v18 >= dword_A8DA84 ) /*0x5e82fb*/
                      goto LABEL_47; /*0x5e82fb*/
                  }
                  if ( !*((_BYTE *)v28 + v18) ) /*0x5e82ff*/
                  {
                    *((_BYTE *)v28 + v18) = 1; /*0x5e830b*/
                    ++v15; /*0x5e830e*/
                  }
                }
              }
            }
LABEL_47:
            ;
          }
          while ( v15 < dword_A8DA84 - 1 ); /*0x5e8318*/
        }
        result = dword_A8DA84 - 1; /*0x5e831e*/
        if ( v15 == dword_A8DA84 - 1 ) /*0x5e8326*/
        {
          Debug::Log(); /*0x5e8331*/
          Size[0] = 0; /*0x5e833d*/
          v19 = (void *)Palette::Preview_Generate(v27, 64, (int)Size, v23); /*0x5e8351*/
          Debug::Log(); /*0x5e835d*/
          v20 = (void *)__2_YAPAXI_Z(4 * Size[0]); /*0x5e837a*/
          v31.Pipe_field_0x04 = 0; /*0x5e838b*/
          v31.Pipe_field_0x08 = 0; /*0x5e838f*/
          *(_DWORD *)v31.__pad_0 = &Pipe::`vftable'; /*0x5e8393*/
          Buffer::Init((Buffer *)&v31.Pipe_field_0x0C, (int)v20, 4 * Size[0]); /*0x5e839b*/
          v32 = 0; /*0x5e83a7*/
          *(_DWORD *)v31.__pad_0 = &BufferPipe::`vftable'; /*0x5e83b1*/
          LZOPipe::Constructor((LZOPipe *)&v33.__pad_0[48], 0, 0x2000); /*0x5e83b9*/
          Pipe::SetDelegate((Pipe *)&v33.__pad_0[48], (int)&v31); /*0x5e83ca*/
          v21 = Compression::Read((int *)&v33.__pad_0[48], (int)v19, Size[0]); /*0x5e83e1*/
          v22 = (*(int (__thiscall **)(char *))(*(_DWORD *)&v33.__pad_0[48] + 4))(&v33.__pad_0[48]) + v21; /*0x5e83f4*/
          __3_YAXPAX_Z(v19); /*0x5e83f7*/
          Debug::Log(); /*0x5e8402*/
          RawFileClass::Construct((RawFileClass *)&v33.__pad_0[12], (int)aPreviewBin); /*0x5e8413*/
          if ( (unsigned __int8)FileClass::Open((RawFileClass *)&v33.__pad_0[12], 0) ) /*0x5e841d*/
            FileClass::Delete((RawFileClass *)&v33.__pad_0[12]); /*0x5e842a*/
          FileClass::Open2((RawFileClass *)&v33.__pad_0[12], (const CHAR *)2); /*0x5e8435*/
          FileClass::Write2((RawFileClass *)&v33.__pad_0[12], Size, 4u); /*0x5e8445*/
          FileClass::Write2((RawFileClass *)&v33.__pad_0[12], v20, v22); /*0x5e8450*/
          FileClass::CloseHandle((RawFileClass *)&v33.__pad_0[12]); /*0x5e8459*/
          __3_YAXPAX_Z(v20); /*0x5e845f*/
          Debug::Log(); /*0x5e8469*/
          SendNetworkFile(aPreviewBin, 3, 1, 0); /*0x5e847e*/
          Network::SetConnectionParams(&unk_A8E9C0, 30, -1, 600, 1); /*0x5e8493*/
          RawFileClass::Dtor((RawFileClass *)&v33.__pad_0[12]); /*0x5e849c*/
          LZOPipe::Destructor((LZOPipe *)&v33.__pad_0[48]); /*0x5e84a8*/
          Vector::Clear((int)&v31.Pipe_field_0x0C); /*0x5e84b1*/
          return Pipe::Dtor(&v31); /*0x5e84ba*/
        }
      }
    }
  }
  return result; /*0x5e80cf*/
}



// ==== 0x005E84D0  GameConfig::ComputeCRC  this=GameConfig  sig=csp ====
char *GameConfig_ComputeCRC()
{
  unsigned int v0; // ebx
  int *v1; // ebp
  int v2; // edx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // ebp
  char *v8; // ebp
  int *v10; // [esp+10h] [ebp-104h]
  _BYTE v11[256]; // [esp+14h] [ebp-100h] BYREF

  v0 = 0; /*0x5e84e8*/
  qmemcpy(v11, &unk_ABE050, sizeof(v11)); /*0x5e84ea*/
  v1 = &dword_ABE010; /*0x5e84ec*/
  v10 = &dword_ABE010; /*0x5e84fd*/
  v2 = 320; /*0x5e8501*/
  memset(&unk_ABE050, 0, 0x100u); /*0x5e8506*/
  do /*0x5e854a*/
  {
    v3 = v0 >> 31; /*0x5e850a*/
    if ( v2 < 4 ) /*0x5e8510*/
    {
      v5 = 0; /*0x5e8526*/
      v6 = v1; /*0x5e8528*/
      v7 = v2; /*0x5e852e*/
      v2 = 0; /*0x5e8530*/
      do /*0x5e853d*/
      {
        v5 = *(unsigned __int8 *)v6 | (v5 << 8); /*0x5e8539*/
        v6 = (int *)((char *)v6 + 1); /*0x5e853b*/
        --v7; /*0x5e853c*/
      }
      while ( v7 ); /*0x5e853d*/
      v1 = v10; /*0x5e853f*/
      v0 = v3 + v5 + 2 * v0; /*0x5e8546*/
    }
    else
    {
      v4 = *v1++; /*0x5e8512*/
      v10 = v1; /*0x5e8518*/
      v0 = v3 + v4 + 2 * v0; /*0x5e851f*/
      v2 -= 4; /*0x5e8521*/
    }
  }
  while ( v2 > 0 ); /*0x5e854a*/
  v8 = (char *)__2_YAPAXI_Z(0xCu); /*0x5e8553*/
  sprintf(v8, "%08X", v0); /*0x5e855c*/
  qmemcpy(&unk_ABE050, v11, 0x100u); /*0x5e8572*/
  return v8; /*0x5e8574*/
}



// ==== 0x005E8590  ObjectClass::SkirmishSetup_Setup_5E8590  this=ObjectClass  sig=csp ====
int SkirmishSetup_Setup_5E8590(ObjectClass *this)
{
  CCFileClass *v1; // ecx
  Skirmish *v3; // esi
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  int v6; // ebx
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // esi
  int v10; // eax
  char **v11; // esi
  char *v12; // eax

  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e8598*/
  {
    v1 = (CCFileClass *)loc_5DAF20; /*0x5e859a*/
  }
  else if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e85a4*/
  {
    v1 = (CCFileClass *)Game::ProcessIdle; /*0x5e85a6*/
  }
  else if ( *(_DWORD *)&dword_A8B238 == 1 /*0x5e85ba*/
         || (v1 = (CCFileClass *)Event_Dispatch::Return0, *(_DWORD *)&dword_A8B238 == 2) )
  {
    v1 = (CCFileClass *)&loc_5BB260; /*0x5e85bc*/
  }
  if ( CCFileClass::Load(v1) != 1 ) /*0x5e85c9*/
    return -1; /*0x5e85cb*/
  byte_8316D4 = 1; /*0x5e85db*/
  MapSeed::ValidateName(byte_ABDFD8, (int)aRandmapSed); /*0x5e85e2*/
  v3 = g_UIControlState; /*0x5e85e7*/
  if ( g_UIControlState ) /*0x5e85ef*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e85f3*/
    __3_YAXPAX_Z(v3); /*0x5e85f9*/
  }
  v4 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5e8603*/
  if ( v4 ) /*0x5e860d*/
    v5 = (Skirmish *)unknown_libname_27(v4); /*0x5e8611*/
  else
    v5 = 0; /*0x5e8618*/
  g_UIControlState = v5; /*0x5e8621*/
  Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5e8626*/
  v6 = 0; /*0x5e8630*/
  if ( dword_A8B8D8 <= 0 ) /*0x5e8634*/
  {
LABEL_18:
    v7 = GameConfig::ComputeCRC(); /*0x5e8655*/
    v8 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x5e8662*/
    if ( v8 ) /*0x5e866c*/
      v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &unk_ABE050, v7, 1, 0, 2, 4); /*0x5e8688*/
    else
      v9 = 0; /*0x5e868c*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x5e86c5*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8D0 + dword_A8B8DC,
           0) )
    {
      v10 = dword_A8B8D8++; /*0x5e86d2*/
      *(_DWORD *)(dword_A8B8CC + 4 * v10) = v9; /*0x5e86e1*/
    }
    __3_YAXPAX_Z(v7); /*0x5e86e5*/
    return v6; /*0x5e86ed*/
  }
  else
  {
    while ( !(unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v6)) ) /*0x5e8645*/
    {
      if ( ++v6 >= dword_A8B8D8 ) /*0x5e8653*/
        goto LABEL_18; /*0x5e8653*/
    }
    GameOption::SetDescriptionWStr(*(GameOption **)(dword_A8B8CC + 4 * v6), &unk_ABE050); /*0x5e8701*/
    v11 = (char **)(dword_A8B8CC + 4 * v6); /*0x5e870b*/
    v12 = GameConfig::ComputeCRC(); /*0x5e870e*/
    GameOption::SetDigest(*v11, v12); /*0x5e8716*/
    return v6; /*0x5e871b*/
  }
}



// ==== 0x005E8740  Render_Setup  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * a1), word_A8D610) == 0; /*0x5e875b*/
}



// ==== 0x005E8760  Settings::CheckString  this=Settings  sig=csp ====
int Settings::CheckString()
{
  char *v0; // eax

  v0 = CharToWideString(unk_A8B380); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0, word_A8D610) == 0; /*0x5e877d*/
}



// ==== 0x005E87A0  LoadNetworkShareStrings  this=-  sig=csp ====
wchar_t *LoadNetworkShareStrings()
{
  wchar_t *v0; // eax
  wchar_t *v1; // esi
  wchar_t *v2; // eax
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // esi
  wchar_t *result; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // esi

  if ( !dword_AC117C ) /*0x5e87a7*/
  {
    dword_AC117C = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 4078); /*0x5e87d4*/
    dword_AC1180 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 4079); /*0x5e87ef*/
    dword_AC1184 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 4080); /*0x5e880a*/
    dword_AC1188 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 4081); /*0x5e8825*/
    dword_AC118C = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 4082); /*0x5e8840*/
    dword_AC1190 = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 4083); /*0x5e885b*/
    dword_AC1194 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 4084); /*0x5e8865*/
  }
  if ( !g_HouseClass_ObserverFlags ) /*0x5e8872*/
  {
    v0 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8879*/
    v1 = v0; /*0x5e887e*/
    if ( v0 ) /*0x5e8885*/
      Waypoint::InitInvalid((_BYTE *)v0 + 40); /*0x5e888a*/
    else
      v1 = 0; /*0x5e8891*/
    g_HouseClass_ObserverFlags = (LPARAM)v1; /*0x5e8898*/
    wcscpy(v1, dword_AC117C); /*0x5e88a0*/
  }
  if ( !g_Lobby_PlayerCount ) /*0x5e88af*/
  {
    v2 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88b6*/
    v3 = v2; /*0x5e88bb*/
    if ( v2 ) /*0x5e88c2*/
      Waypoint::InitInvalid((_BYTE *)v2 + 40); /*0x5e88c7*/
    else
      v3 = 0; /*0x5e88ce*/
    g_Lobby_PlayerCount = (LPARAM)v3; /*0x5e88d6*/
    wcscpy(v3, dword_AC1180); /*0x5e88de*/
  }
  if ( !g_Lobby_PlayerTeam ) /*0x5e88ed*/
  {
    v4 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88f4*/
    v5 = v4; /*0x5e88f9*/
    if ( v4 ) /*0x5e8900*/
      Waypoint::InitInvalid((_BYTE *)v4 + 40); /*0x5e8905*/
    else
      v5 = 0; /*0x5e890c*/
    g_Lobby_PlayerTeam = (LPARAM)v5; /*0x5e8914*/
    wcscpy(v5, dword_AC1184); /*0x5e891c*/
  }
  if ( !g_Lobby_PlayerSide ) /*0x5e892b*/
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8932*/
    v7 = v6; /*0x5e8937*/
    if ( v6 ) /*0x5e893e*/
      Waypoint::InitInvalid((_BYTE *)v6 + 40); /*0x5e8943*/
    else
      v7 = 0; /*0x5e894a*/
    g_Lobby_PlayerSide = (LPARAM)v7; /*0x5e8951*/
    wcscpy(v7, dword_AC1188); /*0x5e8959*/
  }
  if ( !g_Lobby_PlayerColor ) /*0x5e8968*/
  {
    v8 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e896f*/
    v9 = v8; /*0x5e8974*/
    if ( v8 ) /*0x5e897b*/
      Waypoint::InitInvalid((_BYTE *)v8 + 40); /*0x5e8980*/
    else
      v9 = 0; /*0x5e8987*/
    g_Lobby_PlayerColor = (LPARAM)v9; /*0x5e898f*/
    wcscpy(v9, dword_AC118C); /*0x5e8997*/
  }
  if ( !g_Lobby_PlayerReady ) /*0x5e89a6*/
  {
    v10 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89ad*/
    v11 = v10; /*0x5e89b2*/
    if ( v10 ) /*0x5e89b9*/
      Waypoint::InitInvalid((_BYTE *)v10 + 40); /*0x5e89be*/
    else
      v11 = 0; /*0x5e89c5*/
    g_Lobby_PlayerReady = v11; /*0x5e89cd*/
    wcscpy(v11, dword_AC1190); /*0x5e89d5*/
  }
  result = (wchar_t *)g_Lobby_MaxPlayers; /*0x5e89dd*/
  if ( !g_Lobby_MaxPlayers ) /*0x5e89e4*/
  {
    v13 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89eb*/
    v14 = v13; /*0x5e89f0*/
    if ( v13 ) /*0x5e89f7*/
      Waypoint::InitInvalid((_BYTE *)v13 + 40); /*0x5e89fc*/
    else
      v14 = 0; /*0x5e8a03*/
    g_Lobby_MaxPlayers = (LPARAM)v14; /*0x5e8a0a*/
    return wcscpy(v14, dword_AC1194); /*0x5e8a12*/
  }
  return result; /*0x5e8a1b*/
}



// ==== 0x005E8A20  WinMainSetup_Setup_5DB6F0_Setup  this=-  sig=csp ====
int sub_5E8A20()
{
  if ( g_HouseClass_ObserverFlags ) /*0x5e8a2a*/
  {
    __3_YAXPAX_Z((void *)g_HouseClass_ObserverFlags); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerCount); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerTeam); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerSide); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerColor); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    __3_YAXPAX_Z(g_Lobby_PlayerReady); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_MaxPlayers); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
  return PtrVector::Destroy(&stru_A8DA74); /*0x5e8ad0*/
}



// ==== 0x005E8AE0  GameClass::InitDifficultyButtons  this=GameClass  sig=ida-proto ====
void GameClass_InitDifficultyButtons()
{
  signed int v0; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5e8ae7*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8af2*/
      v0 = 6; /*0x5e8b02*/
    else
      v0 = 2; /*0x5e8afb*/
  }
  else
  {
    v0 = 8; /*0x5e8b09*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b1f*/
  if ( v0 < 8 ) /*0x5e8b24*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8b39*/
}



// ==== 0x005E8B40  Game::ResetFlags  this=Game  sig=ida-proto ====
char Game_ResetFlags()
{
  byte_AC0AC8 = 0; /*0x5e8b42*/
  byte_AC0AEC = 0; /*0x5e8b47*/
  byte_AC0EA4 = 0; /*0x5e8b4c*/
  byte_AC0B10 = 0; /*0x5e8b51*/
  return 0; /*0x5e8b56*/
}



// ==== 0x005E8B60  Network::InitPlayerSlots  this=Network  sig=ida-proto ====
int Network_InitPlayerSlots()
{
  signed int v0; // edx
  int result; // eax

  if ( dword_A8B238 == 4 ) /*0x5e8b67*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8b72*/
      v0 = 6; /*0x5e8b82*/
    else
      v0 = 2; /*0x5e8b7b*/
  }
  else
  {
    v0 = 8; /*0x5e8b89*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b9f*/
  if ( v0 < 8 ) /*0x5e8ba4*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8bb9*/
  dword_A8DA8C = -1; /*0x5e8bc0*/
  result = Network::processGameEvent(stru_A8B250); /*0x5e8bca*/
  word_AC0D44 = 0; /*0x5e8bcf*/
  word_AC0B94 = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/
}



// ==== 0x005E8BF0  Player::FindByName  this=Player  sig=csp ====
wchar_t *__thiscall Player::FindByName(Player *this)
{
  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, (const wchar_t *)this) ) /*0x5e8bfd*/
    return (wchar_t *)g_HouseClass_ObserverFlags; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, (const wchar_t *)this) ) /*0x5e8c1b*/
    return (wchar_t *)g_Lobby_PlayerCount; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, (const wchar_t *)this) ) /*0x5e8c39*/
    return (wchar_t *)g_Lobby_PlayerTeam; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, (const wchar_t *)this) ) /*0x5e8c56*/
    return (wchar_t *)g_Lobby_PlayerSide; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, (const wchar_t *)this) ) /*0x5e8c74*/
    return (wchar_t *)g_Lobby_PlayerColor; /*0x5e8c80*/
  if ( !wcscmp(g_Lobby_PlayerReady, (const wchar_t *)this) ) /*0x5e8c92*/
    return g_Lobby_PlayerReady; /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, (const wchar_t *)this) ) /*0x5e8caf*/
    return (wchar_t *)g_Lobby_MaxPlayers; /*0x5e8cbb*/
  v3 = dword_A8DA84; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( dword_A8DA84 <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = (const wchar_t *)dword_A8DA78[v4]; /*0x5e8cd8*/
    if ( !wcscmp(v5, (const wchar_t *)this) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/
}



// ==== 0x005E8D00  WOLobby::FindPlayerIndex  this=WOLobby  sig=csp ====
int __thiscall WOLobby::FindPlayerIndex(WOLobby *this)
{
  int v2; // edi
  const wchar_t **v3; // esi

  v2 = 0; /*0x5e8d05*/
  v3 = (const wchar_t **)dword_A8DA90; /*0x5e8d07*/
  while ( !*v3 || _wcsicmp((const wchar_t *)this, *v3) ) /*0x5e8d1e*/
  {
    ++v3; /*0x5e8d20*/
    ++v2; /*0x5e8d23*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x5e8d2a*/
      return -1; /*0x5e8d32*/
  }
  return v2; /*0x5e8d2c*/
}



// ==== 0x005E8D40  RefreshLobbyAll_Helper  this=-  sig=ida-proto ====
int sub_5E8D40()
{
  const wchar_t *v1; // ebx
  int v2; // edi
  const wchar_t **v3; // esi

  if ( !dword_A8DA84 ) /*0x5e8d47*/
    return -1; /*0x5e8d49*/
  v1 = *(const wchar_t **)dword_A8DA78; /*0x5e8d55*/
  v2 = 0; /*0x5e8d57*/
  v3 = (const wchar_t **)&dword_A8DA90; /*0x5e8d59*/
  while ( !*v3 || _wcsicmp(v1, *v3) ) /*0x5e8d70*/
  {
    ++v3; /*0x5e8d72*/
    ++v2; /*0x5e8d75*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x5e8d7c*/
      return -1; /*0x5e8d84*/
  }
  return v2; /*0x5e8d4c*/
}



// ==== 0x005E8D90  Network_Handle_5E8D90  this=-  sig=ida-proto ====
void __fastcall sub_5E8D90(int a1, LPARAM a2)
{
  *(&dword_A8DA90 + a1) = a2; /*0x5e8d90*/
}



// ==== 0x005E8DA0  NetworkShare::GetField  this=NetworkShare  sig=ida-proto ====
int __fastcall NetworkShare::GetField(int a1)
{
  int result; // eax

  result = dword_A8DA78; /*0x5e8da0*/
  dword_A8DA8C = a1; /*0x5e8da5*/
  *(&dword_A8DA90 + a1) = *(_DWORD *)dword_A8DA78; /*0x5e8dad*/
  return result; /*0x5e8db4*/
}



// ==== 0x005E8DC0  Player::BuildListString  this=Player  sig=csp ====
void __thiscall Player::BuildListString(Player *this)
{
  wchar_t **v2; // edi
  wchar_t *v3; // esi
  wchar_t **v4; // eax
  wchar_t *v5; // eax
  DeleteAndZero v6; // [esp+Ch] [ebp-Ch] BYREF

  *(_WORD *)this = 0; /*0x5e8dc8*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = *v2; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (wchar_t *)g_HouseClass_ObserverFlags
      || v3 == (wchar_t *)g_Lobby_PlayerCount
      || v3 == g_Lobby_PlayerReady
      || v3 == (wchar_t *)g_Lobby_MaxPlayers
      || v3 == (wchar_t *)g_Lobby_PlayerTeam
      || v3 == (wchar_t *)g_Lobby_PlayerSide
      || v3 == (wchar_t *)g_Lobby_PlayerColor )
    {
      GetPlayerTypeString((char **)&v6.DeleteAndZero_field_0x04, v3); /*0x5e8e2b*/
      v4 = CharStringToWide((wchar_t **)&v6.DeleteAndZero_field_0x08, (const char **)&v6.DeleteAndZero_field_0x04); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6.DeleteAndZero_field_0x08); /*0x5e8e4b*/
      DeleteAndZero((ObjectClass *)&v6.DeleteAndZero_field_0x04); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, v3); /*0x5e8e1e*/
    }
    v5 = WideString::GetOrEmpty((wchar_t **)&v6); /*0x5e8e5d*/
    wcscat((wchar_t *)this, v5); /*0x5e8e64*/
    wcscat((wchar_t *)this, asc_8304FC); /*0x5e8e6f*/
    DeleteAndZero::Alt(&v6); /*0x5e8e7b*/
    ++v2; /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x5e8e89*/
}



// ==== 0x005E8EA0  NetworkLobby::SetupPlayers  this=NetworkLobby  sig=csp ====
void __thiscall NetworkLobby::SetupPlayers(NetworkLobby *this)
{
  LPARAM v1; // esi
  wchar_t *v2; // edi
  LPARAM v3; // ebx
  LPARAM v4; // ebp
  int v5; // edx
  LPARAM *v6; // ecx
  LPARAM v7; // eax
  bool v8; // al
  signed int v9; // edx
  ObjectClass *v10; // esi
  wchar_t *i; // edi
  wchar_t *v12; // ebp
  HWND v13; // edi
  int ResourceID2CSF; // ebx
  int v15; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v18; // edi
  int v19; // eax
  int v20; // eax
  HWND v21; // eax
  int v22; // ebx
  wchar_t **v23; // [esp+0h] [ebp-170h]
  wchar_t **v24; // [esp+0h] [ebp-170h]
  DeleteAndZero v25; // [esp+10h] [ebp-160h] BYREF
  wchar_t Destination[170]; // [esp+1Ch] [ebp-154h] BYREF

  if ( *(_WORD *)this->__pad_0 )
  {
    wcscpy(Destination, (const wchar_t *)this); /*0x5e8eba*/
    v1 = g_Lobby_MaxPlayers; /*0x5e8ebf*/
    v2 = g_Lobby_PlayerReady; /*0x5e8ec5*/
    v3 = g_HouseClass_ObserverFlags; /*0x5e8ecb*/
    v4 = g_Lobby_PlayerCount; /*0x5e8ed1*/
    v5 = 0; /*0x5e8eda*/
    v6 = dword_A8DA90; /*0x5e8edc*/
    do /*0x5e8f14*/
    {
      v7 = *v6; /*0x5e8ee1*/
      v8 = *v6 == v1 || v7 && v7 != v3 && v7 != v4 && (wchar_t *)v7 != v2 && *(_DWORD *)(v7 + 107) == -1; /*0x5e8f01*/
      v25.__pad_0[v5 + 4] = v8; /*0x5e8f06*/
      ++v6; /*0x5e8f0a*/
      ++v5; /*0x5e8f0d*/
    }
    while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x5e8f14*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e8f1d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8f28*/
        v9 = 6; /*0x5e8f38*/
      else
        v9 = 2; /*0x5e8f31*/
    }
    else
    {
      v9 = 8; /*0x5e8f3f*/
    }
    memset32(dword_A8DA90, g_HouseClass_ObserverFlags, v9); /*0x5e8f54*/
    if ( v9 < 8 ) /*0x5e8f59*/
      memset32((void *)(4 * v9 + 11066000), g_Lobby_PlayerCount, 8 - v9); /*0x5e8f6e*/
    v10 = 0; /*0x5e8f7a*/
    for ( i = wcstok(Destination, asc_8304FC, v23); i; i = wcstok(0, asc_8304FC, v24) )
    {
      WideString::Assign((wchar_t **)&v25, i); /*0x5e8f93*/
      v12 = NetworkLobby::DeleteAndZero((NetworkLobby *)&v25); /*0x5e8fa5*/
      DeleteAndZero::Alt(&v25); /*0x5e8fa7*/
      if ( !v12 ) /*0x5e8fae*/
      {
        v12 = Player::FindByName((Player *)i); /*0x5e8fb7*/
        if ( !v12 ) /*0x5e8fbb*/
          v12 = g_Lobby_PlayerReady; /*0x5e8fbd*/
      }
      if ( v12 != (wchar_t *)g_Lobby_MaxPlayers
        && (!v12
         || v12 == (wchar_t *)g_HouseClass_ObserverFlags
         || v12 == (wchar_t *)g_Lobby_PlayerCount
         || v12 == g_Lobby_PlayerReady
         || v12 == (wchar_t *)g_Lobby_PlayerTeam
         || v12 == (wchar_t *)g_Lobby_PlayerSide
         || v12 == (wchar_t *)g_Lobby_PlayerColor
         || *(_DWORD *)((char *)v12 + 107) != -1) )
      {
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e9017*/
        if ( !v13 ) /*0x5e901b*/
        {
          v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e9027*/
          if ( !v13 ) /*0x5e902b*/
          {
            v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e9037*/
            if ( !v13 ) /*0x5e903b*/
              v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e9047*/
          }
        }
        if ( v25.__pad_0[(_DWORD)v10 + 4] )
        {
          ResourceID2CSF = GetResourceID2CSF(v10); /*0x5e905c*/
          if ( GetComboBoxSelected(v13, ResourceID2CSF, -1) == -3 )
          {
            FillComboBoxRandomOnly(v13, ResourceID2CSF); /*0x5e9076*/
            if ( v10 )
            {
              if ( v10 == (ObjectClass *)1 )
              {
                v15 = 1042; /*0x5e908b*/
              }
              else if ( v10 == (ObjectClass *)2 )
              {
                v15 = 1043; /*0x5e9097*/
              }
              else if ( v10 == (ObjectClass *)3 )
              {
                v15 = 1044; /*0x5e90a3*/
              }
              else if ( v10 == (ObjectClass *)4 )
              {
                v15 = 1045; /*0x5e90af*/
              }
              else if ( v10 == (ObjectClass *)5 )
              {
                v15 = 1046; /*0x5e90bb*/
              }
              else if ( v10 == (ObjectClass *)6 )
              {
                v15 = 1047; /*0x5e90c7*/
              }
              else
              {
                v15 = v10 != (ObjectClass *)7 ? -1 : 1048;
              }
            }
            else
            {
              v15 = 1041; /*0x5e907f*/
            }
            DlgItem = GetDlgItem(v13, v15); /*0x5e90ec*/
            SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x5e90f3*/
            ResourceIDCSF = GetResourceIDCSF(v10); /*0x5e9100*/
            FillComboBoxFactions(v13, ResourceIDCSF); /*0x5e9106*/
            SetupSkirmishSpawnLocations(v13, ResourceIDCSF, -2); /*0x5e910d*/
          }
        }
      }
      else
      {
        v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e911c*/
        if ( !v18 ) /*0x5e9120*/
        {
          v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e912c*/
          if ( !v18 ) /*0x5e9130*/
          {
            v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e913c*/
            if ( !v18 ) /*0x5e9140*/
              v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e914c*/
          }
        }
        if ( !v25.__pad_0[(_DWORD)v10 + 4] )
        {
          dword_A8DA90[(_DWORD)v10] = (LPARAM)v12; /*0x5e915c*/
          v19 = GetResourceID2CSF(v10); /*0x5e9163*/
          SetupComboBoxObserver(v18, v19); /*0x5e916c*/
          if ( v10 )
          {
            if ( v10 == (ObjectClass *)1 )
            {
              v20 = 1042; /*0x5e9181*/
            }
            else if ( v10 == (ObjectClass *)2 )
            {
              v20 = 1043; /*0x5e918d*/
            }
            else if ( v10 == (ObjectClass *)3 )
            {
              v20 = 1044; /*0x5e9199*/
            }
            else if ( v10 == (ObjectClass *)4 )
            {
              v20 = 1045; /*0x5e91a5*/
            }
            else if ( v10 == (ObjectClass *)5 )
            {
              v20 = 1046; /*0x5e91b1*/
            }
            else if ( v10 == (ObjectClass *)6 )
            {
              v20 = 1047; /*0x5e91bd*/
            }
            else
            {
              v20 = v10 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v20 = 1041; /*0x5e9175*/
          }
          v21 = GetDlgItem(v18, v20); /*0x5e91e2*/
          SendMessageA(v21, 0x4F1u, 0, 1); /*0x5e91e9*/
          v22 = GetResourceIDCSF(v10); /*0x5e91f6*/
          FillListBox(v18, v22); /*0x5e91fc*/
          SetupSkirmishSpawnLocations(v18, v22, 8); /*0x5e9207*/
        }
      }
      dword_A8DA90[(_DWORD)v10] = (LPARAM)v12; /*0x5e9211*/
      v10 = (ObjectClass *)((char *)v10 + 1); /*0x5e921a*/
    }
  }
}



// ==== 0x005E9240  NetworkLobby::AssignPlayerSlot  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::AssignPlayerSlot(NetworkLobby *this)
{
  int result; // eax
  LPARAM *v2; // edx

  result = 0; /*0x5e9250*/
  v2 = dword_A8DA90; /*0x5e9252*/
  while ( (*v2 != g_HouseClass_ObserverFlags || *(_DWORD *)&this->__pad_3D[46] == -1) /*0x5e926c*/
       && (*v2 != g_Lobby_MaxPlayers || *(_DWORD *)&this->__pad_3D[46] != -1) )
  {
    ++v2; /*0x5e926e*/
    ++result; /*0x5e9271*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9278*/
      return -1; /*0x5e9280*/
  }
  dword_A8DA90[result] = (LPARAM)this; /*0x5e9284*/
  return result; /*0x5e927a*/
}



// ==== 0x005E9290  NetworkLobby::CheckLobbyConditions  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::CheckLobbyConditions(NetworkLobby *this)
{
  int v2; // ebp
  int v3; // edi
  LPARAM *v4; // esi
  int result; // eax

  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e929e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e92a9*/
      v2 = 6; /*0x5e92b9*/
    else
      v2 = 2; /*0x5e92b2*/
  }
  else
  {
    v2 = 8; /*0x5e92c0*/
  }
  if ( !g_MPCooperativeState && v2 < 7 ) /*0x5e92d1*/
    ++v2; /*0x5e92d3*/
  v3 = 0; /*0x5e92d4*/
  v4 = dword_A8DA90; /*0x5e92d6*/
  while ( 1 ) /*0x5e92e1*/
  {
    result = GUID::Compare((char *)(*v4 + 40), (int)this); /*0x5e92e1*/
    if ( (_BYTE)result ) /*0x5e92e8*/
      break; /*0x5e92e8*/
    ++v4; /*0x5e92ea*/
    ++v3; /*0x5e92ed*/
    if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5e92f4*/
      return result; /*0x5e92f4*/
  }
  result = dword_A8DA90[v3]; /*0x5e92fb*/
  if ( *(_DWORD *)(result + 107) == -1 ) /*0x5e9306*/
  {
    dword_A8DA90[v3] = g_Lobby_MaxPlayers; /*0x5e930e*/
  }
  else
  {
    result = g_HouseClass_ObserverFlags; /*0x5e931a*/
    if ( v3 >= v2 ) /*0x5e9321*/
      result = g_Lobby_PlayerCount; /*0x5e9323*/
    dword_A8DA90[v3] = result; /*0x5e9328*/
  }
  return result; /*0x5e92f6*/
}



// ==== 0x005E9340  ObjectClass::Audio_Helper  this=ObjectClass  sig=csp ====
int __thiscall Audio_Helper(ObjectClass *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  char **v5; // esi
  char *v6; // eax

  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e934e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e9359*/
      v2 = 6; /*0x5e9369*/
    else
      v2 = 2; /*0x5e9362*/
  }
  else
  {
    v2 = 8; /*0x5e9370*/
  }
  result = (int)g_MPCooperativeState; /*0x5e9375*/
  if ( !g_MPCooperativeState && v2 < 7 ) /*0x5e9381*/
    ++v2; /*0x5e9383*/
  v4 = 0; /*0x5e9384*/
  v5 = (char **)dword_A8DA90; /*0x5e9386*/
  while ( 1 ) /*0x5e938b*/
  {
    if ( *v5 ) /*0x5e938b*/
    {
      v6 = ToWideStringChar(*v5); /*0x5e9391*/
      result = _strcmpi((char *)this, v6); /*0x5e9398*/
      if ( !result ) /*0x5e93a2*/
        break; /*0x5e93a2*/
    }
    ++v5; /*0x5e93a4*/
    ++v4; /*0x5e93a7*/
    if ( (int)v5 >= (int)&dword_A8DAB0 ) /*0x5e93ae*/
      return result; /*0x5e93ae*/
  }
  result = dword_A8DA90[v4]; /*0x5e93b5*/
  if ( *(_DWORD *)(result + 107) == -1 ) /*0x5e93c0*/
  {
    dword_A8DA90[v4] = g_Lobby_MaxPlayers; /*0x5e93c8*/
  }
  else
  {
    result = g_HouseClass_ObserverFlags; /*0x5e93d4*/
    if ( v4 >= v2 ) /*0x5e93db*/
      result = g_Lobby_PlayerCount; /*0x5e93dd*/
    dword_A8DA90[v4] = result; /*0x5e93e2*/
  }
  return result; /*0x5e93b0*/
}



// ==== 0x005E93F0  ObjectClass::IsKnownPointer  this=ObjectClass  sig=csp ====
int __thiscall IsKnownPointer(ObjectClass *this)
{
  return this /*0x5e9431*/
      && this != (ObjectClass *)g_HouseClass_ObserverFlags
      && this != (ObjectClass *)g_Lobby_PlayerCount
      && this != (ObjectClass *)g_Lobby_PlayerReady
      && this != (ObjectClass *)g_Lobby_MaxPlayers
      && this != (ObjectClass *)g_Lobby_PlayerTeam
      && this != (ObjectClass *)g_Lobby_PlayerSide
      && this != (ObjectClass *)g_Lobby_PlayerColor;
}



// ==== 0x005E9440  Player::IsObserver  this=Player  sig=csp ====
int __thiscall Player::IsObserver(Player *this)
{
  return this /*0x5e9461*/
      && (this == (Player *)g_Lobby_PlayerTeam
       || this == (Player *)g_Lobby_PlayerSide
       || this == (Player *)g_Lobby_PlayerColor);
}



// ==== 0x005E9470  NetworkLobby::IsValidPlayerName  this=NetworkLobby  sig=csp ====
BOOL __thiscall NetworkLobby::IsValidPlayerName(NetworkLobby *this)
{
  return this /*0x5e9499*/
      && this != (NetworkLobby *)g_HouseClass_ObserverFlags
      && this != (NetworkLobby *)g_Lobby_PlayerCount
      && this != (NetworkLobby *)g_Lobby_MaxPlayers
      && this != (NetworkLobby *)g_Lobby_PlayerReady;
}



// ==== 0x005E94D0  Hash_Check_5E94D0  this=-  sig=csp ====
int sub_5E94D0()
{
  int result; // eax
  LPARAM *v1; // edx
  LPARAM v2; // ecx

  result = 0; /*0x5e94e5*/
  v1 = &dword_A8DA90; /*0x5e94e7*/
  do /*0x5e9508*/
  {
    v2 = *v1; /*0x5e94ec*/
    if ( *v1 && (v2 == g_Lobby_PlayerTeam || v2 == g_Lobby_PlayerSide || v2 == g_Lobby_PlayerColor) ) /*0x5e94fc*/
      ++result; /*0x5e94fe*/
    ++v1; /*0x5e94ff*/
  }
  while ( (int)v1 < (int)&dword_A8DAB0 ); /*0x5e9508*/
  return result; /*0x5e950a*/
}



// ==== 0x005E9510  NetworkLobby::CheckMinPlayers  this=NetworkLobby  sig=csp ====
bool NetworkLobby::CheckMinPlayers(NetworkLobby *this)
{
  int v1; // ecx
  int v2; // eax
  LPARAM *i; // edx

  v1 = dword_A8BB0C; /*0x5e9515*/
  if ( dword_A8B548 < dword_A8BB0C ) /*0x5e951d*/
    v1 = dword_A8B548; /*0x5e951f*/
  v2 = 0; /*0x5e9521*/
  if ( v1 > 0 ) /*0x5e952c*/
  {
    for ( i = dword_A8DA90; *i != g_HouseClass_ObserverFlags; ++i ) /*0x5e952e*/
    {
      if ( ++v2 >= v1 ) /*0x5e953d*/
        return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e953d*/
    }
    return 0; /*0x5e9535*/
  }
  return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e9554*/
}



// ==== 0x005E9560  GameOption::CheckDuplicate  this=GameOption  sig=csp ====
char GameOption_CheckDuplicate()
{
  LPARAM *v0; // eax

  v0 = &dword_A8DA90; /*0x5e9566*/
  while ( *v0 != g_Lobby_MaxPlayers ) /*0x5e956d*/
  {
    if ( (int)++v0 >= (int)&dword_A8DAB0 ) /*0x5e9577*/
      return 1; /*0x5e957b*/
  }
  return 0; /*0x5e957b*/
}



// ==== 0x005E9580  ObjectClass::Hash_Check_5E9580  this=ObjectClass  sig=csp ====
char sub_5E9580()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax

  v0 = 0; /*0x5e9595*/
  v1 = &dword_A8DA90; /*0x5e9597*/
  while ( 1 ) /*0x5e959c*/
  {
    v2 = *v1; /*0x5e959c*/
    if ( *v1 ) /*0x5e959c*/
    {
      if ( v2 != g_HouseClass_ObserverFlags /*0x5e95c2*/
        && v2 != g_Lobby_PlayerCount
        && v2 != g_Lobby_MaxPlayers
        && (wchar_t *)v2 != g_Lobby_PlayerReady
        && v0 == g_MPCooperativeState
        && *(_DWORD *)(v2 + 107) == -1 )
      {
        break; /*0x5e95c2*/
      }
    }
    ++v1; /*0x5e95c4*/
    ++v0; /*0x5e95c7*/
    if ( (int)v1 >= (int)&dword_A8DAB0 ) /*0x5e95ce*/
      return 0; /*0x5e95d5*/
  }
  return 1; /*0x5e95d0*/
}



// ==== 0x005E95E0  ObjectClass::Event_Helper  this=ObjectClass  sig=csp ====
char Event_Helper(ObjectClass *this)
{
  ObjectClass *v1; // edx
  LPARAM *v2; // ecx
  LPARAM v3; // eax
  unsigned __int8 v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  v6 = dword_A8B548; /*0x5e95f0*/
  if ( dword_A8B548 >= dword_A8BB0C ) /*0x5e95f4*/
    v6 = dword_A8BB0C; /*0x5e95f6*/
  v1 = 0; /*0x5e9618*/
  v2 = dword_A8DA90; /*0x5e961a*/
  while ( 1 ) /*0x5e961f*/
  {
    v3 = *v2; /*0x5e961f*/
    if ( *v2 ) /*0x5e961f*/
    {
      if ( v3 != g_HouseClass_ObserverFlags /*0x5e9645*/
        && v3 != g_Lobby_PlayerCount
        && v3 != g_Lobby_MaxPlayers
        && (wchar_t *)v3 != g_Lobby_PlayerReady
        && v1 == g_MPCooperativeState
        && *(_DWORD *)(v3 + 107) == -1 )
      {
        break; /*0x5e9645*/
      }
    }
    ++v2; /*0x5e9647*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x5e964a*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9651*/
    {
      v5 = 0; /*0x5e9653*/
      goto LABEL_13; /*0x5e9653*/
    }
  }
  v5 = 1; /*0x5e968d*/
LABEL_13:
  if ( dword_A8DA84 - v5 <= v6 ) /*0x5e9671*/
    return 0; /*0x5e9694*/
  Debug::Log(); /*0x5e967f*/
  return 1; /*0x5e9689*/
}



// ==== 0x005E96A0  NetworkLobby::CheckPlayerNameValid  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::CheckPlayerNameValid(NetworkLobby *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e96a7*/
    return 0; /*0x5e9713*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e96a9*/
  while ( 1 ) /*0x5e96ae*/
  {
    v3 = *v2; /*0x5e96ae*/
    if ( *v2 ) /*0x5e96ae*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e96f3*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetPlayerColor((SessionClass *)v3) == this )
      {
        break; /*0x5e96f3*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e96fe*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[108]; /*0x5e9700*/
      while ( *v4 != this ) /*0x5e9707*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9711*/
          return 0; /*0x5e9711*/
      }
      return 1; /*0x5e9707*/
    }
  }
  return 1; /*0x5e9713*/
}



// ==== 0x005E9720  NetworkLobby::CheckPlayerNames  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::CheckPlayerNames(NetworkLobby *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e9727*/
    return 0; /*0x5e9793*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e9729*/
  while ( 1 ) /*0x5e972e*/
  {
    v3 = *v2; /*0x5e972e*/
    if ( *v2 ) /*0x5e972e*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9773*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetOption((int *)v3) == this )
      {
        break; /*0x5e9773*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e977e*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[140]; /*0x5e9780*/
      while ( *v4 != this ) /*0x5e9787*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9791*/
          return 0; /*0x5e9791*/
      }
      return 1; /*0x5e9787*/
    }
  }
  return 1; /*0x5e9793*/
}



// ==== 0x005E9850  Game::ResetReadyStates  this=Game  sig=ida-proto ====
int Game_ResetReadyStates()
{
  int result; // eax
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e988b*/
      }
    }
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = dword_A8DA84; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * i), &word_A8D610); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(_DWORD *)(dword_A8DA78 + 4 * i); /*0x5e98d3*/
      if ( *(_DWORD *)(result + 119) ) /*0x5e98d6*/
        *(_DWORD *)(result + 119) = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/
}



// ==== 0x005E98F0  PlayerSlot::IndexToDlgID  this=PlayerSlot  sig=csp ====
int __thiscall PlayerSlot::IndexToDlgID(PlayerSlot *this)
{
  if ( !this ) /*0x5e98f4*/
    return 1041; /*0x5e98f6*/
  if ( this == (PlayerSlot *)1 ) /*0x5e98ff*/
    return 1042; /*0x5e9901*/
  if ( this == (PlayerSlot *)2 ) /*0x5e990a*/
    return 1043; /*0x5e990c*/
  if ( this == (PlayerSlot *)3 ) /*0x5e9915*/
    return 1044; /*0x5e9917*/
  if ( this == (PlayerSlot *)4 ) /*0x5e9920*/
    return 1045; /*0x5e9922*/
  if ( this == (PlayerSlot *)5 ) /*0x5e992b*/
    return 1046; /*0x5e992d*/
  if ( this == (PlayerSlot *)6 ) /*0x5e9936*/
    return 1047; /*0x5e9938*/
  return this != (PlayerSlot *)7 ? -1 : 1048;
}



// ==== 0x005E9950  Dialog::MapPlayerIDToIndex  this=Dialog  sig=csp ====
int __thiscall Dialog::MapPlayerIDToIndex(Dialog *this)
{
  int v2; // eax

  if ( this == (Dialog *)1041 ) /*0x5e9957*/
    return 0; /*0x5e9959*/
  if ( this == (Dialog *)1042 ) /*0x5e9961*/
    return 1; /*0x5e9963*/
  if ( this == (Dialog *)1043 ) /*0x5e996e*/
    return 2; /*0x5e9970*/
  if ( this == (Dialog *)1044 ) /*0x5e997b*/
    return 3; /*0x5e997d*/
  if ( this == (Dialog *)1045 ) /*0x5e9988*/
    return 4; /*0x5e998a*/
  if ( this == (Dialog *)1046 ) /*0x5e9995*/
    return 5; /*0x5e9997*/
  if ( this == (Dialog *)1047 ) /*0x5e99a2*/
    return 6; /*0x5e99a4*/
  v2 = -(this != (Dialog *)1048); /*0x5e99b1*/
  LOBYTE(v2) = v2 & 0xF8; /*0x5e99b3*/
  return v2 + 7; /*0x5e995b*/
}



// ==== 0x005E99C0  GameClass::GetDifficultyString  this=GameClass  sig=csp ====
wchar_t *__thiscall GameClass::GetDifficultyString(GameClass *this)
{
  if ( this == (GameClass *)g_HouseClass_ObserverFlags ) /*0x5e99c6*/
    return GetStringCSF(aSttPlayeropen, 0, g_Str_File_netshare_cpp, 4948); /*0x5e99d9*/
  if ( this == (GameClass *)g_Lobby_PlayerCount ) /*0x5e99e5*/
    return GetStringCSF(aSttPlayerclose, 0, g_Str_File_netshare_cpp, 4950); /*0x5e99f8*/
  if ( this == (GameClass *)g_Lobby_PlayerTeam ) /*0x5e9a04*/
    return GetStringCSF(g_Str_STT_PlayerDumbAI, 0, g_Str_File_netshare_cpp, 4952); /*0x5e9a17*/
  if ( this == (GameClass *)g_Lobby_PlayerSide ) /*0x5e9a23*/
    return GetStringCSF(g_Str_STT_PlayerSmartAI, 0, g_Str_File_netshare_cpp, 4954); /*0x5e9a36*/
  if ( this == (GameClass *)g_Lobby_PlayerColor ) /*0x5e9a42*/
    return GetStringCSF(g_Str_STT_PlayerGeniusAI, 0, g_Str_File_netshare_cpp, 4956); /*0x5e9a55*/
  if ( this == (GameClass *)g_Lobby_MaxPlayers ) /*0x5e9a61*/
    return GetStringCSF(aSttPlayeropeno, 0, g_Str_File_netshare_cpp, 4958); /*0x5e9a74*/
  return GetStringCSF(aSttPlayerhuman, 0, g_Str_File_netshare_cpp, 4960); /*0x5e99de*/
}



// ==== 0x005E9AA0  sub_5E9AA0  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebx
  LRESULT v7; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9ab6*/
  ShowWindow(hWnd, 0); /*0x5e9aba*/
  v5 = 0; /*0x5e9ad3*/
  v7 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5e9ad7*/
  if ( v7 > 0 ) /*0x5e9adb*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v5, 0) != a3 ) /*0x5e9aed*/
    {
      if ( (int)++v5 >= v7 ) /*0x5e9af6*/
        return ShowWindow(hWnd, 5); /*0x5e9af6*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v5, 0); /*0x5e9b04*/
  }
  return ShowWindow(hWnd, 5); /*0x5e9b13*/
}



// ==== 0x005E9B20  GetComboBoxSelectedDefault  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall ComboBox_GetSelectedDefault(HWND hDlg, int nIDDlgItem, LRESULT wParam)
{
  LRESULT v3; // eax
  LRESULT v6; // eax

  v3 = wParam; /*0x5e9b20*/
  if ( wParam == -1 ) /*0x5e9b34*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x5e9b41*/
  v6 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x5e9b4d*/
  return v6 != -1 ? v6 : 0;
}



// ==== 0x005E9B60  SelectLobbyCountry  this=MultiplayerLobby  sig=csp ====
int __fastcall SelectLobbyCountry(HWND a1, CountryCombo *a2)
{
  int ComboBoxSelected; // edi
  int result; // eax
  LPARAM v5; // ecx

  ComboBoxSelected = GetComboBoxSelected(a1, (int)a2, -1); /*0x5e9b6d*/
  result = CountryCombo::IDToIndex(a2); /*0x5e9b6f*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9b7a*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, ComboBoxSelected, 0); /*0x5e9b84*/
    result = dword_A8DA84; /*0x5e9b89*/
    if ( dword_A8DA84 ) /*0x5e9b90*/
      return SessionClass::SetPlayerOption((int *)*dword_A8DA78, ComboBoxSelected); /*0x5e9b9a*/
  }
  else
  {
    v5 = dword_A8DA90[result]; /*0x5e9ba2*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5e9bc3*/
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 76] = ComboBoxSelected; /*0x5e9bc5*/
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 76] = -1; /*0x5e9bcf*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 44] = -1; /*0x5e9bda*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 108] = -1; /*0x5e9be5*/
    }
  }
  return result; /*0x5e9b9f*/
}



// ==== 0x005E9C00  AssignPlayerColor  this=-  sig=csp ====
int __fastcall AssignPlayerColor(HWND hDlg, StartCombo *nIDDlgItem)
{
  int ComboBoxSelectedRaw; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)nIDDlgItem, -1); /*0x5e9c10*/
  result = StartCombo::IDToIndex(nIDDlgItem); /*0x5e9c12*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9c1d*/
  {
    FillColorComboBoxUI(hDlg, (int)nIDDlgItem); /*0x5e9c27*/
    if ( ComboBoxSelectedRaw != -2 ) /*0x5e9c2f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9c31*/
      while ( 1 ) /*0x5e9c36*/
      {
        v7 = *v6; /*0x5e9c36*/
        if ( *v6 ) /*0x5e9c36*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9c7b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetPlayerColor((SessionClass *)v7) == ComboBoxSelectedRaw )
          {
            break; /*0x5e9c7b*/
          }
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9c86*/
        {
          v8 = &stru_A8B250.__pad_0[108]; /*0x5e9c88*/
          while ( *(_DWORD *)v8 != ComboBoxSelectedRaw ) /*0x5e9c8f*/
          {
            v8 += 4; /*0x5e9c91*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9c99*/
              goto LABEL_19; /*0x5e9c99*/
          }
          break; /*0x5e9c8f*/
        }
      }
      ComboBoxSelectedRaw = -2; /*0x5e9c9d*/
    }
LABEL_19:
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5e9ca2*/
    result = dword_A8DA84; /*0x5e9caf*/
    if ( dword_A8DA84 ) /*0x5e9cb6*/
      return SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5e9cc0*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 108] = ComboBoxSelectedRaw; /*0x5e9cc9*/
  }
  return result; /*0x5e9cc5*/
}



// ==== 0x005E9CE0  AssignPlayerSide  this=CampaignClass  sig=csp ====
int __fastcall AssignPlayerSide(HWND hDlg, Dialog *nIDDlgItem)
{
  int v4; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  v4 = SetComboBoxSelection(hDlg, (int)nIDDlgItem, -1); /*0x5e9cf0*/
  result = Dialog::SideIDToIndex(nIDDlgItem); /*0x5e9cf2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9cfd*/
  {
    FillComboBoxSides(hDlg, (int)nIDDlgItem); /*0x5e9d07*/
    if ( v4 != -2 ) /*0x5e9d0f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9d11*/
      while ( 1 ) /*0x5e9d16*/
      {
        v7 = *v6; /*0x5e9d16*/
        if ( *v6 ) /*0x5e9d16*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9d5b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetOption((int *)v7) == v4 )
          {
            break; /*0x5e9d5b*/
          }
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9d66*/
        {
          v8 = &stru_A8B250.__pad_0[140]; /*0x5e9d68*/
          while ( *(_DWORD *)v8 != v4 ) /*0x5e9d6f*/
          {
            v8 += 4; /*0x5e9d71*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9d79*/
              goto LABEL_19; /*0x5e9d79*/
          }
          break; /*0x5e9d6f*/
        }
      }
      v4 = -2; /*0x5e9d7d*/
    }
LABEL_19:
    result = dword_A8DA84; /*0x5e9d82*/
    if ( dword_A8DA84 ) /*0x5e9d89*/
      return SessionClass::SetOption((int *)*dword_A8DA78, v4); /*0x5e9d93*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 140] = v4; /*0x5e9d9c*/
  }
  return result; /*0x5e9d98*/
}



// ==== 0x005E9DB0  ProcessNetworkLobbyOption  this=-  sig=csp ====
int __fastcall ProcessNetworkLobbyOption(HWND hDlg, Dialog *nIDDlgItem)
{
  int ComboBoxSelectedRaw2; // ebx
  int result; // eax

  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItem, -1); /*0x5e9dc0*/
  result = Dialog::OptionIDToIndex(nIDDlgItem); /*0x5e9dc2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9dcd*/
  {
    SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItem, ComboBoxSelectedRaw2); /*0x5e9dd4*/
    result = dword_A8DA84; /*0x5e9dd9*/
    if ( dword_A8DA84 ) /*0x5e9de0*/
      return SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9dea*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9df3*/
  }
  return result; /*0x5e9def*/
}



// ==== 0x005E9E00  NetworkLobby::InitLobbyDropdowns  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::InitLobbyDropdowns(NetworkLobby *this)
{
  int i; // ebp
  Dialog *ResourceID4CSF; // esi
  int ComboBoxSelectedRaw2; // edi
  int result; // eax

  for ( i = 0; i < 8; ++i ) /*0x5e9e06*/
  {
    ResourceID4CSF = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5e9e0f*/
    ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)this, (int)ResourceID4CSF, -1); /*0x5e9e1e*/
    result = Dialog::OptionIDToIndex(ResourceID4CSF); /*0x5e9e20*/
    if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9e2b*/
    {
      SetupLobbyPlayerSlots((HWND)this, (int)ResourceID4CSF, ComboBoxSelectedRaw2); /*0x5e9e32*/
      result = dword_A8DA84; /*0x5e9e37*/
      if ( dword_A8DA84 ) /*0x5e9e3e*/
        result = SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9e48*/
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9e4f*/
    }
  }
  return result; /*0x5e9e5c*/
}



// ==== 0x005E9E70  SetupSkirmishPlayerSlots  this=NetworkLobby  sig=csp ====
int __fastcall SetupSkirmishPlayerSlots(HWND hDlg, void *a2, HWND hWnd)
{
  int ResourceID2CSF; // edi
  int ResourceIDCSF; // ebx
  LPARAM v7; // eax
  HWND DlgItem; // eax
  HWND v9; // ebx
  HWND v10; // esi
  int result; // eax
  HWND v12; // eax
  HWND v13; // ebp
  int PlayerCountMap; // esi
  int v15; // eax
  int nIDDlgItem; // [esp+10h] [ebp-10h]
  HWND nIDDlgItema; // [esp+10h] [ebp-10h]
  int ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v20; // [esp+1Ch] [ebp-4h]
  HWND hWnda; // [esp+24h] [ebp+4h]

  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)a2); /*0x5e9e88*/
  ResourceIDCSF = GetResourceIDCSF((ObjectClass *)a2); /*0x5e9e91*/
  nIDDlgItem = GetResourceID3CSF((ObjectClass *)a2); /*0x5e9e9a*/
  ResourceID4CSF = GetResourceID4CSF((ObjectClass *)a2); /*0x5e9ea3*/
  if ( (int)g_MPCooperativeState >= 0 /*0x5e9ed5*/
    && a2 == g_MPCooperativeState
    && ((v7 = dword_A8DA90[(_DWORD)a2], v7 == g_Lobby_MaxPlayers) || !a2 || *(_DWORD *)(v7 + 107) == -1) )
  {
    SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -3); /*0x5e9ee1*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9eec*/
    SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9ef9*/
    SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9f06*/
    DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9f13*/
    EnableWindow(DlgItem, 0); /*0x5e9f1e*/
    v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9f24*/
    EnableWindow(v9, 0); /*0x5e9f29*/
    ShowWindow(v9, 0); /*0x5e9f34*/
    hWnda = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9f41*/
    EnableWindow(hWnda, 0); /*0x5e9f45*/
    ShowWindow(hWnda, 0); /*0x5e9f4e*/
    v10 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9f58*/
    EnableWindow(v10, 0); /*0x5e9f5d*/
    return ShowWindow(v10, 0); /*0x5e9f62*/
  }
  else
  {
    if ( !(_BYTE)hWnd ) /*0x5e9f74*/
    {
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -2); /*0x5e9f7c*/
      SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9f87*/
      SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9f94*/
      SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9fa1*/
    }
    v12 = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9fae*/
    EnableWindow(v12, (unsigned __int8)hWnd); /*0x5e9fbc*/
    v20 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9fce*/
    EnableWindow(v20, (unsigned __int8)hWnd); /*0x5e9fd2*/
    nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9fde*/
    EnableWindow(nIDDlgItema, (unsigned __int8)hWnd); /*0x5e9fe2*/
    v13 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9fec*/
    if ( (_BYTE)hWnd && dword_A8B23C && !LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x5e9fff*/
      EnableWindow(v13, 0); /*0x5ea008*/
    else
      EnableWindow(v13, (unsigned __int8)hWnd); /*0x5ea00c*/
    if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ea01c*/
    {
      PlayerCountMap = 8; /*0x5ea01e*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ea030*/
      if ( dword_A8B23C ) /*0x5ea034*/
      {
        v15 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ea038*/
        if ( v15 != -1 && v15 < PlayerCountMap ) /*0x5ea045*/
          PlayerCountMap = v15; /*0x5ea047*/
      }
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ea04f*/
      {
        if ( Network::IsLobbyFeature() ) /*0x5ea051*/
        {
          PlayerCountMap &= ~1u; /*0x5ea05a*/
        }
        else if ( Network::IsMultiplayerActive() ) /*0x5ea05f*/
        {
          PlayerCountMap = 2; /*0x5ea068*/
        }
      }
    }
    if ( !g_MPCooperativeState && PlayerCountMap < 7 ) /*0x5ea07a*/
      ++PlayerCountMap; /*0x5ea07c*/
    result = (int)a2; /*0x5ea07d*/
    if ( (int)a2 < PlayerCountMap || a2 == g_MPCooperativeState ) /*0x5ea087*/
    {
      ShowWindow(v20, 5); /*0x5ea096*/
      ShowWindow(nIDDlgItema, 5); /*0x5ea09f*/
      if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x5ea0a7*/
        return ShowWindow(v13, 5); /*0x5ea0a7*/
      LOBYTE(result) = Network::IsLobbyFeature(); /*0x5ea0a9*/
      if ( !(_BYTE)result ) /*0x5ea0b0*/
        return ShowWindow(v13, 5); /*0x5ea0b5*/
    }
  }
  return result; /*0x5e9f64*/
}



// ==== 0x005EA0D0  sub_5EA0D0  this=-  sig=ida-proto ====
int __fastcall sub_5EA0D0(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea0f9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea105*/
          break;
        case 3:
          v4 = 1044; /*0x5ea111*/
          break;
        case 4:
          v4 = 1045; /*0x5ea11d*/
          break;
        case 5:
          v4 = 1046; /*0x5ea129*/
          break;
        case 6:
          v4 = 1047; /*0x5ea135*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea0ed*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea151*/
    EnableWindow(DlgItem, 1); /*0x5ea156*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea15e*/
  }
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea176*/
}



// ==== 0x005EA180  GameLobby_Setup  this=-  sig=csp ====
int __fastcall GameLobby_Setup(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax
  int v6; // eax
  HWND v7; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea1a9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea1b5*/
          break;
        case 3:
          v4 = 1044; /*0x5ea1c1*/
          break;
        case 4:
          v4 = 1045; /*0x5ea1cd*/
          break;
        case 5:
          v4 = 1046; /*0x5ea1d9*/
          break;
        case 6:
          v4 = 1047; /*0x5ea1e5*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea19d*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea201*/
    EnableWindow(DlgItem, 0); /*0x5ea206*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea20e*/
  }
  if ( a2 )
  {
    if ( a2 == (void *)1 )
    {
      v6 = 1042; /*0x5ea22d*/
    }
    else if ( a2 == (void *)2 )
    {
      v6 = 1043; /*0x5ea239*/
    }
    else if ( a2 == (void *)3 )
    {
      v6 = 1044; /*0x5ea245*/
    }
    else if ( a2 == (void *)4 )
    {
      v6 = 1045; /*0x5ea251*/
    }
    else if ( a2 == (void *)5 )
    {
      v6 = 1046; /*0x5ea25d*/
    }
    else if ( a2 == (void *)6 )
    {
      v6 = 1047; /*0x5ea269*/
    }
    else
    {
      v6 = a2 != (void *)7 ? -1 : 1048;
    }
  }
  else
  {
    v6 = 1041; /*0x5ea221*/
  }
  v7 = GetDlgItem(hDlg, v6); /*0x5ea285*/
  EnableWindow(v7, 1); /*0x5ea28a*/
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea297*/
}



// ==== 0x005EA2A0  NetworkLobby::Dispatch  this=NetworkLobby  sig=csp ====
HWND *__thiscall NetworkLobby::Dispatch(NetworkLobby *this)
{
  int i; // esi
  int v2; // eax
  HWND DlgItem; // ebx
  wchar_t *v4; // eax
  HWND v5; // edi
  int v6; // eax
  LPARAM v7; // eax
  HWND *result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v2 = 1747; /*0x5ea2c1*/
          break;
        case 2:
          v2 = 1748; /*0x5ea2cd*/
          break;
        case 3:
          v2 = 1749; /*0x5ea2d9*/
          break;
        case 4:
          v2 = 1750; /*0x5ea2e5*/
          break;
        case 5:
          v2 = 1751; /*0x5ea2f1*/
          break;
        case 6:
          v2 = 1752; /*0x5ea2fd*/
          break;
        default:
          v2 = i != 7 ? -1 : 1753;
          break;
      }
    }
    else
    {
      v2 = 1746; /*0x5ea2b5*/
    }
    DlgItem = GetDlgItem((HWND)this, v2); /*0x5ea31f*/
    v4 = (wchar_t *)dword_A8DA90[i]; /*0x5ea321*/
    v5 = 0; /*0x5ea328*/
    if ( v4 /*0x5ea36c*/
      && v4 != (wchar_t *)g_HouseClass_ObserverFlags
      && v4 != (wchar_t *)g_Lobby_PlayerCount
      && v4 != g_Lobby_PlayerReady
      && v4 != (wchar_t *)g_Lobby_MaxPlayers
      && v4 != (wchar_t *)g_Lobby_PlayerTeam
      && v4 != (wchar_t *)g_Lobby_PlayerSide
      && v4 != (wchar_t *)g_Lobby_PlayerColor
      && !wcscmp(v4, (const wchar_t *)&stru_A8D600.Network_field_0x10) )
    {
      v6 = HashTable::Find(&g_DialogHashTable, (const char *)off_8316CC, 0); /*0x5ea380*/
LABEL_33:
      v5 = (HWND)v6; /*0x5ea3be*/
      goto LABEL_34; /*0x5ea3be*/
    }
    v7 = dword_A8DA90[i]; /*0x5ea382*/
    if ( v7 && (v7 == g_Lobby_PlayerTeam || v7 == g_Lobby_PlayerSide || v7 == g_Lobby_PlayerColor) /*0x5ea3a9*/
      || *(_DWORD *)(v7 + 119) == 1 )
    {
      v6 = HashTable::Find(&g_DialogHashTable, off_8316D0, 0); /*0x5ea3b9*/
      goto LABEL_33; /*0x5ea3b9*/
    }
LABEL_34:
    result = CacheDialogInvalidate(DlgItem, v5); /*0x5ea3c0*/
  }
  return result; /*0x5ea3d3*/
}



// ==== 0x005EA3E0  RefreshLobbyAll  this=MultiplayerLobby  sig=csp ====
HWND *__fastcall Lobby_RefreshAll(HWND hDlg, char a2)
{
  HWND v2; // edi
  int v3; // esi
  int ResourceID_Hardcoded; // eax
  HWND DlgItem; // edi
  void *v6; // eax
  HWND Default; // eax
  int i; // esi
  int ResourceID2; // edi
  int v10; // eax
  void *v11; // eax
  void *v12; // ebp
  int ResourceID; // esi
  int v14; // eax
  HWND v15; // edi
  int j; // esi
  int v17; // ebx
  int v18; // eax
  int k; // esi
  int ResourceID3; // ebx
  int v21; // eax
  int m; // esi
  int ResourceID4; // ebx
  int v24; // eax
  int v25; // ebp
  const wchar_t **v26; // ebx
  int v27; // eax
  HWND v28; // eax
  const wchar_t *v29; // esi
  HWND v30; // edi
  wchar_t *v31; // ecx
  int v32; // eax
  HWND *result; // eax
  int v34; // ebp
  const wchar_t **v35; // ebx
  int v36; // eax
  HWND v37; // eax
  const wchar_t *v38; // esi
  HWND v39; // edi
  wchar_t *v40; // ecx
  int v41; // eax
  int n; // esi
  int v43; // eax
  HWND v44; // edi
  void *v45; // eax
  HWND v46; // eax
  int v47; // ebx
  int v48; // eax
  int ii; // esi
  int v50; // edi
  int v51; // eax
  char Buffer[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = hDlg; /*0x5ea3e7*/
  if ( a2 ) /*0x5ea3ef*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea3f5*/
    v3 = 0; /*0x5ea3fa*/
    while ( 1 ) /*0x5ea404*/
    {
      ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v3); /*0x5ea404*/
      DlgItem = GetDlgItem(v2, ResourceID_Hardcoded); /*0x5ea413*/
      v6 = (void *)GetPlayerSide(v3); /*0x5ea415*/
      Default = (HWND)BuildingType::FindDefault(v6); /*0x5ea41c*/
      CacheDialogInvalidate(DlgItem, Default); /*0x5ea425*/
      if ( ++v3 >= 8 ) /*0x5ea42e*/
        break; /*0x5ea42e*/
      v2 = hDlg; /*0x5ea3fe*/
    }
    for ( i = 0; i < 8; ++i ) /*0x5ea430*/
    {
      ResourceID2 = GetResourceID2CSF((void *)i); /*0x5ea43b*/
      v10 = GetPlayerSide(i); /*0x5ea43d*/
      SetupLobbyCountryCombo(hDlg, ResourceID2, v10); /*0x5ea449*/
    }
    v11 = (void *)RefreshLobbyAll_Helper(); /*0x5ea454*/
    v12 = v11; /*0x5ea459*/
    if ( v11 == (void *)-1 ) /*0x5ea45e*/
    {
      v15 = hDlg; /*0x5ea480*/
    }
    else
    {
      ResourceID = GetResourceIDCSF(v11); /*0x5ea469*/
      v14 = RefreshLobbyAll_Play(v12); /*0x5ea46b*/
      v15 = hDlg; /*0x5ea470*/
      SetupSkirmishSpawnLocations(hDlg, ResourceID, v14); /*0x5ea479*/
    }
    for ( j = 0; j < 8; ++j ) /*0x5ea484*/
    {
      if ( (void *)j != v12 ) /*0x5ea488*/
      {
        v17 = GetResourceIDCSF((void *)j); /*0x5ea493*/
        v18 = RefreshLobbyAll_Play(j); /*0x5ea495*/
        SetupSkirmishSpawnLocations(v15, v17, v18); /*0x5ea49f*/
      }
    }
    for ( k = 0; k < 8; ++k ) /*0x5ea4aa*/
    {
      ResourceID3 = GetResourceID3CSF((void *)k); /*0x5ea4b5*/
      v21 = RefreshLobbyAll_Get(k); /*0x5ea4b7*/
      SetupLobbyFactionSlots(v15, ResourceID3, v21); /*0x5ea4c1*/
    }
    for ( m = 0; m < 8; ++m ) /*0x5ea4cc*/
    {
      ResourceID4 = GetResourceID4CSF((void *)m); /*0x5ea4d7*/
      v24 = RefreshLobbyAll_Get_5EAA70(m); /*0x5ea4d9*/
      SetupLobbyPlayerSlots(v15, ResourceID4, v24); /*0x5ea4e3*/
    }
    v25 = 0; /*0x5ea4ee*/
    v26 = (const wchar_t **)&dword_A8DA90; /*0x5ea4f0*/
    while ( 1 ) /*0x5ea4f7*/
    {
      v27 = RefreshLobbyAll_Helper_5EAAD0(v25); /*0x5ea4f7*/
      v28 = GetDlgItem(hDlg, v27); /*0x5ea502*/
      v29 = *v26; /*0x5ea508*/
      v30 = 0; /*0x5ea50a*/
      v31 = (wchar_t *)*v26; /*0x5ea50c*/
      *(_DWORD *)Buffer = v28; /*0x5ea50e*/
      if ( IsKnownPointer(v31) ) /*0x5ea512*/
      {
        if ( !wcscmp(v29, &word_A8D610) ) /*0x5ea521*/
          break; /*0x5ea521*/
      }
      if ( RefreshLobbyAll_Helper_5EA8E0(v25) == 1 ) /*0x5ea541*/
      {
        v32 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea551*/
        goto LABEL_24; /*0x5ea551*/
      }
LABEL_25:
      result = CacheDialogInvalidate(*(HWND *)Buffer, v30); /*0x5ea558*/
      ++v26; /*0x5ea563*/
      ++v25; /*0x5ea566*/
      if ( (int)v26 >= (int)&dword_A8DAB0 ) /*0x5ea56d*/
      {
        if ( dword_A8B238 == 4 ) /*0x5ea576*/
          result = (HWND *)RefreshLobbyAll_Set(); /*0x5ea578*/
        if ( dword_A8B23C ) /*0x5ea585*/
          return (HWND *)(*(int (__thiscall **)(int, HWND))(*(_DWORD *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea592*/
        return result; /*0x5ea59c*/
      }
    }
    v32 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea535*/
LABEL_24:
    v30 = (HWND)v32; /*0x5ea556*/
    goto LABEL_25; /*0x5ea556*/
  }
  if ( dword_A8B23C ) /*0x5ea5a5*/
    (*(void (__thiscall **)(int, HWND))(*(_DWORD *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea5aa*/
  v34 = 0; /*0x5ea5ad*/
  v35 = (const wchar_t **)&dword_A8DA90; /*0x5ea5af*/
  while ( 1 ) /*0x5ea5da*/
  {
    v36 = RefreshLobbyAll_Helper_5EAAD0(v34); /*0x5ea5bc*/
    v37 = GetDlgItem(v2, v36); /*0x5ea5c3*/
    v38 = *v35; /*0x5ea5c9*/
    v39 = 0; /*0x5ea5cb*/
    v40 = (wchar_t *)*v35; /*0x5ea5cd*/
    *(_DWORD *)Buffer = v37; /*0x5ea5cf*/
    if ( IsKnownPointer(v40) && !wcscmp(v38, &word_A8D610) ) /*0x5ea5e2*/
    {
      v41 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea5f6*/
    }
    else
    {
      if ( RefreshLobbyAll_Helper_5EA8E0(v34) != 1 ) /*0x5ea602*/
        goto LABEL_40; /*0x5ea602*/
      v41 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea612*/
    }
    v39 = (HWND)v41; /*0x5ea617*/
LABEL_40:
    CacheDialogInvalidate(*(HWND *)Buffer, v39); /*0x5ea61f*/
    ++v35; /*0x5ea624*/
    ++v34; /*0x5ea627*/
    if ( (int)v35 >= (int)&dword_A8DAB0 ) /*0x5ea62e*/
      break; /*0x5ea62e*/
    v2 = hDlg; /*0x5ea5b6*/
  }
  wcscpy(&word_AC0D44, &word_AC0B94); /*0x5ea63a*/
  Player::BuildListString(&word_AC0B94); /*0x5ea647*/
  if ( wcscmp(&word_AC0D44, &word_AC0B94) ) /*0x5ea656*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea668*/
    if ( dword_A8B238 == 4 ) /*0x5ea674*/
      RefreshLobbyAll_Set(); /*0x5ea676*/
  }
  for ( n = 0; n < 8; ++n ) /*0x5ea67b*/
  {
    v43 = GetResourceIDHardcodedCSF((void *)n); /*0x5ea67f*/
    v44 = GetDlgItem(hDlg, v43); /*0x5ea68e*/
    v45 = (void *)GetPlayerSide(n); /*0x5ea690*/
    v46 = (HWND)BuildingType::FindDefault(v45); /*0x5ea697*/
    CacheDialogInvalidate(v44, v46); /*0x5ea6a0*/
  }
  strcpy(&byte_AC0EA4, &byte_AC0B10); /*0x5ea6c7*/
  v47 = 0; /*0x5ea6ce*/
  byte_AC0B10 = 0; /*0x5ea6d2*/
  do /*0x5ea723*/
  {
    v48 = GetPlayerSide(v47); /*0x5ea6db*/
    sprintf(Buffer, "%d,", v48); /*0x5ea6eb*/
    strcat(&byte_AC0B10, Buffer); /*0x5ea716*/
    ++v47; /*0x5ea71d*/
  }
  while ( v47 < 8 ); /*0x5ea723*/
  if ( strcmp(&byte_AC0EA4, &byte_AC0B10) ) /*0x5ea737*/
  {
    for ( ii = 0; ii < 8; ++ii ) /*0x5ea760*/
    {
      v50 = GetResourceID2CSF((void *)ii); /*0x5ea76b*/
      v51 = GetPlayerSide(ii); /*0x5ea76d*/
      SetupLobbyCountryCombo(hDlg, v50, v51); /*0x5ea777*/
    }
  }
  strcpy(&byte_AC0AC8, &byte_AC0AEC); /*0x5ea79e*/
  RefreshLobbyAll_Play_5EAB30(&byte_AC0AEC); /*0x5ea7ac*/
  if ( strcmp(&byte_AC0AC8, &byte_AC0AEC) ) /*0x5ea7c3*/
    RefreshLobbyAll_Play_5EAEE0(hDlg); /*0x5ea7ee*/
  strcpy(byte_AC0A9C, byte_AC0B6C); /*0x5ea80f*/
  RefreshLobbyAll_Get_5EAC00(byte_AC0B6C); /*0x5ea81d*/
  if ( strcmp(byte_AC0A9C, byte_AC0B6C) ) /*0x5ea834*/
    RefreshLobbyAll_Get_5EADA0(hDlg); /*0x5ea85f*/
  strcpy(byte_AC0278, byte_AC0B48); /*0x5ea880*/
  RefreshLobbyAll_Get_5EACD0(byte_AC0B48); /*0x5ea88e*/
  result = (HWND *)strcmp(byte_AC0278, byte_AC0B48); /*0x5ea8a5*/
  if ( result ) /*0x5ea8cc*/
    return (HWND *)RefreshLobbyAll_Setup(hDlg); /*0x5ea8d0*/
  return result; /*0x5ea595*/
}



// ==== 0x005EA8E0  RefreshLobbyAll_Helper_5EA8E0  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA8E0(int a1)
{
  int v1; // ecx
  int result; // eax

  v1 = *(&dword_A8DA90 + a1); /*0x5ea8e0*/
  result = 0; /*0x5ea8e7*/
  if ( v1 && (v1 == g_Lobby_PlayerTeam || v1 == g_Lobby_PlayerSide || v1 == g_Lobby_PlayerColor) /*0x5ea909*/
    || *(_DWORD *)(v1 + 119) == 1 )
  {
    return 1; /*0x5ea90b*/
  }
  return result; /*0x5ea910*/
}



// ==== 0x005EA920  GetPlayerSide  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA920(int a1)
{
  int result; // eax
  wchar_t *v3; // esi

  result = -2; /*0x5ea924*/
  v3 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5ea92f*/
  if ( dword_A8B23C && (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) ) /*0x5ea948*/
    result = (*(int (**)(void))(*(_DWORD *)dword_A8B23C + 40))(); /*0x5ea94c*/
  if ( v3 /*0x5ea969*/
    && (v3 == (wchar_t *)g_Lobby_PlayerTeam
     || v3 == (wchar_t *)g_Lobby_PlayerSide
     || v3 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B29C][a1]; /*0x5ea96b*/
  }
  if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady ) /*0x5ea98b*/
  {
    if ( v3 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ea993*/
      return -3; /*0x5ea996*/
    else
      return SessionClass::GetPlayerSide((int)v3); /*0x5ea99f*/
  }
  return result; /*0x5ea972*/
}



// ==== 0x005EA9B0  RefreshLobbyAll_Play  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA9B0(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5ea9b0*/
  if ( v1 /*0x5ea9d1*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2BC][a1]; /*0x5ea9d3*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5ea9f9*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaa02*/
  }
  return SessionClass::GetPlayerColor(*(&dword_A8DA90 + a1)); /*0x5ea9da*/
}



// ==== 0x005EAA10  RefreshLobbyAll_Get  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EAA10(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5eaa10*/
  if ( v1 /*0x5eaa31*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2DC][a1]; /*0x5eaa33*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5eaa59*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaa62*/
  }
  return SessionClass::GetOption(*(&dword_A8DA90 + a1)); /*0x5eaa3a*/
}



// ==== 0x005EAA70  RefreshLobbyAll_Get_5EAA70  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EAA70(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5eaa70*/
  if ( v1 /*0x5eaa91*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2FC][a1]; /*0x5eaa93*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5eaab9*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaac2*/
  }
  return SessionClass::GetOption2(*(&dword_A8DA90 + a1)); /*0x5eaa9a*/
}



// ==== 0x005EAAD0  ObjectClass::RefreshLobbyAll_Helper_5EAAD0  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Helper_5EAAD0(ObjectClass *this)
{
  if ( !this ) /*0x5eaad4*/
    return 1746; /*0x5eaad6*/
  if ( this == (ObjectClass *)1 ) /*0x5eaadf*/
    return 1747; /*0x5eaae1*/
  if ( this == (ObjectClass *)2 ) /*0x5eaaea*/
    return 1748; /*0x5eaaec*/
  if ( this == (ObjectClass *)3 ) /*0x5eaaf5*/
    return 1749; /*0x5eaaf7*/
  if ( this == (ObjectClass *)4 ) /*0x5eab00*/
    return 1750; /*0x5eab02*/
  if ( this == (ObjectClass *)5 ) /*0x5eab0b*/
    return 1751; /*0x5eab0d*/
  if ( this == (ObjectClass *)6 ) /*0x5eab16*/
    return 1752; /*0x5eab18*/
  return this != (ObjectClass *)7 ? -1 : 1753;
}



// ==== 0x005EAB30  ObjectClass::RefreshLobbyAll_Play_5EAB30  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAB30(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int PlayerColor; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2BC]; /*0x5eab37*/
  *this = 0; /*0x5eab3c*/
  do /*0x5eabeb*/
  {
    v3 = (wchar_t *)v2[2549]; /*0x5eab40*/
    if ( v3 /*0x5eab60*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      PlayerColor = *v2; /*0x5eab62*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eab6c*/
    {
      PlayerColor = -2; /*0x5eab6e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eab7b*/
    {
      PlayerColor = -2; /*0x5eab7d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eab8a*/
    {
      PlayerColor = -2; /*0x5eab8c*/
    }
    else
    {
      PlayerColor = -2; /*0x5eab9a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eab9f*/
        PlayerColor = SessionClass::GetPlayerColor((int)v3); /*0x5eaba1*/
    }
    sprintf(Buffer, "%d,", PlayerColor); /*0x5eabb1*/
    result = 0; /*0x5eabbd*/
    ++v2; /*0x5eabc8*/
    strcat(this, Buffer); /*0x5eabdc*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2DC] ); /*0x5eabeb*/
  return result; /*0x5eabf1*/
}



// ==== 0x005EAC00  ObjectClass::RefreshLobbyAll_Get_5EAC00  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAC00(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2DC]; /*0x5eac07*/
  *this = 0; /*0x5eac0c*/
  do /*0x5eacbb*/
  {
    v3 = (wchar_t *)v2[2541]; /*0x5eac10*/
    if ( v3 /*0x5eac30*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option = *v2; /*0x5eac32*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eac3c*/
    {
      Option = -2; /*0x5eac3e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eac4b*/
    {
      Option = -2; /*0x5eac4d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eac5a*/
    {
      Option = -2; /*0x5eac5c*/
    }
    else
    {
      Option = -2; /*0x5eac6a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eac6f*/
        Option = SessionClass::GetOption((int)v3); /*0x5eac71*/
    }
    sprintf(Buffer, "%d,", Option); /*0x5eac81*/
    result = 0; /*0x5eac8d*/
    ++v2; /*0x5eac98*/
    strcat(this, Buffer); /*0x5eacac*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2FC] ); /*0x5eacbb*/
  return result; /*0x5eacc1*/
}



// ==== 0x005EACD0  ObjectClass::RefreshLobbyAll_Get_5EACD0  this=ObjectClass  sig=csp ====
int __thiscall sub_5EACD0(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option2; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2FC]; /*0x5eacd7*/
  *this = 0; /*0x5eacdc*/
  do /*0x5ead8b*/
  {
    v3 = (wchar_t *)v2[2533]; /*0x5eace0*/
    if ( v3 /*0x5ead00*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option2 = *v2; /*0x5ead02*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5ead0c*/
    {
      Option2 = -2; /*0x5ead0e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5ead1b*/
    {
      Option2 = -2; /*0x5ead1d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5ead2a*/
    {
      Option2 = -2; /*0x5ead2c*/
    }
    else
    {
      Option2 = -2; /*0x5ead3a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ead3f*/
        Option2 = SessionClass::GetOption2((int)v3); /*0x5ead41*/
    }
    sprintf(Buffer, "%d,", Option2); /*0x5ead51*/
    result = 0; /*0x5ead5d*/
    ++v2; /*0x5ead68*/
    strcat(this, Buffer); /*0x5ead7c*/
  }
  while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ead8b*/
  return result; /*0x5ead91*/
}



// ==== 0x005EADA0  ObjectClass::RefreshLobbyAll_Get_5EADA0  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Get_5EADA0(ObjectClass *this)
{
  ObjectClass *v2; // edi
  int *v3; // esi
  int ResourceID3CSF; // eax
  int *v5; // ecx
  int v6; // ebx
  int Option; // eax
  int result; // eax

  v2 = 0; /*0x5eada6*/
  v3 = (int *)&stru_A8B250.__pad_0[140]; /*0x5eada8*/
  do /*0x5eae30*/
  {
    ResourceID3CSF = GetResourceID3CSF(v2); /*0x5eadaf*/
    v5 = (int *)v3[2541]; /*0x5eadb4*/
    v6 = ResourceID3CSF; /*0x5eadba*/
    if ( v5 && (v5 == (int *)g_Lobby_PlayerTeam || v5 == (int *)g_Lobby_PlayerSide || v5 == (int *)g_Lobby_PlayerColor) ) /*0x5eadd6*/
    {
      Option = *v3; /*0x5eadd8*/
    }
    else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x5eade2*/
    {
      Option = -2; /*0x5eade4*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x5eadf1*/
    {
      Option = -2; /*0x5eadf3*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x5eae00*/
    {
      Option = -2; /*0x5eae02*/
    }
    else
    {
      Option = -2; /*0x5eae10*/
      if ( v5 != (int *)g_Lobby_MaxPlayers ) /*0x5eae15*/
        Option = SessionClass::GetOption(v5); /*0x5eae17*/
    }
    result = SetupLobbyFactionSlots((HWND)this, v6, Option); /*0x5eae21*/
    ++v3; /*0x5eae26*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eae29*/
  }
  while ( (int)v3 < (int)&stru_A8B250.__pad_0[172] ); /*0x5eae30*/
  return result; /*0x5eae36*/
}



// ==== 0x005EAE40  ObjectClass::RefreshLobbyAll_Setup  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Setup(ObjectClass *this)
{
  ObjectClass *v2; // edi
  int *v3; // esi
  int ResourceID4CSF; // eax
  SessionClass *v5; // ecx
  int v6; // ebx
  int Option2; // eax
  int result; // eax

  v2 = 0; /*0x5eae46*/
  v3 = (int *)&stru_A8B250.__pad_0[172]; /*0x5eae48*/
  do /*0x5eaed0*/
  {
    ResourceID4CSF = GetResourceID4CSF(v2); /*0x5eae4f*/
    v5 = (SessionClass *)v3[2533]; /*0x5eae54*/
    v6 = ResourceID4CSF; /*0x5eae5a*/
    if ( v5 /*0x5eae76*/
      && (v5 == (SessionClass *)g_Lobby_PlayerTeam
       || v5 == (SessionClass *)g_Lobby_PlayerSide
       || v5 == (SessionClass *)g_Lobby_PlayerColor) )
    {
      Option2 = *v3; /*0x5eae78*/
    }
    else if ( v5 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eae82*/
    {
      Option2 = -2; /*0x5eae84*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eae91*/
    {
      Option2 = -2; /*0x5eae93*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaea0*/
    {
      Option2 = -2; /*0x5eaea2*/
    }
    else
    {
      Option2 = -2; /*0x5eaeb0*/
      if ( v5 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eaeb5*/
        Option2 = SessionClass::GetOption2(v5); /*0x5eaeb7*/
    }
    result = SetupLobbyPlayerSlots((HWND)this, v6, Option2); /*0x5eaec1*/
    ++v3; /*0x5eaec6*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eaec9*/
  }
  while ( (int)v3 < (int)&byte_A8B31C ); /*0x5eaed0*/
  return result; /*0x5eaed6*/
}



// ==== 0x005EAEE0  ObjectClass::RefreshLobbyAll_Play_5EAEE0  this=ObjectClass  sig=csp ====
const wchar_t *__thiscall RefreshLobbyAll_Play_5EAEE0(ObjectClass *this)
{
  const wchar_t *result; // eax
  int v2; // ebp
  int v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // ebx
  int v6; // esi
  int ResourceIDCSF; // eax
  SessionClass *v8; // ecx
  int v9; // edi
  int PlayerColor; // eax
  ObjectClass *v11; // edi
  int *v12; // esi
  int v13; // eax
  SessionClass *v14; // ecx
  int v15; // ebx
  int v16; // eax

  result = (const wchar_t *)dword_A8DA84; /*0x5eaee1*/
  if ( dword_A8DA84 ) /*0x5eaef0*/
  {
    v3 = 0; /*0x5eaeff*/
    v4 = (const wchar_t **)dword_A8DA90; /*0x5eaf01*/
    v5 = (const wchar_t *)*dword_A8DA78; /*0x5eaf06*/
    while ( 1 ) /*0x5eaf08*/
    {
      result = *v4; /*0x5eaf08*/
      if ( *v4 ) /*0x5eaf08*/
      {
        result = (const wchar_t *)_wcsicmp(v5, *v4); /*0x5eaf10*/
        if ( !result ) /*0x5eaf1a*/
          break; /*0x5eaf1a*/
      }
      ++v4; /*0x5eaf1c*/
      ++v3; /*0x5eaf1f*/
      if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5eaf26*/
      {
        v6 = -1; /*0x5eaf28*/
        goto LABEL_8; /*0x5eaf28*/
      }
    }
    v6 = v3; /*0x5eaf6b*/
LABEL_8:
    v2 = v6; /*0x5eaf2b*/
    if ( v6 != -1 ) /*0x5eaf30*/
    {
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v6); /*0x5eaf38*/
      v8 = (SessionClass *)dword_A8DA90[v6]; /*0x5eaf3d*/
      v9 = ResourceIDCSF; /*0x5eaf44*/
      if ( v8 /*0x5eaf60*/
        && (v8 == (SessionClass *)g_Lobby_PlayerTeam
         || v8 == (SessionClass *)g_Lobby_PlayerSide
         || v8 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        PlayerColor = *(_DWORD *)&stru_A8B250.__pad_0[4 * v6 + 108]; /*0x5eaf62*/
      }
      else if ( v8 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaf75*/
      {
        PlayerColor = -2; /*0x5eaf77*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eaf84*/
      {
        PlayerColor = -2; /*0x5eaf86*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaf93*/
      {
        PlayerColor = -2; /*0x5eaf95*/
      }
      else
      {
        PlayerColor = -2; /*0x5eafa3*/
        if ( v8 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eafa8*/
          PlayerColor = SessionClass::GetPlayerColor(v8); /*0x5eafaa*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v9, PlayerColor); /*0x5eafb6*/
    }
  }
  else
  {
    v2 = -1; /*0x5eaef2*/
  }
  v11 = 0; /*0x5eafbb*/
  v12 = (int *)&stru_A8B250.__pad_0[108]; /*0x5eafbd*/
  do /*0x5eb04b*/
  {
    if ( v11 != (ObjectClass *)v2 ) /*0x5eafc4*/
    {
      v13 = GetResourceIDCSF(v11); /*0x5eafc8*/
      v14 = (SessionClass *)v12[2549]; /*0x5eafcd*/
      v15 = v13; /*0x5eafd3*/
      if ( v14 /*0x5eafef*/
        && (v14 == (SessionClass *)g_Lobby_PlayerTeam
         || v14 == (SessionClass *)g_Lobby_PlayerSide
         || v14 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        v16 = *v12; /*0x5eaff1*/
      }
      else if ( v14 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaffb*/
      {
        v16 = -2; /*0x5eaffd*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eb00a*/
      {
        v16 = -2; /*0x5eb00c*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eb019*/
      {
        v16 = -2; /*0x5eb01b*/
      }
      else
      {
        v16 = -2; /*0x5eb029*/
        if ( v14 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eb02e*/
          v16 = SessionClass::GetPlayerColor(v14); /*0x5eb030*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v15, v16); /*0x5eb03c*/
    }
    ++v12; /*0x5eb041*/
    v11 = (ObjectClass *)((char *)v11 + 1); /*0x5eb044*/
  }
  while ( (int)v12 < (int)&stru_A8B250.__pad_0[140] ); /*0x5eb04b*/
  return result; /*0x5eb051*/
}



// ==== 0x005EB060  Lobby::UpdatePlayerLabels  this=Lobby  sig=csp ====
void __thiscall Lobby::UpdatePlayerLabels(Lobby *this)
{
  int v1; // esi
  int v2; // eax
  int PlayerCountMap; // esi
  int v4; // eax
  LPARAM v5; // eax
  int v6; // ebp
  HWND v7; // ebx
  HWND DlgItem; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  wchar_t *StringCSF; // eax
  char *v12; // eax
  LRESULT v13; // eax
  char *v14; // eax
  int v15; // eax
  ObjectClass *v16; // ebp
  int v17; // ebx
  int v18; // eax
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  wchar_t *v23; // eax
  LRESULT v24; // eax
  wchar_t *v25; // eax
  LRESULT v26; // eax
  wchar_t *v27; // eax
  LRESULT v28; // eax
  wchar_t *v29; // eax
  LRESULT v30; // eax
  LRESULT v31; // eax
  wchar_t *v32; // eax
  char v33; // [esp+1h] [ebp-13h]
  char v34; // [esp+2h] [ebp-12h]
  bool v35; // [esp+3h] [ebp-11h]
  ObjectClass *v36; // [esp+4h] [ebp-10h]
  int v37; // [esp+8h] [ebp-Ch]
  __int64 v38; // [esp+Ch] [ebp-8h] BYREF

  HIDWORD(v38) = this; /*0x5eb063*/
  if ( dword_A8B23C /*0x5eb07a*/
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    || (v33 = 1, Network::IsMultiplayerActive()) )
  {
    v33 = 0; /*0x5eb088*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb09d*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0a8*/
      v1 = 6; /*0x5eb0b8*/
    else
      v1 = 2; /*0x5eb0b1*/
  }
  else
  {
    v1 = 8; /*0x5eb0bf*/
  }
  v37 = v1; /*0x5eb0c9*/
  if ( g_MPCooperativeState ) /*0x5eb0cf*/
    goto LABEL_26; /*0x5eb0cf*/
  if ( v33 ) /*0x5eb0d7*/
    goto LABEL_25; /*0x5eb0d7*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb0df*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0ea*/
      v2 = 6; /*0x5eb0fa*/
    else
      v2 = 2; /*0x5eb0f3*/
  }
  else
  {
    v2 = 8; /*0x5eb101*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x5eb10c*/
  {
    if ( v2 >= 8 ) /*0x5eb118*/
      goto LABEL_24; /*0x5eb118*/
    goto LABEL_23; /*0x5eb118*/
  }
  if ( v2 < 6 ) /*0x5eb111*/
LABEL_23:
    ++v2; /*0x5eb11a*/
LABEL_24:
  if ( v1 < v2 ) /*0x5eb11d*/
LABEL_25:
    v37 = v1 + 1; /*0x5eb11f*/
LABEL_26:
  v36 = 0; /*0x5eb124*/
  do
  {
    v34 = 0; /*0x5eb13d*/
    if ( v36 == g_MPCooperativeState ) /*0x5eb142*/
    {
      if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb151*/
      {
        PlayerCountMap = 8; /*0x5eb153*/
      }
      else
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb165*/
        if ( dword_A8B23C ) /*0x5eb169*/
        {
          v4 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5eb16d*/
          if ( v4 != -1 && v4 < PlayerCountMap ) /*0x5eb17a*/
            PlayerCountMap = v4; /*0x5eb17c*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb185*/
        {
          if ( Network::IsLobbyFeature() ) /*0x5eb187*/
          {
            PlayerCountMap &= ~1u; /*0x5eb190*/
          }
          else if ( Network::IsMultiplayerActive() ) /*0x5eb195*/
          {
            PlayerCountMap = 2; /*0x5eb19e*/
          }
        }
      }
      if ( (int)v36 > PlayerCountMap ) /*0x5eb1a5*/
      {
        v5 = dword_A8DA90[(_DWORD)v36]; /*0x5eb1a7*/
        if ( v5 != g_HouseClass_ObserverFlags /*0x5eb1d2*/
          && (!v5 || v5 != g_Lobby_PlayerTeam && v5 != g_Lobby_PlayerSide && v5 != g_Lobby_PlayerColor) )
        {
          v34 = 1; /*0x5eb1d4*/
        }
      }
      if ( v36 == g_MPCooperativeState && dword_A8B23C ) /*0x5eb1e9*/
        (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C); /*0x5eb1ed*/
    }
    if ( v36 )
    {
      if ( v36 == (ObjectClass *)1 )
      {
        v6 = 1042; /*0x5eb203*/
      }
      else if ( v36 == (ObjectClass *)2 )
      {
        v6 = 1043; /*0x5eb20f*/
      }
      else if ( v36 == (ObjectClass *)3 )
      {
        v6 = 1044; /*0x5eb21b*/
      }
      else if ( v36 == (ObjectClass *)4 )
      {
        v6 = 1045; /*0x5eb227*/
      }
      else if ( v36 == (ObjectClass *)5 )
      {
        v6 = 1046; /*0x5eb233*/
      }
      else if ( v36 == (ObjectClass *)6 )
      {
        v6 = 1047; /*0x5eb23f*/
      }
      else
      {
        v6 = v36 != (ObjectClass *)7 ? -1 : 1048;
      }
    }
    else
    {
      v6 = 1041; /*0x5eb1f7*/
    }
    v7 = (HWND)HIDWORD(v38); /*0x5eb259*/
    DlgItem = GetDlgItem((HWND)HIDWORD(v38), v6); /*0x5eb265*/
    v35 = !ShowWindow(DlgItem, 0); /*0x5eb27d*/
    SendDlgItemMessageA(v7, v6, 0x14Bu, 0, 0); /*0x5eb282*/
    v9 = (wchar_t *)dword_A8DA90[(_DWORD)v36]; /*0x5eb291*/
    v10 = v9; /*0x5eb29a*/
    if ( v9 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eb29c*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5436); /*0x5eb2af*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eb2ba*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5438); /*0x5eb2cd*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5eb2d8*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5440); /*0x5eb2eb*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5eb2f3*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5442); /*0x5eb306*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5eb30e*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5444); /*0x5eb321*/
    }
    else if ( v9 == g_Lobby_PlayerReady ) /*0x5eb329*/
    {
      StringCSF = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 5446); /*0x5eb33c*/
    }
    else
    {
      if ( v9 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eb344*/
        goto LABEL_79; /*0x5eb344*/
      StringCSF = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5448); /*0x5eb357*/
    }
    v10 = StringCSF; /*0x5eb35c*/
LABEL_79:
    if ( v9 /*0x5eb380*/
      && (v9 == (wchar_t *)g_Lobby_PlayerTeam
       || v9 == (wchar_t *)g_Lobby_PlayerSide
       || v9 == (wchar_t *)g_Lobby_PlayerColor)
      && !v33 )
    {
      v10 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5455); /*0x5eb398*/
    }
    WideString::Assign((wchar_t **)&v38, v10); /*0x5eb39f*/
    v12 = CharToWideString(unk_A8B380); /*0x5eb3a9*/
    if ( !wcscmp((const wchar_t *)v12, (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5eb3b4*/
    {
      if ( v9 /*0x5eb3fe*/
        && v9 != (wchar_t *)g_HouseClass_ObserverFlags
        && v9 != (wchar_t *)g_Lobby_PlayerCount
        && v9 != g_Lobby_PlayerReady
        && v9 != (wchar_t *)g_Lobby_MaxPlayers
        && v9 != (wchar_t *)g_Lobby_PlayerTeam
        && v9 != (wchar_t *)g_Lobby_PlayerSide
        && v9 != (wchar_t *)g_Lobby_PlayerColor )
      {
        v13 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb409*/
        SendMessageA(DlgItem, 0x151u, v13, (LPARAM)v9); /*0x5eb413*/
      }
      v14 = CharToWideString(unk_A8B380); /*0x5eb41a*/
      v15 = wcscmp(v10, (const wchar_t *)v14); /*0x5eb421*/
      v16 = v36; /*0x5eb426*/
      if ( v15 ) /*0x5eb42f*/
      {
        if ( (int)v36 < v37 ) /*0x5eb439*/
        {
          if ( !v34 || v36 != g_MPCooperativeState ) /*0x5eb44d*/
            goto LABEL_111; /*0x5eb44d*/
          if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb458*/
          {
            v17 = 8; /*0x5eb45a*/
          }
          else
          {
            v17 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb46c*/
            if ( dword_A8B23C ) /*0x5eb470*/
            {
              v18 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5eb474*/
              if ( v18 != -1 && v18 < v17 ) /*0x5eb481*/
                v17 = v18; /*0x5eb483*/
            }
            if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb48c*/
            {
              if ( Network::IsLobbyFeature() ) /*0x5eb48e*/
              {
                v17 &= ~1u; /*0x5eb497*/
              }
              else if ( Network::IsMultiplayerActive() ) /*0x5eb49c*/
              {
                v17 = 2; /*0x5eb4a5*/
              }
            }
          }
          if ( (int)v36 < v17 ) /*0x5eb4ac*/
          {
LABEL_111:
            v19 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5479); /*0x5eb4bf*/
            v20 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v19); /*0x5eb4cd*/
            SendMessageA(DlgItem, 0x151u, v20, g_HouseClass_ObserverFlags); /*0x5eb4dd*/
          }
        }
        if ( v36 == g_MPCooperativeState ) /*0x5eb4e5*/
        {
          v21 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5489); /*0x5eb4f8*/
          v22 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v21); /*0x5eb506*/
          SendMessageA(DlgItem, 0x151u, v22, g_Lobby_MaxPlayers); /*0x5eb516*/
        }
        v23 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5496); /*0x5eb529*/
        v24 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v23); /*0x5eb537*/
        SendMessageA(DlgItem, 0x151u, v24, g_Lobby_PlayerCount); /*0x5eb547*/
        if ( v33 && !v34 ) /*0x5eb55b*/
        {
          v25 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5504); /*0x5eb572*/
          v26 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v25); /*0x5eb580*/
          SendMessageA(DlgItem, 0x151u, v26, g_Lobby_PlayerTeam); /*0x5eb590*/
          v27 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5510); /*0x5eb5a3*/
          v28 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v27); /*0x5eb5b1*/
          SendMessageA(DlgItem, 0x151u, v28, g_Lobby_PlayerSide); /*0x5eb5c1*/
          v29 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5516); /*0x5eb5d4*/
          v30 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v29); /*0x5eb5e2*/
          SendMessageA(DlgItem, 0x151u, v30, g_Lobby_PlayerColor); /*0x5eb5f2*/
        }
      }
    }
    else
    {
      v31 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb5ff*/
      SendMessageA(DlgItem, 0x151u, v31, (LPARAM)v9); /*0x5eb609*/
      v16 = v36; /*0x5eb60b*/
    }
    v32 = WideString::GetOrEmpty_Alt((wchar_t **)&v38); /*0x5eb613*/
    SendMessageA(DlgItem, 0x4C0u, 0xFFFFFFFF, (LPARAM)v32); /*0x5eb621*/
    if ( !v35 ) /*0x5eb629*/
      ShowWindow(DlgItem, 5); /*0x5eb62e*/
    DeleteAndZero::Alt((DeleteAndZero *)&v38); /*0x5eb638*/
    v36 = (ObjectClass *)((char *)&v16->AbstractClass + 1); /*0x5eb641*/
  }
  while ( (int)&v16->AbstractClass + 1 < 8 );
}



// ==== 0x005EB660  NetworkLobby::SetupPlayerSlotControls  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::SetupPlayerSlotControls(NetworkLobby *this)
{
  int i; // edi
  int v3; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0; /*0x5eb671*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb676*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb681*/
      v8 = 6; /*0x5eb694*/
    else
      v8 = 2; /*0x5eb68a*/
  }
  else
  {
    v8 = 8; /*0x5eb69e*/
  }
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1042; /*0x5eb6be*/
          break;
        case 2:
          v3 = 1043; /*0x5eb6ca*/
          break;
        case 3:
          v3 = 1044; /*0x5eb6d6*/
          break;
        case 4:
          v3 = 1045; /*0x5eb6e2*/
          break;
        case 5:
          v3 = 1046; /*0x5eb6ee*/
          break;
        case 6:
          v3 = 1047; /*0x5eb6fa*/
          break;
        default:
          v3 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v3 = 1041; /*0x5eb6b2*/
    }
    v4 = SendDlgItemMessageA((HWND)this, v3, 0x147u, 0, 0); /*0x5eb721*/
    v5 = SendDlgItemMessageA((HWND)this, v3, 0x150u, v4, 0); /*0x5eb72d*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5eb749*/
    {
      if ( i >= v8 ) /*0x5eb74f*/
        dword_A8DA90[i] = g_Lobby_PlayerCount; /*0x5eb765*/
      else
        dword_A8DA90[i] = g_HouseClass_ObserverFlags; /*0x5eb756*/
      SetupSkirmishPlayerSlots((HWND)this, (void *)i, 0); /*0x5eb772*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 44] = -1; /*0x5eb77a*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 76] = -1; /*0x5eb781*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 108] = -1; /*0x5eb788*/
      v7 = 1; /*0x5eb78f*/
    }
  }
  return v7; /*0x5eb7a2*/
}



// ==== 0x005EB7B0  UpdateMultiplayerLobbySlots  this=-  sig=csp ====
int __fastcall UpdateMultiplayerLobbySlots(HWND hDlg, ObjectClass *a2, int nIDDlgItem)
{
  int result; // eax
  ObjectClass *v5; // esi
  int ResourceIDHardcodedCSF; // ebx
  LPARAM v7; // eax
  int v8; // [esp+8h] [ebp-28h]
  HWND v9; // [esp+8h] [ebp-28h]
  int v10; // [esp+Ch] [ebp-24h]
  HWND ResourceID2CSF; // [esp+10h] [ebp-20h]
  HWND v12; // [esp+10h] [ebp-20h]
  HWND ResourceIDCSF; // [esp+14h] [ebp-1Ch]
  HWND v14; // [esp+14h] [ebp-1Ch]
  int ResourceID3CSF; // [esp+18h] [ebp-18h]
  int ResourceID4CSF; // [esp+1Ch] [ebp-14h]
  HWND hWnd; // [esp+20h] [ebp-10h]
  HWND DlgItem; // [esp+24h] [ebp-Ch]
  HWND v19; // [esp+28h] [ebp-8h]
  HWND v20; // [esp+2Ch] [ebp-4h]
  int nIDDlgItema; // [esp+34h] [ebp+4h]
  bool nIDDlgItemb; // [esp+34h] [ebp+4h]

  if ( (int)a2 < 0 ) /*0x5eb7b9*/
    a2 = 0; /*0x5eb7bb*/
  result = (int)a2 + nIDDlgItem; /*0x5eb7c1*/
  v10 = (int)a2 + nIDDlgItem; /*0x5eb7c6*/
  if ( (int)a2 + nIDDlgItem > 8 ) /*0x5eb7ca*/
  {
    v10 = 8; /*0x5eb7cc*/
    result = 8; /*0x5eb7d4*/
  }
  v5 = a2; /*0x5eb7da*/
  if ( (int)a2 < result ) /*0x5eb7dc*/
  {
    do /*0x5eb9f0*/
    {
      if ( v5 ) /*0x5eb7ec*/
      {
        if ( v5 == (ObjectClass *)1 ) /*0x5eb806*/
        {
          nIDDlgItema = 1747; /*0x5eb808*/
          v8 = 1042; /*0x5eb810*/
        }
        else if ( v5 == (ObjectClass *)2 ) /*0x5eb820*/
        {
          nIDDlgItema = 1748; /*0x5eb822*/
          v8 = 1043; /*0x5eb82a*/
        }
        else if ( v5 == (ObjectClass *)3 ) /*0x5eb837*/
        {
          nIDDlgItema = 1749; /*0x5eb839*/
          v8 = 1044; /*0x5eb841*/
        }
        else if ( v5 == (ObjectClass *)4 ) /*0x5eb84e*/
        {
          nIDDlgItema = 1750; /*0x5eb850*/
          v8 = 1045; /*0x5eb858*/
        }
        else if ( v5 == (ObjectClass *)5 ) /*0x5eb865*/
        {
          nIDDlgItema = 1751; /*0x5eb867*/
          v8 = 1046; /*0x5eb86f*/
        }
        else if ( v5 == (ObjectClass *)6 ) /*0x5eb87c*/
        {
          nIDDlgItema = 1752; /*0x5eb87e*/
          v8 = 1047; /*0x5eb886*/
        }
        else if ( v5 == (ObjectClass *)7 ) /*0x5eb893*/
        {
          nIDDlgItema = 1753; /*0x5eb895*/
          v8 = 1048; /*0x5eb89d*/
        }
        else
        {
          nIDDlgItema = -1; /*0x5eb8aa*/
          v8 = -1; /*0x5eb8ae*/
        }
      }
      else
      {
        nIDDlgItema = 1746; /*0x5eb7ee*/
        v8 = 1041; /*0x5eb7f6*/
      }
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v5); /*0x5eb8bb*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x5eb8c4*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x5eb8cf*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5eb8da*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5eb8e7*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x5eb8f3*/
      DlgItem = GetDlgItem(hDlg, v8); /*0x5eb8fd*/
      v19 = GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x5eb903*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5eb913*/
      v20 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5eb91f*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5eb927*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5eb939*/
      v7 = dword_A8DA90[(_DWORD)v5]; /*0x5eb93d*/
      nIDDlgItemb = v7 == g_Lobby_MaxPlayers /*0x5eb971*/
                 || v7
                 && v7 != g_HouseClass_ObserverFlags
                 && v7 != g_Lobby_PlayerCount
                 && (wchar_t *)v7 != g_Lobby_PlayerReady
                 && *(_DWORD *)(v7 + 107) == -1;
      ShowWindow(hWnd, 5); /*0x5eb983*/
      ShowWindow(DlgItem, 5); /*0x5eb98c*/
      ShowWindow(v19, 5); /*0x5eb995*/
      if ( nIDDlgItemb ) /*0x5eb99d*/
      {
        ShowWindow(v9, 0); /*0x5eb9a6*/
        ShowWindow(v12, 0); /*0x5eb9af*/
        ShowWindow(v14, 0); /*0x5eb9b3*/
      }
      else
      {
        ShowWindow(v9, 5); /*0x5eb9bc*/
        ShowWindow(v12, 5); /*0x5eb9c5*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5eb9d0*/
          ShowWindow(v14, 5); /*0x5eb9e0*/
      }
      result = ShowWindow(v20, 5); /*0x5eb9e9*/
      v5 = (ObjectClass *)((char *)v5 + 1); /*0x5eb9eb*/
    }
    while ( (int)v5 < v10 ); /*0x5eb9f0*/
  }
  return result; /*0x5eb9f8*/
}



// ==== 0x005EBA00  Lobby::SetupPlayerWidgets  this=Lobby  sig=csp ====
int __thiscall Lobby::SetupPlayerWidgets(Lobby *this)
{
  ObjectClass *v1; // esi
  int v3; // ebp
  int v4; // ebx
  int ResourceID4CSF; // eax
  LPARAM v6; // esi
  HWND DlgItem; // ebp
  HWND v8; // ebx
  HWND v9; // edi
  int result; // eax
  bool v11; // [esp+Bh] [ebp-19h]
  HWND ResourceIDCSF; // [esp+Ch] [ebp-18h]
  HWND v13; // [esp+Ch] [ebp-18h]
  int nIDDlgItem; // [esp+10h] [ebp-14h]
  HWND nIDDlgItema; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v17; // [esp+14h] [ebp-10h]
  int ResourceID3CSF; // [esp+18h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-8h]
  HWND hWnd; // [esp+20h] [ebp-4h]

  v1 = g_MPCooperativeState; /*0x5eba04*/
  if ( (int)g_MPCooperativeState >= 0 ) /*0x5eba0f*/
  {
    if ( !g_MPCooperativeState ) /*0x5eba15*/
      v1 = (ObjectClass *)dword_A8BB0C; /*0x5eba17*/
    if ( (int)v1 < 8 ) /*0x5eba20*/
    {
      if ( v1 ) /*0x5eba2a*/
      {
        if ( v1 == (ObjectClass *)1 ) /*0x5eba3b*/
        {
          v3 = 1747; /*0x5eba3d*/
          v4 = 1042; /*0x5eba42*/
        }
        else if ( v1 == (ObjectClass *)2 ) /*0x5eba4c*/
        {
          v3 = 1748; /*0x5eba4e*/
          v4 = 1043; /*0x5eba53*/
        }
        else if ( v1 == (ObjectClass *)3 ) /*0x5eba5d*/
        {
          v3 = 1749; /*0x5eba5f*/
          v4 = 1044; /*0x5eba64*/
        }
        else if ( v1 == (ObjectClass *)4 ) /*0x5eba6e*/
        {
          v3 = 1750; /*0x5eba70*/
          v4 = 1045; /*0x5eba75*/
        }
        else if ( v1 == (ObjectClass *)5 ) /*0x5eba7f*/
        {
          v3 = 1751; /*0x5eba81*/
          v4 = 1046; /*0x5eba86*/
        }
        else if ( v1 == (ObjectClass *)6 ) /*0x5eba90*/
        {
          v3 = 1752; /*0x5eba92*/
          v4 = 1047; /*0x5eba97*/
        }
        else if ( v1 == (ObjectClass *)7 ) /*0x5ebaa1*/
        {
          v3 = 1753; /*0x5ebaa3*/
          v4 = 1048; /*0x5ebaa8*/
        }
        else
        {
          v3 = -1; /*0x5ebaaf*/
          v4 = -1; /*0x5ebab2*/
        }
      }
      else
      {
        v3 = 1746; /*0x5eba2c*/
        v4 = 1041; /*0x5eba31*/
      }
      nIDDlgItem = GetResourceIDHardcodedCSF(v1); /*0x5ebabe*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v1); /*0x5ebac9*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v1); /*0x5ebad4*/
      ResourceID3CSF = GetResourceID3CSF(v1); /*0x5ebadf*/
      ResourceID4CSF = GetResourceID4CSF(v1); /*0x5ebae3*/
      v6 = dword_A8DA90[(_DWORD)v1]; /*0x5ebae8*/
      v19 = ResourceID4CSF; /*0x5ebaef*/
      v11 = v6 == g_Lobby_MaxPlayers /*0x5ebb24*/
         || v6
         && v6 != g_HouseClass_ObserverFlags
         && v6 != g_Lobby_PlayerCount
         && (wchar_t *)v6 != g_Lobby_PlayerReady
         && *(_DWORD *)(v6 + 107) == -1;
      DlgItem = GetDlgItem((HWND)this, v3); /*0x5ebb33*/
      v8 = GetDlgItem((HWND)this, v4); /*0x5ebb39*/
      hWnd = GetDlgItem((HWND)this, nIDDlgItem); /*0x5ebb47*/
      v13 = GetDlgItem((HWND)this, (int)ResourceIDCSF); /*0x5ebb53*/
      v17 = GetDlgItem((HWND)this, (int)ResourceID2CSF); /*0x5ebb5b*/
      nIDDlgItema = GetDlgItem((HWND)this, ResourceID3CSF); /*0x5ebb6b*/
      v9 = GetDlgItem((HWND)this, v19); /*0x5ebb79*/
      ShowWindow(DlgItem, 5); /*0x5ebb7e*/
      ShowWindow(v8, 5); /*0x5ebb83*/
      ShowWindow(hWnd, 5); /*0x5ebb8c*/
      if ( v11 ) /*0x5ebb96*/
      {
        ShowWindow(v13, 0); /*0x5ebbd7*/
        ShowWindow(nIDDlgItema, 0); /*0x5ebbe0*/
        ShowWindow(v9, 0); /*0x5ebbe5*/
      }
      else
      {
        ShowWindow(v13, 5); /*0x5ebb9f*/
        ShowWindow(nIDDlgItema, 5); /*0x5ebba8*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5ebbb3*/
        {
          ShowWindow(v9, 5); /*0x5ebbbf*/
          return ShowWindow(v17, 5); /*0x5ebbcf*/
        }
      }
      return ShowWindow(v17, 5); /*0x5ebbee*/
    }
  }
  return result; /*0x5ebbca*/
}



// ==== 0x005EBC00  DisableCampaignSlots  this=-  sig=csp ====
int __fastcall DisableCampaignSlots(HWND hDlg, int a2)
{
  int i; // ebp
  int result; // eax
  int nIDDlgItem; // [esp+8h] [ebp-1Ch]
  HWND nIDDlgItema; // [esp+8h] [ebp-1Ch]
  int hWnd; // [esp+Ch] [ebp-18h]
  HWND hWnda; // [esp+Ch] [ebp-18h]
  HWND ResourceIDHardcodedCSF; // [esp+10h] [ebp-14h]
  HWND DlgItem; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v12; // [esp+14h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+18h] [ebp-Ch]
  HWND v14; // [esp+18h] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+1Ch] [ebp-8h]
  HWND v16; // [esp+1Ch] [ebp-8h]
  HWND ResourceID4CSF; // [esp+20h] [ebp-4h]
  HWND v18; // [esp+20h] [ebp-4h]

  for ( i = a2; i < 8; ++i ) /*0x5ebc0c*/
  {
    if ( (ObjectClass *)i != g_MPCooperativeState ) /*0x5ebc26*/
    {
      if ( i ) /*0x5ebc2e*/
      {
        switch ( i ) /*0x5ebc48*/
        {
          case 1: /*0x5ebc48*/
            nIDDlgItem = 1747; /*0x5ebc4a*/
            hWnd = 1042; /*0x5ebc52*/
            break;
          case 2: /*0x5ebc48*/
            nIDDlgItem = 1748; /*0x5ebc64*/
            hWnd = 1043; /*0x5ebc6c*/
            break;
          case 3: /*0x5ebc48*/
            nIDDlgItem = 1749; /*0x5ebc7b*/
            hWnd = 1044; /*0x5ebc83*/
            break;
          case 4: /*0x5ebc48*/
            nIDDlgItem = 1750; /*0x5ebc92*/
            hWnd = 1045; /*0x5ebc9a*/
            break;
          case 5: /*0x5ebc48*/
            nIDDlgItem = 1751; /*0x5ebca9*/
            hWnd = 1046; /*0x5ebcb1*/
            break;
          case 6: /*0x5ebc48*/
            nIDDlgItem = 1752; /*0x5ebcc0*/
            hWnd = 1047; /*0x5ebcc8*/
            break;
          case 7: /*0x5ebc48*/
            nIDDlgItem = 1753; /*0x5ebcd7*/
            hWnd = 1048; /*0x5ebcdf*/
            break;
          default:
            nIDDlgItem = -1; /*0x5ebcec*/
            hWnd = -1; /*0x5ebcf0*/
            break;
        }
      }
      else
      {
        nIDDlgItem = 1746; /*0x5ebc30*/
        hWnd = 1041; /*0x5ebc38*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF((ObjectClass *)i); /*0x5ebcfd*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((ObjectClass *)i); /*0x5ebd08*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((ObjectClass *)i); /*0x5ebd13*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((ObjectClass *)i); /*0x5ebd1e*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((ObjectClass *)i); /*0x5ebd27*/
      nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebd37*/
      hWnda = GetDlgItem(hDlg, hWnd); /*0x5ebd43*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x5ebd4b*/
      v12 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebd5b*/
      v14 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebd67*/
      v16 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ebd6f*/
      v18 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x5ebd82*/
      ShowWindow(nIDDlgItema, 0); /*0x5ebd86*/
      ShowWindow(hWnda, 0); /*0x5ebd8f*/
      ShowWindow(DlgItem, 0); /*0x5ebd98*/
      ShowWindow(v12, 0); /*0x5ebda1*/
      ShowWindow(v14, 0); /*0x5ebdaa*/
      ShowWindow(v16, 0); /*0x5ebdb3*/
      result = ShowWindow(v18, 0); /*0x5ebdbc*/
    }
  }
  return result; /*0x5ebdca*/
}



// ==== 0x005EBDD0  UI_Setup_5EBDD0  this=-  sig=csp ====
void __fastcall UI_Setup_5EBDD0(Lobby *hDlg, ObjectClass *a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( dword_A8B23C
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    && !Network::IsMultiplayerActive() )
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 )
      v6 = !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ? 6 : 2;
    else
      v6 = 8; /*0x5ebe1b*/
    if ( (int)a2 > v6 ) /*0x5ebe22*/
      a2 = (ObjectClass *)v6; /*0x5ebe24*/
  }
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 64))(a4) || Network::IsMultiplayerActive() ) /*0x5ebe37*/
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ebe47*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebe52*/
        v7 = 6; /*0x5ebe62*/
      else
        v7 = 2; /*0x5ebe5b*/
    }
    else
    {
      v7 = 8; /*0x5ebe69*/
    }
    v8 = a3; /*0x5ebe6e*/
    if ( a3 > v7 ) /*0x5ebe74*/
      v8 = v7; /*0x5ebe76*/
  }
  else
  {
    v8 = a3; /*0x5ebe7a*/
  }
  if ( v8 - (int)a2 <= 0 ) /*0x5ebe84*/
  {
    if ( v8 - (int)a2 < 0 ) /*0x5ebe9c*/
      DisableCampaignSlots((HWND)hDlg, v8); /*0x5ebea0*/
    Lobby::SetupPlayerWidgets(hDlg); /*0x5ebea7*/
  }
  else
  {
    UpdateMultiplayerLobbySlots((HWND)hDlg, a2, v8 - (_DWORD)a2); /*0x5ebe8b*/
    Lobby::SetupPlayerWidgets(hDlg); /*0x5ebe92*/
  }
}



// ==== 0x005EBEC0  SetupMultiplayerLobbyScreen_Setup  this=-  sig=csp ====
char __fastcall sub_5EBEC0(HWND hDlg, int a2, int nIDDlgItem)
{
  int v3; // ebx
  int v4; // esi
  int v6; // esi
  LRESULT v7; // eax
  wchar_t *v8; // eax
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x5ebec8*/
  v4 = a2 + nIDDlgItem; /*0x5ebed0*/
  v11 = a2 + nIDDlgItem; /*0x5ebedd*/
  if ( dword_A8B238[0] == 4 ) /*0x5ebee1*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebeec*/
      v10 = 6; /*0x5ebeff*/
    else
      v10 = 2; /*0x5ebef5*/
  }
  else
  {
    v10 = 8; /*0x5ebf09*/
  }
  if ( v3 < v4 )
  {
    do
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v6 = 1042; /*0x5ebf30*/
            break;
          case 2:
            v6 = 1043; /*0x5ebf3c*/
            break;
          case 3:
            v6 = 1044; /*0x5ebf48*/
            break;
          case 4:
            v6 = 1045; /*0x5ebf54*/
            break;
          case 5:
            v6 = 1046; /*0x5ebf60*/
            break;
          case 6:
            v6 = 1047; /*0x5ebf6c*/
            break;
          default:
            v6 = v3 != 7 ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ebf24*/
      }
      v7 = SendDlgItemMessageA(hDlg, v6, 0x147u, 0, 0); /*0x5ebf93*/
      v8 = (wchar_t *)SendDlgItemMessageA(hDlg, v6, 0x150u, v7, 0); /*0x5ebf9f*/
      if ( v8 == (wchar_t *)-1 /*0x5ebfcc*/
        || !v8
        || v8 == (wchar_t *)g_HouseClass_ObserverFlags
        || v8 == (wchar_t *)g_Lobby_PlayerCount
        || v8 == (wchar_t *)g_Lobby_MaxPlayers
        || v8 == g_Lobby_PlayerReady )
      {
        if ( v3 != g_MPCooperativeState ) /*0x5ebfd9*/
        {
          if ( v3 >= v10 ) /*0x5ebfe3*/
            PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 0); /*0x5ebfed*/
          else
            PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 0); /*0x5ebfe6*/
        }
      }
      else
      {
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)v8, 0); /*0x5ebfd1*/
      }
      ++v3; /*0x5ebff6*/
    }
    while ( v3 < v11 );
    v3 = a2; /*0x5ebfff*/
  }
  UpdateMultiplayerLobbySlots(hDlg, v3, nIDDlgItem); /*0x5ec00d*/
  RetVtableStubZero_eax_27(); /*0x5ec012*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec020*/
}



// ==== 0x005EC030  MultiplayerLobby::FillSlots  this=MultiplayerLobby  sig=csp ====
char __thiscall MultiplayerLobby::FillSlots(MultiplayerLobby *this)
{
  ObjectClass *v1; // eax
  char v2; // bl
  int v4; // edi
  int v5; // esi
  int v6; // edx
  LPARAM v7; // eax
  LPARAM v8; // edi
  int PlayerCountMap; // esi
  int v10; // eax
  int v11; // eax
  CountryCombo *ResourceID2CSF; // eax

  v1 = g_MPCooperativeState; /*0x5ec030*/
  v2 = 0; /*0x5ec037*/
  if ( (int)g_MPCooperativeState < 1 )
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec04d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec058*/
        v4 = 6; /*0x5ec068*/
      else
        v4 = 2; /*0x5ec061*/
    }
    else
    {
      v4 = 8; /*0x5ec06f*/
    }
    v5 = 1; /*0x5ec074*/
    while ( 1 )
    {
      if ( v5 )
      {
        switch ( v5 )
        {
          case 1:
            v6 = 1042; /*0x5ec089*/
            break;
          case 2:
            v6 = 1043; /*0x5ec095*/
            break;
          case 3:
            v6 = 1044; /*0x5ec0a1*/
            break;
          case 4:
            v6 = 1045; /*0x5ec0ad*/
            break;
          case 5:
            v6 = 1046; /*0x5ec0b9*/
            break;
          case 6:
            v6 = 1047; /*0x5ec0c5*/
            break;
          default:
            v6 = v5 != 7 ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ec07d*/
      }
      v7 = dword_A8DA90[v5]; /*0x5ec0e1*/
      if ( v5 >= v4 ) /*0x5ec0f0*/
      {
        if ( v7 != g_Lobby_MaxPlayers && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec10e*/
          goto LABEL_32; /*0x5ec10e*/
        PlayerSkirmishSlotHandler((HWND)this, v6, g_Lobby_PlayerCount, 1); /*0x5ec11b*/
      }
      else
      {
        if ( v7 != g_Lobby_MaxPlayers && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec0fa*/
          goto LABEL_32; /*0x5ec0fa*/
        PlayerSkirmishSlotHandler((HWND)this, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec104*/
      }
      v2 = 1; /*0x5ec120*/
LABEL_32:
      if ( ++v5 >= 8 ) /*0x5ec126*/
        goto LABEL_74; /*0x5ec126*/
    }
  }
  v8 = dword_A8DA90[(_DWORD)g_MPCooperativeState]; /*0x5ec137*/
  if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ec141*/
  {
    PlayerCountMap = 8; /*0x5ec143*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ec155*/
    if ( dword_A8B23C ) /*0x5ec159*/
    {
      v10 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ec15d*/
      if ( v10 != -1 && v10 < PlayerCountMap ) /*0x5ec16a*/
        PlayerCountMap = v10; /*0x5ec16c*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec175*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec177*/
      {
        PlayerCountMap &= ~1u; /*0x5ec180*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec185*/
      {
        PlayerCountMap = 2; /*0x5ec18e*/
      }
    }
    v1 = g_MPCooperativeState; /*0x5ec193*/
  }
  if ( (int)v1 > PlayerCountMap /*0x5ec1e3*/
    && (v8
     && (v8 != g_HouseClass_ObserverFlags
      && v8 != g_Lobby_PlayerCount
      && v8 != g_Lobby_MaxPlayers
      && (wchar_t *)v8 != g_Lobby_PlayerReady
      && *(_DWORD *)(v8 + 107) != -1
      || v8 == g_Lobby_PlayerTeam
      || v8 == g_Lobby_PlayerSide
      || v8 == g_Lobby_PlayerColor)
     || v8 == g_HouseClass_ObserverFlags) )
  {
    v8 = g_Lobby_PlayerCount; /*0x5ec1e5*/
    v2 = 1; /*0x5ec1e7*/
  }
  Lobby::SetupPlayerWidgets((Lobby *)this); /*0x5ec1eb*/
  if ( g_MPCooperativeState )
  {
    if ( g_MPCooperativeState == (ObjectClass *)1 )
    {
      v11 = 1042; /*0x5ec205*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)2 )
    {
      v11 = 1043; /*0x5ec211*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)3 )
    {
      v11 = 1044; /*0x5ec21d*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)4 )
    {
      v11 = 1045; /*0x5ec229*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)5 )
    {
      v11 = 1046; /*0x5ec235*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)6 )
    {
      v11 = 1047; /*0x5ec241*/
    }
    else
    {
      v11 = g_MPCooperativeState != (ObjectClass *)7 ? -1 : 1048;
    }
  }
  else
  {
    v11 = 1041; /*0x5ec1f9*/
  }
  PlayerSkirmishSlotHandler((HWND)this, v11, v8, 1); /*0x5ec260*/
LABEL_74:
  if ( v2 ) /*0x5ec267*/
  {
    ResourceID2CSF = (CountryCombo *)GetResourceID2CSF(g_MPCooperativeState); /*0x5ec26f*/
    SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5ec278*/
  }
  RetVtableStubZero_eax_27(); /*0x5ec27d*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec286*/
}



// ==== 0x005EC290  sub_5EC290  this=-  sig=ida-proto ====
char __fastcall sub_5EC290(HWND hDlg, int a2)
{
  int v4; // ebp
  int i; // esi
  int v6; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5ec2a0*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec2ab*/
      v4 = 6; /*0x5ec2bb*/
    else
      v4 = 2; /*0x5ec2b4*/
  }
  else
  {
    v4 = 8; /*0x5ec2c2*/
  }
  for ( i = a2; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v6 = 1042; /*0x5ec2e2*/
          break;
        case 2:
          v6 = 1043; /*0x5ec2ee*/
          break;
        case 3:
          v6 = 1044; /*0x5ec2fa*/
          break;
        case 4:
          v6 = 1045; /*0x5ec306*/
          break;
        case 5:
          v6 = 1046; /*0x5ec312*/
          break;
        case 6:
          v6 = 1047; /*0x5ec31e*/
          break;
        default:
          v6 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec2d6*/
    }
    if ( i >= v4 ) /*0x5ec341*/
    {
      if ( (void *)i != g_MPCooperativeState ) /*0x5ec353*/
        PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 1); /*0x5ec360*/
    }
    else if ( (void *)i != g_MPCooperativeState ) /*0x5ec345*/
    {
      PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec34f*/
    }
  }
  DisableCampaignSlots(hDlg, a2); /*0x5ec373*/
  if ( ppv ) /*0x5ec383*/
    DisplayRankingsThunkWOL(); /*0x5ec385*/
  else
    RetVtableStubZero_eax_27(); /*0x5ec38c*/
  return CheckGameSettingsChanged(1, 0);
}



// ==== 0x005EC3A0  SetupMultiplayerLobbyScreen  this=-  sig=csp ====
void __fastcall SetupMultiplayerLobbyScreen(MultiplayerLobby *hDlg, void *a2, int a3)
{
  int PlayerCountMap; // esi
  int v6; // eax
  char v7; // bl
  int v8; // eax
  int v9; // edi
  int ptr_4; // esi
  int v11; // eax
  int ResourceID2CSF; // esi
  HWND DlgItem; // eax
  int ResourceIDCSF; // esi
  int v15; // ebx
  int v16; // edi
  ObjectClass *v17; // esi
  int v18; // edx
  wchar_t *v19; // esi
  wchar_t **v20; // eax
  wchar_t *v21; // eax
  char **v22; // eax
  int v23; // [esp+Ch] [ebp-114h]
  ObjectClass v24; // [esp+10h] [ebp-110h] BYREF

  v24.AbstractClass = a2; /*0x5ec3b7*/
  if ( a3 == -1 ) /*0x5ec3bb*/
  {
    PlayerCountMap = 8; /*0x5ec3bd*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(a3); /*0x5ec3cf*/
    if ( dword_A8B23C ) /*0x5ec3d3*/
    {
      v6 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ec3d7*/
      if ( v6 != -1 && v6 < PlayerCountMap ) /*0x5ec3e4*/
        PlayerCountMap = v6; /*0x5ec3e6*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec3ef*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec3f1*/
      {
        PlayerCountMap &= ~1u; /*0x5ec3fa*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec3ff*/
      {
        PlayerCountMap = 2; /*0x5ec408*/
      }
    }
  }
  v23 = PlayerCountMap; /*0x5ec413*/
  if ( dword_A8B23C /*0x5ec425*/
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    || Network::IsMultiplayerActive() )
  {
    v7 = 0; /*0x5ec437*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec43c*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec447*/
        v8 = 6; /*0x5ec457*/
      else
        v8 = 2; /*0x5ec450*/
    }
    else
    {
      v8 = 8; /*0x5ec45e*/
    }
    if ( PlayerCountMap > v8 ) /*0x5ec465*/
      v23 = v8; /*0x5ec467*/
  }
  else
  {
    v7 = 1; /*0x5ec42e*/
  }
  if ( a2 == (void *)-1 ) /*0x5ec46e*/
  {
    dword_831700 = 8; /*0x5ec470*/
    dword_AC11CC = 0; /*0x5ec47a*/
  }
  v9 = v23 - dword_831700; /*0x5ec493*/
  ptr_4 = 0; /*0x5ec495*/
  v24.? = 0; /*0x5ec499*/
  if ( !g_MPCooperativeState ) /*0x5ec49d*/
  {
    if ( v7 ) /*0x5ec4a1*/
    {
LABEL_40:
      ptr_4 = 1; /*0x5ec4f1*/
      v24.? = (void *)1; /*0x5ec4fd*/
      if ( !dword_AC11CC && v9 + v23 < 7 ) /*0x5ec50d*/
        ++v9; /*0x5ec50f*/
      goto LABEL_43; /*0x5ec50f*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec4af*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec4ba*/
        v11 = 6; /*0x5ec4ca*/
      else
        v11 = 2; /*0x5ec4c3*/
    }
    else
    {
      v11 = 8; /*0x5ec4d1*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec4dc*/
    {
      if ( v11 >= 6 ) /*0x5ec4e1*/
      {
LABEL_39:
        if ( v23 >= v11 ) /*0x5ec4ef*/
          goto LABEL_43; /*0x5ec4ef*/
        goto LABEL_40; /*0x5ec4ef*/
      }
    }
    else if ( v11 >= 8 ) /*0x5ec4e8*/
    {
      goto LABEL_39; /*0x5ec4e8*/
    }
    ++v11; /*0x5ec4ea*/
    goto LABEL_39; /*0x5ec4ea*/
  }
LABEL_43:
  if ( v24.AbstractClass == (void *)-1 && !g_MPCooperativeState ) /*0x5ec51e*/
  {
    ResourceID2CSF = GetResourceID2CSF(0); /*0x5ec527*/
    SetupComboBoxObserver((HWND)hDlg, ResourceID2CSF); /*0x5ec52d*/
    SetupLobbyCountryCombo((HWND)hDlg, ResourceID2CSF, -3); /*0x5ec538*/
    DlgItem = GetDlgItem((HWND)hDlg, 1041); /*0x5ec54c*/
    SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5ec553*/
    ResourceIDCSF = GetResourceIDCSF(0); /*0x5ec560*/
    FillListBox((HWND)hDlg, ResourceIDCSF); /*0x5ec566*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, 8); /*0x5ec571*/
    ptr_4 = (int)v24.?; /*0x5ec576*/
  }
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( ptr_4 + v23 >= 7 ) /*0x5ec6b9*/
        SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, 7, 1); /*0x5ec6c4*/
    }
    else
    {
      v15 = ptr_4 + v23; /*0x5ec5a3*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec5a6*/
      {
        if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec5b1*/
          v16 = 6; /*0x5ec5c1*/
        else
          v16 = 2; /*0x5ec5ba*/
      }
      else
      {
        v16 = 8; /*0x5ec5c8*/
      }
      v17 = (ObjectClass *)(ptr_4 + v23); /*0x5ec5d0*/
      if ( v15 < 8 )
      {
        do
        {
          if ( v17 )
          {
            if ( v17 == (ObjectClass *)1 )
            {
              v18 = 1042; /*0x5ec5e8*/
            }
            else if ( v17 == (ObjectClass *)2 )
            {
              v18 = 1043; /*0x5ec5f4*/
            }
            else if ( v17 == (ObjectClass *)3 )
            {
              v18 = 1044; /*0x5ec600*/
            }
            else if ( v17 == (ObjectClass *)4 )
            {
              v18 = 1045; /*0x5ec60c*/
            }
            else if ( v17 == (ObjectClass *)5 )
            {
              v18 = 1046; /*0x5ec618*/
            }
            else if ( v17 == (ObjectClass *)6 )
            {
              v18 = 1047; /*0x5ec624*/
            }
            else
            {
              v18 = v17 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v18 = 1041; /*0x5ec5dc*/
          }
          if ( (int)v17 >= v16 ) /*0x5ec647*/
          {
            if ( v17 != g_MPCooperativeState ) /*0x5ec659*/
              PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_Lobby_PlayerCount, 1); /*0x5ec666*/
          }
          else if ( v17 != g_MPCooperativeState ) /*0x5ec64b*/
          {
            PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_HouseClass_ObserverFlags, 1); /*0x5ec655*/
          }
          v17 = (ObjectClass *)((char *)v17 + 1); /*0x5ec66b*/
        }
        while ( (int)v17 < 8 );
      }
      DisableCampaignSlots((HWND)hDlg, v15); /*0x5ec679*/
      if ( ppv ) /*0x5ec685*/
        DisplayRankingsThunkWOL(); /*0x5ec687*/
      else
        RetVtableStubZero_eax_27(); /*0x5ec69b*/
      CheckGameSettingsChanged(1, 0); /*0x5ec690*/
      ptr_4 = (int)v24.?; /*0x5ec695*/
    }
  }
  else
  {
    SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, dword_831700 + dword_AC11CC, v9); /*0x5ec58c*/
  }
  MultiplayerLobby::FillSlots(hDlg); /*0x5ec6cb*/
  if ( g_MPCooperativeState == (ObjectClass *)-1 ) /*0x5ec6d9*/
  {
    if ( dword_A8B23C ) /*0x5ec6e7*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) ) /*0x5ec6ef*/
      {
        g_MPCooperativeState = (ObjectClass *)7; /*0x5ec6ff*/
        MultiplayerLobby::FillSlots(hDlg); /*0x5ec709*/
        Debug::Log(); /*0x5ec713*/
        v19 = (wchar_t *)dword_A8DA90[(_DWORD)g_MPCooperativeState]; /*0x5ec724*/
        unknown_libname_74(&v24.?); /*0x5ec72b*/
        if ( !v19 /*0x5ec76a*/
          || v19 == (wchar_t *)g_HouseClass_ObserverFlags
          || v19 == (wchar_t *)g_Lobby_PlayerCount
          || v19 == g_Lobby_PlayerReady
          || v19 == (wchar_t *)g_Lobby_MaxPlayers
          || v19 == (wchar_t *)g_Lobby_PlayerTeam
          || v19 == (wchar_t *)g_Lobby_PlayerSide
          || v19 == (wchar_t *)g_Lobby_PlayerColor )
        {
          GetPlayerTypeString((char **)&v24, v19); /*0x5ec77e*/
          v20 = CharStringToWide((wchar_t **)&v24.?, (const char **)&v24); /*0x5ec78b*/
          WideString::Reassign_Alt(&v24.?, (const wchar_t **)v20); /*0x5ec795*/
          DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec79e*/
          DeleteAndZero(&v24); /*0x5ec7a7*/
        }
        else
        {
          WideString::Assign_Alt(&v24.?, v19); /*0x5ec771*/
        }
        v21 = WideString::GetOrEmpty((wchar_t **)&v24.?); /*0x5ec7b0*/
        WideString::Assign((wchar_t **)&v24, v21); /*0x5ec7ba*/
        v22 = ToWideStringCharAlt((char **)&v24.?, (const wchar_t **)&v24); /*0x5ec7c7*/
        sprintf((char *const)&v24.?, "O%d%s", g_MPCooperativeState, *v22); /*0x5ec7e0*/
        DeleteAndZero((ObjectClass *)&v24.?); /*0x5ec7ec*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24); /*0x5ec7f5*/
        Network::SendOptionsGame((char *)&v24.?); /*0x5ec7fe*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec807*/
        dword_831700 = v23; /*0x5ec816*/
        dword_AC11CC = (int)v24.?; /*0x5ec81c*/
      }
      else
      {
        dword_AC11CC = ptr_4; /*0x5ec867*/
        dword_831700 = v23; /*0x5ec86f*/
      }
    }
    else
    {
      dword_AC11CC = ptr_4; /*0x5ec84b*/
      dword_831700 = v23; /*0x5ec853*/
    }
  }
  else
  {
    dword_AC11CC = ptr_4; /*0x5ec830*/
    dword_831700 = v23; /*0x5ec838*/
  }
}



// ==== 0x005EC880  Map_Handle_5EC880  this=-  sig=csp ====
char __fastcall sub_5EC880(HWND hDlg, int a2, char a3, char a4)
{
  HWND v4; // ebx
  int v5; // edi
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  wchar_t *v9; // esi
  char v10; // bl
  int v12; // [esp+10h] [ebp-8h]

  v4 = hDlg; /*0x5ec88a*/
  v12 = a2; /*0x5ec890*/
  if ( !g_MPCooperativeState ) /*0x5ec898*/
    v12 = a2 + 1; /*0x5ec89d*/
  v5 = 0; /*0x5ec8a7*/
  while ( 1 )
  {
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          v6 = 1042; /*0x5ec8b9*/
          break;
        case 2:
          v6 = 1043; /*0x5ec8c5*/
          break;
        case 3:
          v6 = 1044; /*0x5ec8d1*/
          break;
        case 4:
          v6 = 1045; /*0x5ec8dd*/
          break;
        case 5:
          v6 = 1046; /*0x5ec8e9*/
          break;
        default:
          v6 = v5 == 6 ? 1047 : v5 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec8ad*/
    }
    v7 = SendDlgItemMessageA(v4, v6, 0x147u, 0, 0); /*0x5ec91c*/
    v8 = SendDlgItemMessageA(v4, v6, 0x150u, v7, 0); /*0x5ec928*/
    if ( v8 == -1 ) /*0x5ec92d*/
    {
      v9 = 0; /*0x5ec92f*/
    }
    else
    {
      v9 = (wchar_t *)v8; /*0x5ec935*/
      if ( v8 /*0x5ec960*/
        && (v8 == g_Lobby_PlayerTeam || v8 == g_Lobby_PlayerSide || v8 == g_Lobby_PlayerColor)
        && dword_A8B23C
        && !a3 )
      {
        return 1; /*0x5ec960*/
      }
    }
    if ( v5 >= v12 ) /*0x5ec966*/
      break; /*0x5ec966*/
LABEL_39:
    if ( ++v5 >= 8 ) /*0x5ec9c3*/
      return 0; /*0x5ec9d2*/
  }
  if ( !v9 /*0x5ec98a*/
    || v9 == (wchar_t *)g_HouseClass_ObserverFlags
    || v9 == (wchar_t *)g_Lobby_PlayerCount
    || v9 == (wchar_t *)g_Lobby_MaxPlayers
    || v9 == g_Lobby_PlayerReady )
  {
    v10 = 0; /*0x5ec9d5*/
  }
  else
  {
    v10 = 1; /*0x5ec98e*/
    if ( SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec998*/
      return 1; /*0x5ec998*/
  }
  if ( !dword_A8B23C || a4 || !v10 || SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec9b9*/
  {
    v4 = hDlg; /*0x5ec9bb*/
    goto LABEL_39; /*0x5ec9bb*/
  }
  return 1; /*0x5ec9c9*/
}



// ==== 0x005EC9F0  PlayerSkirmishSlotHandler  this=MultiplayerLobby  sig=csp ====
char __fastcall Skirmish_PlayerSlotHandler(HWND a1, int a2, LPARAM a3, int a4)
{
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  bool v11; // zf
  WPARAM v12; // ebx
  char v13; // cl
  int v14; // esi
  int v15; // eax
  int v16; // esi
  WPARAM v17; // ebx
  wchar_t *v18; // eax
  char result; // al
  LPARAM v20; // ecx
  LPARAM v21; // esi
  char v22; // cl
  bool v23; // al
  int ResourceID2; // eax
  int v25; // eax
  HWND v26; // eax
  int ResourceID; // esi
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v30; // eax
  int v31; // eax
  HWND v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // cl
  LPARAM v38; // edx
  LPARAM *v39; // ecx
  LPARAM v40; // eax
  bool v41; // [esp+11h] [ebp-17h]
  char v42; // [esp+12h] [ebp-16h]
  bool v43; // [esp+13h] [ebp-15h]
  wchar_t *String; // [esp+14h] [ebp-14h]
  LRESULT v46; // [esp+1Ch] [ebp-Ch]
  LRESULT v47; // [esp+1Ch] [ebp-Ch]
  HWND hWnd; // [esp+20h] [ebp-8h]
  HWND hWnda; // [esp+20h] [ebp-8h]
  HWND DlgItem; // [esp+24h] [ebp-4h]
  LPARAM v51; // [esp+2Ch] [ebp+4h]
  int v52; // [esp+2Ch] [ebp+4h]
  bool v53; // [esp+2Ch] [ebp+4h]

  switch ( a2 )
  {
    case 1041:
      v7 = 0; /*0x5eca0b*/
      break;
    case 1042:
      v7 = 1; /*0x5eca17*/
      break;
    case 1043:
      v7 = 2; /*0x5eca26*/
      break;
    case 1044:
      v7 = 3; /*0x5eca35*/
      break;
    case 1045:
      v7 = 4; /*0x5eca44*/
      break;
    case 1046:
      v7 = 5; /*0x5eca53*/
      break;
    case 1047:
      v7 = 6; /*0x5eca62*/
      break;
    default:
      v7 = a2 != 1048 ? -1 : 7;
      break;
  }
  String = (wchar_t *)*(&dword_A8DA90 + v7); /*0x5eca84*/
  if ( a3
    && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor)
    && v7 != g_MPCooperativeState )
  {
    if ( g_MenuStateFlags /*0x5ecadc*/
      || g_MPCooperativeState > 0
      && ((v8 = *(&dword_A8DA90 + g_MPCooperativeState), *(_DWORD *)(v8 + 107) == -1) || v8 == g_Lobby_MaxPlayers) )
    {
      v9 = GetStringCSF(aTxtNoAiWithObs, 0, g_Str_File_netshare_cpp, 6150); /*0x5ecaf3*/
      Dialog::ShowMessage(-1, (size_t)v9); /*0x5ecafb*/
      v10 = String; /*0x5ecb00*/
      v11 = String == 0; /*0x5ecb07*/
      v51 = (LPARAM)String; /*0x5ecb09*/
      String = (wchar_t *)a3; /*0x5ecb0d*/
      if ( !v11 /*0x5ecb29*/
        && (v10 == (wchar_t *)g_Lobby_PlayerTeam
         || v10 == (wchar_t *)g_Lobby_PlayerSide
         || v10 == (wchar_t *)g_Lobby_PlayerColor) )
      {
        v51 = g_Lobby_PlayerCount; /*0x5ecb31*/
      }
      hWnd = GetDlgItem(a1, a2); /*0x5ecb40*/
      ShowWindow(hWnd, 0); /*0x5ecb44*/
      v12 = 0; /*0x5ecb5b*/
      v46 = SendDlgItemMessageA(a1, a2, 0x146u, 0, 0); /*0x5ecb5f*/
      if ( v46 > 0 ) /*0x5ecb63*/
      {
        while ( SendDlgItemMessageA(a1, a2, 0x150u, v12, 0) != v51 ) /*0x5ecb79*/
        {
          if ( (int)++v12 >= v46 ) /*0x5ecb82*/
            goto LABEL_33; /*0x5ecb82*/
        }
        SendDlgItemMessageA(a1, a2, 0x14Eu, v12, 0); /*0x5ecba0*/
      }
LABEL_33:
      ShowWindow(hWnd, 5); /*0x5ecb84*/
    }
  }
  else if ( a3 == g_Lobby_MaxPlayers )
  {
    v13 = 0; /*0x5ecbc4*/
    v14 = 0; /*0x5ecbc6*/
    v52 = 0; /*0x5ecbc8*/
    do
    {
      if ( v14 != v7 )
      {
        v15 = *(&dword_A8DA90 + v14); /*0x5ecbd4*/
        if ( v15 )
        {
          if ( v15 == g_Lobby_PlayerTeam || v15 == g_Lobby_PlayerSide || v15 == g_Lobby_PlayerColor )
          {
            if ( v14 )
            {
              switch ( v14 )
              {
                case 1:
                  v16 = 1042; /*0x5ecc0f*/
                  break;
                case 2:
                  v16 = 1043; /*0x5ecc1b*/
                  break;
                case 3:
                  v16 = 1044; /*0x5ecc27*/
                  break;
                case 4:
                  v16 = 1045; /*0x5ecc33*/
                  break;
                case 5:
                  v16 = 1046; /*0x5ecc3f*/
                  break;
                case 6:
                  v16 = 1047; /*0x5ecc4b*/
                  break;
                default:
                  v16 = v14 != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v16 = 1041; /*0x5ecc03*/
            }
            hWnda = (HWND)g_Lobby_PlayerCount; /*0x5ecc6c*/
            DlgItem = GetDlgItem(a1, v16); /*0x5ecc79*/
            ShowWindow(DlgItem, 0); /*0x5ecc7d*/
            v17 = 0; /*0x5ecc94*/
            v47 = SendDlgItemMessageA(a1, v16, 0x146u, 0, 0); /*0x5ecc98*/
            if ( v47 > 0 ) /*0x5ecc9c*/
            {
              while ( (HWND)SendDlgItemMessageA(a1, v16, 0x150u, v17, 0) != hWnda ) /*0x5eccb2*/
              {
                if ( (int)++v17 >= v47 ) /*0x5eccbb*/
                  goto LABEL_63; /*0x5eccbb*/
              }
              SendDlgItemMessageA(a1, v16, 0x14Eu, v17, 0); /*0x5eccc9*/
            }
LABEL_63:
            ShowWindow(DlgItem, 5); /*0x5ecccf*/
            PlayerSkirmishSlotHandler(g_Lobby_PlayerCount, 0); /*0x5ecce9*/
            v13 = 1; /*0x5eccee*/
            v14 = v52; /*0x5eccf0*/
          }
        }
      }
      v52 = ++v14; /*0x5eccf8*/
    }
    while ( v14 < 8 );
    if ( v13 ) /*0x5ecd04*/
    {
      v18 = GetStringCSF(aTxtObserverBoo, 0, g_Str_File_netshare_cpp, 6179); /*0x5ecd17*/
      Dialog::ShowMessage(-1, (size_t)v18); /*0x5ecd1f*/
    }
  }
  result = a3; /*0x5ecd27*/
  if ( (wchar_t *)a3 != String )
  {
    *(&dword_A8DA90 + v7) = a3; /*0x5ecd3b*/
    if ( a4 == 1 || a4 == 2 ) /*0x5ecd4a*/
    {
      v20 = g_HouseClass_ObserverFlags; /*0x5ecd56*/
      if ( !a3 /*0x5ecd90*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_MaxPlayers
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        if ( String ) /*0x5ecd98*/
        {
          if ( String != (wchar_t *)g_HouseClass_ObserverFlags /*0x5ecda4*/
            && String != (wchar_t *)g_Lobby_PlayerCount
            && String != g_Lobby_PlayerReady )
          {
            v20 = (LPARAM)String; /*0x5ecdab*/
            if ( String != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ecdb1*/
            {
              v20 = g_Lobby_PlayerTeam; /*0x5ecdb3*/
              if ( String != (wchar_t *)g_Lobby_PlayerTeam && String != (wchar_t *)g_Lobby_PlayerSide ) /*0x5ecdc9*/
              {
                v20 = (LPARAM)String; /*0x5ecdd0*/
                if ( String != (wchar_t *)g_Lobby_PlayerColor ) /*0x5ecdd6*/
                {
                  if ( ppv ) /*0x5ecddf*/
                    PlayerSkirmishSlotHandler_Handle_7A28B0(String); /*0x5ecde1*/
                  else
                    PlayerSkirmishSlotHandler_Handle_5DB600(); /*0x5ecde8*/
                }
              }
            }
          }
        }
      }
      if ( ppv ) /*0x5ecdf4*/
        Lobby::BuildPlayerList(v20); /*0x5ecdf6*/
      else
        PlayerSkirmishSlotHandler_Handle(v20); /*0x5ecdfd*/
    }
    v21 = a3; /*0x5ece02*/
    v53 = a3 && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor); /*0x5ece24*/
    v41 = String /*0x5ece4c*/
       && (String == (wchar_t *)g_Lobby_PlayerTeam
        || String == (wchar_t *)g_Lobby_PlayerSide
        || String == (wchar_t *)g_Lobby_PlayerColor);
    if ( a3 != g_Lobby_MaxPlayers )
    {
      if ( !a3 /*0x5ece92*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        v22 = 0; /*0x5ecea5*/
        goto LABEL_116; /*0x5ecea7*/
      }
      if ( *(_DWORD *)(a3 + 107) != -1 )
      {
        v22 = 0; /*0x5ece9e*/
LABEL_116:
        v42 = v22; /*0x5eceae*/
        v23 = String == (wchar_t *)g_Lobby_MaxPlayers /*0x5eceef*/
           || String
           && String != (wchar_t *)g_HouseClass_ObserverFlags
           && String != (wchar_t *)g_Lobby_PlayerCount
           && String != g_Lobby_PlayerReady
           && String != (wchar_t *)g_Lobby_PlayerTeam
           && String != (wchar_t *)g_Lobby_PlayerSide
           && String != (wchar_t *)g_Lobby_PlayerColor
           && *(_DWORD *)((char *)String + 107) == -1;
        v43 = v23; /*0x5ecef7*/
        if ( v22 )
        {
          ResourceID2 = GetResourceID2CSF((void *)v7); /*0x5ecf03*/
          SetupComboBoxObserver(a1, ResourceID2); /*0x5ecf0c*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v25 = 1042; /*0x5ecf21*/
                break;
              case 2:
                v25 = 1043; /*0x5ecf2d*/
                break;
              case 3:
                v25 = 1044; /*0x5ecf39*/
                break;
              case 4:
                v25 = 1045; /*0x5ecf45*/
                break;
              case 5:
                v25 = 1046; /*0x5ecf51*/
                break;
              case 6:
                v25 = 1047; /*0x5ecf5d*/
                break;
              default:
                v25 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v25 = 1041; /*0x5ecf15*/
          }
          v26 = GetDlgItem(a1, v25); /*0x5ecf82*/
          SendMessageA(v26, 0x4F1u, 0, 1); /*0x5ecf89*/
          ResourceID = GetResourceIDCSF((void *)v7); /*0x5ecf96*/
          FillListBox(a1, ResourceID); /*0x5ecf9c*/
          SetupSkirmishSpawnLocations(a1, ResourceID, 8); /*0x5ecfa7*/
          ResourceID3 = GetResourceID3CSF((void *)v7); /*0x5ecfae*/
          SetupComboBoxRandomAlliance(a1, ResourceID3); /*0x5ecfb7*/
          ResourceID4 = GetResourceID4CSF((void *)v7); /*0x5ecfbe*/
          SetupComboBoxRandomAlliance(a1, ResourceID4); /*0x5ecfc7*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ecfd2*/
          MEMORY[0xA8B27C][v7] = -1; /*0x5ecfd7*/
          MEMORY[0xA8B29C][v7] = -1; /*0x5ecfde*/
          MEMORY[0xA8B2BC][v7] = -1; /*0x5ecfe5*/
        }
        else
        {
          if ( !v23 ) /*0x5ecff3*/
          {
LABEL_162:
            if ( v53 ) /*0x5ed0fc*/
            {
              SetupSkirmishPlayerSlots(a1, (HWND)1); /*0x5ed104*/
              v36 = -1; /*0x5ed10f*/
              if ( v21 == g_Lobby_PlayerTeam ) /*0x5ed113*/
              {
                v36 = 2; /*0x5ed115*/
              }
              else if ( v21 == g_Lobby_PlayerSide ) /*0x5ed122*/
              {
                v36 = 1; /*0x5ed124*/
              }
              else if ( v21 == g_Lobby_PlayerColor ) /*0x5ed131*/
              {
                v36 = 0; /*0x5ed133*/
              }
              MEMORY[0xA8B27C][v7] = v36; /*0x5ed135*/
              MEMORY[0xA8B29C][v7] = -2; /*0x5ed141*/
              MEMORY[0xA8B2BC][v7] = -2; /*0x5ed148*/
              MEMORY[0xA8B2DC][v7] = -2; /*0x5ed14f*/
              MEMORY[0xA8B2FC][v7] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ed161*/
            }
            else if ( v41 ) /*0x5ed170*/
            {
              SetupSkirmishPlayerSlots(a1, 0); /*0x5ed178*/
              MEMORY[0xA8B27C][v7] = -1; /*0x5ed17d*/
              MEMORY[0xA8B29C][v7] = -1; /*0x5ed184*/
              MEMORY[0xA8B2BC][v7] = -1; /*0x5ed18b*/
              MEMORY[0xA8B2DC][v7] = -1; /*0x5ed192*/
              MEMORY[0xA8B2FC][v7] = -1; /*0x5ed199*/
            }
            if ( ppv ) /*0x5ed1a7*/
              SessionClass::BuildLaunchString(); /*0x5ed1a9*/
            RefreshLobbyPlayerSlots(v7); /*0x5ed1b0*/
            v37 = v53 || v41; /*0x5ed1c9*/
            result = v42 || v43; /*0x5ed1df*/
            if ( v37 || result ) /*0x5ed1e7*/
            {
              v38 = 0; /*0x5ed1fb*/
              v39 = &dword_A8DA90; /*0x5ed1fd*/
              do /*0x5ed21e*/
              {
                v40 = *v39; /*0x5ed202*/
                if ( *v39 && (v40 == g_Lobby_PlayerTeam || v40 == g_Lobby_PlayerSide || v40 == g_Lobby_PlayerColor) ) /*0x5ed212*/
                  ++v38; /*0x5ed214*/
                ++v39; /*0x5ed215*/
              }
              while ( (int)v39 < (int)&dword_A8DAB0 ); /*0x5ed21e*/
              result = a4; /*0x5ed220*/
              MEMORY[0xA8B274] = v38; /*0x5ed224*/
              if ( a4 == 2 ) /*0x5ed22d*/
              {
                if ( ppv ) /*0x5ed236*/
                  DisplayRankingsThunkWOL(); /*0x5ed238*/
                else
                  RetVtableStubZero_eax_27(); /*0x5ed250*/
                return CheckGameSettingsChanged(1, 0); /*0x5ed241*/
              }
            }
            return result; /*0x5ed24d*/
          }
          v30 = GetResourceID2CSF((void *)v7); /*0x5ecffb*/
          FillComboBoxRandomOnly(a1, v30); /*0x5ed004*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v31 = 1042; /*0x5ed019*/
                break;
              case 2:
                v31 = 1043; /*0x5ed025*/
                break;
              case 3:
                v31 = 1044; /*0x5ed031*/
                break;
              case 4:
                v31 = 1045; /*0x5ed03d*/
                break;
              case 5:
                v31 = 1046; /*0x5ed049*/
                break;
              case 6:
                v31 = 1047; /*0x5ed055*/
                break;
              default:
                v31 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v31 = 1041; /*0x5ed00d*/
          }
          v32 = GetDlgItem(a1, v31); /*0x5ed07a*/
          SendMessageA(v32, 0x4F1u, 0, 0); /*0x5ed081*/
          v33 = GetResourceIDCSF((void *)v7); /*0x5ed08e*/
          FillListBox(a1, v33); /*0x5ed094*/
          SetupSkirmishSpawnLocations(a1, v33, -2); /*0x5ed09f*/
          v34 = GetResourceID3CSF((void *)v7); /*0x5ed0a6*/
          FillComboBoxAllianceSlots(a1, v34); /*0x5ed0af*/
          v35 = GetResourceID4CSF((void *)v7); /*0x5ed0b6*/
          FillLobbyPlayerSlot(a1, v35); /*0x5ed0bf*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ed0ca*/
          MEMORY[0xA8B27C][v7] = -1; /*0x5ed0cf*/
          MEMORY[0xA8B29C][v7] = -1; /*0x5ed0d6*/
          MEMORY[0xA8B2BC][v7] = -1; /*0x5ed0dd*/
          MEMORY[0xA8B2DC][v7] = -1; /*0x5ed0e4*/
          MEMORY[0xA8B2FC][v7] = -1; /*0x5ed0eb*/
        }
        v21 = a3; /*0x5ed0f2*/
        goto LABEL_162; /*0x5ed0f2*/
      }
    }
    v22 = 1; /*0x5eceac*/
    goto LABEL_116; /*0x5eceac*/
  }
  return result; /*0x5ed246*/
}



// ==== 0x005ED270  sub_5ED270  this=-  sig=ida-proto ====
char __fastcall sub_5ED270(HWND hDlg, int nIDDlgItem, int a3)
{
  LPARAM v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  LPARAM v10; // [esp+1Ch] [ebp+4h]

  switch ( a3 )
  {
    case 2:
      v10 = g_HouseClass_ObserverFlags; /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = g_Lobby_PlayerCount; /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = g_Lobby_PlayerTeam; /*0x5ed2a5*/
      break;
    case 5:
      v10 = g_Lobby_PlayerSide; /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = g_Lobby_PlayerColor; /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : g_Lobby_MaxPlayers;
      break;
  }
  v10 = v5; /*0x5ed2de*/
LABEL_13:
  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, v10, 0); /*0x5ed35a*/
}



// ==== 0x005ED370  Session::StartGame  this=Dialog  sig=csp ====
int __thiscall Session::StartGame(Session *this)
{
  Skirmish *v2; // esi
  ObjectClass *v3; // eax
  Skirmish *v4; // eax

  if ( !(unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4])) ) /*0x5ed381*/
    return Session::PrepareGame(this); /*0x5ed3f1*/
  v2 = g_UIControlState; /*0x5ed38b*/
  if ( g_UIControlState ) /*0x5ed393*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5ed397*/
    __3_YAXPAX_Z(v2); /*0x5ed39d*/
  }
  v3 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5ed3a7*/
  if ( v3 ) /*0x5ed3b2*/
    v4 = (Skirmish *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  g_UIControlState = v4; /*0x5ed3c6*/
  Surface::LoadToSurfaceSHP((Surface *)v4, ExistingFileName); /*0x5ed3cb*/
  if ( !*(_DWORD *)g_UIControlState ) /*0x5ed3d6*/
    Session::PrepareGame(this); /*0x5ed3dd*/
  return InvalidateRect((HWND)this, 0, 0); /*0x5ed3ed*/
}



// ==== 0x005ED400  SaveMultiplayerLobbySettings  this=ObjectClass  sig=csp ====
char __fastcall SaveMultiplayerLobbySettings(HWND hDlg, int a2)
{
  int i; // edi
  int v5; // esi
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // ecx
  int v9; // ecx
  int v10; // esi
  int ResourceID2CSF; // eax
  int ResourceIDCSF; // eax
  int ComboBoxSelectedRaw; // eax
  int v14; // ecx
  char result; // al

  *(_DWORD *)a2 = *(_DWORD *)stru_A8B250; /*0x5ed40c*/
  *(_DWORD *)(a2 + 4) = MEMORY[0xA8B254]; /*0x5ed416*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v5 = 1042; /*0x5ed42e*/
          break;
        case 2:
          v5 = 1043; /*0x5ed43a*/
          break;
        case 3:
          v5 = 1044; /*0x5ed446*/
          break;
        case 4:
          v5 = 1045; /*0x5ed452*/
          break;
        case 5:
          v5 = 1046; /*0x5ed45e*/
          break;
        case 6:
          v5 = 1047; /*0x5ed46a*/
          break;
        default:
          v5 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v5 = 1041; /*0x5ed422*/
    }
    v6 = SendDlgItemMessageA(hDlg, v5, 0x147u, 0, 0); /*0x5ed491*/
    v7 = SendDlgItemMessageA(hDlg, v5, 0x150u, v6, 0); /*0x5ed4a1*/
    v8 = v7 != -1 ? v7 : 0;
    if ( v8 == g_HouseClass_ObserverFlags )
    {
      v9 = 2; /*0x5ed4b9*/
    }
    else if ( v8 == g_Lobby_PlayerCount )
    {
      v9 = 3; /*0x5ed4c8*/
    }
    else if ( v8 == g_Lobby_PlayerTeam )
    {
      v9 = 4; /*0x5ed4d7*/
    }
    else if ( v8 == g_Lobby_PlayerSide )
    {
      v9 = 5; /*0x5ed4e6*/
    }
    else if ( v8 == g_Lobby_PlayerColor )
    {
      v9 = 6; /*0x5ed4f5*/
    }
    else
    {
      v9 = g_Lobby_MaxPlayers != v8 ? 2 : 7;
    }
    v10 = a2 + 12 * i; /*0x5ed50f*/
    *(_DWORD *)(v10 + 28) = v9; /*0x5ed513*/
    ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ed518*/
    *(_DWORD *)(v10 + 32) = GetComboBoxSelected(hDlg, ResourceID2CSF, -1); /*0x5ed52a*/
    ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x5ed52d*/
    ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, ResourceIDCSF, -1); /*0x5ed538*/
    v14 = 3 * i + 9; /*0x5ed53d*/
    *(_DWORD *)(a2 + 4 * v14) = ComboBoxSelectedRaw; /*0x5ed545*/
  }
  *(_DWORD *)(a2 + 8) = MEMORY[0xA8B268]; /*0x5ed556*/
  *(_DWORD *)(a2 + 12) = MEMORY[0xA8B25C]; /*0x5ed55e*/
  *(_DWORD *)(a2 + 16) = MEMORY[0xA8B270]; /*0x5ed567*/
  *(_BYTE *)(a2 + 20) = MEMORY[0xA8B262]; /*0x5ed570*/
  *(_BYTE *)(a2 + 21) = MEMORY[0xA8B263]; /*0x5ed578*/
  *(_BYTE *)(a2 + 22) = MEMORY[0xA8B264]; /*0x5ed581*/
  *(_BYTE *)(a2 + 23) = dword_A8B320; /*0x5ed58a*/
  result = MEMORY[0xA8B261]; /*0x5ed58d*/
  *(_BYTE *)(a2 + 24) = MEMORY[0xA8B261]; /*0x5ed592*/
  return result; /*0x5ed555*/
}



// ==== 0x005ED5A0  SetupMultiplayerLobbyPlayers  this=-  sig=csp ====
int __fastcall SetupMultiplayerLobbyPlayers(HWND hDlg, int a2)
{
  char *First; // edi
  MultiplayerGameMode *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  LPARAM v15; // ebp
  WPARAM v16; // ebx
  CountryCombo *ResourceID2CSF; // ebx
  StartCombo *ResourceIDCSF; // edi
  Dialog *ResourceID3CSF; // ebp
  int v20; // eax
  HWND v21; // edi
  HWND v22; // ebp
  int ComboBoxSelectedRaw; // ebx
  int v24; // eax
  wchar_t **v25; // edi
  wchar_t *v26; // ecx
  char *v27; // eax
  int v28; // ebx
  int v29; // eax
  wchar_t **v30; // edi
  wchar_t *v31; // ecx
  char *v32; // eax
  int v33; // eax
  int ComboBoxSelectedRaw2; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  HWND v38; // edi
  HWND v39; // ebp
  ScenarioClass *v41; // [esp+0h] [ebp-30h]
  char v42; // [esp+13h] [ebp-1Dh]
  int i; // [esp+14h] [ebp-1Ch]
  int v44; // [esp+18h] [ebp-18h]
  LRESULT nIDDlgItem; // [esp+1Ch] [ebp-14h]
  Dialog *nIDDlgItema; // [esp+1Ch] [ebp-14h]
  HWND nIDDlgItemb; // [esp+1Ch] [ebp-14h]
  int v48; // [esp+20h] [ebp-10h]
  HWND hWnd; // [esp+28h] [ebp-8h]
  HWND hWnda; // [esp+28h] [ebp-8h]
  HWND hWndb; // [esp+28h] [ebp-8h]
  HWND DlgItem; // [esp+2Ch] [ebp-4h]

  if ( *(int *)a2 < 1 || *(_DWORD *)a2 > MultiplayerGameMode::ListGet() ) /*0x5ed5bf*/
    *(_DWORD *)a2 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed5c9*/
  *(_DWORD *)stru_A8B250.__pad_0 = *(_DWORD *)a2; /*0x5ed5cf*/
  First = (char *)MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5ed5da*/
  if ( !First ) /*0x5ed5de*/
    First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed5e5*/
  if ( (Network::IsMultiplayerActive() || Network::IsLobbyFeature()) /*0x5ed601*/
    && First
    && (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)First + 4))(First) )
  {
    v5 = *(MultiplayerGameMode **)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed60d*/
    *(_DWORD *)a2 = v5; /*0x5ed610*/
    *(_DWORD *)stru_A8B250.__pad_0 = v5; /*0x5ed615*/
    v6 = MultiplayerGameMode::Find(v5); /*0x5ed61a*/
    if ( !v6 ) /*0x5ed621*/
      v6 = MultiplayerGameMode::GetFirst(); /*0x5ed623*/
    First = (char *)v6; /*0x5ed628*/
  }
  *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed62d*/
  *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)First + 10); /*0x5ed633*/
  v7 = *(_DWORD *)(a2 + 4); /*0x5ed639*/
  if ( v7 < 0 || v7 >= dword_A8B8D8 ) /*0x5ed646*/
    *(_DWORD *)(a2 + 4) = 0; /*0x5ed648*/
  if ( LoadScenarioClassByIndex(*(_DWORD *)(a2 + 4)) ) /*0x5ed652*/
    v8 = *(_DWORD *)(a2 + 4); /*0x5ed65b*/
  else
    v8 = 0; /*0x5ed660*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = v8; /*0x5ed668*/
  v42 = 0; /*0x5ed66d*/
  v9 = *(_DWORD *)(dword_A8B8CC + 4 * v8); /*0x5ed672*/
  if ( v9 && (unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v8)) ) /*0x5ed67b*/
  {
    if ( MapSeed::IsInitialized() ) /*0x5ed684*/
      ScenarioClass::CopyStartPositions(v41); /*0x5ed694*/
    else
      v42 = 1; /*0x5ed68d*/
  }
  if ( !(unsigned __int8)MapPreview::Check(First, v9) || v42 ) /*0x5ed6ab*/
  {
    v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6b1*/
    if ( v10 == -1 ) /*0x5ed6b7*/
    {
      First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed6be*/
      *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed6c3*/
      *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)First + 10); /*0x5ed6c9*/
      v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6d3*/
    }
    *(_DWORD *)(a2 + 4) = v10; /*0x5ed6d6*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v10; /*0x5ed6db*/
    LoadScenarioClassByIndex(v10); /*0x5ed6e0*/
  }
  dword_A8B23C = (ObjectClass *)First; /*0x5ed6eb*/
  LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ed6f1*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x5ed6fe*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 9))(dword_A8B23C); /*0x5ed709*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 24))(First); /*0x5ed710*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 124))(First); /*0x5ed717*/
  v11 = 8; /*0x5ed720*/
  v48 = 8; /*0x5ed728*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ed72c*/
  {
    if ( !Network::IsMultiplayerActive() || (v12 = Network::IsLobbyFeature() == 0, v11 = 2, !v12) ) /*0x5ed743*/
      v11 = 6; /*0x5ed745*/
    v48 = v11; /*0x5ed74a*/
  }
  if ( !g_MPCooperativeState && v11 < 8 ) /*0x5ed75b*/
    v48 = v11 + 1; /*0x5ed75e*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1042; /*0x5ed77e*/
          break;
        case 2:
          v13 = 1043; /*0x5ed78a*/
          break;
        case 3:
          v13 = 1044; /*0x5ed796*/
          break;
        case 4:
          v13 = 1045; /*0x5ed7a2*/
          break;
        case 5:
          v13 = 1046; /*0x5ed7ae*/
          break;
        case 6:
          v13 = 1047; /*0x5ed7ba*/
          break;
        default:
          v13 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v13 = 1041; /*0x5ed772*/
    }
    v14 = *(_DWORD *)(a2 + 12 * i + 28); /*0x5ed7de*/
    v44 = v14; /*0x5ed7e9*/
    if ( (Network::IsMultiplayerActive() || !g_MPCooperativeState || g_MenuStateFlags) /*0x5ed815*/
      && (v14 == 4 || v14 == 5 || v14 == 6) )
    {
      v14 = 2; /*0x5ed817*/
      v44 = 2; /*0x5ed81c*/
    }
    if ( i < v48 )
    {
      switch ( v14 )
      {
        case 7:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed83b*/
          v44 = 2; /*0x5ed841*/
          break;
        case 2:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed850*/
          break;
        case 3:
          v15 = g_Lobby_PlayerCount; /*0x5ed85d*/
          break;
        case 4:
          v15 = g_Lobby_PlayerTeam; /*0x5ed86a*/
          break;
        case 5:
          v15 = g_Lobby_PlayerSide; /*0x5ed877*/
          break;
        default:
          v15 = v14 != 6 ? 0 : g_Lobby_PlayerColor;
          break;
      }
    }
    else
    {
      v15 = g_Lobby_PlayerCount; /*0x5ed826*/
      v44 = 3; /*0x5ed82c*/
    }
    hWnd = GetDlgItem(hDlg, v13); /*0x5ed89d*/
    ShowWindow(hWnd, 0); /*0x5ed8a1*/
    v16 = 0; /*0x5ed8b8*/
    nIDDlgItem = SendDlgItemMessageA(hDlg, v13, 0x146u, 0, 0); /*0x5ed8bc*/
    if ( nIDDlgItem > 0 ) /*0x5ed8c0*/
    {
      while ( SendDlgItemMessageA(hDlg, v13, 0x150u, v16, 0) != v15 ) /*0x5ed8d4*/
      {
        if ( (int)++v16 >= nIDDlgItem ) /*0x5ed8dd*/
          goto LABEL_78; /*0x5ed8dd*/
      }
      SendDlgItemMessageA(hDlg, v13, 0x14Eu, v16, 0); /*0x5ed8eb*/
    }
LABEL_78:
    ShowWindow(hWnd, 5); /*0x5ed8f1*/
    PlayerSkirmishSlotHandler(hDlg, v13, v15, 0); /*0x5ed905*/
    ResourceID2CSF = (CountryCombo *)GetResourceID2CSF((ObjectClass *)i); /*0x5ed917*/
    ResourceIDCSF = (StartCombo *)GetResourceIDCSF((ObjectClass *)i); /*0x5ed920*/
    ResourceID3CSF = (Dialog *)GetResourceID3CSF((ObjectClass *)i); /*0x5ed92b*/
    nIDDlgItema = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5ed932*/
    if ( v44 == 2 || v44 == 3 ) /*0x5ed946*/
    {
      v36 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5edc12*/
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, v36); /*0x5edc1a*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5edc25*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edc30*/
      v37 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5edc3d*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v37); /*0x5edc47*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5edc58*/
      v38 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5edc5e*/
      v39 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5edc64*/
      hWndb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5edc7b*/
      EnableWindow(DlgItem, 0); /*0x5edc7f*/
      EnableWindow(v38, 0); /*0x5edc84*/
      EnableWindow(v39, 0); /*0x5edc89*/
      EnableWindow(hWndb, 0); /*0x5edc92*/
    }
    else if ( v44 == 7 ) /*0x5ed94f*/
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, -3); /*0x5ed95b*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5ed966*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5ed971*/
      v20 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5ed97e*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v20); /*0x5ed988*/
      hWnda = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ed999*/
      v21 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ed99f*/
      v22 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ed9a5*/
      nIDDlgItemb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5ed9bc*/
      EnableWindow(hWnda, 0); /*0x5ed9c0*/
      EnableWindow(v21, 0); /*0x5ed9c5*/
      EnableWindow(v22, 0); /*0x5ed9ca*/
      EnableWindow(nIDDlgItemb, 0); /*0x5ed9d3*/
    }
    else
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, *(_DWORD *)(a2 + 12 * i + 32)); /*0x5ed9e4*/
      SelectLobbyCountry(hDlg, ResourceID2CSF); /*0x5ed9ed*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, *(_DWORD *)(a2 + 4 * (3 * i + 9))); /*0x5eda06*/
      ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)ResourceIDCSF, -1); /*0x5eda18*/
      v24 = StartCombo::IDToIndex(ResourceIDCSF); /*0x5eda1a*/
      if ( (ObjectClass *)v24 == dword_A8DA8C ) /*0x5eda25*/
      {
        FillColorComboBoxUI(hDlg, (int)ResourceIDCSF); /*0x5eda2f*/
        if ( ComboBoxSelectedRaw != -2 ) /*0x5eda37*/
        {
          v25 = (wchar_t **)dword_A8DA90; /*0x5eda39*/
          while ( 1 ) /*0x5eda3e*/
          {
            v26 = *v25; /*0x5eda3e*/
            if ( *v25 ) /*0x5eda3e*/
            {
              if ( v26 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5eda83*/
                && v26 != (wchar_t *)g_Lobby_PlayerCount
                && v26 != g_Lobby_PlayerReady
                && v26 != (wchar_t *)g_Lobby_MaxPlayers
                && v26 != (wchar_t *)g_Lobby_PlayerTeam
                && v26 != (wchar_t *)g_Lobby_PlayerSide
                && v26 != (wchar_t *)g_Lobby_PlayerColor
                && SessionClass::GetPlayerColor((SessionClass *)v26) == ComboBoxSelectedRaw )
              {
                break; /*0x5eda83*/
              }
            }
            if ( (int)++v25 >= (int)&dword_A8DAB0 ) /*0x5eda8e*/
            {
              v27 = &stru_A8B250.__pad_0[108]; /*0x5eda90*/
              while ( *(_DWORD *)v27 != ComboBoxSelectedRaw ) /*0x5eda97*/
              {
                v27 += 4; /*0x5eda99*/
                if ( (int)v27 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5edaa1*/
                  goto LABEL_100; /*0x5edaa1*/
              }
              break; /*0x5eda97*/
            }
          }
          ComboBoxSelectedRaw = -2; /*0x5edaa5*/
        }
LABEL_100:
        SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5edaaa*/
        if ( dword_A8DA84 ) /*0x5edabe*/
          SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5edac9*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v24 + 108] = ComboBoxSelectedRaw; /*0x5edad0*/
      }
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edadd*/
      v28 = SetComboBoxSelection(hDlg, (int)ResourceID3CSF, -1); /*0x5edaef*/
      v29 = Dialog::SideIDToIndex(ResourceID3CSF); /*0x5edaf1*/
      if ( (ObjectClass *)v29 == dword_A8DA8C ) /*0x5edafc*/
      {
        FillComboBoxSides(hDlg, (int)ResourceID3CSF); /*0x5edb06*/
        if ( v28 != -2 ) /*0x5edb0e*/
        {
          v30 = (wchar_t **)dword_A8DA90; /*0x5edb10*/
          while ( 1 ) /*0x5edb15*/
          {
            v31 = *v30; /*0x5edb15*/
            if ( *v30 ) /*0x5edb15*/
            {
              if ( v31 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5edb5a*/
                && v31 != (wchar_t *)g_Lobby_PlayerCount
                && v31 != g_Lobby_PlayerReady
                && v31 != (wchar_t *)g_Lobby_MaxPlayers
                && v31 != (wchar_t *)g_Lobby_PlayerTeam
                && v31 != (wchar_t *)g_Lobby_PlayerSide
                && v31 != (wchar_t *)g_Lobby_PlayerColor
                && SessionClass::GetOption((int *)v31) == v28 )
              {
                break; /*0x5edb5a*/
              }
            }
            if ( (int)++v30 >= (int)&dword_A8DAB0 ) /*0x5edb65*/
            {
              v32 = &stru_A8B250.__pad_0[140]; /*0x5edb67*/
              while ( *(_DWORD *)v32 != v28 ) /*0x5edb6e*/
              {
                v32 += 4; /*0x5edb70*/
                if ( (int)v32 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5edb78*/
                  goto LABEL_121; /*0x5edb78*/
              }
              break; /*0x5edb6e*/
            }
          }
          v28 = -2; /*0x5edb7c*/
        }
LABEL_121:
        if ( dword_A8DA84 ) /*0x5edb88*/
          SessionClass::SetOption((int *)*dword_A8DA78, v28); /*0x5edb92*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v29 + 140] = v28; /*0x5edb99*/
      }
      v33 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 12))(dword_A8B23C); /*0x5edba8*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v33); /*0x5edbb4*/
      ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItema, -1); /*0x5edbc6*/
      v35 = Dialog::OptionIDToIndex(nIDDlgItema); /*0x5edbc8*/
      if ( (ObjectClass *)v35 == dword_A8DA8C ) /*0x5edbd3*/
      {
        SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, ComboBoxSelectedRaw2); /*0x5edbda*/
        if ( dword_A8DA84 ) /*0x5edbe6*/
          SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5edbf4*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v35 + 172] = ComboBoxSelectedRaw2; /*0x5edbfe*/
      }
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(_DWORD *)(a2 + 8); /*0x5edcb1*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(a2 + 12); /*0x5edcba*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(_DWORD *)(a2 + 16); /*0x5edcc3*/
  stru_A8B250.__pad_0[18] = *(_BYTE *)(a2 + 20); /*0x5edccc*/
  stru_A8B250.__pad_0[19] = *(_BYTE *)(a2 + 21); /*0x5edcd5*/
  stru_A8B250.__pad_0[20] = *(_BYTE *)(a2 + 22); /*0x5edcde*/
  dword_A8B320 = *(_BYTE *)(a2 + 23); /*0x5edce7*/
  stru_A8B250.__pad_0[17] = *(_BYTE *)(a2 + 24); /*0x5edcf0*/
  return a2; /*0x5edcaa*/
}



// ==== 0x005EDD00  ReadChatMessage  this=-  sig=csp ====
wchar_t **__fastcall ReadChatMessage(wchar_t **a1, HWND a2)
{
  size_t v4; // esi
  size_t v5; // esi
  wchar_t *v6; // eax
  WString v8; // [esp+Ch] [ebp-8h] BYREF

  unknown_libname_74(&v8); /*0x5edd0e*/
  GetEditControlText(a2, (SafeDelete *)&v8); /*0x5edd19*/
  v4 = 120; /*0x5edd22*/
  if ( !(unsigned __int8)WideString::IsASCII((WideString *)&v8) ) /*0x5edd27*/
  {
    v5 = 0; /*0x5edd34*/
    if ( WideString::Length((WideString *)&v8) ) /*0x5edd36*/
    {
      do /*0x5edd5b*/
      {
        if ( (unsigned __int16)WideString::GetChar((WideString *)&v8, v5) > 0x100u ) /*0x5edd4d*/
          break; /*0x5edd4d*/
        ++v5; /*0x5edd53*/
      }
      while ( v5 < (unsigned int)WideString::Length((WideString *)&v8) ); /*0x5edd5b*/
    }
    v4 = v5 - 1; /*0x5edd5d*/
    if ( v4 <= 0x28 ) /*0x5edd61*/
      v4 = 40; /*0x5edd63*/
  }
  if ( (unsigned int)WideString::Length((WideString *)&v8) > v4 ) /*0x5edd73*/
  {
    String::TruncateTo((String *)&v8, v4); /*0x5edd7a*/
    v6 = WideString::GetOrEmpty_Alt((WideString *)&v8); /*0x5edd83*/
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6); /*0x5edd91*/
  }
  WideString::Assign((WideString *)&v8.WString_field_0x04, asc_831D9C); /*0x5edda0*/
  WString::TrimRight(&v8, (const wchar_t **)&v8.WString_field_0x04); /*0x5eddae*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8.WString_field_0x04); /*0x5eddb7*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v8); /*0x5eddc3*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x5eddcc*/
  return a1; /*0x5eddd3*/
}



// ==== 0x005EDDE0  EnablePlayerSlotControls  this=ObjectClass  sig=csp ====
int __fastcall EnablePlayerSlotControls(HWND hDlg, unsigned __int8 a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  const wchar_t **v6; // esi
  const wchar_t *v7; // ebx
  int ResourceID2CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // eax
  HWND v11; // eax
  int ResourceID3CSF; // eax
  HWND v13; // eax
  int ResourceID4CSF; // eax

  if ( hDlg ) /*0x5edded*/
  {
    result = dword_A8DA84; /*0x5eddf3*/
    if ( dword_A8DA84 ) /*0x5eddfa*/
    {
      v5 = 0; /*0x5ede06*/
      v6 = (const wchar_t **)&dword_A8DA90; /*0x5ede08*/
      v7 = *(const wchar_t **)dword_A8DA78; /*0x5ede0d*/
      while ( 1 ) /*0x5ede0f*/
      {
        result = (int)*v6; /*0x5ede0f*/
        if ( *v6 ) /*0x5ede0f*/
        {
          result = _wcsicmp(v7, *v6); /*0x5ede17*/
          if ( !result ) /*0x5ede21*/
            break; /*0x5ede21*/
        }
        ++v6; /*0x5ede23*/
        ++v5; /*0x5ede26*/
        if ( (int)v6 >= (int)&dword_A8DAB0 ) /*0x5ede2d*/
        {
          v5 = -1; /*0x5ede2f*/
          break; /*0x5ede2f*/
        }
      }
      v4 = v5; /*0x5ede32*/
    }
    else
    {
      v4 = -1; /*0x5eddfc*/
    }
    if ( (void *)v4 != g_MPCooperativeState ) /*0x5ede3a*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)v4); /*0x5ede42*/
      DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5ede4f*/
      if ( DlgItem ) /*0x5ede59*/
        EnableWindow(DlgItem, a2); /*0x5ede67*/
      ResourceIDCSF = GetResourceIDCSF((void *)v4); /*0x5ede6b*/
      v11 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5ede72*/
      if ( v11 ) /*0x5ede76*/
        EnableWindow(v11, a2); /*0x5ede84*/
      ResourceID3CSF = GetResourceID3CSF((void *)v4); /*0x5ede88*/
      v13 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ede8f*/
      if ( v13 ) /*0x5ede93*/
        EnableWindow(v13, a2); /*0x5edea1*/
      ResourceID4CSF = GetResourceID4CSF((void *)v4); /*0x5edea5*/
      result = (int)GetDlgItem(hDlg, ResourceID4CSF); /*0x5edeac*/
      if ( result ) /*0x5edeb0*/
      {
        if ( a2 == 1 && dword_A8B23C && !*(_BYTE *)(dword_A8B23C + 60) ) /*0x5edec5*/
          return EnableWindow((HWND)result, 0); /*0x5edece*/
        else
          return EnableWindow((HWND)result, a2); /*0x5edede*/
      }
    }
  }
  return result; /*0x5eded0*/
}



// ==== 0x005EDEF0  GetPlayerTypeString  this=-  sig=csp ====
String *__fastcall GetPlayerTypeString(String *a1, wchar_t *a2)
{
  if ( a2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5edefa*/
  {
    String::Assign(a1, off_831704); /*0x5edf02*/
    return a1; /*0x5edf07*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5edf11*/
  {
    String::Assign(a1, off_831708); /*0x5edf1c*/
    return a1; /*0x5edf21*/
  }
  else if ( a2 == g_Lobby_PlayerReady ) /*0x5edf2b*/
  {
    String::Assign(a1, off_83170C); /*0x5edf36*/
    return a1; /*0x5edf3b*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5edf45*/
  {
    String::Assign(a1, off_831710); /*0x5edf4f*/
    return a1; /*0x5edf54*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5edf5e*/
  {
    String::Assign(a1, off_831714); /*0x5edf69*/
    return a1; /*0x5edf6e*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5edf78*/
  {
    String::Assign(a1, off_831718); /*0x5edf83*/
    return a1; /*0x5edf88*/
  }
  else
  {
    if ( a2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5edf92*/
      String::Assign(a1, off_83171C); /*0x5edf9c*/
    else
      String::Assign(a1, off_83170C); /*0x5edfae*/
    return a1; /*0x5edfa1*/
  }
}



// ==== 0x005EDFC0  NetworkLobby::DeleteAndZero  this=NetworkLobby  sig=csp ====
wchar_t *__thiscall NetworkLobby::DeleteAndZero(NetworkLobby *this)
{
  wchar_t *v2; // esi
  wchar_t *v4; // esi
  wchar_t *v5; // esi
  wchar_t *v6; // esi
  wchar_t *v7; // esi
  wchar_t *v8; // esi
  wchar_t *v9; // esi
  char *v10; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)WideString::IsASCII((const wchar_t **)this) ) /*0x5edfc4*/
  {
    ToWideStringCharAlt(&v10, (const wchar_t **)this); /*0x5edfd7*/
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831704) ) /*0x5edfe6*/
    {
      v2 = (wchar_t *)g_HouseClass_ObserverFlags; /*0x5edfef*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5edff9*/
      return v2; /*0x5ee002*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831708) ) /*0x5ee00e*/
    {
      v4 = (wchar_t *)g_Lobby_PlayerCount; /*0x5ee017*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee021*/
      return v4; /*0x5ee02a*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_83170C) ) /*0x5ee036*/
    {
      v5 = g_Lobby_PlayerReady; /*0x5ee03f*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee049*/
      return v5; /*0x5ee052*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831710) ) /*0x5ee05d*/
    {
      v6 = (wchar_t *)g_Lobby_PlayerTeam; /*0x5ee066*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee070*/
      return v6; /*0x5ee079*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831714) ) /*0x5ee085*/
    {
      v7 = (wchar_t *)g_Lobby_PlayerSide; /*0x5ee08e*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee098*/
      return v7; /*0x5ee0a1*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831718) ) /*0x5ee0ad*/
    {
      v8 = (wchar_t *)g_Lobby_PlayerColor; /*0x5ee0b6*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0c0*/
      return v8; /*0x5ee0c9*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_83171C) ) /*0x5ee0d4*/
    {
      v9 = (wchar_t *)g_Lobby_MaxPlayers; /*0x5ee0dd*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0e7*/
      return v9; /*0x5ee0f0*/
    }
    DeleteAndZero((ObjectClass *)&v10); /*0x5ee0f5*/
  }
  return 0; /*0x5ee000*/
}



// ==== 0x005EE100  ObjectClass::Network_Send  this=ObjectClass  sig=csp ====
BOOL __thiscall Network_Send(ObjectClass *this)
{
  return (unsigned __int8)String::Equals_Alt((String *)this, off_831704) /*0x5ee17e*/
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831708)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_83170C)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831710)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831714)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831718)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_83171C);
}



// ==== 0x005EE1B0  Config::SaveObserverMode  this=Config  sig=ida-proto ====
void Config_SaveObserverMode()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)aRa2mdIni); /*0x5ee1bc*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aObservermode, g_MenuStateFlags, 0); /*0x5ee1d8*/
  INIClass::WriteDigest(&dword_8870C0, (int)v0, 0); /*0x5ee1e9*/
  RawFileClass::Dtor(v0); /*0x5ee1f2*/
}



// ==== 0x005EE200  ObjectClass::UpdateObserveButtonWOL  this=ObjectClass  sig=csp ====
void __thiscall UpdateObserveButtonWOL(ObjectClass *this)
{
  HWND DlgItem; // eax
  int v3; // eax
  HWND v4; // esi
  HWND v5; // eax
  HWND v6; // esi
  wchar_t *StringCSF; // eax
  HWND v8; // esi
  wchar_t *v9; // eax

  if ( this ) /*0x5ee207*/
  {
    DlgItem = GetDlgItem((HWND)this, 1888); /*0x5ee21a*/
    if ( DlgItem ) /*0x5ee21e*/
      SendMessageA(DlgItem, 0xF1u, g_MenuStateFlags != 0, 0); /*0x5ee236*/
    if ( g_MenuStateFlags ) /*0x5ee245*/
      v3 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x5ee24c*/
    else
      v3 = HashTable::Find(&g_DialogHashTable, aWolnobPcx, 0); /*0x5ee258*/
    v4 = (HWND)v3; /*0x5ee25d*/
    v5 = GetDlgItem((HWND)this, 1887); /*0x5ee265*/
    CacheDialogInvalidate(v5, v4); /*0x5ee26b*/
    v6 = GetDlgItem((HWND)this, 1741); /*0x5ee27e*/
    if ( v6 ) /*0x5ee282*/
    {
      if ( g_MenuStateFlags ) /*0x5ee28b*/
        StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6751); /*0x5ee29e*/
      else
        StringCSF = GetStringCSF(aGuiJoin, 0, g_Str_File_netshare_cpp, 6753); /*0x5ee2b1*/
      SendMessageA(v6, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5ee2bf*/
      InvalidateRect(v6, 0, 0); /*0x5ee2ca*/
    }
    v8 = GetDlgItem((HWND)this, 1581); /*0x5ee2d4*/
    if ( v8 ) /*0x5ee2d9*/
    {
      if ( g_MenuStateFlags ) /*0x5ee2e2*/
      {
        v9 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6762); /*0x5ee2f5*/
      }
      else if ( (ObjectClass *)Dialog::FindByHandle((Dialog *)0x113) == this ) /*0x5ee303*/
      {
        v9 = GetStringCSF((wchar_t *)aGuiJoingame, 0, g_Str_File_netshare_cpp, 6766); /*0x5ee316*/
      }
      else
      {
        v9 = GetStringCSF(aGuiJoin, 0, g_Str_File_netshare_cpp, 6768); /*0x5ee329*/
      }
      SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x5ee337*/
      InvalidateRect(v8, 0, 0); /*0x5ee342*/
    }
  }
}



// ==== 0x005EE350  Dialog::RefreshDialogsGame  this=Dialog  sig=csp ====
int __thiscall Dialog::RefreshDialogsGame(Dialog *this)
{
  ObjectClass *v1; // eax
  ObjectClass *v2; // eax
  int result; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL((ObjectClass *)this); /*0x5ee354*/
  v1 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x113); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  result = Dialog::FindByHandle((Dialog *)0xBB); /*0x5ee388*/
  if ( result ) /*0x5ee38f*/
    UpdateObserveButtonWOL((ObjectClass *)result); /*0x5ee393*/
  return result; /*0x5ee398*/
}



// ==== 0x005EE3A0  NetworkLobby::FillOptionCombo  this=NetworkLobby  sig=ida-proto ====
char NetworkLobby_FillOptionCombo()
{
  HWND ResourceID4; // eax
  void *v1; // ecx
  int *v2; // ebx
  int v3; // edi
  HWND v4; // esi
  char *v5; // eax
  char *v6; // eax
  char v8; // [esp+3h] [ebp-9h]
  HWND hDlg; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v8 = 1; /*0x5ee3a8*/
  hDlg = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee3b4*/
  if ( hDlg /*0x5ee3ee*/
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (ResourceID4 = (HWND)Dialog::FindByHandle((void *)0xBD), (hDlg = ResourceID4) != 0) )
  {
    if ( dword_A8B23C ) /*0x5ee3fb*/
      v8 = *(_BYTE *)(dword_A8B23C + 60); /*0x5ee400*/
    v1 = 0; /*0x5ee40c*/
    v10 = 0; /*0x5ee410*/
    v2 = MEMORY[0xA8B2FC]; /*0x5ee414*/
    do /*0x5ee419*/
    {
      v3 = v2[2533]; /*0x5ee419*/
      ResourceID4 = (HWND)GetResourceID4CSF(v1); /*0x5ee41f*/
      if ( (int)ResourceID4 < 0 ) /*0x5ee426*/
        goto LABEL_19; /*0x5ee426*/
      ResourceID4 = GetDlgItem(hDlg, (int)ResourceID4); /*0x5ee42e*/
      v4 = ResourceID4; /*0x5ee434*/
      if ( !ResourceID4 ) /*0x5ee438*/
        goto LABEL_19; /*0x5ee438*/
      if ( v3 /*0x5ee466*/
        && (v3 == g_Lobby_PlayerTeam || v3 == g_Lobby_PlayerSide || v3 == g_Lobby_PlayerColor)
        && (v5 = CharToWideString(unk_A8B380), !wcscmp((const wchar_t *)v5, word_A8D610)) )
      {
        if ( !v8 ) /*0x5ee478*/
        {
          *v2 = -2; /*0x5ee47e*/
LABEL_18:
          LOBYTE(ResourceID4) = EnableWindow(v4, 0); /*0x5ee484*/
          goto LABEL_19; /*0x5ee487*/
        }
        LOBYTE(ResourceID4) = EnableWindow(v4, 1); /*0x5ee47c*/
      }
      else
      {
        if ( v3 == g_HouseClass_ObserverFlags || v3 == g_Lobby_PlayerCount ) /*0x5ee4b7*/
          goto LABEL_18; /*0x5ee4b7*/
        if ( v10 == dword_A8DA8C ) /*0x5ee4c4*/
        {
          if ( !v8 ) /*0x5ee4cc*/
          {
            EnableWindow(v4, 0); /*0x5ee505*/
LABEL_27:
            v6 = CharToWideString(unk_A8B380); /*0x5ee4db*/
            ResourceID4 = (HWND)wcscmp((const wchar_t *)v6, word_A8D610); /*0x5ee4eb*/
            if ( !ResourceID4 ) /*0x5ee4f5*/
              LOBYTE(ResourceID4) = SessionClass::SetOption2(v3, -2); /*0x5ee4fb*/
            goto LABEL_19; /*0x5ee500*/
          }
          EnableWindow(v4, 1); /*0x5ee4d1*/
        }
        LOBYTE(ResourceID4) = v8; /*0x5ee4d3*/
        if ( !v8 ) /*0x5ee4d9*/
          goto LABEL_27; /*0x5ee4d9*/
      }
LABEL_19:
      ++v2; /*0x5ee489*/
      v1 = (void *)++v10; /*0x5ee490*/
    }
    while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ee419*/
  }
  return (char)ResourceID4; /*0x5ee4a5*/
}



// ==== 0x005EE510  RefreshLobbyPlayerSlots  this=ObjectClass  sig=ida-proto ====
int __fastcall Lobby_RefreshPlayerSlots(unsigned int a1)
{
  HWND v2; // ebx
  int result; // eax
  _DWORD *i; // edi
  int v5; // ebp
  int ResourceID4; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee521*/
  if ( v2 /*0x5ee555*/
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (result = Dialog::FindByHandle((void *)0xBD), (v2 = (HWND)result) != 0) )
  {
    result = dword_A8B23C; /*0x5ee55b*/
    if ( dword_A8B23C ) /*0x5ee562*/
    {
      result = 0; /*0x5ee568*/
      v13 = 8; /*0x5ee56d*/
      if ( a1 < 8 ) /*0x5ee575*/
      {
        result = a1; /*0x5ee57b*/
        v13 = a1 + 1; /*0x5ee57e*/
      }
      v12 = (char *)result; /*0x5ee586*/
      if ( result < v13 ) /*0x5ee58c*/
      {
        for ( i = (_DWORD *)(4 * result + 11055868); ; ++i ) /*0x5ee594*/
        {
          v5 = i[2533]; /*0x5ee59f*/
          ResourceID4 = GetResourceID4CSF(v12); /*0x5ee5a5*/
          v7 = ResourceID4; /*0x5ee5aa*/
          if ( ResourceID4 < 0 || !GetDlgItem(v2, ResourceID4) ) /*0x5ee5b6*/
            goto LABEL_24; /*0x5ee5be*/
          if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5ee5de*/
            break; /*0x5ee5de*/
          if ( v5 == g_HouseClass_ObserverFlags || v5 == g_Lobby_MaxPlayers ) /*0x5ee608*/
          {
            *i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee667*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee671*/
            goto LABEL_23; /*0x5ee671*/
          }
          v9 = *(_DWORD *)dword_A8B23C; /*0x5ee617*/
          if ( v5 == g_Lobby_PlayerCount ) /*0x5ee619*/
          {
            *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee61e*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee628*/
            goto LABEL_23; /*0x5ee62b*/
          }
          *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee630*/
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee63a*/
          SetupLobbyPlayerSlots(v2, v7, v10); /*0x5ee642*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee64f*/
          SessionClass::SetOption2(v5, v11); /*0x5ee655*/
LABEL_24:
          result = (int)(v12 + 1); /*0x5ee67e*/
          if ( (int)++v12 >= v13 ) /*0x5ee690*/
            return result; /*0x5ee690*/
        }
        *i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5eb*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5f5*/
LABEL_23:
        SetupLobbyPlayerSlots(v2, v7, v8); /*0x5ee674*/
        goto LABEL_24; /*0x5ee679*/
      }
    }
  }
  return result; /*0x5ee698*/
}



// ==== 0x005EE6A0  NetworkLobby::UpdateLabels  this=NetworkLobby  sig=csp ====
void __thiscall NetworkLobby::UpdateLabels(NetworkLobby *this)
{
  ObjectClass *v2; // ebp
  int **v3; // edi
  int ResourceID3CSF; // esi
  int v5; // eax

  if ( this ) /*0x5ee6a5*/
  {
    v2 = 0; /*0x5ee6aa*/
    v3 = (int **)dword_A8DA90; /*0x5ee6ac*/
    do /*0x5ee6e4*/
    {
      ResourceID3CSF = GetResourceID3CSF(v2); /*0x5ee6b8*/
      FillComboBoxSides((HWND)this, ResourceID3CSF); /*0x5ee6be*/
      v5 = SetComboBoxSelection((HWND)this, ResourceID3CSF, -1); /*0x5ee6c9*/
      if ( *v3 ) /*0x5ee6ce*/
        SessionClass::SetOption(*v3, v5); /*0x5ee6d5*/
      ++v3; /*0x5ee6da*/
      v2 = (ObjectClass *)((char *)v2 + 1); /*0x5ee6dd*/
    }
    while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x5ee6e4*/
  }
}



// ==== 0x005EE6F0  AssignRandomMapStartPositions  this=-  sig=csp ====
_DWORD *__fastcall AssignRandomMapStartPositions(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  double v25; // st7
  double v26; // st7
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+20h] [ebp-10h]
  int v33; // [esp+20h] [ebp-10h]
  _DWORD *v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h]
  int v38; // [esp+2Ch] [ebp-4h]

  v6 = *(_DWORD *)(a3 + 16); /*0x5ee705*/
  v7 = 0; /*0x5ee708*/
  v8 = 0; /*0x5ee70a*/
  v34 = a1; /*0x5ee70c*/
  if ( v6 <= 0 ) /*0x5ee716*/
  {
    v9 = a4; /*0x5ee731*/
    goto LABEL_8; /*0x5ee731*/
  }
  do /*0x5ee725*/
  {
    v9 = a4; /*0x5ee718*/
    if ( *(_BYTE *)(v8 + a4) ) /*0x5ee71b*/
      ++v7; /*0x5ee721*/
    ++v8; /*0x5ee722*/
  }
  while ( v8 < v6 ); /*0x5ee725*/
  v31 = v7; /*0x5ee729*/
  if ( !v7 ) /*0x5ee72d*/
  {
LABEL_8:
    if ( a5 ) /*0x5ee739*/
    {
      v10 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6 - 1); /*0x5ee74e*/
      *(_BYTE *)(v10 + v9) = 1; /*0x5ee757*/
      *((_DWORD *)dword_A8B230 + v10 + 1120) = a2; /*0x5ee761*/
      *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5ee770*/
      return a1; /*0x5ee778*/
    }
    goto LABEL_17; /*0x5ee739*/
  }
  if ( v7 != 2 || a5 ) /*0x5ee785*/
  {
LABEL_17:
    v14 = -1; /*0x5ee7cf*/
    v29 = -1; /*0x5ee7d5*/
    v35 = -1; /*0x5ee7d9*/
    if ( v7 == 1 ) /*0x5ee7dd*/
    {
      v15 = 0; /*0x5ee7e3*/
      if ( v6 > 0 ) /*0x5ee7e7*/
      {
        do /*0x5ee888*/
        {
          if ( !*(_BYTE *)(v15 + v9) ) /*0x5ee7ed*/
          {
            v16 = 0; /*0x5ee7f7*/
            v17 = 0; /*0x5ee7f9*/
            v32 = 0; /*0x5ee7fd*/
            if ( v6 > 0 ) /*0x5ee801*/
            {
              do /*0x5ee865*/
              {
                if ( *(_BYTE *)(v17 + a4) ) /*0x5ee806*/
                {
                  v18 = *(_DWORD *)(a3 + 4); /*0x5ee80c*/
                  v19 = (double)(__int16)(*(_WORD *)(v18 + 4 * v15 + 2) - *(_WORD *)(v18 + 4 * v17 + 2)); /*0x5ee82e*/
                  v37 = (__int16)(*(_WORD *)(v18 + 4 * v15) - *(_WORD *)(v18 + 4 * v17)); /*0x5ee832*/
                  v20 = Math::Sqrt((double)v37 * (double)v37 + v19 * v19); /*0x5ee84b*/
                  v32 += (__int16)Math::RoundToInt(v20); /*0x5ee85b*/
                }
                ++v17; /*0x5ee862*/
              }
              while ( v17 < *(_DWORD *)(a3 + 16) ); /*0x5ee865*/
              v16 = v32; /*0x5ee867*/
            }
            if ( v16 < v29 || v29 < 0 ) /*0x5ee875*/
            {
              v29 = v16; /*0x5ee877*/
              v35 = v15; /*0x5ee87b*/
            }
            v9 = a4; /*0x5ee87f*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee882*/
          ++v15; /*0x5ee885*/
        }
        while ( v15 < v6 ); /*0x5ee888*/
        v14 = v35; /*0x5ee88e*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee896*/
      *((_DWORD *)dword_A8B230 + v14 + 1120) = a2; /*0x5ee8a0*/
      *v34 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee8b1*/
      return v34; /*0x5ee8ad*/
    }
    else
    {
      v21 = 0; /*0x5ee8e6*/
      v36 = -1; /*0x5ee8e8*/
      v30 = -1; /*0x5ee8ee*/
      if ( v6 > 0 ) /*0x5ee8f2*/
      {
        do /*0x5ee98d*/
        {
          if ( !*(_BYTE *)(v21 + v9) ) /*0x5ee8f8*/
          {
            v22 = 0; /*0x5ee902*/
            v23 = 0; /*0x5ee904*/
            v33 = 0; /*0x5ee908*/
            if ( v6 > 0 ) /*0x5ee90c*/
            {
              do /*0x5ee970*/
              {
                if ( *(_BYTE *)(v23 + a4) ) /*0x5ee911*/
                {
                  v24 = *(_DWORD *)(a3 + 4); /*0x5ee917*/
                  v25 = (double)(__int16)(*(_WORD *)(v24 + 4 * v21 + 2) - *(_WORD *)(v24 + 4 * v23 + 2)); /*0x5ee939*/
                  v38 = (__int16)(*(_WORD *)(v24 + 4 * v21) - *(_WORD *)(v24 + 4 * v23)); /*0x5ee93d*/
                  v26 = Math::Sqrt((double)v38 * (double)v38 + v25 * v25); /*0x5ee956*/
                  v33 += (__int16)Math::RoundToInt(v26); /*0x5ee966*/
                }
                ++v23; /*0x5ee96d*/
              }
              while ( v23 < *(_DWORD *)(a3 + 16) ); /*0x5ee970*/
              v22 = v33; /*0x5ee972*/
            }
            if ( v22 > v36 ) /*0x5ee97a*/
            {
              v36 = v22; /*0x5ee97c*/
              v30 = v21; /*0x5ee980*/
            }
            v9 = a4; /*0x5ee984*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee987*/
          ++v21; /*0x5ee98a*/
        }
        while ( v21 < v6 ); /*0x5ee98d*/
        v14 = v30; /*0x5ee993*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee99b*/
      *((_DWORD *)dword_A8B230 + v14 + 1120) = a2; /*0x5ee9a7*/
      *v34 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee9b9*/
      return v34; /*0x5ee9b5*/
    }
  }
  v12 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6 - 3); /*0x5ee798*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5ee79d*/
  v13 = 0; /*0x5ee7a0*/
  v28 = 0; /*0x5ee7a4*/
  if ( v6 <= 0 ) /*0x5ee7a8*/
  {
LABEL_16:
    v7 = v31; /*0x5ee7cb*/
    goto LABEL_17; /*0x5ee7cb*/
  }
  while ( *(_BYTE *)(v13 + a4) || ++v28 != v12 + 1 ) /*0x5ee7aa*/
  {
    if ( ++v13 >= v6 ) /*0x5ee7c9*/
      goto LABEL_16; /*0x5ee7c9*/
  }
  *(_BYTE *)(v13 + a4) = 1; /*0x5ee8c0*/
  *((_DWORD *)dword_A8B230 + v13 + 1120) = a2; /*0x5ee8ca*/
  *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v13); /*0x5ee8db*/
  return a1; /*0x5ee772*/
}



// ==== 0x005EE9D0  HouseClass::FindStartPositions  this=HouseClass  sig=csp ====
void HouseClass::FindStartPositions(HouseClass *this)
{
  int v1; // eax
  int *p_uniqueId; // ecx
  int nextArrayIndex; // eax
  int i; // edi
  HouseClass *v5; // esi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int *started; // eax
  int v11; // edi
  HouseClass *v12; // esi
  int *v13; // eax
  int v14; // [esp+0h] [ebp-34h] BYREF
  int v15; // [esp+4h] [ebp-30h] BYREF
  int v16; // [esp+8h] [ebp-2Ch] BYREF
  Multiplayer v17[16]; // [esp+Ch] [ebp-28h] BYREF
  Multiplayer v18[4]; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v20; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(v18); /*0x5ee9d9*/
  v1 = 0; /*0x5ee9e4*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5ee9e6*/
  do /*0x5eea04*/
    v17[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5ee9f1*/
  while ( v1 < 16 ); /*0x5eea04*/
  nextArrayIndex = stru_A80220.?; /*0x5eea06*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5eea11*/
  {
    v5 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5eea1f*/
    if ( !*(_BYTE *)(v5->relatedTagsCapacity + 422) && v5->currentPlayer ) /*0x5eea33*/
    {
      v6 = 0; /*0x5eea47*/
      v7 = -1; /*0x5eea49*/
      v8 = 0; /*0x5eea4c*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v9 == i ) /*0x5eea56*/
        {
          v6 = 1; /*0x5eea58*/
          v7 = v8; /*0x5eea5a*/
        }
        ++v8; /*0x5eea5c*/
        ++v9; /*0x5eea5d*/
      }
      while ( v8 < 16 ); /*0x5eea63*/
      if ( v6 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed(v5, *((_DWORD *)Block + v7)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v14, i, (int)v18, (int)v17, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed(v5, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption(v5, &v15); /*0x5eeaa3*/
        HouseClass::GetCurrentOption(v5, &v16); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    nextArrayIndex = stru_A80220.?; /*0x5eeadb*/
  }
  v11 = 0; /*0x5eeaeb*/
  if ( nextArrayIndex > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v12 = (HouseClass *)*((_DWORD *)stru_A80220.? + v11); /*0x5eeafb*/
      if ( !*(_BYTE *)(v12->relatedTagsCapacity + 422) && !v12->currentPlayer ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v13 = AssignRandomMapStartPositions(&v16, v11, (int)v18, (int)v17, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed(v12, *v13); /*0x5eeb43*/
        HouseClass::GetCurrentOption(v12, &v15); /*0x5eeb4f*/
        HouseClass::GetCurrentOption(v12, &v14); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v11; /*0x5eeb7b*/
    }
    while ( v11 < stru_A80220.? ); /*0x5eeb7e*/
  }
  *(_DWORD *)v18 = &VectorClass<Cell>::`vftable'; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v20 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }
}



// ==== 0x005EEBB0  _DynamicVectorClass_PBVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_cptr_MultiMission::Destroy(_DynamicVectorClass_PBVMultiMission *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5eebb6*/
  this->m_10 = 0; /*0x5eebb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5eebc0*/
  {
    __3_YAXPAX_Z(v2); /*0x5eebc6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eebce*/
  }
  BYTE1(this->m_C) = 0; /*0x5eebd1*/
  this->m_8 = 0; /*0x5eebd4*/
}



// ==== 0x005EEBE0  _DynamicVectorClass_PBVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::GetItemIndex(_DynamicVectorClass_PBVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5eebe0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5eebf5*/
  else
    return 0; /*0x5eebe7*/
}



// ==== 0x005EEC00  _VectorClass_PBVMultiMission::Capacity  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::Capacity(_VectorClass_PBVMultiMission *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5eec0a*/
}



// ==== 0x005EEC10  _VectorClass_PBVMultiMission::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::AddRef(_VectorClass_PBVMultiMission *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5eec12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5eec1d*/
  {
    v3 = 0; /*0x5eec1f*/
    if ( m_8 <= 0 ) /*0x5eec23*/
      return 1; /*0x5eec43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5eec25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5eec2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5eec34*/
    {
      ++v3; /*0x5eec36*/
      ++v4; /*0x5eec37*/
      if ( v3 >= m_8 ) /*0x5eec3c*/
        return 1; /*0x5eec3c*/
    }
  }
  return 0; /*0x5eec3e*/
}



// ==== 0x005EEC50  _VectorClass_PBVMultiMission::SetAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::SetAt(_VectorClass_PBVMultiMission *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5eec5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5eec66*/
    if ( a3 ) /*0x5eec6c*/
      v4 = a3; /*0x5eec82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5eec7e*/
    LOBYTE(this->m_C) = 1; /*0x5eec86*/
    if ( v4 ) /*0x5eec8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5eec95*/
      {
        m_8 = this->m_8; /*0x5eec9c*/
        if ( a2 < m_8 ) /*0x5eeca1*/
          m_8 = a2; /*0x5eeca3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5eeca9*/
          ++i; /*0x5eecae*/
        if ( BYTE1(this->m_C) ) /*0x5eecbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5eecc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5eecce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5eecd7*/
      this->m_8 = a2; /*0x5eecdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5eece2*/
      return 1; /*0x5eece8*/
    }
    else
    {
      return 0; /*0x5eec8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5eecf2*/
    return 1; /*0x5eecf8*/
  }
}



// ==== 0x005EED00  ?$VectorClass@PBVMultiMission@@::Cleanup3  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup3(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5eed0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5eed13*/
    *(_DWORD *)(this + 4) = 0; /*0x5eed1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5eed1e*/
  *(_DWORD *)(this + 8) = 0; /*0x5eed21*/
}



// ==== 0x005EED30  _VectorClass_PBVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::GetSize(_VectorClass_PBVMultiMission *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5eed30*/
    return 0; /*0x5eed38*/
  m_8 = this->m_8; /*0x5eed3e*/
  result = 0; /*0x5eed41*/
  if ( m_8 <= 0 ) /*0x5eed45*/
    return -1; /*0x5eed5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5eed4b*/
  {
    if ( ++result >= m_8 ) /*0x5eed5a*/
      return -1; /*0x5eed5a*/
  }
  return result; /*0x5eed3a*/
}



// ==== 0x005EED70  _VectorClass_PBVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::GetCapacity(_VectorClass_PBVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5eed70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5eed85*/
  else
    return 0; /*0x5eed77*/
}



// ==== 0x005EED90  _DynamicVectorClass_PBVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::SetCapacity(
        _DynamicVectorClass_PBVMultiMission *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5eed9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5eeda2*/
    if ( a3 ) /*0x5eeda8*/
      v4 = a3; /*0x5eedbe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5eedba*/
    LOBYTE(this->m_C) = 1; /*0x5eedc2*/
    if ( !v4 ) /*0x5eedc6*/
      return 0; /*0x5eee3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5eedc8*/
    {
      m_8 = this->m_8; /*0x5eedcf*/
      if ( a2 < m_8 ) /*0x5eedd4*/
        m_8 = a2; /*0x5eedd6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5eeddc*/
        ++i; /*0x5eede1*/
      if ( BYTE1(this->m_C) ) /*0x5eedee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5eedf9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5eee01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5eee0a*/
    this->m_8 = a2; /*0x5eee12*/
    BYTE1(this->m_C) = a3 == 0; /*0x5eee15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5eee1e*/
  }
  v7 = this->m_8; /*0x5eee21*/
  if ( v7 < this->m_10 ) /*0x5eee29*/
    this->m_10 = v7; /*0x5eee2b*/
  return 1; /*0x5eee2e*/
}



// ==== 0x005EEE40  SkirmishVector::PushBack  this=SkirmishVector  sig=csp ====
char __thiscall SkirmishVector::PushBack(SkirmishVector *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((_DWORD *)this + 2); /*0x5eee43*/
  if ( *((_DWORD *)this + 4) >= v3 ) /*0x5eee4b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x5eee56*/
      return 0; /*0x5eee56*/
    v4 = *((_DWORD *)this + 5); /*0x5eee58*/
    if ( v4 <= 0 /*0x5eee68*/
      || !(*(unsigned __int8 (__thiscall **)(SkirmishVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + v4, 0) )
    {
      return 0; /*0x5eee6f*/
    }
  }
  v6 = *((_DWORD *)this + 4); /*0x5eee75*/
  v7 = *((_DWORD *)this + 1); /*0x5eee78*/
  *((_DWORD *)this + 4) = v6 + 1; /*0x5eee7e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x5eee88*/
  return 1; /*0x5eee71*/
}



// ==== 0x005EEE90  _DynamicVectorClass_PBVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::FindItemIndex(_DynamicVectorClass_PBVMultiMission *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5eee90*/
  result = 0; /*0x5eee93*/
  if ( m_10 <= 0 ) /*0x5eee98*/
    return -1; /*0x5eeeaf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5eee9e*/
  {
    if ( ++result >= m_10 ) /*0x5eeead*/
      return -1; /*0x5eeead*/
  }
  return result; /*0x5eeeb2*/
}



// ==== 0x005EEEC0  _VectorClass_PBVMultiMission::GetAt  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::GetAt(_VectorClass_PBVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5eeec3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission const *>::`vftable'; /*0x5eeec6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5eeed0*/
  {
    __3_YAXPAX_Z(v3); /*0x5eeed8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eeee0*/
  }
  BYTE1(this->m_C) = 0; /*0x5eeeeb*/
  this->m_8 = 0; /*0x5eeef1*/
  if ( (a2 & 1) != 0 ) /*0x5eeef8*/
    __3_YAXPAX_Z(this); /*0x5eeefb*/
  return this->__pad_0; /*0x5eef05*/
}



// ==== 0x005EEF10  _DynamicVectorClass_PBVMultiMission::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::Constructor(_DynamicVectorClass_PBVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5eef13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission const *>::`vftable'; /*0x5eef16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5eef20*/
  {
    __3_YAXPAX_Z(v3); /*0x5eef28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eef30*/
  }
  BYTE1(this->m_C) = 0; /*0x5eef3b*/
  this->m_8 = 0; /*0x5eef41*/
  if ( (a2 & 1) != 0 ) /*0x5eef48*/
    __3_YAXPAX_Z(this); /*0x5eef4b*/
  return this->__pad_0; /*0x5eef55*/
}



// ==== 0x005EEF60  ObjectClass::String_Process  this=ObjectClass  sig=csp ====
void __thiscall String_Process(ObjectClass *this)
{
  unsigned int ptr_8; // esi
  int *ptr_0; // ebp
  char *ptr_C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ptr_8 = (unsigned int)this->?; /*0x5eef65*/
  if ( (ObjectClass *)ptr_8 > this->nextObject && LOBYTE(this->?) != 1 ) /*0x5eef77*/
  {
    ptr_0 = (int *)this->AbstractClass; /*0x5eef80*/
    ptr_C = (char *)this->?; /*0x5eef83*/
    v13 = (int *)this->AbstractClass; /*0x5eef86*/
    this->? = (void *)(ptr_8 >> 1); /*0x5eef8c*/
    this->? = ptr_C - 1; /*0x5eef94*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ptr_8 >> 1)); /*0x5eef9f*/
    v6 = 4 * (int)this->?; /*0x5eefa4*/
    this->AbstractClass = v5; /*0x5eefab*/
    memset(v5, 0, v6); /*0x5eefb0*/
    if ( (int)ptr_8 > 0 ) /*0x5eefbb*/
    {
      v7 = ptr_0; /*0x5eefbd*/
      v8 = ptr_8; /*0x5eefbf*/
      do /*0x5eeff3*/
      {
        v9 = *v7; /*0x5eefc1*/
        if ( *v7 ) /*0x5eefc1*/
        {
          do /*0x5eefed*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x5eefd7*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x5eefdb*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x5eefe1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5eefe3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5eefe6*/
            v9 = v12; /*0x5eefe9*/
          }
          while ( v12 ); /*0x5eefed*/
        }
        ++v7; /*0x5eefef*/
        --v8; /*0x5eeff2*/
      }
      while ( v8 ); /*0x5eeff3*/
      ptr_0 = v13; /*0x5eeff5*/
    }
    __3_YAXPAX_Z(ptr_0); /*0x5eeffa*/
  }
}



// ==== 0x005EF010  ObjectClass::Map_Helper_5EF010  this=ObjectClass  sig=csp ====
void __thiscall Map_Helper_5EF010(ObjectClass *this)
{
  int ptr_8; // esi
  _DWORD *ptr_0; // ebp
  char *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->?) != 1 ) /*0x5ef018*/
  {
    ptr_8 = (int)this->?; /*0x5ef020*/
    ptr_0 = this->AbstractClass; /*0x5ef023*/
    v4 = (char *)this->? + 1; /*0x5ef02c*/
    this->? = (void *)(2 * ptr_8); /*0x5ef02d*/
    v13 = ptr_0; /*0x5ef030*/
    this->? = v4; /*0x5ef038*/
    v5 = (void *)__2_YAPAXI_Z(8 * ptr_8); /*0x5ef043*/
    v6 = 4 * (int)this->?; /*0x5ef048*/
    this->AbstractClass = v5; /*0x5ef04f*/
    memset(v5, 0, v6); /*0x5ef054*/
    if ( ptr_8 > 0 ) /*0x5ef05f*/
    {
      v7 = ptr_0; /*0x5ef061*/
      v8 = ptr_8; /*0x5ef063*/
      do /*0x5ef097*/
      {
        v9 = *v7; /*0x5ef065*/
        if ( *v7 ) /*0x5ef065*/
        {
          do /*0x5ef091*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x5ef07b*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x5ef07f*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x5ef085*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5ef087*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5ef08a*/
            v9 = v12; /*0x5ef08d*/
          }
          while ( v12 ); /*0x5ef091*/
        }
        ++v7; /*0x5ef093*/
        --v8; /*0x5ef096*/
      }
      while ( v8 ); /*0x5ef097*/
      ptr_0 = v13; /*0x5ef099*/
    }
    __3_YAXPAX_Z(ptr_0); /*0x5ef09e*/
  }
}



// ==== 0x005EF0B0  MultiMissionVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiMissionVector::Constructor(MultiMissionVector *this, int a2, int a3)
{
  this->Items = 0; /*0x5ef0bb*/
  this->Capacity = a2; /*0x5ef0be*/
  this->IsInitialized = 1; /*0x5ef0c1*/
  this->IsAllocated = 0; /*0x5ef0c5*/
  *this = (MultiMissionVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5ef0c8*/
  if ( a2 ) /*0x5ef0ce*/
  {
    if ( a3 ) /*0x5ef0d6*/
    {
      this->Items = a3; /*0x5ef0d8*/
      return this; /*0x5ef0de*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ef0ed*/
    this->IsAllocated = 1; /*0x5ef0f0*/
  }
  return this; /*0x5ef0dd*/
}



// ==== 0x005EF100  NullModemClass::initConnection  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall NullModemClass::initConnection(NullModemClass *this, int a2, int a3, int a4, __int16 a5)
{
  int v6; // ecx

  IPXConnClass::initConnection((ModemConnectionClass *)this, a2, a3, a4, a5, 60, -1, 1200, 0); /*0x5ef124*/
  v6 = this->q01C; /*0x5ef129*/
  *(_DWORD *)this->__pad_0 = &NullModemConnClass::`vftable'; /*0x5ef12c*/
  this->q04C = -1; /*0x5ef135*/
  this->PacketsReceived = __2_YAPAXI_Z(v6 + 11); /*0x5ef145*/
  return this->__pad_0; /*0x5ef14a*/
}



// ==== 0x005EF170  NullModemClass::closeConnection  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::closeConnection(NullModemClass *this, int a2)
{
  Struct::ZeroInitAndSetup((ConnectionClass *)this); /*0x5ef173*/
  *((_DWORD *)this + 19) = a2; /*0x5ef17c*/
  return a2; /*0x5ef17f*/
}



// ==== 0x005EF190  NullModemConnClass::j_vt09  this=NullModemConnClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::j_vt09(
        NullModemConnClass *this,
        unsigned __int8 *a2,
        signed int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _WORD *v8; // eax
  signed int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax

  if ( *(_DWORD *)&this->__pad_0[76] == -1 ) /*0x5ef197*/
    return 0; /*0x5ef199*/
  v8 = (_WORD *)this->field_50; /*0x5ef19f*/
  *v8 = -9539; /*0x5ef1af*/
  v8[1] = a3; /*0x5ef1b4*/
  v8[2] = -8529; /*0x5ef1b8*/
  qmemcpy((void *)(this->field_50 + 6), a2, a3); /*0x5ef1cb*/
  v9 = 0; /*0x5ef1dc*/
  v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef1de*/
  v11 = 0; /*0x5ef1e0*/
  if ( a3 > 0 ) /*0x5ef1ec*/
  {
    do /*0x5ef200*/
    {
      v12 = a2[v9++] + (v11 >> 31); /*0x5ef1f8*/
      v11 = v12 + 2 * v11; /*0x5ef1fd*/
    }
    while ( v9 < a3 ); /*0x5ef200*/
    v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef206*/
  }
  *v10 = v11; /*0x5ef20a*/
  *(_BYTE *)(a3 + 10 + this->field_50) = 13; /*0x5ef212*/
  WinModemClass::WriteSerial((int *)g_ClipboardBuffer, (LPCVOID)this->field_50, a3 + 11); /*0x5ef222*/
  return 1; /*0x5ef19b*/
}



// ==== 0x005EF240  Audio_Read  this=-  sig=ida-proto ====
unsigned int __fastcall sub_5EF240(int a1, int a2)
{
  unsigned int result; // eax
  int i; // edi
  int v4; // esi

  result = 0; /*0x5ef242*/
  for ( i = 0; i < a2; result = v4 + 2 * result ) /*0x5ef24a*/
  {
    v4 = *(unsigned __int8 *)(i + a1) + (result >> 31); /*0x5ef257*/
    ++i; /*0x5ef259*/
  }
  return result; /*0x5ef262*/
}



// ==== 0x005EF270  sub_5EF270  this=-  sig=ida-proto ====
int sub_5EF270()
{
  return 24; /*0x5ef275*/
}



// ==== 0x005EF280  NullModemConnClass::ZeroInitAndSetup_0_0  this=NullModemConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0_0(NullModemConnClass *this)
{
  return Struct::ZeroInitAndSetup((ConnectionClass *)this);
}



// ==== 0x005EF290  NullModemConnClass::j_vt00  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::j_vt00(NullModemConnClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->field_50; /*0x5ef293*/
  *(_DWORD *)this->__pad_0 = &NullModemConnClass::`vftable'; /*0x5ef296*/
  __3_YAXPAX_Z(v3); /*0x5ef29d*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    __3_YAXPAX_Z(this); /*0x5ef2b4*/
  return this->__pad_0; /*0x5ef2be*/
}



// ==== 0x005EF2D0  sub_5EF2D0  this=-  sig=ida-proto ====
int sub_5EF2D0()
{
  dword_AC11D8 = 0; /*0x5ef2d2*/
  dword_AC11DC = 0; /*0x5ef2d7*/
  dword_AC11E0 = 0; /*0x5ef2dc*/
  dword_AC11E4 = 0; /*0x5ef2e1*/
  return 0; /*0x5ef2e6*/
}



// ==== 0x005EF2F0  sub_5EF2F0  this=-  sig=ida-proto ====
void sub_5EF2F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ef2fc*/
  dbl_AC1210 = Math::Sqrt(v0 + v0); /*0x5ef30e*/
}



// ==== 0x005EF320  sub_5EF320  this=-  sig=ida-proto ====
void sub_5EF320()
{
  dbl_AC1260 = dbl_AC1210 / 60.0; /*0x5ef32c*/
}



// ==== 0x005EF340  sub_5EF340  this=-  sig=ida-proto ====
void sub_5EF340()
{
  dbl_AC1248 = 1.0 / dbl_AC1260; /*0x5ef34c*/
}



// ==== 0x005EF360  sub_5EF360  this=-  sig=ida-proto ====
void sub_5EF360()
{
  dbl_AC1240 = 0.0174532925199433 * 45.0; /*0x5ef36c*/
}



// ==== 0x005EF380  sub_5EF380  this=-  sig=ida-proto ====
void sub_5EF380()
{
  dbl_AC1218 = 0.0174532925199433 * 60.0; /*0x5ef38c*/
}



// ==== 0x005EF3A0  sub_5EF3A0  this=-  sig=ida-proto ====
void sub_5EF3A0()
{
  dbl_AC11D0 = 0.0174532925199433 * 90.0; /*0x5ef3ac*/
}



// ==== 0x005EF3C0  sub_5EF3C0  this=-  sig=ida-proto ====
__int64 sub_5EF3C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC11D0 - dbl_AC1218); /*0x5ef3d2*/
  result = Math::RoundToInt(v0 * dbl_AC1210 * 0.5); /*0x5ef3e6*/
  dword_AC1268 = result; /*0x5ef3eb*/
  return result; /*0x5ef3f0*/
}



// ==== 0x005EF400  sub_5EF400  this=-  sig=ida-proto ====
void sub_5EF400()
{
  dbl_AC1220 = Math::ArcTan((double)dword_AC1268 * 0.00390625); /*0x5ef417*/
}



// ==== 0x005EF430  sub_5EF430  this=-  sig=ida-proto ====
void sub_5EF430()
{
  dbl_AC1238 = Math::ArcTan((double)(2 * dword_AC1268) / dbl_AC1210); /*0x5ef452*/
}



// ==== 0x005EF460  sub_5EF460  this=-  sig=ida-proto ====
__int64 sub_5EF460()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1268) + 0.5); /*0x5ef47b*/
  dword_AC125C = result; /*0x5ef480*/
  return result; /*0x5ef486*/
}



// ==== 0x005EF490  sub_5EF490  this=-  sig=ida-proto ====
int sub_5EF490()
{
  word_AC120C = 0; /*0x5ef492*/
  word_AC120E = 0; /*0x5ef498*/
  return 0; /*0x5ef49e*/
}



// ==== 0x005EF4A0  sub_5EF4A0  this=-  sig=ida-proto ====
int sub_5EF4A0()
{
  dword_AC1228 = 0; /*0x5ef4a2*/
  dword_AC122C = 0; /*0x5ef4a7*/
  dword_AC1230 = 0; /*0x5ef4ac*/
  return 0; /*0x5ef4b1*/
}



// ==== 0x005EF4C0  sub_5EF4C0  this=-  sig=ida-proto ====
int sub_5EF4C0()
{
  dword_AC1258 = 0; /*0x5ef4c5*/
  dword_AC1250 = 128; /*0x5ef4cf*/
  dword_AC1254 = 128; /*0x5ef4d4*/
  return 128; /*0x5ef4d9*/
}



// ==== 0x005EF4E0  Network::ModemConnectionDialog  this=Network  sig=csp ====
int __usercall Network::ModemConnectionDialog@<eax>(Network *this)
{
  int v1; // edi
  HWND Dialog; // ebx
  int v3; // eax
  LONG v4; // eax
  void (__stdcall *v5)(HWND); // esi
  void (__stdcall *v6)(HWND, int); // ebp
  int v7; // edi
  TechnoTypeClass *v8; // ecx
  Modem *v9; // ebp
  WinModemClass *v10; // eax
  int Modem_field_0x04; // eax
  const char *v12; // esi
  unsigned int v13; // edx
  char *v14; // edi
  char *v15; // edi
  const char *v16; // esi
  char v17; // cl
  int *v18; // eax
  WinModemClass *v19; // eax
  int v20; // edx
  int *v21; // eax
  int v22; // ebp
  char v23; // bl
  void *Member23; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // esi
  void *v31; // eax
  void *v32; // eax
  int v33; // edi
  int v34; // esi
  int v35; // edi
  int v36; // esi
  int Elapsed; // esi
  wchar_t *v38; // esi
  wchar_t *v39; // eax
  Dialog *MessageBox; // eax
  Dialog *v41; // edi
  int v42; // esi
  TechnoTypeClass *v43; // ecx
  int v44; // esi
  int *v45; // eax
  int *v46; // eax
  wchar_t *StringCSF; // [esp-18h] [ebp-8B8h]
  wchar_t *v49; // [esp-18h] [ebp-8B8h]
  wchar_t *v50; // [esp-18h] [ebp-8B8h]
  wchar_t *v51; // [esp-18h] [ebp-8B8h]
  int v52; // [esp-8h] [ebp-8A8h]
  int v53; // [esp+8h] [ebp-898h]
  LONG dwNewLong; // [esp+Ch] [ebp-894h] BYREF
  HWND hWnd; // [esp+10h] [ebp-890h]
  int v56; // [esp+14h] [ebp-88Ch] BYREF
  int Ticks; // [esp+18h] [ebp-888h]
  int v58; // [esp+1Ch] [ebp-884h]
  int v59; // [esp+20h] [ebp-880h]
  const wchar_t *v60; // [esp+24h] [ebp-87Ch]
  const wchar_t *v61; // [esp+28h] [ebp-878h]
  const wchar_t *v62; // [esp+2Ch] [ebp-874h]
  const wchar_t *v63; // [esp+30h] [ebp-870h]
  int v64; // [esp+34h] [ebp-86Ch]
  int v65; // [esp+38h] [ebp-868h]
  int v66; // [esp+3Ch] [ebp-864h]
  int v67[6]; // [esp+40h] [ebp-860h] BYREF
  unsigned __int8 v68; // [esp+58h] [ebp-848h]
  int v69; // [esp+D2h] [ebp-7CEh]
  int v70[62]; // [esp+13Ch] [ebp-764h] BYREF
  __int16 v71; // [esp+234h] [ebp-66Ch]
  LONG v72[24]; // [esp+238h] [ebp-668h] BYREF
  LONG v73[23]; // [esp+298h] [ebp-608h] BYREF
  LONG v74[24]; // [esp+2F4h] [ebp-5ACh] BYREF
  LONG v75[23]; // [esp+354h] [ebp-54Ch] BYREF
  LONG v76[35]; // [esp+3B0h] [ebp-4F0h] BYREF
  char v77; // [esp+43Ch] [ebp-464h] BYREF
  LONG v78[221]; // [esp+52Ch] [ebp-374h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v53 = -1; /*0x5ef4fb*/
  Dialog = (HWND)CreateDialog(0xECu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = Dialog; /*0x5ef508*/
  if ( !Dialog ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x5ef528*/
  UI_Connect(Dialog, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  Dialog::Show((Dialog *)Dialog); /*0x5ef549*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5ef571*/
  {
    v4 = 1618; /*0x5ef57a*/
    dwNewLong = 1618; /*0x5ef57f*/
  }
  else
  {
    v4 = dwNewLong; /*0x5ef585*/
  }
  v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef589*/
  v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef590*/
  v52 = v1; /*0x5ef596*/
  v7 = 0; /*0x5ef597*/
  while ( 2 ) /*0x5ef5af*/
  {
    if ( v4 < 0 ) /*0x5ef5af*/
    {
      while ( (unsigned __int8)Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        LOBYTE(v8) = 0; /*0x5ef5ba*/
        ScreenSaver::Process(v8, v52); /*0x5ef5bc*/
        v4 = dwNewLong; /*0x5ef5c1*/
        if ( dwNewLong >= 0 ) /*0x5ef5c7*/
          goto LABEL_15; /*0x5ef5c7*/
      }
      v4 = dwNewLong; /*0x5ef5cb*/
    }
LABEL_15:
    switch ( v4 ) /*0x5ef5dd*/
    {
      case 1618: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( Network::sendGameEvent((LONG)v78, &dword_A8DAC0) ) /*0x5efe87*/
          SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5efe95*/
        Network::handleTimeout((Network *)Dialog); /*0x5efe9c*/
        v6(Dialog, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((Network *)v76) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v9 = (Modem *)*((_DWORD *)dword_A8DB38 + dword_A8DABC); /*0x5ef610*/
        if ( !*(_DWORD *)v9->__pad_0 ) /*0x5ef613*/
          v9 = (Modem *)&dword_A8DAC0; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v10 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef633*/
        if ( v10 ) /*0x5ef63d*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v10); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (int *)&unk_A8EA70,
                *(_DWORD *)v9->__pad_0,
                v9->Modem_field_0x04,
                v9[3].__pad_0,
                v9->Modem_field_0x08,
                0,
                8,
                1) )
        {
          v60 = asc_82083C; /*0x5ef774*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef788*/
          v18 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef793*/
          Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v52); /*0x5ef79d*/
LABEL_34:
          ShowWindow(Dialog, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        Modem_field_0x04 = v9[1].Modem_field_0x04; /*0x5ef67f*/
        if ( Modem_field_0x04 == 3 ) /*0x5ef685*/
          strcpy(byte_AC11E8, v9[2].__pad_0); /*0x5ef6a1*/
        else
          CopyWideToChar(byte_AC11E8, *(char **)(dword_A8DB68 + 4 * Modem_field_0x04), -1); /*0x5ef6bc*/
        v12 = (const char *)(*((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x5ef6e0*/
        v13 = strlen(v12) + 1; /*0x5ef6e2*/
        v14 = &byte_AC11E8[strlen(byte_AC11E8)]; /*0x5ef6f0*/
        qmemcpy(v14, v12, 4 * (v13 >> 2)); /*0x5ef6f4*/
        v16 = &v12[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v15 = &v14[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v17 = v13; /*0x5ef6f6*/
        LOBYTE(v13) = 0; /*0x5ef6f8*/
        qmemcpy(v15, v16, v17 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v9, v13) ) /*0x5ef701*/
        {
          dword_A8DB30 = 2; /*0x5ef716*/
          *(_DWORD *)&dword_A8B238 = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((ModemHost *)v72) ) /*0x5ef726*/
          {
            v53 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(_DWORD *)&dword_A8B238 = 0; /*0x5ef73a*/
          v53 = 0; /*0x5ef73f*/
        }
        EventClass::GetState(0); /*0x5ef74a*/
        ShowWindow(Dialog, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v19 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef7d1*/
        if ( v19 ) /*0x5ef7db*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v19); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef818*/
        {
          LOBYTE(v20) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect((Modem *)&dword_A8DAC0, v20) ) /*0x5ef828*/
          {
            dword_A8DB30 = 3; /*0x5ef838*/
            *(_DWORD *)&dword_A8B238 = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((ModemGuest *)v73) ) /*0x5ef848*/
            {
              v53 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(_DWORD *)&dword_A8B238 = 0; /*0x5ef85a*/
            v53 = 0; /*0x5ef860*/
          }
          EventClass::GetState(0); /*0x5ef86a*/
          v6(Dialog, 5); /*0x5ef872*/
        }
        else
        {
          v63 = asc_82083C; /*0x5ef88d*/
          v49 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8a1*/
          v21 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8ac*/
          Dialog::ShowMessageBox(v21, v49, 0, 0, 0, v52); /*0x5ef8b6*/
          v6(Dialog, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef8fb*/
        {
          v61 = asc_82083C; /*0x5efe39*/
          v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe4d*/
          v46 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe58*/
          Dialog::ShowMessageBox(v46, v51, 0, 0, 0, v52); /*0x5efe62*/
          v6(Dialog, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v22 = 0; /*0x5ef907*/
        v23 = 1; /*0x5ef909*/
        Member23 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        WinModemClass::WriteSerial((int *)g_ClipboardBuffer, aAth, strlen(aAth)); /*0x5ef932*/
        Ticks = Timer::GetTicks(); /*0x5ef944*/
        v59 = 0; /*0x5ef948*/
        v64 = Timer::GetTicks(); /*0x5ef951*/
        v25 = v64; /*0x5ef955*/
        v26 = 120; /*0x5ef95b*/
        v66 = 120; /*0x5ef960*/
        Ticks = v64; /*0x5ef964*/
        v58 = v65; /*0x5ef968*/
        v59 = 120; /*0x5ef96c*/
        break; /*0x5ef96c*/
      default:
LABEL_120:
        v53 = v7; /*0x5efea8*/
        goto LABEL_121; /*0x5efea8*/
    }
    do /*0x5ef996*/
    {
      v27 = v26; /*0x5ef973*/
      if ( v25 == -1 ) /*0x5ef975*/
      {
        v30 = v26; /*0x5ef992*/
      }
      else
      {
        v28 = Timer::GetTicks(); /*0x5ef97b*/
        v25 = Ticks; /*0x5ef980*/
        v29 = v28 - Ticks; /*0x5ef984*/
        if ( v29 >= v27 ) /*0x5ef988*/
          break; /*0x5ef988*/
        v26 = v59; /*0x5ef98a*/
        v30 = v27 - v29; /*0x5ef98e*/
      }
    }
    while ( v30 ); /*0x5ef996*/
    v31 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef998*/
    ClearCommBreak(v31); /*0x5ef9a4*/
    v32 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef9b2*/
    EscapeCommFunction(v32, 6u); /*0x5ef9b8*/
    v33 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ef9c3*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9cc*/
      v33 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v34 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ef9e5*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9ee*/
        v34 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa00*/
      if ( (unsigned int)(v34 - v33) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5efa12*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efa34*/
      {
        v35 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5efa3b*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa44*/
          v35 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v36 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5efa5d*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa66*/
            v36 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa78*/
          if ( (unsigned int)(v36 - v35) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5efa86*/
        }
        v23 = 0; /*0x5efa8d*/
        v22 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset(v70, 0, sizeof(v70)); /*0x5efaa5*/
    v71 = 0; /*0x5efaa7*/
    if ( v23 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v70[0] = 100; /*0x5efab9*/
    *(int *)((char *)&v70[36] + 2) = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efacc*/
    LOBYTE(v70[6]) = (unsigned __int8)&v77; /*0x5efae7*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v70, 250, 1); /*0x5efaee*/
    Elapsed = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efb02*/
    if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efb15*/
        if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efb36*/
          break; /*0x5efb36*/
        if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v44 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efc7a*/
      while ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v44) < 0x1E ) /*0x5efc86*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efc8d*/
      if ( v69 > *(int *)((char *)&v70[36] + 2) ) /*0x5efcb3*/
      {
        v22 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efcbc*/
      {
        if ( v68 > LOBYTE(v70[6]) ) /*0x5efccf*/
        {
          v22 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( v68 == LOBYTE(v70[6]) ) /*0x5efcd8*/
        {
          v22 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
LABEL_73:
    g_NetworkTestFlag = 0; /*0x5efb4d*/
    v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb80*/
    v39 = GetStringCSF(aTxtWaitingConn, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb82*/
    MessageBox = (Dialog *)CreateMessageBox((LPARAM)v39, (LPARAM)v38, (LONG)&g_NetworkTestFlag); /*0x5efb8b*/
    v41 = MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    Dialog::Show(MessageBox); /*0x5efb9c*/
    v42 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efbab*/
    while ( (unsigned __int8)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5efbc1*/
    {
      LOBYTE(v43) = 0; /*0x5efbc7*/
      ScreenSaver::Process(v43, v52); /*0x5efbc9*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5efbd3*/
      if ( Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) <= 0 ) /*0x5efc00*/
      {
        v22 = 1; /*0x5efd0e*/
        goto LABEL_100; /*0x5efd0e*/
      }
      if ( v67[0] != 100 ) /*0x5efc0b*/
      {
        v22 = 0; /*0x5efd0a*/
LABEL_100:
        v23 = 0; /*0x5efd13*/
        goto LABEL_101; /*0x5efd13*/
      }
      v42 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efc20*/
      while ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v42) < 0x1E ) /*0x5efc2c*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efc33*/
      if ( v69 <= *(int *)((char *)&v70[36] + 2) ) /*0x5efc59*/
      {
        if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efce5*/
        {
          if ( v68 <= LOBYTE(v70[6]) ) /*0x5efcf4*/
          {
            if ( v68 == LOBYTE(v70[6]) ) /*0x5efcff*/
            {
              v23 = 0; /*0x5efd01*/
              v22 = 3; /*0x5efd03*/
            }
          }
          else
          {
            v23 = 0; /*0x5efcf6*/
            v22 = 2; /*0x5efcf8*/
          }
        }
      }
      else
      {
        v23 = 0; /*0x5efc5f*/
        v22 = 2; /*0x5efc61*/
      }
LABEL_101:
      if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v42) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( v23 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v22 = 0; /*0x5efd32*/
LABEL_105:
    Dialog::Destroy(v41); /*0x5efd34*/
LABEL_106:
    if ( v22 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      dword_A8DB30 = 0; /*0x5efddd*/
      *(_DWORD *)&dword_A8B238 = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((ModemHost *)v74) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(_DWORD *)&dword_A8B238 = 0; /*0x5efdf6*/
LABEL_115:
      EventClass::GetState(0); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v22 != 2 ) /*0x5efd45*/
      {
        if ( v22 == 3 ) /*0x5efd48*/
        {
          v62 = asc_82083C; /*0x5efd65*/
          v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd79*/
          v45 = (int *)GetStringCSF(aTxtModemOrLoop, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd84*/
          Dialog::ShowMessageBox(v45, v50, 0, 0, 0, v52); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      dword_A8DB30 = 1; /*0x5efda1*/
      *(_DWORD *)&dword_A8B238 = 2; /*0x5efdab*/
      if ( ModemGuest::Dialog((ModemGuest *)v75) != 1 ) /*0x5efdb8*/
      {
        *(_DWORD *)&dword_A8B238 = 0; /*0x5efdc3*/
        goto LABEL_115; /*0x5efdcd*/
      }
      v53 = 2; /*0x5efdba*/
    }
LABEL_121:
    v4 = -1; /*0x5efeac*/
    dwNewLong = -1; /*0x5efeb6*/
    if ( v53 == -1 ) /*0x5efeba*/
    {
      Dialog = hWnd; /*0x5ef59b*/
      v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  Dialog::Destroy((Dialog *)hWnd); /*0x5efec4*/
  return v53; /*0x5efecd*/
}



// ==== 0x005EFF00  sub_5EFF00  this=-  sig=csp ====
int __stdcall sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5eff19*/
  if ( !result ) /*0x5eff20*/
  {
    if ( a2 == 273 ) /*0x5eff28*/
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5eff44*/
      if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 ) /*0x5eff5d*/
        *WindowLongA = a3; /*0x5eff5f*/
    }
    else if ( a2 == 1175 ) /*0x5eff30*/
    {
      Network::handleTimeout(hWnd); /*0x5eff34*/
      return 0; /*0x5eff3e*/
    }
    return 0; /*0x5eff61*/
  }
  return result; /*0x5eff39*/
}



// ==== 0x005EFF70  Network::handleTimeout  this=Network  sig=csp ====
int __thiscall Network::handleTimeout(Network *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int result; // eax
  unsigned __int8 v5; // [esp+10h] [ebp-4h]

  v5 = 1; /*0x5eff7e*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5effa4*/
    v5 = 0; /*0x5effad*/
  DlgItem = GetDlgItem((HWND)this, 1619); /*0x5effbe*/
  if ( DlgItem ) /*0x5effcc*/
    EnableWindow(DlgItem, v5); /*0x5effd8*/
  v3 = GetDlgItem((HWND)this, 1620); /*0x5effe0*/
  if ( v3 ) /*0x5effe4*/
    EnableWindow(v3, v5); /*0x5efff0*/
  result = (int)GetDlgItem((HWND)this, 1621); /*0x5efff8*/
  if ( result ) /*0x5efffc*/
    return EnableWindow((HWND)result, v5); /*0x5f0006*/
  return result; /*0x5f0008*/
}



// ==== 0x005E00B0  NetworkLobby::MessageHandler  this=NetworkLobby  sig=csp ====
char NetworkLobby::MessageHandler(NetworkLobby *this)
{
  NetworkLobby *v1; // edi
  char result; // al
  int v3; // esi
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  wchar_t *v11; // eax
  wchar_t *v12; // eax
  char *v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  wchar_t *StringCSF; // eax
  int v19; // edi
  int v20; // esi
  int v21; // eax
  LPARAM v22; // ebp
  char *v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // eax
  HWND v27; // eax
  char *v28; // eax
  int v29; // eax
  int v30; // esi
  char *v31; // eax
  int PlayerOption; // eax
  int PlayerColor; // eax
  int v34; // eax
  Dialog *DialogIndirect; // esi
  int v36; // esi
  int m; // esi
  wchar_t *v38; // eax
  wchar_t *v39; // eax
  HWND v40; // eax
  HWND v41; // esi
  HWND DlgItem; // eax
  int v43; // esi
  char *v44; // eax
  int v45; // edi
  char **v46; // esi
  char *v47; // eax
... [48227 chars total]



// ==== 0x005E1CA0  GameLobby::DlgProc  this=GameLobby  sig=csp ====
int __userpurge GameLobby::DlgProc@<eax>(GameLobby *this, int a2@<ebp>, HWND hWnd, UINT a4, WPARAM a5, unsigned int a6)
{
  int v6; // ebx
  Skirmish *v7; // esi
  int result; // eax
  int v10; // esi
  WPARAM v11; // edi
  wchar_t *StringCSF; // ebp
  HWND v13; // eax
  char *v14; // eax
  HWND DlgItem; // eax
  UINT v16; // edi
  StartCombo *v17; // esi
  bool v18; // cc
  HWND v19; // esi
  signed int v20; // edi
  signed int v21; // ebx
  int v22; // ebp
  int v23; // eax
  ObjectClass *v24; // esi
  void *ResourceID2CSF; // edi
  void *ResourceIDCSF; // ebx
  int ResourceID3CSF; // ebp
  void *ResourceID4CSF; // eax
  GameLobby *v29; // esi
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  int ComboBoxSelectedRaw2; // eax
  char *v34; // eax
  WPARAM v35; // edi
  void **v36; // ebx
  StartCombo *DlgCtrlID; // esi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  SideClass *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  POINT v44; // [esp-Ch] [ebp-74h]
  ObjectClass *v45; // [esp+0h] [ebp-68h]
  GameSetup *v46; // [esp+0h] [ebp-68h]
  GameSetup *v47; // [esp+0h] [ebp-68h]
  ObjectClass *v48; // [esp+10h] [ebp-58h]
  int nIDDlgItem; // [esp+14h] [ebp-54h]
  struct tagRECT Rect; // [esp+18h] [ebp-50h] BYREF
  char Buffer[64]; // [esp+28h] [ebp-40h] BYREF
  HWND hWnda; // [esp+6Ch] [ebp+4h]

  if ( (unsigned int)hWnd <= 0x84 ) /*0x5e1cb0*/
  {
    if ( hWnd != (HWND)132 ) /*0x5e1cb6*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e1cd0*/
      {
        case 2u: /*0x5e1cd0*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5e1cdc*/
            VtableStub::643E70(&stru_AC4B30.__pad_EC[828]); /*0x5e1cea*/
          v7 = g_UIControlState; /*0x5e1cef*/
          if ( !g_UIControlState ) /*0x5e1cf7*/
            return 0; /*0x5e1cf7*/
          ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e1cff*/
          __3_YAXPAX_Z(v7); /*0x5e1d05*/
          g_UIControlState = 0; /*0x5e1d0d*/
          return 0; /*0x5e1d20*/
        case 0xFu: /*0x5e1cd0*/
          Dialog::DrawBackground((Dialog *)this); /*0x5e1d41*/
          if ( g_UIControlState ) /*0x5e1d4e*/
            Skirmish::RenderPreview(g_UIControlState, (HWND)this); /*0x5e1d51*/
          if ( (unsigned __int8)LoadScreen::IsActive((LoadScreen *)&stru_AC4B30.__pad_EC[828]) ) /*0x5e1d5b*/
            LoadScreen::Render((int)&stru_AC4B30.__pad_EC[828], v6, a2, NAN); /*0x5e1d71*/
          Dialog::StopBink((Dialog *)this); /*0x5e1d78*/
          ValidateRect((HWND)this, 0); /*0x5e1d80*/
          return 0; /*0x5e1d8f*/
        case 0x14u: /*0x5e1cd0*/
          goto LABEL_9;
        case 0x2Bu: /*0x5e1cd0*/
          Dialog::Resize((char *)a5); /*0x5e1d27*/
LABEL_9:
          result = 1; /*0x5e1d2c*/
          break; /*0x5e1d38*/
        default:
          return 0;
      }
      return result; /*0x5e1d38*/
    }
    hWnda = GetDlgItem((HWND)this, 1685); /*0x5e1da4*/
    if ( hWnda ) /*0x5e1da8*/
    {
      v10 = (unsigned __int16)a5; /*0x5e1dbd*/
      v11 = HIWORD(a5); /*0x5e1dc3*/
      GetWindowRect((HWND)this, &Rect); /*0x5e1dc5*/
      StringCSF = &g_TypeClass_DefaultString; /*0x5e1dd9*/
      v44.y = v11 - Rect.top; /*0x5e1dde*/
      v44.x = v10 - Rect.left; /*0x5e1ddf*/
      v13 = ChildWindowFromPointEx((HWND)this, v44, 1u); /*0x5e1de1*/
      if ( v13 ) /*0x5e1de9*/
      {
        v14 = DlgSkirmishMenuProc((HWND)this, v13); /*0x5e1def*/
        if ( v14 ) /*0x5e1df6*/
          StringCSF = GetStringCSF((wchar_t *)v14, 0, g_Str_File_netdlg2_cpp, 3388); /*0x5e1e0b*/
      }
      SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5e1e1a*/
      return 0; /*0x5e1e29*/
    }
    return 0; /*0x5e1da8*/
  }
  if ( (unsigned int)hWnd > 0x4E9 ) /*0x5e1e31*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e22e0*/
      Dialog::EnumAndCleanup((Dialog *)this); /*0x5e22e6*/
    return 0; /*0x5e22e6*/
  }
  if ( hWnd == (HWND)1257 ) /*0x5e1e37*/
  {
    v35 = a5; /*0x5e21fe*/
    v36 = (void **)(a5 + 8); /*0x5e2204*/
    WideString::Assign_Alt((void **)(a5 + 8), 0); /*0x5e2209*/
    if ( *(_DWORD *)v35 && *(_DWORD *)(v35 + 4) != -1 ) /*0x5e221c*/
    {
      DlgCtrlID = (StartCombo *)GetDlgCtrlID(*(HWND *)v35); /*0x5e2229*/
      if ( Dialog::MapPlayerIDToIndex((Dialog *)DlgCtrlID) == -1 ) /*0x5e2235*/
      {
        if ( CountryCombo::IDToIndex((CountryCombo *)DlgCtrlID) == -1 ) /*0x5e2241*/
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 ) /*0x5e224d*/
          {
            ComboBoxSelectedRaw = (GameSetup *)GetComboBoxSelectedRaw((HWND)this, (int)DlgCtrlID, *(_DWORD *)(v35 + 4)); /*0x5e2259*/
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw); /*0x5e2260*/
            WideString::Assign_Alt(v36, ColorTooltip); /*0x5e2268*/
            return 1; /*0x5e2279*/
          }
        }
        else
        {
          ComboBoxSelected = (SideClass *)GetComboBoxSelected((HWND)this, (int)DlgCtrlID, *(_DWORD *)(v35 + 4)); /*0x5e2286*/
          if ( ComboBoxSelected != (SideClass *)-1 ) /*0x5e228e*/
          {
            Name = SideClass::GetName(ComboBoxSelected); /*0x5e2292*/
            WideString::Assign_Alt(v36, Name); /*0x5e229a*/
            return 1; /*0x5e22ab*/
          }
        }
      }
      else
      {
        ComboBoxSelectedDefault = (GameClass *)GetComboBoxSelectedDefault( /*0x5e22b8*/
                                                 (HWND)this,
                                                 (int)DlgCtrlID,
                                                 *(_DWORD *)(v35 + 4));
        DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault); /*0x5e22bf*/
        WideString::Assign_Alt(v36, DifficultyString); /*0x5e22c7*/
      }
    }
    return 1; /*0x5e22d8*/
  }
  if ( hWnd != (HWND)273 ) /*0x5e1e42*/
  {
    if ( hWnd == (HWND)1175 ) /*0x5e1e4d*/
    {
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)this); /*0x5e1e59*/
      InitGameDropdownColors(v45); /*0x5e1e5e*/
      Lobby::FillPlayerFactions((Lobby *)this); /*0x5e1e65*/
      _cfltcvt_init(); /*0x5e1e6a*/
      Lobby::InvalidateFactionCombos((Lobby *)this); /*0x5e1e71*/
      GDlg::LoadLetterStrings(); /*0x5e1e76*/
      memset32(&stru_A8B250.__pad_0[172], -2, 8u); /*0x5e1e8a*/
      Lobby::InvalidatePlayerSlots((Lobby *)this); /*0x5e1e8e*/
      RefreshLobbyPlayerSlots(0xFFFFFFFF); /*0x5e1e96*/
      GameLobby_Setup((HWND)this, dword_A8DA8C); /*0x5e1ea3*/
      SetupSkirmishDialogPlayerSlot((HWND)this, (int)dword_A8DA8C); /*0x5e1eb0*/
      MapSkirmishDialogPlayerToControl((HWND)this, (int)dword_A8DA8C); /*0x5e1ebd*/
      DlgItem = GetDlgItem((HWND)this, 1439); /*0x5e1eca*/
      EnableWindow(DlgItem, 0); /*0x5e1ed1*/
      byte_AC11C2 = 0; /*0x5e1edb*/
      SetGameSetupPlayerState(0, 0, v46); /*0x5e1ee2*/
      GameSetup::DisplayPlayers(v47); /*0x5e1ee9*/
      NetworkLobby::UpdatePlayerList(); /*0x5e1eee*/
      InitSkirmishDialogControls((HWND)this, 1); /*0x5e1efa*/
      LoadScenarioClassByIndex(-1); /*0x5e1f02*/
      dword_A8BB0C = 8; /*0x5e1f0a*/
      return 0; /*0x5e1f1a*/
    }
    return 0; /*0x5e1e4d*/
  }
  v16 = a4; /*0x5e1f1d*/
  v17 = (StartCombo *)(unsigned __int16)a4; /*0x5e1f23*/
  if ( (unsigned __int16)a4 <= 0x540u ) /*0x5e1f2f*/
  {
    if ( (unsigned __int16)a4 == 1344 ) /*0x5e1f35*/
    {
      ReadChatMessage((wchar_t **)&hWnd, (HWND)a5); /*0x5e1fb8*/
      DeleteAndZero::Alt((DeleteAndZero *)&hWnd); /*0x5e1fc1*/
      if ( HIWORD(v16) == 1281 ) /*0x5e1fcf*/
      {
        SendNetworkLobbyChatMessage((HWND)this, (int)Math::InitDegToRad, 61680); /*0x5e1fe6*/
        return 0; /*0x5e1ff4*/
      }
      return 0; /*0x5e1fcf*/
    }
    if ( (unsigned __int16)a4 <= 0x514u ) /*0x5e1f3d*/
    {
      if ( (unsigned __int16)a4 < 0x513u ) /*0x5e1f45*/
      {
        if ( (unsigned __int16)a4 == 2 ) /*0x5e1f50*/
        {
          if ( !byte_AC0268 ) /*0x5e1f70*/
          {
            g_NetworkOptionsState = 2; /*0x5e1f79*/
            return 0; /*0x5e1f89*/
          }
          return 0; /*0x5e1f70*/
        }
        if ( (unsigned __int16)a4 != 1296 ) /*0x5e1f57*/
          return 0; /*0x5e1f66*/
      }
      goto LABEL_49; /*0x5e1f57*/
    }
    if ( (unsigned __int16)a4 < 0x51Eu ) /*0x5e1f92*/
      return 0; /*0x5e1f92*/
    v18 = (unsigned __int16)a4 <= 0x528u; /*0x5e1f98*/
    goto LABEL_36; /*0x5e1f98*/
  }
  if ( (unsigned __int16)a4 > 0x6ABu ) /*0x5e1ffd*/
  {
    if ( (unsigned __int16)a4 < 0x76Du || (unsigned __int16)a4 > 0x774u ) /*0x5e20c9*/
      return 0; /*0x5e20c9*/
    goto LABEL_49; /*0x5e20c9*/
  }
  if ( (unsigned __int16)a4 < 0x6AAu ) /*0x5e2009*/
  {
    if ( (unsigned __int16)a4 == 1439 ) /*0x5e2015*/
    {
      if ( dword_A8DA84 ) /*0x5e2035*/
      {
        *(_DWORD *)(*dword_A8DA78 + 119) = 1; /*0x5e204d*/
        sprintf(Buffer, g_INI_Key_A1); /*0x5e2054*/
        Network::SendOptionsGame(Buffer); /*0x5e2060*/
        EnablePlayerSlotControls((HWND)this, 0); /*0x5e206d*/
        v19 = GetDlgItem((HWND)this, 1439); /*0x5e207e*/
        EnableWindow(v19, 0); /*0x5e2083*/
        InvalidateRect(v19, 0, 0); /*0x5e208e*/
        SendMessageA(v19, 0x4DCu, 0, 0); /*0x5e209e*/
        GameSetup::DisplayPlayers((GameSetup *)v45); /*0x5e20a6*/
        return 0; /*0x5e20b4*/
      }
      return 0; /*0x5e2035*/
    }
    if ( (unsigned __int16)a4 <= 0x6A0u ) /*0x5e201d*/
      return 0; /*0x5e22ee*/
    v18 = (unsigned __int16)a4 <= 0x6A8u; /*0x5e2023*/
LABEL_36:
    if ( !v18 ) /*0x5e1f9e*/
      return 0; /*0x5e1fad*/
  }
LABEL_49:
  if ( HIWORD(a4) != 1 ) /*0x5e20d5*/
    return 0; /*0x5e20d5*/
  v20 = CountryCombo::IDToIndex((CountryCombo *)(unsigned __int16)a4); /*0x5e20e2*/
  a5 = v20; /*0x5e20e6*/
  v21 = StartCombo::IDToIndex(v17); /*0x5e20ef*/
  a4 = v21; /*0x5e20f3*/
  v22 = Dialog::SideIDToIndex((Dialog *)v17); /*0x5e20fc*/
  v48 = (ObjectClass *)v22; /*0x5e2100*/
  v23 = Dialog::OptionIDToIndex((Dialog *)v17); /*0x5e2104*/
  v24 = (ObjectClass *)v20; /*0x5e210b*/
  if ( v20 <= v21 ) /*0x5e210d*/
    v24 = (ObjectClass *)v21; /*0x5e210f*/
  if ( (int)v24 <= v22 ) /*0x5e2113*/
    v24 = (ObjectClass *)v22; /*0x5e2115*/
  if ( (int)v24 <= v23 ) /*0x5e2119*/
    v24 = (ObjectClass *)v23; /*0x5e211b*/
  ResourceID2CSF = (void *)GetResourceID2CSF(v24); /*0x5e2126*/
  ResourceIDCSF = (void *)GetResourceIDCSF(v24); /*0x5e212f*/
  ResourceID3CSF = GetResourceID3CSF(v24); /*0x5e2138*/
  ResourceID4CSF = (void *)GetResourceID4CSF(v24); /*0x5e213a*/
  nIDDlgItem = (int)ResourceID4CSF; /*0x5e2143*/
  if ( v24 == (ObjectClass *)a5 ) /*0x5e2149*/
  {
    v29 = this; /*0x5e214b*/
    SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5e2153*/
  }
  else if ( v24 == (ObjectClass *)a4 ) /*0x5e215e*/
  {
    v29 = this; /*0x5e2160*/
    AssignPlayerColor((HWND)this, ResourceIDCSF); /*0x5e2168*/
  }
  else if ( v24 == v48 ) /*0x5e2173*/
  {
    v29 = this; /*0x5e2175*/
    AssignPlayerSide((HWND)this, ResourceID3CSF); /*0x5e217d*/
  }
  else
  {
    v29 = this; /*0x5e2184*/
    ProcessNetworkLobbyOption((HWND)this, ResourceID4CSF); /*0x5e218c*/
  }
  v30 = GetComboBoxSelected((HWND)v29, (int)ResourceID2CSF, -1); /*0x5e21a2*/
  v31 = GetComboBoxSelectedRaw((HWND)v29, (int)ResourceIDCSF, -1); /*0x5e21af*/
  v32 = SetComboBoxSelection((HWND)v29, ResourceID3CSF, -1); /*0x5e21be*/
  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)v29, nIDDlgItem, -1); /*0x5e21c0*/
  sprintf(Buffer, "R%d,%d,%d,%d", v30, v31, v32, ComboBoxSelectedRaw2); /*0x5e21d3*/
  v34 = ToWideStringChar((char *)&stru_A8D600.Network_field_0x10); /*0x5e21e4*/
  WOLobby_Play(v34, Buffer); /*0x5e21ed*/
  return 0; /*0x5e1d19*/
}



// ==== 0x005E2340  UI_Setup_5E2340  this=-  sig=ida-proto ====
HWND sub_5E2340()
{
  HWND Current; // eax
  HWND DlgItem; // esi
  HWND result; // eax
  wchar_t *StringCSF; // eax

  Current = Dialog::GetCurrent(); /*0x5e2341*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e2354*/
  result = (HWND)SendMultiplayerStartSignal_Start(0); /*0x5e2356*/
  if ( result != (HWND)1 ) /*0x5e235e*/
  {
    SendMessageA(DlgItem, 0x4DCu, 0, 1); /*0x5e236a*/
    StringCSF = GetStringCSF(aGuiHostgamesta_0, 0, g_Str_File_netdlg2_cpp, 5300); /*0x5e2381*/
    return Dialog::ShowMessage(-1, (size_t)StringCSF); /*0x5e2389*/
  }
  return result; /*0x5e2391*/
}



// ==== 0x005E23A0  SendMultiplayerStartSignal_Start_5E23A0  this=-  sig=ida-proto ====
LRESULT sub_5E23A0()
{
  HWND Current; // eax
  HWND DlgItem; // eax

  Current = Dialog::GetCurrent(); /*0x5e23a0*/
  DlgItem = GetDlgItem(Current, 1439); /*0x5e23ab*/
  return SendMessageA(DlgItem, 0x4DCu, 0, 0); /*0x5e23c1*/
}



// ==== 0x005E23D0  ObjectClass::Network_Check  this=ObjectClass  sig=csp ====
char __thiscall Network_Check(ObjectClass *this, int a2)
{
  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = this->?; /*0x5e23d0*/
  v3 = a2; /*0x5e23d3*/
  if ( a2 >= uniqueId ) /*0x5e23d9*/
    return 0; /*0x5e23fc*/
  v4 = uniqueId - 1; /*0x5e23db*/
  this->? = v4; /*0x5e23de*/
  if ( a2 < v4 ) /*0x5e23e1*/
  {
    do /*0x5e23f4*/
    {
      ++v3; /*0x5e23e7*/
      *((_DWORD *)this->? + v3 - 1) = *((_DWORD *)this->? + v3); /*0x5e23eb*/
    }
    while ( v3 < this->? ); /*0x5e23f4*/
  }
  return 1; /*0x5e23f9*/
}



// ==== 0x005E2410  sub_5E2410  this=-  sig=ida-proto ====
int sub_5E2410()
{
  dword_AC0B38 = 0; /*0x5e2412*/
  dword_AC0B3C = 0; /*0x5e2417*/
  dword_AC0B40 = 0; /*0x5e241c*/
  dword_AC0B44 = 0; /*0x5e2421*/
  return 0; /*0x5e2426*/
}



// ==== 0x005E2430  sub_5E2430  this=-  sig=ida-proto ====
void sub_5E2430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5e243c*/
  dbl_AC0CE8 = Math::Sqrt(v0 + v0); /*0x5e244e*/
}



// ==== 0x005E2460  sub_5E2460  this=-  sig=ida-proto ====
void sub_5E2460()
{
  dbl_AC1160 = dbl_AC0CE8 / 60.0; /*0x5e246c*/
}



// ==== 0x005E2480  sub_5E2480  this=-  sig=ida-proto ====
void sub_5E2480()
{
  dbl_AC10E8 = 1.0 / dbl_AC1160; /*0x5e248c*/
}



// ==== 0x005E24A0  sub_5E24A0  this=-  sig=ida-proto ====
void sub_5E24A0()
{
  dbl_AC10D8 = 0.0174532925199433 * 45.0; /*0x5e24ac*/
}



// ==== 0x005E24C0  sub_5E24C0  this=-  sig=ida-proto ====
void sub_5E24C0()
{
  dbl_AC0D28 = 0.0174532925199433 * 60.0; /*0x5e24cc*/
}



// ==== 0x005E24E0  sub_5E24E0  this=-  sig=ida-proto ====
void sub_5E24E0()
{
  dbl_AC0AC0 = 0.0174532925199433 * 90.0; /*0x5e24ec*/
}



// ==== 0x005E2500  sub_5E2500  this=-  sig=ida-proto ====
__int64 sub_5E2500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC0AC0 - dbl_AC0D28); /*0x5e2512*/
  result = Math::RoundToInt(v0 * dbl_AC0CE8 * 0.5); /*0x5e2526*/
  dword_AC1168 = result; /*0x5e252b*/
  return result; /*0x5e2530*/
}



// ==== 0x005E2540  sub_5E2540  this=-  sig=ida-proto ====
void sub_5E2540()
{
  dbl_AC0D38 = Math::ArcTan((double)dword_AC1168 * 0.00390625); /*0x5e2557*/
}



// ==== 0x005E2570  sub_5E2570  this=-  sig=ida-proto ====
void sub_5E2570()
{
  dbl_AC10D0 = Math::ArcTan((double)(2 * dword_AC1168) / dbl_AC0CE8); /*0x5e2592*/
}



// ==== 0x005E25A0  sub_5E25A0  this=-  sig=ida-proto ====
__int64 sub_5E25A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1168) + 0.5); /*0x5e25bb*/
  dword_AC1158 = result; /*0x5e25c0*/
  return result; /*0x5e25c6*/
}



// ==== 0x005E25D0  sub_5E25D0  this=-  sig=ida-proto ====
int sub_5E25D0()
{
  dword_AC0B90 = 0; /*0x5e25d2*/
  return 0; /*0x5e25de*/
}



// ==== 0x005E25E0  sub_5E25E0  this=-  sig=ida-proto ====
int sub_5E25E0()
{
  dword_AC0E98 = 0; /*0x5e25e2*/
  dword_AC0E9C = 0; /*0x5e25e7*/
  dword_AC0EA0 = 0; /*0x5e25ec*/
  return 0; /*0x5e25f1*/
}



// ==== 0x005E2600  sub_5E2600  this=-  sig=ida-proto ====
int sub_5E2600()
{
  dword_AC1150 = 0; /*0x5e2605*/
  dword_AC1148 = 128; /*0x5e260f*/
  dword_AC114C = 128; /*0x5e2614*/
  return 128; /*0x5e2619*/
}



// ==== 0x005E2620  String::ComputeHash  this=ObjectClass  sig=csp ====
unsigned int __thiscall String::ComputeHash(String *this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length(this); /*0x5e262c*/
  for ( i = 0; i < String::Length(this); ++i ) /*0x5e2630*/
  {
    v4 = String::GetOrEmpty(this); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/
}



// ==== 0x005E2670  GameSetup::CompareWideString  this=GameSetup  sig=csp ====
const wchar_t *__thiscall GameSetup::CompareWideString(GameSetup *this)
{
  const wchar_t *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // esi

  v2 = WideString::Length((WideString *)this); /*0x5e267c*/
  v3 = 0; /*0x5e267e*/
  if ( WideString::Length((WideString *)this) ) /*0x5e2680*/
  {
    do /*0x5e26ae*/
    {
      v4 = (unsigned int)v2 + v3 + WideString::GetOrEmpty((WideString *)this)[v3]; /*0x5e2698*/
      v2 = (const wchar_t *)(HIBYTE(v4) ^ (v4 << 8)); /*0x5e26a4*/
      ++v3; /*0x5e26a6*/
    }
    while ( v3 < (unsigned int)WideString::Length((WideString *)this) ); /*0x5e26ae*/
  }
  return v2; /*0x5e26b2*/
}



// ==== 0x005E26C0  Dialog::FindGameUI  this=Dialog  sig=csp ====
int Dialog_FindGameUI()
{
  int result; // eax

  result = Dialog::FindByHandle((void *)0xC2); /*0x5e26c5*/
  if ( !result ) /*0x5e26cc*/
  {
    result = Dialog::FindByHandle((void *)0xC9); /*0x5e26d3*/
    if ( !result ) /*0x5e26da*/
    {
      result = Dialog::FindByHandle((void *)0xBC); /*0x5e26e1*/
      if ( !result ) /*0x5e26e8*/
        return Dialog::FindByHandle((void *)0xBD); /*0x5e26ef*/
    }
  }
  return result; /*0x5e26f4*/
}



// ==== 0x005E2700  Dialog::ShowMessage  this=IUnknown  sig=csp ====
int Dialog::ShowMessage(int a1, size_t BufferCount, ...)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e2717*/
  vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v5); /*0x5e272a*/
  result = Dialog::GetCurrent(); /*0x5e2732*/
  if ( result ) /*0x5e2739*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2746*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e274e*/
    if ( DlgItem ) /*0x5e2752*/
    {
      return DrawDialogText(a1, Buffer, DlgItem); /*0x5e276d*/
    }
    else
    {
      while ( 1 ) /*0x5e2756*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e2756*/
        Current = (HWND)result; /*0x5e275b*/
        if ( !result ) /*0x5e275f*/
          break; /*0x5e275f*/
        DlgItem = GetDlgItem((HWND)result, 1343); /*0x5e2767*/
        if ( DlgItem ) /*0x5e276b*/
          return DrawDialogText(a1, Buffer, DlgItem); /*0x5e276b*/
      }
    }
  }
  return result; /*0x5e277e*/
}



// ==== 0x005E2790  Dialog::ShowStatusText  this=ObjectClass  sig=csp ====
int Dialog::ShowStatusText(LPARAM a1, size_t BufferCount, ...)
{
  int result; // eax
  HWND Current; // esi
  HWND DlgItem; // eax
  va_list v5; // [esp+0h] [ebp-808h]
  wchar_t Buffer[1024]; // [esp+8h] [ebp-800h] BYREF
  va_list Format; // [esp+814h] [ebp+Ch] BYREF

  va_start(Format, BufferCount);
  memset(Buffer, 0, sizeof(Buffer)); /*0x5e27a7*/
  vswprintf(Buffer, BufferCount, (const wchar_t *const)Format, v5); /*0x5e27ba*/
  result = Dialog::GetCurrent(); /*0x5e27c2*/
  if ( result ) /*0x5e27c9*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e27d6*/
    DlgItem = GetDlgItem(Current, 1461); /*0x5e27de*/
    if ( DlgItem ) /*0x5e27e2*/
    {
      return DrawDialogText(a1, Buffer, DlgItem); /*0x5e27fd*/
    }
    else
    {
      while ( 1 ) /*0x5e27e6*/
      {
        result = Dialog::FindByPtr(Current); /*0x5e27e6*/
        Current = (HWND)result; /*0x5e27eb*/
        if ( !result ) /*0x5e27ef*/
          break; /*0x5e27ef*/
        DlgItem = GetDlgItem((HWND)result, 1461); /*0x5e27f7*/
        if ( DlgItem ) /*0x5e27fb*/
          return DrawDialogText(a1, Buffer, DlgItem); /*0x5e27fb*/
      }
    }
  }
  return result; /*0x5e280e*/
}



// ==== 0x005E2820  DrawDialogText  this=ObjectClass  sig=csp ====
int __fastcall DrawDialogText(LPARAM a1, wchar_t *a2, HWND hWnd)
{
  wchar_t *v3; // esi
  HWND v4; // ebx
  signed int v5; // edi
  wchar_t *v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // ebx
  int v9; // ecx
  int v10; // ebx
  wint_t *v11; // ebp
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  HDC hDC; // [esp+1Ch] [ebp-1Ch]
  int v17; // [esp+20h] [ebp-18h] BYREF
  int v18; // [esp+24h] [ebp-14h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-10h] BYREF

  v3 = a2; /*0x5e2826*/
  v4 = hWnd; /*0x5e2833*/
  v5 = wcslen(a2); /*0x5e2840*/
  v13 = 18; /*0x5e2842*/
  ScreenDialogToClient(hWnd, &Rect); /*0x5e284a*/
  if ( SendMessageA(hWnd, 0x4A0u, 0, 0) ) /*0x5e285f*/
    v13 = 1; /*0x5e2865*/
  hDC = GetDC(hWnd); /*0x5e287d*/
  SendMessageA(hWnd, 0x49Eu, 0, (LPARAM)hDC); /*0x5e2881*/
  if ( v5 ) /*0x5e2885*/
  {
    do /*0x5e2980*/
    {
      if ( v3 ) /*0x5e288d*/
      {
        v6 = wcschr(v3, 0xAu); /*0x5e2892*/
        if ( v6 ) /*0x5e289c*/
        {
          v7 = v6 - v3 + 1; /*0x5e28a2*/
          if ( v5 >= v7 ) /*0x5e28a5*/
            v5 = v7; /*0x5e28a7*/
        }
      }
      v8 = _wcsdup(v3); /*0x5e28b2*/
      v8[v5] = 0; /*0x5e28c2*/
      Text::Layout(g_FogOfWarState, v8, &v17, &v18, 0); /*0x5e28d0*/
      free(v8); /*0x5e28d6*/
      v9 = Rect.right - Rect.left - v13; /*0x5e28e9*/
      if ( v17 < v9 - 4 ) /*0x5e28f7*/
      {
        UI_Draw(hWnd, v3, v5, a1); /*0x5e295d*/
        for ( v3 += v5; *v3 == 32; ++v3 ) /*0x5e2968*/
          ; /*0x5e296a*/
        v5 = wcslen(v3); /*0x5e297c*/
      }
      else
      {
        if ( v17 / 2 <= v9 ) /*0x5e2900*/
        {
          v14 = 1; /*0x5e290f*/
        }
        else
        {
          v14 = 10; /*0x5e2902*/
          v5 -= 10; /*0x5e290a*/
        }
        v10 = v5 - 1; /*0x5e2917*/
        if ( v5 - 1 <= 0 ) /*0x5e291c*/
          goto LABEL_18; /*0x5e291c*/
        v11 = &v3[v10]; /*0x5e291e*/
        while ( iswgraph(*v11) ) /*0x5e2930*/
        {
          --v10; /*0x5e2932*/
          --v11; /*0x5e2933*/
          if ( v10 <= 0 ) /*0x5e2938*/
          {
            v5 -= v14; /*0x5e293a*/
            goto LABEL_23; /*0x5e2940*/
          }
        }
        if ( v10 == -1 ) /*0x5e2945*/
LABEL_18:
          v10 = v5 - v14; /*0x5e294b*/
        v5 = v10; /*0x5e294d*/
      }
LABEL_23:
      ; /*0x5e297e*/
    }
    while ( v5 ); /*0x5e2980*/
    v4 = hWnd; /*0x5e2986*/
  }
  return ReleaseDC(v4, hDC); /*0x5e2996*/
}



// ==== 0x005E29A0  UI_Draw  this=-  sig=csp ====
LRESULT __fastcall sub_5E29A0(HWND hWnd, wchar_t *Source, size_t Count, LPARAM lParam)
{
  wchar_t *v5; // eax
  LRESULT v6; // ebx
  LRESULT v7; // ebp
  bool v8; // bl
  LRESULT v9; // eax
  LRESULT v11; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF
  signed int Counta; // [esp+28h] [ebp+4h]

  memset(&word_AC029C, 0, 0x400u); /*0x5e29b5*/
  wcsncpy(&word_AC029C, Source, Count); /*0x5e29c2*/
  v5 = wcschr(&word_AC029C, 0xDu); /*0x5e29ce*/
  if ( v5 || (v5 = wcschr(&word_AC029C, 0xAu)) != 0 ) /*0x5e29eb*/
    *v5 = 0; /*0x5e29ed*/
  v11 = SendMessageA(hWnd, 0x49Du, 0, 1); /*0x5e2a0e*/
  v6 = SendMessageA(hWnd, 0x18Eu, 0, 0); /*0x5e2a14*/
  v7 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e2a22*/
  Counta = SendMessageA(hWnd, 0x1A1u, v6, 0); /*0x5e2a35*/
  GetWindowRect(hWnd, &Rect); /*0x5e2a39*/
  v8 = v7 - v6 <= (Rect.bottom - Rect.top) / Counta; /*0x5e2a54*/
  if ( v7 > 500 ) /*0x5e2a5d*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x5e2a69*/
    --v7; /*0x5e2a6b*/
  }
  v9 = SendMessageA(hWnd, 0x4CDu, 0, (LPARAM)&word_AC029C); /*0x5e2a79*/
  if ( lParam != -1 ) /*0x5e2a82*/
    SendMessageA(hWnd, 0x498u, v9, lParam); /*0x5e2a8c*/
  if ( v8 ) /*0x5e2a90*/
    SendMessageA(hWnd, 0x197u, v7, 0); /*0x5e2a9b*/
  return SendMessageA(hWnd, 0x49Du, 0, v11); /*0x5e2aac*/
}



// ==== 0x005E2AC0  sub_5E2AC0  this=-  sig=ida-proto ====
void sub_5E2AC0()
{
  HWND Current; // edi
  HWND DlgItem; // esi
  HWND v2; // eax
  LRESULT v3; // edi
  wchar_t *v4; // eax
  int v5; // [esp+Ch] [ebp-4h] BYREF

  if ( Dialog::GetCurrent() ) /*0x5e2ac4*/
  {
    Current = Dialog::GetCurrent(); /*0x5e2adc*/
    DlgItem = GetDlgItem(Current, 1343); /*0x5e2ae6*/
    if ( DlgItem ) /*0x5e2aea*/
    {
LABEL_5:
      v3 = SendMessageA(DlgItem, 0x18Bu, 0, 0); /*0x5e2b0b*/
      unknown_libname_74(&v5); /*0x5e2b23*/
      if ( v3 > 0 ) /*0x5e2b2a*/
        UI_Assign_623F60(DlgItem, v3 - 1, (void **)&v5); /*0x5e2b36*/
      if ( (unsigned int)WideString::Length((const wchar_t **)&v5) >= 0x24 ) /*0x5e2b47*/
      {
        WideString::Assign_Alt((void **)&v5, asc_831774); /*0x5e2b6e*/
      }
      else
      {
        SendMessageA(DlgItem, 0x182u, v3 - 1, 0); /*0x5e2b53*/
        WideString::Append2((wchar_t **)&v5, asc_831774); /*0x5e2b5e*/
      }
      v4 = WideString::GetOrEmpty((wchar_t **)&v5); /*0x5e2b78*/
      DrawDialogText(-1, v4, DlgItem); /*0x5e2b82*/
      InvalidateRect(DlgItem, 0, 0); /*0x5e2b8c*/
      DeleteAndZero::Alt((void **)&v5); /*0x5e2b96*/
    }
    else
    {
      while ( 1 ) /*0x5e2aee*/
      {
        v2 = (HWND)Dialog::FindByPtr(Current); /*0x5e2aee*/
        Current = v2; /*0x5e2af3*/
        if ( !v2 ) /*0x5e2af7*/
          break; /*0x5e2af7*/
        DlgItem = GetDlgItem(v2, 1343); /*0x5e2b05*/
        if ( DlgItem ) /*0x5e2b09*/
          goto LABEL_5; /*0x5e2b09*/
      }
    }
  }
}



// ==== 0x005E2BA0  Network::processQueue  this=Network  sig=csp ====
int __thiscall Network::processQueue(Network *this)
{
  int result; // eax
  Network **ptr_C; // esi
  int nextArrayIndex; // edi
  Network *v4; // edx

  result = 0; /*0x5e2ba6*/
  if ( stru_A80220.? > 0 ) /*0x5e2baa*/
  {
    ptr_C = (Network **)stru_A80220.?; /*0x5e2bae*/
    nextArrayIndex = stru_A80220.?; /*0x5e2bb5*/
    do /*0x5e2bda*/
    {
      v4 = *ptr_C; /*0x5e2bb7*/
      if ( *ptr_C && v4->__pad_1AA[66] && !v4->Network_field_0x1F5[0] && v4 != this ) /*0x5e2bd3*/
        ++result; /*0x5e2bd5*/
      ++ptr_C; /*0x5e2bd6*/
      --nextArrayIndex; /*0x5e2bd9*/
    }
    while ( nextArrayIndex ); /*0x5e2bda*/
  }
  return result; /*0x5e2bdf*/
}



// ==== 0x005E2BE0  Network::CountDisconnectedHouses  this=Network  sig=csp ====
int __thiscall Network::CountDisconnectedHouses(Network *this)
{
  int nextArrayIndex; // eax
  int v2; // ecx
  int v3; // ebp
  char v4; // bl
  int v5; // edi
  int v6; // esi
  int v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  nextArrayIndex = stru_A80220.?; /*0x5e2be3*/
  v2 = 0; /*0x5e2bee*/
  v8 = 0; /*0x5e2bf2*/
  v9 = 0; /*0x5e2bf6*/
  if ( stru_A80220.? <= 0 ) /*0x5e2bfa*/
    return 0; /*0x5e2cc5*/
  do /*0x5e2cb3*/
  {
    v3 = *((_DWORD *)stru_A80220.? + v2); /*0x5e2c0a*/
    if ( v3 && !*(_BYTE *)(v3 + 501) && !*(_BYTE *)(*(_DWORD *)(v3 + 52) + 422) && (Network *)v3 != this ) /*0x5e2c34*/
    {
      v4 = 0; /*0x5e2c36*/
      v5 = 0; /*0x5e2c38*/
      if ( nextArrayIndex <= 0 ) /*0x5e2c3c*/
        goto LABEL_20; /*0x5e2c3c*/
      do /*0x5e2c9e*/
      {
        if ( v5 != v9 ) /*0x5e2c42*/
        {
          v6 = *((_DWORD *)stru_A80220.? + v5); /*0x5e2c4a*/
          if ( v6 ) /*0x5e2c4f*/
          {
            if ( !*(_BYTE *)(v6 + 501) /*0x5e2c7d*/
              && !*(_BYTE *)(*(_DWORD *)(v6 + 52) + 422)
              && (Network *)v6 != this
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v3, *((#375 **)stru_A80220.? + v5))
              && (unsigned __int8)HouseClass::IsAlliedWith((#375 *)v6, (#375 *)v3) )
            {
              if ( v5 > v9 && !v4 ) /*0x5e2c8e*/
                ++v8; /*0x5e2c90*/
              v4 = 1; /*0x5e2c94*/
            }
          }
        }
        nextArrayIndex = stru_A80220.?; /*0x5e2c96*/
        ++v5; /*0x5e2c9b*/
      }
      while ( v5 < stru_A80220.? ); /*0x5e2c9e*/
      if ( !v4 ) /*0x5e2ca2*/
LABEL_20:
        ++v8; /*0x5e2ca4*/
    }
    v2 = ++v9; /*0x5e2cac*/
  }
  while ( v9 < nextArrayIndex ); /*0x5e2cb3*/
  return v8; /*0x5e2cc1*/
}



// ==== 0x005E2CD0  ShowDialogConfirm  this=-  sig=csp ====
int __fastcall ShowDialogConfirm(wchar_t *String, int nIDDlgItem, unsigned __int8 (*a3)(void), char a4)
{
  wchar_t *v4; // ebp
  int v6; // edi
  DLGTEMPLATE *DialogIndirect; // esi
  HWND DlgItem; // ebx
  LONG WindowLongA; // eax
  LONG (__stdcall *v10)(HWND, int); // ebp
  HWND v11; // ebx
  LONG v12; // eax
  HWND v13; // eax
  HWND v14; // ebx
  LONG v15; // eax
  HWND v16; // ebx
  LONG v17; // eax
  HWND v18; // eax

  v4 = String; /*0x5e2cd3*/
  if ( String && wcslen(String) )
  {
    if ( a4 )
    {
      v6 = 251; /*0x5e2cfe*/
    }
    else if ( nIDDlgItem )
    {
      if ( nIDDlgItem == 1 )
        v6 = 252; /*0x5e2d15*/
      else
        v6 = nIDDlgItem != 4 ? 251 : 294;
    }
    else
    {
      v6 = 208; /*0x5e2d09*/
    }
    DialogIndirect = (DLGTEMPLATE *)CreateDialogIndirect(g_hInstance, (HWND)v6, g_hWnd, (DLGPROC)sub_5E2E40, 0); /*0x5e2d48*/
    SetupDialog((HWND)DialogIndirect, v6); /*0x5e2d4e*/
    switch ( nIDDlgItem ) /*0x5e2d5b*/
    {
      case 0: /*0x5e2d5b*/
        DlgItem = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d62*/
        WindowLongA = GetWindowLongA(DlgItem, -16); /*0x5e2d67*/
        SetWindowLongA(DlgItem, -16, WindowLongA | 0x10000000); /*0x5e2d76*/
        if ( a4 ) /*0x5e2d82*/
          UI_Get_60B350(DlgItem); /*0x5e2d86*/
        goto LABEL_18; /*0x5e2d8b*/
      case 1: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2d96*/
        v11 = GetDlgItem((HWND)DialogIndirect, 1); /*0x5e2d9c*/
        v12 = GetWindowLongA(v11, -16); /*0x5e2da1*/
        SetWindowLongA(v11, -16, v12 | 0x10000000); /*0x5e2dac*/
        v13 = GetDlgItem((HWND)DialogIndirect, 2); /*0x5e2db4*/
        break;
      case 4: /*0x5e2d5b*/
        v10 = GetWindowLongA; /*0x5e2dc0*/
        v14 = GetDlgItem((HWND)DialogIndirect, 6); /*0x5e2dc6*/
        v15 = GetWindowLongA(v14, -16); /*0x5e2dcb*/
        SetWindowLongA(v14, -16, v15 | 0x10000000); /*0x5e2dd6*/
        v13 = GetDlgItem((HWND)DialogIndirect, 7); /*0x5e2ddf*/
        break;
      default:
LABEL_18:
        v18 = GetDlgItem((HWND)DialogIndirect, 1456); /*0x5e2dfb*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v4); /*0x5e2e0c*/
        ShowWindow((HWND)DialogIndirect, 1); /*0x5e2e15*/
        return MessageDialogLoopAlt((HWND)DialogIndirect, a3, 0, 1, 1); /*0x5e2e31*/
    }
    v16 = v13; /*0x5e2de1*/
    v17 = v10(v13, -16); /*0x5e2de6*/
    SetWindowLongA(v16, -16, v17 | 0x10000000); /*0x5e2df1*/
    v4 = String; /*0x5e2df7*/
    goto LABEL_18; /*0x5e2df7*/
  }
  return 0; /*0x5e2e2e*/
}



// ==== 0x005E2E40  sub_5E2E40  this=-  sig=csp ====
INT_PTR __stdcall sub_5E2E40(HWND hWnd, UINT a2, WPARAM a3, char *a4)
{
  INT_PTR result; // eax

  if ( a2 <= 0x2B ) /*0x5e2e47*/
  {
    switch ( a2 ) /*0x5e2e49*/
    {
      case 0x2Bu: /*0x5e2e49*/
        Dialog::Resize(a4); /*0x5e2e86*/
        return 1; /*0x5e2e90*/
      case 0xFu: /*0x5e2e49*/
        Dialog::DrawBackground(hWnd); /*0x5e2e64*/
        Dialog::StopBink(hWnd); /*0x5e2e6b*/
        ValidateRect(hWnd, 0); /*0x5e2e73*/
        return 1; /*0x5e2e7f*/
      case 0x14u: /*0x5e2e49*/
        return 1; /*0x5e2e5a*/
    }
    return 0; /*0x5e2e53*/
  }
  if ( a2 != 273 ) /*0x5e2e98*/
    return 0; /*0x5e2ecc*/
  switch ( (__int16)a3 ) /*0x5e2eb4*/
  {
    case 1: /*0x5e2eb4*/
    case 2: /*0x5e2eb4*/
    case 6: /*0x5e2eb4*/
    case 7: /*0x5e2eb4*/
      CloseDialog(hWnd, (unsigned __int16)a3); /*0x5e2ebf*/
      result = 1; /*0x5e2ec4*/
      break; /*0x5e2ec9*/
    default:
      return 0;
  }
  return result; /*0x5e2e5a*/
}



// ==== 0x005E2EF0  SetDialogPlayerName  this=Skirmish  sig=csp ====
void __fastcall Dialog_SetPlayerName(HWND hDlg, int a2)
{
  HWND DlgItem; // edi
  wchar_t *v4; // eax

  if ( a2 ) /*0x5e2ef5*/
  {
    DlgItem = GetDlgItem(hDlg, 1772); /*0x5e2f07*/
    v4 = WideString::GetOrEmpty_Alt((wchar_t **)(a2 + 32)); /*0x5e2f09*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v4); /*0x5e2f17*/
  }
}



// ==== 0x005E2F60  Dialog::ShowPlayerName  this=Dialog  sig=csp ====
int __thiscall Dialog::ShowPlayerName(Dialog *this)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem((HWND)this, 1448); /*0x5e2f66*/
  return SendMessageA(DlgItem, 0x4B2u, 0, 11055906); /*0x5e2f7f*/
}



// ==== 0x005E2F80  Skirmish_Setup  this=-  sig=ida-proto ====
int sub_5E2F80()
{
  int result; // eax

  result = MultiplayerGameMode::Find(*(void **)stru_A8B250); /*0x5e2f86*/
  if ( !result ) /*0x5e2f8d*/
    return MultiplayerGameMode::GetFirst(); /*0x5e2f8f*/
  return result; /*0x5e2f94*/
}



// ==== 0x005E2FA0  ObjectClass::Event_Handle  this=ObjectClass  sig=csp ====
int Event_Handle(ObjectClass *this)
{
  int result; // eax
  HWND Current; // esi

  result = Dialog::GetCurrentType(); /*0x5e2fa2*/
  if ( result == 107 ) /*0x5e2faa*/
  {
    Current = (HWND)Dialog::GetCurrent(); /*0x5e2fb7*/
    result = SendDlgItemMessageA(Current, 1771, 0x188u, 0, 0); /*0x5e2fc8*/
    if ( result != -1 ) /*0x5e2fcd*/
    {
      result = SendDlgItemMessageA(Current, 1771, 0x199u, result, 0); /*0x5e2fdd*/
      if ( result ) /*0x5e2fe1*/
        return (*(int (__thiscall **)(int))(*(_DWORD *)result + 148))(result); /*0x5e2fe7*/
    }
  }
  else if ( dword_A8B23C ) /*0x5e2ff8*/
  {
    return (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 37))(dword_A8B23C); /*0x5e2ffc*/
  }
  return result; /*0x5e2fed*/
}



// ==== 0x005E3010  InitSkirmishDialogControls  this=Dialog  sig=csp ====
LRESULT __fastcall SkirmishDialog_InitControls(HWND hDlg, int a2)
{
  int v3; // eax
  HWND DlgItem; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  int v12; // [esp+Ch] [ebp-1Ch]
  LPARAM lParam; // [esp+10h] [ebp-18h]
  LPARAM v14; // [esp+14h] [ebp-14h]
  WPARAM wParam; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch]
  _DWORD v17[2]; // [esp+20h] [ebp-8h] BYREF

  v14 = MEMORY[0xA8B270]; /*0x5e3022*/
  lParam = MEMORY[0xA8B25C]; /*0x5e3032*/
  v12 = MEMORY[0xA8B268]; /*0x5e3038*/
  if ( a2 ) /*0x5e303c*/
  {
    ComPtr::Constructor(&wParam); /*0x5e3047*/
    wParam = (WPARAM)&rc_ptr<WDTTerritory>::`vftable'; /*0x5e3059*/
    if ( dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5e3066*/
    {
      v3 = FindWDTTerritoryClass(v17, *(_DWORD *)dword_A8B240); /*0x5e3072*/
      ComPtr::Set(&wParam, *(_DWORD *)(v3 + 4)); /*0x5e307f*/
      v17[0] = &rc_ptr<WDTTerritory>::`vftable'; /*0x5e3088*/
      ComPtr::Release(v17); /*0x5e308c*/
    }
    if ( v16 ) /*0x5e3097*/
    {
      DlgItem = GetDlgItem(hDlg, 1348); /*0x5e30ab*/
      EnableWindow(DlgItem, 0); /*0x5e30b4*/
      v5 = GetDlgItem(hDlg, 1748); /*0x5e30be*/
      EnableWindow(v5, 0); /*0x5e30c1*/
      if ( (*(_DWORD *)(v16 + 60) & 0x20000) == 0 ) /*0x5e30ce*/
      {
        v6 = GetDlgItem(hDlg, 1026); /*0x5e30d8*/
        EnableWindow(v6, 0); /*0x5e30db*/
      }
      if ( (BYTE1(*(_DWORD *)(v16 + 60)) & 0x80u) == 0 ) /*0x5e30e7*/
      {
        v7 = GetDlgItem(hDlg, 1359); /*0x5e30f1*/
        EnableWindow(v7, 0); /*0x5e30f4*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x400) == 0 ) /*0x5e3100*/
      {
        v8 = GetDlgItem(hDlg, 1358); /*0x5e310a*/
        EnableWindow(v8, 0); /*0x5e310d*/
      }
      if ( (*(_BYTE *)(v16 + 60) & 0x20) == 0 ) /*0x5e3117*/
      {
        v9 = GetDlgItem(hDlg, 1000); /*0x5e3121*/
        EnableWindow(v9, 0); /*0x5e3124*/
      }
      if ( (*(_DWORD *)(v16 + 60) & 0x100) == 0 ) /*0x5e3130*/
      {
        v10 = GetDlgItem(hDlg, 1357); /*0x5e313a*/
        EnableWindow(v10, 0); /*0x5e313d*/
      }
    }
    SendDlgItemMessageA(hDlg, 1321, 0x406u, 1u, 393216); /*0x5e3151*/
    SendDlgItemMessageA( /*0x5e317d*/
      hDlg,
      1026,
      0x406u,
      1u,
      *((unsigned __int16 *)dword_8871E0 + 2624) | (*((unsigned __int16 *)dword_8871E0 + 2628) << 16));
    SendDlgItemMessageA(hDlg, 1026, 0x4ABu, 0, *((_DWORD *)dword_8871E0 + 1315)); /*0x5e3198*/
    SendDlgItemMessageA( /*0x5e31c4*/
      hDlg,
      1359,
      0x406u,
      1u,
      *((unsigned __int16 *)dword_8871E0 + 2632) | (*((unsigned __int16 *)dword_8871E0 + 2636) << 16));
    wParam = (WPARAM)&rc_ptr<WDTTerritory>::`vftable'; /*0x5e31ca*/
    ComPtr::Release(&wParam); /*0x5e31d2*/
  }
  SendDlgItemMessageA(hDlg, 1321, 0x405u, 1u, 6 - v12); /*0x5e31f1*/
  SendDlgItemMessageA(hDlg, 1026, 0x405u, 1u, lParam); /*0x5e3205*/
  SendDlgItemMessageA(hDlg, 1359, 0x405u, 1u, v14); /*0x5e3219*/
  wParam = 0; /*0x5e3223*/
  v16 = 1; /*0x5e322b*/
  SendDlgItemMessageA(hDlg, 1358, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B262]), 0); /*0x5e3245*/
  SendDlgItemMessageA(hDlg, 1690, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B263]), 0); /*0x5e3261*/
  SendDlgItemMessageA(hDlg, 1693, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B264]), 0); /*0x5e327f*/
  SendDlgItemMessageA(hDlg, 1000, 0xF1u, *(&wParam + (unsigned __int8)dword_A8B320), 0); /*0x5e329f*/
  return SendDlgItemMessageA(hDlg, 1357, 0xF1u, *(&wParam + (unsigned __int8)MEMORY[0xA8B261]), 0); /*0x5e32bd*/
}



// ==== 0x005E32D0  CheckGameSettingsChanged  this=-  sig=ida-proto ====
char __fastcall Game_CheckSettingsChanged(char a1, char a2)
{
  char v2; // bl
  char result; // al
  char Buffer[520]; // [esp+8h] [ebp-208h] BYREF

  v2 = 0; /*0x5e32e1*/
  if ( time(0) != dword_AC11B8 ) /*0x5e32f1*/
    goto LABEL_5; /*0x5e32f1*/
  if ( a1 ) /*0x5e32fb*/
    byte_AC11BC = 1; /*0x5e32fd*/
  result = a2; /*0x5e3304*/
  if ( a2 ) /*0x5e330a*/
  {
LABEL_5:
    if ( byte_AC11BC ) /*0x5e3317*/
      a1 = 1; /*0x5e3319*/
    byte_AC11BC = 0; /*0x5e3323*/
    if ( ppv ) /*0x5e332e*/
    {
      if ( time(0) - dword_AC11B8 >= 5 ) /*0x5e3343*/
        goto LABEL_11; /*0x5e3343*/
    }
    else if ( time(0) - dword_AC11B8 >= 2 ) /*0x5e335a*/
    {
LABEL_11:
      v2 = 1; /*0x5e335c*/
    }
    if ( a1 ) /*0x5e3364*/
      v2 = 1; /*0x5e3366*/
    if ( dword_8316D8 != MEMORY[0xA8B268] ) /*0x5e3375*/
      v2 = 1; /*0x5e3377*/
    if ( dword_8316DC != MEMORY[0xA8B25C] ) /*0x5e3386*/
      v2 = 1; /*0x5e3388*/
    if ( dword_8316E0 != MEMORY[0xA8B270] ) /*0x5e3397*/
      v2 = 1; /*0x5e3399*/
    if ( byte_AC11BD != MEMORY[0xA8B262] ) /*0x5e33a8*/
      v2 = 1; /*0x5e33aa*/
    if ( byte_AC11BE != MEMORY[0xA8B263] ) /*0x5e33b9*/
      v2 = 1; /*0x5e33bb*/
    if ( byte_AC11BF != (_BYTE)MEMORY[0xA8B264] ) /*0x5e33ca*/
      v2 = 1; /*0x5e33cc*/
    if ( byte_AC11C0 != (_BYTE)dword_A8B320 ) /*0x5e33db*/
      v2 = 1; /*0x5e33dd*/
    if ( byte_AC11C1 != MEMORY[0xA8B261] ) /*0x5e33ec*/
      v2 = 1; /*0x5e33ee*/
    word_AC1146 = 0; /*0x5e33fa*/
    if ( _wcsicmp(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1) ) /*0x5e3403*/
      v2 = 1; /*0x5e340f*/
    byte_AC0CFD = 0; /*0x5e341b*/
    if ( _strcmpi(byte_AC0CF0, &byte_A8B8E0) ) /*0x5e3422*/
      v2 = 1; /*0x5e342e*/
    byte_AC0D20 = 0; /*0x5e343a*/
    if ( _strcmpi(byte_AC0D00, &byte_A8BAE2) ) /*0x5e3441*/
      v2 = 1; /*0x5e344d*/
    if ( dword_8316E8 != dword_A8BB04 ) /*0x5e345c*/
      v2 = 1; /*0x5e345e*/
    result = byte_8316E4; /*0x5e3460*/
    if ( byte_8316E4 != (_BYTE)dword_A8BB08 || v2 ) /*0x5e3471*/
    {
      dword_AC11B8 = time(0); /*0x5e348c*/
      dword_8316D8 = MEMORY[0xA8B268]; /*0x5e3496*/
      dword_8316DC = MEMORY[0xA8B25C]; /*0x5e34a2*/
      dword_8316E0 = MEMORY[0xA8B270]; /*0x5e34ae*/
      byte_AC11BD = MEMORY[0xA8B262]; /*0x5e34b8*/
      byte_AC11BE = MEMORY[0xA8B263]; /*0x5e34c4*/
      byte_AC11BF = MEMORY[0xA8B264]; /*0x5e34da*/
      byte_AC11C0 = dword_A8B320; /*0x5e34df*/
      byte_AC11C1 = MEMORY[0xA8B261]; /*0x5e34e5*/
      wcscpy(&word_AC10F0, (const wchar_t *)&dword_A8B320 + 1); /*0x5e34eb*/
      strcpy(byte_AC0D00, &byte_A8BAE2); /*0x5e350f*/
      dword_8316E8 = dword_A8BB04; /*0x5e3536*/
      strcpy(byte_AC0CF0, &byte_A8B8E0); /*0x5e353e*/
      byte_8316E4 = dword_A8BB08; /*0x5e3553*/
      memset(Buffer, 0, sizeof(Buffer)); /*0x5e355e*/
      if ( ppv ) /*0x5e356d*/
        Game::EncodeGameSetupState(Buffer); /*0x5e356f*/
      else
        Game::BuildGameSettingsPacket(Buffer); /*0x5e3585*/
      return Network::SendOptionsGame(Buffer); /*0x5e3578*/
    }
  }
  return result; /*0x5e357d*/
}



// ==== 0x005E35A0  ObjectClass::method_5E35A0  this=ObjectClass  sig=csp ====
char sub_5E35A0(ObjectClass *this)
{
  char *v1; // edi
  unsigned int v2; // kr08_4
  char result; // al
  int v4; // edi
  int i; // esi
  int v6[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v7; // [esp+1CCh] [ebp-4h]
  char v8; // [esp+1CEh] [ebp-2h]

  memset(v6, 0, sizeof(v6)); /*0x5e35b7*/
  v7 = 0; /*0x5e35b9*/
  v8 = 0; /*0x5e35bb*/
  v6[0] = 40; /*0x5e35c6*/
  v2 = strlen(unk_A8B380) + 1; /*0x5e35ce*/
  v1 = &unk_A8B380[v2++]; /*0x5e35ce*/
  result = v2 - 1; /*0x5e35d4*/
  qmemcpy(&v6[1], &v1[1 - v2], v2 - 1); /*0x5e35dd*/
  v4 = dword_A8DA84; /*0x5e35e6*/
  for ( i = 1; i < v4; ++i ) /*0x5e35f3*/
  {
    Network::SendMessage(&unk_A8E9C0.Socket, (int)v6, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e3617*/
    result = Event::Dispatch(); /*0x5e361c*/
  }
  return result; /*0x5e3626*/
}



// ==== 0x005E3630  ObjectClass::Network_Create  this=ObjectClass  sig=csp ====
char Network_Create(ObjectClass *this)
{
  char result; // al
  char *v2; // edi
  unsigned int v3; // kr08_4
  int v4; // edi
  int i; // esi
  ObjectClass *v6; // [esp+0h] [ebp-1D0h]
  int v7[113]; // [esp+8h] [ebp-1C8h] BYREF
  __int16 v8; // [esp+1CCh] [ebp-4h]
  char v9; // [esp+1CEh] [ebp-2h]

  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e3640*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3666*/
    v8 = 0; /*0x5e3668*/
    v9 = 0; /*0x5e366a*/
    v7[0] = 40; /*0x5e3675*/
    v3 = strlen(unk_A8B380) + 1; /*0x5e367d*/
    v2 = &unk_A8B380[v3++]; /*0x5e367d*/
    result = v3 - 1; /*0x5e3683*/
    qmemcpy(&v7[1], &v2[1 - v3], v3 - 1); /*0x5e368c*/
    v4 = dword_A8DA84; /*0x5e3695*/
    for ( i = 1; i < v4; ++i ) /*0x5e36a2*/
    {
      Network::SendMessage(&unk_A8E9C0.Socket, (int)v7, 455, 1, dword_A8DA78[i] + 40, 0, 0); /*0x5e36c6*/
      result = Event::Dispatch(); /*0x5e36cb*/
    }
  }
  else
  {
    result = *(_BYTE *)&dword_A8B238 - 4; /*0x5e3642*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e3643*/
      return Network_Create_7A2730(v6); /*0x5e3649*/
  }
  return result; /*0x5e364e*/
}



// ==== 0x005E36E0  Network_Handle  this=-  sig=ida-proto ====
void sub_5E36E0()
{
  dword_A8DAB0 = 1; /*0x5e36e5*/
  if ( ppv ) /*0x5e36ee*/
    UI_Setup_7A2750(); /*0x5e36f0*/
  else
    UI_Setup_5E2340(); /*0x5e36f5*/
}



// ==== 0x005E3720  Network::SendOptionsGame  this=char*  sig=csp ====
int __thiscall Game_NetworkSendOptions(char *Source)
{
  int result; // eax
  int v2; // eax
  int i; // esi
  char *v4; // edi
  char *v5; // eax
  _DWORD v6[114]; // [esp+8h] [ebp-5C8h] BYREF
  char Destination[1024]; // [esp+1D0h] [ebp-400h] BYREF

  if ( ppv ) /*0x5e3731*/
  {
    strncpy(Destination, Source, 0x3FFu); /*0x5e3741*/
    return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, Destination); /*0x5e3759*/
  }
  else
  {
    memset(v6, 0, 455); /*0x5e3771*/
    v6[0] = 23; /*0x5e378a*/
    strcpy((char *)&v6[1], unk_A8B380); /*0x5e379f*/
    v2 = dword_A8B394; /*0x5e37b5*/
    strcpy((char *)&v6[11] + 3, Source); /*0x5e37c3*/
    *(_DWORD *)((char *)&v6[111] + 3) = v2; /*0x5e37d1*/
    *(_DWORD *)((char *)&v6[112] + 3) = WideString::Hash(&word_A8D610); /*0x5e37dd*/
    result = dword_A8DA84; /*0x5e37e4*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e37f1*/
    {
      v4 = *(char **)(dword_A8DA78 + 4 * i); /*0x5e37f9*/
      v5 = ToWideStringChar(v4); /*0x5e37fe*/
      Debug::Log("Sending public game options to %s\n", v5); /*0x5e3809*/
      Network::SendMessage((int)&unk_A8E9C0, (int)v6, 455, 1, (int)(v4 + 40), 0, 0); /*0x5e382a*/
      Event::Dispatch(); /*0x5e382f*/
      result = dword_A8DA84; /*0x5e3834*/
    }
  }
  return result; /*0x5e375c*/
}



// ==== 0x005E3850  WOLobby_Play  this=AbstractClass  sig=csp ====
int __fastcall sub_5E3850(const char *a1, const char *a2)
{
  LPVOID v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  _DWORD v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]

  v2 = ppv; /*0x5e3857*/
  if ( ppv ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], a1); /*0x5e3892*/
    return (*(int (__stdcall **)(LPVOID, char *, const char *))(*(_DWORD *)v2 + 56))(v2, v7, a2); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, a2); /*0x5e3915*/
    dword_A8D7F7 = Session::GetPlayerColor(dword_A8B238); /*0x5e392d*/
    dword_A8D7FB = WideString::Hash(word_A8D610); /*0x5e3937*/
    result = dword_A8DA84; /*0x5e393c*/
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, a1) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage((int)unk_A8E9C0, (int)v8, 455, 1, *(_DWORD *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5e39a0*/
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = dword_A8DA84; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/
}



// ==== 0x005E39C0  ValidateNetworkLobbyHostMap  this=-  sig=csp ====
HWND __fastcall NetworkLobby_ValidateHostMap(char *a1, int a2)
{
  char *v2; // edi
  char *v4; // eax
  HWND result; // eax
  int v6; // esi
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *String; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]

  v2 = a1; /*0x5e39c3*/
  if ( !a1 ) /*0x5e39c9*/
    v2 = unk_A8B380; /*0x5e39cb*/
  v4 = CharToWideString(v2); /*0x5e39d7*/
  if ( !wcscmp((const wchar_t *)v4, word_A8D610) ) /*0x5e39dd*/
    a2 = 1; /*0x5e39e9*/
  result = (HWND)dword_A8DA84; /*0x5e39ee*/
  v6 = 0; /*0x5e39f3*/
  if ( dword_A8DA84 > 0 ) /*0x5e39f7*/
  {
    while ( 1 ) /*0x5e3a06*/
    {
      v7 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v6)); /*0x5e3a06*/
      result = (HWND)_strcmpi(v7, v2); /*0x5e3a0c*/
      if ( !result ) /*0x5e3a16*/
        break; /*0x5e3a16*/
      result = (HWND)dword_A8DA84; /*0x5e3a18*/
      if ( ++v6 >= dword_A8DA84 ) /*0x5e3a20*/
        return result; /*0x5e3a20*/
    }
    if ( v6 != -1 ) /*0x5e3a29*/
    {
      *(_DWORD *)(*(_DWORD *)(dword_A8DA78 + 4 * v6) + 127) = a2; /*0x5e3a36*/
      if ( a2 ) /*0x5e3a39*/
      {
        if ( a2 == 2 ) /*0x5e3a71*/
        {
          v11 = *(_DWORD *)(dword_A8DA78 + 4 * v6); /*0x5e3a88*/
          String = GetStringCSF(aGuiHostmaptran, 0, g_Str_File_netshare_cpp, 1173); /*0x5e3a93*/
          return Dialog::ShowMessage(-1, (size_t)String, v11, 11055906); /*0x5e3a9b*/
        }
      }
      else
      {
        v10 = *(_DWORD *)(dword_A8DA78 + 4 * v6); /*0x5e3a4a*/
        v8 = GetStringCSF(g_Str_GUI_HostNoMap, 0, g_Str_File_netshare_cpp, 1169); /*0x5e3a5a*/
        return Dialog::ShowMessage(-1, (size_t)v8, v10, 11055906); /*0x5e3a62*/
      }
    }
  }
  return result; /*0x5e3a22*/
}



// ==== 0x005E3AB0  SendMultiplayerStartSignal  this=-  sig=ida-proto ====
int SendMultiplayerStartSignal()
{
  int v0; // esi
  HWND v1; // eax
  HWND (__stdcall *v2)(HWND, int); // esi
  HWND DlgItem; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  int result; // eax
  HWND v8; // eax
  HWND v9; // eax
  HWND v10; // eax
  BOOL v11; // [esp-4h] [ebp-4Ch]
  void *v12; // [esp+4h] [ebp-44h] BYREF
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  if ( ppv ) /*0x5e3abb*/
  {
    String::Assign((char **)&v12, 0); /*0x5e3ac3*/
    v0 = SendMultiplayerStartSignal_Start_77EBA0(&v12); /*0x5e3ad5*/
    DeleteAndZero(&v12); /*0x5e3ad7*/
  }
  else
  {
    v0 = SendMultiplayerStartSignal_Start(0); /*0x5e3ae5*/
  }
  dword_A8DAB0 = 0; /*0x5e3aec*/
  if ( ppv ) /*0x5e3af5*/
    SendMultiplayerStartSignal_Start_7A27D0(); /*0x5e3af7*/
  else
    SendMultiplayerStartSignal_Start_5E23A0(); /*0x5e3afe*/
  if ( v0 == 1 ) /*0x5e3b06*/
  {
    if ( ppv ) /*0x5e3b13*/
    {
      String::Assign((char **)&v12, 0); /*0x5e3b1b*/
      AssignWOLPlayerSide((const char **)&v12, 0); /*0x5e3b26*/
      DeleteAndZero(&v12); /*0x5e3b2f*/
    }
    else
    {
      SetGameSetupPlayerState(0, 0); /*0x5e3b3a*/
    }
    sprintf(Buffer, aA0); /*0x5e3b49*/
    Network::SendOptionsGame(Buffer); /*0x5e3b55*/
    if ( byte_AC11C2 ) /*0x5e3b66*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b68*/
      if ( !v1 ) /*0x5e3b6f*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3b76*/
        if ( !v1 ) /*0x5e3b7d*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3b84*/
          if ( !v1 ) /*0x5e3b8b*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3b92*/
        }
      }
      v11 = 1; /*0x5e3b97*/
    }
    else
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3b9b*/
      if ( !v1 ) /*0x5e3ba2*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3ba9*/
        if ( !v1 ) /*0x5e3bb0*/
        {
          v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3bb7*/
          if ( !v1 ) /*0x5e3bbe*/
            v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3bc5*/
        }
      }
      v11 = 0; /*0x5e3bca*/
    }
    v2 = GetDlgItem; /*0x5e3bcc*/
    DlgItem = GetDlgItem(v1, 1439); /*0x5e3bd8*/
    EnableWindow(DlgItem, v11); /*0x5e3bdb*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3be6*/
    if ( v4 ) /*0x5e3bed*/
      goto LABEL_40; /*0x5e3bed*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3bf8*/
    if ( v4 ) /*0x5e3bff*/
      goto LABEL_40; /*0x5e3bff*/
    v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c0a*/
    if ( v4 ) /*0x5e3c11*/
      goto LABEL_40; /*0x5e3c11*/
    goto LABEL_39; /*0x5e3c11*/
  }
  v5 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c21*/
  if ( !v5 ) /*0x5e3c28*/
  {
    v5 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c2f*/
    if ( !v5 ) /*0x5e3c36*/
    {
      v5 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c3d*/
      if ( !v5 ) /*0x5e3c44*/
        v5 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3c4b*/
    }
  }
  v2 = GetDlgItem; /*0x5e3c50*/
  v6 = GetDlgItem(v5, 1439); /*0x5e3c5c*/
  result = IsWindowEnabled(v6); /*0x5e3c5f*/
  if ( !result ) /*0x5e3c67*/
  {
    result = (unsigned __int8)byte_AC11C2; /*0x5e3c6d*/
    if ( byte_AC11C2 ) /*0x5e3c74*/
    {
      v8 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3c7f*/
      if ( !v8 ) /*0x5e3c86*/
      {
        v8 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3c8d*/
        if ( !v8 ) /*0x5e3c94*/
        {
          v8 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3c9b*/
          if ( !v8 ) /*0x5e3ca2*/
            v8 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ca9*/
        }
      }
      v9 = GetDlgItem(v8, 1439); /*0x5e3cb6*/
      EnableWindow(v9, 1); /*0x5e3cb9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e3cc4*/
      if ( v4 ) /*0x5e3ccb*/
        goto LABEL_40; /*0x5e3ccb*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e3cd2*/
      if ( v4 ) /*0x5e3cd9*/
        goto LABEL_40; /*0x5e3cd9*/
      v4 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e3ce0*/
      if ( v4 ) /*0x5e3ce7*/
        goto LABEL_40; /*0x5e3ce7*/
LABEL_39:
      v4 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e3ce9*/
LABEL_40:
      v10 = v2(v4, 1439); /*0x5e3cf3*/
      return InvalidateRect(v10, 0, 0); /*0x5e3d00*/
    }
  }
  return result; /*0x5e3d06*/
}



// ==== 0x005E3D10  SetupNetworkLobbyDialog  this=-  sig=csp ====
bool __fastcall SetupNetworkLobbyDialog(char *Source, void *a2)
{
  void *v3; // ebx
  char *v5; // edi
  char v6; // al
  HWND v7; // edi
  HWND DlgItem; // eax
  HWND v9; // esi
  HWND v10; // eax
  wchar_t *StringCSF; // eax
  __int16 v12; // ax
  char **v13; // ebx
  char *v14; // eax
  int v15; // ebp
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  int i; // esi
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // edi
  unsigned int v27; // eax
  int j; // ecx
  void *v29; // edx
  void *v30; // esi
  HWND v31; // eax
  Lobby *v32; // esi
  char v33; // al
  ObjectClass *v34; // ecx
  int v35; // edx
  char *v36; // eax
  wchar_t *v37; // ebp
  int ResourceID2CSF; // eax
  int v39; // eax
  HWND v40; // eax
  int ResourceIDCSF; // edi
  ObjectClass *v42; // ecx
  int v43; // eax
  int v44; // eax
  HWND v45; // eax
  int v47; // esi
  unsigned int v48; // kr08_4
  char *v49; // eax
  c... [59502 chars total]



// ==== 0x005E5F10  RehashGenericHashMap  this=MultiplayerLobby  sig=csp ====
void __fastcall RehashGenericHashMap(HWND hWnd, int a2)
{
  LRESULT v4; // edi
  __int16 WindowLongA; // ax
  int DeleteAndZero_field_0x04; // edi
  void **v7; // eax
  void **v8; // edi
  void ***v9; // eax
  void **v10; // ecx
  int v11; // eax
  LRESULT v12; // eax
  WPARAM v13; // edi
  void **v14; // eax
  void **v15; // edi
  void ***v16; // edx
  void **v17; // eax
  int v18; // ebx
  int v19; // eax
  double v20; // st7
  int v21; // ecx
  void *v22; // edi
  unsigned int v23; // edx
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  DeleteAndZero v28; // [esp+10h] [ebp-C1Ch] BYREF
  __int64 v29; // [esp+1Ch] [ebp-C10h]
  __int64 v30; // [esp+24h] [ebp-C08h]
  unsigned __int8 v31[1024]; // [esp+2Ch] [ebp-C00h] BYREF
  wchar_t lParam[1024]; // [esp+42Ch] [ebp-800h] BYREF

  v4 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e5f30*/
  v28.DeleteAndZero_field_0x08 = v4; /*0x5e5f36*/
  unknown_libname_74(&v28); /*0x5e5f3a*/
  if ( v4 ) /*0x5e5f41*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e5f4a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e5f52*/
    {
      DeleteAndZero_field_0x04 = 0; /*0x5e5f5c*/
      for ( v28.DeleteAndZero_field_0x04 = 0; /*0x5e5f64*/
            DeleteAndZero_field_0x04 < v28.DeleteAndZero_field_0x08;
            v28.DeleteAndZero_field_0x04 = DeleteAndZero_field_0x04 )
      {
        if ( SendMessageA(hWnd, 0x187u, DeleteAndZero_field_0x04, 0) ) /*0x5e5f73*/
        {
          if ( SendMessageA(hWnd, 0x4CFu, DeleteAndZero_field_0x04, 0) ) /*0x5e5f86*/
          {
            SendMessageA(hWnd, 0x4B6u, DeleteAndZero_field_0x04, (LPARAM)lParam); /*0x5e5f9b*/
          }
          else
          {
            SendMessageA(hWnd, 0x4B7u, DeleteAndZero_field_0x04, (LPARAM)v31); /*0x5e5fab*/
            BulkCharToWide(lParam, v31, -1); /*0x5e5fba*/
          }
          WideString::Assign_Alt((void **)&v28, lParam); /*0x5e5fcb*/
          v7 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e5fd2*/
          v8 = v7; /*0x5e5fd7*/
          if ( v7 ) /*0x5e5fde*/
            unknown_libname_74(v7); /*0x5e5fe2*/
          else
            v8 = 0; /*0x5e5fe9*/
          WideString::Reassign_Alt(v8, (const wchar_t **)&v28); /*0x5e5ff2*/
          *((_BYTE *)v8 + 4) = 1; /*0x5e5ffb*/
          v8[2] = 0; /*0x5e5fff*/
          v9 = (void ***)(*(_DWORD *)a2 /*0x5e6018*/
                        + 4
                        * ((*(int (__thiscall **)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          v10 = *v9; /*0x5e601d*/
          *v9 = v8; /*0x5e601f*/
          if ( v10 ) /*0x5e6023*/
            v8[2] = v10; /*0x5e6025*/
          v11 = *(_DWORD *)(a2 + 4); /*0x5e6028*/
          HIDWORD(v30) = 0; /*0x5e602b*/
          ++v11; /*0x5e602f*/
          HIDWORD(v29) = 0; /*0x5e6030*/
          *(_DWORD *)(a2 + 4) = v11; /*0x5e6034*/
          LODWORD(v30) = v11; /*0x5e6037*/
          LODWORD(v29) = *(_DWORD *)(a2 + 8); /*0x5e6042*/
          if ( (double)v30 / (double)(int)v29 >= *(double *)(a2 + 40) ) /*0x5e6052*/
            Map_Helper_5EF010((ObjectClass *)a2); /*0x5e6056*/
          DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x04; /*0x5e605b*/
        }
        ++DeleteAndZero_field_0x04; /*0x5e6063*/
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6078*/
    {
      v12 = SendMessageA(hWnd, 0x188u, 0, 0); /*0x5e6088*/
      v13 = v12; /*0x5e608a*/
      if ( v12 >= 0 ) /*0x5e608e*/
      {
        lParam[0] = 0; /*0x5e609d*/
        if ( SendMessageA(hWnd, 0x4CFu, v12, 0) ) /*0x5e60a7*/
        {
          SendMessageA(hWnd, 0x4B6u, v13, (LPARAM)lParam); /*0x5e60bc*/
        }
        else
        {
          SendMessageA(hWnd, 0x4B7u, v13, (LPARAM)v31); /*0x5e60cc*/
          BulkCharToWide(lParam, v31, -1); /*0x5e60db*/
        }
        WideString::Assign_Alt((void **)&v28, lParam); /*0x5e60ec*/
        v14 = (void **)__2_YAPAXI_Z(0xCu); /*0x5e60f3*/
        v15 = v14; /*0x5e60f8*/
        if ( v14 ) /*0x5e60ff*/
          unknown_libname_74(v14); /*0x5e6103*/
        else
          v15 = 0; /*0x5e610a*/
        WideString::Reassign_Alt(v15, (const wchar_t **)&v28); /*0x5e6113*/
        *((_BYTE *)v15 + 4) = 1; /*0x5e611e*/
        v15[2] = 0; /*0x5e6122*/
        v16 = (void ***)(*(_DWORD *)a2 /*0x5e6137*/
                       + 4
                       * ((*(int (__thiscall **)(DeleteAndZero *))(a2 + 24))(&v28) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
        v17 = *v16; /*0x5e613a*/
        *v16 = v15; /*0x5e613c*/
        if ( v17 ) /*0x5e6140*/
          v15[2] = v17; /*0x5e6142*/
        v18 = *(_DWORD *)(a2 + 8); /*0x5e6148*/
        v19 = *(_DWORD *)(a2 + 4) + 1; /*0x5e614b*/
        v29 = (unsigned int)v19; /*0x5e6150*/
        *(_DWORD *)(a2 + 4) = v19; /*0x5e6154*/
        v20 = (double)v29; /*0x5e6157*/
        v29 = (unsigned int)v18; /*0x5e615b*/
        if ( v20 / (double)v18 >= *(double *)(a2 + 40) && *(_BYTE *)(a2 + 20) != 1 ) /*0x5e6179*/
        {
          v28.DeleteAndZero_field_0x08 = *(_DWORD *)a2; /*0x5e6184*/
          v21 = *(_DWORD *)(a2 + 12) + 1; /*0x5e6192*/
          *(_DWORD *)(a2 + 8) = 2 * v18; /*0x5e6194*/
          *(_DWORD *)(a2 + 12) = v21; /*0x5e6197*/
          v22 = (void *)__2_YAPAXI_Z(8 * v18); /*0x5e61a2*/
          v23 = 4 * *(_DWORD *)(a2 + 8); /*0x5e61a7*/
          *(_DWORD *)a2 = v22; /*0x5e61ae*/
          memset(v22, 0, v23); /*0x5e61b3*/
          if ( v18 > 0 ) /*0x5e61be*/
          {
            v28.DeleteAndZero_field_0x04 = v28.DeleteAndZero_field_0x08; /*0x5e61c4*/
            do /*0x5e6206*/
            {
              v24 = *(_DWORD *)v28.DeleteAndZero_field_0x04; /*0x5e61cc*/
              if ( *(_DWORD *)v28.DeleteAndZero_field_0x04 ) /*0x5e61cc*/
              {
                do /*0x5e61f8*/
                {
                  v25 = (*(int (__thiscall **)(int))(a2 + 24))(v24) & ((1 << *(_DWORD *)(a2 + 12)) - 1); /*0x5e61e2*/
                  v26 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v25); /*0x5e61e6*/
                  *(_DWORD *)(*(_DWORD *)a2 + 4 * v25) = v24; /*0x5e61ec*/
                  v27 = *(_DWORD *)(v24 + 8); /*0x5e61ee*/
                  *(_DWORD *)(v24 + 8) = v26; /*0x5e61f1*/
                  v24 = v27; /*0x5e61f6*/
                }
                while ( v27 ); /*0x5e61f8*/
              }
              --v18; /*0x5e6201*/
              v28.DeleteAndZero_field_0x04 += 4; /*0x5e6202*/
            }
            while ( v18 ); /*0x5e6206*/
          }
          __3_YAXPAX_Z((void *)v28.DeleteAndZero_field_0x08); /*0x5e620d*/
        }
      }
    }
  }
  DeleteAndZero::Alt(&v28); /*0x5e6219*/
}



// ==== 0x005E6230  ProcessComboBoxAddString  this=-  sig=csp ====
void __fastcall ProcessComboBoxAddString(HWND hWnd, int a2)
{
  void (__stdcall *v2)(HWND, UINT, WPARAM, LPARAM); // esi
  LRESULT v5; // edi
  __int16 WindowLongA; // ax
  LPARAM v7; // edi
  ObjectClass *v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  DeleteAndZero *v13; // edi
  double v14; // st7
  bool v15; // c0
  bool v16; // c3
  wchar_t *v17; // eax
  LRESULT v18; // eax
  void *v19; // [esp+10h] [ebp-C10h] BYREF
  int DeleteAndZero_field_0x08; // [esp+14h] [ebp-C0Ch]
  __int64 v21; // [esp+18h] [ebp-C08h]
  wchar_t lParam[1024]; // [esp+20h] [ebp-C00h] BYREF
  unsigned __int8 v23[1024]; // [esp+820h] [ebp-400h] BYREF

  v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6239*/
  v5 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x5e6250*/
  DeleteAndZero_field_0x08 = v5; /*0x5e6256*/
  unknown_libname_74(&v19); /*0x5e625a*/
  if ( v5 ) /*0x5e6261*/
  {
    WindowLongA = GetWindowLongA(hWnd, -16); /*0x5e626a*/
    if ( (WindowLongA & 8) != 0 ) /*0x5e6272*/
    {
      v7 = 0; /*0x5e627c*/
      if ( DeleteAndZero_field_0x08 > 0 ) /*0x5e6280*/
      {
        while ( 1 ) /*0x5e628e*/
        {
          if ( ((LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))v2)(hWnd, 0x4CFu, v7, 0) ) /*0x5e6297*/
          {
            v2(hWnd, 0x4B6u, v7, (LPARAM)lParam); /*0x5e62a9*/
          }
          else
          {
            v2(hWnd, 0x4B7u, v7, (LPARAM)v23); /*0x5e62bc*/
            BulkCharToWide(lParam, v23, -1); /*0x5e62cb*/
          }
          WideString::Assign_Alt(&v19, lParam); /*0x5e62d9*/
          v8 = *(ObjectClass **)(*(_DWORD *)a2 /*0x5e62f4*/
                               + 4
                               * ((*(int (__thiscall **)(void **))(a2 + 24))(&v19) & ((1 << *(_DWORD *)(a2 + 12)) - 1)));
          if ( v8 ) /*0x5e62f9*/
          {
            while ( !SendMultiplayerStartSignal_Start_77EBA0_Start(v8, (const wchar_t **)&v19) ) /*0x5e6309*/
            {
              v8 = (ObjectClass *)v8->?; /*0x5e630b*/
              if ( !v8 ) /*0x5e6310*/
                goto LABEL_14; /*0x5e6310*/
            }
            SendMessageA(hWnd, 0x185u, 1u, v7); /*0x5e631d*/
          }
LABEL_14:
          if ( ++v7 >= DeleteAndZero_field_0x08 ) /*0x5e632a*/
            break; /*0x5e632a*/
          v2 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x5e6288*/
        }
      }
    }
    else if ( (WindowLongA & 0x4000) == 0 ) /*0x5e6338*/
    {
      v9 = *(_DWORD *)(a2 + 4); /*0x5e633e*/
      v10 = 0; /*0x5e6341*/
      if ( v9 ) /*0x5e6345*/
      {
        v11 = *(_DWORD *)(a2 + 8); /*0x5e634b*/
        v21 = (unsigned int)(v9 - 1); /*0x5e634f*/
        *(float *)&v21 = (double)v21 / (double)v11; /*0x5e6369*/
        if ( v11 > 0 ) /*0x5e636d*/
        {
          v12 = *(_DWORD **)a2; /*0x5e6375*/
          while ( !*v12 ) /*0x5e637a*/
          {
            ++v10; /*0x5e637c*/
            ++v12; /*0x5e637d*/
            if ( v10 >= v11 ) /*0x5e6382*/
              goto LABEL_30; /*0x5e6382*/
          }
          if ( v10 != -1 ) /*0x5e638c*/
          {
            WideString::Reassign_Alt(&v19, *(const wchar_t ***)(*(_DWORD *)a2 + 4 * v10)); /*0x5e639a*/
            v13 = *(DeleteAndZero **)(*(_DWORD *)a2 + 4 * v10); /*0x5e63a1*/
            DeleteAndZero_field_0x08 = v13->DeleteAndZero_field_0x08; /*0x5e63a9*/
            if ( v13 ) /*0x5e63ad*/
            {
              DeleteAndZero::Alt(v13); /*0x5e63b1*/
              __3_YAXPAX_Z(v13); /*0x5e63b7*/
            }
            v14 = *(float *)&v21; /*0x5e63c5*/
            *(_DWORD *)(*(_DWORD *)a2 + 4 * v10) = DeleteAndZero_field_0x08; /*0x5e63c9*/
            v15 = v14 < *(double *)(a2 + 32); /*0x5e63cf*/
            v16 = v14 == *(double *)(a2 + 32); /*0x5e63cf*/
            --*(_DWORD *)(a2 + 4); /*0x5e63d3*/
            if ( v15 || v16 ) /*0x5e63d8*/
              String_Process((ObjectClass *)a2); /*0x5e63df*/
            v17 = WideString::GetOrEmpty((wchar_t **)&v19); /*0x5e63e8*/
            wcscpy(lParam, v17); /*0x5e63f3*/
            v18 = SendMessageA(hWnd, 0x4CAu, 0xFFFFFFFF, (LPARAM)lParam); /*0x5e640e*/
            if ( v18 != -1 ) /*0x5e6413*/
              SendMessageA(hWnd, 0x186u, v18, 0); /*0x5e641e*/
          }
        }
      }
    }
  }
LABEL_30:
  DeleteAndZero::Alt((DeleteAndZero *)&v19); /*0x5e6420*/
}



// ==== 0x005E64C0  SessionClass::initPlayers  this=SessionClass  sig=csp ====
unsigned int __thiscall SessionClass::initPlayers(SessionClass *this)
{
  signed int PlayerCountMap; // esi
  int v3; // eax

  if ( this == (SessionClass *)-1 ) /*0x5e64c3*/
    return 8; /*0x5e64ca*/
  PlayerCountMap = ReadPlayerCountMap((int)this); /*0x5e64d7*/
  if ( dword_A8B23C ) /*0x5e64db*/
  {
    v3 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5e64df*/
    if ( v3 != -1 && v3 < PlayerCountMap ) /*0x5e64ec*/
      PlayerCountMap = v3; /*0x5e64ee*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e64f7*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e64f9*/
      return PlayerCountMap & 0xFFFFFFFE; /*0x5e6508*/
    if ( Network::IsMultiplayerActive() ) /*0x5e6509*/
      return 2; /*0x5e6512*/
  }
  return PlayerCountMap; /*0x5e64ca*/
}



// ==== 0x005E6520  ReadPlayerCountMap  this=AbstractClass  sig=csp ====
int __fastcall Map_ReadPlayerCount(int a1)
{
  int Int_Overwrite; // edi
  int i; // esi
  void *v4[4]; // [esp+Ch] [ebp-150h] BYREF
  _DWORD v5[3]; // [esp+1Ch] [ebp-140h] BYREF
  _DWORD v6[6]; // [esp+28h] [ebp-134h] BYREF
  char v7; // [esp+40h] [ebp-11Ch]
  int v8; // [esp+44h] [ebp-118h]
  int v9; // [esp+48h] [ebp-114h]
  _DWORD v10[22]; // [esp+4Ch] [ebp-110h] BYREF
  _BYTE v11[12]; // [esp+A4h] [ebp-B8h] BYREF
  int v12; // [esp+B0h] [ebp-ACh]
  char Buffer[32]; // [esp+B8h] [ebp-A4h] BYREF
  char Source[132]; // [esp+D8h] [ebp-84h] BYREF

  if ( a1 < 0 || a1 >= dword_A8B8D8 ) /*0x5e6539*/
    return 0; /*0x5e6539*/
  strcpy(Source, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e6565*/
  CCFileClass::Construct(v10, Source); /*0x5e657a*/
  v4[1] = 0; /*0x5e6583*/
  v4[2] = 0; /*0x5e6587*/
  GenericNode::Constructor(v5); /*0x5e658b*/
  GenericNode::Constructor(v6); /*0x5e6594*/
  LinkedList::Prepend(v5, (int)v6); /*0x5e65aa*/
  v4[3] = &List<INIClass::INISection *>::`vftable'; /*0x5e65b9*/
  memset(&v6[3], 0, 12); /*0x5e65c1*/
  v7 = 0; /*0x5e65cd*/
  v8 = 0; /*0x5e65d1*/
  v9 = 0; /*0x5e65d5*/
  v4[0] = &INIClass::`vftable'; /*0x5e65d9*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x5e65e1*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x5e65ee*/
    v10[0] = &CCFileClass::`vftable'; /*0x5e65fa*/
    v12 = 0; /*0x5e6602*/
    Vector::Clear((int)v11); /*0x5e6609*/
    v10[0] = &off_7E1668; /*0x5e6612*/
    BufferIOFileClass::Dtor(v10); /*0x5e661a*/
    return 0; /*0x5e662a*/
  }
  Int_Overwrite = 0; /*0x5e662b*/
  for ( i = 0; i < 8; ++i ) /*0x5e662d*/
  {
    sprintf(Buffer, "%d", i); /*0x5e663d*/
    if ( INIClass::ReadInt_Overwrite(g_INI_Key_Waypoints, Buffer, -1) != -1 ) /*0x5e6660*/
      ++Int_Overwrite; /*0x5e6662*/
  }
  if ( !Int_Overwrite ) /*0x5e666b*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite(aRandommap, aNumplayers, 0); /*0x5e6681*/
    if ( !Int_Overwrite ) /*0x5e6685*/
      Int_Overwrite = 8; /*0x5e6687*/
  }
  HashTable::DestroyHashTableINIClass(v4); /*0x5e6690*/
  v10[0] = &CCFileClass::`vftable'; /*0x5e669c*/
  v12 = 0; /*0x5e66a4*/
  Vector::Clear((int)v11); /*0x5e66ab*/
  v10[0] = &off_7E1668; /*0x5e66b4*/
  BufferIOFileClass::Dtor(v10); /*0x5e66bc*/
  return Int_Overwrite; /*0x5e661f*/
}



// ==== 0x005E66D0  MPCooperative_Helper  this=-  sig=ida-proto ====
LRESULT sub_5E66D0()
{
  return SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e66ea*/
}



// ==== 0x005E66F0  sub_5E66F0  this=-  sig=ida-proto ====
char sub_5E66F0()
{
  LRESULT v0; // eax
  LRESULT v1; // eax
  int v2; // esi
  _DWORD *v3; // edx
  void *v4; // ebx
  void *v5; // eax
  void *v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  const wchar_t *v9; // eax

  v0 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e670d*/
  if ( v0 != -1 ) /*0x5e6712*/
  {
    v1 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v0, 0); /*0x5e672c*/
    v2 = 0; /*0x5e6734*/
    if ( g_MultiplayerOptions > 0 ) /*0x5e6738*/
    {
      v3 = (_DWORD *)g_MultiplayerGameState; /*0x5e673e*/
      while ( v1 != *v3 ) /*0x5e6746*/
      {
        ++v2; /*0x5e6748*/
        ++v3; /*0x5e6749*/
        if ( v2 >= g_MultiplayerOptions ) /*0x5e674e*/
          goto LABEL_20; /*0x5e674e*/
      }
      if ( v2 != -1 && v2 != dword_AC0D30 ) /*0x5e6764*/
      {
        LoadScenarioClassByIndex(v2); /*0x5e676c*/
        if ( IsRandMap::Sed(*(_DWORD *)(g_MultiplayerGameState + 4 * v2)) ) /*0x5e677a*/
        {
          v4 = g_UIControlState; /*0x5e6783*/
          if ( g_UIControlState ) /*0x5e678b*/
          {
            ComPtr::Dtor(g_UIControlState); /*0x5e678f*/
            __3_YAXPAX_Z(v4); /*0x5e6795*/
          }
          v5 = __2_YAPAXI_Z(4u); /*0x5e679f*/
          if ( v5 ) /*0x5e67a9*/
            v6 = (void *)unknown_libname_27(v5); /*0x5e67ad*/
          else
            v6 = 0; /*0x5e67b4*/
          g_UIControlState = v6; /*0x5e67bd*/
          Surface::LoadToSurfaceSHP((char **)v6, ExistingFileName); /*0x5e67c2*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e67cc*/
            Session::PrepareGame(hDlg); /*0x5e67d7*/
          InvalidateRect(hDlg, 0, 0); /*0x5e67e7*/
          ScenarioClass::CopyStartPositions(); /*0x5e67ed*/
        }
        else
        {
          Session::PrepareGame(hDlg); /*0x5e67fa*/
        }
        dword_AC0D30 = v2; /*0x5e6805*/
        g_GameRulesOptions = dword_AC10E0; /*0x5e680b*/
        LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6811*/
      }
    }
  }
LABEL_20:
  v7 = hDlg; /*0x5e6816*/
  v8 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e682c*/
  if ( v8 == -1 || (v9 = (const wchar_t *)SendDlgItemMessageA(v7, 1363, 0x199u, v8, 0)) == 0 ) /*0x5e6845*/
    word_AC0EC8 = 0; /*0x5e6857*/
  else
    wcscpy(&word_AC0EC8, v9); /*0x5e684d*/
  if ( g_GameMode_Current[0] == 3 ) /*0x5e686b*/
  {
    Event::Dispatch(); /*0x5daf20*/
    NetworkLobby::MessageHandler(); /*0x5daf25*/
    return 0; /*0x5daf2a*/
  }
  else if ( g_GameMode_Current[0] == 4 ) /*0x5e6875*/
  {
    return Game::ProcessIdle(); /*0x5e6877*/
  }
  else
  {
    if ( g_GameMode_Current[0] == 1 || g_GameMode_Current[0] == 2 ) /*0x5e6884*/
    {
      if ( dword_ABF10C ) /*0x5bb268*/
      {
        CellClass::SetOccupancy(dword_ABF10C, 0); /*0x5bb26c*/
        ModemGuest::ProcessPacket(dword_ABF10C, 1); /*0x5bb279*/
      }
    }
    Event::Dispatch(); /*0x5e6886*/
    return 0; /*0x5e688b*/
  }
}



// ==== 0x005E68A0  SkirmishDialog::Show  this=ObjectClass  sig=csp ====
int __usercall SkirmishDialog::Show@<eax>(HWND hWndParent@<ecx>, int a2@<ebx>, int a3@<ebp>)
{
  int v4; // esi
  AudioController *v6; // [esp+0h] [ebp-4h]

  Screen::Capture(1, 0, a2, a3); /*0x5e68a7*/
  UI_Show(); /*0x5e68ac*/
  hDlg = (HWND)CreateDialogIndirect(g_hInstance, (HWND)0x6B, hWndParent, (DLGPROC)SkirmishSetup::DlgProc, 0); /*0x5e68d0*/
  SetupDialog(hDlg, 107); /*0x5e68d5*/
  SendMessageA(hDlg, 0x4A9u, 0, 1); /*0x5e68e9*/
  ShowWindow(hDlg, 1); /*0x5e68f8*/
  v4 = MessageDialogLoopAlt(hDlg, (unsigned __int8 (*)(void))sub_5E66F0, 0, 1, 1); /*0x5e6914*/
  AudioController::GetVolume(v6); /*0x5e6916*/
  return v4; /*0x5e691d*/
}



// ==== 0x005E6920  SkirmishSetup::DlgProc  this=SkirmishSetup  sig=csp ====
int __userpurge SkirmishSetup::DlgProc@<eax>(
        SkirmishSetup *this,
        int a2@<ebp>,
        HWND hWnd,
        signed int a4,
        WPARAM a5,
        char *a6)
{
  int v6; // ebx
  int result; // eax
  Dialog *v8; // esi
  Session *v9; // esi
  int v10; // ebx
  LRESULT v11; // eax
  char *v12; // edi
  int v13; // ebx
  HWND DlgItem; // eax
  SkirmishSetup *v15; // edi
  int v16; // ebx
  LRESULT v17; // eax
  LRESULT v18; // eax
  char *v19; // esi
  HWND v20; // eax
  HWND v21; // eax
  WPARAM v22; // ebx
  signed int v23; // esi
  const wchar_t *v24; // eax
  HWND v25; // esi
  LRESULT v26; // eax
  const wchar_t *v27; // eax
  wchar_t *v28; // eax
  WPARAM v29; // esi
  void **v30; // ebx
  int DlgCtrlID; // edi
  WPARAM v32; // esi
  LRESULT v33; // eax
  wchar_t *v34; // eax
  int First; // esi
  signed int v36; // ebx
  SkirmishSetup *v37; // edi
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  int v41; // eax
  WPARAM v42; // ebx
  signed int v43; // esi
  SkirmishSetup *v44; // eax
  Dialog *v45; // [esp+0h] [ebp-28h]
  ObjectClass *v46; // [esp+0h] [ebp-28h]
  SkirmishVector v47; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+20h] [ebp-8h]
  int v49; // [esp+24h] [ebp-4h]

  if ( (unsigned int)hWnd <= 0x111 ) /*0x5e6930*/
  {
    if ( hWnd != (HWND)273 ) /*0x5e6936*/
    {
      switch ( (unsigned int)hWnd ) /*0x5e694c*/
      {
        case 0xFu: /*0x5e694c*/
          v8 = (Dialog *)this; /*0x5e696b*/
          Dialog::DrawBackground((Dialog *)this); /*0x5e6971*/
          if ( g_UIControlState ) /*0x5e697e*/
            Skirmish::RenderPreview(g_UIControlState, (HWND)v8); /*0x5e6981*/
          Dialog::StopBink(v8); /*0x5e6988*/
          ValidateRect((HWND)v8, 0); /*0x5e6990*/
          return 0; /*0x5e699f*/
        case 0x14u: /*0x5e694c*/
          goto LABEL_5;
        case 0x2Bu: /*0x5e694c*/
          Dialog::Resize((char *)a5); /*0x5e6957*/
LABEL_5:
          result = 1; /*0x5e695c*/
          break; /*0x5e6968*/
        case 0x82u: /*0x5e694c*/
          DestroyDialog((ObjectClass *)this); /*0x5e69a6*/
          result = 0; /*0x5e69ae*/
          break; /*0x5e69b4*/
        default:
          return 0;
      }
      return result; /*0x5e69b4*/
    }
    if ( (unsigned __int16)a4 <= 0x6C5u ) /*0x5e69c7*/
    {
      switch ( (unsigned __int16)a4 ) /*0x5e69cd*/
      {
        case 0x6C5u: /*0x5e69cd*/
          HandleMultiplayerMapSelection((ObjectClass *)this); /*0x5e6b67*/
          return 0; /*0x5e6b75*/
        case 0x583u: /*0x5e69cd*/
          v9 = (Session *)this; /*0x5e69fd*/
          Dialog::IdleProcess(v45, (ObjectClass *)this); /*0x5e6a03*/
          ShowWindow((HWND)v9, 0); /*0x5e6a0b*/
          v10 = SkirmishSetup_Setup_5E8590(v46); /*0x5e6a16*/
          a5 = v10; /*0x5e6a1b*/
          if ( v10 == -1 ) /*0x5e6a1f*/
            goto LABEL_28; /*0x5e6a1f*/
          v11 = SendDlgItemMessageA((HWND)v9, 1771, 0x188u, 0, 0); /*0x5e6a3a*/
          if ( v11 != -1 ) /*0x5e6a3f*/
          {
            v12 = (char *)SendDlgItemMessageA((HWND)v9, 1771, 0x199u, v11, 0); /*0x5e6a55*/
            if ( v12 ) /*0x5e6a59*/
            {
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6a67*/
              a2 = dword_A8B8D8; /*0x5e6a6c*/
              v13 = 0; /*0x5e6a72*/
              v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6a76*/
              v49 = 10; /*0x5e6a7e*/
              for ( i = 0; v13 < a2; ++v13 ) /*0x5e6a8e*/
              {
                this = *(SkirmishSetup **)(dword_A8B8CC + 4 * v13); /*0x5e6a9c*/
                if ( (unsigned __int8)MapPreview::Check(v12, (int)this) ) /*0x5e6aa0*/
                  SkirmishVector::PushBack(&v47, &this); /*0x5e6ab2*/
              }
              DlgItem = GetDlgItem((HWND)v9, 1363); /*0x5e6ac2*/
              (*(void (__thiscall **)(char *, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)v12 + 76))( /*0x5e6ad4*/
                v12,
                DlgItem,
                &v47,
                0);
              v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6adb*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6ae3*/
              v10 = a5; /*0x5e6ae8*/
            }
          }
          if ( v10 < dword_A8B8D8 ) /*0x5e6af2*/
            SkirmishSetup_Setup_5E70D0((HWND)v9, *(_DWORD *)(dword_A8B8CC + 4 * v10)); /*0x5e6aff*/
          LoadScenarioClassByIndex(v10); /*0x5e6b06*/
          if ( !*(_DWORD *)g_UIControlState ) /*0x5e6b10*/
            Session::PrepareGame(v9); /*0x5e6b17*/
          *(_DWORD *)&stru_A8B250.__pad_0[4] = dword_AC10E0; /*0x5e6b22*/
          LoadScenarioClassByIndex(dword_AC10E0); /*0x5e6b28*/
          LOBYTE(v10) = HandleMultiplayerMapSelection((ObjectClass *)v9); /*0x5e6b38*/
          Screen::Capture(1, 0, v10, a2); /*0x5e6b3a*/
          if ( !(_BYTE)v10 ) /*0x5e6b41*/
          {
LABEL_28:
            SkirmishSetup::PlayButtonClickAnim((SkirmishSetup *)v9); /*0x5e6b49*/
            ShowWindow((HWND)v9, 5); /*0x5e6b51*/
            return 0; /*0x5e6b60*/
          }
          break;
        case 0x5C0u: /*0x5e69cd*/
          CloseDialog((HWND)this, 2); /*0x5e69ec*/
          return 0; /*0x5e69fa*/
      }
      return 0; /*0x5e69dd*/
    }
    if ( (unsigned __int16)a4 == 1771 && !byte_AC11C8 && HIWORD(a4) == 1 ) /*0x5e6b96*/
    {
      v15 = this; /*0x5e6b9c*/
      v16 = 0; /*0x5e6ba6*/
      v17 = SendDlgItemMessageA((HWND)this, 1771, 0x188u, 0, 0); /*0x5e6bb5*/
      if ( v17 != dword_8316FC && v17 != -1 ) /*0x5e6bc6*/
      {
        dword_8316FC = v17; /*0x5e6bd9*/
        v18 = SendDlgItemMessageA((HWND)v15, 1771, 0x188u, 0, 0); /*0x5e6bde*/
        if ( v18 != -1 ) /*0x5e6be3*/
        {
          v19 = (char *)SendDlgItemMessageA((HWND)v15, 1771, 0x199u, v18, 0); /*0x5e6bf8*/
          if ( v19 ) /*0x5e6bfc*/
          {
            unknown_libname_74(&this); /*0x5e6c06*/
            if ( (*(unsigned __int8 (__thiscall **)(char *, SkirmishSetup **))(*(_DWORD *)v19 + 12))(v19, &this) ) /*0x5e6c14*/
            {
              (*(void (__thiscall **)(char *))(*(_DWORD *)v19 + 16))(v19); /*0x5e6c23*/
              MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6c2c*/
              v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6c36*/
              v49 = 10; /*0x5e6c40*/
              i = 0; /*0x5e6c48*/
              hWnd = (HWND)dword_A8B8D8; /*0x5e6c4c*/
              if ( dword_A8B8D8 > 0 ) /*0x5e6c50*/
              {
                do /*0x5e6c7f*/
                {
                  a5 = *(_DWORD *)(dword_A8B8CC + 4 * v16); /*0x5e6c5d*/
                  if ( (unsigned __int8)MapPreview::Check(v19, a5) ) /*0x5e6c61*/
                    SkirmishVector::PushBack(&v47, &a5); /*0x5e6c73*/
                  ++v16; /*0x5e6c7c*/
                }
                while ( v16 < (int)hWnd ); /*0x5e6c7f*/
              }
              v20 = GetDlgItem((HWND)v15, 1363); /*0x5e6c8d*/
              (*(void (__thiscall **)(char *, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)v19 + 76))(v19, v20, &v47, 0); /*0x5e6c9b*/
              v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6ca2*/
              VectorClass::Cleanup3((int)&v47); /*0x5e6caa*/
              LOBYTE(a5) = (*(int (__thiscall **)(char *))(*(_DWORD *)v19 + 60))(v19); /*0x5e6cbc*/
              v21 = GetDlgItem((HWND)v15, 1411); /*0x5e6cc0*/
              EnableWindow(v21, (unsigned __int8)a5); /*0x5e6cce*/
              if ( &word_AC0EC8 ) /*0x5e6cdb*/
              {
                v22 = 0; /*0x5e6cdd*/
                v23 = 0; /*0x5e6cee*/
                a5 = SendDlgItemMessageA((HWND)v15, 1363, 0x18Bu, 0, 0); /*0x5e6cf2*/
                if ( (int)a5 > 0 ) /*0x5e6cf6*/
                {
                  do /*0x5e6d23*/
                  {
                    v24 = (const wchar_t *)SendDlgItemMessageA((HWND)v15, 1363, 0x199u, v23, 0); /*0x5e6d06*/
                    if ( !wcscmp(v24, &word_AC0EC8) ) /*0x5e6d0e*/
                      v22 = v23; /*0x5e6d1a*/
                    ++v23; /*0x5e6d20*/
                  }
                  while ( v23 < (int)a5 ); /*0x5e6d23*/
                }
                SendDlgItemMessageA((HWND)v15, 1363, 0x186u, v22, 0); /*0x5e6d33*/
                SendDlgItemMessageA((HWND)v15, 1363, 0x197u, v22, 0); /*0x5e6d43*/
              }
              v25 = hDlg; /*0x5e6d59*/
              v26 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e6d5b*/
              if ( v26 == -1 || (v27 = (const wchar_t *)SendDlgItemMessageA(v25, 1363, 0x199u, v26, 0)) == 0 ) /*0x5e6d74*/
              {
                word_AC0EC8 = 0; /*0x5e6da4*/
                byte_AC11C9 = 0; /*0x5e6dad*/
                DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6db4*/
                return 0; /*0x5e6dbc*/
              }
              else
              {
                wcscpy(&word_AC0EC8, v27); /*0x5e6d7c*/
                byte_AC11C9 = 0; /*0x5e6d88*/
                DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6d8f*/
                return 0; /*0x5e6d97*/
              }
            }
            else
            {
              if ( !byte_AC11C9 ) /*0x5e6dcc*/
              {
                v28 = WideString::GetOrEmpty((wchar_t **)&this); /*0x5e6dd4*/
                ShowDialogConfirm(v28, 0, 0, 0); /*0x5e6ddd*/
                byte_AC11C9 = 1; /*0x5e6de2*/
              }
              SendDlgItemMessageA((HWND)v15, 1771, 0x186u, 0, 0); /*0x5e6df6*/
              DeleteAndZero::Alt((DeleteAndZero *)&this); /*0x5e6dfc*/
              return 0; /*0x5e6e04*/
            }
          }
        }
      }
    }
    return 0; /*0x5e703b*/
  }
  if ( hWnd == (HWND)1175 ) /*0x5e6e12*/
  {
    byte_AC11C8 = 1; /*0x5e6eac*/
    First = MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5e6eb8*/
    v36 = 0; /*0x5e6eba*/
    if ( !First ) /*0x5e6ebe*/
      First = MultiplayerGameMode::GetFirst(); /*0x5e6ec5*/
    v37 = this; /*0x5e6ec7*/
    v38 = GetDlgItem((HWND)this, 1771); /*0x5e6ed7*/
    SkirmishSetup_Setup(v38, *(_DWORD *)(First + 40)); /*0x5e6ede*/
    if ( First ) /*0x5e6ee5*/
    {
      MultiMissionVector::Constructor((MultiMissionVector *)&v47, 0, 0); /*0x5e6ef1*/
      v47 = (SkirmishVector)&DynamicVectorClass<MultiMission const *>::`vftable'; /*0x5e6efb*/
      v49 = 10; /*0x5e6f05*/
      i = 0; /*0x5e6f0d*/
      a5 = dword_A8B8D8; /*0x5e6f11*/
      if ( dword_A8B8D8 > 0 ) /*0x5e6f15*/
      {
        do /*0x5e6f45*/
        {
          this = *(SkirmishSetup **)(dword_A8B8CC + 4 * v36); /*0x5e6f23*/
          if ( (unsigned __int8)MapPreview::Check((char *)First, (int)this) ) /*0x5e6f27*/
            SkirmishVector::PushBack(&v47, &this); /*0x5e6f39*/
          ++v36; /*0x5e6f42*/
        }
        while ( v36 < (int)a5 ); /*0x5e6f45*/
      }
      v39 = GetDlgItem((HWND)v37, 1363); /*0x5e6f4d*/
      (*(void (__thiscall **)(int, HWND, SkirmishVector *, _DWORD))(*(_DWORD *)First + 76))(First, v39, &v47, 0); /*0x5e6f5b*/
      v47 = (SkirmishVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5e6f62*/
      VectorClass::Cleanup3((int)&v47); /*0x5e6f6a*/
    }
    LOBYTE(this) = (*(int (__thiscall **)(int))(*(_DWORD *)First + 60))(First); /*0x5e6f7c*/
    v40 = GetDlgItem((HWND)v37, 1411); /*0x5e6f80*/
    EnableWindow(v40, (unsigned __int8)this); /*0x5e6f8e*/
    v41 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5e6f94*/
    if ( *(_DWORD *)&stru_A8B250.__pad_0[4] != -1 && *(int *)&stru_A8B250.__pad_0[4] < dword_A8B8D8 ) /*0x5e6fa8*/
    {
      this = *(SkirmishSetup **)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x5e6fb5*/
      if ( this ) /*0x5e6fb9*/
      {
        v42 = 0; /*0x5e6fc1*/
        v43 = 0; /*0x5e6fd2*/
        a5 = SendDlgItemMessageA((HWND)v37, 1363, 0x18Bu, 0, 0); /*0x5e6fd6*/
        if ( (int)a5 > 0 ) /*0x5e6fda*/
        {
          do /*0x5e6ffb*/
          {
            v44 = (SkirmishSetup *)SendDlgItemMessageA((HWND)v37, 1363, 0x199u, v43, 0); /*0x5e6fea*/
            if ( v44 == this ) /*0x5e6ff0*/
              v42 = v43; /*0x5e6ff2*/
            ++v43; /*0x5e6ff8*/
          }
          while ( v43 < (int)a5 ); /*0x5e6ffb*/
        }
        SendDlgItemMessageA((HWND)v37, 1363, 0x186u, v42, 0); /*0x5e700b*/
        SendDlgItemMessageA((HWND)v37, 1363, 0x197u, v42, 0); /*0x5e701b*/
        v41 = *(_DWORD *)&stru_A8B250.__pad_0[4]; /*0x5e701d*/
      }
    }
    dword_AC10E0 = v41; /*0x5e7022*/
    dword_AC0D30 = -1; /*0x5e7027*/
    byte_AC11C8 = 0; /*0x5e7031*/
    return 0; /*0x5e7031*/
  }
  if ( hWnd != (HWND)1257 ) /*0x5e6e1b*/
  {
    if ( hWnd == (HWND)1260 ) /*0x5e6e20*/
    {
      Screen::Capture(1, 0, v6, a2); /*0x5e6e2a*/
      Dialog::EnumAndCleanup((Dialog *)this); /*0x5e6e33*/
      return 0; /*0x5e6e41*/
    }
    return 0; /*0x5e6e20*/
  }
  v29 = a5; /*0x5e6e44*/
  v30 = (void **)(a5 + 8); /*0x5e6e51*/
  DlgCtrlID = GetDlgCtrlID(*(HWND *)a5); /*0x5e6e58*/
  WideString::Assign_Alt(v30, 0); /*0x5e6e5a*/
  if ( DlgCtrlID == 1771 ) /*0x5e6e65*/
  {
    v32 = *(_DWORD *)(v29 + 4); /*0x5e6e67*/
    if ( v32 != -1 ) /*0x5e6e6d*/
    {
      v33 = SendDlgItemMessageA((HWND)this, 1771, 0x199u, v32, 0); /*0x5e6e7d*/
      if ( v33 ) /*0x5e6e85*/
      {
        v34 = WideString::GetOrEmpty_Alt((wchar_t **)(v33 + 36)); /*0x5e6e8a*/
        WideString::Assign_Alt(v30, v34); /*0x5e6e92*/
      }
    }
  }
  return 1; /*0x5e695c*/
}



// ==== 0x005E70D0  SkirmishSetup_Setup_5E70D0  this=-  sig=csp ====
WPARAM __fastcall sub_5E70D0(HWND hDlg, int a2)
{
  WPARAM v4; // ebp
  signed int v5; // esi
  LRESULT v7; // [esp+8h] [ebp-4h]

  if ( !a2 ) /*0x5e70dc*/
    return -1; /*0x5e70de*/
  v4 = 0; /*0x5e70ee*/
  v5 = 0; /*0x5e7100*/
  v7 = SendDlgItemMessageA(hDlg, 1363, 0x18Bu, 0, 0); /*0x5e7104*/
  if ( v7 > 0 ) /*0x5e7108*/
  {
    do /*0x5e7129*/
    {
      if ( SendDlgItemMessageA(hDlg, 1363, 0x199u, v5, 0) == a2 ) /*0x5e711e*/
        v4 = v5; /*0x5e7120*/
      ++v5; /*0x5e7126*/
    }
    while ( v5 < v7 ); /*0x5e7129*/
  }
  SendDlgItemMessageA(hDlg, 1363, 0x186u, v4, 0); /*0x5e7139*/
  SendDlgItemMessageA(hDlg, 1363, 0x197u, v4, 0); /*0x5e7149*/
  return v4; /*0x5e70e1*/
}



// ==== 0x005E7160  ObjectClass::HandleMultiplayerMapSelection  this=ObjectClass  sig=csp ====
char __thiscall HandleMultiplayerMapSelection(ObjectClass *this)
{
  LRESULT v1; // eax
  LRESULT v2; // eax
  int v3; // esi
  _DWORD *i; // edx
  ObjectClass *v6; // ebp
  LRESULT v7; // esi
  HWND v8; // ebx
  LRESULT v9; // eax
  int PlayerCountMap; // edi
  int v11; // eax
  ObjectClass *v12; // ecx
  char v13; // bl
  char v14; // al
  wchar_t *v15; // ecx
  int *StringCSF; // edi
  wchar_t *v17; // ebx
  wchar_t *v18; // eax
  int v19; // eax
  HWND v20; // edi
  HWND DlgItem; // ebx
  wchar_t *v22; // eax
  LPARAM v23; // ebx
  HWND v24; // eax
  int v25; // [esp+0h] [ebp-20h]
  char v26; // [esp+13h] [ebp-Dh]
  int v27; // [esp+14h] [ebp-Ch]
  char v28; // [esp+18h] [ebp-8h]

  v1 = SendDlgItemMessageA(hDlg, 1363, 0x188u, 0, 0); /*0x5e7185*/
  if ( v1 == -1 ) /*0x5e718a*/
    return 0; /*0x5e718a*/
  v2 = SendDlgItemMessageA(hDlg, 1363, 0x199u, v1, 0); /*0x5e71a0*/
  v3 = 0; /*0x5e71a8*/
  if ( dword_A8B8D8 <= 0 ) /*0x5e71b0*/
    return 0; /*0x5e71b0*/
  for ( i = (_DWORD *)dword_A8B8CC; v2 != *i; ++i ) /*0x5e71b2*/
  {
    if ( ++v3 >= dword_A8B8D8 ) /*0x5e71c2*/
      return 0; /*0x5e71d1*/
  }
  v27 = v3; /*0x5e71d5*/
  if ( v3 == -1 ) /*0x5e71d9*/
    return 0; /*0x5e71e4*/
  v6 = dword_A8B23C; /*0x5e71ea*/
  v7 = 0; /*0x5e71f0*/
  v8 = hDlg; /*0x5e71f2*/
  v9 = SendDlgItemMessageA(hDlg, 1771, 0x188u, 0, 0); /*0x5e7201*/
  if ( v9 != -1 ) /*0x5e7206*/
    v7 = SendDlgItemMessageA(v8, 1771, 0x199u, v9, 0); /*0x5e7217*/
  dword_A8B23C = (ObjectClass *)v7; /*0x5e7219*/
  v26 = (*(int (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 64))(v7); /*0x5e7226*/
  v28 = (*(int (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 188))(v7); /*0x5e7238*/
  PlayerCountMap = ReadPlayerCountMap(v27); /*0x5e7247*/
  if ( dword_A8B23C ) /*0x5e724b*/
  {
    v11 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5e724f*/
    if ( v11 != -1 && v11 < PlayerCountMap ) /*0x5e725c*/
      PlayerCountMap = v11; /*0x5e725e*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e7267*/
  {
    if ( Network::IsLobbyFeature() ) /*0x5e7269*/
    {
      PlayerCountMap &= ~1u; /*0x5e7272*/
    }
    else if ( Network::IsMultiplayerActive() ) /*0x5e7277*/
    {
      PlayerCountMap = 2; /*0x5e7280*/
    }
  }
  v12 = v6; /*0x5e728a*/
  v13 = 0; /*0x5e728c*/
  dword_A8B23C = v6; /*0x5e7291*/
  switch ( *(_DWORD *)&dword_A8B238 ) /*0x5e7297*/
  {
    case 3: /*0x5e7297*/
      v14 = Map_Handle(PlayerCountMap, v26, v28); /*0x5e72cb*/
      break;
    case 4: /*0x5e7297*/
      v14 = Map_Handle_7A2800(PlayerCountMap, v26, v28); /*0x5e72b9*/
      break;
    case 5: /*0x5e7297*/
      v14 = Map_Handle_6ACCA0(PlayerCountMap); /*0x5e72a5*/
      v13 = 1; /*0x5e72aa*/
      break;
    default:
      goto LABEL_32; /*0x5e729d*/
  }
  if ( v14 ) /*0x5e72d2*/
  {
    v15 = (wchar_t *)aGuiEjectplayer; /*0x5e72d6*/
    if ( v13 ) /*0x5e72db*/
      v15 = aGuiEjectaiplay; /*0x5e72dd*/
    StringCSF = (int *)GetStringCSF(v15, 0, g_Str_File_netshare_cpp, 2963); /*0x5e7304*/
    v17 = GetStringCSF(aGuiOk, 0, g_Str_File_netshare_cpp, 2964); /*0x5e731c*/
    v18 = GetStringCSF(aGuiCancel, 0, g_Str_File_netshare_cpp, 2965); /*0x5e731e*/
    if ( Dialog::ShowMessageBox(StringCSF, v17, v18, 0, 0, v25) ) /*0x5e7336*/
      return 0; /*0x5e7348*/
  }
  v12 = dword_A8B23C; /*0x5e7349*/
LABEL_32:
  if ( (ObjectClass *)v7 != v12 ) /*0x5e7351*/
  {
    if ( v12 ) /*0x5e7355*/
      (*((void (__thiscall **)(ObjectClass *))v12->AbstractClass + 39))(v12); /*0x5e7359*/
    if ( v7 ) /*0x5e7361*/
    {
      dword_A8B23C = (ObjectClass *)v7; /*0x5e7367*/
      v19 = *(_DWORD *)(v7 + 40); /*0x5e736d*/
      *(_DWORD *)&stru_A8B250.__pad_0[4] = v27; /*0x5e7370*/
      *(_DWORD *)stru_A8B250.__pad_0 = v19; /*0x5e7376*/
      (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 32))(v7); /*0x5e737f*/
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[4] = v27; /*0x5e7388*/
  if ( v7 ) /*0x5e738d*/
    (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 36))(v7); /*0x5e7393*/
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 24))(v7); /*0x5e739a*/
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 124))(v7); /*0x5e73a1*/
  CloseDialog((HWND)this, 1); /*0x5e73ad*/
  v20 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e73bc*/
  if ( !v20 ) /*0x5e73c0*/
  {
    v20 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e73cc*/
    if ( !v20 ) /*0x5e73d0*/
    {
      v20 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e73dc*/
      if ( !v20 ) /*0x5e73e0*/
        v20 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e73ec*/
    }
  }
  if ( v7 ) /*0x5e73f6*/
  {
    DlgItem = GetDlgItem(v20, 1772); /*0x5e7403*/
    v22 = WideString::GetOrEmpty_Alt((wchar_t **)(v7 + 32)); /*0x5e7405*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v22); /*0x5e7413*/
  }
  if ( *(int *)&stru_A8B250.__pad_0[4] >= 0 && *(int *)&stru_A8B250.__pad_0[4] < dword_A8B8D8 ) /*0x5e7428*/
  {
    v23 = *(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4]); /*0x5e7430*/
    if ( v23 ) /*0x5e7435*/
    {
      v24 = GetDlgItem(v20, 1448); /*0x5e743d*/
      SendMessageA(v24, 0x4B2u, 0, v23); /*0x5e7448*/
    }
  }
  (*(void (__thiscall **)(LRESULT))(*(_DWORD *)v7 + 96))(v7); /*0x5e7452*/
  return 1; /*0x5e71c8*/
}



// ==== 0x005E7460  Scenario::PreGameInit  this=AbstractClass  sig=ida-proto ====
int Scenario_PreGameInit()
{
  int v0; // edx
  int v1; // eax

  *((_DWORD *)dword_A8B230 + 1173) = MEMORY[0xA8B254]; /*0x5e746b*/
  dword_A8ED84 = 0; /*0x5e747c*/
  dword_A8B54C = dword_A8DA84; /*0x5e7486*/
  Debug::Log("Pregame setup for %d players.\n", dword_A8DA84); /*0x5e748b*/
  *(_DWORD *)dword_A8EB60 = MEMORY[0xA8B268]; /*0x5e74aa*/
  v0 = dword_A8E960; /*0x5e74b0*/
  BYTE1(v0) = BYTE1(dword_A8E960) & 0x77; /*0x5e74bb*/
  v1 = v0 | ((byte_A8B31D & 1 | (16 * (MEMORY[0xA8B260] & 1))) << 11); /*0x5e74c1*/
  dword_A8B24C = 2; /*0x5e74c3*/
  LOBYTE(v1) = dword_A8E960 | 0xC0; /*0x5e74cd*/
  dword_A8E960 = v1; /*0x5e74d4*/
  return nullsub_37(&dword_A8E960);
}



// ==== 0x005E74E0  Session::PrepareGame  this=Session  sig=csp ====
int __thiscall Session::PrepareGame(Session *this)
{
  Skirmish *v1; // esi
  int v3; // eax
  char *Flagged; // eax
  char *v5; // eax
  int result; // eax
  char v7; // bl
  Skirmish *v8; // esi
  int v9; // esi
  int v10; // edi
  int v11; // esi
  Skirmish *v12; // esi
  _DWORD *v13; // eax
  char v14; // al
  bool v15; // bl
  ScenarioClass *v16; // [esp+0h] [ebp-208h]
  int v17; // [esp+10h] [ebp-1F8h]
  RawFileClass v18; // [esp+1Ch] [ebp-1ECh] BYREF
  _BYTE Str[452]; // [esp+40h] [ebp-1C8h] BYREF
  __int16 v20; // [esp+204h] [ebp-4h]
  char v21; // [esp+206h] [ebp-2h]

  v1 = g_UIControlState; /*0x5e74e9*/
  if ( g_UIControlState ) /*0x5e74f6*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e74fa*/
    __3_YAXPAX_Z(v1); /*0x5e7500*/
  }
  g_UIControlState = 0; /*0x5e7513*/
  switch ( *(_DWORD *)&dword_A8B238 ) /*0x5e7521*/
  {
    case 1: /*0x5e7521*/
    case 2: /*0x5e7521*/
      if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) ) /*0x5e774c*/
        goto LABEL_42; /*0x5e7753*/
      memset(Str, 0, 250); /*0x5e7764*/
      *(_DWORD *)Str = 119; /*0x5e776c*/
      result = Timer::GetTicks(); /*0x5e7774*/
      v9 = 1800; /*0x5e7779*/
      v17 = result; /*0x5e777e*/
      while ( 1 ) /*0x5e778f*/
      {
        if ( v17 != -1 ) /*0x5e7793*/
        {
          result = Timer::GetTicks() - v17; /*0x5e779e*/
          if ( result >= 1800 ) /*0x5e77a4*/
            return result; /*0x5e77a4*/
          v9 = 1800 - result; /*0x5e77aa*/
        }
        if ( !v9 ) /*0x5e77ae*/
          return result; /*0x5e7812*/
        v10 = Stream::WriteBlock((int *)&unk_A8EA70, (int)Str, 250, 1); /*0x5e77cf*/
        for ( result = Count::GetCountQueue((Count *)&unk_A8EA70); /*0x5e77d8*/
              result > 0;
              result = Count::GetCountQueue((Count *)&unk_A8EA70) )
        {
          result = v17; /*0x5e77da*/
          v11 = 1800; /*0x5e77de*/
          if ( v17 != -1 ) /*0x5e77e4*/
          {
            result = Timer::GetTicks() - v17; /*0x5e77ef*/
            if ( result >= 1800 ) /*0x5e77f5*/
              break; /*0x5e77f5*/
            v11 = 1800 - result; /*0x5e77f7*/
          }
          if ( !v11 ) /*0x5e77fb*/
            break; /*0x5e77fb*/
          Event::Dispatch(); /*0x5e77fd*/
        }
        if ( v10 ) /*0x5e7812*/
          return result; /*0x5e7812*/
        v9 = 1800; /*0x5e778b*/
      }
    case 3: /*0x5e7521*/
      if ( Dialog::GetCurrentType() != 189 /*0x5e7550*/
        || FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) )
      {
        goto LABEL_42; /*0x5e7557*/
      }
      InvalidateRect((HWND)this, 0, 0); /*0x5e7560*/
      memset(Str, 0, sizeof(Str)); /*0x5e7571*/
      v20 = 0; /*0x5e7573*/
      v21 = 0; /*0x5e7575*/
      *(_DWORD *)Str = 27; /*0x5e7576*/
      break; /*0x5e7576*/
    case 4: /*0x5e7521*/
      if ( !Dialog::FindByHandle((Dialog *)0xC9) ) /*0x5e7609*/
        goto LABEL_42; /*0x5e7609*/
      v7 = 0; /*0x5e762e*/
      if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, dword_A8BB08, 0) ) /*0x5e7630*/
      {
        strcpy(Str, byte_A8B8E0); /*0x5e765a*/
        _strupr(Str); /*0x5e7668*/
        Debug::Log(); /*0x5e7677*/
        if ( !dword_A8BB08 && strstr(Str, aMpr) && strstr(Str, aYrm) ) /*0x5e76a8*/
          goto LABEL_42; /*0x5e76a8*/
        RawFileClass::Construct(&v18, (int)byte_A8B8E0); /*0x5e76c1*/
        if ( (unsigned __int8)FileClass::Open(&v18, 0) ) /*0x5e76cc*/
          v7 = 1; /*0x5e76d5*/
        RawFileClass::Dtor(&v18); /*0x5e76db*/
        if ( !v7 ) /*0x5e76e2*/
        {
LABEL_42:
          v12 = g_UIControlState; /*0x5e7825*/
          if ( g_UIControlState ) /*0x5e782d*/
          {
            ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e7831*/
            __3_YAXPAX_Z(v12); /*0x5e7837*/
            g_UIControlState = 0; /*0x5e783f*/
          }
          goto LABEL_44; /*0x5e783f*/
        }
      }
      if ( (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5e76ef*/
        return InvalidateRect((HWND)this, 0, 0); /*0x5e76ef*/
      v8 = g_UIControlState; /*0x5e76fc*/
      if ( !g_UIControlState ) /*0x5e7704*/
        return InvalidateRect((HWND)this, 0, 0); /*0x5e7704*/
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e770c*/
      __3_YAXPAX_Z(v8); /*0x5e7712*/
      g_UIControlState = 0; /*0x5e771a*/
      return InvalidateRect((HWND)this, 0, 0); /*0x5e7733*/
    default:
LABEL_44:
      v13 = CCFileClass::Construct((CCFileClass *)Str, byte_A8B8E0); /*0x5e7845*/
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x5e7858*/
      *(_DWORD *)Str = &CCFileClass::`vftable'; /*0x5e7864*/
      v15 = v14 == 0; /*0x5e786c*/
      *(_DWORD *)&Str[100] = 0; /*0x5e786f*/
      Vector::Clear((int)&Str[88]); /*0x5e7876*/
      *(_DWORD *)Str = &off_7E1668; /*0x5e787f*/
      result = BufferIOFileClass::Dtor((BufferIOFileClass *)Str); /*0x5e7887*/
      if ( !v15 ) /*0x5e788e*/
      {
        result = __2_YAPAXI_Z(4u); /*0x5e7892*/
        if ( !result ) /*0x5e789c*/
        {
          g_UIControlState = 0; /*0x5e78e4*/
          return result; /*0x5e78f4*/
        }
        result = (int)unknown_libname_27((ObjectClass *)result); /*0x5e78a0*/
        g_UIControlState = (Skirmish *)result; /*0x5e78a5*/
      }
      if ( g_UIControlState ) /*0x5e78b0*/
      {
        if ( (unsigned __int8)IsRandMap::Sed2((IsRandMap *)&dword_A8B238) ) /*0x5e78b7*/
        {
          ScenarioClass::CopyStartPositions(v16); /*0x5e78f5*/
          return InvalidateRect((HWND)this, 0, 0); /*0x5e78fa*/
        }
        else
        {
          PreviewClass::ReadPreview((PreviewClass *)g_UIControlState, byte_A8B8E0); /*0x5e78cb*/
          return InvalidateRect((HWND)this, 0, 0); /*0x5e78d3*/
        }
      }
      return result;
  }
  while ( 1 ) /*0x5e757e*/
  {
    if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e7584*/
    {
      v3 = Network::SendMessage(&unk_A8E9C0.Socket, (int)Str, 47, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e759d*/
    }
    else
    {
      Flagged = GameSettings::FindFlagged(); /*0x5e75a4*/
      if ( !Flagged ) /*0x5e75ab*/
        goto LABEL_12; /*0x5e75ab*/
      v5 = CharToWideString(Flagged + 36); /*0x5e75b0*/
      v3 = Network::SendToPlayer((int)&unk_A8E9C0, (int)Str, 47, 1, (wchar_t *)v5); /*0x5e75c4*/
    }
    if ( v3 ) /*0x5e75cb*/
    {
      for ( result = Network::GetQueueCount(&unk_A8E9C0); result; result = Network::GetQueueCount(&unk_A8E9C0) ) /*0x5e75e0*/
        Event::Dispatch(); /*0x5e75e6*/
      return result; /*0x5e75f7*/
    }
LABEL_12:
    Event::Dispatch(); /*0x5e75cd*/
  }
}



// ==== 0x005E7920  ExchangeMultiplayerGameInfo  this=-  sig=ida-proto ====
void ExchangeMultiplayerGameInfo()
{
  int v0; // eax
  char *FlaggedGameSettings; // eax
  char *v2; // eax
  int FileSize; // edi
  char *v4; // esi
  signed int v5; // ebx
  char *v6; // edi
  void *v7; // ebx
  void *v8; // eax
  void *v9; // eax
  HWND CurrentDialog; // eax
  int v11[3]; // [esp+8h] [ebp-330h] BYREF
  _DWORD v12[4]; // [esp+14h] [ebp-324h] BYREF
  int v13[9]; // [esp+24h] [ebp-314h] BYREF
  int v14[10]; // [esp+48h] [ebp-2F0h] BYREF
  int v15[113]; // [esp+70h] [ebp-2C8h] BYREF
  __int16 v16; // [esp+234h] [ebp-104h]
  char v17; // [esp+236h] [ebp-102h]
  char v18[256]; // [esp+238h] [ebp-100h] BYREF

  Network::SetConnectionParams(unk_A8E9C0, 50, -1, 5000, 1); /*0x5e7938*/
  Debug::Log(); /*0x5e7942*/
  memset(v15, 0, sizeof(v15)); /*0x5e7957*/
  v16 = 0; /*0x5e7959*/
  v17 = 0; /*0x5e795b*/
  v15[0] = 26; /*0x5e795c*/
  Debug::Log(); /*0x5e7964*/
  while ( 1 ) /*0x5e7977*/
  {
    if ( dword_A8B238[0] == 3 ) /*0x5e7977*/
    {
      v0 = Network::SendMessage((int)unk_A8E9C0, (int)v15, 455, 1, (int)&stru_A8BB1C, 0, 0); /*0x5e7996*/
    }
    else
    {
      FlaggedGameSettings = GameSettings::FindFlagged(); /*0x5e799d*/
      if ( !FlaggedGameSettings ) /*0x5e79a4*/
        break; /*0x5e79a4*/
      v2 = CharToWideString(FlaggedGameSettings + 36); /*0x5e79a9*/
      v0 = Network::SendToPlayer((int)unk_A8E9C0, (int)v15, 455, 1, (wchar_t *)v2); /*0x5e79c0*/
    }
    if ( v0 ) /*0x5e79c7*/
      break; /*0x5e79c7*/
    Event::Dispatch(); /*0x5e79c9*/
  }
  while ( Network::GetQueueCount((int)unk_A8E9C0) ) /*0x5e79d5*/
    Event::Dispatch(); /*0x5e79de*/
  Debug::Log(); /*0x5e79f6*/
  dword_A8D804 = stru_A8BB1C; /*0x5e7a11*/
  dword_A8D808 = dword_A8BB20; /*0x5e7a17*/
  dword_A8D80C = dword_A8BB24; /*0x5e7a1c*/
  Debug::Log(); /*0x5e7a22*/
  if ( RequestNetworkFile(v18, 3, 0) ) /*0x5e7a35*/
  {
    Debug::Log(); /*0x5e7a6f*/
    RawFileClass::Construct(v13, (int)v18); /*0x5e7a83*/
    FileSize = CCFileClass::GetFileSize(v13); /*0x5e7a91*/
    v4 = (char *)__2_YAPAXI_Z(FileSize); /*0x5e7a9c*/
    FileClass::Read(v13, v4, FileSize); /*0x5e7aa4*/
    v5 = *(_DWORD *)v4; /*0x5e7aa9*/
    Debug::Log(); /*0x5e7ab0*/
    v11[1] = 0; /*0x5e7abf*/
    v11[2] = 0; /*0x5e7ac9*/
    Buffer::Init(v12, (int)(v4 + 4), FileSize); /*0x5e7ad9*/
    v12[3] = 0; /*0x5e7ae2*/
    v11[0] = (int)&BufferStraw::`vftable'; /*0x5e7af1*/
    LZOStraw::Constructor(v14, 1, 0x2000); /*0x5e7af9*/
    Delegate::Set(v14, (int)v11); /*0x5e7b07*/
    v6 = (char *)__2_YAPAXI_Z(2 * v5); /*0x5e7b18*/
    LCW::Decompress((int)v14, v6, v5); /*0x5e7b20*/
    Debug::Log(); /*0x5e7b2a*/
    if ( g_UIControlState ) /*0x5e7b39*/
    {
      v7 = g_UIControlState; /*0x5e7b3b*/
      ComPtr::Dtor(g_UIControlState); /*0x5e7b43*/
      __3_YAXPAX_Z(v7); /*0x5e7b49*/
    }
    v8 = __2_YAPAXI_Z(4u); /*0x5e7b53*/
    if ( v8 ) /*0x5e7b5e*/
      v9 = (void *)unknown_libname_27(v8); /*0x5e7b62*/
    else
      v9 = 0; /*0x5e7b69*/
    g_UIControlState = v9; /*0x5e7b6e*/
    ModemGame::RenderPaletteImage(v6); /*0x5e7b73*/
    CurrentDialog = Dialog::GetCurrent(); /*0x5e7b7c*/
    InvalidateRect(CurrentDialog, 0, 0); /*0x5e7b82*/
    Debug::Log(); /*0x5e7b8d*/
    __3_YAXPAX_Z(v6); /*0x5e7b93*/
    __3_YAXPAX_Z(v4); /*0x5e7b99*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7bb1*/
    LZOStraw::Destructor(v14); /*0x5e7bba*/
    Vector::Clear((int)v12); /*0x5e7bc3*/
    Straw::Dtor(v11); /*0x5e7bcc*/
    RawFileClass::Dtor(v13); /*0x5e7bd5*/
  }
  else
  {
    Debug::Log(); /*0x5e7a43*/
    Network::SetConnectionParams(unk_A8E9C0, 30, -1, 600, 1); /*0x5e7a5b*/
  }
}



// ==== 0x005E7BF0  LoadScenarioClassByIndex  this=AbstractClass  sig=ida-proto ====
char __fastcall LoadScenarioClassByIndex(int a1)
{
  char result; // al
  _DWORD *v3; // eax
  char v4; // al
  bool v5; // bl
  int **v6; // esi
  int v7; // eax
  int Field; // eax
  int *v9; // eax
  char *v10; // eax
  int PlayerCountMap; // esi
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-90h]
  int v16; // [esp+0h] [ebp-80h]
  _DWORD v17[22]; // [esp+14h] [ebp-6Ch] BYREF
  int v18[3]; // [esp+6Ch] [ebp-14h] BYREF
  int v19; // [esp+78h] [ebp-8h]

  if ( a1 == -1 ) /*0x5e7bfb*/
  {
    dword_A8BB04 = 0; /*0x5e7c00*/
    LOBYTE(dword_A8BB08) = 0; /*0x5e7c05*/
    dword_A8BB0C = 0; /*0x5e7c0a*/
    HIWORD(dword_A8B320) = 0; /*0x5e7c0f*/
    byte_A8B8E0 = 0; /*0x5e7c16*/
    byte_A8BAE2 = 0; /*0x5e7c1d*/
    return 0; /*0x5e7c2a*/
  }
  v3 = CCFileClass::Construct(v17, (char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7c3b*/
  v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x5e7c46*/
  v17[0] = &CCFileClass::`vftable'; /*0x5e7c4f*/
  v5 = v4 == 0; /*0x5e7c57*/
  v19 = 0; /*0x5e7c5a*/
  Vector::Clear((int)v18); /*0x5e7c62*/
  v17[0] = &off_7E1668; /*0x5e7c6b*/
  BufferIOFileClass::Dtor(v17); /*0x5e7c73*/
  if ( !v5 ) /*0x5e7c7a*/
    goto LABEL_9; /*0x5e7c7a*/
  if ( dword_81C1D0 == -2 ) /*0x5e7c87*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7cfe*/
    v9 = (int *)GetStringCSF(aTxtUnableReadS, 0, g_Str_File_netshare_cpp, 3627); /*0x5e7d09*/
    Dialog::ShowMessageBox(v9, StringCSF, 0, 0, 0, v16); /*0x5e7d13*/
    return 0; /*0x5e7d20*/
  }
  v6 = (int **)(dword_A8B8CC + 4 * a1); /*0x5e7c93*/
  v7 = Game::CheckForGameCD((void *)0x3C); /*0x5e7c96*/
  if ( (unsigned __int8)ScenarioClass::CheckExists(*v6, v7) /*0x5e7cca*/
    || (Field = GameOption::GetField(*(_DWORD ***)(dword_A8B8CC + 4 * a1)), (result = CD::`vftable'(Field)) != 0) )
  {
LABEL_9:
    wcscpy((wchar_t *)&dword_A8B320 + 1, *(const wchar_t **)(dword_A8B8CC + 4 * a1)); /*0x5e7d31*/
    strcpy(&byte_A8BAE2, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 348)); /*0x5e7d5f*/
    v10 = dword_A8B230; /*0x5e7d7e*/
    strcpy(&byte_A8B8E0, (const char *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 88)); /*0x5e7d8f*/
    strcpy(v10 + 4700, &byte_A8B8E0); /*0x5e7db7*/
    LOBYTE(dword_A8BB08) = *(_BYTE *)(*(_DWORD *)(dword_A8B8CC + 4 * a1) + 380); /*0x5e7dd1*/
    PlayerCountMap = ReadPlayerCountMap(a1); /*0x5e7de5*/
    if ( dword_A8B23C ) /*0x5e7de7*/
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 152))(dword_A8B23C); /*0x5e7deb*/
      if ( v12 != -1 && v12 < PlayerCountMap ) /*0x5e7df8*/
        PlayerCountMap = v12; /*0x5e7dfa*/
    }
    if ( dword_A8B238[0] == 4 ) /*0x5e7e03*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5e7e05*/
      {
        PlayerCountMap &= ~1u; /*0x5e7e0e*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5e7e13*/
      {
        PlayerCountMap = 2; /*0x5e7e1c*/
      }
    }
    dword_A8BB0C = PlayerCountMap; /*0x5e7e2a*/
    v13 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e30*/
    dword_A8BB04 = (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13); /*0x5e7e45*/
    v17[0] = &CCFileClass::`vftable'; /*0x5e7e4a*/
    v19 = 0; /*0x5e7e4e*/
    Vector::Clear((int)v18); /*0x5e7e52*/
    v17[0] = &off_7E1668; /*0x5e7e60*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e64*/
    v14 = CCFileClass::Construct(v17, &byte_A8B8E0); /*0x5e7e72*/
    dword_A8BB04 = (*(int (__thiscall **)(_DWORD *))(*v14 + 44))(v14); /*0x5e7e82*/
    v17[0] = &CCFileClass::`vftable'; /*0x5e7e87*/
    v19 = 0; /*0x5e7e8b*/
    Vector::Clear((int)v18); /*0x5e7e8f*/
    v17[0] = &off_7E1668; /*0x5e7e98*/
    BufferIOFileClass::Dtor(v17); /*0x5e7e9c*/
    return 1; /*0x5e7ea1*/
  }
  return result; /*0x5e7bff*/
}



// ==== 0x005E7EB0  MapPreview::Upload  this=MapPreview  sig=csp ====
int __thiscall MapPreview::Upload(MapPreview *this)
{
  int result; // eax
  int i; // ebp
  int *v4; // eax
  int v5; // esi
  int v6; // edi
  size_t v7; // eax
  int v8; // esi
  unsigned int PlayerName; // eax
  int v10; // ecx
  int j; // esi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // esi
  void *v19; // ebp
  void *v20; // esi
  int v21; // edi
  DWORD v22; // edi
  size_t *v23; // [esp+0h] [ebp-588h]
  int Ticks; // [esp+10h] [ebp-578h]
  int v25; // [esp+10h] [ebp-578h]
  size_t Size[2]; // [esp+1Ch] [ebp-56Ch] BYREF
  Palette *v27; // [esp+24h] [ebp-564h]
  _DWORD v28[2]; // [esp+28h] [ebp-560h] BYREF
  int v29; // [esp+30h] [ebp-558h] BYREF
  int v30; // [esp+36h] [ebp-552h] BYREF
  Pipe v31; // [esp+44h] [ebp-544h] BYREF
  int v32; // [esp+5Ch] [ebp-52Ch]
  Waypoint v33; // [esp+60h] [ebp-528h] BYREF
  char v34[64]; // [esp+B8h] [ebp-4D0h] BYREF
  char Buffer[256]; // [esp+F8h] [ebp-490h] BYREF
  int v36[113]; // [esp+1F8h] [ebp-390h] BYREF
  __int16 v37; // [esp+3BCh] [ebp-1CCh]
  char v38; // [esp+3BEh] [ebp-1CAh]
  int v39[114]; // [esp+3C0h] [ebp-1C8h] BYREF

  v27 = (Palette *)this; /*0x5e7ec0*/
  result = Timer::GetTicks(); /*0x5e7ec4*/
  if ( this ) /*0x5e7ed7*/
  {
    result = dword_A8DA84; /*0x5e7edd*/
    if ( dword_A8DA84 > 1 ) /*0x5e7ee9*/
    {
      if ( dword_A8B230 ) /*0x5e7ef6*/
      {
        sprintf( /*0x5e7f2e*/
          Buffer,
          "%c%d,%d,%d,%d,%d",
          87,
          dword_A8B230[122].ptr_C,
          dword_A8B230[122].uniqueId,
          dword_A8B230[122].ptr_4,
          dword_A8B230[122].ptr_8,
          dword_A8B230[122].abstractFlags);
        for ( i = 0; i < 8; ++i ) /*0x5e7f36*/
        {
          v4 = Map_Helper_58BB00((int *)((char *)&v30 + 2), i); /*0x5e7f3e*/
          v5 = *v4; /*0x5e7f43*/
          v6 = v4[1]; /*0x5e7f4c*/
          if ( (unsigned __int8)ScenarioClass::Is_Waypoint_Valid((char *)dword_A8B230, i) ) /*0x5e7f4f*/
            v7 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, v28, i); /*0x5e7f69*/
          else
            v7 = dword_AC0B90; /*0x5e7f6d*/
          Size[1] = v7; /*0x5e7f72*/
          sprintf(v34, ",%d,%d,%d,%d", v5, v6, (__int16)v7, SHIWORD(v7)); /*0x5e7f8f*/
          strcat(Buffer, v34); /*0x5e7fc1*/
        }
        Network::SendOptionsGame(Buffer); /*0x5e7fdb*/
      }
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e7fe7*/
      {
        if ( dword_ABFEC8 && (dword_ABFEC8 & 1) == 0 ) /*0x5e7ff8*/
        {
LABEL_21:
          strcpy(Buffer, "Z3"); /*0x5e808f*/
          Debug::Log(); /*0x5e80b4*/
          return (*(int (__stdcall **)(LPVOID, char *))(*(_DWORD *)ppv + 60))(ppv, Buffer); /*0x5e80d9*/
        }
        v8 = 1; /*0x5e8003*/
        if ( dword_A8DA84 > 1 ) /*0x5e8007*/
        {
          while ( 1 ) /*0x5e8013*/
          {
            PlayerName = GameClass::FindPlayerName(v8); /*0x5e8013*/
            if ( PlayerName < 8 ) /*0x5e801a*/
            {
              v10 = dword_A8DC2C[PlayerName]; /*0x5e8021*/
              if ( v10 ) /*0x5e802a*/
              {
                if ( (v10 & 1) == 0 ) /*0x5e802f*/
                  break; /*0x5e802f*/
              }
              if ( !(unsigned __int8)NetworkID::Compare((bool *)(12 * PlayerName + 11066316), dword_A8DA78[v8] + 40) ) /*0x5e8048*/
                break; /*0x5e8048*/
            }
            if ( ++v8 >= dword_A8DA84 ) /*0x5e8059*/
              goto LABEL_22; /*0x5e8059*/
          }
          ToWideStringChar((char *)dword_A8DA78[v8]); /*0x5e807c*/
          Debug::Log(); /*0x5e8087*/
          goto LABEL_21; /*0x5e8087*/
        }
      }
LABEL_22:
      Debug::Log(); /*0x5e80da*/
      memset(v36, 0, sizeof(v36)); /*0x5e80f5*/
      v37 = 0; /*0x5e80f7*/
      v38 = 0; /*0x5e80f9*/
      v36[0] = 25; /*0x5e8119*/
      strcpy((char *)&v36[1], unk_A8B380); /*0x5e8127*/
      Network::SetConnectionParams(&unk_A8E9C0, 50, -1, 5000, 1); /*0x5e813e*/
      Ticks = Timer::GetTicks(); /*0x5e8150*/
      for ( j = 1; j < dword_A8DA84; ++j ) /*0x5e8170*/
      {
        Network::SendToPlayer((int)&unk_A8E9C0, (int)v36, 455, 1, (wchar_t *)dword_A8DA78[j]); /*0x5e818b*/
        Event::Dispatch(); /*0x5e8190*/
      }
      while ( Network::GetQueueCount(&unk_A8E9C0) ) /*0x5e81a4*/
      {
        v12 = 1200; /*0x5e81b1*/
        if ( Ticks != -1 ) /*0x5e81b7*/
        {
          v13 = Timer::GetTicks() - Ticks; /*0x5e81c2*/
          if ( v13 >= 1200 ) /*0x5e81c8*/
            break; /*0x5e81c8*/
          v12 = 1200 - v13; /*0x5e81ca*/
        }
        if ( !v12 ) /*0x5e81ce*/
          break; /*0x5e81ce*/
        Event::Dispatch(); /*0x5e81d0*/
      }
      result = Ticks; /*0x5e81e3*/
      v14 = 1200; /*0x5e81e7*/
      if ( Ticks != -1 ) /*0x5e81ed*/
      {
        result = Timer::GetTicks() - Ticks; /*0x5e81f8*/
        if ( result >= 1200 ) /*0x5e81fe*/
          return result; /*0x5e81fe*/
        v14 = 1200 - result; /*0x5e8204*/
      }
      if ( v14 ) /*0x5e8208*/
      {
        Waypoint::InitInvalid(&v33); /*0x5e8212*/
        v28[0] = 0; /*0x5e821d*/
        v15 = 0; /*0x5e8221*/
        v28[1] = 0; /*0x5e8223*/
        v25 = Timer::GetTicks(); /*0x5e8230*/
        Debug::Log(); /*0x5e824d*/
        if ( dword_A8DA84 - 1 > 0 ) /*0x5e825e*/
        {
          do /*0x5e8318*/
          {
            v16 = 1800; /*0x5e826d*/
            if ( v25 != -1 ) /*0x5e8274*/
            {
              v17 = Timer::GetTicks() - v25; /*0x5e827f*/
              if ( v17 >= 1800 ) /*0x5e8285*/
                break; /*0x5e8285*/
              v16 = 1800 - v17; /*0x5e828b*/
            }
            if ( !v16 ) /*0x5e828f*/
              break; /*0x5e828f*/
            Event::Dispatch(); /*0x5e8295*/
            v29 = 455; /*0x5e82b6*/
            if ( Network::Send((Network *)&unk_A8E9C0, (int)v39, (int)&v29, (int)&v33, (int)&v30) ) /*0x5e82ba*/
            {
              if ( v39[0] == 26 ) /*0x5e82ca*/
              {
                v18 = 1; /*0x5e82d1*/
                if ( dword_A8DA84 > 1 ) /*0x5e82d8*/
                {
                  while ( !(unsigned __int8)NetworkID::Compare((bool *)v33.__pad_0, dword_A8DA78[v18] + 40) ) /*0x5e82f1*/
                  {
                    if ( ++v18 >= dword_A8DA84 ) /*0x5e82fb*/
                      goto LABEL_47; /*0x5e82fb*/
                  }
                  if ( !*((_BYTE *)v28 + v18) ) /*0x5e82ff*/
                  {
                    *((_BYTE *)v28 + v18) = 1; /*0x5e830b*/
                    ++v15; /*0x5e830e*/
                  }
                }
              }
            }
LABEL_47:
            ;
          }
          while ( v15 < dword_A8DA84 - 1 ); /*0x5e8318*/
        }
        result = dword_A8DA84 - 1; /*0x5e831e*/
        if ( v15 == dword_A8DA84 - 1 ) /*0x5e8326*/
        {
          Debug::Log(); /*0x5e8331*/
          Size[0] = 0; /*0x5e833d*/
          v19 = (void *)Palette::Preview_Generate(v27, 64, (int)Size, v23); /*0x5e8351*/
          Debug::Log(); /*0x5e835d*/
          v20 = (void *)__2_YAPAXI_Z(4 * Size[0]); /*0x5e837a*/
          v31.Pipe_field_0x04 = 0; /*0x5e838b*/
          v31.Pipe_field_0x08 = 0; /*0x5e838f*/
          *(_DWORD *)v31.__pad_0 = &Pipe::`vftable'; /*0x5e8393*/
          Buffer::Init((Buffer *)&v31.Pipe_field_0x0C, (int)v20, 4 * Size[0]); /*0x5e839b*/
          v32 = 0; /*0x5e83a7*/
          *(_DWORD *)v31.__pad_0 = &BufferPipe::`vftable'; /*0x5e83b1*/
          LZOPipe::Constructor((LZOPipe *)&v33.__pad_0[48], 0, 0x2000); /*0x5e83b9*/
          Pipe::SetDelegate((Pipe *)&v33.__pad_0[48], (int)&v31); /*0x5e83ca*/
          v21 = Compression::Read((int *)&v33.__pad_0[48], (int)v19, Size[0]); /*0x5e83e1*/
          v22 = (*(int (__thiscall **)(char *))(*(_DWORD *)&v33.__pad_0[48] + 4))(&v33.__pad_0[48]) + v21; /*0x5e83f4*/
          __3_YAXPAX_Z(v19); /*0x5e83f7*/
          Debug::Log(); /*0x5e8402*/
          RawFileClass::Construct((RawFileClass *)&v33.__pad_0[12], (int)aPreviewBin); /*0x5e8413*/
          if ( (unsigned __int8)FileClass::Open((RawFileClass *)&v33.__pad_0[12], 0) ) /*0x5e841d*/
            FileClass::Delete((RawFileClass *)&v33.__pad_0[12]); /*0x5e842a*/
          FileClass::Open2((RawFileClass *)&v33.__pad_0[12], (const CHAR *)2); /*0x5e8435*/
          FileClass::Write2((RawFileClass *)&v33.__pad_0[12], Size, 4u); /*0x5e8445*/
          FileClass::Write2((RawFileClass *)&v33.__pad_0[12], v20, v22); /*0x5e8450*/
          FileClass::CloseHandle((RawFileClass *)&v33.__pad_0[12]); /*0x5e8459*/
          __3_YAXPAX_Z(v20); /*0x5e845f*/
          Debug::Log(); /*0x5e8469*/
          SendNetworkFile(aPreviewBin, 3, 1, 0); /*0x5e847e*/
          Network::SetConnectionParams(&unk_A8E9C0, 30, -1, 600, 1); /*0x5e8493*/
          RawFileClass::Dtor((RawFileClass *)&v33.__pad_0[12]); /*0x5e849c*/
          LZOPipe::Destructor((LZOPipe *)&v33.__pad_0[48]); /*0x5e84a8*/
          Vector::Clear((int)&v31.Pipe_field_0x0C); /*0x5e84b1*/
          return Pipe::Dtor(&v31); /*0x5e84ba*/
        }
      }
    }
  }
  return result; /*0x5e80cf*/
}



// ==== 0x005E84D0  GameConfig::ComputeCRC  this=GameConfig  sig=csp ====
char *GameConfig_ComputeCRC()
{
  unsigned int v0; // ebx
  int *v1; // ebp
  int v2; // edx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // ebp
  char *v8; // ebp
  int *v10; // [esp+10h] [ebp-104h]
  _BYTE v11[256]; // [esp+14h] [ebp-100h] BYREF

  v0 = 0; /*0x5e84e8*/
  qmemcpy(v11, &unk_ABE050, sizeof(v11)); /*0x5e84ea*/
  v1 = &dword_ABE010; /*0x5e84ec*/
  v10 = &dword_ABE010; /*0x5e84fd*/
  v2 = 320; /*0x5e8501*/
  memset(&unk_ABE050, 0, 0x100u); /*0x5e8506*/
  do /*0x5e854a*/
  {
    v3 = v0 >> 31; /*0x5e850a*/
    if ( v2 < 4 ) /*0x5e8510*/
    {
      v5 = 0; /*0x5e8526*/
      v6 = v1; /*0x5e8528*/
      v7 = v2; /*0x5e852e*/
      v2 = 0; /*0x5e8530*/
      do /*0x5e853d*/
      {
        v5 = *(unsigned __int8 *)v6 | (v5 << 8); /*0x5e8539*/
        v6 = (int *)((char *)v6 + 1); /*0x5e853b*/
        --v7; /*0x5e853c*/
      }
      while ( v7 ); /*0x5e853d*/
      v1 = v10; /*0x5e853f*/
      v0 = v3 + v5 + 2 * v0; /*0x5e8546*/
    }
    else
    {
      v4 = *v1++; /*0x5e8512*/
      v10 = v1; /*0x5e8518*/
      v0 = v3 + v4 + 2 * v0; /*0x5e851f*/
      v2 -= 4; /*0x5e8521*/
    }
  }
  while ( v2 > 0 ); /*0x5e854a*/
  v8 = (char *)__2_YAPAXI_Z(0xCu); /*0x5e8553*/
  sprintf(v8, "%08X", v0); /*0x5e855c*/
  qmemcpy(&unk_ABE050, v11, 0x100u); /*0x5e8572*/
  return v8; /*0x5e8574*/
}



// ==== 0x005E8590  ObjectClass::SkirmishSetup_Setup_5E8590  this=ObjectClass  sig=csp ====
int SkirmishSetup_Setup_5E8590(ObjectClass *this)
{
  CCFileClass *v1; // ecx
  Skirmish *v3; // esi
  ObjectClass *v4; // eax
  Skirmish *v5; // eax
  int v6; // ebx
  char *v7; // edi
  SessionClass *v8; // eax
  wchar_t *v9; // esi
  int v10; // eax
  char **v11; // esi
  char *v12; // eax

  if ( *(_DWORD *)&dword_A8B238 == 3 ) /*0x5e8598*/
  {
    v1 = (CCFileClass *)loc_5DAF20; /*0x5e859a*/
  }
  else if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e85a4*/
  {
    v1 = (CCFileClass *)Game::ProcessIdle; /*0x5e85a6*/
  }
  else if ( *(_DWORD *)&dword_A8B238 == 1 /*0x5e85ba*/
         || (v1 = (CCFileClass *)Event_Dispatch::Return0, *(_DWORD *)&dword_A8B238 == 2) )
  {
    v1 = (CCFileClass *)&loc_5BB260; /*0x5e85bc*/
  }
  if ( CCFileClass::Load(v1) != 1 ) /*0x5e85c9*/
    return -1; /*0x5e85cb*/
  byte_8316D4 = 1; /*0x5e85db*/
  MapSeed::ValidateName(byte_ABDFD8, (int)aRandmapSed); /*0x5e85e2*/
  v3 = g_UIControlState; /*0x5e85e7*/
  if ( g_UIControlState ) /*0x5e85ef*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5e85f3*/
    __3_YAXPAX_Z(v3); /*0x5e85f9*/
  }
  v4 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5e8603*/
  if ( v4 ) /*0x5e860d*/
    v5 = (Skirmish *)unknown_libname_27(v4); /*0x5e8611*/
  else
    v5 = 0; /*0x5e8618*/
  g_UIControlState = v5; /*0x5e8621*/
  Surface::LoadToSurfaceSHP((Surface *)v5, ExistingFileName); /*0x5e8626*/
  v6 = 0; /*0x5e8630*/
  if ( dword_A8B8D8 <= 0 ) /*0x5e8634*/
  {
LABEL_18:
    v7 = GameConfig::ComputeCRC(); /*0x5e8655*/
    v8 = (SessionClass *)__2_YAPAXI_Z(0x1BCu); /*0x5e8662*/
    if ( v8 ) /*0x5e866c*/
      v9 = SessionClass::ParseGameInfo(v8, aRandmapSed, &unk_ABE050, v7, 1, 0, 2, 4); /*0x5e8688*/
    else
      v9 = 0; /*0x5e868c*/
    if ( dword_A8B8D8 < dword_A8B8D0 /*0x5e86c5*/
      || (byte_A8B8D5 || !dword_A8B8D0)
      && dword_A8B8DC > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B8C8 + 8))(
           &dword_A8B8C8,
           dword_A8B8D0 + dword_A8B8DC,
           0) )
    {
      v10 = dword_A8B8D8++; /*0x5e86d2*/
      *(_DWORD *)(dword_A8B8CC + 4 * v10) = v9; /*0x5e86e1*/
    }
    __3_YAXPAX_Z(v7); /*0x5e86e5*/
    return v6; /*0x5e86ed*/
  }
  else
  {
    while ( !(unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v6)) ) /*0x5e8645*/
    {
      if ( ++v6 >= dword_A8B8D8 ) /*0x5e8653*/
        goto LABEL_18; /*0x5e8653*/
    }
    GameOption::SetDescriptionWStr(*(GameOption **)(dword_A8B8CC + 4 * v6), &unk_ABE050); /*0x5e8701*/
    v11 = (char **)(dword_A8B8CC + 4 * v6); /*0x5e870b*/
    v12 = GameConfig::ComputeCRC(); /*0x5e870e*/
    GameOption::SetDigest(*v11, v12); /*0x5e8716*/
    return v6; /*0x5e871b*/
  }
}



// ==== 0x005E8740  Render_Setup  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * a1), word_A8D610) == 0; /*0x5e875b*/
}



// ==== 0x005E8760  Settings::CheckString  this=Settings  sig=csp ====
int Settings::CheckString()
{
  char *v0; // eax

  v0 = CharToWideString(unk_A8B380); /*0x5e8765*/
  return wcscmp((const wchar_t *)v0, word_A8D610) == 0; /*0x5e877d*/
}



// ==== 0x005E87A0  LoadNetworkShareStrings  this=-  sig=csp ====
wchar_t *LoadNetworkShareStrings()
{
  wchar_t *v0; // eax
  wchar_t *v1; // esi
  wchar_t *v2; // eax
  wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  wchar_t *v9; // esi
  wchar_t *v10; // eax
  wchar_t *v11; // esi
  wchar_t *result; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // esi

  if ( !dword_AC117C ) /*0x5e87a7*/
  {
    dword_AC117C = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 4078); /*0x5e87d4*/
    dword_AC1180 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 4079); /*0x5e87ef*/
    dword_AC1184 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 4080); /*0x5e880a*/
    dword_AC1188 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 4081); /*0x5e8825*/
    dword_AC118C = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 4082); /*0x5e8840*/
    dword_AC1190 = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 4083); /*0x5e885b*/
    dword_AC1194 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 4084); /*0x5e8865*/
  }
  if ( !g_HouseClass_ObserverFlags ) /*0x5e8872*/
  {
    v0 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8879*/
    v1 = v0; /*0x5e887e*/
    if ( v0 ) /*0x5e8885*/
      Waypoint::InitInvalid((_BYTE *)v0 + 40); /*0x5e888a*/
    else
      v1 = 0; /*0x5e8891*/
    g_HouseClass_ObserverFlags = (LPARAM)v1; /*0x5e8898*/
    wcscpy(v1, dword_AC117C); /*0x5e88a0*/
  }
  if ( !g_Lobby_PlayerCount ) /*0x5e88af*/
  {
    v2 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88b6*/
    v3 = v2; /*0x5e88bb*/
    if ( v2 ) /*0x5e88c2*/
      Waypoint::InitInvalid((_BYTE *)v2 + 40); /*0x5e88c7*/
    else
      v3 = 0; /*0x5e88ce*/
    g_Lobby_PlayerCount = (LPARAM)v3; /*0x5e88d6*/
    wcscpy(v3, dword_AC1180); /*0x5e88de*/
  }
  if ( !g_Lobby_PlayerTeam ) /*0x5e88ed*/
  {
    v4 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e88f4*/
    v5 = v4; /*0x5e88f9*/
    if ( v4 ) /*0x5e8900*/
      Waypoint::InitInvalid((_BYTE *)v4 + 40); /*0x5e8905*/
    else
      v5 = 0; /*0x5e890c*/
    g_Lobby_PlayerTeam = (LPARAM)v5; /*0x5e8914*/
    wcscpy(v5, dword_AC1184); /*0x5e891c*/
  }
  if ( !g_Lobby_PlayerSide ) /*0x5e892b*/
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e8932*/
    v7 = v6; /*0x5e8937*/
    if ( v6 ) /*0x5e893e*/
      Waypoint::InitInvalid((_BYTE *)v6 + 40); /*0x5e8943*/
    else
      v7 = 0; /*0x5e894a*/
    g_Lobby_PlayerSide = (LPARAM)v7; /*0x5e8951*/
    wcscpy(v7, dword_AC1188); /*0x5e8959*/
  }
  if ( !g_Lobby_PlayerColor ) /*0x5e8968*/
  {
    v8 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e896f*/
    v9 = v8; /*0x5e8974*/
    if ( v8 ) /*0x5e897b*/
      Waypoint::InitInvalid((_BYTE *)v8 + 40); /*0x5e8980*/
    else
      v9 = 0; /*0x5e8987*/
    g_Lobby_PlayerColor = (LPARAM)v9; /*0x5e898f*/
    wcscpy(v9, dword_AC118C); /*0x5e8997*/
  }
  if ( !g_Lobby_PlayerReady ) /*0x5e89a6*/
  {
    v10 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89ad*/
    v11 = v10; /*0x5e89b2*/
    if ( v10 ) /*0x5e89b9*/
      Waypoint::InitInvalid((_BYTE *)v10 + 40); /*0x5e89be*/
    else
      v11 = 0; /*0x5e89c5*/
    g_Lobby_PlayerReady = v11; /*0x5e89cd*/
    wcscpy(v11, dword_AC1190); /*0x5e89d5*/
  }
  result = (wchar_t *)g_Lobby_MaxPlayers; /*0x5e89dd*/
  if ( !g_Lobby_MaxPlayers ) /*0x5e89e4*/
  {
    v13 = (wchar_t *)__2_YAPAXI_Z(0x85u); /*0x5e89eb*/
    v14 = v13; /*0x5e89f0*/
    if ( v13 ) /*0x5e89f7*/
      Waypoint::InitInvalid((_BYTE *)v13 + 40); /*0x5e89fc*/
    else
      v14 = 0; /*0x5e8a03*/
    g_Lobby_MaxPlayers = (LPARAM)v14; /*0x5e8a0a*/
    return wcscpy(v14, dword_AC1194); /*0x5e8a12*/
  }
  return result; /*0x5e8a1b*/
}



// ==== 0x005E8A20  WinMainSetup_Setup_5DB6F0_Setup  this=-  sig=csp ====
int sub_5E8A20()
{
  if ( g_HouseClass_ObserverFlags ) /*0x5e8a2a*/
  {
    __3_YAXPAX_Z((void *)g_HouseClass_ObserverFlags); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerCount); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerTeam); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerSide); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_PlayerColor); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    __3_YAXPAX_Z(g_Lobby_PlayerReady); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    __3_YAXPAX_Z((void *)g_Lobby_MaxPlayers); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
  return PtrVector::Destroy(&stru_A8DA74); /*0x5e8ad0*/
}



// ==== 0x005E8AE0  GameClass::InitDifficultyButtons  this=GameClass  sig=ida-proto ====
void GameClass_InitDifficultyButtons()
{
  signed int v0; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5e8ae7*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8af2*/
      v0 = 6; /*0x5e8b02*/
    else
      v0 = 2; /*0x5e8afb*/
  }
  else
  {
    v0 = 8; /*0x5e8b09*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b1f*/
  if ( v0 < 8 ) /*0x5e8b24*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8b39*/
}



// ==== 0x005E8B40  Game::ResetFlags  this=Game  sig=ida-proto ====
char Game_ResetFlags()
{
  byte_AC0AC8 = 0; /*0x5e8b42*/
  byte_AC0AEC = 0; /*0x5e8b47*/
  byte_AC0EA4 = 0; /*0x5e8b4c*/
  byte_AC0B10 = 0; /*0x5e8b51*/
  return 0; /*0x5e8b56*/
}



// ==== 0x005E8B60  Network::InitPlayerSlots  this=Network  sig=ida-proto ====
int Network_InitPlayerSlots()
{
  signed int v0; // edx
  int result; // eax

  if ( dword_A8B238 == 4 ) /*0x5e8b67*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8b72*/
      v0 = 6; /*0x5e8b82*/
    else
      v0 = 2; /*0x5e8b7b*/
  }
  else
  {
    v0 = 8; /*0x5e8b89*/
  }
  memset32(&dword_A8DA90, g_HouseClass_ObserverFlags, v0); /*0x5e8b9f*/
  if ( v0 < 8 ) /*0x5e8ba4*/
    memset32((void *)(4 * v0 + 11066000), g_Lobby_PlayerCount, 8 - v0); /*0x5e8bb9*/
  dword_A8DA8C = -1; /*0x5e8bc0*/
  result = Network::processGameEvent(stru_A8B250); /*0x5e8bca*/
  word_AC0D44 = 0; /*0x5e8bcf*/
  word_AC0B94 = 0; /*0x5e8bd8*/
  return result; /*0x5e8be2*/
}



// ==== 0x005E8BF0  Player::FindByName  this=Player  sig=csp ====
wchar_t *__thiscall Player::FindByName(Player *this)
{
  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, (const wchar_t *)this) ) /*0x5e8bfd*/
    return (wchar_t *)g_HouseClass_ObserverFlags; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, (const wchar_t *)this) ) /*0x5e8c1b*/
    return (wchar_t *)g_Lobby_PlayerCount; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, (const wchar_t *)this) ) /*0x5e8c39*/
    return (wchar_t *)g_Lobby_PlayerTeam; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, (const wchar_t *)this) ) /*0x5e8c56*/
    return (wchar_t *)g_Lobby_PlayerSide; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, (const wchar_t *)this) ) /*0x5e8c74*/
    return (wchar_t *)g_Lobby_PlayerColor; /*0x5e8c80*/
  if ( !wcscmp(g_Lobby_PlayerReady, (const wchar_t *)this) ) /*0x5e8c92*/
    return g_Lobby_PlayerReady; /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, (const wchar_t *)this) ) /*0x5e8caf*/
    return (wchar_t *)g_Lobby_MaxPlayers; /*0x5e8cbb*/
  v3 = dword_A8DA84; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( dword_A8DA84 <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = (const wchar_t *)dword_A8DA78[v4]; /*0x5e8cd8*/
    if ( !wcscmp(v5, (const wchar_t *)this) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/
}



// ==== 0x005E8D00  WOLobby::FindPlayerIndex  this=WOLobby  sig=csp ====
int __thiscall WOLobby::FindPlayerIndex(WOLobby *this)
{
  int v2; // edi
  const wchar_t **v3; // esi

  v2 = 0; /*0x5e8d05*/
  v3 = (const wchar_t **)dword_A8DA90; /*0x5e8d07*/
  while ( !*v3 || _wcsicmp((const wchar_t *)this, *v3) ) /*0x5e8d1e*/
  {
    ++v3; /*0x5e8d20*/
    ++v2; /*0x5e8d23*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x5e8d2a*/
      return -1; /*0x5e8d32*/
  }
  return v2; /*0x5e8d2c*/
}



// ==== 0x005E8D40  RefreshLobbyAll_Helper  this=-  sig=ida-proto ====
int sub_5E8D40()
{
  const wchar_t *v1; // ebx
  int v2; // edi
  const wchar_t **v3; // esi

  if ( !dword_A8DA84 ) /*0x5e8d47*/
    return -1; /*0x5e8d49*/
  v1 = *(const wchar_t **)dword_A8DA78; /*0x5e8d55*/
  v2 = 0; /*0x5e8d57*/
  v3 = (const wchar_t **)&dword_A8DA90; /*0x5e8d59*/
  while ( !*v3 || _wcsicmp(v1, *v3) ) /*0x5e8d70*/
  {
    ++v3; /*0x5e8d72*/
    ++v2; /*0x5e8d75*/
    if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x5e8d7c*/
      return -1; /*0x5e8d84*/
  }
  return v2; /*0x5e8d4c*/
}



// ==== 0x005E8D90  Network_Handle_5E8D90  this=-  sig=ida-proto ====
void __fastcall sub_5E8D90(int a1, LPARAM a2)
{
  *(&dword_A8DA90 + a1) = a2; /*0x5e8d90*/
}



// ==== 0x005E8DA0  NetworkShare::GetField  this=NetworkShare  sig=ida-proto ====
int __fastcall NetworkShare::GetField(int a1)
{
  int result; // eax

  result = dword_A8DA78; /*0x5e8da0*/
  dword_A8DA8C = a1; /*0x5e8da5*/
  *(&dword_A8DA90 + a1) = *(_DWORD *)dword_A8DA78; /*0x5e8dad*/
  return result; /*0x5e8db4*/
}



// ==== 0x005E8DC0  Player::BuildListString  this=Player  sig=csp ====
void __thiscall Player::BuildListString(Player *this)
{
  wchar_t **v2; // edi
  wchar_t *v3; // esi
  wchar_t **v4; // eax
  wchar_t *v5; // eax
  DeleteAndZero v6; // [esp+Ch] [ebp-Ch] BYREF

  *(_WORD *)this = 0; /*0x5e8dc8*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e8dcd*/
  do /*0x5e8e89*/
  {
    v3 = *v2; /*0x5e8dd2*/
    unknown_libname_74(&v6); /*0x5e8dd8*/
    if ( !v3 /*0x5e8e17*/
      || v3 == (wchar_t *)g_HouseClass_ObserverFlags
      || v3 == (wchar_t *)g_Lobby_PlayerCount
      || v3 == g_Lobby_PlayerReady
      || v3 == (wchar_t *)g_Lobby_MaxPlayers
      || v3 == (wchar_t *)g_Lobby_PlayerTeam
      || v3 == (wchar_t *)g_Lobby_PlayerSide
      || v3 == (wchar_t *)g_Lobby_PlayerColor )
    {
      GetPlayerTypeString((char **)&v6.DeleteAndZero_field_0x04, v3); /*0x5e8e2b*/
      v4 = CharStringToWide((wchar_t **)&v6.DeleteAndZero_field_0x08, (const char **)&v6.DeleteAndZero_field_0x04); /*0x5e8e38*/
      WideString::Reassign_Alt((void **)&v6, (const wchar_t **)v4); /*0x5e8e42*/
      DeleteAndZero::Alt((DeleteAndZero *)&v6.DeleteAndZero_field_0x08); /*0x5e8e4b*/
      DeleteAndZero((ObjectClass *)&v6.DeleteAndZero_field_0x04); /*0x5e8e54*/
    }
    else
    {
      WideString::Assign_Alt((void **)&v6, v3); /*0x5e8e1e*/
    }
    v5 = WideString::GetOrEmpty((wchar_t **)&v6); /*0x5e8e5d*/
    wcscat((wchar_t *)this, v5); /*0x5e8e64*/
    wcscat((wchar_t *)this, asc_8304FC); /*0x5e8e6f*/
    DeleteAndZero::Alt(&v6); /*0x5e8e7b*/
    ++v2; /*0x5e8e80*/
  }
  while ( (int)v2 < (int)&dword_A8DAB0 ); /*0x5e8e89*/
}



// ==== 0x005E8EA0  NetworkLobby::SetupPlayers  this=NetworkLobby  sig=csp ====
void __thiscall NetworkLobby::SetupPlayers(NetworkLobby *this)
{
  LPARAM v1; // esi
  wchar_t *v2; // edi
  LPARAM v3; // ebx
  LPARAM v4; // ebp
  int v5; // edx
  LPARAM *v6; // ecx
  LPARAM v7; // eax
  bool v8; // al
  signed int v9; // edx
  ObjectClass *v10; // esi
  wchar_t *i; // edi
  wchar_t *v12; // ebp
  HWND v13; // edi
  int ResourceID2CSF; // ebx
  int v15; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // ebx
  HWND v18; // edi
  int v19; // eax
  int v20; // eax
  HWND v21; // eax
  int v22; // ebx
  wchar_t **v23; // [esp+0h] [ebp-170h]
  wchar_t **v24; // [esp+0h] [ebp-170h]
  DeleteAndZero v25; // [esp+10h] [ebp-160h] BYREF
  wchar_t Destination[170]; // [esp+1Ch] [ebp-154h] BYREF

  if ( *(_WORD *)this->__pad_0 )
  {
    wcscpy(Destination, (const wchar_t *)this); /*0x5e8eba*/
    v1 = g_Lobby_MaxPlayers; /*0x5e8ebf*/
    v2 = g_Lobby_PlayerReady; /*0x5e8ec5*/
    v3 = g_HouseClass_ObserverFlags; /*0x5e8ecb*/
    v4 = g_Lobby_PlayerCount; /*0x5e8ed1*/
    v5 = 0; /*0x5e8eda*/
    v6 = dword_A8DA90; /*0x5e8edc*/
    do /*0x5e8f14*/
    {
      v7 = *v6; /*0x5e8ee1*/
      v8 = *v6 == v1 || v7 && v7 != v3 && v7 != v4 && (wchar_t *)v7 != v2 && *(_DWORD *)(v7 + 107) == -1; /*0x5e8f01*/
      v25.__pad_0[v5 + 4] = v8; /*0x5e8f06*/
      ++v6; /*0x5e8f0a*/
      ++v5; /*0x5e8f0d*/
    }
    while ( (int)v6 < (int)&dword_A8DAB0 ); /*0x5e8f14*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e8f1d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e8f28*/
        v9 = 6; /*0x5e8f38*/
      else
        v9 = 2; /*0x5e8f31*/
    }
    else
    {
      v9 = 8; /*0x5e8f3f*/
    }
    memset32(dword_A8DA90, g_HouseClass_ObserverFlags, v9); /*0x5e8f54*/
    if ( v9 < 8 ) /*0x5e8f59*/
      memset32((void *)(4 * v9 + 11066000), g_Lobby_PlayerCount, 8 - v9); /*0x5e8f6e*/
    v10 = 0; /*0x5e8f7a*/
    for ( i = wcstok(Destination, asc_8304FC, v23); i; i = wcstok(0, asc_8304FC, v24) )
    {
      WideString::Assign((wchar_t **)&v25, i); /*0x5e8f93*/
      v12 = NetworkLobby::DeleteAndZero((NetworkLobby *)&v25); /*0x5e8fa5*/
      DeleteAndZero::Alt(&v25); /*0x5e8fa7*/
      if ( !v12 ) /*0x5e8fae*/
      {
        v12 = Player::FindByName((Player *)i); /*0x5e8fb7*/
        if ( !v12 ) /*0x5e8fbb*/
          v12 = g_Lobby_PlayerReady; /*0x5e8fbd*/
      }
      if ( v12 != (wchar_t *)g_Lobby_MaxPlayers
        && (!v12
         || v12 == (wchar_t *)g_HouseClass_ObserverFlags
         || v12 == (wchar_t *)g_Lobby_PlayerCount
         || v12 == g_Lobby_PlayerReady
         || v12 == (wchar_t *)g_Lobby_PlayerTeam
         || v12 == (wchar_t *)g_Lobby_PlayerSide
         || v12 == (wchar_t *)g_Lobby_PlayerColor
         || *(_DWORD *)((char *)v12 + 107) != -1) )
      {
        v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e9017*/
        if ( !v13 ) /*0x5e901b*/
        {
          v13 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e9027*/
          if ( !v13 ) /*0x5e902b*/
          {
            v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e9037*/
            if ( !v13 ) /*0x5e903b*/
              v13 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e9047*/
          }
        }
        if ( v25.__pad_0[(_DWORD)v10 + 4] )
        {
          ResourceID2CSF = GetResourceID2CSF(v10); /*0x5e905c*/
          if ( GetComboBoxSelected(v13, ResourceID2CSF, -1) == -3 )
          {
            FillComboBoxRandomOnly(v13, ResourceID2CSF); /*0x5e9076*/
            if ( v10 )
            {
              if ( v10 == (ObjectClass *)1 )
              {
                v15 = 1042; /*0x5e908b*/
              }
              else if ( v10 == (ObjectClass *)2 )
              {
                v15 = 1043; /*0x5e9097*/
              }
              else if ( v10 == (ObjectClass *)3 )
              {
                v15 = 1044; /*0x5e90a3*/
              }
              else if ( v10 == (ObjectClass *)4 )
              {
                v15 = 1045; /*0x5e90af*/
              }
              else if ( v10 == (ObjectClass *)5 )
              {
                v15 = 1046; /*0x5e90bb*/
              }
              else if ( v10 == (ObjectClass *)6 )
              {
                v15 = 1047; /*0x5e90c7*/
              }
              else
              {
                v15 = v10 != (ObjectClass *)7 ? -1 : 1048;
              }
            }
            else
            {
              v15 = 1041; /*0x5e907f*/
            }
            DlgItem = GetDlgItem(v13, v15); /*0x5e90ec*/
            SendMessageA(DlgItem, 0x4F1u, 0, 0); /*0x5e90f3*/
            ResourceIDCSF = GetResourceIDCSF(v10); /*0x5e9100*/
            FillComboBoxFactions(v13, ResourceIDCSF); /*0x5e9106*/
            SetupSkirmishSpawnLocations(v13, ResourceIDCSF, -2); /*0x5e910d*/
          }
        }
      }
      else
      {
        v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC2); /*0x5e911c*/
        if ( !v18 ) /*0x5e9120*/
        {
          v18 = (HWND)Dialog::FindByHandle((Dialog *)0xC9); /*0x5e912c*/
          if ( !v18 ) /*0x5e9130*/
          {
            v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBC); /*0x5e913c*/
            if ( !v18 ) /*0x5e9140*/
              v18 = (HWND)Dialog::FindByHandle((Dialog *)0xBD); /*0x5e914c*/
          }
        }
        if ( !v25.__pad_0[(_DWORD)v10 + 4] )
        {
          dword_A8DA90[(_DWORD)v10] = (LPARAM)v12; /*0x5e915c*/
          v19 = GetResourceID2CSF(v10); /*0x5e9163*/
          SetupComboBoxObserver(v18, v19); /*0x5e916c*/
          if ( v10 )
          {
            if ( v10 == (ObjectClass *)1 )
            {
              v20 = 1042; /*0x5e9181*/
            }
            else if ( v10 == (ObjectClass *)2 )
            {
              v20 = 1043; /*0x5e918d*/
            }
            else if ( v10 == (ObjectClass *)3 )
            {
              v20 = 1044; /*0x5e9199*/
            }
            else if ( v10 == (ObjectClass *)4 )
            {
              v20 = 1045; /*0x5e91a5*/
            }
            else if ( v10 == (ObjectClass *)5 )
            {
              v20 = 1046; /*0x5e91b1*/
            }
            else if ( v10 == (ObjectClass *)6 )
            {
              v20 = 1047; /*0x5e91bd*/
            }
            else
            {
              v20 = v10 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v20 = 1041; /*0x5e9175*/
          }
          v21 = GetDlgItem(v18, v20); /*0x5e91e2*/
          SendMessageA(v21, 0x4F1u, 0, 1); /*0x5e91e9*/
          v22 = GetResourceIDCSF(v10); /*0x5e91f6*/
          FillListBox(v18, v22); /*0x5e91fc*/
          SetupSkirmishSpawnLocations(v18, v22, 8); /*0x5e9207*/
        }
      }
      dword_A8DA90[(_DWORD)v10] = (LPARAM)v12; /*0x5e9211*/
      v10 = (ObjectClass *)((char *)v10 + 1); /*0x5e921a*/
    }
  }
}



// ==== 0x005E9240  NetworkLobby::AssignPlayerSlot  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::AssignPlayerSlot(NetworkLobby *this)
{
  int result; // eax
  LPARAM *v2; // edx

  result = 0; /*0x5e9250*/
  v2 = dword_A8DA90; /*0x5e9252*/
  while ( (*v2 != g_HouseClass_ObserverFlags || *(_DWORD *)&this->__pad_3D[46] == -1) /*0x5e926c*/
       && (*v2 != g_Lobby_MaxPlayers || *(_DWORD *)&this->__pad_3D[46] != -1) )
  {
    ++v2; /*0x5e926e*/
    ++result; /*0x5e9271*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9278*/
      return -1; /*0x5e9280*/
  }
  dword_A8DA90[result] = (LPARAM)this; /*0x5e9284*/
  return result; /*0x5e927a*/
}



// ==== 0x005E9290  NetworkLobby::CheckLobbyConditions  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::CheckLobbyConditions(NetworkLobby *this)
{
  int v2; // ebp
  int v3; // edi
  LPARAM *v4; // esi
  int result; // eax

  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e929e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e92a9*/
      v2 = 6; /*0x5e92b9*/
    else
      v2 = 2; /*0x5e92b2*/
  }
  else
  {
    v2 = 8; /*0x5e92c0*/
  }
  if ( !g_MPCooperativeState && v2 < 7 ) /*0x5e92d1*/
    ++v2; /*0x5e92d3*/
  v3 = 0; /*0x5e92d4*/
  v4 = dword_A8DA90; /*0x5e92d6*/
  while ( 1 ) /*0x5e92e1*/
  {
    result = GUID::Compare((char *)(*v4 + 40), (int)this); /*0x5e92e1*/
    if ( (_BYTE)result ) /*0x5e92e8*/
      break; /*0x5e92e8*/
    ++v4; /*0x5e92ea*/
    ++v3; /*0x5e92ed*/
    if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5e92f4*/
      return result; /*0x5e92f4*/
  }
  result = dword_A8DA90[v3]; /*0x5e92fb*/
  if ( *(_DWORD *)(result + 107) == -1 ) /*0x5e9306*/
  {
    dword_A8DA90[v3] = g_Lobby_MaxPlayers; /*0x5e930e*/
  }
  else
  {
    result = g_HouseClass_ObserverFlags; /*0x5e931a*/
    if ( v3 >= v2 ) /*0x5e9321*/
      result = g_Lobby_PlayerCount; /*0x5e9323*/
    dword_A8DA90[v3] = result; /*0x5e9328*/
  }
  return result; /*0x5e92f6*/
}



// ==== 0x005E9340  ObjectClass::Audio_Helper  this=ObjectClass  sig=csp ====
int __thiscall Audio_Helper(ObjectClass *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // edi
  char **v5; // esi
  char *v6; // eax

  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5e934e*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5e9359*/
      v2 = 6; /*0x5e9369*/
    else
      v2 = 2; /*0x5e9362*/
  }
  else
  {
    v2 = 8; /*0x5e9370*/
  }
  result = (int)g_MPCooperativeState; /*0x5e9375*/
  if ( !g_MPCooperativeState && v2 < 7 ) /*0x5e9381*/
    ++v2; /*0x5e9383*/
  v4 = 0; /*0x5e9384*/
  v5 = (char **)dword_A8DA90; /*0x5e9386*/
  while ( 1 ) /*0x5e938b*/
  {
    if ( *v5 ) /*0x5e938b*/
    {
      v6 = ToWideStringChar(*v5); /*0x5e9391*/
      result = _strcmpi((char *)this, v6); /*0x5e9398*/
      if ( !result ) /*0x5e93a2*/
        break; /*0x5e93a2*/
    }
    ++v5; /*0x5e93a4*/
    ++v4; /*0x5e93a7*/
    if ( (int)v5 >= (int)&dword_A8DAB0 ) /*0x5e93ae*/
      return result; /*0x5e93ae*/
  }
  result = dword_A8DA90[v4]; /*0x5e93b5*/
  if ( *(_DWORD *)(result + 107) == -1 ) /*0x5e93c0*/
  {
    dword_A8DA90[v4] = g_Lobby_MaxPlayers; /*0x5e93c8*/
  }
  else
  {
    result = g_HouseClass_ObserverFlags; /*0x5e93d4*/
    if ( v4 >= v2 ) /*0x5e93db*/
      result = g_Lobby_PlayerCount; /*0x5e93dd*/
    dword_A8DA90[v4] = result; /*0x5e93e2*/
  }
  return result; /*0x5e93b0*/
}



// ==== 0x005E93F0  ObjectClass::IsKnownPointer  this=ObjectClass  sig=csp ====
int __thiscall IsKnownPointer(ObjectClass *this)
{
  return this /*0x5e9431*/
      && this != (ObjectClass *)g_HouseClass_ObserverFlags
      && this != (ObjectClass *)g_Lobby_PlayerCount
      && this != (ObjectClass *)g_Lobby_PlayerReady
      && this != (ObjectClass *)g_Lobby_MaxPlayers
      && this != (ObjectClass *)g_Lobby_PlayerTeam
      && this != (ObjectClass *)g_Lobby_PlayerSide
      && this != (ObjectClass *)g_Lobby_PlayerColor;
}



// ==== 0x005E9440  Player::IsObserver  this=Player  sig=csp ====
int __thiscall Player::IsObserver(Player *this)
{
  return this /*0x5e9461*/
      && (this == (Player *)g_Lobby_PlayerTeam
       || this == (Player *)g_Lobby_PlayerSide
       || this == (Player *)g_Lobby_PlayerColor);
}



// ==== 0x005E9470  NetworkLobby::IsValidPlayerName  this=NetworkLobby  sig=csp ====
BOOL __thiscall NetworkLobby::IsValidPlayerName(NetworkLobby *this)
{
  return this /*0x5e9499*/
      && this != (NetworkLobby *)g_HouseClass_ObserverFlags
      && this != (NetworkLobby *)g_Lobby_PlayerCount
      && this != (NetworkLobby *)g_Lobby_MaxPlayers
      && this != (NetworkLobby *)g_Lobby_PlayerReady;
}



// ==== 0x005E94D0  Hash_Check_5E94D0  this=-  sig=csp ====
int sub_5E94D0()
{
  int result; // eax
  LPARAM *v1; // edx
  LPARAM v2; // ecx

  result = 0; /*0x5e94e5*/
  v1 = &dword_A8DA90; /*0x5e94e7*/
  do /*0x5e9508*/
  {
    v2 = *v1; /*0x5e94ec*/
    if ( *v1 && (v2 == g_Lobby_PlayerTeam || v2 == g_Lobby_PlayerSide || v2 == g_Lobby_PlayerColor) ) /*0x5e94fc*/
      ++result; /*0x5e94fe*/
    ++v1; /*0x5e94ff*/
  }
  while ( (int)v1 < (int)&dword_A8DAB0 ); /*0x5e9508*/
  return result; /*0x5e950a*/
}



// ==== 0x005E9510  NetworkLobby::CheckMinPlayers  this=NetworkLobby  sig=csp ====
bool NetworkLobby::CheckMinPlayers(NetworkLobby *this)
{
  int v1; // ecx
  int v2; // eax
  LPARAM *i; // edx

  v1 = dword_A8BB0C; /*0x5e9515*/
  if ( dword_A8B548 < dword_A8BB0C ) /*0x5e951d*/
    v1 = dword_A8B548; /*0x5e951f*/
  v2 = 0; /*0x5e9521*/
  if ( v1 > 0 ) /*0x5e952c*/
  {
    for ( i = dword_A8DA90; *i != g_HouseClass_ObserverFlags; ++i ) /*0x5e952e*/
    {
      if ( ++v2 >= v1 ) /*0x5e953d*/
        return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e953d*/
    }
    return 0; /*0x5e9535*/
  }
  return g_MPCooperativeState || v1 >= 8 || dword_A8DA90[v1] != g_HouseClass_ObserverFlags; /*0x5e9554*/
}



// ==== 0x005E9560  GameOption::CheckDuplicate  this=GameOption  sig=csp ====
char GameOption_CheckDuplicate()
{
  LPARAM *v0; // eax

  v0 = &dword_A8DA90; /*0x5e9566*/
  while ( *v0 != g_Lobby_MaxPlayers ) /*0x5e956d*/
  {
    if ( (int)++v0 >= (int)&dword_A8DAB0 ) /*0x5e9577*/
      return 1; /*0x5e957b*/
  }
  return 0; /*0x5e957b*/
}



// ==== 0x005E9580  ObjectClass::Hash_Check_5E9580  this=ObjectClass  sig=csp ====
char sub_5E9580()
{
  int v0; // edx
  LPARAM *v1; // ecx
  LPARAM v2; // eax

  v0 = 0; /*0x5e9595*/
  v1 = &dword_A8DA90; /*0x5e9597*/
  while ( 1 ) /*0x5e959c*/
  {
    v2 = *v1; /*0x5e959c*/
    if ( *v1 ) /*0x5e959c*/
    {
      if ( v2 != g_HouseClass_ObserverFlags /*0x5e95c2*/
        && v2 != g_Lobby_PlayerCount
        && v2 != g_Lobby_MaxPlayers
        && (wchar_t *)v2 != g_Lobby_PlayerReady
        && v0 == g_MPCooperativeState
        && *(_DWORD *)(v2 + 107) == -1 )
      {
        break; /*0x5e95c2*/
      }
    }
    ++v1; /*0x5e95c4*/
    ++v0; /*0x5e95c7*/
    if ( (int)v1 >= (int)&dword_A8DAB0 ) /*0x5e95ce*/
      return 0; /*0x5e95d5*/
  }
  return 1; /*0x5e95d0*/
}



// ==== 0x005E95E0  ObjectClass::Event_Helper  this=ObjectClass  sig=csp ====
char Event_Helper(ObjectClass *this)
{
  ObjectClass *v1; // edx
  LPARAM *v2; // ecx
  LPARAM v3; // eax
  unsigned __int8 v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  v6 = dword_A8B548; /*0x5e95f0*/
  if ( dword_A8B548 >= dword_A8BB0C ) /*0x5e95f4*/
    v6 = dword_A8BB0C; /*0x5e95f6*/
  v1 = 0; /*0x5e9618*/
  v2 = dword_A8DA90; /*0x5e961a*/
  while ( 1 ) /*0x5e961f*/
  {
    v3 = *v2; /*0x5e961f*/
    if ( *v2 ) /*0x5e961f*/
    {
      if ( v3 != g_HouseClass_ObserverFlags /*0x5e9645*/
        && v3 != g_Lobby_PlayerCount
        && v3 != g_Lobby_MaxPlayers
        && (wchar_t *)v3 != g_Lobby_PlayerReady
        && v1 == g_MPCooperativeState
        && *(_DWORD *)(v3 + 107) == -1 )
      {
        break; /*0x5e9645*/
      }
    }
    ++v2; /*0x5e9647*/
    v1 = (ObjectClass *)((char *)v1 + 1); /*0x5e964a*/
    if ( (int)v2 >= (int)&dword_A8DAB0 ) /*0x5e9651*/
    {
      v5 = 0; /*0x5e9653*/
      goto LABEL_13; /*0x5e9653*/
    }
  }
  v5 = 1; /*0x5e968d*/
LABEL_13:
  if ( dword_A8DA84 - v5 <= v6 ) /*0x5e9671*/
    return 0; /*0x5e9694*/
  Debug::Log(); /*0x5e967f*/
  return 1; /*0x5e9689*/
}



// ==== 0x005E96A0  NetworkLobby::CheckPlayerNameValid  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::CheckPlayerNameValid(NetworkLobby *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e96a7*/
    return 0; /*0x5e9713*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e96a9*/
  while ( 1 ) /*0x5e96ae*/
  {
    v3 = *v2; /*0x5e96ae*/
    if ( *v2 ) /*0x5e96ae*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e96f3*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetPlayerColor((SessionClass *)v3) == this )
      {
        break; /*0x5e96f3*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e96fe*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[108]; /*0x5e9700*/
      while ( *v4 != this ) /*0x5e9707*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9711*/
          return 0; /*0x5e9711*/
      }
      return 1; /*0x5e9707*/
    }
  }
  return 1; /*0x5e9713*/
}



// ==== 0x005E9720  NetworkLobby::CheckPlayerNames  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::CheckPlayerNames(NetworkLobby *this)
{
  wchar_t **v2; // esi
  wchar_t *v3; // ecx
  NetworkLobby **v4; // eax

  if ( this == (NetworkLobby *)-2 ) /*0x5e9727*/
    return 0; /*0x5e9793*/
  v2 = (wchar_t **)dword_A8DA90; /*0x5e9729*/
  while ( 1 ) /*0x5e972e*/
  {
    v3 = *v2; /*0x5e972e*/
    if ( *v2 ) /*0x5e972e*/
    {
      if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9773*/
        && v3 != (wchar_t *)g_Lobby_PlayerCount
        && v3 != g_Lobby_PlayerReady
        && v3 != (wchar_t *)g_Lobby_MaxPlayers
        && v3 != (wchar_t *)g_Lobby_PlayerTeam
        && v3 != (wchar_t *)g_Lobby_PlayerSide
        && v3 != (wchar_t *)g_Lobby_PlayerColor
        && (NetworkLobby *)SessionClass::GetOption((int *)v3) == this )
      {
        break; /*0x5e9773*/
      }
    }
    if ( (int)++v2 >= (int)&dword_A8DAB0 ) /*0x5e977e*/
    {
      v4 = (NetworkLobby **)&stru_A8B250.__pad_0[140]; /*0x5e9780*/
      while ( *v4 != this ) /*0x5e9787*/
      {
        if ( (int)++v4 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9791*/
          return 0; /*0x5e9791*/
      }
      return 1; /*0x5e9787*/
    }
  }
  return 1; /*0x5e9793*/
}



// ==== 0x005E9850  Game::ResetReadyStates  this=Game  sig=ida-proto ====
int Game_ResetReadyStates()
{
  int result; // eax
  HWND v1; // eax
  HWND DlgItem; // eax
  int v3; // edi
  int i; // esi

  result = Dialog::GetCurrentType(); /*0x5e9850*/
  if ( result != 188 ) /*0x5e985a*/
  {
    v1 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5e9861*/
    if ( !v1 ) /*0x5e9868*/
    {
      v1 = (HWND)Dialog::FindByHandle((void *)0xC9); /*0x5e986f*/
      if ( !v1 ) /*0x5e9876*/
      {
        v1 = (HWND)Dialog::FindByHandle((void *)0xBC); /*0x5e987d*/
        if ( !v1 ) /*0x5e9884*/
          v1 = (HWND)Dialog::FindByHandle((void *)0xBD); /*0x5e988b*/
      }
    }
    DlgItem = GetDlgItem(v1, 1439); /*0x5e9898*/
    result = EnableWindow(DlgItem, 1); /*0x5e989f*/
  }
  v3 = dword_A8DA84; /*0x5e98a7*/
  for ( i = 0; i < v3; ++i ) /*0x5e98b1*/
  {
    result = wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * i), &word_A8D610); /*0x5e98c1*/
    if ( result ) /*0x5e98cb*/
    {
      result = *(_DWORD *)(dword_A8DA78 + 4 * i); /*0x5e98d3*/
      if ( *(_DWORD *)(result + 119) ) /*0x5e98d6*/
        *(_DWORD *)(result + 119) = 0; /*0x5e98dd*/
    }
  }
  return result; /*0x5e98eb*/
}



// ==== 0x005E98F0  PlayerSlot::IndexToDlgID  this=PlayerSlot  sig=csp ====
int __thiscall PlayerSlot::IndexToDlgID(PlayerSlot *this)
{
  if ( !this ) /*0x5e98f4*/
    return 1041; /*0x5e98f6*/
  if ( this == (PlayerSlot *)1 ) /*0x5e98ff*/
    return 1042; /*0x5e9901*/
  if ( this == (PlayerSlot *)2 ) /*0x5e990a*/
    return 1043; /*0x5e990c*/
  if ( this == (PlayerSlot *)3 ) /*0x5e9915*/
    return 1044; /*0x5e9917*/
  if ( this == (PlayerSlot *)4 ) /*0x5e9920*/
    return 1045; /*0x5e9922*/
  if ( this == (PlayerSlot *)5 ) /*0x5e992b*/
    return 1046; /*0x5e992d*/
  if ( this == (PlayerSlot *)6 ) /*0x5e9936*/
    return 1047; /*0x5e9938*/
  return this != (PlayerSlot *)7 ? -1 : 1048;
}



// ==== 0x005E9950  Dialog::MapPlayerIDToIndex  this=Dialog  sig=csp ====
int __thiscall Dialog::MapPlayerIDToIndex(Dialog *this)
{
  int v2; // eax

  if ( this == (Dialog *)1041 ) /*0x5e9957*/
    return 0; /*0x5e9959*/
  if ( this == (Dialog *)1042 ) /*0x5e9961*/
    return 1; /*0x5e9963*/
  if ( this == (Dialog *)1043 ) /*0x5e996e*/
    return 2; /*0x5e9970*/
  if ( this == (Dialog *)1044 ) /*0x5e997b*/
    return 3; /*0x5e997d*/
  if ( this == (Dialog *)1045 ) /*0x5e9988*/
    return 4; /*0x5e998a*/
  if ( this == (Dialog *)1046 ) /*0x5e9995*/
    return 5; /*0x5e9997*/
  if ( this == (Dialog *)1047 ) /*0x5e99a2*/
    return 6; /*0x5e99a4*/
  v2 = -(this != (Dialog *)1048); /*0x5e99b1*/
  LOBYTE(v2) = v2 & 0xF8; /*0x5e99b3*/
  return v2 + 7; /*0x5e995b*/
}



// ==== 0x005E99C0  GameClass::GetDifficultyString  this=GameClass  sig=csp ====
wchar_t *__thiscall GameClass::GetDifficultyString(GameClass *this)
{
  if ( this == (GameClass *)g_HouseClass_ObserverFlags ) /*0x5e99c6*/
    return GetStringCSF(aSttPlayeropen, 0, g_Str_File_netshare_cpp, 4948); /*0x5e99d9*/
  if ( this == (GameClass *)g_Lobby_PlayerCount ) /*0x5e99e5*/
    return GetStringCSF(aSttPlayerclose, 0, g_Str_File_netshare_cpp, 4950); /*0x5e99f8*/
  if ( this == (GameClass *)g_Lobby_PlayerTeam ) /*0x5e9a04*/
    return GetStringCSF(g_Str_STT_PlayerDumbAI, 0, g_Str_File_netshare_cpp, 4952); /*0x5e9a17*/
  if ( this == (GameClass *)g_Lobby_PlayerSide ) /*0x5e9a23*/
    return GetStringCSF(g_Str_STT_PlayerSmartAI, 0, g_Str_File_netshare_cpp, 4954); /*0x5e9a36*/
  if ( this == (GameClass *)g_Lobby_PlayerColor ) /*0x5e9a42*/
    return GetStringCSF(g_Str_STT_PlayerGeniusAI, 0, g_Str_File_netshare_cpp, 4956); /*0x5e9a55*/
  if ( this == (GameClass *)g_Lobby_MaxPlayers ) /*0x5e9a61*/
    return GetStringCSF(aSttPlayeropeno, 0, g_Str_File_netshare_cpp, 4958); /*0x5e9a74*/
  return GetStringCSF(aSttPlayerhuman, 0, g_Str_File_netshare_cpp, 4960); /*0x5e99de*/
}



// ==== 0x005E9AA0  sub_5E9AA0  this=-  sig=ida-proto ====
BOOL __fastcall sub_5E9AA0(HWND hDlg, int nIDDlgItem, int a3)
{
  WPARAM v5; // ebx
  LRESULT v7; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]

  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9ab6*/
  ShowWindow(hWnd, 0); /*0x5e9aba*/
  v5 = 0; /*0x5e9ad3*/
  v7 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5e9ad7*/
  if ( v7 > 0 ) /*0x5e9adb*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v5, 0) != a3 ) /*0x5e9aed*/
    {
      if ( (int)++v5 >= v7 ) /*0x5e9af6*/
        return ShowWindow(hWnd, 5); /*0x5e9af6*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v5, 0); /*0x5e9b04*/
  }
  return ShowWindow(hWnd, 5); /*0x5e9b13*/
}



// ==== 0x005E9B20  GetComboBoxSelectedDefault  this=SkirmishDialog  sig=csp ====
LRESULT __fastcall ComboBox_GetSelectedDefault(HWND hDlg, int nIDDlgItem, LRESULT wParam)
{
  LRESULT v3; // eax
  LRESULT v6; // eax

  v3 = wParam; /*0x5e9b20*/
  if ( wParam == -1 ) /*0x5e9b34*/
    v3 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x147u, 0, 0); /*0x5e9b41*/
  v6 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v3, 0); /*0x5e9b4d*/
  return v6 != -1 ? v6 : 0;
}



// ==== 0x005E9B60  SelectLobbyCountry  this=MultiplayerLobby  sig=csp ====
int __fastcall SelectLobbyCountry(HWND a1, CountryCombo *a2)
{
  int ComboBoxSelected; // edi
  int result; // eax
  LPARAM v5; // ecx

  ComboBoxSelected = GetComboBoxSelected(a1, (int)a2, -1); /*0x5e9b6d*/
  result = CountryCombo::IDToIndex(a2); /*0x5e9b6f*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9b7a*/
  {
    SessionClass::AssignSide((SessionClass *)&dword_A8B238, ComboBoxSelected, 0); /*0x5e9b84*/
    result = dword_A8DA84; /*0x5e9b89*/
    if ( dword_A8DA84 ) /*0x5e9b90*/
      return SessionClass::SetPlayerOption((int *)*dword_A8DA78, ComboBoxSelected); /*0x5e9b9a*/
  }
  else
  {
    v5 = dword_A8DA90[result]; /*0x5e9ba2*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5e9bc3*/
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 76] = ComboBoxSelected; /*0x5e9bc5*/
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 76] = -1; /*0x5e9bcf*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 44] = -1; /*0x5e9bda*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 108] = -1; /*0x5e9be5*/
    }
  }
  return result; /*0x5e9b9f*/
}



// ==== 0x005E9C00  AssignPlayerColor  this=-  sig=csp ====
int __fastcall AssignPlayerColor(HWND hDlg, StartCombo *nIDDlgItem)
{
  int ComboBoxSelectedRaw; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)nIDDlgItem, -1); /*0x5e9c10*/
  result = StartCombo::IDToIndex(nIDDlgItem); /*0x5e9c12*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9c1d*/
  {
    FillColorComboBoxUI(hDlg, (int)nIDDlgItem); /*0x5e9c27*/
    if ( ComboBoxSelectedRaw != -2 ) /*0x5e9c2f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9c31*/
      while ( 1 ) /*0x5e9c36*/
      {
        v7 = *v6; /*0x5e9c36*/
        if ( *v6 ) /*0x5e9c36*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9c7b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetPlayerColor((SessionClass *)v7) == ComboBoxSelectedRaw )
          {
            break; /*0x5e9c7b*/
          }
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9c86*/
        {
          v8 = &stru_A8B250.__pad_0[108]; /*0x5e9c88*/
          while ( *(_DWORD *)v8 != ComboBoxSelectedRaw ) /*0x5e9c8f*/
          {
            v8 += 4; /*0x5e9c91*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5e9c99*/
              goto LABEL_19; /*0x5e9c99*/
          }
          break; /*0x5e9c8f*/
        }
      }
      ComboBoxSelectedRaw = -2; /*0x5e9c9d*/
    }
LABEL_19:
    SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5e9ca2*/
    result = dword_A8DA84; /*0x5e9caf*/
    if ( dword_A8DA84 ) /*0x5e9cb6*/
      return SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5e9cc0*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 108] = ComboBoxSelectedRaw; /*0x5e9cc9*/
  }
  return result; /*0x5e9cc5*/
}



// ==== 0x005E9CE0  AssignPlayerSide  this=CampaignClass  sig=csp ====
int __fastcall AssignPlayerSide(HWND hDlg, Dialog *nIDDlgItem)
{
  int v4; // ebx
  int result; // eax
  wchar_t **v6; // esi
  wchar_t *v7; // ecx
  char *v8; // eax

  v4 = SetComboBoxSelection(hDlg, (int)nIDDlgItem, -1); /*0x5e9cf0*/
  result = Dialog::SideIDToIndex(nIDDlgItem); /*0x5e9cf2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9cfd*/
  {
    FillComboBoxSides(hDlg, (int)nIDDlgItem); /*0x5e9d07*/
    if ( v4 != -2 ) /*0x5e9d0f*/
    {
      v6 = (wchar_t **)dword_A8DA90; /*0x5e9d11*/
      while ( 1 ) /*0x5e9d16*/
      {
        v7 = *v6; /*0x5e9d16*/
        if ( *v6 ) /*0x5e9d16*/
        {
          if ( v7 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5e9d5b*/
            && v7 != (wchar_t *)g_Lobby_PlayerCount
            && v7 != g_Lobby_PlayerReady
            && v7 != (wchar_t *)g_Lobby_MaxPlayers
            && v7 != (wchar_t *)g_Lobby_PlayerTeam
            && v7 != (wchar_t *)g_Lobby_PlayerSide
            && v7 != (wchar_t *)g_Lobby_PlayerColor
            && SessionClass::GetOption((int *)v7) == v4 )
          {
            break; /*0x5e9d5b*/
          }
        }
        if ( (int)++v6 >= (int)&dword_A8DAB0 ) /*0x5e9d66*/
        {
          v8 = &stru_A8B250.__pad_0[140]; /*0x5e9d68*/
          while ( *(_DWORD *)v8 != v4 ) /*0x5e9d6f*/
          {
            v8 += 4; /*0x5e9d71*/
            if ( (int)v8 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5e9d79*/
              goto LABEL_19; /*0x5e9d79*/
          }
          break; /*0x5e9d6f*/
        }
      }
      v4 = -2; /*0x5e9d7d*/
    }
LABEL_19:
    result = dword_A8DA84; /*0x5e9d82*/
    if ( dword_A8DA84 ) /*0x5e9d89*/
      return SessionClass::SetOption((int *)*dword_A8DA78, v4); /*0x5e9d93*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 140] = v4; /*0x5e9d9c*/
  }
  return result; /*0x5e9d98*/
}



// ==== 0x005E9DB0  ProcessNetworkLobbyOption  this=-  sig=csp ====
int __fastcall ProcessNetworkLobbyOption(HWND hDlg, Dialog *nIDDlgItem)
{
  int ComboBoxSelectedRaw2; // ebx
  int result; // eax

  ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItem, -1); /*0x5e9dc0*/
  result = Dialog::OptionIDToIndex(nIDDlgItem); /*0x5e9dc2*/
  if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9dcd*/
  {
    SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItem, ComboBoxSelectedRaw2); /*0x5e9dd4*/
    result = dword_A8DA84; /*0x5e9dd9*/
    if ( dword_A8DA84 ) /*0x5e9de0*/
      return SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9dea*/
  }
  else
  {
    *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9df3*/
  }
  return result; /*0x5e9def*/
}



// ==== 0x005E9E00  NetworkLobby::InitLobbyDropdowns  this=NetworkLobby  sig=csp ====
int __thiscall NetworkLobby::InitLobbyDropdowns(NetworkLobby *this)
{
  int i; // ebp
  Dialog *ResourceID4CSF; // esi
  int ComboBoxSelectedRaw2; // edi
  int result; // eax

  for ( i = 0; i < 8; ++i ) /*0x5e9e06*/
  {
    ResourceID4CSF = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5e9e0f*/
    ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2((HWND)this, (int)ResourceID4CSF, -1); /*0x5e9e1e*/
    result = Dialog::OptionIDToIndex(ResourceID4CSF); /*0x5e9e20*/
    if ( (ObjectClass *)result == dword_A8DA8C ) /*0x5e9e2b*/
    {
      SetupLobbyPlayerSlots((HWND)this, (int)ResourceID4CSF, ComboBoxSelectedRaw2); /*0x5e9e32*/
      result = dword_A8DA84; /*0x5e9e37*/
      if ( dword_A8DA84 ) /*0x5e9e3e*/
        result = SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5e9e48*/
    }
    else
    {
      *(_DWORD *)&stru_A8B250.__pad_0[4 * result + 172] = ComboBoxSelectedRaw2; /*0x5e9e4f*/
    }
  }
  return result; /*0x5e9e5c*/
}



// ==== 0x005E9E70  SetupSkirmishPlayerSlots  this=NetworkLobby  sig=csp ====
int __fastcall SetupSkirmishPlayerSlots(HWND hDlg, void *a2, HWND hWnd)
{
  int ResourceID2CSF; // edi
  int ResourceIDCSF; // ebx
  LPARAM v7; // eax
  HWND DlgItem; // eax
  HWND v9; // ebx
  HWND v10; // esi
  int result; // eax
  HWND v12; // eax
  HWND v13; // ebp
  int PlayerCountMap; // esi
  int v15; // eax
  int nIDDlgItem; // [esp+10h] [ebp-10h]
  HWND nIDDlgItema; // [esp+10h] [ebp-10h]
  int ResourceID4CSF; // [esp+14h] [ebp-Ch]
  HWND v20; // [esp+1Ch] [ebp-4h]
  HWND hWnda; // [esp+24h] [ebp+4h]

  ResourceID2CSF = GetResourceID2CSF((ObjectClass *)a2); /*0x5e9e88*/
  ResourceIDCSF = GetResourceIDCSF((ObjectClass *)a2); /*0x5e9e91*/
  nIDDlgItem = GetResourceID3CSF((ObjectClass *)a2); /*0x5e9e9a*/
  ResourceID4CSF = GetResourceID4CSF((ObjectClass *)a2); /*0x5e9ea3*/
  if ( (int)g_MPCooperativeState >= 0 /*0x5e9ed5*/
    && a2 == g_MPCooperativeState
    && ((v7 = dword_A8DA90[(_DWORD)a2], v7 == g_Lobby_MaxPlayers) || !a2 || *(_DWORD *)(v7 + 107) == -1) )
  {
    SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -3); /*0x5e9ee1*/
    SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9eec*/
    SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9ef9*/
    SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9f06*/
    DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9f13*/
    EnableWindow(DlgItem, 0); /*0x5e9f1e*/
    v9 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9f24*/
    EnableWindow(v9, 0); /*0x5e9f29*/
    ShowWindow(v9, 0); /*0x5e9f34*/
    hWnda = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9f41*/
    EnableWindow(hWnda, 0); /*0x5e9f45*/
    ShowWindow(hWnda, 0); /*0x5e9f4e*/
    v10 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9f58*/
    EnableWindow(v10, 0); /*0x5e9f5d*/
    return ShowWindow(v10, 0); /*0x5e9f62*/
  }
  else
  {
    if ( !(_BYTE)hWnd ) /*0x5e9f74*/
    {
      SetupLobbyCountryCombo(hDlg, ResourceID2CSF, -2); /*0x5e9f7c*/
      SetupSkirmishSpawnLocations(hDlg, ResourceIDCSF, -2); /*0x5e9f87*/
      SetupLobbyFactionSlots(hDlg, nIDDlgItem, -2); /*0x5e9f94*/
      SetupLobbyPlayerSlots(hDlg, ResourceID4CSF, -2); /*0x5e9fa1*/
    }
    v12 = GetDlgItem(hDlg, ResourceID2CSF); /*0x5e9fae*/
    EnableWindow(v12, (unsigned __int8)hWnd); /*0x5e9fbc*/
    v20 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5e9fce*/
    EnableWindow(v20, (unsigned __int8)hWnd); /*0x5e9fd2*/
    nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5e9fde*/
    EnableWindow(nIDDlgItema, (unsigned __int8)hWnd); /*0x5e9fe2*/
    v13 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5e9fec*/
    if ( (_BYTE)hWnd && dword_A8B23C && !LOBYTE(dword_A8B23C->ambientSoundController[0]) ) /*0x5e9fff*/
      EnableWindow(v13, 0); /*0x5ea008*/
    else
      EnableWindow(v13, (unsigned __int8)hWnd); /*0x5ea00c*/
    if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ea01c*/
    {
      PlayerCountMap = 8; /*0x5ea01e*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ea030*/
      if ( dword_A8B23C ) /*0x5ea034*/
      {
        v15 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ea038*/
        if ( v15 != -1 && v15 < PlayerCountMap ) /*0x5ea045*/
          PlayerCountMap = v15; /*0x5ea047*/
      }
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ea04f*/
      {
        if ( Network::IsLobbyFeature() ) /*0x5ea051*/
        {
          PlayerCountMap &= ~1u; /*0x5ea05a*/
        }
        else if ( Network::IsMultiplayerActive() ) /*0x5ea05f*/
        {
          PlayerCountMap = 2; /*0x5ea068*/
        }
      }
    }
    if ( !g_MPCooperativeState && PlayerCountMap < 7 ) /*0x5ea07a*/
      ++PlayerCountMap; /*0x5ea07c*/
    result = (int)a2; /*0x5ea07d*/
    if ( (int)a2 < PlayerCountMap || a2 == g_MPCooperativeState ) /*0x5ea087*/
    {
      ShowWindow(v20, 5); /*0x5ea096*/
      ShowWindow(nIDDlgItema, 5); /*0x5ea09f*/
      if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x5ea0a7*/
        return ShowWindow(v13, 5); /*0x5ea0a7*/
      LOBYTE(result) = Network::IsLobbyFeature(); /*0x5ea0a9*/
      if ( !(_BYTE)result ) /*0x5ea0b0*/
        return ShowWindow(v13, 5); /*0x5ea0b5*/
    }
  }
  return result; /*0x5e9f64*/
}



// ==== 0x005EA0D0  sub_5EA0D0  this=-  sig=ida-proto ====
int __fastcall sub_5EA0D0(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea0f9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea105*/
          break;
        case 3:
          v4 = 1044; /*0x5ea111*/
          break;
        case 4:
          v4 = 1045; /*0x5ea11d*/
          break;
        case 5:
          v4 = 1046; /*0x5ea129*/
          break;
        case 6:
          v4 = 1047; /*0x5ea135*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea0ed*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea151*/
    EnableWindow(DlgItem, 1); /*0x5ea156*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea15e*/
  }
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea176*/
}



// ==== 0x005EA180  GameLobby_Setup  this=-  sig=csp ====
int __fastcall GameLobby_Setup(HWND hDlg, void *a2)
{
  int i; // esi
  int v4; // eax
  HWND DlgItem; // eax
  int v6; // eax
  HWND v7; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v4 = 1042; /*0x5ea1a9*/
          break;
        case 2:
          v4 = 1043; /*0x5ea1b5*/
          break;
        case 3:
          v4 = 1044; /*0x5ea1c1*/
          break;
        case 4:
          v4 = 1045; /*0x5ea1cd*/
          break;
        case 5:
          v4 = 1046; /*0x5ea1d9*/
          break;
        case 6:
          v4 = 1047; /*0x5ea1e5*/
          break;
        default:
          v4 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v4 = 1041; /*0x5ea19d*/
    }
    DlgItem = GetDlgItem(hDlg, v4); /*0x5ea201*/
    EnableWindow(DlgItem, 0); /*0x5ea206*/
    SetupSkirmishPlayerSlots(hDlg, (void *)i, 0); /*0x5ea20e*/
  }
  if ( a2 )
  {
    if ( a2 == (void *)1 )
    {
      v6 = 1042; /*0x5ea22d*/
    }
    else if ( a2 == (void *)2 )
    {
      v6 = 1043; /*0x5ea239*/
    }
    else if ( a2 == (void *)3 )
    {
      v6 = 1044; /*0x5ea245*/
    }
    else if ( a2 == (void *)4 )
    {
      v6 = 1045; /*0x5ea251*/
    }
    else if ( a2 == (void *)5 )
    {
      v6 = 1046; /*0x5ea25d*/
    }
    else if ( a2 == (void *)6 )
    {
      v6 = 1047; /*0x5ea269*/
    }
    else
    {
      v6 = a2 != (void *)7 ? -1 : 1048;
    }
  }
  else
  {
    v6 = 1041; /*0x5ea221*/
  }
  v7 = GetDlgItem(hDlg, v6); /*0x5ea285*/
  EnableWindow(v7, 1); /*0x5ea28a*/
  return SetupSkirmishPlayerSlots(hDlg, a2, (HWND)1); /*0x5ea297*/
}



// ==== 0x005EA2A0  NetworkLobby::Dispatch  this=NetworkLobby  sig=csp ====
HWND *__thiscall NetworkLobby::Dispatch(NetworkLobby *this)
{
  int i; // esi
  int v2; // eax
  HWND DlgItem; // ebx
  wchar_t *v4; // eax
  HWND v5; // edi
  int v6; // eax
  LPARAM v7; // eax
  HWND *result; // eax

  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v2 = 1747; /*0x5ea2c1*/
          break;
        case 2:
          v2 = 1748; /*0x5ea2cd*/
          break;
        case 3:
          v2 = 1749; /*0x5ea2d9*/
          break;
        case 4:
          v2 = 1750; /*0x5ea2e5*/
          break;
        case 5:
          v2 = 1751; /*0x5ea2f1*/
          break;
        case 6:
          v2 = 1752; /*0x5ea2fd*/
          break;
        default:
          v2 = i != 7 ? -1 : 1753;
          break;
      }
    }
    else
    {
      v2 = 1746; /*0x5ea2b5*/
    }
    DlgItem = GetDlgItem((HWND)this, v2); /*0x5ea31f*/
    v4 = (wchar_t *)dword_A8DA90[i]; /*0x5ea321*/
    v5 = 0; /*0x5ea328*/
    if ( v4 /*0x5ea36c*/
      && v4 != (wchar_t *)g_HouseClass_ObserverFlags
      && v4 != (wchar_t *)g_Lobby_PlayerCount
      && v4 != g_Lobby_PlayerReady
      && v4 != (wchar_t *)g_Lobby_MaxPlayers
      && v4 != (wchar_t *)g_Lobby_PlayerTeam
      && v4 != (wchar_t *)g_Lobby_PlayerSide
      && v4 != (wchar_t *)g_Lobby_PlayerColor
      && !wcscmp(v4, (const wchar_t *)&stru_A8D600.Network_field_0x10) )
    {
      v6 = HashTable::Find(&g_DialogHashTable, (const char *)off_8316CC, 0); /*0x5ea380*/
LABEL_33:
      v5 = (HWND)v6; /*0x5ea3be*/
      goto LABEL_34; /*0x5ea3be*/
    }
    v7 = dword_A8DA90[i]; /*0x5ea382*/
    if ( v7 && (v7 == g_Lobby_PlayerTeam || v7 == g_Lobby_PlayerSide || v7 == g_Lobby_PlayerColor) /*0x5ea3a9*/
      || *(_DWORD *)(v7 + 119) == 1 )
    {
      v6 = HashTable::Find(&g_DialogHashTable, off_8316D0, 0); /*0x5ea3b9*/
      goto LABEL_33; /*0x5ea3b9*/
    }
LABEL_34:
    result = CacheDialogInvalidate(DlgItem, v5); /*0x5ea3c0*/
  }
  return result; /*0x5ea3d3*/
}



// ==== 0x005EA3E0  RefreshLobbyAll  this=MultiplayerLobby  sig=csp ====
HWND *__fastcall Lobby_RefreshAll(HWND hDlg, char a2)
{
  HWND v2; // edi
  int v3; // esi
  int ResourceID_Hardcoded; // eax
  HWND DlgItem; // edi
  void *v6; // eax
  HWND Default; // eax
  int i; // esi
  int ResourceID2; // edi
  int v10; // eax
  void *v11; // eax
  void *v12; // ebp
  int ResourceID; // esi
  int v14; // eax
  HWND v15; // edi
  int j; // esi
  int v17; // ebx
  int v18; // eax
  int k; // esi
  int ResourceID3; // ebx
  int v21; // eax
  int m; // esi
  int ResourceID4; // ebx
  int v24; // eax
  int v25; // ebp
  const wchar_t **v26; // ebx
  int v27; // eax
  HWND v28; // eax
  const wchar_t *v29; // esi
  HWND v30; // edi
  wchar_t *v31; // ecx
  int v32; // eax
  HWND *result; // eax
  int v34; // ebp
  const wchar_t **v35; // ebx
  int v36; // eax
  HWND v37; // eax
  const wchar_t *v38; // esi
  HWND v39; // edi
  wchar_t *v40; // ecx
  int v41; // eax
  int n; // esi
  int v43; // eax
  HWND v44; // edi
  void *v45; // eax
  HWND v46; // eax
  int v47; // ebx
  int v48; // eax
  int ii; // esi
  int v50; // edi
  int v51; // eax
  char Buffer[4]; // [esp+14h] [ebp-4h] BYREF

  v2 = hDlg; /*0x5ea3e7*/
  if ( a2 ) /*0x5ea3ef*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea3f5*/
    v3 = 0; /*0x5ea3fa*/
    while ( 1 ) /*0x5ea404*/
    {
      ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v3); /*0x5ea404*/
      DlgItem = GetDlgItem(v2, ResourceID_Hardcoded); /*0x5ea413*/
      v6 = (void *)GetPlayerSide(v3); /*0x5ea415*/
      Default = (HWND)BuildingType::FindDefault(v6); /*0x5ea41c*/
      CacheDialogInvalidate(DlgItem, Default); /*0x5ea425*/
      if ( ++v3 >= 8 ) /*0x5ea42e*/
        break; /*0x5ea42e*/
      v2 = hDlg; /*0x5ea3fe*/
    }
    for ( i = 0; i < 8; ++i ) /*0x5ea430*/
    {
      ResourceID2 = GetResourceID2CSF((void *)i); /*0x5ea43b*/
      v10 = GetPlayerSide(i); /*0x5ea43d*/
      SetupLobbyCountryCombo(hDlg, ResourceID2, v10); /*0x5ea449*/
    }
    v11 = (void *)RefreshLobbyAll_Helper(); /*0x5ea454*/
    v12 = v11; /*0x5ea459*/
    if ( v11 == (void *)-1 ) /*0x5ea45e*/
    {
      v15 = hDlg; /*0x5ea480*/
    }
    else
    {
      ResourceID = GetResourceIDCSF(v11); /*0x5ea469*/
      v14 = RefreshLobbyAll_Play(v12); /*0x5ea46b*/
      v15 = hDlg; /*0x5ea470*/
      SetupSkirmishSpawnLocations(hDlg, ResourceID, v14); /*0x5ea479*/
    }
    for ( j = 0; j < 8; ++j ) /*0x5ea484*/
    {
      if ( (void *)j != v12 ) /*0x5ea488*/
      {
        v17 = GetResourceIDCSF((void *)j); /*0x5ea493*/
        v18 = RefreshLobbyAll_Play(j); /*0x5ea495*/
        SetupSkirmishSpawnLocations(v15, v17, v18); /*0x5ea49f*/
      }
    }
    for ( k = 0; k < 8; ++k ) /*0x5ea4aa*/
    {
      ResourceID3 = GetResourceID3CSF((void *)k); /*0x5ea4b5*/
      v21 = RefreshLobbyAll_Get(k); /*0x5ea4b7*/
      SetupLobbyFactionSlots(v15, ResourceID3, v21); /*0x5ea4c1*/
    }
    for ( m = 0; m < 8; ++m ) /*0x5ea4cc*/
    {
      ResourceID4 = GetResourceID4CSF((void *)m); /*0x5ea4d7*/
      v24 = RefreshLobbyAll_Get_5EAA70(m); /*0x5ea4d9*/
      SetupLobbyPlayerSlots(v15, ResourceID4, v24); /*0x5ea4e3*/
    }
    v25 = 0; /*0x5ea4ee*/
    v26 = (const wchar_t **)&dword_A8DA90; /*0x5ea4f0*/
    while ( 1 ) /*0x5ea4f7*/
    {
      v27 = RefreshLobbyAll_Helper_5EAAD0(v25); /*0x5ea4f7*/
      v28 = GetDlgItem(hDlg, v27); /*0x5ea502*/
      v29 = *v26; /*0x5ea508*/
      v30 = 0; /*0x5ea50a*/
      v31 = (wchar_t *)*v26; /*0x5ea50c*/
      *(_DWORD *)Buffer = v28; /*0x5ea50e*/
      if ( IsKnownPointer(v31) ) /*0x5ea512*/
      {
        if ( !wcscmp(v29, &word_A8D610) ) /*0x5ea521*/
          break; /*0x5ea521*/
      }
      if ( RefreshLobbyAll_Helper_5EA8E0(v25) == 1 ) /*0x5ea541*/
      {
        v32 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea551*/
        goto LABEL_24; /*0x5ea551*/
      }
LABEL_25:
      result = CacheDialogInvalidate(*(HWND *)Buffer, v30); /*0x5ea558*/
      ++v26; /*0x5ea563*/
      ++v25; /*0x5ea566*/
      if ( (int)v26 >= (int)&dword_A8DAB0 ) /*0x5ea56d*/
      {
        if ( dword_A8B238 == 4 ) /*0x5ea576*/
          result = (HWND *)RefreshLobbyAll_Set(); /*0x5ea578*/
        if ( dword_A8B23C ) /*0x5ea585*/
          return (HWND *)(*(int (__thiscall **)(int, HWND))(*(_DWORD *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea592*/
        return result; /*0x5ea59c*/
      }
    }
    v32 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea535*/
LABEL_24:
    v30 = (HWND)v32; /*0x5ea556*/
    goto LABEL_25; /*0x5ea556*/
  }
  if ( dword_A8B23C ) /*0x5ea5a5*/
    (*(void (__thiscall **)(int, HWND))(*(_DWORD *)dword_A8B23C + 120))(dword_A8B23C, hDlg); /*0x5ea5aa*/
  v34 = 0; /*0x5ea5ad*/
  v35 = (const wchar_t **)&dword_A8DA90; /*0x5ea5af*/
  while ( 1 ) /*0x5ea5da*/
  {
    v36 = RefreshLobbyAll_Helper_5EAAD0(v34); /*0x5ea5bc*/
    v37 = GetDlgItem(v2, v36); /*0x5ea5c3*/
    v38 = *v35; /*0x5ea5c9*/
    v39 = 0; /*0x5ea5cb*/
    v40 = (wchar_t *)*v35; /*0x5ea5cd*/
    *(_DWORD *)Buffer = v37; /*0x5ea5cf*/
    if ( IsKnownPointer(v40) && !wcscmp(v38, &word_A8D610) ) /*0x5ea5e2*/
    {
      v41 = HashTable::Find(g_DialogHashTable, off_8316CC[0], 0); /*0x5ea5f6*/
    }
    else
    {
      if ( RefreshLobbyAll_Helper_5EA8E0(v34) != 1 ) /*0x5ea602*/
        goto LABEL_40; /*0x5ea602*/
      v41 = HashTable::Find(g_DialogHashTable, off_8316D0, 0); /*0x5ea612*/
    }
    v39 = (HWND)v41; /*0x5ea617*/
LABEL_40:
    CacheDialogInvalidate(*(HWND *)Buffer, v39); /*0x5ea61f*/
    ++v35; /*0x5ea624*/
    ++v34; /*0x5ea627*/
    if ( (int)v35 >= (int)&dword_A8DAB0 ) /*0x5ea62e*/
      break; /*0x5ea62e*/
    v2 = hDlg; /*0x5ea5b6*/
  }
  wcscpy(&word_AC0D44, &word_AC0B94); /*0x5ea63a*/
  Player::BuildListString(&word_AC0B94); /*0x5ea647*/
  if ( wcscmp(&word_AC0D44, &word_AC0B94) ) /*0x5ea656*/
  {
    Lobby::UpdatePlayerLabels(hDlg); /*0x5ea668*/
    if ( dword_A8B238 == 4 ) /*0x5ea674*/
      RefreshLobbyAll_Set(); /*0x5ea676*/
  }
  for ( n = 0; n < 8; ++n ) /*0x5ea67b*/
  {
    v43 = GetResourceIDHardcodedCSF((void *)n); /*0x5ea67f*/
    v44 = GetDlgItem(hDlg, v43); /*0x5ea68e*/
    v45 = (void *)GetPlayerSide(n); /*0x5ea690*/
    v46 = (HWND)BuildingType::FindDefault(v45); /*0x5ea697*/
    CacheDialogInvalidate(v44, v46); /*0x5ea6a0*/
  }
  strcpy(&byte_AC0EA4, &byte_AC0B10); /*0x5ea6c7*/
  v47 = 0; /*0x5ea6ce*/
  byte_AC0B10 = 0; /*0x5ea6d2*/
  do /*0x5ea723*/
  {
    v48 = GetPlayerSide(v47); /*0x5ea6db*/
    sprintf(Buffer, "%d,", v48); /*0x5ea6eb*/
    strcat(&byte_AC0B10, Buffer); /*0x5ea716*/
    ++v47; /*0x5ea71d*/
  }
  while ( v47 < 8 ); /*0x5ea723*/
  if ( strcmp(&byte_AC0EA4, &byte_AC0B10) ) /*0x5ea737*/
  {
    for ( ii = 0; ii < 8; ++ii ) /*0x5ea760*/
    {
      v50 = GetResourceID2CSF((void *)ii); /*0x5ea76b*/
      v51 = GetPlayerSide(ii); /*0x5ea76d*/
      SetupLobbyCountryCombo(hDlg, v50, v51); /*0x5ea777*/
    }
  }
  strcpy(&byte_AC0AC8, &byte_AC0AEC); /*0x5ea79e*/
  RefreshLobbyAll_Play_5EAB30(&byte_AC0AEC); /*0x5ea7ac*/
  if ( strcmp(&byte_AC0AC8, &byte_AC0AEC) ) /*0x5ea7c3*/
    RefreshLobbyAll_Play_5EAEE0(hDlg); /*0x5ea7ee*/
  strcpy(byte_AC0A9C, byte_AC0B6C); /*0x5ea80f*/
  RefreshLobbyAll_Get_5EAC00(byte_AC0B6C); /*0x5ea81d*/
  if ( strcmp(byte_AC0A9C, byte_AC0B6C) ) /*0x5ea834*/
    RefreshLobbyAll_Get_5EADA0(hDlg); /*0x5ea85f*/
  strcpy(byte_AC0278, byte_AC0B48); /*0x5ea880*/
  RefreshLobbyAll_Get_5EACD0(byte_AC0B48); /*0x5ea88e*/
  result = (HWND *)strcmp(byte_AC0278, byte_AC0B48); /*0x5ea8a5*/
  if ( result ) /*0x5ea8cc*/
    return (HWND *)RefreshLobbyAll_Setup(hDlg); /*0x5ea8d0*/
  return result; /*0x5ea595*/
}



// ==== 0x005EA8E0  RefreshLobbyAll_Helper_5EA8E0  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA8E0(int a1)
{
  int v1; // ecx
  int result; // eax

  v1 = *(&dword_A8DA90 + a1); /*0x5ea8e0*/
  result = 0; /*0x5ea8e7*/
  if ( v1 && (v1 == g_Lobby_PlayerTeam || v1 == g_Lobby_PlayerSide || v1 == g_Lobby_PlayerColor) /*0x5ea909*/
    || *(_DWORD *)(v1 + 119) == 1 )
  {
    return 1; /*0x5ea90b*/
  }
  return result; /*0x5ea910*/
}



// ==== 0x005EA920  GetPlayerSide  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA920(int a1)
{
  int result; // eax
  wchar_t *v3; // esi

  result = -2; /*0x5ea924*/
  v3 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5ea92f*/
  if ( dword_A8B23C && (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) ) /*0x5ea948*/
    result = (*(int (**)(void))(*(_DWORD *)dword_A8B23C + 40))(); /*0x5ea94c*/
  if ( v3 /*0x5ea969*/
    && (v3 == (wchar_t *)g_Lobby_PlayerTeam
     || v3 == (wchar_t *)g_Lobby_PlayerSide
     || v3 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B29C][a1]; /*0x5ea96b*/
  }
  if ( v3 != (wchar_t *)g_HouseClass_ObserverFlags && v3 != (wchar_t *)g_Lobby_PlayerCount && v3 != g_Lobby_PlayerReady ) /*0x5ea98b*/
  {
    if ( v3 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ea993*/
      return -3; /*0x5ea996*/
    else
      return SessionClass::GetPlayerSide((int)v3); /*0x5ea99f*/
  }
  return result; /*0x5ea972*/
}



// ==== 0x005EA9B0  RefreshLobbyAll_Play  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EA9B0(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5ea9b0*/
  if ( v1 /*0x5ea9d1*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2BC][a1]; /*0x5ea9d3*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5ea9f9*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaa02*/
  }
  return SessionClass::GetPlayerColor(*(&dword_A8DA90 + a1)); /*0x5ea9da*/
}



// ==== 0x005EAA10  RefreshLobbyAll_Get  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EAA10(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5eaa10*/
  if ( v1 /*0x5eaa31*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2DC][a1]; /*0x5eaa33*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5eaa59*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaa62*/
  }
  return SessionClass::GetOption(*(&dword_A8DA90 + a1)); /*0x5eaa3a*/
}



// ==== 0x005EAA70  RefreshLobbyAll_Get_5EAA70  this=ObjectClass  sig=ida-proto ====
int __fastcall sub_5EAA70(int a1)
{
  wchar_t *v1; // eax

  v1 = (wchar_t *)*(&dword_A8DA90 + a1); /*0x5eaa70*/
  if ( v1 /*0x5eaa91*/
    && (v1 == (wchar_t *)g_Lobby_PlayerTeam
     || v1 == (wchar_t *)g_Lobby_PlayerSide
     || v1 == (wchar_t *)g_Lobby_PlayerColor) )
  {
    return MEMORY[0xA8B2FC][a1]; /*0x5eaa93*/
  }
  if ( v1 == (wchar_t *)g_HouseClass_ObserverFlags /*0x5eaab9*/
    || v1 == (wchar_t *)g_Lobby_PlayerCount
    || v1 == g_Lobby_PlayerReady
    || v1 == (wchar_t *)g_Lobby_MaxPlayers )
  {
    return -2; /*0x5eaac2*/
  }
  return SessionClass::GetOption2(*(&dword_A8DA90 + a1)); /*0x5eaa9a*/
}



// ==== 0x005EAAD0  ObjectClass::RefreshLobbyAll_Helper_5EAAD0  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Helper_5EAAD0(ObjectClass *this)
{
  if ( !this ) /*0x5eaad4*/
    return 1746; /*0x5eaad6*/
  if ( this == (ObjectClass *)1 ) /*0x5eaadf*/
    return 1747; /*0x5eaae1*/
  if ( this == (ObjectClass *)2 ) /*0x5eaaea*/
    return 1748; /*0x5eaaec*/
  if ( this == (ObjectClass *)3 ) /*0x5eaaf5*/
    return 1749; /*0x5eaaf7*/
  if ( this == (ObjectClass *)4 ) /*0x5eab00*/
    return 1750; /*0x5eab02*/
  if ( this == (ObjectClass *)5 ) /*0x5eab0b*/
    return 1751; /*0x5eab0d*/
  if ( this == (ObjectClass *)6 ) /*0x5eab16*/
    return 1752; /*0x5eab18*/
  return this != (ObjectClass *)7 ? -1 : 1753;
}



// ==== 0x005EAB30  ObjectClass::RefreshLobbyAll_Play_5EAB30  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAB30(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int PlayerColor; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2BC]; /*0x5eab37*/
  *this = 0; /*0x5eab3c*/
  do /*0x5eabeb*/
  {
    v3 = (wchar_t *)v2[2549]; /*0x5eab40*/
    if ( v3 /*0x5eab60*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      PlayerColor = *v2; /*0x5eab62*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eab6c*/
    {
      PlayerColor = -2; /*0x5eab6e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eab7b*/
    {
      PlayerColor = -2; /*0x5eab7d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eab8a*/
    {
      PlayerColor = -2; /*0x5eab8c*/
    }
    else
    {
      PlayerColor = -2; /*0x5eab9a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eab9f*/
        PlayerColor = SessionClass::GetPlayerColor((int)v3); /*0x5eaba1*/
    }
    sprintf(Buffer, "%d,", PlayerColor); /*0x5eabb1*/
    result = 0; /*0x5eabbd*/
    ++v2; /*0x5eabc8*/
    strcat(this, Buffer); /*0x5eabdc*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2DC] ); /*0x5eabeb*/
  return result; /*0x5eabf1*/
}



// ==== 0x005EAC00  ObjectClass::RefreshLobbyAll_Get_5EAC00  this=ObjectClass  sig=csp ====
int __thiscall sub_5EAC00(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2DC]; /*0x5eac07*/
  *this = 0; /*0x5eac0c*/
  do /*0x5eacbb*/
  {
    v3 = (wchar_t *)v2[2541]; /*0x5eac10*/
    if ( v3 /*0x5eac30*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option = *v2; /*0x5eac32*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eac3c*/
    {
      Option = -2; /*0x5eac3e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eac4b*/
    {
      Option = -2; /*0x5eac4d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5eac5a*/
    {
      Option = -2; /*0x5eac5c*/
    }
    else
    {
      Option = -2; /*0x5eac6a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eac6f*/
        Option = SessionClass::GetOption((int)v3); /*0x5eac71*/
    }
    sprintf(Buffer, "%d,", Option); /*0x5eac81*/
    result = 0; /*0x5eac8d*/
    ++v2; /*0x5eac98*/
    strcat(this, Buffer); /*0x5eacac*/
  }
  while ( (int)v2 < (int)MEMORY[0xA8B2FC] ); /*0x5eacbb*/
  return result; /*0x5eacc1*/
}



// ==== 0x005EACD0  ObjectClass::RefreshLobbyAll_Get_5EACD0  this=ObjectClass  sig=csp ====
int __thiscall sub_5EACD0(char *this)
{
  int *v2; // ebx
  wchar_t *v3; // ecx
  int Option2; // eax
  int result; // eax
  char Buffer[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = MEMORY[0xA8B2FC]; /*0x5eacd7*/
  *this = 0; /*0x5eacdc*/
  do /*0x5ead8b*/
  {
    v3 = (wchar_t *)v2[2533]; /*0x5eace0*/
    if ( v3 /*0x5ead00*/
      && (v3 == (wchar_t *)g_Lobby_PlayerTeam
       || v3 == (wchar_t *)g_Lobby_PlayerSide
       || v3 == (wchar_t *)g_Lobby_PlayerColor) )
    {
      Option2 = *v2; /*0x5ead02*/
    }
    else if ( v3 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5ead0c*/
    {
      Option2 = -2; /*0x5ead0e*/
    }
    else if ( v3 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5ead1b*/
    {
      Option2 = -2; /*0x5ead1d*/
    }
    else if ( v3 == g_Lobby_PlayerReady ) /*0x5ead2a*/
    {
      Option2 = -2; /*0x5ead2c*/
    }
    else
    {
      Option2 = -2; /*0x5ead3a*/
      if ( v3 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ead3f*/
        Option2 = SessionClass::GetOption2((int)v3); /*0x5ead41*/
    }
    sprintf(Buffer, "%d,", Option2); /*0x5ead51*/
    result = 0; /*0x5ead5d*/
    ++v2; /*0x5ead68*/
    strcat(this, Buffer); /*0x5ead7c*/
  }
  while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ead8b*/
  return result; /*0x5ead91*/
}



// ==== 0x005EADA0  ObjectClass::RefreshLobbyAll_Get_5EADA0  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Get_5EADA0(ObjectClass *this)
{
  ObjectClass *v2; // edi
  int *v3; // esi
  int ResourceID3CSF; // eax
  int *v5; // ecx
  int v6; // ebx
  int Option; // eax
  int result; // eax

  v2 = 0; /*0x5eada6*/
  v3 = (int *)&stru_A8B250.__pad_0[140]; /*0x5eada8*/
  do /*0x5eae30*/
  {
    ResourceID3CSF = GetResourceID3CSF(v2); /*0x5eadaf*/
    v5 = (int *)v3[2541]; /*0x5eadb4*/
    v6 = ResourceID3CSF; /*0x5eadba*/
    if ( v5 && (v5 == (int *)g_Lobby_PlayerTeam || v5 == (int *)g_Lobby_PlayerSide || v5 == (int *)g_Lobby_PlayerColor) ) /*0x5eadd6*/
    {
      Option = *v3; /*0x5eadd8*/
    }
    else if ( v5 == (int *)g_HouseClass_ObserverFlags ) /*0x5eade2*/
    {
      Option = -2; /*0x5eade4*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerCount ) /*0x5eadf1*/
    {
      Option = -2; /*0x5eadf3*/
    }
    else if ( v5 == (int *)g_Lobby_PlayerReady ) /*0x5eae00*/
    {
      Option = -2; /*0x5eae02*/
    }
    else
    {
      Option = -2; /*0x5eae10*/
      if ( v5 != (int *)g_Lobby_MaxPlayers ) /*0x5eae15*/
        Option = SessionClass::GetOption(v5); /*0x5eae17*/
    }
    result = SetupLobbyFactionSlots((HWND)this, v6, Option); /*0x5eae21*/
    ++v3; /*0x5eae26*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eae29*/
  }
  while ( (int)v3 < (int)&stru_A8B250.__pad_0[172] ); /*0x5eae30*/
  return result; /*0x5eae36*/
}



// ==== 0x005EAE40  ObjectClass::RefreshLobbyAll_Setup  this=ObjectClass  sig=csp ====
int __thiscall RefreshLobbyAll_Setup(ObjectClass *this)
{
  ObjectClass *v2; // edi
  int *v3; // esi
  int ResourceID4CSF; // eax
  SessionClass *v5; // ecx
  int v6; // ebx
  int Option2; // eax
  int result; // eax

  v2 = 0; /*0x5eae46*/
  v3 = (int *)&stru_A8B250.__pad_0[172]; /*0x5eae48*/
  do /*0x5eaed0*/
  {
    ResourceID4CSF = GetResourceID4CSF(v2); /*0x5eae4f*/
    v5 = (SessionClass *)v3[2533]; /*0x5eae54*/
    v6 = ResourceID4CSF; /*0x5eae5a*/
    if ( v5 /*0x5eae76*/
      && (v5 == (SessionClass *)g_Lobby_PlayerTeam
       || v5 == (SessionClass *)g_Lobby_PlayerSide
       || v5 == (SessionClass *)g_Lobby_PlayerColor) )
    {
      Option2 = *v3; /*0x5eae78*/
    }
    else if ( v5 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eae82*/
    {
      Option2 = -2; /*0x5eae84*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eae91*/
    {
      Option2 = -2; /*0x5eae93*/
    }
    else if ( v5 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaea0*/
    {
      Option2 = -2; /*0x5eaea2*/
    }
    else
    {
      Option2 = -2; /*0x5eaeb0*/
      if ( v5 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eaeb5*/
        Option2 = SessionClass::GetOption2(v5); /*0x5eaeb7*/
    }
    result = SetupLobbyPlayerSlots((HWND)this, v6, Option2); /*0x5eaec1*/
    ++v3; /*0x5eaec6*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eaec9*/
  }
  while ( (int)v3 < (int)&byte_A8B31C ); /*0x5eaed0*/
  return result; /*0x5eaed6*/
}



// ==== 0x005EAEE0  ObjectClass::RefreshLobbyAll_Play_5EAEE0  this=ObjectClass  sig=csp ====
const wchar_t *__thiscall RefreshLobbyAll_Play_5EAEE0(ObjectClass *this)
{
  const wchar_t *result; // eax
  int v2; // ebp
  int v3; // edi
  const wchar_t **v4; // esi
  const wchar_t *v5; // ebx
  int v6; // esi
  int ResourceIDCSF; // eax
  SessionClass *v8; // ecx
  int v9; // edi
  int PlayerColor; // eax
  ObjectClass *v11; // edi
  int *v12; // esi
  int v13; // eax
  SessionClass *v14; // ecx
  int v15; // ebx
  int v16; // eax

  result = (const wchar_t *)dword_A8DA84; /*0x5eaee1*/
  if ( dword_A8DA84 ) /*0x5eaef0*/
  {
    v3 = 0; /*0x5eaeff*/
    v4 = (const wchar_t **)dword_A8DA90; /*0x5eaf01*/
    v5 = (const wchar_t *)*dword_A8DA78; /*0x5eaf06*/
    while ( 1 ) /*0x5eaf08*/
    {
      result = *v4; /*0x5eaf08*/
      if ( *v4 ) /*0x5eaf08*/
      {
        result = (const wchar_t *)_wcsicmp(v5, *v4); /*0x5eaf10*/
        if ( !result ) /*0x5eaf1a*/
          break; /*0x5eaf1a*/
      }
      ++v4; /*0x5eaf1c*/
      ++v3; /*0x5eaf1f*/
      if ( (int)v4 >= (int)&dword_A8DAB0 ) /*0x5eaf26*/
      {
        v6 = -1; /*0x5eaf28*/
        goto LABEL_8; /*0x5eaf28*/
      }
    }
    v6 = v3; /*0x5eaf6b*/
LABEL_8:
    v2 = v6; /*0x5eaf2b*/
    if ( v6 != -1 ) /*0x5eaf30*/
    {
      ResourceIDCSF = GetResourceIDCSF((ObjectClass *)v6); /*0x5eaf38*/
      v8 = (SessionClass *)dword_A8DA90[v6]; /*0x5eaf3d*/
      v9 = ResourceIDCSF; /*0x5eaf44*/
      if ( v8 /*0x5eaf60*/
        && (v8 == (SessionClass *)g_Lobby_PlayerTeam
         || v8 == (SessionClass *)g_Lobby_PlayerSide
         || v8 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        PlayerColor = *(_DWORD *)&stru_A8B250.__pad_0[4 * v6 + 108]; /*0x5eaf62*/
      }
      else if ( v8 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaf75*/
      {
        PlayerColor = -2; /*0x5eaf77*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eaf84*/
      {
        PlayerColor = -2; /*0x5eaf86*/
      }
      else if ( v8 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eaf93*/
      {
        PlayerColor = -2; /*0x5eaf95*/
      }
      else
      {
        PlayerColor = -2; /*0x5eafa3*/
        if ( v8 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eafa8*/
          PlayerColor = SessionClass::GetPlayerColor(v8); /*0x5eafaa*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v9, PlayerColor); /*0x5eafb6*/
    }
  }
  else
  {
    v2 = -1; /*0x5eaef2*/
  }
  v11 = 0; /*0x5eafbb*/
  v12 = (int *)&stru_A8B250.__pad_0[108]; /*0x5eafbd*/
  do /*0x5eb04b*/
  {
    if ( v11 != (ObjectClass *)v2 ) /*0x5eafc4*/
    {
      v13 = GetResourceIDCSF(v11); /*0x5eafc8*/
      v14 = (SessionClass *)v12[2549]; /*0x5eafcd*/
      v15 = v13; /*0x5eafd3*/
      if ( v14 /*0x5eafef*/
        && (v14 == (SessionClass *)g_Lobby_PlayerTeam
         || v14 == (SessionClass *)g_Lobby_PlayerSide
         || v14 == (SessionClass *)g_Lobby_PlayerColor) )
      {
        v16 = *v12; /*0x5eaff1*/
      }
      else if ( v14 == (SessionClass *)g_HouseClass_ObserverFlags ) /*0x5eaffb*/
      {
        v16 = -2; /*0x5eaffd*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerCount ) /*0x5eb00a*/
      {
        v16 = -2; /*0x5eb00c*/
      }
      else if ( v14 == (SessionClass *)g_Lobby_PlayerReady ) /*0x5eb019*/
      {
        v16 = -2; /*0x5eb01b*/
      }
      else
      {
        v16 = -2; /*0x5eb029*/
        if ( v14 != (SessionClass *)g_Lobby_MaxPlayers ) /*0x5eb02e*/
          v16 = SessionClass::GetPlayerColor(v14); /*0x5eb030*/
      }
      result = (const wchar_t *)SetupSkirmishSpawnLocations((HWND)this, v15, v16); /*0x5eb03c*/
    }
    ++v12; /*0x5eb041*/
    v11 = (ObjectClass *)((char *)v11 + 1); /*0x5eb044*/
  }
  while ( (int)v12 < (int)&stru_A8B250.__pad_0[140] ); /*0x5eb04b*/
  return result; /*0x5eb051*/
}



// ==== 0x005EB060  Lobby::UpdatePlayerLabels  this=Lobby  sig=csp ====
void __thiscall Lobby::UpdatePlayerLabels(Lobby *this)
{
  int v1; // esi
  int v2; // eax
  int PlayerCountMap; // esi
  int v4; // eax
  LPARAM v5; // eax
  int v6; // ebp
  HWND v7; // ebx
  HWND DlgItem; // esi
  wchar_t *v9; // ebx
  wchar_t *v10; // ebp
  wchar_t *StringCSF; // eax
  char *v12; // eax
  LRESULT v13; // eax
  char *v14; // eax
  int v15; // eax
  ObjectClass *v16; // ebp
  int v17; // ebx
  int v18; // eax
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  wchar_t *v23; // eax
  LRESULT v24; // eax
  wchar_t *v25; // eax
  LRESULT v26; // eax
  wchar_t *v27; // eax
  LRESULT v28; // eax
  wchar_t *v29; // eax
  LRESULT v30; // eax
  LRESULT v31; // eax
  wchar_t *v32; // eax
  char v33; // [esp+1h] [ebp-13h]
  char v34; // [esp+2h] [ebp-12h]
  bool v35; // [esp+3h] [ebp-11h]
  ObjectClass *v36; // [esp+4h] [ebp-10h]
  int v37; // [esp+8h] [ebp-Ch]
  __int64 v38; // [esp+Ch] [ebp-8h] BYREF

  HIDWORD(v38) = this; /*0x5eb063*/
  if ( dword_A8B23C /*0x5eb07a*/
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    || (v33 = 1, Network::IsMultiplayerActive()) )
  {
    v33 = 0; /*0x5eb088*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb09d*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0a8*/
      v1 = 6; /*0x5eb0b8*/
    else
      v1 = 2; /*0x5eb0b1*/
  }
  else
  {
    v1 = 8; /*0x5eb0bf*/
  }
  v37 = v1; /*0x5eb0c9*/
  if ( g_MPCooperativeState ) /*0x5eb0cf*/
    goto LABEL_26; /*0x5eb0cf*/
  if ( v33 ) /*0x5eb0d7*/
    goto LABEL_25; /*0x5eb0d7*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb0df*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb0ea*/
      v2 = 6; /*0x5eb0fa*/
    else
      v2 = 2; /*0x5eb0f3*/
  }
  else
  {
    v2 = 8; /*0x5eb101*/
  }
  if ( *(_DWORD *)&dword_A8B238 != 4 ) /*0x5eb10c*/
  {
    if ( v2 >= 8 ) /*0x5eb118*/
      goto LABEL_24; /*0x5eb118*/
    goto LABEL_23; /*0x5eb118*/
  }
  if ( v2 < 6 ) /*0x5eb111*/
LABEL_23:
    ++v2; /*0x5eb11a*/
LABEL_24:
  if ( v1 < v2 ) /*0x5eb11d*/
LABEL_25:
    v37 = v1 + 1; /*0x5eb11f*/
LABEL_26:
  v36 = 0; /*0x5eb124*/
  do
  {
    v34 = 0; /*0x5eb13d*/
    if ( v36 == g_MPCooperativeState ) /*0x5eb142*/
    {
      if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb151*/
      {
        PlayerCountMap = 8; /*0x5eb153*/
      }
      else
      {
        PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb165*/
        if ( dword_A8B23C ) /*0x5eb169*/
        {
          v4 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5eb16d*/
          if ( v4 != -1 && v4 < PlayerCountMap ) /*0x5eb17a*/
            PlayerCountMap = v4; /*0x5eb17c*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb185*/
        {
          if ( Network::IsLobbyFeature() ) /*0x5eb187*/
          {
            PlayerCountMap &= ~1u; /*0x5eb190*/
          }
          else if ( Network::IsMultiplayerActive() ) /*0x5eb195*/
          {
            PlayerCountMap = 2; /*0x5eb19e*/
          }
        }
      }
      if ( (int)v36 > PlayerCountMap ) /*0x5eb1a5*/
      {
        v5 = dword_A8DA90[(_DWORD)v36]; /*0x5eb1a7*/
        if ( v5 != g_HouseClass_ObserverFlags /*0x5eb1d2*/
          && (!v5 || v5 != g_Lobby_PlayerTeam && v5 != g_Lobby_PlayerSide && v5 != g_Lobby_PlayerColor) )
        {
          v34 = 1; /*0x5eb1d4*/
        }
      }
      if ( v36 == g_MPCooperativeState && dword_A8B23C ) /*0x5eb1e9*/
        (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C); /*0x5eb1ed*/
    }
    if ( v36 )
    {
      if ( v36 == (ObjectClass *)1 )
      {
        v6 = 1042; /*0x5eb203*/
      }
      else if ( v36 == (ObjectClass *)2 )
      {
        v6 = 1043; /*0x5eb20f*/
      }
      else if ( v36 == (ObjectClass *)3 )
      {
        v6 = 1044; /*0x5eb21b*/
      }
      else if ( v36 == (ObjectClass *)4 )
      {
        v6 = 1045; /*0x5eb227*/
      }
      else if ( v36 == (ObjectClass *)5 )
      {
        v6 = 1046; /*0x5eb233*/
      }
      else if ( v36 == (ObjectClass *)6 )
      {
        v6 = 1047; /*0x5eb23f*/
      }
      else
      {
        v6 = v36 != (ObjectClass *)7 ? -1 : 1048;
      }
    }
    else
    {
      v6 = 1041; /*0x5eb1f7*/
    }
    v7 = (HWND)HIDWORD(v38); /*0x5eb259*/
    DlgItem = GetDlgItem((HWND)HIDWORD(v38), v6); /*0x5eb265*/
    v35 = !ShowWindow(DlgItem, 0); /*0x5eb27d*/
    SendDlgItemMessageA(v7, v6, 0x14Bu, 0, 0); /*0x5eb282*/
    v9 = (wchar_t *)dword_A8DA90[(_DWORD)v36]; /*0x5eb291*/
    v10 = v9; /*0x5eb29a*/
    if ( v9 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5eb29c*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5436); /*0x5eb2af*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5eb2ba*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5438); /*0x5eb2cd*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5eb2d8*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5440); /*0x5eb2eb*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5eb2f3*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5442); /*0x5eb306*/
    }
    else if ( v9 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5eb30e*/
    {
      StringCSF = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5444); /*0x5eb321*/
    }
    else if ( v9 == g_Lobby_PlayerReady ) /*0x5eb329*/
    {
      StringCSF = GetStringCSF(aGuiWaiting, 0, g_Str_File_netshare_cpp, 5446); /*0x5eb33c*/
    }
    else
    {
      if ( v9 != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5eb344*/
        goto LABEL_79; /*0x5eb344*/
      StringCSF = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5448); /*0x5eb357*/
    }
    v10 = StringCSF; /*0x5eb35c*/
LABEL_79:
    if ( v9 /*0x5eb380*/
      && (v9 == (wchar_t *)g_Lobby_PlayerTeam
       || v9 == (wchar_t *)g_Lobby_PlayerSide
       || v9 == (wchar_t *)g_Lobby_PlayerColor)
      && !v33 )
    {
      v10 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5455); /*0x5eb398*/
    }
    WideString::Assign((wchar_t **)&v38, v10); /*0x5eb39f*/
    v12 = CharToWideString(unk_A8B380); /*0x5eb3a9*/
    if ( !wcscmp((const wchar_t *)v12, (const wchar_t *)&stru_A8D600.Network_field_0x10) ) /*0x5eb3b4*/
    {
      if ( v9 /*0x5eb3fe*/
        && v9 != (wchar_t *)g_HouseClass_ObserverFlags
        && v9 != (wchar_t *)g_Lobby_PlayerCount
        && v9 != g_Lobby_PlayerReady
        && v9 != (wchar_t *)g_Lobby_MaxPlayers
        && v9 != (wchar_t *)g_Lobby_PlayerTeam
        && v9 != (wchar_t *)g_Lobby_PlayerSide
        && v9 != (wchar_t *)g_Lobby_PlayerColor )
      {
        v13 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb409*/
        SendMessageA(DlgItem, 0x151u, v13, (LPARAM)v9); /*0x5eb413*/
      }
      v14 = CharToWideString(unk_A8B380); /*0x5eb41a*/
      v15 = wcscmp(v10, (const wchar_t *)v14); /*0x5eb421*/
      v16 = v36; /*0x5eb426*/
      if ( v15 ) /*0x5eb42f*/
      {
        if ( (int)v36 < v37 ) /*0x5eb439*/
        {
          if ( !v34 || v36 != g_MPCooperativeState ) /*0x5eb44d*/
            goto LABEL_111; /*0x5eb44d*/
          if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5eb458*/
          {
            v17 = 8; /*0x5eb45a*/
          }
          else
          {
            v17 = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5eb46c*/
            if ( dword_A8B23C ) /*0x5eb470*/
            {
              v18 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5eb474*/
              if ( v18 != -1 && v18 < v17 ) /*0x5eb481*/
                v17 = v18; /*0x5eb483*/
            }
            if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb48c*/
            {
              if ( Network::IsLobbyFeature() ) /*0x5eb48e*/
              {
                v17 &= ~1u; /*0x5eb497*/
              }
              else if ( Network::IsMultiplayerActive() ) /*0x5eb49c*/
              {
                v17 = 2; /*0x5eb4a5*/
              }
            }
          }
          if ( (int)v36 < v17 ) /*0x5eb4ac*/
          {
LABEL_111:
            v19 = GetStringCSF(g_Str_GUI_Open, 0, g_Str_File_netshare_cpp, 5479); /*0x5eb4bf*/
            v20 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v19); /*0x5eb4cd*/
            SendMessageA(DlgItem, 0x151u, v20, g_HouseClass_ObserverFlags); /*0x5eb4dd*/
          }
        }
        if ( v36 == g_MPCooperativeState ) /*0x5eb4e5*/
        {
          v21 = GetStringCSF(g_Str_GUI_OpenObserver, 0, g_Str_File_netshare_cpp, 5489); /*0x5eb4f8*/
          v22 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v21); /*0x5eb506*/
          SendMessageA(DlgItem, 0x151u, v22, g_Lobby_MaxPlayers); /*0x5eb516*/
        }
        v23 = GetStringCSF(g_Str_GUI_Closed, 0, g_Str_File_netshare_cpp, 5496); /*0x5eb529*/
        v24 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v23); /*0x5eb537*/
        SendMessageA(DlgItem, 0x151u, v24, g_Lobby_PlayerCount); /*0x5eb547*/
        if ( v33 && !v34 ) /*0x5eb55b*/
        {
          v25 = GetStringCSF(g_Str_GUI_AIEasy, 0, g_Str_File_netshare_cpp, 5504); /*0x5eb572*/
          v26 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v25); /*0x5eb580*/
          SendMessageA(DlgItem, 0x151u, v26, g_Lobby_PlayerTeam); /*0x5eb590*/
          v27 = GetStringCSF(g_Str_GUI_AINormal, 0, g_Str_File_netshare_cpp, 5510); /*0x5eb5a3*/
          v28 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v27); /*0x5eb5b1*/
          SendMessageA(DlgItem, 0x151u, v28, g_Lobby_PlayerSide); /*0x5eb5c1*/
          v29 = GetStringCSF(g_Str_GUI_AIHard, 0, g_Str_File_netshare_cpp, 5516); /*0x5eb5d4*/
          v30 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v29); /*0x5eb5e2*/
          SendMessageA(DlgItem, 0x151u, v30, g_Lobby_PlayerColor); /*0x5eb5f2*/
        }
      }
    }
    else
    {
      v31 = SendMessageA(DlgItem, 0x4C2u, 0, (LPARAM)v10); /*0x5eb5ff*/
      SendMessageA(DlgItem, 0x151u, v31, (LPARAM)v9); /*0x5eb609*/
      v16 = v36; /*0x5eb60b*/
    }
    v32 = WideString::GetOrEmpty_Alt((wchar_t **)&v38); /*0x5eb613*/
    SendMessageA(DlgItem, 0x4C0u, 0xFFFFFFFF, (LPARAM)v32); /*0x5eb621*/
    if ( !v35 ) /*0x5eb629*/
      ShowWindow(DlgItem, 5); /*0x5eb62e*/
    DeleteAndZero::Alt((DeleteAndZero *)&v38); /*0x5eb638*/
    v36 = (ObjectClass *)((char *)&v16->AbstractClass + 1); /*0x5eb641*/
  }
  while ( (int)&v16->AbstractClass + 1 < 8 );
}



// ==== 0x005EB660  NetworkLobby::SetupPlayerSlotControls  this=NetworkLobby  sig=csp ====
char __thiscall NetworkLobby::SetupPlayerSlotControls(NetworkLobby *this)
{
  int i; // edi
  int v3; // esi
  LRESULT v4; // eax
  LRESULT v5; // eax
  char v7; // [esp+13h] [ebp-5h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = 0; /*0x5eb671*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5eb676*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5eb681*/
      v8 = 6; /*0x5eb694*/
    else
      v8 = 2; /*0x5eb68a*/
  }
  else
  {
    v8 = 8; /*0x5eb69e*/
  }
  for ( i = 0; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v3 = 1042; /*0x5eb6be*/
          break;
        case 2:
          v3 = 1043; /*0x5eb6ca*/
          break;
        case 3:
          v3 = 1044; /*0x5eb6d6*/
          break;
        case 4:
          v3 = 1045; /*0x5eb6e2*/
          break;
        case 5:
          v3 = 1046; /*0x5eb6ee*/
          break;
        case 6:
          v3 = 1047; /*0x5eb6fa*/
          break;
        default:
          v3 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v3 = 1041; /*0x5eb6b2*/
    }
    v4 = SendDlgItemMessageA((HWND)this, v3, 0x147u, 0, 0); /*0x5eb721*/
    v5 = SendDlgItemMessageA((HWND)this, v3, 0x150u, v4, 0); /*0x5eb72d*/
    if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5eb749*/
    {
      if ( i >= v8 ) /*0x5eb74f*/
        dword_A8DA90[i] = g_Lobby_PlayerCount; /*0x5eb765*/
      else
        dword_A8DA90[i] = g_HouseClass_ObserverFlags; /*0x5eb756*/
      SetupSkirmishPlayerSlots((HWND)this, (void *)i, 0); /*0x5eb772*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 44] = -1; /*0x5eb77a*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 76] = -1; /*0x5eb781*/
      *(_DWORD *)&stru_A8B250.__pad_0[4 * i + 108] = -1; /*0x5eb788*/
      v7 = 1; /*0x5eb78f*/
    }
  }
  return v7; /*0x5eb7a2*/
}



// ==== 0x005EB7B0  UpdateMultiplayerLobbySlots  this=-  sig=csp ====
int __fastcall UpdateMultiplayerLobbySlots(HWND hDlg, ObjectClass *a2, int nIDDlgItem)
{
  int result; // eax
  ObjectClass *v5; // esi
  int ResourceIDHardcodedCSF; // ebx
  LPARAM v7; // eax
  int v8; // [esp+8h] [ebp-28h]
  HWND v9; // [esp+8h] [ebp-28h]
  int v10; // [esp+Ch] [ebp-24h]
  HWND ResourceID2CSF; // [esp+10h] [ebp-20h]
  HWND v12; // [esp+10h] [ebp-20h]
  HWND ResourceIDCSF; // [esp+14h] [ebp-1Ch]
  HWND v14; // [esp+14h] [ebp-1Ch]
  int ResourceID3CSF; // [esp+18h] [ebp-18h]
  int ResourceID4CSF; // [esp+1Ch] [ebp-14h]
  HWND hWnd; // [esp+20h] [ebp-10h]
  HWND DlgItem; // [esp+24h] [ebp-Ch]
  HWND v19; // [esp+28h] [ebp-8h]
  HWND v20; // [esp+2Ch] [ebp-4h]
  int nIDDlgItema; // [esp+34h] [ebp+4h]
  bool nIDDlgItemb; // [esp+34h] [ebp+4h]

  if ( (int)a2 < 0 ) /*0x5eb7b9*/
    a2 = 0; /*0x5eb7bb*/
  result = (int)a2 + nIDDlgItem; /*0x5eb7c1*/
  v10 = (int)a2 + nIDDlgItem; /*0x5eb7c6*/
  if ( (int)a2 + nIDDlgItem > 8 ) /*0x5eb7ca*/
  {
    v10 = 8; /*0x5eb7cc*/
    result = 8; /*0x5eb7d4*/
  }
  v5 = a2; /*0x5eb7da*/
  if ( (int)a2 < result ) /*0x5eb7dc*/
  {
    do /*0x5eb9f0*/
    {
      if ( v5 ) /*0x5eb7ec*/
      {
        if ( v5 == (ObjectClass *)1 ) /*0x5eb806*/
        {
          nIDDlgItema = 1747; /*0x5eb808*/
          v8 = 1042; /*0x5eb810*/
        }
        else if ( v5 == (ObjectClass *)2 ) /*0x5eb820*/
        {
          nIDDlgItema = 1748; /*0x5eb822*/
          v8 = 1043; /*0x5eb82a*/
        }
        else if ( v5 == (ObjectClass *)3 ) /*0x5eb837*/
        {
          nIDDlgItema = 1749; /*0x5eb839*/
          v8 = 1044; /*0x5eb841*/
        }
        else if ( v5 == (ObjectClass *)4 ) /*0x5eb84e*/
        {
          nIDDlgItema = 1750; /*0x5eb850*/
          v8 = 1045; /*0x5eb858*/
        }
        else if ( v5 == (ObjectClass *)5 ) /*0x5eb865*/
        {
          nIDDlgItema = 1751; /*0x5eb867*/
          v8 = 1046; /*0x5eb86f*/
        }
        else if ( v5 == (ObjectClass *)6 ) /*0x5eb87c*/
        {
          nIDDlgItema = 1752; /*0x5eb87e*/
          v8 = 1047; /*0x5eb886*/
        }
        else if ( v5 == (ObjectClass *)7 ) /*0x5eb893*/
        {
          nIDDlgItema = 1753; /*0x5eb895*/
          v8 = 1048; /*0x5eb89d*/
        }
        else
        {
          nIDDlgItema = -1; /*0x5eb8aa*/
          v8 = -1; /*0x5eb8ae*/
        }
      }
      else
      {
        nIDDlgItema = 1746; /*0x5eb7ee*/
        v8 = 1041; /*0x5eb7f6*/
      }
      ResourceIDHardcodedCSF = GetResourceIDHardcodedCSF(v5); /*0x5eb8bb*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v5); /*0x5eb8c4*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v5); /*0x5eb8cf*/
      ResourceID3CSF = GetResourceID3CSF(v5); /*0x5eb8da*/
      ResourceID4CSF = GetResourceID4CSF(v5); /*0x5eb8e7*/
      hWnd = GetDlgItem(hDlg, nIDDlgItema); /*0x5eb8f3*/
      DlgItem = GetDlgItem(hDlg, v8); /*0x5eb8fd*/
      v19 = GetDlgItem(hDlg, ResourceIDHardcodedCSF); /*0x5eb903*/
      v9 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5eb913*/
      v20 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5eb91f*/
      v12 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5eb927*/
      v14 = GetDlgItem(hDlg, ResourceID4CSF); /*0x5eb939*/
      v7 = dword_A8DA90[(_DWORD)v5]; /*0x5eb93d*/
      nIDDlgItemb = v7 == g_Lobby_MaxPlayers /*0x5eb971*/
                 || v7
                 && v7 != g_HouseClass_ObserverFlags
                 && v7 != g_Lobby_PlayerCount
                 && (wchar_t *)v7 != g_Lobby_PlayerReady
                 && *(_DWORD *)(v7 + 107) == -1;
      ShowWindow(hWnd, 5); /*0x5eb983*/
      ShowWindow(DlgItem, 5); /*0x5eb98c*/
      ShowWindow(v19, 5); /*0x5eb995*/
      if ( nIDDlgItemb ) /*0x5eb99d*/
      {
        ShowWindow(v9, 0); /*0x5eb9a6*/
        ShowWindow(v12, 0); /*0x5eb9af*/
        ShowWindow(v14, 0); /*0x5eb9b3*/
      }
      else
      {
        ShowWindow(v9, 5); /*0x5eb9bc*/
        ShowWindow(v12, 5); /*0x5eb9c5*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5eb9d0*/
          ShowWindow(v14, 5); /*0x5eb9e0*/
      }
      result = ShowWindow(v20, 5); /*0x5eb9e9*/
      v5 = (ObjectClass *)((char *)v5 + 1); /*0x5eb9eb*/
    }
    while ( (int)v5 < v10 ); /*0x5eb9f0*/
  }
  return result; /*0x5eb9f8*/
}



// ==== 0x005EBA00  Lobby::SetupPlayerWidgets  this=Lobby  sig=csp ====
int __thiscall Lobby::SetupPlayerWidgets(Lobby *this)
{
  ObjectClass *v1; // esi
  int v3; // ebp
  int v4; // ebx
  int ResourceID4CSF; // eax
  LPARAM v6; // esi
  HWND DlgItem; // ebp
  HWND v8; // ebx
  HWND v9; // edi
  int result; // eax
  bool v11; // [esp+Bh] [ebp-19h]
  HWND ResourceIDCSF; // [esp+Ch] [ebp-18h]
  HWND v13; // [esp+Ch] [ebp-18h]
  int nIDDlgItem; // [esp+10h] [ebp-14h]
  HWND nIDDlgItema; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v17; // [esp+14h] [ebp-10h]
  int ResourceID3CSF; // [esp+18h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-8h]
  HWND hWnd; // [esp+20h] [ebp-4h]

  v1 = g_MPCooperativeState; /*0x5eba04*/
  if ( (int)g_MPCooperativeState >= 0 ) /*0x5eba0f*/
  {
    if ( !g_MPCooperativeState ) /*0x5eba15*/
      v1 = (ObjectClass *)dword_A8BB0C; /*0x5eba17*/
    if ( (int)v1 < 8 ) /*0x5eba20*/
    {
      if ( v1 ) /*0x5eba2a*/
      {
        if ( v1 == (ObjectClass *)1 ) /*0x5eba3b*/
        {
          v3 = 1747; /*0x5eba3d*/
          v4 = 1042; /*0x5eba42*/
        }
        else if ( v1 == (ObjectClass *)2 ) /*0x5eba4c*/
        {
          v3 = 1748; /*0x5eba4e*/
          v4 = 1043; /*0x5eba53*/
        }
        else if ( v1 == (ObjectClass *)3 ) /*0x5eba5d*/
        {
          v3 = 1749; /*0x5eba5f*/
          v4 = 1044; /*0x5eba64*/
        }
        else if ( v1 == (ObjectClass *)4 ) /*0x5eba6e*/
        {
          v3 = 1750; /*0x5eba70*/
          v4 = 1045; /*0x5eba75*/
        }
        else if ( v1 == (ObjectClass *)5 ) /*0x5eba7f*/
        {
          v3 = 1751; /*0x5eba81*/
          v4 = 1046; /*0x5eba86*/
        }
        else if ( v1 == (ObjectClass *)6 ) /*0x5eba90*/
        {
          v3 = 1752; /*0x5eba92*/
          v4 = 1047; /*0x5eba97*/
        }
        else if ( v1 == (ObjectClass *)7 ) /*0x5ebaa1*/
        {
          v3 = 1753; /*0x5ebaa3*/
          v4 = 1048; /*0x5ebaa8*/
        }
        else
        {
          v3 = -1; /*0x5ebaaf*/
          v4 = -1; /*0x5ebab2*/
        }
      }
      else
      {
        v3 = 1746; /*0x5eba2c*/
        v4 = 1041; /*0x5eba31*/
      }
      nIDDlgItem = GetResourceIDHardcodedCSF(v1); /*0x5ebabe*/
      ResourceIDCSF = (HWND)GetResourceIDCSF(v1); /*0x5ebac9*/
      ResourceID2CSF = (HWND)GetResourceID2CSF(v1); /*0x5ebad4*/
      ResourceID3CSF = GetResourceID3CSF(v1); /*0x5ebadf*/
      ResourceID4CSF = GetResourceID4CSF(v1); /*0x5ebae3*/
      v6 = dword_A8DA90[(_DWORD)v1]; /*0x5ebae8*/
      v19 = ResourceID4CSF; /*0x5ebaef*/
      v11 = v6 == g_Lobby_MaxPlayers /*0x5ebb24*/
         || v6
         && v6 != g_HouseClass_ObserverFlags
         && v6 != g_Lobby_PlayerCount
         && (wchar_t *)v6 != g_Lobby_PlayerReady
         && *(_DWORD *)(v6 + 107) == -1;
      DlgItem = GetDlgItem((HWND)this, v3); /*0x5ebb33*/
      v8 = GetDlgItem((HWND)this, v4); /*0x5ebb39*/
      hWnd = GetDlgItem((HWND)this, nIDDlgItem); /*0x5ebb47*/
      v13 = GetDlgItem((HWND)this, (int)ResourceIDCSF); /*0x5ebb53*/
      v17 = GetDlgItem((HWND)this, (int)ResourceID2CSF); /*0x5ebb5b*/
      nIDDlgItema = GetDlgItem((HWND)this, ResourceID3CSF); /*0x5ebb6b*/
      v9 = GetDlgItem((HWND)this, v19); /*0x5ebb79*/
      ShowWindow(DlgItem, 5); /*0x5ebb7e*/
      ShowWindow(v8, 5); /*0x5ebb83*/
      ShowWindow(hWnd, 5); /*0x5ebb8c*/
      if ( v11 ) /*0x5ebb96*/
      {
        ShowWindow(v13, 0); /*0x5ebbd7*/
        ShowWindow(nIDDlgItema, 0); /*0x5ebbe0*/
        ShowWindow(v9, 0); /*0x5ebbe5*/
      }
      else
      {
        ShowWindow(v13, 5); /*0x5ebb9f*/
        ShowWindow(nIDDlgItema, 5); /*0x5ebba8*/
        if ( *(_DWORD *)&dword_A8B238 != 4 || !Network::IsLobbyFeature() ) /*0x5ebbb3*/
        {
          ShowWindow(v9, 5); /*0x5ebbbf*/
          return ShowWindow(v17, 5); /*0x5ebbcf*/
        }
      }
      return ShowWindow(v17, 5); /*0x5ebbee*/
    }
  }
  return result; /*0x5ebbca*/
}



// ==== 0x005EBC00  DisableCampaignSlots  this=-  sig=csp ====
int __fastcall DisableCampaignSlots(HWND hDlg, int a2)
{
  int i; // ebp
  int result; // eax
  int nIDDlgItem; // [esp+8h] [ebp-1Ch]
  HWND nIDDlgItema; // [esp+8h] [ebp-1Ch]
  int hWnd; // [esp+Ch] [ebp-18h]
  HWND hWnda; // [esp+Ch] [ebp-18h]
  HWND ResourceIDHardcodedCSF; // [esp+10h] [ebp-14h]
  HWND DlgItem; // [esp+10h] [ebp-14h]
  HWND ResourceID2CSF; // [esp+14h] [ebp-10h]
  HWND v12; // [esp+14h] [ebp-10h]
  HWND ResourceIDCSF; // [esp+18h] [ebp-Ch]
  HWND v14; // [esp+18h] [ebp-Ch]
  HWND ResourceID3CSF; // [esp+1Ch] [ebp-8h]
  HWND v16; // [esp+1Ch] [ebp-8h]
  HWND ResourceID4CSF; // [esp+20h] [ebp-4h]
  HWND v18; // [esp+20h] [ebp-4h]

  for ( i = a2; i < 8; ++i ) /*0x5ebc0c*/
  {
    if ( (ObjectClass *)i != g_MPCooperativeState ) /*0x5ebc26*/
    {
      if ( i ) /*0x5ebc2e*/
      {
        switch ( i ) /*0x5ebc48*/
        {
          case 1: /*0x5ebc48*/
            nIDDlgItem = 1747; /*0x5ebc4a*/
            hWnd = 1042; /*0x5ebc52*/
            break;
          case 2: /*0x5ebc48*/
            nIDDlgItem = 1748; /*0x5ebc64*/
            hWnd = 1043; /*0x5ebc6c*/
            break;
          case 3: /*0x5ebc48*/
            nIDDlgItem = 1749; /*0x5ebc7b*/
            hWnd = 1044; /*0x5ebc83*/
            break;
          case 4: /*0x5ebc48*/
            nIDDlgItem = 1750; /*0x5ebc92*/
            hWnd = 1045; /*0x5ebc9a*/
            break;
          case 5: /*0x5ebc48*/
            nIDDlgItem = 1751; /*0x5ebca9*/
            hWnd = 1046; /*0x5ebcb1*/
            break;
          case 6: /*0x5ebc48*/
            nIDDlgItem = 1752; /*0x5ebcc0*/
            hWnd = 1047; /*0x5ebcc8*/
            break;
          case 7: /*0x5ebc48*/
            nIDDlgItem = 1753; /*0x5ebcd7*/
            hWnd = 1048; /*0x5ebcdf*/
            break;
          default:
            nIDDlgItem = -1; /*0x5ebcec*/
            hWnd = -1; /*0x5ebcf0*/
            break;
        }
      }
      else
      {
        nIDDlgItem = 1746; /*0x5ebc30*/
        hWnd = 1041; /*0x5ebc38*/
      }
      ResourceIDHardcodedCSF = (HWND)GetResourceIDHardcodedCSF((ObjectClass *)i); /*0x5ebcfd*/
      ResourceID2CSF = (HWND)GetResourceID2CSF((ObjectClass *)i); /*0x5ebd08*/
      ResourceIDCSF = (HWND)GetResourceIDCSF((ObjectClass *)i); /*0x5ebd13*/
      ResourceID3CSF = (HWND)GetResourceID3CSF((ObjectClass *)i); /*0x5ebd1e*/
      ResourceID4CSF = (HWND)GetResourceID4CSF((ObjectClass *)i); /*0x5ebd27*/
      nIDDlgItema = GetDlgItem(hDlg, nIDDlgItem); /*0x5ebd37*/
      hWnda = GetDlgItem(hDlg, hWnd); /*0x5ebd43*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceIDHardcodedCSF); /*0x5ebd4b*/
      v12 = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ebd5b*/
      v14 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ebd67*/
      v16 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ebd6f*/
      v18 = GetDlgItem(hDlg, (int)ResourceID4CSF); /*0x5ebd82*/
      ShowWindow(nIDDlgItema, 0); /*0x5ebd86*/
      ShowWindow(hWnda, 0); /*0x5ebd8f*/
      ShowWindow(DlgItem, 0); /*0x5ebd98*/
      ShowWindow(v12, 0); /*0x5ebda1*/
      ShowWindow(v14, 0); /*0x5ebdaa*/
      ShowWindow(v16, 0); /*0x5ebdb3*/
      result = ShowWindow(v18, 0); /*0x5ebdbc*/
    }
  }
  return result; /*0x5ebdca*/
}



// ==== 0x005EBDD0  UI_Setup_5EBDD0  this=-  sig=csp ====
void __fastcall UI_Setup_5EBDD0(Lobby *hDlg, ObjectClass *a2, int a3, int a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( dword_A8B23C
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    && !Network::IsMultiplayerActive() )
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 )
      v6 = !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ? 6 : 2;
    else
      v6 = 8; /*0x5ebe1b*/
    if ( (int)a2 > v6 ) /*0x5ebe22*/
      a2 = (ObjectClass *)v6; /*0x5ebe24*/
  }
  if ( a4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 64))(a4) || Network::IsMultiplayerActive() ) /*0x5ebe37*/
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ebe47*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebe52*/
        v7 = 6; /*0x5ebe62*/
      else
        v7 = 2; /*0x5ebe5b*/
    }
    else
    {
      v7 = 8; /*0x5ebe69*/
    }
    v8 = a3; /*0x5ebe6e*/
    if ( a3 > v7 ) /*0x5ebe74*/
      v8 = v7; /*0x5ebe76*/
  }
  else
  {
    v8 = a3; /*0x5ebe7a*/
  }
  if ( v8 - (int)a2 <= 0 ) /*0x5ebe84*/
  {
    if ( v8 - (int)a2 < 0 ) /*0x5ebe9c*/
      DisableCampaignSlots((HWND)hDlg, v8); /*0x5ebea0*/
    Lobby::SetupPlayerWidgets(hDlg); /*0x5ebea7*/
  }
  else
  {
    UpdateMultiplayerLobbySlots((HWND)hDlg, a2, v8 - (_DWORD)a2); /*0x5ebe8b*/
    Lobby::SetupPlayerWidgets(hDlg); /*0x5ebe92*/
  }
}



// ==== 0x005EBEC0  SetupMultiplayerLobbyScreen_Setup  this=-  sig=csp ====
char __fastcall sub_5EBEC0(HWND hDlg, int a2, int nIDDlgItem)
{
  int v3; // ebx
  int v4; // esi
  int v6; // esi
  LRESULT v7; // eax
  wchar_t *v8; // eax
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]

  v3 = a2; /*0x5ebec8*/
  v4 = a2 + nIDDlgItem; /*0x5ebed0*/
  v11 = a2 + nIDDlgItem; /*0x5ebedd*/
  if ( dword_A8B238[0] == 4 ) /*0x5ebee1*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ebeec*/
      v10 = 6; /*0x5ebeff*/
    else
      v10 = 2; /*0x5ebef5*/
  }
  else
  {
    v10 = 8; /*0x5ebf09*/
  }
  if ( v3 < v4 )
  {
    do
    {
      if ( v3 )
      {
        switch ( v3 )
        {
          case 1:
            v6 = 1042; /*0x5ebf30*/
            break;
          case 2:
            v6 = 1043; /*0x5ebf3c*/
            break;
          case 3:
            v6 = 1044; /*0x5ebf48*/
            break;
          case 4:
            v6 = 1045; /*0x5ebf54*/
            break;
          case 5:
            v6 = 1046; /*0x5ebf60*/
            break;
          case 6:
            v6 = 1047; /*0x5ebf6c*/
            break;
          default:
            v6 = v3 != 7 ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ebf24*/
      }
      v7 = SendDlgItemMessageA(hDlg, v6, 0x147u, 0, 0); /*0x5ebf93*/
      v8 = (wchar_t *)SendDlgItemMessageA(hDlg, v6, 0x150u, v7, 0); /*0x5ebf9f*/
      if ( v8 == (wchar_t *)-1 /*0x5ebfcc*/
        || !v8
        || v8 == (wchar_t *)g_HouseClass_ObserverFlags
        || v8 == (wchar_t *)g_Lobby_PlayerCount
        || v8 == (wchar_t *)g_Lobby_MaxPlayers
        || v8 == g_Lobby_PlayerReady )
      {
        if ( v3 != g_MPCooperativeState ) /*0x5ebfd9*/
        {
          if ( v3 >= v10 ) /*0x5ebfe3*/
            PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 0); /*0x5ebfed*/
          else
            PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 0); /*0x5ebfe6*/
        }
      }
      else
      {
        PlayerSkirmishSlotHandler(hDlg, v6, (LPARAM)v8, 0); /*0x5ebfd1*/
      }
      ++v3; /*0x5ebff6*/
    }
    while ( v3 < v11 );
    v3 = a2; /*0x5ebfff*/
  }
  UpdateMultiplayerLobbySlots(hDlg, v3, nIDDlgItem); /*0x5ec00d*/
  RetVtableStubZero_eax_27(); /*0x5ec012*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec020*/
}



// ==== 0x005EC030  MultiplayerLobby::FillSlots  this=MultiplayerLobby  sig=csp ====
char __thiscall MultiplayerLobby::FillSlots(MultiplayerLobby *this)
{
  ObjectClass *v1; // eax
  char v2; // bl
  int v4; // edi
  int v5; // esi
  int v6; // edx
  LPARAM v7; // eax
  LPARAM v8; // edi
  int PlayerCountMap; // esi
  int v10; // eax
  int v11; // eax
  CountryCombo *ResourceID2CSF; // eax

  v1 = g_MPCooperativeState; /*0x5ec030*/
  v2 = 0; /*0x5ec037*/
  if ( (int)g_MPCooperativeState < 1 )
  {
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec04d*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec058*/
        v4 = 6; /*0x5ec068*/
      else
        v4 = 2; /*0x5ec061*/
    }
    else
    {
      v4 = 8; /*0x5ec06f*/
    }
    v5 = 1; /*0x5ec074*/
    while ( 1 )
    {
      if ( v5 )
      {
        switch ( v5 )
        {
          case 1:
            v6 = 1042; /*0x5ec089*/
            break;
          case 2:
            v6 = 1043; /*0x5ec095*/
            break;
          case 3:
            v6 = 1044; /*0x5ec0a1*/
            break;
          case 4:
            v6 = 1045; /*0x5ec0ad*/
            break;
          case 5:
            v6 = 1046; /*0x5ec0b9*/
            break;
          case 6:
            v6 = 1047; /*0x5ec0c5*/
            break;
          default:
            v6 = v5 != 7 ? -1 : 1048;
            break;
        }
      }
      else
      {
        v6 = 1041; /*0x5ec07d*/
      }
      v7 = dword_A8DA90[v5]; /*0x5ec0e1*/
      if ( v5 >= v4 ) /*0x5ec0f0*/
      {
        if ( v7 != g_Lobby_MaxPlayers && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec10e*/
          goto LABEL_32; /*0x5ec10e*/
        PlayerSkirmishSlotHandler((HWND)this, v6, g_Lobby_PlayerCount, 1); /*0x5ec11b*/
      }
      else
      {
        if ( v7 != g_Lobby_MaxPlayers && *(_DWORD *)(v7 + 107) != -1 ) /*0x5ec0fa*/
          goto LABEL_32; /*0x5ec0fa*/
        PlayerSkirmishSlotHandler((HWND)this, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec104*/
      }
      v2 = 1; /*0x5ec120*/
LABEL_32:
      if ( ++v5 >= 8 ) /*0x5ec126*/
        goto LABEL_74; /*0x5ec126*/
    }
  }
  v8 = dword_A8DA90[(_DWORD)g_MPCooperativeState]; /*0x5ec137*/
  if ( *(_DWORD *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ec141*/
  {
    PlayerCountMap = 8; /*0x5ec143*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ec155*/
    if ( dword_A8B23C ) /*0x5ec159*/
    {
      v10 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ec15d*/
      if ( v10 != -1 && v10 < PlayerCountMap ) /*0x5ec16a*/
        PlayerCountMap = v10; /*0x5ec16c*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec175*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec177*/
      {
        PlayerCountMap &= ~1u; /*0x5ec180*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec185*/
      {
        PlayerCountMap = 2; /*0x5ec18e*/
      }
    }
    v1 = g_MPCooperativeState; /*0x5ec193*/
  }
  if ( (int)v1 > PlayerCountMap /*0x5ec1e3*/
    && (v8
     && (v8 != g_HouseClass_ObserverFlags
      && v8 != g_Lobby_PlayerCount
      && v8 != g_Lobby_MaxPlayers
      && (wchar_t *)v8 != g_Lobby_PlayerReady
      && *(_DWORD *)(v8 + 107) != -1
      || v8 == g_Lobby_PlayerTeam
      || v8 == g_Lobby_PlayerSide
      || v8 == g_Lobby_PlayerColor)
     || v8 == g_HouseClass_ObserverFlags) )
  {
    v8 = g_Lobby_PlayerCount; /*0x5ec1e5*/
    v2 = 1; /*0x5ec1e7*/
  }
  Lobby::SetupPlayerWidgets((Lobby *)this); /*0x5ec1eb*/
  if ( g_MPCooperativeState )
  {
    if ( g_MPCooperativeState == (ObjectClass *)1 )
    {
      v11 = 1042; /*0x5ec205*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)2 )
    {
      v11 = 1043; /*0x5ec211*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)3 )
    {
      v11 = 1044; /*0x5ec21d*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)4 )
    {
      v11 = 1045; /*0x5ec229*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)5 )
    {
      v11 = 1046; /*0x5ec235*/
    }
    else if ( g_MPCooperativeState == (ObjectClass *)6 )
    {
      v11 = 1047; /*0x5ec241*/
    }
    else
    {
      v11 = g_MPCooperativeState != (ObjectClass *)7 ? -1 : 1048;
    }
  }
  else
  {
    v11 = 1041; /*0x5ec1f9*/
  }
  PlayerSkirmishSlotHandler((HWND)this, v11, v8, 1); /*0x5ec260*/
LABEL_74:
  if ( v2 ) /*0x5ec267*/
  {
    ResourceID2CSF = (CountryCombo *)GetResourceID2CSF(g_MPCooperativeState); /*0x5ec26f*/
    SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5ec278*/
  }
  RetVtableStubZero_eax_27(); /*0x5ec27d*/
  return CheckGameSettingsChanged(1, 0); /*0x5ec286*/
}



// ==== 0x005EC290  sub_5EC290  this=-  sig=ida-proto ====
char __fastcall sub_5EC290(HWND hDlg, int a2)
{
  int v4; // ebp
  int i; // esi
  int v6; // edx

  if ( dword_A8B238[0] == 4 ) /*0x5ec2a0*/
  {
    if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec2ab*/
      v4 = 6; /*0x5ec2bb*/
    else
      v4 = 2; /*0x5ec2b4*/
  }
  else
  {
    v4 = 8; /*0x5ec2c2*/
  }
  for ( i = a2; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v6 = 1042; /*0x5ec2e2*/
          break;
        case 2:
          v6 = 1043; /*0x5ec2ee*/
          break;
        case 3:
          v6 = 1044; /*0x5ec2fa*/
          break;
        case 4:
          v6 = 1045; /*0x5ec306*/
          break;
        case 5:
          v6 = 1046; /*0x5ec312*/
          break;
        case 6:
          v6 = 1047; /*0x5ec31e*/
          break;
        default:
          v6 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec2d6*/
    }
    if ( i >= v4 ) /*0x5ec341*/
    {
      if ( (void *)i != g_MPCooperativeState ) /*0x5ec353*/
        PlayerSkirmishSlotHandler(hDlg, v6, g_Lobby_PlayerCount, 1); /*0x5ec360*/
    }
    else if ( (void *)i != g_MPCooperativeState ) /*0x5ec345*/
    {
      PlayerSkirmishSlotHandler(hDlg, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec34f*/
    }
  }
  DisableCampaignSlots(hDlg, a2); /*0x5ec373*/
  if ( ppv ) /*0x5ec383*/
    DisplayRankingsThunkWOL(); /*0x5ec385*/
  else
    RetVtableStubZero_eax_27(); /*0x5ec38c*/
  return CheckGameSettingsChanged(1, 0);
}



// ==== 0x005EC3A0  SetupMultiplayerLobbyScreen  this=-  sig=csp ====
void __fastcall SetupMultiplayerLobbyScreen(MultiplayerLobby *hDlg, void *a2, int a3)
{
  int PlayerCountMap; // esi
  int v6; // eax
  char v7; // bl
  int v8; // eax
  int v9; // edi
  int ptr_4; // esi
  int v11; // eax
  int ResourceID2CSF; // esi
  HWND DlgItem; // eax
  int ResourceIDCSF; // esi
  int v15; // ebx
  int v16; // edi
  ObjectClass *v17; // esi
  int v18; // edx
  wchar_t *v19; // esi
  wchar_t **v20; // eax
  wchar_t *v21; // eax
  char **v22; // eax
  int v23; // [esp+Ch] [ebp-114h]
  ObjectClass v24; // [esp+10h] [ebp-110h] BYREF

  v24.AbstractClass = a2; /*0x5ec3b7*/
  if ( a3 == -1 ) /*0x5ec3bb*/
  {
    PlayerCountMap = 8; /*0x5ec3bd*/
  }
  else
  {
    PlayerCountMap = ReadPlayerCountMap(a3); /*0x5ec3cf*/
    if ( dword_A8B23C ) /*0x5ec3d3*/
    {
      v6 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 38))(dword_A8B23C); /*0x5ec3d7*/
      if ( v6 != -1 && v6 < PlayerCountMap ) /*0x5ec3e4*/
        PlayerCountMap = v6; /*0x5ec3e6*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec3ef*/
    {
      if ( Network::IsLobbyFeature() ) /*0x5ec3f1*/
      {
        PlayerCountMap &= ~1u; /*0x5ec3fa*/
      }
      else if ( Network::IsMultiplayerActive() ) /*0x5ec3ff*/
      {
        PlayerCountMap = 2; /*0x5ec408*/
      }
    }
  }
  v23 = PlayerCountMap; /*0x5ec413*/
  if ( dword_A8B23C /*0x5ec425*/
    && !(*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 16))(dword_A8B23C)
    || Network::IsMultiplayerActive() )
  {
    v7 = 0; /*0x5ec437*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec43c*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec447*/
        v8 = 6; /*0x5ec457*/
      else
        v8 = 2; /*0x5ec450*/
    }
    else
    {
      v8 = 8; /*0x5ec45e*/
    }
    if ( PlayerCountMap > v8 ) /*0x5ec465*/
      v23 = v8; /*0x5ec467*/
  }
  else
  {
    v7 = 1; /*0x5ec42e*/
  }
  if ( a2 == (void *)-1 ) /*0x5ec46e*/
  {
    dword_831700 = 8; /*0x5ec470*/
    dword_AC11CC = 0; /*0x5ec47a*/
  }
  v9 = v23 - dword_831700; /*0x5ec493*/
  ptr_4 = 0; /*0x5ec495*/
  v24.? = 0; /*0x5ec499*/
  if ( !g_MPCooperativeState ) /*0x5ec49d*/
  {
    if ( v7 ) /*0x5ec4a1*/
    {
LABEL_40:
      ptr_4 = 1; /*0x5ec4f1*/
      v24.? = (void *)1; /*0x5ec4fd*/
      if ( !dword_AC11CC && v9 + v23 < 7 ) /*0x5ec50d*/
        ++v9; /*0x5ec50f*/
      goto LABEL_43; /*0x5ec50f*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec4af*/
    {
      if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec4ba*/
        v11 = 6; /*0x5ec4ca*/
      else
        v11 = 2; /*0x5ec4c3*/
    }
    else
    {
      v11 = 8; /*0x5ec4d1*/
    }
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec4dc*/
    {
      if ( v11 >= 6 ) /*0x5ec4e1*/
      {
LABEL_39:
        if ( v23 >= v11 ) /*0x5ec4ef*/
          goto LABEL_43; /*0x5ec4ef*/
        goto LABEL_40; /*0x5ec4ef*/
      }
    }
    else if ( v11 >= 8 ) /*0x5ec4e8*/
    {
      goto LABEL_39; /*0x5ec4e8*/
    }
    ++v11; /*0x5ec4ea*/
    goto LABEL_39; /*0x5ec4ea*/
  }
LABEL_43:
  if ( v24.AbstractClass == (void *)-1 && !g_MPCooperativeState ) /*0x5ec51e*/
  {
    ResourceID2CSF = GetResourceID2CSF(0); /*0x5ec527*/
    SetupComboBoxObserver((HWND)hDlg, ResourceID2CSF); /*0x5ec52d*/
    SetupLobbyCountryCombo((HWND)hDlg, ResourceID2CSF, -3); /*0x5ec538*/
    DlgItem = GetDlgItem((HWND)hDlg, 1041); /*0x5ec54c*/
    SendMessageA(DlgItem, 0x4F1u, 0, 1); /*0x5ec553*/
    ResourceIDCSF = GetResourceIDCSF(0); /*0x5ec560*/
    FillListBox((HWND)hDlg, ResourceIDCSF); /*0x5ec566*/
    SetupSkirmishSpawnLocations((HWND)hDlg, ResourceIDCSF, 8); /*0x5ec571*/
    ptr_4 = (int)v24.?; /*0x5ec576*/
  }
  if ( v9 <= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( ptr_4 + v23 >= 7 ) /*0x5ec6b9*/
        SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, 7, 1); /*0x5ec6c4*/
    }
    else
    {
      v15 = ptr_4 + v23; /*0x5ec5a3*/
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ec5a6*/
      {
        if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec5b1*/
          v16 = 6; /*0x5ec5c1*/
        else
          v16 = 2; /*0x5ec5ba*/
      }
      else
      {
        v16 = 8; /*0x5ec5c8*/
      }
      v17 = (ObjectClass *)(ptr_4 + v23); /*0x5ec5d0*/
      if ( v15 < 8 )
      {
        do
        {
          if ( v17 )
          {
            if ( v17 == (ObjectClass *)1 )
            {
              v18 = 1042; /*0x5ec5e8*/
            }
            else if ( v17 == (ObjectClass *)2 )
            {
              v18 = 1043; /*0x5ec5f4*/
            }
            else if ( v17 == (ObjectClass *)3 )
            {
              v18 = 1044; /*0x5ec600*/
            }
            else if ( v17 == (ObjectClass *)4 )
            {
              v18 = 1045; /*0x5ec60c*/
            }
            else if ( v17 == (ObjectClass *)5 )
            {
              v18 = 1046; /*0x5ec618*/
            }
            else if ( v17 == (ObjectClass *)6 )
            {
              v18 = 1047; /*0x5ec624*/
            }
            else
            {
              v18 = v17 != (ObjectClass *)7 ? -1 : 1048;
            }
          }
          else
          {
            v18 = 1041; /*0x5ec5dc*/
          }
          if ( (int)v17 >= v16 ) /*0x5ec647*/
          {
            if ( v17 != g_MPCooperativeState ) /*0x5ec659*/
              PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_Lobby_PlayerCount, 1); /*0x5ec666*/
          }
          else if ( v17 != g_MPCooperativeState ) /*0x5ec64b*/
          {
            PlayerSkirmishSlotHandler((HWND)hDlg, v18, g_HouseClass_ObserverFlags, 1); /*0x5ec655*/
          }
          v17 = (ObjectClass *)((char *)v17 + 1); /*0x5ec66b*/
        }
        while ( (int)v17 < 8 );
      }
      DisableCampaignSlots((HWND)hDlg, v15); /*0x5ec679*/
      if ( ppv ) /*0x5ec685*/
        DisplayRankingsThunkWOL(); /*0x5ec687*/
      else
        RetVtableStubZero_eax_27(); /*0x5ec69b*/
      CheckGameSettingsChanged(1, 0); /*0x5ec690*/
      ptr_4 = (int)v24.?; /*0x5ec695*/
    }
  }
  else
  {
    SetupMultiplayerLobbyScreen_Setup((HWND)hDlg, dword_831700 + dword_AC11CC, v9); /*0x5ec58c*/
  }
  MultiplayerLobby::FillSlots(hDlg); /*0x5ec6cb*/
  if ( g_MPCooperativeState == (ObjectClass *)-1 ) /*0x5ec6d9*/
  {
    if ( dword_A8B23C ) /*0x5ec6e7*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 47))(dword_A8B23C) ) /*0x5ec6ef*/
      {
        g_MPCooperativeState = (ObjectClass *)7; /*0x5ec6ff*/
        MultiplayerLobby::FillSlots(hDlg); /*0x5ec709*/
        Debug::Log(); /*0x5ec713*/
        v19 = (wchar_t *)dword_A8DA90[(_DWORD)g_MPCooperativeState]; /*0x5ec724*/
        unknown_libname_74(&v24.?); /*0x5ec72b*/
        if ( !v19 /*0x5ec76a*/
          || v19 == (wchar_t *)g_HouseClass_ObserverFlags
          || v19 == (wchar_t *)g_Lobby_PlayerCount
          || v19 == g_Lobby_PlayerReady
          || v19 == (wchar_t *)g_Lobby_MaxPlayers
          || v19 == (wchar_t *)g_Lobby_PlayerTeam
          || v19 == (wchar_t *)g_Lobby_PlayerSide
          || v19 == (wchar_t *)g_Lobby_PlayerColor )
        {
          GetPlayerTypeString((char **)&v24, v19); /*0x5ec77e*/
          v20 = CharStringToWide((wchar_t **)&v24.?, (const char **)&v24); /*0x5ec78b*/
          WideString::Reassign_Alt(&v24.?, (const wchar_t **)v20); /*0x5ec795*/
          DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec79e*/
          DeleteAndZero(&v24); /*0x5ec7a7*/
        }
        else
        {
          WideString::Assign_Alt(&v24.?, v19); /*0x5ec771*/
        }
        v21 = WideString::GetOrEmpty((wchar_t **)&v24.?); /*0x5ec7b0*/
        WideString::Assign((wchar_t **)&v24, v21); /*0x5ec7ba*/
        v22 = ToWideStringCharAlt((char **)&v24.?, (const wchar_t **)&v24); /*0x5ec7c7*/
        sprintf((char *const)&v24.?, "O%d%s", g_MPCooperativeState, *v22); /*0x5ec7e0*/
        DeleteAndZero((ObjectClass *)&v24.?); /*0x5ec7ec*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24); /*0x5ec7f5*/
        Network::SendOptionsGame((char *)&v24.?); /*0x5ec7fe*/
        DeleteAndZero::Alt((DeleteAndZero *)&v24.?); /*0x5ec807*/
        dword_831700 = v23; /*0x5ec816*/
        dword_AC11CC = (int)v24.?; /*0x5ec81c*/
      }
      else
      {
        dword_AC11CC = ptr_4; /*0x5ec867*/
        dword_831700 = v23; /*0x5ec86f*/
      }
    }
    else
    {
      dword_AC11CC = ptr_4; /*0x5ec84b*/
      dword_831700 = v23; /*0x5ec853*/
    }
  }
  else
  {
    dword_AC11CC = ptr_4; /*0x5ec830*/
    dword_831700 = v23; /*0x5ec838*/
  }
}



// ==== 0x005EC880  Map_Handle_5EC880  this=-  sig=csp ====
char __fastcall sub_5EC880(HWND hDlg, int a2, char a3, char a4)
{
  HWND v4; // ebx
  int v5; // edi
  int v6; // esi
  LRESULT v7; // eax
  LRESULT v8; // eax
  wchar_t *v9; // esi
  char v10; // bl
  int v12; // [esp+10h] [ebp-8h]

  v4 = hDlg; /*0x5ec88a*/
  v12 = a2; /*0x5ec890*/
  if ( !g_MPCooperativeState ) /*0x5ec898*/
    v12 = a2 + 1; /*0x5ec89d*/
  v5 = 0; /*0x5ec8a7*/
  while ( 1 )
  {
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          v6 = 1042; /*0x5ec8b9*/
          break;
        case 2:
          v6 = 1043; /*0x5ec8c5*/
          break;
        case 3:
          v6 = 1044; /*0x5ec8d1*/
          break;
        case 4:
          v6 = 1045; /*0x5ec8dd*/
          break;
        case 5:
          v6 = 1046; /*0x5ec8e9*/
          break;
        default:
          v6 = v5 == 6 ? 1047 : v5 != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v6 = 1041; /*0x5ec8ad*/
    }
    v7 = SendDlgItemMessageA(v4, v6, 0x147u, 0, 0); /*0x5ec91c*/
    v8 = SendDlgItemMessageA(v4, v6, 0x150u, v7, 0); /*0x5ec928*/
    if ( v8 == -1 ) /*0x5ec92d*/
    {
      v9 = 0; /*0x5ec92f*/
    }
    else
    {
      v9 = (wchar_t *)v8; /*0x5ec935*/
      if ( v8 /*0x5ec960*/
        && (v8 == g_Lobby_PlayerTeam || v8 == g_Lobby_PlayerSide || v8 == g_Lobby_PlayerColor)
        && dword_A8B23C
        && !a3 )
      {
        return 1; /*0x5ec960*/
      }
    }
    if ( v5 >= v12 ) /*0x5ec966*/
      break; /*0x5ec966*/
LABEL_39:
    if ( ++v5 >= 8 ) /*0x5ec9c3*/
      return 0; /*0x5ec9d2*/
  }
  if ( !v9 /*0x5ec98a*/
    || v9 == (wchar_t *)g_HouseClass_ObserverFlags
    || v9 == (wchar_t *)g_Lobby_PlayerCount
    || v9 == (wchar_t *)g_Lobby_MaxPlayers
    || v9 == g_Lobby_PlayerReady )
  {
    v10 = 0; /*0x5ec9d5*/
  }
  else
  {
    v10 = 1; /*0x5ec98e*/
    if ( SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec998*/
      return 1; /*0x5ec998*/
  }
  if ( !dword_A8B23C || a4 || !v10 || SessionClass::GetPlayerSide((int)v9) != -3 ) /*0x5ec9b9*/
  {
    v4 = hDlg; /*0x5ec9bb*/
    goto LABEL_39; /*0x5ec9bb*/
  }
  return 1; /*0x5ec9c9*/
}



// ==== 0x005EC9F0  PlayerSkirmishSlotHandler  this=MultiplayerLobby  sig=csp ====
char __fastcall Skirmish_PlayerSlotHandler(HWND a1, int a2, LPARAM a3, int a4)
{
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // eax
  bool v11; // zf
  WPARAM v12; // ebx
  char v13; // cl
  int v14; // esi
  int v15; // eax
  int v16; // esi
  WPARAM v17; // ebx
  wchar_t *v18; // eax
  char result; // al
  LPARAM v20; // ecx
  LPARAM v21; // esi
  char v22; // cl
  bool v23; // al
  int ResourceID2; // eax
  int v25; // eax
  HWND v26; // eax
  int ResourceID; // esi
  int ResourceID3; // eax
  int ResourceID4; // eax
  int v30; // eax
  int v31; // eax
  HWND v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // cl
  LPARAM v38; // edx
  LPARAM *v39; // ecx
  LPARAM v40; // eax
  bool v41; // [esp+11h] [ebp-17h]
  char v42; // [esp+12h] [ebp-16h]
  bool v43; // [esp+13h] [ebp-15h]
  wchar_t *String; // [esp+14h] [ebp-14h]
  LRESULT v46; // [esp+1Ch] [ebp-Ch]
  LRESULT v47; // [esp+1Ch] [ebp-Ch]
  HWND hWnd; // [esp+20h] [ebp-8h]
  HWND hWnda; // [esp+20h] [ebp-8h]
  HWND DlgItem; // [esp+24h] [ebp-4h]
  LPARAM v51; // [esp+2Ch] [ebp+4h]
  int v52; // [esp+2Ch] [ebp+4h]
  bool v53; // [esp+2Ch] [ebp+4h]

  switch ( a2 )
  {
    case 1041:
      v7 = 0; /*0x5eca0b*/
      break;
    case 1042:
      v7 = 1; /*0x5eca17*/
      break;
    case 1043:
      v7 = 2; /*0x5eca26*/
      break;
    case 1044:
      v7 = 3; /*0x5eca35*/
      break;
    case 1045:
      v7 = 4; /*0x5eca44*/
      break;
    case 1046:
      v7 = 5; /*0x5eca53*/
      break;
    case 1047:
      v7 = 6; /*0x5eca62*/
      break;
    default:
      v7 = a2 != 1048 ? -1 : 7;
      break;
  }
  String = (wchar_t *)*(&dword_A8DA90 + v7); /*0x5eca84*/
  if ( a3
    && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor)
    && v7 != g_MPCooperativeState )
  {
    if ( g_MenuStateFlags /*0x5ecadc*/
      || g_MPCooperativeState > 0
      && ((v8 = *(&dword_A8DA90 + g_MPCooperativeState), *(_DWORD *)(v8 + 107) == -1) || v8 == g_Lobby_MaxPlayers) )
    {
      v9 = GetStringCSF(aTxtNoAiWithObs, 0, g_Str_File_netshare_cpp, 6150); /*0x5ecaf3*/
      Dialog::ShowMessage(-1, (size_t)v9); /*0x5ecafb*/
      v10 = String; /*0x5ecb00*/
      v11 = String == 0; /*0x5ecb07*/
      v51 = (LPARAM)String; /*0x5ecb09*/
      String = (wchar_t *)a3; /*0x5ecb0d*/
      if ( !v11 /*0x5ecb29*/
        && (v10 == (wchar_t *)g_Lobby_PlayerTeam
         || v10 == (wchar_t *)g_Lobby_PlayerSide
         || v10 == (wchar_t *)g_Lobby_PlayerColor) )
      {
        v51 = g_Lobby_PlayerCount; /*0x5ecb31*/
      }
      hWnd = GetDlgItem(a1, a2); /*0x5ecb40*/
      ShowWindow(hWnd, 0); /*0x5ecb44*/
      v12 = 0; /*0x5ecb5b*/
      v46 = SendDlgItemMessageA(a1, a2, 0x146u, 0, 0); /*0x5ecb5f*/
      if ( v46 > 0 ) /*0x5ecb63*/
      {
        while ( SendDlgItemMessageA(a1, a2, 0x150u, v12, 0) != v51 ) /*0x5ecb79*/
        {
          if ( (int)++v12 >= v46 ) /*0x5ecb82*/
            goto LABEL_33; /*0x5ecb82*/
        }
        SendDlgItemMessageA(a1, a2, 0x14Eu, v12, 0); /*0x5ecba0*/
      }
LABEL_33:
      ShowWindow(hWnd, 5); /*0x5ecb84*/
    }
  }
  else if ( a3 == g_Lobby_MaxPlayers )
  {
    v13 = 0; /*0x5ecbc4*/
    v14 = 0; /*0x5ecbc6*/
    v52 = 0; /*0x5ecbc8*/
    do
    {
      if ( v14 != v7 )
      {
        v15 = *(&dword_A8DA90 + v14); /*0x5ecbd4*/
        if ( v15 )
        {
          if ( v15 == g_Lobby_PlayerTeam || v15 == g_Lobby_PlayerSide || v15 == g_Lobby_PlayerColor )
          {
            if ( v14 )
            {
              switch ( v14 )
              {
                case 1:
                  v16 = 1042; /*0x5ecc0f*/
                  break;
                case 2:
                  v16 = 1043; /*0x5ecc1b*/
                  break;
                case 3:
                  v16 = 1044; /*0x5ecc27*/
                  break;
                case 4:
                  v16 = 1045; /*0x5ecc33*/
                  break;
                case 5:
                  v16 = 1046; /*0x5ecc3f*/
                  break;
                case 6:
                  v16 = 1047; /*0x5ecc4b*/
                  break;
                default:
                  v16 = v14 != 7 ? -1 : 1048;
                  break;
              }
            }
            else
            {
              v16 = 1041; /*0x5ecc03*/
            }
            hWnda = (HWND)g_Lobby_PlayerCount; /*0x5ecc6c*/
            DlgItem = GetDlgItem(a1, v16); /*0x5ecc79*/
            ShowWindow(DlgItem, 0); /*0x5ecc7d*/
            v17 = 0; /*0x5ecc94*/
            v47 = SendDlgItemMessageA(a1, v16, 0x146u, 0, 0); /*0x5ecc98*/
            if ( v47 > 0 ) /*0x5ecc9c*/
            {
              while ( (HWND)SendDlgItemMessageA(a1, v16, 0x150u, v17, 0) != hWnda ) /*0x5eccb2*/
              {
                if ( (int)++v17 >= v47 ) /*0x5eccbb*/
                  goto LABEL_63; /*0x5eccbb*/
              }
              SendDlgItemMessageA(a1, v16, 0x14Eu, v17, 0); /*0x5eccc9*/
            }
LABEL_63:
            ShowWindow(DlgItem, 5); /*0x5ecccf*/
            PlayerSkirmishSlotHandler(g_Lobby_PlayerCount, 0); /*0x5ecce9*/
            v13 = 1; /*0x5eccee*/
            v14 = v52; /*0x5eccf0*/
          }
        }
      }
      v52 = ++v14; /*0x5eccf8*/
    }
    while ( v14 < 8 );
    if ( v13 ) /*0x5ecd04*/
    {
      v18 = GetStringCSF(aTxtObserverBoo, 0, g_Str_File_netshare_cpp, 6179); /*0x5ecd17*/
      Dialog::ShowMessage(-1, (size_t)v18); /*0x5ecd1f*/
    }
  }
  result = a3; /*0x5ecd27*/
  if ( (wchar_t *)a3 != String )
  {
    *(&dword_A8DA90 + v7) = a3; /*0x5ecd3b*/
    if ( a4 == 1 || a4 == 2 ) /*0x5ecd4a*/
    {
      v20 = g_HouseClass_ObserverFlags; /*0x5ecd56*/
      if ( !a3 /*0x5ecd90*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_MaxPlayers
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        if ( String ) /*0x5ecd98*/
        {
          if ( String != (wchar_t *)g_HouseClass_ObserverFlags /*0x5ecda4*/
            && String != (wchar_t *)g_Lobby_PlayerCount
            && String != g_Lobby_PlayerReady )
          {
            v20 = (LPARAM)String; /*0x5ecdab*/
            if ( String != (wchar_t *)g_Lobby_MaxPlayers ) /*0x5ecdb1*/
            {
              v20 = g_Lobby_PlayerTeam; /*0x5ecdb3*/
              if ( String != (wchar_t *)g_Lobby_PlayerTeam && String != (wchar_t *)g_Lobby_PlayerSide ) /*0x5ecdc9*/
              {
                v20 = (LPARAM)String; /*0x5ecdd0*/
                if ( String != (wchar_t *)g_Lobby_PlayerColor ) /*0x5ecdd6*/
                {
                  if ( ppv ) /*0x5ecddf*/
                    PlayerSkirmishSlotHandler_Handle_7A28B0(String); /*0x5ecde1*/
                  else
                    PlayerSkirmishSlotHandler_Handle_5DB600(); /*0x5ecde8*/
                }
              }
            }
          }
        }
      }
      if ( ppv ) /*0x5ecdf4*/
        Lobby::BuildPlayerList(v20); /*0x5ecdf6*/
      else
        PlayerSkirmishSlotHandler_Handle(v20); /*0x5ecdfd*/
    }
    v21 = a3; /*0x5ece02*/
    v53 = a3 && (a3 == g_Lobby_PlayerTeam || a3 == g_Lobby_PlayerSide || a3 == g_Lobby_PlayerColor); /*0x5ece24*/
    v41 = String /*0x5ece4c*/
       && (String == (wchar_t *)g_Lobby_PlayerTeam
        || String == (wchar_t *)g_Lobby_PlayerSide
        || String == (wchar_t *)g_Lobby_PlayerColor);
    if ( a3 != g_Lobby_MaxPlayers )
    {
      if ( !a3 /*0x5ece92*/
        || a3 == g_HouseClass_ObserverFlags
        || a3 == g_Lobby_PlayerCount
        || (wchar_t *)a3 == g_Lobby_PlayerReady
        || a3 == g_Lobby_PlayerTeam
        || a3 == g_Lobby_PlayerSide
        || a3 == g_Lobby_PlayerColor )
      {
        v22 = 0; /*0x5ecea5*/
        goto LABEL_116; /*0x5ecea7*/
      }
      if ( *(_DWORD *)(a3 + 107) != -1 )
      {
        v22 = 0; /*0x5ece9e*/
LABEL_116:
        v42 = v22; /*0x5eceae*/
        v23 = String == (wchar_t *)g_Lobby_MaxPlayers /*0x5eceef*/
           || String
           && String != (wchar_t *)g_HouseClass_ObserverFlags
           && String != (wchar_t *)g_Lobby_PlayerCount
           && String != g_Lobby_PlayerReady
           && String != (wchar_t *)g_Lobby_PlayerTeam
           && String != (wchar_t *)g_Lobby_PlayerSide
           && String != (wchar_t *)g_Lobby_PlayerColor
           && *(_DWORD *)((char *)String + 107) == -1;
        v43 = v23; /*0x5ecef7*/
        if ( v22 )
        {
          ResourceID2 = GetResourceID2CSF((void *)v7); /*0x5ecf03*/
          SetupComboBoxObserver(a1, ResourceID2); /*0x5ecf0c*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v25 = 1042; /*0x5ecf21*/
                break;
              case 2:
                v25 = 1043; /*0x5ecf2d*/
                break;
              case 3:
                v25 = 1044; /*0x5ecf39*/
                break;
              case 4:
                v25 = 1045; /*0x5ecf45*/
                break;
              case 5:
                v25 = 1046; /*0x5ecf51*/
                break;
              case 6:
                v25 = 1047; /*0x5ecf5d*/
                break;
              default:
                v25 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v25 = 1041; /*0x5ecf15*/
          }
          v26 = GetDlgItem(a1, v25); /*0x5ecf82*/
          SendMessageA(v26, 0x4F1u, 0, 1); /*0x5ecf89*/
          ResourceID = GetResourceIDCSF((void *)v7); /*0x5ecf96*/
          FillListBox(a1, ResourceID); /*0x5ecf9c*/
          SetupSkirmishSpawnLocations(a1, ResourceID, 8); /*0x5ecfa7*/
          ResourceID3 = GetResourceID3CSF((void *)v7); /*0x5ecfae*/
          SetupComboBoxRandomAlliance(a1, ResourceID3); /*0x5ecfb7*/
          ResourceID4 = GetResourceID4CSF((void *)v7); /*0x5ecfbe*/
          SetupComboBoxRandomAlliance(a1, ResourceID4); /*0x5ecfc7*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ecfd2*/
          MEMORY[0xA8B27C][v7] = -1; /*0x5ecfd7*/
          MEMORY[0xA8B29C][v7] = -1; /*0x5ecfde*/
          MEMORY[0xA8B2BC][v7] = -1; /*0x5ecfe5*/
        }
        else
        {
          if ( !v23 ) /*0x5ecff3*/
          {
LABEL_162:
            if ( v53 ) /*0x5ed0fc*/
            {
              SetupSkirmishPlayerSlots(a1, (HWND)1); /*0x5ed104*/
              v36 = -1; /*0x5ed10f*/
              if ( v21 == g_Lobby_PlayerTeam ) /*0x5ed113*/
              {
                v36 = 2; /*0x5ed115*/
              }
              else if ( v21 == g_Lobby_PlayerSide ) /*0x5ed122*/
              {
                v36 = 1; /*0x5ed124*/
              }
              else if ( v21 == g_Lobby_PlayerColor ) /*0x5ed131*/
              {
                v36 = 0; /*0x5ed133*/
              }
              MEMORY[0xA8B27C][v7] = v36; /*0x5ed135*/
              MEMORY[0xA8B29C][v7] = -2; /*0x5ed141*/
              MEMORY[0xA8B2BC][v7] = -2; /*0x5ed148*/
              MEMORY[0xA8B2DC][v7] = -2; /*0x5ed14f*/
              MEMORY[0xA8B2FC][v7] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ed161*/
            }
            else if ( v41 ) /*0x5ed170*/
            {
              SetupSkirmishPlayerSlots(a1, 0); /*0x5ed178*/
              MEMORY[0xA8B27C][v7] = -1; /*0x5ed17d*/
              MEMORY[0xA8B29C][v7] = -1; /*0x5ed184*/
              MEMORY[0xA8B2BC][v7] = -1; /*0x5ed18b*/
              MEMORY[0xA8B2DC][v7] = -1; /*0x5ed192*/
              MEMORY[0xA8B2FC][v7] = -1; /*0x5ed199*/
            }
            if ( ppv ) /*0x5ed1a7*/
              SessionClass::BuildLaunchString(); /*0x5ed1a9*/
            RefreshLobbyPlayerSlots(v7); /*0x5ed1b0*/
            v37 = v53 || v41; /*0x5ed1c9*/
            result = v42 || v43; /*0x5ed1df*/
            if ( v37 || result ) /*0x5ed1e7*/
            {
              v38 = 0; /*0x5ed1fb*/
              v39 = &dword_A8DA90; /*0x5ed1fd*/
              do /*0x5ed21e*/
              {
                v40 = *v39; /*0x5ed202*/
                if ( *v39 && (v40 == g_Lobby_PlayerTeam || v40 == g_Lobby_PlayerSide || v40 == g_Lobby_PlayerColor) ) /*0x5ed212*/
                  ++v38; /*0x5ed214*/
                ++v39; /*0x5ed215*/
              }
              while ( (int)v39 < (int)&dword_A8DAB0 ); /*0x5ed21e*/
              result = a4; /*0x5ed220*/
              MEMORY[0xA8B274] = v38; /*0x5ed224*/
              if ( a4 == 2 ) /*0x5ed22d*/
              {
                if ( ppv ) /*0x5ed236*/
                  DisplayRankingsThunkWOL(); /*0x5ed238*/
                else
                  RetVtableStubZero_eax_27(); /*0x5ed250*/
                return CheckGameSettingsChanged(1, 0); /*0x5ed241*/
              }
            }
            return result; /*0x5ed24d*/
          }
          v30 = GetResourceID2CSF((void *)v7); /*0x5ecffb*/
          FillComboBoxRandomOnly(a1, v30); /*0x5ed004*/
          if ( v7 )
          {
            switch ( v7 )
            {
              case 1:
                v31 = 1042; /*0x5ed019*/
                break;
              case 2:
                v31 = 1043; /*0x5ed025*/
                break;
              case 3:
                v31 = 1044; /*0x5ed031*/
                break;
              case 4:
                v31 = 1045; /*0x5ed03d*/
                break;
              case 5:
                v31 = 1046; /*0x5ed049*/
                break;
              case 6:
                v31 = 1047; /*0x5ed055*/
                break;
              default:
                v31 = v7 != 7 ? -1 : 1048;
                break;
            }
          }
          else
          {
            v31 = 1041; /*0x5ed00d*/
          }
          v32 = GetDlgItem(a1, v31); /*0x5ed07a*/
          SendMessageA(v32, 0x4F1u, 0, 0); /*0x5ed081*/
          v33 = GetResourceIDCSF((void *)v7); /*0x5ed08e*/
          FillListBox(a1, v33); /*0x5ed094*/
          SetupSkirmishSpawnLocations(a1, v33, -2); /*0x5ed09f*/
          v34 = GetResourceID3CSF((void *)v7); /*0x5ed0a6*/
          FillComboBoxAllianceSlots(a1, v34); /*0x5ed0af*/
          v35 = GetResourceID4CSF((void *)v7); /*0x5ed0b6*/
          FillLobbyPlayerSlot(a1, v35); /*0x5ed0bf*/
          SetupSkirmishPlayerSlots(a1, 0); /*0x5ed0ca*/
          MEMORY[0xA8B27C][v7] = -1; /*0x5ed0cf*/
          MEMORY[0xA8B29C][v7] = -1; /*0x5ed0d6*/
          MEMORY[0xA8B2BC][v7] = -1; /*0x5ed0dd*/
          MEMORY[0xA8B2DC][v7] = -1; /*0x5ed0e4*/
          MEMORY[0xA8B2FC][v7] = -1; /*0x5ed0eb*/
        }
        v21 = a3; /*0x5ed0f2*/
        goto LABEL_162; /*0x5ed0f2*/
      }
    }
    v22 = 1; /*0x5eceac*/
    goto LABEL_116; /*0x5eceac*/
  }
  return result; /*0x5ed246*/
}



// ==== 0x005ED270  sub_5ED270  this=-  sig=ida-proto ====
char __fastcall sub_5ED270(HWND hDlg, int nIDDlgItem, int a3)
{
  LPARAM v5; // edx
  WPARAM v6; // ebx
  LRESULT v8; // [esp+10h] [ebp-8h]
  HWND hWnd; // [esp+14h] [ebp-4h]
  LPARAM v10; // [esp+1Ch] [ebp+4h]

  switch ( a3 )
  {
    case 2:
      v10 = g_HouseClass_ObserverFlags; /*0x5ed289*/
      goto LABEL_13; /*0x5ed28d*/
    case 3:
      v10 = g_Lobby_PlayerCount; /*0x5ed29a*/
      goto LABEL_13; /*0x5ed29e*/
    case 4:
      v5 = g_Lobby_PlayerTeam; /*0x5ed2a5*/
      break;
    case 5:
      v10 = g_Lobby_PlayerSide; /*0x5ed2b7*/
      goto LABEL_13; /*0x5ed2bb*/
    case 6:
      v10 = g_Lobby_PlayerColor; /*0x5ed2c8*/
      goto LABEL_13; /*0x5ed2cc*/
    default:
      v5 = a3 != 7 ? 0 : g_Lobby_MaxPlayers;
      break;
  }
  v10 = v5; /*0x5ed2de*/
LABEL_13:
  hWnd = GetDlgItem(hDlg, nIDDlgItem); /*0x5ed2e2*/
  ShowWindow(hWnd, 0); /*0x5ed2f1*/
  v6 = 0; /*0x5ed30a*/
  v8 = SendDlgItemMessageA(hDlg, nIDDlgItem, 0x146u, 0, 0); /*0x5ed30e*/
  if ( v8 > 0 ) /*0x5ed312*/
  {
    while ( SendDlgItemMessageA(hDlg, nIDDlgItem, 0x150u, v6, 0) != v10 ) /*0x5ed324*/
    {
      if ( (int)++v6 >= v8 ) /*0x5ed32d*/
        goto LABEL_18; /*0x5ed32d*/
    }
    SendDlgItemMessageA(hDlg, nIDDlgItem, 0x14Eu, v6, 0); /*0x5ed33b*/
  }
LABEL_18:
  ShowWindow(hWnd, 5); /*0x5ed33d*/
  return PlayerSkirmishSlotHandler(hDlg, nIDDlgItem, v10, 0); /*0x5ed35a*/
}



// ==== 0x005ED370  Session::StartGame  this=Dialog  sig=csp ====
int __thiscall Session::StartGame(Session *this)
{
  Skirmish *v2; // esi
  ObjectClass *v3; // eax
  Skirmish *v4; // eax

  if ( !(unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * *(_DWORD *)&stru_A8B250.__pad_0[4])) ) /*0x5ed381*/
    return Session::PrepareGame(this); /*0x5ed3f1*/
  v2 = g_UIControlState; /*0x5ed38b*/
  if ( g_UIControlState ) /*0x5ed393*/
  {
    ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5ed397*/
    __3_YAXPAX_Z(v2); /*0x5ed39d*/
  }
  v3 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5ed3a7*/
  if ( v3 ) /*0x5ed3b2*/
    v4 = (Skirmish *)unknown_libname_27(v3); /*0x5ed3b6*/
  else
    v4 = 0; /*0x5ed3bd*/
  g_UIControlState = v4; /*0x5ed3c6*/
  Surface::LoadToSurfaceSHP((Surface *)v4, ExistingFileName); /*0x5ed3cb*/
  if ( !*(_DWORD *)g_UIControlState ) /*0x5ed3d6*/
    Session::PrepareGame(this); /*0x5ed3dd*/
  return InvalidateRect((HWND)this, 0, 0); /*0x5ed3ed*/
}



// ==== 0x005ED400  SaveMultiplayerLobbySettings  this=ObjectClass  sig=csp ====
char __fastcall SaveMultiplayerLobbySettings(HWND hDlg, int a2)
{
  int i; // edi
  int v5; // esi
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // ecx
  int v9; // ecx
  int v10; // esi
  int ResourceID2CSF; // eax
  int ResourceIDCSF; // eax
  int ComboBoxSelectedRaw; // eax
  int v14; // ecx
  char result; // al

  *(_DWORD *)a2 = *(_DWORD *)stru_A8B250; /*0x5ed40c*/
  *(_DWORD *)(a2 + 4) = MEMORY[0xA8B254]; /*0x5ed416*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v5 = 1042; /*0x5ed42e*/
          break;
        case 2:
          v5 = 1043; /*0x5ed43a*/
          break;
        case 3:
          v5 = 1044; /*0x5ed446*/
          break;
        case 4:
          v5 = 1045; /*0x5ed452*/
          break;
        case 5:
          v5 = 1046; /*0x5ed45e*/
          break;
        case 6:
          v5 = 1047; /*0x5ed46a*/
          break;
        default:
          v5 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v5 = 1041; /*0x5ed422*/
    }
    v6 = SendDlgItemMessageA(hDlg, v5, 0x147u, 0, 0); /*0x5ed491*/
    v7 = SendDlgItemMessageA(hDlg, v5, 0x150u, v6, 0); /*0x5ed4a1*/
    v8 = v7 != -1 ? v7 : 0;
    if ( v8 == g_HouseClass_ObserverFlags )
    {
      v9 = 2; /*0x5ed4b9*/
    }
    else if ( v8 == g_Lobby_PlayerCount )
    {
      v9 = 3; /*0x5ed4c8*/
    }
    else if ( v8 == g_Lobby_PlayerTeam )
    {
      v9 = 4; /*0x5ed4d7*/
    }
    else if ( v8 == g_Lobby_PlayerSide )
    {
      v9 = 5; /*0x5ed4e6*/
    }
    else if ( v8 == g_Lobby_PlayerColor )
    {
      v9 = 6; /*0x5ed4f5*/
    }
    else
    {
      v9 = g_Lobby_MaxPlayers != v8 ? 2 : 7;
    }
    v10 = a2 + 12 * i; /*0x5ed50f*/
    *(_DWORD *)(v10 + 28) = v9; /*0x5ed513*/
    ResourceID2CSF = GetResourceID2CSF((void *)i); /*0x5ed518*/
    *(_DWORD *)(v10 + 32) = GetComboBoxSelected(hDlg, ResourceID2CSF, -1); /*0x5ed52a*/
    ResourceIDCSF = GetResourceIDCSF((void *)i); /*0x5ed52d*/
    ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, ResourceIDCSF, -1); /*0x5ed538*/
    v14 = 3 * i + 9; /*0x5ed53d*/
    *(_DWORD *)(a2 + 4 * v14) = ComboBoxSelectedRaw; /*0x5ed545*/
  }
  *(_DWORD *)(a2 + 8) = MEMORY[0xA8B268]; /*0x5ed556*/
  *(_DWORD *)(a2 + 12) = MEMORY[0xA8B25C]; /*0x5ed55e*/
  *(_DWORD *)(a2 + 16) = MEMORY[0xA8B270]; /*0x5ed567*/
  *(_BYTE *)(a2 + 20) = MEMORY[0xA8B262]; /*0x5ed570*/
  *(_BYTE *)(a2 + 21) = MEMORY[0xA8B263]; /*0x5ed578*/
  *(_BYTE *)(a2 + 22) = MEMORY[0xA8B264]; /*0x5ed581*/
  *(_BYTE *)(a2 + 23) = dword_A8B320; /*0x5ed58a*/
  result = MEMORY[0xA8B261]; /*0x5ed58d*/
  *(_BYTE *)(a2 + 24) = MEMORY[0xA8B261]; /*0x5ed592*/
  return result; /*0x5ed555*/
}



// ==== 0x005ED5A0  SetupMultiplayerLobbyPlayers  this=-  sig=csp ====
int __fastcall SetupMultiplayerLobbyPlayers(HWND hDlg, int a2)
{
  char *First; // edi
  MultiplayerGameMode *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // edi
  int v14; // ebx
  LPARAM v15; // ebp
  WPARAM v16; // ebx
  CountryCombo *ResourceID2CSF; // ebx
  StartCombo *ResourceIDCSF; // edi
  Dialog *ResourceID3CSF; // ebp
  int v20; // eax
  HWND v21; // edi
  HWND v22; // ebp
  int ComboBoxSelectedRaw; // ebx
  int v24; // eax
  wchar_t **v25; // edi
  wchar_t *v26; // ecx
  char *v27; // eax
  int v28; // ebx
  int v29; // eax
  wchar_t **v30; // edi
  wchar_t *v31; // ecx
  char *v32; // eax
  int v33; // eax
  int ComboBoxSelectedRaw2; // ebx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  HWND v38; // edi
  HWND v39; // ebp
  ScenarioClass *v41; // [esp+0h] [ebp-30h]
  char v42; // [esp+13h] [ebp-1Dh]
  int i; // [esp+14h] [ebp-1Ch]
  int v44; // [esp+18h] [ebp-18h]
  LRESULT nIDDlgItem; // [esp+1Ch] [ebp-14h]
  Dialog *nIDDlgItema; // [esp+1Ch] [ebp-14h]
  HWND nIDDlgItemb; // [esp+1Ch] [ebp-14h]
  int v48; // [esp+20h] [ebp-10h]
  HWND hWnd; // [esp+28h] [ebp-8h]
  HWND hWnda; // [esp+28h] [ebp-8h]
  HWND hWndb; // [esp+28h] [ebp-8h]
  HWND DlgItem; // [esp+2Ch] [ebp-4h]

  if ( *(int *)a2 < 1 || *(_DWORD *)a2 > MultiplayerGameMode::ListGet() ) /*0x5ed5bf*/
    *(_DWORD *)a2 = *(_DWORD *)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed5c9*/
  *(_DWORD *)stru_A8B250.__pad_0 = *(_DWORD *)a2; /*0x5ed5cf*/
  First = (char *)MultiplayerGameMode::Find(*(MultiplayerGameMode **)stru_A8B250.__pad_0); /*0x5ed5da*/
  if ( !First ) /*0x5ed5de*/
    First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed5e5*/
  if ( (Network::IsMultiplayerActive() || Network::IsLobbyFeature()) /*0x5ed601*/
    && First
    && (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)First + 4))(First) )
  {
    v5 = *(MultiplayerGameMode **)(MultiplayerGameMode::GetFirst() + 40); /*0x5ed60d*/
    *(_DWORD *)a2 = v5; /*0x5ed610*/
    *(_DWORD *)stru_A8B250.__pad_0 = v5; /*0x5ed615*/
    v6 = MultiplayerGameMode::Find(v5); /*0x5ed61a*/
    if ( !v6 ) /*0x5ed621*/
      v6 = MultiplayerGameMode::GetFirst(); /*0x5ed623*/
    First = (char *)v6; /*0x5ed628*/
  }
  *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed62d*/
  *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)First + 10); /*0x5ed633*/
  v7 = *(_DWORD *)(a2 + 4); /*0x5ed639*/
  if ( v7 < 0 || v7 >= dword_A8B8D8 ) /*0x5ed646*/
    *(_DWORD *)(a2 + 4) = 0; /*0x5ed648*/
  if ( LoadScenarioClassByIndex(*(_DWORD *)(a2 + 4)) ) /*0x5ed652*/
    v8 = *(_DWORD *)(a2 + 4); /*0x5ed65b*/
  else
    v8 = 0; /*0x5ed660*/
  *(_DWORD *)&stru_A8B250.__pad_0[4] = v8; /*0x5ed668*/
  v42 = 0; /*0x5ed66d*/
  v9 = *(_DWORD *)(dword_A8B8CC + 4 * v8); /*0x5ed672*/
  if ( v9 && (unsigned __int8)IsRandMap::Sed(*(_DWORD *)(dword_A8B8CC + 4 * v8)) ) /*0x5ed67b*/
  {
    if ( MapSeed::IsInitialized() ) /*0x5ed684*/
      ScenarioClass::CopyStartPositions(v41); /*0x5ed694*/
    else
      v42 = 1; /*0x5ed68d*/
  }
  if ( !(unsigned __int8)MapPreview::Check(First, v9) || v42 ) /*0x5ed6ab*/
  {
    v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6b1*/
    if ( v10 == -1 ) /*0x5ed6b7*/
    {
      First = (char *)MultiplayerGameMode::GetFirst(); /*0x5ed6be*/
      *(_DWORD *)a2 = *((_DWORD *)First + 10); /*0x5ed6c3*/
      *(_DWORD *)stru_A8B250.__pad_0 = *((_DWORD *)First + 10); /*0x5ed6c9*/
      v10 = (*(int (__thiscall **)(char *))(*(_DWORD *)First + 68))(First); /*0x5ed6d3*/
    }
    *(_DWORD *)(a2 + 4) = v10; /*0x5ed6d6*/
    *(_DWORD *)&stru_A8B250.__pad_0[4] = v10; /*0x5ed6db*/
    LoadScenarioClassByIndex(v10); /*0x5ed6e0*/
  }
  dword_A8B23C = (ObjectClass *)First; /*0x5ed6eb*/
  LoadScenarioClassByIndex(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ed6f1*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 8))(dword_A8B23C); /*0x5ed6fe*/
  (*((void (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 9))(dword_A8B23C); /*0x5ed709*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 24))(First); /*0x5ed710*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)First + 124))(First); /*0x5ed717*/
  v11 = 8; /*0x5ed720*/
  v48 = 8; /*0x5ed728*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x5ed72c*/
  {
    if ( !Network::IsMultiplayerActive() || (v12 = Network::IsLobbyFeature() == 0, v11 = 2, !v12) ) /*0x5ed743*/
      v11 = 6; /*0x5ed745*/
    v48 = v11; /*0x5ed74a*/
  }
  if ( !g_MPCooperativeState && v11 < 8 ) /*0x5ed75b*/
    v48 = v11 + 1; /*0x5ed75e*/
  for ( i = 1; i < 8; ++i )
  {
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v13 = 1042; /*0x5ed77e*/
          break;
        case 2:
          v13 = 1043; /*0x5ed78a*/
          break;
        case 3:
          v13 = 1044; /*0x5ed796*/
          break;
        case 4:
          v13 = 1045; /*0x5ed7a2*/
          break;
        case 5:
          v13 = 1046; /*0x5ed7ae*/
          break;
        case 6:
          v13 = 1047; /*0x5ed7ba*/
          break;
        default:
          v13 = i != 7 ? -1 : 1048;
          break;
      }
    }
    else
    {
      v13 = 1041; /*0x5ed772*/
    }
    v14 = *(_DWORD *)(a2 + 12 * i + 28); /*0x5ed7de*/
    v44 = v14; /*0x5ed7e9*/
    if ( (Network::IsMultiplayerActive() || !g_MPCooperativeState || g_MenuStateFlags) /*0x5ed815*/
      && (v14 == 4 || v14 == 5 || v14 == 6) )
    {
      v14 = 2; /*0x5ed817*/
      v44 = 2; /*0x5ed81c*/
    }
    if ( i < v48 )
    {
      switch ( v14 )
      {
        case 7:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed83b*/
          v44 = 2; /*0x5ed841*/
          break;
        case 2:
          v15 = g_HouseClass_ObserverFlags; /*0x5ed850*/
          break;
        case 3:
          v15 = g_Lobby_PlayerCount; /*0x5ed85d*/
          break;
        case 4:
          v15 = g_Lobby_PlayerTeam; /*0x5ed86a*/
          break;
        case 5:
          v15 = g_Lobby_PlayerSide; /*0x5ed877*/
          break;
        default:
          v15 = v14 != 6 ? 0 : g_Lobby_PlayerColor;
          break;
      }
    }
    else
    {
      v15 = g_Lobby_PlayerCount; /*0x5ed826*/
      v44 = 3; /*0x5ed82c*/
    }
    hWnd = GetDlgItem(hDlg, v13); /*0x5ed89d*/
    ShowWindow(hWnd, 0); /*0x5ed8a1*/
    v16 = 0; /*0x5ed8b8*/
    nIDDlgItem = SendDlgItemMessageA(hDlg, v13, 0x146u, 0, 0); /*0x5ed8bc*/
    if ( nIDDlgItem > 0 ) /*0x5ed8c0*/
    {
      while ( SendDlgItemMessageA(hDlg, v13, 0x150u, v16, 0) != v15 ) /*0x5ed8d4*/
      {
        if ( (int)++v16 >= nIDDlgItem ) /*0x5ed8dd*/
          goto LABEL_78; /*0x5ed8dd*/
      }
      SendDlgItemMessageA(hDlg, v13, 0x14Eu, v16, 0); /*0x5ed8eb*/
    }
LABEL_78:
    ShowWindow(hWnd, 5); /*0x5ed8f1*/
    PlayerSkirmishSlotHandler(hDlg, v13, v15, 0); /*0x5ed905*/
    ResourceID2CSF = (CountryCombo *)GetResourceID2CSF((ObjectClass *)i); /*0x5ed917*/
    ResourceIDCSF = (StartCombo *)GetResourceIDCSF((ObjectClass *)i); /*0x5ed920*/
    ResourceID3CSF = (Dialog *)GetResourceID3CSF((ObjectClass *)i); /*0x5ed92b*/
    nIDDlgItema = (Dialog *)GetResourceID4CSF((ObjectClass *)i); /*0x5ed932*/
    if ( v44 == 2 || v44 == 3 ) /*0x5ed946*/
    {
      v36 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 10))(dword_A8B23C); /*0x5edc12*/
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, v36); /*0x5edc1a*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5edc25*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edc30*/
      v37 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5edc3d*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v37); /*0x5edc47*/
      DlgItem = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5edc58*/
      v38 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5edc5e*/
      v39 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5edc64*/
      hWndb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5edc7b*/
      EnableWindow(DlgItem, 0); /*0x5edc7f*/
      EnableWindow(v38, 0); /*0x5edc84*/
      EnableWindow(v39, 0); /*0x5edc89*/
      EnableWindow(hWndb, 0); /*0x5edc92*/
    }
    else if ( v44 == 7 ) /*0x5ed94f*/
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, -3); /*0x5ed95b*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, -2); /*0x5ed966*/
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5ed971*/
      v20 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 11))(dword_A8B23C); /*0x5ed97e*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v20); /*0x5ed988*/
      hWnda = GetDlgItem(hDlg, (int)ResourceID2CSF); /*0x5ed999*/
      v21 = GetDlgItem(hDlg, (int)ResourceIDCSF); /*0x5ed99f*/
      v22 = GetDlgItem(hDlg, (int)ResourceID3CSF); /*0x5ed9a5*/
      nIDDlgItemb = GetDlgItem(hDlg, (int)nIDDlgItema); /*0x5ed9bc*/
      EnableWindow(hWnda, 0); /*0x5ed9c0*/
      EnableWindow(v21, 0); /*0x5ed9c5*/
      EnableWindow(v22, 0); /*0x5ed9ca*/
      EnableWindow(nIDDlgItemb, 0); /*0x5ed9d3*/
    }
    else
    {
      SetupLobbyCountryCombo(hDlg, (int)ResourceID2CSF, *(_DWORD *)(a2 + 12 * i + 32)); /*0x5ed9e4*/
      SelectLobbyCountry(hDlg, ResourceID2CSF); /*0x5ed9ed*/
      SetupSkirmishSpawnLocations(hDlg, (int)ResourceIDCSF, *(_DWORD *)(a2 + 4 * (3 * i + 9))); /*0x5eda06*/
      ComboBoxSelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)ResourceIDCSF, -1); /*0x5eda18*/
      v24 = StartCombo::IDToIndex(ResourceIDCSF); /*0x5eda1a*/
      if ( (ObjectClass *)v24 == dword_A8DA8C ) /*0x5eda25*/
      {
        FillColorComboBoxUI(hDlg, (int)ResourceIDCSF); /*0x5eda2f*/
        if ( ComboBoxSelectedRaw != -2 ) /*0x5eda37*/
        {
          v25 = (wchar_t **)dword_A8DA90; /*0x5eda39*/
          while ( 1 ) /*0x5eda3e*/
          {
            v26 = *v25; /*0x5eda3e*/
            if ( *v25 ) /*0x5eda3e*/
            {
              if ( v26 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5eda83*/
                && v26 != (wchar_t *)g_Lobby_PlayerCount
                && v26 != g_Lobby_PlayerReady
                && v26 != (wchar_t *)g_Lobby_MaxPlayers
                && v26 != (wchar_t *)g_Lobby_PlayerTeam
                && v26 != (wchar_t *)g_Lobby_PlayerSide
                && v26 != (wchar_t *)g_Lobby_PlayerColor
                && SessionClass::GetPlayerColor((SessionClass *)v26) == ComboBoxSelectedRaw )
              {
                break; /*0x5eda83*/
              }
            }
            if ( (int)++v25 >= (int)&dword_A8DAB0 ) /*0x5eda8e*/
            {
              v27 = &stru_A8B250.__pad_0[108]; /*0x5eda90*/
              while ( *(_DWORD *)v27 != ComboBoxSelectedRaw ) /*0x5eda97*/
              {
                v27 += 4; /*0x5eda99*/
                if ( (int)v27 >= (int)&stru_A8B250.__pad_0[140] ) /*0x5edaa1*/
                  goto LABEL_100; /*0x5edaa1*/
              }
              break; /*0x5eda97*/
            }
          }
          ComboBoxSelectedRaw = -2; /*0x5edaa5*/
        }
LABEL_100:
        SessionClass::AssignColor((SessionClass *)&dword_A8B238, ComboBoxSelectedRaw, 0); /*0x5edaaa*/
        if ( dword_A8DA84 ) /*0x5edabe*/
          SessionClass::SetPlayerColor((int *)*dword_A8DA78, ComboBoxSelectedRaw); /*0x5edac9*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v24 + 108] = ComboBoxSelectedRaw; /*0x5edad0*/
      }
      SetupLobbyFactionSlots(hDlg, (int)ResourceID3CSF, -2); /*0x5edadd*/
      v28 = SetComboBoxSelection(hDlg, (int)ResourceID3CSF, -1); /*0x5edaef*/
      v29 = Dialog::SideIDToIndex(ResourceID3CSF); /*0x5edaf1*/
      if ( (ObjectClass *)v29 == dword_A8DA8C ) /*0x5edafc*/
      {
        FillComboBoxSides(hDlg, (int)ResourceID3CSF); /*0x5edb06*/
        if ( v28 != -2 ) /*0x5edb0e*/
        {
          v30 = (wchar_t **)dword_A8DA90; /*0x5edb10*/
          while ( 1 ) /*0x5edb15*/
          {
            v31 = *v30; /*0x5edb15*/
            if ( *v30 ) /*0x5edb15*/
            {
              if ( v31 != (wchar_t *)g_HouseClass_ObserverFlags /*0x5edb5a*/
                && v31 != (wchar_t *)g_Lobby_PlayerCount
                && v31 != g_Lobby_PlayerReady
                && v31 != (wchar_t *)g_Lobby_MaxPlayers
                && v31 != (wchar_t *)g_Lobby_PlayerTeam
                && v31 != (wchar_t *)g_Lobby_PlayerSide
                && v31 != (wchar_t *)g_Lobby_PlayerColor
                && SessionClass::GetOption((int *)v31) == v28 )
              {
                break; /*0x5edb5a*/
              }
            }
            if ( (int)++v30 >= (int)&dword_A8DAB0 ) /*0x5edb65*/
            {
              v32 = &stru_A8B250.__pad_0[140]; /*0x5edb67*/
              while ( *(_DWORD *)v32 != v28 ) /*0x5edb6e*/
              {
                v32 += 4; /*0x5edb70*/
                if ( (int)v32 >= (int)&stru_A8B250.__pad_0[172] ) /*0x5edb78*/
                  goto LABEL_121; /*0x5edb78*/
              }
              break; /*0x5edb6e*/
            }
          }
          v28 = -2; /*0x5edb7c*/
        }
LABEL_121:
        if ( dword_A8DA84 ) /*0x5edb88*/
          SessionClass::SetOption((int *)*dword_A8DA78, v28); /*0x5edb92*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v29 + 140] = v28; /*0x5edb99*/
      }
      v33 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 12))(dword_A8B23C); /*0x5edba8*/
      SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, v33); /*0x5edbb4*/
      ComboBoxSelectedRaw2 = GetComboBoxSelectedRaw2(hDlg, (int)nIDDlgItema, -1); /*0x5edbc6*/
      v35 = Dialog::OptionIDToIndex(nIDDlgItema); /*0x5edbc8*/
      if ( (ObjectClass *)v35 == dword_A8DA8C ) /*0x5edbd3*/
      {
        SetupLobbyPlayerSlots(hDlg, (int)nIDDlgItema, ComboBoxSelectedRaw2); /*0x5edbda*/
        if ( dword_A8DA84 ) /*0x5edbe6*/
          SessionClass::SetOption2((int *)*dword_A8DA78, ComboBoxSelectedRaw2); /*0x5edbf4*/
      }
      else
      {
        *(_DWORD *)&stru_A8B250.__pad_0[4 * v35 + 172] = ComboBoxSelectedRaw2; /*0x5edbfe*/
      }
    }
  }
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(_DWORD *)(a2 + 8); /*0x5edcb1*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(a2 + 12); /*0x5edcba*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(_DWORD *)(a2 + 16); /*0x5edcc3*/
  stru_A8B250.__pad_0[18] = *(_BYTE *)(a2 + 20); /*0x5edccc*/
  stru_A8B250.__pad_0[19] = *(_BYTE *)(a2 + 21); /*0x5edcd5*/
  stru_A8B250.__pad_0[20] = *(_BYTE *)(a2 + 22); /*0x5edcde*/
  dword_A8B320 = *(_BYTE *)(a2 + 23); /*0x5edce7*/
  stru_A8B250.__pad_0[17] = *(_BYTE *)(a2 + 24); /*0x5edcf0*/
  return a2; /*0x5edcaa*/
}



// ==== 0x005EDD00  ReadChatMessage  this=-  sig=csp ====
wchar_t **__fastcall ReadChatMessage(wchar_t **a1, HWND a2)
{
  size_t v4; // esi
  size_t v5; // esi
  wchar_t *v6; // eax
  WString v8; // [esp+Ch] [ebp-8h] BYREF

  unknown_libname_74(&v8); /*0x5edd0e*/
  GetEditControlText(a2, (SafeDelete *)&v8); /*0x5edd19*/
  v4 = 120; /*0x5edd22*/
  if ( !(unsigned __int8)WideString::IsASCII((WideString *)&v8) ) /*0x5edd27*/
  {
    v5 = 0; /*0x5edd34*/
    if ( WideString::Length((WideString *)&v8) ) /*0x5edd36*/
    {
      do /*0x5edd5b*/
      {
        if ( (unsigned __int16)WideString::GetChar((WideString *)&v8, v5) > 0x100u ) /*0x5edd4d*/
          break; /*0x5edd4d*/
        ++v5; /*0x5edd53*/
      }
      while ( v5 < (unsigned int)WideString::Length((WideString *)&v8) ); /*0x5edd5b*/
    }
    v4 = v5 - 1; /*0x5edd5d*/
    if ( v4 <= 0x28 ) /*0x5edd61*/
      v4 = 40; /*0x5edd63*/
  }
  if ( (unsigned int)WideString::Length((WideString *)&v8) > v4 ) /*0x5edd73*/
  {
    String::TruncateTo((String *)&v8, v4); /*0x5edd7a*/
    v6 = WideString::GetOrEmpty_Alt((WideString *)&v8); /*0x5edd83*/
    SendMessageA(a2, 0x4B2u, 0, (LPARAM)v6); /*0x5edd91*/
  }
  WideString::Assign((WideString *)&v8.WString_field_0x04, asc_831D9C); /*0x5edda0*/
  WString::TrimRight(&v8, (const wchar_t **)&v8.WString_field_0x04); /*0x5eddae*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8.WString_field_0x04); /*0x5eddb7*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v8); /*0x5eddc3*/
  DeleteAndZero::Alt((DeleteAndZero *)&v8); /*0x5eddcc*/
  return a1; /*0x5eddd3*/
}



// ==== 0x005EDDE0  EnablePlayerSlotControls  this=ObjectClass  sig=csp ====
int __fastcall EnablePlayerSlotControls(HWND hDlg, unsigned __int8 a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  const wchar_t **v6; // esi
  const wchar_t *v7; // ebx
  int ResourceID2CSF; // eax
  HWND DlgItem; // eax
  int ResourceIDCSF; // eax
  HWND v11; // eax
  int ResourceID3CSF; // eax
  HWND v13; // eax
  int ResourceID4CSF; // eax

  if ( hDlg ) /*0x5edded*/
  {
    result = dword_A8DA84; /*0x5eddf3*/
    if ( dword_A8DA84 ) /*0x5eddfa*/
    {
      v5 = 0; /*0x5ede06*/
      v6 = (const wchar_t **)&dword_A8DA90; /*0x5ede08*/
      v7 = *(const wchar_t **)dword_A8DA78; /*0x5ede0d*/
      while ( 1 ) /*0x5ede0f*/
      {
        result = (int)*v6; /*0x5ede0f*/
        if ( *v6 ) /*0x5ede0f*/
        {
          result = _wcsicmp(v7, *v6); /*0x5ede17*/
          if ( !result ) /*0x5ede21*/
            break; /*0x5ede21*/
        }
        ++v6; /*0x5ede23*/
        ++v5; /*0x5ede26*/
        if ( (int)v6 >= (int)&dword_A8DAB0 ) /*0x5ede2d*/
        {
          v5 = -1; /*0x5ede2f*/
          break; /*0x5ede2f*/
        }
      }
      v4 = v5; /*0x5ede32*/
    }
    else
    {
      v4 = -1; /*0x5eddfc*/
    }
    if ( (void *)v4 != g_MPCooperativeState ) /*0x5ede3a*/
    {
      ResourceID2CSF = GetResourceID2CSF((void *)v4); /*0x5ede42*/
      DlgItem = GetDlgItem(hDlg, ResourceID2CSF); /*0x5ede4f*/
      if ( DlgItem ) /*0x5ede59*/
        EnableWindow(DlgItem, a2); /*0x5ede67*/
      ResourceIDCSF = GetResourceIDCSF((void *)v4); /*0x5ede6b*/
      v11 = GetDlgItem(hDlg, ResourceIDCSF); /*0x5ede72*/
      if ( v11 ) /*0x5ede76*/
        EnableWindow(v11, a2); /*0x5ede84*/
      ResourceID3CSF = GetResourceID3CSF((void *)v4); /*0x5ede88*/
      v13 = GetDlgItem(hDlg, ResourceID3CSF); /*0x5ede8f*/
      if ( v13 ) /*0x5ede93*/
        EnableWindow(v13, a2); /*0x5edea1*/
      ResourceID4CSF = GetResourceID4CSF((void *)v4); /*0x5edea5*/
      result = (int)GetDlgItem(hDlg, ResourceID4CSF); /*0x5edeac*/
      if ( result ) /*0x5edeb0*/
      {
        if ( a2 == 1 && dword_A8B23C && !*(_BYTE *)(dword_A8B23C + 60) ) /*0x5edec5*/
          return EnableWindow((HWND)result, 0); /*0x5edece*/
        else
          return EnableWindow((HWND)result, a2); /*0x5edede*/
      }
    }
  }
  return result; /*0x5eded0*/
}



// ==== 0x005EDEF0  GetPlayerTypeString  this=-  sig=csp ====
String *__fastcall GetPlayerTypeString(String *a1, wchar_t *a2)
{
  if ( a2 == (wchar_t *)g_HouseClass_ObserverFlags ) /*0x5edefa*/
  {
    String::Assign(a1, off_831704); /*0x5edf02*/
    return a1; /*0x5edf07*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerCount ) /*0x5edf11*/
  {
    String::Assign(a1, off_831708); /*0x5edf1c*/
    return a1; /*0x5edf21*/
  }
  else if ( a2 == g_Lobby_PlayerReady ) /*0x5edf2b*/
  {
    String::Assign(a1, off_83170C); /*0x5edf36*/
    return a1; /*0x5edf3b*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerTeam ) /*0x5edf45*/
  {
    String::Assign(a1, off_831710); /*0x5edf4f*/
    return a1; /*0x5edf54*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerSide ) /*0x5edf5e*/
  {
    String::Assign(a1, off_831714); /*0x5edf69*/
    return a1; /*0x5edf6e*/
  }
  else if ( a2 == (wchar_t *)g_Lobby_PlayerColor ) /*0x5edf78*/
  {
    String::Assign(a1, off_831718); /*0x5edf83*/
    return a1; /*0x5edf88*/
  }
  else
  {
    if ( a2 == (wchar_t *)g_Lobby_MaxPlayers ) /*0x5edf92*/
      String::Assign(a1, off_83171C); /*0x5edf9c*/
    else
      String::Assign(a1, off_83170C); /*0x5edfae*/
    return a1; /*0x5edfa1*/
  }
}



// ==== 0x005EDFC0  NetworkLobby::DeleteAndZero  this=NetworkLobby  sig=csp ====
wchar_t *__thiscall NetworkLobby::DeleteAndZero(NetworkLobby *this)
{
  wchar_t *v2; // esi
  wchar_t *v4; // esi
  wchar_t *v5; // esi
  wchar_t *v6; // esi
  wchar_t *v7; // esi
  wchar_t *v8; // esi
  wchar_t *v9; // esi
  char *v10; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)WideString::IsASCII((const wchar_t **)this) ) /*0x5edfc4*/
  {
    ToWideStringCharAlt(&v10, (const wchar_t **)this); /*0x5edfd7*/
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831704) ) /*0x5edfe6*/
    {
      v2 = (wchar_t *)g_HouseClass_ObserverFlags; /*0x5edfef*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5edff9*/
      return v2; /*0x5ee002*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831708) ) /*0x5ee00e*/
    {
      v4 = (wchar_t *)g_Lobby_PlayerCount; /*0x5ee017*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee021*/
      return v4; /*0x5ee02a*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_83170C) ) /*0x5ee036*/
    {
      v5 = g_Lobby_PlayerReady; /*0x5ee03f*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee049*/
      return v5; /*0x5ee052*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831710) ) /*0x5ee05d*/
    {
      v6 = (wchar_t *)g_Lobby_PlayerTeam; /*0x5ee066*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee070*/
      return v6; /*0x5ee079*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831714) ) /*0x5ee085*/
    {
      v7 = (wchar_t *)g_Lobby_PlayerSide; /*0x5ee08e*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee098*/
      return v7; /*0x5ee0a1*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_831718) ) /*0x5ee0ad*/
    {
      v8 = (wchar_t *)g_Lobby_PlayerColor; /*0x5ee0b6*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0c0*/
      return v8; /*0x5ee0c9*/
    }
    if ( (unsigned __int8)String::Equals_Alt((String *)&v10, off_83171C) ) /*0x5ee0d4*/
    {
      v9 = (wchar_t *)g_Lobby_MaxPlayers; /*0x5ee0dd*/
      DeleteAndZero((ObjectClass *)&v10); /*0x5ee0e7*/
      return v9; /*0x5ee0f0*/
    }
    DeleteAndZero((ObjectClass *)&v10); /*0x5ee0f5*/
  }
  return 0; /*0x5ee000*/
}



// ==== 0x005EE100  ObjectClass::Network_Send  this=ObjectClass  sig=csp ====
BOOL __thiscall Network_Send(ObjectClass *this)
{
  return (unsigned __int8)String::Equals_Alt((String *)this, off_831704) /*0x5ee17e*/
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831708)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_83170C)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831710)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831714)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_831718)
      || (unsigned __int8)String::Equals_Alt((String *)this, off_83171C);
}



// ==== 0x005EE1B0  Config::SaveObserverMode  this=Config  sig=ida-proto ====
void Config_SaveObserverMode()
{
  int v0[9]; // [esp+0h] [ebp-24h] BYREF

  RawFileClass::Construct(v0, (int)aRa2mdIni); /*0x5ee1bc*/
  INIClass::SetInt((char *)&dword_8870C0, (unsigned __int8 *)aMultiplayer, aObservermode, g_MenuStateFlags, 0); /*0x5ee1d8*/
  INIClass::WriteDigest(&dword_8870C0, (int)v0, 0); /*0x5ee1e9*/
  RawFileClass::Dtor(v0); /*0x5ee1f2*/
}



// ==== 0x005EE200  ObjectClass::UpdateObserveButtonWOL  this=ObjectClass  sig=csp ====
void __thiscall UpdateObserveButtonWOL(ObjectClass *this)
{
  HWND DlgItem; // eax
  int v3; // eax
  HWND v4; // esi
  HWND v5; // eax
  HWND v6; // esi
  wchar_t *StringCSF; // eax
  HWND v8; // esi
  wchar_t *v9; // eax

  if ( this ) /*0x5ee207*/
  {
    DlgItem = GetDlgItem((HWND)this, 1888); /*0x5ee21a*/
    if ( DlgItem ) /*0x5ee21e*/
      SendMessageA(DlgItem, 0xF1u, g_MenuStateFlags != 0, 0); /*0x5ee236*/
    if ( g_MenuStateFlags ) /*0x5ee245*/
      v3 = HashTable::Find(&g_DialogHashTable, g_Str_File_wolob_pcx, 0); /*0x5ee24c*/
    else
      v3 = HashTable::Find(&g_DialogHashTable, aWolnobPcx, 0); /*0x5ee258*/
    v4 = (HWND)v3; /*0x5ee25d*/
    v5 = GetDlgItem((HWND)this, 1887); /*0x5ee265*/
    CacheDialogInvalidate(v5, v4); /*0x5ee26b*/
    v6 = GetDlgItem((HWND)this, 1741); /*0x5ee27e*/
    if ( v6 ) /*0x5ee282*/
    {
      if ( g_MenuStateFlags ) /*0x5ee28b*/
        StringCSF = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6751); /*0x5ee29e*/
      else
        StringCSF = GetStringCSF(aGuiJoin, 0, g_Str_File_netshare_cpp, 6753); /*0x5ee2b1*/
      SendMessageA(v6, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5ee2bf*/
      InvalidateRect(v6, 0, 0); /*0x5ee2ca*/
    }
    v8 = GetDlgItem((HWND)this, 1581); /*0x5ee2d4*/
    if ( v8 ) /*0x5ee2d9*/
    {
      if ( g_MenuStateFlags ) /*0x5ee2e2*/
      {
        v9 = GetStringCSF(g_Str_GUI_Observe, 0, g_Str_File_netshare_cpp, 6762); /*0x5ee2f5*/
      }
      else if ( (ObjectClass *)Dialog::FindByHandle((Dialog *)0x113) == this ) /*0x5ee303*/
      {
        v9 = GetStringCSF((wchar_t *)aGuiJoingame, 0, g_Str_File_netshare_cpp, 6766); /*0x5ee316*/
      }
      else
      {
        v9 = GetStringCSF(aGuiJoin, 0, g_Str_File_netshare_cpp, 6768); /*0x5ee329*/
      }
      SendMessageA(v8, 0x4B2u, 0, (LPARAM)v9); /*0x5ee337*/
      InvalidateRect(v8, 0, 0); /*0x5ee342*/
    }
  }
}



// ==== 0x005EE350  Dialog::RefreshDialogsGame  this=Dialog  sig=csp ====
int __thiscall Dialog::RefreshDialogsGame(Dialog *this)
{
  ObjectClass *v1; // eax
  ObjectClass *v2; // eax
  int result; // eax

  if ( this ) /*0x5ee352*/
    UpdateObserveButtonWOL((ObjectClass *)this); /*0x5ee354*/
  v1 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x5ee35e*/
  if ( v1 ) /*0x5ee365*/
    UpdateObserveButtonWOL(v1); /*0x5ee369*/
  v2 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x113); /*0x5ee373*/
  if ( v2 ) /*0x5ee37a*/
    UpdateObserveButtonWOL(v2); /*0x5ee37e*/
  result = Dialog::FindByHandle((Dialog *)0xBB); /*0x5ee388*/
  if ( result ) /*0x5ee38f*/
    UpdateObserveButtonWOL((ObjectClass *)result); /*0x5ee393*/
  return result; /*0x5ee398*/
}



// ==== 0x005EE3A0  NetworkLobby::FillOptionCombo  this=NetworkLobby  sig=ida-proto ====
char NetworkLobby_FillOptionCombo()
{
  HWND ResourceID4; // eax
  void *v1; // ecx
  int *v2; // ebx
  int v3; // edi
  HWND v4; // esi
  char *v5; // eax
  char *v6; // eax
  char v8; // [esp+3h] [ebp-9h]
  HWND hDlg; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v8 = 1; /*0x5ee3a8*/
  hDlg = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee3b4*/
  if ( hDlg /*0x5ee3ee*/
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (hDlg = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (ResourceID4 = (HWND)Dialog::FindByHandle((void *)0xBD), (hDlg = ResourceID4) != 0) )
  {
    if ( dword_A8B23C ) /*0x5ee3fb*/
      v8 = *(_BYTE *)(dword_A8B23C + 60); /*0x5ee400*/
    v1 = 0; /*0x5ee40c*/
    v10 = 0; /*0x5ee410*/
    v2 = MEMORY[0xA8B2FC]; /*0x5ee414*/
    do /*0x5ee419*/
    {
      v3 = v2[2533]; /*0x5ee419*/
      ResourceID4 = (HWND)GetResourceID4CSF(v1); /*0x5ee41f*/
      if ( (int)ResourceID4 < 0 ) /*0x5ee426*/
        goto LABEL_19; /*0x5ee426*/
      ResourceID4 = GetDlgItem(hDlg, (int)ResourceID4); /*0x5ee42e*/
      v4 = ResourceID4; /*0x5ee434*/
      if ( !ResourceID4 ) /*0x5ee438*/
        goto LABEL_19; /*0x5ee438*/
      if ( v3 /*0x5ee466*/
        && (v3 == g_Lobby_PlayerTeam || v3 == g_Lobby_PlayerSide || v3 == g_Lobby_PlayerColor)
        && (v5 = CharToWideString(unk_A8B380), !wcscmp((const wchar_t *)v5, word_A8D610)) )
      {
        if ( !v8 ) /*0x5ee478*/
        {
          *v2 = -2; /*0x5ee47e*/
LABEL_18:
          LOBYTE(ResourceID4) = EnableWindow(v4, 0); /*0x5ee484*/
          goto LABEL_19; /*0x5ee487*/
        }
        LOBYTE(ResourceID4) = EnableWindow(v4, 1); /*0x5ee47c*/
      }
      else
      {
        if ( v3 == g_HouseClass_ObserverFlags || v3 == g_Lobby_PlayerCount ) /*0x5ee4b7*/
          goto LABEL_18; /*0x5ee4b7*/
        if ( v10 == dword_A8DA8C ) /*0x5ee4c4*/
        {
          if ( !v8 ) /*0x5ee4cc*/
          {
            EnableWindow(v4, 0); /*0x5ee505*/
LABEL_27:
            v6 = CharToWideString(unk_A8B380); /*0x5ee4db*/
            ResourceID4 = (HWND)wcscmp((const wchar_t *)v6, word_A8D610); /*0x5ee4eb*/
            if ( !ResourceID4 ) /*0x5ee4f5*/
              LOBYTE(ResourceID4) = SessionClass::SetOption2(v3, -2); /*0x5ee4fb*/
            goto LABEL_19; /*0x5ee500*/
          }
          EnableWindow(v4, 1); /*0x5ee4d1*/
        }
        LOBYTE(ResourceID4) = v8; /*0x5ee4d3*/
        if ( !v8 ) /*0x5ee4d9*/
          goto LABEL_27; /*0x5ee4d9*/
      }
LABEL_19:
      ++v2; /*0x5ee489*/
      v1 = (void *)++v10; /*0x5ee490*/
    }
    while ( (int)v2 < (int)&byte_A8B31C ); /*0x5ee419*/
  }
  return (char)ResourceID4; /*0x5ee4a5*/
}



// ==== 0x005EE510  RefreshLobbyPlayerSlots  this=ObjectClass  sig=ida-proto ====
int __fastcall Lobby_RefreshPlayerSlots(unsigned int a1)
{
  HWND v2; // ebx
  int result; // eax
  _DWORD *i; // edi
  int v5; // ebp
  int ResourceID4; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = (HWND)Dialog::FindByHandle((void *)0xC2); /*0x5ee521*/
  if ( v2 /*0x5ee555*/
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xC9)) != 0
    || (v2 = (HWND)Dialog::FindByHandle((void *)0xBC)) != 0
    || (result = Dialog::FindByHandle((void *)0xBD), (v2 = (HWND)result) != 0) )
  {
    result = dword_A8B23C; /*0x5ee55b*/
    if ( dword_A8B23C ) /*0x5ee562*/
    {
      result = 0; /*0x5ee568*/
      v13 = 8; /*0x5ee56d*/
      if ( a1 < 8 ) /*0x5ee575*/
      {
        result = a1; /*0x5ee57b*/
        v13 = a1 + 1; /*0x5ee57e*/
      }
      v12 = (char *)result; /*0x5ee586*/
      if ( result < v13 ) /*0x5ee58c*/
      {
        for ( i = (_DWORD *)(4 * result + 11055868); ; ++i ) /*0x5ee594*/
        {
          v5 = i[2533]; /*0x5ee59f*/
          ResourceID4 = GetResourceID4CSF(v12); /*0x5ee5a5*/
          v7 = ResourceID4; /*0x5ee5aa*/
          if ( ResourceID4 < 0 || !GetDlgItem(v2, ResourceID4) ) /*0x5ee5b6*/
            goto LABEL_24; /*0x5ee5be*/
          if ( v5 && (v5 == g_Lobby_PlayerTeam || v5 == g_Lobby_PlayerSide || v5 == g_Lobby_PlayerColor) ) /*0x5ee5de*/
            break; /*0x5ee5de*/
          if ( v5 == g_HouseClass_ObserverFlags || v5 == g_Lobby_MaxPlayers ) /*0x5ee608*/
          {
            *i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee667*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee671*/
            goto LABEL_23; /*0x5ee671*/
          }
          v9 = *(_DWORD *)dword_A8B23C; /*0x5ee617*/
          if ( v5 == g_Lobby_PlayerCount ) /*0x5ee619*/
          {
            *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee61e*/
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee628*/
            goto LABEL_23; /*0x5ee62b*/
          }
          *i = (*(int (**)(void))(v9 + 44))(); /*0x5ee630*/
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee63a*/
          SetupLobbyPlayerSlots(v2, v7, v10); /*0x5ee642*/
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 44))(dword_A8B23C); /*0x5ee64f*/
          SessionClass::SetOption2(v5, v11); /*0x5ee655*/
LABEL_24:
          result = (int)(v12 + 1); /*0x5ee67e*/
          if ( (int)++v12 >= v13 ) /*0x5ee690*/
            return result; /*0x5ee690*/
        }
        *i = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5eb*/
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_A8B23C + 48))(dword_A8B23C); /*0x5ee5f5*/
LABEL_23:
        SetupLobbyPlayerSlots(v2, v7, v8); /*0x5ee674*/
        goto LABEL_24; /*0x5ee679*/
      }
    }
  }
  return result; /*0x5ee698*/
}



// ==== 0x005EE6A0  NetworkLobby::UpdateLabels  this=NetworkLobby  sig=csp ====
void __thiscall NetworkLobby::UpdateLabels(NetworkLobby *this)
{
  ObjectClass *v2; // ebp
  int **v3; // edi
  int ResourceID3CSF; // esi
  int v5; // eax

  if ( this ) /*0x5ee6a5*/
  {
    v2 = 0; /*0x5ee6aa*/
    v3 = (int **)dword_A8DA90; /*0x5ee6ac*/
    do /*0x5ee6e4*/
    {
      ResourceID3CSF = GetResourceID3CSF(v2); /*0x5ee6b8*/
      FillComboBoxSides((HWND)this, ResourceID3CSF); /*0x5ee6be*/
      v5 = SetComboBoxSelection((HWND)this, ResourceID3CSF, -1); /*0x5ee6c9*/
      if ( *v3 ) /*0x5ee6ce*/
        SessionClass::SetOption(*v3, v5); /*0x5ee6d5*/
      ++v3; /*0x5ee6da*/
      v2 = (ObjectClass *)((char *)v2 + 1); /*0x5ee6dd*/
    }
    while ( (int)v3 < (int)&dword_A8DAB0 ); /*0x5ee6e4*/
  }
}



// ==== 0x005EE6F0  AssignRandomMapStartPositions  this=-  sig=csp ====
_DWORD *__fastcall AssignRandomMapStartPositions(_DWORD *a1, int a2, int a3, int a4, char a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int v21; // edi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  double v25; // st7
  double v26; // st7
  int v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+1Ch] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-14h]
  int v31; // [esp+20h] [ebp-10h]
  int v32; // [esp+20h] [ebp-10h]
  int v33; // [esp+20h] [ebp-10h]
  _DWORD *v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h]
  int v38; // [esp+2Ch] [ebp-4h]

  v6 = *(_DWORD *)(a3 + 16); /*0x5ee705*/
  v7 = 0; /*0x5ee708*/
  v8 = 0; /*0x5ee70a*/
  v34 = a1; /*0x5ee70c*/
  if ( v6 <= 0 ) /*0x5ee716*/
  {
    v9 = a4; /*0x5ee731*/
    goto LABEL_8; /*0x5ee731*/
  }
  do /*0x5ee725*/
  {
    v9 = a4; /*0x5ee718*/
    if ( *(_BYTE *)(v8 + a4) ) /*0x5ee71b*/
      ++v7; /*0x5ee721*/
    ++v8; /*0x5ee722*/
  }
  while ( v8 < v6 ); /*0x5ee725*/
  v31 = v7; /*0x5ee729*/
  if ( !v7 ) /*0x5ee72d*/
  {
LABEL_8:
    if ( a5 ) /*0x5ee739*/
    {
      v10 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6 - 1); /*0x5ee74e*/
      *(_BYTE *)(v10 + v9) = 1; /*0x5ee757*/
      *((_DWORD *)dword_A8B230 + v10 + 1120) = a2; /*0x5ee761*/
      *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v10); /*0x5ee770*/
      return a1; /*0x5ee778*/
    }
    goto LABEL_17; /*0x5ee739*/
  }
  if ( v7 != 2 || a5 ) /*0x5ee785*/
  {
LABEL_17:
    v14 = -1; /*0x5ee7cf*/
    v29 = -1; /*0x5ee7d5*/
    v35 = -1; /*0x5ee7d9*/
    if ( v7 == 1 ) /*0x5ee7dd*/
    {
      v15 = 0; /*0x5ee7e3*/
      if ( v6 > 0 ) /*0x5ee7e7*/
      {
        do /*0x5ee888*/
        {
          if ( !*(_BYTE *)(v15 + v9) ) /*0x5ee7ed*/
          {
            v16 = 0; /*0x5ee7f7*/
            v17 = 0; /*0x5ee7f9*/
            v32 = 0; /*0x5ee7fd*/
            if ( v6 > 0 ) /*0x5ee801*/
            {
              do /*0x5ee865*/
              {
                if ( *(_BYTE *)(v17 + a4) ) /*0x5ee806*/
                {
                  v18 = *(_DWORD *)(a3 + 4); /*0x5ee80c*/
                  v19 = (double)(__int16)(*(_WORD *)(v18 + 4 * v15 + 2) - *(_WORD *)(v18 + 4 * v17 + 2)); /*0x5ee82e*/
                  v37 = (__int16)(*(_WORD *)(v18 + 4 * v15) - *(_WORD *)(v18 + 4 * v17)); /*0x5ee832*/
                  v20 = Math::Sqrt((double)v37 * (double)v37 + v19 * v19); /*0x5ee84b*/
                  v32 += (__int16)Math::RoundToInt(v20); /*0x5ee85b*/
                }
                ++v17; /*0x5ee862*/
              }
              while ( v17 < *(_DWORD *)(a3 + 16) ); /*0x5ee865*/
              v16 = v32; /*0x5ee867*/
            }
            if ( v16 < v29 || v29 < 0 ) /*0x5ee875*/
            {
              v29 = v16; /*0x5ee877*/
              v35 = v15; /*0x5ee87b*/
            }
            v9 = a4; /*0x5ee87f*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee882*/
          ++v15; /*0x5ee885*/
        }
        while ( v15 < v6 ); /*0x5ee888*/
        v14 = v35; /*0x5ee88e*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee896*/
      *((_DWORD *)dword_A8B230 + v14 + 1120) = a2; /*0x5ee8a0*/
      *v34 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee8b1*/
      return v34; /*0x5ee8ad*/
    }
    else
    {
      v21 = 0; /*0x5ee8e6*/
      v36 = -1; /*0x5ee8e8*/
      v30 = -1; /*0x5ee8ee*/
      if ( v6 > 0 ) /*0x5ee8f2*/
      {
        do /*0x5ee98d*/
        {
          if ( !*(_BYTE *)(v21 + v9) ) /*0x5ee8f8*/
          {
            v22 = 0; /*0x5ee902*/
            v23 = 0; /*0x5ee904*/
            v33 = 0; /*0x5ee908*/
            if ( v6 > 0 ) /*0x5ee90c*/
            {
              do /*0x5ee970*/
              {
                if ( *(_BYTE *)(v23 + a4) ) /*0x5ee911*/
                {
                  v24 = *(_DWORD *)(a3 + 4); /*0x5ee917*/
                  v25 = (double)(__int16)(*(_WORD *)(v24 + 4 * v21 + 2) - *(_WORD *)(v24 + 4 * v23 + 2)); /*0x5ee939*/
                  v38 = (__int16)(*(_WORD *)(v24 + 4 * v21) - *(_WORD *)(v24 + 4 * v23)); /*0x5ee93d*/
                  v26 = Math::Sqrt((double)v38 * (double)v38 + v25 * v25); /*0x5ee956*/
                  v33 += (__int16)Math::RoundToInt(v26); /*0x5ee966*/
                }
                ++v23; /*0x5ee96d*/
              }
              while ( v23 < *(_DWORD *)(a3 + 16) ); /*0x5ee970*/
              v22 = v33; /*0x5ee972*/
            }
            if ( v22 > v36 ) /*0x5ee97a*/
            {
              v36 = v22; /*0x5ee97c*/
              v30 = v21; /*0x5ee980*/
            }
            v9 = a4; /*0x5ee984*/
          }
          v6 = *(_DWORD *)(a3 + 16); /*0x5ee987*/
          ++v21; /*0x5ee98a*/
        }
        while ( v21 < v6 ); /*0x5ee98d*/
        v14 = v30; /*0x5ee993*/
      }
      *(_BYTE *)(v14 + v9) = 1; /*0x5ee99b*/
      *((_DWORD *)dword_A8B230 + v14 + 1120) = a2; /*0x5ee9a7*/
      *v34 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v14); /*0x5ee9b9*/
      return v34; /*0x5ee9b5*/
    }
  }
  v12 = Random::Range((_DWORD *)dword_A8B230 + 134, 0, v6 - 3); /*0x5ee798*/
  v6 = *(_DWORD *)(a3 + 16); /*0x5ee79d*/
  v13 = 0; /*0x5ee7a0*/
  v28 = 0; /*0x5ee7a4*/
  if ( v6 <= 0 ) /*0x5ee7a8*/
  {
LABEL_16:
    v7 = v31; /*0x5ee7cb*/
    goto LABEL_17; /*0x5ee7cb*/
  }
  while ( *(_BYTE *)(v13 + a4) || ++v28 != v12 + 1 ) /*0x5ee7aa*/
  {
    if ( ++v13 >= v6 ) /*0x5ee7c9*/
      goto LABEL_16; /*0x5ee7c9*/
  }
  *(_BYTE *)(v13 + a4) = 1; /*0x5ee8c0*/
  *((_DWORD *)dword_A8B230 + v13 + 1120) = a2; /*0x5ee8ca*/
  *a1 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v13); /*0x5ee8db*/
  return a1; /*0x5ee772*/
}



// ==== 0x005EE9D0  HouseClass::FindStartPositions  this=HouseClass  sig=csp ====
void HouseClass::FindStartPositions(HouseClass *this)
{
  int v1; // eax
  int *p_uniqueId; // ecx
  int nextArrayIndex; // eax
  int i; // edi
  HouseClass *v5; // esi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int *started; // eax
  int v11; // edi
  HouseClass *v12; // esi
  int *v13; // eax
  int v14; // [esp+0h] [ebp-34h] BYREF
  int v15; // [esp+4h] [ebp-30h] BYREF
  int v16; // [esp+8h] [ebp-2Ch] BYREF
  Multiplayer v17[16]; // [esp+Ch] [ebp-28h] BYREF
  Multiplayer v18[4]; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v20; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(v18); /*0x5ee9d9*/
  v1 = 0; /*0x5ee9e4*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5ee9e6*/
  do /*0x5eea04*/
    v17[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5ee9f1*/
  while ( v1 < 16 ); /*0x5eea04*/
  nextArrayIndex = stru_A80220.?; /*0x5eea06*/
  for ( i = 0; i < stru_A80220.?; ++i ) /*0x5eea11*/
  {
    v5 = (HouseClass *)*((_DWORD *)stru_A80220.? + i); /*0x5eea1f*/
    if ( !*(_BYTE *)(v5->relatedTagsCapacity + 422) && v5->currentPlayer ) /*0x5eea33*/
    {
      v6 = 0; /*0x5eea47*/
      v7 = -1; /*0x5eea49*/
      v8 = 0; /*0x5eea4c*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v9 == i ) /*0x5eea56*/
        {
          v6 = 1; /*0x5eea58*/
          v7 = v8; /*0x5eea5a*/
        }
        ++v8; /*0x5eea5c*/
        ++v9; /*0x5eea5d*/
      }
      while ( v8 < 16 ); /*0x5eea63*/
      if ( v6 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed(v5, *((_DWORD *)Block + v7)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v14, i, (int)v18, (int)v17, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed(v5, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption(v5, &v15); /*0x5eeaa3*/
        HouseClass::GetCurrentOption(v5, &v16); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    nextArrayIndex = stru_A80220.?; /*0x5eeadb*/
  }
  v11 = 0; /*0x5eeaeb*/
  if ( nextArrayIndex > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v12 = (HouseClass *)*((_DWORD *)stru_A80220.? + v11); /*0x5eeafb*/
      if ( !*(_BYTE *)(v12->relatedTagsCapacity + 422) && !v12->currentPlayer ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v13 = AssignRandomMapStartPositions(&v16, v11, (int)v18, (int)v17, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed(v12, *v13); /*0x5eeb43*/
        HouseClass::GetCurrentOption(v12, &v15); /*0x5eeb4f*/
        HouseClass::GetCurrentOption(v12, &v14); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v11; /*0x5eeb7b*/
    }
    while ( v11 < stru_A80220.? ); /*0x5eeb7e*/
  }
  *(_DWORD *)v18 = &VectorClass<Cell>::`vftable'; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v20 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }
}



// ==== 0x005EEBB0  _DynamicVectorClass_PBVMultiMission::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_cptr_MultiMission::Destroy(_DynamicVectorClass_PBVMultiMission *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5eebb6*/
  this->m_10 = 0; /*0x5eebb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5eebc0*/
  {
    __3_YAXPAX_Z(v2); /*0x5eebc6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eebce*/
  }
  BYTE1(this->m_C) = 0; /*0x5eebd1*/
  this->m_8 = 0; /*0x5eebd4*/
}



// ==== 0x005EEBE0  _DynamicVectorClass_PBVMultiMission::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::GetItemIndex(_DynamicVectorClass_PBVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5eebe0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5eebf5*/
  else
    return 0; /*0x5eebe7*/
}



// ==== 0x005EEC00  _VectorClass_PBVMultiMission::Capacity  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::Capacity(_VectorClass_PBVMultiMission *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5eec0a*/
}



// ==== 0x005EEC10  _VectorClass_PBVMultiMission::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::AddRef(_VectorClass_PBVMultiMission *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5eec12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5eec1d*/
  {
    v3 = 0; /*0x5eec1f*/
    if ( m_8 <= 0 ) /*0x5eec23*/
      return 1; /*0x5eec43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5eec25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5eec2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5eec34*/
    {
      ++v3; /*0x5eec36*/
      ++v4; /*0x5eec37*/
      if ( v3 >= m_8 ) /*0x5eec3c*/
        return 1; /*0x5eec3c*/
    }
  }
  return 0; /*0x5eec3e*/
}



// ==== 0x005EEC50  _VectorClass_PBVMultiMission::SetAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::SetAt(_VectorClass_PBVMultiMission *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x5eec5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5eec66*/
    if ( a3 ) /*0x5eec6c*/
      v4 = a3; /*0x5eec82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5eec7e*/
    LOBYTE(this->m_C) = 1; /*0x5eec86*/
    if ( v4 ) /*0x5eec8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5eec95*/
      {
        m_8 = this->m_8; /*0x5eec9c*/
        if ( a2 < m_8 ) /*0x5eeca1*/
          m_8 = a2; /*0x5eeca3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5eeca9*/
          ++i; /*0x5eecae*/
        if ( BYTE1(this->m_C) ) /*0x5eecbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5eecc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5eecce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5eecd7*/
      this->m_8 = a2; /*0x5eecdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x5eece2*/
      return 1; /*0x5eece8*/
    }
    else
    {
      return 0; /*0x5eec8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5eecf2*/
    return 1; /*0x5eecf8*/
  }
}



// ==== 0x005EED00  ?$VectorClass@PBVMultiMission@@::Cleanup3  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup3(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5eed0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5eed13*/
    *(_DWORD *)(this + 4) = 0; /*0x5eed1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5eed1e*/
  *(_DWORD *)(this + 8) = 0; /*0x5eed21*/
}



// ==== 0x005EED30  _VectorClass_PBVMultiMission::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::GetSize(_VectorClass_PBVMultiMission *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5eed30*/
    return 0; /*0x5eed38*/
  m_8 = this->m_8; /*0x5eed3e*/
  result = 0; /*0x5eed41*/
  if ( m_8 <= 0 ) /*0x5eed45*/
    return -1; /*0x5eed5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5eed4b*/
  {
    if ( ++result >= m_8 ) /*0x5eed5a*/
      return -1; /*0x5eed5a*/
  }
  return result; /*0x5eed3a*/
}



// ==== 0x005EED70  _VectorClass_PBVMultiMission::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_cptr_MultiMission::GetCapacity(_VectorClass_PBVMultiMission *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5eed70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5eed85*/
  else
    return 0; /*0x5eed77*/
}



// ==== 0x005EED90  _DynamicVectorClass_PBVMultiMission::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_cptr_MultiMission::SetCapacity(
        _DynamicVectorClass_PBVMultiMission *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5eed9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5eeda2*/
    if ( a3 ) /*0x5eeda8*/
      v4 = a3; /*0x5eedbe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5eedba*/
    LOBYTE(this->m_C) = 1; /*0x5eedc2*/
    if ( !v4 ) /*0x5eedc6*/
      return 0; /*0x5eee3a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5eedc8*/
    {
      m_8 = this->m_8; /*0x5eedcf*/
      if ( a2 < m_8 ) /*0x5eedd4*/
        m_8 = a2; /*0x5eedd6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5eeddc*/
        ++i; /*0x5eede1*/
      if ( BYTE1(this->m_C) ) /*0x5eedee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5eedf9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5eee01*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5eee0a*/
    this->m_8 = a2; /*0x5eee12*/
    BYTE1(this->m_C) = a3 == 0; /*0x5eee15*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBVMultiMission *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5eee1e*/
  }
  v7 = this->m_8; /*0x5eee21*/
  if ( v7 < this->m_10 ) /*0x5eee29*/
    this->m_10 = v7; /*0x5eee2b*/
  return 1; /*0x5eee2e*/
}



// ==== 0x005EEE40  SkirmishVector::PushBack  this=SkirmishVector  sig=csp ====
char __thiscall SkirmishVector::PushBack(SkirmishVector *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((_DWORD *)this + 2); /*0x5eee43*/
  if ( *((_DWORD *)this + 4) >= v3 ) /*0x5eee4b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x5eee56*/
      return 0; /*0x5eee56*/
    v4 = *((_DWORD *)this + 5); /*0x5eee58*/
    if ( v4 <= 0 /*0x5eee68*/
      || !(*(unsigned __int8 (__thiscall **)(SkirmishVector *, int, _DWORD))(*(_DWORD *)this + 8))(this, v3 + v4, 0) )
    {
      return 0; /*0x5eee6f*/
    }
  }
  v6 = *((_DWORD *)this + 4); /*0x5eee75*/
  v7 = *((_DWORD *)this + 1); /*0x5eee78*/
  *((_DWORD *)this + 4) = v6 + 1; /*0x5eee7e*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x5eee88*/
  return 1; /*0x5eee71*/
}



// ==== 0x005EEE90  _DynamicVectorClass_PBVMultiMission::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::FindItemIndex(_DynamicVectorClass_PBVMultiMission *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5eee90*/
  result = 0; /*0x5eee93*/
  if ( m_10 <= 0 ) /*0x5eee98*/
    return -1; /*0x5eeeaf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5eee9e*/
  {
    if ( ++result >= m_10 ) /*0x5eeead*/
      return -1; /*0x5eeead*/
  }
  return result; /*0x5eeeb2*/
}



// ==== 0x005EEEC0  _VectorClass_PBVMultiMission::GetAt  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::GetAt(_VectorClass_PBVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5eeec3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission const *>::`vftable'; /*0x5eeec6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5eeed0*/
  {
    __3_YAXPAX_Z(v3); /*0x5eeed8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eeee0*/
  }
  BYTE1(this->m_C) = 0; /*0x5eeeeb*/
  this->m_8 = 0; /*0x5eeef1*/
  if ( (a2 & 1) != 0 ) /*0x5eeef8*/
    __3_YAXPAX_Z(this); /*0x5eeefb*/
  return this->__pad_0; /*0x5eef05*/
}



// ==== 0x005EEF10  _DynamicVectorClass_PBVMultiMission::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::Constructor(_DynamicVectorClass_PBVMultiMission *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5eef13*/
  *(_DWORD *)this->__pad_0 = &VectorClass<MultiMission const *>::`vftable'; /*0x5eef16*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5eef20*/
  {
    __3_YAXPAX_Z(v3); /*0x5eef28*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5eef30*/
  }
  BYTE1(this->m_C) = 0; /*0x5eef3b*/
  this->m_8 = 0; /*0x5eef41*/
  if ( (a2 & 1) != 0 ) /*0x5eef48*/
    __3_YAXPAX_Z(this); /*0x5eef4b*/
  return this->__pad_0; /*0x5eef55*/
}



// ==== 0x005EEF60  ObjectClass::String_Process  this=ObjectClass  sig=csp ====
void __thiscall String_Process(ObjectClass *this)
{
  unsigned int ptr_8; // esi
  int *ptr_0; // ebp
  char *ptr_C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ptr_8 = (unsigned int)this->?; /*0x5eef65*/
  if ( (ObjectClass *)ptr_8 > this->nextObject && LOBYTE(this->?) != 1 ) /*0x5eef77*/
  {
    ptr_0 = (int *)this->AbstractClass; /*0x5eef80*/
    ptr_C = (char *)this->?; /*0x5eef83*/
    v13 = (int *)this->AbstractClass; /*0x5eef86*/
    this->? = (void *)(ptr_8 >> 1); /*0x5eef8c*/
    this->? = ptr_C - 1; /*0x5eef94*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ptr_8 >> 1)); /*0x5eef9f*/
    v6 = 4 * (int)this->?; /*0x5eefa4*/
    this->AbstractClass = v5; /*0x5eefab*/
    memset(v5, 0, v6); /*0x5eefb0*/
    if ( (int)ptr_8 > 0 ) /*0x5eefbb*/
    {
      v7 = ptr_0; /*0x5eefbd*/
      v8 = ptr_8; /*0x5eefbf*/
      do /*0x5eeff3*/
      {
        v9 = *v7; /*0x5eefc1*/
        if ( *v7 ) /*0x5eefc1*/
        {
          do /*0x5eefed*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x5eefd7*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x5eefdb*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x5eefe1*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5eefe3*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5eefe6*/
            v9 = v12; /*0x5eefe9*/
          }
          while ( v12 ); /*0x5eefed*/
        }
        ++v7; /*0x5eefef*/
        --v8; /*0x5eeff2*/
      }
      while ( v8 ); /*0x5eeff3*/
      ptr_0 = v13; /*0x5eeff5*/
    }
    __3_YAXPAX_Z(ptr_0); /*0x5eeffa*/
  }
}



// ==== 0x005EF010  ObjectClass::Map_Helper_5EF010  this=ObjectClass  sig=csp ====
void __thiscall Map_Helper_5EF010(ObjectClass *this)
{
  int ptr_8; // esi
  _DWORD *ptr_0; // ebp
  char *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->?) != 1 ) /*0x5ef018*/
  {
    ptr_8 = (int)this->?; /*0x5ef020*/
    ptr_0 = this->AbstractClass; /*0x5ef023*/
    v4 = (char *)this->? + 1; /*0x5ef02c*/
    this->? = (void *)(2 * ptr_8); /*0x5ef02d*/
    v13 = ptr_0; /*0x5ef030*/
    this->? = v4; /*0x5ef038*/
    v5 = (void *)__2_YAPAXI_Z(8 * ptr_8); /*0x5ef043*/
    v6 = 4 * (int)this->?; /*0x5ef048*/
    this->AbstractClass = v5; /*0x5ef04f*/
    memset(v5, 0, v6); /*0x5ef054*/
    if ( ptr_8 > 0 ) /*0x5ef05f*/
    {
      v7 = ptr_0; /*0x5ef061*/
      v8 = ptr_8; /*0x5ef063*/
      do /*0x5ef097*/
      {
        v9 = *v7; /*0x5ef065*/
        if ( *v7 ) /*0x5ef065*/
        {
          do /*0x5ef091*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x5ef07b*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x5ef07f*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x5ef085*/
            v12 = *(_DWORD *)(v9 + 8); /*0x5ef087*/
            *(_DWORD *)(v9 + 8) = v11; /*0x5ef08a*/
            v9 = v12; /*0x5ef08d*/
          }
          while ( v12 ); /*0x5ef091*/
        }
        ++v7; /*0x5ef093*/
        --v8; /*0x5ef096*/
      }
      while ( v8 ); /*0x5ef097*/
      ptr_0 = v13; /*0x5ef099*/
    }
    __3_YAXPAX_Z(ptr_0); /*0x5ef09e*/
  }
}



// ==== 0x005EF0B0  MultiMissionVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall MultiMissionVector::Constructor(MultiMissionVector *this, int a2, int a3)
{
  this->Items = 0; /*0x5ef0bb*/
  this->Capacity = a2; /*0x5ef0be*/
  this->IsInitialized = 1; /*0x5ef0c1*/
  this->IsAllocated = 0; /*0x5ef0c5*/
  *this = (MultiMissionVector)&VectorClass<MultiMission const *>::`vftable'; /*0x5ef0c8*/
  if ( a2 ) /*0x5ef0ce*/
  {
    if ( a3 ) /*0x5ef0d6*/
    {
      this->Items = a3; /*0x5ef0d8*/
      return this; /*0x5ef0de*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x5ef0ed*/
    this->IsAllocated = 1; /*0x5ef0f0*/
  }
  return this; /*0x5ef0dd*/
}



// ==== 0x005EF100  NullModemClass::initConnection  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall NullModemClass::initConnection(NullModemClass *this, int a2, int a3, int a4, __int16 a5)
{
  int v6; // ecx

  IPXConnClass::initConnection((ModemConnectionClass *)this, a2, a3, a4, a5, 60, -1, 1200, 0); /*0x5ef124*/
  v6 = this->q01C; /*0x5ef129*/
  *(_DWORD *)this->__pad_0 = &NullModemConnClass::`vftable'; /*0x5ef12c*/
  this->q04C = -1; /*0x5ef135*/
  this->PacketsReceived = __2_YAPAXI_Z(v6 + 11); /*0x5ef145*/
  return this->__pad_0; /*0x5ef14a*/
}



// ==== 0x005EF170  NullModemClass::closeConnection  this=NullModemClass  sig=csp ====
int __thiscall NullModemClass::closeConnection(NullModemClass *this, int a2)
{
  Struct::ZeroInitAndSetup((ConnectionClass *)this); /*0x5ef173*/
  *((_DWORD *)this + 19) = a2; /*0x5ef17c*/
  return a2; /*0x5ef17f*/
}



// ==== 0x005EF190  NullModemConnClass::j_vt09  this=NullModemConnClass  sig=csp ====
int __thiscall VectorClass_cptr_MultiMission::j_vt09(
        NullModemConnClass *this,
        unsigned __int8 *a2,
        signed int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  _WORD *v8; // eax
  signed int v9; // edi
  unsigned int *v10; // eax
  unsigned int v11; // esi
  int v12; // eax

  if ( *(_DWORD *)&this->__pad_0[76] == -1 ) /*0x5ef197*/
    return 0; /*0x5ef199*/
  v8 = (_WORD *)this->field_50; /*0x5ef19f*/
  *v8 = -9539; /*0x5ef1af*/
  v8[1] = a3; /*0x5ef1b4*/
  v8[2] = -8529; /*0x5ef1b8*/
  qmemcpy((void *)(this->field_50 + 6), a2, a3); /*0x5ef1cb*/
  v9 = 0; /*0x5ef1dc*/
  v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef1de*/
  v11 = 0; /*0x5ef1e0*/
  if ( a3 > 0 ) /*0x5ef1ec*/
  {
    do /*0x5ef200*/
    {
      v12 = a2[v9++] + (v11 >> 31); /*0x5ef1f8*/
      v11 = v12 + 2 * v11; /*0x5ef1fd*/
    }
    while ( v9 < a3 ); /*0x5ef200*/
    v10 = (unsigned int *)(this->field_50 + a3 + 6); /*0x5ef206*/
  }
  *v10 = v11; /*0x5ef20a*/
  *(_BYTE *)(a3 + 10 + this->field_50) = 13; /*0x5ef212*/
  WinModemClass::WriteSerial((int *)g_ClipboardBuffer, (LPCVOID)this->field_50, a3 + 11); /*0x5ef222*/
  return 1; /*0x5ef19b*/
}



// ==== 0x005EF240  Audio_Read  this=-  sig=ida-proto ====
unsigned int __fastcall sub_5EF240(int a1, int a2)
{
  unsigned int result; // eax
  int i; // edi
  int v4; // esi

  result = 0; /*0x5ef242*/
  for ( i = 0; i < a2; result = v4 + 2 * result ) /*0x5ef24a*/
  {
    v4 = *(unsigned __int8 *)(i + a1) + (result >> 31); /*0x5ef257*/
    ++i; /*0x5ef259*/
  }
  return result; /*0x5ef262*/
}



// ==== 0x005EF270  sub_5EF270  this=-  sig=ida-proto ====
int sub_5EF270()
{
  return 24; /*0x5ef275*/
}



// ==== 0x005EF280  NullModemConnClass::ZeroInitAndSetup_0_0  this=NullModemConnClass  sig=csp ====
// attributes: thunk
int __thiscall Struct::ZeroInitAndSetup_0_0(NullModemConnClass *this)
{
  return Struct::ZeroInitAndSetup((ConnectionClass *)this);
}



// ==== 0x005EF290  NullModemConnClass::j_vt00  this=NullModemConnClass  sig=csp ====
_DWORD *__thiscall VectorClass_cptr_MultiMission::j_vt00(NullModemConnClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->field_50; /*0x5ef293*/
  *(_DWORD *)this->__pad_0 = &NullModemConnClass::`vftable'; /*0x5ef296*/
  __3_YAXPAX_Z(v3); /*0x5ef29d*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x5ef2a7*/
  if ( (a2 & 1) != 0 ) /*0x5ef2b1*/
    __3_YAXPAX_Z(this); /*0x5ef2b4*/
  return this->__pad_0; /*0x5ef2be*/
}



// ==== 0x005EF2D0  sub_5EF2D0  this=-  sig=ida-proto ====
int sub_5EF2D0()
{
  dword_AC11D8 = 0; /*0x5ef2d2*/
  dword_AC11DC = 0; /*0x5ef2d7*/
  dword_AC11E0 = 0; /*0x5ef2dc*/
  dword_AC11E4 = 0; /*0x5ef2e1*/
  return 0; /*0x5ef2e6*/
}



// ==== 0x005EF2F0  sub_5EF2F0  this=-  sig=ida-proto ====
void sub_5EF2F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5ef2fc*/
  dbl_AC1210 = Math::Sqrt(v0 + v0); /*0x5ef30e*/
}



// ==== 0x005EF320  sub_5EF320  this=-  sig=ida-proto ====
void sub_5EF320()
{
  dbl_AC1260 = dbl_AC1210 / 60.0; /*0x5ef32c*/
}



// ==== 0x005EF340  sub_5EF340  this=-  sig=ida-proto ====
void sub_5EF340()
{
  dbl_AC1248 = 1.0 / dbl_AC1260; /*0x5ef34c*/
}



// ==== 0x005EF360  sub_5EF360  this=-  sig=ida-proto ====
void sub_5EF360()
{
  dbl_AC1240 = 0.0174532925199433 * 45.0; /*0x5ef36c*/
}



// ==== 0x005EF380  sub_5EF380  this=-  sig=ida-proto ====
void sub_5EF380()
{
  dbl_AC1218 = 0.0174532925199433 * 60.0; /*0x5ef38c*/
}



// ==== 0x005EF3A0  sub_5EF3A0  this=-  sig=ida-proto ====
void sub_5EF3A0()
{
  dbl_AC11D0 = 0.0174532925199433 * 90.0; /*0x5ef3ac*/
}



// ==== 0x005EF3C0  sub_5EF3C0  this=-  sig=ida-proto ====
__int64 sub_5EF3C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC11D0 - dbl_AC1218); /*0x5ef3d2*/
  result = Math::RoundToInt(v0 * dbl_AC1210 * 0.5); /*0x5ef3e6*/
  dword_AC1268 = result; /*0x5ef3eb*/
  return result; /*0x5ef3f0*/
}



// ==== 0x005EF400  sub_5EF400  this=-  sig=ida-proto ====
void sub_5EF400()
{
  dbl_AC1220 = Math::ArcTan((double)dword_AC1268 * 0.00390625); /*0x5ef417*/
}



// ==== 0x005EF430  sub_5EF430  this=-  sig=ida-proto ====
void sub_5EF430()
{
  dbl_AC1238 = Math::ArcTan((double)(2 * dword_AC1268) / dbl_AC1210); /*0x5ef452*/
}



// ==== 0x005EF460  sub_5EF460  this=-  sig=ida-proto ====
__int64 sub_5EF460()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1268) + 0.5); /*0x5ef47b*/
  dword_AC125C = result; /*0x5ef480*/
  return result; /*0x5ef486*/
}



// ==== 0x005EF490  sub_5EF490  this=-  sig=ida-proto ====
int sub_5EF490()
{
  word_AC120C = 0; /*0x5ef492*/
  word_AC120E = 0; /*0x5ef498*/
  return 0; /*0x5ef49e*/
}



// ==== 0x005EF4A0  sub_5EF4A0  this=-  sig=ida-proto ====
int sub_5EF4A0()
{
  dword_AC1228 = 0; /*0x5ef4a2*/
  dword_AC122C = 0; /*0x5ef4a7*/
  dword_AC1230 = 0; /*0x5ef4ac*/
  return 0; /*0x5ef4b1*/
}



// ==== 0x005EF4C0  sub_5EF4C0  this=-  sig=ida-proto ====
int sub_5EF4C0()
{
  dword_AC1258 = 0; /*0x5ef4c5*/
  dword_AC1250 = 128; /*0x5ef4cf*/
  dword_AC1254 = 128; /*0x5ef4d4*/
  return 128; /*0x5ef4d9*/
}



// ==== 0x005EF4E0  Network::ModemConnectionDialog  this=Network  sig=csp ====
int __usercall Network::ModemConnectionDialog@<eax>(Network *this)
{
  int v1; // edi
  HWND Dialog; // ebx
  int v3; // eax
  LONG v4; // eax
  void (__stdcall *v5)(HWND); // esi
  void (__stdcall *v6)(HWND, int); // ebp
  int v7; // edi
  TechnoTypeClass *v8; // ecx
  Modem *v9; // ebp
  WinModemClass *v10; // eax
  int Modem_field_0x04; // eax
  const char *v12; // esi
  unsigned int v13; // edx
  char *v14; // edi
  char *v15; // edi
  const char *v16; // esi
  char v17; // cl
  int *v18; // eax
  WinModemClass *v19; // eax
  int v20; // edx
  int *v21; // eax
  int v22; // ebp
  char v23; // bl
  void *Member23; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // esi
  void *v31; // eax
  void *v32; // eax
  int v33; // edi
  int v34; // esi
  int v35; // edi
  int v36; // esi
  int Elapsed; // esi
  wchar_t *v38; // esi
  wchar_t *v39; // eax
  Dialog *MessageBox; // eax
  Dialog *v41; // edi
  int v42; // esi
  TechnoTypeClass *v43; // ecx
  int v44; // esi
  int *v45; // eax
  int *v46; // eax
  wchar_t *StringCSF; // [esp-18h] [ebp-8B8h]
  wchar_t *v49; // [esp-18h] [ebp-8B8h]
  wchar_t *v50; // [esp-18h] [ebp-8B8h]
  wchar_t *v51; // [esp-18h] [ebp-8B8h]
  int v52; // [esp-8h] [ebp-8A8h]
  int v53; // [esp+8h] [ebp-898h]
  LONG dwNewLong; // [esp+Ch] [ebp-894h] BYREF
  HWND hWnd; // [esp+10h] [ebp-890h]
  int v56; // [esp+14h] [ebp-88Ch] BYREF
  int Ticks; // [esp+18h] [ebp-888h]
  int v58; // [esp+1Ch] [ebp-884h]
  int v59; // [esp+20h] [ebp-880h]
  const wchar_t *v60; // [esp+24h] [ebp-87Ch]
  const wchar_t *v61; // [esp+28h] [ebp-878h]
  const wchar_t *v62; // [esp+2Ch] [ebp-874h]
  const wchar_t *v63; // [esp+30h] [ebp-870h]
  int v64; // [esp+34h] [ebp-86Ch]
  int v65; // [esp+38h] [ebp-868h]
  int v66; // [esp+3Ch] [ebp-864h]
  int v67[6]; // [esp+40h] [ebp-860h] BYREF
  unsigned __int8 v68; // [esp+58h] [ebp-848h]
  int v69; // [esp+D2h] [ebp-7CEh]
  int v70[62]; // [esp+13Ch] [ebp-764h] BYREF
  __int16 v71; // [esp+234h] [ebp-66Ch]
  LONG v72[24]; // [esp+238h] [ebp-668h] BYREF
  LONG v73[23]; // [esp+298h] [ebp-608h] BYREF
  LONG v74[24]; // [esp+2F4h] [ebp-5ACh] BYREF
  LONG v75[23]; // [esp+354h] [ebp-54Ch] BYREF
  LONG v76[35]; // [esp+3B0h] [ebp-4F0h] BYREF
  char v77; // [esp+43Ch] [ebp-464h] BYREF
  LONG v78[221]; // [esp+52Ch] [ebp-374h] BYREF

  dwNewLong = -1; /*0x5ef4f7*/
  v53 = -1; /*0x5ef4fb*/
  Dialog = (HWND)CreateDialog(0xECu, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_5EFF00, 0); /*0x5ef504*/
  hWnd = Dialog; /*0x5ef508*/
  if ( !Dialog ) /*0x5ef50c*/
    return 0; /*0x5efed7*/
  SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x5ef51a*/
  v3 = (*((int (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x5ef528*/
  UI_Connect(Dialog, -1, (v3 - 400) / 2 + 147); /*0x5ef542*/
  Dialog::Show((Dialog *)Dialog); /*0x5ef549*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5ef571*/
  {
    v4 = 1618; /*0x5ef57a*/
    dwNewLong = 1618; /*0x5ef57f*/
  }
  else
  {
    v4 = dwNewLong; /*0x5ef585*/
  }
  v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef589*/
  v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef590*/
  v52 = v1; /*0x5ef596*/
  v7 = 0; /*0x5ef597*/
  while ( 2 ) /*0x5ef5af*/
  {
    if ( v4 < 0 ) /*0x5ef5af*/
    {
      while ( (unsigned __int8)Dialog::PumpMessages() != 1 ) /*0x5ef5b8*/
      {
        LOBYTE(v8) = 0; /*0x5ef5ba*/
        ScreenSaver::Process(v8, v52); /*0x5ef5bc*/
        v4 = dwNewLong; /*0x5ef5c1*/
        if ( dwNewLong >= 0 ) /*0x5ef5c7*/
          goto LABEL_15; /*0x5ef5c7*/
      }
      v4 = dwNewLong; /*0x5ef5cb*/
    }
LABEL_15:
    switch ( v4 ) /*0x5ef5dd*/
    {
      case 1618: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5efe70*/
        v5(g_hWnd); /*0x5efe79*/
        if ( Network::sendGameEvent((LONG)v78, &dword_A8DAC0) ) /*0x5efe87*/
          SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5efe95*/
        Network::handleTimeout((Network *)Dialog); /*0x5efe9c*/
        v6(Dialog, 5); /*0x5efea4*/
        goto LABEL_121; /*0x5efea6*/
      case 1619: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef5e6*/
        v5(g_hWnd); /*0x5ef5ee*/
        if ( !Network::resetConnectionState((Network *)v76) ) /*0x5ef5fe*/
          goto LABEL_34; /*0x5ef5fe*/
        v9 = (Modem *)*((_DWORD *)dword_A8DB38 + dword_A8DABC); /*0x5ef610*/
        if ( !*(_DWORD *)v9->__pad_0 ) /*0x5ef613*/
          v9 = (Modem *)&dword_A8DAC0; /*0x5ef619*/
        if ( g_ClipboardBuffer ) /*0x5ef626*/
          (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef62c*/
        v10 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef633*/
        if ( v10 ) /*0x5ef63d*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v10); /*0x5ef646*/
        else
          g_ClipboardBuffer = 0; /*0x5ef64d*/
        if ( !NullModemClass::Init( /*0x5ef679*/
                (int *)&unk_A8EA70,
                *(_DWORD *)v9->__pad_0,
                v9->Modem_field_0x04,
                v9[3].__pad_0,
                v9->Modem_field_0x08,
                0,
                8,
                1) )
        {
          v60 = asc_82083C; /*0x5ef774*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef788*/
          v18 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5798); /*0x5ef793*/
          Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v52); /*0x5ef79d*/
LABEL_34:
          ShowWindow(Dialog, 5); /*0x5ef7a2*/
          goto LABEL_121; /*0x5ef7ab*/
        }
        Modem_field_0x04 = v9[1].Modem_field_0x04; /*0x5ef67f*/
        if ( Modem_field_0x04 == 3 ) /*0x5ef685*/
          strcpy(byte_AC11E8, v9[2].__pad_0); /*0x5ef6a1*/
        else
          CopyWideToChar(byte_AC11E8, *(char **)(dword_A8DB68 + 4 * Modem_field_0x04), -1); /*0x5ef6bc*/
        v12 = (const char *)(*((_DWORD *)dword_A8DB38 + dword_A8DABC) + 154); /*0x5ef6e0*/
        v13 = strlen(v12) + 1; /*0x5ef6e2*/
        v14 = &byte_AC11E8[strlen(byte_AC11E8)]; /*0x5ef6f0*/
        qmemcpy(v14, v12, 4 * (v13 >> 2)); /*0x5ef6f4*/
        v16 = &v12[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v15 = &v14[4 * (v13 >> 2)]; /*0x5ef6f4*/
        v17 = v13; /*0x5ef6f6*/
        LOBYTE(v13) = 0; /*0x5ef6f8*/
        qmemcpy(v15, v16, v17 & 3); /*0x5ef6fd*/
        if ( Modem::CheckStatus(v9, v13) ) /*0x5ef701*/
        {
          dword_A8DB30 = 2; /*0x5ef716*/
          *(_DWORD *)&dword_A8B238 = 1; /*0x5ef720*/
          if ( ModemHost::Dialog((ModemHost *)v72) ) /*0x5ef726*/
          {
            v53 = 1; /*0x5ef72f*/
            goto LABEL_121; /*0x5ef733*/
          }
          *(_DWORD *)&dword_A8B238 = 0; /*0x5ef73a*/
          v53 = 0; /*0x5ef73f*/
        }
        EventClass::GetState(0); /*0x5ef74a*/
        ShowWindow(Dialog, 5); /*0x5ef752*/
        goto LABEL_121; /*0x5ef758*/
      case 1620: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef7b2*/
        v5(g_hWnd); /*0x5ef7ba*/
        if ( g_ClipboardBuffer ) /*0x5ef7c4*/
          (**(void (__thiscall ***)(HWND, int))g_ClipboardBuffer)(g_ClipboardBuffer, 1); /*0x5ef7ca*/
        v19 = (WinModemClass *)__2_YAPAXI_Z(0x2088u); /*0x5ef7d1*/
        if ( v19 ) /*0x5ef7db*/
          g_ClipboardBuffer = (HWND)WinModemClass::Construct(v19); /*0x5ef7e4*/
        else
          g_ClipboardBuffer = 0; /*0x5ef7eb*/
        if ( NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef818*/
        {
          LOBYTE(v20) = 0; /*0x5ef821*/
          if ( Modem::DetectAndConnect((Modem *)&dword_A8DAC0, v20) ) /*0x5ef828*/
          {
            dword_A8DB30 = 3; /*0x5ef838*/
            *(_DWORD *)&dword_A8B238 = 1; /*0x5ef842*/
            if ( ModemGuest::Dialog((ModemGuest *)v73) ) /*0x5ef848*/
            {
              v53 = 1; /*0x5ef851*/
              goto LABEL_121; /*0x5ef855*/
            }
            *(_DWORD *)&dword_A8B238 = 0; /*0x5ef85a*/
            v53 = 0; /*0x5ef860*/
          }
          EventClass::GetState(0); /*0x5ef86a*/
          v6(Dialog, 5); /*0x5ef872*/
        }
        else
        {
          v63 = asc_82083C; /*0x5ef88d*/
          v49 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8a1*/
          v21 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5833); /*0x5ef8ac*/
          Dialog::ShowMessageBox(v21, v49, 0, 0, 0, v52); /*0x5ef8b6*/
          v6(Dialog, 5); /*0x5ef8be*/
        }
        goto LABEL_121; /*0x5ef874*/
      case 1621: /*0x5ef5dd*/
        v6(Dialog, 0); /*0x5ef8c7*/
        v5(g_hWnd); /*0x5ef8cf*/
        if ( !NullModemClass::Init((int *)&unk_A8EA70, dword_A8DAC0, dword_A8DAC4, byte_A8DAF0, dword_A8DAC8, 0, 8, 1) ) /*0x5ef8fb*/
        {
          v61 = asc_82083C; /*0x5efe39*/
          v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe4d*/
          v46 = (int *)GetStringCSF(g_Str_TXT_SELECT_SETTINGS, 0, g_Str_File_NullDlg_CPP, 5877); /*0x5efe58*/
          Dialog::ShowMessageBox(v46, v51, 0, 0, 0, v52); /*0x5efe62*/
          v6(Dialog, 5); /*0x5efe6a*/
          goto LABEL_121; /*0x5efe6c*/
        }
        v22 = 0; /*0x5ef907*/
        v23 = 1; /*0x5ef909*/
        Member23 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef90b*/
        SetCommBreak(Member23); /*0x5ef911*/
        WinModemClass::WriteSerial((int *)g_ClipboardBuffer, aAth, strlen(aAth)); /*0x5ef932*/
        Ticks = Timer::GetTicks(); /*0x5ef944*/
        v59 = 0; /*0x5ef948*/
        v64 = Timer::GetTicks(); /*0x5ef951*/
        v25 = v64; /*0x5ef955*/
        v26 = 120; /*0x5ef95b*/
        v66 = 120; /*0x5ef960*/
        Ticks = v64; /*0x5ef964*/
        v58 = v65; /*0x5ef968*/
        v59 = 120; /*0x5ef96c*/
        break; /*0x5ef96c*/
      default:
LABEL_120:
        v53 = v7; /*0x5efea8*/
        goto LABEL_121; /*0x5efea8*/
    }
    do /*0x5ef996*/
    {
      v27 = v26; /*0x5ef973*/
      if ( v25 == -1 ) /*0x5ef975*/
      {
        v30 = v26; /*0x5ef992*/
      }
      else
      {
        v28 = Timer::GetTicks(); /*0x5ef97b*/
        v25 = Ticks; /*0x5ef980*/
        v29 = v28 - Ticks; /*0x5ef984*/
        if ( v29 >= v27 ) /*0x5ef988*/
          break; /*0x5ef988*/
        v26 = v59; /*0x5ef98a*/
        v30 = v27 - v29; /*0x5ef98e*/
      }
    }
    while ( v30 ); /*0x5ef996*/
    v31 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef998*/
    ClearCommBreak(v31); /*0x5ef9a4*/
    v32 = (void *)NullModemClass::GetMember23((NullModemClass *)g_ClipboardBuffer); /*0x5ef9b2*/
    EscapeCommFunction(v32, 6u); /*0x5ef9b8*/
    v33 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ef9c3*/
    if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9cc*/
      v33 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5ef9de*/
    while ( 1 ) /*0x5ef9e5*/
    {
      v34 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5ef9e5*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ef9ee*/
        v34 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa00*/
      if ( (unsigned int)(v34 - v33) >= 0x50 ) /*0x5efa07*/
        break; /*0x5efa07*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5efa12*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efa34*/
      {
        v35 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5efa3b*/
        if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa44*/
          v35 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa56*/
        while ( 1 ) /*0x5efa5d*/
        {
          v36 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x5efa5d*/
          if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x5efa66*/
            v36 += Timer::GetTicks() - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5efa78*/
          if ( (unsigned int)(v36 - v35) >= 0x1E ) /*0x5efa7f*/
            break; /*0x5efa7f*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5efa86*/
        }
        v23 = 0; /*0x5efa8d*/
        v22 = 2; /*0x5efa8f*/
        break; /*0x5efa8f*/
      }
    }
    memset(v70, 0, sizeof(v70)); /*0x5efaa5*/
    v71 = 0; /*0x5efaa7*/
    if ( v23 != 1 ) /*0x5efaa9*/
      goto LABEL_106; /*0x5efaa9*/
    v70[0] = 100; /*0x5efab9*/
    *(int *)((char *)&v70[36] + 2) = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efacc*/
    LOBYTE(v70[6]) = (unsigned __int8)&v77; /*0x5efae7*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v70, 250, 1); /*0x5efaee*/
    Elapsed = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efb02*/
    if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - Elapsed) < 0x50 ) /*0x5efb0e*/
    {
      while ( 1 ) /*0x5efb15*/
      {
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efb15*/
        if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) > 0 && v67[0] == 100 ) /*0x5efb36*/
          break; /*0x5efb36*/
        if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - Elapsed) >= 0x50 ) /*0x5efb4b*/
          goto LABEL_73; /*0x5efb4b*/
      }
      v44 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efc7a*/
      while ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v44) < 0x1E ) /*0x5efc86*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efc8d*/
      if ( v69 > *(int *)((char *)&v70[36] + 2) ) /*0x5efcb3*/
      {
        v22 = 2; /*0x5efcb5*/
        goto LABEL_106; /*0x5efcba*/
      }
      if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efcbc*/
      {
        if ( v68 > LOBYTE(v70[6]) ) /*0x5efccf*/
        {
          v22 = 2; /*0x5efcd1*/
          goto LABEL_106; /*0x5efcd6*/
        }
        if ( v68 == LOBYTE(v70[6]) ) /*0x5efcd8*/
        {
          v22 = 3; /*0x5efcde*/
          goto LABEL_106; /*0x5efce3*/
        }
      }
    }
LABEL_73:
    g_NetworkTestFlag = 0; /*0x5efb4d*/
    v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb80*/
    v39 = GetStringCSF(aTxtWaitingConn, 0, g_Str_File_NullDlg_CPP, 6293); /*0x5efb82*/
    MessageBox = (Dialog *)CreateMessageBox((LPARAM)v39, (LPARAM)v38, (LONG)&g_NetworkTestFlag); /*0x5efb8b*/
    v41 = MessageBox; /*0x5efb90*/
    if ( !MessageBox ) /*0x5efb94*/
      goto LABEL_106; /*0x5efb94*/
    Dialog::Show(MessageBox); /*0x5efb9c*/
    v42 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efbab*/
    while ( (unsigned __int8)Dialog::PumpMessages() != 1 && !g_NetworkTestFlag ) /*0x5efbc1*/
    {
      LOBYTE(v43) = 0; /*0x5efbc7*/
      ScreenSaver::Process(v43, v52); /*0x5efbc9*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5efbd3*/
      if ( Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5efbdd*/
        goto LABEL_101; /*0x5efbe4*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v67, (int)&v56) <= 0 ) /*0x5efc00*/
      {
        v22 = 1; /*0x5efd0e*/
        goto LABEL_100; /*0x5efd0e*/
      }
      if ( v67[0] != 100 ) /*0x5efc0b*/
      {
        v22 = 0; /*0x5efd0a*/
LABEL_100:
        v23 = 0; /*0x5efd13*/
        goto LABEL_101; /*0x5efd13*/
      }
      v42 = Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]); /*0x5efc20*/
      while ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v42) < 0x1E ) /*0x5efc2c*/
        Stream::ReadPacket((int)&unk_A8EA70); /*0x5efc33*/
      if ( v69 <= *(int *)((char *)&v70[36] + 2) ) /*0x5efc59*/
      {
        if ( v69 == *(int *)((char *)&v70[36] + 2) ) /*0x5efce5*/
        {
          if ( v68 <= LOBYTE(v70[6]) ) /*0x5efcf4*/
          {
            if ( v68 == LOBYTE(v70[6]) ) /*0x5efcff*/
            {
              v23 = 0; /*0x5efd01*/
              v22 = 3; /*0x5efd03*/
            }
          }
          else
          {
            v23 = 0; /*0x5efcf6*/
            v22 = 2; /*0x5efcf8*/
          }
        }
      }
      else
      {
        v23 = 0; /*0x5efc5f*/
        v22 = 2; /*0x5efc61*/
      }
LABEL_101:
      if ( (unsigned int)(Timer::GetElapsed((Timer *)&stru_88732C.__pad_6[6]) - v42) > 0xE10 ) /*0x5efd26*/
        break; /*0x5efd26*/
      if ( v23 != 1 ) /*0x5efd2b*/
        goto LABEL_105; /*0x5efd2b*/
    }
    v22 = 0; /*0x5efd32*/
LABEL_105:
    Dialog::Destroy(v41); /*0x5efd34*/
LABEL_106:
    if ( v22 == 1 ) /*0x5efd3e*/
    {
      v7 = 2; /*0x5efdd1*/
      dword_A8DB30 = 0; /*0x5efddd*/
      *(_DWORD *)&dword_A8B238 = 2; /*0x5efde3*/
      if ( ModemHost::Dialog((ModemHost *)v74) == 1 ) /*0x5efdf0*/
        goto LABEL_120; /*0x5efdf0*/
      *(_DWORD *)&dword_A8B238 = 0; /*0x5efdf6*/
LABEL_115:
      EventClass::GetState(0); /*0x5efe07*/
      ShowWindow(hWnd, 5); /*0x5efe1a*/
    }
    else
    {
      if ( v22 != 2 ) /*0x5efd45*/
      {
        if ( v22 == 3 ) /*0x5efd48*/
        {
          v62 = asc_82083C; /*0x5efd65*/
          v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd79*/
          v45 = (int *)GetStringCSF(aTxtModemOrLoop, 0, g_Str_File_NullDlg_CPP, 5868); /*0x5efd84*/
          Dialog::ShowMessageBox(v45, v50, 0, 0, 0, v52); /*0x5efd8e*/
        }
        goto LABEL_115; /*0x5efd93*/
      }
      dword_A8DB30 = 1; /*0x5efda1*/
      *(_DWORD *)&dword_A8B238 = 2; /*0x5efdab*/
      if ( ModemGuest::Dialog((ModemGuest *)v75) != 1 ) /*0x5efdb8*/
      {
        *(_DWORD *)&dword_A8B238 = 0; /*0x5efdc3*/
        goto LABEL_115; /*0x5efdcd*/
      }
      v53 = 2; /*0x5efdba*/
    }
LABEL_121:
    v4 = -1; /*0x5efeac*/
    dwNewLong = -1; /*0x5efeb6*/
    if ( v53 == -1 ) /*0x5efeba*/
    {
      Dialog = hWnd; /*0x5ef59b*/
      v6 = (void (__stdcall *)(HWND, int))ShowWindow; /*0x5ef59f*/
      v5 = (void (__stdcall *)(HWND))UpdateWindow; /*0x5ef5a5*/
      v7 = 0; /*0x5ef5ab*/
      continue; /*0x5ef5ab*/
    }
    break;
  }
  Dialog::Destroy((Dialog *)hWnd); /*0x5efec4*/
  return v53; /*0x5efecd*/
}



// ==== 0x005EFF00  sub_5EFF00  this=-  sig=csp ====
int __stdcall sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5eff19*/
  if ( !result ) /*0x5eff20*/
  {
    if ( a2 == 273 ) /*0x5eff28*/
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5eff44*/
      if ( a3 == 2 || a3 > 0x651 && a3 <= 0x655 ) /*0x5eff5d*/
        *WindowLongA = a3; /*0x5eff5f*/
    }
    else if ( a2 == 1175 ) /*0x5eff30*/
    {
      Network::handleTimeout(hWnd); /*0x5eff34*/
      return 0; /*0x5eff3e*/
    }
    return 0; /*0x5eff61*/
  }
  return result; /*0x5eff39*/
}



// ==== 0x005EFF70  Network::handleTimeout  this=Network  sig=csp ====
int __thiscall Network::handleTimeout(Network *this)
{
  HWND DlgItem; // eax
  HWND v3; // eax
  int result; // eax
  unsigned __int8 v5; // [esp+10h] [ebp-4h]

  v5 = 1; /*0x5eff7e*/
  if ( !dword_A8DAC0 || dword_A8DAC4 == -1 || dword_A8DAC8 == -1 || Modem::OpenPort((Modem *)&unk_A8EA70, &dword_A8DAC0) ) /*0x5effa4*/
    v5 = 0; /*0x5effad*/
  DlgItem = GetDlgItem((HWND)this, 1619); /*0x5effbe*/
  if ( DlgItem ) /*0x5effcc*/
    EnableWindow(DlgItem, v5); /*0x5effd8*/
  v3 = GetDlgItem((HWND)this, 1620); /*0x5effe0*/
  if ( v3 ) /*0x5effe4*/
    EnableWindow(v3, v5); /*0x5efff0*/
  result = (int)GetDlgItem((HWND)this, 1621); /*0x5efff8*/
  if ( result ) /*0x5efffc*/
    return EnableWindow((HWND)result, v5); /*0x5f0006*/
  return result; /*0x5f0008*/
}


