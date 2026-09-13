// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x48ACF0
double RulesClass::GetFiringDistance()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double RulesClass_GetFiringDistance()
{
  return (double)*((int *)MEMORY[0x8871E0] + 1454) * 0.5; /*0x48ad01*/
}
}

// 0x538B30
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_538B30(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x538b3b*/
  *(this + 2) = a2; /*0x538b3e*/
  *((_BYTE *)this + 12) = 1; /*0x538b41*/
  *((_BYTE *)this + 13) = 0; /*0x538b45*/
  *this = &vt_VectorClass_CCINIClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      *(this + 1) = a3; /*0x538b58*/
      return this; /*0x538b5e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x538b6d*/
    *((_BYTE *)this + 13) = 1; /*0x538b70*/
  }
  return this; /*0x538b5d*/
}
}

// 0x6614F0
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::readGeneralSection(void *this, TechnoTypeClass *aP1)
{
  return (*(int (__stdcall **)(TechnoTypeClass *, void *, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))(aP1, this, 3, 0); /*0x6614ff*/
}
}

// 0x661510
int RulesClass::readCombatDamage(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_661510(void *this, int a2)
{
  return (*(int (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}
}

// 0x665650
int RulesClass::RulesClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall RulesClass::Constructor(RulesClass *this)
// {
//   int *BarrelDebris; // ebp
//   char *v3; // ecx
//   char *v4; // ebp
//   int v5; // edx
//   int v6; // eax
//   char *v7; // edi
//
//   this->DetailMinFrameRateNormal = 15; /*0x665665*/
//   this->DetailMinFrameRateMovie = 20; /*0x66566b*/
//   this->DetailBufferZoneWidth = 5; /*0x665672*/
//   this->AmmoCrateDamage = 100; /*0x665675*/
//   this->LargeVisceroid = 0; /*0x66567c*/
//   this->SmallVisceroid = 0; /*0x66567f*/
//   this->AttackingAircraftSightRange = 5; /*0x665682*/
//   this->TunnelSpeed = 0x3FF0000000000000LL; /*0x665685*/
//   this->TiberiumHeal = 0x3F91111111111111LL; /*0x66568f*/
//   this->SelfHealInfantryFrames = 1000; /*0x6656a7*/
//   this->SelfHealInfantryAmount = 1; /*0x6656aa*/
//   this->SelfHealUnitFrames = 1000; /*0x6656ad*/
//   this->SelfHealUnitAmount = 1; /*0x6656b0*/
//   this->FreeMCV = 0; /*0x6656b3*/
//   this->BerzerkAllowed = 0; /*0x6656b6*/
//   this->PoseDir = 0; /*0x6656b9*/
//   this->DeployDir = 0; /*0x6656bd*/
//   BarrelDebris = this->RadarEventCol... [49991 chars total]
// end truncated pseudocode
}

// 0x667A30
int RulesClass::DTOR()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::DTOR(RulesClass *this)
{
  int *v2; // ecx
  void *v3; // eax
  void *HarvesterTooFarDistance; // eax
  void *SovietDisguise; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *ChronoDelay; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *ComputerBaseDefenseResponse; // eax
  void *GDIWallDefense_high; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *CameraRange; // eax
  void *StopSound; // eax
  void *v31; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *PrismSupportHeight; // eax
  void *IonCannonDamage; // eax
  void *v37; // eax
  void *WobblesPerSecond_high; // eax
  void *Climb; // eax
  void *PrerequisiteProcAlternate; // eax
  void *WarpIn; // eax
  void *DrainAnimationType; // eax
  void *DominatorSecondAnim; // eax
  void *GUIOpenSound; // eax
  void *CreateUnitSound; // eax
  void *v46; // eax
  void *v47; // eax
  int result; // eax

  v2 = &this->?[2]; /*0x667a3b*/
  *v2 = (int)&vt_VectorClass_int; /*0x667a41*/
  VectorClass::Destroy((int)v2); /*0x667a43*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a4e*/
  VectorClass::Destroy((int)&this->?); /*0x667a50*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667a5b*/
  VectorClass::Destroy((int)this->?); /*0x667a5d*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a68*/
  VectorClass::Destroy((int)&this->?); /*0x667a6a*/
  this->? = (int)&vt_VectorClass_int; /*0x667a75*/
  VectorClass::Destroy((int)&this->?); /*0x667a77*/
  *(_DWORD *)&this->? = &vt_VectorClass_int; /*0x667a82*/
  VectorClass::Destroy((int)&this->?); /*0x667a84*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667a8f*/
  VectorClass::Destroy((int)&this->?); /*0x667a91*/
  this->? = (int)&vt_VectorClass_int; /*0x667a9c*/
  VectorClass::Destroy((int)&this->?); /*0x667a9e*/
  this->? = (int)&vt_VectorClass_int; /*0x667aa9*/
  VectorClass::Destroy((int)&this->?); /*0x667aab*/
  this->? = (int)&vt_VectorClass_int; /*0x667ab6*/
  VectorClass::Destroy((int)&this->?); /*0x667ab8*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667ac3*/
  VectorClass::Destroy((int)&this->?); /*0x667ac5*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667ad0*/
  VectorClass::Destroy((int)this->?); /*0x667ad2*/
  this->? = (int)&vt_VectorClass_int; /*0x667add*/
  VectorClass::Destroy((int)&this->?); /*0x667adf*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667aea*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667aec*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667af7*/
  VectorClass::Destroy((int)&this->?); /*0x667af9*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667b04*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667b06*/
  this->? = (int)&vt_VectorClass_int; /*0x667b11*/
  VectorClass::Destroy((int)&this->?); /*0x667b13*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667b1e*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667b20*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b2b*/
  VectorClass::Destroy((int)&this->?); /*0x667b2d*/
  *(_DWORD *)this->? = &vt_VectorClass_int; /*0x667b38*/
  VectorClass::Destroy((int)this->?); /*0x667b3a*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b45*/
  VectorClass::Destroy((int)&this->?); /*0x667b47*/
  this->?[17] = (int)&vt_VectorClass_int; /*0x667b52*/
  VectorClass::Destroy((int)&this->?[17]); /*0x667b54*/
  this->?[9] = (int)&vt_VectorClass_int; /*0x667b5f*/
  VectorClass::Destroy((int)&this->?[9]); /*0x667b61*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667b6c*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667b6e*/
  this->? = (int)&vt_VectorClass_TerrainTypeClass_const; /*0x667b79*/
  TypeList_cptr_TerrainTypeClass::TryFreeAndClear((int)&this->?); /*0x667b7f*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667b8a*/
  VectorClass::Destroy((int)&this->?); /*0x667b8c*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667b97*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667b99*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667ba4*/
  VectorClass::Destroy((int)this->?); /*0x667ba6*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667bb1*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667bb3*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667bbe*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667bc0*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667bcb*/
  VectorClass::Destroy((int)this->?); /*0x667bcd*/
  this->?[1] = (int)&vt_VectorClass_int; /*0x667bd8*/
  VectorClass::Destroy((int)&this->?[1]); /*0x667bda*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667be5*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667be7*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667bf2*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667bf4*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667bff*/
  VectorClass::Destroy((int)&this->?[3]); /*0x667c01*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x667c0c*/
  VectorClass::Destroy((int)this->?); /*0x667c0e*/
  this->?[2] = (int)&vt_VectorClass_int; /*0x667c19*/
  VectorClass::Destroy((int)&this->?[2]); /*0x667c1b*/
  HIDWORD(this->?) = &vt_VectorClass_int; /*0x667c26*/
  VectorClass::Destroy((int)&this->? + 4); /*0x667c28*/
  this->? = (int)&vt_VectorClass_int; /*0x667c33*/
  VectorClass::Destroy((int)&this->?); /*0x667c35*/
  this->? = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667c45*/
  DynamicVectorClass::Destroy((int)&this->?); /*0x667c47*/
  *(_DWORD *)this->? = &vt_VectorClass_UnitTypeClass_const; /*0x667c52*/
  Vector::Destructor((int)this->?); /*0x667c58*/
  LODWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c63*/
  Vector::Cleanup((int)&this->?); /*0x667c69*/
  HIDWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c74*/
  Vector::Cleanup((int)&this->? + 4); /*0x667c7a*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667c85*/
  VectorClass::Destroy((int)&this->?); /*0x667c87*/
  HIDWORD(this->?) = &vt_VectorClass_InfantryTypeClass_const; /*0x667c92*/
  Vector::Cleanup((int)&this->? + 4); /*0x667c98*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x667ca3*/
  VectorClass::Destroy((int)&this->?); /*0x667ca5*/
  this->? = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cb0*/
  Vector::Cleanup((int)&this->?); /*0x667cb6*/
  this->? = (int)&vt_VectorClass_int; /*0x667cc1*/
  VectorClass::Destroy((int)&this->?); /*0x667cc3*/
  this->__pad_C3C = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cce*/
  Vector::Cleanup((int)&this->__pad_C3C); /*0x667cd4*/
  this->? = (int)&vt_VectorClass_int; /*0x667cdf*/
  VectorClass::Destroy((int)&this->?); /*0x667ce1*/
  this->? = (int)&vt_VectorClass_InfantryTypeClass_const; /*0x667cec*/
  Vector::Cleanup((int)&this->?); /*0x667cf2*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667cfd*/
  DynamicVectorClass::Destroy_Alt((int)&this->?); /*0x667d03*/
  LODWORD(this->?) = &vt_VectorClass_AnimTypeClass_const; /*0x667d0e*/
  DynamicVectorClass::Destroy_Alt((int)&this->?); /*0x667d14*/
  this->?[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x667d1f*/
  DynamicVectorClass::Destroy_Alt((int)&this->?[2]); /*0x667d25*/
  LODWORD(this->?) = &vt_VectorClass_AircraftTypeClass_const; /*0x667d30*/
  VectorClass::ClearAndFree4((int)&this->?); /*0x667d36*/
  this->HarvesterLoadRate = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d41*/
  Vector::Destructor((int)&this->HarvesterLoadRate); /*0x667d47*/
  this->SovietSurvivorDivisor[1] = (int)&vt_VectorClass_UnitTypeClass_const; /*0x667d52*/
  Vector::Destructor((int)&this->SovietSurvivorDivisor[1]); /*0x667d58*/
  this->BridgeDestruction[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d63*/
  DynamicVectorClass::Destroy((int)&this->BridgeDestruction[1]); /*0x667d65*/
  this->MinUnitCount = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d70*/
  DynamicVectorClass::Destroy((int)&this->MinUnitCount); /*0x667d72*/
  this->SilverCrate[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d7d*/
  DynamicVectorClass::Destroy((int)&this->SilverCrate[3]); /*0x667d7f*/
  v3 = (void *)this->Aircraft[1]; /*0x667d84*/
  this->Aircraft[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667d8e*/
  if ( v3 && BYTE1(this->Aircraft[3]) ) /*0x667d96*/
  {
    __3_YAXPAX_Z(v3); /*0x667d9f*/
    this->Aircraft[1] = 0; /*0x667da7*/
  }
  BYTE1(this->Aircraft[3]) = 0; /*0x667dad*/
  this->Aircraft[2] = 0; /*0x667db3*/
  HarvesterTooFarDistance = (void *)this->Production; /*0x667db9*/
  this->SuperWeapons = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667dbf*/
  if ( HarvesterTooFarDistance && BYTE1(this->RepairSell[0]) ) /*0x667dc9*/
  {
    __3_YAXPAX_Z(HarvesterTooFarDistance); /*0x667dd2*/
    this->Production = 0; /*0x667dda*/
  }
  BYTE1(this->RepairSell[0]) = 0; /*0x667de0*/
  this->GuardArea = 0; /*0x667de6*/
  SovietDisguise = (void *)this->BaseBias; /*0x667dec*/
  this->? = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667df2*/
  if ( SovietDisguise && BYTE1(this->ExpSpread) ) /*0x667dfc*/
  {
    __3_YAXPAX_Z(SovietDisguise); /*0x667e05*/
    this->BaseBias = 0; /*0x667e0d*/
  }
  BYTE1(this->ExpSpread) = 0; /*0x667e13*/
  this->? = 0; /*0x667e19*/
  v6 = (void *)this->InfantryBaseMult[3]; /*0x667e1f*/
  this->InfantryBaseMult[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e25*/
  if ( v6 && BYTE1(this->PatrolScan[1]) ) /*0x667e2f*/
  {
    __3_YAXPAX_Z(v6); /*0x667e38*/
    this->InfantryBaseMult[3] = 0; /*0x667e40*/
  }
  BYTE1(this->PatrolScan[1]) = 0; /*0x667e46*/
  this->PatrolScan[0] = 0; /*0x667e4c*/
  v7 = (void *)this->?[0]; /*0x667e52*/
  this->?[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e58*/
  if ( v7 && BYTE1(this->?[2]) ) /*0x667e62*/
  {
    __3_YAXPAX_Z(v7); /*0x667e6b*/
    this->?[0] = 0; /*0x667e73*/
  }
  BYTE1(this->?[2]) = 0; /*0x667e79*/
  this->?[1] = 0; /*0x667e7f*/
  v8 = (void *)this->WarRatio[1]; /*0x667e85*/
  this->WarRatio[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667e8b*/
  if ( v8 && BYTE1(this->WarRatio[3]) ) /*0x667e95*/
  {
    __3_YAXPAX_Z(v8); /*0x667e9e*/
    this->WarRatio[1] = 0; /*0x667ea6*/
  }
  BYTE1(this->WarRatio[3]) = 0; /*0x667eac*/
  this->WarRatio[2] = 0; /*0x667eb2*/
  v9 = (void *)this->?[2]; /*0x667eb8*/
  this->?[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ebe*/
  if ( v9 && BYTE1(this->AALimit[0]) ) /*0x667ec8*/
  {
    __3_YAXPAX_Z(v9); /*0x667ed1*/
    this->?[2] = 0; /*0x667ed9*/
  }
  BYTE1(this->AALimit[0]) = 0; /*0x667edf*/
  this->?[3] = 0; /*0x667ee5*/
  v10 = (void *)this->?[3]; /*0x667eeb*/
  this->?[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ef1*/
  if ( v10 && BYTE1(this->HelipadRatio[1]) ) /*0x667efb*/
  {
    __3_YAXPAX_Z(v10); /*0x667f04*/
    this->?[3] = 0; /*0x667f0c*/
  }
  BYTE1(this->HelipadRatio[1]) = 0; /*0x667f12*/
  this->HelipadRatio[0] = 0; /*0x667f18*/
  v11 = (void *)this->?[0]; /*0x667f1e*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x667f24*/
  if ( v11 && BYTE1(this->?[2]) ) /*0x667f2e*/
  {
    __3_YAXPAX_Z(v11); /*0x667f37*/
    this->?[0] = 0; /*0x667f3f*/
  }
  BYTE1(this->?[2]) = 0; /*0x667f45*/
  this->?[1] = 0; /*0x667f4b*/
  v12 = (void *)this->?[1]; /*0x667f51*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f57*/
  if ( v12 && BYTE1(this->?[3]) ) /*0x667f61*/
  {
    __3_YAXPAX_Z(v12); /*0x667f6a*/
    this->?[1] = 0; /*0x667f72*/
  }
  BYTE1(this->?[3]) = 0; /*0x667f78*/
  this->?[2] = 0; /*0x667f7e*/
  ChronoDelay = (void *)this->?; /*0x667f84*/
  this->MyEffectivenessCoefficientDefault = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667f8a*/
  if ( ChronoDelay && BYTE1(this->?) ) /*0x667f94*/
  {
    __3_YAXPAX_Z(ChronoDelay); /*0x667f9d*/
    this->? = 0; /*0x667fa5*/
  }
  BYTE1(this->?) = 0; /*0x667fab*/
  this->TargetEffectivenessCoefficientDefault = 0; /*0x667fb1*/
  v14 = (void *)this->?[1]; /*0x667fb7*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667fbd*/
  if ( v14 && BYTE1(this->?[3]) ) /*0x667fc7*/
  {
    __3_YAXPAX_Z(v14); /*0x667fd0*/
    this->?[1] = 0; /*0x667fd8*/
  }
  BYTE1(this->?[3]) = 0; /*0x667fde*/
  this->?[2] = 0; /*0x667fe4*/
  v15 = (void *)this->?[3]; /*0x667fea*/
  this->?[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x667ff0*/
  if ( v15 && BYTE1(this->?) ) /*0x667ffa*/
  {
    __3_YAXPAX_Z(v15); /*0x668003*/
    this->?[3] = 0; /*0x66800b*/
  }
  BYTE1(this->?) = 0; /*0x668011*/
  this->? = 0; /*0x668017*/
  v16 = (void *)this->?[0]; /*0x66801d*/
  this->?[3] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668023*/
  if ( v16 && BYTE1(this->?[2]) ) /*0x66802d*/
  {
    __3_YAXPAX_Z(v16); /*0x668036*/
    this->?[0] = 0; /*0x66803e*/
  }
  BYTE1(this->?[2]) = 0; /*0x668044*/
  this->?[1] = 0; /*0x66804a*/
  v17 = (void *)this->?[1]; /*0x668050*/
  this->?[0] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668056*/
  if ( v17 && BYTE1(this->?[3]) ) /*0x668060*/
  {
    __3_YAXPAX_Z(v17); /*0x668069*/
    this->?[1] = 0; /*0x668071*/
  }
  BYTE1(this->?[3]) = 0; /*0x668077*/
  this->?[2] = 0; /*0x66807d*/
  ComputerBaseDefenseResponse = (void *)this->?; /*0x668083*/
  HIDWORD(this->?) = &vt_VectorClass_BuildingTypeClass_const; /*0x668089*/
  if ( ComputerBaseDefenseResponse && BYTE1(this->?[0]) ) /*0x668093*/
  {
    __3_YAXPAX_Z(ComputerBaseDefenseResponse); /*0x66809c*/
    this->? = 0; /*0x6680a4*/
  }
  BYTE1(this->?[0]) = 0; /*0x6680aa*/
  this->? = 0; /*0x6680b0*/
  GDIWallDefense_high = (void *)HIDWORD(this->CHRONOSK_SHP); /*0x6680b6*/
  LODWORD(this->CHRONOSK_SHP) = &vt_VectorClass_BuildingTypeClass_const; /*0x6680bc*/
  if ( GDIWallDefense_high && BYTE5(this->PsychicRevealRadius) ) /*0x6680c6*/
  {
    __3_YAXPAX_Z(GDIWallDefense_high); /*0x6680cf*/
    HIDWORD(this->CHRONOSK_SHP) = 0; /*0x6680d7*/
  }
  BYTE5(this->PsychicRevealRadius) = 0; /*0x6680dd*/
  LODWORD(this->PsychicRevealRadius) = 0; /*0x6680e3*/
  v20 = (void *)this->IvanWarhead[2]; /*0x6680e9*/
  this->IvanWarhead[1] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x6680ef*/
  if ( v20 && BYTE1(this->CanDetonateTimeBomb[0]) ) /*0x6680f9*/
  {
    __3_YAXPAX_Z(v20); /*0x668102*/
    this->IvanWarhead[2] = 0; /*0x66810a*/
  }
  BYTE1(this->CanDetonateTimeBomb[0]) = 0; /*0x668110*/
  this->IvanWarhead[3] = 0; /*0x668116*/
  v21 = (void *)this->NukeProjectile[3]; /*0x66811c*/
  this->NukeProjectile[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668122*/
  if ( v21 && BYTE1(this->C4Warhead[1]) ) /*0x66812c*/
  {
    __3_YAXPAX_Z(v21); /*0x668135*/
    this->NukeProjectile[3] = 0; /*0x66813d*/
  }
  BYTE1(this->C4Warhead[1]) = 0; /*0x668143*/
  this->C4Warhead[0] = 0; /*0x668149*/
  v22 = (void *)this->AISafeDistance[3]; /*0x66814f*/
  this->AISafeDistance[2] = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x668155*/
  if ( v22 && BYTE1(this->Engineer[1]) ) /*0x66815f*/
  {
    __3_YAXPAX_Z(v22); /*0x668168*/
    this->AISafeDistance[3] = 0; /*0x668170*/
  }
  BYTE1(this->Engineer[1]) = 0; /*0x668176*/
  this->Engineer[0] = 0; /*0x66817c*/
  v23 = (void *)this->SpyPowerBlackout[0]; /*0x668182*/
  this->ChronoRangeMinimum[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x66818f*/
  if ( v23 && BYTE1(this->SpyPowerBlackout[2]) ) /*0x668197*/
  {
    __3_YAXPAX_Z(v23); /*0x6681a0*/
    this->SpyPowerBlackout[0] = 0; /*0x6681a8*/
  }
  BYTE1(this->SpyPowerBlackout[2]) = 0; /*0x6681ae*/
  this->SpyPowerBlackout[1] = 0; /*0x6681b4*/
  v24 = (void *)this->ChronoReinfDelay[1]; /*0x6681ba*/
  this->ChronoReinfDelay[0] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681c0*/
  if ( v24 && BYTE1(this->ChronoReinfDelay[3]) ) /*0x6681ca*/
  {
    __3_YAXPAX_Z(v24); /*0x6681d3*/
    this->ChronoReinfDelay[1] = 0; /*0x6681db*/
  }
  BYTE1(this->ChronoReinfDelay[3]) = 0; /*0x6681e1*/
  this->ChronoReinfDelay[2] = 0; /*0x6681e7*/
  v25 = (void *)this->BombParachute[2]; /*0x6681ed*/
  this->BombParachute[1] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x6681f3*/
  if ( v25 && BYTE1(this->LargeFire[0]) ) /*0x6681fd*/
  {
    __3_YAXPAX_Z(v25); /*0x668206*/
    this->BombParachute[2] = 0; /*0x66820e*/
  }
  BYTE1(this->LargeFire[0]) = 0; /*0x668214*/
  this->BombParachute[3] = 0; /*0x66821a*/
  v26 = (void *)this->BaseUnit[3]; /*0x668220*/
  this->BaseUnit[2] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668226*/
  if ( v26 && BYTE1(this->TreeFire[1]) ) /*0x668230*/
  {
    __3_YAXPAX_Z(v26); /*0x668239*/
    this->BaseUnit[3] = 0; /*0x668241*/
  }
  BYTE1(this->TreeFire[1]) = 0; /*0x668247*/
  this->TreeFire[0] = 0; /*0x66824d*/
  v27 = (void *)this->GDIBaseDefenseCoefficient[0]; /*0x668253*/
  this->GDIWallDefenseCoefficient[3] = (int)&vt_VectorClass_SmudgeTypeClass_const; /*0x668259*/
  if ( v27 && BYTE1(this->GDIBaseDefenseCoefficient[2]) ) /*0x668263*/
  {
    __3_YAXPAX_Z(v27); /*0x66826c*/
    this->GDIBaseDefenseCoefficient[0] = 0; /*0x668274*/
  }
  BYTE1(this->GDIBaseDefenseCoefficient[2]) = 0; /*0x66827a*/
  this->GDIBaseDefenseCoefficient[1] = 0; /*0x668280*/
  v28 = (void *)this->?[1]; /*0x668286*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x66828c*/
  if ( v28 && BYTE1(this->?[3]) ) /*0x668296*/
  {
    __3_YAXPAX_Z(v28); /*0x66829f*/
    this->?[1] = 0; /*0x6682a7*/
  }
  BYTE1(this->?[3]) = 0; /*0x6682ad*/
  this->?[2] = 0; /*0x6682b3*/
  CameraRange = (void *)this->ChuteSound; /*0x6682b9*/
  this->HealCrateSound = (int)&vt_VectorClass_int; /*0x6682bf*/
  if ( CameraRange && BYTE1(this->GuardSound) ) /*0x6682c9*/
  {
    __3_YAXPAX_Z(CameraRange); /*0x6682d2*/
    this->ChuteSound = 0; /*0x6682da*/
  }
  BYTE1(this->GuardSound) = 0; /*0x6682e0*/
  this->StopSound = 0; /*0x6682e6*/
  StopSound = (void *)this->?; /*0x6682ec*/
  this->VeteranROF = (int)&vt_VectorClass_int; /*0x6682f2*/
  if ( StopSound && BYTE1(this->?) ) /*0x6682fc*/
  {
    __3_YAXPAX_Z(StopSound); /*0x668305*/
    this->? = 0; /*0x66830d*/
  }
  BYTE1(this->?) = 0; /*0x668313*/
  this->VeteranCap = 0; /*0x668319*/
  v31 = (void *)this->RevealTriggerRadius[0]; /*0x66831f*/
  this->CloakingStages = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66832c*/
  if ( v31 && BYTE1(this->RevealTriggerRadius[2]) ) /*0x668334*/
  {
    __3_YAXPAX_Z(v31); /*0x66833d*/
    this->RevealTriggerRadius[0] = 0; /*0x668345*/
  }
  BYTE1(this->RevealTriggerRadius[2]) = 0; /*0x66834b*/
  this->RevealTriggerRadius[1] = 0; /*0x668351*/
  v32 = (void *)this->?[7]; /*0x668357*/
  this->?[6] = (int)&vt_VectorClass_int; /*0x66835d*/
  if ( v32 && BYTE1(this->?[9]) ) /*0x668367*/
  {
    __3_YAXPAX_Z(v32); /*0x668370*/
    this->?[7] = 0; /*0x668378*/
  }
  BYTE1(this->?[9]) = 0; /*0x66837e*/
  this->?[8] = 0; /*0x668384*/
  v33 = (void *)this->?[0]; /*0x66838a*/
  this->?[13] = (int)&vt_VectorClass_int; /*0x668390*/
  if ( v33 && BYTE1(this->?[2]) ) /*0x66839a*/
  {
    __3_YAXPAX_Z(v33); /*0x6683a3*/
    this->?[0] = 0; /*0x6683ab*/
  }
  BYTE1(this->?[2]) = 0; /*0x6683b1*/
  this->?[1] = 0; /*0x6683b7*/
  v34 = (void *)this->?[7]; /*0x6683bd*/
  this->?[6] = (int)&vt_VectorClass_int; /*0x6683c3*/
  if ( v34 && BYTE1(this->?[9]) ) /*0x6683cd*/
  {
    __3_YAXPAX_Z(v34); /*0x6683d6*/
    this->?[7] = 0; /*0x6683de*/
  }
  BYTE1(this->?[9]) = 0; /*0x6683e4*/
  this->?[8] = 0; /*0x6683ea*/
  PrismSupportHeight = (void *)this->?; /*0x6683f0*/
  this->? = (int)&vt_VectorClass_int; /*0x6683f6*/
  if ( PrismSupportHeight && BYTE1(this->?[1]) ) /*0x668400*/
  {
    __3_YAXPAX_Z(PrismSupportHeight); /*0x668409*/
    this->? = 0; /*0x668411*/
  }
  BYTE1(this->?[1]) = 0; /*0x668417*/
  this->?[0] = 0; /*0x66841d*/
  IonCannonDamage = (void *)this->?; /*0x668423*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x668429*/
  if ( IonCannonDamage && BYTE1(this->?) ) /*0x668433*/
  {
    __3_YAXPAX_Z(IonCannonDamage); /*0x66843c*/
    this->? = 0; /*0x668444*/
  }
  BYTE1(this->?) = 0; /*0x66844a*/
  this->? = 0; /*0x668450*/
  v37 = (void *)this->?[1]; /*0x668456*/
  this->?[0] = (int)&vt_VectorClass_int; /*0x66845c*/
  if ( v37 && BYTE1(this->?[3]) ) /*0x668466*/
  {
    __3_YAXPAX_Z(v37); /*0x66846f*/
    this->?[1] = 0; /*0x668477*/
  }
  BYTE1(this->?[3]) = 0; /*0x66847d*/
  this->?[2] = 0; /*0x668483*/
  WobblesPerSecond_high = (void *)HIDWORD(this->?); /*0x668489*/
  LODWORD(this->?) = &vt_VectorClass_int; /*0x66848f*/
  if ( WobblesPerSecond_high && BYTE1(this->?[0]) ) /*0x668499*/
  {
    __3_YAXPAX_Z(WobblesPerSecond_high); /*0x6684a2*/
    HIDWORD(this->?) = 0; /*0x6684aa*/
  }
  BYTE1(this->?[0]) = 0; /*0x6684b0*/
  this->? = 0; /*0x6684b6*/
  Climb = (void *)this->?; /*0x6684bc*/
  *(_DWORD *)&this->?[4] = &vt_VectorClass_int; /*0x6684c2*/
  if ( Climb && BYTE1(this->?) ) /*0x6684cc*/
  {
    __3_YAXPAX_Z(Climb); /*0x6684d5*/
    LODWORD(this->?) = 0; /*0x6684dd*/
  }
  BYTE1(this->?) = 0; /*0x6684e3*/
  HIDWORD(this->?) = 0; /*0x6684e9*/
  PrerequisiteProcAlternate = (void *)this->?; /*0x6684ef*/
  this->?[3] = (int)&vt_VectorClass_int; /*0x6684f5*/
  if ( PrerequisiteProcAlternate && BYTE1(this->?) ) /*0x6684ff*/
  {
    __3_YAXPAX_Z(PrerequisiteProcAlternate); /*0x668508*/
    this->? = 0; /*0x668510*/
  }
  BYTE1(this->?) = 0; /*0x668516*/
  this->? = 0; /*0x66851c*/
  WarpIn = (void *)this->?; /*0x668522*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66852f*/
  if ( WarpIn && BYTE1(this->?) ) /*0x668537*/
  {
    __3_YAXPAX_Z(WarpIn); /*0x668540*/
    this->? = 0; /*0x668548*/
  }
  BYTE1(this->?) = 0; /*0x66854e*/
  this->? = 0; /*0x668554*/
  DrainAnimationType = (void *)this->?; /*0x66855a*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668560*/
  if ( DrainAnimationType && BYTE1(this->?) ) /*0x66856a*/
  {
    __3_YAXPAX_Z(DrainAnimationType); /*0x668573*/
    this->? = 0; /*0x66857b*/
  }
  BYTE1(this->?) = 0; /*0x668581*/
  this->? = 0; /*0x668587*/
  DominatorSecondAnim = (void *)this->?; /*0x66858d*/
  this->? = (int)&vt_VectorClass_AnimTypeClass_const; /*0x668593*/
  if ( DominatorSecondAnim && BYTE1(this->?) ) /*0x66859d*/
  {
    __3_YAXPAX_Z(DominatorSecondAnim); /*0x6685a6*/
    this->? = 0; /*0x6685ae*/
  }
  BYTE1(this->?) = 0; /*0x6685b4*/
  this->? = 0; /*0x6685ba*/
  GUIOpenSound = (void *)this->CrateFireSound; /*0x6685c0*/
  this->CrateRevealSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685c6*/
  if ( GUIOpenSound && BYTE1(this->CrateSpeedSound) ) /*0x6685d0*/
  {
    __3_YAXPAX_Z(GUIOpenSound); /*0x6685d9*/
    this->CrateFireSound = 0; /*0x6685e1*/
  }
  BYTE1(this->CrateSpeedSound) = 0; /*0x6685e7*/
  this->CrateArmourSound = 0; /*0x6685ed*/
  CreateUnitSound = (void *)this->DefaultChronoSound; /*0x6685f3*/
  this->PlaceBeaconSound = (int)&vt_VectorClass_AnimTypeClass_const; /*0x6685f9*/
  if ( CreateUnitSound && BYTE1(this->AddPlanningModeCommandSound) ) /*0x668603*/
  {
    __3_YAXPAX_Z(CreateUnitSound); /*0x66860c*/
    this->DefaultChronoSound = 0; /*0x668614*/
  }
  BYTE1(this->AddPlanningModeCommandSound) = 0; /*0x66861a*/
  this->StartPlanningModeSound = 0; /*0x668620*/
  v46 = (void *)this->GUICheckboxSound[2]; /*0x668626*/
  this->GUICheckboxSound[1] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66862c*/
  if ( v46 && BYTE1(this->BuildingGarrisonedSound[0]) ) /*0x668636*/
  {
    __3_YAXPAX_Z(v46); /*0x66863f*/
    this->GUICheckboxSound[2] = 0; /*0x668647*/
  }
  BYTE1(this->BuildingGarrisonedSound[0]) = 0; /*0x66864d*/
  this->GUICheckboxSound[3] = 0; /*0x668653*/
  v47 = (void *)this->GUITabSound[3]; /*0x668659*/
  this->GUITabSound[2] = (int)&vt_VectorClass_AnimTypeClass_const; /*0x66865f*/
  if ( v47 && BYTE1(this->GUIMoveInSound[1]) ) /*0x668669*/
  {
    __3_YAXPAX_Z(v47); /*0x668672*/
    this->GUITabSound[3] = 0; /*0x66867a*/
  }
  BYTE1(this->GUIMoveInSound[1]) = 0; /*0x668680*/
  this->GUIMoveInSound[0] = 0; /*0x668686*/
  result = this->RadarEventColorSpeed[1]; /*0x66868c*/
  this->RadarEventColorSpeed[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const; /*0x66868f*/
  if ( result && BYTE1(this->RadarEventColorSpeed[3]) ) /*0x668696*/
  {
    __3_YAXPAX_Z((void *)result); /*0x66869c*/
    this->RadarEventColorSpeed[1] = 0; /*0x6686a4*/
  }
  BYTE1(this->RadarEventColorSpeed[3]) = 0; /*0x6686a7*/
  this->RadarEventColorSpeed[2] = 0; /*0x6686aa*/
  return result; /*0x6686ad*/
}
}

// 0x66D150
int RulesClass::readAudioVisual()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_66D150(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  double Double_Overwrite; // st7
  unsigned int v6; // eax
  unsigned int v7; // ecx
  double v8; // [esp-8h] [ebp-10h]
  int v9; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v9, (unsigned __int8 *)MEMORY[0x839E70]); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v9,
                      (unsigned __int8 *)MEMORY[0x839E70],
                      (unsigned __int8 *)MEMORY[0x83B370],
                      *((_DWORD *)this + 1550));
    v4 = *((_DWORD *)this + 1552); /*0x66d188*/
    *((_DWORD *)this + 1550) = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v8) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v8) = v4; /*0x66d1a1*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x66d1aa*/
                         v9,
                         (unsigned __int8 *)MEMORY[0x839E70],
                         (unsigned __int8 *)MEMORY[0x83B358],
                         v8);
    v6 = this->BerserkColor; /*0x66d1af*/
    v7 = this->IronCurtainColor; /*0x66d1b5*/
    *((double *)this + 776) = Double_Overwrite; /*0x66d1bb*/
    *((double *)this + 777) = INIClass::ReadDouble_Overwrite( /*0x66d1d6*/
                                v9,
                                (unsigned __int8 *)MEMORY[0x839E70],
                                (unsigned __int8 *)MEMORY[0x83B344],
                                COERCE_DOUBLE(__PAIR64__(v6, v7)));
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/
}
}

// 0x66D1F0
int RulesClass::readSpecialWeapons()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_66D1F0(RulesClass *this)
{
  int result; // eax
  char Bool_Overwrite; // al
  int v4; // ecx
  double v5; // [esp-8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v6, (unsigned __int8 *)MEMORY[0x839E64]); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v6,
                       (unsigned __int8 *)MEMORY[0x839E64],
                       (unsigned __int8 *)MEMORY[0x83B39C],
                       (unsigned char)this->ForceShieldColor);
    v4 = this->FallBackCoefficient; /*0x66d228*/
    *((_BYTE *)this + 6224) = Bool_Overwrite; /*0x66d22e*/
    HIDWORD(v5) = this->CrewCount; /*0x66d240*/
    LODWORD(v5) = v4; /*0x66d241*/
    *((double *)this + 779) = INIClass::ReadDouble_Overwrite( /*0x66d24f*/
                                v6,
                                (unsigned __int8 *)MEMORY[0x839E64],
                                (unsigned __int8 *)MEMORY[0x83B384],
                                v5);
    LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/
}
}

// 0x66D3A0
int RulesClass::ReadColors()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_66D3A0(RulesClass *this)
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  unsigned __int8 *StringByIndex; // esi
  int Color; // eax
  unsigned __int8 v7[4]; // [esp+4h] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+8h] [ebp-4h] BYREF
  char *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = v9; /*0x66d3a9*/
  result = INIClass::BinarySearchSection((int)v9, (unsigned __int8 *)MEMORY[0x839E5C]); /*0x66d3b0*/
  if ( result ) /*0x66d3bc*/
  {
    result = INIClass::GetKeyCount(v1, (unsigned __int8 *)MEMORY[0x839E5C]); /*0x66d3cd*/
    v3 = result; /*0x66d3d2*/
    for ( i = 0; i < v3; ++i ) /*0x66d3d8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)MEMORY[0x839E5C], i); /*0x66d3f4*/
      v7[0] = 0; /*0x66d404*/
      v7[1] = 0; /*0x66d409*/
      v7[2] = 0; /*0x66d40e*/
      Color = INIEntry::ReadColor( /*0x66d413*/
                (unsigned __int8 ***)v1,
                (int)v8,
                (unsigned __int8 *)MEMORY[0x839E5C],
                StringByIndex,
                v7);
      LOWORD(v9) = *(_WORD *)Color; /*0x66d41b*/
      BYTE2(v9) = *(_BYTE *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)MEMORY[0x886380], (int)&MEMORY[0x885780], 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)MEMORY[0x886380], (int)&MEMORY[0x885780], 53); /*0x66d45b*/
    }
    LOBYTE(result) = 1; /*0x66d46c*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}
}

// 0x66D480
int RulesClass::ReadColorAdd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_66D480(RulesClass *this)
{
  char *v1; // edi
  int result; // eax
  int v4; // esi
  char *v5; // ebp
  unsigned __int8 *StringByIndex; // eax
  int Coord; // eax
  char *v8; // edx
  char v9; // cl
  bool v10; // cc
  char v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]
  char *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)MEMORY[0x839E50]); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1, (unsigned __int8 *)MEMORY[0x839E50]); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)this + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v1, (unsigned __int8 *)MEMORY[0x839E50], v4); /*0x66d4cd*/
        LOWORD(v13) = 0; /*0x66d4e6*/
        BYTE2(v13) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord( /*0x66d4f2*/
                  (unsigned __int8 ***)v1,
                  (int)v11,
                  (unsigned __int8 *)MEMORY[0x839E50],
                  StringByIndex,
                  (unsigned __int8 *)&v13);
        v8 = v5; /*0x66d4f9*/
        ++v4; /*0x66d4fb*/
        v5 += 3; /*0x66d4fc*/
        v9 = *(_BYTE *)(Coord + 2); /*0x66d502*/
        *(_WORD *)v8 = *(_WORD *)Coord; /*0x66d505*/
        result = v12; /*0x66d508*/
        v10 = v4 < v12; /*0x66d50c*/
        v8[2] = v9; /*0x66d50e*/
      }
      while ( v10 ); /*0x66d511*/
    }
    LOBYTE(result) = 1; /*0x66d516*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d521*/
  }
  return result; /*0x66d514*/
}
}

