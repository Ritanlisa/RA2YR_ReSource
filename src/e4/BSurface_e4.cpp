// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BSurface_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x410CE0
namespace gamemd {
unsigned int * BSurface::Construct(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v13; // ecx
  bool v14; // eax
  int v15; // eax
  bool v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v6 = a2; /*0x410ce5*/
  int v7 = a4; /*0x410ce9*/
  int v8 = a5; /*0x410cef*/
  this->q00B = a5; /*0x410cf3*/
  *this = v6; /*0x410cf8*/
  int v9 = a3; /*0x410cfa*/
  this->q00A = v7; /*0x410cfe*/
  this->Width = v9; /*0x410d01*/
  this->Height = v7; /*0x410d04*/
  this->LockCount = v8; /*0x410d07*/
  this->Height = 2 * v7 * v8; /*0x410d0f*/
  _DWORD * v10 = __2_YAPAXI_Z(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    bool v11 = this->q00A; /*0x410d22*/
    bool v12 = this->q00B; /*0x410d25*/
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
  v14 = this->q00A; /*0x410d5c*/
  a5 = this->q00B; /*0x410d5f*/
  this->Buffer = v13; /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  a4 = v14; /*0x410d6e*/
  (*(void (__thiscall **)(_DWORD *, int *, int))(*v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = this->q00B; /*0x410d8c*/
  this->q006 = v15; /*0x410d8f*/
  v17 = this->q00A * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  this->q009 = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  v19 = this->Buffer; /*0x410da3*/
  this->q007 = v18; /*0x410da6*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 96))(v19); /*0x410dab*/
  return this; /*0x410db0*/
}
}
} // namespace gamemd

// 0x7B8C60
namespace gamemd {
int BSurface::CreateTripleBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx

  if ( !this->Width ) /*0x7b8c66*/
    return 0; /*0x7b8e70*/
  IUnknown *v2 = *(_DWORD *)(this + 68); /*0x7b8c6f*/
  if ( v2 /*0x7b8c9a*/
    && (*(__int16 *)(this->Width + 2) > v2->IsAboveScreenMargin()
     || *(__int16 *)(this->Width + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 68) + 128))(*(_DWORD *)(this + 68))) )
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this + 68); /*0x7b8c9c*/
    if ( v3 ) /*0x7b8ca1*/
      (**v3)(v3, 1); /*0x7b8ca7*/
    *(_DWORD *)(this + 68) = 0; /*0x7b8ca9*/
  }
  IUnknown *v4 = *(_DWORD *)(this + 88); /*0x7b8cac*/
  if ( v4 /*0x7b8cd7*/
    && (*(__int16 *)(this->Width + 2) > v4->IsAboveScreenMargin()
     || *(__int16 *)(this->Width + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 88) + 128))(*(_DWORD *)(this + 88))) )
  {
    v5 = *(void (__thiscall ****)(_DWORD, int))(this + 88); /*0x7b8cd9*/
    if ( v5 ) /*0x7b8cde*/
      (**v5)(v5, 1); /*0x7b8ce4*/
    *(_DWORD *)(this + 88) = 0; /*0x7b8ce6*/
  }
  IUnknown *v6 = *(_DWORD *)(this + 108); /*0x7b8ce9*/
  if ( v6 /*0x7b8d14*/
    && (*(__int16 *)(this->Width + 2) > v6->IsAboveScreenMargin()
     || *(__int16 *)(this->Width + 4) > (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 108) + 128))(*(_DWORD *)(this + 108))) )
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(this + 108); /*0x7b8d16*/
    if ( v7 ) /*0x7b8d1b*/
      (**v7)(v7, 1); /*0x7b8d21*/
    *(_DWORD *)(this + 108) = 0; /*0x7b8d23*/
  }
  if ( this->q009 ) /*0x7b8d26*/
  {
    if ( !*(_DWORD *)(this + 68) ) /*0x7b8d33*/
    {
      CellStruct *v8 = __2_YAPAXI_Z(0x20u); /*0x7b8d3f*/
      if ( v8 ) /*0x7b8d46*/
      {
        IUnknown *v9 = this->Width; /*0x7b8d4b*/
        IUnknown *v10 = v9->q004; /*0x7b8d50*/
        int v11 = v9->q008; /*0x7b8d54*/
        int v12 = (*(int (__thiscall **)(_DWORD))(*this->q009 + 112))(this->q009); /*0x7b8d58*/
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
      *(_DWORD *)(this + 68) = v8; /*0x7b8d8c*/
    }
    if ( !*(_DWORD *)(this + 88) ) /*0x7b8d8f*/
    {
      IUnknown *v13 = __2_YAPAXI_Z(0x20u); /*0x7b8d9d*/
      if ( v13 ) /*0x7b8da4*/
      {
        IUnknown *v14 = this->Width; /*0x7b8da6*/
        IUnknown *v15 = v14->q004; /*0x7b8dac*/
        int v16 = v14->q008; /*0x7b8db0*/
        int v17 = (*(int (__thiscall **)(_DWORD))(*this->q009 + 112))(this->q009); /*0x7b8db6*/
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
      *(_DWORD *)(this + 88) = v13; /*0x7b8dea*/
    }
    if ( !*(_DWORD *)(this + 108) ) /*0x7b8ded*/
    {
      IUnknown *v18 = __2_YAPAXI_Z(0x20u); /*0x7b8dfb*/
      if ( v18 ) /*0x7b8e02*/
      {
        IUnknown *v19 = this->Width; /*0x7b8e07*/
        IUnknown *v20 = v19->q004; /*0x7b8e0c*/
        int v21 = v19->q008; /*0x7b8e10*/
        int v22 = (*(int (__thiscall **)(_DWORD))(*this->q009 + 112))(this->q009); /*0x7b8e14*/
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
      *(_DWORD *)(this + 108) = v18; /*0x7b8e48*/
    }
  }
  return *(_DWORD *)(this + 68) && *(_DWORD *)(this + 88) && *(_DWORD *)(this + 108); /*0x7b8e62*/
}
}
} // namespace gamemd

