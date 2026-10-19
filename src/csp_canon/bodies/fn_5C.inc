// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005C0080  Entity_Load  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_5C0080(char ** a1, unsigned char * a2)
{
  char result; // al

  if ( dword_ABF3F4 ) /*0x5c0087*/
    return 0; /*0x5c0089*/
  dword_ABF3F4 = (int)a1; /*0x5c008c*/
  result = ((VQAClass*)*a1)->AdvanceFrame(a2); /*0x5c0095*/
  dword_ABF3F4 = 0; /*0x5c009a*/
  return result; /*0x5c008b*/
}

// ==== BACKFILL 0x005C0280  AbstractClass::checkLOS  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::checkLOS(int a1) {
}

// ==== BACKFILL 0x005C02C0  AbstractClass::computePathCost  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::computePathCost() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c02c0.json */
}

// ==== BACKFILL 0x005C02E0  AbstractClass::validatePathNode  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
char GScreenClass::validatePathNode()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005C02E0.json)
}

// ==== BACKFILL 0x005C02F0  AbstractClass::processPathNode  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::processPathNode() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c02f0.json */
}

// ==== BACKFILL 0x005C0330  nullsub_176  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
void nullsub_176()
{
  ; /*0x5c0330*/
}

// ==== BACKFILL 0x005C0340  AbstractClass::computePathDistance  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::computePathDistance(int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c0340.json */
}

// ==== BACKFILL 0x005C0380  AbstractClass::checkPathEnd  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkPathEnd(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x5c0380.json */
}

// ==== BACKFILL 0x005C03A0  AbstractClass::finalizePath  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::finalizePath(int a1) {
}

// ==== BACKFILL 0x005C03C0  AbstractClass::resetPathState  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::resetPathState()
{

  return 33; /*0x5c03c5*/

}

// ==== BACKFILL 0x005C0540  BinkMovieHandle::?  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::_vt03(unsigned char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0540)
}

// ==== BACKFILL 0x005C0550  BinkMovieHandle::InitFromFile  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::InitFromFile(void *a1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0550)
}

// ==== BACKFILL 0x005C0570  BinkMovieHandle::COMStub  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
BOOL BinkMovieHandle::COMStub()
{

  return ((BinkMovie*)(BinkMovieHandle *)this->height)->IsAtEnd();

}

// ==== BACKFILL 0x005C0580  BinkMovieHandle::AddRef  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
char BinkMovieHandle::AddRef(void *a1)
{

  return ((BinkMovie*)(BinkMovieHandle *)this->height)->RenderFrameToSurface();

}

// ==== BACKFILL 0x005C0590  BinkMovieHandle::Release  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::Release(void *a1)
{

  int height; // esi
  int result; // eax

  height = this->height; /*0x433021*/
  result = BinkWait((void *)(*(unsigned int *)(height + 4))); /*0x433027*/
  if ( !result ) /*0x43302f*/
    *(unsigned char *)(height + 45) = 1; /*0x433031*/
  return result; /*0x433036*/

}

// ==== BACKFILL 0x005C05A0  BinkMovieHandle::Pause  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::Pause(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C05A0)
}

// ==== BACKFILL 0x005C05C0  BinkMovieHandle::RenderLoop  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::RenderLoop(int a2, void *a2_2, void *a3, void *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C05C0)
}

// ==== BACKFILL 0x005C05D0  BinkMovieHandle::AdjustSurfaceFormat  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
int BinkMovieHandle::AdjustSurfaceFormat(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C05D0)
}

// ==== BACKFILL 0x005C05E0  BinkMovieHandle::BlitToTarget  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
unsigned int BinkMovieHandle::BlitToTarget(void *a1, void *a2)
{

  return 0x3E8 /*0x432c06*/
       / (unsigned int)(*(unsigned int *)(*(unsigned int *)(this->height + 4) + 20) / *(unsigned int *)(*(unsigned int *)(this->height + 4) + 24));

}

// ==== BACKFILL 0x005C05F0  BinkMovieHandle::Close  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BinkMovieHandle::Close(void *a1, void *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C05F0)
}

// ==== BACKFILL 0x005C0630  sub_5C0630  cls=MovieHandle  sig=csp  renamed_refs=0  residual=- ====
void sub_5C0630()
{
      // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x005C0630.json)
}

// ==== BACKFILL 0x005C0640  Render_Play  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_5C0640(const char * a1, char * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C0640.json)
}

// ==== BACKFILL 0x005C09B0  AbstractClass::processCombatState  cls=VQMovieHandle  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::processCombatState(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c09b0.json */
}

// ==== BACKFILL 0x005C0A30  BinkMovieHandle::QueryInterface  cls=BinkMovieHandle  sig=csp  renamed_refs=0  residual=- ====
BinkMovieHandle * BinkMovieHandle::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0A30)
}

// ==== BACKFILL 0x005C0A70  TacticalClass::ClearVector  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void TacticalClass::ClearVector() {

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5c0a76*/
  *((unsigned int *)this + 4) = 0; /*0x5c0a79*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5c0a80*/
  {
    __3_YAXPAX_Z(v2); /*0x5c0a86*/
    *((unsigned int *)this + 1) = 0; /*0x5c0a8e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5c0a91*/
  *((unsigned int *)this + 2) = 0; /*0x5c0a94*/

}

// ==== BACKFILL 0x005C0AA0  TacticalClass::ProbeCalling  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ProbeCalling(int a2) {

  if ( *((unsigned char *)this + 12) ) /*0x5c0aa0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c0ab5*/
  else
    return 0; /*0x5c0aa7*/

}

// ==== BACKFILL 0x005C0B10  AbstractClass::checkCombatFlags  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkCombatFlags(int a2, void* a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c0b10.json */
}

// ==== BACKFILL 0x005C0BC0  AbstractClass::processDamageEvent  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::processDamageEvent() {
}

// ==== BACKFILL 0x005C0BF0  AbstractClass::applyDamageEffects  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::applyDamageEffects(void* a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c0bf0.json */
}

// ==== BACKFILL 0x005C0C30  AbstractClass::checkDamageThreshold  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkDamageThreshold(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c0c30.json */
}

// ==== BACKFILL 0x005C0C50  TacticalClass::ReallocVector  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::ReallocVector(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005C0D00  TacticalClass::FindInVector  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int TacticalClass::FindInVector(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005C0D30  AbstractClass::processDeathEvent  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::processDeathEvent(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c0d30.json */
}

// ==== BACKFILL 0x005C0DD0  MPBattleClass::initGame  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::initGame(const wchar_t ** a1, MultiplayerBattle * aP2, const char ** a3, MultiplayerBattle * aP4, char aP5, MultiplayerBattle * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C0DD0.json)
}

// ==== BACKFILL 0x005C0E10  sub_5C0E10  cls=MultiplayerBattle  sig=csp  renamed_refs=0  residual=- ====
void sub_5C0E10()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C0E10.json)
}

// ==== BACKFILL 0x005C0E20  ScenarioClass::initUnits  cls=MultiplayerBattle  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::initUnits()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E20)
}

// ==== BACKFILL 0x005C0E30  ScenarioClass::StubReturnFalse  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::StubReturnFalse()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E30)
}

// ==== BACKFILL 0x005C0E40  ScenarioClass::StubReturnFalse2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::StubReturnFalse2()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E40)
}

// ==== BACKFILL 0x005C0E50  ScenarioClass::StubReturnFalse3  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::StubReturnFalse3(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E50)
}

// ==== BACKFILL 0x005C0E60  ScenarioClass::StubReturnTrue  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E60)
}

// ==== BACKFILL 0x005C0E70  ScenarioClass::StubReturnTrue2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue2()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E70)
}

// ==== BACKFILL 0x005C0E80  ScenarioClass::StubReturnFalse4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnFalse4(int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0E80)
}

// ==== BACKFILL 0x005C0E90  Memory::FreeConditional  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char Memory::FreeConditional(int a1, int a2, void * Block, int a4, short a5, int a6, int a7, int a8, int a9)
{

  if ( Block && HIBYTE(a5) ) /*0x5c0e9e*/
    __3_YAXPAX_Z(Block); /*0x5c0ea1*/
  return 0; /*0x5c0eab*/

}

// ==== BACKFILL 0x005C0ED0  ScenarioClass::StubReturnFalse5  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::StubReturnFalse5(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0ED0)
}

