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
struct BSurface;  // fix_tu_missing_types

// 0x410CE0
namespace gamemd {  // G42.18 ns repair
unsigned int * BSurface::Construct(int a2, int a3, int v14, int a5, void *a5_2, void *a6_1, void *a7, void *a8, void *a9)
{

  void *v13; // ecx
  void *Buffer; // ecx

  int v6; // edi
  int v14; // eax
  v6 = v14; /*0x410ce5*/
  int v7; // ecx
  v7 = (int)(a5_2); /*0x410ce9*/
  int v8; // eax
  v8 = (int)(a5_2); /*0x410cef*/
  *((unsigned int *)v14 + 11) = (unsigned int)(a5_2); /*0x410cf3*/
  *(unsigned int *)v14->XSurface = v6; /*0x410cf8*/
  int v9 = v14; // edi /*0x410cfa*/
  *((unsigned int *)v14 + 10) = v7; /*0x410cfe*/
  v14->? = v9; /*0x410d01*/
  v14->? = v7; /*0x410d04*/
  v14->? = v8; /*0x410d07*/
  *((unsigned int *)v14 + 8) = 2 * v7 * v8; /*0x410d0f*/
  int v10; // edi
  v10 = (int)(__2_YAPAXI_Z(0x20u)); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    int v11; // eax
    v11 = *((unsigned int *)v14 + 10); /*0x410d22*/
    int v12; // ecx
    v12 = *((unsigned int *)v14 + 11); /*0x410d25*/
    *(unsigned int *)(v10 + 4) = v11; /*0x410d28*/
    *(unsigned int *)(v10 + 8) = v12; /*0x410d30*/
    *(unsigned int *)(v10 + 12) = 0; /*0x410d38*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x410d3b*/
    *(unsigned int *)(v10 + 16) = 2; /*0x410d41*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x410d48*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x410d4d*/
    v13 = (void *)v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = *((unsigned int *)v14 + 10); /*0x410d5c*/
  a5_2 = (void *)(*((unsigned int *)v14 + 11)); /*0x410d5f*/
  v14->Buffer = v13; /*0x410d63*/
  v14 = 0; /*0x410d66*/
  v14 = 0; /*0x410d6a*/
  a5_2 = (void *)(v14); /*0x410d6e*/
  (*(void (**)(void *, int *, int))(*(unsigned int *)v13 + 20))(v13, &v14, 127); /*0x410d7b*/
  int v15; // eax
  v15 = (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)v14->Buffer + 92))(v14->Buffer, 0, 0); /*0x410d89*/
  int v16; // ecx
  v16 = *((unsigned int *)v14 + 11); /*0x410d8c*/
  *((unsigned int *)v14 + 6) = v15; /*0x410d8f*/
  int v17; // ecx
  v17 = *((unsigned int *)v14 + 10) * v16; /*0x410d92*/
  v14->BytesPerPixel = 0; /*0x410d96*/
  *((unsigned int *)v14 + 9) = 0x8000; /*0x410d99*/
  int v18 = v15 + 2 * v17; // edx /*0x410da0*/
  Buffer = v14->Buffer; /*0x410da3*/
  *((unsigned int *)v14 + 7) = v18; /*0x410da6*/
  (*(void (**)(void *))(*(unsigned int *)Buffer + 96))(Buffer); /*0x410dab*/
  return v14->XSurface; /*0x410db0*/

}
}  // G42.18 ns repair
// 0x7B8C60
namespace gamemd {
bool BSurface::CreateTripleBuffer(void *a1)
{

  int v2; // ecx
  void (***v3)(unsigned int, int); // ecx
  int v4; // ecx
  void (***v5)(unsigned int, int); // ecx
  int v6; // ecx
  void (***v7)(unsigned int, int); // ecx
  int v8; // edi
  __int16 *v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  __int16 *v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  __int16 *v19; // eax
  int v20; // ebx
  int v21; // ebp
  int v22; // eax
  int result; // eax

  if ( this->Width ) /*0x7b8c66*/
  {
    v2 = this->q044; /*0x7b8c6f*/
    if ( v2 /*0x7b8c9a*/
      && (*(__int16 *)(this->Width + 2) > (*(int (**)(int))(*(unsigned int *)v2 + 124))(v2)
       || *(__int16 *)(this->Width + 4) > (*(int (**)(unsigned int))(*this->q044 + 128))(this->q044)) )
    {
      v3 = *(void (****)(unsigned int, int))(&this->q044); /*0x7b8c9c*/
      if ( v3 ) /*0x7b8ca1*/
        (**v3)(v3, 1); /*0x7b8ca7*/
      this->q044 = 0; /*0x7b8ca9*/
    }
    v4 = this->q058; /*0x7b8cac*/
    if ( v4 /*0x7b8cd7*/
      && (*(__int16 *)(this->Width + 2) > (*(int (**)(int))(*(unsigned int *)v4 + 124))(v4)
       || *(__int16 *)(this->Width + 4) > (*(int (**)(unsigned int))(*this->q058 + 128))(this->q058)) )
    {
      v5 = *(void (****)(unsigned int, int))(&this->q058); /*0x7b8cd9*/
      if ( v5 ) /*0x7b8cde*/
        (**v5)(v5, 1); /*0x7b8ce4*/
      this->q058 = 0; /*0x7b8ce6*/
    }
    v6 = this->q06C; /*0x7b8ce9*/
    if ( v6 /*0x7b8d14*/
      && (*(__int16 *)(this->Width + 2) > (*(int (**)(int))(*(unsigned int *)v6 + 124))(v6)
       || *(__int16 *)(this->Width + 4) > (*(int (**)(unsigned int))(*this->q06C + 128))(this->q06C)) )
    {
      v7 = *(void (****)(unsigned int, int))(&this->q06C); /*0x7b8d16*/
      if ( v7 ) /*0x7b8d1b*/
        (**v7)(v7, 1); /*0x7b8d21*/
      this->q06C = 0; /*0x7b8d23*/
    }
    if ( this->ptr_24 ) /*0x7b8d26*/
    {
      if ( !this->q044 ) /*0x7b8d33*/
      {
        v8 = __2_YAPAXI_Z(0x20u); /*0x7b8d3f*/
        if ( v8 ) /*0x7b8d46*/
        {
          v9 = this->Width; /*0x7b8d4b*/
          v10 = v9[2]; /*0x7b8d50*/
          v11 = v9[1]; /*0x7b8d54*/
          v12 = (*(int (**)(unsigned int))(*this->ptr_24 + 112))(this->ptr_24); /*0x7b8d58*/
          *(unsigned int *)(v8 + 16) = v12; /*0x7b8d5b*/
          *(unsigned int *)(v8 + 4) = v11; /*0x7b8d6a*/
          *(unsigned int *)(v8 + 8) = v10; /*0x7b8d6d*/
          *(unsigned int *)(v8 + 12) = 0; /*0x7b8d70*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x7b8d77*/
          Buffer::Init((Buffer *)(v8 + 20), 0, v10 * v11 * v12); /*0x7b8d7d*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x7b8d82*/
        }
        else
        {
          v8 = 0; /*0x7b8d8a*/
        }
        this->q044 = v8; /*0x7b8d8c*/
      }
      if ( !this->q058 ) /*0x7b8d8f*/
      {
        v13 = __2_YAPAXI_Z(0x20u); /*0x7b8d9d*/
        if ( v13 ) /*0x7b8da4*/
        {
          v14 = this->Width; /*0x7b8da6*/
          v15 = v14[2]; /*0x7b8dac*/
          v16 = v14[1]; /*0x7b8db0*/
          v17 = (*(int (**)(unsigned int))(*this->ptr_24 + 112))(this->ptr_24); /*0x7b8db6*/
          *(unsigned int *)(v13 + 16) = v17; /*0x7b8db9*/
          *(unsigned int *)(v13 + 4) = v16; /*0x7b8dc8*/
          *(unsigned int *)(v13 + 8) = v15; /*0x7b8dcb*/
          *(unsigned int *)(v13 + 12) = 0; /*0x7b8dce*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x7b8dd5*/
          Buffer::Init((Buffer *)(v13 + 20), 0, v15 * v16 * v17); /*0x7b8ddb*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x7b8de0*/
        }
        else
        {
          v13 = 0; /*0x7b8de8*/
        }
        this->q058 = v13; /*0x7b8dea*/
      }
      if ( !this->q06C ) /*0x7b8ded*/
      {
        v18 = __2_YAPAXI_Z(0x20u); /*0x7b8dfb*/
        if ( v18 ) /*0x7b8e02*/
        {
          v19 = this->Width; /*0x7b8e07*/
          v20 = v19[2]; /*0x7b8e0c*/
          v21 = v19[1]; /*0x7b8e10*/
          v22 = (*(int (**)(unsigned int))(*this->ptr_24 + 112))(this->ptr_24); /*0x7b8e14*/
          *(unsigned int *)(v18 + 16) = v22; /*0x7b8e17*/
          *(unsigned int *)(v18 + 4) = v21; /*0x7b8e26*/
          *(unsigned int *)(v18 + 8) = v20; /*0x7b8e29*/
          *(unsigned int *)(v18 + 12) = 0; /*0x7b8e2c*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x7b8e33*/
          Buffer::Init((Buffer *)(v18 + 20), 0, v20 * v21 * v22); /*0x7b8e39*/
          /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x7b8e3e*/
        }
        else
        {
          v18 = 0; /*0x7b8e46*/
        }
        this->q06C = v18; /*0x7b8e48*/
      }
    }
    return this->q044 && this->q058 && this->q06C; /*0x7b8e63*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x7b8e70*/
  }
  return result; /*0x7b8e62*/

}
}
// 0x7BC970
namespace gamemd {
unsigned int * BSurface::ConstructEx(int a2, int a3, int a4, int a5)
{

  int v6; // edi
  int v7; // ecx
  int v8; // eax
  void *v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int Buffer; // ecx

  v6 = a2; /*0x7bc975*/
  v7 = a4; /*0x7bc979*/
  v8 = a5; /*0x7bc97f*/
  this->u32_2C = a5; /*0x7bc983*/
  *(unsigned int *)this->__pad_0 = v6; /*0x7bc988*/
  v9 = (void *)a3; /*0x7bc98a*/
  this->u32_28 = v7; /*0x7bc98e*/
  this->Width = (int)v9; /*0x7bc991*/
  this->Height = v7; /*0x7bc994*/
  this->LockCount = v8; /*0x7bc997*/
  this->u32_20 = 2 * v7 * v8; /*0x7bc99f*/
  v10 = __2_YAPAXI_Z(0x20u); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = this->u32_28; /*0x7bc9b2*/
    v12 = this->u32_2C; /*0x7bc9b5*/
    *(unsigned int *)(v10 + 4) = v11; /*0x7bc9b8*/
    *(unsigned int *)(v10 + 8) = v12; /*0x7bc9c0*/
    *(unsigned int *)(v10 + 12) = 0; /*0x7bc9c8*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x7bc9cb*/
    *(unsigned int *)(v10 + 16) = 2; /*0x7bc9d1*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x7bc9d8*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x7bc9dd*/
    v13 = v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = this->u32_28; /*0x7bc9ec*/
  a5 = this->u32_2C; /*0x7bc9ef*/
  this->Buffer = v13; /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  a4 = v14; /*0x7bc9fe*/
  (*(void (**)(int, int *, int))(*(unsigned int *)v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = this->u32_2C; /*0x7bca1f*/
  this->u32_18 = v15; /*0x7bca22*/
  v17 = this->u32_28 * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  this->ptr_24 = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  Buffer = this->Buffer; /*0x7bca36*/
  this->u32_1C = v18; /*0x7bca39*/
  (*(void (**)(int))(*(unsigned int *)Buffer + 96))(Buffer); /*0x7bca3e*/
  return this->__pad_0; /*0x7bca43*/

}
}
// 0x4114F0
namespace gamemd {  // G42.18c ns repair
char BSurface::Stub(int a1, int a2)
{
  return 1; /*0x4114f2*/
}
}  // G42.18c ns repair
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
BSurface * BSurface::ScalarDtor(char * Block, char a2)
{
  Vector::Clear((int)&Block->Buffer); /*0x411656*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS Surface_Vtable) */  /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    operator delete((Block)); /*0x41166a*/
  return Block->XSurface; /*0x411674*/
}
} // namespace gamemd
