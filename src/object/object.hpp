#pragma once

#include "abstract.hpp"

namespace ra2 {
namespace game {

class AnimClass;
class BombClass;
class BuildingClass;
class CellClass;
class LightConvertClass;
class LineTrail;
class ObjectTypeClass;
struct SHPStruct;
class TagClass;
class TechnoTypeClass;
class WarheadTypeClass;

enum class Action : unsigned int;
enum class VisualType : unsigned int;
enum class Layer : int;
enum class DamageState : int;
enum class Mission : int;
enum class HealthState : int;
enum class KickOutResult : int;
enum class Move : int;
enum class RadioCommand : int;

// IDA: sizeof=0x14 (confirmed via ObjectClass ctor gap 0x3C->0x50)
class AudioController {
public:
    uint32_t AudioController_field_00;   // +0x00, init 0
    uint32_t AudioController_field_04;   // +0x04, init 0
    uint32_t AudioController_field_08;   // +0x08, init 0
    uint32_t AudioController_field_0C;   // +0x0C, init &dword_87E294
    uint32_t AudioController_field_10;   // +0x10, not initialized by Init

    void Stop();
    void Start(int32_t soundIndex);
    void Pause();
    void Resume();
    static bool IsSoundEnabled();
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x402040
    int AdvanceQueue();  // 0x4022C0
    int UpdatePlayback();  // 0x402330
    int CleanupStream();  // 0x4023F0
    int Init();  // 0x405BE0
    int GetOffset();  // 0x408520
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int LoadThemeBank(int a1, int a2, int a3, int a4, int a5);  // 0x409de0
    void GetVolume();  // 0x72d170
    // === FUNCS-MOVE (END) ===
};

// ============================================================================
// ObjectClass — root of all game object instances
//
// IDA: Primary vtable @ 0x7EF060 (contiguous with AbstractClass @ 0x7E1F50)
//      Secondary vtables: 0x7EF044, 0x7EF03C, 0x7EF034
//      Constructor: ObjectClass::ctor @ 0x5F3900  Dtor: 0x5F3B80
//      sizeof: 0xAC (confirmed via ctor init chain)
// ============================================================================
class ObjectClass : public AbstractClass {
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x2);

    // === IPersistStream override (re-declared pure virtual) ===
    // [5] 0x5F5E80 ObjectClass vtable stub for Load
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override = 0;

    // === Destructor ===
    // [8] 0x5F6DC0 ObjectClass::CreateInstance (dtor thunk)
    virtual ~ObjectClass() = default;  // 0x5F3B80

    // ========================================================================
    // ObjectClass virtuals (vtable[0] entries [24]-[121])
    // =0 methods have no function body; address = vtable slot target function
    // ========================================================================

    // [24] 0x5F6DA0 ObjectClass::ResetPointerIfMatch
    // design: pure virtual function, no binary implementation
    virtual void AnimpointerExpired(AnimClass* anim) = 0;
    // [25] 0x426390 AbstractClass::COMStub_Return0_25 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsSelectable() const = 0;
    // [26] 0x4263A0 AbstractClass::COMStub_26
    // stub: not yet implemented from IDA
    virtual VisualType VisualCharacter(int specific_owner, HouseClass* who_is_asking) const = 0;
    // [27] 0x5F3E30 ObjectClass::HasC4
    // stub: not yet implemented from IDA
    virtual SHPStruct* GetImage() const = 0;
    // [28] 0x5F4250 AbstractClass::COMStub_28
    // design: virtual function, no binary implementation matched in IDA
    virtual Action MouseOverCell(const CellStruct& cell, bool check_fog = false, bool ignore_force = false) const = 0;
    // [29] 0x5F4240 AbstractClass::COMStub_29
    // design: virtual function, no binary implementation matched in IDA
    virtual Action MouseOverObject(const ObjectClass* object, bool ignore_force = false) const = 0;
    // [30] 0x5F4260 ObjectClass::GetThreatLevel
    virtual Layer InWhichLayer() const = 0;  // 0x424CB0
    // [31] 0x5F6C10 ObjectClass::IsAboveScreenMargin (YRpp: IsSurfaced)
    // wrapper: delegates to AnimClass::InWhichLayer_AttachedObjectLayer at 0x424CB0
    virtual bool IsSurfaced();
    // [32] 0x4263B0 AbstractClass::COMStub_Return0_32 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsStrange() const;
    // [33] 0x5F6BC0 AbstractClass::COMStub_Return0_33
    virtual TechnoTypeClass* GetTechnoType() const = 0;
    // [34] 0x4E0130 AbstractClass::COMStub_Return0_34
    // stub: not yet implemented from IDA
    virtual ObjectTypeClass* GetType() const = 0;
    // [35] 0x5F42A0 AbstractClass::COMStub_Ret2147483647_35
    // wrapper: delegates to INIEntry::GetTechnoType at 0x476EB0
    virtual uint32_t GetTypeOwners() const = 0;
    // [36] 0x4263C0 AbstractClass::COMStub_Ret8487648_36
    virtual const wchar_t* GetUIName() const = 0;  // 0x484FF0
    // [37] 0x5F42B0 AbstractClass::COMStub_Return0_37 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool CanBeRepaired() const;
    // [38] 0x5F42C0 AbstractClass::COMStub_Return0_38 (return false stub)
    virtual bool CanBeSold() const;
    // [39] 0x5F42D0 AbstractClass::COMStub_Return0_39 (return false stub)
    virtual bool IsActive() const;  // 0x5F6690
    // [40] 0x5F42E0 AbstractClass::COMStub_Return0_40 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsControllable() const;

