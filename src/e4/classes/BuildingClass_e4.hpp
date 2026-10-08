// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct TemporalClass;  // fix_fwd_type_supply
struct CaptureManagerClass;  // fix_fwd_type_supply
struct SpawnManagerClass;  // fix_fwd_type_supply
struct SlaveManagerClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct WaveClass;  // fix_fwd_type_supply
struct TeamClass;  // fix_fwd_type_supply
struct RadBeam;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct FactoryClass;  // fix_fwd_type_supply
struct InfantryClass;  // fix_fwd_type_supply
struct BuildingLightClass;  // fix_fwd_type_supply
struct LightSourceClass;  // fix_fwd_type_supply
struct UnitTypeClass;  // fix_fwd_type_supply
struct TechnoTypeClass;  // fix_fwd_type_supply

struct BuildingClass {
    static int ClearFactoryData(void *aP1);  // 0x72240 raw: int BuildingClass::ClearFactoryData(BuildingClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int ClearFactoryData();  // 0x72240 0-arg site form (Game/ScenarioClass_e4)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int ClearOccupancyData(void *aP1);  // 0x722D00 raw: int BuildingClass::ClearOccupancyData(BuildingClass*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int ClearOccupancyData();  // 0x722D00 0-arg site form (Game/ScenarioClass_e4)  // G57w10 r5 D-classbody supply (raw-anchored)
    static void DrawVisible(void *aP1, void *a2, void *aP3);  // 0x43E7B0 raw: void __thiscall BuildingClass::DrawVisible(BuildingClass*, int*, int*)  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SquaredDistanceTo(unsigned int aP1);  // 0x5F6500 raw 2-param (BuildingClass*, int*) site 1-arg int form  // G57w10 r5 D-classbody supply (raw-anchored)

