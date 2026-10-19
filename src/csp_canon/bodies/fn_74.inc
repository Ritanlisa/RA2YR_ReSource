// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00740B10  TechnoClass::updateTargeting  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::updateTargeting() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x740b10.json */
}

// ==== BACKFILL 0x00741490  TechnoClass::checkTargetValidity  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::checkTargetValidity() {
    return *((unsigned int *)this + 433); /*0x741496*/
}

// ==== BACKFILL 0x00744640  UnitClass::PowerDrainUpdate  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::PowerDrainUpdate(int a2)
{
    return 0; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00744640.json)
}

// ==== BACKFILL 0x007446E0  UnitClass::HandleTargetDestroyed  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int UnitClass::HandleTargetDestroyed(void* a1, void* aP2)
{
    return 0; (void)a1; (void)aP2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007446E0.json)
}

// ==== BACKFILL 0x007447A0  InfantryClass::ScanTarget_0  cls=InfantryClass  sig=csp  renamed_refs=0  residual=- ====
int InfantryClass_ScanTarget_0(void * a1)
{
  return InfantryClass::ScanTarget((int *)(a1));
}

// ==== BACKFILL 0x00746400  TechnoClass::processParasiteAttachment  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::processParasiteAttachment() {
    return *(unsigned char *)(*((unsigned int *)this + 433) + 3611) == 0; /*0x746415*/
}

// ==== BACKFILL 0x007465B0  TechnoClass::updateParasiteState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::updateParasiteState(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x7465b0.json */
}

// ==== BACKFILL 0x007465F0  TechnoClass::detachParasites  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::detachParasites(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 11 errs): wrong-universe gap2 body; truth func_0x7465f0.json */
}

// ==== BACKFILL 0x00746C90  TechnoClass::checkSpawnState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoClass::checkSpawnState() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x746c90.json */
}

// ==== BACKFILL 0x00746DB0  TechnoClass::HasDeployFlags  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
int TechnoClass::HasDeployFlags() const {
    return *((unsigned char *)this + 1761) || *((unsigned char *)this + 1762); /*0x746dc6*/
}

// ==== BACKFILL 0x00746DE0  C07F5C70::ddtor  cls=UnitClass  sig=csp  renamed_refs=0  residual=- ====
int C07F5C70::ddtor(int a1, unsigned int *a2)
{
    return {}; // TODO stub - G42 return-sync (int->virtual int)
}

// ==== BACKFILL 0x00746E30  TechnoClass::checkIronCurtainState  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
void* TechnoClass::checkIronCurtainState(void* a1) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x746e30.json */
}

// ==== BACKFILL 0x00746EA0  TechnoClass::processIronCurtainExpiry  cls=TechnoClass  sig=csp  renamed_refs=0  residual=- ====
bool TechnoClass::processIronCurtainExpiry(void* aP1) {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x746ea0.json */
}

// ==== BACKFILL 0x00747370  BuildingTypeClass::FindIndex  cls=BuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
int BuildingTypeClass::FindIndex()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747370.json)
}

// ==== BACKFILL 0x007473C0  UnitTypeClass::j_?do_always_noconv_codecvt_base_std__MBE_NXZ_19_0  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19_0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7473C0)
}

// ==== BACKFILL 0x007473E0  InitVisceroidArt  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_7473E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007473E0.json)
}

// ==== BACKFILL 0x00747590  UnitTypeClass::GetDimensions  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int *  UnitTypeClass::GetDimensions(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747590.json)
}

// ==== BACKFILL 0x007475D0  UnitTypeClass::GetDefaultDimensions  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int *  UnitTypeClass::GetDefaultDimensions(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007475D0.json)
}

// ==== BACKFILL 0x00747600  sub_747600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_747600(unsigned int * a1, int a2, unsigned int * a3)
{
  *a1 = *a3; /*0x74760a*/
  a1[1] = a3[1]; /*0x74760f*/
  return a1; /*0x747612*/
}

// ==== BACKFILL 0x00747EB0  UnitTypeClass::ClampToGroundHeight  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * UnitTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747EB0.json)
}

// ==== BACKFILL 0x00747F20  UnitTypeClass::GetGameplayValue  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x747f2b*/

}

// ==== BACKFILL 0x00747F30  UnitTypeClass::GetClassIdentifier  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747F30.json)
}

// ==== BACKFILL 0x00747F70  UnitTypeClass::PowerDrainUpdate  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00747F70.json)
}

// ==== BACKFILL 0x00748010  UnitTypeClass::LoadFromINI2  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::LoadFromINI2(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00748010.json)
}

// ==== BACKFILL 0x007480B0  UnitTypeClass::SaveToINI  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007480B0.json)
}

// ==== BACKFILL 0x00748160  UnitTypeClass::GetObjectSize  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetObjectSize()
{

  return 3704; /*0x748165*/

}

// ==== BACKFILL 0x00748170  UnitTypeClass::GetTypeIdentifier  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetTypeIdentifier()
{

  return 40; /*0x748175*/

}

// ==== BACKFILL 0x00748180  UnitTypeClass::GetAuxField  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int UnitTypeClass::GetAuxField()
{

return (int)this->ArrayIndex; /*0x748186*/

}

