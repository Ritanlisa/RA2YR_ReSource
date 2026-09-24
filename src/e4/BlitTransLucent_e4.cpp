// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x496130
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x496167*/
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
// 0x496250
unsigned short * BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // edx
  _WORD *result; // eax
  int v16; // edx
  int v17; // edi
  unsigned __int8 v19; // dl

  v11 = a5; /*0x496250*/
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
    v16 = -v11; /*0x49627e*/
    v17 = a4 - v16; /*0x496280*/
    result = &a1[v16]; /*0x496282*/
  }
  while ( v17 > 0 ) /*0x49628d*/
  {
    if ( *a2++ ) /*0x49628f*/
    {
      --v17; /*0x4962b8*/
      *result = *(this + 2) & (*result >> 1); /*0x4962b9*/
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
// 0x494500
int BlitTransLucent25Alpha_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49452a*/
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
// 0x494530
int BlitTransLucent25Alpha_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49455a*/
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
// 0x494560
int BlitTransLucent25Alpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, _DWORD))(*(_DWORD *)this + 4))( /*0x49458a*/
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
// 0x496170
int BlitTransLucent25AlphaZReadWrite_ushort::Blit_RLE_Remap(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // edx
  int result; // eax
  int v15; // ecx
  int v17; // edx
  int v18; // edi
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl

  v11 = a5; /*0x496170*/
  result = arg0; /*0x496175*/
  v15 = **(_DWORD **)(this + 4); /*0x496187*/
  if ( a5 <= 0 ) /*0x496189*/
  {
    v18 = a4; /*0x4961ad*/
  }
  else
  {
    do /*0x49619e*/
    {
      if ( *a2++ ) /*0x49618b*/
        --v11; /*0x49619b*/
      else
        v11 -= *a2++; /*0x496196*/
    }
    while ( v11 > 0 ); /*0x49619e*/
    v17 = -v11; /*0x4961a4*/
    v18 = a4 - v17; /*0x4961a6*/
    result = arg0 + 2 * v17; /*0x4961a8*/
  }
  while ( v18 > 0 ) /*0x4961b3*/
  {
    v19 = *a2++; /*0x4961b5*/
    if ( v19 ) /*0x4961be*/
    {
      result += 2; /*0x4961e4*/
      --v18; /*0x4961e7*/
      *(_WORD *)(result - 2) = *(_WORD *)(*(_DWORD *)(this + 8) + 2 * *(unsigned __int8 *)(v19 + v15)); /*0x4961f2*/
    }
    else
    {
      v20 = *a2++; /*0x4961c0*/
      v18 -= v20; /*0x4961d1*/
      result += 2 * v20; /*0x4961d3*/
    }
  }
  return result; /*0x4961fa*/
}
// 0x496210
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x496247*/
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
// 0x4962D0
int BlitTransLucent25AlphaZReadWrite_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 4))( /*0x496307*/
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
// 0x49A340
BlitTransLucent25Alpha_ushort * BlitTransLucent25Alpha_ushort::Blit(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 2); /*0x49a348*/
  *this = &BlitTransLucent25Alpha<unsigned short>::`vftable'; /*0x49a34b*/
  FractalNoise::Dtor(v3); /*0x49a352*/
  *(this + 2) = 0; /*0x49a35b*/
  *this = &Blitter::`vftable'; /*0x49a364*/
  if ( (a2 & 1) != 0 ) /*0x49a36a*/
    __3_YAXPAX_Z(this); /*0x49a36d*/
  return this; /*0x49a377*/
}
// 0x49A380
std::locale::facet * BlitTransLucent25Alpha_ushort::Constructor_Blitter(char a2)
{
  *(_DWORD *)this = &Blitter::`vftable'; /*0x49a389*/
  if ( (a2 & 1) != 0 ) /*0x49a38f*/
    __3_YAXPAX_Z(this); /*0x49a392*/
  return this; /*0x49a39c*/
}
// 0x49A720
BlitTransLucent25AlphaZReadWrite_ushort * BlitTransLucent25AlphaZReadWrite_ushort::Blit(char a2)
{
  void *v3; // eax

  v3 = (void *)*(this + 2); /*0x49a728*/
  *this = &BlitTransLucent25AlphaZReadWrite<unsigned short>::`vftable'; /*0x49a72b*/
  FractalNoise::Dtor(v3); /*0x49a732*/
  *(this + 2) = 0; /*0x49a73b*/
  *this = &Blitter::`vftable'; /*0x49a744*/
  if ( (a2 & 1) != 0 ) /*0x49a74a*/
    __3_YAXPAX_Z(this); /*0x49a74d*/
  return this; /*0x49a757*/
}
// 0x49A760
RLEBlitTransXlat * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter(char a2)
{
  *(_DWORD *)this = &RLEBlitter::`vftable'; /*0x49a769*/
  if ( (a2 & 1) != 0 ) /*0x49a76f*/
    __3_YAXPAX_Z(this); /*0x49a772*/
  return this; /*0x49a77c*/
}
// 0x49A780
std::locale::facet * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_0(char a2)
{
  *(_DWORD *)this = &RLEBlitter::`vftable'; /*0x49a789*/
  if ( (a2 & 1) != 0 ) /*0x49a78f*/
    __3_YAXPAX_Z(this); /*0x49a792*/
  return this; /*0x49a79c*/
}
// 0x49A7A0
std::locale::facet * BlitTransLucent25AlphaZReadWrite_ushort::Constructor_RLEBlitter_1(char a2)
{
  *(_DWORD *)this = &RLEBlitter::`vftable'; /*0x49a7a9*/
  if ( (a2 & 1) != 0 ) /*0x49a7af*/
    __3_YAXPAX_Z(this); /*0x49a7b2*/
  return this; /*0x49a7bc*/
}