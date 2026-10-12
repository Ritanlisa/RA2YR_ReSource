#pragma once

#include "radio.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "type/weapon_type.hpp"

namespace ra2 {
namespace game {

using ::gamemd::DynamicVectorClass;
using ::gamemd::ProgressTimer;

enum class CloakState : int;
enum class FireError : int;
enum class Rank : int;
enum class TargetFlags : unsigned int;
enum class ZGradient : int;
enum class Ability : int;
enum class AIDifficulty : unsigned int;
enum class NetworkEvents : unsigned char;
struct WeaponStruct;
class AirstrikeClass;
class AnimClass;
class BulletClass;
class BuildingClass;
class CaptureManagerClass;
class CellClass;
class FootClass;
class InfantryTypeClass;
class LaserDrawClass;
class ObjectTypeClass;
class ParticleSystemClass;
class PlanningTokenClass;
class RadBeam;
class SlaveManagerClass;
class SpawnManagerClass;
class TeamClass;
class TemporalClass;
class WaveClass;

struct FlashData {
    int32_t DurationRemaining;
    bool    FlashingNow;
    uint8_t padding[3];
};

class PassengersClass {
public:
    int32_t     NumPassengers;
    FootClass*  FirstPassenger;
    int AddObject(ObjectClass *a2);  // 0x4733a0 (CellClass::AddObject 同体向量加, passengers@0x114 thiscall)
};

struct VeterancyStruct {
    float Veterancy;

bool IsRookie();   // 0x74FFC0
    bool IsVeteran();  // 0x74FF90
    bool IsElite();    // 0x750010
};

struct TurretControl {
    uint32_t data[4];
};

struct RecoilData {
    TurretControl   Turret;
    float           TravelPerFrame;
    float           TravelSoFar;
    uint32_t        State;
    int32_t         TravelFramesLeft;
};

struct TransitionTimer {
    uint32_t data[3];
};

template <typename T>
struct IndexBitfield {
    T* Items;
};

struct OwnedTiberiumStruct {
    float Amount1;
    float Amount2;
    float Amount3;
    float Amount4;
};

class TechnoClass : public RadioClass {

public:
    // --- g57w20m20c supply (csp_canon TechnoClass truth) ---
    void* q0A4;           // 0xA4
    void* q0AC;           // 0xAC
    unsigned int q0B0;    // 0xB0
    unsigned int q0EC;    // 0xEC

public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x1);