// ==== BACKFILL 0x00748190  UnitTypeClass::ddtor  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd {  // G42.35f: def was outside namespace (pre-existing damage)
UnitTypeClass * UnitTypeClass::ddtor(char a2)
{
    return nullptr; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = .omo/ida_cache/func_0x748190.json)
}
} // namespace gamemd

// ==== BACKFILL 0x00748360  System_Cleanup  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_748360()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00748360.json)
}

// ==== BACKFILL 0x00748380  sub_748380  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_748380(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00748380.json)
}

// ==== BACKFILL 0x00749010  nullsub_143  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_143()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x749010)
}

// ==== BACKFILL 0x00749060  HouseClass::InitStatArray  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::InitStatArray(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749060.json)
}

// ==== BACKFILL 0x007490A0  SumArray  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Array_Sum(int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007490A0.json)
}

// ==== BACKFILL 0x007490C0  ??0Iostream_init_QAE_XZ_7  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Iostream_init * E4Recv_7490C0::__0Iostream_init_QAE_XZ_7()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7490C0)
}

// ==== BACKFILL 0x00749100  HouseClass::NetworkConvert  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
int HouseClass::NetworkConvert()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749100.json)
}

// ==== BACKFILL 0x007498D0  ObjectClass::Initialize  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::Initialize() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 57 errs): wrong-universe gap2 body; truth func_0x7498d0.json */
}

// ==== BACKFILL 0x00749B20  VoxelAnimClass::DrawVoxelFrame  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::DrawVoxelFrame(int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00749B20.json)
}

// ==== BACKFILL 0x0074AA10  VoxelAnimClass::SaveLoad_Prefix_0  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74AA10)
}

// ==== BACKFILL 0x0074AAD0  VoxelAnimClass::ddtor  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::ddtor(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AAD0.json)
}

// ==== BACKFILL 0x0074AB10  VoxelAnimClass::StubReturn328  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturn328()
{

  return 328; /*0x74ab15*/

}

// ==== BACKFILL 0x0074AB20  VoxelAnimClass::StubReturn41  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturn41()
{

  return 41; /*0x74ab25*/

}

// ==== BACKFILL 0x0074AB40  VoxelAnimClass::StubReturnFalse  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimClass::StubReturnFalse(int a1)
{

  return 0; /*0x74ab42*/

}

// ==== BACKFILL 0x0074AB50  VoxelAnimClass::DrawVoxel  cls=VoxelAnimClass  sig=csp  renamed_refs=0  residual=- ====
VoxelAnimClass * VoxelAnimClass::DrawVoxel(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074AB50.json)
}

// ==== BACKFILL 0x0074B7D0  VoxelAnimTypeClass::GetClassIdentifier  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074B7D0.json)
}

// ==== BACKFILL 0x0074B810  VoxelAnimTypeClass::SaveLoad_Prefix  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074B810.json)
}

// ==== BACKFILL 0x0074B8D0  VoxelAnimTypeClass::SaveLoad_Prefix_0  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074B8D0.json)
}

// ==== BACKFILL 0x0074B8F0  VoxelAnimTypeClass::GetData  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
long long VoxelAnimTypeClass::GetData(ObjectTypeClass * aP1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074B8F0.json)
}

// ==== BACKFILL 0x0074B9F0  VoxelAnimTypeClass::GetTypeIdentifier  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetTypeIdentifier()
{

  return 42; /*0x74b9f5*/

}

// ==== BACKFILL 0x0074BA00  VoxelAnimTypeClass::GetObjectSize  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::GetObjectSize()
{

  return 776; /*0x74ba05*/

}

// ==== BACKFILL 0x0074BA10  VoxelAnimTypeClass::Stub  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
char VoxelAnimTypeClass::Stub(int a1, int a2)
{

  return 0; /*0x74ba12*/

}

// ==== BACKFILL 0x0074BA20  VoxelAnimTypeClass::StubReturnFalse  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
int VoxelAnimTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x74ba22*/

}

// ==== BACKFILL 0x0074BA30  VoxelAnimTypeClass::ddtor  cls=VoxelAnimTypeClass  sig=csp  renamed_refs=0  residual=- ====
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BA30.json)
}

// ==== BACKFILL 0x0074BBA0  sub_74BBA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * sub_74BBA0(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BBA0.json)
}

// ==== BACKFILL 0x0074BF40  sub_74BF40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_74BF40(unsigned int a2)
{
    (void)a2;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074BF40.json)
}

