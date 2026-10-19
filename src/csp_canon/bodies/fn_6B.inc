// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x006B0300  BuildingClass::FindPlacementCells2  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindPlacementCells2(int* outCell, int inCell)
{
    (void)outCell; (void)inCell;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B0300.json)
}
} // namespace gamemd

// ==== BACKFILL 0x006B0A90  sub_6B0A90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6B0A90::sub_6B0A90(int a2)
{

  unsigned int *v2; // eax
  ObjectClass *nextObject; // ecx
  unsigned int *result; // eax
  int v5; // [esp+4h] [ebp-8h]

  v2 = *(unsigned int **)(this->ambientSoundController[0] + 4 * a2); /*0x6b0a9a*/
  if ( *v2 ) /*0x6b0a9d*/
    *(unsigned int *)(*v2 + 732) = 0; /*0x6b0aa3*/
  *v2 = 0; /*0x6b0aad*/
  v2[1] = 6; /*0x6b0ab3*/
  nextObject = this->nextObject; /*0x6b0ac0*/
  result = v2 + 2; /*0x6b0ac3*/
  *result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b0ac6*/
  result[1] = v5; /*0x6b0acc*/
  result[2] = nextObject; /*0x6b0acf*/
  return result; /*0x6b0ad2*/

}

// ==== BACKFILL 0x006B0C80  FactoryClass::ResetProductionTimers  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
void* FactoryClass::ResetProductionTimers() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6B0C80.json */
}

// ==== BACKFILL 0x006B1130  SlaveManagerClass::ddtor  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = unk_7E987C; /*0x6b1160*/
  return 0; /*0x6b113d*/

}

// ==== BACKFILL 0x006B1300  SlaveManagerClass::SaveManager  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::SaveManager(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1300)
}

// ==== BACKFILL 0x006B1370  SlaveManagerClass::StubReturn100  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::StubReturn100()
{

  return 100; /*0x6b1375*/

}

// ==== BACKFILL 0x006B1380  SlaveManagerClass::StubReturn72  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SlaveManagerClass::StubReturn72()
{

  return 72; /*0x6b1385*/

}

// ==== BACKFILL 0x006B1390  SlaveManagerClass::ProcessOrders  cls=SlaveManagerClass  sig=csp  renamed_refs=0  residual=- ====
SlaveManagerClass * SlaveManagerClass::ProcessOrders(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1390)
}

// ==== BACKFILL 0x006B14B0  AbstractClass::getAIPriority  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getAIPriority(int a2, void* a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b14b0.json */
}

// ==== BACKFILL 0x006B1560  AbstractClass::setAIPriority  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::setAIPriority() {
}

// ==== BACKFILL 0x006B1590  AbstractClass::evaluateAIOption  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::evaluateAIOption(void* a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b1590.json */
}

// ==== BACKFILL 0x006B15D0  AbstractClass::selectAIAction  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::selectAIAction(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b15d0.json */
}

// ==== BACKFILL 0x006B1930  AbstractClass::checkAIResources  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::checkAIResources(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b1930.json */
}

// ==== BACKFILL 0x006B1E50  SliderClass::Draw  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::Draw(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 18 errs): wrong-universe gap2 body; truth func_0x6B1E50.json */
}

// ==== BACKFILL 0x006B1EE0  sub_6B1EE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
long long E4Recv_6B1EE0::sub_6B1EE0()
{

  int abstractFlags; // ebx
  double nextObject; // st7
  int v4; // eax
  int v5; // edi
  int64_t result; // rax
  int v7; // kr00_4

  if ( BYTE2(this->fallRate) ) /*0x6b1ee6*/
    abstractFlags = ((unsigned int *)this)[0]; /*0x6b1eed*/
  else
    abstractFlags = ((unsigned int *)this)[0]; /*0x6b1ef2*/
  nextObject = (double)(int)this->nextObject; /*0x6b1ef5*/
  (v4) = ((v4) & ~0xFFFF) | ((Math::RoundToInt(nextObject)) & 0xFFFF); /*0x6b1f07*/
  v5 = v4; /*0x6b1f0f*/
  if ( v4 <= 4 ) /*0x6b1f11*/
    v5 = 4; /*0x6b1f13*/
  this->ambientSoundController[4] = v5; /*0x6b1f1b*/
  v7 = Math::RoundToInt(nextObject); /*0x6b1f22*/
  (result) = ((result) & ~(0xFFFFull << 32)) | ((((((v7) >> 16) & 0xFFFF)) & 0xFFFFull) << 32); /*0x6b1f22*/
  (result) = ((result) & ~0xFFFF) | ((v7) & 0xFFFF); /*0x6b1f22*/
  if ( (int)result >= abstractFlags - v5 ) /*0x6b1f31*/
    this->customSound_controller[0] = abstractFlags - v5; /*0x6b1f3b*/
  else
    this->customSound_controller[0] = result; /*0x6b1f33*/
  return result; /*0x6b1f36*/

}