// ==== BACKFILL 0x005C0EE0  ScenarioClass::initTriggers  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::initTriggers()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0EE0)
}

// ==== BACKFILL 0x005C0EF0  ScenarioClass::StubReturnFalse6  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnFalse6(int a1, int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0EF0)
}

// ==== BACKFILL 0x005C0F00  ScenarioClass::StubReturnFalse7  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnFalse7(int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F00)
}

// ==== BACKFILL 0x005C0F10  ScenarioClass::StubReturnTrue3  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue3()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F10)
}

// ==== BACKFILL 0x005C0F20  ScenarioClass::StubReturnTrue4  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue4()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F20)
}

// ==== BACKFILL 0x005C0F30  ScenarioClass::initTeams  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::initTeams()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F30)
}

// ==== BACKFILL 0x005C0F40  ScenarioClass::StubReturnTrue5  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue5()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F40)
}

// ==== BACKFILL 0x005C0F50  ScenarioClass::StubReturnFalse8  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnFalse8(int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F50)
}

// ==== BACKFILL 0x005C0F60  ScenarioClass::StubReturnFalse9  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnFalse9(int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F60)
}

// ==== BACKFILL 0x005C0F70  ScenarioClass::StubReturnFalse10  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::StubReturnFalse10()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F70)
}

// ==== BACKFILL 0x005C0F80  ScenarioClass::StubReturnTrue6  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue6()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F80)
}

// ==== BACKFILL 0x005C0F90  ScenarioClass::StubReturnTrue7  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::StubReturnTrue7()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0F90)
}

// ==== BACKFILL 0x005C0FA0  Memory::FreeConditional2  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char Memory::FreeConditional2(int a1, void * Block, int a3, short a4, int a5, int a6, int a7)
{

  if ( Block && HIBYTE(a4) ) /*0x5c0fae*/
    __3_YAXPAX_Z(Block); /*0x5c0fb1*/
  return 0; /*0x5c0fbb*/

}

// ==== BACKFILL 0x005C0FC0  ScenarioClass::StubReturnFalse11  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::StubReturnFalse11()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0FC0)
}

// ==== BACKFILL 0x005C0FD0  ScenarioClass::initWaypoints  cls=MultiplayerGameMode  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::initWaypoints()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C0FD0)
}

// ==== BACKFILL 0x005C0FE0  ScenarioClass::initAI  cls=MultiplayerBattle  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ScenarioClass::initAI(char a2) {
    // G42.34 T11: cache 0x5C0FE0 = MultiplayerBattle ddtor misattributed under
    // ScenarioClass. m_0 = offset-0 vftable slot (ScenarioClass non-polymorphic,
    // no member): generator-neutralized vftable write kept as raw offset-0 store.
    *(unsigned int *)(void *)this = 0; /*0x5c0fe3*/
    ((MultiplayerGameMode *)(void *)this)->Dtor(); /*0x5c0fe9 G42.34 T11: 0-arg virtual (game_systems.hpp:472)*/
    if ( (a2 & 1) != 0 ) /*0x5c0ff3*/
      RA2_OPDEL(this); /*0x5c0ff6*/
    return (unsigned int *)this; /*0x5c1000*/
}

// ==== BACKFILL 0x005C1300  ReadMPMapsINI  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ReadMPMapsINI(char* Source) {

  int Int_Overwrite; // edi
  int i; // esi
  INIClass v4; // [esp+4h] [ebp-CCh] BYREF
  CCFileClass v5; // [esp+44h] [ebp-8Ch] BYREF
  int v6[3]; // [esp+9Ch] [ebp-34h] BYREF
  int v7; // [esp+A8h] [ebp-28h]
  char Buffer[32]; // [esp+B0h] [ebp-20h] BYREF

  if ( !Source ) /*0x5c130b*/
    return 0; /*0x5c130d*/
  CCFileClass::Construct(&v5, (char *)Source); /*0x5c131c*/
  v4.headNode[0] = 0; /*0x5c1325*/
  v4.headNode[1] = 0; /*0x5c1329*/
  GenericNode::Constructor((GenericNode *)v4.sectionHead); /*0x5c132d*/
  GenericNode::Constructor((GenericNode *)&v4.sectionCount); /*0x5c1336*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x5c134c*/
  v4.headNode[2] = (int)&g_var_a3009f; /*0x5c1355*/
  memset(&v4.__pad_20[8], 0, 13); /*0x5c1363*/
  v4.unknown38 = 0; /*0x5c1373*/
  v4.INIClass_field_3C = 0; /*0x5c1377*/
  *(unsigned int *)v4.__pad_0 = &g_ptr_7EA5F4; /*0x5c137b*/
  if ( FileStraw::Open((FileStraw *)&v4, (int)&v5, 0) ) /*0x5c1383*/
  {
    Int_Overwrite = 0; /*0x5c13cd*/
    for ( i = 0; i < 8; ++i ) /*0x5c13cf*/
    {
      sprintf(Buffer, "%d", i); /*0x5c13df*/
      if ( INIClass::ReadInt_Overwrite((bool *)v4.__pad_0, g_INI_Key_Waypoints, (uint8_t *)Buffer, -1) != -1 ) /*0x5c1402*/
        ++Int_Overwrite; /*0x5c1404*/
    }
    if ( !Int_Overwrite ) /*0x5c140d*/
      Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5c1423*/
                        (bool *)v4.__pad_0,
                        (uint8_t *)&(unsigned int *)((char *)&stru_82BA00 + 8),
                        (uint8_t *)&(unsigned int *)((char *)&stru_82BA00 + 139),
                        0);
    HashTable::DestroyHashTableINIClass(&v4); /*0x5c1429*/
    *(unsigned int *)v5.CDFileClass = &g_ptr_7E16B0; /*0x5c1435*/
    v7 = 0; /*0x5c143d*/
    Vector::Clear((int)v6); /*0x5c1444*/
    *(unsigned int *)v5.CDFileClass = &off_7E1668; /*0x5c144d*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x5c1455*/
    return Int_Overwrite; /*0x5c145a*/
  }
  else
  {
    HashTable::DestroyHashTableINIClass(&v4); /*0x5c1390*/
    *(unsigned int *)v5.CDFileClass = &g_ptr_7E16B0; /*0x5c139c*/
    v7 = 0; /*0x5c13a4*/
    Vector::Clear((int)v6); /*0x5c13ab*/
    *(unsigned int *)v5.CDFileClass = &off_7E1668; /*0x5c13b4*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x5c13bc*/
    return 0; /*0x5c13c1*/
  }

}

// ==== BACKFILL 0x005C1980  MPCooperative_Copy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5C1980()
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h] BYREF

  result = -1; /*0x5c198a*/
  v2 = 0; /*0x5c198d*/
  v4 = -1; /*0x5c1991*/
  if ( g_DDrawSurfaceManager.scenario[13] > 0 ) /*0x5c1995*/
  {
    do /*0x5c1a00*/
    {
      Movie::GetSection((int)&g_DDrawSurfaceManager, v2, &v5); /*0x5c19a5*/
      for ( i = 0; i < 780; i += 260 ) /*0x5c19aa*/
      {
        if ( *(unsigned int *)&stru_A8B250.__pad_0[4] ) /*0x5c19b3*/
        {
          if ( !_strnicmp( /*0x5c19da*/
                  (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88),
                  (const char *)(*(unsigned int *)(v5 + 12) + i),
                  strlen((const char *)(*(unsigned int *)(v5 + 12) + i))) )
            v4 = v2; /*0x5c19e6*/
        }
      }
      ++v2; /*0x5c19fd*/
    }
    while ( v2 < g_DDrawSurfaceManager.scenario[13] ); /*0x5c1a00*/
    return v4; /*0x5c1a02*/
  }
  return result; /*0x5c1a09*/
}

// ==== BACKFILL 0x005C1D80  MPCooperative::Write  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::Write(int a2)
{

  char *MPCooperative_field_0x40; // ecx

  if ( dword_A8DA84 == 2 ) /*0x5c1d8b*/
  {
    MPCooperative_field_0x40 = (char *)this->MPCooperative_field_0x40; /*0x5c1d8d*/
    if ( MPCooperative_field_0x40 ) /*0x5c1d92*/
      ((String *)(MPCooperative_field_0x40))->AssignWideToChar((char *)*dword_A8DA78, (char *)dword_A8DA78[1]); /*0x5c1da0*/
  }
  return ScenarioClass::MissionStubReturnZero2((int *)a2); /*0x5c1db1*/

}

