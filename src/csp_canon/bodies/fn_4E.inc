// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x004E0130  AbstractClass::COMStub_Return0_34  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::COMStub_Return0_34()
{

  return 0; /*0x4e0132*/

}

// ==== BACKFILL 0x004E0140  AbstractClass::getCurrentMission  cls=MissionClass  sig=csp  renamed_refs=0  residual=- ====
char AbstractClass::getCurrentMission()
{

  return 1; /*0x4e0142*/

}

// ==== BACKFILL 0x004E0190  AbstractClass::updateMission  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void AbstractClass::updateMission() {
}

// ==== BACKFILL 0x004E01C0  AbstractClass::queueMission  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int GScreenClass::queueMission(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E01C0.json)
}

// ==== BACKFILL 0x004E01F0  FoggedObjectClass_42::ClearBuffer  cls=FoggedObjectClass  sig=csp  renamed_refs=1  residual=- ====
void FoggedObjectClass_42::ClearBuffer(void *a1_1)
{

  void *vtable1; // eax

  vtable1 = (void *)this->vtable1; /*0x4e01f6*/
  this->Count = 0; /*0x4e01f9*/
  if ( vtable1 && BYTE1(this->vtable3) ) /*0x4e0200*/
  {
    __3_YAXPAX_Z(vtable1); /*0x4e0206*/
    this->vtable1 = 0; /*0x4e020e*/
  }
  BYTE1(this->vtable3) = 0; /*0x4e0211*/
  this->vtable2 = 0; /*0x4e0214*/

}

// ==== BACKFILL 0x004E0220  FoggedObjectClass_42::PointerToIndex  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int FoggedObjectClass_42::PointerToIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0220)
}

// ==== BACKFILL 0x004E0270  AbstractClass::processMissionQueue  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void* AbstractClass::processMissionQueue(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x4e0270.json */
}

// ==== BACKFILL 0x004E0410  AbstractClassVector::ddtor  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void AbstractClassVector::ddtor()
{
}

// ==== BACKFILL 0x004E04A0  AbstractClass::completeMission  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::completeMission(int a2, void* a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 17 errs): wrong-universe gap2 body; truth func_0x4e04a0.json */
}

// ==== BACKFILL 0x004E0700  FoggedObjectClass_42::SetCapacity  cls=FoggedObjectClass  sig=csp  renamed_refs=0  residual=- ====
char FoggedObjectClass_42::SetCapacity(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0700)
}

// ==== BACKFILL 0x004E0E80  AbstractClassVector::Construct  cls=AbstractClassVector  sig=csp  renamed_refs=0  residual=- ====
int AbstractClassVector::Construct(int aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E0E80)
}

// ==== BACKFILL 0x004E1100  BulletClass::ResetDetonationTimer  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
void* BulletClass::ResetDetonationTimer() {
  *(unsigned int *)this->__pad_0 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4e1108*/
  this->BulletClass_field_0x8 = 0; /*0x4e110c*/
  *(unsigned int *)this->__pad_C = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4e1115*/
  *(unsigned int *)&this->__pad_C[8] = 0; /*0x4e1118*/
  this->BulletClass_field_0x18 = 0; /*0x4e111b*/
  *(unsigned int *)this->__pad_1C = 0; /*0x4e111e*/
  *(unsigned int *)&this->__pad_1C[4] = 0; /*0x4e1121*/
  *(unsigned int *)&this->__pad_1C[8] = 0; /*0x4e1124*/
  return this->__pad_0; /*0x4e1127*/
}

