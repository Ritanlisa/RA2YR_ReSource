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
// 0x426630
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
// 0x4C9220
void FacingClass::Update(unsigned int* a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v2; // ax
  __int16 ROT; // bp
  int StartTime; // edi
  int TimeLeft; // edx
  __int16 v10; // di
  IUnknown *v11; // eax
  DirStruct v12; // edx
  CDTimerClass *p_RotationTimer; // ecx
  IUnknown *v16; // [esp+0h] [ebp-10h]
  v2 = this->DesiredFacing; /*0x4c9224*/
  if ( LOWORD(this->DesiredFacing) == desiredFacing->Value ) /*0x4c922d*/
    return 0; /*0x4c92f7*/
  ROT = this->ROT; /*0x4c9235*/
  if ( ROT <= 0 ) /*0x4c923e*/
    goto LABEL_15; /*0x4c923e*/
  StartTime = this->RotationTimer.StartTime; /*0x4c9240*/
  TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9243*/
  if ( StartTime != -1 ) /*0x4c924f*/
  {
    if ( *(_DWORD *)&HouseClass_Player[45112] - StartTime >= TimeLeft ) /*0x4c9257*/
    {
LABEL_15:
      v11 = (IUnknown *)this->DesiredFacing; /*0x4c92af*/
      goto LABEL_16; /*0x4c92af*/
    }
    TimeLeft -= *(_DWORD *)&HouseClass_Player[45112] - StartTime; /*0x4c9259*/
  }
  if ( !TimeLeft ) /*0x4c925d*/
    goto LABEL_15; /*0x4c925d*/
  int v6 = (__int16)(v2 - LOWORD(this->StartFacing)); /*0x4c9266*/
  int v7 = abs16(v2 - LOWORD(this->StartFacing)) / ROT; /*0x4c9271*/
  v16 = (IUnknown *)this->DesiredFacing; /*0x4c9275*/
  if ( (__int16)v7 > 0 ) /*0x4c927c*/
  {
    int v8 = this->RotationTimer.StartTime; /*0x4c927e*/
    int v9 = this->RotationTimer.TimeLeft; /*0x4c9281*/
    if ( v8 != -1 ) /*0x4c9287*/
    {
      if ( *(_DWORD *)&HouseClass_Player[45112] - v8 >= v9 ) /*0x4c928f*/
      {
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      }
      LOWORD(v9) = v9 - (*(_WORD *)&HouseClass_Player[45112] - v8); /*0x4c9291*/
    }
    v10 = v9; /*0x4c9293*/
LABEL_12:
    LOWORD(v16) = (_WORD)v16 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  }
  v11 = v16; /*0x4c92a5*/
LABEL_16:
  this->StartFacing = (unsigned int)v11; /*0x4c92b1*/
  v12 = *desiredFacing; /*0x4c92bb*/
  this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c92bd*/
  if ( ROT > 0 ) /*0x4c92bf*/
  {
    int v13 = abs16(v12.Value - LOWORD(this->StartFacing)) / ROT; /*0x4c92da*/
    p_RotationTimer = &this->RotationTimer; /*0x4c92e0*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player[45112]; /*0x4c92e3*/
  int v17; // [esp+8h] [ebp-8h]
    p_RotationTimer->pad_04 = v17; /*0x4c92e5*/
    p_RotationTimer->TimeLeft = v13; /*0x4c92e8*/
  }
  return 1; /*0x4c92f1*/
}

// FacingClass - network-sync variant (0x4c9300): step the displayed facing by
// the elapsed fraction, then either accept the desired facing immediately
// (timer zeroed, returns 0 when already in place) or snap both facings to it.
// 0x4C9300
int FacingClass::Set_SyncLog(unsigned int* a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  TerrainTypeClass *v3; // ebx
  int TimeLeft; // edx
  __int16 v7; // cx
  unsigned int v8; // ecx
  CDTimerClass *p_RotationTimer; // esi
  char result; // al
  unsigned int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]
  if ( SLOWORD(this->ROT) > 0 ) /*0x4c930c*/
  {
    v3 = (TerrainTypeClass *)&this->RotationTimer; /*0x4c930e*/
    if ( CDTimerClass::TimeRemaining(&this->RotationTimer.StartTime) ) /*0x4c9313*/
    {
      int v4 = abs16(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / SLOWORD(this->ROT); /*0x4c9333*/
      v11 = this->DesiredFacing; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      TimeLeft = this->RotationTimer.TimeLeft; /*0x4c9340*/
      int v6 = *(_DWORD *)v3->__pad_0; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( *(_DWORD *)&HouseClass_Player[45112] - v6 >= TimeLeft ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(TimeLeft) = TimeLeft - (*(_WORD *)&HouseClass_Player[45112] - v6); /*0x4c9356*/
      }
      v7 = TimeLeft; /*0x4c9358*/
LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(LOWORD(this->DesiredFacing) - LOWORD(this->StartFacing)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = this->DesiredFacing; /*0x4c9375*/
LABEL_12:
  if ( (_WORD)v8 == desiredFacing->Value ) /*0x4c937e*/
  {
    p_RotationTimer = &this->RotationTimer; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player[45112]; /*0x4c93b8*/
    p_RotationTimer->pad_04 = v12; /*0x4c93ba*/
  }
  else
  {
    this->DesiredFacing = (unsigned int)*desiredFacing; /*0x4c9382*/
    this->StartFacing = (unsigned int)*desiredFacing; /*0x4c9386*/
    p_RotationTimer = &this->RotationTimer; /*0x4c9390*/
    p_RotationTimer->StartTime = *(_DWORD *)&HouseClass_Player[45112]; /*0x4c9393*/
    p_RotationTimer->pad_04 = v12; /*0x4c9399*/
    result = 1; /*0x4c939c*/
  }
  p_RotationTimer->TimeLeft = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}
}

