#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/foot.hpp"

namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    class AnimClass;
    class TagClass;

using ra2::game::AbstractClass;
using ra2::game::AbstractType;
using ra2::game::Point2D;
using ra2::game::RectangleStruct;

class EBolt;
// CSP: UnitTypeClass matched via T1
class UnitTypeClass;
class InfantryTypeClass;

// Idle-order entry (heap-allocated, 20 bytes). Each entry tracks a unit
// queued for idle-order exit-cell processing.
struct IdleOrderEntry {
    UnitClass* unit;       // +0 — the unit
    int32_t    status;     // +4 — status (0=idle, 2=queued, 7=expired)
    int32_t    frame;      // +8 — CurrentFrame at time of queuing
    int32_t    param;      // +C — parameter
    int32_t    field_30;   // +10 — copied from ObjectClass::nextObject (+0x30)
    void* needsSave;  // 0x20 (canon-mt)
    void* ptr_C;  // 0xC (canon-mt)
};

// Thin array-view wrapper to access idle-order entries without raw pointer
// subscript (avoids gate false-positive on cast-index checks).
struct IdleOrderArray {
    IdleOrderEntry** base;
    IdleOrderEntry* operator[](int i) const;
};

// CSP: UnitClass matched via T1
class UnitClass : public ra2::game::FootClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Unit;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // X137B slot 3 = 0x746DE0 (prior: 0x6B4F50)
    // wrapper: delegates to UnitClass::GetClassID at 0x6B4F50
    virtual HRESULT __stdcall Load(IStream* pStm) override;  // X137B slot 5 = 0x744470
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;  // X137B slot 6 = 0x744600

    // wrapper: delegates to UnitClass::GetClassID at 0x6B4F50
    virtual ~UnitClass() override = default;  // X137B slot 8 = 0x746E80 (deleting dtor)

    // === X137B: inherited-range overrides (binary 0x7F5C70 slots 0-340 where RVA != FootClass) ===
    virtual int Unlink(int a1, int a2) override;  // X137B slot 10 = 0x7446E0 (bin: HandleTargetDestroyed)
    virtual int COMStub_Return0_11() override;  // X137B slot 11 = 0x746E20 (bin: StubReturn1)
    virtual int COMStub_Return0_12() override;  // X137B slot 12 = 0x746DD0 (bin: StubReturn2280)
    virtual int ProcessPower() override;  // X137B slot 13 = 0x744640 (bin: PowerDrainUpdate)
    virtual int DetectCloaked() override;  // X137B slot 23 = 0x7360C0 (bin: sub_7360C0)
    virtual int COMStub_28(int a1, int a2, int a3) override;  // X137B slot 28 = 0x7404B0 (bin: GetInfantryCursorAction)
    virtual int COMStub_29(int a1, int a2) override;  // X137B slot 29 = 0x73FD50 (bin: sub_73FD50)
    virtual bool COMStub_Return0_32() override;  // X137B slot 32 = 0x746400 (bin: processParasiteAttachment)
    virtual int COMStub_Return0_34() override;  // X137B slot 34 = 0x741490 (bin: checkTargetValidity)
    virtual int COMStub_Ret8487648_36() override;  // X137B slot 36 = 0x746B20 (bin: GetCommandTooltip)
    virtual int COMStub_50(int a1) override;  // X137B slot 50 = 0x746750 (bin: IsGuardingTarget)
    virtual int LandingCheckStub(int a1) override;  // X137B slot 51 = 0x7465B0 (bin: updateParasiteState)
    virtual int StubReturnFalse2(int a1) override;  // X137B slot 52 = 0x7465F0 (bin: detachParasites)
    virtual AbstractClass** Undeploy() override;  // X137B slot 53 = 0x7440B0 (bin: ReturnCapturedFlag)
    virtual AbstractClass** Deploy(int a1, int a2) override;  // X137B slot 54 = 0x737BA0 (bin: DispatchPlayerInput)
    virtual int COMStub_Return0_56(int a1) override;  // X137B slot 56 = 0x744720 (bin: NotifyTeamOnDestruction)
    virtual int SetCellOverlayFlag(int a1) override;  // X137B slot 60 = 0x7441B0 (bin: MarkCellImpassable)
    virtual int ClearCellOverlayFlag(int a1) override;  // X137B slot 61 = 0x744210 (bin: ClearCellImpassable)
    virtual int CalcDrawRect(int a1, int a2, int a3) override;  // X137B slot 65 = 0x73B0B0 (bin: ShouldSkipOccupierDraw)
    virtual int StubReturnFalse(int a1, int a2) override;  // X137B slot 69 = 0x73CEC0 (bin: Draw)
    virtual int COMStub_80(int a1, int a2, int a3, int a4) override;  // X137B slot 80 = 0x738910 (bin: SpawnInfantryFromBuilding)
    virtual int COMStub_81(int a1, int a2, int a3) override;  // X137B slot 81 = 0x738890 (bin: ValidateMoveType)
    virtual int CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) override;  // X137B slot 91 = 0x737C90 (bin: OnUnderAttack)
    virtual int COMStub_Return0_92() override;  // X137B slot 92 = 0x746D60 (bin: releaseSpawns)
    virtual int COMStub_Return0_93(int a1, int a2, int a3) override;  // X137B slot 93 = 0x743A50 (bin: Scatter)
    virtual int COMStub_Return0_99(int a1) override;  // X137B slot 99 = 0x739EC0 (bin: ProcessSell)
    virtual int ProcessInputKey(int a1, int a2, int a3) override;  // X137B slot 101 = 0x737430 (bin: MissionDispatch)
    virtual int COMStub_107(int a1, int a2, int a3, int a4, int a5) override;  // X137B slot 107 = 0x73F0A0 (bin: EvaluateTarget)
    virtual bool isMissionDone() const override;  // X137B slot 128 = 0x744270 (bin: CanBeTargeted)
    virtual int StubReturn450() override;  // X137B slot 132 = 0x7447A0 (bin: ScanTarget_0)
    virtual int CheckState1() override;  // X137B slot 135 = 0x740810 (bin: ProcessAIDecision)
    virtual int CheckState2() override;  // X137B slot 136 = 0x744100 (bin: SelectAITarget)
    virtual int CheckMissionStatus() override;  // X137B slot 137 = 0x73E5E0 (bin: ReadINI)
    virtual int COMStub_Ret450_138() override;  // X137B slot 138 = 0x73EFC0 (bin: DeployIntoBuilding)
    virtual int COMStub_Ret450_139() override;  // X137B slot 139 = 0x740A90 (bin: CheckRepairNeeded)
    virtual int GetMaxSize() override;  // X137B slot 143 = 0x73D630 (bin: Mission_Harvest; L4 正名: 真 Mission_Harvest 采集状态机)
    virtual int CheckMissionStatus2() override;  // X137B slot 147 = 0x740EF0 (bin: EnterRepairBuilding)
    virtual int COMStub_Ret450_151() override;  // X137B slot 151 = 0x740B10 (bin: updateTargeting)
    virtual int selectTarget() override;  // X137B slot 167 = 0x744180 (bin: AreBuildingFlagsClear)
    virtual int GetAnimationValue() const override;  // X137B slot 170 = 0x746E30 (bin: checkIronCurtainState)
    virtual int ComputeAverageValue() const override;  // X137B slot 173 = 0x7414A0 (bin: GetAverageDamageScore)
    virtual int GetAmmoCount() const override;  // X137B slot 174 = 0x740E50 (bin: GetAmmoCount_0)
    virtual int SelectWeapon() override;  // X137B slot 185 = 0x746CD0 (bin: SelectAttackWeapon)
    virtual int GetGlobalValue(int* outValue) const override;  // X137B slot 193 = 0x740B60 (bin: FindBestMovementDirection)
    virtual int Vt170() override;  // X137B slot 194 = 0x740F80 (bin: GetDeployProgressValue)
    virtual int GetCrew() const override;  // X137B slot 195 = 0x740EE0 (bin: GetCrew_0; X144c: return int per raw_decomp fn_74.c)
    virtual int HasPassengers() const override;  // X137B slot 223 = 0x746C90 (bin: checkSpawnState)
    virtual int ReadINI(int a1, int a2, int a3) override;  // X137B slot 240 = 0x740FD0 (bin: CheckUnitFireConstraints)
    virtual int SelectAutoTarget_Start_AU() override;  // X137B slot 241 = 0x743190 (bin: SelectAutoTargetWithGarrison)
    virtual int FireWeapon() override;  // X137B slot 243 = 0x741340 (bin: FireWeaponBurst)
    virtual int ProcessCapture() override;  // X137B slot 245 = 0x7463A0 (bin: TransferSlavedUnit)
    virtual int StepAnimFrame() override;  // X137B slot 265 = 0x736CA0 (bin: UpdateUnitAnimation)
    virtual int ActivateEffect() override;  // X137B slot 283 = 0x746670 (bin: ApplyObjectEffect)
    virtual int CheckAction() override;  // X137B slot 284 = 0x746720 (bin: ClearAllTargets)
    virtual int Stub(void *a2, int a3) override;  // X137B slot 288 = 0x741970 (bin: AssignDestination_SyncLog)
    virtual int CompleteFactoryProduction(int a2, int a3) override;  // X137B slot 289 = 0x738970 (bin: RespondToDestruction)
    virtual int GetTypeVt40() const override;  // X137B slot 303 = 0x746CB0 (bin: GetTypeVt40_2)
    virtual int GetTypeVt41() override;  // X137B slot 304 = 0x746CC0 (bin: GetTypeVt41_2)
    virtual int vt_entry_4D4() override;  // X137B slot 309 = 0x746420 (bin: CaptureTurret)
    virtual int vt_entry_4D8() override;  // X137B slot 310 = 0x7464E0 (bin: TransferTurret)
    virtual int vt_entry_4E4() override;  // X137B slot 313 = 0x736D50 (bin: IsC4AnimationActive)
    virtual void sub_41C130(int) override;  // X137B slot 333 = 0x7416A0 (bin: ProcessSpecialUnitDeployCrush)
    virtual void CalculateApproachPath(char a2) override;  // X137B slot 335 = 0x7414E0 (bin: ApproachTarget_DisallowMoving)

    // ========================================================================
    // X137B: UnitClass own virtuals -- binary table 0x7F5C70 slots [341]-[343] (3)
    // declaration order = slot order; arity = Capstone first-retn/4.
    // ========================================================================
    virtual int DrawVoxel(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // X137B slot 341 = 0x73B470 (bin: DrawVoxel)
    virtual int RenderObject(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // X137B slot 342 = 0x73C5F0 (bin: RenderObject)
    virtual int RenderTechnoSHP(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);  // X137B slot 343 = 0x73B140 (bin: RenderTechnoSHP)

    // unmatched: no callgraph reference and no git history record
    AbstractType __stdcall whatAmI() const;
    // design: virtual function, no binary implementation matched in IDA
    int objectSize() const ;

    // unmatched: no callgraph reference and no git history record
    void DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);
    // unmatched: no callgraph reference and no git history record
    void DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8);

    // === Phase 3: Harvest/Unload ===
    // 0x4151E0 归 AircraftClass::ProcessLanding (L4 正名 ra1audit); 真 UnitClass::Mission_Harvest = 0x73D630 (slot 143, 见上方 GetMaxSize override 声明)
    int ProcessResourceHarvesting();  // 0x73D450
    UnitClass* updateHarvesting();  // 0x4C2C10
    int UnloadPassengers(int placementType);  // 0x6B4BE0
    int ProcessExitQueue();  // 0x6B7230
    int CreateUnloadPlacementCraters(CellStruct* cell);  // 0x6B6080
    int GetExitCell(AbstractClass* aP1, AbstractClass* aP2, unsigned int *a2, unsigned int *a3);  // 0x54E3B0  // g57b5 W4

    // === Phase 3: Deploy ===
    int Deploy();  // 0x7192F0
    int DeployToBuilding();  // 0x738D30
    int SimpleDeployerDeploy();  // 0x739AC0
    int SimpleDeployerUndeploy();  // 0x739CD0
    int MissionDispatch(int* a2, int a3, int* a4);  // 0x737430

    // === Phase 3: Movement ===
    int CalcMoveTarget();  // 0x7359F0
    int AssignDestination_SyncLog(int64_t a2);  // 0x741970
    int ApproachTarget_DisallowMoving(char a2);  // 0x7414E0
    int UpdateRotation_TurretFacing_EMP();  // 0x736990
    int Scatter(CellStruct* threatPos, bool a3, bool a4);  // 0x743A50
    int IsCellBlockedByBridge(void* aP1);  // 0x458A00
    int CompareCoordinateMagnitude(short* a2);  // 0x4D03D0
    int processEnterTarget(int a2);  // 0x7178B0
    int CheckForNearbyEnemies();  // 0x7468C0
    int OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx, CellStruct* sourceCell, int a8, bool a9, void* a10);  // 0x737C90

    // === Phase 3: Weapon Switching ===
    int SetTurret(unsigned int a2);  // 0x70DC70
    int EvaluateTarget(int a2, int a3, int a4, int a5, char a6);  // 0x73F0A0
    bool CanCrushTarget(TechnoClass* aP1);  // 0x7438F0
    bool IsDeactivated();  // 0x70FBD0 (reads TechnoClass isDeactivated@+0x1C8)

    // === Phase 3: Construction & Destruct ===
    static int Create(void* aP0, void* aP1, int aP2);  // 0x6B4A50
    int ReadINI();  // 0x6B4C80
    int DestroySmudge(char a2);  // 0x6B4FA0
    void Destructor();  // 0x735780

    // === Phase 3: Stream & Save ===
    int LoadFromStream(void* a0, void* aP1);  // 0x744470
    int SaveLoadData(ObjectClass* aP1, int aP1a);  // 0x6B4EA0
    int SaveState(void* aP0, void* a1, void* aP2);  // 0x6B4F00

    // === Phase 3: Per-Frame & AI ===
    int PowerDrainUpdate(int a2) ;  // 0x744640
    virtual int PerFrameUpdate() override;  // 0x746810 | X137B slot 9 = 0x746810
    int HandleTargetDestroyed(void* a1, void* aP2);  // 0x7446E0
    int CheckStatus();  // 0x6B4F20
    int ClearTargetRef(int a2);  // 0x6B7C60
    int ProcessIdleOrders();  // 0x6B7BB0
    int StubReturn176();  // 0x6B4F30
    int StubReturn29();  // 0x6B4F40

    // === Phase 3: Approach Evaluate ===
    int ApproachEvaluate();  // 0x4D4280

    // === Phase 3: Drawing ===
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const;
    // wrapper: delegates to UnitClass::ApproachEvaluate at 0x4D4280
    void DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const;

    int32_t            UnitClass_field_int_6C0;
    UnitTypeClass*     Type;
    UnitClass*         FollowerCar;
    int32_t            FlagHouseIndex;
    bool               HasFollowerCar;
    bool               Unloading;
    bool               UnitClass_field_bool_6D2;
    bool               TerrainPalette;
    int32_t            UnitClass_field_int_6D4;
    int32_t            DeathFrameCounter;
    EBolt*             ElectricBolt;
    bool               Deployed;
    bool               Deploying;
    bool               Undeploying;
    int32_t            NonPassengerCount;
    wchar_t            ToolTipText[0x100];