// ==== BACKFILL 0x006B1F50  SliderClass::SetValue  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::SetValue(int a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6B1F50.json */
}

// ==== BACKFILL 0x006B2000  SliderClass::OnTrack  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::OnTrack(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x6B2000.json */
}

// ==== BACKFILL 0x006B2040  SliderClass::OnRelease  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::OnRelease(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x6B2040.json */
}

// ==== BACKFILL 0x006B2070  SliderClass::HitTest  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::HitTest() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x6B2070.json */
}

// ==== BACKFILL 0x006B20F0  SliderClass::GetRange  cls=SliderClass  sig=csp  renamed_refs=0  residual=- ====
int SliderClass::GetRange(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 11 errs): wrong-universe gap2 body; truth func_0x6B20F0.json */
}

// ==== BACKFILL 0x006B2520  System_Init_6B2520  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_6B2520::System_Init_6B2520() {

  int occupant; // ebx
  int v3; // edi
  int attachedBomb; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  occupant = this->occupant; /*0x6b252c*/
  v6 = occupant; /*0x6b2531*/
  v3 = (short)(((occupant) >> 16) & 0xFFFF) + (int16_t)occupant; /*0x6b253d*/
  if ( v3 <= dword_ABED04 ) /*0x6b2542*/
    return 0; /*0x6b2542*/
  if ( (int16_t)v6 - (short)(((v6) >> 16) & 0xFFFF) >= dword_ABED04 ) /*0x6b254c*/
    return 0; /*0x6b254c*/
  if ( (short)(((v6) >> 16) & 0xFFFF) - (int16_t)v6 >= dword_ABED04 ) /*0x6b2552*/
    return 0; /*0x6b2552*/
  if ( v3 > dword_ABED08 ) /*0x6b255a*/
    return 0; /*0x6b255a*/
  if ( this->ambientSoundController[2] != -1 ) /*0x6b2560*/
    return 0; /*0x6b2560*/
  if ( this->radioLinks[1] ) /*0x6b2562*/
    return 0; /*0x6b2562*/
  v6 = occupant; /*0x6b2570*/
  if ( Tactical::GetCellData((Tactical *)&v6)[69] ) /*0x6b2579*/
    return 0; /*0x6b25b0*/
  attachedBomb = this->attachedBomb; /*0x6b2580*/
  if ( attachedBomb >= dword_A8ED38 || attachedBomb == 0xFFFF ) /*0x6b2592*/
    return 1; /*0x6b25a9*/
  else
    return *(unsigned char *)(*((unsigned int *)dword_A8ED2C + attachedBomb) + 736); /*0x6b259f*/

}

