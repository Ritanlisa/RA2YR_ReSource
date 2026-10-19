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
    unsigned int ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    void* nextObject;  // 0x30
    TagClass* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    IUnknown* health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    void* spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    char inLimbo[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    char isAliveFlag[1];  // 0x90
    char alignmentPadding91[3];  // 0x91
    void* lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4
    bool missionQueued;  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    int missionStatus;  // 0xBC
    char missionStartTime[4];  // 0xC0
    unsigned int missionData;  // 0xC4
    int missionTimer[3];  // 0xC8
    int lastCommands[3];  // 0xD4
    int radioLinks[4];  // 0xE0
    int flashing[2];  // 0xF0
    char radioContact[28];  // 0xF8
    int passengers[2];  // 0x114
    int transporter;  // 0x11C
    int turretChargeTimer_d;  // 0x120
    int currentTurretNumber_d;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    unsigned int __pad_12C;  // 0x12C
    int deployAnim_d;  // 0x130
    unsigned char inAirFlag_d;  // 0x134
    char alignmentPadding139[3];  // 0x135
    int radioQueueCount;  // 0x138
    int currentRank;  // 0x13C
    int gattlingStage;  // 0x140
    int gattlingValue;  // 0x144
    int ammoReloadTimer;  // 0x148
    int initialOwner;  // 0x14C
    int veterancy;  // 0x150
    int alignmentPadding154;  // 0x154
    int armorMultiplier[2];  // 0x158
    double firepowerMultiplier;  // 0x160
    char idleActionTimer[12];  // 0x168
    int radarFlashTimer[3];  // 0x174
    int targetingTimer[3];  // 0x180
    char __pad_18C[4];  // 0x18C
    int ironCurtainTimer[3];  // 0x190
    int ironTintTimer[3];  // 0x19C
    char ironTintStage[4];  // 0x1A8
    int airstrikeTimer[3];  // 0x1AC
    char airstrikeTintTimer[12];  // 0x1B8
    unsigned int airstrikeTintStage;  // 0x1C4
    unsigned int forceShielded;  // 0x1C8
    void* drainTarget;  // 0x1CC
    TechnoClass* drainTarget_d;  // 0x1D0
    int drainAnim;  // 0x1D4
    char isDisguisedFlag[1];  // 0x1D8
    char __pad_1D9[3];  // 0x1D9
    int disguiseCreationFrame;  // 0x1DC
    int infantryBlinkTimer[3];  // 0x1E0
    int disguiseBlinkTimer[3];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char q1F9[3];  // 0x1F9
    char __pad_1FC[12];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int __pad_20C;  // 0x20C
    int displayProductionTo;  // 0x210
    int controlGroup;  // 0x214
    AbstractClass* Owner;  // 0x218
    HouseClass * owner;  // 0x21C
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
    char gapRadius[4];  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    char q27D[3];  // 0x27D
    int owningHouseIndex0;  // 0x280
    int isBeingWarpedOut_d;  // 0x284
    char temporalUsing_d[12];  // 0x288
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
    AbstractClass* __pad_2B4;  // 0x2B4
    int lastTarget;  // 0x2B8
    int captureManager;  // 0x2BC
    int mindControlledBy;  // 0x2C0
    char mindControlledBy_a_unit[1];  // 0x2C4
    char q2C5[3];  // 0x2C5
    int mindControlRingAnim;  // 0x2C8
    int mindControlledBy_house;  // 0x2CC
    int spawnManager;  // 0x2D0
    int spawnOwner;  // 0x2D4
    int slaveManager;  // 0x2D8
    int slaveOwner;  // 0x2DC
    int originalOwnerHouse;  // 0x2E0
    int bunkerLinkedUnit;  // 0x2E4
    unsigned int __pad_2E8;  // 0x2E8
    int diskLaserTimer[3];  // 0x2EC
    int diskLaserChargeState;  // 0x2F8
    int ammo;  // 0x2FC
    int unitValue;  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    ParticleSystemClass* sparkParticles;  // 0x308
    int ambientParticles;  // 0x30C
    int ammo_d;  // 0x310
    unsigned int __pad_314;  // 0x314
    int unk1Particles;  // 0x318
    char __pad_31C[1];  // 0x31C
    char __pad_31D[3];  // 0x31D
    int ambientParticles_d;  // 0x320
    int damageParticles_2;  // 0x324
    unsigned int railgunParticles_2;  // 0x328
    int auxParticles1;  // 0x32C
    TeamClass* auxParticles2;  // 0x330
    int firingParticles;  // 0x334
    int waveEffect_d;  // 0x338
    unsigned int tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    float tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    int hijackerInfantryType;  // 0x34C
    int storedTiberium[4];  // 0x350
    int tiberiumCollectionState;  // 0x360
    int unloadTimer[3];  // 0x364
    char barrelFacing[24];  // 0x370
    char primaryFacing[24];  // 0x388
    char secondaryFacing[24];  // 0x3A0
    char currentBurstIndex_d[4];  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isSinking_d;  // 0x3CD
    bool __pad_3CE;  // 0x3CE
    char isReceivingDamageEffect[1];  // 0x3CF
    bool isUseless;  // 0x3D0
    unsigned char __pad_3D1;  // 0x3D1
    char isCloakableFlag[1];  // 0x3D2
    char isPrimaryFactory[1];  // 0x3D3
    bool isALoaner;  // 0x3D4
    bool __pad_3D5;  // 0x3D5
    char __pad_3D6[2];  // 0x3D6
    char turretRecoil_d[32];  // 0x3D8
    char barrelRecoil[32];  // 0x3F8
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    char isDiscoveredByCurrentPlayer[1];  // 0x41B
    bool isDiscoveredByComputer_d;  // 0x41C
    unsigned char __pad_41D;  // 0x41D
    char isUnderCursor[1];  // 0x41E
    char isCommandLineTarget[1];  // 0x41F
    char sightRangeBonus;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool __pad_422;  // 0x422
    bool isRadarTracked_d;  // 0x423
    bool isOnCarryall;  // 0x424
    bool __pad_425;  // 0x425
    char wasAlreadyCrashing[1];  // 0x426
    char isBeingManipulated[1];  // 0x427
    TechnoClass* manipulatedByUnit_d;  // 0x428
    HouseClass* chronoWarpedByHouse_d;  // 0x42C
    bool isChronoImmuneFlag_d;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    unsigned char alignmentPadding433;  // 0x433
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed_d;  // 0x439
    unsigned char __pad_43A;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
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
    TechnoClass* queueUpToEnter;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    int FootClass_field_520;  // 0x520
    unsigned short FootClass_field_524;  // 0x524
    short FootClass_field_526;  // 0x526
    unsigned short FootClass_field_528;  // 0x528
    char FootClass_field_52A[2];  // 0x52A
    char FootClass_field_52C[4];  // 0x52C
    ILocomotion* FootClass_field_530;  // 0x530
    ILocomotion* FootClass_field_534;  // 0x534
    int FootClass_field_538;  // 0x538
    bool FootClass_field_53C;  // 0x53C
    char m_padding_53D[3];  // 0x53D
    IUnknown* FootClass_field_540;  // 0x540
    char audioController7[20];  // 0x544
    int FootClass_field_558;  // 0x558
    int FootClass_field_55C;  // 0x55C
    int FootClass_field_560;  // 0x560
    void* currentJumpjetMapCoords;  // 0x564
    char FootClass_field_568[12];  // 0x568
    unsigned int unused574;  // 0x574
    unsigned long long FootClass_field_578;  // 0x578
    char FootClass_field_580[8];  // 0x580
    int unknownAbstractArray588;  // 0x588
    char __pad_58C[4];  // 0x58C
    AbstractClass* q590;  // 0x590
    char __pad_594[4];  // 0x594
    unsigned int q598;  // 0x598
    unsigned int q59C;  // 0x59C
    int FootClass_field_5A0;  // 0x5A0
    int FootClass_field_5A4;  // 0x5A4
    int FootClass_field_5A8;  // 0x5A8
    void* FootClass_DVC_5AC;  // 0x5AC
    char __pad_5B0[4];  // 0x5B0
    AbstractClass* q5B4;  // 0x5B4
    char __pad_5B8[4];  // 0x5B8
    AbstractClass* q5BC;  // 0x5BC
    unsigned int q5C0;  // 0x5C0
    int FootClass_field_5C4;  // 0x5C4
    void* FootClass_field_5C8;  // 0x5C8
    int FootClass_field_5CC;  // 0x5CC
    bool FootClass_field_5D0;  // 0x5D0
    bool FootClass_field_bool_5D1;  // 0x5D1
    char m_padding_5D2[2];  // 0x5D2
    int team;  // 0x5D4
    void* nextTeamMember;  // 0x5D8
    void* FootClass_field_5DC;  // 0x5DC
    char pathDirections[96];  // 0x5E0
    char FootClass_field_640[12];  // 0x640
    int FootClass_field_64C;  // 0x64C
    char FootClass_field_650[12];  // 0x650
    char FootClass_field_65C[12];  // 0x65C
    char FootClass_field_668[12];  // 0x668
    ILocomotion* locomotor;  // 0x674
    char Locomotor_ptr[12];  // 0x678
    unsigned char FootClass_field_684;  // 0x684
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
    unsigned char __pad_692;  // 0x692
    char __pad_693[1];  // 0x693
    int FootClass_field_694;  // 0x694
    int FootClass_field_698;  // 0x698
    int parasiteImUsing;  // 0x69C
    char FootClass_field_6A0[12];  // 0x6A0
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
    char FootClass_field_6B9[3];  // 0x6B9
    unsigned int FootClass_field_6BC;  // 0x6BC
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static unsigned int FindAITarget(int* p0);  // x4:signals@0x4d6aa0
    static unsigned int HandleCursorWithCheck(int16_t* p0, char p1, char p2);  // x4:signals@0x4ddde0
    static unsigned int OverrideMission_SyncLog(int p0, int p1, int p2);  // x4:signals@0x4d8f40
    static unsigned int ValidateMove(int p0, int* p1, char p2);  // x4:signals@0x4d74e0
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
    char TeamClass_CheckCohesion(double a2);  // plateau: def-aligned C2039/C2660
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
