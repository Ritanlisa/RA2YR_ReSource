// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSEngine_e4.hpp"

// 0x5AC520
namespace gamemd {
void MSEngine::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSEngine::sub_5AC520(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5ac526*/
  *(_DWORD *)(this + 16) = 0; /*0x5ac529*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5ac530*/
  {
    __3_YAXPAX_Z(v2); /*0x5ac536*/
    *(_DWORD *)(this + 4) = 0; /*0x5ac53e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ac541*/
  *(_DWORD *)(this + 8) = 0; /*0x5ac544*/
}
}
} // namespace gamemd

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MSEngine::sub_5AC550(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5ac550*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x5ac565*/
  else
    return 0; /*0x5ac557*/
}
}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MSEngine::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)(*(this + 1) + 16 * a3); /*0x5ac57d*/
  *a2 = *v3; /*0x5ac587*/
  a2[1] = v3[1]; /*0x5ac58c*/
  a2[2] = v3[2]; /*0x5ac592*/
  a2[3] = v3[3]; /*0x5ac599*/
  return a2; /*0x5ac595*/
}
}
} // namespace gamemd

// 0x5ACCC0
namespace gamemd {
char MSEngine::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSEngine::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = *(this + 2); /*0x5acccb*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5accd0*/
  {
    v3 = 0; /*0x5accd2*/
    if ( v2 <= 0 ) /*0x5accd6*/
      return 1; /*0x5acd1a*/
    v4 = *(_DWORD *)(a2 + 4); /*0x5accd8*/
    v5 = (_DWORD *)*(this + 1); /*0x5accdb*/
    v6 = (_DWORD *)(v4 + 8); /*0x5accde*/
    v7 = v4 - (_DWORD)v5; /*0x5acce1*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] ) /*0x5acd07*/
    {
      ++v3; /*0x5acd09*/
      v6 += 4; /*0x5acd0a*/
      v5 += 4; /*0x5acd0d*/
      if ( v3 >= v2 ) /*0x5acd12*/
        return 1; /*0x5acd12*/
    }
  }
  return 0; /*0x5acd14*/
}
}
} // namespace gamemd

// 0x5ACD30
namespace gamemd {
char MSEngine::Release(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSEngine::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v9; // ecx
  int v10; // eax
  char *v11; // ebx
  _DWORD *v12; // edx

  v3 = a2; /*0x5acd32*/
  if ( a2 ) /*0x5acd3d*/
  {
    v5 = a3; /*0x5acd43*/
    *((_BYTE *)this + 12) = 0; /*0x5acd47*/
    if ( a3 ) /*0x5acd4d*/
    {
      v7 = a3; /*0x5acd73*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x5acd55*/
      if ( v6 ) /*0x5acd5f*/
        v7 = v6; /*0x5acd64*/
      else
        v7 = 0; /*0x5acd6c*/
    }
    *((_BYTE *)this + 12) = 1; /*0x5acd7b*/
    if ( v7 ) /*0x5acd7f*/
    {
      if ( *((_DWORD *)this + 1) ) /*0x5acd8b*/
      {
        v9 = *((_DWORD *)this + 2); /*0x5acd92*/
        if ( a2 < v9 ) /*0x5acd97*/
          v9 = a2; /*0x5acd99*/
        if ( v9 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + *((_DWORD *)this + 1)); /*0x5acda7*/
            v10 += 16; /*0x5acda9*/
            --v9; /*0x5acdac*/
            *(_DWORD *)v11 = *v12; /*0x5acdaf*/
            *((_DWORD *)v11 + 1) = v12[1]; /*0x5acdb4*/
            *((_DWORD *)v11 + 2) = v12[2]; /*0x5acdba*/
            *((_DWORD *)v11 + 3) = v12[3]; /*0x5acdc0*/
          }
          while ( v9 ); /*0x5acdc3*/
          v5 = a3; /*0x5acdc5*/
          v3 = a2; /*0x5acdc9*/
        }
        if ( *((_BYTE *)this + 13) ) /*0x5acdcd*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acdd8*/
          *((_DWORD *)this + 1) = 0; /*0x5acde0*/
        }
      }
      *((_DWORD *)this + 1) = v7; /*0x5acde9*/
      *((_DWORD *)this + 2) = v3; /*0x5acdf1*/
      *((_BYTE *)this + 13) = v5 == 0; /*0x5acdf4*/
      return 1; /*0x5acdfa*/
    }
    else
    {
      return 0; /*0x5acd84*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5ace05*/
    return 1; /*0x5ace0b*/
  }
}
}
} // namespace gamemd

