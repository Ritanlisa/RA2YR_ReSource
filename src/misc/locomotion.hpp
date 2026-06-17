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
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    // IPersistStream
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) = 0;                          // pure, per-class
    virtual HRESULT __stdcall IsDirty() override { return Dirty ? S_OK : S_FALSE; }     // 0x4B4C30
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }           // 0x55AAC0
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;          // 0x55AA60
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override;                 // 0x55AB40

    // ILocomotion
    virtual HRESULT __stdcall Link_To_Object(void* pointer) override;                    // 0x55A710
    virtual bool __stdcall Is_Moving() override { return false; }                        // 0x55ACD0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;               // 0x55AC70
    virtual CoordStruct* __stdcall Head_To_Coord(CoordStruct* out) override;             // 0x55ACA0
    virtual Move __stdcall Can_Enter_Cell(CellStruct cell) override { return Move::OK; } // 0x55ABF0
    virtual bool __stdcall Is_To_Have_Shadow() override { return true; }                 // 0x55ABE0
    virtual Matrix3D* __stdcall Draw_Matrix(Matrix3D* out, int* key) override;           // 0x55A730
    virtual Matrix3D* __stdcall Shadow_Matrix(Matrix3D* out, int* key) override;         // 0x55A7D0
    virtual Point2D* __stdcall Draw_Point(Point2D* out) override;                        // 0x55ABD0
    virtual Point2D* __stdcall Shadow_Point(Point2D* out) override;                      // 0x55A8C0
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
    virtual int __stdcall Apparent_Speed() override;                                     // 0x55AD10
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

    virtual ~LocomotionClass() override;

    virtual int Size() = 0;

    static HRESULT CreateInstance(
        ILocomotion** ppv,
        const CLSID* clsid,
        IUnknown* outer,
        uint32_t cls_context);

    static void ChangeLocomotorTo(FootClass* object, const CLSID& clsid);

    // Fields (offset from vtable[0])
    // 0x04: vtable[1] (IPersistStream/COM)
    FootClass*   Owner;      // 0x08
    FootClass*   LinkedTo;   // 0x0C
    bool         Powered;    // 0x10
    bool         Dirty;      // 0x11
    // padding 2 bytes 0x12-0x13
    int32_t      RefCount;   // 0x14

protected:
    LocomotionClass() = default;
    explicit LocomotionClass(noinit_t) noexcept {}
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
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    // IPersistStream
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x5B0960
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x55AA60

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // 0x45AF20
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // 0x4AF5E0
    virtual bool __stdcall Is_Ok_To_End() override;                                   // 0x4AF600
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;                // 0x4AF610
    virtual bool __stdcall Is_Piggybacking() override;                                // 0x4AF630

    // ILocomotion overrides
    virtual bool __stdcall Is_Moving() override;              // 0x4AFB80
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x4AEFD0
    virtual bool __stdcall Process() override;                // 0x4B4870
    virtual void __stdcall Move_To(CoordStruct to) override;  // 0x4B4880
    virtual void __stdcall Stop_Moving() override;            // 0x4AF310
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x4AF020
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x4AF390
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x4AF3A0 (Limbo)

    virtual ~DriveLocomotionClass() override;

    virtual int Size() override { return sizeof(*this); }

    int           CurrentRamp;        // 0x18
    int           PreviousRamp;       // 0x1C
    RateTimer     SlopeTimer;         // 0x20
    CoordStruct   Destination;        // 0x30
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
    DriveLocomotionClass() = default;
    explicit DriveLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(DriveLocomotionClass) == 0x70, "DriveLocomotionClass size");

//============================================================================
// HoverLocomotionClass — hovercraft locomotion
//============================================================================
class HoverLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x513D00
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x513C80

    virtual bool __stdcall Is_Moving() override;              // 0x513C30
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x513C40
    virtual bool __stdcall Process() override;                // 0x513E10
    virtual void __stdcall Move_To(CoordStruct to) override;  // 0x5140E0
    virtual void __stdcall Stop_Moving() override;            // 0x514120
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x513C50
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x514160
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x5140B0 (Limbo)

    virtual ~HoverLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   Destination;        // 0x18
    CoordStruct   HeadToCoord;        // 0x24
    FacingClass   LocomotionFacing;   // 0x30
    double        MaxSpeed;           // 0x48
    double        CurrentSpeed;       // 0x50
    double        BoostSpeed;         // 0x58
    double        CurrentWobbles;     // 0x60
    bool          unknown_bool_68;    // 0x68
    // padding 3 bytes            // 0x69-0x6B
    int32_t       unknown_6C;         // 0x6C
    bool          unknown_bool_70;    // 0x70
    // padding 3 bytes            // 0x71-0x73

