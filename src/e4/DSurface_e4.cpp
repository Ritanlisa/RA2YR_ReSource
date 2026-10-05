// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"

// 0x480180
namespace gamemd {
AbstractClass * * DSurface::Process(void* aP1, int * a2)
{

  TerrainClass::GenerateTexture( /*0x4801de*/
    *(unsigned int **)dword_A8ED2C,
    *(unsigned int *)dword_87F69C,
    0,
    g_DSurface_Hidden_2,
    *(unsigned int *)(aP1),
    aP1[1],
    *a2,
    a2[1],
    a2[2],
    a2[3],
    *((char *)this + 283),
    *(int16_t *)&this->q10C,
    1,
    0,
    0,
    1,
    0,
    0);

}
} // namespace gamemd
// 0x4BA5A0
namespace gamemd {
AbstractClass * DSurface::Construct(int aP1, int aP2, char aP3, char a5)
{

  unsigned int *v6; // ebp
  void *v7; // edi
  int v8; // eax

  v6 = (unsigned int *)((unsigned char *)this + 28); /*0x4ba5b0*/
  *((unsigned int *)this + 1) = (unsigned int)(aP1); /*0x4ba5b5*/
  *((unsigned int *)this + 2) = (unsigned int)(aP2); /*0x4ba5b8*/
  *((unsigned int *)this + 3) = 0; /*0x4ba5bb*/
  *((unsigned int *)this + 4) = 0; /*0x4ba5be*/
  *((unsigned int *)this + 5) = 0; /*0x4ba5c1*/
  *((unsigned char *)this + 24) = 0; /*0x4ba5c4*/
  *((unsigned char *)this + 25) = 0; /*0x4ba5c7*/
  *((unsigned int *)this + 7) = 0; /*0x4ba5ca*/
  *((unsigned int *)this + 8) = 0; /*0x4ba5cd*/
  *(unsigned int *)this = (unsigned int)(&DSurface_Vtable); /*0x4ba5d0*/
  v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
  *((unsigned int *)this + 8) = (unsigned int)(v7); /*0x4ba5e2*/
  if ( v7 ) /*0x4ba5e5*/
  {
    memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
    **((unsigned int **)this + 8) = 108; /*0x4ba5f7*/
    *(unsigned int *)(*((unsigned int *)this + 8) + 4) = 7; /*0x4ba604*/
    *(unsigned int *)(*((unsigned int *)this + 8) + 12) = (unsigned int)(aP1); /*0x4ba60e*/
    *(unsigned int *)(*((unsigned int *)this + 8) + 8) = (unsigned int)(aP2); /*0x4ba618*/
    if ( aP3 == (gamemd::ObjectClass *)(1) ) /*0x4ba621*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 2048; /*0x4ba626*/
    if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
      *(unsigned int *)(*((unsigned int *)this + 8) + 104) = 8256; /*0x4ba63e*/
    g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
      g_lpDirectDraw7,
      (LPDDSURFACEDESC)*((unsigned int *)this + 8),
      (LPDIRECTDRAWSURFACE *)((unsigned char *)this + 28),
      0);
    if ( *v6 ) /*0x4ba656*/
    {
      memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
      **((unsigned int **)this + 8) = 108; /*0x4ba66a*/
      (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v6 + 88))(*v6, *((unsigned int *)this + 8)); /*0x4ba67a*/
      v8 = *((unsigned int *)this + 8); /*0x4ba67d*/
      *((unsigned int *)this + 4) = (unsigned int)(*(unsigned int *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
      *((unsigned char *)this + 25) = (*(unsigned int *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
    }
  }
  return (gamemd::AbstractClass *)(this);

}
} // namespace gamemd
// 0x4BA6B0
namespace gamemd {
AbstractClass * * DSurface::Destroy()
{

  char DSurface_field_0x18; // al
  int v3; // eax
  int result; // eax

  DSurface_field_0x18 = (unsigned int)((char)this->DSurface_field_0x18);
  this->DSurface_field_0x0 = (unsigned int)(&DSurface_Vtable);
  if ( DSurface_field_0x18 ) /*0x4ba6c1*/
  {
    v3 = this->DSurface_field_0x1C[0]; /*0x4ba6c3*/
    if ( v3 ) /*0x4ba6c8*/
    {
      if ( g_DDraw_Clipper ) /*0x4ba6d0*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 112))(v3, 0); /*0x4ba6d6*/
        (*(void ((int)(**))(int))(*(unsigned int *)g_DDraw_Clipper + 8))(g_DDraw_Clipper); /*0x4ba6e1*/
        g_DDraw_Clipper = 0; /*0x4ba6e4*/
      }
    }
  }
  __3_YAXPAX_Z((void *)(this->DSurface_field_0x20)); /*0x4ba6ee*/
  result = this->DSurface_field_0x1C[0]; /*0x4ba6f3*/
  this->DSurface_field_0x20 = 0; /*0x4ba6fb*/
  if ( result ) /*0x4ba6fe*/
    result = (int)((gamemd::AbstractClass **)((*(int (**)(int))(*(unsigned int *)result + 8))(result))); /*0x4ba703*/
  this->DSurface_field_0x1C[0] = 0; /*0x4ba706*/
  this->DSurface_field_0x0 = (unsigned int)(&Surface_Vtable); /*0x4ba709*/
  return (gamemd::AbstractClass **)(result); /*0x4ba70f*/

}
} // namespace gamemd
// 0x4BA770
namespace gamemd {
AbstractClass * * DSurface::CreatePrimary()
{

  char v1; // bl
  int v2; // eax
  unsigned int *v3; // esi
  void *v4; // edi
  unsigned int *v5; // ebp
  int *v6; // esi
  UINT v7; // eax
  int v8; // eax
  DSurface *v9; // eax
  unsigned int *BackBuffer; // eax
  unsigned int *v11; // eax
  bool v12; // dl
  int v13; // edx
  int v14; // eax
  int v15; // edi
  HWND ActiveWindow; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v28; // [esp+20h] [ebp-8h] BYREF
  int v29; // [esp+24h] [ebp-4h] BYREF

  ((Debug *)this)->Log(); /*0x4ba780*/
  v1 = ((DDraw *)this)->CheckCapabilities(); /*0x4ba78d*/
  g_DDraw_AllowStretchBlits = (v1 & 0x40) != 0; /*0x4ba79b*/
  ((Debug *)this)->Log(); /*0x4ba7b4*/
  if ( (v1 & 0x10) == 0 ) /*0x4ba7bf*/
    LOBYTE(stru_820320.Start) = 0; /*0x4ba7c1*/
  ((Debug *)this)->Log(); /*0x4ba7e3*/
  v2 = (int)(__2_YAPAXI_Z(0x24u)); /*0x4ba7ea*/
  v3 = (unsigned int *)v2; /*0x4ba7ef*/
  if ( v2 ) /*0x4ba7f8*/
  {
    *(unsigned int *)(v2 + 4) = 0; /*0x4ba7fc*/
    *(unsigned int *)(v2 + 8) = 0; /*0x4ba7ff*/
    *(unsigned int *)(v2 + 12) = 0; /*0x4ba802*/
    *(unsigned int *)(v2 + 16) = 0; /*0x4ba805*/
    *(unsigned int *)(v2 + 20) = 0; /*0x4ba808*/
    *(unsigned char *)(v2 + 24) = 0; /*0x4ba80b*/
    *(unsigned char *)(v2 + 25) = 0; /*0x4ba80e*/
    *(unsigned int *)(v2 + 28) = 0; /*0x4ba811*/
    *(unsigned int *)v2 = (unsigned int)(&DSurface_Vtable); /*0x4ba814*/
    v4 = (void *)__2_YAPAXI_Z(0x6Cu); /*0x4ba822*/
    v3[8] = (unsigned int)(v4); /*0x4ba82b*/
    v5 = v3; /*0x4ba82e*/
    memset(v4, 0, 0x6Cu); /*0x4ba830*/
    *(unsigned int *)v3[8] = 108; /*0x4ba835*/
  }
  else
  {
    v5 = 0; /*0x4ba83d*/
  }
  *(unsigned int *)(v5[8] + 4) = 1; /*0x4ba84d*/
  *(unsigned int *)(v5[8] + 104) = 512; /*0x4ba85b*/
  if ( this ) /*0x4ba862*/
  {
    *(unsigned int *)(v5[8] + 104) |= 0x18u; /*0x4ba86d*/
    *(unsigned int *)(v5[8] + 4) |= 0x20u; /*0x4ba879*/
    *(unsigned int *)(v5[8] + 20) = this != 0; /*0x4ba87f*/
  }
  ((Debug *)this)->Log(); /*0x4ba887*/
  v6 = (int *)(v5 + 7); /*0x4ba897*/
  v7 = g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba8a1*/
         g_lpDirectDraw7,
         (LPDDSURFACEDESC)v5[8],
         (LPDIRECTDRAWSURFACE *)(v5 + 7),
         0);
  if ( !v7 ) /*0x4ba8a8*/
  {
    ((Debug *)this)->Log(); /*0x4ba8b3*/
    if ( this ) /*0x4ba8bd*/
    {
      v8 = *v6; /*0x4ba8bf*/
      v28 = 4; /*0x4ba8ca*/
      if ( !(*(int (**)(int, int *, int *))(*(unsigned int *)&v8->q_C0)(v8, &v28, &v29) ) /*0x4ba8d6*/
      {
        v9 = (gamemd::DSurface *)((unsigned int)((DSurface *)__2_YAPAXI_Z(0x24u)));
        if ( v9 ) /*0x4ba8e9*/
          BackBuffer = ((DSurface *)(v9))->CreateBackBuffer(v29); /*0x4ba8f2*/
        else
          BackBuffer = 0; /*0x4ba8f9*/
        this->DSurface_field_0x0 = (unsigned int)(BackBuffer); /*0x4ba8ff*/
      }
    }
    memset((void *)v5[8], 0, 0x6Cu); /*0x4ba90b*/
    *(unsigned int *)v5[8] = 108; /*0x4ba910*/
    if ( (*(int (**)(int, unsigned int))(*(unsigned int *)*v6 + 88))(*v6, v5[8]) ) /*0x4ba91f*/
      ((Debug *)this)->Log(); /*0x4ba92b*/
    v11 = (unsigned int *)v5[8]; /*0x4ba933*/
    v5[4] = (unsigned int)(v11[21] + 7) >> 3; /*0x4ba948*/
    v12 = (v11[26] & 0x4000) != 0; /*0x4ba951*/
    *((unsigned char *)v5 + 24) = 1; /*0x4ba954*/
    *((unsigned char *)v5 + 25) = v12; /*0x4ba958*/
    v5[1] = v11[3]; /*0x4ba95e*/
    v13 = v11[2]; /*0x4ba961*/
    v14 = *v6; /*0x4ba964*/
    v5[2] = v13; /*0x4ba966*/
    g_DDraw_PrimarySurface = (LPDIRECTDRAWSURFACE7)(v14); /*0x4ba969*/
    if ( !g_lpDirectDraw7->lpVtbl->CreateClipper(g_lpDirectDraw7, 0, (LPDIRECTDRAWCLIPPER *)&g_DDraw_Clipper, 0) ) /*0x4ba976*/
    {
      v15 = *(unsigned int *)g_DDraw_Clipper; /*0x4ba983*/
      ActiveWindow = GetActiveWindow(); /*0x4ba985*/
      if ( !(*(int ((int)(**))(int, unsigned int, HWND))(v15 + 32))(g_DDraw_Clipper, 0, ActiveWindow) ) /*0x4ba994*/
        (*(void (**)(int, int))(*(unsigned int *)*v6 + 112))(*v6, g_DDraw_Clipper); /*0x4ba9a7*/
    }
    qmemcpy(&g_DDraw_PixelFormatDesc, (const void *)(v5[8] + 72), 0x20u); /*0x4ba9ba*/
    if ( (*(int (**)(unsigned int *))(*v5 + 112))(v5) != 2 ) /*0x4ba9c7*/
      goto LABEL_60; /*0x4ba9c7*/
    v17 = g_DDraw_RedMask; /*0x4ba9cd*/
    v18 = 0; /*0x4ba9d2*/
    v19 = 0; /*0x4ba9d4*/
    g_BitShift_Red = 0; /*0x4ba9d6*/
    g_BitShift_Green_0 = 0; /*0x4ba9dc*/
    do /*0x4ba9ec*/
    {
      if ( (v17 & 1) != 0 ) /*0x4ba9e4*/
        break; /*0x4ba9e4*/
      v17 >>= 1; /*0x4ba9e6*/
      ++v18; /*0x4ba9e8*/
    }
    while ( v18 < 16 ); /*0x4ba9ec*/
    g_BitShift_Red = v18; /*0x4ba9ee*/
    do /*0x4ba9fe*/
    {
      if ( (v17 & 0x80u) != 0 ) /*0x4ba9f6*/
        break; /*0x4ba9f6*/
      LOBYTE(v17) = 2 * v17; /*0x4ba9f8*/
      ++v19; /*0x4ba9fa*/
    }
    while ( v19 < 8 ); /*0x4ba9fe*/
    v20 = g_DDraw_GreenMask; /*0x4baa00*/
    v21 = 0; /*0x4baa05*/
    v22 = 0; /*0x4baa07*/
    g_BitShift_Green_0 = v19; /*0x4baa09*/
    g_BitMask_Green = 0; /*0x4baa0f*/
    g_BitMask_Blue = 0; /*0x4baa15*/
    do /*0x4baa25*/
    {
      if ( (v20 & 1) != 0 ) /*0x4baa1d*/
        break; /*0x4baa1d*/
      ++v21; /*0x4baa1f*/
      v20 >>= 1; /*0x4baa20*/
    }
    while ( v21 < 16 ); /*0x4baa25*/
    g_BitMask_Green = v21; /*0x4baa27*/
    do /*0x4baa37*/
    {
      if ( (v20 & 0x80u) != 0 ) /*0x4baa2f*/
        break; /*0x4baa2f*/
      ++v22; /*0x4baa31*/
      LOBYTE(v20) = 2 * v20; /*0x4baa32*/
    }
    while ( v22 < 8 ); /*0x4baa37*/
    v23 = g_DDraw_BlueMask; /*0x4baa39*/
    v24 = 0; /*0x4baa3f*/
    v25 = 0; /*0x4baa41*/
    g_BitMask_Blue = v22; /*0x4baa43*/
    g_BitShift_Blue = 0; /*0x4baa49*/
    g_BitMask_Red = 0; /*0x4baa4e*/
    do /*0x4baa5f*/
    {
      if ( (v23 & 1) != 0 ) /*0x4baa57*/
        break; /*0x4baa57*/
      ++v24; /*0x4baa59*/
      v23 >>= 1; /*0x4baa5a*/
    }
    while ( v24 < 16 ); /*0x4baa5f*/
    g_BitShift_Blue = v24; /*0x4baa61*/
    do /*0x4baa71*/
    {
      if ( (v23 & 0x80u) != 0 ) /*0x4baa69*/
        break; /*0x4baa69*/
      ++v25; /*0x4baa6b*/
      LOBYTE(v23) = 2 * v23; /*0x4baa6c*/
    }
    while ( v25 < 8 ); /*0x4baa71*/
    g_BitMask_Red = v25; /*0x4baa83*/
    stru_820320.Rate = -1; /*0x4baa89*/
    LOWORD(g_DDraw_Gray127) = (127 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baac1*/
                            | (127 >> v22 << g_BitMask_Green)
                            | (127 >> v25 << v24);
    HIWORD(g_DDraw_Gray127) = (63 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4baaff*/
                            | (63 >> v22 << g_BitMask_Green)
                            | (63 >> v25 << v24);
    word_8A0DEC = (31 >> g_BitShift_Green_0 << g_BitShift_Red) | (31 >> v22 << g_BitMask_Green) | (31 >> v25 << v24); /*0x4bab38*/
    if ( v24 ) /*0x4bab3f*/
      goto LABEL_60; /*0x4bab3f*/
    if ( v25 == 3 ) /*0x4bab4c*/
    {
      if ( g_BitMask_Green != 5 ) /*0x4bab55*/
        goto LABEL_60; /*0x4bab55*/
      if ( v22 != 3 ) /*0x4bab5d*/
      {
        if ( v22 == 2 && g_BitShift_Red == 11 && g_BitShift_Green_0 == 3 ) /*0x4babd2*/
        {
          stru_820320.Rate = (gamemd::AbstractClass **)(2);
          ((Debug *)this)->Log(); /*0x4babdf*/
          return (gamemd::AbstractClass **)(v5); /*0x4babf0*/
        }
        goto LABEL_60; /*0x4babd2*/
      }
      if ( g_BitShift_Red == 10 ) /*0x4bab66*/
      {
        if ( g_BitShift_Green_0 == 3 ) /*0x4bab72*/
        {
          stru_820320.Rate = (gamemd::AbstractClass **)(0);
          ((Debug *)this)->Log(); /*0x4bab87*/
          return (gamemd::AbstractClass **)(v5); /*0x4bab98*/
        }
        goto LABEL_60; /*0x4bab72*/
      }
      if ( g_BitShift_Red != 11 || g_BitShift_Green_0 != 2 ) /*0x4bac05*/
      {
LABEL_60:
        ((Debug *)this)->Log(); /*0x4bac11*/
        return (gamemd::AbstractClass **)(v5); /*0x4bac27*/
      }
    }
    else if ( v25 != 2 || g_BitMask_Green != 6 || v22 != 3 || g_BitShift_Red != 11 || g_BitShift_Green_0 != 3 ) /*0x4babba*/
    {
      goto LABEL_60; /*0x4babba*/
    }
    stru_820320.Rate = 1; /*0x4bac07*/
    goto LABEL_60; /*0x4bac07*/
  }
  DDraw::LogError(v7,(void *)(1)); /*0x4bac2f*/
  ((Debug *)this)->Log(); /*0x4bac3a*/
  if ( v5 ) /*0x4bac44*/
    (*(void (**)(unsigned int *, int))*v5)(v5, 1); /*0x4bac4d*/
  return 0; /*0x4bab91*/

}
} // namespace gamemd
// 0x4BAC60
namespace gamemd {
unsigned int * DSurface::CreateBackBuffer(int a2)
{

  void *v3; // edi
  void *DSurface_field_0x20; // eax

  this->DSurface_field_0x4 = (unsigned int)(0);
  this->DSurface_field_0x8 = (unsigned int)(0);
  this->DSurface_field_0xC = (unsigned int)(0);
  this->DSurface_field_0x10 = (unsigned int)(0);
  this->DSurface_field_0x14 = (unsigned int)(0);
  LOBYTE(this->DSurface_field_0x18) = 0; /*0x4bac7a*/
  BYTE1(this->DSurface_field_0x18) = 0; /*0x4bac7d*/
  this->DSurface_field_0x1C[0] = a2; /*0x4bac80*/
  this->DSurface_field_0x20 = 0; /*0x4bac83*/
  this->DSurface_field_0x0 = (unsigned int)(&DSurface_Vtable); /*0x4bac86*/
  if ( a2 ) /*0x4bac8c*/
  {
    v3 = (void *)((unsigned int)((void *)__2_YAPAXI_Z(0x6Cu)));
    this->DSurface_field_0x20 = (unsigned int)(v3);
    memset(v3, 0, 0x6Cu); /*0x4baca2*/
    *(unsigned int *)this->DSurface_field_0x20 = 108; /*0x4bacaa*/
    if ( !(*(int (**)(int, void *))(*(unsigned int *)this->DSurface_field_0x1C[0] + 88))( /*0x4bacba*/
            this->DSurface_field_0x1C[0],
            this->DSurface_field_0x20) )
    {
      DSurface_field_0x20 = (void *)((unsigned int)(this->DSurface_field_0x20));
      this->DSurface_field_0x10 = (unsigned int)((void *)((unsigned int)(*((unsigned int *)DSurface_field_0x20 + 21) + 7) >> 3));
      BYTE1(this->DSurface_field_0x18) = (*((unsigned int *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bacda*/
      this->DSurface_field_0x4 = (unsigned char)((void *)*((unsigned int *)DSurface_field_0x20 + 3)); /*0x4bace0*/
      this->DSurface_field_0x8 = (unsigned char)((void *)*((unsigned int *)DSurface_field_0x20 + 2)); /*0x4bace6*/
    }
  }
  return &this->DSurface_field_0x0; /*0x4baceb*/

}
} // namespace gamemd
// 0x4BAD60
namespace gamemd {
int DSurface::GetBytesPerPixel()
{

  return (int)this->DSurface_field_0x10; /*0x4bad63*/

}
} // namespace gamemd
// 0x4BB000
namespace gamemd {
int DSurface::RestoreIfLost()
{

  int v3; // eax
  void *DSurface_field_0xC; // edi
  void *DSurface_field_0x0; // edx

  if ( !g_DDraw_Initialized && !((unsigned int *)&stru_A8EB00)[412] ) /*0x4bb014*/
    return 0; /*0x4bb014*/
  v3 = this->DSurface_field_0x1C[0]; /*0x4bb01b*/
  if ( v3 && (*(int (**)(int))(*(unsigned int *)v3 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb02d*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb042*/
      || (*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb01a*/
    }
    DSurface_field_0xC = (void *)(this->DSurface_field_0xC);
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb04e*/
    {
      DSurface_field_0x0 = (void *)((unsigned int)(this->DSurface_field_0x0));
      this->DSurface_field_0xC = (unsigned int)(0);
      (*((void (**)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb05b*/
      ++this->DSurface_field_0xC; /*0x4bb064*/
      (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb069*/
      this->DSurface_field_0xC = (unsigned int)(DSurface_field_0xC); /*0x4bb06c*/
    }
  }
  return 1; /*0x4bb016*/

}
} // namespace gamemd
// 0x4BB0D0
namespace gamemd {
DSurface * * DSurface::Blit(int * a1, int * a2, unsigned int * a3, int * a4, DSurface * aP5, int a7, char a8)
{

  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  void *DSurface_field_0x0; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int (**v24)(void **, unsigned int *); // edx
  Rect *v25; // eax
  int Y; // ecx
  int Width; // edx
  int v28; // esi
  int v29; // eax
  bool v30; // cc
  int Height; // ebx
  int X; // eax
  int (**v33)(DSurface *, int *); // edx
  int *v34; // edi
  int v35; // eax
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  Rect v43; // [esp+1Ch] [ebp-84h] BYREF
  void *DSurface_field_0xC; // [esp+2Ch] [ebp-74h]
  int v45; // [esp+30h] [ebp-70h]
  int v46; // [esp+34h] [ebp-6Ch]
  int v47; // [esp+38h] [ebp-68h]
  DSurface *v48; // [esp+3Ch] [ebp-64h]
  int v49; // [esp+40h] [ebp-60h] BYREF
  int v50; // [esp+44h] [ebp-5Ch]
  int v51; // [esp+48h] [ebp-58h]
  int v52; // [esp+4Ch] [ebp-54h]
  unsigned int v53[2]; // [esp+50h] [ebp-50h] BYREF
  int v54; // [esp+58h] [ebp-48h]
  int v55; // [esp+5Ch] [ebp-44h]
  int v56; // [esp+60h] [ebp-40h] BYREF
  int v57; // [esp+64h] [ebp-3Ch]
  int v58; // [esp+68h] [ebp-38h]
  int v59; // [esp+6Ch] [ebp-34h]
  int v60; // [esp+70h] [ebp-30h] BYREF
  int v61; // [esp+74h] [ebp-2Ch]
  int v62; // [esp+78h] [ebp-28h]
  int v63; // [esp+7Ch] [ebp-24h]
  int v64; // [esp+80h] [ebp-20h] BYREF
  int v65; // [esp+84h] [ebp-1Ch]
  int v66; // [esp+88h] [ebp-18h]
  int v67; // [esp+8Ch] [ebp-14h]
  int v68[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a1[2]; /*0x4bb0e1*/
  v48 = this; /*0x4bb0e8*/
  if ( v9 <= 0 || a1[3] <= 0 || a4[2] <= 0 || a4[3] <= 0 || a2[2] <= 0 || a2[3] <= 0 || aP5[2] <= 0 || aP5[3] <= 0 ) /*0x4bb14e*/
    return 0; /*0x4bb14e*/
  v10 = (void **)a3; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(uint8_t (**)(unsigned int *))(*a3 + 132))(a3) /*0x4bb19d*/
    || (*(uint8_t (**)(unsigned int *))(*a3 + 108))(a3) == 1
    || (unsigned char)a7 == 1
    || (v11 = (*(int (**)(unsigned int *))(*a3 + 112))(a3),
        v12 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 28))(this) == v11,
        v10 = (void **)a3,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( LOBYTE(this->DSurface_field_0x18) == 1 && g_DDraw_Initialized == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!BYTE1(this->DSurface_field_0x18)
     || (*((uint8_t (**)(void **))*v10 + 33))(v10) == 1 && !*((unsigned char *)v10 + 25))
    && aP5[2] == a2[2]
    && aP5[3] == a2[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !g_DDraw_Initialized && !((unsigned int *)&stru_A8EB00)[412] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = this->DSurface_field_0x1C[0]; /*0x4bb215*/
  if ( v14 && (*(int (**)(int))(*(unsigned int *)v14 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb240*/
      || (*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
    {
      return 0; /*0x4bb245*/
    }
    DSurface_field_0xC = (void *)(this->DSurface_field_0xC); /*0x4bb250*/
    if ( (int)DSurface_field_0xC > 0 ) /*0x4bb254*/
    {
      DSurface_field_0x0 = (void *)(this->DSurface_field_0x0); /*0x4bb256*/
      this->DSurface_field_0xC = 0; /*0x4bb25d*/
      (*((void (**)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb264*/
      ++this->DSurface_field_0xC; /*0x4bb26d*/
      (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb273*/
      this->DSurface_field_0xC = (unsigned int)(DSurface_field_0xC); /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return ((XSurface *)((void **)((XSurface *)this)))->BlitPart((void **)a2,(void **)((gamemd::XSurface *)(v10)), (void **)aP5, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a2[1]; /*0x4bb2a7*/
  v18 = a2[2]; /*0x4bb2aa*/
  v49 = (int)(*a2); /*0x4bb2ad*/
  v19 = a2[3]; /*0x4bb2b1*/
  v50 = (int)(v17); /*0x4bb2b4*/
  v20 = (int)(*aP5); /*0x4bb2b8*/
  v52 = (int)(v19); /*0x4bb2ba*/
  v21 = (int)(aP5[2]); /*0x4bb2be*/
  v51 = (int)(v18); /*0x4bb2c1*/
  v22 = (int)(aP5[1]); /*0x4bb2c5*/
  v56 = v20; /*0x4bb2c8*/
  v23 = (int)(aP5[3]); /*0x4bb2cc*/
  v58 = v21; /*0x4bb2cf*/
  v57 = v22; /*0x4bb2d3*/
  v24 = (int (**)(void **, unsigned int *))*v10; /*0x4bb2d7*/
  v59 = v23; /*0x4bb2dd*/
  v25 = (Rect *)v24[30](v10, v53); /*0x4bb2e4*/
  Y = 0; /*0x4bb2eb*/
  Width = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *v25; /*0x4bb2f3*/
  v45 = a4[2]; /*0x4bb318*/
  if ( v45 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v46 = a4[3]; /*0x4bb327*/
  if ( v46 <= 0 || v25->Width <= 0 || v25->Height <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = *a4; /*0x4bb352*/
  v30 = v43.X < *a4; /*0x4bb354*/
  v47 = *a4; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v43.Width += v43.X - v29; /*0x4bb364*/
    v43.X = v47; /*0x4bb36c*/
  }
  if ( v43.Width < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  DSurface_field_0xC = (void *)a4[1]; /*0x4bb38b*/
  if ( v43.Y < (int)DSurface_field_0xC ) /*0x4bb38f*/
  {
    v43.Height += v43.Y - (unsigned int)DSurface_field_0xC; /*0x4bb399*/
    v43.Y = (int)DSurface_field_0xC; /*0x4bb3a1*/
  }
  if ( v43.Height < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( v43.X + v43.Width > v45 + v47 ) /*0x4bb3be*/
    v43.Width = v45 + v47 - v43.X; /*0x4bb3cc*/
  if ( v43.Width < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  Height = (int)(v43.Height); /*0x4bb3e5*/
  if ( v43.Height + v43.Y > (int)DSurface_field_0xC + v46 ) /*0x4bb3ed*/
    Height = (int)DSurface_field_0xC + v46 - v43.Y; /*0x4bb3f3*/
  if ( Height < 1 ) /*0x4bb3f8*/
  {
LABEL_53:
    X = 0; /*0x4bb40a*/
  }
  else
  {
    X = (int)(v43.X); /*0x4bb3fa*/
    Y = (int)(v43.Y); /*0x4bb3fe*/
    Width = (int)(v43.Width); /*0x4bb402*/
    v28 = Height; /*0x4bb406*/
  }
  v61 = Y; /*0x4bb40c*/
  v60 = X; /*0x4bb414*/
  v62 = Width; /*0x4bb418*/
  v33 = (int (**)(DSurface *, int *))v48->DSurface_field_0x0; /*0x4bb41c*/
  v63 = v28; /*0x4bb426*/
  v34 = (int *)v33[30](v48, v68); /*0x4bb439*/
  ((Rect *)(&v43))->Set(0, 0, 0, 0); /*0x4bb43b*/
  v35 = *v34; /*0x4bb449*/
  v36 = a1[2]; /*0x4bb44b*/
  v37 = v34[1]; /*0x4bb450*/
  v38 = v34[2]; /*0x4bb453*/
  v54 = v38; /*0x4bb456*/
  v39 = v34[3]; /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v45 = a1[3]; /*0x4bb468*/
  if ( v45 <= 0 || v34[2] <= 0 || v34[3] <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a1; /*0x4bb483*/
  if ( v35 < *a1 ) /*0x4bb488*/
  {
    v38 += v35 - v40; /*0x4bb48c*/
    v35 = *a1; /*0x4bb48e*/
    v54 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v46 = a1[1]; /*0x4bb49e*/
  if ( v37 < v46 ) /*0x4bb4a2*/
  {
    v39 += v37 - v46; /*0x4bb4a6*/
    v37 = v46; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = v35 + v38 <= v40 + v36 ? v54 : v36 + v40 - v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( v39 + v37 > v46 + v45 ) /*0x4bb4d8*/
    v39 = v46 + v45 - v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
LABEL_71:
    v35 = (int)(v43.X); /*0x4bb4e3*/
    v37 = (int)(v43.Y); /*0x4bb4e7*/
    v41 = (int)(v43.Width); /*0x4bb4eb*/
    v39 = (int)(v43.Height); /*0x4bb4ef*/
  }
  v65 = v37; /*0x4bb4f3*/
  v66 = v41; /*0x4bb4f7*/
  v64 = v35; /*0x4bb513*/
  v67 = v39; /*0x4bb51a*/
  if ( (uint8_t)IntersectSurfaceRects((gamemd::IUnknown *)(&v49), (int)&v64,(gamemd::XSurface *)(&v56), (int)&v60) ) /*0x4bb521*/
  {
    v53[0] = v64 + v49; /*0x4bb544*/
    v53[1] = v65 + v50; /*0x4bb552*/
    v55 = v50 + v65 + v52; /*0x4bb56e*/
    v54 = v49 + v64 + v51; /*0x4bb576*/
    v43.X = v60 + v56; /*0x4bb57d*/
    v43.Y = v61 + v57; /*0x4bb588*/
    v43.Height = v57 + v61 + v59; /*0x4bb5a0*/
    v43.Width = v56 + v60 + v58; /*0x4bb5a4*/
    return (*(int (**)(int, unsigned int *, unsigned int, Rect *, int, unsigned int))(*(unsigned int *)v48->DSurface_field_0x1C[0] + 20))( /*0x4bb5d5*/
             v48->DSurface_field_0x1C[0],
             v53,
             a3[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/

}
} // namespace gamemd
// 0x4BB620
namespace gamemd {
void* DSurface::FillRectEx(int a2, int a3, int a4)
{

  int v5; // eax
  void *DSurface_field_0xC; // ebx
  void *DSurface_field_0x0; // edx
  int *v8; // eax
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  int *v18; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v25; // [esp+20h] [ebp-B4h] BYREF
  int v26; // [esp+24h] [ebp-B0h]
  int v27; // [esp+28h] [ebp-ACh]
  int v28; // [esp+2Ch] [ebp-A8h]
  unsigned int v29[4]; // [esp+30h] [ebp-A4h] BYREF
  int v30[4]; // [esp+40h] [ebp-94h] BYREF
  unsigned int v31[4]; // [esp+50h] [ebp-84h] BYREF
  char v32[16]; // [esp+60h] [ebp-74h] BYREF
  unsigned int v33[25]; // [esp+70h] [ebp-64h] BYREF

  if ( this->DSurface_field_0x1C[0] && *(int *)(a3 + 8) > 0 && *(int *)(a3 + 12) > 0 ) /*0x4bb64d*/
  {
    if ( !LOBYTE(stru_820320.Start) /*0x4bb675*/
      || (*((uint8_t (**)(DSurface *))this->DSurface_field_0x0 + 27))(this)
      || (*(int (**)(int, int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 52))(
           this->DSurface_field_0x1C[0],
           1) )
    {
      return ((XSurface *)((unsigned int *)((XSurface *)this)))->FillRectEx((unsigned int *)a2, (int *)a3, a4); /*0x4bb81d*/
    }
    if ( g_DDraw_Initialized || *((unsigned int *)((char *)&stru_A8EB00 + 412)) ) /*0x4bb690*/
    {
      v5 = this->DSurface_field_0x1C[0]; /*0x4bb696*/
      if ( !v5 || (*(int (**)(int))(*(unsigned int *)v5 + 96))(this->DSurface_field_0x1C[0]) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4bb6c1*/
        && !(*(int (**)(int))(*(unsigned int *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        DSurface_field_0xC = (void *)(this->DSurface_field_0xC); /*0x4bb6cc*/
        if ( (int)DSurface_field_0xC > 0 ) /*0x4bb6d1*/
        {
          DSurface_field_0x0 = (void *)(this->DSurface_field_0x0); /*0x4bb6d3*/
          this->DSurface_field_0xC = 0; /*0x4bb6db*/
          (*((void (**)(DSurface *, unsigned int, unsigned int))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bb6de*/
          ++this->DSurface_field_0xC; /*0x4bb6e7*/
          (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bb6ec*/
          this->DSurface_field_0xC = (unsigned int)(DSurface_field_0xC); /*0x4bb6ef*/
        }
LABEL_15:
        v8 = (int *)(*((int (**)(DSurface *, char *))this->DSurface_field_0x0 + 30))(this, v32); /*0x4bb6f2*/
        v9 = (int *)(ClipRectIntersection((RectangleStruct *)(v31),(const RectangleStruct *)((int *)a2),(const RectangleStruct *)(v8), 0, 0)); /*0x4bb710*/
        v30[0] = *v9; /*0x4bb719*/
        v30[1] = v9[1]; /*0x4bb722*/
        v30[2] = v9[2]; /*0x4bb729*/
        v10 = *(unsigned int *)a3; /*0x4bb72d*/
        v11 = v9[3]; /*0x4bb72f*/
        v12 = *(unsigned int *)a2; /*0x4bb732*/
        v13 = *(unsigned int *)(a2 + 4); /*0x4bb734*/
        v30[3] = v11; /*0x4bb737*/
        v14 = *(unsigned int *)(a3 + 4); /*0x4bb73b*/
        v25 = v10 + v12; /*0x4bb740*/
        v15 = v13 + v14; /*0x4bb748*/
        v16 = *(unsigned int *)(a3 + 8); /*0x4bb74b*/
        v17 = *(unsigned int *)(a3 + 12); /*0x4bb74e*/
        v26 = (int)((int *)(v15)); /*0x4bb751*/
        v27 = v16; /*0x4bb755*/
        v28 = v17; /*0x4bb762*/
        v18 = (int *)(ClipRectIntersection((RectangleStruct *)(v31),(const RectangleStruct *)(&v25),(const RectangleStruct *)(v30), 0, 0)); /*0x4bb76b*/
        v19 = *v18; /*0x4bb76d*/
        v25 = *v18; /*0x4bb76f*/
        v20 = v18[1]; /*0x4bb773*/
        v26 = v20; /*0x4bb776*/
        v21 = v18[2]; /*0x4bb77a*/
        v27 = v21; /*0x4bb77d*/
        v22 = v18[3]; /*0x4bb781*/
        v28 = v22; /*0x4bb786*/
        if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
        {
          v23 = this->DSurface_field_0x1C[0]; /*0x4bb79c*/
          v29[0] = v19; /*0x4bb79f*/
          v29[2] = v19 + v21; /*0x4bb7a3*/
          v29[3] = v20 + v22; /*0x4bb7a7*/
          v29[1] = v20; /*0x4bb7b6*/
          memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
          v33[20] = a4; /*0x4bb7c8*/
          v33[0] = 100; /*0x4bb7da*/
          return (*(int (**)(int, unsigned int *, unsigned int, unsigned int, int, unsigned int *))(*(unsigned int *)v23 + 20))( /*0x4bb7f9*/
                   v23,
                   v29,
                   0,
                   0,
                   16778240,
                   v33) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/

}
} // namespace gamemd
// 0x4BB830
namespace gamemd {
void DSurface_FillRectWithFlags(DSurface *aP0)
{
  int v5; // ecx
  int v6; // edi
  int *v8; // eax
  unsigned int *v9; // eax
  int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // esi
  unsigned int *v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // esi
  int v24; // edi
  uint16_t *v25; // eax
  int v26; // eax
  int16_t v27; // bp
  int v28; // ebx
  int v29; // [esp+10h] [ebp-5Ch]
  int16_t v30; // [esp+14h] [ebp-58h]
  int16_t v31; // [esp+18h] [ebp-54h]
  int v32; // [esp+1Ch] [ebp-50h]
  uint16_t v33; // [esp+20h] [ebp-4Ch]
  unsigned int v34; // [esp+24h] [ebp-48h]
  int v35; // [esp+28h] [ebp-44h]
  unsigned int v36; // [esp+2Ch] [ebp-40h]
  int16_t i; // [esp+38h] [ebp-34h]
  unsigned int v38[4]; // [esp+3Ch] [ebp-30h] BYREF
  unsigned int v39[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v40; // [esp+54h] [ebp-18h]
  int v41; // [esp+58h] [ebp-14h]
  unsigned int v42[4]; // [esp+5Ch] [ebp-10h] BYREF
  DSurface *thisa; // [esp+70h] [ebp+4h]
  unsigned short *v44; // [esp+74h] [ebp+8h]
  unsigned int v45; // [esp+78h] [ebp+Ch]

  v6 = v5; /*0x4bb837*/
  v32 = v5; /*0x4bb839*/
  if ( (*(int (**)(void))(*(unsigned int *)v5 + 112))() < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( (int)aP0->DSurface_field_0x8 <= 0 || (int)aP0->DSurface_field_0xC <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  v8 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)&v6->q_1E0)(v6, v38); /*0x4bb87a*/
  v9 = (unsigned int *)(ClipRectIntersection((RectangleStruct *)(v42),(const RectangleStruct *)(v8),(const RectangleStruct *)((int *)aP0), 0, 0)); /*0x4bb888*/
  v39[0] = *v9; /*0x4bb891*/
  v39[1] = v9[1]; /*0x4bb898*/
  v40 = v9[2]; /*0x4bb89f*/
  v10 = v9[3]; /*0x4bb8a3*/
  v41 = v10; /*0x4bb8a8*/
  if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
  v31 = v11; /*0x4bb8f1*/
  v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
  v30 = v12; /*0x4bb908*/
  v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
  v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
  v35 = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)&v6->q_170)(v6, *v13, v13[1]); /*0x4bb938*/
  if ( !v35 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v14 = (int)a4; /*0x4bb94a*/
  if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
    v14 = 100; /*0x4bb953*/
  v15 = (1374389535 * (uint64_t)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
  v16 = 255 * v14 / 0x64u; /*0x4bb970*/
  v33 = 255 - v16; /*0x4bb97b*/
  v45 = v16; /*0x4bb983*/
  thisa = 0; /*0x4bb987*/
  IDA_LOWORD(a2) = (uint8_t)(*(unsigned char *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
  IDA_LOWORD(v15) = (uint8_t)(*(unsigned char *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
  v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
  v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
  IDA_LOWORD(v17) = (uint8_t)(*(unsigned char *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
  v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
  for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
  {
    v29 = 0; /*0x4bb9ed*/
    v20 = (unsigned int)thisa * ((*(int (**)(int))(*(unsigned int *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
    if ( v40 > 0 ) /*0x4bba01*/
    {
      v11 = (uint16_t)v11; /*0x4bba0f*/
      v21 = (uint16_t)v12; /*0x4bba15*/
      v22 = v16 * (v12 & (uint16_t)v19); /*0x4bba23*/
      v23 = v16 * (uint16_t)(v19 & v11); /*0x4bba26*/
      v24 = v45 * (uint16_t)(v19 & v34); /*0x4bba4b*/
      v25 = (uint16_t *)(v35 + 2 * v20); /*0x4bba50*/
      v36 = (uint16_t)v11; /*0x4bba53*/
      v44 = v25; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v26 = *v25; /*0x4bba68*/
        v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
        v28 = (uint16_t)(v26 & v34); /*0x4bba91*/
        v25 = v44 + 1; /*0x4bba9c*/
        *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
        if ( ++v29 >= v40 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v11 = v36; /*0x4bba5d*/
      }
      IDA_LOWORD(v12) = v30; /*0x4bbabd*/
      IDA_LOWORD(v19) = i; /*0x4bbac1*/
      IDA_LOWORD(v11) = v31; /*0x4bbac5*/
      v16 = v45; /*0x4bbac9*/
    }
  }
  (*(void (**)(int))(*(unsigned int *)v32 + 96))(v32); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}
}
// 0x4BBB00
namespace gamemd {  // G42.18c ns repair
void DSurface::BlitStretch(int a1, int a2, int a3)
{

  int v3; // esi
  int v5; // eax
  int i; // ebp
  uint8_t *v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  bool v11; // zf
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x4bbb05*/
  if ( a2 >= 1 && a2 - 1 >= 0 )
  {
    v12 = 0; /*0x4bbb24*/
    v13 = a2; /*0x4bbb2c*/
    while ( 1 )
    {
      v5 = v3 <= 1 ? 0x10000 : v12 / (v3 - 1);
      for ( i = 0; i < 256; ++i ) /*0x4bbb4c*/
      {
        v7 = (uint8_t *)(a3 + 2 * (i % 256) + i % 256); /*0x4bbb67*/
        v8 = (v5 * *v7) >> 16; /*0x4bbb84*/
        v9 = (v5 * v7[1]) >> 16; /*0x4bbb87*/
        v10 = (v5 * v7[2]) >> 16; /*0x4bbb8a*/
        if ( v8 >= 255 ) /*0x4bbb93*/
          v8 = 255; /*0x4bbb95*/
        if ( v9 >= 255 ) /*0x4bbba0*/
          v9 = 255; /*0x4bbba2*/
        if ( v10 >= 255 ) /*0x4bbbad*/
          v10 = 255; /*0x4bbbaf*/
        a1 += 2; /*0x4bbbba*/
        *(unsigned short *)(a1 - 2) = (v8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bbbec*/
                           | (v9 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v10 >> g_BitMask_Red << g_BitShift_Blue);
      }
      v11 = v13 == 1; /*0x4bbc0a*/
      v12 += 0x20000; /*0x4bbc0b*/
      --v13; /*0x4bbc0f*/
      if ( v11 ) /*0x4bbc13*/
        break; /*0x4bbc13*/
      v3 = a2; /*0x4bbb32*/
    }
  }

}
}  // G42.18c ns repair
// 0x4BBCA0
namespace gamemd {  // G42.18c ns repair
Coord * * DSurface::DrawLineModulated(int * a1, int a2, int a3, unsigned int * a4, unsigned int * a5, int a6, int a7, int a8, char a9)
{

  double v9; // st7
  int (**DSurface_field_0x0)(unsigned int *); // eax
  int *v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edx
  int v20; // ebp
  int v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // esi
  int Stream_field_04; // ebp
  int v36; // ecx
  int v37; // ebp
  int v38; // esi
  int v39; // edi
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // edx
  int v46; // ebp
  Stream *v47; // esi
  uint16_t v48; // ax
  int v49; // edx
  int v50; // eax
  int v51; // esi
  int v52; // edi
  unsigned short *v53; // eax
  int v54; // edx
  unsigned short *v55; // ecx
  int v56; // ecx
  unsigned short *v57; // eax
  bool v58; // zf
  Stream *v60; // edx
  uint16_t v61; // ax
  int v62; // edx
  int v63; // eax
  int v64; // esi
  int v65; // esi
  unsigned short *v66; // eax
  unsigned short *v67; // ecx
  int v68; // ecx
  unsigned short *v69; // eax
  Stream *v70; // esi
  uint16_t v71; // ax
  int v72; // edx
  int v73; // eax
  int v74; // esi
  int v75; // edx
  unsigned short *v76; // eax
  int v77; // ecx
  int v78; // edi
  unsigned short *v79; // eax
  unsigned short *v80; // ecx
  double v81; // [esp+4h] [ebp-80h]
  double v82; // [esp+4h] [ebp-80h]
  int v83; // [esp+1Ch] [ebp-68h]
  int v84; // [esp+20h] [ebp-64h]
  int v85; // [esp+24h] [ebp-60h]
  int v86; // [esp+28h] [ebp-5Ch]
  int v87; // [esp+2Ch] [ebp-58h]
  int v88; // [esp+30h] [ebp-54h]
  int v89; // [esp+34h] [ebp-50h]
  int v90; // [esp+34h] [ebp-50h]
  int v91; // [esp+34h] [ebp-50h]
  int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v93; // [esp+40h] [ebp-44h] BYREF
  int v94; // [esp+44h] [ebp-40h]
  unsigned int v95[5]; // [esp+50h] [ebp-34h] BYREF
  int v96; // [esp+64h] [ebp-20h] BYREF
  int v97; // [esp+68h] [ebp-1Ch]
  int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
  int v99; // [esp+74h] [ebp-10h] BYREF
  int v100; // [esp+78h] [ebp-Ch]
  int v101; // [esp+7Ch] [ebp-8h]
  int v102; // [esp+80h] [ebp-4h]
  int v103; // [esp+88h] [ebp+4h]
  int v104; // [esp+88h] [ebp+4h]
  int pad_0; // [esp+8Ch] [ebp+8h]
  unsigned int *v106; // [esp+90h] [ebp+Ch]
  unsigned int *v107; // [esp+90h] [ebp+Ch]
  int v108; // [esp+90h] [ebp+Ch]
  unsigned int *v109; // [esp+90h] [ebp+Ch]
  int v110; // [esp+98h] [ebp+14h]
  int v111; // [esp+98h] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+18h]
  int v113; // [esp+9Ch] [ebp+18h]
  int v114; // [esp+9Ch] [ebp+18h]
  int v115; // [esp+9Ch] [ebp+18h]
  int v116; // [esp+9Ch] [ebp+18h]
  unsigned short *SamplePosition; // [esp+9Ch] [ebp+18h]

  DSurface_field_0x0 = (int (**)(unsigned int *))a1->DSurface_field_0x0; /*0x4bbca3*/
  v95[0] = a1; /*0x4bbcae*/
  v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
  v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
  v13 = *v12; /*0x4bbcc9*/
  v99 = *v12; /*0x4bbccb*/
  v14 = v12[1]; /*0x4bbccf*/
  v100 = v14; /*0x4bbcd2*/
  v101 = v12[2]; /*0x4bbcd9*/
  v15 = v12[3]; /*0x4bbcdd*/
  v102 = v15; /*0x4bbce2*/
  if ( v101 || v15 ) /*0x4bbcea*/
  {
    v16 = v13 + *a4; /*0x4bbd08*/
    v17 = v13 + *a5; /*0x4bbd0a*/
    v18 = a8; /*0x4bbd0c*/
    v19 = v14 + a4[1]; /*0x4bbd13*/
    v20 = v16; /*0x4bbd15*/
    v21 = v14 + a5[1]; /*0x4bbd17*/
    v22 = a7; /*0x4bbd19*/
    v96 = v16; /*0x4bbd22*/
    v97 = v19; /*0x4bbd26*/
    v98[0] = v17; /*0x4bbd2a*/
    v98[1] = v21; /*0x4bbd2e*/
    if ( v16 > v17 ) /*0x4bbd32*/
    {
      v20 = v17; /*0x4bbd34*/
      v22 = a8; /*0x4bbd36*/
      v18 = a7; /*0x4bbd38*/
      v96 = v17; /*0x4bbd3f*/
      v97 = v21; /*0x4bbd43*/
      v98[0] = v16; /*0x4bbd47*/
      v98[1] = v19; /*0x4bbd4b*/
    }
    v95[1] = v98[0]; /*0x4bbd5b*/
    v23 = v20; /*0x4bbd60*/
    v24 = v97; /*0x4bbd62*/
    v95[2] = v98[1]; /*0x4bbd6e*/
    if ( (uint8_t)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
    {
      v106 = (unsigned int *)v18; /*0x4bbd8d*/
      v110 = v22; /*0x4bbd94*/
      if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
      {
        v92[0] = v23 - v98[0]; /*0x4bbdb3*/
        v92[1] = v24 - v98[1]; /*0x4bbdb7*/
        v93 = v23 - v95[1]; /*0x4bbdc7*/
        v94 = v24 - v95[2]; /*0x4bbdcb*/
        Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
        v103 = v25; /*0x4bbddc*/
        v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
        v112 = v26; /*0x4bbde5*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
        v113 = v22 - v18; /*0x4bbdf7*/
        __asm /*0x4bbdfe*/
        {
          fidiv [esp+78h+arg_0]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
        v28 = abs32(v27); /*0x4bbe13*/
        if ( v22 >= v18 ) /*0x4bbe17*/
          v106 = (unsigned int *)(v22 - v28); /*0x4bbe28*/
        else
          v106 = (unsigned int *)(v22 + v28); /*0x4bbe1b*/
      }
      if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
      {
        v93 = v96 - v95[1]; /*0x4bbe52*/
        v94 = v97 - v95[2]; /*0x4bbe56*/
        __asm /*0x4bbe5a*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v81); /*0x4bbe73*/
        LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
        v114 = v29; /*0x4bbe81*/
        v93 = v23 - v95[1]; /*0x4bbe90*/
        v94 = v24 - v95[2]; /*0x4bbe94*/
        __asm /*0x4bbe98*/
        {
          fild dword ptr [esp+80h+var_4C.__pad_C]
          fild [esp+80h+var_4C.Vector_field_0x8]
          fild [esp+80h+arg_14]
          fstp qword ptr [esp+50h]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+80h+var_84+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v82); /*0x4bbebc*/
        LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
        v115 = v30; /*0x4bbec9*/
        __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
        v116 = v22 - v18; /*0x4bbedb*/
        __asm /*0x4bbee2*/
        {
          fdivr qword ptr [esp+48h]
          fild [esp+78h+arg_14]
          fmulp st(1), st
        }
        LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
        v32 = abs32(v31); /*0x4bbef7*/
        if ( v18 <= v22 ) /*0x4bbefb*/
          v110 = v18 + v32; /*0x4bbf0a*/
        else
          v110 = v18 - v32; /*0x4bbeff*/
      }
      v33 = v95[0]; /*0x4bbf11*/
      (*(void (**)(unsigned int))(*(unsigned int *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
      v34 = (*(int (**)(int, int, int))(*(unsigned int *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
      v104 = v34; /*0x4bbf37*/
      if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
      {
        Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
        v95[2] = v97; /*0x4bbf4c*/
        SamplePosition = (unsigned short *)((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v96, v97 - Stream_field_04); /*0x4bbf5d*/
        v88 = -1; /*0x4bbf6d*/
        LOWORD(v36) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
        pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
        v37 = v110; /*0x4bbf8b*/
        v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
        if ( v34 ) /*0x4bbf9d*/
        {
          v38 = v98[1] - v97; /*0x4bbfb6*/
          v39 = v98[0] - v96; /*0x4bbfba*/
          v89 = v98[0] - v96; /*0x4bbfc0*/
          v40 = (int)v106 - v37; /*0x4bbfc4*/
          v41 = (*(int (**)(int))(*(unsigned int *)v33 + 116))(v33); /*0x4bbfc6*/
          v87 = v41; /*0x4bbfcb*/
          if ( v38 < 0 ) /*0x4bbfcf*/
          {
            v87 = -v41; /*0x4bbfd3*/
            pad_0 = -pad_0; /*0x4bbfe0*/
            v88 = 1; /*0x4bbfe7*/
          }
          v83 = 1; /*0x4bbff6*/
          v42 = abs32(v38); /*0x4bc000*/
          if ( v40 < 0 ) /*0x4bc004*/
            v83 = -1; /*0x4bc006*/
          v43 = 2 * v42; /*0x4bc010*/
          v84 = 2 * v42; /*0x4bc016*/
          v44 = abs32(v40); /*0x4bc01a*/
          v45 = 2 * v39; /*0x4bc01c*/
          v85 = 2 * v39; /*0x4bc021*/
          v46 = 2 * v44; /*0x4bc025*/
          v86 = 2 * v44; /*0x4bc028*/
          if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
          {
            v92[0] = v43 - v44; /*0x4bc03e*/
            v90 = v45 - v44; /*0x4bc048*/
            if ( v44 > 0 ) /*0x4bc04c*/
            {
              v47 = g_ZBufferDescriptor; /*0x4bc052*/
              v107 = 0; /*0x4bc058*/
              v93 = v44; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc075*/
                {
                  v48 = *(unsigned short *)((char *)v107 + v104); /*0x4bc092*/
                  LOBYTE(v95[1]) = (uint8_t)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                  BYTE1(v95[1]) = (uint8_t)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                  BYTE2(v95[1]) = (uint8_t)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                  v49 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc0f7*/
                  v50 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc11e*/
                  if ( v50 > 255 ) /*0x4bc125*/
                    v50 = 255; /*0x4bc127*/
                  v51 = 255; /*0x4bc132*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                    v51 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc139*/
                  if ( v49 > 255 ) /*0x4bc141*/
                    v49 = 255; /*0x4bc143*/
                  *(unsigned short *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                  | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc188*/
                    *SamplePosition = v111; /*0x4bc199*/
                  v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                }
                v52 = v92[0]; /*0x4bc1a2*/
                if ( v92[0] <= 0 ) /*0x4bc1a8*/
                {
                  v54 = v111; /*0x4bc213*/
                }
                else
                {
                  v52 = v92[0] - v86; /*0x4bc1c6*/
                  v104 += v87; /*0x4bc1c8*/
                  v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                  if ( pad_0 <= 0 ) /*0x4bc1d1*/
                  {
                    v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                    if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                      v55 = (unsigned short *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                    SamplePosition = v55; /*0x4bc208*/
                    v54 = v88 + v111; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                      v53 = (unsigned short *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                    SamplePosition = v53; /*0x4bc1e2*/
                    v54 = v88 + v111; /*0x4bc1e9*/
                  }
                }
                v56 = v90; /*0x4bc21a*/
                if ( v90 > 0 ) /*0x4bc220*/
                {
                  v57 = SamplePosition + 1; /*0x4bc233*/
                  v107 = (unsigned int *)((char *)v107 + 2); /*0x4bc23b*/
                  if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                    v57 = (unsigned short *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                  SamplePosition = v57; /*0x4bc247*/
                  v56 = v90 - v86; /*0x4bc252*/
                }
                v111 = v83 + v54; /*0x4bc25e*/
                v90 = v85 + v56; /*0x4bc26b*/
                v58 = v93 == 1; /*0x4bc275*/
                v92[0] = v84 + v52; /*0x4bc276*/
                --v93; /*0x4bc27a*/
              }
              while ( !v58 ); /*0x4bc27e*/
            }
            goto LABEL_50; /*0x4bc27e*/
          }
          if ( v39 <= v42 ) /*0x4bc29b*/
          {
            v93 = v45 - v42; /*0x4bc501*/
            v92[0] = v46 - v42; /*0x4bc50b*/
            if ( v42 > 0 ) /*0x4bc50f*/
            {
              v70 = g_ZBufferDescriptor; /*0x4bc515*/
              v109 = 0; /*0x4bc51b*/
              v91 = v42; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc538*/
                {
                  v71 = *(unsigned short *)((char *)v109 + v104); /*0x4bc555*/
                  LOBYTE(v95[1]) = (uint8_t)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                  BYTE1(v95[1]) = (uint8_t)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                  BYTE2(v95[1]) = (uint8_t)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                  v72 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc5ba*/
                  v73 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc5e1*/
                  if ( v73 > 255 ) /*0x4bc5e8*/
                    v73 = 255; /*0x4bc5ea*/
                  v74 = 255; /*0x4bc5f5*/
                  if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                    v74 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc5fc*/
                  if ( v72 > 255 ) /*0x4bc604*/
                    v72 = 255; /*0x4bc606*/
                  *(unsigned short *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                  | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                  | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                  if ( a9 ) /*0x4bc64b*/
                    *SamplePosition = v111; /*0x4bc65c*/
                  v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                }
                v75 = v93; /*0x4bc665*/
                if ( v93 <= 0 ) /*0x4bc66b*/
                {
                  v76 = SamplePosition; /*0x4bc698*/
                }
                else
                {
                  v76 = SamplePosition + 1; /*0x4bc67e*/
                  v109 = (unsigned int *)((char *)v109 + 2); /*0x4bc686*/
                  if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                    v76 = (unsigned short *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                  v75 = v93 - v84; /*0x4bc692*/
                }
                v77 = v92[0]; /*0x4bc69f*/
                v78 = v111; /*0x4bc6a3*/
                if ( v92[0] > 0 ) /*0x4bc6ac*/
                {
                  v78 = v83 + v111; /*0x4bc6b6*/
                  v77 = v92[0] - v84; /*0x4bc6b8*/
                }
                v93 = v85 + v75; /*0x4bc6c4*/
                v92[0] = v86 + v77; /*0x4bc6d5*/
                v79 = &v76[pad_0]; /*0x4bc6e2*/
                v104 += v87; /*0x4bc6e4*/
                if ( pad_0 <= 0 ) /*0x4bc6ea*/
                {
                  v80 = v79; /*0x4bc700*/
                  if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                    v80 = (unsigned short *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                  SamplePosition = v80; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                    v79 = (unsigned short *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                  SamplePosition = v79; /*0x4bc6f4*/
                }
                v58 = v91 == 1; /*0x4bc71c*/
                v111 = v88 + v78; /*0x4bc71d*/
                --v91; /*0x4bc724*/
              }
              while ( !v58 ); /*0x4bc728*/
            }
            goto LABEL_50; /*0x4bc728*/
          }
          v108 = 0; /*0x4bc2a3*/
          v93 = v43 - v39; /*0x4bc2ac*/
          v92[0] = v46 - v39; /*0x4bc2b6*/
          if ( v39 <= 0 ) /*0x4bc2ba*/
          {
LABEL_50:
            (*(void (**)(unsigned int))(*(unsigned int *)v95[0] + 96))(v95[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (uint16_t)v111 < *SamplePosition ) /*0x4bc2d8*/
            {
              v61 = *(unsigned short *)(v104 + 2 * v108); /*0x4bc2f5*/
              LOBYTE(v95[1]) = (uint8_t)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
              BYTE1(v95[1]) = (uint8_t)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
              BYTE2(v95[1]) = (uint8_t)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
              v62 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc35a*/
              v63 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc381*/
              if ( v63 > 255 ) /*0x4bc388*/
                v63 = 255; /*0x4bc38a*/
              v64 = 255; /*0x4bc395*/
              if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                v64 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc39c*/
              if ( v62 > 255 ) /*0x4bc3a4*/
                v62 = 255; /*0x4bc3a6*/
              *(unsigned short *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                          | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                          | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
              if ( a9 ) /*0x4bc3eb*/
                *SamplePosition = v111; /*0x4bc3fc*/
              v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
            }
            v65 = v93; /*0x4bc405*/
            if ( v93 <= 0 ) /*0x4bc40b*/
            {
              v66 = SamplePosition; /*0x4bc47c*/
              goto LABEL_73; /*0x4bc47c*/
            }
            v65 = v93 - v85; /*0x4bc429*/
            v104 += v87; /*0x4bc42b*/
            v66 = &SamplePosition[pad_0]; /*0x4bc431*/
            if ( pad_0 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
              goto LABEL_71; /*0x4bc439*/
            v66 = (unsigned short *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
            v111 += v88; /*0x4bc44d*/
LABEL_73:
            v68 = v92[0]; /*0x4bc483*/
            if ( v92[0] > 0 ) /*0x4bc489*/
            {
              v111 += v83; /*0x4bc49c*/
              v68 = v92[0] - v85; /*0x4bc4a3*/
            }
            v69 = v66 + 1; /*0x4bc4a9*/
            v93 = v84 + v65; /*0x4bc4ae*/
            v92[0] = v86 + v68; /*0x4bc4b8*/
            if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
              v69 = (unsigned short *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
            SamplePosition = v69; /*0x4bc4ca*/
            if ( ++v108 >= v89 ) /*0x4bc4e2*/
              goto LABEL_50; /*0x4bc4e2*/
          }
          v67 = &SamplePosition[pad_0]; /*0x4bc459*/
          if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
            v67 = (unsigned short *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
          v66 = v67; /*0x4bc464*/
LABEL_71:
          v111 += v88; /*0x4bc466*/
          goto LABEL_73; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/

}
}  // G42.18c ns repair
// 0x4BC750
namespace gamemd {  // G42.18c ns repair
Coord * * DSurface::DrawLineFaded(int a2, unsigned int * a3, int * a4, unsigned char * a5, int a6, int a7, char a8, float a9, char a10, char a11, float a12)
{

  int *v13; // esi
  int v14; // eax
  int v15; // edx
  int *v16; // eax
  int v17; // esi
  int *v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // ebx
  int v26; // ebx
  int v27; // edi
  int v28; // edx
  int v29; // esi
  int v30; // ebx
  int v31; // ebp
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  DSurface *v42; // esi
  int v43; // edi
  int Stream_field_04; // ebx
  int v46; // eax
  int pad_0; // ebp
  int v48; // edi
  int v49; // esi
  int v50; // ebx
  int v51; // eax
  in... [41072 chars total]
}
}  // G42.18c ns repair

// 0x4BDF00
namespace gamemd {  // G42.18c ns repair
void* DSurface::DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8)
{

  double v8; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int *v16; // eax
  int *v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ebx
  int Stream_field_04; // edi
  unsigned short *SamplePosition; // esi
  int v41; // edi
  uint16_t *v42; // ebp
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // edi
  int v49; // ecx
  Stream *v50; // ebx
  int v51; // edx
  uint16_t v52; // di
  int16_t v53; // ax
  unsigned short *v54; // eax
  uint16_t *v55; // eax
  bool v56; // zf
  int v58; // edi
  Stream *v59; // ebx
  int v60; // edx
  uint16_t v61; // di
  int16_t v62; // ax
  unsigned short *v63; // eax
  uint16_t *v64; // eax
  int v65; // eax
  unsigned int Stream_field_08; // eax
  int v67; // edi
  int v68; // ebx
  Stream *v69; // ecx
  int v70; // edx
  uint16_t v71; // di
  int16_t v72; // ax
  unsigned short *v73; // eax
  uint16_t *v74; // eax
  double v75; // [esp+4h] [ebp-84h]
  double v76; // [esp+4h] [ebp-84h]
  double v77; // [esp+4h] [ebp-84h]
  double v78; // [esp+4h] [ebp-84h]
  int v79; // [esp+1Ch] [ebp-6Ch]
  int v80; // [esp+20h] [ebp-68h]
  int v81; // [esp+24h] [ebp-64h]
  int v82; // [esp+24h] [ebp-64h]
  int v83; // [esp+24h] [ebp-64h]
  int v84; // [esp+28h] [ebp-60h]
  int v85; // [esp+2Ch] [ebp-5Ch]
  int v86; // [esp+30h] [ebp-58h]
  int v87; // [esp+30h] [ebp-58h]
  int v88; // [esp+30h] [ebp-58h]
  int v89; // [esp+34h] [ebp-54h]
  int v90; // [esp+38h] [ebp-50h]
  int v91; // [esp+3Ch] [ebp-4Ch]
  unsigned char v93[12]; // [esp+44h] [ebp-44h] BYREF
  unsigned int v94[5]; // [esp+54h] [ebp-34h] BYREF
  int v95; // [esp+68h] [ebp-20h] BYREF
  int v96; // [esp+6Ch] [ebp-1Ch]
  int v97[2]; // [esp+70h] [ebp-18h] BYREF
  int v98; // [esp+78h] [ebp-10h] BYREF
  int v99; // [esp+7Ch] [ebp-Ch]
  int v100; // [esp+80h] [ebp-8h]
  int v101; // [esp+84h] [ebp-4h]
  int pad_0; // [esp+8Ch] [ebp+4h]
  int v103; // [esp+90h] [ebp+8h]
  int v104; // [esp+94h] [ebp+Ch]
  uint8_t *v105; // [esp+98h] [ebp+10h]
  uint8_t *v106; // [esp+98h] [ebp+10h]
  uint8_t *v107; // [esp+98h] [ebp+10h]
  uint8_t *v108; // [esp+98h] [ebp+10h]
  int v109; // [esp+9Ch] [ebp+14h]
  int v110; // [esp+9Ch] [ebp+14h]
  int v111; // [esp+9Ch] [ebp+14h]
  int v112; // [esp+9Ch] [ebp+14h]
  int16_t v113; // [esp+9Ch] [ebp+14h]
  int16_t v114; // [esp+9Ch] [ebp+14h]
  int16_t v115; // [esp+9Ch] [ebp+14h]

  v105 = (uint8_t *)*a5; /*0x4bdf18*/
  __asm /*0x4bdf1f*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
  v12 = v11; /*0x4bdf34*/
  v91 = v11; /*0x4bdf39*/
  v106 = (uint8_t *)a5[1]; /*0x4bdf3d*/
  __asm /*0x4bdf44*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
  v14 = v13; /*0x4bdf59*/
  v90 = v13; /*0x4bdf5e*/
  v107 = (uint8_t *)a5[2]; /*0x4bdf62*/
  __asm /*0x4bdf69*/
  {
    fild [esp+7Ch+arg_C]
    fmul [esp+7Ch+arg_10]
  }
  LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
  v89 = v15; /*0x4bdf7f*/
  if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v16 = (int *)(*((int (**)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
  v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
  v18 = *v17; /*0x4bdfb6*/
  v98 = *v17; /*0x4bdfb8*/
  v19 = v17[1]; /*0x4bdfbc*/
  v99 = v19; /*0x4bdfbf*/
  v100 = v17[2]; /*0x4bdfc6*/
  v20 = v17[3]; /*0x4bdfca*/
  v101 = v20; /*0x4bdfcf*/
  if ( !v100 && !v20 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  v21 = v18 + *a3; /*0x4bdff3*/
  v22 = v18 + *a4; /*0x4bdff5*/
  v23 = a7; /*0x4bdffa*/
  v24 = v19 + a3[1]; /*0x4be001*/
  v25 = v21; /*0x4be003*/
  v26 = v19 + a4[1]; /*0x4be005*/
  v27 = a8; /*0x4be007*/
  v95 = v21; /*0x4be010*/
  v96 = v24; /*0x4be014*/
  v97[0] = v22; /*0x4be018*/
  v97[1] = v26; /*0x4be01c*/
  if ( v21 > v22 ) /*0x4be020*/
  {
    v25 = v22; /*0x4be022*/
    v23 = a8; /*0x4be024*/
    v27 = a7; /*0x4be026*/
    v95 = v22; /*0x4be02d*/
    v96 = v26; /*0x4be031*/
    v97[0] = v21; /*0x4be035*/
    v97[1] = v24; /*0x4be039*/
  }
  v94[2] = v97[1]; /*0x4be049*/
  v28 = v25; /*0x4be04e*/
  v29 = v96; /*0x4be050*/
  v94[1] = v97[0]; /*0x4be05c*/
  if ( !(uint8_t)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
    return 0; /*0x4be060*/
  a7 = v27; /*0x4be07b*/
  v109 = v23; /*0x4be082*/
  if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
  {
    *(unsigned int *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
    *(unsigned int *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
    __asm /*0x4be0ac*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4be0c1*/
    LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
    a8 = v30; /*0x4be0d1*/
    *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
    *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
    __asm /*0x4be0ee*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_18]
      fstp [esp+84h+var_44+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v76); /*0x4be10e*/
    LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
    a8 = v31; /*0x4be11b*/
    __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
    a8 = v23 - v27; /*0x4be12d*/
    __asm /*0x4be134*/
    {
      fdivr [esp+7Ch+var_44+4]
      fild [esp+7Ch+arg_18]
      fmulp st(1), st
    }
    LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
    v33 = abs32(v32); /*0x4be149*/
    if ( v23 >= v27 ) /*0x4be14d*/
      a7 = v23 - v33; /*0x4be15e*/
    else
      a7 = v23 + v33; /*0x4be151*/
  }
  if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
  {
    *(unsigned int *)&v93[4] = v95 - v94[1]; /*0x4be182*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
    *(unsigned int *)&v93[8] = v96 - v94[2]; /*0x4be190*/
    __asm /*0x4be194*/
    {
      fild [esp+84h+var_3C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v77); /*0x4be1a9*/
    LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
    v110 = v34; /*0x4be1b3*/
    *(unsigned int *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
    __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
    *(unsigned int *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
    __asm /*0x4be1d2*/
    {
      fild [esp+84h+var_3C]
      fild [esp+84h+arg_10]
      fstp qword ptr [esp+84h+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+84h+var_88+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v78); /*0x4be1f2*/
    LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
    v111 = v35; /*0x4be1ff*/
    __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
    v112 = v23 - v27; /*0x4be211*/
    __asm /*0x4be218*/
    {
      fdivr qword ptr [esp+7Ch+var_34+4]
      fild [esp+7Ch+arg_10]
      fmulp st(1), st
    }
    LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
    v37 = abs32(v36); /*0x4be22d*/
    if ( v27 <= v23 ) /*0x4be231*/
      v109 = v27 + v37; /*0x4be240*/
    else
      v109 = v27 - v37; /*0x4be235*/
  }
  (*((void (**)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
  v38 = (*((int (**)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
  v108 = (uint8_t *)v38; /*0x4be26d*/
  if ( !g_ZBufferDescriptor ) /*0x4be274*/
    return 0; /*0x4be274*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
  v94[2] = v96; /*0x4be285*/
  SamplePosition = (unsigned short *)((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v95, v96 - Stream_field_04); /*0x4be29c*/
  v41 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
  v94[2] = v96; /*0x4be2a5*/
  v42 = (uint16_t *)((StreamClass *)(*(int **)&stru_87E790.__pad_D8[60]))->ReadAndSeek(v95, v96 - v41); /*0x4be2b6*/
  v85 = -1; /*0x4be2c1*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
  pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
  a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
  if ( !v38 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v86 = v97[0] - v95; /*0x4be305*/
  v43 = v97[1] - v96; /*0x4be310*/
  v44 = a7 - v109; /*0x4be31a*/
  v45 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
  v80 = v45; /*0x4be321*/
  if ( v43 < 0 ) /*0x4be325*/
  {
    v85 = 1; /*0x4be32e*/
    v80 = -v45; /*0x4be33a*/
    pad_0 = -pad_0; /*0x4be33e*/
  }
  v84 = 1; /*0x4be347*/
  v46 = abs32(v43); /*0x4be354*/
  if ( v44 < 0 ) /*0x4be358*/
    v84 = -1; /*0x4be35a*/
  LOWORD(a7) = 0; /*0x4be364*/
  v47 = abs32(v44); /*0x4be377*/
  BYTE2(a7) = 0; /*0x4be37f*/
  v104 = 2 * v86; /*0x4be38a*/
  v103 = 2 * v46; /*0x4be394*/
  v79 = 2 * v47; /*0x4be39e*/
  if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
  {
    if ( v86 <= v46 ) /*0x4be5aa*/
    {
      v67 = v104 - v46; /*0x4be7b5*/
      v68 = v79 - v46; /*0x4be7b7*/
      *(unsigned int *)&v93[4] = v104 - v46; /*0x4be7bb*/
      *(unsigned int *)v93 = v79 - v46; /*0x4be7bf*/
      if ( v46 > 0 ) /*0x4be7c3*/
      {
        v94[1] = v46; /*0x4be7d0*/
        v69 = g_ZBufferDescriptor; /*0x4be7d4*/
        v83 = 0; /*0x4be7da*/
        v88 = 2 * pad_0; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          v70 = *v42; /*0x4be7f6*/
          if ( (uint16_t)a8 < *SamplePosition ) /*0x4be7fa*/
          {
            v71 = *(unsigned short *)&v108[v83]; /*0x4be80b*/
            LOBYTE(v115) = (uint8_t)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
            HIBYTE(v115) = (uint8_t)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
            LOWORD(a7) = v115; /*0x4be861*/
            BYTE2(a7) = (uint8_t)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
            v72 = BlendColorPack((uint8_t *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
            v67 = *(unsigned int *)&v93[4]; /*0x4be89e*/
            *(unsigned short *)&v108[v83] = v72; /*0x4be8a2*/
            v69 = g_ZBufferDescriptor; /*0x4be8a6*/
            v68 = *(unsigned int *)v93; /*0x4be8ac*/
          }
          if ( v67 > 0 ) /*0x4be8b2*/
          {
            ++SamplePosition; /*0x4be8bb*/
            v83 += 2; /*0x4be8c3*/
            if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
            v67 -= v103; /*0x4be8cc*/
          }
          if ( v68 > 0 ) /*0x4be8d5*/
          {
            a8 += v84; /*0x4be8eb*/
            v68 -= v103; /*0x4be8f2*/
          }
          v67 += v104; /*0x4be8ff*/
          v68 += v79; /*0x4be908*/
          v108 += v80; /*0x4be914*/
          SamplePosition = (unsigned short *)((char *)SamplePosition + v88); /*0x4be922*/
          *(unsigned int *)&v93[4] = v67; /*0x4be924*/
          *(unsigned int *)v93 = v68; /*0x4be92a*/
          if ( pad_0 <= 0 ) /*0x4be92e*/
          {
            v73 = SamplePosition; /*0x4be93d*/
            if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
              v73 = (unsigned short *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
            SamplePosition = v73; /*0x4be948*/
          }
          else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
          }
          v42 = (uint16_t *)((char *)v42 + v88); /*0x4be955*/
          if ( pad_0 <= 0 ) /*0x4be959*/
          {
            v74 = v42; /*0x4be970*/
            if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
              v74 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
            v42 = v74; /*0x4be97c*/
          }
          else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
          {
            v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
          }
          v56 = v94[1] == 1; /*0x4be98f*/
          a8 += v85; /*0x4be990*/
          --v94[1]; /*0x4be997*/
        }
        while ( !v56 ); /*0x4be99b*/
      }
    }
    else
    {
      v58 = v103 - v86; /*0x4be5bf*/
      *(unsigned int *)&v93[4] = v103 - v86; /*0x4be5c3*/
      *(unsigned int *)v93 = v79 - v86; /*0x4be5c9*/
      v82 = 0; /*0x4be5cd*/
      if ( v86 > 0 ) /*0x4be5d5*/
      {
        v59 = g_ZBufferDescriptor; /*0x4be5db*/
        do /*0x4be78f*/
        {
          v60 = *v42; /*0x4be5ee*/
          if ( (uint16_t)a8 < *SamplePosition ) /*0x4be5f2*/
          {
            v61 = *(unsigned short *)&v108[2 * v82]; /*0x4be603*/
            LOBYTE(v114) = (uint8_t)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
            HIBYTE(v114) = (uint8_t)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
            LOWORD(a7) = v114; /*0x4be659*/
            BYTE2(a7) = (uint8_t)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
            v62 = BlendColorPack((uint8_t *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
            v58 = *(unsigned int *)&v93[4]; /*0x4be696*/
            *(unsigned short *)&v108[2 * v82] = v62; /*0x4be69a*/
            v59 = g_ZBufferDescriptor; /*0x4be69e*/
          }
          if ( v58 > 0 ) /*0x4be6a6*/
          {
            v58 -= v104; /*0x4be6c0*/
            v108 += v80; /*0x4be6c9*/
            SamplePosition += pad_0; /*0x4be6d3*/
            if ( pad_0 <= 0 ) /*0x4be6d7*/
            {
              v63 = SamplePosition; /*0x4be6e6*/
              if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                v63 = (unsigned short *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
              SamplePosition = v63; /*0x4be6f1*/
            }
            else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
            }
            v42 += pad_0; /*0x4be6fa*/
            if ( pad_0 <= 0 ) /*0x4be6fe*/
            {
              v64 = v42; /*0x4be715*/
              if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                v64 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
              v42 = v64; /*0x4be721*/
            }
            else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
            {
              v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
            }
            a8 += v85; /*0x4be730*/
          }
          v65 = *(unsigned int *)v93; /*0x4be737*/
          if ( *(int *)v93 > 0 ) /*0x4be73d*/
          {
            a8 += v84; /*0x4be74c*/
            v65 = *(unsigned int *)v93 - v104; /*0x4be75a*/
          }
          ++SamplePosition; /*0x4be769*/
          *(unsigned int *)v93 = v79 + v65; /*0x4be76c*/
          Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
          v58 += v103; /*0x4be773*/
          *(unsigned int *)&v93[4] = v58; /*0x4be777*/
          if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
          ++v82; /*0x4be78b*/
        }
        while ( v82 < v86 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v48 = v103 - v47; /*0x4be3be*/
    v49 = v104 - v47; /*0x4be3c0*/
    *(unsigned int *)v93 = v103 - v47; /*0x4be3c4*/
    v87 = v104 - v47; /*0x4be3c8*/
    if ( v47 > 0 ) /*0x4be3cc*/
    {
      v50 = g_ZBufferDescriptor; /*0x4be3d2*/
      v81 = 0; /*0x4be3d8*/
      *(unsigned int *)&v93[4] = v47; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        v51 = *v42; /*0x4be3f1*/
        if ( (uint16_t)a8 < *SamplePosition ) /*0x4be3f5*/
        {
          v52 = *(unsigned short *)&v108[v81]; /*0x4be406*/
          LOBYTE(v113) = (uint8_t)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
          HIBYTE(v113) = (uint8_t)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
          LOWORD(a7) = v113; /*0x4be45c*/
          BYTE2(a7) = (uint8_t)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
          v53 = BlendColorPack((uint8_t *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
          v48 = *(unsigned int *)v93; /*0x4be499*/
          v49 = v87; /*0x4be49d*/
          *(unsigned short *)&v108[v81] = v53; /*0x4be4a1*/
          v50 = g_ZBufferDescriptor; /*0x4be4a5*/
        }
        if ( v48 > 0 ) /*0x4be4ad*/
        {
          v108 += v80; /*0x4be4c4*/
          v48 -= v79; /*0x4be4d2*/
          SamplePosition += pad_0; /*0x4be4d7*/
          if ( pad_0 <= 0 ) /*0x4be4db*/
          {
            v54 = SamplePosition; /*0x4be4ea*/
            if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
              v54 = (unsigned short *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
            SamplePosition = v54; /*0x4be4f3*/
          }
          else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
          }
          v42 += pad_0; /*0x4be4f5*/
          if ( pad_0 <= 0 ) /*0x4be4f9*/
          {
            v55 = v42; /*0x4be510*/
            if ( (unsigned int)v42 < *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
              v55 = (uint16_t *)((char *)v42 + *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
            v42 = v55; /*0x4be51c*/
          }
          else if ( (unsigned int)v42 >= *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
          {
            v42 = (uint16_t *)((char *)v42 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
          }
          v49 = v87; /*0x4be52b*/
          a8 += v85; /*0x4be52f*/
        }
        if ( v49 > 0 ) /*0x4be538*/
        {
          ++SamplePosition; /*0x4be541*/
          v81 += 2; /*0x4be549*/
          if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
          v49 -= v79; /*0x4be552*/
        }
        a8 += v84; /*0x4be56a*/
        v49 += v104; /*0x4be578*/
        v48 += v103; /*0x4be57e*/
        v56 = *(unsigned int *)&v93[4] == 1; /*0x4be580*/
        v87 = v49; /*0x4be581*/
        *(unsigned long long *)v93 = __PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v56 ); /*0x4be58d*/
    }
  }
  (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
  return 1; /*0x4be59c*/

}
}  // G42.18c ns repair
// 0x4BF750
namespace gamemd {  // G42.18c ns repair
void* DSurface::DrawGradientLine(int a2, unsigned int * a3, unsigned int * a4, int a5, int a6, float * a7, float * a8)
{

  DSurface *v8; // ebp
  int *v9; // eax
  int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned short *v15; // ebx
  float *v16; // esi
  float *v17; // edi
  unsigned char *v18; // eax
  uint8_t v19; // dl
  double v20; // st7
  char v22; // c0
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  float *v27; // edi
  unsigned char *v28; // eax
  uint8_t v29; // dl
  double v30; // st7
  char v32; // c0
  bool v33; // zf
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebp
  float *v40; // esi
  float *v41; // edi
  unsigned char *v42; // eax
  uint8_t v43; // dl
  double v44; // st7
  char v46; // c0
  int v47; // ebx
  float *v48; // esi
  float *v49; // edi
  int v50; // ebp
  unsigned char *v51; // eax
  uint8_t v52; // dl
  double v53; // st7
  char v55; // c0
  int v57; // [esp+10h] [ebp-48h]
  int v58; // [esp+14h] [ebp-44h]
  int v59; // [esp+14h] [ebp-44h]
  int v60; // [esp+18h] [ebp-40h] BYREF
  int v61; // [esp+1Ch] [ebp-3Ch]
  int v62; // [esp+20h] [ebp-38h] BYREF
  int v63; // [esp+24h] [ebp-34h]
  int v64; // [esp+28h] [ebp-30h] BYREF
  int v65; // [esp+2Ch] [ebp-2Ch]
  int v66; // [esp+30h] [ebp-28h]
  int v67; // [esp+34h] [ebp-24h]
  unsigned char v68[16]; // [esp+38h] [ebp-20h] BYREF
  int v69[4]; // [esp+48h] [ebp-10h] BYREF
  unsigned short *v70; // [esp+5Ch] [ebp+4h]
  int v71; // [esp+5Ch] [ebp+4h]
  unsigned int *v72; // [esp+60h] [ebp+8h]
  int v73; // [esp+60h] [ebp+8h]
  unsigned int *v74; // [esp+64h] [ebp+Ch]
  int v75; // [esp+64h] [ebp+Ch]

  v8 = this; /*0x4bf755*/
  v9 = (int *)(*((int (**)(DSurface *, unsigned char *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
  v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
  v64 = *v10; /*0x4bf77d*/
  v65 = v10[1]; /*0x4bf784*/
  v66 = v10[2]; /*0x4bf78b*/
  v67 = v10[3]; /*0x4bf796*/
  v11 = v65 + a3[1]; /*0x4bf7a1*/
  v60 = v64 + *a3; /*0x4bf7a3*/
  v61 = v11; /*0x4bf7a7*/
  v12 = v64 + *a4; /*0x4bf7b6*/
  v63 = v65 + a4[1]; /*0x4bf7b8*/
  v62 = v12; /*0x4bf7c9*/
  if ( (uint8_t)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
  {
    v13 = v60; /*0x4bf7da*/
    if ( v60 > v62 ) /*0x4bf7e4*/
    {
      v14 = v61; /*0x4bf7e6*/
      v60 = v62; /*0x4bf7ea*/
      v62 = v13; /*0x4bf7f2*/
      v61 = v63; /*0x4bf7f6*/
      v63 = v14; /*0x4bf7fa*/
    }
    if ( (*((int (**)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
    {
      v15 = (unsigned short *)(*((int (**)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
      v70 = v15; /*0x4bf825*/
      if ( v15 ) /*0x4bf829*/
      {
        if ( v61 == v63 ) /*0x4bf83a*/
        {
          v71 = 0; /*0x4bf84a*/
          if ( v62 - v60 >= 0 ) /*0x4bf852*/
          {
            v16 = a8; /*0x4bf858*/
            v17 = a7; /*0x4bf85c*/
            do /*0x4bf874*/
            {
              v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
              LOWORD(a8) = *(unsigned short *)v18; /*0x4bf87f*/
              v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
              LOWORD(v18) = (uint8_t)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
              *v15 = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                   | ((unsigned int)v18 << g_BitMask_Green)
                   | (v19 << g_BitShift_Blue);
              v20 = *v17 + *v16; /*0x4bf8d2*/
              *v16 = v20; /*0x4bf8da*/
              if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
              {
                *v16 = 0.0; /*0x4bf8f4*/
              }
              else
              {
                if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                  goto LABEL_16; /*0x4bf916*/
                *v16 = 1.0; /*0x4bf918*/
              }
              *v17 = -*v17; /*0x4bf922*/
LABEL_16:
              ++v15; /*0x4bf924*/
              ++v71; /*0x4bf938*/
            }
            while ( v71 <= v62 - v60 ); /*0x4bf874*/
          }
LABEL_17:
          (*((void (**)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v60 == v62 ) /*0x4bf960*/
        {
          if ( v61 <= v63 ) /*0x4bf968*/
            v24 = (*((int (**)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
          else
            v24 = -(*((int (**)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
          v72 = (unsigned int *)v24; /*0x4bf982*/
          v25 = abs32(v63 - v61); /*0x4bf98f*/
          if ( v25 < 0 ) /*0x4bf991*/
            goto LABEL_17; /*0x4bf991*/
          v26 = a8; /*0x4bf997*/
          v27 = a7; /*0x4bf99b*/
          v74 = (unsigned int *)(v25 + 1); /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
            LOWORD(a8) = *(unsigned short *)v28; /*0x4bf9c3*/
            v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
            LOWORD(v28) = (uint8_t)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
            *v70 = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                 | ((unsigned int)v28 << g_BitMask_Green)
                 | (v29 << g_BitShift_Blue);
            v30 = *v27 + *v26; /*0x4bfa1a*/
            *v26 = v30; /*0x4bfa22*/
            if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
            {
              *v26 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_31; /*0x4bfa5e*/
              *v26 = 1.0; /*0x4bfa60*/
            }
            *v27 = -*v27; /*0x4bfa6a*/
LABEL_31:
            v33 = v74 == (unsigned int *)1; /*0x4bfa6c*/
            v70 = (unsigned short *)((char *)v70 + (unsigned int)v72); /*0x4bfa7b*/
            v74 = (unsigned int *)((char *)v74 - 1); /*0x4bfa7f*/
            if ( v33 ) /*0x4bfa83*/
              goto LABEL_17; /*0x4bfa83*/
          }
        }
        v34 = v63 - v61; /*0x4bfaa1*/
        v35 = v62 - v60; /*0x4bfaa6*/
        v58 = v62 - v60; /*0x4bfaaa*/
        v36 = (*((int (**)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
        v73 = v36; /*0x4bfab3*/
        if ( v34 < 0 ) /*0x4bfab7*/
          v73 = -v36; /*0x4bfabb*/
        v57 = 2 * v35; /*0x4bfac7*/
        v37 = abs32(v34); /*0x4bfacb*/
        v75 = 2 * v37; /*0x4bfad2*/
        if ( v35 > v37 ) /*0x4bfad6*/
        {
          v38 = 0; /*0x4bfade*/
          v39 = 2 * v37 - v35; /*0x4bfae0*/
          if ( v35 < 0 ) /*0x4bfae4*/
          {
LABEL_61:
            v8 = this; /*0x4bfd08*/
            goto LABEL_17; /*0x4bfd08*/
          }
          v40 = a8; /*0x4bfaea*/
          v41 = a7; /*0x4bfaee*/
          while ( 1 ) /*0x4bfb06*/
          {
            v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
            LOWORD(a8) = *(unsigned short *)v42; /*0x4bfb11*/
            v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
            LOWORD(v42) = (uint8_t)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
            v70[v38] = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                     | ((unsigned int)v42 << g_BitMask_Green)
                     | (v43 << g_BitShift_Blue);
            v44 = *v41 + *v40; /*0x4bfb69*/
            *v40 = v44; /*0x4bfb71*/
            if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
            {
              *v40 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_45; /*0x4bfbad*/
              *v40 = 1.0; /*0x4bfbaf*/
            }
            *v41 = -*v41; /*0x4bfbb9*/
LABEL_45:
            if ( v39 > 0 ) /*0x4bfbbd*/
            {
              v39 -= v57; /*0x4bfbc9*/
              v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfbcb*/
            }
            v39 += v75; /*0x4bfbd7*/
            if ( ++v38 > v58 ) /*0x4bfbdc*/
            {
              (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v47 = 2 * v35 - v37; /*0x4bfbfa*/
        if ( v37 < 0 ) /*0x4bfbfe*/
          goto LABEL_17; /*0x4bfbfe*/
        v48 = a8; /*0x4bfc04*/
        v49 = a7; /*0x4bfc08*/
        v50 = 0; /*0x4bfc0c*/
        v59 = v37 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
          LOWORD(a8) = *(unsigned short *)v51; /*0x4bfc32*/
          v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
          LOWORD(v51) = (uint8_t)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
          v70[v50] = ((uint8_t)((uint8_t)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                   | ((unsigned int)v51 << g_BitMask_Green)
                   | (v52 << g_BitShift_Blue);
          v53 = *v49 + *v48; /*0x4bfc8a*/
          *v48 = v53; /*0x4bfc92*/
          if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
          {
            *v48 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_58; /*0x4bfcce*/
            *v48 = 1.0; /*0x4bfcd0*/
          }
          *v49 = -*v49; /*0x4bfcda*/
LABEL_58:
          if ( v47 > 0 ) /*0x4bfcde*/
          {
            ++v50; /*0x4bfce4*/
            v47 -= v75; /*0x4bfce7*/
          }
          v47 += v57; /*0x4bfcf1*/
          v33 = v59 == 1; /*0x4bfcf9*/
          v70 = (unsigned short *)((char *)v70 + v73); /*0x4bfcfa*/
          --v59; /*0x4bfcfe*/
          if ( v33 ) /*0x4bfd02*/
            goto LABEL_61; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/

}
}  // G42.18c ns repair
// 0x4BFD30
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawLineZBuf(int a1, int a2, int a3, unsigned int * a4, unsigned int * a5, unsigned short a6, int a7, int a8, char a9)
{

  double v9; // st7
  int (**DSurface_field_0x0)(unsigned int *); // eax
  int *v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v14; // edi
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edx
  int v21; // ebp
  int v22; // esi
  int v23; // edi
  int v24; // esi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ebp
  int v35; // esi
  int v36; // ebx
  int Stream_field_04; // edi
  unsigned short *SamplePosition; // esi
  int v39; // edi
  unsigned short *v40; // edi
  int v41; // ecx
  int v42; // ebx
  int v43; // ebp
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ebp
  int v48; // ebx
  Stream *v49; // edx
  unsigned int *v50; // ebp
  int v51; // eax
  int v52; // edx
  int v53; // eax
  unsigned short *v54; // eax
  unsigned short *v55; // eax
  int v56; // ebx
  Stream *v57; // edx
  unsigned int *v58; // ebp
  int v59; // eax
  int v60; // edx
  unsigned short *v61; // eax
  unsigned short *v62; // eax
  int v63; // eax
  int v64; // ebp
  unsigned int *v65; // edx
  Stream *v66; // ecx
  int v67; // ebx
  int v68; // eax
  int v69; // eax
  unsigned short *v70; // eax
  unsigned short *v71; // eax
  double v72; // [esp+4h] [ebp-7Ch]
  double v73; // [esp+4h] [ebp-7Ch]
  double v74; // [esp+4h] [ebp-7Ch]
  double v75; // [esp+4h] [ebp-7Ch]
  int v76; // [esp+1Ch] [ebp-64h]
  int v77; // [esp+20h] [ebp-60h]
  int v78; // [esp+20h] [ebp-60h]
  int v79; // [esp+20h] [ebp-60h]
  int v80; // [esp+24h] [ebp-5Ch]
  int v81; // [esp+28h] [ebp-58h]
  int v82; // [esp+2Ch] [ebp-54h]
  int v83; // [esp+30h] [ebp-50h]
  int v84; // [esp+30h] [ebp-50h]
  int v85; // [esp+34h] [ebp-4Ch]
  int v86; // [esp+38h] [ebp-48h]
  double v87; // [esp+3Ch] [ebp-44h] BYREF
  unsigned int v88[5]; // [esp+4Ch] [ebp-34h] BYREF
  int v89; // [esp+60h] [ebp-20h] BYREF
  int v90; // [esp+64h] [ebp-1Ch]
  int v91[2]; // [esp+68h] [ebp-18h] BYREF
  int v92; // [esp+70h] [ebp-10h] BYREF
  int v93; // [esp+74h] [ebp-Ch]
  int v94; // [esp+78h] [ebp-8h]
  int v95; // [esp+7Ch] [ebp-4h]
  int v96; // [esp+84h] [ebp+4h]
  unsigned int *v97; // [esp+88h] [ebp+8h]
  int v98; // [esp+88h] [ebp+8h]
  int v99; // [esp+8Ch] [ebp+Ch]
  unsigned int *v100; // [esp+8Ch] [ebp+Ch]
  unsigned int *v101; // [esp+8Ch] [ebp+Ch]
  int v102; // [esp+94h] [ebp+14h]
  int v103; // [esp+94h] [ebp+14h]
  int v104; // [esp+94h] [ebp+14h]
  int v105; // [esp+94h] [ebp+14h]
  int v106; // [esp+98h] [ebp+18h]
  int v107; // [esp+98h] [ebp+18h]
  int v108; // [esp+98h] [ebp+18h]
  int v109; // [esp+98h] [ebp+18h]
  int v110; // [esp+98h] [ebp+18h]

  DSurface_field_0x0 = (int (**)(unsigned int *))a1->DSurface_field_0x0; /*0x4bfd33*/
  v88[0] = a1; /*0x4bfd3e*/
  v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
  v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
  v13 = *v12; /*0x4bfd59*/
  v92 = *v12; /*0x4bfd5b*/
  v14 = v12[1]; /*0x4bfd5f*/
  v93 = v14; /*0x4bfd62*/
  result = v12[2]; /*0x4bfd66*/
  v94 = result; /*0x4bfd69*/
  v16 = v12[3]; /*0x4bfd6d*/
  v95 = v16; /*0x4bfd72*/
  if ( !result && !v16 ) /*0x4bfd7a*/
    goto LABEL_121; /*0x4bfd7a*/
  v17 = v13 + *a4; /*0x4bfd92*/
  v18 = v13 + *a5; /*0x4bfd94*/
  v19 = a7; /*0x4bfd99*/
  v20 = v14 + a4[1]; /*0x4bfda0*/
  v21 = v17; /*0x4bfda2*/
  v22 = v14 + a5[1]; /*0x4bfda4*/
  v23 = a8; /*0x4bfda6*/
  v89 = v17; /*0x4bfdaf*/
  v90 = v20; /*0x4bfdb3*/
  v91[0] = v18; /*0x4bfdb7*/
  v91[1] = v22; /*0x4bfdbb*/
  if ( v17 > v18 ) /*0x4bfdbf*/
  {
    v21 = v18; /*0x4bfdc1*/
    v19 = a8; /*0x4bfdc3*/
    v23 = a7; /*0x4bfdc5*/
    v89 = v18; /*0x4bfdcc*/
    v90 = v22; /*0x4bfdd0*/
    v91[0] = v17; /*0x4bfdd4*/
    v91[1] = v20; /*0x4bfdd8*/
  }
  v88[1] = v91[0]; /*0x4bfde8*/
  v24 = v21; /*0x4bfded*/
  v25 = v90; /*0x4bfdef*/
  v88[2] = v91[1]; /*0x4bfdfb*/
  result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
  if ( !(unsigned char)result ) /*0x4bfe06*/
    goto LABEL_121; /*0x4bfe06*/
  v97 = (unsigned int *)v23; /*0x4bfe1a*/
  v106 = v19; /*0x4bfe1e*/
  if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
  {
    LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
    HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
    __asm /*0x4bfe48*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v72); /*0x4bfe5d*/
    LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
    v102 = v26; /*0x4bfe6d*/
    LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
    HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
    __asm /*0x4bfe8a*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_10]
      fstp [esp+7Ch+var_48+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v73); /*0x4bfeaa*/
    LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
    v103 = v27; /*0x4bfeb7*/
    __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
    v104 = v19 - v23; /*0x4bfec9*/
    __asm /*0x4bfed0*/
    {
      fdivr [esp+74h+var_48+4]
      fild [esp+74h+arg_10]
      fmulp st(1), st
    }
    LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
    v29 = abs32(v28); /*0x4bfee5*/
    if ( v19 >= v23 ) /*0x4bfee9*/
      v97 = (unsigned int *)(v19 - v29); /*0x4bfef7*/
    else
      v97 = (unsigned int *)(v19 + v29); /*0x4bfeed*/
  }
  if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
    goto LABEL_16; /*0x4bff09*/
  LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
  HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
  __asm /*0x4bff2a*/
  {
    fild [esp+7Ch+var_40]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v74); /*0x4bff3f*/
  LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
  v107 = v30; /*0x4bff49*/
  LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
  __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
  HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
  __asm /*0x4bff68*/
  {
    fild [esp+7Ch+var_40]
    fild [esp+7Ch+arg_14]
    fstp qword ptr [esp+7Ch+var_34+4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+7Ch+var_80+4]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v75); /*0x4bff88*/
  LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
  v108 = v31; /*0x4bff95*/
  __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
  v109 = v19 - v23; /*0x4bffa7*/
  __asm /*0x4bffae*/
  {
    fdivr qword ptr [esp+74h+var_34+4]
    fild [esp+74h+arg_14]
    fmulp st(1), st
  }
  LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
  v33 = abs32(v32); /*0x4bffc3*/
  if ( v23 <= v19 ) /*0x4bffc7*/
  {
    v106 = v23 + v33; /*0x4bffd1*/
LABEL_16:
    v34 = v106; /*0x4bffd8*/
    goto LABEL_17; /*0x4bffd8*/
  }
  v34 = v23 - v33; /*0x4bffcb*/
LABEL_17:
  v35 = v88[0]; /*0x4bffdf*/
  (*(void (**)(unsigned int))(*(unsigned int *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
  result = (*(int (**)(int, int, int))(*(unsigned int *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
  v36 = result; /*0x4c0001*/
  v105 = result; /*0x4c0005*/
  if ( !g_ZBufferDescriptor ) /*0x4c000c*/
    goto LABEL_121; /*0x4c000c*/
  Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
  v88[2] = v90; /*0x4c001d*/
  SamplePosition = (unsigned short *)((Audio *)((int *)g_ZBufferDescriptor))->GetSamplePosition(v89, v90 - Stream_field_04); /*0x4c0034*/
  v39 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
  v88[2] = v90; /*0x4c003d*/
  v40 = (unsigned short *)((StreamClass *)(*(int **)&stru_87E790.__pad_D8[60]))->ReadAndSeek(v89, v90 - v39); /*0x4c004e*/
  v82 = -1; /*0x4c0055*/
  LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
  result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
  v96 = result; /*0x4c0068*/
  v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
  if ( !v36 ) /*0x4c007d*/
  {
LABEL_121:
    LOBYTE(result) = 0; /*0x4c073b*/
    return result; /*0x4c073e*/
  }
  LOBYTE(v88[1]) = (uint8_t)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
  BYTE1(v88[1]) = (uint8_t)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
  v42 = v91[1] - v90; /*0x4c00ce*/
  BYTE2(v88[1]) = (uint8_t)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
  v85 = LOBYTE(v88[1]); /*0x4c00e3*/
  v86 = BYTE1(v88[1]); /*0x4c00f0*/
  LODWORD(v87) = BYTE2(v88[1]); /*0x4c00fd*/
  v99 = v91[0] - v89; /*0x4c010b*/
  v43 = (int)v97 - v34; /*0x4c011a*/
  v44 = (*(int (**)(unsigned int))(*(unsigned int *)v88[0] + 116))(v88[0]); /*0x4c011c*/
  v81 = v44; /*0x4c0121*/
  if ( v42 < 0 ) /*0x4c0125*/
  {
    v81 = -v44; /*0x4c0129*/
    v96 = -v96; /*0x4c0133*/
    v82 = 1; /*0x4c0137*/
  }
  v80 = 1; /*0x4c0141*/
  v45 = abs32(v42); /*0x4c014e*/
  if ( v43 < 0 ) /*0x4c0152*/
    v80 = -1; /*0x4c0154*/
  v98 = 2 * v45; /*0x4c0164*/
  v46 = abs32(v43); /*0x4c0168*/
  v47 = 2 * v99; /*0x4c0173*/
  v83 = 2 * v99; /*0x4c0179*/
  v76 = 2 * v46; /*0x4c017d*/
  if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
  {
    if ( v99 <= v45 ) /*0x4c0375*/
    {
      v64 = v47 - v45; /*0x4c0559*/
      v88[1] = 2 * v46 - v45; /*0x4c055f*/
      if ( v45 > 0 ) /*0x4c0563*/
      {
        v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
        v79 = v45; /*0x4c056f*/
        v66 = g_ZBufferDescriptor; /*0x4c0573*/
        v101 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v67 = v110; /*0x4c0584*/
          v68 = (uint16_t)*v40; /*0x4c0590*/
          if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
          {
            if ( v68 == 127 ) /*0x4c05a4*/
            {
              *(unsigned short *)((char *)v101 + v105) = a6; /*0x4c0627*/
            }
            else
            {
              v67 = v110; /*0x4c05f2*/
              *(unsigned short *)((char *)v101 + v105) = ((LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                              | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                              | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            }
            if ( a9 ) /*0x4c0634*/
              *SamplePosition = v67; /*0x4c0636*/
            v66 = g_ZBufferDescriptor; /*0x4c0639*/
            v65 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
          }
          if ( v64 > 0 ) /*0x4c0647*/
          {
            ++SamplePosition; /*0x4c0650*/
            v101 = (unsigned int *)((char *)v101 + 2); /*0x4c0656*/
            if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
              SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
            if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
              v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0671*/
            v64 -= v98; /*0x4c0674*/
          }
          v69 = v88[1]; /*0x4c0678*/
          if ( v88[1] > 0 ) /*0x4c067e*/
          {
            v110 = v80 + v67; /*0x4c0684*/
            v69 = v88[1] - v98; /*0x4c068f*/
          }
          v64 += v83; /*0x4c0695*/
          v88[1] = v76 + v69; /*0x4c06a4*/
          v105 += v81; /*0x4c06ae*/
          SamplePosition += v96; /*0x4c06bc*/
          if ( v96 <= 0 ) /*0x4c06c0*/
          {
            v70 = SamplePosition; /*0x4c06cf*/
            if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
              v70 = (unsigned short *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
            SamplePosition = v70; /*0x4c06da*/
          }
          else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
          }
          v110 += v82; /*0x4c06e9*/
          v40 += v96; /*0x4c06f7*/
          if ( v96 <= 0 ) /*0x4c06fb*/
          {
            v71 = v40; /*0x4c070a*/
            if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
              v71 = (unsigned short *)((char *)v40 + v65[8]); /*0x4c0713*/
            v40 = v71; /*0x4c0715*/
          }
          else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
          {
            v40 = (unsigned short *)((char *)v40 - v65[8]); /*0x4c0702*/
          }
          --v79; /*0x4c071c*/
        }
        while ( v79 ); /*0x4c0720*/
      }
    }
    else
    {
      v56 = v98 - v99; /*0x4c038a*/
      v78 = 0; /*0x4c038e*/
      v84 = v76 - v99; /*0x4c0398*/
      if ( v99 > 0 ) /*0x4c039c*/
      {
        v57 = g_ZBufferDescriptor; /*0x4c03a2*/
        v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v59 = (uint16_t)*v40; /*0x4c03bb*/
          if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
          {
            if ( v59 == 127 ) /*0x4c03cf*/
              LOWORD(v60) = a6; /*0x4c0423*/
            else
              v60 = ((LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                  | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(unsigned short *)(v105 + 2 * v78) = v60; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *SamplePosition = v110; /*0x4c044d*/
            v57 = g_ZBufferDescriptor; /*0x4c0450*/
            v58 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
          }
          if ( v56 > 0 ) /*0x4c045e*/
          {
            v105 += v81; /*0x4c046d*/
            v56 -= 2 * v99; /*0x4c047e*/
            SamplePosition += v96; /*0x4c0487*/
            if ( v96 <= 0 ) /*0x4c048b*/
            {
              v61 = SamplePosition; /*0x4c049a*/
              if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                v61 = (unsigned short *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
              SamplePosition = v61; /*0x4c04a3*/
            }
            else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
            {
              SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
            }
            v40 += v96; /*0x4c04a9*/
            v110 += v82; /*0x4c04ab*/
            if ( v96 <= 0 ) /*0x4c04b8*/
            {
              v62 = v40; /*0x4c04c7*/
              if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                v62 = (unsigned short *)((char *)v40 + v58[8]); /*0x4c04d0*/
              v40 = v62; /*0x4c04d2*/
            }
            else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
            {
              v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c04bf*/
            }
          }
          v63 = v84; /*0x4c04d4*/
          if ( v84 > 0 ) /*0x4c04da*/
          {
            v110 += v80; /*0x4c04e9*/
            v63 = v84 - 2 * v99; /*0x4c04fe*/
          }
          ++SamplePosition; /*0x4c0504*/
          v56 += v98; /*0x4c0507*/
          v84 = v76 + v63; /*0x4c050f*/
          if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
          if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
            v40 = (unsigned short *)((char *)v40 - v58[8]); /*0x4c0527*/
          ++v78; /*0x4c0538*/
        }
        while ( v78 < v99 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v48 = v98 - v46; /*0x4c0195*/
    v77 = v47 - v46; /*0x4c019b*/
    if ( v46 > 0 ) /*0x4c019f*/
    {
      v49 = g_ZBufferDescriptor; /*0x4c01a5*/
      v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
      v100 = 0; /*0x4c01b1*/
      v88[1] = v46; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v51 = (uint16_t)*v40; /*0x4c01cd*/
        if ( (uint16_t)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
        {
          if ( v51 == 127 ) /*0x4c01e1*/
            LOWORD(v52) = a6; /*0x4c0235*/
          else
            v52 = ((LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
          *(unsigned short *)((char *)v100 + v105) = v52; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *SamplePosition = v110; /*0x4c0262*/
          v49 = g_ZBufferDescriptor; /*0x4c0265*/
          v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
        }
        if ( v48 > 0 ) /*0x4c0273*/
        {
          v48 -= v76; /*0x4c0286*/
          v53 = v96; /*0x4c0288*/
          v105 += v81; /*0x4c028c*/
          SamplePosition += v96; /*0x4c0296*/
          if ( v96 <= 0 ) /*0x4c029a*/
          {
            v54 = SamplePosition; /*0x4c02a9*/
            if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
              v54 = (unsigned short *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
            SamplePosition = v54; /*0x4c02b2*/
            v53 = v96; /*0x4c02b4*/
          }
          else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
          {
            SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
          }
          v40 += v96; /*0x4c02b8*/
          if ( v53 <= 0 ) /*0x4c02bc*/
          {
            v55 = v40; /*0x4c02cb*/
            if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
              v55 = (unsigned short *)((char *)v40 + v50[8]); /*0x4c02d4*/
            v40 = v55; /*0x4c02d6*/
          }
          else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
          {
            v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c02c3*/
          }
          v110 += v82; /*0x4c02e5*/
        }
        if ( v77 > 0 ) /*0x4c02f2*/
        {
          ++SamplePosition; /*0x4c02fb*/
          v100 = (unsigned int *)((char *)v100 + 2); /*0x4c0301*/
          if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
            SamplePosition = (unsigned short *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
          if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
            v40 = (unsigned short *)((char *)v40 - v50[8]); /*0x4c031c*/
          v77 -= v76; /*0x4c0323*/
        }
        v110 += v80; /*0x4c0338*/
        v77 += v83; /*0x4c0349*/
        v48 += v98; /*0x4c0351*/
        --v88[1]; /*0x4c0354*/
      }
      while ( v88[1] ); /*0x4c0358*/
    }
  }
  result = (*(int (**)(unsigned int))(*(unsigned int *)v88[0] + 96))(v88[0]); /*0x4c0364*/
  LOBYTE(result) = 1; /*0x4c036a*/
  return result; /*0x4c0367*/

}
}  // G42.18c ns repair
// 0x4C0750
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawDashedLineStipple(int * a2, int * a3, int16_t a4, int a5, int a6, char a7)
{

  int v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  unsigned short *v18; // esi
  unsigned int *v19; // edx
  int v20; // ecx
  unsigned short *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  unsigned int *v26; // edx
  int v27; // ecx
  unsigned short *v28; // edi
  unsigned short *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // edi
  int v36; // esi
  unsigned int *v37; // ecx
  int v38; // edx
  unsigned short *v39; // eax
  int v40; // edx
  int v41; // esi
  unsigned int *v42; // edx
  int v43; // ebx
  unsigned short *v44; // ecx
  int *v45; // eax
  int v46; // ebx
  int v47; // ebx
  unsigned short *v48; // esi
  unsigned int *v49; // edx
  int v50; // ecx
  unsigned short *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  unsigned int *v56; // edx
  int v57; // ecx
  unsigned short *v58; // edi
  unsigned short *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  int v65; // edi
  int v66; // esi
  unsigned int *v67; // ecx
  int v68; // edx
  unsigned short *v69; // eax
  int v70; // edx
  int v71; // esi
  unsigned int *v72; // edx
  unsigned short *v73; // ecx
  int *v74; // eax
  int v75; // ebx
  int v76; // [esp+10h] [ebp-20h]
  int v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int v87; // [esp+34h] [ebp+4h]
  int *v88; // [esp+38h] [ebp+8h]
  int v89; // [esp+48h] [ebp+18h]
  int v90; // [esp+48h] [ebp+18h]
  int v91; // [esp+48h] [ebp+18h]
  int v92; // [esp+48h] [ebp+18h]
  int v93; // [esp+48h] [ebp+18h]
  int v94; // [esp+48h] [ebp+18h]

  v7 = *a2; /*0x4c075a*/
  v8 = a2[1]; /*0x4c075d*/
  v76 = 1; /*0x4c0768*/
  v9 = *a3; /*0x4c0770*/
  v10 = a3[1]; /*0x4c0772*/
  if ( (*((int (**)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( v7 > v9 ) /*0x4c078d*/
  {
    v12 = v7; /*0x4c078f*/
    v13 = v8; /*0x4c0791*/
    v7 = v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v13; /*0x4c079b*/
    v14 = v9; /*0x4c079d*/
    v9 = v12; /*0x4c079f*/
    v15 = abs32(v14 - v12); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = -1; /*0x4c07d3*/
  }
  v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
          *(int **)&stru_87E790.__pad_D8[60],
          v7,
          v8 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4));
  v87 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    v87 = -*(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c080b*/
  v88 = (int *)(*((int (**)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v7, v8); /*0x4c081c*/
  if ( v88 )
  {
    if ( a7 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = v88; /*0x4c0842*/
          v19 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0846*/
          v20 = a6; /*0x4c084c*/
          v21 = (unsigned short *)v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = v20 + (v20 < 0 ? 0x10 : 0);
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(unsigned char *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0882*/
            }
            if ( v87 <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                v21 = (unsigned short *)((char *)v21 + v19[8]); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
            {
              v21 = (unsigned short *)((char *)v21 - v19[8]); /*0x4c089a*/
            }
            ++v18; /*0x4c08ac*/
            v20 = v76 + v23; /*0x4c08af*/
            --v22; /*0x4c08b1*/
          }
          while ( v22 );
          a6 = v20; /*0x4c08b4*/
        }
        goto LABEL_155; /*0x4c08b8*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c08cb*/
          v24 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08dd*/
        else
          v24 = -(*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c08ee*/
          v27 = a6; /*0x4c08f4*/
          v28 = v88; /*0x4c08fc*/
          v89 = v25 + 1; /*0x4c0901*/
          v29 = (unsigned short *)v77; /*0x4c0905*/
          do
          {
            v30 = v27 + (v27 < 0 ? 0x10 : 0);
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(unsigned char *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0930*/
            }
            v28 = (unsigned short *)((char *)v28 + v24); /*0x4c0936*/
            v29 += v87; /*0x4c0938*/
            if ( v87 <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                v29 = (unsigned short *)((char *)v29 + v26[8]); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
            {
              v29 = (unsigned short *)((char *)v29 - v26[8]); /*0x4c0944*/
            }
            v27 = v76 + v30; /*0x4c0955*/
            --v89; /*0x4c095c*/
          }
          while ( v89 );
          a6 = v27; /*0x4c0962*/
        }
        goto LABEL_155; /*0x4c0966*/
      }
      v31 = v9 - v7; /*0x4c096f*/
      v32 = v10 - v8; /*0x4c0971*/
      v33 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0975*/
      v79 = v33; /*0x4c097a*/
      if ( v32 < 0 ) /*0x4c097e*/
        v79 = -v33; /*0x4c0982*/
      v85 = 2 * v31; /*0x4c098e*/
      v34 = abs32(v32); /*0x4c0992*/
      v81 = 2 * v34; /*0x4c0999*/
      if ( v31 > v34 )
      {
        v35 = 0; /*0x4c09a5*/
        v36 = 2 * v34 - v31; /*0x4c09a7*/
        v90 = 0; /*0x4c09a9*/
        if ( v31 > 0 )
        {
          v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c09b5*/
          v38 = a6; /*0x4c09bb*/
          v39 = (unsigned short *)v77; /*0x4c09bf*/
          do
          {
            v40 = v38 + (v38 < 0 ? 0x10 : 0);
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(unsigned char *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *((unsigned short *)v88 + v35) = a4; /*0x4c09eb*/
              v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              v88 = (int *)((char *)v88 + v79); /*0x4c0a08*/
              v39 += v87; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                v39 = (unsigned short *)((char *)v39 - v37[8]); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = v90; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( v87 <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                v39 = (unsigned short *)((char *)v39 + v37[8]); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
            {
              v39 = (unsigned short *)((char *)v39 - v37[8]); /*0x4c0a3a*/
            }
            ++v35; /*0x4c0a50*/
            v38 = v76 + v40; /*0x4c0a51*/
            v90 = v35; /*0x4c0a55*/
          }
          while ( v35 < v31 );
          a6 = v38; /*0x4c0a5f*/
        }
        goto LABEL_155; /*0x4c0a63*/
      }
      v41 = 2 * v31 - v34; /*0x4c0a68*/
      if ( v34 > 0 )
      {
        v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0a72*/
        v43 = a6; /*0x4c0a78*/
        v44 = (unsigned short *)v77; /*0x4c0a7c*/
        v83 = v34; /*0x4c0a84*/
        v45 = v88; /*0x4c0a88*/
        v91 = 0; /*0x4c0a8c*/
        do
        {
          v46 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(unsigned char *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(unsigned short *)((char *)v45 + v91) = a4; /*0x4c0abc*/
            v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            v91 += 2; /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
              v44 = (unsigned short *)((char *)v44 - v42[8]); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += v87; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
          if ( v87 <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
              v44 = (unsigned short *)((char *)v44 + v42[8]); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
          {
            v44 = (unsigned short *)((char *)v44 - v42[8]); /*0x4c0afe*/
          }
          v43 = v76 + v46; /*0x4c0b0f*/
          --v83; /*0x4c0b16*/
        }
        while ( v83 );
LABEL_154:
        a6 = v43; /*0x4c0e13*/
      }
    }
    else
    {
      if ( v8 == v10 )
      {
        v47 = v9 - v7; /*0x4c0b2d*/
        if ( v47 >= 0 )
        {
          v48 = v88; /*0x4c0b35*/
          v49 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0b39*/
          v50 = a6; /*0x4c0b3f*/
          v51 = (unsigned short *)v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = v50 + (v50 < 0 ? 0x10 : 0);
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(unsigned char *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0b75*/
            }
            if ( v87 <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                v51 = (unsigned short *)((char *)v51 + v49[8]); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
            {
              v51 = (unsigned short *)((char *)v51 - v49[8]); /*0x4c0b8d*/
            }
            ++v48; /*0x4c0b9f*/
            v50 = v76 + v53; /*0x4c0ba2*/
            --v52; /*0x4c0ba4*/
          }
          while ( v52 );
          a6 = v50; /*0x4c0ba7*/
        }
        goto LABEL_155; /*0x4c0bab*/
      }
      if ( v7 == v9 )
      {
        if ( v8 <= v10 ) /*0x4c0bbe*/
          v54 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bd0*/
        else
          v54 = -(*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0be1*/
          v57 = a6; /*0x4c0be7*/
          v58 = v88; /*0x4c0bef*/
          v92 = v55 + 1; /*0x4c0bf4*/
          v59 = (unsigned short *)v77; /*0x4c0bf8*/
          do
          {
            v60 = v57 + (v57 < 0 ? 0x10 : 0);
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(unsigned char *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0c23*/
            }
            v58 = (unsigned short *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += v87; /*0x4c0c2b*/
            if ( v87 <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                v59 = (unsigned short *)((char *)v59 + v56[8]); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
            {
              v59 = (unsigned short *)((char *)v59 - v56[8]); /*0x4c0c37*/
            }
            v57 = v76 + v60; /*0x4c0c48*/
            --v92; /*0x4c0c4f*/
          }
          while ( v92 );
          a6 = v57; /*0x4c0c55*/
        }
        goto LABEL_155; /*0x4c0c59*/
      }
      v61 = v9 - v7; /*0x4c0c62*/
      v62 = v10 - v8; /*0x4c0c64*/
      v63 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0c68*/
      v80 = v63; /*0x4c0c6d*/
      if ( v62 < 0 ) /*0x4c0c71*/
        v80 = -v63; /*0x4c0c75*/
      v86 = 2 * v61; /*0x4c0c81*/
      v64 = abs32(v62); /*0x4c0c85*/
      v84 = 2 * v64; /*0x4c0c8c*/
      if ( v61 > v64 )
      {
        v65 = 0; /*0x4c0c98*/
        v66 = 2 * v64 - v61; /*0x4c0c9a*/
        v93 = 0; /*0x4c0c9c*/
        if ( v61 > 0 )
        {
          v67 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ca8*/
          v68 = a6; /*0x4c0cae*/
          v69 = (unsigned short *)v77; /*0x4c0cb2*/
          do
          {
            v70 = v68 + (v68 < 0 ? 0x10 : 0);
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(unsigned char *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *((unsigned short *)v88 + v65) = a4; /*0x4c0cde*/
              v67 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              v88 = (int *)((char *)v88 + v80); /*0x4c0cfb*/
              v69 += v87; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                v69 = (unsigned short *)((char *)v69 - v67[8]); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = v93; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( v87 <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                v69 = (unsigned short *)((char *)v69 + v67[8]); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
            {
              v69 = (unsigned short *)((char *)v69 - v67[8]); /*0x4c0d2d*/
            }
            ++v65; /*0x4c0d43*/
            v68 = v76 + v70; /*0x4c0d44*/
            v93 = v65; /*0x4c0d48*/
          }
          while ( v65 < v61 );
          a6 = v68; /*0x4c0d52*/
        }
        goto LABEL_155; /*0x4c0d56*/
      }
      v71 = 2 * v61 - v64; /*0x4c0d5b*/
      if ( v64 > 0 )
      {
        v72 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0d65*/
        v43 = a6; /*0x4c0d6b*/
        v73 = (unsigned short *)v77; /*0x4c0d6f*/
        v82 = v64; /*0x4c0d77*/
        v74 = v88; /*0x4c0d7b*/
        v94 = 0; /*0x4c0d7f*/
        do
        {
          v75 = v43 + (v43 < 0 ? 0x10 : 0);
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(unsigned char *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(unsigned short *)((char *)v74 + v94) = a4; /*0x4c0daf*/
            v72 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            v94 += 2; /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
              v73 = (unsigned short *)((char *)v73 - v72[8]); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += v87; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
          if ( v87 <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
              v73 = (unsigned short *)((char *)v73 + v72[8]); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
          {
            v73 = (unsigned short *)((char *)v73 - v72[8]); /*0x4c0df1*/
          }
          v43 = v76 + v75; /*0x4c0e02*/
          --v82; /*0x4c0e09*/
        }
        while ( v82 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
LABEL_155:
    (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/

}
}  // G42.18c ns repair
// 0x4C0E30
namespace gamemd {  // G42.18c ns repair
MouseClass * * DSurface::DrawStippledRect(unsigned int * a2, unsigned int * a3, int16_t a4, char a5)
{

  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned short *v13; // esi
  int v14; // edx
  int16_t *v15; // ecx
  unsigned int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int16_t *v19; // ebp
  int v20; // edx
  unsigned int *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  unsigned int *v29; // eax
  int16_t *v30; // edi
  int v31; // edx
  unsigned int *v32; // ecx
  int16_t *v33; // eax
  int v34; // edi
  int v35; // edx
  int16_t *v36; // ecx
  unsigned int *v37; // eax
  int v38; // ecx
  int v39; // eax
  int16_t *v40; // ebp
  int v41; // edx
  unsigned int *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  unsigned int *v50; // eax
  int16_t *v51; // edi
  int v53; // edx
  unsigned int *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  unsigned int v62[4]; // [esp+18h] [ebp-30h] BYREF
  int v63; // [esp+28h] [ebp-20h] BYREF
  int v64; // [esp+2Ch] [ebp-1Ch]
  int v65; // [esp+30h] [ebp-18h] BYREF
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int v71; // [esp+4Ch] [ebp+4h]
  int16_t *v72; // [esp+50h] [ebp+8h]
  int v73; // [esp+58h] [ebp+10h]
  int v74; // [esp+58h] [ebp+10h]

  if ( (*((int (**)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*((int (**)(DSurface *, unsigned int *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
  v67 = *v6; /*0x4c0e5a*/
  v68 = v6[1]; /*0x4c0e61*/
  v69 = v6[2]; /*0x4c0e68*/
  v70 = v6[3]; /*0x4c0e73*/
  v7 = v68 + a2[1]; /*0x4c0e7e*/
  v63 = v67 + *a2; /*0x4c0e80*/
  v64 = v7; /*0x4c0e84*/
  v8 = v67 + *a3; /*0x4c0e93*/
  v66 = v68 + a3[1]; /*0x4c0e95*/
  v65 = v8; /*0x4c0ea6*/
  if ( !(uint8_t)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( v63 <= v65 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v10 = v64; /*0x4c0ec3*/
    v11 = v63; /*0x4c0ec7*/
    v9 = v65; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = v65; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    v65 = v11; /*0x4c0ed7*/
    v66 = v10; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (unsigned short *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                   *(int **)&stru_87E790.__pad_D8[60],
                   v9,
                   v12 - *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 4));
  v71 = *(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    v71 = -*(unsigned int *)(*(unsigned int *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
  v72 = (int16_t *)(*((int (**)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
  if ( !v72 ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( a5 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = v72; /*0x4c0f61*/
        v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
          }
          if ( v71 <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
              v13 = (unsigned short *)((char *)v13 + v16[8]); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
          {
            v13 = (unsigned short *)((char *)v13 - v16[8]); /*0x4c0f8e*/
          }
          ++v14; /*0x4c0fa4*/
          ++v15; /*0x4c0fa9*/
        }
        while ( v14 <= v65 - v63 ); /*0x4c0fae*/
      }
    }
    else if ( v63 == v65 ) /*0x4c0fcf*/
    {
      if ( v64 <= v66 ) /*0x4c0fd7*/
        v17 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
      else
        v17 = -(*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = v72; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
          }
          v13 += v71; /*0x4c102b*/
          if ( v71 <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
              v13 = (unsigned short *)((char *)v13 + v21[8]); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
          {
            v13 = (unsigned short *)((char *)v13 - v21[8]); /*0x4c1035*/
          }
          v19 = (int16_t *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = v65 - v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
      v73 = v24; /*0x4c106e*/
      if ( v23 < 0 ) /*0x4c1072*/
        v73 = -v24; /*0x4c1076*/
      v25 = abs32(v23); /*0x4c107f*/
      v62[0] = 2 * v22; /*0x4c1086*/
      v26 = 2 * v25; /*0x4c108a*/
      v56 = 2 * v25; /*0x4c108d*/
      if ( v22 <= v25 ) /*0x4c1091*/
      {
        v31 = 2 * v22 - v25; /*0x4c1126*/
        if ( v25 > 0 ) /*0x4c112a*/
        {
          v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = v72; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              v33[v34] = a4; /*0x4c1155*/
              v32 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              ++v34; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c1172*/
            }
            v13 += v71; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 = (int16_t *)((char *)v33 + v73); /*0x4c1182*/
            if ( v71 <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                v13 = (unsigned short *)((char *)v13 + v32[8]); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
            {
              v13 = (unsigned short *)((char *)v13 - v32[8]); /*0x4c118d*/
            }
            if ( !--v58 ) /*0x4c11a3*/
              break; /*0x4c11a3*/
            v26 = v56; /*0x4c1146*/
          }
        }
      }
      else
      {
        v27 = 0; /*0x4c1099*/
        v28 = v26 - v22; /*0x4c109b*/
        if ( v22 > 0 ) /*0x4c109f*/
        {
          v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
          v30 = v72; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              v30[v27] = a4; /*0x4c10b9*/
              v29 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 = (int16_t *)((char *)v30 + v73); /*0x4c10ca*/
              v13 += v71; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( v71 <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                v13 = (unsigned short *)((char *)v13 + v29[8]); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
            {
              v13 = (unsigned short *)((char *)v13 - v29[8]); /*0x4c10f4*/
            }
            v28 += v56; /*0x4c110a*/
            ++v27; /*0x4c110c*/
          }
          while ( v27 < v22 ); /*0x4c110f*/
        }
      }
    }
  }
  else if ( v64 == v66 ) /*0x4c11bc*/
  {
    v35 = 0; /*0x4c11c6*/
    if ( v65 - v63 >= 0 ) /*0x4c11ca*/
    {
      v36 = v72; /*0x4c11d0*/
      v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
        }
        if ( v71 <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
            v13 = (unsigned short *)((char *)v13 + v37[8]); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
        {
          v13 = (unsigned short *)((char *)v13 - v37[8]); /*0x4c11fd*/
        }
        ++v35; /*0x4c1213*/
        ++v36; /*0x4c1218*/
      }
      while ( v35 <= v65 - v63 ); /*0x4c121d*/
    }
  }
  else if ( v63 == v65 ) /*0x4c123e*/
  {
    if ( v64 <= v66 ) /*0x4c1246*/
      v38 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
    else
      v38 = -(*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = v72; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
        }
        v13 += v71; /*0x4c129a*/
        if ( v71 <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
            v13 = (unsigned short *)((char *)v13 + v42[8]); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
        {
          v13 = (unsigned short *)((char *)v13 - v42[8]); /*0x4c12a4*/
        }
        v40 = (int16_t *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = v65 - v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*((int (**)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
    v46 = v45; /*0x4c12dc*/
    v59 = v45; /*0x4c12e0*/
    if ( v44 < 0 ) /*0x4c12e4*/
    {
      v46 = -v45; /*0x4c12e6*/
      v59 = -v45; /*0x4c12e8*/
    }
    v47 = abs32(v44); /*0x4c12f1*/
    v57 = 2 * v43; /*0x4c12f8*/
    v74 = 2 * v47; /*0x4c12ff*/
    if ( v43 <= v47 ) /*0x4c1303*/
    {
      v53 = 2 * v43 - v47; /*0x4c1395*/
      if ( v47 > 0 ) /*0x4c1399*/
      {
        v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            v72[v55] = a4; /*0x4c13b5*/
            v54 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= v74; /*0x4c13ca*/
            ++v55; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
              v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          v72 = (int16_t *)((char *)v72 + v46); /*0x4c13e5*/
          v13 += v71; /*0x4c13ef*/
          if ( v71 <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
              v13 = (unsigned short *)((char *)v13 + v54[8]); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
          {
            v13 = (unsigned short *)((char *)v13 - v54[8]); /*0x4c13f9*/
          }
          --v60; /*0x4c140b*/
        }
        while ( v60 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
        v51 = v72; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            v51[v49] = a4; /*0x4c1329*/
            v50 = *(unsigned int **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 = (int16_t *)((char *)v51 + v59); /*0x4c133a*/
            v13 += v71; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
              v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( v71 <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
              v13 = (unsigned short *)((char *)v13 + v50[8]); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
          {
            v13 = (unsigned short *)((char *)v13 - v50[8]); /*0x4c1363*/
          }
          v48 += v74; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*((void (**)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/

}
}  // G42.18c ns repair
// 0x4C1AC0
namespace gamemd {  // G42.18c ns repair
void * DSurface::loc_4C1AC0(unsigned char a1)
{
    /* disasm-true body 0x4C1AC0-0x4C1B42 (dtor free_self, retn 4) */
    unsigned char keepClipper = this->q018;                    /*0x4c1ac3*/
    *(void **)this = (void *)&DSurface_Vtable;                 /*0x4c1ac6*/
    if ( keepClipper && this->u32_1C && g_DDraw_Clipper )      /*0x4c1acc*/
    {
        g_DDraw_Clipper->lpVtbl->SetHWnd(                      /*0x4c1ae6*/
            (struct IDirectDrawClipper *)g_DDraw_Clipper, 0,
            (struct HWND *)this->u32_1C);
        g_DDraw_Clipper->lpVtbl->Release(g_DDraw_Clipper);     /*0x4c1af1*/
        g_DDraw_Clipper = 0;                                   /*0x4c1af4*/
    }
    RA2_OPDEL((void *)this->q020);                             /*0x4c1b02*/
    if ( this->u32_1C )                                        /*0x4c1b07*/
    {
        /* COM Release on the surface holder at +0x1C */
        IDirectDrawSurface7 *s = (IDirectDrawSurface7 *)this->u32_1C;
        s->lpVtbl->Release(s);                                 /*0x4c1b1b*/
    }
    this->q020 = 0;                                            /*0x4c1b0f*/
    this->u32_1C = 0;                                          /*0x4c1b22*/
    *(void **)this = (void *)&Surface_Vtable;                  /*0x4c1b2b*/
    if ( a1 & 1 )                                              /*0x4c1b29*/
        RA2_OPDEL(this);                                       /*0x4c1b34*/
    return this;                                               /*0x4c1b3c*/
}
}  // G42.18c ns repair

// 0x5D1E70
namespace gamemd {  // G42.18c ns repair
ObjectClass * *  DSurface::RenderToSurface(int *aP1)
{

  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int i; // ebp
  int v12; // ecx
  int *v13; // eax
  int result; // eax
  int j; // ebp
  int v16; // ecx
  void (***v17)(unsigned int, int); // ecx
  int DSurface_field_0x28; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  int v24; // [esp+48h] [ebp-14h]
  unsigned char v25[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( g_LoadScreenFlag == 1 ) /*0x5d1e83*/
  {
    g_LoadScreenFlag = 0; /*0x5d1e89*/
    (*(void (**)(int *, unsigned int))(*aP1 + 24))(aP1, 0); /*0x5d1e96*/
    v3 = (int *)(*(int (**)(DSurface *, unsigned char *))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1ea6*/
                  DSurface_Alternate,
                  v25);
    v21 = *v3; /*0x5d1eab*/
    v22 = v3[1]; /*0x5d1eb2*/
    v23 = v3[2]; /*0x5d1eb9*/
    v4 = v3[3]; /*0x5d1ebf*/
    v5 = *aP1; /*0x5d1ec2*/
    v24 = v4; /*0x5d1ec4*/
    v6 = (*(int (**)(int *))(v5 + 124))(aP1); /*0x5d1ec8*/
    v7 = *aP1; /*0x5d1ed6*/
    v21 = (v6 - v23) / 2; /*0x5d1eda*/
    v8 = (*(int (**)(int *))(v7 + 128))(aP1); /*0x5d1ede*/
    v9 = *aP1; /*0x5d1ee8*/
    v22 = (v8 - v24) / 2; /*0x5d1ef9*/
    v10 = (*(int (**)(unsigned char *, DSurface *, int *, unsigned int, int))(DSurface_Alternate->DSurface_field_0x0 + 120))( /*0x5d1f0c*/
            v25,
            DSurface_Alternate,
            &v21,
            0,
            1);
    (*(void (**)(int *, int))(v9 + 8))(aP1, v10); /*0x5d1f12*/
    for ( i = 0; i < this->DSurface_field_0x28; ++i ) /*0x5d1f1c*/
    {
      v12 = *(unsigned int *)(this->DSurface_field_0x1C + 4 * i); /*0x5d1f24*/
      (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v12 + 20))(v12, aP1, 0); /*0x5d1f29*/
    }
    this->DSurface_field_0x4 = 0; /*0x5d1f38*/
    v13 = (int *)(*(int (**)(int *, unsigned char *))(*aP1 + 120))(aP1, v25); /*0x5d1f44*/
    ((Surface *)((XSurface *)this))->CopyRect(v13); /*0x5d1f4a*/
    (*(void (**)(DSurface *, int *))(this->DSurface_field_0x0 + 4))(this, aP1); /*0x5d1f54*/
  }
  result = this->DSurface_field_0x28; /*0x5d1f57*/
  for ( j = 0; j < result; ++j ) /*0x5d1f5e*/
  {
    v16 = *(unsigned int *)(this->DSurface_field_0x1C + 4 * j); /*0x5d1f63*/
    if ( (*(uint8_t (**)(int, int *, int *))(*(unsigned int *)v16 + 16))(v16, aP1, &v21) == 1 ) /*0x5d1f73*/
    {
      v17 = *(void (****)(unsigned int, int))(this->DSurface_field_0x1C + 4 * j); /*0x5d1f78*/
      if ( v17 ) /*0x5d1f7d*/
        (**v17)(v17, 1); /*0x5d1f83*/
      DSurface_field_0x28 = this->DSurface_field_0x28; /*0x5d1f85*/
      if ( j < DSurface_field_0x28 ) /*0x5d1f8a*/
      {
        v19 = DSurface_field_0x28 - 1; /*0x5d1f8c*/
        v20 = j; /*0x5d1f8f*/
        for ( this->DSurface_field_0x28 = v19; /*0x5d1f96*/
              v20 < this->DSurface_field_0x28;
              *(unsigned int *)(this->DSurface_field_0x1C + 4 * v20 - 4) = *(unsigned int *)(this->DSurface_field_0x1C + 4 * v20) )
        {
          ++v20; /*0x5d1f9b*/
        }
      }
    }
    ((Surface *)((XSurface *)this))->CopyRect(&v21); /*0x5d1fb1*/
    result = this->DSurface_field_0x28; /*0x5d1fb6*/
  }
  return result; /*0x5d1fbe*/

}
}  // G42.18c ns repair
// 0x621B80
namespace gamemd {  // G42.18c ns repair
int  DSurface::FillRectWithColor(int * a0, ObjectClass * aP1, int16_t a3, uint8_t a4)
{

  int *v4; // esi
  int v5; // ebp
  int result; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  unsigned short *v13; // eax
  int v14; // ecx
  int16_t v15; // bx
  int16_t v16; // si
  int16_t v17; // bp
  unsigned int v18; // ecx
  int v19; // edx
  unsigned short *v20; // [esp+Ch] [ebp-28h]
  int v21; // [esp+10h] [ebp-24h]
  int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+20h] [ebp-14h]
  int v27; // [esp+30h] [ebp-4h]

  v4 = a0; /*0x621b85*/
  v5 = aP1; /*0x621b87*/
  result = (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)aP1 + 92))(aP1, 0, 0); /*0x621b9c*/
  v25 = result; /*0x621ba1*/
  if ( result ) /*0x621ba5*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)v5 + 116))(v5); /*0x621bb2*/
    v8 = v4[1]; /*0x621bb5*/
    v23 = v8; /*0x621bc2*/
    v9 = v7 / 2; /*0x621bc6*/
    v27 = v9; /*0x621bca*/
    if ( v8 < v4[3] + v8 ) /*0x621bce*/
    {
      v10 = v9 * v8; /*0x621bd6*/
      v24 = v9 * v8; /*0x621bd9*/
      do /*0x621d11*/
      {
        v21 = *v4; /*0x621be4*/
        v11 = v10 + *v4; /*0x621bea*/
        if ( *v4 >= *v4 + v4[2] ) /*0x621bed*/
        {
          v5 = aP1; /*0x621cf4*/
        }
        else
        {
          v12 = a4; /*0x621bff*/
          v13 = (unsigned short *)(v25 + 2 * v11); /*0x621c0a*/
          v14 = 255 - a4; /*0x621c0d*/
          v15 = a3; /*0x621c0f*/
          v20 = v13; /*0x621c21*/
          while ( 1 ) /*0x621c2f*/
          {
            v16 = *v13; /*0x621c2f*/
            g_GameScreenConfig = v14; /*0x621c32*/
            v17 = g_ScreenSaverState /*0x621c6d*/
                & ((v14 * (uint16_t)(v16 & g_ScreenSaverState)
                  + v12 * (unsigned int)(uint16_t)(v15 & g_ScreenSaverState)) >> 8);
            v18 = v14 * (uint16_t)(HIWORD(g_ScreenSaverState) & v16) /*0x621c8a*/
                + v12 * (uint16_t)(HIWORD(g_ScreenSaverState) & a3);
            v15 = a3; /*0x621c8c*/
            g_GameScreenFlags = v12; /*0x621ca0*/
            v19 = g_GameScreenConfig * (uint16_t)(v16 & g_CreditsScreenState); /*0x621cb1*/
            v4 = a0; /*0x621cb8*/
            v13 = v20 + 1; /*0x621cbe*/
            *v20++ = ((v19 + v12 * (unsigned int)(uint16_t)(a3 & g_CreditsScreenState)) >> 8) /*0x621cca*/
                   | HIWORD(g_ScreenSaverState) & (v18 >> 8)
                   | v17;
            if ( ++v21 >= a0[2] + *a0 ) /*0x621ce0*/
              break; /*0x621ce0*/
            v12 = a4; /*0x621c27*/
            v14 = 255 - a4; /*0x621c2b*/
          }
          v5 = aP1; /*0x621ce6*/
          v8 = v23; /*0x621cea*/
          v10 = v24; /*0x621cee*/
        }
        v10 += v27; /*0x621cff*/
        v23 = ++v8; /*0x621d09*/
        v24 = v10; /*0x621d0d*/
      }
      while ( v8 < v4[3] + v4[1] ); /*0x621d11*/
    }
    return (*(int (**)(int))(*(unsigned int *)v5 + 96))(v5); /*0x621d1c*/
  }
  return result; /*0x621d21*/

}
}  // G42.18c ns repair
// 0x7BD210
namespace gamemd {  // G42.18c ns repair
int DSurface::LockAndPrepareRect()
{

  int v2; // eax
  int result; // eax

  if ( (*((unsigned char *)this + 1980) & 0x40) != 0 ) /*0x7bd21a*/
  {
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[44])(this, 7, 0, 0); /*0x7bd223*/
    v2 = *((unsigned int *)this + 495); /*0x7bd226*/
    LOBYTE(v2) = v2 & 0xBF; /*0x7bd22f*/
    *((unsigned int *)this + 495) = v2; /*0x7bd231*/
  }
  (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[44])(this, 3, 0, 0); /*0x7bd23e*/
  result = *((unsigned int *)this + 495); /*0x7bd241*/
  if ( (result & 0x80000000) == 1 ) /*0x7bd255*/
  {
    result &= ~0x80000000; /*0x7bd257*/
    *((unsigned int *)this + 495) = result; /*0x7bd25c*/
  }
  return result; /*0x7bd262*/

}
}  // G42.18c ns repair
// 0x7BDF80
namespace gamemd {  // G42.18c ns repair
int DSurface::CommitBuffers()
{

  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int i; // edi
  int v11; // ebp
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int j; // ebx
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int *v25; // ebp
  int v26; // ebx
  int v27; // edi
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // ebx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int result; // eax
  int v41; // [esp+4h] [ebp-10h]
  int v42; // [esp+4h] [ebp-10h]
  int v43; // [esp+8h] [ebp-Ch]
  int v44; // [esp+8h] [ebp-Ch]
  int v45; // [esp+Ch] [ebp-8h]
  int v46; // [esp+Ch] [ebp-8h]
  int v47; // [esp+10h] [ebp-4h]
  int v48; // [esp+10h] [ebp-4h]

  v2 = *((unsigned int *)this + 445); /*0x7bdf86*/
  if ( v2 ) /*0x7bdf8e*/
  {
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 5, v2, *((unsigned int *)this + 446)); /*0x7bdf9b*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 445), 0); /*0x7bdfaa*/
  }
  v3 = *((unsigned int *)this + 473); /*0x7bdfb0*/
  if ( v3 ) /*0x7bdfb8*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7bdfcb*/
      this,
      5,
      v3,
      4 * *(uint16_t *)&this->__pad_2C[192]);
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 473), 0); /*0x7bdfda*/
  }
  if ( !*(unsigned int *)&this->__pad_2C[104] ) /*0x7bdfe0*/
  {
    v4 = *((unsigned int *)this + 483); /*0x7bdfea*/
    if ( v4 ) /*0x7bdff2*/
    {
      (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7bdfff*/
        this,
        5,
        v4,
        *(unsigned int *)&this->__pad_2C[108]);
      (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 483), 0); /*0x7be00e*/
    }
  }
  v5 = *((unsigned int *)this + 485); /*0x7be014*/
  if ( v5 ) /*0x7be01c*/
  {
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 5, v5, *((unsigned int *)this + 487)); /*0x7be029*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 485), 0); /*0x7be038*/
  }
  v6 = *((unsigned int *)this + 486); /*0x7be03e*/
  if ( v6 ) /*0x7be046*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v6, 2 * *((unsigned int *)this + 487)); /*0x7be055*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 486), 0); /*0x7be064*/
  }
  v7 = *((unsigned int *)this + 490); /*0x7be06a*/
  if ( v7 ) /*0x7be072*/
  {
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 5, v7, *((unsigned int *)this + 493)); /*0x7be07f*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 490), 0); /*0x7be08e*/
  }
  v8 = *((unsigned int *)this + 494); /*0x7be094*/
  if ( v8 ) /*0x7be09c*/
  {
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be0a9*/
      this,
      5,
      v8,
      *(unsigned int *)&this->__pad_2C[112]);
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 494), 0); /*0x7be0b8*/
  }
  v9 = 0; /*0x7be0c6*/
  for ( i = *((unsigned int *)this + 441); v9 < *(unsigned int *)&this->__pad_2C[92]; i = v11 ) /*0x7be0d1*/
  {
    if ( !i ) /*0x7be0d5*/
      break; /*0x7be0d5*/
    v11 = *(unsigned int *)(i + 12); /*0x7be0e3*/
    v12 = *((unsigned int *)this + 475) + 4; /*0x7be0eb*/
    v13 = *((unsigned int *)this + 476) + 4; /*0x7be0ed*/
    *((unsigned int *)this + 476) = v13; /*0x7be0f1*/
    *((unsigned int *)this + 475) = v12; /*0x7be0f7*/
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, i, v12 + v13 + 44); /*0x7be106*/
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 3, i, 0); /*0x7be10f*/
    ++v9; /*0x7be11b*/
  }
  if ( (this->__pad_11F[53] & 2) != 0 ) /*0x7be129*/
  {
    v14 = *((unsigned int *)this + 442); /*0x7be12b*/
    if ( v14 ) /*0x7be133*/
    {
      (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 5, v14, *((unsigned int *)this + 478)); /*0x7be140*/
      (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 442), 0); /*0x7be14f*/
      *((unsigned int *)this + 442) = 0; /*0x7be155*/
    }
  }
  v15 = *((unsigned int *)this + 443); /*0x7be165*/
  for ( j = 0; j < *(unsigned int *)&this->__pad_2C[96]; v15 = v17 ) /*0x7be16f*/
  {
    if ( !v15 ) /*0x7be173*/
      break; /*0x7be173*/
    v17 = *(unsigned int *)(v15 + 4); /*0x7be17b*/
    v18 = *((unsigned int *)this + 474) + 4; /*0x7be17e*/
    *((unsigned int *)this + 474) = v18; /*0x7be183*/
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v15, v18 + 24); /*0x7be191*/
    (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 3, v15, 0); /*0x7be19a*/
    ++j; /*0x7be1a6*/
  }
  if ( (this->__pad_11F[53] & 1) != 0 ) /*0x7be1b4*/
  {
    v19 = *((unsigned int *)this + 444); /*0x7be1b6*/
    if ( v19 ) /*0x7be1be*/
    {
      (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 5, v19, *((unsigned int *)this + 477)); /*0x7be1cb*/
      (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 444), 0); /*0x7be1da*/
      *((unsigned int *)this + 444) = 0; /*0x7be1e0*/
    }
  }
  v20 = *((unsigned int *)this + 472); /*0x7be1ea*/
  if ( v20 ) /*0x7be1f2*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be204*/
      this,
      5,
      v20,
      2 * *((uint16_t *)this + 940));
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 472), 0); /*0x7be213*/
  }
  v21 = *((unsigned int *)this + 469); /*0x7be219*/
  if ( v21 ) /*0x7be221*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be236*/
      this,
      5,
      v21,
      6 * *((uint16_t *)this + 934));
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 469), 0); /*0x7be245*/
  }
  v22 = *((unsigned int *)this + 463); /*0x7be24b*/
  v47 = v22; /*0x7be253*/
  if ( v22 ) /*0x7be257*/
  {
    v23 = 0; /*0x7be25d*/
    v41 = 0; /*0x7be25f*/
    v43 = 0; /*0x7be267*/
    v45 = *((unsigned int *)this + 463); /*0x7be26b*/
    do /*0x7be2e9*/
    {
      v24 = (int *)(*((unsigned int *)this + 466) + v23); /*0x7be275*/
      v25 = (int *)v24[2]; /*0x7be277*/
      v26 = *v24; /*0x7be27a*/
      v27 = *v25; /*0x7be27c*/
      if ( *v25 ) /*0x7be27c*/
      {
        (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be29d*/
          this,
          5,
          v27,
          v26 * ((*(unsigned int *)(*((unsigned int *)this + 465) + v41 + 4) + 1) & 0xFFFFFFFE));
        (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 3, v27, 0); /*0x7be2a6*/
      }
      if ( v25 ) /*0x7be2ae*/
      {
        (*(void (**)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v25, 12 * v26); /*0x7be2bb*/
        (*(void (**)(DSurface *, int, int *, unsigned int))&this->__pad_2C[24])(this, 3, v25, 0); /*0x7be2c4*/
      }
      v23 = v43 + 12; /*0x7be2d6*/
      v28 = v45 == 1; /*0x7be2dc*/
      v43 += 12; /*0x7be2dd*/
      v41 += 16; /*0x7be2e1*/
      --v45; /*0x7be2e5*/
    }
    while ( !v28 ); /*0x7be2e9*/
    v22 = v47; /*0x7be2eb*/
  }
  v29 = *((unsigned int *)this + 466); /*0x7be2ef*/
  if ( v29 ) /*0x7be2f7*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v29, 12 * v22); /*0x7be304*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 466), 0); /*0x7be313*/
  }
  v30 = *((unsigned int *)this + 465); /*0x7be319*/
  if ( v30 ) /*0x7be321*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v30, 16 * v22); /*0x7be32b*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 465), 0); /*0x7be33a*/
  }
  v31 = *((unsigned int *)this + 457); /*0x7be340*/
  v48 = v31; /*0x7be348*/
  if ( v31 ) /*0x7be34c*/
  {
    v32 = 0; /*0x7be352*/
    v42 = 0; /*0x7be354*/
    v46 = 0; /*0x7be35c*/
    v44 = *((unsigned int *)this + 457); /*0x7be360*/
    do /*0x7be3de*/
    {
      v33 = (int *)(*((unsigned int *)this + 462) + v32); /*0x7be36a*/
      v34 = (int *)v33[2]; /*0x7be36c*/
      v35 = *v33; /*0x7be36f*/
      v36 = *v34; /*0x7be371*/
      if ( *v34 ) /*0x7be371*/
      {
        (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])( /*0x7be392*/
          this,
          5,
          v36,
          v35 * ((*(unsigned int *)(*((unsigned int *)this + 461) + v42 + 8) + 1) & 0xFFFFFFFE));
        (*(void (**)(DSurface *, int, int, unsigned int))&this->__pad_2C[24])(this, 3, v36, 0); /*0x7be39b*/
      }
      if ( v34 ) /*0x7be3a3*/
      {
        (*(void (**)(DSurface *, int, int *, int))&this->__pad_2C[24])(this, 5, v34, 12 * v35); /*0x7be3b0*/
        (*(void (**)(DSurface *, int, int *, unsigned int))&this->__pad_2C[24])(this, 3, v34, 0); /*0x7be3b9*/
      }
      v32 = v46 + 12; /*0x7be3cb*/
      v28 = v44 == 1; /*0x7be3d1*/
      v46 += 12; /*0x7be3d2*/
      v42 += 16; /*0x7be3d6*/
      --v44; /*0x7be3da*/
    }
    while ( !v28 ); /*0x7be3de*/
    v31 = v48; /*0x7be3e0*/
  }
  v37 = *((unsigned int *)this + 462); /*0x7be3e4*/
  if ( v37 ) /*0x7be3ec*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v37, 12 * v31); /*0x7be3f9*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 462), 0); /*0x7be408*/
  }
  v38 = *((unsigned int *)this + 461); /*0x7be40e*/
  if ( v38 ) /*0x7be416*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v38, 16 * v31); /*0x7be420*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 461), 0); /*0x7be42f*/
  }
  v39 = *((unsigned int *)this + 460); /*0x7be435*/
  if ( v39 ) /*0x7be440*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])(this, 5, v39, 24 * *((unsigned int *)this + 456)); /*0x7be453*/
    (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])(this, 3, *((unsigned int *)this + 460), 0); /*0x7be462*/
  }
  result = *((unsigned int *)this + 455); /*0x7be468*/
  if ( result ) /*0x7be470*/
  {
    (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7be483*/
      this,
      5,
      result,
      4 * *((uint16_t *)this + 906));
    return (*(int (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])( /*0x7be492*/
             this,
             3,
             *((unsigned int *)this + 455),
             0);
  }
  return result; /*0x7be498*/

}
}  // G42.18c ns repair
// 0x7C2C60
namespace gamemd {  // G42.18c ns repair
int DSurface::Flip()
{

  int v2; // eax

  if ( (this->__pad_2C[88] & 1) != 0 && (this->__pad_2C[190] & 3) != 0 ) /*0x7c2c73*/
  {
    DSurface::LockAndPrepareRect(this); /*0x7c2c75*/
    if ( (*((unsigned int *)this + 495) & 0x40000000) != 0 ) /*0x7c2c84*/
    {
      sub_412600(); /*0x7c2c86*/
      *((unsigned int *)this + 495) &= ~0x40000000u; /*0x7c2c8b*/
    }
  }
  if ( (this->__pad_11F[49] & 0x20) != 0 ) /*0x7c2c9c*/
  {
    v2 = *(unsigned int *)&this->__pad_11F[57]; /*0x7c2c9e*/
    if ( v2 ) /*0x7c2ca6*/
    {
      (*(void (**)(DSurface *, int, int, int))&this->__pad_2C[24])( /*0x7c2cba*/
        this,
        5,
        v2,
        *(unsigned int *)&this->__pad_11F[61] * *(unsigned int *)&this->__pad_11F[65]);
      (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[24])( /*0x7c2cc9*/
        this,
        3,
        *(unsigned int *)&this->__pad_11F[57],
        0);
    }
  }
  DSurface::CommitBuffers(this); /*0x7c2cd1*/
  (*(void (**)(DSurface *, int, unsigned int, unsigned int))&this->__pad_2C[20])(this, 4, 0, 0); /*0x7c2cdd*/
  (*(void (**)(DSurface *, int, DSurface *, int))&this->__pad_2C[24])(this, 5, this, 2012); /*0x7c2ce9*/
  return (*(int (**)(DSurface *, int, DSurface *, unsigned int))&this->__pad_2C[24])(this, 3, this, 0); /*0x7c2cf8*/

}
}  // G42.18c ns repair
// 0x4BA480
namespace gamemd {  // G42.18c ns repair
long long DSurface::ConstructFromHandle()
{

  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0928 - dbl_8A0970); /*0x4ba492*/
  result = Math::RoundToInt(v0 * dbl_8A0968 * 0.5); /*0x4ba4a6*/
  dword_8A0DC8 = result; /*0x4ba4ab*/
  return result; /*0x4ba4b0*/

}
}  // G42.18c ns repair
// 0x4BB080
namespace gamemd {  // G42.18c ns repair
int DSurface::BlitPart(int a2, int a3, int a4, int a5, int a6)
{

  int (**DSurface_field_0x0)(DSurface *, int); // ebx
  int v8; // eax
  int v9; // eax
  unsigned char v11[28]; // [esp+Ch] [ebp-20h] BYREF
  unsigned char v12[4]; // [esp+28h] [ebp-4h] BYREF

  DSurface_field_0x0 = (int (**)(DSurface *, int))this->DSurface_field_0x0; /*0x4bb098*/
  v8 = (*(int (**)(int, unsigned char *, int, int, int))(*(unsigned int *)a3 + 120))(a3, v11, a4, a5, a6); /*0x4bb0a6*/
  v9 = (*((int (**)(DSurface *, unsigned char *, int, int, int))this->DSurface_field_0x0 + 30))( /*0x4bb0b9*/
         this,
         v12,
         a5,
         a3,
         v8);
  return DSurface_field_0x0[3](this, v9); /*0x4bb0c2*/

}
}  // G42.18c ns repair
// 0x4C1AB0
namespace gamemd {  // G42.18c ns repair
char DSurface::IsDSurface()
{

  return 1; /*0x4c1ab2*/

}
}  // G42.18c ns repair
// 0x5D1E50
namespace gamemd {  // G42.18c ns repair
int DSurface::Flip2()
{

  g_LoadScreenFlag = 1; /*0x5d1e55*/
  return DSurface::RenderToSurface(g_DSurface_Hidden); /*0x5d1e62*/

}
}  // G42.18c ns repair
// 0x63D400
namespace gamemd {  // G42.18c ns repair
int DSurface::DrawMarker(AbstractClass * aP1, ObjectClass * aP2)
{

  int *Viewport; // eax
  int v6[4]; // [esp+8h] [ebp-30h] BYREF
  unsigned int v7[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned int v8[4]; // [esp+28h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v6); /*0x63d40b*/
  v8[0] = *Viewport; /*0x63d412*/
  v8[1] = Viewport[1]; /*0x63d41a*/
  v8[2] = Viewport[2]; /*0x63d421*/
  v8[3] = Viewport[3]; /*0x63d430*/
  v6[0] = aP1; /*0x63d434*/
  v7[2] = 6; /*0x63d442*/
  v7[0] = aP1 - 3; /*0x63d446*/
  v7[1] = aP2 - 3; /*0x63d458*/
  v7[3] = 6; /*0x63d45c*/
  return (*(int (**)(AudioStream *, unsigned int *, unsigned int *, DSurface *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63d46a*/
                                                                              + 84))(
           DSurface_Composite,
           v8,
           v7,
           this);

}
}  // G42.18c ns repair
// 0x759E60
char DSurface::FlipIfNeeded()
{

  char result; // al

  result = (char)this->DSurface_field_0x514; /*0x759e60*/
  if ( result ) /*0x759e68*/
    return ((DSurface *)((DSurface *)this->DSurface_field_0x200))->Flip(); /*0x759e70*/
  return result; /*0x759e75*/

}