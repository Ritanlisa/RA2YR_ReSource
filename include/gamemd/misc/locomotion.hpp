#pragma once

#include <unknwn.h>
#include <cstdint>

#include "..\core\math.hpp"
#include "..\core\enums.hpp"
#include "..\core\interfaces.hpp"
#include "..\fundamentals.hpp"

namespace gamemd
{

class FootClass;

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

class LocomotionClass : public IPersistStream, public ILocomotion
{
public:
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    // IPersistStream
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override;

    // ILocomotion
    virtual HRESULT __stdcall Link_To_Object(void* pointer) override;
    virtual bool __stdcall Is_Moving() override { return false; }
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual CoordStruct* __stdcall Head_To_Coord(CoordStruct* out) override;
    virtual Move __stdcall Can_Enter_Cell(CellStruct cell) override { return Move::OK; }
    virtual bool __stdcall Is_To_Have_Shadow() override { return true; }
    virtual Matrix3D* __stdcall Draw_Matrix(Matrix3D* out, int* key) override;
    virtual Matrix3D* __stdcall Shadow_Matrix(Matrix3D* out, int* key) override;
    virtual Point2D* __stdcall Draw_Point(Point2D* out) override;
    virtual Point2D* __stdcall Shadow_Point(Point2D* out) override;
    virtual VisualType __stdcall Visual_Character(VARIANT_BOOL unused) override { return VisualType::Normal; }
    virtual int __stdcall Z_Adjust() override { return 0; }
    virtual ZGradient __stdcall Z_Gradient() override { return ZGradient::Deg90; }
    virtual bool __stdcall Process() override { return true; }
    virtual void __stdcall Move_To(CoordStruct to) override {}
    virtual void __stdcall Stop_Moving() override {}
    virtual void __stdcall Do_Turn(unsigned short facing) override {}
    virtual void __stdcall Unlimbo() override {}
    virtual void __stdcall Tilt_Pitch_AI() override {}
    virtual bool __stdcall Power_On() override { Powered = true; return Is_Powered(); }
    virtual bool __stdcall Power_Off() override { Powered = false; return Is_Powered(); }
    virtual bool __stdcall Is_Powered() override { return Powered; }
    virtual bool __stdcall Is_Ion_Sensitive() override { return false; }
    virtual bool __stdcall Push(unsigned short dir) override { return false; }
    virtual bool __stdcall Shove(unsigned short dir) override { return false; }
    virtual void __stdcall Force_Track(int track, CoordStruct coord) override {}
    virtual void __stdcall Force_Immediate_Destination(CoordStruct coord) override {}
    virtual void __stdcall Force_New_Slope(int ramp) override {}
    virtual bool __stdcall Is_Moving_Now() override { return Is_Moving(); }
    virtual int __stdcall Apparent_Speed() override;
    virtual int __stdcall Drawing_Code() override { return 0; }
    virtual FireError __stdcall Can_Fire() override { return FireError::OK; }
    virtual int __stdcall Get_Status() override { return 0; }
    virtual void __stdcall Acquire_Hunter_Seeker_Target() override {}
    virtual bool __stdcall Is_Surfacing() override { return false; }
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override {}
    virtual bool __stdcall Is_Moving_Here(CoordStruct to) override { return false; }
    virtual bool __stdcall Will_Jump_Tracks() override { return false; }
    virtual bool __stdcall Is_Really_Moving_Now() override { return Is_Moving_Now(); }
    virtual void __stdcall Stop_Movement_Animation() override {}
    virtual void __stdcall Lock() override {}
    virtual void __stdcall Unlock() override {}
    virtual void __stdcall ILocomotion_B8() override {}
    virtual int __stdcall Get_Track_Number() override { return -1; }
    virtual int __stdcall Get_Track_Index() override { return -1; }
    virtual int __stdcall Get_Speed_Accum() override { return -1; }

    virtual ~LocomotionClass() override;

    virtual int Size() = 0;

    static HRESULT CreateInstance(
        ILocomotion** ppv,
        const CLSID* clsid,
        IUnknown* outer,
        uint32_t cls_context);

    static void ChangeLocomotorTo(FootClass* object, const CLSID& clsid);

