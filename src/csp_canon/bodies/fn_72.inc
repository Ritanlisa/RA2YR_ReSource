// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00720020  AbstractClass::getCurrentWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getCurrentWeapon(int a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x720020.json */
}

// ==== BACKFILL 0x00720070  AbstractClass::selectWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::selectWeapon() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x720070.json */
}

// ==== BACKFILL 0x00720140  AbstractClass::fireWeapon  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::fireWeapon(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x720140.json */
}

// ==== BACKFILL 0x00720440  sub_720440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_720440()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00720440.json)
}

// ==== BACKFILL 0x00720960  sub_720960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_720960()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00720960.json)
}

// ==== BACKFILL 0x007209B0  AudioSettings::Check  cls=AudioSettings  sig=csp  renamed_refs=0  residual=- ====
int AudioSettings::Check(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x7209B0.json */
}

// ==== BACKFILL 0x00720E50  AudioSettings::ComputeTransform  cls=AudioSettings  sig=csp  renamed_refs=0  residual=- ====
int AudioSettings::ComputeTransform(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x720E50.json */
}

// ==== BACKFILL 0x00721010  SaveGame::VtableDispatch  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::VtableDispatch(int a2)
{

  int result; // eax

  result = (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (char *)&this->__pad_0[4], 4, 0); /*0x721023*/
  if ( result >= 0 ) /*0x721028*/
    return (*(int (**)(int, char *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, (char *)&this->__pad_0[8], 4, 0); /*0x721035*/
  return result; /*0x721038*/

}

// ==== BACKFILL 0x00721040  LoadGame_Start  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_721040(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x721040)
}

// ==== BACKFILL 0x00721140  RulesClass::IsTypeBuildable  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
bool RulesClass::IsTypeBuildable(int a1) {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x721140.json */
}

// ==== BACKFILL 0x00721DC0  TiberiumClass::Harvest  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::Harvest(void* a1) {
  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a1); /*0x721dc9*/
  Power::TimerProcess(((unsigned int *)this)[0]); /*0x721dd7*/
  Power::TimerProcess((int)((unsigned int *)this)[0]); /*0x721de5*/
  Power::TimerProcess(this->SpreadPercentage[1]); /*0x721df3*/
  Power::TimerProcess(this->Growth); /*0x721e01*/
  Power::TimerProcess(this->GrowthPercentage[0]); /*0x721e0f*/
  Power::TimerProcess(*(unsigned int *)this->__pad_E4); /*0x721e1d*/
// 0x4a1d50
  return Power::TimerProcess(*(unsigned int *)&this->__pad_E4[4]); /*0x721e30*/
}

// ==== BACKFILL 0x00721E40  TiberiumClass::ddtor  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00721E40.json)
}

// ==== BACKFILL 0x007220D0  TiberiumClass::SaveLoad_Prefix_0  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007220D0.json)
}

// ==== BACKFILL 0x00722A20  sub_722A20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_722A20()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00722A20.json)
}

// ==== BACKFILL 0x00722AB0  CellClass::ClearCrateStateForAll  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ClearCrateStateForAll() {
    int result; // eax
    int i; // ecx

    result = ((Cell *)this)->PosToIndex(); /*0x722ab0 G42.34 T11: instance form (Cell_e4.hpp:150 0-arg member)*/
    for ( i = 0; /*0x722abf*/
          i < ((unsigned int *)&g_BuildingLoadQueue_Array)[0];
          *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * i - 4) + 248) + result) = 0 )
    {
      ++i; /*0x722ac7*/
    }
    return result; /*0x722ae0*/
}

// ==== BACKFILL 0x00723510  sub_723510  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_723510()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00723510.json)
}

// ==== BACKFILL 0x007236E0  TiberiumClass::StubReturn296  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::StubReturn296()
{

  return 296; /*0x7236e5*/

}

// ==== BACKFILL 0x007236F0  TiberiumClass::StubReturn46  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TiberiumClass::StubReturn46()
{

  return 46; /*0x7236f5*/

}

// ==== BACKFILL 0x00723710  TiberiumClass::DrawOre  cls=TiberiumClass  sig=csp  renamed_refs=0  residual=- ====
void* TiberiumClass::DrawOre(int a2) {
  TiberiumClass::CleanupMembers((int)this); /*0x723713*/
  if ( (a2 & 1) != 0 ) /*0x72371d*/
    RA2_OPDEL(this); /*0x723720*/
  return this; /*0x72372a*/
}

// ==== BACKFILL 0x00723CA0  ScriptTypeClass::SetField  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
void * ScriptTypeClass::SetField(void *Buffer) {
    char *result; // eax
    void *v4; // ecx
    void *v5; // [esp+4h] [ebp-4h] BYREF

    result = (char *)Buffer; /*0x723ca1*/
    if ( Buffer ) /*0x723caa*/
    {
      sscanf((char *)Buffer, "%d,%d", &Buffer, &v5); /*0x723cbc*/
      result = (char *)Buffer; /*0x723cc1*/
      v4 = v5; /*0x723cc5*/
      *(unsigned int **)(char *)this = (unsigned int *)Buffer; /*0x723ccc +0 action*/
      *(unsigned int *)((char *)this + 4) = (unsigned int)v4; /*0x723cce +4 argument*/
    }
    return result; /*0x723cd1*/
}

// ==== BACKFILL 0x00723CE0  ScriptTypeClass::FormatToString  cls=ScriptTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ScriptTypeClass::FormatToString(void *Buffer) {
    if ( !Buffer ) /*0x723ce7*/
      return 0; /*0x723d0e*/
    sprintf((char *)Buffer, "%d,%d", *(unsigned int *)this, *(unsigned int *)((char *)this + 4)); /*0x723cf6 +0/+4*/
    return (int)strlen((char *)Buffer); /*0x723d08*/
}

