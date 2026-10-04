// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005E23D0  Network_Check  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5E23D0::Network_Check(int a2) {

  int uniqueId; // edx
  int v3; // eax
  int v4; // edx

  uniqueId = ((unsigned int *)this)[0]; /*0x5e23d0*/
  v3 = a2; /*0x5e23d3*/
  if ( a2 >= uniqueId ) /*0x5e23d9*/
    return 0; /*0x5e23fc*/
  v4 = uniqueId - 1; /*0x5e23db*/
  ((unsigned int *)this)[0] = v4; /*0x5e23de*/
  if ( a2 < v4 ) /*0x5e23e1*/
  {
    do /*0x5e23f4*/
    {
      ++v3; /*0x5e23e7*/
      *((unsigned int *)((unsigned int *)this)[0] + v3 - 1) = *((unsigned int *)((unsigned int *)this)[0] + v3); /*0x5e23eb*/
    }
    while ( v3 < ((unsigned int *)this)[0] ); /*0x5e23f4*/
  }
  return 1; /*0x5e23f9*/

}

// ==== BACKFILL 0x005E2620  String::ComputeHash  cls=String  sig=csp  renamed_refs=0  residual=- ====
unsigned int String::ComputeHash(void *a1_1)
{

  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = ((String*)this)->Length(); /*0x5e262c*/
  for ( i = 0; i < ((String*)this)->Length(); ++i ) /*0x5e2630*/
  {
    v4 = ((String *)(this))->GetOrEmpty(); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/

}

// ==== BACKFILL 0x005E26C0  Dialog::FindGameUI  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int INIClass::FindGameUI()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E26C0.json)
}

// ==== BACKFILL 0x005E2700  Dialog::ShowMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND Dialog::ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ...)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2700.json)
}

// ==== BACKFILL 0x005E2790  Dialog::ShowStatusText  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
HWND INIClass::ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2)
{
    (void)aP0; (void)aP1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2790.json)
}

// ==== BACKFILL 0x005E29A0  UI_Draw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT UI_Draw(HWND hWnd, wchar_t *Source, size_t Count, LPARAM lParam)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E29A0.json)
}

// ==== BACKFILL 0x005E2E40  sub_5E2E40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
INT_PTR sub_5E2E40(HWND hWnd, UINT, WPARAM, char * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2E40.json)
}

// ==== BACKFILL 0x005E2F60  Dialog::ShowPlayerName  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
LRESULT Dialog::ShowPlayerName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E2F60.json)
}

// ==== BACKFILL 0x005E35A0  sub_5E35A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E35A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E35A0.json)
}

// ==== BACKFILL 0x005E3630  Network_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E3630()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E3630.json)
}

// ==== BACKFILL 0x005E3720  Network::SendOptionsGame  cls=Network  sig=csp  renamed_refs=0  residual=- ====
int HashTable_flat::SendOptionsGame(char * Source)
{
    (void)Source; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E3720.json)
}

// ==== BACKFILL 0x005E70D0  SkirmishSetup_Setup_5E70D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
WPARAM SkirmishSetup_Setup_5E70D0(HWND hDlg, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E70D0.json)
}

// ==== BACKFILL 0x005E84D0  GameConfig::ComputeCRC  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * GameConfig::ComputeCRC()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E84D0.json)
}

// ==== BACKFILL 0x005E8760  Settings::CheckString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Settings::CheckString()
{

  char *v0; // eax

  v0 = (char *)(CharToWideString((unsigned char *)(unk_A8B380)));
  return wcscmp((const wchar_t *)v0,(const wchar_t *)(word_A8D610)) == 0; /*0x5e877d*/

}

