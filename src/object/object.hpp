#pragma once

#include "abstract.hpp"
#include "system/ini_class.hpp"  // G42.55 closure (INIEntry)
namespace gamemd { class Audio; }  // X27: member-decl type supply

namespace gamemd { struct ILocomotion; struct RandomStruct; class TechnoTypeClass; }
namespace ra2 {
namespace game {
    // X27: member-decl type supply (log-driven hygiene)
    using ::gamemd::Audio;

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
#ifndef GAMEMD_E4_OWNS_AudioController  // X10: e4 universe owns this twin
class AudioController {
public:
    uint32_t AudioController_field_00;   // +0x00, init 0 — repurposed as idle-order ptr in UnitClass
    void * AudioController_field_04;     // +0x04, init 0 (X145C retype: csp void*, 4B unchanged)
    void * AudioController_field_08;     // +0x08, init 0 (X145C retype: csp void*, 4B unchanged)
    void * AudioController_field_0C;     // +0x0C, init &dword_87E294 — repurposed as idle-order count in UnitClass (X145C retype: csp/e4 twins void*, 4B unchanged)
    uint32_t AudioController_field_10;   // +0x10, not initialized by Init

    void Stop();
    void Start(int32_t soundIndex);
    void Pause();
    void Resume();
    static bool IsSoundEnabled();
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int * Constructor();  // 0x402040
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
    unsigned int q074;  // 0x74 (offset-truth)

    unsigned char AudioController_D40[4];  /* AudioController */  // X10 supply (member_lookup)
    unsigned char q044;  // X10 supply (member_lookup)
    unsigned int u32_168;  // X10 supply (member_lookup)
    unsigned int u32_16C;  // X10 supply (member_lookup)
    unsigned int u32_170;  // X10 supply (member_lookup)
    unsigned int u32_174;  // X10 supply (member_lookup)
    unsigned int u32_178;  // X10 supply (member_lookup)
    unsigned int u32_1D0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_OWNS_AudioController (X10)


// ============================================================================
// ObjectClass — root of all game object instances
//
// IDA: Primary ptr_0 @ 0x7EF060 (contiguous with AbstractClass @ 0x7E1F50)
//      Secondary vtables: 0x7EF044, 0x7EF03C, 0x7EF034
//      Constructor: ObjectClass::ctor @ 0x5F3900  Dtor: 0x5F3B80
//      sizeof: 0xAC (confirmed via ctor init chain)
// ============================================================================
#ifndef GAMEMD_E4_OWNS_ObjectClass  // X10: e4 universe owns this twin
class ObjectClass : public AbstractClass {

public:
    // --- g57w20m20c supply (csp_canon 0x40) ---
    unsigned int q040;    // 0x40

public:
    int* FindPlacementCellsAlt(int* a2, int a3);  // 0x703590 raw fn_70 段头 this=ObjectClass (段头名 MapClass::FindPlacementCellsAlt; g57w10 r4 item2)
public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x2);

    // === X133: inherited-range overrides (OC binary table slots 0-23 where RVA != root) ===
    // slot 5: impl 0x5F5E80 (SaveLoad_Register body; raw retn 8 = 2 stack args --
    //          arity divergence vs COM stdcall recorded as I525)
    virtual HRESULT __stdcall Load(IStream* stream) override;  // X133 slot 5 = 0x5F5E80

    // === Destructor ===
    virtual ~ObjectClass();  // X133: slot 8 = 0x5F6DC0 deleting dtor (0x5F3B80 = complete dtor)

    virtual int Unlink(int a1, int a2) override;  // X133 slot 10 = 0x5F5230
    virtual int ProcessPower() override;    // X133 slot 13 = 0x5F6250 (binary arity=1; 0-arg per X132 model -- I525)
    virtual bool IsActive() const override;       // X133 slot 17 = 0x5F6690
    virtual unsigned int* GetInvalidCoord(unsigned int* out) override;  // X133 slot 18 = 0x5F65A0
    virtual bool IsBelowScreen() override;          // X133 slot 20 = 0x5F6B60
    virtual bool IsHeightAboveThreshold() override; // X133 slot 21 = 0x5F6B90
    virtual int DetectCloaked() override;           // X133 slot 23 = 0x5F3E70