// ==== BACKFILL 0x004E1130  BulletClass::InitDetonationTimer  cls=BulletClass  sig=csp  renamed_refs=0  residual=- ====
int BulletClass::InitDetonationTimer(void* a1, void* a2, int a3, int a4) {
  double v5; // st7
  void *v7; // ecx
  int64_t result; // rax
  int v9; // kr00_4
  double v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-Ch]
  void *v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]

  v7 = (void *)a4; /*0x4e113a*/
  if ( a4 <= a3 ) /*0x4e1141*/
    v7 = (void *)a3; /*0x4e1143*/
  *(unsigned int *)this->__pad_0 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4e114f*/
  this->BulletClass_field_0x4 = v12; /*0x4e1155*/
  this->BulletClass_field_0x8 = v7; /*0x4e1158*/
  *(unsigned int *)this->__pad_C = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4e1163*/
  *(unsigned int *)&this->__pad_C[4] = v12; /*0x4e116a*/
  *(unsigned int *)&this->__pad_C[8] = a3; /*0x4e1171*/
  this->BulletClass_field_0x18 = (void *)*a2; /*0x4e117b*/
  *(unsigned int *)this->__pad_1C = a2[1]; /*0x4e1180*/
  *(unsigned int *)&this->__pad_1C[4] = a2[2]; /*0x4e1186*/
  v11 = *a1 - *a2; /*0x4e1196*/
  v13 = a1[1] - a2[1]; /*0x4e11a2*/
  __asm { fild [esp+1Ch+var_8] } /*0x4e11a9*/
  v14 = a1[2] - a2[2]; /*0x4e11af*/
  __asm /*0x4e11b3*/
  {
//L-fix     fild [esp+1Ch+var_4]
//L-fix     fild [esp+1Ch+var_C]
//L-fix     fld st
//L-fix     fmul st, st(1)
//L-fix     fld st(2)
//L-fix     fmul st, st(3)
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp [esp+1Ch+var_1C]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v10); /*0x4e11d4*/
  v9 = Math::RoundToInt(v5); /*0x4e11dc*/
  IDA_WORD2(result) = IDA_HIWORD(v9); /*0x4e11dc*/
  IDA_LOWORD(result) = v9; /*0x4e11dc*/
  *(unsigned int *)&this->__pad_1C[8] = result; /*0x4e11e1*/
  return result; /*0x4e11e4*/
}

// ==== BACKFILL 0x004E12D0  BuildingAnim::GetType  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int BuildingAnim::GetType()
{

  int v0; // eax

  v0 = FindBuildingAnimByName((gamemd::AbstractClass *)(off_822724), 1); /*0x4e12db*/
  if ( v0 ) /*0x4e12e2*/
    return *(unsigned int *)v0; /*0x4e12e4*/
  else
    return 0; /*0x4e12e7*/

}

// ==== BACKFILL 0x004E14A0  ObjectClass::InputThunkA  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::InputThunkA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E14A0)
}

// ==== BACKFILL 0x004E14B0  ObjectClass::InputThunkB  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::InputThunkB()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E14B0)
}

// ==== BACKFILL 0x004E14C0  ObjectClass::DestroyChain  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::DestroyChain() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 22 errs): wrong-universe gap2 body; truth func_0x4e14c0.json */
}

// ==== BACKFILL 0x004E1510  CheckListClass::StubReturnVoid  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
void CheckListClass::StubReturnVoid()
{

  ; /*0x4e1510*/

}

// ==== BACKFILL 0x004E1520  CheckListClass::StubReturn  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
void CheckListClass::StubReturn()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1520)
}

// ==== BACKFILL 0x004E1530  COMObject::ActivateThunk  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::ActivateThunk(int a1, int a2, int a3) {
  int v4; // edx

  if ( !a1 ) /*0x4e1536*/
    return 0; /*0x4e154a*/
  v4 = (int)((unsigned int *)(*(unsigned int *)this->__pad_0)); /*0x4e1538*/
  this->q01C = (unsigned int *)(1); /*0x4e153b*/
  (*(void (**)(int))(v4 + 120))(a1); /*0x4e153f*/
  return 1; /*0x4e1547*/
}

// ==== BACKFILL 0x004E1570  ObjectClass::BroadcastFlag  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::BroadcastFlag(int a1) {
}

