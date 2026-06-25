#pragma once

#include <unknwn.h>
#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "core/interfaces.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

class FootClass;
class DirStruct;

//============================================================================
// Timer types matching binary layout (MSVC 6.0, 32-bit)
//============================================================================

// CDTimerClass — frame-based countdown timer (12 bytes)
// Layout: StartTime(4) | CurrentTime(4, no data) | TimeLeft(4)
struct CDTimerClass {
    int32_t StartTime;
    int32_t pad_04;     // FrameTimer (empty, occupies 1B + 3B padding)
    int32_t TimeLeft;
};
static_assert(sizeof(CDTimerClass) == 0xC, "CDTimerClass size");
static_assert(offsetof(CDTimerClass, TimeLeft) == 0x8, "CDTimerClass TimeLeft offset");

// RateTimer — CDTimerClass with configurable rate (16 bytes)
struct RateTimer : CDTimerClass {
    int32_t Rate;
};
static_assert(sizeof(RateTimer) == 0x10, "RateTimer size");

// FacingClass — directional rotation state (24 bytes)
// Uses uint32_t instead of DirStruct to avoid cross-namespace dependency
struct FacingClass {
    uint32_t DesiredFacing;     // DirStruct
    uint32_t StartFacing;       // DirStruct — starting direction for rotation
    CDTimerClass RotationTimer; // counts down during rotation
    uint32_t ROT;               // DirStruct — Rate Of Turn
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Update(int a1);  // 0x4c9220 -- FacingClass::Update
    int Set_SyncLog(int a1);  // 0x4c9300 -- FacingClass::Set_SyncLog
    // === SYMBOL-ANCHOR (END) ===
};
static_assert(sizeof(FacingClass) == 0x18, "FacingClass size");

