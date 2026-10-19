// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/FileExtension_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
namespace VectorClass { int Cleanup(ObjectClass *p_this); }  // x4:ida@0x402220

// 0x48DCD0
namespace gamemd {  // G42.18 ns repair
AbstractClass * * TechnoTypeClass::GetByTypeAndIndex(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((unsigned int *)dword_A83CE4 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((unsigned int *)dword_A8B21C + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((unsigned int *)dword_A83C6C + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((unsigned int *)dword_A8E34C + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return (gamemd::AbstractClass **)(result); /*0x48dcef*/
}
}  // G42.18 ns repair
} // namespace gamemd
// 0x50BDF0
namespace gamemd {
double TechnoTypeClass::Dispatch(unsigned int * aP1)
{

  double result; // st7

  switch ( aP1->getAltitude() ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1->qE08 == 5 ) /*0x50be47*/
        result = *(float *)(this->ObjectTypeClass[13] + 292); /*0x50be4e*/
      else
        result = *(float *)(this->ObjectTypeClass[13] + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(this->ObjectTypeClass[13] + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/

}
// G42.35 static-form sync (G57e1): qualified-call sites pass explicit this
double  TechnoTypeClass::Dispatch(unsigned int *a2, void *a2_1)
{
  return this->Dispatch(a2);
} // namespace gamemd
// 0x50BEB0
namespace gamemd {
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( aP1->getAltitude() ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = this->u32_5398; /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[898] == 5 ) /*0x50befe*/
        result = this->u32_53A0; /*0x50bf00*/
      else
        result = this->u32_539C; /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = this->u32_5390; /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = this->u32_5394; /*0x50bee1*/
      break; /*0x50bee9*/
    default:
      result = 1.0; /*0x50bf16*/
      break; /*0x50bf16*/
  }
  return result; /*0x50bedc*/
}
} // namespace gamemd
// 0x6F06E0
namespace gamemd {
unsigned int * TechnoTypeClass::LoadBase(char *aP1, void *a2)
{

  int v3; // ecx
  char v4; // al
  int v5; // eax
  TeamTypeClass **v6; // edx
  int v7; // eax

  AbstractTypeClass::Constructor((int *)this, aP1); /*0x6f06ea*/
  this->u32_98 = -1; /*0x6f06f7*/
  this->Armor = -1; /*0x6f06ff*/
  this->Strength = 1; /*0x6f0705*/
  this->Image = 0; /*0x6f070b*/
  this->ImageAllocated = 0; /*0x6f0723*/
  this->AlphaImage = 0; /*0x6f073b*/
  this->MainVoxel = 0; /*0x6f0753*/
  this->TurretVoxel = 7; /*0x6f076b*/
  this->BarrelVoxel_d = -1; /*0x6f0775*/
  this->ChargerTurrets = 0; /*0x6f077b*/
  this->q0C0 = 0; /*0x6f0781*/
  this->u32_C4 = 0; /*0x6f0787*/
  this->u32_C8 = -1; /*0x6f078d*/
  this->q0CC = 0; /*0x6f0793*/
  this->u32_D0 = 0; /*0x6f0799*/
  this->u32_D4 = -1; /*0x6f079f*/
  this->q0D8 = -1; /*0x6f07a5*/
  this->u32_DC = 0; /*0x6f07ab*/
  this->FootClass_E0 = 0; /*0x6f07b1*/
  this->Tactical_E4 = 0; /*0x6f07b7*/
  this->q0E8 = 0; /*0x6f07bd*/
  this->q0EC = 9; /*0x6f07c3*/
  this->q0F0 = 1; /*0x6f07cd*/
  this->u8_F1 = 0; /*0x6f07d3*/
  this->u32_F2 = 0; /*0x6f07d9*/
  this->u32_F3 = 0; /*0x6f07df*/
  this->q0F4 = 0; /*0x6f07e5*/
  this->u32_F5 = 1; /*0x6f07eb*/
  this->u32_F6 = 0; /*0x6f07f1*/
  this->q0F7 = 0; /*0x6f07f7*/
  /* X11: vtable install elided (base-interface slot, RHS g_ptr_7F47A4) */  /*0x6f07fd*/
  /* X11: vtable install elided (implicit via TeamTypeClass virtuals 0x6f0803) */
  /* X11: vtable install elided (implicit via TeamTypeClass virtuals 0x6f080a) */
  /* X11: vtable install elided (implicit via TeamTypeClass virtuals 0x6f0811) */
  v3 = *(unsigned int *)&DataGlobal_A8EB00[432]; /*0x6f0818*/
  if ( *(int *)&DataGlobal_A8EB00[432] < *(int *)&DataGlobal_A8EB00[424] /*0x6f0857*/
    || (DataGlobal_A8EB00[429] || !*(unsigned int *)&DataGlobal_A8EB00[424])
    && *(int *)&DataGlobal_A8EB00[436] > 0
    && (v4 = (*(int (**)(unsigned char *, int, unsigned int))(*(unsigned int *)&DataGlobal_A8EB00[416] + 8))(
               &DataGlobal_A8EB00[416],
               *(unsigned int *)&DataGlobal_A8EB00[424] + *(unsigned int *)&DataGlobal_A8EB00[436],
               0),
        v3 = *(unsigned int *)&DataGlobal_A8EB00[432],
        v4) )
  {
    *(unsigned int *)&DataGlobal_A8EB00[432] = v3 + 1; /*0x6f085c*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A8EB00[420] + 4 * v3) = this; /*0x6f0868*/
    v3 = *(unsigned int *)&DataGlobal_A8EB00[432]; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
    LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = *(TeamTypeClass ***)&DataGlobal_A8EB00[420]; /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  this->u32_98 = v5; /*0x6f088b*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x6f08c5*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x6f08d2*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x6f08e1*/
  }
  return &this->AbstractClass; /*0x6f08e6*/

}
} // namespace gamemd
// 0x710AF0
namespace gamemd {
void * TechnoTypeClass::ReadINI(char * Source, int a3, void *a3_1)  // G57w11: def 同步 hpp（raw 0x00710AF0 &this->vtable3 参）
{


  ObjectTypeClass::ConstructFull((int)this, Source); /*0x710afb*/
  this->armed = 1; /*0x710b02*/
  this->weaponCount = 0; /*0x710b0e*/
  this->weapon1 = 0; /*0x710b14*/
  this->weapon2 = 0; /*0x710b1c*/
  this->eliteWeapon1 = 0; /*0x710b28*/
  this->eliteWeapon2 = 0; /*0x710b2f*/
  this->ammo = 0; /*0x710b36*/
  *&this->EliteAbilities = 0; /*0x710b3d*/
  *&this->u32_2B2 = 0; /*0x710b43*/
  *&this->u32_2B6 = 0; /*0x710b4b*/
  *&this->u32_2BA = 0; /*0x710b51*/
  this->u32_2BE = 0; /*0x710b57*/
  this->armor = 0; /*0x710b5e*/
  this->techLevel = 0; /*0x710b64*/
  this->pipScale = 0; /*0x710b6a*/
  this->speed = 0; /*0x710b70*/
  this->speedType = 0; /*0x710b76*/
  this->threatPosed = 0; /*0x710b7c*/
  this->threatAvoidValue = 0; /*0x710b82*/
  this->u32_2DC = 0; /*0x710b88*/
  this->cloakRadius = 0; /*0x710b8e*/
  this->trainable = 0; /*0x710b94*/
  this->buildLimit = 0; /*0x710b9a*/
  this->u32_2EC = 0; /*0x710ba0*/
  this->__pad_2F0 = 0; /*0x710ba6*/
  this->u32_2F4 = 0; /*0x710bac*/
  this->u32_2F8 = 500; /*0x710bb2*/
  this->unknown_double_300 = -755914244; /*0x710bbc*/
  this->u32_304 = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->u32_30C = 1067366481; /*0x710bda*/
  this->CloakingSpeed = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->q324 = 0; /*0x710bf8*/
  this->q328 = 10; /*0x710bfb*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710bfe*/
  VectorClass::Construct(&this->DebrisMaximums, 0, 0); /*0x710c0f*/
  this->u32_344 = 10; /*0x710c14*/
  this->u32_340 = 0; /*0x710c17*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->u32_350 = 298948665; /*0x710c39*/
  this->q354 = -1610610249; /*0x710c42*/
  this->q358 = -777003740; /*0x710c4b*/
  this->unknown_double_360 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->u32_36C = 0; /*0x710c60*/
  this->Weight = 0; /*0x710c6b*/
  this->u32_374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  this->u32_37C = 0x40000000; /*0x710c7d*/
  this->Size = 0; /*0x710c87*/
  this->u32_384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->u32_38C = 0; /*0x710c99*/
  this->HoverAttack = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->RollAngle = 942502757; /*0x710cb5*/
  this->u32_3A4 = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->u32_3AC = 1070596096; /*0x710ccf*/
  this->PitchAngle = 1256670343; /*0x710cd9*/
  this->u32_3B4 = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->unknown_3C0 = 0; /*0x710d00*/
  this->DeployTime = 0; /*0x710d06*/
  this->u32_3CC = 0; /*0x710d0c*/
  this->FireAngle = 8; /*0x710d12*/
  this->PipScale = 0; /*0x710d1c*/
  this->PipsDrawForAll = 0; /*0x710d22*/
  this->LeptonMindControlOffset = 70; /*0x710d28*/
  this->PixelSelectionBracketDelta = 0; /*0x710d33*/
  this->PipWrap = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor(&this->Dock, 0, 0); /*0x710d46*/
  this->u32_3FC = 10; /*0x710d4b*/
  this->u32_3F8 = 0; /*0x710d51*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  this->PoweredUnit = 0; /*0x710d7b*/
  VectorClass::Construct(&this->VoiceSelect, 0, 0); /*0x710d81*/
  this->u32_428 = 10; /*0x710d8e*/
  this->ptr_424 = 0; /*0x710d94*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710d9a*/
  VectorClass::Construct(&this->VoiceSelectEnslaved, 0, 0); /*0x710da4*/
  this->u32_444 = 10; /*0x710db1*/
  this->u32_440 = 0; /*0x710db7*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710dbd*/
  VectorClass::Construct(&this->VoiceSelectDeactivated, 0, 0); /*0x710dc7*/
  this->u32_460 = 10; /*0x710dd4*/
  this->u32_45C = 0; /*0x710dda*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710de0*/
  VectorClass::Construct(&this->VoiceMove, 0, 0); /*0x710dea*/
  this->u32_47C = 10; /*0x710df7*/
  this->u32_478 = 0; /*0x710dfd*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710e03*/
  VectorClass::Construct(&this->VoiceAttack, 0, 0); /*0x710e0d*/
  this->u32_498 = 10; /*0x710e1a*/
  this->ptr_494 = 0; /*0x710e20*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710e26*/
  VectorClass::Construct(&this->VoiceSpecialAttack, 0, 0); /*0x710e30*/
  this->u32_4B4 = 10; /*0x710e3d*/
  this->u32_4B0 = 0; /*0x710e43*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710e49*/
  VectorClass::Construct(&this->VoiceDie, 0, 0); /*0x710e53*/
  this->u32_4D0 = 10; /*0x710e58*/
  this->u32_4CC = 0; /*0x710e5e*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710e6c*/
  VectorClass::Construct(&this->VoiceFeedback, 0, 0); /*0x710e76*/
  this->u32_4EC = 10; /*0x710e83*/
  this->u32_4E8 = 0; /*0x710e89*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710e8f*/
  VectorClass::Construct(&this->MoveSound, 0, 0); /*0x710e99*/
  this->u32_508 = 10; /*0x710ea6*/
  this->u32_504 = 0; /*0x710eac*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710eb2*/
  VectorClass::Construct(&this->DieSound, 0, 0); /*0x710ebc*/
  this->u32_524 = 10; /*0x710ec1*/
  this->BuildingTypeClass_520 = 0; /*0x710ec7*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710ecd*/
  this->AuxSound1 = -1; /*0x710ed7*/
  this->AuxSound2 = -1; /*0x710edd*/
  this->CreateSound = -1; /*0x710ee3*/
  this->DamageSound = -1; /*0x710ee9*/
  this->ImpactWaterSound = -1; /*0x710eef*/
  this->ImpactLandSound = -1; /*0x710ef5*/
  this->CrashingSound = -1; /*0x710efb*/
  this->SinkingSound = -1; /*0x710f01*/
  this->VoiceFalling = -1; /*0x710f07*/
  this->VoiceCrashing = -1; /*0x710f0d*/
  this->VoiceSinking = -1; /*0x710f13*/
  this->VoiceEnter = -1; /*0x710f19*/
  this->VoiceCapture = -1; /*0x710f1f*/
  this->TurretRotateSound = -1; /*0x710f25*/
  this->EnterTransportSound = -1; /*0x710f2b*/
  this->LeaveTransportSound = -1; /*0x710f31*/
  this->DeploySound = -1; /*0x710f37*/
  this->UndeploySound = -1; /*0x710f3d*/
  this->ChronoInSound = -1; /*0x710f43*/
  this->ChronoOutSound = -1; /*0x710f49*/
  this->VoiceHarvest = -1; /*0x710f4f*/
  this->VoicePrimaryWeaponAttack = -1; /*0x710f55*/
  this->VoicePrimaryEliteWeaponAttack = -1; /*0x710f5b*/
  this->VoiceSecondaryWeaponAttack = -1; /*0x710f61*/
  this->VoiceSecondaryEliteWeaponAttack = -1; /*0x710f68*/
  this->VoiceDeploy = -1; /*0x710f75*/
  this->VoiceUndeploy = -1; /*0x710f7b*/
  this->EnterGrinderSound = -1; /*0x710f81*/
  this->LeaveGrinderSound = -1; /*0x710f87*/
  this->EnterBioReactorSound = -1; /*0x710f8d*/
  this->LeaveBioReactorSound = -1; /*0x710f93*/
  this->ActivateSound = -1; /*0x710f99*/
  this->DeactivateSound = -1; /*0x710f9f*/
  this->MindClearedSound = -1; /*0x710fa5*/
  this->MovementZone = 0; /*0x710fab*/
  this->GuardRange = 0; /*0x710fb1*/
  this->MinDebris = 0; /*0x710fb7*/
  this->MaxDebris = 0; /*0x710fbd*/
  AnimTypeVector::Constructor(&this->DebrisAnims, 0, 0); /*0x710fc3*/
  this->u32_5D8 = 10; /*0x710fc8*/
  this->u32_5D4 = 0; /*0x710fce*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x710fd4*/
  this->Passengers = 0; /*0x710fde*/
  this->OpenTopped = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  this->ResourceGatherer = 0; /*0x710ff0*/
  this->ResourceDestination = 0; /*0x710ff6*/
  this->RevealToAll = 0; /*0x710ffc*/
  this->Drainable = 0; /*0x711002*/
  this->SensorsSight = 0; /*0x711008*/
  this->DetectDisguiseRange = 0; /*0x71100e*/
  this->BombSight = 0; /*0x711014*/
  this->LeadershipRating = 5; /*0x71101a*/
  this->NavalTargeting = 0; /*0x711024*/
  this->LandTargeting = 0; /*0x71102a*/
  this->BuildTimeMultiplier = 1065353216; /*0x711030*/
  this->MindControlRingOffset = 140; /*0x71103a*/
  this->Cost = 0; /*0x711044*/
  this->Soylent = 0; /*0x71104a*/
  this->FlightLevel = -1; /*0x711050*/
  this->AirstrikeTeam = 0; /*0x711056*/
  this->EliteAirstrikeTeam = 0; /*0x71105c*/
  this->AirstrikeTeamType = 0; /*0x711062*/
  this->EliteAirstrikeTeamType = 0; /*0x711068*/
  this->AirstrikeRechargeTime = 0; /*0x71106e*/
  this->EliteAirstrikeRechargeTime = 0; /*0x711075*/
  this->TechLevel = 255; /*0x711082*/
  VectorClass::Construct(&this->Prerequisite, 0, 0); /*0x71108c*/
  this->u32_64C = 10; /*0x711099*/
  this->u32_648 = 0; /*0x71109f*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7110a5*/
  VectorClass::Construct(&this->PrerequisiteOverride, 0, 0); /*0x7110af*/
  this->VeteranAbilities = 10; /*0x7110b8*/
  this->IdleRate = 0; /*0x7110be*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7110c4*/
  this->ThreatPosed = 0; /*0x7110ce*/
  this->Points = 0; /*0x7110d4*/
  this->Speed = 0; /*0x7110da*/
  this->SpeedType = a3; /*0x7110e0*/
  this->InitialAmmo = -1; /*0x7110e6*/
  this->Ammo = -1; /*0x7110ec*/
  this->IFVMode = 0; /*0x7110f2*/
  this->AirRangeBonus = 0; /*0x7110f8*/
  this->BerserkFriendly = 0; /*0x7110fe*/
  this->SprayAttack = 0; /*0x711104*/
  this->Pushy = 0; /*0x71110a*/
  this->Natural = 0; /*0x711110*/
  this->Unnatural = 0; /*0x711116*/
  this->CloseRange = 0; /*0x71111c*/
  this->Reload = 0; /*0x711122*/
  this->EmptyReload = -1; /*0x711128*/
  this->ReloadIncrement = 0; /*0x71112e*/
  this->RadialFireSegments = 0; /*0x711134*/
  this->DeployFireWeapon = 1; /*0x71113a*/
  this->DeployFire = 0; /*0x711144*/
  this->DeployToLand = 0; /*0x71114a*/
  this->MobileFire = 1; /*0x711150*/
  this->OpportunityFire = 0; /*0x711157*/
  this->DistributedFire = 0; /*0x71115d*/
  this->DamageReducesReadiness = 0; /*0x711163*/
  this->ReadinessReductionMultiplier = 0; /*0x711169*/
  this->UnloadingClass = 0; /*0x71116f*/
  this->DeployingAnim = 0; /*0x711175*/
  this->AttackFriendlies = 0; /*0x71117b*/
  this->AttackCursorOnFriendlies = 0; /*0x711181*/
  this->UndeployDelay = -1; /*0x711187*/
  this->PreventAttackMove = 0; /*0x71118d*/
  this->OwnerFlags = 0; /*0x711193*/
  this->AIBasePlanningSide = -1; /*0x71119e*/
  this->StupidHunt = 0; /*0x7111a4*/
  this->AllowedToStartInMultiplayer = 1; /*0x7111ac*/
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(&this->CameoFile, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    this->u32_6EE = 0; /*0x7111cf*/
  }
  else
  {
    this->CameoFile = 0; /*0x7111bb*/
  }
  this->Cameo = 0; /*0x7111da*/
  this->CameoAllocated = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(&this->AltCameoFile, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    this->u32_70D = 0; /*0x711204*/
  }
  else
  {
    this->AltCameoFile = 0; /*0x7111f0*/
  }
  this->AltCameo = 0; /*0x71120a*/
  this->AltCameoAllocated = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->TurretOffset = 0; /*0x711222*/
  this->CanBeHidden = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor(&this->Explosion, 0, 0); /*0x71123d*/
  this->u32_740 = 10; /*0x71124a*/
  this->u32_73C = 0; /*0x711250*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711256*/
  AnimTypeVector::Constructor(&this->DestroyAnim, 0, 0); /*0x711260*/
  this->u32_75C = 10; /*0x711265*/
  this->ptr_758 = 0; /*0x71126b*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  this->u32_76C = 0; /*0x711288*/
  this->ptr_770 = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  this->u32_78C = 10; /*0x7112ae*/
  this->VoxelAnimList_Embed = 0; /*0x7112b4*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  this->u32_7A8 = 10; /*0x7112c9*/
  this->u32_7A4 = 0; /*0x7112cf*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7112d5*/
  this->DamageSmokeOffset = 0; /*0x7112df*/
  this->u32_7B4 = 0; /*0x7112e5*/
  this->u32_7B8 = 0; /*0x7112eb*/
  this->DamSmkOffScrnRel = 0; /*0x7112f1*/
  this->DestroySmokeOffset = 0; /*0x7112f7*/
  this->u32_7C4 = 0; /*0x7112fd*/
  this->u32_7C8 = 0; /*0x711303*/
  this->RefinerySmokeOffsetOne = 0; /*0x711309*/
  this->u32_7D0 = 0; /*0x71130f*/
  this->u32_7D4 = 0; /*0x711315*/
  this->RefinerySmokeOffsetTwo = 0; /*0x71131b*/
  this->u32_7DC = 0; /*0x711321*/
  this->u32_7E0 = 0; /*0x711327*/
  this->RefinerySmokeOffsetThree = 0; /*0x71132d*/
  this->u32_7E8 = 0; /*0x711333*/
  this->u32_7EC = 0; /*0x711339*/
  this->RefinerySmokeOffsetFour = 0; /*0x71133f*/
  this->u32_7F4 = 0; /*0x711345*/
  this->u32_7F8 = 0; /*0x71134b*/
  this->ShadowIndex = 0; /*0x711351*/
  this->Storage = 0; /*0x711357*/
  this->TurretNotExportedOnGround = 0; /*0x71135d*/
  this->Gunner = 0; /*0x711363*/
  this->HasTurretTooltips = 0; /*0x711369*/
  this->TurretCount = 0; /*0x71136f*/
  this->IsChargeTurret = 0; /*0x711375*/
  this->__pad_A90 = 0; /*0x71137b*/
  this->TypeImmune = 0; /*0x711381*/
  this->MoveToShroud = 1; /*0x711387*/
  this->Trainable = 1; /*0x71138e*/
  this->DamageSparks = 0; /*0x711395*/
  this->TargetLaser = 0; /*0x71139b*/
  this->ImmuneToVeins = 0; /*0x7113a1*/
  this->TiberiumHeal = 0; /*0x7113a7*/
  this->CloakStop = 0; /*0x7113ad*/
  this->IsTrain = 0; /*0x7113b3*/
  this->IsDropship = 0; /*0x7113b9*/
  this->ToProtect = 0; /*0x7113bf*/
  this->Disableable = 1; /*0x7113c5*/
  this->Unbuildable = 0; /*0x7113cc*/
  this->DoubleOwned = 0; /*0x7113d2*/
  this->Invisible = 0; /*0x7113d8*/
  this->RadarVisible = 0; /*0x7113de*/
  this->HasPrimary = 0; /*0x7113e4*/
  this->Sensors = 0; /*0x7113ea*/
  this->Nominal = 0; /*0x7113f0*/
  this->DontScore = 0; /*0x7113f6*/
  this->DamageSelf = 0; /*0x7113fc*/
  this->Turret = 0; /*0x711402*/
  this->TurretRecoil = 0; /*0x711412*/
  this->TurretAnimData = 2; /*0x711418*/
  this->u32_CA8 = 1; /*0x71141e*/
  this->u32_CAC = 1; /*0x711424*/
  this->u32_CB0 = 1; /*0x71142a*/
  this->unknown_bool_CB4 = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  this->u32_CBC = 1; /*0x71143c*/
  this->u32_CC0 = 1; /*0x711442*/
  this->u32_CC4 = 1; /*0x711448*/
  this->unknown_bool_CC8 = 0; /*0x71144e*/
  this->u32_CCC = 1; /*0x711454*/
  this->u32_CCD = 0; /*0x71145a*/
  this->u32_CCE = 0; /*0x711460*/
  this->u32_CCF = 0; /*0x711466*/
  this->u8_CD0 = 0; /*0x71146c*/
  this->Naval = 0; /*0x711472*/
  this->Remapable = 0; /*0x711478*/
  this->Cloakable = 0; /*0x71147e*/
  this->__pad_CD4 = 0; /*0x711484*/
  this->u32_CD5 = 0; /*0x71148a*/
  this->u32_CD8 = 0; /*0x711490*/
  this->u32_D0C = 0; /*0x711496*/
  this->u32_D10 = 0; /*0x71149c*/
  this->u32_D14 = 0; /*0x7114a2*/
  this->u32_D15 = 0; /*0x7114a8*/
  this->SlavesNumber = 0; /*0x7114ae*/
  this->SlaveRegenRate = 1065353216; /*0x7114b4*/
  this->__pad_D20 = 0; /*0x7114be*/
  this->u32_D21 = 0; /*0x7114c4*/
  this->u32_D22 = 0; /*0x7114ca*/
  this->u32_D23 = 0; /*0x7114d0*/
  this->u32_D24 = 0; /*0x7114d6*/
  this->u32_D25 = 0; /*0x7114dc*/
  this->u32_D26 = 0; /*0x7114e2*/
  this->u32_D27 = 0; /*0x7114e8*/
  this->u32_D28 = 0; /*0x7114ee*/
  this->u32_D29 = 0; /*0x7114f4*/
  this->u32_D2A = 0; /*0x7114fa*/
  this->u32_D2B = 1; /*0x711500*/
  this->u32_D2C = 0; /*0x711506*/
  this->u32_D2D = 0; /*0x71150c*/
  this->u32_D2F = 0; /*0x711512*/
  this->u8_D30 = 0; /*0x711518*/
  this->u32_D31 = 0; /*0x71151e*/
  this->u32_D32 = 0; /*0x711524*/
  this->u32_D33 = 1; /*0x71152a*/
  this->u32_D34 = 1; /*0x711530*/
  this->u32_D37 = 0; /*0x711536*/
  this->u32_D39 = 0; /*0x71153c*/
  this->u32_D3A = 1; /*0x711542*/
  this->u32_D3C = 0; /*0x711548*/
  this->u32_D3D = 0; /*0x71154e*/
  this->BalloonHover = 0; /*0x711554*/
  this->SuppressionThreshold = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->JumpjetCrash = -1; /*0x711572*/
  this->__pad_D54 = 0; /*0x711578*/
  this->JumpjetAccel = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->__pad_D60 = 0; /*0x71158a*/
  this->JumpjetDeviation = 0; /*0x711590*/
  this->__pad_D68 = 0; /*0x711596*/
  this->u32_D69 = 0; /*0x71159c*/
  this->u32_D6A = 0; /*0x7115a2*/
  this->u32_D6C = 0; /*0x7115a8*/
  this->qD70 = 4; /*0x7115ae*/
  this->RequiredHouses = 14; /*0x7115b8*/
  this->ForbiddenHouses = 1084227584; /*0x7115c7*/
  this->SecretHouses = 1084227584; /*0x7115cd*/
  this->__pad_D80 = 500; /*0x7115d3*/
  this->SecondSpawnOffset = 0x40000000; /*0x7115dd*/
  this->u32_D88 = 1041865114; /*0x7115e7*/
  this->u32_D8C = 0; /*0x7115f1*/
  this->__pad_D90 = 40; /*0x7115f7*/
  this->JumpJet = 0; /*0x711601*/
  this->Crashable = 0; /*0x711607*/
  this->u32_D98 = 0; /*0x71160d*/
  this->u32_D99 = 1; /*0x711613*/
  this->u32_D9A = 1; /*0x71161a*/
  this->u32_D9B = 0; /*0x711621*/
  this->u32_D9C = 0; /*0x711627*/
  this->u32_D9D = 0; /*0x71162d*/
  this->ZFudgeBridge = -1; /*0x711633*/
  this->PaletteFile = -1; /*0x711639*/
  this->u32_DA8 = -1; /*0x71163f*/
  this->u32_DAC = 0; /*0x711645*/
  this->u32_DBC = 0; /*0x71164b*/
  this->u32_DBD = 1; /*0x711651*/
  this->u32_DBE = 0; /*0x711658*/
  this->u32_DBF = 0; /*0x71165e*/
  this->qDC0 = 10; /*0x711664*/
  this->Palette = 5; /*0x71166a*/
  this->__pad_DC8 = 10; /*0x711674*/
  this->u32_DCC = 0; /*0x71167a*/
  this->u32_DF0 = 0; /*0x711680*/
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711686) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x71168c) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711693) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x71169a) */
  this->u32_DD0 = 0; /*0x7116a7*/
  this->IsLogic_d = 1; /*0x7116ad*/
  (*(void (**)(char *))&this->DebrisTypes->IsInitialized)(&this->DebrisTypes); /*0x7116b6*/
  (*(void (**)(char *))&this->DebrisAnims->IsInitialized)(&this->DebrisAnims); /*0x7116c5*/
  (*(void (**)(char *))&this->DebrisMaximums->IsInitialized)(&this->DebrisMaximums); /*0x7116d4*/
  (*(void (**)(char *))&this->Dock->IsInitialized)(&this->Dock); /*0x7116e3*/
  unsigned int *v4 = &this->q8A8; // eax /*0x7116e6*/
  int v5 = 18; // ecx /*0x7116ec*/
  do /*0x71170f*/
  {
    *(v4 - 4) = 0; /*0x7116f4*/
    unsigned int *v6 = v4 - 3; // edi /*0x7116f7*/
    *v4 = 0; /*0x7116f9*/
    v4[1] = 0; /*0x7116fd*/
    *v6 = 0; /*0x711700*/
    v4 += 7; /*0x711702*/
    --v5; /*0x711705*/
    v6[1] = 0; /*0x711706*/
    v6[2] = 0; /*0x711709*/
    *((unsigned char *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  unsigned int *v7 = &this->qAA4; // eax /*0x711711*/
  int v8 = 18; // ecx /*0x711717*/
  do /*0x71173a*/
  {
    *(v7 - 4) = 0; /*0x71171f*/
    unsigned int *v9 = v7 - 3; // edi /*0x711722*/
    *v7 = 0; /*0x711724*/
    v7[1] = 0; /*0x711728*/
    *v9 = 0; /*0x71172b*/
    v7 += 7; /*0x71172d*/
    --v8; /*0x711730*/
    v9[1] = 0; /*0x711731*/
    v9[2] = 0; /*0x711734*/
    *((unsigned char *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  unsigned int *v10 = &this->u32_85C; // eax /*0x71173c*/
  int v11 = 5; // ecx /*0x711742*/
  do /*0x711757*/
  {
    unsigned int *v12 = v10; // edi /*0x711747*/
    v10 += 3; /*0x71174b*/
    --v11; /*0x71174e*/
    *v12 = 0; /*0x71174f*/
    v12[1] = 0; /*0x711751*/
    v12[2] = 0; /*0x711754*/
  }
  while ( v11 ); /*0x711757*/
  this->u32_DB0 = 0; /*0x711763*/
  unsigned int *v13 = &this->u32_CF4; // eax /*0x711765*/
  this->u32_DB4 = 0; /*0x71176b*/
  int v14 = 6; // ecx /*0x71176e*/
  this->u32_DB8 = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(&this->TurretWeapon, 0xFFu, 0x48u); /*0x71178e*/
  if ( dword_B0F680 < dword_B0F678 /*0x7117c3*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F684 + dword_B0F678,
         0) )
  {
    int v15; // eax
    v15 = dword_B0F680++; /*0x7117d0*/
    *((unsigned int *)dword_B0F674 + v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(stru_A8EB00 + 8))(
         &stru_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    int v16; // eax
    v16 = dword_A8EB10++; /*0x711823*/
    *((unsigned int *)dword_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/

}
} // namespace gamemd
// 0x711840
namespace gamemd {
void TechnoTypeClass::Construct(int aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{
  int v3; // eax
  int v4; // ecx

  ObjectTypeClass::Construct(aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0((TechnoTypeClass *)this->qC24 + 44), aP1); /*0x711859*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71185e*/
  IntDynamicVector::Construct(&this->u32_CC0, aP1); /*0x71186d*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711872*/
  this->unknown_3C0 = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1(&this->u32_98, aP1); /*0x711889*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71188e*/
  IntDynamicVector::Construct(&this->q1050, aP1); /*0x71189e*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7118a3*/
  IntDynamicVector::Construct(&this->q10C0, aP1); /*0x7118b3*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7118b8*/
  IntDynamicVector::Construct(&this->q1130, aP1); /*0x7118c8*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7118cd*/
  IntDynamicVector::Construct((IntDynamicVector *)this->q1198 + 8), aP1); /*0x7118dd*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7118e2*/
  IntDynamicVector::Construct(&this->q1210, aP1); /*0x7118f2*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7118f7*/
  IntDynamicVector::Construct(&this->q1280, aP1); /*0x711907*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71190c*/
  IntDynamicVector::Construct((IntDynamicVector *)this->q12E8 + 8), aP1); /*0x71191c*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711921*/
  IntDynamicVector::Construct(&this->u32_98, aP1); /*0x711931*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711936*/
  IntDynamicVector::Construct(&this->u32_98, aP1); /*0x711946*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71194b*/
  IntDynamicVector::Construct(&this->u32_98, aP1); /*0x71195b*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711960*/
  ObjectTypeClass::CheckFlag(&this->q1710, aP1); /*0x711970*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711975*/
  IntDynamicVector::Construct((IntDynamicVector *)this->q18B0 + 48), aP1); /*0x711985*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71198a*/
  IntDynamicVector::Construct((IntDynamicVector *)this->q1948 + 8), aP1); /*0x71199a*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x71199f*/
  this->CameoFile = 0; /*0x7119ac*/
  this->AltCameoFile = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag((ObjectTypeClass *)this->u8_1C34 + 124), aP1); /*0x7119bb*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7119c0*/
  ObjectTypeClass::CheckFlag(&this->u32_98, aP1); /*0x7119d0*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7119df*/
  TypeList::ParticleConstructor((TypeList *)this->u8_1C34 + 428), 0, 0); /*0x7119e6*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x7119eb*/
  TypeList::ParticleConstructor(&this->u32_98, 0, 0); /*0x7119fb*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x711a0a*/
  this->TurretAnimData = 2; /*0x711a10*/
  this->u32_CA8 = 1; /*0x711a16*/
  this->u32_CAC = 1; /*0x711a1c*/
  this->u32_CB0 = 1; /*0x711a22*/
  this->unknown_bool_CB4 = 0; /*0x711a28*/
  this->BarrelAnimData = 2; /*0x711a2e*/
  this->u32_CBC = 1; /*0x711a34*/
  this->DebrisMaximums = 1; /*0x711a3a*/
  this->u32_CC4 = 1; /*0x711a40*/
  this->unknown_bool_CC8 = 0; /*0x711a46*/
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711a4c) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711a52) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711a59) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711a60) */
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
    LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(uint8_t (**)(TechnoTypeClass *, int, unsigned int))(stru_A8EB00.ptr_0 + 8))(
              &stru_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((unsigned int *)dword_A8EB04 + v3) = this; /*0x711acb*/
    return this; /*0x711acb*/
  }
  dword_A8EB04 = dword_A8EB04; /*0x711a72*/
  while ( *dword_A8EB04 != this ) /*0x711a7a*/
  {
    ++v4; /*0x711a7c*/
    ++dword_A8EB04; /*0x711a7d*/
    if ( v4 >= dword_A8EB10 ) /*0x711a82*/
      goto LABEL_5; /*0x711a82*/
  }
  return this; /*0x711ad0*/
}
} // namespace gamemd
// 0x711AE0
namespace gamemd {
int TechnoTypeClass::DTOR(void *a1)
{

  char v2 = a1->CameoAllocated; // al /*0x711ae7*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7F4EAC) */  /*0x711aed*/
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711af5) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711afc) */
  /* X11: vtable install elided (implicit via TechnoTypeClass virtuals 0x711b03) */
  if ( v2 && a1->Cameo ) /*0x711b0c*/
  {
    operator delete((void *)(a1->Cameo)); /*0x711b17*/
    a1->Cameo = 0; /*0x711b1f*/
    a1->CameoAllocated = 0; /*0x711b25*/
  }
  if ( a1->AltCameoAllocated && a1->AltCameo ) /*0x711b33*/
  {
    operator delete((void *)(a1->AltCameo)); /*0x711b3e*/
    a1->AltCameo = 0; /*0x711b46*/
    a1->AltCameoAllocated = 0; /*0x711b4c*/
  }
  void *v17; // [esp+8h] [ebp-4h] BYREF
  v17 = a1; /*0x711b62*/
  int v3; // eax
  v3 = (*(int (**)(unsigned int *, void **))(dword_B0F670 + 16))(&dword_B0F670, &v17); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem((DynamicVector *)&dword_B0F670, v3); /*0x711b74*/
  v17 = a1; /*0x711b89*/
  int v4; // eax
  v4 = (*(int (**)(TechnoTypeClass *, void **))(stru_A8EB00.ptr_0 + 16))(&stru_A8EB00, &v17); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&stru_A8EB00, v4); /*0x711b9b*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711ba7*/
  VectorClass::Cleanup((int)(a1 + 1940)); /*0x711bad*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711bb8*/
  VectorClass::Cleanup((int)(a1 + 1912)); /*0x711bbe*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(&a1->DestroyAnim); /*0x711bcf*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(&a1->Explosion); /*0x711be0*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711bf0*/
  VectorClass::Destroy((int)(a1 + 1620)); /*0x711bf2*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711bfd*/
  VectorClass::Destroy((int)(a1 + 1592)); /*0x711bff*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(&a1->DebrisAnims); /*0x711c10*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c1b*/
  VectorClass::Destroy((int)(a1 + 1296)); /*0x711c1d*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c28*/
  VectorClass::Destroy((int)(a1 + 1268)); /*0x711c2a*/
  void *v5; // eax
  v5 = (void *)a1->VoiceFeedback_Items; /*0x711c2f*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c35*/
  if ( v5 && a1->VoiceFeedback_FlagByte ) /*0x711c3f*/
  {
    operator delete((void *)(v5)); /*0x711c48*/
    a1->VoiceFeedback_Items = 0; /*0x711c50*/
  }
  a1->VoiceFeedback_FlagByte = 0; /*0x711c56*/
  a1->VoiceFeedback_Capacity = 0; /*0x711c5c*/
  void *v6; // eax
  v6 = (void *)a1->IntList_H_Items; /*0x711c62*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c68*/
  if ( v6 && a1->IntList_H_FlagByte ) /*0x711c72*/
  {
    operator delete((void *)(v6)); /*0x711c7b*/
    a1->IntList_H_Items = 0; /*0x711c83*/
  }
  a1->IntList_H_FlagByte = 0; /*0x711c89*/
  a1->IntList_H_Capacity = 0; /*0x711c8f*/
  void *v7; // eax
  v7 = (void *)a1->IntList_G_Items; /*0x711c95*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711c9b*/
  if ( v7 && a1->IntList_G_FlagByte ) /*0x711ca5*/
  {
    operator delete((void *)(v7)); /*0x711cae*/
    a1->IntList_G_Items = 0; /*0x711cb6*/
  }
  a1->IntList_G_FlagByte = 0; /*0x711cbc*/
  a1->IntList_G_Capacity = 0; /*0x711cc2*/
  void *v8; // eax
  v8 = (void *)a1->IntList_F_Items; /*0x711cc8*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711cce*/
  if ( v8 && a1->IntList_F_FlagByte ) /*0x711cd8*/
  {
    operator delete((void *)(v8)); /*0x711ce1*/
    a1->IntList_F_Items = 0; /*0x711ce9*/
  }
  a1->IntList_F_FlagByte = 0; /*0x711cef*/
  a1->IntList_F_Capacity = 0; /*0x711cf5*/
  void *v9; // eax
  v9 = (void *)a1->IntList_E_Items; /*0x711cfb*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711d01*/
  if ( v9 && a1->IntList_E_FlagByte ) /*0x711d0b*/
  {
    operator delete((void *)(v9)); /*0x711d14*/
    a1->IntList_E_Items = 0; /*0x711d1c*/
  }
  a1->IntList_E_FlagByte = 0; /*0x711d22*/
  a1->IntList_E_Capacity = 0; /*0x711d28*/
  void *v10; // eax
  v10 = (void *)a1->IntList_D_Items; /*0x711d2e*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711d34*/
  if ( v10 && a1->IntList_D_FlagByte ) /*0x711d3e*/
  {
    operator delete((void *)(v10)); /*0x711d47*/
    a1->IntList_D_Items = 0; /*0x711d4f*/
  }
  a1->IntList_D_FlagByte = 0; /*0x711d55*/
  a1->IntList_D_Capacity = 0; /*0x711d5b*/
  void *v11; // eax
  v11 = (void *)a1->IntList_C_Items; /*0x711d61*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711d67*/
  if ( v11 && a1->IntList_C_FlagByte ) /*0x711d71*/
  {
    operator delete((void *)(v11)); /*0x711d7a*/
    a1->IntList_C_Items = 0; /*0x711d82*/
  }
  a1->IntList_C_FlagByte = 0; /*0x711d88*/
  a1->IntList_C_Capacity = 0; /*0x711d8e*/
  void *v12; // eax
  v12 = (void *)a1->IntList_B_Items; /*0x711d94*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711d9a*/
  if ( v12 && a1->IntList_B_FlagByte ) /*0x711da4*/
  {
    operator delete((void *)(v12)); /*0x711dad*/
    a1->IntList_B_Items = 0; /*0x711db5*/
  }
  a1->IntList_B_FlagByte = 0; /*0x711dbb*/
  a1->IntList_B_Capacity = 0; /*0x711dc1*/
  void *v13; // eax
  v13 = (void *)a1->BuildingTypeList_Items; /*0x711dc7*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711dcd*/
  if ( v13 && a1->BuildingTypeList_FlagByte ) /*0x711ddb*/
  {
    operator delete((void *)(v13)); /*0x711de4*/
    a1->BuildingTypeList_Items = 0; /*0x711dec*/
  }
  a1->BuildingTypeList_FlagByte = 0; /*0x711df2*/
  a1->BuildingTypeList_Capacity = 0; /*0x711df8*/
  void *v14; // eax
  v14 = (void *)a1->IntList_A_Items; /*0x711dfe*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711e04*/
  if ( v14 && a1->IntList_A_FlagByte ) /*0x711e0f*/
  {
    operator delete((void *)(v14)); /*0x711e18*/
    a1->IntList_A_Items = 0; /*0x711e20*/
  }
  a1->IntList_A_FlagByte = 0; /*0x711e26*/
  a1->IntList_A_Capacity = 0; /*0x711e2c*/
  void *v15; // eax
  v15 = (void *)a1->VoxelAnimList_Items; /*0x711e32*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E8500) */  /*0x711e38*/
  if ( v15 && a1->VoxelAnimList_FlagByte ) /*0x711e46*/
  {
    operator delete((void *)(v15)); /*0x711e4f*/
    a1->VoxelAnimList_Items = 0; /*0x711e57*/
  }
  a1->VoxelAnimList_FlagByte = 0; /*0x711e5f*/
  a1->VoxelAnimList_Capacity = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct((int)a1); /*0x711e70*/
}
} // namespace gamemd
// 0x711F00
namespace gamemd {
int TechnoTypeClass::ComputeValueSimple(float * a2)
{


  if ( !a2 ) /*0x711f0d*/
    return (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f52*/
  float v5; // [esp+Ch] [ebp-4h]
  v5 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f17*/
  float ThreatMultiplier; // [esp+8h] [ebp-8h]
  ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711f27*/
  TechnoTypeClass *v6; // [esp+14h] [ebp+4h]
  v6 = (TechnoTypeClass *)(*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711f31*/
  int result; // eax
  (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt((double)(int)v6 * ThreatMultiplier * v5)) & 0xFFFF); /*0x711f41*/
  return result; /*0x711f46*/

}
} // namespace gamemd
// 0x711F60
namespace gamemd {
int TechnoTypeClass::ComputeValue(void * a2, float a3)
{

  int result; // eax

  float v9; // [esp+8h] [ebp-8h]
  v9 = *(double *)(*(unsigned int *)&g_RulesClass_Instance + 5944); /*0x711f76*/
  if ( LOBYTE(a3) ) /*0x711f7c*/
    v9 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    float v12; // [esp+18h] [ebp+8h]
    v12 = TechnoTypeClass::Dispatch((TechnoTypeClass *)a2, this); /*0x711f9a*/
    float ThreatMultiplier; // [esp+Ch] [ebp-4h]
    ThreatMultiplier = TechnoTypeClass::GetThreatMultiplier((float *)a2, this); /*0x711fac*/
    if ( *&this->Soylent ) /*0x711fa6*/
    {
      (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt((double)*&this->u32_98 * v12)) & 0xFFFF); /*0x711fc0*/
    }
    else
    {
      TechnoTypeClass *v11; // [esp+14h] [ebp+4h]
      v11 = (TechnoTypeClass *)(*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x711fd7*/
      int v6; // eax
      (v6) = ((v6) & ~0xFFFF) | ((Math::RoundToInt((double)(int)v11 * ThreatMultiplier * v12)) & 0xFFFF); /*0x711fe7*/
      int v7 = v6; // esi /*0x711fec*/
      int v13; // [esp+18h] [ebp+8h]
      v13 = v6; /*0x711ff0*/
      if ( (unsigned __int8)House::IsCurrentPlayer((House *)a2) ) /*0x711ff4*/
      {
        int v8; // eax
        (v8) = ((v8) & ~0xFFFF) | ((Math::RoundToInt((double)v13 * v9)) & 0xFFFF); /*0x712005*/
        return v8; /*0x71200a*/
      }
      return v7; /*0x71200c*/
    }
  }
  else
  {
    int v14; // [esp+18h] [ebp+8h]
    v14 = (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 172))(this); /*0x712020*/
    (result) = ((result) & ~0xFFFF) | ((Math::RoundToInt((double)v14 * v9)) & 0xFFFF); /*0x71202c*/
  }
  return result; /*0x711fc5*/

}
} // namespace gamemd
// 0x7162F0
namespace gamemd {
DynamicVectorClass_flat * * TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{

  int v37; // [esp+284h] [ebp-20Ch] BYREF

  TypeList *v3 = &aP0->q3E8; // ebp /*0x716307*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71630f*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x716320*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71632f*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71633e*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71634d*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71635c*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71636b*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x71637a*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x716389*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x716398*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163a7*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163b6*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163c5*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163d4*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163e3*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x7163f2*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x716401*/
  (*(void (**)(unsigned char *))(*&aP0->u32_98 + 12))(&aP0->u32_98); /*0x716410*/
  int result; // eax
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->JumpjetAccel); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0->SuppressionThreshold); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_98); /*0x7164f0*/
    if ( aP0 != (TechnoTypeClass *)-1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    int v36; // [esp+280h] [ebp-210h] BYREF
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71650c*/
    int i; // [esp+288h] [ebp-208h]
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3((DynamicVector *)v3, &v37); /*0x716535*/
    }
    if ( aP0 != (TechnoTypeClass *)-788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor(&aP0->u32_98); /*0x716551*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716562*/
    int j; // ebp
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2(&aP0->u32_98, &v37); /*0x716585*/
    }
    if ( aP0 != (TechnoTypeClass *)-1476 ) /*0x716599*/
      AnimTypeList::Constructor(&aP0->u32_98); /*0x71659d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165ae*/
    int k; // ebx
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4(&aP0->u32_98, &v37); /*0x7165d1*/
    }
    if ( aP0 != (TechnoTypeClass *)-1044 ) /*0x7165e5*/
      TypeList::Construct(&aP0->u32_98); /*0x7165e9*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165fa*/
    int m; // ebx
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x71661d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1072 ) /*0x716631*/
      TypeList::Construct(&aP0->u32_98); /*0x716635*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716646*/
    int n; // ebx
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x716669*/
    }
    if ( aP0 != (TechnoTypeClass *)-1100 ) /*0x71667d*/
      TypeList::Construct(&aP0->u32_98); /*0x716681*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716692*/
    int ii; // ebx
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x7166b5*/
    }
    if ( aP0 != (TechnoTypeClass *)-1128 ) /*0x7166c9*/
      TypeList::Construct(&aP0->u32_98); /*0x7166cd*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7166de*/
    int jj; // ebx
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x716701*/
    }
    if ( aP0 != (TechnoTypeClass *)-1156 ) /*0x716715*/
      TypeList::Construct(&aP0->u32_98); /*0x716719*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71672a*/
    int kk; // ebx
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x71674d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1184 ) /*0x716761*/
      TypeList::Construct(&aP0->u32_98); /*0x716765*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716776*/
    int mm; // ebx
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x716799*/
    }
    if ( aP0 != (TechnoTypeClass *)-1212 ) /*0x7167ad*/
      TypeList::Construct(&aP0->u32_98); /*0x7167b1*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7167c2*/
    int nn; // ebx
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x7167e5*/
    }
    if ( aP0 != (TechnoTypeClass *)-1240 ) /*0x7167f9*/
      TypeList::Construct(&aP0->u32_98); /*0x7167fd*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71680e*/
    int i1; // ebx
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x716831*/
    }
    if ( aP0 != (TechnoTypeClass *)-1268 ) /*0x716845*/
      TypeList::Construct(&aP0->u32_98); /*0x716849*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71685a*/
    int i2; // ebx
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x71687d*/
    }
    if ( aP0 != (TechnoTypeClass *)-1296 ) /*0x716891*/
      TypeList::Construct(&aP0->u32_98); /*0x716895*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168a6*/
    int i3; // ebx
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x7168c9*/
    }
    if ( aP0 != (TechnoTypeClass *)-1836 ) /*0x7168dd*/
      AnimTypeList::Constructor(&aP0->u32_98); /*0x7168e1*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168f2*/
    int i4; // ebx
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4(&aP0->u32_98, &v37); /*0x716915*/
    }
    if ( aP0 != (TechnoTypeClass *)-1864 ) /*0x716929*/
      AnimTypeList::Constructor(&aP0->u32_98); /*0x71692d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71693e*/
    int i5; // ebx
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4(&aP0->u32_98, &v37); /*0x716961*/
    }
    if ( aP0 != (TechnoTypeClass *)-816 ) /*0x716975*/
      TypeList::Construct(&aP0->u32_98); /*0x716979*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71698a*/
    int i6; // ebx
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x7169ad*/
    }
    if ( aP0 != (TechnoTypeClass *)-1592 ) /*0x7169c1*/
      TypeList::Construct(&aP0->u32_98); /*0x7169c5*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7169d6*/
    int i7; // ebx
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x7169f9*/
    }
    if ( aP0 != (TechnoTypeClass *)-1620 ) /*0x716a0d*/
      TypeList::Construct(&aP0->u32_98); /*0x716a11*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a22*/
    int i8; // ebx
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt(&aP0->u32_98, &v37); /*0x716a45*/
    }
    if ( aP0 != (TechnoTypeClass *)-1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor(&aP0->u32_98); /*0x716a5d*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a6e*/
    int i9; // ebx
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack(&aP0->u32_98, &v37); /*0x716a91*/
    }
    if ( aP0 != (TechnoTypeClass *)-1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor(&aP0->u32_98); /*0x716aa9*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716aba*/
    int i10; // ebx
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack(&aP0->u32_98, &v37); /*0x716add*/
    }
    int i11; // esi
    for ( i11 = 0; i11 < *&aP0->u32_98; ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i11)); /*0x716b04*/
    int i12; // esi
    for ( i12 = 0; i12 < *&aP0->u32_98; ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i12)); /*0x716b2f*/
    int i13; // esi
    for ( i13 = 0; i13 < *&aP0->u32_98; ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i13)); /*0x716b5a*/
    int i14; // esi
    for ( i14 = 0; i14 < *&aP0->u32_98; ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i14)); /*0x716b85*/
    int i15; // esi
    for ( i15 = 0; i15 < *&aP0->u32_98; ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i15)); /*0x716bb0*/
    int *v29 = &aP0->u32_98; // esi /*0x716bc0*/
    int v30 = 18; // ebx /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    int *v31 = &aP0->u32_98; // esi /*0x716bdc*/
    int v32 = 18; // ebx /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    int i16; // esi
    for ( i16 = 0; i16 < *&aP0->u32_98; ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i16)); /*0x716c15*/
    int i17; // esi
    for ( i17 = 0; i17 < *&aP0->u32_98; ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*&aP0->u32_98 + 4 * i17)); /*0x716c40*/
    char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF
    _makepath(Buffer, 0, 0, &aP0->u32_98, Ext); /*0x716c66*/
    aP0->ObjectTypeClass[41] = (int)SearchMIXFile(Buffer, 0); /*0x716c96*/
    char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
    INIClass::GetString( /*0x716c9c*/
      (INIClass *)&DataGlobal_887180,
      &aP0->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_Key_TRUCKA.__pad_1714[80],
      Filename,
      256);
    if ( !_strcmpi(Filename, &g_INI_Key_TRUCKA.__pad_1714[80]) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (INIClass *)&DataGlobal_887180,
        (unsigned __int8 *)&aP0->ObjectTypeClass[9],
        (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
        &g_INI_Key_TRUCKA.__pad_1714[80],
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *&aP0->u32_98 = 0; /*0x716cfe*/
    void *v35; // eax
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *&aP0->u32_98 = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *&aP0->u32_98 = SearchMIXFile(&stru_820320.?[143], 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (INIClass *)&DataGlobal_887180,
      &aP0->?[276],
      (unsigned __int8 *)&g_INI_Key_TRUCKA.?,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *&aP0->u32_98 = 0; /*0x716d69*/
    *&aP0->u32_98 = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (INIClass *)&DataGlobal_887180,
      &aP0->?[276],
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)&aP0->? + 1,
      32);
    if ( BYTE1(aP0->u32_98) ) /*0x716d98*/
      *(int *)aP0->u32_98 + 1) = FileExtension::MapHandler((const char *)&aP0->u32_98 + 1); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/

}
} // namespace gamemd
// 0x716DC0
namespace gamemd {
int TechnoTypeClass::SaveLoad_Prefix_0(unsigned int *a2, int *a3, int a4, int a5, void *a5_1)
{


  int result; // eax
  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)a5, (int)a5, (int)a5); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    int v7 = *a5; // edx /*0x716de4*/
    a5 = *(int **)&a5->?[788]; /*0x716df1*/
    int v5; // ebx
    (*(void (**)(unsigned int *, int **, int, unsigned int, int))(v7 + 16))(a5, &a5, 4, 0, v5); /*0x716df5*/
    int i; // ebx
    for ( i = 0; i < a5; ++i ) /*0x716e00*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[776] + 4 * i, 4, 0); /*0x716e13*/
    int v9 = *a5; // edx /*0x716e23*/
    a5 = *(unsigned int *)&a5->?[576]; /*0x716e2f*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v9 + 16))(a5, &a5, 4, 0); /*0x716e33*/
    int j; // ebx
    for ( j = 0; j < a5; ++j ) /*0x716e3e*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[564] + 4 * j, 4, 0); /*0x716e51*/
    int v11 = *a5; // edx /*0x716e61*/
    a5 = *(unsigned int *)&a5->?[1264]; /*0x716e6d*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v11 + 16))(a5, &a5, 4, 0); /*0x716e71*/
    int k; // ebx
    for ( k = 0; k < a5; ++k ) /*0x716e7c*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[1252] + 4 * k, 4, 0); /*0x716e8f*/
    int v13 = *a5; // edx /*0x716e9f*/
    a5 = *(unsigned int *)&a5->?[832]; /*0x716eab*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v13 + 16))(a5, &a5, 4, 0); /*0x716eaf*/
    int m; // ebx
    for ( m = 0; m < a5; ++m ) /*0x716eba*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[820] + 4 * m, 4, 0); /*0x716ecd*/
    int v15 = *a5; // edx /*0x716edd*/
    a5 = *(unsigned int *)&a5->?[860]; /*0x716ee9*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v15 + 16))(a5, &a5, 4, 0); /*0x716eed*/
    int n; // ebx
    for ( n = 0; n < a5; ++n ) /*0x716ef8*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[848] + 4 * n, 4, 0); /*0x716f0b*/
    int v17 = *a5; // edx /*0x716f1b*/
    a5 = *(unsigned int *)&a5->?[888]; /*0x716f27*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v17 + 16))(a5, &a5, 4, 0); /*0x716f2b*/
    int ii; // ebx
    for ( ii = 0; ii < a5; ++ii ) /*0x716f36*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[876] + 4 * ii, 4, 0); /*0x716f49*/
    int v19 = *a5; // edx /*0x716f59*/
    a5 = *(unsigned int *)&a5->?[916]; /*0x716f65*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v19 + 16))(a5, &a5, 4, 0); /*0x716f69*/
    int jj; // ebx
    for ( jj = 0; jj < a5; ++jj ) /*0x716f74*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[904] + 4 * jj, 4, 0); /*0x716f87*/
    int v21 = *a5; // edx /*0x716f97*/
    a5 = *(unsigned int *)&a5->?[944]; /*0x716fa3*/
    (*(void (**)(unsigned int *, int *, int, unsigned int))(v21 + 16))(a5, &a5, 4, 0); /*0x716fa7*/
    int kk; // ebx
    for ( kk = 0; kk < a5; ++kk ) /*0x716fb2*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[932] + 4 * kk, 4, 0); /*0x716fc5*/
    int v23 = *a5; // edx /*0x716fd5*/
    a5 = *(unsigned int *)&a5->?[972]; /*0x716fe1*/
    (*(void (**)(unsigned int *, int *, int))(v23 + 16))(a5, &a5, 4); /*0x716fe5*/
    int mm; // ebx
    for ( mm = 0; mm < (int)a5; ++mm ) /*0x716ff0*/
      (*(void (**)(unsigned int *, int, int, unsigned int))(*a5 + 16))(a5, *(unsigned int *)&a5->?[960] + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read((DynamicVector *)&a5->?[984], a5); /*0x717014*/
    DynamicVector::Read((DynamicVector *)&a5->?[1012], a5); /*0x717020*/
    DynamicVector::Read((DynamicVector *)&a5->?[1040], a5); /*0x71702c*/
    DynamicVector::Read((DynamicVector *)&a5->?[1068], a5); /*0x717038*/
    Stream::WriteIntArray((Stream *)&a5->?[1608], a5); /*0x717044*/
    Stream::WriteIntArray((Stream *)&a5->?[1636], a5); /*0x717050*/
    DynamicVector::Read((DynamicVector *)&a5->?[588], a5); /*0x71705c*/
    DynamicVector::Read((DynamicVector *)&a5->?[1364], a5); /*0x717068*/
    DynamicVector::Read((DynamicVector *)&a5->?[1392], a5); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&a5->?[1684], a5); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray((TechnoTypeClass *)&a5->?[1712], a5); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/

}
} // namespace gamemd
// 0x41CB50
namespace gamemd {
char TechnoTypeClass::g_var_3d23dc()
{
  return 0; /*0x41cb52*/
}
} // namespace gamemd
// 0x5247C0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon();
}
}
// 0x711E90
namespace gamemd {  // G42.18c ns repair
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
  return *(unsigned int *)this->Weapon && !this->PreventAttackMove[0]; /*0x711ea6*/
}
}  // G42.18c ns repair
// 0x711EE0
namespace gamemd {  // G42.18c ns repair
double TechnoTypeClass::ComputeBuildTime()
{

  double result; // st7
  result = (double)this->Cost * *&dword_8871E0->LightningDamage * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}
}  // G42.18c ns repair
// 0x7179A0
namespace gamemd {  // G42.18c ns repair
TechnoTypeClass * TechnoTypeClass::ddtor(void * Block, char a2)
{
  TechnoTypeClass::DTOR((char *)Block); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    operator delete((void *)(Block)); /*0x7179b0*/
  return Block; /*0x7179ba*/
}
}  // G42.18c ns repair
// 0x717AF0
namespace gamemd {  // G42.18c ns repair
unsigned int * TechnoTypeClass::Constructor(void *a1, void *a2, void *a3, void *a4, void *a5)
{

  a1->ObjectTypeClass[1] = 0; /*0x717af4*/
  a1->ObjectTypeClass[2] = 0; /*0x717af7*/
  LOBYTE(a1->ObjectTypeClass[3]) = 1; /*0x717afa*/
  BYTE1(a1->ObjectTypeClass[3]) = 0; /*0x717afe*/
  a1->ObjectTypeClass[5] = 10; /*0x717b01*/
  a1->ObjectTypeClass[4] = 0; /*0x717b08*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x717b0b*/
  return a1->ObjectTypeClass; /*0x717b11*/

}
}  // G42.18c ns repair
// 0x717B20
namespace gamemd {  // G42.18c ns repair
int  TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{


  int v3 = *aP1; // ecx /*0x717b2c*/
  int v6; // [esp+20h] [ebp-4h] BYREF
  v6 = this->ObjectTypeClass[4]; /*0x717b39*/
  (*(void (**)(int *, int *, int, unsigned int))(v3 + 16))(aP1, &v6, 4, 0); /*0x717b3d*/
  int result = v6; // eax /*0x717b40*/
  int i; // esi
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    aP1->IsClean(this->ObjectTypeClass[1] + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/

}
}  // G42.18c ns repair
// 0x717BC0
namespace gamemd {  // G42.18c ns repair
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1, void *a2, void *a3)
{

  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x717bc2*/
  return aP1->ObjectTypeClass; /*0x717bc8*/

}
}  // G42.18c ns repair
// 0x717BE0
namespace gamemd {  // G42.18c ns repair
VectorClass_flat * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{

  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x717be2*/
  return this->ObjectTypeClass; /*0x717be8*/

}
}  // G42.18c ns repair
// 0x717DB0
namespace gamemd {  // G42.18c ns repair
char TechnoTypeClass::RemoveItem(int a2, void *a2_2)
{

  int uniqueId; // edx
  uniqueId = *(unsigned int *)&a2_2->uniqueId; /*0x717db0*/
  int v3 = a2_2; // eax /*0x717db3*/
  if ( a2_2 >= uniqueId ) /*0x717db9*/
    return 0; /*0x717ddc*/
  int v4 = uniqueId - 1; // edx /*0x717dbb*/
  *(unsigned int *)&a2_2->uniqueId = v4; /*0x717dbe*/
  if ( a2_2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(unsigned int *)(a2_2->ptr_4 + 4 * v3 - 4) = *(unsigned int *)(a2_2->ptr_4 + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < a2_2->uniqueId ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}
}  // G42.18c ns repair
// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon();
}
}