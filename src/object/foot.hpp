#pragma once

#include "techno.hpp"

#include <unknwn.h>

namespace ra2 {
namespace game {

struct Matrix3DStruct;
struct SHPStruct;
struct VoxelStruct;
struct SomeVoxelCache;
class ILocomotion;
class LocomotionClass;
class ParasiteClass;
class TeamClass;

struct YRComPtr {
    ILocomotion* ptr;
};

class FootClass : public TechnoClass {
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x4);

    virtual ~FootClass();  // 0x4D3590 | X135 slot 8 = 0x4E0170 (deleting dtor)

    // === X135: inherited-range overrides (binary 0x7E8C94 slots 0-308 where RVA != TechnoClass) ===
    virtual HRESULT __stdcall Load(IStream* stream) override;  // X135 slot 5 = 0x4DB3C0 (bin: LoadFromStream_Common)
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // X135 slot 6 = 0x4DB690 (bin: SaveToStream_Common)
    virtual int Unlink(int a1, int a2) override;  // X135 slot 10 = 0x4D9960 (bin: HandleTargetDestroyed)
    virtual int ProcessPower() override;  // X135 slot 13 = 0x4DBAD0 (bin: BeginPowerUpdate)
    virtual int* GetCoordsEx(int* outBuffer, AbstractClass* source) override;  // X135 slot 19 = 0x4DBDF0 (bin: GetDeployCoords)
    virtual bool IsHeightAboveThreshold() override;  // X135 slot 21 = 0x4DE620 (bin: IsHeightAboveThreshold_0)
    virtual int DetectCloaked() override;  // X135 slot 23 = 0x4DA530 (bin: MovementAI)
    virtual int COMStub_26(int a1, int a2) override;  // X135 slot 26 = 0x4DA4E0 (bin: CheckTargetValidity)
    virtual int HasC4(int a1) override;  // X135 slot 27 = 0x4DED70 (bin: GetThreatValue)
    virtual int COMStub_28(int a1, int a2, int a3) override;  // X135 slot 28 = 0x4DDDE0 (bin: HandleCursorWithCheck)
    virtual int COMStub_29(int a1, int a2) override;  // X135 slot 29 = 0x4DDED0 (bin: GetCursorOverObject)
    virtual int GetThreatLevel() override;  // X135 slot 30 = 0x4DB7E0 (bin: Destru_vt30)
    virtual bool COMStub_Return0_38() override;  // X135 slot 38 = 0x4D9E70 (bin: CheckCohesion)
    virtual int CheckGroundHeightDiff(int a1) override;  // X135 slot 47 = 0x4DDC40 (bin: CheckHeightDiff)
    virtual int getCoordCenter() override;  // X135 slot 48 = 0x41C070 (bin: CheckDockState)
    virtual AbstractClass** Undeploy() override;  // X135 slot 53 = 0x4DB260 (bin: CleanupDirection)
    virtual AbstractClass** Deploy(int a1, int a2) override;  // X135 slot 54 = 0x4D7170 (bin: DispatchInput)
    virtual AbstractClass** Destroy2(int a1) override;  // X135 slot 55 = 0x4D9720 (bin: DispatchSell)
    virtual int Destroy() override;  // X135 slot 62 = 0x4DE5D0 (bin: PreDestroy)
    virtual int StubReturnFalse(int a1, int a2) override;  // X135 slot 69 = 0x4DB250 (bin: COMStub_Return0_69)
    virtual int UpdateProductionDisplay(int a1) override;  // X135 slot 73 = 0x4D3780 (bin: UpdateReveal)
    virtual int IsPlayerOwnedAndCheck() override;  // X135 slot 78 = 0x4DFA50 (bin: IsNotAttackAndPlayer)
    virtual int COMStub_80(int a1, int a2, int a3, int a4) override;  // X135 slot 80 = 0x4D7D50 (bin: SpawnInfantry)
    virtual int COMStub_81(int a1, int a2, int a3) override;  // X135 slot 81 = 0x4D74E0 (bin: ValidateMove)
    virtual int COMStub_Return0_85(int a1, int a2, int a3) override;  // X135 slot 85 = 0x4DEAE0 (bin: DeployAction)
    virtual int CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) override;  // X135 slot 91 = 0x4D7330 (bin: ProcessDeploy)
    virtual int COMStub_Return0_99(int a1) override;  // X135 slot 99 = 0x4D85D0 (bin: UpdateAI)
    virtual int ProcessInputKey(int a1, int a2, int a3) override;  // X135 slot 101 = 0x4D8FB0 (bin: MissionDispatch)
    virtual int COMStub_Return0_104(int a1) override;  // X135 slot 104 = 0x4D9F70 (bin: SellUnit)
    virtual int COMStub_Return0_105(int a1, int a2) override;  // X135 slot 105 = 0x4DC810 (bin: SetBuildingType)
    virtual int COMStub_107(int a1, int a2, int a3, int a4, int a5) override;  // X135 slot 107 = 0x4D9C10 (bin: Destru_vt107)
    virtual int COMStub_108(int a1, int a2, int a3, int a4, int a5) override;  // X135 slot 108 = 0x4D9C60 (bin: CheckCellFlags)
    virtual int SetPosition(int a1) override;  // X135 slot 109 = 0x4DB810 (bin: SetPositionAnimated)
    virtual int COMStub_125(int a1, int a2, int a3) override;  // X135 slot 125 = 0x4D8F40 (bin: OverrideMission_SyncLog)
    virtual int COMStub_126() override;  // X135 slot 126 = 0x4D8F80 (bin: ConditionalAction)
    virtual int StubReturn450() override;  // X135 slot 132 = 0x4D4DC0 (bin: ScanTarget)
    virtual int StubReturn450_133() override;  // X135 slot 133 = 0x4D4B20 (bin: CheckVoiceResponse)
    virtual int COMStub_Ret450_134() override;  // X135 slot 134 = 0x4D4CB0 (bin: ProcessMissionVoice)
    virtual int CheckState1() override;  // X135 slot 135 = 0x4D5070 (bin: FindMovePosition)
    virtual int CheckState2() override;  // X135 slot 136 = 0x4D6AA0 (bin: FindAITarget)
    virtual int COMStub_Ret450_138() override;  // X135 slot 138 = 0x4D5350 (bin: ProcessDeploy)
    virtual int COMStub_Ret450_139() override;  // X135 slot 139 = 0x4D4200 (bin: Destru_vt139)
    virtual int COMStub_Ret450_140() override;  // X135 slot 140 = 0x4DA2C0 (bin: ProcessMovement)
    virtual int GetMaxSize() override;  // X135 slot 143 = 0x4DA2B0 (bin: COMStub_143)
    virtual int COMStub_Ret450_144() override;  // X135 slot 144 = 0x4D9290 (bin: ProcessTeamAction)
    virtual int COMStub_Ret450_150() override;  // X135 slot 150 = 0x4DDF90 (bin: ProcessMissionState)
    virtual int COMStub_Ret450_151() override;  // X135 slot 151 = 0x4D4280 (bin: ApproachEvaluate)
    virtual int CheckCellPassability() override;  // X135 slot 162 = 0x4DBDA0 (bin: CanBeHunted)
    virtual int StubReturnFalse_164() override;  // X135 slot 164 = 0x41C050 (bin: ProcessTick)
    virtual int MissionStubReturnZero4() override;  // X135 slot 177 = 0x4DBA50 (bin: GetTargetCellCenter)
    virtual int CheckPlacementTileMatch() const override;  // X135 slot 179 = 0x4D3810 (bin: CheckTileSeed)
    virtual int GetDrawHeight() override;  // X135 slot 187 = 0x4DAFC0 (bin: ComputeSpeedFactor)
    virtual int MissionStubReturnZero5() override;  // X135 slot 188 = 0x4DB0A0 (bin: GetAttackSpeed)
    virtual int ClearLimpetCheck() override;  // X135 slot 189 = 0x41C150 (bin: ProcessTick2)
    virtual int COMStub_Return0_190() override;  // X135 slot 190 = 0x41C160 (bin: ProcessTick3)
    virtual int StubReturnFalse2_200() override;  // X135 slot 200 = 0x4DA1D0 (bin: CanBeControlled)
    virtual int COMStub_Return0_205() override;  // X135 slot 205 = 0x4DE580 (bin: ValidateFoundation)
    virtual int FindBridgeCell() override;  // X135 slot 206 = 0x4DD0A0 (bin: FindMoveTarget)
    virtual int StubReturnFalse3_207() override;  // X135 slot 207 = 0x4DFA70 (bin: FindClosestInfantry)
    virtual int StubReturnFalse4_208() override;  // X135 slot 208 = 0x4DFB70 (bin: FindClosestUnit)
    virtual int StubReturnFalse10() override;  // X135 slot 209 = 0x4DFF40 (bin: FindClosestBuilding)
    virtual int StubReturnFalse11() override;  // X135 slot 210 = 0x4DFCB0 (bin: FindClosestForRepair)
    virtual int StubReturnFalse12() override;  // X135 slot 211 = 0x4DFE00 (bin: FindClosestForRepair2)
    virtual int StubReturnFalse13() override;  // X135 slot 224 = 0x4DE770 (bin: IsTimerActive)
    virtual int OnCellPlacementComplete() override;  // X135 slot 229 = 0x4DE630 (bin: OnCompleteAction)
    virtual int ProcessDeploymentState() override;  // X135 slot 232 = 0x4D5660 (bin: EnterAttackState)
    virtual int vt_entry_68() override;  // X135 slot 238 = 0x4D98C0 (bin: Destroyed)
    virtual int SelectAutoTarget_Start_AU() override;  // X135 slot 241 = 0x4D9920 (bin: SelectAutoTarget_Cloaked)
    virtual int ProcessCapture() override;  // X135 slot 245 = 0x4DBED0 (bin: LiberateMember)
    virtual int StubReturnFalse14() override;  // X135 slot 247 = 0x4DEBB0 (bin: UpdateTeamAI)
    virtual int GetBridgeAwareCoords() override;  // X135 slot 267 = 0x4D8560 (bin: GetCoords)
    virtual int COMStub_Return0_270() override;  // X135 slot 270 = 0x4DC060 (bin: CheckTargetCell)
    virtual int COMStub_Return0_287() override;  // X135 slot 287 = 0x4D94A0 (bin: SetMember360)
    virtual int Stub(void *a2, int a3) override;  // X135 slot 288 = 0x4D94B0 (bin: AssignDestination)
    virtual int CompleteFactoryProduction(int a2, int a3) override;  // X135 slot 289 = 0x4D82B0 (bin: ValidatePlacement)
    virtual int vt_entry_68_292() override;  // X135 slot 292 = 0x4DF510 (bin: ScanAdjacentCells)
    virtual int ClearUnknownFlag() override;  // X135 slot 297 = 0x4DF0E0 (bin: MissionSell_Dispatch)
    virtual int COMStub_Return0_298() override;  // X135 slot 298 = 0x4DF1A0 (bin: vt_entry_4A8)
    virtual int StubReturnFalse5_299() override;  // X135 slot 299 = 0x4DF1C0 (bin: vt_entry_4AC)
    virtual int StubReturnFalse6_300() override;  // X135 slot 300 = 0x4DF1D0 (bin: vt_entry_4B0)
    virtual int checkMovementRestrictions() override;  // X135 slot 301 = 0x4DF1E0 (bin: vt_entry_4B4)
    virtual int ProcessCellClearance() override;  // X135 slot 302 = 0x4DF1F0 (bin: vt_entry_4B8)
    virtual int StubReturnFalse7_305() override;  // X135 slot 305 = 0x4DF310 (bin: vt_entry_4C4)
    virtual int StubReturnFalse8_306() override;  // X135 slot 306 = 0x4DF320 (bin: vt_entry_4C8)
    virtual int COMStub_Return0_307() override;  // X135 slot 307 = 0x4DF3A0 (bin: UpdateAttackMove_SelectNewTarget)
    virtual int StubReturnFalse9_308() override;  // X135 slot 308 = 0x4DF4B0 (bin: vt_entry_4D0)