    // ========================================================================
    // X133: ObjectClass own virtuals -- binary table 0x7EF060 slots [24]-[121] (98)
    // declaration order = slot order; arity = Capstone retn-imm/4 (raw-verified).
    // ========================================================================
    virtual int ResetPointerIfMatch(int a1);  // X133 slot 24 = 0x5F6DA0
    virtual bool COMStub_Return0_25();  // X133 slot 25 = 0x426390 (body pending)
    virtual int COMStub_26(int a1, int a2);  // X133 slot 26 = 0x4263A0 (body pending)
    virtual int HasC4(int a1);  // X133 slot 27 = 0x5F3E30
    virtual int COMStub_28(int a1, int a2, int a3);  // X133 slot 28 = 0x5F4250 (body pending)
    virtual int COMStub_29(int a1, int a2);  // X133 slot 29 = 0x5F4240 (body pending)
    virtual int GetThreatLevel();  // X133 slot 30 = 0x5F4260
    virtual int IsAboveScreenMargin();  // X133 slot 31 = 0x5F6C10
    virtual bool COMStub_Return0_32();  // X133 slot 32 = 0x4263B0 (body pending)
    virtual int COMStub_Return0_33();  // X133 slot 33 = 0x5F6BC0 (body pending)
    virtual int COMStub_Return0_34();  // X133 slot 34 = 0x4E0130 (body pending)
    virtual int COMStub_Ret2147483647_35();  // X133 slot 35 = 0x5F42A0 (body pending)
    virtual int COMStub_Ret8487648_36();  // X133 slot 36 = 0x4263C0 (body pending)
    virtual bool COMStub_Return0_37();  // X133 slot 37 = 0x5F42B0 (body pending)
    virtual bool COMStub_Return0_38();  // X133 slot 38 = 0x5F42C0 (body pending)
    virtual bool COMStub_Return0_39();  // X133 slot 39 = 0x5F42D0 (body pending)
    virtual bool COMStub_Return0_40();  // X133 slot 40 = 0x5F42E0 (body pending)
    virtual int GetCoordsThunk1(int a1);  // X133 slot 41 = 0x41BDD0
    virtual int GetCoords_Alt(int a1, int a2);  // X133 slot 42 = 0x5F6C80
    virtual int GetCoordsThunk2(int a1);  // X133 slot 43 = 0x41BE00
    virtual int GetDrawPosition(int a1, int a2, int a3, int a4, int a5);  // X133 slot 44 = 0x4263D0
    virtual int GetCoordsThunk3(int a1, int a2);  // X133 slot 45 = 0x41BE30
    virtual int GetBoundingSize();  // X133 slot 46 = 0x5F6BD0
    virtual int CheckGroundHeightDiff(int a1);  // X133 slot 47 = 0x5F6A70
    virtual int getCoordCenter();  // X133 slot 48 = 0x426410 (int: caller compares != -1)
    virtual bool COMStub_Return0_49();  // X133 slot 49 = 0x426420 (body pending)
    virtual int COMStub_50(int a1);  // X133 slot 50 = 0x426430 (body pending)
    virtual int LandingCheckStub(int a1);  // X133 slot 51 = 0x41BE60 (body pending)
    virtual int StubReturnFalse2(int a1);  // X133 slot 52 = 0x41BE70 (body pending)
    virtual AbstractClass** Undeploy();  // X133 slot 53 = 0x5F4D30 (def e4/ObjectClass_e4.cpp)
    virtual AbstractClass** Deploy(int a1, int a2);  // X133 slot 54 = 0x5F4EC0 (def e4/ObjectClass_e4.cpp; arity plumbed)
    virtual AbstractClass** Destroy2(int a1);  // X133 slot 55 = 0x5F5280 (def e4/ObjectClass_e4.cpp; arity plumbed)
    virtual int COMStub_Return0_56(int a1);  // X133 slot 56 = 0x5F42F0 (body pending)
    virtual int COMStub_Return0_57(int a1);  // X133 slot 57 = 0x5F4300 (body pending)
    virtual int ParachuteDrop(int a1);  // X133 slot 58 = 0x5F5940
    virtual void DropAsBomb();  // 0x5F4160  // X133 slot 59
    virtual int SetCellOverlayFlag(int a1);  // X133 slot 60 = 0x5F60A0 (body pending)
    virtual int ClearCellOverlayFlag(int a1);  // X133 slot 61 = 0x5F6120 (body pending)
    virtual int Destroy();  // 0x5F65F0  // X133 slot 62
    virtual int COMStub_Return0_63();  // X133 slot 63 = 0x5F4310 (body pending)
    virtual int COMStub_64(int a1, int a2);  // X133 slot 64 = 0x5F4320 (body pending)
    virtual int CalcDrawRect(int a1, int a2, int a3);  // X133 slot 65 = 0x5F4B10 (def object/gap2_defs.cpp; arity plumbed)
    virtual int GetOrCreateResHandle(int a1);  // X133 slot 66 = 0x5F5B90
    virtual int COMStub_Return0_67(int a1, int a2);  // X133 slot 67 = 0x426440 (body pending)
    virtual int COMStub_Return0_68(int a1, int a2);  // X133 slot 68 = 0x426450 (body pending)
    virtual int StubReturnFalse(int a1, int a2);  // X133 slot 69 = 0x5B3A50 (body pending)
    virtual int DelegateVt69(int a1, int a2);  // X133 slot 70 = 0x5F65D0
    virtual int COMStub_Return0_71();  // X133 slot 71 = 0x5F4330 (body pending)
    virtual int COMStub_Return0_72(int a1, int a2);  // X133 slot 72 = 0x5F4340 (body pending)
    virtual int UpdateProductionDisplay(int a1);  // X133 slot 73 = 0x5F5850
    virtual int GetPlacementScreenRect(int a1);  // X133 slot 74 = 0x5F4730
    virtual RectangleStruct* getBoundsRect(RectangleStruct* out) const;  // 0x5F4870  // X133 slot 75
    virtual int CheckStateFlag(int a1);  // X133 slot 76 = 0x41BE80 (body pending)
    virtual int MarkForRedraw();  // X133 slot 77 = 0x5F4D10
    virtual int IsPlayerOwnedAndCheck();  // X133 slot 78 = 0x5F6C30
    virtual int COMStub_79(int a1, int a2);  // X133 slot 79 = 0x5F6C70 (body pending)
    virtual int COMStub_80(int a1, int a2, int a3, int a4);  // X133 slot 80 = 0x5F4360 (body pending)
    virtual int COMStub_81(int a1, int a2, int a3);  // X133 slot 81 = 0x5F4350 (body pending)
    virtual int COMStub_Return0_82(int a1);  // X133 slot 82 = 0x5F4370 (body pending)
    virtual int HandleSelection();  // X133 slot 83 = 0x5F4520
    virtual bool Remove();  // 0x5F44A0  // X133 slot 84
    virtual int COMStub_Return0_85(int a1, int a2, int a3);  // X133 slot 85 = 0x426460 (body pending)
    virtual int COMStub_Return0_86();  // X133 slot 86 = 0x426470 (body pending)
    virtual int COMStub_Return0_87(int a1);  // X133 slot 87 = 0x426480 (body pending)
    virtual bool COMStub_Return0_88();  // X133 slot 88 = 0x426490 (body pending)
    virtual int COMStub_89(int a1, int a2);  // X133 slot 89 = 0x5F4380 (body pending)
    virtual int COMStub_90(int a1);  // X133 slot 90 = 0x5F4390 (body pending)
    virtual int CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // X133 slot 91 = 0x5F5390 (body pending)
    virtual int COMStub_Return0_92();  // X133 slot 92 = 0x4264A0 (body pending)
    virtual int COMStub_Return0_93(int a1, int a2, int a3);  // X133 slot 93 = 0x5F43A0 (body pending)
    virtual bool StubReturnFalse3();  // X133 slot 94 = 0x5F43B0 (body pending)
    virtual int StubReturnTrue();  // X133 slot 95 = 0x5F43C0 (body pending)
    virtual int COMStub_Return0_96();  // X133 slot 96 = 0x5F43D0 (body pending)
    virtual int processStateUpdate();  // X133 slot 97 = 0x5F43E0 (body pending)
    virtual int CheckStateFlag2(int a1);  // X133 slot 98 = 0x41BE90 (body pending)
    virtual int COMStub_Return0_99(int a1);  // X133 slot 99 = 0x4264B0 (body pending)
    virtual int Fire(int a1, int a2);  // X133 slot 100 = 0x5F5C20
    virtual int ProcessInputKey(int a1, int a2, int a3);  // X133 slot 101 = 0x5F5320
    virtual int IsNotNull(int a1);  // X133 slot 102 = 0x5F5930 (body pending)
    virtual int StubReturnFalse4(int a1);  // X133 slot 103 = 0x5F43F0 (body pending)
    virtual int COMStub_Return0_104(int a1);  // X133 slot 104 = 0x5F4400 (body pending)
    virtual int COMStub_Return0_105(int a1, int a2);  // X133 slot 105 = 0x5F6B50 (body pending)
    virtual int MoveToDirection(int a1);  // X133 slot 106 = 0x5F4410
    virtual int COMStub_107(int a1, int a2, int a3, int a4, int a5);  // X133 slot 107 = 0x4264C0 (body pending)
    virtual int COMStub_108(int a1, int a2, int a3, int a4, int a5);  // X133 slot 108 = 0x4264D0
    virtual int SetPosition(int a1);  // X133 slot 109 = 0x5F6940
    virtual CoordStruct * GetCellCoords_Alt(void *a2 = 0) const;  // X133 slot 110 = 0x41BEA0 (binary); def body 0x44B958 W20M26 retype
    virtual int GetCellCoords();  // X133 slot 111 = 0x5F6960
    virtual int CoordToCell(int a1);  // X133 slot 112 = 0x5F69C0
    virtual CellClass* GetCell() const;  // 0x5F6A10  // X133 slot 113
    virtual int GetZAboveGround();  // X133 slot 114 = 0x5F5F40
    virtual int SetZ(int a1);  // X133 slot 115 = 0x5F5FA0
    virtual int GetMember41();  // X133 slot 116 = 0x5F5F30
    virtual bool COMStub_Return0_117();  // X133 slot 117 = 0x4264E0 (body pending)
    virtual bool COMStub_Return0_118();  // X133 slot 118 = 0x4264F0 (body pending)
    virtual bool COMStub_Return0_119();  // X133 slot 119 = 0x426500 (body pending)
    virtual int getCoordCenter2();  // X133 slot 120 = 0x426510 (int: caller 0x5f4fda compares != -1)
    virtual int COMStub_Return0_121();  // X133 slot 121 = 0x426520 (body pending)

