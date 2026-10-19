// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004C1AB0  DSurface::IsDSurface  cls=DSurface  sig=csp  renamed_refs=0  residual=- ====
char DSurface::IsDSurface()
{

  return 1; /*0x4c1ab2*/

}

// ==== BACKFILL 0x004C2B40  sub_4C2B40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4C2B40::sub_4C2B40(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2B40)
}

// ==== BACKFILL 0x004C2BD0  TechnoClass::updateSightRange  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void TechnoClass::updateSightRange(IUnknown * aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2BD0.json)
}

// ==== BACKFILL 0x004C2C10  UnitClass::updateHarvesting  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
UnitClass* UnitClass::updateHarvesting()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C2C10.json)
}

// ==== BACKFILL 0x004C2C30  ??0Iostream_init_QAE_XZ_3  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_4C2C30::__0Iostream_init_QAE_XZ_3()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2C30)
}

// ==== BACKFILL 0x004C2FC0  sub_4C2FC0  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
int * E4Recv_4C2FC0::sub_4C2FC0(DropListClass * aP1, ControlClass * aP2, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, int a10)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C2FC0)
}

// ==== BACKFILL 0x004C30B0  DropListClass::Constructor  cls=DropListClass  sig=csp  renamed_refs=0  residual=- ====
int DropListClass::Constructor() {
  return 0;  /* G42.33b2 restub: DropListClass_vftable + base cast chain */
}

// ==== BACKFILL 0x004C32A0  DropListClass::GetSelected  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
int DropListClass::GetSelected() {
  return 0;  /* G42.33b2 restub: q010/q014/q018/m_C + DrawBuildingTilesSHP unresolved */
}

// ==== BACKFILL 0x004C3570  DropListClass::Close  cls=EditClass  sig=csp  renamed_refs=0  residual=- ====
int DropListClass::Close() {
  return 0;  /* G42.33b2 restub: wrong-universe members */
}

// ==== BACKFILL 0x004C37D0  sub_4C37D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned char * sub_4C37D0(int a1, unsigned char * a2, int a3, unsigned char a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C37D0)
}

// ==== BACKFILL 0x004C38D0  sub_4C38D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4C38D0::sub_4C38D0()
{

  return ((unsigned int)this + 1) << 8; /*0x4c38d6*/

}

// ==== BACKFILL 0x004C3C90  sub_4C3C90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t ** E4Recv_4C3C90::sub_4C3C90(wchar_t * a2, wchar_t * a3, wchar_t * String, wchar_t * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C3C90)
}

// ==== BACKFILL 0x004C4F90  TaskForceClass::Check  cls=TaskForceClass  sig=csp  renamed_refs=0  residual=- ====
int TaskForceClass::Check()
{

  sprintf((char *const )(byte_8A37A0), "%d,%s", *(unsigned int *)this->__pad_0, (const char *)(this->TaskForceClass_field_0x4 + 36)); /*0x4c4fa4*/
  return byte_8A37A0; /*0x4c4fb1*/

}

// ==== BACKFILL 0x004C4FC0  sub_4C4FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4C4FC0::sub_4C4FC0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C4FC0)
}

// ==== BACKFILL 0x004C5470  sub_4C5470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4C5470()
{
  int result; // eax

  for ( result = dword_8A3880; dword_8A3880; result = dword_8A3880 ) /*0x4c5477*/
  {
    if ( *(unsigned int *)dword_8A3874 ) /*0x4c547e*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)dword_8A3874 + 32))(*(unsigned int *)dword_8A3874, 1); /*0x4c5488*/
  }
  return result; /*0x4c5494*/
}

// ==== BACKFILL 0x004C59F0  EMPulseClass::ddtor  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::ddtor(unsigned int *a2)  // G42 sig-sync: IDA int __stdcall ddtor(this,_DWORD*) (1 param; def had phantom)
{
  if ( !a2 ) /*0x4c59f6*/
    return -2147467261; /*0x4c59f8*/
  *a2 = -1205482718; /*0x4c5a06*/
  a2[1] = 298983438; /*0x4c5a0e*/
  a2[2] = 1610656159; /*0x4c5a17*/
  a2[3] = unk_7E996C; /*0x4c5a20*/
  return 0; /*0x4c59fd*/
}