// 0x7BC970
namespace gamemd {
unsigned int * BSurface::ConstructEx(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v13; // ecx
  bool v14; // eax
  int v15; // eax
  bool v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v6 = a2; /*0x7bc975*/
  int v7 = a4; /*0x7bc979*/
  int v8 = a5; /*0x7bc97f*/
  this->q00B = a5; /*0x7bc983*/
  *this = v6; /*0x7bc988*/
  int v9 = a3; /*0x7bc98a*/
  this->q00A = v7; /*0x7bc98e*/
  this->Width = v9; /*0x7bc991*/
  this->Height = v7; /*0x7bc994*/
  this->LockCount = v8; /*0x7bc997*/
  this->Height = 2 * v7 * v8; /*0x7bc99f*/
  _DWORD * v10 = __2_YAPAXI_Z(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    bool v11 = this->q00A; /*0x7bc9b2*/
    bool v12 = this->q00B; /*0x7bc9b5*/
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
  v14 = this->q00A; /*0x7bc9ec*/
  a5 = this->q00B; /*0x7bc9ef*/
  this->Buffer = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  a4 = v14; /*0x7bc9fe*/
  (*(void (__thiscall **)(_DWORD *, int *, int))(*v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = this->q00B; /*0x7bca1f*/
  this->q006 = v15; /*0x7bca22*/
  v17 = this->q00A * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  this->q009 = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  v19 = this->Buffer; /*0x7bca36*/
  this->q007 = v18; /*0x7bca39*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 96))(v19); /*0x7bca3e*/
  return this; /*0x7bca43*/
}
}
} // namespace gamemd

// 0x4114F0
char BSurface::Stub(int a1, int a2)
{
return 1;
}

// 0x411630
namespace gamemd {
int BSurface::GetBytesPerPixel()
{
{
    return this->BytesPerPixel;
}
}
} // namespace gamemd

// 0x411640
namespace gamemd {
int BSurface::GetPitch()
{
{
    return this->BytesPerPixel *(void**)this->GetWidth();
}
}
} // namespace gamemd

// 0x411650
namespace gamemd {
BSurface * BSurface::ScalarDtor(char a2)
{
{
    Vector::Clear((int)(this + 20));
    *(int *)this = &Surface_Vtable;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BSurface *)this;
}
}
} // namespace gamemd
