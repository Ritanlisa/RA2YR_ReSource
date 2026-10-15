// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct TemporalClass;  // fix_fwd_type_supply
struct AirstrikeClass;  // fix_fwd_type_supply
struct CaptureManagerClass;  // fix_fwd_type_supply
struct SpawnManagerClass;  // fix_fwd_type_supply
struct SlaveManagerClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct TeamClass;  // fix_fwd_type_supply
struct RadBeam;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ILocomotion;  // fix_fwd_type_supply
struct LocomotionClass;  // fix_fwd_type_supply

#ifndef GAMEMD_TREE_UNIVERSE
struct FootClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    void* vfptr_3;  // 0x12
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C [X30:type_map]
    bool NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C [X30:type_map]
    void* nextObject;  // 0x30
    bool needsSave;  // 0x32
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34 [X30:type_map]
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
int customSound;  // 0x64 [X35-L7 kind=int]
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    IUnknown* health;  // 0x6C [X30:type_map]
int estimatedHealth;  // 0x70 [X35-L7 kind=int]
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    void* spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    void* lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4 [X30:type_map]
    bool missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    int missionStatus;  // 0xBC [X30:type_map]
    char missionStartTime[4];  // 0xC0
    unsigned int missionData;  // 0xC4
    int missionTimer;  // 0xC8 [X30:type_map]
    unsigned char lastCommands;  // 0xD4
    unsigned int radioLinks;  // 0xE0
    unsigned long long flashing;  // 0xE4
    unsigned long long animation;  // 0xEC
    unsigned long long passengers;  // 0xF4
    char radioContact[4];  // 0xF8
    unsigned int transporter;  // 0xFC
    unsigned int turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    unsigned int deployAnim;  // 0x110
    char inAirFlag[1];  // 0x114
    int turretChargeTimer_d;  // 0x120
    int currentTurretNumber_d;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    int deployAnim_d;  // 0x130
    unsigned char inAirFlag_d;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
int radioQueueCount;  // 0x138 [X35-L7 kind=int]
    unsigned char alignmentPadding139_d;  // 0x139
    char currentWeaponSlot[4];  // 0x13C
    void* currentRank;  // 0x140