    // ========================================================================
    // X135: FootClass own virtuals -- binary table 0x7E8C94 slots [309]-[340] (32)
    // declaration order = slot order; arity = Capstone first-retn/4.
    // ========================================================================
    virtual int vt_entry_4D4();  // X135 slot 309 = 0x4DE750 (bin: vt_entry_4D4)
    virtual int vt_entry_4D8();  // X135 slot 310 = 0x4DE760 (bin: vt_entry_4D8)
    virtual int Destru_vt311();  // X135 slot 311 = 0x4DC790
    virtual int sub_4DBFD0();  // X135 slot 312 = 0x4DBFD0 (bin: vt_entry_4E0)
    virtual int vt_entry_4E4();  // X135 slot 313 = 0x41C060 (bin: vt_entry_4E4)
    virtual bool IsTargetInRange() const;  // X135 slot 314 = 0x4DE7B0
    virtual int CheckCellPassable_315() const;  // X135 slot 315 = 0x4DE940 (renamed from CheckCellPassable)
    virtual int sub_4D9FF0();  // X135 slot 316 = 0x4D9FF0 (bin: vt_entry_4F0)
    virtual int sub_4DC030();  // X135 slot 317 = 0x4DC030 (bin: vt_entry_4F4)
    virtual char sub_41C080();  // X135 slot 318 = 0x41C080 (bin: vt_entry_4F8)
    virtual int Destru_vt319();  // X135 slot 319 = 0x4D55F0
    virtual int PlayCOM_audio();  // X135 slot 320 = 0x4D55C0
    virtual bool vt_entry_504();  // X135 slot 321 = 0x4DB9B0 (bin: vt_entry_504)
    virtual int Destru_vt322();  // X135 slot 322 = 0x4DF7F0
    virtual int Destru_vt323();  // X135 slot 323 = 0x41C090
    virtual int UpdateState_324();  // X135 slot 324 = 0x4DAF10 (renamed from UpdateState)
    virtual void sub_41C0F0();  // X135 slot 325 = 0x41C0F0 (bin: vt_entry_514)
    virtual bool StubReturnFalse();  // X135 slot 326 = 0x41C100
    virtual void StubReturnVoid();  // X135 slot 327 = 0x41C110
    virtual int Stub_328();  // X135 slot 328 = 0x41C120 (bin: Stub)
    virtual void sub_4D9C00();  // X135 slot 329 = 0x4D9C00 (bin: vt_entry_524)
    virtual int FindBestMatch(int a1, int a2, int a3);  // X135 slot 330 = 0x4DF040 (bin: FindBestMatch)
    virtual int ValidatePlacementEx(int a1, int a2, int a3, int a4);  // X135 slot 331 = 0x4DEE80 (bin: ValidatePlacementEx)
    virtual int sub_4DEE50(int a2, int a3, int a4);  // X135 slot 332 = 0x4DEE50 (bin: vt_entry_530)
    virtual void sub_41C130(int);  // X135 slot 333 = 0x41C130 (bin: vt_entry_534)
    virtual int ComputeSpeedFactorEx();  // X135 slot 334 = 0x4DB1A0 (bin: ComputeSpeedFactorEx)
    virtual void CalculateApproachPath(char a2);  // X135 slot 335 = 0x4D5690
    virtual void sub_41C140();  // X135 slot 336 = 0x41C140 (bin: vt_entry_540)
    virtual int Destru_vt337(int a2 = 0, double a3 = 0.0);  // X135 slot 337 = 0x4D3710
    virtual void sub_4DBA30();  // X135 slot 338 = 0x4DBA30 (bin: vt_entry_548)
    virtual void sub_4DBA40();  // X135 slot 339 = 0x4DBA40 (bin: vt_entry_54C)
    virtual int ValidateTargetCell();  // X135 slot 340 = 0x4DDC60

