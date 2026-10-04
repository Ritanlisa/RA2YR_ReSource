// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00420120  ??0Iostream_init_QAE_XZ_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Iostream_init_ctor_addr42()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420120)
}

// ==== BACKFILL 0x00420130  nullsub_53  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_53_addr42()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x420130)
}

// ==== BACKFILL 0x004202F0  sub_4202F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_4202F0(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004202F0.json)
}

// ==== BACKFILL 0x00420DE0  AlphaShapeClass::SD_vt05  cls=AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
int AlphaShapeClass::SD_vt05(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); 
  if ( Prefix_0 >= 0 ) /*0x420df5*/
  {
    if ( aP0 ) /*0x420df9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x420e02*/
      *(unsigned int *)aP0->__pad_0 = (unsigned int)(&vt_AlphaShapeClass); /*0x420e07*/
      aP0->AlphaShapeClass_field_0x04 = (int)&vt_AlphaShapeClass; /*0x420e0d*/
      aP0->AlphaShapeClass_field_0x08 = (int)&vt_AlphaShapeClass; /*0x420e14*/
      aP0->AlphaShapeClass_field_0x0C = (int)&vt_AlphaShapeClass; /*0x420e1b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance,(int *)(&aP0->AlphaShapeClass_field_0x24)); /*0x420e2b*/
    *((unsigned int *)aP0 + 14) = 0; /*0x420e30*/
  }
  return Prefix_0; /*0x420e39*/

}

// ==== BACKFILL 0x00421730  AlphaShapeClass::SDDTOR  cls=AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
AlphaShapeClass * AlphaShapeClass::SDDTOR(char a2, int aP0, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x421730)
}

// ==== BACKFILL 0x00421830  VectorClass_ptr_AlphaShapeClass::GetItemIndex  cls=VectorClass_ptr_AlphaShapeClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_AlphaShapeClass::Get(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x421850)
}

// ==== BACKFILL 0x00422720  AnimClass::SimpleCtor  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::SimpleCtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422720.json)
}

// ==== BACKFILL 0x00422B80  TerrainClass::ClearAnimationLinkFlags  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
void TerrainClass::ClearAnimationLinkFlags()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422B80.json)
}

// ==== BACKFILL 0x00422BC0  AnimClass::SetAnimSpeed  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::SetAnimSpeed()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x422BC0)
}

// ==== BACKFILL 0x00422BE0  AnimClass::UpdateZAdjust  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int * AnimClass::UpdateZAdjust(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422BE0.json)
}

// ==== BACKFILL 0x00422C70  AnimClass::CheckLayerFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
char AnimClass::CheckLayerFlags(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00422C70.json)
}

// ==== BACKFILL 0x004238B0  AnimClass::UpdateMirrorState  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
bool AnimClass::UpdateMirrorState(int a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4238B0)
}

// ==== BACKFILL 0x004238D0  AnimClass::CheckMirrorFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int * AnimClass::CheckMirrorFlags(int a1)
{

  if ( (byte_89A190 & 1) == 0 ) /*0x4238db*/
  {
    byte_89A190 |= 1u; /*0x4238f9*/
    dword_89A160 = 2147450879; /*0x4238ff*/
    atexit(nullsub_89); /*0x423904*/
  }
  return (int *)&dword_89A160; /*0x423912*/

}

// ==== BACKFILL 0x00423930  AnimClass::UpdateProjectileTrajectory  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::UpdateProjectileTrajectory()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00423930.json)
}

// ==== BACKFILL 0x00425280  AnimClass::SaveLoad_Prefix  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::SaveLoad_Prefix(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00425280.json)
}

// ==== BACKFILL 0x00425410  AnimClass::ProcessPower  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::ProcessPower(int *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00425410.json)
}

// ==== BACKFILL 0x00425510  AnimClass::CheckEndOfSequence  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::CheckEndOfSequence() {
  return *(unsigned int *)&this->AnimClass_field_0xC8[2].__pad_C[52]; /*0x42551c*/
}

// ==== BACKFILL 0x00425520  AbstractClass::updateLayer  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int AbstractClass::updateLayer()
{

  return *((unsigned int *)this + 50); /*0x425526*/

}

