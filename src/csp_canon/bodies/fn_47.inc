// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00470C00  MPCooperative::startGame  cls=MPCooperative  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MPCooperative::startGame()
{

  this->MPCooperative_field_0x0 = &vt_CampaignEndScoreClass; /*0x470c04*/
  dword_89E008 = -1; /*0x470c0a*/
  dword_89E020 = 0; /*0x470c14*/
  dword_89DFD4 = 0; /*0x470c1a*/
  return &this->MPCooperative_field_0x0; /*0x470c20*/

}

// ==== BACKFILL 0x00470C30  sub_470C30  cls=CampaignEndScoreClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_470C30::sub_470C30()
{

  this->m_0 = (int)&vt_CampaignEndScoreClass; /*0x470c30*/

}

// ==== BACKFILL 0x00471F90  ObjectClass::RemoveFromPointerList  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::RemoveFromPointerList(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x471F90.json */
}

// ==== BACKFILL 0x004722C0  CellClass::HasContent  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::HasContent()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4722C0)
}

// ==== BACKFILL 0x004722D0  TechnoClass::processPowerDrain  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::processPowerDrain()
{

  return (int)((unsigned int *)this)[0]; /*0x4722d3*/

}

// ==== BACKFILL 0x004722F0  CaptureManagerClass::GetOriginalOwner  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetOriginalOwner(int a2)
{

  int v2; // eax
  int controlNodeCount; // edx
  unsigned int **i; // ecx

  v2 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  controlNodeCount = this->controlNodeCount; /*0x4722f8*/
  for ( i = (unsigned int **)(controlNodeCount + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(unsigned int *)(*(unsigned int *)(controlNodeCount + 4 * v2) + 4); /*0x472310*/

}

// ==== BACKFILL 0x00472330  HouseClass::AssignCivilianToLowPowerTargets  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::AssignCivilianToLowPowerTargets(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00472330.json)
}

// ==== BACKFILL 0x004726F0  CaptureManagerClass::PowerDrainUpdate  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4726F0)
}

// ==== BACKFILL 0x00472960  CaptureManagerClass::GetClassIdentifier  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = unk_7E988C; /*0x472990*/
  return 0; /*0x47296d*/

}

// ==== BACKFILL 0x004729A0  CaptureManagerClass::GetObjectSize  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetObjectSize()
{

  return 80; /*0x4729a5*/

}

// ==== BACKFILL 0x004729B0  CaptureManagerClass::GetTypeIdentifier  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
int CaptureManagerClass::GetTypeIdentifier()
{

  return 66; /*0x4729b5*/

}

// ==== BACKFILL 0x004729C0  CaptureManagerClass::ddtor  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
CaptureManagerClass * CaptureManagerClass::ddtor(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4729C0)
}

// ==== BACKFILL 0x00473140  CaptureManagerClass::Constructor_473140  cls=CaptureManagerClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473140)
}

// ==== BACKFILL 0x00473430  LinkedList_flat::Pop  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_flat::Pop()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473430)
}

// ==== BACKFILL 0x00473460  HouseClass::SumPowerDrain  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::SumPowerDrain()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00473460.json)
}

// ==== BACKFILL 0x004734B0  FootClass::updateMovementAnimation  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
void FootClass::updateMovementAnimation(int aP1) {
}

// ==== BACKFILL 0x00473750  sub_473750  cls=CarryoverClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_473750::sub_473750(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473750)
}

// ==== BACKFILL 0x00473960  sub_473960  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_473960(unsigned int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473960)
}

// ==== BACKFILL 0x00473A30  CCFileClass::Construct2  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
void* CCFileClass::Construct2(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 param splice; truth func_0x00473A30.json */
}

// ==== BACKFILL 0x00473A80  CCFileClass::Construct3  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Construct3() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x473A80.json */
}

// ==== BACKFILL 0x00473BA0  BufferIOFileClass::Seek  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int BufferIOFileClass::Seek() {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00473CD0  CCFileClass::Destru_vt06  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
bool CCFileClass::Destru_vt06() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x473CD0.json */
}