// ==== BACKFILL 0x004E1920  COMObject::FindInList  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::FindInList(int a2) {
  GadgetClass *v2; // esi

  v2 = (gamemd::GadgetClass *)(this);
  if ( !a2 || !this ) /*0x4e192e*/
    return 0; /*0x4e1948*/
  while ( (*(int (**)(GadgetClass *))(*(unsigned int *)v2->__pad_0 + 68))(v2) != a2 ) /*0x4e1939*/
  {
    v2 = (GadgetClass *)(*(int (**)(GadgetClass *))(*(unsigned int *)v2->__pad_0 + 4))(v2); /*0x4e1942*/
    if ( !v2 ) /*0x4e1946*/
      return 0; /*0x4e1946*/
  }
  return (int)v2->__pad_0; /*0x4e1948*/
}

// ==== BACKFILL 0x004E1970  COMObject::TrackCurrent  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::TrackCurrent(int a1) {
  char result; // al

  result = a1; /*0x4e1975*/
  if ( IDA_BYTE1(this->Image) && (a1 & 0x11) != 0 ) /*0x4e197d*/
  {
    dword_8B3E88 = (int)this; /*0x4e197f*/
  }
  else if ( (ShpButtonClass *)dword_8B3E88 != this ) /*0x4e198d*/
  {
    return result; /*0x4e198d*/
  }
  if ( (a1 & 0x44) != 0 ) /*0x4e1991*/
    dword_8B3E88 = 0; /*0x4e1993*/
  return result; /*0x4e199d*/
}

// ==== BACKFILL 0x004E19A0  COMObject::ActivateGlobal  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::ActivateGlobal() {
  int v2; // eax

  if ( dword_8B3E90 ) /*0x4e19ab*/
  {
    (*(void (**)(int))(*(unsigned int *)dword_8B3E90 + 72))(dword_8B3E90); /*0x4e19af*/
    (*(void (**)(int))(*(unsigned int *)dword_8B3E90 + 84))(dword_8B3E90); /*0x4e19ba*/
  }
  v2 = *(unsigned int *)this->Hovered; /*0x4e19bd*/
  IDA_BYTE1(v2) |= 1u; /*0x4e19c0*/
  *(unsigned int *)this->Hovered = v2; /*0x4e19c3*/
  dword_8B3E90 = (int)this; /*0x4e19c6*/
  return v2; /*0x4e19cc*/
}

// ==== BACKFILL 0x004E19D0  COMObject::DeactivateGlobal  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::DeactivateGlobal() {
  int v1; // eax

  if ( (ShpButtonClass *)dword_8B3E90 == this ) /*0x4e19d6*/
  {
    v1 = *(unsigned int *)this->Hovered; /*0x4e19d8*/
    IDA_BYTE1(v1) &= ~1u; /*0x4e19db*/
    *(unsigned int *)this->Hovered = v1; /*0x4e19de*/
    dword_8B3E90 = 0; /*0x4e19e1*/
  }
  return v1; /*0x4e19eb*/
}

// ==== BACKFILL 0x004E19F0  COMObject::IsPrimaryInstance  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
bool COMObject::IsPrimaryInstance() {
  return this == (GadgetClass *)((unsigned int *)&FootClass_Array)[2]; /*0x4e19fd*/
}

// ==== BACKFILL 0x004E1A00  COMObject::FindNextActive  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::FindNextActive(unsigned char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1A00)
}

// ==== BACKFILL 0x004E1A40  ObjectClass::SetPositionXY  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetPositionXY(int a1, int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x4e1a40.json */
}

// ==== BACKFILL 0x004E1AD0  LinkClass::Destru_vt00  cls=LinkClass  sig=csp  renamed_refs=0  residual=- ====
LinkClass * LinkClass::Destru_vt00(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1AD0)
}

// ==== BACKFILL 0x004E1D00  Main::CreateDialog  cls=Main  sig=csp  renamed_refs=0  residual=- ====
int Main::CreateDialog()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E1D00)
}

// ==== BACKFILL 0x004E24A0  Time::GetElapsedMS  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Time::GetElapsedMS()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E24A0)
}

// ==== BACKFILL 0x004E2A50  sub_4E2A50  cls=GaugeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4E2A50::sub_4E2A50(ControlClass * aP1, int aP2, int aP3, ControlClass * aP4, int aP5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E2A50)
}