// ==== BACKFILL 0x00425530  AnimClass::Undeploy  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::Undeploy() {
  Coord *AnimClass_field_0xC8; // eax
  CellClass *v3; // eax
  unsigned int v5[3]; // [esp+4h] [ebp-Ch] BYREF

  AnimClass_field_0xC8 = this->AnimClass_field_0xC8; /*0x425536*/
  if ( AnimClass_field_0xC8 && AnimClass_field_0xC8[2].__pad_C[201] ) /*0x425540*/
  {
    v5[0] = this->AnimClass_field_0x9C; /*0x425556*/
    v5[1] = *(unsigned int *)this->__pad_A0; /*0x425567*/
    v5[2] = this->AnimClass_field_0xA4; /*0x42556e*/
    v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x425572*/
    v3->flags[0] &= ~0x20000u; /*0x425588*/
  }
  if ( !(uint8_t)ObjectClass::Undeploy((ObjectClass *)this) ) /*0x42558c*/
    return 0; /*0x4255a7*/
  RemoveTarget((int)this); /*0x42559b*/
  return 1; /*0x4255a2*/
}

// ==== BACKFILL 0x00425630  AnimClass::CheckDamageFlags  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::CheckDamageFlags() {
  AnimClass **p_AnimClass_field_0x9C; // eax
  unsigned int *AnimClass_field_0xCC; // ecx
  int result; // eax

  p_AnimClass_field_0x9C = &this->AnimClass_field_0x9C; /*0x425633*/
  AnimClass_field_0xCC = this->AnimClass_field_0xCC; /*0x425639*/
  result = (int)p_AnimClass_field_0x9C[2]; /*0x42564e*/
  if ( AnimClass_field_0xCC ) /*0x425651*/
    result += AnimClass_field_0xCC[41]; /*0x425669*/
  return result; /*0x42566b*/
}

// ==== BACKFILL 0x00426270  AnimClass::UpdateDamageRadius  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::UpdateDamageRadius(void* a1) {
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a1); /*0x426287*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a1); /*0x426294*/
  if ( Map_MaxHeight + Cell::GetGroundHeight(a1) <= a1[2] && (v4->flags[0] & 0x100) != 0 ) /*0x4262b3*/
  {
    IDA_LOBYTE(v4->altOccupationFlags) |= 1 << v3; /*0x4262c3*/
    result = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262cd*/
    v4->altInfantryOwnerIndex = result; /*0x4262d0*/
  }
  else
  {
    IDA_LOBYTE(v4->occupationFlags) |= 1 << v3; /*0x4262e8*/
    result = (*((int (**)(AnimClass *))this->AnimClass_field_0x0 + 14))(this); /*0x4262f2*/
    v4->infantryOwnerIndex = result; /*0x4262f5*/
  }
  return result; /*0x4262d3*/
}

// ==== BACKFILL 0x00426300  AnimClass::ProcessAreaEffect  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
char AnimClass::ProcessAreaEffect(AnimClass * a1)
{

  char v1; // bl
  CellClass *v2; // esi
  char result; // al

  v1 = ((Input *)((Input *)a1))->OffsetToDirection(); /*0x426314*/
  v2 = (gamemd::CellClass *)((gamemd::Coord *)((char *)&stru_87F5F0 + 0x1F8))->To_Cell((unsigned int *)a1); /*0x426321*/
  if ( Cell::GetGroundHeight((unsigned int *)a1) + Map_MaxHeight > (int)a1->AnimClass_field_0x8 ) /*0x426335*/
  {
    result = ~(1 << v1) & LOBYTE(v2->occupationFlags); /*0x426370*/
    LOBYTE(v2->occupationFlags) = result; /*0x426372*/
    if ( (result & 0x1C) == 0 ) /*0x42637a*/
      v2->infantryOwnerIndex = -1; /*0x42637c*/
  }
  else
  {
    result = ~(1 << v1) & LOBYTE(v2->altOccupationFlags); /*0x426347*/
    LOBYTE(v2->altOccupationFlags) = result; /*0x426349*/
    if ( (result & 0x1C) == 0 ) /*0x426351*/
      v2->altInfantryOwnerIndex = -1; /*0x426353*/
  }
  return result; /*0x42635a*/

}

// ==== BACKFILL 0x00426390  AbstractClass::COMStub_Return0_25  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_25()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426390.json)
}

// ==== BACKFILL 0x004263A0  AbstractClass::COMStub_26  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_26()
{

  return 0; /*0x4263a2*/

}

// ==== BACKFILL 0x004263B0  AbstractClass::COMStub_Return0_32  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_32()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004263B0.json)
}

// ==== BACKFILL 0x004263C0  AbstractClass::COMStub_Ret8487648_36  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Ret8487648_36()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4263C0)
}

