// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_626120_e4.hpp"
#include "e4/classes/E4Recv_6345A0_e4.hpp"
#include "e4/classes/E4Recv_634770_e4.hpp"
#include "e4/classes/E4Recv_635490_e4.hpp"
#include "e4/classes/E4Recv_63D0F0_e4.hpp"
#include "e4/classes/E4Recv_65A1B0_e4.hpp"
#include "e4/classes/E4Recv_68FFE0_e4.hpp"
#include "e4/classes/E4Recv_6BAFA0_e4.hpp"
#include "e4/classes/E4Recv_6C9900_e4.hpp"
#include "e4/classes/E4Recv_6CABA0_e4.hpp"
#include "e4/classes/E4Recv_7597A0_e4.hpp"
#include "e4/classes/E4Recv_759830_e4.hpp"
#include "e4/classes/E4Recv_759850_e4.hpp"
#include "e4/classes/E4Recv_759880_e4.hpp"
#include "e4/classes/E4Recv_759EA0_e4.hpp"
#include "e4/classes/E4Recv_759EB0_e4.hpp"
#include "e4/classes/E4Recv_759F20_e4.hpp"
#include "e4/classes/E4Recv_783B80_e4.hpp"
#include "e4/classes/E4Recv_7B71D0_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_49(); }  // w18j2 raw 0x007BF220
// [w16g4] C3861 supply (raw call-form evidence)
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int RenderGradientTrapezoid(float *p_this);  // x4:ida@0x660050
} // namespace gamemd