// ==== BACKFILL 0x006B4100  Map_Get_6B4100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6B4100::Map_Get_6B4100() {

  int occupant; // edi
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  ObjectClass *v13; // ebx
  BombClass *attachedBomb; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  unsigned int v18[4]; // [esp+18h] [ebp-10h] BYREF

  occupant = this->occupant; /*0x6b4113*/
  v17 = occupant; /*0x6b4120*/
  v2 = (short)(((occupant) >> 16) & 0xFFFF) - dword_8759AC; /*0x6b412c*/
  v3 = (int16_t)occupant - dword_8759A8; /*0x6b4130*/
  v4 = v2 * dword_8759A4 + v3; /*0x6b4136*/
  v5 = dword_8759A4 * (v2 + 1) + v3; /*0x6b4142*/
  v6 = *((unsigned int *)g_SlaveManagerPool + 2 * v4); /*0x6b4144*/
  v7 = *((unsigned int *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b414b*/
  v8 = *((unsigned int *)g_SlaveManagerPool + 2 * v5); /*0x6b414f*/
  v18[1] = *((unsigned int *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4152*/
  v18[3] = v8; /*0x6b4156*/
  v18[0] = v6; /*0x6b415a*/
  v18[2] = v7; /*0x6b415e*/
  v9 = 1000; /*0x6b4162*/
  v10 = v18; /*0x6b4167*/
  v11 = 4; /*0x6b416b*/
  do /*0x6b417c*/
  {
    if ( *v10 < v9 ) /*0x6b4174*/
      v9 = *v10; /*0x6b4176*/
    ++v10; /*0x6b4178*/
    --v11; /*0x6b417b*/
  }
  while ( v11 ); /*0x6b417c*/
  v17 = occupant; /*0x6b4186*/
  v12 = (short)(((occupant) >> 16) & 0xFFFF) + (int16_t)occupant; /*0x6b4192*/
  if ( v12 <= g_MissionQueueFrame.localVariables[160] /*0x6b41b1*/
    || (int16_t)occupant - (short)(((occupant) >> 16) & 0xFFFF) >= g_MissionQueueFrame.localVariables[160]
    || (short)(((occupant) >> 16) & 0xFFFF) - (int16_t)occupant >= g_MissionQueueFrame.localVariables[160]
    || v12 > g_MissionQueueFrame.localVariables[161] )
  {
    v13 = this; /*0x6b421f*/
  }
  else
  {
    v13 = this; /*0x6b41b3*/
    if ( this->ambientSoundController[2] == -1 && !*((unsigned int *)this + 57) ) /*0x6b41bd*/
    {
      v17 = occupant; /*0x6b41cb*/
      if ( !Tactical::GetCellData((Tactical *)&v17)[69] ) /*0x6b41d4*/
      {
        attachedBomb = this->attachedBomb; /*0x6b41db*/
        if ( (int)attachedBomb >= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 340) /*0x6b41f8*/
          || attachedBomb == (BombClass *)0xFFFF
          || *(unsigned char *)(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * (unsigned int)attachedBomb) + 736) )
        {
          return v9 / 15; /*0x6b421e*/
        }
      }
    }
  }
  return SHIBYTE(v13[1].health); /*0x6b4207*/

}

// ==== BACKFILL 0x006B4C70  nullsub_232  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_232(int a1)
{
  ; /*0x6b4c70*/
}

// ==== BACKFILL 0x006B4EA0  UnitClass::SaveLoadData  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::SaveLoadData(ObjectClass* aP1, int aP1a)
{
    return 0; (void)aP1; (void)aP1a; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4EA0.json)
}

// ==== BACKFILL 0x006B4F00  UnitClass::SaveState  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::SaveState(void* aP0, void* a1, void* aP2)
{
    (void)aP0; (void)a1; (void)aP2;
    return 0; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x006B4F00.json)
}

// ==== BACKFILL 0x006B4F20  UnitClass::CheckStatus  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::CheckStatus()
{
  return (int)this->Type; /*0x6b4f26*/
}

// ==== BACKFILL 0x006B4F30  UnitClass::StubReturn176  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::StubReturn176() {
    return 176; /*0x6b4f35*/
}

// ==== BACKFILL 0x006B4F40  UnitClass::StubReturn29  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::StubReturn29() {
    return 29; /*0x6b4f45*/
}

// ==== BACKFILL 0x006B4F50  UnitClass::GetClassID  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID)
{
    return 0; (void)pClassID; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B4F50.json)
}

// ==== BACKFILL 0x006B4F90  nullsub_233  cls=SmudgeClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_233(int a1, int a2)
{
  ; /*0x6b4f90*/
}

// ==== BACKFILL 0x006B5550  SmudgeTypeClass::GetType  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool SmudgeTypeClass::GetType(short * a2, int a3)
{

  UnitClass *v4; // eax
  int v5; // edx
  bool result; // al
  unsigned int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( ((UnitClass *)v4)->Create(this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/

}

// ==== BACKFILL 0x006B55C0  SmudgeTypeClass::GetFlag  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{

  UnitClass *v3; // eax

  v3 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
return (gamemd::SmudgeClass *)((UnitClass *)v3)->Create(this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/

}

// ==== BACKFILL 0x006B57F0  SmudgeTypeClass::PowerDrainUpdate  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=Crater ====
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  LOBYTE(v3) = this->Crater; /*0x6b580c*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x6b5815*/
  LOBYTE(v4) = this->Burn; /*0x6b581a*/
  ((Power *)((Power *)a2))->FlagProcess(v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/

}

// ==== BACKFILL 0x006B5850  SmudgeTypeClass::LoadTypeData  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int  SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)((ObjectTypeClass *)aP0), (gamemd::ObjectTypeClass *)aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ((ObjectTypeClass*)(ObjectTypeClass *)aP0)->Construct((int)&aP1); /*0x6b586f*/
      /* X11: ptr_0 install elided (implicit via SmudgeTypeClass virtuals 0x6b5874) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F34FC); /*0x6b587a*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F34FC); /*0x6b5881*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F34FC); /*0x6b5888*/
    }
    ((VoxelAnimType*)(char *)aP0)->LoadAnim(); /*0x6b5891*/
    ((ObjectTypeClass*)(char *)aP0)->Load2DArt(); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/

}

