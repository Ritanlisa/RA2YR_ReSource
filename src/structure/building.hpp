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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }

    virtual ~BuildingClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(BuildingClass); }

    // Construction / destruction lifecycle
    void Construct();
    void Dtor();
    int ScalarDtor() override;
    int Activate() override;
    int Deactivate() override;
    virtual void Destroyed(ObjectClass* killer) override;
    void AfterDestruction();
    void Cleanup();

    // Stream/placement
    void LoadFromStream(void* stream);
    int Size();
    void Place(bool bUnk);
    virtual void onBuildingPlacement(uint32_t dwUnk, uint32_t dwUnk2) override {}

    // Foundation / cell
    virtual CellStruct* getFoundationCell(CellStruct* pCellStruct, uint32_t dwUnk, uint32_t dwUnk2) const { return nullptr; }
    virtual int canPlaceHere(ObjectClass* pObj) const { return 0; }
    bool IsCellPlaceable(int cell_x, int cell_y) const;
    bool ValidatePlacement();
    bool ValidateFoundation();
    bool ValidateFoundation_0();
    bool Validate();
    bool ValidateCell(int cell_x, int cell_y);
    bool ValidatePlacementEx();
    void FindPlacementCells();
    void FindPlacementCells2();
    void SearchPlacement();
    void VisualizePlacement();
    CoordStruct* GetPlacementCoords(CoordStruct* out) const;
    RectangleStruct* GetPlacementRect(RectangleStruct* out) const;
    bool CheckOverlapWithOthers();
    bool IsFootprintBlocked();
    void DamageFactoryBibCells();
    void ClearFactoryBib();
    void RepairPlacement();
    bool CheckBuildability();
    bool CheckCellPassability();
    void OnCellPlacementComplete();

    // Exit coordinates
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const override;
    CoordStruct* GetAdjustedExitCoords(CoordStruct* out) const;
    CoordStruct* GetFactoryPosition(CoordStruct* out) const;
    CoordStruct* CalcExitCoords(CoordStruct* out, int dir) const;
    CoordStruct* GetRallyPointCoord(CoordStruct* out) const;
    CoordStruct* GetBuildCoordsAdjusted(CoordStruct* out) const;
    void SetRallyPoint(CoordStruct* target);
    void MarkExitPath();
    bool CheckExitPath();
    void RenderExitPosition();
    void ReassignFlagPosition();
    virtual bool TogglePrimaryFactory();
    bool IsFactorySelectable();

    // Construction update (vtable[8])
    virtual void UpdateConstructionOptions() {}
    int Mission_Construction() override;
    int UpdateConstruction();

    // Production
    int StartProduction(int type_index);
    void UpdateProduction();
    void CompleteProduction();
    void ProductionDisplayUpdate();
    void DisplayProductionFrame();
    bool ProductionCheck();
    void AbandonProduction();
    bool CanAcceptType(int type_index);
    void AddToProductionQueue(int type_index);
    void SetProduction(int type_index);
    virtual void onProductionComplete(uint32_t dwUnk, uint32_t dwUnk2) {}
    int GetProductionFrame() const;

    // Selling
    virtual int Mission_Selling() override;
    int Sell();
    void CompleteSell();
    void ProcessSell();
    bool CanBeSold();
    bool CanBeSoldCheck();
    void ToggleSellMode();
    int GetSellPriority();
    void SellEffects();
    void SellUnit();
    void HandleSellOrRepair();

    // Repair
    virtual int Mission_Repair() override;
    void ProcessRepair();
    bool CanRepair();
    void ToggleRepairMode();
    bool CheckHealthForRepair();
    bool IsBeingRepairedOrCaptured();

    // Missile / Super weapons
    virtual int Mission_Missile() override;
    virtual void processSuperWeapon(uint32_t dwUnk, uint32_t dwUnk2, uint32_t dwUnk3, uint32_t dwUnk4) {}
    void ProcessSuperWeaponEffects();
    bool SWAvailable();
    bool SW2Available();
    static BuildingClass* FindBySWType(int sw_type);
    void ClearSuperWeaponAnim();
    void UpdatePrism();
    void Disappear_PrismForward();

    // Mission system
    int MissionController();
    int ProcessMission();
    int Mission_Guard();
    int Mission_Attack();
    int Mission_Move();
    int Mission_Enter();
    int Mission_Capture();
    int Mission_Harvest();
    int Mission_Deploy();
    bool CheckMissionGuard();
    bool CheckMissionAttack();

    // Power system
    void PowerDrainUpdate();
    int GetPowerOutput();
    int GetPowerDrain();
    void PowerUpdate();
    int UpdatePowerDrain() override;
    bool IsPoweredOn();
    bool IsPoweredActive();
    bool CheckPowerFlags();
    bool CheckFlag24();
    void PowerOff();
    void TogglePower();
    void TogglePower2();
    void EnableTogglePower();
    void EnableStuff();
    void ProcessPowerPlantEffect();
    void ProcessActiveUpdate();
    void UpdatePowerAnimation();
    void UpdatePowerAnim();
    int GetPowerFrame();

    // Capture / Occupancy / Infiltration
    int ProcessCapture() override;
    void CaptureBuilding();
    void Capture();
    void DisableTemporal();
    void Infiltrate();
    void ProcessStructureAbandoned();
    void ProcessEnterUnit();
    void ProcessOccupancy();
    bool IsIdleWithNoCaptives();
    int GetCrew();
    int GetCrewCount();
    void EjectCrew();
    void CleanupOccupation();
    void AddOccupancy();
    void ClearOccupancyData();
    void RebuildOccupancyTracking();
    void RebuildOccupancyTracking2();
    void RebuildOccupancy2();
    void InitBuildLimit();
    void RefreshOccupierCache();
    void ClearFactoryData();
    void FreeUpgradeQueue();
    void FreeUpgradeQueue2();
    bool CheckOccupantState();

    // Combat / Targeting
    void ProcessAttack();
    void AimTurret();
    void CalculateTurretAngle();
    int GetFacingToTarget();
    int GetTargetFacing();
    void FireLaser();
    int GetAmmoCountScaled();
    int GetFireError();
    void AcquireTarget();
    int SelectTargetTypeFlags();
    int DistanceToTarget();
    void CalcBarrelFlashPosition();
    void BuildTurretTransform();

    // Bridge / Demolish
    bool DemolishBridgeCheck();
    void FindBridgeSegment();
    void DemolishBridge();
    void DemolishBridgeAnim();
    void TraverseBridgeSegments();
    void FindBridgeCell();
    bool CheckBridge();
    void DestroyOnBridgeCollapse();
    CoordStruct* GetBridgeAwareCoords(CoordStruct* out) const;

    // Deploy / Undeploy
    int Deploy() override;
    bool Is1x1AndUndeployable_BuildingMassSelectable();
    void UpdateMovingPosition();
    void UpdateFloatPosition();
    void AdjustHeight();

    // Animation
    void PlayAnim(int anim_index, int anim_type, int frame_count);
    void StopAnim(int anim_index);
    void ClearAnims();
    void ProcessActiveAnimation();
    void UpdateAnimFrames();
    void ProcessAnimationStates();
    void UpdateIdleAnims();
    void UpdateAnimationSlots();
    void ProcessDamageAnim();
    void UpdateDamageAnim();
    void CreateIdleAnim();
    void PlayUpgradeAnim();
    void SyncCrateVisuals();
    void MarkUpgradeComponentUsed();
    void AnimController();

    // Cloak / Visibility / Fog
    void UpdateCloak();
    int IronCurtain() override;
    bool IsInvisible();
    void AnnounceReady();
    void UpdateRevealField();
    void UpdateGapGeneratorField();
    void UpdateDetectionField();
    bool IsCellVisibleToPlayer(int cell_x, int cell_y);
    void CreateFoggedObjects();
    void RevealShroud(int radius);
    void RemoveShroud();
    void ProcessFogCellOccupancy();
    void RemoveGapCellCoverage();
    void SensorArrayActivate(CellStruct cell) {}
    void SensorArrayDeactivate(CellStruct cell) {}
    void DisguiseDetectorActivate(CellStruct cell) {}
    void DisguiseDetectorDeactivate(CellStruct cell) {}

    // Update
    void Update();
    void OnObjectExpired(ObjectClass* obj);
    void UpdateTimerWithElapsed();
    bool HasActiveParam();
    void CheckSpecialUpdateFlags();

    // Rendering
    Point2D* CalcDrawPos(Point2D* out) const;
    Point2D CalcDrawPos() const { Point2D buf; CalcDrawPos(&buf); return buf; }
    void Draw(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawVisible(Point2D* screen_pos, RectangleStruct* bounds) const;
    void Draw_0(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawFactoryProduction(Point2D* screen_pos, RectangleStruct* bounds, int frame) const;
    void DrawSelectionBox(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawSelectionBlip(Point2D* screen_pos) const;
    void DrawActionLines(Point2D* screen_pos, RectangleStruct* bounds) const;
    void DrawDeployCircle(Point2D* screen_pos) const;
    void DrawFoundationChar(int cell_x, int cell_y, wchar_t ch) const;
    void DrawFoundationChar2(int cell_x, int cell_y, wchar_t ch) const;
    void DrawHealthBar(Point2D* screen_pos, RectangleStruct* bounds) const;
    int GetDrawColor() const;
    int GetSHPFrame() const;
    int DetermineVisualState() const;
    void AddRectToDrawList(RectangleStruct* rect) const;
    int GetZDrawOffset() const;
    int GetBoundingSizeExt() const;
    virtual ra2::game::LightConvertClass* GetRemapColour() const override { return nullptr; }

    // Health / Stats
    double GetHealthRatio() const;
    bool IsHealthLow();

    // Misc
    int SquaredDistanceTo(CoordStruct* target) const;
    void SaveLoad_Register();
    void CopyTypeDataForRender();
    BuildingTypeClass* GetType();
    void SetType(BuildingTypeClass* type);
    BuildingTypeClass* GetTypePtr();
    BuildingTypeClass* GetType_Thunk();
    HouseClass* GetOwnerHouse();
    int GetTypeEntry();
    int GetTypeField60();
    int GetObjectData();
    int GetFWFlags();
    void FlushScriptActions();
    static BuildingClass* FindByCellHash(uint32_t hash);
    void LoadBuildingTypes();
    void ReadBuildingSettings();
    void ReadConstructionData();
    bool HasOccupantAudio();
    int SelectVocOrSfx();
    void UnloadUnits();
    void AnimateUnloadUnits();
    void SpawnParticles();
    void ApplyFoundationDamage();
    int AssignTarget_SyncLog() override { return 0; }
    void AssignDestination_SyncLog();
    void DecrementTypeCounter();
    void IncrementOccupantTypeCounter();
    bool IsMassSelectable();
    void AddUpgrade(BuildingTypeClass* upgrade);
    void ProcessUpgradeEffects();
    void ExecuteTriggers();
    void ProcessUpgradeTargeting();
    void ProcessSpreadEffect();
    void Unlimbo_UnitDeliveryFix();
    void SetConnectedBuildingMission();
    void CreateDestructionCrater();
    void CreatePlacementCrater();
    void CreateCraterAtCell(int cell_x, int cell_y);
    void BeginCrumblingTimer();
    void MarkCellOccupied(int cell_x, int cell_y);
    void ClearCellOccupied(int cell_x, int cell_y);
    void ScanCircleForTiberium();
    void UpdateTerrainEffect();
    bool IsTiberiumCollectorEligible();
    bool IsTiberiumSiloEligible();
    void UpdateBunker();
    void EmptyBunker();
    void MakeTraversable();
    void RemoveLimpet();
    void ClearLimpetCheck();
    bool CheckC4Active();
    void SetField95(int value);
    void SetField8(int value);
    int GetCursorAction();
    void UpdateThreatBounds();
    bool ValidatePath();
    void SetSlot(int slot);
    uint32_t GetField184() const;
    void HandleClickEvent();
    void HandleRepairCursor();
    static BuildingClass* Create(BuildingTypeClass* type, CoordStruct* pos, HouseClass* owner);
    static BuildingClass* AllocAndCtor();

    // Trivial stubs (vt_entry_*)
    bool vt_entry_4E4();
    bool vt_entry_4D4();
    bool vt_entry_4D8();
    bool vt_entry_504();
    bool StubReturnFalse();
    bool StubReturnFalse3();
    bool StubReturnFalse4();
    bool StubReturnFalse10();
    bool StubReturnFalse11();
    bool StubReturnFalse12();
    bool StubReturnFalse13();
    bool StubReturnFalse14();
    int MissionStubReturnZero();
    int MissionStubReturnZero2();
    int MissionStubReturnZero3();
    int MissionStubReturnZero5();
    int MissionStubReturnZero6();

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
    void* FindInPointerArray(void* ptr);

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