// ==== BACKFILL 0x005C21A0  MPCooperative::CheckReady  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
HWND MPCooperative::CheckReady(HWND hDlg)
{

  int result; // eax

  result = (int)GetDlgItem((HWND)hDlg, 1842); /*0x5c21aa*/
  if ( result ) /*0x5c21b2*/
    return PostMessageA((HWND)result, 0x405u, 1u, stru_A8EB00.ObjectTypeClass[26]); /*0x5c21c3*/
  return result; /*0x5c21c9*/

}

// ==== BACKFILL 0x005C2500  Campaign::SetupMovie  cls=Campaign  sig=csp  renamed_refs=0  residual=- ====
void SetupMovie()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C2500.json)
}

// ==== BACKFILL 0x005C2640  MPCooperative::Clone  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
void MPCooperative::Clone(HWND hDlg)
{

  int v3; // edi
  ObjectClass *i; // esi
  int ResourceID2CSF; // eax

  if ( hDlg ) /*0x5c264a*/
  {
    v3 = dword_A8DA84; /*0x5c264e*/
    for ( i = 0; (int)i < v3; i = (ObjectClass *)((char *)i + 1) ) /*0x5c2658*/
    {
      ResourceID2CSF = GetResourceID2CSF(i); /*0x5c265c*/
      ((MovieClass *)((MovieClass *)this))->ReadConfig(hDlg, ResourceID2CSF); /*0x5c2665*/
    }
    CampaignCoop::Setup((CampaignCoop *)this, hDlg, 1); /*0x5c2674*/
  }

}

// ==== BACKFILL 0x005C2CB0  MPCooperative::ValidateSettings  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::ValidateSettings()
{

  HWND GameUI; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c2cb3*/
  if ( GameUI || (GameUI = (HWND)((Dialog*)((Dialog *)0xBC6))->FindByHandle()) != 0 ) /*0x5c2cc8*/
    CampaignCoop::Setup((CampaignCoop *)this, GameUI, 1); /*0x5c2ccf*/
  return 1; /*0x5c2cd6*/

}

// ==== BACKFILL 0x005C2CE0  MPCooperative::SaveSettings  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::SaveSettings(HWND hWnd, int a3)
{

  return ListBox::FillPlayers((MultiplayerGameMode *)this, hWnd, a3); /*0x5c2cef*/

}

// ==== BACKFILL 0x005C36F0  MPCooperative::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_17  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C36F0)
}

// ==== BACKFILL 0x005C3700  MPCooperative::StubReturnFalse  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::StubReturnFalse()
{

  return 0; /*0x5c3702*/

}

// ==== BACKFILL 0x005C3F30  MPCooperative::Cleanup  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::Cleanup(void *a1_1)
{

  HWND GameUI; // eax
  SkirmishDialog *v3; // esi
  int result; // eax

  GameUI = (HWND)Dialog::FindGameUI(); /*0x5c3f34*/
  v3 = (SkirmishDialog *)GameUI; /*0x5c3f39*/
  if ( GameUI ) /*0x5c3f3d*/
  {
    CampaignCoop::Setup((CampaignCoop *)this, GameUI, 0); /*0x5c3f44*/
    SkirmishDialog::FillComboBoxes(v3); /*0x5c3f4b*/
  }
  for ( result = 0; result < dword_A8DA84; ++result ) /*0x5c3f5c*/
    *(unsigned int *)(dword_A8DA78[result] + 107) = result; /*0x5c3f67*/
  return result; /*0x5c3f58*/

}

// ==== BACKFILL 0x005C42C0  MPCooperative::COMStub_Ret2  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::COMStub_Ret2()
{

  return 2; /*0x5c42c5*/

}

// ==== BACKFILL 0x005C4670  MPCooperative::checkVictory  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::checkVictory()
{

  int v2; // esi
  int *MPCooperative_field_0x40; // ecx
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x5c4677*/
  MPCooperative_field_0x40 = (int *)this->MPCooperative_field_0x40; /*0x5c4679*/
  if ( !MPCooperative_field_0x40 ) /*0x5c467e*/
    return 0; /*0x5c4681*/
  MPCooperative::GetMovieScore(MPCooperative_field_0x40, &v5); /*0x5c468d*/
  ((Movie *)((int *)this->MPCooperative_field_0x40))->GetState(&v6); /*0x5c469a*/
  if ( v5 == v6 ) /*0x5c46a9*/
  {
    ((Movie *)((int *)this->MPCooperative_field_0x40))->GetSectionID(&v7); /*0x5c46b3*/
    v2 = 1 << v7; /*0x5c46c1*/
    Debug::Log(); /*0x5c46ca*/
  }
  return v2; /*0x5c4680*/

}

// ==== BACKFILL 0x005C4E90  MPCooperative::spawnUnits  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::spawnUnits(int a2, void * Block, int a4, short a5, int a6, int a7, unsigned int * a8)
{

  *a8 = 0; /*0x5c4e94*/
  if ( this->MPCooperative_field_0x40 ) /*0x5c4e9a*/
  {
    if ( Block ) /*0x5c4ea7*/
    {
      if ( HIBYTE(a5) ) /*0x5c4eaf*/
        __3_YAXPAX_Z(Block); /*0x5c4eb2*/
    }
    return 1; /*0x5c4eba*/
  }
  else
  {
    if ( Block && HIBYTE(a5) ) /*0x5c4ec9*/
      __3_YAXPAX_Z(Block); /*0x5c4ecc*/
    return 0; /*0x5c4ed4*/
  }

}

// ==== BACKFILL 0x005C4EE0  MPCooperative::assignResources  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::assignResources()
{

  return 1; /*0x5c4ee2*/

}

// ==== BACKFILL 0x005C4EF0  MPCooperative::setUpAlliances  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::setUpAlliances()
{

  return 1; /*0x5c4ef2*/

}

// ==== BACKFILL 0x005C4F00  MPCooperative::initTurnOrder  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::initTurnOrder()
{

  return 0; /*0x5c4f02*/

}

// ==== BACKFILL 0x005C4FC0  MPCooperative::saveGameState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
DynamicVector * MPCooperative::saveGameState(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c4fc3*/
  *Block = &g_ptr_7E8500; /*0x5c4fc6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c4fd0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c4fd8*/
    *(Block + 1) = 0; /*0x5c4fe0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c4feb*/
  *(Block + 2) = 0; /*0x5c4ff1*/
  if ( (a2 & 1) != 0 ) /*0x5c4ff8*/
    __3_YAXPAX_Z(Block); /*0x5c4ffb*/
  return Block; /*0x5c5005*/

}

// ==== BACKFILL 0x005C5010  MPCooperative::loadGameState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void MPCooperative::loadGameState()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5c5016*/
  *((unsigned int *)this + 4) = 0; /*0x5c5019*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5c5020*/
  {
    __3_YAXPAX_Z(v2); /*0x5c5026*/
    *((unsigned int *)this + 1) = 0; /*0x5c502e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5c5031*/
  *((unsigned int *)this + 2) = 0; /*0x5c5034*/

}

// ==== BACKFILL 0x005C5040  MPCooperative::syncPlayers  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int MPCooperative::syncPlayers(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5c5040*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c5055*/
  else
    return 0; /*0x5c5047*/

}

// ==== BACKFILL 0x005C50D0  MPCooperative::processPlayerInput  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void MPCooperative::processPlayerInput()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5c50d6*/
  *((unsigned int *)this + 4) = 0; /*0x5c50d9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5c50e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5c50e6*/
    *((unsigned int *)this + 1) = 0; /*0x5c50ee*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5c50f1*/
  *((unsigned int *)this + 2) = 0; /*0x5c50f4*/

}

// ==== BACKFILL 0x005C5100  MPCooperative::updateGameClock  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int MPCooperative::updateGameClock(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5c5100*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c5115*/
  else
    return 0; /*0x5c5107*/

}

