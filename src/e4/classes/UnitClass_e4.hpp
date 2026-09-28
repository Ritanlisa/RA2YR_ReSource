// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

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
    bool q017;  // 0x17
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char referenceCount[4];  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void* needsSave;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned int alignmentPadding;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[4];  // 0x3C
    unsigned int q03D;  // 0x3D
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    bool q049;  // 0x49
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    char customSound_controller[4];  // 0x50
    void* q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05A;  // 0x5A
    unsigned int q05C;  // 0x5C
    char q060[4];  // 0x60
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned int q06A;  // 0x6A
    char health[4];  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned int q075;  // 0x75
    unsigned int spawnStatus;  // 0x78
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
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    void* isAliveFlag;  // 0x90
    unsigned int q091;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned int q09A;  // 0x9A
    char location[4];  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned char q0A3;  // 0xA3
    unsigned int u32_A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    unsigned int q0B1;  // 0xB1
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    unsigned int q0B9;  // 0xB9
    char missionStatus[4];  // 0xBC
    bool q0BF;  // 0xBF
    char missionStartTime[4];  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int missionData;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    char missionTimer[4];  // 0xC8
    unsigned int u32_CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    void* lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int radioLinks;  // 0xE0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    bool q0EB;  // 0xEB
    void* q0EC;  // 0xEC
    bool q0ED;  // 0xED
    char flashing[8];  // 0xF0
    unsigned int q0F2;  // 0xF2
    unsigned int q0F4;  // 0xF4
    bool q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    char radioContact[4];  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    unsigned int u32_FC;  // 0xFC
    bool q0FF;  // 0xFF
    unsigned int radioCommand;  // 0x100
    unsigned int radioTimer;  // 0x104
    unsigned int q108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    unsigned int radioQueue;  // 0x110
    unsigned int q111;  // 0x111
    char passengers[4];  // 0x114
    AbstractClass * q118;  // 0x118
    unsigned int q11A;  // 0x11A
    TechnoClass* transporter;  // 0x11C
    unsigned int q11E;  // 0x11E
    char turretChargeTimer[4];  // 0x120
    void* currentTurretNumber;  // 0x124
    char secondaryTurretIndex[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    unsigned int q12D;  // 0x12D
    unsigned int q12E;  // 0x12E
    unsigned int q12F;  // 0x12F
    AnimClass* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    char radioQueueCount[4];  // 0x138
    char currentRank[4];  // 0x13C
    void* gattlingStage;  // 0x140
    char gattlingValue[4];  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass* initialOwner;  // 0x14C
    void* q14E;  // 0x14E
    char veterancy[4];  // 0x150
    unsigned int alignmentPadding154;  // 0x154
    double armorMultiplier;  // 0x158
    unsigned char q15C;  // 0x15C
    double firepowerMultiplier;  // 0x160
    unsigned int q164;  // 0x164
    char idleActionTimer[12];  // 0x168
    void* q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned int q173;  // 0x173
    char radarFlashTimer[12];  // 0x174
    unsigned char q178;  // 0x178
    bool q17B;  // 0x17B
    AbstractClass* q17C;  // 0x17C
    char targetingTimer[12];  // 0x180
    bool q184;  // 0x184
    char q188[4];  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned int q190;  // 0x190
    unsigned int u32_194;  // 0x194
    unsigned char q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned int ironTintTimer;  // 0x19C
    char q1A0[4];  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    char q1A8[4];  // 0x1A8
    unsigned int q1AC;  // 0x1AC
    unsigned int q1AE;  // 0x1AE
    char animation[4];  // 0x1B0
    unsigned int q1B4;  // 0x1B4
    unsigned int q1B5;  // 0x1B5
    char q1B8[4];  // 0x1B8
    char airstrikeTintTimer[4];  // 0x1BC
    TechnoClass* q1C0;  // 0x1C0
    char q1C4[4];  // 0x1C4
    void* q1C8;  // 0x1C8
    char q1CC[4];  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    AnimClass* q1D0;  // 0x1D0
    AnimClass* q1D4;  // 0x1D4
    bool q1D8;  // 0x1D8
    unsigned int u32_1DC;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    unsigned int u32_1E0;  // 0x1E0
    unsigned int u32_1E4;  // 0x1E4
    unsigned int u32_1E8;  // 0x1E8
    char disguiseBlinkTimer[4];  // 0x1EC
    unsigned int q1ED;  // 0x1ED
    unsigned char q1F0;  // 0x1F0
    unsigned char q1F1;  // 0x1F1
    bool isTargetedByChrono;  // 0x1F8
    char reloadTimer[4];  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    char q200[4];  // 0x200
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int q214;  // 0x214
    void* focus;  // 0x218
    unsigned int u32_21C;  // 0x21C
    unsigned int cloakState;  // 0x220
    SpawnManagerClass* spawnManager;  // 0x224
    unsigned char q228;  // 0x228
    TechnoClass* spawnOwner;  // 0x22C
    unsigned char q230;  // 0x230
    SlaveManagerClass* slaveManager;  // 0x234
    unsigned int u32_238;  // 0x238
    HouseClass* originalOwnerHouse;  // 0x23C
    char cloakDelayTimer[4];  // 0x240
    float pitchAngle;  // 0x244
    char diskLaserTimer[4];  // 0x248
    void* warpFactor;  // 0x24C
    bool isChronosphereImmune;  // 0x250
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
    char q285;  // 0x285
    char q287;  // 0x287
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
    void* q2B2;  // 0x2B2
    void* q2B3;  // 0x2B3
    int q2B4;  // 0x2B4
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
    float q2E8;  // 0x2E8
    char q2EC[4];  // 0x2EC
    void * slaveOwner;  // 0x2F0
    unsigned char q2F4;  // 0x2F4
    void * bunkerLinkedUnit;  // 0x2F8
    char barrelRecoil[4];  // 0x2FC
    AnimClass* q300;  // 0x300
    AnimClass* q304;  // 0x304
    bool q308;  // 0x308
    unsigned int q30A;  // 0x30A
    ParticleSystemClass* q30C;  // 0x30C
    ParticleSystemClass* q310;  // 0x310
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
    unsigned int q340;  // 0x340
    double q344;  // 0x344
    float q348;  // 0x348
    int q34C;  // 0x34C
    unsigned int q350;  // 0x350
    unsigned int currentTargets;  // 0x354
    unsigned char q358;  // 0x358
    unsigned char q35C;  // 0x35C
    char q360[4];  // 0x360
    unsigned char q364;  // 0x364
    bool q365;  // 0x365
    bool q366;  // 0x366
    unsigned char q368;  // 0x368
    unsigned char q36A;  // 0x36A
    unsigned int attackedTargets;  // 0x36C
    char q370[4];  // 0x370
    unsigned char q374;  // 0x374
    unsigned char q378;  // 0x378
    char q37C[4];  // 0x37C
    char q380[4];  // 0x380
    char audioController3[4];  // 0x384
    char primaryFacing[4];  // 0x388
    unsigned int q38A;  // 0x38A
    char q38C[4];  // 0x38C
    unsigned char q38E;  // 0x38E
    void* q390;  // 0x390
    unsigned char q394;  // 0x394
    bool q398;  // 0x398
    char q39C[4];  // 0x39C
    unsigned int audioLoopIndex3;  // 0x3A0
    unsigned int audioVolume3;  // 0x3A4
    char audioController4[4];  // 0x3A8
    unsigned char q3AC;  // 0x3AC
    unsigned char q3B0;  // 0x3B0
    unsigned int q3B7;  // 0x3B7
    void* q3B8;  // 0x3B8
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    bool isAudio4Active;  // 0x3C4
    void* audioHandle4;  // 0x3C8
    unsigned int unknown_3CA;  // 0x3CA
    void* audioController5;  // 0x3CC
    bool q3CD;  // 0x3CD
    bool q3CE;  // 0x3CE
    bool q3CF;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool q3D1;  // 0x3D1
    bool q3D2;  // 0x3D2
    bool q3D3;  // 0x3D3
    bool isALoaner;  // 0x3D4
    bool q3D5;  // 0x3D5
    unsigned char q3D7;  // 0x3D7
    char q3D8[4];  // 0x3D8
    unsigned char q3DC;  // 0x3DC
    bool q3E0;  // 0x3E0
    void* q3E4;  // 0x3E4
    bool isAudio5Active;  // 0x3E8
    void* audioHandle5;  // 0x3EC
    char audioController6[4];  // 0x3F0
    unsigned char q3F4;  // 0x3F4
    void* q3F8;  // 0x3F8
    unsigned char q3FC;  // 0x3FC
    unsigned int q400;  // 0x400
    void* q404;  // 0x404
    unsigned char q408;  // 0x408
    unsigned int queuedVoiceIndex;  // 0x40C
    unsigned int voiceFlags;  // 0x410
    bool isVoiceOverride;  // 0x414
    unsigned int voiceHandle;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    unsigned int voiceVolumeModifier;  // 0x41C
    bool q41D;  // 0x41D
    bool q41E;  // 0x41E
    bool q41F;  // 0x41F
    unsigned int empLockRemaining;  // 0x420
    bool q422;  // 0x422
    unsigned int threatPosed;  // 0x424
    bool q425;  // 0x425
    bool q426;  // 0x426
    bool q427;  // 0x427
    void* shouldLoseTarget;  // 0x428
    RadBeam* firingRadBeam;  // 0x42C
    void* planningToken;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    ObjectTypeClass* disguiseAsType;  // 0x434
    HouseClass* isDisguisedFlag_as_house;  // 0x438
    bool q439;  // 0x439
    bool q43A;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int q43C;  // 0x43C
    char q440[4];  // 0x440
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    unsigned char q44C;  // 0x44C
    bool vecInt_IsAllocated;  // 0x44D
    unsigned char q451;  // 0x451
    unsigned int q458;  // 0x458
    void * vecAbs_Items;  // 0x45C
    int vecAbs_Capacity;  // 0x460
    AnimClass* q464;  // 0x464
    bool vecAbs_IsAllocated;  // 0x465
    AnimClass* q468;  // 0x468
    unsigned char q469;  // 0x469
    unsigned int q470;  // 0x470
    unsigned char q474;  // 0x474
    unsigned char q478;  // 0x478
    char q47C[4];  // 0x47C
    unsigned int q480;  // 0x480
    unsigned int q484;  // 0x484
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    bool q490;  // 0x490
    ObjectClass* q494;  // 0x494
    void* q498;  // 0x498
    unsigned char q49A;  // 0x49A
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int q49D;  // 0x49D
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[4];  // 0x4A4
    unsigned char q4A8;  // 0x4A8
    unsigned char q4AC;  // 0x4AC
    void* q4B0;  // 0x4B0
    void* q4B4;  // 0x4B4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[4];  // 0x4C0
    unsigned char q4C4;  // 0x4C4
    unsigned char q4C8;  // 0x4C8
    void* q4CC;  // 0x4CC
    void* q4D0;  // 0x4D0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[4];  // 0x4DC
    unsigned char q4E0;  // 0x4E0
    unsigned int q4F0;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned int unknown_4FC;  // 0x4FC
    void * q500;  // 0x500
    unsigned int q504;  // 0x504
    unsigned int q508;  // 0x508
    unsigned int q50C;  // 0x50C
    RadBeam* q510;  // 0x510
    unsigned int q514;  // 0x514
    ObjectTypeClass * ptr_518;  // 0x518
    unsigned int u32_51C;  // 0x51C
    char FootClass_field_520[4];  // 0x520
    char FootClass_field_524[4];  // 0x524
    char FootClass_field_526[4];  // 0x526
    char FootClass_field_528[4];  // 0x528
    char FootClass_field_52A[4];  // 0x52A
    unsigned int q52B;  // 0x52B
    char FootClass_field_52C[4];  // 0x52C
    unsigned int q52D;  // 0x52D
    char FootClass_field_52E[4];  // 0x52E
    char FootClass_field_530[4];  // 0x530
    char FootClass_field_534[4];  // 0x534
    char FootClass_field_538[4];  // 0x538
    bool FootClass_field_53C;  // 0x53C
    unsigned int m_padding_53D;  // 0x53D
    unsigned int q53F;  // 0x53F
    char FootClass_field_540[4];  // 0x540
    unsigned int audioController7;  // 0x544
    bool q546;  // 0x546
    unsigned int q547;  // 0x547
    SpawnManagerClass* q548;  // 0x548
    unsigned int q54B;  // 0x54B
    AbstractClass* q54C;  // 0x54C
    unsigned int q54D;  // 0x54D
    unsigned int q54E;  // 0x54E
    unsigned int q54F;  // 0x54F
    unsigned int q550;  // 0x550
    unsigned int q551;  // 0x551
    void* q554;  // 0x554
    unsigned char q555;  // 0x555
    char FootClass_field_558[4];  // 0x558
    char FootClass_field_55A[4];  // 0x55A
    char FootClass_field_55C[4];  // 0x55C
    char FootClass_field_55E[4];  // 0x55E
    char FootClass_field_560[4];  // 0x560
    char FootClass_field_562[4];  // 0x562
    char FootClass_field_564[4];  // 0x564
    char FootClass_field_566[4];  // 0x566
    char FootClass_field_568[4];  // 0x568
    char FootClass_field_56C[4];  // 0x56C
    char FootClass_field_570[4];  // 0x570
    int unused574;  // 0x574
    char FootClass_field_578[4];  // 0x578
    char FootClass_field_57C[4];  // 0x57C
    char FootClass_field_580[4];  // 0x580
    float FootClass_field_584;  // 0x584
    unsigned int FootClass_DVC_588;  // 0x588
    unsigned int u32_58C;  // 0x58C
    unsigned int u32_590;  // 0x590
    unsigned char q594;  // 0x594
    unsigned char u8_595;  // 0x595
    unsigned int q598;  // 0x598
    unsigned int u32_59C;  // 0x59C
    char FootClass_field_5A0[4];  // 0x5A0
    char FootClass_field_5A4[4];  // 0x5A4
    char FootClass_field_5A8[4];  // 0x5A8
    unsigned int FootClass_DVC_5AC;  // 0x5AC
    unsigned int u32_5B0;  // 0x5B0
    unsigned int u32_5B4;  // 0x5B4
    unsigned char q5B8;  // 0x5B8
    unsigned char u8_5B9;  // 0x5B9
    unsigned int u32_5BC;  // 0x5BC
    unsigned int u32_5C0;  // 0x5C0
    char FootClass_field_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    unsigned int q5D1;  // 0x5D1
    unsigned int m_padding_5D2;  // 0x5D2
    char FootClass_field_5D4[4];  // 0x5D4
    char FootClass_field_5D8[4];  // 0x5D8
    char FootClass_field_5DC[4];  // 0x5DC
    void* pathDirections;  // 0x5E0
    void* q5E4;  // 0x5E4
    unsigned char q5E8;  // 0x5E8
    BuildingTypeClass* q5EC;  // 0x5EC
    unsigned char q5F0;  // 0x5F0
    void* q5F4;  // 0x5F4
    unsigned char q5F8;  // 0x5F8
    void* q5FC;  // 0x5FC
    char q600[4];  // 0x600
    char q604[4];  // 0x604
    ParticleSystemClass* q608;  // 0x608
    AbstractClass* q60C;  // 0x60C
    unsigned int q610;  // 0x610
    unsigned char q614;  // 0x614
    AbstractClass* q618;  // 0x618
    AbstractClass* q61C;  // 0x61C
    ParticleSystemClass* q620;  // 0x620
    ParticleSystemClass* q624;  // 0x624
    ParticleSystemClass* q628;  // 0x628
    void* q62C;  // 0x62C
    char q630[4];  // 0x630
    AbstractClass* q634;  // 0x634
    unsigned char q638;  // 0x638
    unsigned int q63C;  // 0x63C
    char FootClass_field_640[4];  // 0x640
    char FootClass_field_644[4];  // 0x644
    char FootClass_field_648[4];  // 0x648
    char FootClass_field_64C[4];  // 0x64C
    char FootClass_field_650[4];  // 0x650
    char FootClass_field_654[4];  // 0x654
    char FootClass_field_658[4];  // 0x658
    char FootClass_field_65C[4];  // 0x65C
    char FootClass_field_660[4];  // 0x660
    char FootClass_field_664[4];  // 0x664
    char FootClass_field_668[4];  // 0x668
    char FootClass_field_66C[4];  // 0x66C
    char FootClass_field_670[4];  // 0x670
    ILocomotion* Locomotor;  // 0x674
    LocomotionClass* Locomotor_ptr;  // 0x678
    bool IsDeploying;  // 0x67C
    char FootClass_field_680[4];  // 0x680
    char FootClass_field_684[4];  // 0x684
    char unknownBool685;  // 0x685
    char waypointIndex;  // 0x686
    char unknownBool687;  // 0x687
    unsigned int FootClass_bools_688;  // 0x688
    char isTeamLeader;  // 0x689
    char shouldScanForTarget;  // 0x68A
    unsigned int q68B;  // 0x68B
    unsigned int q68C;  // 0x68C
    bool unknownBool68D;  // 0x68D
    unsigned int q68E;  // 0x68E
    char shouldEnterAbsorber;  // 0x68F
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    void* FootClass_field_694;  // 0x694
    char FootClass_field_698[4];  // 0x698
    char FootClass_field_69C[4];  // 0x69C
    char FootClass_field_6A0[4];  // 0x6A0
    char FootClass_field_6A4[4];  // 0x6A4
    unsigned int FootClass_bools_6A8;  // 0x6A8
    unsigned int q6AC;  // 0x6AC
    char isAttackedByLocomotor;  // 0x6AD
    char isLetGoByLocomotor;  // 0x6AE
    unsigned int q6AF;  // 0x6AF
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
    unsigned int q6C9;  // 0x6C9
    char FlagHouseIndex[4];  // 0x6CC
    bool HasFollowerCar;  // 0x6D0
    bool Unloading;  // 0x6D1
    bool UnitClass_field_bool_6D2;  // 0x6D2
    bool TerrainPalette;  // 0x6D3
    char UnitClass_field_int_6D4[4];  // 0x6D4
    char DeathFrameCounter[4];  // 0x6D8
    EBolt* ElectricBolt;  // 0x6DC
    unsigned int q6DD;  // 0x6DD
    bool Deployed;  // 0x6E0
    bool Deploying;  // 0x6E1
    bool Undeploying;  // 0x6E2
    unsigned char q6E3;  // 0x6E3
    char NonPassengerCount[4];  // 0x6E4
    unsigned char ToolTipText;  // 0x6E8
    unsigned int q6EC;  // 0x6EC
    AbstractClass* q6F0;  // 0x6F0
    AbstractClass* q6F4;  // 0x6F4
    unsigned int q6F8;  // 0x6F8
    AbstractClass* q6FC;  // 0x6FC
    char q700[4];  // 0x700
    char q704[4];  // 0x704
    char q708[4];  // 0x708
    unsigned int q70C;  // 0x70C
    unsigned int u32_710;  // 0x710
    AbstractClass* q714;  // 0x714
    AbstractClass* q718;  // 0x718
    void* q71C;  // 0x71C
    void * q720;  // 0x720
    char q724[4];  // 0x724
    bool q728;  // 0x728
    bool q730;  // 0x730
    bool q734;  // 0x734
    unsigned char q738;  // 0x738
    char q740[4];  // 0x740
    float q744;  // 0x744
    char q748[4];  // 0x748
    void* q75C;  // 0x75C
    void * q760;  // 0x760
    char q764[4];  // 0x764
    AnimClass* q768;  // 0x768
    void* q76C;  // 0x76C
    unsigned char q770;  // 0x770
    void* q774;  // 0x774
    unsigned int q778;  // 0x778
    void* q77C;  // 0x77C
    ParticleSystemClass* q780;  // 0x780
    ParticleSystemClass* q784;  // 0x784
    bool q788;  // 0x788
    unsigned char q78C;  // 0x78C
    bool q790;  // 0x790
    bool q794;  // 0x794
    bool q798;  // 0x798
    void* q79C;  // 0x79C
    unsigned int q7A0;  // 0x7A0
    unsigned int q7A4;  // 0x7A4
    void* q7A8;  // 0x7A8
    unsigned char q7AC;  // 0x7AC
    void* q7B0;  // 0x7B0
    void* q7B4;  // 0x7B4
    unsigned char q7B8;  // 0x7B8
    unsigned int q7BC;  // 0x7BC
    unsigned char q7C0;  // 0x7C0
    unsigned int q7C4;  // 0x7C4
    unsigned char q7C8;  // 0x7C8
    bool q800;  // 0x800
    TechnoClass* q804;  // 0x804
    HouseClass* q808;  // 0x808
    unsigned char q80C;  // 0x80C
    bool q814;  // 0x814
    HouseClass* q818;  // 0x818
    unsigned char q81C;  // 0x81C
    bool q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    char q834[4];  // 0x834
    unsigned char q838;  // 0x838
    unsigned char q83C;  // 0x83C
    unsigned int q840;  // 0x840
    int q844;  // 0x844
    unsigned int q848;  // 0x848
    unsigned char q84C;  // 0x84C
    double q850;  // 0x850
    unsigned char q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned char q860;  // 0x860
    char q864[4];  // 0x864
    unsigned char q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned int q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    char q880[4];  // 0x880
    unsigned char q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q88C;  // 0x88C
    unsigned char q890;  // 0x890
    unsigned int q898;  // 0x898
    unsigned char q89C;  // 0x89C
    unsigned char q8A0;  // 0x8A0
    unsigned char q8A4;  // 0x8A4
    unsigned char q8A8;  // 0x8A8
    void* q8AC;  // 0x8AC
    unsigned char q8B0;  // 0x8B0
    unsigned char q8B4;  // 0x8B4
    void* q8BC;  // 0x8BC
    unsigned char q8C0;  // 0x8C0
    void* q8C8;  // 0x8C8
    unsigned char q8CC;  // 0x8CC
    void* q8E4;  // 0x8E4
// --- flat members (END) ---
    void ProcessIdleOrders();
};

} // namespace gamemd
