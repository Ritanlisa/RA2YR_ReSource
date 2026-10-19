// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00710410  ObjectClass::ClearPointerRefs  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ClearPointerRefs() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x710410.json */
}

// ==== BACKFILL 0x00710460  ObjectClass::FreeCaptureManager  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::FreeCaptureManager() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x710460.json */
}

// ==== BACKFILL 0x00710550  CCINIClass::IterateNodes  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
int CCINIClass::IterateNodes(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x007105E0  BuildingClass::IsBeingRepairedOrCaptured  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsBeingRepairedOrCaptured()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007105E0.json)
}
} // namespace gamemd

// ==== BACKFILL 0x00710750  Object_Helper_710750  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_710750::Object_Helper_710750(int a2) {

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x71075c*/
    return 0; /*0x71075c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x710770*/
  if ( !v3 ) /*0x710777*/
    return 0; /*0x7107d0*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x710785*/
  {
    v5 = 8 * i; /*0x710789*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x710792*/
    *(unsigned int *)&v3[v5] = *v6; /*0x710797*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x7107ab*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x7107b6*/
  *(unsigned int *)this = v3; /*0x7107b8*/
  *((unsigned int *)this + 2) = v7; /*0x7107ba*/
  *((unsigned int *)this + 4) = 0; /*0x7107bd*/
  return 1; /*0x7107c4*/

}

// ==== BACKFILL 0x00711AE0  TechnoTypeClass::DTOR  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoTypeClass::DTOR(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00711AE0.json)
}

// ==== BACKFILL 0x00711E80  AbstractClass::processWeaponFire  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::processWeaponFire()
{

  return 1; /*0x711e82*/

}

// ==== BACKFILL 0x00711E90  TechnoTypeClass::CanAttackMove_IgnoreWeapon  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{

  return *(unsigned int *)&((unsigned int *)this)[1972] && !((unsigned int *)this)[1508]; /*0x711ea6*/

}

// ==== BACKFILL 0x00711EB0  TechnoClass::GetMember388  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::GetMember388() const {
    return *(unsigned int *)((char *)this + 1552); /*0x711eb6 真值 [ecx+610h]*/
}

// ==== BACKFILL 0x00711EE0  TechnoTypeClass::ComputeBuildTime  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
double TechnoTypeClass::ComputeBuildTime()
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00711EE0.json)
}

// ==== BACKFILL 0x00712120  AircraftTypeClass::GetGameplayValue  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AircraftTypeClass::GetGameplayValue()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x712120)
}

// ==== BACKFILL 0x007178B0  UnitClass::processEnterTarget  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::processEnterTarget(int a2)
{
  return this->ToolTipText[a2 + 75]; /*0x7178bb*/
}

// ==== BACKFILL 0x007179A0  TechnoTypeClass::ddtor  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
TechnoTypeClass * TechnoTypeClass::ddtor(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007179A0.json)
}

// ==== BACKFILL 0x007179C0  nullsub_86  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_86()
{

  ; /*0x7179c0*/

}

// ==== BACKFILL 0x007179D0  ObjectTypeClass::loadTypeMember_57179D0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007179D0.json)
}

// ==== BACKFILL 0x00717A30  ObjectTypeClass::loadTypeMember_5717A30  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717A30.json)
}

// ==== BACKFILL 0x00717A40  ReadPointerFromECX4  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_717A40::ReadPointerFromECX4()
{

  return (int)this->AbstractClass; /*0x717a42*/

}

// ==== BACKFILL 0x00717A50  ObjectTypeClass::loadTypeMember_5717A50  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717A50.json)
}

// ==== BACKFILL 0x00717A70  ObjectTypeClass::loadTypeMember_5717A70  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A70()
{

  return (int)((unsigned int *)this)[0]; /*0x717a73*/

}

// ==== BACKFILL 0x00717A80  ObjectTypeClass::loadTypeMember_5717A80  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717A80.json)
}

// ==== BACKFILL 0x00717AA0  ObjectTypeClass::loadTypeMember_5717AA0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AA0()
{

  return (int)((unsigned int *)this)[0]; /*0x717aa3*/

}

// ==== BACKFILL 0x00717AB0  ObjectTypeClass::loadTypeMember_5717AB0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717AB0.json)
}

// ==== BACKFILL 0x00717AD0  ObjectTypeClass::loadTypeMember_5717AD0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5717AD0()
{

  return (int)((unsigned int *)this)[0]; /*0x717ad3*/

}

// ==== BACKFILL 0x00717AE0  ObjectTypeClass::loadTypeMember_5717AE0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x717AE0)
}

// ==== BACKFILL 0x00717AF0  TechnoTypeClass::Constructor  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TechnoTypeClass::Constructor(void *a1, void *a2, void *a3, void *a4, void *a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717AF0.json)
}

// ==== BACKFILL 0x00717B20  TechnoTypeClass::SaveLoadDataArray  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
int  TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717B20.json)
}

// ==== BACKFILL 0x00717B70  TypeList_cptr_ParticleSystemTypeClass::QueryInterface  cls=_TypeList_PBVParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
TypeList_flat * TypeList_cptr_ParticleSystemTypeClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x717b73*/
  *(unsigned int *)Block =(unsigned int)(&g_ptr_7E8500); /*0x717b76*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x717b80*/
  {
    __3_YAXPAX_Z(v3); /*0x717b88*/
    *((unsigned int *)Block + 1) = 0; /*0x717b90*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x717b9b*/
  *((unsigned int *)Block + 2) = 0; /*0x717ba1*/
  if ( (a2 & 1) != 0 ) /*0x717ba8*/
    __3_YAXPAX_Z(Block); /*0x717bab*/
return (gamemd::TypeList_flat *)Block; /*0x717bb5*/

}

// ==== BACKFILL 0x00717BC0  TechnoTypeClass::Constructor_0  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717BC0.json)
}

// ==== BACKFILL 0x00717BE0  TechnoTypeClass::Constructor_1  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717BE0.json)
}

// ==== BACKFILL 0x00717BF0  ObjectTypeClass::CheckFlag  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectTypeClass::CheckFlag(ObjectTypeClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717BF0.json)
}

// ==== BACKFILL 0x00717C70  TypeList::ParticleConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList_flat::ParticleConstructor(int a2, int a3)
{

  ((unsigned int *)this)[0] = 0; /*0x717c79*/
  ((unsigned int *)this)[0] = a2; /*0x717c80*/
  ((unsigned int *)this)[0] = 1; /*0x717c83*/
  ((unsigned int *)this)[0] = 0; /*0x717c87*/
  this->DynamicVectorClass = &g_ptr_7E8500; /*0x717c8b*/
  if ( a2 ) /*0x717c91*/
  {
    if ( a3 ) /*0x717c99*/
    {
      ((unsigned int *)this)[0] =(unsigned int)(void *)a3; /*0x717c9b*/
    }
    else
    {
      ((unsigned int *)this)[0] =(unsigned int)(void *)__2_YAPAXI_Z(4 * a2); /*0x717cac*/
      ((unsigned int *)this)[0] = 1; /*0x717caf*/
    }
  }
  this->DynamicVectorClass = &g_ptr_7E3238; /*0x717cb3*/
  ((unsigned int *)this)[0] = 10; /*0x717cb9*/
  ((unsigned int *)this)[0] = 0; /*0x717cc0*/
return (unsigned int *)&this->DynamicVectorClass; /*0x717cc9*/

}