// ==== BACKFILL 0x00724000  MainWindowProc_Helper_724000  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_724000::sub_724000(int a2)
{

  char *v3; // ecx
  int v4; // edx

  v3 = (char *)((unsigned char *)this + 564);
  *((unsigned int *)this + 1) = 0; /*0x724010*/
  *((unsigned int *)this + 2) = a2; /*0x724013*/
  *((unsigned char *)this + 12) = 0; /*0x724016*/
  *((unsigned int *)this + 138) = 1000; /*0x724019*/
  *((unsigned int *)this + 140) = 10000; /*0x724023*/
  *((unsigned int *)v3 + 1) = 0; /*0x72402d*/
  *((unsigned int *)v3 + 2) = 0; /*0x724030*/
  v3[12] = 1; /*0x724033*/
  v3[13] = 0; /*0x724037*/
  *(unsigned int *)v3 = (unsigned int)(&vt_DynamicVectorClass); /*0x72403a*/
  *((unsigned int *)v3 + 5) = 10; /*0x724040*/
  *((unsigned int *)v3 + 4) = 0; /*0x724047*/
  *((unsigned int *)this + 147) = 0; /*0x72404a*/
  *((unsigned int *)this + 148) = 0; /*0x724050*/
  *((unsigned int *)this + 149) = 0; /*0x724056*/
  *((unsigned char *)this + 600) = 0; /*0x72405c*/
  *((unsigned int *)this + 151) = 0; /*0x724062*/
  v4 = *(unsigned int *)v3; /*0x724068*/
  *(unsigned int *)this = (unsigned int)(&vt_ToolTipManager); /*0x72406a*/
  (*(void (**)(char *))(v4 + 12))(v3); /*0x724070*/
  __3_YAXPAX_Z(*((void **)this + 147)); /*0x72407a*/
  *((unsigned int *)this + 147) = 0; /*0x724082*/
  *((unsigned int *)this + 148) = 0; /*0x724088*/
  *((unsigned int *)this + 149) = 0; /*0x72408e*/
  *((unsigned char *)this + 600) = 0; /*0x724094*/
  *((unsigned int *)this + 151) = 0; /*0x72409a*/
  return (char *)(this); /*0x7240a2*/

}

// ==== BACKFILL 0x00724520  SidebarClass::initializeStrip  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::initializeStrip(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x724520.json */
}

// ==== BACKFILL 0x00724530  SidebarClass::updateStripVisibility  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::updateStripVisibility() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x724530.json */
}

// ==== BACKFILL 0x00724540  SidebarClass::updateStripPosition  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
int SidebarClass::updateStripPosition() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x724540.json */
}

// ==== BACKFILL 0x00724550  sub_724550  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_724550()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00724550.json)
}

// ==== BACKFILL 0x00724560  sub_724560  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_724560(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00724560.json)
}

// ==== BACKFILL 0x00724570  sub_724570  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_724570()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00724570.json)
}

// ==== BACKFILL 0x00724A30  sub_724A30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_724A30(int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00724A30.json)
}

// ==== BACKFILL 0x00724AA0  ToolTipManager::addRef  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
char ToolTipManager::addRef(int a1)
{

  return 1; /*0x724aa2*/

}

// ==== BACKFILL 0x00724AB0  ToolTipManager::release  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
int ToolTipManager::release(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x724AB0.json */
}

// ==== BACKFILL 0x00724B80  ToolTipManager::ddtor  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
int ToolTipManager::ddtor(char a2)
{

  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ((ToolTipClass *)((ToolTipClass *)this))->initString(); /*0x724b8b*/
  result = this->Position[0]; /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (**)(ToolTipManager *, int *))(*(unsigned int *)&this->IsVisible + 16))( /*0x724b9f*/
             this,
             (int *)&this->DisplayTimer[1]);
  return result; /*0x724ba2*/

}

// ==== BACKFILL 0x00724BB0  ToolTipManager::read  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
void ToolTipManager::read(int a1)
{

  ((gamemd::Debug *)this)->Log(); /*0x724bbd*/

}

// ==== BACKFILL 0x00724BD0  ToolTipManager::stubReturnFalse  cls=ToolTipManager  sig=csp  renamed_refs=0  residual=- ====
int ToolTipManager::stubReturnFalse(int a1)
{

  return 0; /*0x724bd2*/

}

// ==== BACKFILL 0x00724F90  ??0Iostream_init_QAE_XZ_6  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * Iostream_init::__0Iostream_init_QAE_XZ_6()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00724F90.json)
}

// ==== BACKFILL 0x00724FC0  CommandClass::BinarySearchAction  cls=CommandClass  sig=csp  renamed_refs=0  residual=- ====
int CommandClass::BinarySearchAction(unsigned int *a2) {
    int result; // eax
    unsigned int v4; // edi G42.33 b3 (cache: _DWORD v4; 类载体抽象不可实例化)
    unsigned int v5; // ebx
    int v6; // ecx
    unsigned int v7; // esi

    result = *((unsigned int *)this + 1); /*0x724fc3*/
    if ( result ) /*0x724fc8*/
    {
      if ( !*((unsigned char *)this + 12) ) /*0x724fce*/
      {
        qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x724fe0*/
        *((unsigned int *)this + 4) = 0; /*0x724fe8*/
        *((unsigned char *)this + 12) = 1; /*0x724fef*/
      }
      v4 = *(unsigned int *)this; /*0x724ff9*/
      v5 = *a2; /*0x724ffb*/
      v6 = *((unsigned int *)this + 1); /*0x724ffd*/
      if ( v6 <= 0 ) /*0x725002*/
        return 0; /*0x72502e*/
      while ( 1 ) /*0x72500b*/
      {
        v7 = *(unsigned int *)(v4 + 8 * (v6 / 2)); /*0x72500b*/
        if ( v7 <= v5 ) /*0x725013*/
        {
          if ( v7 == v5 ) /*0x725019*/
            return v4 + 8 * (v6 / 2); /*0x725033*/
          v4 += 8 * (v6 / 2) + 8; /*0x72501b*/
          v6 += -1 - v6 / 2; /*0x725023*/
        }
        else
        {
          v6 /= 2; /*0x725015*/
        }
        if ( v6 <= 0 ) /*0x725027*/
          return 0; /*0x725027*/
      }
    }
    return result; /*0x724fca*/
}

// ==== BACKFILL 0x00726690  TriggerClass::FireAction  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::FireAction(int a2, int a3) {
    int result; // eax

    if ( this->buildingType == (TriggerTypeClass *)a2 ) /*0x726699*/
      this->buildingType = 0; /*0x72669b*/
    result = (int)this->nextTrigger; /*0x7266a2*/
    if ( result == a2 ) /*0x7266a7*/
    {
      result = *(unsigned int *)(result + 40); /*0x7266a9*/
      this->nextTrigger = (TriggerClass *)result; /*0x7266ac*/
    }
    if ( this->house == (HouseClass *)a2 ) /*0x7266b2*/
      this->house = 0; /*0x7266b4*/
    return result; /*0x7266bb*/
}

