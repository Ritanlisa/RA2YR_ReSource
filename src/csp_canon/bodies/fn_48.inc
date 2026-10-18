// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00480A30  CellClass::GetCoords  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::GetCoords(void* a1) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00481870  CellClass::SetThreatBounds  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::SetThreatBounds(int aP1, int a3) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 10 errs): wrong-universe gap2 body; truth func_0x481870.json */
}

// ==== BACKFILL 0x004818E0  ObjectClass::UpdateTiberiumGrowth  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::UpdateTiberiumGrowth(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4818E0.json */
}

// ==== BACKFILL 0x00483410  HouseClass::MarkCellBuildable  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::MarkCellBuildable(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483410.json)
}

// ==== BACKFILL 0x00483460  HouseClass::checkAutoProduction  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::checkAutoProduction()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483460.json)
}

// ==== BACKFILL 0x00483480  CellClass::DamageAllObjects  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::DamageAllObjects() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x483480.json */
}

// ==== BACKFILL 0x00483610  ObjectClass::processPointerInvalid  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::processPointerInvalid()
{

  return (*((unsigned int *)this + 80) >> 8) & 1; /*0x48361c*/

}

// ==== BACKFILL 0x00483620  BuildingClass::IsTiberiumCollectorEligible  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsTiberiumCollectorEligible()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483620.json)
}
} // namespace gamemd

// ==== BACKFILL 0x00483710  E4Recv_483710::sub_483710  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_483710()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00483710.json)
}

// ==== BACKFILL 0x00483780  CellClass::SpawnTiberiumTree  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::SpawnTiberiumTree(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00483C10  CellClass::SaveLoad_Prefix_0  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::SaveLoad_Prefix_0() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x483C10.json */
}

// ==== BACKFILL 0x00484A80  sub_484A80  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_484A80(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00484A80.json)
}

// ==== BACKFILL 0x00484AB0  CellClass::IsTunnelEntrance  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::IsTunnelEntrance()
{
  int16_t v1; // ax

  v1 = IDA_HIWORD(((unsigned int *)this)[0]); /*0x484ab0*/
  return v1 >= 0 && v1 < ((unsigned int *)&FootClass_Array)[0] && ((unsigned int *)this)[3] == 10; /*0x484ad7*/
}

// ==== BACKFILL 0x00484F10  globalHelper_084F10  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}

// ==== BACKFILL 0x00484F20  InfantryClass::GetType  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass::GetType()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00484F20.json)
}

// ==== BACKFILL 0x00484F50  sub_484F50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_484F50()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00484F50.json)
}

// ==== BACKFILL 0x00485200  CellClass::ddtor  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ddtor() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x485200.json */
}

// ==== BACKFILL 0x00485240  ObjectClass::SetMember09  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* ObjectClass::SetMember09(void* a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x485240.json */
}

// ==== BACKFILL 0x00485250  ObjectClass::SetTriggerTarget  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::SetTriggerTarget(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x485250.json */
}

// ==== BACKFILL 0x00485460  BuildingClass::CheckAdjacentCells  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::CheckAdjacentCells()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00485460.json)
}

// ==== BACKFILL 0x004863A0  E4Recv_4863A0::sub_4863A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_4863A0()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004863A0.json)
}

// ==== BACKFILL 0x004865B0  CellClass::IsTerrainType  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::IsTerrainType() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4865B0.json */
}

// ==== BACKFILL 0x00486650  CellClass::InMapDataRange  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::InMapDataRange() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x486650.json */
}

// ==== BACKFILL 0x00486670  CellClass::InBounds  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::InBounds() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x486670.json */
}

// ==== BACKFILL 0x004866D0  sub_4866D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_4866D0()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004866D0.json)
}

// ==== BACKFILL 0x004866F0  sub_4866F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
bool sub_4866F0()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004866F0.json)
}

// ==== BACKFILL 0x004867E0  CellClass::GetCellType  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetCellType() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x4867E0.json */
}

// ==== BACKFILL 0x00486840  CellClass::GetOccupier  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetOccupier() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x486840.json */
}

// ==== BACKFILL 0x00486890  CellClass::CheckProperty  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CheckProperty() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x486890.json */
}

// ==== BACKFILL 0x00486900  CellClass::IsActiveOrNext  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::IsActiveOrNext() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x486900.json */
}

// ==== BACKFILL 0x00486A70  CellClass::CreateFoggedObjects  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CreateFoggedObjects() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 12 errs): wrong-universe gap2 body; truth func_0x486A70.json */
}

// ==== BACKFILL 0x00486BF0  CellClass::UpdateZone  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::UpdateZone() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x486BF0.json */
}

// ==== BACKFILL 0x00486C50  CellClass::ClearCellContents  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::ClearCellContents() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 5 errs): wrong-universe gap2 body; truth func_0x486C50.json */
}

