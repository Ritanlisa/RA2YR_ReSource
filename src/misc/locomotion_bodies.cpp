// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/locomotion.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "locomotion.hpp"
#include "object/foot.hpp"  // full FootClass for locomotor member access
#include "structure/globals_structure.hpp"  // g_CurrentFrame (Frame @ 0xA8ED84)

namespace gamemd {
// 0x55a9b0
HRESULT __stdcall LocomotionClass::QueryInterface(const IID& iid, void** ppv) {
  char *v4; // ecx
  char *v5; // ecx

  if ( !ppv ) /*0x55a9b6*/
    return -2147467261; /*0x55a9b8*/
  *ppv = 0; /*0x55a9d9*/
  if ( !memcmp(iid, &IID_IUnknown, 0x10u) ) /*0x55a9df*/
  {
    if ( this ) /*0x55a9e5*/
      v4 = &this->ILocomotion[4]; /*0x55a9e7*/
    else
      v4 = 0; /*0x55a9ec*/
    *ppv = v4; /*0x55a9ee*/
  }
  if ( !memcmp(iid, &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
    *ppv = this; /*0x55aa03*/
  if ( !memcmp(iid, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
  {
    if ( this ) /*0x55aa1a*/
      v5 = &this->ILocomotion[4]; /*0x55aa1c*/
    else
      v5 = 0; /*0x55aa21*/
    *ppv = v5; /*0x55aa23*/
  }
  if ( !memcmp(iid, &IID_IPersist, 0x10u) ) /*0x55aa33*/
    *ppv = this; /*0x55aa3a*/
  if ( !*ppv ) /*0x55aa3c*/
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
        HRESULT hr = stream->Write((const char*)&this->q020, Size(), nullptr);
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
  int v3; // ecx

  LocomotionClass::Init((unsigned int *)this); /*0x69ec53*/
  this->u32_1C = 0; /*0x69ec5d*/
  this->q020 = 0; /*0x69ec60*/
  g_CurrentFrame = g_CurrentFrame; /*0x69ec63*/
  this->u32_2C = 0; /*0x69ec69*/
  this->q024 = g_CurrentFrame; /*0x69ec6c*/
  this->u32_30 = 0; /*0x69ec6f*/
  this->q034 = g_OverlayTypeConfig; /*0x69ec78*/
  this->q038 = qword_B077FC; /*0x69ec80*/
  this->q040 = g_OverlayTypeConfig; /*0x69ec95*/
  this->q044 = qword_B077FC; /*0x69ec9e*/
  v3 = IDA_HIDWORD(qword_B077FC); /*0x69eca1*/
  this->q050 = 0; /*0x69eca7*/
  this->u32_4C = 0; /*0x69ecaa*/
  this->q048 = v3; /*0x69ecad*/
  this->ptr_24 = 0; /*0x69ecb3*/
  this->q058 = -1; /*0x69ecb6*/
  this->q05C = -1; /*0x69ecb9*/
  this->u8_60 = 0; /*0x69ecbc*/
  this->__pad_061 = 0; /*0x69ecbf*/
  this->u8_62 = 0; /*0x69ecc2*/
  this->u8_63 = 0; /*0x69ecc5*/
  this->q064 = 0; /*0x69ecc8*/
  this->u32_65 = 1; /*0x69eccb*/
  this->q068 = 0; /*0x69eccf*/
  *(unsigned int *)this = &(void*)(void*)(void*)(void*)(void*)(void*)&ShipLocomotionClass_vftable; /*0x69ecd2*/
  this->vtable2 = &(void*)(void*)(void*)(void*)(void*)(void*)&ShipLocomotionClass_vftable; /*0x69ecd8*/
  this->ptr_18 = &off_7F2D68; /*0x69ecdf*/
  return this; /*0x69ece8*/
