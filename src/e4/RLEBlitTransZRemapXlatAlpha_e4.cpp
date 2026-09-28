// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/RLEBlitTransZRemapXlatAlpha_ushort_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x497A10
namespace gamemd {
unsigned short * RLEBlitTransZRemapXlatAlpha_ushort::AddRef(int arg0, unsigned char * a2, int a4, RLEBlitTransZRemapXlatAlpha_ushort * aP4, int a6, int _2C, unsigned short * a7, int a9, int a10, int a11)
{
  uint16_t *result; // eax
  int v14; // edx
  RLEBlitTransZRemapXlatAlpha_ushort * v15;
  RLEBlitTransZRemapXlatAlpha_ushort * v17;
  int v18; // ebx
  uint8_t v19; // dl
  uint8_t v20; // dl
  int v21; // esi
  int v22; // esi
  int v23; // [esp+18h] [ebp+4h]
  uint8_t *v24; // [esp+1Ch] [ebp+8h]

  result = a7; /*0x497a2c*/
  v24 = *(uint8_t **)this->m_4; /*0x497a30*/
  v14 = (261 * (a9 <= 0 ? 0 : a9)) >> 11;
  if ( v14 > 254 ) /*0x497a51*/
    v14 = 254; /*0x497a53*/
  v23 = this->m_C + (v14 << 9); /*0x497a60*/
  v15 = aP4; /*0x497a64*/
  if ( aP4 <= 0 ) /*0x497a6a*/
  {
    v18 = a4; /*0x497aa5*/
  }
  else
  {
    do /*0x497a81*/
    {
      if ( *a2++ ) /*0x497a6c*/
        --v15; /*0x497a7e*/
      else
        v15 -= *a2++; /*0x497a79*/
    }
    while ( v15 > 0 ); /*0x497a81*/
    v17 = -v15; /*0x497a91*/
    v18 = a4 - v17; /*0x497a93*/
    arg0 += 2 * v17; /*0x497a95*/
    result = &a7[v17]; /*0x497a98*/
    if ( (unsigned int)result >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x497a9e*/
      result = (uint16_t *)((char *)result - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x497aa0*/
  }
  while ( v18 > 0 ) /*0x497aab*/
  {
    v19 = *a2++; /*0x497ab1*/
    if ( v19 ) /*0x497abf*/
    {
      arg0 += 2; /*0x497ae8*/
      v22 = v24[v19] | *(uint16_t *)(v23 + 2 * *result); /*0x497b03*/
      --v18; /*0x497b09*/
      ++result; /*0x497b0a*/
      *(unsigned short *)(arg0 - 2) = *(unsigned short *)(this->m_8 + 2 * v22); /*0x497b14*/
    }
    else
    {
      v20 = *a2++; /*0x497ac1*/
      v18 -= v20; /*0x497ad3*/
      v21 = 2 * v20; /*0x497ad5*/
      arg0 += v21; /*0x497ad7*/
      result = (uint16_t *)((char *)result + v21); /*0x497ad9*/
    }
    if ( (unsigned int)result >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x497b21*/
      result = (uint16_t *)((char *)result - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x497b23*/
  }
  return result; /*0x497b2a*/
}
} // namespace gamemd
// 0x497B40
namespace gamemd {
int RLEBlitTransZRemapXlatAlpha_ushort::Release(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  return (*(int (__thiscall **)(_RLEBlitTransZRemapXlatAlpha_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x497b77*/
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
  return (*(int (__thiscall **)(_RLEBlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4978b7*/
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
  *(unsigned int *)this->__pad_0 = (void*)&RLEBlitter_vftable; /*0x49a9a9*/
  if ( (a2 & 1) != 0 ) /*0x49a9af*/
    RA2_OPDEL(this); /*0x49a9b2*/
  return (std::locale::facet *)this; /*0x49a9bc*/
}
} // namespace gamemd
// 0x49A9C0
namespace gamemd {
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_0(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&RLEBlitter_vftable; /*0x49a9c9*/
  if ( (a2 & 1) != 0 ) /*0x49a9cf*/
    RA2_OPDEL(this); /*0x49a9d2*/
  return (std::locale::facet *)this; /*0x49a9dc*/
}
} // namespace gamemd
// 0x49A9E0
namespace gamemd {
std::locale::facet * RLEBlitTransZRemapXlatAlpha_ushort::Constructor_RLEBlitter_1(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&RLEBlitter_vftable; /*0x49a9e9*/
  if ( (a2 & 1) != 0 ) /*0x49a9ef*/
    RA2_OPDEL(this); /*0x49a9f2*/
  return (std::locale::facet *)this; /*0x49a9fc*/
}
} // namespace gamemd
// 0x49AA40
namespace gamemd {
RLEBlitTransZRemapXlatAlpha_ushort * RLEBlitTransZRemapXlatAlpha_ushort::QueryInterface(char a2)
{
  void *m_C; // eax

  m_C = (gamemd::RLEBlitTransZRemapXlatAlpha_ushort *)((void *)this->m_C);
  *(unsigned int *)this->__pad_0 = (void*)&RLEBlitTransZRemapXlatAlpha_unsigned_short_vftable; /*0x49aa4b*/
  FractalNoise::Dtor(m_C); /*0x49aa52*/
  this->m_C = 0; /*0x49aa5b*/
  *(unsigned int *)this->__pad_0 = (void*)&RLEBlitter_vftable; /*0x49aa64*/
  if ( (a2 & 1) != 0 ) /*0x49aa6a*/
    RA2_OPDEL(this); /*0x49aa6d*/
  return this->__pad_0; /*0x49aa77*/
}
} // namespace gamemd