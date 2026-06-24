#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "object/techno.hpp"
#include "misc/repeatable_timer.hpp"

namespace gamemd {

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
class BuildingLightClass;
class BuildingTypeClass;
class FactoryClass;
class HouseClass;
class InfantryClass;
class LightSourceClass;
class TechnoTypeClass;
class RulesClass;

class BuildingClass : public ra2::game::TechnoClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Building;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;

    virtual ~BuildingClass() override = default;  // 0x43BCF0

    // wrapper: delegates to BuildingClass::Dtor at 0x43BCF0
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to BuildingClass::Dtor at 0x43BCF0
    virtual int objectSize() const override;

    // Construction / destruction lifecycle
    void Construct();  // 0x43B740
    void Dtor();  // 0x43BCF0
    int ScalarDtor() override;  // 0x459F20
    int Activate() override;  // 0x452480
    int Deactivate() override;   // 0x452480
    virtual void Destroyed(ObjectClass* killer) override;  // 0x459E80
    void AfterDestruction();  // 0x441F60
    void Cleanup();  // 0x43EEB0

    // Stream/placement
    void LoadFromStream(void* stream);  // 0x453E20
    int Size();  // 0x454190
    // wrapper: delegates to BuildingClass::Size at 0x454190
    void Place(bool bUnk);
    // wrapper: delegates to BuildingClass::Size at 0x454190
    virtual void onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2) override;

    // Foundation / cell
    // wrapper: delegates to BuildingClass::Size at 0x454190
    virtual CellStruct* getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const;
    // design: virtual function, no binary implementation matched in IDA
    virtual int canPlaceHere(ObjectClass* pObj) const;
    bool IsCellPlaceable(int cell_x, int cell_y) const;  // 0x4260F0
    bool ValidatePlacement();  // 0x480630
    bool ValidateFoundation();  // 0x44EFB0
    bool ValidateFoundation_0();  // 0x4DC8C0
    bool Validate();  // 0x4DD890
    bool ValidateCell(int cell_x, int cell_y);  // 0x4DD9F0
    bool ValidatePlacementEx();  // 0x4DEE80
    void FindPlacementCells();  // 0x7447B0
    void FindPlacementCells2();  // 0x6B0300
    void SearchPlacement();  // 0x56BEC0
    void VisualizePlacement();  // 0x485AF0
    CoordStruct* GetPlacementCoords(CoordStruct* out) const;  // 0x45F160
    RectangleStruct* GetPlacementRect(RectangleStruct* out) const;  // 0x47FDE0
    bool CheckOverlapWithOthers();  // 0x44E3A0
    bool IsFootprintBlocked();  // 0x4578C0
    // wrapper: delegates to BuildingClass::IsFootprintBlocked at 0x4578C0
    void DamageFactoryBibCells();
    void ClearFactoryBib();  // 0x44D880
    void RepairPlacement();  // 0x4533A0
    bool CheckBuildability();  // 0x63AC70
    bool CheckCellPassability();  // 0x70C5A0
    void OnCellPlacementComplete();  // 0x710670

    // Exit coordinates
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const override;  // 0x447AC0
    CoordStruct* GetAdjustedExitCoords(CoordStruct* out) const;  // 0x4500A0
    CoordStruct* GetFactoryPosition(CoordStruct* out) const;  // 0x44F640
    CoordStruct* CalcExitCoords(CoordStruct* out, int dir) const;  // 0x4FD150
    CoordStruct* GetRallyPointCoord(CoordStruct* out) const;  // 0x6B0690
    CoordStruct* GetBuildCoordsAdjusted(CoordStruct* out) const;  // 0x459EF0
    void SetRallyPoint(CoordStruct* target);  // 0x443860
    void MarkExitPath();  // 0x4A9650
    bool CheckExitPath();  // 0x639CB0
    void RenderExitPosition();  // 0x453840
    // wrapper: delegates to BuildingClass::RenderExitPosition at 0x453840
    void ReassignFlagPosition();
    virtual bool TogglePrimaryFactory();  // 0x447E90
    bool IsFactorySelectable();  // 0x457620

    // Construction update (vtable[8])
    // wrapper: delegates to BuildingClass::IsFactorySelectable at 0x457620
    virtual void UpdateConstructionOptions();
    int Mission_Construction() override;
    int UpdateConstruction();  // 0x443C60

    // Production
    int StartProduction(int type_index);  // 0x447780
    void UpdateProduction();  // 0x4496B0
    void CompleteProduction();  // 0x639740
    void ProductionDisplayUpdate();  // 0x43F180
    void DisplayProductionFrame();  // 0x43D030
    bool ProductionCheck();  // 0x4513D0
    void AbandonProduction();  // 0x4C9FF0
    bool CanAcceptType(int type_index);  // 0x452670
    void AddToProductionQueue(int type_index);  // 0x4DA0E0
    void SetProduction(int type_index);  // 0x6395B0
    // wrapper: delegates to BuildingClass::SetProduction at 0x6395B0
    virtual void onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2);
    int GetProductionFrame() const;  // 0x43EF90

    // Selling
    // wrapper: delegates to BuildingClass::GetProductionFrame at 0x43EF90
    virtual int Mission_Selling() override;
    int Sell();  // 0x445880
    // wrapper: delegates to BuildingClass::Sell at 0x445880
    void CompleteSell();
    void ProcessSell();  // 0x739EC0
    bool CanBeSold();  // 0x4494C0
    bool CanBeSoldCheck();  // 0x44F5C0
    void ToggleSellMode();  // 0x447110
    int GetSellPriority();  // 0x5F5DD0
    void SellEffects();  // 0x480CB0
    void SellUnit();  // 0x4D9F70
    void HandleSellOrRepair();  // 0x701410

    // Repair
    virtual int Mission_Repair() override;
    void ProcessRepair();  // 0x44B780
    bool CanRepair();  // 0x457CE0
    void ToggleRepairMode();  // 0x446FF0
    bool CheckHealthForRepair();  // 0x452630
    bool IsBeingRepairedOrCaptured();  // 0x7105E0

    // Missile / Super weapons
    // wrapper: delegates to BuildingClass::IsBeingRepairedOrCaptured at 0x7105E0
    virtual int Mission_Missile() override;
    virtual void processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4);
    void ProcessSuperWeaponEffects();   // 0x44C980
    bool SWAvailable();  // 0x457630
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
    // wrapper: delegates to UnitClass::Mission_Harvest at 0x4151E0
    int Mission_Deploy();
    bool CheckMissionGuard();  // 0x458DD0
    bool CheckMissionAttack();  // 0x458E00

    // Power system
    void PowerDrainUpdate();  // 0x454260
    int GetPowerOutput();  // 0x44E7B0
    int GetPowerDrain();  // 0x44E880
    void PowerUpdate();  // 0x4FF700
    int UpdatePowerDrain() override;  // 0x4544A0
    bool IsPoweredOn();  // 0x4525F0
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
    void UpdatePowerAnimation();  // 0x429A90
    void UpdatePowerAnim();  // 0x42ACF0
    int GetPowerFrame();  // 0x4566B0

    // Capture / Occupancy / Infiltration
    int ProcessCapture() override;  // 0x712130
    void CaptureBuilding();  // 0x44D5D0
    void Capture();  // 0x4FCE80
    void DisableTemporal();  // 0x4521C0
    void Infiltrate();  // 0x4571E0
    void ProcessStructureAbandoned();  // 0x458200
    void ProcessEnterUnit();  // 0x6B0DB0
    void ProcessOccupancy();  // 0x6DA5C0
    bool IsIdleWithNoCaptives();  // 0x63BE10
    int GetCrew();  // 0x44EB10
    int GetCrewCount();  // 0x451330
    void EjectCrew();  // 0x442D90
    void CleanupOccupation();  // 0x454DB0
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
    void AimTurret();  // 0x424B50
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
    void CalcBarrelFlashPosition();  // 0x453BF0
    void BuildTurretTransform();  // 0x458810

    // Bridge / Demolish
    bool DemolishBridgeCheck();  // 0x452A40
    void FindBridgeSegment();  // 0x452BB0
    void DemolishBridge();  // 0x452DC0
    void DemolishBridgeAnim();  // 0x453060
    void TraverseBridgeSegments();  // 0x453240
    void FindBridgeCell();  // 0x70F8F0
    bool CheckBridge();  // 0x6B0880
    void DestroyOnBridgeCollapse();  // 0x4576F0
    CoordStruct* GetBridgeAwareCoords(CoordStruct* out) const;  // 0x705CA0

    // Deploy / Undeploy
    int Deploy() override;  // 0x62A4A0
    bool Is1x1AndUndeployable_BuildingMassSelectable();  // 0x465D40
    void UpdateMovingPosition();  // 0x5B17B0
    void UpdateFloatPosition();  // 0x62D2A0
    void AdjustHeight();  // 0x62D5E0

    // Animation
    void PlayAnim(int anim_index, int anim_type, int frame_count);  // 0x451890
    void StopAnim(int anim_index);  // 0x451B40
    void ClearAnims();  // 0x451E40
    void ProcessActiveAnimation();  // 0x450630
    void UpdateAnimFrames();  // 0x4509D0
    void ProcessAnimationStates();  // 0x4545D0
    void UpdateIdleAnims();  // 0x454730
    void UpdateAnimationSlots();  // 0x4547C0
    void ProcessDamageAnim();  // 0x454930
    void UpdateDamageAnim();  // 0x459470
    void CreateIdleAnim();  // 0x486920
    void PlayUpgradeAnim();  // 0x451750
    void SyncCrateVisuals();  // 0x451F60
    void MarkUpgradeComponentUsed();  // 0x42F260
    void AnimController();  // 0x629720

    // Cloak / Visibility / Fog
    void UpdateCloak();  // 0x457770
    int IronCurtain() override;  // 0x457C90
    bool IsInvisible();  // 0x6F9E10
    void AnnounceReady();  // 0x452260
    void UpdateRevealField();  // 0x456580
    void UpdateGapGeneratorField();  // 0x4565E0
    void UpdateDetectionField();  // 0x456640
    bool IsCellVisibleToPlayer(int cell_x, int cell_y);  // 0x457020
    void CreateFoggedObjects();  // 0x457AA0
    void RevealShroud(int radius);  // 0x6FB170
    void RemoveShroud();  // 0x6FB470
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
    void Update();  // 0x442C40
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
    virtual ra2::game::LightConvertClass* GetRemapColour() const override;

    // Health / Stats
    double GetHealthRatio() const;  // 0x5F5C60
    bool IsHealthLow();  // 0x5F5CD0

    // Misc
    int SquaredDistanceTo(CoordStruct* target) const;  // 0x5F6500
    void SaveLoad_Register();  // 0x5F5E80
    void CopyTypeDataForRender();  // 0x634310
    BuildingTypeClass* GetType();  // 0x705D20
    void SetType(BuildingTypeClass* type);  // 0x705D10
    BuildingTypeClass* GetTypePtr();  // 0x459EE0
    BuildingTypeClass* GetType_Thunk();  // 0x705D60
    HouseClass* GetOwnerHouse();  // 0x449A40
    int GetTypeEntry();  // 0x6347B0
    int GetTypeField60();  // 0x459ED0
    int GetObjectData();  // 0x6385C0
    int GetFWFlags();  // 0x455B90
    void FlushScriptActions();  // 0x639BC0
    static BuildingClass* FindByCellHash(uint32_t hash);  // 0x485010
    void LoadBuildingTypes();  // 0x67B720
    void ReadBuildingSettings();  // 0x475A60
    void ReadConstructionData();  // 0x44FEC0
    bool HasOccupantAudio();  // 0x4527D0
    int SelectVocOrSfx();  // 0x4526F0
    void UnloadUnits();  // 0x457DE0
    void AnimateUnloadUnits();  // 0x4585C0
    void SpawnParticles();  // 0x459900
    void ApplyFoundationDamage();  // 0x45EE70
    int AssignTarget_SyncLog() override;  // 0x443B90
    void AssignDestination_SyncLog();  // 0x455D50
    void DecrementTypeCounter();  // 0x4FF980
    void IncrementOccupantTypeCounter();  // 0x4FFA50
    bool IsMassSelectable();  // 0x459C00
    void AddUpgrade(BuildingTypeClass* upgrade);  // 0x6551C0
    void ProcessUpgradeEffects();  // 0x726400
    void ExecuteTriggers();  // 0x7265C0
    void ProcessUpgradeTargeting();  // 0x459C20
    void ProcessSpreadEffect();  // 0x43FB20
    void Unlimbo_UnitDeliveryFix();  // 0x440580
    void SetConnectedBuildingMission();  // 0x452170
    void CreateDestructionCrater();  // 0x4852D0
    void CreatePlacementCrater();  // 0x486E70
    void CreateCraterAtCell(int cell_x, int cell_y);  // 0x4A18F0
    void BeginCrumblingTimer();  // 0x4A17C0
    void MarkCellOccupied(int cell_x, int cell_y);  // 0x453D60
    void ClearCellOccupied(int cell_x, int cell_y);  // 0x453DC0
    void ScanCircleForTiberium();  // 0x455980
    void UpdateTerrainEffect();  // 0x455A80
    bool IsTiberiumCollectorEligible();  // 0x483620
    bool IsTiberiumSiloEligible();  // 0x483690
    void UpdateBunker();  // 0x458E50
    void EmptyBunker();  // 0x4595C0
    void MakeTraversable();  // 0x452540
    void RemoveLimpet();  // 0x4593A0
    void ClearLimpetCheck();  // 0x459DB0
    bool CheckC4Active();  // 0x487C10
    void SetField95(int value);  // 0x424C90
    void SetField8(int value);  // 0x425260
    int GetCursorAction();  // 0x449440
    void UpdateThreatBounds();  // 0x70F6E0
    bool ValidatePath();  // 0x716150
    void SetSlot(int slot);  // 0x717890
    // wrapper: delegates to BuildingClass::SetSlot at 0x717890
    uint32_t GetField184() const;
    void HandleClickEvent();  // 0x447210
    void HandleRepairCursor();  // 0x447540
    static BuildingClass* Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner);  // 0x466000
    static BuildingClass* AllocAndCtor();  // 0x70BF50

    // Trivial stubs (vt_entry_*)
    bool vt_entry_4E4();  // 0x41C060
    bool vt_entry_4D4();  // 0x4DE750
    bool vt_entry_4D8();  // 0x4DE760
    bool vt_entry_504();  // 0x4DB9B0
    bool StubReturnFalse();  // 0x459D80
    bool StubReturnFalse3();  // 0x459DF0
    bool StubReturnFalse4();  // 0x459E00
    bool StubReturnFalse10();  // 0x459E10
    bool StubReturnFalse11();  // 0x459E20
    bool StubReturnFalse12();  // 0x459E30
    bool StubReturnFalse13();  // 0x459E40
    bool StubReturnFalse14();  // 0x459E50
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
    uint32_t                              BuildingClass_field_5FC;
    BuildingLightClass*                   Spotlight;
    RepeatableTimerStruct                 GateTimer;
    LightSourceClass*                     LightSource;
    uint32_t                              LaserFenceFrame;
    uint32_t                              FirestormWallFrame;
    ProgressTimer                         RepairProgress;
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
    double checkRepairEligibility();  // 0x4F9750
    void processBaseExpansion(float a1);  // 0x5AEAD0
    void updateFoundation(float a1);  // 0x5AEAF0
    void recalcAdjacency(float a1);  // 0x5AEB20
    int updateAnimationState();  // 0x63D540
    int checkPlacement();  // 0x70DDC0
    // --- gap2 auto-generated stub declarations (END) ---
};

// External globals
extern RulesClass* RulesClass_Instance;
extern bool IKnowWhatImDoing;
extern bool MCVRedeploy;

// ------------------------------------------------------------
// Faithful callees referenced by BuildingClass::GetPowerOutput (0x44E7B0) and
// BuildingClass::ClearSuperWeaponAnim (0x451690). Declared with their canonical
// IDA-qualified names so the call sites resolve to the right binary addresses
// (Math::RoundToInt @ 0x7C5F00, SuperWeapon::UpdateSuperWeaponsOwnedHouseClass @
// 0x50AF10). Defined inline here so the golden functions link without a separate
// TU; the callee BODIES are outside this task's golden scope.
namespace Math {
inline int RoundToInt(double value)  // 0x7C5F00 — round to nearest
{
    return (int)(value >= 0.0 ? value + 0.5 : value - 0.5);
}
} // namespace Math

class SuperWeapon {
public:
    static void UpdateSuperWeaponsOwnedHouseClass(int ownerHouse)  // 0x50AF10
    {
        (void)ownerHouse;  // refresh owning house's super-weapon collection (callee body out of scope)
    }
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
};

} // namespace gamemd