//============================================================================
// CLSID constants (from .rdata section @ 0x7E9A30+)
//============================================================================
namespace LocomotorCLSID
{
    // {4A582743-9839-11d1-B709-00A024DDAFD1}
    inline constexpr GUID Drive   = { 0x4A582743, 0x9839, 0x11D1, { 0xB7, 0x09, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {4A582744-9839-11d1-B709-00A024DDAFD1}
    inline constexpr GUID Hover   = { 0x4A582744, 0x9839, 0x11D1, { 0xB7, 0x09, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {4A582745-9839-11d1-B709-00A024DDAFD1}
    inline constexpr GUID Tunnel  = { 0x4A582745, 0x9839, 0x11D1, { 0xB7, 0x09, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {4A582746-9839-11d1-B709-00A024DDAFD1}
    inline constexpr GUID Fly     = { 0x4A582746, 0x9839, 0x11D1, { 0xB7, 0x09, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {4A582747-9839-11d1-B709-00A024DDAFD1}
    inline constexpr GUID Teleport = { 0x4A582747, 0x9839, 0x11D1, { 0xB7, 0x09, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {B7B49766-E576-11d3-9BD9-00104B972FE8}
    inline constexpr GUID Rocket  = { 0xB7B49766, 0xE576, 0x11D3, { 0x9B, 0xD9, 0x00, 0x10, 0x4B, 0x97, 0x2F, 0xE8 } };
    // {55D58B90-6F7A-11D3-B3EE-00A024DDAFD1}
    inline constexpr GUID Jumpjet = { 0x55D58B90, 0x6F7A, 0x11D3, { 0xB3, 0xEE, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {55D58B91-6F7A-11D3-B3EE-00A024DDAFD1}
    inline constexpr GUID Walk    = { 0x55D58B91, 0x6F7A, 0x11D3, { 0xB3, 0xEE, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {55D58B92-6F7A-11D3-B3EE-00A024DDAFD1}
    inline constexpr GUID Mech    = { 0x55D58B92, 0x6F7A, 0x11D3, { 0xB3, 0xEE, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {55D58B93-6F7A-11D3-B3EE-00A024DDAFD1}
    inline constexpr GUID Ship    = { 0x55D58B93, 0x6F7A, 0x11D3, { 0xB3, 0xEE, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
    // {55D58B94-6F7A-11D3-B3EE-00A024DDAFD1}
    inline constexpr GUID DropPod = { 0x55D58B94, 0x6F7A, 0x11D3, { 0xB3, 0xEE, 0x00, 0xA0, 0x24, 0xDD, 0xAF, 0xD1 } };
} // namespace LocomotorCLSID

//============================================================================
// LocomotionClass — abstract base for all locomotion types
// Base = 0x18 bytes (2 vtable ptrs + 4 data fields)
//============================================================================
class LocomotionClass : public IPersistStream, public ILocomotion
{
public:
    // IUnknown (implemented per-class)
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override
    {
        if (!ppv) return E_POINTER;
        if (iid == IID_IUnknown) { *ppv = static_cast<IUnknown*>(static_cast<ILocomotion*>(this)); AddRef(); return S_OK; }
        if (iid == IID_IPersistStream) { *ppv = static_cast<IPersistStream*>(this); AddRef(); return S_OK; }
        *ppv = static_cast<ILocomotion*>(this); AddRef(); return S_OK;  // 0x54df50
    }
    // design: inline accessor, inlined at all call sites
    virtual ULONG __stdcall AddRef() override { return ++RefCount; }
    // design: inline accessor, inlined at all call sites
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

    // IPersistStream
    // design: pure virtual function, no binary implementation
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) = 0;                          // pure, per-class
    virtual HRESULT __stdcall IsDirty() override { return Dirty ? S_OK : S_FALSE; }     // 0x4B4C30
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }           // 0x55AAC0
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override
    {
        if (!stream) return E_POINTER;
        HRESULT hr = stream->Write((const char*)this + 8, Size(), nullptr);
        if (SUCCEEDED(hr) && clear_dirty) Dirty = false;
        return hr;
    }
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override
    {
        if (!size) return E_POINTER;
        size->QuadPart = Size();
        return S_OK;
    }

    // ILocomotion
    virtual HRESULT __stdcall Link_To_Object(void* pointer) override
    {
        LinkedTo = static_cast<FootClass*>(pointer);
        return S_OK;
    }
    virtual bool __stdcall Is_Moving() override { return false; }                        // 0x55ACD0
    // unmatched: no callgraph reference and no git history record
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override
    {
        if (!out) return nullptr;
        *out = {};
        return out;
    }                                         // 0x55AC70
    virtual CoordStruct* __stdcall Head_To_Coord(CoordStruct* out) override
    {
        if (!out) return nullptr;
        *out = {};
        return out;
    }                                       // 0x55ACA0
    virtual Move __stdcall Can_Enter_Cell(CellStruct cell) override { return Move::OK; } // 0x55ABF0
    virtual bool __stdcall Is_To_Have_Shadow() override { return true; }                 // 0x55ABE0
    virtual Matrix3D* __stdcall Draw_Matrix(Matrix3D* out, int* key) override
    {
        if (!out) return nullptr;
        std::memset(out, 0, sizeof(Matrix3D));
        if (key) *key = 0;
        return out;
    }                                    // 0x55A730
    virtual Matrix3D* __stdcall Shadow_Matrix(Matrix3D* out, int* key) override
    {
        return Draw_Matrix(out, key);
    }                                  // 0x55A7D0
    virtual Point2D* __stdcall Draw_Point(Point2D* out) override
    {
        if (!out) return nullptr;
        out->X = 0; out->Y = 0;
        return out;
    }                                 // 0x55ABD0
    virtual Point2D* __stdcall Shadow_Point(Point2D* out) override
    {
        return Draw_Point(out);
    }                               // 0x55A8C0
    virtual VisualType __stdcall Visual_Character(VARIANT_BOOL unused) override { return VisualType::Normal; } // 0x55ABC0
    virtual int __stdcall Z_Adjust() override { return 0; }                              // 0x55ABA0
    virtual ZGradient __stdcall Z_Gradient() override { return ZGradient::Deg90; }       // 0x55ABB0
    virtual bool __stdcall Process() override { return true; }                           // 0x55AC60
    virtual void __stdcall Move_To(CoordStruct to) override {}                           // 0x55AC50
    virtual void __stdcall Stop_Moving() override {}                                     // 0x55AC40
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                    // 0x55AC30
    virtual void __stdcall Unlimbo() override {}                                         // 0x55AC20
    virtual void __stdcall Tilt_Pitch_AI() override {}                                   // 0x55AB90
    virtual bool __stdcall Power_On() override { Powered = true; return Is_Powered(); }  // 0x55A8F0
    virtual bool __stdcall Power_Off() override { Powered = false; return Is_Powered(); }// 0x55A910
    virtual bool __stdcall Is_Powered() override { return Powered; }                     // 0x55A930
    virtual bool __stdcall Is_Ion_Sensitive() override { return false; }                 // 0x55A940
    virtual bool __stdcall Push(unsigned short dir) override { return false; }           // 0x55AB70
    virtual bool __stdcall Shove(unsigned short dir) override { return false; }          // 0x55AB80
    virtual void __stdcall Force_Track(int track, CoordStruct coord) override {}         // 0x55AC10
    virtual void __stdcall Force_Immediate_Destination(CoordStruct coord) override {}     // 0x55AC00
    virtual void __stdcall Force_New_Slope(int ramp) override {}                         // 0x55ACE0
    virtual bool __stdcall Is_Moving_Now() override { return Is_Moving(); }              // 0x4B6610
    virtual int __stdcall Apparent_Speed() override { return 0; }
    virtual int __stdcall Drawing_Code() override { return 0; }                          // 0x55ACF0
    virtual FireError __stdcall Can_Fire() override { return FireError::OK; }            // 0x55AD00
    virtual int __stdcall Get_Status() override { return 0; }                            // 0x4B4C60
    virtual void __stdcall Acquire_Hunter_Seeker_Target() override {}                    // 0x4B4C70
    virtual bool __stdcall Is_Surfacing() override { return false; }                     // 0x4B4C80
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}                // 0x4B6620
    virtual bool __stdcall Is_Moving_Here(CoordStruct to) override { return false; }     // 0x4B6630
    virtual bool __stdcall Will_Jump_Tracks() override { return false; }                 // 0x4B6640
    virtual bool __stdcall Is_Really_Moving_Now() override { return Is_Moving_Now(); }   // 0x4B4C50
    virtual void __stdcall Stop_Movement_Animation() override {}                         // 0x4B4C90
    virtual void __stdcall Lock() override {}                                            // 0x4B6650
    virtual void __stdcall Unlock() override {}                                          // 0x4B6660
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x4B4CA0 (aka Limbo in YRpp)
    virtual int __stdcall Get_Track_Number() override { return -1; }                     // 0x4B6670
    virtual int __stdcall Get_Track_Index() override { return -1; }                      // 0x4B6680
    virtual int __stdcall Get_Speed_Accum() override { return -1; }                      // 0x4B6690

    // design: inline accessor, inlined at all call sites
    virtual ~LocomotionClass() {} // COM objects use Release(), no base virtual dtor to override

    virtual int Size() = 0;  // 0x454190 — override: BuildingClass::Size

    static HRESULT CreateInstance(
        ILocomotion** ppv,
        const CLSID* clsid,
        IUnknown* outer,
        uint32_t cls_context)
    {
        (void)ppv; (void)clsid; (void)outer; (void)cls_context;
        return CLASS_E_CLASSNOTAVAILABLE;
    }

    // unmatched: no callgraph reference and no git history record
    static void ChangeLocomotorTo(FootClass* object, const CLSID& clsid)
    {
        if (!object) return;
        ILocomotion* new_loco = nullptr;
        if (SUCCEEDED(CreateInstance(&new_loco, &clsid, nullptr, 0)))
        {
            new_loco->Link_To_Object(object);
            object->locomotor = new_loco;  // requires full FootClass definition
        }
    }

    // Fields (offset from vtable[0])
    // 0x04: vtable[1] (IPersistStream/COM)
    FootClass*   Owner;      // 0x08
    FootClass*   LinkedTo;   // 0x0C
    bool         Powered;    // 0x10
    bool         Dirty;      // 0x11
    // padding 2 bytes 0x12-0x13
    int32_t      RefCount;   // 0x14

protected:
    LocomotionClass() = default;  // 0x4cc9a0
    explicit LocomotionClass(noinit_t) noexcept {}  // 0x4CC9A0
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Initialize();  // 0x4af540 -- LocomotionClass::Initialize
    int CheckBridgeBlock();  // 0x4cfa70 -- LocomotionClass::CheckBridgeBlock
    double GetSpeedMultiplier();  // 0x4dc760 -- LocomotionClass::GetSpeedMultiplier
    void* ProcessMove(int a1);  // 0x5172f0 -- LocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* UpdateAll();  // 0x4c54a0
    // === FUNCS-MOVE (END) ===
};

//============================================================================
// ILocoVTable — vtable pointer constants for locomotion_cast verification
//============================================================================
namespace ILocoVTable
{
    inline constexpr uintptr_t Drive   = 0x7E7EB0;
    inline constexpr uintptr_t Hover   = 0x7EACFC;
    inline constexpr uintptr_t Walk    = 0x7F69F8;
    inline constexpr uintptr_t Fly     = 0x7E89F4;
    inline constexpr uintptr_t Rocket  = 0x7F0B1C;
    inline constexpr uintptr_t Jumpjet = 0x7ECD68;
    inline constexpr uintptr_t Ship    = 0x7F2D8C;
    inline constexpr uintptr_t Teleport = 0x7F5000;
    inline constexpr uintptr_t Tunnel  = 0x7F5A24;
    inline constexpr uintptr_t DropPod = 0x7E8278;
    // Mech: vtable @ 0x7EDB6C (no IPiggyback ILocoVTable constant)
} // namespace ILocoVTable

//============================================================================
// DriveLocomotionClass — wheeled/tracked ground locomotion
// sizeof = 0x70 (base 0x18 + 0x58 data)
//============================================================================
class DriveLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    // IUnknown (shared with base)
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(this); AddRef(); return S_OK; } return E_POINTER; }  // 0x4AF720
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x4B4CB0
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x4B4CC0

    // IPersistStream
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x5b01c0
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { if (!stream) return E_POINTER; HRESULT hr = stream->Write((const char*)this + 0x18, Size() - 0x18, nullptr); if (SUCCEEDED(hr) && clear_dirty) Dirty = false; return hr; }

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // 0x45AF20
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }
    virtual bool __stdcall Is_Ok_To_End() override { return false; }
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }                // 0x4AF610
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // 0x4af610

    // ILocomotion overrides
    virtual bool __stdcall Is_Moving() override { return false; }              // 0x4AFB80
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x4aed70
    virtual bool __stdcall Process() override { return false; }                // 0x4B4870
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }  // 0x4B4880
    virtual void __stdcall Stop_Moving() override {}            // 0x4af2a0
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x4aed70
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x4af380
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x4AF3A0 (Limbo)

    virtual ~DriveLocomotionClass() {}  // 0x4B4830

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    int           CurrentRamp;        // 0x18
    int           PreviousRamp;       // 0x1C
    RateTimer     SlopeTimer;         // 0x20
    CoordStruct   Dest;        // 0x30
    CoordStruct   HeadToCoord;        // 0x3C
    int           SpeedAccum;         // 0x48
    // padding 4 bytes            // 0x4C-0x4F
    double        MovementSpeed;      // 0x50
    int           TrackNumber;        // 0x58
    int           TrackIndex;         // 0x5C
    bool          IsOnShortTrack;     // 0x60
    uint8_t       IsTurretLockedDown; // 0x61
    bool          IsRotating;         // 0x62
    bool          IsDriving;          // 0x63
    bool          IsRocking;          // 0x64
    bool          UnLocked;           // 0x65
    // padding 2 bytes            // 0x66-0x67
    ILocomotion*  Piggybackee;        // 0x68

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    DriveLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit DriveLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x4b4d00 -- DriveLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove();  // 0x4af780
    int LoadFromStream();  // 0x4af800
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(DriveLocomotionClass) == 0x70, "DriveLocomotionClass size");

//============================================================================
// HoverLocomotionClass — hovercraft locomotion
//============================================================================
class HoverLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x513D00
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x513c20

    virtual bool __stdcall Is_Moving() override { return false; }              // 0x513c20
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x513c20
    virtual bool __stdcall Process() override { return false; }                // 0x513d20
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }  // 0x513f40
    virtual void __stdcall Stop_Moving() override {}            // 0x513f40
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x513c20
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x513f40
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x513f40 (Limbo)

    virtual ~HoverLocomotionClass() override = default;  // 0x517070

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    CoordStruct   Dest;        // 0x18
    CoordStruct   HeadToCoord;        // 0x24
    FacingClass   LocomotionFacing;   // 0x30
    double        MaxSpeed;           // 0x48
    double        CurrentSpeed;       // 0x50
    double        BoostSpeed;         // 0x58
    double        CurrentWobbles;     // 0x60
    bool          HoverLocomotionClass_field_bool_68;    // 0x68
    // padding 3 bytes            // 0x69-0x6B
    int32_t       HoverLocomotionClass_field_6C;         // 0x6C
    bool          HoverLocomotionClass_field_bool_70;    // 0x70
    // padding 3 bytes            // 0x71-0x73

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    HoverLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit HoverLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x5172c0 -- HoverLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove(int a1, int a2);  // 0x5170b0
    // === FUNCS-MOVE (END) ===
};

//============================================================================
// WalkLocomotionClass — infantry/shambler leg locomotion
// sizeof = 0x3C (base 0x18 + 0x24 data)
//============================================================================
class WalkLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x75C7F0
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x75CB80
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x75CB90

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x75A9E0
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x75A950

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // 0x75ab40
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }          // 0x75AC00
    virtual bool __stdcall Is_Ok_To_End() override { return false; }                                   // 0x75ac00
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }                // 0x75ac00
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // 0x75ac00

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x75A8F0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x758ea0
    virtual bool __stdcall Process() override { return false; }                                        // 0x75ae30
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x75aec0
    virtual void __stdcall Stop_Moving() override {}                                    // 0x75aec0
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x757980
    virtual bool __stdcall Is_Moving_Now() override { return false; }                                  // 0x759260
    virtual bool __stdcall Is_Really_Moving_Now() override { return false; }                           // 0x759260
    virtual void __stdcall Stop_Movement_Animation() override {}                        // 0x75aec0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x75c240
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x75c240 (Limbo)

    virtual ~WalkLocomotionClass() override = default;  // 0x75C640

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    CoordStruct   Dest;        // 0x18
    CoordStruct   HeadToCoord;        // 0x24
    bool          IsMoving;           // 0x30
    bool          IsInProcessing;     // 0x31
    bool          IsReallyMoving;     // 0x32
    // padding 1 byte             // 0x33
    ILocomotion*  Piggybackee;        // 0x34

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    WalkLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit WalkLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x75cbe0 -- WalkLocomotionClass::ProcessMove
    int MoveTo(int a1, int a2);  // 0x6a01a0 -- WalkLocomotion::MoveTo
    int ProcessCollision(int a1);  // 0x6a05f0 -- WalkLocomotion::ProcessCollision
    int Update(int a1, int a2, int a3);  // 0x6a1c80 -- WalkLocomotion::Update
    void* TransformCoords(int a1, int a2, int a3);  // 0x6a3db0 -- WalkLocomotion::TransformCoords
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int SetWaypointTarget(int a1, int a2, int a3, int a4);  // 0x6a0310
    bool IsAtDestination(int a1, int a2, int a3, int a4);  // 0x6a3f50
    int BeginMove();  // 0x75c680
    int LoadFromStream();  // 0x75c700
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(WalkLocomotionClass) == 0x3C, "WalkLocomotionClass size");

//============================================================================
// FlyLocomotionClass — fixed-wing aircraft locomotion
//============================================================================
class FlyLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x55A9B0
    // design: inline accessor, inlined at all call sites
    virtual ULONG __stdcall AddRef() override { return ++RefCount; }
    // design: inline accessor, inlined at all call sites
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x4cc940
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x4cc8a0

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x4cc9a0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x4CCA70
    virtual bool __stdcall Process() override { return false; }                                        // 0x4ccac0
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x4cd2a0
    virtual void __stdcall Stop_Moving() override {}                                    // 0x4cd2a0
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x4cc9a0
    virtual Layer __stdcall In_Which_Layer() override { return static_cast<Layer>(0); }                                // 0x4cc9a0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x4cd2a0
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x4cd510 (Limbo)

    virtual ~FlyLocomotionClass() override = default;  // 0x4CFC80

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    bool           AirportBound;       // 0x18
    // padding 3 bytes            // 0x19-0x1B
    CoordStruct    MovingDestination;  // 0x1C
    CoordStruct    XYZ2;               // 0x28
    bool           HasMoveOrder;       // 0x34
    // padding 3 bytes            // 0x35-0x37
    int32_t        FlightLevel;        // 0x38
    double         TargetSpeed;        // 0x40
    double         CurrentSpeed;       // 0x48
    int8_t         IsTakingOff;        // 0x50
    bool           IsLanding;          // 0x51
    bool           WasLanding;         // 0x52
    bool           FlyLocomotionClass_field_bool_53;    // 0x53
    uint32_t       FlyLocomotionClass_field_54;         // 0x54
    uint32_t       FlyLocomotionClass_field_58;         // 0x58
    bool           IsElevating;        // 0x5C
    bool           FlyLocomotionClass_field_bool_5D;    // 0x5D
    bool           FlyLocomotionClass_field_bool_5E;    // 0x5E
    bool           FlyLocomotionClass_field_bool_5F;    // 0x5F

protected:
    FlyLocomotionClass() = default;
    // design: inline accessor, inlined at all call sites
    explicit FlyLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x4d03a0 -- FlyLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove(int a1, int a2);  // 0x4cfcc0
    void ILocomotion_AcquireHunterSeekerTarget(int a1);  // 0x4cfe80
    // === FUNCS-MOVE (END) ===
};

//============================================================================
// RocketLocomotionClass — V3/Dreadnought rocket locomotion
//============================================================================
class RocketLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x664AC0
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x664810
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x664990

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x661EC0
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x661DF0

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x661ec0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x661F90
    virtual bool __stdcall Process() override { return false; }  // 0x69ec50
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x6622c0
    virtual void __stdcall Stop_Moving() override {}                                    // 0x6622c0
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x661ec0
    virtual Layer __stdcall In_Which_Layer() override { return static_cast<Layer>(0); }                                // 0x661ec0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x6622c0
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x6622c0 (Limbo)

    virtual ~RocketLocomotionClass() override = default;  // 0x6633D0

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    CoordStruct   MovingDestination;   // 0x18
    RateTimer     MissionTimer;        // 0x24
    CDTimerClass  TrailerTimer;        // 0x34
    int32_t       MissionState;        // 0x40
    uint32_t      RocketLocomotionClass_field_44;          // 0x44
    double        CurrentSpeed;        // 0x48
    bool          RocketLocomotionClass_field_bool_4C;     // 0x50
    bool          SpawnerIsElite;      // 0x51
    // padding 2 bytes            // 0x52-0x53
    float         CurrentPitch;        // 0x54
    uint32_t      RocketLocomotionClass_field_58;          // 0x58
    uint32_t      RocketLocomotionClass_field_5C;          // 0x5C

protected:
    RocketLocomotionClass() = default; // 0x661EC0
    explicit RocketLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}  // 0x661EC0
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x6635c0 -- RocketLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove(int a1, int a2);  // 0x663410
    // === FUNCS-MOVE (END) ===
};

//============================================================================
// JumpjetLocomotionClass — Jumpjet infantry/vehicle locomotion
// sizeof = 0x98 (base 0x18 + 0x80 data)
//============================================================================
class JumpjetLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    enum State : int32_t
    {
        Grounded  = 0,
        Ascending = 1,
        Hovering  = 2,
        Cruising  = 3,
        Descending = 4,
        Crashing  = 5,
        Unknown   = 6,
    };

    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; } // 0x54DC60
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x54DF50
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x54DF60

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x54A850

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // 0x54a4f0
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }          // 0x54a5d0
    virtual bool __stdcall Is_Ok_To_End() override { return false; }                                   // 0x54a630
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }                // 0x54a630
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // 0x54a630

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x54ac40
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x54AD30
    virtual bool __stdcall Process() override { return false; }                                        // 0x54ad30
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x54b8d0
    virtual void __stdcall Stop_Moving() override {}                                    // 0x54b8d0
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x54ac40
    virtual Layer __stdcall In_Which_Layer() override { return static_cast<Layer>(0); }                                // 0x54ac40
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x54b980
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x54ba30 (Limbo)

    // wrapper: delegates to UpdateFootMovement at 0x54BA30
    virtual ~JumpjetLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    int32_t       TurnRate;           // 0x18
    int32_t       Speed;              // 0x1C
    float         Climb;              // 0x20
    float         Crash;              // 0x24
    int32_t       Height;             // 0x28
    float         Accel;              // 0x2C
    float         Wobbles;            // 0x30
    int32_t       Deviation;          // 0x34
    bool          NoWobbles;          // 0x38
    uint8_t       JumpjetLocomotionClass_field_3D;         // 0x39
    uint8_t       JumpjetLocomotionClass_field_3E;         // 0x3A
    uint8_t       JumpjetLocomotionClass_field_3F;         // 0x3B
    CoordStruct   DestinationCoords;  // 0x3C
    bool          IsMoving;           // 0x48
    uint8_t       JumpjetLocomotionClass_field_4D;         // 0x49
    uint8_t       JumpjetLocomotionClass_field_4E;         // 0x4A
    uint8_t       JumpjetLocomotionClass_field_4F;         // 0x4B
    State         CurrentState;       // 0x4C
    FacingClass   LocomotionFacing;   // 0x50
    uint8_t       JumpjetLocomotionClass_field_6C;         // 0x68
    uint8_t       JumpjetLocomotionClass_field_6D;         // 0x69
    uint8_t       JumpjetLocomotionClass_field_6E;         // 0x6A
    uint8_t       JumpjetLocomotionClass_field_6F;         // 0x6B
    // 4-byte alignment pad       // 0x6C-0x6F
    double        CurrentSpeed;       // 0x70
    double        MaxSpeed;           // 0x78
    int32_t       CurrentHeight;      // 0x80
    uint8_t       JumpjetLocomotionClass_field_84;         // 0x84
    uint8_t       JumpjetLocomotionClass_field_85;         // 0x85
    uint8_t       JumpjetLocomotionClass_field_86;         // 0x86
    uint8_t       JumpjetLocomotionClass_field_87;         // 0x87
    double        CurrentWobbles;     // 0x88
    bool          DestinationReached; // 0x90
    uint8_t       JumpjetLocomotionClass_field_91;         // 0x91
    uint8_t       JumpjetLocomotionClass_field_92;         // 0x92
    uint8_t       JumpjetLocomotionClass_field_93;         // 0x93
    ILocomotion*  Piggybackee;        // 0x94

