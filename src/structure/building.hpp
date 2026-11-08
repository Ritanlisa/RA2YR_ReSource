#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/techno.hpp"
#include "misc/repeatable_timer.hpp"
namespace ra2 { namespace game { class BombClass; } }  // X27: member-decl type supply

namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    class BombClass;  // X28: C2874 fwd (using collided with existing gamemd decl)
    class LineTrail;
    class ParticleSystemClass;

using ra2::game::ObjectClass;
using ra2::game::TechnoClass;
using ra2::game::AudioController;
using ra2::game::AbstractType;
using ra2::game::CellStruct;
using ra2::game::CoordStruct;
using ra2::game::Point2D;
using ra2::game::RectangleStruct;
using ra2::game::TimerStruct;

class AnimClass;
struct ColorStruct;
// CSP: BuildingLightClass matched via T1+T3
class BuildingLightClass;
// CSP: BuildingTypeClass matched via T1
class BuildingTypeClass;
class FactoryClass;
class HouseClass;
class InfantryClass;
class InfantryTypeClass;
class LightSourceClass;
class TechnoTypeClass;
class RulesClass;

// CSP: BuildingClass matched via T1+T3
class BuildingClass : public ra2::game::TechnoClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Building;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // X137B slot 3 = 0x459E80

    virtual ~BuildingClass() override = default;  // X137B slot 8 = 0x459F20 (deleting dtor; 0X43BCF0 = complete dtor)

    // === X137B: inherited-range overrides (binary 0x7E3EBC slots 0-308 where RVA != TechnoClass) ===
    virtual HRESULT __stdcall Load(IStream* stream) override;  // X137B slot 5 = 0x453E20 (bin: LoadFromStream)
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // X137B slot 6 = 0x454190 (bin: Size)
    virtual int PerFrameUpdate() override;  // X137B slot 9 = 0x442C40 (bin: Update)
    virtual int Unlink(int a1, int a2) override;  // X137B slot 10 = 0x44E8F0 (bin: OnObjectExpired)
    virtual int COMStub_Return0_11() override;  // X137B slot 11 = 0x459EC0 (bin: Mission_Construction)
    virtual int COMStub_Return0_12() override;  // X137B slot 12 = 0x459E70 (bin: Mission_Guard)
    virtual int ProcessPower() override;  // X137B slot 13 = 0x454260 (bin: PowerDrainUpdate)
    virtual unsigned int* GetInvalidCoord(unsigned int* out) override;  // X137B slot 18 = 0x447AC0 (bin: GetExitCoords)
    virtual int* GetCoordsEx(int* outBuffer, AbstractClass* source) override;  // X137B slot 19 = 0x447E90 (bin: TogglePrimaryFactory)
    virtual int DetectCloaked() override;  // X137B slot 23 = 0x43FB20 (bin: ProcessSpreadEffect)
    virtual int COMStub_26(int a1, int a2) override;  // X137B slot 26 = 0x4544A0 (bin: UpdatePowerDrain)
    virtual int HasC4(int a1) override;  // X137B slot 27 = 0x4513D0 (bin: ProductionCheck)
    virtual int COMStub_28(int a1, int a2, int a3) override;  // X137B slot 28 = 0x447540 (bin: HandleRepairCursor)
    virtual int COMStub_29(int a1, int a2) override;  // X137B slot 29 = 0x447210 (bin: HandleClickEvent)
    virtual bool COMStub_Return0_32() override;  // X137B slot 32 = 0x457620 (bin: IsFactorySelectable)
    virtual int COMStub_Return0_34() override;  // X137B slot 34 = 0x459EE0 (bin: GetTypePtr)
    virtual int COMStub_Ret8487648_36() override;  // X137B slot 36 = 0x459ED0 (bin: GetTypeField60)
    virtual bool COMStub_Return0_37() override;  // X137B slot 37 = 0x452630 (bin: CheckHealthForRepair)
    virtual bool COMStub_Return0_38() override;  // X137B slot 38 = 0x4494C0 (bin: CanBeSold)
    virtual bool COMStub_Return0_40() override;  // X137B slot 40 = 0x44F5C0 (bin: CanBeSoldCheck)
    virtual int GetCoordsThunk1(int a1) override;  // X137B slot 41 = 0x4500A0 (bin: GetAdjustedExitCoords)
    virtual int GetCoords_Alt(int a1, int a2) override;  // X137B slot 42 = 0x447B20 (bin: CalculateTurretAngle)
    virtual int GetCoordsThunk2(int a1) override;  // X137B slot 43 = 0x459EF0 (bin: GetBuildCoordsAdjusted)
    virtual int GetDrawPosition(int a1, int a2, int a3, int a4, int a5) override;  // X137B slot 44 = 0x453840 (bin: RenderExitPosition)
    virtual int GetCoordsThunk3(int a1, int a2) override;  // X137B slot 45 = 0x44F640 (bin: GetFactoryPosition)
    virtual int GetBoundingSize() override;  // X137B slot 46 = 0x449410 (bin: GetBoundingSizeExt)
    virtual AbstractClass** Undeploy() override;  // X137B slot 53 = 0x445880 (bin: Sell)
    virtual AbstractClass** Deploy(int a1, int a2) override;  // X137B slot 54 = 0x440580 (bin: Unlimbo_UnitDeliveryFix)
    virtual AbstractClass** Destroy2(int a1) override;  // X137B slot 55 = 0x44EBF0 (bin: Disappear_PrismForward)
    virtual int SetCellOverlayFlag(int a1) override;  // X137B slot 60 = 0x453D60 (bin: MarkCellOccupied)
    virtual int ClearCellOverlayFlag(int a1) override;  // X137B slot 61 = 0x453DC0 (bin: ClearCellOccupied)
    virtual int COMStub_64(int a1, int a2) override;  // X137B slot 64 = 0x443C60 (bin: UpdateConstruction)
    virtual int CalcDrawRect(int a1, int a2, int a3) override;  // X137B slot 65 = 0x43CEA0 (bin: DrawFactoryProduction)
    virtual int StubReturnFalse(int a1, int a2) override;  // X137B slot 69 = 0x43D290 (bin: Draw)
    virtual int DelegateVt69(int a1, int a2) override;  // X137B slot 70 = 0x43D030 (bin: DisplayProductionFrame)
    virtual int UpdateProductionDisplay(int a1) override;  // X137B slot 73 = 0x43F180 (bin: ProductionDisplayUpdate)
    virtual RectangleStruct* getBoundsRect(RectangleStruct* out) const override;  // X137B slot 75 = 0x455C20 (bin: GetScreenCoords)
    virtual int CheckStateFlag(int a1) override;  // X137B slot 76 = 0x456750 (bin: DrawDeployCircle)
    virtual int COMStub_79(int a1, int a2) override;  // X137B slot 79 = 0x459C00 (bin: IsMassSelectable)
    virtual int COMStub_80(int a1, int a2, int a3, int a4) override;  // X137B slot 80 = 0x4436F0 (bin: HandleRallyPointCommand)
    virtual int COMStub_81(int a1, int a2, int a3) override;  // X137B slot 81 = 0x443410 (bin: HandleFactoryCommand)
    virtual int COMStub_Return0_82(int a1) override;  // X137B slot 82 = 0x456E00 (bin: AcquireTarget)
    virtual int COMStub_Return0_85(int a1, int a2, int a3) override;  // X137B slot 85 = 0x457C90 (bin: IronCurtain)
    virtual int CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) override;  // X137B slot 91 = 0x442230 (bin: ProcessAttack)
    virtual int ProcessInputKey(int a1, int a2, int a3) override;  // X137B slot 101 = 0x43C2D0 (bin: MissionController)
    virtual int IsNotNull(int a1) override;  // X137B slot 102 = 0x44D5D0 (bin: CaptureBuilding)
    virtual int StubReturnFalse4(int a1) override;  // X137B slot 103 = 0x446FF0 (bin: ToggleRepairMode)
    virtual int COMStub_Return0_104(int a1) override;  // X137B slot 104 = 0x447110 (bin: ToggleSellMode)
    virtual int COMStub_107(int a1, int a2, int a3, int a4, int a5) override;  // X137B slot 107 = 0x449440 (bin: GetCursorAction)
    virtual bool isMissionDone() const override;  // X137B slot 128 = 0x454250 (bin: IsProducing)
    virtual int StubReturn450() override;  // X137B slot 132 = 0x44ACF0 (bin: ProcessActiveUpdate)
    virtual int StubReturn450_133() override;  // X137B slot 133 = 0x44B760 (bin: COMStub_133)
    virtual int CheckState1() override;  // X137B slot 135 = 0x4496B0
    virtual int CheckState2() override;  // X137B slot 136 = 0x449A40
    virtual int CheckMissionStatus() override;  // X137B slot 137 = 0x44B770 (bin: COMStub_137)
    virtual int GetMaxSize() override;  // X137B slot 143 = 0x44D880 (bin: ClearFactoryBib)
    virtual int Return450G() override;  // X137B slot 145 = 0x449A50 (bin: setLoopCount)
    virtual int Return450H() override;  // X137B slot 146 = 0x449C30 (bin: finalizeAnimation)
    virtual int CheckMissionStatus2() override;  // X137B slot 147 = 0x44B780 (bin: ProcessRepair)
    virtual int Return450I() override;  // X137B slot 148 = 0x44C980 (bin: ProcessSuperWeaponEffects)
    virtual int Return450J() override;  // X137B slot 149 = 0x44E440 (bin: ProcessPowerPlantEffect)
    virtual int StubReturnFalse_161() override;  // X137B slot 161 = 0x455DA0 (bin: CheckSpecialUpdateFlags)
    virtual bool ShouldBeCloaked() const override;  // X137B slot 168 = 0x457770 (bin: UpdateCloak)
    virtual bool ShouldNotBeCloaked() const override;  // X137B slot 169 = 0x4578C0 (bin: IsFootprintBlocked)
    virtual int GetAnimationValue() const override;  // X137B slot 170 = 0x445E50 (bin: GetFacingToTarget)
    virtual int HasActiveParam() const override;  // X137B slot 171 = 0x458DB0
    virtual int GetAmmoCount() const override;  // X137B slot 174 = 0x44D700 (bin: GetAmmoCountScaled)
    virtual int GetFiringAngle() const override;  // X137B slot 178 = 0x43E940 (bin: ComputeTargetAngle)
    virtual int GetCrewCount() const override;  // X137B slot 180 = 0x451330
    virtual int StubReturnFalse2_181() override;  // X137B slot 181 = 0x459870 (bin: MissionStubReturnZero)
    virtual int StubReturnFalse3_182() override;  // X137B slot 182 = 0x459880 (bin: MissionStubReturnZero2)
    virtual int StubReturnFalse4_183() override;  // X137B slot 183 = 0x459890 (bin: MissionStubReturnZero3)
    virtual int StubReturnTrue3() override;  // X137B slot 184 = 0x4576F0 (bin: DestroyOnBridgeCollapse)
    virtual int GetDrawHeight() override;  // X137B slot 187 = 0x43E900 (bin: GetZDrawOffset)
    virtual void* GetTurretOffset(void* a1, int a2) override;  // X137B slot 192 = 0x453A70 (bin: GetTurretScreenPos)
    virtual int Vt170() override;  // X137B slot 194 = 0x44D7D0 (bin: GetTargetFacing)
    virtual int GetCrew() const override;  // X137B slot 195 = 0x44EB10 (X144c: return int per raw_decomp fn_70.c)
    virtual int ShouldScanArea() const override;  // X137B slot 201 = 0x457020 (bin: IsCellVisibleToPlayer)
    virtual int StubReturnFalse11_212() override;  // X137B slot 212 = 0x4555D0 (bin: IsPoweredActive)
    virtual int PickAlternateTarget() override;  // X137B slot 219 = 0x459C20 (bin: ProcessUpgradeTargeting)
    virtual int vt_entry_68() override;  // X137B slot 238 = 0x44D760 (bin: PushScriptAction)
    virtual int ReadINI(int a1, int a2, int a3) override;  // X137B slot 240 = 0x447F10 (bin: GetFireError)
    virtual int SelectAutoTarget_Start_AU() override;  // X137B slot 241 = 0x445F00 (bin: SelectTargetTypeFlags)
    virtual int AssignTarget_SyncLog(int syncFlag) override;  // X137B slot 242 = 0x443B90
    virtual int ProcessCapture() override;  // X137B slot 245 = 0x448260 (bin: drawFrame)
    virtual int SelectVocOrSfx(int a1) override;  // X137B slot 254 = 0x4526F0
    virtual bool ProcessFrame() override;  // X137B slot 255 = 0x4527D0 (bin: HasOccupantAudio)
    virtual int StubReturnFalse7() override;  // X137B slot 256 = 0x458DD0 (bin: CheckMissionGuard)
    virtual int StubReturnFalse8() override;  // X137B slot 257 = 0x458E00 (bin: CheckMissionAttack)
    virtual int StubReturnFalse9() override;  // X137B slot 258 = 0x4581F0 (bin: MissionStubReturnZero6)
    virtual int UpdateLocomotion(int a1, int a2) override;  // X137B slot 260 = 0x454DB0 (bin: CleanupOccupation)
    virtual int GetRangeModifier() const override;  // X137B slot 281 = 0x456F80 (bin: ProcessMissionDeploy)
    virtual int StubReturnTrue2() override;  // X137B slot 282 = 0x459900 (bin: SpawnParticles)
    virtual int Stub(void *a2, int a3) override;  // X137B slot 288 = 0x455D50 (bin: AssignDestination_SyncLog)
    virtual int CompleteFactoryProduction(int a2, int a3) override;  // X137B slot 289 = 0x44D6A0 (bin: StartOrResumeProduction)
    virtual int vt_entry_68_292() override;  // X137B slot 292 = 0x458A80 (bin: EvacuateFootprintCells)
    virtual int RadarUpdateOn() override;  // X137B slot 293 = 0x456580 (bin: UpdateRevealField)
    virtual int RadarUpdateOff() override;  // X137B slot 294 = 0x4565E0 (bin: UpdateGapGeneratorField)
    virtual int RevealOwnCell() override;  // X137B slot 295 = 0x456640 (bin: UpdateDetectionField)

    // ========================================================================
    // X137B: BuildingClass own virtuals -- binary table 0x7E3EBC slots [309]-[321] (13)
    // declaration order = slot order; arity = Capstone first-retn/4.
    // ========================================================================
    virtual bool ValidateFoundation(int a1, int a2, int a3);  // X137B slot 309 = 0x44EFB0 (bin: ValidateFoundation)
    virtual int initAnimation(int);  // X137B slot 310 = 0x447E00
    virtual int CreateUnits();  // X137B slot 311 = 0x445F80 (bin: CreateUnits)
    virtual int UpdateSidebar();  // X137B slot 312 = 0x4456D0
    virtual int DrawPlacementPreview(int a1, int a2);  // X137B slot 313 = 0x43DA80 (bin: DrawPlacementPreview)
    virtual int GetTurretAngle(int a1, int a2);  // X137B slot 314 = 0x43ED40
    virtual int ProcessDemolish(int a1, int a2, int a3, int a4);  // X137B slot 315 = 0x4415F0
    virtual int ProcessPrimarySelect();  // X137B slot 316 = 0x448160
    virtual int ScanCircleForUnits2(int a1);  // X137B slot 317 = 0x455820 (bin: ScanCircleForUnits2)
    virtual int ScanCircleForUnits(int a1);  // X137B slot 318 = 0x4556D0 (bin: ScanCircleForUnits)
    virtual int UpdateTerrainEffect(int a1);  // X137B slot 319 = 0x455A80 (bin: UpdateTerrainEffect)
    virtual int ScanCircleForTiberium(int a1);  // X137B slot 320 = 0x455980 (bin: ScanCircleForTiberium)
    virtual int StubReturn0();  // X137B slot 321 = 0x452250 (bin: StubReturn0)

    // wrapper: delegates to BuildingClass::Dtor at 0x43BCF0
    AbstractType __stdcall whatAmI() const;
    // wrapper: delegates to BuildingClass::Dtor at 0x43BCF0
    int objectSize() const ;

    // Construction / destruction lifecycle