    uint32_t     unknown_08;
    FootClass*   LinkedTo;
    bool         Powered;
    bool         Dirty;
    int32_t      RefCount;

protected:
    LocomotionClass() = default;
    explicit LocomotionClass(noinit_t) noexcept {}
};

//============================================================================

class DriveLocomotionClass : public LocomotionClass
{
public:
    virtual ~DriveLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    CoordStruct  HeadToCoord;
    bool         IsMoving;
    bool         unknown_bool_31;
    bool         unknown_bool_32;
    bool         unknown_bool_33;
    int32_t      unknown_34;
    int32_t      unknown_38;
    int32_t      unknown_3C;
    int32_t      unknown_40;
    int32_t      unknown_44;

protected:
    DriveLocomotionClass() = default;
    explicit DriveLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class HoverLocomotionClass : public LocomotionClass
{
public:
    virtual ~HoverLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    CoordStruct  HeadToCoord;
    bool         IsMoving;
    uint8_t      align_31[3];
    double       CurrentSpeed;
    double       BobHeight;
    bool         IsBobbing;
    uint8_t      align_41[7];

protected:
    HoverLocomotionClass() = default;
    explicit HoverLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class WalkLocomotionClass : public LocomotionClass
{
public:
    virtual ~WalkLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual bool __stdcall Is_Moving_Now() override;
    virtual bool __stdcall Is_Really_Moving_Now() override;
    virtual void __stdcall Stop_Movement_Animation() override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    CoordStruct  HeadToCoord;
    bool         IsMoving;
    bool         IsReallyMoving;
    bool         unknown_bool_32;
    bool         unknown_bool_33;
    int32_t      unknown_34;
    int32_t      unknown_38;
    int32_t      unknown_3C;
    int32_t      unknown_40;

protected:
    WalkLocomotionClass() = default;
    explicit WalkLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class FlyLocomotionClass : public LocomotionClass
{
public:
    virtual ~FlyLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual Layer __stdcall In_Which_Layer() override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    bool           AirportBound;
    CoordStruct    MovingDestination;
    CoordStruct    XYZ2;
    bool           HasMoveOrder;
    int32_t        FlightLevel;
    double         TargetSpeed;
    double         CurrentSpeed;
    int8_t         IsTakingOff;
    bool           IsLanding;
    bool           WasLanding;
    bool           unknown_bool_53;
    uint32_t       unknown_54;
    uint32_t       unknown_58;
    bool           IsElevating;
    bool           unknown_bool_5D;
    bool           unknown_bool_5E;
    bool           unknown_bool_5F;

protected:
    FlyLocomotionClass() = default;
    explicit FlyLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class RocketLocomotionClass : public LocomotionClass
{
public:
    virtual ~RocketLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual Layer __stdcall In_Which_Layer() override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    int32_t      MissionState;
    uint32_t     unknown_44;
    double       CurrentSpeed;
    bool         unknown_bool_4C;
    bool         SpawnerIsElite;
    float        CurrentPitch;
    uint32_t     unknown_58;
    uint32_t     unknown_5C;

protected:
    RocketLocomotionClass() = default;
    explicit RocketLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class JumpjetLocomotionClass : public LocomotionClass
{
public:
    virtual ~JumpjetLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual Layer __stdcall In_Which_Layer() override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    bool         IsMoving;
    uint8_t      align_21[3];
    int32_t      FlightLevel;
    double       CurrentSpeed;
    double       TargetSpeed;
    double       Acceleration;
    bool         IsAscending;
    bool         IsDecending;
    uint8_t      align_52[6];

protected:
    JumpjetLocomotionClass() = default;
    explicit JumpjetLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class ShipLocomotionClass : public LocomotionClass
{
public:
    virtual ~ShipLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    CoordStruct  HeadToCoord;
    bool         IsMoving;
    uint8_t      align_21[3];
    double       CurrentSpeed;
    double       SinkingWeight;
    uint32_t     unknown_30;
    uint32_t     unknown_34;

protected:
    ShipLocomotionClass() = default;
    explicit ShipLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class TeleportLocomotionClass : public LocomotionClass, public IPiggyback
{
public:
    virtual ~TeleportLocomotionClass() override = default;

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;
    virtual ULONG __stdcall Release() override;

    // IPiggyback
    virtual HRESULT __stdcall Begin_Piggyback(ILocomotion* pointer) override;
    virtual HRESULT __stdcall End_Piggyback(ILocomotion** pointer) override;
    virtual bool __stdcall Is_Ok_To_End() override;
    virtual HRESULT __stdcall Piggyback_CLSID(GUID* classid) override;
    virtual bool __stdcall Is_Piggybacking() override;

    // ILocomotion overrides
    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual Layer __stdcall In_Which_Layer() override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct   MovingDestination;
    CoordStruct   LastCoords;
    bool          Moving;
    bool          unknown_bool_35;
    bool          unknown_bool_36;
    int32_t       State;
    ILocomotion*  Piggybackee;

protected:
    TeleportLocomotionClass() = default;
    explicit TeleportLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class TunnelLocomotionClass : public LocomotionClass
{
public:
    virtual ~TunnelLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    bool         IsMoving;
    uint8_t      align_21[3];
    bool         IsSurfacing;
    uint8_t      align_25[3];
    int32_t      State;

protected:
    TunnelLocomotionClass() = default;
    explicit TunnelLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class MechLocomotionClass : public LocomotionClass
{
public:
    virtual ~MechLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  MovingDestination;
    CoordStruct  HeadToCoord;
    bool         IsMoving;
    uint8_t      align_21[3];
    int32_t      unknown_24;
    int32_t      unknown_28;
    int32_t      unknown_2C;
    int32_t      unknown_30;

protected:
    MechLocomotionClass() = default;
    explicit MechLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

//============================================================================

class DropPodLocomotionClass : public LocomotionClass
{
public:
    virtual ~DropPodLocomotionClass() override = default;

    virtual bool __stdcall Is_Moving() override;
    virtual CoordStruct* __stdcall Destination(CoordStruct* out) override;
    virtual bool __stdcall Process() override;
    virtual void __stdcall Move_To(CoordStruct to) override;
    virtual void __stdcall Stop_Moving() override;
    virtual void __stdcall Do_Turn(unsigned short facing) override;
    virtual void __stdcall Mark_All_Occupation_Bits(int mark) override;
    virtual void __stdcall ILocomotion_B8() override;

    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual int Size() override { return sizeof(*this); }

    CoordStruct  Target;
    bool         IsMoving;
    uint8_t      align_21[3];
    double       Speed;
    double       Angle;
    int32_t      Height;

protected:
    DropPodLocomotionClass() = default;
    explicit DropPodLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t{}) {}
};

} // namespace gamemd