// ==== BACKFILL 0x007266C0  sub_7266C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_7266C0(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007266C0.json)
}

// ==== BACKFILL 0x00726720  TeamClass::AddToBuildQueue  cls=TeamClass  sig=csp  renamed_refs=0  residual=- ====
int TeamClass::AddToBuildQueue() {
    int result; // eax

    IDA_LOBYTE(this->target) = 1; /*0x726723*/
    result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x726727*/
    if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x726760*/
      || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
      && g_BuildingLoadQueue_Array.UnitExitSound > 0
      && (result = (*(int (__thiscall **)(int *, int, unsigned int))((int *)&g_BuildingLoadQueue_Array.ToTile + 8))(
                     (int *)&g_BuildingLoadQueue_Array.ToTile,
                     *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                     0),
          (unsigned char)result) )
    {
      result = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x726768*/
      *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = (unsigned int)this; /*0x726777*/
    }
    return result; /*0x72677a*/
}

// ==== BACKFILL 0x00726780  sub_726780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_726780()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00726780.json)
}

// ==== BACKFILL 0x00726790  TriggerClass::FireTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::FireTrigger(void *a2) {
    int v3; // eax
    TriggerClass *nextTrigger; // eax
    int v5; // eax
    int v6; // ecx
    int v7; // edx
    int v8; // eax

    ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x726799*/
    v3 = (*((int (__stdcall **)(void **))*(void **)((char *)this->buildingType + 4) + 4))((void **)((char *)this->buildingType + 4)); /*0x7267a7 member(+4) vt+0x10*/
    Power::TimerProcess(v3); /*0x7267ad*/
    nextTrigger = this->nextTrigger; /*0x7267b2*/
    if ( nextTrigger ) /*0x7267b7*/
    {
      v5 = (*((int (__stdcall **)(void **))*(void **)((char *)nextTrigger + 4) + 4))((void **)((char *)nextTrigger + 4)); /*0x7267c0 member(+4) vt+0x10*/
      nextTrigger = (TriggerClass *)Power::TimerProcess(v5); /*0x7267c6*/
    }
    IDA_LOBYTE(nextTrigger) = this->destroyed; /*0x7267cb*/
    ((Power *)a2)->FlagProcess((int)nextTrigger); /*0x7267d1*/
    IDA_LOBYTE(v6) = this->enabled; /*0x7267d6*/
    ((Power *)a2)->FlagProcess(v6); /*0x7267dc*/
    v7 = *(int *)&this->timer; /*0x7267e1 timer[0]*/
    v8 = *((int *)&this->timer + 2); /*0x7267e4 timer[2]*/
    if ( v7 != -1 ) /*0x7267ea*/
    {
      if ( *(unsigned int *)&(&stru_A8EB00)[416] - v7 >= v8 ) /*0x7267f6*/
        v8 = 0; /*0x7267fc*/
      else
        v8 -= *(unsigned int *)&(&stru_A8EB00)[416] - v7; /*0x7267f8*/
    }
    Power::TimerProcess(v8); /*0x726801*/
    return Power::TimerProcess(this->occuredEvents); /*0x726811*/
}

// ==== BACKFILL 0x00726820  TriggerClass::ddtor  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x726826*/
    return -2147467261; /*0x726828*/
  *a2 = -1070787184; /*0x726836*/
  a2[1] = 298977834; /*0x72683e*/
  a2[2] = 1610655660; /*0x726847*/
  a2[3] = unk_7E97EC; /*0x726850*/
  return 0; /*0x72682d*/

}

// ==== BACKFILL 0x00726860  TriggerClass::LoadTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::LoadTrigger(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x72686b*/
  if ( result >= 0 ) /*0x726872*/
  {
    if ( aP0 ) /*0x726876*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x72687f*/
      aP0->vtable1 = &vt_TriggerClass; /*0x726884*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x72688a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x726891*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TriggerClass); /*0x726898*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x7268a8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->nextTrigger); /*0x7268b6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->house); /*0x7268c4*/
    return 0; /*0x7268c9*/
  }
  return result; /*0x7268cb*/

}

// ==== BACKFILL 0x007268D0  TriggerClass::SaveTrigger  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::SaveTrigger(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x7268df*/
  if ( result >= 0 ) /*0x7268e6*/
    return 0; /*0x7268e8*/
  return result; /*0x7268ea*/

}

// ==== BACKFILL 0x007268F0  TActionClass::executeAirstrikeAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
int TActionClass::executeAirstrikeAction()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7268F0)
}

// ==== BACKFILL 0x00726900  TActionClass::executeDetonateAction  cls=TActionClass  sig=csp  renamed_refs=0  residual=- ====
void TActionClass::executeDetonateAction()
{

  LOBYTE(this->TActionClass_field_44) = 0; /*0x726900*/

}

// ==== BACKFILL 0x00726920  sub_726920  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_726920(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00726920.json)
}

// ==== BACKFILL 0x00726930  TriggerClass::StubReturn72  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::StubReturn72()
{

  return 72; /*0x726935*/

}

// ==== BACKFILL 0x00726940  TriggerClass::StubReturn38  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::StubReturn38()
{

  return 38; /*0x726945*/

}