int Construct(int,int);  // 0x43B740
    int Dtor();  // 0x43BCF0
    int ScalarDtor() ;  // 0x459F20
    int Activate() ;  // 0x452480
    int Deactivate() ;   // 0x452480
    void Destroyed(ObjectClass* killer);  // 0x459E80
    int AfterDestruction();  // 0x441F60
    void Cleanup(int a2);  // 0x43EEB0

    // Stream/placement
    void LoadFromStream(void* stream);  // 0x453E20
    int Size();  // 0x454190
    // wrapper: delegates to BuildingClass::Size at 0x454190
    void Place(bool bUnk);
    // wrapper: delegates to BuildingClass::Size at 0x454190
    void onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2);

    // Foundation / cell
    // wrapper: delegates to BuildingClass::Size at 0x454190
    CellStruct* getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const;
    // design: virtual function, no binary implementation matched in IDA
    int canPlaceHere(ObjectClass* pObj) const;
    bool IsCellPlaceable(int cell_x, int cell_y) const;  // 0x4260F0
    void ValidatePlacement(char a2);  // 0x480630
    bool ValidateFoundation_0();  // 0x4DC8C0
    int* Validate(int* a2, int a3);  // 0x4DD890  // G42.35 def-truth sync (cache: int* __thiscall(BuildingClass*,int*,int); 调用形 object/render 同款静态形)
    bool ValidateCell(int cell_x, int cell_y);  // 0x4DD9F0
    bool ValidatePlacementEx();  // 0x4DEE80
    void FindPlacementCells();  // 0x7447B0
    void FindPlacementCells2(int* outCell, int inCell, unsigned int *a2, int a3); // 0x6B0300  // g57b5 W4
    int SearchPlacement(int a2, int a3);  // 0x56BEC0
    void VisualizePlacement();  // 0x485AF0
    int GetPlacementCoords(int* out, unsigned int* a3);  // 0x45F160
    int* GetPlacementRect(int* out);  // 0x47FDE0
    char CheckOverlapWithOthers();  // 0x44E3A0
    int IsFootprintBlocked();  // 0x4578C0
    // wrapper: delegates to BuildingClass::IsFootprintBlocked at 0x4578C0
    void DamageFactoryBibCells();
    void ClearFactoryBib();  // 0x44D880
    int RepairPlacement(char a2);  // 0x4533A0
    bool CheckBuildability();  // 0x63AC70
    void OnCellPlacementComplete(ObjectClass *a2);  // 0x710670 (IDA: thiscall(this, arg0))

    // Exit coordinates
    CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const ;  // 0x447AC0
    CoordStruct* GetAdjustedExitCoords(CoordStruct* out) const;  // 0x4500A0
    int GetFactoryPosition() const;
    CoordStruct* CalcExitCoords(CoordStruct* out, int dir) const;  // 0x4FD150
    CoordStruct* GetRallyPointCoord(CoordStruct* out) const;  // 0x6B0690
    CoordStruct* GetBuildCoordsAdjusted(CoordStruct* out) const;  // 0x459EF0
    void SetRallyPoint(CoordStruct* target);  // 0x443860
    int MarkExitPath(unsigned short *a2, int a3);  // 0x4A9650 (raw: this + unsigned short* a2 + int a3[低字节 flag])
    bool CheckExitPath();  // 0x639CB0
    unsigned short *u32_118C;  // 0x118C 出口表基址 (G57W20M26 重类型: MarkExitPath 步进 v6[0]/v6[1])
    int RenderExitPosition(); // 0x453840 g57w11 r4: raw fn_45 int __thiscall (前 void 声明 C2556)
    // wrapper: delegates to BuildingClass::RenderExitPosition at 0x453840
    void ReassignFlagPosition();
    bool TogglePrimaryFactory();  // 0x447E90
    int IsFactorySelectable();  // 0x457620

    // Construction update (ptr_0[8])
    // wrapper: delegates to BuildingClass::IsFactorySelectable at 0x457620
    void UpdateConstructionOptions();
    int Mission_Construction() ;
    int UpdateConstruction();  // 0x443C60

    // Production
    int StartProduction(int type_index);  // 0x447780
    void CompleteProduction();  // 0x639740
    int ProductionDisplayUpdate(int a1);  // 0x43F180 (IDA: thiscall(unsigned char*,int))
    void DisplayProductionFrame();  // 0x43D030
    bool ProductionCheck();  // 0x4513D0
