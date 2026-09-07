// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/locomotion.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "locomotion.hpp"
#include "object/foot.hpp"  // full FootClass for locomotor member access
#include "structure/globals_structure.hpp"  // g_CurrentFrame (Frame @ 0xA8ED84)

namespace gamemd {
// 0x55a9b0
HRESULT __stdcall LocomotionClass::QueryInterface(const IID& iid, void** ppv) {
        if (!ppv) return E_POINTER;
        if (iid == IID_IUnknown) { *ppv = static_cast<IUnknown*>(static_cast<ILocomotion*>(this)); AddRef(); return S_OK; }
        if (iid == IID_IPersistStream) { *ppv = static_cast<IPersistStream*>(this); AddRef(); return S_OK; }
        *ppv = static_cast<ILocomotion*>(this); AddRef(); return S_OK;  // 0x54df50
    }

ULONG __stdcall LocomotionClass::AddRef() { return ++RefCount; }

ULONG __stdcall LocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall LocomotionClass::IsDirty() { return Dirty ? S_OK : S_FALSE; }

HRESULT __stdcall LocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall LocomotionClass::Save(IStream* stream, int clear_dirty) {
        if (!stream) return E_POINTER;
        HRESULT hr = stream->Write((const char*)this + 8, Size(), nullptr);
        if (SUCCEEDED(hr) && clear_dirty) Dirty = false;
        return hr;
    }

HRESULT __stdcall LocomotionClass::GetSizeMax(ULARGE_INTEGER* size) {
        if (!size) return E_POINTER;
        size->QuadPart = Size();
        return S_OK;
    }

HRESULT __stdcall LocomotionClass::Link_To_Object(void* pointer) {
        LinkedTo = static_cast<FootClass*>(pointer);
        return S_OK;
    }

bool __stdcall LocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall LocomotionClass::Destination(CoordStruct* out) {
        if (!out) return nullptr;
        *out = {};
        return out;
    }

CoordStruct* __stdcall LocomotionClass::Head_To_Coord(CoordStruct* out) {
        if (!out) return nullptr;
        *out = {};
        return out;
    }

Move __stdcall LocomotionClass::Can_Enter_Cell(CellStruct cell) { return Move::OK; }

bool __stdcall LocomotionClass::Is_To_Have_Shadow() { return true; }

Matrix3D* __stdcall LocomotionClass::Draw_Matrix(Matrix3D* out, int* key) {
        if (!out) return nullptr;
        std::memset(out, 0, sizeof(Matrix3D));
        if (key) *key = 0;
        return out;
    }

Matrix3D* __stdcall LocomotionClass::Shadow_Matrix(Matrix3D* out, int* key) {
        return Draw_Matrix(out, key);
    }

Point2D* __stdcall LocomotionClass::Draw_Point(Point2D* out) {
        if (!out) return nullptr;
        out->X = 0; out->Y = 0;
        return out;
    }

Point2D* __stdcall LocomotionClass::Shadow_Point(Point2D* out) {
        return Draw_Point(out);
    }

VisualType __stdcall LocomotionClass::Visual_Character(VARIANT_BOOL unused) { return VisualType::Normal; }

int __stdcall LocomotionClass::Z_Adjust() { return 0; }

ZGradient __stdcall LocomotionClass::Z_Gradient() { return ZGradient::Deg90; }

// 0x69ec50
bool __stdcall LocomotionClass::Process() { return true; }

void __stdcall LocomotionClass::Move_To(CoordStruct to) {}

void __stdcall LocomotionClass::Stop_Moving() {}

void __stdcall LocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall LocomotionClass::Unlimbo() {}

void __stdcall LocomotionClass::Tilt_Pitch_AI() {}

bool __stdcall LocomotionClass::Power_On() { Powered = true; return Is_Powered(); }

bool __stdcall LocomotionClass::Power_Off() { Powered = false; return Is_Powered(); }

bool __stdcall LocomotionClass::Is_Powered() { return Powered; }

bool __stdcall LocomotionClass::Is_Ion_Sensitive() { return false; }

bool __stdcall LocomotionClass::Push(unsigned short dir) { return false; }

bool __stdcall LocomotionClass::Shove(unsigned short dir) { return false; }

void __stdcall LocomotionClass::Force_Track(int track, CoordStruct coord) {}

void __stdcall LocomotionClass::Force_Immediate_Destination(CoordStruct coord) {}

void __stdcall LocomotionClass::Force_New_Slope(int ramp) {}

bool __stdcall LocomotionClass::Is_Moving_Now() { return Is_Moving(); }

int __stdcall LocomotionClass::Apparent_Speed() { return 0; }

int __stdcall LocomotionClass::Drawing_Code() { return 0; }

FireError __stdcall LocomotionClass::Can_Fire() { return FireError::OK; }

int __stdcall LocomotionClass::Get_Status() { return 0; }

void __stdcall LocomotionClass::Acquire_Hunter_Seeker_Target() {}

bool __stdcall LocomotionClass::Is_Surfacing() { return false; }

void __stdcall LocomotionClass::Mark_All_Occupation_Bits(int mark) {}

bool __stdcall LocomotionClass::Is_Moving_Here(CoordStruct to) { return false; }

bool __stdcall LocomotionClass::Will_Jump_Tracks() { return false; }

bool __stdcall LocomotionClass::Is_Really_Moving_Now() { return Is_Moving_Now(); }

void __stdcall LocomotionClass::Stop_Movement_Animation() {}

void __stdcall LocomotionClass::Lock() {}

void __stdcall LocomotionClass::Unlock() {}

void __stdcall LocomotionClass::ILocomotion_B8() {}

int __stdcall LocomotionClass::Get_Track_Number() { return -1; }

int __stdcall LocomotionClass::Get_Track_Index() { return -1; }

int __stdcall LocomotionClass::Get_Speed_Accum() { return -1; }

LocomotionClass::~LocomotionClass() {}

HRESULT LocomotionClass::CreateInstance(
        ILocomotion** ppv,
        const CLSID* clsid,
        IUnknown* outer,
        uint32_t cls_context) {
        (void)ppv; (void)clsid; (void)outer; (void)cls_context;
        return CLASS_E_CLASSNOTAVAILABLE;
    }

void LocomotionClass::ChangeLocomotorTo(FootClass* object, const CLSID& clsid) {
    // quarantined legacy pseudo-translation (never compiled; cross-namespace
    // ILocomotion split). Original body kept below.
    //     if (!object) return;
    //     ILocomotion* new_loco = nullptr;
    //     if (SUCCEEDED(CreateInstance(&new_loco, &clsid, nullptr, 0)))
    //     {
    //         new_loco->Link_To_Object(object);
    //         object->locomotor.ptr = new_loco;
    //     }
    (void)object; (void)clsid; // TODO stub - retranslate via C-line pipeline
}

LocomotionClass::LocomotionClass(noinit_t) noexcept {}

// 0x4af720
HRESULT __stdcall DriveLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(this); AddRef(); return S_OK; } return E_POINTER; }

