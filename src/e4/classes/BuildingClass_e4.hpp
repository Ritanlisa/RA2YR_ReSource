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
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    unsigned char NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    unsigned int u32_26;  // 0x26
    void* owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    void* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    void* q044;  // 0x44
    void* q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    unsigned int q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int q060;  // 0x60
    unsigned int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    void* health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    void* isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int q077;  // 0x77
    unsigned int spawnStatus;  // 0x78
    unsigned int q07A;  // 0x7A
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    unsigned int q07D;  // 0x7D
    unsigned int q07E;  // 0x7E
    unsigned int q07F;  // 0x7F
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    void* isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
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
    void* q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0AA;  // 0xAA
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    unsigned int q0B1;  // 0xB1
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    bool q0BF;  // 0xBF
    void* missionStartTime;  // 0xC0
    unsigned int q0C3;  // 0xC3
    void* missionData;  // 0xC4
    unsigned char q0C6;  // 0xC6
    char missionTimer[12];  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    char lastCommands[12];  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int radioLinks;  // 0xE0
    void* flashing;  // 0xE4
    TechnoClass* q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    unsigned long long animation;  // 0xEC
    bool q0ED;  // 0xED
    char q0F0[4];  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned int u32_F4;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    void* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    AbstractClass* transporter;  // 0xFC
    bool q0FF;  // 0xFF
    void* turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    AbstractClass* deployAnim;  // 0x110
    unsigned int q111;  // 0x111
    char inAirFlag[1];  // 0x114
    AbstractClass* q118;  // 0x118
    unsigned int q11A;  // 0x11A
    unsigned int u32_11B;  // 0x11B
    TechnoClass* q11C;  // 0x11C
    unsigned int q11E;  // 0x11E
    char q120[4];  // 0x120
    char q124[4];  // 0x124
    char q128[4];  // 0x128
    AnimClass* q12C;  // 0x12C
    unsigned int q12D;  // 0x12D
    unsigned int q12E;  // 0x12E
    unsigned int q12F;  // 0x12F
    AnimClass* q130;  // 0x130
    bool q134;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    unsigned int currentWeaponSlot;  // 0x138
    unsigned char q139;  // 0x139
    char q13C[4];  // 0x13C
    void* currentRank;  // 0x140
    unsigned int gattlingStage;  // 0x144
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    void* q14E;  // 0x14E
    void* initialOwner;  // 0x150
    unsigned int veterancy;  // 0x154
    double alignmentPadding154;  // 0x158
    void* q15A;  // 0x15A
    bool q15B;  // 0x15B
    unsigned long long armorMultiplier;  // 0x15C
    unsigned int q15D;  // 0x15D
    double q160;  // 0x160
    unsigned int firepowerMultiplier;  // 0x164
    unsigned int q166;  // 0x166
    unsigned int q167;  // 0x167
    char q168[4];  // 0x168
    bool q169;  // 0x169
    bool q16B;  // 0x16B
    void* idleActionTimer;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned int q173;  // 0x173
    char radarFlashTimer[12];  // 0x174
    bool q175;  // 0x175
    unsigned char q178;  // 0x178
    void* q17C;  // 0x17C
    char targetingTimer[12];  // 0x180
    bool q184;  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned char ironCurtainTimer;  // 0x190
    char q194[4];  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char ironTintTimer;  // 0x19C
    char q1A0[4];  // 0x1A0
    unsigned int q1A2;  // 0x1A2
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    int ironTintStage;  // 0x1A8
    char airstrikeTimer[12];  // 0x1AC
    unsigned int q1AE;  // 0x1AE
    char q1B0[4];  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B7;  // 0x1B7
    unsigned char airstrikeTintTimer;  // 0x1B8
    char q1BC[4];  // 0x1BC
    void* airstrikeTintStage;  // 0x1C0
    void* q1C4;  // 0x1C4
    unsigned int forceShielded;  // 0x1C8
    TechnoClass* isDeactivated;  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    TechnoClass* drainTarget;  // 0x1D0
    unsigned int q1D1;  // 0x1D1
    AnimClass* drainingMe;  // 0x1D4
    bool drainAnim;  // 0x1D8
    unsigned int isDisguisedFlag;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    char disguiseCreationFrame[4];  // 0x1E0
    unsigned int q1E1;  // 0x1E1
    unsigned char infantryBlinkTimer;  // 0x1E4
    unsigned int q1E8;  // 0x1E8
    void* disguiseBlinkTimer;  // 0x1EC
    unsigned int q1ED;  // 0x1ED
    unsigned char q1F0;  // 0x1F0
    unsigned int q1F4;  // 0x1F4
    bool isTargetedByChrono;  // 0x1F8
    void* reloadTimer;  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    unsigned char q200;  // 0x200
    int q201;  // 0x201
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned int currentBurstCount;  // 0x208
    unsigned int q20C;  // 0x20C
    unsigned int currentBarrelIndex;  // 0x210
    char displayProductionTo[4];  // 0x214
    AbstractClass* Owner;  // 0x218
    void* owner;  // 0x21C
    unsigned int q220;  // 0x220
    char cloakState[4];  // 0x224
    unsigned long long cloakProgress;  // 0x228
    unsigned int q22C;  // 0x22C
    unsigned char cloakDelayTimer;  // 0x230
    unsigned int q234;  // 0x234
    AbstractClass* q238;  // 0x238
    unsigned int warpFactor;  // 0x23C
    char isChronosphereImmune[1];  // 0x240
    unsigned char q241;  // 0x241
    unsigned int q244;  // 0x244
    unsigned int q248;  // 0x248
    float q24C;  // 0x24C
    bool q250;  // 0x250
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    void* q258;  // 0x258
    unsigned int u32_25C;  // 0x25C
    unsigned int lastSightRange;  // 0x260
    unsigned int lastSightHeight;  // 0x264
    void* gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    unsigned int u32_26A;  // 0x26A
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
    unsigned int q280;  // 0x280
    char q284[1];  // 0x284
    unsigned char q285;  // 0x285
    unsigned char q286;  // 0x286
    unsigned char q287;  // 0x287
    char q288[4];  // 0x288
    unsigned int q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    void* airstrike;  // 0x294
    void* isBerserk;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    void* rockerLinkedUnit;  // 0x2A8
    FootClass* q2AC;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    FootClass* isBerserk_duration_left;  // 0x2B0
    void* q2B2;  // 0x2B2
    void* q2B3;  // 0x2B3
    void* target;  // 0x2B4
    AbstractClass* q2B8;  // 0x2B8
    unsigned char alignmentPadding2A9;  // 0x2B9
    CaptureManagerClass* q2BC;  // 0x2BC
    void* mindControlledBy;  // 0x2C0
    void* mindControlledBy_a_unit;  // 0x2C4
    AnimClass* q2C8;  // 0x2C8
    HouseClass* lastTarget;  // 0x2CC
    SpawnManagerClass* captureManager;  // 0x2D0
    TechnoClass* q2D4;  // 0x2D4
    SlaveManagerClass* q2D8;  // 0x2D8
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
    unsigned int q30A;  // 0x30A
    ParticleSystemClass* q30C;  // 0x30C
    ParticleSystemClass* ammo;  // 0x310
    ParticleSystemClass* unitValue;  // 0x314
    ParticleSystemClass* q318;  // 0x318
    unsigned int q31C;  // 0x31C
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
    unsigned int q354;  // 0x354
    unsigned int q358;  // 0x358
    void* q35C;  // 0x35C
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    char barrelFacing[24];  // 0x370
    char q374[4];  // 0x374
    unsigned char q378;  // 0x378
    unsigned int currentBurstIndex;  // 0x37C
    void* q380;  // 0x380
    char q384[4];  // 0x384
    char primaryFacing[24];  // 0x388
    unsigned int q38A;  // 0x38A
    char targetLaserOpacity[4];  // 0x38C
    unsigned int targetLaserFlags;  // 0x38E
    void* q390;  // 0x390
    bool isSinking;  // 0x391
    bool isReceivingDamageEffect;  // 0x393
    unsigned char q394;  // 0x394
    bool hasBeenAttacked;  // 0x395
    bool isPrimaryFactory;  // 0x397
    bool isSpawned;  // 0x398
    bool isInPlayfield;  // 0x399
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    void* q3AC;  // 0x3AC
    unsigned char q3B0;  // 0x3B0
    unsigned int q3B7;  // 0x3B7
    char q3B8[4];  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3C4;  // 0x3C4
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool q3CD;  // 0x3CD
    bool wasAlreadySinking;  // 0x3CE
    bool q3CF;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool q3D1;  // 0x3D1
    void* isCloakableFlag;  // 0x3D2
    bool q3D3;  // 0x3D3
    bool isALoaner;  // 0x3D4
    void* q3D5;  // 0x3D5
    unsigned char q3D6;  // 0x3D6
    unsigned char q3D7;  // 0x3D7
    char q3D8[32];  // 0x3D8
    bool isTurretLocked;  // 0x3DC
    bool isBarrelLocked;  // 0x3DD
    bool isHumanControlled;  // 0x3DE
    bool isDiscoveredByPlayer;  // 0x3DF
    bool isDiscoveredByComputer;  // 0x3E0
    bool isSelectedByPlayer;  // 0x3E1
    bool isUnderCursor;  // 0x3E2
    bool isCommandLineTarget;  // 0x3E3
    void* q3E4;  // 0x3E4
    bool isRecruitableByAlly;  // 0x3E5
    bool isRecruitableByEnemy;  // 0x3E6
    bool isRadarTracked;  // 0x3E7
    unsigned char q3E8;  // 0x3E8
    bool isCrashing;  // 0x3E9
    bool wasAlreadyCrashing;  // 0x3EA
    bool isBeingManipulated;  // 0x3EB
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    bool isEMPImmune;  // 0x3F5
    bool isRadiationImmune;  // 0x3F6
    char barrelRecoil[32];  // 0x3F8
    unsigned int u32_3FC;  // 0x3FC
    unsigned int q400;  // 0x400
    char q404[4];  // 0x404
    void* q408;  // 0x408
    HouseClass* q40C;  // 0x40C
    unsigned char q410;  // 0x410
    unsigned int u32_414;  // 0x414
    void* isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool q41C;  // 0x41C
    bool q41D;  // 0x41D
    bool q41E;  // 0x41E
    bool q41F;  // 0x41F
    char q420;  // 0x420
    bool q421;  // 0x421
    bool q422;  // 0x422
    bool q423;  // 0x423
    bool isOnCarryall;  // 0x424
    bool q425;  // 0x425
    bool q426;  // 0x426
    bool q427;  // 0x427
    TechnoClass* q428;  // 0x428
    HouseClass* q42C;  // 0x42C
    bool q430;  // 0x430
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
    TechnoClass* q464;  // 0x464
    bool vecAbs_IsAllocated;  // 0x465
    AnimClass* q468;  // 0x468
    unsigned char attackedTargets;  // 0x470
    void* q474;  // 0x474
    unsigned char q478;  // 0x478
    char audioController4[4];  // 0x47C
    char q480[4];  // 0x480
    unsigned char q484;  // 0x484
    unsigned int q487;  // 0x487
    char turretRotateSoundController[20];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    bool isAudio4Active;  // 0x490
    ObjectClass* q494;  // 0x494
    void* q498;  // 0x498
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int q49D;  // 0x49D
    unsigned int turretIsRotating;  // 0x4A0
    void* gattlingSoundController;  // 0x4A4
    void* q4A8;  // 0x4A8
    unsigned char q4AC;  // 0x4AC
    void* q4B0;  // 0x4B0
    void* q4B4;  // 0x4B4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned char q4BA;  // 0x4BA
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    void* q4C4;  // 0x4C4
    unsigned char q4C8;  // 0x4C8
    void* q4CC;  // 0x4CC
    void* q4D0;  // 0x4D0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned char q4D6;  // 0x4D6
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int u32_4E8;  // 0x4E8
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned char q4FA;  // 0x4FA
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
    char q526[4];  // 0x526
    char C4Timer[12];  // 0x528
    unsigned int q52B;  // 0x52B
    unsigned int q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    unsigned int q530;  // 0x530
    char controlGroup[4];  // 0x532
    char BuildingClass_field_int_534[4];  // 0x534
    AbstractClass* focus;  // 0x536
    char BuildingClass_field_int_538[4];  // 0x538
    unsigned int OwnerCountryIndex;  // 0x53C
    unsigned int q53F;  // 0x53F
    InfantryClass* C4AppliedBy;  // 0x540
    unsigned int BuildingClass_field_544;  // 0x544
    bool q546;  // 0x546
    unsigned int q547;  // 0x547
    AnimClass* FirestormAnim;  // 0x548
    unsigned int q54B;  // 0x54B
    AnimClass* PsiWarnAnim;  // 0x54C
    unsigned int q54D;  // 0x54D
    unsigned int q54E;  // 0x54E
    unsigned int q54F;  // 0x54F
    char BuildingClass_field_timer_550[12];  // 0x550
    unsigned int q551;  // 0x551
    void* q554;  // 0x554
    unsigned int q558;  // 0x558
    AnimClass* Anims;  // 0x55C
    unsigned char q560;  // 0x560
    unsigned int q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned char q56C;  // 0x56C
    void* q570;  // 0x570
    unsigned int q578;  // 0x578
    void* q57C;  // 0x57C
    unsigned int q580;  // 0x580
    unsigned int q584;  // 0x584
    unsigned int q588;  // 0x588
    TechnoClass* q58C;  // 0x58C
    unsigned char q590;  // 0x590
    void* q594;  // 0x594
    unsigned int q598;  // 0x598
    void* q59C;  // 0x59C
    unsigned int q5A0;  // 0x5A0
    void* q5A4;  // 0x5A4
    unsigned char q5A8;  // 0x5A8
    bool AnimStates;  // 0x5B0
    void* q5B4;  // 0x5B4
    unsigned int u32_5B8;  // 0x5B8
    unsigned int u32_5B9;  // 0x5B9
    unsigned int u32_5BC;  // 0x5BC
    unsigned char q5C0;  // 0x5C0
    unsigned int q5C4;  // 0x5C4
    AnimClass* DamageFireAnims;  // 0x5C8
    void* q5CC;  // 0x5CC
    unsigned char q5D0;  // 0x5D0
    unsigned int q5D1;  // 0x5D1
    void* q5D4;  // 0x5D4
    unsigned char q5D8;  // 0x5D8
    void* q5E0;  // 0x5E0
    void* q5E4;  // 0x5E4
    bool RequiresDamageFires;  // 0x5E8
    unsigned char q5E9;  // 0x5E9
    BuildingTypeClass* Upgrades;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    char FiringSWType[4];  // 0x5F8
    unsigned int BuildingClass_field_5FC;  // 0x5FC
    BuildingLightClass* Spotlight;  // 0x600
    char GateTimer[16];  // 0x604
    char q608[4];  // 0x608
    unsigned int u32_60C;  // 0x60C
    unsigned int q610;  // 0x610
    LightSourceClass* LightSource;  // 0x614
    unsigned int LaserFenceFrame;  // 0x618
    unsigned int FirestormWallFrame;  // 0x61C
    char RepairProgress[8];  // 0x620
    unsigned int q624;  // 0x624
    void* q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned int q630;  // 0x630
    unsigned int q634;  // 0x634
    unsigned int q638;  // 0x638
    char BuildingClass_field_rect_63C[16];  // 0x63C
    void* q640;  // 0x640
    char chronoLockRemaining[4];  // 0x644
    void* q648;  // 0x648
    char BuildingClass_field_coord_64C[12];  // 0x64C
    unsigned int q650;  // 0x650
    unsigned int q654;  // 0x654
    char BuildingClass_field_int_658[4];  // 0x658
    unsigned int BuildingClass_field_65C;  // 0x65C
    bool HasPower;  // 0x660
    bool IsOverpowered;  // 0x661
    bool RegisteredAsPoweredUnitSource;  // 0x662
    unsigned int SupportingPrisms;  // 0x664
    bool HasExtraPowerBonus;  // 0x668
    bool HasExtraPowerDrain;  // 0x669
    unsigned char q66A;  // 0x66A
    unsigned int Overpowerers;  // 0x66C
    unsigned int Occupants;  // 0x670
    char FiringOccupantIndex[4];  // 0x674
    char Audio7[20];  // 0x678
    unsigned int q679;  // 0x679
    unsigned int q67C;  // 0x67C
    unsigned int q680;  // 0x680
    void* q684;  // 0x684
    unsigned int locomotorSource;  // 0x688
    char Audio8[20];  // 0x68C
    char q68F;  // 0x68F
    AudioController* q690;  // 0x690
    unsigned int u32_691;  // 0x691
    void* q694;  // 0x694
    unsigned int q698;  // 0x698
    void* q69C;  // 0x69C
    char q6A0[1];  // 0x6A0
    bool ShowRealName;  // 0x6A1
    bool BeingProduced;  // 0x6A2
    bool ShouldRebuild;  // 0x6A3
    bool HasEngineer;  // 0x6A4
    unsigned char q6A5;  // 0x6A5
    char CashProductionTimer[12];  // 0x6A8
    unsigned char q6AC;  // 0x6AC
    unsigned char q6B0;  // 0x6B0
    unsigned int u32_6B1;  // 0x6B1
    char q6B4[4];  // 0x6B4
    unsigned char q6B8;  // 0x6B8
    unsigned char q6BB;  // 0x6BB
    unsigned char q6BC;  // 0x6BC
    UnitTypeClass * q6C0;  // 0x6C0
    UnitTypeClass * q6C4;  // 0x6C4
    bool WasOnline;  // 0x6C8
    bool q6C9;  // 0x6C9
    bool q6CA;  // 0x6CA
    bool q6CB;  // 0x6CB
    bool q6CC;  // 0x6CC
    void* q6D0;  // 0x6D0
    unsigned int q6D2;  // 0x6D2
    char q6D3;  // 0x6D3
    unsigned int q6D4;  // 0x6D4
    unsigned int q6D8;  // 0x6D8
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
    unsigned char q6EE;  // 0x6EE
    unsigned int StorageFilledSlots;  // 0x6F0
    TechnoTypeClass* SecretProduction;  // 0x6F4
    char ColorAdd[3];  // 0x6F8
    unsigned char u8_6F9;  // 0x6F9
    unsigned char u8_6FA;  // 0x6FA
    unsigned char q6FB;  // 0x6FB
    char BuildingClass_field_int_6FC[4];  // 0x6FC
    char BuildingClass_field_short_700[2];  // 0x700
    unsigned char UpgradeLevel;  // 0x702
    char GateStage;  // 0x703
    char PrismStage[4];  // 0x704
    char PrismTargetCoords[12];  // 0x708
    void* q70C;  // 0x70C
    unsigned int u32_710;  // 0x710
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
    double q738;  // 0x738
    unsigned char PipelineStep;  // 0x73C
    unsigned char padProd3;  // 0x73D
    unsigned int Audio8_2;
    unsigned int CanRepair;
    unsigned int GetExitCoords;
    unsigned int SuperWeaponToken;
    unsigned int TogglePrimaryFactory;
    unsigned int *__pad_6B8;
    unsigned int u32_898;
    unsigned int u32_8B4;
    unsigned int ctor;

    void* CheckBuildability;  // 0x0 (no offset truth)
    void* Deploy;  // 0x0 (no offset truth)
    void* FreeUpgradeQueue;  // 0x0 (no offset truth)
    void* FreeUpgradeQueue2;  // 0x0 (no offset truth)


    void* SetType;  // 0x0 (no offset truth)