// ==== BACKFILL 0x00473E50  CCFileClass::Destru_vt14  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Destru_vt14() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 9 errs): wrong-universe gap2 body; truth func_0x473E50.json */
}

// ==== BACKFILL 0x00473F00  CCFileClass::Destru_vt15  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Destru_vt15(int wFatTime) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x473F00.json */
}

// ==== BACKFILL 0x00474320  CCINIClass::LoadAndVerifyDigest  cls=CCINIClass  sig=csp  renamed_refs=0  residual=- ====
int CCINIClass::LoadAndVerifyDigest(int a1, int a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00474540  sub_474540  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * E4Recv_474540::sub_474540(CCINIClass * aP1, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x474540)
}

// ==== BACKFILL 0x00474620  INIClass::ReadCoord  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadCoord(double *a1, double a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5, int aP2, int aP1, int aP3)
{

  int result; // eax

  INIClass::ReadDouble_Overwrite(a1, aP2, a4, -1.0); /*0x474631*/
  if ( a2 == -1.0 ) /*0x474641*/
    return a5; /*0x474645*/
  (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt(a2 * 256.0)) & 0xFFFF); /*0x474652*/
  return result; /*0x474649*/

}

// ==== BACKFILL 0x00474660  sub_474660  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_474660::sub_474660(unsigned char * Block, char * a3, int a4)
{

  return ((INIClass *)(char *)this)->SetDouble(Block, a3, (double)a4 * 0.00390625); /*0x47467f*/

}

// ==== BACKFILL 0x00474690  ObjectTypeClass::ReadBool  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474690.json)
}

// ==== BACKFILL 0x004746E0  ObjectTypeClass::ReadPrerequisite  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004746E0.json)
}

// ==== BACKFILL 0x00474740  ObjectTypeClass::ReadSoundList  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned char ** ObjectTypeClass::ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474740.json)
}

// ==== BACKFILL 0x004747C0  ObjectTypeClass::ReadBool2  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadBool2(INIClass * Block, INIClass * aP2, short * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004747C0.json)
}

// ==== BACKFILL 0x004748A0  INIClass::GetPipIdx  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetPipIdx(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004749E0  ObjectTypeClass::loadTypeMember_54749E0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004749E0.json)
}

// ==== BACKFILL 0x00474A90  BuildingTypeClass::FindAnimByName  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::FindAnimByName(INIClass * aP1, unsigned char * a2, AnimTypeClass * aP3, void *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474A90.json)
}

// ==== BACKFILL 0x00474B20  HouseClass::WriteBuildingTypeNameToINI  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::WriteBuildingTypeNameToINI(void* a1, void* a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00474B20.json)
}

// ==== BACKFILL 0x00474B50  INIClass::GetCoord  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetCoord(int a1, void* a2, void* a3, void* a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00474C20  INIEntry::Write3Bytes  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::Write3Bytes(void* a1, void* a2, void* a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00474C70  INIEntry::ReadColor  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::ReadColor(int a1, void* a2, void* a3, void* a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00474D50  ObjectTypeClass::ReadString  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474D50.json)
}

// ==== BACKFILL 0x00474DA0  INIClass::LookupEnum  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::LookupEnum(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00474E40  ObjectTypeClass::loadTypeMember_5474E40  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474E40.json)
}

// ==== BACKFILL 0x00474EE0  SuperWeaponTypeClass::loadSWProperties  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::loadSWProperties(uint8_t * a2, uint8_t * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474EE0.json)
}

// ==== BACKFILL 0x00474FA0  ObjectTypeClass::ReadDouble  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDouble(unsigned char * a2, unsigned char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474FA0.json)
}

// ==== BACKFILL 0x00474FF0  ObjectTypeClass::ReadDouble2  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00474FF0.json)
}

// ==== BACKFILL 0x00475060  ObjectTypeClass::ReadBool3  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned char * a2, void * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475060.json)
}

// ==== BACKFILL 0x004750D0  INIClass::ParseFlagList  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ParseFlagList(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00475150  BulletTypeClass::ReadTrajectoryFlags  cls=BulletTypeClass  sig=csp  renamed_refs=0  residual=- ====
char BulletTypeClass::ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475150.json)
}

