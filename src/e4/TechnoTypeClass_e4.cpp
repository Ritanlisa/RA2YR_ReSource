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

// 0x48DCD0
namespace gamemd {
AbstractClass * * TechnoTypeClass::GetByTypeAndIndex(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)g_UnitTypeCount2 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)g_AircraftTypeCount + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)g_TriggerTypeCount + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)Factory_ExitCellTable + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return result; /*0x48dcef*/
}
} // namespace gamemd
// 0x50BDF0
namespace gamemd {
int TechnoTypeClass::Dispatch(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*aP1 + 44))(aP1) ) /*0x50be0f*/
  {
    case 3: /*0x50be0f*/
      result = *(float *)(*(&this->vtable23) + 284); /*0x50be37*/
      break; /*0x50be3d*/
    case 7: /*0x50be0f*/
      if ( aP1[898] == 5 ) /*0x50be47*/
        result = *(float *)(*(&this->vtable23) + 292); /*0x50be4e*/
      else
        result = *(float *)(*(&this->vtable23) + 288); /*0x50be5c*/
      break; /*0x50be54*/
    case 16: /*0x50be0f*/
      result = *(float *)(*(&this->vtable23) + 276); /*0x50be1b*/
      break; /*0x50be21*/
    case 40: /*0x50be0f*/
      result = *(float *)(*(&this->vtable23) + 280); /*0x50be29*/
      break; /*0x50be2f*/
    default:
      result = 1.0; /*0x50be65*/
      break; /*0x50be65*/
  }
  return result; /*0x50be6b*/
}
} // namespace gamemd
// 0x50BEB0
namespace gamemd {
int TechnoTypeClass::GetThreatMultiplier(TechnoTypeClass * aP1)
{
  double result; // st7

  switch ( (*(int (__thiscall **)(_DWORD *))(*aP1 + 44))(aP1) ) /*0x50becf*/
  {
    case 3: /*0x50becf*/
      result = *(&this->u32_85C0); /*0x50beec*/
      break; /*0x50bef4*/
    case 7: /*0x50becf*/
      if ( aP1[898] == 5 ) /*0x50befe*/
        result = *(&this->u32_85C2); /*0x50bf00*/
      else
        result = *(&this->u32_85C1); /*0x50bf0b*/
      break; /*0x50bf08*/
    case 16: /*0x50becf*/
      result = *(&this->u32_8588); /*0x50bed6*/
      break; /*0x50bede*/
    case 40: /*0x50becf*/
      result = *(&this->u32_8589); /*0x50bee1*/
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
unsigned int * TechnoTypeClass::LoadBase(ObjectClass * aP1)
{
  int v3; // ecx
  char v4; // al
  int v5; // eax
  void **v6; // edx
  TechnoTypeClass * v7;

  AbstractTypeClass::Constructor(aP1); /*0x6f06ea*/
  *(&this->vtable48) = -1; /*0x6f06f7*/
  *(&this->vtable49) = -1; /*0x6f06ff*/
  *(&this->uniqueId0) = 1; /*0x6f0705*/
  this->Image = 0; /*0x6f070b*/
  this->u8_A5 = 0; /*0x6f0711*/
  this->u8_A6 = 0; /*0x6f0717*/
  this->u8_A7 = 0; /*0x6f071d*/
  this->ImageAllocated = 0; /*0x6f0723*/
  this->q0A9 = 0; /*0x6f0729*/
  this->q0AA = 0; /*0x6f072f*/
  this->q0AB = 0; /*0x6f0735*/
  this->AlphaImage = 0; /*0x6f073b*/
  this->u8_AD = 0; /*0x6f0741*/
  this->u8_AE = 0; /*0x6f0747*/
  this->u8_AF = 0; /*0x6f074d*/
  this->MainVoxel = 0; /*0x6f0753*/
  this->u8_B1 = 0; /*0x6f0759*/
  this->u8_B2 = 0; /*0x6f075f*/
  this->u8_B3 = 0; /*0x6f0765*/
  *(&this->uniqueId5) = 7; /*0x6f076b*/
  *(&this->uniqueId6) = -1; /*0x6f0775*/
  *(&this->uniqueId7) = 0; /*0x6f077b*/
  *(&this->uniqueId8) = 0; /*0x6f0781*/
  *(&this->uniqueId9) = 0; /*0x6f0787*/
  *(&this->abstractFlags0) = -1; /*0x6f078d*/
  *(&this->abstractFlags1) = 0; /*0x6f0793*/
  *(&this->abstractFlags2) = 0; /*0x6f0799*/
  *(&this->abstractFlags3) = -1; /*0x6f079f*/
  *(&this->abstractFlags4) = -1; /*0x6f07a5*/
  *(&this->abstractFlags5) = 0; /*0x6f07ab*/
  *(&this->abstractFlags6) = 0; /*0x6f07b1*/
  *(&this->abstractFlags7) = 0; /*0x6f07b7*/
  *(&this->abstractFlags8) = 0; /*0x6f07bd*/
  *(&this->abstractFlags9) = 9; /*0x6f07c3*/
  this->q0F0 = 1; /*0x6f07cd*/
  this->u8_F1 = 0; /*0x6f07d3*/
  this->u8_F2 = 0; /*0x6f07d9*/
  this->u8_F3 = 0; /*0x6f07df*/
  this->q0F4 = 0; /*0x6f07e5*/
  this->u8_F5 = 1; /*0x6f07eb*/
  this->u8_F6 = 0; /*0x6f07f1*/
  this->q0F7 = 0; /*0x6f07f7*/
  *(void **)this = (void*)&TeamTypeClass_vftable; /*0x6f07fd*/
  this->vtable2 = (void*)&TeamTypeClass_vftable; /*0x6f0803*/
  this->vtable3 = (void*)&TeamTypeClass_vftable; /*0x6f080a*/
  this->vtable4 = (void*)&TeamTypeClass_vftable; /*0x6f0811*/
  v3 = g_MultiplayerLogState; /*0x6f0818*/
  if ( g_MultiplayerLogState < dword_A8ECA8 /*0x6f0857*/
    || (byte_A8ECAD || !dword_A8ECA8)
    && dword_A8ECB4 > 0
    && (v4 = (*(int (__thiscall **)(int *, int, _DWORD))(TeamTypeClass_Array + 8))(
               &TeamTypeClass_Array,
               dword_A8ECA8 + dword_A8ECB4,
               0),
        v3 = g_MultiplayerLogState,
        v4) )
  {
    g_MultiplayerLogState = v3 + 1; /*0x6f085c*/
    *((_DWORD *)g_TeamTypePool + v3) = this; /*0x6f0868*/
    v3 = g_MultiplayerLogState; /*0x6f086b*/
  }
  v5 = 0; /*0x6f0871*/
  if ( v3 <= 0 ) /*0x6f0875*/
  {
  LABEL_11:
    v5 = -1; /*0x6f0889*/
  }
  else
  {
    v6 = (void **)g_TeamTypePool; /*0x6f0877*/
    while ( *v6 != this ) /*0x6f087f*/
    {
      ++v5; /*0x6f0881*/
      ++v6; /*0x6f0882*/
      if ( v5 >= v3 ) /*0x6f0887*/
        goto LABEL_11; /*0x6f0887*/
    }
  }
  *(&this->vtable48) = v5; /*0x6f088b*/
  if ( g_AnimManager < g_AnimTypePool /*0x6f08c5*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v7 = g_AnimManager++; /*0x6f08d2*/
    *((_DWORD *)g_AnimPoolCount + v7) = this; /*0x6f08e1*/
  }
  return this; /*0x6f08e6*/
}
} // namespace gamemd
// 0x710AF0
namespace gamemd {
void * TechnoTypeClass::ReadINI(char * Source, int a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax

  ObjectTypeClass::ConstructFull(Source); /*0x710afb*/
  this->armed = 1; /*0x710b02*/
  this->weaponCount = 0; /*0x710b0e*/
  this->weapon1 = 0; /*0x710b14*/
  this->weapon2 = 0; /*0x710b1c*/
  this->eliteWeapon1 = 0; /*0x710b28*/
  this->eliteWeapon2 = 0; /*0x710b2f*/
  this->ammo = 0; /*0x710b36*/
  this->EliteAbilities = 0; /*0x710b3d*/
  this->u32_2B2 = 0; /*0x710b43*/
  this->u32_2B6 = 0; /*0x710b4b*/
  this->u32_2BA = 0; /*0x710b51*/
  this->u16_2BE = 0; /*0x710b57*/
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
  this->q2F0 = 0; /*0x710ba6*/
  this->u32_2F4 = 0; /*0x710bac*/
  this->q2F8 = 500; /*0x710bb2*/
  this->unknown_double_300 = -755914244; /*0x710bbc*/
  this->q304 = 1063281229; /*0x710bc6*/
  this->AccelerationFactor = -343597384; /*0x710bd0*/
  this->q30C = 1067366481; /*0x710bda*/
  this->CloakingSpeed = 7; /*0x710be4*/
  VoxelAnimTypeVector::Constructor(0, 0); /*0x710bee*/
  this->q324 = 0; /*0x710bf8*/
  this->q328 = 10; /*0x710bfb*/
  this->DebrisTypes = (void*)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x710bfe*/
  VectorClass::Construct((_DWORD *)&this->DebrisMaximums, 0, 0); /*0x710c0f*/
  this->q344 = 10; /*0x710c14*/
  this->q340 = 0; /*0x710c17*/
  this->DebrisMaximums = (void*)&TypeList_int_vftable; /*0x710c1a*/
  this->Locomotor = 1247291207; /*0x710c2d*/
  this->u32_350 = 298948665; /*0x710c39*/
  this->q354 = -1610610249; /*0x710c42*/
  this->q358 = -777003740; /*0x710c4b*/
  this->unknown_double_360 = 0; /*0x710c4e*/
  this->q364 = 0; /*0x710c54*/
  this->unknown_double_368 = 0; /*0x710c5a*/
  this->q36C = 0; /*0x710c60*/
  this->Weight = 0; /*0x710c6b*/
  this->q374 = 1072693248; /*0x710c71*/
  this->PhysicalSize = 0; /*0x710c77*/
  this->u32_37C = 0x40000000; /*0x710c7d*/
  this->Size = 0; /*0x710c87*/
  this->q384 = 1072693248; /*0x710c8d*/
  this->SizeLimit = 0; /*0x710c93*/
  this->q38C = 0; /*0x710c99*/
  *(&this->q16C2) = 0; /*0x710c9f*/
  this->VHPScan = 0; /*0x710ca5*/
  this->unknown_int_398 = 15; /*0x710cab*/
  this->RollAngle = 942502757; /*0x710cb5*/
  this->u32_3A4 = 1071694162; /*0x710cbf*/
  this->PitchSpeed = 0; /*0x710cc9*/
  this->q3AC = 1070596096; /*0x710ccf*/
  this->PitchAngle = 1256670343; /*0x710cd9*/
  this->u32_3B4 = 1071011608; /*0x710ce3*/
  this->BuildLimit = 0x7FFFFFFF; /*0x710cf0*/
  this->Category = -1; /*0x710cfa*/
  this->unknown_3C0 = 0; /*0x710d00*/
  this->DeployTime = 0; /*0x710d06*/
  this->u32_3CC = 0; /*0x710d0c*/
  this->FireAngle = 8; /*0x710d12*/
  this->PipScale = 0; /*0x710d1c*/
  *(&this->q1884) = 0; /*0x710d22*/
  this->LeptonMindControlOffset = 70; /*0x710d28*/
  this->PixelSelectionBracketDelta = 0; /*0x710d33*/
  this->PipWrap = 0; /*0x710d40*/
  VectorClass::BuildingTypeConstructor((_DWORD *)&this->Dock, 0, 0); /*0x710d46*/
  this->u32_3FC = 10; /*0x710d4b*/
  this->u32_3F8 = 0; /*0x710d51*/
  this->Dock = (void*)&TypeList_BuildingTypeClass_const___vftable; /*0x710d57*/
  this->DeploysInto = 0; /*0x710d61*/
  this->UndeploysInto = 0; /*0x710d67*/
  this->PowersUnit = 0; /*0x710d6e*/
  *(&this->u32_1A00) = 0; /*0x710d7b*/
  VectorClass::Construct((_DWORD *)&this->VoiceSelect, 0, 0); /*0x710d81*/
  this->q428 = 10; /*0x710d8e*/
  this->ptr_424 = 0; /*0x710d94*/
  this->VoiceSelect = (void*)&TypeList_int_vftable; /*0x710d9a*/
  VectorClass::Construct((_DWORD *)&this->VoiceSelectEnslaved, 0, 0); /*0x710da4*/
  this->q444 = 10; /*0x710db1*/
  this->q440 = 0; /*0x710db7*/
  this->VoiceSelectEnslaved = (void*)&TypeList_int_vftable; /*0x710dbd*/
  VectorClass::Construct((_DWORD *)&this->VoiceSelectDeactivated, 0, 0); /*0x710dc7*/
  this->q460 = 10; /*0x710dd4*/
  this->q45C = 0; /*0x710dda*/
  this->VoiceSelectDeactivated = (void*)&TypeList_int_vftable; /*0x710de0*/
  VectorClass::Construct((_DWORD *)&this->VoiceMove, 0, 0); /*0x710dea*/
  this->u32_47C = 10; /*0x710df7*/
  this->q478 = 0; /*0x710dfd*/
  this->VoiceMove = (void*)&TypeList_int_vftable; /*0x710e03*/
  VectorClass::Construct((_DWORD *)&this->VoiceAttack, 0, 0); /*0x710e0d*/
  this->q498 = 10; /*0x710e1a*/
  this->ptr_494 = 0; /*0x710e20*/
  this->VoiceAttack = (void*)&TypeList_int_vftable; /*0x710e26*/
  VectorClass::Construct((_DWORD *)&this->VoiceSpecialAttack, 0, 0); /*0x710e30*/
  this->q4B4 = 10; /*0x710e3d*/
  this->q4B0 = 0; /*0x710e43*/
  this->VoiceSpecialAttack = (void*)&TypeList_int_vftable; /*0x710e49*/
  VectorClass::Construct((_DWORD *)&this->VoiceDie, 0, 0); /*0x710e53*/
  this->q4D0 = 10; /*0x710e58*/
  this->q4CC = 0; /*0x710e5e*/
  this->VoiceDie = (void*)&TypeList_int_vftable; /*0x710e6c*/
  VectorClass::Construct((_DWORD *)&this->VoiceFeedback, 0, 0); /*0x710e76*/
  this->u32_4EC = 10; /*0x710e83*/
  this->u32_4E8 = 0; /*0x710e89*/
  this->VoiceFeedback = (void*)&TypeList_int_vftable; /*0x710e8f*/
  VectorClass::Construct((_DWORD *)&this->MoveSound, 0, 0); /*0x710e99*/
  this->q508 = 10; /*0x710ea6*/
  this->q504 = 0; /*0x710eac*/
  this->MoveSound = (void*)&TypeList_int_vftable; /*0x710eb2*/
  VectorClass::Construct((_DWORD *)&this->DieSound, 0, 0); /*0x710ebc*/
  this->q524 = 10; /*0x710ec1*/
  this->q520 = 0; /*0x710ec7*/
  this->DieSound = (void*)&TypeList_int_vftable; /*0x710ecd*/
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
  AnimTypeVector::Constructor((_DWORD *)&this->DebrisAnims, 0, 0); /*0x710fc3*/
  this->q5D8 = 10; /*0x710fc8*/
  this->q5D4 = 0; /*0x710fce*/
  this->DebrisAnims = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x710fd4*/
  this->Passengers = 0; /*0x710fde*/
  *(&this->q2588) = 0; /*0x710fe4*/
  this->Sight = 0; /*0x710fea*/
  *(&this->q25C6) = 0; /*0x710ff0*/
  *(&this->q25C7) = 0; /*0x710ff6*/
  *(&this->q25C8) = 0; /*0x710ffc*/
  *(&this->q25C9) = 0; /*0x711002*/
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
  VectorClass::Construct((_DWORD *)&this->Prerequisite, 0, 0); /*0x71108c*/
  this->q64C = 10; /*0x711099*/
  this->q648 = 0; /*0x71109f*/
  this->Prerequisite = (void*)&TypeList_int_vftable; /*0x7110a5*/
  VectorClass::Construct((_DWORD *)&this->PrerequisiteOverride, 0, 0); /*0x7110af*/
  this->VeteranAbilities = 10; /*0x7110b8*/
  this->IdleRate = 0; /*0x7110be*/
  this->PrerequisiteOverride = (void*)&TypeList_int_vftable; /*0x7110c4*/
  this->ThreatPosed = 0; /*0x7110ce*/
  this->Points = 0; /*0x7110d4*/
  this->Speed = 0; /*0x7110da*/
  this->SpeedType = a3; /*0x7110e0*/
  this->InitialAmmo = -1; /*0x7110e6*/
  this->Ammo = -1; /*0x7110ec*/
  this->IFVMode = 0; /*0x7110f2*/
  this->AirRangeBonus = 0; /*0x7110f8*/
  *(&this->weapon20) = 0; /*0x7110fe*/
  *(&this->weapon21) = 0; /*0x711104*/
  *(&this->weapon22) = 0; /*0x71110a*/
  *(&this->weapon23) = 0; /*0x711110*/
  *(&this->weapon24) = 0; /*0x711116*/
  *(&this->weapon25) = 0; /*0x71111c*/
  this->Reload = 0; /*0x711122*/
  this->EmptyReload = -1; /*0x711128*/
  this->ReloadIncrement = 0; /*0x71112e*/
  this->RadialFireSegments = 0; /*0x711134*/
  this->DeployFireWeapon = 1; /*0x71113a*/
  *(&this->eliteWeapon28) = 0; /*0x711144*/
  *(&this->eliteWeapon29) = 0; /*0x71114a*/
  *(&this->ammo0) = 1; /*0x711150*/
  *(&this->ammo1) = 0; /*0x711157*/
  *(&this->ammo2) = 0; /*0x71115d*/
  *(&this->ammo3) = 0; /*0x711163*/
  this->ReadinessReductionMultiplier = 0; /*0x711169*/
  this->UnloadingClass = 0; /*0x71116f*/
  this->DeployingAnim = 0; /*0x711175*/
  *(&this->guardRange8) = 0; /*0x71117b*/
  *(&this->guardRange9) = 0; /*0x711181*/
  this->UndeployDelay = -1; /*0x711187*/
  *(&this->sight6) = 0; /*0x71118d*/
  this->OwnerFlags = 0; /*0x711193*/
  this->AIBasePlanningSide = -1; /*0x71119e*/
  *(&this->cost8) = 0; /*0x7111a4*/
  *(&this->cost9) = 1; /*0x7111ac*/
  if ( &g_INI_DefaultBuffer ) /*0x7111b9*/
  {
    strncpy(&this->u32_1B58, &g_INI_DefaultBuffer, 0x18u); /*0x7111c7*/
    *(&this->techLevel4) = 0; /*0x7111cf*/
  }
  else
  {
    *(&this->strength0) = 0; /*0x7111bb*/
  }
  this->Cameo = 0; /*0x7111da*/
  *(&this->pipScale0) = 0; /*0x7111e2*/
  if ( &g_INI_DefaultBuffer ) /*0x7111ee*/
  {
    strncpy(&this->u32_1BD4, &g_INI_DefaultBuffer, 0x18u); /*0x7111fc*/
    *(&this->speedType5) = 0; /*0x711204*/
  }
  else
  {
    *(&this->pipScale1) = 0; /*0x7111f0*/
  }
  this->AltCameo = 0; /*0x71120a*/
  *(&this->threatPosed2) = 0; /*0x711210*/
  this->RotCount = 0; /*0x711216*/
  this->ROT = 0; /*0x71121c*/
  this->TurretOffset = 0; /*0x711222*/
  *(&this->threatAvoidValue8) = 1; /*0x711229*/
  this->Points2 = 0; /*0x711237*/
  AnimTypeVector::Constructor((_DWORD *)&this->Explosion, 0, 0); /*0x71123d*/
  this->q740 = 10; /*0x71124a*/
  this->u32_73C = 0; /*0x711250*/
  this->Explosion = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x711256*/
  AnimTypeVector::Constructor((_DWORD *)&this->DestroyAnim, 0, 0); /*0x711260*/
  this->q75C = 10; /*0x711265*/
  this->ptr_758 = 0; /*0x71126b*/
  this->DestroyAnim = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x711271*/
  this->NaturalParticleSystem = 0; /*0x71127b*/
  this->NaturalParticleSystemLocation = 0; /*0x711282*/
  this->u32_76C = 0; /*0x711288*/
  this->ptr_770 = 0; /*0x71128e*/
  this->RefinerySmokeParticleSystem = 0; /*0x71129b*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112a1*/
  this->q78C = 10; /*0x7112ae*/
  this->VoxelAnimList_Embed = 0; /*0x7112b4*/
  this->DamageParticleSystems = (void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x7112ba*/
  VectorClass::ConstructorWithVtable(0, 0); /*0x7112c4*/
  this->q7A8 = 10; /*0x7112c9*/
  this->q7A4 = 0; /*0x7112cf*/
  this->DestroyParticleSystems = (void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x7112d5*/
  this->DamageSmokeOffset = 0; /*0x7112df*/
  this->u32_7B4 = 0; /*0x7112e5*/
  this->u32_7B8 = 0; /*0x7112eb*/
  *(&this->VoxelAnimList_Items0) = 0; /*0x7112f1*/
  this->DestroySmokeOffset = 0; /*0x7112f7*/
  this->q7C4 = 0; /*0x7112fd*/
  this->u32_7C8 = 0; /*0x711303*/
  this->RefinerySmokeOffsetOne = 0; /*0x711309*/
  this->u32_7D0 = 0; /*0x71130f*/
  this->u32_7D4 = 0; /*0x711315*/
  this->RefinerySmokeOffsetTwo = 0; /*0x71131b*/
  this->u32_7DC = 0; /*0x711321*/
  this->ImageFile = 0; /*0x711327*/
  this->RefinerySmokeOffsetThree = 0; /*0x71132d*/
  this->u32_7E8 = 0; /*0x711333*/
  this->u32_7EC = 0; /*0x711339*/
  this->RefinerySmokeOffsetFour = 0; /*0x71133f*/
  this->u32_7F4 = 0; /*0x711345*/
  this->u32_7F8 = 0; /*0x71134b*/
  this->ShadowIndex = 0; /*0x711351*/
  this->Storage = 0; /*0x711357*/
  *(&this->IntList_A_Items2) = 0; /*0x71135d*/
  *(&this->IntList_A_Items3) = 0; /*0x711363*/
  *(&this->IntList_A_Items4) = 0; /*0x711369*/
  this->TurretCount = 0; /*0x71136f*/
  *(&this->IntList_A_Capacity4) = 0; /*0x711375*/
  *(&this->IntList_C_Capacity4) = 0; /*0x71137b*/
  *(&this->q5042) = 0; /*0x711381*/
  *(&this->q5043) = 1; /*0x711387*/
  *(&this->q5044) = 1; /*0x71138e*/
  *(&this->q5045) = 0; /*0x711395*/
  *(&this->q5046) = 0; /*0x71139b*/
  *(&this->q5047) = 0; /*0x7113a1*/
  *(&this->q5048) = 0; /*0x7113a7*/
  *(&this->q5049) = 0; /*0x7113ad*/
  *(&this->q5080) = 0; /*0x7113b3*/
  *(&this->q5081) = 0; /*0x7113b9*/
  *(&this->q5082) = 0; /*0x7113bf*/
  *(&this->q5083) = 1; /*0x7113c5*/
  *(&this->q5084) = 0; /*0x7113cc*/
  *(&this->q5085) = 0; /*0x7113d2*/
  *(&this->q5086) = 0; /*0x7113d8*/
  *(&this->q5087) = 0; /*0x7113de*/
  *(&this->q5088) = 0; /*0x7113e4*/
  *(&this->q5089) = 0; /*0x7113ea*/
  *(&this->q50C0) = 0; /*0x7113f0*/
  *(&this->q50C1) = 0; /*0x7113f6*/
  *(&this->q50C2) = 0; /*0x7113fc*/
  *(&this->q50C3) = 0; /*0x711402*/
  *(&this->q50C4) = 0; /*0x711412*/
  this->TurretAnimData = 2; /*0x711418*/
  this->u32_CA8 = 1; /*0x71141e*/
  this->u32_CAC = 1; /*0x711424*/
  this->u32_CB0 = 1; /*0x71142a*/
  *(&this->q5142) = 0; /*0x711430*/
  this->BarrelAnimData = 2; /*0x711436*/
  this->u32_CBC = 1; /*0x71143c*/
  this->u32_CC0 = 1; /*0x711442*/
  this->u32_CC4 = 1; /*0x711448*/
  *(&this->q51C2) = 0; /*0x71144e*/
  *(&this->q51C6) = 1; /*0x711454*/
  *(&this->q51C7) = 0; /*0x71145a*/
  *(&this->q51C8) = 0; /*0x711460*/
  *(&this->q51C9) = 0; /*0x711466*/
  *(&this->q5200) = 0; /*0x71146c*/
  *(&this->q5201) = 0; /*0x711472*/
  *(&this->q5202) = 0; /*0x711478*/
  *(&this->q5203) = 0; /*0x71147e*/
  *(&this->q5204) = 0; /*0x711484*/
  *(&this->q5205) = 0; /*0x71148a*/
  this->u32_CD8 = 0; /*0x711490*/
  this->u32_D0C = 0; /*0x711496*/
  this->u32_D10 = 0; /*0x71149c*/
  *(&this->DamageSound8) = 0; /*0x7114a2*/
  *(&this->DamageSound9) = 0; /*0x7114a8*/
  this->SlavesNumber = 0; /*0x7114ae*/
  this->SlaveRegenRate = 1065353216; /*0x7114b4*/
  *(&this->ImpactLandSound0) = 0; /*0x7114be*/
  *(&this->ImpactLandSound1) = 0; /*0x7114c4*/
  *(&this->ImpactLandSound2) = 0; /*0x7114ca*/
  *(&this->ImpactLandSound3) = 0; /*0x7114d0*/
  *(&this->ImpactLandSound4) = 0; /*0x7114d6*/
  *(&this->ImpactLandSound5) = 0; /*0x7114dc*/
  *(&this->ImpactLandSound6) = 0; /*0x7114e2*/
  *(&this->ImpactLandSound7) = 0; /*0x7114e8*/
  *(&this->ImpactLandSound8) = 0; /*0x7114ee*/
  *(&this->ImpactLandSound9) = 0; /*0x7114f4*/
  *(&this->CrashingSound0) = 0; /*0x7114fa*/
  *(&this->CrashingSound1) = 1; /*0x711500*/
  *(&this->CrashingSound2) = 0; /*0x711506*/
  *(&this->CrashingSound3) = 0; /*0x71150c*/
  *(&this->CrashingSound5) = 0; /*0x711512*/
  *(&this->CrashingSound6) = 0; /*0x711518*/
  *(&this->CrashingSound7) = 0; /*0x71151e*/
  *(&this->CrashingSound8) = 0; /*0x711524*/
  *(&this->CrashingSound9) = 1; /*0x71152a*/
  *(&this->SinkingSound0) = 1; /*0x711530*/
  *(&this->SinkingSound3) = 0; /*0x711536*/
  *(&this->SinkingSound5) = 0; /*0x71153c*/
  *(&this->SinkingSound6) = 1; /*0x711542*/
  *(&this->SinkingSound8) = 0; /*0x711548*/
  *(&this->SinkingSound9) = 0; /*0x71154e*/
  *(&this->VoiceFalling0) = 0; /*0x711554*/
  this->SuppressionThreshold = 0; /*0x71155a*/
  this->JumpjetTurnRate = 0; /*0x711560*/
  this->JumpjetSpeed = 0; /*0x711566*/
  this->JumpjetClimb = 0; /*0x71156c*/
  this->JumpjetCrash = -1; /*0x711572*/
  *(&this->VoiceSinking2) = 0; /*0x711578*/
  this->JumpjetAccel = 0; /*0x71157e*/
  this->JumpjetWobbles = 0; /*0x711584*/
  this->qD60 = 0; /*0x71158a*/
  this->JumpjetDeviation = 0; /*0x711590*/
  *(&this->VoiceCapture2) = 0; /*0x711596*/
  *(&this->VoiceCapture3) = 0; /*0x71159c*/
  *(&this->VoiceCapture4) = 0; /*0x7115a2*/
  this->qD6C = 0; /*0x7115a8*/
  this->qD70 = 4; /*0x7115ae*/
  this->RequiredHouses = 14; /*0x7115b8*/
  this->ForbiddenHouses = 1084227584; /*0x7115c7*/
  this->SecretHouses = 1084227584; /*0x7115cd*/
  this->qD80 = 500; /*0x7115d3*/
  this->SecondSpawnOffset = 0x40000000; /*0x7115dd*/
  this->u32_D88 = 1041865114; /*0x7115e7*/
  *(&this->LeaveTransportSound8) = 0; /*0x7115f1*/
  this->qD90 = 40; /*0x7115f7*/
  *(&this->DeploySound6) = 0; /*0x711601*/
  *(&this->DeploySound7) = 0; /*0x711607*/
  *(&this->UndeploySound0) = 0; /*0x71160d*/
  *(&this->UndeploySound1) = 1; /*0x711613*/
  *(&this->UndeploySound2) = 1; /*0x71161a*/
  *(&this->UndeploySound3) = 0; /*0x711621*/
  *(&this->UndeploySound4) = 0; /*0x711627*/
  *(&this->UndeploySound5) = 0; /*0x71162d*/
  this->ZFudgeBridge = -1; /*0x711633*/
  this->PaletteFile = -1; /*0x711639*/
  this->u32_DA8 = -1; /*0x71163f*/
  *(&this->ChronoOutSound0) = 0; /*0x711645*/
  *(&this->VoiceHarvest6) = 0; /*0x71164b*/
  *(&this->VoiceHarvest7) = 1; /*0x711651*/
  *(&this->VoiceHarvest8) = 0; /*0x711658*/
  *(&this->VoiceHarvest9) = 0; /*0x71165e*/
  this->qDC0 = 10; /*0x711664*/
  this->Palette = 5; /*0x71166a*/
  this->qDC8 = 10; /*0x711674*/
  this->qDCC = 0; /*0x71167a*/
  this->u32_DF0 = 0; /*0x711680*/
  *(_DWORD *)this = (void*)&TechnoTypeClass_vftable; /*0x711686*/
  this->vtable2 = (void*)&TechnoTypeClass_vftable; /*0x71168c*/
  this->vtable3 = (void*)&TechnoTypeClass_vftable; /*0x711693*/
  this->vtable4 = (void*)&TechnoTypeClass_vftable; /*0x71169a*/
  *(&this->VoicePrimaryEliteWeaponAttack6) = 0; /*0x7116a7*/
  *(&this->q0E04) = 1; /*0x7116ad*/
  (*(void (__thiscall **)(char *))(this->DebrisTypes + 12))(&this->u32_1388); /*0x7116b6*/
  (*(void (__thiscall **)(char *))(this->DebrisAnims + 12))(&this->u32_24C6); /*0x7116c5*/
  (*(void (__thiscall **)(char *))(this->DebrisMaximums + 12))(&this->q1446); /*0x7116d4*/
  (*(void (__thiscall **)(char *))(this->Dock + 12))(&this->u32_1900); /*0x7116e3*/
  v4 = &this->u32_22A0; /*0x7116e6*/
  v5 = 18; /*0x7116ec*/
  do /*0x71170f*/
  {
    *(v4 - 4) = 0; /*0x7116f4*/
    v6 = v4 - 3; /*0x7116f7*/
    *v4 = 0; /*0x7116f9*/
    v4[1] = 0; /*0x7116fd*/
    *v6 = 0; /*0x711700*/
    v4 += 7; /*0x711702*/
    --v5; /*0x711705*/
    v6[1] = 0; /*0x711706*/
    v6[2] = 0; /*0x711709*/
    *((_BYTE *)v4 - 20) = 0; /*0x71170c*/
  }
  while ( v5 ); /*0x71170f*/
  v7 = &this->u32_2A90; /*0x711711*/
  v8 = 18; /*0x711717*/
  do /*0x71173a*/
  {
    *(v7 - 4) = 0; /*0x71171f*/
    v9 = v7 - 3; /*0x711722*/
    *v7 = 0; /*0x711724*/
    v7[1] = 0; /*0x711728*/
    *v9 = 0; /*0x71172b*/
    v7 += 7; /*0x71172d*/
    --v8; /*0x711730*/
    v9[1] = 0; /*0x711731*/
    v9[2] = 0; /*0x711734*/
    *((_BYTE *)v7 - 20) = 0; /*0x711737*/
  }
  while ( v8 ); /*0x71173a*/
  v10 = &this->u32_2170; /*0x71173c*/
  v11 = 5; /*0x711742*/
  do /*0x711757*/
  {
    v12 = v10; /*0x711747*/
    v10 += 3; /*0x71174b*/
    --v11; /*0x71174e*/
    *v12 = 0; /*0x71174f*/
    v12[1] = 0; /*0x711751*/
    v12[2] = 0; /*0x711754*/
  }
  while ( v11 ); /*0x711757*/
  this->qDB0 = 0; /*0x711763*/
  v13 = &this->u32_33D0; /*0x711765*/
  this->u32_DB4 = 0; /*0x71176b*/
  v14 = 6; /*0x71176e*/
  this->u32_DB8 = 0; /*0x711773*/
  do /*0x71177f*/
  {
    *(v13 - 6) = 0; /*0x711776*/
    *v13++ = 0; /*0x711779*/
    --v14; /*0x71177e*/
  }
  while ( v14 ); /*0x71177f*/
  memset(&this->u32_2050, 0xFFu, 0x48u); /*0x71178e*/
  if ( g_AnimManager < g_AnimTypePool /*0x7117c3*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimManagerConfig + g_AnimTypePool,
         0) )
  {
    v15 = g_AnimManager++; /*0x7117d0*/
    *((_DWORD *)g_AnimPoolCount + v15) = this; /*0x7117df*/
  }
  if ( dword_A8EB10 < dword_A8EB08 /*0x711816*/
    || (byte_A8EB0D || !dword_A8EB08)
    && dword_A8EB14 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EB00 + 8))(
         &dword_A8EB00,
         dword_A8EB14 + dword_A8EB08,
         0) )
  {
    v16 = dword_A8EB10++; /*0x711823*/
    *((_DWORD *)dword_A8EB04 + v16) = this; /*0x711832*/
  }
  return this; /*0x711837*/
}
} // namespace gamemd
// 0x711840
namespace gamemd {
AbstractClass * * TechnoTypeClass::Construct(ObjectTypeClass * aP1)
{
  int v3; // eax
  int v4; // ecx

  ObjectTypeClass::Construct(aP1); /*0x71184b*/
  TechnoTypeClass::Constructor_0(aP1); /*0x711859*/
  this->DebrisTypes = (void*)&TypeList_VoxelAnimTypeClass_const___vftable; /*0x71185e*/
  IntDynamicVector::Construct((_DWORD *)(&this->q1446), aP1); /*0x71186d*/
  this->DebrisMaximums = (void*)&TypeList_int_vftable; /*0x711872*/
  this->unknown_3C0 = 0; /*0x711883*/
  TechnoTypeClass::Constructor_1(aP1); /*0x711889*/
  this->Dock = (void*)&TypeList_BuildingTypeClass_const___vftable; /*0x71188e*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1A04), aP1); /*0x71189e*/
  this->VoiceSelect = (void*)&TypeList_int_vftable; /*0x7118a3*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1AC2), aP1); /*0x7118b3*/
  this->VoiceSelectEnslaved = (void*)&TypeList_int_vftable; /*0x7118b8*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1B80), aP1); /*0x7118c8*/
  this->VoiceSelectDeactivated = (void*)&TypeList_int_vftable; /*0x7118cd*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1C08), aP1); /*0x7118dd*/
  this->VoiceMove = (void*)&TypeList_int_vftable; /*0x7118e2*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1CC6), aP1); /*0x7118f2*/
  this->VoiceAttack = (void*)&TypeList_int_vftable; /*0x7118f7*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1D84), aP1); /*0x711907*/
  this->VoiceSpecialAttack = (void*)&TypeList_int_vftable; /*0x71190c*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_1E42), aP1); /*0x71191c*/
  this->VoiceDie = (void*)&TypeList_int_vftable; /*0x711921*/
  IntDynamicVector::Construct((_DWORD *)(&this->CrushSound0), aP1); /*0x711931*/
  this->VoiceFeedback = (void*)&TypeList_int_vftable; /*0x711936*/
  IntDynamicVector::Construct((_DWORD *)(&this->ImageFile8), aP1); /*0x711946*/
  this->MoveSound = (void*)&TypeList_int_vftable; /*0x71194b*/
  IntDynamicVector::Construct((_DWORD *)(&this->IsLogic6), aP1); /*0x71195b*/
  this->DieSound = (void*)&TypeList_int_vftable; /*0x711960*/
  ObjectTypeClass::CheckFlag(aP1); /*0x711970*/
  this->DebrisAnims = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x711975*/
  IntDynamicVector::Construct((_DWORD *)(&this->u32_27C2), aP1); /*0x711985*/
  this->Prerequisite = (void*)&TypeList_int_vftable; /*0x71198a*/
  IntDynamicVector::Construct((_DWORD *)(&this->q2880), aP1); /*0x71199a*/
  this->PrerequisiteOverride = (void*)&TypeList_int_vftable; /*0x71199f*/
  this->CameoFile = 0; /*0x7119ac*/
  this->AltCameoFile = 0; /*0x7119b5*/
  ObjectTypeClass::CheckFlag(aP1); /*0x7119bb*/
  this->Explosion = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x7119c0*/
  ObjectTypeClass::CheckFlag(aP1); /*0x7119d0*/
  this->DestroyAnim = (void*)&TypeList_AnimTypeClass_const___vftable; /*0x7119df*/
  TypeList::ParticleConstructor(0, 0); /*0x7119e6*/
  this->DamageParticleSystems = (void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x7119eb*/
  TypeList::ParticleConstructor(0, 0); /*0x7119fb*/
  this->DestroyParticleSystems = (void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x711a0a*/
  this->TurretAnimData = 2; /*0x711a10*/
  this->u32_CA8 = 1; /*0x711a16*/
  this->u32_CAC = 1; /*0x711a1c*/
  this->u32_CB0 = 1; /*0x711a22*/
  this->unknown_bool_CB4 = 0; /*0x711a28*/
  this->BarrelAnimData = 2; /*0x711a2e*/
  this->u32_CBC = 1; /*0x711a34*/
  this->u32_CC0 = 1; /*0x711a3a*/
  this->u32_CC4 = 1; /*0x711a40*/
  this->unknown_bool_CC8 = 0; /*0x711a46*/
  *(_DWORD *)this = (void*)&TechnoTypeClass_vftable; /*0x711a4c*/
  this->vtable2 = (void*)&TechnoTypeClass_vftable; /*0x711a52*/
  this->vtable3 = (void*)&TechnoTypeClass_vftable; /*0x711a59*/
  this->vtable4 = (void*)&TechnoTypeClass_vftable; /*0x711a60*/
  v3 = dword_A8EB10; /*0x711a67*/
  v4 = 0; /*0x711a6c*/
  if ( dword_A8EB10 <= 0 ) /*0x711a70*/
  {
  LABEL_5:
    if ( dword_A8EB10 >= dword_A8EB08 ) /*0x711a8c*/
    {
      if ( !byte_A8EB0D && dword_A8EB08 /*0x711ab1*/
        || dword_A8EB14 <= 0
        || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EB00 + 8))(
              &dword_A8EB00,
              dword_A8EB14 + dword_A8EB08,
              0) )
      {
        return this; /*0x711ab6*/
      }
      v3 = dword_A8EB10; /*0x711ab8*/
    }
    dword_A8EB10 = v3 + 1; /*0x711ac6*/
    *((_DWORD *)dword_A8EB04 + v3) = this; /*0x711acb*/
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
int TechnoTypeClass::DTOR()
{
  char v2; // al
  int v3; // eax
  int v4; // eax
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax

  v2 = this->CameoAllocated; /*0x711ae7*/
  *(_DWORD *)this = (void*)&TechnoTypeClass_vftable; /*0x711aed*/
  this->vtable2 = (void*)&TechnoTypeClass_vftable; /*0x711af5*/
  this->vtable3 = (void*)&TechnoTypeClass_vftable; /*0x711afc*/
  this->vtable4 = (void*)&TechnoTypeClass_vftable; /*0x711b03*/
  if ( v2 && this->Cameo ) /*0x711b0c*/
  {
    RA2_OPDEL(*(void **)(&this->techLevel6)); /*0x711b17*/
    this->Cameo = 0; /*0x711b1f*/
    this->CameoAllocated = 0; /*0x711b25*/
  }
  if ( this->AltCameoAllocated && this->AltCameo ) /*0x711b33*/
  {
    RA2_OPDEL(*(void **)(&this->speedType8)); /*0x711b3e*/
    this->AltCameo = 0; /*0x711b46*/
    this->AltCameoAllocated = 0; /*0x711b4c*/
  }
  v3 = (*(int (__thiscall **)(int *, int *))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x711b66*/
  if ( v3 != -1 ) /*0x711b6c*/
    DynamicVector::RemoveItem(&g_AnimPoolManager, v3); /*0x711b74*/
  v4 = (*(int (__thiscall **)(int *, int *))(dword_A8EB00 + 16))(&dword_A8EB00, &this); /*0x711b8d*/
  if ( v4 != -1 ) /*0x711b93*/
    TechnoTypeClass::RemoveItem(&dword_A8EB00, v4); /*0x711b9b*/
  this->DestroyParticleSystems = (void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x711ba7*/
  VectorClass::Cleanup(&this->AccelerationFactor0); /*0x711bad*/
  this->DamageParticleSystems = (void*)&VectorClass_ParticleSystemTypeClass_const___vftable; /*0x711bb8*/
  VectorClass::Cleanup(&this->q2FC2); /*0x711bbe*/
  this->DestroyAnim = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x711bc9*/
  DynamicVectorClass::Destroy_Alt(&this->buildLimit4); /*0x711bcf*/
  this->Explosion = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x711bda*/
  DynamicVectorClass::Destroy_Alt(&this->u32_2DC6); /*0x711be0*/
  this->PrerequisiteOverride = (void*)&VectorClass_int_vftable; /*0x711bf0*/
  VectorClass::Destroy(&this->q2880); /*0x711bf2*/
  this->Prerequisite = (void*)&VectorClass_int_vftable; /*0x711bfd*/
  VectorClass::Destroy(&this->u32_27C2); /*0x711bff*/
  this->DebrisAnims = (void*)&VectorClass_AnimTypeClass_const___vftable; /*0x711c0a*/
  DynamicVectorClass::Destroy_Alt(&this->u32_24C6); /*0x711c10*/
  this->DieSound = (void*)&VectorClass_int_vftable; /*0x711c1b*/
  VectorClass::Destroy(&this->IsLogic6); /*0x711c1d*/
  this->MoveSound = (void*)&VectorClass_int_vftable; /*0x711c28*/
  VectorClass::Destroy(&this->ImageFile8); /*0x711c2a*/
  v5 = *(void **)(&this->CrushSound4); /*0x711c2f*/
  this->VoiceFeedback = (void*)&VectorClass_int_vftable; /*0x711c35*/
  if ( v5 && this->VoiceFeedback_FlagByte ) /*0x711c3f*/
  {
    RA2_OPDEL(v5); /*0x711c48*/
    this->VoiceFeedback_Items = 0; /*0x711c50*/
  }
  this->VoiceFeedback_FlagByte = 0; /*0x711c56*/
  this->VoiceFeedback_Capacity = 0; /*0x711c5c*/
  v6 = *(void **)(&this->u32_1E46); /*0x711c62*/
  this->VoiceDie = (void*)&VectorClass_int_vftable; /*0x711c68*/
  if ( v6 && this->IntList_H_FlagByte ) /*0x711c72*/
  {
    RA2_OPDEL(v6); /*0x711c7b*/
    this->IntList_H_Items = 0; /*0x711c83*/
  }
  this->IntList_H_FlagByte = 0; /*0x711c89*/
  this->IntList_H_Capacity = 0; /*0x711c8f*/
  v7 = *(void **)(&this->u32_1D88); /*0x711c95*/
  this->VoiceSpecialAttack = (void*)&VectorClass_int_vftable; /*0x711c9b*/
  if ( v7 && this->IntList_G_FlagByte ) /*0x711ca5*/
  {
    RA2_OPDEL(v7); /*0x711cae*/
    this->IntList_G_Items = 0; /*0x711cb6*/
  }
  this->IntList_G_FlagByte = 0; /*0x711cbc*/
  this->IntList_G_Capacity = 0; /*0x711cc2*/
  v8 = *(void **)(&this->u32_1D00); /*0x711cc8*/
  this->VoiceAttack = (void*)&VectorClass_int_vftable; /*0x711cce*/
  if ( v8 && this->IntList_F_FlagByte ) /*0x711cd8*/
  {
    RA2_OPDEL(v8); /*0x711ce1*/
    this->IntList_F_Items = 0; /*0x711ce9*/
  }
  this->IntList_F_FlagByte = 0; /*0x711cef*/
  this->IntList_F_Capacity = 0; /*0x711cf5*/
  v9 = *(void **)(&this->u32_1C42); /*0x711cfb*/
  this->VoiceMove = (void*)&VectorClass_int_vftable; /*0x711d01*/
  if ( v9 && this->IntList_E_FlagByte ) /*0x711d0b*/
  {
    RA2_OPDEL(v9); /*0x711d14*/
    this->IntList_E_Items = 0; /*0x711d1c*/
  }
  this->IntList_E_FlagByte = 0; /*0x711d22*/
  this->IntList_E_Capacity = 0; /*0x711d28*/
  v10 = *(void **)(&this->u32_1B84); /*0x711d2e*/
  this->VoiceSelectDeactivated = (void*)&VectorClass_int_vftable; /*0x711d34*/
  if ( v10 && this->IntList_D_FlagByte ) /*0x711d3e*/
  {
    RA2_OPDEL(v10); /*0x711d47*/
    this->IntList_D_Items = 0; /*0x711d4f*/
  }
  this->IntList_D_FlagByte = 0; /*0x711d55*/
  this->IntList_D_Capacity = 0; /*0x711d5b*/
  v11 = *(void **)(&this->u32_1AC6); /*0x711d61*/
  this->VoiceSelectEnslaved = (void*)&VectorClass_int_vftable; /*0x711d67*/
  if ( v11 && this->IntList_C_FlagByte ) /*0x711d71*/
  {
    RA2_OPDEL(v11); /*0x711d7a*/
    this->IntList_C_Items = 0; /*0x711d82*/
  }
  this->IntList_C_FlagByte = 0; /*0x711d88*/
  this->IntList_C_Capacity = 0; /*0x711d8e*/
  v12 = *(void **)(&this->u32_1A08); /*0x711d94*/
  this->VoiceSelect = (void*)&VectorClass_int_vftable; /*0x711d9a*/
  if ( v12 && this->IntList_B_FlagByte ) /*0x711da4*/
  {
    RA2_OPDEL(v12); /*0x711dad*/
    this->IntList_B_Items = 0; /*0x711db5*/
  }
  this->IntList_B_FlagByte = 0; /*0x711dbb*/
  this->IntList_B_Capacity = 0; /*0x711dc1*/
  v13 = *(void **)(&this->u32_1904); /*0x711dc7*/
  this->Dock = (void*)&VectorClass_BuildingTypeClass_const___vftable; /*0x711dcd*/
  if ( v13 && this->BuildingTypeList_FlagByte ) /*0x711ddb*/
  {
    RA2_OPDEL(v13); /*0x711de4*/
    this->BuildingTypeList_Items = 0; /*0x711dec*/
  }
  this->BuildingTypeList_FlagByte = 0; /*0x711df2*/
  this->BuildingTypeList_Capacity = 0; /*0x711df8*/
  v14 = *(void **)(&this->q1480); /*0x711dfe*/
  this->DebrisMaximums = (void*)&VectorClass_int_vftable; /*0x711e04*/
  if ( v14 && this->IntList_A_FlagByte ) /*0x711e0f*/
  {
    RA2_OPDEL(v14); /*0x711e18*/
    this->IntList_A_Items = 0; /*0x711e20*/
  }
  this->IntList_A_FlagByte = 0; /*0x711e26*/
  this->IntList_A_Capacity = 0; /*0x711e2c*/
  v15 = *(void **)(&this->q13C2); /*0x711e32*/
  this->DebrisTypes = (void*)&VectorClass_VoxelAnimTypeClass_const___vftable; /*0x711e38*/
  if ( v15 && this->VoxelAnimList_FlagByte ) /*0x711e46*/
  {
    RA2_OPDEL(v15); /*0x711e4f*/
    this->VoxelAnimList_Items = 0; /*0x711e57*/
  }
  this->VoxelAnimList_FlagByte = 0; /*0x711e5f*/
  this->VoxelAnimList_Capacity = 0; /*0x711e65*/
  return ObjectTypeClass::Destruct(); /*0x711e70*/
}
} // namespace gamemd
// 0x711F00
namespace gamemd {
int TechnoTypeClass::ComputeValueSimple(float * a2)
{
  float v4; // [esp+8h] [ebp-8h]
  float v5; // [esp+Ch] [ebp-4h]
  int v6; // [esp+14h] [ebp+4h]

  if ( !a2 ) /*0x711f0d*/
    return 0; /*0x711f52*/
  v5 = TechnoTypeClass::Dispatch(this); /*0x711f17*/
  v4 = TechnoTypeClass::GetThreatMultiplier(this); /*0x711f27*/
  v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q0442))(this); /*0x711f31*/
  return Math::RoundToInt((double)v6 * v4 * v5); /*0x711f46*/
}
} // namespace gamemd
// 0x711F60
namespace gamemd {
int TechnoTypeClass::ComputeValue(void * a2, float a3)
{
  int v6; // esi
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]
  void *v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+18h] [ebp+8h]
  int v11; // [esp+18h] [ebp+8h]

  v7 = *((double *)g_RulesClass_Instance + 743); /*0x711f76*/
  if ( IDA_LOBYTE(a3) ) /*0x711f7c*/
    v7 = 1.0; /*0x711f7e*/
  if ( a2 ) /*0x711f8c*/
  {
    v10 = TechnoTypeClass::Dispatch(this); /*0x711f9a*/
    v8 = TechnoTypeClass::GetThreatMultiplier(this); /*0x711fac*/
    if ( *(&this->u32_989) ) /*0x711fa6*/
    {
      return Math::RoundToInt((double)*(&this->u32_989) * v10); /*0x711fc0*/
    }
    else
    {
      v9 = (void *)this->GetMember388(); /*0x711fd7*/
      v6 = Math::RoundToInt((double)(int)v9 * v8 * v10); /*0x711fec*/
      if ( (unsigned __int8)House::IsCurrentPlayer(a2) ) /*0x711ff4*/
        return Math::RoundToInt((double)v6 * v7); /*0x71200a*/
      return v6; /*0x71200c*/
    }
  }
  else
  {
    v11 = this->GetMember388(); /*0x712020*/
    return Math::RoundToInt((double)v11 * v7); /*0x71202c*/
  }
}
} // namespace gamemd
// 0x7162F0
namespace gamemd {
DynamicVectorClass_flat * * TechnoTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  _DWORD *v3; // ebp
  int result; // eax
  int j; // ebp
  int k; // ebx
  int m; // ebx
  int n; // ebx
  int ii; // ebx
  int jj; // ebx
  int kk; // ebx
  int mm; // ebx
  int nn; // ebx
  int i1; // ebx
  int i2; // ebx
  int i3; // ebx
  int i4; // ebx
  int i5; // ebx
  int i6; // ebx
  int i7; // ebx
  int i8; // ebx
  int i9; // ebx
  int i10; // ebx
  int i11; // esi
  int i12; // esi
  int i13; // esi
  int i14; // esi
  int i15; // esi
  int *v29; // esi
  int v30; // ebx
  int *v31; // esi
  int v32; // ebx
  int i16; // esi
  int i17; // esi
  int v35; // eax
  int v36; // [esp+280h] [ebp-210h] BYREF
  int v37; // [esp+284h] [ebp-20Ch] BYREF
  int i; // [esp+288h] [ebp-208h]
  char Filename[256]; // [esp+28Ch] [ebp-204h] BYREF
  char Buffer[260]; // [esp+38Ch] [ebp-104h] BYREF

  v3 = (_DWORD *)(aP0 + 1000); /*0x716307*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1000) + 12))(aP0 + 1000); /*0x71630f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 788) + 12))(aP0 + 788); /*0x716320*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1476) + 12))(aP0 + 1476); /*0x71632f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1044) + 12))(aP0 + 1044); /*0x71633e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1072) + 12))(aP0 + 1072); /*0x71634d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1100) + 12))(aP0 + 1100); /*0x71635c*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1128) + 12))(aP0 + 1128); /*0x71636b*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1156) + 12))(aP0 + 1156); /*0x71637a*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1184) + 12))(aP0 + 1184); /*0x716389*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1212) + 12))(aP0 + 1212); /*0x716398*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1240) + 12))(aP0 + 1240); /*0x7163a7*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1268) + 12))(aP0 + 1268); /*0x7163b6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1296) + 12))(aP0 + 1296); /*0x7163c5*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1836) + 12))(aP0 + 1836); /*0x7163d4*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1864) + 12))(aP0 + 1864); /*0x7163e3*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1592) + 12))(aP0 + 1592); /*0x7163f2*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 1620) + 12))(aP0 + 1620); /*0x716401*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(aP0 + 816) + 12))(aP0 + 816); /*0x716410*/
  result = ObjectTypeClass::LoadCleanup(aP0, aP1); /*0x71641c*/
  if ( result >= 0 ) /*0x716423*/
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1028)); /*0x716435*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1032)); /*0x716446*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1036)); /*0x716457*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1892)); /*0x716468*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1908)); /*0x716479*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3416)); /*0x71648a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3392)); /*0x71649b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3352)); /*0x7164ac*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1572)); /*0x7164bd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1576)); /*0x7164ce*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1720)); /*0x7164df*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 1724)); /*0x7164f0*/
    if ( aP0 != -1000 ) /*0x7164f7*/
      TypeList::BuildingTypeConstructor(v3); /*0x7164fb*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71650c*/
    for ( i = 0; i < v36; ++i ) /*0x71651d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71652b*/
      DynamicVector::Add_Alt3(v3, &v37); /*0x716535*/
    }
    if ( aP0 != -788 ) /*0x71654d*/
      TypeList::VoxelAnimConstructor((_DWORD *)(aP0 + 788)); /*0x716551*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716562*/
    for ( j = 0; j < v36; ++j ) /*0x71656d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71657b*/
      DynamicVector::Add2((_DWORD *)(aP0 + 788), &v37); /*0x716585*/
    }
    if ( aP0 != -1476 ) /*0x716599*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1476)); /*0x71659d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165ae*/
    for ( k = 0; k < v36; ++k ) /*0x7165b9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7165c7*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1476), &v37); /*0x7165d1*/
    }
    if ( aP0 != -1044 ) /*0x7165e5*/
      TypeList::Construct((_DWORD *)(aP0 + 1044)); /*0x7165e9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7165fa*/
    for ( m = 0; m < v36; ++m ) /*0x716605*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716613*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1044), &v37); /*0x71661d*/
    }
    if ( aP0 != -1072 ) /*0x716631*/
      TypeList::Construct((_DWORD *)(aP0 + 1072)); /*0x716635*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716646*/
    for ( n = 0; n < v36; ++n ) /*0x716651*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71665f*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1072), &v37); /*0x716669*/
    }
    if ( aP0 != -1100 ) /*0x71667d*/
      TypeList::Construct((_DWORD *)(aP0 + 1100)); /*0x716681*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716692*/
    for ( ii = 0; ii < v36; ++ii ) /*0x71669d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166ab*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1100), &v37); /*0x7166b5*/
    }
    if ( aP0 != -1128 ) /*0x7166c9*/
      TypeList::Construct((_DWORD *)(aP0 + 1128)); /*0x7166cd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7166de*/
    for ( jj = 0; jj < v36; ++jj ) /*0x7166e9*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7166f7*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1128), &v37); /*0x716701*/
    }
    if ( aP0 != -1156 ) /*0x716715*/
      TypeList::Construct((_DWORD *)(aP0 + 1156)); /*0x716719*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71672a*/
    for ( kk = 0; kk < v36; ++kk ) /*0x716735*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716743*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1156), &v37); /*0x71674d*/
    }
    if ( aP0 != -1184 ) /*0x716761*/
      TypeList::Construct((_DWORD *)(aP0 + 1184)); /*0x716765*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716776*/
    for ( mm = 0; mm < v36; ++mm ) /*0x716781*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71678f*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1184), &v37); /*0x716799*/
    }
    if ( aP0 != -1212 ) /*0x7167ad*/
      TypeList::Construct((_DWORD *)(aP0 + 1212)); /*0x7167b1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7167c2*/
    for ( nn = 0; nn < v36; ++nn ) /*0x7167cd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7167db*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1212), &v37); /*0x7167e5*/
    }
    if ( aP0 != -1240 ) /*0x7167f9*/
      TypeList::Construct((_DWORD *)(aP0 + 1240)); /*0x7167fd*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71680e*/
    for ( i1 = 0; i1 < v36; ++i1 ) /*0x716819*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716827*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1240), &v37); /*0x716831*/
    }
    if ( aP0 != -1268 ) /*0x716845*/
      TypeList::Construct((_DWORD *)(aP0 + 1268)); /*0x716849*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71685a*/
    for ( i2 = 0; i2 < v36; ++i2 ) /*0x716865*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716873*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1268), &v37); /*0x71687d*/
    }
    if ( aP0 != -1296 ) /*0x716891*/
      TypeList::Construct((_DWORD *)(aP0 + 1296)); /*0x716895*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168a6*/
    for ( i3 = 0; i3 < v36; ++i3 ) /*0x7168b1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7168bf*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1296), &v37); /*0x7168c9*/
    }
    if ( aP0 != -1836 ) /*0x7168dd*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1836)); /*0x7168e1*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7168f2*/
    for ( i4 = 0; i4 < v36; ++i4 ) /*0x7168fd*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x71690b*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1836), &v37); /*0x716915*/
    }
    if ( aP0 != -1864 ) /*0x716929*/
      AnimTypeList::Constructor((_DWORD *)(aP0 + 1864)); /*0x71692d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71693e*/
    for ( i5 = 0; i5 < v36; ++i5 ) /*0x716949*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716957*/
      DynamicVector::Add_Alt4((_DWORD *)(aP0 + 1864), &v37); /*0x716961*/
    }
    if ( aP0 != -816 ) /*0x716975*/
      TypeList::Construct((_DWORD *)(aP0 + 816)); /*0x716979*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x71698a*/
    for ( i6 = 0; i6 < v36; ++i6 ) /*0x716995*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169a3*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 816), &v37); /*0x7169ad*/
    }
    if ( aP0 != -1592 ) /*0x7169c1*/
      TypeList::Construct((_DWORD *)(aP0 + 1592)); /*0x7169c5*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x7169d6*/
    for ( i7 = 0; i7 < v36; ++i7 ) /*0x7169e1*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x7169ef*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1592), &v37); /*0x7169f9*/
    }
    if ( aP0 != -1620 ) /*0x716a0d*/
      TypeList::Construct((_DWORD *)(aP0 + 1620)); /*0x716a11*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a22*/
    for ( i8 = 0; i8 < v36; ++i8 ) /*0x716a2d*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a3b*/
      DynamicVector::Add_Alt((_DWORD *)(aP0 + 1620), &v37); /*0x716a45*/
    }
    if ( aP0 != -1912 ) /*0x716a59*/
      TechnoTypeClass::Constructor((_DWORD *)(aP0 + 1912)); /*0x716a5d*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716a6e*/
    for ( i9 = 0; i9 < v36; ++i9 ) /*0x716a79*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716a87*/
      TypeList::PushBack((_DWORD *)(aP0 + 1912), &v37); /*0x716a91*/
    }
    if ( aP0 != -1940 ) /*0x716aa5*/
      TechnoTypeClass::Constructor((_DWORD *)(aP0 + 1940)); /*0x716aa9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v36, 4, 0); /*0x716aba*/
    for ( i10 = 0; i10 < v36; ++i10 ) /*0x716ac5*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)aP1 + 12))(aP1, &v37, 4, 0); /*0x716ad3*/
      TypeList::PushBack((_DWORD *)(aP0 + 1940), &v37); /*0x716add*/
    }
    for ( i11 = 0; i11 < *(_DWORD *)(aP0 + 1016); ++i11 ) /*0x716af3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1004) + 4 * i11)); /*0x716b04*/
    for ( i12 = 0; i12 < *(_DWORD *)(aP0 + 1852); ++i12 ) /*0x716b1e*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1840) + 4 * i12)); /*0x716b2f*/
    for ( i13 = 0; i13 < *(_DWORD *)(aP0 + 1880); ++i13 ) /*0x716b49*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1868) + 4 * i13)); /*0x716b5a*/
    for ( i14 = 0; i14 < *(_DWORD *)(aP0 + 804); ++i14 ) /*0x716b74*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 792) + 4 * i14)); /*0x716b85*/
    for ( i15 = 0; i15 < *(_DWORD *)(aP0 + 1492); ++i15 ) /*0x716b9f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1480) + 4 * i15)); /*0x716bb0*/
    v29 = (int *)(aP0 + 2200); /*0x716bc0*/
    v30 = 18; /*0x716bc6*/
    do /*0x716bda*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v29); /*0x716bd1*/
      v29 += 7; /*0x716bd6*/
      --v30; /*0x716bd9*/
    }
    while ( v30 ); /*0x716bda*/
    v31 = (int *)(aP0 + 2708); /*0x716bdc*/
    v32 = 18; /*0x716be2*/
    do /*0x716bf6*/
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v31); /*0x716bed*/
      v31 += 7; /*0x716bf2*/
      --v32; /*0x716bf5*/
    }
    while ( v32 ); /*0x716bf6*/
    for ( i16 = 0; i16 < *(_DWORD *)(aP0 + 1928); ++i16 ) /*0x716c04*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1916) + 4 * i16)); /*0x716c15*/
    for ( i17 = 0; i17 < *(_DWORD *)(aP0 + 1956); ++i17 ) /*0x716c2f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(aP0 + 1944) + 4 * i17)); /*0x716c40*/
    _makepath(Buffer, 0, 0, (const char *)(aP0 + 504), Ext); /*0x716c66*/
    *(_DWORD *)(aP0 + 164) = SearchMIXFile(Buffer, 0); /*0x716c96*/
    INIClass::GetString( /*0x716c9c*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)g_INI_Key_Cameo,
      g_INI_Key_XXICON,
      Filename,
      256);
    if ( !_strcmpi(Filename, g_INI_Key_XXICON) ) /*0x716cab*/
      INIClass::GetString( /*0x716cd4*/
        (unsigned __int8 ***)&CCINIClass_INI_Art,
        (unsigned __int8 *)(aP0 + 36),
        (unsigned __int8 *)g_INI_Key_Cameo,
        g_INI_Key_XXICON,
        Filename,
        256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716ced*/
    *(_DWORD *)(aP0 + 1776) = 0; /*0x716cfe*/
    v35 = SearchMIXFile(Buffer, 0); /*0x716d04*/
    *(_DWORD *)(aP0 + 1776) = v35; /*0x716d0b*/
    if ( !v35 ) /*0x716d11*/
      *(_DWORD *)(aP0 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x716d1f*/
    INIClass::GetString( /*0x716d3f*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)aAltcameo,
      &g_INI_DefaultBuffer,
      Filename,
      256);
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x716d58*/
    *(_DWORD *)(aP0 + 1808) = 0; /*0x716d69*/
    *(_DWORD *)(aP0 + 1808) = SearchMIXFile(Buffer, 0); /*0x716d8d*/
    INIClass::GetString( /*0x716d93*/
      (unsigned __int8 ***)&CCINIClass_INI_Art,
      (unsigned __int8 *)(aP0 + 504),
      (unsigned __int8 *)g_INI_Key_Palette,
      &g_INI_DefaultBuffer,
      (char *)(aP0 + 3536),
      32);
    if ( *(_BYTE *)(aP0 + 3536) ) /*0x716d98*/
      *(_DWORD *)(aP0 + 3568) = FileExtension::MapHandler((const char *)(aP0 + 3536)); /*0x716da4*/
    return 0; /*0x716daa*/
  }
  return result; /*0x716dac*/
}
} // namespace gamemd
// 0x716DC0
namespace gamemd {
int TechnoTypeClass::SaveLoad_Prefix_0(void * a1, TechnoTypeClass * aP2, TechnoTypeClass * aP3)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx
  int v12; // edx
  int m; // ebx
  int v14; // edx
  int n; // ebx
  int v16; // edx
  int ii; // ebx
  int v18; // edx
  int jj; // ebx
  int v20; // edx
  int kk; // ebx
  int v22; // edx
  int mm; // ebx

  result = AbstractClass::SaveLoad_PrefixWrapper((int)this, (int)a1, aP2); /*0x716dd1*/
  if ( result >= 0 ) /*0x716dd8*/
  {
    v6 = *a1; /*0x716de4*/
    aP2 = this->u32_3F8; /*0x716df1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a1, &aP2, 4, 0, a1); /*0x716df5*/
    for ( i = 0; i < aP3; ++i ) /*0x716e00*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->BuildingTypeList_Items + 4 * i, 4, 0); /*0x716e13*/
    v8 = *a1; /*0x716e23*/
    aP3 = this->q324; /*0x716e2f*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a1, &aP3, 4, 0); /*0x716e33*/
    for ( j = 0; j < aP3; ++j ) /*0x716e3e*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->VoxelAnimList_Items + 4 * j, 4, 0); /*0x716e51*/
    v10 = *a1; /*0x716e61*/
    aP3 = this->q5D4; /*0x716e6d*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v10 + 16))(a1, &aP3, 4, 0); /*0x716e71*/
    for ( k = 0; k < aP3; ++k ) /*0x716e7c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->q5C8 + 4 * k, 4, 0); /*0x716e8f*/
    v12 = *a1; /*0x716e9f*/
    aP3 = this->ptr_424; /*0x716eab*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v12 + 16))(a1, &aP3, 4, 0); /*0x716eaf*/
    for ( m = 0; m < aP3; ++m ) /*0x716eba*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_B_Items + 4 * m, 4, 0); /*0x716ecd*/
    v14 = *a1; /*0x716edd*/
    aP3 = this->q440; /*0x716ee9*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v14 + 16))(a1, &aP3, 4, 0); /*0x716eed*/
    for ( n = 0; n < aP3; ++n ) /*0x716ef8*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_C_Items + 4 * n, 4, 0); /*0x716f0b*/
    v16 = *a1; /*0x716f1b*/
    aP3 = this->q45C; /*0x716f27*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v16 + 16))(a1, &aP3, 4, 0); /*0x716f2b*/
    for ( ii = 0; ii < aP3; ++ii ) /*0x716f36*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_D_Items + 4 * ii, 4, 0); /*0x716f49*/
    v18 = *a1; /*0x716f59*/
    aP3 = this->q478; /*0x716f65*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v18 + 16))(a1, &aP3, 4, 0); /*0x716f69*/
    for ( jj = 0; jj < aP3; ++jj ) /*0x716f74*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_E_Items + 4 * jj, 4, 0); /*0x716f87*/
    v20 = *a1; /*0x716f97*/
    aP3 = this->ptr_494; /*0x716fa3*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v20 + 16))(a1, &aP3, 4, 0); /*0x716fa7*/
    for ( kk = 0; kk < aP3; ++kk ) /*0x716fb2*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_F_Items + 4 * kk, 4, 0); /*0x716fc5*/
    v22 = *a1; /*0x716fd5*/
    aP3 = this->q4B0; /*0x716fe1*/
    (*(void (__stdcall **)(int *, int *, int))(v22 + 16))(a1, &aP3, 4); /*0x716fe5*/
    for ( mm = 0; mm < aP2; ++mm ) /*0x716ff0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a1 + 16))(a1, this->IntList_G_Items + 4 * mm, 4, 0); /*0x717003*/
    DynamicVector::Read(&this->VoiceDie, a1); /*0x717014*/
    DynamicVector::Read(&this->VoiceFeedback, a1); /*0x717020*/
    DynamicVector::Read(&this->MoveSound, a1); /*0x71702c*/
    DynamicVector::Read(&this->DieSound, a1); /*0x717038*/
    Stream::WriteIntArray(&this->Explosion, a1); /*0x717044*/
    Stream::WriteIntArray(&this->DestroyAnim, a1); /*0x717050*/
    DynamicVector::Read(&this->DebrisMaximums, a1); /*0x71705c*/
    DynamicVector::Read(&this->Prerequisite, a1); /*0x717068*/
    DynamicVector::Read(&this->PrerequisiteOverride, a1); /*0x717074*/
    TechnoTypeClass::SaveLoadDataArray(&this->DamageParticleSystems, a1); /*0x717080*/
    TechnoTypeClass::SaveLoadDataArray(&this->DestroyParticleSystems, a1); /*0x71708c*/
    return 0; /*0x717091*/
  }
  return result; /*0x717094*/
}
} // namespace gamemd
// 0x41CB50
namespace gamemd {
char TechnoTypeClass::vt_entry_A0()
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
bool TechnoTypeClass::CanAttackMove_IgnoreWeapon()
{
  return this->Weapon && !this->q6C8; /*0x711ea6*/
}
// 0x711EE0
double TechnoTypeClass::ComputeBuildTime()
{
  double result; // st7

  result = (double)*(&this->u32_988) * *((double *)g_RulesClass_Instance + 745) * 0.9; /*0x711ef1*/
  Math::RoundToInt(result); /*0x711ef7*/
  return result;
}
// 0x7179A0
TechnoTypeClass * TechnoTypeClass::ddtor(char a2)
{
  TechnoTypeClass::DTOR(); /*0x7179a3*/
  if ( (a2 & 1) != 0 ) /*0x7179ad*/
    RA2_OPDEL(); /*0x7179b0*/
  return this; /*0x7179ba*/
}
// 0x717AF0
unsigned int * TechnoTypeClass::Constructor()
{
  this->vtable2 = 0; /*0x717af4*/
  *(this + 2) = 0; /*0x717af7*/
  this->IsInitialized = 1; /*0x717afa*/
  this->IsAllocated = 0; /*0x717afe*/
  this->CapacityIncrement = 10; /*0x717b01*/
  this->Count = 0; /*0x717b08*/
  *this = (void*)&TypeList_ParticleSystemTypeClass_const___vftable; /*0x717b0b*/
  return this; /*0x717b11*/
}
// 0x717B20
int TechnoTypeClass::SaveLoadDataArray(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x717b2c*/
  v6 = *(this + 4); /*0x717b39*/
  (*(void (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(aP1, &v6, 4, 0); /*0x717b3d*/
  result = v6; /*0x717b40*/
  for ( i = 0; i < v6; ++i ) /*0x717b48*/
  {
    (*(void (__stdcall **)(int *, int, int, _DWORD))(*aP1 + 16))(aP1, *(this + 1) + 4 * i, 4, 0); /*0x717b58*/
    result = v6; /*0x717b5b*/
  }
  return result; /*0x717b64*/
}
// 0x717BC0
unsigned int * TechnoTypeClass::Constructor_0(ObjectTypeClass * aP1)
{
  *this = (void*)&DynamicVectorClass_VoxelAnimTypeClass_const___vftable; /*0x717bc2*/
  return this; /*0x717bc8*/
}
// 0x717BE0
VectorClass_flat * TechnoTypeClass::Constructor_1(ObjectTypeClass * aP1)
{
  *this = (void*)&DynamicVectorClass_BuildingTypeClass_const___vftable; /*0x717be2*/
  return this; /*0x717be8*/
}
// 0x717DB0
char TechnoTypeClass::RemoveItem(int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x717db0*/
  v3 = a2; /*0x717db3*/
  if ( a2 >= v2 ) /*0x717db9*/
    return 0; /*0x717ddc*/
  v4 = v2 - 1; /*0x717dbb*/
  *(this + 4) = v4; /*0x717dbe*/
  if ( a2 < v4 ) /*0x717dc1*/
  {
    do /*0x717dd4*/
    {
      ++v3; /*0x717dc7*/
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x717dcb*/
    }
    while ( v3 < *(this + 4) ); /*0x717dd4*/
  }
  return 1; /*0x717dd9*/
}
// 0x7473D0
namespace gamemd {
void* TechnoTypeClass::CanAttackMove_IgnoreWeapon_0_0()
{
  return TechnoTypeClass::CanAttackMove_IgnoreWeapon();
}
}