// ==== BACKFILL 0x005E8A20  WinMainSetup_Setup_5DB6F0_Setup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5E8A20()
{
  if ( g_HouseClass_ObserverFlags ) /*0x5e8a2a*/
  {
    RA2_OPDEL((void *)g_HouseClass_ObserverFlags); /*0x5e8a2d*/
    g_HouseClass_ObserverFlags = 0; /*0x5e8a35*/
  }
  if ( g_Lobby_PlayerCount ) /*0x5e8a42*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerCount); /*0x5e8a45*/
    g_Lobby_PlayerCount = 0; /*0x5e8a4d*/
  }
  if ( g_Lobby_PlayerTeam ) /*0x5e8a5a*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerTeam); /*0x5e8a5d*/
    g_Lobby_PlayerTeam = 0; /*0x5e8a65*/
  }
  if ( g_Lobby_PlayerSide ) /*0x5e8a72*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerSide); /*0x5e8a75*/
    g_Lobby_PlayerSide = 0; /*0x5e8a7d*/
  }
  if ( g_Lobby_PlayerColor ) /*0x5e8a8a*/
  {
    RA2_OPDEL((void *)g_Lobby_PlayerColor); /*0x5e8a8d*/
    g_Lobby_PlayerColor = 0; /*0x5e8a95*/
  }
  if ( g_Lobby_PlayerReady ) /*0x5e8aa2*/
  {
    RA2_OPDEL(g_Lobby_PlayerReady); /*0x5e8aa5*/
    g_Lobby_PlayerReady = 0; /*0x5e8aad*/
  }
  if ( g_Lobby_MaxPlayers ) /*0x5e8aba*/
  {
    RA2_OPDEL((void *)g_Lobby_MaxPlayers); /*0x5e8abd*/
    g_Lobby_MaxPlayers = 0; /*0x5e8ac5*/
  }
// 0x5c6120
  return ((PtrVector*)&stru_A8DA74)->Destroy(); /*0x5e8ad0*/
}

// ==== BACKFILL 0x005E8BF0  Player::FindByName  cls=Player  sig=csp  renamed_refs=0  residual=- ====
wchar_t * Player::FindByName(wchar_t * String2)
{

  int v3; // ebp
  int v4; // esi
  const wchar_t *v5; // edi

  if ( !wcscmp((const wchar_t *)g_HouseClass_ObserverFlags, (const wchar_t *)String2) ) /*0x5e8bfd*/
    return (wchar_t *)g_HouseClass_ObserverFlags; /*0x5e8c09*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerCount, (const wchar_t *)String2) ) /*0x5e8c1b*/
    return (wchar_t *)g_Lobby_PlayerCount; /*0x5e8c27*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerTeam, (const wchar_t *)String2) ) /*0x5e8c39*/
    return (wchar_t *)g_Lobby_PlayerTeam; /*0x5e8c45*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerSide, (const wchar_t *)String2) ) /*0x5e8c56*/
    return (wchar_t *)g_Lobby_PlayerSide; /*0x5e8c62*/
  if ( !wcscmp((const wchar_t *)g_Lobby_PlayerColor, (const wchar_t *)String2) ) /*0x5e8c74*/
    return (wchar_t *)g_Lobby_PlayerColor; /*0x5e8c80*/
  if ( !wcscmp((const wchar_t *)(g_Lobby_PlayerReady), (const wchar_t *)String2) ) /*0x5e8c92*/
return (wchar_t *)g_Lobby_PlayerReady; /*0x5e8c9e*/
  if ( !wcscmp((const wchar_t *)g_Lobby_MaxPlayers, (const wchar_t *)String2) ) /*0x5e8caf*/
    return (wchar_t *)g_Lobby_MaxPlayers; /*0x5e8cbb*/
  v3 = dword_A8DA84; /*0x5e8cc5*/
  v4 = 0; /*0x5e8ccb*/
  if ( dword_A8DA84 <= 0 ) /*0x5e8ccf*/
    return 0; /*0x5e8ced*/
  while ( 1 ) /*0x5e8cd8*/
  {
    v5 = (const wchar_t *)((unsigned int *)(dword_A8DA78))[v4]; /*0x5e8cd8*/
    if ( !wcscmp(v5, (const wchar_t *)String2) ) /*0x5e8cdc*/
      break; /*0x5e8cdc*/
    if ( ++v4 >= v3 ) /*0x5e8ceb*/
      return 0; /*0x5e8ceb*/
  }
  return (wchar_t *)v5; /*0x5e8c0e*/

}

// ==== BACKFILL 0x005E9290  NetworkLobby::CheckLobbyConditions  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char CheckLobbyConditions()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9290.json)
}

// ==== BACKFILL 0x005E9340  Audio_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5E9340::Audio_Helper() {

  int v2; // ebx
  int result; // eax
  int v4; // edi
  char **v5; // esi
  char *v6; // eax

  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5e934e*/
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
  if ( *(unsigned int *)(result + 107) == -1 ) /*0x5e93c0*/
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

