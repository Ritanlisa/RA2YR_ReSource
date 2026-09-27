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
    unsigned int q740;  // 0x740
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
    unsigned char q8E8;  // 0x8E8
    char q900[4];  // 0x900
    char q904[4];  // 0x904
    char q908[4];  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned char q910;  // 0x910
    char q914[4];  // 0x914
    unsigned char q918;  // 0x918
    void* q91C;  // 0x91C
    bool q920;  // 0x920
    char q924[4];  // 0x924
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    void* q938;  // 0x938
    unsigned char q93C;  // 0x93C
    unsigned char q940;  // 0x940
    unsigned char q944;  // 0x944
    void* q954;  // 0x954
    unsigned char q958;  // 0x958
    unsigned char q960;  // 0x960
    bool q964;  // 0x964
    unsigned int q968;  // 0x968
    unsigned int q970;  // 0x970
    bool q974;  // 0x974
    bool q978;  // 0x978
    bool q980;  // 0x980
    char q984[4];  // 0x984
    unsigned char q988;  // 0x988
    void* q98C;  // 0x98C
    bool q990;  // 0x990
    bool q994;  // 0x994
    bool q998;  // 0x998
    void* q9A8;  // 0x9A8
    unsigned char q9AC;  // 0x9AC
    void* q9C4;  // 0x9C4
    unsigned int q9C5;  // 0x9C5
    unsigned int q9C6;  // 0x9C6
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned int q9C9;  // 0x9C9
    unsigned int q9CA;  // 0x9CA
    unsigned int q9CB;  // 0x9CB
    unsigned char q9CC;  // 0x9CC
    unsigned char q9D0;  // 0x9D0
    void* q9E0;  // 0x9E0
    unsigned char q9E4;  // 0x9E4
    void* q9FC;  // 0x9FC
    unsigned char qA00;  // 0xA00
    char qA10[4];  // 0xA10
    unsigned int qA13;  // 0xA13
    unsigned char qA17;  // 0xA17
    void* qA18;  // 0xA18
    unsigned char qA1C;  // 0xA1C
    void* qA34;  // 0xA34
    unsigned char qA38;  // 0xA38
    void* qA50;  // 0xA50
    unsigned char qA54;  // 0xA54
    void* qA6C;  // 0xA6C
    unsigned char qA70;  // 0xA70
    void* qA88;  // 0xA88
    unsigned char qA8C;  // 0xA8C
    void* qAA4;  // 0xAA4
    unsigned char qAA8;  // 0xAA8
    void* qAC0;  // 0xAC0
    unsigned char qAC4;  // 0xAC4
    void* qADC;  // 0xADC
    unsigned char qAE0;  // 0xAE0
    void* qB1C;  // 0xB1C
    void* qB20;  // 0xB20
    unsigned char qB24;  // 0xB24
    void* qB3C;  // 0xB3C
    unsigned char qB40;  // 0xB40
    void* qB5C;  // 0xB5C
    unsigned char qB60;  // 0xB60
    void* qB74;  // 0xB74
    unsigned char qB78;  // 0xB78
    Coord* qBB4;  // 0xBB4
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    void* qBC0;  // 0xBC0
    unsigned char qBC4;  // 0xBC4
    unsigned char qBC8;  // 0xBC8
    void* qBF0;  // 0xBF0
    void* qBF4;  // 0xBF4
    unsigned char qBF8;  // 0xBF8
    void* qBFC;  // 0xBFC
    unsigned char qC00;  // 0xC00
    unsigned char qC04;  // 0xC04
    void* qC20;  // 0xC20
    unsigned char qC24;  // 0xC24
    void* qC58;  // 0xC58
    unsigned char qC5C;  // 0xC5C
    void* qC90;  // 0xC90
    unsigned char qC94;  // 0xC94
    unsigned char qC98;  // 0xC98
    void* qCC8;  // 0xCC8
    unsigned char qCCC;  // 0xCCC
    unsigned char qCD0;  // 0xCD0
    void* qCD4;  // 0xCD4
    unsigned char qCD8;  // 0xCD8
    void* qCE8;  // 0xCE8
    unsigned char qCEC;  // 0xCEC
    void* qD24;  // 0xD24
    void* qD28;  // 0xD28
    unsigned char qD2C;  // 0xD2C
    unsigned char qD2D;  // 0xD2D
    void* qD38;  // 0xD38
    unsigned char qD3C;  // 0xD3C
    void* qD58;  // 0xD58
    unsigned char qD5C;  // 0xD5C
    unsigned int qD64;  // 0xD64
    void* qD68;  // 0xD68
    unsigned char qD6C;  // 0xD6C
    Tactical* qD70;  // 0xD70
    AbstractClass* qD74;  // 0xD74
    void* qD78;  // 0xD78
    void* qD7C;  // 0xD7C
    void* qD80;  // 0xD80
    unsigned char qD84;  // 0xD84
    unsigned char qD98;  // 0xD98
    void* qD9C;  // 0xD9C
    unsigned char qDA0;  // 0xDA0
    void* qDB0;  // 0xDB0
    unsigned char qDB4;  // 0xDB4
    void* qDB8;  // 0xDB8
    unsigned char qDBC;  // 0xDBC
    void* qDD4;  // 0xDD4
    unsigned char qDD8;  // 0xDD8
    void* qDF0;  // 0xDF0
    void* qDF4;  // 0xDF4
    DynamicVector* qDF8;  // 0xDF8
    void* qDFC;  // 0xDFC
    unsigned int qE00;  // 0xE00
    unsigned int qE04;  // 0xE04
    unsigned char qE08;  // 0xE08
    void* qE0C;  // 0xE0C
    void* qE10;  // 0xE10
    unsigned char qE14;  // 0xE14
    unsigned char qE17;  // 0xE17
    void* qE18;  // 0xE18
    unsigned char qE1C;  // 0xE1C
    void* qE2C;  // 0xE2C
    unsigned char qE30;  // 0xE30
    void* qE44;  // 0xE44
    ObjectTypeClass* qE48;  // 0xE48
    void* qE4C;  // 0xE4C
    unsigned char qE50;  // 0xE50
    AbstractClass* qE5C;  // 0xE5C
    unsigned char qE60;  // 0xE60
    void* qE68;  // 0xE68
    unsigned char qE6C;  // 0xE6C
    void* qE84;  // 0xE84
    unsigned char qE88;  // 0xE88
    unsigned int qEA0;  // 0xEA0
    unsigned char qEA4;  // 0xEA4
    void* qEB4;  // 0xEB4
    void* qEB8;  // 0xEB8
    ObjectTypeClass* qEBC;  // 0xEBC
    unsigned char qEC0;  // 0xEC0
    void* qEC4;  // 0xEC4
    unsigned char qEC8;  // 0xEC8
    ObjectTypeClass* qEE0;  // 0xEE0
    AbstractTypeClass* qEE4;  // 0xEE4
    void* qEE8;  // 0xEE8
    unsigned char qEEC;  // 0xEEC
    unsigned int qF04;  // 0xF04
    unsigned int qF08;  // 0xF08
    unsigned int qF0C;  // 0xF0C
    unsigned char qF10;  // 0xF10
    void* qF20;  // 0xF20
    unsigned char qF24;  // 0xF24
    void* qF48;  // 0xF48
    unsigned char qF4C;  // 0xF4C
    void* qF6C;  // 0xF6C
    unsigned char qF70;  // 0xF70
    void* qF88;  // 0xF88
    WeaponTypeClass* qF8C;  // 0xF8C
    unsigned char qF90;  // 0xF90
    void* qFA8;  // 0xFA8
    unsigned char qFAC;  // 0xFAC
    ObjectTypeClass* qFC0;  // 0xFC0
    ObjectTypeClass* qFC4;  // 0xFC4
    unsigned char qFC8;  // 0xFC8
    void* qFD4;  // 0xFD4
    unsigned char qFD8;  // 0xFD8
    bool q1000;  // 0x1000
    unsigned int q1004;  // 0x1004
    char q1008[4];  // 0x1008
    void* q1014;  // 0x1014
    unsigned char q1018;  // 0x1018
    unsigned char q1020;  // 0x1020
    unsigned int q1024;  // 0x1024
    void* q1028;  // 0x1028
    unsigned int q1030;  // 0x1030
    unsigned int q1040;  // 0x1040
    bool q1044;  // 0x1044
    unsigned int q1048;  // 0x1048
    void* q104C;  // 0x104C
    bool q1050;  // 0x1050
    bool q1054;  // 0x1054
    bool q1058;  // 0x1058
    void* q105C;  // 0x105C
    unsigned int q1060;  // 0x1060
    unsigned int q1064;  // 0x1064
    RadBeam* q1068;  // 0x1068
    void* q106C;  // 0x106C
    unsigned char q1070;  // 0x1070
    bool q1074;  // 0x1074
    unsigned int q1078;  // 0x1078
    void* q107C;  // 0x107C
    HouseClass* q1080;  // 0x1080
    unsigned int q1084;  // 0x1084
    char q1088[4];  // 0x1088
    void* q108C;  // 0x108C
    unsigned char q1090;  // 0x1090
    void* q1094;  // 0x1094
    unsigned char q1098;  // 0x1098
    void* q109C;  // 0x109C
    unsigned char q10A0;  // 0x10A0
    void* q10A4;  // 0x10A4
    unsigned char q10A8;  // 0x10A8
    void* q10AC;  // 0x10AC
    unsigned char q10B0;  // 0x10B0
    void* q10B4;  // 0x10B4
    unsigned char q10B8;  // 0x10B8
    void* q10BC;  // 0x10BC
    void* q10C0;  // 0x10C0
    unsigned char q10C4;  // 0x10C4
    void* q10CC;  // 0x10CC
    unsigned char q10D0;  // 0x10D0
    void* q10E0;  // 0x10E0
    unsigned char q10E4;  // 0x10E4
    void* q10EC;  // 0x10EC
    void* q10F0;  // 0x10F0
    unsigned char q10F4;  // 0x10F4
    void* q10FC;  // 0x10FC
    unsigned char q1100;  // 0x1100
    unsigned int q1104;  // 0x1104
    unsigned int q1108;  // 0x1108
    char q1110[4];  // 0x1110
    unsigned char q1114;  // 0x1114
    void* q111C;  // 0x111C
    int q1120;  // 0x1120
    AnimClass* q1124;  // 0x1124
    AnimClass* q1128;  // 0x1128
    void* q112C;  // 0x112C
    void* q1130;  // 0x1130
    void* q1134;  // 0x1134
    bool q1138;  // 0x1138
    unsigned char q113C;  // 0x113C
    unsigned char q1140;  // 0x1140
    unsigned char q1144;  // 0x1144
    char q1148[4];  // 0x1148
    void* q1154;  // 0x1154
    void* q1158;  // 0x1158
    unsigned char q115C;  // 0x115C
    char turretRotateSoundController[4];  // 0x1160
    unsigned char q1164;  // 0x1164
    bool q1168;  // 0x1168
    char q1170[4];  // 0x1170
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    unsigned int q1180;  // 0x1180
    unsigned int q1184;  // 0x1184
    char q1188[4];  // 0x1188
    void* q1194;  // 0x1194
    unsigned char q1198;  // 0x1198
    void* q11B0;  // 0x11B0
    unsigned char q11B4;  // 0x11B4
    void* q11CC;  // 0x11CC
    unsigned int q11CF;  // 0x11CF
    unsigned char q11D0;  // 0x11D0
    unsigned char q11D3;  // 0x11D3
    void* q11E0;  // 0x11E0
    void* q11E4;  // 0x11E4
    void* q11E8;  // 0x11E8
    unsigned char q11EC;  // 0x11EC
    void* q11F4;  // 0x11F4
    unsigned char q11F8;  // 0x11F8
    void* q1200;  // 0x1200
    void* q1204;  // 0x1204
    bool q1208;  // 0x1208
    unsigned char q120C;  // 0x120C
    unsigned char q1210;  // 0x1210
    unsigned char q1214;  // 0x1214
    unsigned char q1218;  // 0x1218
    unsigned char q121C;  // 0x121C
    unsigned char q1220;  // 0x1220
    unsigned char q1224;  // 0x1224
    void* q1228;  // 0x1228
    unsigned char q122C;  // 0x122C
    unsigned char q1230;  // 0x1230
    unsigned char q1234;  // 0x1234
    unsigned char q1238;  // 0x1238
    void* q123C;  // 0x123C
    unsigned int q1240;  // 0x1240
    char q1244[4];  // 0x1244
    unsigned char q1248;  // 0x1248
    void* q1258;  // 0x1258
    unsigned char q125C;  // 0x125C
    unsigned int q1264;  // 0x1264
    unsigned int q1268;  // 0x1268
    void* q1274;  // 0x1274
    unsigned char q1278;  // 0x1278
    void * q1280;  // 0x1280
    unsigned int q1284;  // 0x1284
    unsigned int q1288;  // 0x1288
    void* q1290;  // 0x1290
    unsigned char q1294;  // 0x1294
    char q1298[4];  // 0x1298
    void* q12AC;  // 0x12AC
    unsigned char q12B0;  // 0x12B0
    void* q12C8;  // 0x12C8
    unsigned char q12CC;  // 0x12CC
    void* q12E4;  // 0x12E4
    unsigned char q12E8;  // 0x12E8
    unsigned int q1300;  // 0x1300
    ObjectTypeClass * q1304;  // 0x1304
    unsigned int q1308;  // 0x1308
    unsigned char q130C;  // 0x130C
    unsigned char q1310;  // 0x1310
    unsigned char q1314;  // 0x1314
    char q1318[4];  // 0x1318
    char q1320[4];  // 0x1320
    char q1324[4];  // 0x1324
    char q1328[4];  // 0x1328
    unsigned char q132C;  // 0x132C
    unsigned int q1330;  // 0x1330
    void* q1334;  // 0x1334
    unsigned char q1338;  // 0x1338
    void* q133C;  // 0x133C
    bool q1340;  // 0x1340
    char q1344[4];  // 0x1344
    unsigned int q1348;  // 0x1348
    unsigned char q134C;  // 0x134C
    bool q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    unsigned int q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    unsigned int q1360;  // 0x1360
    void* q1364;  // 0x1364
    char q1368[4];  // 0x1368
    char q1370[4];  // 0x1370
    char q1374[4];  // 0x1374
    char q1378[4];  // 0x1378
    unsigned char q137C;  // 0x137C
    char q1380[4];  // 0x1380
    char q1384[4];  // 0x1384
    char q1388[4];  // 0x1388
    void* q1390;  // 0x1390
    HouseClass* q1394;  // 0x1394
    char q1398[4];  // 0x1398
    void* q13AC;  // 0x13AC
    unsigned char q13B0;  // 0x13B0
    void* q13C8;  // 0x13C8
    unsigned char q13CC;  // 0x13CC
    void* q13F0;  // 0x13F0
    unsigned char q13F4;  // 0x13F4
    char q1400[4];  // 0x1400
    char q1404[4];  // 0x1404
    char q1408[4];  // 0x1408
    bool q1410;  // 0x1410
    void* q1414;  // 0x1414
    unsigned char q1418;  // 0x1418
    void* q141C;  // 0x141C
    unsigned char q1420;  // 0x1420
    unsigned int q1424;  // 0x1424
    unsigned char q1428;  // 0x1428
    unsigned char q142C;  // 0x142C
    unsigned int q1430;  // 0x1430
    unsigned char q1434;  // 0x1434
    char q1440[4];  // 0x1440
    char Archive[4];  // 0x1444
    char q1448[4];  // 0x1448
    unsigned char q144C;  // 0x144C
    unsigned char q1454;  // 0x1454
    unsigned char q1458;  // 0x1458
    unsigned char q145C;  // 0x145C
    unsigned int q1460;  // 0x1460
    unsigned char q1464;  // 0x1464
    unsigned int q1468;  // 0x1468
    unsigned char q146C;  // 0x146C
    unsigned char q1470;  // 0x1470
    char q1480[4];  // 0x1480
    char q1484[4];  // 0x1484
    bool q1488;  // 0x1488
    unsigned char q148C;  // 0x148C
    unsigned int q1490;  // 0x1490
    void* q14BC;  // 0x14BC
    void* q14C0;  // 0x14C0
    void* q14C4;  // 0x14C4
    void* q14C8;  // 0x14C8
    unsigned char q14CC;  // 0x14CC
    void* q14E0;  // 0x14E0
    unsigned char q14E4;  // 0x14E4
    unsigned int q14E5;  // 0x14E5
    unsigned int q14E6;  // 0x14E6
    unsigned int q14E7;  // 0x14E7
    unsigned char q14E8;  // 0x14E8
    unsigned int q14E9;  // 0x14E9
    unsigned int q14EA;  // 0x14EA
    unsigned int q14EB;  // 0x14EB
    void* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    void* q14F4;  // 0x14F4
    unsigned int q14F7;  // 0x14F7
    unsigned char q14F8;  // 0x14F8
    unsigned char q14FB;  // 0x14FB
    void* q14FC;  // 0x14FC
    char q1500[4];  // 0x1500
    unsigned int q1504;  // 0x1504
    void* q1508;  // 0x1508
    void* q150C;  // 0x150C
    unsigned char q1510;  // 0x1510
    void* q151C;  // 0x151C
    void* q1520;  // 0x1520
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned int q1526;  // 0x1526
    unsigned char q1528;  // 0x1528
    unsigned char q152A;  // 0x152A
    void* q152C;  // 0x152C
    unsigned char q1530;  // 0x1530
    unsigned int q1536;  // 0x1536
    unsigned char q153A;  // 0x153A
    int q153C;  // 0x153C
    unsigned int q153D;  // 0x153D
    unsigned int q153E;  // 0x153E
    unsigned int q153F;  // 0x153F
    char q1540[4];  // 0x1540
    unsigned char q1543;  // 0x1543
    ParticleSystemClass* q1544;  // 0x1544
    unsigned int q1546;  // 0x1546
    AbstractClass* q1548;  // 0x1548
    unsigned char q154A;  // 0x154A
    bool q154D;  // 0x154D
    bool q1550;  // 0x1550
    void* q1554;  // 0x1554
    unsigned int q1555;  // 0x1555
    ParticleSystemClass* q1558;  // 0x1558
    unsigned char q1559;  // 0x1559
    unsigned char q155C;  // 0x155C
    AbstractClass* q1560;  // 0x1560
    AbstractClass* q1564;  // 0x1564
    ParticleSystemClass* q1568;  // 0x1568
    unsigned char q156C;  // 0x156C
    unsigned char q1570;  // 0x1570
    bool q1574;  // 0x1574
    unsigned char q1578;  // 0x1578
    void* q1580;  // 0x1580
    unsigned int q1582;  // 0x1582
    char q1584[4];  // 0x1584
    unsigned int q1585;  // 0x1585
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned char q158F;  // 0x158F
    ParticleSystemClass* q1590;  // 0x1590
    unsigned int q1593;  // 0x1593
    unsigned int q1594;  // 0x1594
    unsigned int q1595;  // 0x1595
    unsigned int q1596;  // 0x1596
    unsigned char q159A;  // 0x159A
    unsigned int q15C1;  // 0x15C1
    unsigned char q15C5;  // 0x15C5
    unsigned int q15E2;  // 0x15E2
    unsigned char q15E6;  // 0x15E6
    char q1600[4];  // 0x1600
    char q1604[4];  // 0x1604
    char q1608[4];  // 0x1608
    float q1618;  // 0x1618
    char q1620[4];  // 0x1620
    char q1624[4];  // 0x1624
    char q1628[4];  // 0x1628
    char q1634[4];  // 0x1634
    unsigned char q1638;  // 0x1638
    void* q163C;  // 0x163C
    char q1640[4];  // 0x1640
    char q1644[4];  // 0x1644
    char q1648[4];  // 0x1648
    unsigned char q164C;  // 0x164C
    unsigned int q1650;  // 0x1650
    bool q1654;  // 0x1654
    void* q1658;  // 0x1658
    unsigned char q165C;  // 0x165C
    bool q1660;  // 0x1660
    char q1664[4];  // 0x1664
    char q1668[4];  // 0x1668
    void* q166C;  // 0x166C
    char q1670;  // 0x1670
    char q1674;  // 0x1674
    unsigned int q1678;  // 0x1678
    void* q167C;  // 0x167C
    char q1680;  // 0x1680
    char q1684[4];  // 0x1684
    char q1688[4];  // 0x1688
    unsigned char q168C;  // 0x168C
    unsigned char q1690;  // 0x1690
    void* q16A4;  // 0x16A4
    void* q16A8;  // 0x16A8
    void* q16AC;  // 0x16AC
    unsigned char q16B0;  // 0x16B0
    unsigned char q16B2;  // 0x16B2
    void* q16B4;  // 0x16B4
    unsigned int q16B7;  // 0x16B7
    unsigned char q16BB;  // 0x16BB
    void* q16C0;  // 0x16C0
    unsigned char q16C1;  // 0x16C1
    unsigned char q16C4;  // 0x16C4
    unsigned char q16C8;  // 0x16C8
    void* q16CC;  // 0x16CC
    unsigned char q16D0;  // 0x16D0
    void* q16D4;  // 0x16D4
    void* q16D8;  // 0x16D8
    unsigned char q16DC;  // 0x16DC
    void* q16E4;  // 0x16E4
    unsigned char q16E8;  // 0x16E8
    void* q16EC;  // 0x16EC
    unsigned char q16F0;  // 0x16F0
    void* q16F4;  // 0x16F4
    unsigned int q16F8;  // 0x16F8
    unsigned char q16FC;  // 0x16FC
    char q1700[4];  // 0x1700
    unsigned int q1704;  // 0x1704
    unsigned int q1708;  // 0x1708
    void* q170C;  // 0x170C
    char q1710;  // 0x1710
    bool q1714;  // 0x1714
    bool q1718;  // 0x1718
    AbstractTypeClass* q171C;  // 0x171C
    bool q1720;  // 0x1720
    bool q1724;  // 0x1724
    char q1728[4];  // 0x1728
    AbstractTypeClass* q172C;  // 0x172C
    AbstractTypeClass* q1730;  // 0x1730
    unsigned char q1734;  // 0x1734
    unsigned char q1738;  // 0x1738
    void* q173C;  // 0x173C
    char q1740[4];  // 0x1740
    bool q1744;  // 0x1744
    char q1748[4];  // 0x1748
    void* q174C;  // 0x174C
    unsigned char q1750;  // 0x1750
    void* q1754;  // 0x1754
    unsigned char q1758;  // 0x1758
    unsigned char q175C;  // 0x175C
    unsigned int q1760;  // 0x1760
    unsigned int q1761;  // 0x1761
    char q1764[4];  // 0x1764
    unsigned char q1765;  // 0x1765
    unsigned int q1768;  // 0x1768
    unsigned int q176A;  // 0x176A
    unsigned char q176E;  // 0x176E
    unsigned char q1770;  // 0x1770
    void* q1774;  // 0x1774
    AbstractTypeClass* q1778;  // 0x1778
    void* q177C;  // 0x177C
    AbstractClass* q1780;  // 0x1780
    unsigned int q1784;  // 0x1784
    AbstractClass* q1788;  // 0x1788
    void* q178C;  // 0x178C
    unsigned char q1790;  // 0x1790
    unsigned char q1794;  // 0x1794
    unsigned char q1798;  // 0x1798
    void* q179C;  // 0x179C
    void* q17A0;  // 0x17A0
    unsigned char q17A4;  // 0x17A4
    void* q17A8;  // 0x17A8
    void* q17AC;  // 0x17AC
    unsigned char q17B0;  // 0x17B0
    void* q17BC;  // 0x17BC
    void* q17C0;  // 0x17C0
    unsigned char q17C4;  // 0x17C4
    void* q17D4;  // 0x17D4
    unsigned char q17D8;  // 0x17D8
    void* q17E8;  // 0x17E8
    unsigned char q17EC;  // 0x17EC
    unsigned char q17F0;  // 0x17F0
    Coord* q17F4;  // 0x17F4
    unsigned char q17F8;  // 0x17F8
    char q1800[4];  // 0x1800
    unsigned int q1804;  // 0x1804
    unsigned int q1808;  // 0x1808
    unsigned char q180C;  // 0x180C
    char q1810[4];  // 0x1810
    void * q1814;  // 0x1814
    void* q181C;  // 0x181C
    void* q1820;  // 0x1820
    void * q1824;  // 0x1824
    char q1828[4];  // 0x1828
    void* q182C;  // 0x182C
    unsigned int q1830;  // 0x1830
    ObjectTypeClass* q1834;  // 0x1834
    unsigned char q1838;  // 0x1838
    bool q1840;  // 0x1840
    bool q1844;  // 0x1844
    unsigned char q1848;  // 0x1848
    void* q184C;  // 0x184C
    unsigned char q1850;  // 0x1850
    void* q185C;  // 0x185C
    float q1860;  // 0x1860
    char q1864[4];  // 0x1864
    void* q186C;  // 0x186C
    unsigned char q1870;  // 0x1870
    void * q1874;  // 0x1874
    unsigned char q1878;  // 0x1878
    void* q1884;  // 0x1884
    void * q1888;  // 0x1888
    void* q18A4;  // 0x18A4
    void* q18A8;  // 0x18A8
    void* q18AC;  // 0x18AC
    unsigned char q18B0;  // 0x18B0
    unsigned char q18B4;  // 0x18B4
    void* q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    void* q1908;  // 0x1908
    bool q1910;  // 0x1910
    ParticleSystemClass* q1920;  // 0x1920
    ParticleSystemClass* q1924;  // 0x1924
    bool q1928;  // 0x1928
    bool q1938;  // 0x1938
    bool q1940;  // 0x1940
    bool q1944;  // 0x1944
    void* q1948;  // 0x1948
    void* q1960;  // 0x1960
    unsigned char q1964;  // 0x1964
    void* q1968;  // 0x1968
    unsigned int q1980;  // 0x1980
    unsigned char q1984;  // 0x1984
    unsigned int q1988;  // 0x1988
    unsigned int q1ED8;  // 0x1ED8
    unsigned int q1ED9;  // 0x1ED9
    unsigned char q1EDD;  // 0x1EDD
    unsigned int q1FC0;  // 0x1FC0
    unsigned int q1FC1;  // 0x1FC1
    unsigned char q1FC5;  // 0x1FC5
    bool q2048;  // 0x2048
    bool q2050;  // 0x2050
    unsigned int q2054;  // 0x2054
    bool q2068;  // 0x2068
    TeamClass* q2070;  // 0x2070
    bool q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned int q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    char q2100[4];  // 0x2100
    unsigned char q2104;  // 0x2104
    unsigned char q2108;  // 0x2108
    unsigned int q2120;  // 0x2120
    unsigned char q2124;  // 0x2124
    double q2128;  // 0x2128
    unsigned int q2130;  // 0x2130
    unsigned char q2134;  // 0x2134
    unsigned char q2140;  // 0x2140
    unsigned char q2144;  // 0x2144
    char q2148[4];  // 0x2148
    unsigned int q2160;  // 0x2160
    unsigned char q2164;  // 0x2164
    unsigned char q2170;  // 0x2170
    char q2178[4];  // 0x2178
    unsigned char q2180;  // 0x2180
    unsigned char q2184;  // 0x2184
    unsigned char q2188;  // 0x2188
    char q2194[4];  // 0x2194
    char q2198[4];  // 0x2198
    unsigned int q2200;  // 0x2200
    unsigned char q2204;  // 0x2204
    unsigned char q2208;  // 0x2208
    void* q2220;  // 0x2220
    unsigned char q2224;  // 0x2224
    unsigned char q2228;  // 0x2228
    unsigned char q2240;  // 0x2240
    void* q2248;  // 0x2248
    unsigned char q2280;  // 0x2280
    char q2304;  // 0x2304
    ParticleSystemClass* q2308;  // 0x2308
    unsigned int q2310;  // 0x2310
    unsigned char q2320;  // 0x2320
    char q2324[4];  // 0x2324
    unsigned char q2328;  // 0x2328
    char q2340[4];  // 0x2340
    unsigned int q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    unsigned int q2354;  // 0x2354
    char q2358[4];  // 0x2358
    void* q2360;  // 0x2360
    unsigned char q2364;  // 0x2364
    unsigned char q2368;  // 0x2368
    void* q2388;  // 0x2388
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    bool q2404;  // 0x2404
    unsigned int q2408;  // 0x2408
    char q2418[4];  // 0x2418
    bool q2420;  // 0x2420
    bool q2424;  // 0x2424
    unsigned char q2434;  // 0x2434
    unsigned char q2440;  // 0x2440
    void* q2444;  // 0x2444
    bool q2448;  // 0x2448
    bool q2450;  // 0x2450
    void* q2454;  // 0x2454
    void* q2500;  // 0x2500
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    void* q2528;  // 0x2528
    unsigned char q2560;  // 0x2560
    void* q2584;  // 0x2584
    unsigned char q2588;  // 0x2588
    void* q2640;  // 0x2640
    unsigned char q2644;  // 0x2644
    void* q2668;  // 0x2668
    unsigned char q2700;  // 0x2700
    void* q2724;  // 0x2724
    unsigned char q2728;  // 0x2728
    void* q2734;  // 0x2734
    unsigned char q2738;  // 0x2738
    void* q2780;  // 0x2780
    unsigned char q2784;  // 0x2784
    void* q2844;  // 0x2844
    void* q2848;  // 0x2848
    unsigned char q2880;  // 0x2880
    AbstractClass* q2888;  // 0x2888
    AbstractClass* q288C;  // 0x288C
    unsigned char q2890;  // 0x2890
    AbstractClass* q289C;  // 0x289C
    unsigned char q28A0;  // 0x28A0
    AbstractClass* q28A4;  // 0x28A4
    ObjectClass* q28A8;  // 0x28A8
    unsigned char q28AC;  // 0x28AC
    ObjectClass* q28B8;  // 0x28B8
    unsigned char q28BC;  // 0x28BC
    void* q2908;  // 0x2908
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    void* q3008;  // 0x3008
    void* q3060;  // 0x3060
    unsigned char q3064;  // 0x3064
    void* q3068;  // 0x3068
    void* q3104;  // 0x3104
    unsigned char q3108;  // 0x3108
    void* q3160;  // 0x3160
    unsigned char q3164;  // 0x3164
    unsigned char q3220;  // 0x3220
    unsigned char q3224;  // 0x3224
    unsigned char q3278;  // 0x3278
    void* q3284;  // 0x3284
    unsigned char q3288;  // 0x3288
    void* q3304;  // 0x3304
    unsigned char q3308;  // 0x3308
    void* q3364;  // 0x3364
    void* q3368;  // 0x3368
    unsigned char q3378;  // 0x3378
    void* q3384;  // 0x3384
    unsigned char q3388;  // 0x3388
    unsigned char q3420;  // 0x3420
    unsigned int q3428;  // 0x3428
    unsigned char q3434;  // 0x3434
    Tactical* q3440;  // 0x3440
    AbstractClass* q3444;  // 0x3444
    void* q3448;  // 0x3448
    unsigned char q3460;  // 0x3460
    unsigned char q3480;  // 0x3480
    void* q3484;  // 0x3484
    unsigned char q3488;  // 0x3488
    unsigned char q34A9;  // 0x34A9
    unsigned char q34B5;  // 0x34B5
    void* q34B8;  // 0x34B8
    unsigned char q34BC;  // 0x34BC
    Movie* q34CC;  // 0x34CC
    unsigned char q34D0;  // 0x34D0
    void* q3504;  // 0x3504
    unsigned char q3508;  // 0x3508
    void* q3540;  // 0x3540
    unsigned char q3544;  // 0x3544
    void* q3568;  // 0x3568
    void* q3580;  // 0x3580
    unsigned int q3584;  // 0x3584
    unsigned int q3588;  // 0x3588
    void* q3590;  // 0x3590
    unsigned char q3594;  // 0x3594
    unsigned char q3598;  // 0x3598
    void* q3600;  // 0x3600
    unsigned char q3604;  // 0x3604
    void* q3608;  // 0x3608
    unsigned char q3610;  // 0x3610
    void* q3628;  // 0x3628
    void* q3660;  // 0x3660
    unsigned char q3664;  // 0x3664
    unsigned int q3668;  // 0x3668
    unsigned char q3680;  // 0x3680
    void* q3688;  // 0x3688
    unsigned char q3720;  // 0x3720
    unsigned int q3744;  // 0x3744
    unsigned char q3748;  // 0x3748
    void* q3764;  // 0x3764
    void* q3768;  // 0x3768
    unsigned char q3778;  // 0x3778
    void* q3780;  // 0x3780
    unsigned char q3784;  // 0x3784
    unsigned char q3790;  // 0x3790
    ObjectTypeClass* q3808;  // 0x3808
    unsigned char q3820;  // 0x3820
    unsigned int q3844;  // 0x3844
    unsigned int q3848;  // 0x3848
    void* q3948;  // 0x3948
    WeaponTypeClass* q3980;  // 0x3980
    unsigned char q3984;  // 0x3984
    unsigned int q3988;  // 0x3988
    void* q4008;  // 0x4008
    unsigned char q4040;  // 0x4040
    bool q4098;  // 0x4098
    unsigned int q4100;  // 0x4100
    char q4104[4];  // 0x4104
    unsigned char q4114;  // 0x4114
    void* q4118;  // 0x4118
    unsigned char q4120;  // 0x4120
    unsigned char q4128;  // 0x4128
    char q4134[4];  // 0x4134
    unsigned int q4144;  // 0x4144
    unsigned int q4150;  // 0x4150
    unsigned int q4160;  // 0x4160
    bool q4164;  // 0x4164
    unsigned int q4168;  // 0x4168
    unsigned int q4178;  // 0x4178
    bool q4180;  // 0x4180
    unsigned int q4184;  // 0x4184
    void* q4188;  // 0x4188
    bool q4194;  // 0x4194
    HouseClass* q4200;  // 0x4200
    void* q4204;  // 0x4204
    unsigned char q4208;  // 0x4208
    void* q4210;  // 0x4210
    ObjectTypeClass* q4214;  // 0x4214
    void* q4220;  // 0x4220
    HouseClass* q4224;  // 0x4224
    unsigned int q4228;  // 0x4228
    unsigned char q4240;  // 0x4240
    void* q4244;  // 0x4244
    unsigned char q4248;  // 0x4248
    void* q4260;  // 0x4260
    unsigned char q4264;  // 0x4264
    void* q4268;  // 0x4268
    unsigned char q4280;  // 0x4280
    void* q4284;  // 0x4284
    void* q4288;  // 0x4288
    void* q4300;  // 0x4300
    unsigned char q4304;  // 0x4304
    void* q4320;  // 0x4320
    unsigned char q4324;  // 0x4324
    unsigned char q4340;  // 0x4340
    void* q4348;  // 0x4348
    char q4358[4];  // 0x4358
    unsigned int q4360;  // 0x4360
    unsigned int q4368;  // 0x4368
    unsigned int q4370;  // 0x4370
    void * q4374;  // 0x4374
    void* q4380;  // 0x4380
    int q4384;  // 0x4384
    unsigned int q4388;  // 0x4388
    void* q4400;  // 0x4400
    void* q4404;  // 0x4404
    bool q4408;  // 0x4408
    unsigned int q4418;  // 0x4418
    unsigned char q4420;  // 0x4420
    char q4424[4];  // 0x4424
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    void* q4440;  // 0x4440
    unsigned char q4444;  // 0x4444
    char q4448[4];  // 0x4448
    char q4464[4];  // 0x4464
    unsigned int q4468;  // 0x4468
    void* q4470;  // 0x4470
    unsigned int q4480;  // 0x4480
    unsigned int q4484;  // 0x4484
    char q4488[4];  // 0x4488
    unsigned char q4498;  // 0x4498
    void* q4500;  // 0x4500
    unsigned char q4504;  // 0x4504
    void* q4528;  // 0x4528
    unsigned char q4560;  // 0x4560
    void* q4580;  // 0x4580
    void* q4584;  // 0x4584
    unsigned char q4588;  // 0x4588
    unsigned char q4600;  // 0x4600
    void* q4608;  // 0x4608
    unsigned char q4624;  // 0x4624
    unsigned char q4628;  // 0x4628
    char q4630[4];  // 0x4630
    unsigned char q4640;  // 0x4640
    unsigned char q4644;  // 0x4644
    void* q4648;  // 0x4648
    void* q4658;  // 0x4658
    unsigned char q4664;  // 0x4664
    void* q4668;  // 0x4668
    unsigned char q4680;  // 0x4680
    unsigned char q4700;  // 0x4700
    unsigned int q4708;  // 0x4708
    void* q4724;  // 0x4724
    unsigned char q4728;  // 0x4728
    unsigned char q4738;  // 0x4738
    unsigned int q4740;  // 0x4740
    BuildingTypeClass* q4744;  // 0x4744
    unsigned int q4754;  // 0x4754
    RadBeam* q4758;  // 0x4758
    char q4760[4];  // 0x4760
    void* q4780;  // 0x4780
    unsigned char q4784;  // 0x4784
    void* q4808;  // 0x4808
    unsigned char q4840;  // 0x4840
    int q4864;  // 0x4864
    ObjectTypeClass * q4868;  // 0x4868
    unsigned char q4880;  // 0x4880
    char q4888[4];  // 0x4888
    unsigned char q4890;  // 0x4890
    char q4898[4];  // 0x4898
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned char q4908;  // 0x4908
    char q4914[4];  // 0x4914
    unsigned int q4918;  // 0x4918
    void* q4924;  // 0x4924
    bool q4928;  // 0x4928
    unsigned char q4940;  // 0x4940
    bool q4944;  // 0x4944
    AbstractClass* q4950;  // 0x4950
    unsigned int q4960;  // 0x4960
    void* q4964;  // 0x4964
    char q4968[4];  // 0x4968
    char q4978[4];  // 0x4978
    char q4980[4];  // 0x4980
    char q4984[4];  // 0x4984
    unsigned char q4988;  // 0x4988
    char q4994[4];  // 0x4994
    char q5000[4];  // 0x5000
    void* q5008;  // 0x5008
    char q5010[4];  // 0x5010
    int q5014;  // 0x5014
    unsigned char q5040;  // 0x5040
    void* q5064;  // 0x5064
    unsigned char q5068;  // 0x5068
    void* q5104;  // 0x5104
    unsigned char q5108;  // 0x5108
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    char q5128[4];  // 0x5128
    OverlayTypeClass* q5138;  // 0x5138
    void* q5140;  // 0x5140
    unsigned char q5144;  // 0x5144
    void* q5148;  // 0x5148
    bool q5158;  // 0x5158
    ObjectClass* q5160;  // 0x5160
    unsigned char q5164;  // 0x5164
    unsigned int q5168;  // 0x5168
    void* q5170;  // 0x5170
    unsigned int q5174;  // 0x5174
    unsigned char q5178;  // 0x5178
    char q5184[4];  // 0x5184
    unsigned int q5188;  // 0x5188
    unsigned char q5204;  // 0x5204
    unsigned char q5208;  // 0x5208
    unsigned char q5220;  // 0x5220
    unsigned int q5224;  // 0x5224
    unsigned char q5228;  // 0x5228
    unsigned int q5234;  // 0x5234
    char q5238[4];  // 0x5238
    char q5248[4];  // 0x5248
    unsigned char q5260;  // 0x5260
    unsigned int q5264;  // 0x5264
    char q5270[4];  // 0x5270
    unsigned char q5278;  // 0x5278
    void* q5308;  // 0x5308
    void* q5320;  // 0x5320
    unsigned char q5324;  // 0x5324
    void* q5344;  // 0x5344
    unsigned char q5348;  // 0x5348
    unsigned int q5350;  // 0x5350
    unsigned int q5354;  // 0x5354
    unsigned int q5358;  // 0x5358
    void* q5364;  // 0x5364
    unsigned char q5368;  // 0x5368
    unsigned int q5380;  // 0x5380
    void* q5384;  // 0x5384
    void* q5388;  // 0x5388
    unsigned char q5394;  // 0x5394
    BuildingTypeClass* q5398;  // 0x5398
    BuildingClass* q53AC;  // 0x53AC
    BuildingClass* q53B0;  // 0x53B0
    BuildingClass* q53B4;  // 0x53B4
    BuildingClass* q53B8;  // 0x53B8
    BuildingClass* q53BC;  // 0x53BC
    BuildingClass* q53C0;  // 0x53C0
    BuildingClass* q53C4;  // 0x53C4
    BuildingClass* q53C8;  // 0x53C8
    BuildingClass* q53CC;  // 0x53CC
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    void* q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    void* q5404;  // 0x5404
    void* q5408;  // 0x5408
    unsigned int q5414;  // 0x5414
    unsigned char q5418;  // 0x5418
    void* q5420;  // 0x5420
    unsigned char q5424;  // 0x5424
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned int q5438;  // 0x5438
    char q5440[4];  // 0x5440
    unsigned int q5444;  // 0x5444
    AbstractClass* q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    unsigned char q5450;  // 0x5450
    unsigned int q5458;  // 0x5458
    void* q5460;  // 0x5460
    ParticleSystemClass* q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    ParticleSystemClass* q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    void* q548C;  // 0x548C
    ParticleSystemClass* q5490;  // 0x5490
    void* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    BuildingClass* q54E0;  // 0x54E0
    unsigned char q54E4;  // 0x54E4
    unsigned char q54E8;  // 0x54E8
    unsigned char q54EC;  // 0x54EC
    unsigned char q54F0;  // 0x54F0
    unsigned char q54F4;  // 0x54F4
    void* q5504;  // 0x5504
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    ParticleSystemClass* q5520;  // 0x5520
    unsigned int q5524;  // 0x5524
    unsigned char q5528;  // 0x5528
    unsigned char q5530;  // 0x5530
    unsigned char q5534;  // 0x5534
    unsigned int q5544;  // 0x5544
    unsigned int q5545;  // 0x5545
    unsigned char q5548;  // 0x5548
    unsigned char q5549;  // 0x5549
    DynamicVector* q5550;  // 0x5550
    unsigned char q5554;  // 0x5554
    unsigned char q5558;  // 0x5558
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    void* q55F0;  // 0x55F0
    unsigned char q55F4;  // 0x55F4
    unsigned char q5604;  // 0x5604
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    unsigned int q5634;  // 0x5634
    char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    char q5640[4];  // 0x5640
    unsigned char q5644;  // 0x5644
    char q5650[4];  // 0x5650
    char q5654[4];  // 0x5654
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned int q56F9;  // 0x56F9
    unsigned int q56FA;  // 0x56FA
    unsigned int q56FB;  // 0x56FB
    unsigned int q56FC;  // 0x56FC
    unsigned int q56FD;  // 0x56FD
    unsigned int q56FE;  // 0x56FE
    char q5700[4];  // 0x5700
    unsigned char q5702;  // 0x5702
    char q5704[4];  // 0x5704
    unsigned char q5708;  // 0x5708
    unsigned char q5714;  // 0x5714
    LocomotionClass* q5718;  // 0x5718
    unsigned char q571C;  // 0x571C
    void* q5720;  // 0x5720
    unsigned char q5724;  // 0x5724
    bool q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    unsigned char q5730;  // 0x5730
    unsigned char q5734;  // 0x5734
    unsigned char q5738;  // 0x5738
    void* q5740;  // 0x5740
    char q5744;  // 0x5744
    char q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    unsigned char q575C;  // 0x575C
    char q5760;  // 0x5760
    char q5764[4];  // 0x5764
    char q5768[4];  // 0x5768
    unsigned char q576C;  // 0x576C
    unsigned char q5770;  // 0x5770
    void* q5774;  // 0x5774
    unsigned char q5778;  // 0x5778
    void* q577C;  // 0x577C
    unsigned char q5780;  // 0x5780
    unsigned char q5784;  // 0x5784
    TimerStruct * ptr_5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    unsigned char q5794;  // 0x5794
    void* q5798;  // 0x5798
    unsigned char q579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    void* q57A4;  // 0x57A4
    unsigned char q57A8;  // 0x57A8
    unsigned char q57AC;  // 0x57AC
    void* q57B0;  // 0x57B0
    unsigned char q57B4;  // 0x57B4
    unsigned char q57B8;  // 0x57B8
    void* q57BC;  // 0x57BC
    unsigned char q57C0;  // 0x57C0
    unsigned char q57C4;  // 0x57C4
    void* q57C8;  // 0x57C8
    unsigned char q57CC;  // 0x57CC
    unsigned char q57D0;  // 0x57D0
    void* q57D4;  // 0x57D4
    unsigned char q57D8;  // 0x57D8
    unsigned char q57DC;  // 0x57DC
    unsigned char q57E0;  // 0x57E0
    unsigned char q57E4;  // 0x57E4
    unsigned char q57E8;  // 0x57E8
    void* q5800;  // 0x5800
    void* q5804;  // 0x5804
    unsigned char q5808;  // 0x5808
    unsigned char q580C;  // 0x580C
    unsigned char q5810;  // 0x5810
    unsigned char q5814;  // 0x5814
    void* q5824;  // 0x5824
    unsigned char q5828;  // 0x5828
    unsigned char q582C;  // 0x582C
    unsigned char q5830;  // 0x5830
    unsigned char q5834;  // 0x5834
    unsigned char q5838;  // 0x5838
    unsigned char q583C;  // 0x583C
    unsigned char q5840;  // 0x5840
    void* q5844;  // 0x5844
    void* q5848;  // 0x5848
    unsigned char q584C;  // 0x584C
    unsigned char q585C;  // 0x585C
    void* q5860;  // 0x5860
    unsigned char q5864;  // 0x5864
    void* q5868;  // 0x5868
    unsigned char q586C;  // 0x586C
    unsigned char q5870;  // 0x5870
    unsigned char q5874;  // 0x5874
    unsigned int q5880;  // 0x5880
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q58A0;  // 0x58A0
    unsigned char q58A4;  // 0x58A4
    unsigned char q58A8;  // 0x58A8
    unsigned char q58AC;  // 0x58AC
    unsigned char q58E8;  // 0x58E8
    unsigned char q58EC;  // 0x58EC
    unsigned char q58F0;  // 0x58F0
    unsigned char q58F4;  // 0x58F4
    void* q5900;  // 0x5900
    char q5904;  // 0x5904
    bool q5908;  // 0x5908
    unsigned char q590C;  // 0x590C
    bool q5910;  // 0x5910
    unsigned char q5914;  // 0x5914
    bool q5920;  // 0x5920
    bool q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned char q5934;  // 0x5934
    UnitTypeClass* q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned char q5940;  // 0x5940
    unsigned char q5944;  // 0x5944
    void* q5948;  // 0x5948
    unsigned char q594C;  // 0x594C
    unsigned char q5950;  // 0x5950
    unsigned char q5954;  // 0x5954
    bool q5958;  // 0x5958
    unsigned char q595C;  // 0x595C
    char q5960[4];  // 0x5960
    unsigned char q5964;  // 0x5964
    unsigned char q5968;  // 0x5968
    unsigned char q596C;  // 0x596C
    char q5970[4];  // 0x5970
    EBolt* q5974;  // 0x5974
    unsigned char q5978;  // 0x5978
    unsigned char q5980;  // 0x5980
    unsigned int q5984;  // 0x5984
    char q5988[4];  // 0x5988
    unsigned char q598C;  // 0x598C
    unsigned int q5990;  // 0x5990
    unsigned int q5994;  // 0x5994
    unsigned char q5998;  // 0x5998
    unsigned char q599C;  // 0x599C
    unsigned char q6000;  // 0x6000
    void* q6004;  // 0x6004
    AbstractTypeClass* q6008;  // 0x6008
    unsigned char q600C;  // 0x600C
    unsigned char q6010;  // 0x6010
    unsigned char q6014;  // 0x6014
    unsigned int q6020;  // 0x6020
    AbstractClass* q6024;  // 0x6024
    void* q6028;  // 0x6028
    unsigned char q602C;  // 0x602C
    unsigned char q6030;  // 0x6030
    char q6034[4];  // 0x6034
    char q6038[4];  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned char q6040;  // 0x6040
    void* q6044;  // 0x6044
    void* q6048;  // 0x6048
    unsigned char q604C;  // 0x604C
    unsigned char q6050;  // 0x6050
    unsigned char q6054;  // 0x6054
    void* q6060;  // 0x6060
    unsigned char q6064;  // 0x6064
    unsigned char q6068;  // 0x6068
    unsigned char q606C;  // 0x606C
    unsigned char q6070;  // 0x6070
    void* q6080;  // 0x6080
    unsigned char q6084;  // 0x6084
    unsigned char q6088;  // 0x6088
    unsigned char q608C;  // 0x608C
    unsigned char q6090;  // 0x6090
    void* q6100;  // 0x6100
    unsigned char q6104;  // 0x6104
    unsigned char q6108;  // 0x6108
    unsigned char q610C;  // 0x610C
    unsigned char q6110;  // 0x6110
    void* q6120;  // 0x6120
    unsigned char q6124;  // 0x6124
    unsigned char q6128;  // 0x6128
    unsigned char q612C;  // 0x612C
    unsigned char q6130;  // 0x6130
    char q6144[4];  // 0x6144
    unsigned int q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned char q6150;  // 0x6150
    unsigned char q6154;  // 0x6154
    char q6160[4];  // 0x6160
    void * q6164;  // 0x6164
    unsigned char q6168;  // 0x6168
    unsigned char q6170;  // 0x6170
    unsigned char q6174;  // 0x6174
    void * q6180;  // 0x6180
    char q6184[4];  // 0x6184
    unsigned char q6188;  // 0x6188
    unsigned char q618C;  // 0x618C
    unsigned char q6190;  // 0x6190
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned char q61A0;  // 0x61A0
    unsigned char q61A4;  // 0x61A4
    unsigned char q61A8;  // 0x61A8
    unsigned char q6200;  // 0x6200
    unsigned char q6204;  // 0x6204
    bool q6208;  // 0x6208
    unsigned char q620C;  // 0x620C
    bool q6210;  // 0x6210
    bool q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    void* q6220;  // 0x6220
    unsigned char q6224;  // 0x6224
    unsigned char q6228;  // 0x6228
    unsigned char q622C;  // 0x622C
    char q6230[4];  // 0x6230
    unsigned char q6234;  // 0x6234
    unsigned char q6238;  // 0x6238
    float q6240;  // 0x6240
    char q6244[4];  // 0x6244
    unsigned char q6248;  // 0x6248
    unsigned char q624C;  // 0x624C
    unsigned char q6250;  // 0x6250
    unsigned char q6254;  // 0x6254
    void * q6260;  // 0x6260
    unsigned char q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned char q626C;  // 0x626C
    unsigned char q6270;  // 0x6270
    unsigned char q6274;  // 0x6274
    void * q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned char q6288;  // 0x6288
    unsigned char q628C;  // 0x628C
    char q6290[4];  // 0x6290
    AnimClass* q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    unsigned char q629C;  // 0x629C
    unsigned char q62A0;  // 0x62A0
    unsigned char q62A4;  // 0x62A4
    void* q6308;  // 0x6308
    unsigned char q630C;  // 0x630C
    unsigned char q6310;  // 0x6310
    unsigned char q6314;  // 0x6314
    unsigned char q6320;  // 0x6320
    unsigned char q6324;  // 0x6324
    unsigned char q6328;  // 0x6328
    unsigned char q632C;  // 0x632C
    unsigned char q6330;  // 0x6330
    unsigned int q6384;  // 0x6384
    unsigned char q6388;  // 0x6388
    unsigned char q638C;  // 0x638C
    unsigned char q6390;  // 0x6390
    unsigned char q6394;  // 0x6394
    unsigned char q6398;  // 0x6398
    void* q6400;  // 0x6400
    unsigned char q6404;  // 0x6404
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned char q6414;  // 0x6414
    unsigned int q6418;  // 0x6418
    unsigned char q641C;  // 0x641C
    unsigned char q6420;  // 0x6420
    unsigned char q6424;  // 0x6424
    unsigned char q6434;  // 0x6434
    char q6438[4];  // 0x6438
    unsigned char q643C;  // 0x643C
    bool q6440;  // 0x6440
    unsigned char q6444;  // 0x6444
    unsigned char q6450;  // 0x6450
    bool q6454;  // 0x6454
    unsigned char q6458;  // 0x6458
    bool q6464;  // 0x6464
    bool q6468;  // 0x6468
    unsigned char q646C;  // 0x646C
    unsigned char q6500;  // 0x6500
    void* q6504;  // 0x6504
    unsigned char q6508;  // 0x6508
    unsigned char q650C;  // 0x650C
    unsigned char q6510;  // 0x6510
    void* q6514;  // 0x6514
    unsigned char q6518;  // 0x6518
    unsigned char q651C;  // 0x651C
    unsigned char q6520;  // 0x6520
    unsigned char q6524;  // 0x6524
    unsigned int q6528;  // 0x6528
    unsigned char q652C;  // 0x652C
    unsigned char q6530;  // 0x6530
    unsigned char q6534;  // 0x6534
    char q6864;  // 0x6864
    unsigned char q6868;  // 0x6868
    unsigned char q686C;  // 0x686C
    unsigned char q6870;  // 0x6870
    unsigned char q6874;  // 0x6874
    unsigned char q6878;  // 0x6878
    unsigned char q68C4;  // 0x68C4
    unsigned char q68C8;  // 0x68C8
    unsigned char q68CC;  // 0x68CC
    unsigned char q68D0;  // 0x68D0
    unsigned char q6948;  // 0x6948
    unsigned char q694C;  // 0x694C
    unsigned char q6950;  // 0x6950
    unsigned char q6954;  // 0x6954
    unsigned char q79E4;  // 0x79E4
    unsigned char q79E8;  // 0x79E8
    unsigned char q79EC;  // 0x79EC
    unsigned char q79F0;  // 0x79F0
    unsigned int ClearTargetRef;
    unsigned int GetExitCell;
    unsigned int currentMission3;
    unsigned int isAliveFlag1;
    unsigned int vtable25;
    unsigned int vtable28;
    unsigned int vtable36;
    unsigned int vtable37;
    unsigned int vtable38;
// --- flat members (END) ---
    void ProcessIdleOrders();
};

} // namespace gamemd