    // --- X133: demoted phantoms (non-virtual; no binary slot in any chain table) ---
    // X133: kept-as-non-virtual (call sites exist; stub defs pending translation)
    ObjectTypeClass* GetType() const;
    void SetLocation(const CoordStruct& coords);
    void MarkAllOccupationBits(const CoordStruct& coords);
    RadioCommand ReceiveCommand(TechnoClass* sender, RadioCommand command, AbstractClass*& inout);
    bool IsSurfaced();
    bool IsStrange() const;
    bool CanBeRepaired() const;
    bool CanBeSold() const;
    bool IsControllable() const;
    bool Put(const CoordStruct& coords, unsigned int face_dir);
    void Reveal();
    void DrawBehind(Point2D* location, RectangleStruct* bounds) const;
    void DrawExtras(Point2D* location, RectangleStruct* bounds) const;
    void Draw(Point2D* location, RectangleStruct* bounds) const;
    void DrawAgain(Point2D* location, RectangleStruct* bounds) const;
    bool CanBeSelected() const;
    bool CanBeSelectedNow() const;
    void Flash(int duration);
    bool Select();
    void Deselect();
    DamageState IronCurtain(int duration, HouseClass* source, bool force_shield);
    bool IsIronCurtained() const;
    int GetWeaponRange(int weapon_idx) const;
    DamageState ReceiveDamage(int* damage, int distance_from_epicenter, WarheadTypeClass* wh,
        ObjectClass* attacker, bool ignore_defenses, bool prevent_passenger_escape, HouseClass* attacking_house);
    void Scatter(const CoordStruct& coords, bool ignore_mission, bool ignore_destination);
    bool Ignite();
    void Extinguish();
    uint32_t GetPointsValue() const;
    void RestoreMission(Mission mission);
    bool DiscoveredBy(HouseClass* house);
    Move IsCellOccupied(CellClass* dest_cell, int facing, int level, CellClass* source_cell, bool alt) const;
    int GetHeight() const;  // 0x556630
    void SetHeight(uint32_t height);
    int GetZ() const;

