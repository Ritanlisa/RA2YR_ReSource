// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x496130
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BlitTransLucent25AlphaZReadWrite_ushort::sub_496130(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->q004)( /*0x496167*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
}

// 0x496250
unsigned short * BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Lucent50(
        RLEBlitTransDarken_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _WORD *result; // eax
  int v17; // edi
  unsigned __int8 v19; // dl

  int v11 = a5; /*0x496250*/
  result = a1; /*0x496254*/
  if ( a5 <= 0 ) /*0x496263*/
  {
    v17 = a4; /*0x496287*/
  }
  else
  {
    do /*0x496278*/
    {
      if ( *a2++ ) /*0x496265*/
        --v11; /*0x496275*/
      else
        v11 -= *a2++; /*0x496270*/
    }
    while ( v11 > 0 ); /*0x496278*/
    int v16 = -v11; /*0x49627e*/
    v17 = a4 - v16; /*0x496280*/
    result = &a1[v16]; /*0x496282*/
  }
  while ( v17 > 0 ) /*0x49628d*/
  {
    if ( *a2++ ) /*0x49628f*/
    {
      --v17; /*0x4962b8*/
      *result = this->q004 & (*result >> 1); /*0x4962b9*/
      ++result; /*0x4962bc*/
    }
    else
    {
      v19 = *a2++; /*0x496296*/
      v17 -= v19; /*0x4962a7*/
      result += v19; /*0x4962a9*/
    }
  }
  return result; /*0x4962c3*/
}
}

// 0x494500
int BlitTransLucent25Alpha_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494530
int BlitTransLucent25Alpha_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494560
int BlitTransLucent25Alpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransXlatWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x496170
int BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Remap(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v11;
    int result;
    int v15;
    int v17;
    int v18;
    unsigned char v19;
    unsigned char v20;
    v11 = a5;
    result = arg0;
    v15 = **((int **)(this) + 1);
    if ( a5 <= 0 )
  {
    v18 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v11;
    else
    v11 -= *a2++;
    }
    while ( v11 > 0 );
    v17 = -v11;
    v18 = a4 - v17;
    result = arg0 + 2 * v17;
  }
    while ( v18 > 0 )
  {
    v19 = *a2++;
    if ( v19 )
    {
    result += 2;
    --v18;
    *(short *)(result - 2) = *(short *)(this->BlitTransLucent25AlphaZReadWrite_ushort_field_0x08 + 2 * *(unsigned char *)(v19 + v15));
    }
    else
    {
    v20 = *a2++;
    v18 -= v20;
    result += 2 * v20;
    }
  }
    return result;
}
}

// 0x496210
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// 0x4962D0
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransDarken_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// 0x49A340
BlitTransLucent25Alpha_ushort * BlitTransLucent25Alpha_ushort::Blit(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 2);
    *(void**)this = &vt_BlitTransLucent25Alpha_unsigned_short;
    FractalNoise::Release(v3);
    *(this + 2) = 0;
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent25Alpha_ushort *)this;
}
}

// 0x49A380
std::locale::facet * BlitTransLucent25Alpha_ushort::Constructor_Blitter(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A720
BlitTransLucent25AlphaZReadWrite_ushort * BlitTransLucent25AlphaZReadWrite_ushort::Blit(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 2);
    *(void**)this = &vt_BlitTransLucent25AlphaZReadWrite_unsigned_short;
    FractalNoise::Release(v3);
    *(this + 2) = 0;
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent25AlphaZReadWrite_ushort *)this;
}
}

// 0x49A760
RLEBlitTransXlat * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlat *)this;
}
}

// 0x49A780
std::locale::facet * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_0(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A7A0
std::locale::facet * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_1(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
