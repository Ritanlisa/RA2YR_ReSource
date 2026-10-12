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
    void* nextArrayIndex;  // 0x18
    void* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    void* objectTypeFlags;  // 0x24
    void* owningHouseIndex;  // 0x28
    void* fallRate;  // 0x2C
    void* nextObject;  // 0x30
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    void* attachedTag;  // 0x34
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    void* ambientSoundController;  // 0x3C
    void* customSound_controller;  // 0x50
    char customSound[4];  // 0x64
    void* bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    void* health;  // 0x6C
    char estimatedHealth[4];  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    void* spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    void* inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    void* isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
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
    void* locationZ;  // 0xA4
    void* lineTrailer;  // 0xA8
    void* currentMission;  // 0xAC
    char suspendedMission[4];  // 0xB0
    void* queuedMission;  // 0xB4
    void* missionQueued;  // 0xB8
    unsigned char alignmentPaddingB9;  // 0xB9
    char missionStatus[4];  // 0xBC
    char missionStartTime[4];  // 0xC0
    unsigned int missionData;  // 0xC4
    char missionTimer[12];  // 0xC8
    void* lastCommands;  // 0xD4
    unsigned int radioLinks;  // 0xE0
    char flashing[8];  // 0xE4
    int vecTechno_Capacity;  // 0xE8
    char animation[8];  // 0xEC
    bool vecTechno_IsAllocated;  // 0xED
    void* flashing_d;  // 0xF0
    char passengers[8];  // 0xF4
    TechnoClass* transporter;  // 0xFC
    char passengers_d[4];  // 0x100
    char currentTurretNumber[4];  // 0x104
    TechnoClass* transporter_d;  // 0x108
    char turretChargeTimer[4];  // 0x10C
    char currentTurretNumber_d[4];  // 0x110
    char secondaryTurretIndex[1];  // 0x114
    void* transporter_2;  // 0x11C
    int turretChargeTimer_d;  // 0x120
    void* currentTurretNumber_2;  // 0x124
    int secondaryTurretIndex_d;  // 0x128
    AnimClass* behindAnim;  // 0x12C
    void* deployAnim;  // 0x130
    bool inAirFlag;  // 0x134
    unsigned char alignmentPadding139;  // 0x135
    char currentWeaponSlot[4];  // 0x138
    unsigned char alignmentPadding139_d;  // 0x139
    char currentWeaponSlot_d[4];  // 0x13C
    char currentRank[4];  // 0x140
    char gattlingStage[4];  // 0x144
    char gattlingValue[4];  // 0x148
    unsigned int ammoReloadTimer;  // 0x14C
    HouseClass* initialOwner;  // 0x150
    char veterancy[4];  // 0x154
    unsigned int alignmentPadding154;  // 0x158
    double armorMultiplier;  // 0x15C
    unsigned int armorMultiplier_d;  // 0x160
    double firepowerMultiplier;  // 0x164
    void* firepowerMultiplier_d;  // 0x168
    char idleActionTimer[12];  // 0x16C
    void* idleActionTimer_d;  // 0x170
    char radarFlashTimer[4];  // 0x174
    char radarFlashTimer_d[12];  // 0x178
    char targetingTimer[4];  // 0x180
    char targetingTimer_d[12];  // 0x184
    char targetingTimer_2[4];  // 0x188
    char ironCurtainTimer[12];  // 0x190
    char ironTintTimer[12];  // 0x19C
    void* ironTintTimer_d;  // 0x1A0
    char ironTintStage[4];  // 0x1A8
    char ironTintStage_d[12];  // 0x1AC
    char airstrikeTimer[4];  // 0x1B0
    char airstrikeTintTimer[12];  // 0x1B8
    void* airstrikeTintTimer_d;  // 0x1BC
    void* airstrikeTintStage;  // 0x1C0
    unsigned int airstrikeTintStage_d;  // 0x1C4
    unsigned int airstrikeTintStage_2;  // 0x1C8
    char drainTarget[4];  // 0x1CC
    unsigned char alignmentPadding1BD;  // 0x1CD
    bool drainingMe;  // 0x1D0
    TechnoClass* drainAnim;  // 0x1D4
    TechnoClass* isDisguisedFlag;  // 0x1D8
    AnimClass* disguiseCreationFrame;  // 0x1DC
    unsigned char alignmentPadding1CE;  // 0x1DD
    bool infantryBlinkTimer;  // 0x1E0
    unsigned int disguiseCreationFrame_d;  // 0x1E4
    void* disguiseBlinkTimer;  // 0x1EC
    char disguiseBlinkTimer_d[4];  // 0x1F0
    bool isTargetedByChrono;  // 0x1F8
    bool reloadTimer;  // 0x1FC
    unsigned char alignmentPadding1F9;  // 0x1FD
    bool isTargetedByChrono_d;  // 0x200
    unsigned int currentBurstCount;  // 0x208
    unsigned int currentBarrelIndex;  // 0x20C
    unsigned int displayProductionTo;  // 0x210
    unsigned int controlGroup;  // 0x214
    unsigned int focus;  // 0x218
    HouseClass* owner;  // 0x21C
    AbstractClass* cloakState;  // 0x220
    HouseClass* cloakProgress;  // 0x224
    unsigned int cloakState_d;  // 0x228
    char cloakDelayTimer[4];  // 0x230
    float warpFactor;  // 0x23C
    float warpFactor_d;  // 0x240
    void* warpFactor_2;  // 0x24C
    void* isChronosphereImmune;  // 0x250
    unsigned char alignmentPadding251;  // 0x251
    char lastSightCoords[12];  // 0x254
    char lastSightRange[4];  // 0x260
    char lastSightHeight[4];  // 0x264
    bool gapSuperCharged;  // 0x268
    bool isGeneratingGap;  // 0x269
    char gapRadius[4];  // 0x26C
    bool isBeingWarpedOut;  // 0x270
    bool isWarpingOut;  // 0x271
    bool isWarpEffectActive;  // 0x272
    unsigned char unusedField273;  // 0x273
    TemporalClass* temporalUsing;  // 0x274
    TemporalClass* temporalTargetingMe;  // 0x278
    bool isImmobilized;  // 0x27C
    unsigned char alignmentPadding27E;  // 0x27E
    char owningHouseIndex0[4];  // 0x280
    bool chronoLockRemaining;  // 0x284
    bool isWarpingOut_d;  // 0x285
    bool isWarpEffectActive_d;  // 0x286
    unsigned char unusedField273_d;  // 0x287
    TemporalClass* chronoDestCoords;  // 0x288
    bool isImmobilized_d;  // 0x290
    unsigned char alignmentPadding27D;  // 0x291
    unsigned int airstrike;  // 0x294
    char isBerserk[1];  // 0x298
    char isBerserk_duration_left[4];  // 0x29C
    unsigned int sprayOffsetIndex;  // 0x2A0
    void* isUncrushable;  // 0x2A4
    AirstrikeClass* rockerLinkedUnit;  // 0x2A8
    bool locomotorTarget;  // 0x2AC
    unsigned char alignmentPadding29D;  // 0x2AD
    unsigned int locomotorSource;  // 0x2B0
    unsigned int target;  // 0x2B4
    bool lastTarget;  // 0x2B8
    unsigned char alignmentPadding2A9;  // 0x2B9
    FootClass* captureManager;  // 0x2BC
    FootClass* mindControlledBy;  // 0x2C0
    FootClass* mindControlledBy_a_unit;  // 0x2C4
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
    TechnoClass* slaveOwner_d;  // 0x2F0
    HouseClass* originalOwnerHouse_d;  // 0x2F4
    TechnoClass* diskLaserChargeState;  // 0x2F8
    float ammo;  // 0x2FC
    char unitValue[4];  // 0x300
    ParticleSystemClass* fireParticles;  // 0x304
    void* sparkParticles;  // 0x308
    unsigned int ambientParticles;  // 0x30C
    char damageParticles[4];  // 0x310
    char railgunParticles[4];  // 0x314
    ParticleSystemClass* unk1Particles;  // 0x318
    ParticleSystemClass* sparkParticles_d;  // 0x31C
    ParticleSystemClass* ambientParticles_d;  // 0x320
    ParticleSystemClass* damageParticles_d;  // 0x324
    ParticleSystemClass* railgunParticles_d;  // 0x328
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
    unsigned int tiberiumCollectionState;  // 0x360
    char unloadTimer[12];  // 0x364
    char barrelFacing[24];  // 0x370
    char facing[4];  // 0x374
    char turretFacing[4];  // 0x378
    char currentBurstIndex[4];  // 0x37C
    char target_laser_timer[4];  // 0x380
    char primaryFacing[24];  // 0x388
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
    char targetLaserTimer[12];  // 0x3BC
    char unknown_short_3C8[2];  // 0x3C8
    unsigned short unknown_3CA;  // 0x3CA
    bool countedAsOwned;  // 0x3CC
    bool isUseless;  // 0x3D0
    bool isALoaner;  // 0x3D4
    void* isInPlayfield_d;  // 0x3D5
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
    bool isTether;  // 0x418
    bool isAlternativeTether;  // 0x419
    bool isOwnedByCurrentPlayer;  // 0x41A
    bool isDiscoveredByCurrentPlayer;  // 0x41B
    void* sightRangeBonus_d;  // 0x420
    bool isRecruitableByAlly_d;  // 0x421
    bool isRecruitableByEnemy_d;  // 0x422
    bool isRadarTracked_d;  // 0x423
    TechnoClass * isOnCarryall_d;  // 0x424
    void* isCrashing_d;  // 0x425
    TechnoClass* manipulatedByUnit_d;  // 0x428
    void* chronoWarpedByHouse_d;  // 0x42C
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
    unsigned char currentTargetThreatValues;  // 0x440
    void * vecInt_Items;  // 0x444
    int vecInt_Capacity;  // 0x448
    bool vecInt_IsAllocated;  // 0x44D
    unsigned char currentTargets;  // 0x458
    unsigned int attackedTargets;  // 0x45C
    char audioController3[4];  // 0x460
    bool vecAbs_IsAllocated;  // 0x465
    unsigned int audioLoopIndex3;  // 0x474
    unsigned int audioVolume3;  // 0x478
    char audioController4[4];  // 0x47C
    char turretRotateSoundController[20];  // 0x488
    bool isAudio4Active;  // 0x490
    unsigned int isTurretRotateSoundPlaying;  // 0x49C
    unsigned int turretIsRotating;  // 0x4A0
    char gattlingSoundController[20];  // 0x4A4
    bool isGattlingSoundPlaying;  // 0x4B8
    unsigned char alignmentPadding4B9;  // 0x4B9
    unsigned int unknown_4BC;  // 0x4BC
    char unusedGattlingSoundController[20];  // 0x4C0
    bool isUnusedGattlingSoundPlaying;  // 0x4D4
    unsigned char alignmentPadding4D5;  // 0x4D5
    unsigned int unknown_4D8;  // 0x4D8
    char queuedVoiceSoundController[20];  // 0x4DC
    unsigned int queuedVoiceIndex;  // 0x4F0
    unsigned int unknown_4F4;  // 0x4F4
    bool unknown_bool_4F8;  // 0x4F8
    unsigned char alignmentPadding4F9;  // 0x4F9
    unsigned int unknown_4FC;  // 0x4FC
    unsigned int voiceVolumeModifier;  // 0x500
    unsigned int empLockRemaining;  // 0x504
    unsigned int threatPosed;  // 0x508
    unsigned int shouldLoseTarget;  // 0x50C
    RadBeam* firingRadBeam;  // 0x510
    void* planningToken;  // 0x514
    ObjectTypeClass* disguiseAsType;  // 0x518
    HouseClass* disguisedAsHouse;  // 0x51C