protected:
    JumpjetLocomotionClass() = default;
    // design: inline accessor, inlined at all call sites
    explicit JumpjetLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    double ComputeVectorLengthMetric();  // 0x439a10 -- JumpjetLocomotionClass::ComputeVectorLengthMetric
    int Update2();  // 0x439b00 -- JumpjetLocomotionClass::Update2
    void ComputeVectorLengthMetric_0();  // 0x43a130 -- JumpjetLocomotionClass::ComputeVectorLengthMetric_0
    int AdjustClimbFacing(int a1);  // 0x4848b0 -- JumpjetLocomotionClass::AdjustClimbFacing
    int FindClosestOccupiableCell();  // 0x485080 -- JumpjetLocomotionClass::FindClosestOccupiableCell
    bool StubReturnZero_5();  // 0x4c94b0 -- JumpjetLocomotionClass::StubReturnZero_5
    bool StubReturnZero_6();  // 0x4c94f0 -- JumpjetLocomotionClass::StubReturnZero_6
    void ProcessRotation();  // 0x4ce5a0 -- JumpjetLocomotionClass::ProcessRotation
    int CheckWindowsErrorWrapper_0();  // 0x4d0400 -- JumpjetLocomotionClass::CheckWindowsErrorWrapper_0
    void* ProcessLanding(int a1, int a2);  // 0x54d6d0 -- JumpjetLocomotionClass::ProcessLanding
    int GetFloorZSetContext();  // 0x54d820 -- JumpjetLocomotionClass::GetFloorZSetContext
    void* ProcessAttach(int a1);  // 0x54dfa0 -- JumpjetLocomotionClass::ProcessAttach
    void* ClampToCellBounds(int a1, int a2, int a3);  // 0x586ac0 -- JumpjetLocomotionClass::ClampToCellBounds
    int StubReturnZero_16();  // 0x709480 -- JumpjetLocomotionClass::StubReturnZero_16
    void* ConstructLocomotor(int a1);  // 0x71a130 -- JumpjetLocomotionClass::ConstructLocomotor
    int ConvertCoordToCell_3(int a1, int a2);  // 0x72a090 -- JumpjetLocomotionClass::ConvertCoordToCell_3
    int MoveTo(int a1, int a2);  // 0x4b0ad0 -- JumpjetLocomotion::MoveTo
    int ProcessCollision(int a1);  // 0x4b0f20 -- JumpjetLocomotion::ProcessCollision
    int Update(int a1, int a2, int a3);  // 0x4b2630 -- JumpjetLocomotion::Update
    void* TransformCoords(int a1, int a2, int a3);  // 0x4b4780 -- JumpjetLocomotion::TransformCoords
    int Land();  // 0x54ca90 -- JumpjetLocomotion::Land
    int UpdateFacing();  // 0x54d0f0 -- JumpjetLocomotion::UpdateFacing
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int IUnknownAddRef();  // 0x71a0e0
    int IUnknownRelease();  // 0x71a0f0
    int StubReturnZero(int a1, int a2);  // 0x4af8e0
    int StubReturnZero_0(int a1, int a2);  // 0x4af930
    bool CheckPiggybackState(int a1);  // 0x4af970
    void* InitMovementState(int a1, int a2);  // 0x4afb40
    bool StubReturnTrue_0(int a1);  // 0x4afc20
    void* GetCoordinate(int a1, int a2);  // 0x4afc90
    void* GetRenderCoordinate(int a1, int a2);  // 0x4afcc0
    void* ConvertCoordToCell(int a1, int a2, int a3, int a4);  // 0x4afd40
    int CheckWindowsErrorWrapper(int a1);  // 0x4afe00
    void* ComputeVoxelTransform(int a1, int a2, int a3);  // 0x4aff60
    void* ComputeAudio3DRotation(int a1, int a2, int a3);  // 0x4b0410
    int DispatchVirtualCall(int a1);  // 0x4b04d0
    int SetWaypointTarget(int a1, int a2, int a3, int a4);  // 0x4b0c40
    int UpdateFacingDirection(int a1, int a2);  // 0x4b0ef0
    int StubReturnTwo(int a1);  // 0x4b4820
    int MoveToChecked(int a1, int a2);  // 0x4b48d0
    bool IsAtDestination(int a1, int a2, int a3, int a4);  // 0x4b4920
    int StubReturnZero_2(int a1);  // 0x4b4b00
    int SetByteField(int a1);  // 0x4b4be0
    int SetByteField_0(int a1);  // 0x4b4bf0
    int GetField_0x54(int a1);  // 0x4b4c00
    int GetField_0x58(int a1);  // 0x4b4c10
    int GetField_0x48(int a1);  // 0x4b4c20
    int GetLinkedLocomotorPointer();  // 0x4b4cd0
    int GetField_0x78(int a1, int a2, int a3);  // 0x4b4d90
    int GetField_0x7C();  // 0x4b4da0
    int GetField_0x80();  // 0x4b4db0
    void* GetSpeedCoordinate(int a1, int a2);  // 0x4b5b40
    void* UpdateMovementPosition(int a1, int a2, int a3);  // 0x4b6040
    int StubReturnZero_3(int a1, int a2);  // 0x4b63b0
    int StubReturnZero_4(int a1, int a2);  // 0x4b6400
    bool CheckBaseClassState(int a1);  // 0x4b6440
    int SmallStub_4B64D0(int a1);  // 0x4b64d0
    int LoadLocomotionFromStream_0(int a1, int a2);  // 0x4b64e0
    int ShortFunc_4B65F0();  // 0x4b65f0
    int ShortFunc_4B66C0();  // 0x4b66c0
    int SmallStub_4B6740(int a1, int a2, int a3);  // 0x4b6740
    int SmallStub_4B6750();  // 0x4b6750
    int SmallStub_4B6760();  // 0x4b6760
    int SmallStub_4B6770(int a1, int a2, int a3);  // 0x4b6770
    int SmallStub_4B6780();  // 0x4b6780
    int SmallStub_4B6790();  // 0x4b6790
    int StubReturnZero_7(int a1, int a2);  // 0x4cca20
    int ComputeFloatExpression();  // 0x4cca90
    void* GetMovementCoordinate(int a1, int a2);  // 0x4ccae0
    int ProcessLocomotionStep(int a1);  // 0x4ccb40
    int UpdateFootLocomotion(int a1, int a2, int a3, int a4);  // 0x4ccc80
    int ComputeMoveToPosition(int a1);  // 0x4ccfd0
    void* ComputeRotationMatrix(int a1, int a2, int a3);  // 0x4cf610
    void* CalculateBobOffset(int a1, int a2);  // 0x4cf830
    void* ShortFunc_4CF940(int a1, int a2);  // 0x4cf940
    void* ComputeVoxelMatrix(int a1, int a2, int a3);  // 0x4cfb00
    int SynchronizeFacingDirection(int a1, int a2);  // 0x4cfc10
    int DispatchVirtualCall_0(int a1);  // 0x4cfcf0
    int ClearLocomotionDirty(int a1);  // 0x4cfd20
    int ShortFunc_4CFD90(int a1);  // 0x4cfd90
    bool DispatchVirtualCall_1(int a1);  // 0x4cfda0
    int ComputeFloatExpression_1(int a1);  // 0x4cfe20
    int StubReturnZero_8(int a1);  // 0x4cfe50
    int GetInterface(int a1, int a2, int a3);  // 0x4d0510
    int GetInterface2();  // 0x4d0520
    int Stub2();  // 0x4d0530
    void* ComputeAudio3DRotation_0(int a1, int a2, int a3);  // 0x5142a0
    int HasScoreDisplayChanged();  // 0x514c30
    int ComputeFloatExpression_2();  // 0x514c80
    void* HasScoreDisplayChanged_514CB0(int a1, int a2);  // 0x514cb0
    void* HasScoreDisplayChanged_514D10(int a1, int a2);  // 0x514d10
    void* SetMovementTarget(int a1, int a2, int a3, int a4);  // 0x514d90
    void* HasScoreDisplayChanged_516320(int a1);  // 0x516320
    int UpdateFacingDirection_0(int a1, int a2);  // 0x516370
    int ClearLocomotionDirty_0(int a1);  // 0x516bf0
    bool DispatchVirtualCall_2(int a1);  // 0x516c70
    int TryMoveToAdjacentCell(int a1, int a2);  // 0x516e10
    int RandomizeLocomotionParam(int a1, int a2);  // 0x516fc0
    int SmallStub_517100(int a1);  // 0x517100
    int DispatchVirtualCall_3(int a1, int a2);  // 0x5171c0
    bool IsPositionWithinThreshold(int a1, int a2, int a3, int a4);  // 0x517210
    int SmallStub_54AE50(int a1);  // 0x54ae50
    void* GetMovementCoordinate_0(int a1, int a2);  // 0x54ae60
    int DispatchLocomotion(int a1);  // 0x54aec0
    int SmoothObjectPlacement(int a1, int a2, int a3, int a4);  // 0x54b1c0
    int MoveToDestination(int a1);  // 0x54b4d0
    int SynchronizeFacingDirection_0(int a1, int a2);  // 0x54b6e0
    int GetClassIdentifier(int a1, int a2);  // 0x54b710
    int InitClass();  // 0x54b750
    int LoadFromStream();  // 0x54b7e0
    bool CheckCompositeState(int a1);  // 0x54d0d0
    int DispatchVirtualCall_4(int a1, int a2);  // 0x54d930
    void* GetConditionedCoordinate(int a1, int a2);  // 0x54d9b0
    int StubReturnZero_9(int a1, int a2);  // 0x54da00
    int StubReturnZero_10(int a1, int a2);  // 0x54da50
    bool StubReturnTrue_2(int a1);  // 0x54db00
    int LoadLocomotionFromStream_1(int a1, int a2);  // 0x54db50
    void* ComputeMovementTransform(int a1, int a2, int a3);  // 0x54dcc0
    int ShortFunc_54DF70();  // 0x54df70
    int SmallStub_54DFF0(int a1, int a2, int a3);  // 0x54dff0
    int SmallStub_54E000();  // 0x54e000
    int SmallStub_54E010();  // 0x54e010
    int SmallStub_54E020(int a1, int a2, int a3);  // 0x54e020
    int SmallStub_54E030();  // 0x54e030
    int SmallStub_54E040();  // 0x54e040
    void* GetGlobalCoordinate(int a1, int a2);  // 0x55ac70
    void* GetMovementCoordinate_1(int a1, int a2);  // 0x5aff80
    int ShortFunc_5B0060(int a1);  // 0x5b0060
    int ConvertCoordToCell_1(int a1, int a2, int a3, int a4);  // 0x5b0080
    int SyncMatrixTransformState(int a1);  // 0x5b0120
    int UpdateFacingDirection_1(int a1, int a2);  // 0x5b0170
    int InitMultiFieldArray(int a1, int a2, int a3, int a4);  // 0x5b01a0
    int SmallStub_5B19D0(int a1);  // 0x5b19d0
    int HasFieldStateChanged();  // 0x661f50
    void* GetCoordinate_0(int a1, int a2);  // 0x661fb0
    int ComputeFloatExpression_3(int a1, int a2, int a3, int a4);  // 0x6632e0
    int SmallStub_663460(int a1);  // 0x663460
    void* ComputePitchYaw(int a1, int a2, int a3);  // 0x663470
    int StubReturnZero_12(int a1, int a2);  // 0x69eff0
    void* InitMovementState_0(int a1, int a2);  // 0x69f250
    bool StubReturnTrue_5(int a1);  // 0x69f290
    bool StubReturnTrue_6(int a1);  // 0x69f330
    void* GetCoordinate_1(int a1, int a2);  // 0x69f3a0
    void* GetRenderCoordinate_1(int a1, int a2);  // 0x69f3d0
    void* ConvertCoordToCell_2(int a1, int a2, int a3, int a4);  // 0x69f450
    int CheckWindowsErrorWrapper_1(int a1);  // 0x69f510
    void* ComputeVoxelTransform2(int a1, int a2, int a3);  // 0x69f670
    void* ComputeAudio3DRotation_1(int a1, int a2, int a3);  // 0x69fb20
    int DispatchVirtualCall_6(int a1);  // 0x69fbe0
    int UpdateFacingDirection_2(int a1, int a2);  // 0x6a05c0
    int SmallStub_6A3E50(int a1);  // 0x6a3e50
    int DispatchCheckState_6A3EB0(int a1);  // 0x6a3eb0
    int MoveToChecked_0(int a1, int a2);  // 0x6a3f00
    int StubReturnZero_15(int a1);  // 0x6a4130
    int SetByteField_1(int a1);  // 0x6a4210
    int SetByteField_2(int a1);  // 0x6a4220
    int SmallStub_6A4230(int a1);  // 0x6a4230
    int SmallStub_6A4240(int a1);  // 0x6a4240
    int SmallStub_6A4250(int a1);  // 0x6a4250
    int GetLinkedLocomotorPointer_0();  // 0x6a4280
    int SmallStub_6A4300(int a1, int a2, int a3);  // 0x6a4300
    int SmallStub_6A4310();  // 0x6a4310
    int SmallStub_6A4320();  // 0x6a4320
    int UpdateFacingDirection_3(int a1, int a2);  // 0x7192c0
    int SetCoordinateField(int a1);  // 0x719bf0
    int StubReturnZero_17(int a1, int a2);  // 0x719c60
    int InitMultiFieldArray_0();  // 0x719ca0
    int CheckWindowsErrorWrapper_2();  // 0x719d40
    int SmallStub_719E20(int a1);  // 0x719e20
    int UpdateAltitude(int a1, int a2, int a3);  // 0x719e30
    int StubReturnZero_18(int a1, int a2);  // 0x719e90
    int StubReturnZero_19(int a1, int a2);  // 0x719ee0
    bool StubReturnTrue_7(int a1);  // 0x719f30
    int LoadLocomotionFromStream_3(int a1, int a2);  // 0x719f80
    int DispatchVirtualCall_7(int a1, int a2);  // 0x71a090
    int ShortFunc_71A100();  // 0x71a100
    int SmallStub_71A160(int a1, int a2, int a3);  // 0x71a160
    int SmallStub_71A170();  // 0x71a170
    int SmallStub_71A180();  // 0x71a180
    int SmallStub_71A190(int a1, int a2, int a3);  // 0x71a190
    int SmallStub_71A1A0();  // 0x71a1a0
    int SmallStub_71A1B0();  // 0x71a1b0
    int StubReturnZero_20(int a1);  // 0x728a60
    void* GetCoordinateConditional_0(int a1, int a2);  // 0x728a90
    int ComputeBounceHeight(int a1);  // 0x729e50
    int CheckStateWithOverride(int a1);  // 0x72a020
    bool IsStateInRange(int a1);  // 0x72a060
    int UpdateFacingDirection_4(int a1, int a2);  // 0x72a0e0
    int ShortFunc_72A1A0(int a1);  // 0x72a1a0
    int ShortFunc_72A1C0(int a1);  // 0x72a1c0
    int ShortFunc_72A1E0();  // 0x72a1e0
    int SmallStub_75AB30(int a1);  // 0x75ab30
    void* GetMovementCoordinate_2(int a1, int a2);  // 0x75aba0
    int DrawVoxelAnimation(int a1);  // 0x75ac80
    int ConvertCoordToCell_4(int a1, int a2, int a3, int a4);  // 0x75acb0
    int DispatchVirtualCall_8(int a1);  // 0x75ada0
    int SynchronizeFacingDirection_1(int a1, int a2);  // 0x75ae00
    int SmallStub_75C7E0(int a1);  // 0x75c7e0
    int StubReturnZero_22(int a1, int a2);  // 0x75c850
    int StubReturnZero_23(int a1, int a2);  // 0x75c8a0
    bool CheckBaseClassState_0(int a1);  // 0x75c8e0
    int LoadLocomotionFromStream_4(int a1, int a2);  // 0x75c920
    int DispatchVirtualCall_10(int a1, int a2);  // 0x75ca30
    bool IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4);  // 0x75ca80
    int SmallStub_75CB20(int a1);  // 0x75cb20
    void* InitMultiFieldArray_1(int a1);  // 0x75cb30
    int ShortFunc_75CBA0();  // 0x75cba0
    int SetByteField_3(int a1);  // 0x75cbc0
    int SmallStub_75CC30(int a1, int a2, int a3);  // 0x75cc30
    int SmallStub_75CC40();  // 0x75cc40
    int SmallStub_75CC50();  // 0x75cc50
    int SmallStub_75CC60(int a1, int a2, int a3);  // 0x75cc60
    int SmallStub_75CC70();  // 0x75cc70
    int SmallStub_75CC80();  // 0x75cc80
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(JumpjetLocomotionClass) == 0x98, "JumpjetLocomotionClass size");