// ==== BACKFILL 0x004C5AA0  EMPulseClass::StubReturn52  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::StubReturn52()
{

  return 52; /*0x4c5aa5*/

}

// ==== BACKFILL 0x004C5AB0  EMPulseClass::StubReturn55  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
int EMPulseClass::StubReturn55()
{

  return 55; /*0x4c5ab5*/

}

// ==== BACKFILL 0x004C5AC0  EMPulseClass::CopyTo  cls=EMPulseClass  sig=csp  renamed_refs=0  residual=- ====
EMPulseClass * EMPulseClass::CopyTo(void * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C5AC0)
}

// ==== BACKFILL 0x004C6340  SaveGame::SaveBlock68  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::SaveBlock68(int a2)
{

  return (*(int (**)(int, SaveGame *, int, unsigned int))(*(unsigned int *)a2 + 16))(a2, this, 68, 0); /*0x4c634f*/

}

// ==== BACKFILL 0x004C6780  ScenarioClass::SetEvent  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
void* ScenarioClass::SetEvent(int a1, int a2, int a3, int a4, int a5, int a6) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004C68E0  sub_4C68E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * AnimClass::sub_4C68E0(int a2, int a3, IUnknown * aP3, IUnknown * aP4, int a6, char a7, int a8, char a9, int a10, int a11)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C68E0)
}

// ==== BACKFILL 0x004C69E0  sub_4C69E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C69E0::sub_4C69E0(int a2, char a3, int a4, unsigned short * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C69E0)
}

// ==== BACKFILL 0x004C6A60  sub_4C6A60  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C6A60::sub_4C6A60(int a2, char a3, int a4, int a5, unsigned short * a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C6A60)
}

// ==== BACKFILL 0x004C6BE0  sub_4C6BE0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4C6BE0::sub_4C6BE0(int a2, char a3, int a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C6BE0)
}

// ==== BACKFILL 0x004C9150  XSurface::vt_entry_68  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int XSurface::vt_entry_68()
{

  return 0; /*0x4c9152*/

}

// ==== BACKFILL 0x004C91B0  ?do_always_noconv_codecvt_base_std__MBE_NXZ_5  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_5()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4C91B0)
}

// ==== BACKFILL 0x004C9470  TechnoClass::GetWeaponType  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void* TechnoClass::GetWeaponType(void* a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4c9470.json */
}

// ==== BACKFILL 0x004C9680  BuildingTypeClass::GetPowerOutput  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::GetPowerOutput(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004C9680.json)
}

// ==== BACKFILL 0x004CA120  ObjectClass::GetMember09  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember09()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CA120)
}

// ==== BACKFILL 0x004CA130  ObjectClass::IsCliffWall  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool ObjectClass::IsCliffWall() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4ca130.json */
}

// ==== BACKFILL 0x004CA160  AbstractClass::GetType  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::GetType()
{

  return *((unsigned int *)this + 22); /*0x4ca163*/

}

// ==== BACKFILL 0x004CA230  FactoryClass::ddtor  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CA230.json)
}

// ==== BACKFILL 0x004CA3C0  FactoryClass::Seek  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::Seek(int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CA3C0.json)
}

// ==== BACKFILL 0x004CA620  FactoryClass::RemoveOneFromQueue  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
char FactoryClass::RemoveOneFromQueue(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CA620.json)
}

// ==== BACKFILL 0x004CA6E0  HouseClass::UpdateTeamProductionSpeed  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::UpdateTeamProductionSpeed()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CA6E0.json)
}

// ==== BACKFILL 0x004CA750  FactoryClass::StubReturn12  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::StubReturn12()
{

  return 12; /*0x4ca755*/

}

// ==== BACKFILL 0x004CA760  FactoryClass::StubReturn116  cls=FactoryClass  sig=csp  renamed_refs=0  residual=- ====
int FactoryClass::StubReturn116()
{

  return 116; /*0x4ca765*/

}