// 0x672280
int RulesClass::readCrateRules()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_672280(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E34]); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E34], i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E34],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      KeywordType::FindOrCreate2(Destination); /*0x6722d0*/
    }
  }
  return KeyCount > 0; /*0x6722dc*/
}
}

// 0x6723D0
int RulesClass::readRadiation()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6723D0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839E08]); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839E08], i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839E08],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}
}

// 0x6725F0
int RulesClass::ReadSidesList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6725F0(RulesClass *this)
{
  int KeyCount; // ebx
  int i; // esi
  unsigned __int8 *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  char *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6, (unsigned __int8 *)MEMORY[0x839DEC]); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v6, (unsigned __int8 *)MEMORY[0x839DEC], i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           (unsigned __int8 ***)v6,
           (unsigned __int8 *)MEMORY[0x839DEC],
           StringByIndex,
           &MEMORY[0x889F64],
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}
}

// 0x673E80
int RulesClass::ReadPowerupsSection()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_673E80(RulesClass *this)
{
  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  char *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  double v11; // st7
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)MEMORY[0x839D98]); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = MEMORY[0x89EC28]; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 v13,
                 (unsigned __int8 *)MEMORY[0x839D98],
                 *((unsigned __int8 **)&off_7E523C + v2),
                 MEMORY[0x83D4AC],
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, MEMORY[0x817F70]); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, MEMORY[0x817F70]); /*0x673f13*/
        v7 = v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, MEMORY[0x817F70]); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, MEMORY[0x825BF8]) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, MEMORY[0x825BF4]) ) /*0x673f73*/
              MEMORY[0x89ECC0][v2] = 0; /*0x673f7f*/
          }
          else
          {
            MEMORY[0x89ECC0][v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, MEMORY[0x817F70]); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            v11 = atof(v10) * 0.01; /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            v11 = atof(v10); /*0x673fc2*/
          }
          *v3 = v11; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)MEMORY[0x89ECC0] ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/
}
}