    // === Non-virtual methods ===
    int DistanceFrom(AbstractClass* that) const;

    double GetHealthPercentage() const;  // X133: demoted (no binary slot; computed inline in binary)

    HealthState GetHealthStatus() const;

    // === Convenience wrappers ===
    // design: inline accessor, inlined at all call sites
    CellStruct GetMapCoordsAgain() const;
    // design: inline accessor, inlined at all call sites
    CoordStruct GetFLH(int weapon_idx, const CoordStruct& base) const;

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

    // AbstractClass fields inherited: +0x00 ptr_0 ptrs (4), +0x10 uniqueId,
    //   +0x14 abstractFlags, +0x18 nextArrayIndex, +0x1C referenceCount,
    //   +0x20 NeedsSaveOrLink (gamemd::UnitClass*), reused as bool in IsDirty, as UnitClass* in updateHarvesting
    //
    // ObjectClass fields start at +0x24:

    uint32_t        occupant;            // +0x24, init from A8E374
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
    int sub_417C80(int a1, void* a2, void* a3, void* a4);  // 0x417C80
    int GetMember41_2();  // 0x41CFA0
    int CleanupAirstrikeTarget(int a1, int a2);  // 0x41D540
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
    int StepCleanup(void* a1);  // 0x5F3E50
    int SetReference(int a1);  // 0x5F5B50
    bool IsYellowHP();  // 0x5F5D20
    bool IsGreenHP();  // 0x5F5D90
    int GetLandHeight();  // 0x5F5F00
    int SetAnim(int a1);  // 0x5F6060
    int ComputeDistance(int a1);  // 0x5F6440
    int* GetCoords(void* out = nullptr, int a3 = 0, int a4 = 0, int a5 = 0, int a6 = 0);  // 0x5F65A0
    int CheckFlagD0(int a1);  // 0x5F6CB0
    bool IsCrushable(void* a1);  // 0x5F6CD0
    int FinalizeCellPlacement(int a1);  // 0x5FC570
    void* RegisterInArray(int a1, int a2, int a3, int a4);  // 0x5FF250
    int ProcessUpdate();  // 0x62BB20
    int SetMember59(int a1);  // 0x6301F0
    int ProcessGroupInput(int a1, int a2, int a3);  // 0x65A820
    int ThunkTo636(int a2 = 0, int a3 = 0);  // 0x65AAA0
    int ThunkTo159x4(int a2 = 0);  // 0x65ACB0
    void* GetSidebarTooltip(int a1);  // 0x6A92E0
    void* GetTooltipText(int a1);  // 0x6AC210
    void* DestructWithRadar(int a1);  // 0x6AC7F0
    int PreDraw();  // 0x6D0F00
    void* ComputeDelta(void* a1);  // 0x6D6190
    int Render(int a1, int a2, int a3, int a4);  // 0x6E1440
    int ReadINIEntry(int a1, int a2, int a3, int a4);  // 0x6E15F0
    int Get(int a1);  // 0x6EC130
    gamemd::TechnoTypeClass * Vt34Thunk();  // 0x6F3270 (IDA int(); 0x70142a [ret+A0]=Strength, 0x710695 [ret+564h]=EnterTransportSound) (W20M26 retype: PR 0x70142a [ret+0xA0]=Strength)
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
    int DistanceTo(int a1);  // 0x5f6360 -- ObjectClass::DistanceTo
    int CreateInstance();  // 0x5f6dc0 -- ObjectClass::CreateInstance
    int FindClosestObjectCell(unsigned int *a2, char a3, int a4);
    int FindObjectCell(int a1, int a2);  // 0x47c5a0 -- Object::FindObjectCell
    int IsAlliedWithObjectHouse(int a2);
    bool IsAlliedWithObjectSimpleHouse(void *a1);  // 0x4f9af0 gB truth: unsigned char* a2 -- Object::IsAlliedWithObjectSimpleHouse
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