// ==== BACKFILL 0x00717CD0  TypeList::PushBack  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
char TypeList_PushBack_free(void * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (truth = .omo/ida_cache/func_0x717CD0.json)
}

// ==== BACKFILL 0x00717D20  VectorClass::CopyParticle  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * VectorClass_flat::CopyParticle(DynamicVector * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717D20.json)
}

// ==== BACKFILL 0x00717DB0  TechnoTypeClass::RemoveItem  cls=TechnoTypeClass  sig=csp  renamed_refs=0  residual=- ====
char TechnoTypeClass::RemoveItem(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00717DB0.json)
}

// ==== BACKFILL 0x00718080  JumpjetLocomotionClass::ShortFunc_718080  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::ShortFunc_718080(int a1)
{

  return LOBYTE(a1->Wobbles) == 1; /*0x71808b*/

}

// ==== BACKFILL 0x007180A0  JumpjetLocomotionClass::GetCoordinateConditional  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int *   JumpjetLocomotionClass::GetCoordinateConditional(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007180A0.json)
}

// ==== BACKFILL 0x00718230  JumpjetLocomotionClass::ResetMovementState  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::ResetMovementState(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00718230.json)
}

// ==== BACKFILL 0x007192C0  JumpjetLocomotionClass::UpdateFacingDirection_3  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::UpdateFacingDirection_3(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7192C0)
}

// ==== BACKFILL 0x00719C60  JumpjetLocomotionClass::StubReturnZero_17  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_17(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719C60.json)
}

// ==== BACKFILL 0x00719CA0  JumpjetLocomotionClass::InitMultiFieldArray_0  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT JumpjetLocomotionClass::InitMultiFieldArray_0(int * a1, int * pStm)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719CA0.json)
}

// ==== BACKFILL 0x00719D40  JumpjetLocomotionClass::CheckWindowsErrorWrapper_2  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
HRESULT JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719D40.json)
}

// ==== BACKFILL 0x00719E20  JumpjetLocomotionClass::SmallStub_719E20  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_719E20(int a1)
{

  return 2; /*0x719e25*/

}

// ==== BACKFILL 0x00719E30  JumpjetLocomotionClass::UpdateAltitude  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::UpdateAltitude(int a1, const void * a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719E30.json)
}

// ==== BACKFILL 0x00719E90  JumpjetLocomotionClass::StubReturnZero_18  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_18(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719E90.json)
}

// ==== BACKFILL 0x00719EE0  JumpjetLocomotionClass::StubReturnZero_19  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::StubReturnZero_19(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719EE0.json)
}

// ==== BACKFILL 0x00719F30  JumpjetLocomotionClass::StubReturnTrue_7  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
bool JumpjetLocomotionClass::StubReturnTrue_7(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719F30.json)
}

// ==== BACKFILL 0x00719F80  JumpjetLocomotionClass::LoadLocomotionFromStream_3  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00719F80.json)
}

// ==== BACKFILL 0x0071A090  JumpjetLocomotionClass::DispatchVirtualCall_7  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::DispatchVirtualCall_7(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071A090.json)
}

// ==== BACKFILL 0x0071A0E0  JumpjetLocomotionClass::IUnknownAddRef  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::IUnknownAddRef(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A0E0)
}

// ==== BACKFILL 0x0071A0F0  JumpjetLocomotionClass::IUnknownRelease  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::IUnknownRelease(volatile LONG * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A0F0)
}

// ==== BACKFILL 0x0071A100  JumpjetLocomotionClass::ShortFunc_71A100  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
BOOL JumpjetLocomotionClass::ShortFunc_71A100(int a1)
{

  return *(unsigned int *)(a1 + 48) != 0; /*0x71a10e*/

}

// ==== BACKFILL 0x0071A120  JumpjetLocomotionClass::SmallStub_71A120  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A120()
{

  return 76; /*0x71a125*/

}

// ==== BACKFILL 0x0071A130  TeleportLocomotionClass::ConstructLocomotor  cls=TeleportLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
TeleportLocomotionClass * JumpjetLocomotionClass::ConstructLocomotor(ILocomotion ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071A130.json)
}

// ==== BACKFILL 0x0071A160  JumpjetLocomotionClass::SmallStub_71A160  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A160(int a1, const void * a2, int * a3)
{

  return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);

}

// ==== BACKFILL 0x0071A170  JumpjetLocomotionClass::SmallStub_71A170  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A170(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A170)
}

// ==== BACKFILL 0x0071A180  JumpjetLocomotionClass::SmallStub_71A180  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A180(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A180)
}

// ==== BACKFILL 0x0071A190  JumpjetLocomotionClass::SmallStub_71A190  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int JumpjetLocomotionClass::SmallStub_71A190(int a1, const void * a2, int * a3)
{

  return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);

}

// ==== BACKFILL 0x0071A1A0  JumpjetLocomotionClass::SmallStub_71A1A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A1A0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A1A0)
}

// ==== BACKFILL 0x0071A1B0  JumpjetLocomotionClass::SmallStub_71A1B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LONG JumpjetLocomotionClass::SmallStub_71A1B0(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71A1B0)
}

// ==== BACKFILL 0x0071A650  TemporalClass::SetTarget  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::SetTarget(AbstractClass * aP1)
{

  return ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x71a65a*/

}

// ==== BACKFILL 0x0071A660  TemporalClass::LoadTemporal  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x71a671*/
  if ( Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( aP0 ) /*0x71a679*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x71a682*/
      /* X11: ptr_0 install elided (implicit via TemporalClass virtuals 0x71a687) */
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F5154); /*0x71a68d*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F5154); /*0x71a694*/
      ((unsigned int *)aP0)[0] = (unsigned int)(&g_ptr_7F5154); /*0x71a69b*/
    }
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->creationFrame)); /*0x71a6ab*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0->__pad_28); /*0x71a6b9*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 16); /*0x71a6c7*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 17); /*0x71a6d5*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 14); /*0x71a6e3*/
    ObjectPtr_RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/

}

// ==== BACKFILL 0x0071A700  TemporalClass::SaveTemporal  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0),(gamemd::ObjectTypeClass *)(a1),(gamemd::ObjectTypeClass *)(aP2)); /*0x71a714*/

}

// ==== BACKFILL 0x0071A720  TemporalClass::ddtor  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = unk_7E98DC; /*0x71a750*/
  return 0; /*0x71a72d*/

}

// ==== BACKFILL 0x0071AB60  ObjectClass::UnlinkFromFactory  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* ObjectClass::UnlinkFromFactory(void* a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x71ab60.json */
}