// ==== BACKFILL 0x00726C80  TriggerTypeClass::Construct  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
void * TriggerTypeClass::Construct(void *Source) {
    int v3; // eax
    int v4; // eax
    int v5; // eax

    ((AbstractTypeClass *)(int *)this)->Constructor((char *)Source); /*0x726c89*/
    this->idxArray = -1; /*0x726c92 载体名*/
    this->difficulty[0] = 1; /*0x726c9c*/
    this->difficulty[1] = 1; /*0x726ca2*/
    this->difficulty[2] = 1; /*0x726ca8*/
    this->enabled = 1; /*0x726cae*/
    this->mustTransfer = 0; /*0x726cb4*/
    this->house = 0; /*0x726cba*/
    this->nextTrigger = 0; /*0x726cc0*/
    this->firstEvent = 0; /*0x726cc6*/
    this->firstAction = 0; /*0x726ccc*/
    *(void **)(char *)this = 0; /*0x726cd2 vfptr0*/
    *(void **)((char *)this + 4) = 0; /*0x726cd8 vfptr1*/
    *(void **)((char *)this + 8) = 0; /*0x726cdf vfptr2*/
    *(void **)((char *)this + 12) = 0; /*0x726ce6 vfptr3*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.align_E24) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))((int *)g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2 + 8))(
           (int *)g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = (unsigned int)this; /*0x726d3d*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
      || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           (int *)&g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = (unsigned int)this; /*0x726d90*/
    }
    this->idxArray = *(unsigned int *)FootClass_Array; /*0x726d99*/
    if ( *(int *)FootClass_Array < (&FootClass_Array)[1] /*0x726dd0*/
      || (IDA_BYTE1((&FootClass_Array)[2]) || !(&FootClass_Array)[1])
      && *(int *)&FootClass_Array > 0
      && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(FootClass_Array + 8))(
           &FootClass_Array,
           (&FootClass_Array)[1] + *(unsigned int *)&FootClass_Array,
           0) )
    {
      v5 = (*(unsigned int *)FootClass_Array)++; /*0x726ddd*/
      *(unsigned int *)((&FootClass_Array)[0] + 4 * v5) = (unsigned int)this; /*0x726dec*/
    }
    return this; /*0x726df1*/
}

// ==== BACKFILL 0x00726E00  TriggerClass::ProcessEvents  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::ProcessEvents() {
    int v2; // eax
    unsigned int *v3; // ecx
    unsigned int *v4; // esi
    unsigned int *v5; // ecx
    unsigned int *v6; // esi
    int v7; // eax
    int v8; // eax
    AbstractClass *v10; // [esp+10h] [ebp-4h] BYREF

    *(void **)(char *)this = 0; /*0x726e06 vfptr0*/
    *(void **)((char *)this + 4) = 0; /*0x726e0c vfptr1*/
    *(void **)((char *)this + 8) = 0; /*0x726e13 vfptr2*/
    *(void **)((char *)this + 12) = 0; /*0x726e1a vfptr3*/
    ((AbstractClass *)this)->AnnounceExpiredPointer(1, 0); /*0x726e21*/
    v10 = this; /*0x726e36*/
    v2 = (*(int (__thiscall **)(int *, AbstractClass **))((int *)&FootClass_Array + 16))((int *)&FootClass_Array, &v10); /*0x726e3a*/
    if ( v2 != -1 && v2 < *(int *)FootClass_Array ) /*0x726e4a*/
    {
      --*(unsigned int *)FootClass_Array; /*0x726e4f*/
      for ( ; /*0x726e55*/
            v2 < *(int *)FootClass_Array;
            *(unsigned int *)((&FootClass_Array)[0] + 4 * v2 - 4) = *(unsigned int *)((&FootClass_Array)[0] + 4 * v2) )
      {
        ++v2; /*0x726e5d*/
      }
    }
    v3 = (unsigned int *)*((unsigned int *)this + 44); /*0x726e6f*/
    if ( v3 ) /*0x726e78*/
    {
      do /*0x726e8c*/
      {
        v4 = (unsigned int *)v3[10]; /*0x726e7a*/
        if ( v3 ) /*0x726e7f*/
          (*(void (__thiscall **)(unsigned int *, int))(*v3 + 32))(v3, 1); /*0x726e85*/
        v3 = v4; /*0x726e8a*/
      }
      while ( v4 ); /*0x726e8c*/
    }
    v5 = (unsigned int *)*((unsigned int *)this + 43); /*0x726e8e*/
    if ( v5 ) /*0x726e96*/
    {
      do /*0x726eaa*/
      {
        v6 = (unsigned int *)v5[10]; /*0x726e98*/
        if ( v5 ) /*0x726e9d*/
          (*(void (__thiscall **)(unsigned int *, int))(*v5 + 32))(v5, 1); /*0x726ea3*/
        v5 = v6; /*0x726ea8*/
      }
      while ( v6 ); /*0x726eaa*/
    }
    v10 = this; /*0x726ebc*/
    v7 = (*(int (__thiscall **)(int *, AbstractClass **))((int *)&g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x726ec0*/
           (int *)&g_BuildingLoadQueue_Array.LightVisibility,
           &v10);
    if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x726ed1*/
    {
      --g_BuildingLoadQueue_Array.LightBlueTint; /*0x726ed6*/
      for ( ; /*0x726edc*/
            v7 < g_BuildingLoadQueue_Array.LightBlueTint;
            *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                           + 4 * v7) )
      {
        ++v7; /*0x726ee4*/
      }
    }
    v10 = this; /*0x726f06*/
    v8 = (*(int (__thiscall **)(int *, AbstractClass **))((int *)g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2 + 16))( /*0x726f0a*/
           (int *)g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           &v10);
    if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x726f1a*/
    {
      --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x726f1f*/
      for ( ; /*0x726f25*/
            v8 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
            *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v8) )
      {
        ++v8; /*0x726f2d*/
      }
    }
    return (((AbstractTypeClass *)this)->~AbstractTypeClass(), 0); /*0x726f46*/
}

// ==== BACKFILL 0x00726FCE  ?do_always_noconv_codecvt_base_std__MBE_NXZ_20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_20()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x726FCE)
}

// ==== BACKFILL 0x00727010  HouseClass::FindType2728  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FindType2728(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00727010.json)
}

// ==== BACKFILL 0x00727090  TriggerTypeClass::GetAction  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetAction(int a2, int a3) {
    TriggerTypeClass *NextTrigger; // eax
    TActionClass *i; // esi
    TActionClass *FirstAction; // eax
    TEventClass *j; // esi
    int result; // eax

    NextTrigger = this->nextTrigger; /*0x727098*/
    if ( NextTrigger && NextTrigger == (TriggerTypeClass *)a2 ) /*0x7270a4*/
      this->nextTrigger = NextTrigger->nextTrigger; /*0x7270ac*/
    for ( i = this->firstAction; i; i = (TActionClass *)i->TActionClass_field_28 ) /*0x7270bb*/
      (*((void (__thiscall **)(TActionClass *, int, int))*(void ***)i + 10))(i, a2, 1); /*0x7270c4*/
    FirstAction = this->firstAction; /*0x7270ce*/
    if ( FirstAction == (TActionClass *)a2 ) /*0x7270d6*/
      this->firstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7270db*/
    for ( j = this->firstEvent; j; j = (TEventClass *)j->TEventClass_field_28 ) /*0x7270e9*/
      (*((void (__thiscall **)(TEventClass *, int, int))*(void ***)j + 10))(j, a2, 1); /*0x7270f2*/
    result = (int)this->firstEvent; /*0x7270fc*/
    if ( result == a2 ) /*0x727105*/
    {
      result = *(unsigned int *)(result + 40); /*0x727107*/
      this->firstEvent = (TEventClass *)result; /*0x72710a*/
    }
    return result; /*0x727110*/
}

