// Auto-generated from tools/functions_by_module.json
// Module: structure+house+team, namespace: gamemd
// 129 functions: all member functions (24 classes)

#pragma once

// Forward declarations
class AircraftClass;
class AircraftTypeClass;
class Building;
class BuildingAnim;
class BuildingClass;
class BuildingLight;
class BuildingLightClass;
class BuildingPlacement;
class BuildingTypeClass;
class HouseClass;
class HouseTypeClass;
class InfantryClass;
class InfantryTypeClass;
class ScriptAction;
class ScriptClass;
class ScriptTypeClass;
class TagClass;
class TagTypeClass;
class TeamClass;
class TeamTypeClass;
class TriggerClass;
class TriggerTypeClass;
class UnitClass;
class UnitTypeClass;

namespace gamemd {

// === AircraftClass ===
// 8 member function(s)
    unsigned int* AircraftClass::Update(); // 0x413F80
    int AircraftClass::DeployWithAnim(); // 0x4165C0
    int AircraftClass::Mission_Enter(); // 0x4166C0
    int AircraftClass::Mission_Transport(); // 0x419C80
    char AircraftClass::AssignDestination_SyncLog(); // 0x41AA80
    int AircraftClass::LoadFromStream(); // 0x41B430
    HRESULT AircraftClass::CheckPassengerCount(); // 0x41B5C0
    int AircraftClass::PowerDrainProcess(); // 0x41C190

// === AircraftTypeClass ===
// 6 member function(s)
    int* AircraftTypeClass::CreateAircraft(); // 0x41CB70
    char AircraftTypeClass::LoadTypeData(); // 0x41CC20
    int AircraftTypeClass::LoadFromINI(); // 0x41CE20
    void AircraftTypeClass::SaveToINI(); // 0x41CE90
    int AircraftTypeClass::GetClassIdentifier(); // 0x41CEB0
    int AircraftTypeClass::GetGameplayValue(); // 0x712120

// === BuildingLightClass ===
// 2 member function(s)
    int BuildingLightClass::SD_vt03(); // 0x436910
    int BuildingLightClass::SD_vt06(); // 0x4369C0

// === BuildingClass ===
// 15 member function(s)
    int BuildingClass::PlayAnim(); // 0x451890
    int BuildingClass::Create(); // 0x466000
    char BuildingClass::ValidateFoundation_0(); // 0x4DC8C0
    char BuildingClass::FindClosestForRepair(); // 0x4DFCB0
    char BuildingClass::FindClosestForRepair2(); // 0x4DFE00
    int BuildingClass::Deploy(); // 0x62A4A0
    char BuildingClass::SetProduction(); // 0x6395B0
    int BuildingClass::CompleteProduction(); // 0x639740
    int BuildingClass::LoadBuildingTypes(); // 0x67B720
    int BuildingClass::AllocAndCtor(); // 0x70BF50
    int BuildingClass::ClearFactoryData(); // 0x722240
    int BuildingClass::FreeUpgradeQueue(); // 0x722390
    int BuildingClass::ClearOccupancyData(); // 0x722D00
    int BuildingClass::FreeUpgradeQueue2(); // 0x722E50
    char BuildingClass::ProcessSell(); // 0x739EC0

// === BuildingTypeClass ===
// 1 member function(s)
    void BuildingTypeClass::LoadRepairAnimations(); // 0x45E970

// === BuildingLight ===
// 1 member function(s)
    double BuildingLight::CalcIntensity(); // 0x4CAD80

// === InfantryClass ===
// 13 member function(s)
    int InfantryClass::ScanTarget(); // 0x4D4DC0
    int InfantryClass::ProcessDeploy(); // 0x4D5350
    char InfantryClass::DeployAnimation(); // 0x514310
    unsigned int* InfantryClass::PerFrameUpdate(); // 0x517CC0
    char InfantryClass::RepairBridge(); // 0x519630
    int InfantryClass::GetFireError(); // 0x51C8B0
    char InfantryClass::ValidatePlacement(); // 0x51CBA0
    char InfantryClass::ClearCellPassability(); // 0x521850
    int InfantryClass::LoadFromStream(); // 0x521960
    HRESULT InfantryClass::SaveLoad_Prefix(); // 0x521B00
    int InfantryClass::GetClassID(); // 0x523300
    char InfantryClass::IdleStateMachine(); // 0x728E30
    char InfantryClass::UpdateBehavior(); // 0x736579

// === BuildingAnim ===
// 1 member function(s)
    int BuildingAnim::GetType(); // 0x4E12D0

// === BuildingPlacement ===
// 1 member function(s)
    unsigned int* BuildingPlacement::FindPosition(); // 0x500200

// === InfantryTypeClass ===
// 8 member function(s)
    int* InfantryTypeClass::GetDimensions(); // 0x523C20
    char InfantryTypeClass::LoadFromINI(); // 0x5240A0
    unsigned int* InfantryTypeClass::GetDefaultDimensions(); // 0x524760
    int InfantryTypeClass::GetGameplayValue(); // 0x524790
    unsigned int* InfantryTypeClass::ClampToGroundHeight(); // 0x5247D0
    int InfantryTypeClass::LoadTypeData(); // 0x524960
    int InfantryTypeClass::SaveLoad_Prefix(); // 0x524B60
    int InfantryTypeClass::GetClassIdentifier(); // 0x524C70

// === Building ===
// 1 member function(s)
    unsigned int* Building::GetFoundationSize(); // 0x69E7E0

// === UnitClass ===
// 6 member function(s)
    int UnitClass::SaveState(); // 0x6B4F00
    int UnitClass::GetClassID(); // 0x6B4F50
    char UnitClass::Deploy(); // 0x7192F0
    int UnitClass::OnUnderAttack(); // 0x737C90
    int UnitClass::LoadFromStream(); // 0x744470
    unsigned int* UnitClass::PerFrameUpdate(); // 0x746810

// === UnitTypeClass ===
// 7 member function(s)
    unsigned int* UnitTypeClass::GetDefaultDimensions(); // 0x7475D0
    char UnitTypeClass::LoadFromINI(); // 0x747620
    unsigned int* UnitTypeClass::ClampToGroundHeight(); // 0x747EB0
    int UnitTypeClass::GetGameplayValue(); // 0x747F20
    int UnitTypeClass::GetClassIdentifier(); // 0x747F30
    int UnitTypeClass::LoadFromINI2(); // 0x748010
    void UnitTypeClass::SaveToINI(); // 0x7480B0

// === HouseClass ===
// 16 member function(s)
    void HouseClass::FailedToPlaceNode(); // 0x42F380
    void** HouseClass::PsiWarn(); // 0x43B5E0
    void HouseClass::ResetObjectOrders(); // 0x4ADEE0
    int HouseClass::RevealShroudForAllies(); // 0x4ADFF0
    int HouseClass::sub_4E8240(); // 0x4E8240
    int HouseClass::sub_4E8250(); // 0x4E8250
    char HouseClass::CanDetect(); // 0x501640
    HRESULT HouseClass::SaveLoad_Prefix(); // 0x503040
    char HouseClass::PrerequisitesForTechnoTypeAreListed(); // 0x505360
    int HouseClass::RespawnStartingBuildings(); // 0x50D320
    int HouseClass::RespawnStartingForces(); // 0x50D440
    int HouseClass::COMStub_Ret1_1(); // 0x50E340
    int HouseClass::COMStub_Ret1_2(); // 0x50E350
    char HouseClass::AIDecision(); // 0x5D70F0
    char HouseClass::InitAlliances(); // 0x5D74A0
    void HouseClass::FindStartPositions(); // 0x5EE9D0

// === HouseTypeClass ===
// 11 member function(s)
    char HouseTypeClass::LoadFromINI(); // 0x511850
    int HouseTypeClass::SaveLoad_Prefix(); // 0x512290
    int HouseTypeClass::SaveLoad_Prefix_0(); // 0x512480
    int HouseTypeClass::LoadHouse(); // 0x512570
    int HouseTypeClass::GetClassIdentifier(); // 0x512640
    int HouseTypeClass::AddRef(); // 0x512740
    int HouseTypeClass::Release(); // 0x512750
    int HouseTypeClass::sub_5139E0(); // 0x5139E0
    int HouseTypeClass::sub_5139F0(); // 0x5139F0
    int HouseTypeClass::sub_513A00(); // 0x513A00
    int HouseTypeClass::ReadCountryName(); // 0x67B8F0

// === TriggerClass ===
// 4 member function(s)
    char TriggerClass::FindByEventType(); // 0x610950
    int TriggerClass::ddtor(); // 0x726820
    int TriggerClass::LoadTrigger(); // 0x726860
    int TriggerClass::SaveTrigger(); // 0x7268D0

// === ScriptAction ===
// 3 member function(s)
    int ScriptAction::ClassifyAction(); // 0x638CE0
    int ScriptAction::ExecutePlacement(); // 0x639A50
    char ScriptAction::HitTest(); // 0x63A8E0

// === ScriptClass ===
// 3 member function(s)
    int ScriptClass::ddtor(); // 0x6915F0
    int ScriptClass::LoadState(); // 0x691630
    int ScriptClass::SaveState(); // 0x691690

// === ScriptTypeClass ===
// 4 member function(s)
    int ScriptTypeClass::GetClassIdentifier(); // 0x691D50
    int ScriptTypeClass::LoadTypeData(); // 0x691D90
    int ScriptTypeClass::SaveToINI(); // 0x691DE0
    int ScriptTypeClass::ReadINI(); // 0x6E8340

// === TagClass ===
// 3 member function(s)
    int TagClass::ddtor(); // 0x6E56A0
    int TagClass::LoadTag(); // 0x6E5730
    int TagClass::SaveTag(); // 0x6E57A0

// === TagTypeClass ===
// 3 member function(s)
    int TagTypeClass::GetClassIdentifier(); // 0x6E63A0
    int TagTypeClass::LoadTypeData(); // 0x6E6410
    int TagTypeClass::SaveToINI(); // 0x6E6470

// === TeamClass ===
// 4 member function(s)
    void TeamClass::Update(); // 0x6E9140
    int TeamClass::SaveLoad_Prefix(); // 0x6EC450
    int TeamClass::SaveLoad_Prefix_0(); // 0x6EC540
    int TeamClass::ddtor(); // 0x6EC560

// === TeamTypeClass ===
// 4 member function(s)
    int TeamTypeClass::ReadScriptData(); // 0x6F1AB0
    int TeamTypeClass::SaveToINI(); // 0x6F1B90
    int TeamTypeClass::LoadTypeData(); // 0x6F1BB0
    int TeamTypeClass::GetClassIdentifier(); // 0x6F1C40

// === TriggerTypeClass ===
// 4 member function(s)
    int TriggerTypeClass::ReadINI(); // 0x6FC0B0
    int TriggerTypeClass::GetClassIdentifier(); // 0x727BB0
    int TriggerTypeClass::LoadTypeData(); // 0x727BF0
    int TriggerTypeClass::Write(); // 0x727C80

} // namespace gamemd