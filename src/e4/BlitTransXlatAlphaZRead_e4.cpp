// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlitTransXlatAlphaZRead_ushort_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/BlitTransLucent25AlphaZReadWrite_ushort_e4.hpp"

// 0x494920
namespace gamemd {
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{

  unsigned short *result; // eax
  TacticalClass *v12; // edi
  uint8_t v13; // dl
  unsigned short *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494924*/
  if ( a4 > 0 ) /*0x49492a*/
  {
    v12 = (TacticalClass *)g_abs_87E8A4; /*0x494938*/
    a6a = (unsigned short *)a4; /*0x49493e*/
    do /*0x49499a*/
    {
      v13 = *a2++; /*0x494942*/
      if ( v13 && *result ) /*0x49494d*/
      {
        *a1 = (*(unsigned short *)((unsigned int *)this + 2) & (*a1 >> 1)) /*0x494978*/
            + (*(unsigned short *)((unsigned int *)this + 2) & (*(unsigned short *)(*((unsigned int *)this + 1) + 2 * v13) >> 1));
        v12 = (TacticalClass *)g_abs_87E8A4; /*0x49497b*/
      }
      ++result; /*0x494984*/
      ++a1; /*0x494987*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x49498c*/
        result = (unsigned short *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x49498e*/
      a6a = (unsigned short *)((char *)a6a - 1); /*0x494996*/
    }
    while ( a6a ); /*0x49499a*/
  }
  return result; /*0x4949a0*/

}
} // namespace gamemd
// 0x494A40
namespace gamemd {
unsigned short * BlitTransXlatAlphaZRead_ushort::Blit_Alpha_Lucent50_0(unsigned short * a1, unsigned char * a2, int a4, int a5, int _14, unsigned short * a6, int a8, int a9)
{

  unsigned short *result; // eax
  TacticalClass *v12; // edi
  uint8_t v13; // dl
  unsigned short *a6a; // [esp+18h] [ebp+18h]

  result = a6; /*0x494a44*/
  if ( a4 > 0 ) /*0x494a4a*/
  {
    v12 = (TacticalClass *)g_abs_87E8A4; /*0x494a58*/
    a6a = (unsigned short *)a4; /*0x494a5e*/
    do /*0x494aba*/
    {
      v13 = *a2++; /*0x494a62*/
      if ( v13 && !*result ) /*0x494a6d*/
      {
        *a1 = (*(unsigned short *)((unsigned int *)this + 2) & (*a1 >> 1)) /*0x494a98*/
            + (*(unsigned short *)((unsigned int *)this + 2) & (*(unsigned short *)(*((unsigned int *)this + 1) + 2 * v13) >> 1));
        v12 = (TacticalClass *)g_abs_87E8A4; /*0x494a9b*/
      }
      ++result; /*0x494aa4*/
      ++a1; /*0x494aa7*/
      if ( (unsigned int)result >= v12->referenceCount ) /*0x494aac*/
        result = (unsigned short *)((char *)result - (unsigned int)v12->NeedsSaveOrLink); /*0x494aae*/
      a6a = (unsigned short *)((char *)a6a - 1); /*0x494ab6*/
    }
    while ( a6a ); /*0x494aba*/
  }
  return result; /*0x494ac0*/

}
} // namespace gamemd
// 0x494B60
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9)
{

  int v11; // eax
  int result; // eax
  unsigned int * v13;
  uint16_t v15; // ax
  int v16; // [esp+20h] [ebp+14h]
  int v17; // [esp+24h] [ebp+18h]

  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x494b8b*/
    v11 = 254; /*0x494b8d*/
  result = *((unsigned int *)this + 2) + (v11 << 9); /*0x494b98*/
  v17 = result; /*0x494ba0*/
  if ( a4 > 0 ) /*0x494ba4*/
  {
    v13 = (unsigned int *)(g_abs_887644);
    v16 = a4; /*0x494bb1*/
    do /*0x494c31*/
    {
      v15 = *a6++; /*0x494bbf*/
      if ( a5 < v15 && *a3 ) /*0x494bd1*/
      {
        *a2 = *(unsigned short *)(*((unsigned int *)this + 1) + 2 * ((uint8_t)*a3 | *(uint16_t *)(v17 + 2 * *a7))); /*0x494bf9*/
        v13 = g_abs_887644; /*0x494bfc*/
      }
      ++a2; /*0x494c06*/
      ++a3; /*0x494c0a*/
      if ( (unsigned int)a6 >= ((unsigned int *)(v13))[7] ) /*0x494c13*/
        a6 = (uint16_t *)((char *)a6 - ((unsigned int *)(v13))[8]); /*0x494c15*/
      if ( (unsigned int)++a7 >= *((unsigned int *)g_abs_87E8A4 + 7) ) /*0x494c23*/
        a7 = (uint16_t *)((char *)a7 - *((unsigned int *)g_abs_87E8A4 + 8)); /*0x494c25*/
      result = --v16; /*0x494c2c*/
    }
    while ( v16 ); /*0x494c31*/
  }
  return result; /*0x494c34*/

}
} // namespace gamemd
// 0x494C40
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::BlitRect(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, unsigned short * a7, int a8, int a9, short a10)
{

  int v12; // eax
  int result; // eax
  unsigned int * v14;
  uint16_t v16; // ax
  int v17; // [esp+20h] [ebp+14h]
  int v18; // [esp+24h] [ebp+18h]

  v12 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v12 > 254 ) /*0x494c6b*/
    v12 = 254; /*0x494c6d*/
  result = *((unsigned int *)this + 2) + (v12 << 9); /*0x494c78*/
  v18 = result; /*0x494c80*/
  if ( a4 > 0 ) /*0x494c84*/
  {
    v14 = (unsigned int *)(g_abs_887644);
    v17 = a4; /*0x494c91*/
    do /*0x494d16*/
    {
      v16 = *a6++; /*0x494c9f*/
      if ( a5 < v16 && *a3 ) /*0x494cb1*/
      {
        *a2 = (unsigned int)(a10 | *(unsigned short *)(*((unsigned int *)this + 1) + 2 * ((uint8_t)*a3 | *(uint16_t *)(v18 + 2 * *a7))));
        v14 = (unsigned int *)(g_abs_887644);
      }
      ++a2; /*0x494ceb*/
      ++a3; /*0x494cef*/
      if ( (unsigned int)a6 >= ((unsigned int *)(v14))[7] ) /*0x494cf8*/
        a6 = (uint16_t *)((char *)a6 - ((unsigned int *)(v14))[8]); /*0x494cfa*/
      if ( (unsigned int)++a7 >= *((unsigned int *)g_abs_87E8A4 + 7) ) /*0x494d08*/
        a7 = (uint16_t *)((char *)a7 - *((unsigned int *)g_abs_87E8A4 + 8)); /*0x494d0a*/
      result = --v17; /*0x494d11*/
    }
    while ( v17 ); /*0x494d16*/
  }
  return result; /*0x494d19*/

}
} // namespace gamemd
// 0x494D20
namespace gamemd {
int BlitTransXlatAlphaZRead_ushort::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  ( this, a2, a3, a4, a5, a6, a7, a8, 0)
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