    void Destroyed(ObjectClass* killer);  // 0x4D98C0
    int GetActionOnObject();  // 0x4DDED0
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    void onBuildingPlacement(uint32_t a, uint32_t b);

    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    void ReceiveGunner(FootClass* gunner);
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    void RemoveGunner(FootClass* gunner);
    // wrapper: delegates to FootClass::Destroyed at 0x4D98C0
    bool IsLeavingMap() const;
    // design: virtual function, no binary implementation matched in IDA
    bool canMove() const;
    // design: virtual function, no binary implementation matched in IDA
    bool onProductionComplete() const;
    // design: virtual function, no binary implementation matched in IDA
    void onCellEntry(CellStruct* cell);
    void processSuperWeapon(CellStruct* cell);
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    CoordStruct* getMoveCoords(CoordStruct* out);
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    void onMoveStart();
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    bool canStop();
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    bool MoveTo(CoordStruct* coords);
    // wrapper: delegates to BuildingClass::ProcessSuperWeaponEffects at 0x44C980
    bool StopMoving();
    // design: virtual function, no binary implementation matched in IDA
    bool canRecruitTeamMember();
    // design: virtual function, no binary implementation matched in IDA
    bool ChronoWarpTo(CoordStruct dest);
    void Draw_A_SHP(
        SHPStruct* shp, int facing_idx, Point2D* coords, RectangleStruct* rect,
        uint32_t a5, uint32_t a6, uint32_t a7, ZGradient gradient,
        uint32_t a9, int extra_light, uint32_t a11, uint32_t a12,
        uint32_t a13, uint32_t a14, uint32_t a15, uint32_t a16);
    void Draw_A_VXL(
        VoxelStruct* vxl, int hva_frame_index, int flags, SomeVoxelCache* cache,
        RectangleStruct* rect, Point2D* center_point, Matrix3DStruct* matrix,
        uint32_t a8, uint32_t draw_flags, uint32_t a10);
    // design: virtual function, no binary implementation matched in IDA
    void onDrawComplete();
    void Panic();
    // wrapper: delegates to InfantryClass::startPanic at 0x772AC0
    void UnPanic();
    void PlayIdleAnim(int idle_anim_number);
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    uint32_t getMovementMode();
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    uint32_t getPathDistance(uint32_t a, uint32_t b, uint32_t c) const;
    // wrapper: delegates to InfantryClass::PlayIdleAnim at 0x51DAF0
    uint32_t getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const;
    uint32_t isAreaClear(uint32_t a, uint32_t b, uint32_t c) const;
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    void onAreaEntry(uint32_t a, uint32_t b);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    int GetCurrentSpeed() const;
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    uint32_t getWaypointData(uint32_t a);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    void onWaypointReached(uint32_t a);
    // wrapper: delegates to IsAreaClearMap at 0x5A7250
    void SetSpeedPercentage(double percentage);
    // design: virtual function, no binary implementation matched in IDA
    void onPathComplete();
    // design: virtual function, no binary implementation matched in IDA
    void onMovementDone();
    bool CanEnterCell(uint32_t a); // 0x709290