protected:
    HoverLocomotionClass() = default;
    explicit HoverLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================
// WalkLocomotionClass — infantry/shambler leg locomotion
// sizeof = 0x3C (base 0x18 + 0x24 data)
//============================================================================
class WalkLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x75A9E0
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x75A950

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // 0x75AB80
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // 0x75AC00
    virtual bool __stdcall Is_Ok_To_End() override;                                   // 0x75AC40
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;                // 0x75AC50
    virtual bool __stdcall Is_Piggybacking() override;                                // 0x75AC70

    virtual bool __stdcall Is_Moving() override;                                      // 0x75A8F0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x758F20
    virtual bool __stdcall Process() override;                                        // 0x75AE80
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x75C170
    virtual void __stdcall Stop_Moving() override;                                    // 0x75C1F0
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x7579A0
    virtual bool __stdcall Is_Moving_Now() override;                                  // 0x7593B0
    virtual bool __stdcall Is_Really_Moving_Now() override;                           // 0x7593C0
    virtual void __stdcall Stop_Movement_Animation() override;                        // 0x75C200
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x75C300
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x75C310 (Limbo)

    virtual ~WalkLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   Destination;        // 0x18
    CoordStruct   HeadToCoord;        // 0x24
    bool          IsMoving;           // 0x30
    bool          IsInProcessing;     // 0x31
    bool          IsReallyMoving;     // 0x32
    // padding 1 byte             // 0x33
    ILocomotion*  Piggybackee;        // 0x34

protected:
    WalkLocomotionClass() = default;
    explicit WalkLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(WalkLocomotionClass) == 0x3C, "WalkLocomotionClass size");

//============================================================================
// FlyLocomotionClass — fixed-wing aircraft locomotion
//============================================================================
class FlyLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x4CC950
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x4CC8B0

    virtual bool __stdcall Is_Moving() override;                                      // 0x4CC9E0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x4CCA70
    virtual bool __stdcall Process() override;                                        // 0x4CCAD0
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x4CD3A0
    virtual void __stdcall Stop_Moving() override;                                    // 0x4CD400
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x4CC9B0
    virtual Layer __stdcall In_Which_Layer() override;                                // 0x4CC9D0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x4CD3B0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x4CD520 (Limbo)

    virtual ~FlyLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

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
    bool           unknown_bool_53;    // 0x53
    uint32_t       unknown_54;         // 0x54
    uint32_t       unknown_58;         // 0x58
    bool           IsElevating;        // 0x5C
    bool           unknown_bool_5D;    // 0x5D
    bool           unknown_bool_5E;    // 0x5E
    bool           unknown_bool_5F;    // 0x5F

protected:
    FlyLocomotionClass() = default;
    explicit FlyLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================
// RocketLocomotionClass — V3/Dreadnought rocket locomotion
//============================================================================
class RocketLocomotionClass : public LocomotionClass
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x661EC0
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x661DF0

    virtual bool __stdcall Is_Moving() override;                                      // 0x661F00
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x661F90
    virtual bool __stdcall Process() override;                                        // 0x661FF0
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x6624B0
    virtual void __stdcall Stop_Moving() override;                                    // 0x662510
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x661ED0
    virtual Layer __stdcall In_Which_Layer() override;                                // 0x661EF0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x6624C0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x662650 (Limbo)

    virtual ~RocketLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   MovingDestination;   // 0x18
    RateTimer     MissionTimer;        // 0x24
    CDTimerClass  TrailerTimer;        // 0x34
    int32_t       MissionState;        // 0x40
    uint32_t      unknown_44;          // 0x44
    double        CurrentSpeed;        // 0x48
    bool          unknown_bool_4C;     // 0x50
    bool          SpawnerIsElite;      // 0x51
    // padding 2 bytes            // 0x52-0x53
    float         CurrentPitch;        // 0x54
    uint32_t      unknown_58;          // 0x58
    uint32_t      unknown_5C;          // 0x5C

