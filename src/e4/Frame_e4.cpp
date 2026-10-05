// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/AudioFileClass_e4.hpp"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x4F4780
namespace gamemd {
TechnoTypeClass * Frame::Present(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8)
{

  int *v9; // eax
  int result; // eax
  int v11; // edi
  LONG v12; // eax
  unsigned int v13;
  LONG v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  void * v20;
  LONG v21; // edi
  LONG v22; // ebx
  void * v23;
  double v24; // st7
  void * v25;
  int v26; // eax
  double v27; // st7
  LONG v28; // ebx
  LONG v29; // eax
  char v30; // al
  int v31; // ecx
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edi
  int v35; // edi
  int v36; // eax
  char v37; // [esp+31h] [ebp-4Dh]
  unsigned char v38[12]; // [esp+32h] [ebp-4Ch] BYREF
  int v39; // [esp+3Eh] [ebp-40h]
  int v40; // [esp+42h] [ebp-3Ch]
  int v41; // [esp+46h] [ebp-38h]
  double v42; // [esp+4Ah] [ebp-34h] BYREF
  int v43; // [esp+52h] [ebp-2Ch]
  unsigned int v44; // [esp+56h] [ebp-28h]
  int v45; // [esp+5Ah] [ebp-24h] BYREF
  int v46; // [esp+5Eh] [ebp-20h] BYREF
  LONG v47; // [esp+62h] [ebp-1Ch]
  LONG v48; // [esp+66h] [ebp-18h]
  unsigned int v49;
  struct tagRECT Rect; // [esp+6Eh] [ebp-10h] BYREF
  void * v51;

  if ( !a5 ) /*0x4f4790*/
  {
    v9 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))((int)a1, &v46); /*0x4f479b*/
    v39 = *v9; /*0x4f47a0*/
    v40 = v9[1]; /*0x4f47a7*/
    v41 = v9[2]; /*0x4f47b6*/
    LODWORD(v42) = v9[3]; /*0x4f47bd*/
  }
  result = GetClientRect((HWND)(g_hWnd), &Rect); /*0x4f47cc*/
  if ( result ) /*0x4f47d4*/
  {
    *(double *)&v38[4] = *(double *)&Rect.left; /*0x4f47e2*/
    result = ClientToScreen((HWND)(g_hWnd), (LPPOINT)&v38[4]); /*0x4f47f6*/
    if ( result ) /*0x4f47fe*/
    {
      v11 = (*(int (**)(int, int, int, int))(*(unsigned int *)a1 + 128))((int)a1, (int)a4, (int)a3, (int)a2); /*0x4f4811*/
      v12 = (*(int (**)(int))(*(unsigned int *)a1 + 124))((int)a1); /*0x4f4817*/
      v13 = dword_87F7F0; /*0x4f4828*/
      v45 = v40; /*0x4f4830*/
      v46 = v41; /*0x4f4834*/
      v47 = v12; /*0x4f4838*/
      v48 = v11; /*0x4f483c*/
      if ( !dword_87F7EC ) /*0x4f4840*/
      {
        if ( !dword_87F7F0 ) /*0x4f4844*/
          goto LABEL_18; /*0x4f4844*/
        goto LABEL_13; /*0x4f4844*/
      }
      if ( dword_87F7EC <= 0 ) /*0x4f484a*/
      {
        if ( dword_87F7EC >= 0 ) /*0x4f4856*/
        {
LABEL_13:
          if ( dword_87F7F0 > 0 ) /*0x4f4860*/
          {
            v14 = v11 - dword_87F7F0; /*0x4f4865*/
            v46 = dword_87F7F0 + v41; /*0x4f4867*/
LABEL_17:
            v48 = v14; /*0x4f4871*/
            goto LABEL_18; /*0x4f4871*/
          }
          if ( dword_87F7F0 < 0 ) /*0x4f486d*/
          {
            v14 = dword_87F7F0 + v11; /*0x4f486f*/
            goto LABEL_17; /*0x4f486f*/
          }
LABEL_18:
          if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x4f4887*/
          {
            v15 = dword_886FB8 - v12; /*0x4f4895*/
            if ( (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar) >= v15 ) /*0x4f489e*/
              v16 = v15; /*0x4f48ad*/
            else
              v16 = (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x4f48a8*/
            if ( v16 <= 0 ) /*0x4f48b1*/
            {
              v18 = 0; /*0x4f48df*/
            }
            else
            {
              v17 = dword_886FB8 - v47; /*0x4f48c3*/
              if ( (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar) >= v17 ) /*0x4f48cc*/
                v18 = v17; /*0x4f48db*/
              else
                v18 = (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x4f48d6*/
            }
            v13 = (unsigned int)(dword_87F7F0);
            v19 = (unsigned int)(v18 + v45);
            v12 = v47; /*0x4f48ed*/
            v45 = v19; /*0x4f48f1*/
          }
          v20 = (void *)((unsigned int)((void *)((LONG)(*(unsigned int *)(a8)))));
          v21 = (LONG)(((int *)a8)[1]);
          v22 = (LONG)((void *)(a8[2]));
          Rect.right = (void *)(a8[3]);
          v49 = (unsigned int)((void *)(v20));
          Rect.left = v21; /*0x4f4914*/
          Rect.top = v22; /*0x4f4918*/
          if ( g_TacticalClass_Instance /*0x4f4934*/
            && (((unsigned int *)(g_TacticalClass_Instance))[48].__tail_0
             || ((unsigned int *)(g_TacticalClass_Instance))[49].__tail_0 != (struct IPersistStreamVtbl *)1072693248) )
          {
            v51 = (void *)((int)((LPPERSISTSTREAM)((*(int (**)(int))(*(unsigned int *)a1 + 124))((int)a1))));
            v23 = (void *)((int)((void *)((*(int (**)(int))(*(unsigned int *)a1 + 128))((int)a1))));
            v24 = (LPPERSISTSTREAM)((void *)((double)v51));
            v25 = (LPPERSISTSTREAM)((void *)(g_TacticalClass_Instance));
            *(unsigned int *)v38 = (unsigned int)(v23); /*0x4f4959*/
            v42 = v24 / *(double *)&((unsigned int *)(g_TacticalClass_Instance))[48].__tail_0; /*0x4f4965*/
            v26 = Math::RoundToInt((v24 - v42) * 0.5); /*0x4f4973*/
            v27 = (double)*(int *)v38; /*0x4f4978*/
            v20 = (void *)(v26); /*0x4f497c*/
            *(double *)v38 = v27 / *(double *)&v25[48].__tail_0; /*0x4f4986*/
            v21 = Math::RoundToInt((v27 - *(double *)v38) * 0.5); /*0x4f499d*/
            v28 = Math::RoundToInt(v42); /*0x4f49a8*/
            v29 = Math::RoundToInt(*(double *)v38); /*0x4f49aa*/
            v13 = dword_87F7F0; /*0x4f49af*/
            v49 = (unsigned int)(v20); /*0x4f49b5*/
            Rect.left = v21; /*0x4f49b9*/
            Rect.top = v28; /*0x4f49bd*/
            Rect.right = v29; /*0x4f49c1*/
          }
          else
          {
            if ( v22 >= v12 ) /*0x4f49c9*/
              Rect.top = v12; /*0x4f49cb*/
            if ( Rect.right >= v48 ) /*0x4f49d9*/
              Rect.right = v48; /*0x4f49db*/
          }
          if ( v13 < 0 ) /*0x4f49e1*/
            Rect.left = v21 - v13; /*0x4f49e5*/
          if ( dword_87F7EC < 0 ) /*0x4f49f0*/
            v49 = (unsigned int)(v20)- dword_87F7EC; /*0x4f49f4*/
          if ( !byte_A8E378 ) /*0x4f49ff*/
            goto LABEL_51; /*0x4f49ff*/
          if ( dword_887368 ) /*0x4f4a09*/
          {
            if ( (uint8_t)Frame::Init() ) /*0x4f4a0b*/
            {
              v13 = dword_87F7F0; /*0x4f4a14*/
              v30 = 1; /*0x4f4a1a*/
LABEL_47:
              if ( !byte_884D2E && !v13 && !v30 ) /*0x4f4a36*/
              {
                v48 -= *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a4a*/
                Rect.right -= *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a53*/
              }
LABEL_51:
              if ( dword_87F7EC ) /*0x4f4a5e*/
              {
                v31 = (*(int (**)(int))(*(unsigned int *)a1 + 128))((int)a1) - *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a7c*/
                HIDWORD(v42) = v41; /*0x4f4a82*/
                v44 = v31; /*0x4f4a86*/
                v43 = abs32(dword_87F7EC); /*0x4f4a91*/
                if ( dword_87F7EC >= 0 ) /*0x4f4a95*/
                  LODWORD(v42) = v45 - dword_87F7EC; /*0x4f4aad*/
                else
                  LODWORD(v42) = v45 + v47; /*0x4f4aa1*/
                v32 = *(unsigned int *)g_DSurface_Primary; /*0x4f4ac1*/
                v33 = (*(int (**)(int, unsigned char *, double *, unsigned int))(*(unsigned int *)g_DSurface_Primary + 120))( /*0x4f4ac5*/
                        g_DSurface_Primary,
                        v38,
                        &v42,
                        0);
                (*(void (**)(int, int))(v32 + 16))(g_DSurface_Primary, v33); /*0x4f4acf*/
                v13 = dword_87F7F0; /*0x4f4ad2*/
              }
              if ( v13 ) /*0x4f4ada*/
              {
                v34 = abs32(v13); /*0x4f4ae7*/
                v43 = (*(int (**)(int))(*(unsigned int *)a1 + 124))((int)a1); /*0x4f4af0*/
                LODWORD(v42) = v40; /*0x4f4af9*/
                v44 = v34; /*0x4f4aff*/
                if ( dword_87F7F0 >= 0 ) /*0x4f4b03*/
                  HIDWORD(v42) = v46 - dword_87F7F0; /*0x4f4b1b*/
                else
                  HIDWORD(v42) = v46 + v48; /*0x4f4b0f*/
                v35 = *(unsigned int *)g_DSurface_Primary; /*0x4f4b2f*/
                v36 = (*(int (**)(int, unsigned char *, double *, unsigned int))(*(unsigned int *)g_DSurface_Primary + 120))( /*0x4f4b33*/
                        g_DSurface_Primary,
                        v38,
                        &v42,
                        0);
                (*(void (**)(int, int))(v35 + 16))(g_DSurface_Primary, v36); /*0x4f4b3d*/
              }
              if ( v37 && dword_887640 ) /*0x4f4b50*/
                (*(void (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 60))(dword_887640, (int)a1, 0); /*0x4f4b57*/
              result = (*(int (**)(int, int *, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x4f4b7b*/
                         g_DSurface_Primary,
                         &v45,
                         (int)a1);
              if ( v37 ) /*0x4f4b83*/
              {
                result = dword_887640; /*0x4f4b85*/
                if ( dword_887640 ) /*0x4f4b8c*/
                {
                  Sleep(0x32u); /*0x4f4b90*/
return (gamemd::TechnoTypeClass *)(*(int (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 64))(dword_887640, (int)a1, 0); /*0x4f4ba1*/
                }
              }
              return (gamemd::TechnoTypeClass *)(result);
            }
            v13 = dword_87F7F0; /*0x4f4a1e*/
          }
          v30 = 0; /*0x4f4a24*/
          goto LABEL_47; /*0x4f4a24*/
        }
        v12 += dword_87F7EC; /*0x4f4858*/
      }
      else
      {
        v12 -= dword_87F7EC; /*0x4f484e*/
        v45 = dword_87F7EC + v40; /*0x4f4850*/
      }
      v47 = v12; /*0x4f485a*/
      goto LABEL_13; /*0x4f485a*/
    }
  }
  return (gamemd::TechnoTypeClass *)(result);

}
} // namespace gamemd
// 0x724C00
namespace gamemd {
TechnoTypeClass * Frame::Init()
{

  return (gamemd::TechnoTypeClass *)(this->q004 != 0);

}
} // namespace gamemd