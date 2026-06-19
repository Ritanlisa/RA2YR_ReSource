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
    unsigned int* AircraftClass::Update(); // IDA: 0x413f80
    int AircraftClass::DeployWithAnim(); // IDA: 0x4165c0
    int AircraftClass::Mission_Enter(); // IDA: 0x4166c0
    int AircraftClass::Mission_Transport(); // IDA: 0x419c80
    char AircraftClass::AssignDestination_SyncLog(); // IDA: 0x41aa80
    int AircraftClass::LoadFromStream(); // IDA: 0x41b430
    HRESULT AircraftClass::CheckPassengerCount(); // IDA: 0x41b5c0
    int AircraftClass::PowerDrainProcess(); // IDA: 0x41c190

// === AircraftTypeClass ===
// 6 member function(s)
    int* AircraftTypeClass::CreateAircraft(); // IDA: 0x41cb70
    char AircraftTypeClass::LoadTypeData(); // IDA: 0x41cc20
    int AircraftTypeClass::LoadFromINI(); // IDA: 0x41ce20
    void AircraftTypeClass::SaveToINI(); // IDA: 0x41ce90
    int AircraftTypeClass::GetClassIdentifier(); // IDA: 0x41ceb0
    int AircraftTypeClass::GetGameplayValue(); // IDA: 0x712120

// === BuildingLightClass ===
// 2 member function(s)
    int BuildingLightClass::SD_vt03(); // IDA: 0x436910
    int BuildingLightClass::SD_vt06(); // IDA: 0x4369c0

// === BuildingClass ===
// 15 member function(s)
    int BuildingClass::PlayAnim(); // IDA: 0x451890
    int BuildingClass::Create(); // IDA: 0x466000
    char BuildingClass::ValidateFoundation_0(); // IDA: 0x4dc8c0
    char BuildingClass::FindClosestForRepair(); // IDA: 0x4dfcb0
    char BuildingClass::FindClosestForRepair2(); // IDA: 0x4dfe00
    int BuildingClass::Deploy(); // IDA: 0x62a4a0
    char BuildingClass::SetProduction(); // IDA: 0x6395b0
    int BuildingClass::CompleteProduction(); // IDA: 0x639740
    int BuildingClass::LoadBuildingTypes(); // IDA: 0x67b720
    int BuildingClass::AllocAndCtor(); // IDA: 0x70bf50
    int BuildingClass::ClearFactoryData(); // IDA: 0x722240
    int BuildingClass::FreeUpgradeQueue(); // IDA: 0x722390
    int BuildingClass::ClearOccupancyData(); // IDA: 0x722d00
    int BuildingClass::FreeUpgradeQueue2(); // IDA: 0x722e50
    char BuildingClass::ProcessSell(); // IDA: 0x739ec0

// === BuildingTypeClass ===
// 1 member function(s)
    void BuildingTypeClass::LoadRepairAnimations(); // IDA: 0x45e970

// === BuildingLight ===
// 1 member function(s)
    double BuildingLight::CalcIntensity(); // IDA: 0x4cad80

// === InfantryClass ===
// 13 member function(s)
    int InfantryClass::ScanTarget(); // IDA: 0x4d4dc0
    int InfantryClass::ProcessDeploy(); // IDA: 0x4d5350
    char InfantryClass::DeployAnimation(); // IDA: 0x514310
    unsigned int* InfantryClass::PerFrameUpdate(); // IDA: 0x517cc0
    char InfantryClass::RepairBridge(); // IDA: 0x519630
    int InfantryClass::GetFireError(); // IDA: 0x51c8b0
    char InfantryClass::ValidatePlacement(); // IDA: 0x51cba0
    char InfantryClass::ClearCellPassability(); // IDA: 0x521850
    int InfantryClass::LoadFromStream(); // IDA: 0x521960
    HRESULT InfantryClass::SaveLoad_Prefix(); // IDA: 0x521b00
    int InfantryClass::GetClassID(); // IDA: 0x523300
    char InfantryClass::IdleStateMachine(); // IDA: 0x728e30
    char InfantryClass::UpdateBehavior(); // IDA: 0x736579

