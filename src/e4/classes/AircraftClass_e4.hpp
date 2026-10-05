// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct TagClass;  // fix_fwd_type_supply
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct LineTrail;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct ConnectionPointClass;  // fix_fwd_type_supply
struct TemporalClass;  // fix_fwd_type_supply
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
struct AircraftTypeClass;  // fix_fwd_type_supply

struct AircraftClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
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
    char ambientSoundController[20];  // 0x3C
    unsigned int q040;  // 0x40
    char q044[4];  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    char customSound_controller[20];  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned short alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A4;  // 0xA4
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    void* suspendedMission;  // 0xB0
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    char missionTimer[12];  // 0xC8
    unsigned int q0D0;  // 0xD0
    unsigned char lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int radioLinks;  // 0xE0
    unsigned long long flashing;  // 0xE4
    unsigned long long animation;  // 0xEC
    char q0F0[8];  // 0xF0
    unsigned long long passengers;  // 0xF4
    unsigned int transporter;  // 0xFC
    unsigned int turretChargeTimer;  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int secondaryTurretIndex;  // 0x108
    unsigned int behindAnim;  // 0x10C
    unsigned int deployAnim;  // 0x110
    char inAirFlag[1];  // 0x114
    char q128[4];  // 0x128
    AnimClass* q12C;  // 0x12C
    AnimClass* q130;  // 0x130
    unsigned int currentWeaponSlot;  // 0x13C
    unsigned int currentRank;  // 0x140
    unsigned int gattlingStage;  // 0x144
    unsigned int gattlingValue;  // 0x148
    HouseClass* ammoReloadTimer;  // 0x14C
    char initialOwner[4];  // 0x150
    unsigned int veterancy;  // 0x154
    unsigned long long armorMultiplier;  // 0x15C
    double firepowerMultiplier;  // 0x160
    unsigned long long q164;  // 0x164
    char idleActionTimer[12];  // 0x168
    char radarFlashTimer[12];  // 0x174
    bool q17B;  // 0x17B
    char targetingTimer[12];  // 0x180
    unsigned char ironCurtainTimer;  // 0x190
    unsigned char ironTintTimer;  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    unsigned int ironTintStage;  // 0x1A8
    unsigned char airstrikeTimer;  // 0x1AC
    char q1B0[4];  // 0x1B0
    char airstrikeTintTimer[12];  // 0x1B8
    TechnoClass* drainTarget;  // 0x1D0
    AnimClass* drainingMe;  // 0x1D4
    void* isDisguisedFlag;  // 0x1D8
    void* infantryBlinkTimer;  // 0x1E0
    char disguiseBlinkTimer[4];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    unsigned char reloadTimer;  // 0x200
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
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned int waveEffect;  // 0x280
    void* airstrike;  // 0x294
    bool chronoLockRemaining;  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    FootClass* isBerserk;  // 0x2AC
    FootClass* isBerserk_duration_left;  // 0x2B0
    AbstractClass* q2B4;  // 0x2B4
    CaptureManagerClass* rockerLinkedUnit;  // 0x2BC
    TechnoClass* locomotorTarget;  // 0x2C0
    bool locomotorSource;  // 0x2C4
    AnimClass* target;  // 0x2C8
    HouseClass* lastTarget;  // 0x2CC
    SpawnManagerClass* captureManager;  // 0x2D0
    TechnoClass* mindControlledBy;  // 0x2D4
    SlaveManagerClass* mindControlledBy_a_unit;  // 0x2D8
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
    unsigned int isSelectedByPlayer;  // 0x319
    unsigned int isUnderCursor;  // 0x31A
    unsigned int isCommandLineTarget;  // 0x31B
    unsigned int isRecruitableByAlly;  // 0x31D
    unsigned int isRecruitableByEnemy;  // 0x31E
    unsigned int isRadarTracked;  // 0x31F
    bool isCrashing;  // 0x321
    bool wasAlreadyCrashing;  // 0x322
    bool isBeingManipulated;  // 0x323
    TechnoClass* damageParticles;  // 0x324
    HouseClass* railgunParticles;  // 0x328
    bool auxParticles1;  // 0x32C
    TeamClass* auxParticles2;  // 0x330
    bool firingParticles;  // 0x334
    bool isAbsorbed;  // 0x335
    bool isGrindingInProgress;  // 0x336
    unsigned int tiltSidewaysAngle;  // 0x33C
    unsigned char storedTiberium;  // 0x350
    unsigned int currentTargets;  // 0x354
    unsigned int attackedTargets;  // 0x36C
    char barrelFacing[24];  // 0x370
    unsigned int currentBurstIndex;  // 0x37C
    char primaryFacing[24];  // 0x388
    bool isSinking;  // 0x391
    bool isSpawned;  // 0x398
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    bool isDiscoveredByComputer;  // 0x3E0
    TechnoClass* manipulatedByUnit;  // 0x3EC
    HouseClass* chronoWarpedByHouse;  // 0x3F0
    bool isChronoImmuneFlag;  // 0x3F4
    char barrelRecoil[32];  // 0x3F8
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool isOnCarryall;  // 0x424
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    AnimClass* drainAnim;  // 0x468
    unsigned int disguiseCreationFrame;  // 0x476
    char turretRotateSoundController[20];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[20];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned int unknown_4FC;  // 0x4FC
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
    char controlGroup[4];  // 0x532
    unsigned char audioController7;  // 0x544
    char currentJumpjetMapCoords[4];  // 0x564
    char currentSpeed_percentage[8];  // 0x578
    unsigned int unknownAbstractArray588;  // 0x588
    char movementDestination[4];  // 0x5A4
    unsigned int FootClass_field_abstract_array_5AC;  // 0x5AC
    unsigned char q5B0;  // 0x5B0
    unsigned char q5B8;  // 0x5B8
    char team[4];  // 0x5D4
    char nextTeamMember[4];  // 0x5D8
    void* pathDirections;  // 0x5E0
    bool gapSuperCharged;  // 0x616
    ILocomotion* locomotor;  // 0x674
    unsigned char unknownBool688;  // 0x688
    char isTeamLeader;  // 0x689
    unsigned char FootClass_field_bool_68E;  // 0x68E
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    char unknown698[4];  // 0x698
    char parasiteImUsing[4];  // 0x69C
    char isAttackedByLocomotor;  // 0x6AD
    void* frozenStill;  // 0x6B6
    unsigned char __pad_6C0;  // 0x6C0
    AircraftTypeClass* Type;  // 0x6C4
    unsigned int AircraftClass_field_6CC;  // 0x6CC
    unsigned int vtable0;
    void* Destruct;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AircraftClass * CheckActionStatus(char a2);
    AircraftTypeClass * GetCursorOverObject(IUnknown * aP1, IUnknown * a3, void *a3_2);
    HRESULT CheckPassengerCount(int a1, int pPStm, int a3);
    char * CheckLandingClearance(int a2, int a3, int a4);
    char CheckDockState();
    char ValidateMovement(int a2, int * a3, int a4);
    int CanEnterCell(short * a1, IUnknown * aP2, InfantryClass * aP3);
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
    AircraftTypeClass * Update(int a2);
    void* LoadFromStream(unsigned int * a0, FootClass * aP1);
     double Construct(...);  // C2597 interim stub
    AircraftTypeClass * Update(void * a1, void * a2, void *a3, void *a4);
    unsigned int q_3E0;  // +0x3E0 flat supply (final pass)
};

} // namespace gamemd
