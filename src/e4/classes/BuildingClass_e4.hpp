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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    char fallRate[4];  // 0x2C
    void* nextObject;  // 0x30
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    void* health;  // 0x6C
    char estimatedHealth[4];  // 0x70
    void* isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    void* isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    void* isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    void* lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    void* location;  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    void* missionStartTime;  // 0xC0
    void* missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
    char lastCommands[12];  // 0xD4
    unsigned int radioLinks;  // 0xE0
    void* flashing;  // 0xE4
    unsigned long long animation;  // 0xEC
    void* animation_d;  // 0xF8
    AbstractClass* transporter;  // 0xFC
    void* turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    AbstractClass* deployAnim;  // 0x110
    char inAirFlag[1];  // 0x114
    int turretChargeTimer_d;  // 0x120
    int currentTurretNumber_d;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    int deployAnim_d;  // 0x130
    unsigned char inAirFlag_d;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    char currentWeaponSlot[4];  // 0x138
    unsigned char alignmentPadding139_d;  // 0x139
    void* currentRank;  // 0x140
    char gattlingStage[4];  // 0x144
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    void* initialOwner;  // 0x150
    unsigned int veterancy;  // 0x154
    double alignmentPadding154;  // 0x158
    unsigned long long armorMultiplier;  // 0x15C
    unsigned int armorMultiplier_d;  // 0x160
    unsigned int firepowerMultiplier;  // 0x164
    unsigned int firepowerMultiplier_d;  // 0x168
    VectorClass* idleActionTimer;  // 0x16C
    unsigned char idleActionTimer_d;  // 0x170
    char radarFlashTimer[12];  // 0x174
    void* radarFlashTimer_d;  // 0x17C
    char targetingTimer[12];  // 0x180
    bool targetingTimer_d;  // 0x184
    char targetingTimer_2[4];  // 0x188
    unsigned char ironCurtainTimer;  // 0x190
    unsigned char ironTintTimer;  // 0x19C
    int ironTintStage;  // 0x1A8
    char airstrikeTimer[12];  // 0x1AC
    unsigned char airstrikeTintTimer;  // 0x1B8
    void* airstrikeTintStage;  // 0x1C0
    void* airstrikeTintStage_d;  // 0x1C4
    unsigned int forceShielded;  // 0x1C8
    TechnoClass* isDeactivated;  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    TechnoClass* drainTarget;  // 0x1D0
    unsigned int alignmentPadding1BD_d;  // 0x1D1
    AnimClass* drainingMe;  // 0x1D4
    bool drainAnim;  // 0x1D8
    unsigned int isDisguisedFlag;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    char disguiseCreationFrame[4];  // 0x1E0
    unsigned char infantryBlinkTimer;  // 0x1E4
    void* disguiseBlinkTimer;  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    void* reloadTimer;  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    unsigned char reloadTimer_d;  // 0x200
    int alignmentPadding1F9_d;  // 0x201
    unsigned int reloadTimer_2;  // 0x204
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x210
    char displayProductionTo[4];  // 0x214
    AbstractClass* Owner;  // 0x218
    void* owner;  // 0x21C
    unsigned int owner_d;  // 0x220
    char cloakState[4];  // 0x224
    unsigned long long cloakProgress;  // 0x228
    unsigned char cloakDelayTimer;  // 0x230
    unsigned int warpFactor;  // 0x23C
    char isChronosphereImmune[1];  // 0x240
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    char lastSightRange[4];  // 0x260
    char lastSightHeight[4];  // 0x264
    void* gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    void* gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    char passengers[4];  // 0x276
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned short alignmentPadding27E;  // 0x27E
    int gapRadius_d;  // 0x280
    int isBeingWarpedOut_d;  // 0x284
    unsigned char isWarpEffectActive_d;  // 0x286
    unsigned int temporalUsing_d;  // 0x288
    unsigned char isImmobilized_d;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    void* airstrike;  // 0x294
    void* isBerserk;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    void* rockerLinkedUnit;  // 0x2A8
    FootClass* isBerserk_d;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    FootClass* isBerserk_duration_left;  // 0x2B0
    void* target;  // 0x2B4
    unsigned char alignmentPadding2A9;  // 0x2B9
    CaptureManagerClass* rockerLinkedUnit_d;  // 0x2BC
    void* mindControlledBy;  // 0x2C0
    void* mindControlledBy_a_unit;  // 0x2C4
    AnimClass* target_d;  // 0x2C8
    HouseClass* lastTarget;  // 0x2CC
    SpawnManagerClass* captureManager;  // 0x2D0
    TechnoClass* mindControlledBy_d;  // 0x2D4
    SlaveManagerClass* mindControlledBy_a_unit_d;  // 0x2D8
    unsigned char alignmentPadding2C2;  // 0x2D9
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
    ParticleSystemClass* diskLaserChargeState_d;  // 0x30C
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
    float tiltForwardsAngle;  // 0x340
    void* tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    char hijackerInfantryType[4];  // 0x34C
    char storedTiberium[16];  // 0x350
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    char barrelFacing[24];  // 0x370
    char currentBurstIndex[4];  // 0x37C
    char primaryFacing[24];  // 0x388
    char targetLaserOpacity[4];  // 0x38C
    unsigned int targetLaserFlags;  // 0x38E
    bool isSinking;  // 0x391
    bool isReceivingDamageEffect;  // 0x393
    bool hasBeenAttacked;  // 0x395
    bool isPrimaryFactory;  // 0x397
    bool isSpawned;  // 0x398
    bool isInPlayfield;  // 0x399
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    char currentBurstIndex_d[4];  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isSinking_d;  // 0x3CD
    bool wasAlreadySinking;  // 0x3CE
    bool isReceivingDamageEffect_d;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool hasBeenAttacked_d;  // 0x3D1
    void* isCloakableFlag;  // 0x3D2
    bool isPrimaryFactory_d;  // 0x3D3
    bool isALoaner;  // 0x3D4
    void* isInPlayfield_d;  // 0x3D5
    char turretRecoil_d[32];  // 0x3D8
    bool isTurretLocked;  // 0x3DC
    bool isBarrelLocked;  // 0x3DD
    bool isHumanControlled;  // 0x3DE
    bool isDiscoveredByPlayer;  // 0x3DF
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
    bool isEMPImmune;  // 0x3F5
    bool isRadiationImmune;  // 0x3F6
    char barrelRecoil[32];  // 0x3F8
    void* isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool isDiscoveredByComputer_d;  // 0x41C
    bool isSelectedByPlayer_d;  // 0x41D
    bool isUnderCursor_d;  // 0x41E
    bool isCommandLineTarget_d;  // 0x41F
    char sightRangeBonus;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool isRecruitableByEnemy_d;  // 0x422
    bool isRadarTracked_d;  // 0x423
    bool isOnCarryall;  // 0x424
    bool isCrashing_d;  // 0x425
    bool wasAlreadyCrashing_d;  // 0x426
    bool isBeingManipulated_d;  // 0x427
    TechnoClass* manipulatedByUnit_d;  // 0x428
    HouseClass* chronoWarpedByHouse_d;  // 0x42C
    bool isChronoImmuneFlag_d;  // 0x430
    bool isMouseHovering;  // 0x431
    void* shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed;  // 0x439
    bool isGrindingInProgress;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    bool vecInt_IsAllocated;  // 0x44D
    unsigned char currentTargets;  // 0x458
    void * vecAbs_Items;  // 0x45C
    int vecAbs_Capacity;  // 0x460
    bool vecAbs_IsAllocated;  // 0x465
    unsigned char attackedTargets;  // 0x470
    char audioController4[4];  // 0x47C
    char turretRotateSoundController[20];  // 0x488
    bool isAudio4Active;  // 0x490
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    void* gattlingSoundController;  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned int unknown_4FC;  // 0x4FC
    TechnoClass* queueUpToEnter;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    BuildingTypeClass* Type;  // 0x520
    FactoryClass* Factory;  // 0x524
    char C4Timer[12];  // 0x528
    char controlGroup[4];  // 0x532
    char BuildingClass_field_int_534[4];  // 0x534
    AbstractClass* focus;  // 0x536
    char BuildingClass_field_int_538[4];  // 0x538
    unsigned int OwnerCountryIndex;  // 0x53C
    InfantryClass* C4AppliedBy;  // 0x540
    unsigned int BuildingClass_field_544;  // 0x544
    AnimClass* FirestormAnim;  // 0x548
    AnimClass* PsiWarnAnim;  // 0x54C
    char BuildingClass_field_timer_550[12];  // 0x550
    AnimClass* Anims;  // 0x55C
    bool AnimStates;  // 0x5B0
    AnimClass* DamageFireAnims;  // 0x5C8
    bool RequiresDamageFires;  // 0x5E8
    BuildingTypeClass* Upgrades;  // 0x5EC
    char FiringSWType[4];  // 0x5F8
    unsigned int BuildingClass_field_5FC;  // 0x5FC
    BuildingLightClass* Spotlight;  // 0x600
    char GateTimer[16];  // 0x604
    LightSourceClass* LightSource;  // 0x614
    unsigned int LaserFenceFrame;  // 0x618
    unsigned int FirestormWallFrame;  // 0x61C
    char RepairProgress[8];  // 0x620
    char BuildingClass_field_rect_63C[16];  // 0x63C
    char chronoLockRemaining[4];  // 0x644
    char BuildingClass_field_coord_64C[12];  // 0x64C
    char BuildingClass_field_int_658[4];  // 0x658
    unsigned int BuildingClass_field_65C;  // 0x65C
    bool HasPower;  // 0x660
    bool IsOverpowered;  // 0x661
    bool RegisteredAsPoweredUnitSource;  // 0x662
    unsigned int SupportingPrisms;  // 0x664
    bool HasExtraPowerBonus;  // 0x668
    bool HasExtraPowerDrain;  // 0x669
    unsigned int Overpowerers;  // 0x66C
    unsigned int Occupants;  // 0x670
    char FiringOccupantIndex[4];  // 0x674
    char Audio7[20];  // 0x678
    void* Occupants_d;  // 0x684
    unsigned int locomotorSource;  // 0x688
    char Audio8[20];  // 0x68C
    void* FiringOccupantIndex_d;  // 0x69C
    char Audio7_d[1];  // 0x6A0
    bool ShowRealName;  // 0x6A1
    bool BeingProduced;  // 0x6A2
    bool ShouldRebuild;  // 0x6A3
    bool HasEngineer;  // 0x6A4
    char CashProductionTimer[12];  // 0x6A8
    bool WasOnline;  // 0x6C8
    bool BuildingClass_field_bool_6DC;  // 0x6DC
    bool BuildingClass_field_bool_6DD;  // 0x6DD
    bool NeedsRepairs;  // 0x6DE
    bool C4Applied;  // 0x6DF
    bool NoCrew;  // 0x6E0
    bool BuildingClass_field_bool_6E1;  // 0x6E1
    bool BuildingClass_field_bool_6E2;  // 0x6E2
    bool HasBeenCaptured;  // 0x6E3
    bool ActuallyPlacedOnMap;  // 0x6E4
    bool BuildingClass_field_bool_6E5;  // 0x6E5
    bool IsDamaged;  // 0x6E6
    bool IsFogged;  // 0x6E7
    bool IsBeingRepaired;  // 0x6E8
    bool BuildingClass_field_bool_6E9;  // 0x6E9
    bool StuffEnabled;  // 0x6EA
    char HasCloakingData;  // 0x6EB
    unsigned char CloakRadius;  // 0x6EC
    char Translucency;  // 0x6ED
    unsigned int StorageFilledSlots;  // 0x6F0
    TechnoTypeClass* SecretProduction;  // 0x6F4
    char ColorAdd[3];  // 0x6F8
    char BuildingClass_field_int_6FC[4];  // 0x6FC
    char BuildingClass_field_short_700[2];  // 0x700
    unsigned char UpgradeLevel;  // 0x702
    char GateStage;  // 0x703
    char PrismStage[4];  // 0x704
    char PrismTargetCoords[12];  // 0x708
    unsigned int DelayBeforeFiring;  // 0x714
    char BunkerState[4];  // 0x718
    char ProductionTimer[4];  // 0x71C
    bool PlacementAllowed;  // 0x720
    unsigned char ProductionBlocked;  // 0x721
    unsigned char padProd1;  // 0x722
    unsigned char padProd2;  // 0x723
    char ProductionAccum[4];  // 0x724
    char ProductionFrame[4];  // 0x728
    char ProductionRate[4];  // 0x72C
    char ProductionSpeed[4];  // 0x730
    double CostAccumulator;  // 0x734
    unsigned char PipelineStep;  // 0x73C
    unsigned char padProd3;  // 0x73D
