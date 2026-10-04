// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005D0590  nullsub_24  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_24_5D0590()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D0590)
}

// ==== BACKFILL 0x005D1C90  UI_Load_5D1C90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5D1C90::UI_Load_5D1C90( int (*** a2) {

  int *p_nextArrayIndex; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax
  int v9; // ecx
  int v10; // ecx

  p_nextArrayIndex = &((unsigned int *)this)[0]; /*0x5d1c94*/
  v4 = (*(int (**)(int *, unsigned int))(((unsigned int *)this)[0] + 16))(&((unsigned int *)this)[0], &a3); /*0x5d1ca5*/
  v5 = p_nextArrayIndex[2]; /*0x5d1ca7*/
  if ( p_nextArrayIndex[4] < v5 /*0x5d1cc9*/
    || (*((unsigned char *)p_nextArrayIndex + 13) || !v5)
    && (v6 = p_nextArrayIndex[5], v6 > 0)
    && (*(uint8_t (**)(int *, int, unsigned int))(*p_nextArrayIndex + 8))(p_nextArrayIndex, v5 + v6, 0) )
  {
    v7 = p_nextArrayIndex[4]; /*0x5d1cd0*/
    if ( v4 < v7 - 1 ) /*0x5d1cd8*/
      memcpy( /*0x5d1cf7*/
        (void *)(p_nextArrayIndex[1] + 4 * v4 + 8),
        (const void *)(p_nextArrayIndex[1] + 4 * (v4 + 1)),
        4 * (v7 + 0x3FFFFFFF * (v4 + 1)));
    *(unsigned int *)(p_nextArrayIndex[1] + 4 * v4 + 4) = a2; /*0x5d1d07*/
    ++p_nextArrayIndex[4]; /*0x5d1d0f*/
  }
  result = (int)a3; /*0x5d1d12*/
  a2 = a3; /*0x5d1d18*/
  if ( a3 ) /*0x5d1d1c*/
  {
    result = (*(int (**)(int *, unsigned int))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d27*/
    if ( result != -1 ) /*0x5d1d2d*/
    {
      result = (*(int (**)(int *, unsigned int))(*p_nextArrayIndex + 16))(p_nextArrayIndex, &a2); /*0x5d1d38*/
      if ( result != -1 ) /*0x5d1d3e*/
      {
        v9 = p_nextArrayIndex[4]; /*0x5d1d40*/
        if ( result < v9 ) /*0x5d1d45*/
        {
          v10 = v9 - 1; /*0x5d1d47*/
          for ( p_nextArrayIndex[4] = v10; /*0x5d1d4d*/
                result < p_nextArrayIndex[4];
                *(unsigned int *)(p_nextArrayIndex[1] + 4 * result - 4) = *(unsigned int *)(p_nextArrayIndex[1] + 4 * result) )
          {
            ++result; /*0x5d1d52*/
          }
        }
      }
      if ( a2 ) /*0x5d1d67*/
        return (**a2)(a2, 1); /*0x5d1d6d*/
    }
  }
  return result; /*0x5d1d6f*/

}

// ==== BACKFILL 0x005D26F0  MSEngine_Destru::Release  cls=MSEngine  sig=csp  renamed_refs=0  residual=- ====
void MSEngine_Destru::Release()
{
}

// ==== BACKFILL 0x005D30C0  sub_5D30C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D30C0::sub_5D30C0(wchar_t * String, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D30C0)
}

// ==== BACKFILL 0x005D3330  MSFont::ddtor  cls=MSFont  sig=csp  renamed_refs=0  residual=- ====
short MSFont::ddtor(int a2, unsigned short *a3, int a4, int a5, int a6)
{
    return {}; // TODO stub - G42 return-sync (short->virtual short)
}

// ==== BACKFILL 0x005D3450  MSFont::QueryInterface  cls=MSFont  sig=csp  renamed_refs=0  residual=- ====
MSFont * MSFont::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D3450)
}

// ==== BACKFILL 0x005D36A0  sub_5D36A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5D36A0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D36A0)
}

// ==== BACKFILL 0x005D4AD0  TacticalClass::processInput  cls=TacticalClass  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::processInput(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005D5850  MSEngine::DestroyData  cls=MSEngine  sig=csp  renamed_refs=0  residual=- ====
void MSEngine::DestroyData(void *a1_1)
{

  if ( *(unsigned int *)this->__pad_0 ) /*0x5d5850*/
    free(*(void **)this->__pad_0); /*0x5d5857*/

}