//============================================================================
// ShipLocomotionClass — naval vessel locomotion
// sizeof = 0x70 (identical layout to DriveLocomotionClass)
//============================================================================
class ShipLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x69EE30
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x6A4260
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x6A4270

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x69ed20
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x69ed20

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // 0x69ef10
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }          // 0x69f040
    virtual bool __stdcall Is_Ok_To_End() override { return false; }                                   // 0x69f080
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }                // 0x69f080
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // 0x69f0c0

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x69ec50
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x69ec50
    virtual bool __stdcall Process() override { return false; }                                        // 0x69ee30
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x69ef10
    virtual void __stdcall Stop_Moving() override {}                                    // 0x69ef10
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x69ec50
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x69ef10
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x69f0c0 (Limbo)

    virtual ~ShipLocomotionClass() override = default;  // 0x6A3E60

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    int           CurrentRamp;        // 0x18
    int           PreviousRamp;       // 0x1C
    RateTimer     SlopeTimer;         // 0x20
    CoordStruct   Dest;        // 0x30
    CoordStruct   HeadToCoord;        // 0x3C
    int           SpeedAccum;         // 0x48
    // padding 4 bytes            // 0x4C-0x4F
    double        MovementSpeed;      // 0x50
    int           TrackNumber;        // 0x58
    int           TrackIndex;         // 0x5C
    bool          IsOnShortTrack;     // 0x60
    uint8_t       IsTurretLockedDown; // 0x61
    bool          IsRotating;         // 0x62
    bool          IsDriving;          // 0x63
    bool          IsRocking;          // 0x64
    bool          UnLocked;           // 0x65
    // padding 2 bytes            // 0x66-0x67
    ILocomotion*  Piggybackee;        // 0x68

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    ShipLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit ShipLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x6a42b0 -- ShipLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove();  // 0x69ee90
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(ShipLocomotionClass) == 0x70, "ShipLocomotionClass size");