// --- flat members (END) ---
    static int ClearFactoryData(void *aP1);
    static int ClearOccupancyData(void *aP1);
    static void DrawVisible(void *aP1, void *a2, void *aP3);
    static int SquaredDistanceTo(unsigned int aP1);
    static int GetPowerFrame(void *aP1);
    void* CheckBuildability_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::CheckBuildability is a method)
    static unsigned int CheckBuildability(BuildingClass *p_this);  // x4:ida@0x63ac70
    void* Deploy_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::Deploy is a method)
    static unsigned int Deploy(unsigned int p0, int p1, int p2);  // x4:signals@0x62a4a0
    void* FreeUpgradeQueue_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::FreeUpgradeQueue is a method)
    static unsigned int FreeUpgradeQueue();  // x4:empty@0x722390
    void* FreeUpgradeQueue2_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::FreeUpgradeQueue2 is a method)
    static unsigned int FreeUpgradeQueue2();  // x4:empty@0x722e50
    void* SetType_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon BuildingClass::SetType is a method)
    static unsigned int SetType(ObjectTypeClass *p_this);  // x4:ida@0x5f7620
    static unsigned int * ctor(BuildingClass *pThis, int a2);
    static int CanRepair(BuildingClass *pThis, int a2);
    TechnoClass * ClearLimpetCheck();
    int AllocAndCtor(BuildingClass * aP0, int aP2);
    int AnimController(void *a1 = 0);
    int AssignDestination_SyncLog();
    int FindClosestForRepair(unsigned int * a1);
    int FindClosestForRepair2(int a1);
    int FindInPointerArray(unsigned int * a2);
    int Mission_Guard();
    int SaveLoad_Register();
    int processCapture();
    void ClearSuperWeaponAnim();
    void* LoadFromStream();
    static char AbandonProduction(BuildingClass * aP1);
    static int AddUpgrade(BuildingClass * aP1, int a2);
    static int AimTurret(BuildingClass * aP1, uint8_t *a2);
    static unsigned int * CalcDrawPos(BuildingClass * aP1, unsigned int *a2);
    static int ClearAnims(BuildingClass * aP1, int a2);
     int Construct(int a2, int a3, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);
    static void DemolishBridge(BuildingClass * aP1);
    static void DetermineVisualState(BuildingClass * aP1);
    static int FindByCellHash(BuildingClass * aP1);
    static int FindBySWType(BuildingClass * aP1, int a2);
    static int GetHealthRatio(BuildingClass * aP1);
    static int GetPlacementCoords(BuildingClass * aP1, int *a2, unsigned int *a3);