// ==== BACKFILL 0x005D5860  nullsub_192  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_192(int a1)
{
  ; /*0x5d5860*/
}

// ==== BACKFILL 0x005D5870  Timer::EnableHighPrecision  cls=Timer  sig=csp  renamed_refs=0  residual=- ====
void * Timer::EnableHighPrecision()
{

  timeBeginPeriod((void *)(1u)); /*0x5d5875*/
  return this; /*0x5d587d*/

}

// ==== BACKFILL 0x005D5DB0  ScenarioClass::MissionStubReturnZero  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::MissionStubReturnZero()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D5DB0)
}

// ==== BACKFILL 0x005D62C0  PlayerClass::AssignPlayerIndex  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char PlayerClass::AssignPlayerIndex()
{

  int i; // esi

  for ( i = 0; i < dword_A8DA84; ++i ) /*0x5d62ca*/
  {
    if ( ((SessionClass *)((int *)((unsigned int *)(dword_A8DA78))[i]))->GetPlayerSide() == -3 ) /*0x5d62dc*/
      *(unsigned int *)(((unsigned int *)(dword_A8DA78))[i] + 107) = -1; /*0x5d62e7*/
    else
      *(unsigned int *)(((unsigned int *)(dword_A8DA78))[i] + 107) = i; /*0x5d62f8*/
  }
  return 1; /*0x5d6307*/

}

// ==== BACKFILL 0x005D6310  ScenarioClass::MissionStubReturnZero2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::MissionStubReturnZero2(MPCooperative * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D6310.json)
}

// ==== BACKFILL 0x005D6320  ScenarioClass::saveGame  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::saveGame()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D6320)
}

// ==== BACKFILL 0x005D6330  ScenarioClass::loadGame  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::loadGame()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D6330)
}

// ==== BACKFILL 0x005D6340  ScenarioClass::createStartingForces  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::createStartingForces(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D6340)
}

// ==== BACKFILL 0x005D6360  MPCooperative::Stub  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::Stub()
{

  return 0; /*0x5d6362*/

}

// ==== BACKFILL 0x005D6790  ScenarioClass::ClearFlag  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::ClearFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D6790.json)
}

// ==== BACKFILL 0x005D67A0  ScenarioClass::MissionStubReturnZero4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::MissionStubReturnZero4(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D67A0)
}

// ==== BACKFILL 0x005D67B0  GameConfig::Constructor  cls=GameConfig  sig=csp  renamed_refs=0  residual=- ====
void CCINIClass::Constructor()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D67B0.json)
}

// ==== BACKFILL 0x005D7550  sub_5D7550  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5D7550(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7550)
}

// ==== BACKFILL 0x005D7570  ScenarioClass::processAI  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::processAI()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7570)
}

// ==== BACKFILL 0x005D7580  sub_5D7580  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D7580::sub_5D7580()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7580)
}

// ==== BACKFILL 0x005D7CD0  sub_5D7CD0  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5D7CD0::sub_5D7CD0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7CD0)
}

// ==== BACKFILL 0x005D7F20  MultiplayerGameMode::QueryInterface  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
MultiplayerGameMode * MultiplayerGameMode::QueryInterface(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7F20)
}

// ==== BACKFILL 0x005D7FF0  ??_Gfacet_locale_std__UAEPAXI_Z_127  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D7FF0::___Gfacet_locale_std__UAEPAXI_Z_127(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D7FF0)
}

// ==== BACKFILL 0x005D8010  ??_Gfacet_locale_std__UAEPAXI_Z_128  cls=InitializerBase@MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D8010::___Gfacet_locale_std__UAEPAXI_Z_128(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D8010)
}

// ==== BACKFILL 0x005D80B0  ScenarioClass::sub_5D80B0  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::sub_5D80B0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D80B0.json)
}

// ==== BACKFILL 0x005D80E0  ScenarioClass::deallocateCells  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::deallocateCells(int a2) {

  if ( *((unsigned char *)this + 12) ) /*0x5d80e0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d80f5*/
  else
    return 0; /*0x5d80e7*/

}

