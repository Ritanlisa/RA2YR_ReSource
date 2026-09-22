// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x432690
namespace gamemd {
unsigned int * BinkMovie::Close(char * FullPath)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BinkMovie_Close(_DWORD *this, char *FullPath)
{
  *(_BYTE *)this = 0; /*0x432695*/
  this->q004 = 0; /*0x432697*/
  this->q00C = 0; /*0x43269a*/
  this->q020 = 0; /*0x43269d*/
  this->q02D = 0; /*0x4326a0*/
  this->q00A = -1; /*0x4326a8*/
  this->q02C = 1; /*0x4326af*/
  BinkMovie::InitFromFile(FullPath); /*0x4326b3*/
  return this; /*0x4326ba*/
}
}
} // namespace gamemd

// 0x4326C0
namespace gamemd {
unsigned int * BinkMovie::Open(char * FullPath, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BinkMovie_Open(_DWORD *this, char *FullPath, int a3)
{
  this->q00C = a3; /*0x4326ce*/
  *(_BYTE *)this = 0; /*0x4326d3*/
  this->q004 = 0; /*0x4326d5*/
  this->q020 = 0; /*0x4326d8*/
  this->q00A = -1; /*0x4326db*/
  this->q02C = 1; /*0x4326e2*/
  this->q02D = 0; /*0x4326e6*/
  BinkMovie::InitFromFile(FullPath); /*0x4326e9*/
  return this; /*0x4326f0*/
}
}
} // namespace gamemd

// 0x432700
namespace gamemd {
int BinkMovie::Stop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_Stop(int this)
{
  int result; // eax

  AbstractClass *v2 = this->q020; /*0x432704*/
  if ( v2 ) /*0x432709*/
  {
    BinkMovie::FreeSurfaceTracker(this->BinkMovie_field_0x20); /*0x43270d*/
    __3_YAXPAX_Z(v2); /*0x432713*/
    this->BinkMovie_field_0x20 = 0; /*0x43271b*/
  }
  if ( this->BinkMovie_field_0x4 ) /*0x432722*/
  {
    BinkClose(this->BinkMovie_field_0x4); /*0x43272a*/
    this->BinkMovie_field_0x4 = 0; /*0x432730*/
  }
  result = this->q00A; /*0x432737*/
  if ( result != -1 ) /*0x43273d*/
  {
    result = CloseHandle(this->q00A); /*0x432740*/
    this->q00A = -1; /*0x432746*/
  }
  return result; /*0x43274d*/
}
}
} // namespace gamemd

// 0x432750
namespace gamemd {
char BinkMovie::InitFromFile(LPCSTR * FullPath)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_432750(int this, LPCSTR *FullPath)
{
  int v9; // eax
  HANDLE FileA; // eax
  const char *Error; // eax
  int v13; // eax
  _DWORD *v14; // eax
  AbstractClass *v15; // ecx
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
  _BYTE v31[16]; // [esp+44h] [ebp-34h] BYREF
  _BYTE v32[36]; // [esp+54h] [ebp-24h] BYREF

  int v3 = 0; /*0x432759*/
  AbstractClass *v4 = this->q020; /*0x43275b*/
  if ( v4 ) /*0x432760*/
  {
    BinkMovie::FreeSurfaceTracker(this->BinkMovie_field_0x20); /*0x432764*/
    __3_YAXPAX_Z(v4); /*0x43276a*/
    this->BinkMovie_field_0x20 = 0; /*0x432772*/
  }
  if ( this->BinkMovie_field_0x4 ) /*0x432775*/
  {
    BinkClose(this->BinkMovie_field_0x4); /*0x43277d*/
    this->BinkMovie_field_0x4 = 0; /*0x432783*/
  }
  if ( this->q00A != -1 ) /*0x43278c*/
  {
    CloseHandle(this->q00A); /*0x43278f*/
    this->q00A = -1; /*0x432795*/
  }
  this->q00C = 0; /*0x43279c*/
  if ( Audio::IsSoundEnabled() ) /*0x43279f*/
  {
    int v5 = Audio::GetDirectSound(); /*0x4327a8*/
    BinkSetSoundSystem(BinkOpenDirectSound, v5); /*0x4327b4*/
  }
  char * v6 = (char *)FullPath; /*0x4327ba*/
  int v7 = RawFileClass::Construct(FullPath); /*0x4327c3*/
  bool v8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 20))(v7, 0) == 1; /*0x4327d6*/
  RawFileClass::Dtor(v32); /*0x4327d9*/
  if ( v8 ) /*0x4327e0*/
  {
    v9 = BinkOpen(v6, 0); /*0x4327e4*/
LABEL_14:
    this->BinkMovie_field_0x4 = v9; /*0x43284f*/
    goto LABEL_15; /*0x43284f*/
  }
  lDistanceToMove[0] = 0; /*0x4327f8*/
  FullPath = 0; /*0x4327fc*/
  if ( (unsigned __int8)LookupFileInfoCache(&FullPath, lDistanceToMove, 0) == 1 ) /*0x43280a*/
  {
    FileA = CreateFileA(FullPath[3], 0x80000000, 3u, 0, 3u, 0x8000080u, 0); /*0x432824*/
    this->q00A = FileA; /*0x43282d*/
    if ( FileA != (HANDLE)-1 ) /*0x432830*/
    {
      SetFilePointer(FileA, lDistanceToMove[0], 0, 0); /*0x43283a*/
      v9 = BinkOpen(this->q00A, &unk_800000); /*0x432849*/
      goto LABEL_14; /*0x432849*/
    }
  }