// 0x4b4cb0
ULONG __stdcall DriveLocomotionClass::AddRef() { return ++RefCount; }

// 0x4b4cc0
ULONG __stdcall DriveLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall DriveLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall DriveLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall DriveLocomotionClass::Save(IStream* stream, int clear_dirty) { if (!stream) return E_POINTER; HRESULT hr = stream->Write((const char*)this + 0x18, Size() - 0x18, nullptr); if (SUCCEEDED(hr) && clear_dirty) Dirty = false; return hr; }

HRESULT __stdcall DriveLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall DriveLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall DriveLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall DriveLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall DriveLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall DriveLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall DriveLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall DriveLocomotionClass::Process() { return false; }

void __stdcall DriveLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall DriveLocomotionClass::Stop_Moving() {}

void __stdcall DriveLocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall DriveLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall DriveLocomotionClass::ILocomotion_B8() {}

DriveLocomotionClass::~DriveLocomotionClass() {}

int DriveLocomotionClass::Size() { return sizeof(*this); }

DriveLocomotionClass::DriveLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall HoverLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall HoverLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall HoverLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

bool __stdcall HoverLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall HoverLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall HoverLocomotionClass::Process() { return false; }

void __stdcall HoverLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall HoverLocomotionClass::Stop_Moving() {}

void __stdcall HoverLocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall HoverLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall HoverLocomotionClass::ILocomotion_B8() {}

int HoverLocomotionClass::Size() { return sizeof(*this); }

HoverLocomotionClass::HoverLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

// 0x75c7f0
HRESULT __stdcall WalkLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

// 0x75cb80
ULONG __stdcall WalkLocomotionClass::AddRef() { return ++RefCount; }

// 0x75cb90
ULONG __stdcall WalkLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall WalkLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall WalkLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall WalkLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

