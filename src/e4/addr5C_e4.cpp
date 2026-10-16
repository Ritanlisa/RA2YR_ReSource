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
#include "e4/classes/BinkMovieHandle_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"  // G42.36 C2027 supply
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Destructor(AudioStream *p_this); }  // x4:ida@0x402550
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { unsigned int * sub_5CD690(int *a2); }  // w18j2 raw 0x005CD690
namespace MultiplayerTeam { int Destructor(AudioStream *p_this); }  // x4:ida@0x402550
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_5D30C0(int p0, int p1, int p2); }  // x4:signals@0x5d30c0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int ComputeModularInverse(uint16_t* p0, int p1);  // x4:signals@0x5c80a0
} // namespace gamemd

// 0x5C00E0
namespace gamemd {  // G42.18 ns repair
ObjectClass * * sub_5C00E0(void * a1, void * a2, void * a3)
{
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  char result; // al
  result = g_MissionQueueFrame.localVariables[604]; /*0x5c00e0*/
  if ( g_MissionQueueFrame.localVariables[604] ) /*0x5c00ea*/
  {
    (*((void (**)(DSurface *, unsigned int))DSurface_Alternate->DSurface_field_0x0 + 6))(DSurface_Alternate, 0); /*0x5c00fa*/
    int v3; // ebx
    int v8; // [esp+4h] [ebp-20h] BYREF
    int v9; // [esp+8h] [ebp-1Ch]
    int *v10; // [esp+Ch] [ebp-18h]
    Frame::Present((void *)((int)DSurface_Alternate), v3, a2, a3, 0, v8, v9, v10); /*0x5c0107*/
    result = TestBitArray(15); /*0x5c0111*/
    if ( !result ) /*0x5c0118*/
    {
      GetClientRect((HWND)(g_hWnd), &Rect); /*0x5c0129*/
      ClientToScreen((HWND)(g_hWnd), (LPPOINT)&Rect); /*0x5c013b*/
      int v5; // edx
      v5 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5c0156*/
      int v6; // ecx
      v6 = Rect.top + *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5c0159*/
      int v7; // edi
      v7 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5c015b*/
      v10 = *(int **)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5c015e*/
      v9 = v6; /*0x5c0164*/
      v8 = Rect.left + v7; /*0x5c016e*/
      int v11; // [esp+10h] [ebp-14h]
      v11 = v5; /*0x5c0172*/
      return (*((int (**)(DSurface *, int *, unsigned int, int, unsigned int, int))g_DSurface_Primary /*0x5c0187*/
      + 2))(
               g_DSurface_Primary,
               &v8,
               *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 8),
               g_MissionQueueFrame.localVariables[604] + 36,
               0,
               1);
    }
  }
  return (gamemd::ObjectClass **)(result);
}
}  // G42.18 ns repair
// 0x5C07D0
namespace gamemd {
unsigned int * Movie_Create(int a1, int a2, int * a3)
{
  int v5; // ebx
  int v6; // edx
  int v14; // [esp+14h] [ebp-E4h]

  char Str[200]; // [esp+30h] [ebp-C8h] BYREF
  if ( !a2 || !Render_Play(a1, Str, 1) ) /*0x5c07ea*/
    return 0; /*0x5c07f1*/
  int *v4 = a3; // eax /*0x5c07f7*/
  if ( a3 ) /*0x5c0800*/
  {
    v5 = *a3; /*0x5c0805*/
    v6 = a3[2]; /*0x5c0807*/
    v14 = a3[1]; /*0x5c080a*/
  }
  else
  {
    char v17[16]; // [esp+20h] [ebp-D8h] BYREF
    v4 = (int *)(*(int (**)(int *, char *))(*a2 + 120))(a2, v17); /*0x5c0819*/
    v5 = *v4; /*0x5c081c*/
    v14 = v4[1]; /*0x5c0821*/
    v6 = v4[2]; /*0x5c0825*/
  }
  int v15; // [esp+18h] [ebp-E0h]
  v15 = v6; /*0x5c0832*/
  int v16; // [esp+1Ch] [ebp-DCh]
  v16 = v4[3]; /*0x5c0836*/
  char *v7; // eax
  v7 = strrchr(Str, 46); /*0x5c083a*/
  if ( v7 && !_strcmpi(v7, aBik) ) /*0x5c084c*/
  {
    Debug::Log(); /*0x5c085d*/
    BinkMovie *v8; // eax
    v8 = (BinkMovie *)operator new(0x34u); /*0x5c0864*/
    unsigned int *v9; // esi
    if ( v8 ) /*0x5c086e*/
      v9 = BinkMovie::Open(v8, Str, (int)a2); /*0x5c087d*/
    else
      v9 = 0; /*0x5c0881*/
    unsigned int *result; // eax
    result = (unsigned int *)operator new(0x14u); /*0x5c0885*/
    if ( result ) /*0x5c088f*/
    {
      *result = (unsigned int)(&vt_BinkMovieHandle); /*0x5c0897*/
      result[4] = (unsigned int)(v9); /*0x5c089d*/
      if ( v9 ) /*0x5c08a0*/
      {
        result[2] = *v9->u32_4; /*0x5c08ab*/
        result[3] = *(unsigned int *)(v9[1] + 4); /*0x5c08b4*/
      }
      return result; /*0x5c08c1*/
    }
    return 0; /*0x5c0964*/
  }
  MovieClass **VQMovie; // edi
  VQMovie = (MovieClass **)LoadVQMovie(Str, a2, 0, 0, 0, 0, v5, v14, v15, v16, 255, 0); /*0x5c090a*/
  if ( !VQMovie ) /*0x5c090e*/
    return 0; /*0x5c090e*/
  int v12; // eax
  v12 = (int)(operator new(0x18u)); /*0x5c0912*/
  int v13 = v12; // esi /*0x5c0917*/
  if ( !v12 ) /*0x5c091e*/
    return 0; /*0x5c0955*/
  *(unsigned char *)(v12 + 20) = 0; /*0x5c0920*/
  *(unsigned int *)v12 = (unsigned int)(&vt_VQMovieHandle); /*0x5c0924*/
  *(unsigned int *)(v12 + 16) = (unsigned int)(VQMovie); /*0x5c092a*/
  *(unsigned int *)(v12 + 8) = MovieClass::GetWidth(*VQMovie); /*0x5c0934*/
  *(unsigned int *)(v13 + 12) = MovieClass::GetHeight(**(MovieClass ***)(v13 + 16)); /*0x5c0941*/
  return (unsigned int *)v13; /*0x5c08b7*/
}
}
// 0x5C17B0
namespace gamemd {
CampaignClass * * MPCooperative::MPCooperative___vt07(int a2)
{

  int v7; // eax

  char v3 = 0; // bl /*0x5c17c3*/
  int MPCooperative_field_0x33C; // [esp-8h] [ebp-1Ch]
  MPCooperative_field_0x33C = this->q33C; /*0x5c17c5*/
  int v11; // [esp+Ch] [ebp-8h] BYREF
  v11 = 0; /*0x5c17cb*/
  int v12; // [esp+10h] [ebp-4h] BYREF
  Movie::GetSection((int)&g_DDrawSurfaceManager, MPCooperative_field_0x33C, &v12); /*0x5c17cf*/
  int v4 = v12; // edx /*0x5c17d4*/
  if ( !v12 ) /*0x5c17da*/
    return (gamemd::CampaignClass **)(1); /*0x5c17e4*/
  int *MPCooperative_field_0x40; // ecx
  MPCooperative_field_0x40 = (int *)this->u32_40; /*0x5c17e7*/
  if ( MPCooperative_field_0x40 ) /*0x5c17ec*/
  {
    if ( (unsigned __int8)(MPCooperative_field_0x40)->GetState(&v11) ) /*0x5c17f3*/
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
  if ( v7 >= *(unsigned int *)(v4 + 32) ) /*0x5c1817*/
    return (gamemd::CampaignClass **)(1); /*0x5c1821*/
  if ( a2 == -2 ) /*0x5c182b*/
  {
    if ( *(int *)(*(unsigned int *)(*(unsigned int *)(v4 + 20) + 4 * v7) + 16) > 1 ) /*0x5c1837*/
      return (gamemd::CampaignClass **)(1); /*0x5c1841*/
  }
  else if ( a2 == -3 ) /*0x5c1847*/
  {
    return (gamemd::CampaignClass **)(1); /*0x5c1851*/
  }
  int v8 = 0; // esi /*0x5c1857*/
  int v9; // eax
  v9 = *(unsigned int *)(*(unsigned int *)(v4 + 20) + 4 * v7); /*0x5c1859*/
  if ( *(int *)(v9 + 16) > 0 ) /*0x5c185f*/
  {
    while ( (*(SideClass **)(*(unsigned int *)(v9 + 4) + 4 * v8))->FindByName() != a2 ) /*0x5c186e*/
    {
      ++v8; /*0x5c1878*/
      v9 = *(unsigned int *)(*(unsigned int *)(v12 + 20) + 4 * v11); /*0x5c187c*/
      if ( v8 >= *(unsigned int *)(v9 + 16) ) /*0x5c1882*/
        return 0; /*0x5c188c*/
    }
    return (gamemd::CampaignClass **)(1); /*0x5c188f*/
  }
  return (gamemd::CampaignClass **)(v3); /*0x5c17dc*/

}
}
// 0x5C60D0
namespace gamemd {
BOOL E4Recv_5C60D0::ShowConfirmDialog(unsigned short * lParam)
{

  wchar_t *StringCSF; // [esp-Ch] [ebp-14h]
  StringCSF = GetStringCSF((char *)(g_Str_TXT_CANCEL), 0, aDRa2mdpostMpla, 108); /*0x5c60fa*/
  wchar_t *v3; // eax
  v3 = GetStringCSF((char *)(g_Str_TXT_OK), 0, aDRa2mdpostMpla, 108); /*0x5c6102*/
  int v6; // [esp+0h] [ebp-8h]
  return Dialog::ShowMessageBox(lParam, v3, StringCSF, 0, 0, v6) == 0; /*0x5c6116*/
}
}
// 0x5C6370
namespace gamemd {
char LCW_DecodeLength(int a1, unsigned char * a2, int a3)
{
  int v3; // eax
  unsigned char *v4; // edx
  int v6; // edi
  uint8_t *v7; // edx
  int v8; // ecx
  int v9; // esi
  char *v10; // ebx
  char v11; // al
  int v12; // edx
  unsigned char *v13; // ecx
  char v14; // dl

  (*((unsigned char *)&(v3))) = *a2; /*0x5c6370*/
  v4 = a2 + 1; /*0x5c6374*/
  if ( (unsigned char)v3 != 2 ) /*0x5c637b*/
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
    v3 = (uint8_t)*v4; /*0x5c63a3*/
    v6 = v3 | (v8 << 8); /*0x5c63a8*/
  }
  else
  {
    (*((unsigned char *)&(v3))) = *v4; /*0x5c6383*/
    v6 = (uint8_t)*v4; /*0x5c6388*/
  }
  ++v4; /*0x5c63aa*/
  LABEL_8:
  v9 = 4 * a3; /*0x5c63ab*/
  if ( v6 <= (unsigned int)(4 * a3) ) /*0x5c63b8*/
  {
    v10 = (char *)(v4);
    v11 = *v4 & 0x80; /*0x5c63be*/
    v12 = v9 - v6; /*0x5c63c6*/
    (*((unsigned char *)&(v3))) = -(v11 != 0); /*0x5c63c8*/
    v13 = (unsigned char *)(v9 + a1); /*0x5c63cd*/
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
// 0x5C63F0
namespace gamemd {
unsigned int sub_5C63F0(void * a1, void * a2, void * a3, void * a4, void * a5)
{

  unsigned char *v6; // edi
  v6 = (unsigned char *)(a2);
  unsigned int v7 = 4 * a4; // esi /*0x5c63fc*/
  unsigned int v5; // edx
  unsigned int v8 = v5 - 4 * a4; // ebp /*0x5c6426*/
  if ( v5 != 4 * a4 ) /*0x5c6428*/
  {
    (*((unsigned char *)&(a3))) = (*((unsigned int *)this + a4 - 1) >= 0) - 1; /*0x5c642b*/
    (((unsigned char *)&(a3))[1]) = (unsigned char)(a3); /*0x5c642d*/
    int v9; // eax
    v9 = (unsigned int)(a3)<< 16; /*0x5c6435*/
    (*((unsigned short *)&(v9))) = (unsigned short)(a3); /*0x5c6438*/
    memset32(a2, v9, v8 >> 2); /*0x5c643f*/
    memset(&a2[4 * (v8 >> 2)],(int)(a3), v8 & 3); /*0x5c644a*/
    v6 = (unsigned char *)(&a2[v8]); /*0x5c6450*/
  }
  int v10 = v5; // eax /*0x5c6454*/
  if ( v5 >= v7 ) /*0x5c6456*/
    v10 = 4 * a4; /*0x5c6458*/
  char *v11; // ecx
  v11 = (char *)this + v10; /*0x5c645e*/
  unsigned int i; // ebp
  for ( i = 0; ; ++i ) /*0x5c6460*/
  {
    unsigned int v13 = v5; // eax /*0x5c6464*/
    if ( v5 >= v7 ) /*0x5c6466*/
      v13 = 4 * a4; /*0x5c6468*/
    if ( i >= v13 ) /*0x5c646c*/
      break; /*0x5c646c*/
    char v14; // al
    v14 = *--v11; /*0x5c646e*/
    *v6++ = v14; /*0x5c6472*/
  }
  return v5; /*0x5c6478*/
}
}
// 0x5C6660
namespace gamemd {
int BitBuffer_RotateRight(unsigned int * a1, int a2, int a3)
{
  int result; // eax
  bool v19; // zf

  int v5 = 0; // ecx /*0x5c666b*/
  if ( a2 ) /*0x5c666f*/
  {
    if ( a2 == 32 ) /*0x5c6674*/
    {
      result = (int)&a1[a3]; /*0x5c667a*/
      if ( a3 ) /*0x5c6682*/
      {
        int v6 = a3; // esi /*0x5c6684*/
        do /*0x5c6692*/
        {
          int v7; // edx
          v7 = *(unsigned int *)(result - 4); /*0x5c6687*/
          result -= 4; /*0x5c668a*/
          --v6; /*0x5c668d*/
          *(unsigned int *)result = v5; /*0x5c668e*/
          v5 = v7; /*0x5c6690*/
        }
        while ( v6 ); /*0x5c6692*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c669e*/
    {
      result = a2 / 32; /*0x5c6715*/
      int v15 = a2 % 32; // edi /*0x5c6724*/
      int v16 = a3; // ebx /*0x5c6725*/
      if ( a2 / 32 < a3 - 1 ) /*0x5c672e*/
      {
        int v24; // [esp+10h] [ebp-8h]
        v24 = a3 - 1 - result; /*0x5c6739*/
        do /*0x5c675d*/
        {
          int v17; // ebx
          v17 = a1[result + 1]; /*0x5c673d*/
          unsigned int v18; // ebp
          v18 = a1[result]; /*0x5c6741*/
          ++a1; /*0x5c6746*/
          v19 = v24 == 1; /*0x5c6755*/
          *(a1 - 1) = (v18 >> v15) | (v17 << (32 - v15)); /*0x5c6756*/
          --v24; /*0x5c6759*/
        }
        while ( !v19 ); /*0x5c675d*/
        v16 = a3; /*0x5c675f*/
      }
      if ( result < v16 ) /*0x5c6765*/
      {
        int v20; // edx
        v20 = a1[result] >> v15; /*0x5c676c*/
        *a1++ = v20; /*0x5c6771*/
      }
      int i; // edx
      for ( i = 0; ; ++i ) /*0x5c6774*/
      {
        int v22 = result; // ecx /*0x5c6778*/
        if ( result >= v16 ) /*0x5c677a*/
          v22 = v16; /*0x5c677c*/
        if ( i >= v22 ) /*0x5c6780*/
          break; /*0x5c6780*/
        *a1++ = 0; /*0x5c6786*/
      }
    }
    else
    {
      int v25; // [esp+1Ch] [ebp+4h]
      v25 = (int)((int *)(0));
      int *v9; // esi
      v9 = (int *)(&a1[a3]); /*0x5c66b6*/
      char v10 = 32 - a2; // bp /*0x5c66b9*/
      int v11 = a3; // ecx /*0x5c66bb*/
      result = a3 - 1; /*0x5c66c2*/
      if ( v11 ) /*0x5c66c5*/
      {
        int v23; // [esp+10h] [ebp-8h]
        v23 = result + 1; /*0x5c66c8*/
        while ( 1 ) /*0x5c66d2*/
        {
          unsigned int v12; // eax
          v12 = *--v9; /*0x5c66d2*/
          char v13 = v10; // cl /*0x5c66e8*/
          int v14 = v25; // ebp /*0x5c66ea*/
          v25 = ((1 << a2) - 1) & v12; /*0x5c66ee*/
          *v9 = (v14 << v13) | (v12 >> a2); /*0x5c66f6*/
          result = --v23; /*0x5c66fc*/
          if ( !v23 ) /*0x5c6701*/
            break; /*0x5c6701*/
          v10 = 32 - a2; /*0x5c66ce*/
        }
      }
    }
  }
  return result; /*0x5c6694*/
}
}
// 0x5C67A0
namespace gamemd {
int RotateBitBufferLeft(int *a0, int a2, int aP2)
{
  int result; // eax
  bool v16; // zf

  char v4 = a2; // di /*0x5c67a5*/
  int *v5 = a0; // esi /*0x5c67a7*/
  if ( a2 ) /*0x5c67ab*/
  {
    if ( a2 == 32 ) /*0x5c67b0*/
    {
      result = 0; /*0x5c67b6*/
      if ( aP2 ) /*0x5c67bd*/
      {
        int v6 = aP2; // edx /*0x5c67bf*/
        do /*0x5c67cc*/
        {
          int v7 = *v5; // ecx /*0x5c67c2*/
          *v5++ = result; /*0x5c67c4*/
          --v6; /*0x5c67c9*/
          result = v7; /*0x5c67ca*/
        }
        while ( v6 ); /*0x5c67cc*/
      }
    }
    else if ( a2 >= 32 ) /*0x5c67d6*/
    {
      result = a2 / 32; /*0x5c6833*/
      int v11 = a2 % 32; // edi /*0x5c6842*/
      int v12 = aP2; // ebx /*0x5c6843*/
      int *v13; // edx
      v13 = &a0[aP2 - 1]; /*0x5c684a*/
      if ( result < aP2 - 1 ) /*0x5c6850*/
      {
        int v21; // [esp+10h] [ebp-4h]
        v21 = aP2 - 1 - result; /*0x5c685b*/
        do /*0x5c6893*/
        {
          int *v14; // ebx
          v14 = &v13[-result - 1]; /*0x5c6868*/
          int *v15; // ebp
          v15 = v13--; /*0x5c686c*/
          v16 = v21 == 1; /*0x5c688b*/
          v13[1] = (v15[-result] << v11) | ((unsigned int)*v14 >> (32 - v11)); /*0x5c688c*/
          --v21; /*0x5c688f*/
        }
        while ( !v16 ); /*0x5c6893*/
        v12 = aP2; /*0x5c6895*/
      }
      if ( result < v12 ) /*0x5c689b*/
      {
        int v17; // esi
        v17 = v13[-result] << v11; /*0x5c68ac*/
        --v13; /*0x5c68ae*/
        v13[1] = v17; /*0x5c68b1*/
      }
      int i; // esi
      for ( i = 0; ; ++i ) /*0x5c68b4*/
      {
        int v19 = result; // ecx /*0x5c68b8*/
        if ( result >= v12 ) /*0x5c68ba*/
          v19 = v12; /*0x5c68bc*/
        if ( i >= v19 ) /*0x5c68c0*/
          break; /*0x5c68c0*/
        *v13-- = 0; /*0x5c68c6*/
      }
    }
    else
    {
      char v20; // [esp+10h] [ebp-4h]
      v20 = 32 - a2; /*0x5c67e4*/
      unsigned int v8 = 0; // ebp /*0x5c67ee*/
      for ( result = aP2 - 1; aP2; --aP2 ) /*0x5c67f7*/
      {
        int v9; // edx
        v9 = *v5++; /*0x5c6802*/
        int v10; // eax
        v10 = (v8 >> v20) | (v9 << v4); /*0x5c6811*/
        v8 = ~(0xFFFFFFFF >> v4) & v9; /*0x5c6813*/
        *(v5 - 1) = v10; /*0x5c6815*/
        result = aP2 - 1; /*0x5c681c*/
      }
    }
  }
  return result; /*0x5c67ce*/
}
}
// 0x5C6960
namespace gamemd {
int BitArray_FindHighestBit(int a1, int a2)
{
  unsigned int *v2; // eax
  int v3; // esi
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx

  v2 = (unsigned int *)(a1 + 4 * a2 - 4); /*0x5c6960*/
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
  v6 = *(unsigned int *)(a1 + 4 * v3 - 4); /*0x5c6981*/
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
// 0x5C6BC0
namespace gamemd {
int Array_FillPattern(unsigned int * a1, char * a2, unsigned int * a3, int a4)
{
  int v4; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned int *v11; // eax
  int v12; // ecx
  unsigned int *v14; // eax
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
  unsigned int *v30; // [esp+18h] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-Ch]
  int v32; // [esp+20h] [ebp-8h]
  char *v33; // [esp+24h] [ebp-4h]
  unsigned int v34; // [esp+2Ch] [ebp+4h]

  v4 = a4; /*0x5c6bc5*/
  v6 = a4; /*0x5c6bcf*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6be3*/
  v33 = a2; /*0x5c6be7*/
  *a1 = 0; /*0x5c6bf4*/
  if ( *(unsigned int *)a2 ) /*0x5c6bfa*/
    goto LABEL_10; /*0x5c6bfa*/
  v7 = &a2[v6 * 4 - 4]; /*0x5c6c00*/
  v8 = a4; /*0x5c6c04*/
  if ( !*(unsigned int *)v7 ) /*0x5c6c06*/
  {
    do /*0x5c6c16*/
    {
      if ( !--v8 ) /*0x5c6c0c*/
        break; /*0x5c6c0c*/
      v9 = *((unsigned int *)v7 - 1); /*0x5c6c0e*/
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
                v25 = *v24 + *(unsigned int *)((char *)(unsigned int)(v22)+ v33 - (char *)a1); /*0x5c6d1c*/
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
// 0x5C6DD0
namespace gamemd {
int MultiplyAddBigInteger(char * a1, unsigned short * a2, short a3, int a4)
{
  bool v10; // zf

  int v4 = a4; // ebx /*0x5c6dd7*/
  char *v5 = a1; // ebp /*0x5c6ddf*/
  if ( *(int *)&a2[2 * a4 - 2] >= 0 ) /*0x5c6df4*/
  {
    if ( a3 >= 0 ) /*0x5c6f1f*/
    {
      unsigned int v37 = 0; // esi /*0x5c6f97*/
      uint16_t *v38 = a2; // ecx /*0x5c6f9b*/
      if ( 2 * a4 > 0 ) /*0x5c6fa1*/
      {
        int v39; // edi
        v39 = v5 - (char *)a2; /*0x5c6fa5*/
        int v40 = 2 * a4; // edx /*0x5c6fa7*/
        do /*0x5c6fc6*/
        {
          uint16_t v41; // ax
          v41 = *v38++; /*0x5c6fb0*/
          unsigned int v42 = v37 + a3 * v41; // eax /*0x5c6fb9*/
          *(uint16_t *)((char *)v38 + v39 - 2) = v42; /*0x5c6fbb*/
          --v40; /*0x5c6fc3*/
          v37 = (*(((unsigned short *)&(v42)) + 1)); /*0x5c6fc4*/
        }
        while ( v40 ); /*0x5c6fc6*/
      }
    }
    else
    {
      unsigned int v27 = 0; // esi /*0x5c6f28*/
      uint16_t *v28 = a2; // ecx /*0x5c6f2a*/
      if ( 2 * a4 > 0 ) /*0x5c6f2e*/
      {
        int v29; // edi
        v29 = a1 - (char *)a2; /*0x5c6f37*/
        int v30 = 2 * a4; // edx /*0x5c6f39*/
        do /*0x5c6f53*/
        {
          uint16_t v31; // ax
          v31 = *v28++; /*0x5c6f3d*/
          unsigned int v32; // eax
          v32 = v27 + (int16_t)-a3 * v31; /*0x5c6f46*/
          *(uint16_t *)((char *)v28 + v29 - 2) = v32; /*0x5c6f48*/
          --v30; /*0x5c6f50*/
          v27 = (*(((unsigned short *)&(v32)) + 1)); /*0x5c6f51*/
        }
        while ( v30 ); /*0x5c6f53*/
        v5 = a1; /*0x5c6f55*/
      }
      char *v33 = v5; // eax /*0x5c6f5b*/
      if ( a4 > 0 ) /*0x5c6f5d*/
      {
        int v34 = a4; // ecx /*0x5c6f5f*/
        do /*0x5c6f6c*/
        {
          int v35; // edx
          v35 = *(unsigned int *)v33; /*0x5c6f61*/
          v33 += 4; /*0x5c6f63*/
          *((unsigned int *)v33 - 1) = ~v35; /*0x5c6f68*/
          --v34; /*0x5c6f6b*/
        }
        while ( v34 ); /*0x5c6f6c*/
      }
      char *v36 = v5; // eax /*0x5c6f71*/
      v10 = (*(unsigned int *)v5)++ == -1; /*0x5c6f73*/
      if ( v10 ) /*0x5c6f77*/
      {
        while ( 1 ) /*0x5c6f79*/
        {
          v36 += 4; /*0x5c6f79*/
          if ( !--v4 ) /*0x5c6f7d*/
            break; /*0x5c6f7d*/
          v10 = (*(unsigned int *)v36)++ == -1; /*0x5c6f81*/
          if ( !v10 ) /*0x5c6f84*/
            return 0; /*0x5c6f92*/
        }
      }
    }
    return 0; /*0x5c6f7d*/
  }
  unsigned int v44[64]; // [esp+18h] [ebp-100h] BYREF
  memcpy(v44, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c6e05*/
  int *v6; // eax
  v6 = (int *)(v44); /*0x5c6e09*/
  if ( a4 > 0 ) /*0x5c6e14*/
  {
    int v7 = a4; // ecx /*0x5c6e16*/
    do /*0x5c6e23*/
    {
      int v8; // edx
      v8 = *v6++; /*0x5c6e18*/
      *(v6 - 1) = ~v8; /*0x5c6e1f*/
      --v7; /*0x5c6e22*/
    }
    while ( v7 ); /*0x5c6e23*/
  }
  int v9 = a4; // ecx /*0x5c6e29*/
  v10 = v44[0] == -1; /*0x5c6e2b*/
  unsigned int *v11 = v44; // eax /*0x5c6e2c*/
  ++v44[0]; /*0x5c6e30*/
  for ( ; v10; v10 = (*v11)++ == -1 ) /*0x5c6e34*/
  {
    ++v11; /*0x5c6e36*/
    if ( !--v9 ) /*0x5c6e3a*/
      break; /*0x5c6e3a*/
  }
  if ( a3 >= 0 ) /*0x5c6e4d*/
  {
    int v18 = 2 * a4; // edi /*0x5c6e95*/
    unsigned int v19 = 0; // edx /*0x5c6e98*/
    uint16_t *v20; // ecx
    v20 = (uint16_t *)v44; /*0x5c6e9c*/
    if ( 2 * a4 > 0 ) /*0x5c6ea0*/
    {
      do /*0x5c6ecb*/
      {
        uint16_t v21; // ax
        v21 = *v20++; /*0x5c6eb3*/
        unsigned int v22 = v19 + a3 * v21; // eax /*0x5c6ebe*/
        *(uint16_t *)((char *)(unsigned int)(v20)+ v5 - (char *)v44 - 2) = v22; /*0x5c6ec0*/
        --v18; /*0x5c6ec8*/
        v19 = (*(((unsigned short *)&(v22)) + 1)); /*0x5c6ec9*/
      }
      while ( v18 ); /*0x5c6ecb*/
    }
    char *v23 = v5; // eax /*0x5c6ed3*/
    if ( a4 > 0 ) /*0x5c6ed5*/
    {
      int v24 = a4; // ecx /*0x5c6ed7*/
      do /*0x5c6ee4*/
      {
        int v25; // edx
        v25 = *(unsigned int *)v23; /*0x5c6ed9*/
        v23 += 4; /*0x5c6edb*/
        *((unsigned int *)v23 - 1) = ~v25; /*0x5c6ee0*/
        --v24; /*0x5c6ee3*/
      }
      while ( v24 ); /*0x5c6ee4*/
    }
    char *v26 = v5; // eax /*0x5c6ee9*/
    v10 = (*(unsigned int *)v5)++ == -1; /*0x5c6eeb*/
    if ( v10 ) /*0x5c6eef*/
    {
      while ( 1 ) /*0x5c6ef5*/
      {
        v26 += 4; /*0x5c6ef5*/
        if ( !--v4 ) /*0x5c6ef9*/
          break; /*0x5c6ef9*/
        v10 = (*(unsigned int *)v26)++ == -1; /*0x5c6f01*/
        if ( !v10 ) /*0x5c6f04*/
          return 0; /*0x5c6f12*/
      }
    }
    return 0; /*0x5c6ef9*/
  }
  int v12 = 2 * a4; // ebx /*0x5c6e4f*/
  unsigned int v13 = 0; // edx /*0x5c6e51*/
  uint16_t *v14; // ecx
  v14 = (uint16_t *)v44; /*0x5c6e57*/
  if ( 2 * a4 <= 0 ) /*0x5c6e5b*/
    return 0; /*0x5c6fcb*/
  do /*0x5c6e84*/
  {
    uint16_t v15; // ax
    v15 = *v14++; /*0x5c6e6e*/
    unsigned int v16; // eax
    v16 = v13 + (int16_t)-a3 * v15; /*0x5c6e77*/
    *(uint16_t *)((char *)(unsigned int)(v14)+ v5 - (char *)v44 - 2) = v16; /*0x5c6e79*/
    --v12; /*0x5c6e81*/
    v13 = (*(((unsigned short *)&(v16)) + 1)); /*0x5c6e82*/
  }
  while ( v12 ); /*0x5c6e84*/
  return 0; /*0x5c6e86*/
}
}
// 0x5C71E0
namespace gamemd {
short BigInt_ShiftAndScan(unsigned int * a1, int a2, int a3, int a4)
{
  unsigned int *v6; // eax
  int v7; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  unsigned int v16; // edx
  unsigned int *v17; // eax
  int v18; // ecx
  int v19; // ebx
  int v20; // edi

  if ( !(unsigned short)a3 ) /*0x5c71f5*/
    return 0; /*0x5c7201*/
  memset(a1, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7220*/
  v6 = (unsigned int *)(4 * a4 + a2 - 4); /*0x5c722d*/
  *a1 = 0; /*0x5c7231*/
  v7 = a4; /*0x5c7238*/
  if ( *v6 ) /*0x5c723a*/
  {
    LABEL_6:
    if ( v7 ) /*0x5c724e*/
    {
      v10 = v7; /*0x5c7254*/
      v11 = *(unsigned int *)(a2 + 4 * v7 - 4); /*0x5c7256*/
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
  v20 = v15 - (unsigned int)v17; /*0x5c72bf*/
  do /*0x5c72e5*/
  {
    v18 *= 2; /*0x5c72c4*/
    if ( (*(unsigned int *)((char *)v17 + v20) & v16) != 0 ) /*0x5c72c8*/
      ++v18; /*0x5c72ca*/
    if ( (uint16_t)v18 >= (uint16_t)a3 ) /*0x5c72ce*/
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
// 0x5C7310
namespace gamemd {
int SubtractBigInteger(unsigned int * a1, unsigned int * a2, int a3, char * a4, Buffer * aP2)
{
  char *v7; // eax
  Buffer * v8;
  int v9; // esi
  Buffer * v11;
  unsigned int *v12; // eax
  int v14; // esi
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  unsigned int *v21; // eax
  int v22; // ebx
  Buffer * v23;
  bool v24; // zf
  unsigned int *v25; // eax
  char *v26; // edx
  Buffer * v27;
  unsigned int v28; // ecx
  char *v29; // eax
  int v30; // edx
  bool v31; // cc
  unsigned int *v32; // ecx
  int v33; // esi
  uint16_t v34; // ax
  int v35; // eax
  unsigned int *v36; // [esp+10h] [ebp-10h]
  uint8_t v37; // [esp+14h] [ebp-Ch]
  int v38; // [esp+18h] [ebp-8h]
  int i; // [esp+1Ch] [ebp-4h]
  unsigned int v40; // [esp+24h] [ebp+4h]

  if ( !*(unsigned int *)a4 ) /*0x5c731c*/
  {
    v7 = (char *)((int)(&a4[4 * aP2 - 4]));
    v8 = (gamemd::Buffer *)((int)(aP2)); /*0x5c7333*/
    if ( !*(unsigned int *)v7 ) /*0x5c7329*/
    {
      do /*0x5c7342*/
      {
        if ( !--v8 ) /*0x5c7338*/
          break; /*0x5c7338*/
        v9 = *((unsigned int *)v7 - 1); /*0x5c733a*/
        v7 -= 4; /*0x5c733d*/
      }
      while ( !v9 ); /*0x5c7342*/
    }
    if ( v8 <= 1 ) /*0x5c7347*/
      return -1; /*0x5c7353*/
  }
  memset(a1, 0, 4 * ((unsigned int)(4 * aP2) >> 2)); /*0x5c7368*/
  *a1 = 0; /*0x5c7377*/
  memset(a2, 0, 4 * ((unsigned int)(4 * aP2) >> 2)); /*0x5c7381*/
  v11 = (gamemd::Buffer *)((int)(aP2)); /*0x5c738e*/
  *a2 = 0; /*0x5c7392*/
  v12 = (unsigned int *)(4 * aP2 + a3 - 4); /*0x5c7398*/
  if ( *v12 ) /*0x5c739c*/
  {
    LABEL_10:
    if ( v11 ) /*0x5c73b3*/
    {
      v15 = (int)(v11); /*0x5c73b9*/
      v16 = *(unsigned int *)(a3 + 4 * v11 - 4); /*0x5c73bb*/
      v17 = 0x80000000; /*0x5c73bf*/
      v18 = 32 * v15; /*0x5c73c4*/
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
    while ( --v11 ) /*0x5c73a4*/
    {
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
      v22 = v20 - (unsigned int)v21; /*0x5c7425*/
      for ( i = v20 - (unsigned int)v21; ; v22 = i ) /*0x5c7427*/
      {
        RotateBitBufferLeft((int *)(a1), 1, aP2); /*0x5c743d*/
        if ( (v40 & *(unsigned int *)((char *)v36 + v22)) != 0 ) /*0x5c744d*/
        {
          v23 = (gamemd::Buffer *)((int)(aP2));
          v24 = *a1 == -1; /*0x5c7454*/
          v25 = a1; /*0x5c7455*/
          ++*a1; /*0x5c7457*/
          for ( ; v24; v24 = (*v25)++ == -1 ) /*0x5c745a*/
          {
            ++v25; /*0x5c745c*/
            if ( !--v23 ) /*0x5c7460*/
              break; /*0x5c7460*/
          }
        }
        v26 = (int)((char *)&a1[aP2 - 1]);
        v27 = (gamemd::Buffer *)((int)(aP2)); /*0x5c7471*/
        v28 = *(unsigned int *)&a4[4 * aP2 - 4]; /*0x5c7473*/
        v29 = &a4[4 * aP2 - 4]; /*0x5c7477*/
        if ( *(unsigned int *)v26 >= v28 ) /*0x5c747d*/
        {
          v30 = v26 - v29; /*0x5c747f*/
          v31 = *(unsigned int *)&v29[v30] <= v28; /*0x5c7481*/
          while ( v31 ) /*0x5c7484*/
          {
            v29 -= 4; /*0x5c7486*/
            if ( !--v27 ) /*0x5c748a*/
              break; /*0x5c748a*/
            v31 = *(unsigned int *)&v29[v30] <= *(unsigned int *)v29; /*0x5c748e*/
            if ( *(unsigned int *)&v29[v30] < *(unsigned int *)v29 ) /*0x5c7491*/
              goto LABEL_36; /*0x5c7491*/
          }
          v37 = 0; /*0x5c7498*/
          v32 = a1; /*0x5c74a2*/
          if ( 2 * aP2 ) /*0x5c749d*/
          {
            v33 = 2 * aP2; /*0x5c74a8*/
            do /*0x5c74da*/
            {
              v34 = *(unsigned short *)((char *)(unsigned int)(v32)+ a4 - (char *)a1); /*0x5c74af*/
              v32 = (unsigned int *)((char *)v32 + 2); /*0x5c74b3*/
              v35 = *((uint16_t *)v32 - 1) - v34 - v37; /*0x5c74ca*/
              *((unsigned short *)v32 - 1) = v35; /*0x5c74cc*/
              --v33; /*0x5c74d5*/
              v37 = (((unsigned char *)&(v35))[2]) & 1; /*0x5c74d6*/
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
// 0x5C7520
namespace gamemd {
char SubtractBigIntegerWithSign(char * a1, int * a2, const void * a3, const void * a4, int a5)
{
  int v5; // ebp
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  unsigned int *v12; // eax
  int *v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int *v17; // eax
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
  unsigned int v41[64]; // [esp+1Ch] [ebp-200h] BYREF
  unsigned int v42[64]; // [esp+11Ch] [ebp-100h] BYREF

  v5 = a5; /*0x5c7528*/
  v40 = a1; /*0x5c752f*/
  memcpy(v42, a3, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7553*/
  v38 = 0; /*0x5c7557*/
  memcpy(v41, a4, 4 * ((unsigned int)(4 * a5) >> 2)); /*0x5c7571*/
  if ( (int)v41[a5 + 63] < 0 ) /*0x5c7583*/
  {
    v7 = (int *)(v42);
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
    v13 = (int *)(v41);
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
  SubtractBigInteger((unsigned int *)(v40), a2, (int)v42, (char *)v41, a5); /*0x5c762b*/
  (*((unsigned char *)&(v19))) = v38; /*0x5c7630*/
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
    if ( *(unsigned int *)v18 ) /*0x5c7669*/
      goto LABEL_29; /*0x5c7669*/
    v19 = &v18[4 * a5 - 4]; /*0x5c7672*/
    v25 = a5; /*0x5c7678*/
    if ( !*(unsigned int *)v19 ) /*0x5c766e*/
    {
      do /*0x5c7687*/
      {
        if ( !--v25 ) /*0x5c767d*/
          break; /*0x5c767d*/
        v26 = *((unsigned int *)v19 - 1); /*0x5c767f*/
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
          v32 = *(unsigned int *)v30; /*0x5c76ba*/
          v30 += 4; /*0x5c76bc*/
          *((unsigned int *)v30 - 1) = ~v32; /*0x5c76c1*/
          --v31; /*0x5c76c4*/
        }
        while ( v31 ); /*0x5c76c5*/
      }
      v33 = a5; /*0x5c76c9*/
      v11 = *(unsigned int *)v18 == -1; /*0x5c76cb*/
      v19 = v18; /*0x5c76cc*/
      ++*(unsigned int *)v18; /*0x5c76ce*/
      for ( ; v11; v11 = (*(unsigned int *)v19)++ == -1 ) /*0x5c76d0*/
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
          v19 = (char *)((unsigned int)((char *)(*(unsigned int *)v34 + *(unsigned int *)&v18[v35])));
          v36 = &v19[v39]; /*0x5c7705*/
          v39 = (unsigned int)v19 < *(unsigned int *)v34 || ((*((unsigned char *)&(v19))) = v39) != 0 && !v36; /*0x5c771e*/
          *(unsigned int *)v18 = (unsigned int)(v36); /*0x5c7723*/
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
// 0x5C7740
namespace gamemd {
int ModInverseBigInteger(char * a1, const void * a2, const void * a3, int a4)
{

  int v4 = a4; // ebp /*0x5c7748*/
  char *v30; // [esp+20h] [ebp-704h]
  v30 = a1; /*0x5c774f*/
  unsigned int v29; // [esp+1Ch] [ebp-708h]
  v29 = 4 * a4; /*0x5c776e*/
  char v34[256]; // [esp+424h] [ebp-300h] BYREF
  memcpy(v34, a3, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7775*/
  char v35[512]; // [esp+524h] [ebp-200h] BYREF
  memcpy(v35, a2, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c7790*/
  unsigned int v31[64]; // [esp+24h] [ebp-700h] BYREF
  memset(v31, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77a2*/
  int v5 = 1; // esi /*0x5c77a6*/
  int v25; // [esp+10h] [ebp-714h]
  v25 = 1; /*0x5c77ae*/
  v31[0] = 0; /*0x5c77bf*/
  unsigned int v32[128]; // [esp+124h] [ebp-600h] BYREF
  memset(v32, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c77ca*/
  int v6 = 0; // edi /*0x5c77d3*/
  v32[0] = 1; /*0x5c77d5*/
  int i; // [esp+18h] [ebp-70Ch]
  for ( i = 0; ; v6 = i ) /*0x5c77dc*/
  {
    int v7; // ebx
    v7 = (v5 % 3) << 8; /*0x5c77ec*/
    if ( !*(unsigned int *)&v34[v7] ) /*0x5c77ef*/
    {
      int v8 = a4; // edx /*0x5c7805*/
      char *j; // eax
      for ( j = &v34[v7 - 4 + v29]; !*(unsigned int *)j; j -= 4 ) /*0x5c7807*/
      {
        if ( !--v8 ) /*0x5c7813*/
          break; /*0x5c7813*/
      }
      if ( v8 <= 1 ) /*0x5c7820*/
        break; /*0x5c7820*/
    }
    int v10; // esi
    v10 = (v6 % 3) << 8; /*0x5c783f*/
    int v11; // edi
    v11 = ((v6 + 2) % 3) << 8; /*0x5c7853*/
    unsigned int v33[64]; // [esp+324h] [ebp-400h] BYREF
    SubtractBigInteger((unsigned int *)(&v34[v11]), v33, (int)&v34[v10], &v34[v7], a4); /*0x5c785d*/
    FillArrayPattern((unsigned int *)(v30), (char *)v31 + v7, v33, a4); /*0x5c7875*/
    char *v12; // ecx
    v12 = (char *)v31 + v10; /*0x5c787e*/
    uint8_t v27; // [esp+14h] [ebp-710h]
    v27 = 0; /*0x5c7887*/
    char *v13; // edx
    v13 = (char *)v31 + v11; /*0x5c788c*/
    if ( 2 * a4 ) /*0x5c7882*/
    {
      int v14 = 2 * a4; // edi /*0x5c7894*/
      char *v15; // esi
      v15 = (char *)(v30 - v12); /*0x5c7897*/
      do /*0x5c78c9*/
      {
        v13 += 2; /*0x5c789b*/
        uint16_t v16; // ax
        v16 = *(unsigned short *)&v12[(unsigned int)v15]; /*0x5c789e*/
        v12 += 2; /*0x5c78a2*/
        int v17; // eax
        v17 = *((uint16_t *)v12 - 1) - v16 - v27; /*0x5c78b9*/
        *((unsigned short *)v13 - 1) = v17; /*0x5c78bb*/
        --v14; /*0x5c78c4*/
        v27 = (((unsigned char *)&(v17))[2]) & 1; /*0x5c78c5*/
      }
      while ( v14 ); /*0x5c78c9*/
    }
    ++v25; /*0x5c78d5*/
    ++i; /*0x5c78d9*/
    v5 = v25; /*0x5c78dd*/
  }
  int v18; // eax
  v18 = (v5 - 1) % 3; /*0x5c78f1*/
  if ( (int)v31[64 * v18 - 1 + a4] < 0 ) /*0x5c7902*/
  {
    unsigned int *v19; // ebx
    v19 = (unsigned int *)(a3);
    unsigned int *v20; // edi
    v20 = &v31[64 * v18]; /*0x5c7912*/
    bool v26; // [esp+10h] [ebp-714h]
    v26 = 0; /*0x5c7916*/
    unsigned int *v21 = v20; // edx /*0x5c791b*/
    if ( a4 ) /*0x5c791d*/
    {
      do /*0x5c7959*/
      {
        unsigned int v22 = *v20 + *v19; // eax /*0x5c7927*/
        unsigned int v23 = v22 + v26; // ecx /*0x5c792f*/
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
  int result = v18 << 8; // eax /*0x5c7967*/
  memcpy(v30, (char *)v31 + result, v29); /*0x5c7973*/
  return result; /*0x5c797c*/
}
}
// 0x5C7990
namespace gamemd {
int DivideBigInteger(unsigned int * a1, char * a2, int a3)
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
  unsigned int *v17; // ebx
  int *v18; // ebp
  int v19; // esi
  unsigned int *v20; // eax
  int v21; // edx
  bool v22; // cc
  int *v23; // ecx
  int v24; // esi
  uint16_t v25; // ax
  int v26; // eax
  unsigned int v27; // [esp+8h] [ebp-114h]
  uint8_t v29; // [esp+10h] [ebp-10Ch]
  int v30; // [esp+14h] [ebp-108h]
  unsigned int *v31; // [esp+18h] [ebp-104h] BYREF
  int v32[64]; // [esp+1Ch] [ebp-100h] BYREF

  if ( !*(unsigned int *)a2 ) /*0x5c799c*/
  {
    v4 = &a2[4 * a3 - 4]; /*0x5c79b1*/
    v5 = a3; /*0x5c79b7*/
    if ( !*(unsigned int *)v4 ) /*0x5c79ad*/
    {
      do /*0x5c79c6*/
      {
        if ( !--v5 ) /*0x5c79bc*/
          break; /*0x5c79bc*/
        v6 = *((unsigned int *)v4 - 1); /*0x5c79be*/
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
  v9 = *(unsigned int *)&a2[4 * a3 - 4]; /*0x5c7a20*/
  v10 = (int)&a2[4 * a3 - 4]; /*0x5c7a24*/
  v31 = (unsigned int *)v10; /*0x5c7a2a*/
  if ( v9 ) /*0x5c7a2e*/
  {
    LABEL_10:
    if ( v8 ) /*0x5c7a3f*/
    {
      v13 = v8; /*0x5c7a49*/
      v14 = 0x80000000; /*0x5c7a4b*/
      v15 = *(unsigned int *)&a2[4 * v8 - 4]; /*0x5c7a50*/
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
      v11 = *(unsigned int *)(v10 - 4); /*0x5c7a33*/
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
          v22 = *(unsigned int *)((char *)v20 + v21) <= *v20; /*0x5c7b01*/
          if ( *(unsigned int *)((char *)v20 + v21) < *v20 ) /*0x5c7b04*/
            goto LABEL_30; /*0x5c7b04*/
        }
        v29 = 0; /*0x5c7b0b*/
        v23 = v32; /*0x5c7b15*/
        if ( 2 * a3 ) /*0x5c7b10*/
        {
          v24 = 2 * a3; /*0x5c7b25*/
          do /*0x5c7b55*/
          {
            v25 = *(unsigned short *)((char *)(unsigned int)(v23)+ a2 - (char *)v32); /*0x5c7b2a*/
            v23 = (int *)((char *)v23 + 2); /*0x5c7b2e*/
            v26 = *((uint16_t *)v23 - 1) - v25 - v29; /*0x5c7b45*/
            *((unsigned short *)v23 - 1) = v26; /*0x5c7b47*/
            --v24; /*0x5c7b50*/
            v29 = (((unsigned char *)&(v26))[2]) & 1; /*0x5c7b51*/
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
// 0x5C7BA0
namespace gamemd {
char sub_5C7BA0(const char * a1, unsigned short * a2, int a3)
{
  int16_t v28; // [esp+10h] [ebp-10h]

  uint16_t *v3 = a2; // ebp /*0x5c7ba5*/
  const char *v4 = a1; // esi /*0x5c7ba7*/
  uint16_t *v5; // eax
  (*((unsigned char *)&(v5))) = 0; /*0x5c7bae*/
  memset(a2, 0, 4 * a3); /*0x5c7bb2*/
  *(unsigned int *)a2 = 0; /*0x5c7bba*/
  if ( a1 )
  {
    unsigned int v6; // kr04_4
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
      bool v27; // [esp+Fh] [ebp-11h]
      v27 = *v4 == 45; /*0x5c7c26*/
      if ( *v4 == 45 ) /*0x5c7c2a*/
        ++v4; /*0x5c7c2c*/
      int v7; // ebx
      v7 = *(uint8_t *)v4; /*0x5c7c30*/
      uint8_t *v8; // esi
      v8 = (uint8_t *)(v4 + 1); /*0x5c7c32*/
      uint8_t *i; // [esp+18h] [ebp-8h]
      for ( i = v8; v7; i = v8 )
      {
        if ( v7 != 44 )
        {
          if ( !isxdigit((char)v7) ) /*0x5c7c4c*/
            break; /*0x5c7c4c*/
          unsigned int v9; // ebx
          v9 = isdigit((char)v7) ? v7 - 48 : (uint8_t)(toupper((char)v7) - 65) + 10;
          if ( v9 >= (uint16_t)v28 ) /*0x5c7c93*/
            break; /*0x5c7c93*/
          int v10 = a3; // eax /*0x5c7c99*/
          unsigned int v11 = 0; // edx /*0x5c7c9d*/
          uint16_t *v12 = v3; // ecx /*0x5c7c9f*/
          int v13 = 2 * a3; // esi /*0x5c7ca1*/
          if ( 2 * a3 > 0 ) /*0x5c7ca6*/
          {
            do /*0x5c7cc2*/
            {
              uint16_t v14; // ax
              v14 = *v12++; /*0x5c7cad*/
              unsigned int v15 = v11 + v28 * v14; // eax /*0x5c7cb6*/
              *(v12 - 1) = v15; /*0x5c7cb8*/
              --v13; /*0x5c7cbf*/
              v11 = (*(((unsigned short *)&(v15)) + 1)); /*0x5c7cc0*/
            }
            while ( v13 ); /*0x5c7cc2*/
            v10 = a3; /*0x5c7cc4*/
          }
          bool v29; // [esp+14h] [ebp-Ch]
          v29 = 0; /*0x5c7cca*/
          unsigned int *v16; // edi
          v16 = (unsigned int *)v3; /*0x5c7ccf*/
          unsigned int *v17; // edx
          v17 = (unsigned int *)v3; /*0x5c7cd1*/
          if ( v10 ) /*0x5c7cd3*/
          {
            int v18 = v10; // ebp /*0x5c7cd5*/
            do /*0x5c7d0e*/
            {
              unsigned int v19 = *v16 + v9; // esi /*0x5c7ce2*/
              unsigned int v20 = v19 + v29; // eax /*0x5c7ce5*/
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
      (*((unsigned char *)&(v5))) = v27; /*0x5c7d29*/
      if ( v27 ) /*0x5c7d30*/
      {
        int *v21; // eax
        v21 = (int *)v3; /*0x5c7d36*/
        if ( a3 > 0 ) /*0x5c7d3a*/
        {
          int v22 = a3; // ecx /*0x5c7d3c*/
          do /*0x5c7d49*/
          {
            int v23; // esi
            v23 = *v21++; /*0x5c7d3e*/
            *(v21 - 1) = ~v23; /*0x5c7d45*/
            --v22; /*0x5c7d48*/
          }
          while ( v22 ); /*0x5c7d49*/
        }
        int v24 = a3; // ecx /*0x5c7d4b*/
        bool v25; // zf
        v25 = *(unsigned int *)v3 == -1; /*0x5c7d50*/
        v5 = v3; /*0x5c7d51*/
        ++*(unsigned int *)v3; /*0x5c7d53*/
        for ( ; v25; v25 = (*(unsigned int *)v5)++ == -1 ) /*0x5c7d56*/
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
// 0x5C8500
namespace gamemd {
int ModBigIntExp(unsigned int * a0, AbstractClass * aP1, char * a2, char * a3, int a5)
{
  int v5; // ebp
  int v6; // edx
  char *v7; // eax
  int v8; // ecx
  int v9; // esi
  unsigned int *v10; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // edi
  char *v16; // ebx
  int v17; // ecx
  char *v18; // edi
  unsigned int *v19; // eax
  int v20; // edi
  bool v21; // cc
  int v22; // ecx
  char *v23; // eax
  bool v24; // cc
  unsigned int v25; // edi
  int v26; // eax
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
  unsigned int *v39; // edx
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
  if ( !*(unsigned int *)a2 ) /*0x5c8543*/
  {
    v7 = &a2[v6 - 4]; /*0x5c854c*/
    v8 = a5; /*0x5c8552*/
    if ( !*(unsigned int *)v7 ) /*0x5c8548*/
    {
      do /*0x5c8561*/
      {
        if ( !--v8 ) /*0x5c8557*/
          break; /*0x5c8557*/
        v9 = *((unsigned int *)v7 - 1); /*0x5c8559*/
        v7 -= 4; /*0x5c855c*/
      }
      while ( !v9 ); /*0x5c8561*/
    }
    if ( v8 <= 1 ) /*0x5c8566*/
    {
      if ( !*aP1 ) /*0x5c856c*/
      {
        v10 = (unsigned int *)(&aP1[v6 / 4u - 1]);
        if ( !*v10 ) /*0x5c8575*/
        {
          do /*0x5c858c*/
          {
            if ( !--v5 ) /*0x5c8582*/
              break; /*0x5c8582*/
          }
          while ( !*--v10 ); /*0x5c858c*/
        }
        if ( v5 <= 1 ) /*0x5c8591*/
          return -1; /*0x5c85a4*/
      }
      return 0; /*0x5c8591*/
    }
  }
  if ( !*(unsigned int *)a3 ) /*0x5c85ae*/
  {
    v13 = &a3[v6 - 4]; /*0x5c85b7*/
    v14 = a5; /*0x5c85bd*/
    if ( !*(unsigned int *)v13 ) /*0x5c85b3*/
    {
      do /*0x5c85cc*/
      {
        if ( !--v14 ) /*0x5c85c2*/
          break; /*0x5c85c2*/
        v15 = *((unsigned int *)v13 - 1); /*0x5c85c4*/
        v13 -= 4; /*0x5c85c7*/
      }
      while ( !v15 ); /*0x5c85cc*/
    }
    if ( v14 <= 1 ) /*0x5c85d1*/
      return -2; /*0x5c85e2*/
  }
  v16 = (char *)((unsigned int *)(&a3[v6 - 4]));
  v17 = a5; /*0x5c85ed*/
  v18 = (char *)&aP1[v6 / 4u - 1]; /*0x5c85ef*/
  v19 = (unsigned int *)(v16); /*0x5c85f3*/
  if ( *(unsigned int *)v18 < *(unsigned int *)v16 ) /*0x5c85f9*/
  {
    LABEL_23:
    v22 = a5; /*0x5c860f*/
    v23 = &a3[v6 - 4]; /*0x5c8620*/
    if ( *(unsigned int *)&a2[v6 - 4] >= *(unsigned int *)v16 ) /*0x5c8626*/
    {
      v24 = *(unsigned int *)&a2[v6 - 4] <= *(unsigned int *)v16; /*0x5c862a*/
      while ( v24 ) /*0x5c862d*/
      {
        v23 -= 4; /*0x5c862f*/
        if ( !--v22 ) /*0x5c8633*/
          break; /*0x5c8633*/
        v25 = *(unsigned int *)&v23[a2 - a3]; /*0x5c8637*/
        v24 = v25 <= *(unsigned int *)v23; /*0x5c863a*/
        if ( v25 < *(unsigned int *)v23 ) /*0x5c863c*/
          goto LABEL_31; /*0x5c863c*/
      }
      return -4; /*0x5c8661*/
    }
    LABEL_31:
    v26 = (int)&a3[v6 - 4]; /*0x5c8664*/
    v27 = a5; /*0x5c8666*/
    v45 = a5; /*0x5c8668*/
    if ( !*(unsigned int *)v16 ) /*0x5c866c*/
    {
      do /*0x5c867c*/
      {
        if ( !--v27 ) /*0x5c8672*/
          break; /*0x5c8672*/
        v28 = *(unsigned int *)(v26 - 4); /*0x5c8674*/
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
    if ( *(unsigned int *)v31 ) /*0x5c86ba*/
    {
      LABEL_40:
      if ( v30 ) /*0x5c86d5*/
      {
        v34 = v30; /*0x5c86db*/
        v35 = *(unsigned int *)&a2[4 * v30 - 4]; /*0x5c86dd*/
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
        v32 = *((unsigned int *)v31 - 1); /*0x5c86c9*/
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
      memcpy(a0, aP1, v29); /*0x5c8741*/
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
          ComputeModularInverse(v39, v45); /*0x5c8776*/
          if ( (v41 & *(unsigned int *)v40) != 0 ) /*0x5c877e*/
            ComputeModularInverse(aP1, v45); /*0x5c878e*/
          else
            memcpy(a0, v47, v46); /*0x5c87a6*/
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
      memset(&dword_ABF5B4, 0, v46); /*0x5c87d8*/
      dword_ABF6B8 = 0; /*0x5c87e1*/
      dword_ABF5B4 = 0; /*0x5c87f2*/
      memset(&dword_ABF6BC, 0, v46); /*0x5c87fb*/
      dword_ABF8C4 = 0; /*0x5c87ff*/
      (*((unsigned short *)&(dword_ABF5A0))) = 0; /*0x5c8808*/
      dword_ABF5A8 = 0; /*0x5c8820*/
      dword_ABF8CC = 0; /*0x5c8825*/
      dword_ABF5AC = 0; /*0x5c882b*/
      dword_ABF8D0 = 0; /*0x5c8830*/
      dword_ABF6BC = 0; /*0x5c8836*/
      dword_ABF5B0 = 0; /*0x5c883c*/
      dword_ABF5A4 = 0; /*0x5c8841*/
      dword_ABF8D4 = 0; /*0x5c8847*/
      dword_ABF8C8 = 0; /*0x5c884d*/
      (*((unsigned short *)&(dword_ABF6B4))) = 0; /*0x5c8853*/
      dword_ABF59C = 0; /*0x5c885a*/
    }
    return 0; /*0x5c8863*/
  }
  v20 = v18 - v16; /*0x5c85fb*/
  v21 = *(unsigned int *)&v16[v20] <= *(unsigned int *)v16; /*0x5c85fd*/
  while ( v21 ) /*0x5c8600*/
  {
    --v19; /*0x5c8602*/
    if ( !--v17 ) /*0x5c8606*/
      break; /*0x5c8606*/
    v21 = *(unsigned int *)((char *)v19 + v20) <= *v19; /*0x5c860a*/
    if ( *(unsigned int *)((char *)v19 + v20) < *v19 ) /*0x5c860d*/
      goto LABEL_23; /*0x5c860d*/
  }
  return -3; /*0x5c8597*/
}
}
// 0x5C8980
namespace gamemd {
char sub_5C8980(char * a1, unsigned int edx0, int a3)
{
  int v8; // ecx

  char *v3 = a1; // edx /*0x5c8993*/
  int v4 = a3; // ebx /*0x5c8996*/
  char v18[256]; // [esp+20h] [ebp-300h] BYREF
  memcpy(v18, a1, 4 * ((unsigned int)(4 * a3) >> 2)); /*0x5c89ab*/
  int *v5; // eax
  v5 = (int *)v18; /*0x5c89b6*/
  int v6 = a3; // esi /*0x5c89c0*/
  if ( (*(unsigned int *)v18)-- == 0 ) /*0x5c89c3*/
  {
    do /*0x5c89dc*/
    {
      ++v5; /*0x5c89cc*/
      if ( !--v6 ) /*0x5c89d0*/
        break; /*0x5c89d0*/
      v8 = *v5 - 1; /*0x5c89d5*/
      *v5 = v8; /*0x5c89d7*/
    }
    while ( v8 == -1 ); /*0x5c89dc*/
  }
  int v15; // [esp+14h] [ebp-30Ch]
  v15 = 0; /*0x5c89e2*/
  if ( !edx0 ) /*0x5c89ec*/
    return 1; /*0x5c8aa1*/
  uint16_t *i; // [esp+10h] [ebp-310h]
  for ( i = (uint16_t *)&unk_82E174; ; ++i ) /*0x5c89f2*/
  {
    unsigned int v19[64]; // [esp+120h] [ebp-200h] BYREF
    memset(v19, 0, v4 * 4); /*0x5c8a0a*/
    v19[0] = *i; /*0x5c8a25*/
    unsigned int v20[64]; // [esp+220h] [ebp-100h] BYREF
    ModBigIntExp(v20,(gamemd::AbstractClass *)(v19), v18, v3, a3); /*0x5c8a38*/
    if ( v20[0] != 1 ) /*0x5c8a45*/
      break; /*0x5c8a45*/
    unsigned int *v9; // eax
    v9 = &v19[v4 + 63]; /*0x5c8a4e*/
    int v10 = a3; // ecx /*0x5c8a57*/
    if ( !v19[a3 + 63] ) /*0x5c8a47*/
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
// 0x5C8AB0
namespace gamemd {
char ValidateRSAKey(int a1, char * a2, int a3, int a4)
{
  char *v4; // ecx
  uint16_t v5; // si
  unsigned int *v6; // edx
  int v7; // edi
  uint16_t v8; // ax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned char *v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int HighestBitBitArray; // esi
  unsigned int *v16; // eax
  int v17; // ecx
  unsigned int *v19; // edi
  char *v20; // edx
  unsigned int *v21; // eax
  int v22; // esi
  int v23; // edx
  bool v24; // cc
  char *v25; // ebx
  unsigned int *v26; // eax
  int v27; // esi
  int v28; // edx
  bool v29; // cc
  unsigned int *v30; // eax
  int v31; // ecx
  uint8_t v34; // [esp+10h] [ebp-718h]
  int v35; // [esp+10h] [ebp-718h]
  unsigned int v36; // [esp+14h] [ebp-714h]
  uint8_t v37; // [esp+18h] [ebp-710h]
  int v38; // [esp+1Ch] [ebp-70Ch]
  char *v39; // [esp+20h] [ebp-708h]
  int v40; // [esp+24h] [ebp-704h] BYREF
  unsigned int v41[64]; // [esp+28h] [ebp-700h] BYREF
  unsigned int v42[64]; // [esp+128h] [ebp-600h] BYREF
  unsigned int v43[64]; // [esp+228h] [ebp-500h] BYREF
  char v44[256]; // [esp+328h] [ebp-400h] BYREF
  unsigned char v45[256]; // [esp+428h] [ebp-300h] BYREF
  char v46[256]; // [esp+528h] [ebp-200h] BYREF
  unsigned int v47[64]; // [esp+628h] [ebp-100h] BYREF

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
      v8 = *(unsigned short *)v4; /*0x5c8af2*/
      v4 += 2; /*0x5c8af5*/
      v6 = (unsigned int *)((char *)v6 + 2); /*0x5c8b04*/
      v9 = v8 - v5 - v34; /*0x5c8b07*/
      v5 = 0; /*0x5c8b09*/
      *((unsigned short *)v6 - 1) = v9; /*0x5c8b0b*/
      --v7; /*0x5c8b14*/
      v34 = (((unsigned char *)&(v9))[2]) & 1; /*0x5c8b15*/
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
  memcpy(v46, v42, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8b68*/
  RotateBitBufferRight(v42, v10, a4); /*0x5c8b7b*/
  v38 = 0; /*0x5c8b87*/
  if ( a3 <= 0 ) /*0x5c8b91*/
    return 1; /*0x5c8dbe*/
  while ( 1 ) /*0x5c8bac*/
  {
    memset(v44, 0, 4 * ((unsigned int)(4 * a4) >> 2)); /*0x5c8bac*/
    v37 = 0; /*0x5c8bb0*/
    *(unsigned int *)v44 = 2; /*0x5c8bbe*/
    v11 = v45; /*0x5c8bce*/
    if ( 2 * a4 ) /*0x5c8bc9*/
    {
      v12 = 2 * a4; /*0x5c8bf7*/
      do /*0x5c8c25*/
      {
        v13 = (char *)(*(uint16_t *)&v11[(char *)v42 - v45] - *(uint16_t *)&v11[v44 - v45]); /*0x5c8c06*/
        v11 += 2; /*0x5c8c12*/
        v14 = v13 - v37; /*0x5c8c15*/
        *((unsigned short *)v11 - 1) = v14; /*0x5c8c17*/
        --v12; /*0x5c8c20*/
        v37 = (((unsigned char *)&(v14))[2]) & 1; /*0x5c8c21*/
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
    if ( *(unsigned int *)v20 >= *v19 ) /*0x5c8cdf*/
    {
      v23 = v20 - (char *)v19; /*0x5c8ce1*/
      v24 = *(unsigned int *)((char *)v19 + v23) <= *v19; /*0x5c8ce3*/
      do /*0x5c8cf7*/
      {
        if ( !v24 ) /*0x5c8ce6*/
          break; /*0x5c8ce6*/
        --v21; /*0x5c8ce8*/
        if ( !--v22 ) /*0x5c8cec*/
          goto LABEL_40; /*0x5c8cec*/
        v24 = *(unsigned int *)((char *)v21 + v23) <= *v21; /*0x5c8cf4*/
      }
      while ( *(unsigned int *)((char *)v21 + v23) >= *v21 ); /*0x5c8cf7*/
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
    if ( *(unsigned int *)v25 >= *v19 ) /*0x5c8d39*/
    {
      v28 = v25 - (char *)v19; /*0x5c8d3d*/
      v29 = *(unsigned int *)v25 <= *v19; /*0x5c8d3f*/
      do /*0x5c8d4f*/
      {
        if ( !v29 ) /*0x5c8d42*/
          break; /*0x5c8d42*/
        --v26; /*0x5c8d44*/
        if ( !--v27 ) /*0x5c8d48*/
          goto LABEL_38; /*0x5c8d48*/
        v29 = *(unsigned int *)((char *)v26 + v28) <= *v26; /*0x5c8d4c*/
      }
      while ( *(unsigned int *)((char *)v26 + v28) >= *v26 ); /*0x5c8d4f*/
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
// 0x5C8E40
namespace gamemd {
char sub_5C8E40(ObjectClass * aP0, int a2, int a3, ObjectClass * aP3, int a5)
{
  int v5; // edi
  unsigned char *v7; // ecx
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
  unsigned int *v29; // edi
  int v30; // edx
  char *v31; // ecx
  uint8_t v33; // [esp+10h] [ebp-114h]
  int v34; // [esp+10h] [ebp-114h]
  bool v35; // [esp+10h] [ebp-114h]
  int v36; // [esp+14h] [ebp-110h]
  char *v37; // [esp+14h] [ebp-110h]
  int v39; // [esp+1Ch] [ebp-108h]
  int v40; // [esp+20h] [ebp-104h] BYREF
  unsigned char v41[256]; // [esp+24h] [ebp-100h] BYREF

  v5 = a5; /*0x5c8e4a*/
  v33 = 0; /*0x5c8e57*/
  v7 = v41; /*0x5c8e5f*/
  if ( 2 * a5 ) /*0x5c8e63*/
  {
    v36 = 2 * a5; /*0x5c8e85*/
    do /*0x5c8ebc*/
    {
      v8 = *(uint16_t *)&v7[aP3 - (unsigned int)v41] - *(uint16_t *)&v7[a3 - (unsigned int)v41]; /*0x5c8e95*/
      v7 += 2; /*0x5c8ea1*/
      v9 = v8 - v33; /*0x5c8ea4*/
      *((unsigned short *)v7 - 1) = v9; /*0x5c8ea6*/
      v33 = (((unsigned char *)&(v9))[2]) & 1; /*0x5c8eaf*/
      --v36; /*0x5c8eb8*/
    }
    while ( v36 ); /*0x5c8ebc*/
  }
  v10 = (char *)(&v41[4 * a5 - 4]); /*0x5c8ec2*/
  v11 = a5; /*0x5c8ec8*/
  v37 = v10; /*0x5c8eca*/
  if ( *(unsigned int *)v10 ) /*0x5c8ebe*/
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
      v12 = *((unsigned int *)v10 - 1); /*0x5c8ed3*/
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
  v40 = (int)&aP0[a5 - 1]; /*0x5c8f17*/
  while ( 1 ) /*0x5c8f1b*/
  {
    if ( v13 >= v19 ) /*0x5c8f1d*/
      v13 = v19; /*0x5c8f1f*/
    memset(aP0, 0, 4 * v5); /*0x5c8f3b*/
    *aP0 = 0; /*0x5c8f48*/
    v20 = v13 / 8 + 1; /*0x5c8f53*/
    (*(void (**)(int, unsigned int *, int))(*(unsigned int *)a2 + 8))(a2, aP0, v20); /*0x5c8f56*/
    v21 = v13 % 8; /*0x5c8f67*/
    v22 = a5; /*0x5c8f71*/
    v23 = (char *)v40; /*0x5c8f7c*/
    *((unsigned char *)aP0 + v20 - 1) &= ~(-1 << v21); /*0x5c8f80*/
    v24 = (unsigned int *)&v41[4 * a5 - 4]; /*0x5c8f84*/
    v25 = a5; /*0x5c8f8a*/
    if ( *(unsigned int *)v23 < *(unsigned int *)v37 ) /*0x5c8f90*/
      break; /*0x5c8f90*/
    v26 = v23 - v37; /*0x5c8f92*/
    v27 = *(unsigned int *)&v37[v26] <= *(unsigned int *)v37; /*0x5c8f94*/
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
  v29 = (unsigned int *)(aP0); /*0x5c8faf*/
  if ( a5 ) /*0x5c8fb1*/
  {
    v30 = a3 - (unsigned int)aP0; /*0x5c8fba*/
    do /*0x5c9008*/
    {
      v24 = (unsigned int *)(*aP0 + *(unsigned int *)((char *)v29 + v30)); /*0x5c8fc5*/
      v31 = (char *)v24 + v35; /*0x5c8fcd*/
      v35 = (unsigned int)v24 < *aP0 || ((*((unsigned char *)&(v24))) = v35) != 0 && !v31; /*0x5c8ffa*/
      *v29 = (unsigned int)(v31); /*0x5c8fff*/
      ++aP0; /*0x5c9001*/
      ++v29; /*0x5c9004*/
      --v22; /*0x5c9007*/
    }
    while ( v22 ); /*0x5c9008*/
  }
  return (char)v24; /*0x5c900a*/
}
}
// 0x5C9020
namespace gamemd {
char ModCryptoExp(char * a1, int edx0)
{
  char *v2; // edi
  int64_t v4; // rax
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  uint16_t v10; // bp
  unsigned short *v11; // edi
  int v12; // esi
  char *v13; // ecx
  unsigned short *v14; // esi
  int v15; // edx
  int *v16; // eax
  int v18; // ecx
  uint16_t *v19; // esi
  unsigned int *v20; // eax
  int v21; // ecx
  unsigned int v24[64]; // [esp+14h] [ebp-300h] BYREF
  unsigned int v25[64]; // [esp+114h] [ebp-200h] BYREF
  unsigned int v26[64]; // [esp+214h] [ebp-100h] BYREF

  v2 = a1; /*0x5c902a*/
  (*(((unsigned int *)&(v4)) + 1)) = *(unsigned int *)a1; /*0x5c9032*/
  if ( (*(unsigned int *)a1 & 1) == 0 ) /*0x5c9037*/
    return 0; /*0x5c9045*/
  v6 = *(unsigned int *)&a1[4 * edx0 - 4]; /*0x5c9046*/
  v7 = (int)&a1[4 * edx0 - 4]; /*0x5c904a*/
  v8 = edx0; /*0x5c9050*/
  if ( !v6 ) /*0x5c9052*/
  {
    do /*0x5c905f*/
    {
      if ( !--v8 ) /*0x5c9055*/
        break; /*0x5c9055*/
      v9 = *(unsigned int *)(v7 - 4); /*0x5c9057*/
      v7 -= 4; /*0x5c905a*/
    }
    while ( !v9 ); /*0x5c905f*/
  }
  if ( v8 > 1 || (*(((unsigned int *)&(v4)) + 1)) > (uint16_t)dword_82FCE0 ) /*0x5c9072*/
  {
    LABEL_17:
    v14 = (unsigned short *)(&unk_82E174); /*0x5c90bb*/
    while ( 1 ) /*0x5c90c0*/
    {
      (((unsigned short *)&(v4))[2]) = *v14; /*0x5c90c0*/
      if ( !(uint16_t)ShiftBigIntAndScan((*(((unsigned int *)&(v4)) + 1)), edx0) ) /*0x5c90ce*/
        break; /*0x5c90ce*/
      if ( (unsigned int)++v14 >= 0x82FCE2 ) /*0x5c90e5*/
      {
        memcpy(v24, v2, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c90f9*/
        v15 = edx0; /*0x5c90fd*/
        v16 = (int *)(v24); /*0x5c9102*/
        if ( v24[0]-- == 0 ) /*0x5c910d*/
        {
          do /*0x5c9126*/
          {
            ++v16; /*0x5c9116*/
            if ( !--v15 ) /*0x5c911a*/
              break; /*0x5c911a*/
            v18 = *v16 - 1; /*0x5c911f*/
            *v16 = v18; /*0x5c9121*/
          }
          while ( v18 == -1 ); /*0x5c9126*/
        }
        v19 = (uint16_t *)&unk_82E174; /*0x5c9128*/
        while ( 1 ) /*0x5c9145*/
        {
          memset(v26, 0, 4 * ((unsigned int)(4 * edx0) >> 2)); /*0x5c9145*/
          v26[0] = *v19; /*0x5c916b*/
          ModBigIntExp(v25, v26, (char *)v24, a1, edx0); /*0x5c9172*/
          if ( v25[0] != 1 ) /*0x5c917f*/
            break; /*0x5c917f*/
          v20 = &v24[edx0 + 63]; /*0x5c918c*/
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
  v10 = *(unsigned short *)v2; /*0x5c9074*/
  v11 = &unk_82E174; /*0x5c9077*/
  v12 = 3511; /*0x5c907c*/
  do /*0x5c90a6*/
  {
    v4 = v12; /*0x5c9083*/
    (((unsigned short *)&(v4))[2]) = v11[v12 / 2]; /*0x5c9088*/
    v13 = (char *)&v11[v12 / 2]; /*0x5c908c*/
    if ( (((unsigned short *)&(v4))[2]) <= v10 ) /*0x5c9092*/
    {
      if ( (((unsigned short *)&(v4))[2]) == v10 ) /*0x5c9098*/
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
// 0x5C9AE0
namespace gamemd {
int sub_5C9AE0(const void * a1, const void * a2)
{

  int v2; // eax
  v2 = *(unsigned int *)(*(unsigned int *)a1 + 96); /*0x5c9aec*/
  int v3; // ecx
  v3 = *(unsigned int *)(*(unsigned int *)a2 + 96); /*0x5c9aef*/
  if ( v2 == v3 )
    return 0; /*0x5c9af6*/
  else
    return v2 <= v3 ? 1 : -1;
}
}
// 0x5CD690
namespace gamemd {
unsigned int * E4Recv_5CD690::sub_5CD690(int * a2)
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
  unsigned int *result; // eax
  unsigned int *v20; // edi
  wchar_t *v21; // eax
  int v22; // edx
  unsigned int *v23; // [esp-8h] [ebp-3Ch]
  int v25; // [esp+10h] [ebp-24h]
  unsigned int v26[6]; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+2Ch] [ebp-8h]
  int v28; // [esp+30h] [ebp-4h]
  int v29; // [esp+38h] [ebp+4h]

  if ( a2[2] <= 0 || a2[3] <= 0 ) /*0x5cd6ac*/
  {
    v20 = (unsigned int *)this->q096 + 74); /*0x5cd81e*/
    v21 = (&this->u32_1C)->GetOrEmpty(); /*0x5cd825*/
    result = sub_5D30C0(this->M52, v21, (unsigned int *)this->q096 + 74)); /*0x5cd82e*/
    v22 = this->M8; /*0x5cd836*/
    *v20 = this->M4; /*0x5cd839*/
    this->M60 = v22; /*0x5cd83b*/
  }
  else
  {
    v4 = (int *)this->q096 + 74); /*0x5cd6b2*/
    v23 = (unsigned int *)this->q096 + 74); /*0x5cd6b6*/
    v5 = (&this->u32_1C)->GetOrEmpty(); /*0x5cd6ba*/
    sub_5D30C0(this->M52, v5, v23); /*0x5cd6c3*/
    v6 = this->M52; /*0x5cd6dc*/
    this->M4 += (a2[2] - this->M64) / 2; /*0x5cd6df*/
    v7 = a2[3] % *(unsigned int *)(v6 + 8) / 2 + this->M8; /*0x5cd706*/
    v8 = this->M60; /*0x5cd70d*/
    *v4 += this->M4; /*0x5cd710*/
    this->M8 = v7; /*0x5cd71a*/
    this->M60 = v7 + v8; /*0x5cd71d*/
    ((Rect *)(v26))->Set(0, 0, 0, 0); /*0x5cd720*/
    v9 = *v4; /*0x5cd727*/
    v10 = this->M60; /*0x5cd729*/
    v11 = this->M64; /*0x5cd72c*/
    v27 = v11; /*0x5cd72f*/
    v28 = this->M68; /*0x5cd736*/
    v29 = a2[2]; /*0x5cd73f*/
    if ( a2[2] <= 0 ) /*0x5cd743*/
      goto LABEL_20; /*0x5cd743*/
    v25 = a2[3]; /*0x5cd74e*/
    if ( v25 <= 0 || this->M64 <= 0 || this->M68 <= 0 ) /*0x5cd768*/
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
    v13 = v13; /*0x5cd784*/
    if ( v10 < v13 ) /*0x5cd788*/
    {
      v14 = v10 - v13 + v28; /*0x5cd790*/
      v10 = v13; /*0x5cd792*/
      v28 = v14; /*0x5cd796*/
    }
    if ( v28 < 1 ) /*0x5cd79f*/
      goto LABEL_20; /*0x5cd79f*/
    if ( v9 + v11 > v12 + v29 ) /*0x5cd7ab*/
      v27 = v29 + v12 - v9; /*0x5cd7b5*/
    if ( v27 < 1 ) /*0x5cd7be*/
      goto LABEL_20; /*0x5cd7be*/
    v15 = v28; /*0x5cd7c8*/
    if ( v28 + v10 > v13 + v25 ) /*0x5cd7d3*/
      v15 = v13 + v25 - v10; /*0x5cd7d7*/
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
    result = (unsigned int *)(*(unsigned int *)(v18 + 4) / 2); /*0x5cd80f*/
    this->M4 += result; /*0x5cd813*/
  }
  return result; /*0x5cd80e*/
}
}
// 0x5CD850
namespace gamemd {
MultiplayerGameMode * * WrapWideStringText(const wchar_t ** ecx0, int * a2, int a3)
{
  size_t v3; // esi
  int *v4; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int Char; // eax
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
  DeleteAndZero *p_DeleteAndZero_field_0x04; // ecx
  wchar_t **v23; // eax
  wchar_t **v24; // eax
  wchar_t **v25; // eax
  size_t v26; // [esp-8h] [ebp-4Ch]
  size_t v27; // [esp-8h] [ebp-4Ch]
  size_t v28; // [esp-8h] [ebp-4Ch]
  DeleteAndZero v30; // [esp+10h] [ebp-34h] BYREF
  String v31; // [esp+1Ch] [ebp-28h] BYREF
  size_t v32; // [esp+24h] [ebp-20h]
  int v33; // [esp+28h] [ebp-1Ch]
  DeleteAndZero v34; // [esp+2Ch] [ebp-18h] BYREF
  DeleteAndZero v35; // [esp+38h] [ebp-Ch] BYREF
  int v36; // [esp+48h] [ebp+4h]

  v3 = 0; /*0x5cd855*/
  v4 = a2; /*0x5cd858*/
  *(unsigned int *)&v31.ptr_4 = 0; /*0x5cd861*/
  if ( String_Helper((ObjectClass *)ecx0, 0) ) /*0x5cd865*/
    return 0; /*0x5cd865*/
  if ( !v4 ) /*0x5cd874*/
    return 0; /*0x5cd874*/
  v6 = v4[1]; /*0x5cd87a*/
  if ( a3 <= v6 ) /*0x5cd883*/
    return 0; /*0x5cdb7c*/
  v36 = a3 - v6; /*0x5cd891*/
  if ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(0) ) /*0x5cd895*/
  {
    do /*0x5cdac6*/
    {
      v7 = 0; /*0x5cd8a7*/
      v32 = v3; /*0x5cd8ab*/
      if ( v36 <= 0 ) /*0x5cd8af*/
        goto LABEL_12; /*0x5cd8af*/
      while ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) /*0x5cd8d8*/
           && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 10
           && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 64 )
      {
        v8 = *v4; /*0x5cd8da*/
        v26 = v3++; /*0x5cd8df*/
        Char = ((WideString *)((WideString *)ecx0))->GetChar(v26); /*0x5cd8e3*/
        v33 = v8; /*0x5cd8e8*/
        v4 = a2; /*0x5cd8ec*/
        v7 += (*(int (**)(int *, int))(v33 + 4))(a2, Char); /*0x5cd8fa*/
        if ( v7 >= v36 ) /*0x5cd900*/
          goto LABEL_12; /*0x5cd900*/
      }
      if ( v7 >= v36 ) /*0x5cd908*/
      {
        LABEL_12:
        while ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) ) /*0x5cd90d*/
        {
          if ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) == 32 /*0x5cd931*/
            || (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) == 10 )
          {
            break; /*0x5cd931*/
          }
          if ( v3 == v32 ) /*0x5cd937*/
            goto LABEL_18; /*0x5cd937*/
          v10 = *v4; /*0x5cd939*/
          v11 = ((WideString *)((WideString *)ecx0))->GetChar(--v3); /*0x5cd940*/
          v12 = v10; /*0x5cd945*/
          v4 = a2; /*0x5cd947*/
          v7 -= (*(int (**)(int *, int))(v12 + 4))(a2, v11); /*0x5cd953*/
        }
      }
      if ( v3 == v32 ) /*0x5cd964*/
      {
        LABEL_18:
        if ( v7 >= v36 ) /*0x5cd96e*/
          goto LABEL_25; /*0x5cd96e*/
        while ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) /*0x5cd9c7*/
             && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 32
             && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 10
             && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 64
             && (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) != 45 )
        {
          v13 = *v4; /*0x5cd9cd*/
          v27 = v3++; /*0x5cd9d2*/
          v14 = ((WideString *)((WideString *)ecx0))->GetChar(v27); /*0x5cd9d6*/
          v33 = v13; /*0x5cd9db*/
          v4 = a2; /*0x5cd9df*/
          v7 += (*(int (**)(int *, int))(v33 + 4))(a2, v14); /*0x5cd9ed*/
          if ( v7 >= v36 ) /*0x5cd9f3*/
            goto LABEL_25; /*0x5cd9f3*/
        }
        if ( v7 >= v36 ) /*0x5cdae6*/
        {
          LABEL_25:
          v15 = *v4; /*0x5cd9f9*/
          v16 = ((WideString *)((WideString *)ecx0))->GetChar(v3); /*0x5cd9ff*/
          v17 = v15; /*0x5cda04*/
          v4 = a2; /*0x5cda06*/
          v7 -= (*(int (**)(int *, int))(v17 + 4))(a2, v16); /*0x5cda14*/
          WideString::AssignFromPtr((WideString *)&v31, ecx0); /*0x5cda17*/
          ((String *)(&v31))->TruncateTo(v3); /*0x5cda21*/
          WideString::AssignFromPtr((WideString *)&v30.u32_8, ecx0); /*0x5cda2b*/
          ((WideString *)((WideString *)&v30.u32_8))->Erase(0, v3); /*0x5cda37*/
          v18 = ((WideString *)((WideString *)&v35.u32_8))->Assign(asc_830174); /*0x5cda4f*/
          v19 = (/*0x5cda5e*/ (WideString *)&v31)->ConcatAlloc((wchar_t **)&v35.q004, (const wchar_t **)v18);
          v20 = (/*0x5cda65*/ (WideString *)v19)->ConcatAlloc((wchar_t **)&v35, (const wchar_t **)&v30.u32_8);
          WideString::Reassign_Alt((WideString *)ecx0, (const wchar_t **)v20); /*0x5cda6d*/
          (&v35)->Alt(); /*0x5cda76*/
          ((DeleteAndZero *)&v35.q004)->Alt(); /*0x5cda7f*/
          ((DeleteAndZero *)&v35.u32_8)->Alt(); /*0x5cda88*/
          ((DeleteAndZero *)&v30.u32_8)->Alt(); /*0x5cda91*/
          p_DeleteAndZero_field_0x04 = (DeleteAndZero *)&v31; /*0x5cda96*/
        }
        else
        {
          WideString::AssignFromPtr((WideString *)&v30.q004, ecx0); /*0x5cdaf1*/
          ((String *)((String *)&v30.q004))->TruncateTo(++v3); /*0x5cdafc*/
          WideString::AssignFromPtr((WideString *)&v30, ecx0); /*0x5cdb06*/
          ((WideString *)((WideString *)&v30))->Erase(0, v3); /*0x5cdb12*/
          v23 = ((WideString *)((WideString *)&v34.u32_8))->Assign(asc_830174); /*0x5cdb2a*/
          v24 = (/*0x5cdb39*/ (WideString *)&v30.q004)->ConcatAlloc((wchar_t **)&v34.q004, (const wchar_t **)v23);
          v25 = ((WideString *)v24)->ConcatAlloc((wchar_t **)&v34, (const wchar_t **)&v30); /*0x5cdb40*/
          WideString::Reassign_Alt((WideString *)ecx0, (const wchar_t **)v25); /*0x5cdb48*/
          (&v34)->Alt(); /*0x5cdb51*/
          ((DeleteAndZero *)&v34.q004)->Alt(); /*0x5cdb5a*/
          ((DeleteAndZero *)&v34.u32_8)->Alt(); /*0x5cdb63*/
          (&v30)->Alt(); /*0x5cdb6c*/
          p_DeleteAndZero_field_0x04 = (DeleteAndZero *)&v30.q004; /*0x5cdb71*/
        }
        (p_DeleteAndZero_field_0x04)->Alt(); /*0x5cda9a*/
      }
      if ( v7 > *(int *)&v31.ptr_4 ) /*0x5cdaa3*/
        *(unsigned int *)&v31.ptr_4 = v7; /*0x5cdaa5*/
      if ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) ) /*0x5cdaac*/
      {
        v28 = v3++; /*0x5cdaba*/
        String_Helper_7B7660((ObjectClass *)ecx0, 0xAu, v28); /*0x5cdabe*/
      }
    }
    while ( (uint16_t)((WideString *)((WideString *)ecx0))->GetChar(v3) ); /*0x5cdac6*/
  }
  return *(unsigned int *)&v31.ptr_4; /*0x5cdad9*/
}
}
// 0x5CE0C0
namespace gamemd {
int ObjectClass::sub_5CE0C0(int a2, unsigned int * a3)
{

  int nextArrayIndex; // edi
  int v5; // eax
  int fallRate; // edi
  int v7; // eax
  char *vtable1; // ebx
  char *v10; // ebp
  int i; // edi
  int v12; // edx
  void *vtable2; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  char *NeedsSaveOrLink; // [esp+Ch] [ebp-20h]
  size_t v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+24h] [ebp-8h]
  int v19; // [esp+30h] [ebp+4h]

  nextArrayIndex = this->nextArrayIndex; /*0x5ce0cb*/
  if ( this->nextArrayIndex != -1 ) /*0x5ce0d1*/
  {
    v5 = Timer::GetTicks() - this->uniqueId; /*0x5ce0db*/
    if ( v5 >= nextArrayIndex ) /*0x5ce0e0*/
      goto LABEL_5; /*0x5ce0e0*/
    nextArrayIndex -= v5; /*0x5ce0e2*/
  }
  if ( nextArrayIndex ) /*0x5ce0e8*/
  {
    LABEL_24:
    *a3 = 0; /*0x5ce28a*/
    a3[1] = 0; /*0x5ce290*/
    a3[2] = 0; /*0x5ce293*/
    a3[3] = 0; /*0x5ce296*/
    return 0; /*0x5ce296*/
  }
  LABEL_5:
  if ( LOBYTE(this->vtable4) != 1 ) /*0x5ce0f6*/
    goto LABEL_24; /*0x5ce0f6*/
  fallRate = this->fallRate; /*0x5ce0fc*/
  this->uniqueId = Timer::GetTicks(); /*0x5ce108*/
  this->abstractFlags = v18; /*0x5ce10f*/
  this->nextArrayIndex = fallRate; /*0x5ce112*/
  if ( this->NeedsSaveOrLink >= WideString::Length((const wchar_t **)&this->NeedsSaveOrLink) ) /*0x5ce122*/
  {
    LOWORD(v7) = Math::RoundToInt(*(float *)&stru_A8EB00.ObjectTypeClass[38] * 64.0); /*0x5ce130*/
    sub_406670(aBleep1, v7); /*0x5ce13c*/
    return 1; /*0x5ce149*/
  }
  if ( LOBYTE(this->nextObject) == 1 && this->customSound_controller[3] > 0 && this->customSound_controller[4] > 0 ) /*0x5ce15f*/
    (*(void (**)(int, int *, DSurface *, int *, unsigned int, int))(*(unsigned int *)a2 + 8))( /*0x5ce173*/
      a2,
      &this->customSound_controller[1],
      DSurface_Alternate,
      &this->customSound_controller[1],
      0,
      1);
  vtable1 = (char *)this->vtable2; /*0x5ce179*/
  if ( BYTE1(this->ambientSoundController[3]) ) /*0x5ce176*/
    vtable1 += this->ambientSoundController[4]; /*0x5ce180*/
  NeedsSaveOrLink = (char *)this->NeedsSaveOrLink; /*0x5ce18b*/
  v10 = NeedsSaveOrLink + 1; /*0x5ce18c*/
  for ( i = WideString::GetChar((const wchar_t **)&this->NeedsSaveOrLink, (size_t)NeedsSaveOrLink); /*0x5ce198*/
    (unsigned short)i != 10;
    i = WideString::GetChar((const wchar_t **)&this->?, v17) )
  {
    if ( !(unsigned short)i ) /*0x5ce19d*/
      break; /*0x5ce19d*/
    (*((void (**)(TagClass *, int, int, char *, int, int, unsigned int))this->attachedTag->AbstractClass + 4))( /*0x5ce1b5*/
      this->attachedTag,
      a2,
      i,
      vtable1,
      this->customSound_controller[0],
      this->occupant,
      0);
    vtable1 += (*((int (**)(TagClass *, int))this->attachedTag->AbstractClass + 1))(this->attachedTag, i); /*0x5ce1c1*/
    v17 = (size_t)v10++; /*0x5ce1c5*/
  }
  v12 = this->ambientSoundController[1]; /*0x5ce1e0*/
  vtable2 = this->attachedTag->?; /*0x5ce1e3*/
  v19 = this->customSound_controller[0]; /*0x5ce1e6*/
  *a3 = this->attachedBomb; /*0x5ce1ee*/
  a3[1] = v19; /*0x5ce1f4*/
  a3[2] = v12; /*0x5ce1f7*/
  a3[3] = vtable2; /*0x5ce1fa*/
  if ( this->occupant == 2 ) /*0x5ce203*/
  {
    this->customSound_controller[1] = 0; /*0x5ce20b*/
    this->customSound_controller[2] = 0; /*0x5ce20e*/
    this->customSound_controller[3] = 0; /*0x5ce211*/
    this->customSound_controller[4] = 0; /*0x5ce214*/
    this->NeedsSaveOrLink = v10; /*0x5ce217*/
    if ( (unsigned short)i == 10 ) /*0x5ce21a*/
    {
      LOWORD(v14) = Math::RoundToInt(*(float *)&stru_A8EB00.ObjectTypeClass[38] * 64.0); /*0x5ce228*/
      sub_406670(aBleep1, v14); /*0x5ce234*/
      this->customSound_controller[0] += (int)this->attachedTag->?; /*0x5ce244*/
    }
  }
  else
  {
    this->customSound_controller[1] = *a3; /*0x5ce24e*/
    this->customSound_controller[2] = a3[1]; /*0x5ce254*/
    this->customSound_controller[3] = a3[2]; /*0x5ce25a*/
    this->customSound_controller[4] = a3[3]; /*0x5ce260*/
  }
  if ( LOBYTE(this->nextObject) == 1 ) /*0x5ce26c*/
  {
    v15 = this->occupant + 1; /*0x5ce272*/
    this->occupant = v15; /*0x5ce274*/
    if ( v15 > 2 ) /*0x5ce27a*/
    {
      this->occupant = 0; /*0x5ce27c*/
      return 0; /*0x5ce287*/
    }
  }
  return 0; /*0x5ce141*/

}
}
// 0x5C0330
namespace gamemd {
void nullsub_176()
{
  ; /*0x5c0330*/
}
} // namespace gamemd

// 0x5C0540
namespace gamemd {
int BinkMovieHandle::_vt03(unsigned char a2)
{
  return BinkMovie::Pause(this->height, a2); /*0x5c054d*/
}
} // namespace gamemd

// 0x5C0630
namespace gamemd {
void E4Recv_5C0630::sub_5C0630()
{
  *this = (MovieHandle)&vt_MovieHandle; /*0x5c0630*/
}
} // namespace gamemd

// 0x5C0E10
namespace gamemd {
void E4Recv_5C0E10::sub_5C0E10()
{
  this->m_0 = (int)&vt_MultiplayerBattle; /*0x5c0e10*/
  MultiplayerGameMode::Dtor(); /*0x5c0e16*/
}
} // namespace gamemd

// 0x5C10F0
namespace gamemd {
void sub_5C10F0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5c10fc*/
  dbl_ABF420 = Math::Sqrt(v0 + v0); /*0x5c110e*/
}
} // namespace gamemd

// 0x5C1120
namespace gamemd {
void sub_5C1120()
{
  dbl_ABF490 = dbl_ABF420 / 60.0; /*0x5c112c*/
}
} // namespace gamemd

// 0x5C1140
namespace gamemd {
void sub_5C1140()
{
  dbl_ABF458 = 1.0 / dbl_ABF490; /*0x5c114c*/
}
} // namespace gamemd

// 0x5C1160
namespace gamemd {
void sub_5C1160()
{
  dbl_ABF450 = 0.0174532925199433 * 45.0; /*0x5c116c*/
}
} // namespace gamemd

// 0x5C1180
namespace gamemd {
void sub_5C1180()
{
  dbl_ABF428 = 0.0174532925199433 * 60.0; /*0x5c118c*/
}
} // namespace gamemd

// 0x5C11A0
namespace gamemd {
void sub_5C11A0()
{
  dbl_ABF400 = 0.0174532925199433 * 90.0; /*0x5c11ac*/
}
} // namespace gamemd

// 0x5C11C0
namespace gamemd {
long long sub_5C11C0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABF400 - dbl_ABF428); /*0x5c11d2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABF420 * 0.5); /*0x5c11e6*/
  dword_ABF498 = result; /*0x5c11eb*/
  return result; /*0x5c11f0*/
}
} // namespace gamemd

// 0x5C1200
namespace gamemd {
void sub_5C1200()
{
  dbl_ABF430 = Math::ArcTan((double)dword_ABF498 * 0.00390625); /*0x5c1217*/
}
} // namespace gamemd

// 0x5C1230
namespace gamemd {
void sub_5C1230()
{
  dbl_ABF448 = Math::ArcTan((double)(2 * dword_ABF498) / dbl_ABF420); /*0x5c1252*/
}
} // namespace gamemd

// 0x5C1260
namespace gamemd {
long long sub_5C1260()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABF498) + 0.5); /*0x5c127b*/
  dword_ABF48C = result; /*0x5c1280*/
  return result; /*0x5c1286*/
}
} // namespace gamemd

// 0x5C1290
namespace gamemd {
int sub_5C1290()
{
  word_ABF418 = 0; /*0x5c1292*/
  word_ABF41A = 0; /*0x5c1298*/
  return 0; /*0x5c129e*/
}
} // namespace gamemd

// 0x5C12A0
namespace gamemd {
int sub_5C12A0()
{
  dword_ABF438 = 0; /*0x5c12a2*/
  dword_ABF43C = 0; /*0x5c12a7*/
  dword_ABF440 = 0; /*0x5c12ac*/
  return 0; /*0x5c12b1*/
}
} // namespace gamemd

// 0x5C12C0
namespace gamemd {
int sub_5C12C0()
{
  dword_ABF488 = 0; /*0x5c12c5*/
  dword_ABF480 = 128; /*0x5c12cf*/
  dword_ABF484 = 128; /*0x5c12d4*/
  return 128; /*0x5c12d9*/
}
} // namespace gamemd

// 0x5C12E0
namespace gamemd {
int sub_5C12E0()
{
  dword_ABF408 = 0; /*0x5c12e2*/
  dword_ABF40C = 0; /*0x5c12e7*/
  dword_ABF410 = 0; /*0x5c12ec*/
  dword_ABF414 = 0; /*0x5c12f1*/
  return 0; /*0x5c12f6*/
}
} // namespace gamemd

// 0x5C36F0
namespace gamemd {
int MPCooperative::j__do_always_noconv_codecvt_base_std__MBE_NXZ_17()
{
  return ScenarioClass::processAI();
}
} // namespace gamemd

// 0x5C5AD0
namespace gamemd {
int sub_5C5AD0()
{
  dword_ABF4A8 = 0; /*0x5c5ad2*/
  dword_ABF4AC = 0; /*0x5c5ad7*/
  dword_ABF4B0 = 0; /*0x5c5adc*/
  dword_ABF4B4 = 0; /*0x5c5ae1*/
  return 0; /*0x5c5ae6*/
}
} // namespace gamemd

// 0x5C5AF0
namespace gamemd {
void sub_5C5AF0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5c5afc*/
  dbl_ABF4C0 = Math::Sqrt(v0 + v0); /*0x5c5b0e*/
}
} // namespace gamemd

// 0x5C5B20
namespace gamemd {
void sub_5C5B20()
{
  dbl_ABF510 = dbl_ABF4C0 / 60.0; /*0x5c5b2c*/
}
} // namespace gamemd

// 0x5C5B40
namespace gamemd {
void sub_5C5B40()
{
  dbl_ABF4F8 = 1.0 / dbl_ABF510; /*0x5c5b4c*/
}
} // namespace gamemd

// 0x5C5B60
namespace gamemd {
void sub_5C5B60()
{
  dbl_ABF4F0 = 0.0174532925199433 * 45.0; /*0x5c5b6c*/
}
} // namespace gamemd

// 0x5C5B80
namespace gamemd {
void sub_5C5B80()
{
  dbl_ABF4C8 = 0.0174532925199433 * 60.0; /*0x5c5b8c*/
}
} // namespace gamemd

// 0x5C5BA0
namespace gamemd {
void sub_5C5BA0()
{
  dbl_ABF4A0 = 0.0174532925199433 * 90.0; /*0x5c5bac*/
}
} // namespace gamemd

// 0x5C5BC0
namespace gamemd {
long long sub_5C5BC0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABF4A0 - dbl_ABF4C8); /*0x5c5bd2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABF4C0 * 0.5); /*0x5c5be6*/
  dword_ABF518 = result; /*0x5c5beb*/
  return result; /*0x5c5bf0*/
}
} // namespace gamemd

// 0x5C5C00
namespace gamemd {
void sub_5C5C00()
{
  dbl_ABF4D0 = Math::ArcTan((double)dword_ABF518 * 0.00390625); /*0x5c5c17*/
}
} // namespace gamemd

// 0x5C5C30
namespace gamemd {
void sub_5C5C30()
{
  dbl_ABF4E8 = Math::ArcTan((double)(2 * dword_ABF518) / dbl_ABF4C0); /*0x5c5c52*/
}
} // namespace gamemd

// 0x5C5C60
namespace gamemd {
long long sub_5C5C60()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABF518) + 0.5); /*0x5c5c7b*/
  dword_ABF50C = result; /*0x5c5c80*/
  return result; /*0x5c5c86*/
}
} // namespace gamemd

// 0x5C5C90
namespace gamemd {
int sub_5C5C90()
{
  word_ABF4B8 = 0; /*0x5c5c92*/
  word_ABF4BA = 0; /*0x5c5c98*/
  return 0; /*0x5c5c9e*/
}
} // namespace gamemd

// 0x5C5CA0
namespace gamemd {
int sub_5C5CA0()
{
  dword_ABF4D8 = 0; /*0x5c5ca2*/
  dword_ABF4DC = 0; /*0x5c5ca7*/
  dword_ABF4E0 = 0; /*0x5c5cac*/
  return 0; /*0x5c5cb1*/
}
} // namespace gamemd

// 0x5C5CC0
namespace gamemd {
int sub_5C5CC0()
{
  dword_ABF508 = 0; /*0x5c5cc5*/
  dword_ABF500 = 128; /*0x5c5ccf*/
  dword_ABF504 = 128; /*0x5c5cd4*/
  return 128; /*0x5c5cd9*/
}
} // namespace gamemd

// 0x5C5D20
namespace gamemd {
void E4Recv_5C5D20::sub_5C5D20()
{
  this->m_0 = (int)&vt_FreeForAll; /*0x5c5d20*/
  MultiplayerGameMode::Dtor(); /*0x5c5d26*/
}
} // namespace gamemd

// 0x5C5E70
namespace gamemd {
int sub_5C5E70()
{
  dword_ABF528 = 0; /*0x5c5e72*/
  dword_ABF52C = 0; /*0x5c5e77*/
  dword_ABF530 = 0; /*0x5c5e7c*/
  dword_ABF534 = 0; /*0x5c5e81*/
  return 0; /*0x5c5e86*/
}
} // namespace gamemd

// 0x5C5E90
namespace gamemd {
void sub_5C5E90()
{

  __asm /*0x5c5e90*/
  {
    fld ds:dbl_7E1710
    fld ds:dbl_7E1708
  }
  _CIpow(a2, a1); /*0x5c5e9c*/
  __asm { fadd st, st } /*0x5c5ea1*/
  __asm { fstp [esp+8+var_8]; double }
  double v2; // [esp+0h] [ebp-8h]
  Math::Sqrt(v2); /*0x5c5ea9*/
  __asm { fstp dbl_ABF540 } /*0x5c5eae*/
}
} // namespace gamemd

// 0x5C5EC0
namespace gamemd {
void sub_5C5EC0()
{
  dbl_ABF590 = dbl_ABF540 / 60.0; /*0x5c5ecc*/
}
} // namespace gamemd

// 0x5C5EE0
namespace gamemd {
void sub_5C5EE0()
{
  dbl_ABF578 = 1.0 / dbl_ABF590; /*0x5c5eec*/
}
} // namespace gamemd

// 0x5C5F00
namespace gamemd {
void sub_5C5F00()
{
  dbl_ABF570 = 0.0174532925199433 * 45.0; /*0x5c5f0c*/
}
} // namespace gamemd

// 0x5C5F20
namespace gamemd {
void sub_5C5F20()
{
  dbl_ABF548 = 0.0174532925199433 * 60.0; /*0x5c5f2c*/
}
} // namespace gamemd

// 0x5C5F40
namespace gamemd {
void sub_5C5F40()
{
  dbl_ABF520 = 0.0174532925199433 * 90.0; /*0x5c5f4c*/
}
} // namespace gamemd

// 0x5C5F60
namespace gamemd {
long long sub_5C5F60()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABF520 - dbl_ABF548); /*0x5c5f72*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABF540 * 0.5); /*0x5c5f86*/
  dword_ABF598 = result; /*0x5c5f8b*/
  return result; /*0x5c5f90*/
}
} // namespace gamemd

// 0x5C5FA0
namespace gamemd {
void sub_5C5FA0()
{

  __asm { fild dword_ABF598 } /*0x5c5fa0*/
  __asm
  {
    fmul ds:dbl_7E1740
    fstp [esp+8+var_8]; double
  }
  double v0; // [esp+0h] [ebp-8h]
  Math::ArcTan(v0); /*0x5c5fb2*/
  __asm { fstp dbl_ABF550 } /*0x5c5fb7*/
}
} // namespace gamemd

// 0x5C5FD0
namespace gamemd {
void sub_5C5FD0()
{
  dbl_ABF568 = Math::ArcTan((double)(2 * dword_ABF598) / dbl_ABF540); /*0x5c5ff2*/
}
} // namespace gamemd

// 0x5C6000
namespace gamemd {
long long sub_5C6000()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABF598) + 0.5); /*0x5c601b*/
  dword_ABF58C = result; /*0x5c6020*/
  return result; /*0x5c6026*/
}
} // namespace gamemd

// 0x5C6030
namespace gamemd {
int sub_5C6030()
{
  word_ABF538 = 0; /*0x5c6032*/
  word_ABF53A = 0; /*0x5c6038*/
  return 0; /*0x5c603e*/
}
} // namespace gamemd

// 0x5C6040
namespace gamemd {
int sub_5C6040()
{
  dword_ABF558 = 0; /*0x5c6042*/
  dword_ABF55C = 0; /*0x5c6047*/
  dword_ABF560 = 0; /*0x5c604c*/
  return 0; /*0x5c6051*/
}
} // namespace gamemd

// 0x5C6060
namespace gamemd {
int sub_5C6060()
{
  dword_ABF588 = 0; /*0x5c6065*/
  dword_ABF580 = 128; /*0x5c606f*/
  dword_ABF584 = 128; /*0x5c6074*/
  return 128; /*0x5c6079*/
}
} // namespace gamemd

// 0x5C6080
namespace gamemd {
int sub_5C6080(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{

  int result; // eax
  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x5c6099*/
  if ( !result ) /*0x5c60a0*/
  {
    if ( a2 == 273 ) /*0x5c60a8*/
      *(unsigned int *)GetWindowLongA(hWnd, 8) = (uint16_t)a3; /*0x5c60b9*/
    return 0; /*0x5c60bb*/
  }
  return result; /*0x5c60bd*/
}
} // namespace gamemd

// 0x5C6190
namespace gamemd {
void E4Recv_5C6190::sub_5C6190()
{
  this->MultiplayerManBattle_field_00 = (int)&vt_MultiplayerManBattle; /*0x5c6190*/
  MultiplayerGameMode::Dtor(); /*0x5c6196*/
}
} // namespace gamemd

// 0x5C6230
namespace gamemd {
int sub_5C6230(unsigned int a1, unsigned char * a2)
{
  int result; // eax

  if ( a1 > 0x7F ) /*0x5c623a*/
  {
    char v5 = 4; // al /*0x5c6247*/
    int i; // ecx
    for ( i = 24; i != -8; i -= 8 ) /*0x5c624c*/
    {
      if ( a1 >> i ) /*0x5c6253*/
        break; /*0x5c6257*/
      --v5; /*0x5c625c*/
    }
    int v7 = 4; // esi /*0x5c6264*/
    *a2 = v5 | 0x80; /*0x5c6269*/
    result = 1; /*0x5c626b*/
    int j; // ecx
    for ( j = 24; j != -8; j -= 8 ) /*0x5c6270*/
    {
      if ( a1 >> j ) /*0x5c6277*/
        break; /*0x5c627b*/
      --v7; /*0x5c6280*/
    }
    if ( v7 ) /*0x5c6288*/
    {
      int v9 = 8 * v7 - 8; // ecx /*0x5c628a*/
      do /*0x5c629e*/
      {
        unsigned int v10 = a1 >> v9; // ebx /*0x5c6293*/
        ++result; /*0x5c6295*/
        v9 -= 8; /*0x5c6296*/
        --v7; /*0x5c6299*/
        a2[result - 1] = v10; /*0x5c629a*/
      }
      while ( v7 ); /*0x5c629e*/
    }
  }
  else
  {
    *a2 = a1; /*0x5c623c*/
    return 1; /*0x5c6240*/
  }
  return result; /*0x5c623e*/
}
} // namespace gamemd

// 0x5C62B0
namespace gamemd {
int VarInt_Encode(int a1, unsigned char * a2, int a3)
{
  int v5; // edx

  unsigned int v4; // eax
  v4 = EncodeVarInt_Helper(a3); /*0x5c62c7*/
  *a2 = 2; /*0x5c62cf*/
  if ( v4 > 0x7F ) /*0x5c62d3*/
  {
    char v6 = 4; // dl /*0x5c62df*/
    int i; // ecx
    for ( i = 24; i != -8; i -= 8 ) /*0x5c62e4*/
    {
      if ( v4 >> i ) /*0x5c62eb*/
        break; /*0x5c62ef*/
      --v6; /*0x5c62f4*/
    }
    int v8 = 4; // edi /*0x5c62fd*/
    a2[1] = v6 | 0x80; /*0x5c6302*/
    v5 = 1; /*0x5c6305*/
    int j; // ecx
    for ( j = 24; j != -8; j -= 8 ) /*0x5c630a*/
    {
      if ( v4 >> j ) /*0x5c6311*/
        break; /*0x5c6315*/
      --v8; /*0x5c631a*/
    }
    if ( v8 ) /*0x5c6322*/
    {
      int v10 = 8 * v8 - 8; // esi /*0x5c6324*/
      do /*0x5c6339*/
      {
        unsigned int v11 = v4 >> v10; // ebx /*0x5c632f*/
        ++v5; /*0x5c6331*/
        v10 -= 8; /*0x5c6332*/
        --v8; /*0x5c6335*/
        a2[v5] = v11; /*0x5c6336*/
      }
      while ( v8 ); /*0x5c6339*/
    }
  }
  else
  {
    a2[1] = v4; /*0x5c62d5*/
    v5 = 1; /*0x5c62d8*/
  }
  unsigned char v13[260]; // [esp+10h] [ebp-104h] BYREF
  memcpy(&a2[v5 + 1], v13, v4); /*0x5c634a*/
  return v4 + v5 + 1; /*0x5c6357*/
}
} // namespace gamemd

// 0x5C6500
namespace gamemd {
char sub_5C6500(int a1, char * a2, int a3, int a4)
{

  int v4 = 4 * a4 - a3; // esi /*0x5c651c*/
  char result; // al
  result = -(*a2 < 0); /*0x5c651e*/
  char *v6; // ecx
  v6 = (char *)(4 * a4 + a1); /*0x5c6523*/
  if ( v4 > 0 ) /*0x5c6527*/
  {
    do /*0x5c652d*/
    {
      --v6; /*0x5c6529*/
      --v4; /*0x5c652a*/
      *v6 = result; /*0x5c652b*/
    }
    while ( v4 ); /*0x5c652d*/
  }
  if ( a3 > 0 ) /*0x5c6531*/
  {
    int v7 = a3; // esi /*0x5c6533*/
    do /*0x5c653c*/
    {
      result = *a2; /*0x5c6535*/
      --v6; /*0x5c6537*/
      ++a2; /*0x5c6538*/
      --v7; /*0x5c6539*/
      *v6 = result; /*0x5c653a*/
    }
    while ( v7 ); /*0x5c653c*/
  }
  return result; /*0x5c653e*/
}
} // namespace gamemd

// 0x5C6550
namespace gamemd {
char sub_5C6550(int a1, unsigned char * a2, int a3, int a4)
{

  unsigned char *v4; // ecx
  v4 = (unsigned char *)(4 * a4 + a1); /*0x5c6563*/
  int v5 = 4 * a4 - a3; // eax /*0x5c6565*/
  if ( v5 > 0 ) /*0x5c6569*/
  {
    do /*0x5c6570*/
    {
      --v4; /*0x5c656b*/
      --v5; /*0x5c656c*/
      *v4 = 0; /*0x5c656d*/
    }
    while ( v5 ); /*0x5c6570*/
  }
  if ( a3 > 0 ) /*0x5c6574*/
  {
    int v6 = a3; // esi /*0x5c6576*/
    do /*0x5c657f*/
    {
      (*((unsigned char *)&(v5))) = *a2; /*0x5c6578*/
      --v4; /*0x5c657a*/
      ++a2; /*0x5c657b*/
      --v6; /*0x5c657c*/
      *v4 = v5; /*0x5c657d*/
    }
    while ( v6 ); /*0x5c657f*/
  }
  return v5; /*0x5c6581*/
}
} // namespace gamemd

// 0x5C6940
namespace gamemd {
int InitArrayWithValue(unsigned int * a0, int a2, AbstractClass * aP2)
{
  memset(a0, 0, 4 * aP2); /*0x5c694c*/
  *a0 = a2; /*0x5c694e*/
  return 0; /*0x5c6950*/
}
} // namespace gamemd

// 0x5C69E0
namespace gamemd {
int CompareBigIntLE(int a1, int a2, int a3)
{

  int v3 = a3; // edi /*0x5c69e2*/
  unsigned int v4; // eax
  v4 = *(unsigned int *)(a1 + 4 * a3 - 4); /*0x5c69e6*/
  unsigned int *v5; // esi
  v5 = (unsigned int *)(a1 + 4 * a3 - 4); /*0x5c69ea*/
  unsigned int v6; // ecx
  v6 = *(unsigned int *)(a2 + 4 * a3 - 4); /*0x5c69ee*/
  unsigned int *v7; // edx
  v7 = (unsigned int *)(a2 + 4 * a3 - 4); /*0x5c69f2*/
  bool v8; // cc
  v8 = v4 <= v6; /*0x5c69f6*/
  if ( v4 < v6 ) /*0x5c69f8*/
    return -1; /*0x5c6a0d*/
  while ( 1 ) /*0x5c69fa*/
  {
    if ( !v8 ) /*0x5c69fa*/
      return 1; /*0x5c6a1c*/
    --v5; /*0x5c69fc*/
    --v7; /*0x5c69ff*/
    if ( !--v3 ) /*0x5c6a03*/
      break; /*0x5c6a03*/
    v8 = *v5 <= *v7; /*0x5c6a09*/
    if ( *v5 < *v7 ) /*0x5c6a0b*/
      return -1; /*0x5c6a0b*/
  }
  return 0; /*0x5c6a0d*/
}
} // namespace gamemd

// 0x5C6AA0
namespace gamemd {
bool sub_5C6AA0(unsigned int * a1, unsigned int * a2, int a3, bool a4, int a5)
{

  if ( !a5 ) /*0x5c6aaa*/
    return a4; /*0x5c6af4*/
  int v6 = a5; // ebp /*0x5c6ab2*/
  bool result = a4; // al /*0x5c6ab5*/
  do /*0x5c6aeb*/
  {
    unsigned int v8 = *a2 + a3; // ebx /*0x5c6ac0*/
    unsigned int v9 = v8 + a4; // esi /*0x5c6ac8*/
    result = v8 < *a2 || result && !v9; /*0x5c6ada*/
    *a1 = v9; /*0x5c6adc*/
    a3 = 0; /*0x5c6ade*/
    ++a2; /*0x5c6ae0*/
    ++a1; /*0x5c6ae3*/
    --v6; /*0x5c6ae6*/
    a4 = result; /*0x5c6ae7*/
  }
  while ( v6 ); /*0x5c6aeb*/
  return result; /*0x5c6af0*/
}
} // namespace gamemd

// 0x5C6B60
namespace gamemd {
unsigned char DecodeAudioSampleWord(int a1, unsigned short * a2, unsigned short a3, unsigned char a4, int a5)
{
  uint8_t result; // al

  if ( !(2 * a5) ) /*0x5c6b67*/
    return a4; /*0x5c6bac*/
  int v6 = 2 * a5; // edi /*0x5c6b73*/
  do /*0x5c6ba5*/
  {
    uint16_t v7; // ax
    v7 = *a2++; /*0x5c6b7e*/
    a1 += 2; /*0x5c6b90*/
    int v8 = v7 - a3 - a4; // eax /*0x5c6b93*/
    a3 = 0; /*0x5c6b95*/
    *(unsigned short *)(a1 - 2) = v8; /*0x5c6b97*/
    result = (((unsigned char *)&(v8))[2]) & 1; /*0x5c6b9e*/
    --v6; /*0x5c6ba0*/
    a4 = (((unsigned char *)&(v8))[2]) & 1; /*0x5c6ba1*/
  }
  while ( v6 ); /*0x5c6ba5*/
  return result; /*0x5c6ba8*/
}
} // namespace gamemd

// 0x5C6D90
namespace gamemd {
int sub_5C6D90(int a1, unsigned short * a2, short a3, int a4)
{

  unsigned int v4 = 0; // esi /*0x5c6d97*/
  if ( 2 * a4 <= 0 ) /*0x5c6d9b*/
    return 0; /*0x5c6dca*/
  int v5; // ecx
  v5 = a1 - (unsigned int)a2; /*0x5c6da4*/
  int v6 = 2 * a4; // edi /*0x5c6da6*/
  do /*0x5c6dc0*/
  {
    uint16_t v7; // ax
    v7 = *a2++; /*0x5c6daa*/
    unsigned int v8 = v4 + a3 * v7; // eax /*0x5c6db3*/
    *(uint16_t *)((char *)a2 + v5 - 2) = v8; /*0x5c6db5*/
    --v6; /*0x5c6dbd*/
    v4 = (*(((unsigned short *)&(v8)) + 1)); /*0x5c6dbe*/
  }
  while ( v6 ); /*0x5c6dc0*/
  return 0; /*0x5c6dc6*/
}
} // namespace gamemd

// 0x5C7E00
namespace gamemd {
int sub_5C7E00(unsigned int * a1, unsigned short * a2, unsigned short * a3, int a4)
{

  uint16_t *v4 = a3; // ebp /*0x5c7e1e*/
  memset(a1, 0, 4 * ((unsigned int)(8 * a4) >> 2)); /*0x5c7e25*/
  int result = 2 * a4; // eax /*0x5c7e2e*/
  *a1 = 0; /*0x5c7e31*/
  int v14; // [esp+14h] [ebp-8h]
  v14 = 2 * a4; /*0x5c7e39*/
  if ( 2 * a4 > 0 ) /*0x5c7e3d*/
  {
    char *v6; // edx
    v6 = (char *)((char *)a1 - (char *)a3); /*0x5c7e3f*/
    int v16; // [esp+20h] [ebp+4h]
    v16 = 2 * a4; /*0x5c7e41*/
    char *v15; // [esp+18h] [ebp-4h]
    v15 = v6; /*0x5c7e45*/
    do /*0x5c7ea5*/
    {
      uint16_t v7 = *v4; // bx /*0x5c7e49*/
      uint16_t *v8 = a2; // edi /*0x5c7e4d*/
      unsigned short *v9; // ecx
      v9 = (uint16_t *)((char *)v4++ + (unsigned int)v6); /*0x5c7e51*/
      unsigned int v10 = 0; // esi /*0x5c7e57*/
      if ( result > 0 ) /*0x5c7e5b*/
      {
        int v17; // [esp+24h] [ebp+8h]
        v17 = result; /*0x5c7e63*/
        do /*0x5c7e8f*/
        {
          uint16_t v11; // ax
          v11 = *v8++; /*0x5c7e6b*/
          unsigned int v12; // eax
          v12 = v10 + (uint16_t)*v9 + v7 * v11; /*0x5c7e79*/
          *v9++ = v12; /*0x5c7e7b*/
          v10 = (*(((unsigned short *)&(v12)) + 1)); /*0x5c7e84*/
          --v17; /*0x5c7e8b*/
        }
        while ( v17 ); /*0x5c7e8f*/
        result = v14; /*0x5c7e91*/
        v6 = v15; /*0x5c7e95*/
      }
      *v9 += v10; /*0x5c7e99*/
      --v16; /*0x5c7ea1*/
    }
    while ( v16 ); /*0x5c7ea5*/
  }
  return result; /*0x5c7ea7*/
}
} // namespace gamemd

// 0x5C8470
namespace gamemd {
unsigned int E4Recv_5C8470::sub_5C8470()
{

  unsigned int result; // eax
  result = ((((((*((unsigned short *)&(g_MissionQueueFrame.localVariables[711]))) * (unsigned int)(uint16_t)~(this->u16_-4)) >> 1) /*0x5c84f0*/
            + (((((*((unsigned short *)&(g_MissionQueueFrame.localVariables[780])))
            * ((unsigned int)(uint16_t)~*((unsigned short *)this - 2) + 1)) >> 1)
            + (((uint16_t)~*((unsigned short *)this - 1)
            * (unsigned int)(*((unsigned short *)&(g_MissionQueueFrame.localVariables[711])))
            + 0x10000) >> 1)
            + 1) >> 16)
            + (((uint16_t)~*((unsigned short *)this - 1) * (unsigned int)(*((unsigned short *)&(g_MissionQueueFrame.localVariables[780])))) >> 1)
            + 1) >> 14)
            + 2 * (*((unsigned short *)&(g_MissionQueueFrame.localVariables[780]))) * (uint16_t)~(*((unsigned short *)&(this->vfptr)))) >> (*((signed char *)&(g_MissionQueueFrame.localVariables[912])));
  if ( result >= 0xFFFF ) /*0x5c84f7*/
    return 0xFFFF; /*0x5c84f9*/
  return result; /*0x5c84ea*/
}
} // namespace gamemd

// 0x5C8930
namespace gamemd {
char sub_5C8930(int a1, int a2)
{

  unsigned short *v4 = &unk_82E174; // esi /*0x5c893d*/
  unsigned int v6[64]; // [esp+Ch] [ebp-100h] BYREF
  while ( ShiftBigIntAndScan(v6, a1, *v4, a2) ) /*0x5c8955*/
  {
    if ( (unsigned int)++v4 >= 0x82FCE2 ) /*0x5c8960*/
      return 1; /*0x5c896d*/
  }
  return 0; /*0x5c8962*/
}
} // namespace gamemd

// 0x5C91D0
namespace gamemd {
int sub_5C91D0()
{
  dword_ABF8E0 = 0; /*0x5c91d2*/
  dword_ABF8E4 = 0; /*0x5c91d7*/
  dword_ABF8E8 = 0; /*0x5c91dc*/
  dword_ABF8EC = 0; /*0x5c91e1*/
  return 0; /*0x5c91e6*/
}
} // namespace gamemd

// 0x5C91F0
namespace gamemd {
void sub_5C91F0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5c91fc*/
  dbl_ABF8F8 = Math::Sqrt(v0 + v0); /*0x5c920e*/
}
} // namespace gamemd

// 0x5C9220
namespace gamemd {
void sub_5C9220()
{
  dbl_ABF948 = dbl_ABF8F8 / 60.0; /*0x5c922c*/
}
} // namespace gamemd

// 0x5C9240
namespace gamemd {
void sub_5C9240()
{
  dbl_ABF930 = 1.0 / dbl_ABF948; /*0x5c924c*/
}
} // namespace gamemd

// 0x5C9260
namespace gamemd {
void sub_5C9260()
{
  dbl_ABF928 = 0.0174532925199433 * 45.0; /*0x5c926c*/
}
} // namespace gamemd

// 0x5C9280
namespace gamemd {
void sub_5C9280()
{
  dbl_ABF900 = 0.0174532925199433 * 60.0; /*0x5c928c*/
}
} // namespace gamemd

// 0x5C92A0
namespace gamemd {
void sub_5C92A0()
{
  dbl_ABF8D8 = 0.0174532925199433 * 90.0; /*0x5c92ac*/
}
} // namespace gamemd

// 0x5C92C0
namespace gamemd {
long long sub_5C92C0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABF8D8 - dbl_ABF900); /*0x5c92d2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABF8F8 * 0.5); /*0x5c92e6*/
  dword_ABF950 = result; /*0x5c92eb*/
  return result; /*0x5c92f0*/
}
} // namespace gamemd

// 0x5C9300
namespace gamemd {
void sub_5C9300()
{
  dbl_ABF908 = Math::ArcTan((double)dword_ABF950 * 0.00390625); /*0x5c9317*/
}
} // namespace gamemd

// 0x5C9330
namespace gamemd {
void sub_5C9330()
{
  dbl_ABF920 = Math::ArcTan((double)(2 * dword_ABF950) / dbl_ABF8F8); /*0x5c9352*/
}
} // namespace gamemd

// 0x5C9360
namespace gamemd {
long long sub_5C9360()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABF950) + 0.5); /*0x5c937b*/
  dword_ABF944 = result; /*0x5c9380*/
  return result; /*0x5c9386*/
}
} // namespace gamemd

// 0x5C9390
namespace gamemd {
int sub_5C9390()
{
  word_ABF8F0 = 0; /*0x5c9392*/
  word_ABF8F2 = 0; /*0x5c9398*/
  return 0; /*0x5c939e*/
}
} // namespace gamemd

// 0x5C93A0
namespace gamemd {
int sub_5C93A0()
{
  dword_ABF910 = 0; /*0x5c93a2*/
  dword_ABF914 = 0; /*0x5c93a7*/
  dword_ABF918 = 0; /*0x5c93ac*/
  return 0; /*0x5c93b1*/
}
} // namespace gamemd

// 0x5C93C0
namespace gamemd {
int sub_5C93C0()
{
  dword_ABF940 = 0; /*0x5c93c5*/
  dword_ABF938 = 128; /*0x5c93cf*/
  dword_ABF93C = 128; /*0x5c93d4*/
  return 128; /*0x5c93d9*/
}
} // namespace gamemd

// 0x5C9420
namespace gamemd {
void E4Recv_5C9420::sub_5C9420()
{
  *(unsigned int *)this->__pad_0 = &vt_Megawealth; /*0x5c9420*/
  MultiplayerGameMode::Dtor(); /*0x5c9426*/
}
} // namespace gamemd

// 0x5C94F0
namespace gamemd {
int sub_5C94F0()
{
  dword_ABF980 = 0; /*0x5c94f2*/
  dword_ABF984 = 0; /*0x5c94f7*/
  dword_ABF988 = 0; /*0x5c94fc*/
  dword_ABF98C = 0; /*0x5c9501*/
  return 0; /*0x5c9506*/
}
} // namespace gamemd

// 0x5C9510
namespace gamemd {
void sub_5C9510()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5c951c*/
  dbl_ABF998 = Math::Sqrt(v0 + v0); /*0x5c952e*/
}
} // namespace gamemd

// 0x5C9540
namespace gamemd {
void sub_5C9540()
{
  dbl_ABF9E8 = dbl_ABF998 / 60.0; /*0x5c954c*/
}
} // namespace gamemd

// 0x5C9560
namespace gamemd {
void sub_5C9560()
{
  dbl_ABF9D0 = 1.0 / dbl_ABF9E8; /*0x5c956c*/
}
} // namespace gamemd

// 0x5C9580
namespace gamemd {
void sub_5C9580()
{
  dbl_ABF9C8 = 0.0174532925199433 * 45.0; /*0x5c958c*/
}
} // namespace gamemd

// 0x5C95A0
namespace gamemd {
void sub_5C95A0()
{
  dbl_ABF9A0 = 0.0174532925199433 * 60.0; /*0x5c95ac*/
}
} // namespace gamemd

// 0x5C95C0
namespace gamemd {
void sub_5C95C0()
{
  dbl_ABF978 = 0.0174532925199433 * 90.0; /*0x5c95cc*/
}
} // namespace gamemd

// 0x5C95E0
namespace gamemd {
long long sub_5C95E0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABF978 - dbl_ABF9A0); /*0x5c95f2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABF998 * 0.5); /*0x5c9606*/
  dword_ABF9F0 = result; /*0x5c960b*/
  return result; /*0x5c9610*/
}
} // namespace gamemd

// 0x5C9620
namespace gamemd {
void sub_5C9620()
{
  dbl_ABF9A8 = Math::ArcTan((double)dword_ABF9F0 * 0.00390625); /*0x5c9637*/
}
} // namespace gamemd

// 0x5C9650
namespace gamemd {
void sub_5C9650()
{
  dbl_ABF9C0 = Math::ArcTan((double)(2 * dword_ABF9F0) / dbl_ABF998); /*0x5c9672*/
}
} // namespace gamemd

// 0x5C9680
namespace gamemd {
long long sub_5C9680()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABF9F0) + 0.5); /*0x5c969b*/
  dword_ABF9E4 = result; /*0x5c96a0*/
  return result; /*0x5c96a6*/
}
} // namespace gamemd

// 0x5C96B0
namespace gamemd {
int sub_5C96B0()
{
  word_ABF990 = 0; /*0x5c96b2*/
  word_ABF992 = 0; /*0x5c96b8*/
  return 0; /*0x5c96be*/
}
} // namespace gamemd

// 0x5C96C0
namespace gamemd {
int sub_5C96C0()
{
  dword_ABF9B0 = 0; /*0x5c96c2*/
  dword_ABF9B4 = 0; /*0x5c96c7*/
  dword_ABF9B8 = 0; /*0x5c96cc*/
  return 0; /*0x5c96d1*/
}
} // namespace gamemd

// 0x5C96E0
namespace gamemd {
int sub_5C96E0()
{
  dword_ABF9E0 = 0; /*0x5c96e5*/
  dword_ABF9D8 = 128; /*0x5c96ef*/
  dword_ABF9DC = 128; /*0x5c96f4*/
  return 128; /*0x5c96f9*/
}
} // namespace gamemd

// 0x5C9850
namespace gamemd {
LRESULT sub_5C9850(CampaignScore * aP0, int nIDDlgItem, wchar_t * Format)
{

  wchar_t Buffer[32]; // [esp+8h] [ebp-40h] BYREF
  swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, Format); /*0x5c9868*/
  HWND DlgItem; // eax
  DlgItem = GetDlgItem(aP0, nIDDlgItem); /*0x5c9872*/
  return SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)Buffer); /*0x5c988b*/
}
} // namespace gamemd

// 0x5CA420
namespace gamemd {
void sub_5CA420()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5ca42c*/
  dbl_ABFA20 = Math::Sqrt(v0 + v0); /*0x5ca43e*/
}
} // namespace gamemd

// 0x5CA450
namespace gamemd {
void sub_5CA450()
{
  dbl_ABFA70 = dbl_ABFA20 / 60.0; /*0x5ca45c*/
}
} // namespace gamemd

// 0x5CA470
namespace gamemd {
void sub_5CA470()
{
  dbl_ABFA58 = 1.0 / dbl_ABFA70; /*0x5ca47c*/
}
} // namespace gamemd

// 0x5CA490
namespace gamemd {
void sub_5CA490()
{
  dbl_ABFA50 = 0.0174532925199433 * 45.0; /*0x5ca49c*/
}
} // namespace gamemd

// 0x5CA4B0
namespace gamemd {
void sub_5CA4B0()
{
  dbl_ABFA28 = 0.0174532925199433 * 60.0; /*0x5ca4bc*/
}
} // namespace gamemd

// 0x5CA4D0
namespace gamemd {
void sub_5CA4D0()
{
  dbl_ABFA00 = 0.0174532925199433 * 90.0; /*0x5ca4dc*/
}
} // namespace gamemd

// 0x5CA4F0
namespace gamemd {
long long sub_5CA4F0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABFA00 - dbl_ABFA28); /*0x5ca502*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABFA20 * 0.5); /*0x5ca516*/
  dword_ABFA78 = result; /*0x5ca51b*/
  return result; /*0x5ca520*/
}
} // namespace gamemd

// 0x5CA530
namespace gamemd {
void sub_5CA530()
{
  dbl_ABFA30 = Math::ArcTan((double)dword_ABFA78 * 0.00390625); /*0x5ca547*/
}
} // namespace gamemd

// 0x5CA560
namespace gamemd {
void sub_5CA560()
{
  dbl_ABFA48 = Math::ArcTan((double)(2 * dword_ABFA78) / dbl_ABFA20); /*0x5ca582*/
}
} // namespace gamemd

// 0x5CA590
namespace gamemd {
long long sub_5CA590()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFA78) + 0.5); /*0x5ca5ab*/
  dword_ABFA6C = result; /*0x5ca5b0*/
  return result; /*0x5ca5b6*/
}
} // namespace gamemd

// 0x5CA5C0
namespace gamemd {
int sub_5CA5C0()
{
  word_ABFA18 = 0; /*0x5ca5c2*/
  word_ABFA1A = 0; /*0x5ca5c8*/
  return 0; /*0x5ca5ce*/
}
} // namespace gamemd

// 0x5CA5D0
namespace gamemd {
int sub_5CA5D0()
{
  dword_ABFA38 = 0; /*0x5ca5d2*/
  dword_ABFA3C = 0; /*0x5ca5d7*/
  dword_ABFA40 = 0; /*0x5ca5dc*/
  return 0; /*0x5ca5e1*/
}
} // namespace gamemd

// 0x5CA5F0
namespace gamemd {
int sub_5CA5F0()
{
  dword_ABFA68 = 0; /*0x5ca5f5*/
  dword_ABFA60 = 128; /*0x5ca5ff*/
  dword_ABFA64 = 128; /*0x5ca604*/
  return 128; /*0x5ca609*/
}
} // namespace gamemd

// 0x5CA610
namespace gamemd {
int sub_5CA610()
{
  dword_ABFA08 = 0; /*0x5ca612*/
  dword_ABFA0C = 0; /*0x5ca617*/
  dword_ABFA10 = 0; /*0x5ca61c*/
  dword_ABFA14 = 0; /*0x5ca621*/
  return 0; /*0x5ca626*/
}
} // namespace gamemd

// 0x5CA670
namespace gamemd {
void E4Recv_5CA670::sub_5CA670()
{
  this->MultiplayerSiege_field_00 = (int)&vt_MultiplayerSiege; /*0x5ca670*/
  MultiplayerGameMode::Dtor(); /*0x5ca676*/
}
} // namespace gamemd

// 0x5CAC00
namespace gamemd {
int sub_5CAC00()
{
  dword_ABFA88 = 0; /*0x5cac02*/
  dword_ABFA8C = 0; /*0x5cac07*/
  dword_ABFA90 = 0; /*0x5cac0c*/
  dword_ABFA94 = 0; /*0x5cac11*/
  return 0; /*0x5cac16*/
}
} // namespace gamemd

// 0x5CAC20
namespace gamemd {
void sub_5CAC20()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5cac2c*/
  dbl_ABFAA0 = Math::Sqrt(v0 + v0); /*0x5cac3e*/
}
} // namespace gamemd

// 0x5CAC50
namespace gamemd {
void sub_5CAC50()
{
  dbl_ABFAF0 = dbl_ABFAA0 / 60.0; /*0x5cac5c*/
}
} // namespace gamemd

// 0x5CAC70
namespace gamemd {
void sub_5CAC70()
{
  dbl_ABFAD8 = 1.0 / dbl_ABFAF0; /*0x5cac7c*/
}
} // namespace gamemd

// 0x5CAC90
namespace gamemd {
void sub_5CAC90()
{
  dbl_ABFAD0 = 0.0174532925199433 * 45.0; /*0x5cac9c*/
}
} // namespace gamemd

// 0x5CACB0
namespace gamemd {
void sub_5CACB0()
{
  dbl_ABFAA8 = 0.0174532925199433 * 60.0; /*0x5cacbc*/
}
} // namespace gamemd

// 0x5CACD0
namespace gamemd {
void sub_5CACD0()
{
  dbl_ABFA80 = 0.0174532925199433 * 90.0; /*0x5cacdc*/
}
} // namespace gamemd

// 0x5CAE60
namespace gamemd {
void E4Recv_5CAE60::sub_5CAE60()
{
  *(unsigned int *)this->__pad_0 = &vt_MultiplayerSiegeDefenderTeam; /*0x5cae60*/
  MultiplayerTeam::Destructor(); /*0x5cae66*/
}
} // namespace gamemd

// 0x5CAF00
namespace gamemd {
void E4Recv_5CAF00::sub_5CAF00()
{
  *this = (MultiplayerSiegeAttackerTeam)&vt_MultiplayerSiegeAttackerTeam; /*0x5caf00*/
  MultiplayerTeam::Destructor(); /*0x5caf06*/
}
} // namespace gamemd

// 0x5CAF70
namespace gamemd {
DWORD E4Recv_5CAF70::sub_5CAF70()
{
  DWORD result; // eax
  LARGE_INTEGER Frequency; // [esp+4h] [ebp-8h] BYREF

  if ( QueryPerformanceFrequency(&Frequency) ) /*0x5caf7b*/
  {
    result = Frequency.LowPart; /*0x5caf89*/
    this->vfptr = (void *)Frequency.HighPart; /*0x5caf8d*/
  }
  else
  {
    this->vfptr = 0; /*0x5caf94*/
    return 0; /*0x5caf9a*/
  }
  return result; /*0x5caf8f*/
}
} // namespace gamemd

// 0x5CB240
namespace gamemd {
void sub_5CB240()
{
  dbl_ABFB08 = 0.0174532925199433 * 90.0; /*0x5cb24c*/
}
} // namespace gamemd

// 0x5CB2A0
namespace gamemd {
void sub_5CB2A0()
{
  dbl_ABFB38 = Math::ArcTan((double)dword_ABFB80 * 0.00390625); /*0x5cb2b7*/
}
} // namespace gamemd

// 0x5CB300
namespace gamemd {
long long sub_5CB300()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABFB80) + 0.5); /*0x5cb31b*/
  dword_ABFB74 = result; /*0x5cb320*/
  return result; /*0x5cb326*/
}
} // namespace gamemd

// 0x5CB330
namespace gamemd {
int sub_5CB330()
{
  word_ABFB20 = 0; /*0x5cb332*/
  word_ABFB22 = 0; /*0x5cb338*/
  return 0; /*0x5cb33e*/
}
} // namespace gamemd

// 0x5CB340
namespace gamemd {
int sub_5CB340()
{
  dword_ABFB40 = 0; /*0x5cb342*/
  dword_ABFB44 = 0; /*0x5cb347*/
  dword_ABFB48 = 0; /*0x5cb34c*/
  return 0; /*0x5cb351*/
}
} // namespace gamemd

// 0x5CB360
namespace gamemd {
int sub_5CB360()
{
  dword_ABFB70 = 0; /*0x5cb365*/
  dword_ABFB68 = 128; /*0x5cb36f*/
  dword_ABFB6C = 128; /*0x5cb374*/
  return 128; /*0x5cb379*/
}
} // namespace gamemd

// 0x5CB3E0
namespace gamemd {
void E4Recv_5CB3E0::sub_5CB3E0()
{
  *(unsigned int *)&this->m_Enabled = &vt_UnholyAlliance; /*0x5cb3e0*/
  MultiplayerGameMode::Dtor(); /*0x5cb3e6*/
}
} // namespace gamemd

// 0x5CCA10
namespace gamemd {
void nullsub_189(int a1)
{
  ; /*0x5cca10*/
}
} // namespace gamemd

// 0x5CD310
namespace gamemd {
void nullsub_190()
{
  ; /*0x5cd310*/
}
} // namespace gamemd

// 0x5CD570
namespace gamemd {
int E4Recv_5CD570::sub_5CD570(const wchar_t ** a2, int a3, int a4, int a5, int * a6, int a7, int a8, char a9, char a10)
{


  this->M8 = a4; /*0x5cd581*/
  this->M4 = a3; /*0x5cd587*/
  this->M12 = 1; /*0x5cd58a*/
  size_t v11 = 0; // ebx /*0x5cd597*/
  this->M16 = Timer::GetTicks(); /*0x5cd59c*/
  this->u32_18 = 0; /*0x5cd59f*/
  /* X11: vtable install elided (implicit via MSAnim virtuals 0x5cd5a5) */
  WideString::AssignFromPtr(&this->u32_1C, a2); /*0x5cd5ab*/
  this->M44 = a8; /*0x5cd5c0*/
  this->M48 = a9; /*0x5cd5c7*/
  this->q020 = 0; /*0x5cd5ce*/
  this->M24 = a7; /*0x5cd5d1*/
  this->u32_28 = 0; /*0x5cd5d4*/
  this->u32_34 = a5; /*0x5cd5d7*/
  this->u32_48 = 0; /*0x5cd5da*/
  this->M73 = a10; /*0x5cd5dd*/
  this->M76 = 0; /*0x5cd5e0*/
  *(unsigned int *)this->__pad_0 = &vt_MSPrintAnim; /*0x5cd5e3*/
  this->M16 = Timer::GetTicks(); /*0x5cd5f6*/
  int v15; // [esp+14h] [ebp-8h]
  this->M20 = v15; /*0x5cd5f9*/
  this->u32_18 = a7; /*0x5cd5ff*/
  sub_5CD690((int)this, a6); /*0x5cd602*/
  if ( a10 ) /*0x5cd60b*/
  {
    int v17; // [esp+40h] [ebp+24h]
    v17 = 0; /*0x5cd611*/
    int v16; // [esp+3Ch] [ebp+20h]
    v16 = *(unsigned int *)(this->u32_34 + 4); /*0x5cd618*/
    if ( (unsigned __int16)WideString::GetChar(&this->u32_1C, 0) ) /*0x5cd61e*/
    {
      do /*0x5cd658*/
      {
        if ( (unsigned __int16)WideString::GetChar(&this->u32_1C, v11) == 10 ) /*0x5cd634*/
          break; /*0x5cd634*/
        int v12; // ebp
        v12 = *this->u32_343); /*0x5cd63c*/
        int Char; // eax
        Char = WideString::GetChar(&this->u32_1C, v11++); /*0x5cd63e*/
        v17 += (*(int (**)(unsigned int, int))(v12 + 4))(this->u32_34, Char); /*0x5cd651*/
      }
      while ( (unsigned __int16)WideString::GetChar(&this->u32_1C, v11) ); /*0x5cd658*/
    }
    this->M76 = (this->M40 - v17 - v16) / 2; /*0x5cd676*/
  }
  return (int)this->vfptr; /*0x5cd67b*/

}
} // namespace gamemd

// 0x5CDB90
namespace gamemd {
int sub_5CDB90(const wchar_t ** a1, int a2, int a3)
{

  if ( String_Helper((ObjectClass *)a1, 0) || !a2 || a3 < *(unsigned int *)(a2 + 8) ) /*0x5cdbbb*/
    return 0; /*0x5cdc42*/
  int v5 = 0; // ebx /*0x5cdbc2*/
  size_t v6 = 0; // esi /*0x5cdbc8*/
  int v7 = 0; // ebp /*0x5cdbca*/
  while ( (uint16_t)((WideString *)((WideString *)a1))->GetChar(v6) ) /*0x5cdbcc*/
  {
    for ( ; (uint16_t)((WideString *)((WideString *)a1))->GetChar(v6); ++v6 ) /*0x5cdbd9*/
    {
      if ( (uint16_t)((WideString *)((WideString *)a1))->GetChar(v6) == 10 ) /*0x5cdbef*/
        break; /*0x5cdbef*/
    }
    if ( (uint16_t)((WideString *)((WideString *)a1))->GetChar(v6) != 10 ) /*0x5cdc0b*/
    {
      v5 += *(unsigned int *)(a2 + 8); /*0x5cdc15*/
      if ( v5 >= a3 ) /*0x5cdc1a*/
      {
        v5 = 0; /*0x5cdc1d*/
        ++v7; /*0x5cdc23*/
        String_Helper_7B7660((ObjectClass *)a1, 0xCu, v6); /*0x5cdc24*/
      }
      ++v6; /*0x5cdc29*/
    }
  }
  return v7; /*0x5cdc3b*/
}
} // namespace gamemd

// 0x5CE330
namespace gamemd {
int E4Recv_5CE330::sub_5CE330(const wchar_t ** a2)
{

  int (**vtable0)(TagClass *, int); // ebp
  int Char; // eax
  int i; // [esp+Ch] [ebp-4h]

  int v3 = 0; // ebp /*0x5ce33b*/
  size_t v4 = 0; // esi /*0x5ce340*/
  for ( i = 0; (unsigned __int16)WideString::GetChar(a2, v4); i = v3 ) /*0x5ce346*/
  {
    if ( (unsigned __int16)WideString::GetChar(a2, v4) == 10 ) /*0x5ce35c*/
      break; /*0x5ce35c*/
    vtable0 = (int (**)(TagClass *, int))this->attachedTag->AbstractClass; /*0x5ce364*/
    Char = WideString::GetChar(a2, v4); /*0x5ce366*/
    v3 = vtable0[1](this->attachedTag, Char) + i; /*0x5ce378*/
    ++v4; /*0x5ce37a*/
  }
  return v3; /*0x5ce38d*/

}
} // namespace gamemd

// 0x5CE3A0
namespace gamemd {
int E4Recv_5CE3A0::sub_5CE3A0(int a2, int * a3)
{

  int (**v10)(TagClass *, int); // ebp
  int v11; // eax
  int v12; // eax
  int Char; // [esp-Ch] [ebp-4Ch]
  void *v14; // [esp+18h] [ebp-28h]
  void (**vtable0)(TagClass *, int, int, void *, void *, int, int); // [esp+18h] [ebp-28h]
  unsigned int i; // [esp+1Ch] [ebp-24h]
  unsigned int v17[4]; // [esp+30h] [ebp-10h] BYREF
  int *v18; // [esp+48h] [ebp+8h]

  unsigned int *v4; // ecx
  int result; // eax
  int v6; // ecx
  if ( !a3 /*0x5ce3e1*/
    || (v4 = ClipRectIntersection(v17, a3, (int *)&this->attachedBomb, 0, 0), result = v4[2], v6 = v4[3], result > 0)
    && v6 > 0 )
  {
    result = (int)this->q020; /*0x5ce3e7*/
    int *vtable2; // ebp
    vtable2 = (int *)this->M8; /*0x5ce3ea*/
    char *vtable1; // ebx
    vtable1 = (char *)this->M4; /*0x5ce3ed*/
    size_t v9 = 0; // edi /*0x5ce3f0*/
    v18 = vtable2; /*0x5ce3f4*/
    for ( i = result; v9 < i; ++v9 ) /*0x5ce3fc*/
    {
      if ( (unsigned __int16)WideString::GetChar((const wchar_t **)&this->?, v9) == 10 ) /*0x5ce40f*/
      {
        vtable1 = (char *)this->M4; /*0x5ce414*/
        vtable2 = (int *)((char *)vtable2 + (unsigned int)this->attachedTag->?); /*0x5ce41e*/
        v14 = this->attachedTag->?; /*0x5ce420*/
        v18 = vtable2; /*0x5ce426*/
        result = (*(int (**)(int))(*(unsigned int *)a2 + 128))(a2); /*0x5ce42a*/
        if ( (int)v14 + (int)vtable2 >= result ) /*0x5ce438*/
          return result; /*0x5ce438*/
      }
      else
      {
        vtable0 = (void (**)(TagClass *, int, int, void *, void *, int, int))this->attachedTag->AbstractClass; /*0x5ce44b*/
        Char = WideString::GetChar((const wchar_t **)&this->M52, v9); /*0x5ce45b*/
        vtable0[4](this->attachedTag, a2, Char, vtable1, vtable2, 2, 1); /*0x5ce461*/
        v10 = (int (**)(TagClass *, int))this->attachedTag->AbstractClass; /*0x5ce46b*/
        v11 = WideString::GetChar((const wchar_t **)&this->?, v9); /*0x5ce46d*/
        v12 = v10[1](this->attachedTag, v11); /*0x5ce476*/
        vtable2 = v18; /*0x5ce479*/
        vtable1 += v12; /*0x5ce47d*/
      }
      result = i; /*0x5ce47f*/
    }
  }
  return result; /*0x5ce48c*/

}
} // namespace gamemd

// 0x5CF840
namespace gamemd {
const char ** E4Recv_5CF840::sub_5CF840(MapSelect * aP1)
{

  const char **v5; // edi
  char *v7; // [esp+10h] [ebp-4h] BYREF

  if ( !Audio::IsSoundEnabled() ) /*0x5cf847*/
    return 0; /*0x5cf847*/
  int v3 = 0; // esi /*0x5cf853*/
  if ( this->customSound_controller[1] <= 0 ) /*0x5cf857*/
    return 0; /*0x5cf8b5*/
  const char **v4 = aP1; // ebp /*0x5cf859*/
  while ( 1 ) /*0x5cf864*/
  {
    v5 = *(const char ***)(this->ambientSoundController[3] + 4 * v3); /*0x5cf864*/
    String::AssignFromPtr((String *)&v7, v5); /*0x5cf868*/
    String::ToLower((String *)&v7); /*0x5cf871*/
    String::AssignFromPtr((String *)&aP1, v4); /*0x5cf87b*/
    String::ToLower((String *)&aP1); /*0x5cf884*/
    if ( (unsigned __int8)String::Compare((String *)&v7, (const char **)&aP1) ) /*0x5cf892*/
      break; /*0x5cf892*/
    DeleteAndZero((ObjectClass *)&aP1); /*0x5cf89f*/
    DeleteAndZero((ObjectClass *)&v7); /*0x5cf8a8*/
    if ( ++v3 >= this->customSound_controller[1] ) /*0x5cf8b3*/
      return 0; /*0x5cf8b3*/
  }
  DeleteAndZero((ObjectClass *)&aP1); /*0x5cf8bf*/
  DeleteAndZero((ObjectClass *)&v7); /*0x5cf8c8*/
  return v5; /*0x5cf8b5*/

}
} // namespace gamemd
