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
#pragma pack(push, 1)  // X60: binary-packed layout
    char ptr_0[3];  // 0x0
    unsigned char u8_3;  // 0x3
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void * uniqueId;  // 0x10
    void * abstractFlags;  // 0x14
    void * nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    void * occupant;  // 0x24
    void * owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    IUnknown * nextObject;  // 0x30
    void * attachedTag;  // 0x34
    BombClass * attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    void * health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap[1];  // 0x74
    char alignmentPadding75[3];  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    char inLimbo[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    char isSelected[1];  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass * parachute;  // 0x88
    bool onBridge;  // 0x8C
    char isFallingDown[1];  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    void * lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    void * currentMission;  // 0xAC
    int suspendedMission;  // 0xB0
    void * queuedMission;  // 0xB4
    char missionQueued[1];  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    int missionStatus;  // 0xBC
    void * missionStartTime;  // 0xC0
    void * missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
    char lastCommands[12];  // 0xD4
    int radioLinks[4];  // 0xE0
    int flashing[2];  // 0xF0
    char animation_d[28];  // 0xF8
    int passengers[2];  // 0x114
    int transporter;  // 0x11C
    int turretChargeTimer_d;  // 0x120
    int currentTurretNumber_d;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    char __pad_12C[1];  // 0x12C
    unsigned char q12D;  // 0x12D
    char __pad_12E[2];  // 0x12E
    int deployAnim_d;  // 0x130
    unsigned char inAirFlag_d;  // 0x134
    char alignmentPadding139[3];  // 0x135
    int currentWeaponSlot;  // 0x138
    unsigned int __pad_13C;  // 0x13C
    int gattlingStage;  // 0x140
    int gattlingValue;  // 0x144
    int ammoReloadTimer;  // 0x148
    int initialOwner;  // 0x14C
    int veterancy;  // 0x150
    int alignmentPadding154;  // 0x154
    int armorMultiplier[2];  // 0x158
    unsigned long long armorMultiplier_d;  // 0x160
    char firepowerMultiplier_d[12];  // 0x168
    char radarFlashTimer[12];  // 0x174
    char targetingTimer[12];  // 0x180
    char __pad_18C[4];  // 0x18C
    int ironCurtainTimer[3];  // 0x190
    int ironTintTimer[3];  // 0x19C
    int ironTintStage;  // 0x1A8
    char airstrikeTimer[12];  // 0x1AC
    int airstrikeTintTimer[3];  // 0x1B8
    unsigned char airstrikeTintStage_d;  // 0x1C4
    char __pad_1C5[3];  // 0x1C5
    unsigned int forceShielded;  // 0x1C8
    TechnoClass * isDeactivated;  // 0x1CC
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
    int __pad_20C;  // 0x20C
    int displayProductionTo;  // 0x210
    int controlGroup;  // 0x214
    AbstractClass * Owner;  // 0x218
    DynamicVector * owner;  // 0x21C
    unsigned int owner_d;  // 0x220
    int cloakProgress[7];  // 0x224
    int cloakDelayTimer[3];  // 0x240
    int warpFactor;  // 0x24C
    char isChronosphereImmune[1];  // 0x250
    char alignmentPadding251[3];  // 0x251
    char lastSightCoords[12];  // 0x254
    int lastSightRange;  // 0x260
    int lastSightHeight;  // 0x264
    char gapSuperCharged[1];  // 0x268
    bool isGeneratingGap;  // 0x269
    char q26A[2];  // 0x26A
    void * gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass * temporalUsing;  // 0x274
    TemporalClass * temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    char q27D[1];  // 0x27D
    unsigned short alignmentPadding27E;  // 0x27E
    int gapRadius_d;  // 0x280
    int isBeingWarpedOut_d;  // 0x284
    char temporalUsing_d[12];  // 0x288
    void * airstrike;  // 0x294
    char isBerserk[1];  // 0x298
    char q299[3];  // 0x299
    int isBerserk_duration_left;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    char q2A5[3];  // 0x2A5
    void * rockerLinkedUnit;  // 0x2A8
    FootClass * isBerserk_d;  // 0x2AC
    int locomotorSource;  // 0x2B0
    void * target;  // 0x2B4
    char __pad_2B8[1];  // 0x2B8
    char alignmentPadding2A9[3];  // 0x2B9
    CaptureManagerClass * rockerLinkedUnit_d;  // 0x2BC
    FootClass * mindControlledBy;  // 0x2C0
    char mindControlledBy_a_unit[1];  // 0x2C4
    char q2C5[3];  // 0x2C5
    AnimClass * target_d;  // 0x2C8
    int mindControlledBy_house;  // 0x2CC
    int spawnManager;  // 0x2D0
    TechnoClass * mindControlledBy_d;  // 0x2D4
    SlaveManagerClass * mindControlledBy_a_unit_d;  // 0x2D8
    int slaveOwner;  // 0x2DC
    int originalOwnerHouse;  // 0x2E0
    int bunkerLinkedUnit;  // 0x2E4
    int pitchAngle;  // 0x2E8
    int diskLaserTimer[3];  // 0x2EC
    void * diskLaserChargeState;  // 0x2F8
    int ammo;  // 0x2FC
    int unitValue;  // 0x300
    ParticleSystemClass * fireParticles;  // 0x304
    ParticleSystemClass * sparkParticles;  // 0x308
    ParticleSystemClass * diskLaserChargeState_d;  // 0x30C
    int damageParticles;  // 0x310
    int railgunParticles;  // 0x314
    unsigned int __pad_318;  // 0x318
    char __pad_31C[4];  // 0x31C
    int ambientParticles_2;  // 0x320
    int damageParticles_2;  // 0x324
    int railgunParticles_2;  // 0x328
    ParticleSystemClass * auxParticles1;  // 0x32C
    ParticleSystemClass * auxParticles2;  // 0x330
    ParticleSystemClass * firingParticles;  // 0x334
    WaveClass * waveEffect;  // 0x338
    Float4 * tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    void * tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    char hijackerInfantryType[4];  // 0x34C
    char storedTiberium[16];  // 0x350
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    char barrelFacing[24];  // 0x370
    char primaryFacing[24];  // 0x388
    char secondaryFacing[24];  // 0x3A0
    int currentBurstIndex_d;  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isSinking_d;  // 0x3CD
    bool wasAlreadySinking;  // 0x3CE
    bool isReceivingDamageEffect_d;  // 0x3CF
    bool isUseless;  // 0x3D0
    bool hasBeenAttacked_d;  // 0x3D1
    char isCloakableFlag[1];  // 0x3D2
    bool isPrimaryFactory_d;  // 0x3D3
    bool isALoaner;  // 0x3D4
    unsigned char isInPlayfield_d;  // 0x3D5
    unsigned short __pad_3D6;  // 0x3D6
    char turretRecoil_d[32];  // 0x3D8
    char barrelRecoil[32];  // 0x3F8
    char isTether[1];  // 0x418
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
    TechnoClass * manipulatedByUnit_d;  // 0x428
    HouseClass * chronoWarpedByHouse_d;  // 0x42C
    bool isChronoImmuneFlag_d;  // 0x430
    bool isMouseHovering;  // 0x431
    char shouldBeReselectOnUnlimbo[1];  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    TeamClass * previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed;  // 0x439
    bool isGrindingInProgress;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
    int currentTargetThreatValues[6];  // 0x440
    int currentTargets[6];  // 0x458
    int attackedTargets[6];  // 0x470
    char turretRotateSoundController[20];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    int gattlingSoundController[5];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned short __pad_4BA;  // 0x4BA
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned short __pad_4D6;  // 0x4D6
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned short __pad_4FA;  // 0x4FA
    unsigned int unknown_4FC;  // 0x4FC
    TechnoClass * queueUpToEnter;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam * firingRadBeam;  // 0x510
    void * planningToken;  // 0x514
    ObjectTypeClass * disguiseAsType;  // 0x518
    HouseClass * disguisedAsHouse;  // 0x51C
    BuildingTypeClass * Type;  // 0x520
    FactoryClass * Factory;  // 0x524
    char C4Timer[12];  // 0x528
    int BuildingClass_field_int_534;  // 0x534
    int BuildingClass_field_int_538;  // 0x538
    unsigned int OwnerCountryIndex;  // 0x53C
    InfantryClass * C4AppliedBy;  // 0x540
    unsigned int BuildingClass_field_544;  // 0x544
    AnimClass * FirestormAnim;  // 0x548
    AnimClass * PsiWarnAnim;  // 0x54C
    char BuildingClass_field_timer_550[12];  // 0x550
    int Anims[21];  // 0x55C
    char AnimStates[21];  // 0x5B0
    char __pad_5C5[3];  // 0x5C5
    int DamageFireAnims[8];  // 0x5C8
    bool RequiresDamageFires;  // 0x5E8
    char __pad_5E9[3];  // 0x5E9
    int Upgrades[3];  // 0x5EC
    int FiringSWType;  // 0x5F8
    unsigned int BuildingClass_field_5FC;  // 0x5FC
    BuildingLightClass * Spotlight;  // 0x600
    char GateTimer[16];  // 0x604
    LightSourceClass * LightSource;  // 0x614
    unsigned int LaserFenceFrame;  // 0x618
    unsigned int FirestormWallFrame;  // 0x61C
    char RepairProgress[8];  // 0x620
    char __pad_628[8];  // 0x628
    unsigned short u32_630;  // 0x630
    unsigned short vt_slot_632;  // 0x632
    unsigned int u32_634;  // 0x634
    unsigned int u32_638;  // 0x638
    int BuildingClass_field_rect_63C[4];  // 0x63C
    char BuildingClass_field_coord_64C[12];  // 0x64C
    int BuildingClass_field_int_658;  // 0x658
    unsigned int BuildingClass_field_65C;  // 0x65C
    bool HasPower;  // 0x660
    bool IsOverpowered;  // 0x661
    bool RegisteredAsPoweredUnitSource;  // 0x662
    unsigned char __pad_663;  // 0x663
    unsigned int SupportingPrisms;  // 0x664
    bool HasExtraPowerBonus;  // 0x668
    bool HasExtraPowerDrain;  // 0x669
    unsigned short __pad_66A;  // 0x66A
    void * Overpowerers;  // 0x66C
    void * Occupants;  // 0x670
    int FiringOccupantIndex;  // 0x674
    char Audio7[20];  // 0x678
    char Audio8[20];  // 0x68C
    char Audio7_d[1];  // 0x6A0
    bool ShowRealName;  // 0x6A1
    bool BeingProduced;  // 0x6A2
    bool ShouldRebuild;  // 0x6A3
    bool HasEngineer;  // 0x6A4
    char __pad_6A5[3];  // 0x6A5
    char CashProductionTimer[12];  // 0x6A8
    unsigned int Audio8_2;  // 0x6B4
    char __pad_6B8[8];  // 0x6B8
    UnitTypeClass * q6C0;  // 0x6C0
    UnitTypeClass * q6C4;  // 0x6C4
    bool WasOnline;  // 0x6C8
    unsigned char Tactical_6C9;  // 0x6C9
    unsigned char Tactical_6CA;  // 0x6CA
    unsigned char Tactical_6CB;  // 0x6CB
    bool u8_6CC;  // 0x6CC
    char __pad_6CD[3];  // 0x6CD
    unsigned char u32_6D0;  // 0x6D0
    unsigned char u8_6D1;  // 0x6D1
    char __pad_6D2[6];  // 0x6D2
    unsigned int u32_6D8;  // 0x6D8
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
    unsigned short __pad_6EE;  // 0x6EE
    unsigned int StorageFilledSlots;  // 0x6F0
    TechnoTypeClass * SecretProduction;  // 0x6F4
    char ColorAdd[3];  // 0x6F8
    unsigned char __pad_6FB;  // 0x6FB
    int BuildingClass_field_int_6FC;  // 0x6FC
    char BuildingClass_field_short_700[2];  // 0x700
    unsigned char UpgradeLevel;  // 0x702
    char GateStage;  // 0x703
    void * PrismStage;  // 0x704
    char PrismTargetCoords[12];  // 0x708
    unsigned int DelayBeforeFiring;  // 0x714
    int BunkerState;  // 0x718
    char ProductionTimer[4];  // 0x71C
    bool PlacementAllowed;  // 0x720
    unsigned char ProductionBlocked;  // 0x721
    unsigned char padProd1;  // 0x722
    unsigned char padProd2;  // 0x723
    int ProductionAccum;  // 0x724
    int ProductionFrame;  // 0x728
    char ProductionRate[4];  // 0x72C
    int ProductionSpeed;  // 0x730
    double CostAccumulator;  // 0x734
    unsigned char PipelineStep;  // 0x73C
    char padProd3[3];  // 0x73D
    char __pad_740[344];  // 0x740
    unsigned int u32_898;  // 0x898
    char __pad_89C[24];  // 0x89C
    unsigned int u32_8B4;  // 0x8B4
    char __pad_8B8[1050];  // 0x8B8
    unsigned char u8_CD2;  // 0xCD2
    char __pad_CD3[221];  // 0xCD3
    unsigned int u32_DB0;  // 0xDB0
    char __pad_DB4[296];  // 0xDB4
    unsigned int u32_EDC;  // 0xEDC
    char __pad_EE0[16];  // 0xEE0
    unsigned int u32_EF0;  // 0xEF0
    char __pad_EF4[16];  // 0xEF4
    unsigned int u32_F04;  // 0xF04
    unsigned int u32_F08;  // 0xF08
    char __pad_F0C[640];  // 0xF0C
    unsigned int u32_118C;  // 0x118C
    char __pad_1190[24];  // 0x1190
    unsigned int u32_11A8;  // 0x11A8
    char __pad_11AC[4];  // 0x11AC
    unsigned char u8_11B0;  // 0x11B0
    unsigned char u8_11B1;  // 0x11B1
    unsigned char u8_11B2;  // 0x11B2
    unsigned char u8_11B3;  // 0x11B3
    unsigned char u8_11B4;  // 0x11B4
    char __pad_11B5[103];  // 0x11B5
    unsigned int u32_121C;  // 0x121C
    char __pad_1220[8];  // 0x1220
    unsigned int u32_1228;  // 0x1228
    unsigned int u32_122C;  // 0x122C
    char __pad_1230[4];  // 0x1230
    unsigned int u32_1234;  // 0x1234
    char __pad_1238[32];  // 0x1238
    unsigned int u32_1258;  // 0x1258
    char __pad_125C[637];  // 0x125C
    unsigned char u8_14D9;  // 0x14D9
    char __pad_14DA[26];  // 0x14DA
    unsigned int u32_14F4;  // 0x14F4
    char __pad_14F8[433];  // 0x14F8
    unsigned char u8_16A9;  // 0x16A9
    unsigned char u8_16AA;  // 0x16AA
    unsigned char u8_16AB;  // 0x16AB
    char __pad_16AC[26];  // 0x16AC
    unsigned char u8_16C6;  // 0x16C6
    unsigned char u8_16C7;  // 0x16C7
    unsigned char u8_16C8;  // 0x16C8
    char __pad_16C9[62];  // 0x16C9
    unsigned char u8_1707;  // 0x1707
    char __pad_1708[96];  // 0x1708
    unsigned char u8_1768;  // 0x1768
    char __pad_1769[15655];  // 0x1769
    unsigned int u32_5490;  // 0x5490
    unsigned short u16_5494;  // 0x5494
    unsigned short u16_5496;  // 0x5496
    unsigned int u32_5498;  // 0x5498
// --- flat members (BEGIN) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
// --- flat members (END) ---
    static int ClearFactoryData(void *aP1);
    static int ClearOccupancyData(void *aP1);
    static void DrawVisible(void *aP1, void *a2, void *aP3);
    static int SquaredDistanceTo(unsigned int aP1);
    static int GetPowerFrame(void *aP1);
    static unsigned int CheckBuildability(BuildingClass *p_this);  // x4:ida@0x63ac70
    static unsigned int Deploy(unsigned int p0, int p1, int p2);  // x4:signals@0x62a4a0
    static unsigned int FreeUpgradeQueue();  // x4:empty@0x722390
    static unsigned int FreeUpgradeQueue2();  // x4:empty@0x722e50
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
    static int UpdateDamageAnim(void *a1 = 0);  // 0x459470
    static void RemoveLimpet(void *a1 = 0);  // 0x4593a0
    static void  AnimateUnloadUnits(int a2, void *a1 = 0);  // 0x4585c0
    void UpdateAnimationSlots();  // 0x4547c0
    void ProcessAnimationStates();  // 0x4545d0
    char  ValidatePath(unsigned short * a2, int a3);  // 0x716150
    int  TogglePower2(int a2, void *a1 = 0);  // 0x4ac8c0
    int ProcessUpgradeEffects(void *a1 = 0);  // 0x726400
    int  TogglePower(int a2, void *a1 = 0);  // 0x4ac660
    static void VisualizePlacement(void *a1 = 0);  // 0x485af0
    int CheckAdjacentCells(void *a1 = 0);  // 0x485460
    int  SetSlot(int a2, int a3);  // 0x717890
    static int GetSellPriority(void *a1 = 0);
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
    static int Draw_0(int* p0, int* p1);  // x4:signals@0x47f6a0
    static int CheckBridge(int p0, void* p1);  // x4:signals@0x6b0880
    static int GetDrawColor(int p_this);  // x4:ida@0x635830
    static int DrawActionLines(BuildingClass *p_this);  // x4:ida@0x63be60
#pragma pack(pop)
};

} // namespace gamemd