// 0x5ACE20
namespace gamemd {
void MSEngine::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSEngine::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5ace2d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5ace33*/
    *(_DWORD *)(this + 4) = 0; /*0x5ace3b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ace3e*/
  *(_DWORD *)(this + 8) = 0; /*0x5ace41*/
}
}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
int MSEngine::Init(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSEngine::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5ace50*/
    return 0; /*0x5ace5e*/
  v3 = *(_DWORD *)(this + 8); /*0x5ace64*/
  result = 0; /*0x5ace67*/
  if ( v3 <= 0 ) /*0x5ace6b*/
    return -1; /*0x5acea0*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5ace71*/
  {
    if ( ++result >= v3 ) /*0x5ace9e*/
      return -1; /*0x5ace9e*/
  }
  return result; /*0x5ace5b*/
}
}
} // namespace gamemd

// 0x5ACEB0
namespace gamemd {
unsigned int MSEngine::Run(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall MSEngine::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5aceb0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 4; /*0x5acec5*/
  else
    return 0; /*0x5aceb7*/
}
}
} // namespace gamemd

// 0x5ACED0
namespace gamemd {
char MSEngine::SetCapacity(int a2, char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MSEngine::sub_5ACED0(void *this, int a2, char *a3)
{
  int v3; // ebx
  char *v5; // ebp
  char *v6; // eax
  char *v7; // edi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  _DWORD *v11; // edx
  int v12; // eax

  v3 = a2; /*0x5aced2*/
  if ( a2 ) /*0x5acedd*/
  {
    v5 = a3; /*0x5acee3*/
    *((_BYTE *)this + 12) = 0; /*0x5acee7*/
    if ( a3 ) /*0x5aceed*/
    {
      v7 = a3; /*0x5acf13*/
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(16 * a2); /*0x5acef5*/
      if ( v6 ) /*0x5aceff*/
        v7 = v6; /*0x5acf04*/
      else
        v7 = 0; /*0x5acf0c*/
    }
    *((_BYTE *)this + 12) = 1; /*0x5acf1b*/
    if ( !v7 ) /*0x5acf1f*/
      return 0; /*0x5acfb4*/
    if ( *((_DWORD *)this + 1) ) /*0x5acf25*/
    {
      v8 = *((_DWORD *)this + 2); /*0x5acf2c*/
      if ( a2 < v8 ) /*0x5acf31*/
        v8 = a2; /*0x5acf33*/
      if ( v8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + *((_DWORD *)this + 1)); /*0x5acf41*/
          v9 += 16; /*0x5acf43*/
          --v8; /*0x5acf46*/
          *(_DWORD *)v10 = *v11; /*0x5acf49*/
          *((_DWORD *)v10 + 1) = v11[1]; /*0x5acf4e*/
          *((_DWORD *)v10 + 2) = v11[2]; /*0x5acf54*/
          *((_DWORD *)v10 + 3) = v11[3]; /*0x5acf5a*/
        }
        while ( v8 ); /*0x5acf5d*/
        v3 = a2; /*0x5acf5f*/
        v5 = a3; /*0x5acf63*/
      }
      if ( *((_BYTE *)this + 13) ) /*0x5acf67*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5acf72*/
        *((_DWORD *)this + 1) = 0; /*0x5acf7a*/
      }
    }
    *((_DWORD *)this + 1) = v7; /*0x5acf83*/
    *((_DWORD *)this + 2) = v3; /*0x5acf8b*/
    *((_BYTE *)this + 13) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5acf97*/
  }
  v12 = *((_DWORD *)this + 2); /*0x5acf9a*/
  if ( v12 < *((_DWORD *)this + 4) ) /*0x5acfa2*/
    *((_DWORD *)this + 4) = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
}
}
} // namespace gamemd

// 0x5ACFC0
namespace gamemd {
int MSEngine::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSEngine::sub_5ACFC0(int *this, _DWORD *a2)
{
  int v2; // esi
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x5acfc3*/
  result = 0; /*0x5acfc6*/
  if ( v2 <= 0 ) /*0x5acfcb*/
    return -1; /*0x5ad000*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2 || i[1] != a2[1] || i[2] != a2[2] || i[3] != a2[3]; i += 4 ) /*0x5acfd1*/
  {
    if ( ++result >= v2 ) /*0x5acffe*/
      return -1; /*0x5acffe*/
  }
  return result; /*0x5ad003*/
}
}
} // namespace gamemd

