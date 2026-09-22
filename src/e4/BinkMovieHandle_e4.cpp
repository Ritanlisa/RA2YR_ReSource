// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BinkMovie_e4.hpp"

// 0x432AB0
int BinkMovieHandle::RenderFrameClipped(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_432AB0(int this, int a2, int a3)
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
  _BYTE v19[16]; // [esp+24h] [ebp-10h] BYREF
  int v20; // [esp+3Ch] [ebp+8h]

  v3 = *(int **)(this + 4); /*0x432ab3*/
  v4 = v3[1]; /*0x432ac3*/
  v5 = *v3; /*0x432ac7*/
  v6 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 12) + 120))(this->width, v19); /*0x432ad8*/
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
  this->height = result; /*0x432bb2*/
  this->currentFrame = v9; /*0x432bb4*/
  this->totalFrames = v13; /*0x432bb7*/
  this->throttleCounter = v14; /*0x432bba*/
  return result; /*0x432bbd*/
}
}

// 0x433060
unsigned int * BinkMovieHandle::CopyFrameToSurface()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BinkMovieHandle::CopyFrameToSurface(int *this)
{
  DSurface *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+14h] [ebp-14h]
  struct tagRECT Rect; // [esp+18h] [ebp-10h] BYREF

  v2 = (DSurface *)this->width; /*0x43306e*/
  if ( v2 == *(DSurface **)&DataGlobal_87F8E4[31268] ) /*0x433073*/
  {
    GetClientRect((HWND)g_hWnd, &Rect); /*0x433085*/
    ClientToScreen((HWND)g_hWnd, (LPPOINT)&Rect); /*0x433096*/
    v3 = Rect.left + this->tempPath; /*0x4330a7*/
    v4 = Rect.top + this->currentFrame; /*0x4330ae*/
    v2 = (DSurface *)this->width; /*0x4330b0*/
    BinkMovie::AdjustSurfaceFormat(this, v2); /*0x4330b4*/
    v12 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v2->field_0 + 92))(v2, 0, 0); /*0x4330c8*/
    if ( v12 ) /*0x4330cc*/
    {
      v10 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 116))(v2); /*0x4330dd*/
      v5 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 128))(v2); /*0x4330e1*/
      BinkCopyToBuffer(this->tempPath, v12, v10, v5, v3, v4, this->renderTarget | 0x80000000); /*0x4330fe*/
LABEL_6:
      (*(void (__thiscall **)(DSurface *))(v2->field_0 + 96))(v2); /*0x43315b*/
    }
  }
  else
  {
    v6 = this->currentFrame; /*0x433103*/
    v13 = this->tempPath; /*0x433109*/
    BinkMovie::AdjustSurfaceFormat(this, (DSurface *)this->width); /*0x43310d*/
    v7 = (*(int (__thiscall **)(DSurface *, _DWORD, _DWORD))(v2->field_0 + 92))(v2, 0, 0); /*0x43311f*/
    if ( v7 ) /*0x433123*/
    {
      v11 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 116))(v2); /*0x433130*/
      v8 = (*(int (__thiscall **)(DSurface *))(v2->field_0 + 128))(v2); /*0x433134*/
      BinkCopyToBuffer(this->tempPath, v7, v11, v8, v13, v6, this->renderTarget | 0x80000000); /*0x433155*/
      goto LABEL_6; /*0x433155*/
    }
  }
  return BinkMovie::BlitToTarget(this, v2); /*0x43316a*/
}
}

// 0x432BD0
int BinkMovieHandle::Check(int a2)
{
{
    int result;
    result = BinkGoto(this->tempPath, a2, 1);
    this->memoryBuffer = 0;
    return result;
}
}

// 0x5C0550
int BinkMovieHandle::InitFromFile()
{
{
    int result;
    DataGlobal_ABF3F8 = (int)this;
    result = BinkMovie::Play(this->height);
    DataGlobal_ABF3F8 = 0;
    return result;
}
}

// 0x5C0570
BOOL BinkMovieHandle::COMStub()
{
{
    return BinkMovie::IsAtEnd(this->height);
}
}

// 0x5C0580
bool BinkMovieHandle::AddRef()
{
{
    return BinkMovie::RenderFrameToSurface(this->height);
}
}

// 0x5C0590
int BinkMovieHandle::Release()
{
{
    int v1;
    int result;
    v1 = this->height;
    result = BinkWait(*(int *)(v1 + 4));
    if ( !result )
    *(char *)(v1 + 45) = 1;
    return result;
}
}

// 0x5C05A0
int BinkMovieHandle::Pause(int a2, int a3)
{
{
    return BinkMovieHandle::RenderFrameClipped(this->height, a2, a3);
}
}

// 0x5C05C0
int BinkMovieHandle::RenderLoop(int a2)
{
{
    return COMStub_432C10(this->height, a2);
}
}

// 0x5C05D0
int BinkMovieHandle::AdjustSurfaceFormat(int a2)
{
{
    return BinkMovieHandle::Check(this->height, a2);
}
}

// 0x5C05E0
unsigned int BinkMovieHandle::BlitToTarget()
{
{
    return 0x3E8 / (unsigned int)(*(int *)(*(int *)(this->height + 4) + 20) / *(int *)(*(int *)(this->height + 4) + 24));
}
}

// 0x5C05F0
unsigned int * BinkMovieHandle::Close()
{
{
    return BinkMovieHandle::CopyFrameToSurface(this->height);
}
}

// 0x5C0A30
BinkMovieHandle * BinkMovieHandle::QueryInterface(char a2)
{
{
    BinkMovie *v3;
    v3 = *(this + 4);
    *(void**)this = (BinkMovie *)&vt_BinkMovieHandle;
    if ( v3 )
  {
    BinkMovie::Stop((int)v3);
    __3_YAXPAX_Z(v3);
  }
    *(void**)this = (BinkMovie *)&vt_MovieHandle;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BinkMovieHandle *)this;
}
}
