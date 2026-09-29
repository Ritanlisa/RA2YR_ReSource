// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TechnoClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    bool q017;  // 0x17
    void* nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    void* referenceCount;  // 0x1C
    unsigned int q01E;  // 0x1E
    void* NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    void* owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    void* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    void* ambientSoundController;  // 0x3C
    unsigned int q03D;  // 0x3D
    void* q040;  // 0x40
    bool q042;  // 0x42
    bool q043;  // 0x43
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q04F;  // 0x4F
    void* customSound_controller;  // 0x50
    unsigned int u32_54;  // 0x54
    void* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    unsigned int u32_60;  // 0x60
    char customSound[4];  // 0x64
    void* bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    void* health;  // 0x6C
    unsigned char u8_6E;  // 0x6E
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int q077;  // 0x77
    void* spawnStatus;  // 0x78
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
    void* onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    void* location;  // 0x9C
    void* locationY;  // 0xA0
    unsigned char q0A1;  // 0xA1
    void* locationZ;  // 0xA4
    void* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    unsigned int q0B1;  // 0xB1
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    bool q0BF;  // 0xBF
    char missionStartTime[4];  // 0xC0
    unsigned int q0C3;  // 0xC3
    unsigned int missionData;  // 0xC4
    unsigned char q0C5;  // 0xC5
    unsigned char q0C6;  // 0xC6
    char missionTimer[12];  // 0xC8
    void* q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    void* lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int q0DC;  // 0xDC
    unsigned int radioLinks;  // 0xE0
    char flashing[8];  // 0xE4
    int vecTechno_Capacity;  // 0xE8
    bool q0EB;  // 0xEB
    char animation[8];  // 0xEC
    bool vecTechno_IsAllocated;  // 0xED
    void* q0F0;  // 0xF0
    unsigned int q0F2;  // 0xF2
    char passengers[8];  // 0xF4
    void* q0F7;  // 0xF7
    char q0F8[4];  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    TechnoClass* transporter;  // 0xFC
    bool q0FF;  // 0xFF
    char q100[4];  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    TechnoClass* q108;  // 0x108
    unsigned int turretChargeTimer;  // 0x10C
    unsigned int q10D;  // 0x10D
    unsigned int q10E;  // 0x10E
    unsigned int q10F;  // 0x10F
    char q110[4];  // 0x110
    unsigned int q111;  // 0x111
    unsigned int secondaryTurretIndex;  // 0x114
    ObjectClass* q118;  // 0x118
    unsigned int q11A;  // 0x11A
    unsigned int q11B;  // 0x11B
    void* q11C;  // 0x11C
    unsigned int q11E;  // 0x11E
    char q120[4];  // 0x120
    void* q124;  // 0x124
    char q128[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    unsigned int q12D;  // 0x12D
    unsigned int q12E;  // 0x12E
    unsigned int q12F;  // 0x12F
    void* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    char currentWeaponSlot[4];  // 0x138
    unsigned char q139;  // 0x139
    char q13C[4];  // 0x13C
    unsigned int currentRank;  // 0x140
    char gattlingStage[4];  // 0x144
    char gattlingValue[4];  // 0x148
    unsigned int ammoReloadTimer;  // 0x14C
    void* q14E;  // 0x14E
    HouseClass* initialOwner;  // 0x150
    char veterancy[4];  // 0x154
    unsigned int alignmentPadding154;  // 0x158
    double armorMultiplier;  // 0x15C
    double q160;  // 0x160
    unsigned char q162;  // 0x162
    unsigned char q163;  // 0x163
    double firepowerMultiplier;  // 0x164
    unsigned int q166;  // 0x166
    unsigned int q167;  // 0x167
    void* q168;  // 0x168
    bool q16B;  // 0x16B
    char idleActionTimer[12];  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    void* q170;  // 0x170
    unsigned int q173;  // 0x173
    char radarFlashTimer[4];  // 0x174
    bool q175;  // 0x175
    char q178[12];  // 0x178
    bool q17B;  // 0x17B
    unsigned int q17C;  // 0x17C
    char targetingTimer[4];  // 0x180
    char q184[12];  // 0x184
    char q188[4];  // 0x188
    void* q18C;  // 0x18C
    char ironCurtainTimer[12];  // 0x190
    char q194[4];  // 0x194
    void* q198;  // 0x198
    unsigned int q199;  // 0x199
    unsigned char u8_19B;  // 0x19B
    char ironTintTimer[12];  // 0x19C
    void* q1A0;  // 0x1A0
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    char ironTintStage[4];  // 0x1A8
    char q1AC[12];  // 0x1AC
    unsigned int q1AE;  // 0x1AE
    char airstrikeTimer[4];  // 0x1B0
    unsigned int u32_1B4;  // 0x1B4
    unsigned int q1B5;  // 0x1B5
    unsigned int q1B7;  // 0x1B7
    char airstrikeTintTimer[12];  // 0x1B8
    unsigned int u32_1BB;  // 0x1BB
    void* q1BC;  // 0x1BC
    void* airstrikeTintStage;  // 0x1C0
    unsigned int q1C4;  // 0x1C4
    unsigned int q1C8;  // 0x1C8
    unsigned int drainTarget;  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    bool drainingMe;  // 0x1D0
    TechnoClass* drainAnim;  // 0x1D4
    TechnoClass* isDisguisedFlag;  // 0x1D8
    unsigned char q1D9;  // 0x1D9
    AnimClass* disguiseCreationFrame;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    bool infantryBlinkTimer;  // 0x1E0
    unsigned int q1E4;  // 0x1E4
    void* q1E8;  // 0x1E8
    void* disguiseBlinkTimer;  // 0x1EC
    unsigned int q1ED;  // 0x1ED
    char q1F0[4];  // 0x1F0
    unsigned int u32_1F4;  // 0x1F4
    bool isTargetedByChrono;  // 0x1F8
    unsigned char q1F9;  // 0x1F9
    bool reloadTimer;  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    bool q200;  // 0x200
    int q202;  // 0x202
    unsigned int q204;  // 0x204
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int controlGroup;  // 0x214
    unsigned int focus;  // 0x218
    HouseClass* owner;  // 0x21C
    AbstractClass* cloakState;  // 0x220
    HouseClass* cloakProgress;  // 0x224
    unsigned int q228;  // 0x228
    void* q22C;  // 0x22C
    char cloakDelayTimer[4];  // 0x230
    unsigned int u32_234;  // 0x234
    AbstractClass* q238;  // 0x238
    float warpFactor;  // 0x23C
    float q240;  // 0x240
    char q244[4];  // 0x244
    char q248[4];  // 0x248
    void* q24C;  // 0x24C
    void* isChronosphereImmune;  // 0x250
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    unsigned char q258;  // 0x258
    void* q25C;  // 0x25C
    unsigned int lastSightRange;  // 0x260
    unsigned int lastSightHeight;  // 0x264
    bool gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    unsigned short q26A;  // 0x26A
    unsigned int gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned char q27D;  // 0x27D
    unsigned char alignmentPadding27E;  // 0x27E
    char owningHouseIndex0[4];  // 0x280
    bool chronoLockRemaining;  // 0x284
    bool q285;  // 0x285
    bool q286;  // 0x286
    unsigned char q287;  // 0x287
    TemporalClass* chronoDestCoords;  // 0x288
    unsigned int u32_28C;  // 0x28C
    bool q290;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    unsigned int airstrike;  // 0x294
    unsigned int isBerserk;  // 0x298
    unsigned char q299;  // 0x299
    char isBerserk_duration_left[4];  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    void* isUncrushable;  // 0x2A4
    unsigned char q2A5;  // 0x2A5
    AirstrikeClass* rockerLinkedUnit;  // 0x2A8
    bool locomotorTarget;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    unsigned int locomotorSource;  // 0x2B0
    void* q2B2;  // 0x2B2
    void* q2B3;  // 0x2B3
    unsigned int target;  // 0x2B4
    bool lastTarget;  // 0x2B8
    unsigned char alignmentPadding2A9;  // 0x2B9
    FootClass* captureManager;  // 0x2BC
    FootClass* mindControlledBy;  // 0x2C0
    FootClass* mindControlledBy_a_unit;  // 0x2C4
    unsigned char q2C5;  // 0x2C5
    AbstractClass* mindControlRingAnim;  // 0x2C8
    AbstractClass* mindControlledBy_house;  // 0x2CC
    CaptureManagerClass* spawnManager;  // 0x2D0
    TechnoClass* spawnOwner;  // 0x2D4
    bool slaveManager;  // 0x2D8
    unsigned char alignmentPadding2C2;  // 0x2D9
    AnimClass* slaveOwner;  // 0x2DC
    HouseClass* originalOwnerHouse;  // 0x2E0
    SpawnManagerClass* bunkerLinkedUnit;  // 0x2E4
    TechnoClass* pitchAngle;  // 0x2E8
    SlaveManagerClass* diskLaserTimer;  // 0x2EC
    TechnoClass* q2F0;  // 0x2F0
    HouseClass* q2F4;  // 0x2F4
    TechnoClass* diskLaserChargeState;  // 0x2F8
    float ammo;  // 0x2FC
    char unitValue[4];  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    void* sparkParticles;  // 0x308
    unsigned int q30A;  // 0x30A
    unsigned int ambientParticles;  // 0x30C
    char damageParticles[4];  // 0x310
    char railgunParticles[4];  // 0x314
    ParticleSystemClass* unk1Particles;  // 0x318
    ParticleSystemClass* q31C;  // 0x31C
    ParticleSystemClass* q320;  // 0x320
    ParticleSystemClass* q324;  // 0x324
    ParticleSystemClass* q328;  // 0x328
    ParticleSystemClass* auxParticles1;  // 0x32C
    ParticleSystemClass* auxParticles2;  // 0x330
    ParticleSystemClass* firingParticles;  // 0x334
    WaveClass* waveEffect;  // 0x338
    float tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    float tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    char hijackerInfantryType[4];  // 0x34C
    char storedTiberium[16];  // 0x350
    void* q354;  // 0x354
    unsigned int q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    bool q366;  // 0x366
    unsigned int q368;  // 0x368
    char barrelFacing[24];  // 0x370
    char facing[4];  // 0x374
    char turretFacing[4];  // 0x378
    char currentBurstIndex[4];  // 0x37C
    char target_laser_timer[4];  // 0x380
    char q384[4];  // 0x384
    char primaryFacing[24];  // 0x388
    unsigned int q38A;  // 0x38A
    char targetLaserOpacity[4];  // 0x38C
    unsigned short targetLaserFlags;  // 0x38E
    bool isCountedAsOwned;  // 0x390
    bool isSinking;  // 0x391
    bool wasAlreadySinking;  // 0x392
    bool isReceivingDamageEffect;  // 0x393
    bool isPlayingDamageSound;  // 0x394
    bool hasBeenAttacked;  // 0x395
    bool isCloakableFlag;  // 0x396
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
    bool q3CE;  // 0x3CE
    bool q3CF;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool q3D1;  // 0x3D1
    bool q3D2;  // 0x3D2
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
    char sightRangeBonus;  // 0x3E4
    bool isRecruitableByAlly;  // 0x3E5
    bool isRecruitableByEnemy;  // 0x3E6
    bool isRadarTracked;  // 0x3E7
    bool isOnCarryall;  // 0x3E8
    bool isCrashing;  // 0x3E9
    bool wasAlreadyCrashing;  // 0x3EA
    bool isBeingManipulated;  // 0x3EB
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    bool isEMPImmune;  // 0x3F5
    bool isRadiationImmune;  // 0x3F6
    char q3F8[32];  // 0x3F8
    unsigned int u32_3FC;  // 0x3FC
    unsigned int q400;  // 0x400
    void* q404;  // 0x404
    void* q408;  // 0x408
    HouseClass* q40C;  // 0x40C
    unsigned int u32_410;  // 0x410
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool q41C;  // 0x41C
    bool q41D;  // 0x41D
    bool q41E;  // 0x41E
    bool q41F;  // 0x41F
    void* q420;  // 0x420
    bool q421;  // 0x421
    bool q422;  // 0x422
    bool q423;  // 0x423
    TechnoClass * q424;  // 0x424
    void* q425;  // 0x425
    bool q426;  // 0x426
    bool q427;  // 0x427
    TechnoClass* q428;  // 0x428
    void* q42C;  // 0x42C
    bool q430;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
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
    unsigned char u8_44C;  // 0x44C
    bool vecInt_IsAllocated;  // 0x44D
    unsigned int u32_450;  // 0x450
    unsigned int u32_454;  // 0x454
    unsigned char currentTargets;  // 0x458
    unsigned int attackedTargets;  // 0x45C
    char audioController3[4];  // 0x460
    unsigned char q464;  // 0x464
    bool vecAbs_IsAllocated;  // 0x465
    AnimClass* q468;  // 0x468
    unsigned int u32_46C;  // 0x46C
    unsigned char q470;  // 0x470
    unsigned int audioLoopIndex3;  // 0x474
    unsigned int audioVolume3;  // 0x478
    char audioController4[4];  // 0x47C
    TechnoClass* q47D;  // 0x47D
    char q480[4];  // 0x480
    unsigned int q484;  // 0x484
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
    unsigned int q500;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    unsigned int RadioClass;
    unsigned int __pad_18C;
    unsigned int __pad_1C4;
    unsigned int barrelRecoil;
    unsigned int checkCloakState;
    unsigned int damageParticles_2;
    unsigned int master;
    unsigned int railgunParticles_2;
    unsigned int vtable33;
    unsigned int vtable34;
    unsigned int Deploy;
    unsigned int vtable30;
    unsigned int vtable31;
    unsigned int vtable32;
    unsigned int CalcFlashAlpha;
// --- flat members (END) ---
    BOOL processDamageAnimation(int a1);
    BOOL updateWeaponCooldown(int a1);
    Coord * * RegisterKill();
    HouseClass * * RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11);
    char ScanAdjacentCells();
    int COMStub_Return0_287();
    int DTOR();
    int DrawAirstrikeFlare_SetContext(int a1, int a2, int a3, int a4, int a5, int a6);
    int HasVoiceResponse(int weaponIndex);
    int ProcessDeployAction();
    int StubReturnFalse5();
    int StubReturnFalse6();
    int StubReturnFalse7();
    int StubReturnFalse8();
    int StubReturnFalse9();
    int checkAmmo(AircraftClass * aP0);
    int checkMovementRestrictions();
    int processPowerDrain();
    TechnoClass(AbstractClass * aP1);
    unsigned int * Update(BuildingClass * aP0, FootClass * aP1);
    void GetField();
    void updateSightRange(IUnknown * aP1, int a3);
    static double GetTileAnimationData(...);  // C2597 interim stub
    static double InvulnerabilityIntensity_SetContext(...);  // C2597 interim stub
    static double MutateAll(...);  // C2597 interim stub
    static double SetFocus(...);  // C2597 interim stub
    static double EjectPassengers(...);  // C2597 interim stub
    static double CreatePlanningNode(...);  // C2597 interim stub
    static double IsDeployed(...);  // C2597 interim stub
    static double IsWaypointHidden(...);  // C2597 interim stub
};

} // namespace gamemd