// ==== BACKFILL 0x0074C9F0  DestroyVeinholeMonster  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=customSound_controller ====
int Gap2Recv_74C9F0::DestroyVeinholeMonster() {

  VeinholeMonsterClass *v1; // ebx
  int v2; // edi
  int v3; // esi
  int v4; // edx
  BuildingClass *v5; // ebp
  int v6; // eax
  int *StartCoords; // esi
  int *PlacementRect; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // eax
  int *v18; // eax
  int VeinholeMonsterClass_field_0x14; // eax
  ObjectClass *v20; // ecx
  void **v21; // esi
  int v22; // eax
  int v23; // eax
  signed int v24; // eax
  int v25; // ecx
  char *i; // eax
  unsigned int *v27; // eax
  int v29; // [esp-Ch] [ebp-88h]
  int v30; // [esp-8h] [ebp-84h]
  int v31; // [esp+10h] [ebp-6Ch]
  int v32; // [esp+14h] [ebp-68h]
  int16_t v33[2]; // [esp+18h] [ebp-64h] BYREF
  int v34; // [esp+1Ch] [ebp-60h]
  int v35; // [esp+20h] [ebp-5Ch]
  int v36; // [esp+24h] [ebp-58h]
  int v37; // [esp+28h] [ebp-54h]
  BuildingClass *v38; // [esp+2Ch] [ebp-50h]
  int Vtable3; // [esp+30h] [ebp-4Ch] BYREF
  unsigned int v40[2]; // [esp+34h] [ebp-48h] BYREF
  Coord2D v41; // [esp+3Ch] [ebp-40h] BYREF
  int v42; // [esp+44h] [ebp-38h] BYREF
  int v43[4]; // [esp+4Ch] [ebp-30h] BYREF
  int v44[4]; // [esp+5Ch] [ebp-20h] BYREF
  Rect v45; // [esp+6Ch] [ebp-10h] BYREF

  v1 = this; /*0x74c9f4*/
  Vtable3 = (int)this; /*0x74c9f9*/
  *(unsigned int *)this->__pad_0 = &vt_VeinholeMonsterClass; /*0x74c9fd*/
  this->VeinholeMonsterClass_field_0x04 = (int)&vt_VeinholeMonsterClass; /*0x74ca03*/
  this->VeinholeMonsterClass_field_0x08 = (int)&vt_VeinholeMonsterClass; /*0x74ca0a*/
  this->VeinholeMonsterClass_field_0x0C = (int)&vt_VeinholeMonsterClass; /*0x74ca11*/
  v31 = -2; /*0x74ca18*/
  do /*0x74cc16*/
  {
    v2 = -2; /*0x74ca20*/
    v35 = -2; /*0x74ca25*/
    do /*0x74cc04*/
    {
      HIWORD(v32) = v2 + HIWORD(v1[5].VeinholeMonsterClass_field_0x1C); /*0x74ca3f*/
      LOWORD(v32) = v31 + LOWORD(v1[5].VeinholeMonsterClass_field_0x1C); /*0x74ca48*/
      *(unsigned int *)v33 = v32; /*0x74ca51*/
      v3 = Cell::PosToIndex((Cell *)v33); /*0x74ca5a*/
      if ( v3 >= 0 && v3 < Object::ComputeAllocationSize() ) /*0x74ca67*/
      {
        *(unsigned char *)(stru_B1D290.customSound_controller[4] + v3) = 0; /*0x74ca6e*/
        *(unsigned char *)(v1[4].VeinholeMonsterClass_field_0x14 + v3) = 0; /*0x74ca78*/
      }
      v5 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v33); /*0x74ca8b*/
      v38 = v5; /*0x74ca8d*/
      v6 = ((unsigned int *)v5)[2]; /*0x74ca91*/
      if ( v6 == 126 || v6 != -1 && (v4 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v6), *(unsigned char *)(v4 + 686)) ) /*0x74caab*/
      {
        BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&((unsigned int *)v5)[0]); /*0x74cac2*/
        v40[1] = DSurface_ViewBounds.field_4; /*0x74cad2*/
        v40[0] = DSurface_ViewBounds.field_0; /*0x74cadd*/
        StartCoords = House::GetStartCoords((House *)v5, v43); /*0x74caed*/
        PlacementRect = BuildingClass::GetPlacementRect(v5, v44); /*0x74caef*/
        if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x74cb04*/
        {
          v9 = *PlacementRect; /*0x74cb90*/
          v11 = PlacementRect[1]; /*0x74cb92*/
          v15 = PlacementRect[2]; /*0x74cb95*/
          v16 = PlacementRect[3]; /*0x74cb98*/
        }
        else
        {
          v34 = PlacementRect[2]; /*0x74cb0f*/
          if ( v34 <= 0 || (v37 = PlacementRect[3], v37 <= 0) ) /*0x74cb1e*/
          {
            v9 = *StartCoords; /*0x74cb83*/
            v11 = StartCoords[1]; /*0x74cb85*/
            v15 = StartCoords[2]; /*0x74cb88*/
            v16 = StartCoords[3]; /*0x74cb8b*/
          }
          else
          {
            v9 = *StartCoords; /*0x74cb20*/
            v10 = *PlacementRect; /*0x74cb22*/
            v11 = StartCoords[1]; /*0x74cb24*/
            v12 = StartCoords[2]; /*0x74cb27*/
            v13 = StartCoords[3]; /*0x74cb2a*/
            if ( v9 > *PlacementRect ) /*0x74cb2f*/
            {
              v12 += v9 - v10; /*0x74cb33*/
              v9 = *PlacementRect; /*0x74cb35*/
            }
            v14 = PlacementRect[1]; /*0x74cb37*/
            v36 = v14; /*0x74cb3c*/
            if ( v11 > v14 ) /*0x74cb40*/
            {
              v13 += v11 - v14; /*0x74cb44*/
              v11 = v14; /*0x74cb46*/
            }
            if ( v9 + v12 < v10 + v34 ) /*0x74cb53*/
              v12 = v10 - v9 + v34 + 1; /*0x74cb5b*/
            if ( v13 + v11 < v36 + v37 ) /*0x74cb6e*/
              v13 = v36 + v37 - v11 + 1; /*0x74cb73*/
            v1 = (VeinholeMonsterClass *)Vtable3; /*0x74cb75*/
            v15 = v12; /*0x74cb79*/
            v5 = v38; /*0x74cb7b*/
            v16 = v13; /*0x74cb7f*/
          }
        }
        *(unsigned int *)v41.__pad_0 = v9; /*0x74cb9b*/
        v30 = v16; /*0x74cba1*/
        v29 = v15; /*0x74cba6*/
        v41.Coord2D_field_0x04 = v11; /*0x74cbb1*/
        v17 = Coord2D::Sub(&v41, &v42, v40); /*0x74cbb5*/
        v18 = Rect::Construct(&v45, v17, v29, v30); /*0x74cbbf*/
        Cell::CreateCrater(*v18, v18[1], v18[2], v18[3], 0); /*0x74cbe5*/
        v2 = v35; /*0x74cbea*/
        ((unsigned int *)v5)[2] = -1; /*0x74cbee*/
        BYTE2(((unsigned int *)v5)[0]) = 0; /*0x74cbf5*/
      }
      v35 = ++v2; /*0x74cc00*/
    }
    while ( v2 <= 2 ); /*0x74cc04*/
    ++v31; /*0x74cc12*/
  }
  while ( v31 <= 2 ); /*0x74cc16*/
  VeinholeMonsterClass_field_0x14 = v1[2].VeinholeMonsterClass_field_0x14; /*0x74cc1c*/
  (v4) = ((v4) & ~0xFF) | ((1) & 0xFF); /*0x74cc21*/
  BYTE1(v1[2].VeinholeMonsterClass_field_0x28) = 1; /*0x74cc25*/
  LOBYTE(v1[2].VeinholeMonsterClass_field_0x1C) = 0; /*0x74cc2b*/
  if ( VeinholeMonsterClass_field_0x14 > 0 ) /*0x74cc2f*/
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)v1, v4); /*0x74cc33*/
  v20 = *(ObjectClass **)v1[4].__pad_0; /*0x74cc38*/
  if ( v20 ) /*0x74cc40*/
  {
    DestroyVeinholeMonster_Destroy(v20); /*0x74cc42*/
    v21 = *(void ***)v1[4].__pad_0; /*0x74cc47*/
    if ( v21 ) /*0x74cc4f*/
    {
      __3_YAXPAX_Z(v21[2]); /*0x74cc55*/
      __3_YAXPAX_Z(v21); /*0x74cc5b*/
    }
    *(unsigned int *)v1[4].__pad_0 = 0; /*0x74cc63*/
  }
  if ( v1[4].VeinholeMonsterClass_field_0x04 ) /*0x74cc69*/
  {
    __3_YAXPAX_Z((void *)v1[4].VeinholeMonsterClass_field_0x04); /*0x74cc74*/
    v1[4].VeinholeMonsterClass_field_0x04 = 0; /*0x74cc7c*/
  }
  if ( v1[4].VeinholeMonsterClass_field_0x14 ) /*0x74cc82*/
  {
    __3_YAXPAX_Z((void *)v1[4].VeinholeMonsterClass_field_0x14); /*0x74cc8d*/
    v1[4].VeinholeMonsterClass_field_0x14 = 0; /*0x74cc95*/
  }
  v1[3].VeinholeMonsterClass_field_0x28 = 0; /*0x74cc9b*/
  Vtable3 = (int)v1; /*0x74ccb0*/
  v22 = (*((int (**)(ObjectClass *, int *))stru_B1D290.AbstractClass + 4))(&stru_B1D290, &Vtable3); /*0x74ccb4*/
  if ( v22 != -1 ) /*0x74ccba*/
    DestroyVeinholeMonster_Destroy_74F6F0(&stru_B1D290, v22); /*0x74ccc2*/
  Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&v1->VeinholeMonsterClass_field_0x04); /*0x74ccd4*/
  v23 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, &Vtable3); /*0x74ccde*/
  if ( v23 ) /*0x74cce5*/
  {
    v24 = (signed int)(v23 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x74cced*/
    if ( v24 != -1 ) /*0x74ccf3*/
    {
      v25 = v24 + 1; /*0x74ccf5*/
      for ( i = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x74ccff*/
            v25 < (int)((char *)&g_BuildingLoadQueue_Array);
            i = (char *)((char *)&g_BuildingLoadQueue_Array) )
      {
        v27 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v25++; /*0x74cd07*/
        *(v27 - 2) = *v27; /*0x74cd0d*/
        *(v27 - 1) = v27[1]; /*0x74cd13*/
      }
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = i - 1; /*0x74cd28*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x74cd2d*/
      *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x74cd3d*/
      ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x74cd41*/
    }
  }
  return ObjectClass::Dtor((ObjectClass *)v1); /*0x74cd4e*/

}