LABEL_15:
  if ( this->BinkMovie_field_0x4 )
  {
    flt_89C490 = DataGlobal_A8EB9C; /*0x43287c*/
    v13 = Math::RoundToInt(*(float *)&DataGlobal_A8EB9C * 32768.0); /*0x43288d*/
    BinkSetVolume(this->BinkMovie_field_0x4, v13); /*0x432897*/
    this->q024 = 0x3C /*0x4328b5*/
                           / (unsigned int)(*(_DWORD *)(this->BinkMovie_field_0x4 + 20)
                                          / *(_DWORD *)(this->BinkMovie_field_0x4 + 24));
    v14 = (_DWORD *)BinkMovie::CreateSurfaceTracker(v6); /*0x4328b8*/
    v15 = this->q004; /*0x4328bd*/
    this->BinkMovie_field_0x20 = v14; /*0x4328c0*/
    v16 = 0; /*0x4328c3*/
    v17 = *v15; /*0x4328c5*/
    v18 = v15[1]; /*0x4328c7*/
    v19 = this->BinkMovie_field_0xC; /*0x4328ca*/
    v30 = v18; /*0x4328cd*/
    if ( !v19 ) /*0x4328d3*/
    {
      if ( v14 && *v14 ) /*0x4328d9*/
      {
        v20 = g_DSurface_Hidden; /*0x4328e3*/
        this->BinkMovie_field_0xC = g_DSurface_Hidden; /*0x4328e5*/
        v16 = ((*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20) - v17) / 2; /*0x4328f9*/
        v21 = (*(int (__thiscall **)(_DWORD))(*this->q00C + 128))(this->BinkMovie_field_0xC); /*0x4328fb*/
      }
      else
      {
        this->BinkMovie_field_0xC = g_DSurface_Primary; /*0x43290d*/
        GetClientRect(g_hWnd, &Rect); /*0x432917*/
        v16 = (Rect.right - Rect.left - v17) / 2; /*0x432936*/
        v21 = Rect.bottom - Rect.top; /*0x432938*/
      }
      v3 = (v21 - v30) / 2; /*0x432943*/
    }
    FullPath = (LPCSTR *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*this->q00C + 120))( /*0x43295e*/
                           this->BinkMovie_field_0xC,
                           v31);
    Rect::Set(0, 0, 0, 0); /*0x432965*/
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
      v17 = v16 + v17 - (_DWORD)v24; /*0x4329af*/
    }
    if ( v17 < 1 ) /*0x4329b4*/
      goto LABEL_40; /*0x4329b4*/
    FullPath = (LPCSTR *)FullPath[1]; /*0x4329bb*/
    if ( v3 < (int)FullPath ) /*0x4329bf*/
    {
      v22 = FullPath; /*0x4329c9*/
      Rect.bottom += v3 - (_DWORD)FullPath; /*0x4329cb*/
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
    this->BinkMovie_field_0x10 = left; /*0x432a29*/
    this->BinkMovie_field_0x14 = v22; /*0x432a2c*/
    this->q018 = v27; /*0x432a2f*/
    this->q007 = bottom; /*0x432a32*/
    this->BinkMovie_field_0x8 = BinkDDSurfaceType(*(_DWORD *)(g_DSurface_Primary + 28)); /*0x432a44*/
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
} // namespace gamemd

// 0x432C30
namespace gamemd {
int BinkMovie::Pause(unsigned char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_Pause(_DWORD *this, unsigned __int8 a2)
{
  return BinkPause(this->q004, a2); /*0x432c44*/
}
}
} // namespace gamemd

// 0x432C50
namespace gamemd {
BOOL BinkMovie::IsAtEnd()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_IsAtEnd(_DWORD *this)
{

  int v1 = this->q004; /*0x432c50*/
  unsigned int v2 = *(_DWORD *)(v1 + 12); /*0x432c54*/
  return v2 >= *(_DWORD *)(v1 + 8) || v2 < this->q00C; /*0x432c5c*/
}
}
} // namespace gamemd