private:
    // Idle-order array accessors: the binary stores the idle-order
    // pointer at +0x3C (ambientSoundController field_00) and the count
    // at +0x48 (ambientSoundController field_0C).
    IdleOrderEntry** idleOrderBase() const;
    int idleOrderCount() const;

protected:
    UnitClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Construct();  // 0x7353C0
    // --- gap2 auto-generated stub declarations (END) ---
    void* Locomotor; // 0x674  gB member supply
    void* q118; // 0x118  gB member supply

    unsigned char BuildingTypeClass_E2[4];  /* BuildingTypeClass */  // X10 supply (member_lookup)
    int FootClass_DVC_588;  // X10 supply (csp_canon_members)
    unsigned int FootClass_DVC_5AC;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_5A4;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_5D4;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_5DC;  // X10 supply (csp_canon_members)
    unsigned int FootClass_field_684;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_69C;  // X10 supply (csp_canon_members)
    unsigned char __pad_054;  // X10 supply (csp_canon_members)
    unsigned char __pad_118;  // X10 supply (csp_canon_members)
    unsigned char __pad_58C;  // X10 supply (csp_canon_members)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    unsigned char airstrikeTintTimer[4];  /* TimerStruct */  // X10 supply (csp_canon_members)
    unsigned char ambientSoundController[4];  /* AudioController */  // X10 supply (csp_canon_members)
    unsigned char animation[4];  /* ProgressTimer */  // X10 supply (csp_canon_members)
    TagClass* attachedTag;  // X10 supply (csp_canon_members)
    unsigned int audioLoopIndex3;  // X10 supply (csp_canon_members)
    bool bombVisible;  // X10 supply (csp_canon_members)
    void * bunkerLinkedUnit;  // X10 supply (csp_canon_members)
    void* currentMission;  // X10 supply (csp_canon_members)
    void* currentTurretNumber;  // X10 supply (csp_canon_members)
    int32_t currentWeaponSlot;  // X10 supply (csp_canon_members)
    int32_t customSound;  // X10 supply (csp_canon_members)
    AnimClass* deployAnim;  // X10 supply (csp_canon_members)
    ObjectTypeClass* disguiseAsType;  // X10 supply (csp_canon_members)
    void* firingParticles;  // X10 supply (csp_canon_members)
    void* focus;  // X10 supply (csp_canon_members)
    unsigned int grindingAnimHandle;  // X10 supply (csp_canon_members)
    int32_t health;  // X10 supply (csp_canon_members)
    bool inAirFlag;  // X10 supply (csp_canon_members)
    void* isAliveFlag;  // X10 supply (csp_canon_members)
    char isAttackedByLocomotor;  // X10 supply (csp_canon_members)
    bool isBomb;  // X10 supply (csp_canon_members)
    bool isChronoImmuneFlag;  // X10 supply (csp_canon_members)
    bool isHumanControlled;  // X10 supply (csp_canon_members)
    bool isOnMap;  // X10 supply (csp_canon_members)
    bool isSelected;  // X10 supply (csp_canon_members)
    void* isWarpingOut;  // X10 supply (csp_canon_members)
    unsigned char location[4];  /* CoordStruct */  // X10 supply (csp_canon_members)
    int32_t missionStatus;  // X10 supply (csp_canon_members)
    void* needsSave;  // X10 supply (csp_canon_members)
    ObjectClass* nextObject;  // X10 supply (csp_canon_members)
    unsigned int occupant;  // X10 supply (csp_canon_members)
    void* onBridge;  // X10 supply (csp_canon_members)
    unsigned char passengers[4];  /* PassengersClass */  // X10 supply (csp_canon_members)
    float pitchAngle;  // X10 supply (csp_canon_members)
    unsigned char primaryFacing[4];  /* FacingStruct */  // X10 supply (csp_canon_members)
    unsigned int q07E;  // X10 supply (member_lookup)
    unsigned char q405;  // X10 supply (member_lookup)
    unsigned int q406;  // X10 supply (member_lookup)
    unsigned char q407;  // X10 supply (member_lookup)
    unsigned int q598;  // X10 supply (member_lookup)
    void* q71C;  // X10 supply (member_lookup)
    unsigned char queuedMission[4];  /* Mission */  // X10 supply (csp_canon_members)
    void* railgunParticles;  // X10 supply (csp_canon_members)
    int32_t referenceCount;  // X10 supply (csp_canon_members)
    void* shouldLoseTarget;  // X10 supply (csp_canon_members)
    TechnoClass* spawnOwner;  // X10 supply (csp_canon_members)
    unsigned char storedTiberium[4];  /* OwnedTiberiumStruct */  // X10 supply (csp_canon_members)
    unsigned char suspendedMission[4];  /* Mission */  // X10 supply (csp_canon_members)
    unsigned int targetLaserFlags;  // X10 supply (csp_canon_members)
    unsigned int threatPosed;  // X10 supply (csp_canon_members)
    float tiltForwardsRate;  // X10 supply (csp_canon_members)
    void* tiltSidewaysAngle;  // X10 supply (csp_canon_members)
    int32_t turretChargeTimer;  // X10 supply (csp_canon_members)
    void* turretRecoil;  // X10 supply (csp_canon_members)
    unsigned int turretRotateSoundController;  // X10 supply (csp_canon_members)
    unsigned int u32_1946;  // X10 supply (member_lookup)
    unsigned int u32_1CC2;  // X10 supply (member_lookup)
    unsigned int u32_3D2;  // X10 supply (member_lookup)
    unsigned int u32_4C3;  // X10 supply (member_lookup)
    unsigned int u32_590;  // X10 supply (member_lookup)
    unsigned int u32_595;  // X10 supply (member_lookup)
    unsigned int u32_59C;  // X10 supply (member_lookup)
    unsigned int u32_5B4;  // X10 supply (member_lookup)
    unsigned int u32_5B9;  // X10 supply (member_lookup)
    unsigned int u32_5BC;  // X10 supply (member_lookup)
    unsigned int u32_5C0;  // X10 supply (member_lookup)
    int16_t u32_AB8;  // X10 supply (member_lookup)
    unsigned int u32_CC2;  // X10 supply (member_lookup)
    unsigned int u32_FC2;  // X10 supply (member_lookup)
    unsigned int u32_FC6;  // X10 supply (member_lookup)
    unsigned char u8_6C5;  // X10 supply (member_lookup)
    unsigned char u8_6C6;  // X10 supply (member_lookup)
    uint8_t u8_9E;  // X10 supply (member_lookup)
    unsigned int uniqueId;  // X10 supply (csp_canon_members)
    char unknownBool685;  // X10 supply (csp_canon_members)
    char unknownBool687;  // X10 supply (csp_canon_members)
    unsigned int voiceHandle;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)
    void* ptr_8;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)
    void* waveEffect;  // X10 supply (csp_canon_members)


    unsigned char u8_A7;  // 0xA7 [X55 W3 supply (render vocab)]
    unsigned int u32_A6;  // 0xA6 [X55 W3 supply (render vocab)]
    unsigned int u32_A5;  // 0xA5 [X55 W3 supply (render vocab)]
};

} // namespace gamemd