// ==== BACKFILL 0x005C5170  MPCooperative::Release  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c517c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5c5186*/
    if ( a3 ) /*0x5c518c*/
      v4 = a3; /*0x5c51a2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c519e*/
    *((unsigned char *)this + 12) = 1; /*0x5c51a6*/
    if ( v4 ) /*0x5c51aa*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x5c51b5*/
      {
        v6 = *((unsigned int *)this + 2); /*0x5c51bc*/
        if ( a2 < v6 ) /*0x5c51c1*/
          v6 = a2; /*0x5c51c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5c51c9*/
          ++i; /*0x5c51ce*/
        if ( *((unsigned char *)this + 13) ) /*0x5c51db*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c51e6*/
          *((unsigned int *)this + 1) = 0; /*0x5c51ee*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x5c51f7*/
      *((unsigned int *)this + 2) = a2; /*0x5c51ff*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x5c5202*/
      return 1; /*0x5c5208*/
    }
    else
    {
      return 0; /*0x5c51af*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5c5212*/
    return 1; /*0x5c5218*/
  }

}

// ==== BACKFILL 0x005C5220  MPCooperative::ddtor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MPCooperative::ddtor()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x5c522d*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 4)); /*0x5c5233*/
    *((unsigned int *)this + 1) = 0; /*0x5c523b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5c523e*/
  *((unsigned int *)this + 2) = 0; /*0x5c5241*/

}

// ==== BACKFILL 0x005C5250  MPCooperative::checkTimeout  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::checkTimeout(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x5c5250*/
    return 0; /*0x5c5258*/
  v3 = *((unsigned int *)this + 2); /*0x5c525e*/
  result = 0; /*0x5c5261*/
  if ( v3 <= 0 ) /*0x5c5265*/
    return -1; /*0x5c527c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x5c526b*/
  {
    if ( ++result >= v3 ) /*0x5c527a*/
      return -1; /*0x5c527a*/
  }
  return result; /*0x5c525a*/

}

// ==== BACKFILL 0x005C5290  MPCooperative::handleDisconnect  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MPCooperative::handleDisconnect(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5c5290*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c52a5*/
  else
    return 0; /*0x5c5297*/

}

// ==== BACKFILL 0x005C52B0  MPCooperative::migrateHost  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::migrateHost(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c52bc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5c52c2*/
    if ( a3 ) /*0x5c52c8*/
      v4 = a3; /*0x5c52de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c52da*/
    *((unsigned char *)this + 12) = 1; /*0x5c52e2*/
    if ( !v4 ) /*0x5c52e6*/
      return 0; /*0x5c535a*/
    if ( *((unsigned int *)this + 1) ) /*0x5c52e8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5c52ef*/
      if ( a2 < v5 ) /*0x5c52f4*/
        v5 = a2; /*0x5c52f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5c52fc*/
        ++i; /*0x5c5301*/
      if ( *((unsigned char *)this + 13) ) /*0x5c530e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5319*/
        *((unsigned int *)this + 1) = 0; /*0x5c5321*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5c532a*/
    *((unsigned int *)this + 2) = a2; /*0x5c5332*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5c5335*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5c533e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x5c5341*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5c5349*/
    *((unsigned int *)this + 4) = v7; /*0x5c534b*/
  return 1; /*0x5c534e*/

}

// ==== BACKFILL 0x005C5360  MPCooperative::validatePlayerAction  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::validatePlayerAction(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5c5360*/
  result = 0; /*0x5c5363*/
  if ( v2 <= 0 ) /*0x5c5368*/
    return -1; /*0x5c537f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5c536e*/
  {
    if ( ++result >= v2 ) /*0x5c537d*/
      return -1; /*0x5c537d*/
  }
  return result; /*0x5c5382*/

}

// ==== BACKFILL 0x005C53D0  MPCooperative::processTeamChat  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::processTeamChat(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x5c53dc*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5c53e6*/
    if ( a3 ) /*0x5c53ec*/
      v4 = a3; /*0x5c5402*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c53fe*/
    *((unsigned char *)this + 12) = 1; /*0x5c5406*/
    if ( v4 ) /*0x5c540a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x5c5415*/
      {
        v6 = *((unsigned int *)this + 2); /*0x5c541c*/
        if ( a2 < v6 ) /*0x5c5421*/
          v6 = a2; /*0x5c5423*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5c5429*/
          ++i; /*0x5c542e*/
        if ( *((unsigned char *)this + 13) ) /*0x5c543b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c5446*/
          *((unsigned int *)this + 1) = 0; /*0x5c544e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x5c5457*/
      *((unsigned int *)this + 2) = a2; /*0x5c545f*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x5c5462*/
      return 1; /*0x5c5468*/
    }
    else
    {
      return 0; /*0x5c540f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5c5472*/
    return 1; /*0x5c5478*/
  }

}

// ==== BACKFILL 0x005C5480  MPCooperative::updateScoreBoard  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MPCooperative::updateScoreBoard()
{

  if ( *((unsigned int *)this + 1) && *((unsigned char *)this + 13) ) /*0x5c548d*/
  {
    __3_YAXPAX_Z(*(void **)((char *)this + 4)); /*0x5c5493*/
    *((unsigned int *)this + 1) = 0; /*0x5c549b*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5c549e*/
  *((unsigned int *)this + 2) = 0; /*0x5c54a1*/

}

// ==== BACKFILL 0x005C54B0  MPCooperative::processAITurn  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::processAITurn(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x5c54b0*/
    return 0; /*0x5c54b8*/
  v3 = *((unsigned int *)this + 2); /*0x5c54be*/
  result = 0; /*0x5c54c1*/
  if ( v3 <= 0 ) /*0x5c54c5*/
    return -1; /*0x5c54dc*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x5c54cb*/
  {
    if ( ++result >= v3 ) /*0x5c54da*/
      return -1; /*0x5c54da*/
  }
  return result; /*0x5c54ba*/

}

// ==== BACKFILL 0x005C54F0  MPCooperative::evaluateAIStrategy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MPCooperative::evaluateAIStrategy(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5c54f0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5c5505*/
  else
    return 0; /*0x5c54f7*/

}

// ==== BACKFILL 0x005C5770  MPCooperative::broadcastMessage  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
char MPCooperative::broadcastMessage(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5c577c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x5c5782*/
    if ( a3 ) /*0x5c5788*/
      v4 = a3; /*0x5c579e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5c579a*/
    *((unsigned char *)this + 12) = 1; /*0x5c57a2*/
    if ( !v4 ) /*0x5c57a6*/
      return 0; /*0x5c581a*/
    if ( *((unsigned int *)this + 1) ) /*0x5c57a8*/
    {
      v5 = *((unsigned int *)this + 2); /*0x5c57af*/
      if ( a2 < v5 ) /*0x5c57b4*/
        v5 = a2; /*0x5c57b6*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x5c57bc*/
        ++i; /*0x5c57c1*/
      if ( *((unsigned char *)this + 13) ) /*0x5c57ce*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5c57d9*/
        *((unsigned int *)this + 1) = 0; /*0x5c57e1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5c57ea*/
    *((unsigned int *)this + 2) = a2; /*0x5c57f2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5c57f5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5c57fe*/
  }
  v7 = *((unsigned int *)this + 2); /*0x5c5801*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5c5809*/
    *((unsigned int *)this + 4) = v7; /*0x5c580b*/
  return 1; /*0x5c580e*/

}

// ==== BACKFILL 0x005C5820  MPCooperative::handlePlayerReady  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int MPCooperative::handlePlayerReady(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x5c5820*/
  result = 0; /*0x5c5823*/
  if ( v2 <= 0 ) /*0x5c5828*/
    return -1; /*0x5c583f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x5c582e*/
  {
    if ( ++result >= v2 ) /*0x5c583d*/
      return -1; /*0x5c583d*/
  }
  return result; /*0x5c5842*/

}

// ==== BACKFILL 0x005C5850  MPCooperative::verifyGameIntegrity  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat * MPCooperative::verifyGameIntegrity(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c5853*/
  *Block = &g_ptr_7E8500; /*0x5c5856*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c5860*/
  {
    __3_YAXPAX_Z(v3); /*0x5c5868*/
    *(Block + 1) = 0; /*0x5c5870*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c587b*/
  *(Block + 2) = 0; /*0x5c5881*/
  if ( (a2 & 1) != 0 ) /*0x5c5888*/
    __3_YAXPAX_Z(Block); /*0x5c588b*/
  return Block; /*0x5c5895*/

}