// ==== BACKFILL 0x00727190  sub_727190  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_727190()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00727190.json)
}

// ==== BACKFILL 0x007276A0  TriggerTypeClass::GetParameter  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetParameter(void *a2) {
    TriggerTypeClass *NextTrigger; // eax
    const char *pad_24; // esi
    HouseTypeClass *House; // eax
    const char *id; // eax
    int *v7; // esi
    TEventClass *FirstEvent; // eax
    int i; // ecx
    TEventClass *v10; // ebp
    TActionClass *FirstAction; // eax
    int j; // ecx
    TActionClass *v13; // ebx
    int *v15; // [esp+10h] [ebp-204h]
    char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

    NextTrigger = this->nextTrigger; /*0x7276ab*/
    pad_24 = (const char *)((char *)NextTrigger + 36); /*0x7276b4 +0x24 name*/
    if ( !NextTrigger ) /*0x7276b7*/
      pad_24 = g_Str__none_; /*0x7276b9*/
    House = this->house; /*0x7276be 载体名*/
    if ( House ) /*0x7276c6*/
      id = (const char *)House->id; /*0x7276c8*/
    else
      id = g_Str__none_; /*0x7276cd*/
    sprintf( /*0x727728*/
      Buffer,
      "%s,%s,%s,%d,%d,%d,%d,%d",
      id,
      pad_24,
      (char *)this + 36, /*0x727728 name=+0x24*/
      this->enabled == 0,
      this->difficulty[0] != 0,
      this->difficulty[1] != 0,
      this->difficulty[2] != 0,
      this->mustTransfer != 0);
    v7 = (int *)((char *)this + 36); /*0x72773a +0x24 name*/
    v15 = (int *)((char *)this + 36); /*0x727747 +0x24 name*/
    ((INIClass *)a2)->SetString((void *)(uint8_t *)aTriggers, (void *)(char *)((char *)this + 36), (void *)Buffer); /*0x72774b*/
    FirstEvent = this->firstEvent; /*0x727750*/
    for ( i = 0; FirstEvent; ++i ) /*0x72775a*/
      FirstEvent = (TEventClass *)FirstEvent->TEventClass_field_28; /*0x72775c*/
    sprintf(Buffer, "%d", i); /*0x72776f*/
    v10 = this->firstEvent; /*0x727774*/
    if ( v10 ) /*0x72777f*/
    {
      do /*0x7277c0*/
      {
        strcat(Buffer, Str_Sep); /*0x7277a6*/
        ((TEventClass *)v10)->PrepareSaveToINI(); /*0x7277b6*/
        v10 = (TEventClass *)v10->TEventClass_field_28; /*0x7277bb*/
      }
      while ( v10 ); /*0x7277c0*/
      v7 = (int *)((char *)this + 36); /*0x7277c2 +0x24 name*/
    }
    ((INIClass *)a2)->SetString((void *)(uint8_t *)aEvents, (void *)(char *)v7, (void *)Buffer); /*0x7277da*/
    FirstAction = this->firstAction; /*0x7277df*/
    for ( j = 0; FirstAction; ++j ) /*0x7277e9*/
      FirstAction = (TActionClass *)FirstAction->TActionClass_field_28; /*0x7277eb*/
    sprintf(Buffer, "%d", j); /*0x7277fe*/
    v13 = this->firstAction; /*0x727803*/
    if ( v13 ) /*0x72780e*/
    {
      do /*0x72784f*/
      {
        strcat(Buffer, Str_Sep); /*0x727835*/
        ((ScriptAction *)v13)->Serialize(Buffer); /*0x727845*/
        v13 = (TActionClass *)v13->TActionClass_field_28; /*0x72784a*/
      }
      while ( v13 ); /*0x72784f*/
      v7 = v15; /*0x727851*/
    }
    ((INIClass *)a2)->SetString((void *)(uint8_t *)aActions, (void *)(char *)v7, (void *)Buffer); /*0x727869*/
    return 1; /*0x72786e*/
}

// ==== BACKFILL 0x00727B30  TriggerTypeClass::PowerDrainUpdate  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::PowerDrainUpdate(void *a2) {
    int v3; // eax
    TriggerTypeClass *NextTrigger; // eax
    int v5; // eax
    int result; // eax
    int v7; // eax
    TActionClass *FirstAction; // esi
    int v9; // eax

    ((AbstractTypeClass *)(AbstractTypeClass *)this)->ProcessPower((int)a2); /*0x727b39*/
    v3 = (*((int (__stdcall **)(void **))*(void **)((char *)this->house + 4) + 4))((void **)((char *)this->house + 4)); /*0x727b4a member(+4) vt+0x10*/
    Power::TimerProcess(v3); /*0x727b50*/
    NextTrigger = this->nextTrigger; /*0x727b55*/
    if ( NextTrigger ) /*0x727b5d*/
    {
      v5 = (*((int (__stdcall **)(void **))*(void **)((char *)NextTrigger + 4) + 4))((void **)((char *)NextTrigger + 4)); /*0x727b66 member(+4) vt+0x10*/
      Power::TimerProcess(v5); /*0x727b6c*/
    }
    result = (int)this->firstEvent; /*0x727b71*/
    if ( result ) /*0x727b79*/
    {
      v7 = (*(int (__stdcall **)(int))(*(unsigned int *)(result + 4) + 16))(result + 4); /*0x727b82*/
      result = Power::TimerProcess(v7); /*0x727b88*/
    }
    FirstAction = this->firstAction; /*0x727b8d*/
    if ( FirstAction ) /*0x727b95*/
    {
      v9 = (*((int (__stdcall **)(void **))*(void **)((char *)FirstAction + 4) + 4))((void **)((char *)FirstAction + 4)); /*0x727b9e member(+4) vt+0x10*/
      return Power::TimerProcess(v9); /*0x727ba4*/
    }
    return result; /*0x727ba9*/
}