// 0x52FF90
namespace gamemd {  // G42.18 ns repair
int Render_Load(void * a1, void * a2, void * a3)
{
  int result; // eax
  Frame *v6; // ecx
  (*(void (**)(int, unsigned int))(*(unsigned int *)&((DSurface *)g_DSurface_Hidden)->q_60))(g_DSurface_Hidden, 0);  /*0x52ffa0*/
  int v8; // [esp+4h] [ebp-4h]
  int v7; // [esp+0h] [ebp-8h]
  result = ScoreScreen::DrawSHPBackground((char *)&Source, (int *)g_DSurface_Hidden, (int)(a2),(int)(a3), (int)&DataGlobal_886080, v7, v8); /*0x52ffb0*/
  if ( a2 ) /*0x52ffb9*/
  {
    (*((unsigned char *)&(v6))) = 1; /*0x52ffc3*/
    // 0x4f4780
    return (unsigned int)((Frame *)(v6))->Present(0); /*0x52ffc5*/
    {
      int *v9; // eax
      int result; // eax
      int v11; // edi
      LONG v12; // eax
      int v13; // edx
      LONG v14; // edi
      int v15; // edi
      int v16; // eax
      int v17; // edi
      int v18; // eax
      int v19; // ecx
      int v20; // ebp
      LONG v21; // edi
      LONG v22; // ebx
      int v23; // eax
      double v24; // st7
      LPPERSISTSTREAM v25; // edi
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
      int v49; // [esp+6Ah] [ebp-14h]
      struct tagRECT Rect; // [esp+6Eh] [ebp-10h] BYREF
      int v51; // [esp+8Eh] [ebp+10h]

      if ( !a5 ) /*0x4f4790*/
      {
        v9 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))(a1, &v46); /*0x4f479b*/
        v39 = *v9; /*0x4f47a0*/
        v40 = v9[1]; /*0x4f47a7*/
        v41 = v9[2]; /*0x4f47b6*/
        (*((unsigned int *)&(v42))) = v9[3]; /*0x4f47bd*/
      }
      result = GetClientRect((HWND)(g_hWnd), &Rect); /*0x4f47cc*/
      if ( result ) /*0x4f47d4*/
      {
        *(double *)&v38[4] = *(double *)&Rect.left; /*0x4f47e2*/
        result = ClientToScreen((HWND)(g_hWnd), (LPPOINT)&v38[4]); /*0x4f47f6*/
        if ( result ) /*0x4f47fe*/
        {
          v11 = (*(int (**)(int, int, int, int))(*(unsigned int *)a1 + 128))(a1, a4, a3, a2); /*0x4f4811*/
          v12 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4817*/
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
                v13 = dword_87F7F0; /*0x4f48e5*/
                v19 = v18 + v45; /*0x4f48eb*/
                v12 = v47; /*0x4f48ed*/
                v45 = v19; /*0x4f48f1*/
              }
              v20 = *a8; /*0x4f48f9*/
              v21 = a8[1]; /*0x4f48fb*/
              v22 = a8[2]; /*0x4f48fe*/
              Rect.right = a8[3]; /*0x4f4904*/
              v49 = v20; /*0x4f4910*/
              Rect.left = v21; /*0x4f4914*/
              Rect.top = v22; /*0x4f4918*/
              if ( g_TacticalClass_Instance /*0x4f4934*/
                && (((unsigned int *)(g_TacticalClass_Instance))[48].__tail_0
                 || ((unsigned int *)(g_TacticalClass_Instance))[49].__tail_0 != (struct IPersistStreamVtbl *)1072693248) )
              {
                v51 = (int)((LPPERSISTSTREAM)((*(int (**)(int))(*(unsigned int *)a1 + 124))(a1)));
                v23 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x4f4949*/
                v24 = (double)v51; /*0x4f494f*/
                v25 = (LPPERSISTSTREAM)(g_TacticalClass_Instance); /*0x4f4953*/
                *(unsigned int *)v38 = v23; /*0x4f4959*/
                v42 = v24 / *(double *)&((unsigned int *)(g_TacticalClass_Instance))[48].__tail_0; /*0x4f4965*/
                v26 = Math::RoundToInt((v24 - v42) * 0.5); /*0x4f4973*/
                v27 = (double)*(int *)v38; /*0x4f4978*/
                v20 = v26; /*0x4f497c*/
                *(double *)v38 = v27 / *(double *)&v25[48].__tail_0; /*0x4f4986*/
                v21 = Math::RoundToInt((v27 - *(double *)v38) * 0.5); /*0x4f499d*/
                v28 = Math::RoundToInt(v42); /*0x4f49a8*/
                v29 = Math::RoundToInt(*(double *)v38); /*0x4f49aa*/
                v13 = dword_87F7F0; /*0x4f49af*/
                v49 = v20; /*0x4f49b5*/
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
                v49 = v20 - dword_87F7EC; /*0x4f49f4*/
              if ( !byte_A8E378 ) /*0x4f49ff*/
                goto LABEL_51; /*0x4f49ff*/
              if ( dword_887368 ) /*0x4f4a09*/
              {
                if ( (uint8_t)this->Frame::Init() ) /*0x4f4a0b*/
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
                    v31 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1) - *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a7c*/
                    (*(((unsigned int *)&(v42)) + 1)) = v41; /*0x4f4a82*/
                    v44 = v31; /*0x4f4a86*/
                    v43 = abs32(dword_87F7EC); /*0x4f4a91*/
                    if ( dword_87F7EC >= 0 ) /*0x4f4a95*/
                      (*((unsigned int *)&(v42))) = v45 - dword_87F7EC; /*0x4f4aad*/
                    else
                      (*((unsigned int *)&(v42))) = v45 + v47; /*0x4f4aa1*/
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
                    v43 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4af0*/
                    (*((unsigned int *)&(v42))) = v40; /*0x4f4af9*/
                    v44 = v34; /*0x4f4aff*/
                    if ( dword_87F7F0 >= 0 ) /*0x4f4b03*/
                      (*(((unsigned int *)&(v42)) + 1)) = v46 - dword_87F7F0; /*0x4f4b1b*/
                    else
                      (*(((unsigned int *)&(v42)) + 1)) = v46 + v48; /*0x4f4b0f*/
                    v35 = *(unsigned int *)g_DSurface_Primary; /*0x4f4b2f*/
                    v36 = (*(int (**)(int, unsigned char *, double *, unsigned int))(*(unsigned int *)g_DSurface_Primary + 120))( /*0x4f4b33*/
                            g_DSurface_Primary,
                            v38,
                            &v42,
                            0);
                    (*(void (**)(int, int))(v35 + 16))(g_DSurface_Primary, v36); /*0x4f4b3d*/
                  }
                  if ( v37 && dword_887640 ) /*0x4f4b50*/
                    (*(void (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 60))(dword_887640, a1, 0); /*0x4f4b57*/
                  result = (*(int (**)(int, int *, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x4f4b7b*/
                             g_DSurface_Primary,
                             &v45,
                             a1);
                  if ( v37 ) /*0x4f4b83*/
                  {
                    result = dword_887640; /*0x4f4b85*/
                    if ( dword_887640 ) /*0x4f4b8c*/
                    {
                      Sleep(0x32u); /*0x4f4b90*/
                      return (*(int (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 64))(dword_887640, a1, 0); /*0x4f4ba1*/
                    }
                  }
                  return result; /*0x4f4ba1*/
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
      return result; /*0x4f4ba4*/
    }
    int sub_53C0A0(unsigned short * a1, int a2, unsigned short a3, int a4, int a5, int a6, int a7)
    {
      bool v14; // zf

      int v7 = a4; // ebx /*0x53c0a7*/
      unsigned short *v26; // [esp+34h] [ebp-14h]
      v26 = a1; /*0x53c0b6*/
      float v28; // [esp+3Ch] [ebp-Ch]
      v28 = (float)(a4 / 2); /*0x53c0c4*/
      int result = a5 / 2; // eax /*0x53c0c9*/
      double v9; // st7
      v9 = (double)(a5 / 2); /*0x53c0ce*/
      float v27; // [esp+38h] [ebp-10h]
      v27 = v9; /*0x53c0d3*/
      float v18; // [esp+18h] [ebp-30h]
      v18 = v9 * v27 + v28 * v28; /*0x53c0e1*/
      float v29; // [esp+40h] [ebp-8h]
      v29 = -v27; /*0x53c0e9*/
      if ( a5 > 0 ) /*0x53c0ec*/
      {
        int v21; // [esp+24h] [ebp-24h]
        v21 = a5; /*0x53c0fb*/
        do /*0x53c26c*/
        {
          float v20; // [esp+20h] [ebp-28h]
          v20 = -v28; /*0x53c0f7*/
          float v30; // [esp+44h] [ebp-4h]
          v30 = v20; /*0x53c103*/
          if ( v7 > 0 ) /*0x53c106*/
          {
            int v22; // [esp+28h] [ebp-20h]
            v22 = v7; /*0x53c115*/
            do /*0x53c24a*/
            {
              float v19; // [esp+1Ch] [ebp-2Ch]
              v19 = (float)(v29 * v29);
              double v10; // st7
              v10 = (float)((1.0 - (v30 * v30 + v19) / v18) * 5.0);
              float v23; // [esp+2Ch] [ebp-1Ch]
              v23 = (float)(flt_A9FAA0 * v10 * v10);
              float v25; // [esp+30h] [ebp-18h]
              v25 = (float)(ComputeChronosphereDistortion(v23));
              float v24; // [esp+2Ch] [ebp-1Ch]
              v24 = (float)(ComputeDistortionVariant(v23));
              float v16; // [esp+14h] [ebp-34h]
              v16 = v25 * v30 + v24 * v29 + v28; /*0x53c16e*/
              int v11; // ecx
              v11 = (int)v16; /*0x53c183*/
              float v17; // [esp+14h] [ebp-34h]
              v17 = v25 * v29 - v24 * v30 + v27; /*0x53c18b*/
              int v12; // eax
              v12 = (int)v17; /*0x53c194*/
              if ( v11 >= 0 ) /*0x53c199*/
              {
                if ( v11 >= v7 ) /*0x53c1a1*/
                  v11 = v7 - 1; /*0x53c1a3*/
              }
              else
              {
                v11 = 0; /*0x53c19b*/
              }
              if ( v12 >= 0 ) /*0x53c1a8*/
              {
                if ( v12 >= a5 ) /*0x53c1b3*/
                  v12 = a5 - 1; /*0x53c1b5*/
              }
              else
              {
                v12 = 0; /*0x53c1aa*/
              }
              v30 = v30 + 1.0; /*0x53c1c5*/
              unsigned int v13; // eax
              v13 = a2 + 2 * (v11 + a7 * v12); /*0x53c1d2*/
              (v13) = ((v13) & ~0xFFFF) | ((unsigned int)(*(unsigned short *)v13) & 0xFFFF); /*0x53c1d5*/
              *v26 = ((v13 & 0x1F) + ((int)(a3 * (31 - (v13 & 0x1F))) >> 8)) /*0x53c23a*/
              | (32 * (((v13 >> 5) & 0x3F) + ((int)(a3 * (63 - ((v13 >> 5) & 0x3F))) >> 8)))
              | ((((uint16_t)v13 >> 11) + (uint16_t)((a3 * (31 - ((uint16_t)v13 >> 11))) >> 8)) << 11);
              v7 = a4; /*0x53c23d*/
              a1 = ++v26; /*0x53c240*/
              --v22; /*0x53c247*/
            }
            while ( v22 ); /*0x53c24a*/
          }
          a1 += a6; /*0x53c25c*/
          result = v21 - 1; /*0x53c262*/
          v14 = v21 == 1; /*0x53c262*/
          v26 = a1; /*0x53c263*/
          --v21; /*0x53c266*/
          v29 = v29 + 1.0; /*0x53c269*/
        }
        while ( !v14 ); /*0x53c26c*/
      }
      return result; /*0x53c273*/
    }
  }
}
}  // G42.18 ns repair
// 0x652230
namespace gamemd {
AbstractClass * * Render_Show(CCINIClass * aP0, int a2, void * a1)
{
  char result; // al

  unsigned int v2; // eax
  v2 = (unsigned int)dword_A8ED84 + 1; /*0x652240*/
  if ( dword_A8B24C == 2 ) /*0x652246*/
    v2 = dword_A8B554 * (((unsigned int)dword_A8ED84 + dword_A8B554) / dword_A8B554); /*0x652255*/
  this->vtable4 = v2; /*0x652258*/
  if ( dword_8B41F8 >= 0x4000 ) /*0x652265*/
  {
    result = dword_A8B238[0]; /*0x6522b7*/
    if ( dword_A8B238[0] && dword_A8B238[0] != 5 ) /*0x6522c7*/
    {
      if ( dword_A8B238[0] == 4 ) /*0x6522d0*/
        Timer::UpdateDelta(); /*0x6522d2*/
      ++dword_A8DAB4; /*0x6522e4*/
      wchar_t *StringCSF; // [esp-10h] [ebp-18h]
      StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Queue_CPP, 8878); /*0x65230f*/
      int *v5; // eax
      v5 = (int *)GetStringCSF(g_Str_TXT_QUEUE_FULL, 0, g_Str_File_Queue_CPP, 8878); /*0x65231a*/
      int v7; // [esp+0h] [ebp-8h]
      Dialog::ShowMessageBox(v5, StringCSF, 0, 0, 0, v7); /*0x652324*/
      dword_A8B8B8 = 0; /*0x652335*/
      --dword_A8DAB4; /*0x652341*/
      dword_A8B8BC = 0; /*0x652347*/
      byte_A8E9A0 = 0; /*0x652351*/
      if ( dword_B04874 ) /*0x652358*/
        Mouse::HideWindow(); /*0x65235a*/
      if ( dword_A8B238[0] == 4 ) /*0x652366*/
      {
        byte_B0BD78 = 1; /*0x65236a*/
        byte_A8B8C1 = 1; /*0x65236f*/
        byte_A8B8C2 = 1; /*0x652374*/
        Timer::UpdateDelta(); /*0x652379*/
        ProcessGameResults(0); /*0x652380*/
      }
      MouseClass::LoadCursors(); /*0x652385*/
      return (gamemd::AbstractClass **)(ToggleDisplayMode(0)); /*0x65238c*/
    }
  }
  else
  {
    int v3; // eax
    if ( v3 ) /*0x65226e*/
      v3 = v3 - 1; /*0x652277*/
    else
      v3 = 0x3FFF; /*0x652270*/
    v3 = v3; /*0x65227b*/
    memcpy(&byte_8B4204[111 * v3], (const void *)this, 0x6Fu); /*0x652290*/
    dword_A70204[v3] = timeGetTime(); /*0x6522a3*/
    return (gamemd::AbstractClass **)(++dword_8B41F8); /*0x6522af*/
  }
  return (gamemd::AbstractClass **)(result); /*0x6522a2*/
}
}
// 0x705270
namespace gamemd {  // G42.18c ns repair
AbstractClass * * Render::DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{

  int result; // eax
  int v28; // [esp+28h] [ebp-9Ch]
  int v35; // [esp+44h] [ebp-80h] BYREF
  int v36; // [esp+48h] [ebp-7Ch]
  int v37; // [esp+4Ch] [ebp-78h]
  int v38; // [esp+50h] [ebp-74h]
  int v39; // [esp+54h] [ebp-70h] BYREF
  int v40; // [esp+58h] [ebp-6Ch]
  int v41; // [esp+5Ch] [ebp-68h]
  int v42; // [esp+60h] [ebp-64h]
  unsigned int v53[4]; // [esp+A4h] [ebp-20h] BYREF
  unsigned int v54[4]; // [esp+B4h] [ebp-10h] BYREF

  __int16 v31; // [esp+34h] [ebp-90h] BYREF
  v31 = 0; /*0x70527a*/
  unsigned __int8 v32; // [esp+36h] [ebp-8Eh]
  v32 = 0; /*0x705282*/
  int v29; // [esp+2Ch] [ebp-98h] BYREF
  (g_TacticalClass_Instance)->To_Screen(&a1, &v29); /*0x70529b*/
  int v33; // [esp+3Ch] [ebp-88h] BYREF
  (g_TacticalClass_Instance)->To_Screen(&a4, &v33); /*0x7052b3*/
  int v30; // [esp+30h] [ebp-94h]
  v30 += dword_886FA4; /*0x7052ce*/
  int v34; // [esp+40h] [ebp-84h]
  v34 += dword_886FA4; /*0x70530d*/
  int v8; // esi
  v8 = ((unsigned __int8)a7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x705348*/
  | (BYTE2(a7) >> g_BitMask_Red << g_BitShift_Blue)
  | (BYTE1(a7) >> g_BitMask_Blue << g_BitMask_Green);
  int v27; // [esp+24h] [ebp-A0h] BYREF
  v27 = (unsigned __int8)word_A83CDA; /*0x705363*/
  int v43[2]; // [esp+64h] [ebp-60h] BYREF
  v43[0] = v29; /*0x70538d*/
  int v9; // edi
  v9 = ((((word_A83CDA) >> 8) & 0xFF) >> g_BitMask_Red << g_BitShift_Blue) /*0x705397*/
  | ((unsigned __int8)word_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
  | ((unsigned __int8)byte_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
  char v10 = a8; // bl /*0x705399*/
  v43[1] = v30 + 1; /*0x7053b0*/
  int v44[2]; // [esp+6Ch] [ebp-58h] BYREF
  v44[0] = v33; /*0x7053b4*/
  v44[1] = v34 + 1; /*0x7053b8*/
  if ( a8 ) /*0x7053bc*/
  {
    v27 = -2; /*0x7053cb*/
    v28 = -2; /*0x7053dc*/
    unsigned int *v11; // eax
    unsigned int v52[2]; // [esp+9Ch] [ebp-28h] BYREF
    v11 = Coord2D::Add(&v27, v52, v43); /*0x7053e6*/
    int *v12; // eax
    v12 = (int *)(Rect::Construct(v53, v11, 3, 3)); /*0x7053f3*/
    v39 = *v12; /*0x7053fc*/
    v40 = v12->Y; /*0x705405*/
    v41 = v12->Width; /*0x70540c*/
    v42 = v12->Height; /*0x70541e*/
    int *v13; // eax
    v13 = (int *)(ClipRectIntersection(v54, &DSurface_ViewBounds, &v39, 0, 0)); /*0x705428*/
    v35 = *v13; /*0x705430*/
    v36 = v13->vtable2; /*0x705437*/
    v37 = v13->vtable3; /*0x70543e*/
    v38 = v13->vtable4; /*0x70544b*/
    (*(void (**)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v35, v8); /*0x705456*/
    v27 = -2; /*0x705462*/
    v28 = -2; /*0x705466*/
    unsigned int *v14; // eax
    v14 = Coord2D::Add(&v27, v52, v44); /*0x70547d*/
    int *v15; // eax
    v15 = (int *)(Rect::Construct(v54, v14, 3, 3)); /*0x70548a*/
    v35 = *v15; /*0x705493*/
    v36 = v15->Y; /*0x70549c*/
    v37 = v15->Width; /*0x7054a8*/
    v38 = v15->Height; /*0x7054bb*/
    int *v16; // eax
    v16 = (int *)(ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0)); /*0x7054bf*/
    v39 = *v16; /*0x7054c6*/
    v40 = v16->vtable2; /*0x7054cd*/
    v41 = v16->vtable3; /*0x7054d4*/
    v42 = v16->vtable4; /*0x7054e1*/
    (*(void (**)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7054ed*/
  }
  int v51[4]; // [esp+8Ch] [ebp-38h] BYREF
  v51[0] = (int)(DSurface_ViewBounds); /*0x705501*/
  v51[1] = dword_886FA4; /*0x70550b*/
  v51[2] = dword_886FA8; /*0x705511*/
  v51[3] = dword_886FAC; /*0x705518*/
  if ( v10 && ClipLine(v43, v44, v51) ) /*0x70552e*/
  {
    int v17; // eax
    if ( *(unsigned int *)(dword_87F6C4 + 4) == 1 ) /*0x705540*/
      v17 = **(unsigned __int8 **)(dword_87F6C4 + 372); /*0x70554c*/
    else
      v17 = **(unsigned __int16 **)(dword_87F6C4 + 372); /*0x705558*/
    (*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x70556e*/
      DSurface_Composite,
      v43,
      v44,
      v17);
  }
  v27 = v29 - 2; /*0x705583*/
  v28 = v30 - 2; /*0x70558b*/
  int *v18; // eax
  v18 = (int *)(Rect::Construct(v54, &v27, 3, 3)); /*0x705597*/
  v35 = *v18; /*0x7055a0*/
  v36 = v18->Y; /*0x7055a9*/
  v37 = v18->Width; /*0x7055b0*/
  v38 = v18->Height; /*0x7055c2*/
  int *v19; // eax
  v19 = (int *)(ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0)); /*0x7055cc*/
  v39 = *v19; /*0x7055d4*/
  v40 = v19->vtable2; /*0x7055db*/
  v41 = v19->vtable3; /*0x7055e2*/
  v42 = v19->vtable4; /*0x7055ef*/
  (*(void (**)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v9); /*0x7055fa*/
  v28 = v34 - 2; /*0x705611*/
  v27 = v33 - 2; /*0x70561f*/
  int *v20; // eax
  v20 = (int *)(Rect::Construct(v54, &v27, 3, 3)); /*0x705623*/
  v35 = *v20; /*0x70562c*/
  v36 = v20->Y; /*0x705635*/
  v37 = v20->Width; /*0x70563c*/
  v38 = v20->Height; /*0x70564e*/
  int *v21; // eax
  v21 = (int *)(ClipRectIntersection(v53, &DSurface_ViewBounds, &v35, 0, 0)); /*0x705658*/
  v39 = *v21; /*0x705660*/
  v40 = v21->vtable2; /*0x705667*/
  v41 = v21->vtable3; /*0x70566e*/
  v42 = v21->vtable4; /*0x70567b*/
  (*(void (**)(int, int *, int))(*(unsigned int *)DSurface_Composite + 20))(DSurface_Composite, &v39, v8); /*0x705686*/
  int v45; // [esp+74h] [ebp-50h] BYREF
  v45 = a1; /*0x70569e*/
  int v46; // [esp+78h] [ebp-4Ch]
  v46 = a2; /*0x7056a2*/
  int v47; // [esp+7Ch] [ebp-48h]
  v47 = a3; /*0x7056a6*/
  int v22 = 1; // esi /*0x7056aa*/
  int v23 = 63; // edi /*0x7056af*/
  int v24 = 252; // ebx /*0x7056b4*/
  do /*0x705841*/
  {
    int v48; // [esp+80h] [ebp-44h] BYREF
    v48 = (v22 * a4 + v23 * a1) / 64; /*0x7056ec*/
    int v49; // [esp+84h] [ebp-40h]
    v49 = (v22 * a5 + v23 * a2) / 64; /*0x705705*/
    int v50; // [esp+88h] [ebp-3Ch]
    v50 = (v22 * a6 + v23 * a3) / 64; /*0x705728*/
    (g_TacticalClass_Instance)->To_Screen(&v45, &v29); /*0x705732*/
    (g_TacticalClass_Instance)->To_Screen(&v48, &v33); /*0x705747*/
    v30 += dword_886FA4; /*0x705761*/
    v34 += dword_886FA4; /*0x70576e*/
    if ( ClipLine(&v29, &v33, v51) ) /*0x705772*/
    {
      v31 = a7; /*0x705794*/
      v32 = BYTE2(a7); /*0x705799*/
      unsigned __int8 v25 = v24; // al /*0x70579d*/
      if ( v24 >= 254 ) /*0x70579f*/
        v25 = -2; /*0x7057a1*/
      Color::Lerp((unsigned __int8 *)&v31, v25, (unsigned __int8 *)&byte_A83CD9); /*0x7057b0*/
      (*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x70581e*/
        DSurface_Composite,
        &v29,
        &v33,
        ((unsigned __int8)v31 >> g_BitShift_Green_0 << g_BitShift_Red)
        | (HIBYTE(v31) >> g_BitMask_Blue << g_BitMask_Green)
        | (v32 >> g_BitMask_Red << g_BitShift_Blue));
    }
    result = v50; /*0x705829*/
    ++v22; /*0x70582d*/
    --v23; /*0x70582e*/
    v24 -= 4; /*0x70582f*/
    v45 = v48; /*0x705835*/
    v46 = v49; /*0x705839*/
    v47 = v50; /*0x70583d*/
  }
  while ( v22 <= 64 ); /*0x705841*/
  return (gamemd::AbstractClass **)(result); /*0x705847*/

}
}  // G42.18c ns repair
// 0x780D90
namespace gamemd {
wchar_t ** Render_Format(wchar_t ** a1, char ** a2)
{

  char *v4; // eax
  wchar_t *StringCSF; // eax
  int v7; // edi
  wchar_t *v8; // esi
  char *v9; // eax

  v4 = String::GetOrEmpty_Alt(a2); /*0x780d9f*/
  if ( _strcmpi(v4, aRandmapSed) ) /*0x780da5*/
  {
    v7 = 0; /*0x780ddb*/
    if ( dword_A8B8D8 <= 0 ) /*0x780ddf*/
    {
LABEL_6:
      WideString::Assign((WideString *)a1, &g_TypeClass_DefaultString); /*0x780e0b*/
      return a1; /*0x780e17*/
    }
    else
    {
      while ( 1 ) /*0x780de6*/
      {
        v8 = *(wchar_t **)(dword_A8B8CC + 4 * v7); /*0x780de6*/
        v9 = String::GetOrEmpty_Alt(a2); /*0x780def*/
        if ( !_strcmpi(v9, v8 + 44) ) /*0x780df5*/
          break; /*0x780df5*/
        if ( ++v7 >= dword_A8B8D8 ) /*0x780e09*/
          goto LABEL_6; /*0x780e09*/
      }
      WideString::Assign((WideString *)a1, v8); /*0x780e21*/
      return a1; /*0x780e26*/
    }
  }
  else
  {
    StringCSF = GetStringCSF(aTxtRandomMapDe, 0, g_Str_File_wonline_cpp, 2970); /*0x780dc2*/
    WideString::Assign((WideString *)a1, StringCSF); /*0x780dca*/
    return a1; /*0x780dcf*/
  }

}
}
// 0x7C7371
namespace gamemd {  // G42.18c ns repair
void Render::DrawTileBitmap(int a1, unsigned short * a2, short a3, short a4, unsigned int a5, int a6)
{

  int v6; // eax
  int v7; // edx
  int v8; // esi
  unsigned short *v9; // edi
  signed int v10; // ebp
  unsigned __int8 *v11; // ebx
  bool v12; // zf
  bool k; // cc
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // esi
  unsigned short *v21; // edi
  unsigned int v22; // ebp
  signed int v23; // ebp
  unsigned __int8 *v24; // ebx
  bool v25; // zf
  bool i; // cc
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned short *v31; // edi
  int v32; // esi
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ebp
  signed int v36; // ebp
  unsigned __int8 *v37; // ebx
  bool v38; // zf
  bool j; // cc
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // [esp-14h] [ebp-20h]
  unsigned int v45; // [esp-14h] [ebp-20h]
  unsigned int v46; // [esp-14h] [ebp-20h]

  if ( a3 == 16 ) /*0x7c7388*/
  {
    if ( a4 == 2 ) /*0x7c73b2*/
    {
      v18 = *(unsigned int *)a6; /*0x7c778c*/
      v19 = *(unsigned __int16 *)(a6 + 4); /*0x7c778e*/
      v20 = a1; /*0x7c7792*/
      v21 = a2; /*0x7c7795*/
      v22 = a5 >> 1; /*0x7c779b*/
      if ( a5 >> 1 >= 0x10 && (a1 & 3) != 0 ) /*0x7c77a7*/
      {
        switch ( a1 & 3 ) /*0x7c77b6*/
        {
          case 0: /*0x7c77b6*/
            break;
          case 1: /*0x7c77b6*/
            v45 = v22 - 12; /*0x7c77c3*/
            v24 = 0; /*0x7c77c7*/
            v23 = ((v22 - 12) >> 4) + 1; /*0x7c77c9*/
LABEL_121:
            v30 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ae0*/
            LOWORD(v30) = *(unsigned short *)v20; /*0x7c7ae8*/
            LOBYTE(v24) = *(unsigned short *)v20; /*0x7c7aeb*/
            v27 = v30 >> 8; /*0x7c7aed*/
            --v20; /*0x7c7af0*/
            v21 -= 4; /*0x7c7af3*/
            LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c7af6*/
            goto LABEL_79; /*0x7c7afc*/
          case 2: /*0x7c77b6*/
            v45 = v22 - 8; /*0x7c77d3*/
            v24 = 0; /*0x7c77d7*/
            v23 = ((v22 - 8) >> 4) + 1; /*0x7c77d9*/
LABEL_119:
            LOWORD(v27) = *(unsigned short *)v20; /*0x7c7aa4*/
            LOBYTE(v24) = *(unsigned short *)v20; /*0x7c7aa9*/
            v21 -= 8; /*0x7c7aab*/
            v20 -= 2; /*0x7c7aae*/
            LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c7ab1*/
            goto LABEL_87; /*0x7c7ab7*/
          case 3: /*0x7c77b6*/
            v45 = v22 - 4; /*0x7c77e3*/
            v24 = 0; /*0x7c77e7*/
            v23 = ((v22 - 4) >> 4) + 1; /*0x7c77e9*/
LABEL_117:
            LOBYTE(v24) = *(unsigned char *)v20; /*0x7c7a70*/
            v21 -= 12; /*0x7c7a76*/
            v20 -= 3; /*0x7c7a79*/
            LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c7a7c*/
            goto LABEL_95; /*0x7c7a82*/
        }
      }
      v45 = a5 >> 1; /*0x7c77a9*/
      v23 = a5 >> 5; /*0x7c77aa*/
      v24 = 0; /*0x7c77ad*/
      v25 = a5 >> 5 == 0; /*0x7c77af*/
      for ( i = v25; !i; i = v23-- <= 1 ) /*0x7c77af*/
      {
        v28 = *(unsigned int *)v20; /*0x7c796b*/
        LOBYTE(v24) = *(unsigned int *)v20; /*0x7c796d*/
        LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c796f*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c77f0*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c77f7*/
        if ( v18 > 0x7FFF ) /*0x7c7803*/
        {
          v18 = 0x7FFF; /*0x7c7998*/
        }
        else if ( v18 < -32768 ) /*0x7c780e*/
        {
          v18 = -32768; /*0x7c79a4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7814*/
        *v21 = v18; /*0x7c781a*/
LABEL_75:
        LOBYTE(v24) = (((v28) >> 8) & 0xFF); /*0x7c781d*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c781f*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7826*/
        if ( v18 > 0x7FFF ) /*0x7c7832*/
        {
          v18 = 0x7FFF; /*0x7c79b0*/
        }
        else if ( v18 < -32768 ) /*0x7c783d*/
        {
          v18 = -32768; /*0x7c79bc*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c7843*/
        v21[2] = v18; /*0x7c7849*/
        v27 = (((v28) >> 16) & 0xFFFF); /*0x7c784d*/
LABEL_79:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7850*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7857*/
        if ( v18 > 0x7FFF ) /*0x7c7863*/
        {
          v18 = 0x7FFF; /*0x7c79c8*/
        }
        else if ( v18 < -32768 ) /*0x7c786e*/
        {
          v18 = -32768; /*0x7c79d4*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7874*/
        v21[4] = v18; /*0x7c787a*/
LABEL_83:
        LOBYTE(v24) = v27; /*0x7c787e*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c7880*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7887*/
        if ( v18 > 0x7FFF ) /*0x7c7893*/
        {
          v18 = 0x7FFF; /*0x7c79e0*/
        }
        else if ( v18 < -32768 ) /*0x7c789e*/
        {
          v18 = -32768; /*0x7c79ec*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c78a4*/
        v21[6] = v18; /*0x7c78aa*/
LABEL_87:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78ae*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78b5*/
        if ( v18 > 0x7FFF ) /*0x7c78c1*/
        {
          v18 = 0x7FFF; /*0x7c79f8*/
        }
        else if ( v18 < -32768 ) /*0x7c78cc*/
        {
          v18 = -32768; /*0x7c7a04*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c78d2*/
        v21[8] = v18; /*0x7c78d8*/
LABEL_91:
        LOBYTE(v24) = (((v27) >> 8) & 0xFF); /*0x7c78dc*/
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c78de*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c78e5*/
        if ( v18 > 0x7FFF ) /*0x7c78f1*/
        {
          v18 = 0x7FFF; /*0x7c7a10*/
        }
        else if ( v18 < -32768 ) /*0x7c78fc*/
        {
          v18 = -32768; /*0x7c7a1c*/
        }
        LOBYTE(v19) = g_ScreenRenderMask[(unsigned int)v24] | v19; /*0x7c7902*/
        v21[10] = v18; /*0x7c7908*/
LABEL_95:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c790c*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7913*/
        if ( v18 > 0x7FFF ) /*0x7c791f*/
        {
          v18 = 0x7FFF; /*0x7c7a28*/
        }
        else if ( v18 < -32768 ) /*0x7c792a*/
        {
          v18 = -32768; /*0x7c7a34*/
        }
        LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7930*/
        v21[12] = v18; /*0x7c7936*/
LABEL_99:
        v18 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v19); /*0x7c793a*/
        LOWORD(v19) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v19); /*0x7c7941*/
        if ( v18 > 0x7FFF ) /*0x7c794d*/
        {
          v18 = 0x7FFF; /*0x7c7a40*/
        }
        else if ( v18 < -32768 ) /*0x7c7958*/
        {
          v18 = -32768; /*0x7c7a4c*/
        }
        v21[14] = v18; /*0x7c795e*/
        v20 += 4; /*0x7c7962*/
        v21 += 16; /*0x7c7965*/
        v25 = v23 == 1; /*0x7c7968*/
      }
      if ( v25 ) /*0x7c797a*/
      {
        switch ( (v45 >> 1) & 7 ) /*0x7c7982*/
        {
          case 0u: /*0x7c7982*/
            break;
          case 1u: /*0x7c7982*/
            LOBYTE(v24) = 16 * *(unsigned char *)v20; /*0x7c7a5f*/
            v21 -= 14; /*0x7c7a61*/
            LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7a64*/
            goto LABEL_99; /*0x7c7a6a*/
          case 2u: /*0x7c7982*/
            goto LABEL_117;
          case 3u: /*0x7c7982*/
            LOWORD(v27) = 16 * *(unsigned short *)v20; /*0x7c7a8d*/
            LOBYTE(v24) = 16 * *(unsigned char *)v20; /*0x7c7a91*/
            v21 -= 10; /*0x7c7a93*/
            LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7a96*/
            goto LABEL_91; /*0x7c7a9c*/
          case 4u: /*0x7c7982*/
            goto LABEL_119;
          case 5u: /*0x7c7982*/
            v29 = *(unsigned __int8 *)(v20 + 2) << 16; /*0x7c7ac1*/
            LOWORD(v29) = *(unsigned short *)v20; /*0x7c7ac4*/
            v27 = v29 >> 4; /*0x7c7ac9*/
            LOBYTE(v24) = 16 * *(unsigned short *)v20; /*0x7c7acc*/
            v21 -= 6; /*0x7c7acf*/
            LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7ad2*/
            goto LABEL_83; /*0x7c7ad8*/
          case 6u: /*0x7c7982*/
            goto LABEL_121;
          case 7u: /*0x7c7982*/
            v28 = 16 * *(unsigned int *)v20; /*0x7c7b08*/
            LOBYTE(v24) = 16 * *(unsigned char *)v20; /*0x7c7b0b*/
            v21 -= 2; /*0x7c7b0d*/
            LOBYTE(v19) = g_ScreenRenderFlag[(unsigned int)v24] | v19; /*0x7c7b10*/
            goto LABEL_75; /*0x7c7b16*/
        }
      }
      *(unsigned int *)a6 = v18; /*0x7c7989*/
      *(unsigned short *)(a6 + 4) = v19; /*0x7c798d*/
      v31 = a2 + 1; /*0x7c7b54*/
      v32 = (a5 >> 3) + a1; /*0x7c7b5d*/
      v33 = *(unsigned int *)(a6 + 6); /*0x7c7b61*/
      v34 = *(unsigned __int16 *)(a6 + 10); /*0x7c7b64*/
      v35 = a5 >> 1; /*0x7c7b6b*/
      if ( a5 >> 1 >= 0x10 && (v32 & 3) != 0 ) /*0x7c7b77*/
      {
        switch ( v32 & 3 ) /*0x7c7b86*/
        {
          case 0: /*0x7c7b86*/
            break;
          case 1: /*0x7c7b86*/
            v46 = v35 - 12; /*0x7c7b93*/
            v37 = 0; /*0x7c7b97*/
            v36 = ((v35 - 12) >> 4) + 1; /*0x7c7b99*/
LABEL_180:
            v43 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7eb4*/
            LOWORD(v43) = *(unsigned short *)v32; /*0x7c7ebc*/
            LOBYTE(v37) = *(unsigned short *)v32; /*0x7c7ebf*/
            v40 = v43 >> 8; /*0x7c7ec1*/
            --v32; /*0x7c7ec4*/
            v31 -= 4; /*0x7c7ec7*/
            LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7eca*/
            goto LABEL_138; /*0x7c7ed0*/
          case 2: /*0x7c7b86*/
            v46 = v35 - 8; /*0x7c7ba3*/
            v37 = 0; /*0x7c7ba7*/
            v36 = ((v35 - 8) >> 4) + 1; /*0x7c7ba9*/
LABEL_178:
            LOWORD(v40) = *(unsigned short *)v32; /*0x7c7e78*/
            LOBYTE(v37) = *(unsigned short *)v32; /*0x7c7e7d*/
            v31 -= 8; /*0x7c7e7f*/
            v32 -= 2; /*0x7c7e82*/
            LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7e85*/
            goto LABEL_146; /*0x7c7e8b*/
          case 3: /*0x7c7b86*/
            v46 = v35 - 4; /*0x7c7bb3*/
            v37 = 0; /*0x7c7bb7*/
            v36 = ((v35 - 4) >> 4) + 1; /*0x7c7bb9*/
LABEL_176:
            LOBYTE(v37) = *(unsigned char *)v32; /*0x7c7e44*/
            v31 -= 12; /*0x7c7e4a*/
            v32 -= 3; /*0x7c7e4d*/
            LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7e50*/
            goto LABEL_154; /*0x7c7e56*/
        }
      }
      v46 = a5 >> 1; /*0x7c7b79*/
      v36 = a5 >> 5; /*0x7c7b7a*/
      v37 = 0; /*0x7c7b7d*/
      v38 = a5 >> 5 == 0; /*0x7c7b7f*/
      for ( j = v38; !j; j = v36-- <= 1 ) /*0x7c7b7f*/
      {
        v41 = *(unsigned int *)v32; /*0x7c7d3b*/
        LOBYTE(v37) = *(unsigned int *)v32; /*0x7c7d3d*/
        LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7d3f*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bc0*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bc7*/
        if ( v33 > 0x7FFF ) /*0x7c7bd3*/
        {
          v33 = 0x7FFF; /*0x7c7d6c*/
        }
        else if ( v33 < -32768 ) /*0x7c7bde*/
        {
          v33 = -32768; /*0x7c7d78*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7be4*/
        *v31 = v33; /*0x7c7bea*/
LABEL_134:
        LOBYTE(v37) = (((v41) >> 8) & 0xFF); /*0x7c7bed*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7bef*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7bf6*/
        if ( v33 > 0x7FFF ) /*0x7c7c02*/
        {
          v33 = 0x7FFF; /*0x7c7d84*/
        }
        else if ( v33 < -32768 ) /*0x7c7c0d*/
        {
          v33 = -32768; /*0x7c7d90*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7c13*/
        v31[2] = v33; /*0x7c7c19*/
        v40 = (((v41) >> 16) & 0xFFFF); /*0x7c7c1d*/
LABEL_138:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c20*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c27*/
        if ( v33 > 0x7FFF ) /*0x7c7c33*/
        {
          v33 = 0x7FFF; /*0x7c7d9c*/
        }
        else if ( v33 < -32768 ) /*0x7c7c3e*/
        {
          v33 = -32768; /*0x7c7da8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7c44*/
        v31[4] = v33; /*0x7c7c4a*/
LABEL_142:
        LOBYTE(v37) = v40; /*0x7c7c4e*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c50*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c57*/
        if ( v33 > 0x7FFF ) /*0x7c7c63*/
        {
          v33 = 0x7FFF; /*0x7c7db4*/
        }
        else if ( v33 < -32768 ) /*0x7c7c6e*/
        {
          v33 = -32768; /*0x7c7dc0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7c74*/
        v31[6] = v33; /*0x7c7c7a*/
LABEL_146:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7c7e*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7c85*/
        if ( v33 > 0x7FFF ) /*0x7c7c91*/
        {
          v33 = 0x7FFF; /*0x7c7dcc*/
        }
        else if ( v33 < -32768 ) /*0x7c7c9c*/
        {
          v33 = -32768; /*0x7c7dd8*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7ca2*/
        v31[8] = v33; /*0x7c7ca8*/
LABEL_150:
        LOBYTE(v37) = (((v40) >> 8) & 0xFF); /*0x7c7cac*/
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cae*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7cb5*/
        if ( v33 > 0x7FFF ) /*0x7c7cc1*/
        {
          v33 = 0x7FFF; /*0x7c7de4*/
        }
        else if ( v33 < -32768 ) /*0x7c7ccc*/
        {
          v33 = -32768; /*0x7c7df0*/
        }
        LOBYTE(v34) = g_ScreenRenderMask[(unsigned int)v37] | v34; /*0x7c7cd2*/
        v31[10] = v33; /*0x7c7cd8*/
LABEL_154:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7cdc*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7ce3*/
        if ( v33 > 0x7FFF ) /*0x7c7cef*/
        {
          v33 = 0x7FFF; /*0x7c7dfc*/
        }
        else if ( v33 < -32768 ) /*0x7c7cfa*/
        {
          v33 = -32768; /*0x7c7e08*/
        }
        LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7d00*/
        v31[12] = v33; /*0x7c7d06*/
LABEL_158:
        v33 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v34); /*0x7c7d0a*/
        LOWORD(v34) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v34); /*0x7c7d11*/
        if ( v33 > 0x7FFF ) /*0x7c7d1d*/
        {
          v33 = 0x7FFF; /*0x7c7e14*/
        }
        else if ( v33 < -32768 ) /*0x7c7d28*/
        {
          v33 = -32768; /*0x7c7e20*/
        }
        v31[14] = v33; /*0x7c7d2e*/
        v32 += 4; /*0x7c7d32*/
        v31 += 16; /*0x7c7d35*/
        v38 = v36 == 1; /*0x7c7d38*/
      }
      if ( v38 ) /*0x7c7d4a*/
      {
        switch ( (v46 >> 1) & 7 ) /*0x7c7d52*/
        {
          case 0u: /*0x7c7d52*/
            break;
          case 1u: /*0x7c7d52*/
            LOBYTE(v37) = 16 * *(unsigned char *)v32; /*0x7c7e33*/
            v31 -= 14; /*0x7c7e35*/
            LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7e38*/
            goto LABEL_158; /*0x7c7e3e*/
          case 2u: /*0x7c7d52*/
            goto LABEL_176;
          case 3u: /*0x7c7d52*/
            LOWORD(v40) = 16 * *(unsigned short *)v32; /*0x7c7e61*/
            LOBYTE(v37) = 16 * *(unsigned char *)v32; /*0x7c7e65*/
            v31 -= 10; /*0x7c7e67*/
            LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7e6a*/
            goto LABEL_150; /*0x7c7e70*/
          case 4u: /*0x7c7d52*/
            goto LABEL_178;
          case 5u: /*0x7c7d52*/
            v42 = *(unsigned __int8 *)(v32 + 2) << 16; /*0x7c7e95*/
            LOWORD(v42) = *(unsigned short *)v32; /*0x7c7e98*/
            v40 = v42 >> 4; /*0x7c7e9d*/
            LOBYTE(v37) = 16 * *(unsigned short *)v32; /*0x7c7ea0*/
            v31 -= 6; /*0x7c7ea3*/
            LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7ea6*/
            goto LABEL_142; /*0x7c7eac*/
          case 6u: /*0x7c7d52*/
            goto LABEL_180;
          case 7u: /*0x7c7d52*/
            v41 = 16 * *(unsigned int *)v32; /*0x7c7edc*/
            LOBYTE(v37) = 16 * *(unsigned char *)v32; /*0x7c7edf*/
            v31 -= 2; /*0x7c7ee1*/
            LOBYTE(v34) = g_ScreenRenderFlag[(unsigned int)v37] | v34; /*0x7c7ee4*/
            goto LABEL_134; /*0x7c7eea*/
        }
      }
      *(unsigned int *)(a6 + 6) = v33; /*0x7c7d59*/
      *(unsigned short *)(a6 + 10) = v34; /*0x7c7d5e*/
    }
    else if ( a4 == 1 ) /*0x7c73bd*/
    {
      v6 = *(unsigned int *)a6; /*0x7c73c7*/
      v7 = *(unsigned __int16 *)(a6 + 4); /*0x7c73c9*/
      v8 = a1; /*0x7c73cd*/
      v9 = a2; /*0x7c73d0*/
      if ( (int)a5 >= 16 && (a1 & 3) != 0 ) /*0x7c73e0*/
      {
        switch ( a1 & 3 ) /*0x7c73ef*/
        {
          case 0: /*0x7c73ef*/
            break;
          case 1: /*0x7c73ef*/
            v44 = a5 - 12; /*0x7c73fb*/
            v11 = 0; /*0x7c73ff*/
            v10 = ((a5 - 12) >> 4) + 1; /*0x7c7401*/
LABEL_62:
            v17 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c771c*/
            LOWORD(v17) = *(unsigned short *)v8; /*0x7c7724*/
            LOBYTE(v11) = *(unsigned short *)v8; /*0x7c7727*/
            v14 = v17 >> 8; /*0x7c7729*/
            --v8; /*0x7c772c*/
            v9 -= 2; /*0x7c772f*/
            LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c7732*/
            goto LABEL_19; /*0x7c7738*/
          case 2: /*0x7c73ef*/
            v44 = a5 - 8; /*0x7c740b*/
            v11 = 0; /*0x7c740f*/
            v10 = ((a5 - 8) >> 4) + 1; /*0x7c7411*/
LABEL_60:
            LOWORD(v14) = *(unsigned short *)v8; /*0x7c76e0*/
            LOBYTE(v11) = *(unsigned short *)v8; /*0x7c76e5*/
            v9 -= 4; /*0x7c76e7*/
            v8 -= 2; /*0x7c76ea*/
            LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c76ed*/
            goto LABEL_27; /*0x7c76f3*/
          case 3: /*0x7c73ef*/
            v44 = a5 - 4; /*0x7c741b*/
            v11 = 0; /*0x7c741f*/
            v10 = ((a5 - 4) >> 4) + 1; /*0x7c7421*/
LABEL_58:
            LOBYTE(v11) = *(unsigned char *)v8; /*0x7c76ac*/
            v9 -= 6; /*0x7c76b2*/
            v8 -= 3; /*0x7c76b5*/
            LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c76b8*/
            goto LABEL_35; /*0x7c76be*/
        }
      }
      v44 = a5; /*0x7c73e2*/
      v10 = a5 >> 4; /*0x7c73e3*/
      v11 = 0; /*0x7c73e6*/
      v12 = a5 >> 4 == 0; /*0x7c73e8*/
      for ( k = v12; !k; k = v10-- <= 1 ) /*0x7c73e8*/
      {
        v15 = *(unsigned int *)v8; /*0x7c75a3*/
        LOBYTE(v11) = *(unsigned int *)v8; /*0x7c75a5*/
        LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c75a7*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7428*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c742f*/
        if ( v6 > 0x7FFF ) /*0x7c743b*/
        {
          v6 = 0x7FFF; /*0x7c75d4*/
        }
        else if ( v6 < -32768 ) /*0x7c7446*/
        {
          v6 = -32768; /*0x7c75e0*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c744c*/
        *v9 = v6; /*0x7c7452*/
LABEL_15:
        LOBYTE(v11) = (((v15) >> 8) & 0xFF); /*0x7c7455*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7457*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c745e*/
        if ( v6 > 0x7FFF ) /*0x7c746a*/
        {
          v6 = 0x7FFF; /*0x7c75ec*/
        }
        else if ( v6 < -32768 ) /*0x7c7475*/
        {
          v6 = -32768; /*0x7c75f8*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c747b*/
        v9[1] = v6; /*0x7c7481*/
        v14 = (((v15) >> 16) & 0xFFFF); /*0x7c7485*/
LABEL_19:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7488*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c748f*/
        if ( v6 > 0x7FFF ) /*0x7c749b*/
        {
          v6 = 0x7FFF; /*0x7c7604*/
        }
        else if ( v6 < -32768 ) /*0x7c74a6*/
        {
          v6 = -32768; /*0x7c7610*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c74ac*/
        v9[2] = v6; /*0x7c74b2*/
LABEL_23:
        LOBYTE(v11) = v14; /*0x7c74b6*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74b8*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74bf*/
        if ( v6 > 0x7FFF ) /*0x7c74cb*/
        {
          v6 = 0x7FFF; /*0x7c761c*/
        }
        else if ( v6 < -32768 ) /*0x7c74d6*/
        {
          v6 = -32768; /*0x7c7628*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c74dc*/
        v9[3] = v6; /*0x7c74e2*/
LABEL_27:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c74e6*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c74ed*/
        if ( v6 > 0x7FFF ) /*0x7c74f9*/
        {
          v6 = 0x7FFF; /*0x7c7634*/
        }
        else if ( v6 < -32768 ) /*0x7c7504*/
        {
          v6 = -32768; /*0x7c7640*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c750a*/
        v9[4] = v6; /*0x7c7510*/
LABEL_31:
        LOBYTE(v11) = (((v14) >> 8) & 0xFF); /*0x7c7514*/
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7516*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c751d*/
        if ( v6 > 0x7FFF ) /*0x7c7529*/
        {
          v6 = 0x7FFF; /*0x7c764c*/
        }
        else if ( v6 < -32768 ) /*0x7c7534*/
        {
          v6 = -32768; /*0x7c7658*/
        }
        LOBYTE(v7) = g_ScreenRenderMask[(unsigned int)v11] | v7; /*0x7c753a*/
        v9[5] = v6; /*0x7c7540*/
LABEL_35:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7544*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c754b*/
        if ( v6 > 0x7FFF ) /*0x7c7557*/
        {
          v6 = 0x7FFF; /*0x7c7664*/
        }
        else if ( v6 < -32768 ) /*0x7c7562*/
        {
          v6 = -32768; /*0x7c7670*/
        }
        LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c7568*/
        v9[6] = v6; /*0x7c756e*/
LABEL_39:
        v6 += *(int *)((char *)&g_ScreenRenderLUT1 + 2 * v7); /*0x7c7572*/
        LOWORD(v7) = *(__int16 *)((char *)&g_ScreenRenderLUT2 + v7); /*0x7c7579*/
        if ( v6 > 0x7FFF ) /*0x7c7585*/
        {
          v6 = 0x7FFF; /*0x7c767c*/
        }
        else if ( v6 < -32768 ) /*0x7c7590*/
        {
          v6 = -32768; /*0x7c7688*/
        }
        v9[7] = v6; /*0x7c7596*/
        v8 += 4; /*0x7c759a*/
        v9 += 8; /*0x7c759d*/
        v12 = v10 == 1; /*0x7c75a0*/
      }
      if ( v12 ) /*0x7c75b2*/
      {
        switch ( (v44 >> 1) & 7 ) /*0x7c75ba*/
        {
          case 0u: /*0x7c75ba*/
            break;
          case 1u: /*0x7c75ba*/
            LOBYTE(v11) = 16 * *(unsigned char *)v8; /*0x7c769b*/
            v9 -= 7; /*0x7c769d*/
            LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c76a0*/
            goto LABEL_39; /*0x7c76a6*/
          case 2u: /*0x7c75ba*/
            goto LABEL_58;
          case 3u: /*0x7c75ba*/
            LOWORD(v14) = 16 * *(unsigned short *)v8; /*0x7c76c9*/
            LOBYTE(v11) = 16 * *(unsigned char *)v8; /*0x7c76cd*/
            v9 -= 5; /*0x7c76cf*/
            LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c76d2*/
            goto LABEL_31; /*0x7c76d8*/
          case 4u: /*0x7c75ba*/
            goto LABEL_60;
          case 5u: /*0x7c75ba*/
            v16 = *(unsigned __int8 *)(v8 + 2) << 16; /*0x7c76fd*/
            LOWORD(v16) = *(unsigned short *)v8; /*0x7c7700*/
            v14 = v16 >> 4; /*0x7c7705*/
            LOBYTE(v11) = 16 * *(unsigned short *)v8; /*0x7c7708*/
            v9 -= 3; /*0x7c770b*/
            LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c770e*/
            goto LABEL_23; /*0x7c7714*/
          case 6u: /*0x7c75ba*/
            goto LABEL_62;
          case 7u: /*0x7c75ba*/
            v15 = 16 * *(unsigned int *)v8; /*0x7c7744*/
            LOBYTE(v11) = 16 * *(unsigned char *)v8; /*0x7c7747*/
            --v9; /*0x7c7749*/
            LOBYTE(v7) = g_ScreenRenderFlag[(unsigned int)v11] | v7; /*0x7c774c*/
            goto LABEL_15; /*0x7c7752*/
        }
      }
      *(unsigned int *)a6 = v6; /*0x7c75c1*/
      *(unsigned short *)(a6 + 4) = v7; /*0x7c75c5*/
    }
  }

}
}  // G42.18c ns repair
// 0x731BF0
namespace gamemd {
char sub_731BF0()
{

  if ( byte_B0FE58 ) /*0x731bfa*/
    return 1; /*0x731c01*/
  bool v1; // bl
  v1 = Mouse::IsButtonDown(dword_A8EC00) || Mouse::IsButtonDown(dword_A8EC04); /*0x731c31*/
  bool IsButtonDown; // al
  if ( Mouse::IsButtonDown(dword_A8EC08) || (IsButtonDown = Mouse::IsButtonDown(dword_A8EC0C)) ) /*0x731c54*/
    IsButtonDown = 1; /*0x731c5d*/
  if ( v1 && IsButtonDown ) /*0x731c66*/
  {
    wchar_t *v3 = dword_A8ECC8; // edi /*0x731c68*/
    int v4 = 0; // esi /*0x731c6e*/
    if ( (int)dword_A8ECC8 <= 0 ) /*0x731c72*/
      return 1; /*0x731ca2*/
    while ( 1 ) /*0x731c79*/
    {
      unsigned char *v5; // ecx
      v5 = (unsigned char *)*((unsigned int *)dword_A8ECBC + v4); /*0x731c79*/
      if ( v5 ) /*0x731c7e*/
      {
        if ( (v5[20] & 1) != 0 && !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v5 + 1216))(v5) ) /*0x731c8e*/
          break; /*0x731c8e*/
      }
      if ( ++v4 >= (int)v3 ) /*0x731c9b*/
        return 1; /*0x731c9b*/
    }
  }
  return 0; /*0x731bfc*/
}
}
// 0x777E00
namespace gamemd {
int sub_777E00()
{

  BOOL result = 0; // eax /*0x777e06*/
  WideCharStr[0] = 0; /*0x777e0a*/
  dword_B73564 = 0; /*0x777e10*/
  MaxCount = 0; /*0x777e15*/
  dword_B7356C = 0; /*0x777e1a*/
  word_B730EC = 0; /*0x777e1f*/
  if ( dword_B7355C ) /*0x777e25*/
    return ImmNotifyIME(dword_B7355C, 0x15u, 4u, 0); /*0x777e2d*/
  return result; /*0x777e32*/
}
}
// 0x778030
namespace gamemd {
int Render_Draw_778030(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v5; // edx
  UINT v6; // edx
  LRESULT v7; // eax

  if ( Msg > 0x281 ) /*0x778039*/
  {
    switch ( Msg ) /*0x7780d6*/
    {
      case 0x282u: /*0x7780d6*/
      case 0x285u: /*0x7780d6*/
      case 0x290u: /*0x7780d6*/
      case 0x291u: /*0x7780d6*/
        v7 = DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x7780e9*/
        goto LABEL_12; /*0x7780e9*/
      default:
        return 0;
    }
  }
  if ( Msg == 641 ) /*0x77803f*/
  {
    v7 = DefWindowProcA(hWnd, 0x281u, wParam, lParam); /*0x7780c1*/
    goto LABEL_12; /*0x7780c1*/
  }
  v5 = Msg - 269; /*0x778041*/
  if ( !v5 ) /*0x778047*/
  {
    ProcessCompositionIME(); /*0x778089*/
    word_B730EC = 0; /*0x778098*/
    dword_B7356C = 1; /*0x7780a1*/
    v7 = DefWindowProcA(hWnd, 0x10Du, wParam, lParam); /*0x7780b0*/
    goto LABEL_12; /*0x7780b0*/
  }
  v6 = v5 - 1; /*0x778049*/
  if ( !v6 ) /*0x77804a*/
  {
    ProcessCompositionIME(); /*0x778069*/
    dword_B7356C = 0; /*0x778078*/
    v7 = DefWindowProcA(hWnd, 0x10Eu, wParam, lParam); /*0x778087*/
    goto LABEL_12; /*0x778087*/
  }
  if ( v6 == 1 ) /*0x77804d*/
  {
    ProcessCompositionIME(); /*0x778053*/
    v7 = DefWindowProcA(hWnd, 0x10Fu, wParam, lParam); /*0x778067*/
    LABEL_12:
    dword_B73570 = v7; /*0x7780ef*/
    return 1; /*0x7780fa*/
  }
  return 0; /*0x7780f9*/
}
}
// 0x778120
namespace gamemd {
int sub_778120()
{
  return dword_B73570; /*0x778125*/
}
}
// 0x6CA310
namespace gamemd {
WinModemClass * * Render_Parse_6CA310(CampaignScore * aP0, CCINIClass * aP1)
{
  wchar_t *v2; // ebp
  wchar_t *i; // edi
  const wchar_t *v4; // esi
  wchar_t *v5; // ebx
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  wchar_t *v8; // eax
  const wchar_t **v9; // esi
  const wchar_t **v10; // edi
  const wchar_t *v11; // eax
  wchar_t *Stringa; // [esp+18h] [ebp+4h]

  v2 = aP0; /*0x6ca313*/
  for ( i = wcschr(aP0, 0x3Du); i; i = wcschr(v2, 0x3Du) ) /*0x6ca32c*/
  {
    v4 = v2; /*0x6ca332*/
    *i = 0; /*0x6ca336*/
    Stringa = v2; /*0x6ca33b*/
    WideString::Trim(v2); /*0x6ca33f*/
    v5 = i + 1; /*0x6ca344*/
    WideString::Trim(i + 1); /*0x6ca349*/
    if ( i[1] == 34 ) /*0x6ca352*/
    {
      v5 = i + 2; /*0x6ca354*/
      v6 = wcschr(i + 2, 0x22u); /*0x6ca35a*/
      if ( !v6 ) /*0x6ca366*/
        break; /*0x6ca366*/
      *v6 = 0; /*0x6ca36c*/
      v7 = v6 + 1; /*0x6ca371*/
      WideString::Trim(v6 + 1); /*0x6ca376*/
      if ( *v7 == 44 ) /*0x6ca37f*/
        ++v7; /*0x6ca381*/
      v2 = v7; /*0x6ca384*/
      v4 = Stringa; /*0x6ca386*/
    }
    else
    {
      v8 = wcspbrk(i + 1, L", "); /*0x6ca392*/
      if ( v8 ) /*0x6ca39c*/
      {
        *v8 = 0; /*0x6ca39e*/
        v2 = v8 + 1; /*0x6ca3a3*/
      }
      else
      {
        v2 = &g_TypeClass_DefaultString; /*0x6ca3a8*/
      }
    }
    if ( !wcslen(v4) ) /*0x6ca3ae*/
      break; /*0x6ca3ae*/
    if ( v4 && off_8421A8 ) /*0x6ca3c9*/
    {
      v9 = (const wchar_t **)&off_8421A8; /*0x6ca3cb*/
      v10 = (const wchar_t **)&off_8421A8; /*0x6ca3d0*/
      while ( _wcsicmp(*v9, Stringa) ) /*0x6ca3e4*/
      {
        v11 = v10[2]; /*0x6ca3e6*/
        v10 += 2; /*0x6ca3e9*/
        v9 = v10; /*0x6ca3ee*/
        if ( !v11 ) /*0x6ca3f0*/
          goto LABEL_18; /*0x6ca3f0*/
      }
      ((void (__fastcall *)(wchar_t *, int))v9[1])(v5, aP1); /*0x6ca3fa*/
    }
    LABEL_18:
    WideString::Trim(v2); /*0x6ca3fd*/
    if ( !wcslen(v2) ) /*0x6ca40f*/
      return 1; /*0x6ca48f*/
  }
  Debug::Log(); /*0x6ca426*/
  return 0; /*0x6ca440*/
}
}
// 0x6CA940
namespace gamemd {
char sub_6CA940(int a1, unsigned short * a2, int a3)
{
  int v4; // esi
  unsigned short *v5; // ebp
  int16_t v7; // [esp+12h] [ebp-6h] BYREF
  int v8; // [esp+14h] [ebp-4h]

  v4 = 0; /*0x6ca94f*/
  v8 = a1; /*0x6ca953*/
  *a2 = 0; /*0x6ca957*/
  if ( a3 <= 0 ) /*0x6ca95c*/
  {
    LABEL_9:
    a2[v4] = 0; /*0x6ca996*/
    return 0; /*0x6ca99e*/
  }
  else
  {
    v5 = a2; /*0x6ca95e*/
    while ( (*(int (**)(int, int16_t *, int))(*(unsigned int *)a1 + 8))(a1, &v7, 2) == 2 ) /*0x6ca975*/
    {
      if ( v7 == 10 ) /*0x6ca980*/
        goto LABEL_9; /*0x6ca980*/
      if ( v7 != 13 ) /*0x6ca986*/
      {
        *v5 = v7; /*0x6ca988*/
        ++v4; /*0x6ca98c*/
        ++v5; /*0x6ca98d*/
      }
      if ( v4 >= a3 ) /*0x6ca994*/
        goto LABEL_9; /*0x6ca994*/
      a1 = v8; /*0x6ca962*/
    }
    a2[v4] = 0; /*0x6ca9a8*/
    return 1; /*0x6ca9b1*/
  }
}
}
// 0x53D850
namespace gamemd {
char sub_53D850()
{

  if ( (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) != dword_AA0150 ) /*0x53d865*/
  {
    int v1; // ebx
    v1 = (*(int (**)(AudioStream *))(*(unsigned int *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2); /*0x53d874*/
    dword_A9FAE8[0] = 0; /*0x53d876*/
    dword_AA0150 = v1; /*0x53d880*/
    int v2 = 1; // edi /*0x53d886*/
    unsigned int *v3 = &unk_A9FAEC; // esi /*0x53d88b*/
    do /*0x53d8b2*/
    {
      int *v4; // eax
      int v7; // [esp+4h] [ebp-8h] BYREF
      v4 = ComputeSpiralOffset(&v7, v2); /*0x53d896*/
      ++v3; /*0x53d89d*/
      ++v2; /*0x53d8a8*/
      *(v3 - 1) = *v4 + v1 * v4[1]; /*0x53d8a9*/
    }
    while ( (int)v3 < (int)&dword_A9FF6C ); /*0x53d8b2*/
  }
  char result = dword_AA0128; // al /*0x53d8b6*/
  int i; // esi
  for ( i = dword_AA0128 - 1; i >= 0; --i ) /*0x53d8c0*/
    result = (*((ZBuffer **)dword_AA011C + i))->RenderSprite(); /*0x53d8cb*/
  return result; /*0x53d8d3*/
}
}
// 0x5541C0
namespace gamemd {
CampaignScore * * Render_Render_5541C0(unsigned short * a0, int a2, AbstractClass * aP2, int a4, AbstractClass * aP4, char a6, char a7)
{
  int v8; // edx

  int dy; // [esp+8h] [ebp-18h] BYREF
  dy = 0; /*0x5541dd*/
  int v13; // [esp+Ch] [ebp-14h] BYREF
  v13 = 0; /*0x5541e5*/
  Text::Layout(g_FogOfWarState, a0, &dy, &v13, aP4); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = aP4; /*0x5541fa*/
    dy = aP4; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  int v14[4]; // [esp+10h] [ebp-10h] BYREF
  v14[1] = a4; /*0x554213*/
  v14[3] = v13; /*0x55421b*/
  v14[0] = aP2; /*0x55421f*/
  v14[2] = v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    v14[0] = aP2 + (aP4 - v8) / 2; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    v14[0] = aP4 + aP2 - v8; /*0x554245*/
  }
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  Rect::Inflate(v10, v11, dy); /*0x554252*/
  return DSurface::FillRectWithColor(v14, a2, 0, 0x9Fu); /*0x554269*/
}
}
// 0x554280
namespace gamemd {
void Render_Render_554280(unsigned short * a0, AbstractClass * aP1, int * a2, unsigned short a4, char a5)
{

  int v5; // esi
  v5 = a2[1]; /*0x55428a*/
  int v8 = *a2; // ecx /*0x554294*/
  int v9; // edx
  v9 = *a2 + a2[2]; /*0x55429b*/
  int v11[4]; // [esp+14h] [ebp-10h] BYREF
  v11[3] = v5 + a2[3]; /*0x55429d*/
  v11[0] = v8; /*0x5542a5*/
  v11[2] = v9; /*0x5542b0*/
  v11[1] = v5; /*0x5542c7*/
  return PrintFontLayout( /*0x554341*/
           aP1,
           a0,
           v11,
           (unsigned int *)g_FogOfWarState,
           (uint8_t)((uint8_t)(a4 >> g_BitShift_Red) << g_BitShift_Green_0)
  | (((uint8_t)((uint8_t)(a4 >> g_BitMask_Green) << g_BitMask_Blue)
  | ((uint8_t)((uint8_t)(a4 >> g_BitShift_Blue) << g_BitMask_Red) << 8)) << 8),
           a5,
           12,
           0,
           0,
           0);
}
}
// 0x63B0A0
namespace gamemd {
AbstractClass * * sub_63B0A0()
{

  *(unsigned int *)&DataGlobal_AC4C28 = 0; /*0x63b0ad*/
  if ( *(unsigned int *)DataGlobal_AC4C1C && DataGlobal_AC4C25 ) /*0x63b0bb*/
  {
    operator delete((*(void **)DataGlobal_AC4C1C)); /*0x63b0be*/
    *(unsigned int *)DataGlobal_AC4C1C = 0; /*0x63b0c6*/
  }
  void *Array_field_0x10 = DataGlobal_AC4B40; // ebp /*0x63b0cc*/
  int v2 = 0; // esi /*0x63b0d2*/
  DataGlobal_AC4C25 = 0; /*0x63b0d6*/
  for ( *(unsigned int *)&DataGlobal_AC4C20 = 0; v2 < (int)Array_field_0x10; ++v2 ) /*0x63b0e2*/
  {
    int v3; // edi
    v3 = *((unsigned int *)DataGlobal_AC4B34 + v2); /*0x63b0e9*/
    if ( (uint8_t)HouseClass::IsAlliedWith(*(void **)(**v3->vtable2 + 540), (void *)dword_A83D4C) ) /*0x63b100*/
      RenderScenarioActionLines((ObjectClass *)v3); /*0x63b10b*/
  }
  int v4; // ebp
  v4 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[164]; /*0x63b115*/
  int i; // esi
  for ( i = 0; i < v4; ++i ) /*0x63b11f*/
  {
    int v6; // edi
    v6 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * i); /*0x63b12d*/
    if ( (uint8_t)HouseClass::IsAlliedWith(v6->u32_21C, (void *)dword_A83D4C) ) /*0x63b136*/
      ((ScriptAction *)v6)->ProcessIdleAction(); /*0x63b141*/
  }
}
}
// 0x642BB0
namespace gamemd {
int sub_642BB0(unsigned int a1)
{

  int result = 0; // eax /*0x642bba*/
  if ( (dword_A8B238[0] == 3 || dword_A8B238[0] == 4) && *(unsigned int *)(*(unsigned int *)(dword_A8DA78 + 4 * a1) + 107) == -1 ) /*0x642bd8*/
    return *((unsigned int *)dword_B054D4 + SessionClass::GetPlayerColorScheme(0xFFFFFFFE)); /*0x642bed*/
  if ( a1 < 8 ) /*0x642bf5*/
  {
    unsigned int PlayerColor; // eax
    PlayerColor = SessionClass::GetPlayerColor(*(unsigned int *)(dword_A8DA78 + 4 * a1)); /*0x642bff*/
    return *((unsigned int *)dword_B054D4 + SessionClass::GetPlayerColorScheme(PlayerColor)); /*0x642c15*/
  }
  return result; /*0x642bec*/
}
}
// 0x660000
namespace gamemd {
int sub_660000()
{
  int result; // eax
  int i; // edi
  int v3; // ecx
  int v4; // esi
  int v5; // eax

  result = g_TriggerEventState; /*0x660000*/
  for ( i = 0; i < g_TriggerEventState; ++i ) /*0x660006*/
  {
    v3 = *(unsigned int *)(g_TriggerPool + 4 * i); /*0x660012*/
    v4 = *(unsigned int *)(v3 + 48); /*0x660015*/
    v5 = *(unsigned int *)(v3 + 56); /*0x660018*/
    if ( v4 != -1 ) /*0x66001e*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= v5 ) /*0x66002a*/
        goto LABEL_6; /*0x66002a*/
      v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x66002c*/
    }
    if ( v5 > 0 ) /*0x660030*/
      goto LABEL_7; /*0x660030*/
    LABEL_6:
    if ( *(unsigned char *)(v3 + 60) ) /*0x660032*/
      LABEL_7:
    RenderGradientTrapezoid((float *)v3); /*0x660039*/
    result = g_TriggerEventState; /*0x66003e*/
  }
  return result; /*0x660049*/
}
}
// 0x6603B0
namespace gamemd {
void sub_6603B0()
{
  int v1; // ebx
  int LoadGame_field_0x04; // edi
  int v3; // esi
  int v4; // edx
  int v5; // eax
  void *v6; // esi
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v1 = g_TriggerEventState - 1; /*0x6603b7*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x6603bc*/
  {
    LoadGame_field_0x04 = g_TriggerPool; /*0x6603c4*/
    do /*0x6603ca*/
    {
      v3 = *(unsigned int *)(LoadGame_field_0x04 + 4 * v1); /*0x6603ca*/
      v4 = *(unsigned int *)(v3 + 36); /*0x6603cd*/
      v5 = *(unsigned int *)(v3 + 44); /*0x6603d0*/
      if ( v4 != -1 ) /*0x6603d6*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4 >= v5 ) /*0x6603e2*/
          goto LABEL_7; /*0x6603e2*/
        v5 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v4; /*0x6603e4*/
      }
      if ( !v5 ) /*0x6603e8*/
      {
        LABEL_7:
        if ( !*(unsigned char *)(v3 + 60) ) /*0x6603ea*/
        {
          v6 = *(void **)(LoadGame_field_0x04 + 4 * v1); /*0x6603f1*/
          if ( v6 ) /*0x6603f6*/
          {
            v8 = *(unsigned int *)(LoadGame_field_0x04 + 4 * v1); /*0x660408*/
            v7 = (*(int (**)(LoadGame *, int *))(*(unsigned int *)DataGlobal_B04DA8 + 16))(&stru_B04DA8, &v8); /*0x66040c*/
            if ( v7 != -1 && v7 < g_TriggerEventState ) /*0x66041c*/
            {
              --g_TriggerEventState; /*0x660421*/
              for ( ; /*0x660427*/
              v7 < g_TriggerEventState;
              *(unsigned int *)(g_TriggerPool + 4 * v7 - 4) = *(unsigned int *)(g_TriggerPool
              + 4 * v7) )
              {
                ++v7; /*0x66042f*/
              }
            }
            operator delete((v6)); /*0x660442*/
            LoadGame_field_0x04 = g_TriggerPool; /*0x660447*/
          }
        }
      }
      --v1; /*0x660450*/
    }
    while ( v1 >= 0 ); /*0x6603ca*/
  }
}
}
// 0x7760B0
namespace gamemd {
void * Render_Render_7760B0(HDC hdc, const char * a2, a4, a4, char a5, void * a3)
{
  struct tagPOINT pt; // [esp+10h] [ebp-7Ch] BYREF
  struct tagTEXTMETRICA tm; // [esp+18h] [ebp-74h] BYREF
  LOGFONTA lf; // [esp+50h] [ebp-3Ch] BYREF

  SaveDC(hdc); /*0x7760bc*/
  SetGraphicsMode(hdc, 2); /*0x7760c5*/
  ModifyWorldTransform(hdc, 0, 1u); /*0x7760d1*/
  SetViewportOrgEx(hdc, 0, 0, 0); /*0x7760db*/
  SetWindowOrgEx(hdc, 0, 0, 0); /*0x7760e5*/
  pt.x = a3; /*0x776101*/
  pt.y = a4; /*0x776105*/
  DPtoLP(hdc, &pt, 1); /*0x776109*/
  memset(&lf.lfWidth, 0, 12); /*0x77610f*/
  lf.lfHeight = -pt.y; /*0x776121*/
  lf.lfCharSet = 0; /*0x776133*/
  lf.lfOutPrecision = 0; /*0x77613b*/
  lf.lfClipPrecision = 0; /*0x776145*/
  lf.lfWeight = (a5 & 1) != 0 ? 0x2BC : 0;
  lf.lfUnderline = (a5 & 4) != 0; /*0x77615c*/
  lf.lfStrikeOut = (a5 & 8) != 0; /*0x776160*/
  lf.lfQuality = 0; /*0x77616c*/
  lf.lfItalic = (a5 & 2) != 0; /*0x776176*/
  lf.lfPitchAndFamily = 0; /*0x776187*/
  strcpy(lf.lfFaceName, a2); /*0x77618b*/
  HFONT v7; // eax
  v7 = CreateFontIndirectA(&lf); /*0x77619f*/
  HFONT v8 = v7; // esi /*0x7761a1*/
  if ( a3 ) /*0x7761aa*/
  {
    HGDIOBJ v9; // ebx
    v9 = SelectObject(hdc, v7); /*0x7761ba*/
    GetTextMetricsA(hdc, &tm); /*0x7761be*/
    HGDIOBJ v10; // eax
    v10 = SelectObject(hdc, v9); /*0x7761c6*/
    DeleteObject(v10); /*0x7761c9*/
    lf.lfWidth = Math::RoundToInt(fabs((double)pt.x) * (double)tm.tmAveCharWidth / fabs((double)pt.y) + 0.5); /*0x7761ec*/
    v8 = CreateFontIndirectA(&lf); /*0x7761f7*/
  }
  RestoreDC(hdc, -1); /*0x7761fc*/
  return v8; /*0x776204*/
}
}
// 0x556D40
namespace gamemd {
void sub_556D40()
{

  int i; // edi
  for ( i = g_MissionQueueFrame.random[223] - 1; i >= 0; --i ) /*0x556d4c*/
  {
    ObjectClass *v2; // esi
    v2 = *(ObjectClass **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556d59*/
    Render_Render_556B70(v2); /*0x556d5e*/
    if ( v2->vfptr1 || *(&v2->referenceCount + 4 * (int)v2->vfptr3) ) /*0x556d70*/
    {
      Render_Render_556C00(v2); /*0x556dd2*/
    }
    else if ( v2 ) /*0x556d7a*/
    {
      ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF
      v4 = v2; /*0x556d8c*/
      int v3; // eax
      v3 = (*(int (**)(int *, ObjectClass **))(g_MissionQueueFrame.random[219] + 16))( /*0x556d90*/
             &g_MissionQueueFrame.random[219],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[223] ) /*0x556da0*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556da5*/
        for ( ; /*0x556dab*/
        v3 < g_MissionQueueFrame.random[223];
        *(unsigned int *)(g_MissionQueueFrame.random[220] + 4 * v3 - 4) = *(unsigned int *)(g_MissionQueueFrame.random[220]
        + 4 * v3) )
        {
          ++v3; /*0x556db3*/
        }
      }
      operator delete((v2)); /*0x556dc6*/
    }
  }
}
} // namespace gamemd

// 0x5BE970
namespace gamemd {
int sub_5BE970(int a1)
{
  return dword_82D028[7 * a1]; /*0x5be984*/
}
} // namespace gamemd

// 0x5BE990
namespace gamemd {
int sub_5BE990(int a1)
{
  return dword_82D02C[7 * a1]; /*0x5be9a4*/
}
} // namespace gamemd

// 0x5C0640
namespace gamemd {
char sub_5C0640(const char * a1, char * a2, int a3)
{

  char *v3; // ebp
  char Source[200]; // [esp+80h] [ebp-C8h] BYREF
  v3 = strcpy(Source, a1); /*0x5c0672*/
  char i; // al
  for ( i = Source[0]; i; i = *++v3 ) /*0x5c0684*/
  {
    if ( i == 46 ) /*0x5c0688*/
      break; /*0x5c0688*/
  }
  *v3 = 0; /*0x5c0699*/
  GameOptionsClass::UnlockMovieIfNeeded_MoviesList(dword_A8EB60, Source); /*0x5c06a3*/
  strcpy(v3, aBik_0); /*0x5c06c9*/
  unsigned int *v5; // eax
  unsigned int v11[22]; // [esp+14h] [ebp-134h] BYREF
  v5 = CCFileClass::Construct(v11, Source); /*0x5c06d6*/
  char v6; // bl
  v6 = v5->vt_slot_20(0); /*0x5c06e8*/
  v11[0] = &vt_CCFileClass; /*0x5c06ea*/
  int v13; // [esp+78h] [ebp-D0h]
  v13 = 0; /*0x5c06f2*/
  unsigned char v12[12]; // [esp+6Ch] [ebp-DCh] BYREF
  Vector::Clear((int)v12); /*0x5c06fa*/
  v11[0] = (unsigned int)&off_7E1668; /*0x5c0703*/
  ((BufferIOFileClass *)(v11))->Dtor(); /*0x5c070b*/
  if ( !v6 ) /*0x5c0712*/
  {
    strcpy(v3, aVqa); /*0x5c0735*/
    unsigned int *v7; // eax
    v7 = CCFileClass::Construct(v11, Source); /*0x5c0742*/
    char v8; // bl
    v8 = v7->vt_slot_20(0); /*0x5c0754*/
    v11[0] = &vt_CCFileClass; /*0x5c0756*/
    v13 = 0; /*0x5c075e*/
    Vector::Clear((int)v12); /*0x5c0766*/
    v11[0] = (unsigned int)&off_7E1668; /*0x5c076f*/
    ((BufferIOFileClass *)(v11))->Dtor(); /*0x5c0777*/
    if ( !v8 ) /*0x5c077e*/
      return 0; /*0x5c07be*/
  }
  if ( a2 ) /*0x5c0786*/
    strcpy(a2, Source); /*0x5c07a3*/
  return 1; /*0x5c07ac*/
}
} // namespace gamemd

// 0x5E8740
namespace gamemd {
bool sub_5E8740(int a1)
{
  return wcscmp(*(const wchar_t **)(dword_A8DA78 + 4 * a1), word_A8D610) == 0; /*0x5e875b*/
}
} // namespace gamemd

// 0x5FFFA0
namespace gamemd {
char sub_5FFFA0()
{
  __m64 v1; // mm0

  char result = dword_AC1688; // al /*0x5fffa0*/
  int i; // esi
  BuildingLight *v4; // [esp+0h] [ebp-4h]
  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5fffab*/
    result = (v4)->CalculateShading(v1); /*0x5fffb6*/
  return result; /*0x5fffbe*/
}
} // namespace gamemd

// 0x63CA80
namespace gamemd {
unsigned int * sub_63CA80(unsigned int * a1, unsigned char * a2, int a3)
{

  int *ScenarioClassActionCoords; // ecx
  unsigned int v10[3]; // [esp+8h] [ebp-Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v10, a2); /*0x63ca90*/
  int v5 = *ScenarioClassActionCoords; // eax /*0x63ca92*/
  int v6 = ScenarioClassActionCoords->Coord3D_field_0x04; // edx /*0x63ca97*/
  int v7 = ScenarioClassActionCoords->q008; // esi /*0x63ca9a*/
  if ( *ScenarioClassActionCoords == -1 && v6 == -1 && v7 == -1 && a3 ) /*0x63caad*/
  {
    int *v8; // ecx
    v8 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)a3 + 88))(a3, v10); /*0x63cab9*/
    v5 = *v8; /*0x63cabb*/
    v6 = v8[1]; /*0x63cabd*/
    v7 = v8[2]; /*0x63cac0*/
  }
  *a1 = v5; /*0x63cac5*/
  a1[1] = v6; /*0x63caca*/
  a1[2] = v7; /*0x63cacd*/
  return a1; /*0x63cac9*/
}
} // namespace gamemd

// 0x660530
namespace gamemd {
bool sub_660530()
{
  return dword_B04DB8 == 0; /*0x66053a*/
}
} // namespace gamemd

// 0x68ED80
namespace gamemd {
int Render_Get(ScoreScreen * aP0)
{

  int v1 = 0; // ebp /*0x68ed8a*/
  int v2 = 0; // ebx /*0x68ed8d*/
  int v12; // [esp+20h] [ebp-4h]
  v12 = 0; /*0x68ed96*/
  int v10; // [esp+1Ch] [ebp-8h]
  v10 = 0; /*0x68ed9a*/
  if ( dword_A80238 > 0 ) /*0x68ed9e*/
  {
    do /*0x68ee21*/
    {
      int v4 = *&dword_A8022C->vtable1; // esi /*0x68edad*/
      if ( (uint8_t)(aP0)->IsAlliedWith((void *)v4) /*0x68edca*/
        && (uint8_t)HouseClass::IsAlliedWith((void *)v4, aP0)
        || aP0 == (void *)v4 )
      {
        int v5; // ebx
        v5 = VectorClass::GetCount(&v4->SuperWeaponsAvailable) + v2; /*0x68eddd*/
        int v6; // ebx
        v6 = VectorClass::GetCount((unsigned int *)(v4 + 21860)) + v5; /*0x68edea*/
        int v7; // ebx
        v7 = VectorClass::GetCount((unsigned int *)(v4 + 21880)) + v6; /*0x68edf7*/
        v2 = VectorClass::GetCount((unsigned int *)(v4 + 21900)) + v7; /*0x68ee0c*/
        v1 += v4->killedBuildingsOfHouses + v4->__pad_5488; /*0x68ee0e*/
      }
      ++v10; /*0x68ee1d*/
    }
    while ( v10 < dword_A80238 ); /*0x68ee21*/
    v12 = v2; /*0x68ee23*/
  }
  Debug::Log(); /*0x68ee34*/
  float v11; // [esp+1Ch] [ebp-8h]
  if ( v2 + v1 <= 0 ) /*0x68ee3e*/
    v11 = 0.0; /*0x68ee4e*/
  else
    v11 = (double)v12 / (double)(v2 + v1); /*0x68ee48*/
  Debug::Log(); /*0x68ee65*/
  (*(void (__stdcall **)(char *))(aP0->u32_24 + 24))(&aP0->u32_24); /*0x68ee82*/
  Debug::Log(); /*0x68ee8b*/
  void *othera; // [esp+28h] [ebp+4h]
  othera = (void *)(aP0->u32_2E0 + aP0->u32_1DC); /*0x68eea3*/
  float otherb; // [esp+28h] [ebp+4h]
  if ( (int)othera <= 0 ) /*0x68eea7*/
    otherb = 0.0; /*0x68eec1*/
  else
    otherb = (double)(*(int (__stdcall **)(char *))(*((unsigned int *)aP0 + 9) + 24))((char *)aP0 + 36) /*0x68eebb*/
  / (double)(int)othera;
  Debug::Log(); /*0x68eed8*/
  int v9; // [esp-4h] [ebp-28h]
  v9 = Math::RoundToInt((otherb + v11) * 0.5 * 100.0); /*0x68eef8*/
  Debug::Log(); /*0x68eefe*/
  return v9; /*0x68ef08*/
}
} // namespace gamemd

// 0x6D9A50
namespace gamemd {
int sub_6D9A50(int a1, int a2, int a3, int a4)
{

  int result = 0; // eax /*0x6d9a5f*/
  int i; // [esp+10h] [ebp-28h]
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x6d9a69*/
  {
    unsigned char *v5; // esi
    v5 = *(unsigned char **)(dword_8A0394 + 4 * result); /*0x6d9a75*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)v5 + 44))(v5) == 6 ) /*0x6d9a82*/
    {
      if ( v5[128] ) /*0x6d9a88*/
      {
        int *v6; // eax
        unsigned char v10[16]; // [esp+28h] [ebp-10h] BYREF
        v6 = (int *)(*(int (**)(unsigned char *, unsigned char *))(*(unsigned int *)v5 + 300))(v5, v10); /*0x6d9a9f*/
        int v7 = DSurface_ViewBounds + *v6; // ecx /*0x6d9aaf*/
        int v8; // edx
        v8 = dword_886FA4 + v6[1]; /*0x6d9ac4*/
        if ( a1 < v6[2] + v7 && a2 < v6[3] + v8 && a1 + a3 > v7 && a4 + a2 > v8 ) /*0x6d9af2*/
        {
          Cell::CreateCrater(*v6, v6[1], v6[2], v6[3], 0); /*0x6d9b15*/
          v5[128] = 0; /*0x6d9b1a*/
        }
      }
    }
    result = i + 1; /*0x6d9b2b*/
  }
  return result; /*0x6d9b38*/
}
} // namespace gamemd

// 0x72B340
namespace gamemd {
int sub_72B340()
{
  return dword_B0FB80; /*0x72b345*/
}
} // namespace gamemd

// 0x72B360
namespace gamemd {
int sub_72B360()
{
  return dword_B0FB88; /*0x72b365*/
}
} // namespace gamemd

// 0x72B500
namespace gamemd {
int sub_72B500()
{
  return dword_B0FB98; /*0x72b505*/
}
} // namespace gamemd

// 0x72B520
namespace gamemd {
ObjectClass * Render_Render_72B520()
{
  return dword_B0FBA0; /*0x72b525*/
}
} // namespace gamemd

// 0x72E820
namespace gamemd {
void Render_Draw(int a1, int *a2, char a3)
{
  RenderScoreScreen(a1, a2, a3); /*0x72e82b*/
  UI_Draw_72E730(a1, a2, dword_B0FBCC, (int)dword_B0FB50, (int)dword_B0FA04); /*0x72e848*/
}
} // namespace gamemd

// 0x72EB50
namespace gamemd {
void * sub_72EB50()
{

  dword_B0FAC4 = LoadFileSHP(off_844CD4, (bool *)&byte_B0FC95); /*0x72eb6b*/
  dword_B0F9DC = LoadFileSHP(off_844CD8, (bool *)&byte_B0FC96); /*0x72eb80*/
  dword_B0FAC0 = LoadFileSHP(off_844CDC, (bool *)&byte_B0FC97); /*0x72eb95*/
  dword_B0FB50 = LoadFileSHP(off_844CE0, (bool *)&byte_B0FC98); /*0x72ebaa*/
  dword_B0FA04 = LoadFileSHP(off_844CE4, (bool *)&byte_B0FC99); /*0x72ebbf*/
  dword_B0FAF8 = LoadFileSHP(off_844CE8, (bool *)&byte_B0FC9A); /*0x72ebd4*/
  dword_B0FA74 = LoadFileSHP(off_844CEC, (bool *)&byte_B0FC9B); /*0x72ebe9*/
  dword_B0FA38 = LoadFileSHP(off_844CF0, (bool *)&byte_B0FC9C); /*0x72ebfe*/
  dword_B0FAE8 = LoadFileSHP(off_844CF4, (bool *)&byte_B0FC9D); /*0x72ec13*/
  void *result; // eax
  result = LoadFileSHP(off_844CF8, (bool *)&byte_B0FC9E); /*0x72ec18*/
  dword_B0FA54 = result; /*0x72ec1d*/
  return result; /*0x72ec22*/
}
} // namespace gamemd

// 0x774070
namespace gamemd {
bool sub_774070()
{
  return dword_B72D0C && *(unsigned int *)(dword_B72D0C + 8) && *(unsigned char *)(dword_B72D0C + 1036); /*0x77408f*/
}
} // namespace gamemd

// 0x7C3230
namespace gamemd {
int sub_7C3230(int a1, int a2, int a3)
{
  if ( a2 ) /*0x7c3232*/
    *(unsigned int *)(a1 + 1924) = a2; /*0x7c3234*/
  else
    *(unsigned int *)(a1 + 1924) = nullsub_49; /*0x7c323c*/
  if ( a3 ) /*0x7c324c*/
    *(unsigned int *)(a1 + 1928) = a3; /*0x7c324e*/
  else
    *(unsigned int *)(a1 + 1928) = nullsub_49; /*0x7c325a*/
  return -1; /*0x7c3257*/
}
} // namespace gamemd

// 0x7C3690
namespace gamemd {
int sub_7C3690(int a1, int a2)
{

  int result = -1; // eax /*0x7c3690*/
  if ( a2 > 0 && *(uint16_t *)(a1 + 236) >= a2 ) /*0x7c36a4*/
  {
    result = *(unsigned int *)(a1 + 284); /*0x7c36a6*/
    *(unsigned int *)(a1 + 284) = (uint16_t)a2; /*0x7c36b2*/
  }
  return result; /*0x7c36b8*/
}
} // namespace gamemd

// 0x7C3710
namespace gamemd {
int sub_7C3710(unsigned char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  *a2 = a1[242]; /*0x7c3718*/
  *a3 = a1[243]; /*0x7c3726*/
  *a4 = a1[264]; /*0x7c3734*/
  return -1; /*0x7c3739*/
}
} // namespace gamemd
