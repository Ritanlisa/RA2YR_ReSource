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
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"

// 0x410CE0
namespace gamemd {
unsigned int * BSurface::Construct(int a2, int a3, int v14, int a5)
{
  void * v10;
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  unsigned int * v14;
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  a2 = (int)(a2);
  v14 = (int)((void *)(v14));
  a5 = (int)((void *)(a5));
  this->q00B = (void *)(a5);
  *(unsigned int *)this->XSurface = a2; /*0x410cf8*/
  a3 = a3; /*0x410cfa*/
  *(void **)&this->q00A = v14; /*0x410cfe*/
  *(unsigned int *)&this->Width = a3; /*0x410d01*/
  *(void **)&this->Height = v14; /*0x410d04*/
  this->LockCount = a5; /*0x410d07*/
  this->Height = 2 * v14 * a5; /*0x410d0f*/
  v10 = RA2_OPNEW(0x20u); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = (unsigned int)(this->q00A);
    v12 = (unsigned int)(this->q00B);
    *(unsigned int *)((unsigned int)(v10)+ 4) = v11; /*0x410d28*/
    *(unsigned int *)((unsigned int)(v10)+ 8) = v12; /*0x410d30*/
    *(unsigned int *)((unsigned int)(v10)+ 12) = 0; /*0x410d38*/
    *(unsigned int *)v10 = &XSurface_Vtable; /*0x410d3b*/
    *(unsigned int *)((unsigned int)(v10)+ 16) = 2; /*0x410d41*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x410d48*/
    *(unsigned int *)v10 = &BSurface_Vtable; /*0x410d4d*/
    v13 = (void *)v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = (int)((unsigned int *)(this->q00A));
  a5 = (int)((unsigned int *)(this->q00B));
  this->Buffer = (unsigned int *)(v13);
  a2 = (int)((unsigned int *)(0));
  a3 = (int)((unsigned int *)(0));
  v14 = (int)((unsigned int *)(v14));
  (*(void (**)(void *, int *, int))(*(unsigned int *)v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = this->q00B; /*0x410d8c*/
  this->u32_18 = v15; /*0x410d8f*/
  v17 = this->q00A * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  this->u32_24 = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  Buffer = *(unsigned int *)&this->Buffer; /*0x410da3*/
  this->u32_1C = v18; /*0x410da6*/
  (*(void (**)(void *))(*(unsigned int *)Buffer + 96))(Buffer); /*0x410dab*/
  return this->XSurface; /*0x410db0*/
}
}
// 0x7B8C60
namespace gamemd {
int BSurface::CreateTripleBuffer()
{
  int v2; // ecx
  void (***v3)(unsigned int, int); // ecx
  int v4; // ecx
  void (***v5)(unsigned int, int); // ecx
  int v6; // ecx
  void (***v7)(unsigned int, int); // ecx
  unsigned int *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  unsigned int *v13; // edi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  unsigned int *v18; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // eax

  if ( !this->u32_4 ) /*0x7b8c66*/
    return 0; /*0x7b8e70*/
  v2 = this->q044; /*0x7b8c6f*/
  if ( v2 /*0x7b8c9a*/
    && (*(int16_t *)(this->u32_4 + 2) > (*(int (**)(int))(v2->u32_7C)(v2)
     || *(int16_t *)(this->u32_4 + 4) > (*(int (**)(unsigned int))(**(unsigned int **)(&this->q0188) + 128))(this->q044)) )
  {
    v3 = *(void (****)(unsigned int, int))(&this->q0188); /*0x7b8c9c*/
    if ( v3 ) /*0x7b8ca1*/
      (**v3)(v3, 1); /*0x7b8ca7*/
    this->q044 = 0; /*0x7b8ca9*/
  }
  v4 = this->q058; /*0x7b8cac*/
  if ( v4 /*0x7b8cd7*/
    && (*(int16_t *)(this->u32_4 + 2) > (*(int (**)(int))(v4->u32_7C)(v4)
     || *(int16_t *)(this->u32_4 + 4) > (*(int (**)(unsigned int))(**(unsigned int **)(&this->q0208) + 128))(this->q058)) )
  {
    v5 = *(void (****)(unsigned int, int))(&this->q0208); /*0x7b8cd9*/
    if ( v5 ) /*0x7b8cde*/
      (**v5)(v5, 1); /*0x7b8ce4*/
    this->q058 = 0; /*0x7b8ce6*/
  }
  v6 = this->q06C; /*0x7b8ce9*/
  if ( v6 /*0x7b8d14*/
    && (*(int16_t *)(this->u32_4 + 2) > (*(int (**)(int))(v6->u32_7C)(v6)
     || *(int16_t *)(this->u32_4 + 4) > (*(int (**)(unsigned int))(**(unsigned int **)(&this->u32_288) + 128))(this->q06C)) )
  {
    v7 = *(void (****)(unsigned int, int))(&this->u32_288); /*0x7b8d16*/
    if ( v7 ) /*0x7b8d1b*/
      (**v7)(v7, 1); /*0x7b8d21*/
    this->q06C = 0; /*0x7b8d23*/
  }
  if ( this->ptr_24 ) /*0x7b8d26*/
  {
    if ( !this->q044 ) /*0x7b8d33*/
    {
      v8 = operator new(0x20u); /*0x7b8d3f*/
      if ( v8 ) /*0x7b8d46*/
      {
        v9 = this->u32_4; /*0x7b8d4b*/
        v10 = v9->u32_4; /*0x7b8d50*/
        v11 = v9->u32_2; /*0x7b8d54*/
        v12 = (*(int (**)(unsigned int))(**(unsigned int **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8d58*/
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
      v13 = operator new(0x20u); /*0x7b8d9d*/
      if ( v13 ) /*0x7b8da4*/
      {
        v14 = this->u32_4; /*0x7b8da6*/
        v15 = v14->u32_4; /*0x7b8dac*/
        v16 = v14->u32_2; /*0x7b8db0*/
        v17 = (*(int (**)(unsigned int))(**(unsigned int **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8db6*/
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
      v18 = operator new(0x20u); /*0x7b8dfb*/
      if ( v18 ) /*0x7b8e02*/
      {
        v19 = this->u32_4; /*0x7b8e07*/
        v20 = v19->u32_4; /*0x7b8e0c*/
        v21 = v19->u32_2; /*0x7b8e10*/
        v22 = (*(int (**)(unsigned int))(**(unsigned int **)(&this->q00C6) + 112))(this->ptr_24); /*0x7b8e14*/
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
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  void *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  void *Buffer; // ecx

  a2 = a2; /*0x7bc975*/
  v14 = v14; /*0x7bc979*/
  a5 = a5; /*0x7bc97f*/
  this->q00B = a5; /*0x7bc983*/
  *(unsigned int *)this->XSurface = a2; /*0x7bc988*/
  a3 = a3; /*0x7bc98a*/
  this->q00A = v14; /*0x7bc98e*/
  *(unsigned int *)&this->Width = a3; /*0x7bc991*/
  this->Height = v14; /*0x7bc994*/
  this->LockCount = a5; /*0x7bc997*/
  this->Height = 2 * v14 * a5; /*0x7bc99f*/
  v10 = RA2_OPNEW(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = this->q00A; /*0x7bc9b2*/
    v12 = this->q00B; /*0x7bc9b5*/
    *(unsigned int *)(v10 + 4) = v11; /*0x7bc9b8*/
    *(unsigned int *)(v10 + 8) = v12; /*0x7bc9c0*/
    *(unsigned int *)(v10 + 12) = 0; /*0x7bc9c8*/
    *(unsigned int *)v10 = &XSurface_Vtable; /*0x7bc9cb*/
    *(unsigned int *)(v10 + 16) = 2; /*0x7bc9d1*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x7bc9d8*/
    *(unsigned int *)v10 = &BSurface_Vtable; /*0x7bc9dd*/
    v13 = (void *)v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = this->q00A; /*0x7bc9ec*/
  a5 = this->q00B; /*0x7bc9ef*/
  *(void **)&this->Buffer = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  v14 = v14; /*0x7bc9fe*/
  (*(void (**)(void *, int *, int))(*(unsigned int *)v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = this->q00B; /*0x7bca1f*/
  this->u32_18 = v15; /*0x7bca22*/
  v17 = this->q00A * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  this->u32_24 = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  Buffer = *(unsigned int *)&this->Buffer; /*0x7bca36*/
  this->u32_1C = v18; /*0x7bca39*/
  (*(void (**)(void *))(*(unsigned int *)Buffer + 96))(Buffer); /*0x7bca3e*/
  return this->XSurface; /*0x7bca43*/
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
  return this->BytesPerPixel; /*0x411633*/
}
} // namespace gamemd

// 0x411640
namespace gamemd {
int BSurface::GetPitch()
{
  return this->BytesPerPixel * (*(int (**)(BSurface *))(*(unsigned int *)this->XSurface + 124))(this); /*0x41164c*/
}
} // namespace gamemd

// 0x411650
namespace gamemd {
BSurface * BSurface::ScalarDtor(char a2)
{
  Vector::Clear((int)&this->Buffer); /*0x411656*/
  *(unsigned int *)this->XSurface = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    RA2_OPDEL(); /*0x41166a*/
  return this->XSurface; /*0x411674*/
}
} // namespace gamemd
