// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AircraftClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    void* vfptr_3;  // 0x12
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    bool NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int owningHouseIndex;  // 0x28
    bool q02B;  // 0x2B
    char fallRate[4];  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    bool needsSave;  // 0x32
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    bool q042;  // 0x42
    char q044[4];  // 0x44
    unsigned int u32_48;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    unsigned int health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
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
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* currentMission;  // 0xAC
    void* suspendedMission;  // 0xB0
    unsigned int q0B1;  // 0xB1
    unsigned int q0B2;  // 0xB2
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    bool q0BF;  // 0xBF
    char missionStartTime[4];  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int missionData;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    char missionTimer[12];  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    unsigned char lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int radioLinks;  // 0xE0
    unsigned long long flashing;  // 0xE4
    unsigned int q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    unsigned long long animation;  // 0xEC
    bool q0ED;  // 0xED
    char q0F0[8];  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned long long passengers;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    char radioContact[4];  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int transporter;  // 0xFC
    bool q0FF;  // 0xFF
    unsigned int turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    unsigned int deployAnim;  // 0x110
    unsigned int q111;  // 0x111
    char inAirFlag[1];  // 0x114
    unsigned int q118;  // 0x118
    unsigned int q11A;  // 0x11A
    unsigned int q11B;  // 0x11B
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
    char radioQueueCount[4];  // 0x138
    unsigned char q139;  // 0x139
    unsigned int currentWeaponSlot;  // 0x13C
    unsigned int currentRank;  // 0x140
    unsigned int gattlingStage;  // 0x144
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    void* q14E;  // 0x14E
    char initialOwner[4];  // 0x150
    unsigned int veterancy;  // 0x154
    double alignmentPadding154;  // 0x158
    unsigned long long armorMultiplier;  // 0x15C
    double firepowerMultiplier;  // 0x160
    unsigned int q162;  // 0x162
    unsigned long long q164;  // 0x164
    unsigned int q166;  // 0x166
    unsigned int q167;  // 0x167
    char idleActionTimer[12];  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned int q173;  // 0x173
    char radarFlashTimer[12];  // 0x174
    bool q175;  // 0x175
    unsigned char q178;  // 0x178
    bool q17B;  // 0x17B
    AbstractClass* q17C;  // 0x17C
    char targetingTimer[12];  // 0x180
    bool q184;  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned char ironCurtainTimer;  // 0x190
    unsigned int q194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char ironTintTimer;  // 0x19C
    char q1A0[4];  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned int ironTintStage;  // 0x1A8
    unsigned char airstrikeTimer;  // 0x1AC
    unsigned int q1AE;  // 0x1AE
    char q1B0[4];  // 0x1B0
    unsigned int q1B1;  // 0x1B1
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B7;  // 0x1B7
    char airstrikeTintTimer[12];  // 0x1B8
    char q1BC[4];  // 0x1BC
    unsigned int q1C0;  // 0x1C0
    unsigned int airstrikeTintStage;  // 0x1C4
    unsigned int forceShielded;  // 0x1C8
    TechnoClass* isDeactivated;  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    TechnoClass* drainTarget;  // 0x1D0
    AnimClass* drainingMe;  // 0x1D4
    void* isDisguisedFlag;  // 0x1D8
    unsigned int q1DC;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    void* infantryBlinkTimer;  // 0x1E0
    unsigned char q1E4;  // 0x1E4
    ConnectionPointClass* q1E8;  // 0x1E8
    char disguiseBlinkTimer[4];  // 0x1EC
    unsigned int q1ED;  // 0x1ED
    unsigned char q1F0;  // 0x1F0
    bool isTargetedByChrono;  // 0x1F8
    char q1FC[1];  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    unsigned char reloadTimer;  // 0x200
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned int currentBurstCount;  // 0x208
    unsigned int q20C;  // 0x20C
    unsigned int currentBarrelIndex;  // 0x210
    char displayProductionTo[4];  // 0x214
    AbstractClass* Owner;  // 0x218
    HouseClass* focus;  // 0x21C
    unsigned int owner;  // 0x220
    char cloakState[4];  // 0x224
    unsigned long long cloakProgress;  // 0x228
    unsigned int spawnOwner;  // 0x22C
    unsigned char cloakDelayTimer;  // 0x230
    unsigned int slaveManager;  // 0x234
    unsigned int warpFactor;  // 0x23C
    char isChronosphereImmune[1];  // 0x240
    unsigned char q241;  // 0x241
    unsigned int q244;  // 0x244
    char q248[4];  // 0x248
    float q24C;  // 0x24C
    bool q250;  // 0x250
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    unsigned int ammo;  // 0x258
    unsigned int unitValue;  // 0x25C
    unsigned int lastSightRange;  // 0x260
    unsigned int lastSightHeight;  // 0x264
    bool ambientParticles;  // 0x268
    bool isGeneratingGap;  // 0x269
    unsigned int gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned short alignmentPadding27E;  // 0x27E
    unsigned int waveEffect;  // 0x280
    char q284[1];  // 0x284
    unsigned char q285;  // 0x285
    unsigned char q286;  // 0x286
    unsigned char q287;  // 0x287
    char q288[4];  // 0x288
    unsigned int q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    void* airstrike;  // 0x294
    bool chronoLockRemaining;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    FootClass* q2A8;  // 0x2A8
    FootClass* isBerserk;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    FootClass* isBerserk_duration_left;  // 0x2B0
    void* q2B2;  // 0x2B2
    void* q2B3;  // 0x2B3
    AbstractClass* q2B4;  // 0x2B4
    AbstractClass* q2B8;  // 0x2B8
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
    float q2E8;  // 0x2E8
    char q2EC[4];  // 0x2EC
    unsigned int slaveOwner;  // 0x2F0
    unsigned int originalOwnerHouse;  // 0x2F4
    unsigned int bunkerLinkedUnit;  // 0x2F8
    char pitchAngle[4];  // 0x2FC
    char diskLaserTimer[12];  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    ParticleSystemClass* sparkParticles;  // 0x308
    unsigned int q30A;  // 0x30A
    ParticleSystemClass* diskLaserChargeState;  // 0x30C
    ParticleSystemClass* q310;  // 0x310
    ParticleSystemClass* q314;  // 0x314
    unsigned int isBarrelLocked;  // 0x315
    unsigned int isHumanControlled;  // 0x316
    unsigned int isDiscoveredByPlayer;  // 0x317
    ParticleSystemClass* q318;  // 0x318
    unsigned int isSelectedByPlayer;  // 0x319
    unsigned int isUnderCursor;  // 0x31A
    unsigned int isCommandLineTarget;  // 0x31B
    unsigned int q31C;  // 0x31C
    unsigned int isRecruitableByAlly;  // 0x31D
    unsigned int isRecruitableByEnemy;  // 0x31E
    unsigned int isRadarTracked;  // 0x31F
    bool q320;  // 0x320
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
    unsigned int q338;  // 0x338
    unsigned int tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    float tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    int hijackerInfantryType;  // 0x34C
    unsigned char storedTiberium;  // 0x350
    unsigned int currentTargets;  // 0x354
    unsigned int q358;  // 0x358
    unsigned char q35C;  // 0x35C
    int tiberiumCollectionState;  // 0x360
    unsigned char unloadTimer;  // 0x364
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    unsigned int attackedTargets;  // 0x36C
    char barrelFacing[24];  // 0x370
    char q374[4];  // 0x374
    unsigned char q378;  // 0x378
    unsigned int currentBurstIndex;  // 0x37C
    char q380[4];  // 0x380
    char q384[4];  // 0x384
    char primaryFacing[24];  // 0x388
    unsigned int q38A;  // 0x38A
    char targetLaserOpacity[4];  // 0x38C
    void* q390;  // 0x390
    bool isSinking;  // 0x391
    unsigned char q394;  // 0x394
    bool isSpawned;  // 0x398
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
    bool q3CE;  // 0x3CE
    bool q3CF;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool q3D1;  // 0x3D1
    bool q3D2;  // 0x3D2
    bool q3D3;  // 0x3D3
    bool isALoaner;  // 0x3D4
    bool q3D5;  // 0x3D5
    unsigned char q3D6;  // 0x3D6
    unsigned char q3D7;  // 0x3D7
    char q3D8[32];  // 0x3D8
    bool isTurretLocked;  // 0x3DC
    bool isDiscoveredByComputer;  // 0x3E0
    void* q3E4;  // 0x3E4
    unsigned char q3E8;  // 0x3E8
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    char barrelRecoil[32];  // 0x3F8
    unsigned int q400;  // 0x400
    unsigned int q404;  // 0x404
    unsigned char q408;  // 0x408
    HouseClass* q40C;  // 0x40C
    bool isTether;  // 0x418
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
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool q439;  // 0x439
    bool q43A;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    bool vecInt_IsAllocated;  // 0x44D
    unsigned char q458;  // 0x458
    void * vecAbs_Items;  // 0x45C
    int vecAbs_Capacity;  // 0x460
    TechnoClass* q464;  // 0x464
    bool vecAbs_IsAllocated;  // 0x465
    AnimClass* drainAnim;  // 0x468
    unsigned char q470;  // 0x470
    void* q474;  // 0x474
    unsigned int disguiseCreationFrame;  // 0x476
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
    char gattlingSoundController[20];  // 0x4A4
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
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned char q4FA;  // 0x4FA
    unsigned int unknown_4FC;  // 0x4FC
    TechnoClass* q500;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    char planningPathIdx[4];  // 0x520
    char unknownShort524[2];  // 0x524
    char unknownShort526[2];  // 0x526
    char unknownShort528[2];  // 0x528
    char FootClass_field_short_52A[2];  // 0x52A
    unsigned int q52B;  // 0x52B
    char FootClass_field_52C[4];  // 0x52C
    unsigned int q52D;  // 0x52D
    char FootClass_field_52E[4];  // 0x52E
    char unknown530[4];  // 0x530
    char controlGroup[4];  // 0x532
    char unknown534[4];  // 0x534
    char unknown538[4];  // 0x538
    bool FootClass_field_bool_53C;  // 0x53C
    unsigned char m_padding_53D;  // 0x53D
    unsigned int q53F;  // 0x53F
    char unknown540[4];  // 0x540
    unsigned char audioController7;  // 0x544
    bool q546;  // 0x546
    unsigned int q547;  // 0x547
    char q548[4];  // 0x548
    unsigned int q54B;  // 0x54B
    AbstractClass* q54C;  // 0x54C
    unsigned int q54D;  // 0x54D
    unsigned int q54E;  // 0x54E
    unsigned int q54F;  // 0x54F
    unsigned int q550;  // 0x550
    unsigned int q551;  // 0x551
    void* q554;  // 0x554
    char currentMapCoords[4];  // 0x558
    char FootClass_field_55A[4];  // 0x55A
    char lastMapCoords[4];  // 0x55C
    char FootClass_field_55E[4];  // 0x55E
    char lastJumpjetMapCoords[4];  // 0x560
    char FootClass_field_562[4];  // 0x562
    char currentJumpjetMapCoords[4];  // 0x564
    char FootClass_field_566[4];  // 0x566
    char unknownCoords568[12];  // 0x568
    char FootClass_field_56C[4];  // 0x56C
    char FootClass_field_570[4];  // 0x570
    int unused574;  // 0x574
    char currentSpeed_percentage[8];  // 0x578
    char FootClass_field_57C[4];  // 0x57C
    char currentSpeed_multiplier[8];  // 0x580
    float FootClass_field_584;  // 0x584
    unsigned int unknownAbstractArray588;  // 0x588
    unsigned char q58C;  // 0x58C
    unsigned char q590;  // 0x590
    void* q594;  // 0x594
    unsigned int q598;  // 0x598
    unsigned int q59C;  // 0x59C
    unsigned int FootClass_field_5A0;  // 0x5A0
    char movementDestination[4];  // 0x5A4
    char lastDestination[4];  // 0x5A8
    unsigned int FootClass_field_abstract_array_5AC;  // 0x5AC
    unsigned char q5B0;  // 0x5B0
    void* q5B4;  // 0x5B4
    unsigned char q5B8;  // 0x5B8
    unsigned int q5BC;  // 0x5BC
    unsigned int q5C0;  // 0x5C0
    char FootClass_field_int_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    unsigned char FootClass_field_bool_5D1;  // 0x5D1
    unsigned short m_padding_5D2;  // 0x5D2
    char team[4];  // 0x5D4
    char nextTeamMember[4];  // 0x5D8
    char FootClass_field_5DC[4];  // 0x5DC
    void* pathDirections;  // 0x5E0
    unsigned char q5E4;  // 0x5E4
    unsigned int q5E8;  // 0x5E8
    BuildingTypeClass* q5EC;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    unsigned char q5F8;  // 0x5F8
    void* q5FC;  // 0x5FC
    unsigned int q600;  // 0x600
    unsigned int q604;  // 0x604
    char q608[4];  // 0x608
    AbstractClass* q60C;  // 0x60C
    unsigned int q610;  // 0x610
    AbstractClass* q614;  // 0x614
    bool gapSuperCharged;  // 0x616
    AbstractClass* q618;  // 0x618
    AbstractClass* q61C;  // 0x61C
    char q620[4];  // 0x620
    bool q624;  // 0x624
    TemporalClass* q628;  // 0x628
    void* q62C;  // 0x62C
    char q630[4];  // 0x630
    AbstractClass* q634;  // 0x634
    unsigned int q638;  // 0x638
    unsigned int q63C;  // 0x63C
    char pathDelayTimer[12];  // 0x640
    char FootClass_field_644[4];  // 0x644
    char FootClass_field_648[4];  // 0x648
    char FootClass_field_int_64C[4];  // 0x64C
    char FootClass_field_timer_650[12];  // 0x650
    char FootClass_field_654[4];  // 0x654
    char FootClass_field_658[4];  // 0x658
    char sightTimer[12];  // 0x65C
    char FootClass_field_660[4];  // 0x660
    char FootClass_field_664[4];  // 0x664
    char blockagePathTimer[12];  // 0x668
    char FootClass_field_66C[4];  // 0x66C
    char FootClass_field_670[4];  // 0x670
    ILocomotion* locomotor;  // 0x674
    LocomotionClass* unknownPoint3d678;  // 0x678
    bool IsDeploying;  // 0x67C
    char FootClass_field_680[4];  // 0x680
    void* tubeIndex;  // 0x684
    char unknownBool685;  // 0x685
    char waypointIndex;  // 0x686
    char unknownBool687;  // 0x687
    unsigned char unknownBool688;  // 0x688
    char isTeamLeader;  // 0x689
    char shouldScanForTarget;  // 0x68A
    unsigned char FootClass_field_bool_68B;  // 0x68B
    unsigned char FootClass_field_bool_68C;  // 0x68C
    bool FootClass_field_bool_68D;  // 0x68D
    unsigned char FootClass_field_bool_68E;  // 0x68E
    char shouldEnterAbsorber;  // 0x68F
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    char parasiteEatingMe[4];  // 0x694
    char unknown698[4];  // 0x698
    char parasiteImUsing[4];  // 0x69C
    char paralysisTimer[12];  // 0x6A0
    char FootClass_field_6A4[4];  // 0x6A4
    unsigned int FootClass_bools_6A8;  // 0x6A8
    unsigned char FootClass_field_bool_6AC;  // 0x6AC
    char isAttackedByLocomotor;  // 0x6AD
    char isLetGoByLocomotor;  // 0x6AE
    unsigned char FootClass_field_bool_6AF;  // 0x6AF
    bool FootClass_field_bool_6B0;  // 0x6B0
    bool FootClass_field_bool_6B1;  // 0x6B1
    bool FootClass_field_bool_6B2;  // 0x6B2
    bool FootClass_field_bool_6B3;  // 0x6B3
    bool FootClass_field_bool_6B4;  // 0x6B4
    bool FootClass_field_bool_6B5;  // 0x6B5
    void* frozenStill;  // 0x6B6
    bool FootClass_field_bool_6B7;  // 0x6B7
    bool FootClass_field_bool_6B8;  // 0x6B8
    bool m_padding_6B9;  // 0x6B9
    bool FootClass_field_6BA;  // 0x6BA
    bool FootClass_field_6BB;  // 0x6BB
    bool m_unused_6BC;  // 0x6BC
    bool FootClass_field_6BD;  // 0x6BD
    bool FootClass_field_6BE;  // 0x6BE
    bool FootClass_field_6BF;  // 0x6BF
    void* vtable5;  // 0x6C0
    AircraftTypeClass* Type;  // 0x6C4
    bool AircraftClass_field_bool_6C8;  // 0x6C8
    bool HasPassengers;  // 0x6C9
    bool IsKamikaze;  // 0x6CA
    unsigned char q6CB;  // 0x6CB
    unsigned int AircraftClass_field_6CC;  // 0x6CC
    bool AircraftClass_field_bool_6D0;  // 0x6D0
    bool AircraftClass_field_bool_6D1;  // 0x6D1
    bool AircraftClass_field_bool_6D2;  // 0x6D2
    char AircraftClass_field_char_6D3;  // 0x6D3
    bool AircraftClass_field_bool_6D4;  // 0x6D4
    bool AircraftClass_field_bool_6D5;  // 0x6D5
    unsigned short tail_6D6;  // 0x6D6
    unsigned int ReadINI_3;
    unsigned int SelectVocOrSfx;
    unsigned int q029;
    unsigned int q169;
    unsigned int vtable0;