// ==== BACKFILL 0x0071AD40  TriggerClass::UnlinkTags  cls=TriggerClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerClass::UnlinkTags() {
    TriggerClass *nextTrigger; // eax
    int v3; // eax
    int result; // eax

    nextTrigger = this->nextTrigger; /*0x71ad46*/
    if ( nextTrigger ) /*0x71ad4b*/
    {
      *(unsigned char *)((char *)nextTrigger + 624) = 0; /*0x71ad4d +0x270*/
      *(unsigned int *)((char *)nextTrigger + 632) = 0; /*0x71ad56 +0x278*/
      this->nextTrigger = 0; /*0x71ad5c*/
    }
    v3 = *(unsigned int *)&this->enabled; /*0x71ad5f*/
    if ( v3 ) /*0x71ad64*/
    {
      if ( *(TriggerClass **)(v3 + 64) == this ) /*0x71ad69*/
        *(unsigned int *)(v3 + 64) = 0; /*0x71ad6b*/
      (*(TagClass **)&this->enabled)->Unlink(); /*0x71ad71*/
      *(unsigned int *)&this->enabled = 0; /*0x71ad76*/
    }
    result = this->occuredEvents; /*0x71ad79*/
    if ( result ) /*0x71ad7e*/
    {
      if ( *(TriggerClass **)(result + 68) == this ) /*0x71ad83*/
        *(unsigned int *)(result + 68) = 0; /*0x71ad85*/
      result = ((TagClass *)this->occuredEvents)->Unlink(); /*0x71ad8b*/
      this->occuredEvents = 0; /*0x71ad90*/
    }
    *(unsigned int *)&this->enabled = 0; /*0x71ad93*/
    this->occuredEvents = 0; /*0x71ad96*/
    *(unsigned int *)((char *)this + 60) = 0; /*0x71ad99 +0x3C timer[2]*/
    *(unsigned int *)((char *)this + 56) = 0; /*0x71ad9c +0x38 timer[1]*/
    return result; /*0x71ad9f*/
}