protected:
    RocketLocomotionClass() = default;
    explicit RocketLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
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

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x54A8E0
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x54A850

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // 0x54A520
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // 0x54A5E0
    virtual bool __stdcall Is_Ok_To_End() override;                                   // 0x54A650
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;                // 0x54A670
    virtual bool __stdcall Is_Piggybacking() override;                                // 0x54A690

    virtual bool __stdcall Is_Moving() override;                                      // 0x54AC80
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x54AD30
    virtual bool __stdcall Process() override;                                        // 0x54AD90
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x54B8F0
    virtual void __stdcall Stop_Moving() override;                                    // 0x54B950
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x54ACA0
    virtual Layer __stdcall In_Which_Layer() override;                                // 0x54AC60
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x54B9C0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x54BAD0 (Limbo)

    virtual ~JumpjetLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    int32_t       TurnRate;           // 0x18
    int32_t       Speed;              // 0x1C
    float         Climb;              // 0x20
    float         Crash;              // 0x24
    int32_t       Height;             // 0x28
    float         Accel;              // 0x2C
    float         Wobbles;            // 0x30
    int32_t       Deviation;          // 0x34
    bool          NoWobbles;          // 0x38
    uint8_t       unknown_3D;         // 0x39
    uint8_t       unknown_3E;         // 0x3A
    uint8_t       unknown_3F;         // 0x3B
    CoordStruct   DestinationCoords;  // 0x3C
    bool          IsMoving;           // 0x48
    uint8_t       unknown_4D;         // 0x49
    uint8_t       unknown_4E;         // 0x4A
    uint8_t       unknown_4F;         // 0x4B
    State         CurrentState;       // 0x4C
    FacingClass   LocomotionFacing;   // 0x50
    uint8_t       unknown_6C;         // 0x68
    uint8_t       unknown_6D;         // 0x69
    uint8_t       unknown_6E;         // 0x6A
    uint8_t       unknown_6F;         // 0x6B
    // 4-byte alignment pad       // 0x6C-0x6F
    double        CurrentSpeed;       // 0x70
    double        MaxSpeed;           // 0x78
    int32_t       CurrentHeight;      // 0x80
    uint8_t       unknown_84;         // 0x84
    uint8_t       unknown_85;         // 0x85
    uint8_t       unknown_86;         // 0x86
    uint8_t       unknown_87;         // 0x87
    double        CurrentWobbles;     // 0x88
    bool          DestinationReached; // 0x90
    uint8_t       unknown_91;         // 0x91
    uint8_t       unknown_92;         // 0x92
    uint8_t       unknown_93;         // 0x93
    ILocomotion*  Piggybackee;        // 0x94

protected:
    JumpjetLocomotionClass() = default;
    explicit JumpjetLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(JumpjetLocomotionClass) == 0x98, "JumpjetLocomotionClass size");

//============================================================================
// ShipLocomotionClass — naval vessel locomotion
// sizeof = 0x70 (identical layout to DriveLocomotionClass)
//============================================================================
class ShipLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x69EDF0
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x69ED70

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // 0x69EFE0
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // 0x69F060
    virtual bool __stdcall Is_Ok_To_End() override;                                   // 0x69F0A0
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;                // 0x69F0B0
    virtual bool __stdcall Is_Piggybacking() override;                                // 0x69F0D0

    virtual bool __stdcall Is_Moving() override;                                      // 0x69EC60
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x69EC80
    virtual bool __stdcall Process() override;                                        // 0x69EE60
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x69EF20
    virtual void __stdcall Stop_Moving() override;                                    // 0x69EF60
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x69ECD0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x69EFD0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x69F0F0 (Limbo)

    virtual ~ShipLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    int           CurrentRamp;        // 0x18
    int           PreviousRamp;       // 0x1C
    RateTimer     SlopeTimer;         // 0x20
    CoordStruct   Destination;        // 0x30
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
    ShipLocomotionClass() = default;
    explicit ShipLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(ShipLocomotionClass) == 0x70, "ShipLocomotionClass size");