// 0x432C70
namespace gamemd {
int BinkMovie::Play()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_Play(_BYTE *this)
{
  const char *Error; // eax
  void (__stdcall *v4)(HWND, LPPOINT); // ebp
  struct tagRECT Rect; // [esp+14h] [ebp-3Ch] BYREF
  struct tagRECT v13; // [esp+24h] [ebp-2Ch] BYREF
  MSG Msg; // [esp+34h] [ebp-1Ch] BYREF

  if ( this->BinkMovie_field_0x4 )
  {
    Timer::PumpMessages(g_BinkMoviePlayer); /*0x432c9f*/
    v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432caa*/
    this->q02C = 1; /*0x432cb0*/
    this->q02D = 0; /*0x432cb4*/
    while ( 1 ) /*0x432cb8*/
    {
      int v5 = this->BinkMovie_field_0x4; /*0x432cb8*/
      unsigned int v6 = *(_DWORD *)(v5 + 12); /*0x432cbb*/
      if ( v6 >= *(_DWORD *)(v5 + 8) || v6 < this->q00C ) /*0x432ccc*/
        break; /*0x432ccc*/
      ++unk_AA0430; /*0x432cdd*/
      if ( GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x432ceb*/
      {
        if ( !IsMessageDialog(&Msg, 0, 0) ) /*0x432d05*/
          return Timer::PumpMessages(g_BinkMoviePlayer); /*0x432d05*/
        TranslateMessage(&Msg); /*0x432d10*/
        DispatchMessageA(&Msg); /*0x432d1b*/
      }
      else
      {
        if ( !this->q02C ) /*0x432d23*/
          Sleep(0x21u); /*0x432d2c*/
        int v7 = this->BinkMovie_field_0xC; /*0x432d32*/
        if ( v7 == g_DSurface_Primary ) /*0x432d3d*/
        {
          GetClientRect(g_hWnd, &Rect); /*0x432d4a*/
          v4(g_hWnd, (LPPOINT)&Rect); /*0x432d58*/
          BinkMovie::RenderLoop( /*0x432d74*/
            this->BinkMovie_field_0xC,
            Rect.left + this->BinkMovie_field_0x10,
            Rect.top + this->BinkMovie_field_0x14);
        }
        else if ( (unsigned __int8)BinkMovie::RenderLoop(v7, this->BinkMovie_field_0x10, this->BinkMovie_field_0x14) ) /*0x432d89*/
        {
          GetClientRect(g_hWnd, &v13); /*0x432d9e*/
          v4(g_hWnd, (LPPOINT)&v13); /*0x432dab*/
          int v8 = this->BinkMovie_field_0x10; /*0x432db4*/
          int v9 = this->BinkMovie_field_0x14; /*0x432db6*/
  _DWORD v11[4]; // [esp+4h] [ebp-4Ch] BYREF
          v11[2] = this->q018; /*0x432dbc*/
          v11[3] = this->q007; /*0x432dc9*/
          int v10 = this->BinkMovie_field_0xC; /*0x432dd3*/
          v11[1] = v13.top + v9; /*0x432dd6*/
          v11[0] = v13.left + v8; /*0x432de1*/
          (*(void (__thiscall **)(int, _DWORD *, int, _BYTE *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x432dec*/
            g_DSurface_Primary,
            v11,
            v10,
            this + 16,
            0,
            1);
          v4 = (void (__stdcall *)(HWND, LPPOINT))ClientToScreen; /*0x432def*/
        }
        if ( (unsigned __int16)EventQueue::Process(g_BinkMoviePlayer) /*0x432e21*/
          && !*this
          && (unsigned __int16)EventQueue::Read(g_BinkMoviePlayer) == 2075 )
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
} // namespace gamemd

// 0x432E40
namespace gamemd {
bool BinkMovie::RenderLoop(DSurface * aP1, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie::RenderLoop(int this, DSurface *aP1, int a3, int a4)
{
  bool result; // al
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF
  DSurface *aP1a; // [esp+1Ch] [ebp+4h]

  if ( flt_89C490[0] != *(float *)&g_NetworkPlayerBuffer[5472] ) /*0x432e58*/
  {
    flt_89C490[0] = *(float *)&g_NetworkPlayerBuffer[5472]; /*0x432e5f*/
    int v5 = Math::RoundToInt(*(float *)&g_NetworkPlayerBuffer[5472] * 32768.0); /*0x432e70*/
    BinkSetVolume(this->BinkMovie_field_0x4, v5); /*0x432e7a*/
  }
  char v6 = this->q02C; /*0x432e87*/
  if ( g_NetworkPlayerBuffer[5956] ) /*0x432e8a*/
  {
    if ( !v6 ) /*0x432eb8*/
    {
      Debug::Log(); /*0x432ebf*/
      int v8 = this->BinkMovie_field_0x4; /*0x432ec4*/
      this->q02C = 1; /*0x432eca*/
      BinkPause(v8, 0); /*0x432ed1*/
      int v9 = this->BinkMovie_field_0xC; /*0x432ed7*/
      if ( v9 == *(_DWORD *)&DataGlobal_87F8E4[31268] ) /*0x432ee2*/
      {
        GetClientRect((HWND)g_hWnd, &Rect); /*0x432ef0*/
        ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x432f02*/
        BinkMovie::RenderSingleFrame( /*0x432f22*/
          (_DWORD *)this,
          this->BinkMovie_field_0xC,
          Rect.left + this->BinkMovie_field_0x10,
          Rect.top + this->BinkMovie_field_0x14,
          1);
      }
      else
      {
        BinkMovie::RenderSingleFrame((_DWORD *)this, v9, this->BinkMovie_field_0x10, this->BinkMovie_field_0x14, 1); /*0x432f31*/
      }
    }
  }
  else if ( v6 == 1 ) /*0x432e8e*/
  {
    Debug::Log(); /*0x432e99*/
    int v7 = this->BinkMovie_field_0x4; /*0x432e9e*/
    this->q02C = 0; /*0x432ea4*/
    BinkPause(v7, 1); /*0x432eab*/
  }
  if ( this->q02D || (result = BinkWait(this->BinkMovie_field_0x4) == 0) ) /*0x432f49*/
  {
    do /*0x43300d*/
    {
      BinkDoFrame(this->BinkMovie_field_0x4); /*0x432f62*/
      _DWORD * v12 = this->q020; /*0x432f68*/
      char v13 = 0; /*0x432f6b*/
      this->q02D = 0; /*0x432f6f*/
      if ( v12 ) /*0x432f73*/
      {
        v13 = BinkMovie::CheckKeyframeTransition( /*0x432f85*/
                v12,
                (CellStruct *)(this->q024 * *(_DWORD *)(this->BinkMovie_field_0x4 + 12)));
        if ( v13 ) /*0x432f89*/
          BinkMovie::AdjustSurfaceFormat((int *)this, aP1); /*0x432f8e*/
      }
      aP1a = (DSurface *)(*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(aP1->field_0 + 92))(aP1, 0, 0); /*0x432fa0*/
      if ( aP1a ) /*0x432fa4*/
      {
        int v14 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 116))(aP1); /*0x432fb1*/
        int v15 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 128))(aP1); /*0x432fb3*/
        int v16 = this->BinkMovie_field_0x8; /*0x432fb9*/
        if ( v13 ) /*0x432fbe*/
          v16 |= 0x80000000; /*0x432fc0*/
        BinkCopyToBuffer(this->BinkMovie_field_0x4, aP1a, v14, v15, a3, a4, v16); /*0x432fdc*/
        (*(void (__thiscall **)(DSurface *))(aP1->field_0 + 96))(aP1); /*0x432fe6*/
      }
      BinkMovie::BlitToTarget((_DWORD *)this, aP1); /*0x432fec*/
      int v17 = this->BinkMovie_field_0x4; /*0x432ff4*/
      this->q00C = *(_DWORD *)(v17 + 12); /*0x432ff8*/
      BinkNextFrame(v17); /*0x432ffb*/
    }
    while ( !BinkWait(this->BinkMovie_field_0x4) ); /*0x43300d*/
    return 1; /*0x433016*/
  }
  return result; /*0x432f50*/
}
}
} // namespace gamemd

// 0x433040
namespace gamemd {
bool BinkMovie::RenderFrameToSurface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_RenderFrameToSurface(int *this)
{
  return BinkMovie::RenderLoop((int)this, this->q00C, this->q004, this->q014); /*0x433051*/
}
}
} // namespace gamemd

// 0x4331F0
namespace gamemd {
unsigned int * BinkMovie::RenderSingleFrame(DSurface * aP1, int a3, int a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BinkMovie::RenderSingleFrame(int *this, DSurface *aP1, int a3, int a4, char a5)
{

  if ( a5 ) /*0x4331ff*/
    BinkMovie::AdjustSurfaceFormat(this, aP1); /*0x433202*/
  int v6 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(aP1->field_0 + 92))(aP1, 0, 0); /*0x433214*/
  if ( v6 ) /*0x433218*/
  {
    int v7 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 116))(aP1); /*0x433226*/
    int v8 = (*(int (__thiscall **)(DSurface *))(aP1->field_0 + 128))(aP1); /*0x433228*/
    int v9 = this->q008; /*0x433232*/
    if ( a5 ) /*0x433237*/
      v9 |= 0x80000000; /*0x433239*/
    BinkCopyToBuffer(this->q004, v6, v7, v8, a3, a4, v9); /*0x433251*/
    (*(void (__thiscall **)(DSurface *))(aP1->field_0 + 96))(aP1); /*0x43325b*/
  }
  return BinkMovie::BlitToTarget(this, aP1); /*0x433267*/
}
}
} // namespace gamemd