// ==== BACKFILL 0x005E93F0  IsKnownPointer  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_5E93F0::IsKnownPointer() {

  return this /*0x5e9431*/
      && this != (ObjectClass *)g_HouseClass_ObserverFlags
      && this != (ObjectClass *)g_Lobby_PlayerCount
      && this != (ObjectClass *)g_Lobby_PlayerReady
      && this != (ObjectClass *)g_Lobby_MaxPlayers
      && this != (ObjectClass *)g_Lobby_PlayerTeam
      && this != (ObjectClass *)g_Lobby_PlayerSide
      && this != (ObjectClass *)g_Lobby_PlayerColor;

}

// ==== BACKFILL 0x005E9440  Player::IsObserver  cls=Player  sig=csp  renamed_refs=0  residual=- ====
int Player::IsObserver()
{

  return this /*0x5e9461*/
      && (this == (Player *)g_Lobby_PlayerTeam
       || this == (Player *)g_Lobby_PlayerSide
       || this == (Player *)g_Lobby_PlayerColor);

}

// ==== BACKFILL 0x005E9470  NetworkLobby::IsValidPlayerName  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
BOOL NetworkLobby::IsValidPlayerName()
{

  return this /*0x5e9499*/
      && this != (NetworkLobby *)g_HouseClass_ObserverFlags
      && this != (NetworkLobby *)g_Lobby_PlayerCount
      && this != (NetworkLobby *)g_Lobby_MaxPlayers
      && this != (NetworkLobby *)g_Lobby_PlayerReady;

}

// ==== BACKFILL 0x005E94D0  Hash_Check_5E94D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5E94D0()
{
  LPARAM * result;
  LPARAM *v1; // edx
  LPARAM v2; // ecx

  result = (LPARAM *)((int)((LPARAM *)(0)));
  v1 = (LPARAM *)(&dword_A8DA90);
  do /*0x5e9508*/
  {
    v2 = *v1; /*0x5e94ec*/
    if ( *v1 && (v2 == g_Lobby_PlayerTeam || v2 == g_Lobby_PlayerSide || v2 == g_Lobby_PlayerColor) ) /*0x5e94fc*/
      ++result; /*0x5e94fe*/
    ++v1; /*0x5e94ff*/
  }
  while ( (int)v1 < (int)&dword_A8DAB0 ); /*0x5e9508*/
  return (int)(result); /*0x5e950a*/
}

// ==== BACKFILL 0x005E9510  NetworkLobby::CheckMinPlayers  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
bool CheckMinPlayers()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9510.json)
}

// ==== BACKFILL 0x005E9560  GameOption::CheckDuplicate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char GameOption::CheckDuplicate()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5E9560)
}

// ==== BACKFILL 0x005E9580  Hash_Check_5E9580  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_5E9580()
{
  LPARAM * v0;
  LPARAM *v1; // ecx
  LPARAM v2; // eax

  v0 = (LPARAM *)((int)((LPARAM *)(0)));
  v1 = (LPARAM *)(&dword_A8DA90);
  while ( 1 ) /*0x5e959c*/
  {
    v2 = *v1; /*0x5e959c*/
    if ( *v1 ) /*0x5e959c*/
    {
      if ( v2 != g_HouseClass_ObserverFlags /*0x5e95c2*/
        && v2 != g_Lobby_PlayerCount
        && v2 != g_Lobby_MaxPlayers
        && (wchar_t *)v2 != (wchar_t *)(g_Lobby_PlayerReady)
        && v0 == (LPARAM *)(g_MPCooperativeState)
        && *(unsigned int *)(v2 + 107) == -1 )
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

// ==== BACKFILL 0x005E96A0  NetworkLobby::CheckPlayerNameValid  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char CheckPlayerNameValid()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E96A0.json)
}

// ==== BACKFILL 0x005E9720  NetworkLobby::CheckPlayerNames  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char CheckPlayerNames()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9720.json)
}

// ==== BACKFILL 0x005E9950  Dialog::MapPlayerIDToIndex  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
int INIClass::MapPlayerIDToIndex()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9950.json)
}

// ==== BACKFILL 0x005E99C0  GameClass::GetDifficultyString  cls=GameClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * PKStrawClass::GetDifficultyString()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E99C0.json)
}

