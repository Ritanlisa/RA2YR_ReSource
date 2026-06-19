#pragma once

#include <cstdint>

// Forward declarations
class FootClass;
class MissionClass;
class Object;
class ObjectClass;
class ObjectPlacement;
class ObjectPtr;
class ObjectTypeClass;
class RadioClass;
class Techno;
class TechnoClass;
class TechnoTypeClass;

namespace ra2 {
namespace game {

// === FootClass ===
int FootClass::Destru_vt323(); // IDA: 0x41c090
int FootClass::CheckVoiceResponse(); // IDA: 0x4d4b20
int FootClass::ProcessMissionVoice(); // IDA: 0x4d4cb0
int FootClass::FindAITarget(); // IDA: 0x4d6aa0
int FootClass::ProcessDeploy(); // IDA: 0x4d7330
char FootClass::ValidatePlacement(); // IDA: 0x4d82b0
char FootClass::UpdateAI(); // IDA: 0x4d85d0
void FootClass::ValidateFoundation(); // IDA: 0x4de580
int FootClass::DeployAction(); // IDA: 0x4deae0
char FootClass::ScanAdjacentCells(); // IDA: 0x4df510
bool FootClass::CanEnterCell(); // IDA: 0x709290
char FootClass::RespondToDestruction(); // IDA: 0x738970

// === Object ===
int Object::ComputeAllocationSize(); // IDA: 0x42b1f0
int Object::SaveObject(); // IDA: 0x5fd950
int Object::ddtor(); // IDA: 0x5fdf10

// === ObjectClass ===
bool ObjectClass::HasLinkedObject(); // IDA: 0x4135a0
int ObjectClass::CheckCellFlags(); // IDA: 0x4d9c60
int ObjectClass::LoadFromStream_Common(); // IDA: 0x4db3c0
long ObjectClass::SaveToStream_Common(); // IDA: 0x4db690
uint32_t* ObjectClass::FindPlacementCell(); // IDA: 0x4de1d0
float* ObjectClass::BuildTransform(); // IDA: 0x513f40
uint32_t* ObjectClass::ComputeScreenYOffset(); // IDA: 0x55a8c0
char ObjectClass::SetDeployState(); // IDA: 0x55baa0
void ObjectClass::CleanupSidebarResources(); // IDA: 0x6a5bf0
int ObjectClass::sub_6ABA40(); // IDA: 0x6aba40
int ObjectClass::FindOwner(); // IDA: 0x6e45e0

// === ObjectPlacement ===
int* ObjectPlacement::CalcPosition_Wrapper(); // IDA: 0x4aca10

// === ObjectPtr ===
int ObjectPtr::RegisterForTracking(); // IDA: 0x6cf240

// === ObjectTypeClass ===
uint32_t* ObjectTypeClass::vt_entry_7C(); // IDA: 0x41cbf0
uint32_t* ObjectTypeClass::Copy(); // IDA: 0x41cf80
uint32_t* ObjectTypeClass::InitTripleTen(); // IDA: 0x5f75c0
void ObjectTypeClass::UnloadPipsSHP(); // IDA: 0x5f77f0
int ObjectTypeClass::LoadCleanup(); // IDA: 0x5f9720
char ObjectTypeClass::LoadExtras(); // IDA: 0x712170

// === RadioClass ===
int RadioClass::SaveState(); // IDA: 0x65ac40

// === Techno ===
int Techno::StartInvulnerability(); // IDA: 0x70e360

// === TechnoClass ===
int TechnoClass::CanFireAtTarget(); // IDA: 0x41a9e0
int TechnoClass::ComputeTeamAttackPriority(); // IDA: 0x41b6a0
int TechnoClass::GetAutoFireDirection(); // IDA: 0x41b760
int TechnoClass::sub_41B7D0(); // IDA: 0x41b7d0
uint32_t* TechnoClass::HasOnlyOneGarrisonSlot(); // IDA: 0x41b7f0
int TechnoClass::sub_41B840(); // IDA: 0x41b840
int TechnoClass::sub_41B860(); // IDA: 0x41b860
char TechnoClass::CreateWarheadDamageEffect(); // IDA: 0x41bc30
int TechnoClass::ClearArrays(); // IDA: 0x5f99e0
void TechnoClass::ProcessBorderTower(); // IDA: 0x6ed4d0
uint32_t* TechnoClass::Update(); // IDA: 0x6f3f40
int TechnoClass::Mission_RepairDispatch(); // IDA: 0x6f4ab0
char TechnoClass::FinishDeploy(); // IDA: 0x6f6ca0
void* TechnoClass::SelectAutoTarget_Start_AU(); // IDA: 0x6f8df0
int* TechnoClass::GetFiringAngle(); // IDA: 0x6fda00
char TechnoClass::ProcessCapture(); // IDA: 0x7014a0
int TechnoClass::ReceiveDamage_Shield(); // IDA: 0x701900
void TechnoClass::PickAlternateTarget(); // IDA: 0x708e00
char TechnoClass::EnteredOpenTopped(); // IDA: 0x710470
int TechnoClass::ExitedOpenTopped(); // IDA: 0x7104a0
void TechnoClass::GetField(); // IDA: 0x731cf0
uint32_t* TechnoClass::GatherAllBuildings(); // IDA: 0x732050
int TechnoClass::CheckUnitFireConstraints(); // IDA: 0x740fd0
void TechnoClass::ProcessSpecialUnitDeployCrush(); // IDA: 0x7416a0
void* TechnoClass::SelectAutoTargetWithGarrison(); // IDA: 0x743190
int TechnoClass::MarkCellImpassable(); // IDA: 0x7441b0
char TechnoClass::ClearCellImpassable(); // IDA: 0x744210
char TechnoClass::ProcessUnitSelfDestruct(); // IDA: 0x746100

// === TechnoTypeClass ===
int TechnoTypeClass::GetByTypeAndIndex(); // IDA: 0x48dcd0
int TechnoTypeClass::SaveLoad_Prefix(); // IDA: 0x7162f0
int TechnoTypeClass::SaveLoad_Prefix_0(); // IDA: 0x716dc0

} // namespace game
} // namespace ra2