// 0x6743D0
int RulesClass::readDifficulty()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6743D0(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  double Double_Overwrite; // st7
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  double v13; // st7
  int v14; // ecx
  double v15; // [esp-8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection(v16, (unsigned __int8 *)MEMORY[0x839D58]); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    this->?[8] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                   v16,
                   (unsigned __int8 *)MEMORY[0x839D58],
                   (unsigned __int8 *)MEMORY[0x83D554],
                   this->?[8]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)MEMORY[0x839D58],
                      (unsigned __int8 *)g_INI_Key_Speed,
                      this->?[9]);
    v4 = this->?[12]; /*0x67442c*/
    this->?[9] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = this->?[11]; /*0x674445*/
    Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x67444e*/
                         v16,
                         (unsigned __int8 *)MEMORY[0x839D58],
                         (unsigned __int8 *)MEMORY[0x83D54C],
                         v15);
    v6 = this->?[13]; /*0x674453*/
    *(double *)&this->?[11] = Double_Overwrite; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)MEMORY[0x839D58], (unsigned __int8 *)MEMORY[0x83D53C], v6); /*0x67446d*/
    v8 = this->?[2]; /*0x674472*/
    v9 = this->?[1]; /*0x674478*/
    this->?[13] = v7; /*0x67447e*/
    v10 = INIClass::ReadDouble_Overwrite( /*0x674493*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x81B140],
            COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v11 = this->?[4]; /*0x674498*/
    v12 = this->?[3]; /*0x67449e*/
    *(double *)&this->?[1] = v10; /*0x6744a4*/
    v13 = INIClass::ReadDouble_Overwrite( /*0x6744b9*/
            v16,
            (unsigned __int8 *)MEMORY[0x839D58],
            (unsigned __int8 *)MEMORY[0x83D528],
            COERCE_DOUBLE(__PAIR64__(v11, v12)));
    v14 = this->?[5]; /*0x6744be*/
    *(double *)&this->?[3] = v13; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite( /*0x6744d9*/
               v16,
               (unsigned __int8 *)MEMORY[0x839D58],
               (unsigned __int8 *)MEMORY[0x83D518],
               v14);
    this->?[5] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/
}
}

