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

class AudioController {
public:
    uint32_t field_00;   // +0x00, init 0
    uint32_t field_04;   // +0x04, init 0
    uint32_t field_08;   // +0x08, init 0
    uint32_t field_0C;   // +0x0C, init &dword_87E294
    uint32_t field_10;   // +0x10, not initialized by Init

    void Stop();
    void Start(int32_t soundIndex);
    void Pause();
    void Resume();
    static bool IsSoundEnabled() { return false; } // IDA 0x407000
}; // sizeof = 0x14 (verified against ObjectClass ctor gap 0x3C->0x50)

class ObjectClass : public AbstractClass {
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x2);

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual ~ObjectClass() = default;

    virtual void AnimpointerExpired(AnimClass* anim) {}
    virtual bool IsSelectable() const { return false; }
    virtual VisualType VisualCharacter(int specific_owner, HouseClass* who_is_asking) const { return static_cast<VisualType>(0); }
    virtual SHPStruct* GetImage() const { return nullptr; }
    virtual Action MouseOverCell(const CellStruct& cell, bool check_fog = false, bool ignore_force = false) const { return static_cast<Action>(0); }
    virtual Action MouseOverObject(const ObjectClass* object, bool ignore_force = false) const { return static_cast<Action>(0); }
    virtual Layer InWhichLayer() const { return static_cast<Layer>(2); }
    virtual bool IsSurfaced();
    virtual bool IsStrange() const;
    virtual TechnoTypeClass* GetTechnoType() const { return nullptr; }
    virtual ObjectTypeClass* GetType() const { return nullptr; }
    virtual uint32_t GetTypeOwners() const { return 0; }
    virtual const wchar_t* GetUIName() const { return nullptr; }
    virtual bool CanBeRepaired() const;
    virtual bool CanBeSold() const;
    virtual bool IsActive() const;
    virtual bool IsControllable() const;
    virtual CoordStruct* GetPosition_0(CoordStruct* out) const { return nullptr; }
    virtual CoordStruct* GetDockCoords(CoordStruct* out, TechnoClass* docker) const { return nullptr; }
    virtual CoordStruct* GetPosition_2(CoordStruct* out) const { return nullptr; }
    virtual CoordStruct* GetFLH(CoordStruct* dest, int weapon_idx, CoordStruct base_coords) const { return nullptr; }
    virtual CoordStruct* GetExitCoords(CoordStruct* out, uint32_t unknown) const { return nullptr; }
    virtual int GetYSort() const { return 0; }
    virtual bool IsOnBridge(TechnoClass* docker = nullptr) const { return false; }
    virtual bool IsStandingStill() const { return false; }
    virtual bool IsDisguised() const { return false; }
    virtual bool IsDisguisedAs(HouseClass* target) const { return false; }
    virtual ObjectTypeClass* GetDisguise(bool disguised_against_allies) const { return nullptr; }
    virtual HouseClass* GetDisguiseHouse(bool disguised_against_allies) const { return nullptr; }
    virtual bool Remove();
    virtual bool Put(const CoordStruct& coords, unsigned int face_dir);
    virtual void Disappear(bool permanently) {}
    virtual void RegisterDestruction(TechnoClass* destroyer) {}
    virtual void RegisterKill(HouseClass* destroyer) {}
    virtual bool SpawnParachuted(const CoordStruct& coords) { return false; }
    virtual void DropAsBomb() {}
    virtual void MarkAllOccupationBits(const CoordStruct& coords) {}
    virtual void UnmarkAllOccupationBits(const CoordStruct& coords) {}
    virtual void UnInit() {}
    virtual void Reveal();
    virtual KickOutResult KickOutUnit(TechnoClass* techno, CellStruct cell) { return static_cast<KickOutResult>(0); }
    virtual bool DrawIfVisible(RectangleStruct* bounds, bool even_if_cloaked, uint32_t unknown) const { return false; }
    virtual const CellStruct* GetFoundationData(bool include_bib = false) const { return nullptr; }
    virtual void DrawBehind(Point2D* location, RectangleStruct* bounds) const {}
    virtual void DrawExtras(Point2D* location, RectangleStruct* bounds) const {}
    virtual void Draw(Point2D* location, RectangleStruct* bounds) const {}
    virtual void DrawAgain(Point2D* location, RectangleStruct* bounds) const {}
    virtual void Undiscover() {}
    virtual void See(uint32_t unknown1, uint32_t unknown2) {}
    virtual bool UpdatePlacement(int placement_type) { return false; }
    virtual RectangleStruct* getBoundsRect(RectangleStruct* out) const { return nullptr; }
    virtual RectangleStruct* getBoundsRectMut(RectangleStruct* out) { return nullptr; }
    virtual void DrawRadialIndicator(uint32_t unknown) {}
    virtual void MarkForRedraw();
    virtual bool CanBeSelected() const;
    virtual bool CanBeSelectedNow() const;
    virtual bool spawnInfantry(uint32_t a, uint32_t b, uint32_t c, uint32_t d) { return false; }
    virtual bool ClickedAction(Action action, ObjectClass* target, bool unknown) { return false; }
    virtual void Flash(int duration);
    virtual bool Select();
    virtual void Deselect();
    virtual DamageState IronCurtain(int duration, HouseClass* source, bool force_shield);
    virtual void StopAirstrikeTimer() {}
    virtual void StartAirstrikeTimer(int duration) {}
    virtual bool IsIronCurtained() const;
    virtual bool IsCloseEnough3D(uint32_t a, uint32_t b) const { return false; }
    virtual int GetWeaponRange(int weapon_idx) const;
    virtual DamageState ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
        ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house);
    virtual void Destroy();
    virtual void Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination);
    virtual bool Ignite();
    virtual void Extinguish();
    virtual uint32_t GetPointsValue() const;
    virtual Mission GetCurrentMission() const { return static_cast<Mission>(0); }
    virtual void RestoreMission(Mission mission);
    virtual void UpdatePosition(int unknown) {}
    virtual BuildingClass* FindFactory(bool allow_occupied, bool require_power) const { return nullptr; }
    virtual RadioCommand ReceiveCommand(TechnoClass* sender, RadioCommand command, AbstractClass*& inout) { return static_cast<RadioCommand>(0); }
    virtual bool DiscoveredBy(HouseClass* house);
    virtual void SetRepairState(int state) {}
    virtual void Sell(uint32_t unknown) {}
    virtual void AssignPlanningPath(int path_idx, signed char wp_idx) {}
    virtual void onDeployComplete(uint32_t a) {}
    virtual Move IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const;
    virtual uint32_t canDeployHere(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e) { return 0; }
    virtual void SetLocation(const CoordStruct& coords) {}
    virtual CellStruct* GetMapCoords(CellStruct* out) const { return nullptr; }
    virtual CellClass* GetCell() const { return nullptr; }
    virtual CellStruct* GetMapCoordsAgain(CellStruct* out) const { return nullptr; }
    virtual CellClass* GetCellAgain() const { return nullptr; }
    virtual int GetHeight() const;
    virtual void SetHeight(uint32_t height);
    virtual int GetZ() const;
    virtual bool IsBeingWarpedOut() const { return false; }
    virtual bool IsWarpingIn() const { return false; }
    virtual bool IsWarpingSomethingOut() const { return false; }
    virtual bool IsNotWarping() const { return false; }
    virtual LightConvertClass* GetRemapColour() const { return nullptr; }

    int DistanceFrom(AbstractClass* that) const;

    virtual double GetHealthPercentage() const;

    HealthState GetHealthStatus() const {
        auto pct = GetHealthPercentage();
        if (pct <= 0.3333) return static_cast<HealthState>(0);
        if (pct <= 0.6666) return static_cast<HealthState>(1);
        return static_cast<HealthState>(2);
    }

    CellStruct GetMapCoords() const { CellStruct ret{}; GetMapCoords(&ret); return ret; }
    CellStruct GetMapCoordsAgain() const { CellStruct ret{}; GetMapCoordsAgain(&ret); return ret; }
    CoordStruct GetFLH(int weapon_idx, const CoordStruct& base) const { CoordStruct ret{}; GetFLH(&ret, weapon_idx, base); return ret; }

    uint32_t        objectTypeFlags;
    uint32_t        owningHouseIndex;
    int32_t         fallRate;
    ObjectClass*    nextObject;
    TagClass*       attachedTag;
    BombClass*      attachedBomb;
    AudioController ambientSoundController;
    AudioController customSound_controller;
    int32_t         customSound;
    bool            bombVisible;
    uint8_t         alignmentPadding69[3];
    int32_t         health;
    int32_t         estimatedHealth;
    bool            isOnMap;
    uint8_t         alignmentPadding75[3];
    // IDA: +0x78 = init 1, +0x7C = init 0
    uint32_t        spawnStatus;         // +0x78, init = 1
    uint32_t        visibilityFlags;         // +0x7C, init = 0
    bool            needsRedraw;       // +0x80, init = false
    bool            inLimbo;           // +0x81, init = true
    bool            inOpenToppedTransport;
    bool            isSelected;
    bool            hasParachute;
    uint8_t         alignmentPadding85[3];
    AnimClass*      parachute;
    bool            onBridge;
    bool            isFallingDown;
    bool            wasFallingDown;
    bool            isBomb;
    bool            isAliveFlag;
    uint8_t         alignmentPadding91[3];
    uint32_t        lastLayer;
    bool            isInLogic;
    bool            isVisible;
    uint8_t         alignmentPadding99[2];
    CoordStruct     location;
    LineTrail*      lineTrailer;

protected:
    ObjectClass() noexcept;
};

} // namespace game
} // namespace ra2