// ==== BACKFILL 0x004E2AF0  COMObject::Check  cls=TriColorGaugeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::Check(int a1) {
  if ( a1 < 0 || a1 >= *(unsigned int *)&this->m_2D[3] ) /*0x4e2afb*/
    return 0; /*0x4e2b0d*/
  *(unsigned int *)&this->__pad_31[11] = a1; /*0x4e2afd*/
  (*(void (**))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x4e2b02*/
  return 1; /*0x4e2b0a*/
}

// ==== BACKFILL 0x004E2B20  COMObject::SetField  cls=TriColorGaugeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::SetField(int a1) {
  if ( a1 < 0 || a1 >= *(unsigned int *)&this->m_2D[3] ) /*0x4e2b2b*/
    return 0; /*0x4e2b3d*/
  *(unsigned int *)&this->__pad_31[15] = a1; /*0x4e2b2d*/
  (*(void (**))(*(unsigned int *)this->__pad_0 + 72))(this); /*0x4e2b32*/
  return 1; /*0x4e2b3a*/
}

// ==== BACKFILL 0x004E30C0  COMObject::Thunk_COMObject_sub_4E30C0  cls=GaugeClass  sig=csp  renamed_refs=0  residual=- ====
int COMObject::Thunk_COMObject_sub_4E30C0()
{

  return 4; /*0x4e30c5*/

}

// ==== BACKFILL 0x004E30D0  GaugeClass::QueryInterface  cls=GaugeClass  sig=csp  renamed_refs=0  residual=- ====
GaugeClass * GaugeClass::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E30D0)
}

// ==== BACKFILL 0x004E30F0  COMObject::ScalarDtor  cls=TriColorGaugeClass  sig=csp  renamed_refs=0  residual=- ====
void* COMObject::ScalarDtor(int a2) {
  ((GadgetClass*)(GadgetClass *)this)->Dtor(); /*0x4e30f3*/
  if ( (a2 & 1) != 0 ) /*0x4e30fd*/
    RA2_OPDEL(this); /*0x4e3100*/
  return this->__pad_0; /*0x4e310a*/
}

// ==== BACKFILL 0x004E3320  GetResourceIDHardcodedCSF  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_4E3320::GetResourceIDHardcodedCSF() {

  if ( !this ) /*0x4e3324*/
    return 1754; /*0x4e3326*/
  if ( this == (ObjectClass *)1 ) /*0x4e332f*/
    return 1755; /*0x4e3331*/
  if ( this == (ObjectClass *)2 ) /*0x4e333a*/
    return 1756; /*0x4e333c*/
  if ( this == (ObjectClass *)3 ) /*0x4e3345*/
    return 1757; /*0x4e3347*/
  if ( this == (ObjectClass *)4 ) /*0x4e3350*/
    return 1758; /*0x4e3352*/
  if ( this == (ObjectClass *)5 ) /*0x4e335b*/
    return 1759; /*0x4e335d*/
  if ( this == (ObjectClass *)6 ) /*0x4e3366*/
    return 1760; /*0x4e3368*/
  return this != (ObjectClass *)7 ? -1 : 1761;

}

// ==== BACKFILL 0x004E3560  BuildingType::FindDefault  cls=BuildingType  sig=csp  renamed_refs=0  residual=- ====
int BuildingType::FindDefault()
{

  int result; // eax

  result = 0; /*0x4e3560*/
  if ( this == (BuildingType *)-2 ) /*0x4e3565*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AE8, 0); /*0x4e3573*/
  if ( !this ) /*0x4e357b*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AF0, 0); /*0x4e358a*/
  if ( this == (BuildingType *)1 ) /*0x4e3593*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AF4, 0); /*0x4e35a3*/
  if ( this == (BuildingType *)2 ) /*0x4e35ac*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AF8, 0); /*0x4e35bb*/
  if ( this == (BuildingType *)3 ) /*0x4e35c4*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AFC, 0); /*0x4e35d4*/
  if ( this == (BuildingType *)4 ) /*0x4e35dd*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B00, 0); /*0x4e35ed*/
  if ( this == (BuildingType *)5 ) /*0x4e35f6*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B04, 0); /*0x4e3605*/
  if ( this == (BuildingType *)6 ) /*0x4e360e*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B08, 0); /*0x4e361e*/
  if ( this == (BuildingType *)7 ) /*0x4e3627*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B0C, 0); /*0x4e3637*/
  if ( this == (BuildingType *)8 ) /*0x4e3640*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B10, 0); /*0x4e364f*/
  if ( this == (BuildingType *)-3 ) /*0x4e3658*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844AEC, 0); /*0x4e3668*/
  if ( this == (BuildingType *)9 ) /*0x4e3671*/
    return HashTable::Find(&g_DialogHashTable, (const char *)off_844B14, 0); /*0x4e3681*/
  return result; /*0x4e3578*/

}