// 0x674550
int RulesClass::ReadMovies()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_674550(RulesClass *this)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  char *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)MEMORY[0x839D50]); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7, (unsigned __int8 *)MEMORY[0x839D50]); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v7, (unsigned __int8 *)MEMORY[0x839D50], i); /*0x6745a4*/
      result = INIClass::GetString( /*0x6745b3*/
                 (unsigned __int8 ***)v7,
                 (unsigned __int8 *)MEMORY[0x839D50],
                 StringByIndex,
                 MEMORY[0x817474],
                 Source,
                 32);
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex(Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = MEMORY[0xABF398]; /*0x6745dc*/
          if ( MEMORY[0xABF3A0] < MEMORY[0xABF398] /*0x674614*/
            || (MEMORY[0xABF39D] || !MEMORY[0xABF398])
            && MEMORY[0xABF3A4] > 0
            && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABF390] + 8))(
                           &MEMORY[0xABF390],
                           MEMORY[0xABF398] + MEMORY[0xABF3A4],
                           0),
                (_BYTE)result) )
          {
            result = MEMORY[0xABF3A0]++; /*0x67461c*/
            *((_DWORD *)MEMORY[0xABF394] + result) = v5; /*0x67462b*/
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x67463a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x674643*/
  }
  return result; /*0x67463c*/
}
}

