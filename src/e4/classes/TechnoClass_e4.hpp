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
    unsigned int ptr_0;  // 0x0
    void* ptr_4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    void* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    void* occupant;  // 0x24
    void* owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    void* nextObject;  // 0x30
    void* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    int ambientSoundController[5];  // 0x3C
    int customSound_controller[5];  // 0x50
    int customSound;  // 0x64
    char bombVisible[1];  // 0x68
    char alignmentPadding69[3];  // 0x69
    void* health;  // 0x6C
    Int4* estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    ScoreScreen* spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    char inLimbo[1];  // 0x81
    bool inOpenToppedTransport;  // 0x82
    char isSelected[1];  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass* parachute;  // 0x88
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
    void* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    void* suspendedMission;  // 0xB0
    void* queuedMission;  // 0xB4
    char missionQueued[1];  // 0xB8
    char alignmentPaddingB9[3];  // 0xB9
    int missionStatus;  // 0xBC
    int missionStartTime;  // 0xC0
    unsigned int missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
    int lastCommands[3];  // 0xD4
    int radioLinks[4];  // 0xE0
    unsigned long long flashing_d;  // 0xF0
    int animation[7];  // 0xF8
    int passengers[2];  // 0x114
    void* transporter_2;  // 0x11C
    void* turretChargeTimer_d;  // 0x120
    void* currentTurretNumber_2;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    AnimClass* behindAnim;  // 0x12C
    void* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    char alignmentPadding139[3];  // 0x135
    int currentWeaponSlot;  // 0x138
    WaveClass* currentWeaponSlot_d;  // 0x13C
    int gattlingStage;  // 0x140
    int gattlingValue;  // 0x144
    int ammoReloadTimer;  // 0x148
    int initialOwner;  // 0x14C
    int veterancy;  // 0x150
    int alignmentPadding154;  // 0x154
    int armorMultiplier[2];  // 0x158
    unsigned long long armorMultiplier_d;  // 0x160
    char firepowerMultiplier_d[12];  // 0x168
    int radarFlashTimer[3];  // 0x174
    int targetingTimer[3];  // 0x180
    int q18C;  // 0x18C
    char ironCurtainTimer[12];  // 0x190
    char ironTintTimer[12];  // 0x19C
    IUnknown* ironTintStage;  // 0x1A8
    char ironTintStage_d[12];  // 0x1AC
    char airstrikeTintTimer[12];  // 0x1B8
    unsigned int airstrikeTintStage_d;  // 0x1C4
    unsigned int airstrikeTintStage_2;  // 0x1C8
    void* drainTarget;  // 0x1CC
    int drainingMe;  // 0x1D0
    TechnoClass* drainAnim;  // 0x1D4
    char isDisguisedFlag[1];  // 0x1D8
    unsigned char __pad_1D9;  // 0x1D9
    char __pad_1DA[2];  // 0x1DA
    AnimClass* disguiseCreationFrame;  // 0x1DC
    int infantryBlinkTimer[3];  // 0x1E0
    int disguiseBlinkTimer[3];  // 0x1EC
    bool isTargetedByChrono;  // 0x1F8
    char __pad_1F9[3];  // 0x1F9
    int reloadTimer[3];  // 0x1FC
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int controlGroup;  // 0x214
    unsigned int focus;  // 0x218
    HouseClass* owner;  // 0x21C
    AbstractClass* cloakState;  // 0x220
    int cloakProgress[7];  // 0x224
    char warpFactor_d[12];  // 0x240
    void* warpFactor_2;  // 0x24C
    char isChronosphereImmune[1];  // 0x250
    char alignmentPadding251[3];  // 0x251
    char lastSightCoords[12];  // 0x254
    int lastSightRange;  // 0x260
    int lastSightHeight;  // 0x264
    bool gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    unsigned short __pad_26A;  // 0x26A
    int gapRadius;  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    char __pad_27D[3];  // 0x27D
    int owningHouseIndex0;  // 0x280
    int chronoLockRemaining;  // 0x284
    int chronoDestCoords[3];  // 0x288
    unsigned int airstrike;  // 0x294
    char isBerserk[1];  // 0x298
    char __pad_299[3];  // 0x299
    Coord* isBerserk_duration_left;  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    char isUncrushable[1];  // 0x2A4
    char __pad_2A5[3];  // 0x2A5
    AirstrikeClass* rockerLinkedUnit;  // 0x2A8
    int locomotorTarget;  // 0x2AC
    unsigned int locomotorSource;  // 0x2B0
    void* target;  // 0x2B4
    int lastTarget;  // 0x2B8
    FootClass* captureManager;  // 0x2BC
    FootClass* mindControlledBy;  // 0x2C0
    char mindControlledBy_a_unit[1];  // 0x2C4
    char __pad_2C5[3];  // 0x2C5
    AbstractClass* mindControlRingAnim;  // 0x2C8
    AbstractClass* mindControlledBy_house;  // 0x2CC
    CaptureManagerClass* spawnManager;  // 0x2D0
    TechnoClass* spawnOwner;  // 0x2D4
    int slaveManager;  // 0x2D8
    AnimClass* slaveOwner;  // 0x2DC
    HouseClass* originalOwnerHouse;  // 0x2E0
    SpawnManagerClass* bunkerLinkedUnit;  // 0x2E4
    TechnoClass* pitchAngle;  // 0x2E8
    int diskLaserTimer[3];  // 0x2EC
    TechnoClass* diskLaserChargeState;  // 0x2F8
    float ammo;  // 0x2FC
    TimerStruct* unitValue;  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    void* sparkParticles;  // 0x308
    unsigned int ambientParticles;  // 0x30C
    int damageParticles;  // 0x310
    int railgunParticles;  // 0x314
    ParticleSystemClass* unk1Particles;  // 0x318
    ParticleSystemClass* sparkParticles_d;  // 0x31C
    ParticleSystemClass* ambientParticles_d;  // 0x320
    ParticleSystemClass* damageParticles_2;  // 0x324
    ParticleSystemClass* railgunParticles_2;  // 0x328
    ParticleSystemClass* auxParticles1;  // 0x32C
    ParticleSystemClass* auxParticles2;  // 0x330
    ParticleSystemClass* firingParticles;  // 0x334
    WaveClass* waveEffect;  // 0x338
    Float4* tiltSidewaysAngle;  // 0x33C
    float tiltForwardsAngle;  // 0x340
    float tiltSidewaysRate;  // 0x344
    float tiltForwardsRate;  // 0x348
    char hijackerInfantryType[4];  // 0x34C
    char storedTiberium[16];  // 0x350
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    char barrelFacing[24];  // 0x370
    char primaryFacing[24];  // 0x388
    char secondaryFacing[24];  // 0x3A0
    int __pad_3B8;  // 0x3B8
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool __pad_3CD;  // 0x3CD
    char wasAlreadySinking[1];  // 0x3CE
    char isReceivingDamageEffect[1];  // 0x3CF
    bool isUseless;  // 0x3D0
    bool __pad_3D1;  // 0x3D1
    char isCloakableFlag[1];  // 0x3D2
    char isPrimaryFactory[1];  // 0x3D3
    bool isALoaner;  // 0x3D4
    unsigned char isInPlayfield_d;  // 0x3D5
    unsigned char __pad_3D6;  // 0x3D6
    char __pad_3D7[1];  // 0x3D7
    int turretRecoil[8];  // 0x3D8
    int barrelRecoil[8];  // 0x3F8
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    bool __pad_41C;  // 0x41C
    char isSelectedByPlayer[1];  // 0x41D
    char isUnderCursor[1];  // 0x41E
    char isCommandLineTarget[1];  // 0x41F
    unsigned char sightRangeBonus_d;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool isRecruitableByEnemy_d;  // 0x422
    bool isRadarTracked_d;  // 0x423
    unsigned char isOnCarryall_d;  // 0x424
    unsigned char isCrashing_d;  // 0x425
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
    bool isAbsorbed;  // 0x439
    bool isGrindingInProgress;  // 0x43A
    unsigned char alignmentPadding43B;  // 0x43B
    unsigned int grindingAnimHandle;  // 0x43C
    int currentTargetThreatValues[6];  // 0x440
    int currentTargets[6];  // 0x458
    char __pad_470[24];  // 0x470
    char turretRotateSoundController[20];  // 0x488
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    ComPtr* turretIsRotating;  // 0x4A0
    char gattlingSoundController[20];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned char __pad_4BA;  // 0x4BA
    char __pad_4BB[1];  // 0x4BB
    ComPtr* unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned char __pad_4D6;  // 0x4D6
    char __pad_4D7[1];  // 0x4D7
    ComPtr* unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned char __pad_4FA;  // 0x4FA
    char __pad_4FB[1];  // 0x4FB
    IUnknown* unknown_4FC;  // 0x4FC
    unsigned int voiceVolumeModifier;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static void Find(int aP1, int aP2);
    static int GetTypeVt40(void *aP1);
    static int CalcOffsetFacing(void *aP1);
    static int ComputeScanRange(void *aP1, double a2);
    static unsigned int Deploy();  // x4:empty@0x7393c0
    static unsigned int EvaluateTarget(int p0, int p1, int p2, int p3, int* p4, int p5, int p6);  // x4:signals@0x6f7ca0
    static unsigned int GatherAllBuildings();  // x4:empty@0x732050
    static int checkCloakState(TechnoClass *pThis);
    BOOL processDamageAnimation(int a1);
    BOOL updateWeaponCooldown(int a1);
    Coord * * RegisterKill();
    HouseClass * * RenderTechnoSHP(int * a0, int * a1, int * a2, HouseClass * aP3, HouseClass * aP4, int a6, int a7, TechnoClass * aP7, TechnoClass * aP8, int a10, int a11);
    char ScanAdjacentCells();
    int COMStub_Return0_287();
    int DTOR(void *a1 = 0);
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
    unsigned int * Update(int a2, void *a2_1 = 0, void *a3 = 0, void *a4 = 0);
    bool GetField(void *a1, void *a2);
    void updateSightRange(IUnknown * aP1, int a3);  // G57w10-S raw 0x004C2BD0 IUnknown 占位清除
    static char GetTileAnimationData(TechnoClass * aP1, int a2, unsigned int *a3, unsigned int *a4);
    static int InvulnerabilityIntensity_SetContext(TechnoClass * aP1, int a2);
    static int MutateAll(TechnoClass * aP1, int a2, int a3);
    static int SetFocus(TechnoClass * aP1, int a2);
    static int EjectPassengers(TechnoClass * aP1, char a2);
    static int CreatePlanningNode(TechnoClass * aP1);
    static int IsDeployed(TechnoClass * aP1);
    static int IsWaypointHidden(TechnoClass * aP1);
    static void * FindClosestPlacementCell(TechnoClass * aP1);
     int GetValue(int a2, void *a1 = 0);
    static char * CreateFireEffect(TechnoClass * aP1, uint8_t *a2, int a3, int a4, int *a5);
    static int CreateRadarBlip(TechnoClass * aP1, uint8_t *a2, int a3, unsigned int *a4);
    bool  ProcessTarget(int a2);  // 0x50cad0
    static int CleanupAll(TechnoClass * aP1, int a2);
    static int IsOwnedByHuman(void *a1 = 0);  // 0x732580
    int  CalcFlashAlpha(int a2);  // 0x70e4b0
    int CleanupDirection();  // 0x4db260
    int IsMission27to30();  // 0x522510
    char GetTypeFlag();  // 0x5224e0
    int CalculateDamage();  // 0x663030
    int FireWeapon();  // 0x6fdd50
    unsigned int *  GetWaypointCoords(unsigned int * a2);  // 0x6f18a0
    int ScanNeighborCells(void *a1 = 0);  // 0x703e70
    int HasDeployFlags(void *a1 = 0);  // 0x746db0
    static char CheckTargetCell(void *a1 = 0);  // 0x703b10
    int __thiscall DrawPips(void *a1);
    int sub_724550();  // 0x724550
    int sub_724570();  // 0x724570
    int sub_724A30(int * a2);
    static int CalcFacingFromMatrix(float *p_this);  // x4:ida@0x5af410
    static int ClearArrays();  // x4:empty@0x5f99e0
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