// ==== BACKFILL 0x005C58A0  MPCooperative::processVote  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat * MPCooperative::processVote(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c58a3*/
  *Block = &g_ptr_7E8500; /*0x5c58a6*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c58b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c58b8*/
    *(Block + 1) = 0; /*0x5c58c0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c58cb*/
  *(Block + 2) = 0; /*0x5c58d1*/
  if ( (a2 & 1) != 0 ) /*0x5c58d8*/
    __3_YAXPAX_Z(Block); /*0x5c58db*/
  return Block; /*0x5c58e5*/

}

// ==== BACKFILL 0x005C5990  MPCooperative::tallyVotes  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
DynamicVector * MPCooperative::tallyVotes(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5c5993*/
  *Block = &g_ptr_7E8500; /*0x5c5996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5c59a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5c59a8*/
    *(Block + 1) = 0; /*0x5c59b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5c59bb*/
  *(Block + 2) = 0; /*0x5c59c1*/
  if ( (a2 & 1) != 0 ) /*0x5c59c8*/
    __3_YAXPAX_Z(Block); /*0x5c59cb*/
  return Block; /*0x5c59d5*/

}

// ==== BACKFILL 0x005C59E0  MPCooperative::applyVoteResult  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPCooperative::applyVoteResult(int a2, int a3)
{

  this->MPCooperative_field_0x4 = 0; /*0x5c59eb*/
  this->MPCooperative_field_0x8 = (void *)a2; /*0x5c59ee*/
  LOBYTE(this->MPCooperative_field_0xC) = 1; /*0x5c59f1*/
  BYTE1(this->MPCooperative_field_0xC) = 0; /*0x5c59f5*/
  this->MPCooperative_field_0x0 = &g_ptr_7E8500; /*0x5c59f8*/
  if ( a2 ) /*0x5c59fe*/
  {
    if ( a3 ) /*0x5c5a06*/
    {
      this->MPCooperative_field_0x4 = (void *)a3; /*0x5c5a08*/
      return &this->MPCooperative_field_0x0; /*0x5c5a0e*/
    }
    this->MPCooperative_field_0x4 = (void *)__2_YAPAXI_Z(4 * a2); /*0x5c5a1d*/
    BYTE1(this->MPCooperative_field_0xC) = 1; /*0x5c5a20*/
  }
  return &this->MPCooperative_field_0x0; /*0x5c5a0d*/

}

// ==== BACKFILL 0x005C5A30  AbstractClass::updateAnimationState  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::updateAnimationState(int aP1, int aP2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x5c5a30.json */
}

// ==== BACKFILL 0x005C5A80  CoopCampaignVector::Construct  cls=CoopCampaignVector  sig=csp  renamed_refs=0  residual=- ====
_DWORD * CoopCampaignVector::Construct(int aP1, int aP2)
{

  this->CoopCampaignVector_field_0x04 = (unsigned int)(0);
  this->CoopCampaignVector_field_0x08 = (unsigned int)(aP1);
  (this->CoopCampaignVector_field_0x0C) = ((this->CoopCampaignVector_field_0x0C) & ~0xFF) | ((1) & 0xFF); /*0x5c5a91*/
  (this->CoopCampaignVector_field_0x0C) = ((this->CoopCampaignVector_field_0x0C) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x5c5a95*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&g_ptr_7E8500); /*0x5c5a98*/
  if ( aP1 ) /*0x5c5a9e*/
  {
    if ( aP2 ) /*0x5c5aa6*/
    {
      this->CoopCampaignVector_field_0x04 = (unsigned int)(aP2);
      return this->__pad_0; /*0x5c5aae*/
    }
    this->CoopCampaignVector_field_0x04 =(unsigned int)__2_YAPAXI_Z(4 * aP1); /*0x5c5abd*/
    (this->CoopCampaignVector_field_0x0C) = ((this->CoopCampaignVector_field_0x0C) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x5c5ac0*/
  }
  return this->__pad_0; /*0x5c5aad*/

}

// ==== BACKFILL 0x005C5CE0  MPBattleClass::MPFreeForAllClass  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPFreeForAllClass(const wchar_t ** a1, FreeForAll * aP2, const char ** a3, FreeForAll * aP4, char aP5, FreeForAll * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C5CE0.json)
}

// ==== BACKFILL 0x005C5D20  sub_5C5D20  cls=FreeForAll  sig=csp  renamed_refs=0  residual=- ====
void sub_5C5D20()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C5D20.json)
}

// ==== BACKFILL 0x005C5E30  ScenarioClass::processTriggerEvents  cls=FreeForAll  sig=csp  renamed_refs=0  residual=- ====
char ScenarioClass::processTriggerEvents()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C5E30)
}

// ==== BACKFILL 0x005C5E40  ScenarioClass::executeTriggerActions  cls=FreeForAll  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::executeTriggerActions(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x5C5E40.json */
}

// ==== BACKFILL 0x005C6080  sub_5C6080  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6080.json)
}

// ==== BACKFILL 0x005C6150  MPBattleClass::MPManBattleClass  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPManBattleClass(const wchar_t ** a1, MultiplayerManBattle * aP2, const char ** a3, MultiplayerManBattle * aP4, char aP5, MultiplayerManBattle * aP6, void *a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6150.json)
}

// ==== BACKFILL 0x005C6190  sub_5C6190  cls=MultiplayerManBattle  sig=csp  renamed_refs=0  residual=- ====
void sub_5C6190()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6190.json)
}

// ==== BACKFILL 0x005C61A0  MultiplayerManBattle::QueryInterface  cls=MultiplayerManBattle  sig=csp  renamed_refs=0  residual=- ====
MultiplayerManBattle * MultiplayerManBattle::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C61A0)
}

// ==== BACKFILL 0x005C61E0  Hash_Check_5C61E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5C61E0()
{
  return 3511; /*0x5c61e5*/
}

// ==== BACKFILL 0x005C62B0  EncodeVarInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int VarInt_Encode(int a1, unsigned char * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C62B0.json)
}

// ==== BACKFILL 0x005C6490  EncodeVarInt_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5C6490(unsigned char * a1, char * a2, int a3)
{
  char *v4; // esi
  char i; // bl
  int v6; // edi
  int j; // edi
  char v8; // cl

  v4 = &a2[a3 - 1]; /*0x5c64a4*/
  for ( i = -(*(int *)&a2[4 * a3 - 4] < 0); v4 > a2; --v4 ) /*0x5c64b5*/
  {
    if ( *v4 != i ) /*0x5c64b9*/
      break; /*0x5c64b9*/
  }
  v6 = 0; /*0x5c64c2*/
  if ( *v4 < 0 && *(int *)&a2[4 * a3 - 4] >= 0 || (*v4 & 0x80) == 0 && *(int *)&a2[4 * a3 - 4] < 0 ) /*0x5c64d2*/
  {
    *a1 = i; /*0x5c64d4*/
    v6 = 1; /*0x5c64d7*/
  }
  a1[v6] = *v4; /*0x5c64de*/
  for ( j = v6 + 1; v4 != a2; ++j ) /*0x5c64e4*/
  {
    v8 = *--v4; /*0x5c64e6*/
    a1[j] = v8; /*0x5c64ea*/
  }
  return j; /*0x5c64f4*/
}

// ==== BACKFILL 0x005C65B0  BigInt_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5C65B0(int * a1, int a2)
{
  int result; // eax

  result = *a1 + 1; /*0x5c65b2*/
  for ( *a1 = result; !result; *a1 = result ) /*0x5c65b5*/
  {
    ++a1; /*0x5c65b7*/
    if ( !--a2 ) /*0x5c65bb*/
      break; /*0x5c65bb*/
    result = *a1 + 1; /*0x5c65bf*/
  }
  return result; /*0x5c65c4*/
}

// ==== BACKFILL 0x005C6940  InitArrayWithValue  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int InitArrayWithValue(unsigned int * a0, int a2, AbstractClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6940.json)
}

// ==== BACKFILL 0x005C69E0  CompareBigIntLE  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CompareBigIntLE(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C69E0.json)
}

// ==== BACKFILL 0x005C6A30  Crypto_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool Crypto_Helper(unsigned int * a0, unsigned int * a1, unsigned int * a2, Crypto * aP3, int a5)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5C6A30)
}

// ==== BACKFILL 0x005C6AA0  sub_5C6AA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_5C6AA0(unsigned int * a1, unsigned int * a2, int a3, bool a4, int a5)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6AA0.json)
}