HRESULT __stdcall WalkLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall WalkLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall WalkLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall WalkLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall WalkLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall WalkLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall WalkLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall WalkLocomotionClass::Process() { return false; }

void __stdcall WalkLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall WalkLocomotionClass::Stop_Moving() {}

void __stdcall WalkLocomotionClass::Do_Turn(unsigned short facing) {}

bool __stdcall WalkLocomotionClass::Is_Moving_Now() { return false; }

bool __stdcall WalkLocomotionClass::Is_Really_Moving_Now() { return false; }

void __stdcall WalkLocomotionClass::Stop_Movement_Animation() {}

void __stdcall WalkLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall WalkLocomotionClass::ILocomotion_B8() {}

int WalkLocomotionClass::Size() { return sizeof(*this); }

WalkLocomotionClass::WalkLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall FlyLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

ULONG __stdcall FlyLocomotionClass::AddRef() { return ++RefCount; }

ULONG __stdcall FlyLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall FlyLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall FlyLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall FlyLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

bool __stdcall FlyLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall FlyLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall FlyLocomotionClass::Process() { return false; }

void __stdcall FlyLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall FlyLocomotionClass::Stop_Moving() {}

void __stdcall FlyLocomotionClass::Do_Turn(unsigned short facing) {}

Layer __stdcall FlyLocomotionClass::In_Which_Layer() { return static_cast<Layer>(0); }

void __stdcall FlyLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall FlyLocomotionClass::ILocomotion_B8() {}

int FlyLocomotionClass::Size() { return sizeof(*this); }

FlyLocomotionClass::FlyLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall RocketLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

ULONG __stdcall RocketLocomotionClass::AddRef() { return ++RefCount; }

ULONG __stdcall RocketLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall RocketLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall RocketLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall RocketLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

bool __stdcall RocketLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall RocketLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall RocketLocomotionClass::Process() { return false; }

void __stdcall RocketLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall RocketLocomotionClass::Stop_Moving() {}

void __stdcall RocketLocomotionClass::Do_Turn(unsigned short facing) {}

Layer __stdcall RocketLocomotionClass::In_Which_Layer() { return static_cast<Layer>(0); }

void __stdcall RocketLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall RocketLocomotionClass::ILocomotion_B8() {}

int RocketLocomotionClass::Size() { return sizeof(*this); }

RocketLocomotionClass::RocketLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

// 0x54dc60
HRESULT __stdcall JumpjetLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

// 0x54df50
ULONG __stdcall JumpjetLocomotionClass::AddRef() { return ++RefCount; }

// 0x54df60
ULONG __stdcall JumpjetLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall JumpjetLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall JumpjetLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall JumpjetLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

HRESULT __stdcall JumpjetLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall JumpjetLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall JumpjetLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall JumpjetLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall JumpjetLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall JumpjetLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall JumpjetLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall JumpjetLocomotionClass::Process() { return false; }

void __stdcall JumpjetLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall JumpjetLocomotionClass::Stop_Moving() {}

void __stdcall JumpjetLocomotionClass::Do_Turn(unsigned short facing) {}

Layer __stdcall JumpjetLocomotionClass::In_Which_Layer() { return static_cast<Layer>(0); }

void __stdcall JumpjetLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall JumpjetLocomotionClass::ILocomotion_B8() {}

int JumpjetLocomotionClass::Size() { return sizeof(*this); }

JumpjetLocomotionClass::JumpjetLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

// 0x69ee30
HRESULT __stdcall ShipLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

// 0x6a4260
ULONG __stdcall ShipLocomotionClass::AddRef() { return ++RefCount; }

// 0x6a4270
ULONG __stdcall ShipLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall ShipLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall ShipLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall ShipLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

HRESULT __stdcall ShipLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall ShipLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall ShipLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall ShipLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall ShipLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall ShipLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall ShipLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall ShipLocomotionClass::Process() { return false; }

void __stdcall ShipLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall ShipLocomotionClass::Stop_Moving() {}

void __stdcall ShipLocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall ShipLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall ShipLocomotionClass::ILocomotion_B8() {}

int ShipLocomotionClass::Size() { return sizeof(*this); }

ShipLocomotionClass::ShipLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall TeleportLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

ULONG __stdcall TeleportLocomotionClass::AddRef() { return ++RefCount; }

ULONG __stdcall TeleportLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall TeleportLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall TeleportLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall TeleportLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall TeleportLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall TeleportLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall TeleportLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall TeleportLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall TeleportLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall TeleportLocomotionClass::Process() { return false; }

