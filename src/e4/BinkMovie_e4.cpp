// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Bink_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BinkMovieHandle_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/BitTextClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/BlitTransLucent25Alpha_ushort_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/FileStraw_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "D:\RA2YR_ReSource\src\e4\minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ParseMovieSubtitles(...);  // raw 006C9F10: int __thiscall ParseMovieSubtitles(char *this, char *Source)
    int nullsub_40(...);  // raw 006C9F00: void nullsub_40(ObjectClass *this)
} // namespace gamemd

// 0x432690
namespace gamemd {
unsigned int * BinkMovie::Close(char *FullPath)
{

  this->__pad_0[0] = (unsigned int)((unsigned int *)(0));
  this->BinkMovie_field_0x4[0] = 0; /*0x432697*/
  this->BinkMovie_field_0xC = 0; /*0x43269a*/
  this->BinkMovie_field_0x20 = 0; /*0x43269d*/
  *((unsigned char *)this + 45) = 0; /*0x4326a0*/
  *((unsigned int *)this + 10) = -1; /*0x4326a8*/
  *((unsigned char *)this + 44) = 1; /*0x4326af*/
  BinkMovie::InitFromFile( (LPCSTR *)((int)this),  (LPCSTR *)FullPath); 
  return this->__pad_0; /*0x4326ba*/

}
}
// 0x4326C0
namespace gamemd {
_DWORD * BinkMovie::Open(char *FullPath, int a3)
{

  this->BinkMovie_field_0xC = (unsigned int)((void *)a3);
  this->__pad_0[0] = 0; /*0x4326d3*/
  this->BinkMovie_field_0x4[0] = 0; /*0x4326d5*/
  this->BinkMovie_field_0x20 = 0; /*0x4326d8*/
  *((unsigned int *)this + 10) = -1; /*0x4326db*/
  *((unsigned char *)this + 44) = 1; /*0x4326e2*/
  *((unsigned char *)this + 45) = 0; /*0x4326e6*/
  BinkMovie::InitFromFile( (LPCSTR *)((int)this),  (LPCSTR *)FullPath); 
  return this->__pad_0; /*0x4326f0*/

}
}
// 0x432700
namespace gamemd {
int BinkMovie::Stop()
{

  void *BinkMovie_field_0x20; // edi
  int result; // eax

  BinkMovie_field_0x20 = (void *)this->BinkMovie_field_0x20; /*0x432704*/
  if ( BinkMovie_field_0x20 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker(  (BinkMovie *)this->BinkMovie_field_0x20); /*0x43270d*/
    __3_YAXPAX_Z(BinkMovie_field_0x20); /*0x432713*/
    this->BinkMovie_field_0x20 = 0; /*0x43271b*/
  }
  if ( this->BinkMovie_field_0x4[0] ) /*0x432722*/
  {
    BinkClose((void *)(this->BinkMovie_field_0x4[0])); /*0x43272a*/
    this->BinkMovie_field_0x4[0] = 0; /*0x432730*/
  }
  result = *((unsigned int *)this + 10); /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(*((HANDLE *)this + 10)); /*0x432740*/
    *((unsigned int *)this + 10) = -1; /*0x432746*/
  }
  return result; /*0x43274d*/

}
}
// 0x432750
namespace gamemd {
AbstractClass * * BinkMovie::InitFromFile(LPCSTR * FullPath, void *a2_1)
{

  int v3; // ebp
  void *v4; // edi
  int v5; // eax
  char *v6; // edi
  int v7; // eax
  bool v8; // bl
  int v9; // eax
  HANDLE FileA; // eax
  const char *Error; // eax
  int v13; // eax
  unsigned int *v14; // eax
  int *v15; // ecx
  LONG v16; // edi
  int v17; // ebx
  LONG v18; // edx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  LPCSTR *v22; // ecx
  int v23; // edx
  LPCSTR v24; // eax
  LONG bottom; // edi
  LONG left; // eax
  LONG v27; // edx
  LONG lDistanceToMove[5]; // [esp+10h] [ebp-68h] BYREF
  struct tagRECT Rect; // [esp+24h] [ebp-54h] BYREF
  LONG v30; // [esp+40h] [ebp-38h]
  unsigned char v31[16]; // [esp+44h] [ebp-34h] BYREF
  unsigned char v32[36]; // [esp+54h] [ebp-24h] BYREF

  v3 = 0; /*0x432759*/
  v4 = *(void **)&this->q020; /*0x43275b*/
  if ( v4 ) /*0x432760*/
  {
    BinkMovie::FreeSurfaceTracker((void *)((*((unsigned int *)this + 8)))); 
    __3_YAXPAX_Z(v4); /*0x43276a*/
    *((unsigned int *)this + 8) = 0; /*0x432772*/
  }
  if ( *((unsigned int *)this + 1) ) /*0x432775*/
  {
    BinkClose((void *)((*((unsigned int *)this + 1)))); /*0x43277d*/
    *((unsigned int *)this + 1) = 0; /*0x432783*/
  }
  if ( *((unsigned int *)this + 10) != -1 ) /*0x43278c*/
  {
    CloseHandle(*(HANDLE *)&this->q028); /*0x43278f*/
    *((unsigned int *)this + 10) = -1; /*0x432795*/
  }
  *((unsigned int *)this + 12) = 0; /*0x43279c*/
  if ( ((gamemd::Audio *)this)->IsSoundEnabled() ) /*0x43279f*/
  {
    v5 = (int)(((gamemd::Audio *)this)->GetDirectSound()); /*0x4327a8*/
    BinkSetSoundSystem(BinkOpenDirectSound, v5); /*0x4327b4*/
  }
  v6 = (char *)FullPath; /*0x4327ba*/
  v7 = (unsigned int)(((RawFileClass *)(FullPath))->Construct()); /*0x4327c3*/
  v8 = (*(uint8_t (**)(int, unsigned int))(*(unsigned int *)v7 + 20))(v7, 0) == 1; /*0x4327d6*/
  ((RawFileClass *)(v32))->Dtor(); /*0x4327d9*/
  if ( v8 ) /*0x4327e0*/
  {
    v9 = (int)(BinkOpen(v6, 0)); /*0x4327e4*/
LABEL_14:
    *((unsigned int *)this + 1) = v9; /*0x43284f*/
    goto LABEL_15; /*0x43284f*/
  }
  lDistanceToMove[0] = 0; /*0x4327f8*/
  FullPath = (LPCSTR *)(0); /*0x4327fc*/
  if ( (uint8_t)LookupFileInfoCache(&FullPath, lDistanceToMove, 0) == 1 ) /*0x43280a*/
  {
    FileA = (HANDLE)((unsigned int)(CreateFileA(FullPath[3], 0x80000000, 3u, 0, 3u, 0x8000080u, 0)));
    *((unsigned int *)this + 10) = (unsigned int)(FileA); /*0x43282d*/
    if ( FileA != (HANDLE)-1 ) /*0x432830*/
    {
      SetFilePointer(FileA, lDistanceToMove[0], 0, 0); /*0x43283a*/
      v9 = (int)(BinkOpen((const void *)(*((unsigned int *)this + 10)),0)); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
LABEL_15:
  if ( *((unsigned int *)this + 1) )
  {
    dword_89C490 = flt_A8EB9C; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&flt_A8EB9C * 32768.0); /*0x43288d*/
    BinkSetVolume((void *)((*((unsigned int *)this + 1))), v13); /*0x432897*/
    *((unsigned int *)this + 9) = 0x3C /*0x4328b5*/
                           / (unsigned int)(*(unsigned int *)(*((unsigned int *)this + 1) + 20)
                                          / *(unsigned int *)(*((unsigned int *)this + 1) + 24));
    v14 = (unsigned int *)BinkMovie::CreateSurfaceTracker( (char *)(v6)); /*0x4328b8*/
    v15 = *(int **)&this->u32_4; /*0x4328bd*/
    *((unsigned int *)this + 8) = (unsigned int)(v14); /*0x4328c0*/
    v16 = 0; /*0x4328c3*/
    v17 = *v15; /*0x4328c5*/
    v18 = v15[1]; /*0x4328c7*/
    v19 = *((unsigned int *)this + 3); /*0x4328ca*/
    v30 = v18; /*0x4328cd*/
    if ( !v19 ) /*0x4328d3*/
    {
      if ( v14 && *v14 ) /*0x4328d9*/
      {
        v20 = g_DSurface_Hidden; /*0x4328e3*/
        *((unsigned int *)this + 3) = g_DSurface_Hidden; /*0x4328e5*/
        v16 = ((*(int (**)(int))(*(unsigned int *)&v20->q_1F0))(v20) - v17) / 2;  /*0x4328f9*/
        v21 = (*(int (**)(unsigned int))(**(unsigned int **)&this->q00C + 128))(*((unsigned int *)this + 3)); /*0x4328fb*/
      }
      else
      {
        *((unsigned int *)this + 3) = g_DSurface_Primary; /*0x43290d*/
        GetClientRect((HWND)(g_hWnd), &Rect); 
        v16 = (Rect.right - Rect.left - v17) / 2; /*0x432936*/
        v21 = Rect.bottom - Rect.top; /*0x432938*/
      }
      v3 = (v21 - v30) / 2; /*0x432943*/
    }
FullPath = (LPCSTR *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)&this->q00C + 120))( /*0x43295e*/ *((unsigned int *)this + 3), (unsigned char *)(v31));


    ((Rect *)(0))->Set((int)((Rect *)(0)), 0, 0, 0); /*0x432965*/
    v22 = (LPCSTR *)v3; /*0x43296e*/
    Rect.bottom = v30; /*0x432974*/
    Rect.left = v16; /*0x432978*/
    v23 = (int)FullPath[2]; /*0x43297c*/
    if ( v23 <= 0 ) /*0x432981*/
      goto LABEL_40; /*0x432981*/
    lDistanceToMove[0] = (LONG)FullPath[3]; /*0x43298c*/
    if ( lDistanceToMove[0] <= 0 || v17 <= 0 || v30 <= 0 ) /*0x4329a0*/
      goto LABEL_40; /*0x4329a0*/
    v24 = *FullPath; /*0x4329a2*/
    if ( v16 < (int)*FullPath ) /*0x4329a7*/
    {
      Rect.left = (LONG)*FullPath; /*0x4329ab*/
      v17 = v16 + v17 - (unsigned int)v24; /*0x4329af*/
    }
    if ( v17 < 1 ) /*0x4329b4*/
      goto LABEL_40; /*0x4329b4*/
    FullPath = (LPCSTR *)FullPath[1]; /*0x4329bb*/
    if ( v3 < (int)FullPath ) /*0x4329bf*/
    {
      v22 = FullPath; /*0x4329c9*/
      Rect.bottom += v3 - (unsigned int)FullPath; /*0x4329cb*/
    }
    if ( Rect.bottom < 1 ) /*0x4329d4*/
      goto LABEL_40; /*0x4329d4*/
    if ( v17 + Rect.left > (int)&v24[v23] ) /*0x4329e1*/
      v17 = (int)&v24[v23 - Rect.left]; /*0x4329e9*/
    if ( v17 < 1 ) /*0x4329ee*/
      goto LABEL_40; /*0x4329ee*/
    bottom = Rect.bottom; /*0x4329f8*/
    if ( (int)v22 + Rect.bottom > (int)FullPath + lDistanceToMove[0] ) /*0x432a03*/
      bottom = (unsigned int)(char *)FullPath + lDistanceToMove[0] - (char *)v22; /*0x432a07*/
    if ( bottom < 1 ) /*0x432a0c*/
    {
LABEL_40:
      left = lDistanceToMove[1]; /*0x432a16*/
      v22 = (LPCSTR *)lDistanceToMove[2]; /*0x432a1a*/
      v27 = lDistanceToMove[3]; /*0x432a1e*/
      bottom = lDistanceToMove[4]; /*0x432a22*/
    }
    else
    {
      left = Rect.left; /*0x432a0e*/
      v27 = v17; /*0x432a12*/
    }
    *((unsigned int *)this + 4) = left; /*0x432a29*/
    *((unsigned int *)this + 5) = (unsigned int)(v22); /*0x432a2c*/
    *((unsigned int *)this + 6) = v27; /*0x432a2f*/
    *((unsigned int *)this + 7) = bottom; /*0x432a32*/
    *((unsigned int *)this + 2) = (unsigned int)((gamemd::AbstractClass **)(BinkDDSurfaceType((*(unsigned int *)(g_DSurface_Primary + 28))))); /*0x432a44*/
    return (gamemd::AbstractClass **)(1); /*0x432a4a*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432857*/
    Debug::Log("Bink Error: %s\n", Error);
    return 0; /*0x43286b*/
  }

}
}
// 0x432C30
namespace gamemd {
int BinkMovie::Pause(unsigned char a2)
{

  return BinkPause((void *)(this->BinkMovie_field_0x4[0]), a2); /*0x432c44*/

}
}
// 0x432C50
namespace gamemd {
int BinkMovie::IsAtEnd(void *a1_1)
{

  unsigned int *tempPath; // eax
  void *v2; // edx

  tempPath = (unsigned int *)(this->tempPath);
  v2 = (void *)tempPath[3]; /*0x432c54*/
  return (unsigned int)v2 >= tempPath[2] || v2 < (void *)(this->memoryBuffer); /*0x432c5c*/

}
}
// 0x432C70
namespace gamemd {
void BinkMovie::Play(void *a1_1)
{

  void (*v3)(HWND, LPPOINT); // ebp
  int BinkMovie_field_0x4; // eax
  unsigned int v5; // ecx
  DSurface *BinkMovie_field_0xC; // eax
  int BinkMovie_field_0x10; // eax
  int BinkMovie_field_0x14; // ecx
  int v9; // edx
  unsigned int v10[4]; // [esp+4h] [ebp-4Ch] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v12; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( this->BinkMovie_field_0x4 ) /*0x432c76*/
  {
    ((Timer*)(Timer *)dword_87F770)->PumpMessages(); /*0x432c9f*/
    v3 = (void (*)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    *((unsigned char *)this + 44) = 1; /*0x432cb0*/
    *((unsigned char *)this + 45) = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      BinkMovie_field_0x4 = (int)(this->BinkMovie_field_0x4); /*0x432cb8*/
      v5 = *(unsigned int *)(BinkMovie_field_0x4 + 12); /*0x432cbb*/
      if ( v5 >= *(unsigned int *)(BinkMovie_field_0x4 + 8) || v5 < *((unsigned int *)this + 12) ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++dword_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump( (MSG*)(&Msg), 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog( (void *)(&Msg), 0, 0, 0) ) /*0x432d05*/
          return (unsigned int)((::gamemd::Timer*)(::gamemd::Timer *)dword_87F770)->PumpMessages(); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !*((unsigned char *)this + 44) ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        BinkMovie_field_0xC = (DSurface *)this->BinkMovie_field_0xC; /*0x432d32*/
        if ( BinkMovie_field_0xC == (gamemd::DSurface *)(g_DSurface_Primary) ) /*0x432d3d*/
        {
          GetClientRect((HWND)(g_hWnd), &Rect); 
          v3((HWND)(g_hWnd), (LPPOINT)&Rect); 
          BinkMovie::RenderLoop( /*0x432d74*/
            (bool *)this->__pad_0,
            this->BinkMovie_field_0xC,
            Rect.left + this->BinkMovie_field_0x10,
            Rect.top + this->BinkMovie_field_0x14);
        }
        else if ( ((gamemd::DSurface *)(uint8_t))BinkMovie::RenderLoop( 
                                     (bool *)this->__pad_0,
                                     (int)BinkMovie_field_0xC,
                                     this->BinkMovie_field_0x10,
                                     this->BinkMovie_field_0x14) )
        {
          GetClientRect((HWND)(g_hWnd), &v12); 
          v3((HWND)(g_hWnd), (LPPOINT)&v12); 
          BinkMovie_field_0x10 = this->BinkMovie_field_0x10; /*0x432db4*/
          BinkMovie_field_0x14 = this->BinkMovie_field_0x14; /*0x432db6*/
          v10[2] = *(unsigned int *)this->__pad_18; /*0x432dbc*/
          v10[3] = *(unsigned int *)&this->__pad_18[4]; /*0x432dc9*/
          v9 = this->BinkMovie_field_0xC; /*0x432dd3*/
          v10[1] = v12.top + BinkMovie_field_0x14; /*0x432dd6*/
          v10[0] = v12.left + BinkMovie_field_0x10; /*0x432de1*/
(*(void (**)(DSurface *, unsigned int *, int, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x432dec*/ + 8))( (DSurface *)(g_DSurface_Primary), (unsigned int *)(v10), v9, (int *)(&this->BinkMovie_field_0x10), 0, 1);







          v3 = (void (*)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( ((EventQueue *)((EventQueue *)dword_87F770))->Process() /*0x432e21*/
          && !this->__pad_0[0]
          && ((EventQueue *)((EventQueue *)dword_87F770))->Read() == 2075 )
        {
          return (unsigned int)((Timer*)(Timer *)dword_87F770)->PumpMessages(); /*0x432e21*/
        }
      }
    }
    return (unsigned int)((Timer*)(Timer *)dword_87F770)->PumpMessages(); /*0x432e27*/
  }
  else
  {
    BinkGetError(); /*0x432c7d*/
    return Debug::Log("Bink Error: %s\n"); /*0x432c89 G57c1: IDA 0x432c89 push offset aBinkErrorS*/
  }

}
}
// 0x432E40
namespace gamemd {
int BinkMovie::RenderLoop(int aP1, int a3, int a4)
{

  int v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  DSurface *v9; // eax
  int result; // eax
  BinkMovie *v12; // ecx
  char v13; // bl
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-Ch] [ebp-24h]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+1Ch] [ebp+4h]

  if ( *(float *)&dword_89C490 != flt_A8EB9C ) /*0x432e58*/
  {
    dword_89C490 = LODWORD(flt_A8EB9C); /*0x432e5f*/
    LOWORD(v5) = Math::RoundToInt(flt_A8EB9C * 32768.0); /*0x432e70*/
    BinkSetVolume((void *)((*((unsigned int *)this + 1))), v5); /*0x432e7a*/
  }
  v6 = *((unsigned int *)this + 44); /*0x432e87*/
  if ( byte_A8ED80 ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log("Resume bink movie\n"); /*0x432ebf G57c1: IDA 0x432ebf push offset aResumeBinkMovi*/
      v8 = *((unsigned int *)this + 1); /*0x432ec4*/
      *((unsigned int *)this + 44) = 1; /*0x432eca*/
      BinkPause((void *)(v8), 0); /*0x432ed1*/
      v9 = (DSurface *)*((unsigned int *)this + 3); /*0x432ed7*/
      if ( v9 == (gamemd::DSurface *)(g_DSurface_Primary) ) /*0x432ee2*/
      {
        GetClientRect((HWND)(g_hWnd), &Rect); 
        ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); 
        ((BinkMovie*)/*0x432f22*/
          (BinkMovie *)this)->RenderSingleFrame(/*0x432f22*/ *((unsigned int *)this + 3), Rect.left + *((unsigned int *)this + 4), Rect.top + *((unsigned int *)this + 5), 1);
      }
      else
      {
        ((BinkMovie *)((BinkMovie *)this))->RenderSingleFrame((int)v9, *((unsigned int *)this + 4), *((unsigned int *)this + 5), 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log("Pause bink movie\n"); /*0x432e99 G57c1: IDA 0x432e99 push offset aPauseBinkMovie*/
    v7 = *((unsigned int *)this + 1); /*0x432e9e*/
    *((unsigned int *)this + 44) = 0; /*0x432ea4*/
    BinkPause((void *)(v7), 1); /*0x432eab*/
  }
  if ( *((unsigned int *)this + 45) || (result = BinkWait((*((unsigned int *)this + 1))), LOBYTE(result) = result == 0, (unsigned char)result) ) /*0x432f4e*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame((void *)((*((unsigned int *)this + 1)))); /*0x432f62*/
      v12 = (BinkMovie *)*((unsigned int *)this + 8); /*0x432f68*/
      v13 = 0; /*0x432f6b*/
      *((unsigned int *)this + 45) = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = ((BinkMovie *)(v12))->CheckKeyframeTransition(*((unsigned int *)this + 9) * *(unsigned int *)(*((unsigned int *)this + 1) + 12)); /*0x432f85*/
        if ( v13 ) /*0x432f89*/
          ((BinkMovie *)((gamemd::DSurface *)((BinkMovie *)this)))->AdjustSurfaceFormat(aP1); 
      }
      v19 = ((*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)aP1 + 92)))(aP1, 0, 0); 
      if ( v19 ) /*0x432fa4*/
      {
        v14 = ((*(int (**)(int))(*(unsigned int *)aP1 + 116)))(aP1); 
        v15 = ((*(int (**)(int))(*(unsigned int *)aP1 + 128)))(aP1); 
        v16 = *((unsigned int *)this + 2); /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer((void *)((*((unsigned int *)this + 1))),(void *)( v19), v14, v15, a3, a4, v16); /*0x432fdc*/
        ((*(void (**)(int))(*(unsigned int *)aP1 + 96)))(aP1); 
      }
      ((BinkMovie *)((gamemd::DSurface *)((BinkMovie *)this)))->BlitToTarget(aP1); 
      v17 = *((unsigned int *)this + 1); /*0x432ff4*/
      *((unsigned int *)this + 12) = *(unsigned int *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame((void *)(v17)); /*0x432ffb*/
      result = BinkWait((*((unsigned int *)this + 1))); /*0x433005*/
    }
    while ( !result ); /*0x43300d*/
    LOBYTE(result) = 1; /*0x433016*/
  }
  return result; /*0x432f50*/

}
}
// 0x433040
namespace gamemd {
int BinkMovie::RenderFrameToSurface(void *a1_1)
{

  return ((BinkMovie *)((bool *)this->MovieHandle))->RenderLoop( (int)(this->width), (int)(this->height), (int)(this->currentFrame)); /*0x433051*/

}
}
// 0x4331F0
namespace gamemd {
unsigned int * BinkMovie::RenderSingleFrame(int aP1, int a3, int a4, char a5)
{

  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  unsigned int BinkMovie_field_0x8; // ecx

  if ( a5 ) /*0x4331ff*/
    ((BinkMovie *)((gamemd::DSurface *)(this)))->AdjustSurfaceFormat(aP1); 
  v6 = ((*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)aP1 + 92)))(aP1, 0, 0); 
  if ( v6 ) /*0x433218*/
  {
    v7 = ((*(int (**)(int))(*(unsigned int *)aP1 + 116)))(aP1); 
    v8 = ((*(int (**)(int))(*(unsigned int *)aP1 + 128)))(aP1); 
    BinkMovie_field_0x8 = (unsigned int)this->q008; /*0x433232*/
    if ( a5 ) /*0x433237*/
      BinkMovie_field_0x8 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer((void *)(this->BinkMovie_field_0x4[0]),(void *)( v6), v7, v8, a3, a4, BinkMovie_field_0x8); /*0x433251*/
    (*(void (__thiscall **)(int))(*(unsigned int *)aP1 + 96))(aP1); /*0x43325b*/
  }
  return (gamemd::DSurface *)(int)((BinkMovie *)(this))->BlitToTarget(aP1)

}
}
// 0x433270
namespace gamemd {
unsigned int * BinkMovie::BlitToTarget(int aP1)
{

  unsigned int *result; // eax
  int *v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // [esp+10h] [ebp-28h]
  int v14; // [esp+14h] [ebp-24h]
  unsigned int v15[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned char v16[16]; // [esp+28h] [ebp-10h] BYREF

  result = (unsigned int *)this->BinkMovie_field_0x20; /*0x433277*/
  if ( result ) /*0x43327c*/
  {
    if ( *result ) /*0x433282*/
    {
      v4 = (int *)(result + 5); /*0x43328e*/
      if ( (int)result[7] > 0 && (int)result[8] > 0 ) /*0x43329e*/
      {
        v5 = result[4]; /*0x4332a6*/
        v6 = (*(int (**)(int, unsigned char *))(*(unsigned int *)v5 + 120))( v5, (unsigned char *)(v16)); /*0x4332b2*/
        v13 = *(unsigned int *)(v6 + 8); /*0x4332cb*/
        v7 = *v4; /*0x4332d4*/
        v14 = *(unsigned int *)(v6 + 12); /*0x4332d6*/
        v8 = v4[1]; /*0x4332da*/
        v15[2] = v4[2]; /*0x4332e0*/
        v9 = *(unsigned int *)this->__pad_18; /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        v11 = *(unsigned int *)&this->__pad_18[4] - v14 + v8; /*0x433309*/
        v12 = (&this->BinkMovie_field_0x14)[0]; /*0x43330b*/
        v15[0] = (&this->BinkMovie_field_0x10)[0] + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
return (unsigned int *)(*(int (**)(int, unsigned int *, int, int *, int, int))(*(unsigned int *)&aP1->q_20))( /*0x433323*/ aP1, (unsigned int *)(v15), v5, (int *)(v4), 1, 1);






      }
    }
  }
  return result; /*0x433328*/

}
}
// 0x433330
namespace gamemd {
int BinkMovie::AdjustSurfaceFormat(int aP1)
{

  int result; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // edi
  int64_t v7; // rax
  int v8; // ecx
  int v9; // [esp+4h] [ebp-30h] BYREF
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+Ch] [ebp-28h]
  int v12; // [esp+10h] [ebp-24h]
  int v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch]
  unsigned char v15[16]; // [esp+24h] [ebp-10h] BYREF

