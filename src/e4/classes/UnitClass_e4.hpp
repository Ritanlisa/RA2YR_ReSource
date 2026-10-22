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
    void * ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    void * abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    void * needsSave;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    void * fallRate;  // 0x2C
    ObjectClass * nextObject;  // 0x30
    TagClass * attachedTag;  // 0x34
    BombClass * attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass * parachute;  // 0x88
    char onBridge[1];  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    void * currentMission;  // 0xAC
    void * suspendedMission;  // 0xB0
    void * queuedMission;  // 0xB4
    bool missionQueued;  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    int missionStatus;  // 0xBC
    int missionStartTime;  // 0xC0
    unsigned int missionData;  // 0xC4
    int missionTimer[3];  // 0xC8
    int lastCommands[3];  // 0xD4
    int radioLinks[4];  // 0xE0
    char flashing[8];  // 0xF0
    char radioContact[28];  // 0xF8
    int passengers[2];  // 0x114
    TechnoClass * transporter;  // 0x11C
    int turretChargeTimer;  // 0x120
    void * currentTurretNumber;  // 0x124
    int secondaryTurretIndex;  // 0x128
    AnimClass * behindAnim;  // 0x12C
    AnimClass * deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    char alignmentPadding139[3];  // 0x135
    int radioQueueCount;  // 0x138
    void * currentRank;  // 0x13C
    void * gattlingStage;  // 0x140
    int gattlingValue;  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass * initialOwner;  // 0x14C
    FootClass * veterancy;  // 0x150
    unsigned int alignmentPadding154;  // 0x154
    double armorMultiplier;  // 0x158
    double firepowerMultiplier;  // 0x160
    char idleActionTimer[12];  // 0x168
    char radarFlashTimer[12];  // 0x174
    char targetingTimer[12];  // 0x180
    unsigned char __pad_18C;  // 0x18C
    char __pad_18D[3];  // 0x18D
    int ironCurtainTimer[3];  // 0x190
    int ironTintTimer[3];  // 0x19C
    int ironTintStage;  // 0x1A8
    int airstrikeTimer[3];  // 0x1AC
    int airstrikeTintTimer[3];  // 0x1B8
    char __pad_1C4[4];  // 0x1C4
    void * currentTurretNumber_d;  // 0x1C8
    unsigned int __pad_1CC;  // 0x1CC
    int drainingMe;  // 0x1D0
    int drainAnim;  // 0x1D4
    char isDisguisedFlag[1];  // 0x1D8
    char __pad_1D9[3];  // 0x1D9
    int disguiseCreationFrame;  // 0x1DC
    int infantryBlinkTimer[3];  // 0x1E0
    int disguiseBlinkTimer[3];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char q1F9[3];  // 0x1F9
    int reloadTimer[3];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int __pad_214;  // 0x214
    void * focus;  // 0x218
    void* __pad_21C;  // 0x21C
    unsigned int cloakState;  // 0x220
    int cloakProgress[7];  // 0x224
    int cloakDelayTimer[3];  // 0x240
    void * warpFactor;  // 0x24C
    bool isChronosphereImmune;  // 0x250
    char alignmentPadding251[3];  // 0x251
    int lastSightCoords[3];  // 0x254
    int lastSightRange;  // 0x260
    int lastSightHeight;  // 0x264
    char gapSuperCharged[1];  // 0x268
    char isGeneratingGap;  // 0x269
    char q26A[2];  // 0x26A
    int gapRadius;  // 0x26C
    char isBeingWarpedOut[1];  // 0x270
    char isWarpingOut[1];  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    int temporalUsing;  // 0x274
    int temporalTargetingMe;  // 0x278
    char isImmobilized[1];  // 0x27C
    char q27D[3];  // 0x27D
    int owningHouseIndex0;  // 0x280
    int chronoLockRemaining;  // 0x284
    int chronoDestCoords[3];  // 0x288
    int airstrike;  // 0x294
    char isBerserk[1];  // 0x298
    char q299[3];  // 0x299
    int isBerserk_duration_left;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    char q2A5[3];  // 0x2A5
    int rockerLinkedUnit;  // 0x2A8
    int locomotorTarget;  // 0x2AC
    int locomotorSource;  // 0x2B0
    int __pad_2B4;  // 0x2B4
    int lastTarget;  // 0x2B8
    FacingStruct * facing;  // 0x2BC
    char turretFacing[4];  // 0x2C0
    char mindControlledBy_a_unit[1];  // 0x2C4
    char q2C5[3];  // 0x2C5
    TimerStruct * target_laser_timer;  // 0x2C8
    int mindControlledBy_house;  // 0x2CC
    int spawnManager;  // 0x2D0
    char targetLaserOpacity[4];  // 0x2D4
    unsigned int isCountedAsOwned;  // 0x2D8
    unsigned int isPlayingDamageSound;  // 0x2DC
    unsigned int isSpawned;  // 0x2E0
    int bunkerLinkedUnit;  // 0x2E4
    unsigned int __pad_2E8;  // 0x2E8
    int diskLaserTimer[3];  // 0x2EC
    int diskLaserChargeState;  // 0x2F8
    int ammo;  // 0x2FC
    int __pad_300;  // 0x300
    int fireParticles;  // 0x304
    int sparkParticles;  // 0x308
    int ambientParticles;  // 0x30C
    int damageParticles;  // 0x310
    unsigned int isTurretLocked;  // 0x314
    int unk1Particles;  // 0x318
    char __pad_31C[4];  // 0x31C
    int ambientParticles_2;  // 0x320
    int damageParticles_2;  // 0x324
    int railgunParticles_2;  // 0x328
    int auxParticles1;  // 0x32C
    int auxParticles2;  // 0x330
    int firingParticles;  // 0x334
    int waveEffect;  // 0x338
    int tiltSidewaysAngle;  // 0x33C
    int __pad_340;  // 0x340
    int tiltSidewaysRate;  // 0x344
    int tiltForwardsRate;  // 0x348
    int hijackerInfantryType;  // 0x34C
    int storedTiberium[4];  // 0x350
    int tiberiumCollectionState;  // 0x360
    int unloadTimer[3];  // 0x364
    char __pad_370[24];  // 0x370
    int primaryFacing[6];  // 0x388
    char audioLoopIndex3[24];  // 0x3A0
    int currentBurstIndex;  // 0x3B8
    int targetLaserTimer[3];  // 0x3BC
    unsigned short audioHandle4;  // 0x3C8
    char unknown_3CA[2];  // 0x3CA
    unsigned char audioController5;  // 0x3CC
    char isSinking[1];  // 0x3CD
    char wasAlreadySinking[1];  // 0x3CE
    char isReceivingDamageEffect[1];  // 0x3CF
    bool isUseless;  // 0x3D0
    char hasBeenAttacked[1];  // 0x3D1
    char isCloakableFlag[1];  // 0x3D2
    char isPrimaryFactory[1];  // 0x3D3
    bool isALoaner;  // 0x3D4
    char isInPlayfield[1];  // 0x3D5
    char __pad_3D6[2];  // 0x3D6
    char __pad_3D8[32];  // 0x3D8
    int barrelRecoil[8];  // 0x3F8
    unsigned char voiceHandle;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    unsigned char voiceVolumeModifier;  // 0x41C
    char isSelectedByPlayer[1];  // 0x41D
    char isUnderCursor[1];  // 0x41E
    char isCommandLineTarget[1];  // 0x41F
    char sightRangeBonus[1];  // 0x420
    char isRecruitableByAlly[1];  // 0x421
    char isRecruitableByEnemy[1];  // 0x422
    char isRadarTracked[1];  // 0x423
    char isOnCarryall[1];  // 0x424
    char isCrashing[1];  // 0x425
    char wasAlreadyCrashing[1];  // 0x426
    char isBeingManipulated[1];  // 0x427
    int manipulatedByUnit;  // 0x428
    int chronoWarpedByHouse;  // 0x42C
    char isChronoImmuneFlag[1];  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    int previousTeam;  // 0x434
    unsigned char isDisguisedFlag_as_house;  // 0x438
    char isAbsorbed[1];  // 0x439
    char isGrindingInProgress[1];  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    int grindingAnimHandle;  // 0x43C
    int currentTargetThreatValues[6];  // 0x440
    int currentTargets[6];  // 0x458
    int attackedTargets[6];  // 0x470
    int turretRotateSoundController[5];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    int gattlingSoundController[5];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    char __pad_4BA[2];  // 0x4BA
    unsigned int unknown_4BC;  // 0x4BC
    int unusedGattlingSoundController[5];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    char __pad_4D6[2];  // 0x4D6
    unsigned int unknown_4D8;  // 0x4D8
    int queuedVoiceSoundController[5];  // 0x4DC
    int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    char __pad_4FA[2];  // 0x4FA
    unsigned int unknown_4FC;  // 0x4FC
    int queueUpToEnter;  // 0x500
    unsigned int __pad_504;  // 0x504
    int threatPosed;  // 0x508
    int shouldLoseTarget;  // 0x50C
    int firingRadBeam;  // 0x510
    int planningToken;  // 0x514
    ObjectTypeClass * ptr_518;  // 0x518
    unsigned int __pad_51C;  // 0x51C
    int FootClass_field_520;  // 0x520
    unsigned short FootClass_field_524;  // 0x524
    unsigned short FootClass_field_526;  // 0x526
    unsigned short FootClass_field_528;  // 0x528
    unsigned short FootClass_field_52A;  // 0x52A
    char FootClass_field_52C[4];  // 0x52C
    int FootClass_field_530;  // 0x530
    int FootClass_field_534;  // 0x534
    int FootClass_field_538;  // 0x538
    bool FootClass_field_53C;  // 0x53C
    char m_padding_53D[3];  // 0x53D
    int FootClass_field_540;  // 0x540
    int audioController7[5];  // 0x544
    char FootClass_field_558[4];  // 0x558
    char FootClass_field_55C[4];  // 0x55C
    int FootClass_field_560;  // 0x560
    int FootClass_field_564;  // 0x564
    char FootClass_field_568[12];  // 0x568
    int unused574;  // 0x574
    unsigned long long FootClass_field_578;  // 0x578
    unsigned long long FootClass_field_580;  // 0x580
    int FootClass_DVC_588;  // 0x588
    unsigned char __pad_58C;  // 0x58C
    char __pad_58D[19];  // 0x58D
    char FootClass_field_5A0[4];  // 0x5A0
    int FootClass_field_5A4;  // 0x5A4
    char FootClass_field_5A8[4];  // 0x5A8
    unsigned int FootClass_DVC_5AC;  // 0x5AC
    unsigned char __pad_5B0;  // 0x5B0
    char __pad_5B1[19];  // 0x5B1
    char FootClass_field_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    char q5D1[1];  // 0x5D1
    char m_padding_5D2[2];  // 0x5D2
    EBolt * FootClass_field_5D4;  // 0x5D4
    char FootClass_field_5D8[4];  // 0x5D8
    char FootClass_field_5DC[4];  // 0x5DC
    int pathDirections[24];  // 0x5E0
    char FootClass_field_640[12];  // 0x640
    char FootClass_field_64C[4];  // 0x64C
    char FootClass_field_650[12];  // 0x650
    char FootClass_field_65C[12];  // 0x65C
    char FootClass_field_668[12];  // 0x668
    ILocomotion * Locomotor;  // 0x674
    char Locomotor_ptr[12];  // 0x678
    unsigned char FootClass_field_684;  // 0x684
    char unknownBool685;  // 0x685
    char waypointIndex;  // 0x686
    char unknownBool687;  // 0x687
    unsigned char FootClass_bools_688;  // 0x688
    char isTeamLeader;  // 0x689
    char shouldScanForTarget;  // 0x68A
    char q68B[1];  // 0x68B
    char q68C[1];  // 0x68C
    bool unknownBool68D;  // 0x68D
    char q68E[1];  // 0x68E
    char shouldEnterAbsorber;  // 0x68F
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    char __pad_692[2];  // 0x692
    void * FootClass_field_694;  // 0x694
    int FootClass_field_698;  // 0x698
    char FootClass_field_69C[4];  // 0x69C
    char FootClass_field_6A0[12];  // 0x6A0
    unsigned char __pad_6AC;  // 0x6AC
    char isAttackedByLocomotor;  // 0x6AD
    char isLetGoByLocomotor;  // 0x6AE
    char u32_6AF[1];  // 0x6AF
    bool FootClass_field_6B0;  // 0x6B0
    bool FootClass_field_6B1;  // 0x6B1
    bool FootClass_field_6B2;  // 0x6B2
    bool FootClass_field_6B3;  // 0x6B3
    bool FootClass_field_6B4;  // 0x6B4
    bool FootClass_field_6B5;  // 0x6B5
    bool FootClass_field_6B6;  // 0x6B6
    bool FootClass_field_6B7;  // 0x6B7
    bool FootClass_field_6B8;  // 0x6B8
    char FootClass_field_6B9[3];  // 0x6B9
    void * FootClass_field_6BC;  // 0x6BC
    int UnitClass_field_int_6C0;  // 0x6C0
    UnitTypeClass * Type;  // 0x6C4
    UnitClass * FollowerCar;  // 0x6C8
    int FlagHouseIndex;  // 0x6CC
    bool HasFollowerCar;  // 0x6D0
    bool Unloading;  // 0x6D1
    bool UnitClass_field_bool_6D2;  // 0x6D2
    bool TerrainPalette;  // 0x6D3
    int UnitClass_field_int_6D4;  // 0x6D4
    int DeathFrameCounter;  // 0x6D8
    EBolt * ElectricBolt;  // 0x6DC
    bool Deployed;  // 0x6E0
    bool Deploying;  // 0x6E1
    bool Undeploying;  // 0x6E2
    unsigned char __pad_6E3;  // 0x6E3
    int NonPassengerCount;  // 0x6E4
    char ToolTipText[512];  // 0x6E8
    char __pad_8E8[24];  // 0x8E8
    unsigned int u32_900;  // 0x900
    char __pad_904[24];  // 0x904
    unsigned int u32_91C;  // 0x91C
    char __pad_920[24];  // 0x920
    unsigned int u32_938;  // 0x938
    char __pad_93C[24];  // 0x93C
    unsigned int u32_954;  // 0x954
    char __pad_958[24];  // 0x958
    unsigned int u32_970;  // 0x970
    char __pad_974[24];  // 0x974
    unsigned int u32_98C;  // 0x98C
    char __pad_990[52];  // 0x990
    unsigned int u32_9C4;  // 0x9C4
    char __pad_9C8[24];  // 0x9C8
    unsigned int u32_9E0;  // 0x9E0
    char __pad_9E4[24];  // 0x9E4
    unsigned int u32_9FC;  // 0x9FC
    char __pad_A00[24];  // 0xA00
    unsigned int u32_A18;  // 0xA18
    char __pad_A1C[24];  // 0xA1C
    unsigned int u32_A34;  // 0xA34
    char __pad_A38[24];  // 0xA38
    unsigned int u32_A50;  // 0xA50
    char __pad_A54[24];  // 0xA54
    unsigned int u32_A6C;  // 0xA6C
    char __pad_A70[24];  // 0xA70
    unsigned int u32_A88;  // 0xA88
    char __pad_A8C[24];  // 0xA8C
    unsigned int u32_AA4;  // 0xAA4
    char __pad_AA8[24];  // 0xAA8
    unsigned int u32_AC0;  // 0xAC0
    char __pad_AC4[24];  // 0xAC4
    unsigned int u32_ADC;  // 0xADC
    char __pad_AE0[64];  // 0xAE0
    unsigned int u32_B20;  // 0xB20
    char __pad_B24[24];  // 0xB24
    unsigned int u32_B3C;  // 0xB3C
    char __pad_B40[24];  // 0xB40
    unsigned int u32_B58;  // 0xB58
    char __pad_B5C[24];  // 0xB5C
    unsigned int u32_B74;  // 0xB74
    char __pad_B78[24];  // 0xB78
    unsigned int u32_B90;  // 0xB90
    char __pad_B94[24];  // 0xB94
    unsigned int u32_BAC;  // 0xBAC
    unsigned int u32_BB0;  // 0xBB0
    unsigned int u32_BB4;  // 0xBB4
    unsigned int u32_BB8;  // 0xBB8
    unsigned int u32_BBC;  // 0xBBC
    unsigned int u32_BC0;  // 0xBC0
    char __pad_BC4[24];  // 0xBC4
    unsigned int u32_BDC;  // 0xBDC
    unsigned int u32_BE0;  // 0xBE0
    unsigned int u32_BE4;  // 0xBE4
    char __pad_BE8[28];  // 0xBE8
    unsigned int u32_C04;  // 0xC04
    char __pad_C08[52];  // 0xC08
    unsigned int u32_C3C;  // 0xC3C
    char __pad_C40[52];  // 0xC40
    unsigned int u32_C74;  // 0xC74
    char __pad_C78[52];  // 0xC78
    unsigned int u32_CAC;  // 0xCAC
    char __pad_CB0[52];  // 0xCB0
    unsigned int u32_CE4;  // 0xCE4
    char __pad_CE8[24];  // 0xCE8
    unsigned int u32_D00;  // 0xD00
    char __pad_D04[24];  // 0xD04
    unsigned int u32_D1C;  // 0xD1C
    char __pad_D20[24];  // 0xD20
    unsigned int u32_D38;  // 0xD38
    char __pad_D3C[28];  // 0xD3C
    unsigned int u32_D58;  // 0xD58
    unsigned int u32_D5C;  // 0xD5C
    unsigned int u32_D60;  // 0xD60
    char __pad_D64[168];  // 0xD64
    unsigned int u32_E0C;  // 0xE0C
    unsigned int u32_E10;  // 0xE10
    char __pad_E14[4];  // 0xE14
    unsigned int u32_E18;  // 0xE18
    char __pad_E1C[336];  // 0xE1C
    unsigned int u32_F6C;  // 0xF6C
    unsigned int u32_F70;  // 0xF70
    unsigned int u32_F74;  // 0xF74
    unsigned int u32_F78;  // 0xF78
    unsigned int u32_F7C;  // 0xF7C
    unsigned int u32_F80;  // 0xF80
    unsigned int u32_F84;  // 0xF84
    unsigned int u32_F88;  // 0xF88
    unsigned int u32_F8C;  // 0xF8C
    unsigned int u32_F90;  // 0xF90
    unsigned int u32_F94;  // 0xF94
    unsigned int u32_F98;  // 0xF98
    unsigned int u32_F9C;  // 0xF9C
    unsigned int u32_FA0;  // 0xFA0
    unsigned int u32_FA4;  // 0xFA4
    unsigned int u32_FA8;  // 0xFA8
    unsigned int u32_FAC;  // 0xFAC
    unsigned int u32_FB0;  // 0xFB0
    unsigned int u32_FB4;  // 0xFB4
    unsigned int u32_FB8;  // 0xFB8
    unsigned int u32_FBC;  // 0xFBC
    unsigned int u32_FC0;  // 0xFC0
    unsigned int u32_FC4;  // 0xFC4
    unsigned int u32_FC8;  // 0xFC8
    char __pad_FCC[16];  // 0xFCC
    unsigned int u32_FDC;  // 0xFDC
    char __pad_FE0[16];  // 0xFE0
    unsigned int u32_FF0;  // 0xFF0
    unsigned int u32_FF4;  // 0xFF4
    unsigned int u32_FF8;  // 0xFF8
    char __pad_FFC[28];  // 0xFFC
    unsigned int u32_1018;  // 0x1018
    unsigned int u32_101C;  // 0x101C
    unsigned int u32_1020;  // 0x1020
    unsigned int u32_1024;  // 0x1024
    unsigned int u32_1028;  // 0x1028
    unsigned int u32_102C;  // 0x102C
    unsigned int u32_1030;  // 0x1030
    unsigned int u32_1034;  // 0x1034
    unsigned int u32_1038;  // 0x1038
    char __pad_103C[268];  // 0x103C
    unsigned int u32_1148;  // 0x1148
    char __pad_114C[816];  // 0x114C
    unsigned int u32_147C;  // 0x147C
    char __pad_1480[820];  // 0x1480
    unsigned int u32_17B4;  // 0x17B4
    char __pad_17B8[60];  // 0x17B8
    unsigned int u32_17F4;  // 0x17F4
    char __pad_17F8[60];  // 0x17F8
    unsigned int u32_1834;  // 0x1834
    char __pad_1838[56];  // 0x1838
    unsigned int u32_1870;  // 0x1870
    char __pad_1874[3748];  // 0x1874
    unsigned int u32_2718;  // 0x2718
    unsigned int u32_271C;  // 0x271C
    unsigned int u32_2720;  // 0x2720
    unsigned int u32_2724;  // 0x2724
    unsigned int u32_2728;  // 0x2728
    unsigned int u32_272C;  // 0x272C
    unsigned int u32_2730;  // 0x2730
    unsigned char u8_2734;  // 0x2734
    char __pad_2735[3];  // 0x2735
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int GetExitCell(int pThis, unsigned int *a2, unsigned int *a3);
    static int ClearTargetRef(UnitClass *pThis, int a2);
    int ProcessIdleOrders();
int Construct(int a2, LPVOID ppv, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    void ** Create(void *a2, unsigned int *a3, int a4, void *a1 = 0);
};

} // namespace gamemd