// ==== BACKFILL 0x00727BB0  TriggerTypeClass::GetClassIdentifier  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00727BB0.json)
}

// ==== BACKFILL 0x00727BF0  TriggerTypeClass::LoadTypeData  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::LoadTypeData(AbstractTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00727BF0.json)
}

// ==== BACKFILL 0x00727C80  TriggerTypeClass::Write  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::Write(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00727C80.json)
}

// ==== BACKFILL 0x00727CA0  TriggerTypeClass::GetTypeIdentifier  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetTypeIdentifier()
{

  return 39; /*0x727ca5*/

}

// ==== BACKFILL 0x00727CB0  TriggerTypeClass::GetObjectSize  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetObjectSize()
{

  return 180; /*0x727cb5*/

}

// ==== BACKFILL 0x00727CC0  TriggerTypeClass::GetAuxField  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetAuxField() {
    return this->idxArray; /*0x727cc6*/
}

// ==== BACKFILL 0x00727CD0  TextRenderer::Destructor  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
TriggerTypeClass * TextRenderer::Destructor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x727CD0)
}

// ==== BACKFILL 0x00727CF0  String::Trim  cls=String  sig=csp  renamed_refs=0  residual=- ====
char * String::Trim()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x727CF0)
}

// ==== BACKFILL 0x00727D60  WideString::Trim  cls=WideString  sig=csp  renamed_refs=0  residual=- ====
int WideString::Trim(wchar_t * Source)
{

  WideString * v2;
  WideString *v3; // esi
  int v4; // eax
  WideString *v5; // ecx

  if ( Source ) /*0x727d66*/
  {
    v2 = (gamemd::WideString *)(*(unsigned short *)Source);
    v3 = (gamemd::WideString *)(Source);
    if ( *(unsigned short *)Source ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > (gamemd::WideString *)(0x20u) ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = (gamemd::WideString *)(*(unsigned short *)&v3[2]); /*0x727d78*/
        v3 += 2; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != (gamemd::WideString *)(Source) ) /*0x727d86*/
        wcscpy((wchar_t *)Source, (const wchar_t *)v3); /*0x727d8a*/
    }
    v4 = wcslen((const wchar_t *)Source) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = (gamemd::WideString *)(Source + 2 * v4);
      do /*0x727db8*/
      {
        if ( !*(unsigned short *)v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *(unsigned short *)v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *(unsigned short *)v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        v5 -= 2; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return (int)((wchar_t *)Source); /*0x727dbc*/

}

// ==== BACKFILL 0x007281A0  TubeClass::LoadState  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::LoadState(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x7281ab*/
  if ( result >= 0 ) /*0x7281b2*/
  {
    if ( aP0 ) /*0x7281b6*/
    {
      ((AbstractClass *)((AbstractClass *)aP0))->Constructor(); /*0x7281ba*/
      aP0->vtable1 = &vt_TubeClass; /*0x7281bf*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TubeClass); /*0x7281c5*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TubeClass); /*0x7281cc*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&vt_TubeClass); /*0x7281d3*/
    }
    return 0; /*0x7281da*/
  }
  return result; /*0x7281dc*/

}

// ==== BACKFILL 0x007281E0  TubeClass::SaveState  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x7281ef*/
  if ( result >= 0 ) /*0x7281f6*/
    return 0; /*0x7281f8*/
  return result; /*0x7281fa*/

}

// ==== BACKFILL 0x007283C0  ScenarioClass::LoadWaypoints  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::LoadWaypoints() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x7283C0.json */
}

// ==== BACKFILL 0x00728540  sub_728540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_728540(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728540.json)
}

// ==== BACKFILL 0x00728630  TubeClass::PowerDrainUpdate  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::PowerDrainUpdate(void* a1) {
  int *p_nextObject; // ebx
  int v4; // ebp

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x72863b*/
  Checksummer::Add_WORD((Checksummer *)a1, ((unsigned int *)this)[0]); /*0x728647*/
  Checksummer::Add_WORD((Checksummer *)a1, IDA_HIWORD(((unsigned int *)this)[0])); /*0x728653*/
  Checksummer::Add_WORD((Checksummer *)a1, ((unsigned int *)this)[0]); /*0x72865f*/
  Checksummer::Add_WORD((Checksummer *)a1, IDA_HIWORD(((unsigned int *)this)[0])); /*0x72866b*/
  Power::TimerProcess(((unsigned int *)this)[0]); /*0x728676*/
  p_nextObject = (int *)&((unsigned int *)this)[0]; /*0x72867b*/
  v4 = 100; /*0x72867e*/
  do /*0x728691*/
  {
    Power::TimerProcess(*p_nextObject++); /*0x728688*/
    --v4; /*0x728690*/
  }
  while ( v4 ); /*0x728691*/
// 0x4a1d50
  return Power::TimerProcess(this->estimatedHealth); /*0x7286a1*/
}

// ==== BACKFILL 0x007286B0  TubeClass::StubReturn452  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::StubReturn452()
{

  return 452; /*0x7286b5*/

}

// ==== BACKFILL 0x007286C0  TubeClass::StubReturn53  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::StubReturn53()
{

  return 53; /*0x7286c5*/

}

// ==== BACKFILL 0x007286D0  TubeClass::ddtor  cls=TubeClass  sig=csp  renamed_refs=0  residual=- ====
int TubeClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x7286d6*/
    return -2147467261; /*0x7286d8*/
  *a2 = 189572124; /*0x7286e6*/
  a2[1] = 298955687; /*0x7286ee*/
  a2[2] = 1610635188; /*0x7286f7*/
  a2[3] = unk_7E975C; /*0x728700*/
  return 0; /*0x7286dd*/

}

// ==== BACKFILL 0x00728A00  SmallFunc_728A00  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_728A00::sub_728A00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x728A00)
}

// ==== BACKFILL 0x00728A50  JumpjetLocomotionClass::ShortFunc_728A50  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ShortFunc_728A50(int a1)
{

  return ((unsigned int *)a1)[0] != 0; /*0x728a5c*/

}