static int * GetPlacementRect(BuildingClass * aP1, int *a2);
    static int IsCellPlaceable(BuildingClass * aP1, int16_t *a2);
    static bool IsTiberiumSiloEligible(BuildingClass * aP1);
    static int PlayAnim(BuildingClass *a1, int a2, AnimTypeClass *a3, int a4, int a5, int a6, void *a7);
    static int PowerUpdate(BuildingClass * aP1, uint8_t *a2);
    static char ReadConstructionData(BuildingClass *aP1, double a2, char *a3);
    static int RepairPlacement(BuildingClass * aP1, char a2);
    static int SellEffects(BuildingClass * aP1, int a2);
    static int SetField95(BuildingClass * aP1, int a2);
    static void CreateIdleAnim(BuildingClass * aP1);
    static void Deactivate(BuildingClass * aP1);
    static int IsBeingRepairedOrCaptured(BuildingClass * aP1);
    static char PowerOff(BuildingClass * aP1);
    static int GetProductionFrame(BuildingClass * aP1);
    static int GetType(BuildingClass * aP1);
static int GetSHPFrame(BuildingClass * aP1, int a2);
    static int UpdateFloatPosition(BuildingClass * aP1);
    static int CreatePlacementCrater(BuildingClass * aP1);
    void  UnloadUnits(char a2, char a3, void *a1 = 0);  // 0x457de0
    unsigned int *  FindPlacementCells2(unsigned int * a2, int a3, void *a1 = 0);  // 0x6b0300
    int  ExecuteTriggers(int a2, char a3);  // 0x7265c0
    int UpdateDamageAnim(void *a1 = 0);  // 0x459470
    void RemoveLimpet(void *a1 = 0);  // 0x4593a0
    void  AnimateUnloadUnits(int a2, void *a1 = 0);  // 0x4585c0
    void UpdateAnimationSlots();  // 0x4547c0
    void ProcessAnimationStates();  // 0x4545d0
    char  ValidatePath(unsigned short * a2, int a3);  // 0x716150
    int  TogglePower2(int a2, void *a1 = 0);  // 0x4ac8c0
    int ProcessUpgradeEffects(void *a1 = 0);  // 0x726400
    int  TogglePower(int a2, void *a1 = 0);  // 0x4ac660
    void VisualizePlacement(void *a1 = 0);  // 0x485af0
    int CheckAdjacentCells(void *a1 = 0);  // 0x485460
    int  SetSlot(int a2, int a3);  // 0x717890
    int GetSellPriority(void *a1 = 0);
    char MakeTraversable();
    int IsPoweredOn();
    unsigned int * Construct(BuildingClass * aP1, BuildingClass * aP2, void *a3_1, void *a4_1, void *a5_1, void *a6_1);
    int CreateUnits();
    int CreateNukePayload();
    int SelectSuperWeaponTarget(int a1);
    int FireSuperWeaponHouseClass(int a1, int a2, void *a3 = 0);
    int EvaluateAITarget(int a1, void* a2);
    int UpdateSuperWeaponsUnavailableHouseClass();
    int SerializeSuperWeaponState();
    void* UpdateTargetRedrawState(void* a1);
    int UpdateSuperWeaponReadyState(int a1);
    void DispatchTeam(int a1, int a2);
    unsigned int q_610;  // +0x610 flat supply (CSP-fed)
    static int Draw_0(int* p0, int* p1);  // x4:signals@0x47f6a0
    static int CheckBridge(int p0, void* p1);  // x4:signals@0x6b0880
    static int GetDrawColor(int p_this);  // x4:ida@0x635830
    static int DrawActionLines(BuildingClass *p_this);  // x4:ida@0x63be60
    unsigned int u32_898;  // 0x898 (offset-truth)
    unsigned int u32_8B4;  // 0x8B4 (offset-truth)
};

} // namespace gamemd