    // --- Coordinate accessors ---
    // [41] 0x41BDD0 ObjectClass::GetCoordsThunk1
    // stub: not yet implemented from IDA
    virtual CoordStruct* GetPosition_0(CoordStruct* out) const = 0;
    // [42] 0x5F6C80 ObjectClass::GetCoords_Alt
    // design: virtual function, no binary implementation matched in IDA
    virtual CoordStruct* GetDockCoords(CoordStruct* out, TechnoClass* docker) const = 0;
    // [43] 0x41BE00 ObjectClass::GetCoordsThunk2 (YRpp: GetRenderCoords)
    // design: virtual function, no binary implementation matched in IDA
    virtual CoordStruct* GetPosition_2(CoordStruct* out) const = 0;
    // [44] 0x4263D0 ObjectClass::GetDrawPosition
    // design: virtual function, no binary implementation matched in IDA
    virtual CoordStruct* GetFLH(CoordStruct* dest, int weapon_idx, CoordStruct base_coords) const = 0;
    // [45] 0x41BE30 ObjectClass::GetCoordsThunk3
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const = 0;  // 0x447AC0
    // [46] 0x5F6BD0 ObjectClass::GetBoundingSize (YRpp: GetYSort)
    // wrapper: delegates to BuildingClass::GetExitCoords at 0x447AC0
    virtual int GetYSort() const = 0;
    // [47] 0x5F6A70 ObjectClass::CheckGroundHeightDiff
    // wrapper: delegates to BuildingClass::GetExitCoords at 0x447AC0
    virtual bool IsOnBridge(TechnoClass* docker = nullptr) const = 0;
    // [48] 0x426410 AbstractClass::getCoordCenter (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsStandingStill() const = 0;
    // [49] 0x426420 AbstractClass::COMStub_Return0_49 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsDisguised() const = 0;
    // [50] 0x426430 AbstractClass::COMStub_50
    // stub: not yet implemented from IDA
    virtual bool IsDisguisedAs(HouseClass* target) const = 0;
    // [51] 0x41BE60 AircraftClass::LandingCheckStub
    // stub: not yet implemented from IDA
    virtual ObjectTypeClass* GetDisguise(bool disguised_against_allies) const = 0;
    // [52] 0x41BE70 AircraftClass::StubReturnFalse2
    // design: virtual function, no binary implementation matched in IDA
    virtual HouseClass* GetDisguiseHouse(bool disguised_against_allies) const = 0;

