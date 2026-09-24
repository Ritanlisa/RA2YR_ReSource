// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/misc/locomotion.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "locomotion.hpp"
#include "object/foot.hpp"  // full FootClass for locomotor member access
#include "structure/globals_structure.hpp"  // g_CurrentFrame (Frame @ 0xA8ED84)

namespace gamemd {
// 0x55a9b0
HRESULT __stdcall LocomotionClass::QueryInterface(const IID& iid, void** ppv) {
  int v4; // ecx
  int v5; // ecx

  if ( !ppv ) /*0x55a9b6*/
    return -2147467261; /*0x55a9b8*/
  *ppv = 0; /*0x55a9d9*/
  if ( !memcmp(iid, &IID_IUnknown, 0x10u) ) /*0x55a9df*/
  {
    if ( this ) /*0x55a9e5*/
      v4 = this + 4; /*0x55a9e7*/
    else
      v4 = 0; /*0x55a9ec*/
    *ppv = v4; /*0x55a9ee*/
  }
  if ( !memcmp(iid, &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
    *ppv = this; /*0x55aa03*/
  if ( !memcmp(iid, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
  {
    if ( this ) /*0x55aa1a*/
      v5 = this + 4; /*0x55aa1c*/
    else
      v5 = 0; /*0x55aa21*/
    *ppv = v5; /*0x55aa23*/
  }
  if ( !memcmp(iid, &IID_IPersist, 0x10u) ) /*0x55aa33*/
    *ppv = this; /*0x55aa3a*/
  if ( !*ppv ) /*0x55aa3c*/
    return -2147467262; /*0x55aa41*/
  (*(void (__stdcall **)(int))(*(_DWORD *)this + 4))(this); /*0x55aa4c*/
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
  wchar_t *v2; // ecx
  int v3; // ecx

  LocomotionClass::Init((_DWORD *)this); /*0x69ec53*/
  *(_DWORD *)(this + 28) = 0; /*0x69ec5d*/
  *(_DWORD *)(this + 32) = 0; /*0x69ec60*/
  v2 = g_CurrentFrame; /*0x69ec63*/
  *(_DWORD *)(this + 44) = 0; /*0x69ec69*/
  *(_DWORD *)(this + 36) = v2; /*0x69ec6c*/
  *(_DWORD *)(this + 48) = 0; /*0x69ec6f*/
  *(_DWORD *)(this + 52) = g_OverlayTypeConfig; /*0x69ec78*/
  *(_QWORD *)(this + 56) = qword_B077FC; /*0x69ec80*/
  *(_DWORD *)(this + 64) = g_OverlayTypeConfig; /*0x69ec95*/
  *(_DWORD *)(this + 68) = qword_B077FC; /*0x69ec9e*/
  v3 = HIDWORD(qword_B077FC); /*0x69eca1*/
  *(_DWORD *)(this + 80) = 0; /*0x69eca7*/
  *(_DWORD *)(this + 76) = 0; /*0x69ecaa*/
  *(_DWORD *)(this + 72) = v3; /*0x69ecad*/
  *(_DWORD *)(this + 84) = 0; /*0x69ecb3*/
  *(_DWORD *)(this + 88) = -1; /*0x69ecb6*/
  *(_DWORD *)(this + 92) = -1; /*0x69ecb9*/
  *(_BYTE *)(this + 96) = 0; /*0x69ecbc*/
  *(_BYTE *)(this + 97) = 0; /*0x69ecbf*/
  *(_BYTE *)(this + 98) = 0; /*0x69ecc2*/
  *(_BYTE *)(this + 99) = 0; /*0x69ecc5*/
  *(_BYTE *)(this + 100) = 0; /*0x69ecc8*/
  *(_BYTE *)(this + 101) = 1; /*0x69eccb*/
  *(_DWORD *)(this + 104) = 0; /*0x69eccf*/
  *(_DWORD *)this = &ShipLocomotionClass::`vftable'; /*0x69ecd2*/
  *(_DWORD *)(this + 4) = &ShipLocomotionClass::`vftable'; /*0x69ecd8*/
  *(_DWORD *)(this + 24) = &off_7F2D68; /*0x69ecdf*/
  return this; /*0x69ece8*/
}
        v10 = 0; /*0x4c92ab*/
        goto LABEL_12; /*0x4c92ad*/
      LOWORD(v9) = v9 - ((_WORD)g_CurrentFrame - v8); /*0x4c9291*/
    v10 = v9; /*0x4c9293*/
  LABEL_12:
    LOWORD(v16) = v16 - v10 * (v6 / (__int16)v7); /*0x4c9295*/
  v11 = v16; /*0x4c92a5*/
  LABEL_16:
  this->StartFacing = v11; /*0x4c92b1*/
  v12 = *(_DWORD *)a1; /*0x4c92bb*/
  *(_DWORD *)this = *(_DWORD *)a1; /*0x4c92bd*/
  if ( v3 > 0 ) /*0x4c92bf*/
  {
    v13 = abs16(v12 - this->StartFacing) / v3; /*0x4c92da*/
    v14 = &this->q020; /*0x4c92e0*/
    *v14 = g_CurrentFrame; /*0x4c92e3*/
    v14[1] = v17; /*0x4c92e5*/
    v14[2] = v13; /*0x4c92e8*/
  return 1; /*0x4c92f1*/
// 0x4C9300
int FacingClass::Set_SyncLog(unsigned int* a1)
{
  int *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  __int16 v7; // cx
  int v8; // ecx
  _DWORD *v9; // esi
  char result; // al
  int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+10h] [ebp-8h]

  if ( *((__int16 *)this + 10) > 0 ) /*0x4c930c*/
  {
    v3 = (int *)(this + 8); /*0x4c930e*/
    if ( Locomotor::GetSpeed((int *)this + 2) ) /*0x4c9313*/
    {
      v4 = abs16(*(_WORD *)this - *((_WORD *)this + 2)) / *((__int16 *)this + 10); /*0x4c9333*/
      v11 = *(_DWORD *)this; /*0x4c9337*/
      if ( (__int16)v4 <= 0 ) /*0x4c933e*/
      {
  LABEL_9:
        LOWORD(v8) = v11; /*0x4c936a*/
        goto LABEL_12; /*0x4c936f*/
      }
      v5 = *((_DWORD *)this + 4); /*0x4c9340*/
      v6 = *v3; /*0x4c9343*/
      if ( v6 != -1 ) /*0x4c9348*/
      {
        if ( (int)g_CurrentFrame - v6 >= v5 ) /*0x4c9354*/
        {
          v7 = 0; /*0x4c9371*/
          goto LABEL_8; /*0x4c9373*/
        }
        LOWORD(v5) = v5 - ((_WORD)g_CurrentFrame - v6); /*0x4c9356*/
      }
      v7 = v5; /*0x4c9358*/
  LABEL_8:
      LOWORD(v11) = v11 - v7 * ((__int16)(*(_WORD *)this - *((_WORD *)this + 2)) / (__int16)v4); /*0x4c935a*/
      goto LABEL_9; /*0x4c9365*/
    }
  }
  v8 = *(_DWORD *)this; /*0x4c9375*/
  LABEL_12:
  if ( (_WORD)v8 == *(_WORD *)a1 ) /*0x4c937e*/
  {
    v9 = this + 8; /*0x4c93b3*/
    result = 0; /*0x4c93b6*/
    *v9 = g_CurrentFrame; /*0x4c93b8*/
    v9[1] = v12; /*0x4c93ba*/
  }
  else
  {
    *(_DWORD *)this = *a1; /*0x4c9382*/
    *((_DWORD *)this + 1) = *a1; /*0x4c9386*/
    v9 = this + 8; /*0x4c9390*/
    *v9 = g_CurrentFrame; /*0x4c9393*/
    v9[1] = v12; /*0x4c9399*/
    result = 1; /*0x4c939c*/
  }
  v9[2] = 0; /*0x4c939e*/
  return result; /*0x4c93a1*/
}