// ==== BACKFILL 0x006B58B0  SmudgeTypeClass::SaveToINI  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((gamemd::TechnoTypeClass *)((AbstractClass *)aP0), aP1, (gamemd::TechnoTypeClass *)aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/

}

// ==== BACKFILL 0x006B58D0  SmudgeTypeClass::GetClassIdentifier  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = unk_7E961C; /*0x6b5900*/
  return 0; /*0x6b58dd*/

}

// ==== BACKFILL 0x006B6130  SmudgeTypeClass::GetTypeIdentifier  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetTypeIdentifier()
{

  return 30; /*0x6b6135*/

}

// ==== BACKFILL 0x006B6140  SmudgeTypeClass::GetObjectSize  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetObjectSize()
{

  return 676; /*0x6b6145*/

}

// ==== BACKFILL 0x006B6150  SmudgeTypeClass::GetAuxField  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SmudgeTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B6150)
}

// ==== BACKFILL 0x006B6160  SmudgeTypeClass::ddtor  cls=SmudgeTypeClass  sig=csp  renamed_refs=0  residual=- ====
SmudgeTypeClass *  SmudgeTypeClass::ddtor(void * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B6160)
}

// ==== BACKFILL 0x006B7ED0  SpawnManagerClass::ddtor  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B7ED0.json)
}

// ==== BACKFILL 0x006B80B0  SpawnManagerClass::SaveState  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B80B0.json)
}

// ==== BACKFILL 0x006B8120  SpawnManagerClass::StubReturn116  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::StubReturn116()
{

  return 116; /*0x6b8125*/

}

// ==== BACKFILL 0x006B8130  SpawnManagerClass::StubReturn65  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
int SpawnManagerClass::StubReturn65()
{

  return 65; /*0x6b8135*/

}

// ==== BACKFILL 0x006B8140  SpawnManagerClass::ProcessEvent  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
SpawnManagerClass * SpawnManagerClass::ProcessEvent(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8140.json)
}

// ==== BACKFILL 0x006B8260  AbstractClass::allocatePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::allocatePathMemory(int a2, void* a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b8260.json */
}

// ==== BACKFILL 0x006B8310  AbstractClass::freePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::freePathMemory() {
}

// ==== BACKFILL 0x006B8340  AbstractClass::initPathState  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::initPathState(void* a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b8340.json */
}

// ==== BACKFILL 0x006B8380  AbstractClass::resetPathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::resetPathMemory(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b8380.json */
}

// ==== BACKFILL 0x006B83A0  SpawnManagerClass::Constructor_6B83A0  cls=SpawnManagerClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * SpawnManagerClass::Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B83A0.json)
}

// ==== BACKFILL 0x006B8740  AbstractClass::validatePathMemory  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::validatePathMemory(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x6b8740.json */
}

// ==== BACKFILL 0x006B8AE0  ScenarioClass::ResetIntroFlags  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int ScenarioClass::ResetIntroFlags(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006B8AE0.json)
}

// ==== BACKFILL 0x006B8AF0  ApplyGameOptions_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool E4Recv_6B8AF0::sub_6B8AF0(unsigned int * a2)
{

  int v2; // eax

  v2 = (int)this->AbstractClass ^ *a2; /*0x6b8af8*/
  return !(unsigned char)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/

}

// ==== BACKFILL 0x006B8B10  nullsub_37  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_37()
{

  ; /*0x6b8b10*/

}

// ==== BACKFILL 0x006B8B20  nullsub_38  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_38()
{

  ; /*0x6b8b20*/

}