// ==== BACKFILL 0x00728A60  JumpjetLocomotionClass::StubReturnZero_20  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::StubReturnZero_20(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728A60.json)
}

// ==== BACKFILL 0x00728A90  JumpjetLocomotionClass::GetCoordinateConditional_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728A90.json)
}

// ==== BACKFILL 0x00728AF0  JumpjetLocomotionClass::SyncMovementPosition  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SyncMovementPosition(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728AF0.json)
}

// ==== BACKFILL 0x007291D0  JumpjetLocomotionClass::StubReturnZero_21  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_21(int a1, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007291D0.json)
}

// ==== BACKFILL 0x007294E0  sub_7294E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7294E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007294E0.json)
}

// ==== BACKFILL 0x0072A020  JumpjetLocomotionClass::CheckStateWithOverride  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A020.json)
}

// ==== BACKFILL 0x0072A060  JumpjetLocomotionClass::IsStateInRange  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::IsStateInRange(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A060.json)
}

// ==== BACKFILL 0x0072A090  JumpjetLocomotionClass::ConvertCoordToCell_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ConvertCoordToCell_3(int a2, void * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A090.json)
}

// ==== BACKFILL 0x0072A0E0  JumpjetLocomotionClass::UpdateFacingDirection_4  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_4(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72A0E0)
}

// ==== BACKFILL 0x0072A110  TunnelLocomotionClass::ddtor  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x72a116*/
    return -2147467261; /*0x72a118*/
  *a2 = 1247291203; /*0x72a126*/
  a2[1] = 298948665; /*0x72a12e*/
  a2[2] = -1610610249; /*0x72a137*/
  a2[3] = unk_7E9A5C; /*0x72a140*/
  return 0; /*0x72a11d*/

}

// ==== BACKFILL 0x0072A150  TunnelLocomotionClass::BeginMove  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::BeginMove(int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72A150)
}

// ==== BACKFILL 0x0072A1A0  JumpjetLocomotionClass::ShortFunc_72A1A0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ShortFunc_72A1A0(int a1)
{

  return ((unsigned int *)a1)[0] != 4 ? 2 : 0;

}

// ==== BACKFILL 0x0072A1C0  JumpjetLocomotionClass::ShortFunc_72A1C0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ShortFunc_72A1C0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A1C0.json)
}

// ==== BACKFILL 0x0072A1E0  JumpjetLocomotionClass::ShortFunc_72A1E0  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_72A1E0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A1E0.json)
}

// ==== BACKFILL 0x0072A200  TunnelLocomotionClass::StubReturn60  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int TunnelLocomotionClass::StubReturn60()
{

  return 60; /*0x72a205*/

}

// ==== BACKFILL 0x0072A210  TunnelLocomotionClass::ProcessMove  cls=TunnelLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
TunnelLocomotionClass * TunnelLocomotionClass::ProcessMove(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72A210)
}

// ==== BACKFILL 0x0072A4A0  ObjectClass::DrawTypewriterText  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::DrawTypewriterText(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x72a4a0.json */
}

// ==== BACKFILL 0x0072A660  ObjectClass::setTarget  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::setTarget(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A660.json)
}

// ==== BACKFILL 0x0072A670  ObjectClass::clearTarget  cls=TextLabelClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::clearTarget(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A670.json)
}

// ==== BACKFILL 0x0072A9C0  Copy8Bytes  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * GScreenClass::Copy8Bytes()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072A9C0.json)
}

// ==== BACKFILL 0x0072A9E0  Rect::Inflate  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Rect::Inflate(LPRECT lprc, int dx, int dy)
{

  int v3; // edx
  unsigned int *v4; // ecx

  *v4 += v3; /*0x72a9e4*/
  v4[1] += v3; /*0x72a9eb*/
  v4[2] -= 2 * v3; /*0x72a9f6*/
  v4[3] -= 2 * v3; /*0x72a9fe*/
  return 2 * v3; /*0x72aa01*/

}

// ==== BACKFILL 0x0072AA10  CubicBezierAdvance  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CubicBezierAdvance(unsigned int * a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072AA10.json)
}

// ==== BACKFILL 0x0072AD20  Display::GetViewport  cls=Display  sig=csp  renamed_refs=0  residual=- ====
int Display::GetViewport()
{

  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ad29*/
  v2 = 0; /*0x72ad44*/
  if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x72ad5e*/
    v2 = 168; /*0x72ad60*/
  v3 = dword_886FB8 - 168; /*0x72ad67*/
  v4 = dword_886FBC - 32; /*0x72ad6d*/
  *result = v2; /*0x72ad70*/
  result[1] = 0; /*0x72ad72*/
  result[2] = v3; /*0x72ad76*/
  result[3] = v4; /*0x72ad79*/
  return (int)(result); /*0x72ad75*/

}

// ==== BACKFILL 0x0072AD90  SidebarClass::calcSidebarRect  cls=SidebarClass  sig=csp  renamed_refs=0  residual=- ====
void* SidebarClass::calcSidebarRect() {
  int *result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = (int *)this; /*0x72ada4*/
  v2 = 0; /*0x72ada7*/
  if ( !IDA_LOBYTE(stru_A8EB00.ObjectTypeClass[31]) && !((unsigned int *)&stru_A8EB00)[391] ) /*0x72adb7*/
    v2 = 168; /*0x72adb9*/
  v3 = stru_A8EB00.ObjectTypeClass[33] - 168; /*0x72adc0*/
  v4 = stru_A8EB00.ObjectTypeClass[34] - 32; /*0x72adc6*/
  *result = v2; /*0x72adc9*/
  result[1] = 0; /*0x72adcb*/
  result[2] = v3; /*0x72adcf*/
  result[3] = v4; /*0x72add2*/
  return result; /*0x72adce*/
}

// ==== BACKFILL 0x0072B230  WinMainSetup_Setup_72AC40_Setup_72B230  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B230()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B230)
}

// ==== BACKFILL 0x0072B2F0  LoadingScreen::GetBackgroundImage  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char * LoadingScreen::GetBackgroundImage(ScenarioClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B2F0)
}

// ==== BACKFILL 0x0072B310  LoadingScreen::GetOverlayImage  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char * LoadingScreen::GetOverlayImage(ScenarioClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B310)
}