// 0x433270
namespace gamemd {
unsigned int * BinkMovie::BlitToTarget(DSurface * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BinkMovie::BlitToTarget(_DWORD *this, DSurface *aP1)
{
  _DWORD *result; // eax

  result = (_DWORD *)this->q020; /*0x433277*/
  if ( result ) /*0x43327c*/
  {
    if ( *result ) /*0x433282*/
    {
      int * v4 = result + 5; /*0x43328e*/
      if ( (int)result[7] > 0 && (int)result[8] > 0 ) /*0x43329e*/
      {
        int v5 = result[4]; /*0x4332a6*/
  _BYTE v16[16]; // [esp+28h] [ebp-10h] BYREF
        int v6 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 120))(v5, v16); /*0x4332b2*/
        int v13 = *(_DWORD *)(v6 + 8); /*0x4332cb*/
        int v7 = *v4; /*0x4332d4*/
        int v14 = *(_DWORD *)(v6 + 12); /*0x4332d6*/
        int v8 = v4[1]; /*0x4332da*/
  _DWORD v15[4]; // [esp+18h] [ebp-20h] BYREF
        v15[2] = v4[2]; /*0x4332e0*/
        int v9 = this->q018; /*0x4332e4*/
        v15[3] = v4[3]; /*0x4332ea*/
        int v10 = (v9 - v13) / 2 + v7; /*0x4332fd*/
        int v11 = this->q007 - v14 + v8; /*0x433309*/
        int v12 = this->q014; /*0x43330b*/
        v15[0] = this->q010 + v10; /*0x43330e*/
        v15[1] = v12 + v11; /*0x43331c*/
        return (_DWORD *)(*(int (__thiscall **)(DSurface *, _DWORD *, int, int *, int, int))(aP1->field_0 + 8))( /*0x433323*/
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
} // namespace gamemd

// 0x433330
namespace gamemd {
int BinkMovie::AdjustSurfaceFormat(DSurface * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie::AdjustSurfaceFormat(DSurface *aP1)
{
  int result; // eax

  result = this->q008; /*0x433336*/
  if ( result ) /*0x43333b*/
  {
    if ( *(_DWORD *)result ) /*0x433341*/
    {
      int v9 = result->q024; /*0x433351*/
      int v10 = result->q028; /*0x433358*/
      int v11 = result->q02C; /*0x43335f*/
      int v4 = result->q00C; /*0x433363*/
      int v12 = v4; /*0x433368*/
      if ( v11 > 0 && v4 > 0 ) /*0x433370*/
      {
  int *v5; // eax
        v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*result->q010 + 120))( /*0x43337d*/
                      result->q010,
  _BYTE v15[16]; // [esp+24h] [ebp-10h] BYREF
                      v15);
        int v13 = *v5; /*0x433384*/
        int v14 = v5[1]; /*0x43338b*/
        int v6 = v5[3]; /*0x433392*/
        __int64 v7 = this->q018 - v5[2]; /*0x43339a*/
        int v8 = this->q007 - v6 + v10; /*0x4333b0*/
        v9 += this->q004 + (((int)v7 - HIDWORD(v7)) >> 1); /*0x4333bb*/
        v10 = this->q014 + v8; /*0x4333c5*/
        return (*(int (__thiscall **)(DSurface *, int *, _DWORD))(aP1->field_0 + 20))(aP1, &v9, 0); /*0x4333cf*/
      }
    }
  }
  return result; /*0x4333d3*/
}
}
} // namespace gamemd

// 0x5C01F0
namespace gamemd {
void BinkMovie::Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_Cleanup(_DWORD *this)
{

  if ( *this ) /*0x5c01f4*/
  {
    DSurface::FlipIfNeeded(); /*0x5c01fa*/
    void * v2 = (void *)*this; /*0x5c01ff*/
    if ( *this ) /*0x5c01ff*/
    {
      CCFileClass::Cleanup(*this); /*0x5c0207*/
      __3_YAXPAX_Z(v2); /*0x5c020d*/
    }
  }
  void * v3 = (void *)*(this + 18); /*0x5c0215*/
  if ( v3 ) /*0x5c021a*/
  {
    BinkMovie::FreeSurfaceTracker((int *)*(this + 18)); /*0x5c021e*/
    __3_YAXPAX_Z(v3); /*0x5c0224*/
    *(this + 18) = 0; /*0x5c022c*/
  }
}
}
} // namespace gamemd

// 0x6033F0
namespace gamemd {
int BinkMovie::HandleKeyboard(int a1, HWND a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BinkMovie::HandleKeyboard(int a1, HWND a2)
{
  int DlgCtrlID; // eax
  bool v6; // zf
  _DWORD *v7; // eax
  int v9; // [esp+8h] [ebp-4h] BYREF

  v9 = a1; /*0x6033fc*/
  if ( !g_DialogHashMap_Count ) /*0x603400*/
    goto LABEL_5; /*0x603400*/
  _DWORD * v3 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v9) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x603421*/
  if ( !v3 ) /*0x603426*/
    goto LABEL_5; /*0x603426*/
  while ( *v3 != v9 ) /*0x60342e*/
  {
    v3 = (_DWORD *)v3[129]; /*0x603434*/
    if ( !v3 ) /*0x60343c*/
      goto LABEL_5; /*0x60343c*/
  }
  v7 = v3 + 1; /*0x60359b*/
  if ( v7 ) /*0x6035a0*/
    int v4 = v7[27]; /*0x6035a6*/
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
} // namespace gamemd

// 0x6153E0
namespace gamemd {
int BinkMovie::WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam)
{
  HWND v4; // ecx
  HWND *v6; // eax
  int result; // eax
  UINT v8; // ebp
  void (__thiscall ***v9)(_DWORD, int); // eax
  HWND v11; // edi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  void (__thiscall ***v13)(_DWORD, int); // ecx
  LRESULT (__stdcall *v14)(HWND, UINT, WPARAM, LPARAM); // esi
  LONG right; // edx
  LONG v29; // edi
  LONG v30; // ecx
  LONG v33; // eax
  struct tagRECT *v36; // eax
  HWND v39; // esi
  LONG WindowLongA; // eax
  void (__thiscall ***v48)(_DWORD, int); // ecx
  HWND v49; // edi
  void (__thiscall ***v50)(_DWORD, int); // ecx
  UINT v54; // eax
  void (__thiscall ***v55)(_DWORD, int); // ecx
  int i; // eax
  HWND v58; // eax
  HWND v59; // edi
  _DWORD *j; // eax
  HWND Parent; // eax
  UINT v62; // eax
  LPARAM v63; // edi
  LPARAM v64; // eax
  HWND v66; // edi
  void (__thiscall ***v67)(_DWORD, int); // ecx
  void (__thiscall ***v69)(_DWORD, int); // ecx
  void (__thiscall ***v71)(_DWORD, int); // ecx
  void (__thiscall ***v72)(_DWORD, int); // ecx
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
  _DWORD v91[4]; // [esp+9Eh] [ebp-10h] BYREF

  v4 = hWnd;
  _DWORD * v5 = 0;
  v80 = hWnd;
  if ( g_DialogHashMap_Count )
  {
    v6 = (HWND *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v80) & ((1 << g_DialogHashMap_Buckets) - 1)));
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
        v67 = (void (__thiscall ***)(_DWORD, int))v5[22];
        int v68 = *((_DWORD *)DataGlobal_ABF394 + wParam);
        if ( v67 )
        {
          (**v67)(v67, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v69 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v69 )
        {
          (**v69)(v69, 1);
          v5[24] = 0;
        }
        ScreenDialogToClient(v66, &X);
        _DWORD * v70 = CreateMovie(v68, DSurface_Alternate, 0);
        v5[22] = v70;
        if ( v70 )
          goto LABEL_165;
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4E0u:
        int v74 = v5[22];
        if ( !v74 )
          return 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v74 + 12))(v74, 1);
        return 0;
      case 0x4E1u:
        int v75 = v5[22];
        if ( !v75 )
          return 0;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v75 + 12))(v75, 0);
        return 0;
      case 0x4E2u:
        v49 = v4;
        v48 = (void (__thiscall ***)(_DWORD, int))v5[22];
        if ( v48 )
          goto LABEL_100;
        goto LABEL_101;
      case 0x4E3u:
        v5[23] = wParam;
        return 0;
      case 0x4E4u:
        v66 = v4;
        v71 = (void (__thiscall ***)(_DWORD, int))v5[22];
        if ( v71 )
        {
          (**v71)(v71, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v72 = (void (__thiscall ***)(_DWORD, int))v5[24];
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
          (*(void (__thiscall **)(_DWORD *, LONG, LONG))(*v70 + 24))(v70, X.left, X.top);
          MoveWindow(v66, X.left, X.top, *(_DWORD *)(v5[22] + 8), *(_DWORD *)(v5[22] + 12), 0);
          SetTimer(v66, 0x65u, 0x22u, 0);
          return 0;
        }
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4EEu:
        if ( v5[28] != 1 || *((_BYTE *)v5 + 168) )
          return 0;
        *((_BYTE *)v5 + 168) = 1;
        v5[32] = 1;
        SetTimer(hWnd, 0, v5[33], 0);
        InvalidateRect(hWnd, 0, 0);
        return 0;
      case 0x4F0u:
        int v73 = v5[22];
        if ( !v73 )
          return 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v73 + 40))(v73);
        return 0;
      default:
        goto LABEL_34;
    }
  }
  if ( Msg == 1236 )
  {
    if ( v5[28] == 4 && *((_BYTE *)v5 + 168) )
    {
      KillTimer(v4, 0);
      *((_BYTE *)v5 + 168) = 0;
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
        *((_BYTE *)v5 + 180) = 1;
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
          (*(void (__thiscall **)(int, LONG *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))(
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
        if ( !v5[30] || v5[28] != 4 || *((_BYTE *)v5 + 168) )
          return 0;
        *((_BYTE *)v5 + 168) = 1;
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
      for ( i = *((_DWORD *)g_DialogHashMap_Entries + (v56 & ((1 << g_DialogHashMap_Insert) - 1))); i; i = *(_DWORD *)(i + 8) )
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
      for ( j = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v81) & ((1 << g_DialogHashMap_Buckets) - 1)));
            j;
            j = (_DWORD *)j[129] )
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
      if ( *((_BYTE *)v5 + 188) || v5[22] )
      {
        ValidateRect(v4, 0);
        return 0;
      }
      if ( !v5[4] )
      {
  _DWORD *v20; // ecx
        ScreenDialogToClient(v4, &X);
        GetClientRect(hWnd, &Rect);
        _DWORD * v17 = __2_YAPAXI_Z(0x20u);
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
        (*(void (__thiscall **)(_DWORD *, struct tagRECT *, int, struct tagRECT *, _DWORD, int))(*v20 + 8))(
          v20,
          &v85,
          DSurface_Alternate,
          &v81,
          0,
          1);
        v4 = hWnd;
      }
      ScreenDialogToClient(v4, &v84);
      if ( *((_BYTE *)v5 + 180) )
      {
        v85.left = v84.left;
        v85.top = v84.top;
        v85.bottom = v84.bottom - v84.top;
        int v22 = v5[46];
        v85.right = v84.right - v84.left;
        (*(void (__thiscall **)(int, struct tagRECT *, int))(*(_DWORD *)DSurface_Alternate + 20))(
          DSurface_Alternate,
          &v85,
          (*((unsigned __int8 *)v5 + 184) >> g_BitShift_Green_0 << g_DDraw_BlueMask)
        | (BYTE1(v22) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(v22) >> g_BitShift_Blue << g_BitShift_Blue));
      }
      unsigned int v23 = v5[28];
      bool v24 = v23 == 1;
      if ( v23 < 2 )
      {
        if ( v5[10] && (!v23 || *((_BYTE *)v5 + 168)) )
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
            (unsigned __int16 *)v5[10],
            &v84,
            (_DWORD *)v5[25],
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
          (*(void (__thiscall **)(int, struct tagRECT *, _DWORD, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))(
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
              v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28);
              v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28);
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
              v33 = *(__int16 *)(v31 + 4);
              int v34 = Rect.top;
              int v82 = v5[29];
              v81.left = v33;
              int v35 = *(__int16 *)(v31 + 2);
              X.right = Rect.right;
              if ( Rect.right > v35 )
                v32 = Rect.left + (Rect.right - v35) / 2;
              if ( Rect.bottom > v81.left )
                v34 = (Rect.bottom - v81.left) / 2 + Rect.top;
              v81.left = v32;
              v81.top = v34;
              v36 = (struct tagRECT *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)DSurface_Alternate + 120))(
                                        DSurface_Alternate,
                                        v91);
              unsigned int v37 = v5[38];
              X = *v36;
              DrawToSurfaceSHP(DSurface_Alternate, v82, v31, v37, &v81.left, &X.left, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
              if ( v77 )
              {
                if ( *((_BYTE *)v5 + 168) )
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
      v55 = (void (__thiscall ***)(_DWORD, int))v5[4];
      if ( v55 )
        (**v55)(v55, 1);
      v5[4] = 0;
      InvalidateRect(hWnd, 0, 0);
      return 0;
    }
    v9 = (void (__thiscall ***)(_DWORD, int))v5[4];
    if ( v9 )
    {
      (**v9)(v9, 1);
      v5[4] = 0;
      v4 = hWnd;
    }
    if ( *((_BYTE *)v5 + 124) )
    {
      __3_YAXPAX_Z((void *)v5[30]);
      v5[30] = 0;
      v4 = hWnd;
    }
    int v10 = v5[28];
    if ( v10 == 1 )
    {
      if ( *((_BYTE *)v5 + 168) )
        goto LABEL_28;
    }
    else if ( v10 == 4 )
    {
LABEL_28:
      KillTimer(v4, 0);
      v4 = hWnd;
    }
    v11 = v4;
    v12 = (void (__thiscall ***)(_DWORD, int))v5[22];
    if ( v12 )
    {
      (**v12)(v12, 1);
      v5[22] = 0;
    }
    KillTimer(v11, 0x65u);
    v13 = (void (__thiscall ***)(_DWORD, int))v5[24];
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
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v47 + 4))(v47) )
          InvalidateRect(hWnd, 0, 0);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5[22] + 20))(v5[22]) )
        {
          if ( v5[23] )
          {
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v5[22] + 28))(v5[22], 1);
            Debug::Log();
            return 0;
          }
          v48 = (void (__thiscall ***)(_DWORD, int))v5[22];
          v49 = hWnd;
          if ( v48 )
          {
LABEL_100:
            (**v48)(v48, 1);
            v5[22] = 0;
          }
