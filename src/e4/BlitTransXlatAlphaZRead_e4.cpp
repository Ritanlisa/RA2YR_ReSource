// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x494890
int BlitTransXlatAlphaZRead_ushort::CallBlit0_2(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494920
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50(
        BlitTranslucent50NonzeroAlpha_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int _14,
        _WORD *a6,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalClass *v12; // edi
  unsigned __int8 v13; // dl
  _WORD *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494924*/
  if ( a4 > 0 ) /*0x49492a*/
  {
    v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494938*/
    a6a = (_WORD *)a4; /*0x49493e*/
    do /*0x49499a*/
    {
      v13 = *a2++; /*0x494942*/
      if ( v13 && *result ) /*0x49494d*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x494978*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(this->BlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * v13) >> 1));
        v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x49497b*/
      }
      ++result; /*0x494984*/
      ++a1; /*0x494987*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x49498c*/
        result = (_WORD *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x49498e*/
      a6a = (_WORD *)((char *)a6a - 1); /*0x494996*/
    }
    while ( a6a ); /*0x49499a*/
  }
  return result; /*0x4949a0*/
}
}

// 0x494A40
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50_0(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_WORD *__thiscall BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50_0(
        BlitTranslucent50ZeroAlpha_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int _14,
        _WORD *a6,
        int a8,
        int a9)
{
  _WORD *result; // eax
  TacticalClass *v12; // edi
  unsigned __int8 v13; // dl
  _WORD *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494a44*/
  if ( a4 > 0 ) /*0x494a4a*/
  {
    v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494a58*/
    a6a = (_WORD *)a4; /*0x494a5e*/
    do /*0x494aba*/
    {
      v13 = *a2++; /*0x494a62*/
      if ( v13 && !*result ) /*0x494a6d*/
      {
        *a1 = (*(_WORD *)(this + 2) & (*a1 >> 1)) /*0x494a98*/
            + (*(_WORD *)(this + 2) & (*(_WORD *)(this->BlitTransXlatAlphaZRead_ushort_field_0x04 + 2 * v13) >> 1));
        v12 = (TacticalClass *)MEMORY[0x87E8A4]; /*0x494a9b*/
      }
      ++result; /*0x494aa4*/
      ++a1; /*0x494aa7*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x494aac*/
        result = (_WORD *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x494aae*/
      a6a = (_WORD *)((char *)a6a - 1); /*0x494ab6*/
    }
    while ( a6a ); /*0x494aba*/
  }
  return result; /*0x494ac0*/
}
}

// 0x494B60
int BlitTransXlatAlphaZRead_ushort::AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt01(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9)
{
  int v11; // eax
  int result; // eax
  _DWORD *v13; // ebp
  unsigned __int16 v15; // ax
  int v16; // [esp+20h] [ebp+14h]
  int v17; // [esp+24h] [ebp+18h]

  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x494b8b*/
    v11 = 254; /*0x494b8d*/
  result = *(this + 2) + (v11 << 9); /*0x494b98*/
  v17 = result; /*0x494ba0*/
  if ( a4 > 0 ) /*0x494ba4*/
  {
    v13 = MEMORY[0x887644]; /*0x494bab*/
    v16 = a4; /*0x494bb1*/
    do /*0x494c31*/
    {
      v15 = *a6++; /*0x494bbf*/
      if ( a5 < v15 && *a3 ) /*0x494bd1*/
      {
        *a2 = *(_WORD *)(*(this + 1) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v17 + 2 * *a7))); /*0x494bf9*/
        v13 = MEMORY[0x887644]; /*0x494bfc*/
      }
      ++a2; /*0x494c06*/
      ++a3; /*0x494c0a*/
      if ( (unsigned int)a6 >= v13[7] ) /*0x494c13*/
        a6 = (unsigned __int16 *)((char *)a6 - v13[8]); /*0x494c15*/
      if ( (unsigned int)++a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x494c23*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x494c25*/
      result = --v16; /*0x494c2c*/
    }
    while ( v16 ); /*0x494c31*/
  }
  return result; /*0x494c34*/
}
}

// 0x494C40
int BlitTransXlatAlphaZRead_ushort::BlitRect(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9, short a10)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BlitTransXlatAlphaZRead_ushort::BlitRect(
        _DWORD *this,
        _WORD *a2,
        _BYTE *a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int16 a10)
{
  int v12; // eax
  int result; // eax
  _DWORD *v14; // ebp
  unsigned __int16 v16; // ax
  int v17; // [esp+20h] [ebp+14h]
  int v18; // [esp+24h] [ebp+18h]

  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x494c6b*/
    v12 = 254; /*0x494c6d*/
  result = *(this + 2) + (v12 << 9); /*0x494c78*/
  v18 = result; /*0x494c80*/
  if ( a4 > 0 ) /*0x494c84*/
  {
    v14 = MEMORY[0x887644]; /*0x494c8b*/
    v17 = a4; /*0x494c91*/
    do /*0x494d16*/
    {
      v16 = *a6++; /*0x494c9f*/
      if ( a5 < v16 && *a3 ) /*0x494cb1*/
      {
        *a2 = a10 | *(_WORD *)(*(this + 1) + 2 * ((unsigned __int8)*a3 | *(unsigned __int16 *)(v18 + 2 * *a7))); /*0x494cde*/
        v14 = MEMORY[0x887644]; /*0x494ce1*/
      }
      ++a2; /*0x494ceb*/
      ++a3; /*0x494cef*/
      if ( (unsigned int)a6 >= v14[7] ) /*0x494cf8*/
        a6 = (unsigned __int16 *)((char *)a6 - v14[8]); /*0x494cfa*/
      if ( (unsigned int)++a7 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x494d08*/
        a7 = (unsigned __int16 *)((char *)a7 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x494d0a*/
      result = --v17; /*0x494d11*/
    }
    while ( v17 ); /*0x494d16*/
  }
  return result; /*0x494d19*/
}
}

// 0x494D20
int BlitTransXlatAlphaZRead_ushort::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt03(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x494d4a*/
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

// 0x494D50
int BlitTransXlatAlphaZRead_ushort::GetSize(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall BlitTransXlatAlphaZRead_ushort::_vt04(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD, int))(*(_DWORD *)this + 8))( /*0x494d7f*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0,
           a9);
}
}

// 0x49A3A0
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A3C0
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_0(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A3E0
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_1(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A400
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_2(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A420
BlitTransXlatAlphaZRead_ushort * BlitTransXlatAlphaZRead_ushort::Blit(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 2);
    *(void**)this = &vt_BlitTransXlatAlphaZRead_unsigned_short;
    FractalNoise::Release(v3);
    *(this + 2) = 0;
    *(void**)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatAlphaZRead_ushort *)this;
}
}

// 0x4948C0
int BlitTransXlatAlphaZRead_ushort::CallBlit0_3(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x4948F0
int BlitTransXlatAlphaZRead_ushort::CallBlit0_4(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x4949B0
int BlitTransXlatAlphaZRead_ushort::CallBlit0_5(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x4949E0
int BlitTransXlatAlphaZRead_ushort::CallBlit0_6(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494A10
int BlitTransXlatAlphaZRead_ushort::CallBlit0_7(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494AD0
int BlitTransXlatAlphaZRead_ushort::CallBlit0_8(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494B00
int BlitTransXlatAlphaZRead_ushort::CallBlit0_9(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}

// 0x494B30
int BlitTransXlatAlphaZRead_ushort::CallBlit0_10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