// ==== BACKFILL 0x0072B390  LoadingScreen::ReleaseAnimObjects  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
int LoadingScreen::ReleaseAnimObjects(char * Source)
{

  if ( dword_B0FB88 ) /*0x72b39b*/
  {
    (**(void (***)(int, int))dword_B0FB88)(dword_B0FB88, 1); /*0x72b3a1*/
    dword_B0FB88 = 0; /*0x72b3a3*/
  }
  if ( dword_B0FB84 ) /*0x72b3b4*/
  {
    __3_YAXPAX_Z((void *)(dword_B0FB84)); /*0x72b3b7*/
    dword_B0FB84 = 0; /*0x72b3bf*/
  }
  return LoadPaletteSimple(Source,(int *)(&dword_B0FB84), &dword_B0FB88); /*0x72b3da*/

}

// ==== BACKFILL 0x0072B460  LoadProgressMgr_Release  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B460()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B460)
}

// ==== BACKFILL 0x0072B820  Palette::LoadFile  cls=Palette  sig=csp  renamed_refs=0  residual=- ====
int Palette::LoadFile(char * Source)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B820)
}

// ==== BACKFILL 0x0072B870  LoadProgressMgr_Release_72B870  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B870()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B870)
}

// ==== BACKFILL 0x0072B930  DlgProcGameSetup_Setup_72B930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72B930()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72B930)
}

// ==== BACKFILL 0x0072BB10  WOLobby_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BB10()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72BB10)
}

// ==== BACKFILL 0x0072BCF0  LoginFlowWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BCF0()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1429] ) /*0x72bcfa*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1428] ) /*0x72bd02*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[744]; /*0x72bd05*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[744] ) /*0x72bd0d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[744]); /*0x72bd11*/
        RA2_OPDEL(v1); /*0x72bd17*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1428] = 0; /*0x72bd1f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[744] = 0; /*0x72bd2b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1432] ) /*0x72bd33*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1432]); /*0x72bd36*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1432] = 0; /*0x72bd3e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436] ) /*0x72bd4c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1436])( /*0x72bd52*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1436] = 0; /*0x72bd54*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1429] = 0; /*0x72bd5a*/
}

// ==== BACKFILL 0x0072BED0  JoinLobbyWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72BED0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72BED0)
}

// ==== BACKFILL 0x0072C0B0  GameOptionsScreenWOL_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C0B0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72C0B0)
}

// ==== BACKFILL 0x0072C290  CreateAccountWOL_Create_72C290  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C290()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072C290.json)
}

// ==== BACKFILL 0x0072C470  CreateAccountWOL_Create_72C470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C470()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072C470.json)
}

// ==== BACKFILL 0x0072C650  LoginFlowWOL_Destroy_72C650  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C650()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1369] ) /*0x72c65a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1368] ) /*0x72c662*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[860]; /*0x72c665*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] ) /*0x72c66d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[860]); /*0x72c671*/
        RA2_OPDEL(v1); /*0x72c677*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1368] = 0; /*0x72c67f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[860] = 0; /*0x72c68b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] ) /*0x72c693*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1372]); /*0x72c696*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1372] = 0; /*0x72c69e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] ) /*0x72c6ac*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1376])( /*0x72c6b2*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1376] = 0; /*0x72c6b4*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1369] = 0; /*0x72c6ba*/
}

// ==== BACKFILL 0x0072C830  RunWOLMainLoop_Read_Read_72C830  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72C830()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072C830.json)
}

// ==== BACKFILL 0x0072CA10  System_Init_72CA10  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72CA10()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072CA10.json)
}

// ==== BACKFILL 0x0072CDB0  Network_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72CDB0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072CDB0.json)
}

// ==== BACKFILL 0x0072CF90  CleanupFileTree  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void FileTree_Cleanup()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072CF90.json)
}

// ==== BACKFILL 0x0072D170  AudioController::GetVolume  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
void AudioController::GetVolume()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72D170)
}

// ==== BACKFILL 0x0072D350  FileSystem::CleanupTrees  cls=FileSystem  sig=csp  renamed_refs=0  residual=- ====
void FileSystem::CleanupTrees()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72D350)
}

// ==== BACKFILL 0x0072D460  CampaignScore::LoadScreenAssets  cls=CampaignScore  sig=csp  renamed_refs=0  residual=- ====
void* CampaignScore::LoadScreenAssets() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 21 errs): wrong-universe gap2 body; truth func_0x72D460.json */
}

// ==== BACKFILL 0x0072D730  Game::LoadMultiplayerScoreAssets  cls=Game  sig=csp  renamed_refs=0  residual=- ====
char Coord::LoadMultiplayerScoreAssets()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072D730.json)
}

// ==== BACKFILL 0x0072D780  Map_Init_72D780  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_72D780()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072D780.json)
}

// ==== BACKFILL 0x0072D830  Game::shutdownGame  cls=Game  sig=csp  renamed_refs=0  residual=- ====
void * Coord::shutdownGame()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072D830.json)
}

// ==== BACKFILL 0x0072E730  UI_Draw_72E730  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E730(ConvertClass * aP0, int * a1, int a3, int aP2, int a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E730.json)
}

// ==== BACKFILL 0x0072E820  Render_Draw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Render_Draw(int a1, int *a2, char a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E820.json)
}

// ==== BACKFILL 0x0072E860  UI_Draw_72E860  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E860(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E860.json)
}

// ==== BACKFILL 0x0072E8C0  UI_Draw_72E8C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E8C0(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E8C0.json)
}

// ==== BACKFILL 0x0072E920  UI_Draw_72E920  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void UI_Draw_72E920(int a1, ConvertClass * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E920.json)
}

// ==== BACKFILL 0x0072E9F0  Map_Load_72E9F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Map_Load_72E9F0(ConvertClass * a1, int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072E9F0.json)
}

// ==== BACKFILL 0x0072EAD0  Map_Load_72EAD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Map_Load_72EAD0(ConvertClass * a1, int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072EAD0.json)
}

// ==== BACKFILL 0x0072F140  LoadingScreen::CleanupObjects  cls=LoadingScreen  sig=csp  renamed_refs=0  residual=- ====
char LoadingScreen::CleanupObjects(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x72F140)
}

// ==== BACKFILL 0x0072F440  Game::InitializeToolTipColor  cls=Game  sig=csp  renamed_refs=0  residual=- ====
char Coord::InitializeToolTipColor()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0072F440.json)
}