// ==== BACKFILL 0x004263D0  ObjectClass::GetDrawPosition  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetDrawPosition() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4263D0.json */
}

// ==== BACKFILL 0x00426410  AbstractClass::getCoordCenter  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::getCoordCenter()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426410.json)
}

// ==== BACKFILL 0x00426420  AbstractClass::COMStub_Return0_49  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_49()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426420.json)
}

// ==== BACKFILL 0x00426430  AbstractClass::COMStub_50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_50()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426430.json)
}

// ==== BACKFILL 0x00426440  AbstractClass::COMStub_Return0_67  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_67()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426440.json)
}

// ==== BACKFILL 0x00426450  AbstractClass::COMStub_Return0_68  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_68()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426450.json)
}

// ==== BACKFILL 0x00426460  AbstractClass::COMStub_Return0_85  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_85()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426460.json)
}

// ==== BACKFILL 0x00426470  AbstractClass::COMStub_Return0_86  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_86()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426470.json)
}

// ==== BACKFILL 0x00426480  AbstractClass::COMStub_Return0_87  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_87()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426480.json)
}

// ==== BACKFILL 0x00426490  AbstractClass::COMStub_Return0_88  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_88()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426490.json)
}

// ==== BACKFILL 0x004264A0  AbstractClass::COMStub_Return0_92  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_92()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004264A0.json)
}

// ==== BACKFILL 0x004264B0  AbstractClass::COMStub_Return0_99  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_99()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004264B0.json)
}

// ==== BACKFILL 0x004264C0  AbstractClass::COMStub_107  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_107()
{

  return 0; /*0x4264c2*/

}

// ==== BACKFILL 0x004264D0  ObjectClass::COMStub_108  cls=IUnknown  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::COMStub_108()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4264D0)
}

// ==== BACKFILL 0x004264E0  AbstractClass::COMStub_Return0_117  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_117()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004264E0.json)
}

// ==== BACKFILL 0x004264F0  AbstractClass::COMStub_Return0_118  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_118()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004264F0.json)
}

// ==== BACKFILL 0x00426500  AbstractClass::COMStub_Return0_119  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::COMStub_Return0_119()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426500.json)
}

// ==== BACKFILL 0x00426510  AbstractClass::getCoordCenter2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int GScreenClass::getCoordCenter2()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426510.json)
}

// ==== BACKFILL 0x00426520  AbstractClass::COMStub_Return0_121  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_121()
{

  return 0; /*0x426522*/

}

// ==== BACKFILL 0x00426530  AnimClass::MissionStubReturnZero  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::MissionStubReturnZero()
{

  return 456; /*0x426535*/

}

// ==== BACKFILL 0x00426540  AnimClass::MissionStubReturnZero2  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
int AnimClass::MissionStubReturnZero2(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x426546*/
    return -2147467261; /*0x426548*/
  *a2 = 237448643; /*0x426556*/
  a2[1] = 298949647; /*0x42655e*/
  a2[2] = -1610610249; /*0x426567*/
  a2[3] = unk_7E967C; /*0x426570*/
  return 0; /*0x42654d*/

}

// ==== BACKFILL 0x00426580  AbstractClass::getAltitude  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getAltitude()
{

  return 4; /*0x426585*/

}

// ==== BACKFILL 0x00426590  AnimClass::MissionStubReturnZero3  cls=AnimClass  sig=csp  renamed_refs=0  residual=- ====
void* AnimClass::MissionStubReturnZero3(int a2) {
  AnimClass::Destruct(this); /*0x426593*/
  if ( (a2 & 1) != 0 ) /*0x42659d*/
    RA2_OPDEL(this); /*0x4265a0*/
  return this; /*0x4265aa*/
}

// ==== BACKFILL 0x004265B0  Cell::GetHeight  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
unsigned short * Cell::GetHeight(int *aP1, int *a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4265B0)
}

// ==== BACKFILL 0x00426620  ??4type_info_AAEAAV0_ABV0__Z  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * __4type_info_AAEAAV0_ABV0__Z(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x426620)
}

// ==== BACKFILL 0x004266D0  sub_4266D0  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
void sub_4266D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004266D0.json)
}

// ==== BACKFILL 0x00426990  sub_426990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_426990()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426990.json)
}

// ==== BACKFILL 0x00426A73  ?UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * _UNSAFE_CurrentVirtualProcessor_uint_nternalContextBase_details_Concurrency__uint_BEPAVVirtualProcessor_23_XZ()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x426A73)
}