// ==== BACKFILL 0x006B8B30  ScenarioClass::RevealMapForHouse  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::RevealMapForHouse(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x006B93E0  sub_6B93E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6B93E0::sub_6B93E0()
{

  uint8_t *v1; // ecx
  int v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = (uint8_t *)this + 2; /*0x6b93e4*/
  v2 = 256; /*0x6b93e7*/
  do /*0x6b943e*/
  {
    v3 = *v1; /*0x6b93f7*/
    v4 = *(v1 - 2); /*0x6b93fe*/
    (v5) = ((v5) & ~0xFF) | ((-1) & 0xFF); /*0x6b9415*/
    if ( 15 * *(v1 - 1) / 10 <= 255 ) /*0x6b9422*/
      v5 = 15 * *(v1 - 1) / 10; /*0x6b9424*/
    *(v1 - 2) = v5; /*0x6b9426*/
    *(v1 - 1) = v4; /*0x6b942f*/
    v1 += 3; /*0x6b9434*/
    result = v3 / 4; /*0x6b9437*/
    *(v1 - 3) = v3 / 4; /*0x6b943a*/
    --v2; /*0x6b943d*/
  }
  while ( v2 ); /*0x6b943e*/
  return result; /*0x6b9440*/

}

// ==== BACKFILL 0x006B9450  sub_6B9450  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_6B9450::sub_6B9450()
{

  char *v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // edi
  unsigned int v6; // edx

  ((unsigned int *)this)[0] = (void *)-1717986918; /*0x6b945a*/
  this->owningHouseIndex = -1717986918; /*0x6b945d*/
  this->occupant = 1070176665; /*0x6b9466*/
  this->fallRate = 1072273817; /*0x6b946d*/
  this->nextObject = (ObjectClass *)128; /*0x6b9474*/
  ((unsigned int *)this)[0] = 128; /*0x6b9477*/
  ((unsigned int *)this)[0] = (void *)128; /*0x6b947a*/
  ((unsigned int *)this)[0] = 0; /*0x6b947d*/
  v2 = 0; /*0x6b9480*/
  v3 = 128; /*0x6b9482*/
  do /*0x6b9489*/
  {
    ++v2; /*0x6b9484*/
    v3 >>= 1; /*0x6b9485*/
  }
  while ( v3 ); /*0x6b9489*/
  ((unsigned int *)this)[0] = v2; /*0x6b948b*/
  ((unsigned int *)this)[0] = 0; /*0x6b9496*/
  v4 = 1 << ((unsigned char)v2 - 1); /*0x6b9499*/
  ((unsigned int *)this)[0] = v2 - 1; /*0x6b949b*/
  ((unsigned int *)this)[0] = 0; /*0x6b949e*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x6b94a1*/
  ((unsigned int *)this)[0] = (void *)v4; /*0x6b94a4*/
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6b94b3*/
  v6 = 4 * (int)((unsigned int *)this)[0]; /*0x6b94b8*/
  this->AbstractClass = v5; /*0x6b94bf*/
  memset(v5, 0, v6); /*0x6b94c4*/
  ((unsigned int *)this)[0] = (int)sub_6B94E0; /*0x6b94cd*/
  return this; /*0x6b94d6*/

}

// ==== BACKFILL 0x006B94E0  sub_6B94E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int E4Recv_6B94E0::sub_6B94E0()
{

  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = ((String*)((String *)this))->Length(); /*0x6b94ec*/
  for ( i = 0; i < ((String*)((String *)this))->Length(); ++i ) /*0x6b94f0*/
  {
    v4 = ((String *)((String *)this))->GetOrEmpty(); /*0x6b94fb*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x6b9510*/
  }
  return v2; /*0x6b9520*/

}

// ==== BACKFILL 0x006BA120  UI_Init_6BA120  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6BA120(int a1, int a2, char * Source)
{
  return LoadPaletteFromFile(a1, a2, Source, 1, 1); /*0x6ba12e*/
}

// ==== BACKFILL 0x006BA680  sub_6BA680  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_6BA680(int a1, int a2, int a3)
{
  return 0; /*0x6ba682*/
}

