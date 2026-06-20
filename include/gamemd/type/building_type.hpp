#pragma once

#include "techno_type.hpp"
#include "core/enums.hpp"

namespace gamemd
{

class OverlayTypeClass;

struct BuildingAnimStruct
{
    char Anim[0x10];
    char Damaged[0x10];
    char Garrisoned[0x10];
    Point2D Position;
    int ZAdjust;
    int YSort;
    bool Powered;
    bool PoweredLight;
    bool PoweredEffect;
    bool PoweredSpecial;
};

struct BuildingAnimFrameStruct
{
    DWORD dwUnknown;
    int FrameCount;
    int FrameDuration;
};

class BuildingTypeClass : public TechnoTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::BuildingType;

    static DynamicVectorClass<BuildingTypeClass*>* Array;
    static BuildingTypeClass* Find(const char* pID); // IDA: NOT_FOUND
    static BuildingTypeClass* FindOrAllocate(const char* pID);  // 0x4653C0 (as FindOrCreate)
    static int FindIndex(const char* pID);  // 0x747370

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override; // 0x465380 (as GetClassIdentifier)

    virtual ~BuildingTypeClass() = default;  // 0x465DC0 (as ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x465D90 (as GetTypeIdentifier)
    virtual int objectSize() const override; // 0x465DA0 (as GetObjectSize)

    virtual bool SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) override; // IDA: NOT_FOUND
    virtual ObjectClass* CreateObject(HouseClass* pOwner) override;  // 0x4737F0

    virtual SHPStruct* LoadBuildup(); // IDA: NOT_FOUND

    bool IsVehicle() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    short GetFoundationWidth() const;  // 0x45EC90
    short GetFoundationHeight(bool bIncludeBib) const;  // 0x45ECA0
    bool CanPlaceHere(CellStruct* cell, HouseClass* owner) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool HasSuperWeapon(int index) const; // IDA: NOT_FOUND
    bool HasSuperWeapon() const; // IDA: NOT_FOUND
    bool CanTogglePower() const;  // 0x508DF0

    BuildingAnimStruct& GetBuildingAnim(BuildingAnimSlot slot); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    const BuildingAnimStruct& GetBuildingAnim(BuildingAnimSlot slot) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    BuildingTypeClass(const char* pID) noexcept;  // 0x644BE0 (as Construct)

protected:
    BuildingTypeClass(noinit_t) noexcept;