  ( this, a2, a3, a4, a5, a6, a7, a8, 0, a9)
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

  return (*((int (**)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x4948ba*/
          + 1))(
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

  return (*((int (**)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x4948ea*/
          + 1))(
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

  return (*((int (**)(BlitTranslucentWriteAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x49491a*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x4949da*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x494a0a*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50NonzeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x494a3a*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x494afa*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x494b2a*/
          + 1))(
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

  return (*((int (**)(BlitTranslucent50ZeroAlpha_G *, int, int, int, int, int, int, int, unsigned int))this->vfptr /*0x494b5a*/
          + 1))(
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

  *(unsigned int *)this = &vt_Blitter; /*0x49a3a9*/
  if ( (a2 & 1) != 0 ) /*0x49a3af*/
    RA2_OPDEL(this); /*0x49a3b2*/
  return this; /*0x49a3bc*/

}
} // namespace gamemd
// 0x49A3C0
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_0(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x49a3c9*/
  if ( (a2 & 1) != 0 ) /*0x49a3cf*/
    RA2_OPDEL(this); /*0x49a3d2*/
  return this; /*0x49a3dc*/

}
} // namespace gamemd
// 0x49A3E0
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_1(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x49a3e9*/
  if ( (a2 & 1) != 0 ) /*0x49a3ef*/
    RA2_OPDEL(this); /*0x49a3f2*/
  return this; /*0x49a3fc*/

}
} // namespace gamemd
// 0x49A400
namespace gamemd {
std::locale::facet * BlitTransXlatAlphaZRead_ushort::Constructor_Blitter_2(char a2)
{

  *(unsigned int *)this = &vt_Blitter; /*0x49a409*/
  if ( (a2 & 1) != 0 ) /*0x49a40f*/
    RA2_OPDEL(this); /*0x49a412*/
  return this; /*0x49a41c*/

}
} // namespace gamemd
// 0x49A420
namespace gamemd {
BlitTransXlatAlphaZRead_ushort * BlitTransXlatAlphaZRead_ushort::Blit(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)((unsigned int)((void *)*(Block + 2)));
  *Block = (unsigned int)(&vt_BlitTransXlatAlphaZRead_unsigned_short);
  FractalNoise::Release(v3); /*0x49a432*/
  *(Block + 2) = 0; /*0x49a43b*/
  *Block = &vt_Blitter; /*0x49a444*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x49a44a*/
    RA2_OPDEL(Block); /*0x49a44d*/
  return (BlitTransXlatAlphaZRead_ushort *)Block; /*0x49a457*/

}
} // namespace gamemd