// 0x679FA0
void RulesClass::readMaximums()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_679FA0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x679fa6*/
  *this = &vt_VectorClass_BuildingTypeClass_const; /*0x679fa9*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x679fb3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fb9*/
    *(this + 1) = 0; /*0x679fc1*/
  }
  *((_BYTE *)this + 13) = 0; /*0x679fc4*/
  *(this + 2) = 0; /*0x679fc7*/
}
}

// 0x679FD0
void RulesClass::readInfantryTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_679FD0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x679fd6*/
  *this = &vt_VectorClass_UnitTypeClass_const; /*0x679fd9*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x679fe3*/
  {
    __3_YAXPAX_Z(v2); /*0x679fe9*/
    *(this + 1) = 0; /*0x679ff1*/
  }
  *((_BYTE *)this + 13) = 0; /*0x679ff4*/
  *(this + 2) = 0; /*0x679ff7*/
}
}

// 0x67A000
void RulesClass::readCountries()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_67A000(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x67a006*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x67a009*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x67a013*/
  {
    __3_YAXPAX_Z(v2); /*0x67a019*/
    *(this + 1) = 0; /*0x67a021*/
  }
  *((_BYTE *)this + 13) = 0; /*0x67a024*/
  *(this + 2) = 0; /*0x67a027*/
}
}