// 0x5AD4D0
namespace gamemd {
VectorClass * MSEngine::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall MSEngine::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad4d3*/
  *Block = &VectorClass<TRect<int>>::`vftable'; /*0x5ad4d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad4e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad4e8*/
    *(Block + 1) = 0; /*0x5ad4f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad4fb*/
  *(Block + 2) = 0; /*0x5ad501*/
  if ( (a2 & 1) != 0 ) /*0x5ad508*/
    __3_YAXPAX_Z(Block); /*0x5ad50b*/
  return (VectorClass *)Block; /*0x5ad515*/
}
}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
DynamicVector * MSEngine::Constructor(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall MSEngine::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5ad523*/
  *Block = &VectorClass<TRect<int>>::`vftable'; /*0x5ad526*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5ad530*/
  {
    __3_YAXPAX_Z(v3); /*0x5ad538*/
    *(Block + 1) = 0; /*0x5ad540*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5ad54b*/
  *(Block + 2) = 0; /*0x5ad551*/
  if ( (a2 & 1) != 0 ) /*0x5ad558*/
    __3_YAXPAX_Z(Block); /*0x5ad55b*/
  return (DynamicVector *)Block; /*0x5ad565*/
}
}
} // namespace gamemd

// 0x5CEE60
namespace gamemd {
void MSEngine::Destructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSEngine::Destructor(int this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  SessionClass::Destruct((_DWORD *)this); /*0x5cee64*/
  v2 = *(void **)(this + 72); /*0x5cee69*/
  *(_DWORD *)(this + 68) = &VectorClass<MSSfxEntry *>::`vftable'; /*0x5cee70*/
  if ( v2 && *(_BYTE *)(this + 81) ) /*0x5cee79*/
  {
    __3_YAXPAX_Z(v2); /*0x5cee7f*/
    *(_DWORD *)(this + 72) = 0; /*0x5cee87*/
  }
  *(_BYTE *)(this + 81) = 0; /*0x5cee8a*/
  *(_DWORD *)(this + 76) = 0; /*0x5cee8d*/
  v3 = *(void **)(this + 48); /*0x5cee90*/
  *(_DWORD *)(this + 44) = &VectorClass<MSAnimEntry *>::`vftable'; /*0x5cee93*/
  if ( v3 && *(_BYTE *)(this + 57) ) /*0x5cee9e*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceea4*/
    *(_DWORD *)(this + 48) = 0; /*0x5ceeac*/
  }
  *(_BYTE *)(this + 57) = 0; /*0x5ceeb2*/
  *(_DWORD *)(this + 52) = 0; /*0x5ceeb5*/
  DeleteAndZero((void **)(this + 40)); /*0x5ceeb8*/
  v4 = *(void **)(this + 4); /*0x5ceebd*/
  *(_DWORD *)this = &VectorClass<MapStage *>::`vftable'; /*0x5ceec0*/
  if ( v4 && *(_BYTE *)(this + 13) ) /*0x5ceeca*/
  {
    __3_YAXPAX_Z(v4); /*0x5ceed0*/
    *(_DWORD *)(this + 4) = 0; /*0x5ceed8*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ceedb*/
  *(_DWORD *)(this + 8) = 0; /*0x5ceede*/
}
}
} // namespace gamemd

// 0x5D1AA0
namespace gamemd {
unsigned int * MSEngine::Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5D1AA0(_DWORD *this)
{
  char *v2; // ecx
  int v3; // edx

  v2 = (char *)(this + 2); /*0x5d1aa5*/
  *((_DWORD *)v2 + 1) = 0; /*0x5d1ab2*/
  *((_DWORD *)v2 + 2) = 0; /*0x5d1ab5*/
  v2[12] = 1; /*0x5d1ab8*/
  v2[13] = 0; /*0x5d1abb*/
  *(_DWORD *)v2 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1abe*/
  *(this + 7) = 0; /*0x5d1ac4*/
  *(this + 8) = 0; /*0x5d1ac7*/
  *((_BYTE *)this + 36) = 1; /*0x5d1aca*/
  *((_BYTE *)this + 37) = 0; /*0x5d1acd*/
  *(this + 6) = &DynamicVectorClass<MSAnim *>::`vftable'; /*0x5d1ad0*/
  *(this + 11) = 10; /*0x5d1ad6*/
  *(this + 10) = 0; /*0x5d1add*/
  *(this + 13) = 0; /*0x5d1ae0*/
  *(this + 14) = 0; /*0x5d1ae3*/
  *((_BYTE *)this + 60) = 1; /*0x5d1ae6*/
  *((_BYTE *)this + 61) = 0; /*0x5d1ae9*/
  *(this + 12) = &DynamicVectorClass<MSSfx *>::`vftable'; /*0x5d1aec*/
  *(this + 17) = 10; /*0x5d1af2*/
  *(this + 16) = 0; /*0x5d1af9*/
  v3 = *(_DWORD *)v2; /*0x5d1afc*/
  *this = &MSEngine::`vftable'; /*0x5d1b01*/
  *(this + 1) = 0; /*0x5d1b07*/
  (*(void (__thiscall **)(char *, int, _DWORD))(v3 + 8))(v2, 20, 0); /*0x5d1b0a*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 6) + 12))(this + 6); /*0x5d1b11*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 12) + 12))(this + 12); /*0x5d1b18*/
  return this; /*0x5d1b1b*/
}
}
} // namespace gamemd