  result = this->BinkMovie_field_0x20; /*0x433336*/
  if ( result ) /*0x43333b*/
  {
    if ( *(unsigned int *)result ) /*0x433341*/
    {
      v9 = *(unsigned int *)(result + 36); /*0x433351*/
      v10 = *(unsigned int *)(result + 40); /*0x433358*/
      v11 = *(unsigned int *)(result + 44); /*0x43335f*/
      v4 = *(unsigned int *)(result + 48); /*0x433363*/
      v12 = v4; /*0x433368*/
      if ( v11 > 0 && v4 > 0 ) /*0x433370*/
      {
v5 = (int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)(result + 16) + 120))( /*0x43337d*/ *(unsigned int *)(result + 16), (unsigned char *)(v15));


        v13 = *v5; /*0x433384*/
        v14 = v5[1]; /*0x43338b*/
        v6 = v5[3]; /*0x433392*/
        v7 = *(unsigned int *)this->__pad_18 - v5[2]; /*0x43339a*/
        v8 = *(unsigned int *)&this->__pad_18[4] - v6 + v10; /*0x4333b0*/
        v9 += (&this->BinkMovie_field_0x10)[0] + (((int)v7 - HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = (&this->BinkMovie_field_0x14)[0] + v8; /*0x4333c5*/
        return (*(int (**)(int, int *, unsigned int))(*(unsigned int *)&aP1->q_50))( aP1, (int *)(&v9), 0);  /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/

}
}
// 0x5C01F0
namespace gamemd {
int BinkMovie::Cleanup(void *a1_1)
{

  DSurface *v2; // ecx
  int result; // eax
  void *v4; // edi
  void *v5; // edi

  v2 = *(DSurface **)this->__pad_0; /*0x5c01f4*/
  if ( v2 ) /*0x5c01f8*/
  {
    LOBYTE(result) = ((DSurface *)(v2))->FlipIfNeeded(); /*0x5c01fa*/
    v4 = *(void **)this->__pad_0; /*0x5c01ff*/
    if ( *(unsigned int *)this->__pad_0 ) /*0x5c01ff*/
    {
      CCFileClass::Cleanup(*(CCFileClass **)this->__pad_0); /*0x5c0207*/
      __3_YAXPAX_Z(v4); /*0x5c020d*/
    }
  }
  v5 = (void *)*((unsigned int *)this + 18); /*0x5c0215*/
  if ( v5 ) /*0x5c021a*/
  {
    BinkMovie::FreeSurfaceTracker(*((BinkMovie **)this + 18)); /*0x5c021e*/
    __3_YAXPAX_Z(v5); /*0x5c0224*/
    *((unsigned int *)this + 18) = 0; /*0x5c022c*/
  }
  return result; /*0x5c0233*/

}
}
// 0x6033F0
namespace gamemd {
int BinkMovie::HandleKeyboard(int a1, HWND a2)
{

  unsigned int *v3; // eax
  int v4; // esi
  int DlgCtrlID; // eax
  bool v6; // zf
  unsigned int *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6033fc*/
  if ( !dword_AC1B04 ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  v3 = (unsigned int *)*((unsigned int *)dword_AC1B00 + ((*(unsigned int (*)(void *))&dword_AC1B18)( (void *)(&v9)) & ((1 << dword_AC1B0C) - 1))); /*0x603421*/
  if ( !v3 ) /*0x603426*/
    goto LABEL_5; /*0x603426*/
  while ( *v3 != v9 ) /*0x60342e*/
  {
    v3 = (unsigned int *)v3[129]; /*0x603434*/
    if ( !v3 ) /*0x60343c*/
      goto LABEL_5; /*0x60343c*/
  }
  v7 = v3 + 1; /*0x60359b*/
  if ( v7 ) /*0x6035a0*/
    v4 = v7[27]; /*0x6035a6*/
  else
LABEL_5:
    v4 = 0; /*0x60343e*/
  DlgCtrlID = GetDlgCtrlID(a2); /*0x603441*/
  if ( (v4 == 148 /*0x603574*/
     || v4 == 216
     || v4 == 245
     || v4 == 226
     || v4 == 213
     || v4 == 257
     || v4 == 297
     || v4 == 215
     || v4 == 187
     || v4 == 256
     || v4 == 214
     || v4 == 293
     || v4 == 290
     || v4 == 274
     || v4 == 231
     || v4 == 278
     || v4 == 285
     || v4 == 284
     || v4 == 254
     || v4 == 271
     || v4 == 279
     || v4 == 276
     || v4 == 230
     || v4 == 243
     || v4 == 244
     || v4 == 700
     || v4 == 270
     || v4 == 264
     || v4 == 3014
     || v4 == 3015)
    && DlgCtrlID == 1820 )
  {
    return 100; /*0x603574*/
  }
  if ( v4 == 148 ) /*0x60357c*/
  {
    if ( DlgCtrlID == 1770 || DlgCtrlID == 1772 ) /*0x60358a*/
      return 100; /*0x60358a*/
    v6 = DlgCtrlID == 1771; /*0x60358c*/
LABEL_46:
    if ( v6 ) /*0x6035c3*/
      return 100; /*0x6035cd*/
    return 0; /*0x6035c3*/
  }
  if ( v4 == 259 || v4 == 3015 ) /*0x6035bc*/
  {
    v6 = DlgCtrlID == 1835; /*0x6035be*/
    goto LABEL_46; /*0x6035be*/
  }
  if ( v4 == 196 && DlgCtrlID == 1961 ) /*0x6035db*/
    return 50; /*0x6035e5*/
  return 0; /*0x6035c5*/

}
}
// 0x6153E0
namespace gamemd {
AbstractClass * * BinkMovie::WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam)
{

  HWND v4; // ecx
  unsigned int *v5; // esi
  HWND *v6; // eax
  int result; // eax
  UINT v8; // ebp
  void (***v9)(unsigned int, int); // eax
  int v10; // eax
  HWND v11; // edi
  void (***v12)(unsigned int, int); // ecx
  void (***v13)(unsigned int, int); // ecx
  LRESULT (*v14)(HWND, UINT, WPARAM, LPARAM); // esi
  int v15; // eax
  int v16; // eax
  unsigned int *v17; // edi
  int v18; // eax
  int v19; // ecx
  unsigned int *v20; // ecx
  LONG right; // edx
  int v22; // eax
  unsigned int v23; // eax
  bool v24; // bl
  bool v25; // bl
  bool v26; // cl
  bool v27; // al
  int v28; // esi
  LONG v29; // edi
  LONG v30; // ecx
  int v31; // ebp
  int v32; // ecx
  LONG v33; // eax
  int v34; // edi
  int v35; // edx
  struct tagRECT *v36; // eax
  unsigned int v37; // edi
  signed int v38; // edi
  HWND v39; // esi
  LONG WindowLongA; // eax
  char v41; // dl
  int v42; // ecx
  int v43; // ecx
  signed int v44; // ecx
  signed int v45; // eax
  signed int v46; // eax
  int v47; // ecx
  void (__thiscall ***v48)(unsigned int, int); // ecx
  HWND v49; // edi
  void (__thiscall ***v50)(unsigned int, int); // ecx
  int v51; // eax
  char v52; // bl
  int v53; // eax
  UINT v54; // eax
  void (__thiscall ***v55)(unsigned int, int); // ecx
  int v56; // eax
  int i; // eax
  HWND v58; // eax
  HWND v59; // edi
  unsigned int *j; // eax
  HWND Parent; // eax
  UINT v62; // eax
  LPARAM v63; // edi
  LPARAM v64; // eax
  int v65; // esi
  HWND v66; // edi
  void (__thiscall ***v67)(unsigned int, int); // ecx
  int v68; // ebp
  void (__thiscall ***v69)(unsigned int, int); // ecx
  unsigned int *v70; // eax
  void (__thiscall ***v71)(unsigned int, int); // ecx
  void (__thiscall ***v72)(unsigned int, int); // ecx
  int v73; // esi
  int v74; // esi
  int v75; // esi
  LRESULT (__stdcall **v76)(HWND, UINT, WPARAM, LPARAM); // eax
  bool v77; // [esp+34h] [ebp-7Ah]
  bool v78; // [esp+35h] [ebp-79h]
  bool v79; // [esp+35h] [ebp-79h]
  HWND v80; // [esp+36h] [ebp-78h] BYREF
  struct tagRECT v81; // [esp+3Ah] [ebp-74h] BYREF
  int v82; // [esp+4Ah] [ebp-64h]
  struct tagRECT v84; // [esp+5Eh] [ebp-50h] BYREF
  struct tagRECT v85; // [esp+6Eh] [ebp-40h] BYREF
  LONG left; // [esp+7Eh] [ebp-30h] BYREF
  LONG top; // [esp+82h] [ebp-2Ch]
  int v88; // [esp+86h] [ebp-28h]
  int v89; // [esp+8Ah] [ebp-24h]
  struct tagRECT X; // [esp+8Eh] [ebp-20h] BYREF
  unsigned int v91[4]; // [esp+9Eh] [ebp-10h] BYREF
}
} // namespace gamemd

// 0x6C9930
namespace gamemd {
void BinkMovie::Destroy(void *a1_1)
{

  if ( (&this->BinkMovie_field_0x14)[0] ) /*0x6c9930*/
    __3_YAXPAX_Z((void *)(&this->BinkMovie_field_0x14)[0]); /*0x6c9938*/

}
}
// 0x6C9AE0
namespace gamemd {
int BinkMovie::FreeSurfaceTracker(void *a1_1)
{

  int result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edi
  int (***v6)(unsigned int, int); // ecx

  result = *(unsigned int *)this->__pad_0; /*0x6c9ae3*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x6c9ae3*/
  {
    v3 = 0; /*0x6c9aed*/
    if ( *(int *)(result + 16) > 0 ) /*0x6c9af1*/
    {
      do /*0x6c9b14*/
      {
        v4 = *(unsigned int *)(result + 4); /*0x6c9af4*/
        v5 = *(void **)(v4 + 4 * v3); /*0x6c9af7*/
        if ( v5 ) /*0x6c9afc*/
        {
          BinkMovie::Destroy(*(BinkMovie **)(v4 + 4 * v3)); /*0x6c9b00*/
          __3_YAXPAX_Z(v5); /*0x6c9b06*/
        }
        result = *(unsigned int *)this->__pad_0; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(unsigned int *)(*(unsigned int *)this->__pad_0 + 16) ); /*0x6c9b14*/
    }
    if ( *(unsigned int *)this->__pad_0 ) /*0x6c9b17*/
      result = (***(int (****)(unsigned int, int))this->__pad_0)(*(unsigned int *)this->__pad_0, 1); /*0x6c9b22*/
  }
  v6 = (int (***)(unsigned int, int))(&this->BinkMovie_field_0x10)[0]; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)((unsigned int)(v6), 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/

}
}
// 0x6C9B40
namespace gamemd {
int BinkMovie::InitKeyframeTracking(char * Source, void * aSubtitlemdTxt)
{

  int v3; // eax
  ObjectClass *v5; // [esp+0h] [ebp-894h]
  int v6[4]; // [esp+Ch] [ebp-888h] BYREF
  char v7; // [esp+1Ch] [ebp-878h]
  CCFileClass v8; // [esp+20h] [ebp-874h] BYREF
  int v9[3]; // [esp+78h] [ebp-81Ch] BYREF
  int v10; // [esp+84h] [ebp-810h]
  BinkMovie v11; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen( (const char *)(Source)) ) /*0x6c9b5f*/
    return 0; /*0x6c9b6a*/
  ((CCFileClass*)&v8)->Construct( (char *)(aSubtitlemdTxt)); /*0x6c9b79*/
  if ( !(uint8_t)((CCFileClass *)(&v8))->Open(0) ) /*0x6c9b8a*/
  {
LABEL_6:
    *(unsigned int *)v8.CDFileClass = (unsigned int)&vt_CCFileClass;
    v10 = 0; /*0x6c9bee*/
    ((Vector *)((int)v9))->Clear((int)((Vector *)((int)v9))); /*0x6c9bf5*/
    *(unsigned int *)v8.CDFileClass = (unsigned int)&off_7E1668;
    ((BufferIOFileClass *)((BufferIOFileClass *)&v8))->Dtor(); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  v6[1] = 0; /*0x6c9b9c*/
  v6[2] = 0; /*0x6c9ba0*/
  v6[3] = (int)&v8; /*0x6c9ba4*/
  v7 = 0; /*0x6c9ba8*/
  v6[0] = (int)&vt_FileStraw; /*0x6c9bac*/
  ((BinkMovie*)&v11)->VtableDispatch((int)v6); /*0x6c9bb4*/
  v3 = ParseMovieSubtitles(v11.__pad_0, Source); /*0x6c9bc1*/
  *(unsigned int *)this->__pad_0 = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(); /*0x6c9bd4*/
    ((FileStraw *)((int)v6))->Destructor(); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(); /*0x6c9c19*/
  ((FileStraw *)((int)v6))->Destructor(); /*0x6c9c22*/
  *(unsigned int *)v8.CDFileClass = (unsigned int)&vt_CCFileClass;
  v10 = 0; /*0x6c9c33*/
  ((Vector *)((int)v9))->Clear((int)((Vector *)((int)v9))); /*0x6c9c3a*/
  *(unsigned int *)v8.CDFileClass = (unsigned int)&off_7E1668;
  ((BufferIOFileClass *)((BufferIOFileClass *)&v8))->Dtor(); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/

}
}
// 0x6C9C60
namespace gamemd {
int BinkMovie::CheckKeyframeTransition(unsigned int aP1)
{

  int result; // eax
  int v4; // ecx
  int v5; // eax
  char v6; // bl
  unsigned int *v7; // ecx
  void (*BinkMovie_field_0xC)(void); // eax
  int v9; // ecx
  int *BinkMovie_field_0x14; // edi
  BinkMovie *v11; // esi

  v4 = *(unsigned int *)this->__pad_0; /*0x6c9c66*/
  if ( v4 ) /*0x6c9c6a*/
  {
    v5 = this->BinkMovie_field_0x4[0]; /*0x6c9c73*/
    v6 = 0; /*0x6c9c7a*/
    if ( v5 < *(unsigned int *)(v4 + 16) ) /*0x6c9c83*/
    {
      do /*0x6c9cb3*/
      {
        v7 = *(unsigned int **)(*(unsigned int *)(v4 + 4) + 4 * v5); /*0x6c9c88*/
        if ( *v7 > aP1 ) /*0x6c9c8d*/
          break; /*0x6c9c8d*/
        this->q008 = v7; /*0x6c9c90*/
        this->BinkMovie_field_0x4[0] = v5 + 1; /*0x6c9c93*/
        BinkMovie_field_0xC = (void (*)(void))this->BinkMovie_field_0xC; /*0x6c9c96*/
        if ( BinkMovie_field_0xC ) /*0x6c9c9b*/
        {
          BinkMovie_field_0xC(); /*0x6c9c9d*/
        }
        else
        {
          ((BinkMovie*)this)->ProcessKeyframe( (ObjectClass *)(v7)); /*0x6c9ca4*/
          v6 = 1; /*0x6c9ca9*/
        }
        v4 = *(unsigned int *)this->__pad_0; /*0x6c9cab*/
        v5 = this->BinkMovie_field_0x4[0]; /*0x6c9cad*/
      }
      while ( v5 < *(unsigned int *)(*(unsigned int *)this->__pad_0 + 16) ); /*0x6c9cb3*/
    }
    result = (int)this->q008; /*0x6c9cb5*/
    if ( result ) /*0x6c9cba*/
    {
      if ( aP1 >= *(unsigned int *)result + *(unsigned int *)(result + 4) ) /*0x6c9cc5*/
      {
        result = (int)this->BinkMovie_field_0xC; /*0x6c9cc7*/
        this->q008 = 0; /*0x6c9cca*/
        if ( !result ) /*0x6c9ccf*/
        {
          v9 = (&this->BinkMovie_field_0x10)[0]; /*0x6c9cd1*/
          if ( v9 ) /*0x6c9cd6*/
          {
            BinkMovie_field_0x14 = (int *)(this->BinkMovie_field_0x14); /*0x6c9cda*/
            (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v9 + 20))( v9, (int *)(this->BinkMovie_field_0x14), 0); /*0x6c9cdf*/
            v11 = (BinkMovie *)((unsigned int *)this + 1); /*0x6c9ce4*/
            v6 = 1; /*0x6c9ce7*/
            *(unsigned int *)v11->__pad_0 = *BinkMovie_field_0x14; /*0x6c9ceb*/
            v11->BinkMovie_field_0x4[0] = BinkMovie_field_0x14[1]; /*0x6c9cf0*/
            v11->q008 = (void *)BinkMovie_field_0x14[2]; /*0x6c9cf6*/
            result = BinkMovie_field_0x14[3]; /*0x6c9cf9*/
            v11->BinkMovie_field_0xC = (unsigned int)((void *)result); /*0x6c9cfc*/
            *BinkMovie_field_0x14 = 0; /*0x6c9cff*/
            BinkMovie_field_0x14[1] = 0; /*0x6c9d01*/
            BinkMovie_field_0x14[2] = 0; /*0x6c9d04*/
            BinkMovie_field_0x14[3] = 0; /*0x6c9d07*/
          }
        }
      }
    }
    LOBYTE(result) = v6; /*0x6c9d0a*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6c9c6d*/
  }
  return result; /*0x6c9c6c*/

}
}
// 0x6C9D40
namespace gamemd {
AbstractClass * * BinkMovie::ProcessKeyframe(ObjectClass * aP1)
{

  int v3; // ecx
  int *BinkMovie_field_0x14; // ebp
  TextGroup *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int *pad_0; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // [esp-1Ch] [ebp-4Ch]
  int v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+10h] [ebp-20h]
  unsigned short *v17; // [esp+14h] [ebp-1Ch]
  BinkMovie *v18; // [esp+18h] [ebp-18h]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v20[4]; // [esp+20h] [ebp-10h] BYREF