public:
    int ArrayIndex;
    CellStruct* FoundationData;
    SHPStruct* Buildup;
    bool BuildupLoaded;
    BuildCat BuildCat;
    CoordStruct HalfDamageSmokeLocation1;
    CoordStruct HalfDamageSmokeLocation2;
    DWORD align_E24;
    double GateCloseDelay;
    int LightVisibility;
    int LightIntensity;
    int LightRedTint;
    int LightGreenTint;
    int LightBlueTint;
    Point2D PrimaryFirePixelOffset;
    Point2D SecondaryFirePixelOffset;
    OverlayTypeClass* ToOverlay;
    int ToTile;
    char BuildupFile[0x10];
    int BuildupSound;
    int PackupSound;
    int CreateUnitSound;
    int UnitEnterSound;
    int UnitExitSound;
    int WorkingSound;
    int NotWorkingSound;
    char PowersUpBuilding[0x18];
    UnitTypeClass* FreeUnit;
    InfantryTypeClass* SecretInfantry;
    UnitTypeClass* SecretUnit;
    BuildingTypeClass* SecretBuilding;
    int BuildingTypeClass_field_EB0;
    int Adjacent;
    AbstractType Factory;
    CoordStruct TargetCoordOffset;
    CoordStruct ExitCoord;
    CellStruct* FoundationOutside;
    int BuildingTypeClass_field_ED8;
    int DeployFacing;
    int PowerBonus;
    int PowerDrain;
    int ExtraPowerBonus;
    int ExtraPowerDrain;
    int Foundation;
    int Height;
    int OccupyHeight;
    int MidPoint;
    int DoorStages;
    BuildingAnimFrameStruct BuildingAnimFrame[6];
    BuildingAnimStruct BuildingAnim[0x15];
    int Upgrades;
    SHPStruct* DeployingAnim;
    bool DeployingAnimLoaded;
    SHPStruct* UnderDoorAnim;
    bool UnderDoorAnimLoaded;
    SHPStruct* Rubble;
    bool RubbleLoaded;
    SHPStruct* RoofDeployingAnim;
    bool RoofDeployingAnimLoaded;
    SHPStruct* UnderRoofDoorAnim;
    bool UnderRoofDoorAnimLoaded;
    SHPStruct* DoorAnim;
    SHPStruct* SpecialZOverlay;
    int SpecialZOverlayZAdjust;
    SHPStruct* BibShape;
    bool BibShapeLoaded;
    int NormalZAdjust;
    int AntiAirValue;
    int AntiArmorValue;
    int AntiInfantryValue;
    Point2D ZShapePointMove;
    int BuildingTypeClass_field_1538;
    int BuildingTypeClass_field_153C;
    int BuildingTypeClass_field_1540;
    int BuildingTypeClass_field_1544;
    WORD ExtraLight;
    bool TogglePower;
    bool HasSpotlight;
    bool IsTemple;
    bool IsPlug;
    bool HoverPad;
    bool BaseNormal;
    bool EligibileForAllyBuilding;
    bool EligibleForDelayKill;
    bool NeedsEngineer;
    int CaptureEvaEvent;
    int ProduceCashStartup;
    int ProduceCashAmount;
    int ProduceCashDelay;
    int InfantryGainSelfHeal;
    int UnitsGainSelfHeal;
    int RefinerySmokeFrames;
    bool Bib;
    bool Wall;
    bool Capturable;
    bool Powered;
    bool PoweredSpecial;
    bool Overpowerable;
    bool Spyable;
    bool CanC4;
    bool WantsExtraSpace;
    bool Unsellable;
    bool ClickRepairable;
    bool CanBeOccupied;
    bool CanOccupyFire;
    int MaxNumberOccupants;
    bool ShowOccupantPips;
    Point2D MuzzleFlash[0xA];
    Point2D DamageFireOffset[8];
    Point2D QueueingCell;
    int NumberImpassableRows;
    Point2D RemoveOccupy[8];
    Point2D AddOccupy[8];
    bool Radar;
    bool SpySat;
    bool ChargeAnim;
    bool IsAnimDelayedFire;
    bool SiloDamage;
    bool UnitRepair;
    bool UnitReload;
    bool Bunker;
    bool Cloning;
    bool Grinding;
    bool UnitAbsorb;
    bool InfantryAbsorb;
    bool SecretLab;
    bool DoubleThick;
    bool Flat;
    bool DockUnload;
    bool Recoilless;
    bool HasStupidGuardMode;
    bool BridgeRepairHut;
    bool Gate;
    bool SAM;
    bool ConstructionYard;
    bool NukeSilo;
    bool Refinery;
    bool Weeder;
    bool WeaponsFactory;
    bool LaserFencePost;
    bool LaserFence;
    bool FirestormWall;
    bool Hospital;
    bool Armory;
    bool EMPulseCannon;
    bool TickTank;
    bool TurretAnimIsVoxel;
    bool BarrelAnimIsVoxel;
    bool CloakGenerator;
    bool SensorArray;
    bool ICBMLauncher;
    bool Artillary;
    bool Helipad;
    bool OrePurifier;
    bool FactoryPlant;
    float InfantryCostBonus;
    float UnitsCostBonus;
    float AircraftCostBonus;
    float BuildingsCostBonus;
    float DefensesCostBonus;
    bool GDIBarracks;
    bool NODBarracks;
    bool YuriBarracks;
    float ChargedAnimTime;
    int DelayedFireDelay;
    int SuperWeapon;
    int SuperWeapon2;
    int GateStages;
    int PowersUpToLevel;
    bool DamagedDoor;
    bool InvisibleInGame;
    bool TerrainPalette;
    bool PlaceAnywhere;
    bool ExtraDamageStage;
    bool AIBuildThis;
    bool IsBaseDefense;
    uint8_t CloakRadiusInCells;
    bool ConcentricRadialIndicator;
    int PsychicDetectionRadius;
    int BarrelStartPitch;
    char VoxelBarrelFile[0x1C];
    CoordStruct VoxelBarrelOffsetToPitchPivotPoint;
    CoordStruct VoxelBarrelOffsetToRotatePivotPoint;
    CoordStruct VoxelBarrelOffsetToBuildingPivotPoint;
    CoordStruct VoxelBarrelOffsetToBarrelEnd;
    bool DemandLoad;
    bool DemandLoadBuildup;
    bool FreeBuildup;
    bool IsThreatRatingNode;
    bool PrimaryFireDualOffset;
    bool ProtectWithWall;
    bool CanHideThings;
    bool CrateBeneath;
    bool LeaveRubble;
    bool CrateBeneathIsMoney;
    char TheaterSpecificID[0x13];
    int NumberOfDocks;
    DynamicVectorClass<CoordStruct>* DockingOffsets;

    int     ProductionCompletionThreshold;
    double  CostRatePerFrame;
    int     BuildingTypeClass_field_688;
    int     InitialProductionProgress;
    int     BuildingTypeClass_field_696;
    int     ProductionStepsTarget;
    int     ProductionSizeOverride;
    uint8_t PipelineStepCount;
    uint8_t _pad_prod_71[3];
    TechnoTypeClass* NextTypeInChain;
    int     BuildingTypeClass_field_716;
    int     BuildingTypeClass_field_720;
    int     BuildingTypeClass_field_732;
    int     BuildingTypeClass_field_736;
    int     BuildingTypeClass_field_740;
    int     BuildingTypeClass_field_744;

    bool IsPowerPlant; // 0x4509d0 area
    int  PowerOutput;   // 0x4509d0 area
    int  CrewCount;     // 0x4509d0 area
    bool CrateGoodies;  // 0x451F60 area
    int  TargetFlags;   // 0x452360 area
    int  InstanceCount; // 0x452540 area
    int  TriggerTag;    // 0x452dc0 area
    int  BuildingTypeClass_field_60; // 0x60

    int  GetArrayIndex() const { return ArrayIndex; } // IDA: NOT_FOUND
    bool IsCellClearOfTerrainObstacles(const CellStruct& cell) const; // IDA: NOT_FOUND

    DWORD align_1794;
};

} // namespace gamemd