// 0x5D1B30
namespace gamemd {
void MSEngine::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall MSEngine_Destructor(_DWORD *this)
{
  int v2; // ebp
  int v3; // eax
  void *v4; // edi
  _DWORD *v5; // ebp
  int i; // edi
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // edi
  int v9; // edx
  _DWORD *v10; // esi
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax

  v2 = 0; /*0x5d1b37*/
  for ( *this = &MSEngine::`vftable'; v2 < *(this + 16); ++v2 ) /*0x5d1b45*/
  {
    v3 = *(this + 13); /*0x5d1b47*/
    v4 = *(void **)(v3 + 4 * v2); /*0x5d1b4a*/
    if ( v4 ) /*0x5d1b4f*/
    {
      MSEngine::DestroyData(*(_DWORD *)(v3 + 4 * v2)); /*0x5d1b53*/
      __3_YAXPAX_Z(v4); /*0x5d1b59*/
    }
  }
  v5 = this + 12; /*0x5d1b6c*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 12) + 12))(this + 12); /*0x5d1b71*/
  for ( i = 0; i < *(this + 10); ++i ) /*0x5d1b7b*/
  {
    v7 = *(void (__thiscall ****)(_DWORD, int))(*(this + 7) + 4 * i); /*0x5d1b80*/
    if ( v7 ) /*0x5d1b85*/
      (**v7)(v7, 1); /*0x5d1b8b*/
  }
  v8 = this + 6; /*0x5d1b98*/
  (*(void (__thiscall **)(_DWORD *))(*(this + 6) + 12))(this + 6); /*0x5d1b9d*/
  v9 = *(this + 2); /*0x5d1ba0*/
  v10 = this + 2; /*0x5d1ba3*/
  (*(void (__thiscall **)(_DWORD *))(v9 + 12))(v10); /*0x5d1ba8*/
  v11 = (void *)v5[1]; /*0x5d1bab*/
  *v5 = &VectorClass<MSSfx *>::`vftable'; /*0x5d1bae*/
  if ( v11 && *((_BYTE *)v5 + 13) ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((_BYTE *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  *v8 = &VectorClass<MSAnim *>::`vftable'; /*0x5d1bd3*/
  if ( v12 && *((_BYTE *)v8 + 13) ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((_BYTE *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  *v10 = &VectorClass<TRect<int>>::`vftable'; /*0x5d1bf7*/
  if ( v13 && *((_BYTE *)v10 + 13) ) /*0x5d1c01*/
  {
    __3_YAXPAX_Z(v13); /*0x5d1c07*/
    v10[1] = 0; /*0x5d1c0f*/
  }
  *((_BYTE *)v10 + 13) = 0; /*0x5d1c12*/
  v10[2] = 0; /*0x5d1c15*/
}
}
} // namespace gamemd

// 0x5D1DF0
namespace gamemd {
int MSEngine::ProcessEvents(MSVQAnim * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall MSEngine::ProcessEvents(_DWORD *this, MSVQAnim *aP1, int a3)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx

  Timer::GetTicks(); /*0x5d1dfc*/
  v4 = a3; /*0x5d1e01*/
  while ( 1 ) /*0x5d1e19*/
  {
    result = (*(int (__thiscall **)(_DWORD *, MSVQAnim **))(*(this + 6) + 16))(this + 6, &aP1); /*0x5d1e19*/
    if ( result == -1 ) /*0x5d1e1f*/
      break; /*0x5d1e1f*/
    v6 = *(_DWORD *)(*(this + 7) + 4 * result); /*0x5d1e24*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 28))(v6); /*0x5d1e29*/
    if ( (_BYTE)result || !v4 ) /*0x5d1e32*/
      break; /*0x5d1e32*/
    GameClass::FrameLoop(this, 1); /*0x5d1e38*/
  }
  return result; /*0x5d1e3f*/
}
}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_5D5850(void **this)
{
  if ( *this ) /*0x5d5850*/
    free(*this); /*0x5d5857*/
}
}
} // namespace gamemd
