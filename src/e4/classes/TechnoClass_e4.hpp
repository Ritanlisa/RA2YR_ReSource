// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"  // G42.35a: q0584 by-value member needs the complete type

namespace gamemd {
struct BombClass;  // fix_fwd_type_supply
struct AnimClass;  // fix_fwd_type_supply
struct HouseClass;  // fix_fwd_type_supply
struct TemporalClass;  // fix_fwd_type_supply
struct AirstrikeClass;  // fix_fwd_type_supply
struct CaptureManagerClass;  // fix_fwd_type_supply
struct SpawnManagerClass;  // fix_fwd_type_supply
struct SlaveManagerClass;  // fix_fwd_type_supply
struct ParticleSystemClass;  // fix_fwd_type_supply
struct WaveClass;  // fix_fwd_type_supply
struct TeamClass;  // fix_fwd_type_supply
struct RadBeam;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct Coord;  // fix_fwd_type_supply

#ifndef GAMEMD_TREE_UNIVERSE
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
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    void* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    void* ambientSoundController;  // 0x3C
    void* q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    void* customSound_controller;  // 0x50
    unsigned int u32_54;  // 0x54
    void* q058;  // 0x58
    unsigned int q05C;  // 0x5C
    char customSound[4];  // 0x64
    void* bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    void* health;  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    void* spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    void* isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    void* location;  // 0x9C
    void* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    char missionTimer[12];  // 0xC8
    unsigned int q0D0;  // 0xD0
    void* lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int radioLinks;  // 0xE0
    char flashing[8];  // 0xE4
    char animation[8];  // 0xEC
    void* q0F0;  // 0xF0
    char passengers[8];  // 0xF4
    char q0F8[4];  // 0xF8
    TechnoClass* transporter;  // 0xFC
    char q100[4];  // 0x100
    unsigned int currentTurretNumber;  // 0x104
    unsigned int turretChargeTimer;  // 0x10C
    unsigned int secondaryTurretIndex;  // 0x114
    char q128[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    void* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned int currentWeaponSlot;  // 0x138
    char q13C[4];  // 0x13C
    unsigned int currentRank;  // 0x140
    unsigned int gattlingStage;  // 0x144
    char gattlingValue[4];  // 0x148
    unsigned int ammoReloadTimer;  // 0x14C
    HouseClass* initialOwner;  // 0x150
    char veterancy[4];  // 0x154
    double armorMultiplier;  // 0x15C
    double firepowerMultiplier;  // 0x164
    void* q168;  // 0x168
    char idleActionTimer[12];  // 0x16C
    char radarFlashTimer[4];  // 0x174
    bool q17B;  // 0x17B
    char targetingTimer[4];  // 0x180
    char ironCurtainTimer[12];  // 0x190
    char ironTintTimer[12];  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    unsigned int ironTintStage;  // 0x1A8
    char q1AC[12];  // 0x1AC
    char airstrikeTimer[4];  // 0x1B0
    char airstrikeTintTimer[12];  // 0x1B8
    unsigned int drainTarget;  // 0x1CC
    bool drainingMe;  // 0x1D0
    TechnoClass* drainAnim;  // 0x1D4
    TechnoClass* isDisguisedFlag;  // 0x1D8
    AnimClass* disguiseCreationFrame;  // 0x1DC
    bool infantryBlinkTimer;  // 0x1E0
    void* disguiseBlinkTimer;  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    bool reloadTimer;  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int controlGroup;  // 0x214
    unsigned int focus;  // 0x218
    HouseClass* owner;  // 0x21C
    AbstractClass* cloakState;  // 0x220
    HouseClass* cloakProgress;  // 0x224
    char cloakDelayTimer[4];  // 0x230
    float warpFactor;  // 0x23C
    void* isChronosphereImmune;  // 0x250
    char lastSightCoords[12];  // 0x254
    unsigned char q258;  // 0x258
    unsigned int lastSightRange;  // 0x260
    unsigned int lastSightHeight;  // 0x264
    bool gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    unsigned int gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned int owningHouseIndex0;  // 0x280
    bool chronoLockRemaining;  // 0x284
    TemporalClass* chronoDestCoords;  // 0x288
    unsigned int airstrike;  // 0x294
    unsigned int isBerserk;  // 0x298
    char isBerserk_duration_left[4];  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    void* isUncrushable;  // 0x2A4
    AirstrikeClass* rockerLinkedUnit;  // 0x2A8
    bool locomotorTarget;  // 0x2AC
    unsigned int locomotorSource;  // 0x2B0
    unsigned int target;  // 0x2B4
    bool lastTarget;  // 0x2B8
    FootClass* captureManager;  // 0x2BC
    FootClass* mindControlledBy;  // 0x2C0
    FootClass* mindControlledBy_a_unit;  // 0x2C4
    AbstractClass* mindControlRingAnim;  // 0x2C8
    AbstractClass* mindControlledBy_house;  // 0x2CC
    CaptureManagerClass* spawnManager;  // 0x2D0
    TechnoClass* spawnOwner;  // 0x2D4
    bool slaveManager;  // 0x2D8
    AnimClass* slaveOwner;  // 0x2DC
    HouseClass* originalOwnerHouse;  // 0x2E0
    SpawnManagerClass* bunkerLinkedUnit;  // 0x2E4
    TechnoClass* pitchAngle;  // 0x2E8
    SlaveManagerClass* diskLaserTimer;  // 0x2EC
    TechnoClass* diskLaserChargeState;  // 0x2F8
    float ammo;  // 0x2FC
    unsigned int unitValue;  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    void* sparkParticles;  // 0x308
    unsigned int ambientParticles;  // 0x30C
    char damageParticles[4];  // 0x310
    char railgunParticles[4];  // 0x314
    ParticleSystemClass* unk1Particles;  // 0x318
    ParticleSystemClass* q324;  // 0x324
    ParticleSystemClass* auxParticles1;  // 0x32C
    ParticleSystemClass* auxParticles2;  // 0x330
    ParticleSystemClass* firingParticles;  // 0x334
    WaveClass* waveEffect;  // 0x338
    float tiltSidewaysAngle;  // 0x33C
    char storedTiberium[16];  // 0x350
    char barrelFacing[24];  // 0x370
    char currentBurstIndex[4];  // 0x37C
    char primaryFacing[24];  // 0x388
    bool isSinking;  // 0x391
    bool wasAlreadySinking;  // 0x392
    bool isReceivingDamageEffect;  // 0x393
    bool hasBeenAttacked;  // 0x395
    bool isCloakableFlag;  // 0x396
    bool isPrimaryFactory;  // 0x397
    bool isSpawned;  // 0x398
    bool isInPlayfield;  // 0x399
    char turretRecoil[4];  // 0x39C
    char secondaryFacing[24];  // 0x3A0
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
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
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    TeamClass* previousTeam;  // 0x434
    bool isCountedAsOwned_special;  // 0x438
    bool isAbsorbed;  // 0x439
    bool isGrindingInProgress;  // 0x43A
    unsigned int grindingAnimHandle;  // 0x43C
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    unsigned char currentTargets;  // 0x458
    unsigned int attackedTargets;  // 0x45C
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
    unsigned int RadioClass;
    unsigned int *__pad_18C;
    unsigned int __pad_1C4;
    unsigned int barrelRecoil;
    unsigned int checkCloakState;
    unsigned int damageParticles_2;
    unsigned int master;
    unsigned int railgunParticles_2;
    unsigned int Deploy;
    unsigned int queueUpToEnter;
    unsigned int *__pad_0;
    unsigned int EvaluateTarget;
    void* GetAudioEntry;  // 0x0 (no offset truth)
    void* GatherAllBuildings;  // 0x0 (no offset truth)
    void* IsCapturableByPlayer;  // 0x0 (no offset truth)
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
    unsigned int * Update(int a2);
    bool GetField(void *a1, void *a2);
    void updateSightRange(IUnknown * aP1, int a3);
    static double GetTileAnimationData(...);  // C2597 interim stub
    static double InvulnerabilityIntensity_SetContext(...);  // C2597 interim stub
    static double MutateAll(...);  // C2597 interim stub
    static double SetFocus(...);  // C2597 interim stub
    static double EjectPassengers(...);  // C2597 interim stub
    static double CreatePlanningNode(...);  // C2597 interim stub
    static double IsDeployed(...);  // C2597 interim stub
    static double IsWaypointHidden(...);  // C2597 interim stub
    static double FindClosestPlacementCell(...);  // C2597 interim stub
     double GetValue(...);  // C2597 interim stub
    static double CreateFireEffect(...);  // C2597 interim stub
    static double CreateRadarBlip(...);  // C2597 interim stub
    bool ProcessTarget(int a2);  // 0x50cad0
    static int CleanupAll(...);  // 0x707cb0
    int IsOwnedByHuman();  // 0x732580
    int CalcFlashAlpha(int a2);  // 0x70e4b0
    int CleanupDirection();  // 0x4db260
    int IsMission27to30();  // 0x522510
    char GetTypeFlag();  // 0x5224e0
    int CalculateDamage();  // 0x663030
    ProgressTimer q0584;  // 0x584
    int FireWeapon();  // 0x6fdd50
    unsigned int * GetWaypointCoords(unsigned int *a2);  // 0x6f18a0
    int ScanNeighborCells();  // 0x703e70
    int HasDeployFlags();  // 0x746db0
    char CheckTargetCell();  // 0x703b10
    int __thiscall DrawPips(void *a1);
    unsigned int q_120;  // +0x120 flat supply (CSP-fed)
    unsigned int q_F20;  // +0xF20 flat supply (CSP-fed)
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