//============================================================================
// TeleportLocomotionClass — Chrono Legionnaire / teleport locomotion
//============================================================================
class TeleportLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x7180B0

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // 0x7180E0
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // 0x718170
    virtual bool __stdcall Is_Ok_To_End() override;                                   // 0x7181E0
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;                // 0x718200
    virtual bool __stdcall Is_Piggybacking() override;                                // 0x718220

    // ILocomotion overrides
    virtual bool __stdcall Is_Moving() override;                                      // 0x718060
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x718070
    virtual bool __stdcall Process() override;                                        // 0x718240
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x7186E0
    virtual void __stdcall Stop_Moving() override;                                    // 0x718720
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x718080
    virtual Layer __stdcall In_Which_Layer() override;                                // 0x718090
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x7187A0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x7187C0 (Limbo)

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x718010

    virtual ~TeleportLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   MovingDestination;   // 0x18
    CoordStruct   LastCoords;          // 0x24 — marked occupation bits here
    bool          Moving;              // 0x30
    bool          unknown_bool_35;     // 0x31
    bool          unknown_bool_36;     // 0x32
    // padding 1 byte             // 0x33
    int32_t       State;               // 0x34
    CDTimerClass  Timer;               // 0x38
    ILocomotion*  Piggybackee;         // 0x44

protected:
    TeleportLocomotionClass() = default;
    explicit TeleportLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
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

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x728BC0
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x728B40

    virtual bool __stdcall Is_Moving() override;                                      // 0x728A10
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x728A30
    virtual bool __stdcall Process() override;                                        // 0x728CF0
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x7291A0
    virtual void __stdcall Stop_Moving() override;                                    // 0x7291C0
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x728A50
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x7291E0
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x729C30 (Limbo)

    virtual ~TunnelLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    State         CurrentState;        // 0x18
    CoordStruct   Coords;              // 0x1C
    RateTimer     DigTimer;            // 0x28
    bool          IsMoving;            // 0x38
    // padding 3 bytes            // 0x39-0x3B

protected:
    TunnelLocomotionClass() = default;
    explicit TunnelLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
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
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x5B19A0

    virtual bool __stdcall Is_Moving() override;                                      // 0x5AFEF0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x5AFF70
    virtual bool __stdcall Process() override;                                        // 0x5B1B50
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x5B1A00
    virtual void __stdcall Stop_Moving() override;                                    // 0x5B1A50
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x5AFFE0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x5B1B30
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x5B1B40 (Limbo)

    virtual ~MechLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   MovingDestination;   // 0x18
    CoordStruct   HeadToCoord;         // 0x24
    bool          IsMoving;            // 0x30
    // padding 3 bytes            // 0x31-0x33

protected:
    MechLocomotionClass() = default;
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
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return S_OK; }  // 0x4B5B20

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;         // stub
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;          // stub
    virtual bool __stdcall Is_Ok_To_End() override;                                   // stub
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;               // stub
    virtual bool __stdcall Is_Piggybacking() override;                                // stub

    virtual bool __stdcall Is_Moving() override;                                      // 0x4B5BC0
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;            // 0x4B5BD0
    virtual bool __stdcall Process() override;                                        // 0x4B5C60
    virtual void __stdcall Move_To(CoordStruct to) override;                          // 0x4B5E10
    virtual void __stdcall Stop_Moving() override;                                    // 0x4B5E40
    virtual void __stdcall Do_Turn(unsigned short facing) override;                   // 0x4B5BE0
    virtual int __stdcall Drawing_Code() override;                                    // 0x4B5BF0
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;               // 0x4B5E50
    virtual void __stdcall ILocomotion_B8() override;                                  // 0x4B5E80 (Limbo)

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }         // stub
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;        // 0x4B5B00

    virtual ~DropPodLocomotionClass() override = default;

    virtual int Size() override { return sizeof(*this); }

    bool          IsOutOfMap;         // 0x18
    // padding 3 bytes            // 0x19-0x1B
    CoordStruct   DestinationCoords;  // 0x1C
    ILocomotion*  Piggybackee;        // 0x28
    // padding 4 bytes            // 0x2C-0x2F (for 8-byte alignment?)

protected:
    DropPodLocomotionClass() = default;
    explicit DropPodLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};
static_assert(sizeof(DropPodLocomotionClass) == 0x30, "DropPodLocomotionClass size");

} // namespace gamemd