// 0x67A060
void RulesClass::readVehicleTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_67A060(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)*(this + 1); /*0x67a066*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67a069*/
  if ( v2 && *((_BYTE *)this + 13) ) /*0x67a073*/
  {
    __3_YAXPAX_Z(v2); /*0x67a079*/
    *(this + 1) = 0; /*0x67a081*/
  }
  *((_BYTE *)this + 13) = 0; /*0x67a084*/
  *(this + 2) = 0; /*0x67a087*/
}
}

// 0x67A190
int * RulesClass::readAircraftTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A190(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a19a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    *(this + 2) = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a1b3*/
      *(this + 1) = (int)v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        v5 = *(this + 2); /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        *((_BYTE *)this + 13) = 1; /*0x67a1c9*/
        if ( v5 > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < *(this + 2) ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a1e5*/
      *((_BYTE *)this + 13) = 0; /*0x67a1ec*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a1f3*/
  *(this + 5) = a2[5]; /*0x67a1f9*/
  *(this + 6) = a2[6]; /*0x67a1ff*/
  return this; /*0x67a204*/
}
}

// 0x67A210
int * RulesClass::readSuperWeaponTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A210(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a21a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    *(this + 2) = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a233*/
      *(this + 1) = (int)v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        v5 = *(this + 2); /*0x67a242*/
        v6 = 0; /*0x67a245*/
        *((_BYTE *)this + 13) = 1; /*0x67a249*/
        if ( v5 > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < *(this + 2) ); /*0x67a261*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a265*/
      *((_BYTE *)this + 13) = 0; /*0x67a26c*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a273*/
  *(this + 5) = a2[5]; /*0x67a279*/
  *(this + 6) = a2[6]; /*0x67a27f*/
  return this; /*0x67a284*/
}
}