// === BuildingAnim ===
// 1 member function(s)
    int BuildingAnim::GetType(); // IDA: 0x4e12d0

// === BuildingPlacement ===
// 1 member function(s)
    unsigned int* BuildingPlacement::FindPosition(); // IDA: 0x500200

// === InfantryTypeClass ===
// 8 member function(s)
    int* InfantryTypeClass::GetDimensions(); // IDA: 0x523c20
    char InfantryTypeClass::LoadFromINI(); // IDA: 0x5240a0
    unsigned int* InfantryTypeClass::GetDefaultDimensions(); // IDA: 0x524760
    int InfantryTypeClass::GetGameplayValue(); // IDA: 0x524790
    unsigned int* InfantryTypeClass::ClampToGroundHeight(); // IDA: 0x5247d0
    int InfantryTypeClass::LoadTypeData(); // IDA: 0x524960
    int InfantryTypeClass::SaveLoad_Prefix(); // IDA: 0x524b60
    int InfantryTypeClass::GetClassIdentifier(); // IDA: 0x524c70

// === Building ===
// 1 member function(s)
    unsigned int* Building::GetFoundationSize(); // IDA: 0x69e7e0

// === UnitClass ===
// 6 member function(s)
    int UnitClass::SaveState(); // IDA: 0x6b4f00
    int UnitClass::GetClassID(); // IDA: 0x6b4f50
    char UnitClass::Deploy(); // IDA: 0x7192f0
    int UnitClass::OnUnderAttack(); // IDA: 0x737c90
    int UnitClass::LoadFromStream(); // IDA: 0x744470
    unsigned int* UnitClass::PerFrameUpdate(); // IDA: 0x746810

// === UnitTypeClass ===
// 7 member function(s)
    unsigned int* UnitTypeClass::GetDefaultDimensions(); // IDA: 0x7475d0
    char UnitTypeClass::LoadFromINI(); // IDA: 0x747620
    unsigned int* UnitTypeClass::ClampToGroundHeight(); // IDA: 0x747eb0
    int UnitTypeClass::GetGameplayValue(); // IDA: 0x747f20
    int UnitTypeClass::GetClassIdentifier(); // IDA: 0x747f30
    int UnitTypeClass::LoadFromINI2(); // IDA: 0x748010
    void UnitTypeClass::SaveToINI(); // IDA: 0x7480b0

// === HouseClass ===
// 16 member function(s)
    void HouseClass::FailedToPlaceNode(); // IDA: 0x42f380
    void** HouseClass::PsiWarn(); // IDA: 0x43b5e0
    void HouseClass::ResetObjectOrders(); // IDA: 0x4adee0
    int HouseClass::RevealShroudForAllies(); // IDA: 0x4adff0
    int HouseClass::sub_4E8240(); // IDA: 0x4e8240
    int HouseClass::sub_4E8250(); // IDA: 0x4e8250
    char HouseClass::CanDetect(); // IDA: 0x501640
    HRESULT HouseClass::SaveLoad_Prefix(); // IDA: 0x503040
    char HouseClass::PrerequisitesForTechnoTypeAreListed(); // IDA: 0x505360
    int HouseClass::RespawnStartingBuildings(); // IDA: 0x50d320
    int HouseClass::RespawnStartingForces(); // IDA: 0x50d440
    int HouseClass::COMStub_Ret1_1(); // IDA: 0x50e340
    int HouseClass::COMStub_Ret1_2(); // IDA: 0x50e350
    char HouseClass::AIDecision(); // IDA: 0x5d70f0
    char HouseClass::InitAlliances(); // IDA: 0x5d74a0
    void HouseClass::FindStartPositions(); // IDA: 0x5ee9d0