// ==== BACKFILL 0x00426A80  AbstractClass::getMapCoords  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::getMapCoords()
{

  return *((uint16_t *)this + 81); /*0x426a89*/

}

// ==== BACKFILL 0x00426E80  sub_426E80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_426E80(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426E80.json)
}

// ==== BACKFILL 0x00426FD0  sub_426FD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned short sub_426FD0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00426FD0.json)
}

// ==== BACKFILL 0x00427270  AbstractClass::setMapCoords  cls=Animate  sig=csp  renamed_refs=0  residual=- ====
std::locale::facet * GScreenClass::setMapCoords(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00427270.json)
}

// ==== BACKFILL 0x00427290  AnimFile::Stub  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
char * AnimFile::Stub()
{

  return (char *)this + 1292; /*0x427296*/

}

// ==== BACKFILL 0x004272A0  AnimFile::QueryInterface  cls=AnimFile  sig=csp  renamed_refs=0  residual=- ====
AnimFile * AnimFile::QueryInterface(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4272A0)
}

// ==== BACKFILL 0x00427A80  AnimTypeClass::GetLoopCount  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AnimTypeClass::GetLoopCount(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00427A80.json)
}

// ==== BACKFILL 0x00427CB0  AnimTypeClass::FindIndex  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::FindIndex()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00427CB0.json)
}

// ==== BACKFILL 0x00428970  AnimTypeClass::SaveLoad_Prefix_0  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00428970.json)
}

// ==== BACKFILL 0x00428990  AnimTypeClass::GetClassIdentifier  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00428990.json)
}

// ==== BACKFILL 0x00428C10  AnimTypeClass::GetAnimData  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetAnimData(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00428C10.json)
}

// ==== BACKFILL 0x00428E40  AnimTypeClass::Thunk_AnimTypeClass_sub_428E40  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E40()
{

  return -1; /*0x428e43*/

}

// ==== BACKFILL 0x00428E50  AnimTypeClass::Thunk_AnimTypeClass_sub_428E50  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::Thunk_AnimTypeClass_sub_428E50()
{

  return 5; /*0x428e55*/

}

// ==== BACKFILL 0x00428E60  AnimTypeClass::GetAuxField  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetAuxField()
{

  return this->MiddleFrameIndex; /*0x428e66*/

}

// ==== BACKFILL 0x00428E70  AnimTypeClass::GetObjectSize  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::GetObjectSize()
{

  return 888; /*0x428e75*/

}

// ==== BACKFILL 0x00428E80  AnimTypeClass::Stub  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char AnimTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x428e82*/

}

// ==== BACKFILL 0x00428E90  AnimTypeClass::StubReturnFalse  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x428e92*/

}

// ==== BACKFILL 0x00428EA0  AnimTypeClass::ddtor  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
AnimTypeClass * AnimTypeClass::ddtor(char a2, int aP0, int aP1, int aP2, int a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00428EA0.json)
}

// ==== BACKFILL 0x00429210  HouseClass::QueryInterface_Helper  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::QueryInterface_Helper()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429210)
}

// ==== BACKFILL 0x00429270  HouseClass::QueryInterface_Dispatch  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::QueryInterface_Dispatch()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429270)
}

// ==== BACKFILL 0x00429360  sub_429360  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429360()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00429360.json)
}

// ==== BACKFILL 0x004293E0  sub_4293E0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4293E0()
{
  return 1; /*0x4293e5*/
}

// ==== BACKFILL 0x004293F0  sub_4293F0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4293F0()
{
  return 1; /*0x4293f5*/
}

// ==== BACKFILL 0x00429400  sub_429400  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429400()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429400)
}

// ==== BACKFILL 0x00429420  sub_429420  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429420()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00429420.json)
}

// ==== BACKFILL 0x00429450  sub_429450  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429450()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00429450.json)
}

// ==== BACKFILL 0x00429480  sub_429480  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429480()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x429480)
}

// ==== BACKFILL 0x004294A0  sub_4294A0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4294A0()
{
  return 0; /*0x4294a2*/
}

// ==== BACKFILL 0x004294B0  sub_4294B0  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4294B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004294B0.json)
}

// ==== BACKFILL 0x00429500  sub_429500  cls=ApplicationClass  sig=csp  renamed_refs=0  residual=- ====
int sub_429500()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00429500.json)
}