    int DumpAudioDeviceDebug(void (__thiscall *a2)(char *), int a1, int a3);  // 0x403A80 (G42.39a supply)



    int CreateInstanceCOM(IID * rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext);  // 0x41C250 (G57w10 raw truth: int thiscall(IID*, LPUNKNOWN, DWORD))
    int Release2COM();  // 0x45A160 (G42.39 supply)

    int COMStub_48DEB0();  // 0x48DEB0 (G42.39 supply)
    char * TerrainInitMap(char * Destination, gamemd::RandomStruct * aP1, ::IUnknown * aP2);  // G42.39 supply

    char * BuildResultPacket(char * Destination, char * Source, ::IUnknown * aP2);  // G42.39 supply

    int Release3COM();  // 0x4D0430 (G42.39 supply)

    int GetResourceID2CSF();  // G42.39 supply
    int GetResourceIDCSF();  // G42.39 supply
    int GetResourceID3CSF();  // G42.39 supply
    int GetResourceID4CSF();  // G42.39 supply

    bool WinMain_Helper_53E4F0(char* FileName);  // G42.39 supply

    bool WinMain_Write(char* FileName);  // G42.39 supply

    int CollectMatchingTileCells( unsigned short * a1, int a3, int a4, void * aP4, int a6, int a7, ::IUnknown * aP7, int aP4a);  // G42.39 supply

