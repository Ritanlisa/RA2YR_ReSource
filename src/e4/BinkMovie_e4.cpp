// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x432690
namespace gamemd {
unsigned int * BinkMovie::Close(char * FullPath)
{
  *(unsigned char *)this = 0; /*0x432695*/
  this->u32_4 = 0; /*0x432697*/
  this->q00C = 0; /*0x43269a*/
  this->q020 = 0; /*0x43269d*/
  this->q02D = 0; /*0x4326a0*/
  *(&this->u32_40) = -1; /*0x4326a8*/
  this->q02C = 1; /*0x4326af*/
  BinkMovie::InitFromFile(FullPath); /*0x4326b3*/
  return this; /*0x4326ba*/
}
}
// 0x4326C0
namespace gamemd {
unsigned int * BinkMovie::Open(char * FullPath, int a3)
{
  this->q00C = a3; /*0x4326ce*/
  *(unsigned char *)this = 0; /*0x4326d3*/
  this->u32_4 = 0; /*0x4326d5*/
  this->q020 = 0; /*0x4326d8*/
  *(&this->u32_40) = -1; /*0x4326db*/
  this->q02C = 1; /*0x4326e2*/
  this->q02D = 0; /*0x4326e6*/
  BinkMovie::InitFromFile(FullPath); /*0x4326e9*/
  return this; /*0x4326f0*/
}
}
// 0x432700
namespace gamemd {
int BinkMovie::Stop()
{
  void *v2; // edi
  int result; // eax

  v2 = *(void **)(&this->q00C2); /*0x432704*/
  if ( v2 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker(this->q020); /*0x43270d*/
    RA2_OPDEL(v2); /*0x432713*/
    this->q020 = 0; /*0x43271b*/
  }
  if ( this->u32_4 ) /*0x432722*/
  {
    BinkClose(this->u32_4); /*0x43272a*/
    this->u32_4 = 0; /*0x432730*/
  }
  result = this->q028; /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(*(HANDLE *)(&this->u32_100)); /*0x432740*/
    this->q028 = -1; /*0x432746*/
  }
  return result; /*0x43274d*/
}
}
// 0x432750
namespace gamemd {
AbstractClass * * BinkMovie::InitFromFile(LPCSTR * FullPath)
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
  void * v19;
  int v21; // eax
  LPCSTR *v22; // ecx
  int v23; // edx
  LPCSTR v24; // eax
  LONG bottom; // edi
  LONG left; // eax
  LONG v27; // edx
  LONG lDistanceToMove[5]; // [esp+10h] [ebp-68h] BYREF
  struct tagRECT Rect; // [esp+24h] [ebp-54h] BYREF
  unsigned char v31[16]; // [esp+44h] [ebp-34h] BYREF
  unsigned char v32[36]; // [esp+54h] [ebp-24h] BYREF