    virtual HRESULT __stdcall Load(IStream* stream) override;
    // wrapper: delegates to TechnoClass::ReturnToBaseAndReload at 0x4158E0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~TechnoClass() = default;  // 0x6F4500

    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    virtual bool isUnitfactory() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    virtual bool isCloakable() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    virtual bool canScatter() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    virtual bool belongsToATeam() const;
    virtual bool shouldSelfHealOneStep() const;  // 0x70BE80
    // wrapper: delegates to TechnoClass::ShouldSelfHealOneStep at 0x70BE80
    virtual bool isVoxel() const;
    virtual bool canSelfRepair();  // 0x70FB50
    virtual bool shouldBeCloaked() const;  // 0x6FBDC0
    virtual bool shouldNotBeCloaked() const;  // 0x6FBC90
    virtual bool IsDisguised() const;  // 0x41C010 (vtable slot 196, all Techno-family tables share this impl)
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    virtual DirStruct* getFacing(DirStruct* buffer) const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    virtual bool isArmed() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    virtual void onSpawnComplete() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    virtual double getStoragePercentage() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    virtual int getPipFillLevel() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int getRefund() const;
    virtual int getThreatValue() const;  // 0x4DED70
    // wrapper: delegates to TechnoClass::GetThreatValue at 0x4DED70
    virtual bool canBeAttacked(uint32_t a);
    virtual uint32_t getSpecialValue(uint32_t a, uint32_t b);
    virtual bool canCrush(uint32_t a);
    virtual int getCrewCount() const;  // 0x6F3950
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    virtual int getAntiAirValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    virtual int getAntiArmorValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    virtual int getAntiInfantryValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    virtual void gotHijacked();
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    virtual int selectNavalTargeting(AbstractClass* target) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int getZAdjustment() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual ZGradient GetZGradient() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual CellStruct* GetSomeCellStruct() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void SetSomeCellStruct(CellStruct* buffer);
    // design: virtual function, no binary implementation matched in IDA
    virtual CellStruct* getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual CoordStruct* getTurretCoords(CoordStruct* buffer, uint32_t a) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual uint32_t getWeaponRangeValue(uint32_t a, uint32_t b) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual DirStruct* GetRealFacing(DirStruct* buffer) const;
    virtual InfantryTypeClass* GetCrew() const;  // 0x707D20
    // wrapper: delegates to TechnoClass::GetCrew at 0x707D20
    virtual bool isInAirAlt() const;
    // wrapper: delegates to TechnoClass::GetCrew at 0x707D20
    virtual bool CanDeploySlashUnload() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int GetROF(int weapon) const;
    virtual int GetGuardRange(int unknown) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    virtual bool canEnterTransport() const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    virtual bool IsRadarVisible(int* out_detection) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    virtual bool IsSensorVisibleToPlayer() const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    virtual bool IsSensorVisibleToHouse(HouseClass* house) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    virtual bool IsEngineer() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void ProceedToNextPlanningWaypoint();
    // design: virtual function, no binary implementation matched in IDA
    virtual uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual bool EnterGrinder();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool EnterBioReactor();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool EnterTankBunker();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool EnterBattleBunker();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool GarrisonStructure();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool isPowerOnline() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void QueueVoice(int idx_voc);
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceEnter();
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceHarvest();
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceSelect();
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceCapture();
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceMove();
    // design: virtual function, no binary implementation matched in IDA
    virtual int VoiceDeploy();
    virtual int VoiceAttack(ObjectClass* target);  // 0x7090A0
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    virtual bool ClickedEvent(NetworkEvents event);
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    virtual bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell);
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    virtual bool isUnderEmp() const;
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    virtual bool isParalyzed() const;
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    virtual bool canCheer() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void Cheer(bool force);
    // design: virtual function, no binary implementation matched in IDA
    virtual int GetDefaultSpeed() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void DecreaseAmmo();
    // design: virtual function, no binary implementation matched in IDA
    virtual void AddPassenger(FootClass* passenger);
    // design: virtual function, no binary implementation matched in IDA
    virtual bool CanDisguiseAs(AbstractClass* target) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual bool TargetAndEstimateDamage(uint32_t a, uint32_t b);
    // design: virtual function, no binary implementation matched in IDA
    virtual uint32_t getDamageReduction();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool TriggersCellInset(AbstractClass* target);
    virtual bool IsCloseEnough(AbstractClass* target, int weapon_idx) const;
    // wrapper: delegates to TechnoClass::IsCloseEnoughToBuilding at 0x70D590
    virtual bool IsCloseEnoughToAttack(AbstractClass* target) const;
    // wrapper: delegates to TechnoClass::IsCloseEnoughToBuilding at 0x70D590
    virtual bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const;
    virtual uint32_t getSightRange(uint32_t a) const;  // 0x717800
    // design: pure virtual function, no binary implementation
    virtual void Destroyed(ObjectClass* killer) = 0;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const;
    virtual CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);
    virtual void SetTarget(AbstractClass* target);
    virtual BulletClass* Fire(AbstractClass* target, int weapon_index);  // 0x70ECE0
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    virtual void Guard();
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    virtual bool SetOwningHouse(HouseClass* house, bool announce = true);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    virtual void onHouseChange(uint32_t a, uint32_t b, uint32_t c);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    virtual bool Crash(ObjectClass* killer);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    virtual bool isAreaFire() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int isNotSprayAttack() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int canAct();
    // design: virtual function, no binary implementation matched in IDA
    virtual int isNotSprayAttack2() const;
    virtual WeaponStruct* GetDeployWeapon() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    virtual WeaponStruct* GetTurretWeapon() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    virtual WeaponStruct* GetWeapon(int weapon_index) const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    virtual bool hasTurret() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    virtual bool canOccupyFire() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    virtual int getOccupyRangeBonus() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int getOccupantCount() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual void OnFinishRepair();

    virtual void UpdateCloak(bool unknown = true);
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    virtual void CreateGap();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    virtual void DestroyGap();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    virtual void onBridgeRepair();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    virtual void Sensed();
    virtual void Reload();
    // wrapper: delegates to TechnoClass::ReturnToBaseAndReload at 0x4158E0
    virtual void onReloadComplete();
    virtual CoordStruct* GetTargetCoords(CoordStruct* pCrd) const;  // 0x70BCB0
    // wrapper: delegates to TechnoClass::GetTargetCoords at 0x70BCB0
    virtual bool IsNotWarpingIn() const;
    // wrapper: delegates to TechnoClass::GetTargetCoords at 0x70BCB0
    virtual bool canChronoShift(uint32_t dwUnk) const;
    virtual void DrawActionLines(bool force, uint32_t dwUnk2);
    // wrapper: delegates to BuildingClass::DrawActionLines at 0x63BE60
    virtual uint32_t GetDisguiseFlags(uint32_t existingFlags) const;
    // wrapper: delegates to BuildingClass::DrawActionLines at 0x63BE60
    virtual bool isClearlyVisibleTo(HouseClass* house) const;
    virtual void onSelect(uint32_t a, uint32_t b);
    virtual void DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const;  // 0x6f5190
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    virtual void DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    virtual void DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    virtual void DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    virtual void Uncloak(bool play_sound);
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    virtual void Cloak(bool play_sound);
    virtual uint32_t getSight(uint32_t dwUnk) const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual void UpdateRefinerySmokeSystems();
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual uint32_t DisguiseAs(AbstractClass* pTarget);
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual void ClearDisguise();
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual bool IsItTimeForIdleActionYet() const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    virtual bool UpdateIdleAction();
    virtual void onDamage(uint32_t dwUnk);
    // wrapper: delegates to BuildingClass::ApplyFoundationDamage at 0x45EE70
    virtual void SetDestination(AbstractClass* dest, bool unknown);
    // wrapper: delegates to BuildingClass::ApplyFoundationDamage at 0x45EE70
    virtual bool canRecruit(uint32_t dwUnk, uint32_t dwUnk2);
    virtual void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    virtual void onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
    // design: pure virtual function, no binary implementation
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) = 0;
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    virtual void RadarTrackingStart();
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    virtual void RadarTrackingStop();
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    virtual void RadarTrackingFlash();
    // design: virtual function, no binary implementation matched in IDA
    virtual void RadarTrackingUpdate(bool unknown);
    // design: virtual function, no binary implementation matched in IDA
    virtual void onRadarEvent(uint32_t a);
    // design: virtual function, no binary implementation matched in IDA
    virtual void onSpawn();
    // design: virtual function, no binary implementation matched in IDA
    virtual bool canSpawn() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual bool isSpawning() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int getSpawnCount() const;
    // design: virtual function, no binary implementation matched in IDA
    virtual CoordStruct* getSpawnCoords(CoordStruct* out);
    virtual uint32_t processSpawn();
    // wrapper: delegates to TerrainClass::ProcessSpawnAnim at 0x71D000
    virtual bool canAttackOnTheMove() const;
    // wrapper: delegates to TerrainClass::ProcessSpawnAnim at 0x71D000
    virtual bool canTarget() const;
    virtual int selectTarget();  // 0x41BEF0
    // wrapper: delegates to TechnoClass::selectTarget at 0x41BEF0
    virtual void onTargetChange();
    virtual bool canFire();

    // === Phase 3 generated declarations (IDA functions.json) ===
    virtual int ApplyIronCurtain();  // 0x4155F0
    virtual int ReturnToBase();  // 0x4157C0
    virtual int ReturnToBaseAndReload();   // 0x4158E0
    virtual int ScatterFromThreat();  // 0x415960
    virtual int ExecuteMissionCommand();  // 0x417CA0
    virtual int FindNearbyBuildCell(int a2, int16_t *a3);  // 0x4195A0 (G42.33 b4 W7: 体签名同步)
    virtual void * FindClosestPlacementCell();  // 0x41A160 (G42.33 b4 W7: 体签名同步)
    virtual unsigned int * GetTurretFacing(unsigned int *a2);  // 0x41A570 (G42.33 b4 W7: 体签名同步)
    virtual int ComputeTeamAttackPriority();  // 0x41B6A0 (G42.33 b4 W7: 体签名同步)
    virtual int GetAutoFireDirection();  // 0x41B760 (G42.33 b4 W7: 体签名同步 const 撤除)
    virtual int sub_41B7D0();
    virtual unsigned int * HasOnlyOneGarrisonSlot();  // 0x41B7F0 (G42.33 b4 W7: 体签名同步)
    virtual int sub_41B840();
    virtual int sub_41B860();
    virtual int sub_41B9E0();
    virtual bool CreateWarheadDamageEffect();  // 0x41BC30
    // wrapper: delegates to TechnoClass::CreateWarheadDamageEffect at 0x41BC30
    virtual void sub_41BEF0();
    virtual int vt_entry_428();  // 0x41BFE0 (G42.33 b4 W7: 体签名同步)
    virtual int vt_entry_434();  // 0x41BFF0
    virtual unsigned int * GetBodyFacing(unsigned int *a2);  // 0x41C1E0 (G42.33 b4 W7c: 体签名同步)
    virtual int sub_41C640();
    virtual int sub_41C650();
    virtual int sub_41C660();
    virtual int sub_41C670();
    virtual int sub_41C680();
    virtual int sub_41C690();
    virtual int ApplyDamageEffects(); // 0x438720
    // wrapper: delegates to TechnoClass::ApplyDamageEffects at 0x438720
    virtual int sub_5439080();
    virtual int RemoveFromDynamicVector(char a2);  // 0x4390D0 (G42.33 b4 W7c: 体签名同步)
    virtual int ComputeTargetAngle();  // 0x43E940 (G42.33 b4 W7c: 体签名同步)
    virtual int StartOrResumeProduction();  // 0x44D6A0
    virtual int GetTurretScreenPos();  // 0x453A70 (G42.34: raw 零参非 const, 除 const 对齐 def)
    virtual void ProcessMissionDeploy();  // 0x456F80
    virtual int EvacuateFootprintCells();  // 0x458A80
    virtual int MissionStubReturnZero4(); // 0x459D90
    virtual bool StubReturnFalse2(); // 0x459DD0
    // wrapper: delegates to TechnoClass::StubReturnFalse2 at 0x459DD0
    virtual int sub_546B270();
    // wrapper: delegates to TechnoClass::StubReturnFalse2 at 0x459DD0
    virtual int sub_54722D0();
    virtual int IndexOf(); // 0x473500
    virtual int CalcFacingFromMatrix() const;  // 0x5AF410
    virtual void CreateTrailParticle();  // 0x4C2A60
    // wrapper: delegates to TechnoClass::CreateTrailParticle at 0x4C2A60
    virtual int sub_4C2BD0();
    virtual int UpdateThunk();  // 0x4CC770
    virtual int GetData() const; // 0x4CF950
    // wrapper: delegates to TechnoClass::GetData at 0x4CF950
    virtual int sub_54A50F0();
    virtual int CreatePlanningNode();  // 0x638A80
    virtual int GetBuildCost() const;  // 0x711EC0
    virtual int CheckState1() const;  // 0x5B2E70
    virtual int CheckState2() const; // 0x5B2E80
    virtual int StubReturn450(); // 0x5B2E40
    virtual void vt_entry_448();  // 0x6F60C0
    // wrapper: delegates to TechnoClass::vt_entry_448 at 0x6F60C0
    virtual int sub_54D28C0();
    virtual int GetTypeFlag() const;  // 0x5224E0
    // wrapper: delegates to TechnoClass::GetTypeFlag at 0x5224E0
    virtual int sub_5505180();
    virtual int FindClosestBuilding();  // 0x4DFF40
    virtual int FindBestMatch();  // 0x4DF040
    virtual int FindClosestInfantry();  // 0x4DFA70
    virtual int FindClosestUnit();  // 0x4DFB70
    virtual int FindBestMovementDirection();  // 0x740B60
    virtual int vt_entry_4A8();  // 0x4DF1A0
    virtual int vt_entry_4AC();  // 0x4DF1C0
    virtual int vt_entry_4B0();  // 0x4DF1D0
    virtual int vt_entry_4B4();  // 0x4DF1E0
    virtual int vt_entry_4B8();  // 0x4DF1F0
    virtual int vt_entry_4C4();  // 0x4DF310
    virtual int vt_entry_4C8();  // 0x4DF320
    virtual int vt_entry_4D0();  // 0x4DF4B0
    virtual int GetAnimationValue() const;  // 0x4E0150
    virtual int FindDeployDestination();  // 0x50C920
    // wrapper: delegates to TechnoClass::FindDeployDestination at 0x50C920
    virtual int sub_550D9C0();
    // wrapper: delegates to TechnoClass::FindDeployDestination at 0x50C920
    virtual int sub_550D9D0();
    virtual int MapHouseRelationIndex();  // 0x50DAC0
    virtual int GetDamageMultiplier() const;  // 0x50BD30
    virtual bool ProcessTarget(int a2);  // 0x50CAD0  // G42.35 def-truth sync (def=object/supplied_bodies.cpp:6851 `bool ProcessTarget(int)`; cache: bool __thiscall TechnoClass::ProcessTarget(TechnoClass*,int))
    // wrapper: delegates to TechnoClass::ProcessTarget at 0x50CAD0
    virtual int sub_55224F0();
    virtual int* GetDeployCoords(int* out = nullptr, int a3 = 0);  // 0x4DBDF0 truth (out, a3)
    virtual int CanBePermaMC() const;  // 0x53C450
    virtual int GarrisonBuilding();  // 0x522910
    virtual int IsMission27to30() const;  // 0x522510
    virtual int HandleSpecialAction();  // 0x522A60
    virtual int IsEnteringOrCapturingStructure() const;  // 0x522CB0
    virtual void CreateDestructionEffect();  // 0x5F5390
    virtual int FindMatchingUnit();  // 0x5F7900
    virtual int ClearArrays();  // 0x5F99E0
    virtual int ComputeScanRange() const;  // 0x48AB90
    // G21 L6: draw* 族 (0x6594xx-0x6595xx) 归属裁决迁出——真 owner = RadBeam
    // （双调用方接收者均 RadBeam::Create 对象，InitState 无 vtable 安装）
    virtual int ClearScriptPlanningData();  // 0x633D30
    virtual int GetTileAnimationData() const;  // 0x547150
    virtual int MutateAll();  // 0x6B0AE0
    virtual int RefreshDeployOccupierState();  // 0x6B0D10
    virtual int CountPassengers() const;  // 0x6B7D80
    virtual int GetValue() const; // 0x6F3970
    virtual int CanMoveToCell() const;  // 0x6FC030
    virtual int CanInitiateSell() const;  // 0x6F32D0
    virtual int IsNotAircraftOrBuilding() const;  // 0x6F3280
    virtual int SelectWeapon(); // 0x6F3330
    virtual int CanTargetHouse() const;  // 0x6F3820
    virtual int CanSelfRepair();  // 0x70FB50
    virtual int Mission_RepairDispatch();  // 0x6F4AB0
    virtual int PushNearbyUnits();  // 0x6F4EB0
    virtual int SetFocus(int a2);  // G42.35 def-truth sync (调用形 static (this,0) @0x73E74B)
    virtual int SetHouseFlag();  // 0x6F4960
    virtual int ProcessAIDecision();  // 0x740810
    virtual int CheckPlayerOwned() const;  // 0x6F4A40
    virtual int UpdateProdWithSound();  // 0x6F4A70
    virtual int HasActiveParam() const; // 0x701120
    // wrapper: delegates to TechnoClass::HasActiveParam at 0x701120
    virtual int HasOnlyOneGarrisonSlot2() const;
    virtual int FindLowestDamage();  // 0x7012C0
    virtual int ProcessCapture();  // 0x7014a0
    virtual int GetRangeModifier() const;  // 0x70D190
    virtual int ShouldScanArea() const;  // 0x70D1D0
    virtual int IsCloseEnoughToBuilding() const;   // 0x70D590
    virtual int IsCellPassableFor() const;  // 0x70D460
    virtual int IsPlayerCellPassable() const;  // 0x70D420
    virtual int SetMoveDestination(int a1);  // 0x708D90 (raw [ebp+4] 栈参; W20M20 签名同步)
    virtual int GetPrimaryTargetOrFallback() const;  // 0x708DC0
    virtual int PickAlternateTarget();  // 0x708E00
    virtual int SelectRandomTarget();  // 0x708EB0
    virtual int GetSecondaryTargetOrFallback() const;  // 0x709020
    virtual int SetPositionAnimated(unsigned int* a2 = nullptr);  // 0x4DB810 (g57w10 raw: int(this,unsigned int*))
    virtual int GetTargetCellCenter(AbstractClass* target);  // 0x4DBA50
    virtual int ComputeSpeedFactor();  // 0x4DAFC0
    virtual int ComputeSpeedFactorEx();  // 0x4DB1A0
    virtual int CleanupDirection();  // 0x4DB260
    virtual int GetDeployProgressValue() const;  // 0x740F80
    virtual int ComputeAverageValue() const;  // 0x708BC0
    virtual int GetGlobalValue(int* outValue) const;  // 0x708C10
    virtual int SetIdleState();  // 0x70F850
    virtual int ComputeAimVector();  // 0x70B280
    virtual int RevealAreaConditional();  // 0x70B1D0
    virtual int GetCellCoordsV2() const;  // 0x70AD50
    virtual int Vt46Thunk();  // 0x70ADA0
    virtual int RevealAreaSmall();  // 0x70ADC0
    virtual int ScanForEnemies();  // 0x70AF50
    virtual int GetTargetCoords();  // 0x70BCB0
    virtual int CalcOffsetFacing() const;  // 0x70BE50
    virtual int ShouldSelfHealOneStep() const;  // 0x70BE80
    virtual int ComputeThreatLevel();  // 0x4D97A0
    virtual int CanBeTargeted() const;  // 0x744270
    virtual int GetCommandTooltip() const;  // 0x746B20
    virtual int ShouldBeCloaked() const;  // 0x6FBDC0
    virtual int ShouldNotBeCloaked() const;  // 0x6FBC90
    virtual int SetTargetIfAllowed();   // 0x6F9DD0
    virtual int CanReceivePassengers() const;  // 0x700C40
    virtual int GetTarget() const;  // 0x6F9DC0
    virtual int GetID() const;  // 0x6F9DB0
    virtual int GetSightRange() const;  // 0x717800
    virtual int CheckAndFireAtTarget();  // 0x6F78D0
    virtual int GattlingRateUp_GattlingRateDownReset();  // 0x70DE70
    virtual int GattlingValueRateDown_GattlingRateDownDelay();  // 0x70DE40
    virtual int SetMember81();  // 0x70DE00
    virtual int Deactivate(); // 0x70FC90
    virtual int Activate(); // 0x70FBE0
    virtual int ActivateEffect();  // 0x70E280
    virtual int IronCurtain(); // 0x70E2B0
    virtual int InvulnerabilityIntensity_SetContext();  // 0x70E380
    virtual int ResetTimer();  // 0x70E300
    virtual int CalcAnimDelay() const;  // 0x6FB080
    virtual int StepAnimFrame();  // 0x6FB010
    virtual int BeginFiringSequence();  // 0x709820
    virtual int CompleteFactoryProduction(int a2, int a3);  // 0x709A40 (IDA: thiscall(this,int,int))
    // G57W20M26: canon 槽供给 (0x184/0x1E8/0x1F0/0x334, ProcessRepair 成员扫描段)
    virtual int GetPrimaryOrFallback();  // vt+0x184
    virtual void MissionDispatch(int a2, int a3);  // vt+0x1E8
    virtual int Stub(void *a2, int a3);  // vt+0x480 (canon)
    virtual int SetState(int a2);  // vt+0x1F0
    virtual int COMStub_Return0_205();  // vt+0x334
    TechnoClass *GetVecTechnoMember(int a2);  // 0x65ad30 (原 Team::GetMember 误标; 体读 this+0xE4 vecTechno 数组)

    virtual int IsTimerExpired() const;  // 0x7099E0
    WeaponStruct* GetWeaponSlot(int index) const;  // 0x7177C0 (&Weapon[index] on the type; real owner TechnoTypeClass - ownership debt)
    virtual int GetTertiaryTargetOrFallback() const;  // 0x709060
    virtual int VoiceAttack();  // 0x7090A0
    virtual int ResponseMove_Pickup();  // 0x708FC0
    virtual int Vt170();  // 0x708D70
    virtual int CanAttack() const;  // 0x700D50
    virtual int IsDeadOrInactive() const;  // 0x700D10
    virtual int CalculateROF();  // 0x6FCFA0
    virtual int GetAmmoCount() const;  // 0x708C30
    virtual int GetAmmoCount_0() const;  // 0x740E50
    virtual int SelectAttackWeapon();  // 0x746CD0
    virtual int GetAverageDamageScore() const;  // 0x7414A0
    virtual int ProcessSpecialUnitDeployCrush();  // 0x7416A0
    virtual int FireWeaponBurst();  // 0x741340
    virtual int GetWeaponRange(int weapon_index) const; // 0x773070
    virtual int FireWeapon(); // 0x6FDD50
    virtual int CreateFireEffect();  // 0x6FD210
    virtual int CreateFireBeamEffect();  // 0x6FD620
    virtual int CreateFiringRadarBlip();  // 0x6FD570
    virtual int CreateRadarBlip();  // 0x6FD460
    virtual int GetFiringAngle() const;  // 0x6FDA00
    virtual int AssignTarget_SyncLog(int syncFlag); // 0x6FCDB0
    virtual int ProcessDeploymentState();  // 0x6FCD40
    virtual int ComputeAudioFalloffDamage();  // 0x6FDB80
    virtual int ComputeCombatDamage();  // 0x70D690
    virtual int CheckFireCooldown() const;  // 0x70EE30
    virtual int CanDamageTarget() const;  // 0x70EF00
    virtual int COMStub_Return0_298();  // 0x70F010
    virtual int HasPassengers() const;  // 0x70EFD0
    virtual int COMStub_Return0_307();  // 0x70F100
    virtual int sub_70F040();
    virtual int ProcessCellClearance();  // 0x70F050
    virtual int GetTypeVt40() const;  // 0x70F070
    virtual int GetMaxSpeed() const;  // 0x70EFE0
    virtual int DrainAmmo();  // 0x70E000
    virtual int EjectPassengers();  // 0x70FEE0
    virtual int RadarUpdateOn();  // 0x70CC90
    virtual int RadarUpdateOff();  // 0x70CCC0
    virtual int RevealOwnCell();  // 0x70CCF0
    virtual int ComputeDamage();  // 0x70CD10
    virtual int GetCostMultiplier(int a2, int a3, int a4, int a5, int a6) const;  // 0x708B40
    virtual int IsInRange() const; // 0x6F7660
    virtual int GetCrew();  // 0x707D20
    virtual int GetCrew_0();  // 0x740EE0
    virtual int GetCrewCount();  // 0x6F3950
    virtual int CheckCellPassable() const; // 0x6F7930
    virtual int CheckCellPassable2(int a2) const;  // 0x6F7780
    virtual int CheckCellPassable3() const;  // 0x6F7970
    virtual int ValidateTarget(TechnoClass* target, int weapon_index) const; // 0x6F77B0 (vt+936; binary: (this, target, weapon))
    virtual int GetBridgeDamageMult() const;  // 0x6F79A0
    // wrapper: delegates to TechnoClass::GetBridgeDamageMult at 0x6F79A0
    virtual int CheckAndFireAtTarget2();
    virtual int EvaluateTarget();  // 0x6f7ca0
    virtual int SelectAutoTarget_Start_AU();  // 0x6F8DF0
    virtual int CheckTargetLOS() const;  // 0x6F7220
    virtual int CheckTargetCell() const; // 0x703B10
    virtual int CheckPlacementTileMatch() const;  // 0x707F60
    virtual int ComputeScanDistance() const;  // 0x707E60
    virtual int ComputeTotalPowerDrain();  // 0x707DD0
    virtual int EvaluateBuildingTarget();  // 0x6F8C10
    virtual int GetBuildAnim() const;  // 0x705D70
    virtual int IsNotBusy() const;  // 0x705D50
    virtual int EvaluateMission();  // 0x708080
    virtual int GetThreatValue() const;  // 0x4DED70
    virtual int GetThreatValue_0() const;  // 0x5216C0
    virtual int ProcessBorderTower();  // 0x6ED4D0
    virtual int HandleCursor();  // 0x700600
    virtual int GetActionOnObject();  // 0x6FFEC0
    virtual int ScanAdjacentCells2();
    virtual int ScanNeighborCells();  // 0x703E70
    virtual int IsValidBuildingPlacement();  // 0x704000
    virtual int StartEffectAudio();  // 0x703770
    virtual int TransitionEffectState(int a2);  // 0x7036C0
    virtual int Vt279Thunk0();  // 0x703850
    virtual int UpdatePowerDrain(); // 0x703860
    virtual gamemd::WeaponTypeClass** GetPoweredWeaponSlot();  // 0x70E1A0 (vtable slot 253: house-power-gated weapon-slot pick via slot 254 SelectWeaponSlot; returns pointer to the WeaponTypeClass* holder)
    virtual int UpdateState(); // 0x706640
    virtual int UpdateUnitAnimation();  // 0x736CA0
    virtual int GetInfantryCursorAction() const;  // 0x7404B0
    // wrapper: delegates to TechnoClass::GetInfantryCursorAction at 0x7404B0
    virtual int GetThreatValueEx() const;
    virtual int ComputeSlopeDifference();  // 0x6F6F60
    virtual int ComputeSlopePenalty();  // 0x6F70E0
    virtual int IsOwnedByHuman() const;  // 0x732580
    virtual int IsCapturableByPlayer() const;  // 0x7335F0
    virtual int IsC4AnimationActive() const;  // 0x736D50
    virtual int CreateDeathAnim();  // 0x738680
    virtual int DispatchPlayerInput();  // 0x737BA0
    virtual int Deploy(); // 0x7393C0
    virtual int DeployIntoBuilding();  // 0x73EFC0
    virtual int SpawnInfantryFromBuilding();  // 0x738910
    virtual int CleanupDeploy();  // 0x6F6AC0
    virtual int ClearAllTargets();  // 0x746720
    virtual int SelectAITarget();  // 0x744100
    virtual int ReturnCapturedFlag();  // 0x7440B0
    virtual int AreBuildingFlagsClear() const;  // 0x744180
    virtual int MarkCellImpassable();  // 0x7441B0
    virtual int ClearCellImpassable();  // 0x744210
    virtual int CaptureTurret();  // 0x746420
    virtual int TransferSlavedUnit();  // 0x7463A0
    virtual int TransferTurret();  // 0x7464E0
    virtual int ApplyObjectEffect();  // 0x746670
    virtual int IsGuardingTarget() const;  // 0x746750
    virtual int ProcessUnitSelfDestruct();  // 0x746100
    virtual int NotifyTeamOnDestruction();  // 0x744720
    virtual int RespondToDestruction();
    virtual int GetWaypointCoords() const; // 0x6F18A0
    virtual int Create(); // 0x6F1920
    virtual int CopyStateFrom();  // 0x4B5210
    virtual int ScalarDtor();
    virtual int EnteredOpenTopped();  // 0x710470
    virtual int MarkPassengersAsExited();  // 0x7104C0
    virtual int ExitedOpenTopped();  // 0x7104A0
    virtual int GetMember388() const;  // 0x711EB0
    // wrapper: delegates to TechnoClass::GetMember388 at 0x711EB0
    virtual int GetBuildCost2() const;
    // wrapper: delegates to TechnoClass::GetMember388 at 0x711EB0
    virtual int FindBestMatch2();
    virtual int IsWaypointHidden() const;  // 0x6EC300
    virtual int LinkToBridge();  // 0x70FD70
    virtual int ResetDamageAccumulator();  // 0x4C1E10
    virtual int UpdateBodyTilt();  // 0x70B570
    virtual int CheckCliffTransition() const;  // 0x70C620
    virtual int OnEnterCell();  // 0x70D990
    // wrapper: delegates to TechnoClass::OnEnterCell at 0x70D990
    virtual int sub_570DC50();
    virtual int OwnerHasPower() const;  // 0x70DC60
    // wrapper: delegates to TechnoClass::OwnerHasPower at 0x70DC60
    virtual int sub_570DCE0();
    // wrapper: delegates to TechnoClass::OwnerHasPower at 0x70DC60
    virtual int sub_570DCF0();
    virtual int GetPoweredWeaponIndex() const;  // 0x70DD20
    virtual int GetVt252Byte() const;  // 0x70DD50
    virtual int vt_entry_3E8();  // 0x70DD90
    virtual int SetSpread(); // 0x70DDD0
    virtual int DecCounter();  // 0x70D670
    virtual int PlaceAtCell();  // 0x70D8F0
    virtual WeaponStruct* SelectWeaponSlot(int weaponIndex); // 0x70E140 (vtable slot 254: elite-vs-regular slot by veterancy >= 2.0 at +0x150)
    virtual int Update2(); // 0x70ED10
    virtual int GetAnimationFlags() const;  // 0x70ED80
    virtual int GetTargetSpeedMultiplier() const;  // 0x50C050
    virtual int ProcessEnterTransport();
    // wrapper: delegates to FootClass::ProcessEnterTransport at 0x70D7E0
    virtual int IsCloseEnoughToBuilding2() const;
    virtual int IsDeployed() const;  // 0x6EF9E0
    virtual int CheckAdjacencyFlags() const;  // 0x704240
    virtual int IsProductionChainActive() const;  // 0x637840
    virtual int HasDeployFlags() const;  // 0x746DB0
    virtual int RemoveBuildingFromScripts();  // 0x638840
    virtual int FinishDeploy();  // 0x6F6CA0
    virtual int ValidateMoveType();  // 0x738890
    // wrapper: delegates to TechnoClass::ValidateMoveType at 0x738890
    virtual int ComputeSlopePenalty2();
    virtual int sub_740B10();
    virtual int CheckRepairNeeded() const;  // 0x740A90
    virtual int EnterRepairBuilding();  // 0x740EF0
    virtual int CheckUnitFireConstraints() const;  // 0x740FD0
    virtual int checkTargetValidity();  // 0x741490
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    virtual int sub_7441B0();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    virtual int sub_744180();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    virtual int sub_744210();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    virtual int sub_744270();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    virtual int sub_744720();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_7440B0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_744100();
    virtual int SelectAutoTargetWithGarrison();  // 0x743190
    virtual int processParasiteAttachment();  // 0x746400
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    virtual int sub_746420();
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    virtual int sub_7464E0();
    virtual int sub_7465B0();
    virtual int sub_7465F0();
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    virtual int sub_7463A0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746670();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746720();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746750();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746B20();
    virtual int sub_746C90();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746CD0();
    virtual int sub_746D00();
    virtual int sub_746D60();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746DB0();
    virtual int sub_746E30();
    virtual int sub_746EA0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746100();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_746F80();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70F850();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70FB50();
    virtual int sub_70FC90();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70FD70();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70FEE0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_710000();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_710470();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_7104A0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_7104C0();
    virtual int sub_7106E0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_710F70();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_711E00();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_711EB0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_73EFC0();
    virtual int sub_7393C0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_737BA0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_738910();
    virtual int GatherAllBuildings();  // 0x732050
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    virtual int sub_732580();
    virtual int sub_731CF0();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    virtual int sub_729AA0();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    virtual int sub_729480();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    virtual int sub_71F010();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_71A130();
    virtual int CalculateDamage(); // 0x663030
    // wrapper: delegates to TechnoClass::CalculateDamage at 0x663030
    virtual int UpdateBodyTilt2();
    // wrapper: delegates to TechnoClass::CalculateDamage at 0x663030
    virtual int GattlingRateUp_GattlingRateDownReset2();
    virtual int ApplySplashDamageToNeighbors();  // 0x487720
    virtual int ReceiveDamage_Shield();  // 0x701900
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    virtual int sub_70B1D0();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    virtual int sub_70B280();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    virtual int sub_70B570();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    virtual int sub_70BCB0();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    virtual int sub_70BE80();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D1D0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D990();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DE70();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DE00();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DD20();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DD50();
    virtual int sub_70DDD0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DE40();
    virtual int sub_70E120();
    virtual int sub_70E140();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70E1A0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70E280();
    virtual int sub_70E2B0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70E300();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70E380();
    virtual int sub_70E4B0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70EC0A();
    virtual int sub_70ED10();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70ED80();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70EE30();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70EFD0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70EF00();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70F010();
    virtual int sub_70F000();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70ECE0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70CCC0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70CC90();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70CD10();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D190();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D460();
    virtual int sub_70D590();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D670();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D690();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70D8F0();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70DD90();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70BE50();
    // design: virtual function, no binary implementation matched in IDA
    virtual int sub_70C620();
    virtual int sub_70C610();

    virtual int SelectWeapon(AbstractClass* target) const; // 0x6F3330
    // wrapper: delegates to TechnoClass::SelectWeapon at 0x6F3330
    void SmokeupdateLogic();
    bool CreateUnit(); // 0x423AC0

    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    int GetIonCannonValue(AIDifficulty difficulty) const;

    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    DirStruct getFacing() const;
    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    DirStruct GetRealFacing() const;

    // ---- member variables ----

    FlashData               flashing;
    ProgressTimer           animation;
    PassengersClass         passengers;
    TechnoClass*            transporter;
    int32_t                 turretChargeTimer;
    int32_t                 currentTurretNumber;
    int32_t                 secondaryTurretIndex;
    AnimClass*              behindAnim;
    AnimClass*              deployAnim;
    bool                    inAirFlag;
    uint8_t                 alignmentPadding139[3];
    int32_t                 currentWeaponSlot;
    int32_t                 currentRank;          // Rank enum
    int32_t                 gattlingStage;
    int32_t                 gattlingValue;
    uint32_t                ammoReloadTimer;
    HouseClass*             initialOwner;
    VeterancyStruct         veterancy;
    uint32_t                alignmentPadding154;
    double                  armorMultiplier;
    double                  firepowerMultiplier;
    TimerStruct             idleActionTimer;
    TimerStruct             radarFlashTimer;
    TimerStruct             targetingTimer;
    TimerStruct             ironCurtainTimer;
    TimerStruct             ironTintTimer;
    int32_t                 ironTintStage;
    TimerStruct             airstrikeTimer;
    TimerStruct             airstrikeTintTimer;
    uint32_t                airstrikeTintStage;
    int32_t                 forceShielded;
    bool                    isDeactivated;
    uint8_t                 alignmentPadding1BD[3];
    TechnoClass*            drainTarget;
    TechnoClass*            drainingMe;
    AnimClass*              drainAnim;
    bool                    isDisguisedFlag;
    uint8_t                 alignmentPadding1CE[3];
    uint32_t                disguiseCreationFrame;
    TimerStruct             infantryBlinkTimer;
    TimerStruct             disguiseBlinkTimer;
    bool                    isTargetedByChrono;
    uint8_t                 alignmentPadding1F9[3];
    TimerStruct             reloadTimer;
    uint32_t                currentBurstCount;
    uint32_t                currentBarrelIndex;
    IndexBitfield<HouseClass*> displayProductionTo;
    int32_t                 controlGroup;    // 0-9 CTRL+group number (YRpp Group; was misnamed Owner)
    AbstractClass*          focus;
    HouseClass*             owner;
    uint32_t                cloakState;              // CloakState enum
    ProgressTimer           cloakProgress;
    TimerStruct             cloakDelayTimer;
    float                   warpFactor;
    bool                    isChronosphereImmune;
    uint8_t                 alignmentPadding251[3];
    CoordStruct             lastSightCoords;
    int32_t                 lastSightRange;
    int32_t                 lastSightHeight;
    bool                    gapSuperCharged;
    bool                    isGeneratingGap;
    uint8_t                 alignmentPadding27E[2];
    int32_t                 gapRadius;
    bool                    isBeingWarpedOut;
    bool                    isWarpingOut;
    bool                    isWarpEffectActive;
    uint8_t                 unusedField273;
    TemporalClass*          temporalUsing;
    TemporalClass*          temporalTargetingMe;
    bool                    isImmobilized;
    uint8_t                 alignmentPadding27D[3];
    uint32_t                owningHouseIndex0;
    int32_t                 chronoLockRemaining;
    CoordStruct             chronoDestCoords;
    AirstrikeClass*         airstrike;
    bool                    isBerserk;
    uint8_t                 alignmentPadding29D[3];
    uint32_t                isBerserk_duration_left;
    uint32_t                sprayOffsetIndex;
    bool                    isUncrushable;
    uint8_t                 alignmentPadding2A9[3];
    FootClass*              rockerLinkedUnit;
    FootClass*              locomotorTarget;
    FootClass*              locomotorSource;
    AbstractClass*          target;
    AbstractClass*          lastTarget;
    CaptureManagerClass*    captureManager;
    TechnoClass*            mindControlledBy;
    bool                    mindControlledBy_a_unit;
    uint8_t                 alignmentPadding2C2[3];
    AnimClass*              mindControlRingAnim;
    HouseClass*             mindControlledBy_house;
    SpawnManagerClass*      spawnManager;
    TechnoClass*            spawnOwner;
    SlaveManagerClass*      slaveManager;
    TechnoClass*            slaveOwner;
    HouseClass*             originalOwnerHouse;
    TechnoClass*            bunkerLinkedUnit;
    float                   pitchAngle;
    TimerStruct             diskLaserTimer;
    uint32_t                diskLaserChargeState;
    int32_t                 ammo;
    int32_t                 unitValue;
    ParticleSystemClass*    fireParticles;
    ParticleSystemClass*    sparkParticles;
    ParticleSystemClass*    ambientParticles;
    ParticleSystemClass*    damageParticles;
    ParticleSystemClass*    railgunParticles;
    ParticleSystemClass*    auxParticles1;
    ParticleSystemClass*    auxParticles2;
    ParticleSystemClass*    firingParticles;
    WaveClass*              waveEffect;
    float                   tiltSidewaysAngle;
    float                   tiltForwardsAngle;
    float                   tiltSidewaysRate;
    float                   tiltForwardsRate;
    int32_t                 hijackerInfantryType;
    OwnedTiberiumStruct     storedTiberium;
    uint32_t                tiberiumCollectionState;
    TransitionTimer         unloadTimer;
    FacingStruct            barrelFacing;
    FacingStruct            primaryFacing;
    FacingStruct            secondaryFacing;
    int32_t                 currentBurstIndex;
    TimerStruct             targetLaserTimer;
    int16_t                 unknown_short_3C8;
    uint16_t                unknown_3CA;
    bool                    isCountedAsOwned;
    bool                    isSinking;
    bool                    wasAlreadySinking;
    bool                    isReceivingDamageEffect;
    bool                    isUseless;
    bool                    hasBeenAttacked;
    bool                    isCloakableFlag;
    bool                    isPrimaryFactory;
    bool                    isALoaner;
    bool                    isInPlayfield;
    RecoilData              turretRecoil;
    RecoilData              barrelRecoil;
    bool                    isTether;
    bool                    isAlternativeTether;
    bool                    isOwnedByCurrentPlayer;
    bool                    isDiscoveredByCurrentPlayer;
    bool                    isDiscoveredByComputer;
    bool                    isSelectedByPlayer;
    bool                    isUnderCursor;
    bool                    isCommandLineTarget;
    char                    sightRangeBonus;
    bool                    isRecruitableByAlly;
    bool                    isRecruitableByEnemy;
    bool                    isRadarTracked;
    bool                    isOnCarryall;
    bool                    isCrashing;
    bool                    wasAlreadyCrashing;
    bool                    isBeingManipulated;
    TechnoClass*            manipulatedByUnit;
    HouseClass*             chronoWarpedByHouse;
    bool                    isChronoImmuneFlag;
    bool                    isMouseHovering;
    bool                    shouldBeReselectOnUnlimbo;
    uint8_t                 alignmentPadding433;
    TeamClass*              previousTeam;
    bool                    isCountedAsOwned_special;
    bool                    isAbsorbed;
    bool                    isGrindingInProgress;
    uint8_t                 alignmentPadding43B;
    uint32_t                grindingAnimHandle;
    DynamicVectorClass<int32_t> currentTargetThreatValues;
    DynamicVectorClass<AbstractClass*> currentTargets;
    DynamicVectorClass<AbstractClass*> attackedTargets;
    AudioController         turretRotateSoundController;
    uint32_t                isTurretRotateSoundPlaying;
    uint32_t                turretIsRotating;
    AudioController         gattlingSoundController;
    bool                    isGattlingSoundPlaying;
    uint8_t                 alignmentPadding4B9[3];
    uint32_t                unknown_4BC;
    AudioController         unusedGattlingSoundController;
    bool                    isUnusedGattlingSoundPlaying;
    uint8_t                 alignmentPadding4D5[3];
    uint32_t                unknown_4D8;
    AudioController         queuedVoiceSoundController;
    uint32_t                queuedVoiceIndex;
    uint32_t                unknown_4F4;
    bool                    unknown_bool_4F8;
    uint8_t                 alignmentPadding4F9[3];
    uint32_t                unknown_4FC;
    TechnoClass*            queueUpToEnter;
    uint32_t                empLockRemaining;
    uint32_t                threatPosed;
    uint32_t                shouldLoseTarget;
    RadBeam*                firingRadBeam;
    PlanningTokenClass*     planningToken;
    ObjectTypeClass*        disguiseAsType;
    HouseClass*             disguisedAsHouse;