// --- flat members (END) ---
    static void Find(int aP1, int aP2);
    static int GetTypeVt40(void *aP1);
    static int CalcOffsetFacing(void *aP1);
    static int ComputeScanRange(void *aP1, double a2);
    unsigned int Deploy_ph;  // w18j3: filler renamed (no offset truth; canon TechnoClass::Deploy is a method)
    static unsigned int Deploy();  // x4:empty@0x7393c0
    unsigned int EvaluateTarget_ph;  // w18j3: filler renamed (no offset truth; canon TechnoClass::EvaluateTarget is a method)
    static unsigned int EvaluateTarget(int p0, int p1, int p2, int p3, int* p4, int p5, int p6);  // x4:signals@0x6f7ca0
    void* GetAudioEntry_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon TechnoClass::GetAudioEntry is a method)
    void* GatherAllBuildings_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon TechnoClass::GatherAllBuildings is a method)
    static unsigned int GatherAllBuildings();  // x4:empty@0x732050
    void* IsCapturableByPlayer;  // 0x0 (no offset truth)
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
    unsigned int * Update(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0);
    bool GetField(void *a1, void *a2);
    void updateSightRange(uint8_t *a2, int a3);  // G57w10-S raw 0x004C2BD0 IUnknown 占位清除
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
    int IsOwnedByHuman(void *a1 = 0);  // 0x732580
    int  CalcFlashAlpha(int a2);  // 0x70e4b0
    int CleanupDirection();  // 0x4db260
    int IsMission27to30();  // 0x522510
    char GetTypeFlag();  // 0x5224e0
    int CalculateDamage();  // 0x663030
    int FireWeapon();  // 0x6fdd50
    unsigned int *  GetWaypointCoords(unsigned int * a2);  // 0x6f18a0
    int ScanNeighborCells(void *a1 = 0);  // 0x703e70
    int HasDeployFlags(void *a1 = 0);  // 0x746db0
    char CheckTargetCell(void *a1 = 0);  // 0x703b10
    int __thiscall DrawPips(void *a1);
    unsigned int q_120;  // +0x120 flat supply (CSP-fed)
    unsigned int q_F20;  // +0xF20 flat supply (CSP-fed)
    int sub_724550();  // 0x724550
    int sub_724570();  // 0x724570
    int sub_724A30(int * a2);
    static int CalcFacingFromMatrix(float *p_this);  // x4:ida@0x5af410
    static int ClearArrays();  // x4:empty@0x5f99e0
    void* vtable0;  // 0x0 (W16G3: addr42 0x424CE0/0x424F00/0x425670 receiver sites, ObjectClass-vocab)
    char __pad_0B0[4];  // 0xB0 @0x6ea681 (W16G3 raw-usage vocab)
    unsigned int q_610;  // 0x610 @0x6ea71e (W16G3 raw-usage vocab)
    unsigned int q_220;  // 0x220 @0x6ea7xx (W16G3 raw-usage vocab)
    char __pad_1C4[8];  // 0x1C4 (ml)
    int barrelRecoil[8];  // 0x3F8 (ml)
    int damageParticles_2;  // 0x324 (ml)
    unsigned int *q000;  // 0x0 (offset-truth)
    int railgunParticles_2;  // 0x328 (ml)
};
#endif // GAMEMD_TREE_UNIVERSE

} // namespace gamemd
