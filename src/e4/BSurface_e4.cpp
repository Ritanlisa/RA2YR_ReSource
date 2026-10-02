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
namespace gamemd {
_DWORD * BSurface::Construct(int a2, int a3, int a4, int a5, void *a5_2, void *a6_1)
{

  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
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

  v6 = a2; /*0x410ce5*/
  v7 = a4; /*0x410ce9*/
  v8 = a5; /*0x410cef*/
  *((unsigned int *)this + 11) = a5; /*0x410cf3*/
  *(unsigned int *)this->XSurface = v6; /*0x410cf8*/
  v9 = a3; /*0x410cfa*/
  *((unsigned int *)this + 10) = v7; /*0x410cfe*/
  ((unsigned int *)this)[0] = v9; /*0x410d01*/
  ((unsigned int *)this)[0] = v7; /*0x410d04*/
  ((unsigned int *)this)[0] = v8; /*0x410d07*/
  *((unsigned int *)this + 8) = 2 * v7 * v8; /*0x410d0f*/
  v10 = (int)(__2_YAPAXI_Z(0x20u)); /*0x410d17*/
  if ( v10 ) /*0x410d20*/
  {
    v11 = *((unsigned int *)this + 10); /*0x410d22*/
    v12 = *((unsigned int *)this + 11); /*0x410d25*/
    *(unsigned int *)(v10 + 4) = v11; /*0x410d28*/
    *(unsigned int *)(v10 + 8) = v12; /*0x410d30*/
    *(unsigned int *)(v10 + 12) = 0; /*0x410d38*/
    *(unsigned int *)v10 = (unsigned int)(&XSurface_Vtable); /*0x410d3b*/
    *(unsigned int *)(v10 + 16) = 2; /*0x410d41*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x410d48*/
    *(unsigned int *)v10 = (unsigned int)(&BSurface_Vtable); /*0x410d4d*/
    v13 = (void *)v10; /*0x410d53*/
  }
  else
  {
    v13 = 0; /*0x410d57*/
  }
  v14 = *((unsigned int *)this + 10); /*0x410d5c*/
  a5 = *((unsigned int *)this + 11); /*0x410d5f*/
  this->Buffer = (unsigned char *)(v13); /*0x410d63*/
  a2 = 0; /*0x410d66*/
  a3 = 0; /*0x410d6a*/
  a4 = v14; /*0x410d6e*/
  (*(void (**)(void *, int *, int))(*(unsigned int *)v13 + 20))(v13, &a2, 127); /*0x410d7b*/
  v15 = (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x410d89*/
  v16 = *((unsigned int *)this + 11); /*0x410d8c*/
  *((unsigned int *)this + 6) = v15; /*0x410d8f*/
  v17 = *((unsigned int *)this + 10) * v16; /*0x410d92*/
  this->BytesPerPixel = 0; /*0x410d96*/
  *((unsigned int *)this + 9) = 0x8000; /*0x410d99*/
  v18 = v15 + 2 * v17; /*0x410da0*/
  Buffer = this->Buffer; /*0x410da3*/
  *((unsigned int *)this + 7) = v18; /*0x410da6*/
  (*(void (**)(void *))(*(unsigned int *)Buffer + 96))(Buffer); /*0x410dab*/
  return this->XSurface; /*0x410db0*/

}
}
// 0x7B8C60
namespace gamemd {
bool BSurface::CreateTripleBuffer()
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
  int result; // eax

