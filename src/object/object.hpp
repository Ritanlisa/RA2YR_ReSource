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

    void Stop();          // 0x405B70
    void Start(int32_t soundIndex);  // 0x405B90
    void Pause();         // 0x405C80
    void Resume();        // 0x405CA0
    static bool IsSoundEnabled(); // IDA 0x407000
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
    virtual HRESULT __stdcall Load(IStream* stream) override = 0;

    // === Destructor ===
    // [8] 0x5F6DC0 ObjectClass::CreateInstance (dtor thunk)
    virtual ~ObjectClass() = default;

    // ========================================================================
    // ObjectClass virtuals (vtable[0] entries [24]-[121])
    // =0 methods have no function body; address = vtable slot target function
    // ========================================================================

    // [24] 0x5F6DA0 ObjectClass::ResetPointerIfMatch
    virtual void AnimpointerExpired(AnimClass* anim) = 0;
    // [25] 0x426390 AbstractClass::COMStub_Return0_25 (return false stub)
    virtual bool IsSelectable() const = 0;
    // [26] 0x4263A0 AbstractClass::COMStub_26
    virtual VisualType VisualCharacter(int specific_owner, HouseClass* who_is_asking) const = 0;
    // [27] 0x5F3E30 ObjectClass::HasC4
    virtual SHPStruct* GetImage() const = 0;
    // [28] 0x5F4250 AbstractClass::COMStub_28
    virtual Action MouseOverCell(const CellStruct& cell, bool check_fog = false, bool ignore_force = false) const = 0;
    // [29] 0x5F4240 AbstractClass::COMStub_29
    virtual Action MouseOverObject(const ObjectClass* object, bool ignore_force = false) const = 0;
    // [30] 0x5F4260 ObjectClass::GetThreatLevel
    virtual Layer InWhichLayer() const = 0;
    // [31] 0x5F6C10 ObjectClass::IsAboveScreenMargin (YRpp: IsSurfaced)
    virtual bool IsSurfaced();
    // [32] 0x4263B0 AbstractClass::COMStub_Return0_32 (return false stub)
    virtual bool IsStrange() const;
    // [33] 0x5F6BC0 AbstractClass::COMStub_Return0_33
    virtual TechnoTypeClass* GetTechnoType() const = 0;
    // [34] 0x4E0130 AbstractClass::COMStub_Return0_34
    virtual ObjectTypeClass* GetType() const = 0;
    // [35] 0x5F42A0 AbstractClass::COMStub_Ret2147483647_35
    virtual uint32_t GetTypeOwners() const = 0;
    // [36] 0x4263C0 AbstractClass::COMStub_Ret8487648_36
    virtual const wchar_t* GetUIName() const = 0;
    // [37] 0x5F42B0 AbstractClass::COMStub_Return0_37 (return false stub)
    virtual bool CanBeRepaired() const;
    // [38] 0x5F42C0 AbstractClass::COMStub_Return0_38 (return false stub)
    virtual bool CanBeSold() const;
    // [39] 0x5F42D0 AbstractClass::COMStub_Return0_39 (return false stub)
    virtual bool IsActive() const;  // 0x5f6690
    // [40] 0x5F42E0 AbstractClass::COMStub_Return0_40 (return false stub)
    virtual bool IsControllable() const;

    // --- Coordinate accessors ---
    // [41] 0x41BDD0 ObjectClass::GetCoordsThunk1
    virtual CoordStruct* GetPosition_0(CoordStruct* out) const = 0;
    // [42] 0x5F6C80 ObjectClass::GetCoords_Alt
    virtual CoordStruct* GetDockCoords(CoordStruct* out, TechnoClass* docker) const = 0;
    // [43] 0x41BE00 ObjectClass::GetCoordsThunk2 (YRpp: GetRenderCoords)
    virtual CoordStruct* GetPosition_2(CoordStruct* out) const = 0;
    // [44] 0x4263D0 ObjectClass::GetDrawPosition
    virtual CoordStruct* GetFLH(CoordStruct* dest, int weapon_idx, CoordStruct base_coords) const = 0;
    // [45] 0x41BE30 ObjectClass::GetCoordsThunk3
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const = 0;
    // [46] 0x5F6BD0 ObjectClass::GetBoundingSize (YRpp: GetYSort)
    virtual int GetYSort() const = 0;
    // [47] 0x5F6A70 ObjectClass::CheckGroundHeightDiff
    virtual bool IsOnBridge(TechnoClass* docker = nullptr) const = 0;
    // [48] 0x426410 AbstractClass::getCoordCenter (return false stub)
    virtual bool IsStandingStill() const = 0;
    // [49] 0x426420 AbstractClass::COMStub_Return0_49 (return false stub)
    virtual bool IsDisguised() const = 0;
    // [50] 0x426430 AbstractClass::COMStub_50
    virtual bool IsDisguisedAs(HouseClass* target) const = 0;
    // [51] 0x41BE60 AircraftClass::LandingCheckStub
    virtual ObjectTypeClass* GetDisguise(bool disguised_against_allies) const = 0;
    // [52] 0x41BE70 AircraftClass::StubReturnFalse2
    virtual HouseClass* GetDisguiseHouse(bool disguised_against_allies) const = 0;

    // --- Lifecycle ---
    // [53] 0x5F4D30 ObjectClass::Undeploy (Limbo)
    virtual bool Remove();  // 0x5f44a0
    // [54] 0x5F4EC0 ObjectClass::Deploy (Unlimbo)
    virtual bool Put(const CoordStruct& coords, unsigned int face_dir);
    // [55] 0x5F5280 ObjectClass::Destroy2 (Disappear)
    virtual void Disappear(bool permanently) = 0;
    // [56] 0x5F42F0 AbstractClass::COMStub_Return0_56
    virtual void RegisterDestruction(TechnoClass* destroyer) = 0;
    // [57] 0x5F4300 AbstractClass::COMStub_Return0_57
    virtual void RegisterKill(HouseClass* destroyer) = 0;
    // [58] 0x5F5940 ObjectClass::ParachuteDrop
    virtual bool SpawnParachuted(const CoordStruct& coords) = 0;
    // [59] 0x5F4160 ObjectClass::DropAsBomb_Track
    virtual void DropAsBomb() = 0;
    // [60] 0x5F60A0 MapClass::SetCellOverlayFlag
    virtual void MarkAllOccupationBits(const CoordStruct& coords) = 0;
    // [61] 0x5F6120 MapClass::ClearCellOverlayFlag
    virtual void UnmarkAllOccupationBits(const CoordStruct& coords) = 0;
    // [62] 0x5F65F0 ObjectClass::Destroy (YRpp: UnInit)
    virtual void UnInit() = 0;

    // --- Visibility / Discovery ---
    // [63] 0x5F4310 AbstractClass::COMStub_Return0_63 (stub retn)
    virtual void Reveal();
    // [64] 0x5F4320 AbstractClass::COMStub_64
    virtual KickOutResult KickOutUnit(TechnoClass* techno, CellStruct cell) = 0;
    // [65] 0x5F4B10 ObjectClass::CalcDrawRect
    virtual bool DrawIfVisible(RectangleStruct* bounds, bool even_if_cloaked, uint32_t unknown) const = 0;
    // [66] 0x5F5B90 ObjectClass::GetOrCreateResHandle
    virtual const CellStruct* GetFoundationData(bool include_bib = false) const = 0;

    // --- Drawing ---
    // [67] 0x426440 AbstractClass::COMStub_Return0_67
    virtual void DrawBehind(Point2D* location, RectangleStruct* bounds) const;
    // [68] 0x426450 AbstractClass::COMStub_Return0_68
    virtual void DrawExtras(Point2D* location, RectangleStruct* bounds) const;
    // [69] 0x5B3A50 IPersistStream::StubReturnFalse
    virtual void Draw(Point2D* location, RectangleStruct* bounds) const;
    // [70] 0x5F65D0 ObjectClass::DelegateVt69
    virtual void DrawAgain(Point2D* location, RectangleStruct* bounds) const;
    // [71] 0x5F4330 AbstractClass::COMStub_Return0_71 (stub retn)
    virtual void Undiscover() = 0;
    // [72] 0x5F4340 AbstractClass::COMStub_Return0_72
    virtual void See(uint32_t unknown1, uint32_t unknown2) = 0;

    // --- Placement / Bounds ---
    // [73] 0x5F5850 ObjectClass::UpdateProductionDisplay (UpdatePlacement)
    virtual bool UpdatePlacement(int placement_type) = 0;
    // [74] 0x5F4730 ObjectClass::GetPlacementScreenRect
    virtual RectangleStruct* getBoundsRect(RectangleStruct* out) const = 0;  // 0x5f4870
    // [75] 0x5F4870 ObjectClass::GetBoundsRect
    virtual RectangleStruct* getBoundsRectMut(RectangleStruct* out) = 0;
    // [76] 0x41BE80 AircraftClass::CheckStateFlag
    virtual void DrawRadialIndicator(uint32_t unknown) = 0;
    // [77] 0x5F4D10 ObjectClass::MarkForRedraw
    virtual void MarkForRedraw();  // 0x5f4d10

    // --- Selection ---
    // [78] 0x5F6C30 ObjectClass::IsPlayerOwnedAndCheck
    virtual bool CanBeSelected() const;
    // [79] 0x5F6C70 AbstractClass::COMStub_79
    virtual bool CanBeSelectedNow() const;
    // [80] 0x5F4360 AbstractClass::COMStub_80
    virtual bool spawnInfantry(uint32_t a, uint32_t b, uint32_t c, uint32_t d) = 0;  // 0x4d7d50
    // [81] 0x5F4350 AbstractClass::COMStub_81
    virtual bool ClickedAction(Action action, ObjectClass* target, bool unknown) = 0;

    // --- Visual effects ---
    // [82] 0x5F4370 AbstractClass::COMStub_Return0_82
    virtual void Flash(int duration);
    // [83] 0x5F4520 ObjectClass::HandleSelection
    virtual bool Select();
    // [84] 0x5F44A0 ObjectClass::Remove (Deselect)
    virtual void Deselect();

    // --- Combat / Armor ---
    // [85] 0x426460 AbstractClass::COMStub_Return0_85
    virtual DamageState IronCurtain(int duration, HouseClass* source, bool force_shield);
    // [86] 0x426470 AbstractClass::COMStub_Return0_86 (stub retn)
    virtual void StopAirstrikeTimer() = 0;
    // [87] 0x426480 AbstractClass::COMStub_Return0_87
    virtual void StartAirstrikeTimer(int duration) = 0;
    // [88] 0x426490 AbstractClass::COMStub_Return0_88 (return false stub)
    virtual bool IsIronCurtained() const;
    // [89] 0x5F4380 AbstractClass::COMStub_89
    virtual bool IsCloseEnough3D(uint32_t a, uint32_t b) const = 0;
    // [90] 0x5F4390 AbstractClass::COMStub_90
    virtual int GetWeaponRange(int weapon_idx) const;
    // [91] 0x5F5390 TechnoClass::CreateDestructionEffect
    virtual DamageState ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
        ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house);
    // [92] 0x4264A0 AbstractClass::COMStub_Return0_92 (stub retn)
    virtual void Destroy();  // 0x5f65f0
    // [93] 0x5F43A0 AbstractClass::COMStub_Return0_93
    virtual void Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination);
    // [94] 0x5F43B0 AircraftClass::StubReturnFalse3
    virtual bool Ignite();
    // [95] 0x5F43C0 AircraftClass::StubReturnTrue
    virtual void Extinguish();
    // [96] 0x5F43D0 AbstractClass::COMStub_Return0_96
    virtual uint32_t GetPointsValue() const;

    // --- Mission / Command ---
    // [97] 0x5F43E0 AbstractClass::processStateUpdate
    virtual Mission GetCurrentMission() const = 0;
    // [98] 0x41BE90 AircraftClass::CheckStateFlag2
    virtual void RestoreMission(Mission mission);
    // [99] 0x4264B0 AbstractClass::COMStub_Return0_99
    virtual void UpdatePosition(int unknown) = 0;
    // [100] 0x5F5C20 ObjectClass::Fire
    virtual BuildingClass* FindFactory(bool allow_occupied, bool require_power) const = 0;
    // [101] 0x5F5320 ObjectClass::ProcessInputKey
    virtual RadioCommand ReceiveCommand(TechnoClass* sender, RadioCommand command, AbstractClass*& inout) = 0;
    // [102] 0x5F5930 AbstractClass::IsNotNull
    virtual bool DiscoveredBy(HouseClass* house);
    // [103] 0x5F43F0 AircraftClass::StubReturnFalse4
    virtual void SetRepairState(int state) = 0;
    // [104] 0x5F4400 AbstractClass::COMStub_Return0_104
    virtual void Sell(uint32_t unknown) = 0;
    // [105] 0x5F6B50 AbstractClass::COMStub_Return0_105
    virtual void AssignPlanningPath(int path_idx, signed char wp_idx) = 0;
    // [106] 0x5F4410 ObjectClass::MoveToDirection
    virtual void onDeployComplete(uint32_t a) = 0;

    // --- Movement / Occupation ---
    // [107] 0x4264C0 AbstractClass::COMStub_107
    virtual Move IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const;
    // [108] 0x4264D0 ObjectClass::COMStub_108
    virtual uint32_t canDeployHere(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) = 0;
    // [109] 0x5F6940 ObjectClass::SetPosition
    virtual void SetLocation(const CoordStruct& coords) = 0;

    // --- Cell / Coordinate queries ---
    // [110] 0x41BEA0 ObjectClass::GetCellCoords_Alt
    virtual CellStruct* GetMapCoords(CellStruct* out) const = 0;
    // [111] 0x5F6960 ObjectClass::GetCellCoords
    virtual CellClass* GetCell() const = 0;  // 0x5f6a10
    // [112] 0x5F69C0 ObjectClass::CoordToCell
    virtual CellStruct* GetMapCoordsAgain(CellStruct* out) const = 0;
    // [113] 0x5F6A10 ObjectClass::GetCell
    virtual CellClass* GetCellAgain() const = 0;

    // --- Height / Z ---
    // [114] 0x5F5F40 ObjectClass::GetZAboveGround
    virtual int GetHeight() const;  // 0x556630
    // [115] 0x5F5FA0 ObjectClass::SetZ
    virtual void SetHeight(uint32_t height);
    // [116] 0x5F5F30 ObjectClass::GetMember41
    virtual int GetZ() const;

    // --- Warping state ---
    // [117] 0x4264E0 AbstractClass::COMStub_Return0_117
    virtual bool IsBeingWarpedOut() const = 0;
    // [118] 0x4264F0 AbstractClass::COMStub_Return0_118
    virtual bool IsWarpingIn() const = 0;
    // [119] 0x426500 AbstractClass::COMStub_Return0_119
    virtual bool IsWarpingSomethingOut() const = 0;
    // [120] 0x426510 AbstractClass::getCoordCenter2
    virtual bool IsNotWarping() const = 0;
    // [121] 0x426520 AbstractClass::COMStub_Return0_121
    virtual LightConvertClass* GetRemapColour() const = 0;

    // === Non-virtual methods ===
    int DistanceFrom(AbstractClass* that) const;  // 0x5F6360 ObjectClass::DistanceTo

    virtual double GetHealthPercentage() const;   // 0x5F5CF0

    HealthState GetHealthStatus() const {         // 0x5F5DD0
        auto pct = GetHealthPercentage();
        if (pct <= 0.3333) return static_cast<HealthState>(0);
        if (pct <= 0.6666) return static_cast<HealthState>(1);
        return static_cast<HealthState>(2);
    }

    // === Convenience wrappers ===
    CellStruct GetMapCoords() const { CellStruct ret{}; GetMapCoords(&ret); return ret; }
    CellStruct GetMapCoordsAgain() const { CellStruct ret{}; GetMapCoordsAgain(&ret); return ret; }
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
    //   +0x20 needsSave, +0x21 padding[3]
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
};

} // namespace game
} // namespace ra2