// ==== BACKFILL 0x0071AE50  TemporalClass::CanWarpTarget  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char TemporalClass::CanWarpTarget(unsigned int * a1)
{

  int Member; // eax
  unsigned int *v3; // edi
  unsigned int *v4; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x71ae5b*/
    return 0; /*0x71ae5e*/
  if ( !*(unsigned char *)((*(int (**)(unsigned int *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(uint8_t (**)(unsigned int *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (**)(unsigned int *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = ((Team *)(a1))->GetMember(0); /*0x71aead*/
    v3 = (unsigned int *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(unsigned char *)(v3[328] + 5821) ) /*0x71aeca*/
        {
          v5[0] = a1[39]; /*0x71aedc*/
          v5[1] = a1[40]; /*0x71aeed*/
          v5[2] = a1[41]; /*0x71aef4*/
          v4 = (unsigned int *)(((Coord *)(&dword_87F7E8))->To_Cell(v5)); /*0x71aef8*/
          if ( ((Cell *)(v4))->IsBridge() == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/

}

// ==== BACKFILL 0x0071B190  TemporalClass::StubReturn80  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::StubReturn80() const { return 80; }

// ==== BACKFILL 0x0071B1A0  TemporalClass::StubReturn70  cls=TemporalClass  sig=csp  renamed_refs=0  residual=- ====
int TemporalClass::StubReturn70() const { return 70; }

// ==== BACKFILL 0x0071B7B0  TerrainClass::CleanupMembers  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::CleanupMembers() {
  AbstractClass *v2; // edi
  int v3; // eax
  int Vtable3; // eax
  void *ptr_4; // edx
  int v6; // edi
  int v7; // eax
  signed int v8; // eax
  int v9; // ecx
  char *i; // eax
  unsigned int *v11; // eax
  int v13[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (AbstractClass *)(this + 4); /*0x71b7b9*/
  /* X11: ptr_0 install elided (implicit via TerrainClass virtuals 0x71b7bc) */
  /* X11: ptr_0 install elided (implicit via TerrainClass virtuals 0x71b7c2) */
  /* X11: ptr_0 install elided (implicit via TerrainClass virtuals 0x71b7c9) */
  /* X11: ptr_0 install elided (implicit via off_7F5200 virtuals 0x71b7d0) */
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x71b7d6*/
  v13[0] = this; /*0x71b7eb*/
  v3 = (*(int (**)(unsigned int *, int *))(dword_A8E988 + 16))(&dword_A8E988, v13); /*0x71b7ef*/
  if ( v3 != -1 && v3 < dword_A8E998 && v3 < --dword_A8E998 ) /*0x71b80a*/
  {
    do /*0x71b822*/
    {
      ++v3; /*0x71b812*/
      *((unsigned int *)unk_A8E98C + v3 - 1) = *((unsigned int *)unk_A8E98C + v3); /*0x71b816*/
    }
    while ( v3 < dword_A8E998 ); /*0x71b822*/
  }
  if ( unk_A8E9A0 && this->q0C8 ) /*0x71b82d*/
  {
    this->isAliveFlag = 1; /*0x71b839*/
    TerrainClass::ApplyCellModifications((TerrainClass *)this); /*0x71b840*/
  }
  Vtable3 = AbstractClass::GetVtable3(v2); /*0x71b846*/
  ptr_4 = g_BuildingLoadQueue_Array.ptr_4; /*0x71b84b*/
  v6 = Vtable3; /*0x71b851*/
  if ( g_BuildingLoadQueue_Array.ptr_4 ) /*0x71b855*/
  {
    if ( !IDA_LOBYTE(g_BuildingLoadQueue_Array.ptr_C) ) /*0x71b862*/
    {
      qsort( /*0x71b872*/
        g_BuildingLoadQueue_Array.ptr_0,
        (size_t)g_BuildingLoadQueue_Array.ptr_4,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_4 = g_BuildingLoadQueue_Array.ptr_4; /*0x71b877*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x71b880*/
      IDA_LOBYTE(g_BuildingLoadQueue_Array.ptr_C) = 1; /*0x71b88a*/
    }
    v13[0] = v6; /*0x71b895*/
    v7 = BinaryArraySearch((int)g_BuildingLoadQueue_Array.ptr_0, (int)ptr_4, v13); /*0x71b8a0*/
    if ( v7 ) /*0x71b8a7*/
    {
      v8 = (signed int)(v7 - (unsigned int)g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x71b8af*/
      if ( v8 != -1 ) /*0x71b8b5*/
      {
        v9 = v8 + 1; /*0x71b8b7*/
        for ( i = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x71b8c1*/
              v9 < (int)g_BuildingLoadQueue_Array.ptr_4;
              i = (char *)g_BuildingLoadQueue_Array.ptr_4 )
        {
          v11 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * v9++; /*0x71b8c9*/
          *(v11 - 2) = *v11; /*0x71b8cf*/
          *(v11 - 1) = v11[1]; /*0x71b8d5*/
        }
        g_BuildingLoadQueue_Array.ptr_4 = i - 1; /*0x71b8ea*/
        *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = 0; /*0x71b8ef*/
        *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = 0; /*0x71b8ff*/
        g_BuildingLoadQueue_Array.uniqueId = 0; /*0x71b903*/
      }
    }
  }
// 0x5f3b80
  return ObjectClass::Dtor((ObjectClass *)this); /*0x71b910*/
}

// ==== BACKFILL 0x0071C070  TerrainClass::ClearCellFlags  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
void* TerrainClass::ClearCellFlags(void* a1) {
  int v2; // ebx
  unsigned int *v3; // ecx
  unsigned char *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c07d*/
    v2 = *(unsigned int *)(*(unsigned int *)&this->__pad_C0[8] + 684); /*0x71c093*/
  else
    v2 = *(unsigned int *)(*(unsigned int *)&this->__pad_C0[8] + 680); /*0x71c085*/
  v3 = a1; /*0x71c099*/
  IDA_LOWORD(a1) = *a1 / 256; /*0x71c0ab*/
  IDA_HIWORD(a1) = v3[1] / 256; /*0x71c0c4*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a1); /*0x71c0d6*/
  if ( (v2 & 1) != 0 ) /*0x71c0de*/
    result[292] &= ~4u; /*0x71c0e0*/
  if ( (v2 & 2) != 0 ) /*0x71c0ea*/
    result[292] &= ~8u; /*0x71c0ec*/
  if ( (v2 & 4) != 0 ) /*0x71c0f7*/
    result[292] &= ~0x10u; /*0x71c0f9*/
  return result; /*0x71c0f6*/
}

// ==== BACKFILL 0x0071C110  TerrainClass::SetOccupyBit_PassableTerrain  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
void* TerrainClass::SetOccupyBit_PassableTerrain(void* a1) {
  int v2; // ebx
  unsigned int *v3; // ecx
  unsigned char *result; // eax

  if ( dword_A8B230[130].uniqueId == 1 ) /*0x71c11d*/
    v2 = *(unsigned int *)(*(unsigned int *)&this->__pad_C0[8] + 684); /*0x71c133*/
  else
    v2 = *(unsigned int *)(*(unsigned int *)&this->__pad_C0[8] + 680); /*0x71c125*/
  v3 = a1; /*0x71c139*/
  IDA_LOWORD(a1) = *a1 / 256; /*0x71c14b*/
  IDA_HIWORD(a1) = v3[1] / 256; /*0x71c164*/
  result = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a1); /*0x71c176*/
  if ( (v2 & 1) != 0 ) /*0x71c17e*/
    result[292] |= 4u; /*0x71c180*/
  if ( (v2 & 2) != 0 ) /*0x71c18a*/
    result[292] |= 8u; /*0x71c18c*/
  if ( (v2 & 4) != 0 ) /*0x71c197*/
    result[292] |= 0x10u; /*0x71c199*/
  return result; /*0x71c196*/
}

// ==== BACKFILL 0x0071C5B0  TerrainClass::PlayAmbientAnimation  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::PlayAmbientAnimation() {
  int v2; // eax
  char v3; // si
  AnimClass *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  BuildingClass *v9; // eax
  BuildingClass *v10; // esi
  int v12[3]; // [esp+4h] [ebp-18h] BYREF
  char v13[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->__pad_C0[13] ) /*0x71c5b6*/
    return 0; /*0x71c5b6*/
  if ( this->__pad_C0[12] ) /*0x71c5c4*/
    return 0; /*0x71c5c4*/
  v2 = *(unsigned int *)&this->__pad_C0[8]; /*0x71c5d2*/
  if ( *(unsigned int *)(v2 + 156) != 6 || *(unsigned char *)(v2 + 689) ) /*0x71c5e5*/
    return 0; /*0x71c69d*/
  v3 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c60a*/
  v4 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x71c611*/
  if ( v4 ) /*0x71c618*/
  {
    v5 = (int *)(*((int (**)(TerrainClass *, char *))this->ptr_4 + 18))(this, v13); /*0x71c623*/
    v6 = *v5; /*0x71c626*/
    v7 = v5[1]; /*0x71c628*/
    v8 = v5[2]; /*0x71c62b*/
    v12[1] = v7; /*0x71c62e*/
    v12[0] = v6; /*0x71c63f*/
    v12[2] = v8 + 80; /*0x71c643*/
    v9 = (BuildingClass *)AnimClass::ctor( /*0x71c667*/
                            v4,
                            *(void **)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2964) + 4 * (v3 & 1)),
                            v12,
                            0,
                            255,
                            (void *)0x600,
                            0,
                            0);
    v10 = v9; /*0x71c66c*/
    if ( v9 ) /*0x71c670*/
      BuildingClass::AimTurret(v9, this); /*0x71c675*/
  }
  else
  {
    v10 = 0; /*0x71c699*/
  }
  ((unsigned int *)v10)[2] -= 20; /*0x71c683*/
  this->__pad_C0[12] = 1; /*0x71c68a*/
  return 1; /*0x71c694*/
}

// ==== BACKFILL 0x0071C6B0  TerrainClass::ProcessTick  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::ProcessTick() {
  TerrainTypeClass *health; // eax
  int v4; // [esp+8h] [ebp-8h]

  IDA_LOBYTE(health) = this->__pad_C0[12]; /*0x71c6b6*/
  if ( (unsigned char)health ) /*0x71c6be*/
  {
    IDA_LOBYTE(health) = this->__pad_C0[13]; /*0x71c6c0*/
    this->__pad_C0[12] = 0; /*0x71c6c6*/
    if ( !(unsigned char)health ) /*0x71c6cf*/
    {
      health = (TerrainTypeClass *)((unsigned int *)this)[0]; /*0x71c6d1*/
      if ( !health ) /*0x71c6d6*/
      {
        (*((void (**)(TerrainClass *, int))this->ptr_4 + 55))(this, 1); /*0x71c6dc*/
        (*((void (**)(TerrainClass *, int))this->ptr_4 + 73))(this, 2); /*0x71c6e8*/
        IDA_LOBYTE(health) = this->__pad_C0[13]; /*0x71c6ee*/
        if ( !(unsigned char)health ) /*0x71c6f6*/
        {
          this->__pad_C0[13] = 1; /*0x71c6f8*/
          health = *(TerrainTypeClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x71c6ff*/
          *(unsigned int *)this->__pad_C0 = 2; /*0x71c70f*/
          this->Type = health; /*0x71c715*/
          *(unsigned int *)&this->IsBurning = v4; /*0x71c71b*/
          this->height = 2; /*0x71c71e*/
          this->Animation[0] = 0; /*0x71c721*/
          IDA_LOBYTE(health) = v4; /*0x71c717*/
        }
      }
    }
  }
  return (char)health; /*0x71c72b*/
}

// ==== BACKFILL 0x0071C730  TerrainClass::Update  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::Update() {
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  TerrainTypeClass *v5; // ecx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  unsigned char *v9; // ecx
  int v10; // edi
  TerrainTypeClass *v11; // eax
  TerrainTypeClass **p_Type; // edx
  int *location; // esi
  CellClass *v14; // eax
  int v15; // [esp+10h] [ebp-Ch] BYREF
  TerrainTypeClass *v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  ObjectClass::DetectCloaked((ObjectClass *)this); /*0x71c738*/
  if ( *(unsigned char *)(*(unsigned int *)&this->__pad_C0[8] + 691) ) /*0x71c745*/
  {
    if ( !*(unsigned int *)this->__pad_C0 ) /*0x71c74d*/
    {
      v2 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x71c761*/
      v3 = *(unsigned int *)&this->__pad_C0[8]; /*0x71c773*/
      if ( (double)((int)abs32(v2) % 1000000) * 0.000001 < *(float *)(v3 + 676) ) /*0x71c796*/
      {
        this->Animation[0] = 0; /*0x71c798*/
        v4 = *(unsigned int *)(v3 + 672); /*0x71c79e*/
        v5 = *(TerrainTypeClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x71c7a4*/
        *(unsigned int *)this->__pad_C0 = v4; /*0x71c7b0*/
        this->Type = v5; /*0x71c7b6*/
        *(unsigned int *)&this->IsBurning = v16; /*0x71c7bc*/
        this->height = v4; /*0x71c7bf*/
      }
    }
  }
  result = Locomotor::GetSpeed((Locomotor *)&this->Type); /*0x71c7ca*/
  if ( result || (result = *(unsigned int *)this->__pad_C0) == 0 ) /*0x71c7db*/
  {
    IDA_LOBYTE(this->Animation[1]) = 0; /*0x71c840*/
  }
  else
  {
    v7 = *(unsigned int *)&this->__pad_C0[4] + this->Animation[0]; /*0x71c7e9*/
    IDA_LOBYTE(this->Animation[1]) = 1; /*0x71c7eb*/
    this->Animation[0] = v7; /*0x71c7f2*/
    this->Type = *(TerrainTypeClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x71c7fe*/
    *(unsigned int *)&this->IsBurning = v16; /*0x71c804*/
    this->height = result; /*0x71c807*/
    if ( this->__pad_C0[13] /*0x71c82d*/
      && (v8 = this->Animation[0],
          result = *(int16_t *)((*(int (**)(unsigned int))(**(unsigned int **)&this->__pad_C0[8] + 156))(*(unsigned int *)&this->__pad_C0[8])
                              + 6)
                 - 1,
          v8 == result) )
    {
      return (*((int (**)(TerrainClass *))this->ptr_4 + 62))(this); /*0x71c833*/
    }
    else
    {
      v9 = *(unsigned char **)&this->__pad_C0[8]; /*0x71c84d*/
      if ( v9[689] && v9[691] ) /*0x71c85b*/
      {
        v10 = this->Animation[0]; /*0x71c865*/
        result = *(int16_t *)((*(int (**)(unsigned char *))(*(unsigned int *)v9 + 156))(v9) + 6) / 2; /*0x71c878*/
        if ( v10 == result ) /*0x71c87c*/
        {
          this->Animation[0] = 0; /*0x71c87e*/
          v11 = *(TerrainTypeClass **)&((unsigned int *)&stru_A8EB00)[416]; /*0x71c884*/
          p_Type = &this->Type; /*0x71c889*/
          *(unsigned int *)this->__pad_C0 = 0; /*0x71c88f*/
          location = ((unsigned int *)this)[0]; /*0x71c897*/
          *p_Type = v11; /*0x71c89d*/
          p_Type[1] = v16; /*0x71c8a5*/
          p_Type[2] = 0; /*0x71c8a8*/
          v15 = *location; /*0x71c8ad*/
          v16 = (TerrainTypeClass *)location[1]; /*0x71c8be*/
          v17 = location[2]; /*0x71c8c5*/
          v14 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v15); /*0x71c8c9*/
          (result) = ((result) & ~0xFF) | ((CellClass::SpawnTiberiumTree(v14, 1)) & 0xFF); /*0x71c8d0*/
        }
      }
    }
  }
  return result; /*0x71c839*/
}

// ==== BACKFILL 0x0071C8E0  sub_71C8E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_71C8E0::sub_71C8E0()
{

  char result; // al
  int v2; // [esp+4h] [ebp-8h]

  result = *((unsigned char *)this + 205); /*0x71c8e0*/
  if ( !result ) /*0x71c8eb*/
  {
    *((unsigned char *)this + 205) = 1; /*0x71c8ee*/
    *((unsigned int *)this + 45) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71c905*/
    *((unsigned int *)this + 48) = 2; /*0x71c90b*/
    *((unsigned int *)this + 46) = v2; /*0x71c911*/
    *((unsigned int *)this + 47) = 2; /*0x71c914*/
    *((unsigned int *)this + 43) = 0; /*0x71c917*/
    return v2; /*0x71c907*/
  }
  return result; /*0x71c922*/

}

// ==== BACKFILL 0x0071C930  TerrainClass::ApplyCellModifications  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::ApplyCellModifications() {
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  int16_t v5; // cx
  unsigned char *v6; // eax
  CellClass *v7; // eax
  char v8; // bl
  void *v9; // eax
  int16_t v11[2]; // [esp+8h] [ebp-18h] BYREF
  int v12; // [esp+Ch] [ebp-14h]
  int16_t v13[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned int v14[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !((unsigned int *)this)[0] ) /*0x71c937*/
  {
    v2 = *(unsigned int *)(*((int (**)(TerrainClass *, int16_t *))this->ptr_4 + 110))(this, v13); /*0x71c956*/
    v3 = 0; /*0x71c958*/
    v12 = v2; /*0x71c95a*/
    do /*0x71c9b8*/
    {
      v4 = v3 & 7; /*0x71c968*/
      v5 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v4 + 82]) + v2; /*0x71c96b*/
      IDA_LOWORD(v4) = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v4 + 82]); /*0x71c97a*/
      (v12) = ((v12) & ~0xFFFF) | ((v5) & 0xFFFF); /*0x71c982*/
      (v12) = ((v12) & ~(0xFFFF << 16)) | ((((((v2) >> 16) & 0xFFFF) + v4) & 0xFFFF) << 16); /*0x71c98e*/
      *(unsigned int *)v13 = v12; /*0x71c99d*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x71c9a1*/
      ++v3; /*0x71c9ae*/
      --v6[290]; /*0x71c9b2*/
    }
    while ( v3 < 8 ); /*0x71c9b8*/
    v14[0] = ((unsigned int *)this)[0]; /*0x71c9c6*/
    v14[1] = ((unsigned int *)this)[1]; /*0x71c9d2*/
    v14[2] = ((unsigned int *)this)[2]; /*0x71c9de*/
    v7 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v14); /*0x71c9e2*/
    v7->occupationFlags &= ~0x40u; /*0x71c9f6*/
  }
  *(unsigned int *)v11 = *(unsigned int *)(*((int (**)(TerrainClass *, int16_t *))this->ptr_4 + 110))(this, v13); /*0x71ca0a*/
  v8 = ObjectClass::Undeploy((ObjectClass *)this); /*0x71ca21*/
  v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca23*/
  House::AnnounceUpgrade((int)v9, -1); /*0x71ca2a*/
  if ( !dword_A8E7AC ) /*0x71ca36*/
  {
    Cell::SetRadar((Cell *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca42*/
    Radar::Update((Radar *)&stru_87F5F0.__pad_58[416], v11); /*0x71ca51*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v11); /*0x71ca60*/
  }
  return v8; /*0x71ca67*/
}

// ==== BACKFILL 0x0071CA70  CCINIClass::LoadTypeFromINI  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
int CCINIClass::LoadTypeFromINI() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 8 errs): wrong-universe gap2 body; truth func_0x71CA70.json */
}

// ==== BACKFILL 0x0071CB90  ObjectTypeClass::ReadDestroyAnim  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDestroyAnim()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071CB90.json)
}

// ==== BACKFILL 0x0071CC50  TerrainClass::CheckSpawnConditions  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::CheckSpawnConditions(void* a1, int a2, int a3) {
  int *v5; // eax
  int v6; // ebx
  char *v7; // ebp
  unsigned int *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  char *v13; // ebp
  int v14; // ebx
  unsigned int *v15; // eax
  int v16; // ecx
  int v18; // [esp+10h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-14h]
  unsigned int v20[4]; // [esp+18h] [ebp-10h] BYREF

  if ( !((unsigned int *)&stru_A8EB00)[391] && g_hWnd && (!a2 && !((unsigned int *)this)[0] || !((unsigned int *)this)[0] || ((unsigned int *)this)[0]) ) /*0x71cc8c*/
    return 0; /*0x71cc8c*/
  ((unsigned int *)this)[0] = 0; /*0x71ccad*/
  v5 = ClipRectIntersection(v20, a1, &DSurface_ViewBounds.field_0, 0, 0); /*0x71ccb4*/
  *a1 = *v5; /*0x71ccbd*/
  a1[1] = v5[1]; /*0x71ccc2*/
  a1[2] = v5[2]; /*0x71ccc8*/
  a1[3] = v5[3]; /*0x71ccce*/
  v6 = DSurface_ViewBounds.field_0; /*0x71ccd3*/
  v7 = (char *)DSurface_ViewBounds.field_4; /*0x71ccd9*/
  v8 = (unsigned int *)(*((int (**)(TerrainClass *, unsigned int *))this->ptr_4 + 75))(this, v20); /*0x71cce6*/
  v9 = v8[1]; /*0x71ccee*/
  v10 = v6 + *v8; /*0x71ccf1*/
  v11 = v8[2]; /*0x71ccf3*/
  v12 = v8[3]; /*0x71ccf6*/
  v13 = &v7[v9]; /*0x71ccf9*/
  if ( *a1 >= v10 + v11 ) /*0x71cd01*/
    return 0; /*0x71cd01*/
  v14 = a1[1]; /*0x71cd07*/
  if ( v14 >= (int)&v13[v12] || *a1 + a1[2] <= v10 || v14 + a1[3] <= (int)v13 ) /*0x71cd20*/
    return 0; /*0x71cd90*/
  v15 = (unsigned int *)(*((int (**)(TerrainClass *, unsigned int *))this->ptr_4 + 43))(this, v20); /*0x71cd30*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v18); /*0x71cd3d*/
  if ( *a1 > DSurface_ViewBounds.field_0 ) /*0x71cd4b*/
    v18 += DSurface_ViewBounds.field_0 - *a1; /*0x71cd55*/
  v16 = a1[1]; /*0x71cd59*/
  if ( v16 > (int)DSurface_ViewBounds.field_4 ) /*0x71cd63*/
    v19 += (int)DSurface_ViewBounds.field_4 - v16; /*0x71cd6d*/
  (*((void (**)(TerrainClass *, int *, int *))this->ptr_4 + 69))(this, &v18, a1); /*0x71cd7b*/
  return 1; /*0x71cd81*/
}

// ==== BACKFILL 0x0071CF30  TerrainClass::CheckFrameUpdate  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71CF30)
}