LABEL_101:
          KillTimer(v49, 0x65u);
          v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
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
      if ( v52 || v79 && *((_BYTE *)v5 + 168) )
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
          v54 = *(__int16 *)(v53 + 6);
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
    int v16 = *((_DWORD *)g_DialogHashMap_Entries + (v15 & ((1 << g_DialogHashMap_Insert) - 1)));
    if ( v16 )
    {
      while ( *(HWND *)v16 != hWnd )
      {
        v16 = *(_DWORD *)(v16 + 8);
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
}
} // namespace gamemd

// 0x6C9930
namespace gamemd {
void BinkMovie::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6C9930(void **this)
{
  if ( this->q014 ) /*0x6c9930*/
    __3_YAXPAX_Z(this->q014); /*0x6c9938*/
}
}
} // namespace gamemd

// 0x6C9AE0
namespace gamemd {
int BinkMovie::FreeSurfaceTracker()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_FreeSurfaceTracker(int *this)
{
  int result; // eax
  int (__thiscall ***v6)(_DWORD, int); // ecx

  result = *this; /*0x6c9ae3*/
  if ( *this ) /*0x6c9ae3*/
  {
    int v3 = 0; /*0x6c9aed*/
    if ( *(int *)(result + 16) > 0 ) /*0x6c9af1*/
    {
      do /*0x6c9b14*/
      {
        int v4 = *(_DWORD *)(result + 4); /*0x6c9af4*/
        void * v5 = *(void **)(v4 + 4 * v3); /*0x6c9af7*/
        if ( v5 ) /*0x6c9afc*/
        {
          BinkMovie::Destroy(*(_DWORD *)(v4 + 4 * v3)); /*0x6c9b00*/
          __3_YAXPAX_Z(v5); /*0x6c9b06*/
        }
        result = *this; /*0x6c9b0e*/
        ++v3; /*0x6c9b10*/
      }
      while ( v3 < *(_DWORD *)(*this + 16) ); /*0x6c9b14*/
    }
    if ( *this ) /*0x6c9b17*/
      result = (**(int (__thiscall ***)(int, int))*this)(*this, 1); /*0x6c9b22*/
  }
  v6 = (int (__thiscall ***)(_DWORD, int))this->q004; /*0x6c9b24*/
  if ( v6 ) /*0x6c9b2a*/
    return (**v6)(v6, 1); /*0x6c9b30*/
  return result; /*0x6c9b27*/
}
}
} // namespace gamemd