// 0x67A310
int * RulesClass::readBuildingTypes(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_67A310(int *this, int *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this != a2 ) /*0x67a31a*/
  {
    (*(void (__thiscall **)(int *))(*this + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    *(this + 2) = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = __2_YAPAXI_Z(4 * v3); /*0x67a333*/
      *(this + 1) = (int)v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        v5 = *(this + 2); /*0x67a342*/
        v6 = 0; /*0x67a345*/
        *((_BYTE *)this + 13) = 1; /*0x67a349*/
        if ( v5 > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < *(this + 2) ); /*0x67a361*/
        }
      }
    }
    else
    {
      *(this + 1) = 0; /*0x67a365*/
      *((_BYTE *)this + 13) = 0; /*0x67a36c*/
    }
  }
  *(this + 4) = a2[4]; /*0x67a373*/
  *(this + 5) = a2[5]; /*0x67a379*/
  *(this + 6) = a2[6]; /*0x67a37f*/
  return this; /*0x67a384*/
}
}

// 0x67A3C0
int RulesClass::readTerrainTypes(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::readTerrainTypes(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a3cc*/
  v6 = *(this + 4); /*0x67a3d9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a3dd*/
  result = v6; /*0x67a3e0*/
  for ( i = 0; i < v6; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a3f8*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}
}

// 0x67A730
int RulesClass::readSmudgeTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_67A730(_DWORD *this)
{
  return *(this + 4); /*0x67a733*/
}
}

