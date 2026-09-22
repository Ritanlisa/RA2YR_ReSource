// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5C0630_e4.hpp"
#include "e4/classes/E4Recv_5C0E10_e4.hpp"
#include "e4/classes/E4Recv_5C1300_e4.hpp"
#include "e4/classes/E4Recv_5C5D20_e4.hpp"
#include "e4/classes/E4Recv_5C60D0_e4.hpp"
#include "e4/classes/E4Recv_5C6190_e4.hpp"
#include "e4/classes/E4Recv_5C80A0_e4.hpp"
#include "e4/classes/E4Recv_5C8470_e4.hpp"
#include "e4/classes/E4Recv_5C9420_e4.hpp"
#include "e4/classes/E4Recv_5CA670_e4.hpp"
#include "e4/classes/E4Recv_5CAE60_e4.hpp"
#include "e4/classes/E4Recv_5CAF00_e4.hpp"
#include "e4/classes/E4Recv_5CAF70_e4.hpp"
#include "e4/classes/E4Recv_5CB3E0_e4.hpp"
#include "e4/classes/E4Recv_5CB790_e4.hpp"
#include "e4/classes/E4Recv_5CD570_e4.hpp"
#include "e4/classes/E4Recv_5CD690_e4.hpp"
#include "e4/classes/E4Recv_5CE0C0_e4.hpp"
#include "e4/classes/E4Recv_5CE330_e4.hpp"
#include "e4/classes/E4Recv_5CE3A0_e4.hpp"
#include "e4/classes/E4Recv_5CF840_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x5C00E0
namespace gamemd {
int sub_5C00E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_5C00E0@<al>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  char result; // al
  int v4; // edx
  int v5; // ecx
  int v6; // edi
  int v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  int *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = g_BigIntPool; /*0x5c00e0*/
  if ( g_BigIntPool ) /*0x5c00ea*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)DSurface_Alternate + 24))(DSurface_Alternate, 0); /*0x5c00fa*/
    Frame::Present(DSurface_Alternate, a1, a2, a3, 0, v7, v8, v9); /*0x5c0107*/
    result = TestBitArray(15); /*0x5c0111*/
    if ( !result ) /*0x5c0118*/
    {
      GetClientRect(g_hWnd, &Rect); /*0x5c0129*/
      ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5c013b*/
      v4 = *(_DWORD *)(g_BigIntPool + 64); /*0x5c0156*/
      v5 = Rect.top + *(_DWORD *)(g_BigIntPool + 56); /*0x5c0159*/
      v6 = *(_DWORD *)(g_BigIntPool + 52); /*0x5c015b*/
      v9 = *(int **)(g_BigIntPool + 60); /*0x5c015e*/
      v8 = v5; /*0x5c0164*/
      v7 = Rect.left + v6; /*0x5c016e*/
      v10 = v4; /*0x5c0172*/
      return (*(int (__thiscall **)(int, int *, _DWORD, int, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x5c0187*/
               g_DSurface_Primary,
               &v7,
               *(_DWORD *)(g_BigIntPool + 8),
               g_BigIntPool + 36,
               0,
               1);
    }
  }
  return result; /*0x5c018d*/
}
}
} // namespace gamemd

// 0x5C07D0
namespace gamemd {
unsigned int * Movie_Create(int a1, int a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall Movie_Create(int a1, int a2, int *a3)
{
  int *v4; // eax
  int v5; // ebx
  int v6; // edx
  char *v7; // eax
  int v8; // esi
  _DWORD *result; // eax
  _DWORD *v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // esi
  int v13; // [esp+14h] [ebp-E4h]
  int v14; // [esp+18h] [ebp-E0h]
  int v15; // [esp+1Ch] [ebp-DCh]
  _BYTE v16[16]; // [esp+20h] [ebp-D8h] BYREF
  char Str[200]; // [esp+30h] [ebp-C8h] BYREF

  if ( !a2 || !(unsigned __int8)Render_Play(1) ) /*0x5c07ea*/
    return 0; /*0x5c07f1*/
  v4 = a3; /*0x5c07f7*/
  if ( a3 ) /*0x5c0800*/
  {
    v5 = *a3; /*0x5c0805*/
    v6 = a3[2]; /*0x5c0807*/
    v13 = a3[1]; /*0x5c080a*/
  }
  else
  {
    v4 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 120))(a2, v16); /*0x5c0819*/
    v5 = *v4; /*0x5c081c*/
    v13 = v4[1]; /*0x5c0821*/
    v6 = v4[2]; /*0x5c0825*/
  }
  v14 = v6; /*0x5c0832*/
  v15 = v4[3]; /*0x5c0836*/
  v7 = strrchr(Str, 46); /*0x5c083a*/
  if ( v7 && !_strcmpi(v7, aBik) ) /*0x5c084c*/
  {
    Debug::Log(aPlayMovieAsBin); /*0x5c085d*/
    if ( __2_YAPAXI_Z(0x34u) ) /*0x5c0864*/
      v8 = BinkMovie::Open(Str, a2); /*0x5c087d*/
    else
      v8 = 0; /*0x5c0881*/
    result = __2_YAPAXI_Z(0x14u); /*0x5c0885*/
    if ( result ) /*0x5c088f*/
    {
      *result = &vt_BinkMovieHandle; /*0x5c0897*/
      result[4] = v8; /*0x5c089d*/
      if ( v8 ) /*0x5c08a0*/
      {
        result[2] = **(_DWORD **)(v8 + 4); /*0x5c08ab*/
        result[3] = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4); /*0x5c08b4*/
      }
      return result; /*0x5c08c1*/
    }
    return 0; /*0x5c0964*/
  }
  v10 = (_DWORD *)LoadVQMovie(Str, 0, 0, 0, 0, v5, v13, v14, v15, 255, 0); /*0x5c090a*/
  if ( !v10 ) /*0x5c090e*/
    return 0; /*0x5c090e*/
  v11 = __2_YAPAXI_Z(0x18u); /*0x5c0912*/
  v12 = v11; /*0x5c0917*/
  if ( !v11 ) /*0x5c091e*/
    return 0; /*0x5c0955*/
  v11[20] = 0; /*0x5c0920*/
  *(_DWORD *)v11 = &vt_VQMovieHandle; /*0x5c0924*/
  *((_DWORD *)v11 + 4) = v10; /*0x5c092a*/
  *((_DWORD *)v11 + 2) = MovieClass::GetWidth(*v10); /*0x5c0934*/
  *((_DWORD *)v12 + 3) = MovieClass::GetHeight(**((_DWORD **)v12 + 4)); /*0x5c0941*/
  return v12; /*0x5c08b7*/
}
}
} // namespace gamemd

// 0x5C17B0
namespace gamemd {
char MPCooperative___vt07(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MPCooperative::_vt07(int *this, int a2)
{
  char v3; // bl
  int v4; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // [esp-8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x5c17c3*/
  v10 = this->q33C; /*0x5c17c5*/
  v11 = 0; /*0x5c17cb*/
  Movie::GetSection((int)&g_DDrawSurfaceManager, v10, &v12); /*0x5c17cf*/
  v4 = v12; /*0x5c17d4*/
  if ( !v12 ) /*0x5c17da*/
    return 1; /*0x5c17e4*/
  v6 = this->q010; /*0x5c17e7*/
  if ( v6 ) /*0x5c17ec*/
  {
    if ( Movie::GetState(v6, &v11) ) /*0x5c17f3*/
    {
      v7 = v11; /*0x5c180c*/
    }
    else
    {
      v7 = 0; /*0x5c17fc*/
      v11 = 0; /*0x5c17fe*/
    }
    v4 = v12; /*0x5c1810*/
  }
  else
  {
    v7 = 0; /*0x5c1804*/
    v11 = 0; /*0x5c1806*/
  }
  if ( v7 >= *(_DWORD *)(v4 + 32) ) /*0x5c1817*/
    return 1; /*0x5c1821*/
  if ( a2 == -2 ) /*0x5c182b*/
  {
    if ( *(int *)(*(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7) + 16) > 1 ) /*0x5c1837*/
      return 1; /*0x5c1841*/
  }
  else if ( a2 == -3 ) /*0x5c1847*/
  {
    return 1; /*0x5c1851*/
  }
  v8 = 0; /*0x5c1857*/
  v9 = *(_DWORD *)(*(_DWORD *)(v4 + 20) + 4 * v7); /*0x5c1859*/
  if ( *(int *)(v9 + 16) > 0 ) /*0x5c185f*/
  {
    while ( SideClass::FindByName(*(void **)(*(_DWORD *)(v9 + 4) + 4 * v8)) != a2 ) /*0x5c186e*/
    {
      ++v8; /*0x5c1878*/
      v9 = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 4 * v11); /*0x5c187c*/
      if ( v8 >= *(_DWORD *)(v9 + 16) ) /*0x5c1882*/
        return 0; /*0x5c188c*/
    }
    return 1; /*0x5c188f*/
  }
  return v3; /*0x5c17dc*/
}
}
} // namespace gamemd

// 0x5C60D0
namespace gamemd {
BOOL E4Recv_5C60D0::ShowConfirmDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall ShowConfirmDialog(_WORD *this)
{
  wchar_t *v3; // eax
  wchar_t *StringCSF; // [esp-Ch] [ebp-14h]
  int v6; // [esp+0h] [ebp-8h]

  StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, aDRa2mdpostMpla, 108); /*0x5c60fa*/
  v3 = GetStringCSF(g_Str_TXT_OK, 0, aDRa2mdpostMpla, 108); /*0x5c6102*/
  return Dialog::ShowMessageBox((int)this, v3, (Movie *)StringCSF, 0, 0, v6) == 0; /*0x5c6116*/
}
}
} // namespace gamemd

// 0x5C6370
namespace gamemd {
char LCW_DecodeLength(int a1, unsigned char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall LCW_DecodeLength(int a1, _BYTE *a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // edx
  int v6; // edi
  unsigned __int8 *v7; // edx
  int v8; // ecx
  int v9; // esi
  char *v10; // ebx
  char v11; // al
  int v12; // edx
  _BYTE *v13; // ecx
  char v14; // dl

  LOBYTE(v3) = *a2; /*0x5c6370*/
  v4 = a2 + 1; /*0x5c6374*/
  if ( (_BYTE)v3 != 2 ) /*0x5c637b*/
    return v3; /*0x5c637b*/
  if ( (char)*v4 < 0 ) /*0x5c6381*/
  {
    v3 = *v4 & 0x7F; /*0x5c638c*/
    v7 = v4 + 1; /*0x5c638f*/
    if ( v3 > 2 ) /*0x5c6393*/
      return v3; /*0x5c6393*/
    v8 = *v7; /*0x5c6397*/
    v4 = v7 + 1; /*0x5c6399*/
    v6 = v8; /*0x5c639d*/
    if ( v3 <= 1 ) /*0x5c639f*/
      goto LABEL_8; /*0x5c639f*/
    v3 = (unsigned __int8)*v4; /*0x5c63a3*/
    v6 = v3 | (v8 << 8); /*0x5c63a8*/
  }
  else
  {
    LOBYTE(v3) = *v4; /*0x5c6383*/
    v6 = (unsigned __int8)*v4; /*0x5c6388*/
  }
  ++v4; /*0x5c63aa*/
LABEL_8:
  v9 = 4 * a3; /*0x5c63ab*/
  if ( v6 <= (unsigned int)(4 * a3) ) /*0x5c63b8*/
  {
    v10 = v4; /*0x5c63bc*/
    v11 = *v4 & 0x80; /*0x5c63be*/
    v12 = v9 - v6; /*0x5c63c6*/
    LOBYTE(v3) = -(v11 != 0); /*0x5c63c8*/
    v13 = (_BYTE *)(v9 + a1); /*0x5c63cd*/
    if ( v9 - v6 > 0 ) /*0x5c63d2*/
    {
      do /*0x5c63d8*/
      {
        --v13; /*0x5c63d4*/
        --v12; /*0x5c63d5*/
        *v13 = v3; /*0x5c63d6*/
      }
      while ( v12 ); /*0x5c63d8*/
    }
    if ( v6 > 0 ) /*0x5c63dc*/
    {
      do /*0x5c63e5*/
      {
        v14 = *v10; /*0x5c63de*/
        --v13; /*0x5c63e0*/
        ++v10; /*0x5c63e1*/
        --v6; /*0x5c63e2*/
        *v13 = v14; /*0x5c63e3*/
      }
      while ( v6 ); /*0x5c63e5*/
    }
  }
  return v3; /*0x5c63e7*/
}
}
} // namespace gamemd

// 0x5C63F0
namespace gamemd {
int sub_5C63F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __userpurge __spoils<ecx> sub_5C63F0@<eax>(
        unsigned int a1@<edx>,
        _BYTE *a2@<ecx>,
        int a3@<ebx>,
        int a4,
        int a5)
{
  _BYTE *v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  unsigned int i; // ebp
  unsigned int v12; // eax
  char v13; // al

  v5 = a2; /*0x5c63fa*/
  v6 = 4 * a5; /*0x5c63fc*/
  v7 = a1 - 4 * a5; /*0x5c6426*/
  if ( a1 != 4 * a5 ) /*0x5c6428*/
  {
    LOBYTE(a3) = (*(_DWORD *)(4 * a5 + a4 - 4) >= 0) - 1; /*0x5c642b*/
    BYTE1(a3) = a3; /*0x5c642d*/
    v8 = a3 << 16; /*0x5c6435*/
    LOWORD(v8) = a3; /*0x5c6438*/
    memset32(a2, v8, v7 >> 2); /*0x5c643f*/
    memset(&a2[4 * (v7 >> 2)], a3, v7 & 3); /*0x5c644a*/
    v5 = &a2[v7]; /*0x5c6450*/
  }
  v9 = a1; /*0x5c6454*/
  if ( a1 >= v6 ) /*0x5c6456*/
    v9 = 4 * a5; /*0x5c6458*/
  v10 = v9 + a4; /*0x5c645e*/
  for ( i = 0; ; ++i ) /*0x5c6460*/
  {
    v12 = a1; /*0x5c6464*/
    if ( a1 >= v6 ) /*0x5c6466*/
      v12 = 4 * a5; /*0x5c6468*/
    if ( i >= v12 ) /*0x5c646c*/
      break; /*0x5c646c*/
    v13 = *(_BYTE *)--v10; /*0x5c646e*/
    *v5++ = v13; /*0x5c6472*/
  }
  return a1; /*0x5c6478*/
}
}
} // namespace gamemd