// 0x6C9B40
namespace gamemd {
char BinkMovie::InitKeyframeTracking(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie_InitKeyframeTracking(int *this, char *Source)
{
  _BYTE v8[12]; // [esp+78h] [ebp-81Ch] BYREF
  int v9; // [esp+84h] [ebp-810h]
  _BYTE v10[2056]; // [esp+8Ch] [ebp-808h] BYREF

  if ( !Source || !strlen(Source) ) /*0x6c9b64*/
    return 0; /*0x6c9b6a*/
  _DWORD v7[22]; // [esp+20h] [ebp-874h] BYREF
  CCFileClass::Construct(v7, DataGlobal_842194); /*0x6c9b79*/
  if ( !(unsigned __int8)CCFileClass::Open(0) ) /*0x6c9b8a*/
  {
LABEL_6:
    v7[0] = &vt_CCFileClass; /*0x6c9be2*/
    v9 = 0; /*0x6c9bee*/
    Vector::Clear(v8); /*0x6c9bf5*/
    v7[0] = &off_7E1668; /*0x6c9bfe*/
    BufferIOFileClass::Dtor(v7); /*0x6c9c06*/
    return 0; /*0x6c9c16*/
  }
  _DWORD v5[4]; // [esp+Ch] [ebp-888h] BYREF
  v5[1] = 0; /*0x6c9b9c*/
  v5[2] = 0; /*0x6c9ba0*/
  v5[3] = v7; /*0x6c9ba4*/
  char v6 = 0; /*0x6c9ba8*/
  v5[0] = &vt_FileStraw; /*0x6c9bac*/
  BinkMovie::VtableDispatch(v5); /*0x6c9bb4*/
  int v3 = ParseMovieSubtitles(Source); /*0x6c9bc1*/
  *this = v3; /*0x6c9bc8*/
  if ( !v3 ) /*0x6c9bd2*/
  {
    nullsub_40(v10); /*0x6c9bd4*/
    FileStraw::Destructor(v5); /*0x6c9bdd*/
    goto LABEL_6; /*0x6c9bdd*/
  }
  nullsub_40(v10); /*0x6c9c19*/
  FileStraw::Destructor(v5); /*0x6c9c22*/
  v7[0] = &vt_CCFileClass; /*0x6c9c2b*/
  v9 = 0; /*0x6c9c33*/
  Vector::Clear(v8); /*0x6c9c3a*/
  v7[0] = &off_7E1668; /*0x6c9c43*/
  BufferIOFileClass::Dtor(v7); /*0x6c9c4b*/
  return 1; /*0x6c9c0b*/
}
}
} // namespace gamemd

