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
    static int SlaveGiveMoney_RecordBalanceBefore(int aP1);  // 0x522D50 raw 2-param (int* this, _DWORD* a2) site 1-arg int form  // G57w10 r5 D-classbody supply (raw-anchored)
    static int SetMission(void *aP1);  // 0x728280 raw: int __thiscall sub_728280(char*)  // G57w10 r5 D-classbody supply (raw-anchored)

// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    void* uniqueId;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
    bool needsSave;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned char q03A;  // 0x3A
    char ambientSoundController[4];  // 0x3C
    unsigned int q040;  // 0x40
    char q044[4];  // 0x44
    ObjectClass* q048;  // 0x48
    unsigned int q04C;  // 0x4C
    char customSound_controller[4];  // 0x50
    void* q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    char q060[4];  // 0x60
    char customSound[4];  // 0x64
    bool bombVisible;  // 0x68
    unsigned int health;  // 0x6C
    unsigned int estimatedHealth;  // 0x70
    void* isOnMap;  // 0x74
    unsigned int spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* onBridge;  // 0x8C
    void* isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    void* isAliveFlag;  // 0x90
    void* lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    void* location;  // 0x9C
    void* q0A0;  // 0xA0
    void* q0A4;  // 0xA4
    void* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    void* suspendedMission;  // 0xB0
    void* queuedMission;  // 0xB4
    bool missionQueued;  // 0xB8
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    char missionTimer[4];  // 0xC8
    unsigned int q0D0;  // 0xD0
    unsigned int lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int radioLinks;  // 0xE0
    unsigned int q0E4;  // 0xE4
    char flashing[8];  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int q10C;  // 0x10C
    char passengers[8];  // 0x114
    TechnoClass* transporter;  // 0x11C
    unsigned int turretChargeTimer;  // 0x120
    void* currentTurretNumber;  // 0x124
    unsigned int secondaryTurretIndex;  // 0x128
    AnimClass* behindAnim;  // 0x12C
    AnimClass* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned int currentRank;  // 0x13C
    void* gattlingStage;  // 0x140
    char gattlingValue[4];  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass* initialOwner;  // 0x14C
    void* veterancy;  // 0x150
    double armorMultiplier;  // 0x158
    double firepowerMultiplier;  // 0x160
    unsigned int q164;  // 0x164
    char idleActionTimer[4];  // 0x168
    void* radarFlashTimer;  // 0x174
    bool q17B;  // 0x17B
    char targetingTimer[12];  // 0x180
    unsigned int ironTintTimer;  // 0x19C
    unsigned int u32_1A4;  // 0x1A4
    unsigned int q1AC;  // 0x1AC
    char animation[4];  // 0x1B0
    char airstrikeTintTimer[4];  // 0x1BC
    void* isDisguisedFlag;  // 0x1D8
    unsigned int disguiseCreationFrame;  // 0x1DC
    char infantryBlinkTimer[4];  // 0x1E0
    char disguiseBlinkTimer[4];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char reloadTimer[4];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    AbstractClass* focus;  // 0x218
    void* owner;  // 0x21C
    unsigned int cloakState;  // 0x220
    char spawnManager[4];  // 0x224
    unsigned int spawnOwner;  // 0x22C
    unsigned int slaveManager;  // 0x234
    unsigned int originalOwnerHouse;  // 0x23C
    char cloakDelayTimer[4];  // 0x240
    unsigned int pitchAngle;  // 0x244
    unsigned int diskLaserTimer;  // 0x248
    float warpFactor;  // 0x24C
    bool isChronosphereImmune;  // 0x250
    char diskLaserChargeState[4];  // 0x254
    unsigned int ammo;  // 0x258
    unsigned int unitValue;  // 0x25C
    char fireParticles[4];  // 0x260
    char sparkParticles[4];  // 0x264
    void* ambientParticles;  // 0x268
    char isGeneratingGap;  // 0x269
    char damageParticles[4];  // 0x26C
    void* railgunParticles;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    TemporalClass* auxParticles1;  // 0x274
    TemporalClass* auxParticles2;  // 0x278
    bool firingParticles;  // 0x27C
    unsigned int waveEffect;  // 0x280
    char tiltSidewaysAngle[4];  // 0x284
    bool storedTiberium;  // 0x298
    unsigned int isBerserk_duration_left;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    FootClass* locomotorSource;  // 0x2B0
    AbstractClass* target;  // 0x2B4
    AbstractClass* barrelFacing;  // 0x2B8
    bool currentBurstIndex;  // 0x2C4
    HouseClass* mindControlledBy_house;  // 0x2CC
    unsigned int isSinking;  // 0x2D9
    unsigned int wasAlreadySinking;  // 0x2DA
    unsigned int isReceivingDamageEffect;  // 0x2DB
    unsigned int hasBeenAttacked;  // 0x2DD
    unsigned int isCloakableFlag;  // 0x2DE
    unsigned int isPrimaryFactory;  // 0x2DF
    HouseClass* isSpawned;  // 0x2E0
    unsigned int isInPlayfield;  // 0x2E1
    TechnoClass* turretRecoil;  // 0x2E4
    char barrelRecoil[4];  // 0x2FC
    AnimClass* q300;  // 0x300
    bool q308;  // 0x308
    unsigned int currentWeaponSlot;  // 0x312
    ParticleSystemClass* isDiscoveredByComputer;  // 0x318
    unsigned int isSelectedByPlayer;  // 0x319
    unsigned int isUnderCursor;  // 0x31A
    unsigned int isCommandLineTarget;  // 0x31B
    unsigned int sightRangeBonus;  // 0x31C
    unsigned int isRecruitableByAlly;  // 0x31D
    unsigned int isRecruitableByEnemy;  // 0x31E
    unsigned int isRadarTracked;  // 0x31F
    bool isOnCarryall;  // 0x320
    bool isCrashing;  // 0x321
    bool wasAlreadyCrashing;  // 0x322
    bool isBeingManipulated;  // 0x323
    TechnoClass* manipulatedByUnit;  // 0x324
    HouseClass* chronoWarpedByHouse;  // 0x328
    bool isChronoImmuneFlag;  // 0x32C
    TeamClass* previousTeam;  // 0x330
    bool isCountedAsOwned_special;  // 0x334
    bool isAbsorbed;  // 0x335
    bool isGrindingInProgress;  // 0x336
    unsigned int grindingAnimHandle;  // 0x338
    float q340;  // 0x340
    unsigned int currentTargets;  // 0x354
    unsigned int attackedTargets;  // 0x36C
    char primaryFacing[24];  // 0x388
    char secondaryFacing[24];  // 0x3A0
    char targetLaserTimer[12];  // 0x3BC
    void* unknown_short_3C8;  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    void* countedAsOwned;  // 0x3CC
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    void * vecInt_Items;  // 0x444
    TechnoClass* drainingMe;  // 0x464
    AnimClass* drainAnim;  // 0x468
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
    HouseClass * disguiseAsType;  // 0x518
    HouseClass * disguisedAsHouse;  // 0x51C
    unsigned int audioController7;  // 0x544
    unsigned int q5B0;  // 0x5B0
    unsigned char q5B8;  // 0x5B8
    void* pathDirections;  // 0x5E0
    void* gapSuperCharged;  // 0x616
    ILocomotion* Locomotor;  // 0x674
    char isTeamLeader;  // 0x689
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    char isAttackedByLocomotor;  // 0x6AD
    InfantryTypeClass* Type;  // 0x6C0
    char SequenceAnim[4];  // 0x6C4
    bool Crawling;  // 0x6DB
    void* GetCursorOverObject;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractClass * * ProcessDeploy(void ** a1);
    static int ScanTarget(int * a1);
    int SetField6();  // 0x5176A0 G42.33 b3 member-form sync
    void* Destruct(IUnknown * a1, AbstractClass * edx0);
    static int IsInBounds(InfantryClass * aP1);  // G57w10-S raw 0x00484AB0 (was C2597 interim stub)
     int Construct(int a2, int a3, IUnknown *ppv);  // G57w10-S raw 0x00517A50 (was C2597 interim stub)
    static int GetType(InfantryClass * aP1);  // G57w10-S raw 0x00484F20 (was C2597 interim stub)
    void * FindNearbyCell(int a2);  // 0x418e20
    AnimClass * CanDeployAtCell(__int16 *a2, __int16 *a3, int a1, int a4);
    AnimClass * GetDeployWeaponIndex();
    AnimClass * FireAtTargetPos(int a2, int a3, int a4);
    bool CanEnterBuilding();
    int FindIdleAITarget();
    int PerFrameUpdate(int a2);
};

} // namespace gamemd
