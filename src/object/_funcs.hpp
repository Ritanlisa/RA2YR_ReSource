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
int FootClass::Destru_vt323(); // 0x41C090
int FootClass::CheckVoiceResponse(); // 0x4D4B20
int FootClass::ProcessMissionVoice(); // 0x4D4CB0
int FootClass::FindAITarget(); // 0x4D6AA0
int FootClass::ProcessDeploy(); // 0x4D7330
char FootClass::ValidatePlacement(); // 0x4D82B0
char FootClass::UpdateAI(); // 0x4D85D0
void FootClass::ValidateFoundation(); // 0x4DE580
int FootClass::DeployAction(); // 0x4DEAE0
char FootClass::ScanAdjacentCells(); // 0x4DF510
bool FootClass::CanEnterCell(); // 0x709290
char FootClass::RespondToDestruction(); // 0x738970

// === Object ===
int Object::ComputeAllocationSize(); // 0x42B1F0
int Object::SaveObject(); // 0x5FD950
int Object::ddtor(); // 0x5FDF10

// === ObjectClass ===
bool ObjectClass::HasLinkedObject(); // 0x4135A0
int ObjectClass::CheckCellFlags(); // 0x4D9C60
int ObjectClass::LoadFromStream_Common(); // 0x4DB3C0
long ObjectClass::SaveToStream_Common(); // 0x4DB690
uint32_t* ObjectClass::FindPlacementCell(); // 0x4DE1D0
float* ObjectClass::BuildTransform(); // 0x513F40
uint32_t* ObjectClass::ComputeScreenYOffset(); // 0x55A8C0
char ObjectClass::SetDeployState(); // 0x55BAA0
void ObjectClass::CleanupSidebarResources(); // 0x6A5BF0
int ObjectClass::sub_6ABA40(); // 0x6ABA40
int ObjectClass::FindOwner(); // 0x6E45E0

// === ObjectPlacement ===
int* ObjectPlacement::CalcPosition_Wrapper(); // 0x4ACA10

// === ObjectPtr ===
int ObjectPtr::RegisterForTracking(); // 0x6CF240

// === ObjectTypeClass ===
uint32_t* ObjectTypeClass::vt_entry_7C(); // 0x41CBF0
uint32_t* ObjectTypeClass::Copy(); // 0x41CF80
uint32_t* ObjectTypeClass::InitTripleTen(); // 0x5F75C0
void ObjectTypeClass::UnloadPipsSHP(); // 0x5F77F0
int ObjectTypeClass::LoadCleanup(); // 0x5F9720
char ObjectTypeClass::LoadExtras(); // 0x712170

// === RadioClass ===
int RadioClass::SaveState(); // 0x65AC40

// === Techno ===
int Techno::StartInvulnerability(); // 0x70E360

// === TechnoClass ===
int TechnoClass::CanFireAtTarget(); // 0x41A9E0
int TechnoClass::ComputeTeamAttackPriority(); // 0x41B6A0
int TechnoClass::GetAutoFireDirection(); // 0x41B760
int TechnoClass::sub_41B7D0(); // 0x41B7D0
uint32_t* TechnoClass::HasOnlyOneGarrisonSlot(); // 0x41B7F0
int TechnoClass::sub_41B840(); // 0x41B840
int TechnoClass::sub_41B860(); // 0x41B860
char TechnoClass::CreateWarheadDamageEffect(); // 0x41BC30
int TechnoClass::ClearArrays(); // 0x5F99E0
void TechnoClass::ProcessBorderTower(); // 0x6ED4D0
uint32_t* TechnoClass::Update(); // 0x6F3F40
int TechnoClass::Mission_RepairDispatch(); // 0x6F4AB0
char TechnoClass::FinishDeploy(); // 0x6F6CA0
void* TechnoClass::SelectAutoTarget_Start_AU(); // 0x6F8DF0
int* TechnoClass::GetFiringAngle(); // 0x6FDA00
char TechnoClass::ProcessCapture(); // 0x7014A0
int TechnoClass::ReceiveDamage_Shield(); // 0x701900
void TechnoClass::PickAlternateTarget(); // 0x708E00
char TechnoClass::EnteredOpenTopped(); // 0x710470
int TechnoClass::ExitedOpenTopped(); // 0x7104A0
void TechnoClass::GetField(); // 0x731CF0
uint32_t* TechnoClass::GatherAllBuildings(); // 0x732050
int TechnoClass::CheckUnitFireConstraints(); // 0x740FD0
void TechnoClass::ProcessSpecialUnitDeployCrush(); // 0x7416A0
void* TechnoClass::SelectAutoTargetWithGarrison(); // 0x743190
int TechnoClass::MarkCellImpassable(); // 0x7441B0
char TechnoClass::ClearCellImpassable(); // 0x744210
char TechnoClass::ProcessUnitSelfDestruct(); // 0x746100

// === TechnoTypeClass ===
int TechnoTypeClass::GetByTypeAndIndex(); // 0x48DCD0
int TechnoTypeClass::SaveLoad_Prefix(); // 0x7162F0
int TechnoTypeClass::SaveLoad_Prefix_0(); // 0x716DC0

} // namespace game
} // namespace ra2