// ==== BACKFILL 0x005C6B60  DecodeAudioSampleWord  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char DecodeAudioSampleWord(int a1, unsigned short * a2, unsigned short a3, unsigned char a4, int a5)
{
  int v6; // edi
  uint16_t v7; // ax
  int v8; // eax
  uint8_t result; // al

  if ( !(2 * a5) ) /*0x5c6b67*/
    return a4; /*0x5c6bac*/
  v6 = 2 * a5; /*0x5c6b73*/
  do /*0x5c6ba5*/
  {
    v7 = *a2++; /*0x5c6b7e*/
    a1 += 2; /*0x5c6b90*/
    v8 = v7 - a3 - a4; /*0x5c6b93*/
    a3 = 0; /*0x5c6b95*/
    *(unsigned short *)(a1 - 2) = v8; /*0x5c6b97*/
    result = (((v8) >> 16) & 0xFF) & 1; /*0x5c6b9e*/
    --v6; /*0x5c6ba0*/
    a4 = (((v8) >> 16) & 0xFF) & 1; /*0x5c6ba1*/
  }
  while ( v6 ); /*0x5c6ba5*/
  return result; /*0x5c6ba8*/
}

// ==== BACKFILL 0x005C6D90  sub_5C6D90  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5C6D90(int a1, unsigned short * a2, short a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C6D90.json)
}

// ==== BACKFILL 0x005C7DB0  Math_Compute  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_5C7DB0(unsigned short * a1, unsigned short * a2, unsigned short a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // esi
  uint16_t v6; // ax
  unsigned int v7; // eax
  unsigned int v8; // eax

  v4 = a4; /*0x5c7db1*/
  v5 = 0; /*0x5c7db6*/
  if ( a4 <= 0 ) /*0x5c7dba*/
  {
    *a1 = *a1; /*0x5c7df4*/
  }
  else
  {
    do /*0x5c7de8*/
    {
      v6 = *a2++; /*0x5c7dcc*/
      v7 = v5 + (uint16_t)*a1 + a3 * v6; /*0x5c7dda*/
      *a1++ = v7; /*0x5c7ddc*/
      v8 = (((v7) >> 16) & 0xFFFF); /*0x5c7de2*/
      --v4; /*0x5c7de5*/
      v5 = v8; /*0x5c7de6*/
    }
    while ( v4 ); /*0x5c7de8*/
    *a1 += v8; /*0x5c7dea*/
  }
}

// ==== BACKFILL 0x005C8470  sub_5C8470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_5C8470()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C8470.json)
}

// ==== BACKFILL 0x005C8DD0  ValidateRSAKey_Helper  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_5C8DD0(unsigned int * a1, int a2, int a3, int a4)
{
  int v5; // ebp
  char result; // al

  v5 = a3; /*0x5c8dd9*/
  if ( a3 >= 32 * a4 ) /*0x5c8dea*/
    v5 = 32 * a4; /*0x5c8dec*/
  memset(a1, 0, 4 * a4); /*0x5c8dfc*/
  *a1 = 0; /*0x5c8e02*/
  (*(void (**)(int, unsigned int *, int))(*(unsigned int *)a2 + 8))(a2, a1, v5 / 8 + 1); /*0x5c8e0c*/
  result = ~(-1 << (v5 % 8)) & *((unsigned char *)a1 + v5 / 8); /*0x5c8e2a*/
  *((unsigned char *)a1 + v5 / 8) = result; /*0x5c8e2c*/
  return result; /*0x5c8e27*/
}

// ==== BACKFILL 0x005C93E0  MPBattleClass::MPMegawealthClass  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPMegawealthClass(const wchar_t ** a1, const wchar_t ** a2, const char ** a3, MPCooperative * aP4, char aP5, int aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C93E0.json)
}

// ==== BACKFILL 0x005C9420  sub_5C9420  cls=Megawealth  sig=csp  renamed_refs=0  residual=- ====
void sub_5C9420()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C9420.json)
}

// ==== BACKFILL 0x005C9700  Scenario::ResetDisplayArrays  cls=Scenario  sig=csp  renamed_refs=0  residual=- ====
void * Game::ResetDisplayArrays()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005C9700.json)
}

// ==== BACKFILL 0x005CA630  MPBattleClass::MPSiegeClass  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPSiegeClass(const wchar_t ** a1, MultiplayerSiege * aP2, const char ** a3, MultiplayerSiege * aP4, char aP5, MultiplayerSiege * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CA630.json)
}

// ==== BACKFILL 0x005CA670  sub_5CA670  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
void sub_5CA670()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CA670.json)
}

// ==== BACKFILL 0x005CA7E0  MultiplayerSiege::StubReturnFalse  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
char MultiplayerSiege::StubReturnFalse()
{

  return 0; /*0x5ca7e2*/

}

// ==== BACKFILL 0x005CA7F0  ScenarioClass::ClearFlag_0  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass_ClearFlag_0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CA7F0)
}

// ==== BACKFILL 0x005CA9B0  MultiplayerSiege::CheckStatus  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
char MultiplayerSiege::CheckStatus(int a1)
{

  MPCombatTeam *v1; // eax
  wchar_t **v2; // edi
  int MultiplayerSiege_field_08; // ecx
  int v4; // eax
  int MultiplayerSiege_field_10; // eax
  int MultiplayerSiege_field_04; // edx
  MPCombatTeam *v7; // eax
  wchar_t **v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  MPCombatTeam *v13; // eax
  wchar_t **v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // edx

  v1 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5ca9b4*/
  if ( v1 ) /*0x5ca9be*/
    v2 = ((MPCombatTeam*)v1)->Constructor(); /*0x5ca9c7*/
  else
    v2 = 0; /*0x5ca9cb*/
  MultiplayerSiege_field_08 = a1->MultiplayerSiege_field_08; /*0x5ca9d1*/
  if ( a1->MultiplayerSiege_field_10 < MultiplayerSiege_field_08 /*0x5ca9f6*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !MultiplayerSiege_field_08)
    && (v4 = *((unsigned int *)a1 + 5), v4 > 0)
    && (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
         a1,
         MultiplayerSiege_field_08 + v4,
         0) )
  {
    MultiplayerSiege_field_10 = (unsigned int)(a1->MultiplayerSiege_field_10);
    MultiplayerSiege_field_04 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(MultiplayerSiege_field_10 + 1);
    *(unsigned int *)(MultiplayerSiege_field_04 + 4 * MultiplayerSiege_field_10) = (unsigned int)(v2); /*0x5caa09*/
  }
  v7 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5caa0e*/
  if ( v7 ) /*0x5caa18*/
    v8 = ((MPCombatTeam *)(v7))->MPTeam(); /*0x5caa21*/
  else
    v8 = 0; /*0x5caa25*/
  v9 = a1->MultiplayerSiege_field_08; /*0x5caa27*/
  if ( a1->MultiplayerSiege_field_10 < v9 /*0x5caa4c*/
    || (BYTE1(a1->MultiplayerSiege_field_0C) || !v9)
    && (v10 = *((unsigned int *)a1 + 5), v10 > 0)
    && (*(uint8_t (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
         a1,
         v9 + v10,
         0) )
  {
    v11 = (unsigned int)(a1->MultiplayerSiege_field_10);
    v12 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(v11 + 1);
    *(unsigned int *)(v12 + 4 * v11) = (unsigned int)(v8); /*0x5caa5f*/
  }
  v13 = (MPCombatTeam *)__2_YAPAXI_Z(0xCu); /*0x5caa64*/
  if ( v13 ) /*0x5caa6e*/
    v14 = ((MPCombatTeam *)(v13))->Constructor2(); /*0x5caa77*/
  else
    v14 = 0; /*0x5caa7b*/
  v15 = a1->MultiplayerSiege_field_08; /*0x5caa7d*/
  if ( a1->MultiplayerSiege_field_10 < v15 /*0x5caaa7*/
    || ((LOBYTE(v16) = BYTE1(a1->MultiplayerSiege_field_0C), (unsigned char)v16) || !v15)
    && (v16 = *((unsigned int *)a1 + 5), v16 > 0)
    && (LOBYTE(v16) = (*(int (**)(MultiplayerSiege *, int, unsigned int))(a1->MultiplayerSiege_field_00 + 8))(
                        a1,
                        v15 + v16,
                        0),
        (unsigned char)v16) )
  {
    v16 = (unsigned int)(a1->MultiplayerSiege_field_10);
    v17 = (unsigned int)(a1->MultiplayerSiege_field_04);
    a1->MultiplayerSiege_field_10 = (unsigned int)(v16 + 1);
    *(unsigned int *)(v17 + 4 * v16) = (unsigned int)(v14); /*0x5caab5*/
  }
  return v16; /*0x5caab8*/

}

// ==== BACKFILL 0x005CAAC0  MultiplayerSiege::GetResult  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
char MultiplayerSiege::GetResult(unsigned int * ppv, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CAAC0)
}

// ==== BACKFILL 0x005CABD0  MultiplayerSiege::QueryInterface  cls=MultiplayerSiege  sig=csp  renamed_refs=0  residual=- ====
MultiplayerSiege * MultiplayerSiege::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CABD0)
}