// 0x6C9C60
namespace gamemd {
char BinkMovie::CheckKeyframeTransition(CellStruct * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie::CheckKeyframeTransition(CellStruct *aP1)
{
  ObjectClass *v7; // ecx
  void (*v8)(void); // eax

  int v3 = *this; /*0x6c9c66*/
  if ( !v3 ) /*0x6c9c6a*/
    return 0; /*0x6c9c6d*/
  int v5 = this->q004; /*0x6c9c73*/
  char v6 = 0; /*0x6c9c7a*/
  if ( v5 < *(_DWORD *)(v3 + 16) ) /*0x6c9c83*/
  {
    do /*0x6c9cb3*/
    {
      v7 = *(ObjectClass **)(*(_DWORD *)(v3 + 4) + 4 * v5); /*0x6c9c88*/
      if ( *(_DWORD *)v7->__pad_0 > (unsigned int)aP1 ) /*0x6c9c8d*/
        break; /*0x6c9c8d*/
      this->q008 = v7; /*0x6c9c90*/
      this->q004 = v5 + 1; /*0x6c9c93*/
      v8 = (void (*)(void))this->q00C; /*0x6c9c96*/
      if ( v8 ) /*0x6c9c9b*/
      {
        v8(); /*0x6c9c9d*/
      }
      else
      {
        BinkMovie::ProcessKeyframe(this, v7); /*0x6c9ca4*/
        v6 = 1; /*0x6c9ca9*/
      }
      v3 = *this; /*0x6c9cab*/
      v5 = this->q004; /*0x6c9cad*/
    }
    while ( v5 < *(_DWORD *)(*this + 16) ); /*0x6c9cb3*/
  }
  _DWORD * v9 = (_DWORD *)this->q008; /*0x6c9cb5*/
  if ( v9 ) /*0x6c9cba*/
  {
    if ( (unsigned int)aP1 >= *v9 + v9[1] ) /*0x6c9cc5*/
    {
      int v10 = this->q00C; /*0x6c9cc7*/
      this->q008 = 0; /*0x6c9cca*/
      if ( !v10 ) /*0x6c9ccf*/
      {
        int v11 = this->q010; /*0x6c9cd1*/
        if ( v11 ) /*0x6c9cd6*/
        {
          _DWORD * v12 = this + 5; /*0x6c9cda*/
          (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v11 + 20))(v11, this + 5, 0); /*0x6c9cdf*/
          _DWORD * v13 = this + 9; /*0x6c9ce4*/
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
} // namespace gamemd

// 0x6C9D40
namespace gamemd {
void BinkMovie::ProcessKeyframe(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void BinkMovie::ProcessKeyframe(ObjectClass *aP1)
{
  BitFont *v5; // esi
  ObjectClass *v6; // ebx
  int uniqueId; // eax
  ObjectClass *v8; // edi
  ObjectClass *v13; // [esp-1Ch] [ebp-4Ch]
  AbstractClass aP2; // [esp+Ch] [ebp-24h] BYREF

  *(_DWORD *)&aP2[12] = this; /*0x6c9d46*/
  int v3 = this->q004; /*0x6c9d4a*/
  if ( v3 ) /*0x6c9d4f*/
  {
  int v9; // eax
    int * v4 = this + 5; /*0x6c9d5a*/
    (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v3 + 20))(v3, this + 5, 0); /*0x6c9d60*/
    v5 = (BitFont *)aP0; /*0x6c9d6b*/
    Property::Set( /*0x6c9dba*/
      aP0,
      (AbstractClass *)(((int)(unsigned __int8)*(_DWORD *)&aP1->__pad_0[8] >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960])
                      | ((unsigned __int8)BYTE2(*(_DWORD *)&aP1->__pad_0[8]) >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952])
                      | ((unsigned __int8)BYTE1(*(_DWORD *)&aP1->__pad_0[8]) >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])));
    v6 = (ObjectClass *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q004 + 124))(this->q004); /*0x6c9dca*/
    *(_DWORD *)&aP2[4] = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q004 + 128))(this->q004); /*0x6c9dd6*/
    aP2.NeedsSaveOrLink = *(void **)&aP2[4]; /*0x6c9ddc*/
    aP2.abstractFlags = 0; /*0x6c9de4*/
    aP2.nextArrayIndex = 0; /*0x6c9de8*/
    aP2.referenceCount = (int)v6; /*0x6c9def*/
    TextGroup::SetRect(v5, (AbstractClass *)&aP2.abstractFlags); /*0x6c9df3*/
    *(_DWORD *)&aP2[8] = aP1->abstractFlags; /*0x6c9e0d*/
    Text::Layout(v5, *(unsigned __int16 **)&aP2[8], &aP2, (AbstractClass *)&aP2.uniqueId, (AbstractClass *)v6); /*0x6c9e11*/
    int v14 = 0; /*0x6c9e1e*/
    uniqueId = aP1->uniqueId; /*0x6c9e26*/
    v8 = (ObjectClass *)(v5[2].field_4 * (*(_DWORD *)&aP1->__pad_0[12] - 1)); /*0x6c9e29*/
    if ( uniqueId == 2 ) /*0x6c9e30*/
    {
      v9 = (int)&v6->__pad_0[-*(_DWORD *)aP2[0]] / 2; /*0x6c9e3d*/
    }
    else
    {
      if ( uniqueId != 1 ) /*0x6c9e44*/
      {
LABEL_7:
        v13 = v6; /*0x6c9e52*/
        int * v10 = *(int **)&aP2[12]; /*0x6c9e66*/
        Font::Print( /*0x6c9e78*/
          (int)v5,
          *(_DWORD *)(*(_DWORD *)&aP2[12] + 16),
          *(_WORD **)&aP2[8],
          v14,
          (int)v8,
          (int)v13,
          *(int *)&aP2[4],
          0,
          0,
          0);
        v10 += 9; /*0x6c9e7f*/
        *v10 = *v4; /*0x6c9e85*/
        v10[1] = v4[1]; /*0x6c9e8a*/
        v10[2] = v4[2]; /*0x6c9e90*/
        int v11 = *(_DWORD *)aP2[0]; /*0x6c9e93*/
        v10[3] = v4[3]; /*0x6c9e9e*/
        int v12 = aP2.uniqueId; /*0x6c9ea1*/
        *v4 = v14; /*0x6c9ea5*/
        v4[1] = (int)v8; /*0x6c9ea8*/
        v4[2] = v11; /*0x6c9eab*/
        v4[3] = v12; /*0x6c9eae*/
        return; /*0x6c9eae*/
      }
      v9 = (int)&v6->__pad_0[-*(_DWORD *)aP2[0]]; /*0x6c9e4c*/
    }
    v14 = v9; /*0x6c9e4e*/
    goto LABEL_7; /*0x6c9e4e*/
  }
}
}
} // namespace gamemd