    // --- Lifecycle ---
    // [53] 0x5F4D30 ObjectClass::Undeploy (Limbo)
    virtual bool Remove();  // 0x5F44A0
    // [54] 0x5F4EC0 ObjectClass::Deploy (Unlimbo)
    // wrapper: delegates to ObjectClass::Remove at 0x5F44A0
    virtual bool Put(const CoordStruct& coords, unsigned int face_dir);
    // [55] 0x5F5280 ObjectClass::Destroy2 (Disappear)
    virtual void Disappear(bool permanently) = 0;  // 0x44EBF0
    // [56] 0x5F42F0 AbstractClass::COMStub_Return0_56
    // design: pure virtual function, no binary implementation
    virtual void RegisterDestruction(TechnoClass* destroyer) = 0;
    // [57] 0x5F4300 AbstractClass::COMStub_Return0_57
    // design: pure virtual function, no binary implementation
    virtual void RegisterKill(HouseClass* destroyer) = 0;
    // [58] 0x5F5940 ObjectClass::ParachuteDrop
    // design: pure virtual function, no binary implementation
    virtual bool SpawnParachuted(const CoordStruct& coords) = 0;
    // [59] 0x5F4160 ObjectClass::DropAsBomb_Track
    virtual void DropAsBomb() = 0;  // 0x5F4160
    // [60] 0x5F60A0 MapClass::SetCellOverlayFlag
    // design: pure virtual function, no binary implementation
    virtual void MarkAllOccupationBits(const CoordStruct& coords) = 0;
    // [61] 0x5F6120 MapClass::ClearCellOverlayFlag
    // design: pure virtual function, no binary implementation
    virtual void UnmarkAllOccupationBits(const CoordStruct& coords) = 0;
    // [62] 0x5F65F0 ObjectClass::Destroy (YRpp: UnInit)
    // design: pure virtual function, no binary implementation
    virtual void UnInit() = 0;

    // --- Visibility / Discovery ---
    // [63] 0x5F4310 AbstractClass::COMStub_Return0_63 (stub retn)
    virtual void Reveal();
    // [64] 0x5F4320 AbstractClass::COMStub_64
    // design: pure virtual function, no binary implementation
    virtual KickOutResult KickOutUnit(TechnoClass* techno, CellStruct cell) = 0;
    // [65] 0x5F4B10 ObjectClass::CalcDrawRect
    // stub: not yet implemented from IDA
    virtual bool DrawIfVisible(RectangleStruct* bounds, bool even_if_cloaked, uint32_t unknown) const = 0;
    // [66] 0x5F5B90 ObjectClass::GetOrCreateResHandle
    // design: virtual function, no binary implementation matched in IDA
    virtual const CellStruct* GetFoundationData(bool include_bib = false) const = 0;

    // --- Drawing ---
    // [67] 0x426440 AbstractClass::COMStub_Return0_67
    // design: virtual function, no binary implementation matched in IDA
    virtual void DrawBehind(Point2D* location, RectangleStruct* bounds) const;
    // [68] 0x426450 AbstractClass::COMStub_Return0_68
    // design: virtual function, no binary implementation matched in IDA
    virtual void DrawExtras(Point2D* location, RectangleStruct* bounds) const;
    // [69] 0x5B3A50 IPersistStream::StubReturnFalse
    // design: virtual function, no binary implementation matched in IDA
    virtual void Draw(Point2D* location, RectangleStruct* bounds) const;
    // [70] 0x5F65D0 ObjectClass::DelegateVt69
    // design: virtual function, no binary implementation matched in IDA
    virtual void DrawAgain(Point2D* location, RectangleStruct* bounds) const;
    // [71] 0x5F4330 AbstractClass::COMStub_Return0_71 (stub retn)
    // design: pure virtual function, no binary implementation
    virtual void Undiscover() = 0;
    // [72] 0x5F4340 AbstractClass::COMStub_Return0_72
    virtual void See(uint32_t unknown1, uint32_t unknown2) = 0;  // 0x4E0240

    // --- Placement / Bounds ---
    // [73] 0x5F5850 ObjectClass::UpdateProductionDisplay (UpdatePlacement)
    // design: pure virtual function, no binary implementation
    virtual bool UpdatePlacement(int placement_type) = 0;
    // [74] 0x5F4730 ObjectClass::GetPlacementScreenRect
    virtual RectangleStruct* getBoundsRect(RectangleStruct* out) const = 0;  // 0x5F4870
    // [75] 0x5F4870 ObjectClass::GetBoundsRect
    // design: pure virtual function, no binary implementation
    virtual RectangleStruct* getBoundsRectMut(RectangleStruct* out) = 0;
    // [76] 0x41BE80 AircraftClass::CheckStateFlag
    // design: pure virtual function, no binary implementation
    virtual void DrawRadialIndicator(uint32_t unknown) = 0;
    // [77] 0x5F4D10 ObjectClass::MarkForRedraw
    virtual void MarkForRedraw();  // 0x5F4D10

