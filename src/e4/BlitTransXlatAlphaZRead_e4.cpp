// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlitTransXlatAlphaZRead_ushort_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x494920
namespace gamemd {
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{
  unsigned short *result; // eax
  int v12; // edi
  uint8_t v13; // dl
  unsigned short *v14; // [esp+18h] [ebp+18h]

  result = a6; /*0x494924*/
  if ( a4 > 0 ) /*0x49492a*/
  {
    v12 = *(unsigned int *)&stru_87E790.__pad_D8[60]; /*0x494938*/
    v14 = (unsigned short *)a4; /*0x49493e*/
    do /*0x49499a*/
    {
      v13 = *a2++; /*0x494942*/
      if ( v13 && *result ) /*0x49494d*/
      {
                *a1 = (*((unsigned short *)this + 8) & (*a1 >> 1))
        v12 = *(unsigned int *)&stru_87E790.__pad_D8[60]; /*0x49497b*/
      }
      ++result; /*0x494984*/
      ++a1; /*0x494987*/
      if ( (unsigned int)result >= *(unsigned int *)(v12 + 28) ) /*0x49498c*/
        result = (unsigned short *)((char *)result - v12->Height); /*0x49498e*/
      v14 = (unsigned short *)((char *)v14 - 1); /*0x494996*/
    }
    while ( v14 ); /*0x49499a*/
  }
  return result; /*0x4949a0*/
}
} // namespace gamemd
// 0x494A40
namespace gamemd {
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50_0(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{
  unsigned short *result; // eax
  int v12; // edi
  uint8_t v13; // dl
  unsigned short *v14; // [esp+18h] [ebp+18h]

  result = a6; /*0x494a44*/
  if ( a4 > 0 ) /*0x494a4a*/
  {
    v12 = *(unsigned int *)&stru_87E790.__pad_D8[60]; /*0x494a58*/
    v14 = (unsigned short *)a4; /*0x494a5e*/
    do /*0x494aba*/
    {
      v13 = *a2++; /*0x494a62*/
      if ( v13 && !*result ) /*0x494a6d*/
      {
                *a1 = (*((unsigned short *)this + 8) & (*a1 >> 1))
        v12 = *(unsigned int *)&stru_87E790.__pad_D8[60]; /*0x494a9b*/
      }
      ++result; /*0x494aa4*/
      ++a1; /*0x494aa7*/
      if ( (unsigned int)result >= *(unsigned int *)(v12 + 28) ) /*0x494aac*/
        result = (unsigned short *)((char *)result - v12->Height); /*0x494aae*/
      v14 = (unsigned short *)((char *)v14 - 1); /*0x494ab6*/
    }
    while ( v14 ); /*0x494aba*/
  }
  return result; /*0x494ac0*/
}
} // namespace gamemd
// 0x494B60
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9)
{
  int v11; // eax
  AbstractClass * result;
  Stream * v13;
  uint16_t v15; // ax
  uint16_t *v16; // [esp+20h] [ebp+14h]
  uint16_t *v17; // [esp+24h] [ebp+18h]

  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x494b8b*/
    v11 = 254; /*0x494b8d*/
    result = *((unsigned int *)this + 8) + (v11 << 9);
  v17 = (uint16_t *)result; /*0x494ba0*/
  if ( a4 > 0 ) /*0x494ba4*/
  {
    v13 = (gamemd::Stream *)((unsigned int)((gamemd::Stream *)(g_ZBufferDescriptor)));
    v16 = (uint16_t *)a4; /*0x494bb1*/
    do /*0x494c31*/
    {
      v15 = *a6++; /*0x494bbf*/
      if ( a5 < v15 && *a3 ) /*0x494bd1*/
      {
        *a2 = (unsigned short)((gamemd::Stream *)(*(unsigned short *)(*(unsigned int *)&this->q010 + 2 * ((uint8_t)*a3 | v17[*a7]))));
        v13 = (gamemd::Stream *)(g_ZBufferDescriptor);
      }
      ++a2; /*0x494c06*/
      ++a3; /*0x494c0a*/
      if ( (unsigned int)a6 >= (unsigned int)(v13[1]).Stream_field_08 ) /*0x494c13*/
        a6 = (uint16_t *)((char *)a6 - v13[1].Stream_field_0C); /*0x494c15*/
      if ( (unsigned int)++a7 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x494c23*/
        a7 = (uint16_t *)((char *)a7 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x494c25*/
      result = (int)v16 - 1; /*0x494c2c*/
      v16 = (uint16_t *)((char *)v16 - 1); /*0x494c2d*/
    }
    while ( v16 ); /*0x494c31*/
  }
  return (int)(result);
}
} // namespace gamemd
// 0x494C40
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::BlitRect(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9, short a10)
{
  int v12; // eax
  AbstractClass * result;
  Stream * v14;
  uint16_t v16; // ax
  uint16_t *v17; // [esp+20h] [ebp+14h]
  uint16_t *v18; // [esp+24h] [ebp+18h]

  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x494c6b*/
    v12 = 254; /*0x494c6d*/
    result = *((unsigned int *)this + 8) + (v12 << 9);
  v18 = (uint16_t *)result; /*0x494c80*/
  if ( a4 > 0 ) /*0x494c84*/
  {
    v14 = (gamemd::Stream *)((unsigned int)((gamemd::Stream *)(g_ZBufferDescriptor)));
    v17 = (uint16_t *)a4; /*0x494c91*/
    do /*0x494d16*/
    {
      v16 = *a6++; /*0x494c9f*/
      if ( a5 < v16 && *a3 ) /*0x494cb1*/
      {
        *a2 = (unsigned short)((gamemd::Stream *)(a10 | *(unsigned short *)(*(unsigned int *)&this->q010 + 2 * ((uint8_t)*a3 | v18[*a7]))));
        v14 = (gamemd::Stream *)(g_ZBufferDescriptor);
      }
      ++a2; /*0x494ceb*/
      ++a3; /*0x494cef*/
      if ( (unsigned int)a6 >= (unsigned int)(v14[1]).Stream_field_08 ) /*0x494cf8*/
        a6 = (uint16_t *)((char *)a6 - v14[1].Stream_field_0C); /*0x494cfa*/
      if ( (unsigned int)++a7 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x494d08*/
        a7 = (uint16_t *)((char *)a7 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x494d0a*/
      result = (int)v17 - 1; /*0x494d11*/
      v17 = (uint16_t *)((char *)v17 - 1); /*0x494d12*/
    }
    while ( v17 ); /*0x494d16*/
  }
  return (int)(result);
}
} // namespace gamemd
// 0x494D20
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    return (*(int (**)(void *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this + 4))(
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
} // namespace gamemd
// 0x494D50
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::GetSize(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    return (*(int (**)(void *, int, int, int, int, int, int, int, unsigned int, int))(*(unsigned int *)this + 8))(
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
} // namespace gamemd
// 0x494890
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_2(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (**)(_BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4948ba*/
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
} // namespace gamemd
// 0x4948C0
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_3(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (**)(_BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4948ea*/
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
} // namespace gamemd
// 0x4948F0
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_4(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (**)(_BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49491a*/
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
} // namespace gamemd
// 0x4949B0
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_5(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (**)(_BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4949da*/
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
} // namespace gamemd
// 0x4949E0
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_6(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (**)(_BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x494a0a*/
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
} // namespace gamemd
// 0x494A10
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_7(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (**)(_BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x494a3a*/
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
} // namespace gamemd
// 0x494AD0
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_8(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return (*(int (**)(_BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x494afa*/
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
} // namespace gamemd
// 0x494B00
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_9(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return (*(int (**)(_BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x494b2a*/
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
} // namespace gamemd
// 0x494B30
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::CallBlit0_10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return (*(int (**)(_BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x494b5a*/
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
} // namespace gamemd
// 0x49A3A0
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&Blitter_vftable; /*0x49a3a9*/
  if ( (a2 & 1) != 0 ) /*0x49a3af*/
    RA2_OPDEL(); /*0x49a3b2*/
  return (std::locale::facet *)this; /*0x49a3bc*/
}
} // namespace gamemd
// 0x49A3C0
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_0(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&Blitter_vftable; /*0x49a3c9*/
  if ( (a2 & 1) != 0 ) /*0x49a3cf*/
    RA2_OPDEL(); /*0x49a3d2*/
  return (std::locale::facet *)this; /*0x49a3dc*/
}
} // namespace gamemd
// 0x49A3E0
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_1(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&Blitter_vftable; /*0x49a3e9*/
  if ( (a2 & 1) != 0 ) /*0x49a3ef*/
    RA2_OPDEL(); /*0x49a3f2*/
  return (std::locale::facet *)this; /*0x49a3fc*/
}
} // namespace gamemd
// 0x49A400
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_2(char a2)
{
  *(unsigned int *)this->__pad_0 = (void*)&Blitter_vftable; /*0x49a409*/
  if ( (a2 & 1) != 0 ) /*0x49a40f*/
    RA2_OPDEL(); /*0x49a412*/
  return (std::locale::facet *)this; /*0x49a41c*/
}
} // namespace gamemd
// 0x49A420
namespace gamemd {
BlitTransXlatAlphaZRead_ushort * BlitTransXlatAlphaZRead_ushort::Blit(char a2)
{
  void *m_8; // eax

  m_8 = (gamemd::BlitTransXlatAlphaZRead_ushort *)((void *)this->m_8);
  *(unsigned int *)this->__pad_0 = (void*)&BlitTransXlatAlphaZRead_unsigned_short_vftable; /*0x49a42b*/
  FractalNoise::Dtor(m_8); /*0x49a432*/
  *(unsigned int *)&this->ptr_8 = 0; /*0x49a43b*/
  *(unsigned int *)this->__pad_0 = (void*)&Blitter_vftable; /*0x49a444*/
  if ( (a2 & 1) != 0 ) /*0x49a44a*/
    RA2_OPDEL(); /*0x49a44d*/
  return this; /*0x49a457*/
}
} // namespace gamemd