// ==== BACKFILL 0x005E9B60  SelectLobbyCountry  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Lobby_SelectCountry(HWND a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005E9B60.json)
}

// ==== BACKFILL 0x005EAAD0  RefreshLobbyAll_Helper_5EAAD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5EAAD0::RefreshLobbyAll_Helper_5EAAD0() {

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

// ==== BACKFILL 0x005EAB30  RefreshLobbyAll_Play_5EAB30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5EAB30::RefreshLobbyAll_Play_5EAB30() {

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

// ==== BACKFILL 0x005EAC00  RefreshLobbyAll_Get_5EAC00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5EAC00::RefreshLobbyAll_Get_5EAC00() {

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

// ==== BACKFILL 0x005EACD0  RefreshLobbyAll_Get_5EACD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5EACD0::RefreshLobbyAll_Get_5EACD0() {

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

// ==== BACKFILL 0x005EADA0  RefreshLobbyAll_Get_5EADA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5EADA0::RefreshLobbyAll_Get_5EADA0(SessionClass * hDlg) {

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
    result = SetupLobbyFactionSlots((HWND)hDlg, v6, Option); /*0x5eae21*/
    ++v3; /*0x5eae26*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eae29*/
  }
  while ( (int)v3 < (int)&stru_A8B250.__pad_0[172] ); /*0x5eae30*/
  return result; /*0x5eae36*/

}

// ==== BACKFILL 0x005EAE40  RefreshLobbyAll_Setup  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5EAE40::RefreshLobbyAll_Setup(SessionClass * hDlg) {

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
    result = SetupLobbyPlayerSlots((HWND)hDlg, v6, Option2); /*0x5eaec1*/
    ++v3; /*0x5eaec6*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x5eaec9*/
  }
  while ( (int)v3 < (int)&byte_A8B31C ); /*0x5eaed0*/
  return result; /*0x5eaed6*/

}

// ==== BACKFILL 0x005ED370  Session::StartGame  cls=Session  sig=csp  renamed_refs=0  residual=- ====
int Session::StartGame(HWND hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5ED370)
}

// ==== BACKFILL 0x005EDD00  ReadChatMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** ReadChatMessage(wchar_t ** a1, HWND a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EDD00)
}

// ==== BACKFILL 0x005EDEF0  GetPlayerTypeString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char ** Player_GetTypeString(char ** a1, wchar_t * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5EDEF0)
}

// ==== BACKFILL 0x005EDFC0  NetworkLobby::DeleteAndZero  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
wchar_t * DeleteAndZero()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EDFC0.json)
}

// ==== BACKFILL 0x005EE100  Network_Send  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool Gap2Recv_5EE100::Network_Send() {

  return (uint8_t)String::Equals_Alt((String *)this, off_831704) /*0x5ee17e*/
      || (uint8_t)String::Equals_Alt((String *)this, off_831708)
      || (uint8_t)String::Equals_Alt((String *)this, off_83170C)
      || (uint8_t)String::Equals_Alt((String *)this, off_831710)
      || (uint8_t)String::Equals_Alt((String *)this, off_831714)
      || (uint8_t)String::Equals_Alt((String *)this, off_831718)
      || (uint8_t)String::Equals_Alt((String *)this, off_83171C);

}

// ==== BACKFILL 0x005EE200  UpdateObserveButtonWOL  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void UpdateObserveButtonWOL(HWND hDlg)
{
    (void)hDlg;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE200.json)
}

// ==== BACKFILL 0x005EE6A0  NetworkLobby::UpdateLabels  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
void UpdateLabels(HWND hDlg)
{
    (void)hDlg;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EE6A0.json)
}

// ==== BACKFILL 0x005EED00  VectorClass::Cleanup3  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_flat::Cleanup3()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EED00.json)
}

// ==== BACKFILL 0x005EF290  VectorClass_cptr_MultiMission::j_vt00  cls=NullModemConnClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVector::j_vt00(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EF290.json)
}

// ==== BACKFILL 0x005EFF00  sub_5EFF00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5EFF00(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EFF00.json)
}

// ==== BACKFILL 0x005EFF70  Network::handleTimeout  cls=Network  sig=csp  renamed_refs=0  residual=- ====
HWND HashTable_flat::handleTimeout(HWND hDlg)
{
    (void)hDlg; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005EFF70.json)
}