// ==== BACKFILL 0x0071CF50  TerrainClass::PowerDrainUpdate  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::PowerDrainUpdate(void* a1) {
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  HouseClass::ProcessPower((ObjectClass *)this); /*0x71cf59*/
  v3 = (*(int (**)(unsigned int))(**(unsigned int **)&this->__pad_C0[8] + 44))(*(unsigned int *)&this->__pad_C0[8]); /*0x71cf66*/
  Power::TimerProcess(v3); /*0x71cf6c*/
  v4 = (*(int (**)(int))(*(unsigned int *)(*(unsigned int *)&this->__pad_C0[8] + 4) + 16))(*(unsigned int *)&this->__pad_C0[8] + 4); /*0x71cf7d*/
  Power::TimerProcess(v4); /*0x71cf83*/
  IDA_LOBYTE(v5) = this->__pad_C0[12]; /*0x71cf88*/
  v6 = Power::FlagProcess((Power *)a1, v5); /*0x71cf91*/
  IDA_LOBYTE(v6) = this->__pad_C0[13]; /*0x71cf96*/
  Power::FlagProcess((Power *)a1, v6); /*0x71cf9f*/
  Power::TimerProcess(this->TerrainClass_field_rect_D0[0]); /*0x71cfad*/
// 0x4a1d50
  return Power::TimerProcess(this->TerrainClass_field_rect_D0[1]); /*0x71cfc0*/
}

