// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x497A10
unsigned short * RLEBlitTransZRemapXlatAlpha_ushort::AddRef(int arg0, unsigned char * a2, int a4, RLEBlitTransZRemapXlatAlpha_ushort * aP4, int a6, int _2C, unsigned short * a7, int a9, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int16 *__thiscall RLEBlitTransZRemapXlatAlpha_ushort::AddRef(
        int this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        RLEBlitTransZRemapXlatAlpha_ushort *aP4,
        int a6,
        int _2C,
        unsigned __int16 *a7,
        int a9,
        int a10,
        int a11)
{
  unsigned __int16 *result; // eax
  int v14; // edx
  RLEBlitTransZRemapXlatAlpha_ushort *v15; // edx
  int v17; // edx
  int v18; // ebx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  int v21; // esi
  int v22; // esi
  int v23; // [esp+18h] [ebp+4h]
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  result = a7; /*0x497a2c*/
  a2a = **(unsigned __int8 ***)(this + 4); /*0x497a30*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x497a51*/
    v14 = 254; /*0x497a53*/
  v23 = this->RLEBlitTransZRemapXlatAlpha_ushort_field_0x0C + (v14 << 9); /*0x497a60*/
  v15 = aP4; /*0x497a64*/
  if ( (int)aP4 <= 0 ) /*0x497a6a*/
  {
    v18 = a4; /*0x497aa5*/
  }
  else
  {
    do /*0x497a81*/
    {
      if ( *a2++ ) /*0x497a6c*/
        v15 = (RLEBlitTransZRemapXlatAlpha_ushort *)((char *)v15 - 1); /*0x497a7e*/
      else
        v15 = (RLEBlitTransZRemapXlatAlpha_ushort *)((char *)v15 - *a2++); /*0x497a79*/
    }
    while ( (int)v15 > 0 ); /*0x497a81*/
    v17 = -(int)v15; /*0x497a91*/
    v18 = a4 - v17; /*0x497a93*/
    arg0 += 2 * v17; /*0x497a95*/
    result = &a7[v17]; /*0x497a98*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[9520] + 28) ) /*0x497a9e*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[9520] + 32)); /*0x497aa0*/
  }
  while ( v18 > 0 ) /*0x497aab*/
  {
    v19 = *a2++; /*0x497ab1*/
    if ( v19 ) /*0x497abf*/
    {
      arg0 += 2; /*0x497ae8*/
      v22 = a2a[v19] | *(unsigned __int16 *)(v23 + 2 * *result); /*0x497b03*/
      --v18; /*0x497b09*/
      ++result; /*0x497b0a*/
      *(_WORD *)(arg0 - 2) = *(_WORD *)(this->RLEBlitTransZRemapXlatAlpha_ushort_field_0x08 + 2 * v22); /*0x497b14*/
    }
    else
    {
      v20 = *a2++; /*0x497ac1*/
      v18 -= v20; /*0x497ad3*/
      v21 = 2 * v20; /*0x497ad5*/
      arg0 += v21; /*0x497ad7*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x497ad9*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[9520] + 28) ) /*0x497b21*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[9520] + 32)); /*0x497b23*/
  }
  return result; /*0x497b2a*/
}
}

// 0x497B40
int RLEBlitTransZRemapXlatAlpha_ushort::Release(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall RLEBlitTransZRemapXlatAlpha_ushort::_vt02(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(this->q004)( /*0x497b77*/
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

// 0x497880
int RLEBlitTransZRemapXlatAlpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}

// 0x49A9A0
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A9C0
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_0(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49A9E0
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_1(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}

// 0x49AA40
RLEBlitTransZRemapXlatAlpha_ushort * RLEBlitTransZRemapXlatAlpha_ushort::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 3);
    *(void**)this = &vt_RLEBlitTransZRemapXlatAlpha_unsigned_short;
    FractalNoise::Release(v3);
    *(this + 3) = 0;
    *(void**)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransZRemapXlatAlpha_ushort *)this;
}
}