// ==== BACKFILL 0x00486D90  sub_486D90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_486D90(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00486D90.json)
}

// ==== BACKFILL 0x00486E30  Helper_486E30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_486E30::Helper_486E30() {

  int16_t *p_occupant; // edi
  RandomMap *v3; // eax
  CellClass *v5; // eax

  p_occupant = (int16_t *)&this->occupant; /*0x486e34*/
  v3 = (RandomMap *)Helper_486E30_Helper((ObjectClass *)&this->occupant); /*0x486e39*/
  if ( v3 ) /*0x486e40*/
  {
    RandomMap::RemoveMatching(v3, (int)this); /*0x486e45*/
  }
  else
  {
    v5 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_occupant); /*0x486e55*/
    CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
  }
  return 0; /*0x486e4a*/

}

// ==== BACKFILL 0x004870D0  Cell::IsPassableOffset  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
BOOL Cell::IsPassableOffset(int aP1)
{

  return *(unsigned short *)&this->__pad_70[2 * aP1 + 12] > 0; /*0x4870de*/

}

// ==== BACKFILL 0x004870F0  HouseClass::HasType  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
bool HouseClass::HasType()
{
     return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004870F0.json)
}

// ==== BACKFILL 0x00487110  BuildingClass::checkOccupant  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void* BuildingClass::checkOccupant(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487110.json)
}

// ==== BACKFILL 0x00487130  BuildingClass::updateOccupiedState  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void* BuildingClass::updateOccupiedState(int a1)
{
    (void)a1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487130.json)
}

// ==== BACKFILL 0x00487150  FootClass::checkTerrainSpeed  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::checkTerrainSpeed(int a2) {
    ++*(unsigned short *)((char *)this + 124 + 2 * a2); /*0x487154 真值 inc word [this+0x7C+a2*2]*/
    return a2; /*0x487159*/
}

// ==== BACKFILL 0x00487160  FootClass::updateLocomotion  cls=FootClass  sig=csp  renamed_refs=0  residual=- ====
int FootClass::updateLocomotion(int a2) {
    --*(unsigned short *)((char *)this + 124 + 2 * a2); /*0x487164 真值 dec word [this+0x7C+a2*2]*/
    return a2; /*0x487169*/
}

// ==== BACKFILL 0x00487170  BuildingClass::processGarrison  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::processGarrison(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487170.json)
}

// ==== BACKFILL 0x00487180  BuildingClass::evaulateDefense  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingClass::evaulateDefense(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487180.json)
}

// ==== BACKFILL 0x00487190  Crate::FindPlacement  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
int Crate::FindPlacement(int a1, int a2) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00487950  CellClass::QuickPassable  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::QuickPassable() {
    int v1; // esi
    int v2; // edi
    int inited; // eax
    unsigned int v5[2]; // [esp+8h] [ebp-14h] BYREF
    unsigned int v6[3]; // [esp+10h] [ebp-Ch] BYREF

    v1 = ((int16_t)this->smudgeTypeIndex << 8) + 128; /*0x48796f*/
    v2 = ((int16_t)IDA_HIWORD(this->smudgeTypeIndex) << 8) + 128; /*0x487971*/
    v5[0] = 128; /*0x487973*/
    v5[1] = 128; /*0x487977*/
    inited = (int)((Isometric_shadow_c *)(void *)this)->InitTables(v5); /*0x487980 G42.34 T11: shadow carrier (misc_ext tree Isometric is 0-arg)*/
    v6[0] = v1; /*0x487989*/
    v6[1] = v2; /*0x487993*/
    v6[2] = inited; /*0x487997*/
    return Cell::IsPassable((unsigned int *)((IUnknown *)(v6))); /*0x4879a0 static 1-arg (Cell_e4.hpp:186)*/
}

// ==== BACKFILL 0x004879B0  sub_4879B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char sub_4879B0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004879B0.json)
}

// ==== BACKFILL 0x00487C10  BuildingClass::CheckC4Active  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckC4Active()
{
     return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487C10.json)
}
} // namespace gamemd

// ==== BACKFILL 0x00487C70  TerrainClass::SetFieldF8  cls=TerrainClass  sig=csp  renamed_refs=0  residual=- ====
int TerrainClass::SetFieldF8(int a1) {
  *((unsigned int *)this + 62) = a1; /*0x487c74*/
  return a1; /*0x487c7a*/
}

// ==== BACKFILL 0x00487C80  ?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00487C80.json)
}

// ==== BACKFILL 0x00487CE0  CellClass::RadLevel_Increase  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::RadLevel_Increase(double a2) {

  *((unsigned int *)this + 30) = a2 + *((unsigned int *)this + 30); /*0x487cea*/

}