// ==== BACKFILL 0x004CA890  AbstractClass::processScriptEvent  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::processScriptEvent() {
}

// ==== BACKFILL 0x004CA8C0  AbstractClass::checkScriptCondition  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkScriptCondition(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4ca8c0.json */
}

// ==== BACKFILL 0x004CAA70  AbstractClass::executeScriptAction  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::executeScriptAction(int a2, void* a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4caa70.json */
}

// ==== BACKFILL 0x004CAB20  AbstractClass::validateScriptArgs  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::validateScriptArgs(void* a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4cab20.json */
}

// ==== BACKFILL 0x004CABA0  AbstractClass::resetScriptState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::resetScriptState(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4caba0.json */
}

// ==== BACKFILL 0x004CAD80  BuildingLight::CalcIntensity  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double BuildingLight::CalcIntensity(double a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CAD80)
}

// ==== BACKFILL 0x004CADB0  Math::ArcTan2_Table  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Math::ArcTan2_Table(double a1)
{

  int v1; // eax

  (v1) = ((v1) & ~0xFFFF) | ((Math::RoundToInt((a1 + 1.0) * -2048.0)) & 0xFFFF); /*0x4cadc0*/
  return 4 * v1; /*0x4cadd7*/

}

// ==== BACKFILL 0x004CADE0  Math::ArcTan  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Math::ArcTan(double a1)
{

  int v2; // eax
  int16_t v3; // fps
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  int result; // eax
  float v8; // [esp+4h] [ebp+4h]

  v8 = a1; /*0x4cade4*/
  (v2) = ((v2) & ~0xFFFF) | ((Math::RoundToInt(a1 / flt_8650B8)) & 0xFFFF); /*0x4cadee*/
  result = abs32(v2); /*0x4cadf6*/
  v4 = v8 < 0.0; /*0x4cae12*/
  v5 = 0; /*0x4cae12*/
  v6 = v8 == 0.0; /*0x4cae12*/
  (result) = ((result) & ~0xFFFF) | ((v3) & 0xFFFF); /*0x4cae18*/
  return result; /*0x4cae21*/

}

// ==== BACKFILL 0x004CB1A0  ComputeChronosphereDistortion  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double ComputeChronosphereDistortion(float a1)
{
  int v1; // eax
  signed int v2; // eax

  (v1) = ((v1) & ~0xFFFF) | ((Math::RoundToInt(flt_8223B4 * a1)) & 0xFFFF); /*0x4cb1aa*/
  v2 = (v1 / 2) & 0x80001FFF; /*0x4cb1b9*/
  if ( v2 >= 0 ) /*0x4cb1be*/
    return v2 + 2048; /*0x4cb1be*/
  v2 = (((unsigned short)v2 - 1) | 0xFFFFE000) + 1; /*0x4cb1c6*/
  if ( v2 >= 0 ) /*0x4cb1c7*/
    return v2 + 2048; /*0x4cb1d0*/
  else
    return v2 + 10240; /*0x4cb1c9*/
}

// ==== BACKFILL 0x004CB3D0  globalHelper_0CB3D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double globalHelper_0CB3D0(AbstractClass * aP0, AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB3D0)
}

// ==== BACKFILL 0x004CB760  TerrainInitMap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char* ObjectClass::TerrainInitMap(char * Destination, RandomStruct * aP1, IUnknown * aP2) {

  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, aP1, 4u); /*0x4cb76d*/
  *((unsigned short *)Destination + 2) = 6; /*0x4cb774*/
  *((unsigned short *)Destination + 3) = 4; /*0x4cb77a*/
  v4 = (char *)__2_YAPAXI_Z(4u); /*0x4cb780*/
  v5 = *((uint16_t *)Destination + 3); /*0x4cb791*/
  *((unsigned int *)Destination + 2) = v4; /*0x4cb793*/
  qmemcpy(v4, &aP2, 4 * (v5 >> 2)); /*0x4cb799*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb799*/
  qmemcpy(v6, &aP2 + 4 * (v5 >> 2), v5 & 3); /*0x4cb7a5*/
  *((unsigned int *)Destination + 3) = 0; /*0x4cb7a8*/
  return Destination; /*0x4cb7a7*/

}