protected:
    TechnoClass() noexcept; // 0x6F2B40
    unsigned int q674;  // 0x674
    unsigned int q0584;  // 0x584
    unsigned int q1843;  // 0x1843
    unsigned int q5A4;  // 0x5A4
    unsigned int u32_5C4;  // 0x5C4 (member_lookup)
    unsigned int u32_5C8;  // 0x5C8 (member_lookup)
    unsigned int u32_608;  // 0x608
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SmokeUpdate(double a2);  // 0x414BB0
    int updateROFTimer();  // 0x41B9E0
    int processIdleState(int a1, void* a2, void* a3);  // 0x41C640
    int processGuardState(int a1);  // 0x41C650
    int processAttackState(int a1);  // 0x41C660
    int processMoveState(int a1, void* a2, void* a3);  // 0x41C670
    int processHarvestState(int a1);  // 0x41C680
    int processDeployState(int a1);  // 0x41C690
    int checkRange(int a2);  // 0x439080
    int updateHealthBar();  // 0x46B270
    int checkCloakState();  // 0x4A50F0
    void* GetWeaponType(void* a1);  // 0x4C9470
    int recalcThreat();  // 0x4D28C0
    int QueueDrawVoiceResponse(void* a1, int a2, int a3, int a4, int a5, void* a6, int a7, int a8, int a9, int a10, int a11);  // 0x4DB0D0
    void checkBuildLimit();  // 0x505180
    void Find(int a1);  // 0x50E010
    void Process(int a1);  // 0x50E1C0
    bool updateTurretRotation();  // 0x5224F0
    bool HasAnyMission();  // 0x6E57C0
    void* GetTurretOffset(void* a1, int a2);  // 0x6F3D60
    void* Constructor(int a1);  // 0x6F4300
    int ExecuteMoveCommand();  // 0x6FBFA0
    int Vt240Thunk();  // 0x6FC090
    int DrawTargetLine();  // 0x6FF960
    int HasValidWeapon();  // 0x7010D0
    int GetDrawHeight();  // 0x704350
    int CleanupAll(int a1);  // 0x707CB0
    int DrawPips();  // 0x709A90
    int DrawVeterancy();  // 0x70A990
    int DrawPowerIndicator();  // 0x70AA60
    int processEMPulse();  // 0x70DC50
    bool checkEMPState();  // 0x70DCE0
    int applyEMPulseDamage();  // 0x70DCF0
    int GetMember81();  // 0x70DDF0
    int Vt249to254();  // 0x70E120
    int CalcFlashAlpha(int a1);  // 0x70E4B0
    int ClearUnknownFlag();  // 0x70F000
    WeaponStruct* GetEliteWeaponSlot(int index);  // 0x7177E0 (&EliteWeapon[index] on the type; real owner TechnoTypeClass - ownership debt)
    bool HasVoiceResponse(int weaponIndex);  // 0x70D0D0 -- reads this->veterancy and type-side Voice*WeaponAttack flags
    int ShouldSkipOccupierDraw(int a1, int a2, int a3);  // 0x73B0B0
    int Draw(void* a1, void* a2);  // 0x73CEC0
    int updateTargeting();  // 0x740B10
    int updateParasiteState(int a1);  // 0x7465B0
    int detachParasites(int a1);  // 0x7465F0
    bool checkSpawnState();  // 0x746C90
    int updateSpawnManager();  // 0x746D00
    int releaseSpawns();  // 0x746D60
    void* checkIronCurtainState(void* a1);  // 0x746E30
    bool processIronCurtainExpiry(void* a1);  // 0x746EA0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void updateSightRange(int a1, int a2);  // 0x4c2bd0 -- TechnoClass::updateSightRange
    int ScanAdjacentCells();  // 0x703cc0 -- TechnoClass::ScanAdjacentCells
    int GetOwnerHouse();  // 0x6f2070 -- Techno::GetOwnerHouse
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int CanFireAtTarget(int a1, int a2 = 0, int a3 = 0, int a4 = 0, int a5 = 0);  // 0x41a9e0 (vararg call shapes 2..5)
    int processDamageAnimation();  // 0x41b7d0
    int updateWeaponCooldown();  // 0x41b840
    int checkAmmo(int a1);  // 0x41b860
    void* Update(int a1, int a2);  // 0x6f3f40
    bool GetField();  // 0x731cf0
    // === G42.41m supplies (ml names; /c-gate) ===
    uint32_t u32_5D1;  // ml @0x5D1 (vt_entry_4B0 returns)
    uint32_t u32_6C4;  // ml @0x6C4 (byte-ptr base use 0x746415)
    uint8_t u32_6E1;  // ml name (0x746400 use)
    uint8_t u32_6E2;  // ml name (0x746400 use)
    // === FUNCS-MOVE (END) ===
public:  // g57c5 W4b supply slot
    TimerStruct __pad_194;  // 0x194 g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W6 owner supply
    unsigned int q0F2;  // 0xF2 g57c5 W6 (ml TechnoClass@0xF2 own)
};

} // namespace game
} // namespace ra2