int CanAcceptType(int,int);  // 0x452670
    bool CanAbsorbUnits();  // 0x4598A0
    void AddToProductionQueue(int type_index);  // 0x4DA0E0
    void SetProduction(int type_index);  // 0x6395B0
    // wrapper: delegates to BuildingClass::SetProduction at 0x6395B0
    void onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2);
    int GetProductionFrame() const;  // 0x43EF90

    // Selling
    // wrapper: delegates to BuildingClass::GetProductionFrame at 0x43EF90
    int Mission_Selling();
    int Sell();  // 0x445880
    // wrapper: delegates to BuildingClass::Sell at 0x445880
    void CompleteSell();
    void ProcessSell();  // 0x739EC0
    int CanBeSold();  // 0x4494C0
    bool CanBeSoldCheck();  // 0x44F5C0
    void ToggleSellMode();  // 0x447110
    int GetSellPriority();  // 0x5F5DD0
    void SellEffects();  // 0x480CB0
    void SellUnit(int a2);  // 0x4D9F70 retn 4 (W20M26 true sig)

    // Repair
    int Mission_Repair();
    int ProcessRepair();  // 0x44B780 g57w11 r4: raw int __thiscall (void 声明 C2562)
    bool CanRepair(TechnoClass* repairer);  // 0x457CE0
    int ToggleRepairMode(int aP1);  // 0x446FF0
    int CheckHealthForRepair();  // 0x452630
    bool IsBeingRepairedOrCaptured();  // 0x7105E0

    // Missile / Super weapons
    // wrapper: delegates to BuildingClass::IsBeingRepairedOrCaptured at 0x7105E0
    int Mission_Missile();
    void processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4);
    void ProcessSuperWeaponEffects();   // 0x44C980
    int SWAvailable();  // 0x457630
    bool SW2Available();  // 0x457690
    static BuildingClass* FindBySWType(int sw_type);  // 0x505310
    char ClearSuperWeaponAnim();  // 0x451690
    void UpdatePrism();  // 0x4503F0
    void Disappear_PrismForward();  // 0x44EBF0

    // Mission system
    int MissionController();  // 0x43C2D0
    int ProcessMission();  // 0x5B01C0
    int Mission_Guard();  // 0x459E70
    int Mission_Attack();
    // wrapper: delegates to AircraftClass::Mission_Attack at 0x417FE0
    int Mission_Move();
    int Mission_Enter();
    // wrapper: delegates to AircraftClass::Mission_Enter at 0x4166C0
    int Mission_Capture();
    int Mission_Harvest();
    // wrapper: delegates to AircraftClass::ProcessLanding at 0x4151E0
    int Mission_Deploy();
    bool CheckMissionGuard();  // 0x458DD0
    bool CheckMissionAttack();  // 0x458E00

    // Power system
    int PowerDrainUpdate(int a2);  // 0x454260
    int GetPowerOutput();  // 0x44E7B0
    int GetPowerDrain();  // 0x44E880
    void PowerUpdate();  // 0x4FF700
    int UpdatePowerDrain() ;  // 0x4544A0
    int IsPoweredOn();  // 0x4525F0
    bool IsPoweredActive();  // 0x4555D0
    bool CheckPowerFlags();  // 0x4A51B0
    bool CheckFlag24();  // 0x4A5130
    void PowerOff();  // 0x452360
    void TogglePower();  // 0x4AC660
    void TogglePower2();  // 0x4AC8C0
    void EnableTogglePower();  // 0x452210
    void EnableStuff();  // 0x452410
    void ProcessPowerPlantEffect();  // 0x44E440
    void ProcessActiveUpdate();  // 0x44ACF0
    void UpdatePowerAnimation(int a2, int16_t *a3, unsigned int *a4, int a5, int a6, char a7);  // 0x429A90
    void UpdatePowerAnim();  // 0x42ACF0
    int GetPowerFrame();  // 0x4566B0

    // Capture / Occupancy / Infiltration
    int processCapture();  // 0x712130 (signals name; non-virtual helper — ProcessCapture = slot 245 chain name)
    int CaptureBuilding();
    void Capture();  // 0x4FCE80
    void DisableTemporal();  // 0x4521C0
    void Infiltrate();  // 0x4571E0
    int ProcessStructureAbandoned();  // 0x458200
    void ProcessEnterUnit();  // 0x6B0DB0
    void ProcessOccupancy();  // 0x6DA5C0
    bool IsIdleWithNoCaptives();  // 0x63BE10
    int GetCrew();  // 0x44EB10
    int GetCrewCount();  // 0x451330
    void EjectCrew();  // 0x442D90
    int CleanupOccupation();  // 0x454DB0
    void AddOccupancy();  // 0x722AF0
    void ClearOccupancyData();  // 0x722D00
    void RebuildOccupancyTracking();  // 0x722770
    void RebuildOccupancyTracking2();  // 0x723260
    void RebuildOccupancy2();  // 0x7233A0
    void InitBuildLimit();  // 0x6B0CC0
    void RefreshOccupierCache();  // 0x6B0D60
    void ClearFactoryData();  // 0x722240
    void FreeUpgradeQueue();  // 0x722390
    void FreeUpgradeQueue2();  // 0x722E50
    bool CheckOccupantState();  // 0x7013E0

    // Combat / Targeting
    void ProcessAttack();  // 0x442230
    void AimTurret(unsigned char a2); // 0x424B50
    void CalculateTurretAngle();  // 0x447B20
    int GetFacingToTarget();  // 0x445E50
    int GetTargetFacing();  // 0x44D7D0
    void FireLaser();  // 0x44ABD0
    int GetAmmoCountScaled();  // 0x44D700
    int GetFireError();  // 0x447F10
    void AcquireTarget();  // 0x456E00
    int SelectTargetTypeFlags();  // 0x445F00
    // wrapper: delegates to BuildingClass::SelectTargetTypeFlags at 0x445F00
    int DistanceToTarget();
    CoordStruct *CalcBarrelFlashPosition(void *a2, int a3, int a4);  // 0x453BF0 (调用点 3 参, 返回坐标指针)
    void BuildTurretTransform();  // 0x458810

    // Bridge / Demolish
    unsigned int *DemolishBridgeCheck(int a2);  // 0x452A40 (G42 真形: thiscall(this,int); 结构侧 def 同形)
    void FindBridgeSegment();  // 0x452BB0
    void DemolishBridge();  // 0x452DC0
    void DemolishBridgeAnim();  // 0x453060
    void TraverseBridgeSegments();  // 0x453240
    bool CheckBridge();  // 0x6B0880
    void DestroyOnBridgeCollapse();  // 0x4576F0
    CoordStruct* GetBridgeAwareCoords(CoordStruct* out) const;  // 0x705CA0

    // G42 归属正名 (自 FootClass 迁入): canon vt+1256/vt+1260 + IDA typed
    // this=BuildingClass* + 体读 this->Type@1312 (BuildingTypeClass*) +
    // DamageFireAnims[8]/C4Timer/EjectCrew 全 BuildingClass 成员
    // G42.34 同族迁入 (canon vt+1248/vt+1264; raw typed this=BuildingClass*;
    // 体读 this->Type@1312)

    // Deploy / Undeploy
    int Deploy();  // 0x62A4A0
    // Is1x1AndUndeployable_BuildingMassSelectable(0x465D40) moved to
    // BuildingTypeClass (type/building_type.hpp): callers pass the Type pointer.
    void UpdateMovingPosition();  // 0x5B17B0
    void UpdateFloatPosition();  // 0x62D2A0
    // AdjustHeight(0x62D5E0) moved to ParticleClass (entity/particle.hpp):
    // receiver is a particle (callers: ParticleSystemClass::UpdateAllParticles,
    // UpdateBuilding*Particles); body reads particle location@+0x9C/height@+0xE4.

    // Animation
    void PlayAnim(int a2, void* a3, int a4, int a5, int a6, void* a7);  // 0x451890
    void StopAnim(int anim_index);  // 0x451B40
    int ClearAnims(int a2);  // 0x451E40
    void ProcessActiveAnimation();  // 0x450630
    void UpdateAnimFrames();  // 0x4509D0
    void ProcessAnimationStates();  // 0x4545D0
    void UpdateIdleAnims();  // 0x454730
    void UpdateAnimationSlots();  // 0x4547C0
    void ProcessDamageAnim();  // 0x454930
    void UpdateDamageAnim();  // 0x459470
    void CreateIdleAnim();  // 0x486920
    int PlayUpgradeAnim(int a2, int a3, int a4, void *a5);
    void SyncCrateVisuals();  // 0x451F60
    void MarkUpgradeComponentUsed();  // 0x42F260
    void AnimController();  // 0x629720

    // Cloak / Visibility / Fog
    void UpdateCloak();  // 0x457770
    int IronCurtain() ;  // 0x457C90
    void AnnounceReady();  // 0x452260
    void UpdateRevealField();  // 0x456580
    void UpdateGapGeneratorField();  // 0x4565E0
    void UpdateDetectionField();  // 0x456640
    bool IsCellVisibleToPlayer(int cell_x, int cell_y);  // 0x457020
    void CreateFoggedObjects();  // 0x457AA0
    void RevealShroud(int radius);  // 0x6FB170
    void ProcessFogCellOccupancy();  // 0x655560
    void RemoveGapCellCoverage();  // 0x655740
    // wrapper: delegates to BuildingClass::RemoveGapCellCoverage at 0x655740
    void SensorArrayActivate(CellStruct cell);
    // wrapper: delegates to BuildingClass::RemoveGapCellCoverage at 0x655740
    void SensorArrayDeactivate(CellStruct cell);
    // wrapper: delegates to BuildingClass::RemoveGapCellCoverage at 0x655740
    void DisguiseDetectorActivate(CellStruct cell);
    // wrapper: delegates to BuildingClass::RemoveGapCellCoverage at 0x655740
    void DisguiseDetectorDeactivate(CellStruct cell);

    // Update
    int Update();  // 0x442C40
    void OnObjectExpired(ObjectClass* obj);  // 0x44E8F0
    void UpdateTimerWithElapsed();  // 0x4A5290
    bool HasActiveParam();  // 0x458DB0
    void CheckSpecialUpdateFlags();  // 0x455DA0

    // Rendering
    Point2D* CalcDrawPos(Point2D* out) const;  // 0x480110
    Point2D CalcDrawPos() const;  // 0x480110
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x43D290
    void DrawVisible(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x43E7B0
    void Draw_0(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x47F6A0
    void DrawFactoryProduction(Point2D* screen_pos, RectangleStruct* bounds, int frame) const;  // 0x43CEA0
    void DrawSelectionBox(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x6F60D0
    void DrawSelectionBlip(Point2D* screen_pos) const;  // 0x63D560
    void DrawActionLines(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x63BE60
    void DrawDeployCircle(Point2D* screen_pos) const;  // 0x456750
    void DrawFoundationChar(int cell_x, int cell_y, wchar_t ch) const;  // 0x690910
    void DrawFoundationChar2(int cell_x, int cell_y, wchar_t ch) const;  // 0x690850
    void DrawHealthBar(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x6F64A0
    int GetDrawColor() const;  // 0x635830
    int GetSHPFrame() const;  // 0x490B90
    int DetermineVisualState() const;  // 0x483C80
    void AddRectToDrawList(RectangleStruct* rect) const;  // 0x42A460
    int GetZDrawOffset() const;  // 0x43E900
    int GetBoundingSizeExt() const;  // 0x449410
    // wrapper: delegates to BuildingClass::GetBoundingSizeExt at 0x449410
    ra2::game::LightConvertClass* GetRemapColour() const ;

    // Health / Stats
    double GetHealthRatio() const;  // 0x5F5C60
    bool IsHealthLow();  // 0x5F5CD0

    // Misc
    int SquaredDistanceTo(ObjectClass* target, int *a2) const;  // 0x5F6500
    void SaveLoad_Register();  // 0x5F5E80
    void CopyTypeDataForRender();  // 0x634310
    ra2::game::PlanningTokenClass* GetPlanningToken();  // 0x705D20 (accessor for TechnoClass::planningToken@+0x514, NOT Type)
    void SetPlanningToken(ra2::game::PlanningTokenClass* token);  // 0x705D10
    BuildingTypeClass* GetTypePtr();  // 0x459EE0
    BuildingTypeClass* GetType_Thunk();  // 0x705D60
    int GetTypeEntry();  // 0x6347B0
    const wchar_t* GetTypeField60();  // 0x459ED0 (returns Type->UIName@+0x60)
    int GetObjectData();  // 0x6385C0
    int GetFWFlags();  // 0x455B90
    void FlushScriptActions();  // 0x639BC0
    static BuildingClass* FindByCellHash(uint32_t hash);  // 0x485010
    void LoadBuildingTypes();  // 0x67B720
    void ReadBuildingSettings();  // 0x475A60
    void ReadConstructionData();  // 0x44FEC0
    bool HasOccupantAudio();  // 0x4527D0
    ra2::game::WeaponStruct* SelectWeaponSlot(int weaponIndex);  // 0x4526F0 (slot 254 override: upgrade/occupant weapon slots)
    void UnloadUnits();  // 0x457DE0
    void AnimateUnloadUnits();  // 0x4585C0
    void SpawnParticles();  // 0x459900
    int ApplyFoundationDamage(unsigned short *a2, void *other);  // 0x45EE70 g57w11 r4: raw int(this,unsigned short*,void*)
    void AssignDestination_SyncLog();  // 0x455D50
    void DecrementTypeCounter();  // 0x4FF980
    void IncrementOccupantTypeCounter();  // 0x4FFA50
    bool IsMassSelectable();  // 0x459C00
    int AddUpgrade(int upgrade);  // 0x6551C0 (IDA proto: int __thiscall(int, int); all call sites pass a raw int address)
    void ProcessUpgradeEffects();  // 0x726400

    void ProcessUpgradeTargeting();  // 0x459C20
    void ProcessSpreadEffect();  // 0x43FB20
    void Unlimbo_UnitDeliveryFix();  // 0x440580
    int SetConnectedBuildingMission(int a2);
    void CreateDestructionCrater();  // 0x4852D0
    void CreatePlacementCrater();  // 0x486E70
    void CreateCraterAtCell(int cell_x, int cell_y);  // 0x4A18F0
    void BeginCrumblingTimer();  // 0x4A17C0
    void MarkCellOccupied(int cell_x, int cell_y);  // 0x453D60
    void ClearCellOccupied(int cell_x, int cell_y);  // 0x453DC0
    bool IsTiberiumCollectorEligible();  // 0x483620
    bool IsTiberiumSiloEligible();  // 0x483690
    char UpdateBunker(double a2);  // 0x458E50 g57w11 r4: raw char(this,double)
    void EmptyBunker();  // 0x4595C0
    void MakeTraversable();  // 0x452540
    void RemoveLimpet();  // 0x4593A0
    bool CheckC4Active();  // 0x487C10
    // SetField95(0x424C90)/SetField8(0x425260) moved to AnimClass
    // (entity/anim.hpp): all 4 call sites pass AnimClass receivers
    // (AnimClass::ctor result / building anim-slot array entries), not buildings.
    int GetCursorAction();  // 0x449440
    void UpdateThreatBounds();  // 0x70F6E0
    bool ValidatePath(void *a1, unsigned short *a2, int a3);  // 0x716150
    void SetSlot(int slot);  // 0x717890
    // wrapper: delegates to BuildingClass::SetSlot at 0x717890
    uint32_t GetField184() const;
    int GetActionOnObject();  // 0x447210
    void HandleRepairCursor();  // 0x447540
    static BuildingClass* Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner);  // 0x466000
    static BuildingClass* AllocAndCtor();  // 0x70BF50

    // Trivial stubs (g_var_7a20bc*)
    bool sub_41C060();  // 0x41C060
    bool sub_4DE750();  // 0x4DE750
    bool sub_4DE760();  // 0x4DE760
    bool sub_4DB9B0();  // 0x4DB9B0
    bool StubReturnFalse();  // 0x459D80
    bool StubReturnFalse3();  // 0x459DF0
    bool StubReturnFalse4();  // 0x459E00
    int MissionStubReturnZero();  // 0x459870
    int MissionStubReturnZero2();  // 0x459880
    int MissionStubReturnZero3();  // 0x459890
    int MissionStubReturnZero5();  // 0x459DA0
    int MissionStubReturnZero6();  // 0x4581F0

    // Sub stubs
    void sub_465D70();
    // wrapper: delegates to BuildingClass::MissionStubReturnZero6 at 0x4581F0
    void sub_570DDC0();
    void sub_459FF0();
    void sub_45A020();
    // design: no binary equivalent found in IDA
    void sub_5487110();
    // design: no binary equivalent found in IDA
    void sub_5487130();
    // design: no binary equivalent found in IDA
    void sub_5487170();
    // design: no binary equivalent found in IDA
    void sub_5487180();
    // design: no binary equivalent found in IDA
    void sub_54AA290();
    // design: no binary equivalent found in IDA
    void sub_54F9750();
    // design: no binary equivalent found in IDA
    void sub_55AEAD0();
    // design: no binary equivalent found in IDA
    void sub_55AEAF0();
    // design: no binary equivalent found in IDA
    void sub_55AEB20();
    // design: no binary equivalent found in IDA
    void sub_563D540();
    // design: no binary equivalent found in IDA
    void sub_5712130();
    void* FindInPointerArray(void* ptr);  // 0x45A610

    // Gap generator
    static bool isGeneratingGap;
    // wrapper: delegates to BuildingClass::FindInPointerArray at 0x45A610
    void DestroyGap();

    // Member variables
    BuildingTypeClass*                    Type;
    FactoryClass*                         Factory;
    TimerStruct                           C4Timer;
    int32_t                               BuildingClass_field_int_534;
    int32_t                               BuildingClass_field_int_538;
    uint32_t                              OwnerCountryIndex;
    InfantryClass*                        C4AppliedBy;
    uint32_t                              BuildingClass_field_544;
    AnimClass*                            FirestormAnim;
    AnimClass*                            PsiWarnAnim;
    TimerStruct                           BuildingClass_field_timer_550;
    AnimClass*                            Anims[0x15];
    bool                                  AnimStates[0x15];
    uint8_t                               align_5C5[3];
    AnimClass*                            DamageFireAnims[0x8];
    bool                                  RequiresDamageFires;
    BuildingTypeClass*                    Upgrades[0x3];
    int32_t                               FiringSWType;
    uint32_t                              SuperWeaponToken;
    BuildingLightClass*                   Spotlight;
    RepeatableTimerStruct                 GateTimer;
    LightSourceClass*                     LightSource;
    uint32_t                              LaserFenceFrame;
    uint32_t                              FirestormWallFrame;
    void g_var_9bbfff(void *, int);  // W20M26 vt+0x100 (canon ('buildingclass', 'HouseClass::UpdateConstruction'))
    int ThunkTo159x4(int);  // W20M26 vt+0x274 (canon ('buildingclass', 'ObjectClass::ThunkTo159x4'))
    int ThunkTo636(int, int);
    int Vt46Thunk();  // vt+0x2BC (canon)
    void Destroy_0();  // vt+0xF8 (canon)  // W20M26 vt+0x278 (canon ('buildingclass', 'ObjectClass::ThunkTo636'))
    int ProcessDeploymentState();  // W20M26 vt+0x3A0 (base TechnoClass returns int; C2555) (canon ('buildingclass', 'TechnoClass::ProcessDeploymentState'))
    int * ValidateFoundation_1(void *, int, int);  // W20M26 vt+0x4D4 (canon ('buildingclass', 'HouseClass::ValidateFoundation_1'))
    int32_t                               q0BC;  // 0xBC (PR disasm [ebp+..]; canon None; W20M26)
    int32_t                               q0E8;  // 0xE8 (PR disasm [ebp+..]; canon None; W20M26)
    int32_t                               q114;  // 0x114 (PR disasm [ebp+..]; canon None; W20M26)
    int32_t                               q2FC;  // 0x2FC (PR disasm [ebp+..]; canon None; W20M26)
    int32_t                               q41A;  // 0x41A (PR disasm [ebp+..]; canon None; W20M26)
    ProgressTimer                         RepairProgress;
    uint32_t                              q628;  // 0x628 (PR disasm window; W20M26)
    uint32_t                              q62C;  // 0x62C (PR disasm window; W20M26)
    uint32_t                              q630;  // 0x630 (PR disasm window; W20M26)
    uint32_t                              q634;  // 0x634 (PR disasm window; W20M26)
    uint32_t                              q638;  // 0x638 (PR disasm window; W20M26)
    RectangleStruct                       BuildingClass_field_rect_63C;
    CoordStruct                           BuildingClass_field_coord_64C;
    int32_t                               BuildingClass_field_int_658;
    uint32_t                              BuildingClass_field_65C;
    bool                                  HasPower;
    bool                                  IsOverpowered;
    bool                                  RegisteredAsPoweredUnitSource;
    uint32_t                              SupportingPrisms;
    bool                                  HasExtraPowerBonus;
    bool                                  HasExtraPowerDrain;
    DynamicVectorClass<InfantryClass*>    Overpowerers;
    DynamicVectorClass<InfantryClass*>    Occupants;
    int32_t                               FiringOccupantIndex;
    AudioController            Audio7;
    AudioController            Audio8;
    bool                                  WasOnline;
    bool                                  ShowRealName;
    bool                                  BeingProduced;
    bool                                  ShouldRebuild;
    bool                                  HasEngineer;
    TimerStruct                           CashProductionTimer;
    bool                                  BuildingClass_field_bool_6DC;
    bool                                  BuildingClass_field_bool_6DD;
    bool                                  NeedsRepairs;
    bool                                  C4Applied;
    bool                                  NoCrew;
    bool                                  BuildingClass_field_bool_6E1;
    bool                                  BuildingClass_field_bool_6E2;
    bool                                  HasBeenCaptured;
    bool                                  ActuallyPlacedOnMap;
    bool                                  BuildingClass_field_bool_6E5;
    bool                                  IsDamaged;
    bool                                  IsFogged;
    bool                                  IsBeingRepaired;
    bool                                  BuildingClass_field_bool_6E9;
    bool                                  StuffEnabled;
    char                                  HasCloakingData;
    uint8_t                               CloakRadius;
    char                                  Translucency;
    uint32_t                              StorageFilledSlots;
    TechnoTypeClass*           SecretProduction;
    ColorStruct                           ColorAdd;
    int32_t                               BuildingClass_field_int_6FC;
    int16_t                               BuildingClass_field_short_700;
    uint8_t                               UpgradeLevel;
    char                                  GateStage;
    PrismChargeState                      PrismStage;
    CoordStruct                           PrismTargetCoords;
    uint32_t                              DelayBeforeFiring;
    int32_t                               BunkerState;

    int32_t                               ProductionTimer;
    bool                                  PlacementAllowed;
    uint8_t                               ProductionBlocked;
    uint8_t                               padProd1;
    uint8_t                               padProd2;
    int32_t                               ProductionAccum;
    int32_t                               ProductionFrame;
    int32_t                               ProductionRate;
    int32_t                               ProductionSpeed;
    double                                CostAccumulator;
    uint8_t                               PipelineStep;
    uint8_t                               padProd3[3];

protected:
    BuildingClass() noexcept;
    void* ptr_0_2;  // 0x0
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* ctor(int a1);  // 0x43B680
    int HandleFactoryCommand();  // 0x443410
    int PushScriptAction();  // 0x44D760
    void initBuildingData();  // 0x459FF0
    int updateFactoryProduction(int a1);  // 0x45A020
    int processPowerState();  // 0x465D70
    int CheckAdjacentCells();  // 0x485460
    void* checkOccupant(int a1);  // 0x487110
    void* updateOccupiedState(int a1);  // 0x487130
    int processGarrison(int a1);  // 0x487170
    int evaulateDefense(int a1);  // 0x487180
    int updateSellBack(void* a1, void* a2);  // 0x4AA290
    static double checkRepairEligibility(HouseClass* pHouse);  // 0x4F9750
    void processBaseExpansion(float a1);  // 0x5AEAD0
    void updateFoundation(float a1);  // 0x5AEAF0
    void recalcAdjacency(float a1);  // 0x5AEB20
    int updateAnimationState();  // 0x63D540
    int checkPlacement();  // 0x70DDC0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ComputePosition(int a1);  // 0x425d10 -- Building::ComputePosition
    int GetNthOfType();  // 0x485020 -- Building::GetNthOfType
    int GetRenderType();  // 0x772a90 -- Building::GetRenderType
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int FindClosestForRepair(int a1);  // 0x4dfcb0
    int FindClosestForRepair2(int a1);  // 0x4dfe00
    // === FUNCS-MOVE (END) ===

    int CreateNukePayload();  // G42.39 supply (gap2_defs site)

    int SelectSuperWeaponTarget(int a1);  // G42.39 supply (gap2_defs site)

    int FireSuperWeaponHouseClass(int a1, int a2);  // G42.39 supply (gap2_defs site)

    int EvaluateAITarget(int a1, void* a2);  // G42.39 supply (gap2_defs site)

    int UpdateSuperWeaponsUnavailableHouseClass();  // G42.39 supply (gap2_defs site)

    int SerializeSuperWeaponState();  // G42.39 supply (gap2_defs site)

    void* UpdateTargetRedrawState(void* a1);  // G42.39 supply (gap2_defs site)

    int UpdateSuperWeaponReadyState(int a1);  // G42.39 supply (gap2_defs site)

    void DispatchTeam(int a1, int a2);  // G42.39 supply (gap2_defs site)
    unsigned int q044; // 0x44  gB member supply
    int Audio8_2;  // 0x6B4 (ml)
    void* q1600;  // 0x1600 (ml)
    unsigned int q2500;  // 0x2500 (ml)
    unsigned char q2AC6;  // 0x2AC6 (offset-truth)
    unsigned int q530;  // 0x530 (canon-mt)
    unsigned int q558;  // 0x558 (canon-mt)
    IUnknown* q5B4;  // 0x5B4 (canon-mt)
    unsigned char q5C0;  // 0x5C0 (canon-mt)
    unsigned int q5C4;  // 0x5C4 (canon-mt)
    unsigned char q5F0;  // 0x5F0 (canon-mt)
    void* q5F4;  // 0x5F4 (canon-mt)
    unsigned int q610;  // 0x610 (canon-mt)
    unsigned int q624;  // 0x624 (canon-mt)
    void* q640;  // 0x640 (canon-mt)
    void* q648;  // 0x648 (canon-mt)
    unsigned int q650;  // 0x650 (canon-mt)
    unsigned int q654;  // 0x654 (canon-mt)
    unsigned char q679;  // 0x679 (canon-mt)
    unsigned int q67C;  // 0x67C (canon-mt)
    unsigned int q680;  // 0x680 (canon-mt)
    void* q684;  // 0x684 (canon-mt)
    AudioController* q690;  // 0x690 (canon-mt)
    void* q694;  // 0x694 (canon-mt)
    unsigned int q698;  // 0x698 (canon-mt)
    void* q69C;  // 0x69C (canon-mt)
    unsigned char q6C9;  // 0x6C9 (canon-mt)
    unsigned char q6CA;  // 0x6CA (canon-mt)
    unsigned char q6CB;  // 0x6CB (canon-mt)
    bool q6CC;  // 0x6CC (canon-mt)
    void* q6D0;  // 0x6D0 (canon-mt)
    unsigned int q6D8;  // 0x6D8 (canon-mt)
    void* q70C;  // 0x70C (canon-mt)
    unsigned int u32_5B8;  // 0x5B8 (canon-mt)
    unsigned int u32_5BC;  // 0x5BC (canon-mt)
    unsigned int u32_60C;  // 0x60C (canon-mt)
    unsigned char u32_691;  // 0x691 (canon-mt)
    unsigned int u32_710;  // 0x710 (canon-mt)
    unsigned char u8_6F9;  // 0x6F9 (canon-mt)
    unsigned char u8_6FA;  // 0x6FA (canon-mt)
    void* ptr_12;  // 0xC (canon-mt)

    unsigned char Audio7_d[1];  /* AudioController */  // X10 supply (csp_canon_members)
    unsigned int BuildingClass_field_5FC;  // X10 supply (csp_canon_members)
    void* FiringOccupantIndex_d;  // X10 supply (csp_canon_members)
    unsigned char NeedsSaveOrLink;  // X10 supply (csp_canon_members)
    void* Occupants_d;  // X10 supply (csp_canon_members)
    AbstractClass* Owner;  // X10 supply (csp_canon_members)
    unsigned char RefCount_2A80[4];  /* RefCount */  // X10 supply (member_lookup)
    unsigned char RefCount_2A94[4];  /* RefCount */  // X10 supply (member_lookup)
    unsigned char __pad_628;  // X10 supply (csp_canon_members)
    unsigned char __pad_6CC;  // X10 supply (csp_canon_members)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    void* airstrikeTintStage_d;  // X10 supply (csp_canon_members)
    ParticleSystemClass* ambientParticles;  // X10 supply (csp_canon_members)
    unsigned char ambientSoundController[20];  /* AudioController */  // X10 supply (csp_canon_members)
    HouseClass* ammoReloadTimer;  // X10 supply (csp_canon_members)
    unsigned char animation[8];  /* unsigned long long */  // X10 supply (csp_canon_members)
    BombClass* attachedBomb;  // X10 supply (csp_canon_members)
    void* attachedTag;  // X10 supply (csp_canon_members)
    unsigned char attackedTargets;  // X10 supply (csp_canon_members)
    unsigned char barrelFacing[24];  /* FacingStruct */  // X10 supply (csp_canon_members)
    bool bombVisible;  // X10 supply (csp_canon_members)
    int32_t chronoLockRemaining;  // X10 supply (csp_canon_members)
    unsigned char cloakState[4];  /* ProgressTimer */  // X10 supply (csp_canon_members)
    int32_t currentBurstIndex;  // X10 supply (csp_canon_members)
    void* currentMission;  // X10 supply (csp_canon_members)
    void* currentRank;  // X10 supply (csp_canon_members)
    int32_t customSound;  // X10 supply (csp_canon_members)
    unsigned char customSound_controller[20];  /* AudioController */  // X10 supply (csp_canon_members)
    AbstractClass* deployAnim;  // X10 supply (csp_canon_members)
    void* diskLaserChargeState;  // X10 supply (csp_canon_members)
    int32_t diskLaserTimer;  // X10 supply (csp_canon_members)
    int32_t estimatedHealth;  // X10 supply (csp_canon_members)
    int32_t fallRate;  // X10 supply (csp_canon_members)
    void* flashing;  // X10 supply (csp_canon_members)
    int32_t gattlingStage;  // X10 supply (csp_canon_members)
    unsigned int gattlingValue;  // X10 supply (csp_canon_members)
    bool hasParachute;  // X10 supply (csp_canon_members)
    void* health;  // X10 supply (csp_canon_members)
    void* idleActionTimer;  // X10 supply (csp_canon_members)  // X27: template-carrier
    unsigned char idleActionTimer_d;  // X10 supply (csp_canon_members)
    unsigned char inAirFlag[1];  /* PassengersClass */  // X10 supply (csp_canon_members)
    void* inLimbo;  // X10 supply (csp_canon_members)
    unsigned char ironCurtainTimer;  // X10 supply (csp_canon_members)
    void* isAliveFlag;  // X10 supply (csp_canon_members)
    bool isDiscoveredByCurrentPlayer;  // X10 supply (csp_canon_members)
    bool isInLogic;  // X10 supply (csp_canon_members)
    void* isOnMap;  // X10 supply (csp_canon_members)
    bool isOwnedByCurrentPlayer;  // X10 supply (csp_canon_members)
    bool isPrimaryFactory;  // X10 supply (csp_canon_members)
    int32_t lastCommands;  // X10 supply (csp_canon_members)
    int32_t lastSightRange;  // X10 supply (csp_canon_members)
    LineTrail* lineTrailer;  // X10 supply (csp_canon_members)
    void* location;  // X10 supply (csp_canon_members)
    unsigned int locomotorSource;  // X10 supply (csp_canon_members)
    void* mindControlledBy;  // X10 supply (csp_canon_members)
    void* missionData;  // X10 supply (csp_canon_members)
    void* missionStartTime;  // X10 supply (csp_canon_members)
    int32_t missionStatus;  // X10 supply (csp_canon_members)
    unsigned char missionTimer[12];  /* TimerStruct */  // X10 supply (csp_canon_members)
    bool needsRedraw;  // X10 supply (csp_canon_members)
    void* nextArrayIndex;  // X10 supply (csp_canon_members)
    void* nextObject;  // X10 supply (csp_canon_members)
    void* objectTypeFlags;  // X10 supply (csp_canon_members)
    unsigned int occupant;  // X10 supply (csp_canon_members)
    bool onBridge;  // X10 supply (csp_canon_members)
    void* owner;  // X10 supply (csp_canon_members)
    void* owningHouseIndex;  // X10 supply (csp_canon_members)
    AnimClass* parachute;  // X10 supply (csp_canon_members)
    unsigned char passengers[4];  /* PassengersClass */  // X10 supply (csp_canon_members)
    int32_t pitchAngle;  // X10 supply (csp_canon_members)
    unsigned char primaryFacing[24];  /* FacingStruct */  // X10 supply (csp_canon_members)
    unsigned int q040;  // X10 supply (member_lookup)
    unsigned int q10E;  // X10 supply (member_lookup)
    AbstractClass* q118;  // X10 supply (member_lookup)
    void* q11B0;  // X10 supply (member_lookup)  // X27: template-carrier
    int8_t q121;  // X10 supply (member_lookup)
    bool q16B;  // X10 supply (member_lookup)
    unsigned int q16F;  // X10 supply (member_lookup)
    unsigned char q16FC;  // X10 supply (member_lookup)
    void* q5380;  // X10 supply (member_lookup)
    unsigned char q5384;  // X10 supply (member_lookup)
    IUnknown* q5388;  // X10 supply (member_lookup)
    CellStruct* q5A4;  // X10 supply (member_lookup)
    int32_t q608;  // X10 supply (member_lookup)
    bool q988;  // X10 supply (member_lookup)
    void* qEB8;  // X10 supply (member_lookup)
    void* queuedMission;  // X10 supply (csp_canon_members)
    unsigned int queuedVoiceIndex;  // X10 supply (csp_canon_members)
    void* radarFlashTimer_d;  // X10 supply (csp_canon_members)
    unsigned int radioLinks;  // X10 supply (csp_canon_members)
    int referenceCount;  // X10 supply (csp_canon_members)
    unsigned int spawnStatus;  // X10 supply (csp_canon_members)
    int32_t suspendedMission;  // X10 supply (csp_canon_members)
    bool targetingTimer_d;  // X10 supply (csp_canon_members)
    void* turretChargeTimer;  // X10 supply (csp_canon_members)
    unsigned int u32_11A8;  // X10 supply (member_lookup)
    unsigned int u32_11B;  // X10 supply (member_lookup)
    unsigned int u32_11B1;  // X10 supply (member_lookup)
    unsigned int u32_11B2;  // X10 supply (member_lookup)
    unsigned int u32_11B3;  // X10 supply (member_lookup)
    unsigned int u32_11B4;  // X10 supply (member_lookup)
    unsigned int u32_11EE;  // X10 supply (member_lookup)
    unsigned int u32_13D8;  // X10 supply (member_lookup)
    int u32_14F4;  // X10 supply (member_lookup)
    unsigned int u32_1A9B;  // X10 supply (member_types)
    unsigned int u32_1BCE;  // X10 supply (member_types)
    unsigned int u32_1BCF;  // X10 supply (member_types)
    unsigned int u32_1BDE;  // X10 supply (member_lookup)
    unsigned int u32_384;  // X10 supply (member_lookup)
    unsigned int u32_412;  // X10 supply (member_lookup)
    int u32_5378;  // X10 supply (member_lookup)
    int u32_537C;  // X10 supply (member_lookup)
    unsigned int u32_55A8;  // X10 supply (member_lookup)
    unsigned int u32_5914;  // X10 supply (member_types)
    unsigned int u32_5AC;  // X10 supply (member_lookup)
    unsigned int u32_5B9;  // X10 supply (member_lookup)
    int u32_5ED;  // X10 supply (member_lookup)
    unsigned int u32_6B1;  // X10 supply (member_lookup)
    unsigned int u32_6D4;  // X10 supply (member_lookup)
    unsigned int u32_735;  // X10 supply (member_lookup)
    int u32_B30;  // X10 supply (member_lookup)
    unsigned int u32_B54;  // X10 supply (member_lookup)
    unsigned int u32_C84;  // X10 supply (member_types)
    int u32_CCE;  // X10 supply (member_lookup)
    unsigned int u32_EDC;  // X10 supply (member_lookup)
    int u8_1768;  // X10 supply (member_lookup)
    unsigned char u8_FE;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    unsigned int visibilityFlags;  // X10 supply (csp_canon_members)
    void* ptr_4_2;  // X10 supply (csp_canon_members)
    void* ptr_8_2;  // X10 supply (csp_canon_members)


    void * ptr_4;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int __pad_6B4;  // 0x6B4 [X55 W3 supply (render vocab)]
    unsigned int q_610;  // 0x610 [X55 W3 supply (render vocab)]
    void * ptr_0;  // 0x0 [X55 W3 supply (render vocab)]
    void * ptr_8;  // 0x8 [X55 W3 supply (render vocab)]
    void * ptr_C;  // 0xC [X55 W3 supply (render vocab)]
};

// External globals
extern RulesClass* RulesClass_Instance;
extern bool IKnowWhatImDoing; // data: 0xA8E7AC
extern int MCVRedeploy;  // data: 0xA8B320

// ------------------------------------------------------------
// Faithful callees referenced by BuildingClass::GetPowerOutput (0x44E7B0) and
// BuildingClass::ClearSuperWeaponAnim (0x451690). Declared with their canonical
// IDA-qualified names so the call sites resolve to the right binary addresses
// (Math::RoundToInt @ 0x7C5F00, SuperWeapon::UpdateSuperWeaponsOwnedHouseClass @
// 0x50AF10). Defined inline here so the golden functions link without a separate
// TU; the callee BODIES are outside this task's golden scope.
// G42.32t: namespace Math block removed -- collides with class gamemd::Math (C2757)

class SuperWeapon {
int UpdateSuperWeaponsOwnedHouseClass(HouseClass* ownerHouse); // 0x50AF10 (IDA arg is the house pointer)
char GetField10();  // 0x6CC2A0 (signals: thiscall 0-arg ret char; X145C supply for building_bodies call site)
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int CreateUnits();  // 0x445F80
    int CreateNukePayload();  // 0x46B310
    int SelectSuperWeaponTarget(int a1);  // 0x4FAD20
    int FireSuperWeaponHouseClass(int a1, int a2);  // 0x4FAE50
    int EvaluateAITarget(int a1, void* a2);  // 0x4FAF00
    int UpdateSuperWeaponsUnavailableHouseClass();  // 0x50B1D0
    int SerializeSuperWeaponState();  // 0x539AE0
    void* UpdateTargetRedrawState(void* a1);  // 0x6A60E0
    int UpdateSuperWeaponReadyState(int a1);  // 0x6CBCA0
    void DispatchTeam(int a1, int a2);  // 0x6EFE60
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int q048;  // X10 supply (member_lookup)
    unsigned int q054;  // X10 supply (member_lookup)
    unsigned int u32_130;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_539C;  // X10 supply (member_lookup)
    unsigned int u32_53A4;  // X10 supply (member_lookup)
    unsigned int u32_53A8;  // X10 supply (member_lookup)
    unsigned int u32_5494;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_7D4;  // X10 supply (member_lookup)
    unsigned char u8_F94;  // X10 supply (member_lookup)


    int q258;  // 0x258 [X55 W3 supply (render vocab)]
    unsigned char u8_1F5;  // 0x1F5 [X55 W3 supply (render vocab)]
    int q264;  // 0x264 [X55 W3 supply (render vocab)]
    int q004;  // 0x4 [X55 W3 supply (render vocab)]
    unsigned int q21C;  // 0x21C [X55 W3 supply (render vocab)]
    unsigned int q1FC;  // 0x1FC [X55 W3 supply (render vocab)]
};

} // namespace gamemd
