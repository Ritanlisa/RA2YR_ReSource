// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct SpawnManagerClass;  // fix_fwd_type_supply
struct SlaveManagerClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct TeamClass;  // fix_fwd_type_supply
struct RadBeam;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ILocomotion;  // fix_fwd_type_supply
struct LocomotionClass;  // fix_fwd_type_supply
struct UnitTypeClass;  // fix_fwd_type_supply
struct EBolt;  // fix_fwd_type_supply

struct UnitClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    void* vfptr_3;  // 0x12
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    void* needsSave;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    AudioController* ambientSoundController;  // 0x3C [X30:type_map]
    char customSound_controller[4];  // 0x50
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    int health;  // 0x6C [X30:type_map]
    int estimatedHealth;  // 0x70 [X30:type_map]
    bool isOnMap;  // 0x74
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    AnimClass* parachute;  // 0x88
    void* onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    void* isAliveFlag;  // 0x90
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    Coord* location;  // 0x9C [X30:type_map]
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    void* suspendedMission;  // 0xB0 [X30:type_map]
    void* queuedMission;  // 0xB4 [X30:type_map]
    bool missionQueued;  // 0xB8
    int missionStatus;  // 0xBC [X30:type_map]
    int missionStartTime;  // 0xC0 [X30:type_map]
    unsigned int missionData;  // 0xC4
    char missionTimer[4];  // 0xC8
    void* lastCommands;  // 0xD4
    unsigned int radioLinks;  // 0xE0
    char flashing[8];  // 0xF0
    ProgressTimer* radioContact;  // 0xF8 [X30:type_map]
    unsigned int radioCommand;  // 0x100
    void* radioTimer;  // 0x104 [X30:type_map]
    unsigned int radioQueue;  // 0x110
    PassengersClass* passengers;  // 0x114 [X30:type_map]
    TechnoClass* transporter;  // 0x11C
    void* turretChargeTimer;  // 0x120 [X30:type_map]
    void* currentTurretNumber;  // 0x124
    char secondaryTurretIndex[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    AnimClass* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    int radioQueueCount;  // 0x138 [X30:type_map]
    void* currentRank;  // 0x13C [X30:type_map]
    void* gattlingStage;  // 0x140
    char gattlingValue[4];  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass* initialOwner;  // 0x14C
    FootClass* veterancy;  // 0x150 [X30:type_map]
    unsigned int alignmentPadding154;  // 0x154
    double armorMultiplier;  // 0x158
    double firepowerMultiplier;  // 0x160
    char idleActionTimer[12];  // 0x168
    char radarFlashTimer[12];  // 0x174
    char targetingTimer[12];  // 0x180
    unsigned int ironCurtainTimer;  // 0x190
    unsigned int ironTintTimer;  // 0x19C
    char animation[4];  // 0x1B0
    char airstrikeTintTimer[4];  // 0x1BC
    void* currentTurretNumber_d;  // 0x1C8
    unsigned char alignmentPadding1BD;  // 0x1CD
    unsigned char alignmentPadding1CE;  // 0x1DD
    char disguiseBlinkTimer[4];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char reloadTimer[4];  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    void* focus;  // 0x218
    unsigned int cloakState;  // 0x220
    SpawnManagerClass* spawnManager;  // 0x224
    TechnoClass* spawnOwner;  // 0x22C
    SlaveManagerClass* slaveManager;  // 0x234
    HouseClass* originalOwnerHouse;  // 0x23C
    char cloakDelayTimer[4];  // 0x240
    float pitchAngle;  // 0x244
    char diskLaserTimer[4];  // 0x248
    void* warpFactor;  // 0x24C
    bool isChronosphereImmune;  // 0x250
    unsigned int alignmentPadding251;  // 0x251
    unsigned int diskLaserChargeState;  // 0x254
    char ammo[4];  // 0x258
    char unitValue[4];  // 0x25C
    ParticleSystemClass* fireParticles;  // 0x260
    ParticleSystemClass* sparkParticles;  // 0x264
    ParticleSystemClass* ambientParticles;  // 0x268
    char isGeneratingGap;  // 0x269
    ParticleSystemClass* damageParticles;  // 0x26C
    void* railgunParticles;  // 0x270
    void* isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    ParticleSystemClass* auxParticles1;  // 0x274
    ParticleSystemClass* auxParticles2;  // 0x278
    void* firingParticles;  // 0x27C
    unsigned int alignmentPadding27E;  // 0x27E
    void* waveEffect;  // 0x280
    void* tiltSidewaysAngle;  // 0x284
    float tiltForwardsAngle;  // 0x288
    float tiltSidewaysRate;  // 0x28C
    float tiltForwardsRate;  // 0x290
    int hijackerInfantryType;  // 0x294 [X30:type_map]
    OwnedTiberiumStruct* storedTiberium;  // 0x298 [X30:type_map]
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    unsigned int tiberiumCollectionState;  // 0x2A8
    char unloadTimer[4];  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    int isBerserk_duration_left;  // 0x2B0
    char barrelFacing[4];  // 0x2B8
    unsigned char alignmentPadding2A9;  // 0x2B9
    FacingStruct* facing;  // 0x2BC [X30:type_map]
    char turretFacing[4];  // 0x2C0
    char currentBurstIndex[4];  // 0x2C4
    TimerStruct* target_laser_timer;  // 0x2C8 [X30:type_map]
    void * lastTarget;  // 0x2CC
    void * captureManager;  // 0x2D0
    char targetLaserOpacity[4];  // 0x2D4
    unsigned int targetLaserFlags;  // 0x2D6
    bool isCountedAsOwned;  // 0x2D8
    bool isSinking;  // 0x2D9
    bool wasAlreadySinking;  // 0x2DA
    bool isReceivingDamageEffect;  // 0x2DB
    bool isPlayingDamageSound;  // 0x2DC
    bool hasBeenAttacked;  // 0x2DD
    bool isCloakableFlag;  // 0x2DE
    bool isPrimaryFactory;  // 0x2DF
    bool isSpawned;  // 0x2E0
    bool isInPlayfield;  // 0x2E1
    void* turretRecoil;  // 0x2E4
    void * slaveOwner;  // 0x2F0
    void * bunkerLinkedUnit;  // 0x2F8
    RecoilData* barrelRecoil;  // 0x2FC [X30:type_map]
    char currentWeaponSlot[4];  // 0x312
    bool isTurretLocked;  // 0x314
    bool isBarrelLocked;  // 0x315
    bool isHumanControlled;  // 0x316
    bool isDiscoveredByPlayer;  // 0x317
    bool isDiscoveredByComputer;  // 0x318
    bool isSelectedByPlayer;  // 0x319
    bool isUnderCursor;  // 0x31A
    bool isCommandLineTarget;  // 0x31B
    char sightRangeBonus;  // 0x31C
    bool isRecruitableByAlly;  // 0x31D
    bool isRecruitableByEnemy;  // 0x31E
    bool isRadarTracked;  // 0x31F
    bool isOnCarryall;  // 0x320
    bool isCrashing;  // 0x321
    bool wasAlreadyCrashing;  // 0x322
    bool isBeingManipulated;  // 0x323
    TechnoClass* manipulatedByUnit;  // 0x324
    HouseClass* chronoWarpedByHouse;  // 0x328
    bool isChronoImmuneFlag;  // 0x32C
    bool isEMPImmune;  // 0x32D
    bool isRadiationImmune;  // 0x32E
    TeamClass* previousTeam;  // 0x330
    bool isCountedAsOwned_special;  // 0x334
    bool isAbsorbed;  // 0x335
    bool isGrindingInProgress;  // 0x336
    unsigned int grindingAnimHandle;  // 0x338
    BuildingTypeClass* currentTargetThreatValues;  // 0x33C [X30:type_map]
    unsigned int currentTargets;  // 0x354
    unsigned int attackedTargets;  // 0x36C
    char audioController3[4];  // 0x384
    FacingStruct* primaryFacing;  // 0x388 [X30:type_map]
    void* audioLoopIndex3;  // 0x3A0 [X30:type_map]
    unsigned int audioVolume3;  // 0x3A4
    char audioController4[4];  // 0x3A8
    bool isAudio4Active;  // 0x3C4
    void* audioHandle4;  // 0x3C8
    unsigned int unknown_3CA;  // 0x3CA
    void* audioController5;  // 0x3CC
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    bool isAudio5Active;  // 0x3E8
    void* audioHandle5;  // 0x3EC
    char audioController6[4];  // 0x3F0
    unsigned int queuedVoiceIndex;  // 0x40C
    unsigned int voiceFlags;  // 0x410
    bool isVoiceOverride;  // 0x414
    unsigned int voiceHandle;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    unsigned int voiceVolumeModifier;  // 0x41C
    unsigned int empLockRemaining;  // 0x420
    unsigned int threatPosed;  // 0x424
    void* shouldLoseTarget;  // 0x428
    RadBeam* firingRadBeam;  // 0x42C
    void* planningToken;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    ObjectTypeClass* disguiseAsType;  // 0x434
    HouseClass* isDisguisedFlag_as_house;  // 0x438
    unsigned char alignmentPadding43B;  // 0x43B
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    bool vecInt_IsAllocated;  // 0x44D
    void * vecAbs_Items;  // 0x45C
    int vecAbs_Capacity;  // 0x460
    bool vecAbs_IsAllocated;  // 0x465
    unsigned int turretRotateSoundController;  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[4];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[4];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[4];  // 0x4DC
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned int unknown_4FC;  // 0x4FC
    int queueUpToEnter;  // 0x500
    ObjectTypeClass * ptr_518;  // 0x518
    int FootClass_field_520;  // 0x520
    unsigned int FootClass_field_524;  // 0x524
    char FootClass_field_526[4];  // 0x526
    unsigned int FootClass_field_528;  // 0x528
    char FootClass_field_52A[4];  // 0x52A
    char FootClass_field_52C[4];  // 0x52C
    char FootClass_field_52E[4];  // 0x52E
    int FootClass_field_530;  // 0x530
    int FootClass_field_534;  // 0x534
    char FootClass_field_538[4];  // 0x538
    bool FootClass_field_53C;  // 0x53C
    unsigned int m_padding_53D;  // 0x53D
    int FootClass_field_540;  // 0x540
    unsigned int audioController7;  // 0x544
    char FootClass_field_558[4];  // 0x558
    char FootClass_field_55A[4];  // 0x55A
    char FootClass_field_55C[4];  // 0x55C
    char FootClass_field_55E[4];  // 0x55E
    int FootClass_field_560;  // 0x560
    char FootClass_field_562[4];  // 0x562
    int FootClass_field_564;  // 0x564
    char FootClass_field_566[4];  // 0x566
    unsigned int FootClass_field_568;  // 0x568
    char FootClass_field_56C[4];  // 0x56C
    int FootClass_field_570;  // 0x570 [X30:type_map]
    int unused574;  // 0x574
    unsigned int FootClass_field_578;  // 0x578
    char FootClass_field_57C[4];  // 0x57C
    unsigned int FootClass_field_580;  // 0x580
    float FootClass_field_584;  // 0x584
    int FootClass_DVC_588;  // 0x588
    char FootClass_field_5A0[4];  // 0x5A0
    int FootClass_field_5A4;  // 0x5A4 [X30:type_map]
    char FootClass_field_5A8[4];  // 0x5A8
    unsigned int FootClass_DVC_5AC;  // 0x5AC
    char FootClass_field_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    unsigned int m_padding_5D2;  // 0x5D2
    EBolt* FootClass_field_5D4;  // 0x5D4 [X30:type_map]
    char FootClass_field_5D8[4];  // 0x5D8
    char FootClass_field_5DC[4];  // 0x5DC
    void* pathDirections;  // 0x5E0
    unsigned int FootClass_field_640;  // 0x640
    char FootClass_field_644[4];  // 0x644
    char FootClass_field_648[4];  // 0x648
    char FootClass_field_64C[4];  // 0x64C
    char FootClass_field_650[4];  // 0x650
    char FootClass_field_654[4];  // 0x654
    char FootClass_field_658[4];  // 0x658
    char FootClass_field_65C[4];  // 0x65C
    char FootClass_field_660[4];  // 0x660
    char FootClass_field_664[4];  // 0x664
    unsigned int FootClass_field_668;  // 0x668
    char FootClass_field_66C[4];  // 0x66C
    char FootClass_field_670[4];  // 0x670
    ILocomotion* Locomotor;  // 0x674
    LocomotionClass* Locomotor_ptr;  // 0x678
    bool IsDeploying;  // 0x67C
    char FootClass_field_680[4];  // 0x680
    unsigned int FootClass_field_684;  // 0x684
    char unknownBool685;  // 0x685
    char waypointIndex;  // 0x686
    char unknownBool687;  // 0x687
    unsigned int FootClass_bools_688;  // 0x688
    char isTeamLeader;  // 0x689
    char shouldScanForTarget;  // 0x68A
    bool unknownBool68D;  // 0x68D
    char shouldEnterAbsorber;  // 0x68F
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    void* FootClass_field_694;  // 0x694
    char FootClass_field_698[4];  // 0x698
    char FootClass_field_69C[4];  // 0x69C
    char FootClass_field_6A0[4];  // 0x6A0
    char FootClass_field_6A4[4];  // 0x6A4
    unsigned int FootClass_bools_6A8;  // 0x6A8
    char isAttackedByLocomotor;  // 0x6AD
    char isLetGoByLocomotor;  // 0x6AE
    bool FootClass_field_6B0;  // 0x6B0
    bool FootClass_field_6B1;  // 0x6B1
    bool FootClass_field_6B2;  // 0x6B2
    bool FootClass_field_6B3;  // 0x6B3
    bool FootClass_field_6B4;  // 0x6B4
    bool FootClass_field_6B5;  // 0x6B5
    bool FootClass_field_6B6;  // 0x6B6
    bool FootClass_field_6B7;  // 0x6B7
    bool FootClass_field_6B8;  // 0x6B8
    bool FootClass_field_6B9;  // 0x6B9
    bool FootClass_field_6BA;  // 0x6BA
    bool FootClass_field_6BB;  // 0x6BB
    void* FootClass_field_6BC;  // 0x6BC
    bool FootClass_field_6BD;  // 0x6BD
    bool FootClass_field_6BE;  // 0x6BE
    bool FootClass_field_6BF;  // 0x6BF
    int UnitClass_field_int_6C0;  // 0x6C0 [X30:type_map]
    UnitTypeClass* Type;  // 0x6C4
    UnitClass* FollowerCar;  // 0x6C8
    int FlagHouseIndex;  // 0x6CC [X30:type_map]
    bool HasFollowerCar;  // 0x6D0
    bool Unloading;  // 0x6D1
    bool UnitClass_field_bool_6D2;  // 0x6D2
    bool TerrainPalette;  // 0x6D3
    int UnitClass_field_int_6D4;  // 0x6D4 [X30:type_map]
    int DeathFrameCounter;  // 0x6D8 [X30:type_map]
    EBolt* ElectricBolt;  // 0x6DC
    bool Deployed;  // 0x6E0
    bool Deploying;  // 0x6E1
    bool Undeploying;  // 0x6E2
    int NonPassengerCount;  // 0x6E4 [X30:type_map]
    unsigned char ToolTipText;  // 0x6E8
// --- flat members (END) ---
    static int GetExitCell(int pThis, unsigned int *a2, unsigned int *a3);
    static int ClearTargetRef(UnitClass *pThis, int a2);
    int ProcessIdleOrders();
int Construct(int a2, LPVOID ppv, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void ** Create(void *a2, unsigned int *a3, int a4, void *a1 = 0);
    unsigned int q_C30;  // +0xC30 flat supply (three-ban reform)
    unsigned char __pad_040;  // 0x40 [X30:canon]
    int __pad_054;  // 0x54 [X30:type_map]
    int __pad_0A0;  // 0xA0 [X30:type_map]
    int __pad_0CC;  // 0xCC [X30:type_map]
    unsigned char __pad_0D8;  // 0xD8 [X30:canon]
    unsigned char __pad_0E4;  // 0xE4 [X30:canon]
    unsigned char __pad_0FC;  // 0xFC [X30:canon]
    int __pad_108;  // 0x108 [X30:type_map]
    EBolt* __pad_118;  // 0x118 [X30:type_map]
    unsigned char __pad_18C;  // 0x18C [X30:canon]
    unsigned char __pad_194;  // 0x194 [X30:canon]
    unsigned char __pad_1A0;  // 0x1A0 [X30:canon]
    unsigned char __pad_1B4;  // 0x1B4 [X30:canon]
    unsigned char __pad_1C0;  // 0x1C0 [X30:canon]
    unsigned char __pad_1CC;  // 0x1CC [X30:canon]
    unsigned char __pad_1D1;  // 0x1D1 [X30:canon]
    unsigned char __pad_1E1;  // 0x1E1 [X30:canon]
    unsigned char __pad_1F0;  // 0x1F0 [X30:canon]
    unsigned char __pad_201;  // 0x201 [X30:canon]
    unsigned char __pad_214;  // 0x214 [X30:canon]
    void* __pad_21C;  // 0x21C [X30:type_map]
    unsigned char __pad_228;  // 0x228 [X30:canon]
    unsigned char __pad_230;  // 0x230 [X30:canon]
    unsigned char __pad_238;  // 0x238 [X30:canon]
    int __pad_2B4;  // 0x2B4 [X30:type_map]
    unsigned char __pad_2E8;  // 0x2E8 [X30:canon]
    int __pad_2F4;  // 0x2F4 [X30:type_map]
    int __pad_300;  // 0x300 [X30:type_map]
    int __pad_340;  // 0x340 [X30:type_map]
    unsigned char __pad_358;  // 0x358 [X30:canon]
    unsigned char __pad_370;  // 0x370 [X30:canon]
    unsigned char __pad_38C;  // 0x38C [X30:canon]
    unsigned char __pad_3AC;  // 0x3AC [X30:canon]
    unsigned char __pad_3D8;  // 0x3D8 [X30:canon]
    unsigned char __pad_3F4;  // 0x3F4 [X30:canon]
    unsigned char __pad_43F;  // 0x43F [X30:canon]
    unsigned char __pad_44C;  // 0x44C [X30:canon]
    unsigned char __pad_451;  // 0x451 [X30:canon]
    unsigned char __pad_464;  // 0x464 [X30:canon]
    unsigned char __pad_469;  // 0x469 [X30:canon]
    unsigned char __pad_48C;  // 0x48C [X30:canon]
    unsigned char __pad_4A8;  // 0x4A8 [X30:canon]
    unsigned char __pad_4C4;  // 0x4C4 [X30:canon]
    int __pad_4E0;  // 0x4E0 [X30:type_map]
    unsigned char __pad_504;  // 0x504 [X30:canon]
    unsigned char __pad_51C;  // 0x51C [X30:canon]
    int __pad_548;  // 0x548 [X30:type_map]
    unsigned char __pad_58C;  // 0x58C [X30:canon]
    unsigned char __pad_5B0;  // 0x5B0 [X30:canon]
    unsigned char __pad_5E4;  // 0x5E4 [X30:canon]
    unsigned char __pad_6AC;  // 0x6AC [X30:canon]
    unsigned char __pad_6E3;  // 0x6E3 [X30:canon]
};

} // namespace gamemd