  v18 = this; /*0x6c9d46*/
  v3 = (&this->BinkMovie_field_0x10)[0]; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
    BinkMovie_field_0x14 = (int *)(this->BinkMovie_field_0x14); /*0x6c9d5a*/
    (*(void (**)(int, int *, unsigned int))(*(unsigned int *)v3 + 20))( v3, (int *)(this->BinkMovie_field_0x14), 0); /*0x6c9d60*/
    v5 = (TextGroup *)g_FogOfWarState; /*0x6c9d6b*/
    Property::Set((int16_t)( /*0x6c9dba*/)    Property::Set( /*0x6c9dba*/
      (Property *)g_FogOfWarState,
      ((int)(uint8_t)aP1[2] >> g_BitMask_Red << g_BitShift_Blue)
    | ((uint8_t)BYTE2(aP1[2]) >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((uint8_t)BYTE1(aP1[2]) >> g_BitMask_Blue << g_BitMask_Green));
    v6 = (*(int (**)(int))(*((unsigned int *)&this->BinkMovie_field_0x10)[0] + 124))((&this->BinkMovie_field_0x10)[0]); /*0x6c9dca*/
    v16 = (*(int (**)(int))(*((unsigned int *)&this->BinkMovie_field_0x10)[0] + 128))((&this->BinkMovie_field_0x10)[0]); /*0x6c9dd6*/
    v20[3] = v16; /*0x6c9ddc*/
    v20[0] = 0; /*0x6c9de4*/
    v20[1] = 0; /*0x6c9de8*/
    v20[2] = v6; /*0x6c9def*/
    ((TextGroup *)(v5))->SetRect( (unsigned int *)(v20)); /*0x6c9df3*/
    v17 = (unsigned short *)aP1[5]; /*0x6c9e0d*/
    ((Text *)((Text *)v5))->Layout( (unsigned short *)(v17), (int *)(&v15), (unsigned int *)(&v19), v6); /*0x6c9e11*/
    v14 = 0; /*0x6c9e1e*/
    v7 = aP1[4]; /*0x6c9e26*/
    v8 = *(unsigned int *)&v5[7] * (((unsigned int *)aP1)[3] - 1); /*0x6c9e29*/
    if ( v7 == 2 ) /*0x6c9e30*/
    {
      v9 = (v6 - v15) / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( v7 != 1 ) /*0x6c9e44*/
      {
LABEL_7:
        v13 = v6; /*0x6c9e52*/
        pad_0 = v18->__pad_0; /*0x6c9e66*/
        Font::Print( (AbstractClass *)((int)v5),(gamemd::AbstractClass *)( (&v18->BinkMovie_field_0x10)[0]), (AbstractClass *)(v17), v14, (AbstractClass *)(v8), (AbstractClass *)(v13), (AbstractClass *)(v16), 0, 0, 0); /*0x6c9e78*/
        pad_0 += 9; /*0x6c9e7f*/
        *pad_0 = *BinkMovie_field_0x14; /*0x6c9e85*/
        pad_0[1] = BinkMovie_field_0x14[1]; /*0x6c9e8a*/
        pad_0[2] = BinkMovie_field_0x14[2]; /*0x6c9e90*/
        v11 = v15; /*0x6c9e93*/
        pad_0[3] = BinkMovie_field_0x14[3]; /*0x6c9e9e*/
        v12 = v19; /*0x6c9ea1*/
        *BinkMovie_field_0x14 = v14; /*0x6c9ea5*/
        BinkMovie_field_0x14[1] = v8; /*0x6c9ea8*/
        BinkMovie_field_0x14[2] = v11; /*0x6c9eab*/
        BinkMovie_field_0x14[3] = v12; /*0x6c9eae*/
        return; /*0x6c9eae*/
      }
      v9 = v6 - v15; /*0x6c9e4c*/
    }
    v14 = v9; /*0x6c9e4e*/
    goto LABEL_7; /*0x6c9e4e*/
  }

}
}
// 0x6C9EC0
namespace gamemd {
unsigned int * BinkMovie::VtableDispatch(int a2)
{

  int v3; // ecx

  v3 = a2; /*0x6c9ec3*/
  *(unsigned int *)this->__pad_0 = a2; /*0x6c9ec9*/
  *((unsigned int *)this + 513) = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (**)(int, int *, int))(*(unsigned int *)v3 + 8))( v3, (int *)(&a2), 2); /*0x6c9ede*/
  if ( (unsigned short)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log("Error: Subtitle control file is not unicode!\n"); /*0x6c9eef G57c1: IDA 0x6c9eef push offset aErrorSubtitleC*/
  return this->__pad_0; /*0x6c9ef9*/

}
}
// 0x6C99D0
namespace gamemd {
int * BinkMovie::CreateSurfaceTracker(char * FullPath)
{

  unsigned int *v2; // esi
  unsigned int *v3; // eax
  unsigned int *v4; // edi
  char Filename[256]; // [esp+Ch] [ebp-100h] BYREF

  if ( !FullPath || !strlen( (const char *)(FullPath)) ) /*0x6c99e7*/
    return 0; /*0x6c9ab2*/
  v2 = (unsigned int *)__2_YAPAXI_Z(0x34u); /*0x6c99ff*/
  if ( !v2 ) /*0x6c9a06*/
    return 0; /*0x6c9aa3*/
  *v2 = 0; /*0x6c9a14*/
  v2[1] = 0; /*0x6c9a16*/
  v2[2] = 0; /*0x6c9a19*/
  v2[3] = 0; /*0x6c9a1c*/
  v2[4] = 0; /*0x6c9a1f*/
  v2[5] = 0; /*0x6c9a23*/
  v2[6] = 0; /*0x6c9a26*/
  v2[7] = 0; /*0x6c9a29*/
  v2[8] = 0; /*0x6c9a2c*/
  _splitpath(FullPath, 0, 0, Filename, 0); /*0x6c9a2f*/
  if ( (uint8_t)BinkMovie::InitKeyframeTracking(Filename) == 1 ) /*0x6c9a45*/
  {
    v3 = (unsigned int *)__2_YAPAXI_Z(0x20u); /*0x6c9a49*/
    v4 = v3; /*0x6c9a4e*/
    if ( v3 ) /*0x6c9a55*/
    {
      v3[1] = 640; /*0x6c9a60*/
      v3[2] = 255; /*0x6c9a67*/
      v3[3] = 0; /*0x6c9a6e*/
      *v3 = (unsigned int)(&XSurface_Vtable); /*0x6c9a71*/
      v3[4] = 2; /*0x6c9a77*/
      ((Buffer *)0)->Init( 0x4FB00u); /*0x6c9a7e*/
      *v4 = (unsigned int)(&BSurface_Vtable); /*0x6c9a83*/
      (*(void (**)(unsigned int *, unsigned int))(*v4 + 24))( (unsigned int *)(v4), 0); /*0x6c9a8e*/
      v2[4] = (unsigned int)(v4); /*0x6c9a91*/
    }
  }
  return (int *)(v2); /*0x6c9a97*/

}
} // namespace gamemd
