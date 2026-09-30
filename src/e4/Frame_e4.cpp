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

// 0x4F4780
namespace gamemd {
TechnoTypeClass * Frame::Present()
{

  int *v9; // eax
  int result; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // ebp
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  double v24; // st7
  int v25; // edi
  int v26; // eax
  double v27; // st7
  unsigned int v28; // ebx
  int v29; // eax
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
  int v47; // [esp+62h] [ebp-1Ch]
  int v48; // [esp+66h] [ebp-18h]
  int v49; // [esp+6Ah] [ebp-14h]
  unsigned __int64 Rect; // [esp+6Eh] [ebp-10h] BYREF
  int Rect_8; // [esp+76h] [ebp-8h]
  int v52; // [esp+8Eh] [ebp+10h]

  if ( !a5 ) /*0x4f4790*/
  {
    v9 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))(a1, &v46); /*0x4f479b*/
    v39 = *v9; /*0x4f47a0*/
    v40 = v9[1]; /*0x4f47a7*/
    v41 = v9[2]; /*0x4f47b6*/
    LODWORD(v42) = v9[3]; /*0x4f47bd*/
  }
  result = ((int (*)(int, unsigned __int64 *))GetClientRect)(dword_A8ED54[233983], &Rect); /*0x4f47cc*/
  if ( result ) /*0x4f47d4*/
  {
    *(unsigned long long *)&v38[4] = Rect; /*0x4f47e2*/
    result = ((int (*)(int, unsigned char *))ClientToScreen)(dword_A8ED54[233983], &v38[4]); /*0x4f47f6*/
    if ( result ) /*0x4f47fe*/
    {
      v11 = (*(int (**)(int, int, int, int))(*(unsigned int *)a1 + 128))(a1, a4, a3, a2); /*0x4f4811*/
      v12 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4817*/
      v13 = MEMORY[0x87F7E8][2]; /*0x4f4828*/
      v45 = v40; /*0x4f4830*/
      v46 = v41; /*0x4f4834*/
      v47 = v12; /*0x4f4838*/
      v48 = v11; /*0x4f483c*/
      if ( !MEMORY[0x87F7E8][1] ) /*0x4f4840*/
      {
        if ( !MEMORY[0x87F7E8][2] ) /*0x4f4844*/
          goto LABEL_18; /*0x4f4844*/
        goto LABEL_13; /*0x4f4844*/
      }
      if ( MEMORY[0x87F7E8][1] <= 0 ) /*0x4f484a*/
      {
        if ( MEMORY[0x87F7E8][1] >= 0 ) /*0x4f4856*/
        {
LABEL_13:
          if ( MEMORY[0x87F7E8][2] > 0 ) /*0x4f4860*/
          {
            v14 = v11 - MEMORY[0x87F7E8][2]; /*0x4f4865*/
            v46 = MEMORY[0x87F7E8][2] + v41; /*0x4f4867*/
LABEL_17:
            v48 = v14; /*0x4f4871*/
            goto LABEL_18; /*0x4f4871*/
          }
          if ( MEMORY[0x87F7E8][2] < 0 ) /*0x4f486d*/
          {
            v14 = MEMORY[0x87F7E8][2] + v11; /*0x4f486f*/
            goto LABEL_17; /*0x4f486f*/
          }
LABEL_18:
          if ( !LOBYTE(MEMORY[0x87F7E8][539877]) && !HIBYTE(dword_A8ED54[5]) ) /*0x4f4887*/
          {
            v15 = MEMORY[0x87F7E8][7668] - v12; /*0x4f4895*/
            if ( (*(int (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7878] + 124))(MEMORY[0x87F7E8][7878]) >= v15 ) /*0x4f489e*/
              v16 = v15; /*0x4f48ad*/
            else
              v16 = (*(int (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7878] + 124))(MEMORY[0x87F7E8][7878]); /*0x4f48a8*/
            if ( v16 <= 0 ) /*0x4f48b1*/
            {
              v18 = 0; /*0x4f48df*/
            }
            else
            {
              v17 = MEMORY[0x87F7E8][7668] - v47; /*0x4f48c3*/
              if ( (*(int (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7878] + 124))(MEMORY[0x87F7E8][7878]) >= v17 ) /*0x4f48cc*/
                v18 = v17; /*0x4f48db*/
              else
                v18 = (*(int (**)(unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7878] + 124))(MEMORY[0x87F7E8][7878]); /*0x4f48d6*/
            }
            v13 = MEMORY[0x87F7E8][2]; /*0x4f48e5*/
            v19 = v18 + v45; /*0x4f48eb*/
            v12 = v47; /*0x4f48ed*/
            v45 = v19; /*0x4f48f1*/
          }
          v20 = *a8; /*0x4f48f9*/
          v21 = a8[1]; /*0x4f48fb*/
          v22 = a8[2]; /*0x4f48fe*/
          Rect_8 = a8[3]; /*0x4f4904*/
          v49 = v20; /*0x4f4910*/
          Rect = __PAIR64__(v22, v21); /*0x4f4914*/
          if ( MEMORY[0x87F7E8][7887] /*0x4f4934*/
            && (*(unsigned int *)(MEMORY[0x87F7E8][7887] + 192) || *(unsigned int *)(MEMORY[0x87F7E8][7887] + 196) != 1072693248) )
          {
            v52 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4941*/
            v23 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x4f4949*/
            v24 = (double)v52; /*0x4f494f*/
            v25 = MEMORY[0x87F7E8][7887]; /*0x4f4953*/
            *(unsigned int *)v38 = v23; /*0x4f4959*/
            v42 = v24 / *(double *)(MEMORY[0x87F7E8][7887] + 192); /*0x4f4965*/
            v26 = Math::RoundToInt((v24 - v42) * 0.5); /*0x4f4973*/
            v27 = (double)*(int *)v38; /*0x4f4978*/
            v20 = v26; /*0x4f497c*/
            *(double *)v38 = v27 / *(double *)(v25 + 192); /*0x4f4986*/
            v21 = Math::RoundToInt((v27 - *(double *)v38) * 0.5); /*0x4f499d*/
            v28 = Math::RoundToInt(v42); /*0x4f49a8*/
            v29 = Math::RoundToInt(*(double *)v38); /*0x4f49aa*/
            v13 = MEMORY[0x87F7E8][2]; /*0x4f49af*/
            v49 = v20; /*0x4f49b5*/
            Rect = __PAIR64__(v28, v21); /*0x4f49b9*/
            Rect_8 = v29; /*0x4f49c1*/
          }
          else
          {
            if ( v22 >= v12 ) /*0x4f49c9*/
              HIDWORD(Rect) = v12; /*0x4f49cb*/
            if ( Rect_8 >= v48 ) /*0x4f49d9*/
              Rect_8 = v48; /*0x4f49db*/
          }
          if ( v13 < 0 ) /*0x4f49e1*/
            LODWORD(Rect) = v21 - v13; /*0x4f49e5*/
          if ( MEMORY[0x87F7E8][1] < 0 ) /*0x4f49f0*/
            v49 = v20 - MEMORY[0x87F7E8][1]; /*0x4f49f4*/
          if ( !LOBYTE(MEMORY[0x87F7E8][539364]) ) /*0x4f49ff*/
            goto LABEL_51; /*0x4f49ff*/
          if ( MEMORY[0x87F7E8][7904] ) /*0x4f4a09*/
          {
            if ( (unsigned __int8)Frame::Init() ) /*0x4f4a0b*/
            {
              v13 = MEMORY[0x87F7E8][2]; /*0x4f4a14*/
              v30 = 1; /*0x4f4a1a*/
LABEL_47:
              if ( !BYTE2(MEMORY[0x87F7E8][5457]) && !v13 && !v30 ) /*0x4f4a36*/
              {
                v48 -= *(unsigned int *)(dword_A8ED54[132033] + 12); /*0x4f4a4a*/
                Rect_8 -= *(unsigned int *)(dword_A8ED54[132033] + 12); /*0x4f4a53*/
              }
LABEL_51:
              if ( MEMORY[0x87F7E8][1] ) /*0x4f4a5e*/
              {
                v31 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1) - *(unsigned int *)(dword_A8ED54[132033] + 12); /*0x4f4a7c*/
                HIDWORD(v42) = v41; /*0x4f4a82*/
                v44 = v31; /*0x4f4a86*/
                v43 = abs32(MEMORY[0x87F7E8][1]); /*0x4f4a91*/
                if ( MEMORY[0x87F7E8][1] >= 0 ) /*0x4f4a95*/
                  LODWORD(v42) = v45 - MEMORY[0x87F7E8][1]; /*0x4f4aad*/
                else
                  LODWORD(v42) = v45 + v47; /*0x4f4aa1*/
                v32 = *(unsigned int *)MEMORY[0x87F7E8][7880]; /*0x4f4ac1*/
                v33 = (*(int (**)(unsigned int, unsigned char *, double *, unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7880] + 120))( /*0x4f4ac5*/
                        MEMORY[0x87F7E8][7880],
                        v38,
                        &v42,
                        0);
                (*(void (**)(unsigned int, int))(v32 + 16))(MEMORY[0x87F7E8][7880], v33); /*0x4f4acf*/
                v13 = MEMORY[0x87F7E8][2]; /*0x4f4ad2*/
              }
              if ( v13 ) /*0x4f4ada*/
              {
                v34 = abs32(v13); /*0x4f4ae7*/
                v43 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4af0*/
                LODWORD(v42) = v40; /*0x4f4af9*/
                v44 = v34; /*0x4f4aff*/
                if ( MEMORY[0x87F7E8][2] >= 0 ) /*0x4f4b03*/
                  HIDWORD(v42) = v46 - MEMORY[0x87F7E8][2]; /*0x4f4b1b*/
                else
                  HIDWORD(v42) = v46 + v48; /*0x4f4b0f*/
                v35 = *(unsigned int *)MEMORY[0x87F7E8][7880]; /*0x4f4b2f*/
                v36 = (*(int (**)(unsigned int, unsigned char *, double *, unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][7880] + 120))( /*0x4f4b33*/
                        MEMORY[0x87F7E8][7880],
                        v38,
                        &v42,
                        0);
                (*(void (**)(unsigned int, int))(v35 + 16))(MEMORY[0x87F7E8][7880], v36); /*0x4f4b3d*/
              }
              if ( v37 && MEMORY[0x87F7E8][8086] ) /*0x4f4b50*/
                (*(void (**)(unsigned int, int, unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][8086] + 60))( /*0x4f4b57*/
                  MEMORY[0x87F7E8][8086],
                  a1,
                  0);
              result = (*(int (**)(unsigned int, int *, int))(*(unsigned int *)MEMORY[0x87F7E8][7880] + 8))( /*0x4f4b7b*/
                         MEMORY[0x87F7E8][7880],
                         &v45,
                         a1);
              if ( v37 ) /*0x4f4b83*/
              {
                result = MEMORY[0x87F7E8][8086]; /*0x4f4b85*/
                if ( MEMORY[0x87F7E8][8086] ) /*0x4f4b8c*/
                {
                  ((void (*)(int))Sleep)(50); /*0x4f4b90*/
                  return (*(int (**)(unsigned int, int, unsigned int))(*(unsigned int *)MEMORY[0x87F7E8][8086] + 64))( /*0x4f4ba1*/
                           MEMORY[0x87F7E8][8086],
                           a1,
                           0);
                }
              }
              return result; /*0x4f4ba1*/
            }
            v13 = MEMORY[0x87F7E8][2]; /*0x4f4a1e*/
          }
          v30 = 0; /*0x4f4a24*/
          goto LABEL_47; /*0x4f4a24*/
        }
        v12 += MEMORY[0x87F7E8][1]; /*0x4f4858*/
      }
      else
      {
        v12 -= MEMORY[0x87F7E8][1]; /*0x4f484e*/
        v45 = MEMORY[0x87F7E8][1] + v40; /*0x4f4850*/
      }
      v47 = v12; /*0x4f485a*/
      goto LABEL_13; /*0x4f485a*/
    }
  }
  return result; /*0x4f4ba4*/

}
} // namespace gamemd
// 0x724C00
namespace gamemd {
TechnoTypeClass * Frame::Init()
{

  return *((unsigned int *)this + 1) != 0; /*0x724c0a*/

}
} // namespace gamemd