    // --- Selection ---
    // [78] 0x5F6C30 ObjectClass::IsPlayerOwnedAndCheck
    // wrapper: delegates to ObjectClass::MarkForRedraw at 0x5F4D10
    virtual bool CanBeSelected() const;
    // [79] 0x5F6C70 AbstractClass::COMStub_79
    // design: virtual function, no binary implementation matched in IDA
    virtual bool CanBeSelectedNow() const;
    // [80] 0x5F4360 AbstractClass::COMStub_80
    virtual bool spawnInfantry(uint32_t a, uint32_t b, uint32_t c, uint32_t d) = 0;  // 0x4D7D50
    // [81] 0x5F4350 AbstractClass::COMStub_81
    // design: pure virtual function, no binary implementation
    virtual bool ClickedAction(Action action, ObjectClass* target, bool unknown) = 0;

    // --- Visual effects ---
    // [82] 0x5F4370 AbstractClass::COMStub_Return0_82
    // design: virtual function, no binary implementation matched in IDA
    virtual void Flash(int duration);
    // [83] 0x5F4520 ObjectClass::HandleSelection
    virtual bool Select();
    // [84] 0x5F44A0 ObjectClass::Remove (Deselect)
    virtual void Deselect();

    // --- Combat / Armor ---
    // [85] 0x426460 AbstractClass::COMStub_Return0_85
    // wrapper: delegates to SidebarClass::deselect at 0x6AB9E0
    virtual DamageState IronCurtain(int duration, HouseClass* source, bool force_shield);
    // [86] 0x426470 AbstractClass::COMStub_Return0_86 (stub retn)
    // design: pure virtual function, no binary implementation
    virtual void StopAirstrikeTimer() = 0;
    // [87] 0x426480 AbstractClass::COMStub_Return0_87
    // design: pure virtual function, no binary implementation
    virtual void StartAirstrikeTimer(int duration) = 0;
    // [88] 0x426490 AbstractClass::COMStub_Return0_88 (return false stub)
    // stub: not yet implemented from IDA
    virtual bool IsIronCurtained() const;
    // [89] 0x5F4380 AbstractClass::COMStub_89
    // stub: not yet implemented from IDA
    virtual bool IsCloseEnough3D(uint32_t a, uint32_t b) const = 0;
    // [90] 0x5F4390 AbstractClass::COMStub_90
    virtual int GetWeaponRange(int weapon_idx) const;
    // [91] 0x5F5390 TechnoClass::CreateDestructionEffect
    virtual DamageState ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
        ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house);
    // [92] 0x4264A0 AbstractClass::COMStub_Return0_92 (stub retn)
    virtual void Destroy();  // 0x5F65F0
    // [93] 0x5F43A0 AbstractClass::COMStub_Return0_93
    virtual void Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination);
    // [94] 0x5F43B0 AircraftClass::StubReturnFalse3
    // stub: not yet implemented from IDA
    virtual bool Ignite();
    // [95] 0x5F43C0 AircraftClass::StubReturnTrue
    // wrapper: delegates to UnitClass::Scatter at 0x743A50
    virtual void Extinguish();
    // [96] 0x5F43D0 AbstractClass::COMStub_Return0_96
    // design: virtual function, no binary implementation matched in IDA
    virtual uint32_t GetPointsValue() const;

    // --- Mission / Command ---
    // [97] 0x5F43E0 AbstractClass::processStateUpdate
    virtual Mission GetCurrentMission() const = 0;  // 0x4E0140
    // [98] 0x41BE90 AircraftClass::CheckStateFlag2
    // wrapper: delegates to AbstractClass::getCurrentMission at 0x4E0140
    virtual void RestoreMission(Mission mission);
    // [99] 0x4264B0 AbstractClass::COMStub_Return0_99
    virtual void UpdatePosition(int unknown) = 0;  // 0x7BA360
    // [100] 0x5F5C20 ObjectClass::Fire
    // wrapper: delegates to WWMouseClass::updatePosition at 0x7BA360
    virtual BuildingClass* FindFactory(bool allow_occupied, bool require_power) const = 0;
    // [101] 0x5F5320 ObjectClass::ProcessInputKey
    // design: pure virtual function, no binary implementation
    virtual RadioCommand ReceiveCommand(TechnoClass* sender, RadioCommand command, AbstractClass*& inout) = 0;
    // [102] 0x5F5930 AbstractClass::IsNotNull
    // design: virtual function, no binary implementation matched in IDA
    virtual bool DiscoveredBy(HouseClass* house);
    // [103] 0x5F43F0 AircraftClass::StubReturnFalse4
    // design: pure virtual function, no binary implementation
    virtual void SetRepairState(int state) = 0;
    // [104] 0x5F4400 AbstractClass::COMStub_Return0_104
    virtual void Sell(uint32_t unknown) = 0;  // 0x445880
    // [105] 0x5F6B50 AbstractClass::COMStub_Return0_105
    // design: pure virtual function, no binary implementation
    virtual void AssignPlanningPath(int path_idx, signed char wp_idx) = 0;
    // [106] 0x5F4410 ObjectClass::MoveToDirection
    // design: pure virtual function, no binary implementation
    virtual void onDeployComplete(uint32_t a) = 0;

    // --- Movement / Occupation ---
    // [107] 0x4264C0 AbstractClass::COMStub_107
    virtual Move IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const;
    // [108] 0x4264D0 ObjectClass::COMStub_108
    // design: pure virtual function, no binary implementation
    virtual uint32_t canDeployHere(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) = 0;
    // [109] 0x5F6940 ObjectClass::SetPosition
    // design: pure virtual function, no binary implementation
    virtual void SetLocation(const CoordStruct& coords) = 0;

    // --- Cell / Coordinate queries ---
    // [110] 0x41BEA0 ObjectClass::GetCellCoords_Alt
    virtual CellStruct* GetMapCoords(CellStruct* out) const = 0;  // 0x426A80
    // [111] 0x5F6960 ObjectClass::GetCellCoords
    virtual CellClass* GetCell() const = 0;  // 0x5F6A10
    // [112] 0x5F69C0 ObjectClass::CoordToCell
    // wrapper: delegates to ObjectClass::GetCell at 0x5F6A10
    virtual CellStruct* GetMapCoordsAgain(CellStruct* out) const = 0;
    // [113] 0x5F6A10 ObjectClass::GetCell
    // wrapper: delegates to ObjectClass::GetCell at 0x5F6A10
    virtual CellClass* GetCellAgain() const = 0;

    // --- Height / Z ---
    // [114] 0x5F5F40 ObjectClass::GetZAboveGround
    virtual int GetHeight() const;  // 0x556630
    // [115] 0x5F5FA0 ObjectClass::SetZ
    // wrapper: delegates to ObjectClass::GetHeight at 0x556630
    virtual void SetHeight(uint32_t height);
    // [116] 0x5F5F30 ObjectClass::GetMember41
    virtual int GetZ() const;

    // --- Warping state ---
    // [117] 0x4264E0 AbstractClass::COMStub_Return0_117
    // wrapper: delegates to ObjectClass::GetZAboveGround at 0x5F5F40
    virtual bool IsBeingWarpedOut() const = 0;
    // [118] 0x4264F0 AbstractClass::COMStub_Return0_118
    // design: virtual function, no binary implementation matched in IDA
    virtual bool IsWarpingIn() const = 0;
    // [119] 0x426500 AbstractClass::COMStub_Return0_119
    // design: virtual function, no binary implementation matched in IDA
    virtual bool IsWarpingSomethingOut() const = 0;
    // [120] 0x426510 AbstractClass::getCoordCenter2
    // design: virtual function, no binary implementation matched in IDA
    virtual bool IsNotWarping() const = 0;
    // [121] 0x426520 AbstractClass::COMStub_Return0_121
    // design: virtual function, no binary implementation matched in IDA
    virtual LightConvertClass* GetRemapColour() const = 0;

    // === Non-virtual methods ===
    int DistanceFrom(AbstractClass* that) const;

    virtual double GetHealthPercentage() const;

    HealthState GetHealthStatus() const {         // 0x5F5DD0
        auto pct = GetHealthPercentage();
        if (pct <= 0.3333) return static_cast<HealthState>(0);
        if (pct <= 0.6666) return static_cast<HealthState>(1);
        return static_cast<HealthState>(2);
    }

    // === Convenience wrappers ===
    CellStruct GetMapCoords() const { CellStruct ret{}; GetMapCoords(&ret); return ret; }  // 0x426A80
    // design: inline accessor, inlined at all call sites
    CellStruct GetMapCoordsAgain() const { CellStruct ret{}; GetMapCoordsAgain(&ret); return ret; }
    // design: inline accessor, inlined at all call sites
    CoordStruct GetFLH(int weapon_idx, const CoordStruct& base) const { CoordStruct ret{}; GetFLH(&ret, weapon_idx, base); return ret; }

    // === ObjectClass non-virtual methods (addresses from IDA) ===
    void processPointerInvalid(); // 0x483610 ObjectClass::processPointerInvalid
    void updateStateFlags();      // 0x4E02C0 ObjectClass::updateStateFlags
    void checkLimbo();            // 0x556A20 ObjectClass::checkLimbo
    void updateMissionState();    // 0x556B50 ObjectClass::updateMissionState
    void resetObjectState();      // 0x652E50 ObjectClass::resetObjectState
    void processDamage();         // 0x6A5000 ObjectClass::processDamage
    void checkHealth();           // 0x6ABA40 ObjectClass::checkHealth
    void updateAnimation();       // 0x6AC7A0 ObjectClass::updateAnimation
    void setTarget();             // 0x72A660 ObjectClass::setTarget
    void clearTarget();           // 0x72A670 ObjectClass::clearTarget
    void processDeath();          // 0x74CD60 ObjectClass::processDeath

    // ========================================================================
    // Member fields (IDA ctor 0x5F3900 confirmed offsets)
    // ========================================================================

    // AbstractClass fields inherited: +0x00 vtable ptrs (4), +0x10 uniqueId,
    //   +0x14 abstractFlags, +0x18 nextArrayIndex, +0x1C referenceCount,
    //   +0x20 NeedsSaveOrLink (gamemd::UnitClass*), reused as bool in IsDirty, as UnitClass* in updateHarvesting
    //
    // ObjectClass fields start at +0x24:

    uint32_t        objectTypeFlags;            // +0x24, init from A8E374
    uint32_t        owningHouseIndex;           // +0x28, init from A8E374
    int32_t         fallRate;                   // +0x2C, init = 0
    ObjectClass*    nextObject;                 // +0x30, init = 0
    TagClass*       attachedTag;                // +0x34, init = 0
    BombClass*      attachedBomb;               // +0x38, init = 0
    AudioController ambientSoundController;     // +0x3C, sizeof=0x14
    AudioController customSound_controller;     // +0x50, sizeof=0x14
    int32_t         customSound;                // +0x64, init = -1
    bool            bombVisible;                // +0x68, init = false
    uint8_t         alignmentPadding69[3];      // +0x69
    int32_t         health;                     // +0x6C, init = 0xFF
    int32_t         estimatedHealth;            // +0x70, init = 0
    bool            isOnMap;                    // +0x74, init = false
    uint8_t         alignmentPadding75[3];      // +0x75
    uint32_t        spawnStatus;                // +0x78, init = 1
    uint32_t        visibilityFlags;            // +0x7C, init = 0
    bool            needsRedraw;                // +0x80, init = false
    bool            inLimbo;                    // +0x81, init = true
    bool            inOpenToppedTransport;      // +0x82, init = false
    bool            isSelected;                 // +0x83, init = false
    bool            hasParachute;               // +0x84, init = false
    uint8_t         alignmentPadding85[3];      // +0x85
    AnimClass*      parachute;                  // +0x88, init = 0
    bool            onBridge;                   // +0x8C, init = false
    bool            isFallingDown;              // +0x8D, init = false
    bool            wasFallingDown;             // +0x8E, init = false
    bool            isBomb;                     // +0x8F, init = false
    bool            isAliveFlag;                // +0x90, init = false
    uint8_t         alignmentPadding91[3];      // +0x91
    uint32_t        lastLayer;                  // +0x94, init = 0
    bool            isInLogic;                  // +0x98, init = false
    bool            isVisible;                  // +0x99, init = false
    uint8_t         alignmentPadding99[2];      // +0x9A
    CoordStruct     location;                   // +0x9C, init = {0,0,0}
    LineTrail*      lineTrailer;                // +0xA8, init = 0
    // sizeof(ObjectClass) = 0xAC