    bool MovementAI();  // 0x4DA530

    // wrapper: delegates to FootClass::MovementAI at 0x4DA530
    int Mission_Move() ;
    int Mission_Attack() ;
    int Mission_Guard() ;
    // wrapper: delegates to BuildingClass::Mission_Guard at 0x459E70
    int Mission_Hunt() ;

    // === Phase 3 generated declarations (IDA functions.json) ===
    int MissionMoveCarryallLand();  // 0x416AF0
    // G42 归属正名: GetTurretAngle(0x43ED40)/ProcessDemolish(0x4415F0) 真身 =
    // BuildingClass (canon vt+1256/vt+1260 + IDA typed this=BuildingClass* +
    // this->Type@1312 读 BuildingTypeClass*), 声明迁 building.hpp
    // G42.34 同族: UpdateSidebar(0x4456D0 vt+1248)/ProcessPrimarySelect(0x448160
    // vt+1264) 同为 canon BuildingClass 归属 (raw typed this=BuildingClass*,
    // 体读 this->Type@1312), 声明迁 building.hpp
    int StubReturn0();  // 0x452250
    void ScanCircleForUnits();  // 0x4556D0
    void ScanCircleForUnits2();  // 0x455820
    int GetCapacity() const; // 0x45A540
    int ResizeOccupiedCellList();  // 0x45A560
    int sub_4734B0();
    int checkTerrainSpeed(int a2);  // 0x487150 (G42.33 批 3: 真值 inc word [this+0x7C+a2*2])
    int updateLocomotion(int a2);  // 0x487160 (G42.33 批 3: 真值 dec word [this+0x7C+a2*2])
    int FindPathWithRetry();
    void ProcessDeployMission();  // 0x4CD2A0
    void UpdateDeployMovement();  // 0x4CE680
    int PostLoadInit();  // 0x4D3540
    void UpdateReveal(int a2 = 0); // 0x4D3780
    bool CheckTileSeed(int* coords);  // 0x4D3810
    int MovementStep();  // 0x4D3920
    int Destru_vt139();  // 0x4D4200
    bool CheckVoiceResponse() const;  // 0x4D4B20
    void ProcessMissionVoice();  // 0x4D4CB0
    int FindMovePosition();  // 0x4D5070
    int EnterAttackState();  // 0x4D5660
    int FindAITarget();  // 0x4D6AA0
    int DispatchInput(int* coords, int a3);  // 0x4D7170
    void ProcessDeploy();  // 0x4d7330
    int ValidateMove(int action, AbstractClass* target, int flags);  // 0x4d74e0
    int ValidatePlacement(int a2, int a3);  // 0x4d82b0 (vt+1156; binary: (this, 0, 1) form)
    int GetCoords() const; // 0x4D8560
    void UpdateAI();  // 0x4D85D0
    int OverrideMission_SyncLog(); // 0x4D8F40
    int ConditionalAction();  // 0x4D8F80
    int MissionDispatch(void * a2, int a3, void ** a4);  // 0x4D8FB0 (G42.42l truth arity)
    void ProcessTeamAction();  // 0x4D9290
    int AssignDestination();  // 0x4D94B0
    int DispatchSell();  // 0x4D9720
    int SelectAutoTarget_Cloaked(int a2 = 0, int a3 = 0, int a4 = 0);  // 0x4D9920
    int HandleTargetDestroyed(int* a2, int* a3);  // 0x4D9960 (G42.42d truth arity)
    int Destru_vt107();  // 0x4D9C10
    void ClearSomeVector();  // 0x4DA1C0
    bool CanBeControlled() const;  // 0x4DA1D0
    bool CanBeRecruited() const;  // 0x4DA230
    void ClearSomeVector2();  // 0x4DA2A0
    void ProcessMovement();  // 0x4DA2C0
    bool CheckTargetValidity() const; // 0x4DA4E0
    int GetAttackSpeed() const;  // 0x4DB0A0
    int Destru_vt30();  // 0x4DB7E0
    int BeginPowerUpdate(int* a2);  // 0x4DBAD0 (G42.42d truth arity)
    bool CanBeHunted() const;  // 0x4DBDA0
    int LiberateMember();  // 0x4DBED0
    int CheckTargetCell() const; // 0x4DC060
    void SetBuildingType();  // 0x4DC810
    int MoveToTiberium();  // 0x4DCFE0
    int FindMoveTarget();  // 0x4dd0a0
    int MoveToWeed();  // 0x4DDB90
    bool CheckHeightDiff() const;  // 0x4DDC40
    int HandleCursorWithCheck(int16_t* a2, char a3, char a4);  // 0x4DDDE0 (G42.42d truth arity)
    void ProcessMissionState();  // 0x4DDF90
    int ValidateFoundation(); // 0x4DE580
    int PreDestroy();  // 0x4DE5D0
    int OnCompleteAction();  // 0x4DE630
    int RemovePassenger();  // 0x4DE670
    int PopAndProcess();  // 0x4DE710
    bool IsTimerActive() const;  // 0x4DE770
    bool DeployAction();  // 0x4DEAE0
    void UpdateTeamAI();  // 0x4DEBB0
    void ClearPathIndex();  // 0x4DF0D0
    int MissionSell_Dispatch();  // 0x4DF0E0
    void UpdateAttackMove_SelectNewTarget();  // 0x4DF3A0
    void ScanAdjacentCells();  // 0x4df510
    bool IsNotAttackAndPlayer() const;  // 0x4DFA50
    int Jumpjet_OccupyCell();  // 0x4E00B0
    int Destru_vt08(); // 0x4E0170
    int RemoveFromPointerArray(); // 0x4E0ED0
    // wrapper: delegates to FootClass::RemoveFromPointerArray at 0x4E0ED0
    int sub_550DAA0();
    int FindNearestApproachableCell();  // 0x586FC0
    bool CreateWakes();  // 0x629E90
    // wrapper: delegates to FootClass::CreateWakes at 0x629E90
    int sub_56E52F0();
    int LinkToTransporter();  // 0x6EB380
    int GetGameSpeedFromSession() const;  // 0x6F03B0
    int CompleteProduction(); // 0x6F5090
    void UpdateLocomotion();  // 0x6fb740
    int ProcessEnterTransport();  // 0x70D7E0
    void SetThreatBounds(); // 0x70F670
    int ApplyThreatBounds();  // 0x70F6A0
    // wrapper: delegates to FootClass::ApplyThreatBounds at 0x70F6A0
    int sub_570F7E0();
    int sub_70FEB0();
    void UpdatePassengerCoords();  // 0x7104F0
    void Cleanup(); // 0x729480
    int RespondToDestruction();  // 0x738970
    // wrapper: delegates to FootClass::RespondToDestruction at 0x738970
    int sub_5746D80();
    bool CheckAccelLimit() const;  // 0x750030
    int GetField() const;  // 0x7500d0
    int SetField(int a2); // 0x7500E0 (G42.33 批 3: 真值 fild a2 / fmul 0.01 / fstp [this])

protected:
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void EmitMovementSmoke();
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void UpdateMovementAmbiguity();
    // wrapper: delegates to FootClass::SetField at 0x7500E0
    void UpdateMovementSpeed();
    // design: no binary equivalent found in IDA
    void HandleMovementSoundupdateLogic();
    // design: no binary equivalent found in IDA
    void HandleLocomotionupdateLogic();

