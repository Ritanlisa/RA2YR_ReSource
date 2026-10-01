// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/BinkMovieHandle_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/BitTextClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/File_e4.hpp"

// 0x432AB0
namespace gamemd {
int BinkMovieHandle::RenderFrameClipped(int a2, int a3, void *a3_2)
{

  int *v3; // eax
  int v4; // ebp
  int v5; // esi
  int *v6; // edi
  int result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // esi
  int v16; // [esp+14h] [ebp-20h]
  int v18; // [esp+20h] [ebp-14h]
  unsigned char v19[16]; // [esp+24h] [ebp-10h] BYREF
  int v20; // [esp+3Ch] [ebp+8h]

  v3 = *(int **)((char *)this + 4); /*0x432ab3*/
  v4 = v3[1]; /*0x432ac3*/
  v5 = *v3; /*0x432ac7*/
  v6 = (int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 12) + 120))(*((unsigned int *)this + 3), v19); /*0x432ad8*/
  result = 0; /*0x432ade*/
  v8 = v6[2]; /*0x432ae0*/
  v9 = 0; /*0x432ae3*/
  v16 = a2; /*0x432ae7*/
  v18 = v4; /*0x432aef*/
  if ( v8 <= 0 ) /*0x432af3*/
    goto LABEL_18; /*0x432af3*/
  v20 = v6[3]; /*0x432afe*/
  if ( v20 <= 0 || v5 <= 0 || v4 <= 0 ) /*0x432b12*/
    goto LABEL_18; /*0x432b12*/
  v10 = *v6; /*0x432b18*/
  if ( a2 < *v6 ) /*0x432b20*/
  {
    v16 = *v6; /*0x432b24*/
    v5 = a2 + v5 - v10; /*0x432b28*/
  }
  if ( v5 < 1 ) /*0x432b33*/
    goto LABEL_18; /*0x432b33*/
  v11 = v6[1]; /*0x432b35*/
  if ( a3 < v11 ) /*0x432b42*/
  {
    v18 += a3 - v11; /*0x432b50*/
    a3 = v11; /*0x432b54*/
  }
  if ( v18 < 1 ) /*0x432b5d*/
    goto LABEL_18; /*0x432b5d*/
  if ( v5 + v16 > v8 + v10 ) /*0x432b6a*/
    v5 = v8 + v10 - v16; /*0x432b72*/
  if ( v5 < 1 ) /*0x432b77*/
    goto LABEL_18; /*0x432b77*/
  v12 = v18; /*0x432b81*/
  if ( v18 + a3 > v20 + v11 ) /*0x432b90*/
    v12 = v20 + v11 - a3; /*0x432b94*/
  if ( v12 < 1 ) /*0x432b99*/
  {
LABEL_18:
    v13 = 0; /*0x432ba7*/
    v14 = 0; /*0x432ba9*/
  }
  else
  {
    result = v16; /*0x432b9b*/
    v9 = a3; /*0x432b9f*/
    v13 = v5; /*0x432ba1*/
    v14 = v12; /*0x432ba3*/
  }
  *((unsigned int *)this + 4) = result; /*0x432bb2*/
  *((unsigned int *)this + 5) = v9; /*0x432bb4*/
  *((unsigned int *)this + 6) = v13; /*0x432bb7*/
  *((unsigned int *)this + 7) = v14; /*0x432bba*/
  return result; /*0x432bbd*/

}
} // namespace gamemd
// 0x433060
namespace gamemd {
void BinkMovieHandle::CopyFrameToSurface(void *a1)
{

  DSurface *width; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int currentFrame; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int height; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  width = (DSurface *)this->width; /*0x43306e*/
  if ( width == (gamemd::DSurface *)(g_DSurface_Primary) ) /*0x433073*/
  {
    GetClien    GetClientRect((HWND)(g_hWnd), &Rect); 
    ClientTo    ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); 
    v3 = Rect.left + this->height; /*0x4330a7*/
    v4 = Rect.top + this->currentFrame; /*0x4330ae*/
    width = (DSurface *)this->width; /*0x4330b0*/
    BinkMovi    BinkMovie::AdjustSurfaceFormat((gamemd::DSurface *)((BinkMovie *)this), (int)width); 
    v12 = (*((int (**)(DSurface *, unsigned int, unsigned int))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x4330c8*/
    if ( v12 ) /*0x4330cc*/
    {
      v10 = (*((int (**)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x4330dd*/
      v5 = (*((int (**)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x4330e1*/
      BinkCopyToBuffer(this->tempPath, v12, v10, v5, v3, v4, (int)this->renderTarget | 0x80000000); /*0x4330fe*/
LABEL_6:
      (*((void (**)(DSurface *))width->DSurface_field_0x0 + 24))(width); /*0x43315b*/
    }
  }
  else
  {
    currentFrame = this->currentFrame; /*0x433103*/
    height = this->height; /*0x433109*/
    BinkMovi    BinkMovie::AdjustSurfaceFormat((gamemd::DSurface *)((BinkMovie *)this), this->width); 
    v7 = (*((int (**)(DSurface *, unsigned int, unsigned int))width->DSurface_field_0x0 + 23))(width, 0, 0); /*0x43311f*/
    if ( v7 ) /*0x433123*/
    {
      v11 = (*((int (**)(DSurface *))width->DSurface_field_0x0 + 29))(width); /*0x433130*/
      v8 = (*((int (**)(DSurface *))width->DSurface_field_0x0 + 32))(width); /*0x433134*/
      BinkCopyToBuffer(this->tempPath, v7, v11, v8, height, currentFrame, (int)this->renderTarget | 0x80000000); /*0x433155*/
      goto LABEL_6; /*0x433155*/
    }
  }
  return Bin  return BinkMovie::BlitToTarget((gamemd::DSurface *)((BinkMovie *)this), (int)width); 

}
} // namespace gamemd
// 0x432BD0
namespace gamemd {
void BinkMovieHandle::Check(int a2, void *a2_2, void *a3)
{

  int result; // eax

  result = BinkGoto(this->tempPath, a2, 1); /*0x432bde*/
  this->memoryBuffer = 0; /*0x432be4*/
  return result; /*0x432beb*/

}
} // namespace gamemd
// 0x5C0550
namespace gamemd {
int BinkMovieHandle::InitFromFile(void *a1, void *a2)
{

  int result; // eax

  g_MissionQueueFrame.localVariables[605] = (int)this; /*0x5c0550*/
  result = BinkMovie::Play((BinkMovie *)this->height); /*0x5c0559*/
  g_MissionQueueFrame.localVariables[605] = 0; /*0x5c055e*/
  return result; /*0x5c0568*/

}
} // namespace gamemd
// 0x5C0570
namespace gamemd {
BOOL BinkMovieHandle::COMStub()
{

  return BinkMovie::IsAtEnd((BinkMovieHandle *)this->height);

}
} // namespace gamemd
// 0x5C0580
namespace gamemd {
void BinkMovieHandle::AddRef(void *a1)
{

  return BinkMovie::RenderFrameToSurface((BinkMovieHandle *)this->height);

}
} // namespace gamemd
// 0x5C0590
namespace gamemd {
void BinkMovieHandle::Release(void *a1)
{

  int height; // esi
  int result; // eax

  height = this->height; /*0x433021*/
  result = BinkWait(*(unsigned int *)(height + 4)); /*0x433027*/
  if ( !result ) /*0x43302f*/
    *(unsigned char *)(height + 45) = 1; /*0x433031*/
  return result; /*0x433036*/

}
} // namespace gamemd
// 0x5C05A0
namespace gamemd {
int BinkMovieHandle::Pause(int a2, int a3)
{

  return Bin  return BinkMovieHandle::RenderFrameClipped(this->height, a2,(void *)(a3)); 

}
} // namespace gamemd
// 0x5C05C0
namespace gamemd {
int BinkMovieHandle::RenderLoop(int a2, void *a2_2, void *a3, void *a4)
{

  return COMStub_432C10((WeaponTypeClass *)this->height, a2); /*0x5c05cd*/

}
} // namespace gamemd
// 0x5C05D0
namespace gamemd {
int BinkMovieHandle::AdjustSurfaceFormat(int a2, void *a2_2)
{

  return BinkMovieHandle::Check((BinkMovieHandle *)this->height, a2); /*0x5c05dd*/

}
} // namespace gamemd
// 0x5C05E0
namespace gamemd {
unsigned int BinkMovieHandle::BlitToTarget(void *a1, void *a2)
{

  return 0x3E8 /*0x432c06*/
       / (unsigned int)(*(unsigned int *)(*(unsigned int *)(this->height + 4) + 20) / *(unsigned int *)(*(unsigned int *)(this->height + 4) + 24));

}
} // namespace gamemd
// 0x5C05F0
namespace gamemd {
unsigned int * BinkMovieHandle::Close(void *a1, void *a2)
{

  return BinkMovieHandle::CopyFrameToSurface((BinkMovieHandle *)this->height);

}
} // namespace gamemd
// 0x5C0A30
namespace gamemd {
BinkMovieHandle * BinkMovieHandle::QueryInterface(BinkMovie ** Block, char a2)
{

  BinkMovie *height; // edi

  height = (BinkMovie *)Block->height; /*0x5c0a34*/
  *(unsigned int *)Block->MovieHandle = &vt_BinkMovieHandle; /*0x5c0a37*/
  if ( height ) /*0x5c0a3f*/
  {
    BinkMovie::Stop(height); /*0x5c0a43*/
    __3_YAXPAX_Z(height); /*0x5c0a49*/
  }
  *(unsigned int *)Block->MovieHandle = &vt_MovieHandle; /*0x5c0a55*/
  if ( (a2 & 1) != 0 ) /*0x5c0a5d*/
    __3_YAXPAX_Z(Block); /*0x5c0a60*/
  return Block->MovieHandle; /*0x5c0a6a*/

}
} // namespace gamemd