// ==== BACKFILL 0x00475260  HouseClass::ReadHouseNamesToBitmask  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::ReadHouseNamesToBitmask(void* a1, void* a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475260.json)
}

// ==== BACKFILL 0x004752E0  HouseClass::WriteHouseListToINI  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::WriteHouseListToINI(void* a1, void* a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004752E0.json)
}

// ==== BACKFILL 0x004754B0  OverlayTypeClass::ReadINIString  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004754B0.json)
}

// ==== BACKFILL 0x00475540  SuperWeaponTypeClass::FindOrCreate  cls=SuperWeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
int SuperWeaponTypeClass::FindOrCreate(INIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475540.json)
}

// ==== BACKFILL 0x004756F0  HouseTypeClass::loadCountryData  cls=HouseTypeClass  sig=csp  renamed_refs=0  residual=- ====
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004756F0.json)
}

// ==== BACKFILL 0x004757D0  INIClass::GetBool  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::GetBool(uint8_t *aP1, uint8_t *a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4757D0)
}

// ==== BACKFILL 0x00475820  INIClass::SetStringByIndex  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::SetStringByIndex(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00475870  ScenarioClass::ReadAndParseString  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::ReadAndParseString(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004758C0  MapClass::loadTheaterINI  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::loadTheaterINI(INIClass * aP1, char * a2, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4758C0)
}

// ==== BACKFILL 0x004758F0  Scenario::FindBuildingTypeByName  cls=Scenario  sig=csp  renamed_refs=0  residual=- ====
int Game::FindBuildingTypeByName(unsigned char * a1, unsigned char * a2, CCINIClass * aP3)
{
    (void)a1; (void)a2; (void)aP3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004758F0.json)
}

// ==== BACKFILL 0x00475950  ScenarioClass::loadMapData  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::loadMapData(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00475980  HouseClass::ReadIntFromINI  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::ReadIntFromINI(void* a1, void* a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475980.json)
}

// ==== BACKFILL 0x004759D0  HouseClass::updateBuildingProduction  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::updateBuildingProduction(void* a1, void* a2, int a3)
{
    (void)a1; (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004759D0.json)
}

// ==== BACKFILL 0x004759F0  INIClass::ReadStringValue  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::ReadStringValue(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00475B70  WeaponTypeClass::ReadTrajectoryData  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
char WeaponTypeClass::ReadTrajectoryData(uint8_t * Block, char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475B70.json)
}

// ==== BACKFILL 0x00475C70  WeaponTypeClass::ReadVeteranData  cls=WeaponTypeClass  sig=csp  renamed_refs=0  residual=- ====
char  WeaponTypeClass::ReadVeteranData(uint8_t * a2, char * a3, int a4, int * Block, int a6, int16_t a7, int a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00475C70.json)
}

// ==== BACKFILL 0x00475F30  ScenarioClass::SaveIntListToINI  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::SaveIntListToINI(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00476240  ObjectTypeClass::ReadTypeListINI  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectTypeClass::ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00476240.json)
}

// ==== BACKFILL 0x00476340  ParticleSystemTypeClass::ReadXYZFromINI  cls=ParticleSystemTypeClass  sig=csp  renamed_refs=0  residual=- ====
float * ParticleSystemTypeClass::ReadXYZFromINI(float * a2, uint8_t * a3, uint8_t * a4, float * a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x476340)
}

// ==== BACKFILL 0x00476420  INIClass::GetCoord2  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
void* INIClass::GetCoord2(void* a1, void* a2, void* a3, void* a4) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x004766F0  ScenarioClass::SaveTypeNameListToINI  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::SaveTypeNameListToINI(void* a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00476A20  INIClass::WriteSuperWeaponList  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::WriteSuperWeaponList(void* a2, void* a3, int a4, void* Block, int a6, int a7, int a8, int a9, int a10) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x476A20.json */
}

// ==== BACKFILL 0x00476E20  sub_476E20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_476E20::sub_476E20()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x476E20)
}

// ==== BACKFILL 0x00476EA0  sub_476EA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_476EA0::sub_476EA0()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x476EA0)
}

