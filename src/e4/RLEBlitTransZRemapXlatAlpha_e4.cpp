// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RLEBlitTransZRemapXlatAlpha_ushort_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x497A10
namespace gamemd {
unsigned short * RLEBlitTransZRemapXlatAlpha_ushort::AddRef(int arg0, unsigned char * a2, int a4, RLEBlitTransZRemapXlatAlpha_ushort * aP4, int a6, int _2C, unsigned short * a7, int a9, int a10, int a11)
{
  uint16_t *result; // eax
  int v14; // edx
  RLEBlitTransZRemapXlatAlpha_ushort * v17;
  int v18; // ebx
  uint8_t v19; // dl
  uint8_t v20; // dl
  int v21; // esi
  int v22; // esi
  int v23; // [esp+18h] [ebp+4h]
  int v24; // [esp+1Ch] [ebp+8h]

  result = a7; /*0x497a2c*/
  v24 = *this->q004; /*0x497a30*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x497a51*/
    v14 = 254; /*0x497a53*/
  v23 = this->u32_C + (v14 << 9); /*0x497a60*/
  aP4 = aP4; /*0x497a64*/
  if ( aP4 <= 0 ) /*0x497a6a*/
  {
    v18 = a4; /*0x497aa5*/
  }
  else
  {
    do /*0x497a81*/
    {
      if ( *a2++ ) /*0x497a6c*/
        --aP4; /*0x497a7e*/
      else
        aP4 -= *a2++; /*0x497a79*/
    }
    while ( aP4 > 0 ); /*0x497a81*/
    v17 = -aP4; /*0x497a91*/
    v18 = a4 - v17; /*0x497a93*/
    arg0 += 2 * v17; /*0x497a95*/
    result = &a7[v17]; /*0x497a98*/
    if ( (unsigned int)result >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x497a9e*/
      result = (uint16_t *)((char *)result - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x497aa0*/
  }
  while ( v18 > 0 ) /*0x497aab*/
  {
    v19 = *a2++; /*0x497ab1*/
    if ( v19 ) /*0x497abf*/
    {
      arg0 += 2; /*0x497ae8*/
      v22 = *(uint8_t *)(v24 + v19) | *(uint16_t *)(v23 + 2 * *result); /*0x497b03*/
      --v18; /*0x497b09*/
      ++result; /*0x497b0a*/
      *(unsigned short *)(arg0 - 2) = *(unsigned short *)(this->q008 + 2 * v22); /*0x497b14*/
    }
    else
    {
      v20 = *a2++; /*0x497ac1*/
      v18 -= v20; /*0x497ad3*/
      v21 = 2 * v20; /*0x497ad5*/
      arg0 += v21; /*0x497ad7*/
      result = (uint16_t *)((char *)result + v21); /*0x497ad9*/
    }
    if ( (unsigned int)result >= *((unsigned int *)g_VisibleSurfaceDescriptor + 7) ) /*0x497b21*/
      result = (uint16_t *)((char *)result - *((unsigned int *)g_VisibleSurfaceDescriptor + 8)); /*0x497b23*/
  }
  return result; /*0x497b2a*/
}
} // namespace gamemd
// 0x497B40
namespace gamemd {
int RLEBlitTransZRemapXlatAlpha_ushort::Release(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
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
} // namespace gamemd
// 0x497880
namespace gamemd {
int RLEBlitTransZRemapXlatAlpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)&this->q010))( /*0x4978b7*/
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
} // namespace gamemd
// 0x49A9A0
namespace gamemd {
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x49a9af*/
    RA2_OPDEL(); /*0x49a9b2*/
  return this; /*0x49a9bc*/
}
} // namespace gamemd
// 0x49A9C0
namespace gamemd {
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_0(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x49a9cf*/
    RA2_OPDEL(); /*0x49a9d2*/
  return this; /*0x49a9dc*/
}
} // namespace gamemd
// 0x49A9E0
namespace gamemd {
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_1(char a2)
{
  if ( (a2 & 1) != 0 ) /*0x49a9ef*/
    RA2_OPDEL(); /*0x49a9f2*/
  return this; /*0x49a9fc*/
}
} // namespace gamemd
// 0x49AA40
namespace gamemd {
RLEBlitTransZRemapXlatAlpha_ushort * RLEBlitTransZRemapXlatAlpha_ushort::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->u32_C; /*0x49aa48*/
  FractalNoise::Dtor(v3); /*0x49aa52*/
  this->u32_C = 0; /*0x49aa5b*/
  if ( (a2 & 1) != 0 ) /*0x49aa6a*/
    RA2_OPDEL(); /*0x49aa6d*/
  return this; /*0x49aa77*/
}
} // namespace gamemd