int gattlingStage;  // 0x144 [X35-L7 kind=int]
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    char initialOwner[4];  // 0x150
    unsigned int veterancy;  // 0x154
    double alignmentPadding154;  // 0x158
    unsigned long long armorMultiplier;  // 0x15C
    double firepowerMultiplier;  // 0x160
    unsigned long long firepowerMultiplier_d;  // 0x164
    char idleActionTimer[12];  // 0x168
    void* radarFlashTimer;  // 0x174
    unsigned char radarFlashTimer_d;  // 0x178
    void* targetingTimer;  // 0x180
    bool targetingTimer_d;  // 0x184
    unsigned char ironCurtainTimer;  // 0x190
    unsigned char ironTintTimer;  // 0x19C
    char ironTintStage[4];  // 0x1A8
    unsigned char airstrikeTimer;  // 0x1AC
    char airstrikeTintTimer[12];  // 0x1B8
    unsigned int airstrikeTintStage;  // 0x1C4
    unsigned int forceShielded;  // 0x1C8
    void* drainTarget;  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    TechnoClass* drainTarget_d;  // 0x1D0
    AnimClass* drainingMe;  // 0x1D4
    bool drainAnim;  // 0x1D8
    unsigned int isDisguisedFlag;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    void* infantryBlinkTimer;  // 0x1E0
    unsigned char infantryBlinkTimer_d;  // 0x1E4
    void* disguiseBlinkTimer;  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    unsigned char alignmentPadding1F9;  // 0x1FD
    unsigned char reloadTimer;  // 0x200
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x210
    int displayProductionTo;  // 0x214 [X30:type_map]
    AbstractClass* Owner;  // 0x218
    HouseClass * owner;  // 0x21C
    unsigned int owner_d;  // 0x220
    char cloakState[4];  // 0x224
    unsigned long long cloakProgress;  // 0x228
    unsigned int spawnOwner;  // 0x22C
    unsigned char cloakDelayTimer;  // 0x230
    unsigned int slaveManager;  // 0x234
    unsigned int warpFactor;  // 0x23C
    char isChronosphereImmune[1];  // 0x240
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    unsigned int ammo;  // 0x258
    unsigned int unitValue;  // 0x25C
    int lastSightRange;  // 0x260 [X30:type_map]
    int lastSightHeight;  // 0x264 [X30:type_map]
    bool ambientParticles;  // 0x268
    bool isGeneratingGap;  // 0x269
    char gapRadius[4];  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned short alignmentPadding27E;  // 0x27E
    unsigned int waveEffect;  // 0x280
    int isBeingWarpedOut_d;  // 0x284
    unsigned char isWarpEffectActive_d;  // 0x286
    unsigned int temporalUsing_d;  // 0x288
    unsigned char isImmobilized_d;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    AirstrikeClass* owningHouseIndex0;  // 0x294
    bool chronoLockRemaining;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    FootClass* airstrike;  // 0x2A8
    FootClass* isBerserk;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    FootClass* isBerserk_duration_left;  // 0x2B0
    unsigned char alignmentPadding2A9;  // 0x2B9
    CaptureManagerClass* rockerLinkedUnit;  // 0x2BC
    TechnoClass* locomotorTarget;  // 0x2C0
    bool locomotorSource;  // 0x2C4
    AnimClass* target;  // 0x2C8
    HouseClass* lastTarget;  // 0x2CC
    SpawnManagerClass* captureManager;  // 0x2D0
    TechnoClass* mindControlledBy;  // 0x2D4
    unsigned int targetLaserFlags;  // 0x2D6
    SlaveManagerClass* mindControlledBy_a_unit;  // 0x2D8
    unsigned char alignmentPadding2C2;  // 0x2D9
    unsigned int wasAlreadySinking;  // 0x2DA
    unsigned int isReceivingDamageEffect;  // 0x2DB
    TechnoClass* mindControlRingAnim;  // 0x2DC
    unsigned int hasBeenAttacked;  // 0x2DD
    unsigned int isCloakableFlag;  // 0x2DE
    unsigned int isPrimaryFactory;  // 0x2DF
    HouseClass* mindControlledBy_house;  // 0x2E0
    unsigned int isInPlayfield;  // 0x2E1
    TechnoClass* spawnManager;  // 0x2E4
    unsigned int slaveOwner;  // 0x2F0
    unsigned int originalOwnerHouse;  // 0x2F4
    unsigned int bunkerLinkedUnit;  // 0x2F8
    char pitchAngle[4];  // 0x2FC
    char diskLaserTimer[12];  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    ParticleSystemClass* sparkParticles;  // 0x308
    ParticleSystemClass* diskLaserChargeState;  // 0x30C
    int ammo_d;  // 0x310
    unsigned int isBarrelLocked;  // 0x315
    unsigned int isHumanControlled;  // 0x316
    unsigned int isDiscoveredByPlayer;  // 0x317
    unsigned int isSelectedByPlayer;  // 0x319
    unsigned int isUnderCursor;  // 0x31A
    unsigned int isCommandLineTarget;  // 0x31B
    unsigned int isRecruitableByAlly;  // 0x31D
    unsigned int isRecruitableByEnemy;  // 0x31E
    unsigned int isRadarTracked;  // 0x31F
    int ambientParticles_d;  // 0x320
    bool isCrashing;  // 0x321
    bool wasAlreadyCrashing;  // 0x322
    bool isBeingManipulated;  // 0x323
    TechnoClass* damageParticles;  // 0x324
    HouseClass* railgunParticles;  // 0x328
    bool auxParticles1;  // 0x32C
    bool isEMPImmune;  // 0x32D
    bool isRadiationImmune;  // 0x32E
    TeamClass* auxParticles2;  // 0x330
    bool firingParticles;  // 0x334
    bool isAbsorbed;  // 0x335
    bool isGrindingInProgress;  // 0x336
    int waveEffect_d;  // 0x338
    unsigned int tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    float tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    int hijackerInfantryType;  // 0x34C
    unsigned char storedTiberium;  // 0x350
    unsigned int currentTargets;  // 0x354
    int tiberiumCollectionState;  // 0x360
    unsigned char unloadTimer;  // 0x364
    unsigned int attackedTargets;  // 0x36C
    char barrelFacing[24];  // 0x370
    char currentBurstIndex[4];  // 0x37C
    char primaryFacing[24];  // 0x388
    char targetLaserOpacity[4];  // 0x38C
    bool isSinking;  // 0x391
    bool isSpawned;  // 0x398
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    char currentBurstIndex_d[4];  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isSinking_d;  // 0x3CD
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    char turretRecoil_d[32];  // 0x3D8
    bool isTurretLocked;  // 0x3DC
    bool isDiscoveredByComputer;  // 0x3E0
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    char barrelRecoil[32];  // 0x3F8
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    void* isDiscoveredByCurrentPlayer;  // 0x41B
    bool isDiscoveredByComputer_d;  // 0x41C
    char sightRangeBonus;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool isRadarTracked_d;  // 0x423
    bool isOnCarryall;  // 0x424
    TechnoClass* manipulatedByUnit_d;  // 0x428
    HouseClass* chronoWarpedByHouse_d;  // 0x42C
    bool isChronoImmuneFlag_d;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed_d;  // 0x439
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    bool vecInt_IsAllocated;  // 0x44D
    void * vecAbs_Items;  // 0x45C
    int vecAbs_Capacity;  // 0x460
    bool vecAbs_IsAllocated;  // 0x465
    unsigned int disguiseCreationFrame;  // 0x476
    char audioController4[4];  // 0x47C
    char turretRotateSoundController[20];  // 0x488
    bool isAudio4Active;  // 0x490
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[20];  // 0x4A4
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
    int FootClass_field_520;  // 0x520 [X30:type_map]
    int FootClass_field_524;  // 0x524 [X30:type_map]