// ==== BACKFILL 0x00476EB0  INIEntry::GetTechnoType  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::GetTechnoType(uint8_t *aP1, uint8_t *a2)
{

  int ExitCellByName; // eax
  int Index; // eax
  int v6; // eax
  int IndexByName; // eax
  TypeClass Destination[32]; // [esp+4h] [ebp-80h] BYREF

  ((INIClass*)(INIClass *)this)->GetString(aP1, (unsigned char *)(gamemd::INIClass *)(a2), g_Str__none_, (char *)Destination, 128); /*0x476ed5*/
  ExitCellByName = ((Factory*)(Factory *)Destination)->FindExitCellByName(); /*0x476ede*/
  if ( ExitCellByName != -1 ) /*0x476ee6*/
    return *((unsigned int *)dword_A8E34C + ExitCellByName); /*0x476eef*/
  Index = ((BuildingTypeClass *)((BuildingTypeClass *)Destination))->FindIndex(); /*0x476eff*/
  if ( Index != -1 ) /*0x476f07*/
    return *((unsigned int *)dword_A83CE4 + Index); /*0x476f10*/
  v6 = ((TypeClass*)Destination)->FindByName(); /*0x476f20*/
  if ( v6 != -1 ) /*0x476f28*/
    return *((unsigned int *)dword_A8B21C + v6); /*0x476f31*/
  IndexByName = ((BuildingTypeClass *)((BuildingTypeClass *)Destination))->FindIndexByName(); /*0x476f41*/
  if ( IndexByName == -1 ) /*0x476f49*/
    return 0; /*0x476f5e*/
  else
    return *((unsigned int *)dword_A83C6C + IndexByName); /*0x476f52*/

}

// ==== BACKFILL 0x00476FC0  ObjectTypeClass::loadTypeMember_476FC0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00476FC0.json)
}

// ==== BACKFILL 0x00477050  AnimTypeClass::ReadINIString  cls=AnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int AnimTypeClass::ReadINIString(unsigned __int8 *a3, unsigned __int8 *aP1, unsigned int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477050.json)
}

// ==== BACKFILL 0x00477590  ObjectTypeClass::loadTypeMember_5477590  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477590.json)
}

// ==== BACKFILL 0x00477640  INIEntry::ReadAbilities  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::ReadAbilities(int a1, void* a2, void* a3, int a4) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00477750  SHAPipe::ScalarDtor  cls=SHAPipe  sig=csp  renamed_refs=0  residual=- ====
int * VectorClass_flat::ScalarDtor(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477750.json)
}

// ==== BACKFILL 0x004777B0  VectorClass::Copy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::Copy(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004777B0.json)
}

// ==== BACKFILL 0x00477990  _TypeList_H::QueryInterface  cls=_TypeList_H  sig=csp  renamed_refs=0  residual=- ====
TypeList_flat * TypeList_flat::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x477993*/
  *(unsigned int *)Block = (unsigned int)(&vt_VectorClass); /*0x477996*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x4779a0*/
  {
    __3_YAXPAX_Z(v3); /*0x4779a8*/
    *((unsigned int *)Block + 1) = 0; /*0x4779b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x4779bb*/
  *((unsigned int *)Block + 2) = 0; /*0x4779c1*/
  if ( (a2 & 1) != 0 ) /*0x4779c8*/
    __3_YAXPAX_Z(Block); /*0x4779cb*/
  return (gamemd::TypeList_flat *)(Block); /*0x4779d5*/

}

// ==== BACKFILL 0x004779E0  DynamicVectorClass::Copy  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::Copy(unsigned int *a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004779E0.json)
}

// ==== BACKFILL 0x00477AC0  ParticleTypeClass::QueryInterface  cls=_TypeList_VRGBClass  sig=csp  renamed_refs=0  residual=- ====
TypeList_flat * ParticleTypeClass::QueryInterface(char a2, int a3, int a4, int a5, int a6, int a7, int a8, int aP0, int aP1, int aP2, int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x477AC0)
}

// ==== BACKFILL 0x00477BE0  VectorClass::Construct  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::Construct(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477BE0.json)
}