// ==== BACKFILL 0x004E37D0  GetResourceID2CSF  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetResourceID2CSF() {

  if ( !this ) /*0x4e37d4*/
    return 1697; /*0x4e37d6*/
  if ( this == (ObjectClass *)1 ) /*0x4e37df*/
    return 1296; /*0x4e37e1*/
  if ( this == (ObjectClass *)2 ) /*0x4e37ea*/
    return 1299; /*0x4e37ec*/
  if ( this == (ObjectClass *)3 ) /*0x4e37f5*/
    return 1310; /*0x4e37f7*/
  if ( this == (ObjectClass *)4 ) /*0x4e3800*/
    return 1300; /*0x4e3802*/
  if ( this == (ObjectClass *)5 ) /*0x4e380b*/
    return 1311; /*0x4e380d*/
  if ( this == (ObjectClass *)6 ) /*0x4e3816*/
    return 1312; /*0x4e3818*/
  return this != (ObjectClass *)7 ? -1 : 1313;

}

// ==== BACKFILL 0x004E38A0  SideClass::GetName  cls=SideClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * SideClass::GetName()
{

  if ( this == (SideClass *)-2 ) /*0x4e38a3*/
    return GetStringCSF((char *)(aSttPlayersider), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 237); /*0x4e38b6*/
  if ( this == (SideClass *)-3 ) /*0x4e38bf*/
    return GetStringCSF((char *)(aSttPlayersideo), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 239); /*0x4e38d2*/
  if ( !this ) /*0x4e38da*/
    return GetStringCSF((char *)(aSttPlayersidea), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 241); /*0x4e38ed*/
  if ( this == (SideClass *)1 ) /*0x4e38f6*/
    return GetStringCSF((char *)(aSttPlayersidek), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 243); /*0x4e3909*/
  if ( this == (SideClass *)2 ) /*0x4e3912*/
    return GetStringCSF((char *)(aSttPlayersidef), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 245); /*0x4e3925*/
  if ( this == (SideClass *)3 ) /*0x4e392e*/
    return GetStringCSF((char *)(aSttPlayersideg), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 247); /*0x4e3941*/
  if ( this == (SideClass *)4 ) /*0x4e394a*/
    return GetStringCSF((char *)(aSttPlayersideb), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 249); /*0x4e395d*/
  if ( this == (SideClass *)5 ) /*0x4e3966*/
    return GetStringCSF((char *)(aSttPlayersidel), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 251); /*0x4e3979*/
  if ( this == (SideClass *)6 ) /*0x4e3982*/
    return GetStringCSF((char *)(aSttPlayersidei), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 253); /*0x4e3995*/
  if ( this == (SideClass *)7 ) /*0x4e399e*/
    return GetStringCSF((char *)(aSttPlayersidec), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 255); /*0x4e39b1*/
  if ( this == (SideClass *)8 ) /*0x4e39ba*/
    return GetStringCSF((char *)(aSttPlayersider_0), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 257); /*0x4e39cd*/
  if ( this == (SideClass *)9 ) /*0x4e39d6*/
    return GetStringCSF((char *)(aSttPlayersidey), 0,(const char *)(g_Str_File_GDlgSupp_cpp), 259); /*0x4e39e9*/
  return 0; /*0x4e38bb*/

}