// ==== BACKFILL 0x0074CDB0  Helper_486E30_Helper  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_74CDB0::Helper_486E30_Helper() {

  int v1; // esi

  v1 = ((char *)&stru_B1D290) - 1; /*0x74cdb7*/
  if ( ((char *)&stru_B1D290) - 1 < 0 ) /*0x74cdbe*/
    return 0; /*0x74cde0*/
  while ( !*(unsigned char *)(Cell::PosToIndex((Cell *)this) + *(unsigned int *)(*((unsigned int *)((char *)&stru_B1D290) + v1) + 196)) ) /*0x74cddb*/
  {
    if ( --v1 < 0 ) /*0x74cdde*/
      return 0; /*0x74cdde*/
  }
  return *((unsigned int *)((char *)&stru_B1D290) + v1); /*0x74cde0*/

}

// ==== BACKFILL 0x0074E1C0  ProcessVeinholeMonster  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_74E1C0::ProcessVeinholeMonster() {

  unsigned int *v2; // eax
  int i; // ecx
  int j; // eax
  int16_t v5; // ax
  char *v6; // eax
  char *v7; // edi
  unsigned int *v8; // ebp
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  char v12; // al
  int v13; // eax
  int v14; // eax
  float *v15; // edi
  float v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ebx
  int v21; // ebp
  unsigned int v22; // eax
  int k; // edi
  int v24; // edi
  char *NeighbourContent; // ebp
  unsigned int *v26; // edi
  int v27; // ebx
  char v28; // al
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int *v32; // edi
  unsigned int v33; // ebx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  int v36; // ebp
  int v37; // ebx
  unsigned int v38; // eax
  int v39; // eax
  int v40; // ecx
  signed int v41; // [esp+10h] [ebp-30h]
  int m; // [esp+10h] [ebp-30h]
  int v43; // [esp+14h] [ebp-2Ch]
  unsigned int v44; // [esp+14h] [ebp-2Ch]
  float v45; // [esp+18h] [ebp-28h]
  char *v46; // [esp+18h] [ebp-28h]
  int v47; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+1Ch] [ebp-24h]
  int16_t v49[2]; // [esp+20h] [ebp-20h] BYREF
  Cell *v50; // [esp+24h] [ebp-1Ch]
  VectorClass v51; // [esp+28h] [ebp-18h] BYREF
  int v52; // [esp+38h] [ebp-8h]
  int v53; // [esp+3Ch] [ebp-4h]

  VectorClass::CellConstructor(&v51, 0, 0); /*0x74e1d1*/
  v2 = (unsigned int *)*((unsigned int *)this + 44); /*0x74e1d6*/
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x74e1dc) */
  v52 = 0; /*0x74e1e4*/
  v53 = 5000; /*0x74e1e8*/
  *((unsigned int *)this + 43) = 0; /*0x74e1f0*/
  *((unsigned int *)this + 65) = 0; /*0x74e1f6*/
  for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x74e202*/
    ++i; /*0x74e207*/
  *v2 = 0; /*0x74e212*/
  for ( j = Object::ComputeAllocationSize() - 1; j >= 0; *(unsigned char *)(j + *((unsigned int *)this + 49) + 1) = 0 ) /*0x74e21a*/
    --j; /*0x74e222*/
  v41 = -2; /*0x74e22a*/
  do /*0x74e417*/
  {
    v5 = -2; /*0x74e232*/
    v43 = -2; /*0x74e237*/
    do /*0x74e405*/
    {
      LOWORD(v45) = v5 + *((unsigned short *)this + 124); /*0x74e251*/
      HIWORD(v45) = v41 + *((unsigned short *)this + 125); /*0x74e25a*/
      *(float *)v49 = v45; /*0x74e263*/
      v6 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v49); /*0x74e26d*/
      v7 = v6; /*0x74e272*/
      if ( *((unsigned int *)v6 + 17) == 126 ) /*0x74e278*/
      {
        v8 = v6 + 36; /*0x74e27e*/
        v9 = Cell::PosToIndex((Cell *)(v6 + 36)); /*0x74e28f*/
        (v47) = ((v47) & ~(0xFFFF << 16)) | (((v41 + *((unsigned short *)this + 125)) & 0xFFFF) << 16); /*0x74e2a2*/
        (v47) = ((v47) & ~0xFFFF) | ((v43 + *((unsigned short *)this + 124)) & 0xFFFF); /*0x74e2ab*/
        if ( v52 < v51.Capacity /*0x74e2d9*/
          || (v51.IsAllocated || !v51.Capacity)
          && v53 > 0
          && (*((uint8_t (**)(VectorClass *, int, unsigned int))v51.vtable0 + 2))(
               &v51,
               v53 + v51.Capacity,
               0) )
        {
          v10 = v52++; /*0x74e2e8*/
          *((unsigned int *)v51.Items + v10) = v47; /*0x74e2f3*/
        }
        if ( v9 >= 0 && v9 < Object::ComputeAllocationSize() ) /*0x74e305*/
        {
          *(unsigned char *)(stru_B1D290.customSound_controller[4] + v9) = 1; /*0x74e310*/
          *(unsigned char *)(*((unsigned int *)this + 49) + v9) = 1; /*0x74e31a*/
          v11 = *((unsigned int *)v7 + 80); /*0x74e31e*/
          v12 = v7[286]; /*0x74e324*/
          (v11) |= ((((0x80u)) & 0xFF) << 8); /*0x74e32a*/
          *((unsigned int *)v7 + 80) = v11; /*0x74e32f*/
          if ( (uint8_t)v12 < 0x30u || (uint8_t)v12 > 0x33u ) /*0x74e339*/
          {
            v13 = *((unsigned int *)this + 43); /*0x74e34c*/
            if ( v13 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 220) ) /*0x74e358*/
            {
              *(unsigned int *)(*((unsigned int *)this + 45) + 8 * v13) = *v8; /*0x74e367*/
              *(unsigned int *)(*((unsigned int *)this + 45) + 8 * *((unsigned int *)this + 43) + 4) = 0; /*0x74e376*/
              v14 = *((unsigned int *)this + 43); /*0x74e37e*/
              v15 = (float *)*((unsigned int *)this + 44); /*0x74e38a*/
              LODWORD(v16) = *((unsigned int *)this + 45) + 8 * v14; /*0x74e390*/
              *((unsigned int *)this + 43) = v14 + 1; /*0x74e394*/
              v17 = *(unsigned int *)v15 + 1; /*0x74e39f*/
              v50 = *(Cell **)(LODWORD(v16) + 4); /*0x74e3a2*/
              v18 = *((unsigned int *)v15 + 1); /*0x74e3a6*/
              *(float *)v49 = v16; /*0x74e3a9*/
              v19 = v17 >> 1; /*0x74e3ad*/
              if ( v17 < v18 ) /*0x74e3b1*/
              {
                if ( v17 > 1 ) /*0x74e3b6*/
                {
                  do /*0x74e3d6*/
                  {
                    v20 = *((unsigned int *)v15 + 2); /*0x74e3b8*/
                    v21 = *(unsigned int *)(v20 + 4 * v19); /*0x74e3bb*/
                    if ( *(float *)(v21 + 4) <= (double)*(float *)&v50 ) /*0x74e3ca*/
                      break; /*0x74e3ca*/
                    *(unsigned int *)(v20 + 4 * v17) = v21; /*0x74e3cc*/
                    v17 = v19; /*0x74e3cf*/
                    v19 >>= 1; /*0x74e3d1*/
                  }
                  while ( v17 > 1 ); /*0x74e3d6*/
                  v16 = *(float *)v49; /*0x74e3d8*/
                }
                *(float *)(*((unsigned int *)v15 + 2) + 4 * v17) = v16; /*0x74e3df*/
                v22 = *((unsigned int *)v15 + 3); /*0x74e3e4*/
                ++*(unsigned int *)v15; /*0x74e3ea*/
                if ( LODWORD(v16) > v22 ) /*0x74e3ec*/
                  v15[3] = v16; /*0x74e3ee*/
                if ( LODWORD(v16) < *((unsigned int *)v15 + 4) ) /*0x74e3f4*/
                  v15[4] = v16; /*0x74e3f6*/
              }
            }
          }
          else
          {
            ++*((unsigned int *)this + 65); /*0x74e33b*/
          }
        }
      }
      v5 = ++v43; /*0x74e3fd*/
    }
    while ( v43 <= 2 ); /*0x74e405*/
    ++v41; /*0x74e413*/
  }
  while ( v41 <= 2 ); /*0x74e417*/
  for ( k = v52; v52 > 0; k = v52 ) /*0x74e423*/
  {
    v24 = k - 1; /*0x74e42d*/
    *(float *)&v50 = COERCE_FLOAT(CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v51.Items + 2 * v24)); /*0x74e43c*/
    if ( v24 < v52 && v24 < --v52 ) /*0x74e44f*/
    {
      do /*0x74e463*/
      {
        ++v24; /*0x74e455*/
        *((unsigned int *)v51.Items + v24 - 1) = *((unsigned int *)v51.Items + v24); /*0x74e459*/
      }
      while ( v24 < v52 ); /*0x74e463*/
    }
    for ( m = 0; m < 8; ++m ) /*0x74e465*/
    {
      NeighbourContent = (char *)Cell::GetNeighbourContent(v50, m); /*0x74e47b*/
      v46 = NeighbourContent; /*0x74e47d*/
      v26 = NeighbourContent + 36; /*0x74e481*/
      v27 = Cell::PosToIndex((Cell *)(NeighbourContent + 36)); /*0x74e48b*/
      v48 = v27; /*0x74e493*/
      if ( *((unsigned int *)NeighbourContent + 17) == 126 && (BYTE1(*((unsigned int *)NeighbourContent + 80)) & 0x80u) == 0 ) /*0x74e4a6*/
      {
        v28 = NeighbourContent[286]; /*0x74e4ac*/
        if ( ((uint8_t)v28 < 0x30u || (uint8_t)v28 >= 0x35u) /*0x74e4bc*/
          && (uint8_t)BuildingClass::CheckAdjacentCells((int)NeighbourContent) )
        {
          v30 = *((unsigned int *)this + 43); /*0x74e51e*/
          if ( v30 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 220) ) /*0x74e52a*/
          {
            *(unsigned int *)(*((unsigned int *)this + 45) + 8 * v30) = *v26; /*0x74e538*/
            *(unsigned int *)(*((unsigned int *)this + 45) + 8 * *((unsigned int *)this + 43) + 4) = 0; /*0x74e547*/
            v31 = *((unsigned int *)this + 43); /*0x74e54f*/
            v32 = (unsigned int *)*((unsigned int *)this + 44); /*0x74e55b*/
            v33 = *((unsigned int *)this + 45) + 8 * v31; /*0x74e561*/
            *((unsigned int *)this + 43) = v31 + 1; /*0x74e565*/
            v34 = *v32 + 1; /*0x74e570*/
            *(float *)v49 = *(float *)(v33 + 4); /*0x74e573*/
            v44 = v33; /*0x74e57a*/
            v35 = v34 >> 1; /*0x74e57e*/
            if ( v34 < v32[1] ) /*0x74e582*/
            {
              if ( v34 > 1 ) /*0x74e587*/
              {
                do /*0x74e5a9*/
                {
                  v36 = v32[2]; /*0x74e589*/
                  v37 = *(unsigned int *)(v36 + 4 * v35); /*0x74e58c*/
                  if ( *(float *)(v37 + 4) <= (double)*(float *)v49 ) /*0x74e59c*/
                    break; /*0x74e59c*/
                  *(unsigned int *)(v36 + 4 * v34) = v37; /*0x74e59e*/
                  v34 = v35; /*0x74e5a2*/
                  v35 >>= 1; /*0x74e5a4*/
                }
                while ( v34 > 1 ); /*0x74e5a9*/
                NeighbourContent = v46; /*0x74e5ab*/
                v33 = v44; /*0x74e5af*/
              }
              *(unsigned int *)(v32[2] + 4 * v34) = v33; /*0x74e5b6*/
              v38 = v32[3]; /*0x74e5bb*/
              ++*v32; /*0x74e5c1*/
              if ( v33 > v38 ) /*0x74e5c3*/
                v32[3] = v33; /*0x74e5c5*/
              if ( v33 < v32[4] ) /*0x74e5cb*/
                v32[4] = v33; /*0x74e5cd*/
            }
            if ( (uint8_t)NeighbourContent[286] >= 0x30u /*0x74e606*/
              && (v52 < v51.Capacity
               || (v51.IsAllocated || !v51.Capacity)
               && v53 > 0
               && (*((uint8_t (**)(VectorClass *, int, unsigned int))v51.vtable0 + 2))(
                    &v51,
                    v53 + v51.Capacity,
                    0)) )
            {
              v39 = v52++; /*0x74e615*/
              *((unsigned int *)v51.Items + v39) = *((unsigned int *)NeighbourContent + 9); /*0x74e61f*/
            }
            v27 = v48; /*0x74e622*/
          }
        }
        else
        {
          if ( v52 < v51.Capacity /*0x74e4f2*/
            || (v51.IsAllocated || !v51.Capacity)
            && v53 > 0
            && (*((uint8_t (**)(VectorClass *, int, unsigned int))v51.vtable0 + 2))(
                 &v51,
                 v53 + v51.Capacity,
                 0) )
          {
            v29 = v52++; /*0x74e501*/
            *((unsigned int *)v51.Items + v29) = *v26; /*0x74e50a*/
          }
          ++*((unsigned int *)this + 65); /*0x74e50d*/
        }
        v40 = *((unsigned int *)NeighbourContent + 80); /*0x74e626*/
        (v40) |= ((((0x80u)) & 0xFF) << 8); /*0x74e62c*/
        *((unsigned int *)NeighbourContent + 80) = v40; /*0x74e631*/
        if ( v27 >= 0 && v27 < Object::ComputeAllocationSize() ) /*0x74e640*/
        {
          *(unsigned char *)(stru_B1D290.customSound_controller[4] + v27) = 1; /*0x74e647*/
          *(unsigned char *)(*((unsigned int *)this + 49) + v27) = 1; /*0x74e651*/
        }
        ++*((unsigned int *)this + 65); /*0x74e655*/
      }
    }
  }
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x74e682) */
  if ( v51.Items ) /*0x74e68b*/
  {
    if ( v51.IsAllocated ) /*0x74e693*/
      __3_YAXPAX_Z(v51.Items); /*0x74e696*/
  }

}