// --- flat members (END) ---
    AircraftClass * CheckActionStatus(char a2);
    AircraftTypeClass * GetCursorOverObject(IUnknown * aP1, IUnknown * a3);
    HRESULT CheckPassengerCount(void * a0, void * aP1, void * a2);
    char * CheckLandingClearance(int a2, int a3, int a4);
    char CheckDockState();
    char ValidateMovement(int _10, int * a2, int a4);
    int CanEnterCell(short * a1, void* aP2, void * aP3);
    int CheckMissionAbort();
    int CheckMissionFail();
    int CheckMissionStatus();
    int CheckMissionStatus2();
    int CheckReloadTimer();
    int CheckStateFlag();
    int CheckStateFlag2();
    int EvaluateTargetingState();
    int FindLandingCell(int * a2, int a3);
    int IsBelowScreen();
    int LandingCheckStub();
    int OverrideMission_SyncLog(int a2, int a3, int a4);
    int PowerDrainProcess(int a1, unsigned int * a2);
    int ProcessDockCheck();
    int RevealSight(int a2, int a3);
    int UpdateDocking(int a2);
    int ValidateLandingCell(unsigned int * a2, int a3, int a4, int a5, int a6);
    AircraftTypeClass * Update();
    void* LoadFromStream(unsigned int * a0, void * aP1);
     double Construct(...);  // C2597 interim stub
};

} // namespace gamemd
