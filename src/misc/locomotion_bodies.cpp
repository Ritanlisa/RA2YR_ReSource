// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/locomotion.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "locomotion.hpp"
#include "object/foot.hpp"  // full FootClass for locomotor member access
#include "structure/globals_structure.hpp"  // g_CurrentFrame (Frame @ 0xA8ED84)
#include "core/ida_vtables.h"  // gC_vftable3
extern int g_OverlayTypeConfig;  // data: 0xB077F8 (e4_globals_decls.hpp:1335)

namespace gamemd {
// 0x55a9b0
HRESULT __stdcall LocomotionClass::QueryInterface(const IID& a2, void** a3)
{
    char *v4; // ecx
    char *v5; // ecx

    if ( !a3 ) /*0x55a9b6*/
      return -2147467261; /*0x55a9b8*/
    *a3 = 0; /*0x55a9d9*/
    if ( !memcmp((const void *)(a2), &IID_IUnknown, 0x10u) ) /*0x55a9df*/
    {
      if ( this ) /*0x55a9e5*/
        v4 = &this->ILocomotion[4]; /*0x55a9e7*/
      else
        v4 = 0; /*0x55a9ec*/
      *a3 = v4; /*0x55a9ee*/
    }
    if ( !memcmp((const void *)(a2), &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
      *a3 = this; /*0x55aa03*/
    if ( !memcmp(a2, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
    {
      if ( this ) /*0x55aa1a*/
        v5 = &this->ILocomotion[4]; /*0x55aa1c*/
      else
        v5 = 0; /*0x55aa21*/
      *a3 = v5; /*0x55aa23*/
    }
    if ( !memcmp((const void *)(a2), &IID_IPersist, 0x10u) ) /*0x55aa33*/
      *a3 = this; /*0x55aa3a*/
    if ( !*a3 ) /*0x55aa3c*/
      return -2147467262; /*0x55aa41*/
    (*(void (__stdcall **)(LocomotionClass *))(*(unsigned int *)this->ILocomotion + 4))(this); /*0x55aa4c*/
    return 0; /*0x55a9bd*/
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
    int v2; // ecx
    int v3; // ecx

    LocomotionClass::Init(this); /*0x69ec53*/
    *((unsigned int *)this + 7) = 0; /*0x69ec5d*/
    *((unsigned int *)this + 8) = 0; /*0x69ec60*/
    v2 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x69ec63*/
    *((unsigned int *)this + 11) = 0; /*0x69ec69*/
    *((unsigned int *)this + 9) = v2; /*0x69ec6c*/
    *((unsigned int *)this + 12) = 0; /*0x69ec6f*/
    *((unsigned int *)this + 13) = g_OverlayTypeConfig; /*0x69ec78*/
    *((unsigned __int64 *)this + 7) = qword_B077FC; /*0x69ec80*/
    *((unsigned int *)this + 16) = g_OverlayTypeConfig; /*0x69ec95*/
    *((unsigned int *)this + 17) = qword_B077FC; /*0x69ec9e*/
    v3 = (unsigned int)((qword_B077FC) >> 32); /*0x69eca1*/
    *((unsigned int *)this + 20) = 0; /*0x69eca7*/
    *((unsigned int *)this + 19) = 0; /*0x69ecaa*/
    *((unsigned int *)this + 18) = v3; /*0x69ecad*/
    *((unsigned int *)this + 21) = 0; /*0x69ecb3*/
    *((unsigned int *)this + 22) = -1; /*0x69ecb6*/
    *((unsigned int *)this + 23) = -1; /*0x69ecb9*/
    *((unsigned char *)this + 96) = 0; /*0x69ecbc*/
    *((unsigned char *)this + 97) = 0; /*0x69ecbf*/
    *((unsigned char *)this + 98) = 0; /*0x69ecc2*/
    *((unsigned char *)this + 99) = 0; /*0x69ecc5*/
    *((unsigned char *)this + 100) = 0; /*0x69ecc8*/
    *((unsigned char *)this + 101) = 1; /*0x69eccb*/
    *((unsigned int *)this + 26) = 0; /*0x69eccf*/
    *(unsigned int *)this->ILocomotion = (unsigned int)(void *)&ShipLocomotionClass_vftable; /*0x69ecd2*/
    *(unsigned int *)&this->ILocomotion[4] = (unsigned int)(void *)&ShipLocomotionClass_vftable; /*0x69ecd8*/
    *((unsigned int *)this + 6) = (unsigned int)&off_7F2D68; /*0x69ecdf*/
    return (int)this->ILocomotion; /*0x69ece8*/
} // namespace gamemd
}