// ==== BACKFILL 0x004E3A00  FillComboBoxRandomOnly  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool FillComboBoxRandomOnly(HWND hDlg, int nIDDlgItem)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3A00)
}

// ==== BACKFILL 0x004E3B00  SetupComboBoxObserver  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT SetupComboBoxObserver(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E3B00)
}

// ==== BACKFILL 0x004E4170  GetComboBoxSelected  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetComboBoxSelected(HWND aP0, int nIDDlgItem, LRESULT wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4170)
}

// ==== BACKFILL 0x004E41D0  GetResourceIDCSF  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetResourceIDCSF() {

  if ( !this ) /*0x4e41d4*/
    return 1698; /*0x4e41d6*/
  if ( this == (ObjectClass *)1 ) /*0x4e41df*/
    return 1314; /*0x4e41e1*/
  if ( this == (ObjectClass *)2 ) /*0x4e41ea*/
    return 1315; /*0x4e41ec*/
  if ( this == (ObjectClass *)3 ) /*0x4e41f5*/
    return 1316; /*0x4e41f7*/
  if ( this == (ObjectClass *)4 ) /*0x4e4200*/
    return 1317; /*0x4e4202*/
  if ( this == (ObjectClass *)5 ) /*0x4e420b*/
    return 1318; /*0x4e420d*/
  if ( this == (ObjectClass *)6 ) /*0x4e4216*/
    return 1319; /*0x4e4218*/
  return this != (ObjectClass *)7 ? -1 : 1320;

}

// ==== BACKFILL 0x004E43C0  InitGameDropdownColors  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
LPARAM * InitGameDropdownColors()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E43C0)
}

// ==== BACKFILL 0x004E4770  FillListBox  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT FillListBox(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4770)
}

// ==== BACKFILL 0x004E4E20  GetComboBoxSelectedRaw  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetComboBoxSelectedRaw(HWND aP0, int nIDDlgItem, LRESULT wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E4E20)
}

// ==== BACKFILL 0x004E4E60  GetResourceID3CSF  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetResourceID3CSF() {

  if ( !this ) /*0x4e4e64*/
    return 1699; /*0x4e4e66*/
  if ( this == (ObjectClass *)1 ) /*0x4e4e6f*/
    return 1700; /*0x4e4e71*/
  if ( this == (ObjectClass *)2 ) /*0x4e4e7a*/
    return 1701; /*0x4e4e7c*/
  if ( this == (ObjectClass *)3 ) /*0x4e4e85*/
    return 1702; /*0x4e4e87*/
  if ( this == (ObjectClass *)4 ) /*0x4e4e90*/
    return 1703; /*0x4e4e92*/
  if ( this == (ObjectClass *)5 ) /*0x4e4e9b*/
    return 1704; /*0x4e4e9d*/
  if ( this == (ObjectClass *)6 ) /*0x4e4ea6*/
    return 1706; /*0x4e4ea8*/
  return this != (ObjectClass *)7 ? -1 : 1707;

}

// ==== BACKFILL 0x004E4EC0  Dialog::SideIDToIndex  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SideIDToIndex()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E4EC0.json)
}

// ==== BACKFILL 0x004E5260  SetupComboBoxRandomAlliance  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetupComboBoxRandomAlliance(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5260)
}

// ==== BACKFILL 0x004E5900  SetComboBoxSelection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT SetComboBoxSelection(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5900)
}

// ==== BACKFILL 0x004E5940  GetResourceID4CSF  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetResourceID4CSF() {

  if ( !this ) /*0x4e5944*/
    return 1901; /*0x4e5946*/
  if ( this == (ObjectClass *)1 ) /*0x4e594f*/
    return 1902; /*0x4e5951*/
  if ( this == (ObjectClass *)2 ) /*0x4e595a*/
    return 1903; /*0x4e595c*/
  if ( this == (ObjectClass *)3 ) /*0x4e5965*/
    return 1904; /*0x4e5967*/
  if ( this == (ObjectClass *)4 ) /*0x4e5970*/
    return 1905; /*0x4e5972*/
  if ( this == (ObjectClass *)5 ) /*0x4e597b*/
    return 1906; /*0x4e597d*/
  if ( this == (ObjectClass *)6 ) /*0x4e5986*/
    return 1907; /*0x4e5988*/
  return this != (ObjectClass *)7 ? -1 : 1908;

}