// ==== BACKFILL 0x00477D20  VectorClass::Destroy  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int _::Destroy()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477D20.json)
}

// ==== BACKFILL 0x00477DB0  DynamicVectorClass::Construct  cls=DynamicVectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * _::Construct(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00477DB0.json)
}

// ==== BACKFILL 0x00477EC0  DynamicVector::Add_Alt  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char DynamicVector::Add_Alt(unsigned int *aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x477ec3*/
  result = (int)this->DynamicVector_field_0x10; /*0x477ec6*/
  if ( result < DynamicVector_field_0x8 /*0x477eed*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x477ef5*/
    v5 = (unsigned int)(*(unsigned int *)&(&this->DynamicVector_field_0x1)[3]); /*0x477ef8*/
    this->DynamicVector_field_0x10 = (unsigned int)((void *)(result + 1)); /*0x477efe*/
    *(unsigned int *)(v5 + 4 * result) = (unsigned int)(*aP1); /*0x477f08*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x477f0b*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x477eef*/
  }
  return result; /*0x477ef1*/

}

// ==== BACKFILL 0x00478220  INIClass::parseKeyValue  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * INIClass::parseKeyValue(unsigned int * a2) {
    int v3; // edi
    int v4; // eax
    unsigned char *v5; // ecx
    int v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // eax
    int v10; // edx
    int v11; // edi

    this->headNode[0] = 0; /*0x47822e*/
    this->headNode[1] = 0; /*0x478231*/
    this->headNode[2] = 1; /*0x478234*/
    this->headNode[3] = 0; /*0x478238*/
    *(unsigned int *)this->__pad_0 = 0; /*0x47823b*/
    if ( this == (INIClass *)a2 ) /*0x478241*/
      return this->__pad_0; /*0x478241*/
    ((FilePipe_38 *)(void *)this)->ddtor(); /*0x478247 G42.34 T11: FilePipe_38::ddtor is 0-arg member (def e4/FilePipe_e4.cpp:305)*/
    v3 = a2[2]; /*0x47824d*/
    this->headNode[1] = v3; /*0x478252*/
    if ( !v3 ) /*0x478255*/
    {
      this->headNode[0] = 0; /*0x4782c6*/
      this->headNode[3] = 0; /*0x4782c9*/
      return this->__pad_0; /*0x4782cc*/
    }
    v4 = (int)(RA2_OPNEW(3 * v3)); /*0x47825b*/
    if ( v4 ) /*0x478265*/
    {
      if ( v3 - 1 >= 0 ) /*0x47826c*/
      {
        v5 = (unsigned char *)(v4 + 2); /*0x47826e*/
        v6 = v3; /*0x478271*/
        do /*0x47827e*/
        {
          *(v5 - 2) = 0; /*0x478272*/
          *(v5 - 1) = 0; /*0x478275*/
          *v5 = 0; /*0x478278*/
          v5 += 3; /*0x47827a*/
          --v6; /*0x47827d*/
        }
        while ( v6 ); /*0x47827e*/
      }
    }
    else
    {
      v4 = 0; /*0x478282*/
    }
    this->headNode[0] = v4; /*0x478286*/
    if ( !v4 ) /*0x478289*/
      return this->__pad_0; /*0x478289*/
    v7 = this->headNode[1]; /*0x47828b*/
    v8 = 0; /*0x47828e*/
    this->headNode[3] = 1; /*0x478292*/
    if ( v7 <= 0 ) /*0x478296*/
      return this->__pad_0; /*0x478296*/
    v9 = 0; /*0x478298*/
    do /*0x4782bb*/
    {
      v10 = v9 + a2[1]; /*0x4782a0*/
      v11 = this->headNode[0] + v9; /*0x4782a4*/
      ++v8; /*0x4782a6*/
      v9 += 3; /*0x4782aa*/
      *(unsigned short *)v11 = *(unsigned short *)v10; /*0x4782ad*/
      *(unsigned char *)(v11 + 2) = *(unsigned char *)(v10 + 2); /*0x4782b3*/
    }
    while ( v8 < this->headNode[1] ); /*0x4782bb*/
    return this->__pad_0; /*0x4782bf*/
}

