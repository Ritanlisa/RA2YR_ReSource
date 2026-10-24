// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class PerFrameUpdate;  // G42.36 fwd supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct TemporalClass;  // fix_fwd_type_supply
struct CaptureManagerClass;  // fix_fwd_type_supply
struct SpawnManagerClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct TeamClass;  // fix_fwd_type_supply
struct RadBeam;  // fix_fwd_type_supply
struct BuildingTypeClass;  // fix_fwd_type_supply
struct ILocomotion;  // fix_fwd_type_supply
struct LocomotionClass;  // fix_fwd_type_supply
struct InfantryTypeClass;  // fix_fwd_type_supply

struct InfantryClass {
    unsigned int ptr_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    void * uniqueId;  // 0x10
    void * abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int needsSave;  // 0x20
    void * objectTypeFlags;  // 0x24
    void * owningHouseIndex;  // 0x28
    void * fallRate;  // 0x2C
    ObjectClass * nextObject;  // 0x30
    void * attachedTag;  // 0x34
    BombClass * attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    char isOnMap[1];  // 0x74
    char alignmentPadding75[3];  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    char inLimbo[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass * parachute;  // 0x88
    char onBridge[1];  // 0x8C
    char isFallingDown[1];  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    BuildingTypeClass * lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    int location[3];  // 0x9C
    void * lineTrailer;  // 0xA8
    void * currentMission;  // 0xAC
    BuildingTypeClass * suspendedMission;  // 0xB0
    void * queuedMission;  // 0xB4
    bool missionQueued;  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    char missionStatus[4];  // 0xBC
    int missionStartTime;  // 0xC0
    IUnknown * missionData;  // 0xC4
    int missionTimer[3];  // 0xC8
    int lastCommands[3];  // 0xD4
    int radioLinks[4];  // 0xE0
    char flashing[8];  // 0xF0
    char radioContact[28];  // 0xF8
    char passengers[8];  // 0x114
    TechnoClass * transporter;  // 0x11C
    int turretChargeTimer;  // 0x120
    void * currentTurretNumber;  // 0x124
    int secondaryTurretIndex;  // 0x128
    AnimClass * behindAnim;  // 0x12C
    AnimClass * deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    char alignmentPadding139[3];  // 0x135
    int radioQueueCount;  // 0x138
    char currentRank[4];  // 0x13C
    void * gattlingStage;  // 0x140
    int gattlingValue;  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass * initialOwner;  // 0x14C
    void * veterancy;  // 0x150
    unsigned int alignmentPadding154;  // 0x154
    double armorMultiplier;  // 0x158
    double firepowerMultiplier;  // 0x160
    int idleActionTimer[3];  // 0x168
    int radarFlashTimer[3];  // 0x174
    char targetingTimer[12];  // 0x180
    unsigned char __pad_18C;  // 0x18C
    char __pad_18D[3];  // 0x18D
    int ironCurtainTimer[3];  // 0x190
    int ironTintTimer[3];  // 0x19C
    int ironTintStage;  // 0x1A8
    int airstrikeTimer[3];  // 0x1AC
    int airstrikeTintTimer[3];  // 0x1B8
    char __pad_1C4[4];  // 0x1C4
    unsigned int q1C8;  // 0x1C8
    int drainTarget;  // 0x1CC
    int drainingMe;  // 0x1D0
    int drainAnim;  // 0x1D4
    char isDisguisedFlag[1];  // 0x1D8
    char __pad_1D9[3];  // 0x1D9
    unsigned int disguiseCreationFrame;  // 0x1DC
    int infantryBlinkTimer[3];  // 0x1E0
    int disguiseBlinkTimer[3];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char q1F9[3];  // 0x1F9
    int reloadTimer[3];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int __pad_214;  // 0x214
    AbstractClass * focus;  // 0x218
    HouseClass * owner;  // 0x21C
    unsigned int cloakState;  // 0x220
    int cloakProgress[7];  // 0x224
    int cloakDelayTimer[3];  // 0x240
    float warpFactor;  // 0x24C
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
    bool isWarpingOut;  // 0x271
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
    unsigned int isBerserk_duration_left;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    char q2A5[3];  // 0x2A5
    int rockerLinkedUnit;  // 0x2A8
    int locomotorTarget;  // 0x2AC
    FootClass * locomotorSource;  // 0x2B0
    AbstractClass * target;  // 0x2B4
    int lastTarget;  // 0x2B8
    CaptureManagerClass * facing;  // 0x2BC
    TechnoClass * turretFacing;  // 0x2C0
    char mindControlledBy_a_unit[1];  // 0x2C4
    char q2C5[3];  // 0x2C5
    AnimClass * target_laser_timer;  // 0x2C8
    HouseClass * mindControlledBy_house;  // 0x2CC
    unsigned int __pad_2D0;  // 0x2D0
    TechnoClass * targetLaserOpacity;  // 0x2D4
    void * isCountedAsOwned;  // 0x2D8
    TechnoClass * slaveOwner;  // 0x2DC
    HouseClass * isSpawned;  // 0x2E0
    int bunkerLinkedUnit;  // 0x2E4
    unsigned int __pad_2E8;  // 0x2E8
    int diskLaserTimer[3];  // 0x2EC
    int diskLaserChargeState;  // 0x2F8
    int ammo;  // 0x2FC
    unsigned int __pad_300;  // 0x300
    int fireParticles;  // 0x304
    int sparkParticles;  // 0x308
    int ambientParticles;  // 0x30C
    int damageParticles;  // 0x310
    ParticleSystemClass * isTurretLocked;  // 0x314
    int unk1Particles;  // 0x318
    char __pad_31C[1];  // 0x31C
    unsigned char isRecruitableByAlly;  // 0x31D
    unsigned char isRecruitableByEnemy;  // 0x31E
    unsigned char isRadarTracked;  // 0x31F
    int ambientParticles_2;  // 0x320
    int damageParticles_2;  // 0x324
    int railgunParticles_2;  // 0x328
    int auxParticles1;  // 0x32C
    int auxParticles2;  // 0x330
    int firingParticles;  // 0x334
    int waveEffect;  // 0x338
    void* __pad_33C;  // 0x33C
    int tiltForwardsAngle;  // 0x340
    int tiltSidewaysRate;  // 0x344
    int tiltForwardsRate;  // 0x348
    int hijackerInfantryType;  // 0x34C
    int storedTiberium[4];  // 0x350
    int tiberiumCollectionState;  // 0x360
    int unloadTimer[3];  // 0x364
    char barrelFacing_d[24];  // 0x370
    char primaryFacing[24];  // 0x388
    char secondaryFacing[24];  // 0x3A0
    unsigned int __pad_3B8;  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    char countedAsOwned[1];  // 0x3CC
    unsigned char __pad_3CD;  // 0x3CD
    char wasAlreadySinking[1];  // 0x3CE
    char isReceivingDamageEffect[1];  // 0x3CF
    bool isUseless;  // 0x3D0
    unsigned char __pad_3D1;  // 0x3D1
    char isCloakableFlag[1];  // 0x3D2
    char isPrimaryFactory[1];  // 0x3D3
    bool isALoaner;  // 0x3D4
    bool __pad_3D5;  // 0x3D5
    char __pad_3D6[2];  // 0x3D6
    int turretRecoil[8];  // 0x3D8
    int barrelRecoil[8];  // 0x3F8
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    unsigned char __pad_41C;  // 0x41C
    char isSelectedByPlayer[1];  // 0x41D
    char isUnderCursor[1];  // 0x41E
    char isCommandLineTarget[1];  // 0x41F
    char sightRangeBonus_d;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool __pad_422;  // 0x422
    bool isRadarTracked_d;  // 0x423
    bool isOnCarryall_d;  // 0x424
    bool __pad_425;  // 0x425
    char wasAlreadyCrashing[1];  // 0x426
    char isBeingManipulated[1];  // 0x427
    TechnoClass * manipulatedByUnit_d;  // 0x428
    unsigned int __pad_42C;  // 0x42C
    bool isChronoImmuneFlag_d;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    unsigned int __pad_434;  // 0x434
    char isCountedAsOwned_special[1];  // 0x438
    bool isAbsorbed_d;  // 0x439
    unsigned char __pad_43A;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int __pad_43C;  // 0x43C
    int currentTargetThreatValues[6];  // 0x440
    char __pad_458[24];  // 0x458
    int attackedTargets[6];  // 0x470
    char turretRotateSoundController[20];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[20];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned char __pad_4BA;  // 0x4BA
    char __pad_4BB[1];  // 0x4BB
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned char __pad_4D6;  // 0x4D6
    char __pad_4D7[1];  // 0x4D7
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned char __pad_4FA;  // 0x4FA
    char __pad_4FB[1];  // 0x4FB
    unsigned int unknown_4FC;  // 0x4FC
    TechnoClass * queueUpToEnter;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam * firingRadBeam;  // 0x510
    void * planningToken;  // 0x514
    HouseClass * disguiseAsType;  // 0x518
    HouseClass * disguisedAsHouse;  // 0x51C
    void * FootClass_field_520;  // 0x520
    unsigned short FootClass_field_524;  // 0x524
    unsigned short FootClass_field_526;  // 0x526
    unsigned short FootClass_field_528;  // 0x528
    unsigned short FootClass_field_52A;  // 0x52A
    int16_t FootClass_field_52C;  // 0x52C
    int16_t FootClass_field_52E;  // 0x52E
    int FootClass_field_530;  // 0x530
    int FootClass_field_534;  // 0x534
    int FootClass_field_538;  // 0x538
    bool FootClass_field_53C;  // 0x53C
    char m_padding_53D[3];  // 0x53D
    int FootClass_field_540;  // 0x540
    int audioController7[5];  // 0x544
    int16_t FootClass_field_558;  // 0x558
    int16_t FootClass_field_55A;  // 0x55A
    int16_t FootClass_field_55C;  // 0x55C
    int16_t FootClass_field_55E;  // 0x55E
    unsigned short FootClass_field_560;  // 0x560
    int16_t FootClass_field_562;  // 0x562
    unsigned short FootClass_field_564;  // 0x564
    int16_t FootClass_field_566;  // 0x566
    unsigned int FootClass_field_568;  // 0x568
    int32_t FootClass_field_56C;  // 0x56C
    int32_t FootClass_field_570;  // 0x570
    int unused574;  // 0x574
    unsigned int FootClass_field_578;  // 0x578
    int32_t FootClass_field_57C;  // 0x57C
    unsigned int FootClass_field_580;  // 0x580
    float FootClass_field_584;  // 0x584
    int FootClass_DVC_588;  // 0x588
    unsigned char __pad_58C;  // 0x58C
    char __pad_58D[19];  // 0x58D
    char FootClass_field_5A0[4];  // 0x5A0
    int Archive;  // 0x5A4
    char FootClass_field_5A8[4];  // 0x5A8
    void * FootClass_DVC_5AC;  // 0x5AC
    int q_5B0;  // 0x5B0
    char __pad_5B4[8];  // 0x5B4
    unsigned int q5BC;  // 0x5BC
    char __pad_5C0[4];  // 0x5C0
    char FootClass_field_5C4[4];  // 0x5C4
    char FootClass_field_5C8[4];  // 0x5C8
    char FootClass_field_5CC[4];  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    char q5D1[1];  // 0x5D1
    char m_padding_5D2[2];  // 0x5D2
    int team;  // 0x5D4
    char FootClass_field_5D8[4];  // 0x5D8
    char FootClass_field_5DC[4];  // 0x5DC
    int pathDirections[24];  // 0x5E0
    unsigned int FootClass_field_640;  // 0x640
    int32_t FootClass_field_644;  // 0x644
    int32_t FootClass_field_648;  // 0x648
    char FootClass_field_64C[4];  // 0x64C
    int32_t FootClass_field_650;  // 0x650
    int32_t FootClass_field_654;  // 0x654
    int32_t FootClass_field_658;  // 0x658
    int32_t FootClass_field_65C;  // 0x65C
    int32_t FootClass_field_660;  // 0x660
    int32_t FootClass_field_664;  // 0x664
    unsigned int FootClass_field_668;  // 0x668
    int32_t FootClass_field_66C;  // 0x66C
    int32_t FootClass_field_670;  // 0x670
    ILocomotion * locomotor;  // 0x674
    char Locomotor_ptr[12];  // 0x678
    unsigned char vt_slot_684;  // 0x684
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
    int FootClass_field_694;  // 0x694
    int FootClass_field_698;  // 0x698
    void * FootClass_field_69C;  // 0x69C
    int32_t FootClass_field_6A0;  // 0x6A0
    int32_t FootClass_field_6A4;  // 0x6A4
    void * FootClass_bools_6A8;  // 0x6A8
    char FootClass_field_bool_6AC[1];  // 0x6AC
    char isAttackedByLocomotor;  // 0x6AD
    char isLetGoByLocomotor;  // 0x6AE
    char q6AF[1];  // 0x6AF
    bool FootClass_field_6B0;  // 0x6B0
    bool FootClass_field_6B1;  // 0x6B1
    bool FootClass_field_6B2;  // 0x6B2
    bool FootClass_field_6B3;  // 0x6B3
    bool FootClass_field_6B4;  // 0x6B4
    bool FootClass_field_6B5;  // 0x6B5
    bool FootClass_field_6B6;  // 0x6B6
    unsigned char FootClass_field_6B7;  // 0x6B7
    bool FootClass_field_6B8;  // 0x6B8
    bool FootClass_field_6B9;  // 0x6B9
    bool FootClass_field_6BA;  // 0x6BA
    bool FootClass_field_6BB;  // 0x6BB
    bool FootClass_field_6BC;  // 0x6BC
    bool FootClass_field_6BD;  // 0x6BD
    bool FootClass_field_6BE;  // 0x6BE
    bool FootClass_field_6BF;  // 0x6BF
    InfantryTypeClass * Type;  // 0x6C0
    void * SequenceAnim;  // 0x6C4
    char InfantryClass_field_timer_6C8[12];  // 0x6C8
    unsigned int PanicDurationLeft;  // 0x6D4
    bool PermanentBerzerk;  // 0x6D8
    bool Technician;  // 0x6D9
    bool InfantryClass_field_bool_6DA;  // 0x6DA
    bool Crawling;  // 0x6DB
    bool InfantryClass_field_bool_6DC;  // 0x6DC
    bool InfantryClass_field_bool_6DD;  // 0x6DD
    unsigned char __pad_6DE;  // 0x6DE
    char __pad_6DF[1];  // 0x6DF
    EBolt * InfantryClass_field_6E0;  // 0x6E0
    bool ShouldDeploy;  // 0x6E4
    unsigned char __pad_6E5;  // 0x6E5
    char __pad_6E6[2];  // 0x6E6
    int unknown_int_6E8;  // 0x6E8
    unsigned int unused_6EC;  // 0x6EC
    char __pad_6F0[1868];  // 0x6F0
    unsigned int u32_E3C;  // 0xE3C
    char __pad_E40[16];  // 0xE40
    unsigned int u32_E50;  // 0xE50
    unsigned int u32_E54;  // 0xE54
    unsigned int u32_E58;  // 0xE58
    char __pad_E5C[1];  // 0xE5C
    unsigned char u8_E5D;  // 0xE5D
    char __pad_E5E[14];  // 0xE5E
    unsigned int u32_E6C;  // 0xE6C
    unsigned int u32_E70;  // 0xE70
    unsigned int u32_E74;  // 0xE74
    char __pad_E78[1];  // 0xE78
    unsigned char u8_E79;  // 0xE79
    char __pad_E7A[14];  // 0xE7A
    unsigned int u32_E88;  // 0xE88
    unsigned int u32_E8C;  // 0xE8C
    unsigned int u32_E90;  // 0xE90
    char __pad_E94[1];  // 0xE94
    unsigned char u8_E95;  // 0xE95
    char __pad_E96[2];  // 0xE96
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int SlaveGiveMoney_RecordBalanceBefore(int aP1);
    static int SetMission(void *aP1);
    int ProcessDeploy(void ** a1);
    static int ScanTarget(int * a1);
    int SetField6();  // 0x5176A0 G42.33 b3 member-form sync
    void* Destruct(IUnknown * a1, AbstractClass * edx0);
    static int IsInBounds(InfantryClass * aP1);
     int Construct(int a2, int a3, IUnknown *ppv, void *a1 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);
    static int GetType(InfantryClass * aP1);
    void *  FindNearbyCell(int a2, void *a1 = 0);  // 0x418e20
    AnimClass * CanDeployAtCell(int16_t *a2, int16_t *a3, int a1, int a4);
    AnimClass * GetDeployWeaponIndex();
    AnimClass * FireAtTargetPos(int a2, int a3, int a4);
    bool CanEnterBuilding();
    int FindIdleAITarget();
    int PerFrameUpdate(int a2);
};

} // namespace gamemd