// ==== BACKFILL 0x0074E6B0  RulesClass::Reset  cls=RulesClass  sig=csp  renamed_refs=0  residual=- ====
int RulesClass::Reset() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 23 errs): wrong-universe gap2 body; truth func_0x74E6B0.json */
}

// ==== BACKFILL 0x0074E8A0  System_Init_74E8A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_74E8A0::System_Init_74E8A0() {

  unsigned int *v2; // eax
  int i; // ecx
  void **v4; // edi

  v2 = (unsigned int *)*((unsigned int *)this + 44); /*0x74e8a6*/
  if ( v2 ) /*0x74e8ae*/
  {
    for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x74e8b6*/
      ++i; /*0x74e8bb*/
    *v2 = 0; /*0x74e8c7*/
    v4 = (void **)*((unsigned int *)this + 44); /*0x74e8c9*/
    if ( v4 ) /*0x74e8d1*/
    {
      __3_YAXPAX_Z(v4[2]); /*0x74e8d7*/
      __3_YAXPAX_Z(v4); /*0x74e8dd*/
    }
    *((unsigned int *)this + 44) = 0; /*0x74e8e5*/
  }
  if ( *((unsigned int *)this + 45) ) /*0x74e8ec*/
  {
    __3_YAXPAX_Z(*((void **)this + 45)); /*0x74e8f7*/
    *((unsigned int *)this + 45) = 0; /*0x74e8ff*/
  }
  if ( *((unsigned int *)this + 49) ) /*0x74e905*/
  {
    __3_YAXPAX_Z(*((void **)this + 49)); /*0x74e910*/
    *((unsigned int *)this + 49) = 0; /*0x74e918*/
  }
  *((unsigned int *)this + 43) = 0; /*0x74e91e*/

}