short FootClass_field_526;  // 0x526 [X35-L7 kind=short]
    int FootClass_field_528;  // 0x528 [X30:type_map]
    char FootClass_field_52A[2];  // 0x52A
    char FootClass_field_52C[4];  // 0x52C
    char FootClass_field_52E[4];  // 0x52E
    ILocomotion* FootClass_field_530;  // 0x530 [X30:type_map]
    char controlGroup[4];  // 0x532
    ILocomotion* FootClass_field_534;  // 0x534 [X30:type_map]
    AbstractClass* focus;  // 0x536
int FootClass_field_538;  // 0x538 [X35-L7 kind=int]
    bool FootClass_field_53C;  // 0x53C
    unsigned char m_padding_53D;  // 0x53D
    IUnknown* FootClass_field_540;  // 0x540 [X30:type_map]
    char audioController7[20];  // 0x544
    int FootClass_field_558;  // 0x558 [X30:type_map]
    char FootClass_field_55A[4];  // 0x55A
    int FootClass_field_55C;  // 0x55C [X30:type_map]
    char FootClass_field_55E[4];  // 0x55E
    int FootClass_field_560;  // 0x560 [X30:type_map]
    char FootClass_field_562[4];  // 0x562
    void* FootClass_field_564;  // 0x564 [X30:type_map]
    char FootClass_field_566[4];  // 0x566
    char FootClass_field_568[12];  // 0x568
    ILocomotion* FootClass_field_56C;  // 0x56C [X30:type_map]
int FootClass_field_570;  // 0x570 [X35-L7 kind=int]
    unsigned int unused574;  // 0x574
    int FootClass_field_578;  // 0x578 [X30:type_map]
    ILocomotion* FootClass_field_57C;  // 0x57C [X30:type_map]
    char FootClass_field_580[8];  // 0x580
    float FootClass_field_584;  // 0x584
    unsigned int FootClass_DVC_588;  // 0x588
    int FootClass_field_5A0;  // 0x5A0 [X30:type_map]
    int FootClass_field_5A4;  // 0x5A4 [X30:type_map]
    int FootClass_field_5A8;  // 0x5A8 [X30:type_map]
    void* FootClass_DVC_5AC;  // 0x5AC [X30:type_map]
    int FootClass_field_5C4;  // 0x5C4 [X30:type_map]
    void* FootClass_field_5C8;  // 0x5C8 [X30:type_map]
    int FootClass_field_5CC;  // 0x5CC [X30:type_map]
    unsigned int u32_5B9;  // 0x5B9
    bool FootClass_field_5D0;  // 0x5D0
    bool FootClass_field_bool_5D1;  // 0x5D1
    unsigned char m_padding_5D2;  // 0x5D2
    int FootClass_field_5D4;  // 0x5D4 [X30:type_map]
    void* FootClass_field_5D8;  // 0x5D8 [X30:type_map]
    void* FootClass_field_5DC;  // 0x5DC [X30:type_map]
    char pathDirections[96];  // 0x5E0
    bool gapSuperCharged;  // 0x616
    char FootClass_field_640[12];  // 0x640
    int FootClass_field_644;  // 0x644 [X30:type_map]
    int FootClass_field_648;  // 0x648 [X30:type_map]
    int FootClass_field_64C;  // 0x64C [X30:type_map]
    char FootClass_field_650[12];  // 0x650