// ==== BACKFILL 0x005D8110  ScenarioClass::resetScenarioData  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::resetScenarioData() {

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d8116*/
  *((unsigned int *)this + 4) = 0; /*0x5d8119*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d8120*/
  {
    __3_YAXPAX_Z(v2); /*0x5d8126*/
    *((unsigned int *)this + 1) = 0; /*0x5d812e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d8131*/
  *((unsigned int *)this + 2) = 0; /*0x5d8134*/

}

// ==== BACKFILL 0x005D8140  ScenarioClass::validateMap  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::validateMap(int a2) {

  if ( *((unsigned char *)this + 12) ) /*0x5d8140*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d8155*/
  else
    return 0; /*0x5d8147*/

}

// ==== BACKFILL 0x005D8170  MPBattleClass::MPBattleClass  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
MPBattleClass::MPBattleClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8170.json)
}

// ==== BACKFILL 0x005D81B0  Helper_5D81B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_5D81B0(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D81B0)
}

// ==== BACKFILL 0x005D81F0  AbstractClass::processRevealArea  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GScreenClass::processRevealArea(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D81F0.json)
}

// ==== BACKFILL 0x005D8230  AbstractClass::computeRevealRadius  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GScreenClass::computeRevealRadius(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8230.json)
}

// ==== BACKFILL 0x005D8270  AbstractClass::applyRevealToCell  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GScreenClass::applyRevealToCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, char a5, int a6)
{
    (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D8270.json)
}

// ==== BACKFILL 0x005D82B0  AbstractClass::checkRevealCell  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GScreenClass::checkRevealCell(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, const char ** a4, int a5, int a6)
{
    (void)a1; (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D82B0.json)
}

// ==== BACKFILL 0x005D8670  ScenarioClass::initLocalVariables  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::initLocalVariables(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005D86B0  ScenarioClass::setGameSpeed  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::setGameSpeed(int a2) {

  if ( *((unsigned char *)this + 12) ) /*0x5d86b0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5d86c5*/
  else
    return 0; /*0x5d86b7*/

}

// ==== BACKFILL 0x005D87E0  ScenarioClass::distributeStartingUnits  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::distributeStartingUnits(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005D8C90  PlayerClass::IsValidIndex  cls=MultiplayerTeam  sig=csp  renamed_refs=0  residual=- ====
bool PlayerClass::IsValidIndex(int a1)
{

  return (int)a1 >= 0 && (int)a1 < dword_A8DA84; /*0x5d8ca2*/

}

// ==== BACKFILL 0x005D8FB0  sub_5D8FB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5D8FB0::sub_5D8FB0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D8FB0)
}

// ==== BACKFILL 0x005D8FC0  ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5D8FC0::__Release__NonReentrantLock_details_Concurrency__QAEXXZ()
{

  *(unsigned int *)this = 0; /*0x5d8fc0*/

}

// ==== BACKFILL 0x005D8FD0  CCFileClass::WriteINIString  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
void CCFileClass::WriteINIString() {
}

// ==== BACKFILL 0x005D90E0  Network::QueryAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char HashTable_flat::QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4)
{
    (void)aP0; (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D90E0.json)
}

// ==== BACKFILL 0x005D9220  Network::WaitForPacket  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short HashTable_flat::WaitForPacket(int a1, int a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005D9220.json)
}

// ==== BACKFILL 0x005D9360  SmallFunc_5D9360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_5D9360::SmallFunc_5D9360() {

  RawFileClass v2; // [esp+4h] [ebp-24h] BYREF

  RawFileClass::Construct(&v2, (int)&stru_8263E0.MaxFDelta); /*0x5d936f*/
  INIClass::SetInt( /*0x5d9388*/
    &DSurface_ViewBounds.__pad_FC[36],
    (uint8_t *)&stru_8263E0.Loop,
    g_INI_Key_FirewallSettings,
    (int)this->AbstractClass,
    0);
  INIClass::SetInt( /*0x5d93a2*/
    &DSurface_ViewBounds.__pad_FC[36],
    (uint8_t *)&stru_8263E0.Loop,
    g_INI_Key_FirewallDelta,
    (int)((unsigned int *)this)[0],
    0);
  INIClass::WriteDigest((INIClass *)&DSurface_ViewBounds.__pad_FC[36], (int)&v2, 0); /*0x5d93b3*/
  RawFileClass::Dtor(&v2); /*0x5d93bc*/

}

