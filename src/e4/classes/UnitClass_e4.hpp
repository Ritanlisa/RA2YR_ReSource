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
    char ambientSoundController[4];  // 0x3C
    char customSound_controller[4];  // 0x50
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    char health[4];  // 0x6C
    char estimatedHealth[4];  // 0x70
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
    char location[4];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    unsigned int missionData;  // 0xC4
    char missionTimer[4];  // 0xC8
    void* lastCommands;  // 0xD4
    unsigned int radioLinks;  // 0xE0
    char flashing[8];  // 0xF0
    char radioContact[4];  // 0xF8
    unsigned int radioCommand;  // 0x100
    unsigned int radioTimer;  // 0x104
    unsigned int radioQueue;  // 0x110
    char passengers[4];  // 0x114
    TechnoClass* transporter;  // 0x11C
    char turretChargeTimer[4];  // 0x120
    void* currentTurretNumber;  // 0x124
    char secondaryTurretIndex[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    AnimClass* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    char radioQueueCount[4];  // 0x138
    char currentRank[4];  // 0x13C
    void* gattlingStage;  // 0x140
    char gattlingValue[4];  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass* initialOwner;  // 0x14C
    char veterancy[4];  // 0x150
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
    char hijackerInfantryType[4];  // 0x294
    char storedTiberium[4];  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    unsigned int tiberiumCollectionState;  // 0x2A8
    char unloadTimer[4];  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    int isBerserk_duration_left;  // 0x2B0
    char barrelFacing[4];  // 0x2B8
    unsigned char alignmentPadding2A9;  // 0x2B9
    char facing[4];  // 0x2BC
    char turretFacing[4];  // 0x2C0
    char currentBurstIndex[4];  // 0x2C4
    char target_laser_timer[4];  // 0x2C8
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
    char barrelRecoil[4];  // 0x2FC
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
    void* currentTargetThreatValues;  // 0x33C
    unsigned int currentTargets;  // 0x354
    unsigned int attackedTargets;  // 0x36C
    char audioController3[4];  // 0x384
    char primaryFacing[4];  // 0x388
    unsigned int audioLoopIndex3;  // 0x3A0
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
    char FootClass_field_570[4];  // 0x570
    int unused574;  // 0x574
    unsigned int FootClass_field_578;  // 0x578
    char FootClass_field_57C[4];  // 0x57C
    unsigned int FootClass_field_580;  // 0x580
    float FootClass_field_584;  // 0x584
    int FootClass_DVC_588;  // 0x588
    char FootClass_field_5A0[4];  // 0x5A0
    char FootClass_field_5A4[4];  // 0x5A4
    char FootClass_field_5A8[4];  // 0x5A8
    unsigned int FootClass_DVC_5AC;  // 0x5AC
    char FootClass_field_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    unsigned int m_padding_5D2;  // 0x5D2
    char FootClass_field_5D4[4];  // 0x5D4
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
    char UnitClass_field_int_6C0[4];  // 0x6C0
    UnitTypeClass* Type;  // 0x6C4
    UnitClass* FollowerCar;  // 0x6C8
    char FlagHouseIndex[4];  // 0x6CC
    bool HasFollowerCar;  // 0x6D0
    bool Unloading;  // 0x6D1
    bool UnitClass_field_bool_6D2;  // 0x6D2
    bool TerrainPalette;  // 0x6D3
    char UnitClass_field_int_6D4[4];  // 0x6D4
    char DeathFrameCounter[4];  // 0x6D8
    EBolt* ElectricBolt;  // 0x6DC
    bool Deployed;  // 0x6E0
    bool Deploying;  // 0x6E1
    bool Undeploying;  // 0x6E2
    char NonPassengerCount[4];  // 0x6E4
    unsigned char ToolTipText;  // 0x6E8
// --- flat members (END) ---
    static int GetExitCell(int pThis, unsigned int *a2, unsigned int *a3);
    static int ClearTargetRef(UnitClass *pThis, int a2);
    int ProcessIdleOrders();
int Construct(int a2, LPVOID ppv, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void ** Create(void *a2, unsigned int *a3, int a4, void *a1 = 0);
    unsigned int q_C30;  // +0xC30 flat supply (three-ban reform)
};

} // namespace gamemd