  v3 = 0; /*0x432759*/
  v4 = *(void **)(&this->q00C2); /*0x43275b*/
  if ( v4 ) /*0x432760*/
  {
    BinkMovie::FreeSurfaceTracker(this->q020); /*0x432764*/
    RA2_OPDEL(v4); /*0x43276a*/
    this->q020 = 0; /*0x432772*/
  }
  if ( this->u32_4 ) /*0x432775*/
  {
    BinkClose(this->u32_4); /*0x43277d*/
    this->u32_4 = 0; /*0x432783*/
  }
  if ( this->q028 != -1 ) /*0x43278c*/
  {
    CloseHandle(*(HANDLE *)(&this->u32_100)); /*0x43278f*/
    this->q028 = -1; /*0x432795*/
  }
  this->q00C = 0; /*0x43279c*/
  if ( Audio::IsSoundEnabled() ) /*0x43279f*/
  {
    v5 = Audio::GetDirectSound(); /*0x4327a8*/
    BinkSetSoundSystem(BinkOpenDirectSound, v5); /*0x4327b4*/
  }
  v6 = (char *)FullPath; /*0x4327ba*/
  v7 = RawFileClass::Construct(FullPath); /*0x4327c3*/
  v8 = (*(uint8_t (__thiscall **)(int, unsigned int))(*(unsigned int *)v7 + 20))(v7, 0) == 1; /*0x4327d6*/
  RawFileClass::Dtor(v32); /*0x4327d9*/
  if ( v8 ) /*0x4327e0*/
  {
    v9 = BinkOpen(v6, 0); /*0x4327e4*/
  LABEL_14:
    this->u32_4 = v9; /*0x43284f*/
    goto LABEL_15; /*0x43284f*/
  }
  lDistanceToMove[0] = 0; /*0x4327f8*/
  FullPath = 0; /*0x4327fc*/
  if ( (uint8_t)LookupFileInfoCache(&FullPath, lDistanceToMove, 0) == 1 ) /*0x43280a*/
  {
    FileA = CreateFileA(FullPath[3], 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x432824*/
    this->q028 = FileA; /*0x43282d*/
    if ( FileA != (HANDLE)-1 ) /*0x432830*/
    {
      SetFilePointer(FileA, lDistanceToMove[0], 0, 0); /*0x43283a*/
      v9 = BinkOpen(this->q028, &ToggleClass::`RTTI Class Hierarchy Descriptor'); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
  LABEL_15:
  if ( this->u32_4 )
  {
    dword_A8EB9C = dword_A8EB9C; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&dword_A8EB9C * 32768.0); /*0x43288d*/
    BinkSetVolume(this->u32_4, v13); /*0x432897*/
    this->u32_24 = 0x3C /*0x4328b5*/
                           / (unsigned int)(*(unsigned int *)(this->u32_4 + 20)
                                          / *(unsigned int *)(this->u32_4 + 24));
    v14 = (unsigned int *)BinkMovie::CreateSurfaceTracker(v6); /*0x4328b8*/
    v15 = this->u32_4; /*0x4328bd*/
    this->q020 = v14; /*0x4328c0*/
    v16 = 0; /*0x4328c3*/
    v17 = *v15; /*0x4328c5*/
    v18 = v15[1]; /*0x4328c7*/
    v19 = this->q00C; /*0x4328ca*/
    v18 = v18; /*0x4328cd*/
    if ( !v19 ) /*0x4328d3*/
    {
      if ( v14 && *v14 ) /*0x4328d9*/
      {
        g_DSurface_Hidden = g_DSurface_Hidden; /*0x4328e3*/
        this->q00C = g_DSurface_Hidden; /*0x4328e5*/
        v16 = ((*(int (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden + 124))(g_DSurface_Hidden) - v17) / 2; /*0x4328f9*/
        v21 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->u32_42) + 128))(this->q00C); /*0x4328fb*/
      }
      else
      {
        this->q00C = g_DSurface_Primary; /*0x43290d*/
        GetClientRect(g_hWnd, &Rect); /*0x432917*/
        v16 = (Rect.right - Rect.left - v17) / 2; /*0x432936*/
        v21 = Rect.bottom - Rect.top; /*0x432938*/
      }
      v3 = (v21 - v18) / 2; /*0x432943*/
    }
    FullPath = (LPCSTR *)(*(int (__thiscall **)(unsigned int, unsigned char *))(**(unsigned int **)(&this->u32_42) + 120))( /*0x43295e*/
                           this->q00C,
                           v31);
    Rect::Set(0, 0, 0, 0); /*0x432965*/
    v22 = (LPCSTR *)v3; /*0x43296e*/
    Rect.bottom = v18; /*0x432974*/
    Rect.left = v16; /*0x432978*/
    v23 = (int)FullPath[2]; /*0x43297c*/
    if ( v23 <= 0 ) /*0x432981*/
      goto LABEL_40; /*0x432981*/
    lDistanceToMove[0] = (LONG)FullPath[3]; /*0x43298c*/
    if ( lDistanceToMove[0] <= 0 || v17 <= 0 || v18 <= 0 ) /*0x4329a0*/
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
      bottom = (char *)FullPath + lDistanceToMove[0] - (char *)v22; /*0x432a07*/
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
    this->u32_10 = left; /*0x432a29*/
    this->u32_14 = v22; /*0x432a2c*/
    this->q018 = v27; /*0x432a2f*/
    this->q01C = bottom; /*0x432a32*/
    this->q008 = BinkDDSurfaceType(*(unsigned int *)(g_DSurface_Primary + 28)); /*0x432a44*/
    return 1; /*0x432a4a*/
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
  return BinkPause(this->u32_4, a2); /*0x432c44*/
}
}
// 0x432C50
namespace gamemd {
int BinkMovie::IsAtEnd()
{
  int v1; // eax
  unsigned int v2; // edx

  v1 = this->u32_4; /*0x432c50*/
  v2 = *(unsigned int *)(v1 + 12); /*0x432c54*/
  return v2 >= *(unsigned int *)(v1 + 8) || v2 < *(unsigned int *)((char *)&this->q02D + 3); /*0x432c5c*/
}
}
// 0x432C70
namespace gamemd {
AbstractClass * * BinkMovie::Play()
{
  const char *Error; // eax
  void (__stdcall *v4)(HWND, LPPOINT); // ebp
  int v5; // eax
  unsigned int v6; // ecx
  void * v7;
  int v8; // eax
  int v9; // ecx
  void * v10;
  unsigned int v11[4]; // [esp+4h] [ebp-4Ch] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v13; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( this->u32_4 )
  {
    Timer::PumpMessages(g_BinkMoviePlayer); /*0x432c9f*/
    v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    *(unsigned int *)((char *)&this->q084 + 44) = 1; /*0x432cb0*/
    *(unsigned int *)((char *)&this->q084 + 48) = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      v5 = this->u32_4; /*0x432cb8*/
      v6 = v5->vtable4; /*0x432cbb*/
      if ( v6 >= v5->vtable3 || v6 < *(unsigned int *)((char *)&this->q02D + 3) ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++dword_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog(&Msg, 0, 0) ) /*0x432d05*/
          return Timer::PumpMessages(g_BinkMoviePlayer); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !*(unsigned int *)((char *)&this->q084 + 44) ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        v7 = this->q00C; /*0x432d32*/
        if ( v7 == g_DSurface_Primary ) /*0x432d3d*/
        {
          GetClientRect(g_hWnd, &Rect); /*0x432d4a*/
          v4(g_hWnd, (LPPOINT)&Rect); /*0x432d58*/
          BinkMovie::RenderLoop( /*0x432d74*/
            this->q00C,
            Rect.left + this->u32_10,
            Rect.top + this->u32_14);
        }
        else if ( (uint8_t)BinkMovie::RenderLoop(v7, this->u32_10, this->u32_14) ) /*0x432d89*/
        {
          GetClientRect(g_hWnd, &v13); /*0x432d9e*/
          v4(g_hWnd, (LPPOINT)&v13); /*0x432dab*/
          v8 = this->u32_10; /*0x432db4*/
          v9 = this->u32_14; /*0x432db6*/
          v11[2] = this->q018; /*0x432dbc*/
          v11[3] = this->q01C; /*0x432dc9*/
          v10 = this->q00C; /*0x432dd3*/
          v11[1] = v13.top + v9; /*0x432dd6*/
          v11[0] = v13.left + v8; /*0x432de1*/
          (*(void (__thiscall **)(int, unsigned int *, int, unsigned char *, unsigned int, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x432dec*/
            g_DSurface_Primary,
            v11,
            v10,
            &this->u32_10,
            0,
            1);
          v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( (uint16_t)EventQueue::Process(g_BinkMoviePlayer) /*0x432e21*/
          && !*this
          && (uint16_t)EventQueue::Read(g_BinkMoviePlayer) == 2075 )
        {
          return Timer::PumpMessages(g_BinkMoviePlayer); /*0x432e21*/
        }
      }
    }
    return Timer::PumpMessages(g_BinkMoviePlayer); /*0x432e27*/
  }
  else
  {
    Error = (const char *)BinkGetError(); /*0x432c7d*/
    return Debug::Log("Bink Error: %s\n", Error);
  }
}
}
// 0x432E40
namespace gamemd {
int BinkMovie::RenderLoop(DSurface * aP1, int a3, int a4)
{
  int v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  int v9; // eax
  bool result; // al
  int v12; // ecx
  char v13; // bl
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // [esp-Ch] [ebp-24h]
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  int v19; // [esp+1Ch] [ebp+4h]

  if ( *(float *)&dword_89C490 != *(float *)&dword_A8EB9C ) /*0x432e58*/
  {
    dword_89C490 = dword_A8EB9C; /*0x432e5f*/
    v5 = Math::RoundToInt(*(float *)&dword_A8EB9C * 32768.0); /*0x432e70*/
    BinkSetVolume(this->u32_10, v5); /*0x432e7a*/
  }
  v6 = this->q02C; /*0x432e87*/
  if ( g_DDraw_Active ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log(aResumeBinkMovi); /*0x432ebf*/
      v8 = this->u32_10; /*0x432ec4*/
      this->q02C = 1; /*0x432eca*/
      BinkPause(v8, 0); /*0x432ed1*/
      v9 = *(unsigned int *)((char *)&this->q02D + 3); /*0x432ed7*/
      if ( v9 == g_DSurface_Primary ) /*0x432ee2*/
      {
        GetClientRect(g_hWnd, &Rect); /*0x432ef0*/
        ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x432f02*/
        BinkMovie::RenderSingleFrame( /*0x432f22*/
          *(unsigned int *)((char *)&this->q02D + 3),
          IDA_LOBYTE(Rect.left) + *(unsigned char *)&this->u32_10,
          Rect.top + this->q050,
          1);
      }
      else
      {
        BinkMovie::RenderSingleFrame(v9, this->q040, this->q050, 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log(aPauseBinkMovie); /*0x432e99*/
    v7 = this->u32_10; /*0x432e9e*/
    this->q02C = 0; /*0x432ea4*/
    BinkPause(v7, 1); /*0x432eab*/
  }
  if ( *(unsigned char *)&this->q02D || (result = BinkWait(this->u32_10) == 0) ) /*0x432f49*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame(this->u32_10); /*0x432f62*/
      v12 = this->q080; /*0x432f68*/
      v13 = 0; /*0x432f6b*/
      *(unsigned char *)&this->q02D = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = BinkMovie::CheckKeyframeTransition(*(unsigned int *)((char *)&this->q084 + 12) * *(unsigned int *)(this->u32_10 + 12)); /*0x432f85*/
        if ( v13 ) /*0x432f89*/
          BinkMovie::AdjustSurfaceFormat(aP1); /*0x432f8e*/
      }
      v19 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)aP1 + 92))(aP1, 0, 0); /*0x432fa0*/
      if ( v19 ) /*0x432fa4*/
      {
        v14 = (*(int (__thiscall **)(int))(*(unsigned int *)aP1 + 116))(aP1); /*0x432fb1*/
        v15 = (*(int (__thiscall **)(int))(*(unsigned int *)aP1 + 128))(aP1); /*0x432fb3*/
        v16 = this->q020; /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer(this->u32_10, v19, v14, v15, a3, a4, v16); /*0x432fdc*/
        (*(void (__thiscall **)(int))(*(unsigned int *)aP1 + 96))(aP1); /*0x432fe6*/
      }
      BinkMovie::BlitToTarget(aP1); /*0x432fec*/
      v17 = this->u32_10; /*0x432ff4*/
      *(unsigned int *)((char *)&this->q084 + 60) = *(unsigned int *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame(v17); /*0x432ffb*/
    }
    while ( !BinkWait(this->u32_10) ); /*0x43300d*/
    return 1; /*0x433016*/
  }
  return result; /*0x432f50*/
}
}
// 0x433040
namespace gamemd {
int BinkMovie::RenderFrameToSurface()
{
  return BinkMovie::RenderLoop(this->q00C, this->u32_10, this->u32_14); /*0x433051*/
}
}
// 0x4331F0
namespace gamemd {
unsigned int * BinkMovie::RenderSingleFrame(DSurface * aP1, int a3, int a4, char a5)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // ecx

  if ( a5 ) /*0x4331ff*/
    BinkMovie::AdjustSurfaceFormat(aP1); /*0x433202*/
  v6 = (*(int (__thiscall **)(int, unsigned int, unsigned int))(*(unsigned int *)aP1 + 92))(aP1, 0, 0); /*0x433214*/
  if ( v6 ) /*0x433218*/
  {
    v7 = (*(int (__thiscall **)(int))(*(unsigned int *)aP1 + 116))(aP1); /*0x433226*/
    v8 = (*(int (__thiscall **)(int))(*(unsigned int *)aP1 + 128))(aP1); /*0x433228*/
    v9 = *(unsigned int *)&this->q008; /*0x433232*/
    if ( a5 ) /*0x433237*/
      v9 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer(this->u32_4, v6, v7, v8, a3, a4, v9); /*0x433251*/
    (*(void (__thiscall **)(int))(*(unsigned int *)aP1 + 96))(aP1); /*0x43325b*/
  }
  return BinkMovie::BlitToTarget(aP1); /*0x433267*/
}
}
// 0x433270
namespace gamemd {
unsigned int * BinkMovie::BlitToTarget(DSurface * aP1)
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

  result = (unsigned int *)this->q020; /*0x433277*/
  if ( result ) /*0x43327c*/
  {
    if ( *result ) /*0x433282*/
    {
      v4 = result + 5; /*0x43328e*/
      if ( (int)result[7] > 0 && (int)result[8] > 0 ) /*0x43329e*/
      {
        v5 = result[4]; /*0x4332a6*/
        v6 = (*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v5 + 120))(v5, v16); /*0x4332b2*/
        v13 = *(unsigned int *)(v6 + 8); /*0x4332cb*/
        v7 = *v4; /*0x4332d4*/
        v14 = *(unsigned int *)(v6 + 12); /*0x4332d6*/
        v8 = v4[1]; /*0x4332da*/
        v15[2] = v4[2]; /*0x4332e0*/
        v9 = this->q018; /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        v11 = this->q01C - v14 + v8; /*0x433309*/
        v12 = this->u32_14; /*0x43330b*/
        v15[0] = this->u32_10 + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
        return (unsigned int *)(*(int (__thiscall **)(int, unsigned int *, int, int *, int, int))(*(unsigned int *)aP1 + 8))( /*0x433323*/
                           aP1,
                           v15,
                           v5,
                           v4,
                           1,
                           1);
      }
    }
  }
  return result; /*0x433328*/
}
}
// 0x433330
namespace gamemd {
int BinkMovie::AdjustSurfaceFormat(DSurface * aP1)
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
  int v13; // [esp+14h] [ebp-20h]
  int v14; // [esp+18h] [ebp-1Ch]
  unsigned char v15[16]; // [esp+24h] [ebp-10h] BYREF

  result = this->frameDecoded; /*0x433336*/
  if ( result ) /*0x43333b*/
  {
    if ( *(unsigned int *)result ) /*0x433341*/
    {
      v9 = *(unsigned int *)(result + 36); /*0x433351*/
      v10 = *(unsigned int *)(result + 40); /*0x433358*/
      v11 = *(unsigned int *)(result + 44); /*0x43335f*/
      v4 = *(unsigned int *)(result + 48); /*0x433363*/
      v4 = v4; /*0x433368*/
      if ( v11 > 0 && v4 > 0 ) /*0x433370*/
      {
        v5 = (int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(**(unsigned int **)(result + 16) + 120))( /*0x43337d*/
                      *(unsigned int *)(result + 16),
                      v15);
        v13 = *v5; /*0x433384*/
        v14 = v5[1]; /*0x43338b*/
        v6 = v5[3]; /*0x433392*/
        v7 = this->totalFrames - v5[2]; /*0x43339a*/
        v8 = this->throttleCounter - v6 + v10; /*0x4333b0*/
        v9 += this->height + (((int)v7 - IDA_HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = this->currentFrame + v8; /*0x4333c5*/
        return (*(int (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)aP1 + 20))(aP1, &v9, 0); /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/
}
}
// 0x5C01F0
namespace gamemd {
void BinkMovie::Cleanup()
{
  void *v2; // edi
  void *v3; // edi

  if ( *this ) /*0x5c01f4*/
  {
    DSurface::FlipIfNeeded(); /*0x5c01fa*/
    v2 = (void *)*this; /*0x5c01ff*/
    if ( *this ) /*0x5c01ff*/
    {
      CCFileClass::Cleanup(); /*0x5c0207*/
      RA2_OPDEL(v2); /*0x5c020d*/
    }
  }
  v3 = (void *)*(&this->vtable28); /*0x5c0215*/
  if ( v3 ) /*0x5c021a*/
  {
    BinkMovie::FreeSurfaceTracker((int *)*(&this->vtable28)); /*0x5c021e*/
    RA2_OPDEL(v3); /*0x5c0224*/
    *(&this->vtable28) = 0; /*0x5c022c*/
  }
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
  if ( !g_DialogHashMap_Count ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  v3 = (unsigned int *)*((unsigned int *)g_DialogHashMap_Base + (g_DialogHashMap_Hasher(&v9) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x603421*/
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
  HWND *v6; // eax
  int result; // eax
  UINT v8; // ebp
  void (__thiscall ***v9)(unsigned int, int); // eax
  HWND v11; // edi
  void (__thiscall ***v12)(unsigned int, int); // ecx
  void (__thiscall ***v13)(unsigned int, int); // ecx
  LRESULT (__stdcall *v14)(HWND, UINT, WPARAM, LPARAM); // esi
  LONG right; // edx
  LONG v29; // edi
  LONG v30; // ecx
  LONG v33; // eax
  struct tagRECT *v36; // eax
  HWND v39; // esi
  LONG WindowLongA; // eax
  void (__thiscall ***v48)(unsigned int, int); // ecx
  HWND v49; // edi
  void (__thiscall ***v50)(unsigned int, int); // ecx
  UINT v54; // eax
  void (__thiscall ***v55)(unsigned int, int); // ecx
  int i; // eax
  HWND v58; // eax
  HWND v59; // edi
  unsigned int *j; // eax
  HWND Parent; // eax
  UINT v62; // eax
  LPARAM v63; // edi
  LPARAM v64; // eax
  HWND v66; // edi
  void (__thiscall ***v67)(unsigned int, int); // ecx
  void (__thiscall ***v69)(unsigned int, int); // ecx
  void (__thiscall ***v71)(unsigned int, int); // ecx
  void (__thiscall ***v72)(unsigned int, int); // ecx
  LRESULT (__stdcall **v76)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND v80; // [esp+36h] [ebp-78h] BYREF
  struct tagRECT v81; // [esp+3Ah] [ebp-74h] BYREF
  struct tagRECT Rect; // [esp+4Eh] [ebp-60h] BYREF
  struct tagRECT v84; // [esp+5Eh] [ebp-50h] BYREF
  struct tagRECT v85; // [esp+6Eh] [ebp-40h] BYREF
  LONG left; // [esp+7Eh] [ebp-30h] BYREF
  LONG top; // [esp+82h] [ebp-2Ch]
  int v88; // [esp+86h] [ebp-28h]
  int v89; // [esp+8Ah] [ebp-24h]
  struct tagRECT X; // [esp+8Eh] [ebp-20h] BYREF

  v4 = hWnd;
  unsigned int * v5 = 0;
  v80 = hWnd;
  if ( g_DialogHashMap_Count )
  {
    v6 = (HWND *)*((unsigned int *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v80) & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( v6 )
    {
      while ( *v6 != v80 )
      {
        v6 = (HWND *)v6[129];
        if ( !v6 )
          goto LABEL_7;
      }
      v5 = v6 + 1;
    }
LABEL_7:
    v4 = hWnd;
  }
  if ( !v5 )
    return 0;
  v8 = Msg;
  if ( Msg > 0x4D4 )
  {
    switch ( Msg )
    {
      case 0x4D5u:
        if ( v5[28] != 4 )
          return 0;
        v5[38] = lParam;
        InvalidateRect(hWnd, 0, 1);
        return 0;
      case 0x4D6u:
        result = -1;
        if ( v5[28] == 4 )
          return v5[38];
        return result;
      case 0x4D7u:
        if ( v5[28] != 4 )
          return 0;
        v5[41] = lParam;
        return 0;
      case 0x4DFu:
        if ( wParam < 0 || wParam >= DataGlobal_ABF3A0 )
          return 0;
        v66 = v4;
        v67 = (void (__thiscall ***)(unsigned int, int))v5[22];
        int v68 = *((unsigned int *)DataGlobal_ABF394 + wParam);
        if ( v67 )
        {
          (**v67)(v67, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v69 = (void (__thiscall ***)(unsigned int, int))v5[24];
        if ( v69 )
        {
          (**v69)(v69, 1);
          v5[24] = 0;
        }
        ScreenDialogToClient(v66, &X);
        unsigned int * v70 = CreateMovie(v68, DSurface_Alternate, 0);
        v5[22] = v70;
        if ( v70 )
          goto LABEL_165;
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(unsigned int, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4E0u:
        int v74 = v5[22];
        if ( !v74 )
          return 0;
        (*(void (__thiscall **)(int, int))(*(unsigned int *)v74 + 12))(v74, 1);
        return 0;
      case 0x4E1u:
        int v75 = v5[22];
        if ( !v75 )
          return 0;
        (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v75 + 12))(v75, 0);
        return 0;
      case 0x4E2u:
        v49 = v4;
        v48 = (void (__thiscall ***)(unsigned int, int))v5[22];
        if ( v48 )
          goto LABEL_100;
        goto LABEL_101;
      case 0x4E3u:
        v5[23] = wParam;
        return 0;
      case 0x4E4u:
        v66 = v4;
        v71 = (void (__thiscall ***)(unsigned int, int))v5[22];
        if ( v71 )
        {
          (**v71)(v71, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v72 = (void (__thiscall ***)(unsigned int, int))v5[24];
        if ( v72 )
        {
          (**v72)(v72, 1);
          v5[24] = 0;
        }
        ScreenDialogToClient(v66, &X);
        v70 = CreateMovie(lParam, DSurface_Alternate, 0);
        v5[22] = v70;
        if ( v70 )
        {
LABEL_165:
          (*(void (__thiscall **)(unsigned int *, LONG, LONG))(*v70 + 24))(v70, X.left, X.top);
          MoveWindow(v66, X.left, X.top, *(unsigned int *)(v5[22] + 8), *(unsigned int *)(v5[22] + 12), 0);
          SetTimer(v66, 0x65u, 0x22u, 0);
          return 0;
        }
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(unsigned int, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4EEu:
        if ( v5[28] != 1 || *((unsigned char *)v5 + 168) )
          return 0;
        *((unsigned char *)v5 + 168) = 1;
        v5[32] = 1;
        SetTimer(hWnd, 0, v5[33], 0);
        InvalidateRect(hWnd, 0, 0);
        return 0;
      case 0x4F0u:
        int v73 = v5[22];
        if ( !v73 )
          return 0;
        (*(void (__thiscall **)(int))(*(unsigned int *)v73 + 40))(v73);
        return 0;
      default:
        goto LABEL_34;
    }
  }
  if ( Msg == 1236 )
  {
    if ( v5[28] == 4 && *((unsigned char *)v5 + 168) )
    {
      KillTimer(v4, 0);
      *((unsigned char *)v5 + 168) = 0;
      return 0;
    }
    return 0;
  }
  if ( Msg > 0x497 )
  {
    switch ( Msg )
    {
      case 0x498u:
        v63 = lParam;
        if ( lParam != v5[59] )
          InvalidateRect(v4, 0, 0);
        if ( v63 == -1 )
          v5[59] = yTop;
        else
          v5[59] = v63;
        result = 0;
        break;
      case 0x4B1u:
        v64 = lParam;
        *((unsigned char *)v5 + 180) = 1;
        v5[46] = v64;
        result = 0;
        break;
      case 0x4B2u:
      case 0x4B4u:
        int v65 = v5[4];
        if ( v65 )
        {
          ScreenDialogToClient(v4, &v84);
          GetClientRect(hWnd, &v85);
          left = v84.left;
          top = v84.top;
          X.bottom = v85.bottom + 1;
          v89 = v85.bottom + 1;
          X.left = 0;
          X.top = 0;
          X.right = v85.right + 1;
          v88 = v85.right + 1;
          (*(void (__thiscall **)(int, LONG *, int, struct tagRECT *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))(
            DSurface_Alternate,
            &left,
            v65,
            &X,
            0,
            1);
          InvalidateRect(hWnd, 0, 0);
        }
        result = 1;
        break;
      case 0x4D3u:
        if ( !v5[30] || v5[28] != 4 || *((unsigned char *)v5 + 168) )
          return 0;
        *((unsigned char *)v5 + 168) = 1;
        Parent = GetParent(hWnd);
        v62 = BinkMovie::HandleKeyboard(Parent, hWnd);
        SetTimer(hWnd, 0, v62, 0);
        result = 0;
        break;
      default:
        goto LABEL_34;
    }
    return result;
  }
  if ( Msg == 1175 )
  {
    if ( g_DialogHashMap_Grow )
    {
      int v56 = g_DialogHashMap_Insert(&hWnd);
      v4 = hWnd;
      for ( i = *((unsigned int *)g_DialogHashMap_Entries + (v56 & ((1 << g_DialogHashMap_Insert) - 1))); i; i = *(unsigned int *)(i + 8) )
      {
        if ( *(HWND *)i == hWnd )
          break;
      }
    }
    v58 = GetParent(v4);
    v5[28] = 0;
    v59 = hWnd;
    v81.left = (LONG)v58;
    if ( g_DialogHashMap_Count )
    {
      for ( j = (unsigned int *)*((unsigned int *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v81) & ((1 << g_DialogHashMap_Buckets) - 1)));
            j;
            j = (unsigned int *)j[129] )
      {
        if ( *j == v81.left )
          break;
      }
    }
    GetDlgCtrlID(v59);
    v5[43] = 12;
    v5[59] = yTop;
    return 0;
  }
  if ( Msg <= 0xF )
  {
    if ( Msg == 15 )
    {
      if ( *((unsigned char *)v5 + 188) || v5[22] )
      {
        ValidateRect(v4, 0);
        return 0;
      }
      if ( !v5[4] )
      {
  unsigned int *v20; // ecx
        ScreenDialogToClient(v4, &X);
        GetClientRect(hWnd, &Rect);
        unsigned int * v17 = operator new(0x20u);
        if ( v17 )
        {
          int v18 = Rect.bottom + 1;
          int v19 = Rect.right + 1;
          v17[2] = Rect.bottom + 1;
          v17[1] = v19;
          v17[3] = 0;
          *v17 = &XSurface_Vtable;
          v17[4] = 2;
          Buffer::Init(v17 + 5, 0, 2 * v19 * v18);
          *v17 = &BSurface_Vtable;
          v20 = v17;
        }
        else
        {
          v20 = 0;
        }
        right = Rect.right;
        v5[4] = v20;
        ++g_GameScreenState;
        v81.left = X.left;
        v85.bottom = Rect.bottom + 1;
        v81.bottom = Rect.bottom + 1;
        v85.left = 0;
        v85.top = 0;
        v85.right = right + 1;
        v81.top = X.top;
        v81.right = right + 1;
        (*(void (__thiscall **)(unsigned int *, struct tagRECT *, int, struct tagRECT *, unsigned int, int))(*v20 + 8))(
          v20,
          &v85,
          DSurface_Alternate,
          &v81,
          0,
          1);
        v4 = hWnd;
      }
      ScreenDialogToClient(v4, &v84);
      if ( *((unsigned char *)v5 + 180) )
      {
        v85.left = v84.left;
        v85.top = v84.top;
        v85.bottom = v84.bottom - v84.top;
        int v22 = v5[46];
        v85.right = v84.right - v84.left;
        (*(void (__thiscall **)(int, struct tagRECT *, int))(*(unsigned int *)DSurface_Alternate + 20))(
          DSurface_Alternate,
          &v85,
          (*((uint8_t *)v5 + 184) >> g_BitShift_Green_0 << g_DDraw_BlueMask)
        | (IDA_BYTE1(v22) >> g_BitMask_Blue << g_BitMask_Green)
        | (IDA_BYTE2(v22) >> g_BitShift_Blue << g_BitShift_Blue));
      }
      unsigned int v23 = v5[28];
      bool v24 = v23 == 1;
      if ( v23 < 2 )
      {
        if ( v5[10] && (!v23 || *((unsigned char *)v5 + 168)) )
        {
          WindowLongA = GetWindowLongA(hWnd, -16);
          char v41 = 16;
          if ( (WindowLongA & 1) != 0 )
          {
            v41 = 17;
          }
          else if ( (WindowLongA & 2) != 0 )
          {
            v41 = 18;
          }
          int v42 = v5[59];
          if ( (WindowLongA & 0x8000000) != 0 )
            v42 = DataGlobal_AC1CB4;
          PrintFontLayout(
            DSurface_Alternate,
            (uint16_t *)v5[10],
            &v84,
            (unsigned int *)v5[25],
            v42,
            v41,
            v5[43],
            0,
            v5[32],
            v5[35]);
          int v43 = v5[36];
          if ( v43 != -1 )
            PlayVocClass(v43, 0x2000, 1.0, 0);
          if ( v24 )
          {
            signed int v44 = wcslen((const wchar_t *)v5[10]) + v5[35] + 1;
            signed int v45 = v5[32];
            if ( v45 < v44 )
            {
              signed int v46 = v5[34] + v45;
              v5[32] = v46;
              if ( v46 >= v44 )
                KillTimer(hWnd, 0);
            }
          }
        }
      }
      else
      {
        bool v25 = v23 == 2;
        bool v26 = v23 == 3;
        bool v78 = v23 == 3;
        bool v27 = v23 == 4;
        bool v77 = v27;
        if ( (v25 || v26 || v27) && (signed int)(GetTickCount() - v5[39]) > v5[40] )
        {
          Rect.left = v84.left;
          Rect.top = v84.top;
          Rect.right = v84.right - v84.left;
          Rect.bottom = v84.bottom - v84.top;
          GetClientRect(hWnd, &v85);
          left = v85.left;
          top = v85.top;
          v89 = v85.bottom - v85.top;
          v88 = v85.right - v85.left;
          (*(void (__thiscall **)(int, struct tagRECT *, unsigned int, LONG *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))(
            DSurface_Alternate,
            &Rect,
            v5[4],
            &left,
            0,
            1);
          if ( v25 )
          {
            int v28 = v5[5];
            if ( v28 )
            {
              v29 = (*(int (__thiscall **)(int))(*(unsigned int *)v28 + 124))(v28);
              v30 = (*(int (__thiscall **)(int))(*(unsigned int *)v28 + 128))(v28);
              v81 = Rect;
              if ( Rect.right > v29 )
              {
                v81.right = v29;
                v81.left = Rect.left + (Rect.right - v29) / 2;
              }
              if ( Rect.bottom > v30 )
              {
                v81.bottom = v30;
                v81.top += (Rect.bottom - v30) / 2;
              }
              Surface::BlitTransparent(
                &v81.left,
                DSurface_Alternate,
                v28,
                (255 >> g_BitShift_Green_0 << g_DDraw_BlueMask) | (255 >> g_BitShift_Blue << g_BitShift_Blue));
              ValidateRect(hWnd, 0);
              return 0;
            }
          }
          else if ( v78 || v77 )
          {
            int v31 = v5[30];
            if ( v31 )
            {
              int v32 = Rect.left;
              v33 = *(int16_t *)(v31 + 4);
              int v34 = Rect.top;
              int v82 = v5[29];
              v81.left = v33;
              int v35 = *(int16_t *)(v31 + 2);
              X.right = Rect.right;
              if ( Rect.right > v35 )
                v32 = Rect.left + (Rect.right - v35) / 2;
              if ( Rect.bottom > v81.left )
                v34 = (Rect.bottom - v81.left) / 2 + Rect.top;
              v81.left = v32;
              v81.top = v34;
              v36 = (struct tagRECT *)(*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)DSurface_Alternate + 120))(
                                        DSurface_Alternate,
  unsigned int v91[4]; // [esp+9Eh] [ebp-10h] BYREF
                                        v91);
              unsigned int v37 = v5[38];
              X = *v36;
              DrawToSurfaceSHP(DSurface_Alternate, v82, v31, v37, &v81.left, &X.left, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
              if ( v77 )
              {
                if ( *((unsigned char *)v5 + 168) )
                {
                  signed int v38 = v37 + 1;
                  if ( v38 >= v5[37] )
                    v38 = 0;
                  v5[38] = v38;
                  v39 = (HWND)v5[41];
                  if ( v39 )
                  {
                    SendMessageA(v39, 0x4D8u, v38, (LPARAM)hWnd);
                    ValidateRect(hWnd, 0);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      ValidateRect(hWnd, 0);
      return 0;
    }
    if ( Msg != 2 )
    {
      if ( Msg != 3 && Msg != 5 )
        goto LABEL_34;
LABEL_118:
      v55 = (void (__thiscall ***)(unsigned int, int))v5[4];
      if ( v55 )
        (**v55)(v55, 1);
      v5[4] = 0;
      InvalidateRect(hWnd, 0, 0);
      return 0;
    }
    v9 = (void (__thiscall ***)(unsigned int, int))v5[4];
    if ( v9 )
    {
      (**v9)(v9, 1);
      v5[4] = 0;
      v4 = hWnd;
    }
    if ( *((unsigned char *)v5 + 124) )
    {
      RA2_OPDEL((void *)v5[30]);
      v5[30] = 0;
      v4 = hWnd;
    }
    int v10 = v5[28];
    if ( v10 == 1 )
    {
      if ( *((unsigned char *)v5 + 168) )
        goto LABEL_28;
    }
    else if ( v10 == 4 )
    {
LABEL_28:
      KillTimer(v4, 0);
      v4 = hWnd;
    }
    v11 = v4;
    v12 = (void (__thiscall ***)(unsigned int, int))v5[22];
    if ( v12 )
    {
      (**v12)(v12, 1);
      v5[22] = 0;
    }
    KillTimer(v11, 0x65u);
    v13 = (void (__thiscall ***)(unsigned int, int))v5[24];
    if ( v13 )
    {
      (**v13)(v13, 1);
      v5[24] = 0;
    }
    v4 = hWnd;
    goto LABEL_34;
  }
  if ( Msg == 71 )
    goto LABEL_118;
  if ( Msg == 275 )
  {
  char v52; // bl
    if ( wParam == 101 )
    {
      int v47 = v5[22];
      if ( v47 )
      {
        if ( (*(uint8_t (__thiscall **)(int))(*(unsigned int *)v47 + 4))(v47) )
          InvalidateRect(hWnd, 0, 0);
        if ( (*(uint8_t (__thiscall **)(unsigned int))(*(unsigned int *)v5[22] + 20))(v5[22]) )
        {
          if ( v5[23] )
          {
            (*(void (__thiscall **)(unsigned int, int))(*(unsigned int *)v5[22] + 28))(v5[22], 1);
            Debug::Log();
            return 0;
          }
          v48 = (void (__thiscall ***)(unsigned int, int))v5[22];
          v49 = hWnd;
          if ( v48 )
          {
LABEL_100:
            (**v48)(v48, 1);
            v5[22] = 0;
          }
LABEL_101:
          KillTimer(v49, 0x65u);
          v50 = (void (__thiscall ***)(unsigned int, int))v5[24];
          if ( v50 )
          {
LABEL_174:
            (**v50)(v50, 1);
            v5[24] = 0;
            return 0;
          }
        }
      }
      return 0;
    }
    int v51 = v5[28];
    if ( v51 == 1 )
    {
      InvalidateRect(v4, 0, 1);
      return 0;
    }
    bool v79 = v51 == 4;
    if ( v51 == 2 || v51 == 3 )
    {
      v52 = 1;
    }
    else
    {
      v52 = 0;
      if ( v51 != 4 )
        return 0;
    }
    if ( (signed int)(GetTickCount() - v5[39]) > v5[40] )
    {
      if ( v52 || v79 && *((unsigned char *)v5 + 168) )
      {
        InvalidateRect(hWnd, 0, 1);
        if ( v52 )
        {
          KillTimer(hWnd, 0);
          return 0;
        }
      }
      if ( !v5[37] )
      {
        KillTimer(hWnd, 0);
        int v53 = v5[30];
        if ( v53 )
        {
          v54 = *(int16_t *)(v53 + 6);
          v5[37] = v54;
          SetTimer(hWnd, 0, v54, 0);
          return 0;
        }
      }
    }
    return 0;
  }
LABEL_34:
  v14 = 0;
  if ( g_DialogHashMap_Grow )
  {
    int v15 = g_DialogHashMap_Insert(&hWnd);
    v4 = hWnd;
    int v16 = *((unsigned int *)g_DialogHashMap_Entries + (v15 & ((1 << g_DialogHashMap_Insert) - 1)));
    if ( v16 )
    {
      while ( *(HWND *)v16 != hWnd )
      {
        v16 = *(unsigned int *)(v16 + 8);
        if ( !v16 )
          return CallWindowProcA(v14, v4, v8, wParam, lParam);
      }
      v76 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v16 + 4);
      if ( v76 )
        v14 = *v76;
    }
  }
  return CallWindowProcA(v14, v4, v8, wParam, lParam);
}
} // namespace gamemd

// 0x6C9930
namespace gamemd {
void BinkMovie::Destroy()
{
  if ( this->u32_14 ) /*0x6c9930*/
    RA2_OPDEL(this->abstractFlags); /*0x6c9938*/
}
}
// 0x6C9AE0
namespace gamemd {
int BinkMovie::FreeSurfaceTracker()
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  void *v5; // edi
  int (__thiscall ***v6)(unsigned int, int); // ecx

  result = *this; /*0x6c9ae3*/
  if ( *this ) /*0x6c9ae3*/
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
          BinkMovie::Destroy(*(unsigned int *)(v4 + 4 * v3)); /*0x6c9b00*/
          RA2_OPDEL(v5); /*0x6c9b06*/
        }
        result = *this; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(unsigned int *)(*&this->u32_10) ); /*0x6c9b14*/
    }
    if ( *this ) /*0x6c9b17*/
      result = (**(int (__thiscall ***)(int, int))*this)(*this, 1); /*0x6c9b22*/
  }
  v6 = (int (__thiscall ***)(unsigned int, int))this->uniqueId; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)(v6, 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/
}
}
// 0x6C9B40
namespace gamemd {
int BinkMovie::InitKeyframeTracking(char * Source)
{
  int v3; // eax
  unsigned int v5[4]; // [esp+Ch] [ebp-888h] BYREF
  char v6; // [esp+1Ch] [ebp-878h]
  unsigned int v7[22]; // [esp+20h] [ebp-874h] BYREF
  unsigned char v8[12]; // [esp+78h] [ebp-81Ch] BYREF
  int v9; // [esp+84h] [ebp-810h]
  unsigned char v10[2056]; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen(Source) ) /*0x6c9b64*/
    return 0; /*0x6c9b6a*/
  CCFileClass::Construct(v7, aSubtitlemdTxt); /*0x6c9b79*/
  if ( !(uint8_t)CCFileClass::Open(0) ) /*0x6c9b8a*/
  {
  LABEL_6:
    v9 = 0; /*0x6c9bee*/
    Vector::Clear(v8); /*0x6c9bf5*/
    v7[0] = &off_7E1668; /*0x6c9bfe*/
    BufferIOFileClass::Dtor(v7); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  v5[1] = 0; /*0x6c9b9c*/
  v5[2] = 0; /*0x6c9ba0*/
  v5[3] = v7; /*0x6c9ba4*/
  v6 = 0; /*0x6c9ba8*/
  BinkMovie::VtableDispatch(v5); /*0x6c9bb4*/
  v3 = ParseMovieSubtitles(Source); /*0x6c9bc1*/
  *this = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(v10); /*0x6c9bd4*/
    FileStraw::Destructor(v5); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(v10); /*0x6c9c19*/
  FileStraw::Destructor(v5); /*0x6c9c22*/
  v9 = 0; /*0x6c9c33*/
  Vector::Clear(v8); /*0x6c9c3a*/
  v7[0] = &off_7E1668; /*0x6c9c43*/
  BufferIOFileClass::Dtor(v7); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/
}
}
// 0x6C9C60
namespace gamemd {
int BinkMovie::CheckKeyframeTransition(CellStruct * aP1)
{
  int v3; // ecx
  int v5; // eax
  char v6; // bl
  unsigned int *v7; // ecx
  void (*v8)(void); // eax
  unsigned int *v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int *v12; // edi
  unsigned int *v13; // esi

  v3 = *this; /*0x6c9c66*/
  if ( !v3 ) /*0x6c9c6a*/
    return 0; /*0x6c9c6d*/
  v5 = this->vtable2; /*0x6c9c73*/
  v6 = 0; /*0x6c9c7a*/
  if ( v5 < *(unsigned int *)(v3 + 16) ) /*0x6c9c83*/
  {
    do /*0x6c9cb3*/
    {
      v7 = *(unsigned int **)(*(unsigned int *)(v3 + 4) + 4 * v5); /*0x6c9c88*/
      if ( *v7 > aP1 ) /*0x6c9c8d*/
        break; /*0x6c9c8d*/
      this->vtable3 = v7; /*0x6c9c90*/
      this->vtable2 = v5 + 1; /*0x6c9c93*/
      v8 = (void (*)(void))this->vtable4; /*0x6c9c96*/
      if ( v8 ) /*0x6c9c9b*/
      {
        v8(); /*0x6c9c9d*/
      }
      else
      {
        BinkMovie::ProcessKeyframe(v7); /*0x6c9ca4*/
        v6 = 1; /*0x6c9ca9*/
      }
      v3 = *this; /*0x6c9cab*/
      v5 = this->vtable2; /*0x6c9cad*/
    }
    while ( v5 < *(unsigned int *)(*&this->u32_10) ); /*0x6c9cb3*/
  }
  v9 = (unsigned int *)this->vtable3; /*0x6c9cb5*/
  if ( v9 ) /*0x6c9cba*/
  {
    if ( aP1 >= *v9 + v9[1] ) /*0x6c9cc5*/
    {
      v10 = this->vtable4; /*0x6c9cc7*/
      this->vtable3 = 0; /*0x6c9cca*/
      if ( !v10 ) /*0x6c9ccf*/
      {
        v11 = this->uniqueId; /*0x6c9cd1*/
        if ( v11 ) /*0x6c9cd6*/
        {
          v12 = &this->abstractFlags; /*0x6c9cda*/
          (*(void (__thiscall **)(int, unsigned int *, unsigned int))(*(unsigned int *)v11 + 20))(v11, &this->abstractFlags, 0); /*0x6c9cdf*/
          v13 = &this->objectTypeFlags; /*0x6c9ce4*/
          v6 = 1; /*0x6c9ce7*/
          *v13 = *v12; /*0x6c9ceb*/
          v13[1] = v12[1]; /*0x6c9cf0*/
          v13[2] = v12[2]; /*0x6c9cf6*/
          v13[3] = v12[3]; /*0x6c9cfc*/
          *v12 = 0; /*0x6c9cff*/
          v12[1] = 0; /*0x6c9d01*/
          v12[2] = 0; /*0x6c9d04*/
          v12[3] = 0; /*0x6c9d07*/
        }
      }
    }
  }
  return v6; /*0x6c9c6c*/
}
}
// 0x6C9D40
namespace gamemd {
AbstractClass * * BinkMovie::ProcessKeyframe(ObjectClass * aP1)
{
  int v3; // ecx
  int *v4; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int *v10; // ebx
  int v14; // [esp+8h] [ebp-28h]
  int v15; // [esp+Ch] [ebp-24h] BYREF
  int v16; // [esp+10h] [ebp-20h]
  int v17; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+1Ch] [ebp-14h] BYREF
  unsigned int v20[4]; // [esp+20h] [ebp-10h] BYREF

  v3 = this->uniqueId; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
    v4 = &this->abstractFlags; /*0x6c9d5a*/
    (*(void (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)v3 + 20))(v3, &this->abstractFlags, 0); /*0x6c9d60*/
    g_FogOfWarState = g_FogOfWarState; /*0x6c9d6b*/
    Property::Set( /*0x6c9dba*/
      ((int)(uint8_t)aP1[2] >> g_BitMask_Red << g_BitShift_Blue)
    | ((uint8_t)IDA_BYTE2(aP1[2]) >> g_BitShift_Green_0 << g_BitShift_Red)
    | ((uint8_t)IDA_BYTE1(aP1[2]) >> g_BitMask_Blue << g_BitMask_Green));
    v6 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)this->uniqueId + 124))(this->uniqueId); /*0x6c9dca*/
    v16 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)this->uniqueId + 128))(this->uniqueId); /*0x6c9dd6*/
    v20[3] = v16; /*0x6c9ddc*/
    v20[0] = 0; /*0x6c9de4*/
    v20[1] = 0; /*0x6c9de8*/
    v20[2] = v6; /*0x6c9def*/
    TextGroup::SetRect(v20); /*0x6c9df3*/
    v17 = aP1[5]; /*0x6c9e0d*/
    Text::Layout(v17, &v15, &v19, v6); /*0x6c9e11*/
    v14 = 0; /*0x6c9e1e*/
    v7 = aP1[4]; /*0x6c9e26*/
    v8 = *(unsigned int *)(g_FogOfWarState + 28) * (aP1[3] - 1); /*0x6c9e29*/
    if ( v7 == 2 ) /*0x6c9e30*/
    {
      v9 = (v6 - v15) / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( v7 != 1 ) /*0x6c9e44*/
      {
  LABEL_7:
        v6 = v6; /*0x6c9e52*/
        v10 = this; /*0x6c9e66*/
        Font::Print(g_FogOfWarState, this->uniqueId, v17, v14, v8, v6, v16, 0, 0, 0); /*0x6c9e78*/
        v10 += 9; /*0x6c9e7f*/
        *v10 = *v4; /*0x6c9e85*/
        v10->u32_4 = v4[1]; /*0x6c9e8a*/
        v10->q008 = v4[2]; /*0x6c9e90*/
        v15 = v15; /*0x6c9e93*/
        v10->q00C = v4[3]; /*0x6c9e9e*/
        v19 = v19; /*0x6c9ea1*/
        *v4 = v14; /*0x6c9ea5*/
        v4[1] = v8; /*0x6c9ea8*/
        v4[2] = v15; /*0x6c9eab*/
        v4[3] = v19; /*0x6c9eae*/
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
  *this = a2; /*0x6c9ec9*/
  *(unsigned int *)((char *)&this->q579 + 651) = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (__thiscall **)(int, int *, int))(*(unsigned int *)v3 + 8))(v3, &a2, 2); /*0x6c9ede*/
  if ( (unsigned short)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log(); /*0x6c9eef*/
  return this; /*0x6c9ef9*/
}
}
// 0x6C99D0
namespace gamemd {
int * BinkMovie::CreateSurfaceTracker()
{
  unsigned int *v2; // esi
  unsigned int *v3; // eax
  unsigned int *v4; // edi
  char Filename[256]; // [esp+Ch] [ebp-100h] BYREF

  if ( !FullPath || !strlen(FullPath) ) /*0x6c99e7*/
    return 0; /*0x6c9ab2*/
  v2 = operator new(0x34u); /*0x6c99ff*/
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
    v3 = operator new(0x20u); /*0x6c9a49*/
    v4 = v3; /*0x6c9a4e*/
    if ( v3 ) /*0x6c9a55*/
    {
      v3[1] = 640; /*0x6c9a60*/
      v3[2] = 255; /*0x6c9a67*/
      v3[3] = 0; /*0x6c9a6e*/
      *v3 = &XSurface_Vtable; /*0x6c9a71*/
      v3[4] = 2; /*0x6c9a77*/
      Buffer::Init(0, 0x4FB00u); /*0x6c9a7e*/
      *v4 = &BSurface_Vtable; /*0x6c9a83*/
      (*(void (__thiscall **)(unsigned int *, unsigned int))(*v4 + 24))(v4, 0); /*0x6c9a8e*/
      v2[4] = v4; /*0x6c9a91*/
    }
  }
  return v2; /*0x6c9a97*/
}
} // namespace gamemd