//============================================================================
// TeleportLocomotionClass — Chrono Legionnaire / teleport locomotion
//============================================================================
class TeleportLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x55A9B0
    // design: inline accessor, inlined at all call sites
    virtual ULONG __stdcall AddRef() override { return ++RefCount; }
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x7180a0

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // 0x7180a0
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }          // 0x718100
    virtual bool __stdcall Is_Ok_To_End() override { return false; }                                   // 0x718100
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }                // 0x718100
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // 0x718100

    // ILocomotion overrides
    virtual bool __stdcall Is_Moving() override { return false; }
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }
    virtual bool __stdcall Process() override { return false; }                                        // 0x718230
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x718260
    virtual void __stdcall Stop_Moving() override {}                                    // 0x718260
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x718080
    virtual Layer __stdcall In_Which_Layer() override { return static_cast<Layer>(0); }                                // 0x718090
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x7187A0
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x7187a0 (Limbo)

    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }

    virtual ~TeleportLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    CoordStruct   MovingDestination;   // 0x18
    CoordStruct   LastCoords;          // 0x24 — marked occupation bits here
    bool          Moving;              // 0x30
    bool          TeleportLocomotionClass_field_bool_35;     // 0x31
    bool          TeleportLocomotionClass_field_bool_36;     // 0x32
    // padding 1 byte             // 0x33
    int32_t       State;               // 0x34
    CDTimerClass  Timer;               // 0x38
    ILocomotion*  Piggybackee;         // 0x44

