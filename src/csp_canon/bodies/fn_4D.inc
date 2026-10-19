// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004D02B0  VoxelAnimClass::UpdateMatrix  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
char VoxelAnimClass::UpdateMatrix()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D02B0.json)
}

// ==== BACKFILL 0x004D0390  FlyLocomotionClass::StubReturn96  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int FlyLocomotionClass::StubReturn96()
{

  return 96; /*0x4d0395*/

}

// ==== BACKFILL 0x004D03A0  FlyLocomotionClass::ProcessMove  cls=FlyLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
FlyLocomotionClass * FlyLocomotionClass::ProcessMove(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D03A0.json)
}

// ==== BACKFILL 0x004D03D0  UnitClass::CompareCoordinateMagnitude  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::CompareCoordinateMagnitude(short* a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D03D0.json)
}

// ==== BACKFILL 0x004D0400  JumpjetLocomotionClass::CheckWindowsErrorWrapper_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004D0400.json)
}

// ==== BACKFILL 0x004D0430  Release3COM  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::Release3COM()
{

  int result; // eax

  result = (int)this->AbstractClass; /*0x4d0430*/
  if ( this->AbstractClass ) /*0x4d0430*/
    return (*(int (**)(int))(*(unsigned int *)result + 8))(result); /*0x4d0439*/
  return result; /*0x4d043c*/

}

// ==== BACKFILL 0x004D0510  JumpjetLocomotionClass::GetInterface  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::GetInterface(int a1, const void * a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0510)
}

// ==== BACKFILL 0x004D0520  JumpjetLocomotionClass::GetInterface2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::GetInterface2(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0520)
}

// ==== BACKFILL 0x004D0530  JumpjetLocomotionClass::Stub2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::Stub2(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D0530)
}

// ==== BACKFILL 0x004D08B0  ObjectClass::Construct  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* ObjectClass::Construct() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4d08b0.json */
}

// ==== BACKFILL 0x004D2370  MarkAllFootOccupancies  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4D2370()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2370)
}

// ==== BACKFILL 0x004D24A0  FoggedObjectClass::SaveToINI  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int   FoggedObjectClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  int v4; // edx
  int v5; // ebp
  int v6; // edi

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0), (gamemd::ObjectTypeClass *)a1, (gamemd::ObjectTypeClass *)aP2); /*0x4d24b3*/
  if ( result >= 0 ) /*0x4d24ba*/
  {
    v4 = *a1; /*0x4d24bf*/
    aP2 = *((unsigned int *)aP0 + 27); /*0x4d24cb*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x4d24cf*/
    if ( result >= 0 ) /*0x4d24d4*/
    {
      v5 = 0; /*0x4d24da*/
      if ( aP2 > 0 ) /*0x4d24de*/
      {
        v6 = 0; /*0x4d24e0*/
        do /*0x4d2500*/
        {
          if ( (*(int (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, v6 + *((unsigned int *)aP0 + 24), 16, 0) < 0 ) /*0x4d24f4*/
            break; /*0x4d24f4*/
          ++v5; /*0x4d24fa*/
          v6 += 16; /*0x4d24fb*/
        }
        while ( v5 < aP2 ); /*0x4d2500*/
      }
      return 0; /*0x4d2502*/
    }
  }
  return result; /*0x4d2504*/

}

// ==== BACKFILL 0x004D2790  CellClass::recalcPassability  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::recalcPassability() {

  if ( *((unsigned int *)this + 12) == 6 ) /*0x4d2794*/
    return (*(int (**)(unsigned int, unsigned int))(***(unsigned int ***)((char *)this + 96) + 144))(**(unsigned int **)((char *)this + 96), 0); /*0x4d279f*/
  else
    return 0; /*0x4d27a6*/

}

// ==== BACKFILL 0x004D27B0  FoggedObjectClass::GetTypeIdentifier  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetTypeIdentifier()
{

  return 61; /*0x4d27b5*/

}

// ==== BACKFILL 0x004D27C0  FoggedObjectClass::GetObjectSize  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetObjectSize()
{

  return 120; /*0x4d27c5*/

}

// ==== BACKFILL 0x004D27D0  FoggedObjectClass::GetClassIdentifier  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
int FoggedObjectClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4d27d6*/
    return -2147467261; /*0x4d27d8*/
  *a2 = 474417934; /*0x4d27e6*/
  a2[1] = 299002327; /*0x4d27ee*/
  a2[2] = 1610674872; /*0x4d27f7*/
  a2[3] = unk_7E999C; /*0x4d2800*/
  return 0; /*0x4d27dd*/

}

// ==== BACKFILL 0x004D28C0  TechnoClass::recalcThreat  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::recalcThreat() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4d28c0.json */
}