// ==== BACKFILL 0x005CAE60  sub_5CAE60  cls=MultiplayerSiegeDefenderTeam  sig=csp  renamed_refs=0  residual=- ====
void sub_5CAE60()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAE60.json)
}

// ==== BACKFILL 0x005CAF00  sub_5CAF00  cls=MultiplayerSiegeAttackerTeam  sig=csp  renamed_refs=0  residual=- ====
void sub_5CAF00()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAF00.json)
}

// ==== BACKFILL 0x005CAF70  sub_5CAF70  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
DWORD sub_5CAF70()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CAF70.json)
}

// ==== BACKFILL 0x005CB3A0  MPBattleClass::MPUnholyAllianceClass  cls=MPBattleClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPBattleClass::MPUnholyAllianceClass(const wchar_t ** a1, UnholyAlliance * aP2, const char ** a3, UnholyAlliance * aP4, char aP5, UnholyAlliance * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CB3A0.json)
}

// ==== BACKFILL 0x005CB3E0  sub_5CB3E0  cls=UnholyAlliance  sig=csp  renamed_refs=0  residual=- ====
void sub_5CB3E0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CB3E0.json)
}

// ==== BACKFILL 0x005CB3F0  UnholyAlliance::Read  cls=UnholyAlliance  sig=csp  renamed_refs=0  residual=- ====
char UnholyAlliance::Read(void *a1, void *a2)
{

  stru_A8B250.__pad_0[8] = 1; /*0x5cb3f2*/
  return 1; /*0x5cb3f7*/

}

// ==== BACKFILL 0x005CB400  UnholyAlliance::Write  cls=UnholyAlliance  sig=csp  renamed_refs=0  residual=- ====
BOOL UnholyAlliance::Write(MPCooperative * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CB400)
}

// ==== BACKFILL 0x005CB430  UnholyAlliance::Seek  cls=UnholyAlliance  sig=csp  renamed_refs=0  residual=- ====
char UnholyAlliance::Seek(void *a1, void *a2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CB430)
}

// ==== BACKFILL 0x005CC550  ScenarioClass::DrawPlacementPreview  cls=MSOverlayAnim  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::DrawPlacementPreview(int a1, void* a2) {
}

// ==== BACKFILL 0x005CC690  Map_Process_5CC690  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_5CC690::Map_Process_5CC690() {

  this->ambientSoundController[1] = 0; /*0x5cc690*/

}

// ==== BACKFILL 0x005CC6C0  ScenarioClass::DrawSHPFrameToSurface  cls=MSOverlayAnim  sig=csp  renamed_refs=0  residual=- ====
void ScenarioClass::DrawSHPFrameToSurface(int a2) {
}

// ==== BACKFILL 0x005CC740  ScenarioClass::updateTiberiumGrowth  cls=MSOverlayAnim  sig=csp  renamed_refs=0  residual=- ====
bool ScenarioClass::updateTiberiumGrowth() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x5CC740.json */
}

// ==== BACKFILL 0x005CCA10  nullsub_189  cls=MSBinkAnim  sig=csp  renamed_refs=0  residual=- ====
void nullsub_189(int a1)
{
  ; /*0x5cca10*/
}

// ==== BACKFILL 0x005CD570  sub_5CD570  cls=MSAnim  sig=csp  renamed_refs=0  residual=- ====
int sub_5CD570(const wchar_t ** a2, int a3, int a4, int a5, int * a6, int a7, int a8, char a9, char a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CD570.json)
}

// ==== BACKFILL 0x005CE330  sub_5CE330  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5CE330(const wchar_t ** a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CE330.json)
}

// ==== BACKFILL 0x005CE3A0  sub_5CE3A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5CE3A0(int a2, int * a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CE3A0.json)
}

// ==== BACKFILL 0x005CE4A0  UI_Load  cls=MSAnim  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_5CE4A0::UI_Load(char* a2, int a3, char a4) {

  MSAnim *v5; // edi
  char **v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int v9; // ecx
  unsigned int *v10; // eax
  int v11; // ebp
  int v12; // edx
  int v13; // kr00_4
  int v14; // ecx
  int v15; // eax
  String v17; // [esp+10h] [ebp-94h] BYREF
  unsigned int v18[4]; // [esp+18h] [ebp-8Ch] BYREF
  CCFileClass v19; // [esp+28h] [ebp-7Ch] BYREF
  int v20[3]; // [esp+80h] [ebp-24h] BYREF
  int v21; // [esp+8Ch] [ebp-18h]
  unsigned char v22[16]; // [esp+94h] [ebp-10h] BYREF

  this->MSAnim_field_0x04 = 0; /*0x5ce4b1*/
  this->MSAnim_field_0x08 = 0; /*0x5ce4b4*/
  *((unsigned char *)this + 12) = 0; /*0x5ce4b7*/
  *((unsigned int *)this + 4) = TimerGetTicks(); /*0x5ce4d4*/
  *((unsigned int *)this + 6) = 0; /*0x5ce4d7*/
  *(unsigned int *)this->__pad_0 = &g_ptr_7EE8E8; /*0x5ce4da*/
  v5 = (MSAnim *)((char *)this + 44); /*0x5ce4e5*/
  *((unsigned int *)this + 7) = DSurface_Alternate; /*0x5ce4e8*/
  *((unsigned int *)this + 8) = a3; /*0x5ce4eb*/
  *((unsigned int *)this + 9) = 0; /*0x5ce4ee*/
  *((unsigned char *)this + 40) = a4; /*0x5ce4f1*/
  *((unsigned char *)this + 41) = 0; /*0x5ce4f4*/
  *((unsigned int *)this + 11) = 0; /*0x5ce4f7*/
  *((unsigned int *)this + 12) = 0; /*0x5ce4f9*/
  *((unsigned int *)this + 13) = 0; /*0x5ce4fc*/
  *((unsigned int *)this + 14) = 0; /*0x5ce4ff*/
  *(unsigned int *)this->__pad_0 = &g_ptr_7EEA2C; /*0x5ce505*/
  *((unsigned char *)this + 12) = 1; /*0x5ce50b*/
  if ( (uint8_t)String::NotEquals((String *)a2, 0) ) /*0x5ce50f*/
  {
    unknown_libname_73(&v17); /*0x5ce520*/
    String::Tokenize((String *)a2, 0, asc_826598, (void **)&v17); /*0x5ce532*/
    v6 = String::Concat2(&v17, (char **)&v17.m_3[1], g_Str_File__PCX); /*0x5ce545*/
    CCFileClass::Construct2(&v19, v6); /*0x5ce54f*/
    DeleteAndZero((ObjectClass *)&v17.m_3[1]); /*0x5ce558*/
    if ( (uint8_t)CCFileClass::Open(&v19, 0) ) /*0x5ce562*/
    {
      v7 = DecodeFrameSHP((int)&v19, 0, 0, 0); /*0x5ce577*/
      *((unsigned int *)this + 9) = v7; /*0x5ce57e*/
      if ( v7 ) /*0x5ce581*/
      {
        v8 = (unsigned int *)(*(int (**)(unsigned int *, unsigned int *))(*v7 + 120))(v7, v18); /*0x5ce58c*/
        *(unsigned int *)v5->__pad_0 = *v8; /*0x5ce593*/
        *((unsigned int *)this + 12) = v8[1]; /*0x5ce598*/
        *((unsigned int *)this + 13) = v8[2]; /*0x5ce59e*/
        v9 = *((unsigned int *)this + 7); /*0x5ce5a4*/
        *((unsigned int *)this + 14) = v8[3]; /*0x5ce5a7*/
        v10 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v9 + 120))(v9, v22); /*0x5ce5b4*/
        v11 = *((unsigned int *)this + 14); /*0x5ce5b9*/
        v18[0] = *v10; /*0x5ce5be*/
        v12 = *((unsigned int *)this + 13); /*0x5ce5c2*/
        v18[1] = v10[1]; /*0x5ce5c8*/
        v13 = v10[2] - v12; /*0x5ce5d5*/
        v14 = *((unsigned int *)this + 12); /*0x5ce5df*/
        v15 = v10[3] - v11; /*0x5ce5e2*/
        *(unsigned int *)v5->__pad_0 += v13 / 2; /*0x5ce5e4*/
        *((unsigned int *)this + 12) = v15 / 2 + v14; /*0x5ce5ed*/
      }
    }
    *(unsigned int *)v19.CDFileClass = &g_ptr_7E16B0; /*0x5ce5f7*/
    v21 = 0; /*0x5ce5ff*/
    Vector::Clear((int)v20); /*0x5ce606*/
    *(unsigned int *)v19.CDFileClass = &off_7E1668; /*0x5ce60f*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x5ce617*/
    DeleteAndZero((ObjectClass *)&v17); /*0x5ce620*/
  }
  return this->__pad_0; /*0x5ce627*/

}