    int ReadMPMapsINI(char* Source);  // G42.39 supply

    int LoadSHPFile(int lpBuffer, char* Source);  // G42.39 supply

    char* Team_Helper_6F26E0(char* Block, char a2);  // G42.39 supply

    int QueueTechnoVoiceLine( TechnoClass * aP1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, TechnoClass * aP5, TechnoClass * aP6, TechnoClass * aP7, TechnoClass * aP8, TechnoClass * aP9, TechnoClass * aP10, TechnoClass * aP11);  // G42.39 supply

    void* RenderTechnoOverlaySHP( TechnoClass * aP1, int a3, TechnoClass * aP3, int a5, TechnoClass * aP5, TechnoClass * aP6, int a8, char a9, TechnoClass * aP9, TechnoClass * aP10, int a12);  // G42.39 supply
    void* ptr_0;  // 0x0 (ml truth)  gB ptr_0 supply
    void* ptr_8;  // 0x8 (ml truth)  gB ptr_0 supply
public:  // g57c5 W6 owner supply
    unsigned int u32_61;  // 0x61 g57c5 W6 (ml ObjectClass@0x61 own)
public:  // g57c5 W6 owner supply
    unsigned int q0AB;  // 0xAB g57c5 W6 (ml ObjectClass@0xAB own)

    void* NeedsSaveOrLink;  // X10 supply (csp_canon_members)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    void* nextArrayIndex;  // X10 supply (csp_canon_members)
    unsigned int objectTypeFlags;  // X10 supply (csp_canon_members)
    char * ptr_6D;  // X10 supply (member_lookup)
    unsigned int q0A0;  // X10 supply (member_lookup)
    unsigned int q0B1;  // X10 supply (member_lookup)
    unsigned int q0B2;  // X10 supply (member_lookup)
    unsigned int q0C8;  // X10 supply (member_lookup)
    unsigned int q0D8;  // X10 supply (member_lookup)
    Audio* q0E8;  // X10 supply (member_lookup)
    void* q0EC;  // X10 supply (member_lookup)
    void* q13F0;  // X10 supply (member_lookup)  // X27: template-carrier
    unsigned char q1680;  // X10 supply (member_lookup)
    IUnknown* q55C;  // X10 supply (member_lookup)
    unsigned char qBC0;  // X10 supply (member_lookup)
    void* referenceCount;  // X10 supply (csp_canon_members)
    unsigned int u32_11B;  // X10 supply (member_lookup)
    unsigned int u32_11C;  // X10 supply (member_lookup)
    unsigned int u32_124;  // X10 supply (member_lookup)
    unsigned int u32_12C;  // X10 supply (member_lookup)
    unsigned int u32_12D;  // X10 supply (member_lookup)
    unsigned int u32_130;  // X10 supply (member_lookup)
    unsigned int u32_131;  // X10 supply (member_lookup)
    unsigned int u32_1ED0;  // X10 supply (member_lookup)
    unsigned int u32_29;  // X10 supply (member_lookup)
    int u32_539C;  // X10 supply (member_lookup)
    int u32_53EC;  // X10 supply (member_lookup)
    unsigned int u32_5545;  // X10 supply (member_lookup)
    unsigned int u32_63C;  // X10 supply (member_lookup)
    unsigned int u32_640;  // X10 supply (member_lookup)
    unsigned int u32_644;  // X10 supply (member_lookup)
    unsigned int u32_64C;  // X10 supply (member_lookup)
    unsigned int u32_650;  // X10 supply (member_lookup)
    unsigned int u32_654;  // X10 supply (member_lookup)
    unsigned int u32_658;  // X10 supply (member_lookup)
    unsigned int u32_65C;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D64;  // X10 supply (member_lookup)
    unsigned int u32_D68;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    int u8_11E;  // X10 supply (member_lookup)
    int u8_CD;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)

    unsigned int u32_100;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_E4_OWNS_ObjectClass (X10)


} // namespace game
} // namespace ra2