// ==== BACKFILL 0x00478630  VectorClass::vt00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat *  VectorClass_flat::vt00(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00478630.json)
}

// ==== BACKFILL 0x00478720  TypeList::Copy  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList_flat::Copy(unsigned int * a2, void *a2_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x478720)
}

// ==== BACKFILL 0x00478790  TypeList::TechnoTypeConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList_flat::TechnoTypeConstructor(int a2, int a3)
{

  ((unsigned int *)this)[0] = 0; /*0x47879b*/
  ((unsigned int *)this)[0] = a2; /*0x47879e*/
  ((unsigned int *)this)[0] = 1; /*0x4787a1*/
  ((unsigned int *)this)[0] = 0; /*0x4787a5*/
  this->DynamicVectorClass = &vt_VectorClass; /*0x4787a8*/
  if ( a2 ) /*0x4787ae*/
  {
    if ( a3 ) /*0x4787b6*/
    {
      ((unsigned int *)this)[0] = (unsigned int)((void *)a3); /*0x4787b8*/
return (unsigned int *)&this->DynamicVectorClass; /*0x4787be*/
    }
    ((unsigned int *)this)[0] = (unsigned int)((void *)__2_YAPAXI_Z(4 * a2)); /*0x4787cd*/
    ((unsigned int *)this)[0] = 1; /*0x4787d0*/
  }
return (unsigned int *)&this->DynamicVectorClass; /*0x4787bd*/

}

// ==== BACKFILL 0x00478850  BuildingTypeClass::loadBuildingProperty_b_5478850  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * BuildingTypeClass::loadBuildingProperty_b_5478850(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00478850.json)
}

// ==== BACKFILL 0x004790A0  Game::CheckForGameCD  cls=Game  sig=csp  renamed_refs=0  residual=- ====
int Game::CheckForGameCD()
{

  return AlwaysFindYRCD();

}

// ==== BACKFILL 0x004790E0  CD::AlwaysAvailable  cls=CD  sig=csp  renamed_refs=0  residual=- ====
int CD::AlwaysAvailable(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x4790E0.json */
}

// ==== BACKFILL 0x00479110  CD::NeverAsk  cls=CD  sig=csp  renamed_refs=0  residual=- ====
bool CD::NeverAsk(int a2) {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 13 errs): wrong-universe gap2 body; truth func_0x479110.json */
}

// ==== BACKFILL 0x00479900  sub_479900  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_479900(char a1)
{
  UINT v1; // eax
  DWORD v3; // edi
  HANDLE FileA; // edi
  char Buffer[8]; // [esp+8h] [ebp-10h] BYREF
  CHAR FileName[8]; // [esp+10h] [ebp-8h] BYREF

  sprintf(Buffer, "%c:\\", a1 + 65); /*0x479918*/
  v1 = GetDriveTypeA(Buffer) - 2; /*0x47992b*/
  if ( v1 ) /*0x47992e*/
  {
    if ( v1 != 3 ) /*0x479933*/
    {
      Debug::Log(); /*0x47993a*/
      return -1; /*0x47994a*/
    }
    v3 = 0x80000000; /*0x47994d*/
  }
  else
  {
    v3 = -1073741824; /*0x479954*/
  }
  sprintf(FileName, "\\\\.\\%c:", a1 + 65); /*0x479964*/
  FileA = CreateFileA(FileName, v3, 3u, 0, 3u, 0, 0); /*0x479982*/
  if ( FileA == (HANDLE)-1 ) /*0x479987*/
    Debug::Log(); /*0x47998f*/
  return (int)FileA; /*0x479945*/
}