    static int GetPowerFrame(void *aP1);  // 0x4566B0 raw: int GetPowerFrame(TechnoClass*)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    int fallRate;  // 0x2C
    void* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    char ambientSoundController[20];  // 0x3C
    unsigned int q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char customSound_controller[20];  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    void* health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    void* isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    void* isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    void* lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    void* location;  // 0x9C
    void* q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    int missionStatus;  // 0xBC
    void* missionStartTime;  // 0xC0
    char missionTimer[12];  // 0xC8
    unsigned int q0D0;  // 0xD0
    char lastCommands[12];  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int radioLinks;  // 0xE0
    void* flashing;  // 0xE4
    unsigned long long animation;  // 0xEC
    char q0F0[4];  // 0xF0
    unsigned int u32_F4;  // 0xF4
    void* q0F8;  // 0xF8
    AbstractClass* transporter;  // 0xFC
    void* turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    AbstractClass* deployAnim;  // 0x110
    char inAirFlag[1];  // 0x114
    unsigned int u32_11B;  // 0x11B
    char q128[4];  // 0x128
    AnimClass* q12C;  // 0x12C
    AnimClass* q130;  // 0x130
    unsigned int currentWeaponSlot;  // 0x138
    char q13C[4];  // 0x13C
    void* currentRank;  // 0x140
    unsigned int gattlingStage;  // 0x144
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    void* initialOwner;  // 0x150
    unsigned int veterancy;  // 0x154
    unsigned long long armorMultiplier;  // 0x15C
    unsigned int firepowerMultiplier;  // 0x164
    char q168[4];  // 0x168
    void* idleActionTimer;  // 0x16C
    char radarFlashTimer[12];  // 0x174
    char targetingTimer[12];  // 0x180
    unsigned char ironCurtainTimer;  // 0x190
    unsigned char ironTintTimer;  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    int ironTintStage;  // 0x1A8
    char airstrikeTimer[12];  // 0x1AC
    char q1B0[4];  // 0x1B0
    unsigned char airstrikeTintTimer;  // 0x1B8
    TechnoClass* drainTarget;  // 0x1D0
    AnimClass* drainingMe;  // 0x1D4
    bool drainAnim;  // 0x1D8
    unsigned int isDisguisedFlag;  // 0x1DC
    char disguiseCreationFrame[4];  // 0x1E0
    unsigned char infantryBlinkTimer;  // 0x1E4
    void* disguiseBlinkTimer;  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    void* reloadTimer;  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int q20C;  // 0x20C
    unsigned int currentBarrelIndex;  // 0x210
    char displayProductionTo[4];  // 0x214
    AbstractClass* Owner;  // 0x218
    void* owner;  // 0x21C
    char cloakState[4];  // 0x224
    unsigned long long cloakProgress;  // 0x228
    unsigned char cloakDelayTimer;  // 0x230
    unsigned int warpFactor;  // 0x23C
    char isChronosphereImmune[1];  // 0x240
    char lastSightCoords[12];  // 0x254
    void* q258;  // 0x258
    unsigned int lastSightRange;  // 0x260
    unsigned int lastSightHeight;  // 0x264
    void* gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    void* gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    TemporalClass* temporalUsing;  // 0x274
    char passengers[4];  // 0x276
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned int q280;  // 0x280
    void* airstrike;  // 0x294
    void* isBerserk;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    void* rockerLinkedUnit;  // 0x2A8
    FootClass* isBerserk_duration_left;  // 0x2B0
    void* target;  // 0x2B4
    void* mindControlledBy;  // 0x2C0
    void* mindControlledBy_a_unit;  // 0x2C4
    HouseClass* lastTarget;  // 0x2CC
    SpawnManagerClass* captureManager;  // 0x2D0
    TechnoClass* mindControlRingAnim;  // 0x2DC
    HouseClass* mindControlledBy_house;  // 0x2E0
    TechnoClass* spawnManager;  // 0x2E4
    float spawnOwner;  // 0x2E8
    char slaveManager[4];  // 0x2EC
    void* slaveOwner;  // 0x2F0
    unsigned int originalOwnerHouse;  // 0x2F4
    void* diskLaserChargeState;  // 0x2F8
    char pitchAngle[4];  // 0x2FC
    char diskLaserTimer[12];  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    ParticleSystemClass* sparkParticles;  // 0x308
    ParticleSystemClass* ammo;  // 0x310
    ParticleSystemClass* unitValue;  // 0x314
    ParticleSystemClass* ambientParticles;  // 0x320
    ParticleSystemClass* damageParticles;  // 0x324
    ParticleSystemClass* railgunParticles;  // 0x328
    ParticleSystemClass* auxParticles1;  // 0x32C
    ParticleSystemClass* auxParticles2;  // 0x330
    ParticleSystemClass* firingParticles;  // 0x334
    WaveClass* waveEffect;  // 0x338
    float tiltSidewaysAngle;  // 0x33C
    char storedTiberium[16];  // 0x350
    char barrelFacing[24];  // 0x370
    unsigned int currentBurstIndex;  // 0x37C
    char primaryFacing[24];  // 0x388
    bool isSinking;  // 0x391
    bool isReceivingDamageEffect;  // 0x393
    bool hasBeenAttacked;  // 0x395
    bool isPrimaryFactory;  // 0x397
    bool isSpawned;  // 0x398
    bool isInPlayfield;  // 0x399
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool wasAlreadySinking;  // 0x3CE
    bool isUseless;  // 0x3D0
    void* isCloakableFlag;  // 0x3D2
    bool isALoaner;  // 0x3D4
    bool isDiscoveredByComputer;  // 0x3E0
    bool isSelectedByPlayer;  // 0x3E1
    bool isUnderCursor;  // 0x3E2
    bool isCommandLineTarget;  // 0x3E3
    bool isRecruitableByAlly;  // 0x3E5
    bool isRecruitableByEnemy;  // 0x3E6
    bool isRadarTracked;  // 0x3E7
    bool isCrashing;  // 0x3E9
    bool wasAlreadyCrashing;  // 0x3EA
    bool isBeingManipulated;  // 0x3EB
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    char barrelRecoil[32];  // 0x3F8
    void* isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool isOnCarryall;  // 0x424
    bool isMouseHovering;  // 0x431
    void* shouldBeReselectOnUnlimbo;  // 0x432
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed;  // 0x439
    bool isGrindingInProgress;  // 0x43A
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    unsigned char currentTargets;  // 0x458
    unsigned char attackedTargets;  // 0x470
    char turretRotateSoundController[20];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    void* gattlingSoundController;  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned int unknown_4FC;  // 0x4FC
    TechnoClass* queueUpToEnter;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    BuildingTypeClass* Type;  // 0x520
    FactoryClass* Factory;  // 0x524
    char controlGroup[4];  // 0x532
    AbstractClass* focus;  // 0x536
    InfantryClass* C4AppliedBy;  // 0x540
    AnimClass* FirestormAnim;  // 0x548
    AnimClass* PsiWarnAnim;  // 0x54C
    AnimClass* Anims;  // 0x55C
    AnimClass* DamageFireAnims;  // 0x5C8
    bool RequiresDamageFires;  // 0x5E8
    BuildingTypeClass* Upgrades;  // 0x5EC
    BuildingLightClass* Spotlight;  // 0x600
    LightSourceClass* LightSource;  // 0x614
    char chronoLockRemaining[4];  // 0x644
    bool HasPower;  // 0x660
    unsigned int Overpowerers;  // 0x66C
    unsigned int Occupants;  // 0x670
    char FiringOccupantIndex[4];  // 0x674
    char Audio7[20];  // 0x678
    unsigned int locomotorSource;  // 0x688
    char Audio8[20];  // 0x68C
    unsigned int u32_691;  // 0x691
    unsigned int q698;  // 0x698
    bool WasOnline;  // 0x6C8
    bool BuildingClass_field_bool_6DC;  // 0x6DC
    bool NoCrew;  // 0x6E0
    bool ActuallyPlacedOnMap;  // 0x6E4
    bool IsDamaged;  // 0x6E6
    bool IsBeingRepaired;  // 0x6E8
    unsigned char CloakRadius;  // 0x6EC
    char Translucency;  // 0x6ED
    unsigned int StorageFilledSlots;  // 0x6F0
    TechnoTypeClass* SecretProduction;  // 0x6F4
    char ColorAdd[3];  // 0x6F8
    int BuildingClass_field_int_6FC;  // 0x6FC
    char BuildingClass_field_short_700[2];  // 0x700
    unsigned char UpgradeLevel;  // 0x702
    char PrismTargetCoords[12];  // 0x708
    unsigned int u32_710;  // 0x710
    int BunkerState;  // 0x718
    char ProductionTimer[4];  // 0x71C
    char ProductionFrame[4];  // 0x728
    unsigned int Audio8_2;
    unsigned int CanRepair_slot;
    unsigned int SuperWeaponToken;
    unsigned int *__pad_6B8;
    unsigned int ctor_slot;

