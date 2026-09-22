// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MSFrameAnim_e4.hpp"

// 0x769BD0
namespace gamemd {
void * MSFrameAnim::QueryInterface(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  *this = &vt_MSFrameAnim; /*0x769bd3*/
  VtableStub::5CB6C0(this); /*0x769bd9*/
  if ( (a2 & 1) != 0 ) /*0x769be3*/
    __3_YAXPAX_Z(this); /*0x769be6*/
  return (MSFrameAnim *)this; /*0x769bf0*/
}
}
} // namespace gamemd

// 0x769FE0
namespace gamemd {
int MSFrameAnim::setFrameRate(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx

  int v3 = a2; /*0x769fe3*/
  if ( a2 ) /*0x769fed*/
  {
  _DWORD *v6; // ebx
    this->q00C = 0; /*0x769ff7*/
    if ( a3 ) /*0x769ffd*/
    {
      *a3 = a2; /*0x76a041*/
      _DWORD * v8 = a3 + 1; /*0x76a043*/
      if ( a2 - 1 >= 0 ) /*0x76a04f*/
      {
        int v9 = a2; /*0x76a051*/
        do /*0x76a065*/
        {
          ComPtr::Constructor(v8); /*0x76a056*/
          *v8 = &vt_rc_ptr_WorldDominationTour_Territory; /*0x76a05b*/
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
      _DWORD * v5 = __2_YAPAXI_Z(8 * a2 + 4); /*0x76a007*/
      if ( v5 ) /*0x76a011*/
      {
        *v5 = a2; /*0x76a013*/
        v6 = v5 + 1; /*0x76a015*/
        _DWORD * v7 = v5 + 1; /*0x76a01b*/
        if ( a2 - 1 >= 0 ) /*0x76a01f*/
        {
          int v14 = a2; /*0x76a022*/
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
    this->q00C = 1; /*0x76a06f*/
    if ( !v6 ) /*0x76a073*/
      return 0; /*0x76a0f6*/
    if ( this->MSFrameAnim_field_0x4 ) /*0x76a075*/
    {
      if ( a2 >= this->MSFrameAnim_field_0x8 ) /*0x76a081*/
        v3 = this->MSFrameAnim_field_0x8; /*0x76a083*/
      for ( i = 0; i < v3; ++i ) /*0x76a089*/
        ComPtr::Set(&v6[2 * i], *(_DWORD *)(this->MSFrameAnim_field_0x4 + 8 * i + 4)); /*0x76a096*/
      if ( this->IsAllocated ) /*0x76a0a0*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))this->MSFrameAnim_field_0x4; /*0x76a0a7*/
        if ( v11 ) /*0x76a0ac*/
          (**v11)(v11, 3); /*0x76a0b2*/
        this->MSFrameAnim_field_0x4 = 0; /*0x76a0b4*/
      }
      v3 = a2; /*0x76a0bb*/
    }
    this->MSFrameAnim_field_0x4 = v6; /*0x76a0ca*/
    this->MSFrameAnim_field_0x8 = v3; /*0x76a0cd*/
    this->IsAllocated = a3 == 0; /*0x76a0d0*/
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(this->q00C)(this); /*0x76a0d9*/
  }
  int v12 = this->MSFrameAnim_field_0x8; /*0x76a0dc*/
  if ( v12 < this->MSFrameAnim_field_0x10 ) /*0x76a0e4*/
    this->MSFrameAnim_field_0x10 = v12; /*0x76a0e6*/
  return 1; /*0x76a0e9*/
}
}
} // namespace gamemd

// 0x767ED0
namespace gamemd {
char MSFrameAnim::Load(int a1, int * a2)
{
{
    if ( DataGlobal_8487BC )
    RenderScoreScreen(a1, a2, 1);
    return 0;
}
}
} // namespace gamemd

// 0x767EF0
namespace gamemd {
void MSFrameAnim::Draw(int a1, int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    if ( DataGlobal_8487BD )
  {
    v2 = (*(int (__thiscall **)(int))(*(int *)(a1) + 124))(a1);
    v3 = (*(int (__thiscall **)(int))(*(int *)(a1) + 128))(a1);
    if ( a2 )
    {
    v4 = *((int*)(a2) + 1);
    v7 = *a2;
    v5 = *((int*)(a2) + 2);
    v6 = *((int*)(a2) + 3);
    v8 = v4;
    v10 = v6;
    v9 = v5;
    }
    else
    {
    v7 = 0;
    v8 = 0;
    v9 = v2;
    v10 = v3;
    }
    RenderScoreScreen(a1, &v7, 1);
  }
}
}
} // namespace gamemd

// 0x767F80
namespace gamemd {
unsigned int * MSFrameAnim::UpdateFrame(unsigned int * a1)
{
{
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    *((int*)(a1) + 2) = 640;
    *((int*)(a1) + 3) = 480;
    return a1;
}
}
} // namespace gamemd

// 0x769C50
namespace gamemd {
int MSFrameAnim::initAnimation()
{
{
    int (__thiscall ***v2)(int, int);
    int result;
    v2 = *(int (__thiscall ****)(int, int))(this + 4);
    this->MSFrameAnim_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    result = (**v2)(v2, 3);
    this->MSFrameAnim_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSFrameAnim_field_0x8 = 0;
    return result;
}
}
} // namespace gamemd

// 0x769C80
namespace gamemd {
unsigned int MSFrameAnim::startAnimation(int a2)
{
{
    if ( (unsigned char)this->MSFrameAnim_field_0xC )
    return (unsigned int)(a2 - this->MSFrameAnim_field_0x4) >> 3;
    else
    return 0;
}
}
} // namespace gamemd

// 0x769CD0
namespace gamemd {
void MSFrameAnim::stopAnimation()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->MSFrameAnim_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->MSFrameAnim_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->MSFrameAnim_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x769D00
namespace gamemd {
unsigned int MSFrameAnim::pauseAnimation(int a2)
{
{
    if ( (unsigned char)this->MSFrameAnim_field_0xC )
    return (unsigned int)(a2 - this->MSFrameAnim_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x769D90
namespace gamemd {
rc_ptr * MSFrameAnim::resumeAnimation(char a2)
{
{
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Map;
    ComPtr::Release(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (rc_ptr *)this;
}
}
} // namespace gamemd

// 0x76A100
namespace gamemd {
int MSFrameAnim::getCurrentFrame(int a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)(this->Items + 4); *i != *(int *)(a2 + 4); i += 2 )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x76A2B0
namespace gamemd {
char MSFrameAnim::loopAnimation(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->MSFrameAnim_field_0x4 )
    {
    v5 = this->MSFrameAnim_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->MSFrameAnim_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->MSFrameAnim_field_0x4 = 0;
      }
    }
    this->MSFrameAnim_field_0x4 = v4;
    this->MSFrameAnim_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->initAnimation();
  }
    v7 = this->MSFrameAnim_field_0x8;
    if ( v7 < this->MSFrameAnim_field_0x10 )
    this->MSFrameAnim_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x76A360
namespace gamemd {
int MSFrameAnim::resetAnimation(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x76A680
namespace gamemd {
DynamicVector * MSFrameAnim::setPosition(char a2)
{
{
    void (__thiscall ***v3)(int, int);
    v3 = (void (__thiscall ***)(int, int))*(this + 1);
    *(void**)this = &vt_VectorClass_rc_ptr_WorldDominationTour_Territory;
    if ( v3 && *((char *)(this) + 13) )
  {
    (**v3)(v3, 3);
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

// 0x76A720
namespace gamemd {
DynamicVector * MSFrameAnim::setScale(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_WorldDominationTour_Map_AnimationPalette;
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

// 0x76A7C0
namespace gamemd {
unsigned int * MSFrameAnim::drawFrame()
{
{
    ComPtr::Constructor(this);
    *(void**)this = &vt_rc_ptr_WorldDominationTour_Territory;
    return this;
}
}
} // namespace gamemd