  if ( *((unsigned int *)this + 1) ) /*0x7b8c66*/
  {
    v2 = *((unsigned int *)this + 17); /*0x7b8c6f*/
    if ( v2 /*0x7b8c9a*/
      && (*(int16_t *)(*((unsigned int *)this + 1) + 2) > (*(int (**)(int))(*(unsigned int *)v2 + 124))(v2)
       || *(int16_t *)(*((unsigned int *)this + 1) + 4) > (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 68) + 128))(*((unsigned int *)this + 17))) )
    {
      v3 = *(void (****)(unsigned int, int))((char *)this + 68); /*0x7b8c9c*/
      if ( v3 ) /*0x7b8ca1*/
        (**v        ((unsigned int)(**v3))(v3, 1); 
      *((unsigned int *)this + 17) = 0; /*0x7b8ca9*/
    }
    v4 = *((unsigned int *)this + 22); /*0x7b8cac*/
    if ( v4 /*0x7b8cd7*/
      && (*(int16_t *)(*((unsigned int *)this + 1) + 2) > (*(int (**)(int))(*(unsigned int *)v4 + 124))(v4)
       || *(int16_t *)(*((unsigned int *)this + 1) + 4) > (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 88) + 128))(*((unsigned int *)this + 22))) )
    {
      v5 = *(void (****)(unsigned int, int))((char *)this + 88); /*0x7b8cd9*/
      if ( v5 ) /*0x7b8cde*/
        (**v        ((unsigned int)(**v5))(v5, 1); 
      *((unsigned int *)this + 22) = 0; /*0x7b8ce6*/
    }
    v6 = *((unsigned int *)this + 27); /*0x7b8ce9*/
    if ( v6 /*0x7b8d14*/
      && (*(int16_t *)(*((unsigned int *)this + 1) + 2) > (*(int (**)(int))(*(unsigned int *)v6 + 124))(v6)
       || *(int16_t *)(*((unsigned int *)this + 1) + 4) > (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 108) + 128))(*((unsigned int *)this + 27))) )
    {
      v7 = *(void (****)(unsigned int, int))((char *)this + 108); /*0x7b8d16*/
      if ( v7 ) /*0x7b8d1b*/
        (**v        ((unsigned int)(**v7))(v7, 1); 
      *((unsigned int *)this + 27) = 0; /*0x7b8d23*/
    }
    if ( *((unsigned int *)this + 9) ) /*0x7b8d26*/
    {
      if ( !*((unsigned int *)this + 17) ) /*0x7b8d33*/
      {
        v8 = (unsigned int *)(__2_YAPAXI_Z(0x20u)); /*0x7b8d3f*/
        if ( v8 ) /*0x7b8d46*/
        {
          v9 = *((unsigned int *)this + 1); /*0x7b8d4b*/
          v10 = *(int16_t *)(v9 + 4); /*0x7b8d50*/
          v11 = *(int16_t *)(v9 + 2); /*0x7b8d54*/
          v12 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 36) + 112))(*((unsigned int *)this + 9)); /*0x7b8d58*/
          v8[4] = v12; /*0x7b8d5b*/
          v8[1] = v11; /*0x7b8d6a*/
          v8[2] = v10; /*0x7b8d6d*/
          v8[3] = 0; /*0x7b8d70*/
          *v8 = (unsigned int)(&XSurface_Vtable); /*0x7b8d77*/
          Buffer::Init(v8 + 5, 0, v10 * v11 * v12); /*0x7b8d7d*/
          *v8 = (unsigned int)(&BSurface_Vtable); /*0x7b8d82*/
        }
        else
        {
          v8 = 0; /*0x7b8d8a*/
        }
        *((unsigned int *)this + 17) = (unsigned int)(v8); /*0x7b8d8c*/
      }
      if ( !*((unsigned int *)this + 22) ) /*0x7b8d8f*/
      {
        v13 = (unsigned int *)(__2_YAPAXI_Z(0x20u)); /*0x7b8d9d*/
        if ( v13 ) /*0x7b8da4*/
        {
          v14 = *((unsigned int *)this + 1); /*0x7b8da6*/
          v15 = *(int16_t *)(v14 + 4); /*0x7b8dac*/
          v16 = *(int16_t *)(v14 + 2); /*0x7b8db0*/
          v17 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 36) + 112))(*((unsigned int *)this + 9)); /*0x7b8db6*/
          v13[4] = v17; /*0x7b8db9*/
          v13[1] = v16; /*0x7b8dc8*/
          v13[2] = v15; /*0x7b8dcb*/
          v13[3] = 0; /*0x7b8dce*/
          *v13 = (unsigned int)(&XSurface_Vtable); /*0x7b8dd5*/
          Buffer::Init(v13 + 5, 0, v15 * v16 * v17); /*0x7b8ddb*/
          *v13 = (unsigned int)(&BSurface_Vtable); /*0x7b8de0*/
        }
        else
        {
          v13 = 0; /*0x7b8de8*/
        }
        *((unsigned int *)this + 22) = (unsigned int)(v13); /*0x7b8dea*/
      }
      if ( !*((unsigned int *)this + 27) ) /*0x7b8ded*/
      {
        v18 = (unsigned int *)(__2_YAPAXI_Z(0x20u)); /*0x7b8dfb*/
        if ( v18 ) /*0x7b8e02*/
        {
          v19 = *((unsigned int *)this + 1); /*0x7b8e07*/
          v20 = *(int16_t *)(v19 + 4); /*0x7b8e0c*/
          v21 = *(int16_t *)(v19 + 2); /*0x7b8e10*/
          v22 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 36) + 112))(*((unsigned int *)this + 9)); /*0x7b8e14*/
          v18[4] = v22; /*0x7b8e17*/
          v18[1] = v21; /*0x7b8e26*/
          v18[2] = v20; /*0x7b8e29*/
          v18[3] = 0; /*0x7b8e2c*/
          *v18 = (unsigned int)(&XSurface_Vtable); /*0x7b8e33*/
          Buffer::Init(v18 + 5, 0, v20 * v21 * v22); /*0x7b8e39*/
          *v18 = (unsigned int)(&BSurface_Vtable); /*0x7b8e3e*/
        }
        else
        {
          v18 = 0; /*0x7b8e46*/
        }
        *((unsigned int *)this + 27) = (unsigned int)(v18); /*0x7b8e48*/
      }
    }
    return *((unsigned int *)this + 17) && *((unsigned int *)this + 22) && *((unsigned int *)this + 27); /*0x7b8e63*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b8e70*/
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
  int v9; // edi
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

  v6 = a2; /*0x7bc975*/
  v7 = a4; /*0x7bc979*/
  v8 = a5; /*0x7bc97f*/
  *((unsigned int *)this + 11) = a5; /*0x7bc983*/
  *(unsigned int *)this->XSurface = v6; /*0x7bc988*/
  v9 = a3; /*0x7bc98a*/
  *((unsigned int *)this + 10) = v7; /*0x7bc98e*/
  ((unsigned int *)this)[0] = v9; /*0x7bc991*/
  ((unsigned int *)this)[0] = v7; /*0x7bc994*/
  ((unsigned int *)this)[0] = v8; /*0x7bc997*/
  *((unsigned int *)this + 8) = 2 * v7 * v8; /*0x7bc99f*/
  v10 = (int)(__2_YAPAXI_Z(0x20u)); /*0x7bc9a7*/
  if ( v10 ) /*0x7bc9b0*/
  {
    v11 = *((unsigned int *)this + 10); /*0x7bc9b2*/
    v12 = *((unsigned int *)this + 11); /*0x7bc9b5*/
    *(unsigned int *)(v10 + 4) = v11; /*0x7bc9b8*/
    *(unsigned int *)(v10 + 8) = v12; /*0x7bc9c0*/
    *(unsigned int *)(v10 + 12) = 0; /*0x7bc9c8*/
    *(unsigned int *)v10 = (unsigned int)(&XSurface_Vtable); /*0x7bc9cb*/
    *(unsigned int *)(v10 + 16) = 2; /*0x7bc9d1*/
    Buffer::Init((Buffer *)(v10 + 20), 0, 2 * v12 * v11); /*0x7bc9d8*/
    *(unsigned int *)v10 = (unsigned int)(&BSurface_Vtable); /*0x7bc9dd*/
    v13 = (void *)v10; /*0x7bc9e3*/
  }
  else
  {
    v13 = 0; /*0x7bc9e7*/
  }
  v14 = *((unsigned int *)this + 10); /*0x7bc9ec*/
  a5 = *((unsigned int *)this + 11); /*0x7bc9ef*/
  this->Buffer = (unsigned char *)(v13); /*0x7bc9f3*/
  a2 = 0; /*0x7bc9f6*/
  a3 = 0; /*0x7bc9fa*/
  a4 = v14; /*0x7bc9fe*/
  (*(void (**)(void *, int *, int))(*(unsigned int *)v13 + 20))(v13, &a2, 0xFFFF); /*0x7bca0e*/
  v15 = (*(int (**)(void *, unsigned int, unsigned int))(*(unsigned int *)this->Buffer + 92))(this->Buffer, 0, 0); /*0x7bca1c*/
  v16 = *((unsigned int *)this + 11); /*0x7bca1f*/
  *((unsigned int *)this + 6) = v15; /*0x7bca22*/
  v17 = *((unsigned int *)this + 10) * v16; /*0x7bca25*/
  this->BytesPerPixel = 0; /*0x7bca29*/
  *((unsigned int *)this + 9) = 0x8000; /*0x7bca2c*/
  v18 = v15 + 2 * v17; /*0x7bca33*/
  Buffer = this->Buffer; /*0x7bca36*/
  *((unsigned int *)this + 7) = v18; /*0x7bca39*/
  (*(void (**)(void *))(*(unsigned int *)Buffer + 96))(Buffer); /*0x7bca3e*/
  return (unsigned int *)(this->XSurface); /*0x7bca43*/

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

  ((Vector *)((int)&Block->Buffer))->Clear(); /*0x411656*/
  *(unsigned int *)Block->XSurface = &Surface_Vtable; /*0x41165f*/
  if ( (a2 & 1) != 0 ) /*0x411667*/
    __3_YAXPAX_Z(Block); /*0x41166a*/
  return Block->XSurface; /*0x411674*/

}
} // namespace gamemd