protected:
    TeleportLocomotionClass() = default; // IDA 0x718000 -- TeleportLocomotionClass::TeleportLocomotionClass; 0x718000
    explicit TeleportLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}  // 0x718000
};

//============================================================================
// TunnelLocomotionClass — subterranean dig locomotion
// sizeof = 0x3C (base 0x18 + 0x24 data)
//============================================================================
class TunnelLocomotionClass : public LocomotionClass
{
public:
    enum State : int32_t
    {
        Idle       = 0,
        PreDigIn   = 1,
        DiggingIn  = 2,
        DugIn      = 3,
        Digging    = 4,
        PreDigOut  = 5,
        DiggingOut = 6,
        DugOut     = 7,
    };

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x728af0
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x728af0

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x728a00
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x728a00
    virtual bool __stdcall Process() override { return false; }                                        // 0x728c00
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x728e30
    virtual void __stdcall Stop_Moving() override {}
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x728A50
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x7291d0
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x729b40 (Limbo)

    virtual ~TunnelLocomotionClass() override = default;  // 0x72A110

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    State         CurrentState;        // 0x18
    CoordStruct   Coords;              // 0x1C
    RateTimer     DigTimer;            // 0x28
    bool          IsMoving;            // 0x38
    // padding 3 bytes            // 0x39-0x3B

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    TunnelLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit TunnelLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x72a210 -- TunnelLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove(int a1, int a2);  // 0x72a150
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(TunnelLocomotionClass) == 0x3C, "TunnelLocomotionClass size");