int FootClass_field_654;  // 0x654 [X35-L7 kind=int]
    ILocomotion* FootClass_field_658;  // 0x658 [X30:type_map]
    char FootClass_field_65C[12];  // 0x65C
    TechnoClass* FootClass_field_660;  // 0x660 [X30:type_map]
    ILocomotion* FootClass_field_664;  // 0x664 [X30:type_map]
    char FootClass_field_668[12];  // 0x668
    char FootClass_field_66C[4];  // 0x66C
int FootClass_field_670;  // 0x670 [X35-L7 kind=int]
    ILocomotion* Locomotor;  // 0x674
    LocomotionClass* Locomotor_ptr;  // 0x678
    bool IsDeploying;  // 0x67C
    char FootClass_field_680[4];  // 0x680
    int FootClass_field_684;  // 0x684 [X30:type_map]
    bool unknownBool685;  // 0x685
    unsigned char waypointIndex;  // 0x686
    bool unknownBool687;  // 0x687
    unsigned char FootClass_bools_688;  // 0x688
    bool isTeamLeader;  // 0x689
    bool shouldScanForTarget;  // 0x68A
    bool FootClass_field_bool_68B;  // 0x68B
    bool FootClass_field_bool_68C;  // 0x68C
    bool unknownBool68D;  // 0x68D
    bool FootClass_field_bool_68E;  // 0x68E
    bool shouldEnterAbsorber;  // 0x68F
    bool shouldEnterOccupiable;  // 0x690
    bool shouldGarrisonStructure;  // 0x691
int FootClass_field_694;  // 0x694 [X35-L7 kind=int]
int FootClass_field_698;  // 0x698 [X35-L7 kind=int]
    int FootClass_field_69C;  // 0x69C [X30:type_map]
    int FootClass_field_6A0;  // 0x6A0 [X30:type_map]
    char FootClass_field_6A4[4];  // 0x6A4
    ILocomotion* FootClass_bools_6A8;  // 0x6A8 [X30:type_map]
    bool FootClass_field_bool_6AC;  // 0x6AC
    bool isAttackedByLocomotor;  // 0x6AD
    bool isLetGoByLocomotor;  // 0x6AE
    bool FootClass_field_bool_6AF;  // 0x6AF
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
    bool FootClass_field_6BC;  // 0x6BC
    bool FootClass_field_6BD;  // 0x6BD
    bool FootClass_field_6BE;  // 0x6BE
    bool FootClass_field_6BF;  // 0x6BF