void __stdcall TeleportLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall TeleportLocomotionClass::Stop_Moving() {}

void __stdcall TeleportLocomotionClass::Do_Turn(unsigned short facing) {}

Layer __stdcall TeleportLocomotionClass::In_Which_Layer() { return static_cast<Layer>(0); }

void __stdcall TeleportLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall TeleportLocomotionClass::ILocomotion_B8() {}

HRESULT __stdcall TeleportLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall TeleportLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

int TeleportLocomotionClass::Size() { return sizeof(*this); }

TeleportLocomotionClass::TeleportLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall TunnelLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall TunnelLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall TunnelLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

bool __stdcall TunnelLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall TunnelLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall TunnelLocomotionClass::Process() { return false; }

void __stdcall TunnelLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall TunnelLocomotionClass::Stop_Moving() {}

void __stdcall TunnelLocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall TunnelLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall TunnelLocomotionClass::ILocomotion_B8() {}

int TunnelLocomotionClass::Size() { return sizeof(*this); }

TunnelLocomotionClass::TunnelLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

HRESULT __stdcall MechLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall MechLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall MechLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

bool __stdcall MechLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall MechLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall MechLocomotionClass::Process() { return false; }

void __stdcall MechLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall MechLocomotionClass::Stop_Moving() {}

void __stdcall MechLocomotionClass::Do_Turn(unsigned short facing) {}

void __stdcall MechLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall MechLocomotionClass::ILocomotion_B8() {}

int MechLocomotionClass::Size() { return sizeof(*this); }

MechLocomotionClass::MechLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

// 0x4b6470
HRESULT __stdcall DropPodLocomotionClass::QueryInterface(const IID&, void** ppv) { if (ppv) { *ppv = static_cast<ILocomotion*>(static_cast<void*>(this)); AddRef(); return S_OK; } return E_POINTER; }

// 0x4b66a0
ULONG __stdcall DropPodLocomotionClass::AddRef() { return ++RefCount; }

// 0x4b66b0
ULONG __stdcall DropPodLocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall DropPodLocomotionClass::GetClassID(CLSID* class_id) { return S_OK; }

HRESULT __stdcall DropPodLocomotionClass::Begin_Piggyback(ILocomotion* pointer) { return S_OK; }

HRESULT __stdcall DropPodLocomotionClass::End_Piggyback(ILocomotion** pointer) { return S_OK; }

bool __stdcall DropPodLocomotionClass::Is_Ok_To_End() { return false; }

HRESULT __stdcall DropPodLocomotionClass::Piggyback_CLSID(GUID* classid) { return S_OK; }

bool __stdcall DropPodLocomotionClass::Is_Piggybacking() { return false; }

bool __stdcall DropPodLocomotionClass::Is_Moving() { return false; }

CoordStruct* __stdcall DropPodLocomotionClass::Destination(CoordStruct* out) { return nullptr; }

bool __stdcall DropPodLocomotionClass::Process() { return false; }

void __stdcall DropPodLocomotionClass::Move_To(CoordStruct to) { (void)to; }

void __stdcall DropPodLocomotionClass::Stop_Moving() {}

void __stdcall DropPodLocomotionClass::Do_Turn(unsigned short facing) {}

int __stdcall DropPodLocomotionClass::Drawing_Code() { return 0; }

void __stdcall DropPodLocomotionClass::Mark_All_Occupation_Bits(int mark) {}

void __stdcall DropPodLocomotionClass::ILocomotion_B8() {}

HRESULT __stdcall DropPodLocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall DropPodLocomotionClass::Save(IStream* stream, int clear_dirty) { (void)stream; (void)clear_dirty; return S_OK; }

int DropPodLocomotionClass::Size() { return sizeof(*this); }

DropPodLocomotionClass::DropPodLocomotionClass(noinit_t) noexcept : LocomotionClass(noinit_t {}) {}

// CDTimerClass - frame countdown remaining (0x426630)
// Formerly misnamed Locomotor::GetSpeed (fabricated class). Reads
// {StartTime@0, pad@4, TimeLeft@8}; returns frames left, or TimeLeft
// itself when not started (StartTime == -1).
int CDTimerClass::TimeRemaining()
{
    int result = TimeLeft;
    if (StartTime != -1)
    {
        if (g_CurrentFrame - StartTime >= result)
            return 0;
        result -= g_CurrentFrame - StartTime;
    }
    return result;
}

