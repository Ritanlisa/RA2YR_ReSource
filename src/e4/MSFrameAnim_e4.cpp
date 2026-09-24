// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFrameAnim_e4.hpp"

// 0x769BD0
namespace gamemd {
void * MSFrameAnim::QueryInterface(char a2)
{
  *this = &MSFrameAnim::`vftable'; /*0x769bd3*/
  VtableStub::5CB6C0(this); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(this); /*0x769be6*/
  return this; /*0x769bf0*/
}
}
// 0x769FE0
namespace gamemd {
AbstractClass * * MSFrameAnim::setFrameRate(int a2, unsigned int * a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // esi
  int v9; // ebx
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // eax
  int v14; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
    *(this + 12) = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      v8 = a3 + 1; /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ComPtr::Constructor(v8); /*0x76a056*/
          *v8 = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a05b*/
          v8 += 2; /*0x76a061*/
          --v9; /*0x76a064*/
        }
        while ( v9 ); /*0x76a065*/
        v8 = a3 + 1; /*0x76a067*/
      }
      v6 = v8; /*0x76a06b*/
    }
    else
    {
      v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = v5 + 1; /*0x76a015*/
        v7 = v5 + 1; /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          v14 = a2; /*0x76a022*/
          do /*0x76a039*/
          {
            MSFrameAnim::drawFrame(v7); /*0x76a028*/
            v7 += 2; /*0x76a031*/
            --v14; /*0x76a035*/
          }
          while ( v14 ); /*0x76a039*/
        }
      }
      else
      {
        v6 = 0; /*0x76a03d*/
      }
    }
    *(this + 12) = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( *((_DWORD *)this + 1) ) /*0x76a075*/
    {
      if ( a2 >= *((_DWORD *)this + 2) ) /*0x76a081*/
        v3 = *((_DWORD *)this + 2); /*0x76a083*/
      for ( i = 0; i < v3; ++i ) /*0x76a089*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(*((_DWORD *)this + 1) + 8 * i + 4)); /*0x76a096*/
      if ( *(this + 13) ) /*0x76a0a0*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1); /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        *((_DWORD *)this + 1) = 0; /*0x76a0b4*/
      }
      v3 = a2; /*0x76a0bb*/
    }
    *((_DWORD *)this + 1) = v6; /*0x76a0ca*/
    *((_DWORD *)this + 2) = v3; /*0x76a0cd*/
    *(this + 13) = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 12))(this); /*0x76a0d9*/
  }
  v12 = *((_DWORD *)this + 2); /*0x76a0dc*/
  if ( v12 < *((_DWORD *)this + 4) ) /*0x76a0e4*/
    *((_DWORD *)this + 4) = v12; /*0x76a0e6*/
  return 1; /*0x76a0e9*/
}
}
// 0x767ED0
namespace gamemd {
char MSFrameAnim::Load(int a1, int * a2)
{
  if ( byte_8487BC ) /*0x767ed7*/
    RenderScoreScreen(a1, a2, 1); /*0x767ee3*/
  return 0; /*0x767eea*/
}
} // namespace gamemd

// 0x767EF0
namespace gamemd {
void MSFrameAnim::Draw(int a1, int * a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  if ( byte_8487BD ) /*0x767efc*/
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 124))(a1); /*0x767f0d*/
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1); /*0x767f0f*/
    if ( a2 ) /*0x767f1b*/
    {
      v4 = a2[1]; /*0x767f1f*/
      v7 = *a2; /*0x767f22*/
      v5 = a2[2]; /*0x767f26*/
      v6 = a2[3]; /*0x767f29*/
      v8 = v4; /*0x767f2c*/
      v10 = v6; /*0x767f30*/
      v9 = v5; /*0x767f3c*/
    }
    else
    {
      v7 = 0; /*0x767f55*/
      v8 = 0; /*0x767f5d*/
      v9 = v2; /*0x767f65*/
      v10 = v3; /*0x767f69*/
    }
    RenderScoreScreen(a1, &v7, 1); /*0x767f40*/
  }
}
} // namespace gamemd

// 0x767F80
namespace gamemd {
unsigned int * MSFrameAnim::UpdateFrame(unsigned int * a1)
{
  *a1 = 0; /*0x767f8c*/
  a1[1] = 0; /*0x767f99*/
  a1[2] = 640; /*0x767f9c*/
  a1[3] = 480; /*0x767f9f*/
  return a1; /*0x767fa2*/
}
} // namespace gamemd

// 0x769C50
namespace gamemd {
int MSFrameAnim::initAnimation()
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = *(int (__thiscall ****)(_DWORD, int))(this + 4); /*0x769c56*/
  *(_DWORD *)(this + 16) = 0; /*0x769c59*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x769c60*/
  {
    result = (**v2)(v2, 3); /*0x769c6d*/
    *(_DWORD *)(this + 4) = 0; /*0x769c6f*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x769c72*/
  *(_DWORD *)(this + 8) = 0; /*0x769c75*/
  return result; /*0x769c78*/
}
} // namespace gamemd

// 0x769C80
namespace gamemd {
unsigned int MSFrameAnim::startAnimation(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x769c80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x769c95*/
  else
    return 0; /*0x769c87*/
}
} // namespace gamemd

// 0x769CD0
namespace gamemd {
void MSFrameAnim::stopAnimation()
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x769cd6*/
  *(_DWORD *)(this + 16) = 0; /*0x769cd9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x769ce0*/
  {
    __3_YAXPAX_Z(v2); /*0x769ce6*/
    *(_DWORD *)(this + 4) = 0; /*0x769cee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x769cf1*/
  *(_DWORD *)(this + 8) = 0; /*0x769cf4*/
}
} // namespace gamemd

// 0x769D00
namespace gamemd {
unsigned int MSFrameAnim::pauseAnimation(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x769d00*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x769d15*/
  else
    return 0; /*0x769d07*/
}
} // namespace gamemd

// 0x769D90
namespace gamemd {
rc_ptr * MSFrameAnim::resumeAnimation(char a2)
{
  *this = &rc_ptr<WorldDominationTour::Map>::`vftable'; /*0x769d93*/
  ComPtr::Release(this); /*0x769d99*/
  if ( (a2 & 1) != 0 ) /*0x769da3*/
    __3_YAXPAX_Z(this); /*0x769da6*/
  return this; /*0x769db0*/
}
} // namespace gamemd