// ==== BACKFILL 0x00487D00  CellClass::RadLevel_Decrease  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void CellClass::RadLevel_Decrease(double a2) {

  double v2; // st7

  v2 = *(double *)((char *)this + 240) - a2; /*0x487d06*/
  *(double *)((char *)this + 240) = v2; /*0x487d0a*/
  if ( v2 >= 0.0 ) /*0x487d1d*/
  {
    *(double *)((char *)this + 240) = v2; /*0x487d38*/
  }
  else
  {
    *((unsigned int *)this + 60) = 0; /*0x487d1f*/
    *((unsigned int *)this + 61) = 0; /*0x487d29*/
  }

}

// ==== BACKFILL 0x00487D70  CellClass::AttachObject  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::AttachObject(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x487D70.json */
}

// ==== BACKFILL 0x00487E50  AbstractClass::compareType  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::compareType(int a1)
{

  return 11; /*0x487e55*/

}

// ==== BACKFILL 0x00487E60  CellClass::StubReturn11  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::StubReturn11()
{

  return 11; /*0x487e65*/

}

// ==== BACKFILL 0x00487E70  CellClass::StubReturn328  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::StubReturn328()
{

  return 328; /*0x487e75*/

}

// ==== BACKFILL 0x00487E80  CellClass::CopyTo  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CopyTo() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x487E80.json */
}

// ==== BACKFILL 0x00487EA0  NeighborCoord  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x487EA0)
}

// ==== BACKFILL 0x00488030  Buffer::Constructor_VectorClass_ObjectClass___  cls=_DynamicVectorClass_PAVObjectClass  sig=csp  renamed_refs=0  residual=- ====
DynamicVector * Buffer::Constructor_VectorClass_ObjectClass___(char a2, int a3, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x488030)
}

// ==== BACKFILL 0x00488080  CellClass::clearOccupationFlags  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::clearOccupationFlags(int a2, int a3) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x488080.json */
}

// ==== BACKFILL 0x00488210  sub_488210  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_488210(unsigned int a2, unsigned int * a3, int a4)
{
    (void)a2; (void)a3; (void)a4; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488210.json)
}

// ==== BACKFILL 0x00488280  sub_488280  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
CheckListClass * CheckListClass::sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
    (void)aP1; (void)a3; (void)a4; (void)aP4; (void)a6; (void)aP6; (void)aP7; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488280.json)
}

// ==== BACKFILL 0x004884A0  CheckListClass::GetItem  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::GetItem(int a1, void* a2, int a3) {
  return 0;  /* G42.33b2 restub: Array::GetClamped arity + wrong-universe members */
}

// ==== BACKFILL 0x004886A0  ObjectClass::GetStateFlag  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
char ObjectClass::GetStateFlag()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4886A0)
}

// ==== BACKFILL 0x004886C0  CheckListClass::SelectItem  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::SelectItem(int a1) {
  return 0;  /* G42.33b2 restub: ListClass::RemoveItem arity mismatch (thunk) */
}

// ==== BACKFILL 0x004886D0  CheckListClass::SetFocus  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
int CheckListClass::SetFocus(int a1) {
// 0x557f40
  return ((ColorListClass*)(ListClass *)this)->Clear(a1); /*0x4886da*/
}

// ==== BACKFILL 0x004886E0  CheckListClass::QueryInterface  cls=CheckListClass  sig=csp  renamed_refs=0  residual=- ====
void* CheckListClass::QueryInterface(int a2) {
  return nullptr;  /* G42.33b2 restub: Array/List arity + __pad_0 ptr_0 store */
}

// ==== BACKFILL 0x00488760  sub_488760  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
ColorListClass * ColorListClass::sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
    (void)aP1; (void)a3; (void)a4; (void)aP4; (void)a6; (void)aP6; (void)aP7; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00488760.json)
}

// ==== BACKFILL 0x004887F0  sub_4887F0  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4887F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004887F0.json)
}

// ==== BACKFILL 0x00488EE0  ColorListClass::GetColor  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
int ColorListClass::GetColor(int a2)
{

  return (*(int (**)(ColorListClass *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 204))(this, a2, 0); /*0x488eef*/

}

// ==== BACKFILL 0x00488F00  ColorListClass::QueryInterface  cls=ColorListClass  sig=csp  renamed_refs=0  residual=- ====
ColorListClass * ColorListClass::QueryInterface(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x488F00)
}

// ==== BACKFILL 0x00489270  CellChainReact  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void CellChainReact()
{
  ; /*0x489270*/
}

// ==== BACKFILL 0x0048A4F0  GetWarheadVersusMultiplier  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int GetWarheadVersusMultiplier(int aP0, int aP1, int aP2, BulletClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048A4F0.json)
}

// ==== BACKFILL 0x0048A8D0  Math_ComputeFacingAngle  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048A8D0.json)
}