// ==== BACKFILL 0x0074EEE0  VeinholeMonsterClass::Update  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::Update(TechnoTypeClass * aP0, int * a1, int aP2, void *a4)
{

  return AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0->__pad_0), (gamemd::ObjectTypeClass *)a1, (gamemd::ObjectTypeClass *)aP2); /*0x74eef4*/

}

// ==== BACKFILL 0x0074EF00  VeinholeMonsterClass::CheckStatus  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::CheckStatus()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4084); /*0x74ef0b*/

}

// ==== BACKFILL 0x0074F2D0  VeinholeMonsterClass::ddtor  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x74f2d6*/
    return -2147467261; /*0x74f2d8*/
  *a2 = 1368576106; /*0x74f2e6*/
  a2[1] = 299025970; /*0x74f2ee*/
  a2[2] = 1610615737; /*0x74f2f7*/
  a2[3] = -318126072; /*0x74f300*/
  return 0; /*0x74f2dd*/

}

// ==== BACKFILL 0x0074F310  VeinholeMonsterClass::StubReturn63  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::StubReturn63()
{

  return 63; /*0x74f315*/

}

// ==== BACKFILL 0x0074F320  VeinholeMonsterClass::StubReturn264  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
int VeinholeMonsterClass::StubReturn264()
{

  return 264; /*0x74f325*/

}