// ==== BACKFILL 0x004E59A0  Dialog::OptionIDToIndex  cls=Dialog  sig=csp  renamed_refs=0  residual=- ====
int INIClass::OptionIDToIndex()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E59A0.json)
}

// ==== BACKFILL 0x004E5CB0  InitComboBoxNone  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT InitComboBoxNone(HWND hDlg, int nIDDlgItem)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E5CB0)
}

// ==== BACKFILL 0x004E6030  GetComboBoxSelectedRaw2  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LRESULT GetComboBoxSelectedRaw2(HWND hDlg, int nIDDlgItem, WPARAM wParam)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6030)
}

// ==== BACKFILL 0x004E6070  sub_4E6070  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4E6070::sub_4E6070()
{

  *(unsigned int *)&this->bombVisible = 0; /*0x4e6087*/
  this->health = 0; /*0x4e608a*/
  Debug::Log(); /*0x4e608d*/
  memset(this, 0xFFu, 0x18u); /*0x4e609f*/
  LOWORD(((unsigned int *)this)[0]) = -1; /*0x4e60a9*/
  *((unsigned int *)this + (*(unsigned int *)&this->bombVisible)++) = 2; /*0x4e60cc*/
  Debug::Log(); /*0x4e60d6*/
  return (int)this; /*0x4e612c*/

}

// ==== BACKFILL 0x004E6150  GetVersionString  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * Version_GetString(unsigned int * a1, unsigned char * a2, char * Destination, size_t Count)
{
  char *result; // eax

  *a2 = Event_Process_7C5F3D(); /*0x4e615b*/
  Event_Process_7C5FFF(); /*0x4e615d*/
  *a1 = byte_84E863; /*0x4e6169*/
  result = Destination; /*0x4e616b*/
  if ( Destination ) /*0x4e6173*/
    return strncpy(Destination, (const char *)Source, Count); /*0x4e6180*/
  return result; /*0x4e616f*/
}

// ==== BACKFILL 0x004E6190  DetectProcessorType  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4E6190()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E6190)
}

// ==== BACKFILL 0x004E8240  HouseClass::vt_placeholder_00  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::vt_placeholder_00()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8240)
}

// ==== BACKFILL 0x004E8250  HouseClass::vt_placeholder_01  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::vt_placeholder_01()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8250)
}

// ==== BACKFILL 0x004E8260  HouseClass::vt_placeholder_02  cls=TiberianSunClassFactory  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::vt_placeholder_02()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8260)
}

// ==== BACKFILL 0x004E8270  HouseClass::initAngerStruct  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
std::locale::facet * HouseClass::initAngerStruct(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4E8270)
}

// ==== BACKFILL 0x004E8290  HouseClass::COMStub_3  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void HouseClass::COMStub_3()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E8290.json)
}

// ==== BACKFILL 0x004E82C0  HouseClass::COMStub_5  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::COMStub_5(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E82C0.json)
}

// ==== BACKFILL 0x004E92F0  HouseClass::vt_03  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void HouseClass_vt_03_free_()
{
     // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}

// ==== BACKFILL 0x004E9320  HouseClass::vt_04  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass_vt_04_free_(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}

// ==== BACKFILL 0x004E9360  HouseClass::vt_05  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int HouseClass_vt_05_free_(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw this-body; truth = .omo/ida_cache/)
}

// ==== BACKFILL 0x004E9380  HouseClass::COMStub_2  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::COMStub_2(int a1, void* a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9380.json)
}

// ==== BACKFILL 0x004E9430  HouseClass::COMStub_4  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::COMStub_4(void* a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004E9430.json)
}

// ==== BACKFILL 0x004EF4E0  HouseClass::vt_00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat * HouseClass_vt_00__free(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4EF4E0)
}

// ==== BACKFILL 0x004EF530  HouseClass::COMStub_0  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::COMStub_0(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004EF530.json)
}