// ==== BACKFILL 0x0042A5B0  CellClass::ClearOccupancyGrid  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ClearOccupancyGrid() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x42A5B0.json */
}

// ==== BACKFILL 0x0042B1F0  Object::ComputeAllocationSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Object::ComputeAllocationSize()
{

  return 2 * dword_87F8DC * (dword_87F8E0 + 4); /*0x42b201*/

}

// ==== BACKFILL 0x0042D470  CellStruct::Set  cls=CellStruct  sig=csp  renamed_refs=0  residual=- ====
unsigned int * CellStruct::Set(int16_t a2, int16_t a3)
{

  LOWORD(this->field_0) = a2; /*0x42d47c*/
  HIWORD(this->field_0) = a3; /*0x42d47f*/
  return (unsigned int *)(this); /*0x42d483*/

}

// ==== BACKFILL 0x0042D830  sub_42D830  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_42D830(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042D830.json)
}

// ==== BACKFILL 0x0042DF40  Delegate::ProcessBitmapAndDispatch  cls=Base64Pipe  sig=csp  renamed_refs=0  residual=- ====
int Delegate::ProcessBitmapAndDispatch()
{

  int v2; // edi
  int v3; // edx
  void *pad_14; // edi
  int v5; // eax

  v2 = 0; /*0x42df44*/
  v3 = this->field_10; /*0x42df46*/
  if ( v3 ) /*0x42df4b*/
  {
    if ( this->field_C ) /*0x42df4d*/
    {
      pad_14 = (void *)((int)(&this->field_18));
      v5 = (int)(DecodeBitmapRGB((gamemd::Pipe *)((uint8_t *)this->__pad_14), v3,(unsigned char *)(&this->field_18), 3));
    }
    else
    {
      pad_14 = (void *)((int)(this->__pad_14));
      v5 = (int)(EncodeBitmapRGB((gamemd::Pipe *)((char *)&this->field_18), v3,(unsigned char *)(this->__pad_14), 4));
    }
    v2 = (int)(((Delegate*)((Pipe *)this))->Dispatch((int)pad_14, v5));
    this->field_10 = 0; /*0x42df7d*/
  }
  return v2 + ((GameClass*)(Pipe *)this)->GetRelatedObject(); /*0x42df8d*/

}

// ==== BACKFILL 0x0042E410  Rect::Set  cls=Rect  sig=csp  renamed_refs=0  residual=- ====
_DWORD * Rect::Set(int aP1, int aP2, int aP3, int aP4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42E410)
}

// ==== BACKFILL 0x0042E6C0  sub_42E6C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_42E6C0(int a1)
{
  return 1; /*0x42e6c2*/
}

// ==== BACKFILL 0x0042E6D0  CellClass::setTileIndex  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::setTileIndex(int a2) {

  LOWORD(this->foggedObjects) += a2; /*0x42e6da*/
  HIWORD(this->foggedObjects) += HIWORD(a2); /*0x42e6de*/
  return a2; /*0x42e6e2*/

}

// ==== BACKFILL 0x0042E6F0  BaseClass::Constructor  cls=BaseClass  sig=csp  renamed_refs=0  residual=- ====
void* BaseClass::Constructor()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042E6F0.json)
}

// ==== BACKFILL 0x0042E800  sub_42E800  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_42E800(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42E800)
}

// ==== BACKFILL 0x0042E990  sub_42E990  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_42E990(unsigned int * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042E990.json)
}

// ==== BACKFILL 0x0042EA30  sub_42EA30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_42EA30(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042EA30.json)
}

// ==== BACKFILL 0x0042EAD0  sub_42EAD0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_42EAD0(unsigned short * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042EAD0.json)
}

// ==== BACKFILL 0x0042ED60  HouseClass::SaveTriggerNodeData  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::SaveTriggerNodeData(void* a1, void* a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042ED60.json)
}

// ==== BACKFILL 0x0042F1E0  BaseClass::Construct  cls=BaseClass  sig=csp  renamed_refs=0  residual=- ====
void* BaseClass::Construct(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0042F1E0.json)
}

// ==== BACKFILL 0x0042F380  HouseClass::FailedToPlaceNode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::FailedToPlaceNode(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42F380)
}

// ==== BACKFILL 0x0042F670  DynamicVector::Constructor_Cell  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int * DynamicVector::Constructor_Cell(ObjectClass * aP1, ObjectClass * aP2, void *a3_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x42F670)
}