// --- flat members (END) ---
    TechnoClass * ClearLimpetCheck();
    int AllocAndCtor(BuildingClass * aP0, int aP2);
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
    static double AbandonProduction(...);  // C2597 interim stub
    static double AddUpgrade(...);  // C2597 interim stub
    static double AimTurret(...);  // C2597 interim stub
    static double CalcDrawPos(...);  // C2597 interim stub
    static double ClearAnims(...);  // C2597 interim stub
     int Construct(int a2, int a3);
    static double DemolishBridge(...);  // C2597 interim stub
    static double DetermineVisualState(...);  // C2597 interim stub
    static double FindByCellHash(...);  // C2597 interim stub
    static double FindBySWType(...);  // C2597 interim stub
    static double GetHealthRatio(...);  // C2597 interim stub
    static double GetPlacementCoords(...);  // C2597 interim stub
    static double GetPlacementRect(...);  // C2597 interim stub
    static double GetType_Thunk(...);  // C2597 interim stub
    static double IsCellPlaceable(...);  // C2597 interim stub
    static double IsTiberiumSiloEligible(...);  // C2597 interim stub
    static double PlayAnim(...);  // C2597 interim stub
    static double PowerUpdate(...);  // C2597 interim stub
    static double ReadConstructionData(...);  // C2597 interim stub
    static double RepairPlacement(...);  // C2597 interim stub
    static double SellEffects(...);  // C2597 interim stub
    static double SetField95(...);  // C2597 interim stub
    static double CreateIdleAnim(...);  // C2597 interim stub
    static double Deactivate(...);  // C2597 interim stub
    static double IsBeingRepairedOrCaptured(...);  // C2597 interim stub
    static double PowerOff(...);  // C2597 interim stub
    static double GetProductionFrame(...);  // C2597 interim stub
    static double GetType(...);  // C2597 interim stub
    static double GetSHPFrame(...);  // C2597 interim stub
    static double UpdateFloatPosition(...);  // C2597 interim stub
    static int CreatePlacementCrater(...);  // 0x486e70
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
};

} // namespace gamemd