// --- flat members (END) ---
    void* nextTeamMember;  // 0x5D8 (G57W14E1 til supply) [X30:type_map]
    unsigned int FindAITarget_ph;  // w18j3: filler renamed (no offset truth; canon FootClass::FindAITarget is a method)
    static unsigned int FindAITarget(int* p0);  // x4:signals@0x4d6aa0
    void* movementDestination;  // 0x0 (no offset truth)
    void* HandleCursorWithCheck_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FootClass::HandleCursorWithCheck is a method)
    static unsigned int HandleCursorWithCheck(int16_t* p0, char p1, char p2);  // x4:signals@0x4ddde0
    void* OverrideMission_SyncLog_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FootClass::OverrideMission_SyncLog is a method)
    static unsigned int OverrideMission_SyncLog(int p0, int p1, int p2);  // x4:signals@0x4d8f40
    void* ValidateMove_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon FootClass::ValidateMove is a method)
    static unsigned int ValidateMove(int p0, int* p1, char p2);  // x4:signals@0x4d74e0
    void* currentSpeed_percentage;  // 0x0 (no offset truth)
    void* unknown698;  // 0x0 (no offset truth)
    AbstractClass * Destruct(void *a1 = 0);
    int updateThreat();
    unsigned int checkTurning();
    void Destroyed(int a2);
    AbstractClass * FootClass_ImbueLocomotor(void * a1, void * a2, void * a3, void *a4, void *a5, void *a6);
    void Stub(int a1);
     int GetField(void *a1 = 0, void *a2 = 0);
    static int SetField(FootClass * aP1, int a2);
    static int ProcessDeploy(FootClass *aP1, int a2, double a3, int *a4, int a5, int a6, void *a7, char a8, int64_t a9);
    static char AssignDestination(FootClass * aP1, int a2, int a3);
    static char RemoveFromPointerArray(FootClass * aP1, int a2);
    static void MissionMoveCarryallLand(FootClass * aP1);
    int  CreateWakes(int a2, int a3, int a4);  // 0x629e90
    int ClearPathIndex(void *a1 = 0);  // 0x4df0d0
    unsigned int * PostLoadInit(int a2);
    static BOOL checkPassability();
    static int CheckAccelLimit(int *p_this);  // x4:ida@0x750030
    char __pad_58C[20];  // 0x58C (ml)
    char __pad_5B0[20];  // 0x5B0 (ml)
    void* currentJumpjetMapCoords;  // 0x564 (ml) [X30:type_map]
    ILocomotion* locomotor;  // 0x674 (ml) [X30:type_map]
    int parasiteImUsing;  // 0x69C (ml)
    int team;  // 0x5D4 (ml)
    int unknownAbstractArray588;  // 0x588 (ml)
    char TeamClass_CheckCohesion(double a2);  // plateau: def-aligned C2039/C2660

    unsigned int u32_595;  // X10 supply (member_lookup)
    int u32_D54;  // X10 supply (member_lookup)

    AbstractClass* q590;  // X10 supply (member_lookup)
    unsigned char __pad_115;  // 0x115 [X30:canon]
    unsigned char __pad_12C;  // 0x12C [X30:canon]
    unsigned char __pad_1F0;  // 0x1F0 [X30:canon]
    unsigned char __pad_1FC;  // 0x1FC [X30:canon]
    unsigned char __pad_20C;  // 0x20C [X30:canon]
    unsigned char __pad_241;  // 0x241 [X30:canon]
    unsigned char __pad_285;  // 0x285 [X30:canon]
    unsigned char __pad_287;  // 0x287 [X30:canon]
    unsigned char __pad_28C;  // 0x28C [X30:canon]
    AbstractClass* __pad_2B4;  // 0x2B4 [X30:type_map]
    unsigned char __pad_2E8;  // 0x2E8 [X30:canon]
    unsigned char __pad_314;  // 0x314 [X30:canon]
    bool __pad_3CE;  // 0x3CE [X30:type_map]
    unsigned char __pad_3D1;  // 0x3D1 [X30:canon]
    bool __pad_3D5;  // 0x3D5 [X30:type_map]
    unsigned char __pad_41D;  // 0x41D [X30:canon]
bool __pad_422;  // 0x422 [X35-L7 kind=bool]
    bool __pad_425;  // 0x425 [X30:type_map]
    unsigned char __pad_43A;  // 0x43A [X30:canon]
    unsigned char __pad_458;  // 0x458 [X30:canon]
    unsigned char __pad_464;  // 0x464 [X30:canon]
    unsigned char __pad_469;  // 0x469 [X30:canon]
    unsigned char __pad_47A;  // 0x47A [X30:canon]
    unsigned char __pad_480;  // 0x480 [X30:canon]
    unsigned char __pad_4BA;  // 0x4BA [X30:canon]
    unsigned char __pad_4D6;  // 0x4D6 [X30:canon]
    unsigned char __pad_4FA;  // 0x4FA [X30:canon]
    unsigned char __pad_692;  // 0x692 [X30:canon]
    unsigned int FootClass_field_abstract_array_5AC;  // [X30:default]
    int q598;  // 0x598 [X30:type_map]
    unsigned int q59C;  // 0x59C [X30:default]
    AbstractClass* q5B4;  // 0x5B4 [X30:type_map]
    AbstractClass* q5BC;  // 0x5BC [X30:type_map]
    unsigned int q5C0;  // 0x5C0 [X30:default]
    unsigned int q_5B0;  // [X30:default]
    unsigned int railgunParticles_2;  // [X30:default]
    unsigned int targetingTimer_2;  // [X30:default]
    unsigned int vfptr;  // [X30:default]
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
