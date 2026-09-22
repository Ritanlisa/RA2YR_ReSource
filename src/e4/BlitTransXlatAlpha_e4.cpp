// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlitTransXlatAlpha_ushort_e4.hpp"

// 0x493930
namespace gamemd {
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  MouseClass *v11; // edx
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a4; /*0x493930*/
  if ( a4 > 0 ) /*0x49393b*/
  {
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x493941*/
    a5a = (_WORD *)a4; /*0x493952*/
    do /*0x4939c4*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493967*/
      {
        *a1 = 3 * (this->q008 & (*a1 >> 2)) /*0x493996*/
            + (this->q008 & (*(_WORD *)(this->BlitTransXlatAlpha_ushort_field_0x4 + 2 * (unsigned __int8)*a2) >> 2));
        *a5 = argC; /*0x493999*/
        v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x49399c*/
      }
      ++a1; /*0x4939a6*/
      ++a2; /*0x4939aa*/
      _WORD * v13 = a5 + 1; /*0x4939ae*/
      if ( (unsigned int)(a5 + 1) >= v11->TacticalMap_field_1C ) /*0x4939b4*/
        v13 = (_WORD *)((char *)v13 - v11->TacticalMap_field_20); /*0x4939b6*/
      a5 = v13; /*0x4939b9*/
      result = (int)a5a - 1; /*0x4939bf*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x4939c0*/
    }
    while ( a5a ); /*0x4939c4*/
  }
  return result; /*0x4939c9*/
}
}
} // namespace gamemd

// 0x493A60
namespace gamemd {
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  MouseClass *v14; // edi
  _WORD *a5a; // [esp+14h] [ebp+14h]

  result = a4; /*0x493a60*/
  if ( a4 > 0 ) /*0x493a6a*/
  {
    int v12 = argC; /*0x493a76*/
    v14 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x493a80*/
    a5a = (_WORD *)a4; /*0x493a86*/
    do /*0x493aee*/
    {
      if ( v12 < (unsigned __int16)*a5 && *a2 ) /*0x493a97*/
      {
        v12 = argC; /*0x493ac2*/
        *a1 = (this->q008 & (*a1 >> 1)) /*0x493ac6*/
            + (this->q008 & (*(_WORD *)(this->BlitTransXlatAlpha_ushort_field_0x4 + 2 * (unsigned __int8)*a2) >> 1));
        *a5 = argC; /*0x493ac9*/
        v14 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x493acc*/
      }
      _WORD * v15 = a5 + 1; /*0x493ad2*/
      ++a2; /*0x493ad8*/
      ++a1; /*0x493ad9*/
      if ( (unsigned int)(a5 + 1) >= v14->TacticalMap_field_1C ) /*0x493ade*/
        v15 = (_WORD *)((char *)v15 - v14->TacticalMap_field_20); /*0x493ae0*/
      a5 = v15; /*0x493ae3*/
      result = (int)a5a - 1; /*0x493ae9*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493aea*/
    }
    while ( a5a ); /*0x493aee*/
  }
  return result; /*0x493af4*/
}
}
} // namespace gamemd

// 0x493B90
namespace gamemd {
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25_0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  MouseClass *v11; // edx
  _WORD *a5a; // [esp+18h] [ebp+14h]

  result = a4; /*0x493b90*/
  if ( a4 > 0 ) /*0x493b9b*/
  {
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x493ba1*/
    a5a = (_WORD *)a4; /*0x493bb2*/
    do /*0x493c24*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493bc7*/
      {
        *a1 = (this->q008 & (*a1 >> 2)) /*0x493bf6*/
            + 3 * (this->q008 & (*(_WORD *)(this->BlitTransXlatAlpha_ushort_field_0x4 + 2 * (unsigned __int8)*a2) >> 2));
        *a5 = argC; /*0x493bf9*/
        v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x493bfc*/
      }
      ++a1; /*0x493c06*/
      ++a2; /*0x493c0a*/
      _WORD * v13 = a5 + 1; /*0x493c0e*/
      if ( (unsigned int)(a5 + 1) >= v11->TacticalMap_field_1C ) /*0x493c14*/
        v13 = (_WORD *)((char *)v13 - v11->TacticalMap_field_20); /*0x493c16*/
      a5 = v13; /*0x493c19*/
      result = (int)a5a - 1; /*0x493c1f*/
      a5a = (_WORD *)((char *)a5a - 1); /*0x493c20*/
    }
    while ( a5a ); /*0x493c24*/
  }
  return result; /*0x493c29*/
}
}
} // namespace gamemd

// 0x493DF0
namespace gamemd {
int BlitTransXlatAlpha_ushort::AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, unsigned short * a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  unsigned __int8 v16; // bl
  int v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x493e18*/
    v11 = 254; /*0x493e1a*/
  result = this->q008 + (v11 << 9); /*0x493e25*/
  if ( a4 > 0 ) /*0x493e2d*/
  {
    MouseClass *v14 = g_VisibleSurfaceDescriptor; /*0x493e35*/
    int v17 = a4; /*0x493e3b*/
    do /*0x493e8e*/
    {
      v16 = *a3++; /*0x493e43*/
      if ( v16 ) /*0x493e4c*/
      {
        *a2 = *(_WORD *)(this->q004 + 2 * (v16 | *(unsigned __int16 *)(result + 2 * *a7))); /*0x493e6c*/
        v14 = g_VisibleSurfaceDescriptor; /*0x493e6f*/
      }
      ++a7; /*0x493e78*/
      ++a2; /*0x493e7b*/
      if ( (unsigned int)a7 >= v14[7] ) /*0x493e80*/
        a7 = (unsigned __int16 *)((char *)a7 - v14[8]); /*0x493e82*/
      --v17; /*0x493e8a*/
    }
    while ( v17 ); /*0x493e8e*/
  }
  return result; /*0x493e92*/
}
}
} // namespace gamemd

// 0x493EA0
namespace gamemd {
int BlitTransXlatAlpha_ushort::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return this->AddRef(a2, a3, a4, a5, a6, a7, a8, 0);
}
} // namespace gamemd

// 0x493ED0
namespace gamemd {
int BlitTransXlatAlpha_ushort::BlitRect(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->q004)( /*0x493efa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}
}
} // namespace gamemd

// 0x493F00
namespace gamemd {
int BlitTransXlatAlpha_ushort::GetSize(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(this->q004)( /*0x493f2a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);
}
}
} // namespace gamemd

// 0x4939D0
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493A00
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493A30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493B00
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_2(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493B30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_3(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493B60
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_4(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493C30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_5(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493C60
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_6(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493C90
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_7(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x49A1A0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A1C0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter_0(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A1E0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter_1(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A240
namespace gamemd {
BlitTransXlatAlpha_ushort * BlitTransXlatAlpha_ushort::Blit(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 2);
    *(void**)this = &vt_BlitTransXlatAlpha_unsigned_short;
    FractalNoise::Release(v3);
    *(this + 2) = 0;
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatAlpha_ushort *)this;
}
}
} // namespace gamemd