// ==== BACKFILL 0x004D2910  FoggedObjectClass::ddtor  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
FoggedObjectClass * FoggedObjectClass::ddtor(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2910)
}

// ==== BACKFILL 0x004D2930  AbstractClass::getMissionState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::getMissionState() {
}

// ==== BACKFILL 0x004D2960  AbstractClass::setMissionState  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::setMissionState(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4d2960.json */
}

// ==== BACKFILL 0x004D2E40  Vector::ReallocDynamic  cls=Vector  sig=csp  renamed_refs=0  residual=- ====
void Vector::ReallocDynamic(int a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D2E40)
}

// ==== BACKFILL 0x004D4FC0  sub_4D4FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_4D4FC0::sub_4D4FC0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4D4FC0)
}

// ==== BACKFILL 0x004D94A0  ObjectClass::SetMember360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetMember360(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x4d94a0.json */
}

// ==== BACKFILL 0x004DA020  globalHelper_0DA020  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * globalHelper_0DA020(unsigned int *a0, AbstractClass * aP1)
{
  *a0 = *(unsigned int *)aP1;
  return a0; /*0x4da02c*/
}

// ==== BACKFILL 0x004DA030  InfantryClass::ProcessExitQueue  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::ProcessExitQueue()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DA030.json)
}

// ==== BACKFILL 0x004DA2B0  AbstractClass::COMStub_143  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass_COMStub_143()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4DA2B0)
}

// ==== BACKFILL 0x004DB0D0  TechnoClass::QueueDrawVoiceResponse  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::QueueDrawVoiceResponse(void* a1, int aP2, int aP3, int aP4, int aP5, void* aP6, int aP7, int aP8, int aP9, int aP10, int aP11) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 15 errs): wrong-universe gap2 body; truth func_0x4db0d0.json */
}

// ==== BACKFILL 0x004DB250  AbstractClass::COMStub_Return0_69  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::COMStub_Return0_69(Tactical * aP0, AbstractClass * aP1)
{

  ; /*0x4db250*/

}

// ==== BACKFILL 0x004DBA30  FootClass::vt_entry_548  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_548() {
    ; /*0x4dba30*/
}

// ==== BACKFILL 0x004DBA40  FootClass::vt_entry_54C  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::vt_entry_54C() {
    ; /*0x4dba40*/
}

// ==== BACKFILL 0x004DBA50  TechnoClass::GetTargetCellCenter  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetTargetCellCenter(AbstractClass *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DBA50.json)
}

// ==== BACKFILL 0x004DEE50  FootClass::vt_entry_530  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::vt_entry_530(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DEE50.json)
}

// ==== BACKFILL 0x004DF1C0  TechnoClass::vt_entry_4AC  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
BOOL TechnoClass::vt_entry_4AC() {
    return *((unsigned int *)this + 369) != -1; /*0x4df1ce*/
}

// ==== BACKFILL 0x004DF1D0  TechnoClass::vt_entry_4B0  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::vt_entry_4B0() {
    return *((unsigned char *)this + 1489); /*0x4df1d6*/
}

// ==== BACKFILL 0x004DF1E0  TechnoClass::vt_entry_4B4  cls=TechnoClass  sig=csp  renamed_refs=0  residual=u32_5C4 ====
int TechnoClass::vt_entry_4B4() {
  return this->u32_5C4; /*0x4df1e6*/
}

// ==== BACKFILL 0x004DF280  sub_4DF280  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_4DF280::sub_4DF280()
{

  int v2; // ecx
  unsigned int *v3; // eax
  int v4; // [esp+4h] [ebp-14h]
  int16_t v5[2]; // [esp+8h] [ebp-10h] BYREF
  unsigned char v6[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *((unsigned int *)this + 371); /*0x4df286*/
  if ( v2 ) /*0x4df28e*/
  {
    v3 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v2 + 72))(v2, v6); /*0x4df297*/
    (v4) = ((v4) & ~0xFFFF) | ((*v3 / 256) & 0xFFFF); /*0x4df2aa*/
    HIWORD(v4) = v3[1] / 256; /*0x4df2c3*/
    *(unsigned int *)v5 = v4; /*0x4df2d1*/
    *((unsigned int *)this + 370) = (unsigned int)(((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v5)); /*0x4df2da*/
  }
  else
  {
    *((unsigned int *)this + 370) = 0; /*0x4df2ef*/
  }
  *((unsigned int *)this + 371) = 0; /*0x4df2e0*/

}

// ==== BACKFILL 0x004DF310  TechnoClass::vt_entry_4C4  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
BOOL TechnoClass::vt_entry_4C4() {
    return *((unsigned int *)this + 369) == 29; /*0x4df31e*/
}