// ==== BACKFILL 0x0071CFD0  TerrainClass::ProcessFrameStep  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::ProcessFrameStep(int a1, int a2) {
  int result; // eax

  result = Object::Unlink((ObjectClass *)this); /*0x71cfde*/
  if ( *(unsigned int *)&this->__pad_C0[8] == a1 ) /*0x71cfe9*/
    *(unsigned int *)&this->__pad_C0[8] = 0; /*0x71cfeb*/
  return result; /*0x71cff5*/
}

// ==== BACKFILL 0x0071D160  TerrainClass::Export  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
void* TerrainClass::Export(void* a1) {
  int16_t *HasC4; // esi
  int *FoundationSize; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // [esp+4h] [ebp-40h]
  int v17; // [esp+8h] [ebp-3Ch]
  int v18; // [esp+Ch] [ebp-38h]
  int v19; // [esp+10h] [ebp-34h]
  int v20; // [esp+14h] [ebp-30h] BYREF
  int v21; // [esp+18h] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-28h]
  int v23; // [esp+20h] [ebp-24h]
  int v24; // [esp+28h] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-14h]
  unsigned int v26[4]; // [esp+34h] [ebp-10h] BYREF

  v18 = this->TerrainClass_field_rect_D0[2] - *(unsigned int *)&g_TacticalClass_Instance[44]; /*0x71d17d*/
  v19 = this->TerrainClass_field_rect_D0[3] - *(unsigned int *)&g_TacticalClass_Instance[45]; /*0x71d189*/
  HasC4 = (int16_t *)ObjectClass::HasC4((ObjectClass *)this); /*0x71d192*/
  if ( HasC4 ) /*0x71d196*/
  {
    FoundationSize = Building::GetFoundationSize(&v20, 0); /*0x71d1d4*/
    v5 = *FoundationSize; /*0x71d1d9*/
    v24 = FoundationSize[1]; /*0x71d1de*/
    v6 = FoundationSize[2]; /*0x71d1e4*/
    v7 = FoundationSize[3]; /*0x71d1e7*/
    v8 = HasC4[3]; /*0x71d1ea*/
    v7 = v7; /*0x71d1ee*/
    v9 = Building::GetFoundationSize(v26, v8 / 2); /*0x71d1fd*/
    v10 = *v9; /*0x71d206*/
    v21 = v9[1]; /*0x71d20c*/
    v11 = v9[2]; /*0x71d210*/
    v11 = v11; /*0x71d213*/
    v23 = v9[3]; /*0x71d21a*/
    v16 = HasC4[1]; /*0x71d226*/
    v17 = HasC4[2]; /*0x71d22a*/
    if ( v6 <= 0 || v7 <= 0 ) /*0x71d236*/
    {
      v13 = *v9; /*0x71d2a6*/
      v12 = v9[1]; /*0x71d2a8*/
      v6 = v9[2]; /*0x71d2ab*/
      v15 = v9[3]; /*0x71d2ae*/
    }
    else if ( v11 <= 0 || v23 <= 0 ) /*0x71d242*/
    {
      v12 = v24; /*0x71d29c*/
      v13 = v5; /*0x71d2a0*/
      v15 = v7; /*0x71d2a2*/
    }
    else
    {
      v12 = v24; /*0x71d244*/
      v13 = v5; /*0x71d24a*/
      v14 = v7; /*0x71d24c*/
      if ( v5 > v10 ) /*0x71d24e*/
      {
        v13 = v10; /*0x71d252*/
        v6 += v5 - v10; /*0x71d256*/
      }
      if ( v24 > v21 ) /*0x71d25e*/
      {
        v14 = v24 - v21 + v7; /*0x71d262*/
        v12 = v21; /*0x71d264*/
      }
      if ( v6 + v13 < v10 + v11 ) /*0x71d271*/
        v6 = v11 - v13 + v10 + 1; /*0x71d279*/
      if ( v14 + v12 < v21 + v23 ) /*0x71d28c*/
        v14 = v21 - v12 + v23 + 1; /*0x71d294*/
      v15 = v14; /*0x71d298*/
    }
    *a1 = v18 + v13 - v16 / 2; /*0x71d2d9*/
    a1[1] = v19 + v12 - v17 / 2; /*0x71d2db*/
    a1[2] = v6; /*0x71d2de*/
    a1[3] = v15; /*0x71d2e1*/
    return a1; /*0x71d2d3*/
  }
  else
  {
    *a1 = ((unsigned int *)&g_BuildingLoadQueue_Array)[0]; /*0x71d1a5*/
    a1[1] = ((unsigned int *)&g_BuildingLoadQueue_Array)[1]; /*0x71d1ad*/
    a1[2] = ((unsigned int *)&g_BuildingLoadQueue_Array)[2]; /*0x71d1b6*/
    a1[3] = ((unsigned int *)&g_BuildingLoadQueue_Array)[3]; /*0x71d1bf*/
    return a1; /*0x71d198*/
  }
}