// 0x5C6660
namespace gamemd {
void BitBuffer_RotateRight(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall BitBuffer_RotateRight(_DWORD *a1, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // edx
  int *v9; // esi
  char v10; // bp
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // eax
  char v14; // cl
  int v15; // ebp
  int v16; // eax
  int v17; // edi
  int v18; // ebx
  int v19; // ebx
  unsigned int v20; // ebp
  bool v21; // zf
  int v22; // edx
  int i; // edx
  int v24; // ecx
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp+4h]

  v4 = 0; /*0x5c666b*/
  if ( a2 ) /*0x5c666f*/
  {
    if ( a2 == 32 ) /*0x5c6674*/
    {
      v5 = &a1[a3]; /*0x5c667a*/
      if ( a3 ) /*0x5c6682*/
      {
        v6 = a3; /*0x5c6684*/
        do /*0x5c6692*/
        {
          v7 = *--v5; /*0x5c6687*/
          --v6; /*0x5c668d*/
          *v5 = v4; /*0x5c668e*/
          v4 = v7; /*0x5c6690*/
        }
        while ( v6 ); /*0x5c6692*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c669e*/
    {
      v16 = a2 / 32; /*0x5c6715*/
      v17 = a2 % 32; /*0x5c6724*/
      v18 = a3; /*0x5c6725*/
      if ( a2 / 32 < a3 - 1 ) /*0x5c672e*/
      {
        v26 = a3 - 1 - v16; /*0x5c6739*/
        do /*0x5c675d*/
        {
          v19 = a1[v16 + 1]; /*0x5c673d*/
          v20 = a1[v16]; /*0x5c6741*/
          ++a1; /*0x5c6746*/
          v21 = v26 == 1; /*0x5c6755*/
          *(a1 - 1) = (v20 >> v17) | (v19 << (32 - v17)); /*0x5c6756*/
          --v26; /*0x5c6759*/
        }
        while ( !v21 ); /*0x5c675d*/
        v18 = a3; /*0x5c675f*/
      }
      if ( v16 < v18 ) /*0x5c6765*/
      {
        v22 = a1[v16] >> v17; /*0x5c676c*/
        *a1++ = v22; /*0x5c6771*/
      }
      for ( i = 0; ; ++i ) /*0x5c6774*/
      {
        v24 = v16; /*0x5c6778*/
        if ( v16 >= v18 ) /*0x5c677a*/
          v24 = v18; /*0x5c677c*/
        if ( i >= v24 ) /*0x5c6780*/
          break; /*0x5c6780*/
        *a1++ = 0; /*0x5c6786*/
      }
    }
    else
    {
      v27 = 0; /*0x5c66a4*/
      v9 = &a1[a3]; /*0x5c66b6*/
      v10 = 32 - a2; /*0x5c66b9*/
      v11 = a3; /*0x5c66bb*/
      v12 = a3 - 1; /*0x5c66c2*/
      if ( v11 ) /*0x5c66c5*/
      {
        v25 = v12 + 1; /*0x5c66c8*/
        while ( 1 ) /*0x5c66d2*/
        {
          v13 = *--v9; /*0x5c66d2*/
          v14 = v10; /*0x5c66e8*/
          v15 = v27; /*0x5c66ea*/
          v27 = ((1 << a2) - 1) & v13; /*0x5c66ee*/
          *v9 = (v15 << v14) | (v13 >> a2); /*0x5c66f6*/
          if ( !--v25 ) /*0x5c6701*/
            break; /*0x5c6701*/
          v10 = 32 - a2; /*0x5c66ce*/
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x5C67A0
namespace gamemd {
void RotateBitBufferLeft(int * a0, int a2, Buffer * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall RotateBitBufferLeft(int *a0, int a2, Buffer *aP2)
{
  char v3; // di
  int *v4; // esi
  int v5; // eax
  Buffer *v6; // edx
  int v7; // ecx
  unsigned int j; // ebp
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  Buffer *v13; // ebx
  int *v14; // edx
  int *v15; // ebx
  int *v16; // ebp
  bool v17; // zf
  int v18; // esi
  int i; // esi
  Buffer *v20; // ecx
  char v21; // [esp+10h] [ebp-4h]
  char *v22; // [esp+10h] [ebp-4h]

  v3 = a2; /*0x5c67a5*/
  v4 = a0; /*0x5c67a7*/
  if ( a2 ) /*0x5c67ab*/
  {
    if ( a2 == 32 ) /*0x5c67b0*/
    {
      v5 = 0; /*0x5c67b6*/
      if ( aP2 ) /*0x5c67bd*/
      {
        v6 = aP2; /*0x5c67bf*/
        do /*0x5c67cc*/
        {
          v7 = *v4; /*0x5c67c2*/
          *v4++ = v5; /*0x5c67c4*/
          v6 = (Buffer *)((char *)v6 - 1); /*0x5c67c9*/
          v5 = v7; /*0x5c67ca*/
        }
        while ( v6 ); /*0x5c67cc*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c67d6*/
    {
      v11 = a2 / 32; /*0x5c6833*/
      v12 = a2 % 32; /*0x5c6842*/
      v13 = aP2; /*0x5c6843*/
      v14 = &a0[(_DWORD)aP2 - 1]; /*0x5c684a*/
      if ( v11 < (int)&aP2[-1].Buffer_field_24 + 3 ) /*0x5c6850*/
      {
        v22 = (char *)&aP2[-1].Buffer_field_24 - v11 + 3; /*0x5c685b*/
        do /*0x5c6893*/
        {
          v15 = &v14[-v11 - 1]; /*0x5c6868*/
          v16 = v14--; /*0x5c686c*/
          v17 = v22 == (char *)1; /*0x5c688b*/
          v14[1] = (v16[-v11] << v12) | ((unsigned int)*v15 >> (32 - v12)); /*0x5c688c*/
          --v22; /*0x5c688f*/
        }
        while ( !v17 ); /*0x5c6893*/
        v13 = aP2; /*0x5c6895*/
      }
      if ( v11 < (int)v13 ) /*0x5c689b*/
      {
        v18 = v14[-v11] << v12; /*0x5c68ac*/
        --v14; /*0x5c68ae*/
        v14[1] = v18; /*0x5c68b1*/
      }
      for ( i = 0; ; ++i ) /*0x5c68b4*/
      {
        v20 = (Buffer *)v11; /*0x5c68b8*/
        if ( v11 >= (int)v13 ) /*0x5c68ba*/
          v20 = v13; /*0x5c68bc*/
        if ( i >= (int)v20 ) /*0x5c68c0*/
          break; /*0x5c68c0*/
        *v14-- = 0; /*0x5c68c6*/
      }
    }
    else
    {
      v21 = 32 - a2; /*0x5c67e4*/
      for ( j = 0; aP2; aP2 = (Buffer *)((char *)aP2 - 1) ) /*0x5c67f7*/
      {
        v9 = *v4++; /*0x5c6802*/
        v10 = (j >> v21) | (v9 << v3); /*0x5c6811*/
        j = ~(0xFFFFFFFF >> v3) & v9; /*0x5c6813*/
        *(v4 - 1) = v10; /*0x5c6815*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x5C6960
namespace gamemd {
int BitArray_FindHighestBit(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BitArray_FindHighestBit(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx

  v2 = (_DWORD *)(a1 + 4 * a2 - 4); /*0x5c6960*/
  v3 = a2; /*0x5c6965*/
  if ( !*v2 ) /*0x5c6967*/
  {
    while ( --v3 ) /*0x5c696c*/
    {
      if ( *--v2 ) /*0x5c696f*/
        goto LABEL_4; /*0x5c6977*/
    }
    return 0; /*0x5c696d*/
  }
LABEL_4:
  if ( !v3 ) /*0x5c697b*/
    return 0; /*0x5c6980*/
  v6 = *(_DWORD *)(a1 + 4 * v3 - 4); /*0x5c6981*/
  v7 = 0x80000000; /*0x5c6987*/
  result = 32 * v3; /*0x5c698c*/
  if ( v6 >= 0 ) /*0x5c6991*/
  {
    do /*0x5c6998*/
    {
      v7 >>= 1; /*0x5c6993*/
      --result; /*0x5c6995*/
    }
    while ( (v6 & v7) == 0 ); /*0x5c6998*/
  }
  return result; /*0x5c697f*/
}
}
} // namespace gamemd

// 0x5C6BC0
namespace gamemd {
int Array_FillPattern(unsigned int * a1, char * a2, unsigned int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Array_FillPattern(_DWORD *a1, char *a2, _DWORD *a3, int a4)
{
  int v4; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v11; // eax
  int v12; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  int v17; // esi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int *v22; // esi
  bool v23; // bl
  unsigned int *v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  bool v29; // [esp+14h] [ebp-14h]
  _DWORD *v30; // [esp+18h] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+20h] [ebp-8h]
  char *v33; // [esp+24h] [ebp-4h]
  unsigned int v34; // [esp+2Ch] [ebp+4h]

  v4 = a4; /*0x5c6bc5*/
  v6 = a4; /*0x5c6bcf*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6be3*/
  v33 = a2; /*0x5c6be7*/
  *a1 = 0; /*0x5c6bf4*/
  if ( *(_DWORD *)a2 ) /*0x5c6bfa*/
    goto LABEL_10; /*0x5c6bfa*/
  v7 = &a2[v6 * 4 - 4]; /*0x5c6c00*/
  v8 = a4; /*0x5c6c04*/
  if ( !*(_DWORD *)v7 ) /*0x5c6c06*/
  {
    do /*0x5c6c16*/
    {
      if ( !--v8 ) /*0x5c6c0c*/
        break; /*0x5c6c0c*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c6c0e*/
      v7 -= 4; /*0x5c6c11*/
    }
    while ( !v9 ); /*0x5c6c16*/
  }
  if ( v8 > 1 ) /*0x5c6c1b*/
  {
LABEL_10:
    if ( *a3 ) /*0x5c6c25*/
      goto LABEL_11; /*0x5c6c25*/
    v11 = &a3[v6 - 1]; /*0x5c6c2e*/
    v12 = a4; /*0x5c6c34*/
    if ( !*v11 ) /*0x5c6c2a*/
    {
      do /*0x5c6c43*/
      {
        if ( !--v12 ) /*0x5c6c39*/
          break; /*0x5c6c39*/
      }
      while ( !*--v11 ); /*0x5c6c43*/
    }
    if ( v12 > 1 ) /*0x5c6c48*/
    {
LABEL_11:
      v14 = &a3[v6 - 1]; /*0x5c6c4e*/
      v15 = a4; /*0x5c6c52*/
      if ( *v14 ) /*0x5c6c54*/
      {
LABEL_14:
        if ( v15 ) /*0x5c6c68*/
        {
          v18 = v15; /*0x5c6c72*/
          v19 = a3[v15 - 1]; /*0x5c6c74*/
          v20 = 0x80000000; /*0x5c6c78*/
          v21 = 32 * v18; /*0x5c6c7d*/
          if ( v19 >= 0 ) /*0x5c6c82*/
          {
            do /*0x5c6c89*/
            {
              v20 >>= 1; /*0x5c6c84*/
              --v21; /*0x5c6c86*/
            }
            while ( (v19 & v20) == 0 ); /*0x5c6c89*/
          }
          v17 = v21; /*0x5c6c8d*/
          if ( v21 ) /*0x5c6c8f*/
            v34 = 1 << ((v21 - 1) % 32); /*0x5c6cae*/
          else
            v34 = 0; /*0x5c6c91*/
          goto LABEL_21; /*0x5c6c95*/
        }
      }
      else
      {
        while ( --v15 ) /*0x5c6c59*/
        {
          if ( *--v14 ) /*0x5c6c5c*/
            goto LABEL_14; /*0x5c6c64*/
        }
      }
      v17 = 0; /*0x5c6c6a*/
      v34 = 0; /*0x5c6c6c*/
LABEL_21:
      if ( (v17 + 31) / 32 && v17 ) /*0x5c6cc6*/
      {
        v32 = v17; /*0x5c6cd0*/
        v30 = &a3[(v17 + 31) / 32 - 1]; /*0x5c6cd4*/
        do /*0x5c6d7b*/
        {
          RotateBitBufferLeft(v4); /*0x5c6ce2*/
          if ( (v34 & *v30) != 0 ) /*0x5c6cf1*/
          {
            v22 = a1; /*0x5c6cf3*/
            v23 = 0; /*0x5c6cf7*/
            v29 = 0; /*0x5c6cfb*/
            v24 = a1; /*0x5c6cff*/
            if ( v4 ) /*0x5c6d01*/
            {
              v31 = a4; /*0x5c6d0d*/
              do /*0x5c6d4d*/
              {
                v25 = *v24 + *(unsigned int *)((char *)v22 + v33 - (char *)a1); /*0x5c6d1c*/
                v26 = v25 + v29; /*0x5c6d24*/
                v23 = v25 < *v24 || v23 && !v26; /*0x5c6d36*/
                *v22 = v26; /*0x5c6d3c*/
                ++v24; /*0x5c6d3e*/
                ++v22; /*0x5c6d41*/
                v29 = v23; /*0x5c6d45*/
                --v31; /*0x5c6d49*/
              }
              while ( v31 ); /*0x5c6d4d*/
              v4 = a4; /*0x5c6d4f*/
            }
          }
          v34 >>= 1; /*0x5c6d59*/
          if ( !v34 ) /*0x5c6d5d*/
          {
            v34 = 0x80000000; /*0x5c6d63*/
            --v30; /*0x5c6d6e*/
          }
          --v32; /*0x5c6d77*/
        }
        while ( v32 ); /*0x5c6d7b*/
      }
    }
  }
  return 0; /*0x5c6d81*/
}
}
} // namespace gamemd

// 0x5C6DD0
namespace gamemd {
int MultiplyAddBigInteger(char * a1, unsigned short * a2, short a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall MultiplyAddBigInteger(char *a1, unsigned __int16 *a2, __int16 a3, int a4)
{
  int v4; // ebx
  char *v5; // ebp
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  bool v10; // zf
  _DWORD *v11; // eax
  int v12; // ebx
  unsigned int v13; // edx
  unsigned __int16 *v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v18; // edi
  unsigned int v19; // edx
  unsigned __int16 *v20; // ecx
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  char *v23; // eax
  int v24; // ecx
  int v25; // edx
  char *v26; // eax
  unsigned int v27; // esi
  unsigned __int16 *v28; // ecx
  int v29; // edi
  int v30; // edx
  unsigned __int16 v31; // ax
  unsigned int v32; // eax
  char *v33; // eax
  int v34; // ecx
  int v35; // edx
  char *v36; // eax
  unsigned int v37; // esi
  unsigned __int16 *v38; // ecx
  int v39; // edi
  int v40; // edx
  unsigned __int16 v41; // ax
  unsigned int v42; // eax
  _DWORD v44[64]; // [esp+18h] [ebp-100h] BYREF

  v4 = a4; /*0x5c6dd7*/
  v5 = a1; /*0x5c6ddf*/
  if ( *(int *)&a2[2 * a4 - 2] >= 0 ) /*0x5c6df4*/
  {
    if ( a3 >= 0 ) /*0x5c6f1f*/
    {
      v37 = 0; /*0x5c6f97*/
      v38 = a2; /*0x5c6f9b*/
      if ( 2 * a4 > 0 ) /*0x5c6fa1*/
      {
        v39 = v5 - (char *)a2; /*0x5c6fa5*/
        v40 = 2 * a4; /*0x5c6fa7*/
        do /*0x5c6fc6*/
        {
          v41 = *v38++; /*0x5c6fb0*/
          v42 = v37 + a3 * v41; /*0x5c6fb9*/
          *(unsigned __int16 *)((char *)v38 + v39 - 2) = v42; /*0x5c6fbb*/
          --v40; /*0x5c6fc3*/
          v37 = HIWORD(v42); /*0x5c6fc4*/
        }
        while ( v40 ); /*0x5c6fc6*/
      }
    }
    else
    {
      v27 = 0; /*0x5c6f28*/
      v28 = a2; /*0x5c6f2a*/
      if ( 2 * a4 > 0 ) /*0x5c6f2e*/
      {
        v29 = a1 - (char *)a2; /*0x5c6f37*/
        v30 = 2 * a4; /*0x5c6f39*/
        do /*0x5c6f53*/
        {
          v31 = *v28++; /*0x5c6f3d*/
          v32 = v27 + (__int16)-a3 * v31; /*0x5c6f46*/
          *(unsigned __int16 *)((char *)v28 + v29 - 2) = v32; /*0x5c6f48*/
          --v30; /*0x5c6f50*/
          v27 = HIWORD(v32); /*0x5c6f51*/
        }
        while ( v30 ); /*0x5c6f53*/
        v5 = a1; /*0x5c6f55*/
      }
      v33 = v5; /*0x5c6f5b*/
      if ( a4 > 0 ) /*0x5c6f5d*/
      {
        v34 = a4; /*0x5c6f5f*/
        do /*0x5c6f6c*/
        {
          v35 = *(_DWORD *)v33; /*0x5c6f61*/
          v33 += 4; /*0x5c6f63*/
          *((_DWORD *)v33 - 1) = ~v35; /*0x5c6f68*/
          --v34; /*0x5c6f6b*/
        }
        while ( v34 ); /*0x5c6f6c*/
      }
      v36 = v5; /*0x5c6f71*/
      v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6f73*/
      if ( v10 ) /*0x5c6f77*/
      {
        while ( 1 ) /*0x5c6f79*/
        {
          v36 += 4; /*0x5c6f79*/
          if ( !--v4 ) /*0x5c6f7d*/
            break; /*0x5c6f7d*/
          v10 = (*(_DWORD *)v36)++ == -1; /*0x5c6f81*/
          if ( !v10 ) /*0x5c6f84*/
            return 0; /*0x5c6f92*/
        }
      }
    }
    return 0; /*0x5c6f7d*/
  }
  qmemcpy(v44, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6e05*/
  v6 = v44; /*0x5c6e09*/
  if ( a4 > 0 ) /*0x5c6e14*/
  {
    v7 = a4; /*0x5c6e16*/
    do /*0x5c6e23*/
    {
      v8 = *v6++; /*0x5c6e18*/
      *(v6 - 1) = ~v8; /*0x5c6e1f*/
      --v7; /*0x5c6e22*/
    }
    while ( v7 ); /*0x5c6e23*/
  }
  v9 = a4; /*0x5c6e29*/
  v10 = v44[0] == -1; /*0x5c6e2b*/
  v11 = v44; /*0x5c6e2c*/
  ++v44[0]; /*0x5c6e30*/
  for ( ; v10; v10 = (*v11)++ == -1 ) /*0x5c6e34*/
  {
    ++v11; /*0x5c6e36*/
    if ( !--v9 ) /*0x5c6e3a*/
      break; /*0x5c6e3a*/
  }
  if ( a3 >= 0 ) /*0x5c6e4d*/
  {
    v18 = 2 * a4; /*0x5c6e95*/
    v19 = 0; /*0x5c6e98*/
    v20 = (unsigned __int16 *)v44; /*0x5c6e9c*/
    if ( 2 * a4 > 0 ) /*0x5c6ea0*/
    {
      do /*0x5c6ecb*/
      {
        v21 = *v20++; /*0x5c6eb3*/
        v22 = v19 + a3 * v21; /*0x5c6ebe*/
        *(unsigned __int16 *)((char *)v20 + v5 - (char *)v44 - 2) = v22; /*0x5c6ec0*/
        --v18; /*0x5c6ec8*/
        v19 = HIWORD(v22); /*0x5c6ec9*/
      }
      while ( v18 ); /*0x5c6ecb*/
    }
    v23 = v5; /*0x5c6ed3*/
    if ( a4 > 0 ) /*0x5c6ed5*/
    {
      v24 = a4; /*0x5c6ed7*/
      do /*0x5c6ee4*/
      {
        v25 = *(_DWORD *)v23; /*0x5c6ed9*/
        v23 += 4; /*0x5c6edb*/
        *((_DWORD *)v23 - 1) = ~v25; /*0x5c6ee0*/
        --v24; /*0x5c6ee3*/
      }
      while ( v24 ); /*0x5c6ee4*/
    }
    v26 = v5; /*0x5c6ee9*/
    v10 = (*(_DWORD *)v5)++ == -1; /*0x5c6eeb*/
    if ( v10 ) /*0x5c6eef*/
    {
      while ( 1 ) /*0x5c6ef5*/
      {
        v26 += 4; /*0x5c6ef5*/
        if ( !--v4 ) /*0x5c6ef9*/
          break; /*0x5c6ef9*/
        v10 = (*(_DWORD *)v26)++ == -1; /*0x5c6f01*/
        if ( !v10 ) /*0x5c6f04*/
          return 0; /*0x5c6f12*/
      }
    }
    return 0; /*0x5c6ef9*/
  }
  v12 = 2 * a4; /*0x5c6e4f*/
  v13 = 0; /*0x5c6e51*/
  v14 = (unsigned __int16 *)v44; /*0x5c6e57*/
  if ( 2 * a4 <= 0 ) /*0x5c6e5b*/
    return 0; /*0x5c6fcb*/
  do /*0x5c6e84*/
  {
    v15 = *v14++; /*0x5c6e6e*/
    v16 = v13 + (__int16)-a3 * v15; /*0x5c6e77*/
    *(unsigned __int16 *)((char *)v14 + v5 - (char *)v44 - 2) = v16; /*0x5c6e79*/
    --v12; /*0x5c6e81*/
    v13 = HIWORD(v16); /*0x5c6e82*/
  }
  while ( v12 ); /*0x5c6e84*/
  return 0; /*0x5c6e86*/
}
}
} // namespace gamemd

// 0x5C71E0
namespace gamemd {
short BigInt_ShiftAndScan(unsigned int * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int16 __fastcall BigInt_ShiftAndScan(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // eax
  int v7; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  unsigned int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edi

  if ( !(_WORD)a3 ) /*0x5c71f5*/
    return 0; /*0x5c7201*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7220*/
  v6 = (_DWORD *)(4 * a4 + a2 - 4); /*0x5c722d*/
  *a1 = 0; /*0x5c7231*/
  v7 = a4; /*0x5c7238*/
  if ( *v6 ) /*0x5c723a*/
  {
LABEL_6:
    if ( v7 ) /*0x5c724e*/
    {
      v10 = v7; /*0x5c7254*/
      v11 = *(_DWORD *)(a2 + 4 * v7 - 4); /*0x5c7256*/
      v12 = 0x80000000; /*0x5c725a*/
      v13 = 32 * v10; /*0x5c725f*/
      if ( v11 >= 0 ) /*0x5c7264*/
      {
        do /*0x5c726b*/
        {
          v12 >>= 1; /*0x5c7266*/
          --v13; /*0x5c7268*/
        }
        while ( (v11 & v12) == 0 ); /*0x5c726b*/
      }
      v9 = v13; /*0x5c726d*/
      goto LABEL_11; /*0x5c726d*/
    }
  }
  else
  {
    while ( --v7 ) /*0x5c723f*/
    {
      if ( *--v6 ) /*0x5c7242*/
        goto LABEL_6; /*0x5c724a*/
    }
  }
  v9 = 0; /*0x5c7250*/
LABEL_11:
  v14 = (v9 + 31) / 32; /*0x5c726f*/
  v15 = a2 + 4 * v14 - 4; /*0x5c727b*/
  if ( !v14 ) /*0x5c727f*/
    return 0; /*0x5c7284*/
  if ( v9 ) /*0x5c7290*/
    v16 = 1 << ((v9 - 1) % 32); /*0x5c72ab*/
  else
    v16 = 0; /*0x5c7292*/
  v17 = &a1[v14 - 1]; /*0x5c72af*/
  if ( !v9 ) /*0x5c72b3*/
    return 0; /*0x5c72fb*/
  v18 = 0; /*0x5c72b5*/
  v19 = v9; /*0x5c72b9*/
  v20 = v15 - (_DWORD)v17; /*0x5c72bf*/
  do /*0x5c72e5*/
  {
    v18 *= 2; /*0x5c72c4*/
    if ( (*(_DWORD *)((char *)v17 + v20) & v16) != 0 ) /*0x5c72c8*/
      ++v18; /*0x5c72ca*/
    if ( (unsigned __int16)v18 >= (unsigned __int16)a3 ) /*0x5c72ce*/
    {
      v18 -= a3; /*0x5c72d2*/
      *v17 |= v16; /*0x5c72d6*/
    }
    v16 >>= 1; /*0x5c72d8*/
    if ( !v16 ) /*0x5c72da*/
    {
      v16 = 0x80000000; /*0x5c72dc*/
      --v17; /*0x5c72e1*/
    }
    --v19; /*0x5c72e4*/
  }
  while ( v19 ); /*0x5c72e5*/
  return v18; /*0x5c71f7*/
}
}
} // namespace gamemd

// 0x5C7310
namespace gamemd {
int SubtractBigInteger(unsigned int * a1, unsigned int * a2, int a3, char * a4, Buffer * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SubtractBigInteger(_DWORD *a1, _DWORD *a2, int a3, char *a4, Buffer *aP2)
{
  char *v7; // eax
  int v8; // edx
  int v9; // esi
  Buffer *v11; // ecx
  _DWORD *v12; // eax
  int v14; // esi
  Buffer *v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  _DWORD *v21; // eax
  int v22; // ebx
  Buffer *v23; // ecx
  bool v24; // zf
  _DWORD *v25; // eax
  char *v26; // edx
  Buffer *v27; // esi
  unsigned int v28; // ecx
  char *v29; // eax
  int v30; // edx
  bool v31; // cc
  _DWORD *v32; // ecx
  int v33; // esi
  unsigned __int16 v34; // ax
  int v35; // eax
  _DWORD *v36; // [esp+10h] [ebp-10h]
  unsigned __int8 v37; // [esp+14h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  unsigned int v40; // [esp+24h] [ebp+4h]

  if ( !*(_DWORD *)a4 ) /*0x5c731c*/
  {
    v7 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c732d*/
    v8 = (int)aP2; /*0x5c7333*/
    if ( !*(_DWORD *)v7 ) /*0x5c7329*/
    {
      do /*0x5c7342*/
      {
        if ( !--v8 ) /*0x5c7338*/
          break; /*0x5c7338*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c733a*/
        v7 -= 4; /*0x5c733d*/
      }
      while ( !v9 ); /*0x5c7342*/
    }
    if ( v8 <= 1 ) /*0x5c7347*/
      return -1; /*0x5c7353*/
  }
  memset(a1, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7368*/
  *a1 = 0; /*0x5c7377*/
  memset(a2, 0, 4 * ((unsigned int)(4 * (_DWORD)aP2) >> 2)); /*0x5c7381*/
  v11 = aP2; /*0x5c738e*/
  *a2 = 0; /*0x5c7392*/
  v12 = (_DWORD *)(4 * (_DWORD)aP2 + a3 - 4); /*0x5c7398*/
  if ( *v12 ) /*0x5c739c*/
  {
LABEL_10:
    if ( v11 ) /*0x5c73b3*/
    {
      v15 = v11; /*0x5c73b9*/
      v16 = *(_DWORD *)(a3 + 4 * (_DWORD)v11 - 4); /*0x5c73bb*/
      v17 = 0x80000000; /*0x5c73bf*/
      v18 = 32 * (_DWORD)v15; /*0x5c73c4*/
      if ( v16 >= 0 ) /*0x5c73c9*/
      {
        do /*0x5c73d0*/
        {
          v17 >>= 1; /*0x5c73cb*/
          --v18; /*0x5c73cd*/
        }
        while ( (v16 & v17) == 0 ); /*0x5c73d0*/
      }
      v14 = v18; /*0x5c73d2*/
      goto LABEL_15; /*0x5c73d2*/
    }
  }
  else
  {
    while ( 1 ) /*0x5c73a4*/
    {
      v11 = (Buffer *)((char *)v11 - 1); /*0x5c73a4*/
      if ( !v11 ) /*0x5c73a5*/
        break; /*0x5c73a5*/
      if ( *--v12 ) /*0x5c73a7*/
        goto LABEL_10; /*0x5c73af*/
    }
  }
  v14 = 0; /*0x5c73b5*/
LABEL_15:
  v19 = (v14 + 31) / 32; /*0x5c73d4*/
  if ( v19 )
  {
    v20 = a3 + 4 * v19 - 4; /*0x5c73e6*/
    v21 = &a2[v19 - 1]; /*0x5c73ea*/
    v36 = v21; /*0x5c73f0*/
    v40 = v14 ? 1 << ((v14 - 1) % 32) : 0;
    if ( v14 ) /*0x5c7419*/
    {
      v38 = v14; /*0x5c7421*/
      v22 = v20 - (_DWORD)v21; /*0x5c7425*/
      for ( i = v20 - (_DWORD)v21; ; v22 = i ) /*0x5c7427*/
      {
        RotateBitBufferLeft(a1, 1, aP2); /*0x5c743d*/
        if ( (v40 & *(_DWORD *)((char *)v36 + v22)) != 0 ) /*0x5c744d*/
        {
          v23 = aP2; /*0x5c7452*/
          v24 = *a1 == -1; /*0x5c7454*/
          v25 = a1; /*0x5c7455*/
          ++*a1; /*0x5c7457*/
          for ( ; v24; v24 = (*v25)++ == -1 ) /*0x5c745a*/
          {
            ++v25; /*0x5c745c*/
            v23 = (Buffer *)((char *)v23 - 1); /*0x5c745f*/
            if ( !v23 ) /*0x5c7460*/
              break; /*0x5c7460*/
          }
        }
        v26 = (char *)&a1[(_DWORD)aP2 - 1]; /*0x5c746d*/
        v27 = aP2; /*0x5c7471*/
        v28 = *(_DWORD *)&a4[4 * (_DWORD)aP2 - 4]; /*0x5c7473*/
        v29 = &a4[4 * (_DWORD)aP2 - 4]; /*0x5c7477*/
        if ( *(_DWORD *)v26 >= v28 ) /*0x5c747d*/
        {
          v30 = v26 - v29; /*0x5c747f*/
          v31 = *(_DWORD *)&v29[v30] <= v28; /*0x5c7481*/
          while ( v31 ) /*0x5c7484*/
          {
            v29 -= 4; /*0x5c7486*/
            v27 = (Buffer *)((char *)v27 - 1); /*0x5c7489*/
            if ( !v27 ) /*0x5c748a*/
              break; /*0x5c748a*/
            v31 = *(_DWORD *)&v29[v30] <= *(_DWORD *)v29; /*0x5c748e*/
            if ( *(_DWORD *)&v29[v30] < *(_DWORD *)v29 ) /*0x5c7491*/
              goto LABEL_36; /*0x5c7491*/
          }
          v37 = 0; /*0x5c7498*/
          v32 = a1; /*0x5c74a2*/
          if ( 2 * (_DWORD)aP2 ) /*0x5c749d*/
          {
            v33 = 2 * (_DWORD)aP2; /*0x5c74a8*/
            do /*0x5c74da*/
            {
              v34 = *(_WORD *)((char *)v32 + a4 - (char *)a1); /*0x5c74af*/
              v32 = (_DWORD *)((char *)v32 + 2); /*0x5c74b3*/
              v35 = *((unsigned __int16 *)v32 - 1) - v34 - v37; /*0x5c74ca*/
              *((_WORD *)v32 - 1) = v35; /*0x5c74cc*/
              --v33; /*0x5c74d5*/
              v37 = BYTE2(v35) & 1; /*0x5c74d6*/
            }
            while ( v33 ); /*0x5c74da*/
          }
          *v36 |= v40; /*0x5c74e4*/
        }
LABEL_36:
        v40 >>= 1; /*0x5c74e6*/
        if ( !v40 ) /*0x5c74f0*/
        {
          v40 = 0x80000000; /*0x5c74f6*/
          --v36; /*0x5c7501*/
        }
        if ( !--v38 ) /*0x5c750e*/
          break; /*0x5c750e*/
      }
    }
  }
  return 0; /*0x5c7349*/
}
}
} // namespace gamemd

// 0x5C7520
namespace gamemd {
char SubtractBigIntegerWithSign(char * a1, int * a2, const void * a3, const void * a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall SubtractBigIntegerWithSign(char *a1, int *a2, const void *a3, const void *a4, int a5)
{
  int v5; // ebp
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  _DWORD *v17; // eax
  char *v18; // esi
  char *v19; // eax
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // edx
  int *v28; // eax
  int v29; // ecx
  char *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  char *v34; // edi
  int v35; // ebx
  char *v36; // ecx
  bool v38; // [esp+13h] [ebp-209h]
  bool v39; // [esp+14h] [ebp-208h]
  char *v40; // [esp+18h] [ebp-204h]
  _DWORD v41[64]; // [esp+1Ch] [ebp-200h] BYREF
  _DWORD v42[64]; // [esp+11Ch] [ebp-100h] BYREF

  v5 = a5; /*0x5c7528*/
  v40 = a1; /*0x5c752f*/
  qmemcpy(v42, a3, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7553*/
  v38 = 0; /*0x5c7557*/
  qmemcpy(v41, a4, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7571*/
  if ( (int)v41[a5 + 63] < 0 ) /*0x5c7583*/
  {
    v7 = v42; /*0x5c7587*/
    if ( a5 > 0 ) /*0x5c758e*/
    {
      v8 = a5; /*0x5c7590*/
      do /*0x5c759d*/
      {
        v9 = *v7++; /*0x5c7592*/
        *(v7 - 1) = ~v9; /*0x5c7599*/
        --v8; /*0x5c759c*/
      }
      while ( v8 ); /*0x5c759d*/
    }
    v10 = a5; /*0x5c75a6*/
    v11 = v42[0] == -1; /*0x5c75a8*/
    v12 = v42; /*0x5c75a9*/
    ++v42[0]; /*0x5c75b0*/
    for ( ; v11; v11 = (*v12)++ == -1 ) /*0x5c75b7*/
    {
      ++v12; /*0x5c75b9*/
      if ( !--v10 ) /*0x5c75bd*/
        break; /*0x5c75bd*/
    }
    v38 = 1; /*0x5c75c6*/
  }
  if ( (int)v41[a5 - 1] < 0 ) /*0x5c75d1*/
  {
    v13 = v41; /*0x5c75d5*/
    if ( a5 > 0 ) /*0x5c75d9*/
    {
      v14 = a5; /*0x5c75db*/
      do /*0x5c75e8*/
      {
        v15 = *v13++; /*0x5c75dd*/
        *(v13 - 1) = ~v15; /*0x5c75e4*/
        --v14; /*0x5c75e7*/
      }
      while ( v14 ); /*0x5c75e8*/
    }
    v16 = a5; /*0x5c75ee*/
    v11 = v41[0] == -1; /*0x5c75f0*/
    v17 = v41; /*0x5c75f1*/
    ++v41[0]; /*0x5c75f5*/
    for ( ; v11; v11 = (*v17)++ == -1 ) /*0x5c75f9*/
    {
      ++v17; /*0x5c75fb*/
      if ( !--v16 ) /*0x5c75ff*/
        break; /*0x5c75ff*/
    }
    v38 = !v38; /*0x5c7611*/
  }
  v18 = v40; /*0x5c7615*/
  SubtractBigInteger(v40, a2, (int)v42, (char *)v41, a5); /*0x5c762b*/
  LOBYTE(v19) = v38; /*0x5c7630*/
  if ( v38 ) /*0x5c7636*/
  {
    v20 = a2; /*0x5c763e*/
    if ( a5 > 0 ) /*0x5c7640*/
    {
      v21 = a5; /*0x5c7642*/
      do /*0x5c764f*/
      {
        v22 = *v20++; /*0x5c7644*/
        *(v20 - 1) = ~v22; /*0x5c764b*/
        --v21; /*0x5c764e*/
      }
      while ( v21 ); /*0x5c764f*/
    }
    v23 = a5; /*0x5c7653*/
    v11 = *a2 == -1; /*0x5c7655*/
    v24 = a2; /*0x5c7656*/
    ++*a2; /*0x5c7658*/
    for ( ; v11; v11 = (*v24)++ == -1 ) /*0x5c765a*/
    {
      ++v24; /*0x5c765c*/
      if ( !--v23 ) /*0x5c7660*/
        break; /*0x5c7660*/
    }
    if ( *(_DWORD *)v18 ) /*0x5c7669*/
      goto LABEL_29; /*0x5c7669*/
    v19 = &v18[4 * a5 - 4]; /*0x5c7672*/
    v25 = a5; /*0x5c7678*/
    if ( !*(_DWORD *)v19 ) /*0x5c766e*/
    {
      do /*0x5c7687*/
      {
        if ( !--v25 ) /*0x5c767d*/
          break; /*0x5c767d*/
        v26 = *((_DWORD *)v19 - 1); /*0x5c767f*/
        v19 -= 4; /*0x5c7682*/
      }
      while ( !v26 ); /*0x5c7687*/
    }
    if ( v25 > 1 ) /*0x5c768c*/
    {
LABEL_29:
      v27 = a5; /*0x5c7694*/
      v28 = a2; /*0x5c7697*/
      v11 = (*a2)-- == 0; /*0x5c7699*/
      if ( v11 ) /*0x5c769e*/
      {
        do /*0x5c76b0*/
        {
          ++v28; /*0x5c76a0*/
          if ( !--v27 ) /*0x5c76a4*/
            break; /*0x5c76a4*/
          v29 = *v28 - 1; /*0x5c76a9*/
          *v28 = v29; /*0x5c76ab*/
        }
        while ( v29 == -1 ); /*0x5c76b0*/
      }
      v30 = v18; /*0x5c76b4*/
      if ( a5 > 0 ) /*0x5c76b6*/
      {
        v31 = a5; /*0x5c76b8*/
        do /*0x5c76c5*/
        {
          v32 = *(_DWORD *)v30; /*0x5c76ba*/
          v30 += 4; /*0x5c76bc*/
          *((_DWORD *)v30 - 1) = ~v32; /*0x5c76c1*/
          --v31; /*0x5c76c4*/
        }
        while ( v31 ); /*0x5c76c5*/
      }
      v33 = a5; /*0x5c76c9*/
      v11 = *(_DWORD *)v18 == -1; /*0x5c76cb*/
      v19 = v18; /*0x5c76cc*/
      ++*(_DWORD *)v18; /*0x5c76ce*/
      for ( ; v11; v11 = (*(_DWORD *)v19)++ == -1 ) /*0x5c76d0*/
      {
        v19 += 4; /*0x5c76d2*/
        if ( !--v33 ) /*0x5c76d6*/
          break; /*0x5c76d6*/
      }
      v39 = 0; /*0x5c76e1*/
      v34 = v18; /*0x5c76e6*/
      if ( a5 ) /*0x5c76e8*/
      {
        v35 = (char *)v41 - v40; /*0x5c76f2*/
        do /*0x5c772c*/
        {
          v19 = (char *)(*(_DWORD *)v34 + *(_DWORD *)&v18[v35]); /*0x5c76fd*/
          v36 = &v19[v39]; /*0x5c7705*/
          v39 = (unsigned int)v19 < *(_DWORD *)v34 || (LOBYTE(v19) = v39) != 0 && !v36; /*0x5c771e*/
          *(_DWORD *)v18 = v36; /*0x5c7723*/
          v34 += 4; /*0x5c7725*/
          v18 += 4; /*0x5c7728*/
          --v5; /*0x5c772b*/
        }
        while ( v5 ); /*0x5c772c*/
      }
    }
  }
  return (char)v19; /*0x5c772e*/
}
}
} // namespace gamemd

// 0x5C7740
namespace gamemd {
int ModInverseBigInteger(char * a1, const void * a2, const void * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ModInverseBigInteger(char *a1, const void *a2, const void *a3, int a4)
{
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  int v7; // ebx
  int v8; // edx
  char *j; // eax
  int v10; // esi
  int v11; // edi
  char *v12; // ecx
  char *v13; // edx
  int v14; // edi
  char *v15; // esi
  unsigned __int16 v16; // ax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  unsigned int *v20; // edi
  unsigned int *v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int result; // eax
  int v25; // [esp+10h] [ebp-714h]
  bool v26; // [esp+10h] [ebp-714h]
  unsigned __int8 v27; // [esp+14h] [ebp-710h]
  int i; // [esp+18h] [ebp-70Ch]
  unsigned int v29; // [esp+1Ch] [ebp-708h]
  char *v30; // [esp+20h] [ebp-704h]
  _DWORD v31[64]; // [esp+24h] [ebp-700h] BYREF
  _DWORD v32[128]; // [esp+124h] [ebp-600h] BYREF
  _DWORD v33[64]; // [esp+324h] [ebp-400h] BYREF
  char v34[256]; // [esp+424h] [ebp-300h] BYREF
  char v35[512]; // [esp+524h] [ebp-200h] BYREF

  v4 = a4; /*0x5c7748*/
  v30 = a1; /*0x5c774f*/
  v29 = 4 * a4; /*0x5c776e*/
  qmemcpy(v34, a3, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7775*/
  qmemcpy(v35, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7790*/
  memset(v31, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77a2*/
  v5 = 1; /*0x5c77a6*/
  v25 = 1; /*0x5c77ae*/
  v31[0] = 0; /*0x5c77bf*/
  memset(v32, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77ca*/
  v6 = 0; /*0x5c77d3*/
  v32[0] = 1; /*0x5c77d5*/
  for ( i = 0; ; v6 = i ) /*0x5c77dc*/
  {
    v7 = (v5 % 3) << 8; /*0x5c77ec*/
    if ( !*(_DWORD *)&v34[v7] ) /*0x5c77ef*/
    {
      v8 = a4; /*0x5c7805*/
      for ( j = &v34[v7 - 4 + v29]; !*(_DWORD *)j; j -= 4 ) /*0x5c7807*/
      {
        if ( !--v8 ) /*0x5c7813*/
          break; /*0x5c7813*/
      }
      if ( v8 <= 1 ) /*0x5c7820*/
        break; /*0x5c7820*/
    }
    v10 = (v6 % 3) << 8; /*0x5c783f*/
    v11 = ((v6 + 2) % 3) << 8; /*0x5c7853*/
    SubtractBigInteger(&v34[v11], v33, (int)&v34[v10], &v34[v7], a4); /*0x5c785d*/
    FillArrayPattern(v30, (char *)v31 + v7, v33, a4); /*0x5c7875*/
    v12 = (char *)v31 + v10; /*0x5c787e*/
    v27 = 0; /*0x5c7887*/
    v13 = (char *)v31 + v11; /*0x5c788c*/
    if ( 2 * a4 ) /*0x5c7882*/
    {
      v14 = 2 * a4; /*0x5c7894*/
      v15 = (char *)(v30 - v12); /*0x5c7897*/
      do /*0x5c78c9*/
      {
        v13 += 2; /*0x5c789b*/
        v16 = *(_WORD *)&v12[(_DWORD)v15]; /*0x5c789e*/
        v12 += 2; /*0x5c78a2*/
        v17 = *((unsigned __int16 *)v12 - 1) - v16 - v27; /*0x5c78b9*/
        *((_WORD *)v13 - 1) = v17; /*0x5c78bb*/
        --v14; /*0x5c78c4*/
        v27 = BYTE2(v17) & 1; /*0x5c78c5*/
      }
      while ( v14 ); /*0x5c78c9*/
    }
    ++v25; /*0x5c78d5*/
    ++i; /*0x5c78d9*/
    v5 = v25; /*0x5c78dd*/
  }
  v18 = (v5 - 1) % 3; /*0x5c78f1*/
  if ( (int)v31[64 * v18 - 1 + a4] < 0 ) /*0x5c7902*/
  {
    v19 = a3; /*0x5c7904*/
    v20 = &v31[64 * v18]; /*0x5c7912*/
    v26 = 0; /*0x5c7916*/
    v21 = v20; /*0x5c791b*/
    if ( a4 ) /*0x5c791d*/
    {
      do /*0x5c7959*/
      {
        v22 = *v20 + *v19; /*0x5c7927*/
        v23 = v22 + v26; /*0x5c792f*/
        v26 = v22 < *v20 || v26 && !v23; /*0x5c7948*/
        *v21 = v23; /*0x5c794d*/
        ++v19; /*0x5c794f*/
        ++v20; /*0x5c7952*/
        ++v21; /*0x5c7955*/
        --v4; /*0x5c7958*/
      }
      while ( v4 ); /*0x5c7959*/
      v18 = (v5 - 1) % 3; /*0x5c795b*/
    }
  }
  result = v18 << 8; /*0x5c7967*/
  qmemcpy(v30, (char *)v31 + result, v29); /*0x5c7973*/
  return result; /*0x5c797c*/
}
}
} // namespace gamemd

// 0x5C7990
namespace gamemd {
int DivideBigInteger(unsigned int * a1, char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DivideBigInteger(_DWORD *a1, char *a2, int a3)
{
  char *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // ebx
  int *v18; // ebp
  int v19; // esi
  _DWORD *v20; // eax
  int v21; // edx
  bool v22; // cc
  int *v23; // ecx
  int v24; // esi
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned int v27; // [esp+8h] [ebp-114h]
  unsigned __int8 v29; // [esp+10h] [ebp-10Ch]
  int v30; // [esp+14h] [ebp-108h]
  _DWORD *v31; // [esp+18h] [ebp-104h] BYREF
  int v32[64]; // [esp+1Ch] [ebp-100h] BYREF

  if ( !*(_DWORD *)a2 ) /*0x5c799c*/
  {
    v4 = &a2[4 * a3 - 4]; /*0x5c79b1*/
    v5 = a3; /*0x5c79b7*/
    if ( !*(_DWORD *)v4 ) /*0x5c79ad*/
    {
      do /*0x5c79c6*/
      {
        if ( !--v5 ) /*0x5c79bc*/
          break; /*0x5c79bc*/
        v6 = *((_DWORD *)v4 - 1); /*0x5c79be*/
        v4 -= 4; /*0x5c79c1*/
      }
      while ( !v6 ); /*0x5c79c6*/
    }
    if ( v5 <= 1 ) /*0x5c79cb*/
      return -1; /*0x5c79d8*/
  }
  memset(v32, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c79f1*/
  v32[0] = 0; /*0x5c7a00*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c7a0b*/
  *a1 = 0; /*0x5c7a18*/
  v8 = a3; /*0x5c7a1e*/
  v9 = *(_DWORD *)&a2[4 * a3 - 4]; /*0x5c7a20*/
  v10 = (int)&a2[4 * a3 - 4]; /*0x5c7a24*/
  v31 = (_DWORD *)v10; /*0x5c7a2a*/
  if ( v9 ) /*0x5c7a2e*/
  {
LABEL_10:
    if ( v8 ) /*0x5c7a3f*/
    {
      v13 = v8; /*0x5c7a49*/
      v14 = 0x80000000; /*0x5c7a4b*/
      v15 = *(_DWORD *)&a2[4 * v8 - 4]; /*0x5c7a50*/
      v16 = 32 * v13; /*0x5c7a54*/
      if ( v15 >= 0 ) /*0x5c7a59*/
      {
        do /*0x5c7a60*/
        {
          v14 >>= 1; /*0x5c7a5b*/
          --v16; /*0x5c7a5d*/
        }
        while ( (v15 & v14) == 0 ); /*0x5c7a60*/
      }
      v12 = v16; /*0x5c7a62*/
      goto LABEL_15; /*0x5c7a62*/
    }
  }
  else
  {
    while ( --v8 ) /*0x5c7a30*/
    {
      v11 = *(_DWORD *)(v10 - 4); /*0x5c7a33*/
      v10 -= 4; /*0x5c7a36*/
      if ( v11 ) /*0x5c7a3b*/
        goto LABEL_10; /*0x5c7a3b*/
    }
  }
  v12 = 0; /*0x5c7a41*/
LABEL_15:
  if ( v12 == -1 ) /*0x5c7a69*/
    v27 = 0; /*0x5c7a6b*/
  else
    v27 = 1 << (v12 % 32); /*0x5c7a88*/
  v32[(unsigned int)(v12 - 1) >> 5] |= 1 << ((v12 - 1) & 0x1F); /*0x5c7aa8*/
  v17 = &a1[(v12 + 32) / 32 - 1]; /*0x5c7ab8*/
  if ( v12 ) /*0x5c7abc*/
  {
    v18 = &v32[a3 - 1]; /*0x5c7ac3*/
    v30 = v12; /*0x5c7ac7*/
    do /*0x5c7b81*/
    {
      RotateBitBufferLeft(v32, 1, a3); /*0x5c7adc*/
      v19 = a3; /*0x5c7ae4*/
      v20 = v31; /*0x5c7ae6*/
      if ( (unsigned int)*v18 >= *v31 ) /*0x5c7aee*/
      {
        v21 = (char *)v18 - (char *)v31; /*0x5c7af2*/
        v22 = (unsigned int)*v18 <= *v31; /*0x5c7af4*/
        while ( v22 ) /*0x5c7af7*/
        {
          --v20; /*0x5c7af9*/
          if ( !--v19 ) /*0x5c7afd*/
            break; /*0x5c7afd*/
          v22 = *(_DWORD *)((char *)v20 + v21) <= *v20; /*0x5c7b01*/
          if ( *(_DWORD *)((char *)v20 + v21) < *v20 ) /*0x5c7b04*/
            goto LABEL_30; /*0x5c7b04*/
        }
        v29 = 0; /*0x5c7b0b*/
        v23 = v32; /*0x5c7b15*/
        if ( 2 * a3 ) /*0x5c7b10*/
        {
          v24 = 2 * a3; /*0x5c7b25*/
          do /*0x5c7b55*/
          {
            v25 = *(_WORD *)((char *)v23 + a2 - (char *)v32); /*0x5c7b2a*/
            v23 = (int *)((char *)v23 + 2); /*0x5c7b2e*/
            v26 = *((unsigned __int16 *)v23 - 1) - v25 - v29; /*0x5c7b45*/
            *((_WORD *)v23 - 1) = v26; /*0x5c7b47*/
            --v24; /*0x5c7b50*/
            v29 = BYTE2(v26) & 1; /*0x5c7b51*/
          }
          while ( v24 ); /*0x5c7b55*/
        }
        *v17 |= v27; /*0x5c7b5f*/
      }
LABEL_30:
      v27 >>= 1; /*0x5c7b61*/
      if ( !v27 ) /*0x5c7b6b*/
      {
        v27 = 0x80000000; /*0x5c7b6d*/
        --v17; /*0x5c7b75*/
      }
      --v30; /*0x5c7b7d*/
    }
    while ( v30 ); /*0x5c7b81*/
  }
  return 0; /*0x5c79cd*/
}
}
} // namespace gamemd

// 0x5C7BA0
namespace gamemd {
char sub_5C7BA0(const char * a1, unsigned short * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C7BA0(const char *a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // ebp
  const char *v4; // esi
  unsigned __int16 *v5; // eax
  unsigned int v6; // kr04_4
  int v7; // ebx
  unsigned __int8 *v8; // esi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int16 *v12; // ecx
  int v13; // esi
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  unsigned int *v16; // edi
  unsigned int *v17; // edx
  int v18; // ebp
  unsigned int v19; // esi
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  int v23; // esi
  int v24; // ecx
  bool v25; // zf
  bool v27; // [esp+Fh] [ebp-11h]
  __int16 v28; // [esp+10h] [ebp-10h]
  bool v29; // [esp+14h] [ebp-Ch]
  unsigned __int8 *i; // [esp+18h] [ebp-8h]

  v3 = a2; /*0x5c7ba5*/
  v4 = a1; /*0x5c7ba7*/
  LOBYTE(v5) = 0; /*0x5c7bae*/
  memset(a2, 0, 4 * a3); /*0x5c7bb2*/
  *(_DWORD *)a2 = 0; /*0x5c7bba*/
  if ( a1 )
  {
    v6 = strlen(a1) + 1; /*0x5c7bc8*/
    if ( v6 != 1 )
    {
      switch ( toupper(v4[v6 - 2]) ) /*0x5c7bf1*/
      {
        case 'B': /*0x5c7bf1*/
          v28 = 2; /*0x5c7c0c*/
          break; /*0x5c7c14*/
        case 'H': /*0x5c7bf1*/
          v28 = 16; /*0x5c7bf8*/
          break; /*0x5c7c00*/
        case 'O': /*0x5c7bf1*/
          v28 = 8; /*0x5c7c02*/
          break; /*0x5c7c0a*/
        default:
          v28 = 10; /*0x5c7c16*/
          break; /*0x5c7c16*/
      }
      v27 = *v4 == 45; /*0x5c7c26*/
      if ( *v4 == 45 ) /*0x5c7c2a*/
        ++v4; /*0x5c7c2c*/
      v7 = *(unsigned __int8 *)v4; /*0x5c7c30*/
      v8 = (unsigned __int8 *)(v4 + 1); /*0x5c7c32*/
      for ( i = v8; v7; i = v8 )
      {
        if ( v7 != 44 )
        {
          if ( !isxdigit((char)v7) ) /*0x5c7c4c*/
            break; /*0x5c7c4c*/
          v9 = isdigit((char)v7) ? v7 - 48 : (unsigned __int8)(toupper((char)v7) - 65) + 10;
          if ( v9 >= (unsigned __int16)v28 ) /*0x5c7c93*/
            break; /*0x5c7c93*/
          v10 = a3; /*0x5c7c99*/
          v11 = 0; /*0x5c7c9d*/
          v12 = v3; /*0x5c7c9f*/
          v13 = 2 * a3; /*0x5c7ca1*/
          if ( 2 * a3 > 0 ) /*0x5c7ca6*/
          {
            do /*0x5c7cc2*/
            {
              v14 = *v12++; /*0x5c7cad*/
              v15 = v11 + v28 * v14; /*0x5c7cb6*/
              *(v12 - 1) = v15; /*0x5c7cb8*/
              --v13; /*0x5c7cbf*/
              v11 = HIWORD(v15); /*0x5c7cc0*/
            }
            while ( v13 ); /*0x5c7cc2*/
            v10 = a3; /*0x5c7cc4*/
          }
          v29 = 0; /*0x5c7cca*/
          v16 = (unsigned int *)v3; /*0x5c7ccf*/
          v17 = (unsigned int *)v3; /*0x5c7cd1*/
          if ( v10 ) /*0x5c7cd3*/
          {
            v18 = v10; /*0x5c7cd5*/
            do /*0x5c7d0e*/
            {
              v19 = *v16 + v9; /*0x5c7ce2*/
              v20 = v19 + v29; /*0x5c7ce5*/
              v29 = v19 < *v16 || v29 && !v20; /*0x5c7cfe*/
              *v17 = v20; /*0x5c7d03*/
              v9 = 0; /*0x5c7d05*/
              ++v16; /*0x5c7d07*/
              ++v17; /*0x5c7d0a*/
              --v18; /*0x5c7d0d*/
            }
            while ( v18 ); /*0x5c7d0e*/
            v3 = a2; /*0x5c7d10*/
          }
          v8 = i; /*0x5c7d14*/
        }
        v7 = *v8++; /*0x5c7d1a*/
      }
      LOBYTE(v5) = v27; /*0x5c7d29*/
      if ( v27 ) /*0x5c7d30*/
      {
        v21 = (int *)v3; /*0x5c7d36*/
        if ( a3 > 0 ) /*0x5c7d3a*/
        {
          v22 = a3; /*0x5c7d3c*/
          do /*0x5c7d49*/
          {
            v23 = *v21++; /*0x5c7d3e*/
            *(v21 - 1) = ~v23; /*0x5c7d45*/
            --v22; /*0x5c7d48*/
          }
          while ( v22 ); /*0x5c7d49*/
        }
        v24 = a3; /*0x5c7d4b*/
        v25 = *(_DWORD *)v3 == -1; /*0x5c7d50*/
        v5 = v3; /*0x5c7d51*/
        ++*(_DWORD *)v3; /*0x5c7d53*/
        for ( ; v25; v25 = (*(_DWORD *)v5)++ == -1 ) /*0x5c7d56*/
        {
          v5 += 2; /*0x5c7d58*/
          if ( !--v24 ) /*0x5c7d5c*/
            break; /*0x5c7d5c*/
        }
      }
    }
  }
  return (char)v5; /*0x5c7d65*/
}
}
} // namespace gamemd

// 0x5C8500
namespace gamemd {
int ModBigIntExp(unsigned int * a0, AbstractClass * aP1, char * a2, char * a3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall ModBigIntExp(_DWORD *a0, AbstractClass *aP1, char *a2, char *a3, int a5)
{
  int v5; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  char *v10; // eax
  int v11; // ecx
  char *v13; // eax
  int v14; // ecx
  int v15; // edi
  char *v16; // ebx
  int v17; // ecx
  char *v18; // edi
  _DWORD *v19; // eax
  int v20; // edi
  bool v21; // cc
  int v22; // ecx
  char *v23; // eax
  bool v24; // cc
  unsigned int v25; // edi
  char *v26; // eax
  int v27; // esi
  int v28; // ecx
  unsigned int v29; // edi
  int v30; // ecx
  char *v31; // eax
  int v32; // edx
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ebx
  _WORD *v39; // edx
  char *v40; // ebp
  unsigned int v41; // ebx
  int v43; // [esp+14h] [ebp-110h]
  int v45; // [esp+1Ch] [ebp-108h]
  unsigned int v46; // [esp+20h] [ebp-104h]
  char v47[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8508*/
  v6 = 4 * a5; /*0x5c8516*/
  memset(a0, 0, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c8529*/
  *a0 = 1; /*0x5c853d*/
  if ( !*(_DWORD *)a2 ) /*0x5c8543*/
  {
    v7 = &a2[v6 - 4]; /*0x5c854c*/
    v8 = a5; /*0x5c8552*/
    if ( !*(_DWORD *)v7 ) /*0x5c8548*/
    {
      do /*0x5c8561*/
      {
        if ( !--v8 ) /*0x5c8557*/
          break; /*0x5c8557*/
        v9 = *((_DWORD *)v7 - 1); /*0x5c8559*/
        v7 -= 4; /*0x5c855c*/
      }
      while ( !v9 ); /*0x5c8561*/
    }
    if ( v8 <= 1 ) /*0x5c8566*/
    {
      if ( !*(_DWORD *)aP1->__pad_0 ) /*0x5c856c*/
      {
        v10 = &aP1->__pad_0[v6 - 4]; /*0x5c8579*/
        if ( !*(_DWORD *)v10 ) /*0x5c8575*/
        {
          do /*0x5c858c*/
          {
            if ( !--v5 ) /*0x5c8582*/
              break; /*0x5c8582*/
            v11 = *((_DWORD *)v10 - 1); /*0x5c8584*/
            v10 -= 4; /*0x5c8587*/
          }
          while ( !v11 ); /*0x5c858c*/
        }
        if ( v5 <= 1 ) /*0x5c8591*/
          return -1; /*0x5c85a4*/
      }
      return 0; /*0x5c8591*/
    }
  }
  if ( !*(_DWORD *)a3 ) /*0x5c85ae*/
  {
    v13 = &a3[v6 - 4]; /*0x5c85b7*/
    v14 = a5; /*0x5c85bd*/
    if ( !*(_DWORD *)v13 ) /*0x5c85b3*/
    {
      do /*0x5c85cc*/
      {
        if ( !--v14 ) /*0x5c85c2*/
          break; /*0x5c85c2*/
        v15 = *((_DWORD *)v13 - 1); /*0x5c85c4*/
        v13 -= 4; /*0x5c85c7*/
      }
      while ( !v15 ); /*0x5c85cc*/
    }
    if ( v14 <= 1 ) /*0x5c85d1*/
      return -2; /*0x5c85e2*/
  }
  v16 = &a3[v6 - 4]; /*0x5c85e9*/
  v17 = a5; /*0x5c85ed*/
  v18 = &aP1->__pad_0[v6 - 4]; /*0x5c85ef*/
  v19 = v16; /*0x5c85f3*/
  if ( *(_DWORD *)v18 < *(_DWORD *)v16 ) /*0x5c85f9*/
  {
LABEL_23:
    v22 = a5; /*0x5c860f*/
    v23 = &a3[v6 - 4]; /*0x5c8620*/
    if ( *(_DWORD *)&a2[v6 - 4] >= *(_DWORD *)v16 ) /*0x5c8626*/
    {
      v24 = *(_DWORD *)&a2[v6 - 4] <= *(_DWORD *)v16; /*0x5c862a*/
      while ( v24 ) /*0x5c862d*/
      {
        v23 -= 4; /*0x5c862f*/
        if ( !--v22 ) /*0x5c8633*/
          break; /*0x5c8633*/
        v25 = *(_DWORD *)&v23[a2 - a3]; /*0x5c8637*/
        v24 = v25 <= *(_DWORD *)v23; /*0x5c863a*/
        if ( v25 < *(_DWORD *)v23 ) /*0x5c863c*/
          goto LABEL_31; /*0x5c863c*/
      }
      return -4; /*0x5c8661*/
    }
LABEL_31:
    v26 = &a3[v6 - 4]; /*0x5c8664*/
    v27 = a5; /*0x5c8666*/
    v45 = a5; /*0x5c8668*/
    if ( !*(_DWORD *)v16 ) /*0x5c866c*/
    {
      do /*0x5c867c*/
      {
        if ( !--v27 ) /*0x5c8672*/
          break; /*0x5c8672*/
        v28 = *((_DWORD *)v26 - 1); /*0x5c8674*/
        v26 -= 4; /*0x5c8677*/
      }
      while ( !v28 ); /*0x5c867c*/
      v45 = v27; /*0x5c867e*/
    }
    if ( ModBigIntExp_Helper(a3, v27) ) /*0x5c868b*/
      return -5; /*0x5c86a3*/
    v29 = 4 * v27; /*0x5c86ad*/
    v30 = v27; /*0x5c86b4*/
    v46 = 4 * v27; /*0x5c86b6*/
    v31 = &a2[4 * v27 - 4]; /*0x5c86be*/
    if ( *(_DWORD *)v31 ) /*0x5c86ba*/
    {
LABEL_40:
      if ( v30 ) /*0x5c86d5*/
      {
        v34 = v30; /*0x5c86db*/
        v35 = *(_DWORD *)&a2[4 * v30 - 4]; /*0x5c86dd*/
        v36 = 0x80000000; /*0x5c86e1*/
        v37 = 32 * v34; /*0x5c86e6*/
        if ( v35 >= 0 ) /*0x5c86eb*/
        {
          do /*0x5c86f2*/
          {
            v36 >>= 1; /*0x5c86ed*/
            --v37; /*0x5c86ef*/
          }
          while ( (v35 & v36) == 0 ); /*0x5c86f2*/
        }
        v33 = v37; /*0x5c86f4*/
        goto LABEL_45; /*0x5c86f4*/
      }
    }
    else
    {
      while ( --v30 ) /*0x5c86c6*/
      {
        v32 = *((_DWORD *)v31 - 1); /*0x5c86c9*/
        v31 -= 4; /*0x5c86cc*/
        if ( v32 ) /*0x5c86d1*/
          goto LABEL_40; /*0x5c86d1*/
      }
    }
    v33 = 0; /*0x5c86d7*/
LABEL_45:
    if ( (v33 + 31) / 32 ) /*0x5c86ff*/
    {
      if ( v33 ) /*0x5c870a*/
        v38 = 1 << ((v33 - 1) % 32); /*0x5c8725*/
      else
        v38 = 0; /*0x5c870c*/
      v39 = a0; /*0x5c8727*/
      v40 = &a2[4 * ((v33 + 31) / 32) - 4]; /*0x5c872d*/
      v43 = v33 - 1; /*0x5c8734*/
      qmemcpy(a0, aP1, v29); /*0x5c8741*/
      v41 = v38 >> 1; /*0x5c8748*/
      if ( !v41 ) /*0x5c874c*/
      {
        v41 = 0x80000000; /*0x5c874e*/
        v40 = &a2[4 * ((v33 + 31) / 32) - 8]; /*0x5c8753*/
      }
      if ( v33 != 1 ) /*0x5c875f*/
      {
        while ( 1 ) /*0x5c8776*/
        {
          ComputeModularInverse((int *)v47, v39, v45); /*0x5c8776*/
          if ( (v41 & *(_DWORD *)v40) != 0 ) /*0x5c877e*/
            ComputeModularInverse(a0, aP1, v45); /*0x5c878e*/
          else
            qmemcpy(a0, v47, v46); /*0x5c87a6*/
          v41 >>= 1; /*0x5c87af*/
          if ( !v41 ) /*0x5c87b1*/
          {
            v41 = 0x80000000; /*0x5c87b3*/
            v40 -= 4; /*0x5c87b8*/
          }
          if ( !--v43 ) /*0x5c87c4*/
            break; /*0x5c87c4*/
          v39 = a0; /*0x5c8768*/
        }
      }
      memset(&g_MatrixTransformState + 489, 0, v46); /*0x5c87d8*/
      *(&g_MatrixTransformState + 554) = 0; /*0x5c87e1*/
      *(&g_MatrixTransformState + 489) = 0; /*0x5c87f2*/
      memset(&g_MatrixTransformState + 555, 0, v46); /*0x5c87fb*/
      *(&g_MatrixTransformState + 685) = 0; /*0x5c87ff*/
      *((_WORD *)&g_MatrixTransformState + 968) = 0; /*0x5c8808*/
      *(_QWORD *)(&g_MatrixTransformState + 487) = 0; /*0x5c882b*/
      *((_QWORD *)&g_MatrixTransformState + 344) = 0; /*0x5c8830*/
      *(&g_MatrixTransformState + 555) = 0; /*0x5c8836*/
      *(_QWORD *)(&g_MatrixTransformState + 485) = 0; /*0x5c8841*/
      *((_QWORD *)&(&g_MatrixTransformState)[57] + 1) = 0; /*0x5c884d*/
      *((_WORD *)&(&g_MatrixTransformState)[46] + 2) = 0; /*0x5c8853*/
      *(&g_MatrixTransformState + 483) = 0; /*0x5c885a*/
    }
    return 0; /*0x5c8863*/
  }
  v20 = v18 - v16; /*0x5c85fb*/
  v21 = *(_DWORD *)&v16[v20] <= *(_DWORD *)v16; /*0x5c85fd*/
  while ( v21 ) /*0x5c8600*/
  {
    --v19; /*0x5c8602*/
    if ( !--v17 ) /*0x5c8606*/
      break; /*0x5c8606*/
    v21 = *(_DWORD *)((char *)v19 + v20) <= *v19; /*0x5c860a*/
    if ( *(_DWORD *)((char *)v19 + v20) < *v19 ) /*0x5c860d*/
      goto LABEL_23; /*0x5c860d*/
  }
  return -3; /*0x5c8597*/
}
}
} // namespace gamemd

// 0x5C8980
namespace gamemd {
char sub_5C8980(char * a1, unsigned int edx0, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C8980(char *a1, unsigned int edx0, int a3)
{
  char *v3; // edx
  int v4; // ebx
  char *v5; // eax
  int v6; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  unsigned __int16 *i; // [esp+10h] [ebp-310h]
  int v15; // [esp+14h] [ebp-30Ch]
  char a2[256]; // [esp+20h] [ebp-300h] BYREF
  AbstractClass aP1; // [esp+120h] [ebp-200h] BYREF
  _DWORD a0[64]; // [esp+220h] [ebp-100h] BYREF

  v3 = a1; /*0x5c8993*/
  v4 = a3; /*0x5c8996*/
  qmemcpy(a2, a1, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c89ab*/
  v5 = a2; /*0x5c89b6*/
  v6 = a3; /*0x5c89c0*/
  if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c89c3*/
  {
    do /*0x5c89dc*/
    {
      v5 += 4; /*0x5c89cc*/
      if ( !--v6 ) /*0x5c89d0*/
        break; /*0x5c89d0*/
      v8 = *(_DWORD *)v5 - 1; /*0x5c89d5*/
      *(_DWORD *)v5 = v8; /*0x5c89d7*/
    }
    while ( v8 == -1 ); /*0x5c89dc*/
  }
  v15 = 0; /*0x5c89e2*/
  if ( !edx0 ) /*0x5c89ec*/
    return 1; /*0x5c8aa1*/
  for ( i = (unsigned __int16 *)&unk_82E174; ; ++i ) /*0x5c89f2*/
  {
    memset(&aP1, 0, v4 * 4); /*0x5c8a0a*/
    *(_DWORD *)aP1[0] = *i; /*0x5c8a25*/
    ModBigIntExp(a0, &aP1, a2, v3, a3); /*0x5c8a38*/
    if ( a0[0] != 1 ) /*0x5c8a45*/
      break; /*0x5c8a45*/
    v9 = &a0[v4 - 1]; /*0x5c8a4e*/
    v10 = a3; /*0x5c8a57*/
    if ( !a0[a3 - 1] ) /*0x5c8a47*/
    {
      do /*0x5c8a66*/
      {
        if ( !--v10 ) /*0x5c8a5c*/
          break; /*0x5c8a5c*/
      }
      while ( !*--v9 ); /*0x5c8a66*/
    }
    if ( v10 > 1 ) /*0x5c8a6b*/
      break; /*0x5c8a6b*/
    if ( ++v15 >= edx0 ) /*0x5c8a7d*/
      return 1; /*0x5c8a87*/
    v3 = a1; /*0x5c8a89*/
  }
  return 0; /*0x5c8a92*/
}
}
} // namespace gamemd

// 0x5C8AB0
namespace gamemd {
char ValidateRSAKey(int a1, char * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ValidateRSAKey(int a1, char *a2, int a3, int a4)
{
  char *v4; // ecx
  unsigned __int16 v5; // si
  _DWORD *v6; // edx
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int HighestBitBitArray; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  _DWORD *v19; // edi
  char *v20; // edx
  _DWORD *v21; // eax
  int v22; // esi
  int v23; // edx
  bool v24; // cc
  char *v25; // ebx
  _DWORD *v26; // eax
  int v27; // esi
  int v28; // edx
  bool v29; // cc
  _DWORD *v30; // eax
  int v31; // ecx
  unsigned __int8 v34; // [esp+10h] [ebp-718h]
  int v35; // [esp+10h] [ebp-718h]
  unsigned int v36; // [esp+14h] [ebp-714h]
  unsigned __int8 v37; // [esp+18h] [ebp-710h]
  int v38; // [esp+1Ch] [ebp-70Ch]
  char *v39; // [esp+20h] [ebp-708h]
  int v40; // [esp+24h] [ebp-704h] BYREF
  _DWORD v41[64]; // [esp+28h] [ebp-700h] BYREF
  _DWORD v42[64]; // [esp+128h] [ebp-600h] BYREF
  _DWORD v43[64]; // [esp+228h] [ebp-500h] BYREF
  char v44[256]; // [esp+328h] [ebp-400h] BYREF
  _BYTE v45[256]; // [esp+428h] [ebp-300h] BYREF
  char v46[256]; // [esp+528h] [ebp-200h] BYREF
  _DWORD v47[64]; // [esp+628h] [ebp-100h] BYREF

  v40 = a1; /*0x5c8ac1*/
  v39 = a2; /*0x5c8ac9*/
  v4 = a2; /*0x5c8ad0*/
  v34 = 0; /*0x5c8ad2*/
  v5 = 1; /*0x5c8ad9*/
  v6 = v42; /*0x5c8ade*/
  if ( 2 * a4 ) /*0x5c8acd*/
  {
    v7 = 2 * a4; /*0x5c8ae7*/
    do /*0x5c8b19*/
    {
      v8 = *(_WORD *)v4; /*0x5c8af2*/
      v4 += 2; /*0x5c8af5*/
      v6 = (_DWORD *)((char *)v6 + 2); /*0x5c8b04*/
      v9 = v8 - v5 - v34; /*0x5c8b07*/
      v5 = 0; /*0x5c8b09*/
      *((_WORD *)v6 - 1) = v9; /*0x5c8b0b*/
      --v7; /*0x5c8b14*/
      v34 = BYTE2(v9) & 1; /*0x5c8b15*/
    }
    while ( v7 ); /*0x5c8b19*/
  }
  v10 = 0; /*0x5c8b1d*/
  v36 = 0; /*0x5c8b25*/
  if ( 32 * a4 ) /*0x5c8b22*/
  {
    do /*0x5c8b48*/
    {
      if ( ((1 << (v10 & 0x1F)) & v42[v10 >> 5]) != 0 ) /*0x5c8b43*/
        break; /*0x5c8b43*/
      ++v10; /*0x5c8b45*/
    }
    while ( v10 < 32 * a4 ); /*0x5c8b48*/
    v36 = v10; /*0x5c8b4a*/
  }
  qmemcpy(v46, v42, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8b68*/
  RotateBitBufferRight(v42, v10, a4); /*0x5c8b7b*/
  v38 = 0; /*0x5c8b87*/
  if ( a3 <= 0 ) /*0x5c8b91*/
    return 1; /*0x5c8dbe*/
  while ( 1 ) /*0x5c8bac*/
  {
    memset(v44, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8bac*/
    v37 = 0; /*0x5c8bb0*/
    *(_DWORD *)v44 = 2; /*0x5c8bbe*/
    v11 = v45; /*0x5c8bce*/
    if ( 2 * a4 ) /*0x5c8bc9*/
    {
      v12 = 2 * a4; /*0x5c8bf7*/
      do /*0x5c8c25*/
      {
        v13 = *(unsigned __int16 *)&v11[(char *)v42 - v45] - *(unsigned __int16 *)&v11[v44 - v45]; /*0x5c8c06*/
        v11 += 2; /*0x5c8c12*/
        v14 = v13 - v37; /*0x5c8c15*/
        *((_WORD *)v11 - 1) = v14; /*0x5c8c17*/
        --v12; /*0x5c8c20*/
        v37 = BYTE2(v14) & 1; /*0x5c8c21*/
      }
      while ( v12 ); /*0x5c8c25*/
      v10 = v36; /*0x5c8c27*/
    }
    HighestBitBitArray = FindBitArrayHighestBit((int)v45, a4); /*0x5c8c39*/
    do /*0x5c8c63*/
      ValidateRSAKey_Helper(HighestBitBitArray, a4); /*0x5c8c48*/
    while ( (int)CompareBigIntLE(a4) > 0 ); /*0x5c8c63*/
    Crypto_Helper(v44, 0, a4); /*0x5c8c7e*/
    ModBigIntExp(v41, v43, v46, v39, a4); /*0x5c8c9c*/
    if ( v41[0] == 1 ) /*0x5c8ca6*/
    {
      v16 = &v41[a4 - 1]; /*0x5c8cac*/
      v17 = a4; /*0x5c8cb2*/
      if ( !*v16 ) /*0x5c8ca8*/
      {
        do /*0x5c8cc1*/
        {
          if ( !--v17 ) /*0x5c8cb7*/
            break; /*0x5c8cb7*/
        }
        while ( !*--v16 ); /*0x5c8cc1*/
      }
      if ( v17 <= 1 ) /*0x5c8cc6*/
        goto LABEL_40; /*0x5c8cc6*/
    }
    v19 = &v41[a4 + 63]; /*0x5c8ccc*/
    v20 = (char *)&v41[a4 - 1]; /*0x5c8cd3*/
    v21 = v19; /*0x5c8cd7*/
    v22 = a4; /*0x5c8cd9*/
    if ( *(_DWORD *)v20 >= *v19 ) /*0x5c8cdf*/
    {
      v23 = v20 - (char *)v19; /*0x5c8ce1*/
      v24 = *(_DWORD *)((char *)v19 + v23) <= *v19; /*0x5c8ce3*/
      do /*0x5c8cf7*/
      {
        if ( !v24 ) /*0x5c8ce6*/
          break; /*0x5c8ce6*/
        --v21; /*0x5c8ce8*/
        if ( !--v22 ) /*0x5c8cec*/
          goto LABEL_40; /*0x5c8cec*/
        v24 = *(_DWORD *)((char *)v21 + v23) <= *v21; /*0x5c8cf4*/
      }
      while ( *(_DWORD *)((char *)v21 + v23) >= *v21 ); /*0x5c8cf7*/
    }
    v35 = 1; /*0x5c8cfc*/
    if ( v10 > 1 ) /*0x5c8d04*/
      break; /*0x5c8d04*/
LABEL_39:
    if ( v35 == v10 ) /*0x5c8d91*/
      return 0; /*0x5c8d91*/
LABEL_40:
    if ( ++v38 >= a3 ) /*0x5c8da5*/
      return 1; /*0x5c8da5*/
  }
  v25 = &v46[4 * a4 + 252]; /*0x5c8d0a*/
  while ( 1 ) /*0x5c8d2a*/
  {
    ModBigIntExp(v47, v41, v44, v39, a4); /*0x5c8d2a*/
    v26 = &v41[a4 + 63]; /*0x5c8d31*/
    v27 = a4; /*0x5c8d33*/
    if ( *(_DWORD *)v25 >= *v19 ) /*0x5c8d39*/
    {
      v28 = v25 - (char *)v19; /*0x5c8d3d*/
      v29 = *(_DWORD *)v25 <= *v19; /*0x5c8d3f*/
      do /*0x5c8d4f*/
      {
        if ( !v29 ) /*0x5c8d42*/
          break; /*0x5c8d42*/
        --v26; /*0x5c8d44*/
        if ( !--v27 ) /*0x5c8d48*/
          goto LABEL_38; /*0x5c8d48*/
        v29 = *(_DWORD *)((char *)v26 + v28) <= *v26; /*0x5c8d4c*/
      }
      while ( *(_DWORD *)((char *)v26 + v28) >= *v26 ); /*0x5c8d4f*/
    }
    if ( v41[0] == 1 ) /*0x5c8d56*/
    {
      v30 = &v41[a4 - 1]; /*0x5c8d5c*/
      v31 = a4; /*0x5c8d62*/
      if ( !*v30 ) /*0x5c8d58*/
      {
        do /*0x5c8d71*/
        {
          if ( !--v31 ) /*0x5c8d67*/
            break; /*0x5c8d67*/
        }
        while ( !*--v30 ); /*0x5c8d71*/
      }
      if ( v31 <= 1 ) /*0x5c8d76*/
        return 0; /*0x5c8dac*/
    }
    if ( ++v35 >= v36 ) /*0x5c8d87*/
    {
LABEL_38:
      v10 = v36; /*0x5c8d89*/
      goto LABEL_39; /*0x5c8d89*/
    }
  }
}
}
} // namespace gamemd

// 0x5C8E40
namespace gamemd {
char sub_5C8E40(ObjectClass * aP0, int a2, int a3, ObjectClass * aP3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_5C8E40(ObjectClass *aP0, int a2, int a3, ObjectClass *aP3, int a5)
{
  int v5; // edi
  _BYTE *v7; // ecx
  int v8; // eax
  int v9; // eax
  char *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ebp
  int *v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // esi
  char v21; // cl
  int v22; // ebp
  char *v23; // edx
  unsigned int *v24; // eax
  int v25; // esi
  int v26; // edx
  bool v27; // cc
  unsigned int v28; // edi
  ObjectClass *v29; // edi
  int v30; // edx
  char *v31; // ecx
  unsigned __int8 v33; // [esp+10h] [ebp-114h]
  int v34; // [esp+10h] [ebp-114h]
  bool v35; // [esp+10h] [ebp-114h]
  int v36; // [esp+14h] [ebp-110h]
  char *v37; // [esp+14h] [ebp-110h]
  int v39; // [esp+1Ch] [ebp-108h]
  char *v40; // [esp+20h] [ebp-104h] BYREF
  _BYTE v41[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8e4a*/
  v33 = 0; /*0x5c8e57*/
  v7 = v41; /*0x5c8e5f*/
  if ( 2 * a5 ) /*0x5c8e63*/
  {
    v36 = 2 * a5; /*0x5c8e85*/
    do /*0x5c8ebc*/
    {
      v8 = *(unsigned __int16 *)&v7[(char *)aP3 - v41] - *(unsigned __int16 *)&v7[a3 - (_DWORD)v41]; /*0x5c8e95*/
      v7 += 2; /*0x5c8ea1*/
      v9 = v8 - v33; /*0x5c8ea4*/
      *((_WORD *)v7 - 1) = v9; /*0x5c8ea6*/
      v33 = BYTE2(v9) & 1; /*0x5c8eaf*/
      --v36; /*0x5c8eb8*/
    }
    while ( v36 ); /*0x5c8ebc*/
  }
  v10 = &v41[4 * a5 - 4]; /*0x5c8ec2*/
  v11 = a5; /*0x5c8ec8*/
  v37 = v10; /*0x5c8eca*/
  if ( *(_DWORD *)v10 ) /*0x5c8ebe*/
  {
LABEL_7:
    if ( v11 ) /*0x5c8edf*/
    {
      v14 = (int *)&v41[4 * v11 - 4]; /*0x5c8ee9*/
      v15 = v11; /*0x5c8eed*/
      v16 = 0x80000000; /*0x5c8eef*/
      v17 = *v14; /*0x5c8ef4*/
      v18 = 32 * v15; /*0x5c8ef6*/
      if ( v17 >= 0 ) /*0x5c8efb*/
      {
        do /*0x5c8f02*/
        {
          v16 >>= 1; /*0x5c8efd*/
          --v18; /*0x5c8eff*/
        }
        while ( (v17 & v16) == 0 ); /*0x5c8f02*/
      }
      v34 = v18; /*0x5c8f04*/
      v13 = v18; /*0x5c8f08*/
      goto LABEL_12; /*0x5c8f08*/
    }
  }
  else
  {
    while ( --v11 ) /*0x5c8ed0*/
    {
      v12 = *((_DWORD *)v10 - 1); /*0x5c8ed3*/
      v10 -= 4; /*0x5c8ed6*/
      if ( v12 ) /*0x5c8edb*/
        goto LABEL_7; /*0x5c8edb*/
    }
  }
  v13 = 0; /*0x5c8ee1*/
  v34 = 0; /*0x5c8ee3*/
LABEL_12:
  v19 = 32 * a5; /*0x5c8f0a*/
  v39 = 32 * a5; /*0x5c8f13*/
  v40 = &aP0->__pad_0[4 * a5 - 4]; /*0x5c8f17*/
  while ( 1 ) /*0x5c8f1b*/
  {
    if ( v13 >= v19 ) /*0x5c8f1d*/
      v13 = v19; /*0x5c8f1f*/
    memset(aP0, 0, 4 * v5); /*0x5c8f3b*/
    *(_DWORD *)aP0->__pad_0 = 0; /*0x5c8f48*/
    v20 = v13 / 8 + 1; /*0x5c8f53*/
    (*(void (__thiscall **)(int, ObjectClass *, int))(*(_DWORD *)a2 + 8))(a2, aP0, v20); /*0x5c8f56*/
    v21 = v13 % 8; /*0x5c8f67*/
    v22 = a5; /*0x5c8f71*/
    v23 = v40; /*0x5c8f7c*/
    aP0->__pad_0[v20 - 1] &= ~(-1 << v21); /*0x5c8f80*/
    v24 = (unsigned int *)&v41[4 * a5 - 4]; /*0x5c8f84*/
    v25 = a5; /*0x5c8f8a*/
    if ( *(_DWORD *)v23 < *(_DWORD *)v37 ) /*0x5c8f90*/
      break; /*0x5c8f90*/
    v26 = v23 - v37; /*0x5c8f92*/
    v27 = *(_DWORD *)&v37[v26] <= *(_DWORD *)v37; /*0x5c8f94*/
    while ( v27 ) /*0x5c8f97*/
    {
      --v24; /*0x5c8f99*/
      if ( --v25 ) /*0x5c8f9d*/
      {
        v28 = *(unsigned int *)((char *)v24 + v26); /*0x5c8fa1*/
        v27 = v28 <= *v24; /*0x5c8fa4*/
        if ( v28 >= *v24 ) /*0x5c8fa6*/
          continue; /*0x5c8fa6*/
      }
      goto LABEL_20; /*0x5c8fa6*/
    }
    v5 = a5; /*0x5c8fe6*/
    v19 = v39; /*0x5c8fed*/
    v13 = v34; /*0x5c8ff1*/
  }
LABEL_20:
  v35 = 0; /*0x5c8fa8*/
  v29 = aP0; /*0x5c8faf*/
  if ( a5 ) /*0x5c8fb1*/
  {
    v30 = a3 - (_DWORD)aP0; /*0x5c8fba*/
    do /*0x5c9008*/
    {
      v24 = (unsigned int *)(*(_DWORD *)aP0->__pad_0 + *(_DWORD *)&v29->__pad_0[v30]); /*0x5c8fc5*/
      v31 = (char *)v24 + v35; /*0x5c8fcd*/
      v35 = (unsigned int)v24 < *(_DWORD *)aP0->__pad_0 || (LOBYTE(v24) = v35) != 0 && !v31; /*0x5c8ffa*/
      *(_DWORD *)v29->__pad_0 = v31; /*0x5c8fff*/
      aP0 = (ObjectClass *)((char *)aP0 + 4); /*0x5c9001*/
      v29 = (ObjectClass *)((char *)v29 + 4); /*0x5c9004*/
      --v22; /*0x5c9007*/
    }
    while ( v22 ); /*0x5c9008*/
  }
  return (char)v24; /*0x5c900a*/
}
}
} // namespace gamemd

// 0x5C9020
namespace gamemd {
char ModCryptoExp(char * a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ModCryptoExp(char *a1, int edx0)
{
  char *v2; // edi
  __int64 v4; // rax
  int v6; // esi
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned __int16 v10; // bp
  _WORD *v11; // edi
  int v12; // esi
  char *v13; // ecx
  _WORD *v14; // esi
  int v15; // edx
  char *v16; // eax
  int v18; // ecx
  unsigned __int16 *v19; // esi
  _DWORD *v20; // eax
  int v21; // ecx
  char a2[252]; // [esp+14h] [ebp-300h] BYREF
  _DWORD a0[64]; // [esp+114h] [ebp-200h] BYREF
  AbstractClass aP1; // [esp+214h] [ebp-100h] BYREF

  v2 = a1; /*0x5c902a*/
  HIDWORD(v4) = *(_DWORD *)a1; /*0x5c9032*/
  if ( (*(_DWORD *)a1 & 1) == 0 ) /*0x5c9037*/
    return 0; /*0x5c9045*/
  v6 = *(_DWORD *)&a1[4 * edx0 - 4]; /*0x5c9046*/
  v7 = &a1[4 * edx0 - 4]; /*0x5c904a*/
  v8 = edx0; /*0x5c9050*/
  if ( !v6 ) /*0x5c9052*/
  {
    do /*0x5c905f*/
    {
      if ( !--v8 ) /*0x5c9055*/
        break; /*0x5c9055*/
      v9 = *((_DWORD *)v7 - 1); /*0x5c9057*/
      v7 -= 4; /*0x5c905a*/
    }
    while ( !v9 ); /*0x5c905f*/
  }
  if ( v8 > 1 || HIDWORD(v4) > (unsigned __int16)dword_82FCE0 ) /*0x5c9072*/
  {
LABEL_17:
    v14 = &unk_82E174; /*0x5c90bb*/
    while ( 1 ) /*0x5c90c0*/
    {
      WORD2(v4) = *v14; /*0x5c90c0*/
      if ( !ShiftBigIntAndScan(a0, (int)v2, SHIDWORD(v4), edx0) ) /*0x5c90ce*/
        break; /*0x5c90ce*/
      if ( (unsigned int)++v14 >= 0x82FCE2 ) /*0x5c90e5*/
      {
        qmemcpy(a2, v2, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c90f9*/
        v15 = edx0; /*0x5c90fd*/
        v16 = a2; /*0x5c9102*/
        if ( (*(_DWORD *)a2)-- == 0 ) /*0x5c910d*/
        {
          do /*0x5c9126*/
          {
            v16 += 4; /*0x5c9116*/
            if ( !--v15 ) /*0x5c911a*/
              break; /*0x5c911a*/
            v18 = *(_DWORD *)v16 - 1; /*0x5c911f*/
            *(_DWORD *)v16 = v18; /*0x5c9121*/
          }
          while ( v18 == -1 ); /*0x5c9126*/
        }
        v19 = (unsigned __int16 *)&unk_82E174; /*0x5c9128*/
        while ( 1 ) /*0x5c9145*/
        {
          memset(&aP1, 0, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c9145*/
          *(_DWORD *)aP1[0] = *v19; /*0x5c916b*/
          ModBigIntExp(a0, &aP1, a2, a1, edx0); /*0x5c9172*/
          if ( a0[0] != 1 ) /*0x5c917f*/
            break; /*0x5c917f*/
          v20 = &a0[edx0 - 1]; /*0x5c918c*/
          v21 = edx0; /*0x5c9195*/
          if ( !*v20 ) /*0x5c9185*/
          {
            do /*0x5c91a4*/
            {
              if ( !--v21 ) /*0x5c919a*/
                break; /*0x5c919a*/
            }
            while ( !*--v20 ); /*0x5c91a4*/
          }
          if ( v21 > 1 ) /*0x5c91a9*/
            break; /*0x5c91a9*/
          if ( ++v19 >= word_82E178 ) /*0x5c91b8*/
            return 1; /*0x5c91b8*/
        }
        return 0; /*0x5c91a9*/
      }
    }
    return 0; /*0x5c90d6*/
  }
  v10 = *(_WORD *)v2; /*0x5c9074*/
  v11 = &unk_82E174; /*0x5c9077*/
  v12 = 3511; /*0x5c907c*/
  do /*0x5c90a6*/
  {
    v4 = v12; /*0x5c9083*/
    WORD2(v4) = v11[v12 / 2]; /*0x5c9088*/
    v13 = (char *)&v11[v12 / 2]; /*0x5c908c*/
    if ( WORD2(v4) <= v10 ) /*0x5c9092*/
    {
      if ( WORD2(v4) == v10 ) /*0x5c9098*/
        goto LABEL_15; /*0x5c9098*/
      v11 = v13 + 2; /*0x5c909a*/
      v12 += -1 - v12 / 2; /*0x5c90a2*/
    }
    else
    {
      v12 /= 2; /*0x5c9094*/
    }
  }
  while ( v12 > 0 ); /*0x5c90a6*/
  v13 = 0; /*0x5c90a8*/
LABEL_15:
  if ( !v13 ) /*0x5c90b1*/
  {
    v2 = a1; /*0x5c90b7*/
    goto LABEL_17; /*0x5c90b7*/
  }
  return 1; /*0x5c9039*/
}
}
} // namespace gamemd

// 0x5C9AE0
namespace gamemd {
int sub_5C9AE0(const void * a1, const void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl sub_5C9AE0(const void *a1, const void *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 96); /*0x5c9aec*/
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 96); /*0x5c9aef*/
  if ( v2 == v3 )
    return 0; /*0x5c9af6*/
  else
    return v2 <= v3 ? 1 : -1;
}
}
} // namespace gamemd

// 0x5CD690
namespace gamemd {
unsigned int * E4Recv_5CD690::sub_5CD690(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_5CD690(int this, int *a2)
{
  int *v4; // edi
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *result; // eax
  _DWORD *v20; // edi
  wchar_t *v21; // eax
  int v22; // edx
  _DWORD *v23; // [esp-8h] [ebp-3Ch]
  int v24; // [esp+Ch] [ebp-28h]
  int v25; // [esp+10h] [ebp-24h]
  _DWORD v26[6]; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+2Ch] [ebp-8h]
  int v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]

  if ( a2[2] <= 0 || a2[3] <= 0 ) /*0x5cd6ac*/
  {
    v20 = (_DWORD *)(this + 56); /*0x5cd81e*/
    v21 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd825*/
    result = sub_5D30C0(*(size_t **)(this + 52), v21, (_DWORD *)(this + 56)); /*0x5cd82e*/
    v22 = this->M8; /*0x5cd836*/
    *v20 = this->M4; /*0x5cd839*/
    this->M60 = v22; /*0x5cd83b*/
  }
  else
  {
    v4 = (int *)(this + 56); /*0x5cd6b2*/
    v23 = (_DWORD *)(this + 56); /*0x5cd6b6*/
    v5 = WideString::GetOrEmpty((wchar_t **)(this + 28)); /*0x5cd6ba*/
    sub_5D30C0(*(size_t **)(this + 52), v5, v23); /*0x5cd6c3*/
    v6 = this->M52; /*0x5cd6dc*/
    this->M4 += (a2[2] - this->M64) / 2; /*0x5cd6df*/
    v7 = a2[3] % *(_DWORD *)(v6 + 8) / 2 + this->M8; /*0x5cd706*/
    v8 = this->M60; /*0x5cd70d*/
    *v4 += this->M4; /*0x5cd710*/
    this->M8 = v7; /*0x5cd71a*/
    this->M60 = v7 + v8; /*0x5cd71d*/
    Rect::Set(v26, 0, 0, 0, 0); /*0x5cd720*/
    v9 = *v4; /*0x5cd727*/
    v10 = this->M60; /*0x5cd729*/
    v11 = this->M64; /*0x5cd72c*/
    v27 = v11; /*0x5cd72f*/
    v28 = this->M68; /*0x5cd736*/
    v29 = a2[2]; /*0x5cd73f*/
    if ( a2[2] <= 0 ) /*0x5cd743*/
      goto LABEL_20; /*0x5cd743*/
    v25 = a2[3]; /*0x5cd74e*/
    if ( v25 <= 0 || *(int *)(this + 64) <= 0 || *(int *)(this + 68) <= 0 ) /*0x5cd768*/
      goto LABEL_20; /*0x5cd768*/
    v12 = *a2; /*0x5cd76a*/
    if ( v9 < *a2 ) /*0x5cd76e*/
    {
      v11 += v9 - v12; /*0x5cd772*/
      v9 = *a2; /*0x5cd774*/
      v27 = v11; /*0x5cd776*/
    }
    if ( v11 < 1 ) /*0x5cd77d*/
      goto LABEL_20; /*0x5cd77d*/
    v13 = a2[1]; /*0x5cd77f*/
    v24 = v13; /*0x5cd784*/
    if ( v10 < v13 ) /*0x5cd788*/
    {
      v14 = v10 - v13 + v28; /*0x5cd790*/
      v10 = v24; /*0x5cd792*/
      v28 = v14; /*0x5cd796*/
    }
    if ( v28 < 1 ) /*0x5cd79f*/
      goto LABEL_20; /*0x5cd79f*/
    if ( v9 + v11 > v12 + v29 ) /*0x5cd7ab*/
      v27 = v29 + v12 - v9; /*0x5cd7b5*/
    if ( v27 < 1 ) /*0x5cd7be*/
      goto LABEL_20; /*0x5cd7be*/
    v15 = v28; /*0x5cd7c8*/
    if ( v28 + v10 > v24 + v25 ) /*0x5cd7d3*/
      v15 = v24 + v25 - v10; /*0x5cd7d7*/
    if ( v15 < 1 ) /*0x5cd7dc*/
    {
LABEL_20:
      v17 = v26[0]; /*0x5cd7e6*/
      v10 = v26[1]; /*0x5cd7ea*/
      v16 = v26[2]; /*0x5cd7ee*/
      v15 = v26[3]; /*0x5cd7f2*/
    }
    else
    {
      v16 = v27; /*0x5cd7de*/
      v17 = v9; /*0x5cd7e2*/
    }
    *v4 = v17; /*0x5cd7f6*/
    v18 = this->M52; /*0x5cd7f8*/
    this->M60 = v10; /*0x5cd7fb*/
    this->M64 = v16; /*0x5cd7fe*/
    this->M68 = v15; /*0x5cd801*/
    result = (_DWORD *)(*(_DWORD *)(v18 + 4) / 2); /*0x5cd80f*/
    this->M4 += result; /*0x5cd813*/
  }
  return result; /*0x5cd80e*/
}
}
} // namespace gamemd

// 0x5CD850
namespace gamemd {
ObjectClass * WrapWideStringText(const wchar_t ** ecx0, int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__fastcall WrapWideStringText(const wchar_t **ecx0, int *a2, int a3)
{
  ObjectClass *v3; // esi
  int *v4; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // edx
  wchar_t **v18; // eax
  wchar_t **v19; // eax
  wchar_t **v20; // eax
  void **v21; // ecx
  wchar_t **v23; // eax
  wchar_t **v24; // eax
  wchar_t **v25; // eax
  ObjectClass *v26; // [esp-8h] [ebp-4Ch]
  ObjectClass *v27; // [esp-8h] [ebp-4Ch]
  size_t v28; // [esp-8h] [ebp-4Ch]
  ObjectClass *v30; // [esp+10h] [ebp-34h] BYREF
  wchar_t *v31; // [esp+14h] [ebp-30h] BYREF
  void *v32; // [esp+18h] [ebp-2Ch] BYREF
  wchar_t *v33; // [esp+1Ch] [ebp-28h] BYREF
  int v34; // [esp+20h] [ebp-24h]
  ObjectClass *v35; // [esp+24h] [ebp-20h]
  int v36; // [esp+28h] [ebp-1Ch]
  ObjectClass *v37; // [esp+2Ch] [ebp-18h] BYREF
  wchar_t *v38; // [esp+30h] [ebp-14h] BYREF
  wchar_t *v39; // [esp+34h] [ebp-10h] BYREF
  wchar_t *v40; // [esp+38h] [ebp-Ch] BYREF
  wchar_t *a1; // [esp+3Ch] [ebp-8h] BYREF
  wchar_t *v42; // [esp+40h] [ebp-4h] BYREF
  int v43; // [esp+48h] [ebp+4h]

  v3 = 0; /*0x5cd855*/
  v4 = a2; /*0x5cd858*/
  v34 = 0; /*0x5cd861*/
  if ( String_Helper(ecx0, 0) ) /*0x5cd865*/
    return 0; /*0x5cd865*/
  if ( !v4 ) /*0x5cd874*/
    return 0; /*0x5cd874*/
  v6 = v4[1]; /*0x5cd87a*/
  if ( a3 <= v6 ) /*0x5cd883*/
    return 0; /*0x5cdb7c*/
  v43 = a3 - v6; /*0x5cd891*/
  if ( WideString::GetChar(ecx0, 0) ) /*0x5cd895*/
  {
    do /*0x5cdac6*/
    {
      v7 = 0; /*0x5cd8a7*/
      v35 = v3; /*0x5cd8ab*/
      if ( v43 <= 0 ) /*0x5cd8af*/
        goto LABEL_12; /*0x5cd8af*/
      while ( WideString::GetChar(ecx0, v3) /*0x5cd8d8*/
           && WideString::GetChar(ecx0, v3) != 10
           && WideString::GetChar(ecx0, v3) != 64 )
      {
        v8 = *v4; /*0x5cd8da*/
        v26 = v3; /*0x5cd8df*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd8e2*/
        LOWORD(v9) = WideString::GetChar(ecx0, v26); /*0x5cd8e3*/
        v36 = v8; /*0x5cd8e8*/
        v4 = a2; /*0x5cd8ec*/
        v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v9); /*0x5cd8fa*/
        if ( v7 >= v43 ) /*0x5cd900*/
          goto LABEL_12; /*0x5cd900*/
      }
      if ( v7 >= v43 ) /*0x5cd908*/
      {
LABEL_12:
        while ( WideString::GetChar(ecx0, v3) ) /*0x5cd90d*/
        {
          if ( WideString::GetChar(ecx0, v3) == 32 || WideString::GetChar(ecx0, v3) == 10 ) /*0x5cd931*/
            break; /*0x5cd931*/
          if ( v3 == v35 ) /*0x5cd937*/
            goto LABEL_18; /*0x5cd937*/
          v10 = *v4; /*0x5cd939*/
          v3 = (ObjectClass *)((char *)v3 - 1); /*0x5cd93c*/
          LOWORD(v11) = WideString::GetChar(ecx0, v3); /*0x5cd940*/
          v12 = v10; /*0x5cd945*/
          v4 = a2; /*0x5cd947*/
          v7 -= (*(int (__thiscall **)(int *, int))(v12 + 4))(a2, v11); /*0x5cd953*/
        }
      }
      if ( v3 == v35 ) /*0x5cd964*/
      {
LABEL_18:
        if ( v7 >= v43 ) /*0x5cd96e*/
          goto LABEL_25; /*0x5cd96e*/
        while ( WideString::GetChar(ecx0, v3) /*0x5cd9c7*/
             && WideString::GetChar(ecx0, v3) != 32
             && WideString::GetChar(ecx0, v3) != 10
             && WideString::GetChar(ecx0, v3) != 64
             && WideString::GetChar(ecx0, v3) != 45 )
        {
          v13 = *v4; /*0x5cd9cd*/
          v27 = v3; /*0x5cd9d2*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cd9d5*/
          LOWORD(v14) = WideString::GetChar(ecx0, v27); /*0x5cd9d6*/
          v36 = v13; /*0x5cd9db*/
          v4 = a2; /*0x5cd9df*/
          v7 += (*(int (__thiscall **)(int *, int))(v36 + 4))(a2, v14); /*0x5cd9ed*/
          if ( v7 >= v43 ) /*0x5cd9f3*/
            goto LABEL_25; /*0x5cd9f3*/
        }
        if ( v7 >= v43 ) /*0x5cdae6*/
        {
LABEL_25:
          v15 = *v4; /*0x5cd9f9*/
          LOWORD(v16) = WideString::GetChar(ecx0, v3); /*0x5cd9ff*/
          v17 = v15; /*0x5cda04*/
          v4 = a2; /*0x5cda06*/
          v7 -= (*(int (__thiscall **)(int *, int))(v17 + 4))(a2, v16); /*0x5cda14*/
          WideString::AssignFromPtr(&v33, ecx0); /*0x5cda17*/
          String::TruncateTo((void **)&v33, (size_t)v3); /*0x5cda21*/
          WideString::AssignFromPtr((wchar_t **)&v32, ecx0); /*0x5cda2b*/
          WideString::Erase((const wchar_t **)&v32, 0, (int)v3); /*0x5cda37*/
          v18 = WideString::Assign(&v42, (CampaignScore *)asc_830174); /*0x5cda4f*/
          v19 = WideString::ConcatAlloc((const wchar_t **)&v33, &a1, (ObjectClass *)v18); /*0x5cda5e*/
          v20 = WideString::ConcatAlloc((const wchar_t **)v19, &v40, (ObjectClass *)&v32); /*0x5cda65*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v20); /*0x5cda6d*/
          DeleteAndZero::Alt((void **)&v40); /*0x5cda76*/
          DeleteAndZero::Alt((void **)&a1); /*0x5cda7f*/
          DeleteAndZero::Alt((void **)&v42); /*0x5cda88*/
          DeleteAndZero::Alt(&v32); /*0x5cda91*/
          v21 = (void **)&v33; /*0x5cda96*/
        }
        else
        {
          WideString::AssignFromPtr(&v31, ecx0); /*0x5cdaf1*/
          v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdaf6*/
          String::TruncateTo((void **)&v31, (size_t)v3); /*0x5cdafc*/
          WideString::AssignFromPtr((wchar_t **)&v30, ecx0); /*0x5cdb06*/
          WideString::Erase((const wchar_t **)&v30, 0, (int)v3); /*0x5cdb12*/
          v23 = WideString::Assign(&v39, (CampaignScore *)asc_830174); /*0x5cdb2a*/
          v24 = WideString::ConcatAlloc((const wchar_t **)&v31, &v38, (ObjectClass *)v23); /*0x5cdb39*/
          v25 = WideString::ConcatAlloc((const wchar_t **)v24, (wchar_t **)&v37, (ObjectClass *)&v30); /*0x5cdb40*/
          WideString::Reassign_Alt((void **)ecx0, (const wchar_t **)v25); /*0x5cdb48*/
          DeleteAndZero::Alt((void **)&v37); /*0x5cdb51*/
          DeleteAndZero::Alt((void **)&v38); /*0x5cdb5a*/
          DeleteAndZero::Alt((void **)&v39); /*0x5cdb63*/
          DeleteAndZero::Alt((void **)&v30); /*0x5cdb6c*/
          v21 = (void **)&v31; /*0x5cdb71*/
        }
        DeleteAndZero::Alt(v21); /*0x5cda9a*/
      }
      if ( v7 > v34 ) /*0x5cdaa3*/
        v34 = v7; /*0x5cdaa5*/
      if ( WideString::GetChar(ecx0, v3) ) /*0x5cdaac*/
      {
        v28 = (size_t)v3; /*0x5cdaba*/
        v3 = (ObjectClass *)((char *)v3 + 1); /*0x5cdabd*/
        String_Helper_7B7660(ecx0, 0xAu, v28); /*0x5cdabe*/
      }
    }
    while ( WideString::GetChar(ecx0, v3) ); /*0x5cdac6*/
  }
  return (ObjectClass *)v34; /*0x5cdad9*/
}
}
} // namespace gamemd

// 0x5CE0C0
namespace gamemd {
char E4Recv_5CE0C0::sub_5CE0C0(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_5CE0C0(int this, int a2, _DWORD *a3)
{
  signed int v4; // edi
  signed int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // ebx
  size_t v10; // ebp
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  size_t v18; // [esp+Ch] [ebp-20h]
  size_t v19; // [esp+Ch] [ebp-20h]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+30h] [ebp+4h]

  v4 = this->M24; /*0x5ce0cb*/
  if ( this->M16 != -1 ) /*0x5ce0d1*/
  {
    v5 = Timer::GetTicks() - this->M16; /*0x5ce0db*/
    if ( v5 >= v4 ) /*0x5ce0e0*/
      goto LABEL_5; /*0x5ce0e0*/
    v4 -= v5; /*0x5ce0e2*/
  }
  if ( v4 ) /*0x5ce0e8*/
  {
LABEL_24:
    *a3 = 0; /*0x5ce28a*/
    a3[1] = 0; /*0x5ce290*/
    a3[2] = 0; /*0x5ce293*/
    a3[3] = 0; /*0x5ce296*/
    return 0; /*0x5ce296*/
  }
LABEL_5:
  if ( (unsigned char)this->M12 != 1 ) /*0x5ce0f6*/
    goto LABEL_24; /*0x5ce0f6*/
  v6 = this->M44; /*0x5ce0fc*/
  this->M16 = Timer::GetTicks(); /*0x5ce108*/
  this->M20 = v20; /*0x5ce10f*/
  this->M24 = v6; /*0x5ce112*/
  if ( this->M32 >= (unsigned int)WideString::Length((const wchar_t **)(this + 28)) ) /*0x5ce122*/
  {
    v7 = Math::RoundToInt(DataGlobal_A8EB98 * 64.0); /*0x5ce130*/
    sub_406670(aBleep1, v7); /*0x5ce13c*/
    return 1; /*0x5ce149*/
  }
  if ( (unsigned char)this->M48 == 1 && *(int *)(this + 92) > 0 && *(int *)(this + 96) > 0 ) /*0x5ce15f*/
    (*(void (__thiscall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 8))( /*0x5ce173*/
      a2,
      this + 84,
      DSurface_Alternate,
      this + 84,
      0,
      1);
  v9 = this->M4; /*0x5ce179*/
  if ( (unsigned char)this->M73 ) /*0x5ce176*/
    v9 += this->M76; /*0x5ce180*/
  v18 = this->M32; /*0x5ce18b*/
  v10 = v18 + 1; /*0x5ce18c*/
  LOWORD(v11) = WideString::GetChar((const wchar_t **)(this + 28), v18); /*0x5ce18d*/
  v12 = v11; /*0x5ce192*/
  if ( (_WORD)v11 != 10 ) /*0x5ce198*/
  {
    do /*0x5ce1d5*/
    {
      if ( !(_WORD)v12 ) /*0x5ce19d*/
        break; /*0x5ce19d*/
      (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 52) + 16))( /*0x5ce1b5*/
        this->M52,
        a2,
        v12,
        v9,
        this->M80,
        this->M36,
        0);
      v9 += (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 52) + 4))(this->M52, v12); /*0x5ce1c1*/
      v19 = v10++; /*0x5ce1c5*/
      LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v19); /*0x5ce1ca*/
      v12 = v13; /*0x5ce1cf*/
    }
    while ( (_WORD)v13 != 10 ); /*0x5ce1d5*/
  }
  v14 = this->M64; /*0x5ce1e0*/
  v15 = *(_DWORD *)(this->M52 + 8); /*0x5ce1e3*/
  v21 = this->M80; /*0x5ce1e6*/
  *a3 = this->M56; /*0x5ce1ee*/
  a3[1] = v21; /*0x5ce1f4*/
  a3[2] = v14; /*0x5ce1f7*/
  a3[3] = v15; /*0x5ce1fa*/
  if ( this->M36 == 2 ) /*0x5ce203*/
  {
    this->M84 = 0; /*0x5ce20b*/
    this->M88 = 0; /*0x5ce20e*/
    this->M92 = 0; /*0x5ce211*/
    this->M96 = 0; /*0x5ce214*/
    this->M32 = v10; /*0x5ce217*/
    if ( (_WORD)v12 == 10 ) /*0x5ce21a*/
    {
      v16 = Math::RoundToInt(DataGlobal_A8EB98 * 64.0); /*0x5ce228*/
      sub_406670(aBleep1, v16); /*0x5ce234*/
      this->M80 += *(_DWORD *)(this->M52 + 8); /*0x5ce244*/
    }
  }
  else
  {
    this->M84 = *a3; /*0x5ce24e*/
    this->M88 = a3[1]; /*0x5ce254*/
    this->M92 = a3[2]; /*0x5ce25a*/
    this->M96 = a3[3]; /*0x5ce260*/
  }
  if ( (unsigned char)this->M48 == 1 ) /*0x5ce26c*/
  {
    v17 = this->M36 + 1; /*0x5ce271*/
    this->M36 = v17; /*0x5ce274*/
    if ( v17 > 2 ) /*0x5ce27a*/
    {
      this->M36 = 0; /*0x5ce27c*/
      return 0; /*0x5ce287*/
    }
  }
  return 0; /*0x5ce141*/
}
}
} // namespace gamemd

// 0x5C0330
namespace gamemd {
void nullsub_176()
{
  ;
}
} // namespace gamemd

// 0x5C0540
namespace gamemd {
int BinkMovieHandle::_vt03(unsigned char a2)
{
{
    return BinkMovie::Pause(this->height, a2);
}
}
} // namespace gamemd

// 0x5C0630
namespace gamemd {
void E4Recv_5C0630::sub_5C0630()
{
{
    *(void**)this = &vt_MovieHandle;
}
}
} // namespace gamemd

// 0x5C0E10
namespace gamemd {
void E4Recv_5C0E10::sub_5C0E10()
{
{
    this->vfptr = &vt_MultiplayerBattle;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5C10F0
namespace gamemd {
void sub_5C10F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF420 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5C1120
namespace gamemd {
void sub_5C1120()
{
{
    DataGlobal_ABF490 = DataGlobal_ABF420 / 60.0;
}
}
} // namespace gamemd

// 0x5C1140
namespace gamemd {
void sub_5C1140()
{
{
    DataGlobal_ABF458 = 1.0 / DataGlobal_ABF490;
}
}
} // namespace gamemd

// 0x5C1160
namespace gamemd {
void sub_5C1160()
{
{
    DataGlobal_ABF450 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5C1180
namespace gamemd {
void sub_5C1180()
{
{
    DataGlobal_ABF428 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5C11A0
namespace gamemd {
void sub_5C11A0()
{
{
    DataGlobal_ABF400 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5C11C0
namespace gamemd {
long long sub_5C11C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF400 - DataGlobal_ABF428);
    result = Math::RoundToInt(v0 * DataGlobal_ABF420 * 0.5);
    DataGlobal_ABF498 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C1200
namespace gamemd {
void sub_5C1200()
{
{
    DataGlobal_ABF430 = Math::ArcTan((double)DataGlobal_ABF498 * 0.00390625);
}
}
} // namespace gamemd

// 0x5C1230
namespace gamemd {
void sub_5C1230()
{
{
    DataGlobal_ABF448 = Math::ArcTan((double)(2 * DataGlobal_ABF498) / DataGlobal_ABF420);
}
}
} // namespace gamemd

// 0x5C1260
namespace gamemd {
long long sub_5C1260()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF498) + 0.5);
    DataGlobal_ABF48C = result;
    return result;
}
}
} // namespace gamemd

// 0x5C1290
namespace gamemd {
int sub_5C1290()
{
{
    DataGlobal_ABF418 = 0;
    DataGlobal_ABF41A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C12A0
namespace gamemd {
int sub_5C12A0()
{
{
    DataGlobal_ABF438 = 0;
    DataGlobal_ABF43C = 0;
    DataGlobal_ABF440 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C12C0
namespace gamemd {
int sub_5C12C0()
{
{
    DataGlobal_ABF488 = 0;
    DataGlobal_ABF480 = 128;
    DataGlobal_ABF484 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5C12E0
namespace gamemd {
int sub_5C12E0()
{
{
    DataGlobal_ABF408 = 0;
    DataGlobal_ABF40C = 0;
    DataGlobal_ABF410 = 0;
    DataGlobal_ABF414 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C36F0
namespace gamemd {
int MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17()
{
    bool __thiscall MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17(std::codecvt_base *(void**)this)
{
    return ScenarioClass::processAI(this);
}
}
} // namespace gamemd

// 0x5C5AD0
namespace gamemd {
int sub_5C5AD0()
{
{
    DataGlobal_ABF4A8 = 0;
    DataGlobal_ABF4AC = 0;
    DataGlobal_ABF4B0 = 0;
    DataGlobal_ABF4B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C5AF0
namespace gamemd {
void sub_5C5AF0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF4C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5C5B20
namespace gamemd {
void sub_5C5B20()
{
{
    DataGlobal_ABF510 = DataGlobal_ABF4C0 / 60.0;
}
}
} // namespace gamemd

// 0x5C5B40
namespace gamemd {
void sub_5C5B40()
{
{
    DataGlobal_ABF4F8 = 1.0 / DataGlobal_ABF510;
}
}
} // namespace gamemd

// 0x5C5B60
namespace gamemd {
void sub_5C5B60()
{
{
    DataGlobal_ABF4F0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5C5B80
namespace gamemd {
void sub_5C5B80()
{
{
    DataGlobal_ABF4C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5C5BA0
namespace gamemd {
void sub_5C5BA0()
{
{
    DataGlobal_ABF4A0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5C5BC0
namespace gamemd {
long long sub_5C5BC0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF4A0 - DataGlobal_ABF4C8);
    result = Math::RoundToInt(v0 * DataGlobal_ABF4C0 * 0.5);
    DataGlobal_ABF518 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C5C00
namespace gamemd {
void sub_5C5C00()
{
{
    DataGlobal_ABF4D0 = Math::ArcTan((double)DataGlobal_ABF518 * 0.00390625);
}
}
} // namespace gamemd

// 0x5C5C30
namespace gamemd {
void sub_5C5C30()
{
{
    DataGlobal_ABF4E8 = Math::ArcTan((double)(2 * DataGlobal_ABF518) / DataGlobal_ABF4C0);
}
}
} // namespace gamemd

// 0x5C5C60
namespace gamemd {
long long sub_5C5C60()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF518) + 0.5);
    DataGlobal_ABF50C = result;
    return result;
}
}
} // namespace gamemd

// 0x5C5C90
namespace gamemd {
int sub_5C5C90()
{
{
    DataGlobal_ABF4B8 = 0;
    DataGlobal_ABF4BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C5CA0
namespace gamemd {
int sub_5C5CA0()
{
{
    DataGlobal_ABF4D8 = 0;
    DataGlobal_ABF4DC = 0;
    DataGlobal_ABF4E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C5CC0
namespace gamemd {
int sub_5C5CC0()
{
{
    DataGlobal_ABF508 = 0;
    DataGlobal_ABF500 = 128;
    DataGlobal_ABF504 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5C5D20
namespace gamemd {
void E4Recv_5C5D20::sub_5C5D20()
{
{
    this->vfptr = &vt_FreeForAll;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5C5E70
namespace gamemd {
int sub_5C5E70()
{
{
    DataGlobal_ABF528 = 0;
    DataGlobal_ABF52C = 0;
    DataGlobal_ABF530 = 0;
    DataGlobal_ABF534 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C5E90
namespace gamemd {
void sub_5C5E90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF540 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5C5EC0
namespace gamemd {
void sub_5C5EC0()
{
{
    DataGlobal_ABF590 = DataGlobal_ABF540 / 60.0;
}
}
} // namespace gamemd

// 0x5C5EE0
namespace gamemd {
void sub_5C5EE0()
{
{
    DataGlobal_ABF578 = 1.0 / DataGlobal_ABF590;
}
}
} // namespace gamemd

// 0x5C5F00
namespace gamemd {
void sub_5C5F00()
{
{
    DataGlobal_ABF570 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5C5F20
namespace gamemd {
void sub_5C5F20()
{
{
    DataGlobal_ABF548 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5C5F40
namespace gamemd {
void sub_5C5F40()
{
{
    DataGlobal_ABF520 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5C5F60
namespace gamemd {
long long sub_5C5F60()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF520 - DataGlobal_ABF548);
    result = Math::RoundToInt(v0 * DataGlobal_ABF540 * 0.5);
    DataGlobal_ABF598 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C5FA0
namespace gamemd {
void sub_5C5FA0()
{
{
    DataGlobal_ABF550 = Math::ArcTan((double)DataGlobal_ABF598 * 0.00390625);
}
}
} // namespace gamemd

// 0x5C5FD0
namespace gamemd {
void sub_5C5FD0()
{
{
    DataGlobal_ABF568 = Math::ArcTan((double)(2 * DataGlobal_ABF598) / DataGlobal_ABF540);
}
}
} // namespace gamemd

// 0x5C6000
namespace gamemd {
long long sub_5C6000()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF598) + 0.5);
    DataGlobal_ABF58C = result;
    return result;
}
}
} // namespace gamemd

// 0x5C6030
namespace gamemd {
int sub_5C6030()
{
{
    DataGlobal_ABF538 = 0;
    DataGlobal_ABF53A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C6040
namespace gamemd {
int sub_5C6040()
{
{
    DataGlobal_ABF558 = 0;
    DataGlobal_ABF55C = 0;
    DataGlobal_ABF560 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C6060
namespace gamemd {
int sub_5C6060()
{
{
    DataGlobal_ABF588 = 0;
    DataGlobal_ABF580 = 128;
    DataGlobal_ABF584 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5C6080
namespace gamemd {
int sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 )
    *(int *)GetWindowLongA(hWnd, 8) = (unsigned short)a3;
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C6190
namespace gamemd {
void E4Recv_5C6190::sub_5C6190()
{
{
    *(void**)this = vt_MultiplayerManBattle;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5C6230
namespace gamemd {
int sub_5C6230(unsigned int a1, unsigned char * a2)
{
{
    int result;
    char v5;
    int i;
    int v7;
    int j;
    int v9;
    unsigned int v10;
    if ( a1 > 0x7F )
  {
    v5 = 4;
    for ( i = 24; i != -8; i -= 8 )
    {
    if ( a1 >> i )
    break;
    --v5;
    }
    v7 = 4;
    *a2 = v5 | 0x80;
    result = 1;
    for ( j = 24; j != -8; j -= 8 )
    {
    if ( a1 >> j )
    break;
    --v7;
    }
    if ( v7 )
    {
    v9 = 8 * v7 - 8;
    do
      {
    v10 = a1 >> v9;
    ++result;
    v9 -= 8;
    --v7;
    a2[result - 1] = v10;
      }
    while ( v7 );
    }
  }
    else
  {
    *a2 = a1;
    return 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x5C62B0
namespace gamemd {
int VarInt_Encode(int a1, unsigned char * a2, int a3)
{
{
    unsigned int v4;
    int v5;
    char v6;
    int i;
    int v8;
    int j;
    int v10;
    unsigned int v11;
    char v13[260];
    v4 = EncodeVarInt_Helper(a3);
    *a2 = 2;
    if ( v4 > 0x7F )
  {
    v6 = 4;
    for ( i = 24; i != -8; i -= 8 )
    {
    if ( v4 >> i )
    break;
    --v6;
    }
    v8 = 4;
    *((int*)(a2) + 1) = v6 | 0x80;
    v5 = 1;
    for ( j = 24; j != -8; j -= 8 )
    {
    if ( v4 >> j )
    break;
    --v8;
    }
    if ( v8 )
    {
    v10 = 8 * v8 - 8;
    do
      {
    v11 = v4 >> v10;
    ++v5;
    v10 -= 8;
    --v8;
    a2[v5] = v11;
      }
    while ( v8 );
    }
  }
    else
  {
    *((int*)(a2) + 1) = v4;
    v5 = 1;
  }
    qmemcpy(&a2[v5 + 1], v13, v4);
    return v4 + v5 + 1;
}
}
} // namespace gamemd

// 0x5C6500
namespace gamemd {
char sub_5C6500(int a1, char * a2, int a3, int a4)
{
{
    int v4;
    char result;
    char *v6;
    int v7;
    v4 = 4 * a4 - a3;
    result = -(*a2 < 0);
    v6 = (char *)(4 * a4 + a1);
    if ( v4 > 0 )
  {
    do
    {
    --v6;
    --v4;
    *v6 = result;
    }
    while ( v4 );
  }
    if ( a3 > 0 )
  {
    v7 = a3;
    do
    {
    result = *a2;
    --v6;
    ++a2;
    --v7;
    *v6 = result;
    }
    while ( v7 );
  }
    return result;
}
}
} // namespace gamemd

// 0x5C6550
namespace gamemd {
char sub_5C6550(int a1, unsigned char * a2, int a3, int a4)
{
{
    char *v4;
    int v5;
    int v6;
    v4 = (char *)(4 * a4 + a1);
    v5 = 4 * a4 - a3;
    if ( v5 > 0 )
  {
    do
    {
    --v4;
    --v5;
    *v4 = 0;
    }
    while ( v5 );
  }
    if ( a3 > 0 )
  {
    v6 = a3;
    do
    {
    LOBYTE(v5) = *a2;
    --v4;
    ++a2;
    --v6;
    *v4 = v5;
    }
    while ( v6 );
  }
    return v5;
}
}
} // namespace gamemd

// 0x5C6940
namespace gamemd {
int InitArrayWithValue(unsigned int * a0, int a2, AbstractClass * aP2)
{
{
    memset(a0, 0, 4 * (int)aP2);
    *a0 = a2;
    return 0;
}
}
} // namespace gamemd

// 0x5C69E0
namespace gamemd {
int CompareBigIntLE(int a1, int a2, int a3)
{
{
    int v3;
    unsigned int v4;
    int *v5;
    unsigned int v6;
    int *v7;
    bool v8;
    v3 = a3;
    v4 = *(int *)(a1 + 4 * a3 - 4);
    v5 = (int *)(a1 + 4 * a3 - 4);
    v6 = *(int *)(a2 + 4 * a3 - 4);
    v7 = (int *)(a2 + 4 * a3 - 4);
    v8 = v4 <= v6;
    if ( v4 < v6 )
    return -1;
    while ( 1 )
  {
    if ( !v8 )
    return 1;
    --v5;
    --v7;
    if ( !--v3 )
    break;
    v8 = *v5 <= *v7;
    if ( *v5 < *v7 )
    return -1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x5C6AA0
namespace gamemd {
bool sub_5C6AA0(unsigned int * a1, unsigned int * a2, int a3, bool a4, int a5)
{
{
    int v6;
    bool result;
    unsigned int v8;
    unsigned int v9;
    if ( !a5 )
    return a4;
    v6 = a5;
    result = a4;
    do
  {
    v8 = *a2 + a3;
    v9 = v8 + a4;
    result = v8 < *a2 || result && !v9;
    *a1 = v9;
    a3 = 0;
    ++a2;
    ++a1;
    --v6;
    a4 = result;
  }
    while ( v6 );
    return result;
}
}
} // namespace gamemd

// 0x5C6B60
namespace gamemd {
unsigned char DecodeAudioSampleWord(int a1, unsigned short * a2, unsigned short a3, unsigned char a4, int a5)
{
{
    int v6;
    unsigned short v7;
    int v8;
    unsigned char result;
    if ( !(2 * a5) )
    return a4;
    v6 = 2 * a5;
    do
  {
    v7 = *a2++;
    a1 += 2;
    v8 = v7 - a3 - a4;
    a3 = 0;
    *(short *)(a1 - 2) = v8;
    result = BYTE2(v8) & 1;
    --v6;
    a4 = BYTE2(v8) & 1;
  }
    while ( v6 );
    return result;
}
}
} // namespace gamemd

// 0x5C6D90
namespace gamemd {
int sub_5C6D90(int a1, unsigned short * a2, short a3, int a4)
{
{
    unsigned int v4;
    int v5;
    int v6;
    unsigned short v7;
    unsigned int v8;
    v4 = 0;
    if ( 2 * a4 <= 0 )
    return 0;
    v5 = a1 - (int)a2;
    v6 = 2 * a4;
    do
  {
    v7 = *a2++;
    v8 = v4 + a3 * v7;
    *(unsigned short *)((char *)(a2) + v5 - 2) = v8;
    --v6;
    v4 = HIWORD(v8);
  }
    while ( v6 );
    return 0;
}
}
} // namespace gamemd

// 0x5C7E00
namespace gamemd {
int sub_5C7E00(unsigned int * a1, unsigned short * a2, unsigned short * a3, int a4)
{
{
    unsigned short *v4;
    int result;
    char *v6;
    unsigned short v7;
    unsigned short *v8;
    short *v9;
    unsigned int v10;
    unsigned short v11;
    unsigned int v12;
    int v14;
    char *v15;
    int v16;
    int v17;
    v4 = a3;
    memset(a1, 0, 4 * ((unsigned int)(8 * a4) >> 2));
    result = 2 * a4;
    *a1 = 0;
    v14 = 2 * a4;
    if ( 2 * a4 > 0 )
  {
    v6 = (char *)((char *)a1 - (char *)a3);
    v16 = 2 * a4;
    v15 = v6;
    do
    {
    v7 = *v4;
    v8 = a2;
    v9 = (unsigned short *)((char *)(v4) ++ + (int)v6);
    v10 = 0;
    if ( result > 0 )
      {
    v17 = result;
    do
        {
    v11 = *v8++;
    v12 = v10 + (unsigned short)*v9 + v7 * v11;
    *v9++ = v12;
    v10 = HIWORD(v12);
    --v17;
        }
    while ( v17 );
    result = v14;
    v6 = v15;
      }
    *v9 += v10;
    --v16;
    }
    while ( v16 );
  }
    return result;
}
}
} // namespace gamemd

// 0x5C8470
namespace gamemd {
unsigned int E4Recv_5C8470::sub_5C8470()
{
{
    unsigned int result;
    result = ((((((unsigned short)DataGlobal_ABF5A0 * (unsigned int)(unsigned short)~*(void**)this) >> 1) + (((((unsigned short)DataGlobal_ABF6B4 * ((unsigned int)(unsigned short)~*(this - 2) + 1)) >> 1) + (((unsigned short)~*(this - 1) * (unsigned int)(unsigned short)DataGlobal_ABF5A0 + 0x10000) >> 1) + 1) >> 16) + (((unsigned short)~*(this - 1) * (unsigned int)(unsigned short)DataGlobal_ABF6B4) >> 1) + 1) >> 14) + 2 * (unsigned short)DataGlobal_ABF6B4 * (unsigned short)~*(void**)this) >> DataGlobal_ABF8C4;
    if ( result >= 0xFFFF )
    return 0xFFFF;
    return result;
}
}
} // namespace gamemd

// 0x5C8930
namespace gamemd {
char sub_5C8930(int a1, int a2)
{
{
    short *v4;
    int v6[64];
    v4 = &DataGlobal_82E174;
    while ( ShiftBigIntAndScan(v6, a1, *v4, a2) )
  {
    if ( (unsigned int)++v4 >= 0x82FCE2 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x5C91D0
namespace gamemd {
int sub_5C91D0()
{
{
    DataGlobal_ABF8E0 = 0;
    DataGlobal_ABF8E4 = 0;
    DataGlobal_ABF8E8 = 0;
    DataGlobal_ABF8EC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C91F0
namespace gamemd {
void sub_5C91F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF8F8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5C9220
namespace gamemd {
void sub_5C9220()
{
{
    DataGlobal_ABF948 = DataGlobal_ABF8F8 / 60.0;
}
}
} // namespace gamemd

// 0x5C9240
namespace gamemd {
void sub_5C9240()
{
{
    DataGlobal_ABF930 = 1.0 / DataGlobal_ABF948;
}
}
} // namespace gamemd

// 0x5C9260
namespace gamemd {
void sub_5C9260()
{
{
    DataGlobal_ABF928 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5C9280
namespace gamemd {
void sub_5C9280()
{
{
    DataGlobal_ABF900 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5C92A0
namespace gamemd {
void sub_5C92A0()
{
{
    DataGlobal_ABF8D8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5C92C0
namespace gamemd {
long long sub_5C92C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF8D8 - DataGlobal_ABF900);
    result = Math::RoundToInt(v0 * DataGlobal_ABF8F8 * 0.5);
    DataGlobal_ABF950 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C9300
namespace gamemd {
void sub_5C9300()
{
{
    DataGlobal_ABF908 = Math::ArcTan((double)DataGlobal_ABF950 * 0.00390625);
}
}
} // namespace gamemd

// 0x5C9330
namespace gamemd {
void sub_5C9330()
{
{
    DataGlobal_ABF920 = Math::ArcTan((double)(2 * DataGlobal_ABF950) / DataGlobal_ABF8F8);
}
}
} // namespace gamemd

// 0x5C9360
namespace gamemd {
long long sub_5C9360()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF950) + 0.5);
    DataGlobal_ABF944 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C9390
namespace gamemd {
int sub_5C9390()
{
{
    DataGlobal_ABF8F0 = 0;
    DataGlobal_ABF8F2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C93A0
namespace gamemd {
int sub_5C93A0()
{
{
    DataGlobal_ABF910 = 0;
    DataGlobal_ABF914 = 0;
    DataGlobal_ABF918 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C93C0
namespace gamemd {
int sub_5C93C0()
{
{
    DataGlobal_ABF940 = 0;
    DataGlobal_ABF938 = 128;
    DataGlobal_ABF93C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5C9420
namespace gamemd {
void E4Recv_5C9420::sub_5C9420()
{
{
    *(void**)this = vt_Megawealth;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5C94F0
namespace gamemd {
int sub_5C94F0()
{
{
    DataGlobal_ABF980 = 0;
    DataGlobal_ABF984 = 0;
    DataGlobal_ABF988 = 0;
    DataGlobal_ABF98C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C9510
namespace gamemd {
void sub_5C9510()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABF998 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5C9540
namespace gamemd {
void sub_5C9540()
{
{
    DataGlobal_ABF9E8 = DataGlobal_ABF998 / 60.0;
}
}
} // namespace gamemd

// 0x5C9560
namespace gamemd {
void sub_5C9560()
{
{
    DataGlobal_ABF9D0 = 1.0 / DataGlobal_ABF9E8;
}
}
} // namespace gamemd

// 0x5C9580
namespace gamemd {
void sub_5C9580()
{
{
    DataGlobal_ABF9C8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5C95A0
namespace gamemd {
void sub_5C95A0()
{
{
    DataGlobal_ABF9A0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5C95C0
namespace gamemd {
void sub_5C95C0()
{
{
    DataGlobal_ABF978 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5C95E0
namespace gamemd {
long long sub_5C95E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABF978 - DataGlobal_ABF9A0);
    result = Math::RoundToInt(v0 * DataGlobal_ABF998 * 0.5);
    DataGlobal_ABF9F0 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C9620
namespace gamemd {
void sub_5C9620()
{
{
    DataGlobal_ABF9A8 = Math::ArcTan((double)DataGlobal_ABF9F0 * 0.00390625);
}
}
} // namespace gamemd

// 0x5C9650
namespace gamemd {
void sub_5C9650()
{
{
    DataGlobal_ABF9C0 = Math::ArcTan((double)(2 * DataGlobal_ABF9F0) / DataGlobal_ABF998);
}
}
} // namespace gamemd

// 0x5C9680
namespace gamemd {
long long sub_5C9680()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABF9F0) + 0.5);
    DataGlobal_ABF9E4 = result;
    return result;
}
}
} // namespace gamemd

// 0x5C96B0
namespace gamemd {
int sub_5C96B0()
{
{
    DataGlobal_ABF990 = 0;
    DataGlobal_ABF992 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C96C0
namespace gamemd {
int sub_5C96C0()
{
{
    DataGlobal_ABF9B0 = 0;
    DataGlobal_ABF9B4 = 0;
    DataGlobal_ABF9B8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5C96E0
namespace gamemd {
int sub_5C96E0()
{
{
    DataGlobal_ABF9E0 = 0;
    DataGlobal_ABF9D8 = 128;
    DataGlobal_ABF9DC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5C9850
namespace gamemd {
LRESULT sub_5C9850(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{
{
    HWND DlgItem;
    CampaignScore *v7;
    wchar_t Buffer[32];
    swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, Format, v7);
    DlgItem = GetDlgItem((HWND)aP0, nIDDlgItem);
    return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer);
}
}
} // namespace gamemd

// 0x5CA420
namespace gamemd {
void sub_5CA420()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFA20 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5CA450
namespace gamemd {
void sub_5CA450()
{
{
    DataGlobal_ABFA70 = DataGlobal_ABFA20 / 60.0;
}
}
} // namespace gamemd

// 0x5CA470
namespace gamemd {
void sub_5CA470()
{
{
    DataGlobal_ABFA58 = 1.0 / DataGlobal_ABFA70;
}
}
} // namespace gamemd

// 0x5CA490
namespace gamemd {
void sub_5CA490()
{
{
    DataGlobal_ABFA50 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5CA4B0
namespace gamemd {
void sub_5CA4B0()
{
{
    DataGlobal_ABFA28 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5CA4D0
namespace gamemd {
void sub_5CA4D0()
{
{
    DataGlobal_ABFA00 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5CA4F0
namespace gamemd {
long long sub_5CA4F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABFA00 - DataGlobal_ABFA28);
    result = Math::RoundToInt(v0 * DataGlobal_ABFA20 * 0.5);
    DataGlobal_ABFA78 = result;
    return result;
}
}
} // namespace gamemd

// 0x5CA530
namespace gamemd {
void sub_5CA530()
{
{
    DataGlobal_ABFA30 = Math::ArcTan((double)DataGlobal_ABFA78 * 0.00390625);
}
}
} // namespace gamemd

// 0x5CA560
namespace gamemd {
void sub_5CA560()
{
{
    DataGlobal_ABFA48 = Math::ArcTan((double)(2 * DataGlobal_ABFA78) / DataGlobal_ABFA20);
}
}
} // namespace gamemd

// 0x5CA590
namespace gamemd {
long long sub_5CA590()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFA78) + 0.5);
    DataGlobal_ABFA6C = result;
    return result;
}
}
} // namespace gamemd

// 0x5CA5C0
namespace gamemd {
int sub_5CA5C0()
{
{
    DataGlobal_ABFA18 = 0;
    DataGlobal_ABFA1A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CA5D0
namespace gamemd {
int sub_5CA5D0()
{
{
    DataGlobal_ABFA38 = 0;
    DataGlobal_ABFA3C = 0;
    DataGlobal_ABFA40 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CA5F0
namespace gamemd {
int sub_5CA5F0()
{
{
    DataGlobal_ABFA68 = 0;
    DataGlobal_ABFA60 = 128;
    DataGlobal_ABFA64 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5CA610
namespace gamemd {
int sub_5CA610()
{
{
    DataGlobal_ABFA08 = 0;
    DataGlobal_ABFA0C = 0;
    DataGlobal_ABFA10 = 0;
    DataGlobal_ABFA14 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CA670
namespace gamemd {
void E4Recv_5CA670::sub_5CA670()
{
{
    *(void**)this = vt_MultiplayerSiege;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5CAC00
namespace gamemd {
int sub_5CAC00()
{
{
    DataGlobal_ABFA88 = 0;
    DataGlobal_ABFA8C = 0;
    DataGlobal_ABFA90 = 0;
    DataGlobal_ABFA94 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CAC20
namespace gamemd {
void sub_5CAC20()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABFAA0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5CAC50
namespace gamemd {
void sub_5CAC50()
{
{
    DataGlobal_ABFAF0 = DataGlobal_ABFAA0 / 60.0;
}
}
} // namespace gamemd

// 0x5CAC70
namespace gamemd {
void sub_5CAC70()
{
{
    DataGlobal_ABFAD8 = 1.0 / DataGlobal_ABFAF0;
}
}
} // namespace gamemd

// 0x5CAC90
namespace gamemd {
void sub_5CAC90()
{
{
    DataGlobal_ABFAD0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5CACB0
namespace gamemd {
void sub_5CACB0()
{
{
    DataGlobal_ABFAA8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5CACD0
namespace gamemd {
void sub_5CACD0()
{
{
    DataGlobal_ABFA80 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5CAE60
namespace gamemd {
void E4Recv_5CAE60::sub_5CAE60()
{
{
    *(void**)this = &vt_MultiplayerSiegeDefenderTeam;
    MultiplayerTeam::Destructor(this);
}
}
} // namespace gamemd

// 0x5CAF00
namespace gamemd {
void E4Recv_5CAF00::sub_5CAF00()
{
{
    *(void**)this = &vt_MultiplayerSiegeAttackerTeam;
    MultiplayerTeam::Destructor(this);
}
}
} // namespace gamemd

// 0x5CAF70
namespace gamemd {
DWORD E4Recv_5CAF70::sub_5CAF70()
{
{
    DWORD result;
    LARGE_INTEGER Frequency;
    if ( QueryPerformanceFrequency(&Frequency) )
  {
    result = Frequency.LowPart;
    *(void**)this = Frequency.HighPart;
  }
    else
  {
    *(void**)this = 0;
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5CB240
namespace gamemd {
void sub_5CB240()
{
{
    DataGlobal_ABFB08 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5CB2A0
namespace gamemd {
void sub_5CB2A0()
{
{
    DataGlobal_ABFB38 = Math::ArcTan((double)DataGlobal_ABFB80 * 0.00390625);
}
}
} // namespace gamemd

// 0x5CB300
namespace gamemd {
long long sub_5CB300()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABFB80) + 0.5);
    DataGlobal_ABFB74 = result;
    return result;
}
}
} // namespace gamemd

// 0x5CB330
namespace gamemd {
int sub_5CB330()
{
{
    DataGlobal_ABFB20 = 0;
    DataGlobal_ABFB22 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CB340
namespace gamemd {
int sub_5CB340()
{
{
    DataGlobal_ABFB40 = 0;
    DataGlobal_ABFB44 = 0;
    DataGlobal_ABFB48 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5CB360
namespace gamemd {
int sub_5CB360()
{
{
    DataGlobal_ABFB70 = 0;
    DataGlobal_ABFB68 = 128;
    DataGlobal_ABFB6C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5CB3E0
namespace gamemd {
void E4Recv_5CB3E0::sub_5CB3E0()
{
{
    *(void**)this = vt_UnholyAlliance;
    MultiplayerGameMode::Dtor(this);
}
}
} // namespace gamemd

// 0x5CCA10
namespace gamemd {
void nullsub_189(int a1)
{
  ;
}
} // namespace gamemd

// 0x5CD310
namespace gamemd {
void nullsub_190()
{
  ;
}
} // namespace gamemd

// 0x5CD570
namespace gamemd {
int E4Recv_5CD570::sub_5CD570(const wchar_t ** a2, int a3, int a4, int a5, int * a6, int a7, int a8, char a9, char a10)
{
{
    size_t v11;
    int v12;
    int v13;
    int v15;
    int v16;
    int v17;
    this->M8 = a4;
    this->M4 = a3;
    this->M12 = 1;
    v11 = 0;
    this->M16 = Timer::GetTicks();
    this->M24 = 0;
    *(int *)this = &vt_MSAnim;
    WideString::AssignFromPtr((wchar_t **)(this + 28), a2);
    this->M44 = a8;
    this->M48 = a9;
    this->M32 = 0;
    this->M36 = a7;
    this->M40 = 0;
    this->M52 = a5;
    this->M72 = 0;
    this->M73 = a10;
    this->M76 = 0;
    *(int *)this = &vt_MSPrintAnim;
    this->M16 = Timer::GetTicks();
    this->M20 = v15;
    this->M24 = a7;
    sub_5CD690(this, a6);
    if ( a10 )
  {
    v17 = 0;
    v16 = *(int *)(this->M52 + 4);
    if ( WideString::GetChar((const wchar_t **)(this + 28), 0) )
    {
    do
      {
    if ( WideString::GetChar((const wchar_t **)(this + 28), v11) == 10 )
    break;
    v12 = **(int **)(this + 52);
    LOWORD(v13) = WideString::GetChar((const wchar_t **)(this + 28), v11++);
    v17 += (*(int (__thiscall **)(int, int))(v12 + 4))(this->M52, v13);
      }
    while ( WideString::GetChar((const wchar_t **)(this + 28), v11) );
    }
    this->M76 = (this->M64 - v17 - v16) / 2;
  }
    return this;
}
}
} // namespace gamemd

// 0x5CDB90
namespace gamemd {
int sub_5CDB90(const wchar_t ** a1, int a2, int a3)
{
{
    int v5;
    ObjectClass *v6;
    int v7;
    if ( String_Helper(a1, 0) || !a2 || a3 < *(int *)(a2 + 8) )
    return 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    while ( WideString::GetChar(a1, v6) )
  {
    for ( ; WideString::GetChar(a1, v6); v6 = (ObjectClass *)((char *)(v6) + 1) )
    {
    if ( WideString::GetChar(a1, v6) == 10 )
    break;
    }
    if ( WideString::GetChar(a1, v6) != 10 )
    {
    v5 += *(int *)(a2 + 8);
    if ( v5 >= a3 )
      {
    v5 = 0;
    ++v7;
    String_Helper_7B7660(a1, 0xCu, (size_t)v6);
      }
    v6 = (ObjectClass *)((char *)(v6) + 1);
    }
  }
    return v7;
}
}
} // namespace gamemd

// 0x5CE330
namespace gamemd {
int E4Recv_5CE330::sub_5CE330(const wchar_t ** a2)
{
{
    int v3;
    size_t v4;
    int v5;
    int v6;
    int i;
    v3 = 0;
    v4 = 0;
    for ( i = 0; WideString::GetChar(a2, v4); i = v3 )
  {
    if ( WideString::GetChar(a2, v4) == 10 )
    break;
    v5 = *(void**)this->M52;
    LOWORD(v6) = WideString::GetChar(a2, v4);
    v3 = (*(int (__thiscall **)(int, int))(v5 + 4))(this->M52, v6) + i;
    ++v4;
  }
    return v3;
}
}
} // namespace gamemd

// 0x5CE3A0
namespace gamemd {
int E4Recv_5CE3A0::sub_5CE3A0(int a2, int * a3)
{
{
    int *v4;
    int result;
    int v6;
    int v7;
    int v8;
    size_t v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    size_t i;
    int v17[4];
    int v18;
    if ( !a3 || (v4 = ClipRectIntersection(v17, a3, (int *)(this + 56), 0, 0), result = v4[2], v6 = v4[3], result > 0) && v6 > 0 )
  {
    result = this->M32;
    v7 = this->M8;
    v8 = this->M4;
    v9 = 0;
    v18 = v7;
    for ( i = result; v9 < i; ++v9 )
    {
    if ( WideString::GetChar((const wchar_t **)(this + 28), v9) == 10 )
      {
    v8 = this->M4;
    v7 += *(int *)(this->M52 + 8);
    v14 = *(int *)(this->M52 + 8);
    v18 = v7;
    result = (*(int (__thiscall **)(int))(*(int *)(a2) + 128))(a2);
    if ( v7 + v14 >= result )
    return result;
      }
    else
      {
    v15 = **(int **)(this + 52);
    LOWORD(v10) = WideString::GetChar((const wchar_t **)(this + 28), v9);
    (*(void (__thiscall **)(int, int, int, int, int, int, int))(v15 + 16))( this->M52, a2, v10, v8, v7, 2, 1);
    v11 = **(int **)(this + 52);
    LOWORD(v12) = WideString::GetChar((const wchar_t **)(this + 28), v9);
    v13 = (*(int (__thiscall **)(int, int))(v11 + 4))(this->M52, v12);
    v7 = v18;
    v8 += v13;
      }
    result = i;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x5CF840
namespace gamemd {
const char ** E4Recv_5CF840::sub_5CF840(MapSelect * aP1)
{
{
    int v3;
    const char **v4;
    ObjectClass *v5;
    void *v7;
    if ( !Audio::IsSoundEnabled() )
    return 0;
    v3 = 0;
    if ( (int)this->M84 <= 0 )
    return 0;
    v4 = (const char **)aP1;
    while ( 1 )
  {
    v5 = *(ObjectClass **)(this->M72 + 4 * v3);
    String::AssignFromPtr((char **)&v7, (const char **)v5);
    String::ToLower((const char **)&v7);
    String::AssignFromPtr((char **)&aP1, v4);
    String::ToLower((const char **)&aP1);
    if ( String::Compare((const char **)&v7, (const char **)&aP1) )
    break;
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    if ( ++v3 >= this->M84 )
    return 0;
  }
    DeleteAndZero((void **)&aP1);
    DeleteAndZero(&v7);
    return (const char **)v5;
}
}
} // namespace gamemd