    // ---- member variables ----

    int32_t            planningPathIdx;
    int16_t            unknownShort524;
    int16_t            unknownShort526;
    int16_t            unknownShort528;
    int16_t            FootClass_field_short_52A;
    uint32_t           FootClass_field_52C;
    uint32_t           unknown530;
    uint32_t           unknown534;
    uint32_t           unknown538;
    bool               FootClass_field_bool_53C;
    uint8_t            m_padding_53D[3];
    uint32_t           unknown540;
    AudioController    audioController7;
    CellStruct         currentMapCoords;
    CellStruct         lastMapCoords;
    CellStruct         lastJumpjetMapCoords;
    CellStruct         currentJumpjetMapCoords;
    CoordStruct        unknownCoords568;
    uint32_t           unused574;
    double             currentSpeed_percentage;
    double             currentSpeed_multiplier;
    DynamicVectorClass<AbstractClass*> unknownAbstractArray588;
    uint32_t           FootClass_field_5A0;
    AbstractClass*     movementDestination;
    AbstractClass*     lastDestination;
    DynamicVectorClass<AbstractClass*> FootClass_field_abstract_array_5AC;
    int32_t            FootClass_field_int_5C4;
    uint32_t           FootClass_field_5C8;
    uint32_t           FootClass_field_5CC;
    uint8_t            FootClass_field_5D0;
    bool               FootClass_field_bool_5D1;
    uint8_t            m_padding_5D2[2];
    TeamClass*         team;
    FootClass*         nextTeamMember;
    uint32_t           FootClass_field_5DC;
public:  // g57w10: locomotion-family access (0x51456a; binary flat-access)
    int32_t            pathDirections[24];
    TimerStruct        pathDelayTimer;
    int32_t            FootClass_field_int_64C;
    TimerStruct        FootClass_field_timer_650;
    TimerStruct        sightTimer;
    TimerStruct        blockagePathTimer;
public:
    YRComPtr           locomotor;   // YRpp: public (written by LocomotionClass::ChangeLocomotorTo)
protected:
    CoordStruct        unknownPoint3d678;
public:  // g57w10: locomotion-family access (0x51470d; binary flat-access)
    signed char        tubeIndex;
    bool               unknownBool685;
    signed char        waypointIndex;
    bool               unknownBool687;
    bool               unknownBool688;
    bool               isTeamLeader;
    bool               shouldScanForTarget;
    bool               FootClass_field_bool_68B;
    bool               FootClass_field_bool_68C;
    bool               unknownBool68D;
    bool               FootClass_field_bool_68E;
    bool               shouldEnterAbsorber;
    bool               shouldEnterOccupiable;
    bool               shouldGarrisonStructure;
    FootClass*         parasiteEatingMe;
    uint32_t           unknown698;
    ParasiteClass*     parasiteImUsing;
    TimerStruct        paralysisTimer;
    bool               FootClass_field_bool_6AC;
    bool               isAttackedByLocomotor;
    bool               isLetGoByLocomotor;
    bool               FootClass_field_bool_6AF;
    bool               FootClass_field_bool_6B0;
    bool               FootClass_field_bool_6B1;
    bool               FootClass_field_bool_6B2;
    bool               FootClass_field_bool_6B3;
    bool               FootClass_field_bool_6B4;
    bool               FootClass_field_bool_6B5;
public:  // g57w10: locomotion-family access (0x51451e/0x514528; binary flat-access)
    bool               frozenStill;
    bool               FootClass_field_bool_6B7;
    bool               FootClass_field_bool_6B8;
    uint8_t            m_padding_6B9[3];
    uint32_t           m_unused_6BC;

protected:
    FootClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int DrawPlacementPreview();  // 0x43DA80
    int Get(int a1);  // 0x45A040
    int Add(int a1);  // 0x45A3E0
    int Release(int a1, void* a2);  // 0x45A420
    int GetSize(void* a1);  // 0x45A500
    void* QueryInterface(int a1);  // 0x45AA60
    void updateMovementAnimation(int a1);  // 0x4734B0
    void* Construct(int a1);  // 0x4D31E0
    int checkTurning();  // 0x50DAA0
    void* processScriptAction(void* a1);  // 0x6E52F0
    bool CanEnterBuilding();  // 0x7091D0
    bool checkPassability();  // 0x70FEB0
    void Process();  // 0x729AA0
    int updateScanRange();  // 0x746D80
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool updateThreat();  // 0x70f7e0 -- FootClass::updateThreat
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void FootClass_ImbueLocomotor();  // 0x710000
    // === G42.41m supplies (ml names; /c-gate) ===
    uint8_t q1F0[16];  // ml @0x1F0 word-array base (checkTerrainSpeed 0x487154 inc/dec)
    // === FUNCS-MOVE (END) ===
    unsigned int q021; // 0x21  gB member supply
    unsigned int q0A0; // 0xA0  gB member supply
    unsigned int q0A4; // 0xA4  gB member supply
    void* ptr_0;  // 0x0 (ml truth)  gB ptr_0 supply
    void* ptr_4;  // 0x4 (ml truth)  gB ptr_0 supply
    void* ptr_8;  // 0x8 (ml truth)  gB ptr_0 supply
public:  // g57c5 W4 supply slot
    ILocomotion* Locomotor;  // 0x674 g57c5 W4 supply (ml FootClass@0x674)