// ==== BACKFILL 0x0071D2F0  TerrainClass::MissionStubReturnZero  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero()
{

  return 224; /*0x71d2f5*/

}

// ==== BACKFILL 0x0071D300  TerrainClass::MissionStubReturnZero2  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero2()
{

  return 36; /*0x71d305*/

}

// ==== BACKFILL 0x0071D310  TerrainClass::MissionStubReturnZero3  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::MissionStubReturnZero3(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071D310.json)
}

// ==== BACKFILL 0x0071D350  TerrainClass::MissionStubReturnZero4  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
void* TerrainClass::MissionStubReturnZero4(int a2) {
  TerrainClass::CleanupMembers((int)this); /*0x71d353*/
  if ( (a2 & 1) != 0 ) /*0x71d35d*/
    RA2_OPDEL(this); /*0x71d360*/
  return this; /*0x71d36a*/
}

// ==== BACKFILL 0x0071DD80  Terrain::LookupByName  cls=Terrain  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::LookupByName()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DD80.json)
}

// ==== BACKFILL 0x0071DDD0  TerrainTypeClass::GetHeight  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
bool  TerrainTypeClass::GetHeight(TerrainClass * aP2, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DDD0.json)
}

// ==== BACKFILL 0x0071DE10  TerrainTypeClass::GetTileIndex  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
TerrainClass * TerrainTypeClass::GetTileIndex(int a2, void *a2_2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DE10.json)
}

// ==== BACKFILL 0x0071E0D0  TerrainTypeClass::GetWidth  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int *  TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E0D0.json)
}

// ==== BACKFILL 0x0071E140  TerrainTypeClass::PowerDrainUpdate  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E140.json)
}

// ==== BACKFILL 0x0071E1D0  TerrainTypeClass::SaveLoad_Prefix  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int  TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E1D0.json)
}

// ==== BACKFILL 0x0071E240  TerrainTypeClass::SaveLoad_Prefix_0  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E240.json)
}

// ==== BACKFILL 0x0071E260  TerrainTypeClass::GetClassIdentifier  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E260.json)
}

// ==== BACKFILL 0x0071E330  TerrainTypeClass::GetTypeIdentifier  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetTypeIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E330)
}

// ==== BACKFILL 0x0071E340  TerrainTypeClass::GetObjectSize  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetObjectSize()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E340)
}

// ==== BACKFILL 0x0071E350  TerrainTypeClass::GetAuxField  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E350)
}

// ==== BACKFILL 0x0071E360  TerrainTypeClass::ddtor  cls=TerrainTypeClass  sig=csp  renamed_refs=0  residual=- ====
TerrainTypeClass * TerrainTypeClass::ddtor(void * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E360.json)
}

// ==== BACKFILL 0x0071F4E0  TriggerTypeClass::ParseActionData  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
void * TriggerTypeClass::ParseActionData() {
    char *v2; // eax
    char *v3; // eax
    int v4; // edi
    char *v5; // ebp
    int v6; // ebx
    char *result; // eax
    int v8; // edi
    char Destination[24]; // [esp+10h] [ebp-1Ch] BYREF
    char v10; // [esp+28h] [ebp-4h]

    *((int *)((char *)this + 36) + 4) = 0; /*0x71f4f0 +0x34*/
    v2 = strtok(0, Str_Sep); /*0x71f4f7*/
    *((int *)((char *)this + 36) + 2) = atoi(v2); /*0x71f509 +0x2C*/
    v3 = strtok(0, Str_Sep); /*0x71f50c*/
    v4 = atoi(v3); /*0x71f51e*/
    v5 = strtok(0, Str_Sep); /*0x71f525*/
    v6 = atoi(v5); /*0x71f52d*/
    result = 0; /*0x71f532*/
    if ( v4 == 2 ) /*0x71f537*/
      result = strtok(0, Str_Sep); /*0x71f53f*/
    if ( v4 ) /*0x71f54a*/
    {
      v8 = v4 - 1; /*0x71f54c*/
      if ( v8 ) /*0x71f54d*/
      {
        if ( v8 == 1 ) /*0x71f550*/
        {
          *((int *)((char *)this + 36) + 4) = v6; /*0x71f554 +0x34*/
          if ( result ) /*0x71f557*/
          {
            result = strncpy(Destination, result, 0x18u); /*0x71f567*/
            v10 = 0; /*0x71f56f*/
          }
          else
          {
            Destination[0] = 0; /*0x71f559*/
          }
          if ( Destination != (char *)this + 36 + 20 ) /*0x71f57d +0x38*/
          {
            qmemcpy((char *)this + 36 + 20, Destination, 0x18u); /*0x71f588 +0x38..0x50*/
            *((char *)this + 80) = v10; /*0x71f58a +0x50 尾字节*/
          }
        }
      }
      else
      {
        result = (char *)TeamTypeClass::FindByName((const char *)v5); /*0x71f595 static 单参*/
        *((int *)((char *)this + 36) + 3) = (int)result; /*0x71f59a +0x30*/
      }
    }
    else
    {
      *((int *)((char *)this + 36) + 4) = v6; /*0x71f5a5 +0x34*/
    }
    return result; /*0x71f58b*/
}