// ==== BACKFILL 0x004799D0  sub_4799D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_4799D0(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x4799d8*/
  v2 = 0; /*0x4799e4*/
  while ( !DeviceIoControl(v1, 0x90018u, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a03*/
  {
    GetLastError(); /*0x479a06*/
    Debug::Log(); /*0x479a0e*/
    Sleep(0x1F4u); /*0x479a1b*/
    if ( ++v2 >= 20 ) /*0x479a21*/
      return 0; /*0x479a29*/
  }
  return 1; /*0x479a23*/
}

// ==== BACKFILL 0x00479A40  sub_479A40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_479A40(HANDLE hDevice)
{
  HANDLE v1; // ebp
  int v2; // esi

  v1 = hDevice; /*0x479a48*/
  v2 = 0; /*0x479a54*/
  while ( !DeviceIoControl(v1, 0x9001Cu, 0, 0, 0, 0, (LPDWORD)&hDevice, 0) ) /*0x479a73*/
  {
    GetLastError(); /*0x479a76*/
    Debug::Log(); /*0x479a7e*/
    Sleep(0x1F4u); /*0x479a8b*/
    if ( ++v2 >= 20 ) /*0x479a91*/
      return 0; /*0x479a99*/
  }
  return 1; /*0x479a93*/
}

// ==== BACKFILL 0x0047A1B0  sub_47A1B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::sub_47A1B0(DWORD BytesReturned)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47A1B0)
}

// ==== BACKFILL 0x0047A2D0  sub_47A2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::sub_47A2D0(DWORD BytesReturned)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47A2D0)
}

// ==== BACKFILL 0x0047A560  sub_47A560  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_47A560(HANDLE hDevice, DWORD BytesReturned)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47A560)
}

// ==== BACKFILL 0x0047A620  sub_47A620  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_47A620(HANDLE hDevice, DWORD BytesReturned)
{
  unsigned int InBuffer[7]; // [esp+4h] [ebp-1Ch] BYREF

  memset(&InBuffer[1], 0, 0x18u); /*0x47a62f*/
  InBuffer[0] = (char)BytesReturned; /*0x47a645*/
  InBuffer[3] = 17421; /*0x47a656*/
  InBuffer[2] = 2121; /*0x47a65e*/
  if ( !DeviceIoControl(hDevice, 1u, InBuffer, 0x1Cu, InBuffer, 0x1Cu, &BytesReturned, 0) ) /*0x47a666*/
  {
    GetLastError(); /*0x47a678*/
    Debug::Log(); /*0x47a684*/
    return 0; /*0x47a691*/
  }
  return (InBuffer[6] & 1) == 0; /*0x47a699*/
}

// ==== BACKFILL 0x0047AA00  sub_47AA00  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
CDFileClass * E4Recv_47AA00::sub_47AA00(char ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47AA00)
}

// ==== BACKFILL 0x0047AAB0  FileClass::OpenFileBufferIO  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
bool FileClass::OpenFileBufferIO() {
  return false;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0047ADA0  CD::SetCurrentInstance  cls=CD  sig=csp  renamed_refs=0  residual=- ====
int CD::SetCurrentInstance() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x47ADA0.json */
}

// ==== BACKFILL 0x0047AF10  CCFileClass::Reopen  cls=CDFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Reopen(void* a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0047BB60  CellClass::DTOR  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::DTOR() {
}

// ==== BACKFILL 0x0047C550  CellClass::FindInfantry  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::FindInfantry(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0047DD70  CellClass::UpdateAnimations  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::UpdateAnimations() {
}

// ==== BACKFILL 0x0047EBA0  CellClass::FindBuilding  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::FindBuilding(int a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0047EC40  WTFMode::FindObjectByType  cls=WTFMode  sig=csp  renamed_refs=0  residual=- ====
void* WTFMode::FindObjectByType(int a1) {
  unsigned int *v2; // esi

  if ( !byte_A8E9A0 ) /*0x47ec48*/
    return 0; /*0x47ec48*/
  v2 = (unsigned int *)(a1 ? this->q0E8 : this->q0E4);
  if ( !v2 ) /*0x47ec62*/
    return 0; /*0x47ec77*/
  while ( (*(int (**)(unsigned int *))(*v2 + 44))(v2) != 15 ) /*0x47ec6e*/
  {
    v2 = (unsigned int *)v2[12]; /*0x47ec70*/
    if ( !v2 ) /*0x47ec75*/
      return 0; /*0x47ec75*/
  }
  return v2; /*0x47ec79*/
}