    int16_t FootClass_field_558;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_55A;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_55C;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_55E;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_560;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_562;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_564;  // X10 supply (csp_canon_members)
    int16_t FootClass_field_566;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_5A4;  // X10 supply (csp_canon_members)
    int32_t FootClass_field_5D4;  // X10 supply (csp_canon_members)
    bool NeedsSaveOrLink;  // X10 supply (csp_canon_members)
    unsigned char __pad_58C;  // X10 supply (csp_canon_members)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    unsigned char airstrikeTintTimer[12];  /* PassengersClass */  // X10 supply (csp_canon_members)
    unsigned char alignmentPadding75;  // X10 supply (csp_canon_members)
    unsigned char ambientSoundController[20];  /* AudioController */  // X10 supply (csp_canon_members)
    BombClass* attachedBomb;  // X10 supply (csp_canon_members)
    void* attachedTag;  // X10 supply (csp_canon_members)
    TeamClass* auxParticles2;  // X10 supply (csp_canon_members)
    unsigned int bunkerLinkedUnit;  // X10 supply (csp_canon_members)
    SpawnManagerClass* captureManager;  // X10 supply (csp_canon_members)
    unsigned int chronoDestCoords;  // X10 supply (csp_canon_members)
    unsigned char cloakDelayTimer;  // X10 supply (csp_canon_members)
    unsigned char cloakProgress[8];  /* unsigned long long */  // X10 supply (csp_canon_members)
    unsigned char cloakState[4];  /* ProgressTimer */  // X10 supply (csp_canon_members)
    void* currentMission;  // X10 supply (csp_canon_members)
    unsigned char customSound_controller[20];  /* AudioController */  // X10 supply (csp_canon_members)
    void* disguiseBlinkTimer;  // X10 supply (csp_canon_members)
    void* drainTarget;  // X10 supply (csp_canon_members)
    ParticleSystemClass* fireParticles;  // X10 supply (csp_canon_members)
    bool firingParticles;  // X10 supply (csp_canon_members)
    AbstractClass* focus;  // X10 supply (csp_canon_members)
    IUnknown * health;  // X10 supply (csp_canon_members)
    void* inLimbo;  // X10 supply (csp_canon_members)
    bool inOpenToppedTransport;  // X10 supply (csp_canon_members)
    unsigned char initialOwner[4];  /* VeterancyStruct */  // X10 supply (csp_canon_members)
    bool isALoaner;  // X10 supply (csp_canon_members)
    void* isAliveFlag;  // X10 supply (csp_canon_members)
    FootClass* isBerserk;  // X10 supply (csp_canon_members)
    bool isBomb;  // X10 supply (csp_canon_members)
    bool isCrashing;  // X10 supply (csp_canon_members)
    void* isDiscoveredByCurrentPlayer;  // X10 supply (csp_canon_members)
    bool isFallingDown;  // X10 supply (csp_canon_members)
    bool isImmobilized;  // X10 supply (csp_canon_members)
    unsigned char isImmobilized_d;  // X10 supply (csp_canon_members)
    unsigned int isInPlayfield;  // X10 supply (csp_canon_members)
    unsigned int isRecruitableByAlly;  // X10 supply (csp_canon_members)
    bool isSinking;  // X10 supply (csp_canon_members)
    bool isTether;  // X10 supply (csp_canon_members)
    int32_t lastSightHeight;  // X10 supply (csp_canon_members)
    int32_t lastSightRange;  // X10 supply (csp_canon_members)
    unsigned char location[12];  /* CoordStruct */  // X10 supply (csp_canon_members)
    bool locomotorSource;  // X10 supply (csp_canon_members)
    TechnoClass* locomotorTarget;  // X10 supply (csp_canon_members)
    TechnoClass* mindControlRingAnim;  // X10 supply (csp_canon_members)
    SlaveManagerClass* mindControlledBy_a_unit;  // X10 supply (csp_canon_members)
    int32_t missionStatus;  // X10 supply (csp_canon_members)
    void* nextArrayIndex;  // X10 supply (csp_canon_members)
    void* nextObject;  // X10 supply (csp_canon_members)
    unsigned int objectTypeFlags;  // X10 supply (csp_canon_members)
    bool onBridge;  // X10 supply (csp_canon_members)
    HouseClass * owner;  // X10 supply (csp_canon_members)
    void* owningHouseIndex;  // X10 supply (csp_canon_members)
    unsigned char passengers[8];  /* unsigned long long */  // X10 supply (csp_canon_members)
    unsigned char primaryFacing[24];  /* FacingStruct */  // X10 supply (csp_canon_members)
    unsigned int q051;  // X10 supply (member_lookup)
    void* q150C;  // X10 supply (member_lookup)
    AbstractClass* q590;  // X10 supply (member_lookup)
    unsigned int q598;  // X10 supply (member_lookup)
    unsigned int q59C;  // X10 supply (member_lookup)
    unsigned int q5BC;  // X10 supply (member_lookup)
    unsigned int q5C0;  // X10 supply (member_lookup)
    TechnoClass* queueUpToEnter;  // X10 supply (csp_canon_members)
    unsigned char queuedMission[4];  /* Mission */  // X10 supply (csp_canon_members)
    int32_t referenceCount;  // X10 supply (csp_canon_members)
    unsigned char reloadTimer;  // X10 supply (csp_canon_members)
    CaptureManagerClass* rockerLinkedUnit;  // X10 supply (csp_canon_members)
    unsigned int slaveOwner;  // X10 supply (csp_canon_members)
    TechnoClass* spawnManager;  // X10 supply (csp_canon_members)
    AnimClass* target;  // X10 supply (csp_canon_members)
    TemporalClass* temporalUsing;  // X10 supply (csp_canon_members)
    unsigned int threatPosed;  // X10 supply (csp_canon_members)
    unsigned int u32_6C0;  // X10 supply (member_lookup)
    unsigned int u32_6C4;  // X10 supply (member_lookup)
    unsigned int u32_6CC;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    unsigned int unitValue;  // X10 supply (csp_canon_members)
    int vecAbs_Capacity;  // X10 supply (csp_canon_members)
    unsigned int veterancy;  // X10 supply (csp_canon_members)
    unsigned int visibilityFlags;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)
    bool wasAlreadyCrashing;  // X10 supply (csp_canon_members)
    unsigned int wasAlreadySinking;  // X10 supply (csp_canon_members)
    bool wasFallingDown;  // X10 supply (csp_canon_members)
    unsigned int waveEffect;  // X10 supply (csp_canon_members)
};

} // namespace game
} // namespace ra2