// ==== BACKFILL 0x005DA040  Network_Connect  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5DA040(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DA040.json)
}

// ==== BACKFILL 0x005DA080  NetworkLobby::GetPlayerCount  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetPlayerCount(char a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DA080.json)
}

// ==== BACKFILL 0x005DAB80  sub_5DAB80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5DAB80::sub_5DAB80()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DAB80)
}

// ==== BACKFILL 0x005DAC00  WideString::Hash  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::Hash(wchar_t * Source)
{

  unsigned int v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, (const wchar_t *)Source); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  v2 = String; /*0x5dac34*/
  do /*0x5dac59*/
  {
    ComputeHash((unsigned int *)(&v4), *v2); /*0x5dac41*/
    ++v1; /*0x5dac4a*/
    ++v2; /*0x5dac4c*/
  }
  while ( v1 < wcslen(String) ); /*0x5dac59*/
  return v4; /*0x5dac60*/

}

// ==== BACKFILL 0x005DAF30  PlayerSkirmishSlotHandler_Handle  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_5DAF30()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DAF30)
}

// ==== BACKFILL 0x005DB600  PlayerSkirmishSlotHandler_Handle_5DB600  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5DB600::PlayerSkirmishSlotHandler_Handle_5DB600() {

  memset(&stru_A8D600.__pad_34[4], 0, 0x1C4u); /*0x5db611*/
  MEMORY[0xA8D7FC] = 0; /*0x5db618*/
  MEMORY[0xA8D7FE] = 0; /*0x5db627*/
  *(unsigned int *)&stru_A8D600.__pad_34[4] = 8; /*0x5db62d*/
  *(unsigned int *)&stru_A8D600.__pad_64[3] = 4; /*0x5db637*/
  return Network::SendMessage( /*0x5db646*/
           &unk_A8E9C0.Socket,
           (int)&stru_A8D600.__pad_34[4],
           455,
           1,
           (int)&this->owningHouseIndex,
           0,
           0);

}

// ==== BACKFILL 0x005DB650  Map_Handle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_5DB650(int a1, char a2, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DB650.json)
}

// ==== BACKFILL 0x005DB6F0  WinMainSetup_Setup_5DB6F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5DB6F0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DB6F0)
}

// ==== BACKFILL 0x005DBEC0  SendMultiplayerStartSignal_Start  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5DBEC0::SendMultiplayerStartSignal_Start() {

  char *v1; // ebx
  char *v2; // eax
  int v4; // edi
  int v5; // esi
  char *v6; // eax

  v1 = this; /*0x5dbec1*/
  if ( !this ) /*0x5dbec7*/
    v1 = unk_A8B380; /*0x5dbec9*/
  v2 = CharToWideString(v1); /*0x5dbed5*/
  if ( !wcscmp((const wchar_t *)v2, word_A8D610) ) /*0x5dbedb*/
    return 1; /*0x5dbee9*/
  v4 = -1; /*0x5dbef5*/
  v5 = 0; /*0x5dbef8*/
  if ( dword_A8DA84 <= 0 ) /*0x5dbefc*/
    return -1; /*0x5dbefc*/
  do /*0x5dbf23*/
  {
    v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * v5)); /*0x5dbf07*/
    if ( !_strcmpi(v6, v1) ) /*0x5dbf0d*/
      v4 = v5; /*0x5dbf19*/
    ++v5; /*0x5dbf20*/
  }
  while ( v5 < dword_A8DA84 ); /*0x5dbf23*/
  if ( v4 == -1 ) /*0x5dbf28*/
    return -1; /*0x5dbf3c*/
  else
    return *(unsigned int *)(*(unsigned int *)(dword_A8DA78 + 4 * v4) + 119); /*0x5dbf36*/

}

// ==== BACKFILL 0x005DC170  NetworkLobby::ValidateSerialNumber  cls=NetworkLobby  sig=csp  renamed_refs=0  residual=- ====
char ValidateSerialNumber()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DC170.json)
}

// ==== BACKFILL 0x005DE360  SendNetworkLobbyChatMessage  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char SendNetworkLobbyChatMessage(HWND hWnd, LPARAM, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5DE360)
}
