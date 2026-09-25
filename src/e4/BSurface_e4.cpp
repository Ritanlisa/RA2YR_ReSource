// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x410CE0
namespace gamemd {
unsigned int * BSurface::Construct(int a2, int a3, int v14, int a5)
{
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19;

  a2 = a2; /*0x410ce5*/
  v14 = v14; /*0x410ce9*/
  a5 = a5; /*0x410cef*/
  *(&this->Width1) = a5; /*0x410cf3*/
  *(_DWORD *)this = a2; /*0x410cf8*/
  a3 = a3; /*0x410cfa*/
  *(&this->Width0) = v14; /*0x410cfe*/
  this->Width = a3; /*0x410d01*/
  this->Height = v14; /*0x410d04*/
  this->LockCount = a5; /*0x410d07*/
  this->u32_20 = 2 * v14 * a5; /*0x410d0f*/
  v10 = RA2_OPNEW(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = *(&this->Width0); /*0x410d22*/
    v12 = *(&this->Width1); /*0x410d25*/
    v10[1] = v11; /*0x410d28*/
    v10[2] = v12; /*0x410d30*/
    v10[3] = 0; /*0x410d38*/
    *v10 = &XSurface_Vtable; /*0x410d3b*/
    v10[4] = 2; /*0x410d41*/
    Buffer::Init(v10 + 5, 0, 2 * v12 * v11); /*0x410d48*/
    *v10 = &BSurface_Vtable; /*0x410d4d*/
    v13 = v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = *(&this->Width0); /*0x410d5c*/
  a5 = *(&this->Width1); /*0x410d5f*/
  this->Buffer = v13; /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  v14 = v14; /*0x410d6e*/
  (*(void (__thiscall **)(_DWORD *, int *, int))(*v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = *(&this->Width1); /*0x410d8c*/
  this->u32_18 = v15; /*0x410d8f*/
  v17 = *(&this->Width0) * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  this->q024 = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  v19 = this->Buffer; /*0x410da3*/
  this->q01C = v18; /*0x410da6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 96))(v19); /*0x410dab*/
  return this; /*0x410db0*/
}
}
// 0x7B8C60
namespace gamemd {
int BSurface::CreateTripleBuffer()
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  _DWORD *v18; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // eax

  if ( !this->u32_4 ) /*0x7b8c66*/
    return 0; /*0x7b8e70*/
  v2 = this->q044; /*0x7b8c6f*/
  if ( v2 /*0x7b8c9a*/
    && (*(__int16 *)(this->u32_4 + 2) > (*(int (__thiscall **)(int))(v2->u32_7C)(v2)
     || *(__int16 *)(this->u32_4 + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0188) + 128))(this->q044)) )
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(&this->q0188); /*0x7b8c9c*/
    if ( v3 ) /*0x7b8ca1*/
      (**v3)(v3, 1); /*0x7b8ca7*/
    this->q044 = 0; /*0x7b8ca9*/
  }
  v4 = this->q058; /*0x7b8cac*/
  if ( v4 /*0x7b8cd7*/
    && (*(__int16 *)(this->u32_4 + 2) > (*(int (__thiscall **)(int))(v4->u32_7C)(v4)
     || *(__int16 *)(this->u32_4 + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0208) + 128))(this->q058)) )
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(&this->q0208); /*0x7b8cd9*/
    if ( v5 ) /*0x7b8cde*/
      (**v5)(v5, 1); /*0x7b8ce4*/
    this->q058 = 0; /*0x7b8ce6*/
  }
  v6 = this->q06C; /*0x7b8ce9*/
  if ( v6 /*0x7b8d14*/
    && (*(__int16 *)(this->u32_4 + 2) > (*(int (__thiscall **)(int))(v6->u32_7C)(v6)
     || *(__int16 *)(this->u32_4 + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->u32_288) + 128))(this->q06C)) )
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(&this->u32_288); /*0x7b8d16*/
    if ( v7 ) /*0x7b8d1b*/
      (**v7)(v7, 1); /*0x7b8d21*/
    this->q06C = 0; /*0x7b8d23*/
  }
  if ( this->ptr_24 ) /*0x7b8d26*/
  {
    if ( !this->q044 ) /*0x7b8d33*/
    {
      v8 = RA2_OPNEW(0x20u); /*0x7b8d3f*/
      if ( v8 ) /*0x7b8d46*/
      {
        v9 = this->u32_4; /*0x7b8d4b*/
        v10 = v9->u32_4; /*0x7b8d50*/
        v11 = v9->u32_2; /*0x7b8d54*/
        v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8d58*/
        v8[4] = v12; /*0x7b8d5b*/
        v8[1] = v11; /*0x7b8d6a*/
        v8[2] = v10; /*0x7b8d6d*/
        v8[3] = 0; /*0x7b8d70*/
        *v8 = &XSurface_Vtable; /*0x7b8d77*/
        Buffer::Init(v8 + 5, 0, v10 * v11 * v12); /*0x7b8d7d*/
        *v8 = &BSurface_Vtable; /*0x7b8d82*/
      }
      else
      {
        v8 = 0; /*0x7b8d8a*/
      }
      this->q044 = v8; /*0x7b8d8c*/
    }
    if ( !this->q058 ) /*0x7b8d8f*/
    {
      v13 = RA2_OPNEW(0x20u); /*0x7b8d9d*/
      if ( v13 ) /*0x7b8da4*/
      {
        v14 = this->u32_4; /*0x7b8da6*/
        v15 = v14->u32_4; /*0x7b8dac*/
        v16 = v14->u32_2; /*0x7b8db0*/
        v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8db6*/
        v13[4] = v17; /*0x7b8db9*/
        v13[1] = v16; /*0x7b8dc8*/
        v13[2] = v15; /*0x7b8dcb*/
        v13[3] = 0; /*0x7b8dce*/
        *v13 = &XSurface_Vtable; /*0x7b8dd5*/
        Buffer::Init(v13 + 5, 0, v15 * v16 * v17); /*0x7b8ddb*/
        *v13 = &BSurface_Vtable; /*0x7b8de0*/
      }
      else
      {
        v13 = 0; /*0x7b8de8*/
      }
      this->q058 = v13; /*0x7b8dea*/
    }
    if ( !this->q06C ) /*0x7b8ded*/
    {
      v18 = RA2_OPNEW(0x20u); /*0x7b8dfb*/
      if ( v18 ) /*0x7b8e02*/
      {
        v19 = this->u32_4; /*0x7b8e07*/
        v20 = v19->u32_4; /*0x7b8e0c*/
        v21 = v19->u32_2; /*0x7b8e10*/
        v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8e14*/
        v18[4] = v22; /*0x7b8e17*/
        v18[1] = v21; /*0x7b8e26*/
        v18[2] = v20; /*0x7b8e29*/
        v18[3] = 0; /*0x7b8e2c*/
        *v18 = &XSurface_Vtable; /*0x7b8e33*/
        Buffer::Init(v18 + 5, 0, v20 * v21 * v22); /*0x7b8e39*/
        *v18 = &BSurface_Vtable; /*0x7b8e3e*/
      }
      else
      {
        v18 = 0; /*0x7b8e46*/
      }
      this->q06C = v18; /*0x7b8e48*/
    }
  }
  return this->q044 && this->q058 && this->q06C; /*0x7b8e62*/
}
}
// 0x7BC970
namespace gamemd {
unsigned int * BSurface::ConstructEx(int a2, int a3, int v14, int a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx

  v6 = a2; /*0x7bc975*/
  v7 = v14; /*0x7bc979*/
  v8 = a5; /*0x7bc97f*/
  *(this + 11) = a5; /*0x7bc983*/
  *this = v6; /*0x7bc988*/
  v9 = a3; /*0x7bc98a*/
  *(this + 10) = v7; /*0x7bc98e*/
  *(this + 1) = v9; /*0x7bc991*/
  *(this + 2) = v7; /*0x7bc994*/
  *(this + 3) = v8; /*0x7bc997*/
  *(this + 8) = 2 * v7 * v8; /*0x7bc99f*/
  v10 = RA2_OPNEW(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = *(this + 10); /*0x7bc9b2*/
    v12 = *(this + 11); /*0x7bc9b5*/
    v10[1] = v11; /*0x7bc9b8*/
    v10[2] = v12; /*0x7bc9c0*/
    v10[3] = 0; /*0x7bc9c8*/
    *v10 = &XSurface_Vtable; /*0x7bc9cb*/
    v10[4] = 2; /*0x7bc9d1*/
    Buffer::Init(v10 + 5, 0, 2 * v12 * v11); /*0x7bc9d8*/
    *v10 = &BSurface_Vtable; /*0x7bc9dd*/
    v13 = v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = *(this + 10); /*0x7bc9ec*/
  a5 = *(this + 11); /*0x7bc9ef*/
  *(this + 5) = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  v14 = v14; /*0x7bc9fe*/
  (*(void (__thiscall **)(_DWORD *, int *, int))(*v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 5) + 92))(*(this + 5), 0, 0); /*0x7bca1c*/
  v16 = *(this + 11); /*0x7bca1f*/
  *(this + 6) = v15; /*0x7bca22*/
  v17 = *(this + 10) * v16; /*0x7bca25*/
  *(this + 4) = 0; /*0x7bca29*/
  *(this + 9) = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  v19 = *(this + 5); /*0x7bca36*/
  *(this + 7) = v18; /*0x7bca39*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 96))(v19); /*0x7bca3e*/
  return this; /*0x7bca43*/
}
}
// 0x4114F0
char BSurface::Stub(int a1, int a2)
{
  return 1; /*0x4114f2*/
}
// 0x411630
namespace gamemd {
int BSurface::GetBytesPerPixel()
{
  return *(this + 4); /*0x411633*/
}
} // namespace gamemd

// 0x411640
namespace gamemd {
int BSurface::GetPitch()
{
  return *(this + 4) * (*(int (__thiscall **)(_DWORD *))(*this + 124))(this); /*0x41164c*/
}
} // namespace gamemd

// 0x411650
namespace gamemd {
BSurface * BSurface::ScalarDtor(char a2)
{
  Vector::Clear(this + 20); /*0x411656*/
  *(_DWORD *)this = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    RA2_OPDEL(); /*0x41166a*/
  return this; /*0x411674*/
}
} // namespace gamemd