// ==== BACKFILL 0x0074F330  AbstractClass::checkBuildingPlacement  cls=AbstractClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractClass::checkBuildingPlacement()
{

  return -1; /*0x74f333*/

}

// ==== BACKFILL 0x0074F340  VeinholeMonsterClass::SpreadTiberium  cls=VeinholeMonsterClass  sig=csp  renamed_refs=0  residual=- ====
VeinholeMonsterClass * VeinholeMonsterClass::SpreadTiberium(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74F340)
}

// ==== BACKFILL 0x0074F360  IRTTITypeInfo::ClearBuffer  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
void IRTTITypeInfo::ClearBuffer() {
}

// ==== BACKFILL 0x0074F390  IRTTITypeInfo::PointerToIndex  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
int IRTTITypeInfo::PointerToIndex(int a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x74f390.json */
}

// ==== BACKFILL 0x0074F540  IRTTITypeInfo::SetCapacity  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
int IRTTITypeInfo::SetCapacity(int a1, void* a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x74f540.json */
}

// ==== BACKFILL 0x0074F5F0  IRTTITypeInfo::FindItem  cls=IRTTITypeInfo  sig=csp  renamed_refs=0  residual=- ====
int IRTTITypeInfo::FindItem(void* a1) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 7 errs): wrong-universe gap2 body; truth func_0x74f5f0.json */
}