// ==== BACKFILL 0x005CEB40  AbstractClass::COMStub_Return0_7  cls=MSAnim  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::COMStub_Return0_7()
{

  return 0; /*0x5ceb42*/

}

// ==== BACKFILL 0x005CEB50  MSOverlayAnim::StubReturnFalse  cls=MSAnim  sig=csp  renamed_refs=0  residual=- ====
void MSOverlayAnim::StubReturnFalse(int a1)
{

  ; /*0x5ceb50*/

}

// ==== BACKFILL 0x005CEB60  ScenarioClass::checkWinningConditions  cls=MSAnim  sig=csp  renamed_refs=0  residual=- ====
MSAnim * ScenarioClass::checkWinningConditions(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CEB60.json)
}

// ==== BACKFILL 0x005CEB80  MSOverlayAnim::QueryInterface  cls=MSShapeAnim  sig=csp  renamed_refs=0  residual=- ====
MSShapeAnim * MSOverlayAnim::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CEB80)
}

// ==== BACKFILL 0x005CEC20  ScenarioClass::processCrates  cls=MSOverlayAnim  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::processCrates(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x005CECB0  MSVQAnim::QueryInterface  cls=MSVQAnim  sig=csp  renamed_refs=0  residual=- ====
MSVQAnim * MSVQAnim::QueryInterface(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CECB0)
}

// ==== BACKFILL 0x005CED10  MSBitPrintAnim::QueryInterface  cls=MSBitPrintAnim  sig=csp  renamed_refs=0  residual=- ====
MSBitPrintAnim * MSBitPrintAnim::QueryInterface(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CED10)
}

// ==== BACKFILL 0x005CED70  MSPCXAnim::QueryInterface  cls=MSPCXAnim  sig=csp  renamed_refs=0  residual=- ====
MSPCXAnim * MSPCXAnim::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5CED70)
}

// ==== BACKFILL 0x005CEDD0  Map_Delete_5CEDD0  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char* Gap2Recv_5CEDD0::Map_Delete_5CEDD0() {

  int *p_DynamicVector_field_0x28; // ebp

  p_DynamicVector_field_0x28 = &this->DynamicVector_field_0x28; /*0x5cedd8*/
  *(unsigned int *)&this->DynamicVector_field_0x1[3] = 0; /*0x5ceddb*/
  this->DynamicVector_field_0x8 = 0; /*0x5cede0*/
  this->__pad_C[0] = 1; /*0x5cede3*/
  this->__pad_C[1] = 0; /*0x5cede7*/
  *(unsigned int *)this->__pad_0 = &g_ptr_7E3238; /*0x5cedea*/
  *(unsigned int *)this->__pad_14 = 10; /*0x5cedf0*/
  this->DynamicVector_field_0x10 = 0; /*0x5cedf7*/
  unknown_libname_73(&this->DynamicVector_field_0x28); /*0x5cedfa*/
  *((unsigned int *)this + 12) = 0; /*0x5cee09*/
  *((unsigned int *)this + 13) = 0; /*0x5cee0c*/
  *((unsigned char *)this + 56) = 1; /*0x5cee0f*/
  *((unsigned char *)this + 57) = 0; /*0x5cee13*/
  *((unsigned int *)this + 11) = &g_ptr_7E3238; /*0x5cee16*/
  *((unsigned int *)this + 16) = 10; /*0x5cee1c*/
  *((unsigned int *)this + 15) = 0; /*0x5cee1f*/
  *((unsigned int *)this + 18) = 0; /*0x5cee22*/
  *((unsigned int *)this + 19) = 0; /*0x5cee25*/
  *((unsigned char *)this + 80) = 1; /*0x5cee28*/
  *((unsigned char *)this + 81) = 0; /*0x5cee2c*/
  *((unsigned int *)this + 17) = &g_ptr_7E3238; /*0x5cee2f*/
  *((unsigned int *)this + 22) = 10; /*0x5cee36*/
  *((unsigned int *)this + 21) = 0; /*0x5cee39*/
  (*(void (**)(DynamicVector *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x5cee3e*/
  DeleteAndZero::Alt2((DeleteAndZero *)p_DynamicVector_field_0x28); /*0x5cee43*/
  (*(void (**)(DynamicVector *))(*((unsigned int *)this + 11) + 12))((unsigned int *)this + 1); /*0x5cee4c*/
  return this->__pad_0; /*0x5cee51*/

}

// ==== BACKFILL 0x005CF760  CampaignClass::DeleteAndZero  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::DeleteAndZero(const char **a2) {
    const char **v2; // ebx
    int v4; // esi
    int v6; // esi
    char *v7; // [esp+Ch] [ebp-4h] BYREF

    v2 = a2; /*0x5cf762*/
    if ( !(uint8_t)((String *)(String *)a2)->NotEquals(0) ) /*0x5cf76e*/
      return 0; /*0x5cf76e*/
    v4 = 0; /*0x5cf77a*/
    if ( *(int *)((char *)this + 16) <= 0 ) /*0x5cf77e +10 count*/
      return 0; /*0x5cf7db*/
    while ( 1 ) /*0x5cf785*/
    {
      ((String *)(String *)&v7)->AssignFromPtr(v2); /*0x5cf785*/
      ((String *)(String *)&v7)->ToLower(); /*0x5cf78e*/
      ((String *)&a2)->AssignFromPtr((const char **)(*((unsigned int *)(*(unsigned int *)((char *)this + 4)) + v4) + 4)); /*0x5cf7a1 items[v4]+4*/
      ((String *)(String *)&a2)->ToLower(); /*0x5cf7aa*/
      if ( (uint8_t)((String *)(String *)&v7)->Compare((const char **)&a2) ) /*0x5cf7b8*/
        break; /*0x5cf7b8*/
      DeleteAndZero((const char **)(char *)&a2); /*0x5cf7c5*/
      DeleteAndZero((const char **)(char *)&v7); /*0x5cf7ce*/
      if ( ++v4 >= *(int *)((char *)this + 16) ) /*0x5cf7d9 +10 count*/
        return 0; /*0x5cf7d9*/
    }
    v6 = *((unsigned int *)(*(unsigned int *)((char *)this + 4)) + v4); /*0x5cf7eb +4 items*/
    DeleteAndZero((const char **)(char *)&a2); /*0x5cf7ee*/
    DeleteAndZero((const char **)(char *)&v7); /*0x5cf7f7*/
    return v6; /*0x5cf7db*/
}

// ==== BACKFILL 0x005CF810  CampaignClass::Check  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::Check(int a2) {
    if ( *(int *)((char *)this + 16) > a2 ) /*0x5cf81e +10 count*/
      return *((unsigned int *)(*(unsigned int *)((char *)this + 4)) + a2); /*0x5cf828 +4 items*/
    else
      return 0; /*0x5cf820*/
}

// ==== BACKFILL 0x005CF830  Network_Load  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5CF830::Network_Load(ObjectClass * aP1) {

  return (*((int (**)(ObjectClass *, char *))this->vtable1 + 4))(this, &aP1); /*0x5cf83a*/

}

// ==== BACKFILL 0x005CF840  sub_5CF840  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
const char ** sub_5CF840(MapSelect * aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005CF840.json)
}