// 0x67A7C0
int RulesClass::readOverlayTypes()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_67A7C0(_DWORD *this)
{
  return *(this + 4); /*0x67a7c3*/
}
}

// 0x67A7D0
int RulesClass::readAnimations(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::readAnimations(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a7dc*/
  v6 = *(this + 4); /*0x67a7e9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a7ed*/
  result = v6; /*0x67a7f0*/
  for ( i = 0; i < v6; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a808*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}
}

// 0x67A8A0
int RulesClass::readWarheads()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_67A8A0(_DWORD *this)
{
  return *(this + 4); /*0x67a8a3*/
}
}

// 0x67A8B0
unsigned int * RulesClass::readParticles()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67A8B0(_DWORD *this)
{
  *(this + 1) = 0; /*0x67a8b4*/
  *(this + 2) = 0; /*0x67a8b7*/
  *((_BYTE *)this + 12) = 1; /*0x67a8ba*/
  *((_BYTE *)this + 13) = 0; /*0x67a8be*/
  *(this + 5) = 10; /*0x67a8c1*/
  *(this + 4) = 0; /*0x67a8c8*/
  *this = &vt_TypeList_TerrainTypeClass_const; /*0x67a8cb*/
  return this; /*0x67a8d1*/
}
}

// 0x67A8E0
int RulesClass::readParticleSystems(TechnoTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RulesClass::readParticleSystems(_DWORD *this, TechnoTypeClass *aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *(_DWORD *)aP1->vtable0; /*0x67a8ec*/
  v6 = *(this + 4); /*0x67a8f9*/
  (*(void (__stdcall **)(TechnoTypeClass *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x67a8fd*/
  result = v6; /*0x67a900*/
  for ( i = 0; i < v6; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(TechnoTypeClass *, int, int, _DWORD))(*(_DWORD *)aP1->vtable0 + 16))( /*0x67a918*/
      aP1,
      *(this + 1) + 4 * i,
      4,
      0);
    result = v6; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}
}

// 0x67B480
char RulesClass::readAI(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_67B480(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *(this + 2); /*0x67b483*/
  if ( *(this + 4) >= v3 ) /*0x67b48b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x67b496*/
      return 0; /*0x67b496*/
    v4 = *(this + 5); /*0x67b498*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x67b4a8*/
      return 0; /*0x67b4af*/
  }
  v6 = *(this + 4); /*0x67b4b5*/
  v7 = *(this + 1); /*0x67b4b8*/
  *(this + 4) = v6 + 1; /*0x67b4be*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x67b4c8*/
  return 1; /*0x67b4b1*/
}
}

// 0x67BDD0
VectorClass * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__fastcall RulesClass::LoadTypeList(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
{
  char *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ(&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = (VectorClass *)&vt_TypeList_TerrainTypeClass_const; /*0x67be2c*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = (INIClass *)TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((_DWORD *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67bead*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67beb0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67beb3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67beb7*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67beba*/
    System_Load_67BFA0((_DWORD *)a1, &v17); /*0x67bec0*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bec5*/
    v17 = (VectorClass *)&vt_VectorClass_TerrainTypeClass_const; /*0x67becb*/
    v9 = (VectorClass *)v22; /*0x67bed7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      __3_YAXPAX_Z(v10); /*0x67bef8*/
      return (VectorClass *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67bf19*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67bf1c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67bf1f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67bf23*/
    *(_DWORD *)a1 = &vt_VectorClass_TerrainTypeClass_const; /*0x67bf26*/
    if ( (_DWORD *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear(a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67bf48*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( (int)v15 > 0 ) /*0x67bf62*/
          {
            do /*0x67bf76*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67bf6d*/
              ++v16; /*0x67bf73*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67bf76*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67bf7a*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67bf7d*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67bf83*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67bf89*/
    *(_DWORD *)a1 = &vt_TypeList_TerrainTypeClass_const; /*0x67bf8c*/
  }
  return (VectorClass *)a1; /*0x67bf02*/
}
}

// 0x67C430
unsigned int * RulesClass::readIQ(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_67C430(_DWORD *this, int a2, int a3)
{
  *(this + 1) = 0; /*0x67c43b*/
  *(this + 2) = a2; /*0x67c43e*/
  *((_BYTE *)this + 12) = 1; /*0x67c441*/
  *((_BYTE *)this + 13) = 0; /*0x67c445*/
  *this = &vt_VectorClass_TerrainTypeClass_const; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      *(this + 1) = a3; /*0x67c458*/
      return this; /*0x67c45e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x67c46d*/
    *((_BYTE *)this + 13) = 1; /*0x67c470*/
  }
  return this; /*0x67c45d*/
}
}