// ==== BACKFILL 0x0074F620  DestroyVeinholeMonster_Destroy  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_74F620::sub_74F620()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74F620)
}

// ==== BACKFILL 0x0074F63A  ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ_0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_74F63A::__Release__NonReentrantLock_details_Concurrency__QAEXXZ_0()
{

  *(unsigned int *)this = 0; /*0x74f63a*/

}

// ==== BACKFILL 0x0074F6F0  DestroyVeinholeMonster_Destroy_74F6F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_74F6F0::DestroyVeinholeMonster_Destroy_74F6F0(DynamicVector * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74F6F0)
}

// ==== BACKFILL 0x0074F730  sub_74F730  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_74F730()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074F730.json)
}

// ==== BACKFILL 0x0074FD20  Network::GetMaxPacketSize  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int HashTable_flat::GetMaxPacketSize()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0074FD20.json)
}

// ==== BACKFILL 0x0074FEF0  INIEntry::LookupByName  cls=INIEntry  sig=csp  renamed_refs=0  residual=- ====
int INIEntry::LookupByName() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x74FEF0.json */
}

// ==== BACKFILL 0x0074FF40  nullsub_69  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_69()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74FF40)
}

// ==== BACKFILL 0x0074FF90  VeterancyStruct::IsVeteran  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
BOOL VeterancyStruct::IsVeteran()
{

  return *(float *)this >= 1.0 && *(float *)this < 2.0; /*0x74ffb3*/

}

// ==== BACKFILL 0x0074FFC0  Crate::IsRookie  cls=Crate  sig=csp  renamed_refs=0  residual=- ====
bool VeterancyStruct::IsRookie()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x74ffc0)
}