    void* CheckBuildability_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::CheckBuildability is a method)
    static unsigned int CheckBuildability(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* Deploy_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::Deploy is a method)
    static unsigned int Deploy(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* FreeUpgradeQueue_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::FreeUpgradeQueue is a method)
    static unsigned int FreeUpgradeQueue(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    void* FreeUpgradeQueue2_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::FreeUpgradeQueue2 is a method)
    static unsigned int FreeUpgradeQueue2(...);  // w18j3 C2597 static-call supply (w16g4 convention)


    void* SetType_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::SetType is a method)
    static unsigned int SetType(...);  // w18j3 C2597 static-call supply (w16g4 convention)
// --- flat members (END) ---
    static unsigned int * ctor(BuildingClass *pThis, int a2);  // G57w19k2 raw thiscall static-form supply (member ctor -> ctor_slot)
    static int CanRepair(BuildingClass *pThis, int a2);  // G57w19k2 raw thiscall static-form supply (member CanRepair -> CanRepair_slot)
    TechnoClass * ClearLimpetCheck();
    static int AllocAndCtor(BuildingClass * aP0, int aP2);  // [w16g2] static (def body this=0)
    int AnimController();
    int AssignDestination_SyncLog();
    int FindClosestForRepair(unsigned int * a1);
    int FindClosestForRepair2(int a1);
    int FindInPointerArray(unsigned int * a2);
    int Mission_Guard();
    int SaveLoad_Register();
    int processCapture();
    void ClearSuperWeaponAnim();
    void* LoadFromStream();
    static char AbandonProduction(BuildingClass * aP1);  // G57w10-S raw 0x004C9FF0 (was C2597 interim stub)
    static int AddUpgrade(BuildingClass * aP1, int a2);  // G57w10-S raw 0x006551C0 (was C2597 interim stub)
    static int AimTurret(BuildingClass * aP1, unsigned __int8 *a2);  // G57w10-S raw 0x00424B50 (was C2597 interim stub)
    static unsigned int * CalcDrawPos(BuildingClass * aP1, unsigned int *a2);  // G57w10-S raw 0x00480110 (was C2597 interim stub)
    static int ClearAnims(BuildingClass * aP1, int a2);  // G57w10-S raw 0x00451E40 (was C2597 interim stub)
     int Construct(int a2, int a3);
    static void DemolishBridge(BuildingClass * aP1);  // G57w10-S raw 0x00452DC0 (was C2597 interim stub)
    static void DetermineVisualState(BuildingClass * aP1);  // G57w10-S raw 0x00483C80 (was C2597 interim stub)
    static int FindByCellHash(BuildingClass * aP1);  // G57w10-S raw 0x00485010 (was C2597 interim stub)
    static int FindBySWType(BuildingClass * aP1, int a2);  // G57w10-S raw 0x00505310 (was C2597 interim stub)
    static int GetHealthRatio(BuildingClass * aP1);  // G57w10-S raw 0x005F5C60 (was C2597 interim stub)
    static int GetPlacementCoords(BuildingClass * aP1, int *a2, unsigned int *a3);  // G57w10-S raw 0x0045F160 (was C2597 interim stub)