// === HouseTypeClass ===
// 11 member function(s)
    char HouseTypeClass::LoadFromINI(); // IDA: 0x511850
    int HouseTypeClass::SaveLoad_Prefix(); // IDA: 0x512290
    int HouseTypeClass::SaveLoad_Prefix_0(); // IDA: 0x512480
    int HouseTypeClass::LoadHouse(); // IDA: 0x512570
    int HouseTypeClass::GetClassIdentifier(); // IDA: 0x512640
    int HouseTypeClass::AddRef(); // IDA: 0x512740
    int HouseTypeClass::Release(); // IDA: 0x512750
    int HouseTypeClass::sub_5139E0(); // IDA: 0x5139e0
    int HouseTypeClass::sub_5139F0(); // IDA: 0x5139f0
    int HouseTypeClass::sub_513A00(); // IDA: 0x513a00
    int HouseTypeClass::ReadCountryName(); // IDA: 0x67b8f0

// === TriggerClass ===
// 4 member function(s)
    char TriggerClass::FindByEventType(); // IDA: 0x610950
    int TriggerClass::ddtor(); // IDA: 0x726820
    int TriggerClass::LoadTrigger(); // IDA: 0x726860
    int TriggerClass::SaveTrigger(); // IDA: 0x7268d0

// === ScriptAction ===
// 3 member function(s)
    int ScriptAction::ClassifyAction(); // IDA: 0x638ce0
    int ScriptAction::ExecutePlacement(); // IDA: 0x639a50
    char ScriptAction::HitTest(); // IDA: 0x63a8e0

// === ScriptClass ===
// 3 member function(s)
    int ScriptClass::ddtor(); // IDA: 0x6915f0
    int ScriptClass::LoadState(); // IDA: 0x691630
    int ScriptClass::SaveState(); // IDA: 0x691690

// === ScriptTypeClass ===
// 4 member function(s)
    int ScriptTypeClass::GetClassIdentifier(); // IDA: 0x691d50
    int ScriptTypeClass::LoadTypeData(); // IDA: 0x691d90
    int ScriptTypeClass::SaveToINI(); // IDA: 0x691de0
    int ScriptTypeClass::ReadINI(); // IDA: 0x6e8340

// === TagClass ===
// 3 member function(s)
    int TagClass::ddtor(); // IDA: 0x6e56a0
    int TagClass::LoadTag(); // IDA: 0x6e5730
    int TagClass::SaveTag(); // IDA: 0x6e57a0

// === TagTypeClass ===
// 3 member function(s)
    int TagTypeClass::GetClassIdentifier(); // IDA: 0x6e63a0
    int TagTypeClass::LoadTypeData(); // IDA: 0x6e6410
    int TagTypeClass::SaveToINI(); // IDA: 0x6e6470

// === TeamClass ===
// 4 member function(s)
    void TeamClass::Update(); // IDA: 0x6e9140
    int TeamClass::SaveLoad_Prefix(); // IDA: 0x6ec450
    int TeamClass::SaveLoad_Prefix_0(); // IDA: 0x6ec540
    int TeamClass::ddtor(); // IDA: 0x6ec560

// === TeamTypeClass ===
// 4 member function(s)
    int TeamTypeClass::ReadScriptData(); // IDA: 0x6f1ab0
    int TeamTypeClass::SaveToINI(); // IDA: 0x6f1b90
    int TeamTypeClass::LoadTypeData(); // IDA: 0x6f1bb0
    int TeamTypeClass::GetClassIdentifier(); // IDA: 0x6f1c40

// === TriggerTypeClass ===
// 4 member function(s)
    int TriggerTypeClass::ReadINI(); // IDA: 0x6fc0b0
    int TriggerTypeClass::GetClassIdentifier(); // IDA: 0x727bb0
    int TriggerTypeClass::LoadTypeData(); // IDA: 0x727bf0
    int TriggerTypeClass::Write(); // IDA: 0x727c80

} // namespace gamemd