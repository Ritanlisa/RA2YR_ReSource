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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;

    virtual ~BuildingClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    // Construction / destruction lifecycle
    void Construct();  // 0x43b740
    void Dtor();  // 0x43bcf0
    int ScalarDtor() override;  // 0x459f20
    int Activate() override;
    int Deactivate() override;  // 0x452480
    virtual void Destroyed(ObjectClass* killer) override;  // 0x459e80
    void AfterDestruction();  // 0x441f60
    void Cleanup();  // 0x43eeb0

    // Stream/placement
    void LoadFromStream(void* stream);  // 0x453e20
    int Size();  // 0x454190
    void Place(bool bUnk);
    virtual void onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2) override;

    // Foundation / cell
    virtual CellStruct* getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const;
    virtual int canPlaceHere(ObjectClass* pObj) const;
    bool IsCellPlaceable(int cell_x, int cell_y) const;  // 0x4260f0
    bool ValidatePlacement();  // 0x480630
    bool ValidateFoundation();  // 0x44efb0
    bool ValidateFoundation_0();  // 0x4dc8c0
    bool Validate();  // 0x4dd890
    bool ValidateCell(int cell_x, int cell_y);  // 0x4dd9f0
    bool ValidatePlacementEx();  // 0x4dee80
    void FindPlacementCells();  // 0x7447b0
    void FindPlacementCells2();  // 0x6b0300
    void SearchPlacement();  // 0x56bec0
    void VisualizePlacement();  // 0x485af0
    CoordStruct* GetPlacementCoords(CoordStruct* out) const;  // 0x45f160
    RectangleStruct* GetPlacementRect(RectangleStruct* out) const;  // 0x47fde0
    bool CheckOverlapWithOthers();  // 0x44e3a0
    bool IsFootprintBlocked();  // 0x4578c0
    void DamageFactoryBibCells();
    void ClearFactoryBib();  // 0x44d880
    void RepairPlacement();  // 0x4533a0
    bool CheckBuildability();  // 0x63ac70
    bool CheckCellPassability();  // 0x70c5a0
    void OnCellPlacementComplete();  // 0x710670

    // Exit coordinates
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const override;  // 0x447ac0
    CoordStruct* GetAdjustedExitCoords(CoordStruct* out) const;  // 0x4500a0
    CoordStruct* GetFactoryPosition(CoordStruct* out) const;  // 0x44f640
    CoordStruct* CalcExitCoords(CoordStruct* out, int dir) const;  // 0x4fd150
    CoordStruct* GetRallyPointCoord(CoordStruct* out) const;  // 0x6b0690
    CoordStruct* GetBuildCoordsAdjusted(CoordStruct* out) const;  // 0x459ef0
    void SetRallyPoint(CoordStruct* target);  // 0x443860
    void MarkExitPath();  // 0x4a9650
    bool CheckExitPath();  // 0x639cb0
    void RenderExitPosition();  // 0x453840
    void ReassignFlagPosition();
    virtual bool TogglePrimaryFactory();  // 0x447e90
    bool IsFactorySelectable();  // 0x457620

    // Construction update (vtable[8])
    virtual void UpdateConstructionOptions();
    int Mission_Construction() override;  // 0x459ec0
    int UpdateConstruction();  // 0x443c60

    // Production
    int StartProduction(int type_index);  // 0x447780
    void UpdateProduction();  // 0x4496b0
    void CompleteProduction();  // 0x639740
    void ProductionDisplayUpdate();  // 0x43f180
    void DisplayProductionFrame();  // 0x43d030
    bool ProductionCheck();  // 0x4513d0
    void AbandonProduction();  // 0x4c9ff0
    bool CanAcceptType(int type_index);  // 0x452670
    void AddToProductionQueue(int type_index);  // 0x4da0e0
    void SetProduction(int type_index);  // 0x6395b0
    virtual void onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2);
    int GetProductionFrame() const;  // 0x43ef90

    // Selling
    virtual int Mission_Selling() override;
    int Sell();  // 0x445880
    void CompleteSell();
    void ProcessSell();  // 0x739ec0
    bool CanBeSold();  // 0x4494c0
    bool CanBeSoldCheck();  // 0x44f5c0
    void ToggleSellMode();  // 0x447110
    int GetSellPriority();  // 0x5f5dd0
    void SellEffects();  // 0x480cb0
    void SellUnit();  // 0x4d9f70
    void HandleSellOrRepair();  // 0x701410

    // Repair
    virtual int Mission_Repair() override;
    void ProcessRepair();  // 0x44b780
    bool CanRepair();  // 0x457ce0
    void ToggleRepairMode();  // 0x446ff0
    bool CheckHealthForRepair();  // 0x452630
    bool IsBeingRepairedOrCaptured();  // 0x7105e0

    // Missile / Super weapons
    virtual int Mission_Missile() override;
    virtual void processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4);
    void ProcessSuperWeaponEffects();  // 0x44c980
    bool SWAvailable();  // 0x457630
    bool SW2Available();  // 0x457690
    static BuildingClass* FindBySWType(int sw_type);  // 0x505310
    void ClearSuperWeaponAnim();  // 0x451690
    void UpdatePrism();  // 0x4503f0
    void Disappear_PrismForward();  // 0x44ebf0

    // Mission system
    int MissionController();  // 0x43c2d0
    int ProcessMission();  // 0x5b01c0
    int Mission_Guard();  // 0x459e70
    int Mission_Attack();
    int Mission_Move();
    int Mission_Enter();
    int Mission_Capture();
    int Mission_Harvest();
    int Mission_Deploy();
    bool CheckMissionGuard();  // 0x458dd0
    bool CheckMissionAttack();  // 0x458e00

    // Power system
    void PowerDrainUpdate();  // 0x454260
    int GetPowerOutput();  // 0x44e7b0
    int GetPowerDrain();  // 0x44e880
    void PowerUpdate();  // 0x4ff700
    int UpdatePowerDrain() override;  // 0x4544a0
    bool IsPoweredOn();  // 0x4525f0
    bool IsPoweredActive();  // 0x4555d0
    bool CheckPowerFlags();  // 0x4a51b0
    bool CheckFlag24();  // 0x4a5130
    void PowerOff();  // 0x452360
    void TogglePower();  // 0x4ac660
    void TogglePower2();  // 0x4ac8c0
    void EnableTogglePower();  // 0x452210
    void EnableStuff();  // 0x452410
    void ProcessPowerPlantEffect();  // 0x44e440
    void ProcessActiveUpdate();  // 0x44acf0
    void UpdatePowerAnimation();  // 0x429a90
    void UpdatePowerAnim();  // 0x42acf0
    int GetPowerFrame();  // 0x4566b0

    // Capture / Occupancy / Infiltration
    int ProcessCapture() override;  // 0x712130
    void CaptureBuilding();  // 0x44d5d0
    void Capture();  // 0x4fce80
    void DisableTemporal();  // 0x4521c0
    void Infiltrate();  // 0x4571e0
    void ProcessStructureAbandoned();  // 0x458200
    void ProcessEnterUnit();  // 0x6b0db0
    void ProcessOccupancy();  // 0x6da5c0
    bool IsIdleWithNoCaptives();  // 0x63be10
    int GetCrew();  // 0x44eb10
    int GetCrewCount();  // 0x451330
    void EjectCrew();  // 0x442d90
    void CleanupOccupation();  // 0x454db0
    void AddOccupancy();  // 0x722af0
    void ClearOccupancyData();  // 0x722d00
    void RebuildOccupancyTracking();  // 0x722770
    void RebuildOccupancyTracking2();  // 0x723260
    void RebuildOccupancy2();  // 0x7233a0
    void InitBuildLimit();  // 0x6b0cc0
    void RefreshOccupierCache();  // 0x6b0d60
    void ClearFactoryData();  // 0x722240
    void FreeUpgradeQueue();  // 0x722390
    void FreeUpgradeQueue2();  // 0x722e50
    bool CheckOccupantState();  // 0x7013e0

    // Combat / Targeting
    void ProcessAttack();  // 0x442230
    void AimTurret();  // 0x424b50
    void CalculateTurretAngle();  // 0x447b20
    int GetFacingToTarget();  // 0x445e50
    int GetTargetFacing();  // 0x44d7d0
    void FireLaser();  // 0x44abd0
    int GetAmmoCountScaled();  // 0x44d700
    int GetFireError();  // 0x447f10
    void AcquireTarget();  // 0x456e00
    int SelectTargetTypeFlags();  // 0x445f00
    int DistanceToTarget();
    void CalcBarrelFlashPosition();  // 0x453bf0
    void BuildTurretTransform();  // 0x458810

    // Bridge / Demolish
    bool DemolishBridgeCheck();  // 0x452a40
    void FindBridgeSegment();  // 0x452bb0
    void DemolishBridge();  // 0x452dc0
    void DemolishBridgeAnim();  // 0x453060
    void TraverseBridgeSegments();  // 0x453240
    void FindBridgeCell();  // 0x70f8f0
    bool CheckBridge();  // 0x6b0880
    void DestroyOnBridgeCollapse();  // 0x4576f0
    CoordStruct* GetBridgeAwareCoords(CoordStruct* out) const;  // 0x705ca0

    // Deploy / Undeploy
    int Deploy() override;  // 0x62a4a0
    bool Is1x1AndUndeployable_BuildingMassSelectable();  // 0x465d40
    void UpdateMovingPosition();  // 0x5b17b0
    void UpdateFloatPosition();  // 0x62d2a0
    void AdjustHeight();  // 0x62d5e0

    // Animation
    void PlayAnim(int anim_index, int anim_type, int frame_count);  // 0x451890
    void StopAnim(int anim_index);  // 0x451b40
    void ClearAnims();  // 0x451e40
    void ProcessActiveAnimation();  // 0x450630
    void UpdateAnimFrames();  // 0x4509d0
    void ProcessAnimationStates();  // 0x4545d0
    void UpdateIdleAnims();  // 0x454730
    void UpdateAnimationSlots();  // 0x4547c0
    void ProcessDamageAnim();  // 0x454930
    void UpdateDamageAnim();  // 0x459470
    void CreateIdleAnim();  // 0x486920
    void PlayUpgradeAnim();  // 0x451750
    void SyncCrateVisuals();  // 0x451f60
    void MarkUpgradeComponentUsed();  // 0x42f260
    void AnimController();  // 0x629720

    // Cloak / Visibility / Fog
    void UpdateCloak();  // 0x457770
    int IronCurtain() override;  // 0x457c90
    bool IsInvisible();  // 0x6f9e10
    void AnnounceReady();  // 0x452260
    void UpdateRevealField();  // 0x456580
    void UpdateGapGeneratorField();  // 0x4565e0
    void UpdateDetectionField();  // 0x456640
    bool IsCellVisibleToPlayer(int cell_x, int cell_y);  // 0x457020
    void CreateFoggedObjects();  // 0x457aa0
    void RevealShroud(int radius);  // 0x6fb170
    void RemoveShroud();  // 0x6fb470
    void ProcessFogCellOccupancy();  // 0x655560
    void RemoveGapCellCoverage();  // 0x655740
    void SensorArrayActivate(CellStruct cell);
    void SensorArrayDeactivate(CellStruct cell);
    void DisguiseDetectorActivate(CellStruct cell);
    void DisguiseDetectorDeactivate(CellStruct cell);

    // Update
    void Update();  // 0x442c40
    void OnObjectExpired(ObjectClass* obj);  // 0x44e8f0
    void UpdateTimerWithElapsed();  // 0x4a5290
    bool HasActiveParam();  // 0x458db0
    void CheckSpecialUpdateFlags();  // 0x455da0

    // Rendering
    Point2D* CalcDrawPos(Point2D* out) const;  // 0x480110
    Point2D CalcDrawPos() const;  // 0x480110
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x43d290
    void DrawVisible(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x43e7b0
    void Draw_0(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x47f6a0
    void DrawFactoryProduction(Point2D* screen_pos, RectangleStruct* bounds, int frame) const;  // 0x43cea0
    void DrawSelectionBox(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x6f60d0
    void DrawSelectionBlip(Point2D* screen_pos) const;  // 0x63d560
    void DrawActionLines(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x63be60
    void DrawDeployCircle(Point2D* screen_pos) const;  // 0x456750
    void DrawFoundationChar(int cell_x, int cell_y, wchar_t ch) const;  // 0x690910
    void DrawFoundationChar2(int cell_x, int cell_y, wchar_t ch) const;  // 0x690850
    void DrawHealthBar(Point2D* screen_pos, RectangleStruct* bounds) const;  // 0x6f64a0
    int GetDrawColor() const;  // 0x635830
    int GetSHPFrame() const;  // 0x490b90
    int DetermineVisualState() const;  // 0x483c80
    void AddRectToDrawList(RectangleStruct* rect) const;  // 0x42a460
    int GetZDrawOffset() const;  // 0x43e900
    int GetBoundingSizeExt() const;  // 0x449410
    virtual ra2::game::LightConvertClass* GetRemapColour() const override;

    // Health / Stats
    double GetHealthRatio() const;  // 0x5f5c60
    bool IsHealthLow();  // 0x5f5cd0

    // Misc
    int SquaredDistanceTo(CoordStruct* target) const;  // 0x5f6500
    void SaveLoad_Register();  // 0x5f5e80
    void CopyTypeDataForRender();  // 0x634310
    BuildingTypeClass* GetType();  // 0x705d20
    void SetType(BuildingTypeClass* type);  // 0x705d10
    BuildingTypeClass* GetTypePtr();  // 0x459ee0
    BuildingTypeClass* GetType_Thunk();  // 0x705d60
    HouseClass* GetOwnerHouse();  // 0x449a40
    int GetTypeEntry();  // 0x6347b0
    int GetTypeField60();  // 0x459ed0
    int GetObjectData();  // 0x6385c0
    int GetFWFlags();  // 0x455b90
    void FlushScriptActions();  // 0x639bc0
    static BuildingClass* FindByCellHash(uint32_t hash);  // 0x485010
    void LoadBuildingTypes();  // 0x67b720
    void ReadBuildingSettings();  // 0x475a60
    void ReadConstructionData();  // 0x44fec0
    bool HasOccupantAudio();  // 0x4527d0
    int SelectVocOrSfx();  // 0x4526f0
    void UnloadUnits();  // 0x457de0
    void AnimateUnloadUnits();  // 0x4585c0
    void SpawnParticles();  // 0x459900
    void ApplyFoundationDamage();  // 0x45ee70
    int AssignTarget_SyncLog() override;  // 0x443b90
    void AssignDestination_SyncLog();  // 0x455d50
    void DecrementTypeCounter();  // 0x4ff980
    void IncrementOccupantTypeCounter();  // 0x4ffa50
    bool IsMassSelectable();  // 0x459c00
    void AddUpgrade(BuildingTypeClass* upgrade);  // 0x6551c0
    void ProcessUpgradeEffects();  // 0x726400
    void ExecuteTriggers();  // 0x7265c0
    void ProcessUpgradeTargeting();  // 0x459c20
    void ProcessSpreadEffect();  // 0x43fb20
    void Unlimbo_UnitDeliveryFix();  // 0x440580
    void SetConnectedBuildingMission();  // 0x452170
    void CreateDestructionCrater();  // 0x4852d0
    void CreatePlacementCrater();  // 0x486e70
    void CreateCraterAtCell(int cell_x, int cell_y);  // 0x4a18f0
    void BeginCrumblingTimer();  // 0x4a17c0
    void MarkCellOccupied(int cell_x, int cell_y);  // 0x453d60
    void ClearCellOccupied(int cell_x, int cell_y);  // 0x453dc0
    void ScanCircleForTiberium();  // 0x455980
    void UpdateTerrainEffect();  // 0x455a80
    bool IsTiberiumCollectorEligible();  // 0x483620
    bool IsTiberiumSiloEligible();  // 0x483690
    void UpdateBunker();  // 0x458e50
    void EmptyBunker();  // 0x4595c0
    void MakeTraversable();  // 0x452540
    void RemoveLimpet();  // 0x4593a0
    void ClearLimpetCheck();  // 0x459db0
    bool CheckC4Active();  // 0x487c10
    void SetField95(int value);  // 0x424c90
    void SetField8(int value);  // 0x425260
    int GetCursorAction();  // 0x449440
    void UpdateThreatBounds();  // 0x70f6e0
    bool ValidatePath();  // 0x716150
    void SetSlot(int slot);  // 0x717890
    uint32_t GetField184() const;
    void HandleClickEvent();  // 0x447210
    void HandleRepairCursor();  // 0x447540
    static BuildingClass* Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner);  // 0x466000
    static BuildingClass* AllocAndCtor();  // 0x70bf50

    // Trivial stubs (vt_entry_*)
    bool vt_entry_4E4();  // 0x41c060
    bool vt_entry_4D4();  // 0x4de750
    bool vt_entry_4D8();  // 0x4de760
    bool vt_entry_504();  // 0x4db9b0
    bool StubReturnFalse();  // 0x459d80
    bool StubReturnFalse3();  // 0x459df0
    bool StubReturnFalse4();  // 0x459e00
    bool StubReturnFalse10();  // 0x459e10
    bool StubReturnFalse11();  // 0x459e20
    bool StubReturnFalse12();  // 0x459e30
    bool StubReturnFalse13();  // 0x459e40
    bool StubReturnFalse14();  // 0x459e50
    int MissionStubReturnZero();  // 0x459870
    int MissionStubReturnZero2();  // 0x459880
    int MissionStubReturnZero3();  // 0x459890
    int MissionStubReturnZero5();  // 0x459da0
    int MissionStubReturnZero6();  // 0x4581f0

    // Sub stubs
    void sub_465D70();
    void sub_570DDC0();
    void sub_459FF0();
    void sub_45A020();
    void sub_5487110();
    void sub_5487130();
    void sub_5487170();
    void sub_5487180();
    void sub_54AA290();
    void sub_54F9750();
    void sub_55AEAD0();
    void sub_55AEAF0();
    void sub_55AEB20();
    void sub_563D540();
    void sub_5712130();
    void* FindInPointerArray(void* ptr);  // 0x45a610

    // Gap generator
    static bool isGeneratingGap;
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
};

// External globals
extern RulesClass* RulesClass_Instance;
extern bool IKnowWhatImDoing;
extern bool MCVRedeploy;

} // namespace gamemd