// FacingClass - rotate the displayed facing one step toward the desired one
// (0x4c9220). Interpolates StartFacing proportionally to the rotation time
// already elapsed, then adopts the new desired facing and restarts the
// rotation timer. Word widths follow the original (DirStruct low word holds
// the facing value).
int FacingClass::Update(unsigned int* a1)
{
    unsigned short v2 = (unsigned short)DesiredFacing;
    if (v2 == *(unsigned short*)a1)
        return 0;

    short rot = (short)ROT;
    unsigned int v11 = DesiredFacing;
    if (rot <= 0)
    {
        // no turn rate: keep the current desired facing (snap path)
    }
    else
    {
        int timeLeft = RotationTimer.TimeLeft;
        int startTime = RotationTimer.StartTime;
        if (startTime != -1 && g_CurrentFrame - startTime >= timeLeft)
        {
            // rotation window exhausted: snap path
        }
        else if (timeLeft == 0)
        {
            // nothing left to interpolate: snap path
        }
        else
        {
            short delta = (short)(v2 - (unsigned short)StartFacing);
            int deltaAbs = (delta ^ (delta >> 31)) - (delta >> 31);
            int steps = deltaAbs / rot;
            unsigned int v16 = DesiredFacing;
            int frameNow = g_CurrentFrame;
            if ((short)steps > 0)
            {
                int weight = RotationTimer.TimeLeft;
                int start2 = RotationTimer.StartTime;
                short v10 = (short)weight;
                if (start2 != -1)
                {
                    v10 = 0;
                    if (frameNow - start2 < weight)
                        v10 = (short)(weight - (frameNow - start2));
                }
                v16 = (v16 & 0xFFFF0000u) | (unsigned short)(v10 * (delta / (short)steps));
            }
            v11 = v16;
        }
    }
    StartFacing = v11;
    unsigned int v12 = *a1;
    DesiredFacing = v12;
    int frame = g_CurrentFrame;
    if (rot > 0)
    {
        short d2 = (short)((unsigned short)v12 - (unsigned short)StartFacing);
        int d2Abs = (d2 ^ (d2 >> 31)) - (d2 >> 31);
        RotationTimer.StartTime = frame;
        RotationTimer.pad_04 = 0;  // original stored dead stack garbage
        RotationTimer.TimeLeft = d2Abs / rot;
    }
    return 1;
}

// FacingClass - network-sync variant (0x4c9300): step the displayed facing by
// the elapsed fraction, then either accept the desired facing immediately
// (timer zeroed, returns 0 when already in place) or snap both facings to it.
int FacingClass::Set_SyncLog(unsigned int* a1)
{
    unsigned int v11 = DesiredFacing;
    short v7 = 0;
    int steps = 0;
    int timeLeft = 0;
    int v6 = 0;
    if ((short)ROT > 0)
    {
        if (RotationTimer.TimeRemaining() != 0)
        {
            short delta = (short)((unsigned short)DesiredFacing - (unsigned short)StartFacing);
            int deltaAbs = (delta ^ (delta >> 31)) - (delta >> 31);
            steps = deltaAbs / (short)ROT;
            v11 = DesiredFacing;
            if ((short)steps <= 0)
            {
                // no step this frame; keep v11 as-is
            }
            else
            {
                timeLeft = RotationTimer.TimeLeft;
                v6 = RotationTimer.StartTime;
                v7 = (short)timeLeft;  // fallthrough default (unstarted timer)
                if (v6 != -1)
                {
                    int elapsed = g_CurrentFrame - v6;
                    v7 = 0;  // expired (elapsed >= total) leaves the weight at 0
                    if (elapsed < timeLeft)
                        v7 = (short)(timeLeft - elapsed);
                }
                v11 = (v11 & 0xFFFF0000u) | (unsigned short)(v7 * (delta / (short)steps));
            }
        }
    }
    int frame = g_CurrentFrame;
    int result;
    if ((unsigned short)v11 == *(unsigned short*)a1)
    {
        result = 0;
        RotationTimer.StartTime = frame;
        RotationTimer.pad_04 = 0;  // dead garbage pad
    }
    else
    {
        DesiredFacing = *a1;
        StartFacing = *a1;
        RotationTimer.StartTime = frame;
        RotationTimer.pad_04 = 0;
        result = 1;
    }
    RotationTimer.TimeLeft = 0;
    return result;
}
}

