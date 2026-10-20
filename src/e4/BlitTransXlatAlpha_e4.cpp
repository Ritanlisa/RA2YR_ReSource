// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BlitTransXlatAlpha_ushort_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/BlitTransXlatAlphaZRead_ushort_e4.hpp"

// 0x493930
namespace gamemd {  // G42.18 ns repair
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{


  int result = a4; // eax /*0x493930*/
  if ( a4 > 0 ) /*0x49393b*/
  {
    Stream *v11; // edx
    v11 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x493941*/
    unsigned short *v14; // [esp+18h] [ebp+14h]
    v14 = (unsigned short *)a4; /*0x493952*/
    do /*0x4939c4*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493967*/
      {
        *a1 = 3 * (this->m_8 & (*a1 >> 2)) + (this->m_8 & (*(unsigned short *)(this->Data + 2 * (unsigned __int8)*a2) >> 2)); /*0x493996*/
        *a5 = argC; /*0x493999*/
        v11 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x49399c*/
      }
      ++a1; /*0x4939a6*/
      ++a2; /*0x4939aa*/
      unsigned short *v13 = a5 + 1; // eax /*0x4939ae*/
      if ( (unsigned int)(a5 + 1) >= v11[1].Stream_field_08 ) /*0x4939b4*/
        v13 = (unsigned short *)((char *)v13 - v11[1].Stream_field_0C); /*0x4939b6*/
      a5 = v13; /*0x4939b9*/
      result = (int)v14 - 1; /*0x4939bf*/
      v14 = (unsigned short *)((char *)v14 - 1); /*0x4939c0*/
    }
    while ( v14 ); /*0x4939c4*/
  }
  return result; /*0x4939c9*/

}
}  // G42.18 ns repair
// 0x493A60
namespace gamemd {
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent50(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  int result = a4; // eax /*0x493a60*/
  if ( a4 > 0 ) /*0x493a6a*/
  {
    int v12 = argC; // ebp /*0x493a76*/
    Stream *v14; // edi
    v14 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x493a80*/
    unsigned short *v16; // [esp+14h] [ebp+14h]
    v16 = (unsigned short *)a4; /*0x493a86*/
    do /*0x493aee*/
    {
      if ( v12 < (uint16_t)*a5 && *a2 ) /*0x493a97*/
      {
        v12 = argC; /*0x493ac2*/
        *a1 = (this->m_8 & (*a1 >> 1)) + (this->m_8 & (*(unsigned short *)(this->Data + 2 * (uint8_t)*a2) >> 1)); /*0x493ac6*/
        *a5 = argC; /*0x493ac9*/
        v14 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x493acc*/
      }
      unsigned short *v15 = a5 + 1; // eax /*0x493ad2*/
      ++a2; /*0x493ad8*/
      ++a1; /*0x493ad9*/
      if ( (unsigned int)(a5 + 1) >= v14[1].Stream_field_08 ) /*0x493ade*/
        v15 = (unsigned short *)((char *)v15 - v14[1].Stream_field_0C); /*0x493ae0*/
      a5 = v15; /*0x493ae3*/
      result = (int)v16 - 1; /*0x493ae9*/
      v16 = (unsigned short *)((char *)v16 - 1); /*0x493aea*/
    }
    while ( v16 ); /*0x493aee*/
  }
  return result; /*0x493af4*/
}
}
// 0x493B90
namespace gamemd {
int BlitTransXlatAlpha_ushort::Blit_Alpha_ZReadWrite_Lucent25_0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{


  int result = a4; // eax /*0x493b90*/
  if ( a4 > 0 ) /*0x493b9b*/
  {
    Stream *v11; // edx
    v11 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x493ba1*/
    unsigned short *v14; // [esp+18h] [ebp+14h]
    v14 = (unsigned short *)a4; /*0x493bb2*/
    do /*0x493c24*/
    {
      if ( argC < (unsigned __int16)*a5 && *a2 ) /*0x493bc7*/
      {
        *a1 = (this->m_8 & (*a1 >> 2)) + 3 * (this->m_8 & (*(unsigned short *)(this->Data + 2 * (unsigned __int8)*a2) >> 2)); /*0x493bf6*/
        *a5 = argC; /*0x493bf9*/
        v11 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x493bfc*/
      }
      ++a1; /*0x493c06*/
      ++a2; /*0x493c0a*/
      unsigned short *v13 = a5 + 1; // eax /*0x493c0e*/
      if ( (unsigned int)(a5 + 1) >= v11[1].Stream_field_08 ) /*0x493c14*/
        v13 = (unsigned short *)((char *)v13 - v11[1].Stream_field_0C); /*0x493c16*/
      a5 = v13; /*0x493c19*/
      result = (int)v14 - 1; /*0x493c1f*/
      v14 = (unsigned short *)((char *)v14 - 1); /*0x493c20*/
    }
    while ( v14 ); /*0x493c24*/
  }
  return result; /*0x493c29*/

}
}
// 0x493DF0
namespace gamemd {
int BlitTransXlatAlpha_ushort::AddRef(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, unsigned short * a7, int a8, int a9)
{
  AbstractClass * result;
  int v14; // edi
  uint8_t v16; // bl
  uint16_t *v17; // [esp+20h] [ebp+18h]

  int v11; // eax
  v11 = (261 * (a8 <= 0 ? 0 : a8)) >> 11;
  if ( v11 > 254 ) /*0x493e18*/
    v11 = 254; /*0x493e1a*/
  result = (gamemd::AbstractClass *)((int)(this->m_8 + (v11 << 9))); /*0x493e25*/
  if ( a4 > 0 ) /*0x493e2d*/
  {
    v14 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x493e35*/
    v17 = (uint16_t *)a4; /*0x493e3b*/
    do /*0x493e8e*/
    {
      v16 = *a3++; /*0x493e43*/
      if ( v16 ) /*0x493e4c*/
      {
        *a2 = *(unsigned short *)(*&this->Data + 2 * (v16 | *(uint16_t *)(result + 2 * *a7))); /*0x493e6c*/
        v14 = *(unsigned int *)&g_VisibleSurfaceDescriptor; /*0x493e6f*/
      }
      ++a7; /*0x493e78*/
      ++a2; /*0x493e7b*/
      if ( (unsigned int)a7 >= v14->u32_1C ) /*0x493e80*/
        a7 = (uint16_t *)((char *)a7 - v14->Height); /*0x493e82*/
      v17 = (uint16_t *)((char *)v17 - 1); /*0x493e8a*/
    }
    while ( v17 ); /*0x493e8e*/
  }
  return (int)(result); /*0x493e92*/
}
}
// 0x493EA0
namespace gamemd {
int BlitTransXlatAlpha_ushort::ddtor(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransXlatAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493eca*/
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

// 0x493ED0
namespace gamemd {
int BlitTransXlatAlpha_ushort::BlitRect(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransXlatAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493efa*/
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
// 0x493F00
namespace gamemd {
int BlitTransXlatAlpha_ushort::GetSize(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransXlatAlpha_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493f2a*/
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
// 0x4939D0
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x4939fa*/
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

// 0x493A00
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493a2a*/
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

// 0x493A30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_1(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent75ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493a5a*/
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

// 0x493B00
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_2(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493b2a*/
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

// 0x493B30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_3(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493b5a*/
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

// 0x493B60
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_4(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent50ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493b8a*/
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

// 0x493C30
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_5(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493c5a*/
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

// 0x493C60
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_6(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493c8a*/
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

// 0x493C90
namespace gamemd {
int BlitTransXlatAlpha_ushort::CallBlit0_7(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent25ZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 4))( /*0x493cba*/
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

// 0x49A1A0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter(char a2)
{

  /* X11: ptr_0 install elided (implicit via Blitter virtuals 0x49a1a9) */
  if ( (a2 & 1) != 0 ) /*0x49a1af*/
    __3_YAXPAX_Z(this); /*0x49a1b2*/
  return (std::locale::facet *)this; /*0x49a1bc*/

}
} // namespace gamemd

// 0x49A1C0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter_0(char a2)
{

  /* X11: ptr_0 install elided (implicit via Blitter virtuals 0x49a1c9) */
  if ( (a2 & 1) != 0 ) /*0x49a1cf*/
    __3_YAXPAX_Z(this); /*0x49a1d2*/
  return (std::locale::facet *)this; /*0x49a1dc*/

}
} // namespace gamemd

// 0x49A1E0
namespace gamemd {
std::locale::facet * BlitTransXlatAlpha_ushort::Constructor_Blitter_1(char a2)
{

  /* X11: ptr_0 install elided (implicit via Blitter virtuals 0x49a1e9) */
  if ( (a2 & 1) != 0 ) /*0x49a1ef*/
    __3_YAXPAX_Z(this); /*0x49a1f2*/
  return (std::locale::facet *)this; /*0x49a1fc*/

}
} // namespace gamemd

// 0x49A240
namespace gamemd {
BlitTransXlatAlpha_ushort * BlitTransXlatAlpha_ushort::Blit(unsigned int * Block, char a2)
{

  void *v3; // eax
  v3 = (void *)*((unsigned int *)Block + 2); /*0x49a248*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_var_81adf3) */  /*0x49a24b*/
  FractalNoise::Dtor(v3); /*0x49a252*/
  *((unsigned int *)Block + 2) = 0; /*0x49a25b*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E5B88) */  /*0x49a264*/
  if ( (a2 & 1) != 0 ) /*0x49a26a*/
    operator delete((Block)); /*0x49a26d*/
  return Block->tail_0; /*0x49a277*/
}
} // namespace gamemd