// 0x6C9EC0
namespace gamemd {
unsigned int * BinkMovie::VtableDispatch(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6C9EC0(_DWORD *this, int a2)
{

  int v3 = a2; /*0x6c9ec3*/
  *this = a2; /*0x6c9ec9*/
  this->q201 = 0; /*0x6c9ecb*/
  a2 = 0; /*0x6c9ed1*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v3 + 8))(v3, &a2, 2); /*0x6c9ede*/
  if ( (_WORD)a2 != 0xFEFF ) /*0x6c9ee8*/
    Debug::Log(); /*0x6c9eef*/
  return this; /*0x6c9ef9*/
}
}
} // namespace gamemd

// 0x6C99D0
namespace gamemd {
int * BinkMovie::CreateSurfaceTracker()
{
{
    int *v2;
    int *v3;
    int *v4;
    ObjectClass Filename;
    if ( !this || !strlen(this) )
    return 0;
    v2 = (int *)__2_YAPAXI_Z(0x34u);
    if ( !v2 )
    return 0;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[7] = 0;
    v2[8] = 0;
    _splitpath(this, 0, 0, &Filename, 0);
    if ( BinkMovie::InitKeyframeTracking(v2, Filename[0]) == 1 )
  {
    v3 = (int *)__2_YAPAXI_Z(0x20u);
    v4 = v3;
    if ( v3 )
    {
    v3[1] = 640;
    v3[2] = 255;
    v3[3] = 0;
    *v3 = &XSurface_Vtable;
    v3[4] = 2;
    Buffer::Init(v3 + 5, 0, (AbstractClass *)0x4FB00);
    *v4 = &BSurface_Vtable;
    (*(void (__thiscall **)(int *, int))(*v4 + 24))(v4, 0);
    v2[4] = (int)v4;
    }
  }
    return v2;
}
}
} // namespace gamemd