// ==== BACKFILL 0x004CB7C0  BuildResultPacket  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char* ObjectClass::BuildResultPacket(char * Destination, char * Source, IUnknown * aP2) {

  unsigned int v4; // kr04_4
  char *v5; // eax
  uint16_t v6; // cx
  char v7; // dl
  int v8; // ecx
  char *v9; // edi

  strncpy(Destination, Source, 4u); /*0x4cb7cd*/
  *((unsigned short *)Destination + 2) = 7; /*0x4cb7dd*/
  v4 = strlen(aP2) + 1; /*0x4cb7e3*/
  *((unsigned short *)Destination + 3) = v4; /*0x4cb7e9*/
  v5 = (char *)__2_YAPAXI_Z((uint16_t)v4); /*0x4cb7f3*/
  v6 = *((unsigned short *)Destination + 3); /*0x4cb7fc*/
  *((unsigned int *)Destination + 2) = v5; /*0x4cb800*/
  v7 = v6; /*0x4cb803*/
  v8 = v6 >> 2; /*0x4cb808*/
  qmemcpy(v5, aP2, 4 * v8); /*0x4cb80b*/
  v9 = &v5[4 * v8]; /*0x4cb80b*/
  qmemcpy(v9, &aP2[4 * v8], v7 & 3); /*0x4cb814*/
  *((unsigned int *)Destination + 3) = 0; /*0x4cb817*/
  return Destination; /*0x4cb816*/

}

// ==== BACKFILL 0x004CB8B0  sub_4CB8B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
u_short E4Recv_4CB8B0::sub_4CB8B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CB8B0)
}

// ==== BACKFILL 0x004CC310  TrajectoryHelper::FindFirstImpenetrableObstacle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TrajectoryHelper::FindFirstImpenetrableObstacle(IUnknown * aP0, int * a1, int arg0, void * a3)
{

  unsigned int *FirstObstacle; // eax
  unsigned int *v5; // esi

  FirstObstacle = TrajectoryHelper::FindFirstObstacle(aP0, a1, *(unsigned int *)(arg0 + 160), a3); /*0x4cc322*/
  v5 = FirstObstacle; /*0x4cc327*/
  if ( FirstObstacle /*0x4cc342*/
    && BuildingPlacement::ValidateType(FirstObstacle, -1, -1)
    && *(unsigned char *)(*(unsigned int *)(arg0 + 172) + 324) )
  {
    return 0; /*0x4cc34d*/
  }
  else
  {
    return v5; /*0x4cc353*/
  }

}

// ==== BACKFILL 0x004CCA20  JumpjetLocomotionClass::StubReturnZero_7  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CCA20.json)
}

// ==== BACKFILL 0x004CCA70  sub_4CCA70  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4CCA70::sub_4CCA70()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CCA70)
}

// ==== BACKFILL 0x004CCA90  JumpjetLocomotionClass::ComputeFloatExpression  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ComputeFloatExpression(int a1)
{

  return LOBYTE(a1->Wobbles) || ((unsigned int *)a1)[0] > 0.0; /*0x4ccab3*/

}

// ==== BACKFILL 0x004CCAC0  JumpjetLocomotionClass::ComputeFloatExpression_0  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ComputeFloatExpression_0(int a1)
{

  return *(double *)a1->CurrentSpeed != 0.0; /*0x4ccad6*/

}

// ==== BACKFILL 0x004CCAE0  JumpjetLocomotionClass::GetMovementCoordinate  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CCAE0.json)
}

// ==== BACKFILL 0x004CCB40  JumpjetLocomotionClass::ProcessLocomotionStep  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::ProcessLocomotionStep(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CCB40.json)
}

// ==== BACKFILL 0x004CD510  JumpjetLocomotionClass::IsMapCoordVisible  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::IsMapCoordVisible()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CD510.json)
}