// ==== BACKFILL 0x0071F680  TriggerTypeClass::GetActionCategoryFlags  cls=TriggerTypeClass  sig=csp  renamed_refs=0  residual=- ====
int TriggerTypeClass::GetActionCategoryFlags() {
    int v1; // esi

    v1 = 0; /*0x71f681*/
    switch ( (unsigned int)this ) /*0x71f690*/
    {
      case 0u: /*0x71f690*/
      case 1u: /*0x71f690*/
      case 4u: /*0x71f690*/
      case 8u: /*0x71f690*/
      case 0x18u: /*0x71f690*/
      case 0x19u: /*0x71f690*/
      case 0x1Au: /*0x71f690*/
      case 0x1Fu: /*0x71f690*/
      case 0x35u: /*0x71f690*/
      case 0x36u: /*0x71f690*/
      case 0x3Bu: /*0x71f690*/
        v1 = 1; /*0x71f697*/
        break; /*0x71f697*/
      default:
        break;
    }
    switch ( (unsigned int)this ) /*0x71f6a9*/
    {
      case 0u: /*0x71f6a9*/
      case 1u: /*0x71f6a9*/
      case 2u: /*0x71f6a9*/
      case 4u: /*0x71f6a9*/
      case 6u: /*0x71f6a9*/
      case 7u: /*0x71f6a9*/
      case 8u: /*0x71f6a9*/
      case 0x1Du: /*0x71f6a9*/
      case 0x21u: /*0x71f6a9*/
      case 0x22u: /*0x71f6a9*/
      case 0x23u: /*0x71f6a9*/
      case 0x26u: /*0x71f6a9*/
      case 0x27u: /*0x71f6a9*/
      case 0x28u: /*0x71f6a9*/
      case 0x29u: /*0x71f6a9*/
      case 0x2Au: /*0x71f6a9*/
      case 0x2Bu: /*0x71f6a9*/
      case 0x2Cu: /*0x71f6a9*/
      case 0x30u: /*0x71f6a9*/
      case 0x31u: /*0x71f6a9*/
        v1 |= 2u; /*0x71f6b0*/
        break; /*0x71f6b0*/
      default:
        break;
    }
    if ( this == (TriggerTypeClass *)8 || this == (TriggerTypeClass *)24 ) /*0x71f6bb*/
      v1 |= 4u; /*0x71f6bd*/
    switch ( (unsigned int)this ) /*0x71f6d0*/
    {
      case 3u: /*0x71f6d0*/
      case 5u: /*0x71f6d0*/
      case 8u: /*0x71f6d0*/
      case 9u: /*0x71f6d0*/
      case 0xAu: /*0x71f6d0*/
      case 0xBu: /*0x71f6d0*/
      case 0xCu: /*0x71f6d0*/
      case 0xFu: /*0x71f6d0*/
      case 0x10u: /*0x71f6d0*/
      case 0x11u: /*0x71f6d0*/
      case 0x12u: /*0x71f6d0*/
      case 0x13u: /*0x71f6d0*/
      case 0x14u: /*0x71f6d0*/
      case 0x15u: /*0x71f6d0*/
      case 0x16u: /*0x71f6d0*/
      case 0x1Eu: /*0x71f6d0*/
      case 0x20u: /*0x71f6d0*/
      case 0x34u: /*0x71f6d0*/
      case 0x37u: /*0x71f6d0*/
      case 0x38u: /*0x71f6d0*/
      case 0x39u: /*0x71f6d0*/
      case 0x3Au: /*0x71f6d0*/
        v1 |= 8u; /*0x71f6d7*/
        break; /*0x71f6d7*/
      default:
        break;
    }
    switch ( (unsigned int)this ) /*0x71f6ea*/
    {
      case 8u: /*0x71f6ea*/
      case 0xDu: /*0x71f6ea*/
      case 0xEu: /*0x71f6ea*/
      case 0x17u: /*0x71f6ea*/
      case 0x1Bu: /*0x71f6ea*/
      case 0x1Cu: /*0x71f6ea*/
      case 0x24u: /*0x71f6ea*/
      case 0x25u: /*0x71f6ea*/
      case 0x2Du: /*0x71f6ea*/
      case 0x2Eu: /*0x71f6ea*/
      case 0x2Fu: /*0x71f6ea*/
      case 0x32u: /*0x71f6ea*/
      case 0x33u: /*0x71f6ea*/
      case 0x3Cu: /*0x71f6ea*/
      case 0x3Du: /*0x71f6ea*/
        v1 |= 0x10u; /*0x71f6f1*/
        break; /*0x71f6f1*/
      default:
        return v1;
    }
    return v1; /*0x71f6f6*/
}

// ==== BACKFILL 0x0071F820  TEventClass::ProcessEvent  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::ProcessEvent(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F820)
}

// ==== BACKFILL 0x0071F880  TEventClass::ddtor  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/

}

// ==== BACKFILL 0x0071F8C0  TEventClass::SaveLoad_Prefix  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F8C0)
}

// ==== BACKFILL 0x0071F930  TEventClass::SaveLoad_Prefix_0  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71F930)
}

// ==== BACKFILL 0x0071F950  TEventClass::GetStateA  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::GetStateA() const {
  char result; // al

  switch ( this->TEventClass_field_2C ) /*0x71f963*/
  {
    case 1: /*0x71f963*/
    case 2: /*0x71f963*/
    case 3: /*0x71f963*/
    case 4: /*0x71f963*/
    case 6: /*0x71f963*/
    case 7: /*0x71f963*/
    case 0x12: /*0x71f963*/
    case 0x13: /*0x71f963*/
    case 0x14: /*0x71f963*/
    case 0x15: /*0x71f963*/
    case 0x16: /*0x71f963*/
    case 0x17: /*0x71f963*/
    case 0x18: /*0x71f963*/
    case 0x19: /*0x71f963*/
    case 0x1A: /*0x71f963*/
    case 0x1D: /*0x71f963*/
    case 0x1F: /*0x71f963*/
    case 0x21: /*0x71f963*/
    case 0x22: /*0x71f963*/
    case 0x23: /*0x71f963*/
    case 0x26: /*0x71f963*/
    case 0x27: /*0x71f963*/
    case 0x28: /*0x71f963*/
    case 0x29: /*0x71f963*/
    case 0x2A: /*0x71f963*/
    case 0x2B: /*0x71f963*/
    case 0x2C: /*0x71f963*/
    case 0x30: /*0x71f963*/
    case 0x31: /*0x71f963*/
    case 0x32: /*0x71f963*/
    case 0x35: /*0x71f963*/
    case 0x36: /*0x71f963*/
    case 0x3B: /*0x71f963*/
      result = 1; /*0x71f96a*/
      break; /*0x71f96c*/
    default:
      result = 0; /*0x71f96d*/
      break; /*0x71f96d*/
  }
  return result; /*0x71f96c*/
}

// ==== BACKFILL 0x0071F9C0  TEventClass::GetStateB_SpyEvent  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::GetStateB_SpyEvent() const {
    char result; // al

    switch ( this->TEventClass_field_2C ) /*0x71f9d3*/
    {
      case 1: /*0x71f9d3*/
      case 6: /*0x71f9d3*/
      case 0x1F: /*0x71f9d3*/
      case 0x2C: /*0x71f9d3*/
      case 0x3B: /*0x71f9d3*/
        result = 0; /*0x71f9da*/
        break; /*0x71f9dc*/
      default:
        result = 1; /*0x71f9dd*/
        break; /*0x71f9dd*/
    }
    return result; /*0x71f9dc*/
}

// ==== BACKFILL 0x0071FA40  sub_71FA40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_71FA40::sub_71FA40(int a2)
{

  *((unsigned int *)this + 21) = a2; /*0x71fa44*/
  return a2; /*0x71fa47*/

}

// ==== BACKFILL 0x0071FA50  TEventClass::StubReturn88  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::StubReturn88()
{

  return 88; /*0x71fa55*/

}

// ==== BACKFILL 0x0071FA60  TEventClass::StubReturn48  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::StubReturn48()
{

  return 48; /*0x71fa65*/

}

// ==== BACKFILL 0x0071FA70  TEventClass::Stub  cls=TEventClass  sig=csp  renamed_refs=0  residual=- ====
int TEventClass::Stub()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71FA70)
}

// ==== BACKFILL 0x0071FF20  sub_71FF20  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_71FF20::sub_71FF20(int aP1, int a3, int a4, int aP2, int aP3, int aP4, int aP5, char a9, ShapeButtonClass * aP9)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71FF20)
}

// ==== BACKFILL 0x0071FFE0  AbstractClass::checkWeaponCooldown  cls=TextButtonClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkWeaponCooldown(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x71ffe0.json */
}
