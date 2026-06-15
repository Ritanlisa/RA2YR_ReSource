#pragma once

#include "radio.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

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
class HouseClass;
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
};

struct VeterancyStruct {
    float Veterancy;
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
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x1);

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return S_OK; }

    virtual ~TechnoClass() = default;

    virtual bool isUnitfactory() const { return false; }
    virtual bool isCloakable() const { return false; }
    virtual bool canScatter() const { return true; }
    virtual bool belongsToATeam() const { return false; }
    virtual bool shouldSelfHealOneStep() const { return false; }
    virtual bool isVoxel() const { return false; }
    virtual bool canSelfRepair() { return false; }
    virtual bool shouldBeCloaked() const { return false; }
    virtual bool shouldNotBeCloaked() const { return false; }
    virtual DirStruct* getFacing(DirStruct* buffer) const { return nullptr; }
    virtual bool isArmed() const { return false; }
    virtual void onSpawnComplete() const {}
    virtual double getStoragePercentage() const { return 0.0; }
    virtual int getPipFillLevel() const { return 0; }
    virtual int getRefund() const { return 0; }
    virtual int getThreatValue() const { return 0; }
    virtual bool canBeAttacked(uint32_t a) { return false; }
    virtual uint32_t getSpecialValue(uint32_t a, uint32_t b) { return 0; }
    virtual bool canCrush(uint32_t a) { return false; }
    virtual int getCrewCount() const { return 0; }
    virtual int getAntiAirValue() const { return 0; }
    virtual int getAntiArmorValue() const { return 0; }
    virtual int getAntiInfantryValue() const { return 0; }
    virtual void gotHijacked() {}
    virtual int selectNavalTargeting(AbstractClass* target) const { return 0; }
    virtual int getZAdjustment() const { return 0; }
    virtual ZGradient GetZGradient() const { return static_cast<ZGradient>(-1); }
    virtual CellStruct* GetSomeCellStruct() const { return nullptr; }
    virtual void SetSomeCellStruct(CellStruct* buffer) {}
    virtual CellStruct* getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const { return nullptr; }
    virtual CoordStruct* getTurretCoords(CoordStruct* buffer, uint32_t a) const { return nullptr; }
    virtual uint32_t getWeaponRangeValue(uint32_t a, uint32_t b) const { return 0; }
    virtual DirStruct* GetRealFacing(DirStruct* buffer) const { return nullptr; }
    virtual InfantryTypeClass* GetCrew() const { return nullptr; }
    virtual bool isInAirAlt() const { return false; }
    virtual bool CanDeploySlashUnload() const;
    virtual int GetROF(int weapon) const { return 0; }
    virtual int GetGuardRange(int unknown) const { return 0; }
    virtual bool canEnterTransport() const { return false; }
    virtual bool IsRadarVisible(int* out_detection) const { return false; }
    virtual bool IsSensorVisibleToPlayer() const { return false; }
    virtual bool IsSensorVisibleToHouse(HouseClass* house) const { return false; }
    virtual bool IsEngineer() const { return false; }
    virtual void ProceedToNextPlanningWaypoint() {}
    virtual uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
    virtual bool EnterGrinder();
    virtual bool EnterBioReactor();
    virtual bool EnterTankBunker();
    virtual bool EnterBattleBunker();
    virtual bool GarrisonStructure();
    virtual bool isPowerOnline() const { return true; }
    virtual void QueueVoice(int idx_voc) {}
    virtual int VoiceEnter() { return 0; }
    virtual int VoiceHarvest() { return 0; }
    virtual int VoiceSelect() { return 0; }
    virtual int VoiceCapture() { return 0; }
    virtual int VoiceMove() { return 0; }
    virtual int VoiceDeploy() { return 0; }
    virtual int VoiceAttack(ObjectClass* target) { return 0; }
    virtual bool ClickedEvent(NetworkEvents event) { return false; }
    virtual bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell) { return false; }
    virtual bool isUnderEmp() const { return false; }
    virtual bool isParalyzed() const { return false; }
    virtual bool canCheer() const { return false; }
    virtual void Cheer(bool force) {}
    virtual int GetDefaultSpeed() const { return 0; }
    virtual void DecreaseAmmo();
    virtual void AddPassenger(FootClass* passenger);
    virtual bool CanDisguiseAs(AbstractClass* target) const { return false; }
    virtual bool TargetAndEstimateDamage(uint32_t a, uint32_t b) { return false; }
    virtual uint32_t getDamageReduction() { return 0; }
    virtual bool TriggersCellInset(AbstractClass* target) { return false; }
    virtual bool IsCloseEnough(AbstractClass* target, int weapon_idx) const { return false; }
    virtual bool IsCloseEnoughToAttack(AbstractClass* target) const;
    virtual bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const { return false; }
    virtual uint32_t getSightRange(uint32_t a) const { return 0; }
    virtual void Destroyed(ObjectClass* killer) = 0;
    virtual FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const;
    virtual FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const;
    virtual CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);
    virtual void SetTarget(AbstractClass* target);
    virtual BulletClass* Fire(AbstractClass* target, int weapon_index);
    virtual void Guard();
    virtual bool SetOwningHouse(HouseClass* house, bool announce = true) { return false; }
    virtual void onHouseChange(uint32_t a, uint32_t b, uint32_t c) {}
    virtual bool Crash(ObjectClass* killer) { return false; }
    virtual bool isAreaFire() const { return false; }
    virtual int isNotSprayAttack() const { return 0; }
    virtual int canAct() { return 0; }
    virtual int isNotSprayAttack2() const { return 0; }
    virtual WeaponStruct* GetDeployWeapon() const { return nullptr; }
    virtual WeaponStruct* GetTurretWeapon() const { return nullptr; }
    virtual WeaponStruct* GetWeapon(int weapon_index) const { return nullptr; }
    virtual bool hasTurret() const { return false; }
    virtual bool canOccupyFire() const { return false; }
    virtual int getOccupyRangeBonus() const { return 0; }
    virtual int getOccupantCount() const { return 0; }
    virtual void OnFinishRepair() {}

    virtual void UpdateCloak(bool unknown = true);
    virtual void CreateGap();
    virtual void DestroyGap();
    virtual void onBridgeRepair() {}
    virtual void Sensed() {}
    virtual void Reload();
    virtual void onReloadComplete() {}
    virtual CoordStruct* GetTargetCoords(CoordStruct* pCrd) const { return nullptr; }
    virtual bool IsNotWarpingIn() const { return false; }
    virtual bool canChronoShift(uint32_t dwUnk) const { return false; }
    virtual void DrawActionLines(bool force, uint32_t dwUnk2) {}
    virtual uint32_t GetDisguiseFlags(uint32_t existingFlags) const { return 0; }
    virtual bool isClearlyVisibleTo(HouseClass* house) const { return false; }
    virtual void drawSelectionBox(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5,
        uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10) {}
    virtual void onSelect(uint32_t a, uint32_t b) {}
    virtual void DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const {}
    virtual void DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const {}
    virtual void DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const {}
    virtual void DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const {}
    virtual void Uncloak(bool play_sound);
    virtual void Cloak(bool play_sound);
    virtual uint32_t getSight(uint32_t dwUnk) const { return 0; }
    virtual void UpdateRefinerySmokeSystems() {}
    virtual uint32_t DisguiseAs(AbstractClass* pTarget) { return 0; }
    virtual void ClearDisguise() {}
    virtual bool IsItTimeForIdleActionYet() const { return false; }
    virtual bool UpdateIdleAction() { return false; }
    virtual void onDamage(uint32_t dwUnk) {}
    virtual void SetDestination(AbstractClass* dest, bool unknown);
    virtual bool canRecruit(uint32_t dwUnk, uint32_t dwUnk2) { return false; }
    virtual void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
    virtual void onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {}
    virtual void onBuildingPlacement(uint32_t a, uint32_t b) = 0;
    virtual void RadarTrackingStart();
    virtual void RadarTrackingStop();
    virtual void RadarTrackingFlash();
    virtual void RadarTrackingUpdate(bool unknown);
    virtual void onRadarEvent(uint32_t a) {}
    virtual void onSpawn() {}
    virtual bool canSpawn() const { return false; }
    virtual bool isSpawning() const { return false; }
    virtual int getSpawnCount() const { return 0; }
    virtual CoordStruct* getSpawnCoords(CoordStruct* out) { return nullptr; }
    virtual uint32_t processSpawn() { return 0; }
    virtual bool canAttackOnTheMove() const { return false; }
    virtual bool canTarget() const { return false; }
    virtual bool selectTarget() { return false; }
    virtual void onTargetChange() {}
    virtual bool canFire() { return false; }

    virtual int SelectWeapon(AbstractClass* target) const;
    void SmokeupdateLogic();
    bool CreateUnit();

    int GetIonCannonValue(AIDifficulty difficulty) const { return 0; }

    DirStruct getFacing() const { DirStruct ret; getFacing(&ret); return ret; }
    DirStruct GetRealFacing() const { DirStruct ret; GetRealFacing(&ret); return ret; }

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
    int32_t                 group;
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
    FacingStruct            facing;
    FacingStruct            turretFacing;
    int32_t                 currentBurstIndex;
    TimerStruct             target_laser_timer;
    int16_t                 targetLaserOpacity;
    uint16_t                targetLaserFlags;
    bool                    isCountedAsOwned;
    bool                    isSinking;
    bool                    wasAlreadySinking;
    bool                    isReceivingDamageEffect;
    bool                    isPlayingDamageSound;
    bool                    hasBeenAttacked;
    bool                    isCloakableFlag;
    bool                    isPrimaryFactory;
    bool                    isSpawned;
    bool                    isInPlayfield;
    RecoilData              turretRecoil;
    RecoilData              barrelRecoil;
    bool                    isTurretLocked;
    bool                    isBarrelLocked;
    bool                    isHumanControlled;
    bool                    isDiscoveredByPlayer;
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
    bool                    isEMPImmune;
    bool                    isRadiationImmune;
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
    AudioController         audioController3;
    uint32_t                audioLoopIndex3;
    uint32_t                audioVolume3;
    AudioController         audioController4;
    bool                    isAudio4Active;
    uint8_t                 alignmentPadding4B9[3];
    uint32_t                audioHandle4;
    AudioController         audioController5;
    bool                    isAudio5Active;
    uint8_t                 alignmentPadding4D5[3];
    uint32_t                audioHandle5;
    AudioController         audioController6;
    uint32_t                queuedVoiceIndex;
    uint32_t                voiceFlags;
    bool                    isVoiceOverride;
    uint8_t                 alignmentPadding4F9[3];
    uint32_t                voiceHandle;
    uint32_t                voiceVolumeModifier;
    uint32_t                empLockRemaining;
    uint32_t                threatPosed;
    uint32_t                shouldLoseTarget;
    RadBeam*                firingRadBeam;
    PlanningTokenClass*     planningToken;
    ObjectTypeClass*        disguiseAsType;
    HouseClass*             isDisguisedFlag_as_house;

protected:
    TechnoClass() noexcept;
};

} // namespace game
} // namespace ra2