static int * GetPlacementRect(BuildingClass * aP1, int *a2);  // G57w10-S raw 0x0047FDE0 (was C2597 interim stub)
    static double GetType_Thunk(...);  // C2597 interim stub
    static int IsCellPlaceable(BuildingClass * aP1, __int16 *a2);  // G57w10-S raw 0x004260F0 (was C2597 interim stub)
    static bool IsTiberiumSiloEligible(BuildingClass * aP1);  // G57w10-S raw 0x00483690 (was C2597 interim stub)
    static int PlayAnim(BuildingClass *a1, int a2, AnimTypeClass *a3, int a4, int a5, int a6, void *a7);  // G57w10-S raw 0x00451890 (was C2597 interim stub)
    static int PowerUpdate(BuildingClass * aP1, unsigned __int8 *a2);  // G57w10-S raw 0x004FF700 (was C2597 interim stub)
    static char ReadConstructionData(BuildingClass *aP1, double a2, char *a3);  // G57w10-S raw 0x0044FEC0 (was C2597 interim stub)
    static int RepairPlacement(BuildingClass * aP1, char a2);  // G57w10-S raw 0x004533A0 (was C2597 interim stub)
    static int SellEffects(BuildingClass * aP1, int a2);  // G57w10-S raw 0x00480CB0 (was C2597 interim stub)
    static int SetField95(BuildingClass * aP1, int a2);  // G57w10-S raw 0x00424C90 (was C2597 interim stub)
    static void CreateIdleAnim(BuildingClass * aP1);  // G57w10-S raw 0x00486920 (was C2597 interim stub)
    static void Deactivate(BuildingClass * aP1);  // G57w10-S raw 0x00452480 (was C2597 interim stub)
    static int IsBeingRepairedOrCaptured(BuildingClass * aP1);  // G57w10-S raw 0x007105E0 (was C2597 interim stub)
    static char PowerOff(BuildingClass * aP1);  // G57w10-S raw 0x00452360 (was C2597 interim stub)
    static int GetProductionFrame(BuildingClass * aP1);  // G57w10-S raw 0x0043EF90 (was C2597 interim stub)
    static int GetType(BuildingClass * aP1);  // G57w10-S raw 0x00705D20 (was C2597 interim stub)
static int GetSHPFrame(BuildingClass * aP1, int a2);  // G57w10-S raw 0x00490B90 (was C2597 interim stub)
    static int UpdateFloatPosition(BuildingClass * aP1);  // G57w10-S raw 0x0062D2A0 (was C2597 interim stub)
    static int CreatePlacementCrater(BuildingClass * aP1);  // G57w10-S raw 0x00486E70 (was C2597 interim stub)
    void UnloadUnits(char a2, char a3);  // 0x457de0
    unsigned int * FindPlacementCells2(unsigned int *a2, int a3);  // 0x6b0300
    int ExecuteTriggers(int a2, char a3);  // 0x7265c0
    int UpdateDamageAnim();  // 0x459470
    void RemoveLimpet();  // 0x4593a0
    void AnimateUnloadUnits(int a2);  // 0x4585c0
    void UpdateAnimationSlots();  // 0x4547c0
    void ProcessAnimationStates();  // 0x4545d0
    char ValidatePath(unsigned short *a2, int a3);  // 0x716150
    int TogglePower2(int a2);  // 0x4ac8c0
    int ProcessUpgradeEffects();  // 0x726400
    int TogglePower(int a2);  // 0x4ac660
    void VisualizePlacement();  // 0x485af0
    int CheckAdjacentCells();  // 0x485460
    int SetSlot(int a2, int a3);  // 0x717890
    int GetSellPriority(); // N_fix R5 supply (cache truth)
    char MakeTraversable(); // N_fix R5 supply (cache truth)
    int IsPoweredOn(); // N_fix R5 supply (cache truth)
    unsigned int * Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1);
    int CreateUnits();
    int CreateNukePayload();
    int SelectSuperWeaponTarget(int a1);
    int FireSuperWeaponHouseClass(int a1, int a2);
    int EvaluateAITarget(int a1, void* a2);
    int UpdateSuperWeaponsUnavailableHouseClass();
    int SerializeSuperWeaponState();
    void* UpdateTargetRedrawState(void* a1);
    int UpdateSuperWeaponReadyState(int a1);
    void DispatchTeam(int a1, int a2);
    unsigned int q_610;  // +0x610 flat supply (CSP-fed)
    unsigned int q_290;
    static int Draw_0(...);
    static int CheckBridge(...);
    static int GetDrawColor(...);
    static int DrawActionLines(...);  // w16g4 C3861 static supply (raw 0x0063BE60)  // w16g4 C3861 static supply (raw 0x0063CE40)  // w16g4 C3861 static supply (raw 0x006B0880)  // w16g4 C3861 static supply (raw 0x0047F6A0)  // +0x290 flat supply (final pass)
};

} // namespace gamemd