// ==== BACKFILL 0x006BB2E0  WriteRegistryKeyCOM  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR, LPCSTR lpString)
{
  char v4; // bl
  int result; // eax
  int v6; // eax
  HKEY phkResult; // [esp+8h] [ebp-108h] BYREF
  CHAR String1[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = 0; /*0x6bb2f0*/
  lstrcpyA(String1, lpString2); /*0x6bb2f2*/
  if ( a2 ) /*0x6bb2fa*/
  {
    lstrcatA(String1, asc_815E74); /*0x6bb30d*/
    lstrcatA(String1, a2); /*0x6bb315*/
  }
  result = RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0); /*0x6bb336*/
  if ( !result ) /*0x6bb33e*/
  {
    if ( !lpString || (v6 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v6 + 1)) ) /*0x6bb360*/
      v4 = 1; /*0x6bb36a*/
    result = RegCloseKey(phkResult); /*0x6bb371*/
  }
  (result) = ((result) & ~0xFF) | ((v4) & 0xFF); /*0x6bb377*/
  return result; /*0x6bb379*/
}

// ==== BACKFILL 0x006BB990  TopLevelExceptionFilter  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_6BB990::TopLevelExceptionFilter(void* ExceptionInfo, int a3, int a4, int a5) {

  HANDLE FileA; // esi
  DWORD v7; // eax
  DWORD v9; // [esp-E40h] [ebp-E40h] BYREF

  v9 = *(unsigned int *)this->AbstractClass; /*0x4c8fe0*/
  Debug::Log(); /*0x4c8fe9*/
  WinMain_Write_53E6B0(); /*0x4c8ff1*/
  if ( !++dword_820E5C ) /*0x4c9001*/
  {
    ExceptionHandler::GenerateReport((ExceptionHandler *)this); /*0x4c9005*/
    FileA = CreateFileA(FileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x4c9027*/
    if ( FileA != (HANDLE)-1 ) /*0x4c902c*/
    {
      v7 = lstrlenA(Buffer); /*0x4c903a*/
      WriteFile(FileA, Buffer, v7, &v9, 0); /*0x4c9047*/
      CloseHandle(FileA); /*0x4c904e*/
    }
  }
  if ( (g_DSurface_Primary /*0x4c90dc*/
     && (*((uint8_t (**)(DSurface *, DWORD))g_DSurface_Primary->DSurface_field_0x0 + 27))(
          g_DSurface_Primary,
          v9)
     || g_DSurface_Hidden
     && (*((uint8_t (**)(ObjectClass *))g_DSurface_Hidden->ptr_4 + 27))(g_DSurface_Hidden)
     || DSurface_Composite
     && (*(uint8_t (**)(AudioStream *))(*(unsigned int *)DSurface_Composite->__pad_0 + 108))(DSurface_Composite)
     || DSurface_Tile
     && (*((uint8_t (**)(DSurface *))DSurface_Tile->DSurface_field_0x0 + 27))(DSurface_Tile)
     || DSurface_Sidebar
     && (*((uint8_t (**)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 27))(DSurface_Sidebar)
     || DSurface_Alternate
     && (*((uint8_t (**)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 27))(DSurface_Alternate))
    && stru_887598.onBridge
    || GetCurrentThreadId() != dword_B730E8 )
  {
    Debug::Log(); /*0x4c90e3*/
    return 0; /*0x4c90ee*/
  }
  Debug::Log(); /*0x4c90f4*/
  if ( sub_4C84E0() != 1153 ) /*0x4c9106*/
    return 0; /*0x4c910b*/
  byte_820E60 = 0; /*0x4c9111*/
  if ( dword_820E5C ) /*0x4c911a*/
  {
    if ( dword_820E5C == 2 ) /*0x4c913f*/
      return 0; /*0x4c9141*/
  }
  else
  {
    dword_820E5C = -1; /*0x4c911c*/
  }
  if ( hWnd ) /*0x4c912e*/
    Dialog::Destroy((Dialog *)hWnd); /*0x4c9130*/
  return 1; /*0x4c90ee*/

}

// ==== BACKFILL 0x006BEC50  ExitProgram  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void  __noreturn E4Recv_6BEC50::ExitProgram(void * Code)
{

  exit((int)Code); /*0x6bec51*/

}

// ==== BACKFILL 0x006BF8D0  CreateTClassFactory_CellClass  cls=_TClassFactory_VCellClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6BF8D0::CreateTClassFactory_CellClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf8d7*/
    return -2147467261; /*0x6bf8d9*/
  *v4 = 0; /*0x6bf8f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf912*/
    *v4 = a2; /*0x6bf916*/
  if ( !*v4 ) /*0x6bf918*/
    return -2147467262; /*0x6bf920*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bf92c*/
  return 0; /*0x6bf8de*/

}

// ==== BACKFILL 0x006BF990  TClassFactory_CellClass::ddtor  cls=_TClassFactory_VCellClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_CellClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl ptr_0 cast clash; truth = ida_cache marker above)
}