//============================================================================
// MechLocomotionClass — Mech (walker) locomotion
// sizeof = 0x34 (base 0x18 + 0x1C data)
// Confirmed by TClassFactory_MechLocomotionClass::GetSize + constructor @ 0x5AFEF0
//============================================================================
class MechLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x5B1960
    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }  // 0x5B19A0

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x5AFEF0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x5AFF70
    virtual bool __stdcall Process() override { return false; }                                        // 0x5B1B50
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x5b19e0
    virtual void __stdcall Stop_Moving() override {}                                    // 0x5B1A50
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x5AFFE0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x5b1aa0
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x5B1B40 (Limbo)

    virtual ~MechLocomotionClass() override = default;  // 0x5B1960

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    CoordStruct   MovingDestination;   // 0x18
    CoordStruct   HeadToCoord;         // 0x24
    bool          IsMoving;            // 0x30
    // padding 3 bytes            // 0x31-0x33

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    MechLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit MechLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(MechLocomotionClass) == 0x34, "MechLocomotionClass size");

//============================================================================
// DropPodLocomotionClass — orbital drop pod locomotion
// sizeof = 0x30 (base 0x18 + 0x18 data)
//============================================================================
class DropPodLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID&, void** ppv) override { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }  // 0x4B6470
    virtual ULONG __stdcall AddRef() override { return ++RefCount; } // 0x4B66A0
    virtual ULONG __stdcall Release() override { if (--RefCount == 0) { delete this; return 0; } return RefCount; } // 0x4B66B0

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }

    // IPiggyback
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override { return S_OK; }         // stub
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override { return S_OK; }          // stub
    // stub: not yet implemented from IDA
    virtual bool __stdcall Is_Ok_To_End() override { return false; }                                   // stub
    // unmatched: no callgraph reference and no git history record
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override { return S_OK; }               // stub
    // unmatched: no callgraph reference and no git history record
    virtual bool __stdcall Is_Piggybacking() override { return false; }                                // stub

    virtual bool __stdcall Is_Moving() override { return false; }                                      // 0x4b5b70
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override { return nullptr; }            // 0x4b5b70
    virtual bool __stdcall Process() override { return false; }                                        // 0x4b5b70
    virtual void __stdcall Move_To(CoordStruct to) override { (void)to; }                          // 0x4b5b70
    virtual void __stdcall Stop_Moving() override {}                                    // 0x4b5b70
    virtual void __stdcall Do_Turn(unsigned short facing) override {}                   // 0x4b5b70
    virtual int __stdcall Drawing_Code() override { return 0; }                                    // 0x4b5b70
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}               // 0x4b5b70
    virtual void __stdcall ILocomotion_B8() override {}                                  // 0x4b5b70 (Limbo)

    // stub: not yet implemented from IDA
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { (void)stream; (void)clear_dirty; return S_OK; }

    virtual ~DropPodLocomotionClass() override = default;  // 0x4B6200

    virtual int Size() override { return sizeof(*this); }  // inline: sizeof(*this)

    bool          IsOutOfMap;         // 0x18
    // padding 3 bytes            // 0x19-0x1B
    CoordStruct   DestinationCoords;  // 0x1C
    ILocomotion*  Piggybackee;        // 0x28
    // padding 4 bytes            // 0x2C-0x2F (for 8-byte alignment?)

protected:
    // design: default constructor (compiler-generated), no callgraph reference
    DropPodLocomotionClass() = default;
    // unmatched: no callgraph reference and no git history record
    explicit DropPodLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ProcessMove(int a1);  // 0x4b66f0 -- DropPodLocomotionClass::ProcessMove
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BeginMove();  // 0x4b6240
    int UpdateMovement();  // 0x4b62c0
    // === FUNCS-MOVE (END) ===
};
static_assert(sizeof(DropPodLocomotionClass) == 0x30, "DropPodLocomotionClass size");

} // namespace gamemd
