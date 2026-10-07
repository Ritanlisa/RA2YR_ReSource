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
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    bool q017;  // 0x17
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount[4];  // 0x1C
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
    char ambientSoundController[4];  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int q04C;  // 0x4C
    char customSound_controller[4];  // 0x50
    void* q054;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int q05C;  // 0x5C
    char q060[4];  // 0x60
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned int health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned int spawnStatus;  // 0x78
    unsigned int q07B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool hasParachute;  // 0x84
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    void* onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    void* isAliveFlag;  // 0x90
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char location[4];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    char queuedMission[4];  // 0xB4
    bool missionQueued;  // 0xB8
    int missionStatus;  // 0xBC
    int missionStartTime;  // 0xC0
    char missionTimer[4];  // 0xC8
    unsigned int q0D0;  // 0xD0
    void* lastCommands;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int radioLinks;  // 0xE0
    unsigned int q0E4;  // 0xE4
    char flashing[8];  // 0xF0
    unsigned int q0F4;  // 0xF4
    unsigned int u32_FC;  // 0xFC
    unsigned int u32_10C;  // 0x10C
    char passengers[4];  // 0x114
    TechnoClass* transporter;  // 0x11C
    char turretChargeTimer[4];  // 0x120
    void* currentTurretNumber;  // 0x124
    char secondaryTurretIndex[4];  // 0x128
    AnimClass* behindAnim;  // 0x12C
    AnimClass* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    char currentRank[4];  // 0x13C
    void* gattlingStage;  // 0x140
    unsigned int gattlingValue;  // 0x144
    unsigned int ammoReloadTimer;  // 0x148
    HouseClass* initialOwner;  // 0x14C
    char veterancy[4];  // 0x150
    double armorMultiplier;  // 0x158
    double firepowerMultiplier;  // 0x160
    unsigned int q164;  // 0x164
    char idleActionTimer[12];  // 0x168
    char radarFlashTimer[12];  // 0x174
    bool q17B;  // 0x17B
    char targetingTimer[12];  // 0x180
    unsigned int ironTintTimer;  // 0x19C
    unsigned int q1AC;  // 0x1AC
    char animation[4];  // 0x1B0
    char airstrikeTintTimer[4];  // 0x1BC
    char disguiseBlinkTimer[4];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char reloadTimer[4];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    void* focus;  // 0x218
    unsigned int cloakState;  // 0x220
    SpawnManagerClass* spawnManager;  // 0x224
    TechnoClass* spawnOwner;  // 0x22C
    SlaveManagerClass* slaveManager;  // 0x234
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
    ParticleSystemClass* auxParticles1;  // 0x274
    ParticleSystemClass* auxParticles2;  // 0x278
    void* firingParticles;  // 0x27C
    void* waveEffect;  // 0x280
    void* tiltSidewaysAngle;  // 0x284
    char storedTiberium[4];  // 0x298
    unsigned int chronoDestCoords;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    bool isUncrushable;  // 0x2A4
    int isBerserk_duration_left;  // 0x2B0
    int q2B4;  // 0x2B4
    char barrelFacing[4];  // 0x2B8
    int currentBurstIndex;  // 0x2C4
    void * lastTarget;  // 0x2CC
    void * captureManager;  // 0x2D0
    bool isSinking;  // 0x2D9
    bool wasAlreadySinking;  // 0x2DA
    bool isReceivingDamageEffect;  // 0x2DB
    bool hasBeenAttacked;  // 0x2DD
    bool isCloakableFlag;  // 0x2DE
    bool isPrimaryFactory;  // 0x2DF
    bool isSpawned;  // 0x2E0
    bool isInPlayfield;  // 0x2E1
    void* turretRecoil;  // 0x2E4
    void * slaveOwner;  // 0x2F0
    void * bunkerLinkedUnit;  // 0x2F8
    char barrelRecoil[4];  // 0x2FC
    AnimClass* q300;  // 0x300
    bool q308;  // 0x308
    char currentWeaponSlot[4];  // 0x312
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
    TeamClass* previousTeam;  // 0x330
    bool isCountedAsOwned_special;  // 0x334
    bool isAbsorbed;  // 0x335
    bool isGrindingInProgress;  // 0x336
    unsigned int grindingAnimHandle;  // 0x338
    void* currentTargetThreatValues;  // 0x33C
    unsigned int q340;  // 0x340
    unsigned int currentTargets;  // 0x354
    unsigned int attackedTargets;  // 0x36C
    char primaryFacing[4];  // 0x388
    unsigned int unknown_3CA;  // 0x3CA
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    unsigned int queuedVoiceIndex;  // 0x40C
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    unsigned int empLockRemaining;  // 0x420
    unsigned int threatPosed;  // 0x424
    RadBeam* firingRadBeam;  // 0x42C
    void* planningToken;  // 0x430
    bool isMouseHovering;  // 0x431
    bool shouldBeReselectOnUnlimbo;  // 0x432
    ObjectTypeClass* disguiseAsType;  // 0x434
    void * vecInt_Items;  // 0x444
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[4];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[4];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[4];  // 0x4DC
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned int unknown_4FC;  // 0x4FC
    unsigned int audioController7;  // 0x544
    unsigned char q5B8;  // 0x5B8
    void* pathDirections;  // 0x5E0
    ILocomotion* Locomotor;  // 0x674
    char isTeamLeader;  // 0x689
    char shouldEnterOccupiable;  // 0x690
    char shouldGarrisonStructure;  // 0x691
    char isAttackedByLocomotor;  // 0x6AD
    UnitTypeClass* Type;  // 0x6C4
    bool TerrainPalette;  // 0x6D3
    unsigned char ToolTipText;  // 0x6E8
    unsigned int u32_710;  // 0x710
    bool q730;  // 0x730
    void* q7B0;  // 0x7B0
    unsigned int ClearTargetRef;
    unsigned int GetExitCell;

// --- flat members (END) ---
    int ProcessIdleOrders();
int Construct(int a2, LPVOID ppv);  // G57w10-S raw 0x007353C0 (was C2597 interim stub)
    void ** Create(void *a2, _DWORD *a3, int a4); // N_fix R5 supply (cache truth)
    unsigned int q_C30;  // +0xC30 flat supply (three-ban reform)
};

} // namespace gamemd