// ==== BACKFILL 0x004CE4B0  ProcessDataHelper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_4CE4B0::ProcessDataHelper(void* a2, int a3) {

  double v3; // st7
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v10; // [esp+4h] [ebp-18h]
  double v12; // [esp+Ch] [ebp-10h]

  v10 = (*((int (**)(void **))((unsigned int *)this)[0] + 33))(&((unsigned int *)this)[0]); /*0x4ce4c1*/
  if ( v10 <= 0 ) /*0x4ce4c5*/
    return 0; /*0x4ce594*/
  a3 = (int16_t)a3 - 0x3FFF; /*0x4ce4d7*/
  __asm { fild dword ptr [esp+20h+arg_4] } /*0x4ce4dc*/
  _ESI = a2; /*0x4ce4e1*/
  __asm { fmul ds:dbl_7E2810 } /*0x4ce4e6*/
  v5 = a2[2]; /*0x4ce4ec*/
  __asm /*0x4ce4ef*/
  {
    fstp [esp+28h+var_14+4]
    fild dword ptr [esp+28h+var_1C+4]
  }
  __asm
  {
    fstp [esp+30h+var_1C+4]
    fild dword ptr [esi+4]
    fstp [esp+30h+var_C+4]
  }
  Math::SinCos(v12); /*0x4ce50c*/
  __asm /*0x4ce511*/
  {
    fmul [esp+30h+var_1C+4]
    fsubr [esp+30h+var_C+4]
  }
  (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt(v3)) & 0xFFFF); /*0x4ce519*/
  a3 = v6; /*0x4ce520*/
  Math::ArcTan2(v12); /*0x4ce524*/
  __asm { fmul [esp+38h+var_1C+4] } /*0x4ce529*/
  __asm { fiadd dword ptr [esi] }
  (v7) = ((v7) & ~0xFFFF) | ((Math::RoundToInt(v3)) & 0xFFFF); /*0x4ce532*/
  v8 = a3; /*0x4ce537*/
  *a2 = v7; /*0x4ce53d*/
  a2[1] = v8; /*0x4ce53f*/
  a2[2] = v5; /*0x4ce542*/
  LOWORD(a3) = *a2 / 256; /*0x4ce558*/
  HIWORD(a3) = a2[1] / 256; /*0x4ce571*/
  return 2 /*0x4ce58e*/
       - ((uint8_t)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3) != 0);

}

// ==== BACKFILL 0x004CF830  JumpjetLocomotionClass::CalculateBobOffset  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::CalculateBobOffset(int a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CF830.json)
}

// ==== BACKFILL 0x004CF940  JumpjetLocomotionClass::ShortFunc_4CF940  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::ShortFunc_4CF940(int a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CF940.json)
}

// ==== BACKFILL 0x004CFB00  JumpjetLocomotionClass::ComputeVoxelMatrix  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
float * JumpjetLocomotionClass::ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CFB00.json)
}

// ==== BACKFILL 0x004CFC10  JumpjetLocomotionClass::SynchronizeFacingDirection  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SynchronizeFacingDirection(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CFC10)
}

// ==== BACKFILL 0x004CFC80  FlyLocomotionClass::ddtor  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CFC80.json)
}

// ==== BACKFILL 0x004CFCC0  FlyLocomotionClass::BeginMove  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::BeginMove(int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CFCC0.json)
}

// ==== BACKFILL 0x004CFD90  JumpjetLocomotionClass::ShortFunc_4CFD90  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::ShortFunc_4CFD90(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4CFD90)
}

// ==== BACKFILL 0x004CFDA0  JumpjetLocomotionClass::DispatchVirtualCall_1  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::DispatchVirtualCall_1(int a1)
{

  return *(unsigned char *)((*((int (**)(FootClass *))((unsigned int *)a1)[0]->vtable1 + 33))(((unsigned int *)a1)[0]) + 3367) == 0; /*0x4cfdbe*/

}

// ==== BACKFILL 0x004CFE20  JumpjetLocomotionClass::ComputeFloatExpression_1  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
long long JumpjetLocomotionClass::ComputeFloatExpression_1(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CFE20.json)
}

// ==== BACKFILL 0x004CFE50  JumpjetLocomotionClass::StubReturnZero_8  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_8(unsigned char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004CFE50.json)
}