// ==== BACKFILL 0x0048ABC0  globalHelper_08ABC0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048ABC0.json)
}

// ==== BACKFILL 0x0048ACE0  Return::HRESULT_Fail  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Return::HRESULT_Fail(BulletClass * aP0, int a2, int a3)
{

  return -15; /*0x48ace5*/

}

// ==== BACKFILL 0x0048B070  E4Recv_48B070::sub_48B070  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_48B070(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048B070.json)
}

// ==== BACKFILL 0x0048B1F0  sub_48B1F0  cls=CommBufferClass  sig=csp  renamed_refs=0  residual=- ====
void CampaignClass::sub_48B1F0()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048B1F0.json)
}

// ==== BACKFILL 0x0048BA80  CellClass::GetBridgeIndex  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetBridgeIndex()
{

  return (int)this->rubble; /*0x48ba83*/

}

// ==== BACKFILL 0x0048BAA0  Rect::SetRedraw  cls=Rect  sig=csp  renamed_refs=0  residual=u32_14,u32_18,u32_1C ====
int Rect::SetRedraw(int a1) {
  int result; // eax

  result = 0; /*0x48baa4*/
  if ( a1 ) /*0x48baa8*/
  {
    this->u32_14 = 0; /*0x48baaa*/
    this->u32_18 = 0; /*0x48baad*/
    this->u32_1C = 0; /*0x48bab0*/
  }
  else
  {
    result = (int)((unsigned int *)(this->u32_1C)); /*0x48bab9*/
    this->u32_18 = (unsigned int *)(1); /*0x48babc*/
    this->u32_14 = (unsigned int *)(result); /*0x48bac3*/
  }
  this->Width = result; /*0x48bab3*/
  return result; /*0x48bab6*/
}

// ==== BACKFILL 0x0048BB00  sub_48BB00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_48BB00(void * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048BB00.json)
}

// ==== BACKFILL 0x0048C590  ConnectionClass::StubReturnFalse  cls=ConnectionClass  sig=csp  renamed_refs=0  residual=- ====
int ConnectionClass::StubReturnFalse()
{

  return 0; /*0x48c592*/

}

// ==== BACKFILL 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::FindTerrainTypeIndex() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x48DBE0.json */
}

// ==== BACKFILL 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::UnselectAll_ClearLimboLaunchers()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048DC90.json)
}

// ==== BACKFILL 0x0048DE70  INIClass::readSection  cls=INIClass  sig=csp  renamed_refs=0  residual=- ====
int INIClass::readSection() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x48DE70.json */
}

// ==== BACKFILL 0x0048DEB0  COMStub_48DEB0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::COMStub_48DEB0()
{

  int v1; // eax

  v1 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)this); /*0x48deb3*/
  if ( v1 == -1 ) /*0x48debd*/
    return 0; /*0x48dec8*/
  else
    return 1 << v1; /*0x48dec5*/

}

// ==== BACKFILL 0x0048DED0  nullsub_51  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_51()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48DED0)
}

// ==== BACKFILL 0x0048DF30  LookupNameIndex  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_48DF30::LookupNameIndex() {

  int v2; // esi

  if ( !this ) /*0x48df36*/
    return -1; /*0x48df36*/
  if ( !_strcmpi(g_Str__none_, (char *)this) ) /*0x48df3e*/
    return -1; /*0x48df3e*/
  v2 = 0; /*0x48df4f*/
  if ( g_MissionQueueFrame.localVariables[583] <= 0 ) /*0x48df53*/
    return -1; /*0x48df75*/
  while ( _strcmpi((char *)this, *(char **)(g_MissionQueueFrame.localVariables[580] + 4 * v2)) ) /*0x48df69*/
  {
    if ( ++v2 >= g_MissionQueueFrame.localVariables[583] ) /*0x48df73*/
      return -1; /*0x48df73*/
  }
  return v2; /*0x48df75*/

}

// ==== BACKFILL 0x0048DF80  OverlayTypeClass::LookupByName  cls=OverlayTypeClass  sig=csp  renamed_refs=0  residual=- ====
int OverlayTypeClass::LookupByName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048DF80.json)
}

// ==== BACKFILL 0x0048DFD0  sub_48DFD0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48DFD0(unsigned int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48DFD0)
}

// ==== BACKFILL 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  cls=ObjectTypeClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectTypeClass::loadTypeMember_48DFF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0048DFF0.json)
}

// ==== BACKFILL 0x0048E030  sub_48E030  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48E030(unsigned int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48E030)
}

// ==== BACKFILL 0x0048E090  globalHelper_08E090  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * sub_48E090(unsigned int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48E090)
}

// ==== BACKFILL 0x0048E650  CheckListClass::StubReturnFalse  cls=GadgetClass  sig=csp  renamed_refs=0  residual=- ====
void CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{

  ; /*0x48e650*/

}