// 0x76A100
namespace gamemd {
int MSFrameAnim::getCurrentFrame(int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x76a100*/
  result = 0; /*0x76a103*/
  if ( v2 <= 0 ) /*0x76a108*/
    return -1; /*0x76a123*/
  for ( i = (_DWORD *)(*(this + 1) + 4); *i != *(_DWORD *)(a2 + 4); i += 2 ) /*0x76a111*/
  {
    if ( ++result >= v2 ) /*0x76a121*/
      return -1; /*0x76a121*/
  }
  return result; /*0x76a126*/
}
}
// 0x76A2B0
namespace gamemd {
char MSFrameAnim::loopAnimation(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x76a2bc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x76a2c2*/
    if ( a3 ) /*0x76a2c8*/
      v4 = a3; /*0x76a2de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x76a2da*/
    *((_BYTE *)this + 12) = 1; /*0x76a2e2*/
    if ( !v4 ) /*0x76a2e6*/
      return 0; /*0x76a35a*/
    if ( *((_DWORD *)this + 1) ) /*0x76a2e8*/
    {
      v5 = *((_DWORD *)this + 2); /*0x76a2ef*/
      if ( a2 < v5 ) /*0x76a2f4*/
        v5 = a2; /*0x76a2f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) ) /*0x76a2fc*/
        ++i; /*0x76a301*/
      if ( *((_BYTE *)this + 13) ) /*0x76a30e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x76a319*/
        *((_DWORD *)this + 1) = 0; /*0x76a321*/
      }
    }
    *((_DWORD *)this + 1) = v4; /*0x76a32a*/
    *((_DWORD *)this + 2) = a2; /*0x76a332*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x76a335*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x76a33e*/
  }
  v7 = *((_DWORD *)this + 2); /*0x76a341*/
  if ( v7 < *((_DWORD *)this + 4) ) /*0x76a349*/
    *((_DWORD *)this + 4) = v7; /*0x76a34b*/
  return 1; /*0x76a34e*/
}
} // namespace gamemd

// 0x76A360
namespace gamemd {
int MSFrameAnim::resetAnimation(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x76a360*/
  result = 0; /*0x76a363*/
  if ( v2 <= 0 ) /*0x76a368*/
    return -1; /*0x76a37f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x76a36e*/
  {
    if ( ++result >= v2 ) /*0x76a37d*/
      return -1; /*0x76a37d*/
  }
  return result; /*0x76a382*/
}
}
// 0x76A680
namespace gamemd {
DynamicVector * MSFrameAnim::setPosition(char a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 1); /*0x76a683*/
  *this = &VectorClass<rc_ptr<WorldDominationTour::Territory>>::`vftable'; /*0x76a686*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x76a690*/
  {
    (**v3)(v3, 3); /*0x76a69f*/
    *(this + 1) = 0; /*0x76a6a1*/
  }
  *((_BYTE *)this + 13) = 0; /*0x76a6ac*/
  *(this + 2) = 0; /*0x76a6b2*/
  if ( (a2 & 1) != 0 ) /*0x76a6b9*/
    __3_YAXPAX_Z(this); /*0x76a6bc*/
  return this; /*0x76a6c6*/
}
} // namespace gamemd

// 0x76A720
namespace gamemd {
DynamicVector * MSFrameAnim::setScale(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 1); /*0x76a723*/
  *this = &VectorClass<WorldDominationTour::Map::AnimationPalette *>::`vftable'; /*0x76a726*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x76a730*/
  {
    __3_YAXPAX_Z(v3); /*0x76a738*/
    *(this + 1) = 0; /*0x76a740*/
  }
  *((_BYTE *)this + 13) = 0; /*0x76a74b*/
  *(this + 2) = 0; /*0x76a751*/
  if ( (a2 & 1) != 0 ) /*0x76a758*/
    __3_YAXPAX_Z(this); /*0x76a75b*/
  return this; /*0x76a765*/
}
} // namespace gamemd

// 0x76A7C0
namespace gamemd {
unsigned int * MSFrameAnim::drawFrame()
{
  ComPtr::Constructor(this); /*0x76a7c3*/
  *this = &rc_ptr<WorldDominationTour::Territory>::`vftable'; /*0x76a7c8*/
  return this; /*0x76a7d0*/
}
} // namespace gamemd
