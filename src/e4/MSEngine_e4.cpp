// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSEngine_e4.hpp"

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
      if ( this->MSEngine_field_0x4 ) /*0x5acd8b*/
      {
        v9 = this->MSEngine_field_0x8; /*0x5acd92*/
        if ( a2 < v9 ) /*0x5acd97*/
          v9 = a2; /*0x5acd99*/
        if ( v9 > 0 ) /*0x5acd9d*/
        {
          v10 = 0; /*0x5acd9f*/
          do /*0x5acdc3*/
          {
            v11 = &v7[v10]; /*0x5acda4*/
            v12 = (_DWORD *)(v10 + this->MSEngine_field_0x4); /*0x5acda7*/
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
          this->MSEngine_field_0x4 = 0; /*0x5acde0*/
        }
      }
      this->MSEngine_field_0x4 = v7; /*0x5acde9*/
      this->MSEngine_field_0x8 = v3; /*0x5acdf1*/
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
    if ( this->MSEngine_field_0x4 ) /*0x5acf25*/
    {
      v8 = this->MSEngine_field_0x8; /*0x5acf2c*/
      if ( a2 < v8 ) /*0x5acf31*/
        v8 = a2; /*0x5acf33*/
      if ( v8 > 0 ) /*0x5acf37*/
      {
        v9 = 0; /*0x5acf39*/
        do /*0x5acf5d*/
        {
          v10 = &v7[v9]; /*0x5acf3e*/
          v11 = (_DWORD *)(v9 + this->MSEngine_field_0x4); /*0x5acf41*/
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
        this->MSEngine_field_0x4 = 0; /*0x5acf7a*/
      }
    }
    this->MSEngine_field_0x4 = v7; /*0x5acf83*/
    this->MSEngine_field_0x8 = v3; /*0x5acf8b*/
    *((_BYTE *)this + 13) = v5 == 0; /*0x5acf8e*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5acf97*/
  }
  v12 = this->MSEngine_field_0x8; /*0x5acf9a*/
  if ( v12 < this->MSEngine_field_0x10 ) /*0x5acfa2*/
    this->MSEngine_field_0x10 = v12; /*0x5acfa4*/
  return 1; /*0x5acfa7*/
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
  *(_DWORD *)(this + 68) = &vt_VectorClass_MSSfxEntry; /*0x5cee70*/
  if ( v2 && *(_BYTE *)(this + 81) ) /*0x5cee79*/
  {
    __3_YAXPAX_Z(v2); /*0x5cee7f*/
    *(_DWORD *)(this + 72) = 0; /*0x5cee87*/
  }
  *(_BYTE *)(this + 81) = 0; /*0x5cee8a*/
  *(_DWORD *)(this + 76) = 0; /*0x5cee8d*/
  v3 = *(void **)(this + 48); /*0x5cee90*/
  *(_DWORD *)(this + 44) = &vt_VectorClass_MSAnimEntry; /*0x5cee93*/
  if ( v3 && *(_BYTE *)(this + 57) ) /*0x5cee9e*/
  {
    __3_YAXPAX_Z(v3); /*0x5ceea4*/
    *(_DWORD *)(this + 48) = 0; /*0x5ceeac*/
  }
  *(_BYTE *)(this + 57) = 0; /*0x5ceeb2*/
  *(_DWORD *)(this + 52) = 0; /*0x5ceeb5*/
  DeleteAndZero((void **)(this + 40)); /*0x5ceeb8*/
  v4 = *(void **)(this + 4); /*0x5ceebd*/
  *(_DWORD *)this = &vt_VectorClass_MapStage; /*0x5ceec0*/
  if ( v4 && *(_BYTE *)(this + 13) ) /*0x5ceeca*/
  {
    __3_YAXPAX_Z(v4); /*0x5ceed0*/
    this->MSEngine_field_0x4 = 0; /*0x5ceed8*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5ceedb*/
  this->MSEngine_field_0x8 = 0; /*0x5ceede*/
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
  *(_DWORD *)v2 = &vt_VectorClass_TRect_int; /*0x5d1abe*/
  *(this + 7) = 0; /*0x5d1ac4*/
  *(this + 8) = 0; /*0x5d1ac7*/
  *((_BYTE *)this + 36) = 1; /*0x5d1aca*/
  *((_BYTE *)this + 37) = 0; /*0x5d1acd*/
  *(this + 6) = &vt_DynamicVectorClass_MSAnim; /*0x5d1ad0*/
  *(this + 11) = 10; /*0x5d1ad6*/
  *(this + 10) = 0; /*0x5d1add*/
  *(this + 13) = 0; /*0x5d1ae0*/
  *(this + 14) = 0; /*0x5d1ae3*/
  *((_BYTE *)this + 60) = 1; /*0x5d1ae6*/
  *((_BYTE *)this + 61) = 0; /*0x5d1ae9*/
  *(this + 12) = &vt_DynamicVectorClass_MSSfx; /*0x5d1aec*/
  *(this + 17) = 10; /*0x5d1af2*/
  *(this + 16) = 0; /*0x5d1af9*/
  v3 = *(_DWORD *)v2; /*0x5d1afc*/
  *this = &vt_MSEngine; /*0x5d1b01*/
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
  for ( *this = &vt_MSEngine; v2 < *(this + 16); ++v2 ) /*0x5d1b45*/
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
  *v5 = &vt_VectorClass_MSSfx; /*0x5d1bae*/
  if ( v11 && *((_BYTE *)v5 + 13) ) /*0x5d1bb9*/
  {
    __3_YAXPAX_Z(v11); /*0x5d1bbf*/
    v5[1] = 0; /*0x5d1bc7*/
  }
  *((_BYTE *)v5 + 13) = 0; /*0x5d1bca*/
  v5[2] = 0; /*0x5d1bcd*/
  v12 = (void *)v8[1]; /*0x5d1bd0*/
  *v8 = &vt_VectorClass_MSAnim; /*0x5d1bd3*/
  if ( v12 && *((_BYTE *)v8 + 13) ) /*0x5d1bdd*/
  {
    __3_YAXPAX_Z(v12); /*0x5d1be3*/
    v8[1] = 0; /*0x5d1beb*/
  }
  *((_BYTE *)v8 + 13) = 0; /*0x5d1bee*/
  v8[2] = 0; /*0x5d1bf1*/
  v13 = (void *)v10[1]; /*0x5d1bf4*/
  *v10 = &vt_VectorClass_TRect_int; /*0x5d1bf7*/
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

// 0x5AC520
namespace gamemd {
void MSEngine::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSEngine_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSEngine_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSEngine_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5AC550
namespace gamemd {
unsigned int MSEngine::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->MSEngine_field_0xC )
    return (unsigned int)(a2 - this->MSEngine_field_0x4) >> 4;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5AC570
namespace gamemd {
unsigned int * MSEngine::Shutdown(unsigned int * a2, int a3)
{
{
    int *v3;
    v3 = (int *)(this->Items + 16 * a3);
    *a2 = *v3;
    *((int*)(a2) + 1) = v3[1];
    *((int*)(a2) + 2) = v3[2];
    *((int*)(a2) + 3) = v3[3];
    return a2;
}
}
} // namespace gamemd

// 0x5ACCC0
namespace gamemd {
char MSEngine::AddRef(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int *v5;
    int *v6;
    int v7;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = *(int *)(a2 + 4);
    v5 = (int *)this->Items;
    v6 = (int *)(v4 + 8);
    v7 = v4 - (int)v5;
    while ( *v5 == *(int *)((char *)(v5) + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 && v5[3] == v6[1] )
    {
    ++v3;
    v6 += 4;
    v5 += 4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x5ACE20
namespace gamemd {
void MSEngine::ddtor()
{
{
    if ( this->MSEngine_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->MSEngine_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSEngine_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5ACE50
namespace gamemd {
int MSEngine::Init(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->MSEngine_field_0xC )
    return 0;
    v3 = this->MSEngine_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2) || i[3] != *((int*)(a2) + 3); i += 4 )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5ACEB0
namespace gamemd {
unsigned int MSEngine::Run(int a2)
{
{
    if ( (unsigned char)this->MSEngine_field_0xC )
    return (unsigned int)(a2 - this->MSEngine_field_0x4) >> 4;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5ACFC0
namespace gamemd {
int MSEngine::FindItem(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2 || i[1] != *((int*)(a2) + 1) || i[2] != *((int*)(a2) + 2) || i[3] != *((int*)(a2) + 3); i += 4 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

// 0x5AD4D0
namespace gamemd {
VectorClass * MSEngine::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TRect_int;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x5AD520
namespace gamemd {
DynamicVector * MSEngine::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_TRect_int;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x5D5850
namespace gamemd {
void MSEngine::DestroyData()
{
{
    if ( *(void**)this )
    free(*(void**)this);
}
}
} // namespace gamemd
