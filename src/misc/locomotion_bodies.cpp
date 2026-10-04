// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/locomotion.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "locomotion.hpp"
#include "object/foot.hpp"  // full FootClass for locomotor member access
#include "structure/globals_structure.hpp"  // g_CurrentFrame (Frame @ 0xA8ED84)

namespace gamemd {
// 0x55a9b0
HRESULT __stdcall LocomotionClass::QueryInterface(const IID& iid, void** ppv)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55a9b0)
}
ULONG __stdcall LocomotionClass::AddRef() { return ++RefCount; }

ULONG __stdcall LocomotionClass::Release() { if (--RefCount == 0) { delete this; return 0; } return RefCount; }

HRESULT __stdcall LocomotionClass::IsDirty() { return Dirty ? S_OK : S_FALSE; }

HRESULT __stdcall LocomotionClass::Load(IStream* stream) { return S_OK; }

HRESULT __stdcall LocomotionClass::Save(IStream* stream, int clear_dirty) {
        if (!stream) return E_POINTER;
        HRESULT hr = stream->Write((const char*)((unsigned char *)(this) + 0x020), Size(), nullptr);
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
bool LocomotionClass::Process()
{
    return true; // TODO stub - quarantined G42 (raw dialect residue; truth = ida_cache)
}
} // namespace gamemd