// ==== BACKFILL 0x006BFA50  CreateTClassFactory_EMPulseClass  cls=_TClassFactory_VEMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6BFA50::CreateTClassFactory_EMPulseClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfa57*/
    return -2147467261; /*0x6bfa59*/
  *v4 = 0; /*0x6bfa76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfa92*/
    *v4 = a2; /*0x6bfa96*/
  if ( !*v4 ) /*0x6bfa98*/
    return -2147467262; /*0x6bfaa0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfaac*/
  return 0; /*0x6bfa5e*/

}

// ==== BACKFILL 0x006BFB10  TClassFactory_EMPulseClass::ddtor  cls=_TClassFactory_VEMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_EMPulseClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (COM-thunk raw dump: phantom a3/a4 params,
    // uninit v9 out-param, __stdcall/__cdecl ptr_0 cast clash; truth = ida_cache marker above)
}

// ==== BACKFILL 0x006BFBD0  CreateTClassFactory_LightSourceClass  cls=_TClassFactory_VLightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6BFBD0::CreateTClassFactory_LightSourceClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfbd7*/
    return -2147467261; /*0x6bfbd9*/
  *v4 = 0; /*0x6bfbf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfc12*/
    *v4 = a2; /*0x6bfc16*/
  if ( !*v4 ) /*0x6bfc18*/
    return -2147467262; /*0x6bfc20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfc2c*/
  return 0; /*0x6bfbde*/

}

// ==== BACKFILL 0x006BFC90  TClassFactory_LightSourceClass::ddtor  cls=_TClassFactory_VLightSourceClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_LightSourceClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006BFC90.json)
}

// ==== BACKFILL 0x006BFD40  WinMain_Helper_6BFD40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6BFD40::WinMain_Helper_6BFD40() {

  ((unsigned int *)this)[0] = 0; /*0x6bfd42*/
  /* X11: ptr_0 install elided (implicit via TClassFactory virtuals 0x6bfd49) */
  return this; /*0x6bfd4f*/

}

// ==== BACKFILL 0x006BFD50  CreateTClassFactory_SideClass  cls=_TClassFactory_VSideClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6BFD50::CreateTClassFactory_SideClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfd57*/
    return -2147467261; /*0x6bfd59*/
  *v4 = 0; /*0x6bfd76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfd92*/
    *v4 = a2; /*0x6bfd96*/
  if ( !*v4 ) /*0x6bfd98*/
    return -2147467262; /*0x6bfda0*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bfdac*/
  return 0; /*0x6bfd5e*/

}

// ==== BACKFILL 0x006BFE10  TClassFactory_SideClass::ddtor  cls=_TClassFactory_VSideClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_SideClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006BFE10.json)
}

// ==== BACKFILL 0x006BFEC0  WinMain_Helper_6BFEC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_6BFEC0::WinMain_Helper_6BFEC0() {

  ((unsigned int *)this)[0] = 0; /*0x6bfec2*/
  /* X11: ptr_0 install elided (implicit via TClassFactory virtuals 0x6bfec9) */
  return this; /*0x6bfecf*/

}

// ==== BACKFILL 0x006BFED0  CreateTClassFactory_TiberiumClass  cls=_TClassFactory_VTiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_6BFED0::CreateTClassFactory_TiberiumClass(const void *a2, unsigned int *a3)
{

  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfed7*/
    return -2147467261; /*0x6bfed9*/
  *v4 = 0; /*0x6bfef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bff12*/
    *v4 = a2; /*0x6bff16*/
  if ( !*v4 ) /*0x6bff18*/
    return -2147467262; /*0x6bff20*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x6bff2c*/
  return 0; /*0x6bfede*/

}

// ==== BACKFILL 0x006BFF90  TClassFactory_TiberiumClass::ddtor  cls=_TClassFactory_VTiberiumClass  sig=csp  renamed_refs=0  residual=- ====
int TClassFactory_TiberiumClass::ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (voidret; truth = .omo/ida_cache/func_0x006BFF90.json)
}