protected:
    ObjectClass() noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ClearFlags2();  // 0x401170
    int Cleanup();  // 0x402220
    int GetSizeMax();  // 0x4103E0
    int vt_entry_140(int a1, void* a2, void* a3, void* a4);  // 0x417C80
    int GetCoordsThunk1();  // 0x41BDD0
    int GetCoordsThunk3();  // 0x41BE30
    int GetCellCoords_Alt();  // 0x41BEA0
    int GetMember41_2();  // 0x41CFA0
    int CleanupAirstrikeTarget(int a1);  // 0x41D540
    int GetDrawPosition();  // 0x4263D0
    int Set(void* a1);  // 0x431A30
    int CleanupAudioAndRefs();  // 0x4389B0
    int HandleRallyPointCommand();  // 0x4436F0
    int GetScreenCoords();  // 0x455C20
    int RemoveFromPointerList(int a1);  // 0x471F90
    int UpdateTiberiumGrowth(int a1);  // 0x4818E0
    void* SetMember09(void* a1);  // 0x485240
    int SetTriggerTarget(int a1);  // 0x485250
    bool IsCliffWall();  // 0x4CA130
    void* Construct();  // 0x4D08B0
    int SetMember360(int a1);  // 0x4D94A0
    int DispatchEvent(int a1, int a2, int a3, int a4, int a5);  // 0x4E13F0
    int DestroyChain();  // 0x4E14C0
    void BroadcastFlag(int a1);  // 0x4E1570
    int SetPositionXY(int a1, int a2);  // 0x4E1A40
    int ProcessCloaking();  // 0x5B3060
    int FreeResources();  // 0x5F1960
    int DetachAndFree();  // 0x5F1B70
    void* ctor();  // 0x5F3900
    void* Init(int a1);  // 0x5F3B50
    void* CalcTargetFacing(void* a1, int a2);  // 0x5F3DB0
    int HasC4();  // 0x5F3E30
    int StepCleanup(void* a1);  // 0x5F3E50
    int DetectCloaked();  // 0x5F3E70
    int GetThreatLevel();  // 0x5F4260
    int MoveToDirection();  // 0x5F4410
    int HandleSelection();  // 0x5F4520
    int GetPlacementScreenRect();  // 0x5F4730
    int CalcDrawRect();  // 0x5F4B10
    int ProcessInputKey();  // 0x5F5320
    int ParachuteDrop();  // 0x5F5940
    int SetReference(int a1);  // 0x5F5B50
    int GetOrCreateResHandle();  // 0x5F5B90
    int Fire();  // 0x5F5C20
    bool IsYellowHP();  // 0x5F5D20
    bool IsGreenHP();  // 0x5F5D90
    int GetLandHeight();  // 0x5F5F00
    int GetMember41();  // 0x5F5F30
    int SetZ();  // 0x5F5FA0
    int SetAnim(int a1);  // 0x5F6060
    int ComputeDistance(int a1);  // 0x5F6440
    int GetCoords();  // 0x5F65A0
    int DelegateVt69();  // 0x5F65D0
    int SetPosition();  // 0x5F6940
    int GetCellCoords();  // 0x5F6960
    int CoordToCell();  // 0x5F69C0
    int CheckGroundHeightDiff();  // 0x5F6A70
    int IsBelowScreen();  // 0x5F6B60
    int IsHeightAboveThreshold();  // 0x5F6B90
    int IsPlayerOwnedAndCheck();  // 0x5F6C30
    int GetCoords_Alt();  // 0x5F6C80
    int CheckFlagD0(int a1);  // 0x5F6CB0
    bool IsCrushable(void* a1);  // 0x5F6CD0
    int ResetPointerIfMatch();  // 0x5F6DA0
    int FinalizeCellPlacement(int a1);  // 0x5FC570
    void* RegisterInArray(int a1, int a2, int a3, int a4);  // 0x5FF250
    int ProcessUpdate();  // 0x62BB20
    int SetMember59(int a1);  // 0x6301F0
    int ProcessGroupInput(int a1, int a2, int a3);  // 0x65A820
    int ThunkTo636();  // 0x65AAA0
    int ThunkTo159x4();  // 0x65ACB0
    void* GetSidebarTooltip(int a1);  // 0x6A92E0
    void* GetTooltipText(int a1);  // 0x6AC210
    void* DestructWithRadar(int a1);  // 0x6AC7F0
    int PreDraw();  // 0x6D0F00
    void* ComputeDelta(void* a1);  // 0x6D6190
    int Render(int a1, int a2, int a3, int a4);  // 0x6E1440
    int ReadINIEntry(int a1, int a2, int a3, int a4);  // 0x6E15F0
    int Get(int a1);  // 0x6EC130
    int Vt34Thunk();  // 0x6F3270
    int NotifyExpired(void* a1, void* a2);  // 0x7077C0
    int GetTypeVt28();  // 0x708B30
    int GetShroudByte();  // 0x70C5B0
    int GetFogByte();  // 0x70C5C0
    int HasSubObject();  // 0x70C5D0
    int IsNotShrouded();  // 0x70C5F0
    int CheckTypeFlag1681();  // 0x70DD70
    int CheckTypeFlag1681_2();  // 0x70DDA0
    int ResetTimer2();  // 0x70E340
    int GetTypeVt41();  // 0x70F090
    int GetPriorityTarget();  // 0x70F820
    bool HasLocation();  // 0x70FEC0
    int ClearPointerRefs();  // 0x710410
    int FreeCaptureManager();  // 0x710460
    int ComputeValue();  // 0x7120D0
    int GetModeSpecificValue();  // 0x716290
    void* UnlinkFromFactory(void* a1);  // 0x71AB60
    int ProcessFoggedState();  // 0x71BDF0
    int DrawTypewriterText(int a1);  // 0x72A4A0
    int Initialize();  // 0x7498D0
    int IsCellSuitableForPlacement();  // 0x74D670
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetCoordsThunk2();  // 0x41be00 -- ObjectClass::GetCoordsThunk2
    int Undeploy();  // 0x5f4d30 -- ObjectClass::Undeploy
    int Deploy();  // 0x5f4ec0 -- ObjectClass::Deploy
    int Destroy2();  // 0x5f5280 -- ObjectClass::Destroy2
    int UpdateProductionDisplay();  // 0x5f5850 -- ObjectClass::UpdateProductionDisplay
    int GetZAboveGround();  // 0x5f5f40 -- ObjectClass::GetZAboveGround
    int DistanceTo(int a1);  // 0x5f6360 -- ObjectClass::DistanceTo
    int GetBoundingSize();  // 0x5f6bd0 -- ObjectClass::GetBoundingSize
    int IsAboveScreenMargin();  // 0x5f6c10 -- ObjectClass::IsAboveScreenMargin
    int CreateInstance();  // 0x5f6dc0 -- ObjectClass::CreateInstance
    int FindClosestObjectCell(int a1, int a2, int a3);  // 0x47c3d0 -- Object::FindClosestObjectCell
    int FindObjectCell(int a1, int a2);  // 0x47c5a0 -- Object::FindObjectCell
    bool IsAlliedWithObjectHouse(int a1);  // 0x4f9a90 -- Object::IsAlliedWithObjectHouse
    bool IsAlliedWithObjectSimpleHouse(int a1);  // 0x4f9af0 -- Object::IsAlliedWithObjectSimpleHouse
    void* RemoveObjectArray();  // 0x53e420 -- Object::RemoveObjectArray
    void* FindNearestObjectAtCell(int a1);  // 0x56c210 -- Object::FindNearestObjectAtCell
    int Unlink();  // 0x5f5230 -- Object::Unlink
    void* SpawnAtCell(int a1, int a2, int a3);  // 0x5fc380 -- Object::SpawnAtCell
    int CheckState(int a1, int a2);  // 0x5fd270 -- Object::CheckState
    int LoadObject(int a1, int a2);  // 0x5fd8f0 -- Object::LoadObject
    void HandleAction(int a1, int a2);  // 0x5fd970 -- Object::HandleAction
    int ProcessEvent();  // 0x5fdde0 -- Object::ProcessEvent
    void* DrawObject(int a1);  // 0x5fdf70 -- Object::DrawObject
    void* CalculateObjectPlacementPosition(int a1);  // 0x62ac30 -- Object::CalculateObjectPlacementPosition
    void* DtorWithDelete(int a1);  // 0x7ad330 -- Object::DtorWithDelete
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    bool HasLinkedObject(int a1);  // 0x4135a0
    int CheckCellFlags(int a1, int a2, int a3, int a4, int a5);  // 0x4d9c60
    int LoadFromStream_Common();  // 0x4db3c0
    int SaveToStream_Common();  // 0x4db690
    void* FindPlacementCell(int a1, int a2, int a3, int a4, int a5, int a6);  // 0x4de1d0
    void* ComputeScreenYOffset(int a1, int a2);  // 0x55a8c0
    int SetDeployState(int a1, int a2);  // 0x55baa0
    void CleanupSidebarResources();  // 0x6a5bf0
    int FindOwner(int a1, int a2);  // 0x6e45e0
    // === FUNCS-MOVE (END) ===
};

} // namespace game
} // namespace ra2
